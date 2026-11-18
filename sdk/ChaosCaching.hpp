#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ChaosCaching
{
    struct BreakingEvent
    {
        static constexpr std::string_view Name = "BreakingEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CacheEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0x8;
            static constexpr std::uintptr_t Location = 0x10;
            static constexpr std::uintptr_t orientation = 0x30;
            static constexpr std::uintptr_t Velocity = 0x50;
            static constexpr std::uintptr_t AngularVelocity = 0x68;
            static constexpr std::uintptr_t Mass = 0x80;
            static constexpr std::uintptr_t BoundingBoxMin = 0x88;
            static constexpr std::uintptr_t BoundingBoxMax = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Index", 0x8, "IntProperty"},
            {"Location", 0x10, "StructProperty"},
            {"orientation", 0x30, "StructProperty"},
            {"Velocity", 0x50, "StructProperty"},
            {"AngularVelocity", 0x68, "StructProperty"},
            {"Mass", 0x80, "FloatProperty"},
            {"BoundingBoxMin", 0x88, "StructProperty"},
            {"BoundingBoxMax", 0xA0, "StructProperty"},
        }};
    };

    struct CacheEventBase
    {
        static constexpr std::string_view Name = "CacheEventBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CacheEventTrack
    {
        static constexpr std::string_view Name = "CacheEventTrack";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Struct = 0x8;
            static constexpr std::uintptr_t Timestamps = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Struct", 0x8, "ObjectProperty"},
            {"Timestamps", 0x10, "ArrayProperty"},
        }};
    };

    struct CacheSpawnableTemplate
    {
        static constexpr std::string_view Name = "CacheSpawnableTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DuplicatedTemplate = 0x0;
            static constexpr std::uintptr_t InitialTransform = 0x10;
            static constexpr std::uintptr_t ComponentTransform = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DuplicatedTemplate", 0x0, "ObjectProperty"},
            {"InitialTransform", 0x10, "StructProperty"},
            {"ComponentTransform", 0x70, "StructProperty"},
        }};
    };

    struct ChaosCache
    {
        static constexpr std::string_view Name = "ChaosCache";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RecordedDuration = 0x28;
            static constexpr std::uintptr_t NumRecordedFrames = 0x2C;
            static constexpr std::uintptr_t InterpolationMode = 0x30;
            static constexpr std::uintptr_t TrackToParticle = 0x38;
            static constexpr std::uintptr_t ParticleTracks = 0x48;
            static constexpr std::uintptr_t ChannelCurveToParticle = 0x58;
            static constexpr std::uintptr_t ChannelsTracks = 0x68;
            static constexpr std::uintptr_t CompressedChannelsTracks = 0x78;
            static constexpr std::uintptr_t CurveData = 0x88;
            static constexpr std::uintptr_t NamedTransformTracks = 0x98;
            static constexpr std::uintptr_t bCompressChannels = 0xA8;
            static constexpr std::uintptr_t ChannelsCompressionErrorThreshold = 0xAC;
            static constexpr std::uintptr_t ChannelsCompressionSampleRate = 0xB0;
            static constexpr std::uintptr_t CacheData = 0xB8;
            static constexpr std::uintptr_t EventTracks = 0xC8;
            static constexpr std::uintptr_t Spawnable = 0xE0;
            static constexpr std::uintptr_t AdapterGuid = 0x1B0;
            static constexpr std::uintptr_t Version = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"RecordedDuration", 0x28, "FloatProperty"},
            {"NumRecordedFrames", 0x2C, "UInt32Property"},
            {"InterpolationMode", 0x30, "EnumProperty"},
            {"TrackToParticle", 0x38, "ArrayProperty"},
            {"ParticleTracks", 0x48, "ArrayProperty"},
            {"ChannelCurveToParticle", 0x58, "ArrayProperty"},
            {"ChannelsTracks", 0x68, "MapProperty"},
            {"CompressedChannelsTracks", 0x78, "MapProperty"},
            {"CurveData", 0x88, "MapProperty"},
            {"NamedTransformTracks", 0x98, "MapProperty"},
            {"bCompressChannels", 0xA8, "BoolProperty"},
            {"ChannelsCompressionErrorThreshold", 0xAC, "FloatProperty"},
            {"ChannelsCompressionSampleRate", 0xB0, "FloatProperty"},
            {"CacheData", 0xB8, "InterfaceProperty"},
            {"EventTracks", 0xC8, "MapProperty"},
            {"Spawnable", 0xE0, "StructProperty"},
            {"AdapterGuid", 0x1B0, "StructProperty"},
            {"Version", 0x1C0, "IntProperty"},
        }};
    };

    struct ChaosCacheCollection
    {
        static constexpr std::string_view Name = "ChaosCacheCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Caches = 0x28;
            static constexpr std::uintptr_t InterpolationMode = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Caches", 0x28, "ArrayProperty"},
            {"InterpolationMode", 0x38, "EnumProperty"},
        }};
    };

    struct ChaosCacheData
    {
        static constexpr std::string_view Name = "ChaosCacheData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ChaosCacheManager
    {
        static constexpr std::string_view Name = "ChaosCacheManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t CacheCollection = 0x278;
            static constexpr std::uintptr_t bCreateNewCacheCollectionAssetOnRecord = 0x280;
            static constexpr std::uintptr_t CacheMode = 0x281;
            static constexpr std::uintptr_t StartMode = 0x282;
            static constexpr std::uintptr_t StartTime = 0x284;
            static constexpr std::uintptr_t bStartOnBeginPlay = 0x288;
            static constexpr std::uintptr_t bReplayEventsInStaticPoseMode = 0x289;
            static constexpr std::uintptr_t ObservedComponents = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CacheCollection", 0x278, "ObjectProperty"},
            {"bCreateNewCacheCollectionAssetOnRecord", 0x280, "BoolProperty"},
            {"CacheMode", 0x281, "EnumProperty"},
            {"StartMode", 0x282, "EnumProperty"},
            {"StartTime", 0x284, "FloatProperty"},
            {"bStartOnBeginPlay", 0x288, "BoolProperty"},
            {"bReplayEventsInStaticPoseMode", 0x289, "BoolProperty"},
            {"ObservedComponents", 0x290, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 16> FunctionNames{{
            "ClearObservedComponents",
            "EnablePlayback",
            "EnablePlaybackByCache",
            "FindOrAddObservedComponent",
            "IsRecording",
            "RemoveObservedComponent",
            "ResetAllComponentTransforms",
            "ResetSingleTransform",
            "SetCacheCollection",
            "SetCurrentTime",
            "SetStartTime",
            "Start",
            "Stop",
            "TriggerAll",
            "TriggerComponent",
            "TriggerComponentByCache",
        }};
    };

    struct ChaosCachePlayer
    {
        static constexpr std::string_view Name = "ChaosCachePlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChaosCacheManager";
        struct Offsets
        {
            static constexpr std::uintptr_t CacheCollection = 0x278;
            static constexpr std::uintptr_t bCreateNewCacheCollectionAssetOnRecord = 0x280;
            static constexpr std::uintptr_t CacheMode = 0x281;
            static constexpr std::uintptr_t StartMode = 0x282;
            static constexpr std::uintptr_t StartTime = 0x284;
            static constexpr std::uintptr_t bStartOnBeginPlay = 0x288;
            static constexpr std::uintptr_t bReplayEventsInStaticPoseMode = 0x289;
            static constexpr std::uintptr_t ObservedComponents = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CacheCollection", 0x278, "ObjectProperty"},
            {"bCreateNewCacheCollectionAssetOnRecord", 0x280, "BoolProperty"},
            {"CacheMode", 0x281, "EnumProperty"},
            {"StartMode", 0x282, "EnumProperty"},
            {"StartTime", 0x284, "FloatProperty"},
            {"bStartOnBeginPlay", 0x288, "BoolProperty"},
            {"bReplayEventsInStaticPoseMode", 0x289, "BoolProperty"},
            {"ObservedComponents", 0x290, "ArrayProperty"},
        }};
    };

    struct CollisionEvent
    {
        static constexpr std::string_view Name = "CollisionEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CacheEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0x8;
            static constexpr std::uintptr_t AccumulatedImpulse = 0x20;
            static constexpr std::uintptr_t Normal = 0x38;
            static constexpr std::uintptr_t Velocity1 = 0x50;
            static constexpr std::uintptr_t Velocity2 = 0x68;
            static constexpr std::uintptr_t DeltaVelocity1 = 0x80;
            static constexpr std::uintptr_t DeltaVelocity2 = 0x98;
            static constexpr std::uintptr_t AngularVelocity1 = 0xB0;
            static constexpr std::uintptr_t AngularVelocity2 = 0xC8;
            static constexpr std::uintptr_t Mass1 = 0xE0;
            static constexpr std::uintptr_t Mass2 = 0xE4;
            static constexpr std::uintptr_t PenetrationDepth = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Location", 0x8, "StructProperty"},
            {"AccumulatedImpulse", 0x20, "StructProperty"},
            {"Normal", 0x38, "StructProperty"},
            {"Velocity1", 0x50, "StructProperty"},
            {"Velocity2", 0x68, "StructProperty"},
            {"DeltaVelocity1", 0x80, "StructProperty"},
            {"DeltaVelocity2", 0x98, "StructProperty"},
            {"AngularVelocity1", 0xB0, "StructProperty"},
            {"AngularVelocity2", 0xC8, "StructProperty"},
            {"Mass1", 0xE0, "FloatProperty"},
            {"Mass2", 0xE4, "FloatProperty"},
            {"PenetrationDepth", 0xE8, "FloatProperty"},
        }};
    };

    struct CompressedRichCurves
    {
        static constexpr std::string_view Name = "CompressedRichCurves";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CompressedRichCurves = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CompressedRichCurves", 0x0, "ArrayProperty"},
        }};
    };

    struct EnableStateEvent
    {
        static constexpr std::string_view Name = "EnableStateEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CacheEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0x8;
            static constexpr std::uintptr_t bEnable = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Index", 0x8, "IntProperty"},
            {"bEnable", 0xC, "BoolProperty"},
        }};
    };

    struct MovieSceneChaosCacheParams
    {
        static constexpr std::string_view Name = "MovieSceneChaosCacheParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneBaseCacheParams";
        struct Offsets
        {
            static constexpr std::uintptr_t CacheCollection = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CacheCollection", 0x20, "ObjectProperty"},
        }};
    };

    struct MovieSceneChaosCacheSection
    {
        static constexpr std::string_view Name = "MovieSceneChaosCacheSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneBaseCacheSection";
        struct Offsets
        {
            static constexpr std::uintptr_t Params = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Params", 0x148, "StructProperty"},
        }};
    };

    struct MovieSceneChaosCacheSectionTemplate
    {
        static constexpr std::string_view Name = "MovieSceneChaosCacheSectionTemplate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneEvalTemplate";
        struct Offsets
        {
            static constexpr std::uintptr_t Params = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Params", 0x20, "StructProperty"},
        }};
    };

    struct MovieSceneChaosCacheSectionTemplateParameters
    {
        static constexpr std::string_view Name = "MovieSceneChaosCacheSectionTemplateParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneBaseCacheSectionTemplateParameters";
        struct Offsets
        {
            static constexpr std::uintptr_t ChaosCacheParams = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChaosCacheParams", 0x8, "StructProperty"},
        }};
    };

    struct MovieSceneChaosCacheTrack
    {
        static constexpr std::string_view Name = "MovieSceneChaosCacheTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneNameableTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimationSections = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AnimationSections", 0x100, "ArrayProperty"},
        }};
    };

    struct MovieSceneSpawnableChaosCacheBinding
    {
        static constexpr std::string_view Name = "MovieSceneSpawnableChaosCacheBinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSpawnableActorBinding";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorTemplate = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActorTemplate", 0x38, "ObjectProperty"},
        }};
    };

    struct ObservedComponent
    {
        static constexpr std::string_view Name = "ObservedComponent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CacheName = 0x0;
            static constexpr std::uintptr_t ComponentRef = 0x8;
            static constexpr std::uintptr_t SoftComponentRef = 0x30;
            static constexpr std::uintptr_t bIsSimulating = 0x70;
            static constexpr std::uintptr_t bPlaybackEnabled = 0x71;
            static constexpr std::uintptr_t USDCacheDirectory = 0x78;
            static constexpr std::uintptr_t bHasNotifyBreaks = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CacheName", 0x0, "NameProperty"},
            {"ComponentRef", 0x8, "StructProperty"},
            {"SoftComponentRef", 0x30, "StructProperty"},
            {"bIsSimulating", 0x70, "BoolProperty"},
            {"bPlaybackEnabled", 0x71, "BoolProperty"},
            {"USDCacheDirectory", 0x78, "StructProperty"},
            {"bHasNotifyBreaks", 0x88, "BoolProperty"},
        }};
    };

    struct ParticleTransformTrack
    {
        static constexpr std::string_view Name = "ParticleTransformTrack";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RawTransformTrack = 0x0;
            static constexpr std::uintptr_t BeginOffset = 0x30;
            static constexpr std::uintptr_t bDeactivateOnEnd = 0x34;
            static constexpr std::uintptr_t KeyTimestamps = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RawTransformTrack", 0x0, "StructProperty"},
            {"BeginOffset", 0x30, "FloatProperty"},
            {"bDeactivateOnEnd", 0x34, "BoolProperty"},
            {"KeyTimestamps", 0x38, "ArrayProperty"},
        }};
    };

    struct PerParticleCacheData
    {
        static constexpr std::string_view Name = "PerParticleCacheData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TransformData = 0x0;
            static constexpr std::uintptr_t CurveData = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TransformData", 0x0, "StructProperty"},
            {"CurveData", 0x48, "MapProperty"},
        }};
    };

    struct RichCurves
    {
        static constexpr std::string_view Name = "RichCurves";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RichCurves = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RichCurves", 0x0, "ArrayProperty"},
        }};
    };

    struct TrailingEvent
    {
        static constexpr std::string_view Name = "TrailingEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CacheEventBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0x8;
            static constexpr std::uintptr_t Location = 0x10;
            static constexpr std::uintptr_t orientation = 0x30;
            static constexpr std::uintptr_t Velocity = 0x50;
            static constexpr std::uintptr_t AngularVelocity = 0x68;
            static constexpr std::uintptr_t BoundingBoxMin = 0x80;
            static constexpr std::uintptr_t BoundingBoxMax = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Index", 0x8, "IntProperty"},
            {"Location", 0x10, "StructProperty"},
            {"orientation", 0x30, "StructProperty"},
            {"Velocity", 0x50, "StructProperty"},
            {"AngularVelocity", 0x68, "StructProperty"},
            {"BoundingBoxMin", 0x80, "StructProperty"},
            {"BoundingBoxMax", 0x98, "StructProperty"},
        }};
    };

}
