/**
 * decamp dumper generated SDK
 * Package: /Script/Chooser
 */
#pragma once
#include "Basic.h"

// /Script/Chooser.AnimCurveOverride
// Kind: ScriptStruct; super: none
struct FAnimCurveOverride
{
public:
    std::uint8_t CurveName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float CurveValue; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimCurveOverride, CurveName) == 0, "Offset mismatch for FAnimCurveOverride::CurveName");
static_assert(offsetof(FAnimCurveOverride, CurveValue) == 4, "Offset mismatch for FAnimCurveOverride::CurveValue");

// /Script/Chooser.AnimCurveOverrideList
// Kind: ScriptStruct; super: none
struct FAnimCurveOverrideList
{
public:
    TArray<void*> Values; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint32_t Hash; // 0x0010 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FAnimCurveOverrideList, Values) == 0, "Offset mismatch for FAnimCurveOverrideList::Values");
static_assert(offsetof(FAnimCurveOverrideList, Hash) == 16, "Offset mismatch for FAnimCurveOverrideList::Hash");

// /Script/Chooser.AnimNode_ChooserPlayer
// Kind: ScriptStruct; super: AnimNode_BlendStack_Standalone
struct FAnimNode_ChooserPlayer
{
public:
    std::uint8_t Pad_0000[0xF0]; // 0x0000
    std::uint8_t EvaluationFrequency; // 0x00F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    std::uint8_t Chooser[0x10]; // 0x00F8 (Size: 0x10, Type: StructProperty)
    void* MirrorDataTable; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    float BlendSpaceX; // 0x0110 (Size: 0x4, Type: FloatProperty)
    float BlendSpaceY; // 0x0114 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0118
    std::uint8_t DefaultSettings[0x70]; // 0x0120 (Size: 0x70, Type: StructProperty)
    TArray<void*> ChooserContextDefinition; // 0x0190 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bStartFromMatchingPose; // 0x01A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAnimNode_ChooserPlayer, EvaluationFrequency) == 240, "Offset mismatch for FAnimNode_ChooserPlayer::EvaluationFrequency");
static_assert(offsetof(FAnimNode_ChooserPlayer, Chooser) == 248, "Offset mismatch for FAnimNode_ChooserPlayer::Chooser");
static_assert(offsetof(FAnimNode_ChooserPlayer, MirrorDataTable) == 264, "Offset mismatch for FAnimNode_ChooserPlayer::MirrorDataTable");
static_assert(offsetof(FAnimNode_ChooserPlayer, BlendSpaceX) == 272, "Offset mismatch for FAnimNode_ChooserPlayer::BlendSpaceX");
static_assert(offsetof(FAnimNode_ChooserPlayer, BlendSpaceY) == 276, "Offset mismatch for FAnimNode_ChooserPlayer::BlendSpaceY");
static_assert(offsetof(FAnimNode_ChooserPlayer, DefaultSettings) == 288, "Offset mismatch for FAnimNode_ChooserPlayer::DefaultSettings");
static_assert(offsetof(FAnimNode_ChooserPlayer, ChooserContextDefinition) == 400, "Offset mismatch for FAnimNode_ChooserPlayer::ChooserContextDefinition");
static_assert(offsetof(FAnimNode_ChooserPlayer, bStartFromMatchingPose) == 416, "Offset mismatch for FAnimNode_ChooserPlayer::bStartFromMatchingPose");

// /Script/Chooser.AssetChooser
// Kind: ScriptStruct; super: ObjectChooserBase
struct FAssetChooser
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Asset; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAssetChooser, Asset) == 8, "Offset mismatch for FAssetChooser::Asset");

// /Script/Chooser.BoolCVarProperty
// Kind: ScriptStruct; super: ChooserParameterBoolBase
struct FBoolCVarProperty
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FString VariableName; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FBoolCVarProperty, VariableName) == 8, "Offset mismatch for FBoolCVarProperty::VariableName");

// /Script/Chooser.BoolColumn
// Kind: ScriptStruct; super: ChooserColumnBase
struct FBoolColumn
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InputValue[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    TArray<void*> RowValuesWithAny; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FBoolColumn, InputValue) == 8, "Offset mismatch for FBoolColumn::InputValue");
static_assert(offsetof(FBoolColumn, RowValuesWithAny) == 24, "Offset mismatch for FBoolColumn::RowValuesWithAny");

// /Script/Chooser.BoolContextProperty
// Kind: ScriptStruct; super: ChooserParameterBoolBase
struct FBoolContextProperty
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> PropertyBindingChain; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Binding[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBoolContextProperty, PropertyBindingChain) == 8, "Offset mismatch for FBoolContextProperty::PropertyBindingChain");
static_assert(offsetof(FBoolContextProperty, Binding) == 24, "Offset mismatch for FBoolContextProperty::Binding");

