/**
 * decamp dumper generated SDK
 * Package: /Script/SpriteExtractionFrontendUI
 */
#pragma once
#include "Basic.h"

// /Script/SpriteExtractionFrontendUI.ExtractionProgressionRewardRange
// Kind: ScriptStruct; super: none
struct FExtractionProgressionRewardRange
{
public:
    std::int32_t min; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t max; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FExtractionProgressionRewardRange, min) == 0, "Offset mismatch for FExtractionProgressionRewardRange::min");
static_assert(offsetof(FExtractionProgressionRewardRange, max) == 4, "Offset mismatch for FExtractionProgressionRewardRange::max");

// /Script/SpriteExtractionFrontendUI.FortEvent_Extraction_OnRelicEquipped
// Kind: ScriptStruct; super: none
struct FFortEvent_Extraction_OnRelicEquipped
{
public:
    std::uint8_t bEquipped; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* ExtractableItemDefinition; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortEvent_Extraction_OnRelicEquipped, bEquipped) == 0, "Offset mismatch for FFortEvent_Extraction_OnRelicEquipped::bEquipped");
static_assert(offsetof(FFortEvent_Extraction_OnRelicEquipped, ExtractableItemDefinition) == 8, "Offset mismatch for FFortEvent_Extraction_OnRelicEquipped::ExtractableItemDefinition");

// /Script/SpriteExtractionFrontendUI.FortEvent_Extraction_OnRelicMultiItemEnabled
// Kind: ScriptStruct; super: none
struct FFortEvent_Extraction_OnRelicMultiItemEnabled
{
public:
    std::uint8_t bMultiItemEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortEvent_Extraction_OnRelicMultiItemEnabled, bMultiItemEnabled) == 0, "Offset mismatch for FFortEvent_Extraction_OnRelicMultiItemEnabled::bMultiItemEnabled");

// /Script/SpriteExtractionFrontendUI.FortEvent_Extraction_OnRelicNavigation
// Kind: ScriptStruct; super: none
struct FFortEvent_Extraction_OnRelicNavigation
{
public:
    std::uint8_t Direction; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* ExtractableItemDefinition; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortEvent_Extraction_OnRelicNavigation, Direction) == 0, "Offset mismatch for FFortEvent_Extraction_OnRelicNavigation::Direction");
static_assert(offsetof(FFortEvent_Extraction_OnRelicNavigation, ExtractableItemDefinition) == 8, "Offset mismatch for FFortEvent_Extraction_OnRelicNavigation::ExtractableItemDefinition");

// /Script/SpriteExtractionFrontendUI.FortEvent_Extraction_OnRelicSelected
// Kind: ScriptStruct; super: none
struct FFortEvent_Extraction_OnRelicSelected
{
public:
    void* ExtractableItemDefinition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CollectionState; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FFortEvent_Extraction_OnRelicSelected, ExtractableItemDefinition) == 0, "Offset mismatch for FFortEvent_Extraction_OnRelicSelected::ExtractableItemDefinition");
static_assert(offsetof(FFortEvent_Extraction_OnRelicSelected, CollectionState) == 8, "Offset mismatch for FFortEvent_Extraction_OnRelicSelected::CollectionState");

// /Script/SpriteExtractionFrontendUI.FortEvent_Extraction_OnRelicSummoned
// Kind: ScriptStruct; super: none
struct FFortEvent_Extraction_OnRelicSummoned
{
public:
    void* ExtractableItemDefinition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortEvent_Extraction_OnRelicSummoned, ExtractableItemDefinition) == 0, "Offset mismatch for FFortEvent_Extraction_OnRelicSummoned::ExtractableItemDefinition");

// /Script/SpriteExtractionFrontendUI.ExtractableFTUEViewModel
// Kind: Class; super: FortPerUserViewModel
class UExtractableFTUEViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bShowFTUE; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    TArray<void*> AllStarters; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UExtractableFTUEViewModel, bShowFTUE) == 120, "Offset mismatch for UExtractableFTUEViewModel::bShowFTUE");
static_assert(offsetof(UExtractableFTUEViewModel, AllStarters) == 128, "Offset mismatch for UExtractableFTUEViewModel::AllStarters");

