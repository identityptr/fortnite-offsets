/**
 * decamp dumper generated SDK
 * Package: /Script/StaminaGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /Script/StaminaGameplayRuntime.StaminaCapsuleAnalytics
// Kind: ScriptStruct; super: none
struct FStaminaCapsuleAnalytics
{
public:
    float LandTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t Location[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    FString PlayerID; // 0x0020 (Size: 0x10, Type: StrProperty)
    float OpenTime; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FStaminaCapsuleAnalytics, LandTime) == 0, "Offset mismatch for FStaminaCapsuleAnalytics::LandTime");
static_assert(offsetof(FStaminaCapsuleAnalytics, Location) == 8, "Offset mismatch for FStaminaCapsuleAnalytics::Location");
static_assert(offsetof(FStaminaCapsuleAnalytics, PlayerID) == 32, "Offset mismatch for FStaminaCapsuleAnalytics::PlayerID");
static_assert(offsetof(FStaminaCapsuleAnalytics, OpenTime) == 48, "Offset mismatch for FStaminaCapsuleAnalytics::OpenTime");

// /Script/StaminaGameplayRuntime.FortCheatManager_StaminaGameplay
// Kind: Class; super: ChildCheatManager
class UFortCheatManager_StaminaGameplay
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SpawnManagerTag[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    FName SpawnFunctionName; // 0x002C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFortCheatManager_StaminaGameplay, SpawnManagerTag) == 40, "Offset mismatch for UFortCheatManager_StaminaGameplay::SpawnManagerTag");
static_assert(offsetof(UFortCheatManager_StaminaGameplay, SpawnFunctionName) == 44, "Offset mismatch for UFortCheatManager_StaminaGameplay::SpawnFunctionName");

// /Script/StaminaGameplayRuntime.StaminaAnalytics
// Kind: Class; super: GameStateComponent
class UStaminaAnalytics
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

static_assert(offsetof(UStaminaAnalytics, PrimaryComponentTick) == 56, "Offset mismatch for UStaminaAnalytics::PrimaryComponentTick");
static_assert(offsetof(UStaminaAnalytics, ComponentTags) == 104, "Offset mismatch for UStaminaAnalytics::ComponentTags");
static_assert(offsetof(UStaminaAnalytics, AssetUserData) == 120, "Offset mismatch for UStaminaAnalytics::AssetUserData");
static_assert(offsetof(UStaminaAnalytics, UCSSerializationIndex) == 144, "Offset mismatch for UStaminaAnalytics::UCSSerializationIndex");
static_assert(offsetof(UStaminaAnalytics, bNetAddressable) == 152, "Offset mismatch for UStaminaAnalytics::bNetAddressable");
static_assert(offsetof(UStaminaAnalytics, bAutoActivate) == 154, "Offset mismatch for UStaminaAnalytics::bAutoActivate");
static_assert(offsetof(UStaminaAnalytics, bIsEditorOnly) == 155, "Offset mismatch for UStaminaAnalytics::bIsEditorOnly");
static_assert(offsetof(UStaminaAnalytics, CreationMethod) == 185, "Offset mismatch for UStaminaAnalytics::CreationMethod");
static_assert(offsetof(UStaminaAnalytics, OnComponentActivated) == 186, "Offset mismatch for UStaminaAnalytics::OnComponentActivated");
static_assert(offsetof(UStaminaAnalytics, OnComponentDeactivated) == 187, "Offset mismatch for UStaminaAnalytics::OnComponentDeactivated");

// /Script/StaminaGameplayRuntime.StaminaFunctionLibraryNative
// Kind: Class; super: BlueprintFunctionLibrary
class UStaminaFunctionLibraryNative
{
public:
    std::uint8_t Opaque[1];
};
