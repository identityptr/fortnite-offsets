/**
 * decamp dumper generated SDK
 * Package: /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget
 */
#pragma once
#include "Basic.h"

// /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C
// Kind: WidgetBlueprintGeneratedClass; super: FortPlayerPowerRating
class UMoonbeam_PowerRatingWidget_C
{
public:
    std::uint8_t Pad_0000[0x358]; // 0x0000
    std::uint8_t UberGraphFrame[0x50]; // 0x0358 (Size: 0x50, Type: StructProperty)
    void* Image_Power; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* HomebaseRatingBar; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    void* BuffedRatingOuterGlow; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x03C0
    void* BaseRatingValue; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x1]; // 0x03D0
    std::uint8_t ShowProgress; // 0x03D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x03D2
    double InterpDuration; // 0x03D8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_0004[0x1C]; // 0x03E0
    std::uint8_t FontColor[0x1]; // 0x03FC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, UberGraphFrame) == 856, "Offset mismatch for UMoonbeam_PowerRatingWidget_C::UberGraphFrame");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, Image_Power) == 936, "Offset mismatch for UMoonbeam_PowerRatingWidget_C::Image_Power");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, HomebaseRatingBar) == 944, "Offset mismatch for UMoonbeam_PowerRatingWidget_C::HomebaseRatingBar");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, BuffedRatingOuterGlow) == 952, "Offset mismatch for UMoonbeam_PowerRatingWidget_C::BuffedRatingOuterGlow");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, BaseRatingValue) == 968, "Offset mismatch for UMoonbeam_PowerRatingWidget_C::BaseRatingValue");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, ShowProgress) == 977, "Offset mismatch for UMoonbeam_PowerRatingWidget_C::ShowProgress");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, InterpDuration) == 984, "Offset mismatch for UMoonbeam_PowerRatingWidget_C::InterpDuration");
static_assert(offsetof(UMoonbeam_PowerRatingWidget_C, FontColor) == 1020, "Offset mismatch for UMoonbeam_PowerRatingWidget_C::FontColor");
