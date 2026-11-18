#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Learning
{
    struct LearningNeuralNetworkData
    {
        static constexpr std::string_view Name = "LearningNeuralNetworkData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InputSize = 0x28;
            static constexpr std::uintptr_t OutputSize = 0x2C;
            static constexpr std::uintptr_t CompatibilityHash = 0x30;
            static constexpr std::uintptr_t ContentHash = 0x34;
            static constexpr std::uintptr_t FileData = 0x38;
            static constexpr std::uintptr_t UpdateNumber = 0x48;
            static constexpr std::uintptr_t ModelData = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"InputSize", 0x28, "IntProperty"},
            {"OutputSize", 0x2C, "IntProperty"},
            {"CompatibilityHash", 0x30, "IntProperty"},
            {"ContentHash", 0x34, "IntProperty"},
            {"FileData", 0x38, "ArrayProperty"},
            {"UpdateNumber", 0x48, "IntProperty"},
            {"ModelData", 0x50, "ObjectProperty"},
        }};
    };

}
