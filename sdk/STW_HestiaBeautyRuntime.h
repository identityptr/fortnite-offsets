/**
 * decamp dumper generated SDK
 * Package: /Script/STW_HestiaBeautyRuntime
 */
#pragma once
#include "Basic.h"

// /Script/STW_HestiaBeautyRuntime.FortHestiaWeaponBoardDisplaySlot
// Kind: ScriptStruct; super: none
struct FFortHestiaWeaponBoardDisplaySlot
{
public:
    std::uint8_t RequiredTag[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t MeshRelativeTransform[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t LocalOffsetMultiplier[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortHestiaWeaponBoardDisplaySlot, RequiredTag) == 0, "Offset mismatch for FFortHestiaWeaponBoardDisplaySlot::RequiredTag");
static_assert(offsetof(FFortHestiaWeaponBoardDisplaySlot, MeshRelativeTransform) == 16, "Offset mismatch for FFortHestiaWeaponBoardDisplaySlot::MeshRelativeTransform");
static_assert(offsetof(FFortHestiaWeaponBoardDisplaySlot, LocalOffsetMultiplier) == 112, "Offset mismatch for FFortHestiaWeaponBoardDisplaySlot::LocalOffsetMultiplier");

// /Script/STW_HestiaBeautyRuntime.FortHestiaWeaponBoardDisplaySlotItem
// Kind: ScriptStruct; super: none
struct FFortHestiaWeaponBoardDisplaySlotItem
{
public:
    std::uint8_t DisplaySlot[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortHestiaWeaponBoardDisplaySlotItem, DisplaySlot) == 0, "Offset mismatch for FFortHestiaWeaponBoardDisplaySlotItem::DisplaySlot");

// /Script/STW_HestiaBeautyRuntime.FortHestiaWeaponBoardWeaponLists
// Kind: ScriptStruct; super: none
struct FFortHestiaWeaponBoardWeaponLists
{
public:
    TArray<void*> Ranged; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Melee; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortHestiaWeaponBoardWeaponLists, Ranged) == 0, "Offset mismatch for FFortHestiaWeaponBoardWeaponLists::Ranged");
static_assert(offsetof(FFortHestiaWeaponBoardWeaponLists, Melee) == 16, "Offset mismatch for FFortHestiaWeaponBoardWeaponLists::Melee");

// /Script/STW_HestiaBeautyRuntime.HestiaVariationMaterialEdits
// Kind: ScriptStruct; super: none
struct FHestiaVariationMaterialEdits
{
public:
    TMap<void*, void*> ParameterColorEdits; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FHestiaVariationMaterialEdits, ParameterColorEdits) == 0, "Offset mismatch for FHestiaVariationMaterialEdits::ParameterColorEdits");

// /Script/STW_HestiaBeautyRuntime.FortBackpackCounterComponent
// Kind: Class; super: ActorComponent
class UFortBackpackCounterComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnBackpackCounterChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t CurrentFilledInventorySlots; // 0x00D0 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentMaxInventorySlots; // 0x00D4 (Size: 0x4, Type: IntProperty)
    std::uint8_t CounterTemplate[0x10]; // 0x00D8 (Size: 0x10, Type: TextProperty)
    std::uint8_t FullInventoryTemplate[0x10]; // 0x00E8 (Size: 0x10, Type: TextProperty)
    TWeakObjectPtr<void> LocalPlayerController; // 0x00F8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortBackpackCounterComponent, OnBackpackCounterChanged) == 192, "Offset mismatch for UFortBackpackCounterComponent::OnBackpackCounterChanged");
static_assert(offsetof(UFortBackpackCounterComponent, CurrentFilledInventorySlots) == 208, "Offset mismatch for UFortBackpackCounterComponent::CurrentFilledInventorySlots");
static_assert(offsetof(UFortBackpackCounterComponent, CurrentMaxInventorySlots) == 212, "Offset mismatch for UFortBackpackCounterComponent::CurrentMaxInventorySlots");
static_assert(offsetof(UFortBackpackCounterComponent, CounterTemplate) == 216, "Offset mismatch for UFortBackpackCounterComponent::CounterTemplate");
static_assert(offsetof(UFortBackpackCounterComponent, FullInventoryTemplate) == 232, "Offset mismatch for UFortBackpackCounterComponent::FullInventoryTemplate");
static_assert(offsetof(UFortBackpackCounterComponent, LocalPlayerController) == 248, "Offset mismatch for UFortBackpackCounterComponent::LocalPlayerController");

// /Script/STW_HestiaBeautyRuntime.FortExpeditionMonitorsManager
// Kind: Class; super: Info
class UFortExpeditionMonitorsManager
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* OwnedByLocalHestiaPlayerComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MonitorActors; // 0x0278 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MaterialParameterNameIsMonitorOn[0x4]; // 0x0288 (Size: 0x4, Type: NameProperty)
    std::uint8_t MaterialParameterNameIsInProgress[0x4]; // 0x028C (Size: 0x4, Type: NameProperty)
    FName MaterialParameterNameExpeditionType; // 0x0290 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> VehicleToExpeditionTypeMaterialParameterMap; // 0x0298 (Size: 0x10, Type: MapProperty)
    TArray<void*> MonitorsMIDs; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> LocalPlayerController; // 0x02B8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortExpeditionMonitorsManager, OwnedByLocalHestiaPlayerComponent) == 624, "Offset mismatch for UFortExpeditionMonitorsManager::OwnedByLocalHestiaPlayerComponent");
