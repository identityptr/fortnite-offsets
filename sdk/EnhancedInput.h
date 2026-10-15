/**
 * decamp dumper generated SDK
 * Package: /Script/EnhancedInput
 */
#pragma once
#include "Basic.h"

// /Script/EnhancedInput.AppliedInputContextData
// Kind: ScriptStruct; super: none
struct FAppliedInputContextData
{
public:
    std::int32_t Priority; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t RegistrationCount; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAppliedInputContextData, Priority) == 0, "Offset mismatch for FAppliedInputContextData::Priority");
static_assert(offsetof(FAppliedInputContextData, RegistrationCount) == 4, "Offset mismatch for FAppliedInputContextData::RegistrationCount");

// /Script/EnhancedInput.BlueprintEnhancedInputActionBinding
// Kind: ScriptStruct; super: none
struct FBlueprintEnhancedInputActionBinding
{
public:
    void* InputAction; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TriggerEvent; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    FName FunctionNameToBind; // 0x000C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FBlueprintEnhancedInputActionBinding, InputAction) == 0, "Offset mismatch for FBlueprintEnhancedInputActionBinding::InputAction");
static_assert(offsetof(FBlueprintEnhancedInputActionBinding, TriggerEvent) == 8, "Offset mismatch for FBlueprintEnhancedInputActionBinding::TriggerEvent");
static_assert(offsetof(FBlueprintEnhancedInputActionBinding, FunctionNameToBind) == 12, "Offset mismatch for FBlueprintEnhancedInputActionBinding::FunctionNameToBind");

// /Script/EnhancedInput.BlueprintInputDebugKeyDelegateBinding
// Kind: ScriptStruct; super: none
struct FBlueprintInputDebugKeyDelegateBinding
{
public:
    std::uint8_t InputChord[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t InputKeyEvent; // 0x0020 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0021
    std::uint8_t FunctionNameToBind[0x4]; // 0x0024 (Size: 0x4, Type: NameProperty)
    std::uint8_t bExecuteWhenPaused; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBlueprintInputDebugKeyDelegateBinding, InputChord) == 0, "Offset mismatch for FBlueprintInputDebugKeyDelegateBinding::InputChord");
static_assert(offsetof(FBlueprintInputDebugKeyDelegateBinding, InputKeyEvent) == 32, "Offset mismatch for FBlueprintInputDebugKeyDelegateBinding::InputKeyEvent");
static_assert(offsetof(FBlueprintInputDebugKeyDelegateBinding, FunctionNameToBind) == 36, "Offset mismatch for FBlueprintInputDebugKeyDelegateBinding::FunctionNameToBind");
static_assert(offsetof(FBlueprintInputDebugKeyDelegateBinding, bExecuteWhenPaused) == 40, "Offset mismatch for FBlueprintInputDebugKeyDelegateBinding::bExecuteWhenPaused");

// /Script/EnhancedInput.DefaultContextSetting
// Kind: ScriptStruct; super: none
struct FDefaultContextSetting
{
public:
    std::uint8_t InputMappingContext[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t Priority; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAddImmediately; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRegisterWithUserSettings; // 0x0025 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDefaultContextSetting, InputMappingContext) == 0, "Offset mismatch for FDefaultContextSetting::InputMappingContext");
static_assert(offsetof(FDefaultContextSetting, Priority) == 32, "Offset mismatch for FDefaultContextSetting::Priority");
static_assert(offsetof(FDefaultContextSetting, bAddImmediately) == 36, "Offset mismatch for FDefaultContextSetting::bAddImmediately");
static_assert(offsetof(FDefaultContextSetting, bRegisterWithUserSettings) == 37, "Offset mismatch for FDefaultContextSetting::bRegisterWithUserSettings");

// /Script/EnhancedInput.EnhancedActionKeyMapping
// Kind: ScriptStruct; super: none
struct FEnhancedActionKeyMapping
{
public:
    TArray<void*> Triggers; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Modifiers; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    void* Action; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Key[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t bHasAlwaysTickTrigger; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SettingBehavior; // 0x0041 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0042
    void* PlayerMappableKeySettings; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEnhancedActionKeyMapping, Triggers) == 0, "Offset mismatch for FEnhancedActionKeyMapping::Triggers");
static_assert(offsetof(FEnhancedActionKeyMapping, Modifiers) == 16, "Offset mismatch for FEnhancedActionKeyMapping::Modifiers");
static_assert(offsetof(FEnhancedActionKeyMapping, Action) == 32, "Offset mismatch for FEnhancedActionKeyMapping::Action");
static_assert(offsetof(FEnhancedActionKeyMapping, Key) == 40, "Offset mismatch for FEnhancedActionKeyMapping::Key");
static_assert(offsetof(FEnhancedActionKeyMapping, bHasAlwaysTickTrigger) == 64, "Offset mismatch for FEnhancedActionKeyMapping::bHasAlwaysTickTrigger");
static_assert(offsetof(FEnhancedActionKeyMapping, SettingBehavior) == 65, "Offset mismatch for FEnhancedActionKeyMapping::SettingBehavior");
static_assert(offsetof(FEnhancedActionKeyMapping, PlayerMappableKeySettings) == 72, "Offset mismatch for FEnhancedActionKeyMapping::PlayerMappableKeySettings");

// /Script/EnhancedInput.InjectedInput
// Kind: ScriptStruct; super: none
struct FInjectedInput
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> Triggers; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Modifiers; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FInjectedInput, Triggers) == 32, "Offset mismatch for FInjectedInput::Triggers");
static_assert(offsetof(FInjectedInput, Modifiers) == 48, "Offset mismatch for FInjectedInput::Modifiers");

// /Script/EnhancedInput.InjectedInputArray
// Kind: ScriptStruct; super: none
struct FInjectedInputArray
{
public:
    TArray<void*> Injected; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FInjectedInputArray, Injected) == 0, "Offset mismatch for FInjectedInputArray::Injected");

