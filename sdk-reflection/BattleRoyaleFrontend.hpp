#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BattleRoyaleFrontend
{
    struct BattleRoyaleFrontendDynamicUIDirector
    {
        static constexpr std::string_view Name = "BattleRoyaleFrontendDynamicUIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDynamicUIDirector";
        struct Offsets
        {
            static constexpr std::uintptr_t TaggedSceneRegistryType = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TaggedSceneRegistryType", 0x2B0, "StructProperty"},
        }};
    };

    struct BattleRoyaleFrontendExperienceFlow
    {
        static constexpr std::string_view Name = "BattleRoyaleFrontendExperienceFlow";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultFlowStepArray = 0x50;
            static constexpr std::uintptr_t FirstTimeSeasonFlowStepArray = 0x60;
            static constexpr std::uintptr_t BRVideoRating = 0x70;
            static constexpr std::uintptr_t ProductVideoOverrides = 0x80;
            static constexpr std::uintptr_t VideoPlayerClass = 0xA8;
            static constexpr std::uintptr_t HabaneroIntroModalClass = 0xD0;
            static constexpr std::uintptr_t FireModeSelectionReminderModalClass = 0xD8;
            static constexpr std::uintptr_t FireModeSelectionScreenClass = 0xF8;
            static constexpr std::uintptr_t SimpleBuildAndEditModalHelper = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"DefaultFlowStepArray", 0x50, "ArrayProperty"},
            {"FirstTimeSeasonFlowStepArray", 0x60, "ArrayProperty"},
            {"BRVideoRating", 0x70, "MapProperty"},
            {"ProductVideoOverrides", 0x80, "ArrayProperty"},
            {"VideoPlayerClass", 0xA8, "SoftClassProperty"},
            {"HabaneroIntroModalClass", 0xD0, "ClassProperty"},
            {"FireModeSelectionReminderModalClass", 0xD8, "SoftClassProperty"},
            {"FireModeSelectionScreenClass", 0xF8, "SoftClassProperty"},
            {"SimpleBuildAndEditModalHelper", 0x118, "ClassProperty"},
        }};
    };

    struct BattleRoyaleFrontendSubTabSettings
    {
        static constexpr std::string_view Name = "BattleRoyaleFrontendSubTabSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PriorityOverrides = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PriorityOverrides", 0x28, "ArrayProperty"},
        }};
    };

}
