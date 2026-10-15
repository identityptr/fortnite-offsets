/**
 * decamp dumper generated SDK
 * Package: /Script/InputPromptManagerUI
 */
#pragma once
#include "Basic.h"

// /Script/InputPromptManagerUI.ManagedInputPromptsVM
// Kind: Class; super: FortPerUserViewModel
class UManagedInputPromptsVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> AllKnownInputAliases; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UManagedInputPromptsVM, AllKnownInputAliases) == 120, "Offset mismatch for UManagedInputPromptsVM::AllKnownInputAliases");