// /Script/Chooser.ChooserColumnBase
// Kind: ScriptStruct; super: none
struct FChooserColumnBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ChooserEnumPropertyBinding
// Kind: ScriptStruct; super: ChooserPropertyBinding
struct FChooserEnumPropertyBinding
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> PropertyBindingChain; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ContextIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t IsBoundToRoot; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FChooserEnumPropertyBinding, PropertyBindingChain) == 8, "Offset mismatch for FChooserEnumPropertyBinding::PropertyBindingChain");
static_assert(offsetof(FChooserEnumPropertyBinding, ContextIndex) == 24, "Offset mismatch for FChooserEnumPropertyBinding::ContextIndex");
static_assert(offsetof(FChooserEnumPropertyBinding, IsBoundToRoot) == 28, "Offset mismatch for FChooserEnumPropertyBinding::IsBoundToRoot");

// /Script/Chooser.ChooserEnumRowData
// Kind: ScriptStruct; super: none
struct FChooserEnumRowData
{
public:
    std::uint8_t Comparison; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t Value; // 0x0004 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FChooserEnumRowData, Comparison) == 0, "Offset mismatch for FChooserEnumRowData::Comparison");
static_assert(offsetof(FChooserEnumRowData, Value) == 4, "Offset mismatch for FChooserEnumRowData::Value");

// /Script/Chooser.ChooserEvaluationContext
// Kind: ScriptStruct; super: none
struct FChooserEvaluationContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ChooserEvaluationInputObject
// Kind: ScriptStruct; super: none
struct FChooserEvaluationInputObject
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ChooserEvaluationOutputArray
// Kind: ScriptStruct; super: none
struct FChooserEvaluationOutputArray
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ChooserFloatDistanceRowData
// Kind: ScriptStruct; super: none
struct FChooserFloatDistanceRowData
{
public:
    float Value; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FChooserFloatDistanceRowData, Value) == 0, "Offset mismatch for FChooserFloatDistanceRowData::Value");

// /Script/Chooser.ChooserFloatRangeRowData
// Kind: ScriptStruct; super: none
struct FChooserFloatRangeRowData
{
public:
    float min; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float max; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bNoMin; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNoMax; // 0x0009 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FChooserFloatRangeRowData, min) == 0, "Offset mismatch for FChooserFloatRangeRowData::min");
static_assert(offsetof(FChooserFloatRangeRowData, max) == 4, "Offset mismatch for FChooserFloatRangeRowData::max");
static_assert(offsetof(FChooserFloatRangeRowData, bNoMin) == 8, "Offset mismatch for FChooserFloatRangeRowData::bNoMin");
static_assert(offsetof(FChooserFloatRangeRowData, bNoMax) == 9, "Offset mismatch for FChooserFloatRangeRowData::bNoMax");

// /Script/Chooser.ChooserMultiEnumRowData
// Kind: ScriptStruct; super: none
struct FChooserMultiEnumRowData
{
public:
    std::uint32_t Value; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FChooserMultiEnumRowData, Value) == 0, "Offset mismatch for FChooserMultiEnumRowData::Value");

// /Script/Chooser.ChooserNameColumn
// Kind: ScriptStruct; super: ChooserColumnBase
struct FChooserNameColumn
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InputValue[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    TArray<void*> RowValues; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FChooserNameColumn, InputValue) == 8, "Offset mismatch for FChooserNameColumn::InputValue");
static_assert(offsetof(FChooserNameColumn, RowValues) == 24, "Offset mismatch for FChooserNameColumn::RowValues");

// /Script/Chooser.ChooserNameRowData
// Kind: ScriptStruct; super: none
struct FChooserNameRowData
{
public:
    std::uint8_t Comparison; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    FName Value; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FChooserNameRowData, Comparison) == 0, "Offset mismatch for FChooserNameRowData::Comparison");
static_assert(offsetof(FChooserNameRowData, Value) == 4, "Offset mismatch for FChooserNameRowData::Value");

// /Script/Chooser.ChooserObjectClassRowData
// Kind: ScriptStruct; super: none
struct FChooserObjectClassRowData
{
public:
    std::uint8_t Comparison; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* Value; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FChooserObjectClassRowData, Comparison) == 0, "Offset mismatch for FChooserObjectClassRowData::Comparison");
static_assert(offsetof(FChooserObjectClassRowData, Value) == 8, "Offset mismatch for FChooserObjectClassRowData::Value");

// /Script/Chooser.ChooserObjectPropertyBinding
// Kind: ScriptStruct; super: ChooserPropertyBinding
struct FChooserObjectPropertyBinding
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> PropertyBindingChain; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ContextIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t IsBoundToRoot; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FChooserObjectPropertyBinding, PropertyBindingChain) == 8, "Offset mismatch for FChooserObjectPropertyBinding::PropertyBindingChain");
static_assert(offsetof(FChooserObjectPropertyBinding, ContextIndex) == 24, "Offset mismatch for FChooserObjectPropertyBinding::ContextIndex");
static_assert(offsetof(FChooserObjectPropertyBinding, IsBoundToRoot) == 28, "Offset mismatch for FChooserObjectPropertyBinding::IsBoundToRoot");

// /Script/Chooser.ChooserObjectRowData
// Kind: ScriptStruct; super: none
struct FChooserObjectRowData
{
public:
    std::uint8_t Comparison; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TSoftObjectPtr<void> Value; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FChooserObjectRowData, Comparison) == 0, "Offset mismatch for FChooserObjectRowData::Comparison");