// /Script/SpriteExtractionFrontendUI.ExtractableItemPreviewActor
// Kind: Class; super: Actor
class UExtractableItemPreviewActor
{
public:
    std::uint8_t Pad_0000[0x288]; // 0x0000
    float Radius; // 0x0288 (Size: 0x4, Type: FloatProperty)
    float OffsetAngleDegrees; // 0x028C (Size: 0x4, Type: FloatProperty)
    float MultiItem_ItemHeight; // 0x0290 (Size: 0x4, Type: FloatProperty)
    float MultiItem_ItemWidth; // 0x0294 (Size: 0x4, Type: FloatProperty)
    float MultiItem_ZOffsetFromPedestal; // 0x0298 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x029C
    TArray<void*> SkeletalMeshComponents; // 0x02A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StaticMeshComponents; // 0x02B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AuraNiagaraComponents; // 0x02C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UniqueNiagaraComponents; // 0x02D0 (Size: 0x10, Type: ArrayProperty)
    void* SoundLibraryComponent; // 0x02E0 (Size: 0x8, Type: ObjectProperty)
    float ItemHeight; // 0x02E8 (Size: 0x4, Type: FloatProperty)
    float ItemWidth; // 0x02EC (Size: 0x4, Type: FloatProperty)
    float ZOffsetFromPedestal; // 0x02F0 (Size: 0x4, Type: FloatProperty)
    float PreviewMeshMarginScale; // 0x02F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t InitialRotation[0x18]; // 0x02F8 (Size: 0x18, Type: StructProperty)
    float NavAnim_Duration; // 0x0310 (Size: 0x4, Type: FloatProperty)
    float NavAnim_TimeStep; // 0x0314 (Size: 0x4, Type: FloatProperty)
    void* NavAnim_EasingCurve; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ItemDefinitions; // 0x0320 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActorBounds; // 0x0330 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MaterialInstances; // 0x0340 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x18]; // 0x0350
    TArray<void*> ActiveSoundLibraries; // 0x0368 (Size: 0x10, Type: ArrayProperty)
    void* AuraNiagaraSystem; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ActiveIdleAnimations; // 0x0380 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UExtractableItemPreviewActor, Radius) == 648, "Offset mismatch for UExtractableItemPreviewActor::Radius");
static_assert(offsetof(UExtractableItemPreviewActor, OffsetAngleDegrees) == 652, "Offset mismatch for UExtractableItemPreviewActor::OffsetAngleDegrees");
static_assert(offsetof(UExtractableItemPreviewActor, MultiItem_ItemHeight) == 656, "Offset mismatch for UExtractableItemPreviewActor::MultiItem_ItemHeight");
static_assert(offsetof(UExtractableItemPreviewActor, MultiItem_ItemWidth) == 660, "Offset mismatch for UExtractableItemPreviewActor::MultiItem_ItemWidth");
static_assert(offsetof(UExtractableItemPreviewActor, MultiItem_ZOffsetFromPedestal) == 664, "Offset mismatch for UExtractableItemPreviewActor::MultiItem_ZOffsetFromPedestal");
static_assert(offsetof(UExtractableItemPreviewActor, SkeletalMeshComponents) == 672, "Offset mismatch for UExtractableItemPreviewActor::SkeletalMeshComponents");
static_assert(offsetof(UExtractableItemPreviewActor, StaticMeshComponents) == 688, "Offset mismatch for UExtractableItemPreviewActor::StaticMeshComponents");
static_assert(offsetof(UExtractableItemPreviewActor, AuraNiagaraComponents) == 704, "Offset mismatch for UExtractableItemPreviewActor::AuraNiagaraComponents");
static_assert(offsetof(UExtractableItemPreviewActor, UniqueNiagaraComponents) == 720, "Offset mismatch for UExtractableItemPreviewActor::UniqueNiagaraComponents");
static_assert(offsetof(UExtractableItemPreviewActor, SoundLibraryComponent) == 736, "Offset mismatch for UExtractableItemPreviewActor::SoundLibraryComponent");
static_assert(offsetof(UExtractableItemPreviewActor, ItemHeight) == 744, "Offset mismatch for UExtractableItemPreviewActor::ItemHeight");
static_assert(offsetof(UExtractableItemPreviewActor, ItemWidth) == 748, "Offset mismatch for UExtractableItemPreviewActor::ItemWidth");
static_assert(offsetof(UExtractableItemPreviewActor, ZOffsetFromPedestal) == 752, "Offset mismatch for UExtractableItemPreviewActor::ZOffsetFromPedestal");
static_assert(offsetof(UExtractableItemPreviewActor, PreviewMeshMarginScale) == 756, "Offset mismatch for UExtractableItemPreviewActor::PreviewMeshMarginScale");
static_assert(offsetof(UExtractableItemPreviewActor, InitialRotation) == 760, "Offset mismatch for UExtractableItemPreviewActor::InitialRotation");
static_assert(offsetof(UExtractableItemPreviewActor, NavAnim_Duration) == 784, "Offset mismatch for UExtractableItemPreviewActor::NavAnim_Duration");
static_assert(offsetof(UExtractableItemPreviewActor, NavAnim_TimeStep) == 788, "Offset mismatch for UExtractableItemPreviewActor::NavAnim_TimeStep");
static_assert(offsetof(UExtractableItemPreviewActor, NavAnim_EasingCurve) == 792, "Offset mismatch for UExtractableItemPreviewActor::NavAnim_EasingCurve");
static_assert(offsetof(UExtractableItemPreviewActor, ItemDefinitions) == 800, "Offset mismatch for UExtractableItemPreviewActor::ItemDefinitions");
static_assert(offsetof(UExtractableItemPreviewActor, ActorBounds) == 816, "Offset mismatch for UExtractableItemPreviewActor::ActorBounds");
static_assert(offsetof(UExtractableItemPreviewActor, MaterialInstances) == 832, "Offset mismatch for UExtractableItemPreviewActor::MaterialInstances");
static_assert(offsetof(UExtractableItemPreviewActor, ActiveSoundLibraries) == 872, "Offset mismatch for UExtractableItemPreviewActor::ActiveSoundLibraries");
static_assert(offsetof(UExtractableItemPreviewActor, AuraNiagaraSystem) == 888, "Offset mismatch for UExtractableItemPreviewActor::AuraNiagaraSystem");
static_assert(offsetof(UExtractableItemPreviewActor, ActiveIdleAnimations) == 896, "Offset mismatch for UExtractableItemPreviewActor::ActiveIdleAnimations");

// /Script/SpriteExtractionFrontendUI.ExtractableItemPreviewOffPawnActor
// Kind: Class; super: FortItemPreviewOffPawnActor
class UExtractableItemPreviewOffPawnActor
{
public:
    std::uint8_t Pad_0000[0x4B8]; // 0x0000
    void* PreviewActorComponent; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* ChildPreviewActor; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* PreviewStaticMeshComponent; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* PreviewSkelMeshComponent; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* DefaultPreviewActorClass; // 0x04D8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAllowPivotLocationOffsetOnPreviewChildActor; // 0x04E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x04E1
    void* GliderSpawnComponent; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UExtractableItemPreviewOffPawnActor, PreviewActorComponent) == 1208, "Offset mismatch for UExtractableItemPreviewOffPawnActor::PreviewActorComponent");
