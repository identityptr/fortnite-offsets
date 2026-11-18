#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MassCharactersRuntime
{
    struct GameFeatureAction_MassCharactersSetup
    {
        static constexpr std::string_view Name = "GameFeatureAction_MassCharactersSetup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t PawnClass = 0x28;
            static constexpr std::uintptr_t EntityConfigAsset = 0x48;
            static constexpr std::uintptr_t PlayerControllerClass = 0x68;
            static constexpr std::uintptr_t PawnComponentClass = 0x88;
            static constexpr std::uintptr_t ClientConfigComponentClass = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PawnClass", 0x28, "SoftClassProperty"},
            {"EntityConfigAsset", 0x48, "SoftObjectProperty"},
            {"PlayerControllerClass", 0x68, "SoftClassProperty"},
            {"PawnComponentClass", 0x88, "SoftClassProperty"},
            {"ClientConfigComponentClass", 0xA8, "SoftClassProperty"},
        }};
    };

    struct MassCharacterActorAnimSyncProcessor
    {
        static constexpr std::string_view Name = "MassCharacterActorAnimSyncProcessor";
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

    struct MassCharacterAnimSyncInterface
    {
        static constexpr std::string_view Name = "MassCharacterAnimSyncInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassCharacterAnimSyncTrait
    {
        static constexpr std::string_view Name = "MassCharacterAnimSyncTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntityTraitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimSequenceToIndexOverrides = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AnimSequenceToIndexOverrides", 0x30, "MapProperty"},
        }};
    };

    struct MassCharacterAnimationHandler
    {
        static constexpr std::string_view Name = "MassCharacterAnimationHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassCharacterAnimationWorldConditionSchema
    {
        static constexpr std::string_view Name = "MassCharacterAnimationWorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct MassCharacterBufferedInterpTrait
    {
        static constexpr std::string_view Name = "MassCharacterBufferedInterpTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntityTraitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BufferDelay = 0x30;
            static constexpr std::uintptr_t MaxExtrapolationTime = 0x34;
            static constexpr std::uintptr_t RotationLerpSpeed = 0x38;
            static constexpr std::uintptr_t bOrientTowardMovement = 0x3C;
            static constexpr std::uintptr_t bAdaptiveBufferDelay = 0x3D;
            static constexpr std::uintptr_t AdaptiveDelayMax = 0x40;
            static constexpr std::uintptr_t AdaptiveGrowRate = 0x44;
            static constexpr std::uintptr_t AdaptiveShrinkRate = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"BufferDelay", 0x30, "FloatProperty"},
            {"MaxExtrapolationTime", 0x34, "FloatProperty"},
            {"RotationLerpSpeed", 0x38, "FloatProperty"},
            {"bOrientTowardMovement", 0x3C, "BoolProperty"},
            {"bAdaptiveBufferDelay", 0x3D, "BoolProperty"},
            {"AdaptiveDelayMax", 0x40, "FloatProperty"},
            {"AdaptiveGrowRate", 0x44, "FloatProperty"},
            {"AdaptiveShrinkRate", 0x48, "FloatProperty"},
        }};
    };

    struct MassCharacterBufferedInterpTransformProcessor
    {
        static constexpr std::string_view Name = "MassCharacterBufferedInterpTransformProcessor";
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

    struct MassCharacterClientBubbleInfo
    {
        static constexpr std::string_view Name = "MassCharacterClientBubbleInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassClientBubbleInfoBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CharacterSerializer = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CharacterSerializer", 0x290, "StructProperty"},
        }};
    };

    struct MassCharacterClientConfigComponent
    {
        static constexpr std::string_view Name = "MassCharacterClientConfigComponent";
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

    struct MassCharacterComponent
    {
        static constexpr std::string_view Name = "MassCharacterComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EntityConfigAsset = 0xC0;
            static constexpr std::uintptr_t NetID = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EntityConfigAsset", 0xC0, "ObjectProperty"},
            {"NetID", 0x100, "StructProperty"},
        }};
    };

    struct MassCharacterDebugVisualizationProcessor
    {
        static constexpr std::string_view Name = "MassCharacterDebugVisualizationProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t DebugLineBatcher = 0x750;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DebugLineBatcher", 0x750, "ObjectProperty"},
        }};
    };

    struct MassCharacterDebugVisualizationTrait
    {
        static constexpr std::string_view Name = "MassCharacterDebugVisualizationTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntityTraitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BoxSize = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BoxSize", 0x30, "StructProperty"},
        }};
    };

    struct MassCharacterGridFilter
    {
        static constexpr std::string_view Name = "MassCharacterGridFilter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectGridWorldLocFilter";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicationSystem = 0x178;
            static constexpr std::uintptr_t CharacterSubsystem = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ReplicationSystem", 0x178, "ObjectProperty"},
            {"CharacterSubsystem", 0x180, "ObjectProperty"},
        }};
    };

    struct MassCharacterISKMDataAsset
    {
        static constexpr std::string_view Name = "MassCharacterISKMDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Meshes = 0x28;
            static constexpr std::uintptr_t LocalVisualizationTransform = 0x40;
            static constexpr std::uintptr_t TransformProvider = 0xA0;
            static constexpr std::uintptr_t SkinnedAsset = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Meshes", 0x28, "ArrayProperty"},
            {"LocalVisualizationTransform", 0x40, "StructProperty"},
            {"TransformProvider", 0xA0, "ObjectProperty"},
            {"SkinnedAsset", 0xA8, "ObjectProperty"},
        }};
    };

    struct MassCharacterInstanceProcessor
    {
        static constexpr std::string_view Name = "MassCharacterInstanceProcessor";
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

    struct MassCharacterInstancedAnimationCalculatorProcessor
    {
        static constexpr std::string_view Name = "MassCharacterInstancedAnimationCalculatorProcessor";
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

    struct MassCharacterInstancedAnimationProcessor
    {
        static constexpr std::string_view Name = "MassCharacterInstancedAnimationProcessor";
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

    struct MassCharacterInstancedAnimationTrait
    {
        static constexpr std::string_view Name = "MassCharacterInstancedAnimationTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntityTraitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimationSelectorClass = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AnimationSelectorClass", 0x30, "ClassProperty"},
        }};
    };

    struct MassCharacterInterpolationTrait
    {
        static constexpr std::string_view Name = "MassCharacterInterpolationTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntityTraitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtrapolatedPositionLerpSpeed = 0x30;
            static constexpr std::uintptr_t ChaseSpeedMultiplier = 0x34;
            static constexpr std::uintptr_t RotationLerpSpeed = 0x38;
            static constexpr std::uintptr_t bOrientTowardMovement = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ExtrapolatedPositionLerpSpeed", 0x30, "FloatProperty"},
            {"ChaseSpeedMultiplier", 0x34, "FloatProperty"},
            {"RotationLerpSpeed", 0x38, "FloatProperty"},
            {"bOrientTowardMovement", 0x3C, "BoolProperty"},
        }};
    };

    struct MassCharacterNetIdentityTrait
    {
        static constexpr std::string_view Name = "MassCharacterNetIdentityTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntityTraitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ValidTargetConfig = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ValidTargetConfig", 0x28, "EnumProperty"},
        }};
    };

    struct MassCharacterPawnReplicationFilterProcessor
    {
        static constexpr std::string_view Name = "MassCharacterPawnReplicationFilterProcessor";
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

    struct MassCharacterReplicationDestructionObserver
    {
        static constexpr std::string_view Name = "MassCharacterReplicationDestructionObserver";
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

    struct MassCharacterReplicator
    {
        static constexpr std::string_view Name = "MassCharacterReplicator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassReplicatorBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassCharacterSelectivePawnReplicationTrait
    {
        static constexpr std::string_view Name = "MassCharacterSelectivePawnReplicationTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntityTraitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MinPawnsPerClient = 0x30;
            static constexpr std::uintptr_t MaxPawnsPerClient = 0x34;
            static constexpr std::uintptr_t MinReplicatedTimeSeconds = 0x38;
            static constexpr std::uintptr_t ProximityReplicateCount = 0x3C;
            static constexpr std::uintptr_t ProximityReplicateDistance = 0x40;
            static constexpr std::uintptr_t SignificanceCalculator = 0x48;
            static constexpr std::uintptr_t bRequiresClientOptIn = 0x50;
            static constexpr std::uintptr_t ConfigBindings = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"MinPawnsPerClient", 0x30, "UInt32Property"},
            {"MaxPawnsPerClient", 0x34, "UInt32Property"},
            {"MinReplicatedTimeSeconds", 0x38, "FloatProperty"},
            {"ProximityReplicateCount", 0x3C, "UInt32Property"},
            {"ProximityReplicateDistance", 0x40, "FloatProperty"},
            {"SignificanceCalculator", 0x48, "ObjectProperty"},
            {"bRequiresClientOptIn", 0x50, "BoolProperty"},
            {"ConfigBindings", 0x54, "StructProperty"},
        }};
    };

    struct MassCharacterServerTransformExtractProcessor
    {
        static constexpr std::string_view Name = "MassCharacterServerTransformExtractProcessor";
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

    struct MassCharacterSettings
    {
        static constexpr std::string_view Name = "MassCharacterSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassModuleSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t CharacterEntityConfigsToRegister = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CharacterEntityConfigsToRegister", 0x28, "ArrayProperty"},
        }};
    };

    struct MassCharacterSignificanceDistanceAndLookDirectionHandler
    {
        static constexpr std::string_view Name = "MassCharacterSignificanceDistanceAndLookDirectionHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassCharacterSignificanceHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t bConsiderDistance = 0x28;
            static constexpr std::uintptr_t InnerRelevancyDistance = 0x2C;
            static constexpr std::uintptr_t OuterRelevancyDistance = 0x30;
            static constexpr std::uintptr_t bConsiderLookDirection = 0x34;
            static constexpr std::uintptr_t InnerRelevancyAngle = 0x38;
            static constexpr std::uintptr_t OuterRelevancyAngle = 0x3C;
            static constexpr std::uintptr_t AngularExtentScale = 0x40;
            static constexpr std::uintptr_t BaseAngleWeight = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bConsiderDistance", 0x28, "BoolProperty"},
            {"InnerRelevancyDistance", 0x2C, "FloatProperty"},
            {"OuterRelevancyDistance", 0x30, "FloatProperty"},
            {"bConsiderLookDirection", 0x34, "BoolProperty"},
            {"InnerRelevancyAngle", 0x38, "FloatProperty"},
            {"OuterRelevancyAngle", 0x3C, "FloatProperty"},
            {"AngularExtentScale", 0x40, "FloatProperty"},
            {"BaseAngleWeight", 0x44, "FloatProperty"},
        }};
    };

    struct MassCharacterSignificanceHandler
    {
        static constexpr std::string_view Name = "MassCharacterSignificanceHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassCharacterSmoothReplicationTransformProcessor
    {
        static constexpr std::string_view Name = "MassCharacterSmoothReplicationTransformProcessor";
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

    struct MassCharacterSubsystem
    {
        static constexpr std::string_view Name = "MassCharacterSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassRepresentationSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnerSystem = 0xE0;
            static constexpr std::uintptr_t SimulationSystem = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpawnerSystem", 0xE0, "ObjectProperty"},
            {"SimulationSystem", 0xE8, "ObjectProperty"},
        }};
    };

    struct MassCharacterVisualizationHandler
    {
        static constexpr std::string_view Name = "MassCharacterVisualizationHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassCharacterVisualizationHandler_BP
    {
        static constexpr std::string_view Name = "MassCharacterVisualizationHandler_BP";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassCharacterVisualizationHandler";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassCharacterVisualizationHandler_ISKM
    {
        static constexpr std::string_view Name = "MassCharacterVisualizationHandler_ISKM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassCharacterVisualizationHandler";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassCharacterVisualizationHandler_VAT
    {
        static constexpr std::string_view Name = "MassCharacterVisualizationHandler_VAT";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassCharacterVisualizationHandler";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MassCharacterVisualizationInstanceRemover
    {
        static constexpr std::string_view Name = "MassCharacterVisualizationInstanceRemover";
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

    struct MassCharacterVisualizationTrait
    {
        static constexpr std::string_view Name = "MassCharacterVisualizationTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassVisualizationTrait";
        struct Offsets
        {
            static constexpr std::uintptr_t VisualizationLookupClass = 0x1F0;
            static constexpr std::uintptr_t TimeToInterpolateTowardPawnSeconds = 0x1F8;
            static constexpr std::uintptr_t LocalVisualizationTransform = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"VisualizationLookupClass", 0x1F0, "ClassProperty"},
            {"TimeToInterpolateTowardPawnSeconds", 0x1F8, "FloatProperty"},
            {"LocalVisualizationTransform", 0x200, "StructProperty"},
        }};
    };

    struct MassCharacterWorldConditionAnimationHandler
    {
        static constexpr std::string_view Name = "MassCharacterWorldConditionAnimationHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassCharacterAnimationHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimationConditions = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AnimationConditions", 0x28, "ArrayProperty"},
        }};
    };

    struct MassCharactersRepresentationActorManagement
    {
        static constexpr std::string_view Name = "MassCharactersRepresentationActorManagement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassRepresentationActorManagement";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
