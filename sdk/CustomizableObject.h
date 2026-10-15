/**
 * decamp dumper generated SDK
 * Package: /Script/CustomizableObject
 */
#pragma once
#include "Basic.h"

// /Script/CustomizableObject.AnimBpGeneratedPhysicsAssets
// Kind: ScriptStruct; super: none
struct FAnimBpGeneratedPhysicsAssets
{
public:
    TArray<void*> AnimInstancePropertyIndexAndPhysicsAssets; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAnimBpGeneratedPhysicsAssets, AnimInstancePropertyIndexAndPhysicsAssets) == 0, "Offset mismatch for FAnimBpGeneratedPhysicsAssets::AnimInstancePropertyIndexAndPhysicsAssets");

// /Script/CustomizableObject.AnimBpOverridePhysicsAssetsInfo
// Kind: ScriptStruct; super: none
struct FAnimBpOverridePhysicsAssetsInfo
{
public:
    std::uint8_t AnimInstanceClass[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::int32_t PropertyIndex; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FAnimBpOverridePhysicsAssetsInfo, AnimInstanceClass) == 0, "Offset mismatch for FAnimBpOverridePhysicsAssetsInfo::AnimInstanceClass");
static_assert(offsetof(FAnimBpOverridePhysicsAssetsInfo, PropertyIndex) == 32, "Offset mismatch for FAnimBpOverridePhysicsAssetsInfo::PropertyIndex");

// /Script/CustomizableObject.AnimInstanceOverridePhysicsAsset
// Kind: ScriptStruct; super: none
struct FAnimInstanceOverridePhysicsAsset
{
public:
    std::int32_t PropertyIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* PhysicsAsset; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAnimInstanceOverridePhysicsAsset, PropertyIndex) == 0, "Offset mismatch for FAnimInstanceOverridePhysicsAsset::PropertyIndex");
static_assert(offsetof(FAnimInstanceOverridePhysicsAsset, PhysicsAsset) == 8, "Offset mismatch for FAnimInstanceOverridePhysicsAsset::PhysicsAsset");

// /Script/CustomizableObject.BakedResourceData
// Kind: ScriptStruct; super: none
struct FBakedResourceData
{
public:
    std::uint8_t SaveType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString AssetPath; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString Prefix; // 0x0018 (Size: 0x10, Type: StrProperty)
    FString UserGivenName; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString ComponentName; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString ResourceName; // 0x0048 (Size: 0x10, Type: StrProperty)
    FString UniqueAssetNameSuffix; // 0x0058 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FBakedResourceData, SaveType) == 0, "Offset mismatch for FBakedResourceData::SaveType");
static_assert(offsetof(FBakedResourceData, AssetPath) == 8, "Offset mismatch for FBakedResourceData::AssetPath");
static_assert(offsetof(FBakedResourceData, Prefix) == 24, "Offset mismatch for FBakedResourceData::Prefix");
static_assert(offsetof(FBakedResourceData, UserGivenName) == 40, "Offset mismatch for FBakedResourceData::UserGivenName");
static_assert(offsetof(FBakedResourceData, ComponentName) == 56, "Offset mismatch for FBakedResourceData::ComponentName");
static_assert(offsetof(FBakedResourceData, ResourceName) == 72, "Offset mismatch for FBakedResourceData::ResourceName");
static_assert(offsetof(FBakedResourceData, UniqueAssetNameSuffix) == 88, "Offset mismatch for FBakedResourceData::UniqueAssetNameSuffix");

// /Script/CustomizableObject.BakingConfiguration
// Kind: ScriptStruct; super: none
struct FBakingConfiguration
{
public:
    FString OutputPath; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString OutputFilesBaseName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t bExportAllResourcesOnBake; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGenerateConstantMaterialInstancesOnBake; // 0x0021 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReplaceRestrictedCharacters; // 0x0022 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0023
    FString SkeletalMeshAssetPrefix; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString SkeletonAssetPrefix; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString PhysicsAssetPrefix; // 0x0048 (Size: 0x10, Type: StrProperty)
    FString TextureAssetPrefix; // 0x0058 (Size: 0x10, Type: StrProperty)
    FString MaterialAssetPrefix; // 0x0068 (Size: 0x10, Type: StrProperty)
    FString MaterialInstanceAssetPrefix; // 0x0078 (Size: 0x10, Type: StrProperty)
    FString MaterialDynamicInstanceAssetPrefix; // 0x0088 (Size: 0x10, Type: StrProperty)
    FString MaterialConstantInstanceAssetPrefix; // 0x0098 (Size: 0x10, Type: StrProperty)
    FScriptDelegate OnBakeOperationCompletedCallback; // 0x00A8 (Size: 0x10, Type: DelegateProperty)
};

static_assert(offsetof(FBakingConfiguration, OutputPath) == 0, "Offset mismatch for FBakingConfiguration::OutputPath");
static_assert(offsetof(FBakingConfiguration, OutputFilesBaseName) == 16, "Offset mismatch for FBakingConfiguration::OutputFilesBaseName");
static_assert(offsetof(FBakingConfiguration, bExportAllResourcesOnBake) == 32, "Offset mismatch for FBakingConfiguration::bExportAllResourcesOnBake");
static_assert(offsetof(FBakingConfiguration, bGenerateConstantMaterialInstancesOnBake) == 33, "Offset mismatch for FBakingConfiguration::bGenerateConstantMaterialInstancesOnBake");
static_assert(offsetof(FBakingConfiguration, bReplaceRestrictedCharacters) == 34, "Offset mismatch for FBakingConfiguration::bReplaceRestrictedCharacters");
static_assert(offsetof(FBakingConfiguration, SkeletalMeshAssetPrefix) == 40, "Offset mismatch for FBakingConfiguration::SkeletalMeshAssetPrefix");
static_assert(offsetof(FBakingConfiguration, SkeletonAssetPrefix) == 56, "Offset mismatch for FBakingConfiguration::SkeletonAssetPrefix");
static_assert(offsetof(FBakingConfiguration, PhysicsAssetPrefix) == 72, "Offset mismatch for FBakingConfiguration::PhysicsAssetPrefix");
static_assert(offsetof(FBakingConfiguration, TextureAssetPrefix) == 88, "Offset mismatch for FBakingConfiguration::TextureAssetPrefix");
static_assert(offsetof(FBakingConfiguration, MaterialAssetPrefix) == 104, "Offset mismatch for FBakingConfiguration::MaterialAssetPrefix");
static_assert(offsetof(FBakingConfiguration, MaterialInstanceAssetPrefix) == 120, "Offset mismatch for FBakingConfiguration::MaterialInstanceAssetPrefix");
static_assert(offsetof(FBakingConfiguration, MaterialDynamicInstanceAssetPrefix) == 136, "Offset mismatch for FBakingConfiguration::MaterialDynamicInstanceAssetPrefix");
static_assert(offsetof(FBakingConfiguration, MaterialConstantInstanceAssetPrefix) == 152, "Offset mismatch for FBakingConfiguration::MaterialConstantInstanceAssetPrefix");
static_assert(offsetof(FBakingConfiguration, OnBakeOperationCompletedCallback) == 168, "Offset mismatch for FBakingConfiguration::OnBakeOperationCompletedCallback");

// /Script/CustomizableObject.CompilationOptions_DEPRECATED
// Kind: ScriptStruct; super: none
struct FCompilationOptions_DEPRECATED
{
public:
    std::uint8_t TextureCompression; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t OptimizationLevel; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint64_t EmbeddedDataBytesLimit; // 0x0008 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FCompilationOptions_DEPRECATED, TextureCompression) == 0, "Offset mismatch for FCompilationOptions_DEPRECATED::TextureCompression");
static_assert(offsetof(FCompilationOptions_DEPRECATED, OptimizationLevel) == 4, "Offset mismatch for FCompilationOptions_DEPRECATED::OptimizationLevel");
static_assert(offsetof(FCompilationOptions_DEPRECATED, EmbeddedDataBytesLimit) == 8, "Offset mismatch for FCompilationOptions_DEPRECATED::EmbeddedDataBytesLimit");

// /Script/CustomizableObject.CompileCallbackParams
// Kind: ScriptStruct; super: none
struct FCompileCallbackParams
{
public:
    std::uint8_t bRequestFailed; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWarnings; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bErrors; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSkipped; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCompiled; // 0x0004 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCompileCallbackParams, bRequestFailed) == 0, "Offset mismatch for FCompileCallbackParams::bRequestFailed");
static_assert(offsetof(FCompileCallbackParams, bWarnings) == 1, "Offset mismatch for FCompileCallbackParams::bWarnings");
static_assert(offsetof(FCompileCallbackParams, bErrors) == 2, "Offset mismatch for FCompileCallbackParams::bErrors");
static_assert(offsetof(FCompileCallbackParams, bSkipped) == 3, "Offset mismatch for FCompileCallbackParams::bSkipped");
static_assert(offsetof(FCompileCallbackParams, bCompiled) == 4, "Offset mismatch for FCompileCallbackParams::bCompiled");

// /Script/CustomizableObject.CompileParams
// Kind: ScriptStruct; super: none
struct FCompileParams
{
public:
    std::uint8_t bSkipIfCompiled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSkipIfNotOutOfDate; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGatherReferences; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAsync; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    void* CompileOnlySelectedInstance; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t OptimizationLevel; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TextureCompression; // 0x0011 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0012
    FScriptDelegate Callback; // 0x0014 (Size: 0x10, Type: DelegateProperty)
};

static_assert(offsetof(FCompileParams, bSkipIfCompiled) == 0, "Offset mismatch for FCompileParams::bSkipIfCompiled");
static_assert(offsetof(FCompileParams, bSkipIfNotOutOfDate) == 1, "Offset mismatch for FCompileParams::bSkipIfNotOutOfDate");
static_assert(offsetof(FCompileParams, bGatherReferences) == 2, "Offset mismatch for FCompileParams::bGatherReferences");
static_assert(offsetof(FCompileParams, bAsync) == 3, "Offset mismatch for FCompileParams::bAsync");
static_assert(offsetof(FCompileParams, CompileOnlySelectedInstance) == 8, "Offset mismatch for FCompileParams::CompileOnlySelectedInstance");
static_assert(offsetof(FCompileParams, OptimizationLevel) == 16, "Offset mismatch for FCompileParams::OptimizationLevel");
static_assert(offsetof(FCompileParams, TextureCompression) == 17, "Offset mismatch for FCompileParams::TextureCompression");
static_assert(offsetof(FCompileParams, Callback) == 20, "Offset mismatch for FCompileParams::Callback");

// /Script/CustomizableObject.CustomizableInstanceComponentData
// Kind: ScriptStruct; super: none
struct FCustomizableInstanceComponentData
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> OverrideMaterials; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    void* OverlayMaterial; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> OverlayMaterials; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomizableInstanceComponentData, OverrideMaterials) == 32, "Offset mismatch for FCustomizableInstanceComponentData::OverrideMaterials");
static_assert(offsetof(FCustomizableInstanceComponentData, OverlayMaterial) == 48, "Offset mismatch for FCustomizableInstanceComponentData::OverlayMaterial");
static_assert(offsetof(FCustomizableInstanceComponentData, OverlayMaterials) == 56, "Offset mismatch for FCustomizableInstanceComponentData::OverlayMaterials");

// /Script/CustomizableObject.CustomizableObjectAnimationSlot
// Kind: ScriptStruct; super: none
struct FCustomizableObjectAnimationSlot
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    TSoftClassPtr<void> AnimInstance; // 0x0008 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FCustomizableObjectAnimationSlot, Name) == 0, "Offset mismatch for FCustomizableObjectAnimationSlot::Name");
static_assert(offsetof(FCustomizableObjectAnimationSlot, AnimInstance) == 8, "Offset mismatch for FCustomizableObjectAnimationSlot::AnimInstance");

// /Script/CustomizableObject.CustomizableObjectBoolParameterValue
// Kind: ScriptStruct; super: none
struct FCustomizableObjectBoolParameterValue
{
public:
    FString ParameterName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t ParameterValue; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    std::uint8_t ID[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCustomizableObjectBoolParameterValue, ParameterName) == 0, "Offset mismatch for FCustomizableObjectBoolParameterValue::ParameterName");
static_assert(offsetof(FCustomizableObjectBoolParameterValue, ParameterValue) == 16, "Offset mismatch for FCustomizableObjectBoolParameterValue::ParameterValue");
static_assert(offsetof(FCustomizableObjectBoolParameterValue, ID) == 20, "Offset mismatch for FCustomizableObjectBoolParameterValue::ID");

// /Script/CustomizableObject.CustomizableObjectExternalAssetCollector
// Kind: ScriptStruct; super: none
struct FCustomizableObjectExternalAssetCollector
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CustomizableObject.CustomizableObjectExternalTypeParameterValue
// Kind: ScriptStruct; super: none
struct FCustomizableObjectExternalTypeParameterValue
{
public:
    FString ParameterName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t ParameterValue[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ID[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    TArray<void*> ParameterRangeValues; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomizableObjectExternalTypeParameterValue, ParameterName) == 0, "Offset mismatch for FCustomizableObjectExternalTypeParameterValue::ParameterName");
static_assert(offsetof(FCustomizableObjectExternalTypeParameterValue, ParameterValue) == 16, "Offset mismatch for FCustomizableObjectExternalTypeParameterValue::ParameterValue");
static_assert(offsetof(FCustomizableObjectExternalTypeParameterValue, ID) == 32, "Offset mismatch for FCustomizableObjectExternalTypeParameterValue::ID");
static_assert(offsetof(FCustomizableObjectExternalTypeParameterValue, ParameterRangeValues) == 48, "Offset mismatch for FCustomizableObjectExternalTypeParameterValue::ParameterRangeValues");

// /Script/CustomizableObject.CustomizableObjectFloatParameterValue
// Kind: ScriptStruct; super: none
struct FCustomizableObjectFloatParameterValue
{
public:
    FString ParameterName; // 0x0000 (Size: 0x10, Type: StrProperty)
    float ParameterValue; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ID[0x14]; // 0x0014 (Size: 0x14, Type: StructProperty)
    TArray<void*> ParameterRangeValues; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomizableObjectFloatParameterValue, ParameterName) == 0, "Offset mismatch for FCustomizableObjectFloatParameterValue::ParameterName");
static_assert(offsetof(FCustomizableObjectFloatParameterValue, ParameterValue) == 16, "Offset mismatch for FCustomizableObjectFloatParameterValue::ParameterValue");
static_assert(offsetof(FCustomizableObjectFloatParameterValue, ID) == 20, "Offset mismatch for FCustomizableObjectFloatParameterValue::ID");
static_assert(offsetof(FCustomizableObjectFloatParameterValue, ParameterRangeValues) == 40, "Offset mismatch for FCustomizableObjectFloatParameterValue::ParameterRangeValues");

// /Script/CustomizableObject.CustomizableObjectIdPair
// Kind: ScriptStruct; super: none
struct FCustomizableObjectIdPair
{
public:
    FString CustomizableObjectGroupName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString CustomizableObjectName; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCustomizableObjectIdPair, CustomizableObjectGroupName) == 0, "Offset mismatch for FCustomizableObjectIdPair::CustomizableObjectGroupName");
