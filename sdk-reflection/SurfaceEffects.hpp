#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SurfaceEffects
{
    struct SurfaceEffectRule
    {
        static constexpr std::string_view Name = "SurfaceEffectRule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SurfaceEffectTableRow
    {
        static constexpr std::string_view Name = "SurfaceEffectTableRow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TableRowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Rule = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Rule", 0x8, "ObjectProperty"},
        }};
    };

    struct SurfaceEffectsSettings
    {
        static constexpr std::string_view Name = "SurfaceEffectsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SurfaceEffectsDataTable = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SurfaceEffectsDataTable", 0x30, "StructProperty"},
        }};
    };

    struct SurfaceEffectsSubsystem
    {
        static constexpr std::string_view Name = "SurfaceEffectsSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t SurfaceEffectsData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SurfaceEffectsData", 0x30, "ObjectProperty"},
        }};
    };

}
