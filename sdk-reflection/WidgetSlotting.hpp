#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::WidgetSlotting
{
    struct WidgetSlottingBlueprintLibrary
    {
        static constexpr std::string_view Name = "WidgetSlottingBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "RegisterWidgetHost",
            "UnregisterWidgetHost",
        }};
    };

    struct WidgetSlottingContentWidgetInfo
    {
        static constexpr std::string_view Name = "WidgetSlottingContentWidgetInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Widget = 0x0;
            static constexpr std::uintptr_t Padding = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Widget", 0x0, "ObjectProperty"},
            {"Padding", 0x8, "StructProperty"},
        }};
    };

    struct WidgetSlottingHostCollection
    {
        static constexpr std::string_view Name = "WidgetSlottingHostCollection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ContentWidgetInfos = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContentWidgetInfos", 0x10, "ArrayProperty"},
        }};
    };

    struct WidgetSlottingHostInterface
    {
        static constexpr std::string_view Name = "WidgetSlottingHostInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "AddContentToWidgetHost",
            "RemoveContentFromWidgetHost",
        }};
    };

    struct WidgetSlottingHostOverlay
    {
        static constexpr std::string_view Name = "WidgetSlottingHostOverlay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Overlay";
        struct Offsets
        {
            static constexpr std::uintptr_t HostTag = 0x198;
            static constexpr std::uintptr_t bIsPlayerSpecific = 0x19C;
            static constexpr std::uintptr_t SlottedWidgetDefaultHorizontalAlignment = 0x19D;
            static constexpr std::uintptr_t SlottedWidgetDefaultVerticalAlignment = 0x19E;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"HostTag", 0x198, "StructProperty"},
            {"bIsPlayerSpecific", 0x19C, "BoolProperty"},
            {"SlottedWidgetDefaultHorizontalAlignment", 0x19D, "ByteProperty"},
            {"SlottedWidgetDefaultVerticalAlignment", 0x19E, "ByteProperty"},
        }};
    };

    struct WidgetSlottingManager
    {
        static constexpr std::string_view Name = "WidgetSlottingManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Registry = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Registry", 0x38, "ObjectProperty"},
        }};
    };

    struct WidgetSlottingRegistry
    {
        static constexpr std::string_view Name = "WidgetSlottingRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Entries = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Entries", 0x28, "MapProperty"},
        }};
    };

    struct WidgetSlottingRegistryEntry
    {
        static constexpr std::string_view Name = "WidgetSlottingRegistryEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CommonCollection = 0x0;
            static constexpr std::uintptr_t PlayerCollections = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CommonCollection", 0x0, "StructProperty"},
            {"PlayerCollections", 0x20, "MapProperty"},
        }};
    };

}
