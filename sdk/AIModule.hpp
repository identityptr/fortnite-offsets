#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AIModule
{
    struct AIAsyncTaskBlueprintProxy
    {
        static constexpr std::string_view Name = "AIAsyncTaskBlueprintProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x28;
            static constexpr std::uintptr_t OnFail = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x28, "MulticastInlineDelegateProperty"},
            {"OnFail", 0x38, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnMoveCompleted",
        }};
    };

    struct AIBlueprintHelperLibrary
    {
        static constexpr std::string_view Name = "AIBlueprintHelperLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 16> FunctionNames{{
            "CreateMoveToProxyObject",
            "GetAIController",
            "GetBlackboard",
            "GetCurrentPath",
            "GetCurrentPathIndex",
            "GetCurrentPathPoints",
            "GetNextNavLinkIndex",
            "IsValidAIDirection",
            "IsValidAILocation",
            "IsValidAIRotation",
            "LockAIResourcesWithAnimation",
            "SendAIMessage",
            "SimpleMoveToActor",
            "SimpleMoveToLocation",
            "SpawnAIFromClass",
            "UnlockAIResourcesWithAnimation",
        }};
    };

    struct AIController
    {
        static constexpr std::string_view Name = "AIController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Controller";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowStrafe = 0x348;
            static constexpr std::uintptr_t bLOSflag = 0x348;
            static constexpr std::uintptr_t bSetControlRotationFromPawnOrientation = 0x348;
            static constexpr std::uintptr_t bSkipExtraLOSChecks = 0x348;
            static constexpr std::uintptr_t bSkipRootComponentUpdate = 0x348;
            static constexpr std::uintptr_t bStartAILogicOnPossess = 0x348;
            static constexpr std::uintptr_t bStopAILogicOnUnposses = 0x348;
            static constexpr std::uintptr_t bWantsPlayerState = 0x348;
            static constexpr std::uintptr_t PathFollowingComponent = 0x350;
            static constexpr std::uintptr_t BrainComponent = 0x358;
            static constexpr std::uintptr_t PerceptionComponent = 0x360;
            static constexpr std::uintptr_t Blackboard = 0x368;
            static constexpr std::uintptr_t CachedGameplayTasksComponent = 0x370;
            static constexpr std::uintptr_t DefaultNavigationFilterClass = 0x378;
            static constexpr std::uintptr_t ReceiveMoveCompleted = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"bAllowStrafe", 0x348, "BoolProperty"},
            {"bLOSflag", 0x348, "BoolProperty"},
            {"bSetControlRotationFromPawnOrientation", 0x348, "BoolProperty"},
            {"bSkipExtraLOSChecks", 0x348, "BoolProperty"},
            {"bSkipRootComponentUpdate", 0x348, "BoolProperty"},
            {"bStartAILogicOnPossess", 0x348, "BoolProperty"},
            {"bStopAILogicOnUnposses", 0x348, "BoolProperty"},
            {"bWantsPlayerState", 0x348, "BoolProperty"},
            {"PathFollowingComponent", 0x350, "ObjectProperty"},
            {"BrainComponent", 0x358, "ObjectProperty"},
            {"PerceptionComponent", 0x360, "ObjectProperty"},
            {"Blackboard", 0x368, "ObjectProperty"},
            {"CachedGameplayTasksComponent", 0x370, "ObjectProperty"},
            {"DefaultNavigationFilterClass", 0x378, "ClassProperty"},
            {"ReceiveMoveCompleted", 0x380, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 21> FunctionNames{{
            "ClaimTaskResource",
            "GetAIPerceptionComponent",
            "GetFocalPoint",
            "GetFocalPointOnActor",
            "GetFocusActor",
            "GetImmediateMoveDestination",
            "GetMoveStatus",
            "GetPathFollowingComponent",
            "HasPartialPath",
            "K2_ClearFocus",
            "K2_SetFocalPoint",
            "K2_SetFocus",
            "MoveToActor",
            "MoveToLocation",
            "OnGameplayTaskResourcesClaimed",
            "OnUsingBlackBoard",
            "RunBehaviorTree",
            "SetMoveBlockDetection",
            "SetPathFollowingComponent",
            "UnclaimTaskResource",
            "UseBlackboard",
        }};
    };

    struct AIDamageEvent
    {
        static constexpr std::string_view Name = "AIDamageEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Amount = 0x0;
            static constexpr std::uintptr_t Location = 0x8;
            static constexpr std::uintptr_t HitLocation = 0x20;
            static constexpr std::uintptr_t DamagedActor = 0x38;
            static constexpr std::uintptr_t Instigator = 0x40;
            static constexpr std::uintptr_t Tag = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Amount", 0x0, "FloatProperty"},
            {"Location", 0x8, "StructProperty"},
            {"HitLocation", 0x20, "StructProperty"},
            {"DamagedActor", 0x38, "ObjectProperty"},
            {"Instigator", 0x40, "ObjectProperty"},
            {"Tag", 0x48, "NameProperty"},
        }};
    };

    struct AIDataProvider
    {
        static constexpr std::string_view Name = "AIDataProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AIDataProviderBoolValue
    {
        static constexpr std::string_view Name = "AIDataProviderBoolValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AIDataProviderTypedValue";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x30, "BoolProperty"},
        }};
    };

    struct AIDataProviderFloatValue
    {
        static constexpr std::string_view Name = "AIDataProviderFloatValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AIDataProviderTypedValue";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x30, "FloatProperty"},
        }};
    };

    struct AIDataProviderIntValue
    {
        static constexpr std::string_view Name = "AIDataProviderIntValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AIDataProviderTypedValue";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x30, "IntProperty"},
        }};
    };

    struct AIDataProviderStructValue
    {
        static constexpr std::string_view Name = "AIDataProviderStructValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AIDataProviderValue";
        struct Offsets
        {
            static constexpr std::uintptr_t DataBinding = 0x10;
            static constexpr std::uintptr_t DataField = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DataBinding", 0x10, "ObjectProperty"},
            {"DataField", 0x18, "NameProperty"},
        }};
    };

    struct AIDataProviderTypedValue
    {
        static constexpr std::string_view Name = "AIDataProviderTypedValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "AIDataProviderValue";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyType = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyType", 0x20, "ClassProperty"},
        }};
    };

    struct AIDataProviderValue
    {
        static constexpr std::string_view Name = "AIDataProviderValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataBinding = 0x10;
            static constexpr std::uintptr_t DataField = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DataBinding", 0x10, "ObjectProperty"},
            {"DataField", 0x18, "NameProperty"},
        }};
    };

    struct AIDataProvider_QueryParams
    {
        static constexpr std::string_view Name = "AIDataProvider_QueryParams";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ParamName = 0x28;
            static constexpr std::uintptr_t FloatValue = 0x2C;
            static constexpr std::uintptr_t IntValue = 0x30;
            static constexpr std::uintptr_t BoolValue = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ParamName", 0x28, "NameProperty"},
            {"FloatValue", 0x2C, "FloatProperty"},
            {"IntValue", 0x30, "IntProperty"},
            {"BoolValue", 0x34, "BoolProperty"},
        }};
    };

    struct AIDataProvider_Random
    {
        static constexpr std::string_view Name = "AIDataProvider_Random";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIDataProvider_QueryParams";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x38;
            static constexpr std::uintptr_t max = 0x3C;
            static constexpr std::uintptr_t bInteger = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"min", 0x38, "FloatProperty"},
            {"max", 0x3C, "FloatProperty"},
            {"bInteger", 0x40, "BoolProperty"},
        }};
    };

    struct AIDynamicParam
    {
        static constexpr std::string_view Name = "AIDynamicParam";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParamName = 0x0;
            static constexpr std::uintptr_t ParamType = 0x4;
            static constexpr std::uintptr_t bAllowBBKey = 0x5;
            static constexpr std::uintptr_t Value = 0x8;
            static constexpr std::uintptr_t BBKey = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ParamName", 0x0, "NameProperty"},
            {"ParamType", 0x4, "EnumProperty"},
            {"bAllowBBKey", 0x5, "BoolProperty"},
            {"Value", 0x8, "FloatProperty"},
            {"BBKey", 0x10, "StructProperty"},
        }};
    };

    struct AIHotSpotManager
    {
        static constexpr std::string_view Name = "AIHotSpotManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AIMoveRequest
    {
        static constexpr std::string_view Name = "AIMoveRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GoalActor = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GoalActor", 0x0, "WeakObjectProperty"},
        }};
    };

    struct AINoiseEvent
    {
        static constexpr std::string_view Name = "AINoiseEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t NoiseLocation = 0x8;
            static constexpr std::uintptr_t Loudness = 0x20;
            static constexpr std::uintptr_t MaxRange = 0x24;
            static constexpr std::uintptr_t Instigator = 0x28;
            static constexpr std::uintptr_t Tag = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NoiseLocation", 0x8, "StructProperty"},
            {"Loudness", 0x20, "FloatProperty"},
            {"MaxRange", 0x24, "FloatProperty"},
            {"Instigator", 0x28, "ObjectProperty"},
            {"Tag", 0x30, "NameProperty"},
        }};
    };

    struct AIPerceivableInterface
    {
        static constexpr std::string_view Name = "AIPerceivableInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AIPerceptionComponent
    {
        static constexpr std::string_view Name = "AIPerceptionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SensesConfig = 0xC8;
            static constexpr std::uintptr_t DominantSense = 0xD8;
            static constexpr std::uintptr_t AIOwner = 0xE8;
            static constexpr std::uintptr_t OnPerceptionUpdated = 0x130;
            static constexpr std::uintptr_t OnTargetPerceptionForgotten = 0x140;
            static constexpr std::uintptr_t OnTargetPerceptionUpdated = 0x150;
            static constexpr std::uintptr_t OnTargetPerceptionInfoUpdated = 0x160;
            static constexpr std::uintptr_t OnPerceivedTargetInfoUpdated = 0x170;
            static constexpr std::uintptr_t OnPerceivedTargetForgotten = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SensesConfig", 0xC8, "ArrayProperty"},
            {"DominantSense", 0xD8, "ClassProperty"},
            {"AIOwner", 0xE8, "ObjectProperty"},
            {"OnPerceptionUpdated", 0x130, "MulticastInlineDelegateProperty"},
            {"OnTargetPerceptionForgotten", 0x140, "MulticastInlineDelegateProperty"},
            {"OnTargetPerceptionUpdated", 0x150, "MulticastInlineDelegateProperty"},
            {"OnTargetPerceptionInfoUpdated", 0x160, "MulticastInlineDelegateProperty"},
            {"OnPerceivedTargetInfoUpdated", 0x170, "MulticastInlineDelegateProperty"},
            {"OnPerceivedTargetForgotten", 0x180, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 11> FunctionNames{{
            "ForgetAll",
            "GetActorsPerception",
            "GetCurrentlyPerceivedActors",
            "GetKnownPerceivedActors",
            "GetPerceivableTarget",
            "GetPerceivedHostileActors",
            "GetPerceivedHostileActorsBySense",
            "IsSenseEnabled",
            "OnOwnerEndPlay",
            "RequestStimuliListenerUpdate",
            "SetSenseEnabled",
        }};
    };

    struct AIPerceptionListenerInterface
    {
        static constexpr std::string_view Name = "AIPerceptionListenerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AIPerceptionObserverInterface
    {
        static constexpr std::string_view Name = "AIPerceptionObserverInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AIPerceptionSpatialObserverInterface
    {
        static constexpr std::string_view Name = "AIPerceptionSpatialObserverInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AIPerceptionSpatialRegionInterface
    {
        static constexpr std::string_view Name = "AIPerceptionSpatialRegionInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AIPerceptionSpatialRegistry
    {
        static constexpr std::string_view Name = "AIPerceptionSpatialRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t DetectorRows = 0x48;
            static constexpr std::uintptr_t EmitterSegments = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DetectorRows", 0x48, "ArrayProperty"},
            {"EmitterSegments", 0x68, "ArrayProperty"},
        }};
    };

    struct AIPerceptionStimuliSourceComponent
    {
        static constexpr std::string_view Name = "AIPerceptionStimuliSourceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoRegisterAsSource = 0xC0;
            static constexpr std::uintptr_t RegisterAsSourceForSenses = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bAutoRegisterAsSource", 0xC0, "BoolProperty"},
            {"RegisterAsSourceForSenses", 0xC8, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "RegisterForSense",
            "RegisterWithPerceptionSystem",
            "UnregisterFromPerceptionSystem",
            "UnregisterFromSense",
        }};
    };

    struct AIPerceptionSystem
    {
        static constexpr std::string_view Name = "AIPerceptionSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Senses = 0x48;
            static constexpr std::uintptr_t PerceptionAgingRate = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Senses", 0x48, "ArrayProperty"},
            {"PerceptionAgingRate", 0x58, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetSenseClassForStimulus",
            "OnPerceptionStimuliSourceEndPlay",
            "RegisterPerceptionStimuliSource",
            "ReportEvent",
            "ReportPerceptionEvent",
        }};
    };

    struct AIPredictionEvent
    {
        static constexpr std::string_view Name = "AIPredictionEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Requestor = 0x0;
            static constexpr std::uintptr_t PredictedActor = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Requestor", 0x0, "ObjectProperty"},
            {"PredictedActor", 0x8, "ObjectProperty"},
        }};
    };

    struct AIRequestID
    {
        static constexpr std::string_view Name = "AIRequestID";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RequestID = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RequestID", 0x0, "UInt32Property"},
        }};
    };

    struct AIResourceInterface
    {
        static constexpr std::string_view Name = "AIResourceInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AIResource_Logic
    {
        static constexpr std::string_view Name = "AIResource_Logic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayTaskResource";
        struct Offsets
        {
            static constexpr std::uintptr_t ManualResourceID = 0x28;
            static constexpr std::uintptr_t AutoResourceID = 0x2C;
            static constexpr std::uintptr_t bManuallySetID = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ManualResourceID", 0x28, "IntProperty"},
            {"AutoResourceID", 0x2C, "Int8Property"},
            {"bManuallySetID", 0x30, "BoolProperty"},
        }};
    };

    struct AIResource_Movement
    {
        static constexpr std::string_view Name = "AIResource_Movement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayTaskResource";
        struct Offsets
        {
            static constexpr std::uintptr_t ManualResourceID = 0x28;
            static constexpr std::uintptr_t AutoResourceID = 0x2C;
            static constexpr std::uintptr_t bManuallySetID = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ManualResourceID", 0x28, "IntProperty"},
            {"AutoResourceID", 0x2C, "Int8Property"},
            {"bManuallySetID", 0x30, "BoolProperty"},
        }};
    };

    struct AISense
    {
        static constexpr std::string_view Name = "AISense";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyType = 0x28;
            static constexpr std::uintptr_t bAutoRegisterAllPawnsAsSources = 0x2C;
            static constexpr std::uintptr_t bWantsNewPawnNotification = 0x2C;
            static constexpr std::uintptr_t PerceptionSystemInstance = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"NotifyType", 0x28, "EnumProperty"},
            {"bAutoRegisterAllPawnsAsSources", 0x2C, "BoolProperty"},
            {"bWantsNewPawnNotification", 0x2C, "BoolProperty"},
            {"PerceptionSystemInstance", 0x30, "ObjectProperty"},
        }};
    };

    struct AISenseAffiliationFilter
    {
        static constexpr std::string_view Name = "AISenseAffiliationFilter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bDetectEnemies = 0x0;
            static constexpr std::uintptr_t bDetectFriendlies = 0x0;
            static constexpr std::uintptr_t bDetectNeutrals = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bDetectEnemies", 0x0, "BoolProperty"},
            {"bDetectFriendlies", 0x0, "BoolProperty"},
            {"bDetectNeutrals", 0x0, "BoolProperty"},
        }};
    };

    struct AISenseBlueprintListener
    {
        static constexpr std::string_view Name = "AISenseBlueprintListener";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserDefinedStruct";
        struct Offsets
        {
            static constexpr std::uintptr_t Status = 0xC8;
            static constexpr std::uintptr_t Guid = 0xCC;
            static constexpr std::uintptr_t PropertyIDs = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Status", 0xC8, "ByteProperty"},
            {"Guid", 0xCC, "StructProperty"},
            {"PropertyIDs", 0xE0, "ArrayProperty"},
        }};
    };

    struct AISenseConfig
    {
        static constexpr std::string_view Name = "AISenseConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DebugColor = 0x28;
            static constexpr std::uintptr_t MaxAge = 0x2C;
            static constexpr std::uintptr_t bStartsEnabled = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DebugColor", 0x28, "StructProperty"},
            {"MaxAge", 0x2C, "FloatProperty"},
            {"bStartsEnabled", 0x30, "BoolProperty"},
        }};
    };

    struct AISenseConfig_Blueprint
    {
        static constexpr std::string_view Name = "AISenseConfig_Blueprint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISenseConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t Implementation = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Implementation", 0x48, "ClassProperty"},
        }};
    };

    struct AISenseConfig_Damage
    {
        static constexpr std::string_view Name = "AISenseConfig_Damage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISenseConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t Implementation = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Implementation", 0x48, "ClassProperty"},
        }};
    };

    struct AISenseConfig_Hearing
    {
        static constexpr std::string_view Name = "AISenseConfig_Hearing";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISenseConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t Implementation = 0x48;
            static constexpr std::uintptr_t HearingRange = 0x50;
            static constexpr std::uintptr_t LoSHearingRange = 0x54;
            static constexpr std::uintptr_t bUseLoSHearing = 0x58;
            static constexpr std::uintptr_t DetectionByAffiliation = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Implementation", 0x48, "ClassProperty"},
            {"HearingRange", 0x50, "FloatProperty"},
            {"LoSHearingRange", 0x54, "FloatProperty"},
            {"bUseLoSHearing", 0x58, "BoolProperty"},
            {"DetectionByAffiliation", 0x5C, "StructProperty"},
        }};
    };

    struct AISenseConfig_Prediction
    {
        static constexpr std::string_view Name = "AISenseConfig_Prediction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISenseConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t DebugColor = 0x28;
            static constexpr std::uintptr_t MaxAge = 0x2C;
            static constexpr std::uintptr_t bStartsEnabled = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DebugColor", 0x28, "StructProperty"},
            {"MaxAge", 0x2C, "FloatProperty"},
            {"bStartsEnabled", 0x30, "BoolProperty"},
        }};
    };

    struct AISenseConfig_Sight
    {
        static constexpr std::string_view Name = "AISenseConfig_Sight";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISenseConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t Implementation = 0x48;
            static constexpr std::uintptr_t SightRadius = 0x50;
            static constexpr std::uintptr_t LoseSightRadius = 0x54;
            static constexpr std::uintptr_t PeripheralVisionAngleDegrees = 0x58;
            static constexpr std::uintptr_t LosePeripheralVisionAngleDegrees = 0x5C;
            static constexpr std::uintptr_t DetectionByAffiliation = 0x60;
            static constexpr std::uintptr_t AutoSuccessRangeFromLastSeenLocation = 0x64;
            static constexpr std::uintptr_t PointOfViewBackwardOffset = 0x68;
            static constexpr std::uintptr_t NearClippingRadius = 0x6C;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Implementation", 0x48, "ClassProperty"},
            {"SightRadius", 0x50, "FloatProperty"},
            {"LoseSightRadius", 0x54, "FloatProperty"},
            {"PeripheralVisionAngleDegrees", 0x58, "FloatProperty"},
            {"LosePeripheralVisionAngleDegrees", 0x5C, "FloatProperty"},
            {"DetectionByAffiliation", 0x60, "StructProperty"},
            {"AutoSuccessRangeFromLastSeenLocation", 0x64, "FloatProperty"},
            {"PointOfViewBackwardOffset", 0x68, "FloatProperty"},
            {"NearClippingRadius", 0x6C, "FloatProperty"},
        }};
    };

    struct AISenseConfig_Team
    {
        static constexpr std::string_view Name = "AISenseConfig_Team";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISenseConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t DebugColor = 0x28;
            static constexpr std::uintptr_t MaxAge = 0x2C;
            static constexpr std::uintptr_t bStartsEnabled = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DebugColor", 0x28, "StructProperty"},
            {"MaxAge", 0x2C, "FloatProperty"},
            {"bStartsEnabled", 0x30, "BoolProperty"},
        }};
    };

    struct AISenseConfig_Touch
    {
        static constexpr std::string_view Name = "AISenseConfig_Touch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISenseConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t DetectionByAffiliation = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DetectionByAffiliation", 0x48, "StructProperty"},
        }};
    };

    struct AISenseEvent
    {
        static constexpr std::string_view Name = "AISenseEvent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AISenseEvent_Damage
    {
        static constexpr std::string_view Name = "AISenseEvent_Damage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISenseEvent";
        struct Offsets
        {
            static constexpr std::uintptr_t Event = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Event", 0x28, "StructProperty"},
        }};
    };

    struct AISenseEvent_Hearing
    {
        static constexpr std::string_view Name = "AISenseEvent_Hearing";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISenseEvent";
        struct Offsets
        {
            static constexpr std::uintptr_t Event = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Event", 0x28, "StructProperty"},
        }};
    };

    struct AISense_Blueprint
    {
        static constexpr std::string_view Name = "AISense_Blueprint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISense";
        struct Offsets
        {
            static constexpr std::uintptr_t ListenerDataType = 0x78;
            static constexpr std::uintptr_t ListenerContainer = 0x80;
            static constexpr std::uintptr_t UnprocessedEvents = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ListenerDataType", 0x78, "ClassProperty"},
            {"ListenerContainer", 0x80, "ArrayProperty"},
            {"UnprocessedEvents", 0x90, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "GetAllListenerActors",
            "GetAllListenerComponents",
            "K2_OnNewPawn",
            "OnListenerRegistered",
            "OnListenerUnregistered",
            "OnListenerUpdated",
            "OnUpdate",
        }};
    };

    struct AISense_Damage
    {
        static constexpr std::string_view Name = "AISense_Damage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISense";
        struct Offsets
        {
            static constexpr std::uintptr_t RegisteredEvents = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RegisteredEvents", 0x78, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ReportDamageEvent",
        }};
    };

    struct AISense_Hearing
    {
        static constexpr std::string_view Name = "AISense_Hearing";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISense";
        struct Offsets
        {
            static constexpr std::uintptr_t NoiseEvents = 0x78;
            static constexpr std::uintptr_t SpeedOfSoundSq = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NoiseEvents", 0x78, "ArrayProperty"},
            {"SpeedOfSoundSq", 0x88, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ReportNoiseEvent",
        }};
    };

    struct AISense_Prediction
    {
        static constexpr std::string_view Name = "AISense_Prediction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISense";
        struct Offsets
        {
            static constexpr std::uintptr_t RegisteredEvents = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RegisteredEvents", 0x78, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "RequestControllerPredictionEvent",
            "RequestPawnPredictionEvent",
        }};
    };

    struct AISense_Sight
    {
        static constexpr std::string_view Name = "AISense_Sight";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISense";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxTracesPerTick = 0xD0;
            static constexpr std::uintptr_t MaxAsyncTracesPerTick = 0xD4;
            static constexpr std::uintptr_t MinQueriesPerTimeSliceCheck = 0xD8;
            static constexpr std::uintptr_t MaxTimeSlicePerTick = 0xE0;
            static constexpr std::uintptr_t HighImportanceQueryDistanceThreshold = 0xE8;
            static constexpr std::uintptr_t MaxQueryImportance = 0xF0;
            static constexpr std::uintptr_t SightLimitQueryImportance = 0xF4;
            static constexpr std::uintptr_t PendingQueriesBudgetReductionRatio = 0xF8;
            static constexpr std::uintptr_t bUseAsynchronousTraceForDefaultSightQueries = 0xFC;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"MaxTracesPerTick", 0xD0, "IntProperty"},
            {"MaxAsyncTracesPerTick", 0xD4, "IntProperty"},
            {"MinQueriesPerTimeSliceCheck", 0xD8, "IntProperty"},
            {"MaxTimeSlicePerTick", 0xE0, "DoubleProperty"},
            {"HighImportanceQueryDistanceThreshold", 0xE8, "FloatProperty"},
            {"MaxQueryImportance", 0xF0, "FloatProperty"},
            {"SightLimitQueryImportance", 0xF4, "FloatProperty"},
            {"PendingQueriesBudgetReductionRatio", 0xF8, "FloatProperty"},
            {"bUseAsynchronousTraceForDefaultSightQueries", 0xFC, "BoolProperty"},
        }};
    };

    struct AISense_Team
    {
        static constexpr std::string_view Name = "AISense_Team";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISense";
        struct Offsets
        {
            static constexpr std::uintptr_t RegisteredEvents = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RegisteredEvents", 0x78, "ArrayProperty"},
        }};
    };

    struct AISense_Touch
    {
        static constexpr std::string_view Name = "AISense_Touch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISense";
        struct Offsets
        {
            static constexpr std::uintptr_t RegisteredEvents = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RegisteredEvents", 0x78, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ReportTouchEvent",
        }};
    };

    struct AISightEvent
    {
        static constexpr std::string_view Name = "AISightEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SeenActor = 0x8;
            static constexpr std::uintptr_t Observer = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SeenActor", 0x8, "ObjectProperty"},
            {"Observer", 0x10, "ObjectProperty"},
        }};
    };

    struct AISightTargetInterface
    {
        static constexpr std::string_view Name = "AISightTargetInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AIStimulus
    {
        static constexpr std::string_view Name = "AIStimulus";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Age = 0x0;
            static constexpr std::uintptr_t ExpirationAge = 0x4;
            static constexpr std::uintptr_t Strength = 0x8;
            static constexpr std::uintptr_t StimulusLocation = 0x10;
            static constexpr std::uintptr_t ReceiverLocation = 0x28;
            static constexpr std::uintptr_t Tag = 0x40;
            static constexpr std::uintptr_t bSuccessfullySensed = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Age", 0x0, "FloatProperty"},
            {"ExpirationAge", 0x4, "FloatProperty"},
            {"Strength", 0x8, "FloatProperty"},
            {"StimulusLocation", 0x10, "StructProperty"},
            {"ReceiverLocation", 0x28, "StructProperty"},
            {"Tag", 0x40, "NameProperty"},
            {"bSuccessfullySensed", 0x4C, "BoolProperty"},
        }};
    };

    struct AISubsystem
    {
        static constexpr std::string_view Name = "AISubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AISystem = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AISystem", 0x30, "ObjectProperty"},
        }};
    };

    struct AISystem
    {
        static constexpr std::string_view Name = "AISystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISystemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PerceptionSystemClassName = 0x58;
            static constexpr std::uintptr_t HotSpotManagerClassName = 0x70;
            static constexpr std::uintptr_t EnvQueryManagerClassName = 0x88;
            static constexpr std::uintptr_t AcceptanceRadius = 0xA0;
            static constexpr std::uintptr_t PathfollowingRegularPathPointAcceptanceRadius = 0xA4;
            static constexpr std::uintptr_t PathfollowingNavLinkAcceptanceRadius = 0xA8;
            static constexpr std::uintptr_t bFinishMoveOnGoalOverlap = 0xAC;
            static constexpr std::uintptr_t bAcceptPartialPaths = 0xAD;
            static constexpr std::uintptr_t bAllowStrafing = 0xAE;
            static constexpr std::uintptr_t bAllowControllersAsEQSQuerier = 0xAF;
            static constexpr std::uintptr_t bEnableDebuggerPlugin = 0xB0;
            static constexpr std::uintptr_t bForgetStaleActors = 0xB1;
            static constexpr std::uintptr_t bAddBlackboardSelfKey = 0xB2;
            static constexpr std::uintptr_t bClearBBEntryOnBTEQSFail = 0xB3;
            static constexpr std::uintptr_t bBlackboardKeyDecoratorAllowsNoneAsValue = 0xB4;
            static constexpr std::uintptr_t DefaultBlackboard = 0xB8;
            static constexpr std::uintptr_t DefaultSightCollisionChannel = 0xD8;
            static constexpr std::uintptr_t BehaviorTreeManager = 0xE0;
            static constexpr std::uintptr_t EnvironmentQueryManager = 0xE8;
            static constexpr std::uintptr_t PerceptionSystem = 0xF0;
            static constexpr std::uintptr_t AllProxyObjects = 0xF8;
            static constexpr std::uintptr_t HotspotManager = 0x108;
            static constexpr std::uintptr_t NavLocalGrids = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"PerceptionSystemClassName", 0x58, "StructProperty"},
            {"HotSpotManagerClassName", 0x70, "StructProperty"},
            {"EnvQueryManagerClassName", 0x88, "StructProperty"},
            {"AcceptanceRadius", 0xA0, "FloatProperty"},
            {"PathfollowingRegularPathPointAcceptanceRadius", 0xA4, "FloatProperty"},
            {"PathfollowingNavLinkAcceptanceRadius", 0xA8, "FloatProperty"},
            {"bFinishMoveOnGoalOverlap", 0xAC, "BoolProperty"},
            {"bAcceptPartialPaths", 0xAD, "BoolProperty"},
            {"bAllowStrafing", 0xAE, "BoolProperty"},
            {"bAllowControllersAsEQSQuerier", 0xAF, "BoolProperty"},
            {"bEnableDebuggerPlugin", 0xB0, "BoolProperty"},
            {"bForgetStaleActors", 0xB1, "BoolProperty"},
            {"bAddBlackboardSelfKey", 0xB2, "BoolProperty"},
            {"bClearBBEntryOnBTEQSFail", 0xB3, "BoolProperty"},
            {"bBlackboardKeyDecoratorAllowsNoneAsValue", 0xB4, "BoolProperty"},
            {"DefaultBlackboard", 0xB8, "SoftObjectProperty"},
            {"DefaultSightCollisionChannel", 0xD8, "ByteProperty"},
            {"BehaviorTreeManager", 0xE0, "ObjectProperty"},
            {"EnvironmentQueryManager", 0xE8, "ObjectProperty"},
            {"PerceptionSystem", 0xF0, "ObjectProperty"},
            {"AllProxyObjects", 0xF8, "ArrayProperty"},
            {"HotspotManager", 0x108, "ObjectProperty"},
            {"NavLocalGrids", 0x110, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "AIIgnorePlayers",
            "AILoggingVerbose",
        }};
    };

    struct AITask
    {
        static constexpr std::string_view Name = "AITask";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerController = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OwnerController", 0x60, "ObjectProperty"},
        }};
    };

    struct AITask_LockLogic
    {
        static constexpr std::string_view Name = "AITask_LockLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AITask";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerController = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OwnerController", 0x60, "ObjectProperty"},
        }};
    };

    struct AITask_MoveTo
    {
        static constexpr std::string_view Name = "AITask_MoveTo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AITask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnRequestFailed = 0x80;
            static constexpr std::uintptr_t OnMoveFinished = 0x90;
            static constexpr std::uintptr_t MoveRequest = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnRequestFailed", 0x80, "MulticastInlineDelegateProperty"},
            {"OnMoveFinished", 0x90, "MulticastInlineDelegateProperty"},
            {"MoveRequest", 0xA0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "AIMoveTo",
        }};
    };

    struct AITask_RunEQS
    {
        static constexpr std::string_view Name = "AITask_RunEQS";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AITask";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerController = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OwnerController", 0x60, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "RunEQS",
        }};
    };

    struct AITeamStimulusEvent
    {
        static constexpr std::string_view Name = "AITeamStimulusEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Broadcaster = 0x40;
            static constexpr std::uintptr_t Enemy = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Broadcaster", 0x40, "ObjectProperty"},
            {"Enemy", 0x48, "ObjectProperty"},
        }};
    };

    struct AITouchEvent
    {
        static constexpr std::string_view Name = "AITouchEvent";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TouchReceiver = 0x18;
            static constexpr std::uintptr_t OtherActor = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TouchReceiver", 0x18, "ObjectProperty"},
            {"OtherActor", 0x20, "ObjectProperty"},
        }};
    };

    struct ActorPerceptionBlueprintInfo
    {
        static constexpr std::string_view Name = "ActorPerceptionBlueprintInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x0;
            static constexpr std::uintptr_t LastSensedStimuli = 0x8;
            static constexpr std::uintptr_t bIsFriendly = 0x18;
            static constexpr std::uintptr_t bIsHostile = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Target", 0x0, "ObjectProperty"},
            {"LastSensedStimuli", 0x8, "ArrayProperty"},
            {"bIsFriendly", 0x18, "BoolProperty"},
            {"bIsHostile", 0x18, "BoolProperty"},
        }};
    };

    struct ActorPerceptionUpdateInfo
    {
        static constexpr std::string_view Name = "ActorPerceptionUpdateInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetId = 0x0;
            static constexpr std::uintptr_t Target = 0x4;
            static constexpr std::uintptr_t Stimulus = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TargetId", 0x0, "IntProperty"},
            {"Target", 0x4, "WeakObjectProperty"},
            {"Stimulus", 0x10, "StructProperty"},
        }};
    };

    struct BTAuxiliaryNode
    {
        static constexpr std::string_view Name = "BTAuxiliaryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTNode";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeName = 0x30;
            static constexpr std::uintptr_t TreeAsset = 0x40;
            static constexpr std::uintptr_t ParentNode = 0x48;
            static constexpr std::uintptr_t ExecutionIndex = 0x50;
            static constexpr std::uintptr_t MemoryOffset = 0x52;
            static constexpr std::uintptr_t TreeDepth = 0x54;
            static constexpr std::uintptr_t bCreateNodeInstance = 0x55;
            static constexpr std::uintptr_t bIsInjected = 0x55;
            static constexpr std::uintptr_t bIsInstanced = 0x55;
            static constexpr std::uintptr_t bOwnsGameplayTasks = 0x55;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"NodeName", 0x30, "StrProperty"},
            {"TreeAsset", 0x40, "ObjectProperty"},
            {"ParentNode", 0x48, "ObjectProperty"},
            {"ExecutionIndex", 0x50, "UInt16Property"},
            {"MemoryOffset", 0x52, "UInt16Property"},
            {"TreeDepth", 0x54, "ByteProperty"},
            {"bCreateNodeInstance", 0x55, "BoolProperty"},
            {"bIsInjected", 0x55, "BoolProperty"},
            {"bIsInstanced", 0x55, "BoolProperty"},
            {"bOwnsGameplayTasks", 0x55, "BoolProperty"},
        }};
    };

    struct BTCompositeChild
    {
        static constexpr std::string_view Name = "BTCompositeChild";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ChildComposite = 0x0;
            static constexpr std::uintptr_t ChildTask = 0x8;
            static constexpr std::uintptr_t Decorators = 0x10;
            static constexpr std::uintptr_t DecoratorOps = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ChildComposite", 0x0, "ObjectProperty"},
            {"ChildTask", 0x8, "ObjectProperty"},
            {"Decorators", 0x10, "ArrayProperty"},
            {"DecoratorOps", 0x20, "ArrayProperty"},
        }};
    };

    struct BTCompositeNode
    {
        static constexpr std::string_view Name = "BTCompositeNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Children = 0x58;
            static constexpr std::uintptr_t Services = 0x68;
            static constexpr std::uintptr_t bApplyDecoratorScope = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Children", 0x58, "ArrayProperty"},
            {"Services", 0x68, "ArrayProperty"},
            {"bApplyDecoratorScope", 0x78, "BoolProperty"},
        }};
    };

    struct BTComposite_Selector
    {
        static constexpr std::string_view Name = "BTComposite_Selector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTCompositeNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Children = 0x58;
            static constexpr std::uintptr_t Services = 0x68;
            static constexpr std::uintptr_t bApplyDecoratorScope = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Children", 0x58, "ArrayProperty"},
            {"Services", 0x68, "ArrayProperty"},
            {"bApplyDecoratorScope", 0x78, "BoolProperty"},
        }};
    };

    struct BTComposite_Sequence
    {
        static constexpr std::string_view Name = "BTComposite_Sequence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTCompositeNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Children = 0x58;
            static constexpr std::uintptr_t Services = 0x68;
            static constexpr std::uintptr_t bApplyDecoratorScope = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Children", 0x58, "ArrayProperty"},
            {"Services", 0x68, "ArrayProperty"},
            {"bApplyDecoratorScope", 0x78, "BoolProperty"},
        }};
    };

    struct BTComposite_SimpleParallel
    {
        static constexpr std::string_view Name = "BTComposite_SimpleParallel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTCompositeNode";
        struct Offsets
        {
            static constexpr std::uintptr_t FinishMode = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FinishMode", 0x80, "ByteProperty"},
        }};
    };

    struct BTDecorator
    {
        static constexpr std::string_view Name = "BTDecorator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTAuxiliaryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bInverseCondition = 0x60;
            static constexpr std::uintptr_t FlowAbortMode = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bInverseCondition", 0x60, "BoolProperty"},
            {"FlowAbortMode", 0x64, "ByteProperty"},
        }};
    };

    struct BTDecoratorLogic
    {
        static constexpr std::string_view Name = "BTDecoratorLogic";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Operation = 0x0;
            static constexpr std::uintptr_t Number = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Operation", 0x0, "ByteProperty"},
            {"Number", 0x2, "UInt16Property"},
        }};
    };

    struct BTDecorator_Blackboard
    {
        static constexpr std::string_view Name = "BTDecorator_Blackboard";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t IntValue = 0x90;
            static constexpr std::uintptr_t FloatValue = 0x94;
            static constexpr std::uintptr_t StringValue = 0x98;
            static constexpr std::uintptr_t CachedDescription = 0xA8;
            static constexpr std::uintptr_t OperationType = 0xB8;
            static constexpr std::uintptr_t NotifyObserver = 0xB9;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"IntValue", 0x90, "IntProperty"},
            {"FloatValue", 0x94, "FloatProperty"},
            {"StringValue", 0x98, "StrProperty"},
            {"CachedDescription", 0xA8, "StrProperty"},
            {"OperationType", 0xB8, "ByteProperty"},
            {"NotifyObserver", 0xB9, "ByteProperty"},
        }};
    };

    struct BTDecorator_BlackboardBase
    {
        static constexpr std::string_view Name = "BTDecorator_BlackboardBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t BlackboardKey = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BlackboardKey", 0x68, "StructProperty"},
        }};
    };

    struct BTDecorator_BlueprintBase
    {
        static constexpr std::string_view Name = "BTDecorator_BlueprintBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t AIOwner = 0x68;
            static constexpr std::uintptr_t ActorOwner = 0x70;
            static constexpr std::uintptr_t ObservedKeyNames = 0x78;
            static constexpr std::uintptr_t bCheckConditionOnlyBlackBoardChanges = 0x98;
            static constexpr std::uintptr_t bShowPropertyDetails = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AIOwner", 0x68, "ObjectProperty"},
            {"ActorOwner", 0x70, "ObjectProperty"},
            {"ObservedKeyNames", 0x78, "ArrayProperty"},
            {"bCheckConditionOnlyBlackBoardChanges", 0x98, "BoolProperty"},
            {"bShowPropertyDetails", 0x98, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 14> FunctionNames{{
            "IsDecoratorExecutionActive",
            "IsDecoratorObserverActive",
            "PerformConditionCheck",
            "PerformConditionCheckAI",
            "ReceiveExecutionFinish",
            "ReceiveExecutionFinishAI",
            "ReceiveExecutionStart",
            "ReceiveExecutionStartAI",
            "ReceiveObserverActivated",
            "ReceiveObserverActivatedAI",
            "ReceiveObserverDeactivated",
            "ReceiveObserverDeactivatedAI",
            "ReceiveTick",
            "ReceiveTickAI",
        }};
    };

    struct BTDecorator_CheckGameplayTagsOnActor
    {
        static constexpr std::string_view Name = "BTDecorator_CheckGameplayTagsOnActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorToCheck = 0x68;
            static constexpr std::uintptr_t TagsToMatch = 0x90;
            static constexpr std::uintptr_t GameplayTags = 0x98;
            static constexpr std::uintptr_t CachedDescription = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ActorToCheck", 0x68, "StructProperty"},
            {"TagsToMatch", 0x90, "EnumProperty"},
            {"GameplayTags", 0x98, "StructProperty"},
            {"CachedDescription", 0xB8, "StrProperty"},
        }};
    };

    struct BTDecorator_CompareBBEntries
    {
        static constexpr std::string_view Name = "BTDecorator_CompareBBEntries";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t Operator = 0x68;
            static constexpr std::uintptr_t BlackboardKeyA = 0x70;
            static constexpr std::uintptr_t BlackboardKeyB = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Operator", 0x68, "ByteProperty"},
            {"BlackboardKeyA", 0x70, "StructProperty"},
            {"BlackboardKeyB", 0x98, "StructProperty"},
        }};
    };

    struct BTDecorator_ConditionalLoop
    {
        static constexpr std::string_view Name = "BTDecorator_ConditionalLoop";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator_Blackboard";
        struct Offsets
        {
            static constexpr std::uintptr_t IntValue = 0x90;
            static constexpr std::uintptr_t FloatValue = 0x94;
            static constexpr std::uintptr_t StringValue = 0x98;
            static constexpr std::uintptr_t CachedDescription = 0xA8;
            static constexpr std::uintptr_t OperationType = 0xB8;
            static constexpr std::uintptr_t NotifyObserver = 0xB9;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"IntValue", 0x90, "IntProperty"},
            {"FloatValue", 0x94, "FloatProperty"},
            {"StringValue", 0x98, "StrProperty"},
            {"CachedDescription", 0xA8, "StrProperty"},
            {"OperationType", 0xB8, "ByteProperty"},
            {"NotifyObserver", 0xB9, "ByteProperty"},
        }};
    };

    struct BTDecorator_ConeCheck
    {
        static constexpr std::string_view Name = "BTDecorator_ConeCheck";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t ConeHalfAngle = 0x68;
            static constexpr std::uintptr_t ConeOrigin = 0x80;
            static constexpr std::uintptr_t ConeDirection = 0xA8;
            static constexpr std::uintptr_t Observed = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ConeHalfAngle", 0x68, "StructProperty"},
            {"ConeOrigin", 0x80, "StructProperty"},
            {"ConeDirection", 0xA8, "StructProperty"},
            {"Observed", 0xD0, "StructProperty"},
        }};
    };

    struct BTDecorator_Cooldown
    {
        static constexpr std::string_view Name = "BTDecorator_Cooldown";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t CooldownTime = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CooldownTime", 0x68, "StructProperty"},
        }};
    };

    struct BTDecorator_DoesPathExist
    {
        static constexpr std::string_view Name = "BTDecorator_DoesPathExist";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t BlackboardKeyA = 0x68;
            static constexpr std::uintptr_t BlackboardKeyB = 0x90;
            static constexpr std::uintptr_t bUseSelf = 0xB8;
            static constexpr std::uintptr_t PathQueryType = 0xC0;
            static constexpr std::uintptr_t FilterClass = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"BlackboardKeyA", 0x68, "StructProperty"},
            {"BlackboardKeyB", 0x90, "StructProperty"},
            {"bUseSelf", 0xB8, "BoolProperty"},
            {"PathQueryType", 0xC0, "StructProperty"},
            {"FilterClass", 0xF0, "StructProperty"},
        }};
    };

    struct BTDecorator_ForceSuccess
    {
        static constexpr std::string_view Name = "BTDecorator_ForceSuccess";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t bInverseCondition = 0x60;
            static constexpr std::uintptr_t FlowAbortMode = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bInverseCondition", 0x60, "BoolProperty"},
            {"FlowAbortMode", 0x64, "ByteProperty"},
        }};
    };

    struct BTDecorator_IsAtLocation
    {
        static constexpr std::string_view Name = "BTDecorator_IsAtLocation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AcceptableRadius = 0x90;
            static constexpr std::uintptr_t ParametrizedAcceptableRadius = 0x98;
            static constexpr std::uintptr_t GeometricDistanceType = 0xD0;
            static constexpr std::uintptr_t bUseParametrizedRadius = 0xD4;
            static constexpr std::uintptr_t bUseNavAgentGoalLocation = 0xD8;
            static constexpr std::uintptr_t bPathFindingBasedTest = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AcceptableRadius", 0x90, "FloatProperty"},
            {"ParametrizedAcceptableRadius", 0x98, "StructProperty"},
            {"GeometricDistanceType", 0xD0, "EnumProperty"},
            {"bUseParametrizedRadius", 0xD4, "BoolProperty"},
            {"bUseNavAgentGoalLocation", 0xD8, "StructProperty"},
            {"bPathFindingBasedTest", 0xF0, "StructProperty"},
        }};
    };

    struct BTDecorator_IsBBEntryOfClass
    {
        static constexpr std::string_view Name = "BTDecorator_IsBBEntryOfClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TestClass = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TestClass", 0x90, "StructProperty"},
        }};
    };

    struct BTDecorator_KeepInCone
    {
        static constexpr std::string_view Name = "BTDecorator_KeepInCone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t ConeHalfAngle = 0x68;
            static constexpr std::uintptr_t ConeOrigin = 0x80;
            static constexpr std::uintptr_t Observed = 0xA8;
            static constexpr std::uintptr_t bUseSelfAsObserved = 0xD0;
            static constexpr std::uintptr_t bUseSelfAsOrigin = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ConeHalfAngle", 0x68, "StructProperty"},
            {"ConeOrigin", 0x80, "StructProperty"},
            {"Observed", 0xA8, "StructProperty"},
            {"bUseSelfAsObserved", 0xD0, "BoolProperty"},
            {"bUseSelfAsOrigin", 0xD0, "BoolProperty"},
        }};
    };

    struct BTDecorator_Loop
    {
        static constexpr std::string_view Name = "BTDecorator_Loop";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t NumLoops = 0x68;
            static constexpr std::uintptr_t bInfiniteLoop = 0x80;
            static constexpr std::uintptr_t InfiniteLoopTimeoutTime = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NumLoops", 0x68, "StructProperty"},
            {"bInfiniteLoop", 0x80, "BoolProperty"},
            {"InfiniteLoopTimeoutTime", 0x88, "StructProperty"},
        }};
    };

    struct BTDecorator_LoopUntil
    {
        static constexpr std::string_view Name = "BTDecorator_LoopUntil";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredResult = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RequiredResult", 0x68, "StructProperty"},
        }};
    };

    struct BTDecorator_ReachedMoveGoal
    {
        static constexpr std::string_view Name = "BTDecorator_ReachedMoveGoal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t bInverseCondition = 0x60;
            static constexpr std::uintptr_t FlowAbortMode = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bInverseCondition", 0x60, "BoolProperty"},
            {"FlowAbortMode", 0x64, "ByteProperty"},
        }};
    };

    struct BTDecorator_SetTagCooldown
    {
        static constexpr std::string_view Name = "BTDecorator_SetTagCooldown";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t CooldownTag = 0x68;
            static constexpr std::uintptr_t CooldownDuration = 0x70;
            static constexpr std::uintptr_t bAddToExistingDuration = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CooldownTag", 0x68, "StructProperty"},
            {"CooldownDuration", 0x70, "StructProperty"},
            {"bAddToExistingDuration", 0x88, "StructProperty"},
        }};
    };

    struct BTDecorator_TagCooldown
    {
        static constexpr std::string_view Name = "BTDecorator_TagCooldown";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t CooldownTag = 0x68;
            static constexpr std::uintptr_t CooldownDuration = 0x70;
            static constexpr std::uintptr_t bAddToExistingDuration = 0x88;
            static constexpr std::uintptr_t bActivatesCooldown = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CooldownTag", 0x68, "StructProperty"},
            {"CooldownDuration", 0x70, "StructProperty"},
            {"bAddToExistingDuration", 0x88, "StructProperty"},
            {"bActivatesCooldown", 0xA0, "StructProperty"},
        }};
    };

    struct BTDecorator_TimeLimit
    {
        static constexpr std::string_view Name = "BTDecorator_TimeLimit";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeLimit = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TimeLimit", 0x68, "StructProperty"},
        }};
    };

    struct BTFunctionLibrary
    {
        static constexpr std::string_view Name = "BTFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 27> FunctionNames{{
            "ClearBlackboardValue",
            "ClearBlackboardValueAsVector",
            "GetBlackboardValueAsActor",
            "GetBlackboardValueAsBool",
            "GetBlackboardValueAsClass",
            "GetBlackboardValueAsEnum",
            "GetBlackboardValueAsFloat",
            "GetBlackboardValueAsInt",
            "GetBlackboardValueAsName",
            "GetBlackboardValueAsObject",
            "GetBlackboardValueAsRotator",
            "GetBlackboardValueAsString",
            "GetBlackboardValueAsVector",
            "GetOwnerComponent",
            "GetOwnersBlackboard",
            "SetBlackboardValueAsBool",
            "SetBlackboardValueAsClass",
            "SetBlackboardValueAsEnum",
            "SetBlackboardValueAsFloat",
            "SetBlackboardValueAsInt",
            "SetBlackboardValueAsName",
            "SetBlackboardValueAsObject",
            "SetBlackboardValueAsRotator",
            "SetBlackboardValueAsString",
            "SetBlackboardValueAsVector",
            "StartUsingExternalEvent",
            "StopUsingExternalEvent",
        }};
    };

    struct BTNode
    {
        static constexpr std::string_view Name = "BTNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeName = 0x30;
            static constexpr std::uintptr_t TreeAsset = 0x40;
            static constexpr std::uintptr_t ParentNode = 0x48;
            static constexpr std::uintptr_t ExecutionIndex = 0x50;
            static constexpr std::uintptr_t MemoryOffset = 0x52;
            static constexpr std::uintptr_t TreeDepth = 0x54;
            static constexpr std::uintptr_t bCreateNodeInstance = 0x55;
            static constexpr std::uintptr_t bIsInjected = 0x55;
            static constexpr std::uintptr_t bIsInstanced = 0x55;
            static constexpr std::uintptr_t bOwnsGameplayTasks = 0x55;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"NodeName", 0x30, "StrProperty"},
            {"TreeAsset", 0x40, "ObjectProperty"},
            {"ParentNode", 0x48, "ObjectProperty"},
            {"ExecutionIndex", 0x50, "UInt16Property"},
            {"MemoryOffset", 0x52, "UInt16Property"},
            {"TreeDepth", 0x54, "ByteProperty"},
            {"bCreateNodeInstance", 0x55, "BoolProperty"},
            {"bIsInjected", 0x55, "BoolProperty"},
            {"bIsInstanced", 0x55, "BoolProperty"},
            {"bOwnsGameplayTasks", 0x55, "BoolProperty"},
        }};
    };

    struct BTService
    {
        static constexpr std::string_view Name = "BTService";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTAuxiliaryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Interval = 0x60;
            static constexpr std::uintptr_t RandomDeviation = 0x64;
            static constexpr std::uintptr_t bCallTickOnSearchStart = 0x68;
            static constexpr std::uintptr_t bRestartTimerOnEachActivation = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Interval", 0x60, "FloatProperty"},
            {"RandomDeviation", 0x64, "FloatProperty"},
            {"bCallTickOnSearchStart", 0x68, "BoolProperty"},
            {"bRestartTimerOnEachActivation", 0x68, "BoolProperty"},
        }};
    };

    struct BTService_BlackboardBase
    {
        static constexpr std::string_view Name = "BTService_BlackboardBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t BlackboardKey = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BlackboardKey", 0x70, "StructProperty"},
        }};
    };

    struct BTService_BlueprintBase
    {
        static constexpr std::string_view Name = "BTService_BlueprintBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t AIOwner = 0x70;
            static constexpr std::uintptr_t ActorOwner = 0x78;
            static constexpr std::uintptr_t bShowEventDetails = 0x90;
            static constexpr std::uintptr_t bShowPropertyDetails = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AIOwner", 0x70, "ObjectProperty"},
            {"ActorOwner", 0x78, "ObjectProperty"},
            {"bShowEventDetails", 0x90, "BoolProperty"},
            {"bShowPropertyDetails", 0x90, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "IsServiceActive",
            "ReceiveActivation",
            "ReceiveActivationAI",
            "ReceiveDeactivation",
            "ReceiveDeactivationAI",
            "ReceiveSearchStart",
            "ReceiveSearchStartAI",
            "ReceiveTick",
            "ReceiveTickAI",
        }};
    };

    struct BTService_DefaultFocus
    {
        static constexpr std::string_view Name = "BTService_DefaultFocus";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FocusPriority = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FocusPriority", 0x98, "ByteProperty"},
        }};
    };

    struct BTService_RunEQS
    {
        static constexpr std::string_view Name = "BTService_RunEQS";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EQSRequest = 0x98;
            static constexpr std::uintptr_t bUpdateBBOnFail = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EQSRequest", 0x98, "StructProperty"},
            {"bUpdateBBOnFail", 0xE0, "BoolProperty"},
        }};
    };

    struct BTTaskNode
    {
        static constexpr std::string_view Name = "BTTaskNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Services = 0x58;
            static constexpr std::uintptr_t bIgnoreRestartSelf = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Services", 0x58, "ArrayProperty"},
            {"bIgnoreRestartSelf", 0x68, "BoolProperty"},
        }};
    };

    struct BTTask_BlackboardBase
    {
        static constexpr std::string_view Name = "BTTask_BlackboardBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t BlackboardKey = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BlackboardKey", 0x70, "StructProperty"},
        }};
    };

    struct BTTask_BlueprintBase
    {
        static constexpr std::string_view Name = "BTTask_BlueprintBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AIOwner = 0x70;
            static constexpr std::uintptr_t ActorOwner = 0x78;
            static constexpr std::uintptr_t TickInterval = 0x80;
            static constexpr std::uintptr_t bShowPropertyDetails = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AIOwner", 0x70, "ObjectProperty"},
            {"ActorOwner", 0x78, "ObjectProperty"},
            {"TickInterval", 0x80, "StructProperty"},
            {"bShowPropertyDetails", 0xA0, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 12> FunctionNames{{
            "FinishAbort",
            "FinishExecute",
            "IsTaskAborting",
            "IsTaskExecuting",
            "ReceiveAbort",
            "ReceiveAbortAI",
            "ReceiveExecute",
            "ReceiveExecuteAI",
            "ReceiveTick",
            "ReceiveTickAI",
            "SetFinishOnMessage",
            "SetFinishOnMessageWithId",
        }};
    };

    struct BTTask_FinishWithResult
    {
        static constexpr std::string_view Name = "BTTask_FinishWithResult";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Result = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Result", 0x70, "StructProperty"},
        }};
    };

    struct BTTask_GameplayTaskBase
    {
        static constexpr std::string_view Name = "BTTask_GameplayTaskBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bWaitForGameplayTask = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bWaitForGameplayTask", 0x70, "StructProperty"},
        }};
    };

    struct BTTask_MakeNoise
    {
        static constexpr std::string_view Name = "BTTask_MakeNoise";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Loudnes = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Loudnes", 0x70, "StructProperty"},
        }};
    };

    struct BTTask_MoveDirectlyToward
    {
        static constexpr std::string_view Name = "BTTask_MoveDirectlyToward";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_MoveTo";
        struct Offsets
        {
            static constexpr std::uintptr_t AcceptableRadius = 0x98;
            static constexpr std::uintptr_t FilterClass = 0xB0;
            static constexpr std::uintptr_t ObservedBlackboardValueTolerance = 0xD0;
            static constexpr std::uintptr_t bAllowStrafe = 0xE8;
            static constexpr std::uintptr_t bAllowPartialPath = 0x100;
            static constexpr std::uintptr_t bTrackMovingGoal = 0x118;
            static constexpr std::uintptr_t bRequireNavigableEndLocation = 0x130;
            static constexpr std::uintptr_t bProjectGoalLocation = 0x148;
            static constexpr std::uintptr_t bReachTestIncludesAgentRadius = 0x160;
            static constexpr std::uintptr_t bReachTestIncludesGoalRadius = 0x178;
            static constexpr std::uintptr_t bStartFromPreviousPath = 0x190;
            static constexpr std::uintptr_t bObserveBlackboardValue = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"AcceptableRadius", 0x98, "StructProperty"},
            {"FilterClass", 0xB0, "StructProperty"},
            {"ObservedBlackboardValueTolerance", 0xD0, "StructProperty"},
            {"bAllowStrafe", 0xE8, "StructProperty"},
            {"bAllowPartialPath", 0x100, "StructProperty"},
            {"bTrackMovingGoal", 0x118, "StructProperty"},
            {"bRequireNavigableEndLocation", 0x130, "StructProperty"},
            {"bProjectGoalLocation", 0x148, "StructProperty"},
            {"bReachTestIncludesAgentRadius", 0x160, "StructProperty"},
            {"bReachTestIncludesGoalRadius", 0x178, "StructProperty"},
            {"bStartFromPreviousPath", 0x190, "StructProperty"},
            {"bObserveBlackboardValue", 0x1A8, "BoolProperty"},
        }};
    };

    struct BTTask_MoveTo
    {
        static constexpr std::string_view Name = "BTTask_MoveTo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AcceptableRadius = 0x98;
            static constexpr std::uintptr_t FilterClass = 0xB0;
            static constexpr std::uintptr_t ObservedBlackboardValueTolerance = 0xD0;
            static constexpr std::uintptr_t bAllowStrafe = 0xE8;
            static constexpr std::uintptr_t bAllowPartialPath = 0x100;
            static constexpr std::uintptr_t bTrackMovingGoal = 0x118;
            static constexpr std::uintptr_t bRequireNavigableEndLocation = 0x130;
            static constexpr std::uintptr_t bProjectGoalLocation = 0x148;
            static constexpr std::uintptr_t bReachTestIncludesAgentRadius = 0x160;
            static constexpr std::uintptr_t bReachTestIncludesGoalRadius = 0x178;
            static constexpr std::uintptr_t bStartFromPreviousPath = 0x190;
            static constexpr std::uintptr_t bObserveBlackboardValue = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"AcceptableRadius", 0x98, "StructProperty"},
            {"FilterClass", 0xB0, "StructProperty"},
            {"ObservedBlackboardValueTolerance", 0xD0, "StructProperty"},
            {"bAllowStrafe", 0xE8, "StructProperty"},
            {"bAllowPartialPath", 0x100, "StructProperty"},
            {"bTrackMovingGoal", 0x118, "StructProperty"},
            {"bRequireNavigableEndLocation", 0x130, "StructProperty"},
            {"bProjectGoalLocation", 0x148, "StructProperty"},
            {"bReachTestIncludesAgentRadius", 0x160, "StructProperty"},
            {"bReachTestIncludesGoalRadius", 0x178, "StructProperty"},
            {"bStartFromPreviousPath", 0x190, "StructProperty"},
            {"bObserveBlackboardValue", 0x1A8, "BoolProperty"},
        }};
    };

    struct BTTask_PlayAnimation
    {
        static constexpr std::string_view Name = "BTTask_PlayAnimation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimationToPlay = 0x70;
            static constexpr std::uintptr_t bLooping = 0x90;
            static constexpr std::uintptr_t bNonBlocking = 0xA8;
            static constexpr std::uintptr_t MyOwnerComp = 0xC0;
            static constexpr std::uintptr_t CachedSkelMesh = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AnimationToPlay", 0x70, "StructProperty"},
            {"bLooping", 0x90, "StructProperty"},
            {"bNonBlocking", 0xA8, "StructProperty"},
            {"MyOwnerComp", 0xC0, "ObjectProperty"},
            {"CachedSkelMesh", 0xC8, "ObjectProperty"},
        }};
    };

    struct BTTask_PlaySound
    {
        static constexpr std::string_view Name = "BTTask_PlaySound";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundToPlay = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SoundToPlay", 0x70, "StructProperty"},
        }};
    };

    struct BTTask_RotateToFaceBBEntry
    {
        static constexpr std::string_view Name = "BTTask_RotateToFaceBBEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Precision = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Precision", 0x98, "StructProperty"},
        }};
    };

    struct BTTask_RunBehavior
    {
        static constexpr std::string_view Name = "BTTask_RunBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t BehaviorAsset = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BehaviorAsset", 0x70, "ObjectProperty"},
        }};
    };

    struct BTTask_RunBehaviorDynamic
    {
        static constexpr std::string_view Name = "BTTask_RunBehaviorDynamic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t InjectionTag = 0x70;
            static constexpr std::uintptr_t DefaultBehaviorAsset = 0x78;
            static constexpr std::uintptr_t BehaviorAsset = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InjectionTag", 0x70, "StructProperty"},
            {"DefaultBehaviorAsset", 0x78, "ObjectProperty"},
            {"BehaviorAsset", 0x80, "ObjectProperty"},
        }};
    };

    struct BTTask_RunEQSQuery
    {
        static constexpr std::string_view Name = "BTTask_RunEQSQuery";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseBBKey = 0x98;
            static constexpr std::uintptr_t EQSRequest = 0xA0;
            static constexpr std::uintptr_t bUpdateBBOnFail = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bUseBBKey", 0x98, "BoolProperty"},
            {"EQSRequest", 0xA0, "StructProperty"},
            {"bUpdateBBOnFail", 0xE8, "BoolProperty"},
        }};
    };

    struct BTTask_SetKeyValueBool
    {
        static constexpr std::string_view Name = "BTTask_SetKeyValueBool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x98, "StructProperty"},
        }};
    };

    struct BTTask_SetKeyValueClass
    {
        static constexpr std::string_view Name = "BTTask_SetKeyValueClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseClass = 0x98;
            static constexpr std::uintptr_t Value = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BaseClass", 0x98, "ClassProperty"},
            {"Value", 0xA0, "StructProperty"},
        }};
    };

    struct BTTask_SetKeyValueEnum
    {
        static constexpr std::string_view Name = "BTTask_SetKeyValueEnum";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EnumType = 0x98;
            static constexpr std::uintptr_t Value = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EnumType", 0x98, "ObjectProperty"},
            {"Value", 0xA0, "StructProperty"},
        }};
    };

    struct BTTask_SetKeyValueFloat
    {
        static constexpr std::string_view Name = "BTTask_SetKeyValueFloat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x98, "StructProperty"},
        }};
    };

    struct BTTask_SetKeyValueInt32
    {
        static constexpr std::string_view Name = "BTTask_SetKeyValueInt32";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x98, "StructProperty"},
        }};
    };

    struct BTTask_SetKeyValueName
    {
        static constexpr std::string_view Name = "BTTask_SetKeyValueName";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x98, "StructProperty"},
        }};
    };

    struct BTTask_SetKeyValueObject
    {
        static constexpr std::string_view Name = "BTTask_SetKeyValueObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseClass = 0x98;
            static constexpr std::uintptr_t Value = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BaseClass", 0x98, "ClassProperty"},
            {"Value", 0xA0, "StructProperty"},
        }};
    };

    struct BTTask_SetKeyValueRotator
    {
        static constexpr std::string_view Name = "BTTask_SetKeyValueRotator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x98, "StructProperty"},
        }};
    };

    struct BTTask_SetKeyValueString
    {
        static constexpr std::string_view Name = "BTTask_SetKeyValueString";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x98, "StructProperty"},
        }};
    };

    struct BTTask_SetKeyValueStruct
    {
        static constexpr std::string_view Name = "BTTask_SetKeyValueStruct";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StructType = 0x98;
            static constexpr std::uintptr_t Value = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StructType", 0x98, "ObjectProperty"},
            {"Value", 0xA0, "StructProperty"},
        }};
    };

    struct BTTask_SetKeyValueVector
    {
        static constexpr std::string_view Name = "BTTask_SetKeyValueVector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_BlackboardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x98, "StructProperty"},
        }};
    };

    struct BTTask_SetTagCooldown
    {
        static constexpr std::string_view Name = "BTTask_SetTagCooldown";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t CooldownTag = 0x70;
            static constexpr std::uintptr_t bAddToExistingDuration = 0x78;
            static constexpr std::uintptr_t CooldownDuration = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CooldownTag", 0x70, "StructProperty"},
            {"bAddToExistingDuration", 0x78, "StructProperty"},
            {"CooldownDuration", 0x90, "StructProperty"},
        }};
    };

    struct BTTask_Wait
    {
        static constexpr std::string_view Name = "BTTask_Wait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t WaitTime = 0x70;
            static constexpr std::uintptr_t RandomDeviation = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WaitTime", 0x70, "StructProperty"},
            {"RandomDeviation", 0x88, "StructProperty"},
        }};
    };

    struct BTTask_WaitBlackboardTime
    {
        static constexpr std::string_view Name = "BTTask_WaitBlackboardTime";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTask_Wait";
        struct Offsets
        {
            static constexpr std::uintptr_t BlackboardKey = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BlackboardKey", 0xA0, "StructProperty"},
        }};
    };

    struct BehaviorTree
    {
        static constexpr std::string_view Name = "BehaviorTree";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RootNode = 0x30;
            static constexpr std::uintptr_t BlackboardAsset = 0x38;
            static constexpr std::uintptr_t RootDecorators = 0x40;
            static constexpr std::uintptr_t RootDecoratorOps = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RootNode", 0x30, "ObjectProperty"},
            {"BlackboardAsset", 0x38, "ObjectProperty"},
            {"RootDecorators", 0x40, "ArrayProperty"},
            {"RootDecoratorOps", 0x50, "ArrayProperty"},
        }};
    };

    struct BehaviorTreeComponent
    {
        static constexpr std::string_view Name = "BehaviorTreeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BrainComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeInstances = 0x138;
            static constexpr std::uintptr_t DefaultBehaviorTreeAsset = 0x210;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NodeInstances", 0x138, "ArrayProperty"},
            {"DefaultBehaviorTreeAsset", 0x210, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "AddCooldownTagDuration",
            "GetTagCooldownEndTime",
            "SetDynamicSubtree",
        }};
    };

    struct BehaviorTreeManager
    {
        static constexpr std::string_view Name = "BehaviorTreeManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxDebuggerSteps = 0x28;
            static constexpr std::uintptr_t LoadedTemplates = 0x30;
            static constexpr std::uintptr_t ActiveComponents = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaxDebuggerSteps", 0x28, "IntProperty"},
            {"LoadedTemplates", 0x30, "ArrayProperty"},
            {"ActiveComponents", 0x40, "ArrayProperty"},
        }};
    };

    struct BehaviorTreeTemplateInfo
    {
        static constexpr std::string_view Name = "BehaviorTreeTemplateInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Asset = 0x0;
            static constexpr std::uintptr_t Template = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Asset", 0x0, "ObjectProperty"},
            {"Template", 0x8, "ObjectProperty"},
        }};
    };

    struct BehaviorTreeTypes
    {
        static constexpr std::string_view Name = "BehaviorTreeTypes";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BlackboardAssetProvider
    {
        static constexpr std::string_view Name = "BlackboardAssetProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetBlackboardAsset",
        }};
    };

    struct BlackboardComponent
    {
        static constexpr std::string_view Name = "BlackboardComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BrainComp = 0xC0;
            static constexpr std::uintptr_t DefaultBlackboardAsset = 0xC8;
            static constexpr std::uintptr_t BlackboardAsset = 0xD0;
            static constexpr std::uintptr_t KeyInstances = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BrainComp", 0xC0, "ObjectProperty"},
            {"DefaultBlackboardAsset", 0xC8, "ObjectProperty"},
            {"BlackboardAsset", 0xD0, "ObjectProperty"},
            {"KeyInstances", 0xF8, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 24> FunctionNames{{
            "ClearValue",
            "GetLocationFromEntry",
            "GetRotationFromEntry",
            "GetValueAsBool",
            "GetValueAsClass",
            "GetValueAsEnum",
            "GetValueAsFloat",
            "GetValueAsInt",
            "GetValueAsName",
            "GetValueAsObject",
            "GetValueAsRotator",
            "GetValueAsString",
            "GetValueAsVector",
            "IsVectorValueSet",
            "SetValueAsBool",
            "SetValueAsClass",
            "SetValueAsEnum",
            "SetValueAsFloat",
            "SetValueAsInt",
            "SetValueAsName",
            "SetValueAsObject",
            "SetValueAsRotator",
            "SetValueAsString",
            "SetValueAsVector",
        }};
    };

    struct BlackboardData
    {
        static constexpr std::string_view Name = "BlackboardData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Parent = 0x28;
            static constexpr std::uintptr_t Keys = 0x30;
            static constexpr std::uintptr_t bHasSynchronizedKeys = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Parent", 0x28, "ObjectProperty"},
            {"Keys", 0x30, "ArrayProperty"},
            {"bHasSynchronizedKeys", 0x40, "BoolProperty"},
        }};
    };

    struct BlackboardEntry
    {
        static constexpr std::string_view Name = "BlackboardEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EntryName = 0x0;
            static constexpr std::uintptr_t KeyType = 0x8;
            static constexpr std::uintptr_t bInstanceSynced = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EntryName", 0x0, "NameProperty"},
            {"KeyType", 0x8, "ObjectProperty"},
            {"bInstanceSynced", 0x10, "BoolProperty"},
        }};
    };

    struct BlackboardKeySelector
    {
        static constexpr std::string_view Name = "BlackboardKeySelector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedTypes = 0x0;
            static constexpr std::uintptr_t SelectedKeyName = 0x10;
            static constexpr std::uintptr_t SelectedKeyType = 0x18;
            static constexpr std::uintptr_t SelectedKeyID = 0x20;
            static constexpr std::uintptr_t bNoneIsAllowedValue = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AllowedTypes", 0x0, "ArrayProperty"},
            {"SelectedKeyName", 0x10, "NameProperty"},
            {"SelectedKeyType", 0x18, "ClassProperty"},
            {"SelectedKeyID", 0x20, "IntProperty"},
            {"bNoneIsAllowedValue", 0x24, "BoolProperty"},
        }};
    };

    struct BlackboardKeyType
    {
        static constexpr std::string_view Name = "BlackboardKeyType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BlackboardKeyType_Bool
    {
        static constexpr std::string_view Name = "BlackboardKeyType_Bool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlackboardKeyType";
        struct Offsets
        {
            static constexpr std::uintptr_t bDefaultValue = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bDefaultValue", 0x30, "BoolProperty"},
        }};
    };

    struct BlackboardKeyType_Class
    {
        static constexpr std::string_view Name = "BlackboardKeyType_Class";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlackboardKeyType";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseClass = 0x30;
            static constexpr std::uintptr_t DefaultValue = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BaseClass", 0x30, "ClassProperty"},
            {"DefaultValue", 0x38, "ClassProperty"},
        }};
    };

    struct BlackboardKeyType_Enum
    {
        static constexpr std::string_view Name = "BlackboardKeyType_Enum";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlackboardKeyType";
        struct Offsets
        {
            static constexpr std::uintptr_t EnumType = 0x30;
            static constexpr std::uintptr_t EnumName = 0x38;
            static constexpr std::uintptr_t DefaultValue = 0x48;
            static constexpr std::uintptr_t bIsEnumNameValid = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EnumType", 0x30, "ObjectProperty"},
            {"EnumName", 0x38, "StrProperty"},
            {"DefaultValue", 0x48, "ByteProperty"},
            {"bIsEnumNameValid", 0x4C, "BoolProperty"},
        }};
    };

    struct BlackboardKeyType_Float
    {
        static constexpr std::string_view Name = "BlackboardKeyType_Float";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlackboardKeyType";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x30, "FloatProperty"},
        }};
    };

    struct BlackboardKeyType_Int
    {
        static constexpr std::string_view Name = "BlackboardKeyType_Int";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlackboardKeyType";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x30, "IntProperty"},
        }};
    };

    struct BlackboardKeyType_Name
    {
        static constexpr std::string_view Name = "BlackboardKeyType_Name";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlackboardKeyType";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x30, "NameProperty"},
        }};
    };

    struct BlackboardKeyType_NativeEnum
    {
        static constexpr std::string_view Name = "BlackboardKeyType_NativeEnum";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlackboardKeyType";
        struct Offsets
        {
            static constexpr std::uintptr_t EnumName = 0x30;
            static constexpr std::uintptr_t EnumType = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EnumName", 0x30, "StrProperty"},
            {"EnumType", 0x40, "ObjectProperty"},
        }};
    };

    struct BlackboardKeyType_Object
    {
        static constexpr std::string_view Name = "BlackboardKeyType_Object";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlackboardKeyType";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseClass = 0x30;
            static constexpr std::uintptr_t DefaultValue = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BaseClass", 0x30, "ClassProperty"},
            {"DefaultValue", 0x38, "ObjectProperty"},
        }};
    };

    struct BlackboardKeyType_Rotator
    {
        static constexpr std::string_view Name = "BlackboardKeyType_Rotator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlackboardKeyType";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x30;
            static constexpr std::uintptr_t bUseDefaultValue = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultValue", 0x30, "StructProperty"},
            {"bUseDefaultValue", 0x48, "BoolProperty"},
        }};
    };

    struct BlackboardKeyType_String
    {
        static constexpr std::string_view Name = "BlackboardKeyType_String";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlackboardKeyType";
        struct Offsets
        {
            static constexpr std::uintptr_t StringValue = 0x30;
            static constexpr std::uintptr_t DefaultValue = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StringValue", 0x30, "StrProperty"},
            {"DefaultValue", 0x40, "StrProperty"},
        }};
    };

    struct BlackboardKeyType_Struct
    {
        static constexpr std::string_view Name = "BlackboardKeyType_Struct";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlackboardKeyType";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x30;
            static constexpr std::uintptr_t Value = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultValue", 0x30, "StructProperty"},
            {"Value", 0x40, "StructProperty"},
        }};
    };

    struct BlackboardKeyType_Vector
    {
        static constexpr std::string_view Name = "BlackboardKeyType_Vector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlackboardKeyType";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x30;
            static constexpr std::uintptr_t bUseDefaultValue = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultValue", 0x30, "StructProperty"},
            {"bUseDefaultValue", 0x48, "BoolProperty"},
        }};
    };

    struct BrainComponent
    {
        static constexpr std::string_view Name = "BrainComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BlackboardComp = 0xC8;
            static constexpr std::uintptr_t AIOwner = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BlackboardComp", 0xC8, "ObjectProperty"},
            {"AIOwner", 0xD0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "IsPaused",
            "IsRunning",
            "RestartLogic",
            "StartLogic",
            "StopLogic",
        }};
    };

    struct CompactIndexedHandleBase
    {
        static constexpr std::string_view Name = "CompactIndexedHandleBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CrowdAgentInterface
    {
        static constexpr std::string_view Name = "CrowdAgentInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CrowdAvoidanceConfig
    {
        static constexpr std::string_view Name = "CrowdAvoidanceConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VelocityBias = 0x0;
            static constexpr std::uintptr_t DesiredVelocityWeight = 0x4;
            static constexpr std::uintptr_t CurrentVelocityWeight = 0x8;
            static constexpr std::uintptr_t SideBiasWeight = 0xC;
            static constexpr std::uintptr_t ImpactTimeWeight = 0x10;
            static constexpr std::uintptr_t ImpactTimeRange = 0x14;
            static constexpr std::uintptr_t SideBiasThreshold = 0x18;
            static constexpr std::uintptr_t RightSideBias = 0x1C;
            static constexpr std::uintptr_t CustomPatternIdx = 0x20;
            static constexpr std::uintptr_t AdaptiveDivisions = 0x21;
            static constexpr std::uintptr_t AdaptiveRings = 0x22;
            static constexpr std::uintptr_t AdaptiveDepth = 0x23;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"VelocityBias", 0x0, "FloatProperty"},
            {"DesiredVelocityWeight", 0x4, "FloatProperty"},
            {"CurrentVelocityWeight", 0x8, "FloatProperty"},
            {"SideBiasWeight", 0xC, "FloatProperty"},
            {"ImpactTimeWeight", 0x10, "FloatProperty"},
            {"ImpactTimeRange", 0x14, "FloatProperty"},
            {"SideBiasThreshold", 0x18, "FloatProperty"},
            {"RightSideBias", 0x1C, "FloatProperty"},
            {"CustomPatternIdx", 0x20, "ByteProperty"},
            {"AdaptiveDivisions", 0x21, "ByteProperty"},
            {"AdaptiveRings", 0x22, "ByteProperty"},
            {"AdaptiveDepth", 0x23, "ByteProperty"},
        }};
    };

    struct CrowdAvoidanceSamplingPattern
    {
        static constexpr std::string_view Name = "CrowdAvoidanceSamplingPattern";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Angles = 0x0;
            static constexpr std::uintptr_t Radii = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Angles", 0x0, "ArrayProperty"},
            {"Radii", 0x10, "ArrayProperty"},
        }};
    };

    struct CrowdFollowingComponent
    {
        static constexpr std::string_view Name = "CrowdFollowingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PathFollowingComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CrowdAgentMoveDirection = 0x348;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CrowdAgentMoveDirection", 0x348, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SuspendCrowdSteering",
        }};
    };

    struct CrowdManager
    {
        static constexpr std::string_view Name = "CrowdManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CrowdManagerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MyNavData = 0x28;
            static constexpr std::uintptr_t AvoidanceConfig = 0x30;
            static constexpr std::uintptr_t SamplingPatterns = 0x40;
            static constexpr std::uintptr_t MaxAgents = 0x50;
            static constexpr std::uintptr_t MaxAgentRadius = 0x54;
            static constexpr std::uintptr_t MaxAvoidedAgents = 0x58;
            static constexpr std::uintptr_t MaxAvoidedWalls = 0x5C;
            static constexpr std::uintptr_t NavmeshCheckInterval = 0x60;
            static constexpr std::uintptr_t PathOptimizationInterval = 0x64;
            static constexpr std::uintptr_t SeparationDirClamp = 0x68;
            static constexpr std::uintptr_t PathOffsetRadiusMultiplier = 0x6C;
            static constexpr std::uintptr_t bResolveCollisions = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"MyNavData", 0x28, "ObjectProperty"},
            {"AvoidanceConfig", 0x30, "ArrayProperty"},
            {"SamplingPatterns", 0x40, "ArrayProperty"},
            {"MaxAgents", 0x50, "IntProperty"},
            {"MaxAgentRadius", 0x54, "FloatProperty"},
            {"MaxAvoidedAgents", 0x58, "IntProperty"},
            {"MaxAvoidedWalls", 0x5C, "IntProperty"},
            {"NavmeshCheckInterval", 0x60, "FloatProperty"},
            {"PathOptimizationInterval", 0x64, "FloatProperty"},
            {"SeparationDirClamp", 0x68, "FloatProperty"},
            {"PathOffsetRadiusMultiplier", 0x6C, "FloatProperty"},
            {"bResolveCollisions", 0x70, "BoolProperty"},
        }};
    };

    struct DetourCrowdAIController
    {
        static constexpr std::string_view Name = "DetourCrowdAIController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIController";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowStrafe = 0x348;
            static constexpr std::uintptr_t bLOSflag = 0x348;
            static constexpr std::uintptr_t bSetControlRotationFromPawnOrientation = 0x348;
            static constexpr std::uintptr_t bSkipExtraLOSChecks = 0x348;
            static constexpr std::uintptr_t bSkipRootComponentUpdate = 0x348;
            static constexpr std::uintptr_t bStartAILogicOnPossess = 0x348;
            static constexpr std::uintptr_t bStopAILogicOnUnposses = 0x348;
            static constexpr std::uintptr_t bWantsPlayerState = 0x348;
            static constexpr std::uintptr_t PathFollowingComponent = 0x350;
            static constexpr std::uintptr_t BrainComponent = 0x358;
            static constexpr std::uintptr_t PerceptionComponent = 0x360;
            static constexpr std::uintptr_t Blackboard = 0x368;
            static constexpr std::uintptr_t CachedGameplayTasksComponent = 0x370;
            static constexpr std::uintptr_t DefaultNavigationFilterClass = 0x378;
            static constexpr std::uintptr_t ReceiveMoveCompleted = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"bAllowStrafe", 0x348, "BoolProperty"},
            {"bLOSflag", 0x348, "BoolProperty"},
            {"bSetControlRotationFromPawnOrientation", 0x348, "BoolProperty"},
            {"bSkipExtraLOSChecks", 0x348, "BoolProperty"},
            {"bSkipRootComponentUpdate", 0x348, "BoolProperty"},
            {"bStartAILogicOnPossess", 0x348, "BoolProperty"},
            {"bStopAILogicOnUnposses", 0x348, "BoolProperty"},
            {"bWantsPlayerState", 0x348, "BoolProperty"},
            {"PathFollowingComponent", 0x350, "ObjectProperty"},
            {"BrainComponent", 0x358, "ObjectProperty"},
            {"PerceptionComponent", 0x360, "ObjectProperty"},
            {"Blackboard", 0x368, "ObjectProperty"},
            {"CachedGameplayTasksComponent", 0x370, "ObjectProperty"},
            {"DefaultNavigationFilterClass", 0x378, "ClassProperty"},
            {"ReceiveMoveCompleted", 0x380, "MulticastInlineDelegateProperty"},
        }};
    };

    struct EQSParametrizedQueryExecutionRequest
    {
        static constexpr std::string_view Name = "EQSParametrizedQueryExecutionRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t QueryTemplate = 0x0;
            static constexpr std::uintptr_t QueryConfig = 0x8;
            static constexpr std::uintptr_t EQSQueryBlackboardKey = 0x18;
            static constexpr std::uintptr_t RunMode = 0x40;
            static constexpr std::uintptr_t bUseBBKeyForQueryTemplate = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"QueryTemplate", 0x0, "ObjectProperty"},
            {"QueryConfig", 0x8, "ArrayProperty"},
            {"EQSQueryBlackboardKey", 0x18, "StructProperty"},
            {"RunMode", 0x40, "ByteProperty"},
            {"bUseBBKeyForQueryTemplate", 0x44, "BoolProperty"},
        }};
    };

    struct EQSQueryResultSourceInterface
    {
        static constexpr std::string_view Name = "EQSQueryResultSourceInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EQSRenderingComponent
    {
        static constexpr std::string_view Name = "EQSRenderingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DebugDrawComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MinDrawDistance = 0x278;
            static constexpr std::uintptr_t LDMaxDrawDistance = 0x27C;
            static constexpr std::uintptr_t CachedMaxDrawDistance = 0x280;
            static constexpr std::uintptr_t DepthPriorityGroup = 0x284;
            static constexpr std::uintptr_t ViewOwnerDepthPriorityGroup = 0x285;
            static constexpr std::uintptr_t IndirectLightingCacheQuality = 0x286;
            static constexpr std::uintptr_t LightmapType = 0x287;
            static constexpr std::uintptr_t HLODBatchingPolicy = 0x288;
            static constexpr std::uintptr_t ShadowCacheInvalidationBehavior = 0x289;
            static constexpr std::uintptr_t bAlwaysCreatePhysicsState = 0x28A;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x28A;
            static constexpr std::uintptr_t bGenerateOverlapEvents = 0x28A;
            static constexpr std::uintptr_t bIsActorTextureStreamingBuiltData = 0x28A;
            static constexpr std::uintptr_t bIsValidTextureStreamingBuiltData = 0x28A;
            static constexpr std::uintptr_t bMultiBodyOverlap = 0x28A;
            static constexpr std::uintptr_t bNeverDistanceCull = 0x28A;
            static constexpr std::uintptr_t bAllowCullDistanceVolume = 0x28B;
            static constexpr std::uintptr_t bReturnMaterialOnMove = 0x28B;
            static constexpr std::uintptr_t bTraceComplexOnMove = 0x28B;
            static constexpr std::uintptr_t bUseViewOwnerDepthPriorityGroup = 0x28B;
            static constexpr std::uintptr_t bVisibleInRayTracing = 0x28B;
            static constexpr std::uintptr_t bVisibleInRealTimeSkyCaptures = 0x28B;
            static constexpr std::uintptr_t bVisibleInReflectionCaptures = 0x28B;
            static constexpr std::uintptr_t bVisibleInReflections = 0x28B;
            static constexpr std::uintptr_t bHoldout = 0x28C;
            static constexpr std::uintptr_t bOnlyOwnerSee = 0x28C;
            static constexpr std::uintptr_t bOwnerNoSee = 0x28C;
            static constexpr std::uintptr_t bReceivesDecals = 0x28C;
            static constexpr std::uintptr_t bRenderInDepthPass = 0x28C;
            static constexpr std::uintptr_t bRenderInMainPass = 0x28C;
            static constexpr std::uintptr_t bTreatAsBackgroundForOcclusion = 0x28C;
            static constexpr std::uintptr_t bUseAsOccluder = 0x28C;
            static constexpr std::uintptr_t CastShadow = 0x28D;
            static constexpr std::uintptr_t bAffectDynamicIndirectLighting = 0x28D;
            static constexpr std::uintptr_t bEmissiveLightSource = 0x28D;
            static constexpr std::uintptr_t bForceMipStreaming = 0x28D;
            static constexpr std::uintptr_t bHasPerInstanceHitProxies = 0x28D;
            static constexpr std::uintptr_t bSelectable = 0x28D;
            static constexpr std::uintptr_t bWantsEditorEffects = 0x28D;
            static constexpr std::uintptr_t bWantsSelectionOutline = 0x28D;
            static constexpr std::uintptr_t bAffectDistanceFieldLighting = 0x28E;
            static constexpr std::uintptr_t bAffectIndirectLightingWhileHidden = 0x28E;
            static constexpr std::uintptr_t bCastContactShadow = 0x28E;
            static constexpr std::uintptr_t bCastDynamicShadow = 0x28E;
            static constexpr std::uintptr_t bCastFarShadow = 0x28E;
            static constexpr std::uintptr_t bCastStaticShadow = 0x28E;
            static constexpr std::uintptr_t bCastVolumetricTranslucentShadow = 0x28E;
            static constexpr std::uintptr_t bSelfShadowOnly = 0x28E;
            static constexpr std::uintptr_t bCastCinematicShadow = 0x28F;
            static constexpr std::uintptr_t bCastHiddenShadow = 0x28F;
            static constexpr std::uintptr_t bCastInsetShadow = 0x28F;
            static constexpr std::uintptr_t bCastShadowAsTwoSided = 0x28F;
            static constexpr std::uintptr_t bExcludeFromLightAttachmentGroup = 0x28F;
            static constexpr std::uintptr_t bLightAsIfStatic = 0x28F;
            static constexpr std::uintptr_t bLightAttachmentsAsGroup = 0x28F;
            static constexpr std::uintptr_t bReceiveMobileCSMShadows = 0x28F;
            static constexpr std::uintptr_t AlwaysLoadOnClient = 0x290;
            static constexpr std::uintptr_t bApplyImpulseOnDamage = 0x290;
            static constexpr std::uintptr_t bFillCollisionUnderneathForNavmesh = 0x290;
            static constexpr std::uintptr_t bIgnoreRadialForce = 0x290;
            static constexpr std::uintptr_t bIgnoreRadialImpulse = 0x290;
            static constexpr std::uintptr_t bRasterizeAsFilledConvexVolume = 0x290;
            static constexpr std::uintptr_t bReplicatePhysicsToAutonomousProxy = 0x290;
            static constexpr std::uintptr_t bSingleSampleShadowFromStationaryLights = 0x290;
            static constexpr std::uintptr_t AlwaysLoadOnServer = 0x291;
            static constexpr std::uintptr_t bHiddenInSceneCapture = 0x291;
            static constexpr std::uintptr_t bIsBeingMovedByEditor = 0x291;
            static constexpr std::uintptr_t bLumenHeightfield = 0x291;
            static constexpr std::uintptr_t bRayTracingFarField = 0x291;
            static constexpr std::uintptr_t bRenderCustomDepth = 0x291;
            static constexpr std::uintptr_t bUseEditorCompositing = 0x291;
            static constexpr std::uintptr_t bVisibleInSceneCaptureOnly = 0x291;
            static constexpr std::uintptr_t FirstPersonPrimitiveType = 0x292;
            static constexpr std::uintptr_t bHasNoStreamableTextures = 0x293;
            static constexpr std::uintptr_t bStaticWhenNotMoveable = 0x293;
            static constexpr std::uintptr_t bHasCustomNavigableGeometry = 0x294;
            static constexpr std::uintptr_t CanCharacterStepUpOn = 0x296;
            static constexpr std::uintptr_t LightingChannels = 0x297;
            static constexpr std::uintptr_t RayTracingGroupCullingPriority = 0x298;
            static constexpr std::uintptr_t CustomDepthStencilWriteMask = 0x299;
            static constexpr std::uintptr_t ExcludeFromHLODLevels = 0x29A;
            static constexpr std::uintptr_t RayTracingGroupId = 0x29C;
            static constexpr std::uintptr_t VisibilityId = 0x2A0;
            static constexpr std::uintptr_t CustomDepthStencilValue = 0x2A4;
            static constexpr std::uintptr_t CustomPrimitiveData = 0x2A8;
            static constexpr std::uintptr_t CustomPrimitiveDataInternal = 0x2B8;
            static constexpr std::uintptr_t TranslucencySortPriority = 0x2E0;
            static constexpr std::uintptr_t TranslucencySortDistanceOffset = 0x2E4;
            static constexpr std::uintptr_t RuntimeVirtualTextures = 0x2E8;
            static constexpr std::uintptr_t VirtualTextureLodBias = 0x2F8;
            static constexpr std::uintptr_t VirtualTextureCullMips = 0x2F9;
            static constexpr std::uintptr_t VirtualTextureMinCoverage = 0x2FA;
            static constexpr std::uintptr_t VirtualTextureRenderPassType = 0x2FB;
            static constexpr std::uintptr_t BoundsScale = 0x348;
            static constexpr std::uintptr_t MoveIgnoreActors = 0x350;
            static constexpr std::uintptr_t MoveIgnoreComponents = 0x360;
            static constexpr std::uintptr_t BodyInstance = 0x380;
            static constexpr std::uintptr_t OnComponentHit = 0x528;
            static constexpr std::uintptr_t OnComponentBeginOverlap = 0x529;
            static constexpr std::uintptr_t OnComponentEndOverlap = 0x52A;
            static constexpr std::uintptr_t OnComponentWake = 0x52B;
            static constexpr std::uintptr_t OnComponentSleep = 0x52C;
            static constexpr std::uintptr_t OnComponentPhysicsStateChanged = 0x52E;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x52F;
            static constexpr std::uintptr_t OnEndCursorOver = 0x530;
            static constexpr std::uintptr_t OnClicked = 0x531;
            static constexpr std::uintptr_t OnReleased = 0x532;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x533;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x534;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x535;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x536;
            static constexpr std::uintptr_t OnTouchBegan = 0x537;
            static constexpr std::uintptr_t OnTouchEnded = 0x538;
            static constexpr std::uintptr_t OnTouchEntered = 0x539;
            static constexpr std::uintptr_t OnTouchExited = 0x53A;
            static constexpr std::uintptr_t LODParentPrimitive = 0x550;
        };

        inline static constexpr std::array<PropertyInfo, 116> Properties{{
            {"MinDrawDistance", 0x278, "FloatProperty"},
            {"LDMaxDrawDistance", 0x27C, "FloatProperty"},
            {"CachedMaxDrawDistance", 0x280, "FloatProperty"},
            {"DepthPriorityGroup", 0x284, "ByteProperty"},
            {"ViewOwnerDepthPriorityGroup", 0x285, "ByteProperty"},
            {"IndirectLightingCacheQuality", 0x286, "ByteProperty"},
            {"LightmapType", 0x287, "EnumProperty"},
            {"HLODBatchingPolicy", 0x288, "EnumProperty"},
            {"ShadowCacheInvalidationBehavior", 0x289, "EnumProperty"},
            {"bAlwaysCreatePhysicsState", 0x28A, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x28A, "BoolProperty"},
            {"bGenerateOverlapEvents", 0x28A, "BoolProperty"},
            {"bIsActorTextureStreamingBuiltData", 0x28A, "BoolProperty"},
            {"bIsValidTextureStreamingBuiltData", 0x28A, "BoolProperty"},
            {"bMultiBodyOverlap", 0x28A, "BoolProperty"},
            {"bNeverDistanceCull", 0x28A, "BoolProperty"},
            {"bAllowCullDistanceVolume", 0x28B, "BoolProperty"},
            {"bReturnMaterialOnMove", 0x28B, "BoolProperty"},
            {"bTraceComplexOnMove", 0x28B, "BoolProperty"},
            {"bUseViewOwnerDepthPriorityGroup", 0x28B, "BoolProperty"},
            {"bVisibleInRayTracing", 0x28B, "BoolProperty"},
            {"bVisibleInRealTimeSkyCaptures", 0x28B, "BoolProperty"},
            {"bVisibleInReflectionCaptures", 0x28B, "BoolProperty"},
            {"bVisibleInReflections", 0x28B, "BoolProperty"},
            {"bHoldout", 0x28C, "BoolProperty"},
            {"bOnlyOwnerSee", 0x28C, "BoolProperty"},
            {"bOwnerNoSee", 0x28C, "BoolProperty"},
            {"bReceivesDecals", 0x28C, "BoolProperty"},
            {"bRenderInDepthPass", 0x28C, "BoolProperty"},
            {"bRenderInMainPass", 0x28C, "BoolProperty"},
            {"bTreatAsBackgroundForOcclusion", 0x28C, "BoolProperty"},
            {"bUseAsOccluder", 0x28C, "BoolProperty"},
            {"CastShadow", 0x28D, "BoolProperty"},
            {"bAffectDynamicIndirectLighting", 0x28D, "BoolProperty"},
            {"bEmissiveLightSource", 0x28D, "BoolProperty"},
            {"bForceMipStreaming", 0x28D, "BoolProperty"},
            {"bHasPerInstanceHitProxies", 0x28D, "BoolProperty"},
            {"bSelectable", 0x28D, "BoolProperty"},
            {"bWantsEditorEffects", 0x28D, "BoolProperty"},
            {"bWantsSelectionOutline", 0x28D, "BoolProperty"},
            {"bAffectDistanceFieldLighting", 0x28E, "BoolProperty"},
            {"bAffectIndirectLightingWhileHidden", 0x28E, "BoolProperty"},
            {"bCastContactShadow", 0x28E, "BoolProperty"},
            {"bCastDynamicShadow", 0x28E, "BoolProperty"},
            {"bCastFarShadow", 0x28E, "BoolProperty"},
            {"bCastStaticShadow", 0x28E, "BoolProperty"},
            {"bCastVolumetricTranslucentShadow", 0x28E, "BoolProperty"},
            {"bSelfShadowOnly", 0x28E, "BoolProperty"},
            {"bCastCinematicShadow", 0x28F, "BoolProperty"},
            {"bCastHiddenShadow", 0x28F, "BoolProperty"},
            {"bCastInsetShadow", 0x28F, "BoolProperty"},
            {"bCastShadowAsTwoSided", 0x28F, "BoolProperty"},
            {"bExcludeFromLightAttachmentGroup", 0x28F, "BoolProperty"},
            {"bLightAsIfStatic", 0x28F, "BoolProperty"},
            {"bLightAttachmentsAsGroup", 0x28F, "BoolProperty"},
            {"bReceiveMobileCSMShadows", 0x28F, "BoolProperty"},
            {"AlwaysLoadOnClient", 0x290, "BoolProperty"},
            {"bApplyImpulseOnDamage", 0x290, "BoolProperty"},
            {"bFillCollisionUnderneathForNavmesh", 0x290, "BoolProperty"},
            {"bIgnoreRadialForce", 0x290, "BoolProperty"},
            {"bIgnoreRadialImpulse", 0x290, "BoolProperty"},
            {"bRasterizeAsFilledConvexVolume", 0x290, "BoolProperty"},
            {"bReplicatePhysicsToAutonomousProxy", 0x290, "BoolProperty"},
            {"bSingleSampleShadowFromStationaryLights", 0x290, "BoolProperty"},
            {"AlwaysLoadOnServer", 0x291, "BoolProperty"},
            {"bHiddenInSceneCapture", 0x291, "BoolProperty"},
            {"bIsBeingMovedByEditor", 0x291, "BoolProperty"},
            {"bLumenHeightfield", 0x291, "BoolProperty"},
            {"bRayTracingFarField", 0x291, "BoolProperty"},
            {"bRenderCustomDepth", 0x291, "BoolProperty"},
            {"bUseEditorCompositing", 0x291, "BoolProperty"},
            {"bVisibleInSceneCaptureOnly", 0x291, "BoolProperty"},
            {"FirstPersonPrimitiveType", 0x292, "EnumProperty"},
            {"bHasNoStreamableTextures", 0x293, "BoolProperty"},
            {"bStaticWhenNotMoveable", 0x293, "BoolProperty"},
            {"bHasCustomNavigableGeometry", 0x294, "ByteProperty"},
            {"CanCharacterStepUpOn", 0x296, "ByteProperty"},
            {"LightingChannels", 0x297, "StructProperty"},
            {"RayTracingGroupCullingPriority", 0x298, "EnumProperty"},
            {"CustomDepthStencilWriteMask", 0x299, "EnumProperty"},
            {"ExcludeFromHLODLevels", 0x29A, "ByteProperty"},
            {"RayTracingGroupId", 0x29C, "IntProperty"},
            {"VisibilityId", 0x2A0, "IntProperty"},
            {"CustomDepthStencilValue", 0x2A4, "IntProperty"},
            {"CustomPrimitiveData", 0x2A8, "StructProperty"},
            {"CustomPrimitiveDataInternal", 0x2B8, "StructProperty"},
            {"TranslucencySortPriority", 0x2E0, "IntProperty"},
            {"TranslucencySortDistanceOffset", 0x2E4, "FloatProperty"},
            {"RuntimeVirtualTextures", 0x2E8, "ArrayProperty"},
            {"VirtualTextureLodBias", 0x2F8, "Int8Property"},
            {"VirtualTextureCullMips", 0x2F9, "Int8Property"},
            {"VirtualTextureMinCoverage", 0x2FA, "Int8Property"},
            {"VirtualTextureRenderPassType", 0x2FB, "EnumProperty"},
            {"BoundsScale", 0x348, "FloatProperty"},
            {"MoveIgnoreActors", 0x350, "ArrayProperty"},
            {"MoveIgnoreComponents", 0x360, "ArrayProperty"},
            {"BodyInstance", 0x380, "StructProperty"},
            {"OnComponentHit", 0x528, "MulticastSparseDelegateProperty"},
            {"OnComponentBeginOverlap", 0x529, "MulticastSparseDelegateProperty"},
            {"OnComponentEndOverlap", 0x52A, "MulticastSparseDelegateProperty"},
            {"OnComponentWake", 0x52B, "MulticastSparseDelegateProperty"},
            {"OnComponentSleep", 0x52C, "MulticastSparseDelegateProperty"},
            {"OnComponentPhysicsStateChanged", 0x52E, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x52F, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x530, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x531, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x532, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x533, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x534, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x535, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x536, "MulticastSparseDelegateProperty"},
            {"OnTouchBegan", 0x537, "MulticastSparseDelegateProperty"},
            {"OnTouchEnded", 0x538, "MulticastSparseDelegateProperty"},
            {"OnTouchEntered", 0x539, "MulticastSparseDelegateProperty"},
            {"OnTouchExited", 0x53A, "MulticastSparseDelegateProperty"},
            {"LODParentPrimitive", 0x550, "ObjectProperty"},
        }};
    };

    struct EQSTestingPawn
    {
        static constexpr std::string_view Name = "EQSTestingPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Character";
        struct Offsets
        {
            static constexpr std::uintptr_t QueryTemplate = 0x648;
            static constexpr std::uintptr_t QueryParams = 0x650;
            static constexpr std::uintptr_t QueryConfig = 0x660;
            static constexpr std::uintptr_t TimeLimitPerStep = 0x670;
            static constexpr std::uintptr_t StepToDebugDraw = 0x674;
            static constexpr std::uintptr_t HighlightMode = 0x678;
            static constexpr std::uintptr_t bDrawFailedItems = 0x67C;
            static constexpr std::uintptr_t bDrawItemOrientation = 0x67C;
            static constexpr std::uintptr_t bDrawLabels = 0x67C;
            static constexpr std::uintptr_t bReRunQueryOnlyOnFinishedMove = 0x67C;
            static constexpr std::uintptr_t bRunQueryOnSelectionChanged = 0x67C;
            static constexpr std::uintptr_t bShouldBeVisibleInGame = 0x67C;
            static constexpr std::uintptr_t bTickDuringGame = 0x67C;
            static constexpr std::uintptr_t QueryingMode = 0x680;
            static constexpr std::uintptr_t NavAgentProperties = 0x688;
            static constexpr std::uintptr_t StepResults = 0x6C8;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"QueryTemplate", 0x648, "ObjectProperty"},
            {"QueryParams", 0x650, "ArrayProperty"},
            {"QueryConfig", 0x660, "ArrayProperty"},
            {"TimeLimitPerStep", 0x670, "FloatProperty"},
            {"StepToDebugDraw", 0x674, "IntProperty"},
            {"HighlightMode", 0x678, "EnumProperty"},
            {"bDrawFailedItems", 0x67C, "BoolProperty"},
            {"bDrawItemOrientation", 0x67C, "BoolProperty"},
            {"bDrawLabels", 0x67C, "BoolProperty"},
            {"bReRunQueryOnlyOnFinishedMove", 0x67C, "BoolProperty"},
            {"bRunQueryOnSelectionChanged", 0x67C, "BoolProperty"},
            {"bShouldBeVisibleInGame", 0x67C, "BoolProperty"},
            {"bTickDuringGame", 0x67C, "BoolProperty"},
            {"QueryingMode", 0x680, "ByteProperty"},
            {"NavAgentProperties", 0x688, "StructProperty"},
            {"StepResults", 0x6C8, "ArrayProperty"},
        }};
    };

    struct EnvDirection
    {
        static constexpr std::string_view Name = "EnvDirection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LineFrom = 0x0;
            static constexpr std::uintptr_t LineTo = 0x8;
            static constexpr std::uintptr_t Rotation = 0x10;
            static constexpr std::uintptr_t DirMode = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LineFrom", 0x0, "ClassProperty"},
            {"LineTo", 0x8, "ClassProperty"},
            {"Rotation", 0x10, "ClassProperty"},
            {"DirMode", 0x18, "ByteProperty"},
        }};
    };

    struct EnvNamedValue
    {
        static constexpr std::string_view Name = "EnvNamedValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParamName = 0x0;
            static constexpr std::uintptr_t ParamType = 0x4;
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ParamName", 0x0, "NameProperty"},
            {"ParamType", 0x4, "EnumProperty"},
            {"Value", 0x8, "FloatProperty"},
        }};
    };

    struct EnvOverlapData
    {
        static constexpr std::string_view Name = "EnvOverlapData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtentX = 0x0;
            static constexpr std::uintptr_t ExtentY = 0x4;
            static constexpr std::uintptr_t ExtentZ = 0x8;
            static constexpr std::uintptr_t ShapeOffset = 0x10;
            static constexpr std::uintptr_t OverlapChannel = 0x28;
            static constexpr std::uintptr_t OverlapShape = 0x29;
            static constexpr std::uintptr_t bOnlyBlockingHits = 0x2C;
            static constexpr std::uintptr_t bOverlapComplex = 0x2C;
            static constexpr std::uintptr_t bSkipOverlapQuerier = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"ExtentX", 0x0, "FloatProperty"},
            {"ExtentY", 0x4, "FloatProperty"},
            {"ExtentZ", 0x8, "FloatProperty"},
            {"ShapeOffset", 0x10, "StructProperty"},
            {"OverlapChannel", 0x28, "ByteProperty"},
            {"OverlapShape", 0x29, "ByteProperty"},
            {"bOnlyBlockingHits", 0x2C, "BoolProperty"},
            {"bOverlapComplex", 0x2C, "BoolProperty"},
            {"bSkipOverlapQuerier", 0x2C, "BoolProperty"},
        }};
    };

    struct EnvQuery
    {
        static constexpr std::string_view Name = "EnvQuery";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t QueryName = 0x28;
            static constexpr std::uintptr_t Options = 0x30;
            static constexpr std::uintptr_t bStripFromClientBuilds = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"QueryName", 0x28, "NameProperty"},
            {"Options", 0x30, "ArrayProperty"},
            {"bStripFromClientBuilds", 0x40, "BoolProperty"},
        }};
    };

    struct EnvQueryContext
    {
        static constexpr std::string_view Name = "EnvQueryContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EnvQueryContextData
    {
        static constexpr std::string_view Name = "EnvQueryContextData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ValueType = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ValueType", 0x0, "ClassProperty"},
        }};
    };

    struct EnvQueryContext_BlueprintBase
    {
        static constexpr std::string_view Name = "EnvQueryContext_BlueprintBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "ProvideActorsSet",
            "ProvideLocationsSet",
            "ProvideSingleActor",
            "ProvideSingleLocation",
        }};
    };

    struct EnvQueryContext_Item
    {
        static constexpr std::string_view Name = "EnvQueryContext_Item";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EnvQueryContext_NavigationData
    {
        static constexpr std::string_view Name = "EnvQueryContext_NavigationData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
            static constexpr std::uintptr_t NavAgentProperties = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NavAgentProperties", 0x28, "StructProperty"},
        }};
    };

    struct EnvQueryContext_Querier
    {
        static constexpr std::string_view Name = "EnvQueryContext_Querier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EnvQueryDebugHelpers
    {
        static constexpr std::string_view Name = "EnvQueryDebugHelpers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EnvQueryGenerator
    {
        static constexpr std::string_view Name = "EnvQueryGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t OptionName = 0x30;
            static constexpr std::uintptr_t ItemType = 0x40;
            static constexpr std::uintptr_t bAutoSortTests = 0x48;
            static constexpr std::uintptr_t bCanRunAsync = 0x48;
            static constexpr std::uintptr_t EnvQueryResultNormalizationOption = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OptionName", 0x30, "StrProperty"},
            {"ItemType", 0x40, "ClassProperty"},
            {"bAutoSortTests", 0x48, "BoolProperty"},
            {"bCanRunAsync", 0x48, "BoolProperty"},
            {"EnvQueryResultNormalizationOption", 0x4C, "EnumProperty"},
        }};
    };

    struct EnvQueryGenerator_ActorsOfClass
    {
        static constexpr std::string_view Name = "EnvQueryGenerator_ActorsOfClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t SearchedActorClass = 0x50;
            static constexpr std::uintptr_t GenerateOnlyActorsInRadius = 0x58;
            static constexpr std::uintptr_t SearchRadius = 0x90;
            static constexpr std::uintptr_t SearchCenter = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SearchedActorClass", 0x50, "ClassProperty"},
            {"GenerateOnlyActorsInRadius", 0x58, "StructProperty"},
            {"SearchRadius", 0x90, "StructProperty"},
            {"SearchCenter", 0xC8, "ClassProperty"},
        }};
    };

    struct EnvQueryGenerator_BlueprintBase
    {
        static constexpr std::string_view Name = "EnvQueryGenerator_BlueprintBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t GeneratorsActionDescription = 0x50;
            static constexpr std::uintptr_t Context = 0x60;
            static constexpr std::uintptr_t GeneratedItemType = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GeneratorsActionDescription", 0x50, "TextProperty"},
            {"Context", 0x60, "ClassProperty"},
            {"GeneratedItemType", 0x68, "ClassProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "AddGeneratedActor",
            "AddGeneratedVector",
            "DoItemGeneration",
            "DoItemGenerationFromActors",
            "GetQuerier",
        }};
    };

    struct EnvQueryGenerator_Composite
    {
        static constexpr std::string_view Name = "EnvQueryGenerator_Composite";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t Generators = 0x50;
            static constexpr std::uintptr_t bAllowDifferentItemTypes = 0x60;
            static constexpr std::uintptr_t bHasMatchingItemType = 0x60;
            static constexpr std::uintptr_t ForcedItemType = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Generators", 0x50, "ArrayProperty"},
            {"bAllowDifferentItemTypes", 0x60, "BoolProperty"},
            {"bHasMatchingItemType", 0x60, "BoolProperty"},
            {"ForcedItemType", 0x68, "ClassProperty"},
        }};
    };

    struct EnvQueryGenerator_Cone
    {
        static constexpr std::string_view Name = "EnvQueryGenerator_Cone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ProjectedPoints";
        struct Offsets
        {
            static constexpr std::uintptr_t AlignedPointsDistance = 0x90;
            static constexpr std::uintptr_t ConeDegrees = 0xC8;
            static constexpr std::uintptr_t AngleStep = 0x100;
            static constexpr std::uintptr_t Range = 0x138;
            static constexpr std::uintptr_t CenterActor = 0x170;
            static constexpr std::uintptr_t bIncludeContextLocation = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AlignedPointsDistance", 0x90, "StructProperty"},
            {"ConeDegrees", 0xC8, "StructProperty"},
            {"AngleStep", 0x100, "StructProperty"},
            {"Range", 0x138, "StructProperty"},
            {"CenterActor", 0x170, "ClassProperty"},
            {"bIncludeContextLocation", 0x178, "BoolProperty"},
        }};
    };

    struct EnvQueryGenerator_CurrentLocation
    {
        static constexpr std::string_view Name = "EnvQueryGenerator_CurrentLocation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ProjectedPoints";
        struct Offsets
        {
            static constexpr std::uintptr_t QueryContext = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QueryContext", 0x90, "ClassProperty"},
        }};
    };

    struct EnvQueryGenerator_Donut
    {
        static constexpr std::string_view Name = "EnvQueryGenerator_Donut";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ProjectedPoints";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerRadius = 0x90;
            static constexpr std::uintptr_t OuterRadius = 0xC8;
            static constexpr std::uintptr_t NumberOfRings = 0x100;
            static constexpr std::uintptr_t PointOnRingSpacingMethod = 0x138;
            static constexpr std::uintptr_t SpaceBetweenPoints = 0x140;
            static constexpr std::uintptr_t PointsPerRing = 0x178;
            static constexpr std::uintptr_t ArcDirection = 0x1B0;
            static constexpr std::uintptr_t ArcAngle = 0x1D0;
            static constexpr std::uintptr_t bUseSpiralPattern = 0x208;
            static constexpr std::uintptr_t Center = 0x210;
            static constexpr std::uintptr_t bDefineArc = 0x218;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"InnerRadius", 0x90, "StructProperty"},
            {"OuterRadius", 0xC8, "StructProperty"},
            {"NumberOfRings", 0x100, "StructProperty"},
            {"PointOnRingSpacingMethod", 0x138, "EnumProperty"},
            {"SpaceBetweenPoints", 0x140, "StructProperty"},
            {"PointsPerRing", 0x178, "StructProperty"},
            {"ArcDirection", 0x1B0, "StructProperty"},
            {"ArcAngle", 0x1D0, "StructProperty"},
            {"bUseSpiralPattern", 0x208, "BoolProperty"},
            {"Center", 0x210, "ClassProperty"},
            {"bDefineArc", 0x218, "BoolProperty"},
        }};
    };

    struct EnvQueryGenerator_OnCircle
    {
        static constexpr std::string_view Name = "EnvQueryGenerator_OnCircle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ProjectedPoints";
        struct Offsets
        {
            static constexpr std::uintptr_t CircleRadius = 0x90;
            static constexpr std::uintptr_t PointOnCircleSpacingMethod = 0xC8;
            static constexpr std::uintptr_t SpaceBetween = 0xD0;
            static constexpr std::uintptr_t NumberOfPoints = 0x108;
            static constexpr std::uintptr_t ArcDirection = 0x140;
            static constexpr std::uintptr_t ArcDirectionOffsetDegrees = 0x160;
            static constexpr std::uintptr_t ArcAngle = 0x198;
            static constexpr std::uintptr_t CircleCenter = 0x1D0;
            static constexpr std::uintptr_t bIgnoreAnyContextActorsWhenGeneratingCircle = 0x1D8;
            static constexpr std::uintptr_t CircleCenterZOffset = 0x1E0;
            static constexpr std::uintptr_t TraceData = 0x218;
            static constexpr std::uintptr_t bDefineArc = 0x250;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"CircleRadius", 0x90, "StructProperty"},
            {"PointOnCircleSpacingMethod", 0xC8, "EnumProperty"},
            {"SpaceBetween", 0xD0, "StructProperty"},
            {"NumberOfPoints", 0x108, "StructProperty"},
            {"ArcDirection", 0x140, "StructProperty"},
            {"ArcDirectionOffsetDegrees", 0x160, "StructProperty"},
            {"ArcAngle", 0x198, "StructProperty"},
            {"CircleCenter", 0x1D0, "ClassProperty"},
            {"bIgnoreAnyContextActorsWhenGeneratingCircle", 0x1D8, "BoolProperty"},
            {"CircleCenterZOffset", 0x1E0, "StructProperty"},
            {"TraceData", 0x218, "StructProperty"},
            {"bDefineArc", 0x250, "BoolProperty"},
        }};
    };

    struct EnvQueryGenerator_PathingGrid
    {
        static constexpr std::string_view Name = "EnvQueryGenerator_PathingGrid";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_SimpleGrid";
        struct Offsets
        {
            static constexpr std::uintptr_t PathToItem = 0x108;
            static constexpr std::uintptr_t NavigationFilter = 0x140;
            static constexpr std::uintptr_t ScanRangeMultiplier = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PathToItem", 0x108, "StructProperty"},
            {"NavigationFilter", 0x140, "ClassProperty"},
            {"ScanRangeMultiplier", 0x148, "StructProperty"},
        }};
    };

    struct EnvQueryGenerator_PerceivedActors
    {
        static constexpr std::string_view Name = "EnvQueryGenerator_PerceivedActors";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowedActorClass = 0x50;
            static constexpr std::uintptr_t SearchRadius = 0x58;
            static constexpr std::uintptr_t ListenerContext = 0x90;
            static constexpr std::uintptr_t SenseToUse = 0x98;
            static constexpr std::uintptr_t bIncludeKnownActors = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AllowedActorClass", 0x50, "ClassProperty"},
            {"SearchRadius", 0x58, "StructProperty"},
            {"ListenerContext", 0x90, "ClassProperty"},
            {"SenseToUse", 0x98, "ClassProperty"},
            {"bIncludeKnownActors", 0xA0, "BoolProperty"},
        }};
    };

    struct EnvQueryGenerator_ProjectedPoints
    {
        static constexpr std::string_view Name = "EnvQueryGenerator_ProjectedPoints";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectionData = 0x50;
            static constexpr std::uintptr_t NavDataOverrideContext = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProjectionData", 0x50, "StructProperty"},
            {"NavDataOverrideContext", 0x88, "ClassProperty"},
        }};
    };

    struct EnvQueryGenerator_SimpleGrid
    {
        static constexpr std::string_view Name = "EnvQueryGenerator_SimpleGrid";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ProjectedPoints";
        struct Offsets
        {
            static constexpr std::uintptr_t GridSize = 0x90;
            static constexpr std::uintptr_t SpaceBetween = 0xC8;
            static constexpr std::uintptr_t GenerateAround = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GridSize", 0x90, "StructProperty"},
            {"SpaceBetween", 0xC8, "StructProperty"},
            {"GenerateAround", 0x100, "ClassProperty"},
        }};
    };

    struct EnvQueryInstance
    {
        static constexpr std::string_view Name = "EnvQueryInstance";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "EnvQueryResult";
        struct Offsets
        {
            static constexpr std::uintptr_t World = 0x58;
            static constexpr std::uintptr_t ContextCache = 0x80;
            static constexpr std::uintptr_t Options = 0x90;
            static constexpr std::uintptr_t ItemTypeVectorCDO = 0xE0;
            static constexpr std::uintptr_t ItemTypeActorCDO = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"World", 0x58, "ObjectProperty"},
            {"ContextCache", 0x80, "ArrayProperty"},
            {"Options", 0x90, "ArrayProperty"},
            {"ItemTypeVectorCDO", 0xE0, "ObjectProperty"},
            {"ItemTypeActorCDO", 0xE8, "ObjectProperty"},
        }};
    };

    struct EnvQueryInstanceBlueprintWrapper
    {
        static constexpr std::string_view Name = "EnvQueryInstanceBlueprintWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t QueryID = 0x30;
            static constexpr std::uintptr_t ItemType = 0x58;
            static constexpr std::uintptr_t OptionIndex = 0x60;
            static constexpr std::uintptr_t OnQueryFinishedEvent = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"QueryID", 0x30, "IntProperty"},
            {"ItemType", 0x58, "ClassProperty"},
            {"OptionIndex", 0x60, "IntProperty"},
            {"OnQueryFinishedEvent", 0x68, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "GetItemScore",
            "GetQueryResultsAsActors",
            "GetQueryResultsAsLocations",
            "GetQueryResultsAsTransforms",
            "GetResultsAsActors",
            "GetResultsAsLocations",
            "SetNamedParam",
        }};
    };

    struct EnvQueryInstanceCache
    {
        static constexpr std::string_view Name = "EnvQueryInstanceCache";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Template = 0x0;
            static constexpr std::uintptr_t Instance = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Template", 0x0, "ObjectProperty"},
            {"Instance", 0x8, "StructProperty"},
        }};
    };

    struct EnvQueryInstanceContextCacheItem
    {
        static constexpr std::string_view Name = "EnvQueryInstanceContextCacheItem";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Class = 0x0;
            static constexpr std::uintptr_t ContextData = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Class", 0x0, "ClassProperty"},
            {"ContextData", 0x8, "StructProperty"},
        }};
    };

    struct EnvQueryItemType
    {
        static constexpr std::string_view Name = "EnvQueryItemType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EnvQueryItemType_Actor
    {
        static constexpr std::string_view Name = "EnvQueryItemType_Actor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryItemType_ActorBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EnvQueryItemType_ActorBase
    {
        static constexpr std::string_view Name = "EnvQueryItemType_ActorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryItemType_VectorBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EnvQueryItemType_Direction
    {
        static constexpr std::string_view Name = "EnvQueryItemType_Direction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryItemType_VectorBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EnvQueryItemType_OrientedPoint
    {
        static constexpr std::string_view Name = "EnvQueryItemType_OrientedPoint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryItemType_Point";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EnvQueryItemType_Point
    {
        static constexpr std::string_view Name = "EnvQueryItemType_Point";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryItemType_VectorBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EnvQueryItemType_VectorBase
    {
        static constexpr std::string_view Name = "EnvQueryItemType_VectorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryItemType";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EnvQueryManager
    {
        static constexpr std::string_view Name = "EnvQueryManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceCache = 0x68;
            static constexpr std::uintptr_t LocalContexts = 0x78;
            static constexpr std::uintptr_t GCShieldedWrappers = 0x88;
            static constexpr std::uintptr_t MaxAllowedTestingTime = 0xAC;
            static constexpr std::uintptr_t bTestQueriesUsingBreadth = 0xB0;
            static constexpr std::uintptr_t QueryCountWarningThreshold = 0xB4;
            static constexpr std::uintptr_t QueryCountWarningInterval = 0xB8;
            static constexpr std::uintptr_t ExecutionTimeWarningSeconds = 0xC0;
            static constexpr std::uintptr_t HandlingResultTimeWarningSeconds = 0xC8;
            static constexpr std::uintptr_t GenerationTimeWarningSeconds = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"InstanceCache", 0x68, "ArrayProperty"},
            {"LocalContexts", 0x78, "ArrayProperty"},
            {"GCShieldedWrappers", 0x88, "ArrayProperty"},
            {"MaxAllowedTestingTime", 0xAC, "FloatProperty"},
            {"bTestQueriesUsingBreadth", 0xB0, "BoolProperty"},
            {"QueryCountWarningThreshold", 0xB4, "IntProperty"},
            {"QueryCountWarningInterval", 0xB8, "DoubleProperty"},
            {"ExecutionTimeWarningSeconds", 0xC0, "DoubleProperty"},
            {"HandlingResultTimeWarningSeconds", 0xC8, "DoubleProperty"},
            {"GenerationTimeWarningSeconds", 0xD0, "DoubleProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "RunEQSQuery",
        }};
    };

    struct EnvQueryManagerConfig
    {
        static constexpr std::string_view Name = "EnvQueryManagerConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxAllowedTestingTime = 0x0;
            static constexpr std::uintptr_t bTestQueriesUsingBreadth = 0x4;
            static constexpr std::uintptr_t QueryCountWarningThreshold = 0x8;
            static constexpr std::uintptr_t QueryCountWarningInterval = 0x10;
            static constexpr std::uintptr_t ExecutionTimeWarningSeconds = 0x18;
            static constexpr std::uintptr_t HandlingResultTimeWarningSeconds = 0x20;
            static constexpr std::uintptr_t GenerationTimeWarningSeconds = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MaxAllowedTestingTime", 0x0, "FloatProperty"},
            {"bTestQueriesUsingBreadth", 0x4, "BoolProperty"},
            {"QueryCountWarningThreshold", 0x8, "IntProperty"},
            {"QueryCountWarningInterval", 0x10, "DoubleProperty"},
            {"ExecutionTimeWarningSeconds", 0x18, "DoubleProperty"},
            {"HandlingResultTimeWarningSeconds", 0x20, "DoubleProperty"},
            {"GenerationTimeWarningSeconds", 0x28, "DoubleProperty"},
        }};
    };

    struct EnvQueryNode
    {
        static constexpr std::string_view Name = "EnvQueryNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t VerNum = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VerNum", 0x28, "IntProperty"},
        }};
    };

    struct EnvQueryOption
    {
        static constexpr std::string_view Name = "EnvQueryOption";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Generator = 0x28;
            static constexpr std::uintptr_t Tests = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Generator", 0x28, "ObjectProperty"},
            {"Tests", 0x30, "ArrayProperty"},
        }};
    };

    struct EnvQueryOptionInstance
    {
        static constexpr std::string_view Name = "EnvQueryOptionInstance";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Generator = 0x0;
            static constexpr std::uintptr_t Tests = 0x8;
            static constexpr std::uintptr_t ItemType = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Generator", 0x0, "ObjectProperty"},
            {"Tests", 0x8, "ArrayProperty"},
            {"ItemType", 0x20, "ClassProperty"},
        }};
    };

    struct EnvQueryRequest
    {
        static constexpr std::string_view Name = "EnvQueryRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t QueryTemplate = 0x0;
            static constexpr std::uintptr_t Owner = 0x8;
            static constexpr std::uintptr_t World = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"QueryTemplate", 0x0, "ObjectProperty"},
            {"Owner", 0x8, "ObjectProperty"},
            {"World", 0x10, "ObjectProperty"},
        }};
    };

    struct EnvQueryResult
    {
        static constexpr std::string_view Name = "EnvQueryResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemType = 0x10;
            static constexpr std::uintptr_t OptionIndex = 0x2C;
            static constexpr std::uintptr_t QueryID = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ItemType", 0x10, "ClassProperty"},
            {"OptionIndex", 0x2C, "IntProperty"},
            {"QueryID", 0x30, "IntProperty"},
        }};
    };

    struct EnvQueryTest
    {
        static constexpr std::string_view Name = "EnvQueryTest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryNode";
        struct Offsets
        {
            static constexpr std::uintptr_t TestOrder = 0x30;
            static constexpr std::uintptr_t TestPurpose = 0x34;
            static constexpr std::uintptr_t TestComment = 0x38;
            static constexpr std::uintptr_t MultipleContextFilterOp = 0x48;
            static constexpr std::uintptr_t MultipleContextScoreOp = 0x49;
            static constexpr std::uintptr_t FilterType = 0x4A;
            static constexpr std::uintptr_t BoolValue = 0x50;
            static constexpr std::uintptr_t FloatValueMin = 0x88;
            static constexpr std::uintptr_t FloatValueMax = 0xC0;
            static constexpr std::uintptr_t ScoringEquation = 0xF9;
            static constexpr std::uintptr_t ClampMinType = 0xFA;
            static constexpr std::uintptr_t ClampMaxType = 0xFB;
            static constexpr std::uintptr_t NormalizationType = 0xFC;
            static constexpr std::uintptr_t ScoreClampMin = 0x100;
            static constexpr std::uintptr_t ScoreClampMax = 0x138;
            static constexpr std::uintptr_t ScoringFactor = 0x170;
            static constexpr std::uintptr_t ReferenceValue = 0x1A8;
            static constexpr std::uintptr_t bDefineReferenceValue = 0x1E0;
            static constexpr std::uintptr_t bWorkOnFloatValues = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"TestOrder", 0x30, "IntProperty"},
            {"TestPurpose", 0x34, "ByteProperty"},
            {"TestComment", 0x38, "StrProperty"},
            {"MultipleContextFilterOp", 0x48, "ByteProperty"},
            {"MultipleContextScoreOp", 0x49, "ByteProperty"},
            {"FilterType", 0x4A, "ByteProperty"},
            {"BoolValue", 0x50, "StructProperty"},
            {"FloatValueMin", 0x88, "StructProperty"},
            {"FloatValueMax", 0xC0, "StructProperty"},
            {"ScoringEquation", 0xF9, "ByteProperty"},
            {"ClampMinType", 0xFA, "ByteProperty"},
            {"ClampMaxType", 0xFB, "ByteProperty"},
            {"NormalizationType", 0xFC, "EnumProperty"},
            {"ScoreClampMin", 0x100, "StructProperty"},
            {"ScoreClampMax", 0x138, "StructProperty"},
            {"ScoringFactor", 0x170, "StructProperty"},
            {"ReferenceValue", 0x1A8, "StructProperty"},
            {"bDefineReferenceValue", 0x1E0, "BoolProperty"},
            {"bWorkOnFloatValues", 0x1F0, "BoolProperty"},
        }};
    };

    struct EnvQueryTest_Distance
    {
        static constexpr std::string_view Name = "EnvQueryTest_Distance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t TestMode = 0x1F8;
            static constexpr std::uintptr_t DistanceTo = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TestMode", 0x1F8, "ByteProperty"},
            {"DistanceTo", 0x200, "ClassProperty"},
        }};
    };

    struct EnvQueryTest_Dot
    {
        static constexpr std::string_view Name = "EnvQueryTest_Dot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t LineA = 0x1F8;
            static constexpr std::uintptr_t LineB = 0x218;
            static constexpr std::uintptr_t TestMode = 0x238;
            static constexpr std::uintptr_t bAbsoluteValue = 0x239;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LineA", 0x1F8, "StructProperty"},
            {"LineB", 0x218, "StructProperty"},
            {"TestMode", 0x238, "EnumProperty"},
            {"bAbsoluteValue", 0x239, "BoolProperty"},
        }};
    };

    struct EnvQueryTest_GameplayTags
    {
        static constexpr std::string_view Name = "EnvQueryTest_GameplayTags";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t TagQueryToMatch = 0x1F8;
            static constexpr std::uintptr_t bSearchComponentsForTags = 0x240;
            static constexpr std::uintptr_t bRejectIncompatibleItems = 0x241;
            static constexpr std::uintptr_t bUpdatedToUseQuery = 0x242;
            static constexpr std::uintptr_t TagsToMatch = 0x243;
            static constexpr std::uintptr_t GameplayTags = 0x248;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TagQueryToMatch", 0x1F8, "StructProperty"},
            {"bSearchComponentsForTags", 0x240, "BoolProperty"},
            {"bRejectIncompatibleItems", 0x241, "BoolProperty"},
            {"bUpdatedToUseQuery", 0x242, "BoolProperty"},
            {"TagsToMatch", 0x243, "EnumProperty"},
            {"GameplayTags", 0x248, "StructProperty"},
        }};
    };

    struct EnvQueryTest_Overlap
    {
        static constexpr std::string_view Name = "EnvQueryTest_Overlap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t OverlapData = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OverlapData", 0x1F8, "StructProperty"},
        }};
    };

    struct EnvQueryTest_Pathfinding
    {
        static constexpr std::string_view Name = "EnvQueryTest_Pathfinding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t TestMode = 0x1F8;
            static constexpr std::uintptr_t Context = 0x200;
            static constexpr std::uintptr_t PathFromContext = 0x208;
            static constexpr std::uintptr_t SkipUnreachable = 0x240;
            static constexpr std::uintptr_t FilterClass = 0x278;
            static constexpr std::uintptr_t NavDataOverrideContext = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TestMode", 0x1F8, "ByteProperty"},
            {"Context", 0x200, "ClassProperty"},
            {"PathFromContext", 0x208, "StructProperty"},
            {"SkipUnreachable", 0x240, "StructProperty"},
            {"FilterClass", 0x278, "ClassProperty"},
            {"NavDataOverrideContext", 0x280, "ClassProperty"},
        }};
    };

    struct EnvQueryTest_PathfindingBatch
    {
        static constexpr std::string_view Name = "EnvQueryTest_PathfindingBatch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest_Pathfinding";
        struct Offsets
        {
            static constexpr std::uintptr_t ScanRangeMultiplier = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ScanRangeMultiplier", 0x288, "StructProperty"},
        }};
    };

    struct EnvQueryTest_Project
    {
        static constexpr std::string_view Name = "EnvQueryTest_Project";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectionData = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ProjectionData", 0x1F8, "StructProperty"},
        }};
    };

    struct EnvQueryTest_Random
    {
        static constexpr std::string_view Name = "EnvQueryTest_Random";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t TestOrder = 0x30;
            static constexpr std::uintptr_t TestPurpose = 0x34;
            static constexpr std::uintptr_t TestComment = 0x38;
            static constexpr std::uintptr_t MultipleContextFilterOp = 0x48;
            static constexpr std::uintptr_t MultipleContextScoreOp = 0x49;
            static constexpr std::uintptr_t FilterType = 0x4A;
            static constexpr std::uintptr_t BoolValue = 0x50;
            static constexpr std::uintptr_t FloatValueMin = 0x88;
            static constexpr std::uintptr_t FloatValueMax = 0xC0;
            static constexpr std::uintptr_t ScoringEquation = 0xF9;
            static constexpr std::uintptr_t ClampMinType = 0xFA;
            static constexpr std::uintptr_t ClampMaxType = 0xFB;
            static constexpr std::uintptr_t NormalizationType = 0xFC;
            static constexpr std::uintptr_t ScoreClampMin = 0x100;
            static constexpr std::uintptr_t ScoreClampMax = 0x138;
            static constexpr std::uintptr_t ScoringFactor = 0x170;
            static constexpr std::uintptr_t ReferenceValue = 0x1A8;
            static constexpr std::uintptr_t bDefineReferenceValue = 0x1E0;
            static constexpr std::uintptr_t bWorkOnFloatValues = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"TestOrder", 0x30, "IntProperty"},
            {"TestPurpose", 0x34, "ByteProperty"},
            {"TestComment", 0x38, "StrProperty"},
            {"MultipleContextFilterOp", 0x48, "ByteProperty"},
            {"MultipleContextScoreOp", 0x49, "ByteProperty"},
            {"FilterType", 0x4A, "ByteProperty"},
            {"BoolValue", 0x50, "StructProperty"},
            {"FloatValueMin", 0x88, "StructProperty"},
            {"FloatValueMax", 0xC0, "StructProperty"},
            {"ScoringEquation", 0xF9, "ByteProperty"},
            {"ClampMinType", 0xFA, "ByteProperty"},
            {"ClampMaxType", 0xFB, "ByteProperty"},
            {"NormalizationType", 0xFC, "EnumProperty"},
            {"ScoreClampMin", 0x100, "StructProperty"},
            {"ScoreClampMax", 0x138, "StructProperty"},
            {"ScoringFactor", 0x170, "StructProperty"},
            {"ReferenceValue", 0x1A8, "StructProperty"},
            {"bDefineReferenceValue", 0x1E0, "BoolProperty"},
            {"bWorkOnFloatValues", 0x1F0, "BoolProperty"},
        }};
    };

    struct EnvQueryTest_Trace
    {
        static constexpr std::string_view Name = "EnvQueryTest_Trace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t TraceData = 0x1F8;
            static constexpr std::uintptr_t TraceFromContext = 0x230;
            static constexpr std::uintptr_t ItemHeightOffset = 0x268;
            static constexpr std::uintptr_t ContextHeightOffset = 0x2A0;
            static constexpr std::uintptr_t Context = 0x2D8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TraceData", 0x1F8, "StructProperty"},
            {"TraceFromContext", 0x230, "StructProperty"},
            {"ItemHeightOffset", 0x268, "StructProperty"},
            {"ContextHeightOffset", 0x2A0, "StructProperty"},
            {"Context", 0x2D8, "ClassProperty"},
        }};
    };

    struct EnvQueryTest_Volume
    {
        static constexpr std::string_view Name = "EnvQueryTest_Volume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t VolumeContext = 0x1F8;
            static constexpr std::uintptr_t VolumeClass = 0x200;
            static constexpr std::uintptr_t bDoComplexVolumeTest = 0x208;
            static constexpr std::uintptr_t bSkipTestIfNoVolumes = 0x208;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"VolumeContext", 0x1F8, "ClassProperty"},
            {"VolumeClass", 0x200, "ClassProperty"},
            {"bDoComplexVolumeTest", 0x208, "BoolProperty"},
            {"bSkipTestIfNoVolumes", 0x208, "BoolProperty"},
        }};
    };

    struct EnvQueryTypes
    {
        static constexpr std::string_view Name = "EnvQueryTypes";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EnvTraceData
    {
        static constexpr std::string_view Name = "EnvTraceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VersionNum = 0x0;
            static constexpr std::uintptr_t NavigationFilter = 0x8;
            static constexpr std::uintptr_t ProjectDown = 0x10;
            static constexpr std::uintptr_t ProjectUp = 0x14;
            static constexpr std::uintptr_t ExtentX = 0x18;
            static constexpr std::uintptr_t ExtentY = 0x1C;
            static constexpr std::uintptr_t ExtentZ = 0x20;
            static constexpr std::uintptr_t PostProjectionVerticalOffset = 0x24;
            static constexpr std::uintptr_t TraceChannel = 0x28;
            static constexpr std::uintptr_t SerializedChannel = 0x29;
            static constexpr std::uintptr_t TraceProfileName = 0x2C;
            static constexpr std::uintptr_t TraceShape = 0x30;
            static constexpr std::uintptr_t TraceMode = 0x31;
            static constexpr std::uintptr_t bCanDisableTrace = 0x34;
            static constexpr std::uintptr_t bCanProjectDown = 0x34;
            static constexpr std::uintptr_t bCanTraceOnGeometry = 0x34;
            static constexpr std::uintptr_t bCanTraceOnNavMesh = 0x34;
            static constexpr std::uintptr_t bOnlyBlockingHits = 0x34;
            static constexpr std::uintptr_t bTraceComplex = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"VersionNum", 0x0, "IntProperty"},
            {"NavigationFilter", 0x8, "ClassProperty"},
            {"ProjectDown", 0x10, "FloatProperty"},
            {"ProjectUp", 0x14, "FloatProperty"},
            {"ExtentX", 0x18, "FloatProperty"},
            {"ExtentY", 0x1C, "FloatProperty"},
            {"ExtentZ", 0x20, "FloatProperty"},
            {"PostProjectionVerticalOffset", 0x24, "FloatProperty"},
            {"TraceChannel", 0x28, "ByteProperty"},
            {"SerializedChannel", 0x29, "ByteProperty"},
            {"TraceProfileName", 0x2C, "NameProperty"},
            {"TraceShape", 0x30, "ByteProperty"},
            {"TraceMode", 0x31, "ByteProperty"},
            {"bCanDisableTrace", 0x34, "BoolProperty"},
            {"bCanProjectDown", 0x34, "BoolProperty"},
            {"bCanTraceOnGeometry", 0x34, "BoolProperty"},
            {"bCanTraceOnNavMesh", 0x34, "BoolProperty"},
            {"bOnlyBlockingHits", 0x34, "BoolProperty"},
            {"bTraceComplex", 0x34, "BoolProperty"},
        }};
    };

    struct GeneratedNavLinksProxy
    {
        static constexpr std::string_view Name = "GeneratedNavLinksProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseGeneratedNavLinksProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSmartLinkReached = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnSmartLinkReached", 0x40, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ReceiveSmartLinkReached",
        }};
    };

    struct GenericTeamAgentInterface
    {
        static constexpr std::string_view Name = "GenericTeamAgentInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GenericTeamId
    {
        static constexpr std::string_view Name = "GenericTeamId";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TeamId = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TeamId", 0x0, "ByteProperty"},
        }};
    };

    struct GridPathAIController
    {
        static constexpr std::string_view Name = "GridPathAIController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIController";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowStrafe = 0x348;
            static constexpr std::uintptr_t bLOSflag = 0x348;
            static constexpr std::uintptr_t bSetControlRotationFromPawnOrientation = 0x348;
            static constexpr std::uintptr_t bSkipExtraLOSChecks = 0x348;
            static constexpr std::uintptr_t bSkipRootComponentUpdate = 0x348;
            static constexpr std::uintptr_t bStartAILogicOnPossess = 0x348;
            static constexpr std::uintptr_t bStopAILogicOnUnposses = 0x348;
            static constexpr std::uintptr_t bWantsPlayerState = 0x348;
            static constexpr std::uintptr_t PathFollowingComponent = 0x350;
            static constexpr std::uintptr_t BrainComponent = 0x358;
            static constexpr std::uintptr_t PerceptionComponent = 0x360;
            static constexpr std::uintptr_t Blackboard = 0x368;
            static constexpr std::uintptr_t CachedGameplayTasksComponent = 0x370;
            static constexpr std::uintptr_t DefaultNavigationFilterClass = 0x378;
            static constexpr std::uintptr_t ReceiveMoveCompleted = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"bAllowStrafe", 0x348, "BoolProperty"},
            {"bLOSflag", 0x348, "BoolProperty"},
            {"bSetControlRotationFromPawnOrientation", 0x348, "BoolProperty"},
            {"bSkipExtraLOSChecks", 0x348, "BoolProperty"},
            {"bSkipRootComponentUpdate", 0x348, "BoolProperty"},
            {"bStartAILogicOnPossess", 0x348, "BoolProperty"},
            {"bStopAILogicOnUnposses", 0x348, "BoolProperty"},
            {"bWantsPlayerState", 0x348, "BoolProperty"},
            {"PathFollowingComponent", 0x350, "ObjectProperty"},
            {"BrainComponent", 0x358, "ObjectProperty"},
            {"PerceptionComponent", 0x360, "ObjectProperty"},
            {"Blackboard", 0x368, "ObjectProperty"},
            {"CachedGameplayTasksComponent", 0x370, "ObjectProperty"},
            {"DefaultNavigationFilterClass", 0x378, "ClassProperty"},
            {"ReceiveMoveCompleted", 0x380, "MulticastInlineDelegateProperty"},
        }};
    };

    struct GridPathFollowingComponent
    {
        static constexpr std::string_view Name = "GridPathFollowingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PathFollowingComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GridManager = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GridManager", 0x330, "ObjectProperty"},
        }};
    };

    struct IndexedHandleBase
    {
        static constexpr std::string_view Name = "IndexedHandleBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "SimpleIndexedHandleBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct IntervalCountdown
    {
        static constexpr std::string_view Name = "IntervalCountdown";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Interval = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Interval", 0x0, "FloatProperty"},
        }};
    };

    struct NavFilter_AIControllerDefault
    {
        static constexpr std::string_view Name = "NavFilter_AIControllerDefault";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavigationQueryFilter";
        struct Offsets
        {
            static constexpr std::uintptr_t Areas = 0x28;
            static constexpr std::uintptr_t IncludeFlags = 0x38;
            static constexpr std::uintptr_t ExcludeFlags = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Areas", 0x28, "ArrayProperty"},
            {"IncludeFlags", 0x38, "StructProperty"},
            {"ExcludeFlags", 0x3C, "StructProperty"},
        }};
    };

    struct NavLinkProxy
    {
        static constexpr std::string_view Name = "NavLinkProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PointLinks = 0x288;
            static constexpr std::uintptr_t SegmentLinks = 0x298;
            static constexpr std::uintptr_t SmartLinkComp = 0x2A8;
            static constexpr std::uintptr_t bSmartLinkIsRelevant = 0x2B0;
            static constexpr std::uintptr_t OnSmartLinkReached = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PointLinks", 0x288, "ArrayProperty"},
            {"SegmentLinks", 0x298, "ArrayProperty"},
            {"SmartLinkComp", 0x2A8, "ObjectProperty"},
            {"bSmartLinkIsRelevant", 0x2B0, "BoolProperty"},
            {"OnSmartLinkReached", 0x2B8, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "HasMovingAgents",
            "IsSmartLinkEnabled",
            "ReceiveSmartLinkReached",
            "ResumePathFollowing",
            "SetSmartLinkEnabled",
        }};
    };

    struct NavLocalGridManager
    {
        static constexpr std::string_view Name = "NavLocalGridManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "AddLocalNavigationGridForBox",
            "AddLocalNavigationGridForCapsule",
            "AddLocalNavigationGridForPoint",
            "AddLocalNavigationGridForPoints",
            "FindLocalNavigationGridPath",
            "RemoveLocalNavigationGrid",
            "SetLocalNavigationGridDensity",
        }};
    };

    struct PathFollowingComponent
    {
        static constexpr std::string_view Name = "PathFollowingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementComp = 0xF8;
            static constexpr std::uintptr_t MyNavData = 0x120;
            static constexpr std::uintptr_t PathPointAcceptanceRadiusOverride = 0x14C;
            static constexpr std::uintptr_t NavLinkAcceptanceRadiusOverride = 0x154;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MovementComp", 0xF8, "ObjectProperty"},
            {"MyNavData", 0x120, "ObjectProperty"},
            {"PathPointAcceptanceRadiusOverride", 0x14C, "OptionalProperty"},
            {"NavLinkAcceptanceRadiusOverride", 0x154, "OptionalProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetPathActionType",
            "GetPathDestination",
            "OnActorBump",
            "OnNavDataRegistered",
        }};
    };

    struct PathFollowingManager
    {
        static constexpr std::string_view Name = "PathFollowingManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PawnSensingComponent
    {
        static constexpr std::string_view Name = "PawnSensingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t HearingThreshold = 0xC0;
            static constexpr std::uintptr_t LOSHearingThreshold = 0xC4;
            static constexpr std::uintptr_t SightRadius = 0xC8;
            static constexpr std::uintptr_t SensingInterval = 0xCC;
            static constexpr std::uintptr_t HearingMaxSoundAge = 0xD0;
            static constexpr std::uintptr_t bEnableSensingUpdates = 0xD4;
            static constexpr std::uintptr_t bHearNoises = 0xD4;
            static constexpr std::uintptr_t bOnlySensePlayers = 0xD4;
            static constexpr std::uintptr_t bSeePawns = 0xD4;
            static constexpr std::uintptr_t OnSeePawn = 0xE8;
            static constexpr std::uintptr_t OnHearNoise = 0xF8;
            static constexpr std::uintptr_t PeripheralVisionAngle = 0x108;
            static constexpr std::uintptr_t PeripheralVisionCosine = 0x10C;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"HearingThreshold", 0xC0, "FloatProperty"},
            {"LOSHearingThreshold", 0xC4, "FloatProperty"},
            {"SightRadius", 0xC8, "FloatProperty"},
            {"SensingInterval", 0xCC, "FloatProperty"},
            {"HearingMaxSoundAge", 0xD0, "FloatProperty"},
            {"bEnableSensingUpdates", 0xD4, "BoolProperty"},
            {"bHearNoises", 0xD4, "BoolProperty"},
            {"bOnlySensePlayers", 0xD4, "BoolProperty"},
            {"bSeePawns", 0xD4, "BoolProperty"},
            {"OnSeePawn", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnHearNoise", 0xF8, "MulticastInlineDelegateProperty"},
            {"PeripheralVisionAngle", 0x108, "FloatProperty"},
            {"PeripheralVisionCosine", 0x10C, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "GetPeripheralVisionAngle",
            "GetPeripheralVisionCosine",
            "SetPeripheralVisionAngle",
            "SetSensingInterval",
            "SetSensingUpdatesEnabled",
        }};
    };

    struct PerceivedTargetUpdateInfo
    {
        static constexpr std::string_view Name = "PerceivedTargetUpdateInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x0;
            static constexpr std::uintptr_t Stimulus = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Target", 0x0, "StructProperty"},
            {"Stimulus", 0x10, "StructProperty"},
        }};
    };

    struct PerceptionSpatialDetectorRow
    {
        static constexpr std::string_view Name = "PerceptionSpatialDetectorRow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PerceptionSpatialRow";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Target", 0x0, "StructProperty"},
        }};
    };

    struct PerceptionSpatialEmitterRow
    {
        static constexpr std::string_view Name = "PerceptionSpatialEmitterRow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "PerceptionSpatialRow";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Target", 0x0, "StructProperty"},
        }};
    };

    struct PerceptionSpatialEmitterSegment
    {
        static constexpr std::string_view Name = "PerceptionSpatialEmitterSegment";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Rows = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Rows", 0x0, "ArrayProperty"},
        }};
    };

    struct PerceptionSpatialRow
    {
        static constexpr std::string_view Name = "PerceptionSpatialRow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Target", 0x0, "StructProperty"},
        }};
    };

    struct PerceptionTarget
    {
        static constexpr std::string_view Name = "PerceptionTarget";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Object = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Object", 0x0, "WeakObjectProperty"},
        }};
    };

    struct RecastGraphWrapper
    {
        static constexpr std::string_view Name = "RecastGraphWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RecastNavMeshActor = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RecastNavMeshActor", 0x0, "ObjectProperty"},
        }};
    };

    struct SequentialIDBase
    {
        static constexpr std::string_view Name = "SequentialIDBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Value", 0x0, "UInt32Property"},
        }};
    };

    struct SimpleIndexedHandleBase
    {
        static constexpr std::string_view Name = "SimpleIndexedHandleBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ValueOrBBKeyBlueprintUtility
    {
        static constexpr std::string_view Name = "ValueOrBBKeyBlueprintUtility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 11> FunctionNames{{
            "GetBool",
            "GetClass",
            "GetEnum",
            "GetFloat",
            "GetInt32",
            "GetName",
            "GetObject",
            "GetRotator",
            "GetString",
            "GetStruct",
            "GetVector",
        }};
    };

    struct ValueOrBBKey_Bool
    {
        static constexpr std::string_view Name = "ValueOrBBKey_Bool";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ValueOrBlackboardKeyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x10, "BoolProperty"},
        }};
    };

    struct ValueOrBBKey_Class
    {
        static constexpr std::string_view Name = "ValueOrBBKey_Class";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ValueOrBlackboardKeyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x10;
            static constexpr std::uintptr_t BaseClass = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultValue", 0x10, "ClassProperty"},
            {"BaseClass", 0x18, "ClassProperty"},
        }};
    };

    struct ValueOrBBKey_Enum
    {
        static constexpr std::string_view Name = "ValueOrBBKey_Enum";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ValueOrBlackboardKeyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x10;
            static constexpr std::uintptr_t EnumType = 0x18;
            static constexpr std::uintptr_t NativeEnumTypeName = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DefaultValue", 0x10, "ByteProperty"},
            {"EnumType", 0x18, "ObjectProperty"},
            {"NativeEnumTypeName", 0x20, "StrProperty"},
        }};
    };

    struct ValueOrBBKey_Float
    {
        static constexpr std::string_view Name = "ValueOrBBKey_Float";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ValueOrBlackboardKeyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x10, "FloatProperty"},
        }};
    };

    struct ValueOrBBKey_Int32
    {
        static constexpr std::string_view Name = "ValueOrBBKey_Int32";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ValueOrBlackboardKeyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x10, "IntProperty"},
        }};
    };

    struct ValueOrBBKey_Name
    {
        static constexpr std::string_view Name = "ValueOrBBKey_Name";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ValueOrBlackboardKeyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x10, "NameProperty"},
        }};
    };

    struct ValueOrBBKey_Object
    {
        static constexpr std::string_view Name = "ValueOrBBKey_Object";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ValueOrBlackboardKeyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x10;
            static constexpr std::uintptr_t BaseClass = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultValue", 0x10, "ObjectProperty"},
            {"BaseClass", 0x18, "ClassProperty"},
        }};
    };

    struct ValueOrBBKey_Rotator
    {
        static constexpr std::string_view Name = "ValueOrBBKey_Rotator";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ValueOrBlackboardKeyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x10, "StructProperty"},
        }};
    };

    struct ValueOrBBKey_String
    {
        static constexpr std::string_view Name = "ValueOrBBKey_String";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ValueOrBlackboardKeyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x10, "StrProperty"},
        }};
    };

    struct ValueOrBBKey_Struct
    {
        static constexpr std::string_view Name = "ValueOrBBKey_Struct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ValueOrBlackboardKeyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x10, "StructProperty"},
        }};
    };

    struct ValueOrBBKey_Vector
    {
        static constexpr std::string_view Name = "ValueOrBBKey_Vector";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ValueOrBlackboardKeyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultValue = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultValue", 0x10, "StructProperty"},
        }};
    };

    struct ValueOrBlackboardKeyBase
    {
        static constexpr std::string_view Name = "ValueOrBlackboardKeyBase";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Key", 0x8, "NameProperty"},
        }};
    };

    struct VisualLoggerExtension
    {
        static constexpr std::string_view Name = "VisualLoggerExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
