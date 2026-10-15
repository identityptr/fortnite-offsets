/**
 * decamp dumper generated SDK
 * Package: /Script/SparksCoreUI
 */
#pragma once
#include "Basic.h"

// /Script/SparksCoreUI.DynamicUISceneRequest
// Kind: ScriptStruct; super: none
struct FDynamicUISceneRequest
{
public:
    void* Requester; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Scene; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDynamicUISceneRequest, Requester) == 0, "Offset mismatch for FDynamicUISceneRequest::Requester");
static_assert(offsetof(FDynamicUISceneRequest, Scene) == 8, "Offset mismatch for FDynamicUISceneRequest::Scene");

// /Script/SparksCoreUI.DynamicUISceneRequestData
// Kind: ScriptStruct; super: none
struct FDynamicUISceneRequestData
{
public:
    std::uint8_t Request[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDynamicUISceneRequestData, Request) == 0, "Offset mismatch for FDynamicUISceneRequestData::Request");

// /Script/SparksCoreUI.DynamicUISceneRequestHandle
// Kind: ScriptStruct; super: none
struct FDynamicUISceneRequestHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCoreUI.ShowSparksQuestScreenEvent
// Kind: ScriptStruct; super: none
struct FShowSparksQuestScreenEvent
{
public:
    std::uint8_t bShouldShow; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FShowSparksQuestScreenEvent, bShouldShow) == 0, "Offset mismatch for FShowSparksQuestScreenEvent::bShouldShow");

// /Script/SparksCoreUI.SparksEvent_QuestScreenVisibilityChanged
// Kind: ScriptStruct; super: none
struct FSparksEvent_QuestScreenVisibilityChanged
{
public:
    std::uint8_t bIsVisible; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSparksEvent_QuestScreenVisibilityChanged, bIsVisible) == 0, "Offset mismatch for FSparksEvent_QuestScreenVisibilityChanged::bIsVisible");

// /Script/SparksCoreUI.DynamicUISceneRequestCoordinatorComponent
// Kind: Class; super: ActorComponent
class UDynamicUISceneRequestCoordinatorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> AddedScenes; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDynamicUISceneRequestCoordinatorComponent, AddedScenes) == 192, "Offset mismatch for UDynamicUISceneRequestCoordinatorComponent::AddedScenes");

// /Script/SparksCoreUI.DynamicUISceneRequestUtilities
// Kind: Class; super: BlueprintFunctionLibrary
class UDynamicUISceneRequestUtilities
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCoreUI.SparksCoreUIGlobals
// Kind: Class; super: Object
class USparksCoreUIGlobals
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCoreUI.SparksDynamicUIDirector
// Kind: Class; super: DynamicUIDirectorBase
class USparksDynamicUIDirector
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> DefaultScenes; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> OwningLocalPlayer; // 0x0280 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bEnabledDuringReplay; // 0x0288 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0289
    TArray<void*> ScenesManuallyAdded; // 0x0290 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USparksDynamicUIDirector, DefaultScenes) == 624, "Offset mismatch for USparksDynamicUIDirector::DefaultScenes");
static_assert(offsetof(USparksDynamicUIDirector, OwningLocalPlayer) == 640, "Offset mismatch for USparksDynamicUIDirector::OwningLocalPlayer");
static_assert(offsetof(USparksDynamicUIDirector, bEnabledDuringReplay) == 648, "Offset mismatch for USparksDynamicUIDirector::bEnabledDuringReplay");
static_assert(offsetof(USparksDynamicUIDirector, ScenesManuallyAdded) == 656, "Offset mismatch for USparksDynamicUIDirector::ScenesManuallyAdded");

// /Script/SparksCoreUI.SparksEventDrivenForBlueprintVM
// Kind: Class; super: SparksEventDrivenVM
class USparksEventDrivenForBlueprintVM
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t ListenerHelper[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USparksEventDrivenForBlueprintVM, ListenerHelper) == 136, "Offset mismatch for USparksEventDrivenForBlueprintVM::ListenerHelper");

// /Script/SparksCoreUI.SparksEventDrivenVM
// Kind: Class; super: FortPerUserViewModel
class USparksEventDrivenVM
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCoreUI.SparksQuestScreenContainer
// Kind: Class; super: CommonUserWidget
class USparksQuestScreenContainer
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    FName QuestTabID; // 0x0330 (Size: 0x8, Type: NameProperty)
    void* AthenaScreenContainer; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseToggleSongMenuInputAction; // 0x0340 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0341
    void* ToggleSongMenuInputAction; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    double ToggleSongMenuCooldown; // 0x0350 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Pad_0002[0x3C]; // 0x0358
    TWeakObjectPtr<void> EventRouter; // 0x0394 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(USparksQuestScreenContainer, QuestTabID) == 816, "Offset mismatch for USparksQuestScreenContainer::QuestTabID");
