/**
 * decamp dumper generated SDK
 * Package: /Script/GeometryCollectionTracks
 */
#pragma once
#include "Basic.h"

// /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionParams
// Kind: ScriptStruct; super: none
struct FMovieSceneGeometryCollectionParams
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t GeometryCollectionCache[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t StartFrameOffset[0x4]; // 0x0020 (Size: 0x4, Type: StructProperty)
    std::uint8_t EndFrameOffset[0x4]; // 0x0024 (Size: 0x4, Type: StructProperty)
    float PlayRate; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMovieSceneGeometryCollectionParams, GeometryCollectionCache) == 8, "Offset mismatch for FMovieSceneGeometryCollectionParams::GeometryCollectionCache");
static_assert(offsetof(FMovieSceneGeometryCollectionParams, StartFrameOffset) == 32, "Offset mismatch for FMovieSceneGeometryCollectionParams::StartFrameOffset");
static_assert(offsetof(FMovieSceneGeometryCollectionParams, EndFrameOffset) == 36, "Offset mismatch for FMovieSceneGeometryCollectionParams::EndFrameOffset");
static_assert(offsetof(FMovieSceneGeometryCollectionParams, PlayRate) == 40, "Offset mismatch for FMovieSceneGeometryCollectionParams::PlayRate");

// /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
// Kind: ScriptStruct; super: MovieSceneEvalTemplate
struct FMovieSceneGeometryCollectionSectionTemplate
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Params[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneGeometryCollectionSectionTemplate, Params) == 32, "Offset mismatch for FMovieSceneGeometryCollectionSectionTemplate::Params");

// /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
// Kind: ScriptStruct; super: MovieSceneGeometryCollectionParams
struct FMovieSceneGeometryCollectionSectionTemplateParameters
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SectionStartTime[0x4]; // 0x0030 (Size: 0x4, Type: StructProperty)
    std::uint8_t SectionEndTime[0x1]; // 0x0034 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneGeometryCollectionSectionTemplateParameters, SectionStartTime) == 48, "Offset mismatch for FMovieSceneGeometryCollectionSectionTemplateParameters::SectionStartTime");
static_assert(offsetof(FMovieSceneGeometryCollectionSectionTemplateParameters, SectionEndTime) == 52, "Offset mismatch for FMovieSceneGeometryCollectionSectionTemplateParameters::SectionEndTime");

// /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneGeometryCollectionSection
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t Params[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneGeometryCollectionSection, Params) == 320, "Offset mismatch for UMovieSceneGeometryCollectionSection::Params");

// /Script/GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneGeometryCollectionTrack
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    TArray<void*> AnimationSections; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneGeometryCollectionTrack, AnimationSections) == 256, "Offset mismatch for UMovieSceneGeometryCollectionTrack::AnimationSections");
