/**
 * decamp dumper generated SDK
 * Package: /Script/RigMapper
 */
#pragma once
#include "Basic.h"

// /Script/RigMapper.AnimNode_RigMapper
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_RigMapper
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t SourcePose[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    TArray<void*> Definitions; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::int32_t LODThreshold; // 0x0030 (Size: 0x4, Type: IntProperty)
    float Alpha; // 0x0034 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAnimNode_RigMapper, SourcePose) == 16, "Offset mismatch for FAnimNode_RigMapper::SourcePose");
static_assert(offsetof(FAnimNode_RigMapper, Definitions) == 32, "Offset mismatch for FAnimNode_RigMapper::Definitions");
static_assert(offsetof(FAnimNode_RigMapper, LODThreshold) == 48, "Offset mismatch for FAnimNode_RigMapper::LODThreshold");
static_assert(offsetof(FAnimNode_RigMapper, Alpha) == 52, "Offset mismatch for FAnimNode_RigMapper::Alpha");

// /Script/RigMapper.RigMapperFeature
// Kind: ScriptStruct; super: none
struct FRigMapperFeature
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FString Name; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FRigMapperFeature, Name) == 8, "Offset mismatch for FRigMapperFeature::Name");

// /Script/RigMapper.RigMapperFeatureDefinitions
// Kind: ScriptStruct; super: none
struct FRigMapperFeatureDefinitions
{
public:
    TArray<void*> Multiply; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WeightedSums; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SDKs; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MathOps; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigMapperFeatureDefinitions, Multiply) == 0, "Offset mismatch for FRigMapperFeatureDefinitions::Multiply");
static_assert(offsetof(FRigMapperFeatureDefinitions, WeightedSums) == 16, "Offset mismatch for FRigMapperFeatureDefinitions::WeightedSums");
static_assert(offsetof(FRigMapperFeatureDefinitions, SDKs) == 32, "Offset mismatch for FRigMapperFeatureDefinitions::SDKs");
static_assert(offsetof(FRigMapperFeatureDefinitions, MathOps) == 48, "Offset mismatch for FRigMapperFeatureDefinitions::MathOps");

// /Script/RigMapper.RigMapperFeatureRange
// Kind: ScriptStruct; super: none
struct FRigMapperFeatureRange
{
public:
    std::uint8_t bHasLowerBound; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    double LowerBound; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bHasUpperBound; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    double UpperBound; // 0x0018 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FRigMapperFeatureRange, bHasLowerBound) == 0, "Offset mismatch for FRigMapperFeatureRange::bHasLowerBound");
static_assert(offsetof(FRigMapperFeatureRange, LowerBound) == 8, "Offset mismatch for FRigMapperFeatureRange::LowerBound");
static_assert(offsetof(FRigMapperFeatureRange, bHasUpperBound) == 16, "Offset mismatch for FRigMapperFeatureRange::bHasUpperBound");
static_assert(offsetof(FRigMapperFeatureRange, UpperBound) == 24, "Offset mismatch for FRigMapperFeatureRange::UpperBound");

// /Script/RigMapper.RigMapperMathFeature
// Kind: ScriptStruct; super: RigMapperFeature
struct FRigMapperMathFeature
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Operation; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0019
    TArray<void*> Inputs; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigMapperMathFeature, Operation) == 24, "Offset mismatch for FRigMapperMathFeature::Operation");
static_assert(offsetof(FRigMapperMathFeature, Inputs) == 32, "Offset mismatch for FRigMapperMathFeature::Inputs");

// /Script/RigMapper.RigMapperMathInput
// Kind: ScriptStruct; super: none
struct FRigMapperMathInput
{
public:
    FString NodeName; // 0x0000 (Size: 0x10, Type: StrProperty)
    double ConstantValue; // 0x0010 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FRigMapperMathInput, NodeName) == 0, "Offset mismatch for FRigMapperMathInput::NodeName");
static_assert(offsetof(FRigMapperMathInput, ConstantValue) == 16, "Offset mismatch for FRigMapperMathInput::ConstantValue");

// /Script/RigMapper.RigMapperMultiplyFeature
// Kind: ScriptStruct; super: RigMapperFeature
struct FRigMapperMultiplyFeature
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TArray<void*> Inputs; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigMapperMultiplyFeature, Inputs) == 24, "Offset mismatch for FRigMapperMultiplyFeature::Inputs");