static_assert(offsetof(FChooserObjectRowData, Value) == 8, "Offset mismatch for FChooserObjectRowData::Value");

// /Script/Chooser.ChooserOutputEnumRowData
// Kind: ScriptStruct; super: none
struct FChooserOutputEnumRowData
{
public:
    std::uint8_t Value; // 0x0000 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FChooserOutputEnumRowData, Value) == 0, "Offset mismatch for FChooserOutputEnumRowData::Value");

// /Script/Chooser.ChooserOutputNameColumn
// Kind: ScriptStruct; super: ChooserColumnBase
struct FChooserOutputNameColumn
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InputValue[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    TArray<void*> RowValues; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    FName FallbackValue; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FChooserOutputNameColumn, InputValue) == 8, "Offset mismatch for FChooserOutputNameColumn::InputValue");
static_assert(offsetof(FChooserOutputNameColumn, RowValues) == 24, "Offset mismatch for FChooserOutputNameColumn::RowValues");
static_assert(offsetof(FChooserOutputNameColumn, FallbackValue) == 40, "Offset mismatch for FChooserOutputNameColumn::FallbackValue");

// /Script/Chooser.ChooserOutputObjectRowData
// Kind: ScriptStruct; super: none
struct FChooserOutputObjectRowData
{
public:
    std::uint8_t Value[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChooserOutputObjectRowData, Value) == 0, "Offset mismatch for FChooserOutputObjectRowData::Value");

// /Script/Chooser.ChooserParameterBase
// Kind: ScriptStruct; super: none
struct FChooserParameterBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ChooserParameterBoolBase
// Kind: ScriptStruct; super: ChooserParameterBase
struct FChooserParameterBoolBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ChooserParameterEnumBase
// Kind: ScriptStruct; super: ChooserParameterBase
struct FChooserParameterEnumBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ChooserParameterFloatBase
// Kind: ScriptStruct; super: ChooserParameterBase
struct FChooserParameterFloatBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ChooserParameterGameplayTagBase
// Kind: ScriptStruct; super: ChooserParameterBase
struct FChooserParameterGameplayTagBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ChooserParameterGameplayTagQueryBase
// Kind: ScriptStruct; super: ChooserParameterBase
struct FChooserParameterGameplayTagQueryBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ChooserParameterNameBase
// Kind: ScriptStruct; super: ChooserParameterBase
struct FChooserParameterNameBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ChooserParameterObjectBase
// Kind: ScriptStruct; super: ChooserParameterBase
struct FChooserParameterObjectBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ChooserParameterRandomizeBase
// Kind: ScriptStruct; super: ChooserParameterBase
struct FChooserParameterRandomizeBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ChooserParameterStructBase
// Kind: ScriptStruct; super: ChooserParameterBase
struct FChooserParameterStructBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ChooserPlayerSettings
// Kind: ScriptStruct; super: none
struct FChooserPlayerSettings
{
public:
    std::uint8_t bMirror; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float StartTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bForceLooping; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    float PlaybackRate; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t CurveOverrides[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    float BlendTime; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x002C
    void* BlendProfile; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BlendOption; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseInertialBlend; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceBlendTo; // 0x003A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x003B
    float MinDeltaTimeToForceBlendTo; // 0x003C (Size: 0x4, Type: FloatProperty)
    void* PlayingAsset; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    float PlayingAssetAccumulatedTime; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsPlayingAssetMirrored; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x004D
    std::uint8_t PlayingAssetBlendParameters[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FChooserPlayerSettings, bMirror) == 0, "Offset mismatch for FChooserPlayerSettings::bMirror");
static_assert(offsetof(FChooserPlayerSettings, StartTime) == 4, "Offset mismatch for FChooserPlayerSettings::StartTime");
static_assert(offsetof(FChooserPlayerSettings, bForceLooping) == 8, "Offset mismatch for FChooserPlayerSettings::bForceLooping");
static_assert(offsetof(FChooserPlayerSettings, PlaybackRate) == 12, "Offset mismatch for FChooserPlayerSettings::PlaybackRate");
static_assert(offsetof(FChooserPlayerSettings, CurveOverrides) == 16, "Offset mismatch for FChooserPlayerSettings::CurveOverrides");
static_assert(offsetof(FChooserPlayerSettings, BlendTime) == 40, "Offset mismatch for FChooserPlayerSettings::BlendTime");
static_assert(offsetof(FChooserPlayerSettings, BlendProfile) == 48, "Offset mismatch for FChooserPlayerSettings::BlendProfile");
static_assert(offsetof(FChooserPlayerSettings, BlendOption) == 56, "Offset mismatch for FChooserPlayerSettings::BlendOption");
static_assert(offsetof(FChooserPlayerSettings, bUseInertialBlend) == 57, "Offset mismatch for FChooserPlayerSettings::bUseInertialBlend");
static_assert(offsetof(FChooserPlayerSettings, bForceBlendTo) == 58, "Offset mismatch for FChooserPlayerSettings::bForceBlendTo");
static_assert(offsetof(FChooserPlayerSettings, MinDeltaTimeToForceBlendTo) == 60, "Offset mismatch for FChooserPlayerSettings::MinDeltaTimeToForceBlendTo");
static_assert(offsetof(FChooserPlayerSettings, PlayingAsset) == 64, "Offset mismatch for FChooserPlayerSettings::PlayingAsset");
static_assert(offsetof(FChooserPlayerSettings, PlayingAssetAccumulatedTime) == 72, "Offset mismatch for FChooserPlayerSettings::PlayingAssetAccumulatedTime");
static_assert(offsetof(FChooserPlayerSettings, bIsPlayingAssetMirrored) == 76, "Offset mismatch for FChooserPlayerSettings::bIsPlayingAssetMirrored");
static_assert(offsetof(FChooserPlayerSettings, PlayingAssetBlendParameters) == 80, "Offset mismatch for FChooserPlayerSettings::PlayingAssetBlendParameters");

// /Script/Chooser.ChooserPropertyBinding
// Kind: ScriptStruct; super: none
struct FChooserPropertyBinding
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> PropertyBindingChain; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ContextIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t IsBoundToRoot; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FChooserPropertyBinding, PropertyBindingChain) == 8, "Offset mismatch for FChooserPropertyBinding::PropertyBindingChain");
static_assert(offsetof(FChooserPropertyBinding, ContextIndex) == 24, "Offset mismatch for FChooserPropertyBinding::ContextIndex");
static_assert(offsetof(FChooserPropertyBinding, IsBoundToRoot) == 28, "Offset mismatch for FChooserPropertyBinding::IsBoundToRoot");