static_assert(offsetof(USparksQuestScreenContainer, AthenaScreenContainer) == 824, "Offset mismatch for USparksQuestScreenContainer::AthenaScreenContainer");
static_assert(offsetof(USparksQuestScreenContainer, bUseToggleSongMenuInputAction) == 832, "Offset mismatch for USparksQuestScreenContainer::bUseToggleSongMenuInputAction");
static_assert(offsetof(USparksQuestScreenContainer, ToggleSongMenuInputAction) == 840, "Offset mismatch for USparksQuestScreenContainer::ToggleSongMenuInputAction");
static_assert(offsetof(USparksQuestScreenContainer, ToggleSongMenuCooldown) == 848, "Offset mismatch for USparksQuestScreenContainer::ToggleSongMenuCooldown");
static_assert(offsetof(USparksQuestScreenContainer, EventRouter) == 916, "Offset mismatch for USparksQuestScreenContainer::EventRouter");

// /Script/SparksCoreUI.SparksSocialAvatarIcon
// Kind: Class; super: FortSocialAvatarIcon
class USparksSocialAvatarIcon
{
public:
    std::uint8_t Pad_0000[0x4B0]; // 0x0000
    void* AvatarMaterial; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* InitialIconBrushResource; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> SocialUser; // 0x04C0 (Size: 0x8, Type: WeakObjectProperty)
    void* AvatarTexture; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksSocialAvatarIcon, AvatarMaterial) == 1200, "Offset mismatch for USparksSocialAvatarIcon::AvatarMaterial");
static_assert(offsetof(USparksSocialAvatarIcon, InitialIconBrushResource) == 1208, "Offset mismatch for USparksSocialAvatarIcon::InitialIconBrushResource");
static_assert(offsetof(USparksSocialAvatarIcon, SocialUser) == 1216, "Offset mismatch for USparksSocialAvatarIcon::SocialUser");
static_assert(offsetof(USparksSocialAvatarIcon, AvatarTexture) == 1224, "Offset mismatch for USparksSocialAvatarIcon::AvatarTexture");

// /Script/SparksCoreUI.SparksSongAlphaSortVM
// Kind: Class; super: SparksSongSortVM
class USparksSongAlphaSortVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeparator; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHide; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x007F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksSongAlphaSortVM, Label) == 104, "Offset mismatch for USparksSongAlphaSortVM::Label");
static_assert(offsetof(USparksSongAlphaSortVM, Count) == 120, "Offset mismatch for USparksSongAlphaSortVM::Count");
static_assert(offsetof(USparksSongAlphaSortVM, bIsSeparator) == 124, "Offset mismatch for USparksSongAlphaSortVM::bIsSeparator");
static_assert(offsetof(USparksSongAlphaSortVM, bAutoHide) == 125, "Offset mismatch for USparksSongAlphaSortVM::bAutoHide");
static_assert(offsetof(USparksSongAlphaSortVM, bIsActive) == 126, "Offset mismatch for USparksSongAlphaSortVM::bIsActive");
static_assert(offsetof(USparksSongAlphaSortVM, bIsVisible) == 127, "Offset mismatch for USparksSongAlphaSortVM::bIsVisible");

// /Script/SparksCoreUI.SparksSongArtistSortVM
// Kind: Class; super: SparksSongSortVM
class USparksSongArtistSortVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeparator; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHide; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x007F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksSongArtistSortVM, Label) == 104, "Offset mismatch for USparksSongArtistSortVM::Label");
static_assert(offsetof(USparksSongArtistSortVM, Count) == 120, "Offset mismatch for USparksSongArtistSortVM::Count");
static_assert(offsetof(USparksSongArtistSortVM, bIsSeparator) == 124, "Offset mismatch for USparksSongArtistSortVM::bIsSeparator");
static_assert(offsetof(USparksSongArtistSortVM, bAutoHide) == 125, "Offset mismatch for USparksSongArtistSortVM::bAutoHide");
static_assert(offsetof(USparksSongArtistSortVM, bIsActive) == 126, "Offset mismatch for USparksSongArtistSortVM::bIsActive");
static_assert(offsetof(USparksSongArtistSortVM, bIsVisible) == 127, "Offset mismatch for USparksSongArtistSortVM::bIsVisible");

