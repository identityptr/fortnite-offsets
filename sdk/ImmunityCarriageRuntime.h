/**
 * decamp dumper generated SDK
 * Package: /Script/ImmunityCarriageRuntime
 */
#pragma once
#include "Basic.h"

// /Script/ImmunityCarriageRuntime.FortAthenaMutator_ImmunityCarriage
// Kind: Class; super: FortAthenaMutator_GameModeBase
class UFortAthenaMutator_ImmunityCarriage
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    std::uint8_t ReviveInProgressTag[0x1]; // 0x0400 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaMutator_ImmunityCarriage, ReviveInProgressTag) == 1024, "Offset mismatch for UFortAthenaMutator_ImmunityCarriage::ReviveInProgressTag");

// /Script/ImmunityCarriageRuntime.FortAthenaVehicleSpawner_ImmunityCarriage
// Kind: Class; super: FortAthenaVehicleSpawner
class UFortAthenaVehicleSpawner_ImmunityCarriage
{
public:
    std::uint8_t Pad_0000[0x308]; // 0x0000
    std::uint8_t DrivableChance[0x28]; // 0x0308 (Size: 0x28, Type: StructProperty)
    std::uint8_t StaticFortVehicleItemDef[0x20]; // 0x0330 (Size: 0x20, Type: SoftObjectProperty)
    void* CachedStaticFortVehicleItemDef; // 0x0350 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsStaticVehicleItemDefCached; // 0x0358 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaVehicleSpawner_ImmunityCarriage, DrivableChance) == 776, "Offset mismatch for UFortAthenaVehicleSpawner_ImmunityCarriage::DrivableChance");
static_assert(offsetof(UFortAthenaVehicleSpawner_ImmunityCarriage, StaticFortVehicleItemDef) == 816, "Offset mismatch for UFortAthenaVehicleSpawner_ImmunityCarriage::StaticFortVehicleItemDef");
static_assert(offsetof(UFortAthenaVehicleSpawner_ImmunityCarriage, CachedStaticFortVehicleItemDef) == 848, "Offset mismatch for UFortAthenaVehicleSpawner_ImmunityCarriage::CachedStaticFortVehicleItemDef");
static_assert(offsetof(UFortAthenaVehicleSpawner_ImmunityCarriage, bIsStaticVehicleItemDefCached) == 856, "Offset mismatch for UFortAthenaVehicleSpawner_ImmunityCarriage::bIsStaticVehicleItemDefCached");

// /Script/ImmunityCarriageRuntime.ImmunityCarriageFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UImmunityCarriageFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ImmunityCarriageRuntime.ImmunityCarriageWorldSubsystem
// Kind: Class; super: WorldSubsystem
class UImmunityCarriageWorldSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> PendingSpawners; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DrivableChance[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UImmunityCarriageWorldSubsystem, PendingSpawners) == 56, "Offset mismatch for UImmunityCarriageWorldSubsystem::PendingSpawners");
static_assert(offsetof(UImmunityCarriageWorldSubsystem, DrivableChance) == 72, "Offset mismatch for UImmunityCarriageWorldSubsystem::DrivableChance");

