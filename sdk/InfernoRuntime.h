/**
 * decamp dumper generated SDK
 * Package: /Script/InfernoRuntime
 */
#pragma once
#include "Basic.h"

// /Script/InfernoRuntime.FortCurieVoxelFireParticleGrassData
// Kind: ScriptStruct; super: none
struct FFortCurieVoxelFireParticleGrassData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InfernoRuntime.FortCurieVoxelFirePropagationManagerTickFunction
// Kind: ScriptStruct; super: TickFunction
struct FFortCurieVoxelFirePropagationManagerTickFunction
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

static_assert(offsetof(FFortCurieVoxelFirePropagationManagerTickFunction, TickGroup) == 8, "Offset mismatch for FFortCurieVoxelFirePropagationManagerTickFunction::TickGroup");
static_assert(offsetof(FFortCurieVoxelFirePropagationManagerTickFunction, EndTickGroup) == 9, "Offset mismatch for FFortCurieVoxelFirePropagationManagerTickFunction::EndTickGroup");
static_assert(offsetof(FFortCurieVoxelFirePropagationManagerTickFunction, bAllowTickOnDedicatedServer) == 10, "Offset mismatch for FFortCurieVoxelFirePropagationManagerTickFunction::bAllowTickOnDedicatedServer");
static_assert(offsetof(FFortCurieVoxelFirePropagationManagerTickFunction, TickInterval) == 12, "Offset mismatch for FFortCurieVoxelFirePropagationManagerTickFunction::TickInterval");

// /Script/InfernoRuntime.FortCurieVoxelPropagationProperties
// Kind: ScriptStruct; super: TableRowBase
struct FFortCurieVoxelPropagationProperties
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float PropagationZDirectionDownMultiplier; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float PropagationZDirectionUpMultiplier; // 0x000C (Size: 0x4, Type: FloatProperty)
    float PropagationBaseDelay; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float PropagationBaseSpeed; // 0x0014 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortCurieVoxelPropagationProperties, PropagationZDirectionDownMultiplier) == 8, "Offset mismatch for FFortCurieVoxelPropagationProperties::PropagationZDirectionDownMultiplier");
static_assert(offsetof(FFortCurieVoxelPropagationProperties, PropagationZDirectionUpMultiplier) == 12, "Offset mismatch for FFortCurieVoxelPropagationProperties::PropagationZDirectionUpMultiplier");
static_assert(offsetof(FFortCurieVoxelPropagationProperties, PropagationBaseDelay) == 16, "Offset mismatch for FFortCurieVoxelPropagationProperties::PropagationBaseDelay");
static_assert(offsetof(FFortCurieVoxelPropagationProperties, PropagationBaseSpeed) == 20, "Offset mismatch for FFortCurieVoxelPropagationProperties::PropagationBaseSpeed");

// /Script/InfernoRuntime.FortCurieElementAttachConditionHandlerVoxelFire
// Kind: Class; super: FortCurieElementAttachConditionHandlerFire
class UFortCurieElementAttachConditionHandlerVoxelFire
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ElementMagnitudeToIntensityCurve[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCurieElementAttachConditionHandlerVoxelFire, ElementMagnitudeToIntensityCurve) == 48, "Offset mismatch for UFortCurieElementAttachConditionHandlerVoxelFire::ElementMagnitudeToIntensityCurve");

// /Script/InfernoRuntime.FortCurieElementAttachHandlerVoxelFire
// Kind: Class; super: FortCurieElementAttachHandlerFire
class UFortCurieElementAttachHandlerVoxelFire
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> AttachmentSuggestedStates; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bActAsDmgSrcDirectly; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    std::uint8_t DamageDataTableRowHandle[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCurieElementAttachHandlerVoxelFire, AttachmentSuggestedStates) == 104, "Offset mismatch for UFortCurieElementAttachHandlerVoxelFire::AttachmentSuggestedStates");
static_assert(offsetof(UFortCurieElementAttachHandlerVoxelFire, bActAsDmgSrcDirectly) == 120, "Offset mismatch for UFortCurieElementAttachHandlerVoxelFire::bActAsDmgSrcDirectly");
static_assert(offsetof(UFortCurieElementAttachHandlerVoxelFire, DamageDataTableRowHandle) == 128, "Offset mismatch for UFortCurieElementAttachHandlerVoxelFire::DamageDataTableRowHandle");

