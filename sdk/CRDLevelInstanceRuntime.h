/**
 * decamp dumper generated SDK
 * Package: /Script/CRDLevelInstanceRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CRDLevelInstanceRuntime.FortAthenaMutator_LevelInstanceDevice
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_LevelInstanceDevice
{
public:
    std::uint8_t Pad_0000[0x2E8]; // 0x0000
    TWeakObjectPtr<void> CachedGameplayVolume; // 0x02E8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortAthenaMutator_LevelInstanceDevice, CachedGameplayVolume) == 744, "Offset mismatch for UFortAthenaMutator_LevelInstanceDevice::CachedGameplayVolume");

// /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume
// Kind: Class; super: GameplayVolume
class ULevelInstanceGameplayVolume
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    FMulticastInlineDelegate OnLevelInstanceResolved; // 0x0340 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x30]; // 0x0350
    FMulticastInlineDelegate OnDisabledStateChanged; // 0x0380 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLevelInstanceGuidChanged; // 0x0390 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLevelInstanceNameChanged; // 0x03A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLevelInstanceSizeChanged; // 0x03B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLevelInstanceContentCollectionChanged; // 0x03C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x1]; // 0x03D0
    std::uint8_t bEditMode; // 0x03D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisabled; // 0x03D2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LoadingState; // 0x03D3 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x4]; // 0x03D4
    FString LevelInstanceName; // 0x03D8 (Size: 0x10, Type: StrProperty)
    std::uint8_t bInstanceLoaded; // 0x03E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWantsLevelLoaded; // 0x03E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1]; // 0x03EA
    std::uint8_t bConvertStructuresToProps; // 0x03EB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x4]; // 0x03EC
    void* CachedMinigame; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
    void* MutatorListComponent; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
    void* ClassFilterComponent; // 0x0400 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> BlacklistedClasses; // 0x0408 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0006[0x10]; // 0x0418
    std::uint8_t LevelInstanceSaveActorGuid[0x10]; // 0x0428 (Size: 0x10, Type: StructProperty)
    void* LevelInstanceSaveActor; // 0x0438 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULevelInstanceGameplayVolume, OnLevelInstanceResolved) == 832, "Offset mismatch for ULevelInstanceGameplayVolume::OnLevelInstanceResolved");
static_assert(offsetof(ULevelInstanceGameplayVolume, OnDisabledStateChanged) == 896, "Offset mismatch for ULevelInstanceGameplayVolume::OnDisabledStateChanged");
static_assert(offsetof(ULevelInstanceGameplayVolume, OnLevelInstanceGuidChanged) == 912, "Offset mismatch for ULevelInstanceGameplayVolume::OnLevelInstanceGuidChanged");
static_assert(offsetof(ULevelInstanceGameplayVolume, OnLevelInstanceNameChanged) == 928, "Offset mismatch for ULevelInstanceGameplayVolume::OnLevelInstanceNameChanged");
static_assert(offsetof(ULevelInstanceGameplayVolume, OnLevelInstanceSizeChanged) == 944, "Offset mismatch for ULevelInstanceGameplayVolume::OnLevelInstanceSizeChanged");
static_assert(offsetof(ULevelInstanceGameplayVolume, OnLevelInstanceContentCollectionChanged) == 960, "Offset mismatch for ULevelInstanceGameplayVolume::OnLevelInstanceContentCollectionChanged");
static_assert(offsetof(ULevelInstanceGameplayVolume, bEditMode) == 977, "Offset mismatch for ULevelInstanceGameplayVolume::bEditMode");
static_assert(offsetof(ULevelInstanceGameplayVolume, bDisabled) == 978, "Offset mismatch for ULevelInstanceGameplayVolume::bDisabled");
static_assert(offsetof(ULevelInstanceGameplayVolume, LoadingState) == 979, "Offset mismatch for ULevelInstanceGameplayVolume::LoadingState");
static_assert(offsetof(ULevelInstanceGameplayVolume, LevelInstanceName) == 984, "Offset mismatch for ULevelInstanceGameplayVolume::LevelInstanceName");
static_assert(offsetof(ULevelInstanceGameplayVolume, bInstanceLoaded) == 1000, "Offset mismatch for ULevelInstanceGameplayVolume::bInstanceLoaded");
static_assert(offsetof(ULevelInstanceGameplayVolume, bWantsLevelLoaded) == 1001, "Offset mismatch for ULevelInstanceGameplayVolume::bWantsLevelLoaded");
static_assert(offsetof(ULevelInstanceGameplayVolume, bConvertStructuresToProps) == 1003, "Offset mismatch for ULevelInstanceGameplayVolume::bConvertStructuresToProps");
static_assert(offsetof(ULevelInstanceGameplayVolume, CachedMinigame) == 1008, "Offset mismatch for ULevelInstanceGameplayVolume::CachedMinigame");
static_assert(offsetof(ULevelInstanceGameplayVolume, MutatorListComponent) == 1016, "Offset mismatch for ULevelInstanceGameplayVolume::MutatorListComponent");
static_assert(offsetof(ULevelInstanceGameplayVolume, ClassFilterComponent) == 1024, "Offset mismatch for ULevelInstanceGameplayVolume::ClassFilterComponent");
static_assert(offsetof(ULevelInstanceGameplayVolume, BlacklistedClasses) == 1032, "Offset mismatch for ULevelInstanceGameplayVolume::BlacklistedClasses");
static_assert(offsetof(ULevelInstanceGameplayVolume, LevelInstanceSaveActorGuid) == 1064, "Offset mismatch for ULevelInstanceGameplayVolume::LevelInstanceSaveActorGuid");
static_assert(offsetof(ULevelInstanceGameplayVolume, LevelInstanceSaveActor) == 1080, "Offset mismatch for ULevelInstanceGameplayVolume::LevelInstanceSaveActor");

// /Script/CRDLevelInstanceRuntime.LevelInstanceItemListComponent
// Kind: Class; super: FortMinigameItemContainerComponent
class ULevelInstanceItemListComponent
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t bHideInActorDetails; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    std::uint8_t EmptyFilterTags[0x20]; // 0x00E8 (Size: 0x20, Type: StructProperty)
    std::uint8_t NonEmptyFilterTags[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULevelInstanceItemListComponent, bHideInActorDetails) == 224, "Offset mismatch for ULevelInstanceItemListComponent::bHideInActorDetails");
static_assert(offsetof(ULevelInstanceItemListComponent, EmptyFilterTags) == 232, "Offset mismatch for ULevelInstanceItemListComponent::EmptyFilterTags");
static_assert(offsetof(ULevelInstanceItemListComponent, NonEmptyFilterTags) == 264, "Offset mismatch for ULevelInstanceItemListComponent::NonEmptyFilterTags");
