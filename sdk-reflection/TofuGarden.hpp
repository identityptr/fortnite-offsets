#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TofuGarden
{
    struct FortCheatManager_TofuGarden
    {
        static constexpr std::string_view Name = "FortCheatManager_TofuGarden";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortPlayerStateComponent_TofuGarden
    {
        static constexpr std::string_view Name = "FortPlayerStateComponent_TofuGarden";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TofuGardenPointsItem = 0xC0;
            static constexpr std::uintptr_t MinimumPlayerBotProgress = 0xE0;
            static constexpr std::uintptr_t MaximumPlayerBotProgress = 0x108;
            static constexpr std::uintptr_t CachedTofuGardenProgress = 0x130;
            static constexpr std::uintptr_t CurrentEmoteStat = 0x150;
            static constexpr std::uintptr_t CancellableEmoteTags = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TofuGardenPointsItem", 0xC0, "SoftObjectProperty"},
            {"MinimumPlayerBotProgress", 0xE0, "StructProperty"},
            {"MaximumPlayerBotProgress", 0x108, "StructProperty"},
            {"CachedTofuGardenProgress", 0x130, "IntProperty"},
            {"CurrentEmoteStat", 0x150, "NameProperty"},
            {"CancellableEmoteTags", 0x158, "StructProperty"},
        }};
    };

    struct TofuGardenFunctionLibrary
    {
        static constexpr std::string_view Name = "TofuGardenFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
