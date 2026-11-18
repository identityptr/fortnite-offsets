#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseUI
{
    struct VerseUIImageBlock
    {
        static constexpr std::string_view Name = "VerseUIImageBlock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIFrameworkImageBlock";
        struct Offsets
        {
            static constexpr std::uintptr_t Data = 0xE0;
            static constexpr std::uintptr_t bWaitForResourceToBeLoaded = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Data", 0xE0, "StructProperty"},
            {"bWaitForResourceToBeLoaded", 0x120, "BoolProperty"},
        }};
    };

    struct VerseUIPlayerComponent
    {
        static constexpr std::string_view Name = "VerseUIPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIFrameworkPlayerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerUI = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlayerUI", 0x278, "ObjectProperty"},
        }};
    };

    struct VerseUIUserWidget
    {
        static constexpr std::string_view Name = "VerseUIUserWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIFrameworkUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedViewmodelList = 0x170;
            static constexpr std::uintptr_t ReplicatedPropertyList = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ReplicatedViewmodelList", 0x170, "StructProperty"},
            {"ReplicatedPropertyList", 0x1D0, "StructProperty"},
        }};
    };

    struct VerseUIWorldSubsystem
    {
        static constexpr std::string_view Name = "VerseUIWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseWidgetNativeBase
    {
        static constexpr std::string_view Name = "VerseWidgetNativeBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t UIFWidgetInstance = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UIFWidgetInstance", 0x30, "ObjectProperty"},
        }};
    };

    struct WidgetAssetReflectionConfig
    {
        static constexpr std::string_view Name = "WidgetAssetReflectionConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ExcludedPackageRoots = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExcludedPackageRoots", 0x28, "ArrayProperty"},
        }};
    };

}
