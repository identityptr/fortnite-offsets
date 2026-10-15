/**
 * decamp dumper generated SDK
 * Package: /Script/JunoPlayerRoles
 */
#pragma once
#include "Basic.h"

// /Script/JunoPlayerRoles.FortInitialProgress_CheckRoleLevel
// Kind: ScriptStruct; super: FortInitialProgressBase
struct FFortInitialProgress_CheckRoleLevel
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPlayerRoles.JunoChangedSkill
// Kind: ScriptStruct; super: none
struct FJunoChangedSkill
{
public:
    std::int32_t Level; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoChangedSkill, Level) == 0, "Offset mismatch for FJunoChangedSkill::Level");

// /Script/JunoPlayerRoles.JunoEscalationChangedEvent
// Kind: ScriptStruct; super: none
struct FJunoEscalationChangedEvent
{
public:
    std::uint8_t EscalationTag[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoEscalationChangedEvent, EscalationTag) == 0, "Offset mismatch for FJunoEscalationChangedEvent::EscalationTag");

// /Script/JunoPlayerRoles.JunoEscalationDefinitionRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoEscalationDefinitionRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t EscalationTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t bEnabled; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    float EscalationLevel; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0014
    std::uint8_t LootTags[0x20]; // 0x0018 (Size: 0x20, Type: StructProperty)
    FName EventName; // 0x0038 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FJunoEscalationDefinitionRow, EscalationTag) == 8, "Offset mismatch for FJunoEscalationDefinitionRow::EscalationTag");
static_assert(offsetof(FJunoEscalationDefinitionRow, bEnabled) == 12, "Offset mismatch for FJunoEscalationDefinitionRow::bEnabled");
static_assert(offsetof(FJunoEscalationDefinitionRow, EscalationLevel) == 16, "Offset mismatch for FJunoEscalationDefinitionRow::EscalationLevel");
static_assert(offsetof(FJunoEscalationDefinitionRow, LootTags) == 24, "Offset mismatch for FJunoEscalationDefinitionRow::LootTags");
static_assert(offsetof(FJunoEscalationDefinitionRow, EventName) == 56, "Offset mismatch for FJunoEscalationDefinitionRow::EventName");

// /Script/JunoPlayerRoles.JunoEventReaction_GrantRoleBase
// Kind: ScriptStruct; super: JunoEventReaction_RewardBase
struct FJunoEventReaction_GrantRoleBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RoleTag[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoEventReaction_GrantRoleBase, RoleTag) == 8, "Offset mismatch for FJunoEventReaction_GrantRoleBase::RoleTag");

// /Script/JunoPlayerRoles.JunoEventReaction_GrantRoleDataTableReward
// Kind: ScriptStruct; super: JunoEventReaction_RewardBase
struct FJunoEventReaction_GrantRoleDataTableReward
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> RoleDataTableRewards; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoEventReaction_GrantRoleDataTableReward, RoleDataTableRewards) == 8, "Offset mismatch for FJunoEventReaction_GrantRoleDataTableReward::RoleDataTableRewards");

// /Script/JunoPlayerRoles.JunoEventReaction_GrantRoleSkillPoints
// Kind: ScriptStruct; super: JunoEventReaction_GrantRoleBase
struct FJunoEventReaction_GrantRoleSkillPoints
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int32_t SkillPointsToGrant; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoEventReaction_GrantRoleSkillPoints, SkillPointsToGrant) == 16, "Offset mismatch for FJunoEventReaction_GrantRoleSkillPoints::SkillPointsToGrant");

// /Script/JunoPlayerRoles.JunoEventReaction_GrantRoleXP
// Kind: ScriptStruct; super: JunoEventReaction_GrantRoleBase
struct FJunoEventReaction_GrantRoleXP
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::int32_t XPToGrant; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoEventReaction_GrantRoleXP, XPToGrant) == 16, "Offset mismatch for FJunoEventReaction_GrantRoleXP::XPToGrant");

// /Script/JunoPlayerRoles.JunoEvent_OpenRoleSelectScreen
// Kind: ScriptStruct; super: none
struct FJunoEvent_OpenRoleSelectScreen
{
public:
    std::uint8_t RoleScreenType[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoEvent_OpenRoleSelectScreen, RoleScreenType) == 0, "Offset mismatch for FJunoEvent_OpenRoleSelectScreen::RoleScreenType");

// /Script/JunoPlayerRoles.JunoLevelRequirementsRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoLevelRequirementsRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RoleTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::int32_t Level; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnabled; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::int32_t RequiredXP; // 0x0014 (Size: 0x4, Type: IntProperty)
    float RequiredEscalationLevel; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FJunoLevelRequirementsRow, RoleTag) == 8, "Offset mismatch for FJunoLevelRequirementsRow::RoleTag");
static_assert(offsetof(FJunoLevelRequirementsRow, Level) == 12, "Offset mismatch for FJunoLevelRequirementsRow::Level");
static_assert(offsetof(FJunoLevelRequirementsRow, bEnabled) == 16, "Offset mismatch for FJunoLevelRequirementsRow::bEnabled");
static_assert(offsetof(FJunoLevelRequirementsRow, RequiredXP) == 20, "Offset mismatch for FJunoLevelRequirementsRow::RequiredXP");
static_assert(offsetof(FJunoLevelRequirementsRow, RequiredEscalationLevel) == 24, "Offset mismatch for FJunoLevelRequirementsRow::RequiredEscalationLevel");

// /Script/JunoPlayerRoles.JunoLevelRewardsRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoLevelRewardsRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RoleTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::int32_t Level; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnabled; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    std::int32_t SkillPoints; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoLevelRewardsRow, RoleTag) == 8, "Offset mismatch for FJunoLevelRewardsRow::RoleTag");
static_assert(offsetof(FJunoLevelRewardsRow, Level) == 12, "Offset mismatch for FJunoLevelRewardsRow::Level");
static_assert(offsetof(FJunoLevelRewardsRow, bEnabled) == 16, "Offset mismatch for FJunoLevelRewardsRow::bEnabled");
static_assert(offsetof(FJunoLevelRewardsRow, SkillPoints) == 20, "Offset mismatch for FJunoLevelRewardsRow::SkillPoints");

// /Script/JunoPlayerRoles.JunoLevelsSettings
// Kind: ScriptStruct; super: TableRowBase
struct FJunoLevelsSettings
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* LevelProgressConversionItem; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::int32_t AmountToSpendForLevelProgressConversion; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t XPGainedFromLevelProgressConversion; // 0x0014 (Size: 0x4, Type: IntProperty)
    TArray<void*> PlaylistsSupportingLevelProgressConversion; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoLevelsSettings, LevelProgressConversionItem) == 8, "Offset mismatch for FJunoLevelsSettings::LevelProgressConversionItem");
static_assert(offsetof(FJunoLevelsSettings, AmountToSpendForLevelProgressConversion) == 16, "Offset mismatch for FJunoLevelsSettings::AmountToSpendForLevelProgressConversion");
static_assert(offsetof(FJunoLevelsSettings, XPGainedFromLevelProgressConversion) == 20, "Offset mismatch for FJunoLevelsSettings::XPGainedFromLevelProgressConversion");
static_assert(offsetof(FJunoLevelsSettings, PlaylistsSupportingLevelProgressConversion) == 24, "Offset mismatch for FJunoLevelsSettings::PlaylistsSupportingLevelProgressConversion");

// /Script/JunoPlayerRoles.JunoPlayerGainedXPLevelsSkillPoints
// Kind: ScriptStruct; super: none
struct FJunoPlayerGainedXPLevelsSkillPoints
{
public:
    void* player; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RoleTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::int32_t GainedXP; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t GainedLevels; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t GainedSkillPoints; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t OldXP; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t OldLevel; // 0x001C (Size: 0x4, Type: IntProperty)
    std::int32_t OldUnspentPoints; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t NewXP; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::int32_t NewLevel; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t NewUnspentPoints; // 0x002C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoPlayerGainedXPLevelsSkillPoints, player) == 0, "Offset mismatch for FJunoPlayerGainedXPLevelsSkillPoints::player");
static_assert(offsetof(FJunoPlayerGainedXPLevelsSkillPoints, RoleTag) == 8, "Offset mismatch for FJunoPlayerGainedXPLevelsSkillPoints::RoleTag");
static_assert(offsetof(FJunoPlayerGainedXPLevelsSkillPoints, GainedXP) == 12, "Offset mismatch for FJunoPlayerGainedXPLevelsSkillPoints::GainedXP");
static_assert(offsetof(FJunoPlayerGainedXPLevelsSkillPoints, GainedLevels) == 16, "Offset mismatch for FJunoPlayerGainedXPLevelsSkillPoints::GainedLevels");
static_assert(offsetof(FJunoPlayerGainedXPLevelsSkillPoints, GainedSkillPoints) == 20, "Offset mismatch for FJunoPlayerGainedXPLevelsSkillPoints::GainedSkillPoints");
static_assert(offsetof(FJunoPlayerGainedXPLevelsSkillPoints, OldXP) == 24, "Offset mismatch for FJunoPlayerGainedXPLevelsSkillPoints::OldXP");
static_assert(offsetof(FJunoPlayerGainedXPLevelsSkillPoints, OldLevel) == 28, "Offset mismatch for FJunoPlayerGainedXPLevelsSkillPoints::OldLevel");
static_assert(offsetof(FJunoPlayerGainedXPLevelsSkillPoints, OldUnspentPoints) == 32, "Offset mismatch for FJunoPlayerGainedXPLevelsSkillPoints::OldUnspentPoints");
static_assert(offsetof(FJunoPlayerGainedXPLevelsSkillPoints, NewXP) == 36, "Offset mismatch for FJunoPlayerGainedXPLevelsSkillPoints::NewXP");
static_assert(offsetof(FJunoPlayerGainedXPLevelsSkillPoints, NewLevel) == 40, "Offset mismatch for FJunoPlayerGainedXPLevelsSkillPoints::NewLevel");
static_assert(offsetof(FJunoPlayerGainedXPLevelsSkillPoints, NewUnspentPoints) == 44, "Offset mismatch for FJunoPlayerGainedXPLevelsSkillPoints::NewUnspentPoints");

// /Script/JunoPlayerRoles.JunoPlayerLevelChangedEvent
// Kind: ScriptStruct; super: none
struct FJunoPlayerLevelChangedEvent
{
public:
    void* player; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RoleTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::int32_t OldLevel; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t NewLevel; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoPlayerLevelChangedEvent, player) == 0, "Offset mismatch for FJunoPlayerLevelChangedEvent::player");
static_assert(offsetof(FJunoPlayerLevelChangedEvent, RoleTag) == 8, "Offset mismatch for FJunoPlayerLevelChangedEvent::RoleTag");
static_assert(offsetof(FJunoPlayerLevelChangedEvent, OldLevel) == 12, "Offset mismatch for FJunoPlayerLevelChangedEvent::OldLevel");
static_assert(offsetof(FJunoPlayerLevelChangedEvent, NewLevel) == 16, "Offset mismatch for FJunoPlayerLevelChangedEvent::NewLevel");

