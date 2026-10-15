/**
 * decamp dumper generated SDK
 * Package: /Script/NiceSharkTakeoverRuntime
 */
#pragma once
#include "Basic.h"

// /Script/NiceSharkTakeoverRuntime.NiceSharkTakeoverData
// Kind: ScriptStruct; super: none
struct FNiceSharkTakeoverData
{
public:
    std::uint8_t bIsStarted; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsActive; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0002
    double ActivationServerTimeSeconds; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    double EndServerTimeSeconds; // 0x0010 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FNiceSharkTakeoverData, bIsStarted) == 0, "Offset mismatch for FNiceSharkTakeoverData::bIsStarted");
static_assert(offsetof(FNiceSharkTakeoverData, bIsActive) == 1, "Offset mismatch for FNiceSharkTakeoverData::bIsActive");
static_assert(offsetof(FNiceSharkTakeoverData, ActivationServerTimeSeconds) == 8, "Offset mismatch for FNiceSharkTakeoverData::ActivationServerTimeSeconds");
static_assert(offsetof(FNiceSharkTakeoverData, EndServerTimeSeconds) == 16, "Offset mismatch for FNiceSharkTakeoverData::EndServerTimeSeconds");

// /Script/NiceSharkTakeoverRuntime.FortAthenaMutator_NiceSharkTakeover
// Kind: Class; super: FortAthenaMutator_SpecialRelevancy
class UFortAthenaMutator_NiceSharkTakeover
{
public:
    std::uint8_t Pad_0000[0x488]; // 0x0000
    std::uint8_t VideoTakeoverSchedule[0x18]; // 0x0488 (Size: 0x18, Type: StructProperty)
    float DelayAfterSafeZoneSeconds; // 0x04A0 (Size: 0x4, Type: FloatProperty)
    float TakeoverBufferSeconds; // 0x04A4 (Size: 0x4, Type: FloatProperty)
    float TakeoverTimeoutSeconds; // 0x04A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x04AC
    FString CalendarEventName; // 0x04B0 (Size: 0x10, Type: StrProperty)
    void* CalendarWatcher; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaMutator_NiceSharkTakeover, VideoTakeoverSchedule) == 1160, "Offset mismatch for UFortAthenaMutator_NiceSharkTakeover::VideoTakeoverSchedule");
static_assert(offsetof(UFortAthenaMutator_NiceSharkTakeover, DelayAfterSafeZoneSeconds) == 1184, "Offset mismatch for UFortAthenaMutator_NiceSharkTakeover::DelayAfterSafeZoneSeconds");
static_assert(offsetof(UFortAthenaMutator_NiceSharkTakeover, TakeoverBufferSeconds) == 1188, "Offset mismatch for UFortAthenaMutator_NiceSharkTakeover::TakeoverBufferSeconds");
static_assert(offsetof(UFortAthenaMutator_NiceSharkTakeover, TakeoverTimeoutSeconds) == 1192, "Offset mismatch for UFortAthenaMutator_NiceSharkTakeover::TakeoverTimeoutSeconds");
static_assert(offsetof(UFortAthenaMutator_NiceSharkTakeover, CalendarEventName) == 1200, "Offset mismatch for UFortAthenaMutator_NiceSharkTakeover::CalendarEventName");
static_assert(offsetof(UFortAthenaMutator_NiceSharkTakeover, CalendarWatcher) == 1216, "Offset mismatch for UFortAthenaMutator_NiceSharkTakeover::CalendarWatcher");

// /Script/NiceSharkTakeoverRuntime.FortControllerComponent_NiceSharkTakeoverNetwork
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_NiceSharkTakeoverNetwork
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

static_assert(offsetof(UFortControllerComponent_NiceSharkTakeoverNetwork, PrimaryComponentTick) == 56, "Offset mismatch for UFortControllerComponent_NiceSharkTakeoverNetwork::PrimaryComponentTick");
static_assert(offsetof(UFortControllerComponent_NiceSharkTakeoverNetwork, ComponentTags) == 104, "Offset mismatch for UFortControllerComponent_NiceSharkTakeoverNetwork::ComponentTags");
static_assert(offsetof(UFortControllerComponent_NiceSharkTakeoverNetwork, AssetUserData) == 120, "Offset mismatch for UFortControllerComponent_NiceSharkTakeoverNetwork::AssetUserData");
static_assert(offsetof(UFortControllerComponent_NiceSharkTakeoverNetwork, UCSSerializationIndex) == 144, "Offset mismatch for UFortControllerComponent_NiceSharkTakeoverNetwork::UCSSerializationIndex");
static_assert(offsetof(UFortControllerComponent_NiceSharkTakeoverNetwork, bNetAddressable) == 152, "Offset mismatch for UFortControllerComponent_NiceSharkTakeoverNetwork::bNetAddressable");
static_assert(offsetof(UFortControllerComponent_NiceSharkTakeoverNetwork, bAutoActivate) == 154, "Offset mismatch for UFortControllerComponent_NiceSharkTakeoverNetwork::bAutoActivate");
static_assert(offsetof(UFortControllerComponent_NiceSharkTakeoverNetwork, bIsEditorOnly) == 155, "Offset mismatch for UFortControllerComponent_NiceSharkTakeoverNetwork::bIsEditorOnly");
static_assert(offsetof(UFortControllerComponent_NiceSharkTakeoverNetwork, CreationMethod) == 185, "Offset mismatch for UFortControllerComponent_NiceSharkTakeoverNetwork::CreationMethod");
static_assert(offsetof(UFortControllerComponent_NiceSharkTakeoverNetwork, OnComponentActivated) == 186, "Offset mismatch for UFortControllerComponent_NiceSharkTakeoverNetwork::OnComponentActivated");
static_assert(offsetof(UFortControllerComponent_NiceSharkTakeoverNetwork, OnComponentDeactivated) == 187, "Offset mismatch for UFortControllerComponent_NiceSharkTakeoverNetwork::OnComponentDeactivated");

// /Script/NiceSharkTakeoverRuntime.NiceSharkTakeoverCheatManager
// Kind: Class; super: ChildCheatManager
class UNiceSharkTakeoverCheatManager
{
public:
    std::uint8_t Opaque[1];
};
