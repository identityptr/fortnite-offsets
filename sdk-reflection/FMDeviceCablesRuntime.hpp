#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FMDeviceCablesRuntime
{
    struct FMDeviceCable
    {
        static constexpr std::string_view Name = "FMDeviceCable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingActor";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineComponent = 0x6D0;
            static constexpr std::uintptr_t DeviceCableHead = 0x6D8;
            static constexpr std::uintptr_t SplineMeshComponentClass = 0x6E0;
            static constexpr std::uintptr_t ScalarStaticMesh = 0x6E8;
            static constexpr std::uintptr_t AudioStaticMesh = 0x708;
            static constexpr std::uintptr_t NoteStaticMesh = 0x728;
            static constexpr std::uintptr_t TextureStaticMesh = 0x748;
            static constexpr std::uintptr_t MeshStaticMesh = 0x768;
            static constexpr std::uintptr_t SplineLengthParam = 0x788;
            static constexpr std::uintptr_t SplineStartParam = 0x78C;
            static constexpr std::uintptr_t SplineEndParam = 0x790;
            static constexpr std::uintptr_t PortTypeParam = 0x794;
            static constexpr std::uintptr_t CableStubLength = 0x798;
            static constexpr std::uintptr_t CableDistanceFromPortB = 0x79C;
            static constexpr std::uintptr_t CableMinTangent = 0x7A0;
            static constexpr std::uintptr_t CableMaxTangent = 0x7A4;
            static constexpr std::uintptr_t CableSectionLengthAtCableCenter = 0x7A8;
            static constexpr std::uintptr_t CableSectionLengthAtCableHeads = 0x7AC;
            static constexpr std::uintptr_t CableSectionCountAtCableHeads = 0x7B0;
            static constexpr std::uintptr_t CableCenterSectionsMaxCount = 0x7B4;
            static constexpr std::uintptr_t ExtremeMinDotProduct = 0x7B8;
            static constexpr std::uintptr_t MaxExtremeCableBendSize = 0x7BC;
            static constexpr std::uintptr_t ExtremeAngleTangentScale = 0x7C0;
            static constexpr std::uintptr_t CableSplineMeshArray = 0x7C8;
            static constexpr std::uintptr_t DeviceCableAnimator = 0x7D8;
            static constexpr std::uintptr_t DeviceCableMaterial = 0x7E0;
            static constexpr std::uintptr_t DeviceCableHeadMaterial = 0x7E8;
            static constexpr std::uintptr_t DeviceCableHeadScale = 0x7F0;
            static constexpr std::uintptr_t ConstantPort = 0x818;
            static constexpr std::uintptr_t PortA = 0x820;
            static constexpr std::uintptr_t ServerPortA = 0x828;
            static constexpr std::uintptr_t PortB = 0x830;
            static constexpr std::uintptr_t ServerPortB = 0x838;
            static constexpr std::uintptr_t bPermittedToShowVisuals = 0x840;
        };

        inline static constexpr std::array<PropertyInfo, 34> Properties{{
            {"SplineComponent", 0x6D0, "ObjectProperty"},
            {"DeviceCableHead", 0x6D8, "ObjectProperty"},
            {"SplineMeshComponentClass", 0x6E0, "ClassProperty"},
            {"ScalarStaticMesh", 0x6E8, "SoftObjectProperty"},
            {"AudioStaticMesh", 0x708, "SoftObjectProperty"},
            {"NoteStaticMesh", 0x728, "SoftObjectProperty"},
            {"TextureStaticMesh", 0x748, "SoftObjectProperty"},
            {"MeshStaticMesh", 0x768, "SoftObjectProperty"},
            {"SplineLengthParam", 0x788, "NameProperty"},
            {"SplineStartParam", 0x78C, "NameProperty"},
            {"SplineEndParam", 0x790, "NameProperty"},
            {"PortTypeParam", 0x794, "NameProperty"},
            {"CableStubLength", 0x798, "FloatProperty"},
            {"CableDistanceFromPortB", 0x79C, "FloatProperty"},
            {"CableMinTangent", 0x7A0, "FloatProperty"},
            {"CableMaxTangent", 0x7A4, "FloatProperty"},
            {"CableSectionLengthAtCableCenter", 0x7A8, "FloatProperty"},
            {"CableSectionLengthAtCableHeads", 0x7AC, "FloatProperty"},
            {"CableSectionCountAtCableHeads", 0x7B0, "IntProperty"},
            {"CableCenterSectionsMaxCount", 0x7B4, "IntProperty"},
            {"ExtremeMinDotProduct", 0x7B8, "FloatProperty"},
            {"MaxExtremeCableBendSize", 0x7BC, "FloatProperty"},
            {"ExtremeAngleTangentScale", 0x7C0, "FloatProperty"},
            {"CableSplineMeshArray", 0x7C8, "ArrayProperty"},
            {"DeviceCableAnimator", 0x7D8, "WeakObjectProperty"},
            {"DeviceCableMaterial", 0x7E0, "ObjectProperty"},
            {"DeviceCableHeadMaterial", 0x7E8, "ObjectProperty"},
            {"DeviceCableHeadScale", 0x7F0, "StructProperty"},
            {"ConstantPort", 0x818, "ObjectProperty"},
            {"PortA", 0x820, "ObjectProperty"},
            {"ServerPortA", 0x828, "ObjectProperty"},
            {"PortB", 0x830, "ObjectProperty"},
            {"ServerPortB", 0x838, "ObjectProperty"},
            {"bPermittedToShowVisuals", 0x840, "BoolProperty"},
        }};
    };

    struct FMDeviceCableAnimatorAudioAnalyzer
    {
        static constexpr std::string_view Name = "FMDeviceCableAnimatorAudioAnalyzer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FMDeviceCableAnimatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FftTextureParam = 0x68;
            static constexpr std::uintptr_t WaveformTextureParam = 0x6C;
            static constexpr std::uintptr_t AmplitudeTextureParam = 0x70;
            static constexpr std::uintptr_t AmplitudeDataParam = 0x74;
            static constexpr std::uintptr_t CableQualityParam = 0x78;
            static constexpr std::uintptr_t CableReactivityParam = 0x7C;
            static constexpr std::uintptr_t WaveformNumSamplesHeld = 0x80;
            static constexpr std::uintptr_t WaveformSmoothingDistance = 0x84;
            static constexpr std::uintptr_t WaveformSmoothingFactor = 0x88;
            static constexpr std::uintptr_t WaveformDecayPerSecond = 0x8C;
            static constexpr std::uintptr_t WaveformTexture = 0x90;
            static constexpr std::uintptr_t AmplitudeTexture = 0x98;
            static constexpr std::uintptr_t PatchWrapper = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"FftTextureParam", 0x68, "NameProperty"},
            {"WaveformTextureParam", 0x6C, "NameProperty"},
            {"AmplitudeTextureParam", 0x70, "NameProperty"},
            {"AmplitudeDataParam", 0x74, "NameProperty"},
            {"CableQualityParam", 0x78, "NameProperty"},
            {"CableReactivityParam", 0x7C, "NameProperty"},
            {"WaveformNumSamplesHeld", 0x80, "IntProperty"},
            {"WaveformSmoothingDistance", 0x84, "IntProperty"},
            {"WaveformSmoothingFactor", 0x88, "FloatProperty"},
            {"WaveformDecayPerSecond", 0x8C, "FloatProperty"},
            {"WaveformTexture", 0x90, "ObjectProperty"},
            {"AmplitudeTexture", 0x98, "ObjectProperty"},
            {"PatchWrapper", 0xA0, "ObjectProperty"},
        }};
    };

    struct FMDeviceCableAnimatorBase
    {
        static constexpr std::string_view Name = "FMDeviceCableAnimatorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerPort = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OwnerPort", 0x38, "WeakObjectProperty"},
        }};
    };

    struct FMDeviceCableAnimatorFloatProvider
    {
        static constexpr std::string_view Name = "FMDeviceCableAnimatorFloatProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FMDeviceCableAnimatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CableDataParam = 0x68;
            static constexpr std::uintptr_t FloatProviderTypeParam = 0x6C;
            static constexpr std::uintptr_t FloatProviders = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CableDataParam", 0x68, "NameProperty"},
            {"FloatProviderTypeParam", 0x6C, "NameProperty"},
            {"FloatProviders", 0x70, "ArrayProperty"},
        }};
    };

    struct FMDeviceCableAnimatorMeshProvider
    {
        static constexpr std::string_view Name = "FMDeviceCableAnimatorMeshProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FMDeviceCableAnimatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CableDataParam = 0x68;
            static constexpr std::uintptr_t DecayRate = 0x6C;
            static constexpr std::uintptr_t MeshProvider = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CableDataParam", 0x68, "NameProperty"},
            {"DecayRate", 0x6C, "FloatProperty"},
            {"MeshProvider", 0x70, "ObjectProperty"},
        }};
    };

    struct FMDeviceCableAnimatorMidiEvent
    {
        static constexpr std::string_view Name = "FMDeviceCableAnimatorMidiEvent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FMDeviceCableAnimatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t NoteTextureParam = 0x68;
            static constexpr std::uintptr_t NoteShapeCurve = 0x70;
            static constexpr std::uintptr_t NotePercentOfTexture = 0x78;
            static constexpr std::uintptr_t NoteTravelBeats = 0x7C;
            static constexpr std::uintptr_t NoteStartDelayBeats = 0x80;
            static constexpr std::uintptr_t NoteTexture = 0x98;
            static constexpr std::uintptr_t PatchWrapper = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"NoteTextureParam", 0x68, "NameProperty"},
            {"NoteShapeCurve", 0x70, "ObjectProperty"},
            {"NotePercentOfTexture", 0x78, "FloatProperty"},
            {"NoteTravelBeats", 0x7C, "FloatProperty"},
            {"NoteStartDelayBeats", 0x80, "FloatProperty"},
            {"NoteTexture", 0x98, "ObjectProperty"},
            {"PatchWrapper", 0xA0, "ObjectProperty"},
        }};
    };

    struct FMDeviceCableAnimatorTextureProvider
    {
        static constexpr std::string_view Name = "FMDeviceCableAnimatorTextureProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FMDeviceCableAnimatorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CableDataParam = 0x68;
            static constexpr std::uintptr_t DecayRate = 0x6C;
            static constexpr std::uintptr_t TextureProvider = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CableDataParam", 0x68, "NameProperty"},
            {"DecayRate", 0x6C, "FloatProperty"},
            {"TextureProvider", 0x70, "ObjectProperty"},
        }};
    };

    struct FMDeviceCableAnimatorTickSubsystem
    {
        static constexpr std::string_view Name = "FMDeviceCableAnimatorTickSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortManagedTickSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveTickList = 0x68;
            static constexpr std::uintptr_t AllEnabledObjects = 0x78;
            static constexpr std::uintptr_t AllRegisteredObjects = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActiveTickList", 0x68, "ArrayProperty"},
            {"AllEnabledObjects", 0x78, "ArrayProperty"},
            {"AllRegisteredObjects", 0x88, "SetProperty"},
        }};
    };

    struct FMDeviceCableAudioConnection
    {
        static constexpr std::string_view Name = "FMDeviceCableAudioConnection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FMDeviceCableMetaSoundConnection";
        struct Offsets
        {
            static constexpr std::uintptr_t bConnectionActive = 0x40;
            static constexpr std::uintptr_t BuildingCompositeArtifactFromPorts = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bConnectionActive", 0x40, "BoolProperty"},
            {"BuildingCompositeArtifactFromPorts", 0x48, "ArrayProperty"},
        }};
    };

    struct FMDeviceCableConnectionBase
    {
        static constexpr std::string_view Name = "FMDeviceCableConnectionBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bConnectionActive = 0x40;
            static constexpr std::uintptr_t BuildingCompositeArtifactFromPorts = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bConnectionActive", 0x40, "BoolProperty"},
            {"BuildingCompositeArtifactFromPorts", 0x48, "ArrayProperty"},
        }};
    };

    struct FMDeviceCableControllerComponent
    {
        static constexpr std::string_view Name = "FMDeviceCableControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnControllerCableConnected = 0xC0;
            static constexpr std::uintptr_t OnControllerCableDisconnected = 0xD0;
            static constexpr std::uintptr_t ControllerCablePort = 0xE0;
            static constexpr std::uintptr_t DeviceCableManagerClass = 0xE8;
            static constexpr std::uintptr_t CurrentPlayerPawn = 0xF0;
            static constexpr std::uintptr_t PlayerController = 0xF8;
            static constexpr std::uintptr_t LocalControllerPort = 0x100;
            static constexpr std::uintptr_t ServerControllerPort = 0x108;
            static constexpr std::uintptr_t LocalControllerPortActor = 0x110;
            static constexpr std::uintptr_t LocalDeviceCableManager = 0x118;
            static constexpr std::uintptr_t ServerDeviceCableManager = 0x120;
            static constexpr std::uintptr_t bFitIsEquipped = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"OnControllerCableConnected", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnControllerCableDisconnected", 0xD0, "MulticastInlineDelegateProperty"},
            {"ControllerCablePort", 0xE0, "ClassProperty"},
            {"DeviceCableManagerClass", 0xE8, "ClassProperty"},
            {"CurrentPlayerPawn", 0xF0, "WeakObjectProperty"},
            {"PlayerController", 0xF8, "ObjectProperty"},
            {"LocalControllerPort", 0x100, "ObjectProperty"},
            {"ServerControllerPort", 0x108, "ObjectProperty"},
            {"LocalControllerPortActor", 0x110, "WeakObjectProperty"},
            {"LocalDeviceCableManager", 0x118, "ObjectProperty"},
            {"ServerDeviceCableManager", 0x120, "ObjectProperty"},
            {"bFitIsEquipped", 0x128, "BoolProperty"},
        }};
    };

    struct FMDeviceCableFloatConnection
    {
        static constexpr std::string_view Name = "FMDeviceCableFloatConnection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FMDeviceCableConnectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bConnectionActive = 0x40;
            static constexpr std::uintptr_t BuildingCompositeArtifactFromPorts = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bConnectionActive", 0x40, "BoolProperty"},
            {"BuildingCompositeArtifactFromPorts", 0x48, "ArrayProperty"},
        }};
    };

    struct FMDeviceCableManagerComponent
    {
        static constexpr std::string_view Name = "FMDeviceCableManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DeviceCableClass = 0xC8;
            static constexpr std::uintptr_t StartingCablePoolSize = 0xD0;
            static constexpr std::uintptr_t CableInteractionType = 0xD4;
            static constexpr std::uintptr_t ConnectionClasses = 0xD8;
            static constexpr std::uintptr_t PlayerEnteredHandle = 0xE8;
            static constexpr std::uintptr_t FreeDeviceCables = 0x130;
            static constexpr std::uintptr_t CableConnectionsByType = 0x140;
            static constexpr std::uintptr_t PortsInVolume = 0x150;
            static constexpr std::uintptr_t OriginalGuidToDuplicatedGuidThisFrame = 0x160;
            static constexpr std::uintptr_t CablesToBeNotifiedOfVisualPermissions = 0x190;
            static constexpr std::uintptr_t bVisualPermissionsAlreadyEstablished = 0x1A0;
            static constexpr std::uintptr_t bUnregisterWithSignificanceSystem = 0x1A1;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"DeviceCableClass", 0xC8, "ClassProperty"},
            {"StartingCablePoolSize", 0xD0, "IntProperty"},
            {"CableInteractionType", 0xD4, "EnumProperty"},
            {"ConnectionClasses", 0xD8, "MapProperty"},
            {"PlayerEnteredHandle", 0xE8, "StructProperty"},
            {"FreeDeviceCables", 0x130, "ArrayProperty"},
            {"CableConnectionsByType", 0x140, "MapProperty"},
            {"PortsInVolume", 0x150, "MapProperty"},
            {"OriginalGuidToDuplicatedGuidThisFrame", 0x160, "MapProperty"},
            {"CablesToBeNotifiedOfVisualPermissions", 0x190, "ArrayProperty"},
            {"bVisualPermissionsAlreadyEstablished", 0x1A0, "BoolProperty"},
            {"bUnregisterWithSignificanceSystem", 0x1A1, "BoolProperty"},
        }};
    };

    struct FMDeviceCableMeshConnection
    {
        static constexpr std::string_view Name = "FMDeviceCableMeshConnection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FMDeviceCableConnectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviousMeshInstanceHash = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PreviousMeshInstanceHash", 0x58, "UInt32Property"},
        }};
    };

    struct FMDeviceCableMetaSoundConnection
    {
        static constexpr std::string_view Name = "FMDeviceCableMetaSoundConnection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FMDeviceCableConnectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bConnectionActive = 0x40;
            static constexpr std::uintptr_t BuildingCompositeArtifactFromPorts = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bConnectionActive", 0x40, "BoolProperty"},
            {"BuildingCompositeArtifactFromPorts", 0x48, "ArrayProperty"},
        }};
    };

    struct FMDeviceCableModulatorPortComponent
    {
        static constexpr std::string_view Name = "FMDeviceCableModulatorPortComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FMDeviceCablePortComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AssociatedProperty = 0x988;
            static constexpr std::uintptr_t AssociatedObject = 0x998;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AssociatedProperty", 0x988, "StrProperty"},
            {"AssociatedObject", 0x998, "WeakObjectProperty"},
        }};
    };

    struct FMDeviceCableNoteConnection
    {
        static constexpr std::string_view Name = "FMDeviceCableNoteConnection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FMDeviceCableMetaSoundConnection";
        struct Offsets
        {
            static constexpr std::uintptr_t bConnectionActive = 0x40;
            static constexpr std::uintptr_t BuildingCompositeArtifactFromPorts = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bConnectionActive", 0x40, "BoolProperty"},
            {"BuildingCompositeArtifactFromPorts", 0x48, "ArrayProperty"},
        }};
    };

    struct FMDeviceCablePortComponent
    {
        static constexpr std::string_view Name = "FMDeviceCablePortComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCablePortSizeUpdated = 0x6D8;
            static constexpr std::uintptr_t OnAnimatorCreated = 0x6E8;
            static constexpr std::uintptr_t OnConnected = 0x6F8;
            static constexpr std::uintptr_t OnConnectedDuringGameplay = 0x728;
            static constexpr std::uintptr_t OnDisconnected = 0x738;
            static constexpr std::uintptr_t OnConnectionStarted = 0x748;
            static constexpr std::uintptr_t OnConnectionEnded = 0x758;
            static constexpr std::uintptr_t OnPortArtifactUpdated = 0x768;
            static constexpr std::uintptr_t OnReceiveFloatProviders = 0x778;
            static constexpr std::uintptr_t OnDisconnectFloatProvider = 0x788;
            static constexpr std::uintptr_t DeviceCableManagerClass = 0x798;
            static constexpr std::uintptr_t OutputStaticMesh = 0x7A0;
            static constexpr std::uintptr_t AudioInStaticMesh = 0x7C0;
            static constexpr std::uintptr_t NoteInStaticMesh = 0x7E0;
            static constexpr std::uintptr_t TextureInStaticMesh = 0x800;
            static constexpr std::uintptr_t MeshInStaticMesh = 0x820;
            static constexpr std::uintptr_t ScalarInStaticMesh = 0x840;
            static constexpr std::uintptr_t CableAnimatorClasses = 0x860;
            static constexpr std::uintptr_t PortFlowType = 0x870;
            static constexpr std::uintptr_t PortDataType = 0x871;
            static constexpr std::uintptr_t PortLoadableState = 0x872;
            static constexpr std::uintptr_t AnimationSyncType = 0x873;
            static constexpr std::uintptr_t bAllowMultipleConnections = 0x874;
            static constexpr std::uintptr_t bAllowSiblingConnections = 0x875;
            static constexpr std::uintptr_t OverrideAllowMultipleConnections = 0x876;
            static constexpr std::uintptr_t OverrideAllowSiblingConnections = 0x877;
            static constexpr std::uintptr_t bHideWhenNotRelevant = 0x878;
            static constexpr std::uintptr_t bIsPlayerPort = 0x879;
            static constexpr std::uintptr_t bIsOnPreviewBuildingActor = 0x87A;
            static constexpr std::uintptr_t EnterVolumeTag = 0x87C;
            static constexpr std::uintptr_t ExitVolumeTag = 0x880;
            static constexpr std::uintptr_t ConnectedPorts = 0x888;
            static constexpr std::uintptr_t ServerConnectedPorts = 0x898;
            static constexpr std::uintptr_t CurrentConnections = 0x8A8;
            static constexpr std::uintptr_t ConstantCable = 0x8B8;
            static constexpr std::uintptr_t DeviceCableManager = 0x8C0;
            static constexpr std::uintptr_t OtherPortsOnActor = 0x8C8;
            static constexpr std::uintptr_t PortActivatedState = 0x8D8;
            static constexpr std::uintptr_t ServerPortActivatedState = 0x8D9;
            static constexpr std::uintptr_t PortSelectableState = 0x8DA;
            static constexpr std::uintptr_t DeviceCableAnimator = 0x8E0;
            static constexpr std::uintptr_t ConnectionGuid = 0x8E8;
            static constexpr std::uintptr_t ConnectedGuids = 0x8F8;
            static constexpr std::uintptr_t CachedArtifact = 0x908;
            static constexpr std::uintptr_t PendingConnectionBroadcasts = 0x938;
            static constexpr std::uintptr_t SaveGuid = 0x948;
        };

        inline static constexpr std::array<PropertyInfo, 46> Properties{{
            {"OnCablePortSizeUpdated", 0x6D8, "MulticastInlineDelegateProperty"},
            {"OnAnimatorCreated", 0x6E8, "MulticastInlineDelegateProperty"},
            {"OnConnected", 0x6F8, "MulticastInlineDelegateProperty"},
            {"OnConnectedDuringGameplay", 0x728, "MulticastInlineDelegateProperty"},
            {"OnDisconnected", 0x738, "MulticastInlineDelegateProperty"},
            {"OnConnectionStarted", 0x748, "MulticastInlineDelegateProperty"},
            {"OnConnectionEnded", 0x758, "MulticastInlineDelegateProperty"},
            {"OnPortArtifactUpdated", 0x768, "MulticastInlineDelegateProperty"},
            {"OnReceiveFloatProviders", 0x778, "MulticastInlineDelegateProperty"},
            {"OnDisconnectFloatProvider", 0x788, "MulticastInlineDelegateProperty"},
            {"DeviceCableManagerClass", 0x798, "ClassProperty"},
            {"OutputStaticMesh", 0x7A0, "SoftObjectProperty"},
            {"AudioInStaticMesh", 0x7C0, "SoftObjectProperty"},
            {"NoteInStaticMesh", 0x7E0, "SoftObjectProperty"},
            {"TextureInStaticMesh", 0x800, "SoftObjectProperty"},
            {"MeshInStaticMesh", 0x820, "SoftObjectProperty"},
            {"ScalarInStaticMesh", 0x840, "SoftObjectProperty"},
            {"CableAnimatorClasses", 0x860, "MapProperty"},
            {"PortFlowType", 0x870, "EnumProperty"},
            {"PortDataType", 0x871, "EnumProperty"},
            {"PortLoadableState", 0x872, "EnumProperty"},
            {"AnimationSyncType", 0x873, "EnumProperty"},
            {"bAllowMultipleConnections", 0x874, "BoolProperty"},
            {"bAllowSiblingConnections", 0x875, "BoolProperty"},
            {"OverrideAllowMultipleConnections", 0x876, "EnumProperty"},
            {"OverrideAllowSiblingConnections", 0x877, "EnumProperty"},
            {"bHideWhenNotRelevant", 0x878, "BoolProperty"},
            {"bIsPlayerPort", 0x879, "BoolProperty"},
            {"bIsOnPreviewBuildingActor", 0x87A, "BoolProperty"},
            {"EnterVolumeTag", 0x87C, "NameProperty"},
            {"ExitVolumeTag", 0x880, "NameProperty"},
            {"ConnectedPorts", 0x888, "ArrayProperty"},
            {"ServerConnectedPorts", 0x898, "ArrayProperty"},
            {"CurrentConnections", 0x8A8, "ArrayProperty"},
            {"ConstantCable", 0x8B8, "ObjectProperty"},
            {"DeviceCableManager", 0x8C0, "ObjectProperty"},
            {"OtherPortsOnActor", 0x8C8, "ArrayProperty"},
            {"PortActivatedState", 0x8D8, "EnumProperty"},
            {"ServerPortActivatedState", 0x8D9, "EnumProperty"},
            {"PortSelectableState", 0x8DA, "EnumProperty"},
            {"DeviceCableAnimator", 0x8E0, "ObjectProperty"},
            {"ConnectionGuid", 0x8E8, "StructProperty"},
            {"ConnectedGuids", 0x8F8, "ArrayProperty"},
            {"CachedArtifact", 0x908, "StructProperty"},
            {"PendingConnectionBroadcasts", 0x938, "ArrayProperty"},
            {"SaveGuid", 0x948, "StructProperty"},
        }};
    };

    struct FMDeviceCableSystem
    {
        static constexpr std::string_view Name = "FMDeviceCableSystem";
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

    struct FMDeviceCableTextureConnection
    {
        static constexpr std::string_view Name = "FMDeviceCableTextureConnection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FMDeviceCableConnectionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bConnectionActive = 0x40;
            static constexpr std::uintptr_t BuildingCompositeArtifactFromPorts = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bConnectionActive", 0x40, "BoolProperty"},
            {"BuildingCompositeArtifactFromPorts", 0x48, "ArrayProperty"},
        }};
    };

    struct FMDeviceCableWildcardOrderingComponent
    {
        static constexpr std::string_view Name = "FMDeviceCableWildcardOrderingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InputsShowHideMovementInfo = 0xC8;
            static constexpr std::uintptr_t InOutMovementInfo = 0x1B0;
            static constexpr std::uintptr_t TransitionMovementInfo = 0x1E0;
            static constexpr std::uintptr_t CollapseExpandMovementInfo = 0x2C8;
            static constexpr std::uintptr_t CollapsedOutputPosition = 0x3B0;
            static constexpr std::uintptr_t VisualChangeTimeoutTime = 0x3C8;
            static constexpr std::uintptr_t ClosedMeshTag = 0x3D0;
            static constexpr std::uintptr_t TopMeshTag = 0x3D4;
            static constexpr std::uintptr_t MiddleMeshTag = 0x3D8;
            static constexpr std::uintptr_t BottomMeshTag = 0x3DC;
            static constexpr std::uintptr_t InputPortParentTag = 0x3E0;
            static constexpr std::uintptr_t ClosedMesh = 0x3E8;
            static constexpr std::uintptr_t TopMesh = 0x3F0;
            static constexpr std::uintptr_t MiddleMeshes = 0x3F8;
            static constexpr std::uintptr_t BottomMesh = 0x408;
            static constexpr std::uintptr_t InputWildcardPorts = 0x418;
            static constexpr std::uintptr_t InputWildcardPortParent = 0x428;
            static constexpr std::uintptr_t OutputWildcardPorts = 0x430;
            static constexpr std::uintptr_t ServerPortStates = 0x4A0;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"InputsShowHideMovementInfo", 0xC8, "StructProperty"},
            {"InOutMovementInfo", 0x1B0, "StructProperty"},
            {"TransitionMovementInfo", 0x1E0, "StructProperty"},
            {"CollapseExpandMovementInfo", 0x2C8, "StructProperty"},
            {"CollapsedOutputPosition", 0x3B0, "StructProperty"},
            {"VisualChangeTimeoutTime", 0x3C8, "FloatProperty"},
            {"ClosedMeshTag", 0x3D0, "NameProperty"},
            {"TopMeshTag", 0x3D4, "NameProperty"},
            {"MiddleMeshTag", 0x3D8, "NameProperty"},
            {"BottomMeshTag", 0x3DC, "NameProperty"},
            {"InputPortParentTag", 0x3E0, "NameProperty"},
            {"ClosedMesh", 0x3E8, "ObjectProperty"},
            {"TopMesh", 0x3F0, "ObjectProperty"},
            {"MiddleMeshes", 0x3F8, "ArrayProperty"},
            {"BottomMesh", 0x408, "ObjectProperty"},
            {"InputWildcardPorts", 0x418, "ArrayProperty"},
            {"InputWildcardPortParent", 0x428, "ObjectProperty"},
            {"OutputWildcardPorts", 0x430, "ArrayProperty"},
            {"ServerPortStates", 0x4A0, "ArrayProperty"},
        }};
    };

    struct FMDeviceCableWildcardPortComponent
    {
        static constexpr std::string_view Name = "FMDeviceCableWildcardPortComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FMDeviceCablePortComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnWildcardDataTypeChanged = 0x988;
            static constexpr std::uintptr_t OnWildcardPortSlotSetFromSave = 0x998;
            static constexpr std::uintptr_t SlotIndex = 0x9A8;
            static constexpr std::uintptr_t SavedSlotIndex = 0x9AC;
            static constexpr std::uintptr_t SavedPortDataType = 0x9B0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnWildcardDataTypeChanged", 0x988, "MulticastInlineDelegateProperty"},
            {"OnWildcardPortSlotSetFromSave", 0x998, "MulticastInlineDelegateProperty"},
            {"SlotIndex", 0x9A8, "IntProperty"},
            {"SavedSlotIndex", 0x9AC, "IntProperty"},
            {"SavedPortDataType", 0x9B0, "EnumProperty"},
        }};
    };

    struct FMDeviceCablesFunctionLibrary
    {
        static constexpr std::string_view Name = "FMDeviceCablesFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
