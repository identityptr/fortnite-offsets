#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Tweening
{
    struct ActorTweening
    {
        static constexpr std::string_view Name = "ActorTweening";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MaterialTweening
    {
        static constexpr std::string_view Name = "MaterialTweening";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MeshMaterialTweening
    {
        static constexpr std::string_view Name = "MeshMaterialTweening";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TweenManager
    {
        static constexpr std::string_view Name = "TweenManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t TweenContexts = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TweenContexts", 0x58, "MapProperty"},
        }};
    };

    struct TweenMaterialParameterInfo
    {
        static constexpr std::string_view Name = "TweenMaterialParameterInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ParameterName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ParameterName", 0x28, "NameProperty"},
        }};
    };

    struct TweenSequence
    {
        static constexpr std::string_view Name = "TweenSequence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SequenceEntries = 0x28;
            static constexpr std::uintptr_t TweenManager = 0x38;
            static constexpr std::uintptr_t TimerHandles = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SequenceEntries", 0x28, "ArrayProperty"},
            {"TweenManager", 0x38, "ObjectProperty"},
            {"TimerHandles", 0x40, "ArrayProperty"},
        }};
    };

    struct TweenSplineInfo
    {
        static constexpr std::string_view Name = "TweenSplineInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Spline = 0x28;
            static constexpr std::uintptr_t Alignment = 0x30;
            static constexpr std::uintptr_t bIgnorePitch = 0x31;
            static constexpr std::uintptr_t bIgnoreYaw = 0x32;
            static constexpr std::uintptr_t bIgnoreRoll = 0x33;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Spline", 0x28, "WeakObjectProperty"},
            {"Alignment", 0x30, "EnumProperty"},
            {"bIgnorePitch", 0x31, "BoolProperty"},
            {"bIgnoreYaw", 0x32, "BoolProperty"},
            {"bIgnoreRoll", 0x33, "BoolProperty"},
        }};
    };

    struct WidgetTweening
    {
        static constexpr std::string_view Name = "WidgetTweening";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