static_assert(offsetof(UFortExpeditionMonitorsManager, MonitorActors) == 632, "Offset mismatch for UFortExpeditionMonitorsManager::MonitorActors");
static_assert(offsetof(UFortExpeditionMonitorsManager, MaterialParameterNameIsMonitorOn) == 648, "Offset mismatch for UFortExpeditionMonitorsManager::MaterialParameterNameIsMonitorOn");
static_assert(offsetof(UFortExpeditionMonitorsManager, MaterialParameterNameIsInProgress) == 652, "Offset mismatch for UFortExpeditionMonitorsManager::MaterialParameterNameIsInProgress");
static_assert(offsetof(UFortExpeditionMonitorsManager, MaterialParameterNameExpeditionType) == 656, "Offset mismatch for UFortExpeditionMonitorsManager::MaterialParameterNameExpeditionType");
static_assert(offsetof(UFortExpeditionMonitorsManager, VehicleToExpeditionTypeMaterialParameterMap) == 664, "Offset mismatch for UFortExpeditionMonitorsManager::VehicleToExpeditionTypeMaterialParameterMap");
static_assert(offsetof(UFortExpeditionMonitorsManager, MonitorsMIDs) == 680, "Offset mismatch for UFortExpeditionMonitorsManager::MonitorsMIDs");
static_assert(offsetof(UFortExpeditionMonitorsManager, LocalPlayerController) == 696, "Offset mismatch for UFortExpeditionMonitorsManager::LocalPlayerController");

