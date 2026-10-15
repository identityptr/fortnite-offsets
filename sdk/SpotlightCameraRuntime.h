/**
 * decamp dumper generated SDK
 * Package: /Script/SpotlightCameraRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SpotlightCameraRuntime.ActorComponent_SpotlightCamera
// Kind: Class; super: ActorComponent
class UActorComponent_SpotlightCamera
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t TagsThatBlockSpotlightCamera[0x20]; // 0x00C0 (Size: 0x20, Type: StructProperty)
    void* MovementModeRuntimeData; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* MovementMode; // 0x00E8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UActorComponent_SpotlightCamera, TagsThatBlockSpotlightCamera) == 192, "Offset mismatch for UActorComponent_SpotlightCamera::TagsThatBlockSpotlightCamera");
static_assert(offsetof(UActorComponent_SpotlightCamera, MovementModeRuntimeData) == 224, "Offset mismatch for UActorComponent_SpotlightCamera::MovementModeRuntimeData");
static_assert(offsetof(UActorComponent_SpotlightCamera, MovementMode) == 232, "Offset mismatch for UActorComponent_SpotlightCamera::MovementMode");

// /Script/SpotlightCameraRuntime.FortCameraMode_SpotlightCamera
// Kind: Class; super: FortCameraMode_ThirdPerson
class UFortCameraMode_SpotlightCamera
{
public:
    std::uint8_t Pad_0000[0x2080]; // 0x0000
    float MinZoomDistance; // 0x2080 (Size: 0x4, Type: FloatProperty)
    float MaxZoomDistance; // 0x2084 (Size: 0x4, Type: FloatProperty)
    float DesiredZoomDistance; // 0x2088 (Size: 0x4, Type: FloatProperty)
    float DefaultZoomDistance; // 0x208C (Size: 0x4, Type: FloatProperty)
    float ZoomDistanceApproachSpeed; // 0x2090 (Size: 0x4, Type: FloatProperty)
    float CameraRotationLimitsLerpTimeSeconds; // 0x2094 (Size: 0x4, Type: FloatProperty)
    TMap<void*, void*> BodyTypeViewOffsets; // 0x2098 (Size: 0x10, Type: MapProperty)
    float WhatIsFacingFront; // 0x20A8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortCameraMode_SpotlightCamera, MinZoomDistance) == 8320, "Offset mismatch for UFortCameraMode_SpotlightCamera::MinZoomDistance");
static_assert(offsetof(UFortCameraMode_SpotlightCamera, MaxZoomDistance) == 8324, "Offset mismatch for UFortCameraMode_SpotlightCamera::MaxZoomDistance");
static_assert(offsetof(UFortCameraMode_SpotlightCamera, DesiredZoomDistance) == 8328, "Offset mismatch for UFortCameraMode_SpotlightCamera::DesiredZoomDistance");
static_assert(offsetof(UFortCameraMode_SpotlightCamera, DefaultZoomDistance) == 8332, "Offset mismatch for UFortCameraMode_SpotlightCamera::DefaultZoomDistance");
static_assert(offsetof(UFortCameraMode_SpotlightCamera, ZoomDistanceApproachSpeed) == 8336, "Offset mismatch for UFortCameraMode_SpotlightCamera::ZoomDistanceApproachSpeed");
static_assert(offsetof(UFortCameraMode_SpotlightCamera, CameraRotationLimitsLerpTimeSeconds) == 8340, "Offset mismatch for UFortCameraMode_SpotlightCamera::CameraRotationLimitsLerpTimeSeconds");
static_assert(offsetof(UFortCameraMode_SpotlightCamera, BodyTypeViewOffsets) == 8344, "Offset mismatch for UFortCameraMode_SpotlightCamera::BodyTypeViewOffsets");
static_assert(offsetof(UFortCameraMode_SpotlightCamera, WhatIsFacingFront) == 8360, "Offset mismatch for UFortCameraMode_SpotlightCamera::WhatIsFacingFront");

// /Script/SpotlightCameraRuntime.FortMovementMode_SpotlightCamera
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_SpotlightCamera
{
public:
    std::uint8_t Pad_0000[0x44]; // 0x0000
    TWeakObjectPtr<void> OwnerPawn; // 0x0044 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwnerMovementComponent; // 0x004C (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwnerAbilitySystemComponent; // 0x0054 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bUseFullSimulation; // 0x005C (Size: 0x1, Type: BoolProperty)
    std::uint8_t SimProxyTickMode; // 0x005D (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseDilatedDeltaTime; // 0x005E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x19]; // 0x005F
    std::uint8_t MovementModeExtensionIDTag[0x20]; // 0x0078 (Size: 0x20, Type: StructProperty)
    std::uint8_t QuestMovementMode; // 0x0098 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0099
    std::uint8_t StartMMECue[0x4]; // 0x009C (Size: 0x4, Type: StructProperty)
    std::uint8_t EndMMECue[0x4]; // 0x00A0 (Size: 0x4, Type: StructProperty)
    std::uint8_t MMEContinuousCue[0x4]; // 0x00A4 (Size: 0x4, Type: StructProperty)
    std::uint8_t AbilityIDTag[0x20]; // 0x00A8 (Size: 0x20, Type: StructProperty)
    std::uint8_t StartEventTag[0x4]; // 0x00C8 (Size: 0x4, Type: StructProperty)
    std::uint8_t StopEventTag[0x4]; // 0x00CC (Size: 0x4, Type: StructProperty)
    std::uint8_t NativeActionTag[0x8]; // 0x00D0 (Size: 0x8, Type: StructProperty)
    std::uint8_t BlockingMMETags[0x20]; // 0x00D8 (Size: 0x20, Type: StructProperty)
    std::uint8_t TagsToPush[0x20]; // 0x00F8 (Size: 0x20, Type: StructProperty)
    std::uint8_t CancelAbilityTags[0x20]; // 0x0118 (Size: 0x20, Type: StructProperty)
    std::uint8_t BlockAbilityTags[0x20]; // 0x0138 (Size: 0x20, Type: StructProperty)
    std::uint8_t RequiredMMETags[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    std::uint8_t bShouldSkipRootMotionResimulation; // 0x0178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSimulatedProxy; // 0x0179 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLocalPlayer; // 0x017A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsServer; // 0x017B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsServerBotControlled; // 0x017C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0xB]; // 0x017D
    void* CameraMode; // 0x0188 (Size: 0x8, Type: ClassProperty)
    std::uint8_t CameraModeTag[0x4]; // 0x0190 (Size: 0x4, Type: StructProperty)
    float MaxSpeedThresholdCombine; // 0x0194 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortMovementMode_SpotlightCamera, OwnerPawn) == 68, "Offset mismatch for UFortMovementMode_SpotlightCamera::OwnerPawn");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, OwnerMovementComponent) == 76, "Offset mismatch for UFortMovementMode_SpotlightCamera::OwnerMovementComponent");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, OwnerAbilitySystemComponent) == 84, "Offset mismatch for UFortMovementMode_SpotlightCamera::OwnerAbilitySystemComponent");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, bUseFullSimulation) == 92, "Offset mismatch for UFortMovementMode_SpotlightCamera::bUseFullSimulation");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, SimProxyTickMode) == 93, "Offset mismatch for UFortMovementMode_SpotlightCamera::SimProxyTickMode");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, bUseDilatedDeltaTime) == 94, "Offset mismatch for UFortMovementMode_SpotlightCamera::bUseDilatedDeltaTime");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, MovementModeExtensionIDTag) == 120, "Offset mismatch for UFortMovementMode_SpotlightCamera::MovementModeExtensionIDTag");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, QuestMovementMode) == 152, "Offset mismatch for UFortMovementMode_SpotlightCamera::QuestMovementMode");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, StartMMECue) == 156, "Offset mismatch for UFortMovementMode_SpotlightCamera::StartMMECue");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, EndMMECue) == 160, "Offset mismatch for UFortMovementMode_SpotlightCamera::EndMMECue");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, MMEContinuousCue) == 164, "Offset mismatch for UFortMovementMode_SpotlightCamera::MMEContinuousCue");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, AbilityIDTag) == 168, "Offset mismatch for UFortMovementMode_SpotlightCamera::AbilityIDTag");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, StartEventTag) == 200, "Offset mismatch for UFortMovementMode_SpotlightCamera::StartEventTag");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, StopEventTag) == 204, "Offset mismatch for UFortMovementMode_SpotlightCamera::StopEventTag");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, NativeActionTag) == 208, "Offset mismatch for UFortMovementMode_SpotlightCamera::NativeActionTag");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, BlockingMMETags) == 216, "Offset mismatch for UFortMovementMode_SpotlightCamera::BlockingMMETags");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, TagsToPush) == 248, "Offset mismatch for UFortMovementMode_SpotlightCamera::TagsToPush");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, CancelAbilityTags) == 280, "Offset mismatch for UFortMovementMode_SpotlightCamera::CancelAbilityTags");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, BlockAbilityTags) == 312, "Offset mismatch for UFortMovementMode_SpotlightCamera::BlockAbilityTags");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, RequiredMMETags) == 344, "Offset mismatch for UFortMovementMode_SpotlightCamera::RequiredMMETags");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, bShouldSkipRootMotionResimulation) == 376, "Offset mismatch for UFortMovementMode_SpotlightCamera::bShouldSkipRootMotionResimulation");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, bIsSimulatedProxy) == 377, "Offset mismatch for UFortMovementMode_SpotlightCamera::bIsSimulatedProxy");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, bIsLocalPlayer) == 378, "Offset mismatch for UFortMovementMode_SpotlightCamera::bIsLocalPlayer");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, bIsServer) == 379, "Offset mismatch for UFortMovementMode_SpotlightCamera::bIsServer");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, bIsServerBotControlled) == 380, "Offset mismatch for UFortMovementMode_SpotlightCamera::bIsServerBotControlled");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, CameraMode) == 392, "Offset mismatch for UFortMovementMode_SpotlightCamera::CameraMode");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, CameraModeTag) == 400, "Offset mismatch for UFortMovementMode_SpotlightCamera::CameraModeTag");
static_assert(offsetof(UFortMovementMode_SpotlightCamera, MaxSpeedThresholdCombine) == 404, "Offset mismatch for UFortMovementMode_SpotlightCamera::MaxSpeedThresholdCombine");

// /Script/SpotlightCameraRuntime.FortMovementMode_SpotlightCamera_RuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_SpotlightCamera_RuntimeData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bOrientRotationToMovement; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseControllerDesiredRotation; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideRotationRate; // 0x003A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortMovementMode_SpotlightCamera_RuntimeData, bOrientRotationToMovement) == 56, "Offset mismatch for UFortMovementMode_SpotlightCamera_RuntimeData::bOrientRotationToMovement");
static_assert(offsetof(UFortMovementMode_SpotlightCamera_RuntimeData, bUseControllerDesiredRotation) == 57, "Offset mismatch for UFortMovementMode_SpotlightCamera_RuntimeData::bUseControllerDesiredRotation");
static_assert(offsetof(UFortMovementMode_SpotlightCamera_RuntimeData, bOverrideRotationRate) == 58, "Offset mismatch for UFortMovementMode_SpotlightCamera_RuntimeData::bOverrideRotationRate");

// /Script/SpotlightCameraRuntime.SpotlightCameraLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USpotlightCameraLibrary
{
public:
    std::uint8_t Opaque[1];
};
