/**
 * decamp dumper generated SDK
 * Package: /Script/MovieSceneGameplayEventTrack
 */
#pragma once
#include "Basic.h"

// /Script/MovieSceneGameplayEventTrack.MovieSceneGameplayEvent
// Kind: ScriptStruct; super: none
struct FMovieSceneGameplayEvent
{
public:
    std::uint8_t GameplayEventFunctionProperty[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t Payload[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneGameplayEvent, GameplayEventFunctionProperty) == 0, "Offset mismatch for FMovieSceneGameplayEvent::GameplayEventFunctionProperty");
static_assert(offsetof(FMovieSceneGameplayEvent, Payload) == 48, "Offset mismatch for FMovieSceneGameplayEvent::Payload");

// /Script/MovieSceneGameplayEventTrack.MovieSceneGameplayEventChannel
// Kind: ScriptStruct; super: MovieSceneChannel
struct FMovieSceneGameplayEventChannel
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> KeyTimes; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> KeyValues; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t KeyHandles[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneGameplayEventChannel, KeyTimes) == 80, "Offset mismatch for FMovieSceneGameplayEventChannel::KeyTimes");
static_assert(offsetof(FMovieSceneGameplayEventChannel, KeyValues) == 96, "Offset mismatch for FMovieSceneGameplayEventChannel::KeyValues");
static_assert(offsetof(FMovieSceneGameplayEventChannel, KeyHandles) == 112, "Offset mismatch for FMovieSceneGameplayEventChannel::KeyHandles");

// /Script/MovieSceneGameplayEventTrack.MovieSceneGameplayEventTriggerData
// Kind: ScriptStruct; super: none
struct FMovieSceneGameplayEventTriggerData
{
public:
    std::uint8_t GameplayEventFunctionProperty[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t Payload[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t ObjectBindingID[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneGameplayEventTriggerData, GameplayEventFunctionProperty) == 0, "Offset mismatch for FMovieSceneGameplayEventTriggerData::GameplayEventFunctionProperty");
static_assert(offsetof(FMovieSceneGameplayEventTriggerData, Payload) == 48, "Offset mismatch for FMovieSceneGameplayEventTriggerData::Payload");
static_assert(offsetof(FMovieSceneGameplayEventTriggerData, ObjectBindingID) == 64, "Offset mismatch for FMovieSceneGameplayEventTriggerData::ObjectBindingID");

// /Script/MovieSceneGameplayEventTrack.MovieSceneGameplayEventSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneGameplayEventSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t EventChannel[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneGameplayEventSection, EventChannel) == 328, "Offset mismatch for UMovieSceneGameplayEventSection::EventChannel");

// /Script/MovieSceneGameplayEventTrack.MovieSceneGameplayEventSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneGameplayEventSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneGameplayEventSystem, Linker) == 40, "Offset mismatch for UMovieSceneGameplayEventSystem::Linker");

// /Script/MovieSceneGameplayEventTrack.MovieSceneGameplayEventTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneGameplayEventTrack
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    std::uint8_t bFireEventsWhenBackwards; // 0x0100 (Size: 0x1, Type: BoolProperty)
    // 0x0100 BoolProperty bFireEventsWhenForwards (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0101
    TArray<void*> Sections; // 0x0108 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneGameplayEventTrack, bFireEventsWhenBackwards) == 256, "Offset mismatch for UMovieSceneGameplayEventTrack::bFireEventsWhenBackwards");
static_assert(offsetof(UMovieSceneGameplayEventTrack, Sections) == 264, "Offset mismatch for UMovieSceneGameplayEventTrack::Sections");