// /Script/STW_HestiaBeautyRuntime.FortHestiaHeroMannequin
// Kind: Class; super: FortPlayerMannequin
class UFortHestiaHeroMannequin
{
public:
    std::uint8_t Pad_0000[0x8F8]; // 0x0000
    FName SlotName; // 0x08F8 (Size: 0x8, Type: NameProperty)
    void* HeroCollisionAproximation; // 0x0900 (Size: 0x8, Type: ObjectProperty)
    void* HeroStandInMesh; // 0x0908 (Size: 0x8, Type: ObjectProperty)
    void* OwnedByLocalHestiaPlayerComponent; // 0x0910 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bOverrideWithPlayerCosmeticLoadout; // 0x0918 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DefaultVisualState; // 0x0919 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x091A
    TMap<void*, void*> CameraTagSpecificVisualStates; // 0x0920 (Size: 0x10, Type: MapProperty)
    void* HologramMaterial; // 0x0930 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentVisualState; // 0x0938 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0939
    void* LocalPlayerController; // 0x0940 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> LocalPlayerPawn; // 0x0948 (Size: 0x8, Type: WeakObjectProperty)
    void* HeroItem; // 0x0950 (Size: 0x8, Type: ObjectProperty)
    void* HeroLoadout; // 0x0958 (Size: 0x8, Type: ObjectProperty)
    void* HeroType; // 0x0960 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortHestiaHeroMannequin, SlotName) == 2296, "Offset mismatch for UFortHestiaHeroMannequin::SlotName");
static_assert(offsetof(UFortHestiaHeroMannequin, HeroCollisionAproximation) == 2304, "Offset mismatch for UFortHestiaHeroMannequin::HeroCollisionAproximation");
static_assert(offsetof(UFortHestiaHeroMannequin, HeroStandInMesh) == 2312, "Offset mismatch for UFortHestiaHeroMannequin::HeroStandInMesh");
static_assert(offsetof(UFortHestiaHeroMannequin, OwnedByLocalHestiaPlayerComponent) == 2320, "Offset mismatch for UFortHestiaHeroMannequin::OwnedByLocalHestiaPlayerComponent");
static_assert(offsetof(UFortHestiaHeroMannequin, bOverrideWithPlayerCosmeticLoadout) == 2328, "Offset mismatch for UFortHestiaHeroMannequin::bOverrideWithPlayerCosmeticLoadout");
static_assert(offsetof(UFortHestiaHeroMannequin, DefaultVisualState) == 2329, "Offset mismatch for UFortHestiaHeroMannequin::DefaultVisualState");
static_assert(offsetof(UFortHestiaHeroMannequin, CameraTagSpecificVisualStates) == 2336, "Offset mismatch for UFortHestiaHeroMannequin::CameraTagSpecificVisualStates");
static_assert(offsetof(UFortHestiaHeroMannequin, HologramMaterial) == 2352, "Offset mismatch for UFortHestiaHeroMannequin::HologramMaterial");
static_assert(offsetof(UFortHestiaHeroMannequin, CurrentVisualState) == 2360, "Offset mismatch for UFortHestiaHeroMannequin::CurrentVisualState");
static_assert(offsetof(UFortHestiaHeroMannequin, LocalPlayerController) == 2368, "Offset mismatch for UFortHestiaHeroMannequin::LocalPlayerController");
static_assert(offsetof(UFortHestiaHeroMannequin, LocalPlayerPawn) == 2376, "Offset mismatch for UFortHestiaHeroMannequin::LocalPlayerPawn");
static_assert(offsetof(UFortHestiaHeroMannequin, HeroItem) == 2384, "Offset mismatch for UFortHestiaHeroMannequin::HeroItem");
static_assert(offsetof(UFortHestiaHeroMannequin, HeroLoadout) == 2392, "Offset mismatch for UFortHestiaHeroMannequin::HeroLoadout");
static_assert(offsetof(UFortHestiaHeroMannequin, HeroType) == 2400, "Offset mismatch for UFortHestiaHeroMannequin::HeroType");

// /Script/STW_HestiaBeautyRuntime.FortHestiaTrainerMannequin
// Kind: Class; super: FortPlayerMannequin
class UFortHestiaTrainerMannequin
{
public:
    std::uint8_t Pad_0000[0x900]; // 0x0000
    void* ShowTrainerQuestCompletionCondition; // 0x0900 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ShowTrainerMinAccountLevelCondition; // 0x0908 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x090C
    void* CanInteractQuestCompletionCondition; // 0x0910 (Size: 0x8, Type: ObjectProperty)
    std::int32_t CanInteractMinAccountLevelCondition; // 0x0918 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x091C
    TArray<void*> ActorsToDisplayIfQuestComplete; // 0x0920 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActorsToDisplayIfQuestNotComplete; // 0x0930 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t InteractionDisplayText[0x10]; // 0x0940 (Size: 0x10, Type: TextProperty)
    std::uint8_t FailedInteractionDisplayText[0x10]; // 0x0950 (Size: 0x10, Type: TextProperty)
    void* TrainerCollisionAproximation; // 0x0960 (Size: 0x8, Type: ObjectProperty)
    void* InteractionBox; // 0x0968 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VoiceboxPawnClass[0x20]; // 0x0970 (Size: 0x20, Type: SoftClassProperty)
    void* VoiceboxPawn; // 0x0990 (Size: 0x8, Type: ObjectProperty)
    void* FeedbackBank; // 0x0998 (Size: 0x8, Type: ObjectProperty)
    FName InteractionFeedbackHandleName; // 0x09A0 (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0003[0x8]; // 0x09A8
    std::uint8_t bShouldShowTrainer; // 0x09B0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortHestiaTrainerMannequin, ShowTrainerQuestCompletionCondition) == 2304, "Offset mismatch for UFortHestiaTrainerMannequin::ShowTrainerQuestCompletionCondition");
static_assert(offsetof(UFortHestiaTrainerMannequin, ShowTrainerMinAccountLevelCondition) == 2312, "Offset mismatch for UFortHestiaTrainerMannequin::ShowTrainerMinAccountLevelCondition");
static_assert(offsetof(UFortHestiaTrainerMannequin, CanInteractQuestCompletionCondition) == 2320, "Offset mismatch for UFortHestiaTrainerMannequin::CanInteractQuestCompletionCondition");
static_assert(offsetof(UFortHestiaTrainerMannequin, CanInteractMinAccountLevelCondition) == 2328, "Offset mismatch for UFortHestiaTrainerMannequin::CanInteractMinAccountLevelCondition");
static_assert(offsetof(UFortHestiaTrainerMannequin, ActorsToDisplayIfQuestComplete) == 2336, "Offset mismatch for UFortHestiaTrainerMannequin::ActorsToDisplayIfQuestComplete");
static_assert(offsetof(UFortHestiaTrainerMannequin, ActorsToDisplayIfQuestNotComplete) == 2352, "Offset mismatch for UFortHestiaTrainerMannequin::ActorsToDisplayIfQuestNotComplete");
static_assert(offsetof(UFortHestiaTrainerMannequin, InteractionDisplayText) == 2368, "Offset mismatch for UFortHestiaTrainerMannequin::InteractionDisplayText");
static_assert(offsetof(UFortHestiaTrainerMannequin, FailedInteractionDisplayText) == 2384, "Offset mismatch for UFortHestiaTrainerMannequin::FailedInteractionDisplayText");
static_assert(offsetof(UFortHestiaTrainerMannequin, TrainerCollisionAproximation) == 2400, "Offset mismatch for UFortHestiaTrainerMannequin::TrainerCollisionAproximation");
static_assert(offsetof(UFortHestiaTrainerMannequin, InteractionBox) == 2408, "Offset mismatch for UFortHestiaTrainerMannequin::InteractionBox");
static_assert(offsetof(UFortHestiaTrainerMannequin, VoiceboxPawnClass) == 2416, "Offset mismatch for UFortHestiaTrainerMannequin::VoiceboxPawnClass");
static_assert(offsetof(UFortHestiaTrainerMannequin, VoiceboxPawn) == 2448, "Offset mismatch for UFortHestiaTrainerMannequin::VoiceboxPawn");
static_assert(offsetof(UFortHestiaTrainerMannequin, FeedbackBank) == 2456, "Offset mismatch for UFortHestiaTrainerMannequin::FeedbackBank");
static_assert(offsetof(UFortHestiaTrainerMannequin, InteractionFeedbackHandleName) == 2464, "Offset mismatch for UFortHestiaTrainerMannequin::InteractionFeedbackHandleName");
static_assert(offsetof(UFortHestiaTrainerMannequin, bShouldShowTrainer) == 2480, "Offset mismatch for UFortHestiaTrainerMannequin::bShouldShowTrainer");

// /Script/STW_HestiaBeautyRuntime.FortHestiaWeaponBoardBase
// Kind: Class; super: Actor
class UFortHestiaWeaponBoardBase
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    TArray<void*> RangedWeaponDisplaySlots; // 0x0278 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MeleeWeaponDisplaySlots; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DisplaySlotItemList; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t WeaponLists[0x1]; // 0x02A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortHestiaWeaponBoardBase, RangedWeaponDisplaySlots) == 632, "Offset mismatch for UFortHestiaWeaponBoardBase::RangedWeaponDisplaySlots");
static_assert(offsetof(UFortHestiaWeaponBoardBase, MeleeWeaponDisplaySlots) == 648, "Offset mismatch for UFortHestiaWeaponBoardBase::MeleeWeaponDisplaySlots");
static_assert(offsetof(UFortHestiaWeaponBoardBase, DisplaySlotItemList) == 664, "Offset mismatch for UFortHestiaWeaponBoardBase::DisplaySlotItemList");
static_assert(offsetof(UFortHestiaWeaponBoardBase, WeaponLists) == 680, "Offset mismatch for UFortHestiaWeaponBoardBase::WeaponLists");

// /Script/STW_HestiaBeautyRuntime.FortPlayerPowerDisplayComponent
// Kind: Class; super: ActorComponent
class UFortPlayerPowerDisplayComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnPlayerPowerRatingChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t CurrentPlayerPowerRating; // 0x00D0 (Size: 0x4, Type: IntProperty)
    TWeakObjectPtr<void> FortLocalPlayer; // 0x00D4 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortPlayerPowerDisplayComponent, OnPlayerPowerRatingChanged) == 192, "Offset mismatch for UFortPlayerPowerDisplayComponent::OnPlayerPowerRatingChanged");
static_assert(offsetof(UFortPlayerPowerDisplayComponent, CurrentPlayerPowerRating) == 208, "Offset mismatch for UFortPlayerPowerDisplayComponent::CurrentPlayerPowerRating");
static_assert(offsetof(UFortPlayerPowerDisplayComponent, FortLocalPlayer) == 212, "Offset mismatch for UFortPlayerPowerDisplayComponent::FortLocalPlayer");

// /Script/STW_HestiaBeautyRuntime.FortTeamPerkComponent
// Kind: Class; super: ActorComponent
class UFortTeamPerkComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnTeamPerkChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TWeakObjectPtr<void> LocalPlayerController; // 0x00D0 (Size: 0x8, Type: WeakObjectProperty)
    void* TeamPerk; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortTeamPerkComponent, OnTeamPerkChanged) == 192, "Offset mismatch for UFortTeamPerkComponent::OnTeamPerkChanged");
