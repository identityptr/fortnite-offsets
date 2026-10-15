/**
 * decamp dumper generated SDK
 * Package: /Script/DryBoxRuntime
 */
#pragma once
#include "Basic.h"

// /Script/DryBoxRuntime.NyxGlassTargetingData
// Kind: ScriptStruct; super: none
struct FNyxGlassTargetingData
{
public:
    void* LeftActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* RightActor; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LeftAttachPoint[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t RightAttachPoint[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t bFoundLeftAttachPoint; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFoundRightAttachPoint; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUsingDirectRaycast; // 0x0042 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNyxGlassTargetingData, LeftActor) == 0, "Offset mismatch for FNyxGlassTargetingData::LeftActor");
static_assert(offsetof(FNyxGlassTargetingData, RightActor) == 8, "Offset mismatch for FNyxGlassTargetingData::RightActor");
static_assert(offsetof(FNyxGlassTargetingData, LeftAttachPoint) == 16, "Offset mismatch for FNyxGlassTargetingData::LeftAttachPoint");
static_assert(offsetof(FNyxGlassTargetingData, RightAttachPoint) == 40, "Offset mismatch for FNyxGlassTargetingData::RightAttachPoint");
static_assert(offsetof(FNyxGlassTargetingData, bFoundLeftAttachPoint) == 64, "Offset mismatch for FNyxGlassTargetingData::bFoundLeftAttachPoint");
static_assert(offsetof(FNyxGlassTargetingData, bFoundRightAttachPoint) == 65, "Offset mismatch for FNyxGlassTargetingData::bFoundRightAttachPoint");
static_assert(offsetof(FNyxGlassTargetingData, bUsingDirectRaycast) == 66, "Offset mismatch for FNyxGlassTargetingData::bUsingDirectRaycast");

// /Script/DryBoxRuntime.NyxGlassVelocityMetadata
// Kind: ScriptStruct; super: none
struct FNyxGlassVelocityMetadata
{
public:
    std::uint8_t OrigVelocity[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t FinalVelocity[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t FinalGasForce[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float CalcMaxSpeedMultiplier; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCloseToAttachPoint; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPerformedHoverCalculation; // 0x004D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReachedSlashTarget; // 0x004E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldApplySlashDamage; // 0x004F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldLeapBack; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFinishedLeapingBack; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCancelAttackSequence; // 0x0052 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNyxGlassVelocityMetadata, OrigVelocity) == 0, "Offset mismatch for FNyxGlassVelocityMetadata::OrigVelocity");
static_assert(offsetof(FNyxGlassVelocityMetadata, FinalVelocity) == 24, "Offset mismatch for FNyxGlassVelocityMetadata::FinalVelocity");
static_assert(offsetof(FNyxGlassVelocityMetadata, FinalGasForce) == 48, "Offset mismatch for FNyxGlassVelocityMetadata::FinalGasForce");
static_assert(offsetof(FNyxGlassVelocityMetadata, CalcMaxSpeedMultiplier) == 72, "Offset mismatch for FNyxGlassVelocityMetadata::CalcMaxSpeedMultiplier");
static_assert(offsetof(FNyxGlassVelocityMetadata, bCloseToAttachPoint) == 76, "Offset mismatch for FNyxGlassVelocityMetadata::bCloseToAttachPoint");
static_assert(offsetof(FNyxGlassVelocityMetadata, bPerformedHoverCalculation) == 77, "Offset mismatch for FNyxGlassVelocityMetadata::bPerformedHoverCalculation");
static_assert(offsetof(FNyxGlassVelocityMetadata, bReachedSlashTarget) == 78, "Offset mismatch for FNyxGlassVelocityMetadata::bReachedSlashTarget");
static_assert(offsetof(FNyxGlassVelocityMetadata, bShouldApplySlashDamage) == 79, "Offset mismatch for FNyxGlassVelocityMetadata::bShouldApplySlashDamage");
static_assert(offsetof(FNyxGlassVelocityMetadata, bShouldLeapBack) == 80, "Offset mismatch for FNyxGlassVelocityMetadata::bShouldLeapBack");
static_assert(offsetof(FNyxGlassVelocityMetadata, bFinishedLeapingBack) == 81, "Offset mismatch for FNyxGlassVelocityMetadata::bFinishedLeapingBack");
static_assert(offsetof(FNyxGlassVelocityMetadata, bCancelAttackSequence) == 82, "Offset mismatch for FNyxGlassVelocityMetadata::bCancelAttackSequence");

// /Script/DryBoxRuntime.NyxGlassFuelAttributeSet
// Kind: Class; super: FortAttributeSet
class UNyxGlassFuelAttributeSet
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t MaxFuel[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t Fuel[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t LocalFuel[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNyxGlassFuelAttributeSet, MaxFuel) == 80, "Offset mismatch for UNyxGlassFuelAttributeSet::MaxFuel");
static_assert(offsetof(UNyxGlassFuelAttributeSet, Fuel) == 120, "Offset mismatch for UNyxGlassFuelAttributeSet::Fuel");
static_assert(offsetof(UNyxGlassFuelAttributeSet, LocalFuel) == 160, "Offset mismatch for UNyxGlassFuelAttributeSet::LocalFuel");

// /Script/DryBoxRuntime.NyxGlassSwingingMovementControls
// Kind: Class; super: FortMovementControls
class UNyxGlassSwingingMovementControls
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MovementControlsTag[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNyxGlassSwingingMovementControls, MovementControlsTag) == 40, "Offset mismatch for UNyxGlassSwingingMovementControls::MovementControlsTag");

// /Script/DryBoxRuntime.NyxGlassWeaponComponent_Swinging
// Kind: Class; super: FortWeaponComponent_Swinging
class UNyxGlassWeaponComponent_Swinging
{
public:
    std::uint8_t Pad_0000[0x6B0]; // 0x0000
    std::uint8_t SwingTargetRaycastDist[0x28]; // 0x06B0 (Size: 0x28, Type: StructProperty)
    std::uint8_t AttackTargetRaycastDist[0x28]; // 0x06D8 (Size: 0x28, Type: StructProperty)
    std::uint8_t CameraDistScale[0x28]; // 0x0700 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetingSphereRadius[0x28]; // 0x0728 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxAttachPointActorBoundsSize[0x28]; // 0x0750 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxAttachPointActorExtent[0x28]; // 0x0778 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinAttachPointDistFromCamera[0x28]; // 0x07A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinAttachPointAngleInRad[0x28]; // 0x07C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxSecondAttachPointDotProd[0x28]; // 0x07F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t RayTraceTargetingCollisionChannel; // 0x0818 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SphereOverlapTargetingCollisionChannel; // 0x0819 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x6]; // 0x081A
    TArray<void*> DisallowedActorClasses; // 0x0820 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DirectRaycastDisallowedActorClasses; // 0x0830 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AllowedBuildingTypes; // 0x0840 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SwingingAutoDetachDist[0x28]; // 0x0850 (Size: 0x28, Type: StructProperty)
    std::uint8_t AttackStartSlashDist[0x28]; // 0x0878 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxAcceleration[0x28]; // 0x08A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t GasOrthogonalPowerWhileAttacking[0x28]; // 0x08C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t GasOrthogonalPowerWhileSwinging[0x28]; // 0x08F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t GasReelInPowerSwinging[0x28]; // 0x0918 (Size: 0x28, Type: StructProperty)
    std::uint8_t GasReelInPowerAttacking[0x28]; // 0x0940 (Size: 0x28, Type: StructProperty)
    std::uint8_t bShouldInterpolateCurGasToGoal[0x28]; // 0x0968 (Size: 0x28, Type: StructProperty)
    std::uint8_t GasForceInterpSpeed[0x28]; // 0x0990 (Size: 0x28, Type: StructProperty)
    std::uint8_t bShouldAccelerateWhileAttached[0x28]; // 0x09B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t UnattachedDeaccelerationMultiplier[0x28]; // 0x09E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t AttachedDeaccelerationMultiplier[0x28]; // 0x0A08 (Size: 0x28, Type: StructProperty)
    std::uint8_t TimeAttachedBeforeSpeedStartsIncreasing[0x28]; // 0x0A30 (Size: 0x28, Type: StructProperty)
    std::uint8_t TimeAttachedForMaxSpeed[0x28]; // 0x0A58 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinAttachedSpeedMultiplier[0x28]; // 0x0A80 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxAttachedSpeedMultiplier[0x28]; // 0x0AA8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinUnattachedSpeedMultiplier[0x28]; // 0x0AD0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxSpeedMultiplier[0x28]; // 0x0AF8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxSpeedDecreaseFromUpwardAngle[0x28]; // 0x0B20 (Size: 0x28, Type: StructProperty)
    void* SpeedBasedOnHeightCurve; // 0x0B48 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BaseSwingSpeed[0x28]; // 0x0B50 (Size: 0x28, Type: StructProperty)
    std::uint8_t InitialAccelerationStartSpeed[0x28]; // 0x0B78 (Size: 0x28, Type: StructProperty)
    std::uint8_t InitialAccelerationTime[0x28]; // 0x0BA0 (Size: 0x28, Type: StructProperty)
    void* InitialAccelerationCurve; // 0x0BC8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SpeedSoftCapDrag[0x28]; // 0x0BD0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedHardCapFailsafe[0x28]; // 0x0BF8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxHoverTime[0x28]; // 0x0C20 (Size: 0x28, Type: StructProperty)
    std::uint8_t FullHoverRechargeTime[0x28]; // 0x0C48 (Size: 0x28, Type: StructProperty)
    std::uint8_t DesiredHoverZSpeed[0x28]; // 0x0C70 (Size: 0x28, Type: StructProperty)
    std::uint8_t HoverZMultiplier[0x28]; // 0x0C98 (Size: 0x28, Type: StructProperty)
    std::uint8_t HoverTimeWhileUnequipped[0x28]; // 0x0CC0 (Size: 0x28, Type: StructProperty)
    std::uint8_t HoverZMultiplierWhileUnequipped[0x28]; // 0x0CE8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedSoftCapDragWhenHovering[0x28]; // 0x0D10 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxHoverSpeed[0x28]; // 0x0D38 (Size: 0x28, Type: StructProperty)
    std::uint8_t OldAttackDistanceXRange[0x28]; // 0x0D60 (Size: 0x28, Type: StructProperty)
    std::uint8_t OldAttackDistanceYRange[0x28]; // 0x0D88 (Size: 0x28, Type: StructProperty)
    std::uint8_t NewAttackDistanceXRange[0x28]; // 0x0DB0 (Size: 0x28, Type: StructProperty)
    std::uint8_t NewAttackDistanceYRange[0x28]; // 0x0DD8 (Size: 0x28, Type: StructProperty)
    void* AttackAccelerationCurve; // 0x0E00 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ReelInForceAttackMinDist[0x28]; // 0x0E08 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReelInForceAttackMaxDist[0x28]; // 0x0E30 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReelInForceAttackMinMult[0x28]; // 0x0E58 (Size: 0x28, Type: StructProperty)
    std::uint8_t ReelInForceAttackMaxMult[0x28]; // 0x0E80 (Size: 0x28, Type: StructProperty)
    std::uint8_t AttackStartSpeed[0x28]; // 0x0EA8 (Size: 0x28, Type: StructProperty)
    std::uint8_t AttackMaxSpeed[0x28]; // 0x0ED0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpeedSoftCapDragWhenAttacking[0x28]; // 0x0EF8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SlashLockDistance[0x28]; // 0x0F20 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinSlashDistToTarget[0x28]; // 0x0F48 (Size: 0x28, Type: StructProperty)
    std::uint8_t SlashSpeed[0x28]; // 0x0F70 (Size: 0x28, Type: StructProperty)
    std::uint8_t SlashLockTime[0x28]; // 0x0F98 (Size: 0x28, Type: StructProperty)
    std::uint8_t SlashLeapBackTime[0x28]; // 0x0FC0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SlashLeapBackHeightModifier[0x28]; // 0x0FE8 (Size: 0x28, Type: StructProperty)
    std::uint8_t SlashLeapBackSpeed[0x28]; // 0x1010 (Size: 0x28, Type: StructProperty)
    std::uint8_t OverrideSwingingControlParamsTag_Swinging[0x4]; // 0x1038 (Size: 0x4, Type: StructProperty)
    std::uint8_t OverrideSwingingControlParamsTag_Hovering[0x4]; // 0x103C (Size: 0x4, Type: StructProperty)
    std::uint8_t OverrideSwingingControlParamsTag_Attacking[0x4]; // 0x1040 (Size: 0x4, Type: StructProperty)
    std::uint8_t OverrideSwingingControlParamsTag_LeapingBack[0x4]; // 0x1044 (Size: 0x4, Type: StructProperty)
    std::uint8_t LeapingBack_OverrideTimer[0x28]; // 0x1048 (Size: 0x28, Type: StructProperty)
    std::uint8_t ActorHasPreferredSwingMeshTag[0x4]; // 0x1070 (Size: 0x4, Type: NameProperty)
    std::uint8_t ComponentIsPreferredSwingMeshTag[0x4]; // 0x1074 (Size: 0x4, Type: NameProperty)
    std::uint8_t bUsingDirectRaycast; // 0x1078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x1079
    std::uint8_t CurTargetingData[0x1]; // 0x1080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SwingTargetRaycastDist) == 1712, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::SwingTargetRaycastDist");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, AttackTargetRaycastDist) == 1752, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::AttackTargetRaycastDist");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, CameraDistScale) == 1792, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::CameraDistScale");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, TargetingSphereRadius) == 1832, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::TargetingSphereRadius");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MaxAttachPointActorBoundsSize) == 1872, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::MaxAttachPointActorBoundsSize");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MaxAttachPointActorExtent) == 1912, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::MaxAttachPointActorExtent");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MinAttachPointDistFromCamera) == 1952, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::MinAttachPointDistFromCamera");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MinAttachPointAngleInRad) == 1992, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::MinAttachPointAngleInRad");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MaxSecondAttachPointDotProd) == 2032, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::MaxSecondAttachPointDotProd");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, RayTraceTargetingCollisionChannel) == 2072, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::RayTraceTargetingCollisionChannel");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SphereOverlapTargetingCollisionChannel) == 2073, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::SphereOverlapTargetingCollisionChannel");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, DisallowedActorClasses) == 2080, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::DisallowedActorClasses");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, DirectRaycastDisallowedActorClasses) == 2096, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::DirectRaycastDisallowedActorClasses");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, AllowedBuildingTypes) == 2112, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::AllowedBuildingTypes");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SwingingAutoDetachDist) == 2128, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::SwingingAutoDetachDist");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, AttackStartSlashDist) == 2168, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::AttackStartSlashDist");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MaxAcceleration) == 2208, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::MaxAcceleration");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, GasOrthogonalPowerWhileAttacking) == 2248, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::GasOrthogonalPowerWhileAttacking");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, GasOrthogonalPowerWhileSwinging) == 2288, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::GasOrthogonalPowerWhileSwinging");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, GasReelInPowerSwinging) == 2328, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::GasReelInPowerSwinging");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, GasReelInPowerAttacking) == 2368, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::GasReelInPowerAttacking");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, bShouldInterpolateCurGasToGoal) == 2408, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::bShouldInterpolateCurGasToGoal");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, GasForceInterpSpeed) == 2448, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::GasForceInterpSpeed");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, bShouldAccelerateWhileAttached) == 2488, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::bShouldAccelerateWhileAttached");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, UnattachedDeaccelerationMultiplier) == 2528, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::UnattachedDeaccelerationMultiplier");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, AttachedDeaccelerationMultiplier) == 2568, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::AttachedDeaccelerationMultiplier");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, TimeAttachedBeforeSpeedStartsIncreasing) == 2608, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::TimeAttachedBeforeSpeedStartsIncreasing");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, TimeAttachedForMaxSpeed) == 2648, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::TimeAttachedForMaxSpeed");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MinAttachedSpeedMultiplier) == 2688, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::MinAttachedSpeedMultiplier");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MaxAttachedSpeedMultiplier) == 2728, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::MaxAttachedSpeedMultiplier");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MinUnattachedSpeedMultiplier) == 2768, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::MinUnattachedSpeedMultiplier");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MaxSpeedMultiplier) == 2808, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::MaxSpeedMultiplier");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MaxSpeedDecreaseFromUpwardAngle) == 2848, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::MaxSpeedDecreaseFromUpwardAngle");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SpeedBasedOnHeightCurve) == 2888, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::SpeedBasedOnHeightCurve");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, BaseSwingSpeed) == 2896, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::BaseSwingSpeed");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, InitialAccelerationStartSpeed) == 2936, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::InitialAccelerationStartSpeed");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, InitialAccelerationTime) == 2976, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::InitialAccelerationTime");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, InitialAccelerationCurve) == 3016, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::InitialAccelerationCurve");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SpeedSoftCapDrag) == 3024, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::SpeedSoftCapDrag");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SpeedHardCapFailsafe) == 3064, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::SpeedHardCapFailsafe");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MaxHoverTime) == 3104, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::MaxHoverTime");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, FullHoverRechargeTime) == 3144, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::FullHoverRechargeTime");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, DesiredHoverZSpeed) == 3184, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::DesiredHoverZSpeed");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, HoverZMultiplier) == 3224, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::HoverZMultiplier");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, HoverTimeWhileUnequipped) == 3264, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::HoverTimeWhileUnequipped");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, HoverZMultiplierWhileUnequipped) == 3304, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::HoverZMultiplierWhileUnequipped");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SpeedSoftCapDragWhenHovering) == 3344, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::SpeedSoftCapDragWhenHovering");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MaxHoverSpeed) == 3384, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::MaxHoverSpeed");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, OldAttackDistanceXRange) == 3424, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::OldAttackDistanceXRange");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, OldAttackDistanceYRange) == 3464, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::OldAttackDistanceYRange");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, NewAttackDistanceXRange) == 3504, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::NewAttackDistanceXRange");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, NewAttackDistanceYRange) == 3544, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::NewAttackDistanceYRange");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, AttackAccelerationCurve) == 3584, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::AttackAccelerationCurve");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, ReelInForceAttackMinDist) == 3592, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::ReelInForceAttackMinDist");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, ReelInForceAttackMaxDist) == 3632, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::ReelInForceAttackMaxDist");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, ReelInForceAttackMinMult) == 3672, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::ReelInForceAttackMinMult");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, ReelInForceAttackMaxMult) == 3712, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::ReelInForceAttackMaxMult");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, AttackStartSpeed) == 3752, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::AttackStartSpeed");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, AttackMaxSpeed) == 3792, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::AttackMaxSpeed");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SpeedSoftCapDragWhenAttacking) == 3832, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::SpeedSoftCapDragWhenAttacking");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SlashLockDistance) == 3872, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::SlashLockDistance");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, MinSlashDistToTarget) == 3912, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::MinSlashDistToTarget");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SlashSpeed) == 3952, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::SlashSpeed");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SlashLockTime) == 3992, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::SlashLockTime");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SlashLeapBackTime) == 4032, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::SlashLeapBackTime");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SlashLeapBackHeightModifier) == 4072, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::SlashLeapBackHeightModifier");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, SlashLeapBackSpeed) == 4112, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::SlashLeapBackSpeed");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, OverrideSwingingControlParamsTag_Swinging) == 4152, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::OverrideSwingingControlParamsTag_Swinging");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, OverrideSwingingControlParamsTag_Hovering) == 4156, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::OverrideSwingingControlParamsTag_Hovering");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, OverrideSwingingControlParamsTag_Attacking) == 4160, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::OverrideSwingingControlParamsTag_Attacking");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, OverrideSwingingControlParamsTag_LeapingBack) == 4164, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::OverrideSwingingControlParamsTag_LeapingBack");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, LeapingBack_OverrideTimer) == 4168, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::LeapingBack_OverrideTimer");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, ActorHasPreferredSwingMeshTag) == 4208, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::ActorHasPreferredSwingMeshTag");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, ComponentIsPreferredSwingMeshTag) == 4212, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::ComponentIsPreferredSwingMeshTag");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, bUsingDirectRaycast) == 4216, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::bUsingDirectRaycast");
static_assert(offsetof(UNyxGlassWeaponComponent_Swinging, CurTargetingData) == 4224, "Offset mismatch for UNyxGlassWeaponComponent_Swinging::CurTargetingData");