static_assert(offsetof(FCustomizableObjectIdPair, CustomizableObjectName) == 16, "Offset mismatch for FCustomizableObjectIdPair::CustomizableObjectName");

// /Script/CustomizableObject.CustomizableObjectInstanceBakeOutput
// Kind: ScriptStruct; super: none
struct FCustomizableObjectInstanceBakeOutput
{
public:
    std::uint8_t bWasBakeSuccessful; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> SavedPackages; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomizableObjectInstanceBakeOutput, bWasBakeSuccessful) == 0, "Offset mismatch for FCustomizableObjectInstanceBakeOutput::bWasBakeSuccessful");
static_assert(offsetof(FCustomizableObjectInstanceBakeOutput, SavedPackages) == 8, "Offset mismatch for FCustomizableObjectInstanceBakeOutput::SavedPackages");

// /Script/CustomizableObject.CustomizableObjectInstanceDescriptor
// Kind: ScriptStruct; super: none
struct FCustomizableObjectInstanceDescriptor
{
public:
    void* CustomizableObject; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> BoolParameters; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IntParameters; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FloatParameters; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TextureParameters; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SkeletalMeshParameters; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MaterialParameters; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VectorParameters; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProjectorParameters; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TransformParameters; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExternalTypeParameters; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    std::int32_t State; // 0x00A8 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCustomizableObjectInstanceDescriptor, CustomizableObject) == 0, "Offset mismatch for FCustomizableObjectInstanceDescriptor::CustomizableObject");
static_assert(offsetof(FCustomizableObjectInstanceDescriptor, BoolParameters) == 8, "Offset mismatch for FCustomizableObjectInstanceDescriptor::BoolParameters");
static_assert(offsetof(FCustomizableObjectInstanceDescriptor, IntParameters) == 24, "Offset mismatch for FCustomizableObjectInstanceDescriptor::IntParameters");
static_assert(offsetof(FCustomizableObjectInstanceDescriptor, FloatParameters) == 40, "Offset mismatch for FCustomizableObjectInstanceDescriptor::FloatParameters");
static_assert(offsetof(FCustomizableObjectInstanceDescriptor, TextureParameters) == 56, "Offset mismatch for FCustomizableObjectInstanceDescriptor::TextureParameters");
static_assert(offsetof(FCustomizableObjectInstanceDescriptor, SkeletalMeshParameters) == 72, "Offset mismatch for FCustomizableObjectInstanceDescriptor::SkeletalMeshParameters");
static_assert(offsetof(FCustomizableObjectInstanceDescriptor, MaterialParameters) == 88, "Offset mismatch for FCustomizableObjectInstanceDescriptor::MaterialParameters");
static_assert(offsetof(FCustomizableObjectInstanceDescriptor, VectorParameters) == 104, "Offset mismatch for FCustomizableObjectInstanceDescriptor::VectorParameters");
static_assert(offsetof(FCustomizableObjectInstanceDescriptor, ProjectorParameters) == 120, "Offset mismatch for FCustomizableObjectInstanceDescriptor::ProjectorParameters");
static_assert(offsetof(FCustomizableObjectInstanceDescriptor, TransformParameters) == 136, "Offset mismatch for FCustomizableObjectInstanceDescriptor::TransformParameters");
static_assert(offsetof(FCustomizableObjectInstanceDescriptor, ExternalTypeParameters) == 152, "Offset mismatch for FCustomizableObjectInstanceDescriptor::ExternalTypeParameters");
static_assert(offsetof(FCustomizableObjectInstanceDescriptor, State) == 168, "Offset mismatch for FCustomizableObjectInstanceDescriptor::State");

// /Script/CustomizableObject.CustomizableObjectIntParameterValue
// Kind: ScriptStruct; super: none
struct FCustomizableObjectIntParameterValue
{
public:
    FString ParameterName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ParameterValueName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::uint8_t ID[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    TArray<void*> ParameterRangeValueNames; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomizableObjectIntParameterValue, ParameterName) == 0, "Offset mismatch for FCustomizableObjectIntParameterValue::ParameterName");
static_assert(offsetof(FCustomizableObjectIntParameterValue, ParameterValueName) == 16, "Offset mismatch for FCustomizableObjectIntParameterValue::ParameterValueName");
static_assert(offsetof(FCustomizableObjectIntParameterValue, ID) == 32, "Offset mismatch for FCustomizableObjectIntParameterValue::ID");
static_assert(offsetof(FCustomizableObjectIntParameterValue, ParameterRangeValueNames) == 48, "Offset mismatch for FCustomizableObjectIntParameterValue::ParameterRangeValueNames");

// /Script/CustomizableObject.CustomizableObjectMaterialParameterValue
// Kind: ScriptStruct; super: none
struct FCustomizableObjectMaterialParameterValue
{
public:
    FString ParameterName; // 0x0000 (Size: 0x10, Type: StrProperty)
    void* ParameterValue; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ID[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    TArray<void*> ParameterRangeValues; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomizableObjectMaterialParameterValue, ParameterName) == 0, "Offset mismatch for FCustomizableObjectMaterialParameterValue::ParameterName");
static_assert(offsetof(FCustomizableObjectMaterialParameterValue, ParameterValue) == 16, "Offset mismatch for FCustomizableObjectMaterialParameterValue::ParameterValue");
static_assert(offsetof(FCustomizableObjectMaterialParameterValue, ID) == 24, "Offset mismatch for FCustomizableObjectMaterialParameterValue::ID");
static_assert(offsetof(FCustomizableObjectMaterialParameterValue, ParameterRangeValues) == 40, "Offset mismatch for FCustomizableObjectMaterialParameterValue::ParameterRangeValues");

// /Script/CustomizableObject.CustomizableObjectProjector
// Kind: ScriptStruct; super: none
struct FCustomizableObjectProjector
{
public:
    std::uint8_t Position[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t Direction[0xC]; // 0x000C (Size: 0xC, Type: StructProperty)
    std::uint8_t Up[0xC]; // 0x0018 (Size: 0xC, Type: StructProperty)
    std::uint8_t Scale[0xC]; // 0x0024 (Size: 0xC, Type: StructProperty)
    std::uint8_t ProjectionType; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0031
    float Angle; // 0x0034 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCustomizableObjectProjector, Position) == 0, "Offset mismatch for FCustomizableObjectProjector::Position");
static_assert(offsetof(FCustomizableObjectProjector, Direction) == 12, "Offset mismatch for FCustomizableObjectProjector::Direction");
static_assert(offsetof(FCustomizableObjectProjector, Up) == 24, "Offset mismatch for FCustomizableObjectProjector::Up");
static_assert(offsetof(FCustomizableObjectProjector, Scale) == 36, "Offset mismatch for FCustomizableObjectProjector::Scale");
static_assert(offsetof(FCustomizableObjectProjector, ProjectionType) == 48, "Offset mismatch for FCustomizableObjectProjector::ProjectionType");
static_assert(offsetof(FCustomizableObjectProjector, Angle) == 52, "Offset mismatch for FCustomizableObjectProjector::Angle");

// /Script/CustomizableObject.CustomizableObjectProjectorParameterValue
// Kind: ScriptStruct; super: none
struct FCustomizableObjectProjectorParameterValue
{
public:
    FString ParameterName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Value[0x38]; // 0x0010 (Size: 0x38, Type: StructProperty)
    std::uint8_t ID[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    TArray<void*> RangeValues; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomizableObjectProjectorParameterValue, ParameterName) == 0, "Offset mismatch for FCustomizableObjectProjectorParameterValue::ParameterName");
static_assert(offsetof(FCustomizableObjectProjectorParameterValue, Value) == 16, "Offset mismatch for FCustomizableObjectProjectorParameterValue::Value");
static_assert(offsetof(FCustomizableObjectProjectorParameterValue, ID) == 72, "Offset mismatch for FCustomizableObjectProjectorParameterValue::ID");
static_assert(offsetof(FCustomizableObjectProjectorParameterValue, RangeValues) == 88, "Offset mismatch for FCustomizableObjectProjectorParameterValue::RangeValues");

// /Script/CustomizableObject.CustomizableObjectSkeletalMeshParameterValue
// Kind: ScriptStruct; super: none
struct FCustomizableObjectSkeletalMeshParameterValue
{
public:
    FString ParameterName; // 0x0000 (Size: 0x10, Type: StrProperty)
    void* ParameterValue; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ID[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    TArray<void*> ParameterRangeValues; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomizableObjectSkeletalMeshParameterValue, ParameterName) == 0, "Offset mismatch for FCustomizableObjectSkeletalMeshParameterValue::ParameterName");
static_assert(offsetof(FCustomizableObjectSkeletalMeshParameterValue, ParameterValue) == 16, "Offset mismatch for FCustomizableObjectSkeletalMeshParameterValue::ParameterValue");
static_assert(offsetof(FCustomizableObjectSkeletalMeshParameterValue, ID) == 24, "Offset mismatch for FCustomizableObjectSkeletalMeshParameterValue::ID");
static_assert(offsetof(FCustomizableObjectSkeletalMeshParameterValue, ParameterRangeValues) == 40, "Offset mismatch for FCustomizableObjectSkeletalMeshParameterValue::ParameterRangeValues");

// /Script/CustomizableObject.CustomizableObjectTextureParameterValue
// Kind: ScriptStruct; super: none
struct FCustomizableObjectTextureParameterValue
{
public:
    FString ParameterName; // 0x0000 (Size: 0x10, Type: StrProperty)
    void* ParameterValue; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ID[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    TArray<void*> ParameterRangeValues; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomizableObjectTextureParameterValue, ParameterName) == 0, "Offset mismatch for FCustomizableObjectTextureParameterValue::ParameterName");
static_assert(offsetof(FCustomizableObjectTextureParameterValue, ParameterValue) == 16, "Offset mismatch for FCustomizableObjectTextureParameterValue::ParameterValue");
static_assert(offsetof(FCustomizableObjectTextureParameterValue, ID) == 24, "Offset mismatch for FCustomizableObjectTextureParameterValue::ID");
static_assert(offsetof(FCustomizableObjectTextureParameterValue, ParameterRangeValues) == 40, "Offset mismatch for FCustomizableObjectTextureParameterValue::ParameterRangeValues");

// /Script/CustomizableObject.CustomizableObjectTransformParameterValue
// Kind: ScriptStruct; super: none
struct FCustomizableObjectTransformParameterValue
{
public:
    FString ParameterName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t ParameterValue[0x60]; // 0x0010 (Size: 0x60, Type: StructProperty)
    std::uint8_t ID[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCustomizableObjectTransformParameterValue, ParameterName) == 0, "Offset mismatch for FCustomizableObjectTransformParameterValue::ParameterName");
static_assert(offsetof(FCustomizableObjectTransformParameterValue, ParameterValue) == 16, "Offset mismatch for FCustomizableObjectTransformParameterValue::ParameterValue");
static_assert(offsetof(FCustomizableObjectTransformParameterValue, ID) == 112, "Offset mismatch for FCustomizableObjectTransformParameterValue::ID");

// /Script/CustomizableObject.CustomizableObjectVectorParameterValue
// Kind: ScriptStruct; super: none
struct FCustomizableObjectVectorParameterValue
{
public:
    FString ParameterName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t ParameterValue[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t ID[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCustomizableObjectVectorParameterValue, ParameterName) == 0, "Offset mismatch for FCustomizableObjectVectorParameterValue::ParameterName");
static_assert(offsetof(FCustomizableObjectVectorParameterValue, ParameterValue) == 16, "Offset mismatch for FCustomizableObjectVectorParameterValue::ParameterValue");
static_assert(offsetof(FCustomizableObjectVectorParameterValue, ID) == 32, "Offset mismatch for FCustomizableObjectVectorParameterValue::ID");

// /Script/CustomizableObject.FParameterOptionsTags
// Kind: ScriptStruct; super: none
struct FFParameterOptionsTags
{
public:
    TArray<void*> Tags; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFParameterOptionsTags, Tags) == 0, "Offset mismatch for FFParameterOptionsTags::Tags");

// /Script/CustomizableObject.IntegerParameterOptionDataTable
// Kind: ScriptStruct; super: none
struct FIntegerParameterOptionDataTable
{
public:
    TSet<void*> DataTables; // 0x0000 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FIntegerParameterOptionDataTable, DataTables) == 0, "Offset mismatch for FIntegerParameterOptionDataTable::DataTables");

// /Script/CustomizableObject.IntegerParameterOptionKey
// Kind: ScriptStruct; super: none
struct FIntegerParameterOptionKey
{
public:
    FString ParameterName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString ParameterOption; // 0x0010 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FIntegerParameterOptionKey, ParameterName) == 0, "Offset mismatch for FIntegerParameterOptionKey::ParameterName");
static_assert(offsetof(FIntegerParameterOptionKey, ParameterOption) == 16, "Offset mismatch for FIntegerParameterOptionKey::ParameterOption");

// /Script/CustomizableObject.IntegerParameterUIData
// Kind: ScriptStruct; super: none
struct FIntegerParameterUIData
{
public:
    std::uint8_t ParamUIMetadata[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FIntegerParameterUIData, ParamUIMetadata) == 0, "Offset mismatch for FIntegerParameterUIData::ParamUIMetadata");

// /Script/CustomizableObject.MultilayerProjectorLayer
// Kind: ScriptStruct; super: none
struct FMultilayerProjectorLayer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CustomizableObject.MutableLODSettings
// Kind: ScriptStruct; super: none
struct FMutableLODSettings
{
public:
    std::uint8_t MinLOD[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t MinQualityLevelLOD[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMutableLODSettings, MinLOD) == 0, "Offset mismatch for FMutableLODSettings::MinLOD");
static_assert(offsetof(FMutableLODSettings, MinQualityLevelLOD) == 24, "Offset mismatch for FMutableLODSettings::MinQualityLevelLOD");

// /Script/CustomizableObject.MutableMeshComponentData
// Kind: ScriptStruct; super: none
struct FMutableMeshComponentData
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* ReferenceSkeletalMesh; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMutableMeshComponentData, Name) == 0, "Offset mismatch for FMutableMeshComponentData::Name");
static_assert(offsetof(FMutableMeshComponentData, ReferenceSkeletalMesh) == 8, "Offset mismatch for FMutableMeshComponentData::ReferenceSkeletalMesh");

// /Script/CustomizableObject.MutableModelImageProperties
// Kind: ScriptStruct; super: none
struct FMutableModelImageProperties
{
public:
    FString TextureParameterName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Filter; // 0x0010 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    std::uint8_t FlipGreenChannel; // 0x0014 (Size: 0x1, Type: BoolProperty)
    // 0x0014 BoolProperty IsPassThrough (shared storage)
    // 0x0014 BoolProperty SRGB (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0015
    std::int32_t LODBias; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t MipGenSettings; // 0x001C (Size: 0x1, Type: ByteProperty)
    std::uint8_t LodGroup; // 0x001D (Size: 0x1, Type: ByteProperty)
    std::uint8_t AddressX; // 0x001E (Size: 0x1, Type: ByteProperty)
    std::uint8_t AddressY; // 0x001F (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FMutableModelImageProperties, TextureParameterName) == 0, "Offset mismatch for FMutableModelImageProperties::TextureParameterName");
static_assert(offsetof(FMutableModelImageProperties, Filter) == 16, "Offset mismatch for FMutableModelImageProperties::Filter");
static_assert(offsetof(FMutableModelImageProperties, FlipGreenChannel) == 20, "Offset mismatch for FMutableModelImageProperties::FlipGreenChannel");
static_assert(offsetof(FMutableModelImageProperties, LODBias) == 24, "Offset mismatch for FMutableModelImageProperties::LODBias");
static_assert(offsetof(FMutableModelImageProperties, MipGenSettings) == 28, "Offset mismatch for FMutableModelImageProperties::MipGenSettings");
static_assert(offsetof(FMutableModelImageProperties, LodGroup) == 29, "Offset mismatch for FMutableModelImageProperties::LodGroup");
static_assert(offsetof(FMutableModelImageProperties, AddressX) == 30, "Offset mismatch for FMutableModelImageProperties::AddressX");
static_assert(offsetof(FMutableModelImageProperties, AddressY) == 31, "Offset mismatch for FMutableModelImageProperties::AddressY");

// /Script/CustomizableObject.MutableModelParameterProperties
// Kind: ScriptStruct; super: none
struct FMutableModelParameterProperties
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Type; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0011
    TArray<void*> PossibleValues; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FMutableModelParameterProperties, Type) == 16, "Offset mismatch for FMutableModelParameterProperties::Type");
static_assert(offsetof(FMutableModelParameterProperties, PossibleValues) == 24, "Offset mismatch for FMutableModelParameterProperties::PossibleValues");

// /Script/CustomizableObject.MutableModelParameterValue
// Kind: ScriptStruct; super: none
struct FMutableModelParameterValue
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t Value; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMutableModelParameterValue, Name) == 0, "Offset mismatch for FMutableModelParameterValue::Name");
static_assert(offsetof(FMutableModelParameterValue, Value) == 16, "Offset mismatch for FMutableModelParameterValue::Value");

// /Script/CustomizableObject.MutableParamNameSet
// Kind: ScriptStruct; super: none
struct FMutableParamNameSet
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CustomizableObject.MutableParamUIMetadata
// Kind: ScriptStruct; super: MutableUIMetadata
struct FMutableParamUIMetadata
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    float MinimumValue; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float MaximumValue; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t GameplayTags[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMutableParamUIMetadata, MinimumValue) == 104, "Offset mismatch for FMutableParamUIMetadata::MinimumValue");
static_assert(offsetof(FMutableParamUIMetadata, MaximumValue) == 108, "Offset mismatch for FMutableParamUIMetadata::MaximumValue");
static_assert(offsetof(FMutableParamUIMetadata, GameplayTags) == 112, "Offset mismatch for FMutableParamUIMetadata::GameplayTags");

