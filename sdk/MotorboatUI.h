/**
 * decamp dumper generated SDK
 * Package: /Script/MotorboatUI
 */
#pragma once
#include "Basic.h"

// /Script/MotorboatUI.FortAthenaVehicleDashboardWidget_Meatball
// Kind: Class; super: FortAthenaVehicleDashboardWidget
class UFortAthenaVehicleDashboardWidget_Meatball
{
public:
    std::uint8_t Pad_0000[0x384]; // 0x0000
    std::uint8_t bIsWidgetShowing; // 0x0384 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayedIsDisabled; // 0x0385 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0386
    void* CurrentVehicleActor; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    float CurrentSpeed; // 0x0390 (Size: 0x4, Type: FloatProperty)
    float TargetFuelPercent; // 0x0394 (Size: 0x4, Type: FloatProperty)
    float DisplayedFuelPercent; // 0x0398 (Size: 0x4, Type: FloatProperty)
    float FillBlendSpeed; // 0x039C (Size: 0x4, Type: FloatProperty)
    void* Widget_FuelGauge; // 0x03A0 (Size: 0x8, Type: ObjectProperty)
    void* FuelGaugeClass; // 0x03A8 (Size: 0x8, Type: ClassProperty)
    void* HorizontalBox_FuelCluster; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    void* Image_Speedometer; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SpeedometerMaterialSpeedParamName[0x4]; // 0x03C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t SpeedometerMaterialRpmParamName[0x4]; // 0x03C4 (Size: 0x4, Type: NameProperty)
    void* Image_BoostGlow; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    void* Image_BoostMeter; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    FName BoostFillMaterialParamName; // 0x03D8 (Size: 0x8, Type: NameProperty)
    void* Overlay_BoostSparks; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
    float MeterIndicatorMinAngle; // 0x03E8 (Size: 0x4, Type: FloatProperty)
    float MeterIndicatorMaxAngle; // 0x03EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAutoInitialize; // 0x03F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowVisibilityForPassengers; // 0x03F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x03F2
    float SpeedTextMaxInterpolationRate; // 0x03F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WidgetTagsToHideWhenVisible[0x24]; // 0x03F8 (Size: 0x24, Type: StructProperty)
    float HUDTopSpeed; // 0x041C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowMobileAdjustments; // 0x0420 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MobileFuelGaugeHorizontalAlignment; // 0x0421 (Size: 0x1, Type: ByteProperty)
    std::uint8_t MobileFuelGaugeVerticalAlignment; // 0x0422 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0423
    std::uint8_t MobileFuelGaugePadding[0x14]; // 0x0424 (Size: 0x14, Type: StructProperty)
    void* NumericText_Speed; // 0x0438 (Size: 0x8, Type: ObjectProperty)
    void* Overlay_Gauge; // 0x0440 (Size: 0x8, Type: ObjectProperty)
    void* Text_ItemName; // 0x0448 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x8]; // 0x0450
    void* SpeedometerMaterialInstance; // 0x0458 (Size: 0x8, Type: ObjectProperty)
    void* BoostGlowMaterialInstance; // 0x0460 (Size: 0x8, Type: ObjectProperty)
    void* BoostMeterMaterialInstance; // 0x0468 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, bIsWidgetShowing) == 900, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::bIsWidgetShowing");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, bDisplayedIsDisabled) == 901, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::bDisplayedIsDisabled");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, CurrentVehicleActor) == 904, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::CurrentVehicleActor");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, CurrentSpeed) == 912, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::CurrentSpeed");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, TargetFuelPercent) == 916, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::TargetFuelPercent");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, DisplayedFuelPercent) == 920, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::DisplayedFuelPercent");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, FillBlendSpeed) == 924, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::FillBlendSpeed");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, Widget_FuelGauge) == 928, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::Widget_FuelGauge");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, FuelGaugeClass) == 936, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::FuelGaugeClass");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, HorizontalBox_FuelCluster) == 944, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::HorizontalBox_FuelCluster");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, Image_Speedometer) == 952, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::Image_Speedometer");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, SpeedometerMaterialSpeedParamName) == 960, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::SpeedometerMaterialSpeedParamName");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, SpeedometerMaterialRpmParamName) == 964, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::SpeedometerMaterialRpmParamName");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, Image_BoostGlow) == 968, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::Image_BoostGlow");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, Image_BoostMeter) == 976, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::Image_BoostMeter");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, BoostFillMaterialParamName) == 984, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::BoostFillMaterialParamName");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, Overlay_BoostSparks) == 992, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::Overlay_BoostSparks");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, MeterIndicatorMinAngle) == 1000, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::MeterIndicatorMinAngle");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, MeterIndicatorMaxAngle) == 1004, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::MeterIndicatorMaxAngle");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, bAutoInitialize) == 1008, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::bAutoInitialize");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, bAllowVisibilityForPassengers) == 1009, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::bAllowVisibilityForPassengers");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, SpeedTextMaxInterpolationRate) == 1012, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::SpeedTextMaxInterpolationRate");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, WidgetTagsToHideWhenVisible) == 1016, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::WidgetTagsToHideWhenVisible");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, HUDTopSpeed) == 1052, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::HUDTopSpeed");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, bAllowMobileAdjustments) == 1056, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::bAllowMobileAdjustments");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, MobileFuelGaugeHorizontalAlignment) == 1057, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::MobileFuelGaugeHorizontalAlignment");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, MobileFuelGaugeVerticalAlignment) == 1058, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::MobileFuelGaugeVerticalAlignment");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, MobileFuelGaugePadding) == 1060, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::MobileFuelGaugePadding");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, NumericText_Speed) == 1080, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::NumericText_Speed");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, Overlay_Gauge) == 1088, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::Overlay_Gauge");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, Text_ItemName) == 1096, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::Text_ItemName");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, SpeedometerMaterialInstance) == 1112, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::SpeedometerMaterialInstance");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, BoostGlowMaterialInstance) == 1120, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::BoostGlowMaterialInstance");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Meatball, BoostMeterMaterialInstance) == 1128, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Meatball::BoostMeterMaterialInstance");