// /Script/SparksCoreUI.SparksSongFeaturedSortVM
// Kind: Class; super: SparksSongSortVM
class USparksSongFeaturedSortVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeparator; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHide; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x007F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksSongFeaturedSortVM, Label) == 104, "Offset mismatch for USparksSongFeaturedSortVM::Label");
static_assert(offsetof(USparksSongFeaturedSortVM, Count) == 120, "Offset mismatch for USparksSongFeaturedSortVM::Count");
static_assert(offsetof(USparksSongFeaturedSortVM, bIsSeparator) == 124, "Offset mismatch for USparksSongFeaturedSortVM::bIsSeparator");
static_assert(offsetof(USparksSongFeaturedSortVM, bAutoHide) == 125, "Offset mismatch for USparksSongFeaturedSortVM::bAutoHide");
static_assert(offsetof(USparksSongFeaturedSortVM, bIsActive) == 126, "Offset mismatch for USparksSongFeaturedSortVM::bIsActive");
static_assert(offsetof(USparksSongFeaturedSortVM, bIsVisible) == 127, "Offset mismatch for USparksSongFeaturedSortVM::bIsVisible");

// /Script/SparksCoreUI.SparksSongFilterAvailableVM
// Kind: Class; super: SparksSongFilterItemVM
class USparksSongFilterAvailableVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeparator; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHide; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x007F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksSongFilterAvailableVM, Label) == 104, "Offset mismatch for USparksSongFilterAvailableVM::Label");
static_assert(offsetof(USparksSongFilterAvailableVM, Count) == 120, "Offset mismatch for USparksSongFilterAvailableVM::Count");
static_assert(offsetof(USparksSongFilterAvailableVM, bIsSeparator) == 124, "Offset mismatch for USparksSongFilterAvailableVM::bIsSeparator");
static_assert(offsetof(USparksSongFilterAvailableVM, bAutoHide) == 125, "Offset mismatch for USparksSongFilterAvailableVM::bAutoHide");
static_assert(offsetof(USparksSongFilterAvailableVM, bIsActive) == 126, "Offset mismatch for USparksSongFilterAvailableVM::bIsActive");
static_assert(offsetof(USparksSongFilterAvailableVM, bIsVisible) == 127, "Offset mismatch for USparksSongFilterAvailableVM::bIsVisible");

// /Script/SparksCoreUI.SparksSongFilterFeaturedVM
// Kind: Class; super: SparksSongFilterItemVM
class USparksSongFilterFeaturedVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeparator; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHide; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x007F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksSongFilterFeaturedVM, Label) == 104, "Offset mismatch for USparksSongFilterFeaturedVM::Label");
static_assert(offsetof(USparksSongFilterFeaturedVM, Count) == 120, "Offset mismatch for USparksSongFilterFeaturedVM::Count");
static_assert(offsetof(USparksSongFilterFeaturedVM, bIsSeparator) == 124, "Offset mismatch for USparksSongFilterFeaturedVM::bIsSeparator");
static_assert(offsetof(USparksSongFilterFeaturedVM, bAutoHide) == 125, "Offset mismatch for USparksSongFilterFeaturedVM::bAutoHide");
static_assert(offsetof(USparksSongFilterFeaturedVM, bIsActive) == 126, "Offset mismatch for USparksSongFilterFeaturedVM::bIsActive");
static_assert(offsetof(USparksSongFilterFeaturedVM, bIsVisible) == 127, "Offset mismatch for USparksSongFilterFeaturedVM::bIsVisible");

// /Script/SparksCoreUI.SparksSongFilterItemVM
// Kind: Class; super: FortFilterItemVM
class USparksSongFilterItemVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeparator; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHide; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x007F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksSongFilterItemVM, Label) == 104, "Offset mismatch for USparksSongFilterItemVM::Label");
static_assert(offsetof(USparksSongFilterItemVM, Count) == 120, "Offset mismatch for USparksSongFilterItemVM::Count");
static_assert(offsetof(USparksSongFilterItemVM, bIsSeparator) == 124, "Offset mismatch for USparksSongFilterItemVM::bIsSeparator");
static_assert(offsetof(USparksSongFilterItemVM, bAutoHide) == 125, "Offset mismatch for USparksSongFilterItemVM::bAutoHide");
static_assert(offsetof(USparksSongFilterItemVM, bIsActive) == 126, "Offset mismatch for USparksSongFilterItemVM::bIsActive");
static_assert(offsetof(USparksSongFilterItemVM, bIsVisible) == 127, "Offset mismatch for USparksSongFilterItemVM::bIsVisible");

