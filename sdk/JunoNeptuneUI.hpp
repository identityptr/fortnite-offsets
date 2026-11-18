#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoNeptuneUI
{
    struct JunoQuestObjectiveViewModel
    {
        static constexpr std::string_view Name = "JunoQuestObjectiveViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestName = 0x88;
            static constexpr std::uintptr_t FlavorText = 0x98;
            static constexpr std::uintptr_t AchievedCount = 0xA8;
            static constexpr std::uintptr_t RequiredCount = 0xAC;
            static constexpr std::uintptr_t bHasExpirationTime = 0xB0;
            static constexpr std::uintptr_t ExpirationTime = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"QuestName", 0x88, "TextProperty"},
            {"FlavorText", 0x98, "TextProperty"},
            {"AchievedCount", 0xA8, "IntProperty"},
            {"RequiredCount", 0xAC, "IntProperty"},
            {"bHasExpirationTime", 0xB0, "BoolProperty"},
            {"ExpirationTime", 0xB8, "StructProperty"},
        }};
    };

    struct JunoRiftForgeViewModel
    {
        static constexpr std::string_view Name = "JunoRiftForgeViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedSlot = 0x78;
            static constexpr std::uintptr_t StatEntries = 0x80;
            static constexpr std::uintptr_t SelectedRecipeRequirements = 0x90;
            static constexpr std::uintptr_t RuneForgeableInventorySlots = 0xA0;
            static constexpr std::uintptr_t PlayerInventoryViewModel = 0xB0;
            static constexpr std::uintptr_t InventoryFilterViewModel = 0xB8;
            static constexpr std::uintptr_t WeakCraftingObject = 0xC0;
            static constexpr std::uintptr_t UpgradeRegistry = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SelectedSlot", 0x78, "ObjectProperty"},
            {"StatEntries", 0x80, "ArrayProperty"},
            {"SelectedRecipeRequirements", 0x90, "ArrayProperty"},
            {"RuneForgeableInventorySlots", 0xA0, "ArrayProperty"},
            {"PlayerInventoryViewModel", 0xB0, "ObjectProperty"},
            {"InventoryFilterViewModel", 0xB8, "ObjectProperty"},
            {"WeakCraftingObject", 0xC0, "WeakObjectProperty"},
            {"UpgradeRegistry", 0xC8, "StructProperty"},
        }};
    };

    struct JunoStormKingHealthViewModel
    {
        static constexpr std::string_view Name = "JunoStormKingHealthViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t HealthInfo = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HealthInfo", 0x78, "StructProperty"},
        }};
    };

    struct JunoStormRiftTimerViewModel
    {
        static constexpr std::string_view Name = "JunoStormRiftTimerViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentTime = 0x78;
            static constexpr std::uintptr_t BarPercentage = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurrentTime", 0x78, "FloatProperty"},
            {"BarPercentage", 0x7C, "FloatProperty"},
        }};
    };

    struct JunoUrgentQuestsViewModel
    {
        static constexpr std::string_view Name = "JunoUrgentQuestsViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t NewQuest = 0x78;
            static constexpr std::uintptr_t RemovedQuest = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NewQuest", 0x78, "ObjectProperty"},
            {"RemovedQuest", 0x80, "ObjectProperty"},
        }};
    };

}
