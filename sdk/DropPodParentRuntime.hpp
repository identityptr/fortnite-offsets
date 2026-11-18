#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DropPodParentRuntime
{
    struct FortDropPod
    {
        static constexpr std::string_view Name = "FortDropPod";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingSMActor";
        struct Offsets
        {
            static constexpr std::uintptr_t DamageSet = 0xB18;
            static constexpr std::uintptr_t bBlockMarking = 0xB20;
            static constexpr std::uintptr_t bCanBeMarked = 0xB20;
            static constexpr std::uintptr_t MarkerDisplay = 0xB28;
            static constexpr std::uintptr_t MarkerPositionOffset = 0xBD8;
            static constexpr std::uintptr_t WorldMarkerType = 0xBF0;
            static constexpr std::uintptr_t Hotfix_StartingHeight = 0xBF8;
            static constexpr std::uintptr_t Hotfix_GroundTraceBuffer = 0xC20;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"DamageSet", 0xB18, "ObjectProperty"},
            {"bBlockMarking", 0xB20, "BoolProperty"},
            {"bCanBeMarked", 0xB20, "BoolProperty"},
            {"MarkerDisplay", 0xB28, "StructProperty"},
            {"MarkerPositionOffset", 0xBD8, "StructProperty"},
            {"WorldMarkerType", 0xBF0, "EnumProperty"},
            {"Hotfix_StartingHeight", 0xBF8, "StructProperty"},
            {"Hotfix_GroundTraceBuffer", 0xC20, "StructProperty"},
        }};
    };

}