// /Script/JunoPlayerRoles.JunoPlayerLeveledUpEvent
// Kind: ScriptStruct; super: none
struct FJunoPlayerLeveledUpEvent
{
public:
    void* player; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RoleTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::int32_t GainedLevels; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t OldLevel; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t NewLevel; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoPlayerLeveledUpEvent, player) == 0, "Offset mismatch for FJunoPlayerLeveledUpEvent::player");
static_assert(offsetof(FJunoPlayerLeveledUpEvent, RoleTag) == 8, "Offset mismatch for FJunoPlayerLeveledUpEvent::RoleTag");
static_assert(offsetof(FJunoPlayerLeveledUpEvent, GainedLevels) == 12, "Offset mismatch for FJunoPlayerLeveledUpEvent::GainedLevels");
static_assert(offsetof(FJunoPlayerLeveledUpEvent, OldLevel) == 16, "Offset mismatch for FJunoPlayerLeveledUpEvent::OldLevel");
static_assert(offsetof(FJunoPlayerLeveledUpEvent, NewLevel) == 20, "Offset mismatch for FJunoPlayerLeveledUpEvent::NewLevel");

// /Script/JunoPlayerRoles.JunoPlayerPointsBalanceChangedEvent
// Kind: ScriptStruct; super: none
struct FJunoPlayerPointsBalanceChangedEvent
{
public:
    void* player; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OldPointsBalance[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t NewPointsBalance[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoPlayerPointsBalanceChangedEvent, player) == 0, "Offset mismatch for FJunoPlayerPointsBalanceChangedEvent::player");
static_assert(offsetof(FJunoPlayerPointsBalanceChangedEvent, OldPointsBalance) == 8, "Offset mismatch for FJunoPlayerPointsBalanceChangedEvent::OldPointsBalance");
static_assert(offsetof(FJunoPlayerPointsBalanceChangedEvent, NewPointsBalance) == 16, "Offset mismatch for FJunoPlayerPointsBalanceChangedEvent::NewPointsBalance");

// /Script/JunoPlayerRoles.JunoPlayerRoleSaveData
// Kind: ScriptStruct; super: none
struct FJunoPlayerRoleSaveData
{
public:
    std::int32_t XP; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Level; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t UnspentSkillPoints; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t SpentSkillPoints; // 0x000C (Size: 0x4, Type: IntProperty)
    TArray<void*> Skills; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SkillDetails; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoPlayerRoleSaveData, XP) == 0, "Offset mismatch for FJunoPlayerRoleSaveData::XP");
static_assert(offsetof(FJunoPlayerRoleSaveData, Level) == 4, "Offset mismatch for FJunoPlayerRoleSaveData::Level");
static_assert(offsetof(FJunoPlayerRoleSaveData, UnspentSkillPoints) == 8, "Offset mismatch for FJunoPlayerRoleSaveData::UnspentSkillPoints");
static_assert(offsetof(FJunoPlayerRoleSaveData, SpentSkillPoints) == 12, "Offset mismatch for FJunoPlayerRoleSaveData::SpentSkillPoints");
static_assert(offsetof(FJunoPlayerRoleSaveData, Skills) == 16, "Offset mismatch for FJunoPlayerRoleSaveData::Skills");
static_assert(offsetof(FJunoPlayerRoleSaveData, SkillDetails) == 32, "Offset mismatch for FJunoPlayerRoleSaveData::SkillDetails");

// /Script/JunoPlayerRoles.JunoPlayerRolesSaveData
// Kind: ScriptStruct; super: none
struct FJunoPlayerRolesSaveData
{
public:
    std::uint8_t SelectedRole[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TMap<void*, void*> Roles; // 0x0008 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FJunoPlayerRolesSaveData, SelectedRole) == 0, "Offset mismatch for FJunoPlayerRolesSaveData::SelectedRole");
static_assert(offsetof(FJunoPlayerRolesSaveData, Roles) == 8, "Offset mismatch for FJunoPlayerRolesSaveData::Roles");

// /Script/JunoPlayerRoles.JunoPlayerRolesWorldSaveData
// Kind: ScriptStruct; super: none
struct FJunoPlayerRolesWorldSaveData
{
public:
    std::uint8_t WorldPlayerRoles[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoPlayerRolesWorldSaveData, WorldPlayerRoles) == 0, "Offset mismatch for FJunoPlayerRolesWorldSaveData::WorldPlayerRoles");

// /Script/JunoPlayerRoles.JunoPlayerUnspentSkillPointsChangedEvent
// Kind: ScriptStruct; super: none
struct FJunoPlayerUnspentSkillPointsChangedEvent
{
public:
    void* player; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RoleTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::int32_t OldUnspentSkillPoints; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t NewUnspentSkillPoints; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoPlayerUnspentSkillPointsChangedEvent, player) == 0, "Offset mismatch for FJunoPlayerUnspentSkillPointsChangedEvent::player");
static_assert(offsetof(FJunoPlayerUnspentSkillPointsChangedEvent, RoleTag) == 8, "Offset mismatch for FJunoPlayerUnspentSkillPointsChangedEvent::RoleTag");
static_assert(offsetof(FJunoPlayerUnspentSkillPointsChangedEvent, OldUnspentSkillPoints) == 12, "Offset mismatch for FJunoPlayerUnspentSkillPointsChangedEvent::OldUnspentSkillPoints");
static_assert(offsetof(FJunoPlayerUnspentSkillPointsChangedEvent, NewUnspentSkillPoints) == 16, "Offset mismatch for FJunoPlayerUnspentSkillPointsChangedEvent::NewUnspentSkillPoints");

// /Script/JunoPlayerRoles.JunoPlayerXPChangedEvent
// Kind: ScriptStruct; super: none
struct FJunoPlayerXPChangedEvent
{
public:
    void* player; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RoleTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::int32_t OldXP; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t NewXP; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoPlayerXPChangedEvent, player) == 0, "Offset mismatch for FJunoPlayerXPChangedEvent::player");
static_assert(offsetof(FJunoPlayerXPChangedEvent, RoleTag) == 8, "Offset mismatch for FJunoPlayerXPChangedEvent::RoleTag");
static_assert(offsetof(FJunoPlayerXPChangedEvent, OldXP) == 12, "Offset mismatch for FJunoPlayerXPChangedEvent::OldXP");
static_assert(offsetof(FJunoPlayerXPChangedEvent, NewXP) == 16, "Offset mismatch for FJunoPlayerXPChangedEvent::NewXP");

// /Script/JunoPlayerRoles.JunoPointsBalance
// Kind: ScriptStruct; super: none
struct FJunoPointsBalance
{
public:
    std::int32_t UnspentSkillPoints; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t InvestedSkillPoints; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoPointsBalance, UnspentSkillPoints) == 0, "Offset mismatch for FJunoPointsBalance::UnspentSkillPoints");
static_assert(offsetof(FJunoPointsBalance, InvestedSkillPoints) == 4, "Offset mismatch for FJunoPointsBalance::InvestedSkillPoints");

// /Script/JunoPlayerRoles.JunoPointsWorldSaveData
// Kind: ScriptStruct; super: none
struct FJunoPointsWorldSaveData
{
public:
    std::uint8_t SkillPoints[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoPointsWorldSaveData, SkillPoints) == 0, "Offset mismatch for FJunoPointsWorldSaveData::SkillPoints");

// /Script/JunoPlayerRoles.JunoReplicatedPointsBalance
// Kind: ScriptStruct; super: none
struct FJunoReplicatedPointsBalance
{
public:
    std::uint8_t Balance[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoReplicatedPointsBalance, Balance) == 0, "Offset mismatch for FJunoReplicatedPointsBalance::Balance");

// /Script/JunoPlayerRoles.JunoReplicatedRoleLevels
// Kind: ScriptStruct; super: none
struct FJunoReplicatedRoleLevels
{
public:
    std::uint8_t RoleTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::int32_t Level; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t XP; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t UnspentPoints; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t SpentPoints; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoReplicatedRoleLevels, RoleTag) == 0, "Offset mismatch for FJunoReplicatedRoleLevels::RoleTag");
static_assert(offsetof(FJunoReplicatedRoleLevels, Level) == 4, "Offset mismatch for FJunoReplicatedRoleLevels::Level");
static_assert(offsetof(FJunoReplicatedRoleLevels, XP) == 8, "Offset mismatch for FJunoReplicatedRoleLevels::XP");
static_assert(offsetof(FJunoReplicatedRoleLevels, UnspentPoints) == 12, "Offset mismatch for FJunoReplicatedRoleLevels::UnspentPoints");
static_assert(offsetof(FJunoReplicatedRoleLevels, SpentPoints) == 16, "Offset mismatch for FJunoReplicatedRoleLevels::SpentPoints");

// /Script/JunoPlayerRoles.JunoReplicatedRoleSkills
// Kind: ScriptStruct; super: none
struct FJunoReplicatedRoleSkills
{
public:
    std::uint8_t RoleTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> RoleSkills; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoReplicatedRoleSkills, RoleTag) == 0, "Offset mismatch for FJunoReplicatedRoleSkills::RoleTag");
static_assert(offsetof(FJunoReplicatedRoleSkills, RoleSkills) == 8, "Offset mismatch for FJunoReplicatedRoleSkills::RoleSkills");

// /Script/JunoPlayerRoles.JunoReplicatedSkill
// Kind: ScriptStruct; super: none
struct FJunoReplicatedSkill
{
public:
    std::uint8_t SkillTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t SkillUpgradeTags[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoReplicatedSkill, SkillTag) == 0, "Offset mismatch for FJunoReplicatedSkill::SkillTag");
static_assert(offsetof(FJunoReplicatedSkill, SkillUpgradeTags) == 8, "Offset mismatch for FJunoReplicatedSkill::SkillUpgradeTags");

