/**
 * decamp dumper generated SDK
 * Package: /Script/NiagaraSimCaching
 */
#pragma once
#include "Basic.h"

// /Script/NiagaraSimCaching.MovieSceneNiagaraCacheParams
// Kind: ScriptStruct; super: MovieSceneBaseCacheParams
struct FMovieSceneNiagaraCacheParams
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t CacheParameters[0x58]; // 0x0020 (Size: 0x58, Type: StructProperty)
    void* SimCache; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bLockCacheToReadOnly; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideQualityLevel; // 0x0081 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RecordQualityLevel; // 0x0082 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CacheReplayPlayMode; // 0x0083 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SectionStretchMode; // 0x0084 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMovieSceneNiagaraCacheParams, CacheParameters) == 32, "Offset mismatch for FMovieSceneNiagaraCacheParams::CacheParameters");
static_assert(offsetof(FMovieSceneNiagaraCacheParams, SimCache) == 120, "Offset mismatch for FMovieSceneNiagaraCacheParams::SimCache");
static_assert(offsetof(FMovieSceneNiagaraCacheParams, bLockCacheToReadOnly) == 128, "Offset mismatch for FMovieSceneNiagaraCacheParams::bLockCacheToReadOnly");
static_assert(offsetof(FMovieSceneNiagaraCacheParams, bOverrideQualityLevel) == 129, "Offset mismatch for FMovieSceneNiagaraCacheParams::bOverrideQualityLevel");
static_assert(offsetof(FMovieSceneNiagaraCacheParams, RecordQualityLevel) == 130, "Offset mismatch for FMovieSceneNiagaraCacheParams::RecordQualityLevel");
static_assert(offsetof(FMovieSceneNiagaraCacheParams, CacheReplayPlayMode) == 131, "Offset mismatch for FMovieSceneNiagaraCacheParams::CacheReplayPlayMode");
static_assert(offsetof(FMovieSceneNiagaraCacheParams, SectionStretchMode) == 132, "Offset mismatch for FMovieSceneNiagaraCacheParams::SectionStretchMode");

// /Script/NiagaraSimCaching.MovieSceneNiagaraCacheSectionTemplate
// Kind: ScriptStruct; super: MovieSceneTrackImplementation
struct FMovieSceneNiagaraCacheSectionTemplate
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> CacheSections; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneNiagaraCacheSectionTemplate, CacheSections) == 16, "Offset mismatch for FMovieSceneNiagaraCacheSectionTemplate::CacheSections");

// /Script/NiagaraSimCaching.MovieSceneNiagaraSectionTemplateParameter
// Kind: ScriptStruct; super: none
struct FMovieSceneNiagaraSectionTemplateParameter
{
public:
    std::uint8_t SectionRange[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Params[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneNiagaraSectionTemplateParameter, SectionRange) == 0, "Offset mismatch for FMovieSceneNiagaraSectionTemplateParameter::SectionRange");
static_assert(offsetof(FMovieSceneNiagaraSectionTemplateParameter, Params) == 16, "Offset mismatch for FMovieSceneNiagaraSectionTemplateParameter::Params");

// /Script/NiagaraSimCaching.MovieSceneNiagaraCacheSection
// Kind: Class; super: MovieSceneBaseCacheSection
class UMovieSceneNiagaraCacheSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t Params[0x88]; // 0x0148 (Size: 0x88, Type: StructProperty)
    std::uint8_t bCacheOutOfDate; // 0x01D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMovieSceneNiagaraCacheSection, Params) == 328, "Offset mismatch for UMovieSceneNiagaraCacheSection::Params");
static_assert(offsetof(UMovieSceneNiagaraCacheSection, bCacheOutOfDate) == 464, "Offset mismatch for UMovieSceneNiagaraCacheSection::bCacheOutOfDate");

// /Script/NiagaraSimCaching.MovieSceneNiagaraCacheTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneNiagaraCacheTrack
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t bIsRecording; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0109
    TArray<void*> AnimationSections; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCacheRecordingEnabled; // 0x0120 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMovieSceneNiagaraCacheTrack, bIsRecording) == 264, "Offset mismatch for UMovieSceneNiagaraCacheTrack::bIsRecording");
static_assert(offsetof(UMovieSceneNiagaraCacheTrack, AnimationSections) == 272, "Offset mismatch for UMovieSceneNiagaraCacheTrack::AnimationSections");
static_assert(offsetof(UMovieSceneNiagaraCacheTrack, bCacheRecordingEnabled) == 288, "Offset mismatch for UMovieSceneNiagaraCacheTrack::bCacheRecordingEnabled");
