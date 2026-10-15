/**
 * decamp dumper generated SDK
 * Package: /Script/GeometryCacheTracks
 */
#pragma once
#include "Basic.h"

// /Script/GeometryCacheTracks.MovieSceneGeometryCacheParams
// Kind: ScriptStruct; super: none
struct FMovieSceneGeometryCacheParams
{
public:
    void* GeometryCacheAsset; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FirstLoopStartFrameOffset[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t StartFrameOffset[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t EndFrameOffset[0x4]; // 0x0010 (Size: 0x4, Type: StructProperty)
    float PlayRate; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bReverse; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0019
    float StartOffset; // 0x001C (Size: 0x4, Type: FloatProperty)
    float EndOffset; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0024
    std::uint8_t GeometryCache[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneGeometryCacheParams, GeometryCacheAsset) == 0, "Offset mismatch for FMovieSceneGeometryCacheParams::GeometryCacheAsset");
static_assert(offsetof(FMovieSceneGeometryCacheParams, FirstLoopStartFrameOffset) == 8, "Offset mismatch for FMovieSceneGeometryCacheParams::FirstLoopStartFrameOffset");
static_assert(offsetof(FMovieSceneGeometryCacheParams, StartFrameOffset) == 12, "Offset mismatch for FMovieSceneGeometryCacheParams::StartFrameOffset");
static_assert(offsetof(FMovieSceneGeometryCacheParams, EndFrameOffset) == 16, "Offset mismatch for FMovieSceneGeometryCacheParams::EndFrameOffset");
static_assert(offsetof(FMovieSceneGeometryCacheParams, PlayRate) == 20, "Offset mismatch for FMovieSceneGeometryCacheParams::PlayRate");
static_assert(offsetof(FMovieSceneGeometryCacheParams, bReverse) == 24, "Offset mismatch for FMovieSceneGeometryCacheParams::bReverse");
static_assert(offsetof(FMovieSceneGeometryCacheParams, StartOffset) == 28, "Offset mismatch for FMovieSceneGeometryCacheParams::StartOffset");
static_assert(offsetof(FMovieSceneGeometryCacheParams, EndOffset) == 32, "Offset mismatch for FMovieSceneGeometryCacheParams::EndOffset");
static_assert(offsetof(FMovieSceneGeometryCacheParams, GeometryCache) == 40, "Offset mismatch for FMovieSceneGeometryCacheParams::GeometryCache");

// /Script/GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
// Kind: ScriptStruct; super: MovieSceneEvalTemplate
struct FMovieSceneGeometryCacheSectionTemplate
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Params[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneGeometryCacheSectionTemplate, Params) == 32, "Offset mismatch for FMovieSceneGeometryCacheSectionTemplate::Params");

// /Script/GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
// Kind: ScriptStruct; super: MovieSceneGeometryCacheParams
struct FMovieSceneGeometryCacheSectionTemplateParameters
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t SectionStartTime[0x4]; // 0x0040 (Size: 0x4, Type: StructProperty)
    std::uint8_t SectionEndTime[0x1]; // 0x0044 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneGeometryCacheSectionTemplateParameters, SectionStartTime) == 64, "Offset mismatch for FMovieSceneGeometryCacheSectionTemplateParameters::SectionStartTime");
static_assert(offsetof(FMovieSceneGeometryCacheSectionTemplateParameters, SectionEndTime) == 68, "Offset mismatch for FMovieSceneGeometryCacheSectionTemplateParameters::SectionEndTime");

// /Script/GeometryCacheTracks.MovieSceneGeometryCacheSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneGeometryCacheSection
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t Params[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneGeometryCacheSection, Params) == 320, "Offset mismatch for UMovieSceneGeometryCacheSection::Params");

// /Script/GeometryCacheTracks.MovieSceneGeometryCacheTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneGeometryCacheTrack
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    TArray<void*> AnimationSections; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneGeometryCacheTrack, AnimationSections) == 256, "Offset mismatch for UMovieSceneGeometryCacheTrack::AnimationSections");
