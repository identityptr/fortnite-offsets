/**
 * decamp dumper generated SDK
 * Package: /Script/UIChart
 */
#pragma once
#include "Basic.h"

// /Script/UIChart.ContextSetterChanges
// Kind: ScriptStruct; super: none
struct FContextSetterChanges
{
public:
    TArray<void*> ValuesToSet; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ValuesToClear; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FContextSetterChanges, ValuesToSet) == 0, "Offset mismatch for FContextSetterChanges::ValuesToSet");
static_assert(offsetof(FContextSetterChanges, ValuesToClear) == 16, "Offset mismatch for FContextSetterChanges::ValuesToClear");

// /Script/UIChart.ContextSetterClearEntry
// Kind: ScriptStruct; super: none
struct FContextSetterClearEntry
{
public:
    std::uint8_t Key[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FContextSetterClearEntry, Key) == 0, "Offset mismatch for FContextSetterClearEntry::Key");

// /Script/UIChart.ContextSetterSetEntry
// Kind: ScriptStruct; super: none
struct FContextSetterSetEntry
{
public:
    std::uint8_t Key[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    FString Value; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FContextSetterSetEntry, Key) == 0, "Offset mismatch for FContextSetterSetEntry::Key");
static_assert(offsetof(FContextSetterSetEntry, Value) == 8, "Offset mismatch for FContextSetterSetEntry::Value");

// /Script/UIChart.UIStateAutomationRule
// Kind: ScriptStruct; super: none
struct FUIStateAutomationRule
{
public:
    TArray<void*> ContextConditions; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ChildStateReference[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUIStateAutomationRule, ContextConditions) == 0, "Offset mismatch for FUIStateAutomationRule::ContextConditions");
static_assert(offsetof(FUIStateAutomationRule, ChildStateReference) == 16, "Offset mismatch for FUIStateAutomationRule::ChildStateReference");

// /Script/UIChart.UIStateChartContextChangeSet
// Kind: ScriptStruct; super: none
struct FUIStateChartContextChangeSet
{
public:
    TMap<void*, void*> Changes; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FUIStateChartContextChangeSet, Changes) == 0, "Offset mismatch for FUIStateChartContextChangeSet::Changes");

// /Script/UIChart.UIStateChartContextCondition
// Kind: ScriptStruct; super: none
struct FUIStateChartContextCondition
{
public:
    std::uint8_t Key[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t ConditionType; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    FString ComparisonConstant; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FUIStateChartContextCondition, Key) == 0, "Offset mismatch for FUIStateChartContextCondition::Key");
static_assert(offsetof(FUIStateChartContextCondition, ConditionType) == 4, "Offset mismatch for FUIStateChartContextCondition::ConditionType");
static_assert(offsetof(FUIStateChartContextCondition, ComparisonConstant) == 8, "Offset mismatch for FUIStateChartContextCondition::ComparisonConstant");

// /Script/UIChart.UIStateChartContextEntryOverride
// Kind: ScriptStruct; super: none
struct FUIStateChartContextEntryOverride
{
public:
    FString OverrideValue; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FUIStateChartContextEntryOverride, OverrideValue) == 0, "Offset mismatch for FUIStateChartContextEntryOverride::OverrideValue");

// /Script/UIChart.UIStateChartManagerChartDeactivationRequest
// Kind: ScriptStruct; super: none
struct FUIStateChartManagerChartDeactivationRequest
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UIChart.UIStateChartTransitionOperationParameters
// Kind: ScriptStruct; super: none
struct FUIStateChartTransitionOperationParameters
{
public:
    std::uint8_t AnimationHints[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Urgency; // 0x0020 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FUIStateChartTransitionOperationParameters, AnimationHints) == 0, "Offset mismatch for FUIStateChartTransitionOperationParameters::AnimationHints");
static_assert(offsetof(FUIStateChartTransitionOperationParameters, Urgency) == 32, "Offset mismatch for FUIStateChartTransitionOperationParameters::Urgency");

// /Script/UIChart.UIStateComponentInstanceStack
// Kind: ScriptStruct; super: none
struct FUIStateComponentInstanceStack
{
public:
    TArray<void*> InstanceStack; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUIStateComponentInstanceStack, InstanceStack) == 0, "Offset mismatch for FUIStateComponentInstanceStack::InstanceStack");

// /Script/UIChart.UIStateConfigurationChildReference
// Kind: ScriptStruct; super: none
struct FUIStateConfigurationChildReference
{
public:
    std::int32_t ChildStateId; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FUIStateConfigurationChildReference, ChildStateId) == 0, "Offset mismatch for FUIStateConfigurationChildReference::ChildStateId");