// /Script/Chooser.ChooserRandomizationContext
// Kind: ScriptStruct; super: none
struct FChooserRandomizationContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ChooserStructPropertyBinding
// Kind: ScriptStruct; super: ChooserPropertyBinding
struct FChooserStructPropertyBinding
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> PropertyBindingChain; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::int32_t ContextIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t IsBoundToRoot; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FChooserStructPropertyBinding, PropertyBindingChain) == 8, "Offset mismatch for FChooserStructPropertyBinding::PropertyBindingChain");
static_assert(offsetof(FChooserStructPropertyBinding, ContextIndex) == 24, "Offset mismatch for FChooserStructPropertyBinding::ContextIndex");
static_assert(offsetof(FChooserStructPropertyBinding, IsBoundToRoot) == 28, "Offset mismatch for FChooserStructPropertyBinding::IsBoundToRoot");

// /Script/Chooser.ClassChooser
// Kind: ScriptStruct; super: ObjectChooserBase
struct FClassChooser
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Class; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FClassChooser, Class) == 8, "Offset mismatch for FClassChooser::Class");

// /Script/Chooser.ContextObjectTypeBase
// Kind: ScriptStruct; super: none
struct FContextObjectTypeBase
{
public:
    std::uint8_t Direction; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FContextObjectTypeBase, Direction) == 0, "Offset mismatch for FContextObjectTypeBase::Direction");

// /Script/Chooser.ContextObjectTypeClass
// Kind: ScriptStruct; super: ContextObjectTypeBase
struct FContextObjectTypeClass
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Class; // 0x0008 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(FContextObjectTypeClass, Class) == 8, "Offset mismatch for FContextObjectTypeClass::Class");

// /Script/Chooser.ContextObjectTypeStruct
// Kind: ScriptStruct; super: ContextObjectTypeBase
struct FContextObjectTypeStruct
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Struct; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FContextObjectTypeStruct, Struct) == 8, "Offset mismatch for FContextObjectTypeStruct::Struct");

// /Script/Chooser.EnumCVarProperty
// Kind: ScriptStruct; super: ChooserParameterEnumBase
struct FEnumCVarProperty
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FString VariableName; // 0x0008 (Size: 0x10, Type: StrProperty)
    void* Enum; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEnumCVarProperty, VariableName) == 8, "Offset mismatch for FEnumCVarProperty::VariableName");
static_assert(offsetof(FEnumCVarProperty, Enum) == 24, "Offset mismatch for FEnumCVarProperty::Enum");

// /Script/Chooser.EnumColumn
// Kind: ScriptStruct; super: EnumColumnBase
struct FEnumColumn
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InputValue[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    TArray<void*> RowValues; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FEnumColumn, InputValue) == 8, "Offset mismatch for FEnumColumn::InputValue");
static_assert(offsetof(FEnumColumn, RowValues) == 24, "Offset mismatch for FEnumColumn::RowValues");

// /Script/Chooser.EnumColumnBase
// Kind: ScriptStruct; super: ChooserColumnBase
struct FEnumColumnBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.EnumContextProperty
// Kind: ScriptStruct; super: ChooserParameterEnumBase
struct FEnumContextProperty
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> PropertyBindingChain; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Binding[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FEnumContextProperty, PropertyBindingChain) == 8, "Offset mismatch for FEnumContextProperty::PropertyBindingChain");
static_assert(offsetof(FEnumContextProperty, Binding) == 24, "Offset mismatch for FEnumContextProperty::Binding");

// /Script/Chooser.EvaluateChooser
// Kind: ScriptStruct; super: ObjectChooserBase
struct FEvaluateChooser
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Chooser; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEvaluateChooser, Chooser) == 8, "Offset mismatch for FEvaluateChooser::Chooser");