// /Script/RigMapper.RigMapperProcessor
// Kind: ScriptStruct; super: none
struct FRigMapperProcessor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/RigMapper.RigMapperSdkFeature
// Kind: ScriptStruct; super: RigMapperFeature
struct FRigMapperSdkFeature
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    FString Input; // 0x0018 (Size: 0x10, Type: StrProperty)
    TArray<void*> Keys; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigMapperSdkFeature, Input) == 24, "Offset mismatch for FRigMapperSdkFeature::Input");
static_assert(offsetof(FRigMapperSdkFeature, Keys) == 40, "Offset mismatch for FRigMapperSdkFeature::Keys");

// /Script/RigMapper.RigMapperSdkKey
// Kind: ScriptStruct; super: none
struct FRigMapperSdkKey
{
public:
    double In; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double Out; // 0x0008 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FRigMapperSdkKey, In) == 0, "Offset mismatch for FRigMapperSdkKey::In");
static_assert(offsetof(FRigMapperSdkKey, Out) == 8, "Offset mismatch for FRigMapperSdkKey::Out");

// /Script/RigMapper.RigMapperValidationContext
// Kind: ScriptStruct; super: none
struct FRigMapperValidationContext
{
public:
    TArray<void*> Messages; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigMapperValidationContext, Messages) == 0, "Offset mismatch for FRigMapperValidationContext::Messages");

// /Script/RigMapper.RigMapperValidationMessage
// Kind: ScriptStruct; super: none
struct FRigMapperValidationMessage
{
public:
    std::uint8_t Severity; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString Message; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::int32_t DefinitionIndex; // 0x0018 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FRigMapperValidationMessage, Severity) == 0, "Offset mismatch for FRigMapperValidationMessage::Severity");
static_assert(offsetof(FRigMapperValidationMessage, Message) == 8, "Offset mismatch for FRigMapperValidationMessage::Message");
static_assert(offsetof(FRigMapperValidationMessage, DefinitionIndex) == 24, "Offset mismatch for FRigMapperValidationMessage::DefinitionIndex");

// /Script/RigMapper.RigMapperWsFeature
// Kind: ScriptStruct; super: RigMapperFeature
struct FRigMapperWsFeature
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    TMap<void*, void*> Inputs; // 0x0018 (Size: 0x10, Type: MapProperty)
    std::uint8_t Range[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRigMapperWsFeature, Inputs) == 24, "Offset mismatch for FRigMapperWsFeature::Inputs");
static_assert(offsetof(FRigMapperWsFeature, Range) == 40, "Offset mismatch for FRigMapperWsFeature::Range");

// /Script/RigMapper.RigMapperDefinition
// Kind: Class; super: DataAsset
class URigMapperDefinition
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> Inputs; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Features[0x40]; // 0x0068 (Size: 0x40, Type: StructProperty)
    TMap<void*, void*> Outputs; // 0x00A8 (Size: 0x10, Type: MapProperty)
    TArray<void*> NullOutputs; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bValidated; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C9
    FString JsonSource; // 0x00D0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(URigMapperDefinition, Inputs) == 88, "Offset mismatch for URigMapperDefinition::Inputs");
static_assert(offsetof(URigMapperDefinition, Features) == 104, "Offset mismatch for URigMapperDefinition::Features");
static_assert(offsetof(URigMapperDefinition, Outputs) == 168, "Offset mismatch for URigMapperDefinition::Outputs");
static_assert(offsetof(URigMapperDefinition, NullOutputs) == 184, "Offset mismatch for URigMapperDefinition::NullOutputs");
static_assert(offsetof(URigMapperDefinition, bValidated) == 200, "Offset mismatch for URigMapperDefinition::bValidated");
static_assert(offsetof(URigMapperDefinition, JsonSource) == 208, "Offset mismatch for URigMapperDefinition::JsonSource");

// /Script/RigMapper.RigMapperDefinitionUserData
// Kind: Class; super: AssetUserData
class URigMapperDefinitionUserData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Definitions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(URigMapperDefinitionUserData, Definitions) == 40, "Offset mismatch for URigMapperDefinitionUserData::Definitions");

// /Script/RigMapper.RigMapperLinkedDefinitions
// Kind: Class; super: DataAsset
class URigMapperLinkedDefinitions
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SourceDefinitions; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    void* BakedDefinition; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URigMapperLinkedDefinitions, SourceDefinitions) == 40, "Offset mismatch for URigMapperLinkedDefinitions::SourceDefinitions");
static_assert(offsetof(URigMapperLinkedDefinitions, BakedDefinition) == 56, "Offset mismatch for URigMapperLinkedDefinitions::BakedDefinition");
