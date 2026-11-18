#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MotionWarping
{
    struct AnimNotifyState_MotionWarping
    {
        static constexpr std::string_view Name = "AnimNotifyState_MotionWarping";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState";
        struct Offsets
        {
            static constexpr std::uintptr_t RootMotionModifier = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RootMotionModifier", 0x30, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "AddRootMotionModifier",
            "OnRootMotionModifierActivate",
            "OnRootMotionModifierDeactivate",
            "OnRootMotionModifierUpdate",
            "OnWarpBegin",
            "OnWarpEnd",
            "OnWarpUpdate",
        }};
    };

    struct AttributeBasedRootMotionComponent
    {
        static constexpr std::string_view Name = "AttributeBasedRootMotionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableRootMotion = 0xC0;
            static constexpr std::uintptr_t Mode = 0xC4;
            static constexpr std::uintptr_t CharacterOwner = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bEnableRootMotion", 0xC0, "BoolProperty"},
            {"Mode", 0xC4, "EnumProperty"},
            {"CharacterOwner", 0xF8, "WeakObjectProperty"},
        }};
    };

    struct AttributeBasedRootMotionComponentPrePhysicsTickFunction
    {
        static constexpr std::string_view Name = "AttributeBasedRootMotionComponentPrePhysicsTickFunction";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TickFunction";
        struct Offsets
        {
            static constexpr std::uintptr_t TickGroup = 0x8;
            static constexpr std::uintptr_t EndTickGroup = 0x9;
            static constexpr std::uintptr_t bAllowTickOnDedicatedServer = 0xA;
            static constexpr std::uintptr_t bCanEverTick = 0xA;
            static constexpr std::uintptr_t bStartWithTickEnabled = 0xA;
            static constexpr std::uintptr_t bTickEvenWhenPaused = 0xA;
            static constexpr std::uintptr_t TickInterval = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TickGroup", 0x8, "ByteProperty"},
            {"EndTickGroup", 0x9, "ByteProperty"},
            {"bAllowTickOnDedicatedServer", 0xA, "BoolProperty"},
            {"bCanEverTick", 0xA, "BoolProperty"},
            {"bStartWithTickEnabled", 0xA, "BoolProperty"},
            {"bTickEvenWhenPaused", 0xA, "BoolProperty"},
            {"TickInterval", 0xC, "FloatProperty"},
        }};
    };

    struct MotionDeltaTrack
    {
        static constexpr std::string_view Name = "MotionDeltaTrack";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BoneTransformTrack = 0x0;
            static constexpr std::uintptr_t DeltaTranslationTrack = 0x10;
            static constexpr std::uintptr_t DeltaRotationTrack = 0x20;
            static constexpr std::uintptr_t TotalTranslation = 0x30;
            static constexpr std::uintptr_t TotalRotation = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"BoneTransformTrack", 0x0, "ArrayProperty"},
            {"DeltaTranslationTrack", 0x10, "ArrayProperty"},
            {"DeltaRotationTrack", 0x20, "ArrayProperty"},
            {"TotalTranslation", 0x30, "StructProperty"},
            {"TotalRotation", 0x48, "StructProperty"},
        }};
    };

    struct MotionDeltaTrackContainer
    {
        static constexpr std::string_view Name = "MotionDeltaTrackContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Tracks = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Tracks", 0x0, "ArrayProperty"},
        }};
    };

    struct MotionWarpingBaseAdapter
    {
        static constexpr std::string_view Name = "MotionWarpingBaseAdapter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MotionWarpingCharacterAdapter
    {
        static constexpr std::string_view Name = "MotionWarpingCharacterAdapter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MotionWarpingBaseAdapter";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MotionWarpingComponent
    {
        static constexpr std::string_view Name = "MotionWarpingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bSearchForWindowsInAnimsWithinMontages = 0xC0;
            static constexpr std::uintptr_t OnPreUpdate = 0xC8;
            static constexpr std::uintptr_t OwnerAdapter = 0xD8;
            static constexpr std::uintptr_t PredictionAdapter = 0xE0;
            static constexpr std::uintptr_t CachedOwnerAdapter = 0xE8;
            static constexpr std::uintptr_t Modifiers = 0xF0;
            static constexpr std::uintptr_t WarpTargets = 0x100;
            static constexpr std::uintptr_t SwitchOffConditions = 0x110;
            static constexpr std::uintptr_t bPredictingTrajectory = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bSearchForWindowsInAnimsWithinMontages", 0xC0, "BoolProperty"},
            {"OnPreUpdate", 0xC8, "MulticastInlineDelegateProperty"},
            {"OwnerAdapter", 0xD8, "ObjectProperty"},
            {"PredictionAdapter", 0xE0, "ObjectProperty"},
            {"CachedOwnerAdapter", 0xE8, "ObjectProperty"},
            {"Modifiers", 0xF0, "ArrayProperty"},
            {"WarpTargets", 0x100, "ArrayProperty"},
            {"SwitchOffConditions", 0x110, "ArrayProperty"},
            {"bPredictingTrajectory", 0x120, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 11> FunctionNames{{
            "AddOrUpdateWarpTarget",
            "AddOrUpdateWarpTargetFromComponent",
            "AddOrUpdateWarpTargetFromLocation",
            "AddOrUpdateWarpTargetFromLocationAndRotation",
            "AddOrUpdateWarpTargetFromTransform",
            "AddSwitchOffCondition",
            "DisableAllRootMotionModifiers",
            "FindWarpTarget",
            "RemoveAllWarpTargets",
            "RemoveWarpTarget",
            "RemoveWarpTargets",
        }};
    };

    struct MotionWarpingFunctionLibrary
    {
        static constexpr std::string_view Name = "MotionWarpingFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "MakeMotionWarpingTarget",
        }};
    };

    struct MotionWarpingMontageTrajectoryAdapter
    {
        static constexpr std::string_view Name = "MotionWarpingMontageTrajectoryAdapter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MotionWarpingBaseAdapter";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedWarpState = 0x38;
            static constexpr std::uintptr_t Montage = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedWarpState", 0x38, "StructProperty"},
            {"Montage", 0x78, "ObjectProperty"},
        }};
    };

    struct MotionWarpingSwapState
    {
        static constexpr std::string_view Name = "MotionWarpingSwapState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Modifiers = 0x0;
            static constexpr std::uintptr_t WarpTargets = 0x10;
            static constexpr std::uintptr_t SwitchOffConditions = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Modifiers", 0x0, "ArrayProperty"},
            {"WarpTargets", 0x10, "ArrayProperty"},
            {"SwitchOffConditions", 0x20, "ArrayProperty"},
        }};
    };

    struct MotionWarpingSwitchOffAngleToTargetCondition
    {
        static constexpr std::string_view Name = "MotionWarpingSwitchOffAngleToTargetCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MotionWarpingSwitchOffCondition";
        struct Offsets
        {
            static constexpr std::uintptr_t Operator = 0x48;
            static constexpr std::uintptr_t Angle = 0x4C;
            static constexpr std::uintptr_t bIgnoreZAxis = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Operator", 0x48, "EnumProperty"},
            {"Angle", 0x4C, "FloatProperty"},
            {"bIgnoreZAxis", 0x50, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "CreateSwitchOffAngleToTargetCondition",
        }};
    };

    struct MotionWarpingSwitchOffBlueprintableCondition
    {
        static constexpr std::string_view Name = "MotionWarpingSwitchOffBlueprintableCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MotionWarpingSwitchOffCondition";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseWarpTargetAsTargetLocation = 0x28;
            static constexpr std::uintptr_t Effect = 0x29;
            static constexpr std::uintptr_t OwnerActor = 0x30;
            static constexpr std::uintptr_t TargetActor = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bUseWarpTargetAsTargetLocation", 0x28, "BoolProperty"},
            {"Effect", 0x29, "EnumProperty"},
            {"OwnerActor", 0x30, "ObjectProperty"},
            {"TargetActor", 0x38, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "BP_Check",
            "BP_ExtraDebugInfo",
            "CreateSwitchOffBlueprintableCondition",
        }};
    };

    struct MotionWarpingSwitchOffCompositeCondition
    {
        static constexpr std::string_view Name = "MotionWarpingSwitchOffCompositeCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MotionWarpingSwitchOffCondition";
        struct Offsets
        {
            static constexpr std::uintptr_t SwitchOffConditionA = 0x48;
            static constexpr std::uintptr_t LogicOperator = 0x50;
            static constexpr std::uintptr_t SwitchOffConditionB = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SwitchOffConditionA", 0x48, "ObjectProperty"},
            {"LogicOperator", 0x50, "EnumProperty"},
            {"SwitchOffConditionB", 0x58, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "CreateSwitchOffCompositeCondition",
        }};
    };

    struct MotionWarpingSwitchOffCondition
    {
        static constexpr std::string_view Name = "MotionWarpingSwitchOffCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseWarpTargetAsTargetLocation = 0x28;
            static constexpr std::uintptr_t Effect = 0x29;
            static constexpr std::uintptr_t OwnerActor = 0x30;
            static constexpr std::uintptr_t TargetActor = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bUseWarpTargetAsTargetLocation", 0x28, "BoolProperty"},
            {"Effect", 0x29, "EnumProperty"},
            {"OwnerActor", 0x30, "ObjectProperty"},
            {"TargetActor", 0x38, "ObjectProperty"},
        }};
    };

    struct MotionWarpingSwitchOffDistanceCondition
    {
        static constexpr std::string_view Name = "MotionWarpingSwitchOffDistanceCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MotionWarpingSwitchOffCondition";
        struct Offsets
        {
            static constexpr std::uintptr_t Operator = 0x48;
            static constexpr std::uintptr_t AxesType = 0x49;
            static constexpr std::uintptr_t Distance = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Operator", 0x48, "EnumProperty"},
            {"AxesType", 0x49, "EnumProperty"},
            {"Distance", 0x4C, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "CreateSwitchOffDistanceCondition",
        }};
    };

    struct MotionWarpingTarget
    {
        static constexpr std::string_view Name = "MotionWarpingTarget";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Location = 0x8;
            static constexpr std::uintptr_t Rotation = 0x20;
            static constexpr std::uintptr_t Component = 0x38;
            static constexpr std::uintptr_t BoneName = 0x40;
            static constexpr std::uintptr_t bFollowComponent = 0x44;
            static constexpr std::uintptr_t LocationOffsetDirection = 0x45;
            static constexpr std::uintptr_t LocationOffset = 0x48;
            static constexpr std::uintptr_t RotationOffset = 0x60;
            static constexpr std::uintptr_t AvatarActor = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Location", 0x8, "StructProperty"},
            {"Rotation", 0x20, "StructProperty"},
            {"Component", 0x38, "WeakObjectProperty"},
            {"BoneName", 0x40, "NameProperty"},
            {"bFollowComponent", 0x44, "BoolProperty"},
            {"LocationOffsetDirection", 0x45, "EnumProperty"},
            {"LocationOffset", 0x48, "StructProperty"},
            {"RotationOffset", 0x60, "StructProperty"},
            {"AvatarActor", 0x78, "WeakObjectProperty"},
        }};
    };

    struct MotionWarpingUpdateContext
    {
        static constexpr std::string_view Name = "MotionWarpingUpdateContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Animation = 0x0;
            static constexpr std::uintptr_t PreviousPosition = 0x8;
            static constexpr std::uintptr_t CurrentPosition = 0xC;
            static constexpr std::uintptr_t Weight = 0x10;
            static constexpr std::uintptr_t PlayRate = 0x14;
            static constexpr std::uintptr_t DeltaSeconds = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Animation", 0x0, "WeakObjectProperty"},
            {"PreviousPosition", 0x8, "FloatProperty"},
            {"CurrentPosition", 0xC, "FloatProperty"},
            {"Weight", 0x10, "FloatProperty"},
            {"PlayRate", 0x14, "FloatProperty"},
            {"DeltaSeconds", 0x18, "FloatProperty"},
        }};
    };

    struct MotionWarpingUtilities
    {
        static constexpr std::string_view Name = "MotionWarpingUtilities";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "ExtractBoneTransformFromAnimationAtTime",
            "ExtractRootMotionFromAnimation",
            "GetMotionWarpingWindowsForWarpTargetFromAnimation",
            "GetMotionWarpingWindowsFromAnimation",
        }};
    };

    struct MotionWarpingWindowData
    {
        static constexpr std::string_view Name = "MotionWarpingWindowData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimNotify = 0x0;
            static constexpr std::uintptr_t StartTime = 0x8;
            static constexpr std::uintptr_t EndTime = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AnimNotify", 0x0, "ObjectProperty"},
            {"StartTime", 0x8, "FloatProperty"},
            {"EndTime", 0xC, "FloatProperty"},
        }};
    };

    struct PrecomputedWarpCurve
    {
        static constexpr std::string_view Name = "PrecomputedWarpCurve";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CurveType = 0x0;
            static constexpr std::uintptr_t StartRatio = 0x4;
            static constexpr std::uintptr_t EndRatio = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CurveType", 0x0, "EnumProperty"},
            {"StartRatio", 0x4, "FloatProperty"},
            {"EndRatio", 0x8, "FloatProperty"},
        }};
    };

    struct PrecomputedWarpSteeringSettings
    {
        static constexpr std::string_view Name = "PrecomputedWarpSteeringSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableSmoothing = 0x0;
            static constexpr std::uintptr_t SmoothStiffness = 0x4;
            static constexpr std::uintptr_t SmoothDamping = 0x8;
            static constexpr std::uintptr_t AngleThreshold = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bEnableSmoothing", 0x0, "BoolProperty"},
            {"SmoothStiffness", 0x4, "FloatProperty"},
            {"SmoothDamping", 0x8, "FloatProperty"},
            {"AngleThreshold", 0xC, "FloatProperty"},
        }};
    };

    struct RootMotionModifier
    {
        static constexpr std::string_view Name = "RootMotionModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Animation = 0x28;
            static constexpr std::uintptr_t StartTime = 0x30;
            static constexpr std::uintptr_t EndTime = 0x34;
            static constexpr std::uintptr_t PreviousPosition = 0x38;
            static constexpr std::uintptr_t CurrentPosition = 0x3C;
            static constexpr std::uintptr_t Weight = 0x40;
            static constexpr std::uintptr_t PlayRate = 0x44;
            static constexpr std::uintptr_t StartTransform = 0x50;
            static constexpr std::uintptr_t ActualStartTime = 0xB0;
            static constexpr std::uintptr_t TotalRootMotionWithinWindow = 0xC0;
            static constexpr std::uintptr_t OnActivateDelegate = 0x120;
            static constexpr std::uintptr_t OnUpdateDelegate = 0x12C;
            static constexpr std::uintptr_t OnDeactivateDelegate = 0x138;
            static constexpr std::uintptr_t State = 0x144;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"Animation", 0x28, "WeakObjectProperty"},
            {"StartTime", 0x30, "FloatProperty"},
            {"EndTime", 0x34, "FloatProperty"},
            {"PreviousPosition", 0x38, "FloatProperty"},
            {"CurrentPosition", 0x3C, "FloatProperty"},
            {"Weight", 0x40, "FloatProperty"},
            {"PlayRate", 0x44, "FloatProperty"},
            {"StartTransform", 0x50, "StructProperty"},
            {"ActualStartTime", 0xB0, "FloatProperty"},
            {"TotalRootMotionWithinWindow", 0xC0, "StructProperty"},
            {"OnActivateDelegate", 0x120, "DelegateProperty"},
            {"OnUpdateDelegate", 0x12C, "DelegateProperty"},
            {"OnDeactivateDelegate", 0x138, "DelegateProperty"},
            {"State", 0x144, "EnumProperty"},
        }};
    };

    struct RootMotionModifier_AdjustmentBlendWarp
    {
        static constexpr std::string_view Name = "RootMotionModifier_AdjustmentBlendWarp";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RootMotionModifier_Warp";
        struct Offsets
        {
            static constexpr std::uintptr_t bWarpIKBones = 0x360;
            static constexpr std::uintptr_t IKBones = 0x368;
            static constexpr std::uintptr_t CachedMeshTransform = 0x380;
            static constexpr std::uintptr_t CachedMeshRelativeTransform = 0x3E0;
            static constexpr std::uintptr_t CachedRootMotion = 0x440;
            static constexpr std::uintptr_t Result = 0x4A0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bWarpIKBones", 0x360, "BoolProperty"},
            {"IKBones", 0x368, "ArrayProperty"},
            {"CachedMeshTransform", 0x380, "StructProperty"},
            {"CachedMeshRelativeTransform", 0x3E0, "StructProperty"},
            {"CachedRootMotion", 0x440, "StructProperty"},
            {"Result", 0x4A0, "StructProperty"},
        }};
    };

    struct RootMotionModifier_Blueprintable
    {
        static constexpr std::string_view Name = "RootMotionModifier_Blueprintable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RootMotionModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t Animation = 0x28;
            static constexpr std::uintptr_t StartTime = 0x30;
            static constexpr std::uintptr_t EndTime = 0x34;
            static constexpr std::uintptr_t PreviousPosition = 0x38;
            static constexpr std::uintptr_t CurrentPosition = 0x3C;
            static constexpr std::uintptr_t Weight = 0x40;
            static constexpr std::uintptr_t PlayRate = 0x44;
            static constexpr std::uintptr_t StartTransform = 0x50;
            static constexpr std::uintptr_t ActualStartTime = 0xB0;
            static constexpr std::uintptr_t TotalRootMotionWithinWindow = 0xC0;
            static constexpr std::uintptr_t OnActivateDelegate = 0x120;
            static constexpr std::uintptr_t OnUpdateDelegate = 0x12C;
            static constexpr std::uintptr_t OnDeactivateDelegate = 0x138;
            static constexpr std::uintptr_t State = 0x144;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"Animation", 0x28, "WeakObjectProperty"},
            {"StartTime", 0x30, "FloatProperty"},
            {"EndTime", 0x34, "FloatProperty"},
            {"PreviousPosition", 0x38, "FloatProperty"},
            {"CurrentPosition", 0x3C, "FloatProperty"},
            {"Weight", 0x40, "FloatProperty"},
            {"PlayRate", 0x44, "FloatProperty"},
            {"StartTransform", 0x50, "StructProperty"},
            {"ActualStartTime", 0xB0, "FloatProperty"},
            {"TotalRootMotionWithinWindow", 0xC0, "StructProperty"},
            {"OnActivateDelegate", 0x120, "DelegateProperty"},
            {"OnUpdateDelegate", 0x12C, "DelegateProperty"},
            {"OnDeactivateDelegate", 0x138, "DelegateProperty"},
            {"State", 0x144, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "BP_ProcessRootMotion",
        }};
    };

    struct RootMotionModifier_PrecomputedWarp
    {
        static constexpr std::string_view Name = "RootMotionModifier_PrecomputedWarp";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RootMotionModifier_Warp";
        struct Offsets
        {
            static constexpr std::uintptr_t TranslationWarpingCurve = 0x360;
            static constexpr std::uintptr_t bSeparateTranslationCurves = 0x36C;
            static constexpr std::uintptr_t TranslationWarpingCurve_InMovementDirection = 0x370;
            static constexpr std::uintptr_t TranslationWarpingCurve_OutOfMovementDirection = 0x37C;
            static constexpr std::uintptr_t RotationWarpingCurve = 0x388;
            static constexpr std::uintptr_t AlignOffset = 0x3A0;
            static constexpr std::uintptr_t bForceTargetTransformUpright = 0x400;
            static constexpr std::uintptr_t UpdateMode = 0x404;
            static constexpr std::uintptr_t Disable = 0x408;
            static constexpr std::uintptr_t bEnableSteering = 0x40C;
            static constexpr std::uintptr_t SteeringSettings = 0x410;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"TranslationWarpingCurve", 0x360, "StructProperty"},
            {"bSeparateTranslationCurves", 0x36C, "BoolProperty"},
            {"TranslationWarpingCurve_InMovementDirection", 0x370, "StructProperty"},
            {"TranslationWarpingCurve_OutOfMovementDirection", 0x37C, "StructProperty"},
            {"RotationWarpingCurve", 0x388, "StructProperty"},
            {"AlignOffset", 0x3A0, "StructProperty"},
            {"bForceTargetTransformUpright", 0x400, "BoolProperty"},
            {"UpdateMode", 0x404, "EnumProperty"},
            {"Disable", 0x408, "NameProperty"},
            {"bEnableSteering", 0x40C, "BoolProperty"},
            {"SteeringSettings", 0x410, "StructProperty"},
        }};
    };

    struct RootMotionModifier_Scale
    {
        static constexpr std::string_view Name = "RootMotionModifier_Scale";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RootMotionModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t Scale = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Scale", 0x150, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "AddRootMotionModifierScale",
        }};
    };

    struct RootMotionModifier_SimpleWarp
    {
        static constexpr std::string_view Name = "RootMotionModifier_SimpleWarp";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RootMotionModifier_Warp";
        struct Offsets
        {
            static constexpr std::uintptr_t WarpTargetName = 0x150;
            static constexpr std::uintptr_t WarpPointAnimProvider = 0x154;
            static constexpr std::uintptr_t WarpPointAnimTransform = 0x160;
            static constexpr std::uintptr_t WarpPointAnimBoneName = 0x1C0;
            static constexpr std::uintptr_t bWarpTranslation = 0x1C4;
            static constexpr std::uintptr_t bIgnoreZAxis = 0x1C5;
            static constexpr std::uintptr_t bWarpToFeetLocation = 0x1C6;
            static constexpr std::uintptr_t AddTranslationEasingFunc = 0x1C7;
            static constexpr std::uintptr_t AddTranslationEasingCurve = 0x1C8;
            static constexpr std::uintptr_t bWarpRotation = 0x1D0;
            static constexpr std::uintptr_t RotationType = 0x1D1;
            static constexpr std::uintptr_t RotationMethod = 0x1D2;
            static constexpr std::uintptr_t bSubtractRemainingRootMotion = 0x1D3;
            static constexpr std::uintptr_t AdditionalRotationOffset = 0x1D8;
            static constexpr std::uintptr_t WarpRotationTimeMultiplier = 0x1F0;
            static constexpr std::uintptr_t WarpMaxRotationRate = 0x1F4;
            static constexpr std::uintptr_t CachedTargetTransform = 0x200;
            static constexpr std::uintptr_t RootMotionRemainingAfterNotify = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"WarpTargetName", 0x150, "NameProperty"},
            {"WarpPointAnimProvider", 0x154, "EnumProperty"},
            {"WarpPointAnimTransform", 0x160, "StructProperty"},
            {"WarpPointAnimBoneName", 0x1C0, "NameProperty"},
            {"bWarpTranslation", 0x1C4, "BoolProperty"},
            {"bIgnoreZAxis", 0x1C5, "BoolProperty"},
            {"bWarpToFeetLocation", 0x1C6, "BoolProperty"},
            {"AddTranslationEasingFunc", 0x1C7, "EnumProperty"},
            {"AddTranslationEasingCurve", 0x1C8, "ObjectProperty"},
            {"bWarpRotation", 0x1D0, "BoolProperty"},
            {"RotationType", 0x1D1, "EnumProperty"},
            {"RotationMethod", 0x1D2, "EnumProperty"},
            {"bSubtractRemainingRootMotion", 0x1D3, "BoolProperty"},
            {"AdditionalRotationOffset", 0x1D8, "StructProperty"},
            {"WarpRotationTimeMultiplier", 0x1F0, "FloatProperty"},
            {"WarpMaxRotationRate", 0x1F4, "FloatProperty"},
            {"CachedTargetTransform", 0x200, "StructProperty"},
            {"RootMotionRemainingAfterNotify", 0x260, "StructProperty"},
        }};
    };

    struct RootMotionModifier_SkewWarp
    {
        static constexpr std::string_view Name = "RootMotionModifier_SkewWarp";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RootMotionModifier_Warp";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxSpeedClampRatio = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaxSpeedClampRatio", 0x360, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "AddRootMotionModifierSkewWarp",
        }};
    };

    struct RootMotionModifier_Warp
    {
        static constexpr std::string_view Name = "RootMotionModifier_Warp";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RootMotionModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t WarpTargetName = 0x150;
            static constexpr std::uintptr_t WarpPointAnimProvider = 0x154;
            static constexpr std::uintptr_t WarpPointAnimTransform = 0x160;
            static constexpr std::uintptr_t WarpPointAnimBoneName = 0x1C0;
            static constexpr std::uintptr_t bWarpTranslation = 0x1C4;
            static constexpr std::uintptr_t bIgnoreZAxis = 0x1C5;
            static constexpr std::uintptr_t bWarpToFeetLocation = 0x1C6;
            static constexpr std::uintptr_t AddTranslationEasingFunc = 0x1C7;
            static constexpr std::uintptr_t AddTranslationEasingCurve = 0x1C8;
            static constexpr std::uintptr_t bWarpRotation = 0x1D0;
            static constexpr std::uintptr_t RotationType = 0x1D1;
            static constexpr std::uintptr_t RotationMethod = 0x1D2;
            static constexpr std::uintptr_t bSubtractRemainingRootMotion = 0x1D3;
            static constexpr std::uintptr_t AdditionalRotationOffset = 0x1D8;
            static constexpr std::uintptr_t WarpRotationTimeMultiplier = 0x1F0;
            static constexpr std::uintptr_t WarpMaxRotationRate = 0x1F4;
            static constexpr std::uintptr_t CachedTargetTransform = 0x200;
            static constexpr std::uintptr_t RootMotionRemainingAfterNotify = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"WarpTargetName", 0x150, "NameProperty"},
            {"WarpPointAnimProvider", 0x154, "EnumProperty"},
            {"WarpPointAnimTransform", 0x160, "StructProperty"},
            {"WarpPointAnimBoneName", 0x1C0, "NameProperty"},
            {"bWarpTranslation", 0x1C4, "BoolProperty"},
            {"bIgnoreZAxis", 0x1C5, "BoolProperty"},
            {"bWarpToFeetLocation", 0x1C6, "BoolProperty"},
            {"AddTranslationEasingFunc", 0x1C7, "EnumProperty"},
            {"AddTranslationEasingCurve", 0x1C8, "ObjectProperty"},
            {"bWarpRotation", 0x1D0, "BoolProperty"},
            {"RotationType", 0x1D1, "EnumProperty"},
            {"RotationMethod", 0x1D2, "EnumProperty"},
            {"bSubtractRemainingRootMotion", 0x1D3, "BoolProperty"},
            {"AdditionalRotationOffset", 0x1D8, "StructProperty"},
            {"WarpRotationTimeMultiplier", 0x1F0, "FloatProperty"},
            {"WarpMaxRotationRate", 0x1F4, "FloatProperty"},
            {"CachedTargetTransform", 0x200, "StructProperty"},
            {"RootMotionRemainingAfterNotify", 0x260, "StructProperty"},
        }};
    };

    struct SwitchOffConditionData
    {
        static constexpr std::string_view Name = "SwitchOffConditionData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WarpTargetName = 0x0;
            static constexpr std::uintptr_t SwitchOffConditions = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WarpTargetName", 0x0, "NameProperty"},
            {"SwitchOffConditions", 0x8, "ArrayProperty"},
        }};
    };

}
