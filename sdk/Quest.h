/**
 * decamp dumper generated SDK
 * Package: /Script/Quest
 */
#pragma once
#include "Basic.h"

// /Script/Quest.CachedQuestView
// Kind: ScriptStruct; super: none
struct FCachedQuestView
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InstancedQuestView[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCachedQuestView, InstancedQuestView) == 8, "Offset mismatch for FCachedQuestView::InstancedQuestView");

// /Script/Quest.CachedQuestViewHandle
// Kind: ScriptStruct; super: none
struct FCachedQuestViewHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.CachedQuestViewTest_DerivedView
// Kind: ScriptStruct; super: QuestView
struct FCachedQuestViewTest_DerivedView
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t QuestID[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t QuestState; // 0x0018 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FCachedQuestViewTest_DerivedView, QuestID) == 8, "Offset mismatch for FCachedQuestViewTest_DerivedView::QuestID");
static_assert(offsetof(FCachedQuestViewTest_DerivedView, QuestState) == 24, "Offset mismatch for FCachedQuestViewTest_DerivedView::QuestState");

// /Script/Quest.FailedQuestCompletionContext
// Kind: ScriptStruct; super: QuestCompletionContext
struct FFailedQuestCompletionContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.MutableCachedQuestViewHandle
// Kind: ScriptStruct; super: CachedQuestViewHandle
struct FMutableCachedQuestViewHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.NativeQuestMembership
// Kind: ScriptStruct; super: QuestMembershipEntry
struct FNativeQuestMembership
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TScriptInterface<void> Quest; // 0x0008 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> Participant; // 0x0018 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t Info[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNativeQuestMembership, Quest) == 8, "Offset mismatch for FNativeQuestMembership::Quest");
static_assert(offsetof(FNativeQuestMembership, Participant) == 24, "Offset mismatch for FNativeQuestMembership::Participant");
static_assert(offsetof(FNativeQuestMembership, Info) == 40, "Offset mismatch for FNativeQuestMembership::Info");

// /Script/Quest.NativeQuestParticipationInfo
// Kind: ScriptStruct; super: QuestParticipationInfo
struct FNativeQuestParticipationInfo
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t bContributes; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bObserves; // 0x0009 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReceives; // 0x000A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNativeQuestParticipationInfo, bContributes) == 8, "Offset mismatch for FNativeQuestParticipationInfo::bContributes");
static_assert(offsetof(FNativeQuestParticipationInfo, bObserves) == 9, "Offset mismatch for FNativeQuestParticipationInfo::bObserves");
static_assert(offsetof(FNativeQuestParticipationInfo, bReceives) == 10, "Offset mismatch for FNativeQuestParticipationInfo::bReceives");

// /Script/Quest.QuestBundleUID
// Kind: ScriptStruct; super: none
struct FQuestBundleUID
{
public:
    std::uint8_t InternalUID[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FQuestBundleUID, InternalUID) == 0, "Offset mismatch for FQuestBundleUID::InternalUID");

// /Script/Quest.QuestBundleView
// Kind: ScriptStruct; super: none
struct FQuestBundleView
{
public:
    std::uint8_t BundleUID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> BundledQuestUIDs; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::int32_t CompletedQuestCount; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsComplete; // 0x0024 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FQuestBundleView, BundleUID) == 0, "Offset mismatch for FQuestBundleView::BundleUID");
static_assert(offsetof(FQuestBundleView, BundledQuestUIDs) == 16, "Offset mismatch for FQuestBundleView::BundledQuestUIDs");
static_assert(offsetof(FQuestBundleView, CompletedQuestCount) == 32, "Offset mismatch for FQuestBundleView::CompletedQuestCount");
static_assert(offsetof(FQuestBundleView, bIsComplete) == 36, "Offset mismatch for FQuestBundleView::bIsComplete");

// /Script/Quest.QuestCompletionContext
// Kind: ScriptStruct; super: none
struct FQuestCompletionContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.QuestDebugFieldNode
// Kind: ScriptStruct; super: QuestDebugNode
struct FQuestDebugFieldNode
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    FName Label; // 0x0020 (Size: 0x8, Type: NameProperty)
    FString Source; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString Value; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t Status; // 0x0048 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FQuestDebugFieldNode, Label) == 32, "Offset mismatch for FQuestDebugFieldNode::Label");
static_assert(offsetof(FQuestDebugFieldNode, Source) == 40, "Offset mismatch for FQuestDebugFieldNode::Source");
static_assert(offsetof(FQuestDebugFieldNode, Value) == 56, "Offset mismatch for FQuestDebugFieldNode::Value");
static_assert(offsetof(FQuestDebugFieldNode, Status) == 72, "Offset mismatch for FQuestDebugFieldNode::Status");

// /Script/Quest.QuestDebugNode
// Kind: ScriptStruct; super: none
struct FQuestDebugNode
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Children; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bStartCollapsed; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FQuestDebugNode, Children) == 8, "Offset mismatch for FQuestDebugNode::Children");
static_assert(offsetof(FQuestDebugNode, bStartCollapsed) == 24, "Offset mismatch for FQuestDebugNode::bStartCollapsed");

