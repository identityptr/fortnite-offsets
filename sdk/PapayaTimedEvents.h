/**
 * decamp dumper generated SDK
 * Package: /Script/PapayaTimedEvents
 */
#pragma once
#include "Basic.h"

// /Script/PapayaTimedEvents.MediaTimeEventArray
// Kind: ScriptStruct; super: FastArraySerializer
struct FMediaTimeEventArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Items; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMediaTimeEventArray, Items) == 72, "Offset mismatch for FMediaTimeEventArray::Items");

// /Script/PapayaTimedEvents.MediaTimeEventItem
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FMediaTimeEventItem
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    FString EventName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int64_t time; // 0x0020 (Size: 0x8, Type: Int64Property)
    FString Parameter; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FMediaTimeEventItem, EventName) == 16, "Offset mismatch for FMediaTimeEventItem::EventName");
static_assert(offsetof(FMediaTimeEventItem, time) == 32, "Offset mismatch for FMediaTimeEventItem::time");
static_assert(offsetof(FMediaTimeEventItem, Parameter) == 40, "Offset mismatch for FMediaTimeEventItem::Parameter");

// /Script/PapayaTimedEvents.PapayaTimedEvents
// Kind: Class; super: Actor
class UPapayaTimedEvents
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TMap<void*, void*> MediaPlayerMap; // 0x0270 (Size: 0x10, Type: MapProperty)
    void* MeshEventResponder; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> TimedEventActorTargets; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0298
    std::uint8_t TimedEventsArray[0x70]; // 0x02A0 (Size: 0x70, Type: StructProperty)
    FString ScreenName; // 0x0310 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UPapayaTimedEvents, MediaPlayerMap) == 624, "Offset mismatch for UPapayaTimedEvents::MediaPlayerMap");
static_assert(offsetof(UPapayaTimedEvents, MeshEventResponder) == 640, "Offset mismatch for UPapayaTimedEvents::MeshEventResponder");
static_assert(offsetof(UPapayaTimedEvents, TimedEventActorTargets) == 648, "Offset mismatch for UPapayaTimedEvents::TimedEventActorTargets");
static_assert(offsetof(UPapayaTimedEvents, TimedEventsArray) == 672, "Offset mismatch for UPapayaTimedEvents::TimedEventsArray");
static_assert(offsetof(UPapayaTimedEvents, ScreenName) == 784, "Offset mismatch for UPapayaTimedEvents::ScreenName");

// /Script/PapayaTimedEvents.PapayaTimedEventsResponderComponent
// Kind: Class; super: FortEventResponderComponent
class UPapayaTimedEventsResponderComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnMeshNetEvent; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TArray<void*> MeshEventTags; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FilteredEventTypes[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t bServerRespondToEvents; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClientRespondToEvents; // 0x0101 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPapayaTimedEventsResponderComponent, OnMeshNetEvent) == 192, "Offset mismatch for UPapayaTimedEventsResponderComponent::OnMeshNetEvent");
static_assert(offsetof(UPapayaTimedEventsResponderComponent, MeshEventTags) == 208, "Offset mismatch for UPapayaTimedEventsResponderComponent::MeshEventTags");
static_assert(offsetof(UPapayaTimedEventsResponderComponent, FilteredEventTypes) == 224, "Offset mismatch for UPapayaTimedEventsResponderComponent::FilteredEventTypes");
static_assert(offsetof(UPapayaTimedEventsResponderComponent, bServerRespondToEvents) == 256, "Offset mismatch for UPapayaTimedEventsResponderComponent::bServerRespondToEvents");
static_assert(offsetof(UPapayaTimedEventsResponderComponent, bClientRespondToEvents) == 257, "Offset mismatch for UPapayaTimedEventsResponderComponent::bClientRespondToEvents");
