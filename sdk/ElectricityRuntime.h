/**
 * decamp dumper generated SDK
 * Package: /Script/ElectricityRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ElectricityRuntime.FortBuildingClassGroup
// Kind: ScriptStruct; super: none
struct FFortBuildingClassGroup
{
public:
    TSet<void*> BuildingClasses; // 0x0000 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FFortBuildingClassGroup, BuildingClasses) == 0, "Offset mismatch for FFortBuildingClassGroup::BuildingClasses");

// /Script/ElectricityRuntime.FortCurieElectricityPropagationManagerTickFunction
// Kind: ScriptStruct; super: TickFunction
struct FFortCurieElectricityPropagationManagerTickFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TickGroup; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EndTickGroup; // 0x0009 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAllowTickOnDedicatedServer; // 0x000A (Size: 0x1, Type: BoolProperty)
    // 0x000A BoolProperty bCanEverTick (shared storage)
    // 0x000A BoolProperty bStartWithTickEnabled (shared storage)
    // 0x000A BoolProperty bTickEvenWhenPaused (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x000B
    float TickInterval; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortCurieElectricityPropagationManagerTickFunction, TickGroup) == 8, "Offset mismatch for FFortCurieElectricityPropagationManagerTickFunction::TickGroup");
static_assert(offsetof(FFortCurieElectricityPropagationManagerTickFunction, EndTickGroup) == 9, "Offset mismatch for FFortCurieElectricityPropagationManagerTickFunction::EndTickGroup");
static_assert(offsetof(FFortCurieElectricityPropagationManagerTickFunction, bAllowTickOnDedicatedServer) == 10, "Offset mismatch for FFortCurieElectricityPropagationManagerTickFunction::bAllowTickOnDedicatedServer");
static_assert(offsetof(FFortCurieElectricityPropagationManagerTickFunction, TickInterval) == 12, "Offset mismatch for FFortCurieElectricityPropagationManagerTickFunction::TickInterval");

// /Script/ElectricityRuntime.FortCheatManagerCurieElectricity
// Kind: Class; super: ChildCheatManager
class UFortCheatManagerCurieElectricity
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ElectricityRuntime.FortCurieElectricityInteractWithWaterHandler
// Kind: Class; super: FortCurieElementInteractWithElementHandler
class UFortCurieElectricityInteractWithWaterHandler
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t InteractingElementTag[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t InteractMagnitudeThreshold[0x28]; // 0x0038 (Size: 0x28, Type: StructProperty)
    std::uint8_t ElementMagnitudeToIntensityDecreaseCurve[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    std::uint8_t ElementMagnitudeToIntensityDecayRateCurve[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCurieElectricityInteractWithWaterHandler, InteractingElementTag) == 48, "Offset mismatch for UFortCurieElectricityInteractWithWaterHandler::InteractingElementTag");
static_assert(offsetof(UFortCurieElectricityInteractWithWaterHandler, InteractMagnitudeThreshold) == 56, "Offset mismatch for UFortCurieElectricityInteractWithWaterHandler::InteractMagnitudeThreshold");
static_assert(offsetof(UFortCurieElectricityInteractWithWaterHandler, ElementMagnitudeToIntensityDecreaseCurve) == 96, "Offset mismatch for UFortCurieElectricityInteractWithWaterHandler::ElementMagnitudeToIntensityDecreaseCurve");
static_assert(offsetof(UFortCurieElectricityInteractWithWaterHandler, ElementMagnitudeToIntensityDecayRateCurve) == 112, "Offset mismatch for UFortCurieElectricityInteractWithWaterHandler::ElementMagnitudeToIntensityDecayRateCurve");

// /Script/ElectricityRuntime.FortCurieElectricityNativeFXHandler
// Kind: Class; super: FortCurieNativeFXHandler
class UFortCurieElectricityNativeFXHandler
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* CachedConfig; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCurieElectricityNativeFXHandler, CachedConfig) == 40, "Offset mismatch for UFortCurieElectricityNativeFXHandler::CachedConfig");

// /Script/ElectricityRuntime.FortCurieElectricityNativeFXHandlerConfig
// Kind: Class; super: FortCurieNativeFXHandlerConfig
class UFortCurieElectricityNativeFXHandlerConfig
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ConfigName[0x4]; // 0x0030 (Size: 0x4, Type: NameProperty)
    std::uint8_t ConfigTag[0x4]; // 0x0034 (Size: 0x4, Type: StructProperty)
    std::uint8_t bNeedsAmbientAudio; // 0x0038 (Size: 0x1, Type: BoolProperty)
    // 0x0038 BoolProperty bNeedsSignificanceTracking (shared storage)
    // 0x0038 BoolProperty bUseGlow (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::int32_t GlowPriority; // 0x003C (Size: 0x4, Type: IntProperty)
    float GlowMaterialIdx; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0044
    std::uint8_t GlowFadeInCurve[0x48]; // 0x0048 (Size: 0x48, Type: StructProperty)
    std::uint8_t GlowFadeOutCurve[0x48]; // 0x0090 (Size: 0x48, Type: StructProperty)
    void* AmbientSound; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCurieElectricityNativeFXHandlerConfig, ConfigName) == 48, "Offset mismatch for UFortCurieElectricityNativeFXHandlerConfig::ConfigName");
static_assert(offsetof(UFortCurieElectricityNativeFXHandlerConfig, ConfigTag) == 52, "Offset mismatch for UFortCurieElectricityNativeFXHandlerConfig::ConfigTag");
static_assert(offsetof(UFortCurieElectricityNativeFXHandlerConfig, bNeedsAmbientAudio) == 56, "Offset mismatch for UFortCurieElectricityNativeFXHandlerConfig::bNeedsAmbientAudio");
static_assert(offsetof(UFortCurieElectricityNativeFXHandlerConfig, GlowPriority) == 60, "Offset mismatch for UFortCurieElectricityNativeFXHandlerConfig::GlowPriority");
static_assert(offsetof(UFortCurieElectricityNativeFXHandlerConfig, GlowMaterialIdx) == 64, "Offset mismatch for UFortCurieElectricityNativeFXHandlerConfig::GlowMaterialIdx");
static_assert(offsetof(UFortCurieElectricityNativeFXHandlerConfig, GlowFadeInCurve) == 72, "Offset mismatch for UFortCurieElectricityNativeFXHandlerConfig::GlowFadeInCurve");
static_assert(offsetof(UFortCurieElectricityNativeFXHandlerConfig, GlowFadeOutCurve) == 144, "Offset mismatch for UFortCurieElectricityNativeFXHandlerConfig::GlowFadeOutCurve");
static_assert(offsetof(UFortCurieElectricityNativeFXHandlerConfig, AmbientSound) == 216, "Offset mismatch for UFortCurieElectricityNativeFXHandlerConfig::AmbientSound");

// /Script/ElectricityRuntime.FortCurieElectricityPropagationManager
// Kind: Class; super: FortCurieManagerComponent
class UFortCurieElectricityPropagationManager
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t PrimaryTickFunction[0x248]; // 0x0030 (Size: 0x248, Type: StructProperty)
    void* PropagationManagerConfig; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCurieElectricityPropagationManager, PrimaryTickFunction) == 48, "Offset mismatch for UFortCurieElectricityPropagationManager::PrimaryTickFunction");
static_assert(offsetof(UFortCurieElectricityPropagationManager, PropagationManagerConfig) == 632, "Offset mismatch for UFortCurieElectricityPropagationManager::PropagationManagerConfig");

// /Script/ElectricityRuntime.FortCurieElectricityPropagationManagerConfig
// Kind: Class; super: CurieManagerComponentConfig
class UFortCurieElectricityPropagationManagerConfig
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t MinPropagationDepthLimit; // 0x0038 (Size: 0x1, Type: ByteProperty)
    std::uint8_t MaxPropagationDepthLimit; // 0x0039 (Size: 0x1, Type: ByteProperty)
    std::uint8_t DefaultPropagationDepthLimit; // 0x003A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x1]; // 0x003B
    float PropagationDelay; // 0x003C (Size: 0x4, Type: FloatProperty)
    float TemporaryGridDepropagationDelay; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::int32_t NeighborCacheDefaultSlack; // 0x0044 (Size: 0x4, Type: IntProperty)
    float OverlapElectricityApplicationMagnitude; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x004C
    std::uint8_t DefaultCollisionExpansion[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAllowPropagationDepthLimitOverrides; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowInteractsWhileDBNO; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowInteractsWhileInVehicle; // 0x006A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortCurieElectricityPropagationManagerConfig, MinPropagationDepthLimit) == 56, "Offset mismatch for UFortCurieElectricityPropagationManagerConfig::MinPropagationDepthLimit");
static_assert(offsetof(UFortCurieElectricityPropagationManagerConfig, MaxPropagationDepthLimit) == 57, "Offset mismatch for UFortCurieElectricityPropagationManagerConfig::MaxPropagationDepthLimit");
static_assert(offsetof(UFortCurieElectricityPropagationManagerConfig, DefaultPropagationDepthLimit) == 58, "Offset mismatch for UFortCurieElectricityPropagationManagerConfig::DefaultPropagationDepthLimit");
static_assert(offsetof(UFortCurieElectricityPropagationManagerConfig, PropagationDelay) == 60, "Offset mismatch for UFortCurieElectricityPropagationManagerConfig::PropagationDelay");
static_assert(offsetof(UFortCurieElectricityPropagationManagerConfig, TemporaryGridDepropagationDelay) == 64, "Offset mismatch for UFortCurieElectricityPropagationManagerConfig::TemporaryGridDepropagationDelay");
static_assert(offsetof(UFortCurieElectricityPropagationManagerConfig, NeighborCacheDefaultSlack) == 68, "Offset mismatch for UFortCurieElectricityPropagationManagerConfig::NeighborCacheDefaultSlack");
static_assert(offsetof(UFortCurieElectricityPropagationManagerConfig, OverlapElectricityApplicationMagnitude) == 72, "Offset mismatch for UFortCurieElectricityPropagationManagerConfig::OverlapElectricityApplicationMagnitude");
static_assert(offsetof(UFortCurieElectricityPropagationManagerConfig, DefaultCollisionExpansion) == 80, "Offset mismatch for UFortCurieElectricityPropagationManagerConfig::DefaultCollisionExpansion");
static_assert(offsetof(UFortCurieElectricityPropagationManagerConfig, bAllowPropagationDepthLimitOverrides) == 104, "Offset mismatch for UFortCurieElectricityPropagationManagerConfig::bAllowPropagationDepthLimitOverrides");
static_assert(offsetof(UFortCurieElectricityPropagationManagerConfig, bAllowInteractsWhileDBNO) == 105, "Offset mismatch for UFortCurieElectricityPropagationManagerConfig::bAllowInteractsWhileDBNO");
static_assert(offsetof(UFortCurieElectricityPropagationManagerConfig, bAllowInteractsWhileInVehicle) == 106, "Offset mismatch for UFortCurieElectricityPropagationManagerConfig::bAllowInteractsWhileInVehicle");

// /Script/ElectricityRuntime.FortCurieElectricityRuntimeBlueprintFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UFortCurieElectricityRuntimeBlueprintFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ElectricityRuntime.FortCurieElementAllocationHandler_Electricity
// Kind: Class; super: FortCurieElementAllocationHandler
class UFortCurieElementAllocationHandler_Electricity
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ElectricityRuntime.FortCurieElementAttachConditionHandlerElectricity
// Kind: Class; super: FortCurieElementAttachConditionHandler
class UFortCurieElementAttachConditionHandlerElectricity
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ElementMagnitudeToIntensityCurve[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCurieElementAttachConditionHandlerElectricity, ElementMagnitudeToIntensityCurve) == 48, "Offset mismatch for UFortCurieElementAttachConditionHandlerElectricity::ElementMagnitudeToIntensityCurve");

// /Script/ElectricityRuntime.FortCurieElementContainerParamsGenerator_Electricity
// Kind: Class; super: FortCurieElementContainerParamsGenerator
class UFortCurieElementContainerParamsGenerator_Electricity
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t PropagationDepthLimit; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortCurieElementContainerParamsGenerator_Electricity, PropagationDepthLimit) == 48, "Offset mismatch for UFortCurieElementContainerParamsGenerator_Electricity::PropagationDepthLimit");

// /Script/ElectricityRuntime.FortGameplayAbility_ElectrifiedBuilding
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_ElectrifiedBuilding
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    TArray<void*> BuildingReplacementGroups; // 0x0B20 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ReplacementChance[0x28]; // 0x0B30 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinReplacementDelay[0x28]; // 0x0B58 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxReplacementDelay[0x1]; // 0x0B80 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortGameplayAbility_ElectrifiedBuilding, BuildingReplacementGroups) == 2848, "Offset mismatch for UFortGameplayAbility_ElectrifiedBuilding::BuildingReplacementGroups");
static_assert(offsetof(UFortGameplayAbility_ElectrifiedBuilding, ReplacementChance) == 2864, "Offset mismatch for UFortGameplayAbility_ElectrifiedBuilding::ReplacementChance");
static_assert(offsetof(UFortGameplayAbility_ElectrifiedBuilding, MinReplacementDelay) == 2904, "Offset mismatch for UFortGameplayAbility_ElectrifiedBuilding::MinReplacementDelay");
static_assert(offsetof(UFortGameplayAbility_ElectrifiedBuilding, MaxReplacementDelay) == 2944, "Offset mismatch for UFortGameplayAbility_ElectrifiedBuilding::MaxReplacementDelay");

// /Script/ElectricityRuntime.FortGameplayAbility_ElectrifiedVehicle
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_ElectrifiedVehicle
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t MinTurnDelay[0x28]; // 0x0B20 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxTurnDelay[0x28]; // 0x0B48 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinHonkDelay[0x28]; // 0x0B70 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxHonkDelay[0x28]; // 0x0B98 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinHonkDuration[0x28]; // 0x0BC0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxHonkDuration[0x28]; // 0x0BE8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinBoostDelay[0x28]; // 0x0C10 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxBoostDelay[0x28]; // 0x0C38 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinBoostDuration[0x28]; // 0x0C60 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxBoostDuration[0x28]; // 0x0C88 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetingChance[0x28]; // 0x0CB0 (Size: 0x28, Type: StructProperty)
    void* TargetingPreset; // 0x0CD8 (Size: 0x8, Type: ObjectProperty)
    void* Target; // 0x0CE0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameplayAbility_ElectrifiedVehicle, MinTurnDelay) == 2848, "Offset mismatch for UFortGameplayAbility_ElectrifiedVehicle::MinTurnDelay");
static_assert(offsetof(UFortGameplayAbility_ElectrifiedVehicle, MaxTurnDelay) == 2888, "Offset mismatch for UFortGameplayAbility_ElectrifiedVehicle::MaxTurnDelay");
static_assert(offsetof(UFortGameplayAbility_ElectrifiedVehicle, MinHonkDelay) == 2928, "Offset mismatch for UFortGameplayAbility_ElectrifiedVehicle::MinHonkDelay");
static_assert(offsetof(UFortGameplayAbility_ElectrifiedVehicle, MaxHonkDelay) == 2968, "Offset mismatch for UFortGameplayAbility_ElectrifiedVehicle::MaxHonkDelay");
static_assert(offsetof(UFortGameplayAbility_ElectrifiedVehicle, MinHonkDuration) == 3008, "Offset mismatch for UFortGameplayAbility_ElectrifiedVehicle::MinHonkDuration");
static_assert(offsetof(UFortGameplayAbility_ElectrifiedVehicle, MaxHonkDuration) == 3048, "Offset mismatch for UFortGameplayAbility_ElectrifiedVehicle::MaxHonkDuration");
static_assert(offsetof(UFortGameplayAbility_ElectrifiedVehicle, MinBoostDelay) == 3088, "Offset mismatch for UFortGameplayAbility_ElectrifiedVehicle::MinBoostDelay");
static_assert(offsetof(UFortGameplayAbility_ElectrifiedVehicle, MaxBoostDelay) == 3128, "Offset mismatch for UFortGameplayAbility_ElectrifiedVehicle::MaxBoostDelay");
static_assert(offsetof(UFortGameplayAbility_ElectrifiedVehicle, MinBoostDuration) == 3168, "Offset mismatch for UFortGameplayAbility_ElectrifiedVehicle::MinBoostDuration");
static_assert(offsetof(UFortGameplayAbility_ElectrifiedVehicle, MaxBoostDuration) == 3208, "Offset mismatch for UFortGameplayAbility_ElectrifiedVehicle::MaxBoostDuration");
static_assert(offsetof(UFortGameplayAbility_ElectrifiedVehicle, TargetingChance) == 3248, "Offset mismatch for UFortGameplayAbility_ElectrifiedVehicle::TargetingChance");
static_assert(offsetof(UFortGameplayAbility_ElectrifiedVehicle, TargetingPreset) == 3288, "Offset mismatch for UFortGameplayAbility_ElectrifiedVehicle::TargetingPreset");
static_assert(offsetof(UFortGameplayAbility_ElectrifiedVehicle, Target) == 3296, "Offset mismatch for UFortGameplayAbility_ElectrifiedVehicle::Target");
