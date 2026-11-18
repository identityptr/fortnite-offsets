#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EntityActor
{
    struct ActorToEntityAdapterComponent
    {
        static constexpr std::string_view Name = "ActorToEntityAdapterComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SerializedComponents = 0xC8;
            static constexpr std::uintptr_t bForceOwnerReplication = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SerializedComponents", 0xC8, "ArrayProperty"},
            {"bForceOwnerReplication", 0xD8, "BoolProperty"},
        }};
    };

    struct EntityAbilityInterface
    {
        static constexpr std::string_view Name = "EntityAbilityInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityActorCollisionComponent
    {
        static constexpr std::string_view Name = "EntityActorCollisionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityEnableableComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ShadowVar_CollisionProfileName = 0xC0;
            static constexpr std::uintptr_t PrimitiveComponentCache = 0xC8;
            static constexpr std::uintptr_t CollisionShapeMode = 0xEA;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ShadowVar_CollisionProfileName", 0xC0, "NameProperty"},
            {"PrimitiveComponentCache", 0xC8, "SoftObjectProperty"},
            {"CollisionShapeMode", 0xEA, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "OnEnabledChanged",
            "OnNativeComponentBeginOverlap",
            "OnNativeComponentEndOverlap",
            "OnNativeComponentHit",
            "OnRep_CollisionProfileName",
            "OnRep_PrimitiveComponent",
        }};
    };

    struct EntityActorComponent
    {
        static constexpr std::string_view Name = "EntityActorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorComponent = 0x60;
            static constexpr std::uintptr_t bCreatedActorComponent = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActorComponent", 0x60, "ObjectProperty"},
            {"bCreatedActorComponent", 0x68, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnRep_ActorComponent",
        }};
    };

    struct EntityActorCustomReplicationComponent
    {
        static constexpr std::string_view Name = "EntityActorCustomReplicationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicationOverride = 0x58;
            static constexpr std::uintptr_t ReplicationRelevancyBucketType = 0x59;
            static constexpr std::uintptr_t CustomReplicationRelevancyRange = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ReplicationOverride", 0x58, "ByteProperty"},
            {"ReplicationRelevancyBucketType", 0x59, "ByteProperty"},
            {"CustomReplicationRelevancyRange", 0x5C, "FloatProperty"},
        }};
    };

    struct EntityActorLocalInputComponent
    {
        static constexpr std::string_view Name = "EntityActorLocalInputComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AutoReceiveControllerInput = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AutoReceiveControllerInput", 0x58, "ByteProperty"},
        }};
    };

    struct EntityActorPlayerComponent
    {
        static constexpr std::string_view Name = "EntityActorPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityDataBackedComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerID = 0x60;
            static constexpr std::uintptr_t PlayerControllerCache = 0x90;
            static constexpr std::uintptr_t PlayerStateCache = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PlayerID", 0x60, "StructProperty"},
            {"PlayerControllerCache", 0x90, "SoftObjectProperty"},
            {"PlayerStateCache", 0xB0, "SoftObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnRep_PlayerID",
        }};
    };

    struct EntityActorPositionComponent
    {
        static constexpr std::string_view Name = "EntityActorPositionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityPositionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ShadowVar_Location = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ShadowVar_Location", 0x60, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnRootComponentChanged",
        }};
    };

    struct EntityActorRotationComponent
    {
        static constexpr std::string_view Name = "EntityActorRotationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityRotationComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ShadowVar_Rotation = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ShadowVar_Rotation", 0x60, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnRootComponentChanged",
        }};
    };

    struct EntityActorScaleComponent
    {
        static constexpr std::string_view Name = "EntityActorScaleComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityScaleComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ShadowVar_Scale = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ShadowVar_Scale", 0x60, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnRootComponentChanged",
        }};
    };

    struct EntityActorSkeletalMeshRenderComponent
    {
        static constexpr std::string_view Name = "EntityActorSkeletalMeshRenderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bAddedMeshRenderComponent = 0x60;
            static constexpr std::uintptr_t ShadowVar_SkeletalMesh = 0x68;
            static constexpr std::uintptr_t ShadowVar_EnableCollision = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bAddedMeshRenderComponent", 0x60, "BoolProperty"},
            {"ShadowVar_SkeletalMesh", 0x68, "ObjectProperty"},
            {"ShadowVar_EnableCollision", 0x70, "ByteProperty"},
        }};
    };

    struct EntityActorStaticMeshRenderComponent
    {
        static constexpr std::string_view Name = "EntityActorStaticMeshRenderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ShadowVar_MeshMaterials = 0x88;
            static constexpr std::uintptr_t ShadowVar_EnableCollision = 0x98;
            static constexpr std::uintptr_t ShadowVar_MaxDrawDistance = 0x9C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ShadowVar_MeshMaterials", 0x88, "ArrayProperty"},
            {"ShadowVar_EnableCollision", 0x98, "ByteProperty"},
            {"ShadowVar_MaxDrawDistance", 0x9C, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "OnRep_EnableCollision",
            "OnRep_MaxDrawDistance",
            "OnRep_MeshMaterials",
        }};
    };

    struct EntityActorSubsystem
    {
        static constexpr std::string_view Name = "EntityActorSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EntityActorTextDisplayComponent
    {
        static constexpr std::string_view Name = "EntityActorTextDisplayComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayText = 0x88;
            static constexpr std::uintptr_t ShadowVar_WorldSize = 0x98;
            static constexpr std::uintptr_t ShadowVar_TextRenderColor = 0x9C;
            static constexpr std::uintptr_t bAddedTextRenderComponent = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DisplayText", 0x88, "TextProperty"},
            {"ShadowVar_WorldSize", 0x98, "FloatProperty"},
            {"ShadowVar_TextRenderColor", 0x9C, "StructProperty"},
            {"bAddedTextRenderComponent", 0xA0, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 17> FunctionNames{{
            "GetHorizontalAlignment",
            "GetRelativeLocation",
            "GetText",
            "GetTextRenderColor",
            "GetVerticalAlignment",
            "GetWorldSize",
            "OnRep_DisplayText",
            "OnRep_TextRenderColor",
            "OnRep_WorldSize",
            "SetHorizontalAlignment",
            "SetRelativeLocation",
            "SetRelativeRotation",
            "SetRelativeScale",
            "SetText",
            "SetTextRenderColor",
            "SetVerticalAlignment",
            "SetWorldSize",
        }};
    };

    struct EntityDynamicActivationComponent
    {
        static constexpr std::string_view Name = "EntityDynamicActivationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityEnableableComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TransitionTargetTime = 0x88;
            static constexpr std::uintptr_t bTargetState = 0x8C;
            static constexpr std::uintptr_t LinkedComponents = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TransitionTargetTime", 0x88, "FloatProperty"},
            {"bTargetState", 0x8C, "BoolProperty"},
            {"LinkedComponents", 0x90, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "OnEnabledChanged",
            "OnRep_TransitionTarget",
        }};
    };

    struct EntityToActorAdapterComponent
    {
        static constexpr std::string_view Name = "EntityToActorAdapterComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EntityComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SimObject
    {
        static constexpr std::string_view Name = "SimObject";
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
