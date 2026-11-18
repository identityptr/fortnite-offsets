#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DataDrivenGameplayEventRouter
{
    struct GameplayEventDefinition
    {
        static constexpr std::string_view Name = "GameplayEventDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EventType = 0x0;
            static constexpr std::uintptr_t bIsStateful = 0x8;
            static constexpr std::uintptr_t NetPolicy = 0x9;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EventType", 0x0, "ObjectProperty"},
            {"bIsStateful", 0x8, "BoolProperty"},
            {"NetPolicy", 0x9, "EnumProperty"},
        }};
    };

    struct GameplayEventDescriptor
    {
        static constexpr std::string_view Name = "GameplayEventDescriptor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayEventDescriptorLibrary
    {
        static constexpr std::string_view Name = "GameplayEventDescriptorLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "BroadcastEvent",
        }};
    };

    struct GameplayEventFunction
    {
        static constexpr std::string_view Name = "GameplayEventFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EventSubscriptions = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EventSubscriptions", 0x8, "ArrayProperty"},
        }};
    };

    struct GameplayEventHandlerFunction
    {
        static constexpr std::string_view Name = "GameplayEventHandlerFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EventHandlerFunction = 0x0;
            static constexpr std::uintptr_t EventHandlerFunctionDefaultValues = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EventHandlerFunction", 0x0, "StructProperty"},
            {"EventHandlerFunctionDefaultValues", 0x30, "MapProperty"},
        }};
    };

    struct GameplayEventHandlerFunctions
    {
        static constexpr std::string_view Name = "GameplayEventHandlerFunctions";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OnEventReceived = 0x0;
            static constexpr std::uintptr_t OnStatefulEventApplied = 0x40;
            static constexpr std::uintptr_t OnStatefulEventCleared = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnEventReceived", 0x0, "StructProperty"},
            {"OnStatefulEventApplied", 0x40, "StructProperty"},
            {"OnStatefulEventCleared", 0x80, "StructProperty"},
        }};
    };

    struct GameplayEventLegacyBroadcast
    {
        static constexpr std::string_view Name = "GameplayEventLegacyBroadcast";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GameplayEventSubscription
    {
        static constexpr std::string_view Name = "GameplayEventSubscription";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Object = 0x0;
            static constexpr std::uintptr_t EventDescriptor = 0x20;
            static constexpr std::uintptr_t EventHandle = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Object", 0x0, "SoftObjectProperty"},
            {"EventDescriptor", 0x20, "StructProperty"},
            {"EventHandle", 0x50, "StructProperty"},
        }};
    };

}
