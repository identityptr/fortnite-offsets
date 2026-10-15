/**
 * decamp dumper generated SDK
 * Package: /Script/FortSceneGraphCamerasRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FortSceneGraphCamerasRuntime.FortCameraMode_SceneGraphCamera
// Kind: Class; super: FortCameraMode
class UFortCameraMode_SceneGraphCamera
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* PlayerCamera; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BlendStateData[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    float TransitionTime; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float TransitionOutTime; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOverrideTransitionOutTime; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    std::uint8_t TransitionParams[0x14]; // 0x004C (Size: 0x14, Type: StructProperty)
    void* FOVTransitionCurve; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* TranslationTransitionCurve; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsUsingConstantFOV; // 0x0070 (Size: 0x1, Type: BoolProperty)
    // 0x0070 BoolProperty bResetInterpolation (shared storage)
    // 0x0070 BoolProperty bShouldAllowBlendingWhenActive (shared storage)
    // 0x0070 BoolProperty bShouldAllowBlendingWhenInactive (shared storage)
    // 0x0070 BoolProperty bShouldClearWeaponRelativeTransform (shared storage)
    // 0x0070 BoolProperty bShouldPassViewTargetCheckOnTransition (shared storage)
};

static_assert(offsetof(UFortCameraMode_SceneGraphCamera, PlayerCamera) == 40, "Offset mismatch for UFortCameraMode_SceneGraphCamera::PlayerCamera");
static_assert(offsetof(UFortCameraMode_SceneGraphCamera, BlendStateData) == 48, "Offset mismatch for UFortCameraMode_SceneGraphCamera::BlendStateData");
static_assert(offsetof(UFortCameraMode_SceneGraphCamera, TransitionTime) == 64, "Offset mismatch for UFortCameraMode_SceneGraphCamera::TransitionTime");
static_assert(offsetof(UFortCameraMode_SceneGraphCamera, TransitionOutTime) == 68, "Offset mismatch for UFortCameraMode_SceneGraphCamera::TransitionOutTime");
static_assert(offsetof(UFortCameraMode_SceneGraphCamera, bOverrideTransitionOutTime) == 72, "Offset mismatch for UFortCameraMode_SceneGraphCamera::bOverrideTransitionOutTime");
static_assert(offsetof(UFortCameraMode_SceneGraphCamera, TransitionParams) == 76, "Offset mismatch for UFortCameraMode_SceneGraphCamera::TransitionParams");
static_assert(offsetof(UFortCameraMode_SceneGraphCamera, FOVTransitionCurve) == 96, "Offset mismatch for UFortCameraMode_SceneGraphCamera::FOVTransitionCurve");
static_assert(offsetof(UFortCameraMode_SceneGraphCamera, TranslationTransitionCurve) == 104, "Offset mismatch for UFortCameraMode_SceneGraphCamera::TranslationTransitionCurve");
static_assert(offsetof(UFortCameraMode_SceneGraphCamera, bIsUsingConstantFOV) == 112, "Offset mismatch for UFortCameraMode_SceneGraphCamera::bIsUsingConstantFOV");

// /Script/FortSceneGraphCamerasRuntime.FortSceneGraphCameraController
// Kind: Class; super: FortCustomCameraController
class UFortSceneGraphCameraController
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> POIFramingTrackedActors; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    void* CustomCameraModeClass; // 0x0280 (Size: 0x8, Type: ClassProperty)
    void* GameplayEffectClass; // 0x0288 (Size: 0x8, Type: ClassProperty)
    std::uint8_t CameraModeTag[0x4]; // 0x0290 (Size: 0x4, Type: StructProperty)
    std::int32_t CameraPriority; // 0x0294 (Size: 0x4, Type: IntProperty)
    TArray<void*> CameraModifiersList; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TagTrackedCameraModifierList; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bThirdPersonTargetingAllowed; // 0x02B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x02B9
    std::uint8_t OnControllerActivated[0xC]; // 0x02BC (Size: 0xC, Type: DelegateProperty)
    std::uint8_t OnControllerDeactivated[0xC]; // 0x02C8 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t OnControllerEnabled[0xC]; // 0x02D4 (Size: 0xC, Type: DelegateProperty)
    FScriptDelegate OnControllerDisabled; // 0x02E0 (Size: 0x10, Type: DelegateProperty)
    std::uint8_t Pad_0002[0x10]; // 0x02F0
    void* Pawn; // 0x0300 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> LastBoundPawn; // 0x0308 (Size: 0x8, Type: WeakObjectProperty)
    void* FortPlayerCamera; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsCustomCameraModeEnabled; // 0x0318 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0319
    float FieldOfView; // 0x031C (Size: 0x4, Type: FloatProperty)
    float NearClipPlane; // 0x0320 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsDeathCameraOverridden; // 0x0324 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDeathCameraRotationOverridden; // 0x0325 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x0326
    std::uint8_t DeathCameraLocationOffset[0x18]; // 0x0328 (Size: 0x18, Type: StructProperty)
    std::uint8_t bDeathCameraUsingLocation; // 0x0340 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0341
    std::uint8_t DeathCameraRotation[0x18]; // 0x0348 (Size: 0x18, Type: StructProperty)
    std::uint8_t TransitionInData[0x18]; // 0x0360 (Size: 0x18, Type: StructProperty)
    std::uint8_t TransitionOutData[0x18]; // 0x0378 (Size: 0x18, Type: StructProperty)
    void* LookAtTarget; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnableLookAtTarget; // 0x0398 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x7]; // 0x0399
    TArray<void*> CameraModifiersInstances; // 0x03A0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> CameraModifierInstanceMap; // 0x03B0 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0007[0x18]; // 0x03C0
    TArray<void*> LocalPlayerControllers; // 0x03D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ActiveBlockedTags[0x1]; // 0x03E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortSceneGraphCameraController, POIFramingTrackedActors) == 624, "Offset mismatch for UFortSceneGraphCameraController::POIFramingTrackedActors");
static_assert(offsetof(UFortSceneGraphCameraController, CustomCameraModeClass) == 640, "Offset mismatch for UFortSceneGraphCameraController::CustomCameraModeClass");
static_assert(offsetof(UFortSceneGraphCameraController, GameplayEffectClass) == 648, "Offset mismatch for UFortSceneGraphCameraController::GameplayEffectClass");
static_assert(offsetof(UFortSceneGraphCameraController, CameraModeTag) == 656, "Offset mismatch for UFortSceneGraphCameraController::CameraModeTag");
static_assert(offsetof(UFortSceneGraphCameraController, CameraPriority) == 660, "Offset mismatch for UFortSceneGraphCameraController::CameraPriority");
static_assert(offsetof(UFortSceneGraphCameraController, CameraModifiersList) == 664, "Offset mismatch for UFortSceneGraphCameraController::CameraModifiersList");
static_assert(offsetof(UFortSceneGraphCameraController, TagTrackedCameraModifierList) == 680, "Offset mismatch for UFortSceneGraphCameraController::TagTrackedCameraModifierList");
static_assert(offsetof(UFortSceneGraphCameraController, bThirdPersonTargetingAllowed) == 696, "Offset mismatch for UFortSceneGraphCameraController::bThirdPersonTargetingAllowed");
static_assert(offsetof(UFortSceneGraphCameraController, OnControllerActivated) == 700, "Offset mismatch for UFortSceneGraphCameraController::OnControllerActivated");
static_assert(offsetof(UFortSceneGraphCameraController, OnControllerDeactivated) == 712, "Offset mismatch for UFortSceneGraphCameraController::OnControllerDeactivated");
static_assert(offsetof(UFortSceneGraphCameraController, OnControllerEnabled) == 724, "Offset mismatch for UFortSceneGraphCameraController::OnControllerEnabled");
static_assert(offsetof(UFortSceneGraphCameraController, OnControllerDisabled) == 736, "Offset mismatch for UFortSceneGraphCameraController::OnControllerDisabled");
static_assert(offsetof(UFortSceneGraphCameraController, Pawn) == 768, "Offset mismatch for UFortSceneGraphCameraController::Pawn");
static_assert(offsetof(UFortSceneGraphCameraController, LastBoundPawn) == 776, "Offset mismatch for UFortSceneGraphCameraController::LastBoundPawn");
static_assert(offsetof(UFortSceneGraphCameraController, FortPlayerCamera) == 784, "Offset mismatch for UFortSceneGraphCameraController::FortPlayerCamera");
static_assert(offsetof(UFortSceneGraphCameraController, bIsCustomCameraModeEnabled) == 792, "Offset mismatch for UFortSceneGraphCameraController::bIsCustomCameraModeEnabled");
static_assert(offsetof(UFortSceneGraphCameraController, FieldOfView) == 796, "Offset mismatch for UFortSceneGraphCameraController::FieldOfView");
static_assert(offsetof(UFortSceneGraphCameraController, NearClipPlane) == 800, "Offset mismatch for UFortSceneGraphCameraController::NearClipPlane");
static_assert(offsetof(UFortSceneGraphCameraController, bIsDeathCameraOverridden) == 804, "Offset mismatch for UFortSceneGraphCameraController::bIsDeathCameraOverridden");
static_assert(offsetof(UFortSceneGraphCameraController, bIsDeathCameraRotationOverridden) == 805, "Offset mismatch for UFortSceneGraphCameraController::bIsDeathCameraRotationOverridden");
static_assert(offsetof(UFortSceneGraphCameraController, DeathCameraLocationOffset) == 808, "Offset mismatch for UFortSceneGraphCameraController::DeathCameraLocationOffset");
static_assert(offsetof(UFortSceneGraphCameraController, bDeathCameraUsingLocation) == 832, "Offset mismatch for UFortSceneGraphCameraController::bDeathCameraUsingLocation");
static_assert(offsetof(UFortSceneGraphCameraController, DeathCameraRotation) == 840, "Offset mismatch for UFortSceneGraphCameraController::DeathCameraRotation");
static_assert(offsetof(UFortSceneGraphCameraController, TransitionInData) == 864, "Offset mismatch for UFortSceneGraphCameraController::TransitionInData");
static_assert(offsetof(UFortSceneGraphCameraController, TransitionOutData) == 888, "Offset mismatch for UFortSceneGraphCameraController::TransitionOutData");
static_assert(offsetof(UFortSceneGraphCameraController, LookAtTarget) == 912, "Offset mismatch for UFortSceneGraphCameraController::LookAtTarget");
static_assert(offsetof(UFortSceneGraphCameraController, bEnableLookAtTarget) == 920, "Offset mismatch for UFortSceneGraphCameraController::bEnableLookAtTarget");
static_assert(offsetof(UFortSceneGraphCameraController, CameraModifiersInstances) == 928, "Offset mismatch for UFortSceneGraphCameraController::CameraModifiersInstances");
static_assert(offsetof(UFortSceneGraphCameraController, CameraModifierInstanceMap) == 944, "Offset mismatch for UFortSceneGraphCameraController::CameraModifierInstanceMap");
static_assert(offsetof(UFortSceneGraphCameraController, LocalPlayerControllers) == 984, "Offset mismatch for UFortSceneGraphCameraController::LocalPlayerControllers");
static_assert(offsetof(UFortSceneGraphCameraController, ActiveBlockedTags) == 1000, "Offset mismatch for UFortSceneGraphCameraController::ActiveBlockedTags");

// /Script/FortSceneGraphCamerasRuntime.FortSceneGraphCamerasBaseFramingNode
// Kind: Class; super: NativeCameraRigCameraModifierNode
class UFortSceneGraphCamerasBaseFramingNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* InnerNode; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSceneGraphCamerasBaseFramingNode, InnerNode) == 56, "Offset mismatch for UFortSceneGraphCamerasBaseFramingNode::InnerNode");

// /Script/FortSceneGraphCamerasRuntime.FortSceneGraphCamerasDollyFramingNode
// Kind: Class; super: FortSceneGraphCamerasBaseFramingNode
class UFortSceneGraphCamerasDollyFramingNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* InnerNode; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSceneGraphCamerasDollyFramingNode, InnerNode) == 56, "Offset mismatch for UFortSceneGraphCamerasDollyFramingNode::InnerNode");

// /Script/FortSceneGraphCamerasRuntime.FortSceneGraphCamerasFirstPersonCameraNode
// Kind: Class; super: NativeCameraRigCameraModifierNode
class UFortSceneGraphCamerasFirstPersonCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* InnerNode; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSceneGraphCamerasFirstPersonCameraNode, InnerNode) == 56, "Offset mismatch for UFortSceneGraphCamerasFirstPersonCameraNode::InnerNode");

// /Script/FortSceneGraphCamerasRuntime.FortSceneGraphCamerasFixedAngleCameraNode
// Kind: Class; super: NativeCameraRigCameraModifierNode
class UFortSceneGraphCamerasFixedAngleCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* InnerNode; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSceneGraphCamerasFixedAngleCameraNode, InnerNode) == 56, "Offset mismatch for UFortSceneGraphCamerasFixedAngleCameraNode::InnerNode");

// /Script/FortSceneGraphCamerasRuntime.FortSceneGraphCamerasFixedPointCameraNode
// Kind: Class; super: NativeCameraRigCameraModifierNode
class UFortSceneGraphCamerasFixedPointCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* InnerNode; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSceneGraphCamerasFixedPointCameraNode, InnerNode) == 56, "Offset mismatch for UFortSceneGraphCamerasFixedPointCameraNode::InnerNode");

// /Script/FortSceneGraphCamerasRuntime.FortSceneGraphCamerasOrbitCameraNode
// Kind: Class; super: NativeCameraRigCameraModifierNode
class UFortSceneGraphCamerasOrbitCameraNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* InnerNode; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSceneGraphCamerasOrbitCameraNode, InnerNode) == 56, "Offset mismatch for UFortSceneGraphCamerasOrbitCameraNode::InnerNode");

// /Script/FortSceneGraphCamerasRuntime.FortSceneGraphCamerasPanningFramingNode
// Kind: Class; super: FortSceneGraphCamerasBaseFramingNode
class UFortSceneGraphCamerasPanningFramingNode
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* InnerNode; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortSceneGraphCamerasPanningFramingNode, InnerNode) == 56, "Offset mismatch for UFortSceneGraphCamerasPanningFramingNode::InnerNode");

// /Script/FortSceneGraphCamerasRuntime.FortSceneGraphCamerasSubsystem
// Kind: Class; super: WorldSubsystem
class UFortSceneGraphCamerasSubsystem
{
public:
    std::uint8_t Opaque[1];
};
