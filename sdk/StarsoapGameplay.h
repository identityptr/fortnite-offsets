/**
 * decamp dumper generated SDK
 * Package: /Script/StarsoapGameplay
 */
#pragma once
#include "Basic.h"

// /Script/StarsoapGameplay.StarsoapTargetData
// Kind: ScriptStruct; super: none
struct FStarsoapTargetData
{
public:
    TWeakObjectPtr<void> TargetPlayer; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bIsEliminated; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::uint8_t EventType[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStarsoapTargetData, TargetPlayer) == 0, "Offset mismatch for FStarsoapTargetData::TargetPlayer");
static_assert(offsetof(FStarsoapTargetData, bIsEliminated) == 8, "Offset mismatch for FStarsoapTargetData::bIsEliminated");
static_assert(offsetof(FStarsoapTargetData, EventType) == 12, "Offset mismatch for FStarsoapTargetData::EventType");

// /Script/StarsoapGameplay.StarsoapProximityChatViewModel
// Kind: Class; super: FortPerUserViewModel
class UStarsoapProximityChatViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t InAreaTag[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UStarsoapProximityChatViewModel, InAreaTag) == 120, "Offset mismatch for UStarsoapProximityChatViewModel::InAreaTag");

// /Script/StarsoapGameplay.StarsoapTargetPlayerViewModel
// Kind: Class; super: FortPerUserViewModel
class UStarsoapTargetPlayerViewModel
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* CachedAvatar; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsTargetActive; // 0x0098 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UStarsoapTargetPlayerViewModel, CachedAvatar) == 144, "Offset mismatch for UStarsoapTargetPlayerViewModel::CachedAvatar");
static_assert(offsetof(UStarsoapTargetPlayerViewModel, bIsTargetActive) == 152, "Offset mismatch for UStarsoapTargetPlayerViewModel::bIsTargetActive");
