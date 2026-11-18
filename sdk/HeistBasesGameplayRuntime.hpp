#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HeistBasesGameplayRuntime
{
    struct FortGameStateComponent_HeistDisplayCaseItemManager
    {
        static constexpr std::string_view Name = "FortGameStateComponent_HeistDisplayCaseItemManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnDisplayCaseItemManagerReady = 0xC0;
            static constexpr std::uintptr_t AllDisplayCaseItems = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnDisplayCaseItemManagerReady", 0xC0, "MulticastInlineDelegateProperty"},
            {"AllDisplayCaseItems", 0xD0, "ArrayProperty"},
        }};
    };

    struct FortHeistDisplayCase
    {
        static constexpr std::string_view Name = "FortHeistDisplayCase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingSMActor";
        struct Offsets
        {
            static constexpr std::uintptr_t bReplicateLongInteractionDetails = 0xB10;
            static constexpr std::uintptr_t bBlockMarking = 0xB11;
            static constexpr std::uintptr_t bCanBeMarked = 0xB11;
            static constexpr std::uintptr_t MarkerDisplay = 0xB18;
            static constexpr std::uintptr_t MarkerPositionOffset = 0xBC8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bReplicateLongInteractionDetails", 0xB10, "BoolProperty"},
            {"bBlockMarking", 0xB11, "BoolProperty"},
            {"bCanBeMarked", 0xB11, "BoolProperty"},
            {"MarkerDisplay", 0xB18, "StructProperty"},
            {"MarkerPositionOffset", 0xBC8, "StructProperty"},
        }};
    };

}
