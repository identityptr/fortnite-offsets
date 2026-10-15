/**
 * decamp dumper generated SDK
 * Package: /Script/RidingCodeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/RidingCodeRuntime.PrimaryFireAnimMontageAnimCoreTypeOverride
// Kind: ScriptStruct; super: none
struct FPrimaryFireAnimMontageAnimCoreTypeOverride
{
public:
    std::uint8_t CoreTypeToOverride; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t OverridingMontageInfo[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPrimaryFireAnimMontageAnimCoreTypeOverride, CoreTypeToOverride) == 0, "Offset mismatch for FPrimaryFireAnimMontageAnimCoreTypeOverride::CoreTypeToOverride");
static_assert(offsetof(FPrimaryFireAnimMontageAnimCoreTypeOverride, OverridingMontageInfo) == 8, "Offset mismatch for FPrimaryFireAnimMontageAnimCoreTypeOverride::OverridingMontageInfo");

// /Script/RidingCodeRuntime.PrimaryFireAnimMontageTagOverride
// Kind: ScriptStruct; super: none
struct FPrimaryFireAnimMontageTagOverride
{
public:
    std::uint8_t TagOverride[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t OverridingMontageInfo[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPrimaryFireAnimMontageTagOverride, TagOverride) == 0, "Offset mismatch for FPrimaryFireAnimMontageTagOverride::TagOverride");
static_assert(offsetof(FPrimaryFireAnimMontageTagOverride, OverridingMontageInfo) == 8, "Offset mismatch for FPrimaryFireAnimMontageTagOverride::OverridingMontageInfo");

// /Script/RidingCodeRuntime.RidableAndSlot
// Kind: ScriptStruct; super: none
struct FRidableAndSlot
{
public:
    void* Ridable; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SlotIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRidableAndSlot, Ridable) == 0, "Offset mismatch for FRidableAndSlot::Ridable");
static_assert(offsetof(FRidableAndSlot, SlotIndex) == 8, "Offset mismatch for FRidableAndSlot::SlotIndex");

// /Script/RidingCodeRuntime.RidableAttachmentSlot
// Kind: ScriptStruct; super: none
struct FRidableAttachmentSlot
{
public:
    FName AttachSocket; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t AttachLocationOffset[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t AttachRotationOffset[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t AttachScaleOffset[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t bLockRiderRotation; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0051
    void* CameraModeClassOverride; // 0x0058 (Size: 0x8, Type: ClassProperty)
    void* SprintCameraModeClassOverride; // 0x0060 (Size: 0x8, Type: ClassProperty)
    void* RiderAnimLayerOverlayClass; // 0x0068 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FRidableAttachmentSlot, AttachSocket) == 0, "Offset mismatch for FRidableAttachmentSlot::AttachSocket");
static_assert(offsetof(FRidableAttachmentSlot, AttachLocationOffset) == 8, "Offset mismatch for FRidableAttachmentSlot::AttachLocationOffset");
static_assert(offsetof(FRidableAttachmentSlot, AttachRotationOffset) == 32, "Offset mismatch for FRidableAttachmentSlot::AttachRotationOffset");
static_assert(offsetof(FRidableAttachmentSlot, AttachScaleOffset) == 56, "Offset mismatch for FRidableAttachmentSlot::AttachScaleOffset");
static_assert(offsetof(FRidableAttachmentSlot, bLockRiderRotation) == 80, "Offset mismatch for FRidableAttachmentSlot::bLockRiderRotation");
static_assert(offsetof(FRidableAttachmentSlot, CameraModeClassOverride) == 88, "Offset mismatch for FRidableAttachmentSlot::CameraModeClassOverride");
static_assert(offsetof(FRidableAttachmentSlot, SprintCameraModeClassOverride) == 96, "Offset mismatch for FRidableAttachmentSlot::SprintCameraModeClassOverride");
static_assert(offsetof(FRidableAttachmentSlot, RiderAnimLayerOverlayClass) == 104, "Offset mismatch for FRidableAttachmentSlot::RiderAnimLayerOverlayClass");

// /Script/RidingCodeRuntime.RiderAndSlot
// Kind: ScriptStruct; super: none
struct FRiderAndSlot
{
public:
    void* Rider; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SlotIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRiderAndSlot, Rider) == 0, "Offset mismatch for FRiderAndSlot::Rider");
static_assert(offsetof(FRiderAndSlot, SlotIndex) == 8, "Offset mismatch for FRiderAndSlot::SlotIndex");

// /Script/RidingCodeRuntime.RiderDismountLaunchVelocity
// Kind: ScriptStruct; super: none
struct FRiderDismountLaunchVelocity
{
public:
    std::uint8_t DismountVelocityMultiplier[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t DismountVelocityBaseForwardVelocity[0x28]; // 0x0028 (Size: 0x28, Type: StructProperty)
    std::uint8_t DismountVelocityBaseRightVelocity[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t DismountVelocityBaseUpVelocity[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t bApplyDismountVelocityMultiplierToZVelocity; // 0x00A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRiderDismountLaunchVelocity, DismountVelocityMultiplier) == 0, "Offset mismatch for FRiderDismountLaunchVelocity::DismountVelocityMultiplier");
static_assert(offsetof(FRiderDismountLaunchVelocity, DismountVelocityBaseForwardVelocity) == 40, "Offset mismatch for FRiderDismountLaunchVelocity::DismountVelocityBaseForwardVelocity");
static_assert(offsetof(FRiderDismountLaunchVelocity, DismountVelocityBaseRightVelocity) == 80, "Offset mismatch for FRiderDismountLaunchVelocity::DismountVelocityBaseRightVelocity");
static_assert(offsetof(FRiderDismountLaunchVelocity, DismountVelocityBaseUpVelocity) == 120, "Offset mismatch for FRiderDismountLaunchVelocity::DismountVelocityBaseUpVelocity");
static_assert(offsetof(FRiderDismountLaunchVelocity, bApplyDismountVelocityMultiplierToZVelocity) == 160, "Offset mismatch for FRiderDismountLaunchVelocity::bApplyDismountVelocityMultiplierToZVelocity");

// /Script/RidingCodeRuntime.RiderSlotData
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FRiderSlotData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* Rider; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> LastValidRider; // 0x0018 (Size: 0x8, Type: WeakObjectProperty)
    std::int32_t SlotIndex; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t SlotState; // 0x0024 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0025
    float SlotStateChangeWorldTimeSeconds; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float SlotStateDuration; // 0x002C (Size: 0x4, Type: FloatProperty)
    void* LocalRider; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LocalSlotState; // 0x0038 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0039
    std::uint8_t StateTimerHandle[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRiderSlotData, Rider) == 16, "Offset mismatch for FRiderSlotData::Rider");
static_assert(offsetof(FRiderSlotData, LastValidRider) == 24, "Offset mismatch for FRiderSlotData::LastValidRider");
static_assert(offsetof(FRiderSlotData, SlotIndex) == 32, "Offset mismatch for FRiderSlotData::SlotIndex");
static_assert(offsetof(FRiderSlotData, SlotState) == 36, "Offset mismatch for FRiderSlotData::SlotState");
static_assert(offsetof(FRiderSlotData, SlotStateChangeWorldTimeSeconds) == 40, "Offset mismatch for FRiderSlotData::SlotStateChangeWorldTimeSeconds");
static_assert(offsetof(FRiderSlotData, SlotStateDuration) == 44, "Offset mismatch for FRiderSlotData::SlotStateDuration");
static_assert(offsetof(FRiderSlotData, LocalRider) == 48, "Offset mismatch for FRiderSlotData::LocalRider");
static_assert(offsetof(FRiderSlotData, LocalSlotState) == 56, "Offset mismatch for FRiderSlotData::LocalSlotState");
static_assert(offsetof(FRiderSlotData, StateTimerHandle) == 64, "Offset mismatch for FRiderSlotData::StateTimerHandle");

// /Script/RidingCodeRuntime.RiderSlotDataArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FRiderSlotDataArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Array; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* CachedRidableComponent; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FRiderSlotDataArray, Array) == 72, "Offset mismatch for FRiderSlotDataArray::Array");
static_assert(offsetof(FRiderSlotDataArray, CachedRidableComponent) == 88, "Offset mismatch for FRiderSlotDataArray::CachedRidableComponent");

// /Script/RidingCodeRuntime.RiderSlotStateChangedEvent
// Kind: ScriptStruct; super: RidingEventBase
struct FRiderSlotStateChangedEvent
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t PreviousState; // 0x0018 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NewState; // 0x0019 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FRiderSlotStateChangedEvent, PreviousState) == 24, "Offset mismatch for FRiderSlotStateChangedEvent::PreviousState");
static_assert(offsetof(FRiderSlotStateChangedEvent, NewState) == 25, "Offset mismatch for FRiderSlotStateChangedEvent::NewState");

// /Script/RidingCodeRuntime.RiderStartedRidingEvent
// Kind: ScriptStruct; super: RidingEventBase
struct FRiderStartedRidingEvent
{
public:
    void* RidableComponent; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* RiderComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SlotIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRiderStartedRidingEvent, RidableComponent) == 0, "Offset mismatch for FRiderStartedRidingEvent::RidableComponent");
static_assert(offsetof(FRiderStartedRidingEvent, RiderComponent) == 8, "Offset mismatch for FRiderStartedRidingEvent::RiderComponent");
static_assert(offsetof(FRiderStartedRidingEvent, SlotIndex) == 16, "Offset mismatch for FRiderStartedRidingEvent::SlotIndex");

// /Script/RidingCodeRuntime.RiderStoppedRidingEvent
// Kind: ScriptStruct; super: RidingEventBase
struct FRiderStoppedRidingEvent
{
public:
    void* RidableComponent; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* RiderComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SlotIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRiderStoppedRidingEvent, RidableComponent) == 0, "Offset mismatch for FRiderStoppedRidingEvent::RidableComponent");
static_assert(offsetof(FRiderStoppedRidingEvent, RiderComponent) == 8, "Offset mismatch for FRiderStoppedRidingEvent::RiderComponent");
static_assert(offsetof(FRiderStoppedRidingEvent, SlotIndex) == 16, "Offset mismatch for FRiderStoppedRidingEvent::SlotIndex");

// /Script/RidingCodeRuntime.RidingAnalyticsData_Base
// Kind: ScriptStruct; super: none
struct FRidingAnalyticsData_Base
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Rider[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> Ridable; // 0x0028 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FRidingAnalyticsData_Base, Rider) == 8, "Offset mismatch for FRidingAnalyticsData_Base::Rider");
static_assert(offsetof(FRidingAnalyticsData_Base, Ridable) == 40, "Offset mismatch for FRidingAnalyticsData_Base::Ridable");

// /Script/RidingCodeRuntime.RidingAnalyticsData_Started
// Kind: ScriptStruct; super: RidingAnalyticsData_Base
struct FRidingAnalyticsData_Started
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Rider[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> Ridable; // 0x0028 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FRidingAnalyticsData_Started, Rider) == 8, "Offset mismatch for FRidingAnalyticsData_Started::Rider");
static_assert(offsetof(FRidingAnalyticsData_Started, Ridable) == 40, "Offset mismatch for FRidingAnalyticsData_Started::Ridable");

// /Script/RidingCodeRuntime.RidingAnalyticsData_Stopped
// Kind: ScriptStruct; super: RidingAnalyticsData_Base
struct FRidingAnalyticsData_Stopped
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    float TotalRidingTime; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float RiderStartHealth; // 0x004C (Size: 0x4, Type: FloatProperty)
    float RiderStartShield; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float RiderEndHealth; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float RiderEndShield; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float TotalDistanceTraveled; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::int32_t JumpUseCount; // 0x0060 (Size: 0x4, Type: IntProperty)
    std::int32_t AbilityUseCount; // 0x0064 (Size: 0x4, Type: IntProperty)
    float RiderDamageDealt; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float RiderDamageTaken; // 0x006C (Size: 0x4, Type: FloatProperty)
    float RiderHealingReceived; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float RiderShieldGained; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRidableEliminated; // 0x0078 (Size: 0x1, Type: BoolProperty)
    // 0x0078 BoolProperty bRidableExhausted (shared storage)
};

static_assert(offsetof(FRidingAnalyticsData_Stopped, TotalRidingTime) == 72, "Offset mismatch for FRidingAnalyticsData_Stopped::TotalRidingTime");
static_assert(offsetof(FRidingAnalyticsData_Stopped, RiderStartHealth) == 76, "Offset mismatch for FRidingAnalyticsData_Stopped::RiderStartHealth");
static_assert(offsetof(FRidingAnalyticsData_Stopped, RiderStartShield) == 80, "Offset mismatch for FRidingAnalyticsData_Stopped::RiderStartShield");
static_assert(offsetof(FRidingAnalyticsData_Stopped, RiderEndHealth) == 84, "Offset mismatch for FRidingAnalyticsData_Stopped::RiderEndHealth");
static_assert(offsetof(FRidingAnalyticsData_Stopped, RiderEndShield) == 88, "Offset mismatch for FRidingAnalyticsData_Stopped::RiderEndShield");
static_assert(offsetof(FRidingAnalyticsData_Stopped, TotalDistanceTraveled) == 92, "Offset mismatch for FRidingAnalyticsData_Stopped::TotalDistanceTraveled");
static_assert(offsetof(FRidingAnalyticsData_Stopped, JumpUseCount) == 96, "Offset mismatch for FRidingAnalyticsData_Stopped::JumpUseCount");
static_assert(offsetof(FRidingAnalyticsData_Stopped, AbilityUseCount) == 100, "Offset mismatch for FRidingAnalyticsData_Stopped::AbilityUseCount");
static_assert(offsetof(FRidingAnalyticsData_Stopped, RiderDamageDealt) == 104, "Offset mismatch for FRidingAnalyticsData_Stopped::RiderDamageDealt");
static_assert(offsetof(FRidingAnalyticsData_Stopped, RiderDamageTaken) == 108, "Offset mismatch for FRidingAnalyticsData_Stopped::RiderDamageTaken");
static_assert(offsetof(FRidingAnalyticsData_Stopped, RiderHealingReceived) == 112, "Offset mismatch for FRidingAnalyticsData_Stopped::RiderHealingReceived");
static_assert(offsetof(FRidingAnalyticsData_Stopped, RiderShieldGained) == 116, "Offset mismatch for FRidingAnalyticsData_Stopped::RiderShieldGained");
static_assert(offsetof(FRidingAnalyticsData_Stopped, bRidableEliminated) == 120, "Offset mismatch for FRidingAnalyticsData_Stopped::bRidableEliminated");

// /Script/RidingCodeRuntime.RidingAttachmentBoundsOverride
// Kind: ScriptStruct; super: none
struct FRidingAttachmentBoundsOverride
{
public:
    std::uint8_t bUseOverride; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t AttachSoftBounds[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t AttachHardBounds[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRidingAttachmentBoundsOverride, bUseOverride) == 0, "Offset mismatch for FRidingAttachmentBoundsOverride::bUseOverride");
static_assert(offsetof(FRidingAttachmentBoundsOverride, AttachSoftBounds) == 8, "Offset mismatch for FRidingAttachmentBoundsOverride::AttachSoftBounds");
static_assert(offsetof(FRidingAttachmentBoundsOverride, AttachHardBounds) == 32, "Offset mismatch for FRidingAttachmentBoundsOverride::AttachHardBounds");

// /Script/RidingCodeRuntime.RidingControlInputState
// Kind: ScriptStruct; super: none
struct FRidingControlInputState
{
public:
    float RightAlpha; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float ForwardAlpha; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsJumping; // 0x0008 (Size: 0x1, Type: BoolProperty)
    // 0x0008 BoolProperty bIsUsingAbility (shared storage)
    // 0x0008 BoolProperty bIsUsingSecondaryAbility (shared storage)
    // 0x0008 BoolProperty bIsUsingTertiaryAbility (shared storage)
    std::uint8_t bIsPetting; // 0x0009 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRidingControlInputState, RightAlpha) == 0, "Offset mismatch for FRidingControlInputState::RightAlpha");
static_assert(offsetof(FRidingControlInputState, ForwardAlpha) == 4, "Offset mismatch for FRidingControlInputState::ForwardAlpha");
static_assert(offsetof(FRidingControlInputState, bIsJumping) == 8, "Offset mismatch for FRidingControlInputState::bIsJumping");
static_assert(offsetof(FRidingControlInputState, bIsPetting) == 9, "Offset mismatch for FRidingControlInputState::bIsPetting");

// /Script/RidingCodeRuntime.RidingControlInputStateReliable
// Kind: ScriptStruct; super: none
struct FRidingControlInputStateReliable
{
public:
    std::uint8_t bIsJumping; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bIsPetting (shared storage)
    // 0x0000 BoolProperty bIsUsingAbility (shared storage)
    // 0x0000 BoolProperty bIsUsingSecondaryAbility (shared storage)
    // 0x0000 BoolProperty bIsUsingTertiaryAbility (shared storage)
};

static_assert(offsetof(FRidingControlInputStateReliable, bIsJumping) == 0, "Offset mismatch for FRidingControlInputStateReliable::bIsJumping");

// /Script/RidingCodeRuntime.RidingControlInputStateUnreliable
// Kind: ScriptStruct; super: none
struct FRidingControlInputStateUnreliable
{
public:
    std::uint8_t RightAlphaQuantized; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ForwardAlphaQuantized; // 0x0001 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FRidingControlInputStateUnreliable, RightAlphaQuantized) == 0, "Offset mismatch for FRidingControlInputStateUnreliable::RightAlphaQuantized");
static_assert(offsetof(FRidingControlInputStateUnreliable, ForwardAlphaQuantized) == 1, "Offset mismatch for FRidingControlInputStateUnreliable::ForwardAlphaQuantized");

// /Script/RidingCodeRuntime.RidingEventBase
// Kind: ScriptStruct; super: none
struct FRidingEventBase
{
public:
    void* RidableComponent; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* RiderComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::int32_t SlotIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRidingEventBase, RidableComponent) == 0, "Offset mismatch for FRidingEventBase::RidableComponent");
static_assert(offsetof(FRidingEventBase, RiderComponent) == 8, "Offset mismatch for FRidingEventBase::RiderComponent");
static_assert(offsetof(FRidingEventBase, SlotIndex) == 16, "Offset mismatch for FRidingEventBase::SlotIndex");

// /Script/RidingCodeRuntime.RidingPettingData
// Kind: ScriptStruct; super: none
struct FRidingPettingData
{
public:
    std::uint8_t bIsPettableCreature; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t RiderMalePettingMontageInfo[0x58]; // 0x0008 (Size: 0x58, Type: StructProperty)
    std::uint8_t RiderFemalePettingMontageInfo[0x58]; // 0x0060 (Size: 0x58, Type: StructProperty)
    std::uint8_t RidablePettingMontageInfo[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRidingPettingData, bIsPettableCreature) == 0, "Offset mismatch for FRidingPettingData::bIsPettableCreature");
static_assert(offsetof(FRidingPettingData, RiderMalePettingMontageInfo) == 8, "Offset mismatch for FRidingPettingData::RiderMalePettingMontageInfo");
static_assert(offsetof(FRidingPettingData, RiderFemalePettingMontageInfo) == 96, "Offset mismatch for FRidingPettingData::RiderFemalePettingMontageInfo");
static_assert(offsetof(FRidingPettingData, RidablePettingMontageInfo) == 184, "Offset mismatch for FRidingPettingData::RidablePettingMontageInfo");

// /Script/RidingCodeRuntime.RidingPlaylistBlacklistTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FRidingPlaylistBlacklistTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t PlaylistTags[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRidingPlaylistBlacklistTableRow, PlaylistTags) == 8, "Offset mismatch for FRidingPlaylistBlacklistTableRow::PlaylistTags");

// /Script/RidingCodeRuntime.ControllableRidableComponent
// Kind: Class; super: RidableComponent
class UControllableRidableComponent
{
public:
    std::uint8_t Pad_0000[0x560]; // 0x0000
    FMulticastInlineDelegate OnPrimaryAbilityStarted; // 0x0560 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPrimaryAbilityHeld; // 0x0570 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPrimaryAbilityStopped; // 0x0580 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSecondaryAbilityStarted; // 0x0590 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSecondaryAbilityHeld; // 0x05A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSecondaryAbilityStopped; // 0x05B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTertiaryAbilityStarted; // 0x05C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTertiaryAbilityHeld; // 0x05D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTertiaryAbilityStopped; // 0x05E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bUseGravityJump; // 0x05F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x05F1
    std::uint8_t IgnoreGravityJumpTagQuery[0x48]; // 0x05F8 (Size: 0x48, Type: StructProperty)
    std::uint8_t bUseBuiltInMovementMode; // 0x0640 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsControllable; // 0x0641 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasAbility; // 0x0642 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasSecondaryAbility; // 0x0643 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTertiaryAbility; // 0x0644 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0645
    std::uint8_t AbilityDisplayText[0x10]; // 0x0648 (Size: 0x10, Type: TextProperty)
    std::uint8_t SecondaryAbilityDisplayText[0x10]; // 0x0658 (Size: 0x10, Type: TextProperty)
    std::uint8_t TertiaryAbilityDisplayText[0x10]; // 0x0668 (Size: 0x10, Type: TextProperty)
    std::uint8_t bCanJump; // 0x0678 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlwaysMoveForward; // 0x0679 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x067A
    float ForwardMoveSpeedMultiplier; // 0x067C (Size: 0x4, Type: FloatProperty)
    float BackwardMoveSpeedMultiplier; // 0x0680 (Size: 0x4, Type: FloatProperty)
    float SidewaysMoveRotationOffset; // 0x0684 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MovementUrgency; // 0x0688 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bNeedsProxyWeapon; // 0x0689 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStopAllMontagesWhenControlled; // 0x068A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x5]; // 0x068B
    void* ProxyWeaponClass; // 0x0690 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bDisablePreviousWeaponStowOnProxyEquip; // 0x0698 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBeingControlled; // 0x0699 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x26]; // 0x069A
    std::uint8_t RidableControlParams[0x230]; // 0x06C0 (Size: 0x230, Type: StructProperty)
    std::uint8_t JumpUpwardGravityScale[0x28]; // 0x08F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t JumpDownwardGravityScale[0x28]; // 0x0918 (Size: 0x28, Type: StructProperty)
    void* ProxyWeaponInstance; // 0x0940 (Size: 0x8, Type: ObjectProperty)
    void* ProxyReplacedRiderWeaponData; // 0x0948 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ProxyReplacedRiderWeaponInventoryGuid[0x10]; // 0x0950 (Size: 0x10, Type: StructProperty)
    std::uint8_t ProxyReplacedRiderWeaponTrackerGuid[0x1]; // 0x0960 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UControllableRidableComponent, OnPrimaryAbilityStarted) == 1376, "Offset mismatch for UControllableRidableComponent::OnPrimaryAbilityStarted");
static_assert(offsetof(UControllableRidableComponent, OnPrimaryAbilityHeld) == 1392, "Offset mismatch for UControllableRidableComponent::OnPrimaryAbilityHeld");
static_assert(offsetof(UControllableRidableComponent, OnPrimaryAbilityStopped) == 1408, "Offset mismatch for UControllableRidableComponent::OnPrimaryAbilityStopped");
static_assert(offsetof(UControllableRidableComponent, OnSecondaryAbilityStarted) == 1424, "Offset mismatch for UControllableRidableComponent::OnSecondaryAbilityStarted");
static_assert(offsetof(UControllableRidableComponent, OnSecondaryAbilityHeld) == 1440, "Offset mismatch for UControllableRidableComponent::OnSecondaryAbilityHeld");
static_assert(offsetof(UControllableRidableComponent, OnSecondaryAbilityStopped) == 1456, "Offset mismatch for UControllableRidableComponent::OnSecondaryAbilityStopped");
static_assert(offsetof(UControllableRidableComponent, OnTertiaryAbilityStarted) == 1472, "Offset mismatch for UControllableRidableComponent::OnTertiaryAbilityStarted");
static_assert(offsetof(UControllableRidableComponent, OnTertiaryAbilityHeld) == 1488, "Offset mismatch for UControllableRidableComponent::OnTertiaryAbilityHeld");
static_assert(offsetof(UControllableRidableComponent, OnTertiaryAbilityStopped) == 1504, "Offset mismatch for UControllableRidableComponent::OnTertiaryAbilityStopped");
static_assert(offsetof(UControllableRidableComponent, bUseGravityJump) == 1520, "Offset mismatch for UControllableRidableComponent::bUseGravityJump");
static_assert(offsetof(UControllableRidableComponent, IgnoreGravityJumpTagQuery) == 1528, "Offset mismatch for UControllableRidableComponent::IgnoreGravityJumpTagQuery");
static_assert(offsetof(UControllableRidableComponent, bUseBuiltInMovementMode) == 1600, "Offset mismatch for UControllableRidableComponent::bUseBuiltInMovementMode");
static_assert(offsetof(UControllableRidableComponent, bIsControllable) == 1601, "Offset mismatch for UControllableRidableComponent::bIsControllable");
static_assert(offsetof(UControllableRidableComponent, bHasAbility) == 1602, "Offset mismatch for UControllableRidableComponent::bHasAbility");
static_assert(offsetof(UControllableRidableComponent, bHasSecondaryAbility) == 1603, "Offset mismatch for UControllableRidableComponent::bHasSecondaryAbility");
static_assert(offsetof(UControllableRidableComponent, bHasTertiaryAbility) == 1604, "Offset mismatch for UControllableRidableComponent::bHasTertiaryAbility");
static_assert(offsetof(UControllableRidableComponent, AbilityDisplayText) == 1608, "Offset mismatch for UControllableRidableComponent::AbilityDisplayText");
static_assert(offsetof(UControllableRidableComponent, SecondaryAbilityDisplayText) == 1624, "Offset mismatch for UControllableRidableComponent::SecondaryAbilityDisplayText");
static_assert(offsetof(UControllableRidableComponent, TertiaryAbilityDisplayText) == 1640, "Offset mismatch for UControllableRidableComponent::TertiaryAbilityDisplayText");
static_assert(offsetof(UControllableRidableComponent, bCanJump) == 1656, "Offset mismatch for UControllableRidableComponent::bCanJump");
static_assert(offsetof(UControllableRidableComponent, bAlwaysMoveForward) == 1657, "Offset mismatch for UControllableRidableComponent::bAlwaysMoveForward");
static_assert(offsetof(UControllableRidableComponent, ForwardMoveSpeedMultiplier) == 1660, "Offset mismatch for UControllableRidableComponent::ForwardMoveSpeedMultiplier");
static_assert(offsetof(UControllableRidableComponent, BackwardMoveSpeedMultiplier) == 1664, "Offset mismatch for UControllableRidableComponent::BackwardMoveSpeedMultiplier");
static_assert(offsetof(UControllableRidableComponent, SidewaysMoveRotationOffset) == 1668, "Offset mismatch for UControllableRidableComponent::SidewaysMoveRotationOffset");
static_assert(offsetof(UControllableRidableComponent, MovementUrgency) == 1672, "Offset mismatch for UControllableRidableComponent::MovementUrgency");
static_assert(offsetof(UControllableRidableComponent, bNeedsProxyWeapon) == 1673, "Offset mismatch for UControllableRidableComponent::bNeedsProxyWeapon");
static_assert(offsetof(UControllableRidableComponent, bStopAllMontagesWhenControlled) == 1674, "Offset mismatch for UControllableRidableComponent::bStopAllMontagesWhenControlled");
static_assert(offsetof(UControllableRidableComponent, ProxyWeaponClass) == 1680, "Offset mismatch for UControllableRidableComponent::ProxyWeaponClass");
static_assert(offsetof(UControllableRidableComponent, bDisablePreviousWeaponStowOnProxyEquip) == 1688, "Offset mismatch for UControllableRidableComponent::bDisablePreviousWeaponStowOnProxyEquip");
static_assert(offsetof(UControllableRidableComponent, bIsBeingControlled) == 1689, "Offset mismatch for UControllableRidableComponent::bIsBeingControlled");
static_assert(offsetof(UControllableRidableComponent, RidableControlParams) == 1728, "Offset mismatch for UControllableRidableComponent::RidableControlParams");
static_assert(offsetof(UControllableRidableComponent, JumpUpwardGravityScale) == 2288, "Offset mismatch for UControllableRidableComponent::JumpUpwardGravityScale");
static_assert(offsetof(UControllableRidableComponent, JumpDownwardGravityScale) == 2328, "Offset mismatch for UControllableRidableComponent::JumpDownwardGravityScale");
static_assert(offsetof(UControllableRidableComponent, ProxyWeaponInstance) == 2368, "Offset mismatch for UControllableRidableComponent::ProxyWeaponInstance");
static_assert(offsetof(UControllableRidableComponent, ProxyReplacedRiderWeaponData) == 2376, "Offset mismatch for UControllableRidableComponent::ProxyReplacedRiderWeaponData");
static_assert(offsetof(UControllableRidableComponent, ProxyReplacedRiderWeaponInventoryGuid) == 2384, "Offset mismatch for UControllableRidableComponent::ProxyReplacedRiderWeaponInventoryGuid");
static_assert(offsetof(UControllableRidableComponent, ProxyReplacedRiderWeaponTrackerGuid) == 2400, "Offset mismatch for UControllableRidableComponent::ProxyReplacedRiderWeaponTrackerGuid");

// /Script/RidingCodeRuntime.ControllingRiderComponent
// Kind: Class; super: RiderComponent
class UControllingRiderComponent
{
public:
    std::uint8_t Pad_0000[0x708]; // 0x0000
    void* ControllingRidingInputContext; // 0x0708 (Size: 0x8, Type: ObjectProperty)
    void* RidingAbilityInputContext; // 0x0710 (Size: 0x8, Type: ObjectProperty)
    void* RidingAbility; // 0x0718 (Size: 0x8, Type: ObjectProperty)
    void* GamepadRidingAbility; // 0x0720 (Size: 0x8, Type: ObjectProperty)
    void* SecondaryRidingAbilityInputContext; // 0x0728 (Size: 0x8, Type: ObjectProperty)
    void* SecondaryRidingAbility; // 0x0730 (Size: 0x8, Type: ObjectProperty)
    void* GamepadSecondaryRidingAbility; // 0x0738 (Size: 0x8, Type: ObjectProperty)
    void* TertiaryRidingAbilityInputContext; // 0x0740 (Size: 0x8, Type: ObjectProperty)
    void* TertiaryRidingAbility; // 0x0748 (Size: 0x8, Type: ObjectProperty)
    void* GamepadTertiaryRidingAbility; // 0x0750 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0758
    std::uint8_t bCanControlRidable; // 0x0760 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsControllingRidable; // 0x0761 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ControlInputStyle; // 0x0762 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0xD]; // 0x0763
    std::uint8_t ReplicatedControlInputState[0xC]; // 0x0770 (Size: 0xC, Type: StructProperty)
    std::uint8_t ReplicatedControlInputStateReliable[0x1]; // 0x077C (Size: 0x1, Type: StructProperty)
    std::uint8_t ReplicatedControlInputStateUnreliable[0x3]; // 0x077D (Size: 0x3, Type: StructProperty)
    void* ControllingRiderInputComponent; // 0x0780 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0788
    float AutoRunDoubleTapTimestamp; // 0x0798 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCanBePet; // 0x079C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UControllingRiderComponent, ControllingRidingInputContext) == 1800, "Offset mismatch for UControllingRiderComponent::ControllingRidingInputContext");
static_assert(offsetof(UControllingRiderComponent, RidingAbilityInputContext) == 1808, "Offset mismatch for UControllingRiderComponent::RidingAbilityInputContext");
static_assert(offsetof(UControllingRiderComponent, RidingAbility) == 1816, "Offset mismatch for UControllingRiderComponent::RidingAbility");
static_assert(offsetof(UControllingRiderComponent, GamepadRidingAbility) == 1824, "Offset mismatch for UControllingRiderComponent::GamepadRidingAbility");
static_assert(offsetof(UControllingRiderComponent, SecondaryRidingAbilityInputContext) == 1832, "Offset mismatch for UControllingRiderComponent::SecondaryRidingAbilityInputContext");
static_assert(offsetof(UControllingRiderComponent, SecondaryRidingAbility) == 1840, "Offset mismatch for UControllingRiderComponent::SecondaryRidingAbility");
static_assert(offsetof(UControllingRiderComponent, GamepadSecondaryRidingAbility) == 1848, "Offset mismatch for UControllingRiderComponent::GamepadSecondaryRidingAbility");
static_assert(offsetof(UControllingRiderComponent, TertiaryRidingAbilityInputContext) == 1856, "Offset mismatch for UControllingRiderComponent::TertiaryRidingAbilityInputContext");
static_assert(offsetof(UControllingRiderComponent, TertiaryRidingAbility) == 1864, "Offset mismatch for UControllingRiderComponent::TertiaryRidingAbility");
static_assert(offsetof(UControllingRiderComponent, GamepadTertiaryRidingAbility) == 1872, "Offset mismatch for UControllingRiderComponent::GamepadTertiaryRidingAbility");
static_assert(offsetof(UControllingRiderComponent, bCanControlRidable) == 1888, "Offset mismatch for UControllingRiderComponent::bCanControlRidable");
static_assert(offsetof(UControllingRiderComponent, bIsControllingRidable) == 1889, "Offset mismatch for UControllingRiderComponent::bIsControllingRidable");
static_assert(offsetof(UControllingRiderComponent, ControlInputStyle) == 1890, "Offset mismatch for UControllingRiderComponent::ControlInputStyle");
static_assert(offsetof(UControllingRiderComponent, ReplicatedControlInputState) == 1904, "Offset mismatch for UControllingRiderComponent::ReplicatedControlInputState");
static_assert(offsetof(UControllingRiderComponent, ReplicatedControlInputStateReliable) == 1916, "Offset mismatch for UControllingRiderComponent::ReplicatedControlInputStateReliable");
static_assert(offsetof(UControllingRiderComponent, ReplicatedControlInputStateUnreliable) == 1917, "Offset mismatch for UControllingRiderComponent::ReplicatedControlInputStateUnreliable");
static_assert(offsetof(UControllingRiderComponent, ControllingRiderInputComponent) == 1920, "Offset mismatch for UControllingRiderComponent::ControllingRiderInputComponent");
static_assert(offsetof(UControllingRiderComponent, AutoRunDoubleTapTimestamp) == 1944, "Offset mismatch for UControllingRiderComponent::AutoRunDoubleTapTimestamp");
static_assert(offsetof(UControllingRiderComponent, bCanBePet) == 1948, "Offset mismatch for UControllingRiderComponent::bCanBePet");

// /Script/RidingCodeRuntime.FortAthenaPettingWildlifeTelemetryData
// Kind: Class; super: FortAthenaAITelemetryData
class UFortAthenaPettingWildlifeTelemetryData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t PetCount; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortAthenaPettingWildlifeTelemetryData, PetCount) == 40, "Offset mismatch for UFortAthenaPettingWildlifeTelemetryData::PetCount");

// /Script/RidingCodeRuntime.FortCameraMode_Riding
// Kind: Class; super: FortCameraMode_ThirdPerson
class UFortCameraMode_Riding
{
public:
    std::uint8_t Pad_0000[0x2080]; // 0x0000
    std::uint8_t OriginOffset[0x1]; // 0x2080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCameraMode_Riding, OriginOffset) == 8320, "Offset mismatch for UFortCameraMode_Riding::OriginOffset");

// /Script/RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding
// Kind: Class; super: FortVehicleOccupantAnimInstance
class UFortVehicleLayerAnimInstance_Riding
{
public:
    std::uint8_t Pad_0000[0x730]; // 0x0000
    std::uint8_t IntoVehicleCachedData[0x14]; // 0x0730 (Size: 0x14, Type: StructProperty)
    std::uint8_t OutOfVehicleCachedData[0x14]; // 0x0744 (Size: 0x14, Type: StructProperty)
    float InTime; // 0x0758 (Size: 0x4, Type: FloatProperty)
    float OutTime; // 0x075C (Size: 0x4, Type: FloatProperty)
    float BodyYawOffset; // 0x0760 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0764
    std::uint8_t BodyCounterRotation[0x18]; // 0x0768 (Size: 0x18, Type: StructProperty)
    float BodyCounterRotationAlpha; // 0x0780 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsReloading; // 0x0784 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTargeting; // 0x0785 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFiring; // 0x0786 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsUsingConsumable; // 0x0787 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInAction; // 0x0788 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsThrowConsumable; // 0x0789 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTargetingOrThrowingConsumable; // 0x078A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTurningInPlace; // 0x078B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRidingSprinting; // 0x078C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRidingPetting; // 0x078D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x078E
    float TurnInPlaceRotationSpeed; // 0x0790 (Size: 0x4, Type: FloatProperty)
    float TurnInPlaceAngleDelta; // 0x0794 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsRidingMovingBackward; // 0x0798 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSlopeSliding; // 0x0799 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x079A
    float SlopeSlidingPitch; // 0x079C (Size: 0x4, Type: FloatProperty)
    float SlopeSlidingRoll; // 0x07A0 (Size: 0x4, Type: FloatProperty)
    float RiderReferentialRidableYaw; // 0x07A4 (Size: 0x4, Type: FloatProperty)
    float AimYawDegreesCoverage; // 0x07A8 (Size: 0x4, Type: FloatProperty)
    float SmoothedAimYaw; // 0x07AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bJustEntered; // 0x07B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRidableMoving; // 0x07B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRideMode; // 0x07B2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1]; // 0x07B3
    float RidableVelocity; // 0x07B4 (Size: 0x4, Type: FloatProperty)
    float BodyYaw; // 0x07B8 (Size: 0x4, Type: FloatProperty)
    float BoostPlayRate; // 0x07BC (Size: 0x4, Type: FloatProperty)
    float RidingMovePlayRate; // 0x07C0 (Size: 0x4, Type: FloatProperty)
    float FalseBlendTime; // 0x07C4 (Size: 0x4, Type: FloatProperty)
    float CombatToRideYaw; // 0x07C8 (Size: 0x4, Type: FloatProperty)
    float InPlaceYaw; // 0x07CC (Size: 0x4, Type: FloatProperty)
    float HeadAOAlpha; // 0x07D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x4]; // 0x07D4
    std::uint8_t MeleeTwistRot[0x18]; // 0x07D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsDualWield; // 0x07F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOneHandedDualWield; // 0x07F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsTwoHandedSword; // 0x07F2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldAdjustBodyTwistForMelee; // 0x07F3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x4]; // 0x07F4
    std::uint8_t PlayerOffset[0x18]; // 0x07F8 (Size: 0x18, Type: StructProperty)
    float NoiseAlpha; // 0x0810 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsLobsterBlockActive; // 0x0814 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x0815
    float SlopePitch; // 0x0818 (Size: 0x4, Type: FloatProperty)
    float RiderHeightAdjustmentSpringConstant; // 0x081C (Size: 0x4, Type: FloatProperty)
    float MinSlopePitchForRiderHeightAdjustment; // 0x0820 (Size: 0x4, Type: FloatProperty)
    float MaxSlopePitchForRiderHeightAdjustment; // 0x0824 (Size: 0x4, Type: FloatProperty)
    float RiderHeightAdjustmentForMinSlopePitch; // 0x0828 (Size: 0x4, Type: FloatProperty)
    float RiderHeightAdjustmentForMaxSlopePitch; // 0x082C (Size: 0x4, Type: FloatProperty)
    float PettingRotAlpha; // 0x0830 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0008[0x4]; // 0x0834
    std::uint8_t PettingRot[0x18]; // 0x0838 (Size: 0x18, Type: StructProperty)
    float PettingPitchFactor; // 0x0850 (Size: 0x4, Type: FloatProperty)
    float PettingRollFactor; // 0x0854 (Size: 0x4, Type: FloatProperty)
    std::uint8_t HandAttachLeft[0x18]; // 0x0858 (Size: 0x18, Type: StructProperty)
    std::uint8_t HandAttachRight[0x18]; // 0x0870 (Size: 0x18, Type: StructProperty)
    float HandAttachAlpha; // 0x0888 (Size: 0x4, Type: FloatProperty)
    std::uint8_t footphase; // 0x088C (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsFootPhase_FeetInAir; // 0x088D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFootPhase_FrontFeetPlanted; // 0x088E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFootPhase_BackFeetPlanted; // 0x088F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFootPhase_LeftBackFeetForward; // 0x0890 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFootPhase_RightBackFeetForward; // 0x0891 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFootPhase_LeftPlantedRightPass; // 0x0892 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFootPhase_RightPlantedLeftPass; // 0x0893 (Size: 0x1, Type: BoolProperty)
    float TurnInPlaceModulatedSpeed; // 0x0894 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsTurnInPlaceAngleDeltaPositive; // 0x0898 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x3]; // 0x0899
    float SlopeRoll; // 0x089C (Size: 0x4, Type: FloatProperty)
    float MovingVelocityLowerBound; // 0x08A0 (Size: 0x4, Type: FloatProperty)
    float JustEnteredDelayTimeSec; // 0x08A4 (Size: 0x4, Type: FloatProperty)
    float FalseBlendTime_Moving; // 0x08A8 (Size: 0x4, Type: FloatProperty)
    float FalseBlendTime_NotMoving; // 0x08AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t PlayerOffsetMale[0x18]; // 0x08B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlayerOffsetFemale[0x18]; // 0x08C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ScytheMontage[0x18]; // 0x08E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t BRSwordMontage[0x18]; // 0x08F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t MeleeDualWieldCoreAnimation; // 0x0910 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_000A[0x7]; // 0x0911
    std::uint8_t SlopePitchTraceStart[0x18]; // 0x0918 (Size: 0x18, Type: StructProperty)
    std::uint8_t SlopePitchTraceEnd[0x18]; // 0x0930 (Size: 0x18, Type: StructProperty)
    std::uint8_t HandAttachLocationLeftMale[0x18]; // 0x0948 (Size: 0x18, Type: StructProperty)
    std::uint8_t HandAttachLocationRightMale[0x18]; // 0x0960 (Size: 0x18, Type: StructProperty)
    std::uint8_t HandAttachLocationLeftFemale[0x18]; // 0x0978 (Size: 0x18, Type: StructProperty)
    std::uint8_t HandAttachLocationRightFemale[0x18]; // 0x0990 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlayerHandAttachLeft[0x4]; // 0x09A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t PlayerHandAttachRight[0x4]; // 0x09AC (Size: 0x4, Type: NameProperty)
    std::uint8_t DisableHandAttachCurveName[0x4]; // 0x09B0 (Size: 0x4, Type: NameProperty)
    FName AllowRidingNoiseAdditiveCurveName; // 0x09B4 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, IntoVehicleCachedData) == 1840, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::IntoVehicleCachedData");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, OutOfVehicleCachedData) == 1860, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::OutOfVehicleCachedData");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, InTime) == 1880, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::InTime");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, OutTime) == 1884, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::OutTime");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, BodyYawOffset) == 1888, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::BodyYawOffset");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, BodyCounterRotation) == 1896, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::BodyCounterRotation");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, BodyCounterRotationAlpha) == 1920, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::BodyCounterRotationAlpha");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsReloading) == 1924, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsReloading");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsTargeting) == 1925, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsTargeting");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsFiring) == 1926, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsFiring");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsUsingConsumable) == 1927, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsUsingConsumable");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsInAction) == 1928, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsInAction");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsThrowConsumable) == 1929, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsThrowConsumable");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsTargetingOrThrowingConsumable) == 1930, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsTargetingOrThrowingConsumable");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsTurningInPlace) == 1931, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsTurningInPlace");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsRidingSprinting) == 1932, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsRidingSprinting");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsRidingPetting) == 1933, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsRidingPetting");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, TurnInPlaceRotationSpeed) == 1936, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::TurnInPlaceRotationSpeed");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, TurnInPlaceAngleDelta) == 1940, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::TurnInPlaceAngleDelta");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsRidingMovingBackward) == 1944, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsRidingMovingBackward");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsSlopeSliding) == 1945, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsSlopeSliding");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, SlopeSlidingPitch) == 1948, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::SlopeSlidingPitch");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, SlopeSlidingRoll) == 1952, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::SlopeSlidingRoll");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, RiderReferentialRidableYaw) == 1956, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::RiderReferentialRidableYaw");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, AimYawDegreesCoverage) == 1960, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::AimYawDegreesCoverage");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, SmoothedAimYaw) == 1964, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::SmoothedAimYaw");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bJustEntered) == 1968, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bJustEntered");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsRidableMoving) == 1969, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsRidableMoving");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsRideMode) == 1970, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsRideMode");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, RidableVelocity) == 1972, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::RidableVelocity");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, BodyYaw) == 1976, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::BodyYaw");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, BoostPlayRate) == 1980, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::BoostPlayRate");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, RidingMovePlayRate) == 1984, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::RidingMovePlayRate");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, FalseBlendTime) == 1988, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::FalseBlendTime");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, CombatToRideYaw) == 1992, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::CombatToRideYaw");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, InPlaceYaw) == 1996, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::InPlaceYaw");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, HeadAOAlpha) == 2000, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::HeadAOAlpha");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, MeleeTwistRot) == 2008, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::MeleeTwistRot");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsDualWield) == 2032, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsDualWield");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsOneHandedDualWield) == 2033, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsOneHandedDualWield");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsTwoHandedSword) == 2034, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsTwoHandedSword");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bShouldAdjustBodyTwistForMelee) == 2035, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bShouldAdjustBodyTwistForMelee");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, PlayerOffset) == 2040, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::PlayerOffset");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, NoiseAlpha) == 2064, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::NoiseAlpha");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsLobsterBlockActive) == 2068, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsLobsterBlockActive");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, SlopePitch) == 2072, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::SlopePitch");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, RiderHeightAdjustmentSpringConstant) == 2076, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::RiderHeightAdjustmentSpringConstant");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, MinSlopePitchForRiderHeightAdjustment) == 2080, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::MinSlopePitchForRiderHeightAdjustment");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, MaxSlopePitchForRiderHeightAdjustment) == 2084, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::MaxSlopePitchForRiderHeightAdjustment");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, RiderHeightAdjustmentForMinSlopePitch) == 2088, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::RiderHeightAdjustmentForMinSlopePitch");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, RiderHeightAdjustmentForMaxSlopePitch) == 2092, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::RiderHeightAdjustmentForMaxSlopePitch");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, PettingRotAlpha) == 2096, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::PettingRotAlpha");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, PettingRot) == 2104, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::PettingRot");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, PettingPitchFactor) == 2128, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::PettingPitchFactor");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, PettingRollFactor) == 2132, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::PettingRollFactor");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, HandAttachLeft) == 2136, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::HandAttachLeft");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, HandAttachRight) == 2160, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::HandAttachRight");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, HandAttachAlpha) == 2184, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::HandAttachAlpha");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, footphase) == 2188, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::footphase");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsFootPhase_FeetInAir) == 2189, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsFootPhase_FeetInAir");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsFootPhase_FrontFeetPlanted) == 2190, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsFootPhase_FrontFeetPlanted");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsFootPhase_BackFeetPlanted) == 2191, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsFootPhase_BackFeetPlanted");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsFootPhase_LeftBackFeetForward) == 2192, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsFootPhase_LeftBackFeetForward");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsFootPhase_RightBackFeetForward) == 2193, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsFootPhase_RightBackFeetForward");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsFootPhase_LeftPlantedRightPass) == 2194, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsFootPhase_LeftPlantedRightPass");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsFootPhase_RightPlantedLeftPass) == 2195, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsFootPhase_RightPlantedLeftPass");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, TurnInPlaceModulatedSpeed) == 2196, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::TurnInPlaceModulatedSpeed");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, bIsTurnInPlaceAngleDeltaPositive) == 2200, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::bIsTurnInPlaceAngleDeltaPositive");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, SlopeRoll) == 2204, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::SlopeRoll");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, MovingVelocityLowerBound) == 2208, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::MovingVelocityLowerBound");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, JustEnteredDelayTimeSec) == 2212, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::JustEnteredDelayTimeSec");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, FalseBlendTime_Moving) == 2216, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::FalseBlendTime_Moving");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, FalseBlendTime_NotMoving) == 2220, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::FalseBlendTime_NotMoving");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, PlayerOffsetMale) == 2224, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::PlayerOffsetMale");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, PlayerOffsetFemale) == 2248, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::PlayerOffsetFemale");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, ScytheMontage) == 2272, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::ScytheMontage");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, BRSwordMontage) == 2296, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::BRSwordMontage");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, MeleeDualWieldCoreAnimation) == 2320, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::MeleeDualWieldCoreAnimation");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, SlopePitchTraceStart) == 2328, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::SlopePitchTraceStart");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, SlopePitchTraceEnd) == 2352, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::SlopePitchTraceEnd");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, HandAttachLocationLeftMale) == 2376, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::HandAttachLocationLeftMale");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, HandAttachLocationRightMale) == 2400, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::HandAttachLocationRightMale");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, HandAttachLocationLeftFemale) == 2424, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::HandAttachLocationLeftFemale");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, HandAttachLocationRightFemale) == 2448, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::HandAttachLocationRightFemale");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, PlayerHandAttachLeft) == 2472, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::PlayerHandAttachLeft");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, PlayerHandAttachRight) == 2476, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::PlayerHandAttachRight");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, DisableHandAttachCurveName) == 2480, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::DisableHandAttachCurveName");
static_assert(offsetof(UFortVehicleLayerAnimInstance_Riding, AllowRidingNoiseAdditiveCurveName) == 2484, "Offset mismatch for UFortVehicleLayerAnimInstance_Riding::AllowRidingNoiseAdditiveCurveName");

// /Script/RidingCodeRuntime.RidableComponent
// Kind: Class; super: GameFrameworkComponent
class URidableComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    FMulticastInlineDelegate OnRiderStartedRiding_SingularDeprecated; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRiderStoppedRiding_SingularDeprecated; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRiderStartedRidingWithSlot; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRiderStoppedRidingWithSlot; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnRiderSlotStateChanged; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bRiderCanBeHidden; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActorCanBeHidden; // 0x0121 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0122
    void* DoNotUse_RiderAnimLayerOverlayClass; // 0x0128 (Size: 0x8, Type: ClassProperty)
    FName DoNotUse_AttachSocket; // 0x0130 (Size: 0x8, Type: NameProperty)
    std::uint8_t DoNotUse_AttachLocationOffset[0x18]; // 0x0138 (Size: 0x18, Type: StructProperty)
    std::uint8_t DoNotUse_AttachRotationOffset[0x18]; // 0x0150 (Size: 0x18, Type: StructProperty)
    std::uint8_t DoNotUse_AttachScaleOffset[0x18]; // 0x0168 (Size: 0x18, Type: StructProperty)
    TArray<void*> AttachSlotsConfig; // 0x0180 (Size: 0x10, Type: ArrayProperty)
    FName ClientAttachGuideSocket; // 0x0190 (Size: 0x8, Type: NameProperty)
    std::uint8_t ClientAttachGuideLocationOffset[0x18]; // 0x0198 (Size: 0x18, Type: StructProperty)
    FName RidablePropAttachSocket; // 0x01B0 (Size: 0x8, Type: NameProperty)
    std::uint8_t RidablePropAttachLocationOffset[0x18]; // 0x01B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t RidablePropAttachRotationOffset[0x18]; // 0x01D0 (Size: 0x18, Type: StructProperty)
    float RidablePropAttachScale; // 0x01E8 (Size: 0x4, Type: FloatProperty)
    float RidablePropAttachRiderVerticalBuffer; // 0x01EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t RiderPropAttachBoundsOverride[0x38]; // 0x01F0 (Size: 0x38, Type: StructProperty)
    std::uint8_t bOverrideNoiseGeneration; // 0x0228 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0229
    std::uint8_t RiderMovementNoiseOverride[0xC]; // 0x022C (Size: 0xC, Type: StructProperty)
    std::uint8_t bUsesCameraOverride; // 0x0238 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0239
    void* DoNotUse_CameraModeClassOverride; // 0x0240 (Size: 0x8, Type: ClassProperty)
    void* DoNotUse_SprintCameraModeClassOverride; // 0x0248 (Size: 0x8, Type: ClassProperty)
    std::uint8_t UseTargetingAdditionalViewTargetSpaceViewOffsetOverride[0x28]; // 0x0250 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetingAdditionalViewTargetSpaceViewOffsetOverride[0x38]; // 0x0278 (Size: 0x38, Type: StructProperty)
    std::uint8_t RidingStartedGameplayCueTag[0x4]; // 0x02B0 (Size: 0x4, Type: StructProperty)
    std::uint8_t WhileBeingRiddenGameplayCueTag[0x4]; // 0x02B4 (Size: 0x4, Type: StructProperty)
    std::uint8_t RidingStoppedGameplayCueTag[0x8]; // 0x02B8 (Size: 0x8, Type: StructProperty)
    std::uint8_t WeaponTargetingSourceOffsetModifier[0x18]; // 0x02C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t RidableTag[0x4]; // 0x02D8 (Size: 0x4, Type: StructProperty)
    std::uint8_t EnergyDepletedTag[0x4]; // 0x02DC (Size: 0x4, Type: StructProperty)
    std::uint8_t PlaylistTagBlacklistRowHandle[0x10]; // 0x02E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t bNeedRoomToBeRidden; // 0x02F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideInteractionForRiding; // 0x02F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x6]; // 0x02F2
    std::uint8_t RidingInteractionText[0x10]; // 0x02F8 (Size: 0x10, Type: TextProperty)
    std::uint8_t RidingInteractionType; // 0x0308 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0309
    std::uint8_t RiderSlots[0x60]; // 0x0310 (Size: 0x60, Type: StructProperty)
    TArray<void*> PendingStartedRiders; // 0x0370 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendingStoppedRiders; // 0x0380 (Size: 0x10, Type: ArrayProperty)
    void* RidableProp; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    float OriginalCapsuleRadius; // 0x0398 (Size: 0x4, Type: FloatProperty)
    float OriginalCapsuleHalfHeight; // 0x039C (Size: 0x4, Type: FloatProperty)
    float RidingCapsuleRadius; // 0x03A0 (Size: 0x4, Type: FloatProperty)
    float RidingCapsuleHalfHeight; // 0x03A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOriginalClientPositionSmoothingThrottlingSetting; // 0x03A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHandledFirstRidersAdded; // 0x03A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DoNotUse_LockRotationToRidableActor; // 0x03AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRidableAnimJustPlayed; // 0x03AB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x4]; // 0x03AC
    TArray<void*> RiderAnimPlayedSlotIndices; // 0x03B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MaxHalfAimingAngle[0x28]; // 0x03C0 (Size: 0x28, Type: StructProperty)
    TArray<void*> PrimaryFireMontageAnimCoreTypeOverrides; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PrimaryFireMontageTagOverrides; // 0x03F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PettingData[0x110]; // 0x0408 (Size: 0x110, Type: StructProperty)
    std::uint8_t bShouldApplyCapsuleSizeChange; // 0x0518 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x27]; // 0x0519
    std::uint8_t bIsSprinting; // 0x0540 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x7]; // 0x0541
    void* DoNotUse_PrimaryRider; // 0x0548 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URidableComponent, OnRiderStartedRiding_SingularDeprecated) == 208, "Offset mismatch for URidableComponent::OnRiderStartedRiding_SingularDeprecated");
static_assert(offsetof(URidableComponent, OnRiderStoppedRiding_SingularDeprecated) == 224, "Offset mismatch for URidableComponent::OnRiderStoppedRiding_SingularDeprecated");
static_assert(offsetof(URidableComponent, OnRiderStartedRidingWithSlot) == 240, "Offset mismatch for URidableComponent::OnRiderStartedRidingWithSlot");
static_assert(offsetof(URidableComponent, OnRiderStoppedRidingWithSlot) == 256, "Offset mismatch for URidableComponent::OnRiderStoppedRidingWithSlot");
static_assert(offsetof(URidableComponent, OnRiderSlotStateChanged) == 272, "Offset mismatch for URidableComponent::OnRiderSlotStateChanged");
static_assert(offsetof(URidableComponent, bRiderCanBeHidden) == 288, "Offset mismatch for URidableComponent::bRiderCanBeHidden");
static_assert(offsetof(URidableComponent, bActorCanBeHidden) == 289, "Offset mismatch for URidableComponent::bActorCanBeHidden");
static_assert(offsetof(URidableComponent, DoNotUse_RiderAnimLayerOverlayClass) == 296, "Offset mismatch for URidableComponent::DoNotUse_RiderAnimLayerOverlayClass");
static_assert(offsetof(URidableComponent, DoNotUse_AttachSocket) == 304, "Offset mismatch for URidableComponent::DoNotUse_AttachSocket");
static_assert(offsetof(URidableComponent, DoNotUse_AttachLocationOffset) == 312, "Offset mismatch for URidableComponent::DoNotUse_AttachLocationOffset");
static_assert(offsetof(URidableComponent, DoNotUse_AttachRotationOffset) == 336, "Offset mismatch for URidableComponent::DoNotUse_AttachRotationOffset");
static_assert(offsetof(URidableComponent, DoNotUse_AttachScaleOffset) == 360, "Offset mismatch for URidableComponent::DoNotUse_AttachScaleOffset");
static_assert(offsetof(URidableComponent, AttachSlotsConfig) == 384, "Offset mismatch for URidableComponent::AttachSlotsConfig");
static_assert(offsetof(URidableComponent, ClientAttachGuideSocket) == 400, "Offset mismatch for URidableComponent::ClientAttachGuideSocket");
static_assert(offsetof(URidableComponent, ClientAttachGuideLocationOffset) == 408, "Offset mismatch for URidableComponent::ClientAttachGuideLocationOffset");
static_assert(offsetof(URidableComponent, RidablePropAttachSocket) == 432, "Offset mismatch for URidableComponent::RidablePropAttachSocket");
static_assert(offsetof(URidableComponent, RidablePropAttachLocationOffset) == 440, "Offset mismatch for URidableComponent::RidablePropAttachLocationOffset");
static_assert(offsetof(URidableComponent, RidablePropAttachRotationOffset) == 464, "Offset mismatch for URidableComponent::RidablePropAttachRotationOffset");
static_assert(offsetof(URidableComponent, RidablePropAttachScale) == 488, "Offset mismatch for URidableComponent::RidablePropAttachScale");
static_assert(offsetof(URidableComponent, RidablePropAttachRiderVerticalBuffer) == 492, "Offset mismatch for URidableComponent::RidablePropAttachRiderVerticalBuffer");
static_assert(offsetof(URidableComponent, RiderPropAttachBoundsOverride) == 496, "Offset mismatch for URidableComponent::RiderPropAttachBoundsOverride");
static_assert(offsetof(URidableComponent, bOverrideNoiseGeneration) == 552, "Offset mismatch for URidableComponent::bOverrideNoiseGeneration");
static_assert(offsetof(URidableComponent, RiderMovementNoiseOverride) == 556, "Offset mismatch for URidableComponent::RiderMovementNoiseOverride");
static_assert(offsetof(URidableComponent, bUsesCameraOverride) == 568, "Offset mismatch for URidableComponent::bUsesCameraOverride");
static_assert(offsetof(URidableComponent, DoNotUse_CameraModeClassOverride) == 576, "Offset mismatch for URidableComponent::DoNotUse_CameraModeClassOverride");
static_assert(offsetof(URidableComponent, DoNotUse_SprintCameraModeClassOverride) == 584, "Offset mismatch for URidableComponent::DoNotUse_SprintCameraModeClassOverride");
static_assert(offsetof(URidableComponent, UseTargetingAdditionalViewTargetSpaceViewOffsetOverride) == 592, "Offset mismatch for URidableComponent::UseTargetingAdditionalViewTargetSpaceViewOffsetOverride");
static_assert(offsetof(URidableComponent, TargetingAdditionalViewTargetSpaceViewOffsetOverride) == 632, "Offset mismatch for URidableComponent::TargetingAdditionalViewTargetSpaceViewOffsetOverride");
static_assert(offsetof(URidableComponent, RidingStartedGameplayCueTag) == 688, "Offset mismatch for URidableComponent::RidingStartedGameplayCueTag");
static_assert(offsetof(URidableComponent, WhileBeingRiddenGameplayCueTag) == 692, "Offset mismatch for URidableComponent::WhileBeingRiddenGameplayCueTag");
static_assert(offsetof(URidableComponent, RidingStoppedGameplayCueTag) == 696, "Offset mismatch for URidableComponent::RidingStoppedGameplayCueTag");
static_assert(offsetof(URidableComponent, WeaponTargetingSourceOffsetModifier) == 704, "Offset mismatch for URidableComponent::WeaponTargetingSourceOffsetModifier");
static_assert(offsetof(URidableComponent, RidableTag) == 728, "Offset mismatch for URidableComponent::RidableTag");
static_assert(offsetof(URidableComponent, EnergyDepletedTag) == 732, "Offset mismatch for URidableComponent::EnergyDepletedTag");
static_assert(offsetof(URidableComponent, PlaylistTagBlacklistRowHandle) == 736, "Offset mismatch for URidableComponent::PlaylistTagBlacklistRowHandle");
static_assert(offsetof(URidableComponent, bNeedRoomToBeRidden) == 752, "Offset mismatch for URidableComponent::bNeedRoomToBeRidden");
static_assert(offsetof(URidableComponent, bOverrideInteractionForRiding) == 753, "Offset mismatch for URidableComponent::bOverrideInteractionForRiding");
static_assert(offsetof(URidableComponent, RidingInteractionText) == 760, "Offset mismatch for URidableComponent::RidingInteractionText");
static_assert(offsetof(URidableComponent, RidingInteractionType) == 776, "Offset mismatch for URidableComponent::RidingInteractionType");
static_assert(offsetof(URidableComponent, RiderSlots) == 784, "Offset mismatch for URidableComponent::RiderSlots");
static_assert(offsetof(URidableComponent, PendingStartedRiders) == 880, "Offset mismatch for URidableComponent::PendingStartedRiders");
static_assert(offsetof(URidableComponent, PendingStoppedRiders) == 896, "Offset mismatch for URidableComponent::PendingStoppedRiders");
static_assert(offsetof(URidableComponent, RidableProp) == 912, "Offset mismatch for URidableComponent::RidableProp");
static_assert(offsetof(URidableComponent, OriginalCapsuleRadius) == 920, "Offset mismatch for URidableComponent::OriginalCapsuleRadius");
static_assert(offsetof(URidableComponent, OriginalCapsuleHalfHeight) == 924, "Offset mismatch for URidableComponent::OriginalCapsuleHalfHeight");
static_assert(offsetof(URidableComponent, RidingCapsuleRadius) == 928, "Offset mismatch for URidableComponent::RidingCapsuleRadius");
static_assert(offsetof(URidableComponent, RidingCapsuleHalfHeight) == 932, "Offset mismatch for URidableComponent::RidingCapsuleHalfHeight");
static_assert(offsetof(URidableComponent, bOriginalClientPositionSmoothingThrottlingSetting) == 936, "Offset mismatch for URidableComponent::bOriginalClientPositionSmoothingThrottlingSetting");
static_assert(offsetof(URidableComponent, bHandledFirstRidersAdded) == 937, "Offset mismatch for URidableComponent::bHandledFirstRidersAdded");
static_assert(offsetof(URidableComponent, DoNotUse_LockRotationToRidableActor) == 938, "Offset mismatch for URidableComponent::DoNotUse_LockRotationToRidableActor");
static_assert(offsetof(URidableComponent, bRidableAnimJustPlayed) == 939, "Offset mismatch for URidableComponent::bRidableAnimJustPlayed");
static_assert(offsetof(URidableComponent, RiderAnimPlayedSlotIndices) == 944, "Offset mismatch for URidableComponent::RiderAnimPlayedSlotIndices");
static_assert(offsetof(URidableComponent, MaxHalfAimingAngle) == 960, "Offset mismatch for URidableComponent::MaxHalfAimingAngle");
static_assert(offsetof(URidableComponent, PrimaryFireMontageAnimCoreTypeOverrides) == 1000, "Offset mismatch for URidableComponent::PrimaryFireMontageAnimCoreTypeOverrides");
static_assert(offsetof(URidableComponent, PrimaryFireMontageTagOverrides) == 1016, "Offset mismatch for URidableComponent::PrimaryFireMontageTagOverrides");
static_assert(offsetof(URidableComponent, PettingData) == 1032, "Offset mismatch for URidableComponent::PettingData");
static_assert(offsetof(URidableComponent, bShouldApplyCapsuleSizeChange) == 1304, "Offset mismatch for URidableComponent::bShouldApplyCapsuleSizeChange");
static_assert(offsetof(URidableComponent, bIsSprinting) == 1344, "Offset mismatch for URidableComponent::bIsSprinting");
static_assert(offsetof(URidableComponent, DoNotUse_PrimaryRider) == 1352, "Offset mismatch for URidableComponent::DoNotUse_PrimaryRider");

// /Script/RidingCodeRuntime.RiderComponent
// Kind: Class; super: FortPawnOverrideComponent
class URiderComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    FMulticastInlineDelegate OnStartedRiding_SingularDeprecated; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStoppedRiding_SingularDeprecated; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStartedRidingWithSlot; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStoppedRidingWithSlot; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* RidingCameraModeClass; // 0x0110 (Size: 0x8, Type: ClassProperty)
    void* RidingSprintCameraModeClass; // 0x0118 (Size: 0x8, Type: ClassProperty)
    float RidingCameraModeBlendTime; // 0x0120 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0124
    std::uint8_t TargetingAdditionalViewTargetSpaceViewOffset[0x38]; // 0x0128 (Size: 0x38, Type: StructProperty)
    std::uint8_t AttachLocationOffset[0x18]; // 0x0160 (Size: 0x18, Type: StructProperty)
    std::uint8_t AttachRotationOffset[0x18]; // 0x0178 (Size: 0x18, Type: StructProperty)
    std::uint8_t AttachScaleOffset[0x18]; // 0x0190 (Size: 0x18, Type: StructProperty)
    void* RiderPropClass; // 0x01A8 (Size: 0x8, Type: ClassProperty)
    void* RidablePropClass; // 0x01B0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t RiderPropAttachLocationOffset[0x18]; // 0x01B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t RiderPropAttachRotationOffset[0x18]; // 0x01D0 (Size: 0x18, Type: StructProperty)
    float RiderPropAttachScale; // 0x01E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t RiderPropAttachSocket[0x4]; // 0x01EC (Size: 0x4, Type: NameProperty)
    std::uint8_t bUseClientAttachGuideSocket; // 0x01F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x01F1
    std::uint8_t RiderPropAttachSoftBounds[0x18]; // 0x01F8 (Size: 0x18, Type: StructProperty)
    float RiderPropAttachSoftBoundsScalar; // 0x0210 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0214
    std::uint8_t RiderPropAttachHardBounds[0x18]; // 0x0218 (Size: 0x18, Type: StructProperty)
    float RiderPropAttachSoftBoundsTargetingScalar; // 0x0230 (Size: 0x4, Type: FloatProperty)
    float RiderPropAttachHardBoundsTargetingScalar; // 0x0234 (Size: 0x4, Type: FloatProperty)
    float RiderPropAttachVerticalBufferTargetingScalar; // 0x0238 (Size: 0x4, Type: FloatProperty)
    float RidingExitHoldTime; // 0x023C (Size: 0x4, Type: FloatProperty)
    std::uint8_t TimeBeforeReenteringRiding[0x28]; // 0x0240 (Size: 0x28, Type: StructProperty)
    std::uint8_t RidingExitStartedEventTag[0x4]; // 0x0268 (Size: 0x4, Type: StructProperty)
    std::uint8_t RidingExitStoppedEventTag[0x4]; // 0x026C (Size: 0x4, Type: StructProperty)
    void* RidingInputContext; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* RidingExit; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* GamepadRidingExit; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* ConnectorFXAsset; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ConnectorPropSourceMeshParameterName[0x4]; // 0x0290 (Size: 0x4, Type: NameProperty)
    std::uint8_t ConnectorPropTargetMeshParameterName[0x4]; // 0x0294 (Size: 0x4, Type: NameProperty)
    std::uint8_t RidingStartedGameplayCueTag[0x4]; // 0x0298 (Size: 0x4, Type: StructProperty)
    std::uint8_t WhileRidingGameplayCueTag[0x4]; // 0x029C (Size: 0x4, Type: StructProperty)
    std::uint8_t RidingStoppedGameplayCueTag[0x4]; // 0x02A0 (Size: 0x4, Type: StructProperty)
    float SimulatedSmoothedRotationSpeed; // 0x02A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ExcludedEmoteTags[0x28]; // 0x02A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t ActiveRidableAndSlot[0x10]; // 0x02D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t LastRidableAndSlot[0x10]; // 0x02E0 (Size: 0x10, Type: StructProperty)
    void* RiderProp; // 0x02F0 (Size: 0x8, Type: ObjectProperty)
    void* ConnectorProp; // 0x02F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PropAttachSeparation[0x18]; // 0x0300 (Size: 0x18, Type: StructProperty)
    std::uint8_t AdditionalAttachOffset[0x18]; // 0x0318 (Size: 0x18, Type: StructProperty)
    std::uint8_t SoftBoundsAttachmentOffset[0x18]; // 0x0330 (Size: 0x18, Type: StructProperty)
    std::uint8_t HardBoundsAttachmentOffset[0x18]; // 0x0348 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlaylistTagDenylistRowHandle[0x10]; // 0x0360 (Size: 0x10, Type: StructProperty)
    void* RiderInputComponent; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x8]; // 0x0378
    std::uint8_t PendingFailedEmoteErrorTags[0x20]; // 0x0380 (Size: 0x20, Type: StructProperty)
    std::uint8_t ExitLaunchVelocity[0xA8]; // 0x03A0 (Size: 0xA8, Type: StructProperty)
    std::uint8_t JumpExitLaunchVelocity[0xB0]; // 0x0448 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ActiveAnaltyicsData[0x80]; // 0x04F8 (Size: 0x80, Type: StructProperty)
    std::uint8_t RidableLocationLastFrame[0x20]; // 0x0578 (Size: 0x20, Type: StructProperty)
    std::uint8_t RestoreCollisionHandle[0x8]; // 0x0598 (Size: 0x8, Type: StructProperty)
    std::uint8_t RidableControlRuntimeData[0x40]; // 0x05A0 (Size: 0x40, Type: StructProperty)
    std::uint8_t bIsSprintingReplay; // 0x05E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x05E1
    TWeakObjectPtr<void> ClampedController; // 0x05E4 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bIsPetting; // 0x05EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x05ED
    std::uint8_t RidingCapsuleHalfHeight[0x28]; // 0x05F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RidingCapsuleRadius[0x38]; // 0x0618 (Size: 0x38, Type: StructProperty)
    std::uint8_t CollisionProfileName[0x8]; // 0x0650 (Size: 0x8, Type: StructProperty)
    std::uint8_t TraceRadius[0x28]; // 0x0658 (Size: 0x28, Type: StructProperty)
    std::uint8_t TraceLength[0x28]; // 0x0680 (Size: 0x28, Type: StructProperty)
    std::uint8_t bPreventExitRidingFromInput; // 0x06A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x3]; // 0x06A9
    std::int32_t RidingInputPriority; // 0x06AC (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0008[0x50]; // 0x06B0
    void* DoNotUse_ActiveRidable; // 0x0700 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URiderComponent, OnStartedRiding_SingularDeprecated) == 208, "Offset mismatch for URiderComponent::OnStartedRiding_SingularDeprecated");
static_assert(offsetof(URiderComponent, OnStoppedRiding_SingularDeprecated) == 224, "Offset mismatch for URiderComponent::OnStoppedRiding_SingularDeprecated");
static_assert(offsetof(URiderComponent, OnStartedRidingWithSlot) == 240, "Offset mismatch for URiderComponent::OnStartedRidingWithSlot");
static_assert(offsetof(URiderComponent, OnStoppedRidingWithSlot) == 256, "Offset mismatch for URiderComponent::OnStoppedRidingWithSlot");
static_assert(offsetof(URiderComponent, RidingCameraModeClass) == 272, "Offset mismatch for URiderComponent::RidingCameraModeClass");
static_assert(offsetof(URiderComponent, RidingSprintCameraModeClass) == 280, "Offset mismatch for URiderComponent::RidingSprintCameraModeClass");
static_assert(offsetof(URiderComponent, RidingCameraModeBlendTime) == 288, "Offset mismatch for URiderComponent::RidingCameraModeBlendTime");
static_assert(offsetof(URiderComponent, TargetingAdditionalViewTargetSpaceViewOffset) == 296, "Offset mismatch for URiderComponent::TargetingAdditionalViewTargetSpaceViewOffset");
static_assert(offsetof(URiderComponent, AttachLocationOffset) == 352, "Offset mismatch for URiderComponent::AttachLocationOffset");
static_assert(offsetof(URiderComponent, AttachRotationOffset) == 376, "Offset mismatch for URiderComponent::AttachRotationOffset");
static_assert(offsetof(URiderComponent, AttachScaleOffset) == 400, "Offset mismatch for URiderComponent::AttachScaleOffset");
static_assert(offsetof(URiderComponent, RiderPropClass) == 424, "Offset mismatch for URiderComponent::RiderPropClass");
static_assert(offsetof(URiderComponent, RidablePropClass) == 432, "Offset mismatch for URiderComponent::RidablePropClass");
static_assert(offsetof(URiderComponent, RiderPropAttachLocationOffset) == 440, "Offset mismatch for URiderComponent::RiderPropAttachLocationOffset");
static_assert(offsetof(URiderComponent, RiderPropAttachRotationOffset) == 464, "Offset mismatch for URiderComponent::RiderPropAttachRotationOffset");
static_assert(offsetof(URiderComponent, RiderPropAttachScale) == 488, "Offset mismatch for URiderComponent::RiderPropAttachScale");
static_assert(offsetof(URiderComponent, RiderPropAttachSocket) == 492, "Offset mismatch for URiderComponent::RiderPropAttachSocket");
static_assert(offsetof(URiderComponent, bUseClientAttachGuideSocket) == 496, "Offset mismatch for URiderComponent::bUseClientAttachGuideSocket");
static_assert(offsetof(URiderComponent, RiderPropAttachSoftBounds) == 504, "Offset mismatch for URiderComponent::RiderPropAttachSoftBounds");
static_assert(offsetof(URiderComponent, RiderPropAttachSoftBoundsScalar) == 528, "Offset mismatch for URiderComponent::RiderPropAttachSoftBoundsScalar");
static_assert(offsetof(URiderComponent, RiderPropAttachHardBounds) == 536, "Offset mismatch for URiderComponent::RiderPropAttachHardBounds");
static_assert(offsetof(URiderComponent, RiderPropAttachSoftBoundsTargetingScalar) == 560, "Offset mismatch for URiderComponent::RiderPropAttachSoftBoundsTargetingScalar");
static_assert(offsetof(URiderComponent, RiderPropAttachHardBoundsTargetingScalar) == 564, "Offset mismatch for URiderComponent::RiderPropAttachHardBoundsTargetingScalar");
static_assert(offsetof(URiderComponent, RiderPropAttachVerticalBufferTargetingScalar) == 568, "Offset mismatch for URiderComponent::RiderPropAttachVerticalBufferTargetingScalar");
static_assert(offsetof(URiderComponent, RidingExitHoldTime) == 572, "Offset mismatch for URiderComponent::RidingExitHoldTime");
static_assert(offsetof(URiderComponent, TimeBeforeReenteringRiding) == 576, "Offset mismatch for URiderComponent::TimeBeforeReenteringRiding");
static_assert(offsetof(URiderComponent, RidingExitStartedEventTag) == 616, "Offset mismatch for URiderComponent::RidingExitStartedEventTag");
static_assert(offsetof(URiderComponent, RidingExitStoppedEventTag) == 620, "Offset mismatch for URiderComponent::RidingExitStoppedEventTag");
static_assert(offsetof(URiderComponent, RidingInputContext) == 624, "Offset mismatch for URiderComponent::RidingInputContext");
static_assert(offsetof(URiderComponent, RidingExit) == 632, "Offset mismatch for URiderComponent::RidingExit");
static_assert(offsetof(URiderComponent, GamepadRidingExit) == 640, "Offset mismatch for URiderComponent::GamepadRidingExit");
static_assert(offsetof(URiderComponent, ConnectorFXAsset) == 648, "Offset mismatch for URiderComponent::ConnectorFXAsset");
static_assert(offsetof(URiderComponent, ConnectorPropSourceMeshParameterName) == 656, "Offset mismatch for URiderComponent::ConnectorPropSourceMeshParameterName");
static_assert(offsetof(URiderComponent, ConnectorPropTargetMeshParameterName) == 660, "Offset mismatch for URiderComponent::ConnectorPropTargetMeshParameterName");
static_assert(offsetof(URiderComponent, RidingStartedGameplayCueTag) == 664, "Offset mismatch for URiderComponent::RidingStartedGameplayCueTag");
static_assert(offsetof(URiderComponent, WhileRidingGameplayCueTag) == 668, "Offset mismatch for URiderComponent::WhileRidingGameplayCueTag");
static_assert(offsetof(URiderComponent, RidingStoppedGameplayCueTag) == 672, "Offset mismatch for URiderComponent::RidingStoppedGameplayCueTag");
static_assert(offsetof(URiderComponent, SimulatedSmoothedRotationSpeed) == 676, "Offset mismatch for URiderComponent::SimulatedSmoothedRotationSpeed");
static_assert(offsetof(URiderComponent, ExcludedEmoteTags) == 680, "Offset mismatch for URiderComponent::ExcludedEmoteTags");
static_assert(offsetof(URiderComponent, ActiveRidableAndSlot) == 720, "Offset mismatch for URiderComponent::ActiveRidableAndSlot");
static_assert(offsetof(URiderComponent, LastRidableAndSlot) == 736, "Offset mismatch for URiderComponent::LastRidableAndSlot");
static_assert(offsetof(URiderComponent, RiderProp) == 752, "Offset mismatch for URiderComponent::RiderProp");
static_assert(offsetof(URiderComponent, ConnectorProp) == 760, "Offset mismatch for URiderComponent::ConnectorProp");
static_assert(offsetof(URiderComponent, PropAttachSeparation) == 768, "Offset mismatch for URiderComponent::PropAttachSeparation");
static_assert(offsetof(URiderComponent, AdditionalAttachOffset) == 792, "Offset mismatch for URiderComponent::AdditionalAttachOffset");
static_assert(offsetof(URiderComponent, SoftBoundsAttachmentOffset) == 816, "Offset mismatch for URiderComponent::SoftBoundsAttachmentOffset");
static_assert(offsetof(URiderComponent, HardBoundsAttachmentOffset) == 840, "Offset mismatch for URiderComponent::HardBoundsAttachmentOffset");
static_assert(offsetof(URiderComponent, PlaylistTagDenylistRowHandle) == 864, "Offset mismatch for URiderComponent::PlaylistTagDenylistRowHandle");
static_assert(offsetof(URiderComponent, RiderInputComponent) == 880, "Offset mismatch for URiderComponent::RiderInputComponent");
static_assert(offsetof(URiderComponent, PendingFailedEmoteErrorTags) == 896, "Offset mismatch for URiderComponent::PendingFailedEmoteErrorTags");
static_assert(offsetof(URiderComponent, ExitLaunchVelocity) == 928, "Offset mismatch for URiderComponent::ExitLaunchVelocity");
static_assert(offsetof(URiderComponent, JumpExitLaunchVelocity) == 1096, "Offset mismatch for URiderComponent::JumpExitLaunchVelocity");
static_assert(offsetof(URiderComponent, ActiveAnaltyicsData) == 1272, "Offset mismatch for URiderComponent::ActiveAnaltyicsData");
static_assert(offsetof(URiderComponent, RidableLocationLastFrame) == 1400, "Offset mismatch for URiderComponent::RidableLocationLastFrame");
static_assert(offsetof(URiderComponent, RestoreCollisionHandle) == 1432, "Offset mismatch for URiderComponent::RestoreCollisionHandle");
static_assert(offsetof(URiderComponent, RidableControlRuntimeData) == 1440, "Offset mismatch for URiderComponent::RidableControlRuntimeData");
static_assert(offsetof(URiderComponent, bIsSprintingReplay) == 1504, "Offset mismatch for URiderComponent::bIsSprintingReplay");
static_assert(offsetof(URiderComponent, ClampedController) == 1508, "Offset mismatch for URiderComponent::ClampedController");
static_assert(offsetof(URiderComponent, bIsPetting) == 1516, "Offset mismatch for URiderComponent::bIsPetting");
static_assert(offsetof(URiderComponent, RidingCapsuleHalfHeight) == 1520, "Offset mismatch for URiderComponent::RidingCapsuleHalfHeight");
static_assert(offsetof(URiderComponent, RidingCapsuleRadius) == 1560, "Offset mismatch for URiderComponent::RidingCapsuleRadius");
static_assert(offsetof(URiderComponent, CollisionProfileName) == 1616, "Offset mismatch for URiderComponent::CollisionProfileName");
static_assert(offsetof(URiderComponent, TraceRadius) == 1624, "Offset mismatch for URiderComponent::TraceRadius");
static_assert(offsetof(URiderComponent, TraceLength) == 1664, "Offset mismatch for URiderComponent::TraceLength");
static_assert(offsetof(URiderComponent, bPreventExitRidingFromInput) == 1704, "Offset mismatch for URiderComponent::bPreventExitRidingFromInput");
static_assert(offsetof(URiderComponent, RidingInputPriority) == 1708, "Offset mismatch for URiderComponent::RidingInputPriority");
static_assert(offsetof(URiderComponent, DoNotUse_ActiveRidable) == 1792, "Offset mismatch for URiderComponent::DoNotUse_ActiveRidable");

// /Script/RidingCodeRuntime.RidingAnalytics
// Kind: Class; super: BlueprintFunctionLibrary
class URidingAnalytics
{
public:
    std::uint8_t Opaque[1];
};


// /Script/RidingCodeRuntime.RidingCheatManager
// Kind: Class; super: ChildCheatManager
class URidingCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/RidingCodeRuntime.RidingGameStateMutator
// Kind: Class; super: FortAthenaMutator
class URidingGameStateMutator
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::uint8_t bMutatesGameMode; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bMutatesGameState (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x02B1
    void* CachedGameMode; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* CachedGameState; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InitializedPlayerControllers[0x14]; // 0x02C8 (Size: 0x14, Type: SetProperty)
    std::uint8_t OverridePriority; // 0x02DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOnlyRunOnGameThread; // 0x02DD (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(URidingGameStateMutator, bMutatesGameMode) == 688, "Offset mismatch for URidingGameStateMutator::bMutatesGameMode");
static_assert(offsetof(URidingGameStateMutator, CachedGameMode) == 696, "Offset mismatch for URidingGameStateMutator::CachedGameMode");
static_assert(offsetof(URidingGameStateMutator, CachedGameState) == 704, "Offset mismatch for URidingGameStateMutator::CachedGameState");
static_assert(offsetof(URidingGameStateMutator, InitializedPlayerControllers) == 712, "Offset mismatch for URidingGameStateMutator::InitializedPlayerControllers");
static_assert(offsetof(URidingGameStateMutator, OverridePriority) == 732, "Offset mismatch for URidingGameStateMutator::OverridePriority");
static_assert(offsetof(URidingGameStateMutator, bOnlyRunOnGameThread) == 733, "Offset mismatch for URidingGameStateMutator::bOnlyRunOnGameThread");