// /Script/Chooser.FloatCVarProperty
// Kind: ScriptStruct; super: ChooserParameterFloatBase
struct FFloatCVarProperty
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FString VariableName; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FFloatCVarProperty, VariableName) == 8, "Offset mismatch for FFloatCVarProperty::VariableName");

// /Script/Chooser.FloatContextProperty
// Kind: ScriptStruct; super: ChooserParameterFloatBase
struct FFloatContextProperty
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> PropertyBindingChain; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Binding[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFloatContextProperty, PropertyBindingChain) == 8, "Offset mismatch for FFloatContextProperty::PropertyBindingChain");
static_assert(offsetof(FFloatContextProperty, Binding) == 24, "Offset mismatch for FFloatContextProperty::Binding");

// /Script/Chooser.FloatDistanceColumn
// Kind: ScriptStruct; super: ChooserColumnBase
struct FFloatDistanceColumn
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InputValue[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    double MaxDistance; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    float CostMultiplier; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFilterOverMaxDistance; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWrapInput; // 0x0025 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0026
    double MinValue; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    double MaxValue; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> RowValues; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFloatDistanceColumn, InputValue) == 8, "Offset mismatch for FFloatDistanceColumn::InputValue");
static_assert(offsetof(FFloatDistanceColumn, MaxDistance) == 24, "Offset mismatch for FFloatDistanceColumn::MaxDistance");
static_assert(offsetof(FFloatDistanceColumn, CostMultiplier) == 32, "Offset mismatch for FFloatDistanceColumn::CostMultiplier");
static_assert(offsetof(FFloatDistanceColumn, bFilterOverMaxDistance) == 36, "Offset mismatch for FFloatDistanceColumn::bFilterOverMaxDistance");
static_assert(offsetof(FFloatDistanceColumn, bWrapInput) == 37, "Offset mismatch for FFloatDistanceColumn::bWrapInput");
static_assert(offsetof(FFloatDistanceColumn, MinValue) == 40, "Offset mismatch for FFloatDistanceColumn::MinValue");
static_assert(offsetof(FFloatDistanceColumn, MaxValue) == 48, "Offset mismatch for FFloatDistanceColumn::MaxValue");
static_assert(offsetof(FFloatDistanceColumn, RowValues) == 56, "Offset mismatch for FFloatDistanceColumn::RowValues");

// /Script/Chooser.FloatRangeColumn
// Kind: ScriptStruct; super: ChooserColumnBase
struct FFloatRangeColumn
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InputValue[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t bWrapInput; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    double MinValue; // 0x0020 (Size: 0x8, Type: DoubleProperty)
    double MaxValue; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> RowValues; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFloatRangeColumn, InputValue) == 8, "Offset mismatch for FFloatRangeColumn::InputValue");
static_assert(offsetof(FFloatRangeColumn, bWrapInput) == 24, "Offset mismatch for FFloatRangeColumn::bWrapInput");
static_assert(offsetof(FFloatRangeColumn, MinValue) == 32, "Offset mismatch for FFloatRangeColumn::MinValue");
static_assert(offsetof(FFloatRangeColumn, MaxValue) == 40, "Offset mismatch for FFloatRangeColumn::MaxValue");
static_assert(offsetof(FFloatRangeColumn, RowValues) == 48, "Offset mismatch for FFloatRangeColumn::RowValues");

// /Script/Chooser.GameplayTagColumn
// Kind: ScriptStruct; super: ChooserColumnBase
struct FGameplayTagColumn
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InputValue[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t TagMatchType; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TagMatchDirection; // 0x0019 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bMatchExact; // 0x001A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInvertMatchingLogic; // 0x001B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    TArray<void*> RowValues; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGameplayTagColumn, InputValue) == 8, "Offset mismatch for FGameplayTagColumn::InputValue");
static_assert(offsetof(FGameplayTagColumn, TagMatchType) == 24, "Offset mismatch for FGameplayTagColumn::TagMatchType");
static_assert(offsetof(FGameplayTagColumn, TagMatchDirection) == 25, "Offset mismatch for FGameplayTagColumn::TagMatchDirection");
static_assert(offsetof(FGameplayTagColumn, bMatchExact) == 26, "Offset mismatch for FGameplayTagColumn::bMatchExact");
static_assert(offsetof(FGameplayTagColumn, bInvertMatchingLogic) == 27, "Offset mismatch for FGameplayTagColumn::bInvertMatchingLogic");
static_assert(offsetof(FGameplayTagColumn, RowValues) == 32, "Offset mismatch for FGameplayTagColumn::RowValues");

// /Script/Chooser.GameplayTagContextProperty
// Kind: ScriptStruct; super: ChooserParameterGameplayTagBase
struct FGameplayTagContextProperty
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> PropertyBindingChain; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Binding[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayTagContextProperty, PropertyBindingChain) == 8, "Offset mismatch for FGameplayTagContextProperty::PropertyBindingChain");
static_assert(offsetof(FGameplayTagContextProperty, Binding) == 24, "Offset mismatch for FGameplayTagContextProperty::Binding");

