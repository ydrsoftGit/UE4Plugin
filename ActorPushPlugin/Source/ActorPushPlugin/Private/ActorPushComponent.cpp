// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorPushComponent.h"

#include "Kismet\GameplayStatics.h"
#include "GameFramework\Character.h"
#include "Kismet\KismetSystemLibrary.h"
#include "Components\CapsuleComponent.h"
#include "GameFramework\CharacterMovementComponent.h"
#include "Kismet\KismetMathLibrary.h"
#include "Components\TimelineComponent.h"
#include "Kismet\KismetStringLibrary.h"
#include "NavigationSystem.h"

DEFINE_LOG_CATEGORY_CLASS(UActorPushComponent, ActorPush);
UActorPushComponent::UActorPushComponent()
{

	PushInterpDeltaAcceleratedSpeed = 600.f;
	ClearCurrentVelocityDelay = 0.2f;
	ActorMass = 100.f;
	MassRateInRangeA = 4.f;
	MassRateInRangeB = 0.f;
	MassRateOutRangeA = 4.f;
	MassRateOutRangeB = 0.f;
	SlideSelfScalar = 1.0f;
	PushOtherScalar = 1.f;
	bEnableExclusion = true;
	DebugType = EDrawDebugTrace::None;
	CanPushMassRate = 2.5;
	bKeepInNavigation = false;
	KeepNavigationQueryExtent = FVector(5.f, 5.f, 200.f);
	TraceCapsuleHelfHeight = 100.f;
	TraceCapsuleRaidus = 50.f;
	ActorPushSpeed = 600.f;

	bPushOtherVelocityToZero = true;
	bPushSelfVelocityToZero = true;

}

void UActorPushComponent::BeginPlay()
{
	Super::BeginPlay();
	//push
	AActor* Owner = GetOwner();
	if (Owner)
	{
		AttachActorPtr = Owner;
		AttachCharacterPtr = Cast<ACharacter>(Owner);
		if (AttachCharacterPtr)
		{
			bNotCharacter = false;
			ActorPushSpeed = AttachCharacterPtr->GetCharacterMovement()->GetMaxSpeed();
		}
		else
		{
			bNotCharacter = true;
		}
	}

}

void UActorPushComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	if (bPushOtherVelocityToZero)
	{
		if (!CurrentVelocity.IsNearlyZero())
		{
			CurrentVelocity = UKismetMathLibrary::VInterpTo(CurrentVelocity, FVector(0.f), DeltaTime, 2000.f * DeltaTime);
			PushActorDeltaVector = CurrentVelocity;
			ExecutePushMove(CurrentVelocity * DeltaTime);
		}
	}
	else
	{
		CurrentVelocity = UKismetMathLibrary::VInterpTo(CurrentVelocity, PushOtherNewVelocity, DeltaTime, PushInterpDeltaAcceleratedSpeed * DeltaTime * UKismetMathLibrary::FClamp(PushOtherNewMassRate, 0.f, 4.f));
		PushActorDeltaVector = CurrentVelocity;
		ExecutePushMove(CurrentVelocity * DeltaTime);
		bPushOtherVelocityToZero = true;

	}

	if (bPushSelfVelocityToZero)
	{
		if (!CurrentVelocity_Self.IsNearlyZero())
		{
			CurrentVelocity_Self = UKismetMathLibrary::VInterpTo(CurrentVelocity_Self, FVector(0.f), DeltaTime, 2000.f * DeltaTime);
			PushSelfDeltaVector = CurrentVelocity_Self;
			ExecutePushMove(CurrentVelocity_Self * DeltaTime);
		}
	}
	else
	{
		CurrentVelocity_Self = UKismetMathLibrary::VInterpTo(CurrentVelocity_Self, PushSelfNewVelocity, DeltaTime, PushInterpDeltaAcceleratedSpeed * DeltaTime * UKismetMathLibrary::FClamp(PushSelfNewMassRate, 0.f, 3.f));
		PushSelfDeltaVector = CurrentVelocity_Self;
		ExecutePushMove(CurrentVelocity_Self * DeltaTime);
		bPushSelfVelocityToZero = true;
	}

	//push
	if (bEnableExclusion && AttachActorPtr)
	{

		FVector TraceStartLocation = AttachActorPtr->GetActorLocation();
		FVector TraceEndLocation = FVector(TraceStartLocation.X, TraceStartLocation.Y, TraceStartLocation.Z - TraceCapsuleHelfHeight);
		TraceStartLocation = FVector(TraceStartLocation.X, TraceStartLocation.Y, TraceStartLocation.Z + TraceCapsuleHelfHeight);
		bool bIsHit = UKismetSystemLibrary::SphereTraceMultiForObjects(this, TraceStartLocation, TraceEndLocation, TraceCapsuleRaidus, TraceObjectTypes, false, IgnoreActors, DebugType, HitResults, true);

		for (auto HitResult : HitResults)
		{
			if (!HitResult.bBlockingHit)
			{
				return;
			}
			UActorPushComponent* OtherPushCom = HitResult.GetActor()->FindComponentByClass<UActorPushComponent>();
			if (!OtherPushCom)
			{
				return;
			}

			//Get the direction scalar that you look at the target
			FVector HitActorLocation = HitResult.GetActor()->GetActorLocation();
			FRotator LookR = UKismetMathLibrary::FindLookAtRotation(TraceStartLocation, FVector(HitActorLocation.X, HitActorLocation.Y, TraceStartLocation.Z));
			FVector LookForwardVector = UKismetMathLibrary::GetForwardVector(LookR);
			//Get the scalar of speed
			FVector NowVelocity = GetActorVelocity();
			FVector NowVelocity_Normalize = NowVelocity;
			UKismetMathLibrary::Vector_Normalize(NowVelocity_Normalize);

			float MassRate = UKismetMathLibrary::MapRangeClamped(ActorMass / OtherPushCom->ActorMass, MassRateInRangeA, MassRateInRangeB, MassRateOutRangeA, MassRateOutRangeB);
			float MassRateDivide = OtherPushCom->ActorMass / ActorMass;
			//Whether the dot product acquisition is moving to the target again, that is, whether the push event is generated
			if (!UKismetMathLibrary::NearlyEqual_FloatFloat(PushOtherScalar, 0.f) && MassRateDivide < CanPushMassRate && (NowVelocity_Normalize | LookForwardVector) > 0)
			{
				if (PushSelfComponents.Num() != 0 && PushSelfComponents.Contains(OtherPushCom))
				{
					float DivideToOther = ActorMass / OtherPushCom->ActorMass;
					if (UKismetMathLibrary::InRange_FloatFloat(DivideToOther, 0.8, 10000.f))
					{
						bool bGreaterThanOtherSpeed = GetActorVelocity().Size() > OtherPushCom->GetActorVelocity().Size();
						if (bGreaterThanOtherSpeed)
						{
							FVector NewPushVelocity = GetBaseSpeed() * LookForwardVector;
							if (!bNotCharacter)
							{
								CalcCharacterMovementVelocity(AttachCharacterPtr->GetMovementComponent()->Velocity * UKismetMathLibrary::FClamp(MassRate, 0.f, 1.0f));
							}
							float ClampMassRate = UKismetMathLibrary::FClamp(MassRate, 0.f, 2.f);
							OtherPushCom->SetOtherSlideMove(NewPushVelocity * ClampMassRate * PushOtherScalar, MassRate, this);
						}
					}
				}
				else
				{
					FVector NewPushVelocity = GetBaseSpeed() * LookForwardVector;
					if (!bNotCharacter)
					{
						CalcCharacterMovementVelocity(AttachCharacterPtr->GetMovementComponent()->Velocity * UKismetMathLibrary::FClamp(MassRate, 0.f, 1.0f));
					}
					float ClampMassRate = UKismetMathLibrary::FClamp(MassRate, 0.f, 1.0f);

					OtherPushCom->SetOtherSlideMove(NewPushVelocity * ClampMassRate * PushOtherScalar, MassRate, this);
				}
			}
			else if ((NowVelocity_Normalize | LookForwardVector) > 0 && !(MassRateDivide < CanPushMassRate))
			{
				CalcCharacterMovementVelocity(FVector(0.f));
			}

			//The condition of judging whether you can push others also applies to pushing yourself - pushing yourself
			if ((NowVelocity_Normalize | LookForwardVector) > 0)
			{
				if (UKismetMathLibrary::NearlyEqual_FloatFloat(SlideSelfScalar, 0.f))
				{
					return;
				}

				FVector LookOhterRightRotation = UKismetMathLibrary::GetRightVector(LookR);
				//If the dot multiplication is greater than zero, use rightvector; if it is less than zero, reverse
				if ((NowVelocity_Normalize | LookOhterRightRotation) < 0)
				{
					LookOhterRightRotation = UKismetMathLibrary::NegateVector(LookOhterRightRotation);
				}
				FVector SelfSlideVelocity;
				SelfSlideVelocity = GetBaseSpeed() * LookOhterRightRotation * 0.3 * SlideSelfScalar;
				float NegateMassRate = UKismetMathLibrary::MapRangeClamped(OtherPushCom->ActorMass / ActorMass, MassRateInRangeA, MassRateInRangeB, MassRateOutRangeA, MassRateOutRangeB);
				SetSelfSlideMove(SelfSlideVelocity * NegateMassRate, NegateMassRate);
			}
		}
	}
}



void UActorPushComponent::ExecutePushMove(FVector AddVector)
{
	if (!AddVector.IsNearlyZero())
	{
		if (bKeepInNavigation)
		{
			FVector OwnerLocation = AttachActorPtr->GetActorLocation();
			OwnerLocation += AddVector;

			UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld());
			FNavLocation OutProjectLocation = FNavLocation(FVector(0.f));
			if (NavSys)
			{
				bool bInNav = NavSys->ProjectPointToNavigation(OwnerLocation, OutProjectLocation, KeepNavigationQueryExtent);
				if (!bInNav)
				{
					return;
				}
			}
		}
		FHitResult HitResult;
		SafeMoveUpdatedComponent(AddVector, UpdatedComponent->GetComponentRotation().Quaternion(), true, HitResult);
		if (HitResult.IsValidBlockingHit())
		{
			SlideAlongSurface(AddVector, 1 - HitResult.Time, HitResult.Normal, HitResult);
		}
	}
}


