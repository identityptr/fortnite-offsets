/**
 * decamp dumper generated SDK
 * Package: /Script/CRD_VideoSchedule
 */
#pragma once
#include "Basic.h"

// /Script/CRD_VideoSchedule.VideoScheduleDeviceEntryAbsolute
// Kind: ScriptStruct; super: none
struct FVideoScheduleDeviceEntryAbsolute
{
public:
    FString IsoStartTime; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString VUID; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int32_t DurationSeconds; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    void* Sequence; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVideoScheduleDeviceEntryAbsolute, IsoStartTime) == 0, "Offset mismatch for FVideoScheduleDeviceEntryAbsolute::IsoStartTime");
static_assert(offsetof(FVideoScheduleDeviceEntryAbsolute, VUID) == 16, "Offset mismatch for FVideoScheduleDeviceEntryAbsolute::VUID");
static_assert(offsetof(FVideoScheduleDeviceEntryAbsolute, DurationSeconds) == 32, "Offset mismatch for FVideoScheduleDeviceEntryAbsolute::DurationSeconds");
static_assert(offsetof(FVideoScheduleDeviceEntryAbsolute, Sequence) == 40, "Offset mismatch for FVideoScheduleDeviceEntryAbsolute::Sequence");

// /Script/CRD_VideoSchedule.VideoScheduleDeviceEntryDaily
// Kind: ScriptStruct; super: none
struct FVideoScheduleDeviceEntryDaily
{
public:
    std::int32_t Hours; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Minutes; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t Seconds; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    FString VUID; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int32_t DurationSeconds; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0024
    void* Sequence; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVideoScheduleDeviceEntryDaily, Hours) == 0, "Offset mismatch for FVideoScheduleDeviceEntryDaily::Hours");
static_assert(offsetof(FVideoScheduleDeviceEntryDaily, Minutes) == 4, "Offset mismatch for FVideoScheduleDeviceEntryDaily::Minutes");
static_assert(offsetof(FVideoScheduleDeviceEntryDaily, Seconds) == 8, "Offset mismatch for FVideoScheduleDeviceEntryDaily::Seconds");
static_assert(offsetof(FVideoScheduleDeviceEntryDaily, VUID) == 16, "Offset mismatch for FVideoScheduleDeviceEntryDaily::VUID");
static_assert(offsetof(FVideoScheduleDeviceEntryDaily, DurationSeconds) == 32, "Offset mismatch for FVideoScheduleDeviceEntryDaily::DurationSeconds");
static_assert(offsetof(FVideoScheduleDeviceEntryDaily, Sequence) == 40, "Offset mismatch for FVideoScheduleDeviceEntryDaily::Sequence");

// /Script/CRD_VideoSchedule.VideoScheduleDeviceEntryHourly
// Kind: ScriptStruct; super: none
struct FVideoScheduleDeviceEntryHourly
{
public:
    std::int32_t Minutes; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Seconds; // 0x0004 (Size: 0x4, Type: IntProperty)
    FString VUID; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::int32_t DurationSeconds; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    void* Sequence; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVideoScheduleDeviceEntryHourly, Minutes) == 0, "Offset mismatch for FVideoScheduleDeviceEntryHourly::Minutes");
static_assert(offsetof(FVideoScheduleDeviceEntryHourly, Seconds) == 4, "Offset mismatch for FVideoScheduleDeviceEntryHourly::Seconds");
static_assert(offsetof(FVideoScheduleDeviceEntryHourly, VUID) == 8, "Offset mismatch for FVideoScheduleDeviceEntryHourly::VUID");
static_assert(offsetof(FVideoScheduleDeviceEntryHourly, DurationSeconds) == 24, "Offset mismatch for FVideoScheduleDeviceEntryHourly::DurationSeconds");
static_assert(offsetof(FVideoScheduleDeviceEntryHourly, Sequence) == 32, "Offset mismatch for FVideoScheduleDeviceEntryHourly::Sequence");

// /Script/CRD_VideoSchedule.VideoScheduleDeviceScheduleInfo
// Kind: ScriptStruct; super: none
struct FVideoScheduleDeviceScheduleInfo
{
public:
    std::uint8_t StartTime[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t RelativeStartTime[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    FString VUID; // 0x0010 (Size: 0x10, Type: StrProperty)
    void* Sequence; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVideoScheduleDeviceScheduleInfo, StartTime) == 0, "Offset mismatch for FVideoScheduleDeviceScheduleInfo::StartTime");
static_assert(offsetof(FVideoScheduleDeviceScheduleInfo, RelativeStartTime) == 8, "Offset mismatch for FVideoScheduleDeviceScheduleInfo::RelativeStartTime");
static_assert(offsetof(FVideoScheduleDeviceScheduleInfo, VUID) == 16, "Offset mismatch for FVideoScheduleDeviceScheduleInfo::VUID");
static_assert(offsetof(FVideoScheduleDeviceScheduleInfo, Sequence) == 32, "Offset mismatch for FVideoScheduleDeviceScheduleInfo::Sequence");

// /Script/CRD_VideoSchedule.VideoScheduleDeviceBase
// Kind: Class; super: BuildingProp
class UVideoScheduleDeviceBase
{
public:
    std::uint8_t Pad_0000[0xB60]; // 0x0000
    std::uint8_t RepeatSchedule; // 0x0B60 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0B61
    TArray<void*> AbsoluteSchedule; // 0x0B68 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DailySchedule; // 0x0B78 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HourlySchedule; // 0x0B88 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bFillSchedule; // 0x0B98 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0B99
    std::int32_t FillScheduleGap; // 0x0B9C (Size: 0x4, Type: IntProperty)
    std::int32_t FillScheduleAlign; // 0x0BA0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0BA4
    FString SimpleSchedule; // 0x0BA8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UVideoScheduleDeviceBase, RepeatSchedule) == 2912, "Offset mismatch for UVideoScheduleDeviceBase::RepeatSchedule");
static_assert(offsetof(UVideoScheduleDeviceBase, AbsoluteSchedule) == 2920, "Offset mismatch for UVideoScheduleDeviceBase::AbsoluteSchedule");
static_assert(offsetof(UVideoScheduleDeviceBase, DailySchedule) == 2936, "Offset mismatch for UVideoScheduleDeviceBase::DailySchedule");
static_assert(offsetof(UVideoScheduleDeviceBase, HourlySchedule) == 2952, "Offset mismatch for UVideoScheduleDeviceBase::HourlySchedule");
static_assert(offsetof(UVideoScheduleDeviceBase, bFillSchedule) == 2968, "Offset mismatch for UVideoScheduleDeviceBase::bFillSchedule");
static_assert(offsetof(UVideoScheduleDeviceBase, FillScheduleGap) == 2972, "Offset mismatch for UVideoScheduleDeviceBase::FillScheduleGap");
static_assert(offsetof(UVideoScheduleDeviceBase, FillScheduleAlign) == 2976, "Offset mismatch for UVideoScheduleDeviceBase::FillScheduleAlign");
static_assert(offsetof(UVideoScheduleDeviceBase, SimpleSchedule) == 2984, "Offset mismatch for UVideoScheduleDeviceBase::SimpleSchedule");