// /Script/JunoPlayerRoles.JunoRoleAbilityMetaDataRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoRoleAbilityMetaDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t AssociatedGameplayAbility[0x20]; // 0x0008 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t AbilityIcon[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t HudAbilityIcon[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t UpgradeIcon[0x20]; // 0x0068 (Size: 0x20, Type: SoftObjectProperty)
    void* OverrideInputAction; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> TempOverrideLegacyActions; // 0x0090 (Size: 0x10, Type: MapProperty)
    std::uint8_t DisplayName[0x10]; // 0x00A0 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortDescription[0x10]; // 0x00B0 (Size: 0x10, Type: TextProperty)
    std::uint8_t LongDescription[0x10]; // 0x00C0 (Size: 0x10, Type: TextProperty)
    std::uint8_t DisplayCooldownTags[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t DisplayChargeTag[0x4]; // 0x00F0 (Size: 0x4, Type: StructProperty)
    std::uint8_t ToggleEnabledTag[0x4]; // 0x00F4 (Size: 0x4, Type: StructProperty)
    std::uint8_t DisplayRechargingTag[0x4]; // 0x00F8 (Size: 0x4, Type: StructProperty)
    std::uint8_t SkillType; // 0x00FC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00FD
    std::int32_t SortOrder; // 0x0100 (Size: 0x4, Type: IntProperty)
    std::int32_t AbilityBarSortOrder; // 0x0104 (Size: 0x4, Type: IntProperty)
    std::uint8_t bHideInClassInfoScreen; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHideInAbilityBar; // 0x0109 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoRoleAbilityMetaDataRow, AssociatedGameplayAbility) == 8, "Offset mismatch for FJunoRoleAbilityMetaDataRow::AssociatedGameplayAbility");
static_assert(offsetof(FJunoRoleAbilityMetaDataRow, AbilityIcon) == 40, "Offset mismatch for FJunoRoleAbilityMetaDataRow::AbilityIcon");
static_assert(offsetof(FJunoRoleAbilityMetaDataRow, HudAbilityIcon) == 72, "Offset mismatch for FJunoRoleAbilityMetaDataRow::HudAbilityIcon");
static_assert(offsetof(FJunoRoleAbilityMetaDataRow, UpgradeIcon) == 104, "Offset mismatch for FJunoRoleAbilityMetaDataRow::UpgradeIcon");
static_assert(offsetof(FJunoRoleAbilityMetaDataRow, OverrideInputAction) == 136, "Offset mismatch for FJunoRoleAbilityMetaDataRow::OverrideInputAction");
static_assert(offsetof(FJunoRoleAbilityMetaDataRow, TempOverrideLegacyActions) == 144, "Offset mismatch for FJunoRoleAbilityMetaDataRow::TempOverrideLegacyActions");
static_assert(offsetof(FJunoRoleAbilityMetaDataRow, DisplayName) == 160, "Offset mismatch for FJunoRoleAbilityMetaDataRow::DisplayName");
static_assert(offsetof(FJunoRoleAbilityMetaDataRow, ShortDescription) == 176, "Offset mismatch for FJunoRoleAbilityMetaDataRow::ShortDescription");
static_assert(offsetof(FJunoRoleAbilityMetaDataRow, LongDescription) == 192, "Offset mismatch for FJunoRoleAbilityMetaDataRow::LongDescription");
static_assert(offsetof(FJunoRoleAbilityMetaDataRow, DisplayCooldownTags) == 208, "Offset mismatch for FJunoRoleAbilityMetaDataRow::DisplayCooldownTags");
static_assert(offsetof(FJunoRoleAbilityMetaDataRow, DisplayChargeTag) == 240, "Offset mismatch for FJunoRoleAbilityMetaDataRow::DisplayChargeTag");
static_assert(offsetof(FJunoRoleAbilityMetaDataRow, ToggleEnabledTag) == 244, "Offset mismatch for FJunoRoleAbilityMetaDataRow::ToggleEnabledTag");
static_assert(offsetof(FJunoRoleAbilityMetaDataRow, DisplayRechargingTag) == 248, "Offset mismatch for FJunoRoleAbilityMetaDataRow::DisplayRechargingTag");
static_assert(offsetof(FJunoRoleAbilityMetaDataRow, SkillType) == 252, "Offset mismatch for FJunoRoleAbilityMetaDataRow::SkillType");
static_assert(offsetof(FJunoRoleAbilityMetaDataRow, SortOrder) == 256, "Offset mismatch for FJunoRoleAbilityMetaDataRow::SortOrder");
static_assert(offsetof(FJunoRoleAbilityMetaDataRow, AbilityBarSortOrder) == 260, "Offset mismatch for FJunoRoleAbilityMetaDataRow::AbilityBarSortOrder");
static_assert(offsetof(FJunoRoleAbilityMetaDataRow, bHideInClassInfoScreen) == 264, "Offset mismatch for FJunoRoleAbilityMetaDataRow::bHideInClassInfoScreen");
static_assert(offsetof(FJunoRoleAbilityMetaDataRow, bHideInAbilityBar) == 265, "Offset mismatch for FJunoRoleAbilityMetaDataRow::bHideInAbilityBar");

// /Script/JunoPlayerRoles.JunoRoleCategoryMetaDataRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoRoleCategoryMetaDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RoleCategoryTag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::int32_t DisplaySortPriority; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoRoleCategoryMetaDataRow, RoleCategoryTag) == 8, "Offset mismatch for FJunoRoleCategoryMetaDataRow::RoleCategoryTag");
static_assert(offsetof(FJunoRoleCategoryMetaDataRow, DisplayName) == 16, "Offset mismatch for FJunoRoleCategoryMetaDataRow::DisplayName");
static_assert(offsetof(FJunoRoleCategoryMetaDataRow, DisplaySortPriority) == 32, "Offset mismatch for FJunoRoleCategoryMetaDataRow::DisplaySortPriority");

// /Script/JunoPlayerRoles.JunoRoleDefinitionRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoRoleDefinitionRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RoleTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t bEnabled; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::uint8_t DisplayName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t Abilities[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bIsDefaultRole; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FJunoRoleDefinitionRow, RoleTag) == 8, "Offset mismatch for FJunoRoleDefinitionRow::RoleTag");
static_assert(offsetof(FJunoRoleDefinitionRow, bEnabled) == 12, "Offset mismatch for FJunoRoleDefinitionRow::bEnabled");
static_assert(offsetof(FJunoRoleDefinitionRow, DisplayName) == 16, "Offset mismatch for FJunoRoleDefinitionRow::DisplayName");
static_assert(offsetof(FJunoRoleDefinitionRow, Abilities) == 32, "Offset mismatch for FJunoRoleDefinitionRow::Abilities");
static_assert(offsetof(FJunoRoleDefinitionRow, bIsDefaultRole) == 64, "Offset mismatch for FJunoRoleDefinitionRow::bIsDefaultRole");

// /Script/JunoPlayerRoles.JunoRoleLevelKey
// Kind: ScriptStruct; super: none
struct FJunoRoleLevelKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPlayerRoles.JunoRoleMetaDataRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoRoleMetaDataRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RoleTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t RoleCategoryTag[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t DisplayName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t ShortDescription[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Portrait[0x20]; // 0x0060 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CloseUpPortrait[0x20]; // 0x0080 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t PortraitBackground[0x20]; // 0x00A0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BackgroundImage[0x20]; // 0x00C0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BackgroundFX[0x20]; // 0x00E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ProgressBar[0x20]; // 0x0100 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t GainSkillPointDisplayName[0x10]; // 0x0120 (Size: 0x10, Type: TextProperty)
    std::uint8_t GainSkillPointIcon[0x20]; // 0x0130 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t GainXpDisplayName[0x10]; // 0x0150 (Size: 0x10, Type: TextProperty)
    std::uint8_t GainXpIcon[0x20]; // 0x0160 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t RoleColor[0x1]; // 0x0180 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoRoleMetaDataRow, RoleTag) == 8, "Offset mismatch for FJunoRoleMetaDataRow::RoleTag");
static_assert(offsetof(FJunoRoleMetaDataRow, RoleCategoryTag) == 12, "Offset mismatch for FJunoRoleMetaDataRow::RoleCategoryTag");
static_assert(offsetof(FJunoRoleMetaDataRow, DisplayName) == 16, "Offset mismatch for FJunoRoleMetaDataRow::DisplayName");
static_assert(offsetof(FJunoRoleMetaDataRow, ShortDescription) == 32, "Offset mismatch for FJunoRoleMetaDataRow::ShortDescription");
static_assert(offsetof(FJunoRoleMetaDataRow, Description) == 48, "Offset mismatch for FJunoRoleMetaDataRow::Description");
static_assert(offsetof(FJunoRoleMetaDataRow, Icon) == 64, "Offset mismatch for FJunoRoleMetaDataRow::Icon");
static_assert(offsetof(FJunoRoleMetaDataRow, Portrait) == 96, "Offset mismatch for FJunoRoleMetaDataRow::Portrait");
static_assert(offsetof(FJunoRoleMetaDataRow, CloseUpPortrait) == 128, "Offset mismatch for FJunoRoleMetaDataRow::CloseUpPortrait");
static_assert(offsetof(FJunoRoleMetaDataRow, PortraitBackground) == 160, "Offset mismatch for FJunoRoleMetaDataRow::PortraitBackground");
static_assert(offsetof(FJunoRoleMetaDataRow, BackgroundImage) == 192, "Offset mismatch for FJunoRoleMetaDataRow::BackgroundImage");
static_assert(offsetof(FJunoRoleMetaDataRow, BackgroundFX) == 224, "Offset mismatch for FJunoRoleMetaDataRow::BackgroundFX");
static_assert(offsetof(FJunoRoleMetaDataRow, ProgressBar) == 256, "Offset mismatch for FJunoRoleMetaDataRow::ProgressBar");
static_assert(offsetof(FJunoRoleMetaDataRow, GainSkillPointDisplayName) == 288, "Offset mismatch for FJunoRoleMetaDataRow::GainSkillPointDisplayName");
static_assert(offsetof(FJunoRoleMetaDataRow, GainSkillPointIcon) == 304, "Offset mismatch for FJunoRoleMetaDataRow::GainSkillPointIcon");
static_assert(offsetof(FJunoRoleMetaDataRow, GainXpDisplayName) == 336, "Offset mismatch for FJunoRoleMetaDataRow::GainXpDisplayName");
static_assert(offsetof(FJunoRoleMetaDataRow, GainXpIcon) == 352, "Offset mismatch for FJunoRoleMetaDataRow::GainXpIcon");
static_assert(offsetof(FJunoRoleMetaDataRow, RoleColor) == 384, "Offset mismatch for FJunoRoleMetaDataRow::RoleColor");

// /Script/JunoPlayerRoles.JunoRoleRewardsRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoRoleRewardsRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t RoleTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t RewardType; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::int32_t Quantity; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoRoleRewardsRow, RoleTag) == 8, "Offset mismatch for FJunoRoleRewardsRow::RoleTag");
static_assert(offsetof(FJunoRoleRewardsRow, RewardType) == 12, "Offset mismatch for FJunoRoleRewardsRow::RewardType");
static_assert(offsetof(FJunoRoleRewardsRow, Quantity) == 16, "Offset mismatch for FJunoRoleRewardsRow::Quantity");

// /Script/JunoPlayerRoles.JunoSkillAvailabilityReasons
// Kind: ScriptStruct; super: none
struct FJunoSkillAvailabilityReasons
{
public:
    std::uint8_t bAlreadyPurchased; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bHasEnoughSkillPoints (shared storage)
    // 0x0000 BoolProperty bIsAvailableForPurchase (shared storage)
    // 0x0000 BoolProperty bIsCorrectRole (shared storage)
    // 0x0000 BoolProperty bIsExclusiveGroupFree (shared storage)
    // 0x0000 BoolProperty bIsMissingRequiredSkill (shared storage)
    // 0x0000 BoolProperty bMetEscalationLevel (shared storage)
    // 0x0000 BoolProperty bMetLevelRequirement (shared storage)
};

static_assert(offsetof(FJunoSkillAvailabilityReasons, bAlreadyPurchased) == 0, "Offset mismatch for FJunoSkillAvailabilityReasons::bAlreadyPurchased");

// /Script/JunoPlayerRoles.JunoSkillDefinitionRow
// Kind: ScriptStruct; super: TableRowBase
struct FJunoSkillDefinitionRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SkillTag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t ability[0x20]; // 0x0010 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t RoleTag[0x4]; // 0x0030 (Size: 0x4, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    std::int32_t RequiredLevel; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int32_t SkillPoints; // 0x003C (Size: 0x4, Type: IntProperty)
    std::int32_t EscalationLevel; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::uint8_t ExclusiveSelectionTag[0x4]; // 0x0044 (Size: 0x4, Type: StructProperty)
    std::uint8_t RequiredSkill[0x8]; // 0x0048 (Size: 0x8, Type: StructProperty)
    std::uint8_t Name[0x10]; // 0x0050 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0060 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x0070 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Abilities[0x20]; // 0x0090 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> SkillUpgrades; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoSkillDefinitionRow, SkillTag) == 8, "Offset mismatch for FJunoSkillDefinitionRow::SkillTag");
static_assert(offsetof(FJunoSkillDefinitionRow, ability) == 16, "Offset mismatch for FJunoSkillDefinitionRow::ability");
static_assert(offsetof(FJunoSkillDefinitionRow, RoleTag) == 48, "Offset mismatch for FJunoSkillDefinitionRow::RoleTag");
static_assert(offsetof(FJunoSkillDefinitionRow, bEnabled) == 52, "Offset mismatch for FJunoSkillDefinitionRow::bEnabled");
static_assert(offsetof(FJunoSkillDefinitionRow, RequiredLevel) == 56, "Offset mismatch for FJunoSkillDefinitionRow::RequiredLevel");
static_assert(offsetof(FJunoSkillDefinitionRow, SkillPoints) == 60, "Offset mismatch for FJunoSkillDefinitionRow::SkillPoints");
static_assert(offsetof(FJunoSkillDefinitionRow, EscalationLevel) == 64, "Offset mismatch for FJunoSkillDefinitionRow::EscalationLevel");
static_assert(offsetof(FJunoSkillDefinitionRow, ExclusiveSelectionTag) == 68, "Offset mismatch for FJunoSkillDefinitionRow::ExclusiveSelectionTag");
static_assert(offsetof(FJunoSkillDefinitionRow, RequiredSkill) == 72, "Offset mismatch for FJunoSkillDefinitionRow::RequiredSkill");
static_assert(offsetof(FJunoSkillDefinitionRow, Name) == 80, "Offset mismatch for FJunoSkillDefinitionRow::Name");
static_assert(offsetof(FJunoSkillDefinitionRow, Description) == 96, "Offset mismatch for FJunoSkillDefinitionRow::Description");
static_assert(offsetof(FJunoSkillDefinitionRow, Icon) == 112, "Offset mismatch for FJunoSkillDefinitionRow::Icon");
static_assert(offsetof(FJunoSkillDefinitionRow, Abilities) == 144, "Offset mismatch for FJunoSkillDefinitionRow::Abilities");
static_assert(offsetof(FJunoSkillDefinitionRow, SkillUpgrades) == 176, "Offset mismatch for FJunoSkillDefinitionRow::SkillUpgrades");

// /Script/JunoPlayerRoles.JunoSkillPointsIngredient
// Kind: ScriptStruct; super: none
struct FJunoSkillPointsIngredient
{
public:
    std::uint8_t IngredientTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::int32_t IngredientAmount; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoSkillPointsIngredient, IngredientTag) == 0, "Offset mismatch for FJunoSkillPointsIngredient::IngredientTag");
static_assert(offsetof(FJunoSkillPointsIngredient, IngredientAmount) == 4, "Offset mismatch for FJunoSkillPointsIngredient::IngredientAmount");

// /Script/JunoPlayerRoles.JunoSkillPointsPurchaseRequest
// Kind: ScriptStruct; super: none
struct FJunoSkillPointsPurchaseRequest
{
public:
    FName RecipeName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FJunoSkillPointsPurchaseRequest, RecipeName) == 0, "Offset mismatch for FJunoSkillPointsPurchaseRequest::RecipeName");

// /Script/JunoPlayerRoles.JunoSkillPointsRecipe
// Kind: ScriptStruct; super: TableRowBase
struct FJunoSkillPointsRecipe
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Ingredients; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::int32_t SkillPointsOutput; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoSkillPointsRecipe, Ingredients) == 8, "Offset mismatch for FJunoSkillPointsRecipe::Ingredients");
static_assert(offsetof(FJunoSkillPointsRecipe, SkillPointsOutput) == 24, "Offset mismatch for FJunoSkillPointsRecipe::SkillPointsOutput");