// /Script/ImmunityCarriageRuntime.ImmunityCarriage_InteractionComponent
// Kind: Class; super: ActorComponent
class UImmunityCarriage_InteractionComponent
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t bAllowInteract; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x27]; // 0x00D9
    FMulticastInlineDelegate OnPlayerPawnResurrected; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnResurrectionStarted; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnResurrectionCompleted; // 0x0120 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBeginCooldown; // 0x0130 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEndCooldown; // 0x0140 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSpawnMachineStateChanged; // 0x0150 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBeginLongUse; // 0x0160 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnInterruptLongUse; // 0x0170 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSafeZoneStatusChangedEvent; // 0x0180 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* SecondContextOverrideWidget; // 0x0190 (Size: 0x8, Type: ClassProperty)
    void* InitiatingPlayer; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    void* ResurrectLocation; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PlayerIdsForResurrection; // 0x01A8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> InstigatorPC; // 0x01B8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t DynamicInteractionOptions[0x20]; // 0x01C0 (Size: 0x20, Type: StructProperty)
    std::uint8_t ActiveDynamicInteractionOptions[0x20]; // 0x01E0 (Size: 0x20, Type: StructProperty)
    void* InteractSoundCueLoop; // 0x0200 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DescriptiveInformationText[0x10]; // 0x0208 (Size: 0x10, Type: TextProperty)
    std::uint8_t RebootSquadText[0x10]; // 0x0218 (Size: 0x10, Type: TextProperty)
    std::uint8_t RebootingText[0x10]; // 0x0228 (Size: 0x10, Type: TextProperty)
    std::uint8_t RechargingText[0x10]; // 0x0238 (Size: 0x10, Type: TextProperty)
    std::uint8_t RebootSquadMembersText[0x10]; // 0x0248 (Size: 0x10, Type: TextProperty)
    std::uint8_t RebootSquadMembersTextFormat[0x10]; // 0x0258 (Size: 0x10, Type: TextProperty)
    std::uint8_t BuySquadRebootText[0x10]; // 0x0268 (Size: 0x10, Type: TextProperty)
    std::uint8_t NotEnoughResoucesText[0x10]; // 0x0278 (Size: 0x10, Type: TextProperty)
    std::uint8_t NotEnoughResoucesForFullSquadText[0x10]; // 0x0288 (Size: 0x10, Type: TextProperty)
    std::uint8_t NotEnabledForPlayerText[0x10]; // 0x0298 (Size: 0x10, Type: TextProperty)
    std::uint8_t VanInUseText[0x10]; // 0x02A8 (Size: 0x10, Type: TextProperty)
    std::uint8_t TeamStartedRebootText[0x10]; // 0x02B8 (Size: 0x10, Type: TextProperty)
    std::uint8_t RebootInteractTime[0x2C]; // 0x02C8 (Size: 0x2C, Type: StructProperty)
    std::uint8_t BuyRebootCardInteractSuccessPlayerGameplayCueTag[0x4]; // 0x02F4 (Size: 0x4, Type: StructProperty)
    std::uint8_t BuyRebootCardInteractSuccessGameplayCueTag[0x4]; // 0x02F8 (Size: 0x4, Type: StructProperty)
    std::uint8_t EndCue[0x4]; // 0x02FC (Size: 0x4, Type: StructProperty)
    std::uint8_t ResurrectionMaxHeight[0x28]; // 0x0300 (Size: 0x28, Type: StructProperty)
    std::uint8_t ResurrectionHeightOffset[0x28]; // 0x0328 (Size: 0x28, Type: StructProperty)
    std::uint8_t ResurrectionStartDelay[0x28]; // 0x0350 (Size: 0x28, Type: StructProperty)
    std::uint8_t ResurrectionNextPlayerDelay[0x28]; // 0x0378 (Size: 0x28, Type: StructProperty)
    std::uint8_t CooldownLengthRow[0x28]; // 0x03A0 (Size: 0x28, Type: StructProperty)
    float DelayBeforeCooldown; // 0x03C8 (Size: 0x4, Type: FloatProperty)
    float DelayBeforeSkydiveCheck; // 0x03CC (Size: 0x4, Type: FloatProperty)
    float HeightCheckForSkydive; // 0x03D0 (Size: 0x4, Type: FloatProperty)
    std::int32_t HandleIntoGameState; // 0x03D4 (Size: 0x4, Type: IntProperty)
    std::uint8_t SpawnMachineState; // 0x03D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ActiveTeam; // 0x03D9 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bIsLocallyBeingInteractedWith; // 0x03DA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInsideSafeZone; // 0x03DB (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsBuyingRebootCardsEnabledOverride[0xC]; // 0x03DC (Size: 0xC, Type: DelegateProperty)
    std::uint8_t CanPlayerAffordRebootCardsOverride[0xC]; // 0x03E8 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t GetCurrencyItemDefinitionOverride[0xC]; // 0x03F4 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t GetRebootCardCostOverride[0xC]; // 0x0400 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t CanBuyExpiredRebootCardsOverride[0xC]; // 0x040C (Size: 0xC, Type: DelegateProperty)
    FMulticastInlineDelegate OnSpawnMachineLinkedToRebootComponent; // 0x0418 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerPaidForRebootCards; // 0x0428 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t GetCooldownLengthOverride[0xC]; // 0x0438 (Size: 0xC, Type: DelegateProperty)
    FScriptDelegate GetNotEnoughResourcesTextOverride; // 0x0444 (Size: 0x10, Type: DelegateProperty)
};