// /Script/Chooser.GameplayTagQueryColumn
// Kind: ScriptStruct; super: ChooserColumnBase
struct FGameplayTagQueryColumn
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InputValue[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    TArray<void*> RowValues; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FGameplayTagQueryColumn, InputValue) == 8, "Offset mismatch for FGameplayTagQueryColumn::InputValue");
static_assert(offsetof(FGameplayTagQueryColumn, RowValues) == 24, "Offset mismatch for FGameplayTagQueryColumn::RowValues");

// /Script/Chooser.GameplayTagQueryContextProperty
// Kind: ScriptStruct; super: ChooserParameterGameplayTagQueryBase
struct FGameplayTagQueryContextProperty
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Binding[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGameplayTagQueryContextProperty, Binding) == 8, "Offset mismatch for FGameplayTagQueryContextProperty::Binding");

// /Script/Chooser.MultiEnumColumn
// Kind: ScriptStruct; super: ChooserColumnBase
struct FMultiEnumColumn
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InputValue[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    TArray<void*> RowValues; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMultiEnumColumn, InputValue) == 8, "Offset mismatch for FMultiEnumColumn::InputValue");
static_assert(offsetof(FMultiEnumColumn, RowValues) == 24, "Offset mismatch for FMultiEnumColumn::RowValues");

// /Script/Chooser.NameContextProperty
// Kind: ScriptStruct; super: ChooserParameterNameBase
struct FNameContextProperty
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Binding[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNameContextProperty, Binding) == 8, "Offset mismatch for FNameContextProperty::Binding");

// /Script/Chooser.NestedChooser
// Kind: ScriptStruct; super: ObjectChooserBase
struct FNestedChooser
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Chooser; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FNestedChooser, Chooser) == 8, "Offset mismatch for FNestedChooser::Chooser");

// /Script/Chooser.ObjectChooserBase
// Kind: ScriptStruct; super: none
struct FObjectChooserBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ObjectClassColumn
// Kind: ScriptStruct; super: ChooserColumnBase
struct FObjectClassColumn
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InputValue[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    TArray<void*> RowValues; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FObjectClassColumn, InputValue) == 8, "Offset mismatch for FObjectClassColumn::InputValue");
static_assert(offsetof(FObjectClassColumn, RowValues) == 24, "Offset mismatch for FObjectClassColumn::RowValues");

// /Script/Chooser.ObjectColumn
// Kind: ScriptStruct; super: ChooserColumnBase
struct FObjectColumn
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InputValue[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    TArray<void*> RowValues; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FObjectColumn, InputValue) == 8, "Offset mismatch for FObjectColumn::InputValue");
static_assert(offsetof(FObjectColumn, RowValues) == 24, "Offset mismatch for FObjectColumn::RowValues");

// /Script/Chooser.ObjectContextProperty
// Kind: ScriptStruct; super: ChooserParameterObjectBase
struct FObjectContextProperty
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Binding[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FObjectContextProperty, Binding) == 8, "Offset mismatch for FObjectContextProperty::Binding");

// /Script/Chooser.OutputBoolColumn
// Kind: ScriptStruct; super: ChooserColumnBase
struct FOutputBoolColumn
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InputValue[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t bFallbackValue; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    TArray<void*> RowValues; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FOutputBoolColumn, InputValue) == 8, "Offset mismatch for FOutputBoolColumn::InputValue");
static_assert(offsetof(FOutputBoolColumn, bFallbackValue) == 24, "Offset mismatch for FOutputBoolColumn::bFallbackValue");
static_assert(offsetof(FOutputBoolColumn, RowValues) == 32, "Offset mismatch for FOutputBoolColumn::RowValues");

// /Script/Chooser.OutputEnumColumn
// Kind: ScriptStruct; super: EnumColumnBase
struct FOutputEnumColumn
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InputValue[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t FallbackValue[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    TArray<void*> RowValues; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FOutputEnumColumn, InputValue) == 8, "Offset mismatch for FOutputEnumColumn::InputValue");
static_assert(offsetof(FOutputEnumColumn, FallbackValue) == 24, "Offset mismatch for FOutputEnumColumn::FallbackValue");
static_assert(offsetof(FOutputEnumColumn, RowValues) == 32, "Offset mismatch for FOutputEnumColumn::RowValues");

