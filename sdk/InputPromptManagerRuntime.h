/**
 * decamp dumper generated SDK
 * Package: /Script/InputPromptManagerRuntime
 */
#pragma once
#include "Basic.h"

// /Script/InputPromptManagerRuntime.InputAliasInhibitor
// Kind: ScriptStruct; super: none
struct FInputAliasInhibitor
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FString DevName; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::uint8_t Flags; // 0x0018 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FInputAliasInhibitor, DevName) == 8, "Offset mismatch for FInputAliasInhibitor::DevName");
static_assert(offsetof(FInputAliasInhibitor, Flags) == 24, "Offset mismatch for FInputAliasInhibitor::Flags");

// /Script/InputPromptManagerRuntime.InputAliasInhibitor_AbilityActivation
// Kind: ScriptStruct; super: InputAliasInhibitor
struct FInputAliasInhibitor_AbilityActivation
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t AbilityHandle[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t AbilityTagQuery[0x48]; // 0x0038 (Size: 0x48, Type: StructProperty)
    void* AbilityClass; // 0x0080 (Size: 0x8, Type: ClassProperty)
    std::uint8_t BehaviorForASCAbsence; // 0x0088 (Size: 0x1, Type: EnumProperty)
    std::uint8_t BehaviorForAbilityAbsence; // 0x0089 (Size: 0x1, Type: EnumProperty)
    std::uint8_t BehaviorBasedOnCanActivateAbility; // 0x008A (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FInputAliasInhibitor_AbilityActivation, AbilityHandle) == 32, "Offset mismatch for FInputAliasInhibitor_AbilityActivation::AbilityHandle");
static_assert(offsetof(FInputAliasInhibitor_AbilityActivation, AbilityTagQuery) == 56, "Offset mismatch for FInputAliasInhibitor_AbilityActivation::AbilityTagQuery");
static_assert(offsetof(FInputAliasInhibitor_AbilityActivation, AbilityClass) == 128, "Offset mismatch for FInputAliasInhibitor_AbilityActivation::AbilityClass");
static_assert(offsetof(FInputAliasInhibitor_AbilityActivation, BehaviorForASCAbsence) == 136, "Offset mismatch for FInputAliasInhibitor_AbilityActivation::BehaviorForASCAbsence");
static_assert(offsetof(FInputAliasInhibitor_AbilityActivation, BehaviorForAbilityAbsence) == 137, "Offset mismatch for FInputAliasInhibitor_AbilityActivation::BehaviorForAbilityAbsence");
static_assert(offsetof(FInputAliasInhibitor_AbilityActivation, BehaviorBasedOnCanActivateAbility) == 138, "Offset mismatch for FInputAliasInhibitor_AbilityActivation::BehaviorBasedOnCanActivateAbility");

// /Script/InputPromptManagerRuntime.InputAliasInhibitor_AlwaysInhibit
// Kind: ScriptStruct; super: InputAliasInhibitor
struct FInputAliasInhibitor_AlwaysInhibit
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FString DevName; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::uint8_t Flags; // 0x0018 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FInputAliasInhibitor_AlwaysInhibit, DevName) == 8, "Offset mismatch for FInputAliasInhibitor_AlwaysInhibit::DevName");
static_assert(offsetof(FInputAliasInhibitor_AlwaysInhibit, Flags) == 24, "Offset mismatch for FInputAliasInhibitor_AlwaysInhibit::Flags");

// /Script/InputPromptManagerRuntime.InputAliasInhibitor_OwnerGameplayTagQuery
// Kind: ScriptStruct; super: InputAliasInhibitor
struct FInputAliasInhibitor_OwnerGameplayTagQuery
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t TagQuery[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInputAliasInhibitor_OwnerGameplayTagQuery, TagQuery) == 32, "Offset mismatch for FInputAliasInhibitor_OwnerGameplayTagQuery::TagQuery");

// /Script/InputPromptManagerRuntime.InputPromptManagerKnownListEntry
// Kind: ScriptStruct; super: none
struct FInputPromptManagerKnownListEntry
{
public:
    void* KnownInputAlias; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FInputPromptManagerKnownListEntry, KnownInputAlias) == 0, "Offset mismatch for FInputPromptManagerKnownListEntry::KnownInputAlias");

// /Script/InputPromptManagerRuntime.InputPromptManager_IMCPushParams
// Kind: ScriptStruct; super: none
struct FInputPromptManager_IMCPushParams
{
public:
    std::uint8_t bAutoCreateAliases; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t PriorityOfIMC; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t AliasesPriority; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FInputPromptManager_IMCPushParams, bAutoCreateAliases) == 0, "Offset mismatch for FInputPromptManager_IMCPushParams::bAutoCreateAliases");
