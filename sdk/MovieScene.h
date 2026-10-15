/**
 * decamp dumper generated SDK
 * Package: /Script/MovieScene
 */
#pragma once
#include "Basic.h"

// /Script/MovieScene.ActorForWorldTransforms
// Kind: ScriptStruct; super: none
struct FActorForWorldTransforms
{
public:
    TWeakObjectPtr<void> Actor; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> Component; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    FName SocketName; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FActorForWorldTransforms, Actor) == 0, "Offset mismatch for FActorForWorldTransforms::Actor");
static_assert(offsetof(FActorForWorldTransforms, Component) == 8, "Offset mismatch for FActorForWorldTransforms::Component");
static_assert(offsetof(FActorForWorldTransforms, SocketName) == 16, "Offset mismatch for FActorForWorldTransforms::SocketName");

// /Script/MovieScene.EasingComponentData
// Kind: ScriptStruct; super: none
struct FEasingComponentData
{
public:
    void* Section; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEasingComponentData, Section) == 0, "Offset mismatch for FEasingComponentData::Section");

// /Script/MovieScene.GeneratedMovieSceneKeyStruct
// Kind: ScriptStruct; super: none
struct FGeneratedMovieSceneKeyStruct
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneAnchorsScalingGroup
// Kind: ScriptStruct; super: none
struct FMovieSceneAnchorsScalingGroup
{
public:
    TSet<void*> Sections; // 0x0000 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FMovieSceneAnchorsScalingGroup, Sections) == 0, "Offset mismatch for FMovieSceneAnchorsScalingGroup::Sections");

// /Script/MovieScene.MovieSceneAudioTriggerChannel
// Kind: ScriptStruct; super: MovieSceneChannel
struct FMovieSceneAudioTriggerChannel
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> Times; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Values; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t KeyHandles[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneAudioTriggerChannel, Times) == 80, "Offset mismatch for FMovieSceneAudioTriggerChannel::Times");
static_assert(offsetof(FMovieSceneAudioTriggerChannel, Values) == 96, "Offset mismatch for FMovieSceneAudioTriggerChannel::Values");
static_assert(offsetof(FMovieSceneAudioTriggerChannel, KeyHandles) == 112, "Offset mismatch for FMovieSceneAudioTriggerChannel::KeyHandles");

// /Script/MovieScene.MovieSceneBinding
// Kind: ScriptStruct; super: MovieSceneDecorationContainer
struct FMovieSceneBinding
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ObjectGuid[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    FString BindingName; // 0x0020 (Size: 0x10, Type: StrProperty)
    TArray<void*> Tracks; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneBinding, ObjectGuid) == 16, "Offset mismatch for FMovieSceneBinding::ObjectGuid");
static_assert(offsetof(FMovieSceneBinding, BindingName) == 32, "Offset mismatch for FMovieSceneBinding::BindingName");
static_assert(offsetof(FMovieSceneBinding, Tracks) == 48, "Offset mismatch for FMovieSceneBinding::Tracks");

// /Script/MovieScene.MovieSceneBindingOverrideData
// Kind: ScriptStruct; super: none
struct FMovieSceneBindingOverrideData
{
public:
    std::uint8_t ObjectBindingID[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Object[0x20]; // 0x0018 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bOverridesDefault; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMovieSceneBindingOverrideData, ObjectBindingID) == 0, "Offset mismatch for FMovieSceneBindingOverrideData::ObjectBindingID");
static_assert(offsetof(FMovieSceneBindingOverrideData, Object) == 24, "Offset mismatch for FMovieSceneBindingOverrideData::Object");
static_assert(offsetof(FMovieSceneBindingOverrideData, bOverridesDefault) == 56, "Offset mismatch for FMovieSceneBindingOverrideData::bOverridesDefault");

// /Script/MovieScene.MovieSceneBindingProxy
// Kind: ScriptStruct; super: none
struct FMovieSceneBindingProxy
{
public:
    std::uint8_t BindingId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    void* Sequence; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMovieSceneBindingProxy, BindingId) == 0, "Offset mismatch for FMovieSceneBindingProxy::BindingId");
static_assert(offsetof(FMovieSceneBindingProxy, Sequence) == 16, "Offset mismatch for FMovieSceneBindingProxy::Sequence");

// /Script/MovieScene.MovieSceneBindingReference
// Kind: ScriptStruct; super: none
struct FMovieSceneBindingReference
{
public:
    std::uint8_t ID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Locator[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ResolveFlags; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0021
    void* CustomBinding; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMovieSceneBindingReference, ID) == 0, "Offset mismatch for FMovieSceneBindingReference::ID");
static_assert(offsetof(FMovieSceneBindingReference, Locator) == 16, "Offset mismatch for FMovieSceneBindingReference::Locator");
static_assert(offsetof(FMovieSceneBindingReference, ResolveFlags) == 32, "Offset mismatch for FMovieSceneBindingReference::ResolveFlags");
static_assert(offsetof(FMovieSceneBindingReference, CustomBinding) == 40, "Offset mismatch for FMovieSceneBindingReference::CustomBinding");

// /Script/MovieScene.MovieSceneBindingReferences
// Kind: ScriptStruct; super: none
struct FMovieSceneBindingReferences
{
public:
    TArray<void*> SortedReferences; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneBindingReferences, SortedReferences) == 0, "Offset mismatch for FMovieSceneBindingReferences::SortedReferences");

// /Script/MovieScene.MovieSceneBindingResolveContext
// Kind: ScriptStruct; super: none
struct FMovieSceneBindingResolveContext
{
public:
    void* WorldContext; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Binding[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneBindingResolveContext, WorldContext) == 0, "Offset mismatch for FMovieSceneBindingResolveContext::WorldContext");
static_assert(offsetof(FMovieSceneBindingResolveContext, Binding) == 8, "Offset mismatch for FMovieSceneBindingResolveContext::Binding");

// /Script/MovieScene.MovieSceneBindingResolveParams
// Kind: ScriptStruct; super: none
struct FMovieSceneBindingResolveParams
{
public:
    void* Sequence; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ObjectBindingID[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t SequenceID[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    void* Context; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMovieSceneBindingResolveParams, Sequence) == 0, "Offset mismatch for FMovieSceneBindingResolveParams::Sequence");
static_assert(offsetof(FMovieSceneBindingResolveParams, ObjectBindingID) == 8, "Offset mismatch for FMovieSceneBindingResolveParams::ObjectBindingID");
static_assert(offsetof(FMovieSceneBindingResolveParams, SequenceID) == 24, "Offset mismatch for FMovieSceneBindingResolveParams::SequenceID");
static_assert(offsetof(FMovieSceneBindingResolveParams, Context) == 32, "Offset mismatch for FMovieSceneBindingResolveParams::Context");

// /Script/MovieScene.MovieSceneBindingResolveResult
// Kind: ScriptStruct; super: none
struct FMovieSceneBindingResolveResult
{
public:
    TArray<void*> Objects; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    void* Object; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMovieSceneBindingResolveResult, Objects) == 0, "Offset mismatch for FMovieSceneBindingResolveResult::Objects");
static_assert(offsetof(FMovieSceneBindingResolveResult, Object) == 16, "Offset mismatch for FMovieSceneBindingResolveResult::Object");

// /Script/MovieScene.MovieSceneBoolChannel
// Kind: ScriptStruct; super: MovieSceneChannel
struct FMovieSceneBoolChannel
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t PreInfinityExtrap; // 0x0050 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PostInfinityExtrap; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0052
    TArray<void*> Times; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultValue; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasDefaultValue; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x006A
    TArray<void*> Values; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t KeyHandles[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneBoolChannel, PreInfinityExtrap) == 80, "Offset mismatch for FMovieSceneBoolChannel::PreInfinityExtrap");
static_assert(offsetof(FMovieSceneBoolChannel, PostInfinityExtrap) == 81, "Offset mismatch for FMovieSceneBoolChannel::PostInfinityExtrap");
static_assert(offsetof(FMovieSceneBoolChannel, Times) == 88, "Offset mismatch for FMovieSceneBoolChannel::Times");
static_assert(offsetof(FMovieSceneBoolChannel, DefaultValue) == 104, "Offset mismatch for FMovieSceneBoolChannel::DefaultValue");
static_assert(offsetof(FMovieSceneBoolChannel, bHasDefaultValue) == 105, "Offset mismatch for FMovieSceneBoolChannel::bHasDefaultValue");
static_assert(offsetof(FMovieSceneBoolChannel, Values) == 112, "Offset mismatch for FMovieSceneBoolChannel::Values");
static_assert(offsetof(FMovieSceneBoolChannel, KeyHandles) == 128, "Offset mismatch for FMovieSceneBoolChannel::KeyHandles");

// /Script/MovieScene.MovieSceneByteChannel
// Kind: ScriptStruct; super: MovieSceneChannel
struct FMovieSceneByteChannel
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t PreInfinityExtrap; // 0x0050 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PostInfinityExtrap; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0052
    TArray<void*> Times; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultValue; // 0x0068 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bHasDefaultValue; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x006A
    TArray<void*> Values; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    void* Enum; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t KeyHandles[0x1]; // 0x0088 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneByteChannel, PreInfinityExtrap) == 80, "Offset mismatch for FMovieSceneByteChannel::PreInfinityExtrap");
static_assert(offsetof(FMovieSceneByteChannel, PostInfinityExtrap) == 81, "Offset mismatch for FMovieSceneByteChannel::PostInfinityExtrap");
static_assert(offsetof(FMovieSceneByteChannel, Times) == 88, "Offset mismatch for FMovieSceneByteChannel::Times");
static_assert(offsetof(FMovieSceneByteChannel, DefaultValue) == 104, "Offset mismatch for FMovieSceneByteChannel::DefaultValue");
static_assert(offsetof(FMovieSceneByteChannel, bHasDefaultValue) == 105, "Offset mismatch for FMovieSceneByteChannel::bHasDefaultValue");
static_assert(offsetof(FMovieSceneByteChannel, Values) == 112, "Offset mismatch for FMovieSceneByteChannel::Values");
static_assert(offsetof(FMovieSceneByteChannel, Enum) == 128, "Offset mismatch for FMovieSceneByteChannel::Enum");
static_assert(offsetof(FMovieSceneByteChannel, KeyHandles) == 136, "Offset mismatch for FMovieSceneByteChannel::KeyHandles");

// /Script/MovieScene.MovieSceneChannel
// Kind: ScriptStruct; super: none
struct FMovieSceneChannel
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneCompiledSequenceFlagStruct
// Kind: ScriptStruct; super: none
struct FMovieSceneCompiledSequenceFlagStruct
{
public:
    std::uint8_t bParentSequenceRequiresLowerFence; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bParentSequenceRequiresUpperFence (shared storage)
};

static_assert(offsetof(FMovieSceneCompiledSequenceFlagStruct, bParentSequenceRequiresLowerFence) == 0, "Offset mismatch for FMovieSceneCompiledSequenceFlagStruct::bParentSequenceRequiresLowerFence");

// /Script/MovieScene.MovieSceneConditionContainer
// Kind: ScriptStruct; super: none
struct FMovieSceneConditionContainer
{
public:
    void* Condition; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMovieSceneConditionContainer, Condition) == 0, "Offset mismatch for FMovieSceneConditionContainer::Condition");

// /Script/MovieScene.MovieSceneConditionContext
// Kind: ScriptStruct; super: none
struct FMovieSceneConditionContext
{
public:
    void* WorldContext; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Binding[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    TArray<void*> BoundObjects; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneConditionContext, WorldContext) == 0, "Offset mismatch for FMovieSceneConditionContext::WorldContext");
static_assert(offsetof(FMovieSceneConditionContext, Binding) == 8, "Offset mismatch for FMovieSceneConditionContext::Binding");
static_assert(offsetof(FMovieSceneConditionContext, BoundObjects) == 32, "Offset mismatch for FMovieSceneConditionContext::BoundObjects");

// /Script/MovieScene.MovieSceneCustomTimeWarpGetterStruct
// Kind: ScriptStruct; super: none
struct FMovieSceneCustomTimeWarpGetterStruct
{
public:
    void* Object; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMovieSceneCustomTimeWarpGetterStruct, Object) == 0, "Offset mismatch for FMovieSceneCustomTimeWarpGetterStruct::Object");

// /Script/MovieScene.MovieSceneDecorationContainer
// Kind: ScriptStruct; super: none
struct FMovieSceneDecorationContainer
{
public:
    TArray<void*> Decorations; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneDecorationContainer, Decorations) == 0, "Offset mismatch for FMovieSceneDecorationContainer::Decorations");

// /Script/MovieScene.MovieSceneDeterminismData
// Kind: ScriptStruct; super: none
struct FMovieSceneDeterminismData
{
public:
    TArray<void*> Fences; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bParentSequenceRequiresLowerFence; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bParentSequenceRequiresUpperFence; // 0x0011 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMovieSceneDeterminismData, Fences) == 0, "Offset mismatch for FMovieSceneDeterminismData::Fences");
static_assert(offsetof(FMovieSceneDeterminismData, bParentSequenceRequiresLowerFence) == 16, "Offset mismatch for FMovieSceneDeterminismData::bParentSequenceRequiresLowerFence");
static_assert(offsetof(FMovieSceneDeterminismData, bParentSequenceRequiresUpperFence) == 17, "Offset mismatch for FMovieSceneDeterminismData::bParentSequenceRequiresUpperFence");

// /Script/MovieScene.MovieSceneDeterminismFence
// Kind: ScriptStruct; super: none
struct FMovieSceneDeterminismFence
{
public:
    std::uint8_t FrameNumber[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t bInclusive; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMovieSceneDeterminismFence, FrameNumber) == 0, "Offset mismatch for FMovieSceneDeterminismFence::FrameNumber");
static_assert(offsetof(FMovieSceneDeterminismFence, bInclusive) == 4, "Offset mismatch for FMovieSceneDeterminismFence::bInclusive");

// /Script/MovieScene.MovieSceneDoubleChannel
// Kind: ScriptStruct; super: MovieSceneChannel
struct FMovieSceneDoubleChannel
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t PreInfinityExtrap; // 0x0050 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PostInfinityExtrap; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0052
    TArray<void*> Times; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Values; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    double DefaultValue; // 0x0078 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bHasDefaultValue; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0081
    std::uint8_t KeyHandles[0x48]; // 0x0088 (Size: 0x48, Type: StructProperty)
    std::uint8_t TickResolution[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneDoubleChannel, PreInfinityExtrap) == 80, "Offset mismatch for FMovieSceneDoubleChannel::PreInfinityExtrap");
static_assert(offsetof(FMovieSceneDoubleChannel, PostInfinityExtrap) == 81, "Offset mismatch for FMovieSceneDoubleChannel::PostInfinityExtrap");
static_assert(offsetof(FMovieSceneDoubleChannel, Times) == 88, "Offset mismatch for FMovieSceneDoubleChannel::Times");
static_assert(offsetof(FMovieSceneDoubleChannel, Values) == 104, "Offset mismatch for FMovieSceneDoubleChannel::Values");
static_assert(offsetof(FMovieSceneDoubleChannel, DefaultValue) == 120, "Offset mismatch for FMovieSceneDoubleChannel::DefaultValue");
static_assert(offsetof(FMovieSceneDoubleChannel, bHasDefaultValue) == 128, "Offset mismatch for FMovieSceneDoubleChannel::bHasDefaultValue");
static_assert(offsetof(FMovieSceneDoubleChannel, KeyHandles) == 136, "Offset mismatch for FMovieSceneDoubleChannel::KeyHandles");
static_assert(offsetof(FMovieSceneDoubleChannel, TickResolution) == 208, "Offset mismatch for FMovieSceneDoubleChannel::TickResolution");

// /Script/MovieScene.MovieSceneDoubleValue
// Kind: ScriptStruct; super: none
struct FMovieSceneDoubleValue
{
public:
    double Value; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Tangent[0x14]; // 0x0008 (Size: 0x14, Type: StructProperty)
    std::uint8_t InterpMode; // 0x001C (Size: 0x1, Type: ByteProperty)
    std::uint8_t TangentMode; // 0x001D (Size: 0x1, Type: ByteProperty)
    std::uint8_t PaddingByte; // 0x001E (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FMovieSceneDoubleValue, Value) == 0, "Offset mismatch for FMovieSceneDoubleValue::Value");
static_assert(offsetof(FMovieSceneDoubleValue, Tangent) == 8, "Offset mismatch for FMovieSceneDoubleValue::Tangent");
static_assert(offsetof(FMovieSceneDoubleValue, InterpMode) == 28, "Offset mismatch for FMovieSceneDoubleValue::InterpMode");
static_assert(offsetof(FMovieSceneDoubleValue, TangentMode) == 29, "Offset mismatch for FMovieSceneDoubleValue::TangentMode");
static_assert(offsetof(FMovieSceneDoubleValue, PaddingByte) == 30, "Offset mismatch for FMovieSceneDoubleValue::PaddingByte");

// /Script/MovieScene.MovieSceneDynamicBinding
// Kind: ScriptStruct; super: none
struct FMovieSceneDynamicBinding
{
public:
    void* Function; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ResolveParamsProperty[0x1]; // 0x0008 (Size: 0x1, Type: FieldPathProperty)
};

static_assert(offsetof(FMovieSceneDynamicBinding, Function) == 0, "Offset mismatch for FMovieSceneDynamicBinding::Function");
static_assert(offsetof(FMovieSceneDynamicBinding, ResolveParamsProperty) == 8, "Offset mismatch for FMovieSceneDynamicBinding::ResolveParamsProperty");

// /Script/MovieScene.MovieSceneDynamicBindingContainer
// Kind: ScriptStruct; super: none
struct FMovieSceneDynamicBindingContainer
{
public:
    std::uint8_t DynamicBinding[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneDynamicBindingContainer, DynamicBinding) == 0, "Offset mismatch for FMovieSceneDynamicBindingContainer::DynamicBinding");

// /Script/MovieScene.MovieSceneDynamicBindingPayloadVariable
// Kind: ScriptStruct; super: none
struct FMovieSceneDynamicBindingPayloadVariable
{
public:
    std::uint8_t ObjectValue[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    FString Value; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FMovieSceneDynamicBindingPayloadVariable, ObjectValue) == 0, "Offset mismatch for FMovieSceneDynamicBindingPayloadVariable::ObjectValue");
static_assert(offsetof(FMovieSceneDynamicBindingPayloadVariable, Value) == 24, "Offset mismatch for FMovieSceneDynamicBindingPayloadVariable::Value");

// /Script/MovieScene.MovieSceneDynamicBindingResolveParams
// Kind: ScriptStruct; super: none
struct FMovieSceneDynamicBindingResolveParams
{
public:
    void* Sequence; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ObjectBindingID[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    void* RootSequence; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMovieSceneDynamicBindingResolveParams, Sequence) == 0, "Offset mismatch for FMovieSceneDynamicBindingResolveParams::Sequence");
static_assert(offsetof(FMovieSceneDynamicBindingResolveParams, ObjectBindingID) == 8, "Offset mismatch for FMovieSceneDynamicBindingResolveParams::ObjectBindingID");
static_assert(offsetof(FMovieSceneDynamicBindingResolveParams, RootSequence) == 24, "Offset mismatch for FMovieSceneDynamicBindingResolveParams::RootSequence");

// /Script/MovieScene.MovieSceneDynamicBindingResolveResult
// Kind: ScriptStruct; super: none
struct FMovieSceneDynamicBindingResolveResult
{
public:
    TArray<void*> Objects; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    void* Object; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsPossessedObject; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMovieSceneDynamicBindingResolveResult, Objects) == 0, "Offset mismatch for FMovieSceneDynamicBindingResolveResult::Objects");
static_assert(offsetof(FMovieSceneDynamicBindingResolveResult, Object) == 16, "Offset mismatch for FMovieSceneDynamicBindingResolveResult::Object");
static_assert(offsetof(FMovieSceneDynamicBindingResolveResult, bIsPossessedObject) == 24, "Offset mismatch for FMovieSceneDynamicBindingResolveResult::bIsPossessedObject");

