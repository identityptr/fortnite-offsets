/**
 * decamp dumper generated SDK
 * Package: /Script/TakeTrackRecorders
 */
#pragma once
#include "Basic.h"

// /Script/TakeTrackRecorders.TakeRecorderPropertyTrackSettings
// Kind: ScriptStruct; super: none
struct FTakeRecorderPropertyTrackSettings
{
public:
    FString ComponentPath; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString PropertyPath; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FTakeRecorderPropertyTrackSettings, ComponentPath) == 0, "Offset mismatch for FTakeRecorderPropertyTrackSettings::ComponentPath");
static_assert(offsetof(FTakeRecorderPropertyTrackSettings, PropertyPath) == 16, "Offset mismatch for FTakeRecorderPropertyTrackSettings::PropertyPath");

// /Script/TakeTrackRecorders.TakeRecorderTrackSettings
// Kind: ScriptStruct; super: none
struct FTakeRecorderTrackSettings
{
public:
    std::uint8_t MatchingActorClass[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    TArray<void*> DefaultPropertyTracks; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExcludePropertyTracks; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTakeRecorderTrackSettings, MatchingActorClass) == 0, "Offset mismatch for FTakeRecorderTrackSettings::MatchingActorClass");
static_assert(offsetof(FTakeRecorderTrackSettings, DefaultPropertyTracks) == 24, "Offset mismatch for FTakeRecorderTrackSettings::DefaultPropertyTracks");
static_assert(offsetof(FTakeRecorderTrackSettings, ExcludePropertyTracks) == 40, "Offset mismatch for FTakeRecorderTrackSettings::ExcludePropertyTracks");