// /Script/SparksCoreUI.SparksSongFilterOptionVM
// Kind: Class; super: FortOptionItemVM
class USparksSongFilterOptionVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeparator; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHide; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x007F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksSongFilterOptionVM, Label) == 104, "Offset mismatch for USparksSongFilterOptionVM::Label");
static_assert(offsetof(USparksSongFilterOptionVM, Count) == 120, "Offset mismatch for USparksSongFilterOptionVM::Count");
static_assert(offsetof(USparksSongFilterOptionVM, bIsSeparator) == 124, "Offset mismatch for USparksSongFilterOptionVM::bIsSeparator");
static_assert(offsetof(USparksSongFilterOptionVM, bAutoHide) == 125, "Offset mismatch for USparksSongFilterOptionVM::bAutoHide");
static_assert(offsetof(USparksSongFilterOptionVM, bIsActive) == 126, "Offset mismatch for USparksSongFilterOptionVM::bIsActive");
static_assert(offsetof(USparksSongFilterOptionVM, bIsVisible) == 127, "Offset mismatch for USparksSongFilterOptionVM::bIsVisible");

// /Script/SparksCoreUI.SparksSongFilterOwnedVM
// Kind: Class; super: SparksSongFilterItemVM
class USparksSongFilterOwnedVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeparator; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHide; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x007F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksSongFilterOwnedVM, Label) == 104, "Offset mismatch for USparksSongFilterOwnedVM::Label");
static_assert(offsetof(USparksSongFilterOwnedVM, Count) == 120, "Offset mismatch for USparksSongFilterOwnedVM::Count");
static_assert(offsetof(USparksSongFilterOwnedVM, bIsSeparator) == 124, "Offset mismatch for USparksSongFilterOwnedVM::bIsSeparator");
static_assert(offsetof(USparksSongFilterOwnedVM, bAutoHide) == 125, "Offset mismatch for USparksSongFilterOwnedVM::bAutoHide");
static_assert(offsetof(USparksSongFilterOwnedVM, bIsActive) == 126, "Offset mismatch for USparksSongFilterOwnedVM::bIsActive");
static_assert(offsetof(USparksSongFilterOwnedVM, bIsVisible) == 127, "Offset mismatch for USparksSongFilterOwnedVM::bIsVisible");

// /Script/SparksCoreUI.SparksSongFilterVM
// Kind: Class; super: MVVMViewModelBase
class USparksSongFilterVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* SortFilter; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> FilteredCatalogItems; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FilteredSongItems; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OwningController; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* ItemVMClass; // 0x0098 (Size: 0x8, Type: ClassProperty)
    void* LockerConfig; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksSongFilterVM, SortFilter) == 104, "Offset mismatch for USparksSongFilterVM::SortFilter");
static_assert(offsetof(USparksSongFilterVM, FilteredCatalogItems) == 112, "Offset mismatch for USparksSongFilterVM::FilteredCatalogItems");
static_assert(offsetof(USparksSongFilterVM, FilteredSongItems) == 128, "Offset mismatch for USparksSongFilterVM::FilteredSongItems");
static_assert(offsetof(USparksSongFilterVM, OwningController) == 144, "Offset mismatch for USparksSongFilterVM::OwningController");
static_assert(offsetof(USparksSongFilterVM, ItemVMClass) == 152, "Offset mismatch for USparksSongFilterVM::ItemVMClass");
static_assert(offsetof(USparksSongFilterVM, LockerConfig) == 160, "Offset mismatch for USparksSongFilterVM::LockerConfig");

// /Script/SparksCoreUI.SparksSongItemDetailsVM
// Kind: Class; super: AthenaItemDetailsVM
class USparksSongItemDetailsVM
{
public:
    std::uint8_t Pad_0000[0x222]; // 0x0000
    std::uint8_t SongStatus; // 0x0222 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0223
    TWeakObjectPtr<void> CachedSongData; // 0x0224 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x022C
    void* CoverArt; // 0x0230 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksSongItemDetailsVM, SongStatus) == 546, "Offset mismatch for USparksSongItemDetailsVM::SongStatus");
static_assert(offsetof(USparksSongItemDetailsVM, CachedSongData) == 548, "Offset mismatch for USparksSongItemDetailsVM::CachedSongData");
static_assert(offsetof(USparksSongItemDetailsVM, CoverArt) == 560, "Offset mismatch for USparksSongItemDetailsVM::CoverArt");

// /Script/SparksCoreUI.SparksSongItemVM
// Kind: Class; super: AthenaItemVM
class USparksSongItemVM
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* VariantItemDefinition; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksSongItemVM, VariantItemDefinition) == 224, "Offset mismatch for USparksSongItemVM::VariantItemDefinition");