// /Script/MovieScene.MovieSceneEasingSettings
// Kind: ScriptStruct; super: none
struct FMovieSceneEasingSettings
{
public:
    std::int32_t AutoEaseInDuration; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t AutoEaseOutDuration; // 0x0004 (Size: 0x4, Type: IntProperty)
    TScriptInterface<void> EaseIn; // 0x0008 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t bManualEaseIn; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0019
    std::int32_t ManualEaseInDuration; // 0x001C (Size: 0x4, Type: IntProperty)
    TScriptInterface<void> EaseOut; // 0x0020 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t bManualEaseOut; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    std::int32_t ManualEaseOutDuration; // 0x0034 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMovieSceneEasingSettings, AutoEaseInDuration) == 0, "Offset mismatch for FMovieSceneEasingSettings::AutoEaseInDuration");
static_assert(offsetof(FMovieSceneEasingSettings, AutoEaseOutDuration) == 4, "Offset mismatch for FMovieSceneEasingSettings::AutoEaseOutDuration");
static_assert(offsetof(FMovieSceneEasingSettings, EaseIn) == 8, "Offset mismatch for FMovieSceneEasingSettings::EaseIn");
static_assert(offsetof(FMovieSceneEasingSettings, bManualEaseIn) == 24, "Offset mismatch for FMovieSceneEasingSettings::bManualEaseIn");
static_assert(offsetof(FMovieSceneEasingSettings, ManualEaseInDuration) == 28, "Offset mismatch for FMovieSceneEasingSettings::ManualEaseInDuration");
static_assert(offsetof(FMovieSceneEasingSettings, EaseOut) == 32, "Offset mismatch for FMovieSceneEasingSettings::EaseOut");
static_assert(offsetof(FMovieSceneEasingSettings, bManualEaseOut) == 48, "Offset mismatch for FMovieSceneEasingSettings::bManualEaseOut");
static_assert(offsetof(FMovieSceneEasingSettings, ManualEaseOutDuration) == 52, "Offset mismatch for FMovieSceneEasingSettings::ManualEaseOutDuration");

// /Script/MovieScene.MovieSceneEditorData
// Kind: ScriptStruct; super: none
struct FMovieSceneEditorData
{
public:
    TMap<void*, void*> ExpansionStates; // 0x0000 (Size: 0x10, Type: MapProperty)
    TArray<void*> PinnedNodes; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    double ViewStart; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    double ViewEnd; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    double WorkStart; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    double WorkEnd; // 0x0038 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t MarkedFrames[0x10]; // 0x0040 (Size: 0x10, Type: SetProperty)
    std::uint8_t WorkingRange[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    std::uint8_t ViewRange[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    std::uint8_t NavigationToolState[0x78]; // 0x0070 (Size: 0x78, Type: StructProperty)
    TArray<void*> SoloNodes; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MuteNodes; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneEditorData, ExpansionStates) == 0, "Offset mismatch for FMovieSceneEditorData::ExpansionStates");
static_assert(offsetof(FMovieSceneEditorData, PinnedNodes) == 16, "Offset mismatch for FMovieSceneEditorData::PinnedNodes");
static_assert(offsetof(FMovieSceneEditorData, ViewStart) == 32, "Offset mismatch for FMovieSceneEditorData::ViewStart");
static_assert(offsetof(FMovieSceneEditorData, ViewEnd) == 40, "Offset mismatch for FMovieSceneEditorData::ViewEnd");
static_assert(offsetof(FMovieSceneEditorData, WorkStart) == 48, "Offset mismatch for FMovieSceneEditorData::WorkStart");
static_assert(offsetof(FMovieSceneEditorData, WorkEnd) == 56, "Offset mismatch for FMovieSceneEditorData::WorkEnd");
static_assert(offsetof(FMovieSceneEditorData, MarkedFrames) == 64, "Offset mismatch for FMovieSceneEditorData::MarkedFrames");
static_assert(offsetof(FMovieSceneEditorData, WorkingRange) == 80, "Offset mismatch for FMovieSceneEditorData::WorkingRange");
static_assert(offsetof(FMovieSceneEditorData, ViewRange) == 96, "Offset mismatch for FMovieSceneEditorData::ViewRange");
static_assert(offsetof(FMovieSceneEditorData, NavigationToolState) == 112, "Offset mismatch for FMovieSceneEditorData::NavigationToolState");
static_assert(offsetof(FMovieSceneEditorData, SoloNodes) == 232, "Offset mismatch for FMovieSceneEditorData::SoloNodes");
static_assert(offsetof(FMovieSceneEditorData, MuteNodes) == 248, "Offset mismatch for FMovieSceneEditorData::MuteNodes");

// /Script/MovieScene.MovieSceneEmptyStruct
// Kind: ScriptStruct; super: none
struct FMovieSceneEmptyStruct
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneEntityComponentField
// Kind: ScriptStruct; super: none
struct FMovieSceneEntityComponentField
{
public:
    std::uint8_t PersistentEntityTree[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t OneShotEntityTree[0x60]; // 0x0060 (Size: 0x60, Type: StructProperty)
    TArray<void*> Entities; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EntityMetaData; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SharedMetaData; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneEntityComponentField, PersistentEntityTree) == 0, "Offset mismatch for FMovieSceneEntityComponentField::PersistentEntityTree");
static_assert(offsetof(FMovieSceneEntityComponentField, OneShotEntityTree) == 96, "Offset mismatch for FMovieSceneEntityComponentField::OneShotEntityTree");
static_assert(offsetof(FMovieSceneEntityComponentField, Entities) == 192, "Offset mismatch for FMovieSceneEntityComponentField::Entities");
static_assert(offsetof(FMovieSceneEntityComponentField, EntityMetaData) == 208, "Offset mismatch for FMovieSceneEntityComponentField::EntityMetaData");
static_assert(offsetof(FMovieSceneEntityComponentField, SharedMetaData) == 224, "Offset mismatch for FMovieSceneEntityComponentField::SharedMetaData");

// /Script/MovieScene.MovieSceneEntitySystemGraph
// Kind: ScriptStruct; super: none
struct FMovieSceneEntitySystemGraph
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    std::uint8_t Nodes[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneEntitySystemGraph, Nodes) == 184, "Offset mismatch for FMovieSceneEntitySystemGraph::Nodes");

// /Script/MovieScene.MovieSceneEntitySystemGraphNode
// Kind: ScriptStruct; super: none
struct FMovieSceneEntitySystemGraphNode
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    void* System; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMovieSceneEntitySystemGraphNode, System) == 32, "Offset mismatch for FMovieSceneEntitySystemGraphNode::System");

// /Script/MovieScene.MovieSceneEntitySystemGraphNodes
// Kind: ScriptStruct; super: none
struct FMovieSceneEntitySystemGraphNodes
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneEvalTemplate
// Kind: ScriptStruct; super: MovieSceneEvalTemplateBase
struct FMovieSceneEvalTemplate
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t CompletionMode; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    TWeakObjectPtr<void> SourceSectionPtr; // 0x0014 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FMovieSceneEvalTemplate, CompletionMode) == 16, "Offset mismatch for FMovieSceneEvalTemplate::CompletionMode");
static_assert(offsetof(FMovieSceneEvalTemplate, SourceSectionPtr) == 20, "Offset mismatch for FMovieSceneEvalTemplate::SourceSectionPtr");

// /Script/MovieScene.MovieSceneEvalTemplateBase
// Kind: ScriptStruct; super: none
struct FMovieSceneEvalTemplateBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneEvalTemplatePtr
// Kind: ScriptStruct; super: none
struct FMovieSceneEvalTemplatePtr
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneEvaluationField
// Kind: ScriptStruct; super: none
struct FMovieSceneEvaluationField
{
public:
    TArray<void*> Ranges; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Groups; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MetaData; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneEvaluationField, Ranges) == 0, "Offset mismatch for FMovieSceneEvaluationField::Ranges");
static_assert(offsetof(FMovieSceneEvaluationField, Groups) == 16, "Offset mismatch for FMovieSceneEvaluationField::Groups");
static_assert(offsetof(FMovieSceneEvaluationField, MetaData) == 32, "Offset mismatch for FMovieSceneEvaluationField::MetaData");

// /Script/MovieScene.MovieSceneEvaluationFieldEntity
// Kind: ScriptStruct; super: none
struct FMovieSceneEvaluationFieldEntity
{
public:
    std::uint8_t Key[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::int32_t SharedMetaDataIndex; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMovieSceneEvaluationFieldEntity, Key) == 0, "Offset mismatch for FMovieSceneEvaluationFieldEntity::Key");
static_assert(offsetof(FMovieSceneEvaluationFieldEntity, SharedMetaDataIndex) == 12, "Offset mismatch for FMovieSceneEvaluationFieldEntity::SharedMetaDataIndex");

// /Script/MovieScene.MovieSceneEvaluationFieldEntityKey
// Kind: ScriptStruct; super: none
struct FMovieSceneEvaluationFieldEntityKey
{
public:
    TWeakObjectPtr<void> EntityOwner; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint32_t EntityID; // 0x0008 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FMovieSceneEvaluationFieldEntityKey, EntityOwner) == 0, "Offset mismatch for FMovieSceneEvaluationFieldEntityKey::EntityOwner");
static_assert(offsetof(FMovieSceneEvaluationFieldEntityKey, EntityID) == 8, "Offset mismatch for FMovieSceneEvaluationFieldEntityKey::EntityID");

// /Script/MovieScene.MovieSceneEvaluationFieldEntityMetaData
// Kind: ScriptStruct; super: none
struct FMovieSceneEvaluationFieldEntityMetaData
{
public:
    std::uint8_t Condition[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    FString OverrideBoundPropertyPath; // 0x0020 (Size: 0x10, Type: StrProperty)
    std::uint8_t NotifyFunctionName[0x4]; // 0x0030 (Size: 0x4, Type: NameProperty)
    std::uint8_t ForcedTime[0x4]; // 0x0034 (Size: 0x4, Type: StructProperty)
    std::uint8_t Flags; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEvaluateInSequencePostRoll; // 0x0039 (Size: 0x1, Type: BoolProperty)
    // 0x0039 BoolProperty bEvaluateInSequencePreRoll (shared storage)
};

static_assert(offsetof(FMovieSceneEvaluationFieldEntityMetaData, Condition) == 0, "Offset mismatch for FMovieSceneEvaluationFieldEntityMetaData::Condition");
static_assert(offsetof(FMovieSceneEvaluationFieldEntityMetaData, OverrideBoundPropertyPath) == 32, "Offset mismatch for FMovieSceneEvaluationFieldEntityMetaData::OverrideBoundPropertyPath");
static_assert(offsetof(FMovieSceneEvaluationFieldEntityMetaData, NotifyFunctionName) == 48, "Offset mismatch for FMovieSceneEvaluationFieldEntityMetaData::NotifyFunctionName");
static_assert(offsetof(FMovieSceneEvaluationFieldEntityMetaData, ForcedTime) == 52, "Offset mismatch for FMovieSceneEvaluationFieldEntityMetaData::ForcedTime");
static_assert(offsetof(FMovieSceneEvaluationFieldEntityMetaData, Flags) == 56, "Offset mismatch for FMovieSceneEvaluationFieldEntityMetaData::Flags");
static_assert(offsetof(FMovieSceneEvaluationFieldEntityMetaData, bEvaluateInSequencePostRoll) == 57, "Offset mismatch for FMovieSceneEvaluationFieldEntityMetaData::bEvaluateInSequencePostRoll");

// /Script/MovieScene.MovieSceneEvaluationFieldEntityTree
// Kind: ScriptStruct; super: none
struct FMovieSceneEvaluationFieldEntityTree
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneEvaluationFieldSegmentPtr
// Kind: ScriptStruct; super: MovieSceneEvaluationFieldTrackPtr
struct FMovieSceneEvaluationFieldSegmentPtr
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SegmentId[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneEvaluationFieldSegmentPtr, SegmentId) == 8, "Offset mismatch for FMovieSceneEvaluationFieldSegmentPtr::SegmentId");

// /Script/MovieScene.MovieSceneEvaluationFieldSharedEntityMetaData
// Kind: ScriptStruct; super: none
struct FMovieSceneEvaluationFieldSharedEntityMetaData
{
public:
    std::uint8_t ObjectBindingID[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneEvaluationFieldSharedEntityMetaData, ObjectBindingID) == 0, "Offset mismatch for FMovieSceneEvaluationFieldSharedEntityMetaData::ObjectBindingID");

// /Script/MovieScene.MovieSceneEvaluationFieldTrackPtr
// Kind: ScriptStruct; super: none
struct FMovieSceneEvaluationFieldTrackPtr
{
public:
    std::uint8_t SequenceID[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t TrackIdentifier[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneEvaluationFieldTrackPtr, SequenceID) == 0, "Offset mismatch for FMovieSceneEvaluationFieldTrackPtr::SequenceID");
static_assert(offsetof(FMovieSceneEvaluationFieldTrackPtr, TrackIdentifier) == 4, "Offset mismatch for FMovieSceneEvaluationFieldTrackPtr::TrackIdentifier");

// /Script/MovieScene.MovieSceneEvaluationGroup
// Kind: ScriptStruct; super: none
struct FMovieSceneEvaluationGroup
{
public:
    TArray<void*> LUTIndices; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TrackLUT; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SectionLUT; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneEvaluationGroup, LUTIndices) == 0, "Offset mismatch for FMovieSceneEvaluationGroup::LUTIndices");
static_assert(offsetof(FMovieSceneEvaluationGroup, TrackLUT) == 16, "Offset mismatch for FMovieSceneEvaluationGroup::TrackLUT");
static_assert(offsetof(FMovieSceneEvaluationGroup, SectionLUT) == 32, "Offset mismatch for FMovieSceneEvaluationGroup::SectionLUT");

// /Script/MovieScene.MovieSceneEvaluationGroupLUTIndex
// Kind: ScriptStruct; super: none
struct FMovieSceneEvaluationGroupLUTIndex
{
public:
    std::int32_t NumInitPtrs; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t NumEvalPtrs; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMovieSceneEvaluationGroupLUTIndex, NumInitPtrs) == 0, "Offset mismatch for FMovieSceneEvaluationGroupLUTIndex::NumInitPtrs");
static_assert(offsetof(FMovieSceneEvaluationGroupLUTIndex, NumEvalPtrs) == 4, "Offset mismatch for FMovieSceneEvaluationGroupLUTIndex::NumEvalPtrs");

// /Script/MovieScene.MovieSceneEvaluationHookComponent
// Kind: ScriptStruct; super: none
struct FMovieSceneEvaluationHookComponent
{
public:
    TScriptInterface<void> Interface; // 0x0000 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(FMovieSceneEvaluationHookComponent, Interface) == 0, "Offset mismatch for FMovieSceneEvaluationHookComponent::Interface");

// /Script/MovieScene.MovieSceneEvaluationHookEvent
// Kind: ScriptStruct; super: none
struct FMovieSceneEvaluationHookEvent
{
public:
    std::uint8_t Hook[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneEvaluationHookEvent, Hook) == 0, "Offset mismatch for FMovieSceneEvaluationHookEvent::Hook");

// /Script/MovieScene.MovieSceneEvaluationHookEventContainer
// Kind: ScriptStruct; super: none
struct FMovieSceneEvaluationHookEventContainer
{
public:
    TArray<void*> Events; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneEvaluationHookEventContainer, Events) == 0, "Offset mismatch for FMovieSceneEvaluationHookEventContainer::Events");