// /Script/InfernoRuntime.FortCurieVoxelFireDebugNiagaraDataInterface
// Kind: Class; super: NiagaraDataInterface
class UFortCurieVoxelFireDebugNiagaraDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InfernoRuntime.FortCurieVoxelFireDebugParticleDataInterface
// Kind: Class; super: Interface
class UFortCurieVoxelFireDebugParticleDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InfernoRuntime.FortCurieVoxelFireNativeFXHandler
// Kind: Class; super: FortCurieNativeFXHandler
class UFortCurieVoxelFireNativeFXHandler
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t PendingUpdateComponents[0x10]; // 0x0070 (Size: 0x10, Type: SetProperty)
    std::uint8_t PendingRemoveComponents[0x20]; // 0x0080 (Size: 0x20, Type: SetProperty)
    TArray<void*> WorldFireNiagaraSystems; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WorldFireDebugNiagaraSystems; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    float WorldSystemFireParticleSignificanceRequirement; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    float WorldSystemIgnitionParticleSignificanceRequirement; // 0x00C4 (Size: 0x4, Type: FloatProperty)
    float AudioGrassFireSignificanceRequirement; // 0x00C8 (Size: 0x4, Type: FloatProperty)
    float AudioActorFireSignificanceRequirement; // 0x00CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t RandomStream[0x8]; // 0x00D0 (Size: 0x8, Type: StructProperty)
    std::uint8_t GrassFireBounds[0x38]; // 0x00D8 (Size: 0x38, Type: StructProperty)
    float LandscapeCharInterpSpeed; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float TimeSinceAudioUpdate; // 0x0114 (Size: 0x4, Type: FloatProperty)
    TArray<void*> CachedFireParticleGrassData; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedFireParticleActorData; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0138
    std::uint8_t CachedBurningGrassGridCells[0x10]; // 0x0158 (Size: 0x10, Type: SetProperty)
    TMap<void*, void*> GrassAudioMap; // 0x0168 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0178
    TArray<void*> PreallocatedAudioComponents; // 0x0188 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AudioComponentCleanupTimerHandle[0x8]; // 0x0198 (Size: 0x8, Type: StructProperty)
    double PreviousLandscapeCharTickTime; // 0x01A0 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, PendingUpdateComponents) == 112, "Offset mismatch for UFortCurieVoxelFireNativeFXHandler::PendingUpdateComponents");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, PendingRemoveComponents) == 128, "Offset mismatch for UFortCurieVoxelFireNativeFXHandler::PendingRemoveComponents");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, WorldFireNiagaraSystems) == 160, "Offset mismatch for UFortCurieVoxelFireNativeFXHandler::WorldFireNiagaraSystems");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, WorldFireDebugNiagaraSystems) == 176, "Offset mismatch for UFortCurieVoxelFireNativeFXHandler::WorldFireDebugNiagaraSystems");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, WorldSystemFireParticleSignificanceRequirement) == 192, "Offset mismatch for UFortCurieVoxelFireNativeFXHandler::WorldSystemFireParticleSignificanceRequirement");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, WorldSystemIgnitionParticleSignificanceRequirement) == 196, "Offset mismatch for UFortCurieVoxelFireNativeFXHandler::WorldSystemIgnitionParticleSignificanceRequirement");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, AudioGrassFireSignificanceRequirement) == 200, "Offset mismatch for UFortCurieVoxelFireNativeFXHandler::AudioGrassFireSignificanceRequirement");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, AudioActorFireSignificanceRequirement) == 204, "Offset mismatch for UFortCurieVoxelFireNativeFXHandler::AudioActorFireSignificanceRequirement");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, RandomStream) == 208, "Offset mismatch for UFortCurieVoxelFireNativeFXHandler::RandomStream");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, GrassFireBounds) == 216, "Offset mismatch for UFortCurieVoxelFireNativeFXHandler::GrassFireBounds");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, LandscapeCharInterpSpeed) == 272, "Offset mismatch for UFortCurieVoxelFireNativeFXHandler::LandscapeCharInterpSpeed");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, TimeSinceAudioUpdate) == 276, "Offset mismatch for UFortCurieVoxelFireNativeFXHandler::TimeSinceAudioUpdate");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, CachedFireParticleGrassData) == 280, "Offset mismatch for UFortCurieVoxelFireNativeFXHandler::CachedFireParticleGrassData");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, CachedFireParticleActorData) == 296, "Offset mismatch for UFortCurieVoxelFireNativeFXHandler::CachedFireParticleActorData");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, CachedBurningGrassGridCells) == 344, "Offset mismatch for UFortCurieVoxelFireNativeFXHandler::CachedBurningGrassGridCells");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, GrassAudioMap) == 360, "Offset mismatch for UFortCurieVoxelFireNativeFXHandler::GrassAudioMap");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, PreallocatedAudioComponents) == 392, "Offset mismatch for UFortCurieVoxelFireNativeFXHandler::PreallocatedAudioComponents");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, AudioComponentCleanupTimerHandle) == 408, "Offset mismatch for UFortCurieVoxelFireNativeFXHandler::AudioComponentCleanupTimerHandle");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandler, PreviousLandscapeCharTickTime) == 416, "Offset mismatch for UFortCurieVoxelFireNativeFXHandler::PreviousLandscapeCharTickTime");

