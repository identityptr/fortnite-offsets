/**
 * decamp dumper generated SDK
 * Package: /Script/RigLogicModule
 */
#pragma once
#include "Basic.h"

// /Script/RigLogicModule.AnimNode_RigLogic
// Kind: ScriptStruct; super: AnimNode_Base
struct FAnimNode_RigLogic
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t AnimSequence[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t CacheAnimCurveNames; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0021
    std::int32_t LODThreshold; // 0x0024 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAnimNode_RigLogic, AnimSequence) == 16, "Offset mismatch for FAnimNode_RigLogic::AnimSequence");
static_assert(offsetof(FAnimNode_RigLogic, CacheAnimCurveNames) == 32, "Offset mismatch for FAnimNode_RigLogic::CacheAnimCurveNames");
static_assert(offsetof(FAnimNode_RigLogic, LODThreshold) == 36, "Offset mismatch for FAnimNode_RigLogic::LODThreshold");

// /Script/RigLogicModule.BoneIndexControlAttributeMapping
// Kind: ScriptStruct; super: none
struct FBoneIndexControlAttributeMapping
{
public:
    std::uint8_t Opaque[1];
};


// /Script/RigLogicModule.CoordinateSystem
// Kind: ScriptStruct; super: none
struct FCoordinateSystem
{
public:
    std::uint8_t XAxis; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t YAxis; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ZAxis; // 0x0002 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FCoordinateSystem, XAxis) == 0, "Offset mismatch for FCoordinateSystem::XAxis");
static_assert(offsetof(FCoordinateSystem, YAxis) == 1, "Offset mismatch for FCoordinateSystem::YAxis");
static_assert(offsetof(FCoordinateSystem, ZAxis) == 2, "Offset mismatch for FCoordinateSystem::ZAxis");

// /Script/RigLogicModule.DNAConfig
// Kind: ScriptStruct; super: none
struct FDNAConfig
{
public:
    std::int32_t Layers; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t MaxLODPerPlatform[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t MinLODPerPlatform[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    TArray<void*> ExactLODs; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InternalExactLODs; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CoordinateSystemTransformPolicy; // 0x0058 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CoordinateSystem[0x3]; // 0x0059 (Size: 0x3, Type: StructProperty)
    std::uint8_t RotationSign[0x3]; // 0x005C (Size: 0x3, Type: StructProperty)
    std::uint8_t RotationSequence; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t FaceWindingOrder; // 0x0060 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FDNAConfig, Layers) == 0, "Offset mismatch for FDNAConfig::Layers");
static_assert(offsetof(FDNAConfig, MaxLODPerPlatform) == 8, "Offset mismatch for FDNAConfig::MaxLODPerPlatform");
static_assert(offsetof(FDNAConfig, MinLODPerPlatform) == 32, "Offset mismatch for FDNAConfig::MinLODPerPlatform");
static_assert(offsetof(FDNAConfig, ExactLODs) == 56, "Offset mismatch for FDNAConfig::ExactLODs");
static_assert(offsetof(FDNAConfig, InternalExactLODs) == 72, "Offset mismatch for FDNAConfig::InternalExactLODs");
static_assert(offsetof(FDNAConfig, CoordinateSystemTransformPolicy) == 88, "Offset mismatch for FDNAConfig::CoordinateSystemTransformPolicy");
static_assert(offsetof(FDNAConfig, CoordinateSystem) == 89, "Offset mismatch for FDNAConfig::CoordinateSystem");
static_assert(offsetof(FDNAConfig, RotationSign) == 92, "Offset mismatch for FDNAConfig::RotationSign");
static_assert(offsetof(FDNAConfig, RotationSequence) == 95, "Offset mismatch for FDNAConfig::RotationSequence");
static_assert(offsetof(FDNAConfig, FaceWindingOrder) == 96, "Offset mismatch for FDNAConfig::FaceWindingOrder");

// /Script/RigLogicModule.MeshBlendShapeChannelMapping
// Kind: ScriptStruct; super: none
struct FMeshBlendShapeChannelMapping
{
public:
    std::int32_t MeshIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t BlendShapeChannelIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMeshBlendShapeChannelMapping, MeshIndex) == 0, "Offset mismatch for FMeshBlendShapeChannelMapping::MeshIndex");
static_assert(offsetof(FMeshBlendShapeChannelMapping, BlendShapeChannelIndex) == 4, "Offset mismatch for FMeshBlendShapeChannelMapping::BlendShapeChannelIndex");

// /Script/RigLogicModule.PerPlatformERigLogicCalculationType
// Kind: ScriptStruct; super: PerPlatformInt
struct FPerPlatformERigLogicCalculationType
{
public:
    std::int32_t Default; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPerPlatformERigLogicCalculationType, Default) == 0, "Offset mismatch for FPerPlatformERigLogicCalculationType::Default");

// /Script/RigLogicModule.PerPlatformERigLogicFloatingPointType
// Kind: ScriptStruct; super: PerPlatformInt
struct FPerPlatformERigLogicFloatingPointType
{
public:
    std::int32_t Default; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPerPlatformERigLogicFloatingPointType, Default) == 0, "Offset mismatch for FPerPlatformERigLogicFloatingPointType::Default");

// /Script/RigLogicModule.RigLogicConfiguration
// Kind: ScriptStruct; super: none
struct FRigLogicConfiguration
{
public:
    std::uint8_t CalculationType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t CalculationTypePerPlatform[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t FloatingPointTypePerPlatform[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t EnableMultiThreadMLComputePerPlatform[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t LoadJoints; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LoadBlendShapes; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LoadAnimatedMaps; // 0x0052 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LoadMachineLearnedBehavior; // 0x0053 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LoadRBFBehavior; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LoadTwistSwingBehavior; // 0x0055 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TranslationType; // 0x0056 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RotationType; // 0x0057 (Size: 0x1, Type: EnumProperty)
    std::uint8_t RotationOrder; // 0x0058 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ScaleType; // 0x0059 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x005A
    float TranslationPruningThreshold; // 0x005C (Size: 0x4, Type: FloatProperty)
    float RotationPruningThreshold; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float ScalePruningThreshold; // 0x0064 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRigLogicConfiguration, CalculationType) == 0, "Offset mismatch for FRigLogicConfiguration::CalculationType");
static_assert(offsetof(FRigLogicConfiguration, CalculationTypePerPlatform) == 8, "Offset mismatch for FRigLogicConfiguration::CalculationTypePerPlatform");
static_assert(offsetof(FRigLogicConfiguration, FloatingPointTypePerPlatform) == 32, "Offset mismatch for FRigLogicConfiguration::FloatingPointTypePerPlatform");
static_assert(offsetof(FRigLogicConfiguration, EnableMultiThreadMLComputePerPlatform) == 56, "Offset mismatch for FRigLogicConfiguration::EnableMultiThreadMLComputePerPlatform");
static_assert(offsetof(FRigLogicConfiguration, LoadJoints) == 80, "Offset mismatch for FRigLogicConfiguration::LoadJoints");
static_assert(offsetof(FRigLogicConfiguration, LoadBlendShapes) == 81, "Offset mismatch for FRigLogicConfiguration::LoadBlendShapes");
static_assert(offsetof(FRigLogicConfiguration, LoadAnimatedMaps) == 82, "Offset mismatch for FRigLogicConfiguration::LoadAnimatedMaps");
static_assert(offsetof(FRigLogicConfiguration, LoadMachineLearnedBehavior) == 83, "Offset mismatch for FRigLogicConfiguration::LoadMachineLearnedBehavior");
static_assert(offsetof(FRigLogicConfiguration, LoadRBFBehavior) == 84, "Offset mismatch for FRigLogicConfiguration::LoadRBFBehavior");
static_assert(offsetof(FRigLogicConfiguration, LoadTwistSwingBehavior) == 85, "Offset mismatch for FRigLogicConfiguration::LoadTwistSwingBehavior");
static_assert(offsetof(FRigLogicConfiguration, TranslationType) == 86, "Offset mismatch for FRigLogicConfiguration::TranslationType");
static_assert(offsetof(FRigLogicConfiguration, RotationType) == 87, "Offset mismatch for FRigLogicConfiguration::RotationType");
static_assert(offsetof(FRigLogicConfiguration, RotationOrder) == 88, "Offset mismatch for FRigLogicConfiguration::RotationOrder");
static_assert(offsetof(FRigLogicConfiguration, ScaleType) == 89, "Offset mismatch for FRigLogicConfiguration::ScaleType");
static_assert(offsetof(FRigLogicConfiguration, TranslationPruningThreshold) == 92, "Offset mismatch for FRigLogicConfiguration::TranslationPruningThreshold");
static_assert(offsetof(FRigLogicConfiguration, RotationPruningThreshold) == 96, "Offset mismatch for FRigLogicConfiguration::RotationPruningThreshold");
static_assert(offsetof(FRigLogicConfiguration, ScalePruningThreshold) == 100, "Offset mismatch for FRigLogicConfiguration::ScalePruningThreshold");

// /Script/RigLogicModule.RigUnit_RigLogic
// Kind: ScriptStruct; super: RigUnitMutable
struct FRigUnit_RigLogic
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Data[0xA8]; // 0x0010 (Size: 0xA8, Type: StructProperty)
    std::uint8_t bIsInitialized; // 0x00B8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FRigUnit_RigLogic, Data) == 16, "Offset mismatch for FRigUnit_RigLogic::Data");
static_assert(offsetof(FRigUnit_RigLogic, bIsInitialized) == 184, "Offset mismatch for FRigUnit_RigLogic::bIsInitialized");

// /Script/RigLogicModule.RigUnit_RigLogic_Data
// Kind: ScriptStruct; super: none
struct FRigUnit_RigLogic_Data
{
public:
    TWeakObjectPtr<void> SkelMeshComponent; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0000[0x18]; // 0x0008
    TArray<void*> InputCurveIndices; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MLMaskCurveIndices; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HierarchyBoneIndices; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DriverJointsToControlAttributesMap; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MorphTargetCurveIndices; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlendShapeIndices; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurveElementIndicesForAnimMaps; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RigLogicIndicesForAnimMaps; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    std::uint32_t CurrentLOD; // 0x00A0 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FRigUnit_RigLogic_Data, SkelMeshComponent) == 0, "Offset mismatch for FRigUnit_RigLogic_Data::SkelMeshComponent");
static_assert(offsetof(FRigUnit_RigLogic_Data, InputCurveIndices) == 32, "Offset mismatch for FRigUnit_RigLogic_Data::InputCurveIndices");
static_assert(offsetof(FRigUnit_RigLogic_Data, MLMaskCurveIndices) == 48, "Offset mismatch for FRigUnit_RigLogic_Data::MLMaskCurveIndices");
static_assert(offsetof(FRigUnit_RigLogic_Data, HierarchyBoneIndices) == 64, "Offset mismatch for FRigUnit_RigLogic_Data::HierarchyBoneIndices");
static_assert(offsetof(FRigUnit_RigLogic_Data, DriverJointsToControlAttributesMap) == 80, "Offset mismatch for FRigUnit_RigLogic_Data::DriverJointsToControlAttributesMap");
static_assert(offsetof(FRigUnit_RigLogic_Data, MorphTargetCurveIndices) == 96, "Offset mismatch for FRigUnit_RigLogic_Data::MorphTargetCurveIndices");
static_assert(offsetof(FRigUnit_RigLogic_Data, BlendShapeIndices) == 112, "Offset mismatch for FRigUnit_RigLogic_Data::BlendShapeIndices");
static_assert(offsetof(FRigUnit_RigLogic_Data, CurveElementIndicesForAnimMaps) == 128, "Offset mismatch for FRigUnit_RigLogic_Data::CurveElementIndicesForAnimMaps");
static_assert(offsetof(FRigUnit_RigLogic_Data, RigLogicIndicesForAnimMaps) == 144, "Offset mismatch for FRigUnit_RigLogic_Data::RigLogicIndicesForAnimMaps");
static_assert(offsetof(FRigUnit_RigLogic_Data, CurrentLOD) == 160, "Offset mismatch for FRigUnit_RigLogic_Data::CurrentLOD");

// /Script/RigLogicModule.RigUnit_RigLogic_IntArray
// Kind: ScriptStruct; super: none
struct FRigUnit_RigLogic_IntArray
{
public:
    TArray<void*> Values; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_RigLogic_IntArray, Values) == 0, "Offset mismatch for FRigUnit_RigLogic_IntArray::Values");

// /Script/RigLogicModule.RigUnit_RigLogic_IntMatrix
// Kind: ScriptStruct; super: none
struct FRigUnit_RigLogic_IntMatrix
{
public:
    TArray<void*> Values; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FRigUnit_RigLogic_IntMatrix, Values) == 0, "Offset mismatch for FRigUnit_RigLogic_IntMatrix::Values");

// /Script/RigLogicModule.RotationSign
// Kind: ScriptStruct; super: none
struct FRotationSign
{
public:
    std::uint8_t XAxis; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t YAxis; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ZAxis; // 0x0002 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRotationSign, XAxis) == 0, "Offset mismatch for FRotationSign::XAxis");
static_assert(offsetof(FRotationSign, YAxis) == 1, "Offset mismatch for FRotationSign::YAxis");
static_assert(offsetof(FRotationSign, ZAxis) == 2, "Offset mismatch for FRotationSign::ZAxis");

// /Script/RigLogicModule.TextureCoordinate
// Kind: ScriptStruct; super: none
struct FTextureCoordinate
{
public:
    float U; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float V; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FTextureCoordinate, U) == 0, "Offset mismatch for FTextureCoordinate::U");
static_assert(offsetof(FTextureCoordinate, V) == 4, "Offset mismatch for FTextureCoordinate::V");

// /Script/RigLogicModule.VertexLayout
// Kind: ScriptStruct; super: none
struct FVertexLayout
{
public:
    std::int32_t Position; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t TextureCoordinate; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t Normal; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVertexLayout, Position) == 0, "Offset mismatch for FVertexLayout::Position");
static_assert(offsetof(FVertexLayout, TextureCoordinate) == 4, "Offset mismatch for FVertexLayout::TextureCoordinate");
static_assert(offsetof(FVertexLayout, Normal) == 8, "Offset mismatch for FVertexLayout::Normal");

// /Script/RigLogicModule.DNA
// Kind: Class; super: Object
class UDNA
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DNAConfig[0x68]; // 0x0028 (Size: 0x68, Type: StructProperty)
    std::uint8_t bKeepDNAAfterInitialization; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseOptimizedCooking; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0092
    TMap<void*, void*> MetaData; // 0x0098 (Size: 0x10, Type: MapProperty)
    std::uint8_t RigLogicConfiguration[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDNA, DNAConfig) == 40, "Offset mismatch for UDNA::DNAConfig");
static_assert(offsetof(UDNA, bKeepDNAAfterInitialization) == 144, "Offset mismatch for UDNA::bKeepDNAAfterInitialization");
static_assert(offsetof(UDNA, bUseOptimizedCooking) == 145, "Offset mismatch for UDNA::bUseOptimizedCooking");
static_assert(offsetof(UDNA, MetaData) == 152, "Offset mismatch for UDNA::MetaData");
static_assert(offsetof(UDNA, RigLogicConfiguration) == 168, "Offset mismatch for UDNA::RigLogicConfiguration");

// /Script/RigLogicModule.DNAAsset
// Kind: Class; super: AssetUserData
class UDNAAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString DnaFileName; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t bKeepDNAAfterInitialization; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    TMap<void*, void*> MetaData; // 0x0040 (Size: 0x10, Type: MapProperty)
    std::uint8_t RigLogicConfiguration[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDNAAsset, DnaFileName) == 40, "Offset mismatch for UDNAAsset::DnaFileName");
static_assert(offsetof(UDNAAsset, bKeepDNAAfterInitialization) == 56, "Offset mismatch for UDNAAsset::bKeepDNAAfterInitialization");
static_assert(offsetof(UDNAAsset, MetaData) == 64, "Offset mismatch for UDNAAsset::MetaData");
static_assert(offsetof(UDNAAsset, RigLogicConfiguration) == 80, "Offset mismatch for UDNAAsset::RigLogicConfiguration");

// /Script/RigLogicModule.DNAAssetUserData
// Kind: Class; super: AssetUserData
class UDNAAssetUserData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* DNAAsset; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDNAAssetUserData, DNAAsset) == 40, "Offset mismatch for UDNAAssetUserData::DNAAsset");

// /Script/RigLogicModule.DNAConfigHolder
// Kind: Class; super: Object
class UDNAConfigHolder
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Config[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDNAConfigHolder, Config) == 40, "Offset mismatch for UDNAConfigHolder::Config");

// /Script/RigLogicModule.DNAIndexMapping
// Kind: Class; super: AssetUserData
class UDNAIndexMapping
{
public:
    std::uint8_t Opaque[1];
};


// /Script/RigLogicModule.SkelMeshDNAUtils
// Kind: Class; super: Object
class USkelMeshDNAUtils
{
public:
    std::uint8_t Opaque[1];
};
