/**
 * decamp dumper generated SDK
 * Package: /Script/SparksMidiParser
 */
#pragma once
#include "Basic.h"

// /Script/SparksMidiParser.MidiEventListenerHandle
// Kind: ScriptStruct; super: none
struct FMidiEventListenerHandle
{
public:
    std::uint64_t ID; // 0x0000 (Size: 0x8, Type: UInt64Property)
    TWeakObjectPtr<void> WeakDriver; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FMidiEventListenerHandle, ID) == 0, "Offset mismatch for FMidiEventListenerHandle::ID");
static_assert(offsetof(FMidiEventListenerHandle, WeakDriver) == 8, "Offset mismatch for FMidiEventListenerHandle::WeakDriver");

// /Script/SparksMidiParser.MidiEventListenerParams
// Kind: ScriptStruct; super: none
struct FMidiEventListenerParams
{
public:
    std::uint8_t TrackName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t InitBroadcast; // 0x0004 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMidiEventListenerParams, TrackName) == 0, "Offset mismatch for FMidiEventListenerParams::TrackName");
static_assert(offsetof(FMidiEventListenerParams, InitBroadcast) == 4, "Offset mismatch for FMidiEventListenerParams::InitBroadcast");

// /Script/SparksMidiParser.MidiNoteEventList
// Kind: ScriptStruct; super: none
struct FMidiNoteEventList
{
public:
    TArray<void*> Events; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMidiNoteEventList, Events) == 0, "Offset mismatch for FMidiNoteEventList::Events");

// /Script/SparksMidiParser.MidiNoteEventListenerParams
// Kind: ScriptStruct; super: MidiEventListenerParams
struct FMidiNoteEventListenerParams
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> EventNotes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    float SecondsBeforeStartTick; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float SecondsBeforeEndTick; // 0x001C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMidiNoteEventListenerParams, EventNotes) == 8, "Offset mismatch for FMidiNoteEventListenerParams::EventNotes");
static_assert(offsetof(FMidiNoteEventListenerParams, SecondsBeforeStartTick) == 24, "Offset mismatch for FMidiNoteEventListenerParams::SecondsBeforeStartTick");
static_assert(offsetof(FMidiNoteEventListenerParams, SecondsBeforeEndTick) == 28, "Offset mismatch for FMidiNoteEventListenerParams::SecondsBeforeEndTick");

// /Script/SparksMidiParser.MidiNoteEvent_DelayPool
// Kind: ScriptStruct; super: none
struct FMidiNoteEvent_DelayPool
{
public:
    std::uint8_t ID[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float MaxSecondsBefore; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinSecondsBefore; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMidiNoteEvent_DelayPool, ID) == 0, "Offset mismatch for FMidiNoteEvent_DelayPool::ID");
static_assert(offsetof(FMidiNoteEvent_DelayPool, MaxSecondsBefore) == 4, "Offset mismatch for FMidiNoteEvent_DelayPool::MaxSecondsBefore");
static_assert(offsetof(FMidiNoteEvent_DelayPool, MinSecondsBefore) == 8, "Offset mismatch for FMidiNoteEvent_DelayPool::MinSecondsBefore");

// /Script/SparksMidiParser.MidiNotePoolEventListenerParams
// Kind: ScriptStruct; super: MidiEventListenerParams
struct FMidiNotePoolEventListenerParams
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> EventNotes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WatchNotes; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DelayPools; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMidiNotePoolEventListenerParams, EventNotes) == 8, "Offset mismatch for FMidiNotePoolEventListenerParams::EventNotes");
static_assert(offsetof(FMidiNotePoolEventListenerParams, WatchNotes) == 24, "Offset mismatch for FMidiNotePoolEventListenerParams::WatchNotes");
static_assert(offsetof(FMidiNotePoolEventListenerParams, DelayPools) == 40, "Offset mismatch for FMidiNotePoolEventListenerParams::DelayPools");

// /Script/SparksMidiParser.MidiPlaybackState
// Kind: ScriptStruct; super: none
struct FMidiPlaybackState
{
public:
    std::int32_t CurrentTimeTick; // 0x0000 (Size: 0x4, Type: IntProperty)
    float CurrentTimeSeconds; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsPlaybackEnded; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMidiPlaybackState, CurrentTimeTick) == 0, "Offset mismatch for FMidiPlaybackState::CurrentTimeTick");
static_assert(offsetof(FMidiPlaybackState, CurrentTimeSeconds) == 4, "Offset mismatch for FMidiPlaybackState::CurrentTimeSeconds");
static_assert(offsetof(FMidiPlaybackState, bIsPlaybackEnded) == 8, "Offset mismatch for FMidiPlaybackState::bIsPlaybackEnded");

// /Script/SparksMidiParser.MidiTextEventList
// Kind: ScriptStruct; super: none
struct FMidiTextEventList
{
public:
    TArray<void*> Events; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMidiTextEventList, Events) == 0, "Offset mismatch for FMidiTextEventList::Events");

// /Script/SparksMidiParser.MidiTextEventListenerParams
// Kind: ScriptStruct; super: MidiEventListenerParams
struct FMidiTextEventListenerParams
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> EventStrings; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    float SecondsBeforeStartTick; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMidiTextEventListenerParams, EventStrings) == 8, "Offset mismatch for FMidiTextEventListenerParams::EventStrings");
static_assert(offsetof(FMidiTextEventListenerParams, SecondsBeforeStartTick) == 24, "Offset mismatch for FMidiTextEventListenerParams::SecondsBeforeStartTick");

