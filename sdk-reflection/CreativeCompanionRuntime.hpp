#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CreativeCompanionRuntime
{
    struct FortAdditionalCompanionReactionTableMappings
    {
        static constexpr std::string_view Name = "FortAdditionalCompanionReactionTableMappings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ReactionSystemDiscriminator = 0x28;
            static constexpr std::uintptr_t AdditionalReactionTableMappings = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ReactionSystemDiscriminator", 0x28, "SoftObjectProperty"},
            {"AdditionalReactionTableMappings", 0x48, "MapProperty"},
        }};
    };

    struct FortGameFeatureAction_SetAdditionalCompanionReactionTables
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_SetAdditionalCompanionReactionTables";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t ReactionTableMappings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReactionTableMappings", 0x28, "SoftObjectProperty"},
        }};
    };

    struct FortUserOptionComponent_Sidekicks
    {
        static constexpr std::string_view Name = "FortUserOptionComponent_Sidekicks";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortUserOptionContainerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bSidekickReactionsEnabled = 0x158;
            static constexpr std::uintptr_t bSidekicksEnabled = 0x158;
            static constexpr std::uintptr_t SidekickVisibility = 0x159;
            static constexpr std::uintptr_t NavMeshTagToApply = 0x15C;
            static constexpr std::uintptr_t CompanionOptionsDisabledTag = 0x160;
            static constexpr std::uintptr_t CompanionsDisabledTag = 0x164;
            static constexpr std::uintptr_t VolumeComponentClass = 0x168;
            static constexpr std::uintptr_t bDoesExperienceSupportCompanion = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bSidekickReactionsEnabled", 0x158, "BoolProperty"},
            {"bSidekicksEnabled", 0x158, "BoolProperty"},
            {"SidekickVisibility", 0x159, "EnumProperty"},
            {"NavMeshTagToApply", 0x15C, "NameProperty"},
            {"CompanionOptionsDisabledTag", 0x160, "StructProperty"},
            {"CompanionsDisabledTag", 0x164, "StructProperty"},
            {"VolumeComponentClass", 0x168, "ClassProperty"},
            {"bDoesExperienceSupportCompanion", 0x170, "BoolProperty"},
        }};
    };

}