static_assert(offsetof(FInputPromptManager_IMCPushParams, PriorityOfIMC) == 4, "Offset mismatch for FInputPromptManager_IMCPushParams::PriorityOfIMC");
static_assert(offsetof(FInputPromptManager_IMCPushParams, AliasesPriority) == 8, "Offset mismatch for FInputPromptManager_IMCPushParams::AliasesPriority");

// /Script/InputPromptManagerRuntime.LegacyInputBindingAliasData
// Kind: ScriptStruct; super: none
struct FLegacyInputBindingAliasData
{
public:
    std::uint8_t SpecializedActionName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t GeneralActionName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    FName ActionIdentifierName; // 0x0008 (Size: 0x8, Type: NameProperty)
    FText ActionDescription; // 0x0010 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FLegacyInputBindingAliasData, SpecializedActionName) == 0, "Offset mismatch for FLegacyInputBindingAliasData::SpecializedActionName");
static_assert(offsetof(FLegacyInputBindingAliasData, GeneralActionName) == 4, "Offset mismatch for FLegacyInputBindingAliasData::GeneralActionName");
static_assert(offsetof(FLegacyInputBindingAliasData, ActionIdentifierName) == 8, "Offset mismatch for FLegacyInputBindingAliasData::ActionIdentifierName");
static_assert(offsetof(FLegacyInputBindingAliasData, ActionDescription) == 16, "Offset mismatch for FLegacyInputBindingAliasData::ActionDescription");

// /Script/InputPromptManagerRuntime.AbstractableInputAction
// Kind: Class; super: InputAction
class UAbstractableInputAction
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t InputArchetype[0x20]; // 0x0070 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t UISortOrder; // 0x0090 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UAbstractableInputAction, InputArchetype) == 112, "Offset mismatch for UAbstractableInputAction::InputArchetype");
static_assert(offsetof(UAbstractableInputAction, UISortOrder) == 144, "Offset mismatch for UAbstractableInputAction::UISortOrder");

// /Script/InputPromptManagerRuntime.ControllerComponent_InputPromptManager
// Kind: Class; super: ControllerComponent
class UControllerComponent_InputPromptManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* InputComponent; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x28]; // 0x00C8
    TArray<void*> ActiveList; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> KnownList; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> EnhancedInputActionToAliasMapping; // 0x0110 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UControllerComponent_InputPromptManager, InputComponent) == 192, "Offset mismatch for UControllerComponent_InputPromptManager::InputComponent");
static_assert(offsetof(UControllerComponent_InputPromptManager, ActiveList) == 240, "Offset mismatch for UControllerComponent_InputPromptManager::ActiveList");
static_assert(offsetof(UControllerComponent_InputPromptManager, KnownList) == 256, "Offset mismatch for UControllerComponent_InputPromptManager::KnownList");
static_assert(offsetof(UControllerComponent_InputPromptManager, EnhancedInputActionToAliasMapping) == 272, "Offset mismatch for UControllerComponent_InputPromptManager::EnhancedInputActionToAliasMapping");

// /Script/InputPromptManagerRuntime.InputAlias
// Kind: Class; super: DataAsset
class UInputAlias
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t LegacyBindingData[0x28]; // 0x0028 (Size: 0x28, Type: OptionalProperty)
    void* ContextObject; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0058
    TArray<void*> Inhibitors; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    void* EnhancedInputAction; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InputArchetype[0x20]; // 0x0080 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t InputModeQuery[0x48]; // 0x00A0 (Size: 0x48, Type: StructProperty)
    std::int32_t Priority; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::int32_t UISortOrder; // 0x00EC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UInputAlias, LegacyBindingData) == 40, "Offset mismatch for UInputAlias::LegacyBindingData");
static_assert(offsetof(UInputAlias, ContextObject) == 80, "Offset mismatch for UInputAlias::ContextObject");
static_assert(offsetof(UInputAlias, Inhibitors) == 104, "Offset mismatch for UInputAlias::Inhibitors");
static_assert(offsetof(UInputAlias, EnhancedInputAction) == 120, "Offset mismatch for UInputAlias::EnhancedInputAction");
static_assert(offsetof(UInputAlias, InputArchetype) == 128, "Offset mismatch for UInputAlias::InputArchetype");
static_assert(offsetof(UInputAlias, InputModeQuery) == 160, "Offset mismatch for UInputAlias::InputModeQuery");
static_assert(offsetof(UInputAlias, Priority) == 232, "Offset mismatch for UInputAlias::Priority");
static_assert(offsetof(UInputAlias, UISortOrder) == 236, "Offset mismatch for UInputAlias::UISortOrder");

// /Script/InputPromptManagerRuntime.InputArchetype
// Kind: Class; super: DataAsset
class UInputArchetype
{
public:
    std::uint8_t Opaque[1];
};