// /Script/Quest.QuestDebugObjectiveNode
// Kind: ScriptStruct; super: QuestDebugNode
struct FQuestDebugObjectiveNode
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t DisplayName[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    std::uint8_t bComplete; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0025
    std::uint8_t ObjectiveUID[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    TArray<void*> Actions; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FQuestDebugObjectiveNode, DisplayName) == 32, "Offset mismatch for FQuestDebugObjectiveNode::DisplayName");
static_assert(offsetof(FQuestDebugObjectiveNode, bComplete) == 36, "Offset mismatch for FQuestDebugObjectiveNode::bComplete");
static_assert(offsetof(FQuestDebugObjectiveNode, ObjectiveUID) == 40, "Offset mismatch for FQuestDebugObjectiveNode::ObjectiveUID");
static_assert(offsetof(FQuestDebugObjectiveNode, Actions) == 56, "Offset mismatch for FQuestDebugObjectiveNode::Actions");

// /Script/Quest.QuestDebugSectionNode
// Kind: ScriptStruct; super: QuestDebugNode
struct FQuestDebugSectionNode
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    FName Title; // 0x0020 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FQuestDebugSectionNode, Title) == 32, "Offset mismatch for FQuestDebugSectionNode::Title");

// /Script/Quest.QuestFilterEntry
// Kind: ScriptStruct; super: none
struct FQuestFilterEntry
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* FilterObject; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FQuestFilterEntry, FilterObject) == 16, "Offset mismatch for FQuestFilterEntry::FilterObject");

// /Script/Quest.QuestGrantParameters
// Kind: ScriptStruct; super: none
struct FQuestGrantParameters
{
public:
    void* QuestType; // 0x0000 (Size: 0x8, Type: ClassProperty)
    TScriptInterface<void> QuestDefinition; // 0x0008 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t QuestUID[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FQuestGrantParameters, QuestType) == 0, "Offset mismatch for FQuestGrantParameters::QuestType");
static_assert(offsetof(FQuestGrantParameters, QuestDefinition) == 8, "Offset mismatch for FQuestGrantParameters::QuestDefinition");
static_assert(offsetof(FQuestGrantParameters, QuestUID) == 24, "Offset mismatch for FQuestGrantParameters::QuestUID");

// /Script/Quest.QuestMembershipEntry
// Kind: ScriptStruct; super: none
struct FQuestMembershipEntry
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.QuestObjectiveDebugAction
// Kind: ScriptStruct; super: none
struct FQuestObjectiveDebugAction
{
public:
    FName ActionID; // 0x0000 (Size: 0x8, Type: NameProperty)
    FString Label; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FQuestObjectiveDebugAction, ActionID) == 0, "Offset mismatch for FQuestObjectiveDebugAction::ActionID");
static_assert(offsetof(FQuestObjectiveDebugAction, Label) == 8, "Offset mismatch for FQuestObjectiveDebugAction::Label");

// /Script/Quest.QuestObjectiveUID
// Kind: ScriptStruct; super: none
struct FQuestObjectiveUID
{
public:
    std::uint8_t InternalUID[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FQuestObjectiveUID, InternalUID) == 0, "Offset mismatch for FQuestObjectiveUID::InternalUID");