static_assert(offsetof(UFortTeamPerkComponent, LocalPlayerController) == 208, "Offset mismatch for UFortTeamPerkComponent::LocalPlayerController");
static_assert(offsetof(UFortTeamPerkComponent, TeamPerk) == 216, "Offset mismatch for UFortTeamPerkComponent::TeamPerk");

// /Script/STW_HestiaBeautyRuntime.HestiaConditionAccountLevel
// Kind: Class; super: HestiaConditionControllerBased
class UHestiaConditionAccountLevel
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t AccountLevel; // 0x0050 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UHestiaConditionAccountLevel, AccountLevel) == 80, "Offset mismatch for UHestiaConditionAccountLevel::AccountLevel");

// /Script/STW_HestiaBeautyRuntime.HestiaConditionActiveEvent
// Kind: Class; super: HestiaVariationCondition
class UHestiaConditionActiveEvent
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    FString EventFlagName; // 0x0040 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UHestiaConditionActiveEvent, EventFlagName) == 64, "Offset mismatch for UHestiaConditionActiveEvent::EventFlagName");

// /Script/STW_HestiaBeautyRuntime.HestiaConditionCanPurchaseStoreOffer
// Kind: Class; super: HestiaConditionResourceBased
class UHestiaConditionCanPurchaseStoreOffer
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    TArray<void*> StorefrontNames; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UHestiaConditionCanPurchaseStoreOffer, StorefrontNames) == 112, "Offset mismatch for UHestiaConditionCanPurchaseStoreOffer::StorefrontNames");

