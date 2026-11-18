#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DaySequence
{
    struct BaseDaySequenceActor
    {
        static constexpr std::string_view Name = "BaseDaySequenceActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DaySequenceActor";
        struct Offsets
        {
            static constexpr std::uintptr_t SunRootComponent = 0x3D0;
            static constexpr std::uintptr_t SunComponent = 0x3D8;
            static constexpr std::uintptr_t SkyAtmosphereComponent = 0x3E0;
            static constexpr std::uintptr_t SkyLightComponent = 0x3E8;
            static constexpr std::uintptr_t ExponentialHeightFogComponent = 0x3F0;
            static constexpr std::uintptr_t VolumetricCloudComponent = 0x3F8;
            static constexpr std::uintptr_t SkySphereComponent = 0x400;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SunRootComponent", 0x3D0, "ObjectProperty"},
            {"SunComponent", 0x3D8, "ObjectProperty"},
            {"SkyAtmosphereComponent", 0x3E0, "ObjectProperty"},
            {"SkyLightComponent", 0x3E8, "ObjectProperty"},
            {"ExponentialHeightFogComponent", 0x3F0, "ObjectProperty"},
            {"VolumetricCloudComponent", 0x3F8, "ObjectProperty"},
            {"SkySphereComponent", 0x400, "ObjectProperty"},
        }};
    };

    struct DaySequence
    {
        static constexpr std::string_view Name = "DaySequence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSequence";
        struct Offsets
        {
            static constexpr std::uintptr_t MovieScene = 0x70;
            static constexpr std::uintptr_t BindingReferences = 0x78;
            static constexpr std::uintptr_t DirectorClass = 0xB8;
            static constexpr std::uintptr_t AssetUserData = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MovieScene", 0x70, "ObjectProperty"},
            {"BindingReferences", 0x78, "StructProperty"},
            {"DirectorClass", 0xB8, "ClassProperty"},
            {"AssetUserData", 0xC0, "ArrayProperty"},
        }};
    };

    struct DaySequenceActor
    {
        static constexpr std::string_view Name = "DaySequenceActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Info";
        struct Offsets
        {
            static constexpr std::uintptr_t DayInterpCurve = 0x288;
            static constexpr std::uintptr_t DaySequenceCollection = 0x290;
            static constexpr std::uintptr_t DaySequenceCollections = 0x298;
            static constexpr std::uintptr_t Bias = 0x2A8;
            static constexpr std::uintptr_t BindingOverrides = 0x2B0;
            static constexpr std::uintptr_t bReplicatePlayback = 0x2B8;
            static constexpr std::uintptr_t SequencePlayer = 0x2C0;
            static constexpr std::uintptr_t RootSequence = 0x2C8;
            static constexpr std::uintptr_t SequenceUpdateInterval = 0x2D0;
            static constexpr std::uintptr_t bRunDayCycle = 0x2D4;
            static constexpr std::uintptr_t bUseInterpCurve = 0x2D5;
            static constexpr std::uintptr_t DayLength = 0x2D8;
            static constexpr std::uintptr_t TimePerCycle = 0x2E4;
            static constexpr std::uintptr_t InitialTimeOfDay = 0x2F0;
            static constexpr std::uintptr_t CameraModifierManager = 0x310;
            static constexpr std::uintptr_t TrackConditionMap = 0x3C0;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"DayInterpCurve", 0x288, "ObjectProperty"},
            {"DaySequenceCollection", 0x290, "ObjectProperty"},
            {"DaySequenceCollections", 0x298, "ArrayProperty"},
            {"Bias", 0x2A8, "IntProperty"},
            {"BindingOverrides", 0x2B0, "ObjectProperty"},
            {"bReplicatePlayback", 0x2B8, "BoolProperty"},
            {"SequencePlayer", 0x2C0, "ObjectProperty"},
            {"RootSequence", 0x2C8, "ObjectProperty"},
            {"SequenceUpdateInterval", 0x2D0, "FloatProperty"},
            {"bRunDayCycle", 0x2D4, "BoolProperty"},
            {"bUseInterpCurve", 0x2D5, "BoolProperty"},
            {"DayLength", 0x2D8, "StructProperty"},
            {"TimePerCycle", 0x2E4, "StructProperty"},
            {"InitialTimeOfDay", 0x2F0, "StructProperty"},
            {"CameraModifierManager", 0x310, "ObjectProperty"},
            {"TrackConditionMap", 0x3C0, "MapProperty"},
        }};

        inline static constexpr std::array<std::string_view, 21> FunctionNames{{
            "ContainsDaySequence",
            "GetApparentTimeOfDay",
            "GetDayLength",
            "GetInitialTimeOfDay",
            "GetPlayRate",
            "GetStaticTimeOfDay",
            "GetTimeOfDay",
            "GetTimeOfDayPreview",
            "GetTimePerCycle",
            "HasStaticTimeOfDay",
            "IsPaused",
            "IsPlaying",
            "Multicast_SetTimePerCycle",
            "Pause",
            "Play",
            "SetPlayRate",
            "SetReplicatePlayback",
            "SetTimeOfDay",
            "SetTimeOfDayPreview",
            "StartDaySequenceUpdateTimer",
            "StopDaySequenceUpdateTimer",
        }};
    };

    struct DaySequenceBindingReference
    {
        static constexpr std::string_view Name = "DaySequenceBindingReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ExternalObjectPath = 0x0;
            static constexpr std::uintptr_t ObjectPath = 0x20;
            static constexpr std::uintptr_t Specialization = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ExternalObjectPath", 0x0, "SoftObjectProperty"},
            {"ObjectPath", 0x20, "StrProperty"},
            {"Specialization", 0x30, "EnumProperty"},
        }};
    };

    struct DaySequenceBindingReferenceArray
    {
        static constexpr std::string_view Name = "DaySequenceBindingReferenceArray";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t References = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"References", 0x0, "ArrayProperty"},
        }};
    };

    struct DaySequenceBindingReferences
    {
        static constexpr std::string_view Name = "DaySequenceBindingReferences";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BindingIdToReferences = 0x0;
            static constexpr std::uintptr_t AnimSequenceInstances = 0x10;
            static constexpr std::uintptr_t SpecializedReferenceToGuid = 0x20;
            static constexpr std::uintptr_t GuidToSpecializedReference = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BindingIdToReferences", 0x0, "MapProperty"},
            {"AnimSequenceInstances", 0x10, "SetProperty"},
            {"SpecializedReferenceToGuid", 0x20, "MapProperty"},
            {"GuidToSpecializedReference", 0x30, "MapProperty"},
        }};
    };

    struct DaySequenceCameraModifier
    {
        static constexpr std::string_view Name = "DaySequenceCameraModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CameraModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x50, "StructProperty"},
        }};
    };

    struct DaySequenceCameraModifierManager
    {
        static constexpr std::string_view Name = "DaySequenceCameraModifierManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DaySequenceCheatManagerExtension
    {
        static constexpr std::string_view Name = "DaySequenceCheatManagerExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CheatManagerExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "SetTimeOfDay",
            "SetTimeOfDaySpeed",
        }};
    };

    struct DaySequenceCollectionAsset
    {
        static constexpr std::string_view Name = "DaySequenceCollectionAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DaySequences = 0x28;
            static constexpr std::uintptr_t ProceduralDaySequences = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DaySequences", 0x28, "ArrayProperty"},
            {"ProceduralDaySequences", 0x38, "ArrayProperty"},
        }};
    };

    struct DaySequenceCollectionEntry
    {
        static constexpr std::string_view Name = "DaySequenceCollectionEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Sequence = 0x0;
            static constexpr std::uintptr_t BiasOffset = 0x8;
            static constexpr std::uintptr_t Conditions = 0x10;
            static constexpr std::uintptr_t bEnableHierarchicalBlending = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Sequence", 0x0, "ObjectProperty"},
            {"BiasOffset", 0x8, "IntProperty"},
            {"Conditions", 0x10, "StructProperty"},
            {"bEnableHierarchicalBlending", 0x20, "BoolProperty"},
        }};
    };

    struct DaySequenceConditionSet
    {
        static constexpr std::string_view Name = "DaySequenceConditionSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Conditions = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Conditions", 0x0, "MapProperty"},
        }};
    };

    struct DaySequenceConditionTag
    {
        static constexpr std::string_view Name = "DaySequenceConditionTag";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ConditionName = 0x28;
            static constexpr std::uintptr_t InitializationPhase = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ConditionName", 0x28, "StrProperty"},
            {"InitializationPhase", 0x38, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "BroadcastOnConditionValueChanged",
            "Evaluate",
            "SetupOnConditionValueChanged",
        }};
    };

    struct DaySequenceDirector
    {
        static constexpr std::string_view Name = "DaySequenceDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t player = 0x28;
            static constexpr std::uintptr_t SubSequenceID = 0x30;
            static constexpr std::uintptr_t MovieScenePlayerIndex = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"player", 0x28, "ObjectProperty"},
            {"SubSequenceID", 0x30, "IntProperty"},
            {"MovieScenePlayerIndex", 0x34, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "GetBoundActor",
            "GetBoundActors",
            "GetBoundObject",
            "GetBoundObjects",
            "GetCurrentTime",
            "GetRootSequenceTime",
            "GetSequence",
            "OnCreated",
        }};
    };

    struct DaySequenceModifierComponent
    {
        static constexpr std::string_view Name = "DaySequenceModifierComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetActor = 0x240;
            static constexpr std::uintptr_t VolumeShapeComponents = 0x258;
            static constexpr std::uintptr_t WeakBlendTarget = 0x268;
            static constexpr std::uintptr_t UserDaySequence = 0x270;
            static constexpr std::uintptr_t TransientSequence = 0x278;
            static constexpr std::uintptr_t DaySequenceCollection = 0x280;
            static constexpr std::uintptr_t DaySequenceCollections = 0x288;
            static constexpr std::uintptr_t EasingFunction = 0x298;
            static constexpr std::uintptr_t Bias = 0x2A0;
            static constexpr std::uintptr_t DayNightCycleTime = 0x2A4;
            static constexpr std::uintptr_t BlendAmount = 0x2A8;
            static constexpr std::uintptr_t BlendTime = 0x2AC;
            static constexpr std::uintptr_t UserBlendWeight = 0x2B0;
            static constexpr std::uintptr_t DayNightCycle = 0x2B4;
            static constexpr std::uintptr_t Mode = 0x2B5;
            static constexpr std::uintptr_t BlendPolicy = 0x2B6;
            static constexpr std::uintptr_t OnPostReinitializeSubSequences = 0x2B8;
            static constexpr std::uintptr_t OnPostEnableModifier = 0x2C8;
            static constexpr std::uintptr_t bForceSmoothBlending = 0x2D8;
            static constexpr std::uintptr_t bIgnoreBias = 0x2D8;
            static constexpr std::uintptr_t bIsComponentEnabled = 0x2D8;
            static constexpr std::uintptr_t bIsEnabled = 0x2D8;
            static constexpr std::uintptr_t bPreview = 0x2D8;
            static constexpr std::uintptr_t bSmoothBlending = 0x2D8;
            static constexpr std::uintptr_t bUseCollection = 0x2D8;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"TargetActor", 0x240, "ObjectProperty"},
            {"VolumeShapeComponents", 0x258, "ArrayProperty"},
            {"WeakBlendTarget", 0x268, "WeakObjectProperty"},
            {"UserDaySequence", 0x270, "ObjectProperty"},
            {"TransientSequence", 0x278, "ObjectProperty"},
            {"DaySequenceCollection", 0x280, "ObjectProperty"},
            {"DaySequenceCollections", 0x288, "ArrayProperty"},
            {"EasingFunction", 0x298, "ObjectProperty"},
            {"Bias", 0x2A0, "IntProperty"},
            {"DayNightCycleTime", 0x2A4, "FloatProperty"},
            {"BlendAmount", 0x2A8, "FloatProperty"},
            {"BlendTime", 0x2AC, "FloatProperty"},
            {"UserBlendWeight", 0x2B0, "FloatProperty"},
            {"DayNightCycle", 0x2B4, "EnumProperty"},
            {"Mode", 0x2B5, "EnumProperty"},
            {"BlendPolicy", 0x2B6, "EnumProperty"},
            {"OnPostReinitializeSubSequences", 0x2B8, "MulticastInlineDelegateProperty"},
            {"OnPostEnableModifier", 0x2C8, "MulticastInlineDelegateProperty"},
            {"bForceSmoothBlending", 0x2D8, "BoolProperty"},
            {"bIgnoreBias", 0x2D8, "BoolProperty"},
            {"bIsComponentEnabled", 0x2D8, "BoolProperty"},
            {"bIsEnabled", 0x2D8, "BoolProperty"},
            {"bPreview", 0x2D8, "BoolProperty"},
            {"bSmoothBlending", 0x2D8, "BoolProperty"},
            {"bUseCollection", 0x2D8, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "BindToDaySequenceActor",
            "DisableComponent",
            "EnableComponent",
            "GetBlendWeight",
            "ReinitializeSubSequences",
            "SetBlendTarget",
            "UnbindFromDaySequenceActor",
        }};
    };

    struct DaySequenceModifierEasingFunction
    {
        static constexpr std::string_view Name = "DaySequenceModifierEasingFunction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DaySequenceModifierVolume
    {
        static constexpr std::string_view Name = "DaySequenceModifierVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t DaySequenceModifier = 0x278;
            static constexpr std::uintptr_t DefaultBox = 0x280;
            static constexpr std::uintptr_t DaySequenceActor = 0x288;
            static constexpr std::uintptr_t CachedPlayerController = 0x290;
            static constexpr std::uintptr_t CachedPlayer = 0x298;
            static constexpr std::uintptr_t bEnableSplitscreenSupport = 0x2A8;
            static constexpr std::uintptr_t AdditionalPlayers = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"DaySequenceModifier", 0x278, "ObjectProperty"},
            {"DefaultBox", 0x280, "ObjectProperty"},
            {"DaySequenceActor", 0x288, "ObjectProperty"},
            {"CachedPlayerController", 0x290, "ObjectProperty"},
            {"CachedPlayer", 0x298, "ObjectProperty"},
            {"bEnableSplitscreenSupport", 0x2A8, "BoolProperty"},
            {"AdditionalPlayers", 0x2B0, "MapProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "OnDaySequenceActorBound",
            "OnPostEnableModifier",
        }};
    };

    struct DaySequencePlaybackParams
    {
        static constexpr std::string_view Name = "DaySequencePlaybackParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DaySequencePlayer
    {
        static constexpr std::string_view Name = "DaySequencePlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Observer = 0xD8;
            static constexpr std::uintptr_t OnPlay = 0xE8;
            static constexpr std::uintptr_t OnPlayReverse = 0xF8;
            static constexpr std::uintptr_t OnStop = 0x108;
            static constexpr std::uintptr_t OnPause = 0x118;
            static constexpr std::uintptr_t OnFinished = 0x128;
            static constexpr std::uintptr_t Status = 0x148;
            static constexpr std::uintptr_t Sequence = 0x150;
            static constexpr std::uintptr_t StartTime = 0x158;
            static constexpr std::uintptr_t DurationFrames = 0x15C;
            static constexpr std::uintptr_t DurationSubFrames = 0x160;
            static constexpr std::uintptr_t CurrentNumLoops = 0x164;
            static constexpr std::uintptr_t SerialNumber = 0x168;
            static constexpr std::uintptr_t PlaybackSettings = 0x16C;
            static constexpr std::uintptr_t RootTemplateInstance = 0x198;
            static constexpr std::uintptr_t NetSyncProps = 0x23C;
            static constexpr std::uintptr_t PlaybackClient = 0x250;
            static constexpr std::uintptr_t Linker = 0x300;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"Observer", 0xD8, "InterfaceProperty"},
            {"OnPlay", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnPlayReverse", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnStop", 0x108, "MulticastInlineDelegateProperty"},
            {"OnPause", 0x118, "MulticastInlineDelegateProperty"},
            {"OnFinished", 0x128, "MulticastInlineDelegateProperty"},
            {"Status", 0x148, "ByteProperty"},
            {"Sequence", 0x150, "ObjectProperty"},
            {"StartTime", 0x158, "StructProperty"},
            {"DurationFrames", 0x15C, "IntProperty"},
            {"DurationSubFrames", 0x160, "FloatProperty"},
            {"CurrentNumLoops", 0x164, "IntProperty"},
            {"SerialNumber", 0x168, "IntProperty"},
            {"PlaybackSettings", 0x16C, "StructProperty"},
            {"RootTemplateInstance", 0x198, "StructProperty"},
            {"NetSyncProps", 0x23C, "StructProperty"},
            {"PlaybackClient", 0x250, "InterfaceProperty"},
            {"Linker", 0x300, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 32> FunctionNames{{
            "GetBoundObjects",
            "GetCompletionModeOverride",
            "GetCurrentNumLoops",
            "GetDisableCameraCuts",
            "GetEndTime",
            "GetFrameDuration",
            "GetFrameRate",
            "GetObjectBindings",
            "GetPlayRate",
            "GetSequence",
            "GetSequenceName",
            "GetStartTime",
            "GoToEndAndStop",
            "IsPaused",
            "IsPlaying",
            "Play",
            "PlayLooping",
            "RPC_ExplicitServerUpdateEvent",
            "RPC_OnFinishPlaybackEvent",
            "RPC_OnPlayRateChanged",
            "RPC_OnStopEvent",
            "RemoveWeight",
            "RequestInvalidateBinding",
            "Scrub",
            "SetCompletionModeOverride",
            "SetDisableCameraCuts",
            "SetFrameRange",
            "SetFrameRate",
            "SetPlayRate",
            "SetWeight",
            "Stop",
            "StopAtCurrentTime",
        }};
    };

    struct DaySequenceProjectSettings
    {
        static constexpr std::string_view Name = "DaySequenceProjectSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bDefaultLockEngineToDisplayRate = 0x30;
            static constexpr std::uintptr_t DefaultDisplayRate = 0x38;
            static constexpr std::uintptr_t DefaultTickResolution = 0x48;
            static constexpr std::uintptr_t DefaultClockSource = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bDefaultLockEngineToDisplayRate", 0x30, "BoolProperty"},
            {"DefaultDisplayRate", 0x38, "StrProperty"},
            {"DefaultTickResolution", 0x48, "StrProperty"},
            {"DefaultClockSource", 0x58, "EnumProperty"},
        }};
    };

    struct DaySequenceStaticTimeContributor
    {
        static constexpr std::string_view Name = "DaySequenceStaticTimeContributor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BlendWeight = 0x28;
            static constexpr std::uintptr_t StaticTime = 0x2C;
            static constexpr std::uintptr_t bWantsStaticTime = 0x30;
            static constexpr std::uintptr_t TargetActor = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BlendWeight", 0x28, "FloatProperty"},
            {"StaticTime", 0x2C, "FloatProperty"},
            {"bWantsStaticTime", 0x30, "BoolProperty"},
            {"TargetActor", 0x38, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "BindToDaySequenceActor",
            "UnbindFromDaySequenceActor",
        }};
    };

    struct DaySequenceSubsystem
    {
        static constexpr std::string_view Name = "DaySequenceSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnDaySequenceActorSet = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnDaySequenceActorSet", 0x38, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetDaySequenceActor",
            "SetDaySequenceActor",
        }};
    };

    struct DaySequenceTime
    {
        static constexpr std::string_view Name = "DaySequenceTime";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Hours = 0x0;
            static constexpr std::uintptr_t Minutes = 0x4;
            static constexpr std::uintptr_t Seconds = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Hours", 0x0, "IntProperty"},
            {"Minutes", 0x4, "IntProperty"},
            {"Seconds", 0x8, "IntProperty"},
        }};
    };

    struct DaySequenceTrack
    {
        static constexpr std::string_view Name = "DaySequenceTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSubTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t Sections = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sections", 0xF8, "ArrayProperty"},
        }};
    };

    struct ProceduralDaySequence
    {
        static constexpr std::string_view Name = "ProceduralDaySequence";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Conditions = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Conditions", 0x8, "StructProperty"},
        }};
    };

    struct ProceduralDaySequenceBuilder
    {
        static constexpr std::string_view Name = "ProceduralDaySequenceBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 19> FunctionNames{{
            "AddBoolKey",
            "AddBoolOverride",
            "AddColorMaterialParameterOverride",
            "AddColorOverride",
            "AddMaterialOverride",
            "AddRotationKey",
            "AddScalarKey",
            "AddScalarMaterialParameterOverride",
            "AddScalarOverride",
            "AddScaleKey",
            "AddTransformOverride",
            "AddTranslationKey",
            "AddVectorKey",
            "AddVectorOverride",
            "AddVisibilityOverride",
            "ClearKeys",
            "Initialize",
            "IsInitialized",
            "SetActiveBoundObject",
        }};
    };

    struct SineSequence
    {
        static constexpr std::string_view Name = "SineSequence";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ProceduralDaySequence";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyName = 0x20;
            static constexpr std::uintptr_t ComponentName = 0x24;
            static constexpr std::uintptr_t KeyCount = 0x28;
            static constexpr std::uintptr_t Amplitude = 0x2C;
            static constexpr std::uintptr_t Frequency = 0x30;
            static constexpr std::uintptr_t PhaseShift = 0x34;
            static constexpr std::uintptr_t VerticalShift = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PropertyName", 0x20, "NameProperty"},
            {"ComponentName", 0x24, "NameProperty"},
            {"KeyCount", 0x28, "UInt32Property"},
            {"Amplitude", 0x2C, "FloatProperty"},
            {"Frequency", 0x30, "FloatProperty"},
            {"PhaseShift", 0x34, "FloatProperty"},
            {"VerticalShift", 0x38, "FloatProperty"},
        }};
    };

    struct SunAngleSequence
    {
        static constexpr std::string_view Name = "SunAngleSequence";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ProceduralDaySequence";
        struct Offsets
        {
            static constexpr std::uintptr_t SunComponentName = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SunComponentName", 0x20, "NameProperty"},
        }};
    };

    struct SunMoonDaySequenceActor
    {
        static constexpr std::string_view Name = "SunMoonDaySequenceActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseDaySequenceActor";
        struct Offsets
        {
            static constexpr std::uintptr_t MoonComponent = 0x408;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MoonComponent", 0x408, "ObjectProperty"},
        }};
    };

    struct SunPositionSequence
    {
        static constexpr std::string_view Name = "SunPositionSequence";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ProceduralDaySequence";
        struct Offsets
        {
            static constexpr std::uintptr_t SunComponentName = 0x20;
            static constexpr std::uintptr_t KeyCount = 0x24;
            static constexpr std::uintptr_t time = 0x28;
            static constexpr std::uintptr_t Timezone = 0x30;
            static constexpr std::uintptr_t Latitude = 0x38;
            static constexpr std::uintptr_t Longitude = 0x40;
            static constexpr std::uintptr_t bIsDaylightSavings = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SunComponentName", 0x20, "NameProperty"},
            {"KeyCount", 0x24, "UInt32Property"},
            {"time", 0x28, "StructProperty"},
            {"Timezone", 0x30, "DoubleProperty"},
            {"Latitude", 0x38, "DoubleProperty"},
            {"Longitude", 0x40, "DoubleProperty"},
            {"bIsDaylightSavings", 0x48, "BoolProperty"},
        }};
    };

}
