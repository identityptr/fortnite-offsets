/**
 * decamp dumper generated SDK
 * Package: /DentureSay/Gameplay/Secondary/FMM_GuidedMotion_Float_DentureSay
 */
#pragma once
#include "Basic.h"

// /DentureSay/Gameplay/Secondary/FMM_GuidedMotion_Float_DentureSay.FMM_GuidedMotion_Float_DentureSay_C
// Kind: BlueprintGeneratedClass; super: none
class UFMM_GuidedMotion_Float_DentureSay_C
{
public:
    std::uint8_t Pad_0000[0x5A0]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x05A0 (Size: 0x8, Type: StructProperty)
    std::uint8_t Row_LeapDuration[0x28]; // 0x05A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t Row_VerticalLaunchMagnitude[0x28]; // 0x05D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t Row_HorizontalLaunchMagnitude[0x28]; // 0x05F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t HorizontalLaunchMagnitudeUsesCharge; // 0x0620 (Size: 0x1, Type: BoolProperty)
    std::uint8_t VerticalLaunchMagnitudeUsesCharge; // 0x0621 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BaseLaunchDirectionOnAcceleration; // 0x0622 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ZeroAccelerationAssumesForward; // 0x0623 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LeapType; // 0x0624 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0625
    std::uint8_t Row_HorizontalVelocityPercentMaintained[0x28]; // 0x0628 (Size: 0x28, Type: StructProperty)
    std::uint8_t Row_VertitcalVelocityPercentMaintained[0x28]; // 0x0650 (Size: 0x28, Type: StructProperty)
    std::uint8_t VerticalVelocityMustMatchImpulse; // 0x0678 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0679
    std::uint8_t CalculatedForce[0x18]; // 0x0680 (Size: 0x18, Type: StructProperty)
    std::int32_t OptionalFloatIndex_ChargeMultiplier; // 0x0698 (Size: 0x4, Type: IntProperty)
    std::int32_t OptionalFloatIndex_PredictiveLaunchVelocity; // 0x069C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFMM_GuidedMotion_Float_DentureSay_C, UberGraphFrame) == 1440, "Offset mismatch for UFMM_GuidedMotion_Float_DentureSay_C::UberGraphFrame");
static_assert(offsetof(UFMM_GuidedMotion_Float_DentureSay_C, Row_LeapDuration) == 1448, "Offset mismatch for UFMM_GuidedMotion_Float_DentureSay_C::Row_LeapDuration");
static_assert(offsetof(UFMM_GuidedMotion_Float_DentureSay_C, Row_VerticalLaunchMagnitude) == 1488, "Offset mismatch for UFMM_GuidedMotion_Float_DentureSay_C::Row_VerticalLaunchMagnitude");
static_assert(offsetof(UFMM_GuidedMotion_Float_DentureSay_C, Row_HorizontalLaunchMagnitude) == 1528, "Offset mismatch for UFMM_GuidedMotion_Float_DentureSay_C::Row_HorizontalLaunchMagnitude");
static_assert(offsetof(UFMM_GuidedMotion_Float_DentureSay_C, HorizontalLaunchMagnitudeUsesCharge) == 1568, "Offset mismatch for UFMM_GuidedMotion_Float_DentureSay_C::HorizontalLaunchMagnitudeUsesCharge");
static_assert(offsetof(UFMM_GuidedMotion_Float_DentureSay_C, VerticalLaunchMagnitudeUsesCharge) == 1569, "Offset mismatch for UFMM_GuidedMotion_Float_DentureSay_C::VerticalLaunchMagnitudeUsesCharge");
static_assert(offsetof(UFMM_GuidedMotion_Float_DentureSay_C, BaseLaunchDirectionOnAcceleration) == 1570, "Offset mismatch for UFMM_GuidedMotion_Float_DentureSay_C::BaseLaunchDirectionOnAcceleration");
static_assert(offsetof(UFMM_GuidedMotion_Float_DentureSay_C, ZeroAccelerationAssumesForward) == 1571, "Offset mismatch for UFMM_GuidedMotion_Float_DentureSay_C::ZeroAccelerationAssumesForward");
static_assert(offsetof(UFMM_GuidedMotion_Float_DentureSay_C, LeapType) == 1572, "Offset mismatch for UFMM_GuidedMotion_Float_DentureSay_C::LeapType");
static_assert(offsetof(UFMM_GuidedMotion_Float_DentureSay_C, Row_HorizontalVelocityPercentMaintained) == 1576, "Offset mismatch for UFMM_GuidedMotion_Float_DentureSay_C::Row_HorizontalVelocityPercentMaintained");
static_assert(offsetof(UFMM_GuidedMotion_Float_DentureSay_C, Row_VertitcalVelocityPercentMaintained) == 1616, "Offset mismatch for UFMM_GuidedMotion_Float_DentureSay_C::Row_VertitcalVelocityPercentMaintained");
static_assert(offsetof(UFMM_GuidedMotion_Float_DentureSay_C, VerticalVelocityMustMatchImpulse) == 1656, "Offset mismatch for UFMM_GuidedMotion_Float_DentureSay_C::VerticalVelocityMustMatchImpulse");
static_assert(offsetof(UFMM_GuidedMotion_Float_DentureSay_C, CalculatedForce) == 1664, "Offset mismatch for UFMM_GuidedMotion_Float_DentureSay_C::CalculatedForce");
static_assert(offsetof(UFMM_GuidedMotion_Float_DentureSay_C, OptionalFloatIndex_ChargeMultiplier) == 1688, "Offset mismatch for UFMM_GuidedMotion_Float_DentureSay_C::OptionalFloatIndex_ChargeMultiplier");
static_assert(offsetof(UFMM_GuidedMotion_Float_DentureSay_C, OptionalFloatIndex_PredictiveLaunchVelocity) == 1692, "Offset mismatch for UFMM_GuidedMotion_Float_DentureSay_C::OptionalFloatIndex_PredictiveLaunchVelocity");