// /Script/CustomizableObject.MutableParameterData
// Kind: ScriptStruct; super: none
struct FMutableParameterData
{
public:
    std::uint8_t ParamUIMetadata[0x90]; // 0x0000 (Size: 0x90, Type: StructProperty)
    std::uint8_t Type; // 0x0090 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0091
    TMap<void*, void*> ArrayIntegerParameterOption; // 0x0098 (Size: 0x10, Type: MapProperty)
    std::uint8_t IntegerParameterGroupType; // 0x00A8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FMutableParameterData, ParamUIMetadata) == 0, "Offset mismatch for FMutableParameterData::ParamUIMetadata");
static_assert(offsetof(FMutableParameterData, Type) == 144, "Offset mismatch for FMutableParameterData::Type");
static_assert(offsetof(FMutableParameterData, ArrayIntegerParameterOption) == 152, "Offset mismatch for FMutableParameterData::ArrayIntegerParameterOption");
static_assert(offsetof(FMutableParameterData, IntegerParameterGroupType) == 168, "Offset mismatch for FMutableParameterData::IntegerParameterGroupType");

// /Script/CustomizableObject.MutableRefSkeletalMeshData
// Kind: ScriptStruct; super: none
struct FMutableRefSkeletalMeshData
{
public:
    void* SkeletalMesh; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SoftSkeletalMesh[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    void* SkeletalMeshLODSettings; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Sockets; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Bounds[0x38]; // 0x0040 (Size: 0x38, Type: StructProperty)
    std::uint8_t Settings[0x8]; // 0x0078 (Size: 0x8, Type: StructProperty)
    void* skeleton; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* PhysicsAsset; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PostProcessAnimInst[0x20]; // 0x0090 (Size: 0x20, Type: SoftClassProperty)
    void* ShadowPhysicsAsset; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMutableRefSkeletalMeshData, SkeletalMesh) == 0, "Offset mismatch for FMutableRefSkeletalMeshData::SkeletalMesh");
static_assert(offsetof(FMutableRefSkeletalMeshData, SoftSkeletalMesh) == 8, "Offset mismatch for FMutableRefSkeletalMeshData::SoftSkeletalMesh");
static_assert(offsetof(FMutableRefSkeletalMeshData, SkeletalMeshLODSettings) == 40, "Offset mismatch for FMutableRefSkeletalMeshData::SkeletalMeshLODSettings");
static_assert(offsetof(FMutableRefSkeletalMeshData, Sockets) == 48, "Offset mismatch for FMutableRefSkeletalMeshData::Sockets");
static_assert(offsetof(FMutableRefSkeletalMeshData, Bounds) == 64, "Offset mismatch for FMutableRefSkeletalMeshData::Bounds");
static_assert(offsetof(FMutableRefSkeletalMeshData, Settings) == 120, "Offset mismatch for FMutableRefSkeletalMeshData::Settings");
static_assert(offsetof(FMutableRefSkeletalMeshData, skeleton) == 128, "Offset mismatch for FMutableRefSkeletalMeshData::skeleton");
static_assert(offsetof(FMutableRefSkeletalMeshData, PhysicsAsset) == 136, "Offset mismatch for FMutableRefSkeletalMeshData::PhysicsAsset");
static_assert(offsetof(FMutableRefSkeletalMeshData, PostProcessAnimInst) == 144, "Offset mismatch for FMutableRefSkeletalMeshData::PostProcessAnimInst");
static_assert(offsetof(FMutableRefSkeletalMeshData, ShadowPhysicsAsset) == 176, "Offset mismatch for FMutableRefSkeletalMeshData::ShadowPhysicsAsset");

// /Script/CustomizableObject.MutableRefSkeletalMeshSettings
// Kind: ScriptStruct; super: none
struct FMutableRefSkeletalMeshSettings
{
public:
    std::uint8_t bEnablePerPolyCollision; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float DefaultUVChannelDensity; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMutableRefSkeletalMeshSettings, bEnablePerPolyCollision) == 0, "Offset mismatch for FMutableRefSkeletalMeshSettings::bEnablePerPolyCollision");
