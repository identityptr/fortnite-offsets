#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VersePCG
{
    struct PCGEntityComponentExecutionSource
    {
        static constexpr std::string_view Name = "PCGEntityComponentExecutionSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bGenerated = 0x58;
            static constexpr std::uintptr_t GeneratedBounds = 0x60;
            static constexpr std::uintptr_t ManagedResourceContainer = 0x98;
            static constexpr std::uintptr_t GraphInstance = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bGenerated", 0x58, "BoolProperty"},
            {"GeneratedBounds", 0x60, "StructProperty"},
            {"ManagedResourceContainer", 0x98, "StructProperty"},
            {"GraphInstance", 0xB0, "ObjectProperty"},
        }};
    };

}