// /Script/UIChart.UIStateRelay
// Kind: ScriptStruct; super: none
struct FUIStateRelay
{
public:
    TArray<void*> AvailableBatons; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ClaimedBatons; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUIStateRelay, AvailableBatons) == 0, "Offset mismatch for FUIStateRelay::AvailableBatons");
static_assert(offsetof(FUIStateRelay, ClaimedBatons) == 16, "Offset mismatch for FUIStateRelay::ClaimedBatons");

// /Script/UIChart.UIStateRelayBaton
// Kind: ScriptStruct; super: none
struct FUIStateRelayBaton
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* OfferingComponent; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* OfferingComponentType; // 0x0018 (Size: 0x8, Type: ClassProperty)
    void* OfferingComponentConfiguration; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUIStateRelayBaton, OfferingComponent) == 16, "Offset mismatch for FUIStateRelayBaton::OfferingComponent");
static_assert(offsetof(FUIStateRelayBaton, OfferingComponentType) == 24, "Offset mismatch for FUIStateRelayBaton::OfferingComponentType");
static_assert(offsetof(FUIStateRelayBaton, OfferingComponentConfiguration) == 32, "Offset mismatch for FUIStateRelayBaton::OfferingComponentConfiguration");

// /Script/UIChart.UIStateTransitionData
// Kind: ScriptStruct; super: none
struct FUIStateTransitionData
{
public:
    std::uint8_t TriggerTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::int32_t SourceStateId; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t TargetStateId; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FUIStateTransitionData, TriggerTag) == 0, "Offset mismatch for FUIStateTransitionData::TriggerTag");
static_assert(offsetof(FUIStateTransitionData, SourceStateId) == 4, "Offset mismatch for FUIStateTransitionData::SourceStateId");
static_assert(offsetof(FUIStateTransitionData, TargetStateId) == 8, "Offset mismatch for FUIStateTransitionData::TargetStateId");

// /Script/UIChart.CommonUIContextUpdaterUIStateComponent
// Kind: Class; super: UIStateComponent
class UCommonUIContextUpdaterUIStateComponent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Status; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    void* ComponentConfiguration; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* OwningState; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* StateChartRegion; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCommonUIContextUpdaterUIStateComponent, Status) == 40, "Offset mismatch for UCommonUIContextUpdaterUIStateComponent::Status");
static_assert(offsetof(UCommonUIContextUpdaterUIStateComponent, ComponentConfiguration) == 48, "Offset mismatch for UCommonUIContextUpdaterUIStateComponent::ComponentConfiguration");
static_assert(offsetof(UCommonUIContextUpdaterUIStateComponent, OwningState) == 56, "Offset mismatch for UCommonUIContextUpdaterUIStateComponent::OwningState");
static_assert(offsetof(UCommonUIContextUpdaterUIStateComponent, StateChartRegion) == 64, "Offset mismatch for UCommonUIContextUpdaterUIStateComponent::StateChartRegion");

// /Script/UIChart.CommonUIContextUpdaterUIStateComponentConfiguration
// Kind: Class; super: UIStateComponentConfiguration
class UCommonUIContextUpdaterUIStateComponentConfiguration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UIChart.ContextSetterUIStateComponent
// Kind: Class; super: UIStateComponent
class UContextSetterUIStateComponent
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Configuration; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UContextSetterUIStateComponent, Configuration) == 72, "Offset mismatch for UContextSetterUIStateComponent::Configuration");

// /Script/UIChart.ContextSetterUIStateComponentConfiguration
// Kind: Class; super: UIStateComponentConfiguration
class UContextSetterUIStateComponentConfiguration
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ActivationChanges[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t DeactivationChanges[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UContextSetterUIStateComponentConfiguration, ActivationChanges) == 40, "Offset mismatch for UContextSetterUIStateComponentConfiguration::ActivationChanges");
static_assert(offsetof(UContextSetterUIStateComponentConfiguration, DeactivationChanges) == 72, "Offset mismatch for UContextSetterUIStateComponentConfiguration::DeactivationChanges");

