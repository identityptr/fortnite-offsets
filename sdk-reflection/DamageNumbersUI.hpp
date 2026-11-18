#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DamageNumbersUI
{
    struct CommonUserWidget_DamageNumbers
    {
        static constexpr std::string_view Name = "CommonUserWidget_DamageNumbers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldSpacePos = 0x340;
            static constexpr std::uintptr_t CheckAnimalTag = 0x358;
            static constexpr std::uintptr_t Damage = 0x35C;
            static constexpr std::uintptr_t AdditionalVerticalScreenOffset = 0x360;
            static constexpr std::uintptr_t SpawnTime = 0x368;
            static constexpr std::uintptr_t DamageNumberScaleVector = 0x370;
            static constexpr std::uintptr_t ScreenSpaceOffsetFromHitActor = 0x380;
            static constexpr std::uintptr_t InverseHUDScaleVector = 0x390;
            static constexpr std::uintptr_t HitActor = 0x3A0;
            static constexpr std::uintptr_t bHitAnimal = 0x3A8;
            static constexpr std::uintptr_t bHitVehicle = 0x3A9;
            static constexpr std::uintptr_t bIsPlayingCritAnimation = 0x3AA;
            static constexpr std::uintptr_t bUpdateZeroDamagePosition = 0x3AB;
            static constexpr std::uintptr_t HitColor = 0x3B0;
            static constexpr std::uintptr_t VehicleColor = 0x3C0;
            static constexpr std::uintptr_t CritColor = 0x3D0;
            static constexpr std::uintptr_t HealthColor = 0x3E0;
            static constexpr std::uintptr_t ShieldColor = 0x3F0;
            static constexpr std::uintptr_t CritColor_Text = 0x400;
            static constexpr std::uintptr_t ShieldColor_Text = 0x410;
            static constexpr std::uintptr_t HealthColor_InnerStroke = 0x420;
            static constexpr std::uintptr_t ShieldColor_InnerStroke = 0x430;
            static constexpr std::uintptr_t CritColor_InnerStroke = 0x440;
            static constexpr std::uintptr_t DamageIconVehicleColor = 0x450;
            static constexpr std::uintptr_t DamageIconShieldColor = 0x460;
            static constexpr std::uintptr_t DamageIconShieldOutline1Color = 0x470;
            static constexpr std::uintptr_t DamageIconShieldOutline2Color = 0x480;
            static constexpr std::uintptr_t DamageIconVehicleOutline1Color = 0x490;
            static constexpr std::uintptr_t DamageIconVehicleOutline2Color = 0x4A0;
            static constexpr std::uintptr_t OnDamage = 0x4B0;
            static constexpr std::uintptr_t OnDamage_Crit = 0x4B8;
            static constexpr std::uintptr_t Text_Number = 0x4C0;
            static constexpr std::uintptr_t Text_Number_Stroke = 0x4C8;
            static constexpr std::uintptr_t DamageTypeCrit = 0x4D0;
            static constexpr std::uintptr_t DamageTypeIcon = 0x4D8;
            static constexpr std::uintptr_t DamageTypeIcon_EMP = 0x4E0;
        };

        inline static constexpr std::array<PropertyInfo, 36> Properties{{
            {"WorldSpacePos", 0x340, "StructProperty"},
            {"CheckAnimalTag", 0x358, "StructProperty"},
            {"Damage", 0x35C, "FloatProperty"},
            {"AdditionalVerticalScreenOffset", 0x360, "FloatProperty"},
            {"SpawnTime", 0x368, "DoubleProperty"},
            {"DamageNumberScaleVector", 0x370, "StructProperty"},
            {"ScreenSpaceOffsetFromHitActor", 0x380, "StructProperty"},
            {"InverseHUDScaleVector", 0x390, "StructProperty"},
            {"HitActor", 0x3A0, "ObjectProperty"},
            {"bHitAnimal", 0x3A8, "BoolProperty"},
            {"bHitVehicle", 0x3A9, "BoolProperty"},
            {"bIsPlayingCritAnimation", 0x3AA, "BoolProperty"},
            {"bUpdateZeroDamagePosition", 0x3AB, "BoolProperty"},
            {"HitColor", 0x3B0, "StructProperty"},
            {"VehicleColor", 0x3C0, "StructProperty"},
            {"CritColor", 0x3D0, "StructProperty"},
            {"HealthColor", 0x3E0, "StructProperty"},
            {"ShieldColor", 0x3F0, "StructProperty"},
            {"CritColor_Text", 0x400, "StructProperty"},
            {"ShieldColor_Text", 0x410, "StructProperty"},
            {"HealthColor_InnerStroke", 0x420, "StructProperty"},
            {"ShieldColor_InnerStroke", 0x430, "StructProperty"},
            {"CritColor_InnerStroke", 0x440, "StructProperty"},
            {"DamageIconVehicleColor", 0x450, "StructProperty"},
            {"DamageIconShieldColor", 0x460, "StructProperty"},
            {"DamageIconShieldOutline1Color", 0x470, "StructProperty"},
            {"DamageIconShieldOutline2Color", 0x480, "StructProperty"},
            {"DamageIconVehicleOutline1Color", 0x490, "StructProperty"},
            {"DamageIconVehicleOutline2Color", 0x4A0, "StructProperty"},
            {"OnDamage", 0x4B0, "ObjectProperty"},
            {"OnDamage_Crit", 0x4B8, "ObjectProperty"},
            {"Text_Number", 0x4C0, "ObjectProperty"},
            {"Text_Number_Stroke", 0x4C8, "ObjectProperty"},
            {"DamageTypeCrit", 0x4D0, "ObjectProperty"},
            {"DamageTypeIcon", 0x4D8, "ObjectProperty"},
            {"DamageTypeIcon_EMP", 0x4E0, "ObjectProperty"},
        }};
    };

    struct CustomDamageNumbersDataComponent
    {
        static constexpr std::string_view Name = "CustomDamageNumbersDataComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnDamageDealt = 0xC0;
            static constexpr std::uintptr_t Priority = 0xD0;
            static constexpr std::uintptr_t PoolSize = 0xD4;
            static constexpr std::uintptr_t DamageNumbersClass = 0xD8;
            static constexpr std::uintptr_t bSpecifiedAsInstigator = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnDamageDealt", 0xC0, "MulticastInlineDelegateProperty"},
            {"Priority", 0xD0, "IntProperty"},
            {"PoolSize", 0xD4, "ByteProperty"},
            {"DamageNumbersClass", 0xD8, "ClassProperty"},
            {"bSpecifiedAsInstigator", 0xE0, "BoolProperty"},
        }};
    };

    struct FortGameSettingRegistryExtension_DamageNumbers
    {
        static constexpr std::string_view Name = "FortGameSettingRegistryExtension_DamageNumbers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameSettingRegistryExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t MarkupBase = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MarkupBase", 0x28, "ObjectProperty"},
        }};
    };

    struct FortUserWidget_DamageNumbers
    {
        static constexpr std::string_view Name = "FortUserWidget_DamageNumbers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultDamageNumberClass = 0x318;
            static constexpr std::uintptr_t VerticalShiftForNewDamage = 0x320;
            static constexpr std::uintptr_t AccumulationTime = 0x328;
            static constexpr std::uintptr_t MaxNumberCount = 0x330;
            static constexpr std::uintptr_t OffsetFromPawnLocationDBNO = 0x338;
            static constexpr std::uintptr_t OffsetFromPawnLocation = 0x350;
            static constexpr std::uintptr_t BoundPawn = 0x368;
            static constexpr std::uintptr_t HideDamageNumbersTag = 0x370;
            static constexpr std::uintptr_t DamageAtLocTag = 0x374;
            static constexpr std::uintptr_t TagsToNotDisplayDmgNumbersOnSpecificActors = 0x378;
            static constexpr std::uintptr_t DynamicEntryBox_Numbers = 0x398;
            static constexpr std::uintptr_t PoolByClassController = 0x3A0;
            static constexpr std::uintptr_t DamageCueEMPTag = 0x3B0;
            static constexpr std::uintptr_t bPrecreateDamageNumberEntries = 0x3B4;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"DefaultDamageNumberClass", 0x318, "ClassProperty"},
            {"VerticalShiftForNewDamage", 0x320, "DoubleProperty"},
            {"AccumulationTime", 0x328, "DoubleProperty"},
            {"MaxNumberCount", 0x330, "ByteProperty"},
            {"OffsetFromPawnLocationDBNO", 0x338, "StructProperty"},
            {"OffsetFromPawnLocation", 0x350, "StructProperty"},
            {"BoundPawn", 0x368, "ObjectProperty"},
            {"HideDamageNumbersTag", 0x370, "StructProperty"},
            {"DamageAtLocTag", 0x374, "StructProperty"},
            {"TagsToNotDisplayDmgNumbersOnSpecificActors", 0x378, "StructProperty"},
            {"DynamicEntryBox_Numbers", 0x398, "ObjectProperty"},
            {"PoolByClassController", 0x3A0, "MapProperty"},
            {"DamageCueEMPTag", 0x3B0, "StructProperty"},
            {"bPrecreateDamageNumberEntries", 0x3B4, "BoolProperty"},
        }};
    };

}