// /Script/EnhancedInput.InputActionInstance
// Kind: ScriptStruct; super: none
struct FInputActionInstance
{
public:
    void* SourceAction; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0000[0xB]; // 0x0008
    std::uint8_t TriggerEvent; // 0x0013 (Size: 0x1, Type: EnumProperty)
    float LastTriggeredWorldTime; // 0x0014 (Size: 0x4, Type: FloatProperty)
    TArray<void*> Triggers; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Modifiers; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0038
    float ElapsedProcessedTime; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float ElapsedTriggeredTime; // 0x005C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FInputActionInstance, SourceAction) == 0, "Offset mismatch for FInputActionInstance::SourceAction");
static_assert(offsetof(FInputActionInstance, TriggerEvent) == 19, "Offset mismatch for FInputActionInstance::TriggerEvent");
static_assert(offsetof(FInputActionInstance, LastTriggeredWorldTime) == 20, "Offset mismatch for FInputActionInstance::LastTriggeredWorldTime");
static_assert(offsetof(FInputActionInstance, Triggers) == 24, "Offset mismatch for FInputActionInstance::Triggers");
static_assert(offsetof(FInputActionInstance, Modifiers) == 40, "Offset mismatch for FInputActionInstance::Modifiers");
static_assert(offsetof(FInputActionInstance, ElapsedProcessedTime) == 88, "Offset mismatch for FInputActionInstance::ElapsedProcessedTime");
static_assert(offsetof(FInputActionInstance, ElapsedTriggeredTime) == 92, "Offset mismatch for FInputActionInstance::ElapsedTriggeredTime");

// /Script/EnhancedInput.InputActionValue
// Kind: ScriptStruct; super: none
struct FInputActionValue
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EnhancedInput.InputCancelAction
// Kind: ScriptStruct; super: none
struct FInputCancelAction
{
public:
    void* CancelAction; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CancellationStates; // 0x0008 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FInputCancelAction, CancelAction) == 0, "Offset mismatch for FInputCancelAction::CancelAction");
static_assert(offsetof(FInputCancelAction, CancellationStates) == 8, "Offset mismatch for FInputCancelAction::CancellationStates");

// /Script/EnhancedInput.InputComboStepData
// Kind: ScriptStruct; super: none
struct FInputComboStepData
{
public:
    void* ComboStepAction; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ComboStepCompletionStates; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    float TimeToPressKey; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FInputComboStepData, ComboStepAction) == 0, "Offset mismatch for FInputComboStepData::ComboStepAction");
static_assert(offsetof(FInputComboStepData, ComboStepCompletionStates) == 8, "Offset mismatch for FInputComboStepData::ComboStepCompletionStates");
static_assert(offsetof(FInputComboStepData, TimeToPressKey) == 12, "Offset mismatch for FInputComboStepData::TimeToPressKey");

// /Script/EnhancedInput.InputMappingContextMappingData
// Kind: ScriptStruct; super: none
struct FInputMappingContextMappingData
{
public:
    TArray<void*> Mappings; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FInputMappingContextMappingData, Mappings) == 0, "Offset mismatch for FInputMappingContextMappingData::Mappings");

