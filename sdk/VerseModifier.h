/**
 * decamp dumper generated SDK
 * Package: /Script/VerseModifier
 */
#pragma once
#include "Basic.h"

// /Script/VerseModifier.VerseModifierImplInterface
// Kind: Class; super: Interface
class UVerseModifierImplInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseModifier.VerseModifierStackBaseInternal
// Kind: Class; super: Object
class UVerseModifierStackBaseInternal
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ImplClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    void* Impl; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVerseModifierStackBaseInternal, ImplClass) == 40, "Offset mismatch for UVerseModifierStackBaseInternal::ImplClass");
static_assert(offsetof(UVerseModifierStackBaseInternal, Impl) == 48, "Offset mismatch for UVerseModifierStackBaseInternal::Impl");

// /Script/VerseModifier.VerseModifierStackImpl
// Kind: Class; super: Object
class UVerseModifierStackImpl
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ReplicatedEntries; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVerseModifierStackImpl, ReplicatedEntries) == 40, "Offset mismatch for UVerseModifierStackImpl::ReplicatedEntries");
