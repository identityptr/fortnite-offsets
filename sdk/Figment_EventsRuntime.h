/**
 * decamp dumper generated SDK
 * Package: /Script/Figment_EventsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/Figment_EventsRuntime.FortFigmentEventsCleanupParams
// Kind: ScriptStruct; super: none
struct FFortFigmentEventsCleanupParams
{
public:
    std::uint8_t RespawnMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bForceExitVehicle; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceExitAircraft; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bResetInventory; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceRemoveAllExistingInventory; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReinitializeAbilities; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t HealthShieldMode; // 0x0006 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0007
    std::uint8_t EventTagsToSend[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    std::uint8_t LooseTagsToAdd[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t LooseTagsToRemove[0x20]; // 0x0048 (Size: 0x20, Type: StructProperty)
    TArray<void*> GameplayEffectsToApply; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCancelActiveEmotes; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortFigmentEventsCleanupParams, RespawnMode) == 0, "Offset mismatch for FFortFigmentEventsCleanupParams::RespawnMode");
static_assert(offsetof(FFortFigmentEventsCleanupParams, bForceExitVehicle) == 1, "Offset mismatch for FFortFigmentEventsCleanupParams::bForceExitVehicle");
static_assert(offsetof(FFortFigmentEventsCleanupParams, bForceExitAircraft) == 2, "Offset mismatch for FFortFigmentEventsCleanupParams::bForceExitAircraft");
static_assert(offsetof(FFortFigmentEventsCleanupParams, bResetInventory) == 3, "Offset mismatch for FFortFigmentEventsCleanupParams::bResetInventory");
static_assert(offsetof(FFortFigmentEventsCleanupParams, bForceRemoveAllExistingInventory) == 4, "Offset mismatch for FFortFigmentEventsCleanupParams::bForceRemoveAllExistingInventory");
static_assert(offsetof(FFortFigmentEventsCleanupParams, bReinitializeAbilities) == 5, "Offset mismatch for FFortFigmentEventsCleanupParams::bReinitializeAbilities");
static_assert(offsetof(FFortFigmentEventsCleanupParams, HealthShieldMode) == 6, "Offset mismatch for FFortFigmentEventsCleanupParams::HealthShieldMode");
static_assert(offsetof(FFortFigmentEventsCleanupParams, EventTagsToSend) == 8, "Offset mismatch for FFortFigmentEventsCleanupParams::EventTagsToSend");
static_assert(offsetof(FFortFigmentEventsCleanupParams, LooseTagsToAdd) == 40, "Offset mismatch for FFortFigmentEventsCleanupParams::LooseTagsToAdd");
static_assert(offsetof(FFortFigmentEventsCleanupParams, LooseTagsToRemove) == 72, "Offset mismatch for FFortFigmentEventsCleanupParams::LooseTagsToRemove");
static_assert(offsetof(FFortFigmentEventsCleanupParams, GameplayEffectsToApply) == 104, "Offset mismatch for FFortFigmentEventsCleanupParams::GameplayEffectsToApply");
static_assert(offsetof(FFortFigmentEventsCleanupParams, bCancelActiveEmotes) == 120, "Offset mismatch for FFortFigmentEventsCleanupParams::bCancelActiveEmotes");

// /Script/Figment_EventsRuntime.FortFigmentEventsGEData
// Kind: ScriptStruct; super: none
struct FFortFigmentEventsGEData
{
public:
    void* GameplayEffect; // 0x0000 (Size: 0x8, Type: ClassProperty)
    std::int32_t Level; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FFortFigmentEventsGEData, GameplayEffect) == 0, "Offset mismatch for FFortFigmentEventsGEData::GameplayEffect");
static_assert(offsetof(FFortFigmentEventsGEData, Level) == 8, "Offset mismatch for FFortFigmentEventsGEData::Level");

// /Script/Figment_EventsRuntime.FortAthenaMutator_FigmentEvents
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_FigmentEvents
{
public:
    std::uint8_t Pad_0000[0x2E0]; // 0x0000
    std::uint8_t UIToHideDuringSpecialEvent[0x20]; // 0x02E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t UIToHideDuringSpecialEvent_Mobile[0x20]; // 0x0300 (Size: 0x20, Type: StructProperty)
    std::uint8_t BotsEnabledHotfixOverride[0x28]; // 0x0320 (Size: 0x28, Type: StructProperty)
    FString BotsCalendarEvent; // 0x0348 (Size: 0x10, Type: StrProperty)
    std::uint8_t bBotsEnabledWhenCalendarActive; // 0x0358 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0359
    std::uint8_t BuildingBlockedHUDVisibilityTags[0x20]; // 0x0360 (Size: 0x20, Type: StructProperty)
    std::uint8_t bBuildingBlocked; // 0x0380 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGlobalEmoteBlock; // 0x0381 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0382
    std::uint8_t NamedWeightForContainerLootRoll[0x4]; // 0x0384 (Size: 0x4, Type: NameProperty)
    float WeightForContainerLootRoll; // 0x0388 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDisableSupplyDrops; // 0x038C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableHUD; // 0x038D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayersAreInvincible; // 0x038E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisablePlayerWeapons; // 0x038F (Size: 0x1, Type: BoolProperty)
    float PlayerInvincibilityCheckFrequency; // 0x0390 (Size: 0x4, Type: FloatProperty)
    float DisableWeaponsCheckFrequency; // 0x0394 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFortAthenaMutator_FigmentEvents, UIToHideDuringSpecialEvent) == 736, "Offset mismatch for UFortAthenaMutator_FigmentEvents::UIToHideDuringSpecialEvent");
static_assert(offsetof(UFortAthenaMutator_FigmentEvents, UIToHideDuringSpecialEvent_Mobile) == 768, "Offset mismatch for UFortAthenaMutator_FigmentEvents::UIToHideDuringSpecialEvent_Mobile");
static_assert(offsetof(UFortAthenaMutator_FigmentEvents, BotsEnabledHotfixOverride) == 800, "Offset mismatch for UFortAthenaMutator_FigmentEvents::BotsEnabledHotfixOverride");
static_assert(offsetof(UFortAthenaMutator_FigmentEvents, BotsCalendarEvent) == 840, "Offset mismatch for UFortAthenaMutator_FigmentEvents::BotsCalendarEvent");
static_assert(offsetof(UFortAthenaMutator_FigmentEvents, bBotsEnabledWhenCalendarActive) == 856, "Offset mismatch for UFortAthenaMutator_FigmentEvents::bBotsEnabledWhenCalendarActive");
static_assert(offsetof(UFortAthenaMutator_FigmentEvents, BuildingBlockedHUDVisibilityTags) == 864, "Offset mismatch for UFortAthenaMutator_FigmentEvents::BuildingBlockedHUDVisibilityTags");
static_assert(offsetof(UFortAthenaMutator_FigmentEvents, bBuildingBlocked) == 896, "Offset mismatch for UFortAthenaMutator_FigmentEvents::bBuildingBlocked");
static_assert(offsetof(UFortAthenaMutator_FigmentEvents, bGlobalEmoteBlock) == 897, "Offset mismatch for UFortAthenaMutator_FigmentEvents::bGlobalEmoteBlock");
static_assert(offsetof(UFortAthenaMutator_FigmentEvents, NamedWeightForContainerLootRoll) == 900, "Offset mismatch for UFortAthenaMutator_FigmentEvents::NamedWeightForContainerLootRoll");
static_assert(offsetof(UFortAthenaMutator_FigmentEvents, WeightForContainerLootRoll) == 904, "Offset mismatch for UFortAthenaMutator_FigmentEvents::WeightForContainerLootRoll");
static_assert(offsetof(UFortAthenaMutator_FigmentEvents, bDisableSupplyDrops) == 908, "Offset mismatch for UFortAthenaMutator_FigmentEvents::bDisableSupplyDrops");
static_assert(offsetof(UFortAthenaMutator_FigmentEvents, bDisableHUD) == 909, "Offset mismatch for UFortAthenaMutator_FigmentEvents::bDisableHUD");
static_assert(offsetof(UFortAthenaMutator_FigmentEvents, bPlayersAreInvincible) == 910, "Offset mismatch for UFortAthenaMutator_FigmentEvents::bPlayersAreInvincible");
static_assert(offsetof(UFortAthenaMutator_FigmentEvents, bDisablePlayerWeapons) == 911, "Offset mismatch for UFortAthenaMutator_FigmentEvents::bDisablePlayerWeapons");
static_assert(offsetof(UFortAthenaMutator_FigmentEvents, PlayerInvincibilityCheckFrequency) == 912, "Offset mismatch for UFortAthenaMutator_FigmentEvents::PlayerInvincibilityCheckFrequency");
static_assert(offsetof(UFortAthenaMutator_FigmentEvents, DisableWeaponsCheckFrequency) == 916, "Offset mismatch for UFortAthenaMutator_FigmentEvents::DisableWeaponsCheckFrequency");