static_assert(offsetof(UExtractableItemPreviewOffPawnActor, ChildPreviewActor) == 1216, "Offset mismatch for UExtractableItemPreviewOffPawnActor::ChildPreviewActor");
static_assert(offsetof(UExtractableItemPreviewOffPawnActor, PreviewStaticMeshComponent) == 1224, "Offset mismatch for UExtractableItemPreviewOffPawnActor::PreviewStaticMeshComponent");
static_assert(offsetof(UExtractableItemPreviewOffPawnActor, PreviewSkelMeshComponent) == 1232, "Offset mismatch for UExtractableItemPreviewOffPawnActor::PreviewSkelMeshComponent");
static_assert(offsetof(UExtractableItemPreviewOffPawnActor, DefaultPreviewActorClass) == 1240, "Offset mismatch for UExtractableItemPreviewOffPawnActor::DefaultPreviewActorClass");
static_assert(offsetof(UExtractableItemPreviewOffPawnActor, bAllowPivotLocationOffsetOnPreviewChildActor) == 1248, "Offset mismatch for UExtractableItemPreviewOffPawnActor::bAllowPivotLocationOffsetOnPreviewChildActor");
static_assert(offsetof(UExtractableItemPreviewOffPawnActor, GliderSpawnComponent) == 1256, "Offset mismatch for UExtractableItemPreviewOffPawnActor::GliderSpawnComponent");

// /Script/SpriteExtractionFrontendUI.ExtractableItemPreviewWidget
// Kind: Class; super: FortItemPreviewWidget
class UExtractableItemPreviewWidget
{
public:
    std::uint8_t Pad_0000[0x898]; // 0x0000
    TArray<void*> AdditionalItemVMs; // 0x0898 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UExtractableItemPreviewWidget, AdditionalItemVMs) == 2200, "Offset mismatch for UExtractableItemPreviewWidget::AdditionalItemVMs");

// /Script/SpriteExtractionFrontendUI.ExtractionFriendVM
// Kind: Class; super: MVVMViewModelBase
class UExtractionFriendVM
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    void* AvatarTexture; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::int32_t ProgressValue; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::int32_t Placement; // 0x0094 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsLocalPlayer; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0099
    void* PlayerAvatar; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UExtractionFriendVM, DisplayName) == 120, "Offset mismatch for UExtractionFriendVM::DisplayName");
