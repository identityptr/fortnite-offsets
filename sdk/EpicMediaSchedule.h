/**
 * decamp dumper generated SDK
 * Package: /Script/EpicMediaSchedule
 */
#pragma once
#include "Basic.h"

// /Script/EpicMediaSchedule.EpicMediaScheduleScheduleEntryAbsolute
// Kind: ScriptStruct; super: none
struct FEpicMediaScheduleScheduleEntryAbsolute
{
public:
    FString IsoStartTime; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString VUID; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int32_t DurationSeconds; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    void* Sequence; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEpicMediaScheduleScheduleEntryAbsolute, IsoStartTime) == 0, "Offset mismatch for FEpicMediaScheduleScheduleEntryAbsolute::IsoStartTime");
static_assert(offsetof(FEpicMediaScheduleScheduleEntryAbsolute, VUID) == 16, "Offset mismatch for FEpicMediaScheduleScheduleEntryAbsolute::VUID");
static_assert(offsetof(FEpicMediaScheduleScheduleEntryAbsolute, DurationSeconds) == 32, "Offset mismatch for FEpicMediaScheduleScheduleEntryAbsolute::DurationSeconds");
static_assert(offsetof(FEpicMediaScheduleScheduleEntryAbsolute, Sequence) == 40, "Offset mismatch for FEpicMediaScheduleScheduleEntryAbsolute::Sequence");

// /Script/EpicMediaSchedule.EpicMediaScheduleScheduleEntryDaily
// Kind: ScriptStruct; super: none
struct FEpicMediaScheduleScheduleEntryDaily
{
public:
    std::int32_t Hours; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Minutes; // 0x0004 (Size: 0x4, Type: IntProperty)
    FString VUID; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::int32_t DurationSeconds; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    void* Sequence; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEpicMediaScheduleScheduleEntryDaily, Hours) == 0, "Offset mismatch for FEpicMediaScheduleScheduleEntryDaily::Hours");
static_assert(offsetof(FEpicMediaScheduleScheduleEntryDaily, Minutes) == 4, "Offset mismatch for FEpicMediaScheduleScheduleEntryDaily::Minutes");
static_assert(offsetof(FEpicMediaScheduleScheduleEntryDaily, VUID) == 8, "Offset mismatch for FEpicMediaScheduleScheduleEntryDaily::VUID");
static_assert(offsetof(FEpicMediaScheduleScheduleEntryDaily, DurationSeconds) == 24, "Offset mismatch for FEpicMediaScheduleScheduleEntryDaily::DurationSeconds");
static_assert(offsetof(FEpicMediaScheduleScheduleEntryDaily, Sequence) == 32, "Offset mismatch for FEpicMediaScheduleScheduleEntryDaily::Sequence");

// /Script/EpicMediaSchedule.EpicMediaScheduleScheduleEntryHourly
// Kind: ScriptStruct; super: none
struct FEpicMediaScheduleScheduleEntryHourly
{
public:
    std::int32_t Minutes; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    FString VUID; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::int32_t DurationSeconds; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    void* Sequence; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEpicMediaScheduleScheduleEntryHourly, Minutes) == 0, "Offset mismatch for FEpicMediaScheduleScheduleEntryHourly::Minutes");
static_assert(offsetof(FEpicMediaScheduleScheduleEntryHourly, VUID) == 8, "Offset mismatch for FEpicMediaScheduleScheduleEntryHourly::VUID");
static_assert(offsetof(FEpicMediaScheduleScheduleEntryHourly, DurationSeconds) == 24, "Offset mismatch for FEpicMediaScheduleScheduleEntryHourly::DurationSeconds");
static_assert(offsetof(FEpicMediaScheduleScheduleEntryHourly, Sequence) == 32, "Offset mismatch for FEpicMediaScheduleScheduleEntryHourly::Sequence");

// /Script/EpicMediaSchedule.EpicMediaScheduleScheduleInfo
// Kind: ScriptStruct; super: none
struct FEpicMediaScheduleScheduleInfo
{
public:
    std::uint8_t StartTime[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t RelativeStartTime[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    FString VUID; // 0x0010 (Size: 0x10, Type: StrProperty)
    void* Sequence; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEpicMediaScheduleScheduleInfo, StartTime) == 0, "Offset mismatch for FEpicMediaScheduleScheduleInfo::StartTime");
static_assert(offsetof(FEpicMediaScheduleScheduleInfo, RelativeStartTime) == 8, "Offset mismatch for FEpicMediaScheduleScheduleInfo::RelativeStartTime");
static_assert(offsetof(FEpicMediaScheduleScheduleInfo, VUID) == 16, "Offset mismatch for FEpicMediaScheduleScheduleInfo::VUID");
static_assert(offsetof(FEpicMediaScheduleScheduleInfo, Sequence) == 32, "Offset mismatch for FEpicMediaScheduleScheduleInfo::Sequence");

// /Script/EpicMediaSchedule.EpicMediaSchedule
// Kind: Class; super: ActorComponent
class UEpicMediaSchedule
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

static_assert(offsetof(UEpicMediaSchedule, PrimaryComponentTick) == 56, "Offset mismatch for UEpicMediaSchedule::PrimaryComponentTick");
static_assert(offsetof(UEpicMediaSchedule, ComponentTags) == 104, "Offset mismatch for UEpicMediaSchedule::ComponentTags");
static_assert(offsetof(UEpicMediaSchedule, AssetUserData) == 120, "Offset mismatch for UEpicMediaSchedule::AssetUserData");
static_assert(offsetof(UEpicMediaSchedule, UCSSerializationIndex) == 144, "Offset mismatch for UEpicMediaSchedule::UCSSerializationIndex");
static_assert(offsetof(UEpicMediaSchedule, bNetAddressable) == 152, "Offset mismatch for UEpicMediaSchedule::bNetAddressable");
static_assert(offsetof(UEpicMediaSchedule, bAutoActivate) == 154, "Offset mismatch for UEpicMediaSchedule::bAutoActivate");
static_assert(offsetof(UEpicMediaSchedule, bIsEditorOnly) == 155, "Offset mismatch for UEpicMediaSchedule::bIsEditorOnly");
static_assert(offsetof(UEpicMediaSchedule, CreationMethod) == 185, "Offset mismatch for UEpicMediaSchedule::CreationMethod");
static_assert(offsetof(UEpicMediaSchedule, OnComponentActivated) == 186, "Offset mismatch for UEpicMediaSchedule::OnComponentActivated");
static_assert(offsetof(UEpicMediaSchedule, OnComponentDeactivated) == 187, "Offset mismatch for UEpicMediaSchedule::OnComponentDeactivated");
