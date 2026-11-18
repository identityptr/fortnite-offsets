#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MorningBellBasketRuntime
{
    struct FortControllerComponent_MorningBellBasket
    {
        static constexpr std::string_view Name = "FortControllerComponent_MorningBellBasket";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent_QuickBarDefinitionsModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t bRemovePickaxeSlot = 0xC8;
            static constexpr std::uintptr_t bOverridePrimaryQuickBar = 0xC9;
            static constexpr std::uintptr_t bOverridePimaryQuickBarSlotCount = 0xCA;
            static constexpr std::uintptr_t PrimaryQuickBarSlotCountOverride = 0xCC;
            static constexpr std::uintptr_t PrimaryQuickBarPerSlotOverrideData = 0xD0;
            static constexpr std::uintptr_t bOverrideSecondaryQuickbar = 0xE0;
            static constexpr std::uintptr_t SecondaryQuickBarPerSlotOverrideData = 0xE8;
            static constexpr std::uintptr_t bOverrideCreativeQuickbar = 0xF8;
            static constexpr std::uintptr_t CreativeQuickBarPerSlotOverrideData = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bRemovePickaxeSlot", 0xC8, "BoolProperty"},
            {"bOverridePrimaryQuickBar", 0xC9, "BoolProperty"},
            {"bOverridePimaryQuickBarSlotCount", 0xCA, "BoolProperty"},
            {"PrimaryQuickBarSlotCountOverride", 0xCC, "IntProperty"},
            {"PrimaryQuickBarPerSlotOverrideData", 0xD0, "ArrayProperty"},
            {"bOverrideSecondaryQuickbar", 0xE0, "BoolProperty"},
            {"SecondaryQuickBarPerSlotOverrideData", 0xE8, "ArrayProperty"},
            {"bOverrideCreativeQuickbar", 0xF8, "BoolProperty"},
            {"CreativeQuickBarPerSlotOverrideData", 0x100, "ArrayProperty"},
        }};
    };

    struct FortGameStateComponent_MorningBellBasket
    {
        static constexpr std::string_view Name = "FortGameStateComponent_MorningBellBasket";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowItemToastWhenGranted = 0xC0;
            static constexpr std::uintptr_t DebugItemToGrant = 0xC8;
            static constexpr std::uintptr_t PlayerBotsGrantedItemsChance = 0xE8;
            static constexpr std::uintptr_t PlayerBotsMinGrantedItems = 0x110;
            static constexpr std::uintptr_t PlayerBotsMaxGrantedItems = 0x138;
            static constexpr std::uintptr_t PawnPossessedSubscribedControllers = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bShowItemToastWhenGranted", 0xC0, "BoolProperty"},
            {"DebugItemToGrant", 0xC8, "SoftObjectProperty"},
            {"PlayerBotsGrantedItemsChance", 0xE8, "StructProperty"},
            {"PlayerBotsMinGrantedItems", 0x110, "StructProperty"},
            {"PlayerBotsMaxGrantedItems", 0x138, "StructProperty"},
            {"PawnPossessedSubscribedControllers", 0x160, "ArrayProperty"},
        }};
    };

}