// /Script/JunoPlayerRoles.JunoSkillPointsSaveData
// Kind: ScriptStruct; super: none
struct FJunoSkillPointsSaveData
{
public:
    std::int32_t UnspentPoints; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t InvestedPoints; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoSkillPointsSaveData, UnspentPoints) == 0, "Offset mismatch for FJunoSkillPointsSaveData::UnspentPoints");
static_assert(offsetof(FJunoSkillPointsSaveData, InvestedPoints) == 4, "Offset mismatch for FJunoSkillPointsSaveData::InvestedPoints");

// /Script/JunoPlayerRoles.JunoSkillPurchasedEvent
// Kind: ScriptStruct; super: none
struct FJunoSkillPurchasedEvent
{
public:
    void* player; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RoleTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t SkillTag[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::int32_t SpentSkillPoints; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t UnspentSkillPointsBefore; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t UnspentSkillPointsAfter; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoSkillPurchasedEvent, player) == 0, "Offset mismatch for FJunoSkillPurchasedEvent::player");
static_assert(offsetof(FJunoSkillPurchasedEvent, RoleTag) == 8, "Offset mismatch for FJunoSkillPurchasedEvent::RoleTag");
static_assert(offsetof(FJunoSkillPurchasedEvent, SkillTag) == 12, "Offset mismatch for FJunoSkillPurchasedEvent::SkillTag");
static_assert(offsetof(FJunoSkillPurchasedEvent, SpentSkillPoints) == 16, "Offset mismatch for FJunoSkillPurchasedEvent::SpentSkillPoints");
static_assert(offsetof(FJunoSkillPurchasedEvent, UnspentSkillPointsBefore) == 20, "Offset mismatch for FJunoSkillPurchasedEvent::UnspentSkillPointsBefore");
static_assert(offsetof(FJunoSkillPurchasedEvent, UnspentSkillPointsAfter) == 24, "Offset mismatch for FJunoSkillPurchasedEvent::UnspentSkillPointsAfter");

// /Script/JunoPlayerRoles.JunoSkillSaveData
// Kind: ScriptStruct; super: none
struct FJunoSkillSaveData
{
public:
    std::uint8_t SkillTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> SkillUpgrades; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FJunoSkillSaveData, SkillTag) == 0, "Offset mismatch for FJunoSkillSaveData::SkillTag");
static_assert(offsetof(FJunoSkillSaveData, SkillUpgrades) == 8, "Offset mismatch for FJunoSkillSaveData::SkillUpgrades");

// /Script/JunoPlayerRoles.JunoSkillUpgradeAvailabilityReasons
// Kind: ScriptStruct; super: none
struct FJunoSkillUpgradeAvailabilityReasons
{
public:
    std::uint8_t bAtMaxLevel; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bHasEnoughSkillPoints (shared storage)
    // 0x0000 BoolProperty bIsAvailableForPurchase (shared storage)
    // 0x0000 BoolProperty bIsCorrectRole (shared storage)
    // 0x0000 BoolProperty bIsMissingBaseSkill (shared storage)
};

static_assert(offsetof(FJunoSkillUpgradeAvailabilityReasons, bAtMaxLevel) == 0, "Offset mismatch for FJunoSkillUpgradeAvailabilityReasons::bAtMaxLevel");

// /Script/JunoPlayerRoles.JunoSkillUpgradeDefinition
// Kind: ScriptStruct; super: none
struct FJunoSkillUpgradeDefinition
{
public:
    std::uint8_t SkillUpgradeTag[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoSkillUpgradeDefinition, SkillUpgradeTag) == 0, "Offset mismatch for FJunoSkillUpgradeDefinition::SkillUpgradeTag");

// /Script/JunoPlayerRoles.JunoSkillUpgradePurchasedEvent
// Kind: ScriptStruct; super: none
struct FJunoSkillUpgradePurchasedEvent
{
public:
    void* player; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RoleTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t SkillTag[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::int32_t OldSkillLevel; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t NewSkillLevel; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t SpentSkillPoints; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t UnspentSkillPointsBefore; // 0x001C (Size: 0x4, Type: IntProperty)
    std::int32_t UnspentSkillPointsAfter; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoSkillUpgradePurchasedEvent, player) == 0, "Offset mismatch for FJunoSkillUpgradePurchasedEvent::player");
static_assert(offsetof(FJunoSkillUpgradePurchasedEvent, RoleTag) == 8, "Offset mismatch for FJunoSkillUpgradePurchasedEvent::RoleTag");
static_assert(offsetof(FJunoSkillUpgradePurchasedEvent, SkillTag) == 12, "Offset mismatch for FJunoSkillUpgradePurchasedEvent::SkillTag");
static_assert(offsetof(FJunoSkillUpgradePurchasedEvent, OldSkillLevel) == 16, "Offset mismatch for FJunoSkillUpgradePurchasedEvent::OldSkillLevel");
static_assert(offsetof(FJunoSkillUpgradePurchasedEvent, NewSkillLevel) == 20, "Offset mismatch for FJunoSkillUpgradePurchasedEvent::NewSkillLevel");
static_assert(offsetof(FJunoSkillUpgradePurchasedEvent, SpentSkillPoints) == 24, "Offset mismatch for FJunoSkillUpgradePurchasedEvent::SpentSkillPoints");
static_assert(offsetof(FJunoSkillUpgradePurchasedEvent, UnspentSkillPointsBefore) == 28, "Offset mismatch for FJunoSkillUpgradePurchasedEvent::UnspentSkillPointsBefore");
static_assert(offsetof(FJunoSkillUpgradePurchasedEvent, UnspentSkillPointsAfter) == 32, "Offset mismatch for FJunoSkillUpgradePurchasedEvent::UnspentSkillPointsAfter");

// /Script/JunoPlayerRoles.JunoSkillsChangedEvent
// Kind: ScriptStruct; super: none
struct FJunoSkillsChangedEvent
{
public:
    void* player; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RoleTag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Skills[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> SkillDetails; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FJunoSkillsChangedEvent, player) == 0, "Offset mismatch for FJunoSkillsChangedEvent::player");
static_assert(offsetof(FJunoSkillsChangedEvent, RoleTag) == 8, "Offset mismatch for FJunoSkillsChangedEvent::RoleTag");
static_assert(offsetof(FJunoSkillsChangedEvent, Skills) == 16, "Offset mismatch for FJunoSkillsChangedEvent::Skills");
static_assert(offsetof(FJunoSkillsChangedEvent, SkillDetails) == 48, "Offset mismatch for FJunoSkillsChangedEvent::SkillDetails");

