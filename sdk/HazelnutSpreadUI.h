/**
 * decamp dumper generated SDK
 * Package: /Script/HazelnutSpreadUI
 */
#pragma once
#include "Basic.h"

// /Script/HazelnutSpreadUI.HazelnutSpreadDuelVM
// Kind: Class; super: FortPerUserViewModel
class UHazelnutSpreadDuelVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::int32_t CurrencyDelta; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x70]; // 0x007C
    TWeakObjectPtr<void> LocalPlayerState; // 0x00EC (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UHazelnutSpreadDuelVM, CurrencyDelta) == 120, "Offset mismatch for UHazelnutSpreadDuelVM::CurrencyDelta");
static_assert(offsetof(UHazelnutSpreadDuelVM, LocalPlayerState) == 236, "Offset mismatch for UHazelnutSpreadDuelVM::LocalPlayerState");

// /Script/HazelnutSpreadUI.HazelnutSpreadLocalPlayerVM
// Kind: Class; super: HazelnutSpreadParticipantVM
class UHazelnutSpreadLocalPlayerVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TWeakObjectPtr<void> ParticipantPlayerState; // 0x0078 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UHazelnutSpreadLocalPlayerVM, ParticipantPlayerState) == 120, "Offset mismatch for UHazelnutSpreadLocalPlayerVM::ParticipantPlayerState");

// /Script/HazelnutSpreadUI.HazelnutSpreadParticipantVM
// Kind: Class; super: FortPerUserViewModel
class UHazelnutSpreadParticipantVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TWeakObjectPtr<void> ParticipantPlayerState; // 0x0078 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UHazelnutSpreadParticipantVM, ParticipantPlayerState) == 120, "Offset mismatch for UHazelnutSpreadParticipantVM::ParticipantPlayerState");

// /Script/HazelnutSpreadUI.HazelnutSpreadPrimaryHunterVM
// Kind: Class; super: HazelnutSpreadParticipantVM
class UHazelnutSpreadPrimaryHunterVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TWeakObjectPtr<void> ParticipantPlayerState; // 0x0078 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UHazelnutSpreadPrimaryHunterVM, ParticipantPlayerState) == 120, "Offset mismatch for UHazelnutSpreadPrimaryHunterVM::ParticipantPlayerState");

// /Script/HazelnutSpreadUI.HazelnutSpreadTargetVM
// Kind: Class; super: HazelnutSpreadParticipantVM
class UHazelnutSpreadTargetVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TWeakObjectPtr<void> ParticipantPlayerState; // 0x0078 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UHazelnutSpreadTargetVM, ParticipantPlayerState) == 120, "Offset mismatch for UHazelnutSpreadTargetVM::ParticipantPlayerState");