// /Script/TakeTrackRecorders.MovieScene3DAttachTrackRecorder
// Kind: Class; super: MovieSceneTrackRecorder
class UMovieScene3DAttachTrackRecorder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TakeTrackRecorders.MovieScene3DTransformTrackRecorder
// Kind: Class; super: MovieSceneTrackRecorder
class UMovieScene3DTransformTrackRecorder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TakeTrackRecorders.MovieSceneActorReferenceTrackRecorder
// Kind: Class; super: MovieSceneTrackRecorder
class UMovieSceneActorReferenceTrackRecorder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TakeTrackRecorders.MovieSceneAnimationTrackRecorder
// Kind: Class; super: MovieSceneTrackRecorder
class UMovieSceneAnimationTrackRecorder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TakeTrackRecorders.MovieSceneAnimationTrackRecorderEditorSettings
// Kind: Class; super: MovieSceneTrackRecorderSettings
class UMovieSceneAnimationTrackRecorderEditorSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t AnimationTrackName[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    FString AnimationAssetName; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString AnimationSubDirectory; // 0x0048 (Size: 0x10, Type: StrProperty)
    std::uint8_t InterpMode; // 0x0058 (Size: 0x1, Type: ByteProperty)
    std::uint8_t TangentMode; // 0x0059 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bRemoveRootAnimation; // 0x005A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetRetargetSourceAsset; // 0x005B (Size: 0x1, Type: BoolProperty)
    std::uint8_t TimecodeBoneMethod[0x1]; // 0x005C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneAnimationTrackRecorderEditorSettings, AnimationTrackName) == 40, "Offset mismatch for UMovieSceneAnimationTrackRecorderEditorSettings::AnimationTrackName");
static_assert(offsetof(UMovieSceneAnimationTrackRecorderEditorSettings, AnimationAssetName) == 56, "Offset mismatch for UMovieSceneAnimationTrackRecorderEditorSettings::AnimationAssetName");
static_assert(offsetof(UMovieSceneAnimationTrackRecorderEditorSettings, AnimationSubDirectory) == 72, "Offset mismatch for UMovieSceneAnimationTrackRecorderEditorSettings::AnimationSubDirectory");
static_assert(offsetof(UMovieSceneAnimationTrackRecorderEditorSettings, InterpMode) == 88, "Offset mismatch for UMovieSceneAnimationTrackRecorderEditorSettings::InterpMode");
static_assert(offsetof(UMovieSceneAnimationTrackRecorderEditorSettings, TangentMode) == 89, "Offset mismatch for UMovieSceneAnimationTrackRecorderEditorSettings::TangentMode");
static_assert(offsetof(UMovieSceneAnimationTrackRecorderEditorSettings, bRemoveRootAnimation) == 90, "Offset mismatch for UMovieSceneAnimationTrackRecorderEditorSettings::bRemoveRootAnimation");
static_assert(offsetof(UMovieSceneAnimationTrackRecorderEditorSettings, bSetRetargetSourceAsset) == 91, "Offset mismatch for UMovieSceneAnimationTrackRecorderEditorSettings::bSetRetargetSourceAsset");
static_assert(offsetof(UMovieSceneAnimationTrackRecorderEditorSettings, TimecodeBoneMethod) == 92, "Offset mismatch for UMovieSceneAnimationTrackRecorderEditorSettings::TimecodeBoneMethod");

// /Script/TakeTrackRecorders.MovieSceneAnimationTrackRecorderSettings
// Kind: Class; super: MovieSceneAnimationTrackRecorderEditorSettings
class UMovieSceneAnimationTrackRecorderSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t AnimationTrackName[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    FString AnimationAssetName; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString AnimationSubDirectory; // 0x0048 (Size: 0x10, Type: StrProperty)
    std::uint8_t InterpMode; // 0x0058 (Size: 0x1, Type: ByteProperty)
    std::uint8_t TangentMode; // 0x0059 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bRemoveRootAnimation; // 0x005A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetRetargetSourceAsset; // 0x005B (Size: 0x1, Type: BoolProperty)
    std::uint8_t TimecodeBoneMethod[0x1]; // 0x005C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneAnimationTrackRecorderSettings, AnimationTrackName) == 40, "Offset mismatch for UMovieSceneAnimationTrackRecorderSettings::AnimationTrackName");
static_assert(offsetof(UMovieSceneAnimationTrackRecorderSettings, AnimationAssetName) == 56, "Offset mismatch for UMovieSceneAnimationTrackRecorderSettings::AnimationAssetName");
static_assert(offsetof(UMovieSceneAnimationTrackRecorderSettings, AnimationSubDirectory) == 72, "Offset mismatch for UMovieSceneAnimationTrackRecorderSettings::AnimationSubDirectory");
static_assert(offsetof(UMovieSceneAnimationTrackRecorderSettings, InterpMode) == 88, "Offset mismatch for UMovieSceneAnimationTrackRecorderSettings::InterpMode");
static_assert(offsetof(UMovieSceneAnimationTrackRecorderSettings, TangentMode) == 89, "Offset mismatch for UMovieSceneAnimationTrackRecorderSettings::TangentMode");
static_assert(offsetof(UMovieSceneAnimationTrackRecorderSettings, bRemoveRootAnimation) == 90, "Offset mismatch for UMovieSceneAnimationTrackRecorderSettings::bRemoveRootAnimation");
static_assert(offsetof(UMovieSceneAnimationTrackRecorderSettings, bSetRetargetSourceAsset) == 91, "Offset mismatch for UMovieSceneAnimationTrackRecorderSettings::bSetRetargetSourceAsset");
static_assert(offsetof(UMovieSceneAnimationTrackRecorderSettings, TimecodeBoneMethod) == 92, "Offset mismatch for UMovieSceneAnimationTrackRecorderSettings::TimecodeBoneMethod");

// /Script/TakeTrackRecorders.MovieScenePropertyTrackRecorder
// Kind: Class; super: MovieSceneTrackRecorder
class UMovieScenePropertyTrackRecorder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TakeTrackRecorders.MovieSceneSpawnTrackRecorder
// Kind: Class; super: MovieSceneTrackRecorder
class UMovieSceneSpawnTrackRecorder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TakeTrackRecorders.MovieSceneTrackRecorder
// Kind: Class; super: Object
class UMovieSceneTrackRecorder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TakeTrackRecorders.MovieSceneTrackRecorderSettings
// Kind: Class; super: Object
class UMovieSceneTrackRecorderSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/TakeTrackRecorders.MovieSceneVisibilityTrackRecorder
// Kind: Class; super: MovieSceneTrackRecorder
class UMovieSceneVisibilityTrackRecorder
{
public:
    std::uint8_t Opaque[1];
};
