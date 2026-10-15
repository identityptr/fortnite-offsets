/**
 * decamp dumper generated SDK
 * Package: /Script/AssembledMeshSystem
 */
#pragma once
#include "Basic.h"

// /Script/AssembledMeshSystem.AssembledComponentReferences
// Kind: ScriptStruct; super: none
struct FAssembledComponentReferences
{
public:
    void* SkeletalMeshComponent; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* CustomizableObjectInstanceUsage; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AssembledMeshSchemaTag[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAssembledComponentReferences, SkeletalMeshComponent) == 0, "Offset mismatch for FAssembledComponentReferences::SkeletalMeshComponent");
static_assert(offsetof(FAssembledComponentReferences, CustomizableObjectInstanceUsage) == 8, "Offset mismatch for FAssembledComponentReferences::CustomizableObjectInstanceUsage");
static_assert(offsetof(FAssembledComponentReferences, AssembledMeshSchemaTag) == 16, "Offset mismatch for FAssembledComponentReferences::AssembledMeshSchemaTag");

// /Script/AssembledMeshSystem.AssembledMaterialsOverride
// Kind: ScriptStruct; super: none
struct FAssembledMaterialsOverride
{
public:
    TArray<void*> Materials; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAssembledMaterialsOverride, Materials) == 0, "Offset mismatch for FAssembledMaterialsOverride::Materials");

// /Script/AssembledMeshSystem.AssembledMeshAttachmentRules
// Kind: ScriptStruct; super: none
struct FAssembledMeshAttachmentRules
{
public:
    FName AttachSocketName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t AttachOffset[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t AttachRotation[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t AttachScale[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAssembledMeshAttachmentRules, AttachSocketName) == 0, "Offset mismatch for FAssembledMeshAttachmentRules::AttachSocketName");
static_assert(offsetof(FAssembledMeshAttachmentRules, AttachOffset) == 8, "Offset mismatch for FAssembledMeshAttachmentRules::AttachOffset");
static_assert(offsetof(FAssembledMeshAttachmentRules, AttachRotation) == 32, "Offset mismatch for FAssembledMeshAttachmentRules::AttachRotation");
static_assert(offsetof(FAssembledMeshAttachmentRules, AttachScale) == 56, "Offset mismatch for FAssembledMeshAttachmentRules::AttachScale");

// /Script/AssembledMeshSystem.AssembledMeshSchemaData
// Kind: ScriptStruct; super: none
struct FAssembledMeshSchemaData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AssembledMeshSystem.AssembledMeshSchemaData_Icons
// Kind: ScriptStruct; super: AssembledMeshSchemaData
struct FAssembledMeshSchemaData_Icons
{
public:
    std::uint8_t WidePreviewImage[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SmallPreviewImage[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LargePreviewImage[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> FullScreenImage; // 0x0060 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FAssembledMeshSchemaData_Icons, WidePreviewImage) == 0, "Offset mismatch for FAssembledMeshSchemaData_Icons::WidePreviewImage");
static_assert(offsetof(FAssembledMeshSchemaData_Icons, SmallPreviewImage) == 32, "Offset mismatch for FAssembledMeshSchemaData_Icons::SmallPreviewImage");
static_assert(offsetof(FAssembledMeshSchemaData_Icons, LargePreviewImage) == 64, "Offset mismatch for FAssembledMeshSchemaData_Icons::LargePreviewImage");
static_assert(offsetof(FAssembledMeshSchemaData_Icons, FullScreenImage) == 96, "Offset mismatch for FAssembledMeshSchemaData_Icons::FullScreenImage");

// /Script/AssembledMeshSystem.AssembledTextureOverrideData
// Kind: ScriptStruct; super: none
struct FAssembledTextureOverrideData
{
public:
    FName ParamName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TSoftObjectPtr<void> Texture; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FAssembledTextureOverrideData, ParamName) == 0, "Offset mismatch for FAssembledTextureOverrideData::ParamName");
static_assert(offsetof(FAssembledTextureOverrideData, Texture) == 8, "Offset mismatch for FAssembledTextureOverrideData::Texture");

// /Script/AssembledMeshSystem.BaseParamData
// Kind: ScriptStruct; super: none
struct FBaseParamData
{
public:
    FString ParamName; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FBaseParamData, ParamName) == 0, "Offset mismatch for FBaseParamData::ParamName");

// /Script/AssembledMeshSystem.FloatParamData
// Kind: ScriptStruct; super: BaseParamData
struct FFloatParamData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    float FloatValue; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MinFloatValue; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float MaxFloatValue; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFloatParamData, FloatValue) == 16, "Offset mismatch for FFloatParamData::FloatValue");
static_assert(offsetof(FFloatParamData, MinFloatValue) == 20, "Offset mismatch for FFloatParamData::MinFloatValue");
static_assert(offsetof(FFloatParamData, MaxFloatValue) == 24, "Offset mismatch for FFloatParamData::MaxFloatValue");

// /Script/AssembledMeshSystem.IntParamData
// Kind: ScriptStruct; super: BaseParamData
struct FIntParamData
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> ParamOptions; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FIntParamData, ParamOptions) == 16, "Offset mismatch for FIntParamData::ParamOptions");