// /Script/Quest.QuestObjectiveView
// Kind: ScriptStruct; super: none
struct FQuestObjectiveView
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

static_assert(offsetof(FQuestObjectiveView, ObjectiveUID) == 8, "Offset mismatch for FQuestObjectiveView::ObjectiveUID");
static_assert(offsetof(FQuestObjectiveView, bComplete) == 24, "Offset mismatch for FQuestObjectiveView::bComplete");
static_assert(offsetof(FQuestObjectiveView, DisplayName) == 32, "Offset mismatch for FQuestObjectiveView::DisplayName");
static_assert(offsetof(FQuestObjectiveView, Description) == 48, "Offset mismatch for FQuestObjectiveView::Description");
static_assert(offsetof(FQuestObjectiveView, ShortDescription) == 64, "Offset mismatch for FQuestObjectiveView::ShortDescription");
static_assert(offsetof(FQuestObjectiveView, Icon) == 80, "Offset mismatch for FQuestObjectiveView::Icon");

// /Script/Quest.QuestParticipationInfo
// Kind: ScriptStruct; super: none
struct FQuestParticipationInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.QuestRewardUID
// Kind: ScriptStruct; super: none
struct FQuestRewardUID
{
public:
    std::uint8_t InternalUID[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FQuestRewardUID, InternalUID) == 0, "Offset mismatch for FQuestRewardUID::InternalUID");

// /Script/Quest.QuestRewardView
// Kind: ScriptStruct; super: none
struct FQuestRewardView
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RewardUID[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t Name[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortDescription[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    TSoftObjectPtr<void> Icon; // 0x0048 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FQuestRewardView, RewardUID) == 8, "Offset mismatch for FQuestRewardView::RewardUID");
static_assert(offsetof(FQuestRewardView, Name) == 24, "Offset mismatch for FQuestRewardView::Name");
static_assert(offsetof(FQuestRewardView, Description) == 40, "Offset mismatch for FQuestRewardView::Description");
static_assert(offsetof(FQuestRewardView, ShortDescription) == 56, "Offset mismatch for FQuestRewardView::ShortDescription");
static_assert(offsetof(FQuestRewardView, Icon) == 72, "Offset mismatch for FQuestRewardView::Icon");

// /Script/Quest.QuestUID
// Kind: ScriptStruct; super: none
struct FQuestUID
{
public:
    std::uint8_t InternalUID[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FQuestUID, InternalUID) == 0, "Offset mismatch for FQuestUID::InternalUID");

// /Script/Quest.QuestView
// Kind: ScriptStruct; super: none
struct FQuestView
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t QuestID[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t QuestState; // 0x0018 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FQuestView, QuestID) == 8, "Offset mismatch for FQuestView::QuestID");
static_assert(offsetof(FQuestView, QuestState) == 24, "Offset mismatch for FQuestView::QuestState");

// /Script/Quest.VerseQuestMembership
// Kind: ScriptStruct; super: QuestMembershipEntry
struct FVerseQuestMembership
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.VerseQuestParticipationInfo
// Kind: ScriptStruct; super: QuestParticipationInfo
struct FVerseQuestParticipationInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.PlayerControllerComponent_QuestManager
// Kind: Class; super: ControllerComponent
class UPlayerControllerComponent_QuestManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* QuestManagerClass; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    TScriptInterface<void> QuestManager; // 0x00C8 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UPlayerControllerComponent_QuestManager, QuestManagerClass) == 192, "Offset mismatch for UPlayerControllerComponent_QuestManager::QuestManagerClass");
static_assert(offsetof(UPlayerControllerComponent_QuestManager, QuestManager) == 200, "Offset mismatch for UPlayerControllerComponent_QuestManager::QuestManager");

// /Script/Quest.PlayerControllerComponent_QuestParticipant
// Kind: Class; super: ControllerComponent
class UPlayerControllerComponent_QuestParticipant
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* QuestParticipantClass; // 0x00C0 (Size: 0x8, Type: ClassProperty)
    TScriptInterface<void> Participant; // 0x00C8 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UPlayerControllerComponent_QuestParticipant, QuestParticipantClass) == 192, "Offset mismatch for UPlayerControllerComponent_QuestParticipant::QuestParticipantClass");
static_assert(offsetof(UPlayerControllerComponent_QuestParticipant, Participant) == 200, "Offset mismatch for UPlayerControllerComponent_QuestParticipant::Participant");

// /Script/Quest.PlayerQuestParticipant
// Kind: Class; super: Object
class UPlayerQuestParticipant
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> ParticipatingQuestObjects; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPlayerQuestParticipant, ParticipatingQuestObjects) == 56, "Offset mismatch for UPlayerQuestParticipant::ParticipatingQuestObjects");

// /Script/Quest.Quest
// Kind: Class; super: Interface
class UQuest
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.QuestBundle
// Kind: Class; super: Interface
class UQuestBundle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.QuestCollection
// Kind: Class; super: Interface
class UQuestCollection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.QuestCollectionBase
// Kind: Class; super: Object
class UQuestCollectionBase
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> Memberships; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UQuestCollectionBase, Memberships) == 168, "Offset mismatch for UQuestCollectionBase::Memberships");

