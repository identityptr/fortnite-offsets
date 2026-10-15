/**
 * decamp dumper generated SDK
 * Package: /Script/CreativeCompanionRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CreativeCompanionRuntime.FortAdditionalCompanionReactionTableMappings
// Kind: Class; super: DataAsset
class UFortAdditionalCompanionReactionTableMappings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ReactionSystemDiscriminator[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    TMap<void*, void*> AdditionalReactionTableMappings; // 0x0048 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortAdditionalCompanionReactionTableMappings, ReactionSystemDiscriminator) == 40, "Offset mismatch for UFortAdditionalCompanionReactionTableMappings::ReactionSystemDiscriminator");
static_assert(offsetof(UFortAdditionalCompanionReactionTableMappings, AdditionalReactionTableMappings) == 72, "Offset mismatch for UFortAdditionalCompanionReactionTableMappings::AdditionalReactionTableMappings");

// /Script/CreativeCompanionRuntime.FortGameFeatureAction_SetAdditionalCompanionReactionTables
// Kind: Class; super: GameFeatureAction
class UFortGameFeatureAction_SetAdditionalCompanionReactionTables
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSoftObjectPtr<void> ReactionTableMappings; // 0x0028 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UFortGameFeatureAction_SetAdditionalCompanionReactionTables, ReactionTableMappings) == 40, "Offset mismatch for UFortGameFeatureAction_SetAdditionalCompanionReactionTables::ReactionTableMappings");

// /Script/CreativeCompanionRuntime.FortUserOptionComponent_Sidekicks
// Kind: Class; super: FortUserOptionContainerComponent
class UFortUserOptionComponent_Sidekicks
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    std::uint8_t bSidekickReactionsEnabled; // 0x0150 (Size: 0x1, Type: BoolProperty)
    // 0x0150 BoolProperty bSidekicksEnabled (shared storage)
    std::uint8_t SidekickVisibility; // 0x0151 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0152
    std::uint8_t NavMeshTagToApply[0x4]; // 0x0154 (Size: 0x4, Type: NameProperty)
    std::uint8_t CompanionOptionsDisabledTag[0x4]; // 0x0158 (Size: 0x4, Type: StructProperty)
    std::uint8_t CompanionsDisabledTag[0x4]; // 0x015C (Size: 0x4, Type: StructProperty)
    void* VolumeComponentClass; // 0x0160 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bDoesExperienceSupportCompanion; // 0x0168 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortUserOptionComponent_Sidekicks, bSidekickReactionsEnabled) == 336, "Offset mismatch for UFortUserOptionComponent_Sidekicks::bSidekickReactionsEnabled");
static_assert(offsetof(UFortUserOptionComponent_Sidekicks, SidekickVisibility) == 337, "Offset mismatch for UFortUserOptionComponent_Sidekicks::SidekickVisibility");
static_assert(offsetof(UFortUserOptionComponent_Sidekicks, NavMeshTagToApply) == 340, "Offset mismatch for UFortUserOptionComponent_Sidekicks::NavMeshTagToApply");
static_assert(offsetof(UFortUserOptionComponent_Sidekicks, CompanionOptionsDisabledTag) == 344, "Offset mismatch for UFortUserOptionComponent_Sidekicks::CompanionOptionsDisabledTag");
static_assert(offsetof(UFortUserOptionComponent_Sidekicks, CompanionsDisabledTag) == 348, "Offset mismatch for UFortUserOptionComponent_Sidekicks::CompanionsDisabledTag");
static_assert(offsetof(UFortUserOptionComponent_Sidekicks, VolumeComponentClass) == 352, "Offset mismatch for UFortUserOptionComponent_Sidekicks::VolumeComponentClass");
static_assert(offsetof(UFortUserOptionComponent_Sidekicks, bDoesExperienceSupportCompanion) == 360, "Offset mismatch for UFortUserOptionComponent_Sidekicks::bDoesExperienceSupportCompanion");
