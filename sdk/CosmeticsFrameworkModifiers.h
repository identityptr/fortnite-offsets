/**
 * decamp dumper generated SDK
 * Package: /Script/CosmeticsFrameworkModifiers
 */
#pragma once
#include "Basic.h"

// /Script/CosmeticsFrameworkModifiers.SoftModifierClassPtr
// Kind: ScriptStruct; super: none
struct FSoftModifierClassPtr
{
public:
    TSoftClassPtr<void> SoftClass; // 0x0000 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FSoftModifierClassPtr, SoftClass) == 0, "Offset mismatch for FSoftModifierClassPtr::SoftClass");

// /Script/CosmeticsFrameworkModifiers.CosmeticModifierInterface
// Kind: Class; super: Interface
class UCosmeticModifierInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkModifiers.CosmeticModifierOwnerInterface
// Kind: Class; super: Interface
class UCosmeticModifierOwnerInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkModifiers.CosmeticModifierProviderInterface
// Kind: Class; super: Interface
class UCosmeticModifierProviderInterface
{
public:
    std::uint8_t Opaque[1];
};