// /Script/UIChart.GlobalViewModelUIStateComponent
// Kind: Class; super: UIStateComponent
class UGlobalViewModelUIStateComponent
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Configuration; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    TSet<void*> ConditionContextKeys; // 0x0050 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UGlobalViewModelUIStateComponent, Configuration) == 72, "Offset mismatch for UGlobalViewModelUIStateComponent::Configuration");
static_assert(offsetof(UGlobalViewModelUIStateComponent, ConditionContextKeys) == 80, "Offset mismatch for UGlobalViewModelUIStateComponent::ConditionContextKeys");

// /Script/UIChart.GlobalViewModelUIStateComponentConfiguration
// Kind: Class; super: UIStateComponentConfiguration
class UGlobalViewModelUIStateComponentConfiguration
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ViewModelContexts; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ContextConditions; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGlobalViewModelUIStateComponentConfiguration, ViewModelContexts) == 40, "Offset mismatch for UGlobalViewModelUIStateComponentConfiguration::ViewModelContexts");
static_assert(offsetof(UGlobalViewModelUIStateComponentConfiguration, ContextConditions) == 56, "Offset mismatch for UGlobalViewModelUIStateComponentConfiguration::ContextConditions");

// /Script/UIChart.InputConfigUIStateComponent
// Kind: Class; super: StackingUIStateComponent
class UInputConfigUIStateComponent
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* Configuration; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInputConfigUIStateComponent, Configuration) == 80, "Offset mismatch for UInputConfigUIStateComponent::Configuration");

// /Script/UIChart.InputConfigUIStateComponentConfiguration
// Kind: Class; super: UIStateComponentConfiguration
class UInputConfigUIStateComponentConfiguration
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t InputMode; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MouseCaptureMode; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHideCursorDuringCapture; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreLookInput; // 0x002B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreMovementInput; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlushPlayerInputWhenActivating; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlushPlayerInputWhenDeactivating; // 0x002E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInputConfigUIStateComponentConfiguration, InputMode) == 40, "Offset mismatch for UInputConfigUIStateComponentConfiguration::InputMode");
static_assert(offsetof(UInputConfigUIStateComponentConfiguration, MouseCaptureMode) == 41, "Offset mismatch for UInputConfigUIStateComponentConfiguration::MouseCaptureMode");
static_assert(offsetof(UInputConfigUIStateComponentConfiguration, bHideCursorDuringCapture) == 42, "Offset mismatch for UInputConfigUIStateComponentConfiguration::bHideCursorDuringCapture");
static_assert(offsetof(UInputConfigUIStateComponentConfiguration, bIgnoreLookInput) == 43, "Offset mismatch for UInputConfigUIStateComponentConfiguration::bIgnoreLookInput");
static_assert(offsetof(UInputConfigUIStateComponentConfiguration, bIgnoreMovementInput) == 44, "Offset mismatch for UInputConfigUIStateComponentConfiguration::bIgnoreMovementInput");
static_assert(offsetof(UInputConfigUIStateComponentConfiguration, bFlushPlayerInputWhenActivating) == 45, "Offset mismatch for UInputConfigUIStateComponentConfiguration::bFlushPlayerInputWhenActivating");
static_assert(offsetof(UInputConfigUIStateComponentConfiguration, bFlushPlayerInputWhenDeactivating) == 46, "Offset mismatch for UInputConfigUIStateComponentConfiguration::bFlushPlayerInputWhenDeactivating");

// /Script/UIChart.SceneUIStateComponent
// Kind: Class; super: UIStateComponent
class USceneUIStateComponent
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Configuration; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    TSet<void*> ConditionContextKeys; // 0x0050 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(USceneUIStateComponent, Configuration) == 72, "Offset mismatch for USceneUIStateComponent::Configuration");
static_assert(offsetof(USceneUIStateComponent, ConditionContextKeys) == 80, "Offset mismatch for USceneUIStateComponent::ConditionContextKeys");

// /Script/UIChart.SceneUIStateComponentConfiguration
// Kind: Class; super: UIStateComponentConfiguration
class USceneUIStateComponentConfiguration
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Scene; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ContextConditions; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USceneUIStateComponentConfiguration, Scene) == 40, "Offset mismatch for USceneUIStateComponentConfiguration::Scene");
static_assert(offsetof(USceneUIStateComponentConfiguration, ContextConditions) == 48, "Offset mismatch for USceneUIStateComponentConfiguration::ContextConditions");