// /Script/JunoPlayerRoles.JunoVerbFilter_RoleAbilityTriggered
// Kind: ScriptStruct; super: ObjectiveFilter
struct FJunoVerbFilter_RoleAbilityTriggered
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t RoleAbilityType; // 0x00A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A1
    std::uint8_t CurrentRole[0x48]; // 0x00A8 (Size: 0x48, Type: StructProperty)
    std::uint8_t TriggeredAbilityTags[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoVerbFilter_RoleAbilityTriggered, RoleAbilityType) == 160, "Offset mismatch for FJunoVerbFilter_RoleAbilityTriggered::RoleAbilityType");
static_assert(offsetof(FJunoVerbFilter_RoleAbilityTriggered, CurrentRole) == 168, "Offset mismatch for FJunoVerbFilter_RoleAbilityTriggered::CurrentRole");
static_assert(offsetof(FJunoVerbFilter_RoleAbilityTriggered, TriggeredAbilityTags) == 240, "Offset mismatch for FJunoVerbFilter_RoleAbilityTriggered::TriggeredAbilityTags");

// /Script/JunoPlayerRoles.JunoVerbFilter_RoleChanged
// Kind: ScriptStruct; super: ObjectiveFilter
struct FJunoVerbFilter_RoleChanged
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t NewRole[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoVerbFilter_RoleChanged, NewRole) == 160, "Offset mismatch for FJunoVerbFilter_RoleChanged::NewRole");

// /Script/JunoPlayerRoles.JunoVerbFilter_RoleProgressChanged
// Kind: ScriptStruct; super: ObjectiveFilter
struct FJunoVerbFilter_RoleProgressChanged
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t IncrementType; // 0x00A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A1
    std::uint8_t CurrentRole[0x48]; // 0x00A8 (Size: 0x48, Type: StructProperty)
    std::uint8_t bUseNewLevel; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00F1
    std::uint8_t NewLevel[0x10]; // 0x00F4 (Size: 0x10, Type: StructProperty)
    std::uint8_t bUseGainedLevels; // 0x0104 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0105
    std::uint8_t GainedLevels[0x10]; // 0x0108 (Size: 0x10, Type: StructProperty)
    std::uint8_t bUseGainedXp; // 0x0118 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0119
    std::uint8_t GainedXP[0x10]; // 0x011C (Size: 0x10, Type: StructProperty)
    std::uint8_t bUseTotalSkillPoints; // 0x012C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x012D
    std::uint8_t TotalSkillPoints[0x10]; // 0x0130 (Size: 0x10, Type: StructProperty)
    std::uint8_t bUseGainedSkillPoints; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x3]; // 0x0141
    std::uint8_t GainedSkillPoints[0x1]; // 0x0144 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoVerbFilter_RoleProgressChanged, IncrementType) == 160, "Offset mismatch for FJunoVerbFilter_RoleProgressChanged::IncrementType");
static_assert(offsetof(FJunoVerbFilter_RoleProgressChanged, CurrentRole) == 168, "Offset mismatch for FJunoVerbFilter_RoleProgressChanged::CurrentRole");
static_assert(offsetof(FJunoVerbFilter_RoleProgressChanged, bUseNewLevel) == 240, "Offset mismatch for FJunoVerbFilter_RoleProgressChanged::bUseNewLevel");
static_assert(offsetof(FJunoVerbFilter_RoleProgressChanged, NewLevel) == 244, "Offset mismatch for FJunoVerbFilter_RoleProgressChanged::NewLevel");
static_assert(offsetof(FJunoVerbFilter_RoleProgressChanged, bUseGainedLevels) == 260, "Offset mismatch for FJunoVerbFilter_RoleProgressChanged::bUseGainedLevels");
static_assert(offsetof(FJunoVerbFilter_RoleProgressChanged, GainedLevels) == 264, "Offset mismatch for FJunoVerbFilter_RoleProgressChanged::GainedLevels");
static_assert(offsetof(FJunoVerbFilter_RoleProgressChanged, bUseGainedXp) == 280, "Offset mismatch for FJunoVerbFilter_RoleProgressChanged::bUseGainedXp");
static_assert(offsetof(FJunoVerbFilter_RoleProgressChanged, GainedXP) == 284, "Offset mismatch for FJunoVerbFilter_RoleProgressChanged::GainedXP");
static_assert(offsetof(FJunoVerbFilter_RoleProgressChanged, bUseTotalSkillPoints) == 300, "Offset mismatch for FJunoVerbFilter_RoleProgressChanged::bUseTotalSkillPoints");
static_assert(offsetof(FJunoVerbFilter_RoleProgressChanged, TotalSkillPoints) == 304, "Offset mismatch for FJunoVerbFilter_RoleProgressChanged::TotalSkillPoints");
static_assert(offsetof(FJunoVerbFilter_RoleProgressChanged, bUseGainedSkillPoints) == 320, "Offset mismatch for FJunoVerbFilter_RoleProgressChanged::bUseGainedSkillPoints");
static_assert(offsetof(FJunoVerbFilter_RoleProgressChanged, GainedSkillPoints) == 324, "Offset mismatch for FJunoVerbFilter_RoleProgressChanged::GainedSkillPoints");

// /Script/JunoPlayerRoles.JunoVerbFilter_RoleSkillChanged
// Kind: ScriptStruct; super: ObjectiveFilter
struct FJunoVerbFilter_RoleSkillChanged
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t IncrementType; // 0x00A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A1
    std::uint8_t CurrentRole[0x48]; // 0x00A8 (Size: 0x48, Type: StructProperty)
    std::uint8_t ModifiedSkill[0x48]; // 0x00F0 (Size: 0x48, Type: StructProperty)
    std::uint8_t bUseSkillPointDelta; // 0x0138 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0139
    std::uint8_t SkillPointDelta[0x10]; // 0x013C (Size: 0x10, Type: StructProperty)
    std::uint8_t bUseTotalSkillPointsSpentRequirement; // 0x014C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x014D
    std::uint8_t TotalSkillPointsSpent[0x1]; // 0x0150 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoVerbFilter_RoleSkillChanged, IncrementType) == 160, "Offset mismatch for FJunoVerbFilter_RoleSkillChanged::IncrementType");
static_assert(offsetof(FJunoVerbFilter_RoleSkillChanged, CurrentRole) == 168, "Offset mismatch for FJunoVerbFilter_RoleSkillChanged::CurrentRole");
static_assert(offsetof(FJunoVerbFilter_RoleSkillChanged, ModifiedSkill) == 240, "Offset mismatch for FJunoVerbFilter_RoleSkillChanged::ModifiedSkill");
static_assert(offsetof(FJunoVerbFilter_RoleSkillChanged, bUseSkillPointDelta) == 312, "Offset mismatch for FJunoVerbFilter_RoleSkillChanged::bUseSkillPointDelta");
static_assert(offsetof(FJunoVerbFilter_RoleSkillChanged, SkillPointDelta) == 316, "Offset mismatch for FJunoVerbFilter_RoleSkillChanged::SkillPointDelta");
static_assert(offsetof(FJunoVerbFilter_RoleSkillChanged, bUseTotalSkillPointsSpentRequirement) == 332, "Offset mismatch for FJunoVerbFilter_RoleSkillChanged::bUseTotalSkillPointsSpentRequirement");
static_assert(offsetof(FJunoVerbFilter_RoleSkillChanged, TotalSkillPointsSpent) == 336, "Offset mismatch for FJunoVerbFilter_RoleSkillChanged::TotalSkillPointsSpent");

// /Script/JunoPlayerRoles.JunoVerbMessage_RoleAbilityTriggered
// Kind: ScriptStruct; super: VerbMessage
struct FJunoVerbMessage_RoleAbilityTriggered
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t CurrentRole[0x38]; // 0x0078 (Size: 0x38, Type: StructProperty)
    std::uint8_t TriggeredAbilityTags[0x38]; // 0x00B0 (Size: 0x38, Type: StructProperty)
    std::uint8_t RoleAbilityType; // 0x00E8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoVerbMessage_RoleAbilityTriggered, CurrentRole) == 120, "Offset mismatch for FJunoVerbMessage_RoleAbilityTriggered::CurrentRole");
static_assert(offsetof(FJunoVerbMessage_RoleAbilityTriggered, TriggeredAbilityTags) == 176, "Offset mismatch for FJunoVerbMessage_RoleAbilityTriggered::TriggeredAbilityTags");
static_assert(offsetof(FJunoVerbMessage_RoleAbilityTriggered, RoleAbilityType) == 232, "Offset mismatch for FJunoVerbMessage_RoleAbilityTriggered::RoleAbilityType");

// /Script/JunoPlayerRoles.JunoVerbMessage_RoleChanged
// Kind: ScriptStruct; super: VerbMessage
struct FJunoVerbMessage_RoleChanged
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t NewRole[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FJunoVerbMessage_RoleChanged, NewRole) == 120, "Offset mismatch for FJunoVerbMessage_RoleChanged::NewRole");

// /Script/JunoPlayerRoles.JunoVerbMessage_RoleProgressChanged
// Kind: ScriptStruct; super: VerbMessage
struct FJunoVerbMessage_RoleProgressChanged
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t CurrentRole[0x38]; // 0x0078 (Size: 0x38, Type: StructProperty)
    std::int32_t NewRoleLevel; // 0x00B0 (Size: 0x4, Type: IntProperty)
    std::int32_t GainedLevels; // 0x00B4 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalSkillPoints; // 0x00B8 (Size: 0x4, Type: IntProperty)
    std::int32_t GainedSkillPoints; // 0x00BC (Size: 0x4, Type: IntProperty)
    std::int32_t GainedXP; // 0x00C0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoVerbMessage_RoleProgressChanged, CurrentRole) == 120, "Offset mismatch for FJunoVerbMessage_RoleProgressChanged::CurrentRole");
static_assert(offsetof(FJunoVerbMessage_RoleProgressChanged, NewRoleLevel) == 176, "Offset mismatch for FJunoVerbMessage_RoleProgressChanged::NewRoleLevel");
static_assert(offsetof(FJunoVerbMessage_RoleProgressChanged, GainedLevels) == 180, "Offset mismatch for FJunoVerbMessage_RoleProgressChanged::GainedLevels");
static_assert(offsetof(FJunoVerbMessage_RoleProgressChanged, TotalSkillPoints) == 184, "Offset mismatch for FJunoVerbMessage_RoleProgressChanged::TotalSkillPoints");
static_assert(offsetof(FJunoVerbMessage_RoleProgressChanged, GainedSkillPoints) == 188, "Offset mismatch for FJunoVerbMessage_RoleProgressChanged::GainedSkillPoints");
static_assert(offsetof(FJunoVerbMessage_RoleProgressChanged, GainedXP) == 192, "Offset mismatch for FJunoVerbMessage_RoleProgressChanged::GainedXP");

