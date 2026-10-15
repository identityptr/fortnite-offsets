/**
 * decamp dumper generated SDK
 * Package: /Script/NitroGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/NitroGameplayRuntime.FortEvent_NitroVehicleStateChanged
// Kind: ScriptStruct; super: none
struct FFortEvent_NitroVehicleStateChanged
{
public:
    std::uint8_t bNitroVehicleStateEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortEvent_NitroVehicleStateChanged, bNitroVehicleStateEnabled) == 0, "Offset mismatch for FFortEvent_NitroVehicleStateChanged::bNitroVehicleStateEnabled");

// /Script/NitroGameplayRuntime.FortMovementMode_NitroPlayerStateCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_NitroPlayerStateCreationData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* LogicClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FFortMovementMode_NitroPlayerStateCreationData, LogicClass) == 8, "Offset mismatch for FFortMovementMode_NitroPlayerStateCreationData::LogicClass");

// /Script/NitroGameplayRuntime.FortGA_NitroBashBase
// Kind: Class; super: FortGameplayAbility
class UFortGA_NitroBashBase
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t MinExplosiveSpeedVehicle[0x28]; // 0x0B20 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedCheckFrequency[0x28]; // 0x0B48 (Size: 0x28, Type: StructProperty)
    float MinGeneralSpeedToTrigger; // 0x0B70 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> VehicleOnwer; // 0x0B74 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortGA_NitroBashBase, MinExplosiveSpeedVehicle) == 2848, "Offset mismatch for UFortGA_NitroBashBase::MinExplosiveSpeedVehicle");
static_assert(offsetof(UFortGA_NitroBashBase, SpeedCheckFrequency) == 2888, "Offset mismatch for UFortGA_NitroBashBase::SpeedCheckFrequency");
static_assert(offsetof(UFortGA_NitroBashBase, MinGeneralSpeedToTrigger) == 2928, "Offset mismatch for UFortGA_NitroBashBase::MinGeneralSpeedToTrigger");
static_assert(offsetof(UFortGA_NitroBashBase, VehicleOnwer) == 2932, "Offset mismatch for UFortGA_NitroBashBase::VehicleOnwer");

// /Script/NitroGameplayRuntime.FortGCNL_Nitro_Active_Base
// Kind: Class; super: FortGameplayCueNotify_Loop
class UFortGCNL_Nitro_Active_Base
{
public:
    std::uint8_t Pad_0000[0xC48]; // 0x0000
    float IntervalToUpdateTimerHandleForVFX; // 0x0C48 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0C4C
    std::uint8_t NitroStateEffectTags[0x20]; // 0x0C50 (Size: 0x20, Type: StructProperty)
    std::uint8_t UseEffectDuration; // 0x0C70 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0C71
    std::uint8_t NitroStateEffectHandle[0x14]; // 0x0C74 (Size: 0x14, Type: StructProperty)
    void* TargetActor; // 0x0C88 (Size: 0x8, Type: ObjectProperty)
    float RemainingDuration; // 0x0C90 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> OwnerAbilitySystemComponent; // 0x0C94 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortGCNL_Nitro_Active_Base, IntervalToUpdateTimerHandleForVFX) == 3144, "Offset mismatch for UFortGCNL_Nitro_Active_Base::IntervalToUpdateTimerHandleForVFX");
static_assert(offsetof(UFortGCNL_Nitro_Active_Base, NitroStateEffectTags) == 3152, "Offset mismatch for UFortGCNL_Nitro_Active_Base::NitroStateEffectTags");
static_assert(offsetof(UFortGCNL_Nitro_Active_Base, UseEffectDuration) == 3184, "Offset mismatch for UFortGCNL_Nitro_Active_Base::UseEffectDuration");
static_assert(offsetof(UFortGCNL_Nitro_Active_Base, NitroStateEffectHandle) == 3188, "Offset mismatch for UFortGCNL_Nitro_Active_Base::NitroStateEffectHandle");
static_assert(offsetof(UFortGCNL_Nitro_Active_Base, TargetActor) == 3208, "Offset mismatch for UFortGCNL_Nitro_Active_Base::TargetActor");
static_assert(offsetof(UFortGCNL_Nitro_Active_Base, RemainingDuration) == 3216, "Offset mismatch for UFortGCNL_Nitro_Active_Base::RemainingDuration");
static_assert(offsetof(UFortGCNL_Nitro_Active_Base, OwnerAbilitySystemComponent) == 3220, "Offset mismatch for UFortGCNL_Nitro_Active_Base::OwnerAbilitySystemComponent");

// /Script/NitroGameplayRuntime.FortMovementMode_ExtLogicNitroState
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_ExtLogicNitroState
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t SwimSpeedSpeedMultiplier[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t LandSpeedMultiplier[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t JumpZVelocityMultiplier[0x28]; // 0x0208 (Size: 0x28, Type: StructProperty)
    std::uint8_t JumpHorizontalVelocityOverride[0x28]; // 0x0230 (Size: 0x28, Type: StructProperty)
    std::uint8_t JumpHorizontalAccelerationOverride[0x28]; // 0x0258 (Size: 0x28, Type: StructProperty)
    std::uint8_t DotThresholdToApplyJumpBoostTag[0x28]; // 0x0280 (Size: 0x28, Type: StructProperty)
    std::uint8_t RequiredTagsToApplyHorizontalJumpBoost[0x20]; // 0x02A8 (Size: 0x20, Type: StructProperty)
    TArray<void*> GameplayCuesTagsToPush; // 0x02C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortMovementMode_ExtLogicNitroState, SwimSpeedSpeedMultiplier) == 440, "Offset mismatch for UFortMovementMode_ExtLogicNitroState::SwimSpeedSpeedMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicNitroState, LandSpeedMultiplier) == 480, "Offset mismatch for UFortMovementMode_ExtLogicNitroState::LandSpeedMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicNitroState, JumpZVelocityMultiplier) == 520, "Offset mismatch for UFortMovementMode_ExtLogicNitroState::JumpZVelocityMultiplier");
static_assert(offsetof(UFortMovementMode_ExtLogicNitroState, JumpHorizontalVelocityOverride) == 560, "Offset mismatch for UFortMovementMode_ExtLogicNitroState::JumpHorizontalVelocityOverride");
static_assert(offsetof(UFortMovementMode_ExtLogicNitroState, JumpHorizontalAccelerationOverride) == 600, "Offset mismatch for UFortMovementMode_ExtLogicNitroState::JumpHorizontalAccelerationOverride");
static_assert(offsetof(UFortMovementMode_ExtLogicNitroState, DotThresholdToApplyJumpBoostTag) == 640, "Offset mismatch for UFortMovementMode_ExtLogicNitroState::DotThresholdToApplyJumpBoostTag");
static_assert(offsetof(UFortMovementMode_ExtLogicNitroState, RequiredTagsToApplyHorizontalJumpBoost) == 680, "Offset mismatch for UFortMovementMode_ExtLogicNitroState::RequiredTagsToApplyHorizontalJumpBoost");
static_assert(offsetof(UFortMovementMode_ExtLogicNitroState, GameplayCuesTagsToPush) == 712, "Offset mismatch for UFortMovementMode_ExtLogicNitroState::GameplayCuesTagsToPush");

// /Script/NitroGameplayRuntime.FortMovementMode_PlayerNitroStateRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_PlayerNitroStateRuntimeData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t LogicID[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t RuntimeID; // 0x002C (Size: 0x1, Type: ByteProperty)
    std::uint8_t bForceManualActivation; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualEnd; // 0x002E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualActivationNetworked; // 0x002F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualEndNetworked; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EndReasonFlags; // 0x0031 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortMovementMode_PlayerNitroStateRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_PlayerNitroStateRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_PlayerNitroStateRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_PlayerNitroStateRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_PlayerNitroStateRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_PlayerNitroStateRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_PlayerNitroStateRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_PlayerNitroStateRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_PlayerNitroStateRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_PlayerNitroStateRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_PlayerNitroStateRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_PlayerNitroStateRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_PlayerNitroStateRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_PlayerNitroStateRuntimeData::EndReasonFlags");

// /Script/NitroGameplayRuntime.FortPawnComponent_NitroPlayerState
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_NitroPlayerState
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* NitroStateMovementModeExtension; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t NitroPlayerStateMovementTag[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortPawnComponent_NitroPlayerState, NitroStateMovementModeExtension) == 200, "Offset mismatch for UFortPawnComponent_NitroPlayerState::NitroStateMovementModeExtension");
static_assert(offsetof(UFortPawnComponent_NitroPlayerState, NitroPlayerStateMovementTag) == 208, "Offset mismatch for UFortPawnComponent_NitroPlayerState::NitroPlayerStateMovementTag");

// /Script/NitroGameplayRuntime.FortWeaponNitroGauntlets
// Kind: Class; super: FortWeaponRanged
class UFortWeaponNitroGauntlets
{
public:
    std::uint8_t Pad_0000[0x2968]; // 0x0000
    FMulticastInlineDelegate OnUpdatePunchPreview; // 0x2968 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t PunchPreviewAsyncTargetingHandle[0x8]; // 0x2978 (Size: 0x8, Type: StructProperty)
    void* GroundPunchTargetingPreset; // 0x2980 (Size: 0x8, Type: ObjectProperty)
    void* AirPunchTargetingPreset; // 0x2988 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortWeaponNitroGauntlets, OnUpdatePunchPreview) == 10600, "Offset mismatch for UFortWeaponNitroGauntlets::OnUpdatePunchPreview");
static_assert(offsetof(UFortWeaponNitroGauntlets, PunchPreviewAsyncTargetingHandle) == 10616, "Offset mismatch for UFortWeaponNitroGauntlets::PunchPreviewAsyncTargetingHandle");
static_assert(offsetof(UFortWeaponNitroGauntlets, GroundPunchTargetingPreset) == 10624, "Offset mismatch for UFortWeaponNitroGauntlets::GroundPunchTargetingPreset");
static_assert(offsetof(UFortWeaponNitroGauntlets, AirPunchTargetingPreset) == 10632, "Offset mismatch for UFortWeaponNitroGauntlets::AirPunchTargetingPreset");

// /Script/NitroGameplayRuntime.NirtroBashLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UNirtroBashLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t bIsBash_01; // 0x1170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBash_02; // 0x1171 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsExitBash; // 0x1172 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBounceBack; // 0x1173 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTacSprintOrBashing; // 0x1174 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCurrentlyBashing; // 0x1175 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x1176
    void* UpperBodyBash; // 0x1178 (Size: 0x8, Type: ObjectProperty)
    void* FullBodyBash; // 0x1180 (Size: 0x8, Type: ObjectProperty)
    void* UpperBodyBashSequenceA; // 0x1188 (Size: 0x8, Type: ObjectProperty)
    void* UpperBodyBashSequenceB; // 0x1190 (Size: 0x8, Type: ObjectProperty)
    void* FullBodyBashSequenceA; // 0x1198 (Size: 0x8, Type: ObjectProperty)
    void* FullBodyBashSequenceB; // 0x11A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TacticalSprintTag[0x4]; // 0x11A8 (Size: 0x4, Type: StructProperty)
    std::uint8_t BounceBackTag[0x4]; // 0x11AC (Size: 0x4, Type: StructProperty)
    std::uint8_t IsBashingTag[0x1]; // 0x11B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNirtroBashLayerAnimInstance, bIsBash_01) == 4464, "Offset mismatch for UNirtroBashLayerAnimInstance::bIsBash_01");
static_assert(offsetof(UNirtroBashLayerAnimInstance, bIsBash_02) == 4465, "Offset mismatch for UNirtroBashLayerAnimInstance::bIsBash_02");
static_assert(offsetof(UNirtroBashLayerAnimInstance, bIsExitBash) == 4466, "Offset mismatch for UNirtroBashLayerAnimInstance::bIsExitBash");
static_assert(offsetof(UNirtroBashLayerAnimInstance, bIsBounceBack) == 4467, "Offset mismatch for UNirtroBashLayerAnimInstance::bIsBounceBack");
static_assert(offsetof(UNirtroBashLayerAnimInstance, bIsTacSprintOrBashing) == 4468, "Offset mismatch for UNirtroBashLayerAnimInstance::bIsTacSprintOrBashing");
static_assert(offsetof(UNirtroBashLayerAnimInstance, bIsCurrentlyBashing) == 4469, "Offset mismatch for UNirtroBashLayerAnimInstance::bIsCurrentlyBashing");
static_assert(offsetof(UNirtroBashLayerAnimInstance, UpperBodyBash) == 4472, "Offset mismatch for UNirtroBashLayerAnimInstance::UpperBodyBash");
static_assert(offsetof(UNirtroBashLayerAnimInstance, FullBodyBash) == 4480, "Offset mismatch for UNirtroBashLayerAnimInstance::FullBodyBash");
static_assert(offsetof(UNirtroBashLayerAnimInstance, UpperBodyBashSequenceA) == 4488, "Offset mismatch for UNirtroBashLayerAnimInstance::UpperBodyBashSequenceA");
static_assert(offsetof(UNirtroBashLayerAnimInstance, UpperBodyBashSequenceB) == 4496, "Offset mismatch for UNirtroBashLayerAnimInstance::UpperBodyBashSequenceB");
static_assert(offsetof(UNirtroBashLayerAnimInstance, FullBodyBashSequenceA) == 4504, "Offset mismatch for UNirtroBashLayerAnimInstance::FullBodyBashSequenceA");
static_assert(offsetof(UNirtroBashLayerAnimInstance, FullBodyBashSequenceB) == 4512, "Offset mismatch for UNirtroBashLayerAnimInstance::FullBodyBashSequenceB");
static_assert(offsetof(UNirtroBashLayerAnimInstance, TacticalSprintTag) == 4520, "Offset mismatch for UNirtroBashLayerAnimInstance::TacticalSprintTag");
static_assert(offsetof(UNirtroBashLayerAnimInstance, BounceBackTag) == 4524, "Offset mismatch for UNirtroBashLayerAnimInstance::BounceBackTag");
static_assert(offsetof(UNirtroBashLayerAnimInstance, IsBashingTag) == 4528, "Offset mismatch for UNirtroBashLayerAnimInstance::IsBashingTag");

// /Script/NitroGameplayRuntime.NitroGameplayAnalytics
// Kind: Class; super: GameStateComponent
class UNitroGameplayAnalytics
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UNitroGameplayAnalytics, PrimaryComponentTick) == 56, "Offset mismatch for UNitroGameplayAnalytics::PrimaryComponentTick");
static_assert(offsetof(UNitroGameplayAnalytics, ComponentTags) == 104, "Offset mismatch for UNitroGameplayAnalytics::ComponentTags");
static_assert(offsetof(UNitroGameplayAnalytics, AssetUserData) == 120, "Offset mismatch for UNitroGameplayAnalytics::AssetUserData");
static_assert(offsetof(UNitroGameplayAnalytics, UCSSerializationIndex) == 144, "Offset mismatch for UNitroGameplayAnalytics::UCSSerializationIndex");
static_assert(offsetof(UNitroGameplayAnalytics, bNetAddressable) == 152, "Offset mismatch for UNitroGameplayAnalytics::bNetAddressable");
static_assert(offsetof(UNitroGameplayAnalytics, bAutoActivate) == 154, "Offset mismatch for UNitroGameplayAnalytics::bAutoActivate");
static_assert(offsetof(UNitroGameplayAnalytics, bIsEditorOnly) == 155, "Offset mismatch for UNitroGameplayAnalytics::bIsEditorOnly");
static_assert(offsetof(UNitroGameplayAnalytics, CreationMethod) == 185, "Offset mismatch for UNitroGameplayAnalytics::CreationMethod");
static_assert(offsetof(UNitroGameplayAnalytics, OnComponentActivated) == 186, "Offset mismatch for UNitroGameplayAnalytics::OnComponentActivated");
static_assert(offsetof(UNitroGameplayAnalytics, OnComponentDeactivated) == 187, "Offset mismatch for UNitroGameplayAnalytics::OnComponentDeactivated");