// /Script/STW_HestiaBeautyRuntime.HestiaConditionCollectionLevel
// Kind: Class; super: HestiaConditionControllerBased
class UHestiaConditionCollectionLevel
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t MinCollectionLevel; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxCollectionLevel; // 0x0054 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UHestiaConditionCollectionLevel, MinCollectionLevel) == 80, "Offset mismatch for UHestiaConditionCollectionLevel::MinCollectionLevel");
static_assert(offsetof(UHestiaConditionCollectionLevel, MaxCollectionLevel) == 84, "Offset mismatch for UHestiaConditionCollectionLevel::MaxCollectionLevel");

// /Script/STW_HestiaBeautyRuntime.HestiaConditionControllerBased
// Kind: Class; super: HestiaVariationCondition
class UHestiaConditionControllerBased
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* ControllerProviderClass; // 0x0040 (Size: 0x8, Type: ClassProperty)
    void* ControllerProvider; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UHestiaConditionControllerBased, ControllerProviderClass) == 64, "Offset mismatch for UHestiaConditionControllerBased::ControllerProviderClass");
static_assert(offsetof(UHestiaConditionControllerBased, ControllerProvider) == 72, "Offset mismatch for UHestiaConditionControllerBased::ControllerProvider");

// /Script/STW_HestiaBeautyRuntime.HestiaConditionResourceBased
// Kind: Class; super: HestiaConditionControllerBased
class UHestiaConditionResourceBased
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TSoftObjectPtr<void> ItemDefinition; // 0x0050 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UHestiaConditionResourceBased, ItemDefinition) == 80, "Offset mismatch for UHestiaConditionResourceBased::ItemDefinition");

// /Script/STW_HestiaBeautyRuntime.HestiaControllerProvider
// Kind: Class; super: Object
class UHestiaControllerProvider
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TWeakObjectPtr<void> Controller; // 0x0040 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UHestiaControllerProvider, Controller) == 64, "Offset mismatch for UHestiaControllerProvider::Controller");

// /Script/STW_HestiaBeautyRuntime.HestiaEffectSetAudioCompResumed
// Kind: Class; super: HestiaVariationEffect
class UHestiaEffectSetAudioCompResumed
{
public:
    std::uint8_t Opaque[1];
};


// /Script/STW_HestiaBeautyRuntime.HestiaEffectSetSkeletonUpdate
// Kind: Class; super: HestiaVariationEffect
class UHestiaEffectSetSkeletonUpdate
{
public:
    std::uint8_t Opaque[1];
};


// /Script/STW_HestiaBeautyRuntime.HestiaHomeBaseControllerProvider
// Kind: Class; super: HestiaControllerProvider
class UHestiaHomeBaseControllerProvider
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TWeakObjectPtr<void> Controller; // 0x0040 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UHestiaHomeBaseControllerProvider, Controller) == 64, "Offset mismatch for UHestiaHomeBaseControllerProvider::Controller");

// /Script/STW_HestiaBeautyRuntime.HestiaHostBannerDisplayComponent
// Kind: Class; super: ActorComponent
class UHestiaHostBannerDisplayComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* BannerPatternTexture; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* BannerShapeTexture; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> BannerMaterialSlotNames; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00E0
    std::uint8_t BannerIcon[0x20]; // 0x00E8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BannerColorName[0x4]; // 0x0108 (Size: 0x4, Type: NameProperty)
    FName BannerIconName; // 0x010C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UHestiaHostBannerDisplayComponent, BannerPatternTexture) == 192, "Offset mismatch for UHestiaHostBannerDisplayComponent::BannerPatternTexture");
static_assert(offsetof(UHestiaHostBannerDisplayComponent, BannerShapeTexture) == 200, "Offset mismatch for UHestiaHostBannerDisplayComponent::BannerShapeTexture");
static_assert(offsetof(UHestiaHostBannerDisplayComponent, BannerMaterialSlotNames) == 208, "Offset mismatch for UHestiaHostBannerDisplayComponent::BannerMaterialSlotNames");
static_assert(offsetof(UHestiaHostBannerDisplayComponent, BannerIcon) == 232, "Offset mismatch for UHestiaHostBannerDisplayComponent::BannerIcon");
static_assert(offsetof(UHestiaHostBannerDisplayComponent, BannerColorName) == 264, "Offset mismatch for UHestiaHostBannerDisplayComponent::BannerColorName");
static_assert(offsetof(UHestiaHostBannerDisplayComponent, BannerIconName) == 268, "Offset mismatch for UHestiaHostBannerDisplayComponent::BannerIconName");

// /Script/STW_HestiaBeautyRuntime.HestiaIdleChatterFeedbackComponent
// Kind: Class; super: ActorComponent
class UHestiaIdleChatterFeedbackComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t VoiceboxPawnClass[0x20]; // 0x00C0 (Size: 0x20, Type: SoftClassProperty)
    void* FeedbackBank; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t IdleChatterFeedbackHandleName[0x4]; // 0x00E8 (Size: 0x4, Type: NameProperty)
    float MinTimeBetweenIdleChatters; // 0x00EC (Size: 0x4, Type: FloatProperty)
    float MaxTimeBetweenIdleChatters; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float MaximumAudibleRangeToPlayers; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00F8
    void* VoiceboxPawn; // 0x0100 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UHestiaIdleChatterFeedbackComponent, VoiceboxPawnClass) == 192, "Offset mismatch for UHestiaIdleChatterFeedbackComponent::VoiceboxPawnClass");
