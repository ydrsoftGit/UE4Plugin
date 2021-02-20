// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorPushPlugin/Public/ActorPushComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorPushComponent() {}
// Cross Module References
	ACTORPUSHPLUGIN_API UClass* Z_Construct_UClass_UActorPushComponent_NoRegister();
	ACTORPUSHPLUGIN_API UClass* Z_Construct_UClass_UActorPushComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
	UPackage* Z_Construct_UPackage__Script_ActorPushPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
// End Cross Module References
	DEFINE_FUNCTION(UActorPushComponent::execSetActorPushSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPushSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorPushSpeed(Z_Param_NewPushSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorPushComponent::execBPGetActorVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->BPGetActorVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorPushComponent::execExecutePushMove)
	{
		P_GET_STRUCT(FVector,Z_Param_AddVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecutePushMove(Z_Param_AddVector);
		P_NATIVE_END;
	}
	void UActorPushComponent::StaticRegisterNativesUActorPushComponent()
	{
		UClass* Class = UActorPushComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BPGetActorVelocity", &UActorPushComponent::execBPGetActorVelocity },
			{ "ExecutePushMove", &UActorPushComponent::execExecutePushMove },
			{ "SetActorPushSpeed", &UActorPushComponent::execSetActorPushSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActorPushComponent_BPGetActorVelocity_Statics
	{
		struct ActorPushComponent_eventBPGetActorVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorPushComponent_BPGetActorVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorPushComponent_eventBPGetActorVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorPushComponent_BPGetActorVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPushComponent_BPGetActorVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorPushComponent_BPGetActorVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActorPush" },
		{ "Comment", "//Get the sum of self speed and push speed in BP\n" },
		{ "DisplayName", "GetActorVelocity" },
		{ "ModuleRelativePath", "Public/ActorPushComponent.h" },
		{ "ToolTip", "Get the sum of self speed and push speed in BP" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorPushComponent_BPGetActorVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorPushComponent, nullptr, "BPGetActorVelocity", nullptr, nullptr, sizeof(ActorPushComponent_eventBPGetActorVelocity_Parms), Z_Construct_UFunction_UActorPushComponent_BPGetActorVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPushComponent_BPGetActorVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorPushComponent_BPGetActorVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPushComponent_BPGetActorVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorPushComponent_BPGetActorVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorPushComponent_BPGetActorVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorPushComponent_ExecutePushMove_Statics
	{
		struct ActorPushComponent_eventExecutePushMove_Parms
		{
			FVector AddVector;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorPushComponent_ExecutePushMove_Statics::NewProp_AddVector = { "AddVector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorPushComponent_eventExecutePushMove_Parms, AddVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorPushComponent_ExecutePushMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPushComponent_ExecutePushMove_Statics::NewProp_AddVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorPushComponent_ExecutePushMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActorPush" },
		{ "Comment", "//Finally, the push function is executed\n" },
		{ "ModuleRelativePath", "Public/ActorPushComponent.h" },
		{ "ToolTip", "Finally, the push function is executed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorPushComponent_ExecutePushMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorPushComponent, nullptr, "ExecutePushMove", nullptr, nullptr, sizeof(ActorPushComponent_eventExecutePushMove_Parms), Z_Construct_UFunction_UActorPushComponent_ExecutePushMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPushComponent_ExecutePushMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorPushComponent_ExecutePushMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPushComponent_ExecutePushMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorPushComponent_ExecutePushMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorPushComponent_ExecutePushMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorPushComponent_SetActorPushSpeed_Statics
	{
		struct ActorPushComponent_eventSetActorPushSpeed_Parms
		{
			float NewPushSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewPushSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActorPushComponent_SetActorPushSpeed_Statics::NewProp_NewPushSpeed = { "NewPushSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActorPushComponent_eventSetActorPushSpeed_Parms, NewPushSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorPushComponent_SetActorPushSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorPushComponent_SetActorPushSpeed_Statics::NewProp_NewPushSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorPushComponent_SetActorPushSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "ActorPush" },
		{ "DisplayName", "SetActorPushSpeed" },
		{ "ModuleRelativePath", "Public/ActorPushComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorPushComponent_SetActorPushSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorPushComponent, nullptr, "SetActorPushSpeed", nullptr, nullptr, sizeof(ActorPushComponent_eventSetActorPushSpeed_Parms), Z_Construct_UFunction_UActorPushComponent_SetActorPushSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPushComponent_SetActorPushSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorPushComponent_SetActorPushSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorPushComponent_SetActorPushSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorPushComponent_SetActorPushSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActorPushComponent_SetActorPushSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActorPushComponent_NoRegister()
	{
		return UActorPushComponent::StaticClass();
	}
	struct Z_Construct_UClass_UActorPushComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableExclusion_MetaData[];
#endif
		static void NewProp_bEnableExclusion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableExclusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNotCharacter_MetaData[];
#endif
		static void NewProp_bNotCharacter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNotCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorPushSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActorPushSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceCapsuleHelfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceCapsuleHelfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceCapsuleRaidus_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceCapsuleRaidus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanPushMassRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CanPushMassRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PushInterpDeltaAcceleratedSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PushInterpDeltaAcceleratedSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlideSelfScalar_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlideSelfScalar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PushOtherScalar_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PushOtherScalar;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceObjectTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TraceObjectTypes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IgnoreActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IgnoreActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeepInNavigation_MetaData[];
#endif
		static void NewProp_bKeepInNavigation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepInNavigation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeepNavigationQueryExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeepNavigationQueryExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ActorMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DebugType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsShowPushDirection_MetaData[];
#endif
		static void NewProp_bIsShowPushDirection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsShowPushDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorPushComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActorPushPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorPushComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorPushComponent_BPGetActorVelocity, "BPGetActorVelocity" }, // 3416426392
		{ &Z_Construct_UFunction_UActorPushComponent_ExecutePushMove, "ExecutePushMove" }, // 2109022984
		{ &Z_Construct_UFunction_UActorPushComponent_SetActorPushSpeed, "SetActorPushSpeed" }, // 4035151994
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPushComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Movement" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ActorPushComponent.h" },
		{ "ModuleRelativePath", "Public/ActorPushComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bEnableExclusion_MetaData[] = {
		{ "Category", "PushActor" },
		{ "Comment", "//Enable component\n" },
		{ "ModuleRelativePath", "Public/ActorPushComponent.h" },
		{ "ToolTip", "Enable component" },
	};
#endif
	void Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bEnableExclusion_SetBit(void* Obj)
	{
		((UActorPushComponent*)Obj)->bEnableExclusion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bEnableExclusion = { "bEnableExclusion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActorPushComponent), &Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bEnableExclusion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bEnableExclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bEnableExclusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bNotCharacter_MetaData[] = {
		{ "Category", "PushActor" },
		{ "Comment", "//It's not a character\n" },
		{ "ModuleRelativePath", "Public/ActorPushComponent.h" },
		{ "ToolTip", "It's not a character" },
	};
#endif
	void Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bNotCharacter_SetBit(void* Obj)
	{
		((UActorPushComponent*)Obj)->bNotCharacter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bNotCharacter = { "bNotCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActorPushComponent), &Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bNotCharacter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bNotCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bNotCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPushComponent_Statics::NewProp_ActorPushSpeed_MetaData[] = {
		{ "Category", "PushActor" },
		{ "Comment", "//The speed of push. If it is character, the maximum speed will be obtained automatically. You can also set it yourself\n" },
		{ "EditCondition", "bNotCharacter" },
		{ "ModuleRelativePath", "Public/ActorPushComponent.h" },
		{ "ToolTip", "The speed of push. If it is character, the maximum speed will be obtained automatically. You can also set it yourself" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActorPushComponent_Statics::NewProp_ActorPushSpeed = { "ActorPushSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorPushComponent, ActorPushSpeed), METADATA_PARAMS(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_ActorPushSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_ActorPushSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPushComponent_Statics::NewProp_TraceCapsuleHelfHeight_MetaData[] = {
		{ "Category", "PushActor" },
		{ "Comment", "//TraceCapsuleHelfHeight\n" },
		{ "ModuleRelativePath", "Public/ActorPushComponent.h" },
		{ "ToolTip", "TraceCapsuleHelfHeight" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActorPushComponent_Statics::NewProp_TraceCapsuleHelfHeight = { "TraceCapsuleHelfHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorPushComponent, TraceCapsuleHelfHeight), METADATA_PARAMS(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_TraceCapsuleHelfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_TraceCapsuleHelfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPushComponent_Statics::NewProp_TraceCapsuleRaidus_MetaData[] = {
		{ "Category", "PushActor" },
		{ "Comment", "//TraceCapsuleRaidus\n" },
		{ "ModuleRelativePath", "Public/ActorPushComponent.h" },
		{ "ToolTip", "TraceCapsuleRaidus" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActorPushComponent_Statics::NewProp_TraceCapsuleRaidus = { "TraceCapsuleRaidus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorPushComponent, TraceCapsuleRaidus), METADATA_PARAMS(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_TraceCapsuleRaidus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_TraceCapsuleRaidus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPushComponent_Statics::NewProp_CanPushMassRate_MetaData[] = {
		{ "Category", "PushActor" },
		{ "Comment", "//How many times as many actors can you promote\n" },
		{ "ModuleRelativePath", "Public/ActorPushComponent.h" },
		{ "ToolTip", "How many times as many actors can you promote" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActorPushComponent_Statics::NewProp_CanPushMassRate = { "CanPushMassRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorPushComponent, CanPushMassRate), METADATA_PARAMS(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_CanPushMassRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_CanPushMassRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPushComponent_Statics::NewProp_PushInterpDeltaAcceleratedSpeed_MetaData[] = {
		{ "Category", "PushActor" },
		{ "Comment", "//Push acceleration interpolation velocity\n" },
		{ "ModuleRelativePath", "Public/ActorPushComponent.h" },
		{ "ToolTip", "Push acceleration interpolation velocity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActorPushComponent_Statics::NewProp_PushInterpDeltaAcceleratedSpeed = { "PushInterpDeltaAcceleratedSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorPushComponent, PushInterpDeltaAcceleratedSpeed), METADATA_PARAMS(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_PushInterpDeltaAcceleratedSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_PushInterpDeltaAcceleratedSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPushComponent_Statics::NewProp_SlideSelfScalar_MetaData[] = {
		{ "Category", "PushActor" },
		{ "Comment", "//Rate of self sideslip\n" },
		{ "ModuleRelativePath", "Public/ActorPushComponent.h" },
		{ "ToolTip", "Rate of self sideslip" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActorPushComponent_Statics::NewProp_SlideSelfScalar = { "SlideSelfScalar", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorPushComponent, SlideSelfScalar), METADATA_PARAMS(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_SlideSelfScalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_SlideSelfScalar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPushComponent_Statics::NewProp_PushOtherScalar_MetaData[] = {
		{ "Category", "PushActor" },
		{ "Comment", "//Rate of Push Other Actor\n" },
		{ "ModuleRelativePath", "Public/ActorPushComponent.h" },
		{ "ToolTip", "Rate of Push Other Actor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActorPushComponent_Statics::NewProp_PushOtherScalar = { "PushOtherScalar", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorPushComponent, PushOtherScalar), METADATA_PARAMS(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_PushOtherScalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_PushOtherScalar_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActorPushComponent_Statics::NewProp_TraceObjectTypes_Inner = { "TraceObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPushComponent_Statics::NewProp_TraceObjectTypes_MetaData[] = {
		{ "Category", "PushActor" },
		{ "Comment", "//Collision detection type\n" },
		{ "ModuleRelativePath", "Public/ActorPushComponent.h" },
		{ "ToolTip", "Collision detection type" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorPushComponent_Statics::NewProp_TraceObjectTypes = { "TraceObjectTypes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorPushComponent, TraceObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_TraceObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_TraceObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorPushComponent_Statics::NewProp_IgnoreActors_Inner = { "IgnoreActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPushComponent_Statics::NewProp_IgnoreActors_MetaData[] = {
		{ "Category", "PushActor" },
		{ "ModuleRelativePath", "Public/ActorPushComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorPushComponent_Statics::NewProp_IgnoreActors = { "IgnoreActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorPushComponent, IgnoreActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_IgnoreActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_IgnoreActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bKeepInNavigation_MetaData[] = {
		{ "Category", "PushActor" },
		{ "Comment", "//Remain in navigation\n" },
		{ "ModuleRelativePath", "Public/ActorPushComponent.h" },
		{ "ToolTip", "Remain in navigation" },
	};
#endif
	void Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bKeepInNavigation_SetBit(void* Obj)
	{
		((UActorPushComponent*)Obj)->bKeepInNavigation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bKeepInNavigation = { "bKeepInNavigation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActorPushComponent), &Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bKeepInNavigation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bKeepInNavigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bKeepInNavigation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPushComponent_Statics::NewProp_KeepNavigationQueryExtent_MetaData[] = {
		{ "Category", "PushActor" },
		{ "Comment", "// \x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Setting\")\n// \x09\x09""bool bCheckLedges;\n//Detect if it remains in the range of navigation\n" },
		{ "EditCondition", "bKeepInNavigation" },
		{ "ModuleRelativePath", "Public/ActorPushComponent.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Setting\")\n       bool bCheckLedges;\nDetect if it remains in the range of navigation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorPushComponent_Statics::NewProp_KeepNavigationQueryExtent = { "KeepNavigationQueryExtent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorPushComponent, KeepNavigationQueryExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_KeepNavigationQueryExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_KeepNavigationQueryExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPushComponent_Statics::NewProp_ActorMass_MetaData[] = {
		{ "Category", "PushActor | Mass" },
		{ "Comment", "//The mass of actors\n" },
		{ "ModuleRelativePath", "Public/ActorPushComponent.h" },
		{ "ToolTip", "The mass of actors" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActorPushComponent_Statics::NewProp_ActorMass = { "ActorMass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorPushComponent, ActorMass), METADATA_PARAMS(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_ActorMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_ActorMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPushComponent_Statics::NewProp_DebugType_MetaData[] = {
		{ "Category", "PushActor | Debug" },
		{ "Comment", "//Show Trace\n" },
		{ "ModuleRelativePath", "Public/ActorPushComponent.h" },
		{ "ToolTip", "Show Trace" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UActorPushComponent_Statics::NewProp_DebugType = { "DebugType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorPushComponent, DebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_DebugType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_DebugType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bIsShowPushDirection_MetaData[] = {
		{ "Category", "PushActor | Debug" },
		{ "ModuleRelativePath", "Public/ActorPushComponent.h" },
	};
#endif
	void Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bIsShowPushDirection_SetBit(void* Obj)
	{
		((UActorPushComponent*)Obj)->bIsShowPushDirection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bIsShowPushDirection = { "bIsShowPushDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActorPushComponent), &Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bIsShowPushDirection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bIsShowPushDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bIsShowPushDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorPushComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bEnableExclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bNotCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPushComponent_Statics::NewProp_ActorPushSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPushComponent_Statics::NewProp_TraceCapsuleHelfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPushComponent_Statics::NewProp_TraceCapsuleRaidus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPushComponent_Statics::NewProp_CanPushMassRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPushComponent_Statics::NewProp_PushInterpDeltaAcceleratedSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPushComponent_Statics::NewProp_SlideSelfScalar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPushComponent_Statics::NewProp_PushOtherScalar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPushComponent_Statics::NewProp_TraceObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPushComponent_Statics::NewProp_TraceObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPushComponent_Statics::NewProp_IgnoreActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPushComponent_Statics::NewProp_IgnoreActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bKeepInNavigation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPushComponent_Statics::NewProp_KeepNavigationQueryExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPushComponent_Statics::NewProp_ActorMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPushComponent_Statics::NewProp_DebugType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorPushComponent_Statics::NewProp_bIsShowPushDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorPushComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorPushComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorPushComponent_Statics::ClassParams = {
		&UActorPushComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActorPushComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorPushComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActorPushComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPushComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorPushComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorPushComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorPushComponent, 2785845397);
	template<> ACTORPUSHPLUGIN_API UClass* StaticClass<UActorPushComponent>()
	{
		return UActorPushComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorPushComponent(Z_Construct_UClass_UActorPushComponent, &UActorPushComponent::StaticClass, TEXT("/Script/ActorPushPlugin"), TEXT("UActorPushComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorPushComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