static_assert(offsetof(FMutableRefSkeletalMeshSettings, DefaultUVChannelDensity) == 4, "Offset mismatch for FMutableRefSkeletalMeshSettings::DefaultUVChannelDensity");

// /Script/CustomizableObject.MutableRefSocket
// Kind: ScriptStruct; super: none
struct FMutableRefSocket
{
public:
    std::uint8_t SocketName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t BoneName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t RelativeLocation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t RelativeRotation[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t RelativeScale[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t bForceAlwaysAnimated; // 0x0050 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMutableRefSocket, SocketName) == 0, "Offset mismatch for FMutableRefSocket::SocketName");
static_assert(offsetof(FMutableRefSocket, BoneName) == 4, "Offset mismatch for FMutableRefSocket::BoneName");
static_assert(offsetof(FMutableRefSocket, RelativeLocation) == 8, "Offset mismatch for FMutableRefSocket::RelativeLocation");
static_assert(offsetof(FMutableRefSocket, RelativeRotation) == 32, "Offset mismatch for FMutableRefSocket::RelativeRotation");
static_assert(offsetof(FMutableRefSocket, RelativeScale) == 56, "Offset mismatch for FMutableRefSocket::RelativeScale");
static_assert(offsetof(FMutableRefSocket, bForceAlwaysAnimated) == 80, "Offset mismatch for FMutableRefSocket::bForceAlwaysAnimated");

// /Script/CustomizableObject.MutableRemappedBone
// Kind: ScriptStruct; super: none
struct FMutableRemappedBone
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint32_t Hash; // 0x0004 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FMutableRemappedBone, Name) == 0, "Offset mismatch for FMutableRemappedBone::Name");
static_assert(offsetof(FMutableRemappedBone, Hash) == 4, "Offset mismatch for FMutableRemappedBone::Hash");

// /Script/CustomizableObject.MutableStateData
// Kind: ScriptStruct; super: none
struct FMutableStateData
{
public:
    std::uint8_t StateUIMetadata[0x68]; // 0x0000 (Size: 0x68, Type: StructProperty)
    std::uint8_t bLiveUpdateMode; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableMeshStreaming; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableTextureStreaming; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x5]; // 0x006B
    TMap<void*, void*> ForcedParameterValues; // 0x0070 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FMutableStateData, StateUIMetadata) == 0, "Offset mismatch for FMutableStateData::StateUIMetadata");
static_assert(offsetof(FMutableStateData, bLiveUpdateMode) == 104, "Offset mismatch for FMutableStateData::bLiveUpdateMode");
static_assert(offsetof(FMutableStateData, bDisableMeshStreaming) == 105, "Offset mismatch for FMutableStateData::bDisableMeshStreaming");
static_assert(offsetof(FMutableStateData, bDisableTextureStreaming) == 106, "Offset mismatch for FMutableStateData::bDisableTextureStreaming");
static_assert(offsetof(FMutableStateData, ForcedParameterValues) == 112, "Offset mismatch for FMutableStateData::ForcedParameterValues");

// /Script/CustomizableObject.MutableStateUIMetadata
// Kind: ScriptStruct; super: MutableUIMetadata
struct FMutableStateUIMetadata
{
public:
    FString ObjectFriendlyName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString UISectionName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int32_t UIOrder; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    std::uint8_t UIThumbnail[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    TMap<void*, void*> ExtraInformation; // 0x0048 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ExtraAssets; // 0x0058 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FMutableStateUIMetadata, ObjectFriendlyName) == 0, "Offset mismatch for FMutableStateUIMetadata::ObjectFriendlyName");
static_assert(offsetof(FMutableStateUIMetadata, UISectionName) == 16, "Offset mismatch for FMutableStateUIMetadata::UISectionName");
static_assert(offsetof(FMutableStateUIMetadata, UIOrder) == 32, "Offset mismatch for FMutableStateUIMetadata::UIOrder");
static_assert(offsetof(FMutableStateUIMetadata, UIThumbnail) == 40, "Offset mismatch for FMutableStateUIMetadata::UIThumbnail");
static_assert(offsetof(FMutableStateUIMetadata, ExtraInformation) == 72, "Offset mismatch for FMutableStateUIMetadata::ExtraInformation");
static_assert(offsetof(FMutableStateUIMetadata, ExtraAssets) == 88, "Offset mismatch for FMutableStateUIMetadata::ExtraAssets");

// /Script/CustomizableObject.MutableStreamableBlock
// Kind: ScriptStruct; super: none
struct FMutableStreamableBlock
{
public:
    std::uint32_t FileId; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint16_t Flags; // 0x0004 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    std::uint64_t Offset; // 0x0008 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(FMutableStreamableBlock, FileId) == 0, "Offset mismatch for FMutableStreamableBlock::FileId");
static_assert(offsetof(FMutableStreamableBlock, Flags) == 4, "Offset mismatch for FMutableStreamableBlock::Flags");
static_assert(offsetof(FMutableStreamableBlock, Offset) == 8, "Offset mismatch for FMutableStreamableBlock::Offset");

// /Script/CustomizableObject.MutableUIMetadata
// Kind: ScriptStruct; super: none
struct FMutableUIMetadata
{
public:
    FString ObjectFriendlyName; // 0x0000 (Size: 0x10, Type: StrProperty)
    FString UISectionName; // 0x0010 (Size: 0x10, Type: StrProperty)
    std::int32_t UIOrder; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0024
    std::uint8_t UIThumbnail[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    TMap<void*, void*> ExtraInformation; // 0x0048 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ExtraAssets; // 0x0058 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FMutableUIMetadata, ObjectFriendlyName) == 0, "Offset mismatch for FMutableUIMetadata::ObjectFriendlyName");
static_assert(offsetof(FMutableUIMetadata, UISectionName) == 16, "Offset mismatch for FMutableUIMetadata::UISectionName");
static_assert(offsetof(FMutableUIMetadata, UIOrder) == 32, "Offset mismatch for FMutableUIMetadata::UIOrder");
static_assert(offsetof(FMutableUIMetadata, UIThumbnail) == 40, "Offset mismatch for FMutableUIMetadata::UIThumbnail");
static_assert(offsetof(FMutableUIMetadata, ExtraInformation) == 72, "Offset mismatch for FMutableUIMetadata::ExtraInformation");
static_assert(offsetof(FMutableUIMetadata, ExtraAssets) == 88, "Offset mismatch for FMutableUIMetadata::ExtraAssets");

// /Script/CustomizableObject.ParameterTags
// Kind: ScriptStruct; super: none
struct FParameterTags
{
public:
    TArray<void*> Tags; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ParameterOptions; // 0x0010 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FParameterTags, Tags) == 0, "Offset mismatch for FParameterTags::Tags");
static_assert(offsetof(FParameterTags, ParameterOptions) == 16, "Offset mismatch for FParameterTags::ParameterOptions");

// /Script/CustomizableObject.PendingReleaseMaterialsInfo
// Kind: ScriptStruct; super: none
struct FPendingReleaseMaterialsInfo
{
public:
    TArray<void*> Materials; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t TicksUntilRelease; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPendingReleaseMaterialsInfo, Materials) == 0, "Offset mismatch for FPendingReleaseMaterialsInfo::Materials");
static_assert(offsetof(FPendingReleaseMaterialsInfo, TicksUntilRelease) == 16, "Offset mismatch for FPendingReleaseMaterialsInfo::TicksUntilRelease");

// /Script/CustomizableObject.PreSetSkeletalMeshParams
// Kind: ScriptStruct; super: none
struct FPreSetSkeletalMeshParams
{
public:
    void* Instance; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* SkeletalMesh; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPreSetSkeletalMeshParams, Instance) == 0, "Offset mismatch for FPreSetSkeletalMeshParams::Instance");
static_assert(offsetof(FPreSetSkeletalMeshParams, SkeletalMesh) == 8, "Offset mismatch for FPreSetSkeletalMeshParams::SkeletalMesh");

// /Script/CustomizableObject.UpdateContext
// Kind: ScriptStruct; super: none
struct FUpdateContext
{
public:
    std::uint8_t UpdateResult; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* Instance; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUpdateContext, UpdateResult) == 0, "Offset mismatch for FUpdateContext::UpdateResult");
static_assert(offsetof(FUpdateContext, Instance) == 8, "Offset mismatch for FUpdateContext::Instance");

// /Script/CustomizableObject.CustomizableInstancePrivate
// Kind: Class; super: Object
class UCustomizableInstancePrivate
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> SkeletalMeshes; // 0x0028 (Size: 0x10, Type: MapProperty)
    TArray<void*> Materials; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Textures; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExtensionData; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bKeepOwnershipOfGeneratedResources; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x27]; // 0x0069
    TArray<void*> ComponentsData; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> AnimBpPhysicsAssets; // 0x00A0 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0002[0x8]; // 0x00B0
    std::uint8_t CommittedDescriptor[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCustomizableInstancePrivate, SkeletalMeshes) == 40, "Offset mismatch for UCustomizableInstancePrivate::SkeletalMeshes");
static_assert(offsetof(UCustomizableInstancePrivate, Materials) == 56, "Offset mismatch for UCustomizableInstancePrivate::Materials");
static_assert(offsetof(UCustomizableInstancePrivate, Textures) == 72, "Offset mismatch for UCustomizableInstancePrivate::Textures");
static_assert(offsetof(UCustomizableInstancePrivate, ExtensionData) == 88, "Offset mismatch for UCustomizableInstancePrivate::ExtensionData");
static_assert(offsetof(UCustomizableInstancePrivate, bKeepOwnershipOfGeneratedResources) == 104, "Offset mismatch for UCustomizableInstancePrivate::bKeepOwnershipOfGeneratedResources");
static_assert(offsetof(UCustomizableInstancePrivate, ComponentsData) == 144, "Offset mismatch for UCustomizableInstancePrivate::ComponentsData");
static_assert(offsetof(UCustomizableInstancePrivate, AnimBpPhysicsAssets) == 160, "Offset mismatch for UCustomizableInstancePrivate::AnimBpPhysicsAssets");
static_assert(offsetof(UCustomizableInstancePrivate, CommittedDescriptor) == 184, "Offset mismatch for UCustomizableInstancePrivate::CommittedDescriptor");

// /Script/CustomizableObject.CustomizableObject
// Kind: Class; super: Object
class UCustomizableObject
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t LODSettings[0x40]; // 0x0028 (Size: 0x40, Type: StructProperty)
    std::uint8_t bEnableUseRefSkeletalMeshAsPlaceholder; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableMeshCache; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x006A
    TArray<void*> CustomizableObjectClassTags; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PopulationClassTags; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> CustomizableObjectParametersTags; // 0x0090 (Size: 0x10, Type: MapProperty)
    void* Private; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomizableObject, LODSettings) == 40, "Offset mismatch for UCustomizableObject::LODSettings");
static_assert(offsetof(UCustomizableObject, bEnableUseRefSkeletalMeshAsPlaceholder) == 104, "Offset mismatch for UCustomizableObject::bEnableUseRefSkeletalMeshAsPlaceholder");
static_assert(offsetof(UCustomizableObject, bEnableMeshCache) == 105, "Offset mismatch for UCustomizableObject::bEnableMeshCache");
static_assert(offsetof(UCustomizableObject, CustomizableObjectClassTags) == 112, "Offset mismatch for UCustomizableObject::CustomizableObjectClassTags");
static_assert(offsetof(UCustomizableObject, PopulationClassTags) == 128, "Offset mismatch for UCustomizableObject::PopulationClassTags");
static_assert(offsetof(UCustomizableObject, CustomizableObjectParametersTags) == 144, "Offset mismatch for UCustomizableObject::CustomizableObjectParametersTags");
static_assert(offsetof(UCustomizableObject, Private) == 160, "Offset mismatch for UCustomizableObject::Private");

// /Script/CustomizableObject.CustomizableObjectExtension
// Kind: Class; super: Object
class UCustomizableObjectExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CustomizableObject.CustomizableObjectInstance
// Kind: Class; super: Object
class UCustomizableObjectInstance
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate UpdatedDelegate; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x40]; // 0x0038
    std::uint8_t Descriptor[0xB0]; // 0x0078 (Size: 0xB0, Type: StructProperty)
    void* PrivateData; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* CustomizableObject; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> BoolParameters; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IntParameters; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FloatParameters; // 0x0158 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TextureParameters; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VectorParameters; // 0x0178 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProjectorParameters; // 0x0188 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCustomizableObjectInstance, UpdatedDelegate) == 40, "Offset mismatch for UCustomizableObjectInstance::UpdatedDelegate");
static_assert(offsetof(UCustomizableObjectInstance, Descriptor) == 120, "Offset mismatch for UCustomizableObjectInstance::Descriptor");
static_assert(offsetof(UCustomizableObjectInstance, PrivateData) == 296, "Offset mismatch for UCustomizableObjectInstance::PrivateData");
static_assert(offsetof(UCustomizableObjectInstance, CustomizableObject) == 304, "Offset mismatch for UCustomizableObjectInstance::CustomizableObject");
static_assert(offsetof(UCustomizableObjectInstance, BoolParameters) == 312, "Offset mismatch for UCustomizableObjectInstance::BoolParameters");
static_assert(offsetof(UCustomizableObjectInstance, IntParameters) == 328, "Offset mismatch for UCustomizableObjectInstance::IntParameters");
static_assert(offsetof(UCustomizableObjectInstance, FloatParameters) == 344, "Offset mismatch for UCustomizableObjectInstance::FloatParameters");
static_assert(offsetof(UCustomizableObjectInstance, TextureParameters) == 360, "Offset mismatch for UCustomizableObjectInstance::TextureParameters");
static_assert(offsetof(UCustomizableObjectInstance, VectorParameters) == 376, "Offset mismatch for UCustomizableObjectInstance::VectorParameters");
static_assert(offsetof(UCustomizableObjectInstance, ProjectorParameters) == 392, "Offset mismatch for UCustomizableObjectInstance::ProjectorParameters");

// /Script/CustomizableObject.CustomizableObjectInstanceUsage
// Kind: Class; super: Object
class UCustomizableObjectInstanceUsage
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TWeakObjectPtr<void> UsedSkeletalMeshComponent; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
    void* UsedCustomizableObjectInstance; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t UsedComponentName[0x4]; // 0x0048 (Size: 0x4, Type: NameProperty)
    std::uint8_t bUsedSkipSetReferenceSkeletalMesh; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUsedSkipSetSkeletalMeshOnAttach; // 0x004D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x004E
    void* Private; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomizableObjectInstanceUsage, UsedSkeletalMeshComponent) == 56, "Offset mismatch for UCustomizableObjectInstanceUsage::UsedSkeletalMeshComponent");
