/**
 * decamp dumper generated SDK
 * Package: /Script/QuestPersistence
 */
#pragma once
#include "Basic.h"

// /Script/QuestPersistence.QuestExtensionPersistencePayload
// Kind: ScriptStruct; super: none
struct FQuestExtensionPersistencePayload
{
public:
    std::uint8_t Opaque[1];
};


// /Script/QuestPersistence.QuestExtensionSnapshot
// Kind: ScriptStruct; super: none
struct FQuestExtensionSnapshot
{
public:
    FString ExtensionTemplateId; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t ExtendedData[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FQuestExtensionSnapshot, ExtensionTemplateId) == 0, "Offset mismatch for FQuestExtensionSnapshot::ExtensionTemplateId");
static_assert(offsetof(FQuestExtensionSnapshot, ExtendedData) == 16, "Offset mismatch for FQuestExtensionSnapshot::ExtendedData");

// /Script/QuestPersistence.QuestObjectivePersistencePayload
// Kind: ScriptStruct; super: none
struct FQuestObjectivePersistencePayload
{
public:
    std::uint8_t Opaque[1];
};


// /Script/QuestPersistence.QuestObjectiveSnapshot
// Kind: ScriptStruct; super: none
struct FQuestObjectiveSnapshot
{
public:
    FString ObjectiveTemplateId; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t ObjectiveUID[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::int32_t Progress; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t bComplete; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0025
    std::uint8_t ExtendedData[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FQuestObjectiveSnapshot, ObjectiveTemplateId) == 0, "Offset mismatch for FQuestObjectiveSnapshot::ObjectiveTemplateId");
static_assert(offsetof(FQuestObjectiveSnapshot, ObjectiveUID) == 16, "Offset mismatch for FQuestObjectiveSnapshot::ObjectiveUID");
static_assert(offsetof(FQuestObjectiveSnapshot, Progress) == 32, "Offset mismatch for FQuestObjectiveSnapshot::Progress");
static_assert(offsetof(FQuestObjectiveSnapshot, bComplete) == 36, "Offset mismatch for FQuestObjectiveSnapshot::bComplete");
static_assert(offsetof(FQuestObjectiveSnapshot, ExtendedData) == 40, "Offset mismatch for FQuestObjectiveSnapshot::ExtendedData");

// /Script/QuestPersistence.QuestPersistencePayload
// Kind: ScriptStruct; super: none
struct FQuestPersistencePayload
{
public:
    std::uint8_t Opaque[1];
};


// /Script/QuestPersistence.QuestSnapshot
// Kind: ScriptStruct; super: none
struct FQuestSnapshot
{
public:
    std::uint8_t QuestID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FString TemplateId; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t CreationTime[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t State; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0029
    TArray<void*> Objectives; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Extensions; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ExtendedData[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FQuestSnapshot, QuestID) == 0, "Offset mismatch for FQuestSnapshot::QuestID");
static_assert(offsetof(FQuestSnapshot, TemplateId) == 16, "Offset mismatch for FQuestSnapshot::TemplateId");
static_assert(offsetof(FQuestSnapshot, CreationTime) == 32, "Offset mismatch for FQuestSnapshot::CreationTime");
static_assert(offsetof(FQuestSnapshot, State) == 40, "Offset mismatch for FQuestSnapshot::State");
static_assert(offsetof(FQuestSnapshot, Objectives) == 48, "Offset mismatch for FQuestSnapshot::Objectives");
static_assert(offsetof(FQuestSnapshot, Extensions) == 64, "Offset mismatch for FQuestSnapshot::Extensions");
static_assert(offsetof(FQuestSnapshot, ExtendedData) == 80, "Offset mismatch for FQuestSnapshot::ExtendedData");

// /Script/QuestPersistence.QuestStateSnapshot
// Kind: ScriptStruct; super: none
struct FQuestStateSnapshot
{
public:
    TArray<void*> Quests; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FQuestStateSnapshot, Quests) == 0, "Offset mismatch for FQuestStateSnapshot::Quests");

// /Script/QuestPersistence.SnapshotSerializableQuest
// Kind: Class; super: Interface
class USnapshotSerializableQuest
{
public:
    std::uint8_t Opaque[1];
};


// /Script/QuestPersistence.SnapshotSerializableQuestExtension
// Kind: Class; super: Interface
class USnapshotSerializableQuestExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/QuestPersistence.SnapshotSerializableQuestObjective
// Kind: Class; super: Interface
class USnapshotSerializableQuestObjective
{
public:
    std::uint8_t Opaque[1];
};


// /Script/QuestPersistence.VerseCompositeObjectiveSnapshot
// Kind: Class; super: Object
class UVerseCompositeObjectiveSnapshot
{
public:
    std::uint8_t Opaque[1];
};


// /Script/QuestPersistence.VerseObjectiveSnapshot
// Kind: Class; super: Object
class UVerseObjectiveSnapshot
{
public:
    std::uint8_t Opaque[1];
};


// /Script/QuestPersistence.VersePersistableQuestObjective
// Kind: Class; super: Interface
class UVersePersistableQuestObjective
{
public:
    std::uint8_t Opaque[1];
};


// /Script/QuestPersistence.VerseProgressObjectiveSnapshot
// Kind: Class; super: Object
class UVerseProgressObjectiveSnapshot
{
public:
    std::uint8_t Opaque[1];
};


// /Script/QuestPersistence.VerseQuestProgressData
// Kind: Class; super: Object
class UVerseQuestProgressData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/QuestPersistence.VerseSequentialObjectiveSnapshot
// Kind: Class; super: Object
class UVerseSequentialObjectiveSnapshot
{
public:
    std::uint8_t Opaque[1];
};


// /Script/QuestPersistence.VerseStateMachineObjectiveSnapshot
// Kind: Class; super: Object
class UVerseStateMachineObjectiveSnapshot
{
public:
    std::uint8_t Opaque[1];
};


// /Script/QuestPersistence.VerseTimedObjectiveSnapshot
// Kind: Class; super: Object
class UVerseTimedObjectiveSnapshot
{
public:
    std::uint8_t Opaque[1];
};
