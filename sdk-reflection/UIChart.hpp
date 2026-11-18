#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::UIChart
{
    struct CommonUIContextUpdaterUIStateComponent
    {
        static constexpr std::string_view Name = "CommonUIContextUpdaterUIStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Status = 0x28;
            static constexpr std::uintptr_t ComponentConfiguration = 0x30;
            static constexpr std::uintptr_t OwningState = 0x38;
            static constexpr std::uintptr_t StateChartRegion = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Status", 0x28, "EnumProperty"},
            {"ComponentConfiguration", 0x30, "ObjectProperty"},
            {"OwningState", 0x38, "ObjectProperty"},
            {"StateChartRegion", 0x40, "ObjectProperty"},
        }};
    };

    struct CommonUIContextUpdaterUIStateComponentConfiguration
    {
        static constexpr std::string_view Name = "CommonUIContextUpdaterUIStateComponentConfiguration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIStateComponentConfiguration";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ContextSetterUIStateComponent
    {
        static constexpr std::string_view Name = "ContextSetterUIStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Configuration = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Configuration", 0x48, "ObjectProperty"},
        }};
    };

    struct ContextSetterUIStateComponentConfiguration
    {
        static constexpr std::string_view Name = "ContextSetterUIStateComponentConfiguration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIStateComponentConfiguration";
        struct Offsets
        {
            static constexpr std::uintptr_t ActivationChanges = 0x28;
            static constexpr std::uintptr_t DeactivationChanges = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActivationChanges", 0x28, "StructProperty"},
            {"DeactivationChanges", 0x48, "StructProperty"},
        }};
    };

    struct GlobalViewModelUIStateComponent
    {
        static constexpr std::string_view Name = "GlobalViewModelUIStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Configuration = 0x48;
            static constexpr std::uintptr_t ConditionContextKeys = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Configuration", 0x48, "ObjectProperty"},
            {"ConditionContextKeys", 0x50, "SetProperty"},
        }};
    };

    struct GlobalViewModelUIStateComponentConfiguration
    {
        static constexpr std::string_view Name = "GlobalViewModelUIStateComponentConfiguration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIStateComponentConfiguration";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewModelContexts = 0x28;
            static constexpr std::uintptr_t ContextConditions = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ViewModelContexts", 0x28, "ArrayProperty"},
            {"ContextConditions", 0x38, "ArrayProperty"},
        }};
    };

    struct InputConfigUIStateComponent
    {
        static constexpr std::string_view Name = "InputConfigUIStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StackingUIStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Configuration = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Configuration", 0x50, "ObjectProperty"},
        }};
    };

    struct InputConfigUIStateComponentConfiguration
    {
        static constexpr std::string_view Name = "InputConfigUIStateComponentConfiguration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIStateComponentConfiguration";
        struct Offsets
        {
            static constexpr std::uintptr_t InputMode = 0x28;
            static constexpr std::uintptr_t MouseCaptureMode = 0x29;
            static constexpr std::uintptr_t bHideCursorDuringCapture = 0x2A;
            static constexpr std::uintptr_t bIgnoreLookInput = 0x2B;
            static constexpr std::uintptr_t bIgnoreMovementInput = 0x2C;
            static constexpr std::uintptr_t bFlushPlayerInputWhenActivating = 0x2D;
            static constexpr std::uintptr_t bFlushPlayerInputWhenDeactivating = 0x2E;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"InputMode", 0x28, "EnumProperty"},
            {"MouseCaptureMode", 0x29, "EnumProperty"},
            {"bHideCursorDuringCapture", 0x2A, "BoolProperty"},
            {"bIgnoreLookInput", 0x2B, "BoolProperty"},
            {"bIgnoreMovementInput", 0x2C, "BoolProperty"},
            {"bFlushPlayerInputWhenActivating", 0x2D, "BoolProperty"},
            {"bFlushPlayerInputWhenDeactivating", 0x2E, "BoolProperty"},
        }};
    };

    struct SceneUIStateComponent
    {
        static constexpr std::string_view Name = "SceneUIStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Configuration = 0x48;
            static constexpr std::uintptr_t ConditionContextKeys = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Configuration", 0x48, "ObjectProperty"},
            {"ConditionContextKeys", 0x50, "SetProperty"},
        }};
    };

    struct SceneUIStateComponentConfiguration
    {
        static constexpr std::string_view Name = "SceneUIStateComponentConfiguration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIStateComponentConfiguration";
        struct Offsets
        {
            static constexpr std::uintptr_t Scene = 0x28;
            static constexpr std::uintptr_t ContextConditions = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Scene", 0x28, "ObjectProperty"},
            {"ContextConditions", 0x30, "ArrayProperty"},
        }};
    };

    struct SplitScreenUIStateComponentBase
    {
        static constexpr std::string_view Name = "SplitScreenUIStateComponentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseConfiguration = 0x48;
            static constexpr std::uintptr_t ChildStateCharts = 0x50;
            static constexpr std::uintptr_t DeactivatingStateCharts = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BaseConfiguration", 0x48, "ObjectProperty"},
            {"ChildStateCharts", 0x50, "MapProperty"},
            {"DeactivatingStateCharts", 0x60, "ArrayProperty"},
        }};
    };

    struct SplitScreenUIStateComponentBaseConfiguration
    {
        static constexpr std::string_view Name = "SplitScreenUIStateComponentBaseConfiguration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIStateComponentConfiguration";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerStateChart = 0x28;
            static constexpr std::uintptr_t bIgnoreTransitionParametersOnActivation = 0x30;
            static constexpr std::uintptr_t UrgencyOnPlayerAdd = 0x31;
            static constexpr std::uintptr_t AnimationHintsOnPlayerAdd = 0x38;
            static constexpr std::uintptr_t bIgnoreTransitionParametersOnDeactivation = 0x58;
            static constexpr std::uintptr_t UrgencyOnPlayerRemove = 0x59;
            static constexpr std::uintptr_t AnimationHintsOnPlayerRemove = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PlayerStateChart", 0x28, "ObjectProperty"},
            {"bIgnoreTransitionParametersOnActivation", 0x30, "BoolProperty"},
            {"UrgencyOnPlayerAdd", 0x31, "EnumProperty"},
            {"AnimationHintsOnPlayerAdd", 0x38, "StructProperty"},
            {"bIgnoreTransitionParametersOnDeactivation", 0x58, "BoolProperty"},
            {"UrgencyOnPlayerRemove", 0x59, "EnumProperty"},
            {"AnimationHintsOnPlayerRemove", 0x60, "StructProperty"},
        }};
    };

    struct StackingUIStateComponent
    {
        static constexpr std::string_view Name = "StackingUIStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UIStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t StackScope = 0x48;
            static constexpr std::uintptr_t bAlwaysRemoveStackingBehavior = 0x4C;
            static constexpr std::uintptr_t bIsOnStack = 0x4D;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StackScope", 0x48, "EnumProperty"},
            {"bAlwaysRemoveStackingBehavior", 0x4C, "BoolProperty"},
            {"bIsOnStack", 0x4D, "BoolProperty"},
        }};
    };

    struct StackingUIStateComponentSharedData
    {
        static constexpr std::string_view Name = "StackingUIStateComponentSharedData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceStacks = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstanceStacks", 0x28, "MapProperty"},
        }};
    };

    struct UIState
    {
        static constexpr std::string_view Name = "UIState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Children = 0x28;
            static constexpr std::uintptr_t ParallelRegions = 0x38;
            static constexpr std::uintptr_t Components = 0x48;
            static constexpr std::uintptr_t Configuration = 0x58;
            static constexpr std::uintptr_t OutgoingTransitions = 0x60;
            static constexpr std::uintptr_t SecondsUntilTimeout = 0x70;
            static constexpr std::uintptr_t Parent = 0x78;
            static constexpr std::uintptr_t StateChartRegion = 0x80;
            static constexpr std::uintptr_t Status = 0x88;
            static constexpr std::uintptr_t ContinualAutomationContextKeys = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"Children", 0x28, "ArrayProperty"},
            {"ParallelRegions", 0x38, "ArrayProperty"},
            {"Components", 0x48, "ArrayProperty"},
            {"Configuration", 0x58, "ObjectProperty"},
            {"OutgoingTransitions", 0x60, "ArrayProperty"},
            {"SecondsUntilTimeout", 0x70, "FloatProperty"},
            {"Parent", 0x78, "ObjectProperty"},
            {"StateChartRegion", 0x80, "ObjectProperty"},
            {"Status", 0x88, "EnumProperty"},
            {"ContinualAutomationContextKeys", 0x90, "SetProperty"},
        }};
    };

    struct UIStateBacktrackStep
    {
        static constexpr std::string_view Name = "UIStateBacktrackStep";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TransitionTag = 0x28;
            static constexpr std::uintptr_t ReturnState = 0x30;
            static constexpr std::uintptr_t AvailableState = 0x38;
            static constexpr std::uintptr_t ReverseContextChanges = 0x40;
            static constexpr std::uintptr_t AvailablePaths = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TransitionTag", 0x28, "StructProperty"},
            {"ReturnState", 0x30, "ObjectProperty"},
            {"AvailableState", 0x38, "ObjectProperty"},
            {"ReverseContextChanges", 0x40, "StructProperty"},
            {"AvailablePaths", 0x50, "ArrayProperty"},
        }};
    };

    struct UIStateChart
    {
        static constexpr std::string_view Name = "UIStateChart";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t RootState = 0x28;
            static constexpr std::uintptr_t Transitions = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RootState", 0x28, "ObjectProperty"},
            {"Transitions", 0x30, "ArrayProperty"},
        }};
    };

    struct UIStateChartContext
    {
        static constexpr std::string_view Name = "UIStateChartContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AnyEntryChangedDynamic = 0x28;
            static constexpr std::uintptr_t Store = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AnyEntryChangedDynamic", 0x28, "MulticastInlineDelegateProperty"},
            {"Store", 0x38, "MapProperty"},
        }};
    };

    struct UIStateChartContextEntry
    {
        static constexpr std::string_view Name = "UIStateChartContextEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CommonValue = 0x28;
            static constexpr std::uintptr_t PlayerOverrides = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CommonValue", 0x28, "StrProperty"},
            {"PlayerOverrides", 0x38, "MapProperty"},
        }};
    };

    struct UIStateChartManager
    {
        static constexpr std::string_view Name = "UIStateChartManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerEntries = 0x38;
            static constexpr std::uintptr_t RemovedPlayerEntries = 0x48;
            static constexpr std::uintptr_t Context = 0x58;
            static constexpr std::uintptr_t GlobalResources = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PlayerEntries", 0x38, "MapProperty"},
            {"RemovedPlayerEntries", 0x48, "ArrayProperty"},
            {"Context", 0x58, "ObjectProperty"},
            {"GlobalResources", 0x60, "ObjectProperty"},
        }};
    };

    struct UIStateChartManagerEntry
    {
        static constexpr std::string_view Name = "UIStateChartManagerEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MainRegion = 0x28;
            static constexpr std::uintptr_t ManagerPlayer = 0x30;
            static constexpr std::uintptr_t StateChartResources = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MainRegion", 0x28, "ObjectProperty"},
            {"ManagerPlayer", 0x30, "ObjectProperty"},
            {"StateChartResources", 0x38, "ObjectProperty"},
        }};
    };

    struct UIStateChartManagerPlayer
    {
        static constexpr std::string_view Name = "UIStateChartManagerPlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveChartEntries = 0x28;
            static constexpr std::uintptr_t InactiveChartEntries = 0x38;
            static constexpr std::uintptr_t DeactivationRequests = 0x48;
            static constexpr std::uintptr_t Manager = 0x68;
            static constexpr std::uintptr_t PlayerResources = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ActiveChartEntries", 0x28, "MapProperty"},
            {"InactiveChartEntries", 0x38, "MapProperty"},
            {"DeactivationRequests", 0x48, "ArrayProperty"},
            {"Manager", 0x68, "ObjectProperty"},
            {"PlayerResources", 0x70, "ObjectProperty"},
        }};
    };

    struct UIStateChartRegion
    {
        static constexpr std::string_view Name = "UIStateChartRegion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ManagerEntry = 0x28;
            static constexpr std::uintptr_t RootState = 0x30;
            static constexpr std::uintptr_t ParentState = 0x38;
            static constexpr std::uintptr_t ParallelRegions = 0x40;
            static constexpr std::uintptr_t TaggedStates = 0x50;
            static constexpr std::uintptr_t ActiveLeafState = 0x60;
            static constexpr std::uintptr_t ActiveTransitionOperation = 0x68;
            static constexpr std::uintptr_t QueuedTransitionOperation = 0x70;
            static constexpr std::uintptr_t AvailableBacktrackPaths = 0x78;
            static constexpr std::uintptr_t ActiveTransitionBacktrackStep = 0x88;
            static constexpr std::uintptr_t ChartName = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ManagerEntry", 0x28, "ObjectProperty"},
            {"RootState", 0x30, "ObjectProperty"},
            {"ParentState", 0x38, "ObjectProperty"},
            {"ParallelRegions", 0x40, "ArrayProperty"},
            {"TaggedStates", 0x50, "MapProperty"},
            {"ActiveLeafState", 0x60, "ObjectProperty"},
            {"ActiveTransitionOperation", 0x68, "ObjectProperty"},
            {"QueuedTransitionOperation", 0x70, "ObjectProperty"},
            {"AvailableBacktrackPaths", 0x78, "ArrayProperty"},
            {"ActiveTransitionBacktrackStep", 0x88, "ObjectProperty"},
            {"ChartName", 0x90, "StrProperty"},
        }};
    };

    struct UIStateChartResourceCollection
    {
        static constexpr std::string_view Name = "UIStateChartResourceCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ResourcesByClass = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ResourcesByClass", 0x28, "MapProperty"},
        }};
    };

    struct UIStateChartTransition
    {
        static constexpr std::string_view Name = "UIStateChartTransition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Source = 0x28;
            static constexpr std::uintptr_t Target = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Source", 0x28, "ObjectProperty"},
            {"Target", 0x30, "ObjectProperty"},
        }};
    };

    struct UIStateChartTransitionOperation
    {
        static constexpr std::string_view Name = "UIStateChartTransitionOperation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Region = 0x30;
            static constexpr std::uintptr_t OriginState = 0x38;
            static constexpr std::uintptr_t EndState = 0x40;
            static constexpr std::uintptr_t TransitionTargetState = 0x48;
            static constexpr std::uintptr_t KnownStatesToActivate = 0x58;
            static constexpr std::uintptr_t StatesToDeactivate = 0x68;
            static constexpr std::uintptr_t Group = 0x78;
            static constexpr std::uintptr_t StateRelay = 0x80;
            static constexpr std::uintptr_t BacktrackReturnState = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Region", 0x30, "ObjectProperty"},
            {"OriginState", 0x38, "ObjectProperty"},
            {"EndState", 0x40, "ObjectProperty"},
            {"TransitionTargetState", 0x48, "ObjectProperty"},
            {"KnownStatesToActivate", 0x58, "ArrayProperty"},
            {"StatesToDeactivate", 0x68, "ArrayProperty"},
            {"Group", 0x78, "ObjectProperty"},
            {"StateRelay", 0x80, "StructProperty"},
            {"BacktrackReturnState", 0xB0, "ObjectProperty"},
        }};
    };

    struct UIStateChartTransitionOperationGroup
    {
        static constexpr std::string_view Name = "UIStateChartTransitionOperationGroup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Operations = 0x28;
            static constexpr std::uintptr_t OperationsReadyForContextUpdate = 0x38;
            static constexpr std::uintptr_t Context = 0x48;
            static constexpr std::uintptr_t LocalPlayer = 0x50;
            static constexpr std::uintptr_t ContextChanges = 0x58;
            static constexpr std::uintptr_t ReverseContextChanges = 0x68;
            static constexpr std::uintptr_t Parameters = 0x78;
            static constexpr std::uintptr_t TransitionEventTag = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Operations", 0x28, "SetProperty"},
            {"OperationsReadyForContextUpdate", 0x38, "SetProperty"},
            {"Context", 0x48, "ObjectProperty"},
            {"LocalPlayer", 0x50, "ObjectProperty"},
            {"ContextChanges", 0x58, "StructProperty"},
            {"ReverseContextChanges", 0x68, "StructProperty"},
            {"Parameters", 0x78, "StructProperty"},
            {"TransitionEventTag", 0xA0, "StructProperty"},
        }};
    };

    struct UIStateComponent
    {
        static constexpr std::string_view Name = "UIStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Status = 0x28;
            static constexpr std::uintptr_t ComponentConfiguration = 0x30;
            static constexpr std::uintptr_t OwningState = 0x38;
            static constexpr std::uintptr_t StateChartRegion = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Status", 0x28, "EnumProperty"},
            {"ComponentConfiguration", 0x30, "ObjectProperty"},
            {"OwningState", 0x38, "ObjectProperty"},
            {"StateChartRegion", 0x40, "ObjectProperty"},
        }};
    };

    struct UIStateComponentConfiguration
    {
        static constexpr std::string_view Name = "UIStateComponentConfiguration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UIStateConfiguration
    {
        static constexpr std::string_view Name = "UIStateConfiguration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x28;
            static constexpr std::uintptr_t StateTags = 0x38;
            static constexpr std::uintptr_t ID = 0x58;
            static constexpr std::uintptr_t Children = 0x60;
            static constexpr std::uintptr_t ParallelRegions = 0x70;
            static constexpr std::uintptr_t Components = 0x80;
            static constexpr std::uintptr_t MinimumUnloadTime = 0x90;
            static constexpr std::uintptr_t AutomationType = 0x94;
            static constexpr std::uintptr_t AutomationRules = 0x98;
            static constexpr std::uintptr_t bSupportsBacktracking = 0xA8;
            static constexpr std::uintptr_t bOverrideIncomingBacktracks = 0xA9;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Name", 0x28, "StrProperty"},
            {"StateTags", 0x38, "StructProperty"},
            {"ID", 0x58, "IntProperty"},
            {"Children", 0x60, "ArrayProperty"},
            {"ParallelRegions", 0x70, "ArrayProperty"},
            {"Components", 0x80, "ArrayProperty"},
            {"MinimumUnloadTime", 0x90, "FloatProperty"},
            {"AutomationType", 0x94, "EnumProperty"},
            {"AutomationRules", 0x98, "ArrayProperty"},
            {"bSupportsBacktracking", 0xA8, "BoolProperty"},
            {"bOverrideIncomingBacktracks", 0xA9, "BoolProperty"},
        }};
    };

    struct UIStateSettings
    {
        static constexpr std::string_view Name = "UIStateSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t StateLoadTimeout = 0x30;
            static constexpr std::uintptr_t StateUnloadTimeout = 0x34;
            static constexpr std::uintptr_t WidgetStateComponentLoadTimeout = 0x38;
            static constexpr std::uintptr_t WidgetStateComponentUnloadTimeout = 0x3C;
            static constexpr std::uintptr_t WidgetStateComponentDefaultUnloadBehavior = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"StateLoadTimeout", 0x30, "FloatProperty"},
            {"StateUnloadTimeout", 0x34, "FloatProperty"},
            {"WidgetStateComponentLoadTimeout", 0x38, "FloatProperty"},
            {"WidgetStateComponentUnloadTimeout", 0x3C, "FloatProperty"},
            {"WidgetStateComponentDefaultUnloadBehavior", 0x40, "EnumProperty"},
        }};
    };

}
