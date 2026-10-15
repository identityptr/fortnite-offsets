/**
 * decamp dumper generated SDK
 * Package: /Script/VerseGameplayDebug
 */
#pragma once
#include "Basic.h"

// /Script/VerseGameplayDebug.VerseGameplayStringDebugMessage
// Kind: ScriptStruct; super: none
struct FVerseGameplayStringDebugMessage
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    FString String; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FVerseGameplayStringDebugMessage, Name) == 0, "Offset mismatch for FVerseGameplayStringDebugMessage::Name");
static_assert(offsetof(FVerseGameplayStringDebugMessage, String) == 8, "Offset mismatch for FVerseGameplayStringDebugMessage::String");
