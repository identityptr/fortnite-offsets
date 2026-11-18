#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Figment_EventsRuntime
{
    struct FortAthenaMutator_FigmentEvents
    {
        static constexpr std::string_view Name = "FortAthenaMutator_FigmentEvents";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t UIToHideDuringSpecialEvent = 0x2F0;
            static constexpr std::uintptr_t UIToHideDuringSpecialEvent_Mobile = 0x310;
            static constexpr std::uintptr_t BotsEnabledHotfixOverride = 0x330;
            static constexpr std::uintptr_t BotsCalendarEvent = 0x358;
            static constexpr std::uintptr_t bBotsEnabledWhenCalendarActive = 0x368;
            static constexpr std::uintptr_t BuildingBlockedHUDVisibilityTags = 0x370;
            static constexpr std::uintptr_t bBuildingBlocked = 0x390;
            static constexpr std::uintptr_t bGlobalEmoteBlock = 0x391;
            static constexpr std::uintptr_t NamedWeightForContainerLootRoll = 0x394;
            static constexpr std::uintptr_t WeightForContainerLootRoll = 0x398;
            static constexpr std::uintptr_t bDisableSupplyDrops = 0x39C;
            static constexpr std::uintptr_t bDisableHUD = 0x39D;
            static constexpr std::uintptr_t bPlayersAreInvincible = 0x39E;
            static constexpr std::uintptr_t bDisablePlayerWeapons = 0x39F;
            static constexpr std::uintptr_t PlayerInvincibilityCheckFrequency = 0x3A0;
            static constexpr std::uintptr_t DisableWeaponsCheckFrequency = 0x3A4;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"UIToHideDuringSpecialEvent", 0x2F0, "StructProperty"},
            {"UIToHideDuringSpecialEvent_Mobile", 0x310, "StructProperty"},
            {"BotsEnabledHotfixOverride", 0x330, "StructProperty"},
            {"BotsCalendarEvent", 0x358, "StrProperty"},
            {"bBotsEnabledWhenCalendarActive", 0x368, "BoolProperty"},
            {"BuildingBlockedHUDVisibilityTags", 0x370, "StructProperty"},
            {"bBuildingBlocked", 0x390, "BoolProperty"},
            {"bGlobalEmoteBlock", 0x391, "BoolProperty"},
            {"NamedWeightForContainerLootRoll", 0x394, "NameProperty"},
            {"WeightForContainerLootRoll", 0x398, "FloatProperty"},
            {"bDisableSupplyDrops", 0x39C, "BoolProperty"},
            {"bDisableHUD", 0x39D, "BoolProperty"},
            {"bPlayersAreInvincible", 0x39E, "BoolProperty"},
            {"bDisablePlayerWeapons", 0x39F, "BoolProperty"},
            {"PlayerInvincibilityCheckFrequency", 0x3A0, "FloatProperty"},
            {"DisableWeaponsCheckFrequency", 0x3A4, "FloatProperty"},
        }};
    };

}
