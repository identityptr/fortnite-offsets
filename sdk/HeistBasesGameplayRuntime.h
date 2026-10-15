/**
 * decamp dumper generated SDK
 * Package: /Script/HeistBasesGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/HeistBasesGameplayRuntime.FortHeistDisplayCaseItemDataTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FFortHeistDisplayCaseItemDataTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* WorldItemDefinition; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortHeistDisplayCaseItemDataTableRow, WorldItemDefinition) == 8, "Offset mismatch for FFortHeistDisplayCaseItemDataTableRow::WorldItemDefinition");

// /Script/HeistBasesGameplayRuntime.FortGameStateComponent_HeistDisplayCaseItemManager
// Kind: Class; super: FortGameStateComponent
class UFortGameStateComponent_HeistDisplayCaseItemManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnDisplayCaseItemManagerReady; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> AllDisplayCaseItems; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortGameStateComponent_HeistDisplayCaseItemManager, OnDisplayCaseItemManagerReady) == 192, "Offset mismatch for UFortGameStateComponent_HeistDisplayCaseItemManager::OnDisplayCaseItemManagerReady");
static_assert(offsetof(UFortGameStateComponent_HeistDisplayCaseItemManager, AllDisplayCaseItems) == 208, "Offset mismatch for UFortGameStateComponent_HeistDisplayCaseItemManager::AllDisplayCaseItems");

// /Script/HeistBasesGameplayRuntime.FortHeistDisplayCase
// Kind: Class; super: BuildingSMActor
class UFortHeistDisplayCase
{
public:
    std::uint8_t Pad_0000[0xAE0]; // 0x0000
    std::uint8_t bReplicateLongInteractionDetails; // 0x0AE0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bBlockMarking; // 0x0AE1 (Size: 0x1, Type: BoolProperty)
    // 0x0AE1 BoolProperty bCanBeMarked (shared storage)
    std::uint8_t Pad_0001[0x6]; // 0x0AE2
    std::uint8_t MarkerDisplay[0xB0]; // 0x0AE8 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MarkerPositionOffset[0x1]; // 0x0B98 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortHeistDisplayCase, bReplicateLongInteractionDetails) == 2784, "Offset mismatch for UFortHeistDisplayCase::bReplicateLongInteractionDetails");
static_assert(offsetof(UFortHeistDisplayCase, bBlockMarking) == 2785, "Offset mismatch for UFortHeistDisplayCase::bBlockMarking");
static_assert(offsetof(UFortHeistDisplayCase, MarkerDisplay) == 2792, "Offset mismatch for UFortHeistDisplayCase::MarkerDisplay");
static_assert(offsetof(UFortHeistDisplayCase, MarkerPositionOffset) == 2968, "Offset mismatch for UFortHeistDisplayCase::MarkerPositionOffset");
