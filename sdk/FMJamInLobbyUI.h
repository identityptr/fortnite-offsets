/**
 * decamp dumper generated SDK
 * Package: /Script/FMJamInLobbyUI
 */
#pragma once
#include "Basic.h"

// /Script/FMJamInLobbyUI.JamInLobbyOpenGlobalControlsSubsystem
// Kind: Class; super: FortLocalPlayerSubsystem
class UJamInLobbyOpenGlobalControlsSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t InputAction[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    TWeakObjectPtr<void> LocalPlayerPlayspace; // 0x0040 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJamInLobbyOpenGlobalControlsSubsystem, InputAction) == 48, "Offset mismatch for UJamInLobbyOpenGlobalControlsSubsystem::InputAction");
static_assert(offsetof(UJamInLobbyOpenGlobalControlsSubsystem, LocalPlayerPlayspace) == 64, "Offset mismatch for UJamInLobbyOpenGlobalControlsSubsystem::LocalPlayerPlayspace");
