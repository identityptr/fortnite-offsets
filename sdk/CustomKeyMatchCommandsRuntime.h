/**
 * decamp dumper generated SDK
 * Package: /Script/CustomKeyMatchCommandsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CustomKeyMatchCommandsRuntime.CustomKeyMatchCommand_Base
// Kind: Class; super: CustomDebugCommand_Base
class UCustomKeyMatchCommand_Base
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

static_assert(offsetof(UCustomKeyMatchCommand_Base, CommandName) == 40, "Offset mismatch for UCustomKeyMatchCommand_Base::CommandName");
static_assert(offsetof(UCustomKeyMatchCommand_Base, CommandDisplayName) == 56, "Offset mismatch for UCustomKeyMatchCommand_Base::CommandDisplayName");
static_assert(offsetof(UCustomKeyMatchCommand_Base, bIsInternalOnly) == 72, "Offset mismatch for UCustomKeyMatchCommand_Base::bIsInternalOnly");
static_assert(offsetof(UCustomKeyMatchCommand_Base, bRequiresActiveMinigame) == 73, "Offset mismatch for UCustomKeyMatchCommand_Base::bRequiresActiveMinigame");
static_assert(offsetof(UCustomKeyMatchCommand_Base, UserInterface) == 80, "Offset mismatch for UCustomKeyMatchCommand_Base::UserInterface");
static_assert(offsetof(UCustomKeyMatchCommand_Base, WeakPlayerController) == 104, "Offset mismatch for UCustomKeyMatchCommand_Base::WeakPlayerController");
static_assert(offsetof(UCustomKeyMatchCommand_Base, TargetPlayerId) == 112, "Offset mismatch for UCustomKeyMatchCommand_Base::TargetPlayerId");
static_assert(offsetof(UCustomKeyMatchCommand_Base, CommandState) == 144, "Offset mismatch for UCustomKeyMatchCommand_Base::CommandState");

// /Script/CustomKeyMatchCommandsRuntime.CustomKeyMatchCommand_PlayerGodMode
// Kind: Class; super: CustomKeyMatchCommand_Base
class UCustomKeyMatchCommand_PlayerGodMode
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t bGodMode; // 0x00E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCustomKeyMatchCommand_PlayerGodMode, bGodMode) == 224, "Offset mismatch for UCustomKeyMatchCommand_PlayerGodMode::bGodMode");

// /Script/CustomKeyMatchCommandsRuntime.CustomKeyMatchCommand_PlayerKick
// Kind: Class; super: CustomKeyMatchCommand_Base
class UCustomKeyMatchCommand_PlayerKick
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

static_assert(offsetof(UCustomKeyMatchCommand_PlayerKick, CommandName) == 40, "Offset mismatch for UCustomKeyMatchCommand_PlayerKick::CommandName");
static_assert(offsetof(UCustomKeyMatchCommand_PlayerKick, CommandDisplayName) == 56, "Offset mismatch for UCustomKeyMatchCommand_PlayerKick::CommandDisplayName");
static_assert(offsetof(UCustomKeyMatchCommand_PlayerKick, bIsInternalOnly) == 72, "Offset mismatch for UCustomKeyMatchCommand_PlayerKick::bIsInternalOnly");
static_assert(offsetof(UCustomKeyMatchCommand_PlayerKick, bRequiresActiveMinigame) == 73, "Offset mismatch for UCustomKeyMatchCommand_PlayerKick::bRequiresActiveMinigame");
static_assert(offsetof(UCustomKeyMatchCommand_PlayerKick, UserInterface) == 80, "Offset mismatch for UCustomKeyMatchCommand_PlayerKick::UserInterface");
static_assert(offsetof(UCustomKeyMatchCommand_PlayerKick, WeakPlayerController) == 104, "Offset mismatch for UCustomKeyMatchCommand_PlayerKick::WeakPlayerController");
static_assert(offsetof(UCustomKeyMatchCommand_PlayerKick, TargetPlayerId) == 112, "Offset mismatch for UCustomKeyMatchCommand_PlayerKick::TargetPlayerId");
static_assert(offsetof(UCustomKeyMatchCommand_PlayerKick, CommandState) == 144, "Offset mismatch for UCustomKeyMatchCommand_PlayerKick::CommandState");

// /Script/CustomKeyMatchCommandsRuntime.CustomKeyMatchCommand_PlayerSetShield
// Kind: Class; super: CustomKeyMatchCommand_Base
class UCustomKeyMatchCommand_PlayerSetShield
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t Shield; // 0x00E0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UCustomKeyMatchCommand_PlayerSetShield, Shield) == 224, "Offset mismatch for UCustomKeyMatchCommand_PlayerSetShield::Shield");

// /Script/CustomKeyMatchCommandsRuntime.CustomKeyMatchCommand_SetHealth
// Kind: Class; super: CustomKeyMatchCommand_Base
class UCustomKeyMatchCommand_SetHealth
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t Health; // 0x00E0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UCustomKeyMatchCommand_SetHealth, Health) == 224, "Offset mismatch for UCustomKeyMatchCommand_SetHealth::Health");

// /Script/CustomKeyMatchCommandsRuntime.CustomKeyMatchCommand_StormPause
// Kind: Class; super: CustomKeyMatchCommand_Base
class UCustomKeyMatchCommand_StormPause
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t bPaused; // 0x00E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCustomKeyMatchCommand_StormPause, bPaused) == 224, "Offset mismatch for UCustomKeyMatchCommand_StormPause::bPaused");

// /Script/CustomKeyMatchCommandsRuntime.CustomKeyMatchCommand_StormRadius
// Kind: Class; super: CustomKeyMatchCommand_Base
class UCustomKeyMatchCommand_StormRadius
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t StormRadiusInMeters; // 0x00E0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UCustomKeyMatchCommand_StormRadius, StormRadiusInMeters) == 224, "Offset mismatch for UCustomKeyMatchCommand_StormRadius::StormRadiusInMeters");

// /Script/CustomKeyMatchCommandsRuntime.CustomKeyMatchCommand_StormSpeed
// Kind: Class; super: CustomKeyMatchCommand_Base
class UCustomKeyMatchCommand_StormSpeed
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float StormSpeed; // 0x00E0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCustomKeyMatchCommand_StormSpeed, StormSpeed) == 224, "Offset mismatch for UCustomKeyMatchCommand_StormSpeed::StormSpeed");

// /Script/CustomKeyMatchCommandsRuntime.CustomKeyMatchCommand_StormWaitTime
// Kind: Class; super: CustomKeyMatchCommand_Base
class UCustomKeyMatchCommand_StormWaitTime
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::int32_t StormWaitTime; // 0x00E0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UCustomKeyMatchCommand_StormWaitTime, StormWaitTime) == 224, "Offset mismatch for UCustomKeyMatchCommand_StormWaitTime::StormWaitTime");

// /Script/CustomKeyMatchCommandsRuntime.CustomKeyMatchCommand_TimeOfDay
// Kind: Class; super: CustomKeyMatchCommand_Base
class UCustomKeyMatchCommand_TimeOfDay
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float TimeOfDay; // 0x00E0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCustomKeyMatchCommand_TimeOfDay, TimeOfDay) == 224, "Offset mismatch for UCustomKeyMatchCommand_TimeOfDay::TimeOfDay");

// /Script/CustomKeyMatchCommandsRuntime.CustomKeyMatchCommand_TimeOfDaySpeed
// Kind: Class; super: CustomKeyMatchCommand_Base
class UCustomKeyMatchCommand_TimeOfDaySpeed
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    float TimeOfDaySpeed; // 0x00E0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCustomKeyMatchCommand_TimeOfDaySpeed, TimeOfDaySpeed) == 224, "Offset mismatch for UCustomKeyMatchCommand_TimeOfDaySpeed::TimeOfDaySpeed");

// /Script/CustomKeyMatchCommandsRuntime.FortComponent_CustomKeyMatch
// Kind: Class; super: GameStateComponent
class UFortComponent_CustomKeyMatch
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

static_assert(offsetof(UFortComponent_CustomKeyMatch, PrimaryComponentTick) == 56, "Offset mismatch for UFortComponent_CustomKeyMatch::PrimaryComponentTick");
static_assert(offsetof(UFortComponent_CustomKeyMatch, ComponentTags) == 104, "Offset mismatch for UFortComponent_CustomKeyMatch::ComponentTags");
static_assert(offsetof(UFortComponent_CustomKeyMatch, AssetUserData) == 120, "Offset mismatch for UFortComponent_CustomKeyMatch::AssetUserData");
static_assert(offsetof(UFortComponent_CustomKeyMatch, UCSSerializationIndex) == 144, "Offset mismatch for UFortComponent_CustomKeyMatch::UCSSerializationIndex");
static_assert(offsetof(UFortComponent_CustomKeyMatch, bNetAddressable) == 152, "Offset mismatch for UFortComponent_CustomKeyMatch::bNetAddressable");
static_assert(offsetof(UFortComponent_CustomKeyMatch, bAutoActivate) == 154, "Offset mismatch for UFortComponent_CustomKeyMatch::bAutoActivate");
static_assert(offsetof(UFortComponent_CustomKeyMatch, bIsEditorOnly) == 155, "Offset mismatch for UFortComponent_CustomKeyMatch::bIsEditorOnly");
static_assert(offsetof(UFortComponent_CustomKeyMatch, CreationMethod) == 185, "Offset mismatch for UFortComponent_CustomKeyMatch::CreationMethod");
static_assert(offsetof(UFortComponent_CustomKeyMatch, OnComponentActivated) == 186, "Offset mismatch for UFortComponent_CustomKeyMatch::OnComponentActivated");
static_assert(offsetof(UFortComponent_CustomKeyMatch, OnComponentDeactivated) == 187, "Offset mismatch for UFortComponent_CustomKeyMatch::OnComponentDeactivated");
