/**
 * decamp dumper generated SDK
 * Package: /Script/CosmeticsFrameworkEvents
 */
#pragma once
#include "Basic.h"

// /Script/CosmeticsFrameworkEvents.CosmeticsEventHandle
// Kind: ScriptStruct; super: none
struct FCosmeticsEventHandle
{
public:
    std::uint64_t ID; // 0x0000 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FCosmeticsEventHandle, ID) == 0, "Offset mismatch for FCosmeticsEventHandle::ID");

// /Script/CosmeticsFrameworkEvents.CosmeticsEventRegistrar
// Kind: Class; super: Interface
class UCosmeticsEventRegistrar
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkEvents.CosmeticsFinishable
// Kind: Class; super: Interface
class UCosmeticsFinishable
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkEvents.CosmeticsMeshTarget
// Kind: Class; super: Interface
class UCosmeticsMeshTarget
{
public:
    std::uint8_t Opaque[1];
};
