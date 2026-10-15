/**
 * decamp dumper generated SDK
 * Package: /Script/JethroVUI
 */
#pragma once
#include "Basic.h"

// /Script/JethroVUI.FortAthenaVehicleDashboardWidget_Jethro
// Kind: Class; super: FortAthenaVehicleDashboardWidget_Ferret
class UFortAthenaVehicleDashboardWidget_Jethro
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

static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, bIsWidgetShowing) == 900, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::bIsWidgetShowing");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, bDisplayedIsDisabled) == 901, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::bDisplayedIsDisabled");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, CurrentVehicleActor) == 904, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::CurrentVehicleActor");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, CurrentSpeed) == 912, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::CurrentSpeed");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, TargetFuelPercent) == 916, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::TargetFuelPercent");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, DisplayedFuelPercent) == 920, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::DisplayedFuelPercent");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, FillBlendSpeed) == 924, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::FillBlendSpeed");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, Widget_FuelGauge) == 928, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::Widget_FuelGauge");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, FuelGaugeClass) == 936, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::FuelGaugeClass");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, HorizontalBox_FuelCluster) == 944, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::HorizontalBox_FuelCluster");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, Image_Speedometer) == 952, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::Image_Speedometer");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, SpeedometerMaterialSpeedParamName) == 960, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::SpeedometerMaterialSpeedParamName");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, SpeedometerMaterialRpmParamName) == 964, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::SpeedometerMaterialRpmParamName");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, Image_BoostGlow) == 968, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::Image_BoostGlow");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, Image_BoostMeter) == 976, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::Image_BoostMeter");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, BoostFillMaterialParamName) == 984, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::BoostFillMaterialParamName");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, Overlay_BoostSparks) == 992, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::Overlay_BoostSparks");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, MeterIndicatorMinAngle) == 1000, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::MeterIndicatorMinAngle");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, MeterIndicatorMaxAngle) == 1004, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::MeterIndicatorMaxAngle");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, bAutoInitialize) == 1008, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::bAutoInitialize");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, bAllowVisibilityForPassengers) == 1009, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::bAllowVisibilityForPassengers");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, SpeedTextMaxInterpolationRate) == 1012, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::SpeedTextMaxInterpolationRate");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, WidgetTagsToHideWhenVisible) == 1016, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::WidgetTagsToHideWhenVisible");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, HUDTopSpeed) == 1052, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::HUDTopSpeed");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, bAllowMobileAdjustments) == 1056, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::bAllowMobileAdjustments");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, MobileFuelGaugeHorizontalAlignment) == 1057, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::MobileFuelGaugeHorizontalAlignment");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, MobileFuelGaugeVerticalAlignment) == 1058, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::MobileFuelGaugeVerticalAlignment");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, MobileFuelGaugePadding) == 1060, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::MobileFuelGaugePadding");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, NumericText_Speed) == 1080, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::NumericText_Speed");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, Overlay_Gauge) == 1088, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::Overlay_Gauge");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, Text_ItemName) == 1096, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::Text_ItemName");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, SpeedometerMaterialInstance) == 1112, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::SpeedometerMaterialInstance");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, BoostGlowMaterialInstance) == 1120, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::BoostGlowMaterialInstance");
static_assert(offsetof(UFortAthenaVehicleDashboardWidget_Jethro, BoostMeterMaterialInstance) == 1128, "Offset mismatch for UFortAthenaVehicleDashboardWidget_Jethro::BoostMeterMaterialInstance");

// /Script/JethroVUI.JethroV_HealthInfoBase
// Kind: Class; super: FortHUDElementWidget
class UJethroV_HealthInfoBase
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    void* HealthInfoVM; // 0x0370 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJethroV_HealthInfoBase, HealthInfoVM) == 880, "Offset mismatch for UJethroV_HealthInfoBase::HealthInfoVM");

// /Script/JethroVUI.JethroV_HealthInfo_ViewModel
// Kind: Class; super: FortAthenaSKVehicleHealthInfoViewModel
class UJethroV_HealthInfo_ViewModel
{
public:
    std::uint8_t Pad_0000[0x8C]; // 0x0000
    std::int32_t MaxNumberOfRepairPips; // 0x008C (Size: 0x4, Type: IntProperty)
    std::int32_t RepairPipsLeft; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0094
    std::uint8_t MaxNumberOfPips[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJethroV_HealthInfo_ViewModel, MaxNumberOfRepairPips) == 140, "Offset mismatch for UJethroV_HealthInfo_ViewModel::MaxNumberOfRepairPips");
static_assert(offsetof(UJethroV_HealthInfo_ViewModel, RepairPipsLeft) == 144, "Offset mismatch for UJethroV_HealthInfo_ViewModel::RepairPipsLeft");
static_assert(offsetof(UJethroV_HealthInfo_ViewModel, MaxNumberOfPips) == 152, "Offset mismatch for UJethroV_HealthInfo_ViewModel::MaxNumberOfPips");
