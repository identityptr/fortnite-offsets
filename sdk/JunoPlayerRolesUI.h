/**
 * decamp dumper generated SDK
 * Package: /Script/JunoPlayerRolesUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoPlayerRolesUI.JunoEvent_SetRoleSkillInfo
// Kind: ScriptStruct; super: none
struct FJunoEvent_SetRoleSkillInfo
{
public:
    std::uint8_t Name[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    FText Description; // 0x0010 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FJunoEvent_SetRoleSkillInfo, Name) == 0, "Offset mismatch for FJunoEvent_SetRoleSkillInfo::Name");
static_assert(offsetof(FJunoEvent_SetRoleSkillInfo, Description) == 16, "Offset mismatch for FJunoEvent_SetRoleSkillInfo::Description");

// /Script/JunoPlayerRolesUI.JunoPlayerSkillUpgrade
// Kind: ScriptStruct; super: none
struct FJunoPlayerSkillUpgrade
{
public:
    std::uint8_t SkillUpgradeTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Icon[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Name[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::int32_t UpgradeCost; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t AvailabilityReasons[0x4]; // 0x004C (Size: 0x4, Type: StructProperty)
    std::int32_t PhaseNumber; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::int32_t RequiredLevel; // 0x0054 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoPlayerSkillUpgrade, SkillUpgradeTag) == 0, "Offset mismatch for FJunoPlayerSkillUpgrade::SkillUpgradeTag");
static_assert(offsetof(FJunoPlayerSkillUpgrade, Icon) == 8, "Offset mismatch for FJunoPlayerSkillUpgrade::Icon");
static_assert(offsetof(FJunoPlayerSkillUpgrade, Name) == 40, "Offset mismatch for FJunoPlayerSkillUpgrade::Name");
static_assert(offsetof(FJunoPlayerSkillUpgrade, Description) == 56, "Offset mismatch for FJunoPlayerSkillUpgrade::Description");
static_assert(offsetof(FJunoPlayerSkillUpgrade, UpgradeCost) == 72, "Offset mismatch for FJunoPlayerSkillUpgrade::UpgradeCost");
static_assert(offsetof(FJunoPlayerSkillUpgrade, AvailabilityReasons) == 76, "Offset mismatch for FJunoPlayerSkillUpgrade::AvailabilityReasons");
static_assert(offsetof(FJunoPlayerSkillUpgrade, PhaseNumber) == 80, "Offset mismatch for FJunoPlayerSkillUpgrade::PhaseNumber");
static_assert(offsetof(FJunoPlayerSkillUpgrade, RequiredLevel) == 84, "Offset mismatch for FJunoPlayerSkillUpgrade::RequiredLevel");

// /Script/JunoPlayerRolesUI.JunoPlayerSkillUpgradePhase
// Kind: ScriptStruct; super: none
struct FJunoPlayerSkillUpgradePhase
{
public:
    std::int32_t PhaseNumber; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> SkillUpgrades; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoPlayerSkillUpgradePhase, PhaseNumber) == 0, "Offset mismatch for FJunoPlayerSkillUpgradePhase::PhaseNumber");
static_assert(offsetof(FJunoPlayerSkillUpgradePhase, SkillUpgrades) == 8, "Offset mismatch for FJunoPlayerSkillUpgradePhase::SkillUpgrades");

// /Script/JunoPlayerRolesUI.JunoPlayerProgressionViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoPlayerProgressionViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TArray<void*> Roles; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    void* CurrentRole; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    void* SelectedRole; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SelectedUpgradeTag[0x8]; // 0x0098 (Size: 0x8, Type: StructProperty)
    TArray<void*> AllRolesAndSkills; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AllRoleCategories; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoPlayerProgressionViewModel, Roles) == 120, "Offset mismatch for UJunoPlayerProgressionViewModel::Roles");
static_assert(offsetof(UJunoPlayerProgressionViewModel, CurrentRole) == 136, "Offset mismatch for UJunoPlayerProgressionViewModel::CurrentRole");
static_assert(offsetof(UJunoPlayerProgressionViewModel, SelectedRole) == 144, "Offset mismatch for UJunoPlayerProgressionViewModel::SelectedRole");
static_assert(offsetof(UJunoPlayerProgressionViewModel, SelectedUpgradeTag) == 152, "Offset mismatch for UJunoPlayerProgressionViewModel::SelectedUpgradeTag");
static_assert(offsetof(UJunoPlayerProgressionViewModel, AllRolesAndSkills) == 160, "Offset mismatch for UJunoPlayerProgressionViewModel::AllRolesAndSkills");
static_assert(offsetof(UJunoPlayerProgressionViewModel, AllRoleCategories) == 176, "Offset mismatch for UJunoPlayerProgressionViewModel::AllRoleCategories");

// /Script/JunoPlayerRolesUI.JunoPlayerRoleCategoryViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoPlayerRoleCategoryViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t RoleCategoryTag[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoPlayerRoleCategoryViewModel, DisplayName) == 104, "Offset mismatch for UJunoPlayerRoleCategoryViewModel::DisplayName");
static_assert(offsetof(UJunoPlayerRoleCategoryViewModel, RoleCategoryTag) == 120, "Offset mismatch for UJunoPlayerRoleCategoryViewModel::RoleCategoryTag");

// /Script/JunoPlayerRolesUI.JunoPlayerRoleViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoPlayerRoleViewModel
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t GridListItemType[0x4]; // 0x0088 (Size: 0x4, Type: NameProperty)
    std::uint8_t RoleTag[0x4]; // 0x008C (Size: 0x4, Type: StructProperty)
    std::uint8_t RoleCategoryTag[0x8]; // 0x0090 (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayName[0x10]; // 0x0098 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x00A8 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortDescription[0x10]; // 0x00B8 (Size: 0x10, Type: TextProperty)
    std::uint8_t RoleColor[0x10]; // 0x00C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t Icon[0x20]; // 0x00D8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Portrait[0x20]; // 0x00F8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CloseUpPortrait[0x20]; // 0x0118 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t PortraitBackground[0x20]; // 0x0138 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BackgroundImage[0x20]; // 0x0158 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BackgroundFX[0x20]; // 0x0178 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ProgressBar[0x20]; // 0x0198 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SkillPointIcon[0x20]; // 0x01B8 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t CurrentLevel; // 0x01D8 (Size: 0x4, Type: IntProperty)
    std::int32_t CurrentXP; // 0x01DC (Size: 0x4, Type: IntProperty)
    std::int32_t RequiredXP; // 0x01E0 (Size: 0x4, Type: IntProperty)
    float ProgressToNextLevel; // 0x01E4 (Size: 0x4, Type: FloatProperty)
    std::int32_t AvailableSkillPoints; // 0x01E8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x01EC
    TArray<void*> Skills; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    void* SelectedSkill; // 0x0200 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoPlayerRoleViewModel, GridListItemType) == 136, "Offset mismatch for UJunoPlayerRoleViewModel::GridListItemType");
static_assert(offsetof(UJunoPlayerRoleViewModel, RoleTag) == 140, "Offset mismatch for UJunoPlayerRoleViewModel::RoleTag");
static_assert(offsetof(UJunoPlayerRoleViewModel, RoleCategoryTag) == 144, "Offset mismatch for UJunoPlayerRoleViewModel::RoleCategoryTag");
static_assert(offsetof(UJunoPlayerRoleViewModel, DisplayName) == 152, "Offset mismatch for UJunoPlayerRoleViewModel::DisplayName");
static_assert(offsetof(UJunoPlayerRoleViewModel, Description) == 168, "Offset mismatch for UJunoPlayerRoleViewModel::Description");
static_assert(offsetof(UJunoPlayerRoleViewModel, ShortDescription) == 184, "Offset mismatch for UJunoPlayerRoleViewModel::ShortDescription");
static_assert(offsetof(UJunoPlayerRoleViewModel, RoleColor) == 200, "Offset mismatch for UJunoPlayerRoleViewModel::RoleColor");
static_assert(offsetof(UJunoPlayerRoleViewModel, Icon) == 216, "Offset mismatch for UJunoPlayerRoleViewModel::Icon");
static_assert(offsetof(UJunoPlayerRoleViewModel, Portrait) == 248, "Offset mismatch for UJunoPlayerRoleViewModel::Portrait");
static_assert(offsetof(UJunoPlayerRoleViewModel, CloseUpPortrait) == 280, "Offset mismatch for UJunoPlayerRoleViewModel::CloseUpPortrait");
static_assert(offsetof(UJunoPlayerRoleViewModel, PortraitBackground) == 312, "Offset mismatch for UJunoPlayerRoleViewModel::PortraitBackground");
static_assert(offsetof(UJunoPlayerRoleViewModel, BackgroundImage) == 344, "Offset mismatch for UJunoPlayerRoleViewModel::BackgroundImage");
static_assert(offsetof(UJunoPlayerRoleViewModel, BackgroundFX) == 376, "Offset mismatch for UJunoPlayerRoleViewModel::BackgroundFX");
static_assert(offsetof(UJunoPlayerRoleViewModel, ProgressBar) == 408, "Offset mismatch for UJunoPlayerRoleViewModel::ProgressBar");
static_assert(offsetof(UJunoPlayerRoleViewModel, SkillPointIcon) == 440, "Offset mismatch for UJunoPlayerRoleViewModel::SkillPointIcon");
static_assert(offsetof(UJunoPlayerRoleViewModel, CurrentLevel) == 472, "Offset mismatch for UJunoPlayerRoleViewModel::CurrentLevel");
static_assert(offsetof(UJunoPlayerRoleViewModel, CurrentXP) == 476, "Offset mismatch for UJunoPlayerRoleViewModel::CurrentXP");
static_assert(offsetof(UJunoPlayerRoleViewModel, RequiredXP) == 480, "Offset mismatch for UJunoPlayerRoleViewModel::RequiredXP");
static_assert(offsetof(UJunoPlayerRoleViewModel, ProgressToNextLevel) == 484, "Offset mismatch for UJunoPlayerRoleViewModel::ProgressToNextLevel");
static_assert(offsetof(UJunoPlayerRoleViewModel, AvailableSkillPoints) == 488, "Offset mismatch for UJunoPlayerRoleViewModel::AvailableSkillPoints");
static_assert(offsetof(UJunoPlayerRoleViewModel, Skills) == 496, "Offset mismatch for UJunoPlayerRoleViewModel::Skills");
static_assert(offsetof(UJunoPlayerRoleViewModel, SelectedSkill) == 512, "Offset mismatch for UJunoPlayerRoleViewModel::SelectedSkill");

// /Script/JunoPlayerRolesUI.JunoPlayerRolesUICheatManager
// Kind: Class; super: ChildCheatManager
class UJunoPlayerRolesUICheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPlayerRolesUI.JunoPlayerSkillViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoPlayerSkillViewModel
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    FName GridListItemType; // 0x0080 (Size: 0x8, Type: NameProperty)
    std::uint8_t DisplayName[0x10]; // 0x0088 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortDescription[0x10]; // 0x0098 (Size: 0x10, Type: TextProperty)
    std::uint8_t LongDescription[0x10]; // 0x00A8 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x00B8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t UpgradeIcon[0x20]; // 0x00D8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SkillType; // 0x00F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00F9
    TWeakObjectPtr<void> WeakInputAction; // 0x00FC (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0104
    TMap<void*, void*> TempOverrideLegacyActions; // 0x0108 (Size: 0x10, Type: MapProperty)
    TArray<void*> SkillUpgradePhases; // 0x0118 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoPlayerSkillViewModel, GridListItemType) == 128, "Offset mismatch for UJunoPlayerSkillViewModel::GridListItemType");
static_assert(offsetof(UJunoPlayerSkillViewModel, DisplayName) == 136, "Offset mismatch for UJunoPlayerSkillViewModel::DisplayName");
static_assert(offsetof(UJunoPlayerSkillViewModel, ShortDescription) == 152, "Offset mismatch for UJunoPlayerSkillViewModel::ShortDescription");
static_assert(offsetof(UJunoPlayerSkillViewModel, LongDescription) == 168, "Offset mismatch for UJunoPlayerSkillViewModel::LongDescription");
static_assert(offsetof(UJunoPlayerSkillViewModel, Icon) == 184, "Offset mismatch for UJunoPlayerSkillViewModel::Icon");
static_assert(offsetof(UJunoPlayerSkillViewModel, UpgradeIcon) == 216, "Offset mismatch for UJunoPlayerSkillViewModel::UpgradeIcon");
static_assert(offsetof(UJunoPlayerSkillViewModel, SkillType) == 248, "Offset mismatch for UJunoPlayerSkillViewModel::SkillType");
static_assert(offsetof(UJunoPlayerSkillViewModel, WeakInputAction) == 252, "Offset mismatch for UJunoPlayerSkillViewModel::WeakInputAction");
static_assert(offsetof(UJunoPlayerSkillViewModel, TempOverrideLegacyActions) == 264, "Offset mismatch for UJunoPlayerSkillViewModel::TempOverrideLegacyActions");
static_assert(offsetof(UJunoPlayerSkillViewModel, SkillUpgradePhases) == 280, "Offset mismatch for UJunoPlayerSkillViewModel::SkillUpgradePhases");