// /Script/MovieScene.MovieSceneEvaluationInstanceKey
// Kind: ScriptStruct; super: none
struct FMovieSceneEvaluationInstanceKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneEvaluationKey
// Kind: ScriptStruct; super: none
struct FMovieSceneEvaluationKey
{
public:
    std::uint8_t SequenceID[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t TrackIdentifier[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint32_t SectionIndex; // 0x0008 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FMovieSceneEvaluationKey, SequenceID) == 0, "Offset mismatch for FMovieSceneEvaluationKey::SequenceID");
static_assert(offsetof(FMovieSceneEvaluationKey, TrackIdentifier) == 4, "Offset mismatch for FMovieSceneEvaluationKey::TrackIdentifier");
static_assert(offsetof(FMovieSceneEvaluationKey, SectionIndex) == 8, "Offset mismatch for FMovieSceneEvaluationKey::SectionIndex");

// /Script/MovieScene.MovieSceneEvaluationMetaData
// Kind: ScriptStruct; super: none
struct FMovieSceneEvaluationMetaData
{
public:
    TArray<void*> ActiveSequences; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveEntities; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneEvaluationMetaData, ActiveSequences) == 0, "Offset mismatch for FMovieSceneEvaluationMetaData::ActiveSequences");
static_assert(offsetof(FMovieSceneEvaluationMetaData, ActiveEntities) == 16, "Offset mismatch for FMovieSceneEvaluationMetaData::ActiveEntities");

// /Script/MovieScene.MovieSceneEvaluationOperand
// Kind: ScriptStruct; super: none
struct FMovieSceneEvaluationOperand
{
public:
    std::uint8_t ObjectBindingID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t SequenceID[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneEvaluationOperand, ObjectBindingID) == 0, "Offset mismatch for FMovieSceneEvaluationOperand::ObjectBindingID");
static_assert(offsetof(FMovieSceneEvaluationOperand, SequenceID) == 16, "Offset mismatch for FMovieSceneEvaluationOperand::SequenceID");

// /Script/MovieScene.MovieSceneEvaluationTemplate
// Kind: ScriptStruct; super: none
struct FMovieSceneEvaluationTemplate
{
public:
    TMap<void*, void*> Tracks; // 0x0000 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0000[0x10]; // 0x0010
    std::uint8_t SequenceSignature[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t TemplateSerialNumber[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t TemplateLedger[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneEvaluationTemplate, Tracks) == 0, "Offset mismatch for FMovieSceneEvaluationTemplate::Tracks");
static_assert(offsetof(FMovieSceneEvaluationTemplate, SequenceSignature) == 32, "Offset mismatch for FMovieSceneEvaluationTemplate::SequenceSignature");
static_assert(offsetof(FMovieSceneEvaluationTemplate, TemplateSerialNumber) == 48, "Offset mismatch for FMovieSceneEvaluationTemplate::TemplateSerialNumber");
static_assert(offsetof(FMovieSceneEvaluationTemplate, TemplateLedger) == 56, "Offset mismatch for FMovieSceneEvaluationTemplate::TemplateLedger");

// /Script/MovieScene.MovieSceneEvaluationTemplateSerialNumber
// Kind: ScriptStruct; super: none
struct FMovieSceneEvaluationTemplateSerialNumber
{
public:
    std::uint32_t Value; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FMovieSceneEvaluationTemplateSerialNumber, Value) == 0, "Offset mismatch for FMovieSceneEvaluationTemplateSerialNumber::Value");

// /Script/MovieScene.MovieSceneEvaluationTrack
// Kind: ScriptStruct; super: none
struct FMovieSceneEvaluationTrack
{
public:
    std::uint8_t ObjectBindingID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint16_t EvaluationPriority; // 0x0010 (Size: 0x2, Type: UInt16Property)
    std::uint8_t EvaluationMethod; // 0x0012 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0013
    TWeakObjectPtr<void> SourceTrack; // 0x0014 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    TArray<void*> ChildTemplates; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TrackTemplate[0x38]; // 0x0030 (Size: 0x38, Type: StructProperty)
    std::uint8_t EvaluationGroup[0x4]; // 0x0068 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEvaluateInPostroll; // 0x006C (Size: 0x1, Type: BoolProperty)
    // 0x006C BoolProperty bEvaluateInPreroll (shared storage)
    // 0x006C BoolProperty bTearDownPriority (shared storage)
};

static_assert(offsetof(FMovieSceneEvaluationTrack, ObjectBindingID) == 0, "Offset mismatch for FMovieSceneEvaluationTrack::ObjectBindingID");
static_assert(offsetof(FMovieSceneEvaluationTrack, EvaluationPriority) == 16, "Offset mismatch for FMovieSceneEvaluationTrack::EvaluationPriority");
static_assert(offsetof(FMovieSceneEvaluationTrack, EvaluationMethod) == 18, "Offset mismatch for FMovieSceneEvaluationTrack::EvaluationMethod");
static_assert(offsetof(FMovieSceneEvaluationTrack, SourceTrack) == 20, "Offset mismatch for FMovieSceneEvaluationTrack::SourceTrack");
static_assert(offsetof(FMovieSceneEvaluationTrack, ChildTemplates) == 32, "Offset mismatch for FMovieSceneEvaluationTrack::ChildTemplates");
static_assert(offsetof(FMovieSceneEvaluationTrack, TrackTemplate) == 48, "Offset mismatch for FMovieSceneEvaluationTrack::TrackTemplate");
static_assert(offsetof(FMovieSceneEvaluationTrack, EvaluationGroup) == 104, "Offset mismatch for FMovieSceneEvaluationTrack::EvaluationGroup");
static_assert(offsetof(FMovieSceneEvaluationTrack, bEvaluateInPostroll) == 108, "Offset mismatch for FMovieSceneEvaluationTrack::bEvaluateInPostroll");

// /Script/MovieScene.MovieSceneExpansionState
// Kind: ScriptStruct; super: none
struct FMovieSceneExpansionState
{
public:
    std::uint8_t bExpanded; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMovieSceneExpansionState, bExpanded) == 0, "Offset mismatch for FMovieSceneExpansionState::bExpanded");

// /Script/MovieScene.MovieSceneFieldEntry_ChildTemplate
// Kind: ScriptStruct; super: none
struct FMovieSceneFieldEntry_ChildTemplate
{
public:
    std::uint16_t ChildIndex; // 0x0000 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Flags; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0003
    std::uint8_t ForcedTime[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneFieldEntry_ChildTemplate, ChildIndex) == 0, "Offset mismatch for FMovieSceneFieldEntry_ChildTemplate::ChildIndex");
static_assert(offsetof(FMovieSceneFieldEntry_ChildTemplate, Flags) == 2, "Offset mismatch for FMovieSceneFieldEntry_ChildTemplate::Flags");
static_assert(offsetof(FMovieSceneFieldEntry_ChildTemplate, ForcedTime) == 4, "Offset mismatch for FMovieSceneFieldEntry_ChildTemplate::ForcedTime");

// /Script/MovieScene.MovieSceneFieldEntry_EvaluationTrack
// Kind: ScriptStruct; super: none
struct FMovieSceneFieldEntry_EvaluationTrack
{
public:
    std::uint8_t TrackPtr[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint16_t NumChildren; // 0x0008 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FMovieSceneFieldEntry_EvaluationTrack, TrackPtr) == 0, "Offset mismatch for FMovieSceneFieldEntry_EvaluationTrack::TrackPtr");
static_assert(offsetof(FMovieSceneFieldEntry_EvaluationTrack, NumChildren) == 8, "Offset mismatch for FMovieSceneFieldEntry_EvaluationTrack::NumChildren");

// /Script/MovieScene.MovieSceneFixedPlayRateStruct
// Kind: ScriptStruct; super: none
struct FMovieSceneFixedPlayRateStruct
{
public:
    double PlayRate; // 0x0000 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FMovieSceneFixedPlayRateStruct, PlayRate) == 0, "Offset mismatch for FMovieSceneFixedPlayRateStruct::PlayRate");

// /Script/MovieScene.MovieSceneFloatChannel
// Kind: ScriptStruct; super: MovieSceneChannel
struct FMovieSceneFloatChannel
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t PreInfinityExtrap; // 0x0050 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PostInfinityExtrap; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0052
    TArray<void*> Times; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Values; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    float DefaultValue; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasDefaultValue; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x007D
    std::uint8_t KeyHandles[0x48]; // 0x0080 (Size: 0x48, Type: StructProperty)
    std::uint8_t TickResolution[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneFloatChannel, PreInfinityExtrap) == 80, "Offset mismatch for FMovieSceneFloatChannel::PreInfinityExtrap");
static_assert(offsetof(FMovieSceneFloatChannel, PostInfinityExtrap) == 81, "Offset mismatch for FMovieSceneFloatChannel::PostInfinityExtrap");
static_assert(offsetof(FMovieSceneFloatChannel, Times) == 88, "Offset mismatch for FMovieSceneFloatChannel::Times");
static_assert(offsetof(FMovieSceneFloatChannel, Values) == 104, "Offset mismatch for FMovieSceneFloatChannel::Values");
static_assert(offsetof(FMovieSceneFloatChannel, DefaultValue) == 120, "Offset mismatch for FMovieSceneFloatChannel::DefaultValue");
static_assert(offsetof(FMovieSceneFloatChannel, bHasDefaultValue) == 124, "Offset mismatch for FMovieSceneFloatChannel::bHasDefaultValue");
static_assert(offsetof(FMovieSceneFloatChannel, KeyHandles) == 128, "Offset mismatch for FMovieSceneFloatChannel::KeyHandles");
static_assert(offsetof(FMovieSceneFloatChannel, TickResolution) == 200, "Offset mismatch for FMovieSceneFloatChannel::TickResolution");

// /Script/MovieScene.MovieSceneFloatValue
// Kind: ScriptStruct; super: none
struct FMovieSceneFloatValue
{
public:
    float Value; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Tangent[0x14]; // 0x0004 (Size: 0x14, Type: StructProperty)
    std::uint8_t InterpMode; // 0x0018 (Size: 0x1, Type: ByteProperty)
    std::uint8_t TangentMode; // 0x0019 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PaddingByte; // 0x001A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FMovieSceneFloatValue, Value) == 0, "Offset mismatch for FMovieSceneFloatValue::Value");
static_assert(offsetof(FMovieSceneFloatValue, Tangent) == 4, "Offset mismatch for FMovieSceneFloatValue::Tangent");
static_assert(offsetof(FMovieSceneFloatValue, InterpMode) == 24, "Offset mismatch for FMovieSceneFloatValue::InterpMode");
static_assert(offsetof(FMovieSceneFloatValue, TangentMode) == 25, "Offset mismatch for FMovieSceneFloatValue::TangentMode");
static_assert(offsetof(FMovieSceneFloatValue, PaddingByte) == 26, "Offset mismatch for FMovieSceneFloatValue::PaddingByte");

// /Script/MovieScene.MovieSceneFrameRange
// Kind: ScriptStruct; super: none
struct FMovieSceneFrameRange
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneIntegerChannel
// Kind: ScriptStruct; super: MovieSceneChannel
struct FMovieSceneIntegerChannel
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t PreInfinityExtrap; // 0x0050 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PostInfinityExtrap; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bInterpolateLinearKeys; // 0x0052 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0053
    TArray<void*> Times; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::int32_t DefaultValue; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::uint8_t bHasDefaultValue; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x006D
    TArray<void*> Values; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t KeyHandles[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneIntegerChannel, PreInfinityExtrap) == 80, "Offset mismatch for FMovieSceneIntegerChannel::PreInfinityExtrap");
static_assert(offsetof(FMovieSceneIntegerChannel, PostInfinityExtrap) == 81, "Offset mismatch for FMovieSceneIntegerChannel::PostInfinityExtrap");
static_assert(offsetof(FMovieSceneIntegerChannel, bInterpolateLinearKeys) == 82, "Offset mismatch for FMovieSceneIntegerChannel::bInterpolateLinearKeys");
static_assert(offsetof(FMovieSceneIntegerChannel, Times) == 88, "Offset mismatch for FMovieSceneIntegerChannel::Times");
static_assert(offsetof(FMovieSceneIntegerChannel, DefaultValue) == 104, "Offset mismatch for FMovieSceneIntegerChannel::DefaultValue");
static_assert(offsetof(FMovieSceneIntegerChannel, bHasDefaultValue) == 108, "Offset mismatch for FMovieSceneIntegerChannel::bHasDefaultValue");
static_assert(offsetof(FMovieSceneIntegerChannel, Values) == 112, "Offset mismatch for FMovieSceneIntegerChannel::Values");
static_assert(offsetof(FMovieSceneIntegerChannel, KeyHandles) == 128, "Offset mismatch for FMovieSceneIntegerChannel::KeyHandles");

// /Script/MovieScene.MovieSceneInverseNestedSequenceTransform
// Kind: ScriptStruct; super: none
struct FMovieSceneInverseNestedSequenceTransform
{
public:
    std::uint8_t timescale[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Offset[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneInverseNestedSequenceTransform, timescale) == 0, "Offset mismatch for FMovieSceneInverseNestedSequenceTransform::timescale");
static_assert(offsetof(FMovieSceneInverseNestedSequenceTransform, Offset) == 8, "Offset mismatch for FMovieSceneInverseNestedSequenceTransform::Offset");

// /Script/MovieScene.MovieSceneInverseSequenceTransform
// Kind: ScriptStruct; super: none
struct FMovieSceneInverseSequenceTransform
{
public:
    std::uint8_t LinearTransform[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> NestedTransforms; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneInverseSequenceTransform, LinearTransform) == 0, "Offset mismatch for FMovieSceneInverseSequenceTransform::LinearTransform");
static_assert(offsetof(FMovieSceneInverseSequenceTransform, NestedTransforms) == 16, "Offset mismatch for FMovieSceneInverseSequenceTransform::NestedTransforms");

// /Script/MovieScene.MovieSceneKeyHandleMap
// Kind: ScriptStruct; super: KeyHandleLookupTable
struct FMovieSceneKeyHandleMap
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneKeyStruct
// Kind: ScriptStruct; super: none
struct FMovieSceneKeyStruct
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneKeyTimeStruct
// Kind: ScriptStruct; super: MovieSceneKeyStruct
struct FMovieSceneKeyTimeStruct
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t time[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneKeyTimeStruct, time) == 8, "Offset mismatch for FMovieSceneKeyTimeStruct::time");

// /Script/MovieScene.MovieSceneMarkedFrame
// Kind: ScriptStruct; super: none
struct FMovieSceneMarkedFrame
{
public:
    std::uint8_t FrameNumber[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    FString Label; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::uint8_t bIsDeterminismFence; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInclusiveTime; // 0x0019 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMovieSceneMarkedFrame, FrameNumber) == 0, "Offset mismatch for FMovieSceneMarkedFrame::FrameNumber");
static_assert(offsetof(FMovieSceneMarkedFrame, Label) == 8, "Offset mismatch for FMovieSceneMarkedFrame::Label");
static_assert(offsetof(FMovieSceneMarkedFrame, bIsDeterminismFence) == 24, "Offset mismatch for FMovieSceneMarkedFrame::bIsDeterminismFence");
static_assert(offsetof(FMovieSceneMarkedFrame, bIsInclusiveTime) == 25, "Offset mismatch for FMovieSceneMarkedFrame::bIsInclusiveTime");

// /Script/MovieScene.MovieSceneNestedSequenceTransform
// Kind: ScriptStruct; super: none
struct FMovieSceneNestedSequenceTransform
{
public:
    std::uint8_t timescale[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Offset[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneNestedSequenceTransform, timescale) == 0, "Offset mismatch for FMovieSceneNestedSequenceTransform::timescale");
static_assert(offsetof(FMovieSceneNestedSequenceTransform, Offset) == 8, "Offset mismatch for FMovieSceneNestedSequenceTransform::Offset");

// /Script/MovieScene.MovieSceneNumericVariant
// Kind: ScriptStruct; super: none
struct FMovieSceneNumericVariant
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneObjectBindingID
// Kind: ScriptStruct; super: none
struct FMovieSceneObjectBindingID
{
public:
    std::uint8_t Guid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::int32_t SequenceID; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t ResolveParentIndex; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMovieSceneObjectBindingID, Guid) == 0, "Offset mismatch for FMovieSceneObjectBindingID::Guid");
static_assert(offsetof(FMovieSceneObjectBindingID, SequenceID) == 16, "Offset mismatch for FMovieSceneObjectBindingID::SequenceID");
static_assert(offsetof(FMovieSceneObjectBindingID, ResolveParentIndex) == 20, "Offset mismatch for FMovieSceneObjectBindingID::ResolveParentIndex");

// /Script/MovieScene.MovieSceneObjectBindingIDs
// Kind: ScriptStruct; super: none
struct FMovieSceneObjectBindingIDs
{
public:
    TArray<void*> IDs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneObjectBindingIDs, IDs) == 0, "Offset mismatch for FMovieSceneObjectBindingIDs::IDs");

// /Script/MovieScene.MovieSceneObjectPathChannel
// Kind: ScriptStruct; super: MovieSceneChannel
struct FMovieSceneObjectPathChannel
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* PropertyClass; // 0x0050 (Size: 0x8, Type: ClassProperty)
    TArray<void*> Times; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Values; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultValue[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t KeyHandles[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneObjectPathChannel, PropertyClass) == 80, "Offset mismatch for FMovieSceneObjectPathChannel::PropertyClass");
static_assert(offsetof(FMovieSceneObjectPathChannel, Times) == 88, "Offset mismatch for FMovieSceneObjectPathChannel::Times");
static_assert(offsetof(FMovieSceneObjectPathChannel, Values) == 104, "Offset mismatch for FMovieSceneObjectPathChannel::Values");
static_assert(offsetof(FMovieSceneObjectPathChannel, DefaultValue) == 120, "Offset mismatch for FMovieSceneObjectPathChannel::DefaultValue");
static_assert(offsetof(FMovieSceneObjectPathChannel, KeyHandles) == 160, "Offset mismatch for FMovieSceneObjectPathChannel::KeyHandles");

// /Script/MovieScene.MovieSceneObjectPathChannelKeyValue
// Kind: ScriptStruct; super: none
struct FMovieSceneObjectPathChannelKeyValue
{
public:
    std::uint8_t SoftPtr[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    void* HardPtr; // 0x0020 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMovieSceneObjectPathChannelKeyValue, SoftPtr) == 0, "Offset mismatch for FMovieSceneObjectPathChannelKeyValue::SoftPtr");
static_assert(offsetof(FMovieSceneObjectPathChannelKeyValue, HardPtr) == 32, "Offset mismatch for FMovieSceneObjectPathChannelKeyValue::HardPtr");

// /Script/MovieScene.MovieSceneOrderedEvaluationKey
// Kind: ScriptStruct; super: none
struct FMovieSceneOrderedEvaluationKey
{
public:
    std::uint8_t Key[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint16_t SetupIndex; // 0x000C (Size: 0x2, Type: UInt16Property)
    std::uint16_t TearDownIndex; // 0x000E (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FMovieSceneOrderedEvaluationKey, Key) == 0, "Offset mismatch for FMovieSceneOrderedEvaluationKey::Key");
static_assert(offsetof(FMovieSceneOrderedEvaluationKey, SetupIndex) == 12, "Offset mismatch for FMovieSceneOrderedEvaluationKey::SetupIndex");
static_assert(offsetof(FMovieSceneOrderedEvaluationKey, TearDownIndex) == 14, "Offset mismatch for FMovieSceneOrderedEvaluationKey::TearDownIndex");

// /Script/MovieScene.MovieScenePossessable
// Kind: ScriptStruct; super: none
struct FMovieScenePossessable
{
public:
    TArray<void*> Tags; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DynamicBinding[0x28]; // 0x0010 (Size: 0x28, Type: StructProperty)
    std::uint8_t Guid[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    FString Name; // 0x0048 (Size: 0x10, Type: StrProperty)
    std::uint8_t ParentGuid[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t SpawnableObjectBindingID[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieScenePossessable, Tags) == 0, "Offset mismatch for FMovieScenePossessable::Tags");
static_assert(offsetof(FMovieScenePossessable, DynamicBinding) == 16, "Offset mismatch for FMovieScenePossessable::DynamicBinding");
static_assert(offsetof(FMovieScenePossessable, Guid) == 56, "Offset mismatch for FMovieScenePossessable::Guid");
static_assert(offsetof(FMovieScenePossessable, Name) == 72, "Offset mismatch for FMovieScenePossessable::Name");
static_assert(offsetof(FMovieScenePossessable, ParentGuid) == 88, "Offset mismatch for FMovieScenePossessable::ParentGuid");
static_assert(offsetof(FMovieScenePossessable, SpawnableObjectBindingID) == 104, "Offset mismatch for FMovieScenePossessable::SpawnableObjectBindingID");

// /Script/MovieScene.MovieScenePropertyBinding
// Kind: ScriptStruct; super: none
struct FMovieScenePropertyBinding
{
public:
    std::uint8_t PropertyName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t PropertyPath[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t bCanUseClassLookup; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMovieScenePropertyBinding, PropertyName) == 0, "Offset mismatch for FMovieScenePropertyBinding::PropertyName");
static_assert(offsetof(FMovieScenePropertyBinding, PropertyPath) == 4, "Offset mismatch for FMovieScenePropertyBinding::PropertyPath");
static_assert(offsetof(FMovieScenePropertyBinding, bCanUseClassLookup) == 8, "Offset mismatch for FMovieScenePropertyBinding::bCanUseClassLookup");

// /Script/MovieScene.MovieScenePropertySectionData
// Kind: ScriptStruct; super: none
struct FMovieScenePropertySectionData
{
public:
    FName PropertyName; // 0x0000 (Size: 0x8, Type: NameProperty)
    FString PropertyPath; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FMovieScenePropertySectionData, PropertyName) == 0, "Offset mismatch for FMovieScenePropertySectionData::PropertyName");
static_assert(offsetof(FMovieScenePropertySectionData, PropertyPath) == 8, "Offset mismatch for FMovieScenePropertySectionData::PropertyPath");

// /Script/MovieScene.MovieScenePropertySectionTemplate
// Kind: ScriptStruct; super: MovieSceneEvalTemplate
struct FMovieScenePropertySectionTemplate
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t PropertyData[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieScenePropertySectionTemplate, PropertyData) == 32, "Offset mismatch for FMovieScenePropertySectionTemplate::PropertyData");

// /Script/MovieScene.MovieSceneRootEvaluationTemplateInstance
// Kind: ScriptStruct; super: none
struct FMovieSceneRootEvaluationTemplateInstance
{
public:
    void* EntitySystemLinker; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMovieSceneRootEvaluationTemplateInstance, EntitySystemLinker) == 0, "Offset mismatch for FMovieSceneRootEvaluationTemplateInstance::EntitySystemLinker");

// /Script/MovieScene.MovieSceneScalingAnchor
// Kind: ScriptStruct; super: none
struct FMovieSceneScalingAnchor
{
public:
    std::uint8_t Position[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::int32_t duration; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMovieSceneScalingAnchor, Position) == 0, "Offset mismatch for FMovieSceneScalingAnchor::Position");
static_assert(offsetof(FMovieSceneScalingAnchor, duration) == 4, "Offset mismatch for FMovieSceneScalingAnchor::duration");

// /Script/MovieScene.MovieSceneSectionEvalOptions
// Kind: ScriptStruct; super: none
struct FMovieSceneSectionEvalOptions
{
public:
    std::uint8_t bCanEditCompletionMode; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CompletionMode; // 0x0001 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMovieSceneSectionEvalOptions, bCanEditCompletionMode) == 0, "Offset mismatch for FMovieSceneSectionEvalOptions::bCanEditCompletionMode");
static_assert(offsetof(FMovieSceneSectionEvalOptions, CompletionMode) == 1, "Offset mismatch for FMovieSceneSectionEvalOptions::CompletionMode");

// /Script/MovieScene.MovieSceneSectionGroup
// Kind: ScriptStruct; super: none
struct FMovieSceneSectionGroup
{
public:
    TArray<void*> Sections; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneSectionGroup, Sections) == 0, "Offset mismatch for FMovieSceneSectionGroup::Sections");

// /Script/MovieScene.MovieSceneSectionParameters
// Kind: ScriptStruct; super: none
struct FMovieSceneSectionParameters
{
public:
    std::uint8_t StartFrameOffset[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t bCanLoop; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t EndFrameOffset[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t FirstLoopStartFrameOffset[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t timescale[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::int32_t HierarchicalBias; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Flags; // 0x001C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x001D
    float StartOffset; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float PreRollTime; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float PostRollTime; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMovieSceneSectionParameters, StartFrameOffset) == 0, "Offset mismatch for FMovieSceneSectionParameters::StartFrameOffset");
static_assert(offsetof(FMovieSceneSectionParameters, bCanLoop) == 4, "Offset mismatch for FMovieSceneSectionParameters::bCanLoop");
static_assert(offsetof(FMovieSceneSectionParameters, EndFrameOffset) == 8, "Offset mismatch for FMovieSceneSectionParameters::EndFrameOffset");
static_assert(offsetof(FMovieSceneSectionParameters, FirstLoopStartFrameOffset) == 12, "Offset mismatch for FMovieSceneSectionParameters::FirstLoopStartFrameOffset");
static_assert(offsetof(FMovieSceneSectionParameters, timescale) == 16, "Offset mismatch for FMovieSceneSectionParameters::timescale");
static_assert(offsetof(FMovieSceneSectionParameters, HierarchicalBias) == 24, "Offset mismatch for FMovieSceneSectionParameters::HierarchicalBias");
static_assert(offsetof(FMovieSceneSectionParameters, Flags) == 28, "Offset mismatch for FMovieSceneSectionParameters::Flags");
static_assert(offsetof(FMovieSceneSectionParameters, StartOffset) == 32, "Offset mismatch for FMovieSceneSectionParameters::StartOffset");
static_assert(offsetof(FMovieSceneSectionParameters, PreRollTime) == 36, "Offset mismatch for FMovieSceneSectionParameters::PreRollTime");
static_assert(offsetof(FMovieSceneSectionParameters, PostRollTime) == 40, "Offset mismatch for FMovieSceneSectionParameters::PostRollTime");

// /Script/MovieScene.MovieSceneSectionTimingParametersFrames
// Kind: ScriptStruct; super: none
struct FMovieSceneSectionTimingParametersFrames
{
public:
    std::uint8_t PlayRate[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t InnerStartOffset[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t InnerEndOffset[0x4]; // 0x000C (Size: 0x4, Type: StructProperty)
    std::uint8_t FirstLoopStartOffset[0x4]; // 0x0010 (Size: 0x4, Type: StructProperty)
    std::uint8_t bClampToInnerRange; // 0x0014 (Size: 0x1, Type: BoolProperty)
    // 0x0014 BoolProperty bClampToOuterRange (shared storage)
    // 0x0014 BoolProperty bLoop (shared storage)
    // 0x0014 BoolProperty bReverse (shared storage)
};

static_assert(offsetof(FMovieSceneSectionTimingParametersFrames, PlayRate) == 0, "Offset mismatch for FMovieSceneSectionTimingParametersFrames::PlayRate");
static_assert(offsetof(FMovieSceneSectionTimingParametersFrames, InnerStartOffset) == 8, "Offset mismatch for FMovieSceneSectionTimingParametersFrames::InnerStartOffset");
static_assert(offsetof(FMovieSceneSectionTimingParametersFrames, InnerEndOffset) == 12, "Offset mismatch for FMovieSceneSectionTimingParametersFrames::InnerEndOffset");
static_assert(offsetof(FMovieSceneSectionTimingParametersFrames, FirstLoopStartOffset) == 16, "Offset mismatch for FMovieSceneSectionTimingParametersFrames::FirstLoopStartOffset");
static_assert(offsetof(FMovieSceneSectionTimingParametersFrames, bClampToInnerRange) == 20, "Offset mismatch for FMovieSceneSectionTimingParametersFrames::bClampToInnerRange");

// /Script/MovieScene.MovieSceneSectionTimingParametersSeconds
// Kind: ScriptStruct; super: none
struct FMovieSceneSectionTimingParametersSeconds
{
public:
    std::uint8_t PlayRate[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    float InnerStartOffset; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float InnerEndOffset; // 0x000C (Size: 0x4, Type: FloatProperty)
    float FirstLoopStartOffset; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampToInnerRange; // 0x0014 (Size: 0x1, Type: BoolProperty)
    // 0x0014 BoolProperty bClampToOuterRange (shared storage)
    // 0x0014 BoolProperty bLoop (shared storage)
    // 0x0014 BoolProperty bReverse (shared storage)
};

static_assert(offsetof(FMovieSceneSectionTimingParametersSeconds, PlayRate) == 0, "Offset mismatch for FMovieSceneSectionTimingParametersSeconds::PlayRate");
static_assert(offsetof(FMovieSceneSectionTimingParametersSeconds, InnerStartOffset) == 8, "Offset mismatch for FMovieSceneSectionTimingParametersSeconds::InnerStartOffset");
static_assert(offsetof(FMovieSceneSectionTimingParametersSeconds, InnerEndOffset) == 12, "Offset mismatch for FMovieSceneSectionTimingParametersSeconds::InnerEndOffset");
static_assert(offsetof(FMovieSceneSectionTimingParametersSeconds, FirstLoopStartOffset) == 16, "Offset mismatch for FMovieSceneSectionTimingParametersSeconds::FirstLoopStartOffset");
static_assert(offsetof(FMovieSceneSectionTimingParametersSeconds, bClampToInnerRange) == 20, "Offset mismatch for FMovieSceneSectionTimingParametersSeconds::bClampToInnerRange");

// /Script/MovieScene.MovieSceneSegment
// Kind: ScriptStruct; super: none
struct FMovieSceneSegment
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneSegmentIdentifier
// Kind: ScriptStruct; super: none
struct FMovieSceneSegmentIdentifier
{
public:
    std::int32_t IdentifierIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMovieSceneSegmentIdentifier, IdentifierIndex) == 0, "Offset mismatch for FMovieSceneSegmentIdentifier::IdentifierIndex");

// /Script/MovieScene.MovieSceneSequenceHierarchy
// Kind: ScriptStruct; super: none
struct FMovieSceneSequenceHierarchy
{
public:
    std::uint8_t RootNode[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Tree[0x60]; // 0x0018 (Size: 0x60, Type: StructProperty)
    std::uint8_t RootTransform[0x20]; // 0x0078 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> SubSequences; // 0x0098 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> Hierarchy; // 0x00A8 (Size: 0x10, Type: MapProperty)
    std::uint8_t AccumulatedNetworkMask; // 0x00B8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMovieSceneSequenceHierarchy, RootNode) == 0, "Offset mismatch for FMovieSceneSequenceHierarchy::RootNode");
static_assert(offsetof(FMovieSceneSequenceHierarchy, Tree) == 24, "Offset mismatch for FMovieSceneSequenceHierarchy::Tree");
static_assert(offsetof(FMovieSceneSequenceHierarchy, RootTransform) == 120, "Offset mismatch for FMovieSceneSequenceHierarchy::RootTransform");
static_assert(offsetof(FMovieSceneSequenceHierarchy, SubSequences) == 152, "Offset mismatch for FMovieSceneSequenceHierarchy::SubSequences");
static_assert(offsetof(FMovieSceneSequenceHierarchy, Hierarchy) == 168, "Offset mismatch for FMovieSceneSequenceHierarchy::Hierarchy");
static_assert(offsetof(FMovieSceneSequenceHierarchy, AccumulatedNetworkMask) == 184, "Offset mismatch for FMovieSceneSequenceHierarchy::AccumulatedNetworkMask");

// /Script/MovieScene.MovieSceneSequenceHierarchyNode
// Kind: ScriptStruct; super: none
struct FMovieSceneSequenceHierarchyNode
{
public:
    std::uint8_t ParentId[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> Children; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneSequenceHierarchyNode, ParentId) == 0, "Offset mismatch for FMovieSceneSequenceHierarchyNode::ParentId");
static_assert(offsetof(FMovieSceneSequenceHierarchyNode, Children) == 8, "Offset mismatch for FMovieSceneSequenceHierarchyNode::Children");

// /Script/MovieScene.MovieSceneSequenceID
// Kind: ScriptStruct; super: none
struct FMovieSceneSequenceID
{
public:
    std::uint32_t Value; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FMovieSceneSequenceID, Value) == 0, "Offset mismatch for FMovieSceneSequenceID::Value");

// /Script/MovieScene.MovieSceneSequenceInstanceData
// Kind: ScriptStruct; super: none
struct FMovieSceneSequenceInstanceData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneSequenceInstanceDataPtr
// Kind: ScriptStruct; super: none
struct FMovieSceneSequenceInstanceDataPtr
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneSequenceLoopCount
// Kind: ScriptStruct; super: none
struct FMovieSceneSequenceLoopCount
{
public:
    std::int32_t Value; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMovieSceneSequenceLoopCount, Value) == 0, "Offset mismatch for FMovieSceneSequenceLoopCount::Value");

// /Script/MovieScene.MovieSceneSequencePlayToParams
// Kind: ScriptStruct; super: none
struct FMovieSceneSequencePlayToParams
{
public:
    std::uint8_t bExclusive; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMovieSceneSequencePlayToParams, bExclusive) == 0, "Offset mismatch for FMovieSceneSequencePlayToParams::bExclusive");

// /Script/MovieScene.MovieSceneSequencePlaybackParams
// Kind: ScriptStruct; super: none
struct FMovieSceneSequencePlaybackParams
{
public:
    std::uint8_t Frame[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    float time; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    FString MarkedFrame; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t Timecode[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t PositionType; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t UpdateMethod; // 0x0039 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHasJumped; // 0x003A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMovieSceneSequencePlaybackParams, Frame) == 0, "Offset mismatch for FMovieSceneSequencePlaybackParams::Frame");
static_assert(offsetof(FMovieSceneSequencePlaybackParams, time) == 8, "Offset mismatch for FMovieSceneSequencePlaybackParams::time");
static_assert(offsetof(FMovieSceneSequencePlaybackParams, MarkedFrame) == 16, "Offset mismatch for FMovieSceneSequencePlaybackParams::MarkedFrame");
static_assert(offsetof(FMovieSceneSequencePlaybackParams, Timecode) == 32, "Offset mismatch for FMovieSceneSequencePlaybackParams::Timecode");
static_assert(offsetof(FMovieSceneSequencePlaybackParams, PositionType) == 56, "Offset mismatch for FMovieSceneSequencePlaybackParams::PositionType");
static_assert(offsetof(FMovieSceneSequencePlaybackParams, UpdateMethod) == 57, "Offset mismatch for FMovieSceneSequencePlaybackParams::UpdateMethod");
static_assert(offsetof(FMovieSceneSequencePlaybackParams, bHasJumped) == 58, "Offset mismatch for FMovieSceneSequencePlaybackParams::bHasJumped");

// /Script/MovieScene.MovieSceneSequencePlaybackSettings
// Kind: ScriptStruct; super: none
struct FMovieSceneSequencePlaybackSettings
{
public:
    std::uint8_t bAutoPlay; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t LoopCount[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t TickInterval[0xC]; // 0x0008 (Size: 0xC, Type: StructProperty)
    float PlayRate; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float StartTime; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDisableCameraCuts; // 0x001C (Size: 0x1, Type: BoolProperty)
    // 0x001C BoolProperty bDisableLookAtInput (shared storage)
    // 0x001C BoolProperty bDisableMovementInput (shared storage)
    // 0x001C BoolProperty bHideHUD (shared storage)
    // 0x001C BoolProperty bHidePlayer (shared storage)
    // 0x001C BoolProperty bRandomStartTime (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x001D
    std::uint8_t FinishCompletionStateOverride; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0021
    std::uint8_t bDynamicWeighting; // 0x0024 (Size: 0x1, Type: BoolProperty)
    // 0x0024 BoolProperty bInheritTickIntervalFromOwner (shared storage)
    // 0x0024 BoolProperty bPauseAtEnd (shared storage)
};

static_assert(offsetof(FMovieSceneSequencePlaybackSettings, bAutoPlay) == 0, "Offset mismatch for FMovieSceneSequencePlaybackSettings::bAutoPlay");
static_assert(offsetof(FMovieSceneSequencePlaybackSettings, LoopCount) == 4, "Offset mismatch for FMovieSceneSequencePlaybackSettings::LoopCount");
static_assert(offsetof(FMovieSceneSequencePlaybackSettings, TickInterval) == 8, "Offset mismatch for FMovieSceneSequencePlaybackSettings::TickInterval");
static_assert(offsetof(FMovieSceneSequencePlaybackSettings, PlayRate) == 20, "Offset mismatch for FMovieSceneSequencePlaybackSettings::PlayRate");
static_assert(offsetof(FMovieSceneSequencePlaybackSettings, StartTime) == 24, "Offset mismatch for FMovieSceneSequencePlaybackSettings::StartTime");
static_assert(offsetof(FMovieSceneSequencePlaybackSettings, bDisableCameraCuts) == 28, "Offset mismatch for FMovieSceneSequencePlaybackSettings::bDisableCameraCuts");
static_assert(offsetof(FMovieSceneSequencePlaybackSettings, FinishCompletionStateOverride) == 32, "Offset mismatch for FMovieSceneSequencePlaybackSettings::FinishCompletionStateOverride");
static_assert(offsetof(FMovieSceneSequencePlaybackSettings, bDynamicWeighting) == 36, "Offset mismatch for FMovieSceneSequencePlaybackSettings::bDynamicWeighting");

// /Script/MovieScene.MovieSceneSequenceReplProperties
// Kind: ScriptStruct; super: none
struct FMovieSceneSequenceReplProperties
{
public:
    std::uint8_t LastKnownPosition[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t LastKnownStatus; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::int32_t LastKnownNumLoops; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t LastKnownSerialNumber; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMovieSceneSequenceReplProperties, LastKnownPosition) == 0, "Offset mismatch for FMovieSceneSequenceReplProperties::LastKnownPosition");
static_assert(offsetof(FMovieSceneSequenceReplProperties, LastKnownStatus) == 8, "Offset mismatch for FMovieSceneSequenceReplProperties::LastKnownStatus");
static_assert(offsetof(FMovieSceneSequenceReplProperties, LastKnownNumLoops) == 12, "Offset mismatch for FMovieSceneSequenceReplProperties::LastKnownNumLoops");
static_assert(offsetof(FMovieSceneSequenceReplProperties, LastKnownSerialNumber) == 16, "Offset mismatch for FMovieSceneSequenceReplProperties::LastKnownSerialNumber");

// /Script/MovieScene.MovieSceneSequenceTickInterval
// Kind: ScriptStruct; super: none
struct FMovieSceneSequenceTickInterval
{
public:
    float TickIntervalSeconds; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float EvaluationBudgetMicroseconds; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTickWhenPaused; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowRounding; // 0x0009 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMovieSceneSequenceTickInterval, TickIntervalSeconds) == 0, "Offset mismatch for FMovieSceneSequenceTickInterval::TickIntervalSeconds");
static_assert(offsetof(FMovieSceneSequenceTickInterval, EvaluationBudgetMicroseconds) == 4, "Offset mismatch for FMovieSceneSequenceTickInterval::EvaluationBudgetMicroseconds");
static_assert(offsetof(FMovieSceneSequenceTickInterval, bTickWhenPaused) == 8, "Offset mismatch for FMovieSceneSequenceTickInterval::bTickWhenPaused");
static_assert(offsetof(FMovieSceneSequenceTickInterval, bAllowRounding) == 9, "Offset mismatch for FMovieSceneSequenceTickInterval::bAllowRounding");

// /Script/MovieScene.MovieSceneSequenceTransform
// Kind: ScriptStruct; super: none
struct FMovieSceneSequenceTransform
{
public:
    std::uint8_t LinearTransform[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> NestedTransforms; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneSequenceTransform, LinearTransform) == 0, "Offset mismatch for FMovieSceneSequenceTransform::LinearTransform");
static_assert(offsetof(FMovieSceneSequenceTransform, NestedTransforms) == 16, "Offset mismatch for FMovieSceneSequenceTransform::NestedTransforms");

// /Script/MovieScene.MovieSceneSpawnable
// Kind: ScriptStruct; super: none
struct FMovieSceneSpawnable
{
public:
    std::uint8_t SpawnTransform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    TArray<void*> Tags; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bContinuouslyRespawn; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNetAddressableName; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x6]; // 0x0072
    std::uint8_t DynamicBinding[0x28]; // 0x0078 (Size: 0x28, Type: StructProperty)
    std::uint8_t Guid[0x10]; // 0x00A0 (Size: 0x10, Type: StructProperty)
    FString Name; // 0x00B0 (Size: 0x10, Type: StrProperty)
    void* ObjectTemplate; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ChildPossessables; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Ownership; // 0x00D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00D9
    FName LevelName; // 0x00DC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FMovieSceneSpawnable, SpawnTransform) == 0, "Offset mismatch for FMovieSceneSpawnable::SpawnTransform");
static_assert(offsetof(FMovieSceneSpawnable, Tags) == 96, "Offset mismatch for FMovieSceneSpawnable::Tags");
static_assert(offsetof(FMovieSceneSpawnable, bContinuouslyRespawn) == 112, "Offset mismatch for FMovieSceneSpawnable::bContinuouslyRespawn");
static_assert(offsetof(FMovieSceneSpawnable, bNetAddressableName) == 113, "Offset mismatch for FMovieSceneSpawnable::bNetAddressableName");
static_assert(offsetof(FMovieSceneSpawnable, DynamicBinding) == 120, "Offset mismatch for FMovieSceneSpawnable::DynamicBinding");
static_assert(offsetof(FMovieSceneSpawnable, Guid) == 160, "Offset mismatch for FMovieSceneSpawnable::Guid");
static_assert(offsetof(FMovieSceneSpawnable, Name) == 176, "Offset mismatch for FMovieSceneSpawnable::Name");
static_assert(offsetof(FMovieSceneSpawnable, ObjectTemplate) == 192, "Offset mismatch for FMovieSceneSpawnable::ObjectTemplate");
static_assert(offsetof(FMovieSceneSpawnable, ChildPossessables) == 200, "Offset mismatch for FMovieSceneSpawnable::ChildPossessables");
static_assert(offsetof(FMovieSceneSpawnable, Ownership) == 216, "Offset mismatch for FMovieSceneSpawnable::Ownership");
static_assert(offsetof(FMovieSceneSpawnable, LevelName) == 220, "Offset mismatch for FMovieSceneSpawnable::LevelName");

// /Script/MovieScene.MovieSceneSubSectionData
// Kind: ScriptStruct; super: none
struct FMovieSceneSubSectionData
{
public:
    TWeakObjectPtr<void> Section; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t ObjectBindingID[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t Flags; // 0x0018 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMovieSceneSubSectionData, Section) == 0, "Offset mismatch for FMovieSceneSubSectionData::Section");
static_assert(offsetof(FMovieSceneSubSectionData, ObjectBindingID) == 8, "Offset mismatch for FMovieSceneSubSectionData::ObjectBindingID");
static_assert(offsetof(FMovieSceneSubSectionData, Flags) == 24, "Offset mismatch for FMovieSceneSubSectionData::Flags");

// /Script/MovieScene.MovieSceneSubSectionOriginOverrideMask
// Kind: ScriptStruct; super: none
struct FMovieSceneSubSectionOriginOverrideMask
{
public:
    std::uint32_t Mask; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FMovieSceneSubSectionOriginOverrideMask, Mask) == 0, "Offset mismatch for FMovieSceneSubSectionOriginOverrideMask::Mask");

// /Script/MovieScene.MovieSceneSubSequenceData
// Kind: ScriptStruct; super: none
struct FMovieSceneSubSequenceData
{
public:
    std::uint8_t Sequence[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t OuterToInnerTransform[0x20]; // 0x0018 (Size: 0x20, Type: StructProperty)
    std::uint8_t RootToSequenceTransform[0x20]; // 0x0038 (Size: 0x20, Type: StructProperty)
    std::uint8_t TickResolution[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    std::uint8_t DeterministicSequenceID[0x4]; // 0x0060 (Size: 0x4, Type: StructProperty)
    std::uint8_t PlayRange[0x10]; // 0x0064 (Size: 0x10, Type: StructProperty)
    std::uint8_t ParentPlayRange[0x10]; // 0x0074 (Size: 0x10, Type: StructProperty)
    std::uint8_t PreRollRange[0x10]; // 0x0084 (Size: 0x10, Type: StructProperty)
    std::uint8_t PostRollRange[0x10]; // 0x0094 (Size: 0x10, Type: StructProperty)
    std::int16_t HierarchicalBias; // 0x00A4 (Size: 0x2, Type: Int16Property)
    std::uint8_t AccumulatedFlags; // 0x00A6 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCanLoop; // 0x00A7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t InstanceData[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    FName SectionPath; // 0x00C0 (Size: 0x8, Type: NameProperty)
    TSoftObjectPtr<void> WeakCondition; // 0x00C8 (Size: 0x28, Type: SoftObjectProperty)
    std::uint8_t SubSectionSignature[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneSubSequenceData, Sequence) == 0, "Offset mismatch for FMovieSceneSubSequenceData::Sequence");
static_assert(offsetof(FMovieSceneSubSequenceData, OuterToInnerTransform) == 24, "Offset mismatch for FMovieSceneSubSequenceData::OuterToInnerTransform");
static_assert(offsetof(FMovieSceneSubSequenceData, RootToSequenceTransform) == 56, "Offset mismatch for FMovieSceneSubSequenceData::RootToSequenceTransform");
static_assert(offsetof(FMovieSceneSubSequenceData, TickResolution) == 88, "Offset mismatch for FMovieSceneSubSequenceData::TickResolution");
static_assert(offsetof(FMovieSceneSubSequenceData, DeterministicSequenceID) == 96, "Offset mismatch for FMovieSceneSubSequenceData::DeterministicSequenceID");
static_assert(offsetof(FMovieSceneSubSequenceData, PlayRange) == 100, "Offset mismatch for FMovieSceneSubSequenceData::PlayRange");
static_assert(offsetof(FMovieSceneSubSequenceData, ParentPlayRange) == 116, "Offset mismatch for FMovieSceneSubSequenceData::ParentPlayRange");
static_assert(offsetof(FMovieSceneSubSequenceData, PreRollRange) == 132, "Offset mismatch for FMovieSceneSubSequenceData::PreRollRange");
static_assert(offsetof(FMovieSceneSubSequenceData, PostRollRange) == 148, "Offset mismatch for FMovieSceneSubSequenceData::PostRollRange");
static_assert(offsetof(FMovieSceneSubSequenceData, HierarchicalBias) == 164, "Offset mismatch for FMovieSceneSubSequenceData::HierarchicalBias");
static_assert(offsetof(FMovieSceneSubSequenceData, AccumulatedFlags) == 166, "Offset mismatch for FMovieSceneSubSequenceData::AccumulatedFlags");
static_assert(offsetof(FMovieSceneSubSequenceData, bCanLoop) == 167, "Offset mismatch for FMovieSceneSubSequenceData::bCanLoop");
static_assert(offsetof(FMovieSceneSubSequenceData, InstanceData) == 168, "Offset mismatch for FMovieSceneSubSequenceData::InstanceData");
static_assert(offsetof(FMovieSceneSubSequenceData, SectionPath) == 192, "Offset mismatch for FMovieSceneSubSequenceData::SectionPath");
static_assert(offsetof(FMovieSceneSubSequenceData, WeakCondition) == 200, "Offset mismatch for FMovieSceneSubSequenceData::WeakCondition");
static_assert(offsetof(FMovieSceneSubSequenceData, SubSectionSignature) == 240, "Offset mismatch for FMovieSceneSubSequenceData::SubSectionSignature");

// /Script/MovieScene.MovieSceneSubSequenceTree
// Kind: ScriptStruct; super: none
struct FMovieSceneSubSequenceTree
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneSubSequenceTreeEntry
// Kind: ScriptStruct; super: none
struct FMovieSceneSubSequenceTreeEntry
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneTangentData
// Kind: ScriptStruct; super: none
struct FMovieSceneTangentData
{
public:
    float ArriveTangent; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float LeaveTangent; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float ArriveTangentWeight; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float LeaveTangentWeight; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t TangentWeightMode; // 0x0010 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FMovieSceneTangentData, ArriveTangent) == 0, "Offset mismatch for FMovieSceneTangentData::ArriveTangent");
static_assert(offsetof(FMovieSceneTangentData, LeaveTangent) == 4, "Offset mismatch for FMovieSceneTangentData::LeaveTangent");
static_assert(offsetof(FMovieSceneTangentData, ArriveTangentWeight) == 8, "Offset mismatch for FMovieSceneTangentData::ArriveTangentWeight");
static_assert(offsetof(FMovieSceneTangentData, LeaveTangentWeight) == 12, "Offset mismatch for FMovieSceneTangentData::LeaveTangentWeight");
static_assert(offsetof(FMovieSceneTangentData, TangentWeightMode) == 16, "Offset mismatch for FMovieSceneTangentData::TangentWeightMode");

// /Script/MovieScene.MovieSceneTemplateGenerationLedger
// Kind: ScriptStruct; super: none
struct FMovieSceneTemplateGenerationLedger
{
public:
    std::uint8_t LastTrackIdentifier[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TMap<void*, void*> TrackSignatureToTrackIdentifier; // 0x0008 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> SubSectionRanges; // 0x0018 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FMovieSceneTemplateGenerationLedger, LastTrackIdentifier) == 0, "Offset mismatch for FMovieSceneTemplateGenerationLedger::LastTrackIdentifier");
static_assert(offsetof(FMovieSceneTemplateGenerationLedger, TrackSignatureToTrackIdentifier) == 8, "Offset mismatch for FMovieSceneTemplateGenerationLedger::TrackSignatureToTrackIdentifier");
static_assert(offsetof(FMovieSceneTemplateGenerationLedger, SubSectionRanges) == 24, "Offset mismatch for FMovieSceneTemplateGenerationLedger::SubSectionRanges");

// /Script/MovieScene.MovieSceneTimeTransform
// Kind: ScriptStruct; super: none
struct FMovieSceneTimeTransform
{
public:
    float timescale; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Offset[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneTimeTransform, timescale) == 0, "Offset mismatch for FMovieSceneTimeTransform::timescale");
static_assert(offsetof(FMovieSceneTimeTransform, Offset) == 4, "Offset mismatch for FMovieSceneTimeTransform::Offset");

// /Script/MovieScene.MovieSceneTimeWarpChannel
// Kind: ScriptStruct; super: MovieSceneDoubleChannel
struct FMovieSceneTimeWarpChannel
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t PreInfinityExtrap; // 0x0050 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PostInfinityExtrap; // 0x0051 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0052
    TArray<void*> Times; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Values; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    double DefaultValue; // 0x0078 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bHasDefaultValue; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0081
    std::uint8_t KeyHandles[0x48]; // 0x0088 (Size: 0x48, Type: StructProperty)
    std::uint8_t TickResolution[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneTimeWarpChannel, PreInfinityExtrap) == 80, "Offset mismatch for FMovieSceneTimeWarpChannel::PreInfinityExtrap");
static_assert(offsetof(FMovieSceneTimeWarpChannel, PostInfinityExtrap) == 81, "Offset mismatch for FMovieSceneTimeWarpChannel::PostInfinityExtrap");
static_assert(offsetof(FMovieSceneTimeWarpChannel, Times) == 88, "Offset mismatch for FMovieSceneTimeWarpChannel::Times");
static_assert(offsetof(FMovieSceneTimeWarpChannel, Values) == 104, "Offset mismatch for FMovieSceneTimeWarpChannel::Values");
static_assert(offsetof(FMovieSceneTimeWarpChannel, DefaultValue) == 120, "Offset mismatch for FMovieSceneTimeWarpChannel::DefaultValue");
static_assert(offsetof(FMovieSceneTimeWarpChannel, bHasDefaultValue) == 128, "Offset mismatch for FMovieSceneTimeWarpChannel::bHasDefaultValue");
static_assert(offsetof(FMovieSceneTimeWarpChannel, KeyHandles) == 136, "Offset mismatch for FMovieSceneTimeWarpChannel::KeyHandles");
static_assert(offsetof(FMovieSceneTimeWarpChannel, TickResolution) == 208, "Offset mismatch for FMovieSceneTimeWarpChannel::TickResolution");

// /Script/MovieScene.MovieSceneTimeWarpClamp
// Kind: ScriptStruct; super: none
struct FMovieSceneTimeWarpClamp
{
public:
    std::uint8_t max[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneTimeWarpClamp, max) == 0, "Offset mismatch for FMovieSceneTimeWarpClamp::max");

// /Script/MovieScene.MovieSceneTimeWarpClampFloat
// Kind: ScriptStruct; super: none
struct FMovieSceneTimeWarpClampFloat
{
public:
    float max; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMovieSceneTimeWarpClampFloat, max) == 0, "Offset mismatch for FMovieSceneTimeWarpClampFloat::max");

// /Script/MovieScene.MovieSceneTimeWarpFixedFrame
// Kind: ScriptStruct; super: none
struct FMovieSceneTimeWarpFixedFrame
{
public:
    std::uint8_t FrameNumber[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneTimeWarpFixedFrame, FrameNumber) == 0, "Offset mismatch for FMovieSceneTimeWarpFixedFrame::FrameNumber");

// /Script/MovieScene.MovieSceneTimeWarpFrameRate
// Kind: ScriptStruct; super: none
struct FMovieSceneTimeWarpFrameRate
{
public:
    std::uint8_t FrameRateNumerator; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0001
    std::uint8_t FrameRateDenominator; // 0x0003 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FMovieSceneTimeWarpFrameRate, FrameRateNumerator) == 0, "Offset mismatch for FMovieSceneTimeWarpFrameRate::FrameRateNumerator");
static_assert(offsetof(FMovieSceneTimeWarpFrameRate, FrameRateDenominator) == 3, "Offset mismatch for FMovieSceneTimeWarpFrameRate::FrameRateDenominator");

// /Script/MovieScene.MovieSceneTimeWarpLoop
// Kind: ScriptStruct; super: none
struct FMovieSceneTimeWarpLoop
{
public:
    std::uint8_t duration[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneTimeWarpLoop, duration) == 0, "Offset mismatch for FMovieSceneTimeWarpLoop::duration");

// /Script/MovieScene.MovieSceneTimeWarpLoopFloat
// Kind: ScriptStruct; super: none
struct FMovieSceneTimeWarpLoopFloat
{
public:
    float duration; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMovieSceneTimeWarpLoopFloat, duration) == 0, "Offset mismatch for FMovieSceneTimeWarpLoopFloat::duration");

// /Script/MovieScene.MovieSceneTimeWarpVariant
// Kind: ScriptStruct; super: none
struct FMovieSceneTimeWarpVariant
{
public:
    std::uint8_t Variant[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneTimeWarpVariant, Variant) == 0, "Offset mismatch for FMovieSceneTimeWarpVariant::Variant");

// /Script/MovieScene.MovieSceneTimeWarping
// Kind: ScriptStruct; super: none
struct FMovieSceneTimeWarping
{
public:
    std::uint8_t Start[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t End[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneTimeWarping, Start) == 0, "Offset mismatch for FMovieSceneTimeWarping::Start");
static_assert(offsetof(FMovieSceneTimeWarping, End) == 4, "Offset mismatch for FMovieSceneTimeWarping::End");

// /Script/MovieScene.MovieSceneTimecodeSource
// Kind: ScriptStruct; super: none
struct FMovieSceneTimecodeSource
{
public:
    std::uint8_t Timecode[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneTimecodeSource, Timecode) == 0, "Offset mismatch for FMovieSceneTimecodeSource::Timecode");

// /Script/MovieScene.MovieSceneTrackDisplayOptions
// Kind: ScriptStruct; super: none
struct FMovieSceneTrackDisplayOptions
{
public:
    std::uint8_t bShowVerticalFrames; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMovieSceneTrackDisplayOptions, bShowVerticalFrames) == 0, "Offset mismatch for FMovieSceneTrackDisplayOptions::bShowVerticalFrames");

// /Script/MovieScene.MovieSceneTrackEvalOptions
// Kind: ScriptStruct; super: none
struct FMovieSceneTrackEvalOptions
{
public:
    std::uint8_t bCanEvaluateNearestSection; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bEvalNearestSection (shared storage)
    // 0x0000 BoolProperty bEvaluateInPostroll (shared storage)
    // 0x0000 BoolProperty bEvaluateInPreroll (shared storage)
    // 0x0000 BoolProperty bEvaluateNearestSection (shared storage)
};

static_assert(offsetof(FMovieSceneTrackEvalOptions, bCanEvaluateNearestSection) == 0, "Offset mismatch for FMovieSceneTrackEvalOptions::bCanEvaluateNearestSection");

// /Script/MovieScene.MovieSceneTrackEvaluationField
// Kind: ScriptStruct; super: none
struct FMovieSceneTrackEvaluationField
{
public:
    TArray<void*> Entries; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneTrackEvaluationField, Entries) == 0, "Offset mismatch for FMovieSceneTrackEvaluationField::Entries");

// /Script/MovieScene.MovieSceneTrackEvaluationFieldEntry
// Kind: ScriptStruct; super: none
struct FMovieSceneTrackEvaluationFieldEntry
{
public:
    void* Section; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Range[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t ForcedTime[0x4]; // 0x0018 (Size: 0x4, Type: StructProperty)
    std::uint8_t Flags; // 0x001C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x1]; // 0x001D
    std::int16_t LegacySortOrder; // 0x001E (Size: 0x2, Type: Int16Property)
};

static_assert(offsetof(FMovieSceneTrackEvaluationFieldEntry, Section) == 0, "Offset mismatch for FMovieSceneTrackEvaluationFieldEntry::Section");
static_assert(offsetof(FMovieSceneTrackEvaluationFieldEntry, Range) == 8, "Offset mismatch for FMovieSceneTrackEvaluationFieldEntry::Range");
static_assert(offsetof(FMovieSceneTrackEvaluationFieldEntry, ForcedTime) == 24, "Offset mismatch for FMovieSceneTrackEvaluationFieldEntry::ForcedTime");
static_assert(offsetof(FMovieSceneTrackEvaluationFieldEntry, Flags) == 28, "Offset mismatch for FMovieSceneTrackEvaluationFieldEntry::Flags");
static_assert(offsetof(FMovieSceneTrackEvaluationFieldEntry, LegacySortOrder) == 30, "Offset mismatch for FMovieSceneTrackEvaluationFieldEntry::LegacySortOrder");

// /Script/MovieScene.MovieSceneTrackIdentifier
// Kind: ScriptStruct; super: none
struct FMovieSceneTrackIdentifier
{
public:
    std::uint32_t Value; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FMovieSceneTrackIdentifier, Value) == 0, "Offset mismatch for FMovieSceneTrackIdentifier::Value");

// /Script/MovieScene.MovieSceneTrackImplementation
// Kind: ScriptStruct; super: MovieSceneEvalTemplateBase
struct FMovieSceneTrackImplementation
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneTrackImplementationPtr
// Kind: ScriptStruct; super: none
struct FMovieSceneTrackImplementationPtr
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneTrackInstanceComponent
// Kind: ScriptStruct; super: none
struct FMovieSceneTrackInstanceComponent
{
public:
    void* Owner; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* TrackInstanceClass; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FMovieSceneTrackInstanceComponent, Owner) == 0, "Offset mismatch for FMovieSceneTrackInstanceComponent::Owner");
static_assert(offsetof(FMovieSceneTrackInstanceComponent, TrackInstanceClass) == 8, "Offset mismatch for FMovieSceneTrackInstanceComponent::TrackInstanceClass");

// /Script/MovieScene.MovieSceneTrackInstanceEntry
// Kind: ScriptStruct; super: none
struct FMovieSceneTrackInstanceEntry
{
public:
    void* BoundObject; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* TrackInstance; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMovieSceneTrackInstanceEntry, BoundObject) == 0, "Offset mismatch for FMovieSceneTrackInstanceEntry::BoundObject");
static_assert(offsetof(FMovieSceneTrackInstanceEntry, TrackInstance) == 8, "Offset mismatch for FMovieSceneTrackInstanceEntry::TrackInstance");

// /Script/MovieScene.MovieSceneTrackInstanceInput
// Kind: ScriptStruct; super: none
struct FMovieSceneTrackInstanceInput
{
public:
    void* Section; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMovieSceneTrackInstanceInput, Section) == 0, "Offset mismatch for FMovieSceneTrackInstanceInput::Section");

// /Script/MovieScene.MovieSceneTrackLabels
// Kind: ScriptStruct; super: none
struct FMovieSceneTrackLabels
{
public:
    TArray<void*> Strings; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMovieSceneTrackLabels, Strings) == 0, "Offset mismatch for FMovieSceneTrackLabels::Strings");

// /Script/MovieScene.MovieSceneTrackRowMetadata
// Kind: ScriptStruct; super: none
struct FMovieSceneTrackRowMetadata
{
public:
    std::uint8_t ConditionContainer[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneTrackRowMetadata, ConditionContainer) == 0, "Offset mismatch for FMovieSceneTrackRowMetadata::ConditionContainer");

// /Script/MovieScene.MovieSceneTransformBreadcrumbs
// Kind: ScriptStruct; super: none
struct FMovieSceneTransformBreadcrumbs
{
public:
    TArray<void*> Breadcrumbs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Mode; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMovieSceneTransformBreadcrumbs, Breadcrumbs) == 0, "Offset mismatch for FMovieSceneTransformBreadcrumbs::Breadcrumbs");
static_assert(offsetof(FMovieSceneTransformBreadcrumbs, Mode) == 16, "Offset mismatch for FMovieSceneTransformBreadcrumbs::Mode");

// /Script/MovieScene.MovieSceneWarpCounter
// Kind: ScriptStruct; super: MovieSceneTransformBreadcrumbs
struct FMovieSceneWarpCounter
{
public:
    TArray<void*> Breadcrumbs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Mode; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMovieSceneWarpCounter, Breadcrumbs) == 0, "Offset mismatch for FMovieSceneWarpCounter::Breadcrumbs");
static_assert(offsetof(FMovieSceneWarpCounter, Mode) == 16, "Offset mismatch for FMovieSceneWarpCounter::Mode");

// /Script/MovieScene.NavigationToolSaveState
// Kind: ScriptStruct; super: none
struct FNavigationToolSaveState
{
public:
    std::uint8_t SerializedTree[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    TMap<void*, void*> ItemColorMap; // 0x0048 (Size: 0x10, Type: MapProperty)
    TArray<void*> ToolViewSaveStates; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    FString ContextPath; // 0x0068 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FNavigationToolSaveState, SerializedTree) == 0, "Offset mismatch for FNavigationToolSaveState::SerializedTree");
static_assert(offsetof(FNavigationToolSaveState, ItemColorMap) == 72, "Offset mismatch for FNavigationToolSaveState::ItemColorMap");
static_assert(offsetof(FNavigationToolSaveState, ToolViewSaveStates) == 88, "Offset mismatch for FNavigationToolSaveState::ToolViewSaveStates");
static_assert(offsetof(FNavigationToolSaveState, ContextPath) == 104, "Offset mismatch for FNavigationToolSaveState::ContextPath");

// /Script/MovieScene.NavigationToolSerializedItem
// Kind: ScriptStruct; super: none
struct FNavigationToolSerializedItem
{
public:
    FString ID; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FNavigationToolSerializedItem, ID) == 0, "Offset mismatch for FNavigationToolSerializedItem::ID");

// /Script/MovieScene.NavigationToolSerializedTree
// Kind: ScriptStruct; super: none
struct FNavigationToolSerializedTree
{
public:
    std::uint8_t RootNode[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    TArray<void*> SceneItems; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ItemTreeMap; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FNavigationToolSerializedTree, RootNode) == 0, "Offset mismatch for FNavigationToolSerializedTree::RootNode");
static_assert(offsetof(FNavigationToolSerializedTree, SceneItems) == 40, "Offset mismatch for FNavigationToolSerializedTree::SceneItems");
static_assert(offsetof(FNavigationToolSerializedTree, ItemTreeMap) == 56, "Offset mismatch for FNavigationToolSerializedTree::ItemTreeMap");

// /Script/MovieScene.NavigationToolSerializedTreeNode
// Kind: ScriptStruct; super: none
struct FNavigationToolSerializedTreeNode
{
public:
    std::int32_t LocalIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t GlobalIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t ParentIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    TArray<void*> ChildrenIndices; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNavigationToolSerializedTreeNode, LocalIndex) == 0, "Offset mismatch for FNavigationToolSerializedTreeNode::LocalIndex");
static_assert(offsetof(FNavigationToolSerializedTreeNode, GlobalIndex) == 4, "Offset mismatch for FNavigationToolSerializedTreeNode::GlobalIndex");
static_assert(offsetof(FNavigationToolSerializedTreeNode, ParentIndex) == 8, "Offset mismatch for FNavigationToolSerializedTreeNode::ParentIndex");
static_assert(offsetof(FNavigationToolSerializedTreeNode, ChildrenIndices) == 16, "Offset mismatch for FNavigationToolSerializedTreeNode::ChildrenIndices");

// /Script/MovieScene.NavigationToolViewColumnSaveState
// Kind: ScriptStruct; super: none
struct FNavigationToolViewColumnSaveState
{
public:
    std::uint8_t bVisible; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Size; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNavigationToolViewColumnSaveState, bVisible) == 0, "Offset mismatch for FNavigationToolViewColumnSaveState::bVisible");
static_assert(offsetof(FNavigationToolViewColumnSaveState, Size) == 4, "Offset mismatch for FNavigationToolViewColumnSaveState::Size");

// /Script/MovieScene.NavigationToolViewSaveState
// Kind: ScriptStruct; super: none
struct FNavigationToolViewSaveState
{
public:
    TMap<void*, void*> ViewItemFlags; // 0x0000 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ColumnsState; // 0x0010 (Size: 0x10, Type: MapProperty)
    TSet<void*> ActiveItemFilters; // 0x0020 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FNavigationToolViewSaveState, ViewItemFlags) == 0, "Offset mismatch for FNavigationToolViewSaveState::ViewItemFlags");
static_assert(offsetof(FNavigationToolViewSaveState, ColumnsState) == 16, "Offset mismatch for FNavigationToolViewSaveState::ColumnsState");
static_assert(offsetof(FNavigationToolViewSaveState, ActiveItemFilters) == 32, "Offset mismatch for FNavigationToolViewSaveState::ActiveItemFilters");

// /Script/MovieScene.OptionalMovieSceneBlendType
// Kind: ScriptStruct; super: none
struct FOptionalMovieSceneBlendType
{
public:
    std::uint8_t BlendType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsValid; // 0x0001 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FOptionalMovieSceneBlendType, BlendType) == 0, "Offset mismatch for FOptionalMovieSceneBlendType::BlendType");
static_assert(offsetof(FOptionalMovieSceneBlendType, bIsValid) == 1, "Offset mismatch for FOptionalMovieSceneBlendType::bIsValid");

// /Script/MovieScene.SectionEvaluationData
// Kind: ScriptStruct; super: none
struct FSectionEvaluationData
{
public:
    std::int32_t ImplIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t ForcedTime[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t Flags; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSectionEvaluationData, ImplIndex) == 0, "Offset mismatch for FSectionEvaluationData::ImplIndex");
static_assert(offsetof(FSectionEvaluationData, ForcedTime) == 4, "Offset mismatch for FSectionEvaluationData::ForcedTime");
static_assert(offsetof(FSectionEvaluationData, Flags) == 8, "Offset mismatch for FSectionEvaluationData::Flags");

// /Script/MovieScene.TestMovieSceneEvalTemplate
// Kind: ScriptStruct; super: MovieSceneEvalTemplate
struct FTestMovieSceneEvalTemplate
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t CompletionMode; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    TWeakObjectPtr<void> SourceSectionPtr; // 0x0014 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FTestMovieSceneEvalTemplate, CompletionMode) == 16, "Offset mismatch for FTestMovieSceneEvalTemplate::CompletionMode");
static_assert(offsetof(FTestMovieSceneEvalTemplate, SourceSectionPtr) == 20, "Offset mismatch for FTestMovieSceneEvalTemplate::SourceSectionPtr");

// /Script/MovieScene.TestMovieSceneStruct
// Kind: ScriptStruct; super: none
struct FTestMovieSceneStruct
{
public:
    float First; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Second; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Enum; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0009
    std::uint8_t Vector[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    TArray<void*> MultipleIntegers; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MultipleVectors; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FTestMovieSceneStruct, First) == 0, "Offset mismatch for FTestMovieSceneStruct::First");
static_assert(offsetof(FTestMovieSceneStruct, Second) == 4, "Offset mismatch for FTestMovieSceneStruct::Second");
static_assert(offsetof(FTestMovieSceneStruct, Enum) == 8, "Offset mismatch for FTestMovieSceneStruct::Enum");
static_assert(offsetof(FTestMovieSceneStruct, Vector) == 16, "Offset mismatch for FTestMovieSceneStruct::Vector");
static_assert(offsetof(FTestMovieSceneStruct, MultipleIntegers) == 40, "Offset mismatch for FTestMovieSceneStruct::MultipleIntegers");
static_assert(offsetof(FTestMovieSceneStruct, MultipleVectors) == 56, "Offset mismatch for FTestMovieSceneStruct::MultipleVectors");

// /Script/MovieScene.TestMovieSceneStruct2
// Kind: ScriptStruct; super: none
struct FTestMovieSceneStruct2
{
public:
    float First; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Second; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FTestMovieSceneStruct2, First) == 0, "Offset mismatch for FTestMovieSceneStruct2::First");
static_assert(offsetof(FTestMovieSceneStruct2, Second) == 4, "Offset mismatch for FTestMovieSceneStruct2::Second");

// /Script/MovieScene.TrackInstanceInputComponent
// Kind: ScriptStruct; super: none
struct FTrackInstanceInputComponent
{
public:
    void* Section; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t OutputIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FTrackInstanceInputComponent, Section) == 0, "Offset mismatch for FTrackInstanceInputComponent::Section");
static_assert(offsetof(FTrackInstanceInputComponent, OutputIndex) == 8, "Offset mismatch for FTrackInstanceInputComponent::OutputIndex");

// /Script/MovieScene.BuiltInDynamicBindingResolverLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UBuiltInDynamicBindingResolverLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieScene
// Kind: Class; super: MovieSceneDecorationContainerObject
class UMovieScene
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    TArray<void*> Spawnables; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Possessables; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ObjectBindings; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> BindingGroups; // 0x00C0 (Size: 0x10, Type: MapProperty)
    TArray<void*> Tracks; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    void* CameraCutTrack; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* CustomClock; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SelectionRange[0x10]; // 0x00F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t PlaybackRange[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    std::uint8_t TickResolution[0x8]; // 0x0110 (Size: 0x8, Type: StructProperty)
    std::uint8_t DisplayRate[0x8]; // 0x0118 (Size: 0x8, Type: StructProperty)
    std::uint8_t EvaluationType; // 0x0120 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ClockSource; // 0x0121 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0122
    TArray<void*> MarkedFrames; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GeneratedConditions; // 0x0138 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieScene, Spawnables) == 144, "Offset mismatch for UMovieScene::Spawnables");
static_assert(offsetof(UMovieScene, Possessables) == 160, "Offset mismatch for UMovieScene::Possessables");
static_assert(offsetof(UMovieScene, ObjectBindings) == 176, "Offset mismatch for UMovieScene::ObjectBindings");
static_assert(offsetof(UMovieScene, BindingGroups) == 192, "Offset mismatch for UMovieScene::BindingGroups");
static_assert(offsetof(UMovieScene, Tracks) == 208, "Offset mismatch for UMovieScene::Tracks");
static_assert(offsetof(UMovieScene, CameraCutTrack) == 224, "Offset mismatch for UMovieScene::CameraCutTrack");
static_assert(offsetof(UMovieScene, CustomClock) == 232, "Offset mismatch for UMovieScene::CustomClock");
static_assert(offsetof(UMovieScene, SelectionRange) == 240, "Offset mismatch for UMovieScene::SelectionRange");
static_assert(offsetof(UMovieScene, PlaybackRange) == 256, "Offset mismatch for UMovieScene::PlaybackRange");
static_assert(offsetof(UMovieScene, TickResolution) == 272, "Offset mismatch for UMovieScene::TickResolution");
static_assert(offsetof(UMovieScene, DisplayRate) == 280, "Offset mismatch for UMovieScene::DisplayRate");
static_assert(offsetof(UMovieScene, EvaluationType) == 288, "Offset mismatch for UMovieScene::EvaluationType");
static_assert(offsetof(UMovieScene, ClockSource) == 289, "Offset mismatch for UMovieScene::ClockSource");
static_assert(offsetof(UMovieScene, MarkedFrames) == 296, "Offset mismatch for UMovieScene::MarkedFrames");
static_assert(offsetof(UMovieScene, GeneratedConditions) == 312, "Offset mismatch for UMovieScene::GeneratedConditions");

// /Script/MovieScene.MovieSceneBindingEventReceiverInterface
// Kind: Class; super: Interface
class UMovieSceneBindingEventReceiverInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneBindingLifetimeSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneBindingLifetimeSection
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t EvalOptions[0x8]; // 0x0088 (Size: 0x8, Type: StructProperty)
    std::uint8_t Easing[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t SectionRange[0x10]; // 0x00C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t TimecodeSource[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ConditionContainer[0x8]; // 0x00F0 (Size: 0x8, Type: StructProperty)
    std::uint8_t PreRollFrames[0x4]; // 0x00F8 (Size: 0x4, Type: StructProperty)
    std::uint8_t PostRollFrames[0x4]; // 0x00FC (Size: 0x4, Type: StructProperty)
    std::int32_t RowIndex; // 0x0100 (Size: 0x4, Type: IntProperty)
    std::int32_t OverlapPriority; // 0x0104 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsActive; // 0x0108 (Size: 0x1, Type: BoolProperty)
    // 0x0108 BoolProperty bIsLocked (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0109
    float StartTime; // 0x010C (Size: 0x4, Type: FloatProperty)
    float EndTime; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float PreRollTime; // 0x0114 (Size: 0x4, Type: FloatProperty)
    float PostRollTime; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsInfinite; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x011D
    std::uint8_t bSupportsInfiniteRange; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BlendType[0x1]; // 0x0121 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneBindingLifetimeSection, EvalOptions) == 136, "Offset mismatch for UMovieSceneBindingLifetimeSection::EvalOptions");
static_assert(offsetof(UMovieSceneBindingLifetimeSection, Easing) == 144, "Offset mismatch for UMovieSceneBindingLifetimeSection::Easing");
static_assert(offsetof(UMovieSceneBindingLifetimeSection, SectionRange) == 200, "Offset mismatch for UMovieSceneBindingLifetimeSection::SectionRange");
static_assert(offsetof(UMovieSceneBindingLifetimeSection, TimecodeSource) == 216, "Offset mismatch for UMovieSceneBindingLifetimeSection::TimecodeSource");
static_assert(offsetof(UMovieSceneBindingLifetimeSection, ConditionContainer) == 240, "Offset mismatch for UMovieSceneBindingLifetimeSection::ConditionContainer");
static_assert(offsetof(UMovieSceneBindingLifetimeSection, PreRollFrames) == 248, "Offset mismatch for UMovieSceneBindingLifetimeSection::PreRollFrames");
static_assert(offsetof(UMovieSceneBindingLifetimeSection, PostRollFrames) == 252, "Offset mismatch for UMovieSceneBindingLifetimeSection::PostRollFrames");
static_assert(offsetof(UMovieSceneBindingLifetimeSection, RowIndex) == 256, "Offset mismatch for UMovieSceneBindingLifetimeSection::RowIndex");
static_assert(offsetof(UMovieSceneBindingLifetimeSection, OverlapPriority) == 260, "Offset mismatch for UMovieSceneBindingLifetimeSection::OverlapPriority");
static_assert(offsetof(UMovieSceneBindingLifetimeSection, bIsActive) == 264, "Offset mismatch for UMovieSceneBindingLifetimeSection::bIsActive");
static_assert(offsetof(UMovieSceneBindingLifetimeSection, StartTime) == 268, "Offset mismatch for UMovieSceneBindingLifetimeSection::StartTime");
static_assert(offsetof(UMovieSceneBindingLifetimeSection, EndTime) == 272, "Offset mismatch for UMovieSceneBindingLifetimeSection::EndTime");
static_assert(offsetof(UMovieSceneBindingLifetimeSection, PreRollTime) == 276, "Offset mismatch for UMovieSceneBindingLifetimeSection::PreRollTime");
static_assert(offsetof(UMovieSceneBindingLifetimeSection, PostRollTime) == 280, "Offset mismatch for UMovieSceneBindingLifetimeSection::PostRollTime");
static_assert(offsetof(UMovieSceneBindingLifetimeSection, bIsInfinite) == 284, "Offset mismatch for UMovieSceneBindingLifetimeSection::bIsInfinite");
static_assert(offsetof(UMovieSceneBindingLifetimeSection, bSupportsInfiniteRange) == 288, "Offset mismatch for UMovieSceneBindingLifetimeSection::bSupportsInfiniteRange");
static_assert(offsetof(UMovieSceneBindingLifetimeSection, BlendType) == 289, "Offset mismatch for UMovieSceneBindingLifetimeSection::BlendType");

// /Script/MovieScene.MovieSceneBindingLifetimeSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneBindingLifetimeSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneBindingLifetimeSystem, Linker) == 40, "Offset mismatch for UMovieSceneBindingLifetimeSystem::Linker");

// /Script/MovieScene.MovieSceneBindingLifetimeTrack
// Kind: Class; super: MovieSceneTrack
class UMovieSceneBindingLifetimeTrack
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    TArray<void*> Sections; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneBindingLifetimeTrack, Sections) == 256, "Offset mismatch for UMovieSceneBindingLifetimeTrack::Sections");

// /Script/MovieScene.MovieSceneBindingOverrides
// Kind: Class; super: Object
class UMovieSceneBindingOverrides
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> BindingData; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneBindingOverrides, BindingData) == 40, "Offset mismatch for UMovieSceneBindingOverrides::BindingData");

// /Script/MovieScene.MovieSceneBindingOwnerInterface
// Kind: Class; super: Interface
class UMovieSceneBindingOwnerInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneBlenderSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneBlenderSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneBlenderSystem, Linker) == 40, "Offset mismatch for UMovieSceneBlenderSystem::Linker");

// /Script/MovieScene.MovieSceneBlenderSystemSupport
// Kind: Class; super: Interface
class UMovieSceneBlenderSystemSupport
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneBoolSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneBoolSection
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t DefaultValue; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0141
    std::uint8_t BoolCurve[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneBoolSection, DefaultValue) == 320, "Offset mismatch for UMovieSceneBoolSection::DefaultValue");
static_assert(offsetof(UMovieSceneBoolSection, BoolCurve) == 328, "Offset mismatch for UMovieSceneBoolSection::BoolCurve");

// /Script/MovieScene.MovieSceneBoundObjectProxy
// Kind: Class; super: Interface
class UMovieSceneBoundObjectProxy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneBoundSceneComponentInstantiator
// Kind: Class; super: MovieSceneEntityInstantiatorSystem
class UMovieSceneBoundSceneComponentInstantiator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneBoundSceneComponentInstantiator, Linker) == 40, "Offset mismatch for UMovieSceneBoundSceneComponentInstantiator::Linker");

// /Script/MovieScene.MovieSceneBuiltInEasingFunction
// Kind: Class; super: Object
class UMovieSceneBuiltInEasingFunction
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Type; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMovieSceneBuiltInEasingFunction, Type) == 48, "Offset mismatch for UMovieSceneBuiltInEasingFunction::Type");

// /Script/MovieScene.MovieSceneCachePreAnimatedStateSystem
// Kind: Class; super: MovieSceneEntityInstantiatorSystem
class UMovieSceneCachePreAnimatedStateSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneCachePreAnimatedStateSystem, Linker) == 40, "Offset mismatch for UMovieSceneCachePreAnimatedStateSystem::Linker");

// /Script/MovieScene.MovieSceneCachedTrack
// Kind: Class; super: Interface
class UMovieSceneCachedTrack
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneChannelDecoration
// Kind: Class; super: Interface
class UMovieSceneChannelDecoration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneChannelOverrideContainer
// Kind: Class; super: MovieSceneSignedObject
class UMovieSceneChannelOverrideContainer
{
public:
    std::uint8_t Pad_0000[0x2C]; // 0x0000
    std::uint8_t Signature[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneChannelOverrideContainer, Signature) == 44, "Offset mismatch for UMovieSceneChannelOverrideContainer::Signature");

// /Script/MovieScene.MovieSceneChannelOverrideProvider
// Kind: Class; super: Interface
class UMovieSceneChannelOverrideProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneChannelOwner
// Kind: Class; super: Interface
class UMovieSceneChannelOwner
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneClock
// Kind: Class; super: MovieSceneSignedObject
class UMovieSceneClock
{
public:
    std::uint8_t Pad_0000[0x2C]; // 0x0000
    std::uint8_t Signature[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneClock, Signature) == 44, "Offset mismatch for UMovieSceneClock::Signature");

// /Script/MovieScene.MovieSceneCompiledData
// Kind: Class; super: Object
class UMovieSceneCompiledData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t EvaluationTemplate[0x60]; // 0x0028 (Size: 0x60, Type: StructProperty)
    std::uint8_t Hierarchy[0xC0]; // 0x0088 (Size: 0xC0, Type: StructProperty)
    std::uint8_t EntityComponentField[0xF0]; // 0x0148 (Size: 0xF0, Type: StructProperty)
    std::uint8_t TrackTemplateField[0x30]; // 0x0238 (Size: 0x30, Type: StructProperty)
    TArray<void*> DeterminismFences; // 0x0268 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CompiledSignature[0x10]; // 0x0278 (Size: 0x10, Type: StructProperty)
    std::uint8_t CompilerVersion[0x10]; // 0x0288 (Size: 0x10, Type: StructProperty)
    std::uint8_t AccumulatedMask; // 0x0298 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AllocatedMask; // 0x0299 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AccumulatedFlags; // 0x029A (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMovieSceneCompiledData, EvaluationTemplate) == 40, "Offset mismatch for UMovieSceneCompiledData::EvaluationTemplate");
static_assert(offsetof(UMovieSceneCompiledData, Hierarchy) == 136, "Offset mismatch for UMovieSceneCompiledData::Hierarchy");
static_assert(offsetof(UMovieSceneCompiledData, EntityComponentField) == 328, "Offset mismatch for UMovieSceneCompiledData::EntityComponentField");
static_assert(offsetof(UMovieSceneCompiledData, TrackTemplateField) == 568, "Offset mismatch for UMovieSceneCompiledData::TrackTemplateField");
static_assert(offsetof(UMovieSceneCompiledData, DeterminismFences) == 616, "Offset mismatch for UMovieSceneCompiledData::DeterminismFences");
static_assert(offsetof(UMovieSceneCompiledData, CompiledSignature) == 632, "Offset mismatch for UMovieSceneCompiledData::CompiledSignature");
static_assert(offsetof(UMovieSceneCompiledData, CompilerVersion) == 648, "Offset mismatch for UMovieSceneCompiledData::CompilerVersion");
static_assert(offsetof(UMovieSceneCompiledData, AccumulatedMask) == 664, "Offset mismatch for UMovieSceneCompiledData::AccumulatedMask");
static_assert(offsetof(UMovieSceneCompiledData, AllocatedMask) == 665, "Offset mismatch for UMovieSceneCompiledData::AllocatedMask");
static_assert(offsetof(UMovieSceneCompiledData, AccumulatedFlags) == 666, "Offset mismatch for UMovieSceneCompiledData::AccumulatedFlags");

// /Script/MovieScene.MovieSceneCompiledDataManager
// Kind: Class; super: Object
class UMovieSceneCompiledDataManager
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    TMap<void*, void*> Hierarchies; // 0x0098 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> TrackTemplates; // 0x00A8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> TrackTemplateFields; // 0x00B8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> EntityComponentFields; // 0x00C8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMovieSceneCompiledDataManager, Hierarchies) == 152, "Offset mismatch for UMovieSceneCompiledDataManager::Hierarchies");
static_assert(offsetof(UMovieSceneCompiledDataManager, TrackTemplates) == 168, "Offset mismatch for UMovieSceneCompiledDataManager::TrackTemplates");
static_assert(offsetof(UMovieSceneCompiledDataManager, TrackTemplateFields) == 184, "Offset mismatch for UMovieSceneCompiledDataManager::TrackTemplateFields");
static_assert(offsetof(UMovieSceneCompiledDataManager, EntityComponentFields) == 200, "Offset mismatch for UMovieSceneCompiledDataManager::EntityComponentFields");

// /Script/MovieScene.MovieSceneCondition
// Kind: Class; super: MovieSceneSignedObject
class UMovieSceneCondition
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t bInvert; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMovieSceneCondition, bInvert) == 88, "Offset mismatch for UMovieSceneCondition::bInvert");

