/**
 * decamp dumper generated SDK
 * Package: /Script/Constraints
 */
#pragma once
#include "Basic.h"

// /Script/Constraints.ConstraintAndActiveChannel
// Kind: ScriptStruct; super: none
struct FConstraintAndActiveChannel
{
public:
    std::uint8_t ActiveChannel[0xC8]; // 0x0000 (Size: 0xC8, Type: StructProperty)
    void* ConstraintCopyToSpawn; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FConstraintAndActiveChannel, ActiveChannel) == 0, "Offset mismatch for FConstraintAndActiveChannel::ActiveChannel");
static_assert(offsetof(FConstraintAndActiveChannel, ConstraintCopyToSpawn) == 200, "Offset mismatch for FConstraintAndActiveChannel::ConstraintCopyToSpawn");

// /Script/Constraints.ConstraintTickFunction
// Kind: ScriptStruct; super: TickFunction
struct FConstraintTickFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TickGroup; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EndTickGroup; // 0x0009 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAllowTickOnDedicatedServer; // 0x000A (Size: 0x1, Type: BoolProperty)
    // 0x000A BoolProperty bCanEverTick (shared storage)
    // 0x000A BoolProperty bStartWithTickEnabled (shared storage)
    // 0x000A BoolProperty bTickEvenWhenPaused (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x000B
    float TickInterval; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FConstraintTickFunction, TickGroup) == 8, "Offset mismatch for FConstraintTickFunction::TickGroup");
static_assert(offsetof(FConstraintTickFunction, EndTickGroup) == 9, "Offset mismatch for FConstraintTickFunction::EndTickGroup");
static_assert(offsetof(FConstraintTickFunction, bAllowTickOnDedicatedServer) == 10, "Offset mismatch for FConstraintTickFunction::bAllowTickOnDedicatedServer");
static_assert(offsetof(FConstraintTickFunction, TickInterval) == 12, "Offset mismatch for FConstraintTickFunction::TickInterval");

// /Script/Constraints.ConstraintsInWorld
// Kind: ScriptStruct; super: none
struct FConstraintsInWorld
{
public:
    TWeakObjectPtr<void> World; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> Constraints; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FConstraintsInWorld, World) == 0, "Offset mismatch for FConstraintsInWorld::World");
static_assert(offsetof(FConstraintsInWorld, Constraints) == 8, "Offset mismatch for FConstraintsInWorld::Constraints");

// /Script/Constraints.MovieSceneConstraintChannel
// Kind: ScriptStruct; super: MovieSceneBoolChannel
struct FMovieSceneConstraintChannel
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

static_assert(offsetof(FMovieSceneConstraintChannel, PreInfinityExtrap) == 80, "Offset mismatch for FMovieSceneConstraintChannel::PreInfinityExtrap");
static_assert(offsetof(FMovieSceneConstraintChannel, PostInfinityExtrap) == 81, "Offset mismatch for FMovieSceneConstraintChannel::PostInfinityExtrap");
static_assert(offsetof(FMovieSceneConstraintChannel, Times) == 88, "Offset mismatch for FMovieSceneConstraintChannel::Times");
static_assert(offsetof(FMovieSceneConstraintChannel, DefaultValue) == 104, "Offset mismatch for FMovieSceneConstraintChannel::DefaultValue");
static_assert(offsetof(FMovieSceneConstraintChannel, bHasDefaultValue) == 105, "Offset mismatch for FMovieSceneConstraintChannel::bHasDefaultValue");
static_assert(offsetof(FMovieSceneConstraintChannel, Values) == 112, "Offset mismatch for FMovieSceneConstraintChannel::Values");
static_assert(offsetof(FMovieSceneConstraintChannel, KeyHandles) == 128, "Offset mismatch for FMovieSceneConstraintChannel::KeyHandles");

// /Script/Constraints.ConstraintSubsystem
// Kind: Class; super: EngineSubsystem
class UConstraintSubsystem
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t OnConstraintAddedToSystem_BP[0x1]; // 0x0030 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnConstraintRemovedFromSystem_BP[0x7]; // 0x0031 (Size: 0x7, Type: MulticastSparseDelegateProperty)
    TArray<void*> ConstraintsInWorld; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0048
    TMap<void*, void*> ConstraintsConfig; // 0x0050 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UConstraintSubsystem, OnConstraintAddedToSystem_BP) == 48, "Offset mismatch for UConstraintSubsystem::OnConstraintAddedToSystem_BP");
static_assert(offsetof(UConstraintSubsystem, OnConstraintRemovedFromSystem_BP) == 49, "Offset mismatch for UConstraintSubsystem::OnConstraintRemovedFromSystem_BP");
static_assert(offsetof(UConstraintSubsystem, ConstraintsInWorld) == 56, "Offset mismatch for UConstraintSubsystem::ConstraintsInWorld");
static_assert(offsetof(UConstraintSubsystem, ConstraintsConfig) == 80, "Offset mismatch for UConstraintSubsystem::ConstraintsConfig");

// /Script/Constraints.ConstraintsActor
// Kind: Class; super: Actor
class UConstraintsActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* ConstraintsManager; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UConstraintsActor, ConstraintsManager) == 624, "Offset mismatch for UConstraintsActor::ConstraintsManager");

// /Script/Constraints.ConstraintsManager
// Kind: Class; super: Object
class UConstraintsManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t OnConstraintAdded_BP[0x1]; // 0x0028 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnConstraintRemoved_BP[0xF]; // 0x0029 (Size: 0xF, Type: MulticastSparseDelegateProperty)
    TArray<void*> Constraints; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UConstraintsManager, OnConstraintAdded_BP) == 40, "Offset mismatch for UConstraintsManager::OnConstraintAdded_BP");