// /Script/InfernoRuntime.FortCurieVoxelFireNativeFXHandlerConfig
// Kind: Class; super: FortCurieNativeFXHandlerConfig
class UFortCurieVoxelFireNativeFXHandlerConfig
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* WorldFireSystem; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* WorldFireDebugSystem; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* LandscapeCharRenderTarget; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* MaterialParameterCollection; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PlayerWorldFireSystemLightScalabilityParamName[0x4]; // 0x0100 (Size: 0x4, Type: NameProperty)
    std::uint8_t LandscapeBiasParameterName[0x4]; // 0x0104 (Size: 0x4, Type: NameProperty)
    std::uint8_t LandscapeDivisorParameterName[0x4]; // 0x0108 (Size: 0x4, Type: NameProperty)
    float LandscapeFireRandomLocationRadius; // 0x010C (Size: 0x4, Type: FloatProperty)
    float MinLandscapeFireSphericalBounds; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float MaxLandscapeFireSphericalBounds; // 0x0114 (Size: 0x4, Type: FloatProperty)
    float LandscapeCharInterpSpeed; // 0x0118 (Size: 0x4, Type: FloatProperty)
    float LandscapeIgnitionParticleMovementSpeed; // 0x011C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseVoxelFireAmbientAudio; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0121
    void* StructureFireAmbientSound; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* GrassFireAmbientSound; // 0x0130 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, WorldFireSystem) == 224, "Offset mismatch for UFortCurieVoxelFireNativeFXHandlerConfig::WorldFireSystem");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, WorldFireDebugSystem) == 232, "Offset mismatch for UFortCurieVoxelFireNativeFXHandlerConfig::WorldFireDebugSystem");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, LandscapeCharRenderTarget) == 240, "Offset mismatch for UFortCurieVoxelFireNativeFXHandlerConfig::LandscapeCharRenderTarget");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, MaterialParameterCollection) == 248, "Offset mismatch for UFortCurieVoxelFireNativeFXHandlerConfig::MaterialParameterCollection");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, PlayerWorldFireSystemLightScalabilityParamName) == 256, "Offset mismatch for UFortCurieVoxelFireNativeFXHandlerConfig::PlayerWorldFireSystemLightScalabilityParamName");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, LandscapeBiasParameterName) == 260, "Offset mismatch for UFortCurieVoxelFireNativeFXHandlerConfig::LandscapeBiasParameterName");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, LandscapeDivisorParameterName) == 264, "Offset mismatch for UFortCurieVoxelFireNativeFXHandlerConfig::LandscapeDivisorParameterName");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, LandscapeFireRandomLocationRadius) == 268, "Offset mismatch for UFortCurieVoxelFireNativeFXHandlerConfig::LandscapeFireRandomLocationRadius");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, MinLandscapeFireSphericalBounds) == 272, "Offset mismatch for UFortCurieVoxelFireNativeFXHandlerConfig::MinLandscapeFireSphericalBounds");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, MaxLandscapeFireSphericalBounds) == 276, "Offset mismatch for UFortCurieVoxelFireNativeFXHandlerConfig::MaxLandscapeFireSphericalBounds");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, LandscapeCharInterpSpeed) == 280, "Offset mismatch for UFortCurieVoxelFireNativeFXHandlerConfig::LandscapeCharInterpSpeed");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, LandscapeIgnitionParticleMovementSpeed) == 284, "Offset mismatch for UFortCurieVoxelFireNativeFXHandlerConfig::LandscapeIgnitionParticleMovementSpeed");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, bUseVoxelFireAmbientAudio) == 288, "Offset mismatch for UFortCurieVoxelFireNativeFXHandlerConfig::bUseVoxelFireAmbientAudio");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, StructureFireAmbientSound) == 296, "Offset mismatch for UFortCurieVoxelFireNativeFXHandlerConfig::StructureFireAmbientSound");
static_assert(offsetof(UFortCurieVoxelFireNativeFXHandlerConfig, GrassFireAmbientSound) == 304, "Offset mismatch for UFortCurieVoxelFireNativeFXHandlerConfig::GrassFireAmbientSound");

// /Script/InfernoRuntime.FortCurieVoxelFireNiagaraDataInterface
// Kind: Class; super: NiagaraDataInterface
class UFortCurieVoxelFireNiagaraDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InfernoRuntime.FortCurieVoxelFireParticleDataInterface
// Kind: Class; super: Interface
class UFortCurieVoxelFireParticleDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InfernoRuntime.FortCurieVoxelFirePropagationManager
// Kind: Class; super: FortCurieManagerComponent
class UFortCurieVoxelFirePropagationManager
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t PrimaryTickFunction[0x278]; // 0x0040 (Size: 0x278, Type: StructProperty)
    void* InternalManagerConfig; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCurieVoxelFirePropagationManager, PrimaryTickFunction) == 64, "Offset mismatch for UFortCurieVoxelFirePropagationManager::PrimaryTickFunction");