// /Script/UIChart.SplitScreenUIStateComponentBase
// Kind: Class; super: UIStateComponent
class USplitScreenUIStateComponentBase
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* BaseConfiguration; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> ChildStateCharts; // 0x0050 (Size: 0x10, Type: MapProperty)
    TArray<void*> DeactivatingStateCharts; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USplitScreenUIStateComponentBase, BaseConfiguration) == 72, "Offset mismatch for USplitScreenUIStateComponentBase::BaseConfiguration");
static_assert(offsetof(USplitScreenUIStateComponentBase, ChildStateCharts) == 80, "Offset mismatch for USplitScreenUIStateComponentBase::ChildStateCharts");
static_assert(offsetof(USplitScreenUIStateComponentBase, DeactivatingStateCharts) == 96, "Offset mismatch for USplitScreenUIStateComponentBase::DeactivatingStateCharts");

// /Script/UIChart.SplitScreenUIStateComponentBaseConfiguration
// Kind: Class; super: UIStateComponentConfiguration
class USplitScreenUIStateComponentBaseConfiguration
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* PlayerStateChart; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIgnoreTransitionParametersOnActivation; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t UrgencyOnPlayerAdd; // 0x0031 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0032
    std::uint8_t AnimationHintsOnPlayerAdd[0x20]; // 0x0038 (Size: 0x20, Type: StructProperty)
    std::uint8_t bIgnoreTransitionParametersOnDeactivation; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t UrgencyOnPlayerRemove; // 0x0059 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x6]; // 0x005A
    std::uint8_t AnimationHintsOnPlayerRemove[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USplitScreenUIStateComponentBaseConfiguration, PlayerStateChart) == 40, "Offset mismatch for USplitScreenUIStateComponentBaseConfiguration::PlayerStateChart");
static_assert(offsetof(USplitScreenUIStateComponentBaseConfiguration, bIgnoreTransitionParametersOnActivation) == 48, "Offset mismatch for USplitScreenUIStateComponentBaseConfiguration::bIgnoreTransitionParametersOnActivation");
static_assert(offsetof(USplitScreenUIStateComponentBaseConfiguration, UrgencyOnPlayerAdd) == 49, "Offset mismatch for USplitScreenUIStateComponentBaseConfiguration::UrgencyOnPlayerAdd");
static_assert(offsetof(USplitScreenUIStateComponentBaseConfiguration, AnimationHintsOnPlayerAdd) == 56, "Offset mismatch for USplitScreenUIStateComponentBaseConfiguration::AnimationHintsOnPlayerAdd");
static_assert(offsetof(USplitScreenUIStateComponentBaseConfiguration, bIgnoreTransitionParametersOnDeactivation) == 88, "Offset mismatch for USplitScreenUIStateComponentBaseConfiguration::bIgnoreTransitionParametersOnDeactivation");
static_assert(offsetof(USplitScreenUIStateComponentBaseConfiguration, UrgencyOnPlayerRemove) == 89, "Offset mismatch for USplitScreenUIStateComponentBaseConfiguration::UrgencyOnPlayerRemove");
static_assert(offsetof(USplitScreenUIStateComponentBaseConfiguration, AnimationHintsOnPlayerRemove) == 96, "Offset mismatch for USplitScreenUIStateComponentBaseConfiguration::AnimationHintsOnPlayerRemove");

// /Script/UIChart.StackingUIStateComponent
// Kind: Class; super: UIStateComponent
class UStackingUIStateComponent
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t StackScope; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    std::uint8_t bAlwaysRemoveStackingBehavior; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOnStack; // 0x004D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UStackingUIStateComponent, StackScope) == 72, "Offset mismatch for UStackingUIStateComponent::StackScope");
static_assert(offsetof(UStackingUIStateComponent, bAlwaysRemoveStackingBehavior) == 76, "Offset mismatch for UStackingUIStateComponent::bAlwaysRemoveStackingBehavior");
static_assert(offsetof(UStackingUIStateComponent, bIsOnStack) == 77, "Offset mismatch for UStackingUIStateComponent::bIsOnStack");

// /Script/UIChart.StackingUIStateComponentSharedData
// Kind: Class; super: Object
class UStackingUIStateComponentSharedData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> InstanceStacks; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UStackingUIStateComponentSharedData, InstanceStacks) == 40, "Offset mismatch for UStackingUIStateComponentSharedData::InstanceStacks");

