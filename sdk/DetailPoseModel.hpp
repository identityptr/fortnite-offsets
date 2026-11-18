#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DetailPoseModel
{
    struct DetailPoseModel
    {
        static constexpr std::string_view Name = "DetailPoseModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NeuralMorphModel";
        struct Offsets
        {
            static constexpr std::uintptr_t DetailPoses = 0x298;
            static constexpr std::uintptr_t BlendSpeed = 0x2A8;
            static constexpr std::uintptr_t bUseRBF = 0x2AC;
            static constexpr std::uintptr_t RBFRange = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DetailPoses", 0x298, "ArrayProperty"},
            {"BlendSpeed", 0x2A8, "FloatProperty"},
            {"bUseRBF", 0x2AC, "BoolProperty"},
            {"RBFRange", 0x2B0, "FloatProperty"},
        }};
    };

    struct DetailPoseModelInputInfo
    {
        static constexpr std::string_view Name = "DetailPoseModelInputInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NeuralMorphInputInfo";
        struct Offsets
        {
            static constexpr std::uintptr_t NumGlobalMorphTargets = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NumGlobalMorphTargets", 0x90, "IntProperty"},
        }};
    };

    struct DetailPoseModelInstance
    {
        static constexpr std::string_view Name = "DetailPoseModelInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NeuralMorphModelInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t NetworkInstance = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NetworkInstance", 0x90, "ObjectProperty"},
        }};
    };

    struct DetailPoseModelVizSettings
    {
        static constexpr std::string_view Name = "DetailPoseModelVizSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NeuralMorphModelVizSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t MaskVizMode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaskVizMode", 0x38, "EnumProperty"},
        }};
    };

}
