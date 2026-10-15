/**
 * decamp dumper generated SDK
 * Package: /Script/GameplayReaction
 */
#pragma once
#include "Basic.h"

// /Script/GameplayReaction.GameplayReaction
// Kind: ScriptStruct; super: none
struct FGameplayReaction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayReaction.GameplayReactionContext
// Kind: ScriptStruct; super: none
struct FGameplayReactionContext
{
public:
    void* Instigator; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Target; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FGameplayReactionContext, Instigator) == 0, "Offset mismatch for FGameplayReactionContext::Instigator");
static_assert(offsetof(FGameplayReactionContext, Target) == 8, "Offset mismatch for FGameplayReactionContext::Target");

// /Script/GameplayReaction.VerseGameplayReaction
// Kind: Class; super: Object
class UVerseGameplayReaction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayReaction.VerseGameplayReactionContext
// Kind: Class; super: Object
class UVerseGameplayReactionContext
{
public:
    std::uint8_t Opaque[1];
};