// /Script/UIChart.UIState
// Kind: Class; super: Object
class UUIState
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Children; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ParallelRegions; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Components; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* Configuration; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> OutgoingTransitions; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    float SecondsUntilTimeout; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0074
    void* Parent; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* StateChartRegion; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Status; // 0x0088 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0089
    TSet<void*> ContinualAutomationContextKeys; // 0x0090 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UUIState, Children) == 40, "Offset mismatch for UUIState::Children");
static_assert(offsetof(UUIState, ParallelRegions) == 56, "Offset mismatch for UUIState::ParallelRegions");
static_assert(offsetof(UUIState, Components) == 72, "Offset mismatch for UUIState::Components");
static_assert(offsetof(UUIState, Configuration) == 88, "Offset mismatch for UUIState::Configuration");
static_assert(offsetof(UUIState, OutgoingTransitions) == 96, "Offset mismatch for UUIState::OutgoingTransitions");
static_assert(offsetof(UUIState, SecondsUntilTimeout) == 112, "Offset mismatch for UUIState::SecondsUntilTimeout");
static_assert(offsetof(UUIState, Parent) == 120, "Offset mismatch for UUIState::Parent");
static_assert(offsetof(UUIState, StateChartRegion) == 128, "Offset mismatch for UUIState::StateChartRegion");
static_assert(offsetof(UUIState, Status) == 136, "Offset mismatch for UUIState::Status");
static_assert(offsetof(UUIState, ContinualAutomationContextKeys) == 144, "Offset mismatch for UUIState::ContinualAutomationContextKeys");

// /Script/UIChart.UIStateBacktrackStep
// Kind: Class; super: Object
class UUIStateBacktrackStep
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TransitionTag[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    void* ReturnState; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* AvailableState; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ReverseContextChanges[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    TArray<void*> AvailablePaths; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UUIStateBacktrackStep, TransitionTag) == 40, "Offset mismatch for UUIStateBacktrackStep::TransitionTag");
static_assert(offsetof(UUIStateBacktrackStep, ReturnState) == 48, "Offset mismatch for UUIStateBacktrackStep::ReturnState");
static_assert(offsetof(UUIStateBacktrackStep, AvailableState) == 56, "Offset mismatch for UUIStateBacktrackStep::AvailableState");
static_assert(offsetof(UUIStateBacktrackStep, ReverseContextChanges) == 64, "Offset mismatch for UUIStateBacktrackStep::ReverseContextChanges");
static_assert(offsetof(UUIStateBacktrackStep, AvailablePaths) == 80, "Offset mismatch for UUIStateBacktrackStep::AvailablePaths");

// /Script/UIChart.UIStateChart
// Kind: Class; super: DataAsset
class UUIStateChart
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* RootState; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Transitions; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UUIStateChart, RootState) == 40, "Offset mismatch for UUIStateChart::RootState");
static_assert(offsetof(UUIStateChart, Transitions) == 48, "Offset mismatch for UUIStateChart::Transitions");

// /Script/UIChart.UIStateChartContext
// Kind: Class; super: Object
class UUIStateChartContext
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate AnyEntryChangedDynamic; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TMap<void*, void*> Store; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UUIStateChartContext, AnyEntryChangedDynamic) == 40, "Offset mismatch for UUIStateChartContext::AnyEntryChangedDynamic");
static_assert(offsetof(UUIStateChartContext, Store) == 56, "Offset mismatch for UUIStateChartContext::Store");

// /Script/UIChart.UIStateChartContextEntry
// Kind: Class; super: Object
class UUIStateChartContextEntry
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CommonValue; // 0x0028 (Size: 0x10, Type: StrProperty)
    TMap<void*, void*> PlayerOverrides; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UUIStateChartContextEntry, CommonValue) == 40, "Offset mismatch for UUIStateChartContextEntry::CommonValue");
static_assert(offsetof(UUIStateChartContextEntry, PlayerOverrides) == 56, "Offset mismatch for UUIStateChartContextEntry::PlayerOverrides");

// /Script/UIChart.UIStateChartManager
// Kind: Class; super: GameInstanceSubsystem
class UUIStateChartManager
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> PlayerEntries; // 0x0038 (Size: 0x10, Type: MapProperty)
    TArray<void*> RemovedPlayerEntries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* Context; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* GlobalResources; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUIStateChartManager, PlayerEntries) == 56, "Offset mismatch for UUIStateChartManager::PlayerEntries");
