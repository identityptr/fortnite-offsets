/**
 * decamp dumper generated SDK
 * Package: /Script/BasicQuest
 */
#pragma once
#include "Basic.h"

// /Script/BasicQuest.BasicQuestView
// Kind: ScriptStruct; super: QuestView
struct FBasicQuestView
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> ObjectiveStates; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DisplayName[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0040 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortDescription[0x10]; // 0x0050 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> Rewards; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FBasicQuestView, ObjectiveStates) == 32, "Offset mismatch for FBasicQuestView::ObjectiveStates");
static_assert(offsetof(FBasicQuestView, DisplayName) == 48, "Offset mismatch for FBasicQuestView::DisplayName");
static_assert(offsetof(FBasicQuestView, Description) == 64, "Offset mismatch for FBasicQuestView::Description");
static_assert(offsetof(FBasicQuestView, ShortDescription) == 80, "Offset mismatch for FBasicQuestView::ShortDescription");
static_assert(offsetof(FBasicQuestView, Icon) == 96, "Offset mismatch for FBasicQuestView::Icon");
static_assert(offsetof(FBasicQuestView, Rewards) == 128, "Offset mismatch for FBasicQuestView::Rewards");

// /Script/BasicQuest.QuestViewTest_AddReferencedObjectsSpyView
// Kind: ScriptStruct; super: QuestView
struct FQuestViewTest_AddReferencedObjectsSpyView
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t QuestID[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t QuestState; // 0x0018 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FQuestViewTest_AddReferencedObjectsSpyView, QuestID) == 8, "Offset mismatch for FQuestViewTest_AddReferencedObjectsSpyView::QuestID");
static_assert(offsetof(FQuestViewTest_AddReferencedObjectsSpyView, QuestState) == 24, "Offset mismatch for FQuestViewTest_AddReferencedObjectsSpyView::QuestState");

// /Script/BasicQuest.QuestViewTest_RefHolderView
// Kind: ScriptStruct; super: QuestView
struct FQuestViewTest_RefHolderView
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    void* HeldRef; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FQuestViewTest_RefHolderView, HeldRef) == 32, "Offset mismatch for FQuestViewTest_RefHolderView::HeldRef");