// /Script/MovieScene.MovieSceneCustomBinding
// Kind: Class; super: Object
class UMovieSceneCustomBinding
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneCustomClockSource
// Kind: Class; super: Interface
class UMovieSceneCustomClockSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneDecoration
// Kind: Class; super: Interface
class UMovieSceneDecoration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneDecorationContainerObject
// Kind: Class; super: MovieSceneSignedObject
class UMovieSceneDecorationContainerObject
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t Decorations[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t MutedDecorations[0x10]; // 0x0068 (Size: 0x10, Type: SetProperty)
    TSet<void*> DisabledDecorations; // 0x0078 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UMovieSceneDecorationContainerObject, Decorations) == 88, "Offset mismatch for UMovieSceneDecorationContainerObject::Decorations");
static_assert(offsetof(UMovieSceneDecorationContainerObject, MutedDecorations) == 104, "Offset mismatch for UMovieSceneDecorationContainerObject::MutedDecorations");
static_assert(offsetof(UMovieSceneDecorationContainerObject, DisabledDecorations) == 120, "Offset mismatch for UMovieSceneDecorationContainerObject::DisabledDecorations");

// /Script/MovieScene.MovieSceneDeterminismSource
// Kind: Class; super: Interface
class UMovieSceneDeterminismSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneEasingExternalCurve
// Kind: Class; super: Object
class UMovieSceneEasingExternalCurve
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Curve; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneEasingExternalCurve, Curve) == 48, "Offset mismatch for UMovieSceneEasingExternalCurve::Curve");