void UActorPushComponent::SetOtherSlideMove(FVector AddVelocity, float MassRate, UActorPushComponent* OtherActorCom)
{
	if (bEnableExclusion && AttachActorPtr)
	{
		bPushOtherVelocityToZero = false;
		//Save the person who pushes himself to calculate whether he can push the other person
		if (!PushSelfComponents.Contains(OtherActorCom))
		{
			PushSelfComponents.Add(OtherActorCom);
		}

#if WITH_EDITOR
		if (bIsShowPushDirection)
		{
			FVector AttachActorLocation = AttachActorPtr->GetActorLocation();
			UKismetSystemLibrary::DrawDebugArrow(this, AttachActorLocation, AddVelocity + AttachActorLocation, 10.f, FLinearColor::Red, 0.2f);
		}
#endif
		//
		float DeltaSecond = UGameplayStatics::GetWorldDeltaSeconds(this);
		PushOtherNewVelocity = AddVelocity;
		PushOtherNewMassRate = MassRate;
		//Reset the collision array every 0.1 second
		GetWorld()->GetTimerManager().ClearTimer(RetriggerableTimerHandle);
		GetWorld()->GetTimerManager().SetTimer(RetriggerableTimerHandle, this, &UActorPushComponent::RecoverAddVelocity, ClearCurrentVelocityDelay, false);
	}
}

void UActorPushComponent::RecoverAddVelocity()
{
	PushSelfComponents.Empty();
}

void UActorPushComponent::SetSelfSlideMove(FVector AddVelocity, float MassRate)
{
	if (bEnableExclusion && AttachActorPtr)
	{
		bPushSelfVelocityToZero = false;
		PushSelfNewVelocity = AddVelocity;
		PushSelfNewMassRate = MassRate;
	}
}

// void UActorPushComponent::RecoverSelfAddVelocity()
// {
// 	CurrentVelocity_Self = FVector(0.f);
// 	PushSelfDeltaVector = FVector(0.f);
// }


float UActorPushComponent::GetBaseSpeed()
{
	return ActorPushSpeed;
}

void UActorPushComponent::CalcCharacterMovementVelocity(FVector NewVelocity)
{
	if (!bNotCharacter)
	{
		AttachCharacterPtr->GetCharacterMovement()->Velocity = NewVelocity;
	}
}



FVector UActorPushComponent::GetActorVelocity()
{
	if (AttachCharacterPtr)
	{
		if (AttachCharacterPtr->GetMovementComponent()->Velocity.IsNearlyZero())
		{
			return PushActorDeltaVector;
		}
		return AttachCharacterPtr->GetMovementComponent()->Velocity;
	}

	UPrimitiveComponent* RootComPtr = Cast<UPrimitiveComponent>(AttachActorPtr->GetRootComponent());

	if (RootComPtr)
	{
		if (RootComPtr->GetCollisionEnabled() == ECollisionEnabled::NoCollision)
		{
			UE_LOG(ActorPush, Warning, TEXT("CollisionEnabledType Must be PhysicsOnly or QueryAndPhysics"));
		}
		FVector RootComVelocity = RootComPtr->GetPhysicsLinearVelocity();

		if (RootComVelocity.IsNearlyZero())
		{
			return PushActorDeltaVector;
		}
		return RootComVelocity;
	}
	else
	{
		UE_LOG(ActorPush, Warning, TEXT("RootComponent Must be UPrimitiveComponent"));
	}
	return FVector(0.f);
}

FVector UActorPushComponent::BPGetActorVelocity()
{
	if (AttachCharacterPtr)
	{
		return AttachCharacterPtr->GetMovementComponent()->Velocity + PushActorDeltaVector + PushSelfDeltaVector;
	}
	if (AttachActorPtr)
	{
		UPrimitiveComponent* RootComPtr = Cast<UPrimitiveComponent>(AttachActorPtr->GetRootComponent());
		if (RootComPtr)
		{
			if (RootComPtr->GetCollisionEnabled() == ECollisionEnabled::NoCollision)
			{
				UE_LOG(ActorPush, Warning, TEXT("CollisionEnabledType Must be PhysicsOnly or QueryAndPhysics"));
			}
			return RootComPtr->GetPhysicsLinearVelocity() + PushActorDeltaVector + PushSelfDeltaVector;
		}
		else
		{
			UE_LOG(ActorPush, Warning, TEXT("RootComponent Must be UPrimitiveComponent"));
		}
	}
	return FVector(0.f);
}

void UActorPushComponent::SetActorPushSpeed(float NewPushSpeed)
{
	ActorPushSpeed = NewPushSpeed;
}
