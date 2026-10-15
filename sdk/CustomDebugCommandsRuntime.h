/**
 * decamp dumper generated SDK
 * Package: /Script/CustomDebugCommandsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CustomDebugCommandsRuntime.FortCustomDebugCommandResult
// Kind: ScriptStruct; super: none
struct FFortCustomDebugCommandResult
{
public:
    FString CommandName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t ResultCode; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    std::uint8_t CustomResultText[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    FString PlayerName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t InstigatorID[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    std::uint8_t bShouldCloseDebugCommandsScreen; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortCustomDebugCommandResult, CommandName) == 0, "Offset mismatch for FFortCustomDebugCommandResult::CommandName");
static_assert(offsetof(FFortCustomDebugCommandResult, ResultCode) == 16, "Offset mismatch for FFortCustomDebugCommandResult::ResultCode");
static_assert(offsetof(FFortCustomDebugCommandResult, CustomResultText) == 24, "Offset mismatch for FFortCustomDebugCommandResult::CustomResultText");
static_assert(offsetof(FFortCustomDebugCommandResult, PlayerName) == 40, "Offset mismatch for FFortCustomDebugCommandResult::PlayerName");
static_assert(offsetof(FFortCustomDebugCommandResult, InstigatorID) == 56, "Offset mismatch for FFortCustomDebugCommandResult::InstigatorID");
static_assert(offsetof(FFortCustomDebugCommandResult, bShouldCloseDebugCommandsScreen) == 104, "Offset mismatch for FFortCustomDebugCommandResult::bShouldCloseDebugCommandsScreen");

// /Script/CustomDebugCommandsRuntime.CustomDebugCommandGameUserSettings
// Kind: Class; super: Object
class UCustomDebugCommandGameUserSettings
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t bIsDebugInputActive; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0059
    TMap<void*, void*> PersistedValues; // 0x0060 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> DebugCommandKeyMapping; // 0x0070 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> DebugCommandGamepadKeyMapping; // 0x0080 (Size: 0x10, Type: MapProperty)
    TArray<void*> FavoritedDebugCommands; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RecentlyUsedCommands; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCustomDebugCommandGameUserSettings, bIsDebugInputActive) == 88, "Offset mismatch for UCustomDebugCommandGameUserSettings::bIsDebugInputActive");
static_assert(offsetof(UCustomDebugCommandGameUserSettings, PersistedValues) == 96, "Offset mismatch for UCustomDebugCommandGameUserSettings::PersistedValues");
static_assert(offsetof(UCustomDebugCommandGameUserSettings, DebugCommandKeyMapping) == 112, "Offset mismatch for UCustomDebugCommandGameUserSettings::DebugCommandKeyMapping");
static_assert(offsetof(UCustomDebugCommandGameUserSettings, DebugCommandGamepadKeyMapping) == 128, "Offset mismatch for UCustomDebugCommandGameUserSettings::DebugCommandGamepadKeyMapping");
static_assert(offsetof(UCustomDebugCommandGameUserSettings, FavoritedDebugCommands) == 144, "Offset mismatch for UCustomDebugCommandGameUserSettings::FavoritedDebugCommands");
static_assert(offsetof(UCustomDebugCommandGameUserSettings, RecentlyUsedCommands) == 160, "Offset mismatch for UCustomDebugCommandGameUserSettings::RecentlyUsedCommands");

// /Script/CustomDebugCommandsRuntime.CustomDebugCommand_Base
// Kind: Class; super: Object
class UCustomDebugCommand_Base
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

static_assert(offsetof(UCustomDebugCommand_Base, CommandName) == 40, "Offset mismatch for UCustomDebugCommand_Base::CommandName");
static_assert(offsetof(UCustomDebugCommand_Base, CommandDisplayName) == 56, "Offset mismatch for UCustomDebugCommand_Base::CommandDisplayName");
static_assert(offsetof(UCustomDebugCommand_Base, bIsInternalOnly) == 72, "Offset mismatch for UCustomDebugCommand_Base::bIsInternalOnly");
static_assert(offsetof(UCustomDebugCommand_Base, bRequiresActiveMinigame) == 73, "Offset mismatch for UCustomDebugCommand_Base::bRequiresActiveMinigame");
static_assert(offsetof(UCustomDebugCommand_Base, UserInterface) == 80, "Offset mismatch for UCustomDebugCommand_Base::UserInterface");
static_assert(offsetof(UCustomDebugCommand_Base, WeakPlayerController) == 104, "Offset mismatch for UCustomDebugCommand_Base::WeakPlayerController");
static_assert(offsetof(UCustomDebugCommand_Base, TargetPlayerId) == 112, "Offset mismatch for UCustomDebugCommand_Base::TargetPlayerId");
static_assert(offsetof(UCustomDebugCommand_Base, CommandState) == 144, "Offset mismatch for UCustomDebugCommand_Base::CommandState");

// /Script/CustomDebugCommandsRuntime.DebugCommandRegistrySubsystem
// Kind: Class; super: GameInstanceSubsystem
class UDebugCommandRegistrySubsystem
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TMap<void*, void*> RegisteredDebugCommandClasses; // 0x0078 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDebugCommandRegistrySubsystem, RegisteredDebugCommandClasses) == 120, "Offset mismatch for UDebugCommandRegistrySubsystem::RegisteredDebugCommandClasses");

// /Script/CustomDebugCommandsRuntime.FortControllerComponent_CustomDebugCommands
// Kind: Class; super: ControllerComponent
class UFortControllerComponent_CustomDebugCommands
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnCustomDebugCommandResultDelegate; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x118]; // 0x00D0
    TMap<void*, void*> InstancedCommandMap; // 0x01E8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> DebugCommandActionMapping; // 0x01F8 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsUsingGamepad; // 0x0208 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0209
    void* IMC_DebugCommandInput; // 0x0210 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortControllerComponent_CustomDebugCommands, OnCustomDebugCommandResultDelegate) == 192, "Offset mismatch for UFortControllerComponent_CustomDebugCommands::OnCustomDebugCommandResultDelegate");
static_assert(offsetof(UFortControllerComponent_CustomDebugCommands, InstancedCommandMap) == 488, "Offset mismatch for UFortControllerComponent_CustomDebugCommands::InstancedCommandMap");
static_assert(offsetof(UFortControllerComponent_CustomDebugCommands, DebugCommandActionMapping) == 504, "Offset mismatch for UFortControllerComponent_CustomDebugCommands::DebugCommandActionMapping");
static_assert(offsetof(UFortControllerComponent_CustomDebugCommands, bIsUsingGamepad) == 520, "Offset mismatch for UFortControllerComponent_CustomDebugCommands::bIsUsingGamepad");
static_assert(offsetof(UFortControllerComponent_CustomDebugCommands, IMC_DebugCommandInput) == 528, "Offset mismatch for UFortControllerComponent_CustomDebugCommands::IMC_DebugCommandInput");

// /Script/CustomDebugCommandsRuntime.GameFeatureAction_AddDebugCommands
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_AddDebugCommands
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> DebugCommands; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> CachedDebugCommandRegistry; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UGameFeatureAction_AddDebugCommands, DebugCommands) == 40, "Offset mismatch for UGameFeatureAction_AddDebugCommands::DebugCommands");
static_assert(offsetof(UGameFeatureAction_AddDebugCommands, CachedDebugCommandRegistry) == 56, "Offset mismatch for UGameFeatureAction_AddDebugCommands::CachedDebugCommandRegistry");
