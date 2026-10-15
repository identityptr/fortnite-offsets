/**
 * decamp dumper generated SDK
 * Package: /Game/UI/Foundation/Stats/PowerRatingWidget
 */
#pragma once
#include "Basic.h"

// /Game/UI/Foundation/Stats/PowerRatingWidget.PowerRatingWidget_C
// Kind: WidgetBlueprintGeneratedClass; super: FortPlayerPowerRating
class UPowerRatingWidget_C
{
public:
    std::uint8_t Pad_0000[0x358]; // 0x0000
    std::uint8_t UberGraphFrame[0x48]; // 0x0358 (Size: 0x48, Type: StructProperty)
    void* Image_Power; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* HomebaseRatingBar; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    void* BuffedRatingOuterGlow; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x03B8
    void* BaseRatingValue; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x1]; // 0x03C8
    std::uint8_t ShowProgress; // 0x03C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x03CA
    double InterpDuration; // 0x03D0 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UPowerRatingWidget_C, UberGraphFrame) == 856, "Offset mismatch for UPowerRatingWidget_C::UberGraphFrame");
static_assert(offsetof(UPowerRatingWidget_C, Image_Power) == 928, "Offset mismatch for UPowerRatingWidget_C::Image_Power");
static_assert(offsetof(UPowerRatingWidget_C, HomebaseRatingBar) == 936, "Offset mismatch for UPowerRatingWidget_C::HomebaseRatingBar");
static_assert(offsetof(UPowerRatingWidget_C, BuffedRatingOuterGlow) == 944, "Offset mismatch for UPowerRatingWidget_C::BuffedRatingOuterGlow");
static_assert(offsetof(UPowerRatingWidget_C, BaseRatingValue) == 960, "Offset mismatch for UPowerRatingWidget_C::BaseRatingValue");
static_assert(offsetof(UPowerRatingWidget_C, ShowProgress) == 969, "Offset mismatch for UPowerRatingWidget_C::ShowProgress");
static_assert(offsetof(UPowerRatingWidget_C, InterpDuration) == 976, "Offset mismatch for UPowerRatingWidget_C::InterpDuration");
