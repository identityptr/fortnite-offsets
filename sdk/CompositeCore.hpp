#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CompositeCore
{
    struct CompositeCorePluginSettings
    {
        static constexpr std::string_view Name = "CompositeCorePluginSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bApplyPreExposure = 0x30;
            static constexpr std::uintptr_t DisabledPrimitiveClasses = 0x38;
            static constexpr std::uintptr_t AllowedComponentClasses = 0x48;
            static constexpr std::uintptr_t SceneViewExtensionPriority = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bApplyPreExposure", 0x30, "BoolProperty"},
            {"DisabledPrimitiveClasses", 0x38, "ArrayProperty"},
            {"AllowedComponentClasses", 0x48, "ArrayProperty"},
            {"SceneViewExtensionPriority", 0x58, "IntProperty"},
        }};
    };

    struct CompositeCoreSubsystem
    {
        static constexpr std::string_view Name = "CompositeCoreSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HoldoutCompositeComponent
    {
        static constexpr std::string_view Name = "HoldoutCompositeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsEnabled", 0x240, "BoolProperty"},
        }};
    };

}
