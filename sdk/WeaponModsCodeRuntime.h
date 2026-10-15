/**
 * decamp dumper generated SDK
 * Package: /Script/WeaponModsCodeRuntime
 */
#pragma once
#include "Basic.h"

// /Script/WeaponModsCodeRuntime.FortLocalModPurchaseEventParams
// Kind: ScriptStruct; super: none
struct FFortLocalModPurchaseEventParams
{
public:
    void* WeaponActor; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* WeaponMod; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortLocalModPurchaseEventParams, WeaponActor) == 0, "Offset mismatch for FFortLocalModPurchaseEventParams::WeaponActor");
static_assert(offsetof(FFortLocalModPurchaseEventParams, WeaponMod) == 8, "Offset mismatch for FFortLocalModPurchaseEventParams::WeaponMod");

// /Script/WeaponModsCodeRuntime.FortModSlotPurchaseList
// Kind: ScriptStruct; super: none
struct FFortModSlotPurchaseList
{
public:
    TArray<void*> Mods; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortModSlotPurchaseList, Mods) == 0, "Offset mismatch for FFortModSlotPurchaseList::Mods");

// /Script/WeaponModsCodeRuntime.FortModStationDataRow
// Kind: ScriptStruct; super: TableRowBase
struct FFortModStationDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* WeaponMod; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    float GoldCost; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortModStationDataRow, WeaponMod) == 8, "Offset mismatch for FFortModStationDataRow::WeaponMod");
static_assert(offsetof(FFortModStationDataRow, GoldCost) == 16, "Offset mismatch for FFortModStationDataRow::GoldCost");

// /Script/WeaponModsCodeRuntime.FortModStation_WeaponUICapture
// Kind: Class; super: Actor
class UFortModStation_WeaponUICapture
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t PSOPrecachingCheckMaxRetries; // 0x0270 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0271
    TWeakObjectPtr<void> MeshComponentPtr; // 0x0274 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortModStation_WeaponUICapture, PSOPrecachingCheckMaxRetries) == 624, "Offset mismatch for UFortModStation_WeaponUICapture::PSOPrecachingCheckMaxRetries");
static_assert(offsetof(UFortModStation_WeaponUICapture, MeshComponentPtr) == 628, "Offset mismatch for UFortModStation_WeaponUICapture::MeshComponentPtr");

// /Script/WeaponModsCodeRuntime.FortPickupInteractOverrideComponent_WeaponMods
// Kind: Class; super: FortPickupInteractOverrideComponent
class UFortPickupInteractOverrideComponent_WeaponMods
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::int32_t Priority; // 0x00C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    void* ContextOverrideWidget; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    void* SecondContextOverrideWidget; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bContextOverrideWidgetApplied; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRemoveContextOverrideWidgetsImmediately; // 0x00D9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortPickupInteractOverrideComponent_WeaponMods, Priority) == 192, "Offset mismatch for UFortPickupInteractOverrideComponent_WeaponMods::Priority");
static_assert(offsetof(UFortPickupInteractOverrideComponent_WeaponMods, ContextOverrideWidget) == 200, "Offset mismatch for UFortPickupInteractOverrideComponent_WeaponMods::ContextOverrideWidget");
static_assert(offsetof(UFortPickupInteractOverrideComponent_WeaponMods, SecondContextOverrideWidget) == 208, "Offset mismatch for UFortPickupInteractOverrideComponent_WeaponMods::SecondContextOverrideWidget");
static_assert(offsetof(UFortPickupInteractOverrideComponent_WeaponMods, bContextOverrideWidgetApplied) == 216, "Offset mismatch for UFortPickupInteractOverrideComponent_WeaponMods::bContextOverrideWidgetApplied");
static_assert(offsetof(UFortPickupInteractOverrideComponent_WeaponMods, bRemoveContextOverrideWidgetsImmediately) == 217, "Offset mismatch for UFortPickupInteractOverrideComponent_WeaponMods::bRemoveContextOverrideWidgetsImmediately");

// /Script/WeaponModsCodeRuntime.FortWeaponModManagementComponent
// Kind: Class; super: FortControllerComponent
class UFortWeaponModManagementComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnWeaponModSlotsChanged; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortWeaponModManagementComponent, OnWeaponModSlotsChanged) == 200, "Offset mismatch for UFortWeaponModManagementComponent::OnWeaponModSlotsChanged");

