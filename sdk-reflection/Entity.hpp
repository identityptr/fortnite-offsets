#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Entity
{
    struct ActorOriginData
    {
        static constexpr std::string_view Name = "ActorOriginData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WeakActor = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WeakActor", 0x0, "WeakObjectProperty"},
        }};
    };

    struct BaseComponent
    {
        static constexpr std::string_view Name = "BaseComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseVerseSubobject";
        struct Offsets
        {
            static constexpr std::uintptr_t VerseAccessibility = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VerseAccessibility", 0x28, "StructProperty"},
        }};
    };

    struct BaseEntity
    {
        static constexpr std::string_view Name = "BaseEntity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseVerseSubobject";
        struct Offsets
        {
            static constexpr std::uintptr_t Components = 0x48;
            static constexpr std::uintptr_t OwnedEntities = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Components", 0x48, "ArrayProperty"},
            {"OwnedEntities", 0x58, "ArrayProperty"},
        }};
    };

    struct EntityContainerInterface
    {
        static constexpr std::string_view Name = "EntityContainerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityPlayspaceRegistryBase
    {
        static constexpr std::string_view Name = "EntityPlayspaceRegistryBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityPrefab
    {
        static constexpr std::string_view Name = "EntityPrefab";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Blueprint";
        struct Offsets
        {
            static constexpr std::uintptr_t ReadAccess = 0xA8;
            static constexpr std::uintptr_t ConstructAccess = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ReadAccess", 0xA8, "StructProperty"},
            {"ConstructAccess", 0xC0, "StructProperty"},
        }};
    };

    struct EntityPrefabMetaData
    {
        static constexpr std::string_view Name = "EntityPrefabMetaData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsConcrete = 0x0;
            static constexpr std::uintptr_t ReadAccess = 0x8;
            static constexpr std::uintptr_t ConstructAccess = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsConcrete", 0x0, "BoolProperty"},
            {"ReadAccess", 0x8, "StructProperty"},
            {"ConstructAccess", 0x20, "StructProperty"},
        }};
    };

    struct EntityRegistryBase
    {
        static constexpr std::string_view Name = "EntityRegistryBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityReplicationSupport
    {
        static constexpr std::string_view Name = "EntityReplicationSupport";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityReplicator
    {
        static constexpr std::string_view Name = "EntityReplicator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsNetInitialized = 0x280;
            static constexpr std::uintptr_t EntityPtr = 0x288;
            static constexpr std::uintptr_t EntityOwnerPtr = 0x2A8;
            static constexpr std::uintptr_t EntityServerPath = 0x2C8;
            static constexpr std::uintptr_t EntityOwnerServerPath = 0x2E0;
            static constexpr std::uintptr_t NonDynamicEntityComponents = 0x2F8;
            static constexpr std::uintptr_t EntityPendingInitialization = 0x350;
            static constexpr std::uintptr_t EntityComponentsPendingInitialization = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bIsNetInitialized", 0x280, "BoolProperty"},
            {"EntityPtr", 0x288, "SoftObjectProperty"},
            {"EntityOwnerPtr", 0x2A8, "SoftObjectProperty"},
            {"EntityServerPath", 0x2C8, "StructProperty"},
            {"EntityOwnerServerPath", 0x2E0, "StructProperty"},
            {"NonDynamicEntityComponents", 0x2F8, "StructProperty"},
            {"EntityPendingInitialization", 0x350, "ObjectProperty"},
            {"EntityComponentsPendingInitialization", 0x358, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "OnRep_EntityOwnerPtr",
            "OnRep_EntityPtr",
        }};
    };

    struct EntityReplicator_AlwaysRelevant
    {
        static constexpr std::string_view Name = "EntityReplicator_AlwaysRelevant";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityReplicator";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsNetInitialized = 0x280;
            static constexpr std::uintptr_t EntityPtr = 0x288;
            static constexpr std::uintptr_t EntityOwnerPtr = 0x2A8;
            static constexpr std::uintptr_t EntityServerPath = 0x2C8;
            static constexpr std::uintptr_t EntityOwnerServerPath = 0x2E0;
            static constexpr std::uintptr_t NonDynamicEntityComponents = 0x2F8;
            static constexpr std::uintptr_t EntityPendingInitialization = 0x350;
            static constexpr std::uintptr_t EntityComponentsPendingInitialization = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bIsNetInitialized", 0x280, "BoolProperty"},
            {"EntityPtr", 0x288, "SoftObjectProperty"},
            {"EntityOwnerPtr", 0x2A8, "SoftObjectProperty"},
            {"EntityServerPath", 0x2C8, "StructProperty"},
            {"EntityOwnerServerPath", 0x2E0, "StructProperty"},
            {"NonDynamicEntityComponents", 0x2F8, "StructProperty"},
            {"EntityPendingInitialization", 0x350, "ObjectProperty"},
            {"EntityComponentsPendingInitialization", 0x358, "ArrayProperty"},
        }};
    };

    struct EntityVerseAnalyticsSubsystem
    {
        static constexpr std::string_view Name = "EntityVerseAnalyticsSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t VerseEntityPrefabCountMap = 0x38;
            static constexpr std::uintptr_t CurrentEntityCount = 0x48;
            static constexpr std::uintptr_t TotalEntityCount = 0x4C;
            static constexpr std::uintptr_t MaxEntityCount = 0x50;
            static constexpr std::uintptr_t CrashContextUpdateHandle = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"VerseEntityPrefabCountMap", 0x38, "MapProperty"},
            {"CurrentEntityCount", 0x48, "IntProperty"},
            {"TotalEntityCount", 0x4C, "IntProperty"},
            {"MaxEntityCount", 0x50, "IntProperty"},
            {"CrashContextUpdateHandle", 0x58, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "UpdateCrashContext",
        }};
    };

    struct EntityVerseEngineSubsystem
    {
        static constexpr std::string_view Name = "EntityVerseEngineSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FastEntityComponentArray
    {
        static constexpr std::string_view Name = "FastEntityComponentArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializer";
        struct Offsets
        {
            static constexpr std::uintptr_t Components = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Components", 0x48, "ArrayProperty"},
        }};
    };

    struct FastEntityComponentArrayItem
    {
        static constexpr std::string_view Name = "FastEntityComponentArrayItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializerItem";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentName = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ComponentName", 0xC, "NameProperty"},
        }};
    };

    struct MassVerseEntityAdderProcessor
    {
        static constexpr std::string_view Name = "MassVerseEntityAdderProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassObserverProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ObservedType = 0x120;
            static constexpr std::uintptr_t ObservedTypes = 0x128;
            static constexpr std::uintptr_t bAutoRegisterWithObserverRegistry = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ObservedType", 0x120, "ObjectProperty"},
            {"ObservedTypes", 0x128, "ArrayProperty"},
            {"bAutoRegisterWithObserverRegistry", 0x138, "BoolProperty"},
        }};
    };

    struct MassVerseEntityRemoverProcessor
    {
        static constexpr std::string_view Name = "MassVerseEntityRemoverProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassObserverProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ObservedType = 0x120;
            static constexpr std::uintptr_t ObservedTypes = 0x128;
            static constexpr std::uintptr_t bAutoRegisterWithObserverRegistry = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ObservedType", 0x120, "ObjectProperty"},
            {"ObservedTypes", 0x128, "ArrayProperty"},
            {"bAutoRegisterWithObserverRegistry", 0x138, "BoolProperty"},
        }};
    };

    struct NetComponentFactory
    {
        static constexpr std::string_view Name = "NetComponentFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetSubObjectFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NetEntityFactory
    {
        static constexpr std::string_view Name = "NetEntityFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectFactory";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ReplicatedDataRegistry
    {
        static constexpr std::string_view Name = "ReplicatedDataRegistry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ChildrenLists = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChildrenLists", 0x0, "ArrayProperty"},
        }};
    };

    struct SceneGraphMassSubsystem
    {
        static constexpr std::string_view Name = "SceneGraphMassSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SimulationEntity
    {
        static constexpr std::string_view Name = "SimulationEntity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SimulationEntity = 0x278;
            static constexpr std::uintptr_t SavedEntityClass = 0x280;
            static constexpr std::uintptr_t SavedEntityComponentClass = 0x288;
            static constexpr std::uintptr_t DefaultComponentClassNames = 0x290;
            static constexpr std::uintptr_t DefaultComponentClasses = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SimulationEntity", 0x278, "ObjectProperty"},
            {"SavedEntityClass", 0x280, "ClassProperty"},
            {"SavedEntityComponentClass", 0x288, "ClassProperty"},
            {"DefaultComponentClassNames", 0x290, "ArrayProperty"},
            {"DefaultComponentClasses", 0x2A0, "ArrayProperty"},
        }};
    };

    struct SimulationEntitySubsystem
    {
        static constexpr std::string_view Name = "SimulationEntitySubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t SimulationEntityActor = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SimulationEntityActor", 0x38, "ObjectProperty"},
        }};
    };

    struct SimulationLifetimeComponent
    {
        static constexpr std::string_view Name = "SimulationLifetimeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct SubObjectEntry
    {
        static constexpr std::string_view Name = "SubObjectEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SubObject = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SubObject", 0x0, "ObjectProperty"},
        }};
    };

    struct SubObjectsOfParent
    {
        static constexpr std::string_view Name = "SubObjectsOfParent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Children = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Children", 0x8, "ArrayProperty"},
        }};
    };

    struct VerseEntityFragment
    {
        static constexpr std::string_view Name = "VerseEntityFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MassFragment";
        struct Offsets
        {
            static constexpr std::uintptr_t Entity = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Entity", 0x0, "WeakObjectProperty"},
        }};
    };

    struct WorldExecutionPhase
    {
        static constexpr std::string_view Name = "WorldExecutionPhase";
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

    struct WorldExecutionSubsystem
    {
        static constexpr std::string_view Name = "WorldExecutionSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionSystem = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExecutionSystem", 0x40, "ObjectProperty"},
        }};
    };

}
