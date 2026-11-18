#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BeanstalkDevicesCoreRuntime
{
    struct BeanDeviceFunctionLibrary
    {
        static constexpr std::string_view Name = "BeanDeviceFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BeanObstacleImpactComponent
    {
        static constexpr std::string_view Name = "BeanObstacleImpactComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnObstacleImpact = 0xC8;
            static constexpr std::uintptr_t bApplyDefaultKnockback = 0xD8;
            static constexpr std::uintptr_t bApplyRagdoll = 0xD9;
            static constexpr std::uintptr_t AffectedColliders = 0xE0;
            static constexpr std::uintptr_t KnockbackForce = 0xF0;
            static constexpr std::uintptr_t bApplyImpactLocally = 0x120;
            static constexpr std::uintptr_t MaxExpectedComponentVelocityForServerValidation = 0x128;
            static constexpr std::uintptr_t CachedColliders = 0x130;
            static constexpr std::uintptr_t CachedColliderDeltas = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OnObstacleImpact", 0xC8, "MulticastInlineDelegateProperty"},
            {"bApplyDefaultKnockback", 0xD8, "BoolProperty"},
            {"bApplyRagdoll", 0xD9, "BoolProperty"},
            {"AffectedColliders", 0xE0, "ArrayProperty"},
            {"KnockbackForce", 0xF0, "StructProperty"},
            {"bApplyImpactLocally", 0x120, "BoolProperty"},
            {"MaxExpectedComponentVelocityForServerValidation", 0x128, "DoubleProperty"},
            {"CachedColliders", 0x130, "ArrayProperty"},
            {"CachedColliderDeltas", 0x140, "ArrayProperty"},
        }};
    };

    struct BeanObstacleMeshSelectorComponent
    {
        static constexpr std::string_view Name = "BeanObstacleMeshSelectorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSelectedMeshSetDelegate = 0xC0;
            static constexpr std::uintptr_t TargetStaticMeshComponentRef = 0xD0;
            static constexpr std::uintptr_t SelectableMeshes = 0xF8;
            static constexpr std::uintptr_t TargetStaticMeshComponent = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnSelectedMeshSetDelegate", 0xC0, "MulticastInlineDelegateProperty"},
            {"TargetStaticMeshComponentRef", 0xD0, "StructProperty"},
            {"SelectableMeshes", 0xF8, "ArrayProperty"},
            {"TargetStaticMeshComponent", 0x108, "ObjectProperty"},
        }};
    };

    struct BeanObstacleMotion
    {
        static constexpr std::string_view Name = "BeanObstacleMotion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BeanObstacleMotion_Punch
    {
        static constexpr std::string_view Name = "BeanObstacleMotion_Punch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeanObstacleMotion";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementVector = 0x28;
            static constexpr std::uintptr_t StartDelay = 0x40;
            static constexpr std::uintptr_t MoveOutDuration = 0x44;
            static constexpr std::uintptr_t OutPauseDuration = 0x48;
            static constexpr std::uintptr_t MoveInDuration = 0x4C;
            static constexpr std::uintptr_t InPauseDuration = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MovementVector", 0x28, "StructProperty"},
            {"StartDelay", 0x40, "FloatProperty"},
            {"MoveOutDuration", 0x44, "FloatProperty"},
            {"OutPauseDuration", 0x48, "FloatProperty"},
            {"MoveInDuration", 0x4C, "FloatProperty"},
            {"InPauseDuration", 0x50, "FloatProperty"},
        }};
    };

    struct BeanObstacleMotion_Rotational
    {
        static constexpr std::string_view Name = "BeanObstacleMotion_Rotational";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BeanObstacleMotion";
        struct Offsets
        {
            static constexpr std::uintptr_t RotationAxis = 0x28;
            static constexpr std::uintptr_t RotationSpeed = 0x2C;
            static constexpr std::uintptr_t StartRotation = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RotationAxis", 0x28, "ByteProperty"},
            {"RotationSpeed", 0x2C, "FloatProperty"},
            {"StartRotation", 0x30, "FloatProperty"},
        }};
    };

    struct BeanObstacleMovementComponent
    {
        static constexpr std::string_view Name = "BeanObstacleMovementComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bRegisterWithBeanTickManager = 0xC0;
            static constexpr std::uintptr_t OnRewindStateChangedDelegate = 0xC8;
            static constexpr std::uintptr_t ClientOnStartedMoving = 0xD8;
            static constexpr std::uintptr_t ClientOnStoppedMoving = 0xE8;
            static constexpr std::uintptr_t TargetComponentRef = 0xF8;
            static constexpr std::uintptr_t ObstacleMotion = 0x120;
            static constexpr std::uintptr_t bShouldSweep = 0x128;
            static constexpr std::uintptr_t ReconciliationInterpSpeed = 0x12C;
            static constexpr std::uintptr_t bEnableEventSleeping = 0x130;
            static constexpr std::uintptr_t EventSleepDistanceThreshold = 0x138;
            static constexpr std::uintptr_t EventSleepPollInterval = 0x140;
            static constexpr std::uintptr_t TargetComponentOriginalRelativeLocation = 0x148;
            static constexpr std::uintptr_t TargetComponentOriginalRelativeRotation = 0x160;
            static constexpr std::uintptr_t TargetComponent = 0x180;
            static constexpr std::uintptr_t LastEventSleepPollTime = 0x188;
            static constexpr std::uintptr_t bAreEventsAsleep = 0x190;
            static constexpr std::uintptr_t bIsObstacleTickSleeping = 0x190;
            static constexpr std::uintptr_t bIsUsingTickManager = 0x190;
            static constexpr std::uintptr_t bLastFiredEventWasStart = 0x190;
            static constexpr std::uintptr_t bStartWithMotionEnabled = 0x190;
            static constexpr std::uintptr_t ObstacleMotionRuntimeState = 0x198;
            static constexpr std::uintptr_t CurrentEvalTime = 0x1C8;
            static constexpr std::uintptr_t LastObstacleMovementState = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"bRegisterWithBeanTickManager", 0xC0, "BoolProperty"},
            {"OnRewindStateChangedDelegate", 0xC8, "MulticastInlineDelegateProperty"},
            {"ClientOnStartedMoving", 0xD8, "MulticastInlineDelegateProperty"},
            {"ClientOnStoppedMoving", 0xE8, "MulticastInlineDelegateProperty"},
            {"TargetComponentRef", 0xF8, "StructProperty"},
            {"ObstacleMotion", 0x120, "ObjectProperty"},
            {"bShouldSweep", 0x128, "BoolProperty"},
            {"ReconciliationInterpSpeed", 0x12C, "FloatProperty"},
            {"bEnableEventSleeping", 0x130, "BoolProperty"},
            {"EventSleepDistanceThreshold", 0x138, "DoubleProperty"},
            {"EventSleepPollInterval", 0x140, "DoubleProperty"},
            {"TargetComponentOriginalRelativeLocation", 0x148, "StructProperty"},
            {"TargetComponentOriginalRelativeRotation", 0x160, "StructProperty"},
            {"TargetComponent", 0x180, "WeakObjectProperty"},
            {"LastEventSleepPollTime", 0x188, "DoubleProperty"},
            {"bAreEventsAsleep", 0x190, "BoolProperty"},
            {"bIsObstacleTickSleeping", 0x190, "BoolProperty"},
            {"bIsUsingTickManager", 0x190, "BoolProperty"},
            {"bLastFiredEventWasStart", 0x190, "BoolProperty"},
            {"bStartWithMotionEnabled", 0x190, "BoolProperty"},
            {"ObstacleMotionRuntimeState", 0x198, "StructProperty"},
            {"CurrentEvalTime", 0x1C8, "DoubleProperty"},
            {"LastObstacleMovementState", 0x1D0, "EnumProperty"},
        }};
    };

    struct BeanObstacleOptimizerComponent
    {
        static constexpr std::string_view Name = "BeanObstacleOptimizerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BoxComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtraMarginSize = 0x5A0;
            static constexpr std::uintptr_t bDisableCollidersWhenSleeping = 0x5A4;
            static constexpr std::uintptr_t bDetachFromParentAndAttachToOptimizerActor = 0x5A5;
            static constexpr std::uintptr_t OnSleepStateChanged = 0x5A8;
            static constexpr std::uintptr_t bIsSleeping = 0x5B8;
            static constexpr std::uintptr_t NumPawnsOverlapping = 0x5BC;
            static constexpr std::uintptr_t OptimizableColliders = 0x5C0;
            static constexpr std::uintptr_t OptimizableCollidersOriginalCollisionEnabled = 0x5D0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ExtraMarginSize", 0x5A0, "FloatProperty"},
            {"bDisableCollidersWhenSleeping", 0x5A4, "BoolProperty"},
            {"bDetachFromParentAndAttachToOptimizerActor", 0x5A5, "BoolProperty"},
            {"OnSleepStateChanged", 0x5A8, "MulticastInlineDelegateProperty"},
            {"bIsSleeping", 0x5B8, "BoolProperty"},
            {"NumPawnsOverlapping", 0x5BC, "IntProperty"},
            {"OptimizableColliders", 0x5C0, "ArrayProperty"},
            {"OptimizableCollidersOriginalCollisionEnabled", 0x5D0, "MapProperty"},
        }};
    };

    struct BeanObstacleTickManager
    {
        static constexpr std::string_view Name = "BeanObstacleTickManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryActorTick = 0x28;
            static constexpr std::uintptr_t bAlwaysRelevant = 0x58;
            static constexpr std::uintptr_t bCallPreReplication = 0x58;
            static constexpr std::uintptr_t bCallPreReplicationForReplay = 0x58;
            static constexpr std::uintptr_t bHidden = 0x58;
            static constexpr std::uintptr_t bNetTemporary = 0x58;
            static constexpr std::uintptr_t bOnlyRelevantToOwner = 0x58;
            static constexpr std::uintptr_t bReplicateMovement = 0x58;
            static constexpr std::uintptr_t bExchangedRoles = 0x59;
            static constexpr std::uintptr_t bForceNetAddressable = 0x59;
            static constexpr std::uintptr_t bNetLoadOnClient = 0x59;
            static constexpr std::uintptr_t bNetUseOwnerRelevancy = 0x59;
            static constexpr std::uintptr_t bRelevantForLevelBounds = 0x59;
            static constexpr std::uintptr_t bRelevantForNetworkReplays = 0x59;
            static constexpr std::uintptr_t bReplayRewindable = 0x59;
            static constexpr std::uintptr_t bTearOff = 0x59;
            static constexpr std::uintptr_t bAllowTickBeforeBeginPlay = 0x5A;
            static constexpr std::uintptr_t bAutoDestroyWhenFinished = 0x5A;
            static constexpr std::uintptr_t bBlockInput = 0x5A;
            static constexpr std::uintptr_t bCanBeDamaged = 0x5A;
            static constexpr std::uintptr_t bCollideWhenPlacing = 0x5A;
            static constexpr std::uintptr_t bFindCameraComponentWhenViewTarget = 0x5A;
            static constexpr std::uintptr_t bGenerateOverlapEventsDuringLevelStreaming = 0x5A;
            static constexpr std::uintptr_t bIgnoresOriginShifting = 0x5A;
            static constexpr std::uintptr_t bAllowReceiveTickEventOnDedicatedServer = 0x5B;
            static constexpr std::uintptr_t bCanBeInCluster = 0x5B;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x5B;
            static constexpr std::uintptr_t bIsEditorOnlyActor = 0x5B;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x5B;
            static constexpr std::uintptr_t bReplicates = 0x5B;
            static constexpr std::uintptr_t bActorEnableCollision = 0x5D;
            static constexpr std::uintptr_t bActorIsBeingDestroyed = 0x5D;
            static constexpr std::uintptr_t bAsyncPhysicsTickEnabled = 0x5D;
            static constexpr std::uintptr_t UpdateOverlapsMethodDuringLevelStreaming = 0x5E;
            static constexpr std::uintptr_t DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5F;
            static constexpr std::uintptr_t RemoteRole = 0x60;
            static constexpr std::uintptr_t InitialLifeSpan = 0x64;
            static constexpr std::uintptr_t CustomTimeDilation = 0x68;
            static constexpr std::uintptr_t RayTracingGroupId = 0x6C;
            static constexpr std::uintptr_t AttachmentReplication = 0x70;
            static constexpr std::uintptr_t ReplicatedMovement = 0xD0;
            static constexpr std::uintptr_t Owner = 0x158;
            static constexpr std::uintptr_t NetDriverName = 0x160;
            static constexpr std::uintptr_t Role = 0x164;
            static constexpr std::uintptr_t NetDormancy = 0x165;
            static constexpr std::uintptr_t SpawnCollisionHandlingMethod = 0x166;
            static constexpr std::uintptr_t AutoReceiveInput = 0x167;
            static constexpr std::uintptr_t InputPriority = 0x168;
            static constexpr std::uintptr_t InputComponent = 0x170;
            static constexpr std::uintptr_t NetTag = 0x178;
            static constexpr std::uintptr_t NetCullDistanceSquared = 0x17C;
            static constexpr std::uintptr_t NetUpdateFrequency = 0x180;
            static constexpr std::uintptr_t MinNetUpdateFrequency = 0x184;
            static constexpr std::uintptr_t NetPriority = 0x188;
            static constexpr std::uintptr_t PhysicsReplicationMode = 0x18C;
            static constexpr std::uintptr_t Instigator = 0x198;
            static constexpr std::uintptr_t Children = 0x1A0;
            static constexpr std::uintptr_t RootComponent = 0x1B0;
            static constexpr std::uintptr_t HLODLayer = 0x1C8;
            static constexpr std::uintptr_t Layers = 0x1D0;
            static constexpr std::uintptr_t ParentComponent = 0x1E0;
            static constexpr std::uintptr_t Tags = 0x1F8;
            static constexpr std::uintptr_t OnTakeAnyDamage = 0x208;
            static constexpr std::uintptr_t OnTakePointDamage = 0x209;
            static constexpr std::uintptr_t OnTakeRadialDamage = 0x20A;
            static constexpr std::uintptr_t OnActorBeginOverlap = 0x20B;
            static constexpr std::uintptr_t OnActorEndOverlap = 0x20C;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x20D;
            static constexpr std::uintptr_t OnEndCursorOver = 0x20E;
            static constexpr std::uintptr_t OnClicked = 0x20F;
            static constexpr std::uintptr_t OnReleased = 0x210;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x211;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x212;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x213;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x214;
            static constexpr std::uintptr_t OnActorHit = 0x215;
            static constexpr std::uintptr_t OnDestroyed = 0x216;
            static constexpr std::uintptr_t OnEndPlay = 0x217;
            static constexpr std::uintptr_t InstanceComponents = 0x258;
            static constexpr std::uintptr_t BlueprintCreatedComponents = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 80> Properties{{
            {"PrimaryActorTick", 0x28, "StructProperty"},
            {"bAlwaysRelevant", 0x58, "BoolProperty"},
            {"bCallPreReplication", 0x58, "BoolProperty"},
            {"bCallPreReplicationForReplay", 0x58, "BoolProperty"},
            {"bHidden", 0x58, "BoolProperty"},
            {"bNetTemporary", 0x58, "BoolProperty"},
            {"bOnlyRelevantToOwner", 0x58, "BoolProperty"},
            {"bReplicateMovement", 0x58, "BoolProperty"},
            {"bExchangedRoles", 0x59, "BoolProperty"},
            {"bForceNetAddressable", 0x59, "BoolProperty"},
            {"bNetLoadOnClient", 0x59, "BoolProperty"},
            {"bNetUseOwnerRelevancy", 0x59, "BoolProperty"},
            {"bRelevantForLevelBounds", 0x59, "BoolProperty"},
            {"bRelevantForNetworkReplays", 0x59, "BoolProperty"},
            {"bReplayRewindable", 0x59, "BoolProperty"},
            {"bTearOff", 0x59, "BoolProperty"},
            {"bAllowTickBeforeBeginPlay", 0x5A, "BoolProperty"},
            {"bAutoDestroyWhenFinished", 0x5A, "BoolProperty"},
            {"bBlockInput", 0x5A, "BoolProperty"},
            {"bCanBeDamaged", 0x5A, "BoolProperty"},
            {"bCollideWhenPlacing", 0x5A, "BoolProperty"},
            {"bFindCameraComponentWhenViewTarget", 0x5A, "BoolProperty"},
            {"bGenerateOverlapEventsDuringLevelStreaming", 0x5A, "BoolProperty"},
            {"bIgnoresOriginShifting", 0x5A, "BoolProperty"},
            {"bAllowReceiveTickEventOnDedicatedServer", 0x5B, "BoolProperty"},
            {"bCanBeInCluster", 0x5B, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x5B, "BoolProperty"},
            {"bIsEditorOnlyActor", 0x5B, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x5B, "BoolProperty"},
            {"bReplicates", 0x5B, "BoolProperty"},
            {"bActorEnableCollision", 0x5D, "BoolProperty"},
            {"bActorIsBeingDestroyed", 0x5D, "BoolProperty"},
            {"bAsyncPhysicsTickEnabled", 0x5D, "BoolProperty"},
            {"UpdateOverlapsMethodDuringLevelStreaming", 0x5E, "EnumProperty"},
            {"DefaultUpdateOverlapsMethodDuringLevelStreaming", 0x5F, "EnumProperty"},
            {"RemoteRole", 0x60, "ByteProperty"},
            {"InitialLifeSpan", 0x64, "FloatProperty"},
            {"CustomTimeDilation", 0x68, "FloatProperty"},
            {"RayTracingGroupId", 0x6C, "IntProperty"},
            {"AttachmentReplication", 0x70, "StructProperty"},
            {"ReplicatedMovement", 0xD0, "StructProperty"},
            {"Owner", 0x158, "ObjectProperty"},
            {"NetDriverName", 0x160, "NameProperty"},
            {"Role", 0x164, "ByteProperty"},
            {"NetDormancy", 0x165, "ByteProperty"},
            {"SpawnCollisionHandlingMethod", 0x166, "EnumProperty"},
            {"AutoReceiveInput", 0x167, "ByteProperty"},
            {"InputPriority", 0x168, "IntProperty"},
            {"InputComponent", 0x170, "ObjectProperty"},
            {"NetTag", 0x178, "IntProperty"},
            {"NetCullDistanceSquared", 0x17C, "FloatProperty"},
            {"NetUpdateFrequency", 0x180, "FloatProperty"},
            {"MinNetUpdateFrequency", 0x184, "FloatProperty"},
            {"NetPriority", 0x188, "FloatProperty"},
            {"PhysicsReplicationMode", 0x18C, "EnumProperty"},
            {"Instigator", 0x198, "ObjectProperty"},
            {"Children", 0x1A0, "ArrayProperty"},
            {"RootComponent", 0x1B0, "ObjectProperty"},
            {"HLODLayer", 0x1C8, "ObjectProperty"},
            {"Layers", 0x1D0, "ArrayProperty"},
            {"ParentComponent", 0x1E0, "WeakObjectProperty"},
            {"Tags", 0x1F8, "ArrayProperty"},
            {"OnTakeAnyDamage", 0x208, "MulticastSparseDelegateProperty"},
            {"OnTakePointDamage", 0x209, "MulticastSparseDelegateProperty"},
            {"OnTakeRadialDamage", 0x20A, "MulticastSparseDelegateProperty"},
            {"OnActorBeginOverlap", 0x20B, "MulticastSparseDelegateProperty"},
            {"OnActorEndOverlap", 0x20C, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x20D, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x20E, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x20F, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x210, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x211, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x212, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x213, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x214, "MulticastSparseDelegateProperty"},
            {"OnActorHit", 0x215, "MulticastSparseDelegateProperty"},
            {"OnDestroyed", 0x216, "MulticastSparseDelegateProperty"},
            {"OnEndPlay", 0x217, "MulticastSparseDelegateProperty"},
            {"InstanceComponents", 0x258, "ArrayProperty"},
            {"BlueprintCreatedComponents", 0x268, "ArrayProperty"},
        }};
    };

}
