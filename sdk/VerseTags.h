/**
 * decamp dumper generated SDK
 * Package: /Script/VerseTags
 */
#pragma once
#include "Basic.h"

// /Script/VerseTags.TaggedObjectFinderEntry
// Kind: ScriptStruct; super: none
struct FTaggedObjectFinderEntry
{
public:
    std::uint8_t RequiredTags[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t PreferredTags[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ExclusionTags[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTaggedObjectFinderEntry, RequiredTags) == 0, "Offset mismatch for FTaggedObjectFinderEntry::RequiredTags");
static_assert(offsetof(FTaggedObjectFinderEntry, PreferredTags) == 16, "Offset mismatch for FTaggedObjectFinderEntry::PreferredTags");
static_assert(offsetof(FTaggedObjectFinderEntry, ExclusionTags) == 32, "Offset mismatch for FTaggedObjectFinderEntry::ExclusionTags");

// /Script/VerseTags.VerseTagInstanceContainer
// Kind: ScriptStruct; super: none
struct FVerseTagInstanceContainer
{
public:
    TMap<void*, void*> InternalTags; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FVerseTagInstanceContainer, InternalTags) == 0, "Offset mismatch for FVerseTagInstanceContainer::InternalTags");

// /Script/VerseTags.VerseTagTypeInfo
// Kind: ScriptStruct; super: none
struct FVerseTagTypeInfo
{
public:
    void* InternalTag; // 0x0000 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FVerseTagTypeInfo, InternalTag) == 0, "Offset mismatch for FVerseTagTypeInfo::InternalTag");

// /Script/VerseTags.VerseTagTypeInfoContainer
// Kind: ScriptStruct; super: none
struct FVerseTagTypeInfoContainer
{
public:
    TArray<void*> InternalTags; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVerseTagTypeInfoContainer, InternalTags) == 0, "Offset mismatch for FVerseTagTypeInfoContainer::InternalTags");

// /Script/VerseTags.TagRegistrationHandler
// Kind: Class; super: Object
class UTagRegistrationHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseTags.TaggedObjectQueryWorldSubsystemBase
// Kind: Class; super: WorldSubsystem
class UTaggedObjectQueryWorldSubsystemBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseTags.VerseTagAssetInterface
// Kind: Class; super: Interface
class UVerseTagAssetInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseTags.VerseTagBase
// Kind: Class; super: Object
class UVerseTagBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseTags.VerseTagContainerBase
// Kind: Class; super: Object
class UVerseTagContainerBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseTags.VerseTagMarkupComponent
// Kind: Class; super: ActorComponent
class UVerseTagMarkupComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t InternalTags[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVerseTagMarkupComponent, InternalTags) == 200, "Offset mismatch for UVerseTagMarkupComponent::InternalTags");