static_assert(offsetof(UCustomizableObjectInstanceUsage, UsedCustomizableObjectInstance) == 64, "Offset mismatch for UCustomizableObjectInstanceUsage::UsedCustomizableObjectInstance");
static_assert(offsetof(UCustomizableObjectInstanceUsage, UsedComponentName) == 72, "Offset mismatch for UCustomizableObjectInstanceUsage::UsedComponentName");
static_assert(offsetof(UCustomizableObjectInstanceUsage, bUsedSkipSetReferenceSkeletalMesh) == 76, "Offset mismatch for UCustomizableObjectInstanceUsage::bUsedSkipSetReferenceSkeletalMesh");
static_assert(offsetof(UCustomizableObjectInstanceUsage, bUsedSkipSetSkeletalMeshOnAttach) == 77, "Offset mismatch for UCustomizableObjectInstanceUsage::bUsedSkipSetSkeletalMeshOnAttach");
static_assert(offsetof(UCustomizableObjectInstanceUsage, Private) == 80, "Offset mismatch for UCustomizableObjectInstanceUsage::Private");

// /Script/CustomizableObject.CustomizableObjectInstanceUsagePrivate
// Kind: Class; super: Object
class UCustomizableObjectInstanceUsagePrivate
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CustomizableObject.CustomizableObjectInstanceUserData
// Kind: Class; super: AssetUserData
class UCustomizableObjectInstanceUserData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t AnimationGameplayTag[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    TArray<void*> AnimationSlots; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCustomizableObjectInstanceUserData, AnimationGameplayTag) == 48, "Offset mismatch for UCustomizableObjectInstanceUserData::AnimationGameplayTag");
static_assert(offsetof(UCustomizableObjectInstanceUserData, AnimationSlots) == 80, "Offset mismatch for UCustomizableObjectInstanceUserData::AnimationSlots");

