#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ContextualAnimation
{
    struct AnimNotifyState_EarlyOutContextualAnimWindow
    {
        static constexpr std::string_view Name = "AnimNotifyState_EarlyOutContextualAnimWindow";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState";
        struct Offsets
        {
            static constexpr std::uintptr_t bStopEveryone = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bStopEveryone", 0x30, "BoolProperty"},
        }};
    };

    struct AnimNotifyState_IKWindow
    {
        static constexpr std::string_view Name = "AnimNotifyState_IKWindow";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState";
        struct Offsets
        {
            static constexpr std::uintptr_t GoalName = 0x30;
            static constexpr std::uintptr_t BlendIn = 0x38;
            static constexpr std::uintptr_t BlendOut = 0x68;
            static constexpr std::uintptr_t bEnable = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GoalName", 0x30, "NameProperty"},
            {"BlendIn", 0x38, "StructProperty"},
            {"BlendOut", 0x68, "StructProperty"},
            {"bEnable", 0x98, "BoolProperty"},
        }};
    };

    struct ContextualAnimActorInterface
    {
        static constexpr std::string_view Name = "ContextualAnimActorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetMesh",
            "RefreshEditorPreview",
        }};
    };

    struct ContextualAnimAlignmentTrackContainer
    {
        static constexpr std::string_view Name = "ContextualAnimAlignmentTrackContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Tracks = 0x0;
            static constexpr std::uintptr_t SampleInterval = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Tracks", 0x0, "StructProperty"},
            {"SampleInterval", 0x20, "FloatProperty"},
        }};
    };

    struct ContextualAnimAttachmentParams
    {
        static constexpr std::string_view Name = "ContextualAnimAttachmentParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Role = 0x0;
            static constexpr std::uintptr_t SocketName = 0x4;
            static constexpr std::uintptr_t RelativeTransform = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Role", 0x0, "NameProperty"},
            {"SocketName", 0x4, "NameProperty"},
            {"RelativeTransform", 0x10, "StructProperty"},
        }};
    };

    struct ContextualAnimCollisionBehaviorParams
    {
        static constexpr std::string_view Name = "ContextualAnimCollisionBehaviorParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CollisionBehavior = 0x0;
            static constexpr std::uintptr_t CollisionChannelsToIgnoreParams = 0x8;
            static constexpr std::uintptr_t CollisionProfileParams = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CollisionBehavior", 0x0, "EnumProperty"},
            {"CollisionChannelsToIgnoreParams", 0x8, "ArrayProperty"},
            {"CollisionProfileParams", 0x18, "ArrayProperty"},
        }};
    };

    struct ContextualAnimCollisionProfileParam
    {
        static constexpr std::string_view Name = "ContextualAnimCollisionProfileParam";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Role = 0x0;
            static constexpr std::uintptr_t Profile = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Role", 0x0, "NameProperty"},
            {"Profile", 0x4, "StructProperty"},
        }};
    };

    struct ContextualAnimIKTarget
    {
        static constexpr std::string_view Name = "ContextualAnimIKTarget";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GoalName = 0x0;
            static constexpr std::uintptr_t BoneName = 0x4;
            static constexpr std::uintptr_t Alpha = 0x8;
            static constexpr std::uintptr_t Transform = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GoalName", 0x0, "NameProperty"},
            {"BoneName", 0x4, "NameProperty"},
            {"Alpha", 0x8, "FloatProperty"},
            {"Transform", 0x10, "StructProperty"},
        }};
    };

    struct ContextualAnimIKTargetDefContainer
    {
        static constexpr std::string_view Name = "ContextualAnimIKTargetDefContainer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Role = 0x0;
            static constexpr std::uintptr_t IKTargetDefs = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Role", 0x0, "NameProperty"},
            {"IKTargetDefs", 0x8, "ArrayProperty"},
        }};
    };

    struct ContextualAnimIKTargetDefinition
    {
        static constexpr std::string_view Name = "ContextualAnimIKTargetDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GoalName = 0x0;
            static constexpr std::uintptr_t BoneName = 0x4;
            static constexpr std::uintptr_t Provider = 0x8;
            static constexpr std::uintptr_t TargetRoleName = 0xC;
            static constexpr std::uintptr_t TargetBoneName = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"GoalName", 0x0, "NameProperty"},
            {"BoneName", 0x4, "NameProperty"},
            {"Provider", 0x8, "EnumProperty"},
            {"TargetRoleName", 0xC, "NameProperty"},
            {"TargetBoneName", 0x10, "NameProperty"},
        }};
    };

    struct ContextualAnimIKTargetParams
    {
        static constexpr std::string_view Name = "ContextualAnimIKTargetParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t IKTargetDefsForEachRole = 0x0;
            static constexpr std::uintptr_t AlphaProvider = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"IKTargetDefsForEachRole", 0x0, "ArrayProperty"},
            {"AlphaProvider", 0x10, "EnumProperty"},
        }};
    };

    struct ContextualAnimIgnoreChannelsParam
    {
        static constexpr std::string_view Name = "ContextualAnimIgnoreChannelsParam";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Role = 0x0;
            static constexpr std::uintptr_t Channels = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Role", 0x0, "NameProperty"},
            {"Channels", 0x8, "ArrayProperty"},
        }};
    };

    struct ContextualAnimOverrideInterface
    {
        static constexpr std::string_view Name = "ContextualAnimOverrideInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ContextualAnimPoint
    {
        static constexpr std::string_view Name = "ContextualAnimPoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Role = 0x0;
            static constexpr std::uintptr_t Transform = 0x10;
            static constexpr std::uintptr_t Speed = 0x70;
            static constexpr std::uintptr_t SectionIdx = 0x74;
            static constexpr std::uintptr_t AnimSetIdx = 0x78;
            static constexpr std::uintptr_t AnimTrackIdx = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Role", 0x0, "NameProperty"},
            {"Transform", 0x10, "StructProperty"},
            {"Speed", 0x70, "FloatProperty"},
            {"SectionIdx", 0x74, "IntProperty"},
            {"AnimSetIdx", 0x78, "IntProperty"},
            {"AnimTrackIdx", 0x7C, "IntProperty"},
        }};
    };

    struct ContextualAnimQueryParams
    {
        static constexpr std::string_view Name = "ContextualAnimQueryParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Querier = 0x0;
            static constexpr std::uintptr_t QueryTransform = 0x10;
            static constexpr std::uintptr_t bComplexQuery = 0x70;
            static constexpr std::uintptr_t bFindAnimStartTime = 0x71;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Querier", 0x0, "WeakObjectProperty"},
            {"QueryTransform", 0x10, "StructProperty"},
            {"bComplexQuery", 0x70, "BoolProperty"},
            {"bFindAnimStartTime", 0x71, "BoolProperty"},
        }};
    };

    struct ContextualAnimQueryResult
    {
        static constexpr std::string_view Name = "ContextualAnimQueryResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Animation = 0x0;
            static constexpr std::uintptr_t EntryTransform = 0x10;
            static constexpr std::uintptr_t SyncTransform = 0x70;
            static constexpr std::uintptr_t AnimStartTime = 0xD0;
            static constexpr std::uintptr_t AnimSetIdx = 0xD4;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Animation", 0x0, "WeakObjectProperty"},
            {"EntryTransform", 0x10, "StructProperty"},
            {"SyncTransform", 0x70, "StructProperty"},
            {"AnimStartTime", 0xD0, "FloatProperty"},
            {"AnimSetIdx", 0xD4, "IntProperty"},
        }};
    };

    struct ContextualAnimRepBindingsData
    {
        static constexpr std::string_view Name = "ContextualAnimRepBindingsData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ContextualAnimRepData";
        struct Offsets
        {
            static constexpr std::uintptr_t Bindings = 0x8;
            static constexpr std::uintptr_t WarpPoints = 0x50;
            static constexpr std::uintptr_t ExternalWarpTargets = 0x60;
            static constexpr std::uintptr_t StartTime = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Bindings", 0x8, "StructProperty"},
            {"WarpPoints", 0x50, "ArrayProperty"},
            {"ExternalWarpTargets", 0x60, "ArrayProperty"},
            {"StartTime", 0x70, "FloatProperty"},
        }};
    };

    struct ContextualAnimRepData
    {
        static constexpr std::string_view Name = "ContextualAnimRepData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RepCounter = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RepCounter", 0x0, "ByteProperty"},
        }};
    };

    struct ContextualAnimRepLateJoinData
    {
        static constexpr std::string_view Name = "ContextualAnimRepLateJoinData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ContextualAnimRepData";
        struct Offsets
        {
            static constexpr std::uintptr_t Actor = 0x4;
            static constexpr std::uintptr_t Role = 0xC;
            static constexpr std::uintptr_t WarpPoints = 0x10;
            static constexpr std::uintptr_t ExternalWarpTargets = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Actor", 0x4, "WeakObjectProperty"},
            {"Role", 0xC, "NameProperty"},
            {"WarpPoints", 0x10, "ArrayProperty"},
            {"ExternalWarpTargets", 0x20, "ArrayProperty"},
        }};
    };

    struct ContextualAnimRepTransitionData
    {
        static constexpr std::string_view Name = "ContextualAnimRepTransitionData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ContextualAnimRepData";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x1;
            static constexpr std::uintptr_t bStopEveryone = 0x2;
            static constexpr std::uintptr_t bPredictedByOwner = 0x3;
            static constexpr std::uintptr_t Bindings = 0x8;
            static constexpr std::uintptr_t WarpPoints = 0x50;
            static constexpr std::uintptr_t ExternalWarpTargets = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ID", 0x1, "ByteProperty"},
            {"bStopEveryone", 0x2, "BoolProperty"},
            {"bPredictedByOwner", 0x3, "BoolProperty"},
            {"Bindings", 0x8, "StructProperty"},
            {"WarpPoints", 0x50, "ArrayProperty"},
            {"ExternalWarpTargets", 0x60, "ArrayProperty"},
        }};
    };

    struct ContextualAnimRoleDefinition
    {
        static constexpr std::string_view Name = "ContextualAnimRoleDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t bIsCharacter = 0x4;
            static constexpr std::uintptr_t PreviewCapsuleHalfHeight = 0x8;
            static constexpr std::uintptr_t PreviewCapsuleRadius = 0xC;
            static constexpr std::uintptr_t MeshToComponent = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"bIsCharacter", 0x4, "BoolProperty"},
            {"PreviewCapsuleHalfHeight", 0x8, "FloatProperty"},
            {"PreviewCapsuleRadius", 0xC, "FloatProperty"},
            {"MeshToComponent", 0x10, "StructProperty"},
        }};
    };

    struct ContextualAnimRolesAsset
    {
        static constexpr std::string_view Name = "ContextualAnimRolesAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Roles = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Roles", 0x28, "ArrayProperty"},
        }};
    };

    struct ContextualAnimSceneActorComponent
    {
        static constexpr std::string_view Name = "ContextualAnimSceneActorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnJoinedSceneDelegate = 0xC8;
            static constexpr std::uintptr_t OnLeftSceneDelegate = 0xD8;
            static constexpr std::uintptr_t OnPlayMontageNotifyBeginDelegate = 0xE8;
            static constexpr std::uintptr_t OnMontageBlendingOutDelegate = 0xF8;
            static constexpr std::uintptr_t OnMontageReachedEndDelegate = 0x108;
            static constexpr std::uintptr_t SceneAsset = 0x118;
            static constexpr std::uintptr_t AlignmentOffset = 0x120;
            static constexpr std::uintptr_t OwnerAnimInstance = 0x180;
            static constexpr std::uintptr_t RepBindings = 0x188;
            static constexpr std::uintptr_t RepLateJoinData = 0x200;
            static constexpr std::uintptr_t RepTransitionData = 0x230;
            static constexpr std::uintptr_t RepTransitionSingleActorData = 0x2A0;
            static constexpr std::uintptr_t Bindings = 0x310;
            static constexpr std::uintptr_t IKTargets = 0x358;
            static constexpr std::uintptr_t WarpTargetNamesCache = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"OnJoinedSceneDelegate", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnLeftSceneDelegate", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnPlayMontageNotifyBeginDelegate", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnMontageBlendingOutDelegate", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnMontageReachedEndDelegate", 0x108, "MulticastInlineDelegateProperty"},
            {"SceneAsset", 0x118, "ObjectProperty"},
            {"AlignmentOffset", 0x120, "StructProperty"},
            {"OwnerAnimInstance", 0x180, "WeakObjectProperty"},
            {"RepBindings", 0x188, "StructProperty"},
            {"RepLateJoinData", 0x200, "StructProperty"},
            {"RepTransitionData", 0x230, "StructProperty"},
            {"RepTransitionSingleActorData", 0x2A0, "StructProperty"},
            {"Bindings", 0x310, "StructProperty"},
            {"IKTargets", 0x358, "ArrayProperty"},
            {"WarpTargetNamesCache", 0x368, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 26> FunctionNames{{
            "ClientUndoPredictedContextualAnimScene",
            "EarlyOutContextualAnimScene",
            "GetBindings",
            "GetIKTargetByGoalName",
            "GetIKTargets",
            "IsInActiveScene",
            "LateJoinContextualAnimScene",
            "OnIgnoredActorEndPlay",
            "OnJoinedScene",
            "OnLeftScene",
            "OnMontageBlendingOut",
            "OnPlayMontageNotifyBegin",
            "OnRep_Bindings",
            "OnRep_LateJoinData",
            "OnRep_RepTransitionSingleActor",
            "OnRep_TransitionData",
            "OnTickPose",
            "ServerEarlyOutContextualAnimScene",
            "ServerStartContextualAnimScene",
            "ServerStartContextualAnimScene_WithPrediction",
            "ServerTransitionContextualAnimScene_WithPrediction",
            "ServerTransitionSingleActor_WithPrediction",
            "StartContextualAnimScene",
            "TransitionContextualAnimScene",
            "TransitionContextualAnimSceneToSpecificSet",
            "TransitionSingleActor",
        }};
    };

    struct ContextualAnimSceneAsset
    {
        static constexpr std::string_view Name = "ContextualAnimSceneAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t RolesAsset = 0x28;
            static constexpr std::uintptr_t PrimaryRole = 0x30;
            static constexpr std::uintptr_t Tag = 0x34;
            static constexpr std::uintptr_t Sections = 0x38;
            static constexpr std::uintptr_t Radius = 0x48;
            static constexpr std::uintptr_t CollisionBehaviors = 0x50;
            static constexpr std::uintptr_t AttachmentParams = 0x60;
            static constexpr std::uintptr_t IKTargetParams = 0x70;
            static constexpr std::uintptr_t bFindIdealAnimStartTime = 0x88;
            static constexpr std::uintptr_t FindIdealStartTimeMargin = 0x8C;
            static constexpr std::uintptr_t bIgnoreClientMovementErrorChecksAndCorrection = 0x90;
            static constexpr std::uintptr_t bDisableMovementReplicationForSimulatedProxy = 0x91;
            static constexpr std::uintptr_t bPrecomputeAlignmentTracks = 0x92;
            static constexpr std::uintptr_t SampleRate = 0x94;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"RolesAsset", 0x28, "ObjectProperty"},
            {"PrimaryRole", 0x30, "NameProperty"},
            {"Tag", 0x34, "StructProperty"},
            {"Sections", 0x38, "ArrayProperty"},
            {"Radius", 0x48, "FloatProperty"},
            {"CollisionBehaviors", 0x50, "ArrayProperty"},
            {"AttachmentParams", 0x60, "ArrayProperty"},
            {"IKTargetParams", 0x70, "StructProperty"},
            {"bFindIdealAnimStartTime", 0x88, "BoolProperty"},
            {"FindIdealStartTimeMargin", 0x8C, "FloatProperty"},
            {"bIgnoreClientMovementErrorChecksAndCorrection", 0x90, "BoolProperty"},
            {"bDisableMovementReplicationForSimulatedProxy", 0x91, "BoolProperty"},
            {"bPrecomputeAlignmentTracks", 0x92, "BoolProperty"},
            {"SampleRate", 0x94, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 11> FunctionNames{{
            "BP_FindAnimSetIndexByAnimation",
            "BP_FindAnimationForRole",
            "BP_GetAlignmentTransformForRoleRelativeToWarpPoint",
            "BP_GetIKTargetTransformForBindingAtTime",
            "BP_GetIKTargetTransformForRoleAtTime",
            "BP_GetStartAndEndTimeForWarpSection",
            "GetAlignmentPointsForSecondaryRole",
            "GetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria",
            "GetRoles",
            "GetSectionNames",
            "Query",
        }};
    };

    struct ContextualAnimSceneBinding
    {
        static constexpr std::string_view Name = "ContextualAnimSceneBinding";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Context = 0x0;
            static constexpr std::uintptr_t SectionIdx = 0xE0;
            static constexpr std::uintptr_t AnimSetIdx = 0xE1;
            static constexpr std::uintptr_t AnimTrackIdx = 0xE2;
            static constexpr std::uintptr_t Animation = 0xE8;
            static constexpr std::uintptr_t AlignmentData = 0xF0;
            static constexpr std::uintptr_t IKTargetData = 0x118;
            static constexpr std::uintptr_t MeshToScene = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Context", 0x0, "StructProperty"},
            {"SectionIdx", 0xE0, "Int8Property"},
            {"AnimSetIdx", 0xE1, "Int8Property"},
            {"AnimTrackIdx", 0xE2, "Int8Property"},
            {"Animation", 0xE8, "ObjectProperty"},
            {"AlignmentData", 0xF0, "StructProperty"},
            {"IKTargetData", 0x118, "StructProperty"},
            {"MeshToScene", 0x140, "StructProperty"},
        }};
    };

    struct ContextualAnimSceneBindingContext
    {
        static constexpr std::string_view Name = "ContextualAnimSceneBindingContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Actor = 0x0;
            static constexpr std::uintptr_t CachedSceneActorComp = 0x8;
            static constexpr std::uintptr_t CachedAnimInstance = 0x10;
            static constexpr std::uintptr_t CachedSkeletalMesh = 0x18;
            static constexpr std::uintptr_t CachedMovementComp = 0x20;
            static constexpr std::uintptr_t CachedMotionWarpingComp = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Actor", 0x0, "WeakObjectProperty"},
            {"CachedSceneActorComp", 0x8, "WeakObjectProperty"},
            {"CachedAnimInstance", 0x10, "WeakObjectProperty"},
            {"CachedSkeletalMesh", 0x18, "WeakObjectProperty"},
            {"CachedMovementComp", 0x20, "WeakObjectProperty"},
            {"CachedMotionWarpingComp", 0x28, "WeakObjectProperty"},
        }};
    };

    struct ContextualAnimSceneBindings
    {
        static constexpr std::string_view Name = "ContextualAnimSceneBindings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
            static constexpr std::uintptr_t SceneAsset = 0x8;
            static constexpr std::uintptr_t SectionIdx = 0x10;
            static constexpr std::uintptr_t AnimSetIdx = 0x11;
            static constexpr std::uintptr_t Data = 0x18;
            static constexpr std::uintptr_t OverrideProviderInterface = 0x28;
            static constexpr std::uintptr_t WarpPointOverrides = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ID", 0x0, "ByteProperty"},
            {"SceneAsset", 0x8, "ObjectProperty"},
            {"SectionIdx", 0x10, "Int8Property"},
            {"AnimSetIdx", 0x11, "Int8Property"},
            {"Data", 0x18, "ArrayProperty"},
            {"OverrideProviderInterface", 0x28, "InterfaceProperty"},
            {"WarpPointOverrides", 0x38, "MapProperty"},
        }};
    };

    struct ContextualAnimSceneSection
    {
        static constexpr std::string_view Name = "ContextualAnimSceneSection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t AnimSets = 0x8;
            static constexpr std::uintptr_t WarpPointDefinitions = 0x18;
            static constexpr std::uintptr_t bSyncAnimations = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"AnimSets", 0x8, "ArrayProperty"},
            {"WarpPointDefinitions", 0x18, "ArrayProperty"},
            {"bSyncAnimations", 0x28, "BoolProperty"},
        }};
    };

    struct ContextualAnimSelectionCriterion
    {
        static constexpr std::string_view Name = "ContextualAnimSelectionCriterion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Type", 0x28, "EnumProperty"},
        }};
    };

    struct ContextualAnimSelectionCriterion_Blueprint
    {
        static constexpr std::string_view Name = "ContextualAnimSelectionCriterion_Blueprint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ContextualAnimSelectionCriterion";
        struct Offsets
        {
            static constexpr std::uintptr_t Type = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Type", 0x28, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "BP_DoesQuerierPassCondition",
            "GetSceneAsset",
        }};
    };

    struct ContextualAnimSelectionCriterion_Cone
    {
        static constexpr std::string_view Name = "ContextualAnimSelectionCriterion_Cone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ContextualAnimSelectionCriterion";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0x30;
            static constexpr std::uintptr_t Distance = 0x34;
            static constexpr std::uintptr_t HalfAngle = 0x38;
            static constexpr std::uintptr_t Offset = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Mode", 0x30, "EnumProperty"},
            {"Distance", 0x34, "FloatProperty"},
            {"HalfAngle", 0x38, "FloatProperty"},
            {"Offset", 0x3C, "FloatProperty"},
        }};
    };

    struct ContextualAnimSelectionCriterion_Distance
    {
        static constexpr std::string_view Name = "ContextualAnimSelectionCriterion_Distance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ContextualAnimSelectionCriterion";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0x30;
            static constexpr std::uintptr_t MinDistance = 0x34;
            static constexpr std::uintptr_t MaxDistance = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Mode", 0x30, "EnumProperty"},
            {"MinDistance", 0x34, "FloatProperty"},
            {"MaxDistance", 0x38, "FloatProperty"},
        }};
    };

    struct ContextualAnimSelectionCriterion_TriggerArea
    {
        static constexpr std::string_view Name = "ContextualAnimSelectionCriterion_TriggerArea";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ContextualAnimSelectionCriterion";
        struct Offsets
        {
            static constexpr std::uintptr_t PolygonPoints = 0x30;
            static constexpr std::uintptr_t Height = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PolygonPoints", 0x30, "ArrayProperty"},
            {"Height", 0x40, "FloatProperty"},
        }};
    };

    struct ContextualAnimSet
    {
        static constexpr std::string_view Name = "ContextualAnimSet";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Tracks = 0x0;
            static constexpr std::uintptr_t WarpPoints = 0x10;
            static constexpr std::uintptr_t Name = 0x20;
            static constexpr std::uintptr_t RandomWeight = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Tracks", 0x0, "ArrayProperty"},
            {"WarpPoints", 0x10, "MapProperty"},
            {"Name", 0x20, "NameProperty"},
            {"RandomWeight", 0x24, "FloatProperty"},
        }};
    };

    struct ContextualAnimStartSceneParams
    {
        static constexpr std::string_view Name = "ContextualAnimStartSceneParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RoleToActorMap = 0x0;
            static constexpr std::uintptr_t SectionIdx = 0x10;
            static constexpr std::uintptr_t AnimSetIdx = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RoleToActorMap", 0x0, "MapProperty"},
            {"SectionIdx", 0x10, "IntProperty"},
            {"AnimSetIdx", 0x14, "IntProperty"},
        }};
    };

    struct ContextualAnimTrack
    {
        static constexpr std::string_view Name = "ContextualAnimTrack";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Animation = 0x0;
            static constexpr std::uintptr_t AnimMaxStartTime = 0x8;
            static constexpr std::uintptr_t bChangeMovementMode = 0xC;
            static constexpr std::uintptr_t MovementMode = 0xD;
            static constexpr std::uintptr_t CustomMovementMode = 0xE;
            static constexpr std::uintptr_t bControlCharacterRotation = 0xF;
            static constexpr std::uintptr_t bOptional = 0x10;
            static constexpr std::uintptr_t AlignmentData = 0x18;
            static constexpr std::uintptr_t IKTargetData = 0x40;
            static constexpr std::uintptr_t SelectionCriteria = 0x68;
            static constexpr std::uintptr_t MeshToScene = 0x80;
            static constexpr std::uintptr_t Role = 0xE0;
            static constexpr std::uintptr_t SectionIdx = 0xE4;
            static constexpr std::uintptr_t AnimSetIdx = 0xE8;
            static constexpr std::uintptr_t AnimTrackIdx = 0xEC;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"Animation", 0x0, "ObjectProperty"},
            {"AnimMaxStartTime", 0x8, "FloatProperty"},
            {"bChangeMovementMode", 0xC, "BoolProperty"},
            {"MovementMode", 0xD, "ByteProperty"},
            {"CustomMovementMode", 0xE, "ByteProperty"},
            {"bControlCharacterRotation", 0xF, "BoolProperty"},
            {"bOptional", 0x10, "BoolProperty"},
            {"AlignmentData", 0x18, "StructProperty"},
            {"IKTargetData", 0x40, "StructProperty"},
            {"SelectionCriteria", 0x68, "ArrayProperty"},
            {"MeshToScene", 0x80, "StructProperty"},
            {"Role", 0xE0, "NameProperty"},
            {"SectionIdx", 0xE4, "IntProperty"},
            {"AnimSetIdx", 0xE8, "IntProperty"},
            {"AnimTrackIdx", 0xEC, "IntProperty"},
        }};
    };

    struct ContextualAnimUtilities
    {
        static constexpr std::string_view Name = "ContextualAnimUtilities";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 40> FunctionNames{{
            "BP_AddContextualAnimationOverrideProvider",
            "BP_CreateContextualAnimSceneBindings",
            "BP_CreateContextualAnimSceneBindingsForTwoActors",
            "BP_DrawDebugPose",
            "BP_DrawDebugSkelMeshPose",
            "BP_Montage_GetSectionLength",
            "BP_Montage_GetSectionStartAndEndTime",
            "BP_Montage_GetSectionTimeLeftFromPos",
            "BP_SceneBindingContext_GetActor",
            "BP_SceneBindingContext_GetCurrentSectionAndAnimSetNames",
            "BP_SceneBindingContext_GetGameplayTags",
            "BP_SceneBindingContext_GetTransform",
            "BP_SceneBindingContext_GetVelocity",
            "BP_SceneBindingContext_HasAllMatchingGameplayTags",
            "BP_SceneBindingContext_HasAnyMatchingGameplayTags",
            "BP_SceneBindingContext_HasMatchingGameplayTag",
            "BP_SceneBindingContext_MakeFromActor",
            "BP_SceneBindingContext_MakeFromActorWithExternalTransform",
            "BP_SceneBinding_GetActor",
            "BP_SceneBinding_GetAnimationFromBinding",
            "BP_SceneBinding_GetRoleFromBinding",
            "BP_SceneBinding_GetSectionAndAnimSetIndices",
            "BP_SceneBinding_GetSkeletalMesh",
            "BP_SceneBindings_AddOrUpdateWarpTargetsForBindings",
            "BP_SceneBindings_AddOrUpdateWarpTargetsForSectionAtIndex",
            "BP_SceneBindings_CalculateWarpPoints",
            "BP_SceneBindings_CalculateWarpPointsForSectionAtIndex",
            "BP_SceneBindings_GetAlignmentTransformForRoleRelativeToOtherRole",
            "BP_SceneBindings_GetAlignmentTransformForRoleRelativeToWarpPoint",
            "BP_SceneBindings_GetAlignmentTransformFromBinding",
            "BP_SceneBindings_GetBindingByActor",
            "BP_SceneBindings_GetBindingByRole",
            "BP_SceneBindings_GetBindings",
            "BP_SceneBindings_GetPrimaryBinding",
            "BP_SceneBindings_GetSceneAsset",
            "BP_SceneBindings_GetSectionAndAnimSetIndices",
            "BP_SceneBindings_GetSectionAndAnimSetNames",
            "BP_SceneBindings_GetSectionAndAnimSetNamesFromBinding",
            "TryGetMeshComponentWithSocket",
            "TryGetSocketTransformFromActor",
        }};
    };

    struct ContextualAnimWarpPoint
    {
        static constexpr std::string_view Name = "ContextualAnimWarpPoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t Transform = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "NameProperty"},
            {"Transform", 0x10, "StructProperty"},
        }};
    };

    struct ContextualAnimWarpPointCustomParams
    {
        static constexpr std::string_view Name = "ContextualAnimWarpPointCustomParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t origin = 0x0;
            static constexpr std::uintptr_t bAlongClosestDistance = 0x4;
            static constexpr std::uintptr_t OtherRole = 0x8;
            static constexpr std::uintptr_t Weight = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"origin", 0x0, "NameProperty"},
            {"bAlongClosestDistance", 0x4, "BoolProperty"},
            {"OtherRole", 0x8, "NameProperty"},
            {"Weight", 0xC, "FloatProperty"},
        }};
    };

    struct ContextualAnimWarpPointDefinition
    {
        static constexpr std::string_view Name = "ContextualAnimWarpPointDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WarpTargetName = 0x0;
            static constexpr std::uintptr_t Mode = 0x4;
            static constexpr std::uintptr_t SocketName = 0x8;
            static constexpr std::uintptr_t Params = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WarpTargetName", 0x0, "NameProperty"},
            {"Mode", 0x4, "EnumProperty"},
            {"SocketName", 0x8, "NameProperty"},
            {"Params", 0xC, "StructProperty"},
        }};
    };

    struct ContextualAnimWarpTarget
    {
        static constexpr std::string_view Name = "ContextualAnimWarpTarget";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Role = 0x0;
            static constexpr std::uintptr_t TargetName = 0x4;
            static constexpr std::uintptr_t TargetLocation = 0x8;
            static constexpr std::uintptr_t TargetRotation = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Role", 0x0, "NameProperty"},
            {"TargetName", 0x4, "NameProperty"},
            {"TargetLocation", 0x8, "StructProperty"},
            {"TargetRotation", 0x20, "StructProperty"},
        }};
    };

    struct ContextualAnimationOverrideData
    {
        static constexpr std::string_view Name = "ContextualAnimationOverrideData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimSequence = 0x0;
            static constexpr std::uintptr_t MeshToScene = 0x10;
            static constexpr std::uintptr_t AlignmentData = 0x70;
            static constexpr std::uintptr_t IKTargetData = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AnimSequence", 0x0, "ObjectProperty"},
            {"MeshToScene", 0x10, "StructProperty"},
            {"AlignmentData", 0x70, "StructProperty"},
            {"IKTargetData", 0x98, "StructProperty"},
        }};
    };

}
