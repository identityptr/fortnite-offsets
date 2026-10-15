/**
 * decamp dumper generated SDK
 * Package: /Script/EntitySequencer
 */
#pragma once
#include "Basic.h"

// /Script/EntitySequencer.MovieSceneVerseEventChannel
// Kind: ScriptStruct; super: MovieSceneChannel
struct FMovieSceneVerseEventChannel
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> Times; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> KeyValues; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t KeyHandles[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneVerseEventChannel, Times) == 80, "Offset mismatch for FMovieSceneVerseEventChannel::Times");
static_assert(offsetof(FMovieSceneVerseEventChannel, KeyValues) == 96, "Offset mismatch for FMovieSceneVerseEventChannel::KeyValues");
static_assert(offsetof(FMovieSceneVerseEventChannel, KeyHandles) == 112, "Offset mismatch for FMovieSceneVerseEventChannel::KeyHandles");

// /Script/EntitySequencer.MovieSceneVerseEventPayload
// Kind: ScriptStruct; super: none
struct FMovieSceneVerseEventPayload
{
public:
    std::uint8_t EventDisplayName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t EventMangledName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    void* EventOwnerClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FMovieSceneVerseEventPayload, EventDisplayName) == 0, "Offset mismatch for FMovieSceneVerseEventPayload::EventDisplayName");
static_assert(offsetof(FMovieSceneVerseEventPayload, EventMangledName) == 4, "Offset mismatch for FMovieSceneVerseEventPayload::EventMangledName");
static_assert(offsetof(FMovieSceneVerseEventPayload, EventOwnerClass) == 8, "Offset mismatch for FMovieSceneVerseEventPayload::EventOwnerClass");

// /Script/EntitySequencer.MovieSceneVerseEventTriggerData
// Kind: ScriptStruct; super: none
struct FMovieSceneVerseEventTriggerData
{
public:
    std::uint8_t Payload[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ObjectBindingID[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t SequenceID[0x4]; // 0x0020 (Size: 0x4, Type: StructProperty)
    std::uint8_t RootTime[0x1]; // 0x0024 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneVerseEventTriggerData, Payload) == 0, "Offset mismatch for FMovieSceneVerseEventTriggerData::Payload");
static_assert(offsetof(FMovieSceneVerseEventTriggerData, ObjectBindingID) == 16, "Offset mismatch for FMovieSceneVerseEventTriggerData::ObjectBindingID");
static_assert(offsetof(FMovieSceneVerseEventTriggerData, SequenceID) == 32, "Offset mismatch for FMovieSceneVerseEventTriggerData::SequenceID");
static_assert(offsetof(FMovieSceneVerseEventTriggerData, RootTime) == 36, "Offset mismatch for FMovieSceneVerseEventTriggerData::RootTime");

// /Script/EntitySequencer.UniversalEntityComponentLocator
// Kind: ScriptStruct; super: none
struct FUniversalEntityComponentLocator
{
public:
    void* ComponentType; // 0x0000 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FUniversalEntityComponentLocator, ComponentType) == 0, "Offset mismatch for FUniversalEntityComponentLocator::ComponentType");

// /Script/EntitySequencer.UniversalEntityLocator
// Kind: ScriptStruct; super: none
struct FUniversalEntityLocator
{
public:
    FString RelativePath; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FUniversalEntityLocator, RelativePath) == 0, "Offset mismatch for FUniversalEntityLocator::RelativePath");

// /Script/EntitySequencer.MovieSceneVerseEventSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneVerseEventSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t EventChannel[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneVerseEventSection, EventChannel) == 328, "Offset mismatch for UMovieSceneVerseEventSection::EventChannel");

// /Script/EntitySequencer.MovieSceneVerseEventSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneVerseEventSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneVerseEventSystem, Linker) == 40, "Offset mismatch for UMovieSceneVerseEventSystem::Linker");

// /Script/EntitySequencer.MovieSceneVerseEventTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneVerseEventTrack
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    TArray<void*> Sections; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneVerseEventTrack, Sections) == 256, "Offset mismatch for UMovieSceneVerseEventTrack::Sections");
