#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MaterialShaderQualitySettings
{
    struct MaterialQualityOverrides
    {
        static constexpr std::string_view Name = "MaterialQualityOverrides";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bDiscardQualityDuringCook = 0x0;
            static constexpr std::uintptr_t bEnableOverride = 0x1;
            static constexpr std::uintptr_t bForceFullyRough = 0x2;
            static constexpr std::uintptr_t bForceNonMetal = 0x3;
            static constexpr std::uintptr_t bForceDisableLMDirectionality = 0x4;
            static constexpr std::uintptr_t bForceDisablePreintegratedGF = 0x5;
            static constexpr std::uintptr_t bDisableMaterialNormalCalculation = 0x6;
            static constexpr std::uintptr_t MobileShadowQuality = 0x7;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bDiscardQualityDuringCook", 0x0, "BoolProperty"},
            {"bEnableOverride", 0x1, "BoolProperty"},
            {"bForceFullyRough", 0x2, "BoolProperty"},
            {"bForceNonMetal", 0x3, "BoolProperty"},
            {"bForceDisableLMDirectionality", 0x4, "BoolProperty"},
            {"bForceDisablePreintegratedGF", 0x5, "BoolProperty"},
            {"bDisableMaterialNormalCalculation", 0x6, "BoolProperty"},
            {"MobileShadowQuality", 0x7, "EnumProperty"},
        }};
    };

    struct MaterialShaderQualitySettings
    {
        static constexpr std::string_view Name = "MaterialShaderQualitySettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ForwardSettingMap = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ForwardSettingMap", 0x28, "MapProperty"},
        }};
    };

    struct ShaderPlatformQualitySettings
    {
        static constexpr std::string_view Name = "ShaderPlatformQualitySettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t QualityOverrides = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QualityOverrides", 0x28, "StructProperty"},
        }};
    };

}
