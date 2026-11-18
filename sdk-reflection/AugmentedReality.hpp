#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AugmentedReality
{
    struct ARActor
    {
        static constexpr std::string_view Name = "ARActor";
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
            "AddARComponent",
        }};
    };

    struct ARBaseAsyncTaskBlueprintProxy
    {
        static constexpr std::string_view Name = "ARBaseAsyncTaskBlueprintProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ARBasicLightEstimate
    {
        static constexpr std::string_view Name = "ARBasicLightEstimate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARLightEstimate";
        struct Offsets
        {
            static constexpr std::uintptr_t AmbientIntensityLumens = 0x28;
            static constexpr std::uintptr_t AmbientColorTemperatureKelvin = 0x2C;
            static constexpr std::uintptr_t AmbientColor = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AmbientIntensityLumens", 0x28, "FloatProperty"},
            {"AmbientColorTemperatureKelvin", 0x2C, "FloatProperty"},
            {"AmbientColor", 0x30, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "GetAmbientColor",
            "GetAmbientColorTemperatureKelvin",
            "GetAmbientIntensityLumens",
        }};
    };

    struct ARBlueprintLibrary
    {
        static constexpr std::string_view Name = "ARBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 52> FunctionNames{{
            "AddManualEnvironmentCaptureProbe",
            "AddRuntimeCandidateImage",
            "AddTrackedPointWithName",
            "CalculateAlignmentTransform",
            "CalculateClosestIntersection",
            "DebugDrawPin",
            "DebugDrawTrackedGeometry",
            "FindTrackedPointsByName",
            "GetARSessionStatus",
            "GetARTexture",
            "GetARWorldScale",
            "GetAlignmentTransform",
            "GetAllGeometries",
            "GetAllGeometriesByClass",
            "GetAllPins",
            "GetAllTracked2DPoses",
            "GetCameraIntrinsics",
            "GetCurrentLightEstimate",
            "GetNumberOfTrackedFacesSupported",
            "GetObjectClassificationAtLocation",
            "GetPointCloud",
            "GetSessionConfig",
            "GetSupportedVideoFormats",
            "GetTrackingQuality",
            "GetTrackingQualityReason",
            "GetWorldMappingStatus",
            "IsARPinLocalStoreReady",
            "IsARPinLocalStoreSupported",
            "IsARSupported",
            "IsSceneReconstructionSupported",
            "IsSessionTrackingFeatureSupported",
            "IsSessionTypeSupported",
            "LineTraceTrackedObjects",
            "LineTraceTrackedObjects3D",
            "LoadARPinsFromLocalStore",
            "PauseARSession",
            "PinComponent",
            "PinComponentToARPin",
            "PinComponentToTraceResult",
            "RemoveARPinFromLocalStore",
            "RemoveAllARPinsFromLocalStore",
            "RemovePin",
            "ResizeXRCamera",
            "SaveARPinToLocalStore",
            "SetARWorldOriginLocationAndRotation",
            "SetARWorldScale",
            "SetAlignmentTransform",
            "SetEnabledXRCamera",
            "StartARSession",
            "StopARSession",
            "ToggleARCapture",
            "UnpinComponent",
        }};
    };

    struct ARCameraIntrinsics
    {
        static constexpr std::string_view Name = "ARCameraIntrinsics";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ImageResolution = 0x0;
            static constexpr std::uintptr_t FocalLength = 0x8;
            static constexpr std::uintptr_t PrincipalPoint = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ImageResolution", 0x0, "StructProperty"},
            {"FocalLength", 0x8, "StructProperty"},
            {"PrincipalPoint", 0x18, "StructProperty"},
        }};
    };

    struct ARCandidateImage
    {
        static constexpr std::string_view Name = "ARCandidateImage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t CandidateTexture = 0x28;
            static constexpr std::uintptr_t FriendlyName = 0x30;
            static constexpr std::uintptr_t Width = 0x40;
            static constexpr std::uintptr_t Height = 0x44;
            static constexpr std::uintptr_t orientation = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CandidateTexture", 0x28, "ObjectProperty"},
            {"FriendlyName", 0x30, "StrProperty"},
            {"Width", 0x40, "FloatProperty"},
            {"Height", 0x44, "FloatProperty"},
            {"orientation", 0x48, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetCandidateTexture",
            "GetFriendlyName",
            "GetOrientation",
            "GetPhysicalHeight",
            "GetPhysicalWidth",
        }};
    };

    struct ARCandidateObject
    {
        static constexpr std::string_view Name = "ARCandidateObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t CandidateObjectData = 0x28;
            static constexpr std::uintptr_t FriendlyName = 0x38;
            static constexpr std::uintptr_t BoundingBox = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CandidateObjectData", 0x28, "ArrayProperty"},
            {"FriendlyName", 0x38, "StrProperty"},
            {"BoundingBox", 0x48, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "GetBoundingBox",
            "GetCandidateObjectData",
            "GetFriendlyName",
            "SetBoundingBox",
            "SetCandidateObjectData",
            "SetFriendlyName",
        }};
    };

    struct ARComponent
    {
        static constexpr std::string_view Name = "ARComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NativeID = 0x240;
            static constexpr std::uintptr_t bUseDefaultReplication = 0x280;
            static constexpr std::uintptr_t DefaultMeshMaterial = 0x288;
            static constexpr std::uintptr_t DefaultWireframeMeshMaterial = 0x290;
            static constexpr std::uintptr_t MRMeshComponent = 0x298;
            static constexpr std::uintptr_t MyTrackedGeometry = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"NativeID", 0x240, "StructProperty"},
            {"bUseDefaultReplication", 0x280, "BoolProperty"},
            {"DefaultMeshMaterial", 0x288, "ObjectProperty"},
            {"DefaultWireframeMeshMaterial", 0x290, "ObjectProperty"},
            {"MRMeshComponent", 0x298, "ObjectProperty"},
            {"MyTrackedGeometry", 0x2A0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetMRMesh",
            "OnRep_Payload",
            "ReceiveRemove",
            "SetNativeID",
            "UpdateVisualization",
        }};
    };

    struct ARDependencyHandler
    {
        static constexpr std::string_view Name = "ARDependencyHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "CheckARServiceAvailability",
            "GetARDependencyHandler",
            "InstallARService",
            "RequestARSessionPermission",
            "StartARSessionLatent",
        }};
    };

    struct AREnvironmentCaptureProbe
    {
        static constexpr std::string_view Name = "AREnvironmentCaptureProbe";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARTrackedGeometry";
        struct Offsets
        {
            static constexpr std::uintptr_t Extent = 0x160;
            static constexpr std::uintptr_t EnvironmentCaptureTexture = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Extent", 0x160, "StructProperty"},
            {"EnvironmentCaptureTexture", 0x178, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetEnvironmentCaptureTexture",
            "GetExtent",
        }};
    };

    struct AREnvironmentCaptureProbeTexture
    {
        static constexpr std::string_view Name = "AREnvironmentCaptureProbeTexture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TextureCube";
        struct Offsets
        {
            static constexpr std::uintptr_t TextureType = 0x128;
            static constexpr std::uintptr_t Timestamp = 0x12C;
            static constexpr std::uintptr_t ExternalTextureGuid = 0x130;
            static constexpr std::uintptr_t Size = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TextureType", 0x128, "EnumProperty"},
            {"Timestamp", 0x12C, "FloatProperty"},
            {"ExternalTextureGuid", 0x130, "StructProperty"},
            {"Size", 0x140, "StructProperty"},
        }};
    };

    struct AREnvironmentProbeComponent
    {
        static constexpr std::string_view Name = "AREnvironmentProbeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedPayload = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedPayload", 0x2C0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "ReceiveAdd",
            "ReceiveUpdate",
            "ServerUpdatePayload",
        }};
    };

    struct AREnvironmentProbeUpdatePayload
    {
        static constexpr std::string_view Name = "AREnvironmentProbeUpdatePayload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldTransform = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WorldTransform", 0x0, "StructProperty"},
        }};
    };

    struct ARFaceComponent
    {
        static constexpr std::string_view Name = "ARFaceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TransformSetting = 0x2C0;
            static constexpr std::uintptr_t bUpdateVertexNormal = 0x2C1;
            static constexpr std::uintptr_t bFaceOutOfScreen = 0x2C2;
            static constexpr std::uintptr_t ReplicatedPayload = 0x2C8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TransformSetting", 0x2C0, "EnumProperty"},
            {"bUpdateVertexNormal", 0x2C1, "BoolProperty"},
            {"bFaceOutOfScreen", 0x2C2, "BoolProperty"},
            {"ReplicatedPayload", 0x2C8, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "ReceiveAdd",
            "ReceiveUpdate",
            "ServerUpdatePayload",
            "SetFaceComponentDebugMode",
        }};
    };

    struct ARFaceGeometry
    {
        static constexpr std::string_view Name = "ARFaceGeometry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARTrackedGeometry";
        struct Offsets
        {
            static constexpr std::uintptr_t LookAtTarget = 0x160;
            static constexpr std::uintptr_t bIsTracked = 0x178;
            static constexpr std::uintptr_t BlendShapes = 0x180;
            static constexpr std::uintptr_t LeftEyeTransform = 0x1C0;
            static constexpr std::uintptr_t RightEyeTransform = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"LookAtTarget", 0x160, "StructProperty"},
            {"bIsTracked", 0x178, "BoolProperty"},
            {"BlendShapes", 0x180, "MapProperty"},
            {"LeftEyeTransform", 0x1C0, "StructProperty"},
            {"RightEyeTransform", 0x220, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetBlendShapeValue",
            "GetBlendShapes",
            "GetLocalSpaceEyeTransform",
            "GetWorldSpaceEyeTransform",
        }};
    };

    struct ARFaceUpdatePayload
    {
        static constexpr std::string_view Name = "ARFaceUpdatePayload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SessionPayload = 0x0;
            static constexpr std::uintptr_t LeftEyePosition = 0x18;
            static constexpr std::uintptr_t RightEyePosition = 0x30;
            static constexpr std::uintptr_t LookAtTarget = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SessionPayload", 0x0, "StructProperty"},
            {"LeftEyePosition", 0x18, "StructProperty"},
            {"RightEyePosition", 0x30, "StructProperty"},
            {"LookAtTarget", 0x48, "StructProperty"},
        }};
    };

    struct ARGeoAnchor
    {
        static constexpr std::string_view Name = "ARGeoAnchor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARTrackedGeometry";
        struct Offsets
        {
            static constexpr std::uintptr_t UniqueID = 0x28;
            static constexpr std::uintptr_t LocalToTrackingTransform = 0x40;
            static constexpr std::uintptr_t LocalToAlignedTrackingTransform = 0xA0;
            static constexpr std::uintptr_t TrackingState = 0x100;
            static constexpr std::uintptr_t UnderlyingMesh = 0x110;
            static constexpr std::uintptr_t ObjectClassification = 0x118;
            static constexpr std::uintptr_t SpatialMeshUsageFlags = 0x119;
            static constexpr std::uintptr_t LastUpdateFrameNumber = 0x130;
            static constexpr std::uintptr_t DebugName = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"UniqueID", 0x28, "StructProperty"},
            {"LocalToTrackingTransform", 0x40, "StructProperty"},
            {"LocalToAlignedTrackingTransform", 0xA0, "StructProperty"},
            {"TrackingState", 0x100, "EnumProperty"},
            {"UnderlyingMesh", 0x110, "ObjectProperty"},
            {"ObjectClassification", 0x118, "EnumProperty"},
            {"SpatialMeshUsageFlags", 0x119, "EnumProperty"},
            {"LastUpdateFrameNumber", 0x130, "IntProperty"},
            {"DebugName", 0x140, "NameProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetAltitudeMeters",
            "GetAltitudeSource",
            "GetLatitude",
            "GetLongitude",
        }};
    };

    struct ARGeoAnchorComponent
    {
        static constexpr std::string_view Name = "ARGeoAnchorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedPayload = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedPayload", 0x2C0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "ReceiveAdd",
            "ReceiveUpdate",
            "ServerUpdatePayload",
            "SetGeoAnchorComponentDebugMode",
        }};
    };

    struct ARGeoAnchorUpdatePayload
    {
        static constexpr std::string_view Name = "ARGeoAnchorUpdatePayload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SessionPayload = 0x0;
            static constexpr std::uintptr_t WorldTransform = 0x20;
            static constexpr std::uintptr_t Longitude = 0x80;
            static constexpr std::uintptr_t Latitude = 0x84;
            static constexpr std::uintptr_t AltitudeMeters = 0x88;
            static constexpr std::uintptr_t AltitudeSource = 0x8C;
            static constexpr std::uintptr_t AnchorName = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SessionPayload", 0x0, "StructProperty"},
            {"WorldTransform", 0x20, "StructProperty"},
            {"Longitude", 0x80, "FloatProperty"},
            {"Latitude", 0x84, "FloatProperty"},
            {"AltitudeMeters", 0x88, "FloatProperty"},
            {"AltitudeSource", 0x8C, "EnumProperty"},
            {"AnchorName", 0x90, "StrProperty"},
        }};
    };

    struct ARGeoTrackingSupport
    {
        static constexpr std::string_view Name = "ARGeoTrackingSupport";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "AddGeoAnchorAtLocation",
            "AddGeoAnchorAtLocationWithAltitude",
            "GetGeoTrackingAccuracy",
            "GetGeoTrackingState",
            "GetGeoTrackingStateReason",
            "GetGeoTrackingSupport",
        }};
    };

    struct ARGetCandidateObjectAsyncTaskBlueprintProxy
    {
        static constexpr std::string_view Name = "ARGetCandidateObjectAsyncTaskBlueprintProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARBaseAsyncTaskBlueprintProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x50;
            static constexpr std::uintptr_t OnFailed = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x50, "MulticastInlineDelegateProperty"},
            {"OnFailed", 0x60, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ARGetCandidateObject",
        }};
    };

    struct ARImageComponent
    {
        static constexpr std::string_view Name = "ARImageComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedPayload = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedPayload", 0x2C0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "ReceiveAdd",
            "ReceiveUpdate",
            "ServerUpdatePayload",
            "SetImageComponentDebugMode",
        }};
    };

    struct ARImageUpdatePayload
    {
        static constexpr std::string_view Name = "ARImageUpdatePayload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SessionPayload = 0x0;
            static constexpr std::uintptr_t WorldTransform = 0x20;
            static constexpr std::uintptr_t DetectedImage = 0x80;
            static constexpr std::uintptr_t EstimatedSize = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SessionPayload", 0x0, "StructProperty"},
            {"WorldTransform", 0x20, "StructProperty"},
            {"DetectedImage", 0x80, "ObjectProperty"},
            {"EstimatedSize", 0x88, "StructProperty"},
        }};
    };

    struct ARLifeCycleComponent
    {
        static constexpr std::string_view Name = "ARLifeCycleComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnARActorSpawnedDelegate = 0x240;
            static constexpr std::uintptr_t OnARActorToBeDestroyedDelegate = 0x250;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnARActorSpawnedDelegate", 0x240, "MulticastInlineDelegateProperty"},
            {"OnARActorToBeDestroyedDelegate", 0x250, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "ServerDestroyARActor",
            "ServerSpawnARActor",
        }};
    };

    struct ARLightEstimate
    {
        static constexpr std::string_view Name = "ARLightEstimate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ARMeshComponent
    {
        static constexpr std::string_view Name = "ARMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedPayload = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedPayload", 0x2C0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "ReceiveAdd",
            "ReceiveUpdate",
            "ServerUpdatePayload",
        }};
    };

    struct ARMeshGeometry
    {
        static constexpr std::string_view Name = "ARMeshGeometry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARTrackedGeometry";
        struct Offsets
        {
            static constexpr std::uintptr_t UniqueID = 0x28;
            static constexpr std::uintptr_t LocalToTrackingTransform = 0x40;
            static constexpr std::uintptr_t LocalToAlignedTrackingTransform = 0xA0;
            static constexpr std::uintptr_t TrackingState = 0x100;
            static constexpr std::uintptr_t UnderlyingMesh = 0x110;
            static constexpr std::uintptr_t ObjectClassification = 0x118;
            static constexpr std::uintptr_t SpatialMeshUsageFlags = 0x119;
            static constexpr std::uintptr_t LastUpdateFrameNumber = 0x130;
            static constexpr std::uintptr_t DebugName = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"UniqueID", 0x28, "StructProperty"},
            {"LocalToTrackingTransform", 0x40, "StructProperty"},
            {"LocalToAlignedTrackingTransform", 0xA0, "StructProperty"},
            {"TrackingState", 0x100, "EnumProperty"},
            {"UnderlyingMesh", 0x110, "ObjectProperty"},
            {"ObjectClassification", 0x118, "EnumProperty"},
            {"SpatialMeshUsageFlags", 0x119, "EnumProperty"},
            {"LastUpdateFrameNumber", 0x130, "IntProperty"},
            {"DebugName", 0x140, "NameProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetObjectClassificationAtLocation",
        }};
    };

    struct ARMeshUpdatePayload
    {
        static constexpr std::string_view Name = "ARMeshUpdatePayload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SessionPayload = 0x0;
            static constexpr std::uintptr_t WorldTransform = 0x20;
            static constexpr std::uintptr_t ObjectClassification = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SessionPayload", 0x0, "StructProperty"},
            {"WorldTransform", 0x20, "StructProperty"},
            {"ObjectClassification", 0x80, "EnumProperty"},
        }};
    };

    struct ARObjectComponent
    {
        static constexpr std::string_view Name = "ARObjectComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedPayload = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedPayload", 0x2C0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "ReceiveAdd",
            "ReceiveUpdate",
            "ServerUpdatePayload",
        }};
    };

    struct ARObjectUpdatePayload
    {
        static constexpr std::string_view Name = "ARObjectUpdatePayload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldTransform = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WorldTransform", 0x0, "StructProperty"},
        }};
    };

    struct AROriginActor
    {
        static constexpr std::string_view Name = "AROriginActor";
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

    struct ARPin
    {
        static constexpr std::string_view Name = "ARPin";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackedGeometry = 0x28;
            static constexpr std::uintptr_t PinnedComponent = 0x30;
            static constexpr std::uintptr_t LocalToTrackingTransform = 0x40;
            static constexpr std::uintptr_t LocalToAlignedTrackingTransform = 0xA0;
            static constexpr std::uintptr_t TrackingState = 0x100;
            static constexpr std::uintptr_t OnARTrackingStateChanged = 0x120;
            static constexpr std::uintptr_t OnARTransformUpdated = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TrackedGeometry", 0x28, "ObjectProperty"},
            {"PinnedComponent", 0x30, "ObjectProperty"},
            {"LocalToTrackingTransform", 0x40, "StructProperty"},
            {"LocalToAlignedTrackingTransform", 0xA0, "StructProperty"},
            {"TrackingState", 0x100, "EnumProperty"},
            {"OnARTrackingStateChanged", 0x120, "MulticastInlineDelegateProperty"},
            {"OnARTransformUpdated", 0x130, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "DebugDraw",
            "GetDebugName",
            "GetLocalToTrackingTransform",
            "GetLocalToWorldTransform",
            "GetPinnedComponent",
            "GetTrackedGeometry",
            "GetTrackingState",
        }};
    };

    struct ARPlaneComponent
    {
        static constexpr std::string_view Name = "ARPlaneComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedPayload = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedPayload", 0x2C0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "GetObjectClassificationDebugColors",
            "ReceiveAdd",
            "ReceiveUpdate",
            "ServerUpdatePayload",
            "SetObjectClassificationDebugColors",
            "SetPlaneComponentDebugMode",
        }};
    };

    struct ARPlaneGeometry
    {
        static constexpr std::string_view Name = "ARPlaneGeometry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARTrackedGeometry";
        struct Offsets
        {
            static constexpr std::uintptr_t orientation = 0x160;
            static constexpr std::uintptr_t Center = 0x168;
            static constexpr std::uintptr_t Extent = 0x180;
            static constexpr std::uintptr_t BoundaryPolygon = 0x198;
            static constexpr std::uintptr_t SubsumedBy = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"orientation", 0x160, "EnumProperty"},
            {"Center", 0x168, "StructProperty"},
            {"Extent", 0x180, "StructProperty"},
            {"BoundaryPolygon", 0x198, "ArrayProperty"},
            {"SubsumedBy", 0x1A8, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetBoundaryPolygonInLocalSpace",
            "GetCenter",
            "GetExtent",
            "GetOrientation",
            "GetSubsumedBy",
        }};
    };

    struct ARPlaneUpdatePayload
    {
        static constexpr std::string_view Name = "ARPlaneUpdatePayload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SessionPayload = 0x0;
            static constexpr std::uintptr_t WorldTransform = 0x20;
            static constexpr std::uintptr_t Center = 0x80;
            static constexpr std::uintptr_t Extents = 0x98;
            static constexpr std::uintptr_t BoundaryVertices = 0xB0;
            static constexpr std::uintptr_t ObjectClassification = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SessionPayload", 0x0, "StructProperty"},
            {"WorldTransform", 0x20, "StructProperty"},
            {"Center", 0x80, "StructProperty"},
            {"Extents", 0x98, "StructProperty"},
            {"BoundaryVertices", 0xB0, "ArrayProperty"},
            {"ObjectClassification", 0xC0, "EnumProperty"},
        }};
    };

    struct ARPointComponent
    {
        static constexpr std::string_view Name = "ARPointComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedPayload = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedPayload", 0x2C0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "ReceiveAdd",
            "ReceiveUpdate",
            "ServerUpdatePayload",
        }};
    };

    struct ARPointUpdatePayload
    {
        static constexpr std::string_view Name = "ARPointUpdatePayload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ARPose2D
    {
        static constexpr std::string_view Name = "ARPose2D";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SkeletonDefinition = 0x0;
            static constexpr std::uintptr_t JointLocations = 0x28;
            static constexpr std::uintptr_t IsJointTracked = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SkeletonDefinition", 0x0, "StructProperty"},
            {"JointLocations", 0x28, "ArrayProperty"},
            {"IsJointTracked", 0x38, "ArrayProperty"},
        }};
    };

    struct ARPose3D
    {
        static constexpr std::string_view Name = "ARPose3D";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SkeletonDefinition = 0x0;
            static constexpr std::uintptr_t JointTransforms = 0x28;
            static constexpr std::uintptr_t IsJointTracked = 0x38;
            static constexpr std::uintptr_t JointTransformSpace = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SkeletonDefinition", 0x0, "StructProperty"},
            {"JointTransforms", 0x28, "ArrayProperty"},
            {"IsJointTracked", 0x38, "ArrayProperty"},
            {"JointTransformSpace", 0x48, "EnumProperty"},
        }};
    };

    struct ARPoseComponent
    {
        static constexpr std::string_view Name = "ARPoseComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedPayload = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedPayload", 0x2C0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "ReceiveAdd",
            "ReceiveUpdate",
            "ServerUpdatePayload",
            "SetPoseComponentDebugMode",
        }};
    };

    struct ARPoseUpdatePayload
    {
        static constexpr std::string_view Name = "ARPoseUpdatePayload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldTransform = 0x0;
            static constexpr std::uintptr_t JointTransforms = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WorldTransform", 0x0, "StructProperty"},
            {"JointTransforms", 0x60, "ArrayProperty"},
        }};
    };

    struct ARQRCodeComponent
    {
        static constexpr std::string_view Name = "ARQRCodeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedPayload = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedPayload", 0x2C0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "ReceiveAdd",
            "ReceiveUpdate",
            "ServerUpdatePayload",
            "SetQRCodeComponentDebugMode",
        }};
    };

    struct ARQRCodeUpdatePayload
    {
        static constexpr std::string_view Name = "ARQRCodeUpdatePayload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SessionPayload = 0x0;
            static constexpr std::uintptr_t WorldTransform = 0x20;
            static constexpr std::uintptr_t Extents = 0x80;
            static constexpr std::uintptr_t QRCode = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SessionPayload", 0x0, "StructProperty"},
            {"WorldTransform", 0x20, "StructProperty"},
            {"Extents", 0x80, "StructProperty"},
            {"QRCode", 0x98, "StrProperty"},
        }};
    };

    struct ARSaveWorldAsyncTaskBlueprintProxy
    {
        static constexpr std::string_view Name = "ARSaveWorldAsyncTaskBlueprintProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARBaseAsyncTaskBlueprintProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x50;
            static constexpr std::uintptr_t OnFailed = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x50, "MulticastInlineDelegateProperty"},
            {"OnFailed", 0x60, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ARSaveWorld",
        }};
    };

    struct ARSessionConfig
    {
        static constexpr std::string_view Name = "ARSessionConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t bGenerateMeshDataFromTrackedGeometry = 0x28;
            static constexpr std::uintptr_t bGenerateCollisionForMeshData = 0x29;
            static constexpr std::uintptr_t bGenerateNavMeshForMeshData = 0x2A;
            static constexpr std::uintptr_t bUseMeshDataForOcclusion = 0x2B;
            static constexpr std::uintptr_t bRenderMeshDataInWireframe = 0x2C;
            static constexpr std::uintptr_t bTrackSceneObjects = 0x2D;
            static constexpr std::uintptr_t bUsePersonSegmentationForOcclusion = 0x2E;
            static constexpr std::uintptr_t bUseSceneDepthForOcclusion = 0x2F;
            static constexpr std::uintptr_t bUseAutomaticImageScaleEstimation = 0x30;
            static constexpr std::uintptr_t bUseStandardOnboardingUX = 0x31;
            static constexpr std::uintptr_t WorldAlignment = 0x32;
            static constexpr std::uintptr_t SessionType = 0x33;
            static constexpr std::uintptr_t PlaneDetectionMode = 0x34;
            static constexpr std::uintptr_t bHorizontalPlaneDetection = 0x35;
            static constexpr std::uintptr_t bVerticalPlaneDetection = 0x36;
            static constexpr std::uintptr_t bEnableAutoFocus = 0x37;
            static constexpr std::uintptr_t LightEstimationMode = 0x38;
            static constexpr std::uintptr_t FrameSyncMode = 0x39;
            static constexpr std::uintptr_t bEnableAutomaticCameraOverlay = 0x3A;
            static constexpr std::uintptr_t bEnableAutomaticCameraTracking = 0x3B;
            static constexpr std::uintptr_t bResetCameraTracking = 0x3C;
            static constexpr std::uintptr_t bResetTrackedObjects = 0x3D;
            static constexpr std::uintptr_t CandidateImages = 0x40;
            static constexpr std::uintptr_t MaxNumSimultaneousImagesTracked = 0x50;
            static constexpr std::uintptr_t EnvironmentCaptureProbeType = 0x54;
            static constexpr std::uintptr_t WorldMapData = 0x58;
            static constexpr std::uintptr_t CandidateObjects = 0x68;
            static constexpr std::uintptr_t DesiredVideoFormat = 0x78;
            static constexpr std::uintptr_t bUseOptimalVideoFormat = 0x84;
            static constexpr std::uintptr_t FaceTrackingDirection = 0x85;
            static constexpr std::uintptr_t FaceTrackingUpdate = 0x86;
            static constexpr std::uintptr_t MaxNumberOfTrackedFaces = 0x88;
            static constexpr std::uintptr_t SerializedARCandidateImageDatabase = 0x90;
            static constexpr std::uintptr_t EnabledSessionTrackingFeature = 0xA0;
            static constexpr std::uintptr_t SceneReconstructionMethod = 0xA1;
            static constexpr std::uintptr_t PlaneComponentClass = 0xA8;
            static constexpr std::uintptr_t PointComponentClass = 0xB0;
            static constexpr std::uintptr_t FaceComponentClass = 0xB8;
            static constexpr std::uintptr_t ImageComponentClass = 0xC0;
            static constexpr std::uintptr_t QRCodeComponentClass = 0xC8;
            static constexpr std::uintptr_t PoseComponentClass = 0xD0;
            static constexpr std::uintptr_t EnvironmentProbeComponentClass = 0xD8;
            static constexpr std::uintptr_t ObjectComponentClass = 0xE0;
            static constexpr std::uintptr_t MeshComponentClass = 0xE8;
            static constexpr std::uintptr_t GeoAnchorComponentClass = 0xF0;
            static constexpr std::uintptr_t DefaultMeshMaterial = 0xF8;
            static constexpr std::uintptr_t DefaultWireframeMeshMaterial = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 47> Properties{{
            {"bGenerateMeshDataFromTrackedGeometry", 0x28, "BoolProperty"},
            {"bGenerateCollisionForMeshData", 0x29, "BoolProperty"},
            {"bGenerateNavMeshForMeshData", 0x2A, "BoolProperty"},
            {"bUseMeshDataForOcclusion", 0x2B, "BoolProperty"},
            {"bRenderMeshDataInWireframe", 0x2C, "BoolProperty"},
            {"bTrackSceneObjects", 0x2D, "BoolProperty"},
            {"bUsePersonSegmentationForOcclusion", 0x2E, "BoolProperty"},
            {"bUseSceneDepthForOcclusion", 0x2F, "BoolProperty"},
            {"bUseAutomaticImageScaleEstimation", 0x30, "BoolProperty"},
            {"bUseStandardOnboardingUX", 0x31, "BoolProperty"},
            {"WorldAlignment", 0x32, "EnumProperty"},
            {"SessionType", 0x33, "EnumProperty"},
            {"PlaneDetectionMode", 0x34, "EnumProperty"},
            {"bHorizontalPlaneDetection", 0x35, "BoolProperty"},
            {"bVerticalPlaneDetection", 0x36, "BoolProperty"},
            {"bEnableAutoFocus", 0x37, "BoolProperty"},
            {"LightEstimationMode", 0x38, "EnumProperty"},
            {"FrameSyncMode", 0x39, "EnumProperty"},
            {"bEnableAutomaticCameraOverlay", 0x3A, "BoolProperty"},
            {"bEnableAutomaticCameraTracking", 0x3B, "BoolProperty"},
            {"bResetCameraTracking", 0x3C, "BoolProperty"},
            {"bResetTrackedObjects", 0x3D, "BoolProperty"},
            {"CandidateImages", 0x40, "ArrayProperty"},
            {"MaxNumSimultaneousImagesTracked", 0x50, "IntProperty"},
            {"EnvironmentCaptureProbeType", 0x54, "EnumProperty"},
            {"WorldMapData", 0x58, "ArrayProperty"},
            {"CandidateObjects", 0x68, "ArrayProperty"},
            {"DesiredVideoFormat", 0x78, "StructProperty"},
            {"bUseOptimalVideoFormat", 0x84, "BoolProperty"},
            {"FaceTrackingDirection", 0x85, "EnumProperty"},
            {"FaceTrackingUpdate", 0x86, "EnumProperty"},
            {"MaxNumberOfTrackedFaces", 0x88, "IntProperty"},
            {"SerializedARCandidateImageDatabase", 0x90, "ArrayProperty"},
            {"EnabledSessionTrackingFeature", 0xA0, "EnumProperty"},
            {"SceneReconstructionMethod", 0xA1, "EnumProperty"},
            {"PlaneComponentClass", 0xA8, "ClassProperty"},
            {"PointComponentClass", 0xB0, "ClassProperty"},
            {"FaceComponentClass", 0xB8, "ClassProperty"},
            {"ImageComponentClass", 0xC0, "ClassProperty"},
            {"QRCodeComponentClass", 0xC8, "ClassProperty"},
            {"PoseComponentClass", 0xD0, "ClassProperty"},
            {"EnvironmentProbeComponentClass", 0xD8, "ClassProperty"},
            {"ObjectComponentClass", 0xE0, "ClassProperty"},
            {"MeshComponentClass", 0xE8, "ClassProperty"},
            {"GeoAnchorComponentClass", 0xF0, "ClassProperty"},
            {"DefaultMeshMaterial", 0xF8, "ObjectProperty"},
            {"DefaultWireframeMeshMaterial", 0x100, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 35> FunctionNames{{
            "AddCandidateImage",
            "AddCandidateObject",
            "ClearCandidateImages",
            "GetCandidateImageList",
            "GetCandidateObjectList",
            "GetDesiredVideoFormat",
            "GetEnabledSessionTrackingFeature",
            "GetEnvironmentCaptureProbeType",
            "GetFaceTrackingDirection",
            "GetFaceTrackingUpdate",
            "GetFrameSyncMode",
            "GetLightEstimationMode",
            "GetMaxNumSimultaneousImagesTracked",
            "GetPlaneDetectionMode",
            "GetSceneReconstructionMethod",
            "GetSessionType",
            "GetWorldAlignment",
            "GetWorldMapData",
            "RemoveCandidateImage",
            "RemoveCandidateImageAtIndex",
            "SetCandidateObjectList",
            "SetDesiredVideoFormat",
            "SetEnableAutoFocus",
            "SetFaceTrackingDirection",
            "SetFaceTrackingUpdate",
            "SetResetCameraTracking",
            "SetResetTrackedObjects",
            "SetSceneReconstructionMethod",
            "SetSessionTrackingFeatureToEnable",
            "SetWorldMapData",
            "ShouldEnableAutoFocus",
            "ShouldEnableCameraTracking",
            "ShouldRenderCameraOverlay",
            "ShouldResetCameraTracking",
            "ShouldResetTrackedObjects",
        }};
    };

    struct ARSessionPayload
    {
        static constexpr std::string_view Name = "ARSessionPayload";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ConfigFlags = 0x0;
            static constexpr std::uintptr_t DefaultMeshMaterial = 0x8;
            static constexpr std::uintptr_t DefaultWireframeMeshMaterial = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ConfigFlags", 0x0, "IntProperty"},
            {"DefaultMeshMaterial", 0x8, "ObjectProperty"},
            {"DefaultWireframeMeshMaterial", 0x10, "ObjectProperty"},
        }};
    };

    struct ARSessionStatus
    {
        static constexpr std::string_view Name = "ARSessionStatus";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AdditionalInfo = 0x0;
            static constexpr std::uintptr_t Status = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AdditionalInfo", 0x0, "StrProperty"},
            {"Status", 0x10, "EnumProperty"},
        }};
    };

    struct ARSharedWorldGameMode
    {
        static constexpr std::string_view Name = "ARSharedWorldGameMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameMode";
        struct Offsets
        {
            static constexpr std::uintptr_t BufferSizePerChunk = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BufferSizePerChunk", 0x358, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetARSharedWorldGameState",
            "SetARSharedWorldData",
            "SetARWorldSharingIsReady",
            "SetPreviewImageData",
        }};
    };

    struct ARSharedWorldGameState
    {
        static constexpr std::string_view Name = "ARSharedWorldGameState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameState";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewImageData = 0x2F8;
            static constexpr std::uintptr_t ARWorldData = 0x308;
            static constexpr std::uintptr_t PreviewImageBytesTotal = 0x318;
            static constexpr std::uintptr_t ARWorldBytesTotal = 0x31C;
            static constexpr std::uintptr_t PreviewImageBytesDelivered = 0x320;
            static constexpr std::uintptr_t ARWorldBytesDelivered = 0x324;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PreviewImageData", 0x2F8, "ArrayProperty"},
            {"ARWorldData", 0x308, "ArrayProperty"},
            {"PreviewImageBytesTotal", 0x318, "IntProperty"},
            {"ARWorldBytesTotal", 0x31C, "IntProperty"},
            {"PreviewImageBytesDelivered", 0x320, "IntProperty"},
            {"ARWorldBytesDelivered", 0x324, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "K2_OnARWorldMapIsReady",
        }};
    };

    struct ARSharedWorldPlayerController
    {
        static constexpr std::string_view Name = "ARSharedWorldPlayerController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerController";
        struct Offsets
        {
            static constexpr std::uintptr_t player = 0x318;
            static constexpr std::uintptr_t AcknowledgedPawn = 0x320;
            static constexpr std::uintptr_t MyHUD = 0x328;
            static constexpr std::uintptr_t PlayerCameraManager = 0x330;
            static constexpr std::uintptr_t PlayerCameraManagerClass = 0x338;
            static constexpr std::uintptr_t bAutoManageActiveCameraTarget = 0x340;
            static constexpr std::uintptr_t TargetViewRotation = 0x348;
            static constexpr std::uintptr_t SmoothTargetViewRotationSpeed = 0x378;
            static constexpr std::uintptr_t HiddenActors = 0x380;
            static constexpr std::uintptr_t HiddenPrimitiveComponents = 0x390;
            static constexpr std::uintptr_t LastSpectatorStateSynchTime = 0x3A4;
            static constexpr std::uintptr_t LastSpectatorSyncLocation = 0x3A8;
            static constexpr std::uintptr_t LastSpectatorSyncRotation = 0x3C0;
            static constexpr std::uintptr_t ClientCap = 0x3D8;
            static constexpr std::uintptr_t CheatManager = 0x3E0;
            static constexpr std::uintptr_t CheatClass = 0x3E8;
            static constexpr std::uintptr_t PlayerInput = 0x3F0;
            static constexpr std::uintptr_t ActiveForceFeedbackEffects = 0x3F8;
            static constexpr std::uintptr_t bPlayerIsWaiting = 0x488;
            static constexpr std::uintptr_t NetPlayerIndex = 0x48C;
            static constexpr std::uintptr_t PendingSwapConnection = 0x4A8;
            static constexpr std::uintptr_t NetConnection = 0x4B0;
            static constexpr std::uintptr_t InputYawScale = 0x4D0;
            static constexpr std::uintptr_t InputPitchScale = 0x4D4;
            static constexpr std::uintptr_t InputRollScale = 0x4D8;
            static constexpr std::uintptr_t bEnableClickEvents = 0x4DC;
            static constexpr std::uintptr_t bEnableMotionControls = 0x4DC;
            static constexpr std::uintptr_t bEnableMouseOverEvents = 0x4DC;
            static constexpr std::uintptr_t bEnableStreamingSource = 0x4DC;
            static constexpr std::uintptr_t bEnableTouchEvents = 0x4DC;
            static constexpr std::uintptr_t bEnableTouchOverEvents = 0x4DC;
            static constexpr std::uintptr_t bForceFeedbackEnabled = 0x4DC;
            static constexpr std::uintptr_t bShowMouseCursor = 0x4DC;
            static constexpr std::uintptr_t bStreamingSourceShouldActivate = 0x4DD;
            static constexpr std::uintptr_t bStreamingSourceShouldBlockOnSlowStreaming = 0x4DD;
            static constexpr std::uintptr_t StreamingSourcePriority = 0x4E0;
            static constexpr std::uintptr_t StreamingSourceDebugColor = 0x4E4;
            static constexpr std::uintptr_t StreamingSourceShapes = 0x4E8;
            static constexpr std::uintptr_t ForceFeedbackScale = 0x4F8;
            static constexpr std::uintptr_t ClickEventKeys = 0x500;
            static constexpr std::uintptr_t DefaultMouseCursor = 0x510;
            static constexpr std::uintptr_t CurrentMouseCursor = 0x511;
            static constexpr std::uintptr_t DefaultClickTraceChannel = 0x512;
            static constexpr std::uintptr_t CurrentClickTraceChannel = 0x513;
            static constexpr std::uintptr_t HitResultTraceDistance = 0x514;
            static constexpr std::uintptr_t SeamlessTravelCount = 0x518;
            static constexpr std::uintptr_t LastCompletedSeamlessTravelCount = 0x51A;
            static constexpr std::uintptr_t InactiveStateInputComponent = 0x5A0;
            static constexpr std::uintptr_t bShouldPerformFullTickWhenPaused = 0x5A8;
            static constexpr std::uintptr_t CurrentTouchInterface = 0x5C0;
            static constexpr std::uintptr_t OverridePlayerInputClass = 0x5C8;
            static constexpr std::uintptr_t SpectatorPawn = 0x660;
            static constexpr std::uintptr_t bIsLocalPlayerController = 0x66C;
            static constexpr std::uintptr_t SpawnLocation = 0x670;
            static constexpr std::uintptr_t CachedConnectionPlayerId = 0x6B8;
            static constexpr std::uintptr_t ClientHandshakeId = 0x6E8;
        };

        inline static constexpr std::array<PropertyInfo, 56> Properties{{
            {"player", 0x318, "ObjectProperty"},
            {"AcknowledgedPawn", 0x320, "ObjectProperty"},
            {"MyHUD", 0x328, "ObjectProperty"},
            {"PlayerCameraManager", 0x330, "ObjectProperty"},
            {"PlayerCameraManagerClass", 0x338, "ClassProperty"},
            {"bAutoManageActiveCameraTarget", 0x340, "BoolProperty"},
            {"TargetViewRotation", 0x348, "StructProperty"},
            {"SmoothTargetViewRotationSpeed", 0x378, "FloatProperty"},
            {"HiddenActors", 0x380, "ArrayProperty"},
            {"HiddenPrimitiveComponents", 0x390, "ArrayProperty"},
            {"LastSpectatorStateSynchTime", 0x3A4, "FloatProperty"},
            {"LastSpectatorSyncLocation", 0x3A8, "StructProperty"},
            {"LastSpectatorSyncRotation", 0x3C0, "StructProperty"},
            {"ClientCap", 0x3D8, "IntProperty"},
            {"CheatManager", 0x3E0, "ObjectProperty"},
            {"CheatClass", 0x3E8, "ClassProperty"},
            {"PlayerInput", 0x3F0, "ObjectProperty"},
            {"ActiveForceFeedbackEffects", 0x3F8, "ArrayProperty"},
            {"bPlayerIsWaiting", 0x488, "BoolProperty"},
            {"NetPlayerIndex", 0x48C, "ByteProperty"},
            {"PendingSwapConnection", 0x4A8, "ObjectProperty"},
            {"NetConnection", 0x4B0, "ObjectProperty"},
            {"InputYawScale", 0x4D0, "FloatProperty"},
            {"InputPitchScale", 0x4D4, "FloatProperty"},
            {"InputRollScale", 0x4D8, "FloatProperty"},
            {"bEnableClickEvents", 0x4DC, "BoolProperty"},
            {"bEnableMotionControls", 0x4DC, "BoolProperty"},
            {"bEnableMouseOverEvents", 0x4DC, "BoolProperty"},
            {"bEnableStreamingSource", 0x4DC, "BoolProperty"},
            {"bEnableTouchEvents", 0x4DC, "BoolProperty"},
            {"bEnableTouchOverEvents", 0x4DC, "BoolProperty"},
            {"bForceFeedbackEnabled", 0x4DC, "BoolProperty"},
            {"bShowMouseCursor", 0x4DC, "BoolProperty"},
            {"bStreamingSourceShouldActivate", 0x4DD, "BoolProperty"},
            {"bStreamingSourceShouldBlockOnSlowStreaming", 0x4DD, "BoolProperty"},
            {"StreamingSourcePriority", 0x4E0, "EnumProperty"},
            {"StreamingSourceDebugColor", 0x4E4, "StructProperty"},
            {"StreamingSourceShapes", 0x4E8, "ArrayProperty"},
            {"ForceFeedbackScale", 0x4F8, "FloatProperty"},
            {"ClickEventKeys", 0x500, "ArrayProperty"},
            {"DefaultMouseCursor", 0x510, "ByteProperty"},
            {"CurrentMouseCursor", 0x511, "ByteProperty"},
            {"DefaultClickTraceChannel", 0x512, "ByteProperty"},
            {"CurrentClickTraceChannel", 0x513, "ByteProperty"},
            {"HitResultTraceDistance", 0x514, "FloatProperty"},
            {"SeamlessTravelCount", 0x518, "UInt16Property"},
            {"LastCompletedSeamlessTravelCount", 0x51A, "UInt16Property"},
            {"InactiveStateInputComponent", 0x5A0, "ObjectProperty"},
            {"bShouldPerformFullTickWhenPaused", 0x5A8, "BoolProperty"},
            {"CurrentTouchInterface", 0x5C0, "ObjectProperty"},
            {"OverridePlayerInputClass", 0x5C8, "ClassProperty"},
            {"SpectatorPawn", 0x660, "ObjectProperty"},
            {"bIsLocalPlayerController", 0x66C, "BoolProperty"},
            {"SpawnLocation", 0x670, "StructProperty"},
            {"CachedConnectionPlayerId", 0x6B8, "StructProperty"},
            {"ClientHandshakeId", 0x6E8, "UInt32Property"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "ClientInitSharedWorld",
            "ClientUpdateARWorldData",
            "ClientUpdatePreviewImageData",
            "ServerMarkReadyForReceiving",
        }};
    };

    struct ARSharedWorldReplicationState
    {
        static constexpr std::string_view Name = "ARSharedWorldReplicationState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewImageOffset = 0x0;
            static constexpr std::uintptr_t ARWorldOffset = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PreviewImageOffset", 0x0, "IntProperty"},
            {"ARWorldOffset", 0x4, "IntProperty"},
        }};
    };

    struct ARSkeletonDefinition
    {
        static constexpr std::string_view Name = "ARSkeletonDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NumJoints = 0x0;
            static constexpr std::uintptr_t JointNames = 0x8;
            static constexpr std::uintptr_t ParentIndices = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NumJoints", 0x0, "IntProperty"},
            {"JointNames", 0x8, "ArrayProperty"},
            {"ParentIndices", 0x18, "ArrayProperty"},
        }};
    };

    struct ARSkyLight
    {
        static constexpr std::string_view Name = "ARSkyLight";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SkyLight";
        struct Offsets
        {
            static constexpr std::uintptr_t CaptureProbe = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CaptureProbe", 0x288, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetEnvironmentCaptureProbe",
        }};
    };

    struct ARTexture
    {
        static constexpr std::string_view Name = "ARTexture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Texture";
        struct Offsets
        {
            static constexpr std::uintptr_t TextureType = 0x120;
            static constexpr std::uintptr_t Timestamp = 0x124;
            static constexpr std::uintptr_t ExternalTextureGuid = 0x128;
            static constexpr std::uintptr_t Size = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TextureType", 0x120, "EnumProperty"},
            {"Timestamp", 0x124, "FloatProperty"},
            {"ExternalTextureGuid", 0x128, "StructProperty"},
            {"Size", 0x138, "StructProperty"},
        }};
    };

    struct ARTextureCameraDepth
    {
        static constexpr std::string_view Name = "ARTextureCameraDepth";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARTexture";
        struct Offsets
        {
            static constexpr std::uintptr_t DepthQuality = 0x140;
            static constexpr std::uintptr_t DepthAccuracy = 0x141;
            static constexpr std::uintptr_t bIsTemporallySmoothed = 0x142;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DepthQuality", 0x140, "EnumProperty"},
            {"DepthAccuracy", 0x141, "EnumProperty"},
            {"bIsTemporallySmoothed", 0x142, "BoolProperty"},
        }};
    };

    struct ARTextureCameraImage
    {
        static constexpr std::string_view Name = "ARTextureCameraImage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARTexture";
        struct Offsets
        {
            static constexpr std::uintptr_t TextureType = 0x120;
            static constexpr std::uintptr_t Timestamp = 0x124;
            static constexpr std::uintptr_t ExternalTextureGuid = 0x128;
            static constexpr std::uintptr_t Size = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TextureType", 0x120, "EnumProperty"},
            {"Timestamp", 0x124, "FloatProperty"},
            {"ExternalTextureGuid", 0x128, "StructProperty"},
            {"Size", 0x138, "StructProperty"},
        }};
    };

    struct ARTraceResult
    {
        static constexpr std::string_view Name = "ARTraceResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DistanceFromCamera = 0x0;
            static constexpr std::uintptr_t TraceChannel = 0x4;
            static constexpr std::uintptr_t LocalTransform = 0x10;
            static constexpr std::uintptr_t TrackedGeometry = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DistanceFromCamera", 0x0, "FloatProperty"},
            {"TraceChannel", 0x4, "EnumProperty"},
            {"LocalTransform", 0x10, "StructProperty"},
            {"TrackedGeometry", 0x70, "ObjectProperty"},
        }};
    };

    struct ARTraceResultDummy
    {
        static constexpr std::string_view Name = "ARTraceResultDummy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ARTraceResultLibrary
    {
        static constexpr std::string_view Name = "ARTraceResultLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "GetDistanceFromCamera",
            "GetLocalToTrackingTransform",
            "GetLocalToWorldTransform",
            "GetLocalTransform",
            "GetTraceChannel",
            "GetTrackedGeometry",
        }};
    };

    struct ARTrackableNotifyComponent
    {
        static constexpr std::string_view Name = "ARTrackableNotifyComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnAddTrackedGeometry = 0xC0;
            static constexpr std::uintptr_t OnUpdateTrackedGeometry = 0xD0;
            static constexpr std::uintptr_t OnRemoveTrackedGeometry = 0xE0;
            static constexpr std::uintptr_t OnAddTrackedPlane = 0xF0;
            static constexpr std::uintptr_t OnUpdateTrackedPlane = 0x100;
            static constexpr std::uintptr_t OnRemoveTrackedPlane = 0x110;
            static constexpr std::uintptr_t OnAddTrackedPoint = 0x120;
            static constexpr std::uintptr_t OnUpdateTrackedPoint = 0x130;
            static constexpr std::uintptr_t OnRemoveTrackedPoint = 0x140;
            static constexpr std::uintptr_t OnAddTrackedImage = 0x150;
            static constexpr std::uintptr_t OnUpdateTrackedImage = 0x160;
            static constexpr std::uintptr_t OnRemoveTrackedImage = 0x170;
            static constexpr std::uintptr_t OnAddTrackedFace = 0x180;
            static constexpr std::uintptr_t OnUpdateTrackedFace = 0x190;
            static constexpr std::uintptr_t OnRemoveTrackedFace = 0x1A0;
            static constexpr std::uintptr_t OnAddTrackedEnvProbe = 0x1B0;
            static constexpr std::uintptr_t OnUpdateTrackedEnvProbe = 0x1C0;
            static constexpr std::uintptr_t OnRemoveTrackedEnvProbe = 0x1D0;
            static constexpr std::uintptr_t OnAddTrackedObject = 0x1E0;
            static constexpr std::uintptr_t OnUpdateTrackedObject = 0x1F0;
            static constexpr std::uintptr_t OnRemoveTrackedObject = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"OnAddTrackedGeometry", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnUpdateTrackedGeometry", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnRemoveTrackedGeometry", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnAddTrackedPlane", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnUpdateTrackedPlane", 0x100, "MulticastInlineDelegateProperty"},
            {"OnRemoveTrackedPlane", 0x110, "MulticastInlineDelegateProperty"},
            {"OnAddTrackedPoint", 0x120, "MulticastInlineDelegateProperty"},
            {"OnUpdateTrackedPoint", 0x130, "MulticastInlineDelegateProperty"},
            {"OnRemoveTrackedPoint", 0x140, "MulticastInlineDelegateProperty"},
            {"OnAddTrackedImage", 0x150, "MulticastInlineDelegateProperty"},
            {"OnUpdateTrackedImage", 0x160, "MulticastInlineDelegateProperty"},
            {"OnRemoveTrackedImage", 0x170, "MulticastInlineDelegateProperty"},
            {"OnAddTrackedFace", 0x180, "MulticastInlineDelegateProperty"},
            {"OnUpdateTrackedFace", 0x190, "MulticastInlineDelegateProperty"},
            {"OnRemoveTrackedFace", 0x1A0, "MulticastInlineDelegateProperty"},
            {"OnAddTrackedEnvProbe", 0x1B0, "MulticastInlineDelegateProperty"},
            {"OnUpdateTrackedEnvProbe", 0x1C0, "MulticastInlineDelegateProperty"},
            {"OnRemoveTrackedEnvProbe", 0x1D0, "MulticastInlineDelegateProperty"},
            {"OnAddTrackedObject", 0x1E0, "MulticastInlineDelegateProperty"},
            {"OnUpdateTrackedObject", 0x1F0, "MulticastInlineDelegateProperty"},
            {"OnRemoveTrackedObject", 0x200, "MulticastInlineDelegateProperty"},
        }};
    };

    struct ARTrackedGeometry
    {
        static constexpr std::string_view Name = "ARTrackedGeometry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t UniqueID = 0x28;
            static constexpr std::uintptr_t LocalToTrackingTransform = 0x40;
            static constexpr std::uintptr_t LocalToAlignedTrackingTransform = 0xA0;
            static constexpr std::uintptr_t TrackingState = 0x100;
            static constexpr std::uintptr_t UnderlyingMesh = 0x110;
            static constexpr std::uintptr_t ObjectClassification = 0x118;
            static constexpr std::uintptr_t SpatialMeshUsageFlags = 0x119;
            static constexpr std::uintptr_t LastUpdateFrameNumber = 0x130;
            static constexpr std::uintptr_t DebugName = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"UniqueID", 0x28, "StructProperty"},
            {"LocalToTrackingTransform", 0x40, "StructProperty"},
            {"LocalToAlignedTrackingTransform", 0xA0, "StructProperty"},
            {"TrackingState", 0x100, "EnumProperty"},
            {"UnderlyingMesh", 0x110, "ObjectProperty"},
            {"ObjectClassification", 0x118, "EnumProperty"},
            {"SpatialMeshUsageFlags", 0x119, "EnumProperty"},
            {"LastUpdateFrameNumber", 0x130, "IntProperty"},
            {"DebugName", 0x140, "NameProperty"},
        }};

        inline static constexpr std::array<std::string_view, 11> FunctionNames{{
            "GetDebugName",
            "GetLastUpdateFrameNumber",
            "GetLastUpdateTimestamp",
            "GetLocalToTrackingTransform",
            "GetLocalToWorldTransform",
            "GetName",
            "GetObjectClassification",
            "GetTrackingState",
            "GetUnderlyingMesh",
            "HasSpatialMeshUsageFlag",
            "IsTracked",
        }};
    };

    struct ARTrackedImage
    {
        static constexpr std::string_view Name = "ARTrackedImage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARTrackedGeometry";
        struct Offsets
        {
            static constexpr std::uintptr_t DetectedImage = 0x160;
            static constexpr std::uintptr_t EstimatedSize = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DetectedImage", 0x160, "ObjectProperty"},
            {"EstimatedSize", 0x168, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetDetectedImage",
            "GetEstimateSize",
        }};
    };

    struct ARTrackedObject
    {
        static constexpr std::string_view Name = "ARTrackedObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARTrackedGeometry";
        struct Offsets
        {
            static constexpr std::uintptr_t DetectedObject = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DetectedObject", 0x160, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetDetectedObject",
        }};
    };

    struct ARTrackedPoint
    {
        static constexpr std::string_view Name = "ARTrackedPoint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARTrackedGeometry";
        struct Offsets
        {
            static constexpr std::uintptr_t UniqueID = 0x28;
            static constexpr std::uintptr_t LocalToTrackingTransform = 0x40;
            static constexpr std::uintptr_t LocalToAlignedTrackingTransform = 0xA0;
            static constexpr std::uintptr_t TrackingState = 0x100;
            static constexpr std::uintptr_t UnderlyingMesh = 0x110;
            static constexpr std::uintptr_t ObjectClassification = 0x118;
            static constexpr std::uintptr_t SpatialMeshUsageFlags = 0x119;
            static constexpr std::uintptr_t LastUpdateFrameNumber = 0x130;
            static constexpr std::uintptr_t DebugName = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"UniqueID", 0x28, "StructProperty"},
            {"LocalToTrackingTransform", 0x40, "StructProperty"},
            {"LocalToAlignedTrackingTransform", 0xA0, "StructProperty"},
            {"TrackingState", 0x100, "EnumProperty"},
            {"UnderlyingMesh", 0x110, "ObjectProperty"},
            {"ObjectClassification", 0x118, "EnumProperty"},
            {"SpatialMeshUsageFlags", 0x119, "EnumProperty"},
            {"LastUpdateFrameNumber", 0x130, "IntProperty"},
            {"DebugName", 0x140, "NameProperty"},
        }};
    };

    struct ARTrackedPose
    {
        static constexpr std::string_view Name = "ARTrackedPose";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARTrackedGeometry";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackedPose = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TrackedPose", 0x160, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetTrackedPoseData",
        }};
    };

    struct ARTrackedQRCode
    {
        static constexpr std::string_view Name = "ARTrackedQRCode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARTrackedImage";
        struct Offsets
        {
            static constexpr std::uintptr_t QRCode = 0x180;
            static constexpr std::uintptr_t Version = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"QRCode", 0x180, "StrProperty"},
            {"Version", 0x190, "IntProperty"},
        }};
    };

    struct ARTypesDummyClass
    {
        static constexpr std::string_view Name = "ARTypesDummyClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ARVideoFormat
    {
        static constexpr std::string_view Name = "ARVideoFormat";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FPS = 0x0;
            static constexpr std::uintptr_t Width = 0x4;
            static constexpr std::uintptr_t Height = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FPS", 0x0, "IntProperty"},
            {"Width", 0x4, "IntProperty"},
            {"Height", 0x8, "IntProperty"},
        }};
    };

    struct CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
    {
        static constexpr std::string_view Name = "CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARBaseAsyncTaskBlueprintProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x50;
            static constexpr std::uintptr_t OnFailed = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x50, "MulticastInlineDelegateProperty"},
            {"OnFailed", 0x60, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "CheckGeoTrackingAvailability",
            "CheckGeoTrackingAvailabilityAtLocation",
        }};
    };

    struct GetGeoLocationAsyncTaskBlueprintProxy
    {
        static constexpr std::string_view Name = "GetGeoLocationAsyncTaskBlueprintProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ARBaseAsyncTaskBlueprintProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x50;
            static constexpr std::uintptr_t OnFailed = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x50, "MulticastInlineDelegateProperty"},
            {"OnFailed", 0x60, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetGeoLocationAtWorldPosition",
        }};
    };

    struct TrackedGeometryGroup
    {
        static constexpr std::string_view Name = "TrackedGeometryGroup";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ARActor = 0x0;
            static constexpr std::uintptr_t ARComponent = 0x8;
            static constexpr std::uintptr_t TrackedGeometry = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ARActor", 0x0, "ObjectProperty"},
            {"ARComponent", 0x8, "ObjectProperty"},
            {"TrackedGeometry", 0x10, "ObjectProperty"},
        }};
    };

}