static_assert(offsetof(UImmunityCarriage_InteractionComponent, bAllowInteract) == 216, "Offset mismatch for UImmunityCarriage_InteractionComponent::bAllowInteract");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, OnPlayerPawnResurrected) == 256, "Offset mismatch for UImmunityCarriage_InteractionComponent::OnPlayerPawnResurrected");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, OnResurrectionStarted) == 272, "Offset mismatch for UImmunityCarriage_InteractionComponent::OnResurrectionStarted");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, OnResurrectionCompleted) == 288, "Offset mismatch for UImmunityCarriage_InteractionComponent::OnResurrectionCompleted");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, OnBeginCooldown) == 304, "Offset mismatch for UImmunityCarriage_InteractionComponent::OnBeginCooldown");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, OnEndCooldown) == 320, "Offset mismatch for UImmunityCarriage_InteractionComponent::OnEndCooldown");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, OnSpawnMachineStateChanged) == 336, "Offset mismatch for UImmunityCarriage_InteractionComponent::OnSpawnMachineStateChanged");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, OnBeginLongUse) == 352, "Offset mismatch for UImmunityCarriage_InteractionComponent::OnBeginLongUse");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, OnInterruptLongUse) == 368, "Offset mismatch for UImmunityCarriage_InteractionComponent::OnInterruptLongUse");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, OnSafeZoneStatusChangedEvent) == 384, "Offset mismatch for UImmunityCarriage_InteractionComponent::OnSafeZoneStatusChangedEvent");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, SecondContextOverrideWidget) == 400, "Offset mismatch for UImmunityCarriage_InteractionComponent::SecondContextOverrideWidget");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, InitiatingPlayer) == 408, "Offset mismatch for UImmunityCarriage_InteractionComponent::InitiatingPlayer");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, ResurrectLocation) == 416, "Offset mismatch for UImmunityCarriage_InteractionComponent::ResurrectLocation");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, PlayerIdsForResurrection) == 424, "Offset mismatch for UImmunityCarriage_InteractionComponent::PlayerIdsForResurrection");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, InstigatorPC) == 440, "Offset mismatch for UImmunityCarriage_InteractionComponent::InstigatorPC");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, DynamicInteractionOptions) == 448, "Offset mismatch for UImmunityCarriage_InteractionComponent::DynamicInteractionOptions");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, ActiveDynamicInteractionOptions) == 480, "Offset mismatch for UImmunityCarriage_InteractionComponent::ActiveDynamicInteractionOptions");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, InteractSoundCueLoop) == 512, "Offset mismatch for UImmunityCarriage_InteractionComponent::InteractSoundCueLoop");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, DescriptiveInformationText) == 520, "Offset mismatch for UImmunityCarriage_InteractionComponent::DescriptiveInformationText");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, RebootSquadText) == 536, "Offset mismatch for UImmunityCarriage_InteractionComponent::RebootSquadText");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, RebootingText) == 552, "Offset mismatch for UImmunityCarriage_InteractionComponent::RebootingText");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, RechargingText) == 568, "Offset mismatch for UImmunityCarriage_InteractionComponent::RechargingText");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, RebootSquadMembersText) == 584, "Offset mismatch for UImmunityCarriage_InteractionComponent::RebootSquadMembersText");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, RebootSquadMembersTextFormat) == 600, "Offset mismatch for UImmunityCarriage_InteractionComponent::RebootSquadMembersTextFormat");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, BuySquadRebootText) == 616, "Offset mismatch for UImmunityCarriage_InteractionComponent::BuySquadRebootText");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, NotEnoughResoucesText) == 632, "Offset mismatch for UImmunityCarriage_InteractionComponent::NotEnoughResoucesText");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, NotEnoughResoucesForFullSquadText) == 648, "Offset mismatch for UImmunityCarriage_InteractionComponent::NotEnoughResoucesForFullSquadText");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, NotEnabledForPlayerText) == 664, "Offset mismatch for UImmunityCarriage_InteractionComponent::NotEnabledForPlayerText");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, VanInUseText) == 680, "Offset mismatch for UImmunityCarriage_InteractionComponent::VanInUseText");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, TeamStartedRebootText) == 696, "Offset mismatch for UImmunityCarriage_InteractionComponent::TeamStartedRebootText");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, RebootInteractTime) == 712, "Offset mismatch for UImmunityCarriage_InteractionComponent::RebootInteractTime");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, BuyRebootCardInteractSuccessPlayerGameplayCueTag) == 756, "Offset mismatch for UImmunityCarriage_InteractionComponent::BuyRebootCardInteractSuccessPlayerGameplayCueTag");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, BuyRebootCardInteractSuccessGameplayCueTag) == 760, "Offset mismatch for UImmunityCarriage_InteractionComponent::BuyRebootCardInteractSuccessGameplayCueTag");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, EndCue) == 764, "Offset mismatch for UImmunityCarriage_InteractionComponent::EndCue");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, ResurrectionMaxHeight) == 768, "Offset mismatch for UImmunityCarriage_InteractionComponent::ResurrectionMaxHeight");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, ResurrectionHeightOffset) == 808, "Offset mismatch for UImmunityCarriage_InteractionComponent::ResurrectionHeightOffset");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, ResurrectionStartDelay) == 848, "Offset mismatch for UImmunityCarriage_InteractionComponent::ResurrectionStartDelay");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, ResurrectionNextPlayerDelay) == 888, "Offset mismatch for UImmunityCarriage_InteractionComponent::ResurrectionNextPlayerDelay");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, CooldownLengthRow) == 928, "Offset mismatch for UImmunityCarriage_InteractionComponent::CooldownLengthRow");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, DelayBeforeCooldown) == 968, "Offset mismatch for UImmunityCarriage_InteractionComponent::DelayBeforeCooldown");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, DelayBeforeSkydiveCheck) == 972, "Offset mismatch for UImmunityCarriage_InteractionComponent::DelayBeforeSkydiveCheck");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, HeightCheckForSkydive) == 976, "Offset mismatch for UImmunityCarriage_InteractionComponent::HeightCheckForSkydive");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, HandleIntoGameState) == 980, "Offset mismatch for UImmunityCarriage_InteractionComponent::HandleIntoGameState");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, SpawnMachineState) == 984, "Offset mismatch for UImmunityCarriage_InteractionComponent::SpawnMachineState");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, ActiveTeam) == 985, "Offset mismatch for UImmunityCarriage_InteractionComponent::ActiveTeam");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, bIsLocallyBeingInteractedWith) == 986, "Offset mismatch for UImmunityCarriage_InteractionComponent::bIsLocallyBeingInteractedWith");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, bIsInsideSafeZone) == 987, "Offset mismatch for UImmunityCarriage_InteractionComponent::bIsInsideSafeZone");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, IsBuyingRebootCardsEnabledOverride) == 988, "Offset mismatch for UImmunityCarriage_InteractionComponent::IsBuyingRebootCardsEnabledOverride");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, CanPlayerAffordRebootCardsOverride) == 1000, "Offset mismatch for UImmunityCarriage_InteractionComponent::CanPlayerAffordRebootCardsOverride");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, GetCurrencyItemDefinitionOverride) == 1012, "Offset mismatch for UImmunityCarriage_InteractionComponent::GetCurrencyItemDefinitionOverride");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, GetRebootCardCostOverride) == 1024, "Offset mismatch for UImmunityCarriage_InteractionComponent::GetRebootCardCostOverride");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, CanBuyExpiredRebootCardsOverride) == 1036, "Offset mismatch for UImmunityCarriage_InteractionComponent::CanBuyExpiredRebootCardsOverride");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, OnSpawnMachineLinkedToRebootComponent) == 1048, "Offset mismatch for UImmunityCarriage_InteractionComponent::OnSpawnMachineLinkedToRebootComponent");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, OnPlayerPaidForRebootCards) == 1064, "Offset mismatch for UImmunityCarriage_InteractionComponent::OnPlayerPaidForRebootCards");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, GetCooldownLengthOverride) == 1080, "Offset mismatch for UImmunityCarriage_InteractionComponent::GetCooldownLengthOverride");
static_assert(offsetof(UImmunityCarriage_InteractionComponent, GetNotEnoughResourcesTextOverride) == 1092, "Offset mismatch for UImmunityCarriage_InteractionComponent::GetNotEnoughResourcesTextOverride");

// /Script/ImmunityCarriageRuntime.ImmunityCarriage_PawnResurrectionInterface
// Kind: Class; super: Interface
class UImmunityCarriage_PawnResurrectionInterface
{
public:
    std::uint8_t Opaque[1];
};
