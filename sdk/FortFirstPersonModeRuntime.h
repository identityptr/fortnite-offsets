/**
 * decamp dumper generated SDK
 * Package: /Script/FortFirstPersonModeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FortFirstPersonModeRuntime.CameraModeRotationClampSettings
// Kind: ScriptStruct; super: none
struct FCameraModeRotationClampSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortFirstPersonModeRuntime.FirstPersonTacticalSprintCameraModifier
// Kind: Class; super: CameraModifier
class UFirstPersonTacticalSprintCameraModifier
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    float FovChange; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float BlendInSeconds; // 0x004C (Size: 0x4, Type: FloatProperty)
    float BlendOutSeconds; // 0x0050 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFirstPersonTacticalSprintCameraModifier, FovChange) == 72, "Offset mismatch for UFirstPersonTacticalSprintCameraModifier::FovChange");
static_assert(offsetof(UFirstPersonTacticalSprintCameraModifier, BlendInSeconds) == 76, "Offset mismatch for UFirstPersonTacticalSprintCameraModifier::BlendInSeconds");
static_assert(offsetof(UFirstPersonTacticalSprintCameraModifier, BlendOutSeconds) == 80, "Offset mismatch for UFirstPersonTacticalSprintCameraModifier::BlendOutSeconds");

// /Script/FortFirstPersonModeRuntime.FortFirstPersonMode_CameraController
// Kind: Class; super: FortFirstPersonCameraController
class UFortFirstPersonMode_CameraController
{
public:
    std::uint8_t Pad_0000[0x468]; // 0x0000
    float HeadMotionScalar; // 0x0468 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDisplayReticleWhileADS; // 0x046C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayAmmoCountWhileADS; // 0x046D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x046E
    TArray<void*> AllowedWeaponClassList; // 0x0470 (Size: 0x10, Type: ArrayProperty)
    void* MaterialParameterCollection; // 0x0480 (Size: 0x8, Type: ObjectProperty)
    FName FP_MaterialParameterName; // 0x0488 (Size: 0x8, Type: NameProperty)
    void* DefaultGauntletPart; // 0x0490 (Size: 0x8, Type: ObjectProperty)
    void* FirstPersonSkeletalMeshComp; // 0x0498 (Size: 0x8, Type: ObjectProperty)
    float CameraYawClampAngleForStasis; // 0x04A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x04A4
    void* CachedOutgoingCameraMode; // 0x04A8 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFortFirstPersonMode_CameraController, HeadMotionScalar) == 1128, "Offset mismatch for UFortFirstPersonMode_CameraController::HeadMotionScalar");
static_assert(offsetof(UFortFirstPersonMode_CameraController, bDisplayReticleWhileADS) == 1132, "Offset mismatch for UFortFirstPersonMode_CameraController::bDisplayReticleWhileADS");
static_assert(offsetof(UFortFirstPersonMode_CameraController, bDisplayAmmoCountWhileADS) == 1133, "Offset mismatch for UFortFirstPersonMode_CameraController::bDisplayAmmoCountWhileADS");
static_assert(offsetof(UFortFirstPersonMode_CameraController, AllowedWeaponClassList) == 1136, "Offset mismatch for UFortFirstPersonMode_CameraController::AllowedWeaponClassList");
static_assert(offsetof(UFortFirstPersonMode_CameraController, MaterialParameterCollection) == 1152, "Offset mismatch for UFortFirstPersonMode_CameraController::MaterialParameterCollection");
static_assert(offsetof(UFortFirstPersonMode_CameraController, FP_MaterialParameterName) == 1160, "Offset mismatch for UFortFirstPersonMode_CameraController::FP_MaterialParameterName");
static_assert(offsetof(UFortFirstPersonMode_CameraController, DefaultGauntletPart) == 1168, "Offset mismatch for UFortFirstPersonMode_CameraController::DefaultGauntletPart");
static_assert(offsetof(UFortFirstPersonMode_CameraController, FirstPersonSkeletalMeshComp) == 1176, "Offset mismatch for UFortFirstPersonMode_CameraController::FirstPersonSkeletalMeshComp");
static_assert(offsetof(UFortFirstPersonMode_CameraController, CameraYawClampAngleForStasis) == 1184, "Offset mismatch for UFortFirstPersonMode_CameraController::CameraYawClampAngleForStasis");
static_assert(offsetof(UFortFirstPersonMode_CameraController, CachedOutgoingCameraMode) == 1192, "Offset mismatch for UFortFirstPersonMode_CameraController::CachedOutgoingCameraMode");

// /Script/FortFirstPersonModeRuntime.FortFirstPersonMode_CheatManager
// Kind: Class; super: ChildCheatManager
class UFortFirstPersonMode_CheatManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSoftClassPtr<void> CameraControllerClass; // 0x0028 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UFortFirstPersonMode_CheatManager, CameraControllerClass) == 40, "Offset mismatch for UFortFirstPersonMode_CheatManager::CameraControllerClass");

// /Script/FortFirstPersonModeRuntime.FortGameplayAbility_InjectFirstPersonCameraController
// Kind: Class; super: FortGameplayAbility
class UFortGameplayAbility_InjectFirstPersonCameraController
{
public:
    std::uint8_t Pad_0000[0xB20]; // 0x0000
    std::uint8_t CameraControllerClass[0x20]; // 0x0B20 (Size: 0x20, Type: SoftClassProperty)
    float CameraControllerPriority; // 0x0B40 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortGameplayAbility_InjectFirstPersonCameraController, CameraControllerClass) == 2848, "Offset mismatch for UFortGameplayAbility_InjectFirstPersonCameraController::CameraControllerClass");
static_assert(offsetof(UFortGameplayAbility_InjectFirstPersonCameraController, CameraControllerPriority) == 2880, "Offset mismatch for UFortGameplayAbility_InjectFirstPersonCameraController::CameraControllerPriority");