static_assert(offsetof(UHestiaIdleChatterFeedbackComponent, FeedbackBank) == 224, "Offset mismatch for UHestiaIdleChatterFeedbackComponent::FeedbackBank");
static_assert(offsetof(UHestiaIdleChatterFeedbackComponent, IdleChatterFeedbackHandleName) == 232, "Offset mismatch for UHestiaIdleChatterFeedbackComponent::IdleChatterFeedbackHandleName");
static_assert(offsetof(UHestiaIdleChatterFeedbackComponent, MinTimeBetweenIdleChatters) == 236, "Offset mismatch for UHestiaIdleChatterFeedbackComponent::MinTimeBetweenIdleChatters");
static_assert(offsetof(UHestiaIdleChatterFeedbackComponent, MaxTimeBetweenIdleChatters) == 240, "Offset mismatch for UHestiaIdleChatterFeedbackComponent::MaxTimeBetweenIdleChatters");
static_assert(offsetof(UHestiaIdleChatterFeedbackComponent, MaximumAudibleRangeToPlayers) == 244, "Offset mismatch for UHestiaIdleChatterFeedbackComponent::MaximumAudibleRangeToPlayers");
static_assert(offsetof(UHestiaIdleChatterFeedbackComponent, VoiceboxPawn) == 256, "Offset mismatch for UHestiaIdleChatterFeedbackComponent::VoiceboxPawn");

// /Script/STW_HestiaBeautyRuntime.HestiaLocalControllerProvider
// Kind: Class; super: HestiaControllerProvider
class UHestiaLocalControllerProvider
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TWeakObjectPtr<void> Controller; // 0x0040 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UHestiaLocalControllerProvider, Controller) == 64, "Offset mismatch for UHestiaLocalControllerProvider::Controller");

// /Script/STW_HestiaBeautyRuntime.HestiaQuestObjectiveNumberDisplay
// Kind: Class; super: Actor
class UHestiaQuestObjectiveNumberDisplay
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* TrackedQuest; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ObjectiveIndex; // 0x0278 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x027C
    void* RootStaticMesh; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* DisplayText; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* QuestCompleteMesh; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* OwnedByHestiaHostComponent; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ObjectiveProgress; // 0x02A0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsTrackedQuestObjectiveComplete; // 0x02A4 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UHestiaQuestObjectiveNumberDisplay, TrackedQuest) == 624, "Offset mismatch for UHestiaQuestObjectiveNumberDisplay::TrackedQuest");
static_assert(offsetof(UHestiaQuestObjectiveNumberDisplay, ObjectiveIndex) == 632, "Offset mismatch for UHestiaQuestObjectiveNumberDisplay::ObjectiveIndex");
static_assert(offsetof(UHestiaQuestObjectiveNumberDisplay, RootStaticMesh) == 640, "Offset mismatch for UHestiaQuestObjectiveNumberDisplay::RootStaticMesh");
static_assert(offsetof(UHestiaQuestObjectiveNumberDisplay, DisplayText) == 648, "Offset mismatch for UHestiaQuestObjectiveNumberDisplay::DisplayText");
static_assert(offsetof(UHestiaQuestObjectiveNumberDisplay, QuestCompleteMesh) == 656, "Offset mismatch for UHestiaQuestObjectiveNumberDisplay::QuestCompleteMesh");
static_assert(offsetof(UHestiaQuestObjectiveNumberDisplay, OwnedByHestiaHostComponent) == 664, "Offset mismatch for UHestiaQuestObjectiveNumberDisplay::OwnedByHestiaHostComponent");
static_assert(offsetof(UHestiaQuestObjectiveNumberDisplay, ObjectiveProgress) == 672, "Offset mismatch for UHestiaQuestObjectiveNumberDisplay::ObjectiveProgress");
static_assert(offsetof(UHestiaQuestObjectiveNumberDisplay, bIsTrackedQuestObjectiveComplete) == 676, "Offset mismatch for UHestiaQuestObjectiveNumberDisplay::bIsTrackedQuestObjectiveComplete");

// /Script/STW_HestiaBeautyRuntime.HestiaVariationCondition
// Kind: Class; super: Object
class UHestiaVariationCondition
{
public:
    std::uint8_t Opaque[1];
};


// /Script/STW_HestiaBeautyRuntime.HestiaVariationConditionAnd
// Kind: Class; super: HestiaVariationConditionsArray
class UHestiaVariationConditionAnd
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Conditions; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UHestiaVariationConditionAnd, Conditions) == 72, "Offset mismatch for UHestiaVariationConditionAnd::Conditions");

