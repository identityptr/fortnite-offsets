/**
 * decamp dumper generated SDK
 * Package: /Script/LiveLinkMovieScene
 */
#pragma once
#include "Basic.h"

// /Script/LiveLinkMovieScene.LiveLinkPropertyData
// Kind: ScriptStruct; super: none
struct FLiveLinkPropertyData
{
public:
    FName PropertyName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> FloatChannel; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StringChannel; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IntegerChannel; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BoolChannel; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ByteChannel; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLiveLinkPropertyData, PropertyName) == 0, "Offset mismatch for FLiveLinkPropertyData::PropertyName");
static_assert(offsetof(FLiveLinkPropertyData, FloatChannel) == 8, "Offset mismatch for FLiveLinkPropertyData::FloatChannel");
static_assert(offsetof(FLiveLinkPropertyData, StringChannel) == 24, "Offset mismatch for FLiveLinkPropertyData::StringChannel");
static_assert(offsetof(FLiveLinkPropertyData, IntegerChannel) == 40, "Offset mismatch for FLiveLinkPropertyData::IntegerChannel");
static_assert(offsetof(FLiveLinkPropertyData, BoolChannel) == 56, "Offset mismatch for FLiveLinkPropertyData::BoolChannel");
static_assert(offsetof(FLiveLinkPropertyData, ByteChannel) == 72, "Offset mismatch for FLiveLinkPropertyData::ByteChannel");

// /Script/LiveLinkMovieScene.LiveLinkSubSectionData
// Kind: ScriptStruct; super: none
struct FLiveLinkSubSectionData
{
public:
    TArray<void*> Properties; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLiveLinkSubSectionData, Properties) == 0, "Offset mismatch for FLiveLinkSubSectionData::Properties");

// /Script/LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
// Kind: ScriptStruct; super: MovieScenePropertySectionTemplate
struct FMovieSceneLiveLinkSectionTemplate
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SubjectPreset[0x38]; // 0x0038 (Size: 0x38, Type: StructProperty)
    TArray<void*> ChannelMask; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SubSectionsData; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneLiveLinkSectionTemplate, SubjectPreset) == 56, "Offset mismatch for FMovieSceneLiveLinkSectionTemplate::SubjectPreset");
static_assert(offsetof(FMovieSceneLiveLinkSectionTemplate, ChannelMask) == 112, "Offset mismatch for FMovieSceneLiveLinkSectionTemplate::ChannelMask");
static_assert(offsetof(FMovieSceneLiveLinkSectionTemplate, SubSectionsData) == 128, "Offset mismatch for FMovieSceneLiveLinkSectionTemplate::SubSectionsData");

// /Script/LiveLinkMovieScene.MovieSceneLiveLinkSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneLiveLinkSection
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t SubjectPreset[0x38]; // 0x0140 (Size: 0x38, Type: StructProperty)
    TArray<void*> ChannelMask; // 0x0178 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Subsections; // 0x0188 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0198
    FName SubjectName; // 0x01A8 (Size: 0x8, Type: NameProperty)
    std::uint8_t TemplateToPush[0x50]; // 0x01B0 (Size: 0x50, Type: StructProperty)
    std::uint8_t RefSkeleton[0x20]; // 0x0200 (Size: 0x20, Type: StructProperty)
    TArray<void*> CurveNames; // 0x0220 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PropertyFloatChannels; // 0x0230 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneLiveLinkSection, SubjectPreset) == 320, "Offset mismatch for UMovieSceneLiveLinkSection::SubjectPreset");
static_assert(offsetof(UMovieSceneLiveLinkSection, ChannelMask) == 376, "Offset mismatch for UMovieSceneLiveLinkSection::ChannelMask");
static_assert(offsetof(UMovieSceneLiveLinkSection, Subsections) == 392, "Offset mismatch for UMovieSceneLiveLinkSection::Subsections");
static_assert(offsetof(UMovieSceneLiveLinkSection, SubjectName) == 424, "Offset mismatch for UMovieSceneLiveLinkSection::SubjectName");
static_assert(offsetof(UMovieSceneLiveLinkSection, TemplateToPush) == 432, "Offset mismatch for UMovieSceneLiveLinkSection::TemplateToPush");
static_assert(offsetof(UMovieSceneLiveLinkSection, RefSkeleton) == 512, "Offset mismatch for UMovieSceneLiveLinkSection::RefSkeleton");
static_assert(offsetof(UMovieSceneLiveLinkSection, CurveNames) == 544, "Offset mismatch for UMovieSceneLiveLinkSection::CurveNames");
static_assert(offsetof(UMovieSceneLiveLinkSection, PropertyFloatChannels) == 560, "Offset mismatch for UMovieSceneLiveLinkSection::PropertyFloatChannels");

// /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSection
// Kind: Class; super: Object
class UMovieSceneLiveLinkSubSection
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SubSectionData[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    void* SubjectRole; // 0x0038 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UMovieSceneLiveLinkSubSection, SubSectionData) == 40, "Offset mismatch for UMovieSceneLiveLinkSubSection::SubSectionData");
static_assert(offsetof(UMovieSceneLiveLinkSubSection, SubjectRole) == 56, "Offset mismatch for UMovieSceneLiveLinkSubSection::SubjectRole");

// /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
// Kind: Class; super: MovieSceneLiveLinkSubSection
class UMovieSceneLiveLinkSubSectionAnimation
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SubSectionData[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    void* SubjectRole; // 0x0038 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UMovieSceneLiveLinkSubSectionAnimation, SubSectionData) == 40, "Offset mismatch for UMovieSceneLiveLinkSubSectionAnimation::SubSectionData");
static_assert(offsetof(UMovieSceneLiveLinkSubSectionAnimation, SubjectRole) == 56, "Offset mismatch for UMovieSceneLiveLinkSubSectionAnimation::SubjectRole");

// /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
// Kind: Class; super: MovieSceneLiveLinkSubSection
class UMovieSceneLiveLinkSubSectionBasicRole
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SubSectionData[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    void* SubjectRole; // 0x0038 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UMovieSceneLiveLinkSubSectionBasicRole, SubSectionData) == 40, "Offset mismatch for UMovieSceneLiveLinkSubSectionBasicRole::SubSectionData");
static_assert(offsetof(UMovieSceneLiveLinkSubSectionBasicRole, SubjectRole) == 56, "Offset mismatch for UMovieSceneLiveLinkSubSectionBasicRole::SubjectRole");

// /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
// Kind: Class; super: MovieSceneLiveLinkSubSection
class UMovieSceneLiveLinkSubSectionProperties
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SubSectionData[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    void* SubjectRole; // 0x0038 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UMovieSceneLiveLinkSubSectionProperties, SubSectionData) == 40, "Offset mismatch for UMovieSceneLiveLinkSubSectionProperties::SubSectionData");
static_assert(offsetof(UMovieSceneLiveLinkSubSectionProperties, SubjectRole) == 56, "Offset mismatch for UMovieSceneLiveLinkSubSectionProperties::SubjectRole");

// /Script/LiveLinkMovieScene.MovieSceneLiveLinkTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieSceneLiveLinkTrack
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    void* TrackRole; // 0x0128 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UMovieSceneLiveLinkTrack, TrackRole) == 296, "Offset mismatch for UMovieSceneLiveLinkTrack::TrackRole");