static_assert(offsetof(UExtractionFriendVM, AvatarTexture) == 136, "Offset mismatch for UExtractionFriendVM::AvatarTexture");
static_assert(offsetof(UExtractionFriendVM, ProgressValue) == 144, "Offset mismatch for UExtractionFriendVM::ProgressValue");
static_assert(offsetof(UExtractionFriendVM, Placement) == 148, "Offset mismatch for UExtractionFriendVM::Placement");
static_assert(offsetof(UExtractionFriendVM, bIsLocalPlayer) == 152, "Offset mismatch for UExtractionFriendVM::bIsLocalPlayer");
static_assert(offsetof(UExtractionFriendVM, PlayerAvatar) == 160, "Offset mismatch for UExtractionFriendVM::PlayerAvatar");

// /Script/SpriteExtractionFrontendUI.ExtractionFriendsProgressionVM
// Kind: Class; super: MVVMViewModelBase
class UExtractionFriendsProgressionVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> FriendVMs; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    void* LocalPlayerVM; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::int32_t MaxFriendsDisplayed; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0084
    FString LeaderboardGameId; // 0x0088 (Size: 0x10, Type: StrProperty)
    FString LeaderboardEventId; // 0x0098 (Size: 0x10, Type: StrProperty)
    FString LeaderboardWindowId; // 0x00A8 (Size: 0x10, Type: StrProperty)
    FString LeaderboardTrackedStat; // 0x00B8 (Size: 0x10, Type: StrProperty)
    TWeakObjectPtr<void> RequestingPlayer; // 0x00C8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UExtractionFriendsProgressionVM, FriendVMs) == 104, "Offset mismatch for UExtractionFriendsProgressionVM::FriendVMs");
static_assert(offsetof(UExtractionFriendsProgressionVM, LocalPlayerVM) == 120, "Offset mismatch for UExtractionFriendsProgressionVM::LocalPlayerVM");
static_assert(offsetof(UExtractionFriendsProgressionVM, MaxFriendsDisplayed) == 128, "Offset mismatch for UExtractionFriendsProgressionVM::MaxFriendsDisplayed");
static_assert(offsetof(UExtractionFriendsProgressionVM, LeaderboardGameId) == 136, "Offset mismatch for UExtractionFriendsProgressionVM::LeaderboardGameId");
static_assert(offsetof(UExtractionFriendsProgressionVM, LeaderboardEventId) == 152, "Offset mismatch for UExtractionFriendsProgressionVM::LeaderboardEventId");
static_assert(offsetof(UExtractionFriendsProgressionVM, LeaderboardWindowId) == 168, "Offset mismatch for UExtractionFriendsProgressionVM::LeaderboardWindowId");
static_assert(offsetof(UExtractionFriendsProgressionVM, LeaderboardTrackedStat) == 184, "Offset mismatch for UExtractionFriendsProgressionVM::LeaderboardTrackedStat");
static_assert(offsetof(UExtractionFriendsProgressionVM, RequestingPlayer) == 200, "Offset mismatch for UExtractionFriendsProgressionVM::RequestingPlayer");

// /Script/SpriteExtractionFrontendUI.ExtractionProgressionScreen
// Kind: Class; super: CommonActivatableWidget
class UExtractionProgressionScreen
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    std::uint8_t NextBundleDate[0x8]; // 0x04A0 (Size: 0x8, Type: StructProperty)
    FString TrackedMasteryTokenName; // 0x04A8 (Size: 0x10, Type: StrProperty)
    FString ProgressionScheduleTemplateId; // 0x04B8 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0001[0x8]; // 0x04C8
    TArray<void*> CachedPunchCardVMs; // 0x04D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedChallengeBundles; // 0x04E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UExtractionProgressionScreen, NextBundleDate) == 1184, "Offset mismatch for UExtractionProgressionScreen::NextBundleDate");
static_assert(offsetof(UExtractionProgressionScreen, TrackedMasteryTokenName) == 1192, "Offset mismatch for UExtractionProgressionScreen::TrackedMasteryTokenName");
static_assert(offsetof(UExtractionProgressionScreen, ProgressionScheduleTemplateId) == 1208, "Offset mismatch for UExtractionProgressionScreen::ProgressionScheduleTemplateId");
static_assert(offsetof(UExtractionProgressionScreen, CachedPunchCardVMs) == 1232, "Offset mismatch for UExtractionProgressionScreen::CachedPunchCardVMs");
static_assert(offsetof(UExtractionProgressionScreen, CachedChallengeBundles) == 1248, "Offset mismatch for UExtractionProgressionScreen::CachedChallengeBundles");
