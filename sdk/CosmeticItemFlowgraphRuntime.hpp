#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CosmeticItemFlowgraphRuntime
{
    struct CosmeticItemStep_GliderLoadAssets
    {
        static constexpr std::string_view Name = "CosmeticItemStep_GliderLoadAssets";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStep";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowgraphKey = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FlowgraphKey", 0x58, "StructProperty"},
        }};
    };

    struct CosmeticItemStep_GliderPostLoad
    {
        static constexpr std::string_view Name = "CosmeticItemStep_GliderPostLoad";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStep";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowgraphKey = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FlowgraphKey", 0x58, "StructProperty"},
        }};
    };

    struct CosmeticItemStep_GliderPreamble
    {
        static constexpr std::string_view Name = "CosmeticItemStep_GliderPreamble";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStep";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowgraphKey = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FlowgraphKey", 0x58, "StructProperty"},
        }};
    };

}
