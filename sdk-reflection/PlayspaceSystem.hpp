#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PlayspaceSystem
{
    struct ActorOverlapEvent
    {
        static constexpr std::string_view Name = "ActorOverlapEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerState = 0x0;
            static constexpr std::uintptr_t Volume = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayerState", 0x0, "ObjectProperty"},
            {"Volume", 0x8, "ObjectProperty"},
        }};
    };

    struct GameFeatureAction_AddPlayspaceComponent
    {
        static constexpr std::string_view Name = "GameFeatureAction_AddPlayspaceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayspaceComponentDataList = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlayspaceComponentDataList", 0x28, "ArrayProperty"},
        }};
    };

    struct GameFeatureAction_CreatePlayspacesFromConfig
    {
        static constexpr std::string_view Name = "GameFeatureAction_CreatePlayspacesFromConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayspaceDataList = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlayspaceDataList", 0x28, "ArrayProperty"},
        }};
    };

    struct GameStateComponent_ListenForExternallyReachablePlayspaces
    {
        static constexpr std::string_view Name = "GameStateComponent_ListenForExternallyReachablePlayspaces";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Requests = 0x100;
            static constexpr std::uintptr_t PendingRequests = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Requests", 0x100, "ArrayProperty"},
            {"PendingRequests", 0x110, "ArrayProperty"},
        }};
    };

    struct GameplayVolume
    {
        static constexpr std::string_view Name = "GameplayVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayspaceSetEvent = 0x278;
            static constexpr std::uintptr_t PlayspaceClassTemplate = 0x2A0;
            static constexpr std::uintptr_t PlayspaceCreationType = 0x2C0;
            static constexpr std::uintptr_t PlayspaceClass = 0x2C8;
            static constexpr std::uintptr_t bDestroyPlayspaceOnEndPlay = 0x2D0;
            static constexpr std::uintptr_t bSpawnPlayspaceAtGameplayVolumeLocation = 0x2D1;
            static constexpr std::uintptr_t Playspace = 0x2D8;
            static constexpr std::uintptr_t VolumeTags = 0x2E0;
            static constexpr std::uintptr_t BoundsComponent = 0x300;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"PlayspaceSetEvent", 0x278, "MulticastInlineDelegateProperty"},
            {"PlayspaceClassTemplate", 0x2A0, "SoftClassProperty"},
            {"PlayspaceCreationType", 0x2C0, "EnumProperty"},
            {"PlayspaceClass", 0x2C8, "ClassProperty"},
            {"bDestroyPlayspaceOnEndPlay", 0x2D0, "BoolProperty"},
            {"bSpawnPlayspaceAtGameplayVolumeLocation", 0x2D1, "BoolProperty"},
            {"Playspace", 0x2D8, "ObjectProperty"},
            {"VolumeTags", 0x2E0, "StructProperty"},
            {"BoundsComponent", 0x300, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetPlayspace",
            "InitializeBoundsComponent",
            "OnOverlappedPawnControllerChanged",
            "OnRep_Playspace",
            "UpdateSize",
        }};
    };

    struct OverlapComponent
    {
        static constexpr std::string_view Name = "OverlapComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ForcedLodModel = 0x5C8;
            static constexpr std::uintptr_t MinLOD = 0x5CC;
            static constexpr std::uintptr_t SubDivisionStepSize = 0x5D0;
            static constexpr std::uintptr_t WireframeColorOverride = 0x5D4;
            static constexpr std::uintptr_t StaticMesh = 0x5D8;
            static constexpr std::uintptr_t WorldPositionOffsetDisableDistance = 0x5E0;
            static constexpr std::uintptr_t bDisallowNanite = 0x5E4;
            static constexpr std::uintptr_t bEvaluateWorldPositionOffset = 0x5E4;
            static constexpr std::uintptr_t bEvaluateWorldPositionOffsetInRayTracing = 0x5E4;
            static constexpr std::uintptr_t bForceDisableNanite = 0x5E4;
            static constexpr std::uintptr_t bForceNaniteForMasked = 0x5E4;
            static constexpr std::uintptr_t bWorldPositionOffsetWritesVelocity = 0x5E4;
            static constexpr std::uintptr_t bForceNavigationObstacle = 0x5E5;
            static constexpr std::uintptr_t bOverrideMinLOD = 0x5E5;
            static constexpr std::uintptr_t bOverrideNavAreaClass = 0x5E5;
            static constexpr std::uintptr_t bOverrideNavigationExport = 0x5E5;
            static constexpr std::uintptr_t bOverrideWireframeColor = 0x5E5;
            static constexpr std::uintptr_t NavAreaClass = 0x5E8;
            static constexpr std::uintptr_t bCastDistanceFieldIndirectShadow = 0x5F0;
            static constexpr std::uintptr_t bDisallowMeshPaintPerInstance = 0x5F0;
            static constexpr std::uintptr_t bIgnoreInstanceForTextureStreaming = 0x5F0;
            static constexpr std::uintptr_t bOverrideDistanceFieldSelfShadowBias = 0x5F0;
            static constexpr std::uintptr_t bOverrideLightMapRes = 0x5F0;
            static constexpr std::uintptr_t bSortTriangles = 0x5F0;
            static constexpr std::uintptr_t bUseDefaultCollision = 0x5F0;
            static constexpr std::uintptr_t bUseSubDivisions = 0x5F0;
            static constexpr std::uintptr_t bEnableTextureColorMeshPainting = 0x5F1;
            static constexpr std::uintptr_t bEnableVertexColorMeshPainting = 0x5F1;
            static constexpr std::uintptr_t bOverrideMeshPaintTextureCoordinateIndex = 0x5F1;
            static constexpr std::uintptr_t bOverrideMeshPaintTextureResolution = 0x5F1;
            static constexpr std::uintptr_t bReverseCulling = 0x5F1;
            static constexpr std::uintptr_t bWritesToMaterialCache = 0x5F1;
            static constexpr std::uintptr_t OverriddenMeshPaintTextureCoordinateIndex = 0x5F4;
            static constexpr std::uintptr_t OverriddenMeshPaintTextureResolution = 0x5F8;
            static constexpr std::uintptr_t OverriddenLightMapRes = 0x5FC;
            static constexpr std::uintptr_t MeshPaintTextureCooked = 0x600;
            static constexpr std::uintptr_t MeshPaintTextureOverride = 0x608;
            static constexpr std::uintptr_t MaterialCacheTileCount = 0x610;
            static constexpr std::uintptr_t MaterialCacheUVRegion = 0x618;
            static constexpr std::uintptr_t MaterialCacheUVCoordinateIndex = 0x62C;
            static constexpr std::uintptr_t MaterialCacheTextures = 0x630;
            static constexpr std::uintptr_t DistanceFieldIndirectShadowMinVisibility = 0x640;
            static constexpr std::uintptr_t DistanceFieldSelfShadowBias = 0x644;
            static constexpr std::uintptr_t StreamingDistanceMultiplier = 0x648;
            static constexpr std::uintptr_t NanitePixelProgrammableDistance = 0x64C;
            static constexpr std::uintptr_t LodData = 0x650;
            static constexpr std::uintptr_t StreamingTextureData = 0x660;
            static constexpr std::uintptr_t LightmassSettings = 0x670;
        };

        inline static constexpr std::array<PropertyInfo, 48> Properties{{
            {"ForcedLodModel", 0x5C8, "IntProperty"},
            {"MinLOD", 0x5CC, "IntProperty"},
            {"SubDivisionStepSize", 0x5D0, "IntProperty"},
            {"WireframeColorOverride", 0x5D4, "StructProperty"},
            {"StaticMesh", 0x5D8, "ObjectProperty"},
            {"WorldPositionOffsetDisableDistance", 0x5E0, "IntProperty"},
            {"bDisallowNanite", 0x5E4, "BoolProperty"},
            {"bEvaluateWorldPositionOffset", 0x5E4, "BoolProperty"},
            {"bEvaluateWorldPositionOffsetInRayTracing", 0x5E4, "BoolProperty"},
            {"bForceDisableNanite", 0x5E4, "BoolProperty"},
            {"bForceNaniteForMasked", 0x5E4, "BoolProperty"},
            {"bWorldPositionOffsetWritesVelocity", 0x5E4, "BoolProperty"},
            {"bForceNavigationObstacle", 0x5E5, "BoolProperty"},
            {"bOverrideMinLOD", 0x5E5, "BoolProperty"},
            {"bOverrideNavAreaClass", 0x5E5, "BoolProperty"},
            {"bOverrideNavigationExport", 0x5E5, "BoolProperty"},
            {"bOverrideWireframeColor", 0x5E5, "BoolProperty"},
            {"NavAreaClass", 0x5E8, "ClassProperty"},
            {"bCastDistanceFieldIndirectShadow", 0x5F0, "BoolProperty"},
            {"bDisallowMeshPaintPerInstance", 0x5F0, "BoolProperty"},
            {"bIgnoreInstanceForTextureStreaming", 0x5F0, "BoolProperty"},
            {"bOverrideDistanceFieldSelfShadowBias", 0x5F0, "BoolProperty"},
            {"bOverrideLightMapRes", 0x5F0, "BoolProperty"},
            {"bSortTriangles", 0x5F0, "BoolProperty"},
            {"bUseDefaultCollision", 0x5F0, "BoolProperty"},
            {"bUseSubDivisions", 0x5F0, "BoolProperty"},
            {"bEnableTextureColorMeshPainting", 0x5F1, "BoolProperty"},
            {"bEnableVertexColorMeshPainting", 0x5F1, "BoolProperty"},
            {"bOverrideMeshPaintTextureCoordinateIndex", 0x5F1, "BoolProperty"},
            {"bOverrideMeshPaintTextureResolution", 0x5F1, "BoolProperty"},
            {"bReverseCulling", 0x5F1, "BoolProperty"},
            {"bWritesToMaterialCache", 0x5F1, "BoolProperty"},
            {"OverriddenMeshPaintTextureCoordinateIndex", 0x5F4, "IntProperty"},
            {"OverriddenMeshPaintTextureResolution", 0x5F8, "IntProperty"},
            {"OverriddenLightMapRes", 0x5FC, "IntProperty"},
            {"MeshPaintTextureCooked", 0x600, "ObjectProperty"},
            {"MeshPaintTextureOverride", 0x608, "ObjectProperty"},
            {"MaterialCacheTileCount", 0x610, "StructProperty"},
            {"MaterialCacheUVRegion", 0x618, "StructProperty"},
            {"MaterialCacheUVCoordinateIndex", 0x62C, "IntProperty"},
            {"MaterialCacheTextures", 0x630, "ArrayProperty"},
            {"DistanceFieldIndirectShadowMinVisibility", 0x640, "FloatProperty"},
            {"DistanceFieldSelfShadowBias", 0x644, "FloatProperty"},
            {"StreamingDistanceMultiplier", 0x648, "FloatProperty"},
            {"NanitePixelProgrammableDistance", 0x64C, "FloatProperty"},
            {"LodData", 0x650, "ArrayProperty"},
            {"StreamingTextureData", 0x660, "ArrayProperty"},
            {"LightmassSettings", 0x670, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "OnBeginActorOverlap",
            "OnEndActorOverlap",
        }};
    };

    struct Playspace
    {
        static constexpr std::string_view Name = "Playspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Info";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyPlayspaceUserAdded = 0x278;
            static constexpr std::uintptr_t NotifyPlayspaceUserRemoved = 0x2A0;
            static constexpr std::uintptr_t NotifyPlayspaceInitialized = 0x2C8;
            static constexpr std::uintptr_t NotifyPlayspaceCreatedAndReady = 0x2F0;
            static constexpr std::uintptr_t NotifyBoundGameplayVolumeSet = 0x318;
            static constexpr std::uintptr_t NotifyStartMatch = 0x358;
            static constexpr std::uintptr_t NotifyEndMatch = 0x380;
            static constexpr std::uintptr_t GameplayTags = 0x3A8;
            static constexpr std::uintptr_t RequestedPlayspaceParentTag = 0x3C8;
            static constexpr std::uintptr_t ChildPlayspaceClasses = 0x3D0;
            static constexpr std::uintptr_t PlayspaceUsers = 0x3E0;
            static constexpr std::uintptr_t ChildPlayspaces = 0x468;
            static constexpr std::uintptr_t PendingUsers = 0x478;
            static constexpr std::uintptr_t bAutoStartMatchOnServerStart = 0x488;
            static constexpr std::uintptr_t bAllowPlayersToRespawnInParentPlayspace = 0x489;
            static constexpr std::uintptr_t BoundsEvaluationType = 0x48A;
            static constexpr std::uintptr_t PlayspaceManagerCached = 0x490;
            static constexpr std::uintptr_t BoundGameplayVolume = 0x498;
            static constexpr std::uintptr_t bIsInitialized = 0x4A0;
            static constexpr std::uintptr_t bMatchHasEnded = 0x4A2;
            static constexpr std::uintptr_t MatchStartTime = 0x4A4;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"NotifyPlayspaceUserAdded", 0x278, "MulticastInlineDelegateProperty"},
            {"NotifyPlayspaceUserRemoved", 0x2A0, "MulticastInlineDelegateProperty"},
            {"NotifyPlayspaceInitialized", 0x2C8, "MulticastInlineDelegateProperty"},
            {"NotifyPlayspaceCreatedAndReady", 0x2F0, "MulticastInlineDelegateProperty"},
            {"NotifyBoundGameplayVolumeSet", 0x318, "MulticastInlineDelegateProperty"},
            {"NotifyStartMatch", 0x358, "MulticastInlineDelegateProperty"},
            {"NotifyEndMatch", 0x380, "MulticastInlineDelegateProperty"},
            {"GameplayTags", 0x3A8, "StructProperty"},
            {"RequestedPlayspaceParentTag", 0x3C8, "StructProperty"},
            {"ChildPlayspaceClasses", 0x3D0, "ArrayProperty"},
            {"PlayspaceUsers", 0x3E0, "StructProperty"},
            {"ChildPlayspaces", 0x468, "ArrayProperty"},
            {"PendingUsers", 0x478, "ArrayProperty"},
            {"bAutoStartMatchOnServerStart", 0x488, "BoolProperty"},
            {"bAllowPlayersToRespawnInParentPlayspace", 0x489, "BoolProperty"},
            {"BoundsEvaluationType", 0x48A, "EnumProperty"},
            {"PlayspaceManagerCached", 0x490, "ObjectProperty"},
            {"BoundGameplayVolume", 0x498, "ObjectProperty"},
            {"bIsInitialized", 0x4A0, "BoolProperty"},
            {"bMatchHasEnded", 0x4A2, "BoolProperty"},
            {"MatchStartTime", 0x4A4, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "OnRep_BoundGameplayVolume",
            "OnRep_MatchStartTime",
            "OnRep_PlayspaceUsers",
            "OnRep_bIsInitialized",
            "OnRep_bMatchHasEnded",
        }};
    };

    struct PlayspaceComponent
    {
        static constexpr std::string_view Name = "PlayspaceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
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

    struct PlayspaceComponentConfiguration
    {
        static constexpr std::string_view Name = "PlayspaceComponentConfiguration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayspaceComponentClass = 0x0;
            static constexpr std::uintptr_t CreationType = 0x20;
            static constexpr std::uintptr_t TagQuery = 0x28;
            static constexpr std::uintptr_t Location = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PlayspaceComponentClass", 0x0, "SoftClassProperty"},
            {"CreationType", 0x20, "EnumProperty"},
            {"TagQuery", 0x28, "StructProperty"},
            {"Location", 0x70, "StructProperty"},
        }};
    };

    struct PlayspaceComponent_DispatchExternallyReachable
    {
        static constexpr std::string_view Name = "PlayspaceComponent_DispatchExternallyReachable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
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

    struct PlayspaceComponent_Logic
    {
        static constexpr std::string_view Name = "PlayspaceComponent_Logic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
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

    struct PlayspaceComponent_PlayerManager
    {
        static constexpr std::string_view Name = "PlayspaceComponent_PlayerManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ControllerComponents = 0xC0;
            static constexpr std::uintptr_t PlayerStateComponents = 0xD0;
            static constexpr std::uintptr_t ActorComponents = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ControllerComponents", 0xC0, "ArrayProperty"},
            {"PlayerStateComponents", 0xD0, "ArrayProperty"},
            {"ActorComponents", 0xE0, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnPlayerPawnSet",
        }};
    };

    struct PlayspaceComponent_PlayerSpawning
    {
        static constexpr std::string_view Name = "PlayspaceComponent_PlayerSpawning";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bQueueUserForSpawnWhenAdded = 0xC0;
            static constexpr std::uintptr_t SpawnDelayMin = 0xC4;
            static constexpr std::uintptr_t SpawnDelayMax = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bQueueUserForSpawnWhenAdded", 0xC0, "BoolProperty"},
            {"SpawnDelayMin", 0xC4, "FloatProperty"},
            {"SpawnDelayMax", 0xC8, "FloatProperty"},
        }};
    };

    struct PlayspaceComponent_VoiceManager
    {
        static constexpr std::string_view Name = "PlayspaceComponent_VoiceManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
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

    struct PlayspaceConfiguration
    {
        static constexpr std::string_view Name = "PlayspaceConfiguration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayspaceClass = 0x0;
            static constexpr std::uintptr_t CreationType = 0x20;
            static constexpr std::uintptr_t bForceSyncLoad = 0x21;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PlayspaceClass", 0x0, "SoftClassProperty"},
            {"CreationType", 0x20, "EnumProperty"},
            {"bForceSyncLoad", 0x21, "BoolProperty"},
        }};
    };

    struct PlayspaceControllerComponent_PlayerSpawning
    {
        static constexpr std::string_view Name = "PlayspaceControllerComponent_PlayerSpawning";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPlayerQueuedToSpawn = 0xC0;
            static constexpr std::uintptr_t SpawnCameraActor = 0xD0;
            static constexpr std::uintptr_t bClientReadyForSpawning = 0xF0;
            static constexpr std::uintptr_t ReplicatedSpawnInfo = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnPlayerQueuedToSpawn", 0xC0, "MulticastInlineDelegateProperty"},
            {"SpawnCameraActor", 0xD0, "ObjectProperty"},
            {"bClientReadyForSpawning", 0xF0, "BoolProperty"},
            {"ReplicatedSpawnInfo", 0xF8, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "ClientReplicatedSpawnInfo",
            "GetSpawnInfo",
            "OnRep_ReplicatedSpawnInfo",
            "ServerMarkReadyForSpawning",
        }};
    };

    struct PlayspaceExternallyReachableListenRequest
    {
        static constexpr std::string_view Name = "PlayspaceExternallyReachableListenRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Filter = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Filter", 0x0, "StructProperty"},
        }};
    };

    struct PlayspaceGameStateComponent
    {
        static constexpr std::string_view Name = "PlayspaceGameStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
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

    struct PlayspaceGameStateComponent_PlayerSpawningManager
    {
        static constexpr std::string_view Name = "PlayspaceGameStateComponent_PlayerSpawningManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawningUsersArray = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpawningUsersArray", 0x108, "ArrayProperty"},
        }};
    };

    struct PlayspaceJurisdictionFilter
    {
        static constexpr std::string_view Name = "PlayspaceJurisdictionFilter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextObject = 0x28;
            static constexpr std::uintptr_t RequesterObject = 0x30;
            static constexpr std::uintptr_t TargetPlayspaceClass = 0x38;
            static constexpr std::uintptr_t State = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ContextObject", 0x28, "ObjectProperty"},
            {"RequesterObject", 0x30, "ObjectProperty"},
            {"TargetPlayspaceClass", 0x38, "SoftClassProperty"},
            {"State", 0x58, "EnumProperty"},
        }};
    };

    struct PlayspaceJurisdictionFilterUtilities
    {
        static constexpr std::string_view Name = "PlayspaceJurisdictionFilterUtilities";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "MakeFilterFromActor",
            "MakeFilterFromComponent",
            "MakeFilterFromLocation",
            "MakeFilterFromPawn",
            "MakeFilterFromPlayerController",
            "MakeFilterFromPlayerState",
            "SetPendingUntilNextFrame",
            "SetPendingUntilSecondsElapse",
            "SpecifyPlayspaceClass",
        }};
    };

    struct PlayspaceLibrary
    {
        static constexpr std::string_view Name = "PlayspaceLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "DestroyPlayspace",
            "GetAllControllers",
            "GetPlayspaceForActor",
            "GetRootPlayspace",
        }};
    };

    struct PlayspaceLogic
    {
        static constexpr std::string_view Name = "PlayspaceLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Playspace = 0x278;
            static constexpr std::uintptr_t bAutoStartMatchOnServerStart = 0x280;
            static constexpr std::uintptr_t bMatchHasEnded = 0x282;
            static constexpr std::uintptr_t MatchStartTime = 0x284;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Playspace", 0x278, "ObjectProperty"},
            {"bAutoStartMatchOnServerStart", 0x280, "BoolProperty"},
            {"bMatchHasEnded", 0x282, "BoolProperty"},
            {"MatchStartTime", 0x284, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "OnRep_MatchStartTime",
            "OnRep_bMatchHasEnded",
        }};
    };

    struct PlayspaceManagerComponent
    {
        static constexpr std::string_view Name = "PlayspaceManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RootPlayspace = 0xD8;
            static constexpr std::uintptr_t PlayspaceRootType = 0xE0;
            static constexpr std::uintptr_t UnhandledEnterEvents = 0x1C0;
            static constexpr std::uintptr_t UnhandledExitEvents = 0x1D0;
            static constexpr std::uintptr_t UnassignedPlayers = 0x1E0;
            static constexpr std::uintptr_t bAssumeChildPlayspacesAreNested = 0x230;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"RootPlayspace", 0xD8, "ObjectProperty"},
            {"PlayspaceRootType", 0xE0, "EnumProperty"},
            {"UnhandledEnterEvents", 0x1C0, "ArrayProperty"},
            {"UnhandledExitEvents", 0x1D0, "ArrayProperty"},
            {"UnassignedPlayers", 0x1E0, "SetProperty"},
            {"bAssumeChildPlayspacesAreNested", 0x230, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "OnPlayerBeginOverlapGameplayVolume",
            "OnPlayerEndOverlapGameplayVolume",
            "OnRep_RootPlayspace",
            "ProcessOverlapEvents",
        }};
    };

    struct PlayspaceSpawnActor
    {
        static constexpr std::string_view Name = "PlayspaceSpawnActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SceneComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SceneComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct PlayspaceSpawningInfo
    {
        static constexpr std::string_view Name = "PlayspaceSpawningInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UserId = 0x0;
            static constexpr std::uintptr_t RequestingPlayspace = 0x30;
            static constexpr std::uintptr_t SpawnLocationActor = 0x38;
            static constexpr std::uintptr_t SpawnLocation = 0x40;
            static constexpr std::uintptr_t SpawnRotation = 0x58;
            static constexpr std::uintptr_t SpawnTimeServer = 0x70;
            static constexpr std::uintptr_t LastLocation = 0x78;
            static constexpr std::uintptr_t MinTimeForCameraFadeTransition = 0x90;
            static constexpr std::uintptr_t bIsRespawnFromDeath = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"UserId", 0x0, "StructProperty"},
            {"RequestingPlayspace", 0x30, "WeakObjectProperty"},
            {"SpawnLocationActor", 0x38, "ObjectProperty"},
            {"SpawnLocation", 0x40, "StructProperty"},
            {"SpawnRotation", 0x58, "StructProperty"},
            {"SpawnTimeServer", 0x70, "FloatProperty"},
            {"LastLocation", 0x78, "StructProperty"},
            {"MinTimeForCameraFadeTransition", 0x90, "FloatProperty"},
            {"bIsRespawnFromDeath", 0x94, "BoolProperty"},
        }};
    };

    struct PlayspaceUser
    {
        static constexpr std::string_view Name = "PlayspaceUser";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializerItem";
        struct Offsets
        {
            static constexpr std::uintptr_t UserId = 0x10;
            static constexpr std::uintptr_t LeafPlayspace = 0x40;
            static constexpr std::uintptr_t PlayerStateCached = 0x48;
            static constexpr std::uintptr_t ControllerCached = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"UserId", 0x10, "StructProperty"},
            {"LeafPlayspace", 0x40, "WeakObjectProperty"},
            {"PlayerStateCached", 0x48, "WeakObjectProperty"},
            {"ControllerCached", 0x50, "WeakObjectProperty"},
        }};
    };

    struct PlayspaceUserList
    {
        static constexpr std::string_view Name = "PlayspaceUserList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "FastArraySerializer";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayspaceUsers = 0x48;
            static constexpr std::uintptr_t bIsInitialized = 0x7C;
            static constexpr std::uintptr_t Playspace = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PlayspaceUsers", 0x48, "ArrayProperty"},
            {"bIsInitialized", 0x7C, "BoolProperty"},
            {"Playspace", 0x80, "ObjectProperty"},
        }};
    };

    struct Playspace_ActorComponentInfo
    {
        static constexpr std::string_view Name = "Playspace_ActorComponentInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "Playspace_ComponentInfo_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentClass = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ComponentClass", 0x10, "ClassProperty"},
        }};
    };

    struct Playspace_ComponentInfo_Base
    {
        static constexpr std::string_view Name = "Playspace_ComponentInfo_Base";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bCreateOnClient = 0x8;
            static constexpr std::uintptr_t bCreateOnServer = 0x9;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bCreateOnClient", 0x8, "BoolProperty"},
            {"bCreateOnServer", 0x9, "BoolProperty"},
        }};
    };

    struct Playspace_ControllerComponentInfo
    {
        static constexpr std::string_view Name = "Playspace_ControllerComponentInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "Playspace_ComponentInfo_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentClass = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ComponentClass", 0x10, "ClassProperty"},
        }};
    };

    struct Playspace_PlayerStateComponentInfo
    {
        static constexpr std::string_view Name = "Playspace_PlayerStateComponentInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "Playspace_ComponentInfo_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentClass = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ComponentClass", 0x10, "ClassProperty"},
        }};
    };

    struct ReplicatedSpawnInfo
    {
        static constexpr std::string_view Name = "ReplicatedSpawnInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnLocation = 0x0;
            static constexpr std::uintptr_t SpawnRotation = 0x18;
            static constexpr std::uintptr_t ServerSpawnTime = 0x30;
            static constexpr std::uintptr_t LastLocation = 0x38;
            static constexpr std::uintptr_t MinTimeForCameraFadeTransition = 0x50;
            static constexpr std::uintptr_t bIsPlayerRespawning = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SpawnLocation", 0x0, "StructProperty"},
            {"SpawnRotation", 0x18, "StructProperty"},
            {"ServerSpawnTime", 0x30, "FloatProperty"},
            {"LastLocation", 0x38, "StructProperty"},
            {"MinTimeForCameraFadeTransition", 0x50, "FloatProperty"},
            {"bIsPlayerRespawning", 0x54, "BoolProperty"},
        }};
    };

    struct WaitForDiscoverablePlayspaceWithFilterAction
    {
        static constexpr std::string_view Name = "WaitForDiscoverablePlayspaceWithFilterAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFoundPlayspace = 0x30;
            static constexpr std::uintptr_t Filter = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnFoundPlayspace", 0x30, "MulticastInlineDelegateProperty"},
            {"Filter", 0x40, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "Cancel",
            "WaitForDiscoverablePlayspaceMatchingFilter",
            "WaitForDiscoverablePlayspaceOfTypeForActor",
        }};
    };

}
