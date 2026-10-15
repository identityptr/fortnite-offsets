/**
 * decamp dumper generated SDK
 * Package: /Script/ModularQuest
 */
#pragma once
#include "Basic.h"

// /Script/ModularQuest.ModularQuestView
// Kind: ScriptStruct; super: BasicQuestView
struct FModularQuestView
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    TArray<void*> ExtensionData; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FModularQuestView, ExtensionData) == 144, "Offset mismatch for FModularQuestView::ExtensionData");

// /Script/ModularQuest.QuestViewExtension
// Kind: ScriptStruct; super: none
struct FQuestViewExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModularQuest.QuestViewTest_UpdateExtensionSpy
// Kind: ScriptStruct; super: QuestViewExtension
struct FQuestViewTest_UpdateExtensionSpy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModularQuest.QuestViewTest_VetoingExtension
// Kind: ScriptStruct; super: QuestViewExtension
struct FQuestViewTest_VetoingExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModularQuest.ModularQuest
// Kind: Class; super: BasicQuest
class UModularQuest
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModularQuest.ModularQuestDefinition
// Kind: Class; super: BasicQuestDefinition
class UModularQuestDefinition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModularQuest.QuestDefinitionExtension
// Kind: Class; super: Interface
class UQuestDefinitionExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModularQuest.QuestDefinitionExtensionBase
// Kind: Class; super: Object
class UQuestDefinitionExtensionBase
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString ExtensionTemplateId; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UQuestDefinitionExtensionBase, ExtensionTemplateId) == 48, "Offset mismatch for UQuestDefinitionExtensionBase::ExtensionTemplateId");

// /Script/ModularQuest.QuestExtension
// Kind: Class; super: Interface
class UQuestExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModularQuest.QuestExtensionBase
// Kind: Class; super: Object
class UQuestExtensionBase
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TScriptInterface<void> OwningDefinition; // 0x0030 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UQuestExtensionBase, OwningDefinition) == 48, "Offset mismatch for UQuestExtensionBase::OwningDefinition");

// /Script/ModularQuest.QuestInstance
// Kind: Class; super: Object
class UQuestInstance
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    TScriptInterface<void> OwningManager; // 0x00D8 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> OwningCollection; // 0x00E8 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> OwningDefinition; // 0x00F8 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UQuestInstance, OwningManager) == 216, "Offset mismatch for UQuestInstance::OwningManager");
static_assert(offsetof(UQuestInstance, OwningCollection) == 232, "Offset mismatch for UQuestInstance::OwningCollection");
static_assert(offsetof(UQuestInstance, OwningDefinition) == 248, "Offset mismatch for UQuestInstance::OwningDefinition");

// /Script/ModularQuest.QuestInstanceTest_DummyDefinition
// Kind: Class; super: Object
class UQuestInstanceTest_DummyDefinition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModularQuest.QuestInstanceTest_DummyObjective
// Kind: Class; super: Object
class UQuestInstanceTest_DummyObjective
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    TScriptInterface<void> OwningQuest; // 0x0090 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UQuestInstanceTest_DummyObjective, OwningQuest) == 144, "Offset mismatch for UQuestInstanceTest_DummyObjective::OwningQuest");

// /Script/ModularQuest.QuestInstanceTest_DummyReward
// Kind: Class; super: Object
class UQuestInstanceTest_DummyReward
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ModularQuest.QuestInstanceTest_TrackingObjective
// Kind: Class; super: Object
class UQuestInstanceTest_TrackingObjective
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    TScriptInterface<void> OwningQuest; // 0x0090 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UQuestInstanceTest_TrackingObjective, OwningQuest) == 144, "Offset mismatch for UQuestInstanceTest_TrackingObjective::OwningQuest");

// /Script/ModularQuest.VerseQuestExtension
// Kind: Class; super: Object
class UVerseQuestExtension
{
public:
    std::uint8_t Opaque[1];
};
