#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FirePetalTurtleIslandRuntime
{
    struct FirePetalTurtleHeadActor
    {
        static constexpr std::string_view Name = "FirePetalTurtleHeadActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t DistanceToAlwaysTickPose = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DistanceToAlwaysTickPose", 0x278, "StructProperty"},
        }};
    };

    struct TurtleHeadActorInterface
    {
        static constexpr std::string_view Name = "TurtleHeadActorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TurtleIslandHeadCreatureAnimInstance
    {
        static constexpr std::string_view Name = "TurtleIslandHeadCreatureAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bShould_Blink = 0x260;
            static constexpr std::uintptr_t bIsChewing = 0x261;
            static constexpr std::uintptr_t bIsChewingAlt = 0x262;
            static constexpr std::uintptr_t ChewingAlphaInterp = 0x268;
            static constexpr std::uintptr_t RandomChewingAlpha = 0x270;
            static constexpr std::uintptr_t BlinkPicker = 0x278;
            static constexpr std::uintptr_t bIsForceBlink = 0x27C;
            static constexpr std::uintptr_t bIsStillChewingCheck = 0x27D;
            static constexpr std::uintptr_t LookVertical = 0x280;
            static constexpr std::uintptr_t LookHorizontal = 0x288;
            static constexpr std::uintptr_t LookHorizontalHead = 0x290;
            static constexpr std::uintptr_t LookVerticalHead = 0x294;
            static constexpr std::uintptr_t PawnLookAtWorldPosition = 0x298;
            static constexpr std::uintptr_t bIsValidLookAtTarget = 0x2B0;
            static constexpr std::uintptr_t bIsLookAway = 0x2B1;
            static constexpr std::uintptr_t bEyeGateOpen = 0x2B2;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"bShould_Blink", 0x260, "BoolProperty"},
            {"bIsChewing", 0x261, "BoolProperty"},
            {"bIsChewingAlt", 0x262, "BoolProperty"},
            {"ChewingAlphaInterp", 0x268, "DoubleProperty"},
            {"RandomChewingAlpha", 0x270, "DoubleProperty"},
            {"BlinkPicker", 0x278, "IntProperty"},
            {"bIsForceBlink", 0x27C, "BoolProperty"},
            {"bIsStillChewingCheck", 0x27D, "BoolProperty"},
            {"LookVertical", 0x280, "DoubleProperty"},
            {"LookHorizontal", 0x288, "DoubleProperty"},
            {"LookHorizontalHead", 0x290, "FloatProperty"},
            {"LookVerticalHead", 0x294, "FloatProperty"},
            {"PawnLookAtWorldPosition", 0x298, "StructProperty"},
            {"bIsValidLookAtTarget", 0x2B0, "BoolProperty"},
            {"bIsLookAway", 0x2B1, "BoolProperty"},
            {"bEyeGateOpen", 0x2B2, "BoolProperty"},
        }};
    };

}
