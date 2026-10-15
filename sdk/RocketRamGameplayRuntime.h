/**
 * decamp dumper generated SDK
 * Package: /Script/RocketRamGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/RocketRamGameplayRuntime.RocketRamItemLayerAnimInstance
// Kind: Class; super: FortItemLayerAnimInstance
class URocketRamItemLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x5E0]; // 0x0000
    std::uint8_t bIsRRWindUp; // 0x05E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRRSlowAcceleration; // 0x05E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRRActiveThrust; // 0x05E2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRRFreeFall; // 0x05E3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRRFastFreeFall; // 0x05E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRRBraking; // 0x05E5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRRRecovery; // 0x05E6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRRRecoveryDelayed; // 0x05E7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRRRecoveryHalfSecDelay; // 0x05E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsRROff; // 0x05E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFalling; // 0x05EA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSliding; // 0x05EB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsCrouchingLocal; // 0x05EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x05ED
    float XInput; // 0x05F0 (Size: 0x4, Type: FloatProperty)
    float YInput; // 0x05F4 (Size: 0x4, Type: FloatProperty)
    float Pitch; // 0x05F8 (Size: 0x4, Type: FloatProperty)
    float Yaw; // 0x05FC (Size: 0x4, Type: FloatProperty)
    float WallImpactPitch; // 0x0600 (Size: 0x4, Type: FloatProperty)
    float WallImpactYaw; // 0x0604 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WeaponLaunchDirection[0x18]; // 0x0608 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsBoneRotOn; // 0x0620 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPitchAndYawRot; // 0x0621 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsNoMortar; // 0x0622 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsGoingUp; // 0x0623 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsJumpFromGround; // 0x0624 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMoving2DLocal; // 0x0625 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0626
    float AdditiveSquatAlpha; // 0x0628 (Size: 0x4, Type: FloatProperty)
    float JumpAddCurveAlpha; // 0x062C (Size: 0x4, Type: FloatProperty)
    float ArmsHeadAddAlpha; // 0x0630 (Size: 0x4, Type: FloatProperty)
    float JumpAddOffsetAlpha; // 0x0634 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsImpactWallBackup; // 0x0638 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLandingDetected; // 0x0639 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsWallImpact; // 0x063A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsApexTimerEnd; // 0x063B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x4]; // 0x063C
    void* FortPlayerPawn; // 0x0640 (Size: 0x8, Type: ObjectProperty)
    void* WeaponRocketRam; // 0x0648 (Size: 0x8, Type: ObjectProperty)
    float FBImpactGroundStateAlpha; // 0x0650 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFBGroundSlideToFBWait; // 0x0654 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFBThrustingToFBApex; // 0x0655 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFBApexToFBToMortar; // 0x0656 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFBOffGroundToFBImpactGround; // 0x0657 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFBOffWallToFBImpactWall; // 0x0658 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFBDetectGroundToFBToImpactGround; // 0x0659 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x065A
    float FBJumpStateAlpha; // 0x065C (Size: 0x4, Type: FloatProperty)
    float FBToApexStateAlpha; // 0x0660 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFBDetectSlideToFBToSlide; // 0x0664 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFBOffToFBWait; // 0x0665 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x0666
    float UBPullLeverStateAlpha; // 0x0668 (Size: 0x4, Type: FloatProperty)
    float UBSquatStateAlpha; // 0x066C (Size: 0x4, Type: FloatProperty)
    float UBJumpStateAlpha; // 0x0670 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUBSquatToUBJump; // 0x0674 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUBJumpToUBWait; // 0x0675 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUBJumpToUBToGroundImpact; // 0x0676 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUBWaitToUBImpactGround; // 0x0677 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUBOffToUBWait; // 0x0678 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsRRWindUp) == 1504, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsRRWindUp");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsRRSlowAcceleration) == 1505, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsRRSlowAcceleration");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsRRActiveThrust) == 1506, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsRRActiveThrust");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsRRFreeFall) == 1507, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsRRFreeFall");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsRRFastFreeFall) == 1508, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsRRFastFreeFall");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsRRBraking) == 1509, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsRRBraking");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsRRRecovery) == 1510, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsRRRecovery");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsRRRecoveryDelayed) == 1511, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsRRRecoveryDelayed");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsRRRecoveryHalfSecDelay) == 1512, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsRRRecoveryHalfSecDelay");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsRROff) == 1513, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsRROff");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsFalling) == 1514, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsFalling");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsSliding) == 1515, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsSliding");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsCrouchingLocal) == 1516, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsCrouchingLocal");
static_assert(offsetof(URocketRamItemLayerAnimInstance, XInput) == 1520, "Offset mismatch for URocketRamItemLayerAnimInstance::XInput");
static_assert(offsetof(URocketRamItemLayerAnimInstance, YInput) == 1524, "Offset mismatch for URocketRamItemLayerAnimInstance::YInput");
static_assert(offsetof(URocketRamItemLayerAnimInstance, Pitch) == 1528, "Offset mismatch for URocketRamItemLayerAnimInstance::Pitch");
static_assert(offsetof(URocketRamItemLayerAnimInstance, Yaw) == 1532, "Offset mismatch for URocketRamItemLayerAnimInstance::Yaw");
static_assert(offsetof(URocketRamItemLayerAnimInstance, WallImpactPitch) == 1536, "Offset mismatch for URocketRamItemLayerAnimInstance::WallImpactPitch");
static_assert(offsetof(URocketRamItemLayerAnimInstance, WallImpactYaw) == 1540, "Offset mismatch for URocketRamItemLayerAnimInstance::WallImpactYaw");
static_assert(offsetof(URocketRamItemLayerAnimInstance, WeaponLaunchDirection) == 1544, "Offset mismatch for URocketRamItemLayerAnimInstance::WeaponLaunchDirection");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsBoneRotOn) == 1568, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsBoneRotOn");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsPitchAndYawRot) == 1569, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsPitchAndYawRot");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsNoMortar) == 1570, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsNoMortar");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsGoingUp) == 1571, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsGoingUp");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsJumpFromGround) == 1572, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsJumpFromGround");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsMoving2DLocal) == 1573, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsMoving2DLocal");
static_assert(offsetof(URocketRamItemLayerAnimInstance, AdditiveSquatAlpha) == 1576, "Offset mismatch for URocketRamItemLayerAnimInstance::AdditiveSquatAlpha");
static_assert(offsetof(URocketRamItemLayerAnimInstance, JumpAddCurveAlpha) == 1580, "Offset mismatch for URocketRamItemLayerAnimInstance::JumpAddCurveAlpha");
static_assert(offsetof(URocketRamItemLayerAnimInstance, ArmsHeadAddAlpha) == 1584, "Offset mismatch for URocketRamItemLayerAnimInstance::ArmsHeadAddAlpha");
static_assert(offsetof(URocketRamItemLayerAnimInstance, JumpAddOffsetAlpha) == 1588, "Offset mismatch for URocketRamItemLayerAnimInstance::JumpAddOffsetAlpha");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsImpactWallBackup) == 1592, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsImpactWallBackup");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsLandingDetected) == 1593, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsLandingDetected");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsWallImpact) == 1594, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsWallImpact");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bIsApexTimerEnd) == 1595, "Offset mismatch for URocketRamItemLayerAnimInstance::bIsApexTimerEnd");
static_assert(offsetof(URocketRamItemLayerAnimInstance, FortPlayerPawn) == 1600, "Offset mismatch for URocketRamItemLayerAnimInstance::FortPlayerPawn");
static_assert(offsetof(URocketRamItemLayerAnimInstance, WeaponRocketRam) == 1608, "Offset mismatch for URocketRamItemLayerAnimInstance::WeaponRocketRam");
static_assert(offsetof(URocketRamItemLayerAnimInstance, FBImpactGroundStateAlpha) == 1616, "Offset mismatch for URocketRamItemLayerAnimInstance::FBImpactGroundStateAlpha");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bFBGroundSlideToFBWait) == 1620, "Offset mismatch for URocketRamItemLayerAnimInstance::bFBGroundSlideToFBWait");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bFBThrustingToFBApex) == 1621, "Offset mismatch for URocketRamItemLayerAnimInstance::bFBThrustingToFBApex");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bFBApexToFBToMortar) == 1622, "Offset mismatch for URocketRamItemLayerAnimInstance::bFBApexToFBToMortar");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bFBOffGroundToFBImpactGround) == 1623, "Offset mismatch for URocketRamItemLayerAnimInstance::bFBOffGroundToFBImpactGround");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bFBOffWallToFBImpactWall) == 1624, "Offset mismatch for URocketRamItemLayerAnimInstance::bFBOffWallToFBImpactWall");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bFBDetectGroundToFBToImpactGround) == 1625, "Offset mismatch for URocketRamItemLayerAnimInstance::bFBDetectGroundToFBToImpactGround");
static_assert(offsetof(URocketRamItemLayerAnimInstance, FBJumpStateAlpha) == 1628, "Offset mismatch for URocketRamItemLayerAnimInstance::FBJumpStateAlpha");
static_assert(offsetof(URocketRamItemLayerAnimInstance, FBToApexStateAlpha) == 1632, "Offset mismatch for URocketRamItemLayerAnimInstance::FBToApexStateAlpha");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bFBDetectSlideToFBToSlide) == 1636, "Offset mismatch for URocketRamItemLayerAnimInstance::bFBDetectSlideToFBToSlide");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bFBOffToFBWait) == 1637, "Offset mismatch for URocketRamItemLayerAnimInstance::bFBOffToFBWait");
static_assert(offsetof(URocketRamItemLayerAnimInstance, UBPullLeverStateAlpha) == 1640, "Offset mismatch for URocketRamItemLayerAnimInstance::UBPullLeverStateAlpha");
static_assert(offsetof(URocketRamItemLayerAnimInstance, UBSquatStateAlpha) == 1644, "Offset mismatch for URocketRamItemLayerAnimInstance::UBSquatStateAlpha");
static_assert(offsetof(URocketRamItemLayerAnimInstance, UBJumpStateAlpha) == 1648, "Offset mismatch for URocketRamItemLayerAnimInstance::UBJumpStateAlpha");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bUBSquatToUBJump) == 1652, "Offset mismatch for URocketRamItemLayerAnimInstance::bUBSquatToUBJump");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bUBJumpToUBWait) == 1653, "Offset mismatch for URocketRamItemLayerAnimInstance::bUBJumpToUBWait");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bUBJumpToUBToGroundImpact) == 1654, "Offset mismatch for URocketRamItemLayerAnimInstance::bUBJumpToUBToGroundImpact");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bUBWaitToUBImpactGround) == 1655, "Offset mismatch for URocketRamItemLayerAnimInstance::bUBWaitToUBImpactGround");
static_assert(offsetof(URocketRamItemLayerAnimInstance, bUBOffToUBWait) == 1656, "Offset mismatch for URocketRamItemLayerAnimInstance::bUBOffToUBWait");
