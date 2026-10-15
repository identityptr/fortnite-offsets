/**
 * decamp dumper generated SDK
 * Package: /Script/FortPlaylistTravelUI
 */
#pragma once
#include "Basic.h"

// /Script/FortPlaylistTravelUI.FortPlaylistTravelUIData
// Kind: ScriptStruct; super: TableRowBase
struct FFortPlaylistTravelUIData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Description[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    std::uint8_t bFullScreenLoading; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    std::uint8_t PreviewImage[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SmallPreviewImage[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> TravelingBackgroundImage; // 0x0060 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FFortPlaylistTravelUIData, Description) == 8, "Offset mismatch for FFortPlaylistTravelUIData::Description");
static_assert(offsetof(FFortPlaylistTravelUIData, bFullScreenLoading) == 24, "Offset mismatch for FFortPlaylistTravelUIData::bFullScreenLoading");
static_assert(offsetof(FFortPlaylistTravelUIData, PreviewImage) == 32, "Offset mismatch for FFortPlaylistTravelUIData::PreviewImage");
static_assert(offsetof(FFortPlaylistTravelUIData, SmallPreviewImage) == 64, "Offset mismatch for FFortPlaylistTravelUIData::SmallPreviewImage");
static_assert(offsetof(FFortPlaylistTravelUIData, TravelingBackgroundImage) == 96, "Offset mismatch for FFortPlaylistTravelUIData::TravelingBackgroundImage");

// /Script/FortPlaylistTravelUI.FortPlaylistTravelUIModalSceneOperation
// Kind: ScriptStruct; super: none
struct FFortPlaylistTravelUIModalSceneOperation
{
public:
    TWeakObjectPtr<void> ModalScene; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> Payload; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFortPlaylistTravelUIModalSceneOperation, ModalScene) == 0, "Offset mismatch for FFortPlaylistTravelUIModalSceneOperation::ModalScene");
static_assert(offsetof(FFortPlaylistTravelUIModalSceneOperation, Payload) == 8, "Offset mismatch for FFortPlaylistTravelUIModalSceneOperation::Payload");

// /Script/FortPlaylistTravelUI.FortPlaylistTravelUIModalSelectionChoice
// Kind: ScriptStruct; super: none
struct FFortPlaylistTravelUIModalSelectionChoice
{
public:
    std::uint8_t SelectionTitle[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t Action[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate SelectionDelegate; // 0x0020 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(FFortPlaylistTravelUIModalSelectionChoice, SelectionTitle) == 0, "Offset mismatch for FFortPlaylistTravelUIModalSelectionChoice::SelectionTitle");
static_assert(offsetof(FFortPlaylistTravelUIModalSelectionChoice, Action) == 16, "Offset mismatch for FFortPlaylistTravelUIModalSelectionChoice::Action");
static_assert(offsetof(FFortPlaylistTravelUIModalSelectionChoice, SelectionDelegate) == 32, "Offset mismatch for FFortPlaylistTravelUIModalSelectionChoice::SelectionDelegate");

// /Script/FortPlaylistTravelUI.FortPlaylistTravelEntryViewModel
// Kind: Class; super: FortPerUserViewModel
class UFortPlaylistTravelEntryViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t GameTravelUIDataRegistryType[0x49]; // 0x0078 (Size: 0x49, Type: StructProperty)
    std::uint8_t PrivacyOverride; // 0x00C1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00C2
    void* ActivityViewModel; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CanInitiateGameTravel; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t GameTravelLockedReason; // 0x00D1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bFullScreenLoading; // 0x00D2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x5]; // 0x00D3
    std::uint8_t SmallPreviewImage[0x20]; // 0x00D8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t PreviewImage[0x20]; // 0x00F8 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> TravelingBackgroundImage; // 0x0118 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UFortPlaylistTravelEntryViewModel, GameTravelUIDataRegistryType) == 120, "Offset mismatch for UFortPlaylistTravelEntryViewModel::GameTravelUIDataRegistryType");
static_assert(offsetof(UFortPlaylistTravelEntryViewModel, PrivacyOverride) == 193, "Offset mismatch for UFortPlaylistTravelEntryViewModel::PrivacyOverride");
static_assert(offsetof(UFortPlaylistTravelEntryViewModel, ActivityViewModel) == 200, "Offset mismatch for UFortPlaylistTravelEntryViewModel::ActivityViewModel");
static_assert(offsetof(UFortPlaylistTravelEntryViewModel, CanInitiateGameTravel) == 208, "Offset mismatch for UFortPlaylistTravelEntryViewModel::CanInitiateGameTravel");
static_assert(offsetof(UFortPlaylistTravelEntryViewModel, GameTravelLockedReason) == 209, "Offset mismatch for UFortPlaylistTravelEntryViewModel::GameTravelLockedReason");
static_assert(offsetof(UFortPlaylistTravelEntryViewModel, bFullScreenLoading) == 210, "Offset mismatch for UFortPlaylistTravelEntryViewModel::bFullScreenLoading");
static_assert(offsetof(UFortPlaylistTravelEntryViewModel, SmallPreviewImage) == 216, "Offset mismatch for UFortPlaylistTravelEntryViewModel::SmallPreviewImage");
static_assert(offsetof(UFortPlaylistTravelEntryViewModel, PreviewImage) == 248, "Offset mismatch for UFortPlaylistTravelEntryViewModel::PreviewImage");
static_assert(offsetof(UFortPlaylistTravelEntryViewModel, TravelingBackgroundImage) == 280, "Offset mismatch for UFortPlaylistTravelEntryViewModel::TravelingBackgroundImage");

// /Script/FortPlaylistTravelUI.FortPlaylistTravelUIComponent
// Kind: Class; super: ActorComponent
class UFortPlaylistTravelUIComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnFortWidgetsCreatedInDynamicUI; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* CurrentUIDirector; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlaylistTravelUIComponent, OnFortWidgetsCreatedInDynamicUI) == 192, "Offset mismatch for UFortPlaylistTravelUIComponent::OnFortWidgetsCreatedInDynamicUI");
static_assert(offsetof(UFortPlaylistTravelUIComponent, CurrentUIDirector) == 208, "Offset mismatch for UFortPlaylistTravelUIComponent::CurrentUIDirector");

// /Script/FortPlaylistTravelUI.FortPlaylistTravelUIFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UFortPlaylistTravelUIFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortPlaylistTravelUI.FortPlaylistTravelUIModalSelectionContext
// Kind: Class; super: Object
class UFortPlaylistTravelUIModalSelectionContext
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Title[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    TArray<void*> Choices; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate TouchCloseDelegate; // 0x0058 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* InitObject; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlaylistTravelUIModalSelectionContext, Title) == 40, "Offset mismatch for UFortPlaylistTravelUIModalSelectionContext::Title");
static_assert(offsetof(UFortPlaylistTravelUIModalSelectionContext, Description) == 56, "Offset mismatch for UFortPlaylistTravelUIModalSelectionContext::Description");
static_assert(offsetof(UFortPlaylistTravelUIModalSelectionContext, Choices) == 72, "Offset mismatch for UFortPlaylistTravelUIModalSelectionContext::Choices");
static_assert(offsetof(UFortPlaylistTravelUIModalSelectionContext, TouchCloseDelegate) == 88, "Offset mismatch for UFortPlaylistTravelUIModalSelectionContext::TouchCloseDelegate");
static_assert(offsetof(UFortPlaylistTravelUIModalSelectionContext, InitObject) == 104, "Offset mismatch for UFortPlaylistTravelUIModalSelectionContext::InitObject");

// /Script/FortPlaylistTravelUI.FortPlaylistTravelUISelectionModal
// Kind: Class; super: CommonActivatableWidget
class UFortPlaylistTravelUISelectionModal
{
public:
    std::uint8_t Pad_0000[0x4A0]; // 0x0000
    void* SelectionButtonClass; // 0x04A0 (Size: 0x8, Type: ClassProperty)
    void* Button_TouchClose; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* SelectionContext; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPlaylistTravelUISelectionModal, SelectionButtonClass) == 1184, "Offset mismatch for UFortPlaylistTravelUISelectionModal::SelectionButtonClass");
static_assert(offsetof(UFortPlaylistTravelUISelectionModal, Button_TouchClose) == 1192, "Offset mismatch for UFortPlaylistTravelUISelectionModal::Button_TouchClose");
static_assert(offsetof(UFortPlaylistTravelUISelectionModal, SelectionContext) == 1200, "Offset mismatch for UFortPlaylistTravelUISelectionModal::SelectionContext");

// /Script/FortPlaylistTravelUI.FortPlaylistTravelViewModel
// Kind: Class; super: FortPerUserViewModel
class UFortPlaylistTravelViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bIsDownloading; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    std::uint8_t GameTravelUIDataRegistryType[0x38]; // 0x007C (Size: 0x38, Type: StructProperty)
    float GameTravelPrepTime; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x8]; // 0x00B8
    TArray<void*> GameTravelEntries; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    void* CurrentGameTravelDestinationViewModel; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* GameTravelEntryViewModelClass; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bIsSquadTravel; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOwningPlayerInitiating; // 0x00E1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortPlaylistTravelViewModel, bIsDownloading) == 120, "Offset mismatch for UFortPlaylistTravelViewModel::bIsDownloading");
static_assert(offsetof(UFortPlaylistTravelViewModel, GameTravelUIDataRegistryType) == 124, "Offset mismatch for UFortPlaylistTravelViewModel::GameTravelUIDataRegistryType");
static_assert(offsetof(UFortPlaylistTravelViewModel, GameTravelPrepTime) == 180, "Offset mismatch for UFortPlaylistTravelViewModel::GameTravelPrepTime");
static_assert(offsetof(UFortPlaylistTravelViewModel, GameTravelEntries) == 192, "Offset mismatch for UFortPlaylistTravelViewModel::GameTravelEntries");
static_assert(offsetof(UFortPlaylistTravelViewModel, CurrentGameTravelDestinationViewModel) == 208, "Offset mismatch for UFortPlaylistTravelViewModel::CurrentGameTravelDestinationViewModel");
static_assert(offsetof(UFortPlaylistTravelViewModel, GameTravelEntryViewModelClass) == 216, "Offset mismatch for UFortPlaylistTravelViewModel::GameTravelEntryViewModelClass");
static_assert(offsetof(UFortPlaylistTravelViewModel, bIsSquadTravel) == 224, "Offset mismatch for UFortPlaylistTravelViewModel::bIsSquadTravel");
static_assert(offsetof(UFortPlaylistTravelViewModel, bIsOwningPlayerInitiating) == 225, "Offset mismatch for UFortPlaylistTravelViewModel::bIsOwningPlayerInitiating");
