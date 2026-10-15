/**
 * decamp dumper generated SDK
 * Package: /Script/QuestFrameworkFortniteRuntime
 */
#pragma once
#include "Basic.h"

// /Script/QuestFrameworkFortniteRuntime.FortQuestCategoryDescriptor
// Kind: ScriptStruct; super: none
struct FFortQuestCategoryDescriptor
{
public:
    FString CategoryID; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t DisplayName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    double SortOrder; // 0x0048 (Size: 0x8, Type: DoubleProperty)
    FString ParentCategoryId; // 0x0050 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FFortQuestCategoryDescriptor, CategoryID) == 0, "Offset mismatch for FFortQuestCategoryDescriptor::CategoryID");
static_assert(offsetof(FFortQuestCategoryDescriptor, DisplayName) == 16, "Offset mismatch for FFortQuestCategoryDescriptor::DisplayName");
static_assert(offsetof(FFortQuestCategoryDescriptor, Description) == 32, "Offset mismatch for FFortQuestCategoryDescriptor::Description");
static_assert(offsetof(FFortQuestCategoryDescriptor, Icon) == 48, "Offset mismatch for FFortQuestCategoryDescriptor::Icon");
static_assert(offsetof(FFortQuestCategoryDescriptor, SortOrder) == 72, "Offset mismatch for FFortQuestCategoryDescriptor::SortOrder");
static_assert(offsetof(FFortQuestCategoryDescriptor, ParentCategoryId) == 80, "Offset mismatch for FFortQuestCategoryDescriptor::ParentCategoryId");

// /Script/QuestFrameworkFortniteRuntime.FortQuestCategoryRegistry
// Kind: Class; super: Info
class UFortQuestCategoryRegistry
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> Categories; // 0x0270 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortQuestCategoryRegistry, Categories) == 624, "Offset mismatch for UFortQuestCategoryRegistry::Categories");

// /Script/QuestFrameworkFortniteRuntime.FortQuestCategoryRegistrySubsystem
// Kind: Class; super: WorldSubsystem
class UFortQuestCategoryRegistrySubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Registry; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortQuestCategoryRegistrySubsystem, Registry) == 56, "Offset mismatch for UFortQuestCategoryRegistrySubsystem::Registry");
