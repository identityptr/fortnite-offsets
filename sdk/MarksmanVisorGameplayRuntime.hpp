#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MarksmanVisorGameplayRuntime
{
    struct FortGameStateComponent_MarksmanVisor
    {
        static constexpr std::string_view Name = "FortGameStateComponent_MarksmanVisor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent_FootstepVisualization";
        struct Offsets
        {
            static constexpr std::uintptr_t OnVisorLocalViewTargetPawnsChanged = 0x270;
            static constexpr std::uintptr_t LocalViewTargetPawnsSettleSeconds = 0x280;
            static constexpr std::uintptr_t VisorLocalViewTargetPawns = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnVisorLocalViewTargetPawnsChanged", 0x270, "MulticastInlineDelegateProperty"},
            {"LocalViewTargetPawnsSettleSeconds", 0x280, "StructProperty"},
            {"VisorLocalViewTargetPawns", 0x2A8, "ArrayProperty"},
        }};
    };

}
