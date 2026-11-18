#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DelMarSettings
{
    struct DelMarClientSettingRecordPartition
    {
        static constexpr std::string_view Name = "DelMarClientSettingRecordPartition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortClientSettingRecordPartition";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarInputContextRedirectMap
    {
        static constexpr std::string_view Name = "DelMarInputContextRedirectMap";
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

    struct DelMarInputModifierAlwaysOne
    {
        static constexpr std::string_view Name = "DelMarInputModifierAlwaysOne";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarInputModifierClamp
    {
        static constexpr std::string_view Name = "DelMarInputModifierClamp";
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

    struct DelMarInputModifierPitchInversion
    {
        static constexpr std::string_view Name = "DelMarInputModifierPitchInversion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarInputModifierScalarBySign
    {
        static constexpr std::string_view Name = "DelMarInputModifierScalarBySign";
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

    struct DelMarInputModifierZeroOut
    {
        static constexpr std::string_view Name = "DelMarInputModifierZeroOut";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputModifier";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarSettingsGlobals
    {
        static constexpr std::string_view Name = "DelMarSettingsGlobals";
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

    struct GameFeatureAction_AddInputContextMappingPlatformOverrides
    {
        static constexpr std::string_view Name = "GameFeatureAction_AddInputContextMappingPlatformOverrides";
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
