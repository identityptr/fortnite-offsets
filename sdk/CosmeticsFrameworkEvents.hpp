#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CosmeticsFrameworkEvents
{
    struct CosmeticsEventHandle
    {
        static constexpr std::string_view Name = "CosmeticsEventHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ID", 0x0, "UInt64Property"},
        }};
    };

    struct CosmeticsEventRegistrar
    {
        static constexpr std::string_view Name = "CosmeticsEventRegistrar";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "RegisterOnCosmeticApplicationCompleted_BP",
        }};
    };

    struct CosmeticsFinishable
    {
        static constexpr std::string_view Name = "CosmeticsFinishable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CosmeticsMeshTarget
    {
        static constexpr std::string_view Name = "CosmeticsMeshTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
