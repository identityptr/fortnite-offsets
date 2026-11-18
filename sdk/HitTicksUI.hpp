#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HitTicksUI
{
    struct FortAthenaHitTicksViewModel
    {
        static constexpr std::string_view Name = "FortAthenaHitTicksViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseNative = 0x78;
            static constexpr std::uintptr_t UseNativeMarkerTag = 0x7C;
            static constexpr std::uintptr_t HitInterval = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bUseNative", 0x78, "BoolProperty"},
            {"UseNativeMarkerTag", 0x7C, "StructProperty"},
            {"HitInterval", 0xC8, "DoubleProperty"},
        }};
    };

    struct FortHitTicksHUDElement
    {
        static constexpr std::string_view Name = "FortHitTicksHUDElement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t HLTDependentWidgetTag = 0x338;
            static constexpr std::uintptr_t ElementTag = 0x33C;
            static constexpr std::uintptr_t HUDElementTag = 0x340;
            static constexpr std::uintptr_t HiddenVisibility = 0x360;
            static constexpr std::uintptr_t TutorialHighlight = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"HLTDependentWidgetTag", 0x338, "StructProperty"},
            {"ElementTag", 0x33C, "StructProperty"},
            {"HUDElementTag", 0x340, "StructProperty"},
            {"HiddenVisibility", 0x360, "EnumProperty"},
            {"TutorialHighlight", 0x368, "ObjectProperty"},
        }};
    };

    struct FortUserWidget_HitTicks
    {
        static constexpr std::string_view Name = "FortUserWidget_HitTicks";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t bShield = 0x318;
            static constexpr std::uintptr_t HitTime = 0x320;
            static constexpr std::uintptr_t ShieldHitTime = 0x328;
            static constexpr std::uintptr_t TimeSinceHit = 0x330;
            static constexpr std::uintptr_t HitInterval = 0x338;
            static constexpr std::uintptr_t ShieldIconMaxAlpha = 0x340;
            static constexpr std::uintptr_t FadeDuration = 0x348;
            static constexpr std::uintptr_t AccumulatedDamage = 0x350;
            static constexpr std::uintptr_t HitMarker = 0x358;
            static constexpr std::uintptr_t ShieldIcon = 0x360;
            static constexpr std::uintptr_t CurrentHitFeedbackMode = 0x368;
            static constexpr std::uintptr_t bUseNative = 0x369;
            static constexpr std::uintptr_t PrevHitPawn = 0x370;
            static constexpr std::uintptr_t Damage = 0x378;
            static constexpr std::uintptr_t Anim_Elimination2 = 0x380;
            static constexpr std::uintptr_t Anim_ShieldCrack = 0x388;
            static constexpr std::uintptr_t BaseColor_BG1 = 0x390;
            static constexpr std::uintptr_t ShieldColor_BG1 = 0x3A0;
            static constexpr std::uintptr_t CritColor_BG1 = 0x3B0;
            static constexpr std::uintptr_t ElimColor_BG1 = 0x3C0;
            static constexpr std::uintptr_t BaseColor_BG2 = 0x3D0;
            static constexpr std::uintptr_t ShieldColor_BG2 = 0x3E0;
            static constexpr std::uintptr_t CritColor_BG2 = 0x3F0;
            static constexpr std::uintptr_t ElimColor_BG2 = 0x400;
            static constexpr std::uintptr_t BaseColor_Outline1 = 0x410;
            static constexpr std::uintptr_t ShieldColor_Outline1 = 0x420;
            static constexpr std::uintptr_t CritColor_Outline1 = 0x430;
            static constexpr std::uintptr_t ElimColor_Outline1 = 0x440;
            static constexpr std::uintptr_t BaseColor_Outline2 = 0x450;
            static constexpr std::uintptr_t ShieldColor_Outline2 = 0x460;
            static constexpr std::uintptr_t CritColor_Outline2 = 0x470;
            static constexpr std::uintptr_t ElimColor_Outline2 = 0x480;
            static constexpr std::uintptr_t UseNativeMarkerTag = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 33> Properties{{
            {"bShield", 0x318, "BoolProperty"},
            {"HitTime", 0x320, "DoubleProperty"},
            {"ShieldHitTime", 0x328, "DoubleProperty"},
            {"TimeSinceHit", 0x330, "DoubleProperty"},
            {"HitInterval", 0x338, "DoubleProperty"},
            {"ShieldIconMaxAlpha", 0x340, "DoubleProperty"},
            {"FadeDuration", 0x348, "DoubleProperty"},
            {"AccumulatedDamage", 0x350, "DoubleProperty"},
            {"HitMarker", 0x358, "ObjectProperty"},
            {"ShieldIcon", 0x360, "ObjectProperty"},
            {"CurrentHitFeedbackMode", 0x368, "EnumProperty"},
            {"bUseNative", 0x369, "BoolProperty"},
            {"PrevHitPawn", 0x370, "ObjectProperty"},
            {"Damage", 0x378, "DoubleProperty"},
            {"Anim_Elimination2", 0x380, "ObjectProperty"},
            {"Anim_ShieldCrack", 0x388, "ObjectProperty"},
            {"BaseColor_BG1", 0x390, "StructProperty"},
            {"ShieldColor_BG1", 0x3A0, "StructProperty"},
            {"CritColor_BG1", 0x3B0, "StructProperty"},
            {"ElimColor_BG1", 0x3C0, "StructProperty"},
            {"BaseColor_BG2", 0x3D0, "StructProperty"},
            {"ShieldColor_BG2", 0x3E0, "StructProperty"},
            {"CritColor_BG2", 0x3F0, "StructProperty"},
            {"ElimColor_BG2", 0x400, "StructProperty"},
            {"BaseColor_Outline1", 0x410, "StructProperty"},
            {"ShieldColor_Outline1", 0x420, "StructProperty"},
            {"CritColor_Outline1", 0x430, "StructProperty"},
            {"ElimColor_Outline1", 0x440, "StructProperty"},
            {"BaseColor_Outline2", 0x450, "StructProperty"},
            {"ShieldColor_Outline2", 0x460, "StructProperty"},
            {"CritColor_Outline2", 0x470, "StructProperty"},
            {"ElimColor_Outline2", 0x480, "StructProperty"},
            {"UseNativeMarkerTag", 0x490, "StructProperty"},
        }};
    };

}