// /Script/MovieScene.MovieSceneEasingFunction
// Kind: Class; super: Interface
class UMovieSceneEasingFunction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneEntityDecorator
// Kind: Class; super: Interface
class UMovieSceneEntityDecorator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneEntityGroupingSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneEntityGroupingSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneEntityGroupingSystem, Linker) == 40, "Offset mismatch for UMovieSceneEntityGroupingSystem::Linker");

// /Script/MovieScene.MovieSceneEntityInstantiatorSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneEntityInstantiatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneEntityInstantiatorSystem, Linker) == 40, "Offset mismatch for UMovieSceneEntityInstantiatorSystem::Linker");

// /Script/MovieScene.MovieSceneEntityProvider
// Kind: Class; super: Interface
class UMovieSceneEntityProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneEntitySystem
// Kind: Class; super: Object
class UMovieSceneEntitySystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneEntitySystem, Linker) == 40, "Offset mismatch for UMovieSceneEntitySystem::Linker");

// /Script/MovieScene.MovieSceneEntitySystemLinker
// Kind: Class; super: Object
class UMovieSceneEntitySystemLinker
{
public:
    std::uint8_t Pad_0000[0x250]; // 0x0000
    std::uint8_t SystemGraph[0x1]; // 0x0250 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneEntitySystemLinker, SystemGraph) == 592, "Offset mismatch for UMovieSceneEntitySystemLinker::SystemGraph");

// /Script/MovieScene.MovieSceneEvalTimeSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneEvalTimeSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneEvalTimeSystem, Linker) == 40, "Offset mismatch for UMovieSceneEvalTimeSystem::Linker");

// /Script/MovieScene.MovieSceneEvaluationHook
// Kind: Class; super: Interface
class UMovieSceneEvaluationHook
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneEvaluationHookSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneEvaluationHookSystem
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TMap<void*, void*> PendingEventsByRootInstance; // 0x0040 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMovieSceneEvaluationHookSystem, PendingEventsByRootInstance) == 64, "Offset mismatch for UMovieSceneEvaluationHookSystem::PendingEventsByRootInstance");

// /Script/MovieScene.MovieSceneExternalClock
// Kind: Class; super: MovieSceneClock
class UMovieSceneExternalClock
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t CustomClockSourcePath[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneExternalClock, CustomClockSourcePath) == 88, "Offset mismatch for UMovieSceneExternalClock::CustomClockSourcePath");