// /Script/STW_HestiaBeautyRuntime.HestiaVariationConditionNot
// Kind: Class; super: HestiaVariationCondition
class UHestiaVariationConditionNot
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* Condition; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UHestiaVariationConditionNot, Condition) == 64, "Offset mismatch for UHestiaVariationConditionNot::Condition");

// /Script/STW_HestiaBeautyRuntime.HestiaVariationConditionOr
// Kind: Class; super: HestiaVariationConditionsArray
class UHestiaVariationConditionOr
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Conditions; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UHestiaVariationConditionOr, Conditions) == 72, "Offset mismatch for UHestiaVariationConditionOr::Conditions");

// /Script/STW_HestiaBeautyRuntime.HestiaVariationConditionQuest
// Kind: Class; super: HestiaConditionControllerBased
class UHestiaVariationConditionQuest
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* Quest; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UHestiaVariationConditionQuest, Quest) == 80, "Offset mismatch for UHestiaVariationConditionQuest::Quest");

// /Script/STW_HestiaBeautyRuntime.HestiaVariationConditionQuestCompleted
// Kind: Class; super: HestiaVariationConditionQuest
class UHestiaVariationConditionQuestCompleted
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* Quest; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UHestiaVariationConditionQuestCompleted, Quest) == 80, "Offset mismatch for UHestiaVariationConditionQuestCompleted::Quest");

// /Script/STW_HestiaBeautyRuntime.HestiaVariationConditionResourceInRange
// Kind: Class; super: HestiaConditionResourceBased
class UHestiaVariationConditionResourceInRange
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::int32_t min; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::int32_t max; // 0x0074 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UHestiaVariationConditionResourceInRange, min) == 112, "Offset mismatch for UHestiaVariationConditionResourceInRange::min");
static_assert(offsetof(UHestiaVariationConditionResourceInRange, max) == 116, "Offset mismatch for UHestiaVariationConditionResourceInRange::max");

// /Script/STW_HestiaBeautyRuntime.HestiaVariationConditionsArray
// Kind: Class; super: HestiaVariationCondition
class UHestiaVariationConditionsArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Conditions; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UHestiaVariationConditionsArray, Conditions) == 72, "Offset mismatch for UHestiaVariationConditionsArray::Conditions");

// /Script/STW_HestiaBeautyRuntime.HestiaVariationEffect
// Kind: Class; super: Object
class UHestiaVariationEffect
{
public:
    std::uint8_t Opaque[1];
};


// /Script/STW_HestiaBeautyRuntime.HestiaVariationEffectCollisionOn
// Kind: Class; super: HestiaVariationEffect
class UHestiaVariationEffectCollisionOn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/STW_HestiaBeautyRuntime.HestiaVariationEffectEditMaterialParameterValues
// Kind: Class; super: HestiaVariationEffect
class UHestiaVariationEffectEditMaterialParameterValues
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> MaterialEditsList; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UHestiaVariationEffectEditMaterialParameterValues, MaterialEditsList) == 40, "Offset mismatch for UHestiaVariationEffectEditMaterialParameterValues::MaterialEditsList");

// /Script/STW_HestiaBeautyRuntime.HestiaVariationEffectLightingColor
// Kind: Class; super: HestiaVariationEffect
class UHestiaVariationEffectLightingColor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t LightColor[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UHestiaVariationEffectLightingColor, LightColor) == 40, "Offset mismatch for UHestiaVariationEffectLightingColor::LightColor");

// /Script/STW_HestiaBeautyRuntime.HestiaVariationEffectNiagara
// Kind: Class; super: HestiaVariationEffect
class UHestiaVariationEffectNiagara
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t NiagaraActor[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AttachLocationRule; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AttachRotationRule; // 0x0049 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AttachScaleRule; // 0x004A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x004B
    FName AttachSocketName; // 0x004C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UHestiaVariationEffectNiagara, NiagaraActor) == 40, "Offset mismatch for UHestiaVariationEffectNiagara::NiagaraActor");
static_assert(offsetof(UHestiaVariationEffectNiagara, AttachLocationRule) == 72, "Offset mismatch for UHestiaVariationEffectNiagara::AttachLocationRule");
static_assert(offsetof(UHestiaVariationEffectNiagara, AttachRotationRule) == 73, "Offset mismatch for UHestiaVariationEffectNiagara::AttachRotationRule");
static_assert(offsetof(UHestiaVariationEffectNiagara, AttachScaleRule) == 74, "Offset mismatch for UHestiaVariationEffectNiagara::AttachScaleRule");
static_assert(offsetof(UHestiaVariationEffectNiagara, AttachSocketName) == 76, "Offset mismatch for UHestiaVariationEffectNiagara::AttachSocketName");

// /Script/STW_HestiaBeautyRuntime.HestiaVariationEffectSetVisible
// Kind: Class; super: HestiaVariationEffect
class UHestiaVariationEffectSetVisible
{
public:
    std::uint8_t Opaque[1];
};


// /Script/STW_HestiaBeautyRuntime.HestiaVariationEffectsContainer
// Kind: Class; super: Object
class UHestiaVariationEffectsContainer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Effects; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ControlledActors; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UHestiaVariationEffectsContainer, Effects) == 40, "Offset mismatch for UHestiaVariationEffectsContainer::Effects");
static_assert(offsetof(UHestiaVariationEffectsContainer, ControlledActors) == 56, "Offset mismatch for UHestiaVariationEffectsContainer::ControlledActors");

