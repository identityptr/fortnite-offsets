#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseSimulationMetadata
{
    struct VerseSimulationAttribConfig
    {
        static constexpr std::string_view Name = "VerseSimulationAttribConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedEditablePropertyNames = 0x28;
            static constexpr std::uintptr_t DisallowedEditablePropertyNames = 0x38;
            static constexpr std::uintptr_t DisallowedObjectPropertyClasses = 0x48;
            static constexpr std::uintptr_t bAllowTuples = 0x58;
            static constexpr std::uintptr_t bAllowMultidimensionalArrays = 0x59;
            static constexpr std::uintptr_t bFilterProperties = 0x5A;
            static constexpr std::uintptr_t bFilterObjectProperties = 0x5B;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"AllowedEditablePropertyNames", 0x28, "ArrayProperty"},
            {"DisallowedEditablePropertyNames", 0x38, "ArrayProperty"},
            {"DisallowedObjectPropertyClasses", 0x48, "ArrayProperty"},
            {"bAllowTuples", 0x58, "BoolProperty"},
            {"bAllowMultidimensionalArrays", 0x59, "BoolProperty"},
            {"bFilterProperties", 0x5A, "BoolProperty"},
            {"bFilterObjectProperties", 0x5B, "BoolProperty"},
        }};
    };

}