// /Script/MovieScene.MovieSceneFolder
// Kind: Class; super: MovieSceneDecorationContainerObject
class UMovieSceneFolder
{
public:
    std::uint8_t Pad_0000[0x8C]; // 0x0000
    std::uint8_t FolderName[0x4]; // 0x008C (Size: 0x4, Type: NameProperty)
    TArray<void*> ChildFolders; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ChildTracks; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ChildObjectBindingStrings; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneFolder, FolderName) == 140, "Offset mismatch for UMovieSceneFolder::FolderName");
static_assert(offsetof(UMovieSceneFolder, ChildFolders) == 144, "Offset mismatch for UMovieSceneFolder::ChildFolders");
static_assert(offsetof(UMovieSceneFolder, ChildTracks) == 160, "Offset mismatch for UMovieSceneFolder::ChildTracks");
static_assert(offsetof(UMovieSceneFolder, ChildObjectBindingStrings) == 176, "Offset mismatch for UMovieSceneFolder::ChildObjectBindingStrings");

// /Script/MovieScene.MovieSceneGenericBoundObjectInstantiator
// Kind: Class; super: MovieSceneEntityInstantiatorSystem
class UMovieSceneGenericBoundObjectInstantiator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneGenericBoundObjectInstantiator, Linker) == 40, "Offset mismatch for UMovieSceneGenericBoundObjectInstantiator::Linker");

// /Script/MovieScene.MovieSceneGroupCondition
// Kind: Class; super: MovieSceneCondition
class UMovieSceneGroupCondition
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t Operator; // 0x0060 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0061
    TArray<void*> SubConditions; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneGroupCondition, Operator) == 96, "Offset mismatch for UMovieSceneGroupCondition::Operator");
static_assert(offsetof(UMovieSceneGroupCondition, SubConditions) == 104, "Offset mismatch for UMovieSceneGroupCondition::SubConditions");

// /Script/MovieScene.MovieSceneHookSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneHookSection
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    std::uint8_t bRequiresRangedHook; // 0x0150 (Size: 0x1, Type: BoolProperty)
    // 0x0150 BoolProperty bRequiresTriggerHooks (shared storage)
};

static_assert(offsetof(UMovieSceneHookSection, bRequiresRangedHook) == 336, "Offset mismatch for UMovieSceneHookSection::bRequiresRangedHook");

// /Script/MovieScene.MovieSceneInitialValueSystem
// Kind: Class; super: MovieSceneEntityInstantiatorSystem
class UMovieSceneInitialValueSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneInitialValueSystem, Linker) == 40, "Offset mismatch for UMovieSceneInitialValueSystem::Linker");