// /Script/JunoPlayerRoles.JunoVerbMessage_RoleSkillChanged
// Kind: ScriptStruct; super: VerbMessage
struct FJunoVerbMessage_RoleSkillChanged
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t CurrentRole[0x38]; // 0x0078 (Size: 0x38, Type: StructProperty)
    std::uint8_t ModifiedSkill[0x38]; // 0x00B0 (Size: 0x38, Type: StructProperty)
    std::int32_t SkillPointDelta; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalSkillPointsSpent; // 0x00EC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FJunoVerbMessage_RoleSkillChanged, CurrentRole) == 120, "Offset mismatch for FJunoVerbMessage_RoleSkillChanged::CurrentRole");
static_assert(offsetof(FJunoVerbMessage_RoleSkillChanged, ModifiedSkill) == 176, "Offset mismatch for FJunoVerbMessage_RoleSkillChanged::ModifiedSkill");
static_assert(offsetof(FJunoVerbMessage_RoleSkillChanged, SkillPointDelta) == 232, "Offset mismatch for FJunoVerbMessage_RoleSkillChanged::SkillPointDelta");
static_assert(offsetof(FJunoVerbMessage_RoleSkillChanged, TotalSkillPointsSpent) == 236, "Offset mismatch for FJunoVerbMessage_RoleSkillChanged::TotalSkillPointsSpent");

// /Script/JunoPlayerRoles.JunoEscalationsAILootModifier
// Kind: Class; super: FortGameStateComponent
class UJunoEscalationsAILootModifier
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJunoEscalationsAILootModifier, PrimaryComponentTick) == 56, "Offset mismatch for UJunoEscalationsAILootModifier::PrimaryComponentTick");
static_assert(offsetof(UJunoEscalationsAILootModifier, ComponentTags) == 104, "Offset mismatch for UJunoEscalationsAILootModifier::ComponentTags");
static_assert(offsetof(UJunoEscalationsAILootModifier, AssetUserData) == 120, "Offset mismatch for UJunoEscalationsAILootModifier::AssetUserData");
static_assert(offsetof(UJunoEscalationsAILootModifier, UCSSerializationIndex) == 144, "Offset mismatch for UJunoEscalationsAILootModifier::UCSSerializationIndex");
static_assert(offsetof(UJunoEscalationsAILootModifier, bNetAddressable) == 152, "Offset mismatch for UJunoEscalationsAILootModifier::bNetAddressable");
static_assert(offsetof(UJunoEscalationsAILootModifier, bAutoActivate) == 154, "Offset mismatch for UJunoEscalationsAILootModifier::bAutoActivate");
static_assert(offsetof(UJunoEscalationsAILootModifier, bIsEditorOnly) == 155, "Offset mismatch for UJunoEscalationsAILootModifier::bIsEditorOnly");
static_assert(offsetof(UJunoEscalationsAILootModifier, CreationMethod) == 185, "Offset mismatch for UJunoEscalationsAILootModifier::CreationMethod");
static_assert(offsetof(UJunoEscalationsAILootModifier, OnComponentActivated) == 186, "Offset mismatch for UJunoEscalationsAILootModifier::OnComponentActivated");
static_assert(offsetof(UJunoEscalationsAILootModifier, OnComponentDeactivated) == 187, "Offset mismatch for UJunoEscalationsAILootModifier::OnComponentDeactivated");

// /Script/JunoPlayerRoles.JunoEscalationsCheatManager
// Kind: Class; super: ChildCheatManager
class UJunoEscalationsCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPlayerRoles.JunoEscalationsControllerComponent
// Kind: Class; super: FortControllerComponent
class UJunoEscalationsControllerComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJunoEscalationsControllerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UJunoEscalationsControllerComponent::PrimaryComponentTick");
static_assert(offsetof(UJunoEscalationsControllerComponent, ComponentTags) == 104, "Offset mismatch for UJunoEscalationsControllerComponent::ComponentTags");
static_assert(offsetof(UJunoEscalationsControllerComponent, AssetUserData) == 120, "Offset mismatch for UJunoEscalationsControllerComponent::AssetUserData");
static_assert(offsetof(UJunoEscalationsControllerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UJunoEscalationsControllerComponent::UCSSerializationIndex");
static_assert(offsetof(UJunoEscalationsControllerComponent, bNetAddressable) == 152, "Offset mismatch for UJunoEscalationsControllerComponent::bNetAddressable");
static_assert(offsetof(UJunoEscalationsControllerComponent, bAutoActivate) == 154, "Offset mismatch for UJunoEscalationsControllerComponent::bAutoActivate");
static_assert(offsetof(UJunoEscalationsControllerComponent, bIsEditorOnly) == 155, "Offset mismatch for UJunoEscalationsControllerComponent::bIsEditorOnly");
static_assert(offsetof(UJunoEscalationsControllerComponent, CreationMethod) == 185, "Offset mismatch for UJunoEscalationsControllerComponent::CreationMethod");
static_assert(offsetof(UJunoEscalationsControllerComponent, OnComponentActivated) == 186, "Offset mismatch for UJunoEscalationsControllerComponent::OnComponentActivated");
static_assert(offsetof(UJunoEscalationsControllerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UJunoEscalationsControllerComponent::OnComponentDeactivated");

// /Script/JunoPlayerRoles.JunoEscalationsLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoEscalationsLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPlayerRoles.JunoGameStateComponent_Escalations
// Kind: Class; super: FortGameStateComponent
class UJunoGameStateComponent_Escalations
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t EscalationTag[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoGameStateComponent_Escalations, EscalationTag) == 192, "Offset mismatch for UJunoGameStateComponent_Escalations::EscalationTag");

// /Script/JunoPlayerRoles.JunoGameStateComponent_Levels
// Kind: Class; super: FortGameStateComponent
class UJunoGameStateComponent_Levels
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJunoGameStateComponent_Levels, PrimaryComponentTick) == 56, "Offset mismatch for UJunoGameStateComponent_Levels::PrimaryComponentTick");
static_assert(offsetof(UJunoGameStateComponent_Levels, ComponentTags) == 104, "Offset mismatch for UJunoGameStateComponent_Levels::ComponentTags");
static_assert(offsetof(UJunoGameStateComponent_Levels, AssetUserData) == 120, "Offset mismatch for UJunoGameStateComponent_Levels::AssetUserData");
static_assert(offsetof(UJunoGameStateComponent_Levels, UCSSerializationIndex) == 144, "Offset mismatch for UJunoGameStateComponent_Levels::UCSSerializationIndex");
static_assert(offsetof(UJunoGameStateComponent_Levels, bNetAddressable) == 152, "Offset mismatch for UJunoGameStateComponent_Levels::bNetAddressable");
static_assert(offsetof(UJunoGameStateComponent_Levels, bAutoActivate) == 154, "Offset mismatch for UJunoGameStateComponent_Levels::bAutoActivate");
static_assert(offsetof(UJunoGameStateComponent_Levels, bIsEditorOnly) == 155, "Offset mismatch for UJunoGameStateComponent_Levels::bIsEditorOnly");
static_assert(offsetof(UJunoGameStateComponent_Levels, CreationMethod) == 185, "Offset mismatch for UJunoGameStateComponent_Levels::CreationMethod");
static_assert(offsetof(UJunoGameStateComponent_Levels, OnComponentActivated) == 186, "Offset mismatch for UJunoGameStateComponent_Levels::OnComponentActivated");
static_assert(offsetof(UJunoGameStateComponent_Levels, OnComponentDeactivated) == 187, "Offset mismatch for UJunoGameStateComponent_Levels::OnComponentDeactivated");

// /Script/JunoPlayerRoles.JunoGameStateComponent_Points
// Kind: Class; super: FortGameStateComponent
class UJunoGameStateComponent_Points
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJunoGameStateComponent_Points, PrimaryComponentTick) == 56, "Offset mismatch for UJunoGameStateComponent_Points::PrimaryComponentTick");
static_assert(offsetof(UJunoGameStateComponent_Points, ComponentTags) == 104, "Offset mismatch for UJunoGameStateComponent_Points::ComponentTags");
static_assert(offsetof(UJunoGameStateComponent_Points, AssetUserData) == 120, "Offset mismatch for UJunoGameStateComponent_Points::AssetUserData");
static_assert(offsetof(UJunoGameStateComponent_Points, UCSSerializationIndex) == 144, "Offset mismatch for UJunoGameStateComponent_Points::UCSSerializationIndex");
static_assert(offsetof(UJunoGameStateComponent_Points, bNetAddressable) == 152, "Offset mismatch for UJunoGameStateComponent_Points::bNetAddressable");
static_assert(offsetof(UJunoGameStateComponent_Points, bAutoActivate) == 154, "Offset mismatch for UJunoGameStateComponent_Points::bAutoActivate");
static_assert(offsetof(UJunoGameStateComponent_Points, bIsEditorOnly) == 155, "Offset mismatch for UJunoGameStateComponent_Points::bIsEditorOnly");
static_assert(offsetof(UJunoGameStateComponent_Points, CreationMethod) == 185, "Offset mismatch for UJunoGameStateComponent_Points::CreationMethod");
static_assert(offsetof(UJunoGameStateComponent_Points, OnComponentActivated) == 186, "Offset mismatch for UJunoGameStateComponent_Points::OnComponentActivated");
static_assert(offsetof(UJunoGameStateComponent_Points, OnComponentDeactivated) == 187, "Offset mismatch for UJunoGameStateComponent_Points::OnComponentDeactivated");

// /Script/JunoPlayerRoles.JunoGameStateComponent_Roles
// Kind: Class; super: FortGameStateComponent
class UJunoGameStateComponent_Roles
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJunoGameStateComponent_Roles, PrimaryComponentTick) == 56, "Offset mismatch for UJunoGameStateComponent_Roles::PrimaryComponentTick");
static_assert(offsetof(UJunoGameStateComponent_Roles, ComponentTags) == 104, "Offset mismatch for UJunoGameStateComponent_Roles::ComponentTags");
static_assert(offsetof(UJunoGameStateComponent_Roles, AssetUserData) == 120, "Offset mismatch for UJunoGameStateComponent_Roles::AssetUserData");
static_assert(offsetof(UJunoGameStateComponent_Roles, UCSSerializationIndex) == 144, "Offset mismatch for UJunoGameStateComponent_Roles::UCSSerializationIndex");
static_assert(offsetof(UJunoGameStateComponent_Roles, bNetAddressable) == 152, "Offset mismatch for UJunoGameStateComponent_Roles::bNetAddressable");
static_assert(offsetof(UJunoGameStateComponent_Roles, bAutoActivate) == 154, "Offset mismatch for UJunoGameStateComponent_Roles::bAutoActivate");
static_assert(offsetof(UJunoGameStateComponent_Roles, bIsEditorOnly) == 155, "Offset mismatch for UJunoGameStateComponent_Roles::bIsEditorOnly");
static_assert(offsetof(UJunoGameStateComponent_Roles, CreationMethod) == 185, "Offset mismatch for UJunoGameStateComponent_Roles::CreationMethod");
static_assert(offsetof(UJunoGameStateComponent_Roles, OnComponentActivated) == 186, "Offset mismatch for UJunoGameStateComponent_Roles::OnComponentActivated");
static_assert(offsetof(UJunoGameStateComponent_Roles, OnComponentDeactivated) == 187, "Offset mismatch for UJunoGameStateComponent_Roles::OnComponentDeactivated");

