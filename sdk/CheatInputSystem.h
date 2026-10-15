/**
 * decamp dumper generated SDK
 * Package: /Script/CheatInputSystem
 */
#pragma once
#include "Basic.h"

// /Script/CheatInputSystem.LocalTerminalCommandEntry
// Kind: ScriptStruct; super: TableRowBase
struct FLocalTerminalCommandEntry
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t ClientActionTag[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t bBroadcastToParty; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExecuteLocally; // 0x000D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x000E
    float MinIntervalSeconds; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float LocalMinIntervalSeconds; // 0x0014 (Size: 0x4, Type: FloatProperty)
    TSoftClassPtr<void> HandlerClass; // 0x0018 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FLocalTerminalCommandEntry, ClientActionTag) == 8, "Offset mismatch for FLocalTerminalCommandEntry::ClientActionTag");
static_assert(offsetof(FLocalTerminalCommandEntry, bBroadcastToParty) == 12, "Offset mismatch for FLocalTerminalCommandEntry::bBroadcastToParty");
static_assert(offsetof(FLocalTerminalCommandEntry, bExecuteLocally) == 13, "Offset mismatch for FLocalTerminalCommandEntry::bExecuteLocally");
static_assert(offsetof(FLocalTerminalCommandEntry, MinIntervalSeconds) == 16, "Offset mismatch for FLocalTerminalCommandEntry::MinIntervalSeconds");
static_assert(offsetof(FLocalTerminalCommandEntry, LocalMinIntervalSeconds) == 20, "Offset mismatch for FLocalTerminalCommandEntry::LocalMinIntervalSeconds");
static_assert(offsetof(FLocalTerminalCommandEntry, HandlerClass) == 24, "Offset mismatch for FLocalTerminalCommandEntry::HandlerClass");

// /Script/CheatInputSystem.TerminalCommandExecutionRecord
// Kind: ScriptStruct; super: none
struct FTerminalCommandExecutionRecord
{
public:
    std::uint8_t bCanRepeat; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t NextAvailableAt[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t bWasUnknownCommand; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWasNotAvailable; // 0x0011 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTerminalCommandExecutionRecord, bCanRepeat) == 0, "Offset mismatch for FTerminalCommandExecutionRecord::bCanRepeat");
static_assert(offsetof(FTerminalCommandExecutionRecord, NextAvailableAt) == 8, "Offset mismatch for FTerminalCommandExecutionRecord::NextAvailableAt");
static_assert(offsetof(FTerminalCommandExecutionRecord, bWasUnknownCommand) == 16, "Offset mismatch for FTerminalCommandExecutionRecord::bWasUnknownCommand");
static_assert(offsetof(FTerminalCommandExecutionRecord, bWasNotAvailable) == 17, "Offset mismatch for FTerminalCommandExecutionRecord::bWasNotAvailable");

// /Script/CheatInputSystem.TerminalCommandSender
// Kind: ScriptStruct; super: none
struct FTerminalCommandSender
{
public:
    std::uint8_t bIsLocalPlayer; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t PlayerID[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    FString DisplayName; // 0x0038 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FTerminalCommandSender, bIsLocalPlayer) == 0, "Offset mismatch for FTerminalCommandSender::bIsLocalPlayer");
static_assert(offsetof(FTerminalCommandSender, PlayerID) == 8, "Offset mismatch for FTerminalCommandSender::PlayerID");
static_assert(offsetof(FTerminalCommandSender, DisplayName) == 56, "Offset mismatch for FTerminalCommandSender::DisplayName");

// /Script/CheatInputSystem.TerminalRolledReward
// Kind: ScriptStruct; super: none
struct FTerminalRolledReward
{
public:
    FString TemplateId; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t Quantity; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FTerminalRolledReward, TemplateId) == 0, "Offset mismatch for FTerminalRolledReward::TemplateId");
static_assert(offsetof(FTerminalRolledReward, Quantity) == 16, "Offset mismatch for FTerminalRolledReward::Quantity");

// /Script/CheatInputSystem.TerminalSuccessActionEntry
// Kind: ScriptStruct; super: TableRowBase
struct FTerminalSuccessActionEntry
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SuccessActionTag[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    TSoftClassPtr<void> HandlerClass; // 0x0010 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FTerminalSuccessActionEntry, SuccessActionTag) == 8, "Offset mismatch for FTerminalSuccessActionEntry::SuccessActionTag");
static_assert(offsetof(FTerminalSuccessActionEntry, HandlerClass) == 16, "Offset mismatch for FTerminalSuccessActionEntry::HandlerClass");

// /Script/CheatInputSystem.TerminalXpDelta
// Kind: ScriptStruct; super: none
struct FTerminalXpDelta
{
public:
    std::int32_t OldXP; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t NewXP; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t OldLevel; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t NewLevel; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t XpGained; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t bLeveledUp; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTerminalXpDelta, OldXP) == 0, "Offset mismatch for FTerminalXpDelta::OldXP");
static_assert(offsetof(FTerminalXpDelta, NewXP) == 4, "Offset mismatch for FTerminalXpDelta::NewXP");
static_assert(offsetof(FTerminalXpDelta, OldLevel) == 8, "Offset mismatch for FTerminalXpDelta::OldLevel");
static_assert(offsetof(FTerminalXpDelta, NewLevel) == 12, "Offset mismatch for FTerminalXpDelta::NewLevel");
static_assert(offsetof(FTerminalXpDelta, XpGained) == 16, "Offset mismatch for FTerminalXpDelta::XpGained");
static_assert(offsetof(FTerminalXpDelta, bLeveledUp) == 20, "Offset mismatch for FTerminalXpDelta::bLeveledUp");

// /Script/CheatInputSystem.GameFeatureAction_AddLocalTerminalCommands
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_AddLocalTerminalCommands
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t CommandsTable[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SuccessActionsTable[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    void* ResolvedTable; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* ResolvedSuccessActionsTable; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameFeatureAction_AddLocalTerminalCommands, CommandsTable) == 40, "Offset mismatch for UGameFeatureAction_AddLocalTerminalCommands::CommandsTable");
static_assert(offsetof(UGameFeatureAction_AddLocalTerminalCommands, SuccessActionsTable) == 72, "Offset mismatch for UGameFeatureAction_AddLocalTerminalCommands::SuccessActionsTable");
static_assert(offsetof(UGameFeatureAction_AddLocalTerminalCommands, ResolvedTable) == 104, "Offset mismatch for UGameFeatureAction_AddLocalTerminalCommands::ResolvedTable");
static_assert(offsetof(UGameFeatureAction_AddLocalTerminalCommands, ResolvedSuccessActionsTable) == 112, "Offset mismatch for UGameFeatureAction_AddLocalTerminalCommands::ResolvedSuccessActionsTable");

// /Script/CheatInputSystem.LocalTerminalCommandHandler
// Kind: Class; super: Object
class ULocalTerminalCommandHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CheatInputSystem.TerminalCommandCheatManager
// Kind: Class; super: CheatManagerExtension
class UTerminalCommandCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CheatInputSystem.TerminalCommandContext
// Kind: Class; super: LocalPlayerSubsystem
class UTerminalCommandContext
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnCheatInputEnabledChanged; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLocalTerminalCommand; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTerminalCommandXpChanged; // 0x0050 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTerminalCommandQuestCompleted; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTerminalCommandRewardRolled; // 0x0070 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* HistorySave; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> LocalCommandHandlers; // 0x0088 (Size: 0x10, Type: MapProperty)
    TArray<void*> RegisteredCommandsTables; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RegisteredSuccessActionsTables; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTerminalCommandContext, OnCheatInputEnabledChanged) == 48, "Offset mismatch for UTerminalCommandContext::OnCheatInputEnabledChanged");
static_assert(offsetof(UTerminalCommandContext, OnLocalTerminalCommand) == 64, "Offset mismatch for UTerminalCommandContext::OnLocalTerminalCommand");
static_assert(offsetof(UTerminalCommandContext, OnTerminalCommandXpChanged) == 80, "Offset mismatch for UTerminalCommandContext::OnTerminalCommandXpChanged");
static_assert(offsetof(UTerminalCommandContext, OnTerminalCommandQuestCompleted) == 96, "Offset mismatch for UTerminalCommandContext::OnTerminalCommandQuestCompleted");
static_assert(offsetof(UTerminalCommandContext, OnTerminalCommandRewardRolled) == 112, "Offset mismatch for UTerminalCommandContext::OnTerminalCommandRewardRolled");
static_assert(offsetof(UTerminalCommandContext, HistorySave) == 128, "Offset mismatch for UTerminalCommandContext::HistorySave");
static_assert(offsetof(UTerminalCommandContext, LocalCommandHandlers) == 136, "Offset mismatch for UTerminalCommandContext::LocalCommandHandlers");
static_assert(offsetof(UTerminalCommandContext, RegisteredCommandsTables) == 152, "Offset mismatch for UTerminalCommandContext::RegisteredCommandsTables");
static_assert(offsetof(UTerminalCommandContext, RegisteredSuccessActionsTables) == 168, "Offset mismatch for UTerminalCommandContext::RegisteredSuccessActionsTables");

// /Script/CheatInputSystem.TerminalCommandHistorySave
// Kind: Class; super: SaveGame
class UTerminalCommandHistorySave
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> ExecutedCommands; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UTerminalCommandHistorySave, ExecutedCommands) == 40, "Offset mismatch for UTerminalCommandHistorySave::ExecutedCommands");
