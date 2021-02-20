// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "Kismet\KismetSystemLibrary.h"
#include "ActorPushComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = Movement, meta = (BlueprintSpawnableComponent))
class ACTORPUSHPLUGIN_API UActorPushComponent : public UMovementComponent
{
	GENERATED_BODY()
public:

	DEFINE_LOG_CATEGORY_STATIC(ActorPush, Warning, All);
	UActorPushComponent();
protected:

	// Called when the game starts
	virtual void BeginPlay() override;

public:
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//Enable component
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PushActor")
		bool bEnableExclusion;
	//It's not a character
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PushActor")
		bool bNotCharacter;
	//The speed of push. If it is character, the maximum speed will be obtained automatically. You can also set it yourself
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PushActor", meta = (EditCondition = bNotCharacter))
		float ActorPushSpeed;
	//TraceCapsuleHelfHeight
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PushActor")
		float TraceCapsuleHelfHeight;
	//TraceCapsuleRaidus
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PushActor")
		float TraceCapsuleRaidus;
	//How many times as many actors can you promote
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PushActor")
		float CanPushMassRate;
	//Push acceleration interpolation velocity
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PushActor")
		float PushInterpDeltaAcceleratedSpeed;
	//Rate of self sideslip
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PushActor")
		float SlideSelfScalar;
	//Rate of Push Other Actor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PushActor")
		float PushOtherScalar;
	//Collision detection type
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PushActor")
		TArray<TEnumAsByte<EObjectTypeQuery>>TraceObjectTypes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PushActor")
		TArray<AActor*> IgnoreActors;


	//Remain in navigation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PushActor")
		bool bKeepInNavigation;
	// 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setting")
	// 		bool bCheckLedges;
		//Detect if it remains in the range of navigation
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PushActor", meta = (EditCondition = bKeepInNavigation))
		FVector KeepNavigationQueryExtent;

	//The mass of actors
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PushActor | Mass")
		float ActorMass;

	//ObjectA / ObjectB MapRangeClamped
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PushActor | Mass")
		float MassRateInRangeA;
	//ObjectA / ObjectB MapRangeClamped
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PushActor | Mass")
		float MassRateInRangeB;
	//ObjectA / ObjectB MapRangeClamped
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PushActor | Mass")
		float MassRateOutRangeA;
	//ObjectA / ObjectB MapRangeClamped
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PushActor | Mass")
		float MassRateOutRangeB;

	//Show Trace
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PushActor | Debug")
		TEnumAsByte<EDrawDebugTrace::Type> DebugType;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PushActor | Debug")
		bool bIsShowPushDirection;

	//Reset the time to push your own array
	float ClearCurrentVelocityDelay;

	//Owner
	ACharacter* AttachCharacterPtr;
	AActor* AttachActorPtr;
	//It's used for velocity interpolation
	FVector CurrentVelocity;
	FVector BeforFreamVelocity;
	FVector CurrentVelocity_Self;
	FVector BeforFreamVelocity_Self;

	TArray<FHitResult> HitResults;

	FTimerHandle RetriggerableTimerHandle;
	//FTimerHandle RetriggerableTimerHandle_Self;

	//The amount that the current frame is pushed
	FVector PushActorDeltaVector;
	//The current frame pushes its own amount
	FVector PushSelfDeltaVector;
	//Control push switch
	bool bPushOtherVelocityToZero;
	bool bPushSelfVelocityToZero;

	//Push other actors and their own values before interpolation
	FVector PushOtherNewVelocity;
	FVector PushSelfNewVelocity;
	//Record the mass ratio of yourself and your opponent before starting the thrust
	float PushOtherNewMassRate;
	//Reverse mass ratio
	float PushSelfNewMassRate;

	TArray<UActorPushComponent*>PushSelfComponents;
public:
	//Finally, the push function is executed
	UFUNCTION(BlueprintCallable,Category = "ActorPush")
		void ExecutePushMove(FVector AddVector);
	//Get the sum of self speed and push speed in BP
	UFUNCTION(BlueprintCallable, Category = "ActorPush", meta = (DisplayName = "GetActorVelocity"))
		FVector BPGetActorVelocity();
	UFUNCTION(BlueprintCallable, Category = "ActorPush", meta = (DisplayName = "SetActorPushSpeed"))
		void SetActorPushSpeed(float NewPushSpeed);

	FVector GetActorVelocity();

	void SetOtherSlideMove(FVector AddVelocity, float MassRate, UActorPushComponent* OtherActorCom);
	void SetSelfSlideMove(FVector AddVelocity, float MassRate);

	void RecoverAddVelocity();
	//void RecoverSelfAddVelocity();

	float GetBaseSpeed();
	void CalcCharacterMovementVelocity(FVector NewVelocity);


};
