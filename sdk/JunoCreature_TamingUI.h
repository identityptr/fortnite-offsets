/**
 * decamp dumper generated SDK
 * Package: /Script/JunoCreature_TamingUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoCreature_TamingUI.JunoAnimalHappinessRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoAnimalHappinessRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t AnimalHappinessTag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Title[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t ValueRange[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    float ProductionMultiplier; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0044
    std::uint8_t ProductionMultiplierLabel[0x10]; // 0x0048 (Size: 0x10, Type: TextProperty)
    std::uint8_t ArrowIcon[0x20]; // 0x0058 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t FaceIcon[0x20]; // 0x0078 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Color[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoAnimalHappinessRow, AnimalHappinessTag) == 8, "Offset mismatch for FJunoAnimalHappinessRow::AnimalHappinessTag");
static_assert(offsetof(FJunoAnimalHappinessRow, Title) == 16, "Offset mismatch for FJunoAnimalHappinessRow::Title");
static_assert(offsetof(FJunoAnimalHappinessRow, Description) == 32, "Offset mismatch for FJunoAnimalHappinessRow::Description");
static_assert(offsetof(FJunoAnimalHappinessRow, ValueRange) == 48, "Offset mismatch for FJunoAnimalHappinessRow::ValueRange");
static_assert(offsetof(FJunoAnimalHappinessRow, ProductionMultiplier) == 64, "Offset mismatch for FJunoAnimalHappinessRow::ProductionMultiplier");
static_assert(offsetof(FJunoAnimalHappinessRow, ProductionMultiplierLabel) == 72, "Offset mismatch for FJunoAnimalHappinessRow::ProductionMultiplierLabel");
static_assert(offsetof(FJunoAnimalHappinessRow, ArrowIcon) == 88, "Offset mismatch for FJunoAnimalHappinessRow::ArrowIcon");
static_assert(offsetof(FJunoAnimalHappinessRow, FaceIcon) == 120, "Offset mismatch for FJunoAnimalHappinessRow::FaceIcon");
static_assert(offsetof(FJunoAnimalHappinessRow, Color) == 152, "Offset mismatch for FJunoAnimalHappinessRow::Color");

// /Script/JunoCreature_TamingUI.JunoJobDetailsRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoJobDetailsRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RoleTag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Title[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    TSoftObjectPtr<void> Icon; // 0x0030 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FJunoJobDetailsRow, RoleTag) == 8, "Offset mismatch for FJunoJobDetailsRow::RoleTag");
static_assert(offsetof(FJunoJobDetailsRow, Title) == 16, "Offset mismatch for FJunoJobDetailsRow::Title");
static_assert(offsetof(FJunoJobDetailsRow, Description) == 32, "Offset mismatch for FJunoJobDetailsRow::Description");
static_assert(offsetof(FJunoJobDetailsRow, Icon) == 48, "Offset mismatch for FJunoJobDetailsRow::Icon");

// /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardKnowledgeBundleGroup
// Kind: ScriptStruct; super: none
struct FJunoVillageTamingLevelRewardKnowledgeBundleGroup
{
public:
    TArray<void*> KnowledgeBundles; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoVillageTamingLevelRewardKnowledgeBundleGroup, KnowledgeBundles) == 0, "Offset mismatch for FJunoVillageTamingLevelRewardKnowledgeBundleGroup::KnowledgeBundles");

// /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsColumnInfo
// Kind: ScriptStruct; super: none
struct FJunoVillageTamingLevelRewardsColumnInfo
{
public:
    std::int32_t AwesomeLevel; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> EntryInfo; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoVillageTamingLevelRewardsColumnInfo, AwesomeLevel) == 0, "Offset mismatch for FJunoVillageTamingLevelRewardsColumnInfo::AwesomeLevel");
static_assert(offsetof(FJunoVillageTamingLevelRewardsColumnInfo, EntryInfo) == 8, "Offset mismatch for FJunoVillageTamingLevelRewardsColumnInfo::EntryInfo");

// /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsEntryInfo
// Kind: ScriptStruct; super: none
struct FJunoVillageTamingLevelRewardsEntryInfo
{
public:
    std::uint8_t AwesomePerkReward[0x40]; // 0x0000 (Size: 0x40, Type: StructProperty)
    std::int32_t NewSharedSlotCount; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::int32_t NewVillagerSlotCount; // 0x0044 (Size: 0x4, Type: IntProperty)
    std::int32_t NewAnimalSlotCountSlotCount; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::int32_t NewMysteryVillagerCount; // 0x004C (Size: 0x4, Type: IntProperty)
    std::uint8_t RewardBiomeTag[0x4]; // 0x0050 (Size: 0x4, Type: StructProperty)
    std::uint8_t bIsEventReward; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0055
    TArray<void*> KnowledgeBundles; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoVillageTamingLevelRewardsEntryInfo, AwesomePerkReward) == 0, "Offset mismatch for FJunoVillageTamingLevelRewardsEntryInfo::AwesomePerkReward");
static_assert(offsetof(FJunoVillageTamingLevelRewardsEntryInfo, NewSharedSlotCount) == 64, "Offset mismatch for FJunoVillageTamingLevelRewardsEntryInfo::NewSharedSlotCount");
static_assert(offsetof(FJunoVillageTamingLevelRewardsEntryInfo, NewVillagerSlotCount) == 68, "Offset mismatch for FJunoVillageTamingLevelRewardsEntryInfo::NewVillagerSlotCount");
static_assert(offsetof(FJunoVillageTamingLevelRewardsEntryInfo, NewAnimalSlotCountSlotCount) == 72, "Offset mismatch for FJunoVillageTamingLevelRewardsEntryInfo::NewAnimalSlotCountSlotCount");
static_assert(offsetof(FJunoVillageTamingLevelRewardsEntryInfo, NewMysteryVillagerCount) == 76, "Offset mismatch for FJunoVillageTamingLevelRewardsEntryInfo::NewMysteryVillagerCount");
static_assert(offsetof(FJunoVillageTamingLevelRewardsEntryInfo, RewardBiomeTag) == 80, "Offset mismatch for FJunoVillageTamingLevelRewardsEntryInfo::RewardBiomeTag");
static_assert(offsetof(FJunoVillageTamingLevelRewardsEntryInfo, bIsEventReward) == 84, "Offset mismatch for FJunoVillageTamingLevelRewardsEntryInfo::bIsEventReward");
static_assert(offsetof(FJunoVillageTamingLevelRewardsEntryInfo, KnowledgeBundles) == 88, "Offset mismatch for FJunoVillageTamingLevelRewardsEntryInfo::KnowledgeBundles");

// /Script/JunoCreature_TamingUI.JunoVillageTamingVillagerEntryInfo
// Kind: ScriptStruct; super: none
struct FJunoVillageTamingVillagerEntryInfo
{
public:
    std::int32_t ButtonIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t bHasNPC; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t NPCInfo[0x88]; // 0x0008 (Size: 0x88, Type: StructProperty)
    std::uint8_t bHasCreature; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0091
    std::uint8_t CreatureInfo[0x98]; // 0x0098 (Size: 0x98, Type: StructProperty)
    std::uint8_t bSlotAllowsNPCs; // 0x0130 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSlotAllowsCreatures; // 0x0131 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLocked; // 0x0132 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoVillageTamingVillagerEntryInfo, ButtonIndex) == 0, "Offset mismatch for FJunoVillageTamingVillagerEntryInfo::ButtonIndex");
static_assert(offsetof(FJunoVillageTamingVillagerEntryInfo, bHasNPC) == 4, "Offset mismatch for FJunoVillageTamingVillagerEntryInfo::bHasNPC");
static_assert(offsetof(FJunoVillageTamingVillagerEntryInfo, NPCInfo) == 8, "Offset mismatch for FJunoVillageTamingVillagerEntryInfo::NPCInfo");
static_assert(offsetof(FJunoVillageTamingVillagerEntryInfo, bHasCreature) == 144, "Offset mismatch for FJunoVillageTamingVillagerEntryInfo::bHasCreature");
static_assert(offsetof(FJunoVillageTamingVillagerEntryInfo, CreatureInfo) == 152, "Offset mismatch for FJunoVillageTamingVillagerEntryInfo::CreatureInfo");
static_assert(offsetof(FJunoVillageTamingVillagerEntryInfo, bSlotAllowsNPCs) == 304, "Offset mismatch for FJunoVillageTamingVillagerEntryInfo::bSlotAllowsNPCs");
static_assert(offsetof(FJunoVillageTamingVillagerEntryInfo, bSlotAllowsCreatures) == 305, "Offset mismatch for FJunoVillageTamingVillagerEntryInfo::bSlotAllowsCreatures");
static_assert(offsetof(FJunoVillageTamingVillagerEntryInfo, bIsLocked) == 306, "Offset mismatch for FJunoVillageTamingVillagerEntryInfo::bIsLocked");

// /Script/JunoCreature_TamingUI.JunoBarnAssignmentListEntry
// Kind: Class; super: CommonButtonLegacy
class UJunoBarnAssignmentListEntry
{
public:
    std::uint8_t Pad_0000[0x15F8]; // 0x0000
    void* BarnAssignmentListObject; // 0x15F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoBarnAssignmentListEntry, BarnAssignmentListObject) == 5624, "Offset mismatch for UJunoBarnAssignmentListEntry::BarnAssignmentListObject");

// /Script/JunoCreature_TamingUI.JunoBarnAssignmentListObject
// Kind: Class; super: Object
class UJunoBarnAssignmentListObject
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t Icon[0x24]; // 0x0050 (Size: 0x24, Type: SoftObjectProperty)
    TWeakObjectPtr<void> AnimalActor; // 0x0074 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UJunoBarnAssignmentListObject, Icon) == 80, "Offset mismatch for UJunoBarnAssignmentListObject::Icon");
static_assert(offsetof(UJunoBarnAssignmentListObject, AnimalActor) == 116, "Offset mismatch for UJunoBarnAssignmentListObject::AnimalActor");

// /Script/JunoCreature_TamingUI.JunoBarnAssignmentMenuContainer
// Kind: Class; super: CommonActivatableWidget
class UJunoBarnAssignmentMenuContainer
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    void* BarnAssignmentScreen; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* BarnNameAnimalScreen; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* WidgetSwitcher_Screens; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* JunoBarnAssignmentMenuInitData; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoBarnAssignmentMenuContainer, BarnAssignmentScreen) == 1192, "Offset mismatch for UJunoBarnAssignmentMenuContainer::BarnAssignmentScreen");
static_assert(offsetof(UJunoBarnAssignmentMenuContainer, BarnNameAnimalScreen) == 1200, "Offset mismatch for UJunoBarnAssignmentMenuContainer::BarnNameAnimalScreen");
static_assert(offsetof(UJunoBarnAssignmentMenuContainer, WidgetSwitcher_Screens) == 1208, "Offset mismatch for UJunoBarnAssignmentMenuContainer::WidgetSwitcher_Screens");
static_assert(offsetof(UJunoBarnAssignmentMenuContainer, JunoBarnAssignmentMenuInitData) == 1216, "Offset mismatch for UJunoBarnAssignmentMenuContainer::JunoBarnAssignmentMenuInitData");

// /Script/JunoCreature_TamingUI.JunoBarnAssignmentScreen
// Kind: Class; super: CommonActivatableWidget
class UJunoBarnAssignmentScreen
{
public:
    std::uint8_t Pad_0000[0x4D8]; // 0x0000
    void* BackButton; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* CloseButton; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* List_Characters; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* ThisBedListObject; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    void* BarnObject; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    void* JunoCampRecruitmentComponent; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    void* JunoCampAIManagementComponent; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    void* Button_Assign; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AssignedHeaderText[0x10]; // 0x0518 (Size: 0x10, Type: TextProperty)
    std::uint8_t NoBarnHeaderText[0x10]; // 0x0528 (Size: 0x10, Type: TextProperty)
    std::uint8_t NearbyAnimalsHeaderText[0x10]; // 0x0538 (Size: 0x10, Type: TextProperty)
    std::uint8_t AssignButtonText[0x10]; // 0x0548 (Size: 0x10, Type: TextProperty)
    std::uint8_t ReassignButtonText[0x10]; // 0x0558 (Size: 0x10, Type: TextProperty)
    void* ListHeaderClass; // 0x0568 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UJunoBarnAssignmentScreen, BackButton) == 1240, "Offset mismatch for UJunoBarnAssignmentScreen::BackButton");
static_assert(offsetof(UJunoBarnAssignmentScreen, CloseButton) == 1248, "Offset mismatch for UJunoBarnAssignmentScreen::CloseButton");
static_assert(offsetof(UJunoBarnAssignmentScreen, List_Characters) == 1256, "Offset mismatch for UJunoBarnAssignmentScreen::List_Characters");
static_assert(offsetof(UJunoBarnAssignmentScreen, ThisBedListObject) == 1264, "Offset mismatch for UJunoBarnAssignmentScreen::ThisBedListObject");
static_assert(offsetof(UJunoBarnAssignmentScreen, BarnObject) == 1272, "Offset mismatch for UJunoBarnAssignmentScreen::BarnObject");
static_assert(offsetof(UJunoBarnAssignmentScreen, JunoCampRecruitmentComponent) == 1280, "Offset mismatch for UJunoBarnAssignmentScreen::JunoCampRecruitmentComponent");
static_assert(offsetof(UJunoBarnAssignmentScreen, JunoCampAIManagementComponent) == 1288, "Offset mismatch for UJunoBarnAssignmentScreen::JunoCampAIManagementComponent");
static_assert(offsetof(UJunoBarnAssignmentScreen, Button_Assign) == 1296, "Offset mismatch for UJunoBarnAssignmentScreen::Button_Assign");
static_assert(offsetof(UJunoBarnAssignmentScreen, AssignedHeaderText) == 1304, "Offset mismatch for UJunoBarnAssignmentScreen::AssignedHeaderText");
static_assert(offsetof(UJunoBarnAssignmentScreen, NoBarnHeaderText) == 1320, "Offset mismatch for UJunoBarnAssignmentScreen::NoBarnHeaderText");
static_assert(offsetof(UJunoBarnAssignmentScreen, NearbyAnimalsHeaderText) == 1336, "Offset mismatch for UJunoBarnAssignmentScreen::NearbyAnimalsHeaderText");
static_assert(offsetof(UJunoBarnAssignmentScreen, AssignButtonText) == 1352, "Offset mismatch for UJunoBarnAssignmentScreen::AssignButtonText");
static_assert(offsetof(UJunoBarnAssignmentScreen, ReassignButtonText) == 1368, "Offset mismatch for UJunoBarnAssignmentScreen::ReassignButtonText");
static_assert(offsetof(UJunoBarnAssignmentScreen, ListHeaderClass) == 1384, "Offset mismatch for UJunoBarnAssignmentScreen::ListHeaderClass");

// /Script/JunoCreature_TamingUI.JunoBarnNameAnimalScreen
// Kind: Class; super: CommonActivatableWidget
class UJunoBarnNameAnimalScreen
{
public:
    std::uint8_t Pad_0000[0x4D8]; // 0x0000
    void* BarnObject; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* JunoBarnAssignmentMenuInitData; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* Button_RandomName; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* BackButton; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    void* CloseButton; // 0x04F8 (Size: 0x8, Type: ObjectProperty)
    void* Button_Assign; // 0x0500 (Size: 0x8, Type: ObjectProperty)
    void* UserGeneratedText_ParentalControls; // 0x0508 (Size: 0x8, Type: ObjectProperty)
    void* UGCViewModel; // 0x0510 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0518
    std::uint8_t AllAnimalNamesGameplayTag[0x4]; // 0x0528 (Size: 0x4, Type: StructProperty)
    std::uint8_t AnimalNameRegistryName[0x4]; // 0x052C (Size: 0x4, Type: NameProperty)
    std::uint8_t DefaultName[0x10]; // 0x0530 (Size: 0x10, Type: TextProperty)
    std::uint8_t DefaultHintText[0x10]; // 0x0540 (Size: 0x10, Type: TextProperty)
    std::uint8_t bAllowUserInput; // 0x0550 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoBarnNameAnimalScreen, BarnObject) == 1240, "Offset mismatch for UJunoBarnNameAnimalScreen::BarnObject");
static_assert(offsetof(UJunoBarnNameAnimalScreen, JunoBarnAssignmentMenuInitData) == 1248, "Offset mismatch for UJunoBarnNameAnimalScreen::JunoBarnAssignmentMenuInitData");
static_assert(offsetof(UJunoBarnNameAnimalScreen, Button_RandomName) == 1256, "Offset mismatch for UJunoBarnNameAnimalScreen::Button_RandomName");
static_assert(offsetof(UJunoBarnNameAnimalScreen, BackButton) == 1264, "Offset mismatch for UJunoBarnNameAnimalScreen::BackButton");
static_assert(offsetof(UJunoBarnNameAnimalScreen, CloseButton) == 1272, "Offset mismatch for UJunoBarnNameAnimalScreen::CloseButton");
static_assert(offsetof(UJunoBarnNameAnimalScreen, Button_Assign) == 1280, "Offset mismatch for UJunoBarnNameAnimalScreen::Button_Assign");
static_assert(offsetof(UJunoBarnNameAnimalScreen, UserGeneratedText_ParentalControls) == 1288, "Offset mismatch for UJunoBarnNameAnimalScreen::UserGeneratedText_ParentalControls");
static_assert(offsetof(UJunoBarnNameAnimalScreen, UGCViewModel) == 1296, "Offset mismatch for UJunoBarnNameAnimalScreen::UGCViewModel");
static_assert(offsetof(UJunoBarnNameAnimalScreen, AllAnimalNamesGameplayTag) == 1320, "Offset mismatch for UJunoBarnNameAnimalScreen::AllAnimalNamesGameplayTag");
static_assert(offsetof(UJunoBarnNameAnimalScreen, AnimalNameRegistryName) == 1324, "Offset mismatch for UJunoBarnNameAnimalScreen::AnimalNameRegistryName");
static_assert(offsetof(UJunoBarnNameAnimalScreen, DefaultName) == 1328, "Offset mismatch for UJunoBarnNameAnimalScreen::DefaultName");
static_assert(offsetof(UJunoBarnNameAnimalScreen, DefaultHintText) == 1344, "Offset mismatch for UJunoBarnNameAnimalScreen::DefaultHintText");
static_assert(offsetof(UJunoBarnNameAnimalScreen, bAllowUserInput) == 1360, "Offset mismatch for UJunoBarnNameAnimalScreen::bAllowUserInput");

// /Script/JunoCreature_TamingUI.JunoBarnProcessorScreen
// Kind: Class; super: JunoDisassemblingScreen
class UJunoBarnProcessorScreen
{
public:
    std::uint8_t Pad_0000[0x610]; // 0x0000
    void* JunoCampRecruitmentComponent; // 0x0610 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoBarnProcessorScreen, JunoCampRecruitmentComponent) == 1552, "Offset mismatch for UJunoBarnProcessorScreen::JunoCampRecruitmentComponent");

// /Script/JunoCreature_TamingUI.JunoTamingMapMarkerIconScreen
// Kind: Class; super: CommonActivatableWidget
class UJunoTamingMapMarkerIconScreen
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    void* EntryClass; // 0x04A8 (Size: 0x8, Type: ClassProperty)
    FName ColorParamName; // 0x04B0 (Size: 0x8, Type: NameProperty)
    void* ColorPanel; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* IconPanel; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* ButtonGroup_AllIconSlots; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* ButtonGroup_AllColorSlots; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* Image_PreviewMarker; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* SelectedColor; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* SelectedIcon; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* InitData; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CampRow[0x10]; // 0x04F8 (Size: 0x10, Type: StructProperty)
    std::uint8_t RandomCampNameRegistry[0x1]; // 0x0508 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoTamingMapMarkerIconScreen, EntryClass) == 1192, "Offset mismatch for UJunoTamingMapMarkerIconScreen::EntryClass");
static_assert(offsetof(UJunoTamingMapMarkerIconScreen, ColorParamName) == 1200, "Offset mismatch for UJunoTamingMapMarkerIconScreen::ColorParamName");
static_assert(offsetof(UJunoTamingMapMarkerIconScreen, ColorPanel) == 1208, "Offset mismatch for UJunoTamingMapMarkerIconScreen::ColorPanel");
static_assert(offsetof(UJunoTamingMapMarkerIconScreen, IconPanel) == 1216, "Offset mismatch for UJunoTamingMapMarkerIconScreen::IconPanel");
static_assert(offsetof(UJunoTamingMapMarkerIconScreen, ButtonGroup_AllIconSlots) == 1224, "Offset mismatch for UJunoTamingMapMarkerIconScreen::ButtonGroup_AllIconSlots");
static_assert(offsetof(UJunoTamingMapMarkerIconScreen, ButtonGroup_AllColorSlots) == 1232, "Offset mismatch for UJunoTamingMapMarkerIconScreen::ButtonGroup_AllColorSlots");
static_assert(offsetof(UJunoTamingMapMarkerIconScreen, Image_PreviewMarker) == 1240, "Offset mismatch for UJunoTamingMapMarkerIconScreen::Image_PreviewMarker");
static_assert(offsetof(UJunoTamingMapMarkerIconScreen, SelectedColor) == 1248, "Offset mismatch for UJunoTamingMapMarkerIconScreen::SelectedColor");
static_assert(offsetof(UJunoTamingMapMarkerIconScreen, SelectedIcon) == 1256, "Offset mismatch for UJunoTamingMapMarkerIconScreen::SelectedIcon");
static_assert(offsetof(UJunoTamingMapMarkerIconScreen, InitData) == 1264, "Offset mismatch for UJunoTamingMapMarkerIconScreen::InitData");
static_assert(offsetof(UJunoTamingMapMarkerIconScreen, CampRow) == 1272, "Offset mismatch for UJunoTamingMapMarkerIconScreen::CampRow");
static_assert(offsetof(UJunoTamingMapMarkerIconScreen, RandomCampNameRegistry) == 1288, "Offset mismatch for UJunoTamingMapMarkerIconScreen::RandomCampNameRegistry");

// /Script/JunoCreature_TamingUI.JunoTamingMapMarkerMenuContainer
// Kind: Class; super: CommonActivatableWidget
class UJunoTamingMapMarkerMenuContainer
{
public:
    std::uint8_t Pad_0000[0x4A8]; // 0x0000
    void* Button_Next; // 0x04A8 (Size: 0x8, Type: ObjectProperty)
    void* Button_Confirm; // 0x04B0 (Size: 0x8, Type: ObjectProperty)
    void* Button_Close; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* Button_Close_Touch; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* InitData; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NameScreenTabName[0x4]; // 0x04D0 (Size: 0x4, Type: NameProperty)
    std::uint8_t IconScreenTabName[0x4]; // 0x04D4 (Size: 0x4, Type: NameProperty)
    void* TabList_MenuTabs; // 0x04D8 (Size: 0x8, Type: ObjectProperty)
    void* Switcher_Tabs; // 0x04E0 (Size: 0x8, Type: ObjectProperty)
    void* Text_Title; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* UserGeneratedText_ParentalControls; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CampRow[0x1]; // 0x04F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoTamingMapMarkerMenuContainer, Button_Next) == 1192, "Offset mismatch for UJunoTamingMapMarkerMenuContainer::Button_Next");
static_assert(offsetof(UJunoTamingMapMarkerMenuContainer, Button_Confirm) == 1200, "Offset mismatch for UJunoTamingMapMarkerMenuContainer::Button_Confirm");
static_assert(offsetof(UJunoTamingMapMarkerMenuContainer, Button_Close) == 1208, "Offset mismatch for UJunoTamingMapMarkerMenuContainer::Button_Close");
static_assert(offsetof(UJunoTamingMapMarkerMenuContainer, Button_Close_Touch) == 1216, "Offset mismatch for UJunoTamingMapMarkerMenuContainer::Button_Close_Touch");
static_assert(offsetof(UJunoTamingMapMarkerMenuContainer, InitData) == 1224, "Offset mismatch for UJunoTamingMapMarkerMenuContainer::InitData");
static_assert(offsetof(UJunoTamingMapMarkerMenuContainer, NameScreenTabName) == 1232, "Offset mismatch for UJunoTamingMapMarkerMenuContainer::NameScreenTabName");
static_assert(offsetof(UJunoTamingMapMarkerMenuContainer, IconScreenTabName) == 1236, "Offset mismatch for UJunoTamingMapMarkerMenuContainer::IconScreenTabName");
static_assert(offsetof(UJunoTamingMapMarkerMenuContainer, TabList_MenuTabs) == 1240, "Offset mismatch for UJunoTamingMapMarkerMenuContainer::TabList_MenuTabs");
static_assert(offsetof(UJunoTamingMapMarkerMenuContainer, Switcher_Tabs) == 1248, "Offset mismatch for UJunoTamingMapMarkerMenuContainer::Switcher_Tabs");
static_assert(offsetof(UJunoTamingMapMarkerMenuContainer, Text_Title) == 1256, "Offset mismatch for UJunoTamingMapMarkerMenuContainer::Text_Title");
static_assert(offsetof(UJunoTamingMapMarkerMenuContainer, UserGeneratedText_ParentalControls) == 1264, "Offset mismatch for UJunoTamingMapMarkerMenuContainer::UserGeneratedText_ParentalControls");
static_assert(offsetof(UJunoTamingMapMarkerMenuContainer, CampRow) == 1272, "Offset mismatch for UJunoTamingMapMarkerMenuContainer::CampRow");

// /Script/JunoCreature_TamingUI.JunoTamingMapMarkerNameScreen
// Kind: Class; super: CommonActivatableWidget
class UJunoTamingMapMarkerNameScreen
{
public:
    std::uint8_t Pad_0000[0x4B8]; // 0x0000
    void* RandomizeButton; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* TextInputField; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* InitData; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x04D0
    void* UGCViewModel; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DefaultName[0x10]; // 0x04F0 (Size: 0x10, Type: TextProperty)
    std::uint8_t DefaultHintText[0x10]; // 0x0500 (Size: 0x10, Type: TextProperty)
    std::uint8_t RandomCampNameRegistry[0x4]; // 0x0510 (Size: 0x4, Type: StructProperty)
    std::uint8_t bAllowUserInput; // 0x0514 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoTamingMapMarkerNameScreen, RandomizeButton) == 1208, "Offset mismatch for UJunoTamingMapMarkerNameScreen::RandomizeButton");
static_assert(offsetof(UJunoTamingMapMarkerNameScreen, TextInputField) == 1216, "Offset mismatch for UJunoTamingMapMarkerNameScreen::TextInputField");
static_assert(offsetof(UJunoTamingMapMarkerNameScreen, InitData) == 1224, "Offset mismatch for UJunoTamingMapMarkerNameScreen::InitData");
static_assert(offsetof(UJunoTamingMapMarkerNameScreen, UGCViewModel) == 1256, "Offset mismatch for UJunoTamingMapMarkerNameScreen::UGCViewModel");
static_assert(offsetof(UJunoTamingMapMarkerNameScreen, DefaultName) == 1264, "Offset mismatch for UJunoTamingMapMarkerNameScreen::DefaultName");
static_assert(offsetof(UJunoTamingMapMarkerNameScreen, DefaultHintText) == 1280, "Offset mismatch for UJunoTamingMapMarkerNameScreen::DefaultHintText");
static_assert(offsetof(UJunoTamingMapMarkerNameScreen, RandomCampNameRegistry) == 1296, "Offset mismatch for UJunoTamingMapMarkerNameScreen::RandomCampNameRegistry");
static_assert(offsetof(UJunoTamingMapMarkerNameScreen, bAllowUserInput) == 1300, "Offset mismatch for UJunoTamingMapMarkerNameScreen::bAllowUserInput");

// /Script/JunoCreature_TamingUI.JunoVillageTamingHubScreen
// Kind: Class; super: JunoVillageScreenBase
class UJunoVillageTamingHubScreen
{
public:
    std::uint8_t Pad_0000[0x718]; // 0x0000
    void* ScrollBox_Ingredients; // 0x0718 (Size: 0x8, Type: ObjectProperty)
    void* EntryBox_Ingredients; // 0x0720 (Size: 0x8, Type: ObjectProperty)
    void* SpacerWidgetClass; // 0x0728 (Size: 0x8, Type: ClassProperty)
    void* TownBuilderQuestWidgetClass; // 0x0730 (Size: 0x8, Type: ClassProperty)
    void* IngredientWidgetClass; // 0x0738 (Size: 0x8, Type: ClassProperty)
    void* Button_Upgrade; // 0x0740 (Size: 0x8, Type: ObjectProperty)
    void* Button_RemoveVillage; // 0x0748 (Size: 0x8, Type: ObjectProperty)
    void* RemoveVillageModalScene; // 0x0750 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RemoveVillageConfirmationTitle[0x10]; // 0x0758 (Size: 0x10, Type: TextProperty)
    std::uint8_t RemoveVillageConfirmationDescription[0x10]; // 0x0768 (Size: 0x10, Type: TextProperty)
    std::uint8_t RemoveVillageConfirmButtonText[0x10]; // 0x0778 (Size: 0x10, Type: TextProperty)
    std::uint8_t RemoveVillageCancelButtonText[0x10]; // 0x0788 (Size: 0x10, Type: TextProperty)
    std::uint8_t RemoveModalConfirmAction[0x10]; // 0x0798 (Size: 0x10, Type: StructProperty)
    std::uint8_t RemoveModalCancelAction[0x10]; // 0x07A8 (Size: 0x10, Type: StructProperty)
    void* Button_EditVillage; // 0x07B8 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> JobToIconMap; // 0x07C0 (Size: 0x10, Type: MapProperty)
    std::uint8_t StaticUpgradeItemDescription[0x10]; // 0x07D0 (Size: 0x10, Type: TextProperty)
    void* AwesomePointsIngredientWidget; // 0x07E0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> TownBuilderQuestWidgets; // 0x07E8 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> IngredientWidgetForIndex; // 0x07F8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UJunoVillageTamingHubScreen, ScrollBox_Ingredients) == 1816, "Offset mismatch for UJunoVillageTamingHubScreen::ScrollBox_Ingredients");
static_assert(offsetof(UJunoVillageTamingHubScreen, EntryBox_Ingredients) == 1824, "Offset mismatch for UJunoVillageTamingHubScreen::EntryBox_Ingredients");
static_assert(offsetof(UJunoVillageTamingHubScreen, SpacerWidgetClass) == 1832, "Offset mismatch for UJunoVillageTamingHubScreen::SpacerWidgetClass");
static_assert(offsetof(UJunoVillageTamingHubScreen, TownBuilderQuestWidgetClass) == 1840, "Offset mismatch for UJunoVillageTamingHubScreen::TownBuilderQuestWidgetClass");
static_assert(offsetof(UJunoVillageTamingHubScreen, IngredientWidgetClass) == 1848, "Offset mismatch for UJunoVillageTamingHubScreen::IngredientWidgetClass");
static_assert(offsetof(UJunoVillageTamingHubScreen, Button_Upgrade) == 1856, "Offset mismatch for UJunoVillageTamingHubScreen::Button_Upgrade");
static_assert(offsetof(UJunoVillageTamingHubScreen, Button_RemoveVillage) == 1864, "Offset mismatch for UJunoVillageTamingHubScreen::Button_RemoveVillage");
static_assert(offsetof(UJunoVillageTamingHubScreen, RemoveVillageModalScene) == 1872, "Offset mismatch for UJunoVillageTamingHubScreen::RemoveVillageModalScene");
static_assert(offsetof(UJunoVillageTamingHubScreen, RemoveVillageConfirmationTitle) == 1880, "Offset mismatch for UJunoVillageTamingHubScreen::RemoveVillageConfirmationTitle");
static_assert(offsetof(UJunoVillageTamingHubScreen, RemoveVillageConfirmationDescription) == 1896, "Offset mismatch for UJunoVillageTamingHubScreen::RemoveVillageConfirmationDescription");
static_assert(offsetof(UJunoVillageTamingHubScreen, RemoveVillageConfirmButtonText) == 1912, "Offset mismatch for UJunoVillageTamingHubScreen::RemoveVillageConfirmButtonText");
static_assert(offsetof(UJunoVillageTamingHubScreen, RemoveVillageCancelButtonText) == 1928, "Offset mismatch for UJunoVillageTamingHubScreen::RemoveVillageCancelButtonText");
static_assert(offsetof(UJunoVillageTamingHubScreen, RemoveModalConfirmAction) == 1944, "Offset mismatch for UJunoVillageTamingHubScreen::RemoveModalConfirmAction");
static_assert(offsetof(UJunoVillageTamingHubScreen, RemoveModalCancelAction) == 1960, "Offset mismatch for UJunoVillageTamingHubScreen::RemoveModalCancelAction");
static_assert(offsetof(UJunoVillageTamingHubScreen, Button_EditVillage) == 1976, "Offset mismatch for UJunoVillageTamingHubScreen::Button_EditVillage");
static_assert(offsetof(UJunoVillageTamingHubScreen, JobToIconMap) == 1984, "Offset mismatch for UJunoVillageTamingHubScreen::JobToIconMap");
static_assert(offsetof(UJunoVillageTamingHubScreen, StaticUpgradeItemDescription) == 2000, "Offset mismatch for UJunoVillageTamingHubScreen::StaticUpgradeItemDescription");
static_assert(offsetof(UJunoVillageTamingHubScreen, AwesomePointsIngredientWidget) == 2016, "Offset mismatch for UJunoVillageTamingHubScreen::AwesomePointsIngredientWidget");
static_assert(offsetof(UJunoVillageTamingHubScreen, TownBuilderQuestWidgets) == 2024, "Offset mismatch for UJunoVillageTamingHubScreen::TownBuilderQuestWidgets");
static_assert(offsetof(UJunoVillageTamingHubScreen, IngredientWidgetForIndex) == 2040, "Offset mismatch for UJunoVillageTamingHubScreen::IngredientWidgetForIndex");

// /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsColumn
// Kind: Class; super: CommonButtonBase
class UJunoVillageTamingLevelRewardsColumn
{
public:
    std::uint8_t Pad_0000[0x15A8]; // 0x0000
    void* EntriesList; // 0x15A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VillageRewardsColumnInfo[0x18]; // 0x15B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ParentVillageUIData[0x228]; // 0x15C8 (Size: 0x228, Type: StructProperty)
    void* ScrollBox_RewardEntries; // 0x17F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoVillageTamingLevelRewardsColumn, EntriesList) == 5544, "Offset mismatch for UJunoVillageTamingLevelRewardsColumn::EntriesList");
static_assert(offsetof(UJunoVillageTamingLevelRewardsColumn, VillageRewardsColumnInfo) == 5552, "Offset mismatch for UJunoVillageTamingLevelRewardsColumn::VillageRewardsColumnInfo");
static_assert(offsetof(UJunoVillageTamingLevelRewardsColumn, ParentVillageUIData) == 5576, "Offset mismatch for UJunoVillageTamingLevelRewardsColumn::ParentVillageUIData");
static_assert(offsetof(UJunoVillageTamingLevelRewardsColumn, ScrollBox_RewardEntries) == 6128, "Offset mismatch for UJunoVillageTamingLevelRewardsColumn::ScrollBox_RewardEntries");

// /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsEntry
// Kind: Class; super: CommonUserWidget
class UJunoVillageTamingLevelRewardsEntry
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    std::uint8_t VillageRewardsEntryInfo[0x68]; // 0x0330 (Size: 0x68, Type: StructProperty)
    std::uint8_t ParentVillageUIData[0x1]; // 0x0398 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoVillageTamingLevelRewardsEntry, VillageRewardsEntryInfo) == 816, "Offset mismatch for UJunoVillageTamingLevelRewardsEntry::VillageRewardsEntryInfo");
static_assert(offsetof(UJunoVillageTamingLevelRewardsEntry, ParentVillageUIData) == 920, "Offset mismatch for UJunoVillageTamingLevelRewardsEntry::ParentVillageUIData");

// /Script/JunoCreature_TamingUI.JunoVillageTamingLevelRewardsScreen
// Kind: Class; super: JunoVillageScreenBase
class UJunoVillageTamingLevelRewardsScreen
{
public:
    std::uint8_t Pad_0000[0x718]; // 0x0000
    void* RewardsList; // 0x0718 (Size: 0x8, Type: ObjectProperty)
    void* LastHoveredEntry; // 0x0720 (Size: 0x8, Type: ObjectProperty)
    void* ButtonGroup_AllRewards; // 0x0728 (Size: 0x8, Type: ObjectProperty)
    void* Button_Previous; // 0x0730 (Size: 0x8, Type: ObjectProperty)
    void* Button_Next; // 0x0738 (Size: 0x8, Type: ObjectProperty)
    void* ScrollBox; // 0x0740 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoVillageTamingLevelRewardsScreen, RewardsList) == 1816, "Offset mismatch for UJunoVillageTamingLevelRewardsScreen::RewardsList");
static_assert(offsetof(UJunoVillageTamingLevelRewardsScreen, LastHoveredEntry) == 1824, "Offset mismatch for UJunoVillageTamingLevelRewardsScreen::LastHoveredEntry");
static_assert(offsetof(UJunoVillageTamingLevelRewardsScreen, ButtonGroup_AllRewards) == 1832, "Offset mismatch for UJunoVillageTamingLevelRewardsScreen::ButtonGroup_AllRewards");
static_assert(offsetof(UJunoVillageTamingLevelRewardsScreen, Button_Previous) == 1840, "Offset mismatch for UJunoVillageTamingLevelRewardsScreen::Button_Previous");
static_assert(offsetof(UJunoVillageTamingLevelRewardsScreen, Button_Next) == 1848, "Offset mismatch for UJunoVillageTamingLevelRewardsScreen::Button_Next");
static_assert(offsetof(UJunoVillageTamingLevelRewardsScreen, ScrollBox) == 1856, "Offset mismatch for UJunoVillageTamingLevelRewardsScreen::ScrollBox");

// /Script/JunoCreature_TamingUI.JunoVillageTamingMenuContainer
// Kind: Class; super: JunoHudMenuBase
class UJunoVillageTamingMenuContainer
{
public:
    std::uint8_t Pad_0000[0x520]; // 0x0000
    std::uint8_t VillagersTabName[0x4]; // 0x0520 (Size: 0x4, Type: NameProperty)
    std::uint8_t HubTabName[0x4]; // 0x0524 (Size: 0x4, Type: NameProperty)
    FName RewardsTabName; // 0x0528 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UJunoVillageTamingMenuContainer, VillagersTabName) == 1312, "Offset mismatch for UJunoVillageTamingMenuContainer::VillagersTabName");
static_assert(offsetof(UJunoVillageTamingMenuContainer, HubTabName) == 1316, "Offset mismatch for UJunoVillageTamingMenuContainer::HubTabName");
static_assert(offsetof(UJunoVillageTamingMenuContainer, RewardsTabName) == 1320, "Offset mismatch for UJunoVillageTamingMenuContainer::RewardsTabName");

// /Script/JunoCreature_TamingUI.JunoVillageTamingVillagerEntry
// Kind: Class; super: CommonButtonBase
class UJunoVillageTamingVillagerEntry
{
public:
    std::uint8_t Pad_0000[0x15A8]; // 0x0000
    std::uint8_t VillagerInfo[0x138]; // 0x15A8 (Size: 0x138, Type: StructProperty)
    std::uint8_t ParentVillageUIData[0x1]; // 0x16E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoVillageTamingVillagerEntry, VillagerInfo) == 5544, "Offset mismatch for UJunoVillageTamingVillagerEntry::VillagerInfo");
static_assert(offsetof(UJunoVillageTamingVillagerEntry, ParentVillageUIData) == 5856, "Offset mismatch for UJunoVillageTamingVillagerEntry::ParentVillageUIData");

// /Script/JunoCreature_TamingUI.JunoVillageTamingVillagersScreen
// Kind: Class; super: JunoVillageScreenBase
class UJunoVillageTamingVillagersScreen
{
public:
    std::uint8_t Pad_0000[0x718]; // 0x0000
    void* VillageInhabitantsList; // 0x0718 (Size: 0x8, Type: ObjectProperty)
    void* Button_AskToLeave; // 0x0720 (Size: 0x8, Type: ObjectProperty)
    void* Button_ChangeName; // 0x0728 (Size: 0x8, Type: ObjectProperty)
    void* ButtonGroup_AllVillagers; // 0x0730 (Size: 0x8, Type: ObjectProperty)
    void* LastHoveredEntry; // 0x0738 (Size: 0x8, Type: ObjectProperty)
    void* AskToLeaveModalScene; // 0x0740 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AskToLeaveConfirmationTitle[0x10]; // 0x0748 (Size: 0x10, Type: TextProperty)
    std::uint8_t AskToLeaveConfirmationDescription[0x10]; // 0x0758 (Size: 0x10, Type: TextProperty)
    std::uint8_t AskToLeaveConfirmButtonText[0x10]; // 0x0768 (Size: 0x10, Type: TextProperty)
    std::uint8_t AskToLeaveCancelButtonText[0x10]; // 0x0778 (Size: 0x10, Type: TextProperty)
    std::uint8_t ModalConfirmAction[0x10]; // 0x0788 (Size: 0x10, Type: StructProperty)
    std::uint8_t ModalCancelAction[0x10]; // 0x0798 (Size: 0x10, Type: StructProperty)
    std::int32_t OsirisVillagerSlotCount; // 0x07A8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoVillageTamingVillagersScreen, VillageInhabitantsList) == 1816, "Offset mismatch for UJunoVillageTamingVillagersScreen::VillageInhabitantsList");
static_assert(offsetof(UJunoVillageTamingVillagersScreen, Button_AskToLeave) == 1824, "Offset mismatch for UJunoVillageTamingVillagersScreen::Button_AskToLeave");
static_assert(offsetof(UJunoVillageTamingVillagersScreen, Button_ChangeName) == 1832, "Offset mismatch for UJunoVillageTamingVillagersScreen::Button_ChangeName");
static_assert(offsetof(UJunoVillageTamingVillagersScreen, ButtonGroup_AllVillagers) == 1840, "Offset mismatch for UJunoVillageTamingVillagersScreen::ButtonGroup_AllVillagers");
static_assert(offsetof(UJunoVillageTamingVillagersScreen, LastHoveredEntry) == 1848, "Offset mismatch for UJunoVillageTamingVillagersScreen::LastHoveredEntry");
static_assert(offsetof(UJunoVillageTamingVillagersScreen, AskToLeaveModalScene) == 1856, "Offset mismatch for UJunoVillageTamingVillagersScreen::AskToLeaveModalScene");
static_assert(offsetof(UJunoVillageTamingVillagersScreen, AskToLeaveConfirmationTitle) == 1864, "Offset mismatch for UJunoVillageTamingVillagersScreen::AskToLeaveConfirmationTitle");
static_assert(offsetof(UJunoVillageTamingVillagersScreen, AskToLeaveConfirmationDescription) == 1880, "Offset mismatch for UJunoVillageTamingVillagersScreen::AskToLeaveConfirmationDescription");
static_assert(offsetof(UJunoVillageTamingVillagersScreen, AskToLeaveConfirmButtonText) == 1896, "Offset mismatch for UJunoVillageTamingVillagersScreen::AskToLeaveConfirmButtonText");
static_assert(offsetof(UJunoVillageTamingVillagersScreen, AskToLeaveCancelButtonText) == 1912, "Offset mismatch for UJunoVillageTamingVillagersScreen::AskToLeaveCancelButtonText");
static_assert(offsetof(UJunoVillageTamingVillagersScreen, ModalConfirmAction) == 1928, "Offset mismatch for UJunoVillageTamingVillagersScreen::ModalConfirmAction");
static_assert(offsetof(UJunoVillageTamingVillagersScreen, ModalCancelAction) == 1944, "Offset mismatch for UJunoVillageTamingVillagersScreen::ModalCancelAction");
static_assert(offsetof(UJunoVillageTamingVillagersScreen, OsirisVillagerSlotCount) == 1960, "Offset mismatch for UJunoVillageTamingVillagersScreen::OsirisVillagerSlotCount");