// /Script/Quest.QuestDefinition
// Kind: Class; super: Interface
class UQuestDefinition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.QuestGranter
// Kind: Class; super: Interface
class UQuestGranter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.QuestManager
// Kind: Class; super: Interface
class UQuestManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.QuestManagerBase
// Kind: Class; super: Object
class UQuestManagerBase
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    TArray<void*> ManagedQuestObjects; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    void* Collection; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UQuestManagerBase, ManagedQuestObjects) == 96, "Offset mismatch for UQuestManagerBase::ManagedQuestObjects");
static_assert(offsetof(UQuestManagerBase, Collection) == 112, "Offset mismatch for UQuestManagerBase::Collection");

// /Script/Quest.QuestObjective
// Kind: Class; super: Interface
class UQuestObjective
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.QuestObjectiveDefinition
// Kind: Class; super: Interface
class UQuestObjectiveDefinition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.QuestParticipant
// Kind: Class; super: Interface
class UQuestParticipant
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.QuestReplicationFilterObject
// Kind: Class; super: Actor
class UQuestReplicationFilterObject
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t QuestUID[0x10]; // 0x0270 (Size: 0x10, Type: StructProperty)
    std::uint8_t View[0x18]; // 0x0280 (Size: 0x18, Type: StructProperty)
    TSet<void*> TrackedObservers; // 0x0298 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UQuestReplicationFilterObject, QuestUID) == 624, "Offset mismatch for UQuestReplicationFilterObject::QuestUID");
static_assert(offsetof(UQuestReplicationFilterObject, View) == 640, "Offset mismatch for UQuestReplicationFilterObject::View");
static_assert(offsetof(UQuestReplicationFilterObject, TrackedObservers) == 664, "Offset mismatch for UQuestReplicationFilterObject::TrackedObservers");

// /Script/Quest.QuestReward
// Kind: Class; super: Interface
class UQuestReward
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.QuestRewardDefinition
// Kind: Class; super: Interface
class UQuestRewardDefinition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.QuestRewardInstance
// Kind: Class; super: Object
class UQuestRewardInstance
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    TScriptInterface<void> OwningDefinition; // 0x0070 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UQuestRewardInstance, OwningDefinition) == 112, "Offset mismatch for UQuestRewardInstance::OwningDefinition");

// /Script/Quest.QuestSubsystem
// Kind: Class; super: WorldSubsystem
class UQuestSubsystem
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TMap<void*, void*> QuestFilters; // 0x0050 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UQuestSubsystem, QuestFilters) == 80, "Offset mismatch for UQuestSubsystem::QuestFilters");

// /Script/Quest.QuestViewSubsystem
// Kind: Class; super: WorldSubsystem
class UQuestViewSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.VerseQuest
// Kind: Class; super: Object
class UVerseQuest
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.VerseQuestBundle
// Kind: Class; super: Object
class UVerseQuestBundle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.VerseQuestCollection
// Kind: Class; super: Object
class UVerseQuestCollection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Quest.VerseQuestParticipant
// Kind: Class; super: Object
class UVerseQuestParticipant
{
public:
    std::uint8_t Opaque[1];
};
