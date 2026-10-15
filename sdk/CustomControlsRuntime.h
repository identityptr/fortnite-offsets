/**
 * decamp dumper generated SDK
 * Package: /Script/CustomControlsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CustomControlsRuntime.CustomControlCommonTargetingData
// Kind: ScriptStruct; super: none
struct FCustomControlCommonTargetingData
{
public:
    std::uint8_t WeightingData[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    void* DeviceTest; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCustomControlCommonTargetingData, WeightingData) == 0, "Offset mismatch for FCustomControlCommonTargetingData::WeightingData");
static_assert(offsetof(FCustomControlCommonTargetingData, DeviceTest) == 40, "Offset mismatch for FCustomControlCommonTargetingData::DeviceTest");

// /Script/CustomControlsRuntime.CustomControlStateDependentTargetingData
// Kind: ScriptStruct; super: none
struct FCustomControlStateDependentTargetingData
{
public:
    float Distance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Angle; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseAngleWhileMoving; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    float AngleWhileMoving; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRequireLineOfSight; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCustomControlStateDependentTargetingData, Distance) == 0, "Offset mismatch for FCustomControlStateDependentTargetingData::Distance");
static_assert(offsetof(FCustomControlStateDependentTargetingData, Angle) == 4, "Offset mismatch for FCustomControlStateDependentTargetingData::Angle");
static_assert(offsetof(FCustomControlStateDependentTargetingData, bUseAngleWhileMoving) == 8, "Offset mismatch for FCustomControlStateDependentTargetingData::bUseAngleWhileMoving");
static_assert(offsetof(FCustomControlStateDependentTargetingData, AngleWhileMoving) == 12, "Offset mismatch for FCustomControlStateDependentTargetingData::AngleWhileMoving");
static_assert(offsetof(FCustomControlStateDependentTargetingData, bRequireLineOfSight) == 16, "Offset mismatch for FCustomControlStateDependentTargetingData::bRequireLineOfSight");

// /Script/CustomControlsRuntime.CustomControlTargetingData
// Kind: ScriptStruct; super: none
struct FCustomControlTargetingData
{
public:
    std::uint8_t CommonTargetingData[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t StateDependentTargetingData[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCustomControlTargetingData, CommonTargetingData) == 0, "Offset mismatch for FCustomControlTargetingData::CommonTargetingData");
static_assert(offsetof(FCustomControlTargetingData, StateDependentTargetingData) == 48, "Offset mismatch for FCustomControlTargetingData::StateDependentTargetingData");

// /Script/CustomControlsRuntime.CustomControlWeightingTargetingData
// Kind: ScriptStruct; super: none
struct FCustomControlWeightingTargetingData
{
public:
    float PlayerWeight; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float CreatureWeight; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float VehicleWeight; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float DestructiblesWeight; // 0x000C (Size: 0x4, Type: FloatProperty)
    float AngleWeight; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAngleWeightScaling; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0015
    float DistanceWeight; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDistanceWeightScaling; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x001D
    float RetainedTargetWeight; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRequireTargetOnScreen; // 0x0024 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCustomControlWeightingTargetingData, PlayerWeight) == 0, "Offset mismatch for FCustomControlWeightingTargetingData::PlayerWeight");
static_assert(offsetof(FCustomControlWeightingTargetingData, CreatureWeight) == 4, "Offset mismatch for FCustomControlWeightingTargetingData::CreatureWeight");
static_assert(offsetof(FCustomControlWeightingTargetingData, VehicleWeight) == 8, "Offset mismatch for FCustomControlWeightingTargetingData::VehicleWeight");
static_assert(offsetof(FCustomControlWeightingTargetingData, DestructiblesWeight) == 12, "Offset mismatch for FCustomControlWeightingTargetingData::DestructiblesWeight");
static_assert(offsetof(FCustomControlWeightingTargetingData, AngleWeight) == 16, "Offset mismatch for FCustomControlWeightingTargetingData::AngleWeight");
static_assert(offsetof(FCustomControlWeightingTargetingData, bAngleWeightScaling) == 20, "Offset mismatch for FCustomControlWeightingTargetingData::bAngleWeightScaling");
static_assert(offsetof(FCustomControlWeightingTargetingData, DistanceWeight) == 24, "Offset mismatch for FCustomControlWeightingTargetingData::DistanceWeight");
static_assert(offsetof(FCustomControlWeightingTargetingData, bDistanceWeightScaling) == 28, "Offset mismatch for FCustomControlWeightingTargetingData::bDistanceWeightScaling");
static_assert(offsetof(FCustomControlWeightingTargetingData, RetainedTargetWeight) == 32, "Offset mismatch for FCustomControlWeightingTargetingData::RetainedTargetWeight");
static_assert(offsetof(FCustomControlWeightingTargetingData, bRequireTargetOnScreen) == 36, "Offset mismatch for FCustomControlWeightingTargetingData::bRequireTargetOnScreen");

// /Script/CustomControlsRuntime.CustomControlsState
// Kind: ScriptStruct; super: none
struct FCustomControlsState
{
public:
    std::uint8_t bHasFocusTarget; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AttackType; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TargetingType; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t WeaponType; // 0x0003 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FCustomControlsState, bHasFocusTarget) == 0, "Offset mismatch for FCustomControlsState::bHasFocusTarget");
static_assert(offsetof(FCustomControlsState, AttackType) == 1, "Offset mismatch for FCustomControlsState::AttackType");
static_assert(offsetof(FCustomControlsState, TargetingType) == 2, "Offset mismatch for FCustomControlsState::TargetingType");
static_assert(offsetof(FCustomControlsState, WeaponType) == 3, "Offset mismatch for FCustomControlsState::WeaponType");

// /Script/CustomControlsRuntime.FortMovementMode_CCSideScrollerCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_CCSideScrollerCreationData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t bConstraintMovement; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    float ForwardRotationYaw; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DeviceForwardVector[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    float SpeedMultiplier; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float SpeedMultiplierWhenShooting; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float SpeedMultiplierWhenAiming; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LockOnMode; // 0x003C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x003D
    float NPCDistanceToFaceTarget; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortMovementMode_CCSideScrollerCreationData, bConstraintMovement) == 16, "Offset mismatch for FFortMovementMode_CCSideScrollerCreationData::bConstraintMovement");
static_assert(offsetof(FFortMovementMode_CCSideScrollerCreationData, ForwardRotationYaw) == 20, "Offset mismatch for FFortMovementMode_CCSideScrollerCreationData::ForwardRotationYaw");
static_assert(offsetof(FFortMovementMode_CCSideScrollerCreationData, DeviceForwardVector) == 24, "Offset mismatch for FFortMovementMode_CCSideScrollerCreationData::DeviceForwardVector");
static_assert(offsetof(FFortMovementMode_CCSideScrollerCreationData, SpeedMultiplier) == 48, "Offset mismatch for FFortMovementMode_CCSideScrollerCreationData::SpeedMultiplier");
static_assert(offsetof(FFortMovementMode_CCSideScrollerCreationData, SpeedMultiplierWhenShooting) == 52, "Offset mismatch for FFortMovementMode_CCSideScrollerCreationData::SpeedMultiplierWhenShooting");
static_assert(offsetof(FFortMovementMode_CCSideScrollerCreationData, SpeedMultiplierWhenAiming) == 56, "Offset mismatch for FFortMovementMode_CCSideScrollerCreationData::SpeedMultiplierWhenAiming");
static_assert(offsetof(FFortMovementMode_CCSideScrollerCreationData, LockOnMode) == 60, "Offset mismatch for FFortMovementMode_CCSideScrollerCreationData::LockOnMode");
static_assert(offsetof(FFortMovementMode_CCSideScrollerCreationData, NPCDistanceToFaceTarget) == 64, "Offset mismatch for FFortMovementMode_CCSideScrollerCreationData::NPCDistanceToFaceTarget");

// /Script/CustomControlsRuntime.FortMovementMode_CCThirdPersonCreationData
// Kind: ScriptStruct; super: FortMovementMode_BaseExtCreationData
struct FFortMovementMode_CCThirdPersonCreationData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    float SpeedMultiplier; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float SpeedMultiplierWhenShooting; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float SpeedMultiplierWhenAiming; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float RotationRateMultiplier; // 0x001C (Size: 0x4, Type: FloatProperty)
    float RotationRateWhenShootingMultiplier; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float RotationRateWhenAimingMultiplier; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LockOnMode; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float FixedFacingYaw; // 0x002C (Size: 0x4, Type: FloatProperty)
    float TacticalSprintRotationRateYaw; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float SkydivingRotationRatePitch; // 0x0034 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortMovementMode_CCThirdPersonCreationData, SpeedMultiplier) == 16, "Offset mismatch for FFortMovementMode_CCThirdPersonCreationData::SpeedMultiplier");
static_assert(offsetof(FFortMovementMode_CCThirdPersonCreationData, SpeedMultiplierWhenShooting) == 20, "Offset mismatch for FFortMovementMode_CCThirdPersonCreationData::SpeedMultiplierWhenShooting");
static_assert(offsetof(FFortMovementMode_CCThirdPersonCreationData, SpeedMultiplierWhenAiming) == 24, "Offset mismatch for FFortMovementMode_CCThirdPersonCreationData::SpeedMultiplierWhenAiming");
static_assert(offsetof(FFortMovementMode_CCThirdPersonCreationData, RotationRateMultiplier) == 28, "Offset mismatch for FFortMovementMode_CCThirdPersonCreationData::RotationRateMultiplier");
static_assert(offsetof(FFortMovementMode_CCThirdPersonCreationData, RotationRateWhenShootingMultiplier) == 32, "Offset mismatch for FFortMovementMode_CCThirdPersonCreationData::RotationRateWhenShootingMultiplier");
static_assert(offsetof(FFortMovementMode_CCThirdPersonCreationData, RotationRateWhenAimingMultiplier) == 36, "Offset mismatch for FFortMovementMode_CCThirdPersonCreationData::RotationRateWhenAimingMultiplier");
static_assert(offsetof(FFortMovementMode_CCThirdPersonCreationData, LockOnMode) == 40, "Offset mismatch for FFortMovementMode_CCThirdPersonCreationData::LockOnMode");
static_assert(offsetof(FFortMovementMode_CCThirdPersonCreationData, FixedFacingYaw) == 44, "Offset mismatch for FFortMovementMode_CCThirdPersonCreationData::FixedFacingYaw");
static_assert(offsetof(FFortMovementMode_CCThirdPersonCreationData, TacticalSprintRotationRateYaw) == 48, "Offset mismatch for FFortMovementMode_CCThirdPersonCreationData::TacticalSprintRotationRateYaw");
static_assert(offsetof(FFortMovementMode_CCThirdPersonCreationData, SkydivingRotationRatePitch) == 52, "Offset mismatch for FFortMovementMode_CCThirdPersonCreationData::SkydivingRotationRatePitch");

// /Script/CustomControlsRuntime.InputOptions_SideScroller
// Kind: ScriptStruct; super: none
struct FInputOptions_SideScroller
{
public:
    std::uint8_t bConstraintMovement; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShootingLocomotionLockDirection; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAimingLocomotionLockDirection; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AimControls; // 0x0003 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SideScrollerJump; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SideScrollerCrouch; // 0x0005 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FInputOptions_SideScroller, bConstraintMovement) == 0, "Offset mismatch for FInputOptions_SideScroller::bConstraintMovement");
static_assert(offsetof(FInputOptions_SideScroller, bShootingLocomotionLockDirection) == 1, "Offset mismatch for FInputOptions_SideScroller::bShootingLocomotionLockDirection");
static_assert(offsetof(FInputOptions_SideScroller, bAimingLocomotionLockDirection) == 2, "Offset mismatch for FInputOptions_SideScroller::bAimingLocomotionLockDirection");
static_assert(offsetof(FInputOptions_SideScroller, AimControls) == 3, "Offset mismatch for FInputOptions_SideScroller::AimControls");
static_assert(offsetof(FInputOptions_SideScroller, SideScrollerJump) == 4, "Offset mismatch for FInputOptions_SideScroller::SideScrollerJump");
static_assert(offsetof(FInputOptions_SideScroller, SideScrollerCrouch) == 5, "Offset mismatch for FInputOptions_SideScroller::SideScrollerCrouch");

// /Script/CustomControlsRuntime.InputOptions_ThirdPerson
// Kind: ScriptStruct; super: none
struct FInputOptions_ThirdPerson
{
public:
    std::uint8_t bAutoFire; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FInputOptions_ThirdPerson, bAutoFire) == 0, "Offset mismatch for FInputOptions_ThirdPerson::bAutoFire");

// /Script/CustomControlsRuntime.InteractionPointOptions
// Kind: ScriptStruct; super: none
struct FInteractionPointOptions
{
public:
    std::uint8_t InteractionOrigin; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float InteractDistance; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float InteractHighlightDistance; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float InteractExtentRadius; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FInteractionPointOptions, InteractionOrigin) == 0, "Offset mismatch for FInteractionPointOptions::InteractionOrigin");
static_assert(offsetof(FInteractionPointOptions, InteractDistance) == 4, "Offset mismatch for FInteractionPointOptions::InteractDistance");
static_assert(offsetof(FInteractionPointOptions, InteractHighlightDistance) == 8, "Offset mismatch for FInteractionPointOptions::InteractHighlightDistance");
static_assert(offsetof(FInteractionPointOptions, InteractExtentRadius) == 12, "Offset mismatch for FInteractionPointOptions::InteractExtentRadius");

// /Script/CustomControlsRuntime.CustomControlInputBindings_Base
// Kind: Class; super: Object
class UCustomControlInputBindings_Base
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> OwnerCustomControlsComponent; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwnerController; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OwnerPawn; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UCustomControlInputBindings_Base, OwnerCustomControlsComponent) == 40, "Offset mismatch for UCustomControlInputBindings_Base::OwnerCustomControlsComponent");
static_assert(offsetof(UCustomControlInputBindings_Base, OwnerController) == 48, "Offset mismatch for UCustomControlInputBindings_Base::OwnerController");
static_assert(offsetof(UCustomControlInputBindings_Base, OwnerPawn) == 56, "Offset mismatch for UCustomControlInputBindings_Base::OwnerPawn");

// /Script/CustomControlsRuntime.CustomControlInputBindings_EnhancedInput
// Kind: Class; super: CustomControlInputBindings_Base
class UCustomControlInputBindings_EnhancedInput
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TWeakObjectPtr<void> OwnerInputComponent; // 0x0040 (Size: 0x8, Type: WeakObjectProperty)
    float Priority; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x14]; // 0x004C
    void* InputMapping; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Options[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCustomControlInputBindings_EnhancedInput, OwnerInputComponent) == 64, "Offset mismatch for UCustomControlInputBindings_EnhancedInput::OwnerInputComponent");
static_assert(offsetof(UCustomControlInputBindings_EnhancedInput, Priority) == 72, "Offset mismatch for UCustomControlInputBindings_EnhancedInput::Priority");
static_assert(offsetof(UCustomControlInputBindings_EnhancedInput, InputMapping) == 96, "Offset mismatch for UCustomControlInputBindings_EnhancedInput::InputMapping");
static_assert(offsetof(UCustomControlInputBindings_EnhancedInput, Options) == 104, "Offset mismatch for UCustomControlInputBindings_EnhancedInput::Options");

// /Script/CustomControlsRuntime.CustomControlInputBindings_InputComponent
// Kind: Class; super: CustomControlInputBindings_Base
class UCustomControlInputBindings_InputComponent
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* InputComponent; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomControlInputBindings_InputComponent, InputComponent) == 64, "Offset mismatch for UCustomControlInputBindings_InputComponent::InputComponent");

// /Script/CustomControlsRuntime.CustomControlInputBindings_SideScroller
// Kind: Class; super: CustomControlInputBindings_InputComponent
class UCustomControlInputBindings_SideScroller
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    float AnalogInputDeadZone; // 0x0050 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCustomControlInputBindings_SideScroller, AnalogInputDeadZone) == 80, "Offset mismatch for UCustomControlInputBindings_SideScroller::AnalogInputDeadZone");

// /Script/CustomControlsRuntime.CustomControlInputBindings_SideScrollerManual
// Kind: Class; super: CustomControlInputBindings_SideScroller
class UCustomControlInputBindings_SideScrollerManual
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    float AimOrbitalDistance; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float TouchDirectionClamping; // 0x0094 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCustomControlInputBindings_SideScrollerManual, AimOrbitalDistance) == 144, "Offset mismatch for UCustomControlInputBindings_SideScrollerManual::AimOrbitalDistance");
static_assert(offsetof(UCustomControlInputBindings_SideScrollerManual, TouchDirectionClamping) == 148, "Offset mismatch for UCustomControlInputBindings_SideScrollerManual::TouchDirectionClamping");

// /Script/CustomControlsRuntime.CustomControlInputBindings_SideScrollerMovement
// Kind: Class; super: CustomControlInputBindings_SideScroller
class UCustomControlInputBindings_SideScrollerMovement
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    float AimOrbitalDistance; // 0x0090 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCustomControlInputBindings_SideScrollerMovement, AimOrbitalDistance) == 144, "Offset mismatch for UCustomControlInputBindings_SideScrollerMovement::AimOrbitalDistance");

// /Script/CustomControlsRuntime.CustomControlInputBindings_Skydiving
// Kind: Class; super: CustomControlInputBindings_EnhancedInput
class UCustomControlInputBindings_Skydiving
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* SkydivingDownInputAction; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* SkydivingUpInputAction; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    FName MappingNameSkydivingDown; // 0x0080 (Size: 0x8, Type: NameProperty)
    std::uint8_t DisplayNameSkydivingDown[0x10]; // 0x0088 (Size: 0x10, Type: TextProperty)
    FName MappingNameSkydivingUp; // 0x0098 (Size: 0x8, Type: NameProperty)
    std::uint8_t DisplayNameSkydivingUp[0x10]; // 0x00A0 (Size: 0x10, Type: TextProperty)
    float RotateStickThreshold; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00B4
    std::uint8_t InSkydiveVolumeTags[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCustomControlInputBindings_Skydiving, SkydivingDownInputAction) == 112, "Offset mismatch for UCustomControlInputBindings_Skydiving::SkydivingDownInputAction");
static_assert(offsetof(UCustomControlInputBindings_Skydiving, SkydivingUpInputAction) == 120, "Offset mismatch for UCustomControlInputBindings_Skydiving::SkydivingUpInputAction");
static_assert(offsetof(UCustomControlInputBindings_Skydiving, MappingNameSkydivingDown) == 128, "Offset mismatch for UCustomControlInputBindings_Skydiving::MappingNameSkydivingDown");
static_assert(offsetof(UCustomControlInputBindings_Skydiving, DisplayNameSkydivingDown) == 136, "Offset mismatch for UCustomControlInputBindings_Skydiving::DisplayNameSkydivingDown");
static_assert(offsetof(UCustomControlInputBindings_Skydiving, MappingNameSkydivingUp) == 152, "Offset mismatch for UCustomControlInputBindings_Skydiving::MappingNameSkydivingUp");
static_assert(offsetof(UCustomControlInputBindings_Skydiving, DisplayNameSkydivingUp) == 160, "Offset mismatch for UCustomControlInputBindings_Skydiving::DisplayNameSkydivingUp");
static_assert(offsetof(UCustomControlInputBindings_Skydiving, RotateStickThreshold) == 176, "Offset mismatch for UCustomControlInputBindings_Skydiving::RotateStickThreshold");
static_assert(offsetof(UCustomControlInputBindings_Skydiving, InSkydiveVolumeTags) == 184, "Offset mismatch for UCustomControlInputBindings_Skydiving::InSkydiveVolumeTags");

// /Script/CustomControlsRuntime.CustomControlInputBindings_ThirdPersonSprint
// Kind: Class; super: CustomControlInputBindings_InputComponent
class UCustomControlInputBindings_ThirdPersonSprint
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    float AnalogInputDeadZone; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float RotateStickThreshold; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float CameraRotationThreshold; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float InputRateIfCameraRotationThreshold; // 0x005C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCustomControlInputBindings_ThirdPersonSprint, AnalogInputDeadZone) == 80, "Offset mismatch for UCustomControlInputBindings_ThirdPersonSprint::AnalogInputDeadZone");
static_assert(offsetof(UCustomControlInputBindings_ThirdPersonSprint, RotateStickThreshold) == 84, "Offset mismatch for UCustomControlInputBindings_ThirdPersonSprint::RotateStickThreshold");
static_assert(offsetof(UCustomControlInputBindings_ThirdPersonSprint, CameraRotationThreshold) == 88, "Offset mismatch for UCustomControlInputBindings_ThirdPersonSprint::CameraRotationThreshold");
static_assert(offsetof(UCustomControlInputBindings_ThirdPersonSprint, InputRateIfCameraRotationThreshold) == 92, "Offset mismatch for UCustomControlInputBindings_ThirdPersonSprint::InputRateIfCameraRotationThreshold");

// /Script/CustomControlsRuntime.CustomControlInputBindings_TwinStick
// Kind: Class; super: CustomControlInputBindings_EnhancedInput
class UCustomControlInputBindings_TwinStick
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float InitialDialAimTargetOffsetScaleFactor; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float TargetingBreakOffsetGamepad; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float TargetingBreakOffsetMouse; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float DefaultAutoFireCooldown; // 0x007C (Size: 0x4, Type: FloatProperty)
    void* GamepadLookAtInputAction; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* GamepadAimAtInputAction; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    void* MouseLookAtInputAction; // 0x0090 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomControlInputBindings_TwinStick, InitialDialAimTargetOffsetScaleFactor) == 112, "Offset mismatch for UCustomControlInputBindings_TwinStick::InitialDialAimTargetOffsetScaleFactor");
static_assert(offsetof(UCustomControlInputBindings_TwinStick, TargetingBreakOffsetGamepad) == 116, "Offset mismatch for UCustomControlInputBindings_TwinStick::TargetingBreakOffsetGamepad");
static_assert(offsetof(UCustomControlInputBindings_TwinStick, TargetingBreakOffsetMouse) == 120, "Offset mismatch for UCustomControlInputBindings_TwinStick::TargetingBreakOffsetMouse");
static_assert(offsetof(UCustomControlInputBindings_TwinStick, DefaultAutoFireCooldown) == 124, "Offset mismatch for UCustomControlInputBindings_TwinStick::DefaultAutoFireCooldown");
static_assert(offsetof(UCustomControlInputBindings_TwinStick, GamepadLookAtInputAction) == 128, "Offset mismatch for UCustomControlInputBindings_TwinStick::GamepadLookAtInputAction");
static_assert(offsetof(UCustomControlInputBindings_TwinStick, GamepadAimAtInputAction) == 136, "Offset mismatch for UCustomControlInputBindings_TwinStick::GamepadAimAtInputAction");
static_assert(offsetof(UCustomControlInputBindings_TwinStick, MouseLookAtInputAction) == 144, "Offset mismatch for UCustomControlInputBindings_TwinStick::MouseLookAtInputAction");

// /Script/CustomControlsRuntime.CustomControlInputBindings_TwinStickDial
// Kind: Class; super: CustomControlInputBindings_TwinStick
class UCustomControlInputBindings_TwinStickDial
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* MouseAimAtInputAction; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomControlInputBindings_TwinStickDial, MouseAimAtInputAction) == 208, "Offset mismatch for UCustomControlInputBindings_TwinStickDial::MouseAimAtInputAction");

// /Script/CustomControlsRuntime.CustomControlOptions_Base
// Kind: Class; super: Object
class UCustomControlOptions_Base
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MovementModeLogic; // 0x0028 (Size: 0x8, Type: ClassProperty)
    float RangedAttackStateDuration; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float MeleeAttackStateDuration; // 0x0034 (Size: 0x4, Type: FloatProperty)
    TArray<void*> InputBindingsClasses; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FortWeaponReticleData[0x14]; // 0x0048 (Size: 0x14, Type: StructProperty)
    std::uint8_t InteractionPointOptions[0x14]; // 0x005C (Size: 0x14, Type: StructProperty)
    std::uint8_t InteractionTargetingPreset[0x8]; // 0x0070 (Size: 0x8, Type: StructProperty)
    float BuildingPlacementDistanceOffset; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldAffectNPC; // 0x007C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCustomControlOptions_Base, MovementModeLogic) == 40, "Offset mismatch for UCustomControlOptions_Base::MovementModeLogic");
static_assert(offsetof(UCustomControlOptions_Base, RangedAttackStateDuration) == 48, "Offset mismatch for UCustomControlOptions_Base::RangedAttackStateDuration");
static_assert(offsetof(UCustomControlOptions_Base, MeleeAttackStateDuration) == 52, "Offset mismatch for UCustomControlOptions_Base::MeleeAttackStateDuration");
static_assert(offsetof(UCustomControlOptions_Base, InputBindingsClasses) == 56, "Offset mismatch for UCustomControlOptions_Base::InputBindingsClasses");
static_assert(offsetof(UCustomControlOptions_Base, FortWeaponReticleData) == 72, "Offset mismatch for UCustomControlOptions_Base::FortWeaponReticleData");
static_assert(offsetof(UCustomControlOptions_Base, InteractionPointOptions) == 92, "Offset mismatch for UCustomControlOptions_Base::InteractionPointOptions");
static_assert(offsetof(UCustomControlOptions_Base, InteractionTargetingPreset) == 112, "Offset mismatch for UCustomControlOptions_Base::InteractionTargetingPreset");
static_assert(offsetof(UCustomControlOptions_Base, BuildingPlacementDistanceOffset) == 120, "Offset mismatch for UCustomControlOptions_Base::BuildingPlacementDistanceOffset");
static_assert(offsetof(UCustomControlOptions_Base, bShouldAffectNPC) == 124, "Offset mismatch for UCustomControlOptions_Base::bShouldAffectNPC");

// /Script/CustomControlsRuntime.CustomControlOptions_SideScroller
// Kind: Class; super: CustomControlOptions_Targeting
class UCustomControlOptions_SideScroller
{
public:
    std::uint8_t Pad_0000[0x1C8]; // 0x0000
    std::uint8_t MovementModeCreationData[0x48]; // 0x01C8 (Size: 0x48, Type: StructProperty)
    std::uint8_t InputOptions[0x6]; // 0x0210 (Size: 0x6, Type: StructProperty)
    std::uint8_t bIsBeanstalkGFS; // 0x0216 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDeviceActive; // 0x0217 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCustomControlOptions_SideScroller, MovementModeCreationData) == 456, "Offset mismatch for UCustomControlOptions_SideScroller::MovementModeCreationData");
static_assert(offsetof(UCustomControlOptions_SideScroller, InputOptions) == 528, "Offset mismatch for UCustomControlOptions_SideScroller::InputOptions");
static_assert(offsetof(UCustomControlOptions_SideScroller, bIsBeanstalkGFS) == 534, "Offset mismatch for UCustomControlOptions_SideScroller::bIsBeanstalkGFS");
static_assert(offsetof(UCustomControlOptions_SideScroller, bIsDeviceActive) == 535, "Offset mismatch for UCustomControlOptions_SideScroller::bIsDeviceActive");

// /Script/CustomControlsRuntime.CustomControlOptions_Targeting
// Kind: Class; super: CustomControlOptions_Base
class UCustomControlOptions_Targeting
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    float AngleToClampFireHorizontal; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float AngleToClampFireVertical; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    void* RangedTargetingPresetTemplate; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    void* RetentionTargetingPresetTemplate; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* RangedAimingTargetingPresetTemplate; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    void* MeleeTargetingPresetTemplate; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* RangedTargetingPreset; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* RetentionTargetingPreset; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* RangedAimTargetingPreset; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* MeleeTargetingPreset; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bTargetingEnabled; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    std::uint8_t RangedTargetingData[0x48]; // 0x00F0 (Size: 0x48, Type: StructProperty)
    std::uint8_t MeleeTargetingData[0x48]; // 0x0138 (Size: 0x48, Type: StructProperty)
    std::uint8_t AimingTargetingData[0x1]; // 0x0180 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCustomControlOptions_Targeting, AngleToClampFireHorizontal) == 160, "Offset mismatch for UCustomControlOptions_Targeting::AngleToClampFireHorizontal");
static_assert(offsetof(UCustomControlOptions_Targeting, AngleToClampFireVertical) == 164, "Offset mismatch for UCustomControlOptions_Targeting::AngleToClampFireVertical");
static_assert(offsetof(UCustomControlOptions_Targeting, RangedTargetingPresetTemplate) == 168, "Offset mismatch for UCustomControlOptions_Targeting::RangedTargetingPresetTemplate");
static_assert(offsetof(UCustomControlOptions_Targeting, RetentionTargetingPresetTemplate) == 176, "Offset mismatch for UCustomControlOptions_Targeting::RetentionTargetingPresetTemplate");
static_assert(offsetof(UCustomControlOptions_Targeting, RangedAimingTargetingPresetTemplate) == 184, "Offset mismatch for UCustomControlOptions_Targeting::RangedAimingTargetingPresetTemplate");
static_assert(offsetof(UCustomControlOptions_Targeting, MeleeTargetingPresetTemplate) == 192, "Offset mismatch for UCustomControlOptions_Targeting::MeleeTargetingPresetTemplate");
static_assert(offsetof(UCustomControlOptions_Targeting, RangedTargetingPreset) == 200, "Offset mismatch for UCustomControlOptions_Targeting::RangedTargetingPreset");
static_assert(offsetof(UCustomControlOptions_Targeting, RetentionTargetingPreset) == 208, "Offset mismatch for UCustomControlOptions_Targeting::RetentionTargetingPreset");
static_assert(offsetof(UCustomControlOptions_Targeting, RangedAimTargetingPreset) == 216, "Offset mismatch for UCustomControlOptions_Targeting::RangedAimTargetingPreset");
static_assert(offsetof(UCustomControlOptions_Targeting, MeleeTargetingPreset) == 224, "Offset mismatch for UCustomControlOptions_Targeting::MeleeTargetingPreset");
static_assert(offsetof(UCustomControlOptions_Targeting, bTargetingEnabled) == 232, "Offset mismatch for UCustomControlOptions_Targeting::bTargetingEnabled");
static_assert(offsetof(UCustomControlOptions_Targeting, RangedTargetingData) == 240, "Offset mismatch for UCustomControlOptions_Targeting::RangedTargetingData");
static_assert(offsetof(UCustomControlOptions_Targeting, MeleeTargetingData) == 312, "Offset mismatch for UCustomControlOptions_Targeting::MeleeTargetingData");
static_assert(offsetof(UCustomControlOptions_Targeting, AimingTargetingData) == 384, "Offset mismatch for UCustomControlOptions_Targeting::AimingTargetingData");

// /Script/CustomControlsRuntime.CustomControlOptions_ThirdPerson
// Kind: Class; super: CustomControlOptions_Targeting
class UCustomControlOptions_ThirdPerson
{
public:
    std::uint8_t Pad_0000[0x1C8]; // 0x0000
    std::uint8_t MovementModeCreationData[0x38]; // 0x01C8 (Size: 0x38, Type: StructProperty)
    std::uint8_t InputOptions[0x4]; // 0x0200 (Size: 0x4, Type: StructProperty)
    std::uint8_t AdjustedAim[0x1]; // 0x0204 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCustomControlOptions_ThirdPerson, MovementModeCreationData) == 456, "Offset mismatch for UCustomControlOptions_ThirdPerson::MovementModeCreationData");
static_assert(offsetof(UCustomControlOptions_ThirdPerson, InputOptions) == 512, "Offset mismatch for UCustomControlOptions_ThirdPerson::InputOptions");
static_assert(offsetof(UCustomControlOptions_ThirdPerson, AdjustedAim) == 516, "Offset mismatch for UCustomControlOptions_ThirdPerson::AdjustedAim");

// /Script/CustomControlsRuntime.FortAIPawnComponent_CustomControls
// Kind: Class; super: FortPawnComponent_BaseCC
class UFortAIPawnComponent_CustomControls
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* ActiveOptions; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* HighestPriorityOptions; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0108
    TArray<void*> OwnedOptions; // 0x0118 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortAIPawnComponent_CustomControls, ActiveOptions) == 248, "Offset mismatch for UFortAIPawnComponent_CustomControls::ActiveOptions");
static_assert(offsetof(UFortAIPawnComponent_CustomControls, HighestPriorityOptions) == 256, "Offset mismatch for UFortAIPawnComponent_CustomControls::HighestPriorityOptions");
static_assert(offsetof(UFortAIPawnComponent_CustomControls, OwnedOptions) == 280, "Offset mismatch for UFortAIPawnComponent_CustomControls::OwnedOptions");

// /Script/CustomControlsRuntime.FortControllerComponent_BaseCC
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_BaseCC
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* ActiveOptions; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* HighestPriorityOptions; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0108
    TArray<void*> OwnedOptions; // 0x0118 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortControllerComponent_BaseCC, ActiveOptions) == 248, "Offset mismatch for UFortControllerComponent_BaseCC::ActiveOptions");
static_assert(offsetof(UFortControllerComponent_BaseCC, HighestPriorityOptions) == 256, "Offset mismatch for UFortControllerComponent_BaseCC::HighestPriorityOptions");
static_assert(offsetof(UFortControllerComponent_BaseCC, OwnedOptions) == 280, "Offset mismatch for UFortControllerComponent_BaseCC::OwnedOptions");

// /Script/CustomControlsRuntime.FortControllerComponent_CustomControls
// Kind: Class; super: FortControllerComponent_BaseCC
class UFortControllerComponent_CustomControls
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    std::uint8_t CurrentState[0x10]; // 0x0128 (Size: 0x10, Type: StructProperty)
    std::uint8_t BlockTagsQuery[0x50]; // 0x0138 (Size: 0x50, Type: StructProperty)
    TArray<void*> ActiveInputBindings; // 0x0188 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x38]; // 0x0198
    TWeakObjectPtr<void> InteractSelectionPtr; // 0x01D0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortControllerComponent_CustomControls, CurrentState) == 296, "Offset mismatch for UFortControllerComponent_CustomControls::CurrentState");
static_assert(offsetof(UFortControllerComponent_CustomControls, BlockTagsQuery) == 312, "Offset mismatch for UFortControllerComponent_CustomControls::BlockTagsQuery");
static_assert(offsetof(UFortControllerComponent_CustomControls, ActiveInputBindings) == 392, "Offset mismatch for UFortControllerComponent_CustomControls::ActiveInputBindings");
static_assert(offsetof(UFortControllerComponent_CustomControls, InteractSelectionPtr) == 464, "Offset mismatch for UFortControllerComponent_CustomControls::InteractSelectionPtr");

// /Script/CustomControlsRuntime.FortMovementMode_BaseCCLogic
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_BaseCCLogic
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    TWeakObjectPtr<void> OwnerController; // 0x01B8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> FortPlayerController; // 0x01C0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> FortAIController; // 0x01C8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortMovementMode_BaseCCLogic, OwnerController) == 440, "Offset mismatch for UFortMovementMode_BaseCCLogic::OwnerController");
static_assert(offsetof(UFortMovementMode_BaseCCLogic, FortPlayerController) == 448, "Offset mismatch for UFortMovementMode_BaseCCLogic::FortPlayerController");
static_assert(offsetof(UFortMovementMode_BaseCCLogic, FortAIController) == 456, "Offset mismatch for UFortMovementMode_BaseCCLogic::FortAIController");

// /Script/CustomControlsRuntime.FortMovementMode_BaseCCRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_BaseCCRuntimeData
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

static_assert(offsetof(UFortMovementMode_BaseCCRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_BaseCCRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_BaseCCRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_BaseCCRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_BaseCCRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_BaseCCRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_BaseCCRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_BaseCCRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_BaseCCRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_BaseCCRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_BaseCCRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_BaseCCRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_BaseCCRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_BaseCCRuntimeData::EndReasonFlags");

// /Script/CustomControlsRuntime.FortMovementMode_CCLockOnLogic
// Kind: Class; super: FortMovementMode_BaseCCLogic
class UFortMovementMode_CCLockOnLogic
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    TWeakObjectPtr<void> OwnerController; // 0x01B8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> FortPlayerController; // 0x01C0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> FortAIController; // 0x01C8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortMovementMode_CCLockOnLogic, OwnerController) == 440, "Offset mismatch for UFortMovementMode_CCLockOnLogic::OwnerController");
static_assert(offsetof(UFortMovementMode_CCLockOnLogic, FortPlayerController) == 448, "Offset mismatch for UFortMovementMode_CCLockOnLogic::FortPlayerController");
static_assert(offsetof(UFortMovementMode_CCLockOnLogic, FortAIController) == 456, "Offset mismatch for UFortMovementMode_CCLockOnLogic::FortAIController");

// /Script/CustomControlsRuntime.FortMovementMode_CCLockOnRuntimeData
// Kind: Class; super: FortMovementMode_BaseCCRuntimeData
class UFortMovementMode_CCLockOnRuntimeData
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

static_assert(offsetof(UFortMovementMode_CCLockOnRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_CCLockOnRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_CCLockOnRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_CCLockOnRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_CCLockOnRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_CCLockOnRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_CCLockOnRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_CCLockOnRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_CCLockOnRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_CCLockOnRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_CCLockOnRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_CCLockOnRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_CCLockOnRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_CCLockOnRuntimeData::EndReasonFlags");

// /Script/CustomControlsRuntime.FortMovementMode_CCSideScrollerLogic
// Kind: Class; super: FortMovementMode_CCLockOnLogic
class UFortMovementMode_CCSideScrollerLogic
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    TWeakObjectPtr<void> OwnerController; // 0x01B8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> FortPlayerController; // 0x01C0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> FortAIController; // 0x01C8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortMovementMode_CCSideScrollerLogic, OwnerController) == 440, "Offset mismatch for UFortMovementMode_CCSideScrollerLogic::OwnerController");
static_assert(offsetof(UFortMovementMode_CCSideScrollerLogic, FortPlayerController) == 448, "Offset mismatch for UFortMovementMode_CCSideScrollerLogic::FortPlayerController");
static_assert(offsetof(UFortMovementMode_CCSideScrollerLogic, FortAIController) == 456, "Offset mismatch for UFortMovementMode_CCSideScrollerLogic::FortAIController");

// /Script/CustomControlsRuntime.FortMovementMode_CCSideScrollerRuntimeData
// Kind: Class; super: FortMovementMode_CCLockOnRuntimeData
class UFortMovementMode_CCSideScrollerRuntimeData
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    float DesiredRotationYaw; // 0x0060 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortMovementMode_CCSideScrollerRuntimeData, DesiredRotationYaw) == 96, "Offset mismatch for UFortMovementMode_CCSideScrollerRuntimeData::DesiredRotationYaw");

// /Script/CustomControlsRuntime.FortMovementMode_CCThirdPersonFixedLogic
// Kind: Class; super: FortMovementMode_CCThirdPersonLogic
class UFortMovementMode_CCThirdPersonFixedLogic
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    TWeakObjectPtr<void> OwnerController; // 0x01B8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> FortPlayerController; // 0x01C0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> FortAIController; // 0x01C8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortMovementMode_CCThirdPersonFixedLogic, OwnerController) == 440, "Offset mismatch for UFortMovementMode_CCThirdPersonFixedLogic::OwnerController");
static_assert(offsetof(UFortMovementMode_CCThirdPersonFixedLogic, FortPlayerController) == 448, "Offset mismatch for UFortMovementMode_CCThirdPersonFixedLogic::FortPlayerController");
static_assert(offsetof(UFortMovementMode_CCThirdPersonFixedLogic, FortAIController) == 456, "Offset mismatch for UFortMovementMode_CCThirdPersonFixedLogic::FortAIController");

// /Script/CustomControlsRuntime.FortMovementMode_CCThirdPersonFixedRuntimeData
// Kind: Class; super: FortMovementMode_CCThirdPersonRuntimeData
class UFortMovementMode_CCThirdPersonFixedRuntimeData
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

static_assert(offsetof(UFortMovementMode_CCThirdPersonFixedRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_CCThirdPersonFixedRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_CCThirdPersonFixedRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_CCThirdPersonFixedRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_CCThirdPersonFixedRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_CCThirdPersonFixedRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_CCThirdPersonFixedRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_CCThirdPersonFixedRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_CCThirdPersonFixedRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_CCThirdPersonFixedRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_CCThirdPersonFixedRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_CCThirdPersonFixedRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_CCThirdPersonFixedRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_CCThirdPersonFixedRuntimeData::EndReasonFlags");

// /Script/CustomControlsRuntime.FortMovementMode_CCThirdPersonLogic
// Kind: Class; super: FortMovementMode_CCLockOnLogic
class UFortMovementMode_CCThirdPersonLogic
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    TWeakObjectPtr<void> OwnerController; // 0x01B8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> FortPlayerController; // 0x01C0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> FortAIController; // 0x01C8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortMovementMode_CCThirdPersonLogic, OwnerController) == 440, "Offset mismatch for UFortMovementMode_CCThirdPersonLogic::OwnerController");
static_assert(offsetof(UFortMovementMode_CCThirdPersonLogic, FortPlayerController) == 448, "Offset mismatch for UFortMovementMode_CCThirdPersonLogic::FortPlayerController");
static_assert(offsetof(UFortMovementMode_CCThirdPersonLogic, FortAIController) == 456, "Offset mismatch for UFortMovementMode_CCThirdPersonLogic::FortAIController");

// /Script/CustomControlsRuntime.FortMovementMode_CCThirdPersonRuntimeData
// Kind: Class; super: FortMovementMode_CCLockOnRuntimeData
class UFortMovementMode_CCThirdPersonRuntimeData
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

static_assert(offsetof(UFortMovementMode_CCThirdPersonRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_CCThirdPersonRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_CCThirdPersonRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_CCThirdPersonRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_CCThirdPersonRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_CCThirdPersonRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_CCThirdPersonRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_CCThirdPersonRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_CCThirdPersonRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_CCThirdPersonRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_CCThirdPersonRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_CCThirdPersonRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_CCThirdPersonRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_CCThirdPersonRuntimeData::EndReasonFlags");

// /Script/CustomControlsRuntime.FortMovementMode_CCThirdPersonTwinStickLogic
// Kind: Class; super: FortMovementMode_CCThirdPersonLogic
class UFortMovementMode_CCThirdPersonTwinStickLogic
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    TWeakObjectPtr<void> OwnerController; // 0x01B8 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> FortPlayerController; // 0x01C0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> FortAIController; // 0x01C8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortMovementMode_CCThirdPersonTwinStickLogic, OwnerController) == 440, "Offset mismatch for UFortMovementMode_CCThirdPersonTwinStickLogic::OwnerController");
static_assert(offsetof(UFortMovementMode_CCThirdPersonTwinStickLogic, FortPlayerController) == 448, "Offset mismatch for UFortMovementMode_CCThirdPersonTwinStickLogic::FortPlayerController");
static_assert(offsetof(UFortMovementMode_CCThirdPersonTwinStickLogic, FortAIController) == 456, "Offset mismatch for UFortMovementMode_CCThirdPersonTwinStickLogic::FortAIController");

// /Script/CustomControlsRuntime.FortMovementMode_CCThirdPersonTwinStickRuntimeData
// Kind: Class; super: FortMovementMode_CCThirdPersonRuntimeData
class UFortMovementMode_CCThirdPersonTwinStickRuntimeData
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

static_assert(offsetof(UFortMovementMode_CCThirdPersonTwinStickRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_CCThirdPersonTwinStickRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_CCThirdPersonTwinStickRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_CCThirdPersonTwinStickRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_CCThirdPersonTwinStickRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_CCThirdPersonTwinStickRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_CCThirdPersonTwinStickRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_CCThirdPersonTwinStickRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_CCThirdPersonTwinStickRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_CCThirdPersonTwinStickRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_CCThirdPersonTwinStickRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_CCThirdPersonTwinStickRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_CCThirdPersonTwinStickRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_CCThirdPersonTwinStickRuntimeData::EndReasonFlags");

// /Script/CustomControlsRuntime.FortPawnComponent_BaseCC
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_BaseCC
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* ActiveOptions; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* HighestPriorityOptions; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0108
    TArray<void*> OwnedOptions; // 0x0118 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortPawnComponent_BaseCC, ActiveOptions) == 248, "Offset mismatch for UFortPawnComponent_BaseCC::ActiveOptions");
static_assert(offsetof(UFortPawnComponent_BaseCC, HighestPriorityOptions) == 256, "Offset mismatch for UFortPawnComponent_BaseCC::HighestPriorityOptions");
static_assert(offsetof(UFortPawnComponent_BaseCC, OwnedOptions) == 280, "Offset mismatch for UFortPawnComponent_BaseCC::OwnedOptions");

// /Script/CustomControlsRuntime.TargetingDataHelperLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UTargetingDataHelperLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CustomControlsRuntime.TargetingFilterCCFOV
// Kind: Class; super: SimpleTargetingFilterTask
class UTargetingFilterCCFOV
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float FliedOfView; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseAimDirectionInsteadOfForwardVector; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::uint8_t bRequireLineOfSight; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UTargetingFilterCCFOV, FliedOfView) == 40, "Offset mismatch for UTargetingFilterCCFOV::FliedOfView");
static_assert(offsetof(UTargetingFilterCCFOV, bUseAimDirectionInsteadOfForwardVector) == 44, "Offset mismatch for UTargetingFilterCCFOV::bUseAimDirectionInsteadOfForwardVector");
static_assert(offsetof(UTargetingFilterCCFOV, bRequireLineOfSight) == 48, "Offset mismatch for UTargetingFilterCCFOV::bRequireLineOfSight");

// /Script/CustomControlsRuntime.TargetingFilter_CC_Base
// Kind: Class; super: SimpleTargetingFilterTask
class UTargetingFilter_CC_Base
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t TargetingData[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTargetingFilter_CC_Base, TargetingData) == 48, "Offset mismatch for UTargetingFilter_CC_Base::TargetingData");

// /Script/CustomControlsRuntime.TargetingSelectionCCIdleInteract
// Kind: Class; super: TargetingSelectionCCRange
class UTargetingSelectionCCIdleInteract
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float Radius; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float Height; // 0x002C (Size: 0x4, Type: FloatProperty)
    float ForwardOffset; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float VerticalOffset; // 0x0034 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UTargetingSelectionCCIdleInteract, Radius) == 40, "Offset mismatch for UTargetingSelectionCCIdleInteract::Radius");
static_assert(offsetof(UTargetingSelectionCCIdleInteract, Height) == 44, "Offset mismatch for UTargetingSelectionCCIdleInteract::Height");
static_assert(offsetof(UTargetingSelectionCCIdleInteract, ForwardOffset) == 48, "Offset mismatch for UTargetingSelectionCCIdleInteract::ForwardOffset");
static_assert(offsetof(UTargetingSelectionCCIdleInteract, VerticalOffset) == 52, "Offset mismatch for UTargetingSelectionCCIdleInteract::VerticalOffset");

// /Script/CustomControlsRuntime.TargetingSelectionCCRange
// Kind: Class; super: SimpleTargetingSelectionTask
class UTargetingSelectionCCRange
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float Radius; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float Height; // 0x002C (Size: 0x4, Type: FloatProperty)
    float ForwardOffset; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float VerticalOffset; // 0x0034 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UTargetingSelectionCCRange, Radius) == 40, "Offset mismatch for UTargetingSelectionCCRange::Radius");
static_assert(offsetof(UTargetingSelectionCCRange, Height) == 44, "Offset mismatch for UTargetingSelectionCCRange::Height");
static_assert(offsetof(UTargetingSelectionCCRange, ForwardOffset) == 48, "Offset mismatch for UTargetingSelectionCCRange::ForwardOffset");
static_assert(offsetof(UTargetingSelectionCCRange, VerticalOffset) == 52, "Offset mismatch for UTargetingSelectionCCRange::VerticalOffset");

// /Script/CustomControlsRuntime.TargetingSelection_CC_Base
// Kind: Class; super: SimpleTargetingSelectionTask
class UTargetingSelection_CC_Base
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t TargetingData[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTargetingSelection_CC_Base, TargetingData) == 48, "Offset mismatch for UTargetingSelection_CC_Base::TargetingData");

// /Script/CustomControlsRuntime.TargetingSort_CC_Base
// Kind: Class; super: SimpleTargetingSortTask
class UTargetingSort_CC_Base
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t TargetingData[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTargetingSort_CC_Base, TargetingData) == 56, "Offset mismatch for UTargetingSort_CC_Base::TargetingData");

// /Script/CustomControlsRuntime.TargetingTask_CC_DataHolder
// Kind: Class; super: Interface
class UTargetingTask_CC_DataHolder
{
public:
    std::uint8_t Opaque[1];
};
