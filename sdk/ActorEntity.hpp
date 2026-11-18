#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ActorEntity
{
    struct ActorEntityComponent
    {
        static constexpr std::string_view Name = "ActorEntityComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsActorStateAuthoritative = 0xC0;
            static constexpr std::uintptr_t bRemoveEntityOnDestruction = 0xC1;
            static constexpr std::uintptr_t EntityMappingArray = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsActorStateAuthoritative", 0xC0, "BoolProperty"},
            {"bRemoveEntityOnDestruction", 0xC1, "BoolProperty"},
            {"EntityMappingArray", 0xC8, "StructProperty"},
        }};
    };

    struct ActorEntityInteropRules
    {
        static constexpr std::string_view Name = "ActorEntityInteropRules";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorClass = 0x0;
            static constexpr std::uintptr_t ActorEntityConsidered = 0x20;
            static constexpr std::uintptr_t AllowedEntityComponents = 0x28;
            static constexpr std::uintptr_t RestrictedEntityComponents = 0x38;
            static constexpr std::uintptr_t SubEntitiesConsidered = 0x48;
            static constexpr std::uintptr_t SubEntityRules = 0x50;
            static constexpr std::uintptr_t bEnableEntityReplication = 0x60;
            static constexpr std::uintptr_t bDisableRootEntityTransformReplication = 0x61;
            static constexpr std::uintptr_t ClientActorComponents = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ActorClass", 0x0, "SoftClassProperty"},
            {"ActorEntityConsidered", 0x20, "EnumProperty"},
            {"AllowedEntityComponents", 0x28, "ArrayProperty"},
            {"RestrictedEntityComponents", 0x38, "ArrayProperty"},
            {"SubEntitiesConsidered", 0x48, "EnumProperty"},
            {"SubEntityRules", 0x50, "ArrayProperty"},
            {"bEnableEntityReplication", 0x60, "BoolProperty"},
            {"bDisableRootEntityTransformReplication", 0x61, "BoolProperty"},
            {"ClientActorComponents", 0x68, "ArrayProperty"},
        }};
    };

    struct ActorEntityMappingArray
    {
        static constexpr std::string_view Name = "ActorEntityMappingArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializer";
        struct Offsets
        {
            static constexpr std::uintptr_t Entities = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Entities", 0x60, "ArrayProperty"},
        }};
    };

    struct ActorEntityMappingArrayItem
    {
        static constexpr std::string_view Name = "ActorEntityMappingArrayItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializerItem";
        struct Offsets
        {
            static constexpr std::uintptr_t Entity = 0x10;
            static constexpr std::uintptr_t Object = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Entity", 0x10, "ObjectProperty"},
            {"Object", 0x18, "ObjectProperty"},
        }};
    };

    struct ActorEntityPrefabComponent
    {
        static constexpr std::string_view Name = "ActorEntityPrefabComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EntityClass = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EntityClass", 0xC0, "SoftClassProperty"},
        }};
    };

    struct ActorEntitySubsystem
    {
        static constexpr std::string_view Name = "ActorEntitySubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t PhysicsQueryConvertor = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PhysicsQueryConvertor", 0x60, "ObjectProperty"},
        }};
    };

    struct PhysicsComponentBridgeHelper
    {
        static constexpr std::string_view Name = "PhysicsComponentBridgeHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "HandleActorComponentHit",
        }};
    };

    struct PhysicsQueryConvertor
    {
        static constexpr std::string_view Name = "PhysicsQueryConvertor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorEntitySubsystem = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActorEntitySubsystem", 0x30, "ObjectProperty"},
        }};
    };

    struct PossessableComponentBridgeHelper
    {
        static constexpr std::string_view Name = "PossessableComponentBridgeHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "HandlePawnControllerChanged",
        }};
    };

    struct SubEntityInteropRules
    {
        static constexpr std::string_view Name = "SubEntityInteropRules";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentName = 0x0;
            static constexpr std::uintptr_t Considered = 0x4;
            static constexpr std::uintptr_t AllowedEntityComponents = 0x8;
            static constexpr std::uintptr_t RestrictedEntityComponents = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ComponentName", 0x0, "NameProperty"},
            {"Considered", 0x4, "EnumProperty"},
            {"AllowedEntityComponents", 0x8, "ArrayProperty"},
            {"RestrictedEntityComponents", 0x18, "ArrayProperty"},
        }};
    };

}
