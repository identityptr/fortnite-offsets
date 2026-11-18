#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EntityCore
{
    struct ComponentData
    {
        static constexpr std::string_view Name = "ComponentData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Entity
    {
        static constexpr std::string_view Name = "Entity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Level = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Level", 0x30, "ObjectProperty"},
        }};
    };

    struct EntityComponent
    {
        static constexpr std::string_view Name = "EntityComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityComponentContainer
    {
        static constexpr std::string_view Name = "EntityComponentContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Array = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Array", 0x0, "ArrayProperty"},
        }};
    };

    struct EntityCoreDataBackedRelativePositionComponent
    {
        static constexpr std::string_view Name = "EntityCoreDataBackedRelativePositionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityDataBackedComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityCoreSubsystem
    {
        static constexpr std::string_view Name = "EntityCoreSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentMap = 0x48;
            static constexpr std::uintptr_t ComponentArray = 0x70;
            static constexpr std::uintptr_t Entities = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ComponentMap", 0x48, "MapProperty"},
            {"ComponentArray", 0x70, "ArrayProperty"},
            {"Entities", 0x80, "MapProperty"},
        }};
    };

    struct EntityCoreSystemRelativePositionComponentData
    {
        static constexpr std::string_view Name = "EntityCoreSystemRelativePositionComponentData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ComponentData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityDataBackedComponent
    {
        static constexpr std::string_view Name = "EntityDataBackedComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityEnableableComponent
    {
        static constexpr std::string_view Name = "EntityEnableableComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t IsEnabled = 0x58;
            static constexpr std::uintptr_t LastIsEnabled = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"IsEnabled", 0x58, "BoolProperty"},
            {"LastIsEnabled", 0x58, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnRep_Enabled",
        }};
    };

    struct EntityPositionComponent
    {
        static constexpr std::string_view Name = "EntityPositionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityDataBackedComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityPositionComponentData
    {
        static constexpr std::string_view Name = "EntityPositionComponentData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldPosition = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WorldPosition", 0x0, "StructProperty"},
        }};
    };

    struct EntityRotationComponent
    {
        static constexpr std::string_view Name = "EntityRotationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityDataBackedComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityRotationComponentData
    {
        static constexpr std::string_view Name = "EntityRotationComponentData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldRotation = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WorldRotation", 0x0, "StructProperty"},
        }};
    };

    struct EntityScaleComponent
    {
        static constexpr std::string_view Name = "EntityScaleComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityDataBackedComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityScaleComponentData
    {
        static constexpr std::string_view Name = "EntityScaleComponentData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ComponentData";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldScale3D = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WorldScale3D", 0x0, "StructProperty"},
        }};
    };

    struct EntityScriptComponent
    {
        static constexpr std::string_view Name = "EntityScriptComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityTickableComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t IsEnabled = 0x58;
            static constexpr std::uintptr_t LastIsEnabled = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"IsEnabled", 0x58, "BoolProperty"},
            {"LastIsEnabled", 0x58, "BoolProperty"},
        }};
    };

    struct EntityTickFunction
    {
        static constexpr std::string_view Name = "EntityTickFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TickFunction";
        struct Offsets
        {
            static constexpr std::uintptr_t TickGroup = 0x8;
            static constexpr std::uintptr_t EndTickGroup = 0x9;
            static constexpr std::uintptr_t bAllowTickOnDedicatedServer = 0xA;
            static constexpr std::uintptr_t bCanEverTick = 0xA;
            static constexpr std::uintptr_t bStartWithTickEnabled = 0xA;
            static constexpr std::uintptr_t bTickEvenWhenPaused = 0xA;
            static constexpr std::uintptr_t TickInterval = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TickGroup", 0x8, "ByteProperty"},
            {"EndTickGroup", 0x9, "ByteProperty"},
            {"bAllowTickOnDedicatedServer", 0xA, "BoolProperty"},
            {"bCanEverTick", 0xA, "BoolProperty"},
            {"bStartWithTickEnabled", 0xA, "BoolProperty"},
            {"bTickEvenWhenPaused", 0xA, "BoolProperty"},
            {"TickInterval", 0xC, "FloatProperty"},
        }};
    };

    struct EntityTickableComponent
    {
        static constexpr std::string_view Name = "EntityTickableComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityEnableableComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t IsEnabled = 0x58;
            static constexpr std::uintptr_t LastIsEnabled = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"IsEnabled", 0x58, "BoolProperty"},
            {"LastIsEnabled", 0x58, "BoolProperty"},
        }};
    };

}