// /Script/EnhancedInput.KeyConsumptionOptions
// Kind: ScriptStruct; super: none
struct FKeyConsumptionOptions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EnhancedInput.KeyMappingRow
// Kind: ScriptStruct; super: none
struct FKeyMappingRow
{
public:
    TSet<void*> Mappings; // 0x0000 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FKeyMappingRow, Mappings) == 0, "Offset mismatch for FKeyMappingRow::Mappings");

// /Script/EnhancedInput.MapPlayerKeyArgs
// Kind: ScriptStruct; super: none
struct FMapPlayerKeyArgs
{
public:
    std::uint8_t MappingName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Slot; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t NewKey[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t HardwareDeviceId[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    std::uint8_t ProfileId[0x4]; // 0x0024 (Size: 0x4, Type: StructProperty)
    FString ProfileIdString; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t bCreateMatchingSlotIfNeeded; // 0x0038 (Size: 0x1, Type: BoolProperty)
    // 0x0038 BoolProperty bDeferOnSettingsChangedBroadcast (shared storage)
};

static_assert(offsetof(FMapPlayerKeyArgs, MappingName) == 0, "Offset mismatch for FMapPlayerKeyArgs::MappingName");
static_assert(offsetof(FMapPlayerKeyArgs, Slot) == 4, "Offset mismatch for FMapPlayerKeyArgs::Slot");
static_assert(offsetof(FMapPlayerKeyArgs, NewKey) == 8, "Offset mismatch for FMapPlayerKeyArgs::NewKey");
static_assert(offsetof(FMapPlayerKeyArgs, HardwareDeviceId) == 32, "Offset mismatch for FMapPlayerKeyArgs::HardwareDeviceId");
static_assert(offsetof(FMapPlayerKeyArgs, ProfileId) == 36, "Offset mismatch for FMapPlayerKeyArgs::ProfileId");
static_assert(offsetof(FMapPlayerKeyArgs, ProfileIdString) == 40, "Offset mismatch for FMapPlayerKeyArgs::ProfileIdString");
static_assert(offsetof(FMapPlayerKeyArgs, bCreateMatchingSlotIfNeeded) == 56, "Offset mismatch for FMapPlayerKeyArgs::bCreateMatchingSlotIfNeeded");

// /Script/EnhancedInput.MappingQueryIssue
// Kind: ScriptStruct; super: none
struct FMappingQueryIssue
{
public:
    std::uint8_t Issue; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* BlockingContext; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* BlockingAction; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMappingQueryIssue, Issue) == 0, "Offset mismatch for FMappingQueryIssue::Issue");
static_assert(offsetof(FMappingQueryIssue, BlockingContext) == 8, "Offset mismatch for FMappingQueryIssue::BlockingContext");
static_assert(offsetof(FMappingQueryIssue, BlockingAction) == 16, "Offset mismatch for FMappingQueryIssue::BlockingAction");

// /Script/EnhancedInput.ModifyContextOptions
// Kind: ScriptStruct; super: none
struct FModifyContextOptions
{
public:
    std::uint8_t bForceImmediately; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bIgnoreAllPressedKeysUntilRelease (shared storage)
    // 0x0000 BoolProperty bNotifyUserSettings (shared storage)
};

static_assert(offsetof(FModifyContextOptions, bForceImmediately) == 0, "Offset mismatch for FModifyContextOptions::bForceImmediately");

// /Script/EnhancedInput.PlayerKeyMapping
// Kind: ScriptStruct; super: none
struct FPlayerKeyMapping
{
public:
    FName MappingName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t DisplayName[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t DisplayCategory[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    std::uint8_t Slot; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsDirty; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x002A
    std::uint8_t DefaultKey[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurrentKey[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t HardwareDeviceId[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    void* AssociatedInputAction; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> AssociatedInputActionSoft; // 0x0078 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FPlayerKeyMapping, MappingName) == 0, "Offset mismatch for FPlayerKeyMapping::MappingName");
static_assert(offsetof(FPlayerKeyMapping, DisplayName) == 8, "Offset mismatch for FPlayerKeyMapping::DisplayName");
static_assert(offsetof(FPlayerKeyMapping, DisplayCategory) == 24, "Offset mismatch for FPlayerKeyMapping::DisplayCategory");
static_assert(offsetof(FPlayerKeyMapping, Slot) == 40, "Offset mismatch for FPlayerKeyMapping::Slot");
static_assert(offsetof(FPlayerKeyMapping, bIsDirty) == 41, "Offset mismatch for FPlayerKeyMapping::bIsDirty");
static_assert(offsetof(FPlayerKeyMapping, DefaultKey) == 48, "Offset mismatch for FPlayerKeyMapping::DefaultKey");
static_assert(offsetof(FPlayerKeyMapping, CurrentKey) == 72, "Offset mismatch for FPlayerKeyMapping::CurrentKey");
static_assert(offsetof(FPlayerKeyMapping, HardwareDeviceId) == 96, "Offset mismatch for FPlayerKeyMapping::HardwareDeviceId");
static_assert(offsetof(FPlayerKeyMapping, AssociatedInputAction) == 112, "Offset mismatch for FPlayerKeyMapping::AssociatedInputAction");
static_assert(offsetof(FPlayerKeyMapping, AssociatedInputActionSoft) == 120, "Offset mismatch for FPlayerKeyMapping::AssociatedInputActionSoft");

// /Script/EnhancedInput.PlayerMappableKeyProfileCreationArgs
// Kind: ScriptStruct; super: none
struct FPlayerMappableKeyProfileCreationArgs
{
public:
    void* ProfileType; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ProfileIdentifier[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    FString ProfileStringIdentifier; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t UserId[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayName[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t bSetAsCurrentProfile; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FPlayerMappableKeyProfileCreationArgs, ProfileType) == 0, "Offset mismatch for FPlayerMappableKeyProfileCreationArgs::ProfileType");
static_assert(offsetof(FPlayerMappableKeyProfileCreationArgs, ProfileIdentifier) == 8, "Offset mismatch for FPlayerMappableKeyProfileCreationArgs::ProfileIdentifier");
static_assert(offsetof(FPlayerMappableKeyProfileCreationArgs, ProfileStringIdentifier) == 16, "Offset mismatch for FPlayerMappableKeyProfileCreationArgs::ProfileStringIdentifier");
static_assert(offsetof(FPlayerMappableKeyProfileCreationArgs, UserId) == 32, "Offset mismatch for FPlayerMappableKeyProfileCreationArgs::UserId");
static_assert(offsetof(FPlayerMappableKeyProfileCreationArgs, DisplayName) == 40, "Offset mismatch for FPlayerMappableKeyProfileCreationArgs::DisplayName");
static_assert(offsetof(FPlayerMappableKeyProfileCreationArgs, bSetAsCurrentProfile) == 56, "Offset mismatch for FPlayerMappableKeyProfileCreationArgs::bSetAsCurrentProfile");

// /Script/EnhancedInput.PlayerMappableKeyQueryOptions
// Kind: ScriptStruct; super: none
struct FPlayerMappableKeyQueryOptions
{
public:
    FName MappingName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t KeyToMatch[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t SlotToMatch; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bMatchBasicKeyTypes; // 0x0021 (Size: 0x1, Type: BoolProperty)
    // 0x0021 BoolProperty bMatchKeyAxisType (shared storage)
    std::uint8_t RequiredDeviceType; // 0x0022 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0023
    std::int32_t RequiredDeviceFlags; // 0x0024 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPlayerMappableKeyQueryOptions, MappingName) == 0, "Offset mismatch for FPlayerMappableKeyQueryOptions::MappingName");
static_assert(offsetof(FPlayerMappableKeyQueryOptions, KeyToMatch) == 8, "Offset mismatch for FPlayerMappableKeyQueryOptions::KeyToMatch");
static_assert(offsetof(FPlayerMappableKeyQueryOptions, SlotToMatch) == 32, "Offset mismatch for FPlayerMappableKeyQueryOptions::SlotToMatch");
static_assert(offsetof(FPlayerMappableKeyQueryOptions, bMatchBasicKeyTypes) == 33, "Offset mismatch for FPlayerMappableKeyQueryOptions::bMatchBasicKeyTypes");
static_assert(offsetof(FPlayerMappableKeyQueryOptions, RequiredDeviceType) == 34, "Offset mismatch for FPlayerMappableKeyQueryOptions::RequiredDeviceType");
static_assert(offsetof(FPlayerMappableKeyQueryOptions, RequiredDeviceFlags) == 36, "Offset mismatch for FPlayerMappableKeyQueryOptions::RequiredDeviceFlags");

// /Script/EnhancedInput.EnhancedInputActionDelegateBinding
// Kind: Class; super: InputDelegateBinding
class UEnhancedInputActionDelegateBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> InputActionDelegateBindings; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEnhancedInputActionDelegateBinding, InputActionDelegateBindings) == 40, "Offset mismatch for UEnhancedInputActionDelegateBinding::InputActionDelegateBindings");

// /Script/EnhancedInput.EnhancedInputActionValueBinding
// Kind: Class; super: InputDelegateBinding
class UEnhancedInputActionValueBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> InputActionValueBindings; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEnhancedInputActionValueBinding, InputActionValueBindings) == 40, "Offset mismatch for UEnhancedInputActionValueBinding::InputActionValueBindings");

// /Script/EnhancedInput.EnhancedInputComponent
// Kind: Class; super: InputComponent
class UEnhancedInputComponent
{
public:
    std::uint8_t Pad_0000[0x130]; // 0x0000
    TArray<void*> CachedKeyToActionInfo; // 0x0130 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UEnhancedInputComponent, CachedKeyToActionInfo) == 304, "Offset mismatch for UEnhancedInputComponent::CachedKeyToActionInfo");

// /Script/EnhancedInput.EnhancedInputDeveloperSettings
// Kind: Class; super: DeveloperSettingsBackedByCVars
class UEnhancedInputDeveloperSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> DefaultMappingContexts; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DefaultWorldSubsystemMappingContexts; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PlatformSettings[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    std::uint8_t UserSettingsClass[0x20]; // 0x0060 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t DefaultPlayerMappableKeyProfileClass[0x20]; // 0x0080 (Size: 0x20, Type: SoftClassProperty)
    FString InputSettingsSaveSlotName; // 0x00A0 (Size: 0x10, Type: StrProperty)
    std::uint8_t DefaultWorldInputClass[0x20]; // 0x00B0 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t bEnableDefaultMappingContexts; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    // 0x00D0 BoolProperty bEnableInputModeFiltering (shared storage)
    // 0x00D0 BoolProperty bEnableUserSettings (shared storage)
    // 0x00D0 BoolProperty bEnableWorldSubsystem (shared storage)
    // 0x00D0 BoolProperty bSendTriggeredEventsWhenInputIsFlushed (shared storage)
    // 0x00D0 BoolProperty bShouldOnlyTriggerLastActionInChord (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x00D1
    std::uint8_t DefaultMappingContextInputModeQuery[0x48]; // 0x00D8 (Size: 0x48, Type: StructProperty)
    std::uint8_t DefaultInputMode[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UEnhancedInputDeveloperSettings, DefaultMappingContexts) == 48, "Offset mismatch for UEnhancedInputDeveloperSettings::DefaultMappingContexts");
static_assert(offsetof(UEnhancedInputDeveloperSettings, DefaultWorldSubsystemMappingContexts) == 64, "Offset mismatch for UEnhancedInputDeveloperSettings::DefaultWorldSubsystemMappingContexts");
static_assert(offsetof(UEnhancedInputDeveloperSettings, PlatformSettings) == 80, "Offset mismatch for UEnhancedInputDeveloperSettings::PlatformSettings");
static_assert(offsetof(UEnhancedInputDeveloperSettings, UserSettingsClass) == 96, "Offset mismatch for UEnhancedInputDeveloperSettings::UserSettingsClass");
static_assert(offsetof(UEnhancedInputDeveloperSettings, DefaultPlayerMappableKeyProfileClass) == 128, "Offset mismatch for UEnhancedInputDeveloperSettings::DefaultPlayerMappableKeyProfileClass");
static_assert(offsetof(UEnhancedInputDeveloperSettings, InputSettingsSaveSlotName) == 160, "Offset mismatch for UEnhancedInputDeveloperSettings::InputSettingsSaveSlotName");
static_assert(offsetof(UEnhancedInputDeveloperSettings, DefaultWorldInputClass) == 176, "Offset mismatch for UEnhancedInputDeveloperSettings::DefaultWorldInputClass");
static_assert(offsetof(UEnhancedInputDeveloperSettings, bEnableDefaultMappingContexts) == 208, "Offset mismatch for UEnhancedInputDeveloperSettings::bEnableDefaultMappingContexts");
static_assert(offsetof(UEnhancedInputDeveloperSettings, DefaultMappingContextInputModeQuery) == 216, "Offset mismatch for UEnhancedInputDeveloperSettings::DefaultMappingContextInputModeQuery");
static_assert(offsetof(UEnhancedInputDeveloperSettings, DefaultInputMode) == 288, "Offset mismatch for UEnhancedInputDeveloperSettings::DefaultInputMode");

// /Script/EnhancedInput.EnhancedInputLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UEnhancedInputLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EnhancedInput.EnhancedInputLocalPlayerSubsystem
// Kind: Class; super: LocalPlayerSubsystem
class UEnhancedInputLocalPlayerSubsystem
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    FMulticastInlineDelegate ControlMappingsRebuiltDelegate; // 0x0080 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMappingContextAdded; // 0x0090 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMappingContextRemoved; // 0x00A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPostUserSettingsInitialized; // 0x00B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* UserSettings; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> ContinuouslyInjectedInputs; // 0x00C8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UEnhancedInputLocalPlayerSubsystem, ControlMappingsRebuiltDelegate) == 128, "Offset mismatch for UEnhancedInputLocalPlayerSubsystem::ControlMappingsRebuiltDelegate");
static_assert(offsetof(UEnhancedInputLocalPlayerSubsystem, OnMappingContextAdded) == 144, "Offset mismatch for UEnhancedInputLocalPlayerSubsystem::OnMappingContextAdded");
static_assert(offsetof(UEnhancedInputLocalPlayerSubsystem, OnMappingContextRemoved) == 160, "Offset mismatch for UEnhancedInputLocalPlayerSubsystem::OnMappingContextRemoved");
static_assert(offsetof(UEnhancedInputLocalPlayerSubsystem, OnPostUserSettingsInitialized) == 176, "Offset mismatch for UEnhancedInputLocalPlayerSubsystem::OnPostUserSettingsInitialized");
static_assert(offsetof(UEnhancedInputLocalPlayerSubsystem, UserSettings) == 192, "Offset mismatch for UEnhancedInputLocalPlayerSubsystem::UserSettings");
static_assert(offsetof(UEnhancedInputLocalPlayerSubsystem, ContinuouslyInjectedInputs) == 200, "Offset mismatch for UEnhancedInputLocalPlayerSubsystem::ContinuouslyInjectedInputs");

// /Script/EnhancedInput.EnhancedInputPlatformData
// Kind: Class; super: Object
class UEnhancedInputPlatformData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> MappingContextRedirects; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UEnhancedInputPlatformData, MappingContextRedirects) == 40, "Offset mismatch for UEnhancedInputPlatformData::MappingContextRedirects");

// /Script/EnhancedInput.EnhancedInputPlatformSettings
// Kind: Class; super: PlatformSettings
class UEnhancedInputPlatformSettings
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TArray<void*> InputData; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InputDataClasses; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShouldLogMappingContextRedirects; // 0x0060 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEnhancedInputPlatformSettings, InputData) == 64, "Offset mismatch for UEnhancedInputPlatformSettings::InputData");
static_assert(offsetof(UEnhancedInputPlatformSettings, InputDataClasses) == 80, "Offset mismatch for UEnhancedInputPlatformSettings::InputDataClasses");
static_assert(offsetof(UEnhancedInputPlatformSettings, bShouldLogMappingContextRedirects) == 96, "Offset mismatch for UEnhancedInputPlatformSettings::bShouldLogMappingContextRedirects");

// /Script/EnhancedInput.EnhancedInputSubsystemInterface
// Kind: Class; super: Interface
class UEnhancedInputSubsystemInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EnhancedInput.EnhancedInputUserSettings
// Kind: Class; super: SaveGame
class UEnhancedInputUserSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSettingsChanged; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSettingsApplied; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnKeyProfileChanged; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0060
    std::uint8_t CurrentProfileIdentifier[0x8]; // 0x0070 (Size: 0x8, Type: StructProperty)
    FString CurrentProfileIdentifierString; // 0x0078 (Size: 0x10, Type: StrProperty)
    TMap<void*, void*> SavedKeyProfiles; // 0x0088 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> SavedKeyProfilesMap; // 0x0098 (Size: 0x10, Type: MapProperty)
    TWeakObjectPtr<void> OwningLocalPlayer; // 0x00A8 (Size: 0x8, Type: WeakObjectProperty)
    TSet<void*> RegisteredMappingContexts; // 0x00B0 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UEnhancedInputUserSettings, OnSettingsChanged) == 48, "Offset mismatch for UEnhancedInputUserSettings::OnSettingsChanged");
static_assert(offsetof(UEnhancedInputUserSettings, OnSettingsApplied) == 64, "Offset mismatch for UEnhancedInputUserSettings::OnSettingsApplied");
static_assert(offsetof(UEnhancedInputUserSettings, OnKeyProfileChanged) == 80, "Offset mismatch for UEnhancedInputUserSettings::OnKeyProfileChanged");
static_assert(offsetof(UEnhancedInputUserSettings, CurrentProfileIdentifier) == 112, "Offset mismatch for UEnhancedInputUserSettings::CurrentProfileIdentifier");
static_assert(offsetof(UEnhancedInputUserSettings, CurrentProfileIdentifierString) == 120, "Offset mismatch for UEnhancedInputUserSettings::CurrentProfileIdentifierString");
static_assert(offsetof(UEnhancedInputUserSettings, SavedKeyProfiles) == 136, "Offset mismatch for UEnhancedInputUserSettings::SavedKeyProfiles");
static_assert(offsetof(UEnhancedInputUserSettings, SavedKeyProfilesMap) == 152, "Offset mismatch for UEnhancedInputUserSettings::SavedKeyProfilesMap");
static_assert(offsetof(UEnhancedInputUserSettings, OwningLocalPlayer) == 168, "Offset mismatch for UEnhancedInputUserSettings::OwningLocalPlayer");
static_assert(offsetof(UEnhancedInputUserSettings, RegisteredMappingContexts) == 176, "Offset mismatch for UEnhancedInputUserSettings::RegisteredMappingContexts");

// /Script/EnhancedInput.EnhancedInputWorldSubsystem
// Kind: Class; super: WorldSubsystem
class UEnhancedInputWorldSubsystem
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    void* PlayerInput; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0090
    TArray<void*> CurrentInputStack; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ContinuouslyInjectedInputs; // 0x00B0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UEnhancedInputWorldSubsystem, PlayerInput) == 136, "Offset mismatch for UEnhancedInputWorldSubsystem::PlayerInput");
static_assert(offsetof(UEnhancedInputWorldSubsystem, CurrentInputStack) == 160, "Offset mismatch for UEnhancedInputWorldSubsystem::CurrentInputStack");
static_assert(offsetof(UEnhancedInputWorldSubsystem, ContinuouslyInjectedInputs) == 176, "Offset mismatch for UEnhancedInputWorldSubsystem::ContinuouslyInjectedInputs");

// /Script/EnhancedInput.EnhancedPlayerInput
// Kind: Class; super: PlayerInput
class UEnhancedPlayerInput
{
public:
    std::uint8_t Pad_0000[0x3C8]; // 0x0000
    TMap<void*, void*> KeyConsumptionData; // 0x03C8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ActionInstanceData; // 0x03D8 (Size: 0x10, Type: MapProperty)
    std::uint8_t ConsumedInputActions[0x10]; // 0x03E8 (Size: 0x10, Type: SetProperty)
    TMap<void*, void*> AppliedInputContextData; // 0x03F8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> AppliedInputContexts; // 0x0408 (Size: 0x10, Type: MapProperty)
    TArray<void*> EnhancedActionMappings; // 0x0418 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0428
    std::uint8_t CurrentInputMode[0x60]; // 0x0438 (Size: 0x60, Type: StructProperty)
    TMap<void*, void*> KeysPressedThisTick; // 0x0498 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> InputsInjectedThisTick; // 0x04A8 (Size: 0x10, Type: MapProperty)
    TSet<void*> LastInjectedActions; // 0x04B8 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UEnhancedPlayerInput, KeyConsumptionData) == 968, "Offset mismatch for UEnhancedPlayerInput::KeyConsumptionData");
static_assert(offsetof(UEnhancedPlayerInput, ActionInstanceData) == 984, "Offset mismatch for UEnhancedPlayerInput::ActionInstanceData");
static_assert(offsetof(UEnhancedPlayerInput, ConsumedInputActions) == 1000, "Offset mismatch for UEnhancedPlayerInput::ConsumedInputActions");
static_assert(offsetof(UEnhancedPlayerInput, AppliedInputContextData) == 1016, "Offset mismatch for UEnhancedPlayerInput::AppliedInputContextData");
static_assert(offsetof(UEnhancedPlayerInput, AppliedInputContexts) == 1032, "Offset mismatch for UEnhancedPlayerInput::AppliedInputContexts");
static_assert(offsetof(UEnhancedPlayerInput, EnhancedActionMappings) == 1048, "Offset mismatch for UEnhancedPlayerInput::EnhancedActionMappings");
static_assert(offsetof(UEnhancedPlayerInput, CurrentInputMode) == 1080, "Offset mismatch for UEnhancedPlayerInput::CurrentInputMode");
static_assert(offsetof(UEnhancedPlayerInput, KeysPressedThisTick) == 1176, "Offset mismatch for UEnhancedPlayerInput::KeysPressedThisTick");
static_assert(offsetof(UEnhancedPlayerInput, InputsInjectedThisTick) == 1192, "Offset mismatch for UEnhancedPlayerInput::InputsInjectedThisTick");
static_assert(offsetof(UEnhancedPlayerInput, LastInjectedActions) == 1208, "Offset mismatch for UEnhancedPlayerInput::LastInjectedActions");

// /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile
// Kind: Class; super: Object
class UEnhancedPlayerMappableKeyProfile
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ProfileIdentifier[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    FString ProfileIdentifierString; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t OwningUserId[0x8]; // 0x0040 (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayName[0x10]; // 0x0048 (Size: 0x10, Type: TextProperty)
    TMap<void*, void*> PlayerMappedKeys; // 0x0058 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UEnhancedPlayerMappableKeyProfile, ProfileIdentifier) == 40, "Offset mismatch for UEnhancedPlayerMappableKeyProfile::ProfileIdentifier");
static_assert(offsetof(UEnhancedPlayerMappableKeyProfile, ProfileIdentifierString) == 48, "Offset mismatch for UEnhancedPlayerMappableKeyProfile::ProfileIdentifierString");
static_assert(offsetof(UEnhancedPlayerMappableKeyProfile, OwningUserId) == 64, "Offset mismatch for UEnhancedPlayerMappableKeyProfile::OwningUserId");
static_assert(offsetof(UEnhancedPlayerMappableKeyProfile, DisplayName) == 72, "Offset mismatch for UEnhancedPlayerMappableKeyProfile::DisplayName");
static_assert(offsetof(UEnhancedPlayerMappableKeyProfile, PlayerMappedKeys) == 88, "Offset mismatch for UEnhancedPlayerMappableKeyProfile::PlayerMappedKeys");

// /Script/EnhancedInput.InputAction
// Kind: Class; super: DataAsset
class UInputAction
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ActionDescription[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t bTriggerWhenPaused; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsumeInput; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsumesActionAndAxisMappings; // 0x003A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReserveAllMappings; // 0x003B (Size: 0x1, Type: BoolProperty)
    std::int32_t TriggerEventsThatConsumeLegacyKeys; // 0x003C (Size: 0x4, Type: IntProperty)
    std::uint8_t ValueType; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AccumulationBehavior; // 0x0041 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0042
    TArray<void*> Triggers; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Modifiers; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    void* PlayerMappableKeySettings; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInputAction, ActionDescription) == 40, "Offset mismatch for UInputAction::ActionDescription");
static_assert(offsetof(UInputAction, bTriggerWhenPaused) == 56, "Offset mismatch for UInputAction::bTriggerWhenPaused");
static_assert(offsetof(UInputAction, bConsumeInput) == 57, "Offset mismatch for UInputAction::bConsumeInput");
static_assert(offsetof(UInputAction, bConsumesActionAndAxisMappings) == 58, "Offset mismatch for UInputAction::bConsumesActionAndAxisMappings");
static_assert(offsetof(UInputAction, bReserveAllMappings) == 59, "Offset mismatch for UInputAction::bReserveAllMappings");
static_assert(offsetof(UInputAction, TriggerEventsThatConsumeLegacyKeys) == 60, "Offset mismatch for UInputAction::TriggerEventsThatConsumeLegacyKeys");
static_assert(offsetof(UInputAction, ValueType) == 64, "Offset mismatch for UInputAction::ValueType");
static_assert(offsetof(UInputAction, AccumulationBehavior) == 65, "Offset mismatch for UInputAction::AccumulationBehavior");
static_assert(offsetof(UInputAction, Triggers) == 72, "Offset mismatch for UInputAction::Triggers");
static_assert(offsetof(UInputAction, Modifiers) == 88, "Offset mismatch for UInputAction::Modifiers");
static_assert(offsetof(UInputAction, PlayerMappableKeySettings) == 104, "Offset mismatch for UInputAction::PlayerMappableKeySettings");

// /Script/EnhancedInput.InputDebugKeyDelegateBinding
// Kind: Class; super: InputDelegateBinding
class UInputDebugKeyDelegateBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> InputDebugKeyDelegateBindings; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UInputDebugKeyDelegateBinding, InputDebugKeyDelegateBindings) == 40, "Offset mismatch for UInputDebugKeyDelegateBinding::InputDebugKeyDelegateBindings");

// /Script/EnhancedInput.InputMappingContext
// Kind: Class; super: DataAsset
class UInputMappingContext
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Mappings; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultKeyMappings[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> MappingProfileOverrides; // 0x0048 (Size: 0x10, Type: MapProperty)
    std::uint8_t InputModeFilterOptions; // 0x0058 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0059
    std::uint8_t InputModeQueryOverride[0x48]; // 0x0060 (Size: 0x48, Type: StructProperty)
    std::uint8_t RegistrationTrackingMode; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00A9
    FText ContextDescription; // 0x00B0 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UInputMappingContext, Mappings) == 40, "Offset mismatch for UInputMappingContext::Mappings");
static_assert(offsetof(UInputMappingContext, DefaultKeyMappings) == 56, "Offset mismatch for UInputMappingContext::DefaultKeyMappings");
static_assert(offsetof(UInputMappingContext, MappingProfileOverrides) == 72, "Offset mismatch for UInputMappingContext::MappingProfileOverrides");
static_assert(offsetof(UInputMappingContext, InputModeFilterOptions) == 88, "Offset mismatch for UInputMappingContext::InputModeFilterOptions");
static_assert(offsetof(UInputMappingContext, InputModeQueryOverride) == 96, "Offset mismatch for UInputMappingContext::InputModeQueryOverride");
static_assert(offsetof(UInputMappingContext, RegistrationTrackingMode) == 168, "Offset mismatch for UInputMappingContext::RegistrationTrackingMode");
static_assert(offsetof(UInputMappingContext, ContextDescription) == 176, "Offset mismatch for UInputMappingContext::ContextDescription");

// /Script/EnhancedInput.InputModifier
// Kind: Class; super: Object
class UInputModifier
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EnhancedInput.InputModifierDeadZone
// Kind: Class; super: InputModifier
class UInputModifierDeadZone
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float LowerThreshold; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float UpperThreshold; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Type; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UInputModifierDeadZone, LowerThreshold) == 40, "Offset mismatch for UInputModifierDeadZone::LowerThreshold");
static_assert(offsetof(UInputModifierDeadZone, UpperThreshold) == 44, "Offset mismatch for UInputModifierDeadZone::UpperThreshold");
static_assert(offsetof(UInputModifierDeadZone, Type) == 48, "Offset mismatch for UInputModifierDeadZone::Type");

// /Script/EnhancedInput.InputModifierFOVScaling
// Kind: Class; super: InputModifier
class UInputModifierFOVScaling
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float FOVScale; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FOVScalingType; // 0x002C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UInputModifierFOVScaling, FOVScale) == 40, "Offset mismatch for UInputModifierFOVScaling::FOVScale");
static_assert(offsetof(UInputModifierFOVScaling, FOVScalingType) == 44, "Offset mismatch for UInputModifierFOVScaling::FOVScalingType");

// /Script/EnhancedInput.InputModifierNegate
// Kind: Class; super: InputModifier
class UInputModifierNegate
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bX; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bY; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bZ; // 0x002A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInputModifierNegate, bX) == 40, "Offset mismatch for UInputModifierNegate::bX");
static_assert(offsetof(UInputModifierNegate, bY) == 41, "Offset mismatch for UInputModifierNegate::bY");
static_assert(offsetof(UInputModifierNegate, bZ) == 42, "Offset mismatch for UInputModifierNegate::bZ");

// /Script/EnhancedInput.InputModifierResponseCurveExponential
// Kind: Class; super: InputModifier
class UInputModifierResponseCurveExponential
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t CurveExponent[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UInputModifierResponseCurveExponential, CurveExponent) == 40, "Offset mismatch for UInputModifierResponseCurveExponential::CurveExponent");

// /Script/EnhancedInput.InputModifierResponseCurveUser
// Kind: Class; super: InputModifier
class UInputModifierResponseCurveUser
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ResponseX; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* ResponseY; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* ResponseZ; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInputModifierResponseCurveUser, ResponseX) == 40, "Offset mismatch for UInputModifierResponseCurveUser::ResponseX");
static_assert(offsetof(UInputModifierResponseCurveUser, ResponseY) == 48, "Offset mismatch for UInputModifierResponseCurveUser::ResponseY");
static_assert(offsetof(UInputModifierResponseCurveUser, ResponseZ) == 56, "Offset mismatch for UInputModifierResponseCurveUser::ResponseZ");

// /Script/EnhancedInput.InputModifierScalar
// Kind: Class; super: InputModifier
class UInputModifierScalar
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Scalar[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UInputModifierScalar, Scalar) == 40, "Offset mismatch for UInputModifierScalar::Scalar");

// /Script/EnhancedInput.InputModifierScaleByDeltaTime
// Kind: Class; super: InputModifier
class UInputModifierScaleByDeltaTime
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EnhancedInput.InputModifierSmooth
// Kind: Class; super: InputModifier
class UInputModifierSmooth
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EnhancedInput.InputModifierSmoothDelta
// Kind: Class; super: InputModifier
class UInputModifierSmoothDelta
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SmoothingMethod; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    float Speed; // 0x002C (Size: 0x4, Type: FloatProperty)
    float EasingExponent; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UInputModifierSmoothDelta, SmoothingMethod) == 40, "Offset mismatch for UInputModifierSmoothDelta::SmoothingMethod");
