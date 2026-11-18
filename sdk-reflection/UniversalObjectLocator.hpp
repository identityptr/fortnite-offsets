#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::UniversalObjectLocator
{
    struct DirectPathObjectLocator
    {
        static constexpr std::string_view Name = "DirectPathObjectLocator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Path = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Path", 0x0, "StructProperty"},
        }};
    };

    struct SubObjectLocator
    {
        static constexpr std::string_view Name = "SubObjectLocator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PathWithinContext = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PathWithinContext", 0x0, "StrProperty"},
        }};
    };

    struct UniversalObjectLocator
    {
        static constexpr std::string_view Name = "UniversalObjectLocator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Fragments = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Fragments", 0x0, "ArrayProperty"},
        }};
    };

    struct UniversalObjectLocatorEmptyPayload
    {
        static constexpr std::string_view Name = "UniversalObjectLocatorEmptyPayload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UniversalObjectLocatorFragment
    {
        static constexpr std::string_view Name = "UniversalObjectLocatorFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