static_assert(offsetof(UConstraintsManager, OnConstraintRemoved_BP) == 41, "Offset mismatch for UConstraintsManager::OnConstraintRemoved_BP");
static_assert(offsetof(UConstraintsManager, Constraints) == 56, "Offset mismatch for UConstraintsManager::Constraints");

// /Script/Constraints.ConstraintsScriptingLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UConstraintsScriptingLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Constraints.TickableConstraint
// Kind: Class; super: Object
class UTickableConstraint
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Active; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bValid; // 0x0029 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UTickableConstraint, Active) == 40, "Offset mismatch for UTickableConstraint::Active");
static_assert(offsetof(UTickableConstraint, bValid) == 41, "Offset mismatch for UTickableConstraint::bValid");

// /Script/Constraints.TickableLookAtConstraint
// Kind: Class; super: TickableTransformConstraint
class UTickableLookAtConstraint
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t Axis[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTickableLookAtConstraint, Axis) == 192, "Offset mismatch for UTickableLookAtConstraint::Axis");

// /Script/Constraints.TickableParentConstraint
// Kind: Class; super: TickableTransformConstraint
class UTickableParentConstraint
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t OffsetTransform[0x60]; // 0x00D0 (Size: 0x60, Type: StructProperty)
    std::uint8_t bScaling; // 0x0130 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TransformFilter[0x1]; // 0x0131 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTickableParentConstraint, OffsetTransform) == 208, "Offset mismatch for UTickableParentConstraint::OffsetTransform");
static_assert(offsetof(UTickableParentConstraint, bScaling) == 304, "Offset mismatch for UTickableParentConstraint::bScaling");
static_assert(offsetof(UTickableParentConstraint, TransformFilter) == 305, "Offset mismatch for UTickableParentConstraint::TransformFilter");

// /Script/Constraints.TickableRotationConstraint
// Kind: Class; super: TickableTransformConstraint
class UTickableRotationConstraint
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t OffsetRotation[0x20]; // 0x00D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t AxisFilter[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTickableRotationConstraint, OffsetRotation) == 208, "Offset mismatch for UTickableRotationConstraint::OffsetRotation");
static_assert(offsetof(UTickableRotationConstraint, AxisFilter) == 240, "Offset mismatch for UTickableRotationConstraint::AxisFilter");

// /Script/Constraints.TickableScaleConstraint
// Kind: Class; super: TickableTransformConstraint
class UTickableScaleConstraint
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t OffsetScale[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t AxisFilter[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTickableScaleConstraint, OffsetScale) == 200, "Offset mismatch for UTickableScaleConstraint::OffsetScale");
static_assert(offsetof(UTickableScaleConstraint, AxisFilter) == 224, "Offset mismatch for UTickableScaleConstraint::AxisFilter");

// /Script/Constraints.TickableTransformConstraint
// Kind: Class; super: TickableConstraint
class UTickableTransformConstraint
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    void* ParentTRSHandle; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    void* ChildTRSHandle; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bMaintainOffset; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00B1
    float Weight; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDynamicOffset; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Type; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseCurrentOffset; // 0x00BA (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UTickableTransformConstraint, ParentTRSHandle) == 160, "Offset mismatch for UTickableTransformConstraint::ParentTRSHandle");
static_assert(offsetof(UTickableTransformConstraint, ChildTRSHandle) == 168, "Offset mismatch for UTickableTransformConstraint::ChildTRSHandle");
static_assert(offsetof(UTickableTransformConstraint, bMaintainOffset) == 176, "Offset mismatch for UTickableTransformConstraint::bMaintainOffset");
static_assert(offsetof(UTickableTransformConstraint, Weight) == 180, "Offset mismatch for UTickableTransformConstraint::Weight");
static_assert(offsetof(UTickableTransformConstraint, bDynamicOffset) == 184, "Offset mismatch for UTickableTransformConstraint::bDynamicOffset");
static_assert(offsetof(UTickableTransformConstraint, Type) == 185, "Offset mismatch for UTickableTransformConstraint::Type");
static_assert(offsetof(UTickableTransformConstraint, bUseCurrentOffset) == 186, "Offset mismatch for UTickableTransformConstraint::bUseCurrentOffset");

// /Script/Constraints.TickableTranslationConstraint
// Kind: Class; super: TickableTransformConstraint
class UTickableTranslationConstraint
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t OffsetTranslation[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t AxisFilter[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTickableTranslationConstraint, OffsetTranslation) == 200, "Offset mismatch for UTickableTranslationConstraint::OffsetTranslation");
static_assert(offsetof(UTickableTranslationConstraint, AxisFilter) == 224, "Offset mismatch for UTickableTranslationConstraint::AxisFilter");

// /Script/Constraints.TransformableComponentHandle
// Kind: Class; super: TransformableHandle
class UTransformableComponentHandle
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    TWeakObjectPtr<void> Component; // 0x0060 (Size: 0x8, Type: WeakObjectProperty)
    FName SocketName; // 0x0068 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UTransformableComponentHandle, Component) == 96, "Offset mismatch for UTransformableComponentHandle::Component");
static_assert(offsetof(UTransformableComponentHandle, SocketName) == 104, "Offset mismatch for UTransformableComponentHandle::SocketName");

// /Script/Constraints.TransformableHandle
// Kind: Class; super: Object
class UTransformableHandle
{
public:
    std::uint8_t Pad_0000[0x2C]; // 0x0000
    std::uint8_t ConstraintBindingID[0x1]; // 0x002C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTransformableHandle, ConstraintBindingID) == 44, "Offset mismatch for UTransformableHandle::ConstraintBindingID");