// /Script/JunoPlayerRoles.JunoGameStateComponent_RolesUIData
// Kind: Class; super: JunoGameStateComponent_DataBase
class UJunoGameStateComponent_RolesUIData
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t RoleUIDataRegistryType[0x4]; // 0x00D8 (Size: 0x4, Type: StructProperty)
    std::uint8_t AbilityUIDataRegistryType[0x4]; // 0x00DC (Size: 0x4, Type: StructProperty)
    std::uint8_t RoleCategoryUIDataRegistryType[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoGameStateComponent_RolesUIData, RoleUIDataRegistryType) == 216, "Offset mismatch for UJunoGameStateComponent_RolesUIData::RoleUIDataRegistryType");
static_assert(offsetof(UJunoGameStateComponent_RolesUIData, AbilityUIDataRegistryType) == 220, "Offset mismatch for UJunoGameStateComponent_RolesUIData::AbilityUIDataRegistryType");
static_assert(offsetof(UJunoGameStateComponent_RolesUIData, RoleCategoryUIDataRegistryType) == 224, "Offset mismatch for UJunoGameStateComponent_RolesUIData::RoleCategoryUIDataRegistryType");

// /Script/JunoPlayerRoles.JunoGameStateComponent_Skills
// Kind: Class; super: FortGameStateComponent
class UJunoGameStateComponent_Skills
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJunoGameStateComponent_Skills, PrimaryComponentTick) == 56, "Offset mismatch for UJunoGameStateComponent_Skills::PrimaryComponentTick");
static_assert(offsetof(UJunoGameStateComponent_Skills, ComponentTags) == 104, "Offset mismatch for UJunoGameStateComponent_Skills::ComponentTags");
static_assert(offsetof(UJunoGameStateComponent_Skills, AssetUserData) == 120, "Offset mismatch for UJunoGameStateComponent_Skills::AssetUserData");
static_assert(offsetof(UJunoGameStateComponent_Skills, UCSSerializationIndex) == 144, "Offset mismatch for UJunoGameStateComponent_Skills::UCSSerializationIndex");
static_assert(offsetof(UJunoGameStateComponent_Skills, bNetAddressable) == 152, "Offset mismatch for UJunoGameStateComponent_Skills::bNetAddressable");
static_assert(offsetof(UJunoGameStateComponent_Skills, bAutoActivate) == 154, "Offset mismatch for UJunoGameStateComponent_Skills::bAutoActivate");
static_assert(offsetof(UJunoGameStateComponent_Skills, bIsEditorOnly) == 155, "Offset mismatch for UJunoGameStateComponent_Skills::bIsEditorOnly");
static_assert(offsetof(UJunoGameStateComponent_Skills, CreationMethod) == 185, "Offset mismatch for UJunoGameStateComponent_Skills::CreationMethod");
static_assert(offsetof(UJunoGameStateComponent_Skills, OnComponentActivated) == 186, "Offset mismatch for UJunoGameStateComponent_Skills::OnComponentActivated");
static_assert(offsetof(UJunoGameStateComponent_Skills, OnComponentDeactivated) == 187, "Offset mismatch for UJunoGameStateComponent_Skills::OnComponentDeactivated");

// /Script/JunoPlayerRoles.JunoLevelsAnalytics
// Kind: Class; super: Object
class UJunoLevelsAnalytics
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPlayerRoles.JunoLevelsCheatManager
// Kind: Class; super: ChildCheatManager
class UJunoLevelsCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPlayerRoles.JunoLevelsControllerComponent
// Kind: Class; super: FortControllerComponent
class UJunoLevelsControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnPlayerLevelChangedEvent; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerXPChangedEvent; // 0x00D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerUnspentSkillPointsChangedEvent; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerGainedXPLevelsSkillPointsEvent; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerLeveledUpEvent; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t JunoLevelsSettings[0x10]; // 0x0118 (Size: 0x10, Type: StructProperty)
    TArray<void*> AllRoleLevels; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0138
    void* WaitForPlayerPersistence; // 0x0150 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoLevelsControllerComponent, OnPlayerLevelChangedEvent) == 200, "Offset mismatch for UJunoLevelsControllerComponent::OnPlayerLevelChangedEvent");
static_assert(offsetof(UJunoLevelsControllerComponent, OnPlayerXPChangedEvent) == 216, "Offset mismatch for UJunoLevelsControllerComponent::OnPlayerXPChangedEvent");
static_assert(offsetof(UJunoLevelsControllerComponent, OnPlayerUnspentSkillPointsChangedEvent) == 232, "Offset mismatch for UJunoLevelsControllerComponent::OnPlayerUnspentSkillPointsChangedEvent");
static_assert(offsetof(UJunoLevelsControllerComponent, OnPlayerGainedXPLevelsSkillPointsEvent) == 248, "Offset mismatch for UJunoLevelsControllerComponent::OnPlayerGainedXPLevelsSkillPointsEvent");
static_assert(offsetof(UJunoLevelsControllerComponent, OnPlayerLeveledUpEvent) == 264, "Offset mismatch for UJunoLevelsControllerComponent::OnPlayerLeveledUpEvent");
static_assert(offsetof(UJunoLevelsControllerComponent, JunoLevelsSettings) == 280, "Offset mismatch for UJunoLevelsControllerComponent::JunoLevelsSettings");
static_assert(offsetof(UJunoLevelsControllerComponent, AllRoleLevels) == 296, "Offset mismatch for UJunoLevelsControllerComponent::AllRoleLevels");
static_assert(offsetof(UJunoLevelsControllerComponent, WaitForPlayerPersistence) == 336, "Offset mismatch for UJunoLevelsControllerComponent::WaitForPlayerPersistence");

// /Script/JunoPlayerRoles.JunoLevelsLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoLevelsLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPlayerRoles.JunoPlayerRolesPersistenceComponent
// Kind: Class; super: FortPlayspaceComponent
class UJunoPlayerRolesPersistenceComponent
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    std::uint8_t bAddWorldPersistenceFeature; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoPlayerRolesPersistenceComponent, bAddWorldPersistenceFeature) == 280, "Offset mismatch for UJunoPlayerRolesPersistenceComponent::bAddWorldPersistenceFeature");

// /Script/JunoPlayerRoles.JunoPlayerRolesPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class UJunoPlayerRolesPersistenceFeatureModule
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> Containers; // 0x0048 (Size: 0x10, Type: MapProperty)
    void* ServiceData; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    FString PersistentName; // 0x0060 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    void* DeinitProcess; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    FString Description; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UJunoPlayerRolesPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for UJunoPlayerRolesPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(UJunoPlayerRolesPersistenceFeatureModule, Containers) == 72, "Offset mismatch for UJunoPlayerRolesPersistenceFeatureModule::Containers");
