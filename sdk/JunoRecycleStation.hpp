#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoRecycleStation
{
    struct JunoGameStateComponent_Recycling
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_Recycling";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t IngredientOverrideRegistry = 0xC0;
            static constexpr std::uintptr_t PartOverrideRegistry = 0xC4;
            static constexpr std::uintptr_t InputItemOverrideRegistry = 0xC8;
            static constexpr std::uintptr_t DurabilityOutputCurve = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"IngredientOverrideRegistry", 0xC0, "StructProperty"},
            {"PartOverrideRegistry", 0xC4, "StructProperty"},
            {"InputItemOverrideRegistry", 0xC8, "StructProperty"},
            {"DurabilityOutputCurve", 0xD0, "StructProperty"},
        }};
    };

    struct JunoRecycleStationAnalyticsComponent
    {
        static constexpr std::string_view Name = "JunoRecycleStationAnalyticsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPassiveCraftingAnalyticsComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AccumulatedItem = 0xC8;
            static constexpr std::uintptr_t AccumulatedContributors = 0xD8;
            static constexpr std::uintptr_t AccumulatedIngredients = 0xE8;
            static constexpr std::uintptr_t Recipe = 0xF8;
            static constexpr std::uintptr_t AccumulatedCraftingTime = 0x100;
            static constexpr std::uintptr_t bUsedResourcesFromNearbyChests = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AccumulatedItem", 0xC8, "StructProperty"},
            {"AccumulatedContributors", 0xD8, "ArrayProperty"},
            {"AccumulatedIngredients", 0xE8, "ArrayProperty"},
            {"Recipe", 0xF8, "NameProperty"},
            {"AccumulatedCraftingTime", 0x100, "DoubleProperty"},
            {"bUsedResourcesFromNearbyChests", 0x108, "BoolProperty"},
        }};
    };

    struct JunoRecycleStationCheatManager
    {
        static constexpr std::string_view Name = "JunoRecycleStationCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoRecycleStationComponent
    {
        static constexpr std::string_view Name = "JunoRecycleStationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoMultiCraftingComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMultiCraftingFinished = 0xC8;
            static constexpr std::uintptr_t OnMultiCraftingBlocked = 0xD8;
            static constexpr std::uintptr_t TimeToStartProcess = 0x100;
            static constexpr std::uintptr_t CachedCraftingObjectComponent = 0x104;
            static constexpr std::uintptr_t CachedInventoryComponent = 0x10C;
            static constexpr std::uintptr_t AnalyticsComponent = 0x118;
            static constexpr std::uintptr_t CraftingProcesses = 0x120;
            static constexpr std::uintptr_t KeyGenerator = 0x138;
            static constexpr std::uintptr_t bIsCraftingBlocked = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OnMultiCraftingFinished", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnMultiCraftingBlocked", 0xD8, "MulticastInlineDelegateProperty"},
            {"TimeToStartProcess", 0x100, "FloatProperty"},
            {"CachedCraftingObjectComponent", 0x104, "WeakObjectProperty"},
            {"CachedInventoryComponent", 0x10C, "WeakObjectProperty"},
            {"AnalyticsComponent", 0x118, "ObjectProperty"},
            {"CraftingProcesses", 0x120, "ArrayProperty"},
            {"KeyGenerator", 0x138, "Int64Property"},
            {"bIsCraftingBlocked", 0x150, "BoolProperty"},
        }};
    };

    struct JunoRecycleStationLibrary
    {
        static constexpr std::string_view Name = "JunoRecycleStationLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
