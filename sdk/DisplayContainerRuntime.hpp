#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DisplayContainerRuntime
{
    struct FortDisplayContainer
    {
        static constexpr std::string_view Name = "FortDisplayContainer";
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
