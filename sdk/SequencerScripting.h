/**
 * decamp dumper generated SDK
 * Package: /Script/SequencerScripting
 */
#pragma once
#include "Basic.h"

// /Script/SequencerScripting.SequencerScriptingRange
// Kind: ScriptStruct; super: none
struct FSequencerScriptingRange
{
public:
    std::uint8_t bHasEnd; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bHasStart (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t InclusiveStart; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t ExclusiveEnd; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t InternalRate[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSequencerScriptingRange, bHasEnd) == 0, "Offset mismatch for FSequencerScriptingRange::bHasEnd");
static_assert(offsetof(FSequencerScriptingRange, InclusiveStart) == 4, "Offset mismatch for FSequencerScriptingRange::InclusiveStart");
static_assert(offsetof(FSequencerScriptingRange, ExclusiveEnd) == 8, "Offset mismatch for FSequencerScriptingRange::ExclusiveEnd");
static_assert(offsetof(FSequencerScriptingRange, InternalRate) == 12, "Offset mismatch for FSequencerScriptingRange::InternalRate");

// /Script/SequencerScripting.MovieSceneBindingExtensions
// Kind: Class; super: BlueprintFunctionLibrary
class UMovieSceneBindingExtensions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneBindingTagExtensions
// Kind: Class; super: BlueprintFunctionLibrary
class UMovieSceneBindingTagExtensions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneConditionExtensions
// Kind: Class; super: BlueprintFunctionLibrary
class UMovieSceneConditionExtensions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneDoubleVectorTrackExtensions
// Kind: Class; super: BlueprintFunctionLibrary
class UMovieSceneDoubleVectorTrackExtensions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneEventTrackExtensions
// Kind: Class; super: BlueprintFunctionLibrary
class UMovieSceneEventTrackExtensions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneFloatVectorTrackExtensions
// Kind: Class; super: BlueprintFunctionLibrary
class UMovieSceneFloatVectorTrackExtensions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneFolderExtensions
// Kind: Class; super: BlueprintFunctionLibrary
class UMovieSceneFolderExtensions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneMaterialTrackExtensions
// Kind: Class; super: BlueprintFunctionLibrary
class UMovieSceneMaterialTrackExtensions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions
// Kind: Class; super: BlueprintFunctionLibrary
class UMovieScenePrimitiveMaterialTrackExtensions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieScenePropertyTrackExtensions
// Kind: Class; super: BlueprintFunctionLibrary
class UMovieScenePropertyTrackExtensions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneScriptingActorReferenceChannel
// Kind: Class; super: MovieSceneScriptingChannel
class UMovieSceneScriptingActorReferenceChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName ChannelName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UMovieSceneScriptingActorReferenceChannel, ChannelName) == 40, "Offset mismatch for UMovieSceneScriptingActorReferenceChannel::ChannelName");

// /Script/SequencerScripting.MovieSceneScriptingActorReferenceKey
// Kind: Class; super: MovieSceneScriptingKey
class UMovieSceneScriptingActorReferenceKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneScriptingActualFloatKey
// Kind: Class; super: MovieSceneScriptingFloatKey
class UMovieSceneScriptingActualFloatKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneScriptingBoolChannel
// Kind: Class; super: MovieSceneScriptingChannel
class UMovieSceneScriptingBoolChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName ChannelName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UMovieSceneScriptingBoolChannel, ChannelName) == 40, "Offset mismatch for UMovieSceneScriptingBoolChannel::ChannelName");

// /Script/SequencerScripting.MovieSceneScriptingBoolKey
// Kind: Class; super: MovieSceneScriptingKey
class UMovieSceneScriptingBoolKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneScriptingByteChannel
// Kind: Class; super: MovieSceneScriptingChannel
class UMovieSceneScriptingByteChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName ChannelName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UMovieSceneScriptingByteChannel, ChannelName) == 40, "Offset mismatch for UMovieSceneScriptingByteChannel::ChannelName");

// /Script/SequencerScripting.MovieSceneScriptingByteKey
// Kind: Class; super: MovieSceneScriptingKey
class UMovieSceneScriptingByteKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneScriptingChannel
// Kind: Class; super: Object
class UMovieSceneScriptingChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName ChannelName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UMovieSceneScriptingChannel, ChannelName) == 40, "Offset mismatch for UMovieSceneScriptingChannel::ChannelName");

// /Script/SequencerScripting.MovieSceneScriptingDoubleAsFloatKey
// Kind: Class; super: MovieSceneScriptingFloatKey
class UMovieSceneScriptingDoubleAsFloatKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneScriptingDoubleChannel
// Kind: Class; super: MovieSceneScriptingChannel
class UMovieSceneScriptingDoubleChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName ChannelName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UMovieSceneScriptingDoubleChannel, ChannelName) == 40, "Offset mismatch for UMovieSceneScriptingDoubleChannel::ChannelName");

