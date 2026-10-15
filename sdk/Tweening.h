/**
 * decamp dumper generated SDK
 * Package: /Script/Tweening
 */
#pragma once
#include "Basic.h"

// /Script/Tweening.TweenDelayOptions
// Kind: ScriptStruct; super: none
struct FTweenDelayOptions
{
public:
    float DelayAtBeginning; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float DelayAtEnd; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t InitializationPoint; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FTweenDelayOptions, DelayAtBeginning) == 0, "Offset mismatch for FTweenDelayOptions::DelayAtBeginning");
static_assert(offsetof(FTweenDelayOptions, DelayAtEnd) == 4, "Offset mismatch for FTweenDelayOptions::DelayAtEnd");
static_assert(offsetof(FTweenDelayOptions, InitializationPoint) == 8, "Offset mismatch for FTweenDelayOptions::InitializationPoint");

// /Script/Tweening.TweenLoopOptions
// Kind: ScriptStruct; super: none
struct FTweenLoopOptions
{
public:
    std::uint8_t LoopType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t LoopCount; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FTweenLoopOptions, LoopType) == 0, "Offset mismatch for FTweenLoopOptions::LoopType");
static_assert(offsetof(FTweenLoopOptions, LoopCount) == 4, "Offset mismatch for FTweenLoopOptions::LoopCount");

// /Script/Tweening.TweenOptionalFloat
// Kind: ScriptStruct; super: none
struct FTweenOptionalFloat
{
public:
    float Value; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseSpecificValue; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTweenOptionalFloat, Value) == 0, "Offset mismatch for FTweenOptionalFloat::Value");
static_assert(offsetof(FTweenOptionalFloat, bUseSpecificValue) == 4, "Offset mismatch for FTweenOptionalFloat::bUseSpecificValue");

// /Script/Tweening.TweenOptionalLinearColor
// Kind: ScriptStruct; super: none
struct FTweenOptionalLinearColor
{
public:
    std::uint8_t Value[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t bUseSpecificValue; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTweenOptionalLinearColor, Value) == 0, "Offset mismatch for FTweenOptionalLinearColor::Value");
static_assert(offsetof(FTweenOptionalLinearColor, bUseSpecificValue) == 16, "Offset mismatch for FTweenOptionalLinearColor::bUseSpecificValue");

// /Script/Tweening.TweenOptionalRotator
// Kind: ScriptStruct; super: none
struct FTweenOptionalRotator
{
public:
    std::uint8_t Value[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseSpecificValue; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTweenOptionalRotator, Value) == 0, "Offset mismatch for FTweenOptionalRotator::Value");
static_assert(offsetof(FTweenOptionalRotator, bUseSpecificValue) == 24, "Offset mismatch for FTweenOptionalRotator::bUseSpecificValue");

// /Script/Tweening.TweenOptionalVector
// Kind: ScriptStruct; super: none
struct FTweenOptionalVector
{
public:
    std::uint8_t Value[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseSpecificValue; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTweenOptionalVector, Value) == 0, "Offset mismatch for FTweenOptionalVector::Value");
static_assert(offsetof(FTweenOptionalVector, bUseSpecificValue) == 24, "Offset mismatch for FTweenOptionalVector::bUseSpecificValue");

// /Script/Tweening.TweenOptionalVector2D
// Kind: ScriptStruct; super: none
struct FTweenOptionalVector2D
{
public:
    std::uint8_t Value[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t bUseSpecificValue; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTweenOptionalVector2D, Value) == 0, "Offset mismatch for FTweenOptionalVector2D::Value");
static_assert(offsetof(FTweenOptionalVector2D, bUseSpecificValue) == 16, "Offset mismatch for FTweenOptionalVector2D::bUseSpecificValue");

// /Script/Tweening.TweenOptionalVector4
// Kind: ScriptStruct; super: none
struct FTweenOptionalVector4
{
public:
    std::uint8_t Value[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t bUseSpecificValue; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FTweenOptionalVector4, Value) == 0, "Offset mismatch for FTweenOptionalVector4::Value");
static_assert(offsetof(FTweenOptionalVector4, bUseSpecificValue) == 32, "Offset mismatch for FTweenOptionalVector4::bUseSpecificValue");

// /Script/Tweening.TweenSequenceEntry
// Kind: ScriptStruct; super: none
struct FTweenSequenceEntry
{
public:
    void* EntrySequence; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FTweenSequenceEntry, EntrySequence) == 0, "Offset mismatch for FTweenSequenceEntry::EntrySequence");

// /Script/Tweening.ActorTweening
// Kind: Class; super: BlueprintFunctionLibrary
class UActorTweening
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Tweening.MaterialTweening
// Kind: Class; super: BlueprintFunctionLibrary
class UMaterialTweening
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Tweening.MeshMaterialTweening
// Kind: Class; super: BlueprintFunctionLibrary
class UMeshMaterialTweening
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Tweening.TweenManager
// Kind: Class; super: GameInstanceSubsystem
class UTweenManager
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TMap<void*, void*> TweenContexts; // 0x0058 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UTweenManager, TweenContexts) == 88, "Offset mismatch for UTweenManager::TweenContexts");

// /Script/Tweening.TweenMaterialParameterInfo
// Kind: Class; super: Object
class UTweenMaterialParameterInfo
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName ParameterName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UTweenMaterialParameterInfo, ParameterName) == 40, "Offset mismatch for UTweenMaterialParameterInfo::ParameterName");

// /Script/Tweening.TweenSequence
// Kind: Class; super: Object
class UTweenSequence
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SequenceEntries; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    void* TweenManager; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> TimerHandles; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UTweenSequence, SequenceEntries) == 40, "Offset mismatch for UTweenSequence::SequenceEntries");
static_assert(offsetof(UTweenSequence, TweenManager) == 56, "Offset mismatch for UTweenSequence::TweenManager");
static_assert(offsetof(UTweenSequence, TimerHandles) == 64, "Offset mismatch for UTweenSequence::TimerHandles");

// /Script/Tweening.TweenSplineInfo
// Kind: Class; super: Object
class UTweenSplineInfo
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> Spline; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Alignment; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIgnorePitch; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreYaw; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreRoll; // 0x0033 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UTweenSplineInfo, Spline) == 40, "Offset mismatch for UTweenSplineInfo::Spline");
static_assert(offsetof(UTweenSplineInfo, Alignment) == 48, "Offset mismatch for UTweenSplineInfo::Alignment");
static_assert(offsetof(UTweenSplineInfo, bIgnorePitch) == 49, "Offset mismatch for UTweenSplineInfo::bIgnorePitch");
static_assert(offsetof(UTweenSplineInfo, bIgnoreYaw) == 50, "Offset mismatch for UTweenSplineInfo::bIgnoreYaw");
static_assert(offsetof(UTweenSplineInfo, bIgnoreRoll) == 51, "Offset mismatch for UTweenSplineInfo::bIgnoreRoll");

// /Script/Tweening.WidgetTweening
// Kind: Class; super: BlueprintFunctionLibrary
class UWidgetTweening
{
public:
    std::uint8_t Opaque[1];
};
