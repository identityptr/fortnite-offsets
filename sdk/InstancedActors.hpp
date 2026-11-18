#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::InstancedActors
{
    struct ClientInstancedActorsSpawnerSubsystem
    {
        static constexpr std::string_view Name = "ClientInstancedActorsSpawnerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassActorSpawnerSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnRequests = 0x40;
            static constexpr std::uintptr_t ActorsToDestroy = 0x50;
            static constexpr std::uintptr_t DeactivatedActorsToDestroy = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SpawnRequests", 0x40, "ArrayProperty"},
            {"ActorsToDestroy", 0x50, "ArrayProperty"},
            {"DeactivatedActorsToDestroy", 0x60, "ArrayProperty"},
        }};
    };

    struct GameFeatureAction_ConfigureInstancedActors
    {
        static constexpr std::string_view Name = "GameFeatureAction_ConfigureInstancedActors";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t ConfigOverride = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConfigOverride", 0x28, "StructProperty"},
        }};
    };

    struct InstancedActorsComponent
    {
        static constexpr std::string_view Name = "InstancedActorsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceHandle = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstanceHandle", 0xC0, "StructProperty"},
        }};
    };

    struct InstancedActorsData
    {
        static constexpr std::string_view Name = "InstancedActorsData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x28;
            static constexpr std::uintptr_t ActorClass = 0x30;
            static constexpr std::uintptr_t AdditionalTags = 0x38;
            static constexpr std::uintptr_t InstanceTransforms = 0x70;
            static constexpr std::uintptr_t NumValidInstances = 0x80;
            static constexpr std::uintptr_t Bounds = 0x88;
            static constexpr std::uintptr_t NumInstances = 0xC0;
            static constexpr std::uintptr_t Entities = 0xC8;
            static constexpr std::uintptr_t InstanceVisualizations = 0x108;
            static constexpr std::uintptr_t CachedLocalBounds = 0x138;
            static constexpr std::uintptr_t InstanceDeltas = 0x1E0;
            static constexpr std::uintptr_t EntityConfig = 0x258;
            static constexpr std::uintptr_t CombinedTags = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"ID", 0x28, "UInt16Property"},
            {"ActorClass", 0x30, "ClassProperty"},
            {"AdditionalTags", 0x38, "StructProperty"},
            {"InstanceTransforms", 0x70, "ArrayProperty"},
            {"NumValidInstances", 0x80, "UInt16Property"},
            {"Bounds", 0x88, "StructProperty"},
            {"NumInstances", 0xC0, "UInt16Property"},
            {"Entities", 0xC8, "ArrayProperty"},
            {"InstanceVisualizations", 0x108, "ArrayProperty"},
            {"CachedLocalBounds", 0x138, "StructProperty"},
            {"InstanceDeltas", 0x1E0, "StructProperty"},
            {"EntityConfig", 0x258, "StructProperty"},
            {"CombinedTags", 0x288, "StructProperty"},
        }};
    };

    struct InstancedActorsDebugProcessor
    {
        static constexpr std::string_view Name = "InstancedActorsDebugProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct InstancedActorsInitializerProcessor
    {
        static constexpr std::string_view Name = "InstancedActorsInitializerProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct InstancedActorsManager
    {
        static constexpr std::string_view Name = "InstancedActorsManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PartitionActor";
        struct Offsets
        {
            static constexpr std::uintptr_t InstancedActorSubsystem = 0x288;
            static constexpr std::uintptr_t ManagerHandle = 0x290;
            static constexpr std::uintptr_t SavedActorGuid = 0x2A8;
            static constexpr std::uintptr_t bHasSpawnedEntities = 0x2B8;
            static constexpr std::uintptr_t NextInstanceDataID = 0x2BA;
            static constexpr std::uintptr_t PerActorClassInstanceData = 0x2C0;
            static constexpr std::uintptr_t InstanceBounds = 0x2D0;
            static constexpr std::uintptr_t ISMComponentToInstanceDataMap = 0x348;
            static constexpr std::uintptr_t InstancedActorsDataClass = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"InstancedActorSubsystem", 0x288, "ObjectProperty"},
            {"ManagerHandle", 0x290, "StructProperty"},
            {"SavedActorGuid", 0x2A8, "StructProperty"},
            {"bHasSpawnedEntities", 0x2B8, "BoolProperty"},
            {"NextInstanceDataID", 0x2BA, "UInt16Property"},
            {"PerActorClassInstanceData", 0x2C0, "ArrayProperty"},
            {"InstanceBounds", 0x2D0, "StructProperty"},
            {"ISMComponentToInstanceDataMap", 0x348, "MapProperty"},
            {"InstancedActorsDataClass", 0x358, "ClassProperty"},
        }};
    };

    struct InstancedActorsModifierBase
    {
        static constexpr std::string_view Name = "InstancedActorsModifierBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceTagsQuery = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstanceTagsQuery", 0x28, "StructProperty"},
        }};
    };

    struct InstancedActorsModifierVolume
    {
        static constexpr std::string_view Name = "InstancedActorsModifierVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ModifierVolumeComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ModifierVolumeComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct InstancedActorsModifierVolumeComponent
    {
        static constexpr std::string_view Name = "InstancedActorsModifierVolumeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Shape = 0x560;
            static constexpr std::uintptr_t Extent = 0x568;
            static constexpr std::uintptr_t Radius = 0x580;
            static constexpr std::uintptr_t Modifiers = 0x588;
            static constexpr std::uintptr_t bIgnoreOwnLevelsInstances = 0x598;
            static constexpr std::uintptr_t LevelsToIgnore = 0x5A0;
            static constexpr std::uintptr_t Color = 0x5B0;
            static constexpr std::uintptr_t bDrawOnlyIfSelected = 0x5B4;
            static constexpr std::uintptr_t LineThickness = 0x5B8;
            static constexpr std::uintptr_t ModifierVolumeHandle = 0x5BC;
            static constexpr std::uintptr_t ModifiedManagers = 0x5C0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Shape", 0x560, "EnumProperty"},
            {"Extent", 0x568, "StructProperty"},
            {"Radius", 0x580, "FloatProperty"},
            {"Modifiers", 0x588, "ArrayProperty"},
            {"bIgnoreOwnLevelsInstances", 0x598, "BoolProperty"},
            {"LevelsToIgnore", 0x5A0, "ArrayProperty"},
            {"Color", 0x5B0, "StructProperty"},
            {"bDrawOnlyIfSelected", 0x5B4, "BoolProperty"},
            {"LineThickness", 0x5B8, "FloatProperty"},
            {"ModifierVolumeHandle", 0x5BC, "StructProperty"},
            {"ModifiedManagers", 0x5C0, "ArrayProperty"},
        }};
    };

    struct InstancedActorsProjectSettings
    {
        static constexpr std::string_view Name = "InstancedActorsProjectSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t GridSize = 0x30;
            static constexpr std::uintptr_t NamedSettingsRegistryType = 0x34;
            static constexpr std::uintptr_t ActorClassSettingsRegistryType = 0x38;
            static constexpr std::uintptr_t DefaultBaseSettingsName = 0x3C;
            static constexpr std::uintptr_t EnforcedSettingsName = 0x40;
            static constexpr std::uintptr_t DefaultConfig = 0x48;
            static constexpr std::uintptr_t CompiledActiveConfig = 0x80;
            static constexpr std::uintptr_t ClassConfigOverrides = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GridSize", 0x30, "IntProperty"},
            {"NamedSettingsRegistryType", 0x34, "StructProperty"},
            {"ActorClassSettingsRegistryType", 0x38, "StructProperty"},
            {"DefaultBaseSettingsName", 0x3C, "NameProperty"},
            {"EnforcedSettingsName", 0x40, "NameProperty"},
            {"DefaultConfig", 0x48, "StructProperty"},
            {"CompiledActiveConfig", 0x80, "StructProperty"},
            {"ClassConfigOverrides", 0xA0, "ArrayProperty"},
        }};
    };

    struct InstancedActorsRemovalModifierVolume
    {
        static constexpr std::string_view Name = "InstancedActorsRemovalModifierVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InstancedActorsModifierVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t ModifierVolumeComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ModifierVolumeComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct InstancedActorsRepresentationActorManagement
    {
        static constexpr std::string_view Name = "InstancedActorsRepresentationActorManagement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassRepresentationActorManagement";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InstancedActorsRepresentationSubsystem
    {
        static constexpr std::string_view Name = "InstancedActorsRepresentationSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassRepresentationSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t VisualizationComponent = 0x78;
            static constexpr std::uintptr_t Visualizer = 0x80;
            static constexpr std::uintptr_t ActorSpawnerSubsystem = 0x88;
            static constexpr std::uintptr_t WorldPartitionSubsystem = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"VisualizationComponent", 0x78, "WeakObjectProperty"},
            {"Visualizer", 0x80, "WeakObjectProperty"},
            {"ActorSpawnerSubsystem", 0x88, "ObjectProperty"},
            {"WorldPartitionSubsystem", 0xA0, "ObjectProperty"},
        }};
    };

    struct InstancedActorsRuntimeRemovalProcessor
    {
        static constexpr std::string_view Name = "InstancedActorsRuntimeRemovalProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct InstancedActorsStationaryLODBatchProcessor
    {
        static constexpr std::string_view Name = "InstancedActorsStationaryLODBatchProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t DelayPerBulkLOD = 0xD80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DelayPerBulkLOD", 0xD80, "DoubleProperty"},
        }};
    };

    struct InstancedActorsSubsystem
    {
        static constexpr std::string_view Name = "InstancedActorsSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectSettings = 0x68;
            static constexpr std::uintptr_t DataRegistrySubsystem = 0x70;
            static constexpr std::uintptr_t ActorPartitionSubsystem = 0x78;
            static constexpr std::uintptr_t InstancedActorsManagerClass = 0x80;
            static constexpr std::uintptr_t ExemplarActorWorld = 0x250;
            static constexpr std::uintptr_t SettingsType = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ProjectSettings", 0x68, "ObjectProperty"},
            {"DataRegistrySubsystem", 0x70, "ObjectProperty"},
            {"ActorPartitionSubsystem", 0x78, "ObjectProperty"},
            {"InstancedActorsManagerClass", 0x80, "ClassProperty"},
            {"ExemplarActorWorld", 0x250, "ObjectProperty"},
            {"SettingsType", 0x268, "ObjectProperty"},
        }};
    };

    struct InstancedActorsVisualizationProcessor
    {
        static constexpr std::string_view Name = "InstancedActorsVisualizationProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassVisualizationProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t UpdateParams = 0x750;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UpdateParams", 0x750, "StructProperty"},
        }};
    };

    struct InstancedActorsVisualizationSwitcherProcessor
    {
        static constexpr std::string_view Name = "InstancedActorsVisualizationSwitcherProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecutionOrder = 0x28;
            static constexpr std::uintptr_t ProcessingPhase = 0x50;
            static constexpr std::uintptr_t ExecutionFlags = 0x51;
            static constexpr std::uintptr_t bAggregateRequirements = 0x52;
            static constexpr std::uintptr_t bAutoRegisterWithProcessingPhases = 0x52;
            static constexpr std::uintptr_t bRequiresGameThreadExecution = 0x52;
            static constexpr std::uintptr_t ActivationState = 0x53;
            static constexpr std::uintptr_t ExecutionPriority = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExecutionOrder", 0x28, "StructProperty"},
            {"ProcessingPhase", 0x50, "EnumProperty"},
            {"ExecutionFlags", 0x51, "ByteProperty"},
            {"bAggregateRequirements", 0x52, "BoolProperty"},
            {"bAutoRegisterWithProcessingPhases", 0x52, "BoolProperty"},
            {"bRequiresGameThreadExecution", 0x52, "BoolProperty"},
            {"ActivationState", 0x53, "EnumProperty"},
            {"ExecutionPriority", 0x54, "Int16Property"},
        }};
    };

    struct InstancedActorsVisualizationTrait
    {
        static constexpr std::string_view Name = "InstancedActorsVisualizationTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassStationaryDistanceVisualizationTrait";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceData = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstanceData", 0x120, "WeakObjectProperty"},
        }};
    };

    struct RemoveInstancedActorsModifier
    {
        static constexpr std::string_view Name = "RemoveInstancedActorsModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InstancedActorsModifierBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceTagsQuery = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstanceTagsQuery", 0x28, "StructProperty"},
        }};
    };

    struct RemoveInstancesModifierVolumeComponent
    {
        static constexpr std::string_view Name = "RemoveInstancesModifierVolumeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InstancedActorsModifierVolumeComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Shape = 0x560;
            static constexpr std::uintptr_t Extent = 0x568;
            static constexpr std::uintptr_t Radius = 0x580;
            static constexpr std::uintptr_t Modifiers = 0x588;
            static constexpr std::uintptr_t bIgnoreOwnLevelsInstances = 0x598;
            static constexpr std::uintptr_t LevelsToIgnore = 0x5A0;
            static constexpr std::uintptr_t Color = 0x5B0;
            static constexpr std::uintptr_t bDrawOnlyIfSelected = 0x5B4;
            static constexpr std::uintptr_t LineThickness = 0x5B8;
            static constexpr std::uintptr_t ModifierVolumeHandle = 0x5BC;
            static constexpr std::uintptr_t ModifiedManagers = 0x5C0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Shape", 0x560, "EnumProperty"},
            {"Extent", 0x568, "StructProperty"},
            {"Radius", 0x580, "FloatProperty"},
            {"Modifiers", 0x588, "ArrayProperty"},
            {"bIgnoreOwnLevelsInstances", 0x598, "BoolProperty"},
            {"LevelsToIgnore", 0x5A0, "ArrayProperty"},
            {"Color", 0x5B0, "StructProperty"},
            {"bDrawOnlyIfSelected", 0x5B4, "BoolProperty"},
            {"LineThickness", 0x5B8, "FloatProperty"},
            {"ModifierVolumeHandle", 0x5BC, "StructProperty"},
            {"ModifiedManagers", 0x5C0, "ArrayProperty"},
        }};
    };

    struct ServerInstancedActorsSpawnerSubsystem
    {
        static constexpr std::string_view Name = "ServerInstancedActorsSpawnerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassActorSpawnerSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t TransientActorBeingSpawned = 0xE0;
            static constexpr std::uintptr_t TransientActorSpawningInstance = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TransientActorBeingSpawned", 0xE0, "ObjectProperty"},
            {"TransientActorSpawningInstance", 0xE8, "StructProperty"},
        }};
    };

}
