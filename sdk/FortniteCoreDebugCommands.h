/**
 * decamp dumper generated SDK
 * Package: /Script/FortniteCoreDebugCommands
 */
#pragma once
#include "Basic.h"

// /Script/FortniteCoreDebugCommands.CustomDebugCommandNotifyExperienceSettingsOverride
// Kind: Class; super: Interface
class UCustomDebugCommandNotifyExperienceSettingsOverride
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FortniteCoreDebugCommands.CustomDebugCommand_ActorSpawnerBase
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_ActorSpawnerBase
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* DebugActorClass; // 0x00E0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SpawnLocation; // 0x00E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E9
    TWeakObjectPtr<void> DebugActorInstanceWeak; // 0x00EC (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00F4
    std::uint8_t TextDebugActorRemovedResult[0x10]; // 0x00F8 (Size: 0x10, Type: TextProperty)
    std::uint8_t TextDebugActorSpawned[0x10]; // 0x0108 (Size: 0x10, Type: TextProperty)
    FText TextDebugActorFailedSpawn; // 0x0118 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UCustomDebugCommand_ActorSpawnerBase, DebugActorClass) == 224, "Offset mismatch for UCustomDebugCommand_ActorSpawnerBase::DebugActorClass");
static_assert(offsetof(UCustomDebugCommand_ActorSpawnerBase, SpawnLocation) == 232, "Offset mismatch for UCustomDebugCommand_ActorSpawnerBase::SpawnLocation");
static_assert(offsetof(UCustomDebugCommand_ActorSpawnerBase, DebugActorInstanceWeak) == 236, "Offset mismatch for UCustomDebugCommand_ActorSpawnerBase::DebugActorInstanceWeak");
static_assert(offsetof(UCustomDebugCommand_ActorSpawnerBase, TextDebugActorRemovedResult) == 248, "Offset mismatch for UCustomDebugCommand_ActorSpawnerBase::TextDebugActorRemovedResult");
static_assert(offsetof(UCustomDebugCommand_ActorSpawnerBase, TextDebugActorSpawned) == 264, "Offset mismatch for UCustomDebugCommand_ActorSpawnerBase::TextDebugActorSpawned");
static_assert(offsetof(UCustomDebugCommand_ActorSpawnerBase, TextDebugActorFailedSpawn) == 280, "Offset mismatch for UCustomDebugCommand_ActorSpawnerBase::TextDebugActorFailedSpawn");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_AddPlayerScore
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_AddPlayerScore
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t ScoreAmount; // 0x00E0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UCustomDebugCommand_AddPlayerScore, ScoreAmount) == 224, "Offset mismatch for UCustomDebugCommand_AddPlayerScore::ScoreAmount");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_ChangeClass
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_ChangeClass
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t ClassIndex; // 0x00E0 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UCustomDebugCommand_ChangeClass, ClassIndex) == 224, "Offset mismatch for UCustomDebugCommand_ChangeClass::ClassIndex");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_ChangeTeam
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_ChangeTeam
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t TeamIndex; // 0x00E0 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UCustomDebugCommand_ChangeTeam, TeamIndex) == 224, "Offset mismatch for UCustomDebugCommand_ChangeTeam::TeamIndex");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_ChangeViewMode
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_ChangeViewMode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* CachedMinigame; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ViewModeIndex; // 0x00E8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCustomDebugCommand_ChangeViewMode, CachedMinigame) == 224, "Offset mismatch for UCustomDebugCommand_ChangeViewMode::CachedMinigame");
static_assert(offsetof(UCustomDebugCommand_ChangeViewMode, ViewModeIndex) == 232, "Offset mismatch for UCustomDebugCommand_ChangeViewMode::ViewModeIndex");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_ChangeWorldSpeed
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_ChangeWorldSpeed
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float TimeDilation; // 0x00E0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCustomDebugCommand_ChangeWorldSpeed, TimeDilation) == 224, "Offset mismatch for UCustomDebugCommand_ChangeWorldSpeed::TimeDilation");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_ClearPickups
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_ClearPickups
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CommandName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t CommandDisplayName[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsInternalOnly; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequiresActiveMinigame; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    std::uint8_t UserInterface[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> WeakPlayerController; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    FString TargetPlayerId; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0080
    std::uint8_t CommandState; // 0x0090 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCustomDebugCommand_ClearPickups, CommandName) == 40, "Offset mismatch for UCustomDebugCommand_ClearPickups::CommandName");
static_assert(offsetof(UCustomDebugCommand_ClearPickups, CommandDisplayName) == 56, "Offset mismatch for UCustomDebugCommand_ClearPickups::CommandDisplayName");
static_assert(offsetof(UCustomDebugCommand_ClearPickups, bIsInternalOnly) == 72, "Offset mismatch for UCustomDebugCommand_ClearPickups::bIsInternalOnly");
static_assert(offsetof(UCustomDebugCommand_ClearPickups, bRequiresActiveMinigame) == 73, "Offset mismatch for UCustomDebugCommand_ClearPickups::bRequiresActiveMinigame");
static_assert(offsetof(UCustomDebugCommand_ClearPickups, UserInterface) == 80, "Offset mismatch for UCustomDebugCommand_ClearPickups::UserInterface");
static_assert(offsetof(UCustomDebugCommand_ClearPickups, WeakPlayerController) == 104, "Offset mismatch for UCustomDebugCommand_ClearPickups::WeakPlayerController");
static_assert(offsetof(UCustomDebugCommand_ClearPickups, TargetPlayerId) == 112, "Offset mismatch for UCustomDebugCommand_ClearPickups::TargetPlayerId");
static_assert(offsetof(UCustomDebugCommand_ClearPickups, CommandState) == 144, "Offset mismatch for UCustomDebugCommand_ClearPickups::CommandState");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_DespawnTestPlayers
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_DespawnTestPlayers
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t NumTestPlayers; // 0x00E0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UCustomDebugCommand_DespawnTestPlayers, NumTestPlayers) == 224, "Offset mismatch for UCustomDebugCommand_DespawnTestPlayers::NumTestPlayers");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_EliminateAI
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_EliminateAI
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float EliminationRange; // 0x00E0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCustomDebugCommand_EliminateAI, EliminationRange) == 224, "Offset mismatch for UCustomDebugCommand_EliminateAI::EliminationRange");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_EndGame
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_EndGame
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CommandName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t CommandDisplayName[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsInternalOnly; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequiresActiveMinigame; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    std::uint8_t UserInterface[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> WeakPlayerController; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    FString TargetPlayerId; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0080
    std::uint8_t CommandState; // 0x0090 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCustomDebugCommand_EndGame, CommandName) == 40, "Offset mismatch for UCustomDebugCommand_EndGame::CommandName");
static_assert(offsetof(UCustomDebugCommand_EndGame, CommandDisplayName) == 56, "Offset mismatch for UCustomDebugCommand_EndGame::CommandDisplayName");
static_assert(offsetof(UCustomDebugCommand_EndGame, bIsInternalOnly) == 72, "Offset mismatch for UCustomDebugCommand_EndGame::bIsInternalOnly");
static_assert(offsetof(UCustomDebugCommand_EndGame, bRequiresActiveMinigame) == 73, "Offset mismatch for UCustomDebugCommand_EndGame::bRequiresActiveMinigame");
static_assert(offsetof(UCustomDebugCommand_EndGame, UserInterface) == 80, "Offset mismatch for UCustomDebugCommand_EndGame::UserInterface");
static_assert(offsetof(UCustomDebugCommand_EndGame, WeakPlayerController) == 104, "Offset mismatch for UCustomDebugCommand_EndGame::WeakPlayerController");
static_assert(offsetof(UCustomDebugCommand_EndGame, TargetPlayerId) == 112, "Offset mismatch for UCustomDebugCommand_EndGame::TargetPlayerId");
static_assert(offsetof(UCustomDebugCommand_EndGame, CommandState) == 144, "Offset mismatch for UCustomDebugCommand_EndGame::CommandState");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_EndRound
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_EndRound
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CommandName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t CommandDisplayName[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsInternalOnly; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequiresActiveMinigame; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    std::uint8_t UserInterface[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> WeakPlayerController; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    FString TargetPlayerId; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0080
    std::uint8_t CommandState; // 0x0090 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCustomDebugCommand_EndRound, CommandName) == 40, "Offset mismatch for UCustomDebugCommand_EndRound::CommandName");
static_assert(offsetof(UCustomDebugCommand_EndRound, CommandDisplayName) == 56, "Offset mismatch for UCustomDebugCommand_EndRound::CommandDisplayName");
static_assert(offsetof(UCustomDebugCommand_EndRound, bIsInternalOnly) == 72, "Offset mismatch for UCustomDebugCommand_EndRound::bIsInternalOnly");
static_assert(offsetof(UCustomDebugCommand_EndRound, bRequiresActiveMinigame) == 73, "Offset mismatch for UCustomDebugCommand_EndRound::bRequiresActiveMinigame");
static_assert(offsetof(UCustomDebugCommand_EndRound, UserInterface) == 80, "Offset mismatch for UCustomDebugCommand_EndRound::UserInterface");
static_assert(offsetof(UCustomDebugCommand_EndRound, WeakPlayerController) == 104, "Offset mismatch for UCustomDebugCommand_EndRound::WeakPlayerController");
static_assert(offsetof(UCustomDebugCommand_EndRound, TargetPlayerId) == 112, "Offset mismatch for UCustomDebugCommand_EndRound::TargetPlayerId");
static_assert(offsetof(UCustomDebugCommand_EndRound, CommandState) == 144, "Offset mismatch for UCustomDebugCommand_EndRound::CommandState");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_ExperienceSettingOverride
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_ExperienceSettingOverride
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t TargetScalableFloat[0x30]; // 0x00E0 (Size: 0x30, Type: StructProperty)
    void* CachedMinigame; // 0x0110 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomDebugCommand_ExperienceSettingOverride, TargetScalableFloat) == 224, "Offset mismatch for UCustomDebugCommand_ExperienceSettingOverride::TargetScalableFloat");
static_assert(offsetof(UCustomDebugCommand_ExperienceSettingOverride, CachedMinigame) == 272, "Offset mismatch for UCustomDebugCommand_ExperienceSettingOverride::CachedMinigame");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_ExperienceSettingOverride_Bool
// Kind: Class; super: CustomDebugCommand_ExperienceSettingOverride
class UCustomDebugCommand_ExperienceSettingOverride_Bool
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    std::uint8_t bScalableFloatOverrideValue; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCustomDebugCommand_ExperienceSettingOverride_Bool, bScalableFloatOverrideValue) == 280, "Offset mismatch for UCustomDebugCommand_ExperienceSettingOverride_Bool::bScalableFloatOverrideValue");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_ExperienceSettingOverride_DynamicBool
// Kind: Class; super: CustomDebugCommand_ExperienceSettingOverride_Bool
class UCustomDebugCommand_ExperienceSettingOverride_DynamicBool
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    FName TargetClassFunctionName; // 0x0128 (Size: 0x8, Type: NameProperty)
    void* ScalableFloatTargetClass; // 0x0130 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UCustomDebugCommand_ExperienceSettingOverride_DynamicBool, TargetClassFunctionName) == 296, "Offset mismatch for UCustomDebugCommand_ExperienceSettingOverride_DynamicBool::TargetClassFunctionName");
static_assert(offsetof(UCustomDebugCommand_ExperienceSettingOverride_DynamicBool, ScalableFloatTargetClass) == 304, "Offset mismatch for UCustomDebugCommand_ExperienceSettingOverride_DynamicBool::ScalableFloatTargetClass");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_ExperienceSettingOverride_DynamicFloat
// Kind: Class; super: CustomDebugCommand_ExperienceSettingOverride_Float
class UCustomDebugCommand_ExperienceSettingOverride_DynamicFloat
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    FName TargetClassFunctionName; // 0x0128 (Size: 0x8, Type: NameProperty)
    void* ScalableFloatTargetClass; // 0x0130 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UCustomDebugCommand_ExperienceSettingOverride_DynamicFloat, TargetClassFunctionName) == 296, "Offset mismatch for UCustomDebugCommand_ExperienceSettingOverride_DynamicFloat::TargetClassFunctionName");
static_assert(offsetof(UCustomDebugCommand_ExperienceSettingOverride_DynamicFloat, ScalableFloatTargetClass) == 304, "Offset mismatch for UCustomDebugCommand_ExperienceSettingOverride_DynamicFloat::ScalableFloatTargetClass");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_ExperienceSettingOverride_DynamicInt
// Kind: Class; super: CustomDebugCommand_ExperienceSettingOverride_Int
class UCustomDebugCommand_ExperienceSettingOverride_DynamicInt
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    FName TargetClassFunctionName; // 0x0128 (Size: 0x8, Type: NameProperty)
    void* ScalableFloatTargetClass; // 0x0130 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UCustomDebugCommand_ExperienceSettingOverride_DynamicInt, TargetClassFunctionName) == 296, "Offset mismatch for UCustomDebugCommand_ExperienceSettingOverride_DynamicInt::TargetClassFunctionName");
static_assert(offsetof(UCustomDebugCommand_ExperienceSettingOverride_DynamicInt, ScalableFloatTargetClass) == 304, "Offset mismatch for UCustomDebugCommand_ExperienceSettingOverride_DynamicInt::ScalableFloatTargetClass");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_ExperienceSettingOverride_DynamicToggle
// Kind: Class; super: CustomDebugCommand_ExperienceSettingOverride_Toggle
class UCustomDebugCommand_ExperienceSettingOverride_DynamicToggle
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    FName TargetClassFunctionName; // 0x0128 (Size: 0x8, Type: NameProperty)
    void* ScalableFloatTargetClass; // 0x0130 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UCustomDebugCommand_ExperienceSettingOverride_DynamicToggle, TargetClassFunctionName) == 296, "Offset mismatch for UCustomDebugCommand_ExperienceSettingOverride_DynamicToggle::TargetClassFunctionName");
static_assert(offsetof(UCustomDebugCommand_ExperienceSettingOverride_DynamicToggle, ScalableFloatTargetClass) == 304, "Offset mismatch for UCustomDebugCommand_ExperienceSettingOverride_DynamicToggle::ScalableFloatTargetClass");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_ExperienceSettingOverride_Float
// Kind: Class; super: CustomDebugCommand_ExperienceSettingOverride
class UCustomDebugCommand_ExperienceSettingOverride_Float
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    float ScalableFloatOverrideValue; // 0x0118 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCustomDebugCommand_ExperienceSettingOverride_Float, ScalableFloatOverrideValue) == 280, "Offset mismatch for UCustomDebugCommand_ExperienceSettingOverride_Float::ScalableFloatOverrideValue");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_ExperienceSettingOverride_Int
// Kind: Class; super: CustomDebugCommand_ExperienceSettingOverride
class UCustomDebugCommand_ExperienceSettingOverride_Int
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    std::int32_t ScalableFloatOverrideValue; // 0x0118 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UCustomDebugCommand_ExperienceSettingOverride_Int, ScalableFloatOverrideValue) == 280, "Offset mismatch for UCustomDebugCommand_ExperienceSettingOverride_Int::ScalableFloatOverrideValue");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_ExperienceSettingOverride_Toggle
// Kind: Class; super: CustomDebugCommand_ExperienceSettingOverride
class UCustomDebugCommand_ExperienceSettingOverride_Toggle
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    std::uint8_t InitialCommandState; // 0x0118 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCustomDebugCommand_ExperienceSettingOverride_Toggle, InitialCommandState) == 280, "Offset mismatch for UCustomDebugCommand_ExperienceSettingOverride_Toggle::InitialCommandState");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_Flight
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_Flight
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CommandName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t CommandDisplayName[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsInternalOnly; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequiresActiveMinigame; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    std::uint8_t UserInterface[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> WeakPlayerController; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    FString TargetPlayerId; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0080
    std::uint8_t CommandState; // 0x0090 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCustomDebugCommand_Flight, CommandName) == 40, "Offset mismatch for UCustomDebugCommand_Flight::CommandName");
static_assert(offsetof(UCustomDebugCommand_Flight, CommandDisplayName) == 56, "Offset mismatch for UCustomDebugCommand_Flight::CommandDisplayName");
static_assert(offsetof(UCustomDebugCommand_Flight, bIsInternalOnly) == 72, "Offset mismatch for UCustomDebugCommand_Flight::bIsInternalOnly");
static_assert(offsetof(UCustomDebugCommand_Flight, bRequiresActiveMinigame) == 73, "Offset mismatch for UCustomDebugCommand_Flight::bRequiresActiveMinigame");
static_assert(offsetof(UCustomDebugCommand_Flight, UserInterface) == 80, "Offset mismatch for UCustomDebugCommand_Flight::UserInterface");
static_assert(offsetof(UCustomDebugCommand_Flight, WeakPlayerController) == 104, "Offset mismatch for UCustomDebugCommand_Flight::WeakPlayerController");
static_assert(offsetof(UCustomDebugCommand_Flight, TargetPlayerId) == 112, "Offset mismatch for UCustomDebugCommand_Flight::TargetPlayerId");
static_assert(offsetof(UCustomDebugCommand_Flight, CommandState) == 144, "Offset mismatch for UCustomDebugCommand_Flight::CommandState");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_FlightPhasing
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_FlightPhasing
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CommandName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t CommandDisplayName[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsInternalOnly; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequiresActiveMinigame; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    std::uint8_t UserInterface[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> WeakPlayerController; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    FString TargetPlayerId; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0080
    std::uint8_t CommandState; // 0x0090 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCustomDebugCommand_FlightPhasing, CommandName) == 40, "Offset mismatch for UCustomDebugCommand_FlightPhasing::CommandName");
static_assert(offsetof(UCustomDebugCommand_FlightPhasing, CommandDisplayName) == 56, "Offset mismatch for UCustomDebugCommand_FlightPhasing::CommandDisplayName");
static_assert(offsetof(UCustomDebugCommand_FlightPhasing, bIsInternalOnly) == 72, "Offset mismatch for UCustomDebugCommand_FlightPhasing::bIsInternalOnly");
static_assert(offsetof(UCustomDebugCommand_FlightPhasing, bRequiresActiveMinigame) == 73, "Offset mismatch for UCustomDebugCommand_FlightPhasing::bRequiresActiveMinigame");
static_assert(offsetof(UCustomDebugCommand_FlightPhasing, UserInterface) == 80, "Offset mismatch for UCustomDebugCommand_FlightPhasing::UserInterface");
static_assert(offsetof(UCustomDebugCommand_FlightPhasing, WeakPlayerController) == 104, "Offset mismatch for UCustomDebugCommand_FlightPhasing::WeakPlayerController");
static_assert(offsetof(UCustomDebugCommand_FlightPhasing, TargetPlayerId) == 112, "Offset mismatch for UCustomDebugCommand_FlightPhasing::TargetPlayerId");
static_assert(offsetof(UCustomDebugCommand_FlightPhasing, CommandState) == 144, "Offset mismatch for UCustomDebugCommand_FlightPhasing::CommandState");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_FlightSpeed
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_FlightSpeed
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t FlightSpeedIndex; // 0x00E0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UCustomDebugCommand_FlightSpeed, FlightSpeedIndex) == 224, "Offset mismatch for UCustomDebugCommand_FlightSpeed::FlightSpeedIndex");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_FreeCamera
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_FreeCamera
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* FreeCameraPawnClass; // 0x00E0 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UCustomDebugCommand_FreeCamera, FreeCameraPawnClass) == 224, "Offset mismatch for UCustomDebugCommand_FreeCamera::FreeCameraPawnClass");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_GiveGold
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_GiveGold
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t GoldAmount; // 0x00E0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UCustomDebugCommand_GiveGold, GoldAmount) == 224, "Offset mismatch for UCustomDebugCommand_GiveGold::GoldAmount");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_PauseRound
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_PauseRound
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CommandName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t CommandDisplayName[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsInternalOnly; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequiresActiveMinigame; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    std::uint8_t UserInterface[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> WeakPlayerController; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    FString TargetPlayerId; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0080
    std::uint8_t CommandState; // 0x0090 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCustomDebugCommand_PauseRound, CommandName) == 40, "Offset mismatch for UCustomDebugCommand_PauseRound::CommandName");
static_assert(offsetof(UCustomDebugCommand_PauseRound, CommandDisplayName) == 56, "Offset mismatch for UCustomDebugCommand_PauseRound::CommandDisplayName");
static_assert(offsetof(UCustomDebugCommand_PauseRound, bIsInternalOnly) == 72, "Offset mismatch for UCustomDebugCommand_PauseRound::bIsInternalOnly");
static_assert(offsetof(UCustomDebugCommand_PauseRound, bRequiresActiveMinigame) == 73, "Offset mismatch for UCustomDebugCommand_PauseRound::bRequiresActiveMinigame");
static_assert(offsetof(UCustomDebugCommand_PauseRound, UserInterface) == 80, "Offset mismatch for UCustomDebugCommand_PauseRound::UserInterface");
static_assert(offsetof(UCustomDebugCommand_PauseRound, WeakPlayerController) == 104, "Offset mismatch for UCustomDebugCommand_PauseRound::WeakPlayerController");
static_assert(offsetof(UCustomDebugCommand_PauseRound, TargetPlayerId) == 112, "Offset mismatch for UCustomDebugCommand_PauseRound::TargetPlayerId");
static_assert(offsetof(UCustomDebugCommand_PauseRound, CommandState) == 144, "Offset mismatch for UCustomDebugCommand_PauseRound::CommandState");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_SetHealth
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_SetHealth
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float HealthPercentage; // 0x00E0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCustomDebugCommand_SetHealth, HealthPercentage) == 224, "Offset mismatch for UCustomDebugCommand_SetHealth::HealthPercentage");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_SetShield
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_SetShield
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float ShieldPercentage; // 0x00E0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCustomDebugCommand_SetShield, ShieldPercentage) == 224, "Offset mismatch for UCustomDebugCommand_SetShield::ShieldPercentage");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_SpawnTestPlayers
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_SpawnTestPlayers
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t NumTestPlayers; // 0x00E0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UCustomDebugCommand_SpawnTestPlayers, NumTestPlayers) == 224, "Offset mismatch for UCustomDebugCommand_SpawnTestPlayers::NumTestPlayers");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_SubtractPlayerScore
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_SubtractPlayerScore
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t ScoreAmount; // 0x00E0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UCustomDebugCommand_SubtractPlayerScore, ScoreAmount) == 224, "Offset mismatch for UCustomDebugCommand_SubtractPlayerScore::ScoreAmount");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_Teleport
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_Teleport
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CommandName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t CommandDisplayName[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsInternalOnly; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequiresActiveMinigame; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    std::uint8_t UserInterface[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> WeakPlayerController; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    FString TargetPlayerId; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0080
    std::uint8_t CommandState; // 0x0090 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCustomDebugCommand_Teleport, CommandName) == 40, "Offset mismatch for UCustomDebugCommand_Teleport::CommandName");
static_assert(offsetof(UCustomDebugCommand_Teleport, CommandDisplayName) == 56, "Offset mismatch for UCustomDebugCommand_Teleport::CommandDisplayName");
static_assert(offsetof(UCustomDebugCommand_Teleport, bIsInternalOnly) == 72, "Offset mismatch for UCustomDebugCommand_Teleport::bIsInternalOnly");
static_assert(offsetof(UCustomDebugCommand_Teleport, bRequiresActiveMinigame) == 73, "Offset mismatch for UCustomDebugCommand_Teleport::bRequiresActiveMinigame");
static_assert(offsetof(UCustomDebugCommand_Teleport, UserInterface) == 80, "Offset mismatch for UCustomDebugCommand_Teleport::UserInterface");
static_assert(offsetof(UCustomDebugCommand_Teleport, WeakPlayerController) == 104, "Offset mismatch for UCustomDebugCommand_Teleport::WeakPlayerController");
static_assert(offsetof(UCustomDebugCommand_Teleport, TargetPlayerId) == 112, "Offset mismatch for UCustomDebugCommand_Teleport::TargetPlayerId");
static_assert(offsetof(UCustomDebugCommand_Teleport, CommandState) == 144, "Offset mismatch for UCustomDebugCommand_Teleport::CommandState");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_TimeOfDay
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_TimeOfDay
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float TimeOfDay; // 0x00E0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCustomDebugCommand_TimeOfDay, TimeOfDay) == 224, "Offset mismatch for UCustomDebugCommand_TimeOfDay::TimeOfDay");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_ToggleFocusDebugger
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_ToggleFocusDebugger
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CommandName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t CommandDisplayName[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsInternalOnly; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequiresActiveMinigame; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    std::uint8_t UserInterface[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> WeakPlayerController; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    FString TargetPlayerId; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0080
    std::uint8_t CommandState; // 0x0090 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCustomDebugCommand_ToggleFocusDebugger, CommandName) == 40, "Offset mismatch for UCustomDebugCommand_ToggleFocusDebugger::CommandName");
static_assert(offsetof(UCustomDebugCommand_ToggleFocusDebugger, CommandDisplayName) == 56, "Offset mismatch for UCustomDebugCommand_ToggleFocusDebugger::CommandDisplayName");
static_assert(offsetof(UCustomDebugCommand_ToggleFocusDebugger, bIsInternalOnly) == 72, "Offset mismatch for UCustomDebugCommand_ToggleFocusDebugger::bIsInternalOnly");
static_assert(offsetof(UCustomDebugCommand_ToggleFocusDebugger, bRequiresActiveMinigame) == 73, "Offset mismatch for UCustomDebugCommand_ToggleFocusDebugger::bRequiresActiveMinigame");
static_assert(offsetof(UCustomDebugCommand_ToggleFocusDebugger, UserInterface) == 80, "Offset mismatch for UCustomDebugCommand_ToggleFocusDebugger::UserInterface");
static_assert(offsetof(UCustomDebugCommand_ToggleFocusDebugger, WeakPlayerController) == 104, "Offset mismatch for UCustomDebugCommand_ToggleFocusDebugger::WeakPlayerController");
static_assert(offsetof(UCustomDebugCommand_ToggleFocusDebugger, TargetPlayerId) == 112, "Offset mismatch for UCustomDebugCommand_ToggleFocusDebugger::TargetPlayerId");
static_assert(offsetof(UCustomDebugCommand_ToggleFocusDebugger, CommandState) == 144, "Offset mismatch for UCustomDebugCommand_ToggleFocusDebugger::CommandState");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_ToggleHUD
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_ToggleHUD
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* CachedMinigame; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* CachedDebugCommandsControllerComponent; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomDebugCommand_ToggleHUD, CachedMinigame) == 224, "Offset mismatch for UCustomDebugCommand_ToggleHUD::CachedMinigame");
static_assert(offsetof(UCustomDebugCommand_ToggleHUD, CachedDebugCommandsControllerComponent) == 232, "Offset mismatch for UCustomDebugCommand_ToggleHUD::CachedDebugCommandsControllerComponent");

// /Script/FortniteCoreDebugCommands.CustomDebugCommand_ToggleInvulnerable
// Kind: Class; super: CustomDebugCommand_Base
class UCustomDebugCommand_ToggleInvulnerable
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString CommandName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t CommandDisplayName[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    std::uint8_t bIsInternalOnly; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequiresActiveMinigame; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    std::uint8_t UserInterface[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> WeakPlayerController; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    FString TargetPlayerId; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0080
    std::uint8_t CommandState; // 0x0090 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UCustomDebugCommand_ToggleInvulnerable, CommandName) == 40, "Offset mismatch for UCustomDebugCommand_ToggleInvulnerable::CommandName");
static_assert(offsetof(UCustomDebugCommand_ToggleInvulnerable, CommandDisplayName) == 56, "Offset mismatch for UCustomDebugCommand_ToggleInvulnerable::CommandDisplayName");
static_assert(offsetof(UCustomDebugCommand_ToggleInvulnerable, bIsInternalOnly) == 72, "Offset mismatch for UCustomDebugCommand_ToggleInvulnerable::bIsInternalOnly");
static_assert(offsetof(UCustomDebugCommand_ToggleInvulnerable, bRequiresActiveMinigame) == 73, "Offset mismatch for UCustomDebugCommand_ToggleInvulnerable::bRequiresActiveMinigame");
static_assert(offsetof(UCustomDebugCommand_ToggleInvulnerable, UserInterface) == 80, "Offset mismatch for UCustomDebugCommand_ToggleInvulnerable::UserInterface");
static_assert(offsetof(UCustomDebugCommand_ToggleInvulnerable, WeakPlayerController) == 104, "Offset mismatch for UCustomDebugCommand_ToggleInvulnerable::WeakPlayerController");
static_assert(offsetof(UCustomDebugCommand_ToggleInvulnerable, TargetPlayerId) == 112, "Offset mismatch for UCustomDebugCommand_ToggleInvulnerable::TargetPlayerId");
static_assert(offsetof(UCustomDebugCommand_ToggleInvulnerable, CommandState) == 144, "Offset mismatch for UCustomDebugCommand_ToggleInvulnerable::CommandState");

// /Script/FortniteCoreDebugCommands.FortProximityChatTestActor
// Kind: Class; super: Actor
class UFortProximityChatTestActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* AudioComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortProximityChatTestActor, AudioComponent) == 624, "Offset mismatch for UFortProximityChatTestActor::AudioComponent");

// /Script/FortniteCoreDebugCommands.FreeCameraPawn
// Kind: Class; super: SpectatorPawn
class UFreeCameraPawn
{
public:
    std::uint8_t Pad_0000[0x318]; // 0x0000
    void* CameraComponent; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* FreeCameraIMC; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* IA_MoveForward; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* IA_MoveRight; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* IA_MoveUp; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* IA_Look; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* IA_LookRate; // 0x0348 (Size: 0x8, Type: ObjectProperty)
    float MouseSensitivity; // 0x0350 (Size: 0x4, Type: FloatProperty)
    float GamepadTurnRate; // 0x0354 (Size: 0x4, Type: FloatProperty)
    float GamepadLookRate; // 0x0358 (Size: 0x4, Type: FloatProperty)
    float TouchSensitivity; // 0x035C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UFreeCameraPawn, CameraComponent) == 792, "Offset mismatch for UFreeCameraPawn::CameraComponent");
static_assert(offsetof(UFreeCameraPawn, FreeCameraIMC) == 800, "Offset mismatch for UFreeCameraPawn::FreeCameraIMC");
static_assert(offsetof(UFreeCameraPawn, IA_MoveForward) == 808, "Offset mismatch for UFreeCameraPawn::IA_MoveForward");
static_assert(offsetof(UFreeCameraPawn, IA_MoveRight) == 816, "Offset mismatch for UFreeCameraPawn::IA_MoveRight");
static_assert(offsetof(UFreeCameraPawn, IA_MoveUp) == 824, "Offset mismatch for UFreeCameraPawn::IA_MoveUp");
static_assert(offsetof(UFreeCameraPawn, IA_Look) == 832, "Offset mismatch for UFreeCameraPawn::IA_Look");
static_assert(offsetof(UFreeCameraPawn, IA_LookRate) == 840, "Offset mismatch for UFreeCameraPawn::IA_LookRate");
static_assert(offsetof(UFreeCameraPawn, MouseSensitivity) == 848, "Offset mismatch for UFreeCameraPawn::MouseSensitivity");
static_assert(offsetof(UFreeCameraPawn, GamepadTurnRate) == 852, "Offset mismatch for UFreeCameraPawn::GamepadTurnRate");
static_assert(offsetof(UFreeCameraPawn, GamepadLookRate) == 856, "Offset mismatch for UFreeCameraPawn::GamepadLookRate");
static_assert(offsetof(UFreeCameraPawn, TouchSensitivity) == 860, "Offset mismatch for UFreeCameraPawn::TouchSensitivity");
