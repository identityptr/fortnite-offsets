#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LFNCellTransformer
{
    struct LFNCellTransformer
    {
        static constexpr std::string_view Name = "LFNCellTransformer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FNCellTransformer";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bEnabled", 0x28, "BoolProperty"},
        }};
    };

    struct LFNWorldPartitionActor
    {
        static constexpr std::string_view Name = "LFNWorldPartitionActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FNWorldPartitionActor";
        struct Offsets
        {
            static constexpr std::uintptr_t ISMComponentSettings = 0x280;
            static constexpr std::uintptr_t InvalidPrimitives = 0x290;
            static constexpr std::uintptr_t bCellTransformerIsGridAligned = 0x370;
            static constexpr std::uintptr_t ColorSwaps = 0x378;
            static constexpr std::uintptr_t ColorLUTs = 0x388;
            static constexpr std::uintptr_t AtlasLUTs = 0x398;
            static constexpr std::uintptr_t ColorLookup = 0x3A8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ISMComponentSettings", 0x280, "ArrayProperty"},
            {"InvalidPrimitives", 0x290, "ArrayProperty"},
            {"bCellTransformerIsGridAligned", 0x370, "BoolProperty"},
            {"ColorSwaps", 0x378, "ArrayProperty"},
            {"ColorLUTs", 0x388, "ArrayProperty"},
            {"AtlasLUTs", 0x398, "ArrayProperty"},
            {"ColorLookup", 0x3A8, "ArrayProperty"},
        }};
    };

}
