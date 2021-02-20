// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef ACTORPUSHPLUGIN_ActorPushComponent_generated_h
#error "ActorPushComponent.generated.h already included, missing '#pragma once' in ActorPushComponent.h"
#endif
#define ACTORPUSHPLUGIN_ActorPushComponent_generated_h

#define PushActorPlugin_Plugins_ActorPushPlugin_Source_ActorPushPlugin_Public_ActorPushComponent_h_16_SPARSE_DATA
#define PushActorPlugin_Plugins_ActorPushPlugin_Source_ActorPushPlugin_Public_ActorPushComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetActorPushSpeed); \
	DECLARE_FUNCTION(execBPGetActorVelocity); \
	DECLARE_FUNCTION(execExecutePushMove);


#define PushActorPlugin_Plugins_ActorPushPlugin_Source_ActorPushPlugin_Public_ActorPushComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetActorPushSpeed); \
	DECLARE_FUNCTION(execBPGetActorVelocity); \
	DECLARE_FUNCTION(execExecutePushMove);


#define PushActorPlugin_Plugins_ActorPushPlugin_Source_ActorPushPlugin_Public_ActorPushComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorPushComponent(); \
	friend struct Z_Construct_UClass_UActorPushComponent_Statics; \
public: \
	DECLARE_CLASS(UActorPushComponent, UMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActorPushPlugin"), NO_API) \
	DECLARE_SERIALIZER(UActorPushComponent)


#define PushActorPlugin_Plugins_ActorPushPlugin_Source_ActorPushPlugin_Public_ActorPushComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUActorPushComponent(); \
	friend struct Z_Construct_UClass_UActorPushComponent_Statics; \
public: \
	DECLARE_CLASS(UActorPushComponent, UMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActorPushPlugin"), NO_API) \
	DECLARE_SERIALIZER(UActorPushComponent)


#define PushActorPlugin_Plugins_ActorPushPlugin_Source_ActorPushPlugin_Public_ActorPushComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorPushComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorPushComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorPushComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorPushComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorPushComponent(UActorPushComponent&&); \
	NO_API UActorPushComponent(const UActorPushComponent&); \
public:


#define PushActorPlugin_Plugins_ActorPushPlugin_Source_ActorPushPlugin_Public_ActorPushComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorPushComponent(UActorPushComponent&&); \
	NO_API UActorPushComponent(const UActorPushComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorPushComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorPushComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorPushComponent)


#define PushActorPlugin_Plugins_ActorPushPlugin_Source_ActorPushPlugin_Public_ActorPushComponent_h_16_PRIVATE_PROPERTY_OFFSET
#define PushActorPlugin_Plugins_ActorPushPlugin_Source_ActorPushPlugin_Public_ActorPushComponent_h_13_PROLOG
#define PushActorPlugin_Plugins_ActorPushPlugin_Source_ActorPushPlugin_Public_ActorPushComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PushActorPlugin_Plugins_ActorPushPlugin_Source_ActorPushPlugin_Public_ActorPushComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	PushActorPlugin_Plugins_ActorPushPlugin_Source_ActorPushPlugin_Public_ActorPushComponent_h_16_SPARSE_DATA \
	PushActorPlugin_Plugins_ActorPushPlugin_Source_ActorPushPlugin_Public_ActorPushComponent_h_16_RPC_WRAPPERS \
	PushActorPlugin_Plugins_ActorPushPlugin_Source_ActorPushPlugin_Public_ActorPushComponent_h_16_INCLASS \
	PushActorPlugin_Plugins_ActorPushPlugin_Source_ActorPushPlugin_Public_ActorPushComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PushActorPlugin_Plugins_ActorPushPlugin_Source_ActorPushPlugin_Public_ActorPushComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PushActorPlugin_Plugins_ActorPushPlugin_Source_ActorPushPlugin_Public_ActorPushComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	PushActorPlugin_Plugins_ActorPushPlugin_Source_ActorPushPlugin_Public_ActorPushComponent_h_16_SPARSE_DATA \
	PushActorPlugin_Plugins_ActorPushPlugin_Source_ActorPushPlugin_Public_ActorPushComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	PushActorPlugin_Plugins_ActorPushPlugin_Source_ActorPushPlugin_Public_ActorPushComponent_h_16_INCLASS_NO_PURE_DECLS \
	PushActorPlugin_Plugins_ActorPushPlugin_Source_ActorPushPlugin_Public_ActorPushComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTORPUSHPLUGIN_API UClass* StaticClass<class UActorPushComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PushActorPlugin_Plugins_ActorPushPlugin_Source_ActorPushPlugin_Public_ActorPushComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
