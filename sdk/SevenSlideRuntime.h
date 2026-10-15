/**
 * decamp dumper generated SDK
 * Package: /Script/SevenSlideRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SevenSlideRuntime.FortMovementMode_SevenSlideGuidedMotion
// Kind: Class; super: FortMovementMode_ExtGuidedMotion
class UFortMovementMode_SevenSlideGuidedMotion
{
public:
    std::uint8_t Pad_0000[0x5A0]; // 0x0000
    std::uint8_t HangTimeTag[0x4]; // 0x05A0 (Size: 0x4, Type: StructProperty)
    std::uint8_t HangTimeBlendOutTag[0x4]; // 0x05A4 (Size: 0x4, Type: StructProperty)
    std::uint8_t TagsRequiredOnceEstablished[0x20]; // 0x05A8 (Size: 0x20, Type: StructProperty)
    std::uint8_t ExistingVerticalSpeedContributionPercent[0x30]; // 0x05C8 (Size: 0x30, Type: StructProperty)
    std::uint8_t BaseSpeed[0x30]; // 0x05F8 (Size: 0x30, Type: StructProperty)
    std::uint8_t TurnDegreesPerSecond[0x30]; // 0x0628 (Size: 0x30, Type: StructProperty)
    std::uint8_t EnableSlopeCalculation[0x30]; // 0x0658 (Size: 0x30, Type: StructProperty)
    std::uint8_t SlopeMin[0x30]; // 0x0688 (Size: 0x30, Type: StructProperty)
    std::uint8_t SlopeMax[0x30]; // 0x06B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t SlopeMinMultiplier[0x30]; // 0x06E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t SlopeMaxMultiplier[0x30]; // 0x0718 (Size: 0x30, Type: StructProperty)
    void* SlideStrengthOverTime; // 0x0748 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t HangTimeSlowDownPercentage[0x30]; // 0x0750 (Size: 0x30, Type: StructProperty)
    std::uint8_t RiseOutOfWaterVelocityZ[0x30]; // 0x0780 (Size: 0x30, Type: StructProperty)
    std::uint8_t EstablishSeconds[0x30]; // 0x07B0 (Size: 0x30, Type: StructProperty)
    float SlowDownBlendRate; // 0x07E0 (Size: 0x4, Type: FloatProperty)
    float HangtimeSlowDownBlendRate; // 0x07E4 (Size: 0x4, Type: FloatProperty)
    float PostHangtimeBlendRate; // 0x07E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRiseOutOfWater; // 0x07EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlendSpeed; // 0x07ED (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortMovementMode_SevenSlideGuidedMotion, HangTimeTag) == 1440, "Offset mismatch for UFortMovementMode_SevenSlideGuidedMotion::HangTimeTag");
static_assert(offsetof(UFortMovementMode_SevenSlideGuidedMotion, HangTimeBlendOutTag) == 1444, "Offset mismatch for UFortMovementMode_SevenSlideGuidedMotion::HangTimeBlendOutTag");
static_assert(offsetof(UFortMovementMode_SevenSlideGuidedMotion, TagsRequiredOnceEstablished) == 1448, "Offset mismatch for UFortMovementMode_SevenSlideGuidedMotion::TagsRequiredOnceEstablished");
static_assert(offsetof(UFortMovementMode_SevenSlideGuidedMotion, ExistingVerticalSpeedContributionPercent) == 1480, "Offset mismatch for UFortMovementMode_SevenSlideGuidedMotion::ExistingVerticalSpeedContributionPercent");
static_assert(offsetof(UFortMovementMode_SevenSlideGuidedMotion, BaseSpeed) == 1528, "Offset mismatch for UFortMovementMode_SevenSlideGuidedMotion::BaseSpeed");
static_assert(offsetof(UFortMovementMode_SevenSlideGuidedMotion, TurnDegreesPerSecond) == 1576, "Offset mismatch for UFortMovementMode_SevenSlideGuidedMotion::TurnDegreesPerSecond");
static_assert(offsetof(UFortMovementMode_SevenSlideGuidedMotion, EnableSlopeCalculation) == 1624, "Offset mismatch for UFortMovementMode_SevenSlideGuidedMotion::EnableSlopeCalculation");
static_assert(offsetof(UFortMovementMode_SevenSlideGuidedMotion, SlopeMin) == 1672, "Offset mismatch for UFortMovementMode_SevenSlideGuidedMotion::SlopeMin");
static_assert(offsetof(UFortMovementMode_SevenSlideGuidedMotion, SlopeMax) == 1720, "Offset mismatch for UFortMovementMode_SevenSlideGuidedMotion::SlopeMax");
static_assert(offsetof(UFortMovementMode_SevenSlideGuidedMotion, SlopeMinMultiplier) == 1768, "Offset mismatch for UFortMovementMode_SevenSlideGuidedMotion::SlopeMinMultiplier");
static_assert(offsetof(UFortMovementMode_SevenSlideGuidedMotion, SlopeMaxMultiplier) == 1816, "Offset mismatch for UFortMovementMode_SevenSlideGuidedMotion::SlopeMaxMultiplier");
static_assert(offsetof(UFortMovementMode_SevenSlideGuidedMotion, SlideStrengthOverTime) == 1864, "Offset mismatch for UFortMovementMode_SevenSlideGuidedMotion::SlideStrengthOverTime");
static_assert(offsetof(UFortMovementMode_SevenSlideGuidedMotion, HangTimeSlowDownPercentage) == 1872, "Offset mismatch for UFortMovementMode_SevenSlideGuidedMotion::HangTimeSlowDownPercentage");
static_assert(offsetof(UFortMovementMode_SevenSlideGuidedMotion, RiseOutOfWaterVelocityZ) == 1920, "Offset mismatch for UFortMovementMode_SevenSlideGuidedMotion::RiseOutOfWaterVelocityZ");
static_assert(offsetof(UFortMovementMode_SevenSlideGuidedMotion, EstablishSeconds) == 1968, "Offset mismatch for UFortMovementMode_SevenSlideGuidedMotion::EstablishSeconds");
static_assert(offsetof(UFortMovementMode_SevenSlideGuidedMotion, SlowDownBlendRate) == 2016, "Offset mismatch for UFortMovementMode_SevenSlideGuidedMotion::SlowDownBlendRate");
static_assert(offsetof(UFortMovementMode_SevenSlideGuidedMotion, HangtimeSlowDownBlendRate) == 2020, "Offset mismatch for UFortMovementMode_SevenSlideGuidedMotion::HangtimeSlowDownBlendRate");
static_assert(offsetof(UFortMovementMode_SevenSlideGuidedMotion, PostHangtimeBlendRate) == 2024, "Offset mismatch for UFortMovementMode_SevenSlideGuidedMotion::PostHangtimeBlendRate");
static_assert(offsetof(UFortMovementMode_SevenSlideGuidedMotion, bRiseOutOfWater) == 2028, "Offset mismatch for UFortMovementMode_SevenSlideGuidedMotion::bRiseOutOfWater");
static_assert(offsetof(UFortMovementMode_SevenSlideGuidedMotion, bBlendSpeed) == 2029, "Offset mismatch for UFortMovementMode_SevenSlideGuidedMotion::bBlendSpeed");

// /Script/SevenSlideRuntime.FortMovementMode_SevenSlideGuidedMotionRuntimeData
// Kind: Class; super: FortMovementMode_GuidedMotionRuntimeData
class UFortMovementMode_SevenSlideGuidedMotionRuntimeData
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    std::uint8_t LocalSlideReferenceVector[0x1]; // 0x0240 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_SevenSlideGuidedMotionRuntimeData, LocalSlideReferenceVector) == 576, "Offset mismatch for UFortMovementMode_SevenSlideGuidedMotionRuntimeData::LocalSlideReferenceVector");

// /Script/SevenSlideRuntime.SevenSlideAttributeSet
// Kind: Class; super: FortAttributeSet
class USevenSlideAttributeSet
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t MaxFuel[0x28]; // 0x0050 (Size: 0x28, Type: StructProperty)
    std::uint8_t Fuel[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USevenSlideAttributeSet, MaxFuel) == 80, "Offset mismatch for USevenSlideAttributeSet::MaxFuel");
static_assert(offsetof(USevenSlideAttributeSet, Fuel) == 120, "Offset mismatch for USevenSlideAttributeSet::Fuel");

// /Script/SevenSlideRuntime.SevenSlideLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class USevenSlideLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t Rot_Spine03[0x18]; // 0x1170 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rot_Spine04[0x18]; // 0x1188 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rot_Pelvis[0x18]; // 0x11A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rot_Spine05[0x18]; // 0x11B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rot_Spine02[0x18]; // 0x11D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rot_Spine01[0x18]; // 0x11E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rot_Neck01[0x18]; // 0x1200 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rot_Head[0x18]; // 0x1218 (Size: 0x18, Type: StructProperty)
    float SevenSlide_LegIK_Alpha; // 0x1230 (Size: 0x4, Type: FloatProperty)
    float Pelvis_InputRot_Alpha; // 0x1234 (Size: 0x4, Type: FloatProperty)
    float Head_InputRot_Alpha; // 0x1238 (Size: 0x4, Type: FloatProperty)
    float Spine_InputRot_Alpha; // 0x123C (Size: 0x4, Type: FloatProperty)
    float EnableTurnOrLeanBS; // 0x1240 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x1244
    double InputLR; // 0x1248 (Size: 0x8, Type: DoubleProperty)
    double InputFwBw; // 0x1250 (Size: 0x8, Type: DoubleProperty)
    double LeanAmount; // 0x1258 (Size: 0x8, Type: DoubleProperty)
    double TurnAmount; // 0x1260 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bUseTurnBS; // 0x1268 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransitionRule_ConduitToFw; // 0x1269 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransitionRule_ConduitToBw; // 0x126A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransitionRule_ConduitToLSlowmo; // 0x126B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransitionRule_ConduitToBwSlowmo; // 0x126C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransitionRule_ConduitToFwSlowmo; // 0x126D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransitionRule_ConduitToRSlowmo; // 0x126E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransitionRule_ConduitToR; // 0x126F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTransitionRule_ConduitToL; // 0x1270 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSlider_IsEquipped; // 0x1271 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsSlowMo; // 0x1272 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USevenSlideLayerAnimInstance, Rot_Spine03) == 4464, "Offset mismatch for USevenSlideLayerAnimInstance::Rot_Spine03");
static_assert(offsetof(USevenSlideLayerAnimInstance, Rot_Spine04) == 4488, "Offset mismatch for USevenSlideLayerAnimInstance::Rot_Spine04");
static_assert(offsetof(USevenSlideLayerAnimInstance, Rot_Pelvis) == 4512, "Offset mismatch for USevenSlideLayerAnimInstance::Rot_Pelvis");
static_assert(offsetof(USevenSlideLayerAnimInstance, Rot_Spine05) == 4536, "Offset mismatch for USevenSlideLayerAnimInstance::Rot_Spine05");
static_assert(offsetof(USevenSlideLayerAnimInstance, Rot_Spine02) == 4560, "Offset mismatch for USevenSlideLayerAnimInstance::Rot_Spine02");
static_assert(offsetof(USevenSlideLayerAnimInstance, Rot_Spine01) == 4584, "Offset mismatch for USevenSlideLayerAnimInstance::Rot_Spine01");
static_assert(offsetof(USevenSlideLayerAnimInstance, Rot_Neck01) == 4608, "Offset mismatch for USevenSlideLayerAnimInstance::Rot_Neck01");
static_assert(offsetof(USevenSlideLayerAnimInstance, Rot_Head) == 4632, "Offset mismatch for USevenSlideLayerAnimInstance::Rot_Head");
static_assert(offsetof(USevenSlideLayerAnimInstance, SevenSlide_LegIK_Alpha) == 4656, "Offset mismatch for USevenSlideLayerAnimInstance::SevenSlide_LegIK_Alpha");
static_assert(offsetof(USevenSlideLayerAnimInstance, Pelvis_InputRot_Alpha) == 4660, "Offset mismatch for USevenSlideLayerAnimInstance::Pelvis_InputRot_Alpha");
static_assert(offsetof(USevenSlideLayerAnimInstance, Head_InputRot_Alpha) == 4664, "Offset mismatch for USevenSlideLayerAnimInstance::Head_InputRot_Alpha");
static_assert(offsetof(USevenSlideLayerAnimInstance, Spine_InputRot_Alpha) == 4668, "Offset mismatch for USevenSlideLayerAnimInstance::Spine_InputRot_Alpha");
static_assert(offsetof(USevenSlideLayerAnimInstance, EnableTurnOrLeanBS) == 4672, "Offset mismatch for USevenSlideLayerAnimInstance::EnableTurnOrLeanBS");
static_assert(offsetof(USevenSlideLayerAnimInstance, InputLR) == 4680, "Offset mismatch for USevenSlideLayerAnimInstance::InputLR");
static_assert(offsetof(USevenSlideLayerAnimInstance, InputFwBw) == 4688, "Offset mismatch for USevenSlideLayerAnimInstance::InputFwBw");
static_assert(offsetof(USevenSlideLayerAnimInstance, LeanAmount) == 4696, "Offset mismatch for USevenSlideLayerAnimInstance::LeanAmount");
static_assert(offsetof(USevenSlideLayerAnimInstance, TurnAmount) == 4704, "Offset mismatch for USevenSlideLayerAnimInstance::TurnAmount");
static_assert(offsetof(USevenSlideLayerAnimInstance, bUseTurnBS) == 4712, "Offset mismatch for USevenSlideLayerAnimInstance::bUseTurnBS");
static_assert(offsetof(USevenSlideLayerAnimInstance, bTransitionRule_ConduitToFw) == 4713, "Offset mismatch for USevenSlideLayerAnimInstance::bTransitionRule_ConduitToFw");
static_assert(offsetof(USevenSlideLayerAnimInstance, bTransitionRule_ConduitToBw) == 4714, "Offset mismatch for USevenSlideLayerAnimInstance::bTransitionRule_ConduitToBw");
static_assert(offsetof(USevenSlideLayerAnimInstance, bTransitionRule_ConduitToLSlowmo) == 4715, "Offset mismatch for USevenSlideLayerAnimInstance::bTransitionRule_ConduitToLSlowmo");
static_assert(offsetof(USevenSlideLayerAnimInstance, bTransitionRule_ConduitToBwSlowmo) == 4716, "Offset mismatch for USevenSlideLayerAnimInstance::bTransitionRule_ConduitToBwSlowmo");
static_assert(offsetof(USevenSlideLayerAnimInstance, bTransitionRule_ConduitToFwSlowmo) == 4717, "Offset mismatch for USevenSlideLayerAnimInstance::bTransitionRule_ConduitToFwSlowmo");
static_assert(offsetof(USevenSlideLayerAnimInstance, bTransitionRule_ConduitToRSlowmo) == 4718, "Offset mismatch for USevenSlideLayerAnimInstance::bTransitionRule_ConduitToRSlowmo");
static_assert(offsetof(USevenSlideLayerAnimInstance, bTransitionRule_ConduitToR) == 4719, "Offset mismatch for USevenSlideLayerAnimInstance::bTransitionRule_ConduitToR");
static_assert(offsetof(USevenSlideLayerAnimInstance, bTransitionRule_ConduitToL) == 4720, "Offset mismatch for USevenSlideLayerAnimInstance::bTransitionRule_ConduitToL");
static_assert(offsetof(USevenSlideLayerAnimInstance, bSlider_IsEquipped) == 4721, "Offset mismatch for USevenSlideLayerAnimInstance::bSlider_IsEquipped");
static_assert(offsetof(USevenSlideLayerAnimInstance, bIsSlowMo) == 4722, "Offset mismatch for USevenSlideLayerAnimInstance::bIsSlowMo");

// /Script/SevenSlideRuntime.SevenSliderBootsCCPAnimInstance
// Kind: Class; super: CustomCharacterPartAnimInstance
class USevenSliderBootsCCPAnimInstance
{
public:
    std::uint8_t Pad_0000[0x630]; // 0x0000
    double OppositeLeanAmount; // 0x0630 (Size: 0x8, Type: DoubleProperty)
    double LeanAmount; // 0x0638 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsSlowMo; // 0x0640 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOverheated; // 0x0641 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSliderIsSliding; // 0x0642 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0643
    std::uint8_t InInventoryTagName[0x4]; // 0x0644 (Size: 0x4, Type: StructProperty)
    std::uint8_t ActiveWindowTagName[0x4]; // 0x0648 (Size: 0x4, Type: StructProperty)
    std::uint8_t OverheatTagName[0x1]; // 0x064C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USevenSliderBootsCCPAnimInstance, OppositeLeanAmount) == 1584, "Offset mismatch for USevenSliderBootsCCPAnimInstance::OppositeLeanAmount");
static_assert(offsetof(USevenSliderBootsCCPAnimInstance, LeanAmount) == 1592, "Offset mismatch for USevenSliderBootsCCPAnimInstance::LeanAmount");
static_assert(offsetof(USevenSliderBootsCCPAnimInstance, bIsSlowMo) == 1600, "Offset mismatch for USevenSliderBootsCCPAnimInstance::bIsSlowMo");
static_assert(offsetof(USevenSliderBootsCCPAnimInstance, bIsOverheated) == 1601, "Offset mismatch for USevenSliderBootsCCPAnimInstance::bIsOverheated");
static_assert(offsetof(USevenSliderBootsCCPAnimInstance, bSliderIsSliding) == 1602, "Offset mismatch for USevenSliderBootsCCPAnimInstance::bSliderIsSliding");
static_assert(offsetof(USevenSliderBootsCCPAnimInstance, InInventoryTagName) == 1604, "Offset mismatch for USevenSliderBootsCCPAnimInstance::InInventoryTagName");
static_assert(offsetof(USevenSliderBootsCCPAnimInstance, ActiveWindowTagName) == 1608, "Offset mismatch for USevenSliderBootsCCPAnimInstance::ActiveWindowTagName");
static_assert(offsetof(USevenSliderBootsCCPAnimInstance, OverheatTagName) == 1612, "Offset mismatch for USevenSliderBootsCCPAnimInstance::OverheatTagName");