// /Script/SequencerScripting.MovieSceneScriptingDoubleKey
// Kind: Class; super: MovieSceneScriptingKey
class UMovieSceneScriptingDoubleKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneScriptingEventChannel
// Kind: Class; super: MovieSceneScriptingChannel
class UMovieSceneScriptingEventChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName ChannelName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UMovieSceneScriptingEventChannel, ChannelName) == 40, "Offset mismatch for UMovieSceneScriptingEventChannel::ChannelName");

// /Script/SequencerScripting.MovieSceneScriptingEventKey
// Kind: Class; super: MovieSceneScriptingKey
class UMovieSceneScriptingEventKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneScriptingFloatChannel
// Kind: Class; super: MovieSceneScriptingChannel
class UMovieSceneScriptingFloatChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName ChannelName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UMovieSceneScriptingFloatChannel, ChannelName) == 40, "Offset mismatch for UMovieSceneScriptingFloatChannel::ChannelName");

// /Script/SequencerScripting.MovieSceneScriptingFloatKey
// Kind: Class; super: MovieSceneScriptingKey
class UMovieSceneScriptingFloatKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneScriptingIntegerChannel
// Kind: Class; super: MovieSceneScriptingChannel
class UMovieSceneScriptingIntegerChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName ChannelName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UMovieSceneScriptingIntegerChannel, ChannelName) == 40, "Offset mismatch for UMovieSceneScriptingIntegerChannel::ChannelName");

// /Script/SequencerScripting.MovieSceneScriptingIntegerKey
// Kind: Class; super: MovieSceneScriptingKey
class UMovieSceneScriptingIntegerKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneScriptingKey
// Kind: Class; super: Object
class UMovieSceneScriptingKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneScriptingObjectPathChannel
// Kind: Class; super: MovieSceneScriptingChannel
class UMovieSceneScriptingObjectPathChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName ChannelName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UMovieSceneScriptingObjectPathChannel, ChannelName) == 40, "Offset mismatch for UMovieSceneScriptingObjectPathChannel::ChannelName");

// /Script/SequencerScripting.MovieSceneScriptingObjectPathKey
// Kind: Class; super: MovieSceneScriptingKey
class UMovieSceneScriptingObjectPathKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneScriptingParticleChannel
// Kind: Class; super: MovieSceneScriptingChannel
class UMovieSceneScriptingParticleChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName ChannelName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UMovieSceneScriptingParticleChannel, ChannelName) == 40, "Offset mismatch for UMovieSceneScriptingParticleChannel::ChannelName");

// /Script/SequencerScripting.MovieSceneScriptingParticleKey
// Kind: Class; super: MovieSceneScriptingKey
class UMovieSceneScriptingParticleKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneScriptingStringChannel
// Kind: Class; super: MovieSceneScriptingChannel
class UMovieSceneScriptingStringChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName ChannelName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UMovieSceneScriptingStringChannel, ChannelName) == 40, "Offset mismatch for UMovieSceneScriptingStringChannel::ChannelName");

// /Script/SequencerScripting.MovieSceneScriptingStringKey
// Kind: Class; super: MovieSceneScriptingKey
class UMovieSceneScriptingStringKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneScriptingTextChannel
// Kind: Class; super: MovieSceneScriptingChannel
class UMovieSceneScriptingTextChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName ChannelName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UMovieSceneScriptingTextChannel, ChannelName) == 40, "Offset mismatch for UMovieSceneScriptingTextChannel::ChannelName");

// /Script/SequencerScripting.MovieSceneScriptingTextKey
// Kind: Class; super: MovieSceneScriptingKey
class UMovieSceneScriptingTextKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneSectionEasingExtensions
// Kind: Class; super: BlueprintFunctionLibrary
class UMovieSceneSectionEasingExtensions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneSectionExtensions
// Kind: Class; super: BlueprintFunctionLibrary
class UMovieSceneSectionExtensions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneSequenceExtensions
// Kind: Class; super: BlueprintFunctionLibrary
class UMovieSceneSequenceExtensions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneTimeWarpExtensions
// Kind: Class; super: BlueprintFunctionLibrary
class UMovieSceneTimeWarpExtensions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.MovieSceneTrackExtensions
// Kind: Class; super: BlueprintFunctionLibrary
class UMovieSceneTrackExtensions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SequencerScripting.SequencerScriptingRangeExtensions
// Kind: Class; super: BlueprintFunctionLibrary
class USequencerScriptingRangeExtensions
{
public:
    std::uint8_t Opaque[1];
};