// /Script/SparksCoreUI.SparksSongLockerCategoryConfig
// Kind: Class; super: AthenaLockerCategoryConfig
class USparksSongLockerCategoryConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> CustomWidgetClasses; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CustomActivatableWidgetClasses; // 0x0038 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> CustomDialogVMClasses; // 0x0048 (Size: 0x10, Type: MapProperty)
    std::uint8_t PrimaryProductTag[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    void* CompatibilityConfig; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CustomCategoryItem[0x20]; // 0x0068 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CustomItem[0x20]; // 0x0088 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CustomCategoryEditor[0x20]; // 0x00A8 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CustomItemDetails[0x20]; // 0x00C8 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CustomInspectScreenBanner[0x20]; // 0x00E8 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ItemShopTileImageRuleset; // 0x0108 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0109
    TMap<void*, void*> ItemShopTileImageRulesetForProduct; // 0x0110 (Size: 0x10, Type: MapProperty)
    std::uint8_t LoadingIcon2dPreview[0x20]; // 0x0120 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SlotInfo[0xA0]; // 0x0140 (Size: 0xA0, Type: StructProperty)
    TArray<void*> AdditionalSlotInfo; // 0x01E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CategoryNameOverride[0x10]; // 0x01F0 (Size: 0x10, Type: TextProperty)
    std::uint8_t ItemUsageDescription[0x10]; // 0x0200 (Size: 0x10, Type: TextProperty)
    TArray<void*> LoadoutSlots; // 0x0210 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultSortType; // 0x0220 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bDefaultShowFavoritesOnly; // 0x0221 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0222
    TArray<void*> SortConfigs; // 0x0228 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FilterConfigs; // 0x0238 (Size: 0x10, Type: ArrayProperty)
    void* SortFilterProvider; // 0x0248 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GameplayTagFilterOutQuery[0x48]; // 0x0250 (Size: 0x48, Type: StructProperty)
    std::int32_t RandomizationPriority; // 0x0298 (Size: 0x4, Type: IntProperty)
    float PassIconPresentationScale; // 0x029C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowEmptySelection; // 0x02A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowDuplicatesDuringRandomization; // 0x02A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowFallbackToDefaultProduct; // 0x02A2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConditionallyFilterVariantToken; // 0x02A3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReportContentGatedEquippedItems; // 0x02A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bValidateCompatibility; // 0x02A5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowCompatibility; // 0x02A6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowIfEmpty; // 0x02A7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowStyleText; // 0x02A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanApplyToAll; // 0x02A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayAsModal; // 0x02AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAreVariantsSupported; // 0x02AB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowSmallCategoryIcon; // 0x02AC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSecondaryEquipShowNumbers; // 0x02AD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowCompatibleItemVmExpansion; // 0x02AE (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksSongLockerCategoryConfig, CustomWidgetClasses) == 40, "Offset mismatch for USparksSongLockerCategoryConfig::CustomWidgetClasses");
static_assert(offsetof(USparksSongLockerCategoryConfig, CustomActivatableWidgetClasses) == 56, "Offset mismatch for USparksSongLockerCategoryConfig::CustomActivatableWidgetClasses");
static_assert(offsetof(USparksSongLockerCategoryConfig, CustomDialogVMClasses) == 72, "Offset mismatch for USparksSongLockerCategoryConfig::CustomDialogVMClasses");
static_assert(offsetof(USparksSongLockerCategoryConfig, PrimaryProductTag) == 88, "Offset mismatch for USparksSongLockerCategoryConfig::PrimaryProductTag");
static_assert(offsetof(USparksSongLockerCategoryConfig, CompatibilityConfig) == 96, "Offset mismatch for USparksSongLockerCategoryConfig::CompatibilityConfig");
static_assert(offsetof(USparksSongLockerCategoryConfig, CustomCategoryItem) == 104, "Offset mismatch for USparksSongLockerCategoryConfig::CustomCategoryItem");
static_assert(offsetof(USparksSongLockerCategoryConfig, CustomItem) == 136, "Offset mismatch for USparksSongLockerCategoryConfig::CustomItem");
static_assert(offsetof(USparksSongLockerCategoryConfig, CustomCategoryEditor) == 168, "Offset mismatch for USparksSongLockerCategoryConfig::CustomCategoryEditor");
static_assert(offsetof(USparksSongLockerCategoryConfig, CustomItemDetails) == 200, "Offset mismatch for USparksSongLockerCategoryConfig::CustomItemDetails");
static_assert(offsetof(USparksSongLockerCategoryConfig, CustomInspectScreenBanner) == 232, "Offset mismatch for USparksSongLockerCategoryConfig::CustomInspectScreenBanner");
static_assert(offsetof(USparksSongLockerCategoryConfig, ItemShopTileImageRuleset) == 264, "Offset mismatch for USparksSongLockerCategoryConfig::ItemShopTileImageRuleset");
static_assert(offsetof(USparksSongLockerCategoryConfig, ItemShopTileImageRulesetForProduct) == 272, "Offset mismatch for USparksSongLockerCategoryConfig::ItemShopTileImageRulesetForProduct");
static_assert(offsetof(USparksSongLockerCategoryConfig, LoadingIcon2dPreview) == 288, "Offset mismatch for USparksSongLockerCategoryConfig::LoadingIcon2dPreview");
static_assert(offsetof(USparksSongLockerCategoryConfig, SlotInfo) == 320, "Offset mismatch for USparksSongLockerCategoryConfig::SlotInfo");
static_assert(offsetof(USparksSongLockerCategoryConfig, AdditionalSlotInfo) == 480, "Offset mismatch for USparksSongLockerCategoryConfig::AdditionalSlotInfo");
static_assert(offsetof(USparksSongLockerCategoryConfig, CategoryNameOverride) == 496, "Offset mismatch for USparksSongLockerCategoryConfig::CategoryNameOverride");
static_assert(offsetof(USparksSongLockerCategoryConfig, ItemUsageDescription) == 512, "Offset mismatch for USparksSongLockerCategoryConfig::ItemUsageDescription");
static_assert(offsetof(USparksSongLockerCategoryConfig, LoadoutSlots) == 528, "Offset mismatch for USparksSongLockerCategoryConfig::LoadoutSlots");
static_assert(offsetof(USparksSongLockerCategoryConfig, DefaultSortType) == 544, "Offset mismatch for USparksSongLockerCategoryConfig::DefaultSortType");
static_assert(offsetof(USparksSongLockerCategoryConfig, bDefaultShowFavoritesOnly) == 545, "Offset mismatch for USparksSongLockerCategoryConfig::bDefaultShowFavoritesOnly");
static_assert(offsetof(USparksSongLockerCategoryConfig, SortConfigs) == 552, "Offset mismatch for USparksSongLockerCategoryConfig::SortConfigs");
static_assert(offsetof(USparksSongLockerCategoryConfig, FilterConfigs) == 568, "Offset mismatch for USparksSongLockerCategoryConfig::FilterConfigs");
static_assert(offsetof(USparksSongLockerCategoryConfig, SortFilterProvider) == 584, "Offset mismatch for USparksSongLockerCategoryConfig::SortFilterProvider");
static_assert(offsetof(USparksSongLockerCategoryConfig, GameplayTagFilterOutQuery) == 592, "Offset mismatch for USparksSongLockerCategoryConfig::GameplayTagFilterOutQuery");
static_assert(offsetof(USparksSongLockerCategoryConfig, RandomizationPriority) == 664, "Offset mismatch for USparksSongLockerCategoryConfig::RandomizationPriority");
static_assert(offsetof(USparksSongLockerCategoryConfig, PassIconPresentationScale) == 668, "Offset mismatch for USparksSongLockerCategoryConfig::PassIconPresentationScale");
static_assert(offsetof(USparksSongLockerCategoryConfig, bAllowEmptySelection) == 672, "Offset mismatch for USparksSongLockerCategoryConfig::bAllowEmptySelection");
static_assert(offsetof(USparksSongLockerCategoryConfig, bAllowDuplicatesDuringRandomization) == 673, "Offset mismatch for USparksSongLockerCategoryConfig::bAllowDuplicatesDuringRandomization");
static_assert(offsetof(USparksSongLockerCategoryConfig, bAllowFallbackToDefaultProduct) == 674, "Offset mismatch for USparksSongLockerCategoryConfig::bAllowFallbackToDefaultProduct");
static_assert(offsetof(USparksSongLockerCategoryConfig, bConditionallyFilterVariantToken) == 675, "Offset mismatch for USparksSongLockerCategoryConfig::bConditionallyFilterVariantToken");
static_assert(offsetof(USparksSongLockerCategoryConfig, bReportContentGatedEquippedItems) == 676, "Offset mismatch for USparksSongLockerCategoryConfig::bReportContentGatedEquippedItems");
static_assert(offsetof(USparksSongLockerCategoryConfig, bValidateCompatibility) == 677, "Offset mismatch for USparksSongLockerCategoryConfig::bValidateCompatibility");
static_assert(offsetof(USparksSongLockerCategoryConfig, bShowCompatibility) == 678, "Offset mismatch for USparksSongLockerCategoryConfig::bShowCompatibility");
static_assert(offsetof(USparksSongLockerCategoryConfig, bShowIfEmpty) == 679, "Offset mismatch for USparksSongLockerCategoryConfig::bShowIfEmpty");
static_assert(offsetof(USparksSongLockerCategoryConfig, bShowStyleText) == 680, "Offset mismatch for USparksSongLockerCategoryConfig::bShowStyleText");
static_assert(offsetof(USparksSongLockerCategoryConfig, bCanApplyToAll) == 681, "Offset mismatch for USparksSongLockerCategoryConfig::bCanApplyToAll");
static_assert(offsetof(USparksSongLockerCategoryConfig, bDisplayAsModal) == 682, "Offset mismatch for USparksSongLockerCategoryConfig::bDisplayAsModal");
static_assert(offsetof(USparksSongLockerCategoryConfig, bAreVariantsSupported) == 683, "Offset mismatch for USparksSongLockerCategoryConfig::bAreVariantsSupported");
static_assert(offsetof(USparksSongLockerCategoryConfig, bShowSmallCategoryIcon) == 684, "Offset mismatch for USparksSongLockerCategoryConfig::bShowSmallCategoryIcon");
static_assert(offsetof(USparksSongLockerCategoryConfig, bSecondaryEquipShowNumbers) == 685, "Offset mismatch for USparksSongLockerCategoryConfig::bSecondaryEquipShowNumbers");
static_assert(offsetof(USparksSongLockerCategoryConfig, bAllowCompatibleItemVmExpansion) == 686, "Offset mismatch for USparksSongLockerCategoryConfig::bAllowCompatibleItemVmExpansion");

// /Script/SparksCoreUI.SparksSongLockerCategoryGroupCollectionVM
// Kind: Class; super: FortLockerCategoryGroupCollectionVM
class USparksSongLockerCategoryGroupCollectionVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TWeakObjectPtr<void> PlayerController; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    void* CollectionConfig; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* Icon; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CategoryGroups; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NewItemsCount; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::int32_t GatedItemsCount; // 0x0094 (Size: 0x4, Type: IntProperty)
    std::int32_t ArchivedItemsCount; // 0x0098 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsShuffleArchetype; // 0x009C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksSongLockerCategoryGroupCollectionVM, PlayerController) == 104, "Offset mismatch for USparksSongLockerCategoryGroupCollectionVM::PlayerController");
static_assert(offsetof(USparksSongLockerCategoryGroupCollectionVM, CollectionConfig) == 112, "Offset mismatch for USparksSongLockerCategoryGroupCollectionVM::CollectionConfig");
static_assert(offsetof(USparksSongLockerCategoryGroupCollectionVM, Icon) == 120, "Offset mismatch for USparksSongLockerCategoryGroupCollectionVM::Icon");
static_assert(offsetof(USparksSongLockerCategoryGroupCollectionVM, CategoryGroups) == 128, "Offset mismatch for USparksSongLockerCategoryGroupCollectionVM::CategoryGroups");
static_assert(offsetof(USparksSongLockerCategoryGroupCollectionVM, NewItemsCount) == 144, "Offset mismatch for USparksSongLockerCategoryGroupCollectionVM::NewItemsCount");
static_assert(offsetof(USparksSongLockerCategoryGroupCollectionVM, GatedItemsCount) == 148, "Offset mismatch for USparksSongLockerCategoryGroupCollectionVM::GatedItemsCount");
static_assert(offsetof(USparksSongLockerCategoryGroupCollectionVM, ArchivedItemsCount) == 152, "Offset mismatch for USparksSongLockerCategoryGroupCollectionVM::ArchivedItemsCount");
static_assert(offsetof(USparksSongLockerCategoryGroupCollectionVM, bIsShuffleArchetype) == 156, "Offset mismatch for USparksSongLockerCategoryGroupCollectionVM::bIsShuffleArchetype");

// /Script/SparksCoreUI.SparksSongOwnedSortVM
// Kind: Class; super: SparksSongSortVM
class USparksSongOwnedSortVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeparator; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHide; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x007F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksSongOwnedSortVM, Label) == 104, "Offset mismatch for USparksSongOwnedSortVM::Label");
static_assert(offsetof(USparksSongOwnedSortVM, Count) == 120, "Offset mismatch for USparksSongOwnedSortVM::Count");
static_assert(offsetof(USparksSongOwnedSortVM, bIsSeparator) == 124, "Offset mismatch for USparksSongOwnedSortVM::bIsSeparator");
static_assert(offsetof(USparksSongOwnedSortVM, bAutoHide) == 125, "Offset mismatch for USparksSongOwnedSortVM::bAutoHide");
static_assert(offsetof(USparksSongOwnedSortVM, bIsActive) == 126, "Offset mismatch for USparksSongOwnedSortVM::bIsActive");
static_assert(offsetof(USparksSongOwnedSortVM, bIsVisible) == 127, "Offset mismatch for USparksSongOwnedSortVM::bIsVisible");