// /Script/AssembledMeshSystem.AssembledMeshSchema
// Kind: Class; super: PrimaryDataAsset
class UAssembledMeshSchema
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t MeshSchemaTag[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t CustomizableObjectInstance[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CustomizableObject[0x20]; // 0x0050 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t ComponentIndex; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::uint8_t ComponentName[0x4]; // 0x0074 (Size: 0x4, Type: NameProperty)
    std::uint8_t SkeletalMesh[0x20]; // 0x0078 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> SkeletalMeshes; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverrideMaterialsPerMesh; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverrideTextures; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> SelectedIntParams; // 0x00C8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> SelectedFloatParams; // 0x00D8 (Size: 0x10, Type: MapProperty)
    std::uint8_t AttachmentRules[0x50]; // 0x00E8 (Size: 0x50, Type: StructProperty)
    std::uint8_t AnimClass[0x20]; // 0x0138 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t SoundLibraryTags[0x20]; // 0x0158 (Size: 0x20, Type: StructProperty)
    TArray<void*> AdditionalData; // 0x0178 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAssembledMeshSchema, MeshSchemaTag) == 40, "Offset mismatch for UAssembledMeshSchema::MeshSchemaTag");
static_assert(offsetof(UAssembledMeshSchema, CustomizableObjectInstance) == 48, "Offset mismatch for UAssembledMeshSchema::CustomizableObjectInstance");
static_assert(offsetof(UAssembledMeshSchema, CustomizableObject) == 80, "Offset mismatch for UAssembledMeshSchema::CustomizableObject");
static_assert(offsetof(UAssembledMeshSchema, ComponentIndex) == 112, "Offset mismatch for UAssembledMeshSchema::ComponentIndex");
static_assert(offsetof(UAssembledMeshSchema, ComponentName) == 116, "Offset mismatch for UAssembledMeshSchema::ComponentName");
static_assert(offsetof(UAssembledMeshSchema, SkeletalMesh) == 120, "Offset mismatch for UAssembledMeshSchema::SkeletalMesh");
static_assert(offsetof(UAssembledMeshSchema, SkeletalMeshes) == 152, "Offset mismatch for UAssembledMeshSchema::SkeletalMeshes");
static_assert(offsetof(UAssembledMeshSchema, OverrideMaterialsPerMesh) == 168, "Offset mismatch for UAssembledMeshSchema::OverrideMaterialsPerMesh");
static_assert(offsetof(UAssembledMeshSchema, OverrideTextures) == 184, "Offset mismatch for UAssembledMeshSchema::OverrideTextures");
static_assert(offsetof(UAssembledMeshSchema, SelectedIntParams) == 200, "Offset mismatch for UAssembledMeshSchema::SelectedIntParams");
static_assert(offsetof(UAssembledMeshSchema, SelectedFloatParams) == 216, "Offset mismatch for UAssembledMeshSchema::SelectedFloatParams");
static_assert(offsetof(UAssembledMeshSchema, AttachmentRules) == 232, "Offset mismatch for UAssembledMeshSchema::AttachmentRules");
static_assert(offsetof(UAssembledMeshSchema, AnimClass) == 312, "Offset mismatch for UAssembledMeshSchema::AnimClass");
static_assert(offsetof(UAssembledMeshSchema, SoundLibraryTags) == 344, "Offset mismatch for UAssembledMeshSchema::SoundLibraryTags");
static_assert(offsetof(UAssembledMeshSchema, AdditionalData) == 376, "Offset mismatch for UAssembledMeshSchema::AdditionalData");

// /Script/AssembledMeshSystem.AssembledMeshUserComponent
// Kind: Class; super: ActorComponent
class UAssembledMeshUserComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> LoadedAssets; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x30]; // 0x00D0
    TArray<void*> MeshParts; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MeshPartSoftRefs; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0120
    TArray<void*> MeshPartComponents; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bDuplicateCOIs; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAssignMeshPartsOnBeginPlay; // 0x0141 (Size: 0x1, Type: BoolProperty)
    // 0x0141 BoolProperty bSetRootMeshOnAttachComponent (shared storage)
};