static_assert(offsetof(UUIStateChartManager, RemovedPlayerEntries) == 72, "Offset mismatch for UUIStateChartManager::RemovedPlayerEntries");
static_assert(offsetof(UUIStateChartManager, Context) == 88, "Offset mismatch for UUIStateChartManager::Context");
static_assert(offsetof(UUIStateChartManager, GlobalResources) == 96, "Offset mismatch for UUIStateChartManager::GlobalResources");

// /Script/UIChart.UIStateChartManagerEntry
// Kind: Class; super: Object
class UUIStateChartManagerEntry
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MainRegion; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* ManagerPlayer; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* StateChartResources; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUIStateChartManagerEntry, MainRegion) == 40, "Offset mismatch for UUIStateChartManagerEntry::MainRegion");
static_assert(offsetof(UUIStateChartManagerEntry, ManagerPlayer) == 48, "Offset mismatch for UUIStateChartManagerEntry::ManagerPlayer");
static_assert(offsetof(UUIStateChartManagerEntry, StateChartResources) == 56, "Offset mismatch for UUIStateChartManagerEntry::StateChartResources");

// /Script/UIChart.UIStateChartManagerPlayer
// Kind: Class; super: Object
class UUIStateChartManagerPlayer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> ActiveChartEntries; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> InactiveChartEntries; // 0x0038 (Size: 0x10, Type: MapProperty)
    TArray<void*> DeactivationRequests; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0058
    void* Manager; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* PlayerResources; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUIStateChartManagerPlayer, ActiveChartEntries) == 40, "Offset mismatch for UUIStateChartManagerPlayer::ActiveChartEntries");
static_assert(offsetof(UUIStateChartManagerPlayer, InactiveChartEntries) == 56, "Offset mismatch for UUIStateChartManagerPlayer::InactiveChartEntries");
static_assert(offsetof(UUIStateChartManagerPlayer, DeactivationRequests) == 72, "Offset mismatch for UUIStateChartManagerPlayer::DeactivationRequests");
static_assert(offsetof(UUIStateChartManagerPlayer, Manager) == 104, "Offset mismatch for UUIStateChartManagerPlayer::Manager");
static_assert(offsetof(UUIStateChartManagerPlayer, PlayerResources) == 112, "Offset mismatch for UUIStateChartManagerPlayer::PlayerResources");

// /Script/UIChart.UIStateChartRegion
// Kind: Class; super: Object
class UUIStateChartRegion
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ManagerEntry; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* RootState; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* ParentState; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ParallelRegions; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> TaggedStates; // 0x0050 (Size: 0x10, Type: MapProperty)
    void* ActiveLeafState; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* ActiveTransitionOperation; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* QueuedTransitionOperation; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AvailableBacktrackPaths; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    void* ActiveTransitionBacktrackStep; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    FString ChartName; // 0x0090 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UUIStateChartRegion, ManagerEntry) == 40, "Offset mismatch for UUIStateChartRegion::ManagerEntry");
static_assert(offsetof(UUIStateChartRegion, RootState) == 48, "Offset mismatch for UUIStateChartRegion::RootState");
static_assert(offsetof(UUIStateChartRegion, ParentState) == 56, "Offset mismatch for UUIStateChartRegion::ParentState");
static_assert(offsetof(UUIStateChartRegion, ParallelRegions) == 64, "Offset mismatch for UUIStateChartRegion::ParallelRegions");
static_assert(offsetof(UUIStateChartRegion, TaggedStates) == 80, "Offset mismatch for UUIStateChartRegion::TaggedStates");
static_assert(offsetof(UUIStateChartRegion, ActiveLeafState) == 96, "Offset mismatch for UUIStateChartRegion::ActiveLeafState");
static_assert(offsetof(UUIStateChartRegion, ActiveTransitionOperation) == 104, "Offset mismatch for UUIStateChartRegion::ActiveTransitionOperation");
static_assert(offsetof(UUIStateChartRegion, QueuedTransitionOperation) == 112, "Offset mismatch for UUIStateChartRegion::QueuedTransitionOperation");
static_assert(offsetof(UUIStateChartRegion, AvailableBacktrackPaths) == 120, "Offset mismatch for UUIStateChartRegion::AvailableBacktrackPaths");
static_assert(offsetof(UUIStateChartRegion, ActiveTransitionBacktrackStep) == 136, "Offset mismatch for UUIStateChartRegion::ActiveTransitionBacktrackStep");
static_assert(offsetof(UUIStateChartRegion, ChartName) == 144, "Offset mismatch for UUIStateChartRegion::ChartName");