static_assert(offsetof(UFortCurieVoxelFirePropagationManager, InternalManagerConfig) == 696, "Offset mismatch for UFortCurieVoxelFirePropagationManager::InternalManagerConfig");

// /Script/InfernoRuntime.FortCurieVoxelFirePropagationManagerConfig
// Kind: Class; super: FortCurieFirePropagationManagerConfig
class UFortCurieVoxelFirePropagationManagerConfig
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    std::uint8_t DefaultPropagationProperties[0x18]; // 0x0128 (Size: 0x18, Type: StructProperty)
    std::uint8_t PropagationPropertiesRegistry[0x4]; // 0x0140 (Size: 0x4, Type: NameProperty)
    float PropagationNoiseMinimum; // 0x0144 (Size: 0x4, Type: FloatProperty)
    float PropagationNoiseMaximum; // 0x0148 (Size: 0x4, Type: FloatProperty)
    float PropagationSpeedNoiseRange; // 0x014C (Size: 0x4, Type: FloatProperty)
    float PropagationMinimumSpeed; // 0x0150 (Size: 0x4, Type: FloatProperty)
    float PropagationMinimumTime; // 0x0154 (Size: 0x4, Type: FloatProperty)
    float VoxelOverlapExpansionFactor; // 0x0158 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowPerMaterialPropagationProperties; // 0x015C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x015D
    float ActorPropagationInteractMagnitude; // 0x0160 (Size: 0x4, Type: FloatProperty)
    float MovedActorGrassIgnitionDelay; // 0x0164 (Size: 0x4, Type: FloatProperty)
    float MovedActorGrassGridCellZExpansion; // 0x0168 (Size: 0x4, Type: FloatProperty)
    float MovedActorGroundTraceZRange; // 0x016C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, DefaultPropagationProperties) == 296, "Offset mismatch for UFortCurieVoxelFirePropagationManagerConfig::DefaultPropagationProperties");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, PropagationPropertiesRegistry) == 320, "Offset mismatch for UFortCurieVoxelFirePropagationManagerConfig::PropagationPropertiesRegistry");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, PropagationNoiseMinimum) == 324, "Offset mismatch for UFortCurieVoxelFirePropagationManagerConfig::PropagationNoiseMinimum");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, PropagationNoiseMaximum) == 328, "Offset mismatch for UFortCurieVoxelFirePropagationManagerConfig::PropagationNoiseMaximum");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, PropagationSpeedNoiseRange) == 332, "Offset mismatch for UFortCurieVoxelFirePropagationManagerConfig::PropagationSpeedNoiseRange");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, PropagationMinimumSpeed) == 336, "Offset mismatch for UFortCurieVoxelFirePropagationManagerConfig::PropagationMinimumSpeed");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, PropagationMinimumTime) == 340, "Offset mismatch for UFortCurieVoxelFirePropagationManagerConfig::PropagationMinimumTime");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, VoxelOverlapExpansionFactor) == 344, "Offset mismatch for UFortCurieVoxelFirePropagationManagerConfig::VoxelOverlapExpansionFactor");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, bAllowPerMaterialPropagationProperties) == 348, "Offset mismatch for UFortCurieVoxelFirePropagationManagerConfig::bAllowPerMaterialPropagationProperties");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, ActorPropagationInteractMagnitude) == 352, "Offset mismatch for UFortCurieVoxelFirePropagationManagerConfig::ActorPropagationInteractMagnitude");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, MovedActorGrassIgnitionDelay) == 356, "Offset mismatch for UFortCurieVoxelFirePropagationManagerConfig::MovedActorGrassIgnitionDelay");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, MovedActorGrassGridCellZExpansion) == 360, "Offset mismatch for UFortCurieVoxelFirePropagationManagerConfig::MovedActorGrassGridCellZExpansion");
static_assert(offsetof(UFortCurieVoxelFirePropagationManagerConfig, MovedActorGroundTraceZRange) == 364, "Offset mismatch for UFortCurieVoxelFirePropagationManagerConfig::MovedActorGroundTraceZRange");

// /Script/InfernoRuntime.InfernoCurieVoxelFireAudioNiagaraDataInterface
// Kind: Class; super: NiagaraDataInterface
class UInfernoCurieVoxelFireAudioNiagaraDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InfernoRuntime.InfernoCurieVoxelFireAudioParticleDataInterface
// Kind: Class; super: Interface
class UInfernoCurieVoxelFireAudioParticleDataInterface
{
public:
    std::uint8_t Opaque[1];
};