static_assert(offsetof(UAssembledMeshUserComponent, LoadedAssets) == 192, "Offset mismatch for UAssembledMeshUserComponent::LoadedAssets");
static_assert(offsetof(UAssembledMeshUserComponent, MeshParts) == 256, "Offset mismatch for UAssembledMeshUserComponent::MeshParts");
static_assert(offsetof(UAssembledMeshUserComponent, MeshPartSoftRefs) == 272, "Offset mismatch for UAssembledMeshUserComponent::MeshPartSoftRefs");
static_assert(offsetof(UAssembledMeshUserComponent, MeshPartComponents) == 304, "Offset mismatch for UAssembledMeshUserComponent::MeshPartComponents");
static_assert(offsetof(UAssembledMeshUserComponent, bDuplicateCOIs) == 320, "Offset mismatch for UAssembledMeshUserComponent::bDuplicateCOIs");
static_assert(offsetof(UAssembledMeshUserComponent, bAssignMeshPartsOnBeginPlay) == 321, "Offset mismatch for UAssembledMeshUserComponent::bAssignMeshPartsOnBeginPlay");

// /Script/AssembledMeshSystem.AssembledMeshUser_AttachToComponentSpecifier
// Kind: Class; super: Interface
class UAssembledMeshUser_AttachToComponentSpecifier
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AssembledMeshSystem.HeadAccDataAssetLink
// Kind: Class; super: DataAssetLink
class UHeadAccDataAssetLink
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t DataAsset[0x20]; // 0x0080 (Size: 0x20, Type: SoftObjectProperty)
    void* DataAssetCached; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UHeadAccDataAssetLink, DataAsset) == 128, "Offset mismatch for UHeadAccDataAssetLink::DataAsset");
static_assert(offsetof(UHeadAccDataAssetLink, DataAssetCached) == 160, "Offset mismatch for UHeadAccDataAssetLink::DataAssetCached");

// /Script/AssembledMeshSystem.HipAccDataAssetLink
// Kind: Class; super: DataAssetLink
class UHipAccDataAssetLink
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t DataAsset[0x20]; // 0x0080 (Size: 0x20, Type: SoftObjectProperty)
    void* DataAssetCached; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UHipAccDataAssetLink, DataAsset) == 128, "Offset mismatch for UHipAccDataAssetLink::DataAsset");
static_assert(offsetof(UHipAccDataAssetLink, DataAssetCached) == 160, "Offset mismatch for UHipAccDataAssetLink::DataAssetCached");

// /Script/AssembledMeshSystem.NeckAccDataAssetLink
// Kind: Class; super: DataAssetLink
class UNeckAccDataAssetLink
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t DataAsset[0x20]; // 0x0080 (Size: 0x20, Type: SoftObjectProperty)
    void* DataAssetCached; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNeckAccDataAssetLink, DataAsset) == 128, "Offset mismatch for UNeckAccDataAssetLink::DataAsset");
static_assert(offsetof(UNeckAccDataAssetLink, DataAssetCached) == 160, "Offset mismatch for UNeckAccDataAssetLink::DataAssetCached");