static_assert(offsetof(UInputModifierSmoothDelta, Speed) == 44, "Offset mismatch for UInputModifierSmoothDelta::Speed");
static_assert(offsetof(UInputModifierSmoothDelta, EasingExponent) == 48, "Offset mismatch for UInputModifierSmoothDelta::EasingExponent");

// /Script/EnhancedInput.InputModifierSwizzleAxis
// Kind: Class; super: InputModifier
class UInputModifierSwizzleAxis
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Order; // 0x0028 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UInputModifierSwizzleAxis, Order) == 40, "Offset mismatch for UInputModifierSwizzleAxis::Order");

// /Script/EnhancedInput.InputModifierToWorldSpace
// Kind: Class; super: InputModifier
class UInputModifierToWorldSpace
{
public:
    std::uint8_t Opaque[1];
};


// /Script/EnhancedInput.InputTrigger
// Kind: Class; super: Object
class UInputTrigger
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float ActuationThreshold; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldAlwaysTick; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::uint8_t LastValue[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UInputTrigger, ActuationThreshold) == 40, "Offset mismatch for UInputTrigger::ActuationThreshold");
static_assert(offsetof(UInputTrigger, bShouldAlwaysTick) == 44, "Offset mismatch for UInputTrigger::bShouldAlwaysTick");
static_assert(offsetof(UInputTrigger, LastValue) == 48, "Offset mismatch for UInputTrigger::LastValue");

