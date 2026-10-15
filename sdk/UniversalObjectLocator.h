/**
 * decamp dumper generated SDK
 * Package: /Script/UniversalObjectLocator
 */
#pragma once
#include "Basic.h"

// /Script/UniversalObjectLocator.DirectPathObjectLocator
// Kind: ScriptStruct; super: none
struct FDirectPathObjectLocator
{
public:
    std::uint8_t Path[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDirectPathObjectLocator, Path) == 0, "Offset mismatch for FDirectPathObjectLocator::Path");

// /Script/UniversalObjectLocator.SubObjectLocator
// Kind: ScriptStruct; super: none
struct FSubObjectLocator
{
public:
    FString PathWithinContext; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FSubObjectLocator, PathWithinContext) == 0, "Offset mismatch for FSubObjectLocator::PathWithinContext");

// /Script/UniversalObjectLocator.UniversalObjectLocator
// Kind: ScriptStruct; super: none
struct FUniversalObjectLocator
{
public:
    TArray<void*> Fragments; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUniversalObjectLocator, Fragments) == 0, "Offset mismatch for FUniversalObjectLocator::Fragments");

// /Script/UniversalObjectLocator.UniversalObjectLocatorEmptyPayload
// Kind: ScriptStruct; super: none
struct FUniversalObjectLocatorEmptyPayload
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UniversalObjectLocator.UniversalObjectLocatorFragment
// Kind: ScriptStruct; super: none
struct FUniversalObjectLocatorFragment
{
public:
    std::uint8_t Opaque[1];
};