static_assert(offsetof(UJunoPlayerRolesPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for UJunoPlayerRolesPersistenceFeatureModule::ServiceData");
static_assert(offsetof(UJunoPlayerRolesPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for UJunoPlayerRolesPersistenceFeatureModule::PersistentName");
static_assert(offsetof(UJunoPlayerRolesPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for UJunoPlayerRolesPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoPlayerRolesPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for UJunoPlayerRolesPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoPlayerRolesPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for UJunoPlayerRolesPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(UJunoPlayerRolesPersistenceFeatureModule, Description) == 136, "Offset mismatch for UJunoPlayerRolesPersistenceFeatureModule::Description");

// /Script/JunoPlayerRoles.JunoPlayerRolesWorldPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class UJunoPlayerRolesWorldPersistenceFeatureModule
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> Containers; // 0x0048 (Size: 0x10, Type: MapProperty)
    void* ServiceData; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    FString PersistentName; // 0x0060 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    void* DeinitProcess; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    FString Description; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UJunoPlayerRolesWorldPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for UJunoPlayerRolesWorldPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(UJunoPlayerRolesWorldPersistenceFeatureModule, Containers) == 72, "Offset mismatch for UJunoPlayerRolesWorldPersistenceFeatureModule::Containers");
static_assert(offsetof(UJunoPlayerRolesWorldPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for UJunoPlayerRolesWorldPersistenceFeatureModule::ServiceData");
static_assert(offsetof(UJunoPlayerRolesWorldPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for UJunoPlayerRolesWorldPersistenceFeatureModule::PersistentName");
static_assert(offsetof(UJunoPlayerRolesWorldPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for UJunoPlayerRolesWorldPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoPlayerRolesWorldPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for UJunoPlayerRolesWorldPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoPlayerRolesWorldPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for UJunoPlayerRolesWorldPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(UJunoPlayerRolesWorldPersistenceFeatureModule, Description) == 136, "Offset mismatch for UJunoPlayerRolesWorldPersistenceFeatureModule::Description");

// /Script/JunoPlayerRoles.JunoPointsCheatManager
// Kind: Class; super: ChildCheatManager
class UJunoPointsCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPlayerRoles.JunoPointsControllerComponent
// Kind: Class; super: FortControllerComponent
class UJunoPointsControllerComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UJunoPointsControllerComponent, PrimaryComponentTick) == 56, "Offset mismatch for UJunoPointsControllerComponent::PrimaryComponentTick");
static_assert(offsetof(UJunoPointsControllerComponent, ComponentTags) == 104, "Offset mismatch for UJunoPointsControllerComponent::ComponentTags");
static_assert(offsetof(UJunoPointsControllerComponent, AssetUserData) == 120, "Offset mismatch for UJunoPointsControllerComponent::AssetUserData");
static_assert(offsetof(UJunoPointsControllerComponent, UCSSerializationIndex) == 144, "Offset mismatch for UJunoPointsControllerComponent::UCSSerializationIndex");
static_assert(offsetof(UJunoPointsControllerComponent, bNetAddressable) == 152, "Offset mismatch for UJunoPointsControllerComponent::bNetAddressable");
static_assert(offsetof(UJunoPointsControllerComponent, bAutoActivate) == 154, "Offset mismatch for UJunoPointsControllerComponent::bAutoActivate");
static_assert(offsetof(UJunoPointsControllerComponent, bIsEditorOnly) == 155, "Offset mismatch for UJunoPointsControllerComponent::bIsEditorOnly");
static_assert(offsetof(UJunoPointsControllerComponent, CreationMethod) == 185, "Offset mismatch for UJunoPointsControllerComponent::CreationMethod");
static_assert(offsetof(UJunoPointsControllerComponent, OnComponentActivated) == 186, "Offset mismatch for UJunoPointsControllerComponent::OnComponentActivated");
static_assert(offsetof(UJunoPointsControllerComponent, OnComponentDeactivated) == 187, "Offset mismatch for UJunoPointsControllerComponent::OnComponentDeactivated");

// /Script/JunoPlayerRoles.JunoPointsLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoPointsLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPlayerRoles.JunoPointsPersistenceComponent
// Kind: Class; super: FortPlayspaceComponent
class UJunoPointsPersistenceComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnMeshNetworkReady_BP; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventBurst_BP; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventStart_BP; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventChange_BP; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMeshNetworkEventEnd_BP; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bSubscribeToMeshNetwork; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UJunoPointsPersistenceComponent, OnMeshNetworkReady_BP) == 192, "Offset mismatch for UJunoPointsPersistenceComponent::OnMeshNetworkReady_BP");
static_assert(offsetof(UJunoPointsPersistenceComponent, OnMeshNetworkEventBurst_BP) == 208, "Offset mismatch for UJunoPointsPersistenceComponent::OnMeshNetworkEventBurst_BP");
static_assert(offsetof(UJunoPointsPersistenceComponent, OnMeshNetworkEventStart_BP) == 224, "Offset mismatch for UJunoPointsPersistenceComponent::OnMeshNetworkEventStart_BP");
static_assert(offsetof(UJunoPointsPersistenceComponent, OnMeshNetworkEventChange_BP) == 240, "Offset mismatch for UJunoPointsPersistenceComponent::OnMeshNetworkEventChange_BP");
static_assert(offsetof(UJunoPointsPersistenceComponent, OnMeshNetworkEventEnd_BP) == 256, "Offset mismatch for UJunoPointsPersistenceComponent::OnMeshNetworkEventEnd_BP");
static_assert(offsetof(UJunoPointsPersistenceComponent, bSubscribeToMeshNetwork) == 272, "Offset mismatch for UJunoPointsPersistenceComponent::bSubscribeToMeshNetwork");

// /Script/JunoPlayerRoles.JunoPointsStateComponent
// Kind: Class; super: FortPlayerStateComponent
class UJunoPointsStateComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnJunoPlayerPointsBalanceChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t PointsBalance[0x8]; // 0x00D0 (Size: 0x8, Type: StructProperty)
    void* WaitForPlayerPersistence; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoPointsStateComponent, OnJunoPlayerPointsBalanceChanged) == 192, "Offset mismatch for UJunoPointsStateComponent::OnJunoPlayerPointsBalanceChanged");
static_assert(offsetof(UJunoPointsStateComponent, PointsBalance) == 208, "Offset mismatch for UJunoPointsStateComponent::PointsBalance");
static_assert(offsetof(UJunoPointsStateComponent, WaitForPlayerPersistence) == 216, "Offset mismatch for UJunoPointsStateComponent::WaitForPlayerPersistence");

// /Script/JunoPlayerRoles.JunoPointsWorldPersistenceFeatureModule
// Kind: Class; super: PersistenceFrameworkModule
class UJunoPointsWorldPersistenceFeatureModule
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayTagContainer[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> Containers; // 0x0048 (Size: 0x10, Type: MapProperty)
    void* ServiceData; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    FString PersistentName; // 0x0060 (Size: 0x10, Type: StrProperty)
    void* MakeReadyForPersistenceProcess; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMakeReadyForPersistenceProcessFailedOnLastAttempt; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0079
    void* DeinitProcess; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    FString Description; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UJunoPointsWorldPersistenceFeatureModule, GameplayTagContainer) == 40, "Offset mismatch for UJunoPointsWorldPersistenceFeatureModule::GameplayTagContainer");
static_assert(offsetof(UJunoPointsWorldPersistenceFeatureModule, Containers) == 72, "Offset mismatch for UJunoPointsWorldPersistenceFeatureModule::Containers");
static_assert(offsetof(UJunoPointsWorldPersistenceFeatureModule, ServiceData) == 88, "Offset mismatch for UJunoPointsWorldPersistenceFeatureModule::ServiceData");
static_assert(offsetof(UJunoPointsWorldPersistenceFeatureModule, PersistentName) == 96, "Offset mismatch for UJunoPointsWorldPersistenceFeatureModule::PersistentName");
static_assert(offsetof(UJunoPointsWorldPersistenceFeatureModule, MakeReadyForPersistenceProcess) == 112, "Offset mismatch for UJunoPointsWorldPersistenceFeatureModule::MakeReadyForPersistenceProcess");
static_assert(offsetof(UJunoPointsWorldPersistenceFeatureModule, bMakeReadyForPersistenceProcessFailedOnLastAttempt) == 120, "Offset mismatch for UJunoPointsWorldPersistenceFeatureModule::bMakeReadyForPersistenceProcessFailedOnLastAttempt");
static_assert(offsetof(UJunoPointsWorldPersistenceFeatureModule, DeinitProcess) == 128, "Offset mismatch for UJunoPointsWorldPersistenceFeatureModule::DeinitProcess");
static_assert(offsetof(UJunoPointsWorldPersistenceFeatureModule, Description) == 136, "Offset mismatch for UJunoPointsWorldPersistenceFeatureModule::Description");

// /Script/JunoPlayerRoles.JunoRoleAttributeSet
// Kind: Class; super: FortAttributeSet
class UJunoRoleAttributeSet
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t RoleEnergy[0x28]; // 0x0048 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxRoleEnergy[0x28]; // 0x0070 (Size: 0x28, Type: StructProperty)
    std::uint8_t XPMultiplier[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoRoleAttributeSet, RoleEnergy) == 72, "Offset mismatch for UJunoRoleAttributeSet::RoleEnergy");
static_assert(offsetof(UJunoRoleAttributeSet, MaxRoleEnergy) == 112, "Offset mismatch for UJunoRoleAttributeSet::MaxRoleEnergy");
static_assert(offsetof(UJunoRoleAttributeSet, XPMultiplier) == 152, "Offset mismatch for UJunoRoleAttributeSet::XPMultiplier");

// /Script/JunoPlayerRoles.JunoRolesCheatManager
// Kind: Class; super: ChildCheatManager
class UJunoRolesCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPlayerRoles.JunoRolesControllerComponent
// Kind: Class; super: FortControllerComponent
class UJunoRolesControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnJunoRoleChangedEvent; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t PrimaryAbilityTriggerTag[0x4]; // 0x00D8 (Size: 0x4, Type: StructProperty)
    std::uint8_t SecondaryAbilityTriggerTag[0x4]; // 0x00DC (Size: 0x4, Type: StructProperty)
    std::uint8_t UltimateAbilityTriggerTag[0x4]; // 0x00E0 (Size: 0x4, Type: StructProperty)
    std::uint8_t DodgeAbilityTriggerTag[0x4]; // 0x00E4 (Size: 0x4, Type: StructProperty)
    std::uint8_t RoleTag[0x40]; // 0x00E8 (Size: 0x40, Type: StructProperty)
    void* PendingRoleAbilitySet; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* WaitForPlayerPersistence; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NumRoleAbilities; // 0x0138 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UJunoRolesControllerComponent, OnJunoRoleChangedEvent) == 200, "Offset mismatch for UJunoRolesControllerComponent::OnJunoRoleChangedEvent");
static_assert(offsetof(UJunoRolesControllerComponent, PrimaryAbilityTriggerTag) == 216, "Offset mismatch for UJunoRolesControllerComponent::PrimaryAbilityTriggerTag");
static_assert(offsetof(UJunoRolesControllerComponent, SecondaryAbilityTriggerTag) == 220, "Offset mismatch for UJunoRolesControllerComponent::SecondaryAbilityTriggerTag");
static_assert(offsetof(UJunoRolesControllerComponent, UltimateAbilityTriggerTag) == 224, "Offset mismatch for UJunoRolesControllerComponent::UltimateAbilityTriggerTag");
static_assert(offsetof(UJunoRolesControllerComponent, DodgeAbilityTriggerTag) == 228, "Offset mismatch for UJunoRolesControllerComponent::DodgeAbilityTriggerTag");
static_assert(offsetof(UJunoRolesControllerComponent, RoleTag) == 232, "Offset mismatch for UJunoRolesControllerComponent::RoleTag");
static_assert(offsetof(UJunoRolesControllerComponent, PendingRoleAbilitySet) == 296, "Offset mismatch for UJunoRolesControllerComponent::PendingRoleAbilitySet");
static_assert(offsetof(UJunoRolesControllerComponent, WaitForPlayerPersistence) == 304, "Offset mismatch for UJunoRolesControllerComponent::WaitForPlayerPersistence");
static_assert(offsetof(UJunoRolesControllerComponent, NumRoleAbilities) == 312, "Offset mismatch for UJunoRolesControllerComponent::NumRoleAbilities");

// /Script/JunoPlayerRoles.JunoRolesLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoRolesLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPlayerRoles.JunoSkillsAnalytics
// Kind: Class; super: Object
class UJunoSkillsAnalytics
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPlayerRoles.JunoSkillsCheatManager
// Kind: Class; super: ChildCheatManager
class UJunoSkillsCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPlayerRoles.JunoSkillsControllerComponent
// Kind: Class; super: FortControllerComponent
class UJunoSkillsControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate OnJunoSkillsChangedEvent; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> AllSkills; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x18]; // 0x00E8
    void* WaitForPlayerPersistence; // 0x0100 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoSkillsControllerComponent, OnJunoSkillsChangedEvent) == 200, "Offset mismatch for UJunoSkillsControllerComponent::OnJunoSkillsChangedEvent");
static_assert(offsetof(UJunoSkillsControllerComponent, AllSkills) == 216, "Offset mismatch for UJunoSkillsControllerComponent::AllSkills");
static_assert(offsetof(UJunoSkillsControllerComponent, WaitForPlayerPersistence) == 256, "Offset mismatch for UJunoSkillsControllerComponent::WaitForPlayerPersistence");

// /Script/JunoPlayerRoles.JunoSkillsLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UJunoSkillsLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPlayerRoles.JunoVerbProcessor_RoleAbilityTriggered
// Kind: Class; super: FortObjectiveProcessor
class UJunoVerbProcessor_RoleAbilityTriggered
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoVerbProcessor_RoleAbilityTriggered, OwningProcessorSubsystem) == 56, "Offset mismatch for UJunoVerbProcessor_RoleAbilityTriggered::OwningProcessorSubsystem");

// /Script/JunoPlayerRoles.JunoVerbProcessor_RoleChanged
// Kind: Class; super: FortObjectiveProcessor
class UJunoVerbProcessor_RoleChanged
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoVerbProcessor_RoleChanged, OwningProcessorSubsystem) == 56, "Offset mismatch for UJunoVerbProcessor_RoleChanged::OwningProcessorSubsystem");

// /Script/JunoPlayerRoles.JunoVerbProcessor_RoleProgressChanged
// Kind: Class; super: FortObjectiveProcessor
class UJunoVerbProcessor_RoleProgressChanged
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoVerbProcessor_RoleProgressChanged, OwningProcessorSubsystem) == 56, "Offset mismatch for UJunoVerbProcessor_RoleProgressChanged::OwningProcessorSubsystem");

// /Script/JunoPlayerRoles.JunoVerbProcessor_RoleSkillChanged
// Kind: Class; super: FortObjectiveProcessor
class UJunoVerbProcessor_RoleSkillChanged
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* OwningProcessorSubsystem; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoVerbProcessor_RoleSkillChanged, OwningProcessorSubsystem) == 56, "Offset mismatch for UJunoVerbProcessor_RoleSkillChanged::OwningProcessorSubsystem");