// /Script/UIChart.UIStateChartResourceCollection
// Kind: Class; super: Object
class UUIStateChartResourceCollection
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> ResourcesByClass; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UUIStateChartResourceCollection, ResourcesByClass) == 40, "Offset mismatch for UUIStateChartResourceCollection::ResourcesByClass");

// /Script/UIChart.UIStateChartTransition
// Kind: Class; super: Object
class UUIStateChartTransition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Source; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* Target; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUIStateChartTransition, Source) == 40, "Offset mismatch for UUIStateChartTransition::Source");
static_assert(offsetof(UUIStateChartTransition, Target) == 48, "Offset mismatch for UUIStateChartTransition::Target");

// /Script/UIChart.UIStateChartTransitionOperation
// Kind: Class; super: Object
class UUIStateChartTransitionOperation
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Region; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* OriginState; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* EndState; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* TransitionTargetState; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0050
    TArray<void*> KnownStatesToActivate; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StatesToDeactivate; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    void* Group; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StateRelay[0x30]; // 0x0080 (Size: 0x30, Type: StructProperty)
    void* BacktrackReturnState; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUIStateChartTransitionOperation, Region) == 48, "Offset mismatch for UUIStateChartTransitionOperation::Region");
static_assert(offsetof(UUIStateChartTransitionOperation, OriginState) == 56, "Offset mismatch for UUIStateChartTransitionOperation::OriginState");
static_assert(offsetof(UUIStateChartTransitionOperation, EndState) == 64, "Offset mismatch for UUIStateChartTransitionOperation::EndState");
static_assert(offsetof(UUIStateChartTransitionOperation, TransitionTargetState) == 72, "Offset mismatch for UUIStateChartTransitionOperation::TransitionTargetState");
static_assert(offsetof(UUIStateChartTransitionOperation, KnownStatesToActivate) == 88, "Offset mismatch for UUIStateChartTransitionOperation::KnownStatesToActivate");
static_assert(offsetof(UUIStateChartTransitionOperation, StatesToDeactivate) == 104, "Offset mismatch for UUIStateChartTransitionOperation::StatesToDeactivate");
static_assert(offsetof(UUIStateChartTransitionOperation, Group) == 120, "Offset mismatch for UUIStateChartTransitionOperation::Group");
static_assert(offsetof(UUIStateChartTransitionOperation, StateRelay) == 128, "Offset mismatch for UUIStateChartTransitionOperation::StateRelay");
static_assert(offsetof(UUIStateChartTransitionOperation, BacktrackReturnState) == 176, "Offset mismatch for UUIStateChartTransitionOperation::BacktrackReturnState");

// /Script/UIChart.UIStateChartTransitionOperationGroup
// Kind: Class; super: Object
class UUIStateChartTransitionOperationGroup
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Operations[0x10]; // 0x0028 (Size: 0x10, Type: SetProperty)
    std::uint8_t OperationsReadyForContextUpdate[0x10]; // 0x0038 (Size: 0x10, Type: SetProperty)
    void* Context; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* LocalPlayer; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ContextChanges[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t ReverseContextChanges[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t Parameters[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t TransitionEventTag[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UUIStateChartTransitionOperationGroup, Operations) == 40, "Offset mismatch for UUIStateChartTransitionOperationGroup::Operations");
static_assert(offsetof(UUIStateChartTransitionOperationGroup, OperationsReadyForContextUpdate) == 56, "Offset mismatch for UUIStateChartTransitionOperationGroup::OperationsReadyForContextUpdate");
static_assert(offsetof(UUIStateChartTransitionOperationGroup, Context) == 72, "Offset mismatch for UUIStateChartTransitionOperationGroup::Context");
static_assert(offsetof(UUIStateChartTransitionOperationGroup, LocalPlayer) == 80, "Offset mismatch for UUIStateChartTransitionOperationGroup::LocalPlayer");
static_assert(offsetof(UUIStateChartTransitionOperationGroup, ContextChanges) == 88, "Offset mismatch for UUIStateChartTransitionOperationGroup::ContextChanges");
static_assert(offsetof(UUIStateChartTransitionOperationGroup, ReverseContextChanges) == 104, "Offset mismatch for UUIStateChartTransitionOperationGroup::ReverseContextChanges");
static_assert(offsetof(UUIStateChartTransitionOperationGroup, Parameters) == 120, "Offset mismatch for UUIStateChartTransitionOperationGroup::Parameters");
static_assert(offsetof(UUIStateChartTransitionOperationGroup, TransitionEventTag) == 160, "Offset mismatch for UUIStateChartTransitionOperationGroup::TransitionEventTag");

// /Script/UIChart.UIStateComponent
// Kind: Class; super: Object
class UUIStateComponent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Status; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    void* ComponentConfiguration; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* OwningState; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* StateChartRegion; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUIStateComponent, Status) == 40, "Offset mismatch for UUIStateComponent::Status");
static_assert(offsetof(UUIStateComponent, ComponentConfiguration) == 48, "Offset mismatch for UUIStateComponent::ComponentConfiguration");
static_assert(offsetof(UUIStateComponent, OwningState) == 56, "Offset mismatch for UUIStateComponent::OwningState");
static_assert(offsetof(UUIStateComponent, StateChartRegion) == 64, "Offset mismatch for UUIStateComponent::StateChartRegion");