// /Script/Chooser.OutputFloatColumn
// Kind: ScriptStruct; super: ChooserColumnBase
struct FOutputFloatColumn
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InputValue[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    double FallbackValue; // 0x0018 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> RowValues; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FOutputFloatColumn, InputValue) == 8, "Offset mismatch for FOutputFloatColumn::InputValue");
static_assert(offsetof(FOutputFloatColumn, FallbackValue) == 24, "Offset mismatch for FOutputFloatColumn::FallbackValue");
static_assert(offsetof(FOutputFloatColumn, RowValues) == 32, "Offset mismatch for FOutputFloatColumn::RowValues");

// /Script/Chooser.OutputGameplayTagColumn
// Kind: ScriptStruct; super: ChooserColumnBase
struct FOutputGameplayTagColumn
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InputValue[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    TArray<void*> RowValues; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FallbackValue[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FOutputGameplayTagColumn, InputValue) == 8, "Offset mismatch for FOutputGameplayTagColumn::InputValue");
static_assert(offsetof(FOutputGameplayTagColumn, RowValues) == 24, "Offset mismatch for FOutputGameplayTagColumn::RowValues");
static_assert(offsetof(FOutputGameplayTagColumn, FallbackValue) == 40, "Offset mismatch for FOutputGameplayTagColumn::FallbackValue");

// /Script/Chooser.OutputGameplayTagQueryColumn
// Kind: ScriptStruct; super: ChooserColumnBase
struct FOutputGameplayTagQueryColumn
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InputValue[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    TArray<void*> RowValues; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FallbackValue[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FOutputGameplayTagQueryColumn, InputValue) == 8, "Offset mismatch for FOutputGameplayTagQueryColumn::InputValue");
static_assert(offsetof(FOutputGameplayTagQueryColumn, RowValues) == 24, "Offset mismatch for FOutputGameplayTagQueryColumn::RowValues");
static_assert(offsetof(FOutputGameplayTagQueryColumn, FallbackValue) == 40, "Offset mismatch for FOutputGameplayTagQueryColumn::FallbackValue");

// /Script/Chooser.OutputObjectColumn
// Kind: ScriptStruct; super: ChooserColumnBase
struct FOutputObjectColumn
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InputValue[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    TArray<void*> RowValues; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FallbackValue[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FOutputObjectColumn, InputValue) == 8, "Offset mismatch for FOutputObjectColumn::InputValue");
static_assert(offsetof(FOutputObjectColumn, RowValues) == 24, "Offset mismatch for FOutputObjectColumn::RowValues");
static_assert(offsetof(FOutputObjectColumn, FallbackValue) == 40, "Offset mismatch for FOutputObjectColumn::FallbackValue");

// /Script/Chooser.OutputStructColumn
// Kind: ScriptStruct; super: ChooserColumnBase
struct FOutputStructColumn
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InputValue[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t FallbackValue[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    TArray<void*> RowValues; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FOutputStructColumn, InputValue) == 8, "Offset mismatch for FOutputStructColumn::InputValue");
static_assert(offsetof(FOutputStructColumn, FallbackValue) == 24, "Offset mismatch for FOutputStructColumn::FallbackValue");
static_assert(offsetof(FOutputStructColumn, RowValues) == 40, "Offset mismatch for FOutputStructColumn::RowValues");

// /Script/Chooser.RandomizeColumn
// Kind: ScriptStruct; super: ChooserColumnBase
struct FRandomizeColumn
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t InputValue[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    TArray<void*> RepeatProbabilityMultipliers; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    float EqualCostThreshold; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    TArray<void*> RowValues; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRandomizeColumn, InputValue) == 8, "Offset mismatch for FRandomizeColumn::InputValue");
static_assert(offsetof(FRandomizeColumn, RepeatProbabilityMultipliers) == 24, "Offset mismatch for FRandomizeColumn::RepeatProbabilityMultipliers");
static_assert(offsetof(FRandomizeColumn, EqualCostThreshold) == 40, "Offset mismatch for FRandomizeColumn::EqualCostThreshold");
static_assert(offsetof(FRandomizeColumn, RowValues) == 48, "Offset mismatch for FRandomizeColumn::RowValues");

// /Script/Chooser.RandomizeContextProperty
// Kind: ScriptStruct; super: ChooserParameterRandomizeBase
struct FRandomizeContextProperty
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Binding[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRandomizeContextProperty, Binding) == 8, "Offset mismatch for FRandomizeContextProperty::Binding");

// /Script/Chooser.SoftAssetChooser
// Kind: ScriptStruct; super: ObjectChooserBase
struct FSoftAssetChooser
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TSoftObjectPtr<void> Asset; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FSoftAssetChooser, Asset) == 8, "Offset mismatch for FSoftAssetChooser::Asset");

// /Script/Chooser.StructContextProperty
// Kind: ScriptStruct; super: ChooserParameterStructBase
struct FStructContextProperty
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Binding[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FStructContextProperty, Binding) == 8, "Offset mismatch for FStructContextProperty::Binding");

// /Script/Chooser.ChooserColumn
// Kind: Class; super: Interface
class UChooserColumn
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ChooserColumnBool
// Kind: Class; super: Object
class UChooserColumnBool
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TScriptInterface<void> InputValue; // 0x0030 (Size: 0x10, Type: InterfaceProperty)
    TArray<void*> RowValues; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UChooserColumnBool, InputValue) == 48, "Offset mismatch for UChooserColumnBool::InputValue");
static_assert(offsetof(UChooserColumnBool, RowValues) == 64, "Offset mismatch for UChooserColumnBool::RowValues");

// /Script/Chooser.ChooserColumnEnum
// Kind: Class; super: Object
class UChooserColumnEnum
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TScriptInterface<void> InputValue; // 0x0030 (Size: 0x10, Type: InterfaceProperty)
    TArray<void*> RowValues; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UChooserColumnEnum, InputValue) == 48, "Offset mismatch for UChooserColumnEnum::InputValue");
static_assert(offsetof(UChooserColumnEnum, RowValues) == 64, "Offset mismatch for UChooserColumnEnum::RowValues");

