#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LevelSequence
{
    struct AnimSequenceLevelSequenceLink
    {
        static constexpr std::string_view Name = "AnimSequenceLevelSequenceLink";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t SkelTrackGuid = 0x28;
            static constexpr std::uintptr_t PathToLevelSequence = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SkelTrackGuid", 0x28, "StructProperty"},
            {"PathToLevelSequence", 0x38, "StructProperty"},
        }};
    };

    struct BoundActorProxy
    {
        static constexpr std::string_view Name = "BoundActorProxy";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DefaultLevelSequenceInstanceData
    {
        static constexpr std::string_view Name = "DefaultLevelSequenceInstanceData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TransformOriginActor = 0x30;
            static constexpr std::uintptr_t TransformOrigin = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TransformOriginActor", 0x30, "ObjectProperty"},
            {"TransformOrigin", 0x40, "StructProperty"},
        }};
    };

    struct LegacyLazyObjectPtrFragment
    {
        static constexpr std::string_view Name = "LegacyLazyObjectPtrFragment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LazyObjectId = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LazyObjectId", 0x0, "StructProperty"},
        }};
    };

    struct LegacyLevelSequenceDirectorBlueprint
    {
        static constexpr std::string_view Name = "LegacyLevelSequenceDirectorBlueprint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Blueprint";
        struct Offsets
        {
            static constexpr std::uintptr_t ParentClass = 0x58;
            static constexpr std::uintptr_t BlueprintType = 0x60;
            static constexpr std::uintptr_t bHasBeenRegenerated = 0x61;
            static constexpr std::uintptr_t bIsRegeneratingOnLoad = 0x61;
            static constexpr std::uintptr_t bRecompileOnLoad = 0x61;
            static constexpr std::uintptr_t BlueprintSystemVersion = 0x64;
            static constexpr std::uintptr_t SimpleConstructionScript = 0x68;
            static constexpr std::uintptr_t ComponentTemplates = 0x70;
            static constexpr std::uintptr_t Timelines = 0x80;
            static constexpr std::uintptr_t ComponentClassOverrides = 0x90;
            static constexpr std::uintptr_t InheritableComponentHandler = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ParentClass", 0x58, "ClassProperty"},
            {"BlueprintType", 0x60, "ByteProperty"},
            {"bHasBeenRegenerated", 0x61, "BoolProperty"},
            {"bIsRegeneratingOnLoad", 0x61, "BoolProperty"},
            {"bRecompileOnLoad", 0x61, "BoolProperty"},
            {"BlueprintSystemVersion", 0x64, "IntProperty"},
            {"SimpleConstructionScript", 0x68, "ObjectProperty"},
            {"ComponentTemplates", 0x70, "ArrayProperty"},
            {"Timelines", 0x80, "ArrayProperty"},
            {"ComponentClassOverrides", 0x90, "ArrayProperty"},
            {"InheritableComponentHandler", 0xA0, "ObjectProperty"},
        }};
    };

    struct LevelSequence
    {
        static constexpr std::string_view Name = "LevelSequence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSequence";
        struct Offsets
        {
            static constexpr std::uintptr_t MovieScene = 0x70;
            static constexpr std::uintptr_t BindingReferences = 0x78;
            static constexpr std::uintptr_t DirectorClass = 0x88;
            static constexpr std::uintptr_t AssetUserData = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MovieScene", 0x70, "ObjectProperty"},
            {"BindingReferences", 0x78, "StructProperty"},
            {"DirectorClass", 0x88, "ClassProperty"},
            {"AssetUserData", 0x90, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "CopyMetaData",
            "FindMetaDataByClass",
            "FindOrAddMetaDataByClass",
            "RemoveMetaDataByClass",
        }};
    };

    struct LevelSequenceActor
    {
        static constexpr std::string_view Name = "LevelSequenceActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PlaybackSettings = 0x290;
            static constexpr std::uintptr_t SequencePlayer = 0x2B8;
            static constexpr std::uintptr_t LevelSequenceAsset = 0x2C0;
            static constexpr std::uintptr_t CameraSettings = 0x2C8;
            static constexpr std::uintptr_t BurnInOptions = 0x2D0;
            static constexpr std::uintptr_t BindingOverrides = 0x2D8;
            static constexpr std::uintptr_t bAutoPlay = 0x2E0;
            static constexpr std::uintptr_t bOverrideInstanceData = 0x2E0;
            static constexpr std::uintptr_t bReplicatePlayback = 0x2E0;
            static constexpr std::uintptr_t DefaultInstanceData = 0x2E8;
            static constexpr std::uintptr_t BurnInInstance = 0x2F0;
            static constexpr std::uintptr_t bShowBurnin = 0x2F8;
            static constexpr std::uintptr_t WorldPartitionResolveData = 0x2FC;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"PlaybackSettings", 0x290, "StructProperty"},
            {"SequencePlayer", 0x2B8, "ObjectProperty"},
            {"LevelSequenceAsset", 0x2C0, "ObjectProperty"},
            {"CameraSettings", 0x2C8, "StructProperty"},
            {"BurnInOptions", 0x2D0, "ObjectProperty"},
            {"BindingOverrides", 0x2D8, "ObjectProperty"},
            {"bAutoPlay", 0x2E0, "BoolProperty"},
            {"bOverrideInstanceData", 0x2E0, "BoolProperty"},
            {"bReplicatePlayback", 0x2E0, "BoolProperty"},
            {"DefaultInstanceData", 0x2E8, "ObjectProperty"},
            {"BurnInInstance", 0x2F0, "ObjectProperty"},
            {"bShowBurnin", 0x2F8, "BoolProperty"},
            {"WorldPartitionResolveData", 0x2FC, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 16> FunctionNames{{
            "AddBinding",
            "AddBindingByTag",
            "FindNamedBinding",
            "FindNamedBindings",
            "GetSequence",
            "GetSequencePlayer",
            "HideBurnin",
            "RemoveBinding",
            "RemoveBindingByTag",
            "ResetBinding",
            "ResetBindings",
            "SetBinding",
            "SetBindingByTag",
            "SetReplicatePlayback",
            "SetSequence",
            "ShowBurnin",
        }};
    };

    struct LevelSequenceAnimSequenceLink
    {
        static constexpr std::string_view Name = "LevelSequenceAnimSequenceLink";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimSequenceLinks = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AnimSequenceLinks", 0x28, "ArrayProperty"},
        }};
    };

    struct LevelSequenceAnimSequenceLinkItem
    {
        static constexpr std::string_view Name = "LevelSequenceAnimSequenceLinkItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SkelTrackGuid = 0x0;
            static constexpr std::uintptr_t PathToAnimSequence = 0x10;
            static constexpr std::uintptr_t bAutoBake = 0x28;
            static constexpr std::uintptr_t bExportTransforms = 0x29;
            static constexpr std::uintptr_t bExportMorphTargets = 0x2A;
            static constexpr std::uintptr_t bExportAttributeCurves = 0x2B;
            static constexpr std::uintptr_t bExportMaterialCurves = 0x2C;
            static constexpr std::uintptr_t bSkipCurvesWithZeroValue = 0x2D;
            static constexpr std::uintptr_t bSetRetargetSourceAsset = 0x2E;
            static constexpr std::uintptr_t Interpolation = 0x2F;
            static constexpr std::uintptr_t CurveInterpolation = 0x30;
            static constexpr std::uintptr_t bRecordInWorldSpace = 0x31;
            static constexpr std::uintptr_t bEvaluateAllSkeletalMeshComponents = 0x32;
            static constexpr std::uintptr_t IncludeAnimationNames = 0x38;
            static constexpr std::uintptr_t ExcludeAnimationNames = 0x48;
            static constexpr std::uintptr_t bRemoveExcludedCurves = 0x58;
            static constexpr std::uintptr_t WarmUpFrames = 0x5C;
            static constexpr std::uintptr_t DelayBeforeStart = 0x60;
            static constexpr std::uintptr_t bUseCustomTimeRange = 0x64;
            static constexpr std::uintptr_t CustomStartFrame = 0x68;
            static constexpr std::uintptr_t CustomEndFrame = 0x6C;
            static constexpr std::uintptr_t CustomDisplayRate = 0x70;
            static constexpr std::uintptr_t bUseCustomFrameRate = 0x78;
            static constexpr std::uintptr_t CustomFrameRate = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"SkelTrackGuid", 0x0, "StructProperty"},
            {"PathToAnimSequence", 0x10, "StructProperty"},
            {"bAutoBake", 0x28, "BoolProperty"},
            {"bExportTransforms", 0x29, "BoolProperty"},
            {"bExportMorphTargets", 0x2A, "BoolProperty"},
            {"bExportAttributeCurves", 0x2B, "BoolProperty"},
            {"bExportMaterialCurves", 0x2C, "BoolProperty"},
            {"bSkipCurvesWithZeroValue", 0x2D, "BoolProperty"},
            {"bSetRetargetSourceAsset", 0x2E, "BoolProperty"},
            {"Interpolation", 0x2F, "EnumProperty"},
            {"CurveInterpolation", 0x30, "ByteProperty"},
            {"bRecordInWorldSpace", 0x31, "BoolProperty"},
            {"bEvaluateAllSkeletalMeshComponents", 0x32, "BoolProperty"},
            {"IncludeAnimationNames", 0x38, "ArrayProperty"},
            {"ExcludeAnimationNames", 0x48, "ArrayProperty"},
            {"bRemoveExcludedCurves", 0x58, "BoolProperty"},
            {"WarmUpFrames", 0x5C, "StructProperty"},
            {"DelayBeforeStart", 0x60, "StructProperty"},
            {"bUseCustomTimeRange", 0x64, "BoolProperty"},
            {"CustomStartFrame", 0x68, "StructProperty"},
            {"CustomEndFrame", 0x6C, "StructProperty"},
            {"CustomDisplayRate", 0x70, "StructProperty"},
            {"bUseCustomFrameRate", 0x78, "BoolProperty"},
            {"CustomFrameRate", 0x7C, "StructProperty"},
        }};
    };

    struct LevelSequenceBindingReference
    {
        static constexpr std::string_view Name = "LevelSequenceBindingReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PackageName = 0x0;
            static constexpr std::uintptr_t ExternalObjectPath = 0x10;
            static constexpr std::uintptr_t ObjectPath = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PackageName", 0x0, "StrProperty"},
            {"ExternalObjectPath", 0x10, "StructProperty"},
            {"ObjectPath", 0x28, "StrProperty"},
        }};
    };

    struct LevelSequenceBindingReferenceArray
    {
        static constexpr std::string_view Name = "LevelSequenceBindingReferenceArray";
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

    struct LevelSequenceBindingReferences
    {
        static constexpr std::string_view Name = "LevelSequenceBindingReferences";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BindingIdToReferences = 0x0;
            static constexpr std::uintptr_t AnimSequenceInstances = 0x10;
            static constexpr std::uintptr_t PostProcessInstances = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BindingIdToReferences", 0x0, "MapProperty"},
            {"AnimSequenceInstances", 0x10, "SetProperty"},
            {"PostProcessInstances", 0x20, "SetProperty"},
        }};
    };

    struct LevelSequenceBurnIn
    {
        static constexpr std::string_view Name = "LevelSequenceBurnIn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t FrameInformation = 0x308;
            static constexpr std::uintptr_t LevelSequenceActor = 0x3A8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FrameInformation", 0x308, "StructProperty"},
            {"LevelSequenceActor", 0x3A8, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetSettingsClass",
            "SetSettings",
        }};
    };

    struct LevelSequenceBurnInInitSettings
    {
        static constexpr std::string_view Name = "LevelSequenceBurnInInitSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LevelSequenceBurnInOptions
    {
        static constexpr std::string_view Name = "LevelSequenceBurnInOptions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseBurnIn = 0x28;
            static constexpr std::uintptr_t BurnInClass = 0x30;
            static constexpr std::uintptr_t Settings = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bUseBurnIn", 0x28, "BoolProperty"},
            {"BurnInClass", 0x30, "StructProperty"},
            {"Settings", 0x48, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetBurnIn",
        }};
    };

    struct LevelSequenceCameraSettings
    {
        static constexpr std::string_view Name = "LevelSequenceCameraSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideAspectRatioAxisConstraint = 0x0;
            static constexpr std::uintptr_t AspectRatioAxisConstraint = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bOverrideAspectRatioAxisConstraint", 0x0, "BoolProperty"},
            {"AspectRatioAxisConstraint", 0x1, "ByteProperty"},
        }};
    };

    struct LevelSequenceDirector
    {
        static constexpr std::string_view Name = "LevelSequenceDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SubSequenceID = 0x28;
            static constexpr std::uintptr_t WeakLinker = 0x2C;
            static constexpr std::uintptr_t InstanceID = 0x34;
            static constexpr std::uintptr_t InstanceSerial = 0x36;
            static constexpr std::uintptr_t player = 0x38;
            static constexpr std::uintptr_t MovieScenePlayerIndex = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SubSequenceID", 0x28, "IntProperty"},
            {"WeakLinker", 0x2C, "WeakObjectProperty"},
            {"InstanceID", 0x34, "UInt16Property"},
            {"InstanceSerial", 0x36, "UInt16Property"},
            {"player", 0x38, "ObjectProperty"},
            {"MovieScenePlayerIndex", 0x40, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "GetBoundActor",
            "GetBoundActors",
            "GetBoundObject",
            "GetBoundObjects",
            "GetCurrentTime",
            "GetRootSequenceCustomClock",
            "GetRootSequenceTime",
            "GetSequence",
            "GetSequenceCustomClock",
            "OnCreated",
        }};
    };

    struct LevelSequenceLegacyObjectReference
    {
        static constexpr std::string_view Name = "LevelSequenceLegacyObjectReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LevelSequenceMediaController
    {
        static constexpr std::string_view Name = "LevelSequenceMediaController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Sequence = 0x280;
            static constexpr std::uintptr_t MediaComponent = 0x288;
            static constexpr std::uintptr_t ServerStartTimeSeconds = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Sequence", 0x280, "ObjectProperty"},
            {"MediaComponent", 0x288, "ObjectProperty"},
            {"ServerStartTimeSeconds", 0x290, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetMediaComponent",
            "GetSequence",
            "OnRep_ServerStartTimeSeconds",
            "Play",
            "SynchronizeToServer",
        }};
    };

    struct LevelSequenceObjectReferenceMap
    {
        static constexpr std::string_view Name = "LevelSequenceObjectReferenceMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LevelSequencePlayer
    {
        static constexpr std::string_view Name = "LevelSequencePlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSequencePlayer";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCameraCut = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnCameraCut", 0x360, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "CreateLevelSequencePlayer",
            "GetActiveCameraComponent",
        }};
    };

    struct LevelSequencePlayerSnapshot
    {
        static constexpr std::string_view Name = "LevelSequencePlayerSnapshot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RootName = 0x0;
            static constexpr std::uintptr_t RootTime = 0x10;
            static constexpr std::uintptr_t SourceTime = 0x20;
            static constexpr std::uintptr_t CurrentShotName = 0x30;
            static constexpr std::uintptr_t CurrentShotLocalTime = 0x40;
            static constexpr std::uintptr_t CurrentShotSourceTime = 0x50;
            static constexpr std::uintptr_t SourceTimecode = 0x60;
            static constexpr std::uintptr_t CameraComponent = 0x70;
            static constexpr std::uintptr_t ActiveShot = 0x90;
            static constexpr std::uintptr_t ShotID = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"RootName", 0x0, "StrProperty"},
            {"RootTime", 0x10, "StructProperty"},
            {"SourceTime", 0x20, "StructProperty"},
            {"CurrentShotName", 0x30, "StrProperty"},
            {"CurrentShotLocalTime", 0x40, "StructProperty"},
            {"CurrentShotSourceTime", 0x50, "StructProperty"},
            {"SourceTimecode", 0x60, "StrProperty"},
            {"CameraComponent", 0x70, "SoftObjectProperty"},
            {"ActiveShot", 0x90, "ObjectProperty"},
            {"ShotID", 0x98, "StructProperty"},
        }};
    };

    struct LevelSequenceProjectSettings
    {
        static constexpr std::string_view Name = "LevelSequenceProjectSettings";
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

    struct LevelSequenceShotMetaDataLibrary
    {
        static constexpr std::string_view Name = "LevelSequenceShotMetaDataLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 35> FunctionNames{{
            "ClearFavoriteRating",
            "ClearIsFlagged",
            "ClearIsNoGood",
            "ClearIsRecorded",
            "ClearIsSubSequence",
            "GetFavoriteRating",
            "GetFavoriteRatingAssetTag",
            "GetFavoriteRatingByAssetData",
            "GetIsFlagged",
            "GetIsFlaggedAssetTag",
            "GetIsFlaggedByAssetData",
            "GetIsNoGood",
            "GetIsNoGoodAssetTag",
            "GetIsNoGoodByAssetData",
            "GetIsRecorded",
            "GetIsRecordedAssetTag",
            "GetIsRecordedByAssetData",
            "GetIsSubSequence",
            "GetIsSubSequenceAssetTag",
            "GetIsSubSequenceByAssetData",
            "HasFavoriteRating",
            "HasFavoriteRatingByAssetData",
            "HasIsFlagged",
            "HasIsFlaggedByAssetData",
            "HasIsNoGood",
            "HasIsNoGoodByAssetData",
            "HasIsRecorded",
            "HasIsRecordedByAssetData",
            "HasIsSubSequence",
            "HasIsSubSequenceByAssetData",
            "SetFavoriteRating",
            "SetIsFlagged",
            "SetIsNoGood",
            "SetIsRecorded",
            "SetIsSubSequence",
        }};
    };

    struct ReplicatedLevelSequenceActor
    {
        static constexpr std::string_view Name = "ReplicatedLevelSequenceActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LevelSequenceActor";
        struct Offsets
        {
            static constexpr std::uintptr_t PlaybackSettings = 0x290;
            static constexpr std::uintptr_t SequencePlayer = 0x2B8;
            static constexpr std::uintptr_t LevelSequenceAsset = 0x2C0;
            static constexpr std::uintptr_t CameraSettings = 0x2C8;
            static constexpr std::uintptr_t BurnInOptions = 0x2D0;
            static constexpr std::uintptr_t BindingOverrides = 0x2D8;
            static constexpr std::uintptr_t bAutoPlay = 0x2E0;
            static constexpr std::uintptr_t bOverrideInstanceData = 0x2E0;
            static constexpr std::uintptr_t bReplicatePlayback = 0x2E0;
            static constexpr std::uintptr_t DefaultInstanceData = 0x2E8;
            static constexpr std::uintptr_t BurnInInstance = 0x2F0;
            static constexpr std::uintptr_t bShowBurnin = 0x2F8;
            static constexpr std::uintptr_t WorldPartitionResolveData = 0x2FC;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"PlaybackSettings", 0x290, "StructProperty"},
            {"SequencePlayer", 0x2B8, "ObjectProperty"},
            {"LevelSequenceAsset", 0x2C0, "ObjectProperty"},
            {"CameraSettings", 0x2C8, "StructProperty"},
            {"BurnInOptions", 0x2D0, "ObjectProperty"},
            {"BindingOverrides", 0x2D8, "ObjectProperty"},
            {"bAutoPlay", 0x2E0, "BoolProperty"},
            {"bOverrideInstanceData", 0x2E0, "BoolProperty"},
            {"bReplicatePlayback", 0x2E0, "BoolProperty"},
            {"DefaultInstanceData", 0x2E8, "ObjectProperty"},
            {"BurnInInstance", 0x2F0, "ObjectProperty"},
            {"bShowBurnin", 0x2F8, "BoolProperty"},
            {"WorldPartitionResolveData", 0x2FC, "StructProperty"},
        }};
    };

    struct UpgradedLevelSequenceBindingReferences
    {
        static constexpr std::string_view Name = "UpgradedLevelSequenceBindingReferences";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "MovieSceneBindingReferences";
        struct Offsets
        {
            static constexpr std::uintptr_t SortedReferences = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SortedReferences", 0x0, "ArrayProperty"},
        }};
    };

}