// /Script/MovieScene.MovieSceneKeyProxy
// Kind: Class; super: Interface
class UMovieSceneKeyProxy
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneLanguagePreviewDecoration
// Kind: Class; super: Object
class UMovieSceneLanguagePreviewDecoration
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString PreviewLanguage; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UMovieSceneLanguagePreviewDecoration, PreviewLanguage) == 40, "Offset mismatch for UMovieSceneLanguagePreviewDecoration::PreviewLanguage");

// /Script/MovieScene.MovieSceneLifetimeDecoration
// Kind: Class; super: Interface
class UMovieSceneLifetimeDecoration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneMetaData
// Kind: Class; super: Object
class UMovieSceneMetaData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString Author; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t Created[0x8]; // 0x0040 (Size: 0x8, Type: StructProperty)
    FString Notes; // 0x0048 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UMovieSceneMetaData, Author) == 48, "Offset mismatch for UMovieSceneMetaData::Author");
static_assert(offsetof(UMovieSceneMetaData, Created) == 64, "Offset mismatch for UMovieSceneMetaData::Created");
static_assert(offsetof(UMovieSceneMetaData, Notes) == 72, "Offset mismatch for UMovieSceneMetaData::Notes");

// /Script/MovieScene.MovieSceneMetaDataInterface
// Kind: Class; super: Interface
class UMovieSceneMetaDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneMuteSoloDecoration
// Kind: Class; super: Object
class UMovieSceneMuteSoloDecoration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneNameableTrack
// Kind: Class; super: MovieSceneTrack
class UMovieSceneNameableTrack
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t EvalOptions[0x8]; // 0x0090 (Size: 0x8, Type: StructProperty)
    void* ParentTrack; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ConditionContainer[0x8]; // 0x00A0 (Size: 0x8, Type: StructProperty)
    std::uint8_t bAutoExpandToKeyframes; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x00A9
    std::uint8_t bIsEvalDisabled; // 0x00AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x5]; // 0x00AB
    TArray<void*> RowsDisabled; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x4]; // 0x00C0
    std::uint8_t EvaluationFieldGuid[0x14]; // 0x00C4 (Size: 0x14, Type: StructProperty)
    std::uint8_t EvaluationField[0x10]; // 0x00D8 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> TrackRowMetadata; // 0x00E8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMovieSceneNameableTrack, EvalOptions) == 144, "Offset mismatch for UMovieSceneNameableTrack::EvalOptions");
static_assert(offsetof(UMovieSceneNameableTrack, ParentTrack) == 152, "Offset mismatch for UMovieSceneNameableTrack::ParentTrack");
static_assert(offsetof(UMovieSceneNameableTrack, ConditionContainer) == 160, "Offset mismatch for UMovieSceneNameableTrack::ConditionContainer");
static_assert(offsetof(UMovieSceneNameableTrack, bAutoExpandToKeyframes) == 168, "Offset mismatch for UMovieSceneNameableTrack::bAutoExpandToKeyframes");
static_assert(offsetof(UMovieSceneNameableTrack, bIsEvalDisabled) == 170, "Offset mismatch for UMovieSceneNameableTrack::bIsEvalDisabled");
static_assert(offsetof(UMovieSceneNameableTrack, RowsDisabled) == 176, "Offset mismatch for UMovieSceneNameableTrack::RowsDisabled");
static_assert(offsetof(UMovieSceneNameableTrack, EvaluationFieldGuid) == 196, "Offset mismatch for UMovieSceneNameableTrack::EvaluationFieldGuid");
static_assert(offsetof(UMovieSceneNameableTrack, EvaluationField) == 216, "Offset mismatch for UMovieSceneNameableTrack::EvaluationField");
static_assert(offsetof(UMovieSceneNameableTrack, TrackRowMetadata) == 232, "Offset mismatch for UMovieSceneNameableTrack::TrackRowMetadata");

// /Script/MovieScene.MovieSceneNodeGroup
// Kind: Class; super: Object
class UMovieSceneNodeGroup
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneNodeGroupCollection
// Kind: Class; super: Object
class UMovieSceneNodeGroupCollection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneNumericVariantGetter
// Kind: Class; super: MovieSceneSignedObject
class UMovieSceneNumericVariantGetter
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* ReferenceToSelf; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneNumericVariantGetter, ReferenceToSelf) == 88, "Offset mismatch for UMovieSceneNumericVariantGetter::ReferenceToSelf");

// /Script/MovieScene.MovieScenePlayRateCurve
// Kind: Class; super: MovieSceneTimeWarpGetter
class UMovieScenePlayRateCurve
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t PlayRate[0xE0]; // 0x0070 (Size: 0xE0, Type: StructProperty)
    std::uint8_t PlaybackStartFrame[0x4]; // 0x0150 (Size: 0x4, Type: StructProperty)
    std::uint8_t AnchorMode; // 0x0154 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bManualPlaybackStart; // 0x0155 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMovieScenePlayRateCurve, PlayRate) == 112, "Offset mismatch for UMovieScenePlayRateCurve::PlayRate");
static_assert(offsetof(UMovieScenePlayRateCurve, PlaybackStartFrame) == 336, "Offset mismatch for UMovieScenePlayRateCurve::PlaybackStartFrame");
static_assert(offsetof(UMovieScenePlayRateCurve, AnchorMode) == 340, "Offset mismatch for UMovieScenePlayRateCurve::AnchorMode");
static_assert(offsetof(UMovieScenePlayRateCurve, bManualPlaybackStart) == 341, "Offset mismatch for UMovieScenePlayRateCurve::bManualPlaybackStart");

// /Script/MovieScene.MovieScenePlaybackClient
// Kind: Class; super: Interface
class UMovieScenePlaybackClient
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieScenePreAnimatedStateSystemInterface
// Kind: Class; super: Interface
class UMovieScenePreAnimatedStateSystemInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneReplaceableBindingBase
// Kind: Class; super: MovieSceneCustomBinding
class UMovieSceneReplaceableBindingBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneRestorePreAnimatedStateSystem
// Kind: Class; super: MovieSceneEntityInstantiatorSystem
class UMovieSceneRestorePreAnimatedStateSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneRestorePreAnimatedStateSystem, Linker) == 40, "Offset mismatch for UMovieSceneRestorePreAnimatedStateSystem::Linker");

// /Script/MovieScene.MovieSceneRootInstantiatorSystem
// Kind: Class; super: MovieSceneEntityInstantiatorSystem
class UMovieSceneRootInstantiatorSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneRootInstantiatorSystem, Linker) == 40, "Offset mismatch for UMovieSceneRootInstantiatorSystem::Linker");

// /Script/MovieScene.MovieSceneScalingAnchors
// Kind: Class; super: MovieScenePlayRateCurve
class UMovieSceneScalingAnchors
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    TArray<void*> ScalingDrivers; // 0x0180 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> InitialAnchors; // 0x0190 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ScalingGroups; // 0x01A0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMovieSceneScalingAnchors, ScalingDrivers) == 384, "Offset mismatch for UMovieSceneScalingAnchors::ScalingDrivers");
static_assert(offsetof(UMovieSceneScalingAnchors, InitialAnchors) == 400, "Offset mismatch for UMovieSceneScalingAnchors::InitialAnchors");
static_assert(offsetof(UMovieSceneScalingAnchors, ScalingGroups) == 416, "Offset mismatch for UMovieSceneScalingAnchors::ScalingGroups");

// /Script/MovieScene.MovieSceneScalingDriver
// Kind: Class; super: Interface
class UMovieSceneScalingDriver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneSection
// Kind: Class; super: MovieSceneDecorationContainerObject
class UMovieSceneSection
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t EvalOptions[0x8]; // 0x0088 (Size: 0x8, Type: StructProperty)
    std::uint8_t Easing[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t SectionRange[0x10]; // 0x00C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t TimecodeSource[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ConditionContainer[0x8]; // 0x00F0 (Size: 0x8, Type: StructProperty)
    std::uint8_t PreRollFrames[0x4]; // 0x00F8 (Size: 0x4, Type: StructProperty)
    std::uint8_t PostRollFrames[0x4]; // 0x00FC (Size: 0x4, Type: StructProperty)
    std::int32_t RowIndex; // 0x0100 (Size: 0x4, Type: IntProperty)
    std::int32_t OverlapPriority; // 0x0104 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsActive; // 0x0108 (Size: 0x1, Type: BoolProperty)
    // 0x0108 BoolProperty bIsLocked (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0109
    float StartTime; // 0x010C (Size: 0x4, Type: FloatProperty)
    float EndTime; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float PreRollTime; // 0x0114 (Size: 0x4, Type: FloatProperty)
    float PostRollTime; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsInfinite; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x011D
    std::uint8_t bSupportsInfiniteRange; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BlendType[0x1]; // 0x0121 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneSection, EvalOptions) == 136, "Offset mismatch for UMovieSceneSection::EvalOptions");
static_assert(offsetof(UMovieSceneSection, Easing) == 144, "Offset mismatch for UMovieSceneSection::Easing");
static_assert(offsetof(UMovieSceneSection, SectionRange) == 200, "Offset mismatch for UMovieSceneSection::SectionRange");
static_assert(offsetof(UMovieSceneSection, TimecodeSource) == 216, "Offset mismatch for UMovieSceneSection::TimecodeSource");
static_assert(offsetof(UMovieSceneSection, ConditionContainer) == 240, "Offset mismatch for UMovieSceneSection::ConditionContainer");
static_assert(offsetof(UMovieSceneSection, PreRollFrames) == 248, "Offset mismatch for UMovieSceneSection::PreRollFrames");
static_assert(offsetof(UMovieSceneSection, PostRollFrames) == 252, "Offset mismatch for UMovieSceneSection::PostRollFrames");
static_assert(offsetof(UMovieSceneSection, RowIndex) == 256, "Offset mismatch for UMovieSceneSection::RowIndex");
static_assert(offsetof(UMovieSceneSection, OverlapPriority) == 260, "Offset mismatch for UMovieSceneSection::OverlapPriority");
static_assert(offsetof(UMovieSceneSection, bIsActive) == 264, "Offset mismatch for UMovieSceneSection::bIsActive");
static_assert(offsetof(UMovieSceneSection, StartTime) == 268, "Offset mismatch for UMovieSceneSection::StartTime");
static_assert(offsetof(UMovieSceneSection, EndTime) == 272, "Offset mismatch for UMovieSceneSection::EndTime");
static_assert(offsetof(UMovieSceneSection, PreRollTime) == 276, "Offset mismatch for UMovieSceneSection::PreRollTime");
static_assert(offsetof(UMovieSceneSection, PostRollTime) == 280, "Offset mismatch for UMovieSceneSection::PostRollTime");
static_assert(offsetof(UMovieSceneSection, bIsInfinite) == 284, "Offset mismatch for UMovieSceneSection::bIsInfinite");
static_assert(offsetof(UMovieSceneSection, bSupportsInfiniteRange) == 288, "Offset mismatch for UMovieSceneSection::bSupportsInfiniteRange");
static_assert(offsetof(UMovieSceneSection, BlendType) == 289, "Offset mismatch for UMovieSceneSection::BlendType");

// /Script/MovieScene.MovieSceneSectionAnchorsDecoration
// Kind: Class; super: Object
class UMovieSceneSectionAnchorsDecoration
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t StartAnchor[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneSectionAnchorsDecoration, StartAnchor) == 64, "Offset mismatch for UMovieSceneSectionAnchorsDecoration::StartAnchor");

// /Script/MovieScene.MovieSceneSectionChannelOverrideRegistry
// Kind: Class; super: Object
class UMovieSceneSectionChannelOverrideRegistry
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> Overrides; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMovieSceneSectionChannelOverrideRegistry, Overrides) == 40, "Offset mismatch for UMovieSceneSectionChannelOverrideRegistry::Overrides");

// /Script/MovieScene.MovieSceneSectionDecoration
// Kind: Class; super: Interface
class UMovieSceneSectionDecoration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneSectionProviderDecoration
// Kind: Class; super: Interface
class UMovieSceneSectionProviderDecoration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneSequence
// Kind: Class; super: MovieSceneSignedObject
class UMovieSceneSequence
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* CompiledData; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DefaultCompletionMode; // 0x0060 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bParentContextsAreSignificant; // 0x0061 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPlayableDirectly; // 0x0062 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SequenceFlags; // 0x0063 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UMovieSceneSequence, CompiledData) == 88, "Offset mismatch for UMovieSceneSequence::CompiledData");
static_assert(offsetof(UMovieSceneSequence, DefaultCompletionMode) == 96, "Offset mismatch for UMovieSceneSequence::DefaultCompletionMode");
static_assert(offsetof(UMovieSceneSequence, bParentContextsAreSignificant) == 97, "Offset mismatch for UMovieSceneSequence::bParentContextsAreSignificant");
static_assert(offsetof(UMovieSceneSequence, bPlayableDirectly) == 98, "Offset mismatch for UMovieSceneSequence::bPlayableDirectly");
static_assert(offsetof(UMovieSceneSequence, SequenceFlags) == 99, "Offset mismatch for UMovieSceneSequence::SequenceFlags");

// /Script/MovieScene.MovieSceneSequencePlayer
// Kind: Class; super: Object
class UMovieSceneSequencePlayer
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    TScriptInterface<void> Observer; // 0x00D8 (Size: 0x10, Type: InterfaceProperty)
    FMulticastInlineDelegate OnPlay; // 0x00E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayReverse; // 0x00F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnStop; // 0x0108 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPause; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFinished; // 0x0128 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0138
    std::uint8_t Status; // 0x0148 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0149
    std::uint8_t bReversePlayback; // 0x014C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0xB]; // 0x014D
    void* Sequence; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StartTime[0x4]; // 0x0160 (Size: 0x4, Type: StructProperty)
    std::int32_t DurationFrames; // 0x0164 (Size: 0x4, Type: IntProperty)
    float DurationSubFrames; // 0x0168 (Size: 0x4, Type: FloatProperty)
    std::int32_t CurrentNumLoops; // 0x016C (Size: 0x4, Type: IntProperty)
    std::int32_t SerialNumber; // 0x0170 (Size: 0x4, Type: IntProperty)
    std::uint8_t PlaybackSettings[0x54]; // 0x0174 (Size: 0x54, Type: StructProperty)
    std::uint8_t RootTemplateInstance[0xAC]; // 0x01C8 (Size: 0xAC, Type: StructProperty)
    std::uint8_t NetSyncProps[0x14]; // 0x0274 (Size: 0x14, Type: StructProperty)
    TScriptInterface<void> PlaybackClient; // 0x0288 (Size: 0x10, Type: InterfaceProperty)
    void* TickManager; // 0x0298 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneSequencePlayer, Observer) == 216, "Offset mismatch for UMovieSceneSequencePlayer::Observer");
static_assert(offsetof(UMovieSceneSequencePlayer, OnPlay) == 232, "Offset mismatch for UMovieSceneSequencePlayer::OnPlay");
static_assert(offsetof(UMovieSceneSequencePlayer, OnPlayReverse) == 248, "Offset mismatch for UMovieSceneSequencePlayer::OnPlayReverse");
static_assert(offsetof(UMovieSceneSequencePlayer, OnStop) == 264, "Offset mismatch for UMovieSceneSequencePlayer::OnStop");
static_assert(offsetof(UMovieSceneSequencePlayer, OnPause) == 280, "Offset mismatch for UMovieSceneSequencePlayer::OnPause");
static_assert(offsetof(UMovieSceneSequencePlayer, OnFinished) == 296, "Offset mismatch for UMovieSceneSequencePlayer::OnFinished");
static_assert(offsetof(UMovieSceneSequencePlayer, Status) == 328, "Offset mismatch for UMovieSceneSequencePlayer::Status");
static_assert(offsetof(UMovieSceneSequencePlayer, bReversePlayback) == 332, "Offset mismatch for UMovieSceneSequencePlayer::bReversePlayback");
static_assert(offsetof(UMovieSceneSequencePlayer, Sequence) == 344, "Offset mismatch for UMovieSceneSequencePlayer::Sequence");
static_assert(offsetof(UMovieSceneSequencePlayer, StartTime) == 352, "Offset mismatch for UMovieSceneSequencePlayer::StartTime");
static_assert(offsetof(UMovieSceneSequencePlayer, DurationFrames) == 356, "Offset mismatch for UMovieSceneSequencePlayer::DurationFrames");
static_assert(offsetof(UMovieSceneSequencePlayer, DurationSubFrames) == 360, "Offset mismatch for UMovieSceneSequencePlayer::DurationSubFrames");
static_assert(offsetof(UMovieSceneSequencePlayer, CurrentNumLoops) == 364, "Offset mismatch for UMovieSceneSequencePlayer::CurrentNumLoops");
static_assert(offsetof(UMovieSceneSequencePlayer, SerialNumber) == 368, "Offset mismatch for UMovieSceneSequencePlayer::SerialNumber");
static_assert(offsetof(UMovieSceneSequencePlayer, PlaybackSettings) == 372, "Offset mismatch for UMovieSceneSequencePlayer::PlaybackSettings");
static_assert(offsetof(UMovieSceneSequencePlayer, RootTemplateInstance) == 456, "Offset mismatch for UMovieSceneSequencePlayer::RootTemplateInstance");
static_assert(offsetof(UMovieSceneSequencePlayer, NetSyncProps) == 628, "Offset mismatch for UMovieSceneSequencePlayer::NetSyncProps");
static_assert(offsetof(UMovieSceneSequencePlayer, PlaybackClient) == 648, "Offset mismatch for UMovieSceneSequencePlayer::PlaybackClient");
static_assert(offsetof(UMovieSceneSequencePlayer, TickManager) == 664, "Offset mismatch for UMovieSceneSequencePlayer::TickManager");

// /Script/MovieScene.MovieSceneSequencePlayerObserver
// Kind: Class; super: Interface
class UMovieSceneSequencePlayerObserver
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneSequenceTickManager
// Kind: Class; super: Object
class UMovieSceneSequenceTickManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneSequenceTickManagerClient
// Kind: Class; super: Interface
class UMovieSceneSequenceTickManagerClient
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneShotMetaData
// Kind: Class; super: Object
class UMovieSceneShotMetaData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bIsNoGood[0x2]; // 0x0030 (Size: 0x2, Type: OptionalProperty)
    std::uint8_t bIsFlagged[0x2]; // 0x0032 (Size: 0x2, Type: OptionalProperty)
    std::uint8_t bIsRecorded[0x2]; // 0x0034 (Size: 0x2, Type: OptionalProperty)
    std::uint8_t bIsSubSequence[0x2]; // 0x0036 (Size: 0x2, Type: OptionalProperty)
    std::uint8_t FavoriteRating[0x1]; // 0x0038 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(UMovieSceneShotMetaData, bIsNoGood) == 48, "Offset mismatch for UMovieSceneShotMetaData::bIsNoGood");
static_assert(offsetof(UMovieSceneShotMetaData, bIsFlagged) == 50, "Offset mismatch for UMovieSceneShotMetaData::bIsFlagged");
static_assert(offsetof(UMovieSceneShotMetaData, bIsRecorded) == 52, "Offset mismatch for UMovieSceneShotMetaData::bIsRecorded");
static_assert(offsetof(UMovieSceneShotMetaData, bIsSubSequence) == 54, "Offset mismatch for UMovieSceneShotMetaData::bIsSubSequence");
static_assert(offsetof(UMovieSceneShotMetaData, FavoriteRating) == 56, "Offset mismatch for UMovieSceneShotMetaData::FavoriteRating");

// /Script/MovieScene.MovieSceneSignedObject
// Kind: Class; super: Object
class UMovieSceneSignedObject
{
public:
    std::uint8_t Pad_0000[0x2C]; // 0x0000
    std::uint8_t Signature[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneSignedObject, Signature) == 44, "Offset mismatch for UMovieSceneSignedObject::Signature");

// /Script/MovieScene.MovieSceneSpawnSection
// Kind: Class; super: MovieSceneBoolSection
class UMovieSceneSpawnSection
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t DefaultValue; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0141
    std::uint8_t BoolCurve[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneSpawnSection, DefaultValue) == 320, "Offset mismatch for UMovieSceneSpawnSection::DefaultValue");
static_assert(offsetof(UMovieSceneSpawnSection, BoolCurve) == 328, "Offset mismatch for UMovieSceneSpawnSection::BoolCurve");

// /Script/MovieScene.MovieSceneSpawnTrack
// Kind: Class; super: MovieSceneTrack
class UMovieSceneSpawnTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> Sections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ObjectGuid[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneSpawnTrack, Sections) == 248, "Offset mismatch for UMovieSceneSpawnTrack::Sections");
static_assert(offsetof(UMovieSceneSpawnTrack, ObjectGuid) == 264, "Offset mismatch for UMovieSceneSpawnTrack::ObjectGuid");

// /Script/MovieScene.MovieSceneSpawnableBindingBase
// Kind: Class; super: MovieSceneCustomBinding
class UMovieSceneSpawnableBindingBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SpawnOwnership; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bContinuouslyRespawn; // 0x0029 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMovieSceneSpawnableBindingBase, SpawnOwnership) == 40, "Offset mismatch for UMovieSceneSpawnableBindingBase::SpawnOwnership");
static_assert(offsetof(UMovieSceneSpawnableBindingBase, bContinuouslyRespawn) == 41, "Offset mismatch for UMovieSceneSpawnableBindingBase::bContinuouslyRespawn");

