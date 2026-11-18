#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EpicMediaUtilities
{
    struct EpicMediaAudioMetadataDataExt
    {
        static constexpr std::string_view Name = "EpicMediaAudioMetadataDataExt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ShortName = 0x0;
            static constexpr std::uintptr_t SongId = 0x10;
            static constexpr std::uintptr_t Title = 0x18;
            static constexpr std::uintptr_t Artist = 0x28;
            static constexpr std::uintptr_t Album = 0x38;
            static constexpr std::uintptr_t Genre = 0x48;
            static constexpr std::uintptr_t Year = 0x58;
            static constexpr std::uintptr_t Difficulty = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ShortName", 0x0, "StrProperty"},
            {"SongId", 0x10, "IntProperty"},
            {"Title", 0x18, "StrProperty"},
            {"Artist", 0x28, "StrProperty"},
            {"Album", 0x38, "StrProperty"},
            {"Genre", 0x48, "StrProperty"},
            {"Year", 0x58, "IntProperty"},
            {"Difficulty", 0x60, "MapProperty"},
        }};
    };

    struct EpicMediaAudioMetadataExt
    {
        static constexpr std::string_view Name = "EpicMediaAudioMetadataExt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Tracks = 0x0;
            static constexpr std::uintptr_t Pans = 0x10;
            static constexpr std::uintptr_t Volumes = 0x20;
            static constexpr std::uintptr_t Midi = 0x30;
            static constexpr std::uintptr_t MetadataData = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Tracks", 0x0, "MapProperty"},
            {"Pans", 0x10, "ArrayProperty"},
            {"Volumes", 0x20, "ArrayProperty"},
            {"Midi", 0x30, "ArrayProperty"},
            {"MetadataData", 0x40, "StructProperty"},
        }};
    };

    struct EpicMediaAudioMetadataTrackExt
    {
        static constexpr std::string_view Name = "EpicMediaAudioMetadataTrackExt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackData = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TrackData", 0x0, "MapProperty"},
        }};
    };

    struct EpicMediaAudioMetadataTrackIndicesExt
    {
        static constexpr std::string_view Name = "EpicMediaAudioMetadataTrackIndicesExt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Indices = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Indices", 0x0, "ArrayProperty"},
        }};
    };

    struct EpicMediaAudioOnlyPeriodDataExt
    {
        static constexpr std::string_view Name = "EpicMediaAudioOnlyPeriodDataExt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Color = 0x0;
            static constexpr std::uintptr_t bColorSet = 0x10;
            static constexpr std::uintptr_t StartFrame = 0x18;
            static constexpr std::uintptr_t EndFrame = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Color", 0x0, "StructProperty"},
            {"bColorSet", 0x10, "BoolProperty"},
            {"StartFrame", 0x18, "DoubleProperty"},
            {"EndFrame", 0x20, "DoubleProperty"},
        }};
    };

    struct EpicMediaExtraMetadataExt
    {
        static constexpr std::string_view Name = "EpicMediaExtraMetadataExt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetID = 0x0;
            static constexpr std::uintptr_t BaseURLs = 0x10;
            static constexpr std::uintptr_t BaseUrl = 0x20;
            static constexpr std::uintptr_t Version = 0x30;
            static constexpr std::uintptr_t ExpiresAt = 0x38;
            static constexpr std::uintptr_t bSupportsCaching = 0x40;
            static constexpr std::uintptr_t bShareLock = 0x41;
            static constexpr std::uintptr_t UserContentProtection = 0x48;
            static constexpr std::uintptr_t Limits = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"AssetID", 0x0, "StrProperty"},
            {"BaseURLs", 0x10, "ArrayProperty"},
            {"BaseUrl", 0x20, "StrProperty"},
            {"Version", 0x30, "Int64Property"},
            {"ExpiresAt", 0x38, "Int64Property"},
            {"bSupportsCaching", 0x40, "BoolProperty"},
            {"bShareLock", 0x41, "BoolProperty"},
            {"UserContentProtection", 0x48, "StrProperty"},
            {"Limits", 0x58, "StrProperty"},
        }};
    };

    struct EpicMediaImageDataExt
    {
        static constexpr std::string_view Name = "EpicMediaImageDataExt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Url = 0x0;
            static constexpr std::uintptr_t FullUrl = 0x10;
            static constexpr std::uintptr_t Width = 0x20;
            static constexpr std::uintptr_t Height = 0x24;
            static constexpr std::uintptr_t AspectRatio = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Url", 0x0, "StrProperty"},
            {"FullUrl", 0x10, "StrProperty"},
            {"Width", 0x20, "IntProperty"},
            {"Height", 0x24, "IntProperty"},
            {"AspectRatio", 0x28, "FloatProperty"},
        }};
    };

    struct EpicMediaMetadataExt
    {
        static constexpr std::string_view Name = "EpicMediaMetadataExt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Playlists = 0x0;
            static constexpr std::uintptr_t StateStreamPlaylists = 0x10;
            static constexpr std::uintptr_t SelectedPlaylists = 0x20;
            static constexpr std::uintptr_t Type = 0x30;
            static constexpr std::uintptr_t Envelope = 0x40;
            static constexpr std::uintptr_t Limits = 0x50;
            static constexpr std::uintptr_t Subtitles = 0x60;
            static constexpr std::uintptr_t UserContentProtection = 0x70;
            static constexpr std::uintptr_t Sharelock = 0x80;
            static constexpr std::uintptr_t AudioOnly = 0x81;
            static constexpr std::uintptr_t AspectRatio = 0x84;
            static constexpr std::uintptr_t PartySync = 0x88;
            static constexpr std::uintptr_t Live = 0x89;
            static constexpr std::uintptr_t DenyHTTPCode = 0x90;
            static constexpr std::uintptr_t ResponseHTTPCode = 0xA0;
            static constexpr std::uintptr_t bTreatCDNSwitchAsFatal = 0xA4;
            static constexpr std::uintptr_t AudioMetadata = 0x120;
            static constexpr std::uintptr_t bQuicksilverEP = 0x1D0;
            static constexpr std::uintptr_t ExtraMetadata = 0x1D8;
            static constexpr std::uintptr_t RequestType = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"Playlists", 0x0, "ArrayProperty"},
            {"StateStreamPlaylists", 0x10, "ArrayProperty"},
            {"SelectedPlaylists", 0x20, "ArrayProperty"},
            {"Type", 0x30, "StrProperty"},
            {"Envelope", 0x40, "StrProperty"},
            {"Limits", 0x50, "StrProperty"},
            {"Subtitles", 0x60, "StrProperty"},
            {"UserContentProtection", 0x70, "StrProperty"},
            {"Sharelock", 0x80, "BoolProperty"},
            {"AudioOnly", 0x81, "BoolProperty"},
            {"AspectRatio", 0x84, "FloatProperty"},
            {"PartySync", 0x88, "BoolProperty"},
            {"Live", 0x89, "BoolProperty"},
            {"DenyHTTPCode", 0x90, "StrProperty"},
            {"ResponseHTTPCode", 0xA0, "IntProperty"},
            {"bTreatCDNSwitchAsFatal", 0xA4, "BoolProperty"},
            {"AudioMetadata", 0x120, "StructProperty"},
            {"bQuicksilverEP", 0x1D0, "BoolProperty"},
            {"ExtraMetadata", 0x1D8, "StructProperty"},
            {"RequestType", 0x240, "EnumProperty"},
        }};
    };

    struct EpicMediaPlaylistExt
    {
        static constexpr std::string_view Name = "EpicMediaPlaylistExt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Language = 0x0;
            static constexpr std::uintptr_t Type = 0x10;
            static constexpr std::uintptr_t Url = 0x20;
            static constexpr std::uintptr_t RelUrl = 0x30;
            static constexpr std::uintptr_t Data = 0x40;
            static constexpr std::uintptr_t duration = 0x50;
            static constexpr std::uintptr_t FPS = 0x58;
            static constexpr std::uintptr_t Images = 0x60;
            static constexpr std::uintptr_t AudioOnlyPeriods = 0x70;
            static constexpr std::uintptr_t VolumeChanges = 0x80;
            static constexpr std::uintptr_t SkipBoundaryTime = 0x90;
            static constexpr std::uintptr_t PreEndEventTime = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Language", 0x0, "StrProperty"},
            {"Type", 0x10, "StrProperty"},
            {"Url", 0x20, "StrProperty"},
            {"RelUrl", 0x30, "StrProperty"},
            {"Data", 0x40, "StrProperty"},
            {"duration", 0x50, "DoubleProperty"},
            {"FPS", 0x58, "DoubleProperty"},
            {"Images", 0x60, "ArrayProperty"},
            {"AudioOnlyPeriods", 0x70, "ArrayProperty"},
            {"VolumeChanges", 0x80, "ArrayProperty"},
            {"SkipBoundaryTime", 0x90, "DoubleProperty"},
            {"PreEndEventTime", 0x98, "DoubleProperty"},
        }};
    };

    struct EpicMediaRegionLockExt
    {
        static constexpr std::string_view Name = "EpicMediaRegionLockExt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowOnError = 0x0;
            static constexpr std::uintptr_t Type = 0x8;
            static constexpr std::uintptr_t AllowList = 0x18;
            static constexpr std::uintptr_t DenyList = 0x28;
            static constexpr std::uintptr_t Limits = 0x38;
            static constexpr std::uintptr_t ContentID = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AllowOnError", 0x0, "BoolProperty"},
            {"Type", 0x8, "StrProperty"},
            {"AllowList", 0x18, "ArrayProperty"},
            {"DenyList", 0x28, "ArrayProperty"},
            {"Limits", 0x38, "MapProperty"},
            {"ContentID", 0x48, "StrProperty"},
        }};
    };

    struct EpicMediaServerTime
    {
        static constexpr std::string_view Name = "EpicMediaServerTime";
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

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "ClientReportServerTime",
            "GetTimeUtc",
            "ServerRequestServerTime",
        }};
    };

    struct EpicMediaVolumeChangeDataExt
    {
        static constexpr std::string_view Name = "EpicMediaVolumeChangeDataExt";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Frame = 0x0;
            static constexpr std::uintptr_t Level = 0x8;
            static constexpr std::uintptr_t Lerp = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Frame", 0x0, "DoubleProperty"},
            {"Level", 0x8, "DoubleProperty"},
            {"Lerp", 0x10, "DoubleProperty"},
        }};
    };

}