// /Script/EnhancedInput.InputTriggerChordAction
// Kind: Class; super: InputTrigger
class UInputTriggerChordAction
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ChordAction; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInputTriggerChordAction, ChordAction) == 80, "Offset mismatch for UInputTriggerChordAction::ChordAction");

// /Script/EnhancedInput.InputTriggerChordBlocker
// Kind: Class; super: InputTriggerChordAction
class UInputTriggerChordBlocker
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ChordAction; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInputTriggerChordBlocker, ChordAction) == 80, "Offset mismatch for UInputTriggerChordBlocker::ChordAction");

// /Script/EnhancedInput.InputTriggerCombo
// Kind: Class; super: InputTrigger
class UInputTriggerCombo
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t CurrentComboStepIndex; // 0x0050 (Size: 0x4, Type: IntProperty)
    float CurrentTimeBetweenComboSteps; // 0x0054 (Size: 0x4, Type: FloatProperty)
    TArray<void*> ComboActions; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InputCancelActions; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UInputTriggerCombo, CurrentComboStepIndex) == 80, "Offset mismatch for UInputTriggerCombo::CurrentComboStepIndex");
static_assert(offsetof(UInputTriggerCombo, CurrentTimeBetweenComboSteps) == 84, "Offset mismatch for UInputTriggerCombo::CurrentTimeBetweenComboSteps");
static_assert(offsetof(UInputTriggerCombo, ComboActions) == 88, "Offset mismatch for UInputTriggerCombo::ComboActions");
static_assert(offsetof(UInputTriggerCombo, InputCancelActions) == 104, "Offset mismatch for UInputTriggerCombo::InputCancelActions");