// /Script/STW_HestiaBeautyRuntime.HestiaVariationGroupData
// Kind: Class; super: DataAsset
class UHestiaVariationGroupData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ControlledActors; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    void* Condition; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* EffectsContainer; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UHestiaVariationGroupData, ControlledActors) == 40, "Offset mismatch for UHestiaVariationGroupData::ControlledActors");
static_assert(offsetof(UHestiaVariationGroupData, Condition) == 56, "Offset mismatch for UHestiaVariationGroupData::Condition");
static_assert(offsetof(UHestiaVariationGroupData, EffectsContainer) == 64, "Offset mismatch for UHestiaVariationGroupData::EffectsContainer");

// /Script/STW_HestiaBeautyRuntime.HestiaVariationManager
// Kind: Class; super: GameStateComponent
class UHestiaVariationManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bLoadAsyncGroupDatas; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsGroupDatasLoaded; // 0x00C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x16]; // 0x00C2
    TArray<void*> GroupDatas; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LoadedGroupDatas; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> GroupConditions; // 0x00F8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> GroupEffectsContainers; // 0x0108 (Size: 0x10, Type: MapProperty)
    TArray<void*> GroupsIdxWithActiveEffects; // 0x0118 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IncompleteGroups; // 0x0128 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UHestiaVariationManager, bLoadAsyncGroupDatas) == 192, "Offset mismatch for UHestiaVariationManager::bLoadAsyncGroupDatas");
static_assert(offsetof(UHestiaVariationManager, bIsGroupDatasLoaded) == 193, "Offset mismatch for UHestiaVariationManager::bIsGroupDatasLoaded");
static_assert(offsetof(UHestiaVariationManager, GroupDatas) == 216, "Offset mismatch for UHestiaVariationManager::GroupDatas");
static_assert(offsetof(UHestiaVariationManager, LoadedGroupDatas) == 232, "Offset mismatch for UHestiaVariationManager::LoadedGroupDatas");
static_assert(offsetof(UHestiaVariationManager, GroupConditions) == 248, "Offset mismatch for UHestiaVariationManager::GroupConditions");
static_assert(offsetof(UHestiaVariationManager, GroupEffectsContainers) == 264, "Offset mismatch for UHestiaVariationManager::GroupEffectsContainers");
static_assert(offsetof(UHestiaVariationManager, GroupsIdxWithActiveEffects) == 280, "Offset mismatch for UHestiaVariationManager::GroupsIdxWithActiveEffects");
static_assert(offsetof(UHestiaVariationManager, IncompleteGroups) == 296, "Offset mismatch for UHestiaVariationManager::IncompleteGroups");

// /Script/STW_HestiaBeautyRuntime.HestiaWorldMapPinManager
// Kind: Class; super: WorldMapPinManager
class UHestiaWorldMapPinManager
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* WorldMapMesh; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CurrentPins; // 0x0280 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UHestiaWorldMapPinManager, WorldMapMesh) == 632, "Offset mismatch for UHestiaWorldMapPinManager::WorldMapMesh");
static_assert(offsetof(UHestiaWorldMapPinManager, CurrentPins) == 640, "Offset mismatch for UHestiaWorldMapPinManager::CurrentPins");

// /Script/STW_HestiaBeautyRuntime.OwnedByHestiaHostComponent
// Kind: Class; super: ActorComponent
class UOwnedByHestiaHostComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate FOnHestiaHostFoundDelegate; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* HestiaHomebaseOwner; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOwnedByHestiaHostComponent, FOnHestiaHostFoundDelegate) == 192, "Offset mismatch for UOwnedByHestiaHostComponent::FOnHestiaHostFoundDelegate");
static_assert(offsetof(UOwnedByHestiaHostComponent, HestiaHomebaseOwner) == 208, "Offset mismatch for UOwnedByHestiaHostComponent::HestiaHomebaseOwner");

// /Script/STW_HestiaBeautyRuntime.OwnedByLocalHestiaPlayerComponent
// Kind: Class; super: ActorComponent
class UOwnedByLocalHestiaPlayerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnLocalHestiaPlayerControllerFoundDelegate; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* HestiaLocalPlayerController; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOwnedByLocalHestiaPlayerComponent, OnLocalHestiaPlayerControllerFoundDelegate) == 192, "Offset mismatch for UOwnedByLocalHestiaPlayerComponent::OnLocalHestiaPlayerControllerFoundDelegate");
static_assert(offsetof(UOwnedByLocalHestiaPlayerComponent, HestiaLocalPlayerController) == 208, "Offset mismatch for UOwnedByLocalHestiaPlayerComponent::HestiaLocalPlayerController");