// /Script/CustomizableObject.CustomizableObjectPrivate
// Kind: Class; super: Object
class UCustomizableObjectPrivate
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* ModelStreamableData; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* ModelResources; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0xA8]; // 0x0048
    TArray<void*> ParameterProperties; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    void* ReferencedObjects; // 0x0100 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomizableObjectPrivate, ModelStreamableData) == 56, "Offset mismatch for UCustomizableObjectPrivate::ModelStreamableData");
static_assert(offsetof(UCustomizableObjectPrivate, ModelResources) == 64, "Offset mismatch for UCustomizableObjectPrivate::ModelResources");
static_assert(offsetof(UCustomizableObjectPrivate, ParameterProperties) == 240, "Offset mismatch for UCustomizableObjectPrivate::ParameterProperties");
static_assert(offsetof(UCustomizableObjectPrivate, ReferencedObjects) == 256, "Offset mismatch for UCustomizableObjectPrivate::ReferencedObjects");

// /Script/CustomizableObject.CustomizableObjectSkeletalMesh
// Kind: Class; super: SkeletalMesh
class UCustomizableObjectSkeletalMesh
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    TArray<void*> SourceModels; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00C8
    void* skeleton; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ImportedBounds[0x38]; // 0x00D8 (Size: 0x38, Type: StructProperty)
    std::uint8_t ExtendedBounds[0x38]; // 0x0110 (Size: 0x38, Type: StructProperty)
    std::uint8_t PositiveBoundsExtension[0x18]; // 0x0148 (Size: 0x18, Type: StructProperty)
    std::uint8_t NegativeBoundsExtension[0x18]; // 0x0160 (Size: 0x18, Type: StructProperty)
    TArray<void*> Materials; // 0x0178 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x48]; // 0x0188
    std::uint8_t MinQualityLevelLOD[0x28]; // 0x01D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinLOD[0x18]; // 0x01F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t DisableBelowMinLodStripping[0x18]; // 0x0210 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAlwaysAnimateHiddenBones; // 0x0228 (Size: 0x1, Type: BoolProperty)
    // 0x0228 BoolProperty bEnablePerPolyCollision (shared storage)
    // 0x0228 BoolProperty bHasVertexColors (shared storage)
    // 0x0228 BoolProperty bUseFullPrecisionUVs (shared storage)
    // 0x0228 BoolProperty bUseHighPrecisionTangentBasis (shared storage)
    std::uint8_t Pad_0003[0x7]; // 0x0229
    void* BodySetup; // 0x0230 (Size: 0x8, Type: ObjectProperty)
    void* PhysicsAsset; // 0x0238 (Size: 0x8, Type: ObjectProperty)
    void* ShadowPhysicsAsset; // 0x0240 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> NodeMappingData; // 0x0248 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bSupportRayTracing; // 0x0258 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0259
    std::int32_t RayTracingMinLOD; // 0x025C (Size: 0x4, Type: IntProperty)
    std::uint8_t ClothLODBiasMode; // 0x0260 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0261
    TArray<void*> MorphTargets; // 0x0268 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0006[0xC0]; // 0x0278
    void* PostProcessAnimBlueprint; // 0x0338 (Size: 0x8, Type: ClassProperty)
    std::int32_t PostProcessAnimBPLODThreshold; // 0x0340 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0007[0x4]; // 0x0344
    TArray<void*> MeshClothingAssets; // 0x0348 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SamplingInfo[0x30]; // 0x0358 (Size: 0x30, Type: StructProperty)
    TArray<void*> AssetUserData; // 0x0388 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Sockets; // 0x0398 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0008[0x10]; // 0x03A8
    TArray<void*> SkinWeightProfiles; // 0x03B8 (Size: 0x10, Type: ArrayProperty)
    void* DefaultMeshDeformer; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    void* TargetMeshDeformers; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    void* OverlayMaterial; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    float OverlayMaterialMaxDrawDistance; // 0x03E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ForwardAxis; // 0x03E4 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0009[0x3]; // 0x03E5
    TArray<void*> LODInfo; // 0x03E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCustomizableObjectSkeletalMesh, SourceModels) == 184, "Offset mismatch for UCustomizableObjectSkeletalMesh::SourceModels");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, skeleton) == 208, "Offset mismatch for UCustomizableObjectSkeletalMesh::skeleton");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, ImportedBounds) == 216, "Offset mismatch for UCustomizableObjectSkeletalMesh::ImportedBounds");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, ExtendedBounds) == 272, "Offset mismatch for UCustomizableObjectSkeletalMesh::ExtendedBounds");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, PositiveBoundsExtension) == 328, "Offset mismatch for UCustomizableObjectSkeletalMesh::PositiveBoundsExtension");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, NegativeBoundsExtension) == 352, "Offset mismatch for UCustomizableObjectSkeletalMesh::NegativeBoundsExtension");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, Materials) == 376, "Offset mismatch for UCustomizableObjectSkeletalMesh::Materials");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, MinQualityLevelLOD) == 464, "Offset mismatch for UCustomizableObjectSkeletalMesh::MinQualityLevelLOD");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, MinLOD) == 504, "Offset mismatch for UCustomizableObjectSkeletalMesh::MinLOD");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, DisableBelowMinLodStripping) == 528, "Offset mismatch for UCustomizableObjectSkeletalMesh::DisableBelowMinLodStripping");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, bAlwaysAnimateHiddenBones) == 552, "Offset mismatch for UCustomizableObjectSkeletalMesh::bAlwaysAnimateHiddenBones");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, BodySetup) == 560, "Offset mismatch for UCustomizableObjectSkeletalMesh::BodySetup");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, PhysicsAsset) == 568, "Offset mismatch for UCustomizableObjectSkeletalMesh::PhysicsAsset");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, ShadowPhysicsAsset) == 576, "Offset mismatch for UCustomizableObjectSkeletalMesh::ShadowPhysicsAsset");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, NodeMappingData) == 584, "Offset mismatch for UCustomizableObjectSkeletalMesh::NodeMappingData");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, bSupportRayTracing) == 600, "Offset mismatch for UCustomizableObjectSkeletalMesh::bSupportRayTracing");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, RayTracingMinLOD) == 604, "Offset mismatch for UCustomizableObjectSkeletalMesh::RayTracingMinLOD");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, ClothLODBiasMode) == 608, "Offset mismatch for UCustomizableObjectSkeletalMesh::ClothLODBiasMode");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, MorphTargets) == 616, "Offset mismatch for UCustomizableObjectSkeletalMesh::MorphTargets");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, PostProcessAnimBlueprint) == 824, "Offset mismatch for UCustomizableObjectSkeletalMesh::PostProcessAnimBlueprint");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, PostProcessAnimBPLODThreshold) == 832, "Offset mismatch for UCustomizableObjectSkeletalMesh::PostProcessAnimBPLODThreshold");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, MeshClothingAssets) == 840, "Offset mismatch for UCustomizableObjectSkeletalMesh::MeshClothingAssets");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, SamplingInfo) == 856, "Offset mismatch for UCustomizableObjectSkeletalMesh::SamplingInfo");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, AssetUserData) == 904, "Offset mismatch for UCustomizableObjectSkeletalMesh::AssetUserData");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, Sockets) == 920, "Offset mismatch for UCustomizableObjectSkeletalMesh::Sockets");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, SkinWeightProfiles) == 952, "Offset mismatch for UCustomizableObjectSkeletalMesh::SkinWeightProfiles");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, DefaultMeshDeformer) == 968, "Offset mismatch for UCustomizableObjectSkeletalMesh::DefaultMeshDeformer");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, TargetMeshDeformers) == 976, "Offset mismatch for UCustomizableObjectSkeletalMesh::TargetMeshDeformers");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, OverlayMaterial) == 984, "Offset mismatch for UCustomizableObjectSkeletalMesh::OverlayMaterial");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, OverlayMaterialMaxDrawDistance) == 992, "Offset mismatch for UCustomizableObjectSkeletalMesh::OverlayMaterialMaxDrawDistance");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, ForwardAxis) == 996, "Offset mismatch for UCustomizableObjectSkeletalMesh::ForwardAxis");
