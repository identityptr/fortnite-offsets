/**
 * decamp dumper generated SDK
 * Package: /Game/UI/Foundation/Environment/Cameras/TVPostProcessBP
 */
#pragma once
#include "Basic.h"

// /Game/UI/Foundation/Environment/Cameras/TVPostProcessBP.TVPostProcessBP_C
// Kind: BlueprintGeneratedClass; super: Actor
class UTVPostProcessBP_C
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0270 (Size: 0x8, Type: StructProperty)
    void* Billboard; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* Root; // 0x0280 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTVPostProcessBP_C, UberGraphFrame) == 624, "Offset mismatch for UTVPostProcessBP_C::UberGraphFrame");
static_assert(offsetof(UTVPostProcessBP_C, Billboard) == 632, "Offset mismatch for UTVPostProcessBP_C::Billboard");
static_assert(offsetof(UTVPostProcessBP_C, Root) == 640, "Offset mismatch for UTVPostProcessBP_C::Root");
