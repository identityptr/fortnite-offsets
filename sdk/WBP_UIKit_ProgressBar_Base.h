/**
 * decamp dumper generated SDK
 * Package: /FortUILibrary/Systems/ProgressBar/WBP_UIKit_ProgressBar_Base
 */
#pragma once
#include "Basic.h"

// /FortUILibrary/Systems/ProgressBar/WBP_UIKit_ProgressBar_Base.WBP_UIKit_ProgressBar_Base_C
// Kind: WidgetBlueprintGeneratedClass; super: UserWidget
class UWBP_UIKit_ProgressBar_Base_C
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0308 (Size: 0x8, Type: StructProperty)
    void* ProgressBar; // 0x0310 (Size: 0x8, Type: ObjectProperty)
    void* Anim_Progress_Base; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* Anim_ProgressWithDelta_Base; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* Anim_ProgressWithDeltaDecay_Base; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* Anim_ProgressWithDelta_Ease; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t UseDeltaBar; // 0x0338 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0339
    std::uint8_t DeltaColor[0x10]; // 0x033C (Size: 0x10, Type: StructProperty)
    std::uint8_t UseDeltaDecay; // 0x034C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x034D
    std::uint8_t DeltaDecayColor[0x10]; // 0x0350 (Size: 0x10, Type: StructProperty)
    std::uint8_t ColorA[0x10]; // 0x0360 (Size: 0x10, Type: StructProperty)
    std::uint8_t ColorB[0x20]; // 0x0370 (Size: 0x20, Type: StructProperty)
    std::uint8_t EmptyColor[0x10]; // 0x0390 (Size: 0x10, Type: StructProperty)
    void* ProgressBarMID; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    double ProgressValue; // 0x03A8 (Size: 0x8, Type: DoubleProperty)
    double DurationTime; // 0x03B0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t UseCircular; // 0x03B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t UseSegments; // 0x03B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x03BA
    std::int32_t SegmentsCount; // 0x03BC (Size: 0x4, Type: IntProperty)
    double SeparatorThickness_PX; // 0x03C0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t SnapToSegments; // 0x03C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x03C9
    void* LinearMaterial; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    double LinearSDF_Sharpness; // 0x03D8 (Size: 0x8, Type: DoubleProperty)
    double CornerRoundness; // 0x03E0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t UseOutline; // 0x03E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x03E9
    double Outline_PX; // 0x03F0 (Size: 0x8, Type: DoubleProperty)
    double Width; // 0x03F8 (Size: 0x8, Type: DoubleProperty)
    double Height; // 0x0400 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t UseRoundedProgress; // 0x0408 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x7]; // 0x0409
    void* CircularMaterial; // 0x0410 (Size: 0x8, Type: ObjectProperty)
    double Thickness_PX; // 0x0418 (Size: 0x8, Type: DoubleProperty)
    double SDF_Sharpness; // 0x0420 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t FillClockwise; // 0x0428 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x7]; // 0x0429
    double StartAngle; // 0x0430 (Size: 0x8, Type: DoubleProperty)
    double EndAngle; // 0x0438 (Size: 0x8, Type: DoubleProperty)
    double EdgeOffset_PX; // 0x0440 (Size: 0x8, Type: DoubleProperty)
    double RotationAngle; // 0x0448 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_0008[0x8]; // 0x0450
    double GlowIntensity; // 0x0458 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t UseGlowColor; // 0x0460 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x3]; // 0x0461
    std::uint8_t GlowColor[0x10]; // 0x0464 (Size: 0x10, Type: StructProperty)
    std::uint8_t UseBehindCircle; // 0x0474 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x3]; // 0x0475
    std::uint8_t BehindCircleColor[0x10]; // 0x0478 (Size: 0x10, Type: StructProperty)
    void* CurrentProgressAnimation; // 0x0488 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnProgressTransitionFinished; // 0x0490 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, UberGraphFrame) == 776, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::UberGraphFrame");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, ProgressBar) == 784, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::ProgressBar");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, Anim_Progress_Base) == 792, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::Anim_Progress_Base");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, Anim_ProgressWithDelta_Base) == 800, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::Anim_ProgressWithDelta_Base");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, Anim_ProgressWithDeltaDecay_Base) == 808, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::Anim_ProgressWithDeltaDecay_Base");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, Anim_ProgressWithDelta_Ease) == 816, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::Anim_ProgressWithDelta_Ease");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, UseDeltaBar) == 824, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::UseDeltaBar");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, DeltaColor) == 828, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::DeltaColor");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, UseDeltaDecay) == 844, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::UseDeltaDecay");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, DeltaDecayColor) == 848, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::DeltaDecayColor");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, ColorA) == 864, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::ColorA");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, ColorB) == 880, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::ColorB");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, EmptyColor) == 912, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::EmptyColor");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, ProgressBarMID) == 928, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::ProgressBarMID");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, ProgressValue) == 936, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::ProgressValue");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, DurationTime) == 944, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::DurationTime");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, UseCircular) == 952, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::UseCircular");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, UseSegments) == 953, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::UseSegments");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, SegmentsCount) == 956, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::SegmentsCount");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, SeparatorThickness_PX) == 960, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::SeparatorThickness_PX");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, SnapToSegments) == 968, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::SnapToSegments");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, LinearMaterial) == 976, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::LinearMaterial");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, LinearSDF_Sharpness) == 984, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::LinearSDF_Sharpness");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, CornerRoundness) == 992, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::CornerRoundness");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, UseOutline) == 1000, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::UseOutline");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, Outline_PX) == 1008, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::Outline_PX");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, Width) == 1016, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::Width");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, Height) == 1024, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::Height");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, UseRoundedProgress) == 1032, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::UseRoundedProgress");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, CircularMaterial) == 1040, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::CircularMaterial");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, Thickness_PX) == 1048, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::Thickness_PX");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, SDF_Sharpness) == 1056, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::SDF_Sharpness");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, FillClockwise) == 1064, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::FillClockwise");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, StartAngle) == 1072, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::StartAngle");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, EndAngle) == 1080, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::EndAngle");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, EdgeOffset_PX) == 1088, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::EdgeOffset_PX");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, RotationAngle) == 1096, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::RotationAngle");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, GlowIntensity) == 1112, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::GlowIntensity");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, UseGlowColor) == 1120, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::UseGlowColor");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, GlowColor) == 1124, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::GlowColor");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, UseBehindCircle) == 1140, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::UseBehindCircle");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, BehindCircleColor) == 1144, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::BehindCircleColor");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, CurrentProgressAnimation) == 1160, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::CurrentProgressAnimation");
static_assert(offsetof(UWBP_UIKit_ProgressBar_Base_C, OnProgressTransitionFinished) == 1168, "Offset mismatch for UWBP_UIKit_ProgressBar_Base_C::OnProgressTransitionFinished");