static_assert(offsetof(UCustomizableObjectSkeletalMesh, LODInfo) == 1000, "Offset mismatch for UCustomizableObjectSkeletalMesh::LODInfo");

// /Script/CustomizableObject.CustomizableObjectSystem
// Kind: Class; super: Object
class UCustomizableObjectSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Private; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomizableObjectSystem, Private) == 40, "Offset mismatch for UCustomizableObjectSystem::Private");

// /Script/CustomizableObject.CustomizableObjectSystemPrivate
// Kind: Class; super: Object
class UCustomizableObjectSystemPrivate
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CustomizableObject.CustomizableObjectUserDataAssetCollector
// Kind: Class; super: Interface
class UCustomizableObjectUserDataAssetCollector
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CustomizableObject.CustomizableSkeletalComponent
// Kind: Class; super: SceneComponent
class UCustomizableSkeletalComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    std::int32_t ComponentIndex; // 0x0240 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0244
    void* CustomizableObjectInstance; // 0x0248 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ComponentName[0x4]; // 0x0250 (Size: 0x4, Type: NameProperty)
    std::uint8_t bSkipSetReferenceSkeletalMesh; // 0x0254 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSkipSetSkeletalMeshOnAttach; // 0x0255 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0256
    void* Private; // 0x0258 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomizableSkeletalComponent, ComponentIndex) == 576, "Offset mismatch for UCustomizableSkeletalComponent::ComponentIndex");
static_assert(offsetof(UCustomizableSkeletalComponent, CustomizableObjectInstance) == 584, "Offset mismatch for UCustomizableSkeletalComponent::CustomizableObjectInstance");
static_assert(offsetof(UCustomizableSkeletalComponent, ComponentName) == 592, "Offset mismatch for UCustomizableSkeletalComponent::ComponentName");
static_assert(offsetof(UCustomizableSkeletalComponent, bSkipSetReferenceSkeletalMesh) == 596, "Offset mismatch for UCustomizableSkeletalComponent::bSkipSetReferenceSkeletalMesh");
static_assert(offsetof(UCustomizableSkeletalComponent, bSkipSetSkeletalMeshOnAttach) == 597, "Offset mismatch for UCustomizableSkeletalComponent::bSkipSetSkeletalMeshOnAttach");
static_assert(offsetof(UCustomizableSkeletalComponent, Private) == 600, "Offset mismatch for UCustomizableSkeletalComponent::Private");

// /Script/CustomizableObject.CustomizableSkeletalComponentPrivate
// Kind: Class; super: Object
class UCustomizableSkeletalComponentPrivate
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* InstanceUsage; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomizableSkeletalComponentPrivate, InstanceUsage) == 40, "Offset mismatch for UCustomizableSkeletalComponentPrivate::InstanceUsage");

// /Script/CustomizableObject.CustomizableSkeletalMeshActor
// Kind: Class; super: SkeletalMeshActor
class UCustomizableSkeletalMeshActor
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    TArray<void*> CustomizableSkeletalComponents; // 0x02B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SkeletalMeshComponents; // 0x02C0 (Size: 0x10, Type: ArrayProperty)
    void* DebugMaterial; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x02D8
    void* Private; // 0x02E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCustomizableSkeletalMeshActor, CustomizableSkeletalComponents) == 688, "Offset mismatch for UCustomizableSkeletalMeshActor::CustomizableSkeletalComponents");