// /Script/BasicQuest.QuestViewTest_UpdateObjectiveSpyView
// Kind: ScriptStruct; super: QuestObjectiveView
struct FQuestViewTest_UpdateObjectiveSpyView
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ObjectiveUID[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t bComplete; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    std::uint8_t DisplayName[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortDescription[0x10]; // 0x0040 (Size: 0x10, Type: TextProperty)
    TSoftObjectPtr<void> Icon; // 0x0050 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FQuestViewTest_UpdateObjectiveSpyView, ObjectiveUID) == 8, "Offset mismatch for FQuestViewTest_UpdateObjectiveSpyView::ObjectiveUID");
static_assert(offsetof(FQuestViewTest_UpdateObjectiveSpyView, bComplete) == 24, "Offset mismatch for FQuestViewTest_UpdateObjectiveSpyView::bComplete");
static_assert(offsetof(FQuestViewTest_UpdateObjectiveSpyView, DisplayName) == 32, "Offset mismatch for FQuestViewTest_UpdateObjectiveSpyView::DisplayName");
static_assert(offsetof(FQuestViewTest_UpdateObjectiveSpyView, Description) == 48, "Offset mismatch for FQuestViewTest_UpdateObjectiveSpyView::Description");
static_assert(offsetof(FQuestViewTest_UpdateObjectiveSpyView, ShortDescription) == 64, "Offset mismatch for FQuestViewTest_UpdateObjectiveSpyView::ShortDescription");
static_assert(offsetof(FQuestViewTest_UpdateObjectiveSpyView, Icon) == 80, "Offset mismatch for FQuestViewTest_UpdateObjectiveSpyView::Icon");

// /Script/BasicQuest.QuestViewTest_UpdateSpyView
// Kind: ScriptStruct; super: BasicQuestView
struct FQuestViewTest_UpdateSpyView
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::int32_t UpdateQuestViewCallCount; // 0x0090 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FQuestViewTest_UpdateSpyView, UpdateQuestViewCallCount) == 144, "Offset mismatch for FQuestViewTest_UpdateSpyView::UpdateQuestViewCallCount");

// /Script/BasicQuest.BasicQuest
// Kind: Class; super: Quest
class UBasicQuest
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BasicQuest.BasicQuestDefinition
// Kind: Class; super: QuestDefinition
class UBasicQuestDefinition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BasicQuest.QuestObjectiveDefinitionBase
// Kind: Class; super: Object
class UQuestObjectiveDefinitionBase
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0040 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortDescription[0x10]; // 0x0050 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    FString ObjectiveTemplateId; // 0x0080 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UQuestObjectiveDefinitionBase, DisplayName) == 48, "Offset mismatch for UQuestObjectiveDefinitionBase::DisplayName");
static_assert(offsetof(UQuestObjectiveDefinitionBase, Description) == 64, "Offset mismatch for UQuestObjectiveDefinitionBase::Description");
static_assert(offsetof(UQuestObjectiveDefinitionBase, ShortDescription) == 80, "Offset mismatch for UQuestObjectiveDefinitionBase::ShortDescription");
static_assert(offsetof(UQuestObjectiveDefinitionBase, Icon) == 96, "Offset mismatch for UQuestObjectiveDefinitionBase::Icon");
static_assert(offsetof(UQuestObjectiveDefinitionBase, ObjectiveTemplateId) == 128, "Offset mismatch for UQuestObjectiveDefinitionBase::ObjectiveTemplateId");

// /Script/BasicQuest.QuestObjectiveInstance
// Kind: Class; super: Object
class UQuestObjectiveInstance
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TScriptInterface<void> OwningDefinition; // 0x0088 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> OwningQuest; // 0x0098 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UQuestObjectiveInstance, OwningDefinition) == 136, "Offset mismatch for UQuestObjectiveInstance::OwningDefinition");
static_assert(offsetof(UQuestObjectiveInstance, OwningQuest) == 152, "Offset mismatch for UQuestObjectiveInstance::OwningQuest");

// /Script/BasicQuest.QuestRewardDefinitionBase
// Kind: Class; super: Object
class UQuestRewardDefinitionBase
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0040 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortDescription[0x10]; // 0x0050 (Size: 0x10, Type: TextProperty)
    TSoftObjectPtr<void> Icon; // 0x0060 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UQuestRewardDefinitionBase, DisplayName) == 48, "Offset mismatch for UQuestRewardDefinitionBase::DisplayName");
static_assert(offsetof(UQuestRewardDefinitionBase, Description) == 64, "Offset mismatch for UQuestRewardDefinitionBase::Description");
static_assert(offsetof(UQuestRewardDefinitionBase, ShortDescription) == 80, "Offset mismatch for UQuestRewardDefinitionBase::ShortDescription");
static_assert(offsetof(UQuestRewardDefinitionBase, Icon) == 96, "Offset mismatch for UQuestRewardDefinitionBase::Icon");

// /Script/BasicQuest.QuestViewTest_BasicQuest
// Kind: Class; super: Object
class UQuestViewTest_BasicQuest
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BasicQuest.QuestViewTest_DirtyMarkSpyQuest
// Kind: Class; super: Object
class UQuestViewTest_DirtyMarkSpyQuest
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BasicQuest.QuestViewTest_FieldProbeHost
// Kind: Class; super: Object
class UQuestViewTest_FieldProbeHost
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ProbeField; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UQuestViewTest_FieldProbeHost, ProbeField) == 40, "Offset mismatch for UQuestViewTest_FieldProbeHost::ProbeField");

// /Script/BasicQuest.VerseQuestObjective
// Kind: Class; super: Object
class UVerseQuestObjective
{
public:
    std::uint8_t Opaque[1];
};


// /Script/BasicQuest.VerseQuestReward
// Kind: Class; super: Object
class UVerseQuestReward
{
public:
    std::uint8_t Opaque[1];
};