// /Script/SparksCoreUI.SparksSongSearchTextVM
// Kind: Class; super: FortSortFilterSearchTextVM
class USparksSongSearchTextVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t SearchText[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    TArray<void*> StringSuggestions; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USparksSongSearchTextVM, SearchText) == 104, "Offset mismatch for USparksSongSearchTextVM::SearchText");
static_assert(offsetof(USparksSongSearchTextVM, StringSuggestions) == 120, "Offset mismatch for USparksSongSearchTextVM::StringSuggestions");

// /Script/SparksCoreUI.SparksSongSecondaryFilterUnarchivedOnlyVM
// Kind: Class; super: SparksSongSecondaryFilterVM
class USparksSongSecondaryFilterUnarchivedOnlyVM
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* OldProfile; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksSongSecondaryFilterUnarchivedOnlyVM, OldProfile) == 192, "Offset mismatch for USparksSongSecondaryFilterUnarchivedOnlyVM::OldProfile");

// /Script/SparksCoreUI.SparksSongSecondaryFilterVM
// Kind: Class; super: SparksSongFilterOptionVM
class USparksSongSecondaryFilterVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeparator; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHide; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x007F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksSongSecondaryFilterVM, Label) == 104, "Offset mismatch for USparksSongSecondaryFilterVM::Label");
static_assert(offsetof(USparksSongSecondaryFilterVM, Count) == 120, "Offset mismatch for USparksSongSecondaryFilterVM::Count");
static_assert(offsetof(USparksSongSecondaryFilterVM, bIsSeparator) == 124, "Offset mismatch for USparksSongSecondaryFilterVM::bIsSeparator");
static_assert(offsetof(USparksSongSecondaryFilterVM, bAutoHide) == 125, "Offset mismatch for USparksSongSecondaryFilterVM::bAutoHide");
static_assert(offsetof(USparksSongSecondaryFilterVM, bIsActive) == 126, "Offset mismatch for USparksSongSecondaryFilterVM::bIsActive");
static_assert(offsetof(USparksSongSecondaryFilterVM, bIsVisible) == 127, "Offset mismatch for USparksSongSecondaryFilterVM::bIsVisible");