// /Script/UIChart.UIStateComponentConfiguration
// Kind: Class; super: Object
class UUIStateComponentConfiguration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UIChart.UIStateConfiguration
// Kind: Class; super: Object
class UUIStateConfiguration
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString Name; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t StateTags[0x20]; // 0x0038 (Size: 0x20, Type: StructProperty)
    std::int32_t ID; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x005C
    TArray<void*> Children; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ParallelRegions; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Components; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    float MinimumUnloadTime; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AutomationType; // 0x0094 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0095
    TArray<void*> AutomationRules; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bSupportsBacktracking; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideIncomingBacktracks; // 0x00A9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UUIStateConfiguration, Name) == 40, "Offset mismatch for UUIStateConfiguration::Name");
static_assert(offsetof(UUIStateConfiguration, StateTags) == 56, "Offset mismatch for UUIStateConfiguration::StateTags");
static_assert(offsetof(UUIStateConfiguration, ID) == 88, "Offset mismatch for UUIStateConfiguration::ID");
static_assert(offsetof(UUIStateConfiguration, Children) == 96, "Offset mismatch for UUIStateConfiguration::Children");
static_assert(offsetof(UUIStateConfiguration, ParallelRegions) == 112, "Offset mismatch for UUIStateConfiguration::ParallelRegions");
static_assert(offsetof(UUIStateConfiguration, Components) == 128, "Offset mismatch for UUIStateConfiguration::Components");
static_assert(offsetof(UUIStateConfiguration, MinimumUnloadTime) == 144, "Offset mismatch for UUIStateConfiguration::MinimumUnloadTime");
static_assert(offsetof(UUIStateConfiguration, AutomationType) == 148, "Offset mismatch for UUIStateConfiguration::AutomationType");
static_assert(offsetof(UUIStateConfiguration, AutomationRules) == 152, "Offset mismatch for UUIStateConfiguration::AutomationRules");
static_assert(offsetof(UUIStateConfiguration, bSupportsBacktracking) == 168, "Offset mismatch for UUIStateConfiguration::bSupportsBacktracking");
static_assert(offsetof(UUIStateConfiguration, bOverrideIncomingBacktracks) == 169, "Offset mismatch for UUIStateConfiguration::bOverrideIncomingBacktracks");

// /Script/UIChart.UIStateSettings
// Kind: Class; super: DeveloperSettings
class UUIStateSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float StateLoadTimeout; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float StateUnloadTimeout; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float WidgetStateComponentLoadTimeout; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float WidgetStateComponentUnloadTimeout; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t WidgetStateComponentDefaultUnloadBehavior; // 0x0040 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UUIStateSettings, StateLoadTimeout) == 48, "Offset mismatch for UUIStateSettings::StateLoadTimeout");
static_assert(offsetof(UUIStateSettings, StateUnloadTimeout) == 52, "Offset mismatch for UUIStateSettings::StateUnloadTimeout");
static_assert(offsetof(UUIStateSettings, WidgetStateComponentLoadTimeout) == 56, "Offset mismatch for UUIStateSettings::WidgetStateComponentLoadTimeout");
static_assert(offsetof(UUIStateSettings, WidgetStateComponentUnloadTimeout) == 60, "Offset mismatch for UUIStateSettings::WidgetStateComponentUnloadTimeout");
static_assert(offsetof(UUIStateSettings, WidgetStateComponentDefaultUnloadBehavior) == 64, "Offset mismatch for UUIStateSettings::WidgetStateComponentDefaultUnloadBehavior");
