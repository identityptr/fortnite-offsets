#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksMatchmakingCoreRuntime
{
    struct SparksMatchmakingCoreRuntimeOptions
    {
        static constexpr std::string_view Name = "SparksMatchmakingCoreRuntimeOptions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RuntimeOptionsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FriedRiceLinkCode = 0x38;
            static constexpr std::uintptr_t bEnableFriedRiceLink = 0x48;
            static constexpr std::uintptr_t JamIslandLinkCode = 0x50;
            static constexpr std::uintptr_t bEnableJamIslandLink = 0x60;
            static constexpr std::uintptr_t PilgrimQuickplayMnemonic = 0x68;
            static constexpr std::uintptr_t AlternatePilgrimQuickplayMnemonic = 0x78;
            static constexpr std::uintptr_t DefaultMainStageProductMode = 0x88;
            static constexpr std::uintptr_t bEnableBattleStageLink = 0x98;
            static constexpr std::uintptr_t BattleStageParentSetMnemonic = 0xA0;
            static constexpr std::uintptr_t BattleStagePrimaryMnemonic = 0xB0;
            static constexpr std::uintptr_t bUseSparksCustomFillSettings = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"FriedRiceLinkCode", 0x38, "StrProperty"},
            {"bEnableFriedRiceLink", 0x48, "BoolProperty"},
            {"JamIslandLinkCode", 0x50, "StrProperty"},
            {"bEnableJamIslandLink", 0x60, "BoolProperty"},
            {"PilgrimQuickplayMnemonic", 0x68, "StrProperty"},
            {"AlternatePilgrimQuickplayMnemonic", 0x78, "StrProperty"},
            {"DefaultMainStageProductMode", 0x88, "StrProperty"},
            {"bEnableBattleStageLink", 0x98, "BoolProperty"},
            {"BattleStageParentSetMnemonic", 0xA0, "StrProperty"},
            {"BattleStagePrimaryMnemonic", 0xB0, "StrProperty"},
            {"bUseSparksCustomFillSettings", 0xC0, "BoolProperty"},
        }};
    };

    struct SparksMatchmakingUISaveData
    {
        static constexpr std::string_view Name = "SparksMatchmakingUISaveData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