// /Script/EnhancedInput.InputTriggerDown
// Kind: Class; super: InputTrigger
class UInputTriggerDown
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float ActuationThreshold; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldAlwaysTick; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::uint8_t LastValue[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UInputTriggerDown, ActuationThreshold) == 40, "Offset mismatch for UInputTriggerDown::ActuationThreshold");
static_assert(offsetof(UInputTriggerDown, bShouldAlwaysTick) == 44, "Offset mismatch for UInputTriggerDown::bShouldAlwaysTick");
static_assert(offsetof(UInputTriggerDown, LastValue) == 48, "Offset mismatch for UInputTriggerDown::LastValue");

// /Script/EnhancedInput.InputTriggerHold
// Kind: Class; super: InputTriggerTimedBase
class UInputTriggerHold
{
public:
    std::uint8_t Pad_0000[0x5C]; // 0x0000
    float HoldTimeThreshold; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsOneShot; // 0x0060 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInputTriggerHold, HoldTimeThreshold) == 92, "Offset mismatch for UInputTriggerHold::HoldTimeThreshold");
static_assert(offsetof(UInputTriggerHold, bIsOneShot) == 96, "Offset mismatch for UInputTriggerHold::bIsOneShot");

// /Script/EnhancedInput.InputTriggerHoldAndRelease
// Kind: Class; super: InputTriggerTimedBase
class UInputTriggerHoldAndRelease
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    float HoldTimeThreshold; // 0x0058 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UInputTriggerHoldAndRelease, HoldTimeThreshold) == 88, "Offset mismatch for UInputTriggerHoldAndRelease::HoldTimeThreshold");

// /Script/EnhancedInput.InputTriggerPressed
// Kind: Class; super: InputTrigger
class UInputTriggerPressed
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float ActuationThreshold; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldAlwaysTick; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::uint8_t LastValue[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UInputTriggerPressed, ActuationThreshold) == 40, "Offset mismatch for UInputTriggerPressed::ActuationThreshold");
static_assert(offsetof(UInputTriggerPressed, bShouldAlwaysTick) == 44, "Offset mismatch for UInputTriggerPressed::bShouldAlwaysTick");
static_assert(offsetof(UInputTriggerPressed, LastValue) == 48, "Offset mismatch for UInputTriggerPressed::LastValue");

