#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JethroVUI
{
    struct FortAthenaVehicleDashboardWidget_Jethro
    {
        static constexpr std::string_view Name = "FortAthenaVehicleDashboardWidget_Jethro";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaVehicleDashboardWidget_Ferret";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsWidgetShowing = 0x38C;
            static constexpr std::uintptr_t bDisplayedIsDisabled = 0x38D;
            static constexpr std::uintptr_t CurrentVehicleActor = 0x390;
            static constexpr std::uintptr_t CurrentSpeed = 0x398;
            static constexpr std::uintptr_t TargetFuelPercent = 0x39C;
            static constexpr std::uintptr_t DisplayedFuelPercent = 0x3A0;
            static constexpr std::uintptr_t FillBlendSpeed = 0x3A4;
            static constexpr std::uintptr_t Widget_FuelGauge = 0x3A8;
            static constexpr std::uintptr_t FuelGaugeClass = 0x3B0;
            static constexpr std::uintptr_t HorizontalBox_FuelCluster = 0x3B8;
            static constexpr std::uintptr_t Image_Speedometer = 0x3C0;
            static constexpr std::uintptr_t SpeedometerMaterialSpeedParamName = 0x3C8;
            static constexpr std::uintptr_t SpeedometerMaterialRpmParamName = 0x3CC;
            static constexpr std::uintptr_t Image_BoostGlow = 0x3D0;
            static constexpr std::uintptr_t Image_BoostMeter = 0x3D8;
            static constexpr std::uintptr_t BoostFillMaterialParamName = 0x3E0;
            static constexpr std::uintptr_t Overlay_BoostSparks = 0x3E8;
            static constexpr std::uintptr_t MeterIndicatorMinAngle = 0x3F0;
            static constexpr std::uintptr_t MeterIndicatorMaxAngle = 0x3F4;
            static constexpr std::uintptr_t bAutoInitialize = 0x3F8;
            static constexpr std::uintptr_t bAllowVisibilityForPassengers = 0x3F9;
            static constexpr std::uintptr_t SpeedTextMaxInterpolationRate = 0x3FC;
            static constexpr std::uintptr_t WidgetTagsToHideWhenVisible = 0x400;
            static constexpr std::uintptr_t HUDTopSpeed = 0x424;
            static constexpr std::uintptr_t bAllowMobileAdjustments = 0x428;
            static constexpr std::uintptr_t MobileFuelGaugeHorizontalAlignment = 0x429;
            static constexpr std::uintptr_t MobileFuelGaugeVerticalAlignment = 0x42A;
            static constexpr std::uintptr_t MobileFuelGaugePadding = 0x42C;
            static constexpr std::uintptr_t NumericText_Speed = 0x440;
            static constexpr std::uintptr_t Overlay_Gauge = 0x448;
            static constexpr std::uintptr_t Text_ItemName = 0x450;
            static constexpr std::uintptr_t SpeedometerMaterialInstance = 0x460;
            static constexpr std::uintptr_t BoostGlowMaterialInstance = 0x468;
            static constexpr std::uintptr_t BoostMeterMaterialInstance = 0x470;
        };

        inline static constexpr std::array<PropertyInfo, 34> Properties{{
            {"bIsWidgetShowing", 0x38C, "BoolProperty"},
            {"bDisplayedIsDisabled", 0x38D, "BoolProperty"},
            {"CurrentVehicleActor", 0x390, "ObjectProperty"},
            {"CurrentSpeed", 0x398, "FloatProperty"},
            {"TargetFuelPercent", 0x39C, "FloatProperty"},
            {"DisplayedFuelPercent", 0x3A0, "FloatProperty"},
            {"FillBlendSpeed", 0x3A4, "FloatProperty"},
            {"Widget_FuelGauge", 0x3A8, "ObjectProperty"},
            {"FuelGaugeClass", 0x3B0, "ClassProperty"},
            {"HorizontalBox_FuelCluster", 0x3B8, "ObjectProperty"},
            {"Image_Speedometer", 0x3C0, "ObjectProperty"},
            {"SpeedometerMaterialSpeedParamName", 0x3C8, "NameProperty"},
            {"SpeedometerMaterialRpmParamName", 0x3CC, "NameProperty"},
            {"Image_BoostGlow", 0x3D0, "ObjectProperty"},
            {"Image_BoostMeter", 0x3D8, "ObjectProperty"},
            {"BoostFillMaterialParamName", 0x3E0, "NameProperty"},
            {"Overlay_BoostSparks", 0x3E8, "ObjectProperty"},
            {"MeterIndicatorMinAngle", 0x3F0, "FloatProperty"},
            {"MeterIndicatorMaxAngle", 0x3F4, "FloatProperty"},
            {"bAutoInitialize", 0x3F8, "BoolProperty"},
            {"bAllowVisibilityForPassengers", 0x3F9, "BoolProperty"},
            {"SpeedTextMaxInterpolationRate", 0x3FC, "FloatProperty"},
            {"WidgetTagsToHideWhenVisible", 0x400, "StructProperty"},
            {"HUDTopSpeed", 0x424, "FloatProperty"},
            {"bAllowMobileAdjustments", 0x428, "BoolProperty"},
            {"MobileFuelGaugeHorizontalAlignment", 0x429, "ByteProperty"},
            {"MobileFuelGaugeVerticalAlignment", 0x42A, "ByteProperty"},
            {"MobileFuelGaugePadding", 0x42C, "StructProperty"},
            {"NumericText_Speed", 0x440, "ObjectProperty"},
            {"Overlay_Gauge", 0x448, "ObjectProperty"},
            {"Text_ItemName", 0x450, "ObjectProperty"},
            {"SpeedometerMaterialInstance", 0x460, "ObjectProperty"},
            {"BoostGlowMaterialInstance", 0x468, "ObjectProperty"},
            {"BoostMeterMaterialInstance", 0x470, "ObjectProperty"},
        }};
    };

    struct JethroV_HealthInfoBase
    {
        static constexpr std::string_view Name = "JethroV_HealthInfoBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t HealthInfoVM = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HealthInfoVM", 0x370, "ObjectProperty"},
        }};
    };

    struct JethroV_HealthInfo_ViewModel
    {
        static constexpr std::string_view Name = "JethroV_HealthInfo_ViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaSKVehicleHealthInfoViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxNumberOfRepairPips = 0x8C;
            static constexpr std::uintptr_t RepairPipsLeft = 0x90;
            static constexpr std::uintptr_t MaxNumberOfPips = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaxNumberOfRepairPips", 0x8C, "IntProperty"},
            {"RepairPipsLeft", 0x90, "IntProperty"},
            {"MaxNumberOfPips", 0x98, "StructProperty"},
        }};
    };

}
