#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortDelMarSettings
{
    struct FortDelMarClientSettingRecordPartition
    {
        static constexpr std::string_view Name = "FortDelMarClientSettingRecordPartition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortClientSettingRecordPartition";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDelMarInputContextRedirectMap
    {
        static constexpr std::string_view Name = "FortDelMarInputContextRedirectMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t RedirectMap = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RedirectMap", 0x28, "MapProperty"},
        }};
    };

    struct FortDelMarInputModifierAlwaysOne
    {
        static constexpr std::string_view Name = "FortDelMarInputModifierAlwaysOne";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDelMarInputModifierClamp
    {
        static constexpr std::string_view Name = "FortDelMarInputModifierClamp";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t Minimum = 0x28;
            static constexpr std::uintptr_t Maximum = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Minimum", 0x28, "StructProperty"},
            {"Maximum", 0x40, "StructProperty"},
        }};
    };

    struct FortDelMarInputModifierPitchInversion
    {
        static constexpr std::string_view Name = "FortDelMarInputModifierPitchInversion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDelMarInputModifierScalarBySign
    {
        static constexpr std::string_view Name = "FortDelMarInputModifierScalarBySign";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t PositiveScalar = 0x28;
            static constexpr std::uintptr_t NegativeScalar = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PositiveScalar", 0x28, "StructProperty"},
            {"NegativeScalar", 0x40, "StructProperty"},
        }};
    };

    struct FortDelMarInputModifierZeroOut
    {
        static constexpr std::string_view Name = "FortDelMarInputModifierZeroOut";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDelMarSettingsGlobals
    {
        static constexpr std::string_view Name = "FortDelMarSettingsGlobals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultTouchControlsLayout = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultTouchControlsLayout", 0x28, "StructProperty"},
        }};
    };

    struct GameFeatureAction_FortDelMarAddInputContextMappingPlatformOverrides
    {
        static constexpr std::string_view Name = "GameFeatureAction_FortDelMarAddInputContextMappingPlatformOverrides";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction_AddInputContextMapping";
        struct Offsets
        {
            static constexpr std::uintptr_t DigitalRedirectMap = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DigitalRedirectMap", 0x70, "SoftObjectProperty"},
        }};
    };

}
