/**
 * decamp dumper generated SDK
 * Package: /Script/ScheduledEvents
 */
#pragma once
#include "Basic.h"

// /Script/ScheduledEvents.CalendarDownload
// Kind: ScriptStruct; super: none
struct FCalendarDownload
{
public:
    std::uint8_t CurrentTime[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    double CacheIntervalMins; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    TMap<void*, void*> Channels; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FCalendarDownload, CurrentTime) == 0, "Offset mismatch for FCalendarDownload::CurrentTime");
static_assert(offsetof(FCalendarDownload, CacheIntervalMins) == 8, "Offset mismatch for FCalendarDownload::CacheIntervalMins");
static_assert(offsetof(FCalendarDownload, Channels) == 16, "Offset mismatch for FCalendarDownload::Channels");

// /Script/ScheduledEvents.EventChannelState
// Kind: ScriptStruct; super: none
struct FEventChannelState
{
public:
    std::uint8_t ValidFrom[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> ActiveEvents; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t State[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEventChannelState, ValidFrom) == 0, "Offset mismatch for FEventChannelState::ValidFrom");
static_assert(offsetof(FEventChannelState, ActiveEvents) == 8, "Offset mismatch for FEventChannelState::ActiveEvents");
static_assert(offsetof(FEventChannelState, State) == 24, "Offset mismatch for FEventChannelState::State");

// /Script/ScheduledEvents.EventRecord
// Kind: ScriptStruct; super: none
struct FEventRecord
{
public:
    FString EventType; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t ActiveUntil[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t ActiveSince[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEventRecord, EventType) == 0, "Offset mismatch for FEventRecord::EventType");
static_assert(offsetof(FEventRecord, ActiveUntil) == 16, "Offset mismatch for FEventRecord::ActiveUntil");
static_assert(offsetof(FEventRecord, ActiveSince) == 24, "Offset mismatch for FEventRecord::ActiveSince");

// /Script/ScheduledEvents.EventsTimeline
// Kind: ScriptStruct; super: none
struct FEventsTimeline
{
public:
    std::uint8_t CacheExpire[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> States; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FEventsTimeline, CacheExpire) == 0, "Offset mismatch for FEventsTimeline::CacheExpire");
static_assert(offsetof(FEventsTimeline, States) == 8, "Offset mismatch for FEventsTimeline::States");