// /Script/SparksCoreUI.SparksSongSortVM
// Kind: Class; super: FortSortItemVM
class USparksSongSortVM
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::int32_t Count; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsSeparator; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHide; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x007F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USparksSongSortVM, Label) == 104, "Offset mismatch for USparksSongSortVM::Label");
static_assert(offsetof(USparksSongSortVM, Count) == 120, "Offset mismatch for USparksSongSortVM::Count");
static_assert(offsetof(USparksSongSortVM, bIsSeparator) == 124, "Offset mismatch for USparksSongSortVM::bIsSeparator");
static_assert(offsetof(USparksSongSortVM, bAutoHide) == 125, "Offset mismatch for USparksSongSortVM::bAutoHide");
static_assert(offsetof(USparksSongSortVM, bIsActive) == 126, "Offset mismatch for USparksSongSortVM::bIsActive");
static_assert(offsetof(USparksSongSortVM, bIsVisible) == 127, "Offset mismatch for USparksSongSortVM::bIsVisible");

// /Script/SparksCoreUI.SparksTouchButtonBase
// Kind: Class; super: CommonUserWidget
class USparksTouchButtonBase
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    void* PressAction; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WidgetTransitionType; // 0x0340 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DeactivateInputActionIfDragOutsideHitbox; // 0x0341 (Size: 0x1, Type: BoolProperty)
    std::uint8_t DeactivateInputActionIfCollapsed; // 0x0342 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0343
    std::uint8_t PressedColor[0x10]; // 0x0344 (Size: 0x10, Type: StructProperty)
    std::uint8_t ReleasedColor[0x14]; // 0x0354 (Size: 0x14, Type: StructProperty)
    void* Image_Icon; // 0x0368 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksTouchButtonBase, PressAction) == 824, "Offset mismatch for USparksTouchButtonBase::PressAction");
static_assert(offsetof(USparksTouchButtonBase, WidgetTransitionType) == 832, "Offset mismatch for USparksTouchButtonBase::WidgetTransitionType");
static_assert(offsetof(USparksTouchButtonBase, DeactivateInputActionIfDragOutsideHitbox) == 833, "Offset mismatch for USparksTouchButtonBase::DeactivateInputActionIfDragOutsideHitbox");
static_assert(offsetof(USparksTouchButtonBase, DeactivateInputActionIfCollapsed) == 834, "Offset mismatch for USparksTouchButtonBase::DeactivateInputActionIfCollapsed");
static_assert(offsetof(USparksTouchButtonBase, PressedColor) == 836, "Offset mismatch for USparksTouchButtonBase::PressedColor");
static_assert(offsetof(USparksTouchButtonBase, ReleasedColor) == 852, "Offset mismatch for USparksTouchButtonBase::ReleasedColor");
static_assert(offsetof(USparksTouchButtonBase, Image_Icon) == 872, "Offset mismatch for USparksTouchButtonBase::Image_Icon");