static_assert(offsetof(UCustomizableSkeletalMeshActor, SkeletalMeshComponents) == 704, "Offset mismatch for UCustomizableSkeletalMeshActor::SkeletalMeshComponents");
static_assert(offsetof(UCustomizableSkeletalMeshActor, DebugMaterial) == 720, "Offset mismatch for UCustomizableSkeletalMeshActor::DebugMaterial");
static_assert(offsetof(UCustomizableSkeletalMeshActor, Private) == 736, "Offset mismatch for UCustomizableSkeletalMeshActor::Private");

// /Script/CustomizableObject.CustomizableSkeletalMeshActorPrivate
// Kind: Class; super: Object
class UCustomizableSkeletalMeshActorPrivate
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CustomizableObject.DGGUI
// Kind: Class; super: UserWidget
class UDGGUI
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t ColorAndOpacity[0x10]; // 0x01A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ColorAndOpacityDelegate[0xC]; // 0x01B0 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t ForegroundColor[0x14]; // 0x01BC (Size: 0x14, Type: StructProperty)
    FScriptDelegate ForegroundColorDelegate; // 0x01D0 (Size: 0x10, Type: DelegateProperty)
    FMulticastInlineDelegate OnVisibilityChanged; // 0x01E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x30]; // 0x01F0
    std::uint8_t Padding[0x10]; // 0x0220 (Size: 0x10, Type: StructProperty)
    std::int32_t Priority; // 0x0230 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAutomaticallyRegisterInputOnConstruction; // 0x0234 (Size: 0x1, Type: BoolProperty)
    // 0x0234 BoolProperty bIsFocusable (shared storage)
    // 0x0234 BoolProperty bStopAction (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0235
    TArray<void*> QueuedWidgetAnimationTransitions; // 0x0238 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveSequencePlayers; // 0x0248 (Size: 0x10, Type: ArrayProperty)
    void* AnimationTickManager; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> StoppedSequencePlayers; // 0x0260 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x18]; // 0x0270
    TArray<void*> NamedSlotBindings; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Extensions; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    void* WidgetTree; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasScriptImplementedPaint; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bHasScriptImplementedTick (shared storage)
    std::uint8_t Pad_0004[0x17]; // 0x02B1
    std::uint8_t TickFrequency; // 0x02C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x02C9
    std::uint8_t DesiredFocusWidget[0xC]; // 0x02CC (Size: 0xC, Type: StructProperty)
    void* InputComponent; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AnimationCallbacks; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDGGUI, ColorAndOpacity) == 416, "Offset mismatch for UDGGUI::ColorAndOpacity");
static_assert(offsetof(UDGGUI, ColorAndOpacityDelegate) == 432, "Offset mismatch for UDGGUI::ColorAndOpacityDelegate");
static_assert(offsetof(UDGGUI, ForegroundColor) == 444, "Offset mismatch for UDGGUI::ForegroundColor");
static_assert(offsetof(UDGGUI, ForegroundColorDelegate) == 464, "Offset mismatch for UDGGUI::ForegroundColorDelegate");
static_assert(offsetof(UDGGUI, OnVisibilityChanged) == 480, "Offset mismatch for UDGGUI::OnVisibilityChanged");
static_assert(offsetof(UDGGUI, Padding) == 544, "Offset mismatch for UDGGUI::Padding");
static_assert(offsetof(UDGGUI, Priority) == 560, "Offset mismatch for UDGGUI::Priority");
static_assert(offsetof(UDGGUI, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UDGGUI::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UDGGUI, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UDGGUI::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UDGGUI, ActiveSequencePlayers) == 584, "Offset mismatch for UDGGUI::ActiveSequencePlayers");
static_assert(offsetof(UDGGUI, AnimationTickManager) == 600, "Offset mismatch for UDGGUI::AnimationTickManager");
static_assert(offsetof(UDGGUI, StoppedSequencePlayers) == 608, "Offset mismatch for UDGGUI::StoppedSequencePlayers");
static_assert(offsetof(UDGGUI, NamedSlotBindings) == 648, "Offset mismatch for UDGGUI::NamedSlotBindings");
static_assert(offsetof(UDGGUI, Extensions) == 664, "Offset mismatch for UDGGUI::Extensions");
static_assert(offsetof(UDGGUI, WidgetTree) == 680, "Offset mismatch for UDGGUI::WidgetTree");
static_assert(offsetof(UDGGUI, bHasScriptImplementedPaint) == 688, "Offset mismatch for UDGGUI::bHasScriptImplementedPaint");
static_assert(offsetof(UDGGUI, TickFrequency) == 712, "Offset mismatch for UDGGUI::TickFrequency");
static_assert(offsetof(UDGGUI, DesiredFocusWidget) == 716, "Offset mismatch for UDGGUI::DesiredFocusWidget");
static_assert(offsetof(UDGGUI, InputComponent) == 728, "Offset mismatch for UDGGUI::InputComponent");
static_assert(offsetof(UDGGUI, AnimationCallbacks) == 736, "Offset mismatch for UDGGUI::AnimationCallbacks");

// /Script/CustomizableObject.ModelResources
// Kind: Class; super: Object
class UModelResources
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ReferenceSkeletalMeshesData; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> PassthroughObjects; // 0x0038 (Size: 0x10, Type: MapProperty)
    TArray<void*> AnimBPs; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AnimBpOverridePhysiscAssetsInfo; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ImageProperties; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ParameterUIDataMap; // 0x0078 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> StateUIDataMap; // 0x0088 (Size: 0x10, Type: MapProperty)
    std::uint8_t bAllowClothingPhysicsEditsPropagation; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0099
    TMap<void*, void*> ExternalOperations; // 0x00A0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ExternalOperationVersions; // 0x00B0 (Size: 0x10, Type: MapProperty)
    TArray<void*> ComponentNamesPerObjectComponent; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> TextureParameterDefaultValues; // 0x00D0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> SkeletalMeshParameterDefaultValues; // 0x00E0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> MaterialParameterDefaultValues; // 0x00F0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ExternalTypeParameterDefaultValues; // 0x0100 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> ExternalTypeParameterTypes; // 0x0110 (Size: 0x10, Type: MapProperty)
    FString ReleaseVersion; // 0x0120 (Size: 0x10, Type: StrProperty)
    std::int32_t CodeVersion; // 0x0130 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UModelResources, ReferenceSkeletalMeshesData) == 40, "Offset mismatch for UModelResources::ReferenceSkeletalMeshesData");
static_assert(offsetof(UModelResources, PassthroughObjects) == 56, "Offset mismatch for UModelResources::PassthroughObjects");
static_assert(offsetof(UModelResources, AnimBPs) == 72, "Offset mismatch for UModelResources::AnimBPs");
static_assert(offsetof(UModelResources, AnimBpOverridePhysiscAssetsInfo) == 88, "Offset mismatch for UModelResources::AnimBpOverridePhysiscAssetsInfo");
static_assert(offsetof(UModelResources, ImageProperties) == 104, "Offset mismatch for UModelResources::ImageProperties");
static_assert(offsetof(UModelResources, ParameterUIDataMap) == 120, "Offset mismatch for UModelResources::ParameterUIDataMap");
static_assert(offsetof(UModelResources, StateUIDataMap) == 136, "Offset mismatch for UModelResources::StateUIDataMap");
static_assert(offsetof(UModelResources, bAllowClothingPhysicsEditsPropagation) == 152, "Offset mismatch for UModelResources::bAllowClothingPhysicsEditsPropagation");
static_assert(offsetof(UModelResources, ExternalOperations) == 160, "Offset mismatch for UModelResources::ExternalOperations");
static_assert(offsetof(UModelResources, ExternalOperationVersions) == 176, "Offset mismatch for UModelResources::ExternalOperationVersions");
static_assert(offsetof(UModelResources, ComponentNamesPerObjectComponent) == 192, "Offset mismatch for UModelResources::ComponentNamesPerObjectComponent");
static_assert(offsetof(UModelResources, TextureParameterDefaultValues) == 208, "Offset mismatch for UModelResources::TextureParameterDefaultValues");
static_assert(offsetof(UModelResources, SkeletalMeshParameterDefaultValues) == 224, "Offset mismatch for UModelResources::SkeletalMeshParameterDefaultValues");
static_assert(offsetof(UModelResources, MaterialParameterDefaultValues) == 240, "Offset mismatch for UModelResources::MaterialParameterDefaultValues");
static_assert(offsetof(UModelResources, ExternalTypeParameterDefaultValues) == 256, "Offset mismatch for UModelResources::ExternalTypeParameterDefaultValues");
static_assert(offsetof(UModelResources, ExternalTypeParameterTypes) == 272, "Offset mismatch for UModelResources::ExternalTypeParameterTypes");
static_assert(offsetof(UModelResources, ReleaseVersion) == 288, "Offset mismatch for UModelResources::ReleaseVersion");
static_assert(offsetof(UModelResources, CodeVersion) == 304, "Offset mismatch for UModelResources::CodeVersion");

// /Script/CustomizableObject.ModelStreamableData
// Kind: Class; super: Object
class UModelStreamableData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CustomizableObject.MutableTextureMipDataProviderFactory
// Kind: Class; super: TextureMipDataProviderFactory
class UMutableTextureMipDataProviderFactory
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* CustomizableObjectInstance; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMutableTextureMipDataProviderFactory, CustomizableObjectInstance) == 40, "Offset mismatch for UMutableTextureMipDataProviderFactory::CustomizableObjectInstance");
