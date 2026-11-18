#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VerseAssets
{
    struct MeshPartAssetAssociation
    {
        static constexpr std::string_view Name = "MeshPartAssetAssociation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t BodyAssociations = 0x8;
            static constexpr std::uintptr_t Interfaces = 0x18;
            static constexpr std::uintptr_t PhysicsBodyAssociations = 0x28;
            static constexpr std::uintptr_t PhysicsShapeAssociations = 0x38;
            static constexpr std::uintptr_t OriginSocket = 0x48;
            static constexpr std::uintptr_t MaterialAssociations = 0x50;
            static constexpr std::uintptr_t InterfaceNames = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"BodyAssociations", 0x8, "ArrayProperty"},
            {"Interfaces", 0x18, "ArrayProperty"},
            {"PhysicsBodyAssociations", 0x28, "ArrayProperty"},
            {"PhysicsShapeAssociations", 0x38, "ArrayProperty"},
            {"OriginSocket", 0x48, "NameProperty"},
            {"MaterialAssociations", 0x50, "ArrayProperty"},
            {"InterfaceNames", 0x60, "ArrayProperty"},
        }};
    };

    struct MeshPartAssetBodyAssociation
    {
        static constexpr std::string_view Name = "MeshPartAssetBodyAssociation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BodyIndex = 0x0;
            static constexpr std::uintptr_t ShapeIndices = 0x8;
            static constexpr std::uintptr_t BodyName = 0x18;
            static constexpr std::uintptr_t ShapeNames = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BodyIndex", 0x0, "IntProperty"},
            {"ShapeIndices", 0x8, "ArrayProperty"},
            {"BodyName", 0x18, "NameProperty"},
            {"ShapeNames", 0x20, "ArrayProperty"},
        }};
    };

    struct MeshPartAssetMaterialAssociation
    {
        static constexpr std::string_view Name = "MeshPartAssetMaterialAssociation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialSlotName = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaterialSlotName", 0x0, "NameProperty"},
        }};
    };

    struct MeshPartAssetPhysicsBodyAssociation
    {
        static constexpr std::string_view Name = "MeshPartAssetPhysicsBodyAssociation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BodyName = 0x0;
            static constexpr std::uintptr_t BodyIndex = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BodyName", 0x0, "NameProperty"},
            {"BodyIndex", 0x4, "IntProperty"},
        }};
    };

    struct MeshPartAssetPhysicsShapeAssociation
    {
        static constexpr std::string_view Name = "MeshPartAssetPhysicsShapeAssociation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BodyName = 0x0;
            static constexpr std::uintptr_t ShapeName = 0x4;
            static constexpr std::uintptr_t BodyIndex = 0x8;
            static constexpr std::uintptr_t ShapeIndex = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BodyName", 0x0, "NameProperty"},
            {"ShapeName", 0x4, "NameProperty"},
            {"BodyIndex", 0x8, "IntProperty"},
            {"ShapeIndex", 0xC, "IntProperty"},
        }};
    };

    struct MeshPartAssetUserData
    {
        static constexpr std::string_view Name = "MeshPartAssetUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshPartAssetAssociations = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MeshPartAssetAssociations", 0x28, "ArrayProperty"},
        }};
    };

    struct ParameterizePropertyInterfaceBase
    {
        static constexpr std::string_view Name = "ParameterizePropertyInterfaceBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MessageReplicatorArray = 0x28;
            static constexpr std::uintptr_t Key = 0x88;
            static constexpr std::uintptr_t AuthoritativeKey = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MessageReplicatorArray", 0x28, "StructProperty"},
            {"Key", 0x88, "StructProperty"},
            {"AuthoritativeKey", 0x90, "StructProperty"},
        }};
    };

    struct ParticleDataChannelReplication
    {
        static constexpr std::string_view Name = "ParticleDataChannelReplication";
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

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "Client_ReceivePayload",
        }};
    };

    struct ParticleDataChannelReplicationPayload
    {
        static constexpr std::string_view Name = "ParticleDataChannelReplicationPayload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataChannelAsset = 0x0;
            static constexpr std::uintptr_t Payload = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DataChannelAsset", 0x0, "ObjectProperty"},
            {"Payload", 0x8, "StructProperty"},
        }};
    };

    struct PropertyInterface
    {
        static constexpr std::string_view Name = "PropertyInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PropertyInterfaceBoolValue
    {
        static constexpr std::string_view Name = "PropertyInterfaceBoolValue";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PropertyInterfaceValueBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x40, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnRep_Value",
        }};
    };

    struct PropertyInterfaceDoubleValue
    {
        static constexpr std::string_view Name = "PropertyInterfaceDoubleValue";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PropertyInterfaceValueBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x40, "DoubleProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnRep_Value",
        }};
    };

    struct PropertyInterfaceGeneratedClass
    {
        static constexpr std::string_view Name = "PropertyInterfaceGeneratedClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintGeneratedClass";
        struct Offsets
        {
            static constexpr std::uintptr_t NumReplicatedProperties = 0x1A0;
            static constexpr std::uintptr_t bHasCookedComponentInstancingData = 0x1A4;
            static constexpr std::uintptr_t bIsNativePropertyInitFastPathDisabled = 0x1A4;
            static constexpr std::uintptr_t bSupportsDynamicInstancedReference = 0x1A4;
            static constexpr std::uintptr_t DynamicBindingObjects = 0x1A8;
            static constexpr std::uintptr_t ComponentTemplates = 0x1B8;
            static constexpr std::uintptr_t Timelines = 0x1C8;
            static constexpr std::uintptr_t ComponentClassOverrides = 0x1D8;
            static constexpr std::uintptr_t FieldNotifies = 0x1E8;
            static constexpr std::uintptr_t SimpleConstructionScript = 0x200;
            static constexpr std::uintptr_t InheritableComponentHandler = 0x208;
            static constexpr std::uintptr_t UberGraphFunction = 0x218;
            static constexpr std::uintptr_t CookedPropertyGuids = 0x220;
            static constexpr std::uintptr_t CookedComponentInstancingData = 0x230;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"NumReplicatedProperties", 0x1A0, "IntProperty"},
            {"bHasCookedComponentInstancingData", 0x1A4, "BoolProperty"},
            {"bIsNativePropertyInitFastPathDisabled", 0x1A4, "BoolProperty"},
            {"bSupportsDynamicInstancedReference", 0x1A4, "BoolProperty"},
            {"DynamicBindingObjects", 0x1A8, "ArrayProperty"},
            {"ComponentTemplates", 0x1B8, "ArrayProperty"},
            {"Timelines", 0x1C8, "ArrayProperty"},
            {"ComponentClassOverrides", 0x1D8, "ArrayProperty"},
            {"FieldNotifies", 0x1E8, "ArrayProperty"},
            {"SimpleConstructionScript", 0x200, "ObjectProperty"},
            {"InheritableComponentHandler", 0x208, "ObjectProperty"},
            {"UberGraphFunction", 0x218, "ObjectProperty"},
            {"CookedPropertyGuids", 0x220, "MapProperty"},
            {"CookedComponentInstancingData", 0x230, "MapProperty"},
        }};
    };

    struct PropertyInterfaceInt64Value
    {
        static constexpr std::string_view Name = "PropertyInterfaceInt64Value";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PropertyInterfaceValueBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x40, "Int64Property"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnRep_Value",
        }};
    };

    struct PropertyInterfaceKey
    {
        static constexpr std::string_view Name = "PropertyInterfaceKey";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ID", 0x0, "Int64Property"},
        }};
    };

    struct PropertyInterfaceMessageReplicatorArray
    {
        static constexpr std::string_view Name = "PropertyInterfaceMessageReplicatorArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializer";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Items", 0x50, "ArrayProperty"},
        }};
    };

    struct PropertyInterfaceMessageReplicatorItem
    {
        static constexpr std::string_view Name = "PropertyInterfaceMessageReplicatorItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializerItem";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyName = 0xC;
            static constexpr std::uintptr_t ArrayIndex = 0x10;
            static constexpr std::uintptr_t Message = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PropertyName", 0xC, "NameProperty"},
            {"ArrayIndex", 0x10, "IntProperty"},
            {"Message", 0x18, "StructProperty"},
        }};
    };

    struct PropertyInterfaceValueBase
    {
        static constexpr std::string_view Name = "PropertyInterfaceValueBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyName = 0x28;
            static constexpr std::uintptr_t ClientID = 0x2C;
            static constexpr std::uintptr_t ServerID = 0x30;
            static constexpr std::uintptr_t Owner = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PropertyName", 0x28, "NameProperty"},
            {"ClientID", 0x2C, "IntProperty"},
            {"ServerID", 0x30, "IntProperty"},
            {"Owner", 0x38, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnRep_ClientID",
        }};
    };

    struct PropertyInterface_EventParameter
    {
        static constexpr std::string_view Name = "PropertyInterface_EventParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Type", 0x0, "EnumProperty"},
        }};
    };

    struct PropertyInterface_VariableProperties
    {
        static constexpr std::string_view Name = "PropertyInterface_VariableProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BooleanProperty = 0x0;
            static constexpr std::uintptr_t IntegerProperty = 0x8;
            static constexpr std::uintptr_t FloatingProperty = 0x10;
            static constexpr std::uintptr_t StringProperty = 0x18;
            static constexpr std::uintptr_t MessageProperty = 0x28;
            static constexpr std::uintptr_t AssetProperty = 0x38;
            static constexpr std::uintptr_t ObjectProperty = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"BooleanProperty", 0x0, "BoolProperty"},
            {"IntegerProperty", 0x8, "Int64Property"},
            {"FloatingProperty", 0x10, "DoubleProperty"},
            {"StringProperty", 0x18, "StrProperty"},
            {"MessageProperty", 0x28, "TextProperty"},
            {"AssetProperty", 0x38, "SoftObjectProperty"},
            {"ObjectProperty", 0x58, "ObjectProperty"},
        }};
    };

    struct PropertyInterface_VariableTag
    {
        static constexpr std::string_view Name = "PropertyInterface_VariableTag";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t InternalName = 0x4;
            static constexpr std::uintptr_t FullyQualifiedName = 0x8;
            static constexpr std::uintptr_t Description = 0x10;
            static constexpr std::uintptr_t Type = 0x20;
            static constexpr std::uintptr_t TypeUE5Class = 0x28;
            static constexpr std::uintptr_t VisibilityAccess = 0x38;
            static constexpr std::uintptr_t WriteAccess = 0x3C;
            static constexpr std::uintptr_t DefaultValue = 0x40;
            static constexpr std::uintptr_t ToolTip = 0x50;
            static constexpr std::uintptr_t bDefaultValueSet = 0x60;
            static constexpr std::uintptr_t bIsArray = 0x61;
            static constexpr std::uintptr_t bIsConst = 0x62;
            static constexpr std::uintptr_t bIsSubscribable = 0x63;
            static constexpr std::uintptr_t bIsOwnedByInterface = 0x64;
            static constexpr std::uintptr_t EventParameters = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"InternalName", 0x4, "NameProperty"},
            {"FullyQualifiedName", 0x8, "NameProperty"},
            {"Description", 0x10, "StrProperty"},
            {"Type", 0x20, "EnumProperty"},
            {"TypeUE5Class", 0x28, "StrProperty"},
            {"VisibilityAccess", 0x38, "NameProperty"},
            {"WriteAccess", 0x3C, "NameProperty"},
            {"DefaultValue", 0x40, "StrProperty"},
            {"ToolTip", 0x50, "StrProperty"},
            {"bDefaultValueSet", 0x60, "BoolProperty"},
            {"bIsArray", 0x61, "BoolProperty"},
            {"bIsConst", 0x62, "BoolProperty"},
            {"bIsSubscribable", 0x63, "BoolProperty"},
            {"bIsOwnedByInterface", 0x64, "BoolProperty"},
            {"EventParameters", 0x68, "ArrayProperty"},
        }};
    };

    struct VerseAssetPtr
    {
        static constexpr std::string_view Name = "VerseAssetPtr";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VerseAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetForEditor = 0x38;
            static constexpr std::uintptr_t AssetPathName = 0x58;
            static constexpr std::uintptr_t Object = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AssetForEditor", 0x38, "SoftObjectProperty"},
            {"AssetPathName", 0x58, "NameProperty"},
            {"Object", 0x60, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "OnRep_AssetPathName",
            "OnRep_GroupedVerseAssetProperty",
        }};
    };

    struct VerseAssetReflectionInteropData
    {
        static constexpr std::string_view Name = "VerseAssetReflectionInteropData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseAssetReplication
    {
        static constexpr std::string_view Name = "VerseAssetReplication";
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

    struct VerseAssetReplicationSubsystem
    {
        static constexpr std::string_view Name = "VerseAssetReplicationSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VerseMaterialInstanceDynamic
    {
        static constexpr std::string_view Name = "VerseMaterialInstanceDynamic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialInstanceDynamic";
        struct Offsets
        {
            static constexpr std::uintptr_t PhysMaterial = 0x128;
            static constexpr std::uintptr_t PhysicalMaterialMap = 0x130;
            static constexpr std::uintptr_t Parent = 0x170;
            static constexpr std::uintptr_t NaniteOverrideMaterial = 0x178;
            static constexpr std::uintptr_t SpecularProfileOverride = 0x1A8;
            static constexpr std::uintptr_t ToonProfileOverride = 0x1B0;
            static constexpr std::uintptr_t bHasStaticPermutationResource = 0x1B8;
            static constexpr std::uintptr_t bOverrideBlendableLocation = 0x1B8;
            static constexpr std::uintptr_t bOverrideBlendablePriority = 0x1B8;
            static constexpr std::uintptr_t bOverridePhysMaterial = 0x1B8;
            static constexpr std::uintptr_t bOverrideSpecularProfile = 0x1B8;
            static constexpr std::uintptr_t bOverrideSubsurfaceProfile = 0x1B8;
            static constexpr std::uintptr_t bOverrideToonProfile = 0x1B8;
            static constexpr std::uintptr_t BlendableLocationOverride = 0x1BD;
            static constexpr std::uintptr_t BlendablePriorityOverride = 0x1C0;
            static constexpr std::uintptr_t ScalarParameterValues = 0x1E8;
            static constexpr std::uintptr_t VectorParameterValues = 0x1F8;
            static constexpr std::uintptr_t DoubleVectorParameterValues = 0x208;
            static constexpr std::uintptr_t TextureParameterValues = 0x218;
            static constexpr std::uintptr_t TextureCollectionParameterValues = 0x228;
            static constexpr std::uintptr_t ParameterCollectionParameterValues = 0x238;
            static constexpr std::uintptr_t RuntimeVirtualTextureParameterValues = 0x248;
            static constexpr std::uintptr_t SparseVolumeTextureParameterValues = 0x258;
            static constexpr std::uintptr_t FontParameterValues = 0x268;
            static constexpr std::uintptr_t ToonProfileParameterValues = 0x278;
            static constexpr std::uintptr_t UserSceneTextureOverrides = 0x288;
            static constexpr std::uintptr_t BasePropertyOverrides = 0x298;
            static constexpr std::uintptr_t StaticParametersRuntime = 0x2D0;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"PhysMaterial", 0x128, "ObjectProperty"},
            {"PhysicalMaterialMap", 0x130, "ObjectProperty"},
            {"Parent", 0x170, "ObjectProperty"},
            {"NaniteOverrideMaterial", 0x178, "StructProperty"},
            {"SpecularProfileOverride", 0x1A8, "ObjectProperty"},
            {"ToonProfileOverride", 0x1B0, "ObjectProperty"},
            {"bHasStaticPermutationResource", 0x1B8, "BoolProperty"},
            {"bOverrideBlendableLocation", 0x1B8, "BoolProperty"},
            {"bOverrideBlendablePriority", 0x1B8, "BoolProperty"},
            {"bOverridePhysMaterial", 0x1B8, "BoolProperty"},
            {"bOverrideSpecularProfile", 0x1B8, "BoolProperty"},
            {"bOverrideSubsurfaceProfile", 0x1B8, "BoolProperty"},
            {"bOverrideToonProfile", 0x1B8, "BoolProperty"},
            {"BlendableLocationOverride", 0x1BD, "ByteProperty"},
            {"BlendablePriorityOverride", 0x1C0, "IntProperty"},
            {"ScalarParameterValues", 0x1E8, "ArrayProperty"},
            {"VectorParameterValues", 0x1F8, "ArrayProperty"},
            {"DoubleVectorParameterValues", 0x208, "ArrayProperty"},
            {"TextureParameterValues", 0x218, "ArrayProperty"},
            {"TextureCollectionParameterValues", 0x228, "ArrayProperty"},
            {"ParameterCollectionParameterValues", 0x238, "ArrayProperty"},
            {"RuntimeVirtualTextureParameterValues", 0x248, "ArrayProperty"},
            {"SparseVolumeTextureParameterValues", 0x258, "ArrayProperty"},
            {"FontParameterValues", 0x268, "ArrayProperty"},
            {"ToonProfileParameterValues", 0x278, "ArrayProperty"},
            {"UserSceneTextureOverrides", 0x288, "ArrayProperty"},
            {"BasePropertyOverrides", 0x298, "StructProperty"},
            {"StaticParametersRuntime", 0x2D0, "StructProperty"},
        }};
    };

    struct VersePerPlayerDataReplication
    {
        static constexpr std::string_view Name = "VersePerPlayerDataReplication";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Info";
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

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "ServerPropertyInterfaceValueChangedBool",
            "ServerPropertyInterfaceValueChangedDouble",
            "ServerPropertyInterfaceValueChangedInt",
        }};
    };

    struct VersePerPlayerDataReplicationSubsystem
    {
        static constexpr std::string_view Name = "VersePerPlayerDataReplicationSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnPlayerDestroyed",
        }};
    };

}
