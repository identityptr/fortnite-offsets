/**
 * decamp dumper generated SDK
 * Package: /Script/FortniteCoreUI
 */
#pragma once
#include "Basic.h"

// /Script/FortniteCoreUI.FortEvent_FortniteCoreUIMatchStatsPanelActivationChanged
// Kind: ScriptStruct; super: none
struct FFortEvent_FortniteCoreUIMatchStatsPanelActivationChanged
{
public:
    std::uint8_t Activated; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortEvent_FortniteCoreUIMatchStatsPanelActivationChanged, Activated) == 0, "Offset mismatch for FFortEvent_FortniteCoreUIMatchStatsPanelActivationChanged::Activated");

// /Script/FortniteCoreUI.FortEvent_FortniteCoreUIPostMatchStartedShowingTabs
// Kind: ScriptStruct; super: none
struct FFortEvent_FortniteCoreUIPostMatchStartedShowingTabs
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteCoreUI.PostBufferUpdateViewModel
// Kind: Class; super: FortPerUserViewModel
class UPostBufferUpdateViewModel
{
public:
    std::uint8_t Opaque[1];
};