// /Script/Chooser.ChooserColumnFloatRange
// Kind: Class; super: Object
class UChooserColumnFloatRange
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TScriptInterface<void> InputValue; // 0x0030 (Size: 0x10, Type: InterfaceProperty)
    TArray<void*> RowValues; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UChooserColumnFloatRange, InputValue) == 48, "Offset mismatch for UChooserColumnFloatRange::InputValue");
static_assert(offsetof(UChooserColumnFloatRange, RowValues) == 64, "Offset mismatch for UChooserColumnFloatRange::RowValues");

// /Script/Chooser.ChooserColumnGameplayTag
// Kind: Class; super: Object
class UChooserColumnGameplayTag
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TScriptInterface<void> InputValue; // 0x0030 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t TagMatchType; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0041
    TArray<void*> RowValues; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UChooserColumnGameplayTag, InputValue) == 48, "Offset mismatch for UChooserColumnGameplayTag::InputValue");
static_assert(offsetof(UChooserColumnGameplayTag, TagMatchType) == 64, "Offset mismatch for UChooserColumnGameplayTag::TagMatchType");
static_assert(offsetof(UChooserColumnGameplayTag, RowValues) == 72, "Offset mismatch for UChooserColumnGameplayTag::RowValues");

// /Script/Chooser.ChooserColumnMenuContext
// Kind: Class; super: Object
class UChooserColumnMenuContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ChooserFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UChooserFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ChooserParameterBool
// Kind: Class; super: Interface
class UChooserParameterBool
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ChooserParameterBool_ContextProperty
// Kind: Class; super: Object
class UChooserParameterBool_ContextProperty
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> PropertyBindingChain; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UChooserParameterBool_ContextProperty, PropertyBindingChain) == 48, "Offset mismatch for UChooserParameterBool_ContextProperty::PropertyBindingChain");

// /Script/Chooser.ChooserParameterEnum
// Kind: Class; super: Interface
class UChooserParameterEnum
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ChooserParameterEnum_ContextProperty
// Kind: Class; super: Object
class UChooserParameterEnum_ContextProperty
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> PropertyBindingChain; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UChooserParameterEnum_ContextProperty, PropertyBindingChain) == 48, "Offset mismatch for UChooserParameterEnum_ContextProperty::PropertyBindingChain");

// /Script/Chooser.ChooserParameterFloat
// Kind: Class; super: Interface
class UChooserParameterFloat
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ChooserParameterFloat_ContextProperty
// Kind: Class; super: Object
class UChooserParameterFloat_ContextProperty
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> PropertyBindingChain; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UChooserParameterFloat_ContextProperty, PropertyBindingChain) == 48, "Offset mismatch for UChooserParameterFloat_ContextProperty::PropertyBindingChain");

// /Script/Chooser.ChooserParameterGameplayTag
// Kind: Class; super: Interface
class UChooserParameterGameplayTag
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ChooserParameterGameplayTag_ContextProperty
// Kind: Class; super: Object
class UChooserParameterGameplayTag_ContextProperty
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> PropertyBindingChain; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UChooserParameterGameplayTag_ContextProperty, PropertyBindingChain) == 48, "Offset mismatch for UChooserParameterGameplayTag_ContextProperty::PropertyBindingChain");

// /Script/Chooser.ChooserSignature
// Kind: Class; super: Object
class UChooserSignature
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t ResultType; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    void* OutputObjectType; // 0x0050 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ContextData; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UChooserSignature, ResultType) == 72, "Offset mismatch for UChooserSignature::ResultType");
static_assert(offsetof(UChooserSignature, OutputObjectType) == 80, "Offset mismatch for UChooserSignature::OutputObjectType");
static_assert(offsetof(UChooserSignature, ContextData) == 88, "Offset mismatch for UChooserSignature::ContextData");

// /Script/Chooser.ChooserTable
// Kind: Class; super: ChooserSignature
class UChooserTable
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* RootChooser; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t FallbackResult[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    TArray<void*> CookedResults; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ColumnsStructs; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UChooserTable, RootChooser) == 104, "Offset mismatch for UChooserTable::RootChooser");
static_assert(offsetof(UChooserTable, FallbackResult) == 112, "Offset mismatch for UChooserTable::FallbackResult");
static_assert(offsetof(UChooserTable, CookedResults) == 128, "Offset mismatch for UChooserTable::CookedResults");
static_assert(offsetof(UChooserTable, ColumnsStructs) == 144, "Offset mismatch for UChooserTable::ColumnsStructs");

// /Script/Chooser.FloatAutoPopulator
// Kind: Class; super: Object
class UFloatAutoPopulator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.HasContextClass
// Kind: Class; super: Interface
class UHasContextClass
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ObjectChooser
// Kind: Class; super: Interface
class UObjectChooser
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Chooser.ObjectChooser_Asset
// Kind: Class; super: Object
class UObjectChooser_Asset
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Asset; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UObjectChooser_Asset, Asset) == 48, "Offset mismatch for UObjectChooser_Asset::Asset");

// /Script/Chooser.ObjectChooser_EvaluateChooser
// Kind: Class; super: Object
class UObjectChooser_EvaluateChooser
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Chooser; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UObjectChooser_EvaluateChooser, Chooser) == 48, "Offset mismatch for UObjectChooser_EvaluateChooser::Chooser");
