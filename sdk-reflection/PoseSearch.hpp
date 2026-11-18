#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PoseSearch
{
    struct AnimNode_MotionMatching
    {
        static constexpr std::string_view Name = "AnimNode_MotionMatching";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_BlendStack_Standalone";
        struct Offsets
        {
            static constexpr std::uintptr_t Database = 0xD0;
            static constexpr std::uintptr_t BlendTime = 0xD8;
            static constexpr std::uintptr_t BlendProfile = 0xE0;
            static constexpr std::uintptr_t BlendOption = 0xE8;
            static constexpr std::uintptr_t PoseJumpThresholdTime = 0xEC;
            static constexpr std::uintptr_t PoseReselectHistory = 0xF4;
            static constexpr std::uintptr_t SearchThrottleTime = 0xF8;
            static constexpr std::uintptr_t PlayRate = 0xFC;
            static constexpr std::uintptr_t PlayRateMultiplier = 0x104;
            static constexpr std::uintptr_t bUseInertialBlend = 0x108;
            static constexpr std::uintptr_t bResetOnBecomingRelevant = 0x109;
            static constexpr std::uintptr_t bShouldSearch = 0x10A;
            static constexpr std::uintptr_t bShouldUseCachedChannelData = 0x10B;
            static constexpr std::uintptr_t EventToSearch = 0x10C;
            static constexpr std::uintptr_t MotionMatchingState = 0x120;
            static constexpr std::uintptr_t DatabasesToSearch = 0x1C0;
            static constexpr std::uintptr_t Availabilities = 0x1D8;
            static constexpr std::uintptr_t bValidateResultAgainstAvailabilities = 0x1E8;
            static constexpr std::uintptr_t bKeepInteractionAlive = 0x1E9;
            static constexpr std::uintptr_t bEnableWarp = 0x1EA;
            static constexpr std::uintptr_t bWarpUsingRootBone = 0x1EB;
            static constexpr std::uintptr_t WarpingTranslationRatio = 0x1EC;
            static constexpr std::uintptr_t WarpingRotationRatio = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"Database", 0xD0, "ObjectProperty"},
            {"BlendTime", 0xD8, "FloatProperty"},
            {"BlendProfile", 0xE0, "ObjectProperty"},
            {"BlendOption", 0xE8, "EnumProperty"},
            {"PoseJumpThresholdTime", 0xEC, "StructProperty"},
            {"PoseReselectHistory", 0xF4, "FloatProperty"},
            {"SearchThrottleTime", 0xF8, "FloatProperty"},
            {"PlayRate", 0xFC, "StructProperty"},
            {"PlayRateMultiplier", 0x104, "FloatProperty"},
            {"bUseInertialBlend", 0x108, "BoolProperty"},
            {"bResetOnBecomingRelevant", 0x109, "BoolProperty"},
            {"bShouldSearch", 0x10A, "BoolProperty"},
            {"bShouldUseCachedChannelData", 0x10B, "BoolProperty"},
            {"EventToSearch", 0x10C, "StructProperty"},
            {"MotionMatchingState", 0x120, "StructProperty"},
            {"DatabasesToSearch", 0x1C0, "ArrayProperty"},
            {"Availabilities", 0x1D8, "ArrayProperty"},
            {"bValidateResultAgainstAvailabilities", 0x1E8, "BoolProperty"},
            {"bKeepInteractionAlive", 0x1E9, "BoolProperty"},
            {"bEnableWarp", 0x1EA, "BoolProperty"},
            {"bWarpUsingRootBone", 0x1EB, "BoolProperty"},
            {"WarpingTranslationRatio", 0x1EC, "FloatProperty"},
            {"WarpingRotationRatio", 0x1F0, "FloatProperty"},
        }};
    };

    struct AnimNode_PoseSearchComponentSpaceHistoryCollector
    {
        static constexpr std::string_view Name = "AnimNode_PoseSearchComponentSpaceHistoryCollector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_PoseSearchHistoryCollector_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Source", 0x140, "StructProperty"},
        }};
    };

    struct AnimNode_PoseSearchHistoryCollector
    {
        static constexpr std::string_view Name = "AnimNode_PoseSearchHistoryCollector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_PoseSearchHistoryCollector_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Source", 0x140, "StructProperty"},
        }};
    };

    struct AnimNode_PoseSearchHistoryCollector_Base
    {
        static constexpr std::string_view Name = "AnimNode_PoseSearchHistoryCollector_Base";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNode_Base";
        struct Offsets
        {
            static constexpr std::uintptr_t PoseCount = 0x10;
            static constexpr std::uintptr_t SamplingInterval = 0x14;
            static constexpr std::uintptr_t CollectedBones = 0x18;
            static constexpr std::uintptr_t CollectedCurves = 0x28;
            static constexpr std::uintptr_t bInitializeWithRefPose = 0x38;
            static constexpr std::uintptr_t bResetOnBecomingRelevant = 0x39;
            static constexpr std::uintptr_t bStoreScales = 0x3A;
            static constexpr std::uintptr_t RootBoneRecoveryTime = 0x3C;
            static constexpr std::uintptr_t RootBoneTranslationRecoveryRatio = 0x40;
            static constexpr std::uintptr_t RootBoneRotationRecoveryRatio = 0x44;
            static constexpr std::uintptr_t bGenerateTrajectory = 0x58;
            static constexpr std::uintptr_t TransformTrajectory = 0x60;
            static constexpr std::uintptr_t TrajectorySpeedMultiplier = 0x70;
            static constexpr std::uintptr_t TrajectoryHistoryCount = 0x74;
            static constexpr std::uintptr_t TrajectoryPredictionCount = 0x78;
            static constexpr std::uintptr_t PredictionSamplingInterval = 0x7C;
            static constexpr std::uintptr_t TrajectoryData = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"PoseCount", 0x10, "IntProperty"},
            {"SamplingInterval", 0x14, "FloatProperty"},
            {"CollectedBones", 0x18, "ArrayProperty"},
            {"CollectedCurves", 0x28, "ArrayProperty"},
            {"bInitializeWithRefPose", 0x38, "BoolProperty"},
            {"bResetOnBecomingRelevant", 0x39, "BoolProperty"},
            {"bStoreScales", 0x3A, "BoolProperty"},
            {"RootBoneRecoveryTime", 0x3C, "FloatProperty"},
            {"RootBoneTranslationRecoveryRatio", 0x40, "FloatProperty"},
            {"RootBoneRotationRecoveryRatio", 0x44, "FloatProperty"},
            {"bGenerateTrajectory", 0x58, "BoolProperty"},
            {"TransformTrajectory", 0x60, "StructProperty"},
            {"TrajectorySpeedMultiplier", 0x70, "FloatProperty"},
            {"TrajectoryHistoryCount", 0x74, "IntProperty"},
            {"TrajectoryPredictionCount", 0x78, "IntProperty"},
            {"PredictionSamplingInterval", 0x7C, "FloatProperty"},
            {"TrajectoryData", 0x80, "StructProperty"},
        }};
    };

    struct AnimNotifyState_PoseSearchBase
    {
        static constexpr std::string_view Name = "AnimNotifyState_PoseSearchBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyStateBehaviorFlags = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NotifyStateBehaviorFlags", 0x29, "ByteProperty"},
        }};
    };

    struct AnimNotifyState_PoseSearchBlockTransition
    {
        static constexpr std::string_view Name = "AnimNotifyState_PoseSearchBlockTransition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState_PoseSearchBase";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyStateBehaviorFlags = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NotifyStateBehaviorFlags", 0x29, "ByteProperty"},
        }};
    };

    struct AnimNotifyState_PoseSearchBranchIn
    {
        static constexpr std::string_view Name = "AnimNotifyState_PoseSearchBranchIn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState_PoseSearchBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Database = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Database", 0x30, "ObjectProperty"},
        }};
    };

    struct AnimNotifyState_PoseSearchConstraint
    {
        static constexpr std::string_view Name = "AnimNotifyState_PoseSearchConstraint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState_PoseSearchBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FromSocketName = 0x30;
            static constexpr std::uintptr_t FromSocketRole = 0x34;
            static constexpr std::uintptr_t ToSocketName = 0x38;
            static constexpr std::uintptr_t ToSocketRole = 0x3C;
            static constexpr std::uintptr_t TranslationWeight = 0x40;
            static constexpr std::uintptr_t RotationWeight = 0x44;
            static constexpr std::uintptr_t RampUpTime = 0x48;
            static constexpr std::uintptr_t CooldownTime = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"FromSocketName", 0x30, "NameProperty"},
            {"FromSocketRole", 0x34, "NameProperty"},
            {"ToSocketName", 0x38, "NameProperty"},
            {"ToSocketRole", 0x3C, "NameProperty"},
            {"TranslationWeight", 0x40, "FloatProperty"},
            {"RotationWeight", 0x44, "FloatProperty"},
            {"RampUpTime", 0x48, "FloatProperty"},
            {"CooldownTime", 0x4C, "FloatProperty"},
        }};
    };

    struct AnimNotifyState_PoseSearchExcludeFromDatabase
    {
        static constexpr std::string_view Name = "AnimNotifyState_PoseSearchExcludeFromDatabase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState_PoseSearchBase";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyStateBehaviorFlags = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NotifyStateBehaviorFlags", 0x29, "ByteProperty"},
        }};
    };

    struct AnimNotifyState_PoseSearchModifyCost
    {
        static constexpr std::string_view Name = "AnimNotifyState_PoseSearchModifyCost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState_PoseSearchBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CostAddend = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CostAddend", 0x30, "FloatProperty"},
        }};
    };

    struct AnimNotifyState_PoseSearchOverrideContinuingContextInteractionCostBias
    {
        static constexpr std::string_view Name = "AnimNotifyState_PoseSearchOverrideContinuingContextInteractionCostBias";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState_PoseSearchBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CostAddend = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CostAddend", 0x30, "FloatProperty"},
        }};
    };

    struct AnimNotifyState_PoseSearchOverrideContinuingInteractionPoseCostBias
    {
        static constexpr std::string_view Name = "AnimNotifyState_PoseSearchOverrideContinuingInteractionPoseCostBias";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState_PoseSearchBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CostAddend = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CostAddend", 0x30, "FloatProperty"},
        }};
    };

    struct AnimNotifyState_PoseSearchOverrideContinuingPoseCostBias
    {
        static constexpr std::string_view Name = "AnimNotifyState_PoseSearchOverrideContinuingPoseCostBias";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState_PoseSearchBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CostAddend = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CostAddend", 0x30, "FloatProperty"},
        }};
    };

    struct AnimNotifyState_PoseSearchSamplingAttribute
    {
        static constexpr std::string_view Name = "AnimNotifyState_PoseSearchSamplingAttribute";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState_PoseSearchSamplingEvent";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyStateBehaviorFlags = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NotifyStateBehaviorFlags", 0x29, "ByteProperty"},
        }};
    };

    struct AnimNotifyState_PoseSearchSamplingEvent
    {
        static constexpr std::string_view Name = "AnimNotifyState_PoseSearchSamplingEvent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState_PoseSearchBase";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyStateBehaviorFlags = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NotifyStateBehaviorFlags", 0x29, "ByteProperty"},
        }};
    };

    struct AnimNotifyState_PoseSearchSamplingRange
    {
        static constexpr std::string_view Name = "AnimNotifyState_PoseSearchSamplingRange";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState_PoseSearchBase";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyStateBehaviorFlags = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NotifyStateBehaviorFlags", 0x29, "ByteProperty"},
        }};
    };

    struct AnimNotify_PoseSearchBase
    {
        static constexpr std::string_view Name = "AnimNotify_PoseSearchBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotify";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimNotify_PoseSearchEvent
    {
        static constexpr std::string_view Name = "AnimNotify_PoseSearchEvent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotify_PoseSearchBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EventTag = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EventTag", 0x38, "StructProperty"},
        }};
    };

    struct ChooserParameterPoseHistoryBase
    {
        static constexpr std::string_view Name = "ChooserParameterPoseHistoryBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MotionMatchingAnimNodeLibrary
    {
        static constexpr std::string_view Name = "MotionMatchingAnimNodeLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "AnyNewBlendToThisFrame",
            "ConvertToMotionMatchingNode",
            "ConvertToMotionMatchingNodePure",
            "GetMotionMatchingBlendSettings",
            "GetMotionMatchingSearchResult",
            "OverrideMotionMatchingBlendSettings",
            "ResetDatabasesToSearch",
            "SetDatabaseToSearch",
            "SetDatabasesToSearch",
            "SetInterruptMode",
        }};
    };

    struct MotionMatchingAnimNodeReference
    {
        static constexpr std::string_view Name = "MotionMatchingAnimNodeReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNodeReference";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MotionMatchingBlueprintBlendSettings
    {
        static constexpr std::string_view Name = "MotionMatchingBlueprintBlendSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BlendTime = 0x0;
            static constexpr std::uintptr_t BlendProfile = 0x8;
            static constexpr std::uintptr_t BlendOption = 0x10;
            static constexpr std::uintptr_t bUseInertialBlend = 0x11;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BlendTime", 0x0, "FloatProperty"},
            {"BlendProfile", 0x8, "ObjectProperty"},
            {"BlendOption", 0x10, "EnumProperty"},
            {"bUseInertialBlend", 0x11, "BoolProperty"},
        }};
    };

    struct MotionMatchingState
    {
        static constexpr std::string_view Name = "MotionMatchingState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SearchResult = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SearchResult", 0x0, "StructProperty"},
        }};
    };

    struct MultiAnimAsset
    {
        static constexpr std::string_view Name = "MultiAnimAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "BP_GetAnimationAsset",
            "BP_GetOrigin",
        }};
    };

    struct PoseHistoryAnimationAttribute
    {
        static constexpr std::string_view Name = "PoseHistoryAnimationAttribute";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PoseHistoryContextProperty
    {
        static constexpr std::string_view Name = "PoseHistoryContextProperty";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserParameterPoseHistoryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Binding = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Binding", 0x8, "StructProperty"},
        }};
    };

    struct PoseHistoryReference
    {
        static constexpr std::string_view Name = "PoseHistoryReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PoseSearchAnimContextRoles
    {
        static constexpr std::string_view Name = "PoseSearchAnimContextRoles";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimContext = 0x0;
            static constexpr std::uintptr_t Roles = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AnimContext", 0x0, "ObjectProperty"},
            {"Roles", 0x8, "ArrayProperty"},
        }};
    };

    struct PoseSearchAssetSamplerInput
    {
        static constexpr std::string_view Name = "PoseSearchAssetSamplerInput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Animation = 0x0;
            static constexpr std::uintptr_t AnimationTime = 0x8;
            static constexpr std::uintptr_t RootTransformOrigin = 0x10;
            static constexpr std::uintptr_t bMirrored = 0x70;
            static constexpr std::uintptr_t MirrorDataTable = 0x78;
            static constexpr std::uintptr_t BlendParameters = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Animation", 0x0, "ObjectProperty"},
            {"AnimationTime", 0x8, "FloatProperty"},
            {"RootTransformOrigin", 0x10, "StructProperty"},
            {"bMirrored", 0x70, "BoolProperty"},
            {"MirrorDataTable", 0x78, "ObjectProperty"},
            {"BlendParameters", 0x80, "StructProperty"},
        }};
    };

    struct PoseSearchAssetSamplerLibrary
    {
        static constexpr std::string_view Name = "PoseSearchAssetSamplerLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "Draw",
            "GetTransformByName",
            "SamplePose",
        }};
    };

    struct PoseSearchAssetSamplerPose
    {
        static constexpr std::string_view Name = "PoseSearchAssetSamplerPose";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PoseSearchBlueprintResult
    {
        static constexpr std::string_view Name = "PoseSearchBlueprintResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedAnim = 0x0;
            static constexpr std::uintptr_t SelectedTime = 0x8;
            static constexpr std::uintptr_t bIsContinuingPoseSearch = 0xC;
            static constexpr std::uintptr_t WantedPlayRate = 0x10;
            static constexpr std::uintptr_t bLoop = 0x14;
            static constexpr std::uintptr_t bIsMirrored = 0x15;
            static constexpr std::uintptr_t BlendParameters = 0x18;
            static constexpr std::uintptr_t SelectedDatabase = 0x30;
            static constexpr std::uintptr_t SearchCost = 0x38;
            static constexpr std::uintptr_t bIsInteraction = 0x3C;
            static constexpr std::uintptr_t Role = 0x40;
            static constexpr std::uintptr_t RoleIndex = 0x44;
            static constexpr std::uintptr_t ActorRootTransforms = 0x48;
            static constexpr std::uintptr_t ActorRootBoneTransforms = 0x58;
            static constexpr std::uintptr_t AnimContexts = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"SelectedAnim", 0x0, "ObjectProperty"},
            {"SelectedTime", 0x8, "FloatProperty"},
            {"bIsContinuingPoseSearch", 0xC, "BoolProperty"},
            {"WantedPlayRate", 0x10, "FloatProperty"},
            {"bLoop", 0x14, "BoolProperty"},
            {"bIsMirrored", 0x15, "BoolProperty"},
            {"BlendParameters", 0x18, "StructProperty"},
            {"SelectedDatabase", 0x30, "ObjectProperty"},
            {"SearchCost", 0x38, "FloatProperty"},
            {"bIsInteraction", 0x3C, "BoolProperty"},
            {"Role", 0x40, "NameProperty"},
            {"RoleIndex", 0x44, "IntProperty"},
            {"ActorRootTransforms", 0x48, "ArrayProperty"},
            {"ActorRootBoneTransforms", 0x58, "ArrayProperty"},
            {"AnimContexts", 0x68, "ArrayProperty"},
        }};
    };

    struct PoseSearchBone
    {
        static constexpr std::string_view Name = "PoseSearchBone";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Reference = 0x0;
            static constexpr std::uintptr_t Flags = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Reference", 0x0, "StructProperty"},
            {"Flags", 0xC, "IntProperty"},
        }};
    };

    struct PoseSearchColumn
    {
        static constexpr std::string_view Name = "PoseSearchColumn";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ChooserColumnBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RowValues = 0x8;
            static constexpr std::uintptr_t FallbackValue = 0x18;
            static constexpr std::uintptr_t Chooser = 0x30;
            static constexpr std::uintptr_t PoseReselectHistory = 0x48;
            static constexpr std::uintptr_t MaxNumberOfResults = 0x4C;
            static constexpr std::uintptr_t InterruptMode = 0x50;
            static constexpr std::uintptr_t InputValue = 0x60;
            static constexpr std::uintptr_t OutputStartTime = 0x70;
            static constexpr std::uintptr_t OutputMirror = 0x80;
            static constexpr std::uintptr_t OutputForceBlendTo = 0x90;
            static constexpr std::uintptr_t OutputCost = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"RowValues", 0x8, "ArrayProperty"},
            {"FallbackValue", 0x18, "StructProperty"},
            {"Chooser", 0x30, "ObjectProperty"},
            {"PoseReselectHistory", 0x48, "FloatProperty"},
            {"MaxNumberOfResults", 0x4C, "IntProperty"},
            {"InterruptMode", 0x50, "StructProperty"},
            {"InputValue", 0x60, "StructProperty"},
            {"OutputStartTime", 0x70, "StructProperty"},
            {"OutputMirror", 0x80, "StructProperty"},
            {"OutputForceBlendTo", 0x90, "StructProperty"},
            {"OutputCost", 0xA0, "StructProperty"},
        }};
    };

    struct PoseSearchColumnRow
    {
        static constexpr std::string_view Name = "PoseSearchColumnRow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Data = 0x0;
            static constexpr std::uintptr_t Database = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Data", 0x0, "StructProperty"},
            {"Database", 0x10, "ObjectProperty"},
        }};
    };

    struct PoseSearchColumnRowReflection
    {
        static constexpr std::string_view Name = "PoseSearchColumnRowReflection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PoseSearchColumnRow";
        struct Offsets
        {
            static constexpr std::uintptr_t Data = 0x0;
            static constexpr std::uintptr_t Database = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Data", 0x0, "StructProperty"},
            {"Database", 0x10, "ObjectProperty"},
        }};
    };

    struct PoseSearchConstraint
    {
        static constexpr std::string_view Name = "PoseSearchConstraint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FromSocketName = 0x0;
            static constexpr std::uintptr_t FromSocketRole = 0x4;
            static constexpr std::uintptr_t ToSocketName = 0x8;
            static constexpr std::uintptr_t ToSocketRole = 0xC;
            static constexpr std::uintptr_t TranslationWeight = 0x10;
            static constexpr std::uintptr_t RotationWeight = 0x14;
            static constexpr std::uintptr_t RampUpTime = 0x18;
            static constexpr std::uintptr_t CooldownTime = 0x1C;
            static constexpr std::uintptr_t FromSocketTransform = 0x20;
            static constexpr std::uintptr_t ToSocketTransform = 0x80;
            static constexpr std::uintptr_t DesiredReach = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"FromSocketName", 0x0, "NameProperty"},
            {"FromSocketRole", 0x4, "NameProperty"},
            {"ToSocketName", 0x8, "NameProperty"},
            {"ToSocketRole", 0xC, "NameProperty"},
            {"TranslationWeight", 0x10, "FloatProperty"},
            {"RotationWeight", 0x14, "FloatProperty"},
            {"RampUpTime", 0x18, "FloatProperty"},
            {"CooldownTime", 0x1C, "FloatProperty"},
            {"FromSocketTransform", 0x20, "StructProperty"},
            {"ToSocketTransform", 0x80, "StructProperty"},
            {"DesiredReach", 0xE0, "FloatProperty"},
        }};
    };

    struct PoseSearchContinuingProperties
    {
        static constexpr std::string_view Name = "PoseSearchContinuingProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayingAsset = 0x0;
            static constexpr std::uintptr_t PlayingAssetAccumulatedTime = 0x8;
            static constexpr std::uintptr_t bIsPlayingAssetMirrored = 0xC;
            static constexpr std::uintptr_t PlayingAssetBlendParameters = 0x10;
            static constexpr std::uintptr_t InterruptMode = 0x28;
            static constexpr std::uintptr_t bIsContinuingInteraction = 0x29;
            static constexpr std::uintptr_t bIsContinuingContextInteraction = 0x2A;
            static constexpr std::uintptr_t PlayingAssetDatabase = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PlayingAsset", 0x0, "ObjectProperty"},
            {"PlayingAssetAccumulatedTime", 0x8, "FloatProperty"},
            {"bIsPlayingAssetMirrored", 0xC, "BoolProperty"},
            {"PlayingAssetBlendParameters", 0x10, "StructProperty"},
            {"InterruptMode", 0x28, "EnumProperty"},
            {"bIsContinuingInteraction", 0x29, "BoolProperty"},
            {"bIsContinuingContextInteraction", 0x2A, "BoolProperty"},
            {"PlayingAssetDatabase", 0x30, "ObjectProperty"},
        }};
    };

    struct PoseSearchCost
    {
        static constexpr std::string_view Name = "PoseSearchCost";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TotalCost = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TotalCost", 0x0, "FloatProperty"},
        }};
    };

    struct PoseSearchDatabase
    {
        static constexpr std::string_view Name = "PoseSearchDatabase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Schema = 0x28;
            static constexpr std::uintptr_t ContinuingPoseCostBias = 0x30;
            static constexpr std::uintptr_t BaseCostBias = 0x34;
            static constexpr std::uintptr_t LoopingCostBias = 0x38;
            static constexpr std::uintptr_t ContinuingInteractionCostBias = 0x3C;
            static constexpr std::uintptr_t ContinuingContextInteractionCostBias = 0x40;
            static constexpr std::uintptr_t AnimationAssets = 0x48;
            static constexpr std::uintptr_t DatabaseAnimationAssets = 0x58;
            static constexpr std::uintptr_t Tags = 0x68;
            static constexpr std::uintptr_t PoseSearchMode = 0x78;
            static constexpr std::uintptr_t KDTreeQueryNumNeighbors = 0x7C;
            static constexpr std::uintptr_t KDTreeQueryNumNeighborsWithDuplicates = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Schema", 0x28, "ObjectProperty"},
            {"ContinuingPoseCostBias", 0x30, "FloatProperty"},
            {"BaseCostBias", 0x34, "FloatProperty"},
            {"LoopingCostBias", 0x38, "FloatProperty"},
            {"ContinuingInteractionCostBias", 0x3C, "FloatProperty"},
            {"ContinuingContextInteractionCostBias", 0x40, "FloatProperty"},
            {"AnimationAssets", 0x48, "ArrayProperty"},
            {"DatabaseAnimationAssets", 0x58, "ArrayProperty"},
            {"Tags", 0x68, "ArrayProperty"},
            {"PoseSearchMode", 0x78, "EnumProperty"},
            {"KDTreeQueryNumNeighbors", 0x7C, "IntProperty"},
            {"KDTreeQueryNumNeighborsWithDuplicates", 0x80, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetAnimationAsset",
            "GetNumAnimationAssets",
        }};
    };

    struct PoseSearchDatabaseAnimComposite
    {
        static constexpr std::string_view Name = "PoseSearchDatabaseAnimComposite";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PoseSearchDatabaseAnimationAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimComposite = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AnimComposite", 0x8, "ObjectProperty"},
        }};
    };

    struct PoseSearchDatabaseAnimMontage
    {
        static constexpr std::string_view Name = "PoseSearchDatabaseAnimMontage";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PoseSearchDatabaseAnimationAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimMontage = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AnimMontage", 0x8, "ObjectProperty"},
        }};
    };

    struct PoseSearchDatabaseAnimationAsset
    {
        static constexpr std::string_view Name = "PoseSearchDatabaseAnimationAsset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PoseSearchDatabaseAnimationAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimAsset = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AnimAsset", 0x8, "ObjectProperty"},
        }};
    };

    struct PoseSearchDatabaseAnimationAssetBase
    {
        static constexpr std::string_view Name = "PoseSearchDatabaseAnimationAssetBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PoseSearchDatabaseBlendSpace
    {
        static constexpr std::string_view Name = "PoseSearchDatabaseBlendSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PoseSearchDatabaseAnimationAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BlendSpace = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BlendSpace", 0x8, "ObjectProperty"},
        }};
    };

    struct PoseSearchDatabaseMultiAnimAsset
    {
        static constexpr std::string_view Name = "PoseSearchDatabaseMultiAnimAsset";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PoseSearchDatabaseAnimationAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MultiAnimAsset = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MultiAnimAsset", 0x8, "ObjectProperty"},
        }};
    };

    struct PoseSearchDatabaseSequence
    {
        static constexpr std::string_view Name = "PoseSearchDatabaseSequence";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PoseSearchDatabaseAnimationAssetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Sequence = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sequence", 0x8, "ObjectProperty"},
        }};
    };

    struct PoseSearchEvent
    {
        static constexpr std::string_view Name = "PoseSearchEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EventTag = 0x0;
            static constexpr std::uintptr_t TimeToEvent = 0x4;
            static constexpr std::uintptr_t bEnablePoseFilters = 0x8;
            static constexpr std::uintptr_t bUsePlayRateRangeOverride = 0x9;
            static constexpr std::uintptr_t PlayRateRangeOverride = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"EventTag", 0x0, "StructProperty"},
            {"TimeToEvent", 0x4, "FloatProperty"},
            {"bEnablePoseFilters", 0x8, "BoolProperty"},
            {"bUsePlayRateRangeOverride", 0x9, "BoolProperty"},
            {"PlayRateRangeOverride", 0xC, "StructProperty"},
        }};
    };

    struct PoseSearchEventLibrary
    {
        static constexpr std::string_view Name = "PoseSearchEventLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "UpdatePoseSearchEvent",
        }};
    };

    struct PoseSearchFeatureChannel
    {
        static constexpr std::string_view Name = "PoseSearchFeatureChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelDataOffset = 0x38;
            static constexpr std::uintptr_t ChannelCardinality = 0x3C;
            static constexpr std::uintptr_t Filters = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ChannelDataOffset", 0x38, "IntProperty"},
            {"ChannelCardinality", 0x3C, "IntProperty"},
            {"Filters", 0x40, "ArrayProperty"},
        }};
    };

    struct PoseSearchFeatureChannel_Curve
    {
        static constexpr std::string_view Name = "PoseSearchFeatureChannel_Curve";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PoseSearchFeatureChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t CurveName = 0x50;
            static constexpr std::uintptr_t SampleRole = 0x54;
            static constexpr std::uintptr_t CurveIdx = 0x58;
            static constexpr std::uintptr_t SampleTimeOffset = 0x5C;
            static constexpr std::uintptr_t InputQueryPose = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CurveName", 0x50, "NameProperty"},
            {"SampleRole", 0x54, "NameProperty"},
            {"CurveIdx", 0x58, "Int8Property"},
            {"SampleTimeOffset", 0x5C, "FloatProperty"},
            {"InputQueryPose", 0x60, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "BP_GetCurveValue",
            "BP_GetCurveValueFromContext",
        }};
    };

    struct PoseSearchFeatureChannel_Distance
    {
        static constexpr std::string_view Name = "PoseSearchFeatureChannel_Distance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PoseSearchFeatureChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t bDefaultWithRootBone = 0x50;
            static constexpr std::uintptr_t bone = 0x54;
            static constexpr std::uintptr_t SampleRole = 0x60;
            static constexpr std::uintptr_t OriginBone = 0x64;
            static constexpr std::uintptr_t OriginRole = 0x70;
            static constexpr std::uintptr_t MaxDistance = 0x74;
            static constexpr std::uintptr_t SamplingAttributeId = 0x78;
            static constexpr std::uintptr_t SampleTimeOffset = 0x7C;
            static constexpr std::uintptr_t OriginTimeOffset = 0x80;
            static constexpr std::uintptr_t SchemaBoneIdx = 0x84;
            static constexpr std::uintptr_t SchemaOriginBoneIdx = 0x85;
            static constexpr std::uintptr_t InputQueryPose = 0x86;
            static constexpr std::uintptr_t PermutationTimeType = 0x87;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"bDefaultWithRootBone", 0x50, "BoolProperty"},
            {"bone", 0x54, "StructProperty"},
            {"SampleRole", 0x60, "NameProperty"},
            {"OriginBone", 0x64, "StructProperty"},
            {"OriginRole", 0x70, "NameProperty"},
            {"MaxDistance", 0x74, "FloatProperty"},
            {"SamplingAttributeId", 0x78, "IntProperty"},
            {"SampleTimeOffset", 0x7C, "FloatProperty"},
            {"OriginTimeOffset", 0x80, "FloatProperty"},
            {"SchemaBoneIdx", 0x84, "Int8Property"},
            {"SchemaOriginBoneIdx", 0x85, "Int8Property"},
            {"InputQueryPose", 0x86, "EnumProperty"},
            {"PermutationTimeType", 0x87, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "BP_GetDistance",
        }};
    };

    struct PoseSearchFeatureChannel_FilterCrashingLegs
    {
        static constexpr std::string_view Name = "PoseSearchFeatureChannel_FilterCrashingLegs";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PoseSearchFeatureChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t LeftThigh = 0x50;
            static constexpr std::uintptr_t RightThigh = 0x5C;
            static constexpr std::uintptr_t LeftFoot = 0x68;
            static constexpr std::uintptr_t RightFoot = 0x74;
            static constexpr std::uintptr_t SampleRole = 0x80;
            static constexpr std::uintptr_t Weight = 0x84;
            static constexpr std::uintptr_t LeftThighIdx = 0x88;
            static constexpr std::uintptr_t RightThighIdx = 0x89;
            static constexpr std::uintptr_t LeftFootIdx = 0x8A;
            static constexpr std::uintptr_t RightFootIdx = 0x8B;
            static constexpr std::uintptr_t InputQueryPose = 0x8C;
            static constexpr std::uintptr_t AllowedTolerance = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"LeftThigh", 0x50, "StructProperty"},
            {"RightThigh", 0x5C, "StructProperty"},
            {"LeftFoot", 0x68, "StructProperty"},
            {"RightFoot", 0x74, "StructProperty"},
            {"SampleRole", 0x80, "NameProperty"},
            {"Weight", 0x84, "FloatProperty"},
            {"LeftThighIdx", 0x88, "Int8Property"},
            {"RightThighIdx", 0x89, "Int8Property"},
            {"LeftFootIdx", 0x8A, "Int8Property"},
            {"RightFootIdx", 0x8B, "Int8Property"},
            {"InputQueryPose", 0x8C, "EnumProperty"},
            {"AllowedTolerance", 0x90, "FloatProperty"},
        }};
    };

    struct PoseSearchFeatureChannel_Group
    {
        static constexpr std::string_view Name = "PoseSearchFeatureChannel_Group";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PoseSearchFeatureChannel_GroupBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SubChannels = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SubChannels", 0x58, "ArrayProperty"},
        }};
    };

    struct PoseSearchFeatureChannel_GroupBase
    {
        static constexpr std::string_view Name = "PoseSearchFeatureChannel_GroupBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PoseSearchFeatureChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t SampleRole = 0x50;
            static constexpr std::uintptr_t DebugWeightGroupID = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SampleRole", 0x50, "NameProperty"},
            {"DebugWeightGroupID", 0x54, "IntProperty"},
        }};
    };

    struct PoseSearchFeatureChannel_Heading
    {
        static constexpr std::string_view Name = "PoseSearchFeatureChannel_Heading";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PoseSearchFeatureChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t bDefaultWithRootBone = 0x50;
            static constexpr std::uintptr_t bone = 0x54;
            static constexpr std::uintptr_t SampleRole = 0x60;
            static constexpr std::uintptr_t OriginBone = 0x64;
            static constexpr std::uintptr_t OriginRole = 0x70;
            static constexpr std::uintptr_t SamplingAttributeId = 0x74;
            static constexpr std::uintptr_t SampleTimeOffset = 0x78;
            static constexpr std::uintptr_t OriginTimeOffset = 0x7C;
            static constexpr std::uintptr_t HeadingAxis = 0x80;
            static constexpr std::uintptr_t SchemaBoneIdx = 0x81;
            static constexpr std::uintptr_t SchemaOriginBoneIdx = 0x82;
            static constexpr std::uintptr_t InputQueryPose = 0x83;
            static constexpr std::uintptr_t ComponentStripping = 0x84;
            static constexpr std::uintptr_t PermutationTimeType = 0x85;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"bDefaultWithRootBone", 0x50, "BoolProperty"},
            {"bone", 0x54, "StructProperty"},
            {"SampleRole", 0x60, "NameProperty"},
            {"OriginBone", 0x64, "StructProperty"},
            {"OriginRole", 0x70, "NameProperty"},
            {"SamplingAttributeId", 0x74, "IntProperty"},
            {"SampleTimeOffset", 0x78, "FloatProperty"},
            {"OriginTimeOffset", 0x7C, "FloatProperty"},
            {"HeadingAxis", 0x80, "EnumProperty"},
            {"SchemaBoneIdx", 0x81, "Int8Property"},
            {"SchemaOriginBoneIdx", 0x82, "Int8Property"},
            {"InputQueryPose", 0x83, "EnumProperty"},
            {"ComponentStripping", 0x84, "EnumProperty"},
            {"PermutationTimeType", 0x85, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "BP_GetWorldRotation",
            "BP_GetWorldRotationFromContext",
        }};
    };

    struct PoseSearchFeatureChannel_Padding
    {
        static constexpr std::string_view Name = "PoseSearchFeatureChannel_Padding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PoseSearchFeatureChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t PaddingSize = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PaddingSize", 0x50, "IntProperty"},
        }};
    };

    struct PoseSearchFeatureChannel_PermutationTime
    {
        static constexpr std::string_view Name = "PoseSearchFeatureChannel_PermutationTime";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PoseSearchFeatureChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelDataOffset = 0x38;
            static constexpr std::uintptr_t ChannelCardinality = 0x3C;
            static constexpr std::uintptr_t Filters = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ChannelDataOffset", 0x38, "IntProperty"},
            {"ChannelCardinality", 0x3C, "IntProperty"},
            {"Filters", 0x40, "ArrayProperty"},
        }};
    };

    struct PoseSearchFeatureChannel_Phase
    {
        static constexpr std::string_view Name = "PoseSearchFeatureChannel_Phase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PoseSearchFeatureChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t bone = 0x50;
            static constexpr std::uintptr_t SampleRole = 0x5C;
            static constexpr std::uintptr_t SchemaBoneIdx = 0x60;
            static constexpr std::uintptr_t InputQueryPose = 0x61;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bone", 0x50, "StructProperty"},
            {"SampleRole", 0x5C, "NameProperty"},
            {"SchemaBoneIdx", 0x60, "Int8Property"},
            {"InputQueryPose", 0x61, "EnumProperty"},
        }};
    };

    struct PoseSearchFeatureChannel_Pose
    {
        static constexpr std::string_view Name = "PoseSearchFeatureChannel_Pose";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PoseSearchFeatureChannel_GroupBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SampledBones = 0x58;
            static constexpr std::uintptr_t SchemaBoneIdx = 0x68;
            static constexpr std::uintptr_t InputQueryPose = 0x78;
            static constexpr std::uintptr_t bUseCharacterSpaceVelocities = 0x79;
            static constexpr std::uintptr_t PermutationTimeType = 0x7A;
            static constexpr std::uintptr_t SubChannels = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SampledBones", 0x58, "ArrayProperty"},
            {"SchemaBoneIdx", 0x68, "ArrayProperty"},
            {"InputQueryPose", 0x78, "EnumProperty"},
            {"bUseCharacterSpaceVelocities", 0x79, "BoolProperty"},
            {"PermutationTimeType", 0x7A, "EnumProperty"},
            {"SubChannels", 0x80, "ArrayProperty"},
        }};
    };

    struct PoseSearchFeatureChannel_Position
    {
        static constexpr std::string_view Name = "PoseSearchFeatureChannel_Position";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PoseSearchFeatureChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t bDefaultWithRootBone = 0x50;
            static constexpr std::uintptr_t bone = 0x54;
            static constexpr std::uintptr_t SampleRole = 0x60;
            static constexpr std::uintptr_t OriginBone = 0x64;
            static constexpr std::uintptr_t OriginRole = 0x70;
            static constexpr std::uintptr_t SamplingAttributeId = 0x74;
            static constexpr std::uintptr_t SampleTimeOffset = 0x78;
            static constexpr std::uintptr_t OriginTimeOffset = 0x7C;
            static constexpr std::uintptr_t SchemaBoneIdx = 0x80;
            static constexpr std::uintptr_t SchemaOriginBoneIdx = 0x81;
            static constexpr std::uintptr_t InputQueryPose = 0x82;
            static constexpr std::uintptr_t ComponentStripping = 0x83;
            static constexpr std::uintptr_t PermutationTimeType = 0x84;
            static constexpr std::uintptr_t bNormalizeDisplacement = 0x85;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"bDefaultWithRootBone", 0x50, "BoolProperty"},
            {"bone", 0x54, "StructProperty"},
            {"SampleRole", 0x60, "NameProperty"},
            {"OriginBone", 0x64, "StructProperty"},
            {"OriginRole", 0x70, "NameProperty"},
            {"SamplingAttributeId", 0x74, "IntProperty"},
            {"SampleTimeOffset", 0x78, "FloatProperty"},
            {"OriginTimeOffset", 0x7C, "FloatProperty"},
            {"SchemaBoneIdx", 0x80, "Int8Property"},
            {"SchemaOriginBoneIdx", 0x81, "Int8Property"},
            {"InputQueryPose", 0x82, "EnumProperty"},
            {"ComponentStripping", 0x83, "EnumProperty"},
            {"PermutationTimeType", 0x84, "EnumProperty"},
            {"bNormalizeDisplacement", 0x85, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "BP_GetWorldPosition",
            "BP_GetWorldPositionFromContext",
        }};
    };

    struct PoseSearchFeatureChannel_SamplingTime
    {
        static constexpr std::string_view Name = "PoseSearchFeatureChannel_SamplingTime";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PoseSearchFeatureChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t Weight = 0x50;
            static constexpr std::uintptr_t TimeToMatch = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Weight", 0x50, "FloatProperty"},
            {"TimeToMatch", 0x54, "FloatProperty"},
        }};
    };

    struct PoseSearchFeatureChannel_TimeToEvent
    {
        static constexpr std::string_view Name = "PoseSearchFeatureChannel_TimeToEvent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PoseSearchFeatureChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t Weight = 0x50;
            static constexpr std::uintptr_t SamplingAttributeId = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Weight", 0x50, "FloatProperty"},
            {"SamplingAttributeId", 0x54, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "BP_GetTimeToEvent",
            "BP_GetTimeToEventFromContext",
        }};
    };

    struct PoseSearchFeatureChannel_Trajectory
    {
        static constexpr std::string_view Name = "PoseSearchFeatureChannel_Trajectory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PoseSearchFeatureChannel_GroupBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Samples = 0x58;
            static constexpr std::uintptr_t SubChannels = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Samples", 0x58, "ArrayProperty"},
            {"SubChannels", 0x68, "ArrayProperty"},
        }};
    };

    struct PoseSearchFeatureChannel_Velocity
    {
        static constexpr std::string_view Name = "PoseSearchFeatureChannel_Velocity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PoseSearchFeatureChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t bDefaultWithRootBone = 0x50;
            static constexpr std::uintptr_t bone = 0x54;
            static constexpr std::uintptr_t SampleRole = 0x60;
            static constexpr std::uintptr_t OriginBone = 0x64;
            static constexpr std::uintptr_t OriginRole = 0x70;
            static constexpr std::uintptr_t SamplingAttributeId = 0x74;
            static constexpr std::uintptr_t SampleTimeOffset = 0x78;
            static constexpr std::uintptr_t OriginTimeOffset = 0x7C;
            static constexpr std::uintptr_t SchemaBoneIdx = 0x80;
            static constexpr std::uintptr_t SchemaOriginBoneIdx = 0x81;
            static constexpr std::uintptr_t InputQueryPose = 0x82;
            static constexpr std::uintptr_t bUseCharacterSpaceVelocities = 0x83;
            static constexpr std::uintptr_t bNormalize = 0x84;
            static constexpr std::uintptr_t ComponentStripping = 0x85;
            static constexpr std::uintptr_t PermutationTimeType = 0x86;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"bDefaultWithRootBone", 0x50, "BoolProperty"},
            {"bone", 0x54, "StructProperty"},
            {"SampleRole", 0x60, "NameProperty"},
            {"OriginBone", 0x64, "StructProperty"},
            {"OriginRole", 0x70, "NameProperty"},
            {"SamplingAttributeId", 0x74, "IntProperty"},
            {"SampleTimeOffset", 0x78, "FloatProperty"},
            {"OriginTimeOffset", 0x7C, "FloatProperty"},
            {"SchemaBoneIdx", 0x80, "Int8Property"},
            {"SchemaOriginBoneIdx", 0x81, "Int8Property"},
            {"InputQueryPose", 0x82, "EnumProperty"},
            {"bUseCharacterSpaceVelocities", 0x83, "BoolProperty"},
            {"bNormalize", 0x84, "BoolProperty"},
            {"ComponentStripping", 0x85, "EnumProperty"},
            {"PermutationTimeType", 0x86, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "BP_GetWorldVelocity",
            "BP_GetWorldVelocityFromContext",
        }};
    };

    struct PoseSearchFilter
    {
        static constexpr std::string_view Name = "PoseSearchFilter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PoseSearchFilterMaxPosition
    {
        static constexpr std::string_view Name = "PoseSearchFilterMaxPosition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PoseSearchFilter";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxPositionDistanceSquared = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaxPositionDistanceSquared", 0x8, "FloatProperty"},
        }};
    };

    struct PoseSearchFilterPadding
    {
        static constexpr std::string_view Name = "PoseSearchFilterPadding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PoseSearchFilter";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PoseSearchFilterWedge
    {
        static constexpr std::string_view Name = "PoseSearchFilterWedge";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PoseSearchFilter";
        struct Offsets
        {
            static constexpr std::uintptr_t RadiusOffsets = 0x8;
            static constexpr std::uintptr_t WedgeWidthInDegrees = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RadiusOffsets", 0x8, "StructProperty"},
            {"WedgeWidthInDegrees", 0x10, "FloatProperty"},
        }};
    };

    struct PoseSearchFutureProperties
    {
        static constexpr std::string_view Name = "PoseSearchFutureProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Animation = 0x0;
            static constexpr std::uintptr_t AnimationTime = 0x8;
            static constexpr std::uintptr_t IntervalTime = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Animation", 0x0, "ObjectProperty"},
            {"AnimationTime", 0x8, "FloatProperty"},
            {"IntervalTime", 0xC, "FloatProperty"},
        }};
    };

    struct PoseSearchHistory
    {
        static constexpr std::string_view Name = "PoseSearchHistory";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Trajectory = 0x0;
            static constexpr std::uintptr_t MaxNumPoses = 0x10;
            static constexpr std::uintptr_t SamplingInterval = 0x14;
            static constexpr std::uintptr_t TrajectorySpeedMultiplier = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Trajectory", 0x0, "StructProperty"},
            {"MaxNumPoses", 0x10, "IntProperty"},
            {"SamplingInterval", 0x14, "FloatProperty"},
            {"TrajectorySpeedMultiplier", 0x18, "FloatProperty"},
        }};
    };

    struct PoseSearchHistoryCollectorAnimNodeLibrary
    {
        static constexpr std::string_view Name = "PoseSearchHistoryCollectorAnimNodeLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "ConvertToPoseHistoryNode",
            "ConvertToPoseHistoryNodePure",
            "GetPoseHistoryBoneWorldLinearVelocity",
            "GetPoseHistoryBoneWorldTransform",
            "GetPoseHistoryNodeTransformTrajectory",
            "GetPoseHistoryReference",
            "SetPoseHistoryNodeTransformTrajectory",
        }};
    };

    struct PoseSearchHistoryCollectorAnimNodeReference
    {
        static constexpr std::string_view Name = "PoseSearchHistoryCollectorAnimNodeReference";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AnimNodeReference";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PoseSearchInteractionAsset
    {
        static constexpr std::string_view Name = "PoseSearchInteractionAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiAnimAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x28;
            static constexpr std::uintptr_t WarpingBankingWeight = 0x38;
            static constexpr std::uintptr_t MinimalTranslationWeight = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Items", 0x28, "ArrayProperty"},
            {"WarpingBankingWeight", 0x38, "FloatProperty"},
            {"MinimalTranslationWeight", 0x3C, "FloatProperty"},
        }};
    };

    struct PoseSearchInteractionAssetItem
    {
        static constexpr std::string_view Name = "PoseSearchInteractionAssetItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Animation = 0x0;
            static constexpr std::uintptr_t Role = 0x8;
            static constexpr std::uintptr_t WarpingWeightRotation = 0xC;
            static constexpr std::uintptr_t WarpingWeightTranslation = 0x10;
            static constexpr std::uintptr_t origin = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Animation", 0x0, "ObjectProperty"},
            {"Role", 0x8, "NameProperty"},
            {"WarpingWeightRotation", 0xC, "FloatProperty"},
            {"WarpingWeightTranslation", 0x10, "FloatProperty"},
            {"origin", 0x20, "StructProperty"},
        }};
    };

    struct PoseSearchInteractionAvailability
    {
        static constexpr std::string_view Name = "PoseSearchInteractionAvailability";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Database = 0x0;
            static constexpr std::uintptr_t Tag = 0x8;
            static constexpr std::uintptr_t RolesFilter = 0x10;
            static constexpr std::uintptr_t BroadPhaseRadius = 0x20;
            static constexpr std::uintptr_t BroadPhaseRadiusIncrementOnInteraction = 0x24;
            static constexpr std::uintptr_t bDisableCollisions = 0x28;
            static constexpr std::uintptr_t TickPriority = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Database", 0x0, "ObjectProperty"},
            {"Tag", 0x8, "NameProperty"},
            {"RolesFilter", 0x10, "ArrayProperty"},
            {"BroadPhaseRadius", 0x20, "FloatProperty"},
            {"BroadPhaseRadiusIncrementOnInteraction", 0x24, "FloatProperty"},
            {"bDisableCollisions", 0x28, "BoolProperty"},
            {"TickPriority", 0x2C, "IntProperty"},
        }};
    };

    struct PoseSearchInteractionLibrary
    {
        static constexpr std::string_view Name = "PoseSearchInteractionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 10> FunctionNames{{
            "CalculateFullAlignedTransform",
            "CalculateFullAlignedTransforms",
            "CalculateNoAlignedTransform",
            "GetConstraint",
            "GetMontageContinuingProperties",
            "GetMotionMatchInteractionConstraint",
            "MotionMatchInteraction",
            "MotionMatchInteraction_Pure",
            "MotionMatchMulti",
            "UpdateConstraints",
        }};
    };

    struct PoseSearchInteractionSubsystem
    {
        static constexpr std::string_view Name = "PoseSearchInteractionSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PoseSearchLibrary
    {
        static constexpr std::string_view Name = "PoseSearchLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "ClearPoseSearchDatabasesManagement",
            "GetActor",
            "GetActorForRole",
            "GetDatabaseTags",
            "IsAnimationAssetLooping",
            "MotionMatch",
            "OverridePoseHistoryFromOwningMesh",
        }};
    };

    struct PoseSearchMotionMatchMultiQuery
    {
        static constexpr std::string_view Name = "PoseSearchMotionMatchMultiQuery";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Database = 0x0;
            static constexpr std::uintptr_t AnimContextsRoles = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Database", 0x0, "ObjectProperty"},
            {"AnimContextsRoles", 0x8, "ArrayProperty"},
        }};
    };

    struct PoseSearchNormalizationSet
    {
        static constexpr std::string_view Name = "PoseSearchNormalizationSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Databases = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Databases", 0x28, "ArrayProperty"},
        }};
    };

    struct PoseSearchQueryTrajectory
    {
        static constexpr std::string_view Name = "PoseSearchQueryTrajectory";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Samples = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Samples", 0x0, "ArrayProperty"},
        }};
    };

    struct PoseSearchQueryTrajectorySample
    {
        static constexpr std::string_view Name = "PoseSearchQueryTrajectorySample";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Facing = 0x0;
            static constexpr std::uintptr_t Position = 0x20;
            static constexpr std::uintptr_t AccumulatedSeconds = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Facing", 0x0, "StructProperty"},
            {"Position", 0x20, "StructProperty"},
            {"AccumulatedSeconds", 0x38, "FloatProperty"},
        }};
    };

    struct PoseSearchRoledSkeleton
    {
        static constexpr std::string_view Name = "PoseSearchRoledSkeleton";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t skeleton = 0x0;
            static constexpr std::uintptr_t MirrorDataTable = 0x8;
            static constexpr std::uintptr_t Role = 0x10;
            static constexpr std::uintptr_t BoneReferences = 0x18;
            static constexpr std::uintptr_t RequiredCurves = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"skeleton", 0x0, "ObjectProperty"},
            {"MirrorDataTable", 0x8, "ObjectProperty"},
            {"Role", 0x10, "NameProperty"},
            {"BoneReferences", 0x18, "ArrayProperty"},
            {"RequiredCurves", 0x28, "ArrayProperty"},
        }};
    };

    struct PoseSearchSchema
    {
        static constexpr std::string_view Name = "PoseSearchSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SampleRate = 0x28;
            static constexpr std::uintptr_t Skeletons = 0x30;
            static constexpr std::uintptr_t Channels = 0x40;
            static constexpr std::uintptr_t FinalizedChannels = 0x50;
            static constexpr std::uintptr_t SchemaCardinality = 0x60;
            static constexpr std::uintptr_t bAddDataPadding = 0x64;
            static constexpr std::uintptr_t bInjectAdditionalDebugChannels = 0x65;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SampleRate", 0x28, "IntProperty"},
            {"Skeletons", 0x30, "ArrayProperty"},
            {"Channels", 0x40, "ArrayProperty"},
            {"FinalizedChannels", 0x50, "ArrayProperty"},
            {"SchemaCardinality", 0x60, "IntProperty"},
            {"bAddDataPadding", 0x64, "BoolProperty"},
            {"bInjectAdditionalDebugChannels", 0x65, "BoolProperty"},
        }};
    };

    struct PoseSearchSettings
    {
        static constexpr std::string_view Name = "PoseSearchSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AvailabilitiesBufferSize = 0x30;
            static constexpr std::uintptr_t MaxDatabaseEditorPreviewActors = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AvailabilitiesBufferSize", 0x30, "IntProperty"},
            {"MaxDatabaseEditorPreviewActors", 0x34, "IntProperty"},
        }};
    };

    struct PoseSearchTrajectoryData
    {
        static constexpr std::string_view Name = "PoseSearchTrajectoryData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RotateTowardsMovementSpeed = 0x0;
            static constexpr std::uintptr_t MaxControllerYawRate = 0x4;
            static constexpr std::uintptr_t BendVelocityTowardsAcceleration = 0x8;
            static constexpr std::uintptr_t bUseSpeedRemappingCurve = 0xC;
            static constexpr std::uintptr_t SpeedRemappingCurve = 0x10;
            static constexpr std::uintptr_t bUseAccelerationRemappingCurve = 0x58;
            static constexpr std::uintptr_t AccelerationRemappingCurve = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"RotateTowardsMovementSpeed", 0x0, "FloatProperty"},
            {"MaxControllerYawRate", 0x4, "FloatProperty"},
            {"BendVelocityTowardsAcceleration", 0x8, "FloatProperty"},
            {"bUseSpeedRemappingCurve", 0xC, "BoolProperty"},
            {"SpeedRemappingCurve", 0x10, "StructProperty"},
            {"bUseAccelerationRemappingCurve", 0x58, "BoolProperty"},
            {"AccelerationRemappingCurve", 0x60, "StructProperty"},
        }};
    };

    struct PoseSearchTrajectoryLibrary
    {
        static constexpr std::string_view Name = "PoseSearchTrajectoryLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 11> FunctionNames{{
            "DrawTransformTrajectory",
            "GetTransformTrajectoryAngularVelocity",
            "GetTransformTrajectorySampleAtTime",
            "GetTransformTrajectorySampleTransform",
            "GetTransformTrajectoryVelocity",
            "HandleTransformTrajectoryWorldCollisions",
            "HandleTransformTrajectoryWorldCollisionsWithGravity",
            "PoseSearchGeneratePredictorTransformTrajectory",
            "PoseSearchGenerateTransformTrajectory",
            "PoseSearchGenerateTransformTrajectoryWithPredictor",
            "PoseSearchGenerateWarpedTransformTrajectory",
        }};
    };

    struct PoseSearchTrajectoryPredictorInterface
    {
        static constexpr std::string_view Name = "PoseSearchTrajectoryPredictorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetAngularVelocity",
            "GetCurrentState",
            "GetGravity",
            "GetVelocity",
            "Predict",
        }};
    };

    struct PoseSearchTrajectorySample
    {
        static constexpr std::string_view Name = "PoseSearchTrajectorySample";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Offset = 0x0;
            static constexpr std::uintptr_t Flags = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Offset", 0x0, "FloatProperty"},
            {"Flags", 0x4, "IntProperty"},
        }};
    };

    struct PoseSearchTrajectory_WorldCollisionResults
    {
        static constexpr std::string_view Name = "PoseSearchTrajectory_WorldCollisionResults";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeToLand = 0x0;
            static constexpr std::uintptr_t LandSpeed = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TimeToLand", 0x0, "FloatProperty"},
            {"LandSpeed", 0x4, "FloatProperty"},
        }};
    };

}