// /Script/WeaponModsCodeRuntime.FortWeaponModStationBase
// Kind: Class; super: BuildingProp
class UFortWeaponModStationBase
{
public:
    std::uint8_t Pad_0000[0xB18]; // 0x0000
    std::uint8_t MarkerDisplay[0xB0]; // 0x0B18 (Size: 0xB0, Type: StructProperty)
    std::uint8_t MarkerPositionOffset[0x18]; // 0x0BC8 (Size: 0x18, Type: StructProperty)
    FMulticastInlineDelegate OnForceEndInteractionDelegate; // 0x0BE0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UFortWeaponModStationBase, MarkerDisplay) == 2840, "Offset mismatch for UFortWeaponModStationBase::MarkerDisplay");
static_assert(offsetof(UFortWeaponModStationBase, MarkerPositionOffset) == 3016, "Offset mismatch for UFortWeaponModStationBase::MarkerPositionOffset");
static_assert(offsetof(UFortWeaponModStationBase, OnForceEndInteractionDelegate) == 3040, "Offset mismatch for UFortWeaponModStationBase::OnForceEndInteractionDelegate");

// /Script/WeaponModsCodeRuntime.FortWeaponModStationComponent
// Kind: Class; super: FortControllerComponent
class UFortWeaponModStationComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnLocalModPurchaseStarted; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStartInteractWithWorkbenchActor; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStopInteractWithWorkbenchActor; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* CurrentInteractingWeaponModStation; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ModStationHotfixEnabled[0x28]; // 0x0100 (Size: 0x28, Type: StructProperty)
    std::uint8_t RemoveModCost[0x28]; // 0x0128 (Size: 0x28, Type: StructProperty)
    std::uint8_t CancelInteractDistance[0x28]; // 0x0150 (Size: 0x28, Type: StructProperty)
    void* DefaultIronSightMod; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    void* DefaultMagazineMod; // 0x0180 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortWeaponModStationComponent, OnLocalModPurchaseStarted) == 200, "Offset mismatch for UFortWeaponModStationComponent::OnLocalModPurchaseStarted");
static_assert(offsetof(UFortWeaponModStationComponent, OnStartInteractWithWorkbenchActor) == 216, "Offset mismatch for UFortWeaponModStationComponent::OnStartInteractWithWorkbenchActor");
static_assert(offsetof(UFortWeaponModStationComponent, OnStopInteractWithWorkbenchActor) == 232, "Offset mismatch for UFortWeaponModStationComponent::OnStopInteractWithWorkbenchActor");
static_assert(offsetof(UFortWeaponModStationComponent, CurrentInteractingWeaponModStation) == 248, "Offset mismatch for UFortWeaponModStationComponent::CurrentInteractingWeaponModStation");
static_assert(offsetof(UFortWeaponModStationComponent, ModStationHotfixEnabled) == 256, "Offset mismatch for UFortWeaponModStationComponent::ModStationHotfixEnabled");
static_assert(offsetof(UFortWeaponModStationComponent, RemoveModCost) == 296, "Offset mismatch for UFortWeaponModStationComponent::RemoveModCost");
static_assert(offsetof(UFortWeaponModStationComponent, CancelInteractDistance) == 336, "Offset mismatch for UFortWeaponModStationComponent::CancelInteractDistance");
static_assert(offsetof(UFortWeaponModStationComponent, DefaultIronSightMod) == 376, "Offset mismatch for UFortWeaponModStationComponent::DefaultIronSightMod");
static_assert(offsetof(UFortWeaponModStationComponent, DefaultMagazineMod) == 384, "Offset mismatch for UFortWeaponModStationComponent::DefaultMagazineMod");

// /Script/WeaponModsCodeRuntime.FortWeaponModStationSharedDataComponent
// Kind: Class; super: FortGameStateComponent
class UFortWeaponModStationSharedDataComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* ModCostData; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> ModSlotPurchaseLists; // 0x00C8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ModCostMap; // 0x00D8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortWeaponModStationSharedDataComponent, ModCostData) == 192, "Offset mismatch for UFortWeaponModStationSharedDataComponent::ModCostData");
static_assert(offsetof(UFortWeaponModStationSharedDataComponent, ModSlotPurchaseLists) == 200, "Offset mismatch for UFortWeaponModStationSharedDataComponent::ModSlotPurchaseLists");
static_assert(offsetof(UFortWeaponModStationSharedDataComponent, ModCostMap) == 216, "Offset mismatch for UFortWeaponModStationSharedDataComponent::ModCostMap");
