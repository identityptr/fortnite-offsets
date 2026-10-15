/**
 * decamp dumper generated SDK
 * Package: /Script/SlidingRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SlidingRuntime.FortMovementMode_SlidingCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_SlidingCreationData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* LogicClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FFortMovementMode_SlidingCreationData, LogicClass) == 8, "Offset mismatch for FFortMovementMode_SlidingCreationData::LogicClass");

// /Script/SlidingRuntime.FortControllerComponent_Sliding
// Kind: Class; super: ControllerComponent
class UFortControllerComponent_Sliding
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* MovementModeExtension; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    void* SlidingFeedback_GA; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    void* DisableSlideGameplayEffectClass; // 0x00E0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t AllowSlidingFromSlopeSliding[0xE8]; // 0x00E8 (Size: 0xE8, Type: StructProperty)
    TArray<void*> InputInstantSlideSources; // 0x01D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortControllerComponent_Sliding, MovementModeExtension) == 208, "Offset mismatch for UFortControllerComponent_Sliding::MovementModeExtension");
static_assert(offsetof(UFortControllerComponent_Sliding, SlidingFeedback_GA) == 216, "Offset mismatch for UFortControllerComponent_Sliding::SlidingFeedback_GA");
static_assert(offsetof(UFortControllerComponent_Sliding, DisableSlideGameplayEffectClass) == 224, "Offset mismatch for UFortControllerComponent_Sliding::DisableSlideGameplayEffectClass");
static_assert(offsetof(UFortControllerComponent_Sliding, AllowSlidingFromSlopeSliding) == 232, "Offset mismatch for UFortControllerComponent_Sliding::AllowSlidingFromSlopeSliding");
static_assert(offsetof(UFortControllerComponent_Sliding, InputInstantSlideSources) == 464, "Offset mismatch for UFortControllerComponent_Sliding::InputInstantSlideSources");

// /Script/SlidingRuntime.FortMovementMode_Sliding
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_Sliding
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t DashPeriod[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    void* SlidingAnimLayer; // 0x01E0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t GCSliding[0x4]; // 0x01E8 (Size: 0x4, Type: StructProperty)
    std::uint8_t GCCameraShakeSliding[0x4]; // 0x01EC (Size: 0x4, Type: StructProperty)
    std::uint8_t GCSpeedLines[0x4]; // 0x01F0 (Size: 0x4, Type: StructProperty)
    std::uint8_t EventSlidingStarted[0x4]; // 0x01F4 (Size: 0x4, Type: StructProperty)
    std::uint8_t SlidingBlockOriginalGATag[0x8]; // 0x01F8 (Size: 0x8, Type: StructProperty)
    void* CameraModeModifier; // 0x0200 (Size: 0x8, Type: ClassProperty)
    void* CameraStartShake; // 0x0208 (Size: 0x8, Type: ClassProperty)
    void* FNMaterialsCollection; // 0x0210 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RemoveSpeedLinesAt[0x28]; // 0x0218 (Size: 0x28, Type: StructProperty)
    std::uint8_t AddSpeedLinesAt[0x28]; // 0x0240 (Size: 0x28, Type: StructProperty)
    std::uint8_t CanSlopeSlide[0x28]; // 0x0268 (Size: 0x28, Type: StructProperty)
    std::uint8_t ExitIntoSlopeSlidingOnEndTags[0x2C8]; // 0x0290 (Size: 0x2C8, Type: StructProperty)
    void* CurrentlyLinkedSlidingLayer; // 0x0558 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortMovementMode_Sliding, DashPeriod) == 440, "Offset mismatch for UFortMovementMode_Sliding::DashPeriod");
static_assert(offsetof(UFortMovementMode_Sliding, SlidingAnimLayer) == 480, "Offset mismatch for UFortMovementMode_Sliding::SlidingAnimLayer");
static_assert(offsetof(UFortMovementMode_Sliding, GCSliding) == 488, "Offset mismatch for UFortMovementMode_Sliding::GCSliding");
static_assert(offsetof(UFortMovementMode_Sliding, GCCameraShakeSliding) == 492, "Offset mismatch for UFortMovementMode_Sliding::GCCameraShakeSliding");
static_assert(offsetof(UFortMovementMode_Sliding, GCSpeedLines) == 496, "Offset mismatch for UFortMovementMode_Sliding::GCSpeedLines");
static_assert(offsetof(UFortMovementMode_Sliding, EventSlidingStarted) == 500, "Offset mismatch for UFortMovementMode_Sliding::EventSlidingStarted");
static_assert(offsetof(UFortMovementMode_Sliding, SlidingBlockOriginalGATag) == 504, "Offset mismatch for UFortMovementMode_Sliding::SlidingBlockOriginalGATag");
static_assert(offsetof(UFortMovementMode_Sliding, CameraModeModifier) == 512, "Offset mismatch for UFortMovementMode_Sliding::CameraModeModifier");
static_assert(offsetof(UFortMovementMode_Sliding, CameraStartShake) == 520, "Offset mismatch for UFortMovementMode_Sliding::CameraStartShake");
static_assert(offsetof(UFortMovementMode_Sliding, FNMaterialsCollection) == 528, "Offset mismatch for UFortMovementMode_Sliding::FNMaterialsCollection");
static_assert(offsetof(UFortMovementMode_Sliding, RemoveSpeedLinesAt) == 536, "Offset mismatch for UFortMovementMode_Sliding::RemoveSpeedLinesAt");
static_assert(offsetof(UFortMovementMode_Sliding, AddSpeedLinesAt) == 576, "Offset mismatch for UFortMovementMode_Sliding::AddSpeedLinesAt");
static_assert(offsetof(UFortMovementMode_Sliding, CanSlopeSlide) == 616, "Offset mismatch for UFortMovementMode_Sliding::CanSlopeSlide");
static_assert(offsetof(UFortMovementMode_Sliding, ExitIntoSlopeSlidingOnEndTags) == 656, "Offset mismatch for UFortMovementMode_Sliding::ExitIntoSlopeSlidingOnEndTags");
static_assert(offsetof(UFortMovementMode_Sliding, CurrentlyLinkedSlidingLayer) == 1368, "Offset mismatch for UFortMovementMode_Sliding::CurrentlyLinkedSlidingLayer");

// /Script/SlidingRuntime.FortMovementMode_SlidingRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_SlidingRuntimeData
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

static_assert(offsetof(UFortMovementMode_SlidingRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_SlidingRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_SlidingRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_SlidingRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_SlidingRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_SlidingRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_SlidingRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_SlidingRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_SlidingRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_SlidingRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_SlidingRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_SlidingRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_SlidingRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_SlidingRuntimeData::EndReasonFlags");