// /Script/EnhancedInput.InputTriggerPulse
// Kind: Class; super: InputTriggerTimedBase
class UInputTriggerPulse
{
public:
    std::uint8_t Pad_0000[0x5C]; // 0x0000
    std::uint8_t bTriggerOnStart; // 0x005C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x005D
    float Interval; // 0x0060 (Size: 0x4, Type: FloatProperty)
    std::int32_t TriggerLimit; // 0x0064 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UInputTriggerPulse, bTriggerOnStart) == 92, "Offset mismatch for UInputTriggerPulse::bTriggerOnStart");
static_assert(offsetof(UInputTriggerPulse, Interval) == 96, "Offset mismatch for UInputTriggerPulse::Interval");
static_assert(offsetof(UInputTriggerPulse, TriggerLimit) == 100, "Offset mismatch for UInputTriggerPulse::TriggerLimit");

// /Script/EnhancedInput.InputTriggerReleased
// Kind: Class; super: InputTrigger
class UInputTriggerReleased
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float ActuationThreshold; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShouldAlwaysTick; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x002D
    std::uint8_t LastValue[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UInputTriggerReleased, ActuationThreshold) == 40, "Offset mismatch for UInputTriggerReleased::ActuationThreshold");
static_assert(offsetof(UInputTriggerReleased, bShouldAlwaysTick) == 44, "Offset mismatch for UInputTriggerReleased::bShouldAlwaysTick");
static_assert(offsetof(UInputTriggerReleased, LastValue) == 48, "Offset mismatch for UInputTriggerReleased::LastValue");