// /Script/MovieScene.MovieSceneSpawnablesSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneSpawnablesSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneSpawnablesSystem, Linker) == 40, "Offset mismatch for UMovieSceneSpawnablesSystem::Linker");

// /Script/MovieScene.MovieSceneSubSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneSubSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t Parameters[0x30]; // 0x0148 (Size: 0x30, Type: StructProperty)
    float StartOffset; // 0x0178 (Size: 0x4, Type: FloatProperty)
    float timescale; // 0x017C (Size: 0x4, Type: FloatProperty)
    float PreRollTime; // 0x0180 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NetworkMask; // 0x0184 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0185
    std::uint8_t OriginOverrideMask[0x8]; // 0x0188 (Size: 0x8, Type: StructProperty)
    std::uint8_t Translation[0x288]; // 0x0190 (Size: 0x288, Type: StructProperty)
    std::uint8_t Rotation[0x288]; // 0x0418 (Size: 0x288, Type: StructProperty)
    void* SubSequence; // 0x06A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneSubSection, Parameters) == 328, "Offset mismatch for UMovieSceneSubSection::Parameters");
static_assert(offsetof(UMovieSceneSubSection, StartOffset) == 376, "Offset mismatch for UMovieSceneSubSection::StartOffset");
static_assert(offsetof(UMovieSceneSubSection, timescale) == 380, "Offset mismatch for UMovieSceneSubSection::timescale");
static_assert(offsetof(UMovieSceneSubSection, PreRollTime) == 384, "Offset mismatch for UMovieSceneSubSection::PreRollTime");
static_assert(offsetof(UMovieSceneSubSection, NetworkMask) == 388, "Offset mismatch for UMovieSceneSubSection::NetworkMask");
static_assert(offsetof(UMovieSceneSubSection, OriginOverrideMask) == 392, "Offset mismatch for UMovieSceneSubSection::OriginOverrideMask");
static_assert(offsetof(UMovieSceneSubSection, Translation) == 400, "Offset mismatch for UMovieSceneSubSection::Translation");
static_assert(offsetof(UMovieSceneSubSection, Rotation) == 1048, "Offset mismatch for UMovieSceneSubSection::Rotation");
static_assert(offsetof(UMovieSceneSubSection, SubSequence) == 1696, "Offset mismatch for UMovieSceneSubSection::SubSequence");

// /Script/MovieScene.MovieSceneSubTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneSubTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> Sections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneSubTrack, Sections) == 248, "Offset mismatch for UMovieSceneSubTrack::Sections");

// /Script/MovieScene.MovieSceneTimeWarpCurve
// Kind: Class; super: MovieSceneTimeWarpGetter
class UMovieSceneTimeWarpCurve
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t Channel[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneTimeWarpCurve, Channel) == 112, "Offset mismatch for UMovieSceneTimeWarpCurve::Channel");

// /Script/MovieScene.MovieSceneTimeWarpDecoration
// Kind: Class; super: Object
class UMovieSceneTimeWarpDecoration
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> Sources; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneTimeWarpDecoration, Sources) == 48, "Offset mismatch for UMovieSceneTimeWarpDecoration::Sources");

// /Script/MovieScene.MovieSceneTimeWarpGetter
// Kind: Class; super: MovieSceneNumericVariantGetter
class UMovieSceneTimeWarpGetter
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bMuted; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMovieSceneTimeWarpGetter, bMuted) == 104, "Offset mismatch for UMovieSceneTimeWarpGetter::bMuted");

// /Script/MovieScene.MovieSceneTimeWarpSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneTimeWarpSection
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t TimeWarp[0x1]; // 0x0140 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneTimeWarpSection, TimeWarp) == 320, "Offset mismatch for UMovieSceneTimeWarpSection::TimeWarp");

// /Script/MovieScene.MovieSceneTimeWarpSource
// Kind: Class; super: Interface
class UMovieSceneTimeWarpSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneTimeWarpTrack
// Kind: Class; super: MovieSceneTrack
class UMovieSceneTimeWarpTrack
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    TArray<void*> Sections; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bIsActiveTimeWarp; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMovieSceneTimeWarpTrack, Sections) == 256, "Offset mismatch for UMovieSceneTimeWarpTrack::Sections");
static_assert(offsetof(UMovieSceneTimeWarpTrack, bIsActiveTimeWarp) == 272, "Offset mismatch for UMovieSceneTimeWarpTrack::bIsActiveTimeWarp");

// /Script/MovieScene.MovieSceneTrack
// Kind: Class; super: MovieSceneDecorationContainerObject
class UMovieSceneTrack
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t EvalOptions[0x8]; // 0x0090 (Size: 0x8, Type: StructProperty)
    void* ParentTrack; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ConditionContainer[0x8]; // 0x00A0 (Size: 0x8, Type: StructProperty)
    std::uint8_t bAutoExpandToKeyframes; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x00A9
    std::uint8_t bIsEvalDisabled; // 0x00AA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x5]; // 0x00AB
    TArray<void*> RowsDisabled; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x4]; // 0x00C0
    std::uint8_t EvaluationFieldGuid[0x14]; // 0x00C4 (Size: 0x14, Type: StructProperty)
    std::uint8_t EvaluationField[0x10]; // 0x00D8 (Size: 0x10, Type: StructProperty)
    TMap<void*, void*> TrackRowMetadata; // 0x00E8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMovieSceneTrack, EvalOptions) == 144, "Offset mismatch for UMovieSceneTrack::EvalOptions");
static_assert(offsetof(UMovieSceneTrack, ParentTrack) == 152, "Offset mismatch for UMovieSceneTrack::ParentTrack");
static_assert(offsetof(UMovieSceneTrack, ConditionContainer) == 160, "Offset mismatch for UMovieSceneTrack::ConditionContainer");
static_assert(offsetof(UMovieSceneTrack, bAutoExpandToKeyframes) == 168, "Offset mismatch for UMovieSceneTrack::bAutoExpandToKeyframes");
static_assert(offsetof(UMovieSceneTrack, bIsEvalDisabled) == 170, "Offset mismatch for UMovieSceneTrack::bIsEvalDisabled");
static_assert(offsetof(UMovieSceneTrack, RowsDisabled) == 176, "Offset mismatch for UMovieSceneTrack::RowsDisabled");
static_assert(offsetof(UMovieSceneTrack, EvaluationFieldGuid) == 196, "Offset mismatch for UMovieSceneTrack::EvaluationFieldGuid");
static_assert(offsetof(UMovieSceneTrack, EvaluationField) == 216, "Offset mismatch for UMovieSceneTrack::EvaluationField");
static_assert(offsetof(UMovieSceneTrack, TrackRowMetadata) == 232, "Offset mismatch for UMovieSceneTrack::TrackRowMetadata");

// /Script/MovieScene.MovieSceneTrackDecoration
// Kind: Class; super: Interface
class UMovieSceneTrackDecoration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneTrackInstance
// Kind: Class; super: Object
class UMovieSceneTrackInstance
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> WeakAnimatedObject; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bIsRootTrackInstance; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    void* PrivateLinker; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Inputs; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneTrackInstance, WeakAnimatedObject) == 40, "Offset mismatch for UMovieSceneTrackInstance::WeakAnimatedObject");
static_assert(offsetof(UMovieSceneTrackInstance, bIsRootTrackInstance) == 48, "Offset mismatch for UMovieSceneTrackInstance::bIsRootTrackInstance");
static_assert(offsetof(UMovieSceneTrackInstance, PrivateLinker) == 56, "Offset mismatch for UMovieSceneTrackInstance::PrivateLinker");
static_assert(offsetof(UMovieSceneTrackInstance, Inputs) == 64, "Offset mismatch for UMovieSceneTrackInstance::Inputs");

// /Script/MovieScene.MovieSceneTrackInstanceInstantiator
// Kind: Class; super: MovieSceneEntityInstantiatorSystem
class UMovieSceneTrackInstanceInstantiator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneTrackInstanceInstantiator, Linker) == 40, "Offset mismatch for UMovieSceneTrackInstanceInstantiator::Linker");

// /Script/MovieScene.MovieSceneTrackInstanceSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneTrackInstanceSystem
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* Instantiator; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneTrackInstanceSystem, Instantiator) == 64, "Offset mismatch for UMovieSceneTrackInstanceSystem::Instantiator");

// /Script/MovieScene.MovieSceneTrackRowDecoration
// Kind: Class; super: Object
class UMovieSceneTrackRowDecoration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneTrackTemplateProducer
// Kind: Class; super: Interface
class UMovieSceneTrackTemplateProducer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.MovieSceneValueDecomposer
// Kind: Class; super: Interface
class UMovieSceneValueDecomposer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.NodeAndChannelMappings
// Kind: Class; super: Interface
class UNodeAndChannelMappings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.TestCascadingLifecycleTrack
// Kind: Class; super: TestSectionLifecycleTrack
class UTestCascadingLifecycleTrack
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    TArray<void*> SectionArray; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTestCascadingLifecycleTrack, SectionArray) == 256, "Offset mismatch for UTestCascadingLifecycleTrack::SectionArray");

// /Script/MovieScene.TestMovieSceneArrayPropertiesActor
// Kind: Class; super: Actor
class UTestMovieSceneArrayPropertiesActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t TestBool; // 0x0270 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TestEnum; // 0x0271 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0272
    std::int32_t TestInt32; // 0x0274 (Size: 0x4, Type: IntProperty)
    void* TestObject; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TestVector[0x18]; // 0x0280 (Size: 0x18, Type: StructProperty)
    TArray<void*> MultipleFloats; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SingleStruct[0x48]; // 0x02A8 (Size: 0x48, Type: StructProperty)
    TArray<void*> MultipleStructs; // 0x02F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SingleInstancedStruct[0x10]; // 0x0300 (Size: 0x10, Type: StructProperty)
    TArray<void*> MultipleInstancedStructs; // 0x0310 (Size: 0x10, Type: ArrayProperty)
    float TestSetterFloat; // 0x0320 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UTestMovieSceneArrayPropertiesActor, TestBool) == 624, "Offset mismatch for UTestMovieSceneArrayPropertiesActor::TestBool");
static_assert(offsetof(UTestMovieSceneArrayPropertiesActor, TestEnum) == 625, "Offset mismatch for UTestMovieSceneArrayPropertiesActor::TestEnum");
static_assert(offsetof(UTestMovieSceneArrayPropertiesActor, TestInt32) == 628, "Offset mismatch for UTestMovieSceneArrayPropertiesActor::TestInt32");
static_assert(offsetof(UTestMovieSceneArrayPropertiesActor, TestObject) == 632, "Offset mismatch for UTestMovieSceneArrayPropertiesActor::TestObject");
static_assert(offsetof(UTestMovieSceneArrayPropertiesActor, TestVector) == 640, "Offset mismatch for UTestMovieSceneArrayPropertiesActor::TestVector");
static_assert(offsetof(UTestMovieSceneArrayPropertiesActor, MultipleFloats) == 664, "Offset mismatch for UTestMovieSceneArrayPropertiesActor::MultipleFloats");
static_assert(offsetof(UTestMovieSceneArrayPropertiesActor, SingleStruct) == 680, "Offset mismatch for UTestMovieSceneArrayPropertiesActor::SingleStruct");
static_assert(offsetof(UTestMovieSceneArrayPropertiesActor, MultipleStructs) == 752, "Offset mismatch for UTestMovieSceneArrayPropertiesActor::MultipleStructs");
static_assert(offsetof(UTestMovieSceneArrayPropertiesActor, SingleInstancedStruct) == 768, "Offset mismatch for UTestMovieSceneArrayPropertiesActor::SingleInstancedStruct");
static_assert(offsetof(UTestMovieSceneArrayPropertiesActor, MultipleInstancedStructs) == 784, "Offset mismatch for UTestMovieSceneArrayPropertiesActor::MultipleInstancedStructs");
static_assert(offsetof(UTestMovieSceneArrayPropertiesActor, TestSetterFloat) == 800, "Offset mismatch for UTestMovieSceneArrayPropertiesActor::TestSetterFloat");

// /Script/MovieScene.TestMovieSceneEvalHookSection
// Kind: Class; super: MovieSceneHookSection
class UTestMovieSceneEvalHookSection
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    std::uint8_t bRequiresRangedHook; // 0x0150 (Size: 0x1, Type: BoolProperty)
    // 0x0150 BoolProperty bRequiresTriggerHooks (shared storage)
};

static_assert(offsetof(UTestMovieSceneEvalHookSection, bRequiresRangedHook) == 336, "Offset mismatch for UTestMovieSceneEvalHookSection::bRequiresRangedHook");

// /Script/MovieScene.TestMovieSceneEvalHookTrack
// Kind: Class; super: MovieSceneTrack
class UTestMovieSceneEvalHookTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> SectionArray; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTestMovieSceneEvalHookTrack, SectionArray) == 248, "Offset mismatch for UTestMovieSceneEvalHookTrack::SectionArray");

// /Script/MovieScene.TestMovieSceneLifetimeDecoration
// Kind: Class; super: Object
class UTestMovieSceneLifetimeDecoration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.TestMovieSceneObject
// Kind: Class; super: Object
class UTestMovieSceneObject
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MovieScene.TestMovieSceneSection
// Kind: Class; super: MovieSceneSection
class UTestMovieSceneSection
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t EvalOptions[0x8]; // 0x0088 (Size: 0x8, Type: StructProperty)
    std::uint8_t Easing[0x38]; // 0x0090 (Size: 0x38, Type: StructProperty)
    std::uint8_t SectionRange[0x10]; // 0x00C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t TimecodeSource[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ConditionContainer[0x8]; // 0x00F0 (Size: 0x8, Type: StructProperty)
    std::uint8_t PreRollFrames[0x4]; // 0x00F8 (Size: 0x4, Type: StructProperty)
    std::uint8_t PostRollFrames[0x4]; // 0x00FC (Size: 0x4, Type: StructProperty)
    std::int32_t RowIndex; // 0x0100 (Size: 0x4, Type: IntProperty)
    std::int32_t OverlapPriority; // 0x0104 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsActive; // 0x0108 (Size: 0x1, Type: BoolProperty)
    // 0x0108 BoolProperty bIsLocked (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0109
    float StartTime; // 0x010C (Size: 0x4, Type: FloatProperty)
    float EndTime; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float PreRollTime; // 0x0114 (Size: 0x4, Type: FloatProperty)
    float PostRollTime; // 0x0118 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsInfinite; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x011D
    std::uint8_t bSupportsInfiniteRange; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BlendType[0x1]; // 0x0121 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTestMovieSceneSection, EvalOptions) == 136, "Offset mismatch for UTestMovieSceneSection::EvalOptions");
static_assert(offsetof(UTestMovieSceneSection, Easing) == 144, "Offset mismatch for UTestMovieSceneSection::Easing");
static_assert(offsetof(UTestMovieSceneSection, SectionRange) == 200, "Offset mismatch for UTestMovieSceneSection::SectionRange");
static_assert(offsetof(UTestMovieSceneSection, TimecodeSource) == 216, "Offset mismatch for UTestMovieSceneSection::TimecodeSource");
static_assert(offsetof(UTestMovieSceneSection, ConditionContainer) == 240, "Offset mismatch for UTestMovieSceneSection::ConditionContainer");
static_assert(offsetof(UTestMovieSceneSection, PreRollFrames) == 248, "Offset mismatch for UTestMovieSceneSection::PreRollFrames");
static_assert(offsetof(UTestMovieSceneSection, PostRollFrames) == 252, "Offset mismatch for UTestMovieSceneSection::PostRollFrames");
static_assert(offsetof(UTestMovieSceneSection, RowIndex) == 256, "Offset mismatch for UTestMovieSceneSection::RowIndex");
static_assert(offsetof(UTestMovieSceneSection, OverlapPriority) == 260, "Offset mismatch for UTestMovieSceneSection::OverlapPriority");
static_assert(offsetof(UTestMovieSceneSection, bIsActive) == 264, "Offset mismatch for UTestMovieSceneSection::bIsActive");
static_assert(offsetof(UTestMovieSceneSection, StartTime) == 268, "Offset mismatch for UTestMovieSceneSection::StartTime");
static_assert(offsetof(UTestMovieSceneSection, EndTime) == 272, "Offset mismatch for UTestMovieSceneSection::EndTime");
static_assert(offsetof(UTestMovieSceneSection, PreRollTime) == 276, "Offset mismatch for UTestMovieSceneSection::PreRollTime");
static_assert(offsetof(UTestMovieSceneSection, PostRollTime) == 280, "Offset mismatch for UTestMovieSceneSection::PostRollTime");
static_assert(offsetof(UTestMovieSceneSection, bIsInfinite) == 284, "Offset mismatch for UTestMovieSceneSection::bIsInfinite");
static_assert(offsetof(UTestMovieSceneSection, bSupportsInfiniteRange) == 288, "Offset mismatch for UTestMovieSceneSection::bSupportsInfiniteRange");
static_assert(offsetof(UTestMovieSceneSection, BlendType) == 289, "Offset mismatch for UTestMovieSceneSection::BlendType");

// /Script/MovieScene.TestMovieSceneSequence
// Kind: Class; super: MovieSceneSequence
class UTestMovieSceneSequence
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* MovieScene; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTestMovieSceneSequence, MovieScene) == 104, "Offset mismatch for UTestMovieSceneSequence::MovieScene");

// /Script/MovieScene.TestMovieSceneSubSection
// Kind: Class; super: MovieSceneSubSection
class UTestMovieSceneSubSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t Parameters[0x30]; // 0x0148 (Size: 0x30, Type: StructProperty)
    float StartOffset; // 0x0178 (Size: 0x4, Type: FloatProperty)
    float timescale; // 0x017C (Size: 0x4, Type: FloatProperty)
    float PreRollTime; // 0x0180 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NetworkMask; // 0x0184 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0185
    std::uint8_t OriginOverrideMask[0x8]; // 0x0188 (Size: 0x8, Type: StructProperty)
    std::uint8_t Translation[0x288]; // 0x0190 (Size: 0x288, Type: StructProperty)
    std::uint8_t Rotation[0x288]; // 0x0418 (Size: 0x288, Type: StructProperty)
    void* SubSequence; // 0x06A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTestMovieSceneSubSection, Parameters) == 328, "Offset mismatch for UTestMovieSceneSubSection::Parameters");
static_assert(offsetof(UTestMovieSceneSubSection, StartOffset) == 376, "Offset mismatch for UTestMovieSceneSubSection::StartOffset");
static_assert(offsetof(UTestMovieSceneSubSection, timescale) == 380, "Offset mismatch for UTestMovieSceneSubSection::timescale");
static_assert(offsetof(UTestMovieSceneSubSection, PreRollTime) == 384, "Offset mismatch for UTestMovieSceneSubSection::PreRollTime");
static_assert(offsetof(UTestMovieSceneSubSection, NetworkMask) == 388, "Offset mismatch for UTestMovieSceneSubSection::NetworkMask");
static_assert(offsetof(UTestMovieSceneSubSection, OriginOverrideMask) == 392, "Offset mismatch for UTestMovieSceneSubSection::OriginOverrideMask");
static_assert(offsetof(UTestMovieSceneSubSection, Translation) == 400, "Offset mismatch for UTestMovieSceneSubSection::Translation");
static_assert(offsetof(UTestMovieSceneSubSection, Rotation) == 1048, "Offset mismatch for UTestMovieSceneSubSection::Rotation");
static_assert(offsetof(UTestMovieSceneSubSection, SubSequence) == 1696, "Offset mismatch for UTestMovieSceneSubSection::SubSequence");

// /Script/MovieScene.TestMovieSceneSubTrack
// Kind: Class; super: MovieSceneSubTrack
class UTestMovieSceneSubTrack
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    TArray<void*> SectionArray; // 0x0108 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTestMovieSceneSubTrack, SectionArray) == 264, "Offset mismatch for UTestMovieSceneSubTrack::SectionArray");

// /Script/MovieScene.TestMovieSceneTrack
// Kind: Class; super: MovieSceneTrack
class UTestMovieSceneTrack
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    std::uint8_t bHighPassFilter; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0101
    TArray<void*> SectionArray; // 0x0108 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTestMovieSceneTrack, bHighPassFilter) == 256, "Offset mismatch for UTestMovieSceneTrack::bHighPassFilter");
static_assert(offsetof(UTestMovieSceneTrack, SectionArray) == 264, "Offset mismatch for UTestMovieSceneTrack::SectionArray");

// /Script/MovieScene.TestSectionLifecycleTrack
// Kind: Class; super: MovieSceneTrack
class UTestSectionLifecycleTrack
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    TArray<void*> SectionArray; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTestSectionLifecycleTrack, SectionArray) == 256, "Offset mismatch for UTestSectionLifecycleTrack::SectionArray");

// /Script/MovieScene.TestWrapperClearLifecycleTrack
// Kind: Class; super: TestSectionLifecycleTrack
class UTestWrapperClearLifecycleTrack
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    TArray<void*> SectionArray; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTestWrapperClearLifecycleTrack, SectionArray) == 256, "Offset mismatch for UTestWrapperClearLifecycleTrack::SectionArray");
