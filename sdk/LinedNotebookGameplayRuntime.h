/**
 * decamp dumper generated SDK
 * Package: /Script/LinedNotebookGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/LinedNotebookGameplayRuntime.LinedNotebookItemLayerAnimInstance
// Kind: Class; super: FortItemLayerAnimInstance
class ULinedNotebookItemLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x5E0]; // 0x0000
    std::uint8_t IsInAirAttackTag[0x4]; // 0x05E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t IsDoubleJumpingTag[0x4]; // 0x05E4 (Size: 0x4, Type: StructProperty)
    std::uint8_t IsSurfaceSwimmingTag[0x4]; // 0x05E8 (Size: 0x4, Type: StructProperty)
    std::uint8_t IsRidingMotorcycleTag[0x4]; // 0x05EC (Size: 0x4, Type: StructProperty)
    std::uint8_t IsGrindRailTag[0x8]; // 0x05F0 (Size: 0x8, Type: StructProperty)
    void* DoubleJumpSequenceForward; // 0x05F8 (Size: 0x8, Type: ObjectProperty)
    void* DoubleJumpSequenceBackward; // 0x0600 (Size: 0x8, Type: ObjectProperty)
    void* DoubleJumpSequenceLeft; // 0x0608 (Size: 0x8, Type: ObjectProperty)
    void* DoubleJumpSequenceRight; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    void* EvergreenMotorcyclePose; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    void* EvergreenSlidingPose; // 0x0620 (Size: 0x8, Type: ObjectProperty)
    void* EvergreenGrindRailPose; // 0x0628 (Size: 0x8, Type: ObjectProperty)
    void* TacSprintHandPose; // 0x0630 (Size: 0x8, Type: ObjectProperty)
    void* SwimUpperBodyAdditivePoseOffset; // 0x0638 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DashMontage[0x20]; // 0x0640 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DeltaEquipMontage[0x20]; // 0x0660 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> SwingMontages; // 0x0680 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DeltaEquipBlendOut[0x10]; // 0x0690 (Size: 0x10, Type: StructProperty)
    std::uint8_t bUseOceanRiverTacSprint; // 0x06A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseDeltaTacSprint; // 0x06A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDelta; // 0x06A2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSurfaceSwimming; // 0x06A3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x06A4
    void* DoubleJumpSequence; // 0x06A8 (Size: 0x8, Type: ObjectProperty)
    void* EvergreenPose; // 0x06B0 (Size: 0x8, Type: ObjectProperty)
    float Yaw; // 0x06B8 (Size: 0x4, Type: FloatProperty)
    float YawAdjusted; // 0x06BC (Size: 0x4, Type: FloatProperty)
    float Pitch; // 0x06C0 (Size: 0x4, Type: FloatProperty)
    float RotationAlpha; // 0x06C4 (Size: 0x4, Type: FloatProperty)
    float DeltaDoorBashRightArmAlpha; // 0x06C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsDashLoop; // 0x06CC (Size: 0x1, Type: BoolProperty)
    // 0x06CC BoolProperty bIsDeltaWaterJump (shared storage)
    // 0x06CC BoolProperty bIsDoubleJumpStart (shared storage)
    // 0x06CC BoolProperty bIsDoubleJumping (shared storage)
    // 0x06CC BoolProperty bIsExitDoubleJump (shared storage)
    // 0x06CC BoolProperty bIsNoDashOrDoubleJump (shared storage)
    // 0x06CC BoolProperty bIsNotDeltaSwimJump (shared storage)
    // 0x06CC BoolProperty bIsWaterLanding (shared storage)
    std::uint8_t bIsDeltaTacSprint; // 0x06CD (Size: 0x1, Type: BoolProperty)
    // 0x06CD BoolProperty bIsDolphinDoubleJump (shared storage)
    // 0x06CD BoolProperty bIsEvergreenUB (shared storage)
    // 0x06CD BoolProperty bIsOceanRiverTacSprint (shared storage)
    // 0x06CD BoolProperty bIsParachuting (shared storage)
};

static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, IsInAirAttackTag) == 1504, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::IsInAirAttackTag");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, IsDoubleJumpingTag) == 1508, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::IsDoubleJumpingTag");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, IsSurfaceSwimmingTag) == 1512, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::IsSurfaceSwimmingTag");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, IsRidingMotorcycleTag) == 1516, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::IsRidingMotorcycleTag");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, IsGrindRailTag) == 1520, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::IsGrindRailTag");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, DoubleJumpSequenceForward) == 1528, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::DoubleJumpSequenceForward");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, DoubleJumpSequenceBackward) == 1536, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::DoubleJumpSequenceBackward");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, DoubleJumpSequenceLeft) == 1544, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::DoubleJumpSequenceLeft");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, DoubleJumpSequenceRight) == 1552, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::DoubleJumpSequenceRight");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, EvergreenMotorcyclePose) == 1560, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::EvergreenMotorcyclePose");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, EvergreenSlidingPose) == 1568, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::EvergreenSlidingPose");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, EvergreenGrindRailPose) == 1576, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::EvergreenGrindRailPose");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, TacSprintHandPose) == 1584, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::TacSprintHandPose");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, SwimUpperBodyAdditivePoseOffset) == 1592, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::SwimUpperBodyAdditivePoseOffset");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, DashMontage) == 1600, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::DashMontage");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, DeltaEquipMontage) == 1632, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::DeltaEquipMontage");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, SwingMontages) == 1664, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::SwingMontages");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, DeltaEquipBlendOut) == 1680, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::DeltaEquipBlendOut");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, bUseOceanRiverTacSprint) == 1696, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::bUseOceanRiverTacSprint");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, bUseDeltaTacSprint) == 1697, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::bUseDeltaTacSprint");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, bIsDelta) == 1698, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::bIsDelta");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, bIsSurfaceSwimming) == 1699, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::bIsSurfaceSwimming");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, DoubleJumpSequence) == 1704, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::DoubleJumpSequence");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, EvergreenPose) == 1712, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::EvergreenPose");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, Yaw) == 1720, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::Yaw");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, YawAdjusted) == 1724, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::YawAdjusted");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, Pitch) == 1728, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::Pitch");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, RotationAlpha) == 1732, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::RotationAlpha");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, DeltaDoorBashRightArmAlpha) == 1736, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::DeltaDoorBashRightArmAlpha");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, bIsDashLoop) == 1740, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::bIsDashLoop");
static_assert(offsetof(ULinedNotebookItemLayerAnimInstance, bIsDeltaTacSprint) == 1741, "Offset mismatch for ULinedNotebookItemLayerAnimInstance::bIsDeltaTacSprint");

// /Script/LinedNotebookGameplayRuntime.LinedNotebookLakeWeaponAnimInstance
// Kind: Class; super: FortWeaponAnimInstance
class ULinedNotebookLakeWeaponAnimInstance
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    TArray<void*> Swing01Montages; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Swing02Montages; // 0x0370 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Swing03Montages; // 0x0380 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Swing04Montages; // 0x0390 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Swing05Montages; // 0x03A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UpperBodySwing01Montages; // 0x03B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UpperBodySwing02Montages; // 0x03C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InAirAttackMontages; // 0x03D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsEquipping; // 0x03E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSwing01; // 0x03E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSwing02; // 0x03E2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSwing03; // 0x03E3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSwing04; // 0x03E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSwing05; // 0x03E5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsUpperBodySwing01; // 0x03E6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsUpperBodySwing02; // 0x03E7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAirLand; // 0x03E8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULinedNotebookLakeWeaponAnimInstance, Swing01Montages) == 864, "Offset mismatch for ULinedNotebookLakeWeaponAnimInstance::Swing01Montages");
static_assert(offsetof(ULinedNotebookLakeWeaponAnimInstance, Swing02Montages) == 880, "Offset mismatch for ULinedNotebookLakeWeaponAnimInstance::Swing02Montages");
static_assert(offsetof(ULinedNotebookLakeWeaponAnimInstance, Swing03Montages) == 896, "Offset mismatch for ULinedNotebookLakeWeaponAnimInstance::Swing03Montages");
static_assert(offsetof(ULinedNotebookLakeWeaponAnimInstance, Swing04Montages) == 912, "Offset mismatch for ULinedNotebookLakeWeaponAnimInstance::Swing04Montages");
static_assert(offsetof(ULinedNotebookLakeWeaponAnimInstance, Swing05Montages) == 928, "Offset mismatch for ULinedNotebookLakeWeaponAnimInstance::Swing05Montages");
static_assert(offsetof(ULinedNotebookLakeWeaponAnimInstance, UpperBodySwing01Montages) == 944, "Offset mismatch for ULinedNotebookLakeWeaponAnimInstance::UpperBodySwing01Montages");
static_assert(offsetof(ULinedNotebookLakeWeaponAnimInstance, UpperBodySwing02Montages) == 960, "Offset mismatch for ULinedNotebookLakeWeaponAnimInstance::UpperBodySwing02Montages");
static_assert(offsetof(ULinedNotebookLakeWeaponAnimInstance, InAirAttackMontages) == 976, "Offset mismatch for ULinedNotebookLakeWeaponAnimInstance::InAirAttackMontages");
static_assert(offsetof(ULinedNotebookLakeWeaponAnimInstance, bIsEquipping) == 992, "Offset mismatch for ULinedNotebookLakeWeaponAnimInstance::bIsEquipping");
static_assert(offsetof(ULinedNotebookLakeWeaponAnimInstance, bSwing01) == 993, "Offset mismatch for ULinedNotebookLakeWeaponAnimInstance::bSwing01");
static_assert(offsetof(ULinedNotebookLakeWeaponAnimInstance, bSwing02) == 994, "Offset mismatch for ULinedNotebookLakeWeaponAnimInstance::bSwing02");
static_assert(offsetof(ULinedNotebookLakeWeaponAnimInstance, bSwing03) == 995, "Offset mismatch for ULinedNotebookLakeWeaponAnimInstance::bSwing03");
static_assert(offsetof(ULinedNotebookLakeWeaponAnimInstance, bSwing04) == 996, "Offset mismatch for ULinedNotebookLakeWeaponAnimInstance::bSwing04");
static_assert(offsetof(ULinedNotebookLakeWeaponAnimInstance, bSwing05) == 997, "Offset mismatch for ULinedNotebookLakeWeaponAnimInstance::bSwing05");
static_assert(offsetof(ULinedNotebookLakeWeaponAnimInstance, bIsUpperBodySwing01) == 998, "Offset mismatch for ULinedNotebookLakeWeaponAnimInstance::bIsUpperBodySwing01");
static_assert(offsetof(ULinedNotebookLakeWeaponAnimInstance, bIsUpperBodySwing02) == 999, "Offset mismatch for ULinedNotebookLakeWeaponAnimInstance::bIsUpperBodySwing02");
static_assert(offsetof(ULinedNotebookLakeWeaponAnimInstance, bIsAirLand) == 1000, "Offset mismatch for ULinedNotebookLakeWeaponAnimInstance::bIsAirLand");

// /Script/LinedNotebookGameplayRuntime.LinedNotebookRiverWeaponAnimInstance
// Kind: Class; super: FortWeaponAnimInstance
class ULinedNotebookRiverWeaponAnimInstance
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    TArray<void*> InAirMontages; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsAirLand; // 0x0370 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULinedNotebookRiverWeaponAnimInstance, InAirMontages) == 864, "Offset mismatch for ULinedNotebookRiverWeaponAnimInstance::InAirMontages");
static_assert(offsetof(ULinedNotebookRiverWeaponAnimInstance, bIsAirLand) == 880, "Offset mismatch for ULinedNotebookRiverWeaponAnimInstance::bIsAirLand");