// /Script/EnhancedInput.InputTriggerRepeatedTap
// Kind: Class; super: InputTriggerTimedBase
class UInputTriggerRepeatedTap
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    double RepeatDelay; // 0x0058 (Size: 0x8, Type: DoubleProperty)
    std::int32_t NumberOfTapsWhichTriggerRepeat; // 0x0060 (Size: 0x4, Type: IntProperty)
    float TapReleaseTimeThreshold; // 0x0064 (Size: 0x4, Type: FloatProperty)
    double RepeatTime; // 0x0068 (Size: 0x8, Type: DoubleProperty)
    std::int32_t NumberOfTapsSinceLastTrigger; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAwaitingRepeatTap; // 0x0074 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInputTriggerRepeatedTap, RepeatDelay) == 88, "Offset mismatch for UInputTriggerRepeatedTap::RepeatDelay");
static_assert(offsetof(UInputTriggerRepeatedTap, NumberOfTapsWhichTriggerRepeat) == 96, "Offset mismatch for UInputTriggerRepeatedTap::NumberOfTapsWhichTriggerRepeat");
static_assert(offsetof(UInputTriggerRepeatedTap, TapReleaseTimeThreshold) == 100, "Offset mismatch for UInputTriggerRepeatedTap::TapReleaseTimeThreshold");
static_assert(offsetof(UInputTriggerRepeatedTap, RepeatTime) == 104, "Offset mismatch for UInputTriggerRepeatedTap::RepeatTime");
static_assert(offsetof(UInputTriggerRepeatedTap, NumberOfTapsSinceLastTrigger) == 112, "Offset mismatch for UInputTriggerRepeatedTap::NumberOfTapsSinceLastTrigger");
static_assert(offsetof(UInputTriggerRepeatedTap, bAwaitingRepeatTap) == 116, "Offset mismatch for UInputTriggerRepeatedTap::bAwaitingRepeatTap");

// /Script/EnhancedInput.InputTriggerTap
// Kind: Class; super: InputTriggerTimedBase
class UInputTriggerTap
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    float TapReleaseTimeThreshold; // 0x0058 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UInputTriggerTap, TapReleaseTimeThreshold) == 88, "Offset mismatch for UInputTriggerTap::TapReleaseTimeThreshold");

// /Script/EnhancedInput.InputTriggerTimedBase
// Kind: Class; super: InputTrigger
class UInputTriggerTimedBase
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    float HeldDuration; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAffectedByTimeDilation; // 0x0054 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInputTriggerTimedBase, HeldDuration) == 80, "Offset mismatch for UInputTriggerTimedBase::HeldDuration");
static_assert(offsetof(UInputTriggerTimedBase, bAffectedByTimeDilation) == 84, "Offset mismatch for UInputTriggerTimedBase::bAffectedByTimeDilation");

// /Script/EnhancedInput.PlayerMappableInputConfig
// Kind: Class; super: PrimaryDataAsset
class UPlayerMappableInputConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName ConfigName; // 0x0028 (Size: 0x8, Type: NameProperty)
    std::uint8_t ConfigDisplayName[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsDeprecated; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0041
    void* MetaData; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> Contexts; // 0x0050 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPlayerMappableInputConfig, ConfigName) == 40, "Offset mismatch for UPlayerMappableInputConfig::ConfigName");
static_assert(offsetof(UPlayerMappableInputConfig, ConfigDisplayName) == 48, "Offset mismatch for UPlayerMappableInputConfig::ConfigDisplayName");
static_assert(offsetof(UPlayerMappableInputConfig, bIsDeprecated) == 64, "Offset mismatch for UPlayerMappableInputConfig::bIsDeprecated");
static_assert(offsetof(UPlayerMappableInputConfig, MetaData) == 72, "Offset mismatch for UPlayerMappableInputConfig::MetaData");
static_assert(offsetof(UPlayerMappableInputConfig, Contexts) == 80, "Offset mismatch for UPlayerMappableInputConfig::Contexts");

// /Script/EnhancedInput.PlayerMappableKeySettings
// Kind: Class; super: Object
class UPlayerMappableKeySettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* MetaData; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    FName Name; // 0x0030 (Size: 0x8, Type: NameProperty)
    std::uint8_t DisplayName[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t DisplayCategory[0x10]; // 0x0048 (Size: 0x10, Type: TextProperty)
    std::uint8_t SupportedKeyProfiles[0x20]; // 0x0058 (Size: 0x20, Type: StructProperty)
    TArray<void*> SupportedKeyProfileIds; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPlayerMappableKeySettings, MetaData) == 40, "Offset mismatch for UPlayerMappableKeySettings::MetaData");
static_assert(offsetof(UPlayerMappableKeySettings, Name) == 48, "Offset mismatch for UPlayerMappableKeySettings::Name");
static_assert(offsetof(UPlayerMappableKeySettings, DisplayName) == 56, "Offset mismatch for UPlayerMappableKeySettings::DisplayName");
static_assert(offsetof(UPlayerMappableKeySettings, DisplayCategory) == 72, "Offset mismatch for UPlayerMappableKeySettings::DisplayCategory");
static_assert(offsetof(UPlayerMappableKeySettings, SupportedKeyProfiles) == 88, "Offset mismatch for UPlayerMappableKeySettings::SupportedKeyProfiles");
static_assert(offsetof(UPlayerMappableKeySettings, SupportedKeyProfileIds) == 120, "Offset mismatch for UPlayerMappableKeySettings::SupportedKeyProfileIds");