// /Script/SparksMidiParser.ParsedMidiEventBase
// Kind: ScriptStruct; super: none
struct FParsedMidiEventBase
{
public:
    std::int32_t AtMidiTick; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t EndsAtMidiTick; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FParsedMidiEventBase, AtMidiTick) == 0, "Offset mismatch for FParsedMidiEventBase::AtMidiTick");
static_assert(offsetof(FParsedMidiEventBase, EndsAtMidiTick) == 4, "Offset mismatch for FParsedMidiEventBase::EndsAtMidiTick");

// /Script/SparksMidiParser.ParsedMidiNoteEvent
// Kind: ScriptStruct; super: ParsedMidiEventBase
struct FParsedMidiNoteEvent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t EventNote; // 0x0008 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FParsedMidiNoteEvent, EventNote) == 8, "Offset mismatch for FParsedMidiNoteEvent::EventNote");

// /Script/SparksMidiParser.ParsedMidiTextEvent
// Kind: ScriptStruct; super: ParsedMidiEventBase
struct FParsedMidiTextEvent
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FString EventString; // 0x0008 (Size: 0x10, Type: StrProperty)
    TArray<void*> EventPayload; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FParsedMidiTextEvent, EventString) == 8, "Offset mismatch for FParsedMidiTextEvent::EventString");
static_assert(offsetof(FParsedMidiTextEvent, EventPayload) == 24, "Offset mismatch for FParsedMidiTextEvent::EventPayload");

// /Script/SparksMidiParser.ActorComponent_MidiEventDataManager
// Kind: Class; super: ActorComponent
class UActorComponent_MidiEventDataManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnMidiEventDriverChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x00D0
    FMulticastInlineDelegate OnMidiEventDataParsed; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UActorComponent_MidiEventDataManager, OnMidiEventDriverChanged) == 192, "Offset mismatch for UActorComponent_MidiEventDataManager::OnMidiEventDriverChanged");
static_assert(offsetof(UActorComponent_MidiEventDataManager, OnMidiEventDataParsed) == 232, "Offset mismatch for UActorComponent_MidiEventDataManager::OnMidiEventDataParsed");

// /Script/SparksMidiParser.AsyncAction_ListenForMidiEventBase
// Kind: Class; super: CancellableAsyncAction
class UAsyncAction_ListenForMidiEventBase
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnFinished; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAsyncAction_ListenForMidiEventBase, OnFinished) == 48, "Offset mismatch for UAsyncAction_ListenForMidiEventBase::OnFinished");

// /Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEvent
// Kind: Class; super: AsyncAction_ListenForMidiEventBase
class UAsyncAction_ListenForMidiNoteEvent
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    FMulticastInlineDelegate OnMidiEventStart; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMidiEventEnd; // 0x0070 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAsyncAction_ListenForMidiNoteEvent, OnMidiEventStart) == 96, "Offset mismatch for UAsyncAction_ListenForMidiNoteEvent::OnMidiEventStart");
static_assert(offsetof(UAsyncAction_ListenForMidiNoteEvent, OnMidiEventEnd) == 112, "Offset mismatch for UAsyncAction_ListenForMidiNoteEvent::OnMidiEventEnd");

// /Script/SparksMidiParser.AsyncAction_ListenForMidiNoteEventPools
// Kind: Class; super: AsyncAction_ListenForMidiEventBase
class UAsyncAction_ListenForMidiNoteEventPools
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    FMulticastInlineDelegate OnMidiNoteStart; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAsyncAction_ListenForMidiNoteEventPools, OnMidiNoteStart) == 96, "Offset mismatch for UAsyncAction_ListenForMidiNoteEventPools::OnMidiNoteStart");

// /Script/SparksMidiParser.AsyncAction_ListenForMidiTextEvent
// Kind: Class; super: AsyncAction_ListenForMidiEventBase
class UAsyncAction_ListenForMidiTextEvent
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    FMulticastInlineDelegate OnMidiEventStart; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAsyncAction_ListenForMidiTextEvent, OnMidiEventStart) == 96, "Offset mismatch for UAsyncAction_ListenForMidiTextEvent::OnMidiEventStart");

// /Script/SparksMidiParser.MidiEventDriverInterface
// Kind: Class; super: Interface
class UMidiEventDriverInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksMidiParser.MidiEventListenerSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UMidiEventListenerSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksMidiParser.ParsedMidiEventData
// Kind: Class; super: Object
class UParsedMidiEventData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> MidiNoteEvents; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> MidiTextEvents; // 0x0038 (Size: 0x10, Type: MapProperty)
    void* MidiFilePtr; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UParsedMidiEventData, MidiNoteEvents) == 40, "Offset mismatch for UParsedMidiEventData::MidiNoteEvents");
static_assert(offsetof(UParsedMidiEventData, MidiTextEvents) == 56, "Offset mismatch for UParsedMidiEventData::MidiTextEvents");
static_assert(offsetof(UParsedMidiEventData, MidiFilePtr) == 72, "Offset mismatch for UParsedMidiEventData::MidiFilePtr");
