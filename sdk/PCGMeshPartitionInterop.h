/**
 * decamp dumper generated SDK
 * Package: /Script/PCGMeshPartitionInterop
 */
#pragma once
#include "Basic.h"

// /Script/PCGMeshPartitionInterop.PCGDataTypeInfoMeshTerrainSection
// Kind: ScriptStruct; super: PCGDataTypeInfo
struct FPCGDataTypeInfoMeshTerrainSection
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCGMeshPartitionInterop.PCGGlobalSelectionKey
// Kind: ScriptStruct; super: PCGCustomSelectionKey
struct FPCGGlobalSelectionKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PCGMeshPartitionInterop.PCGLayerSelectionKey
// Kind: ScriptStruct; super: PCGCustomSelectionKey
struct FPCGLayerSelectionKey
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t QueryType; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t LayerName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    double SubPriority; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsFromPrevious; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0019
    std::uint8_t KeyType; // 0x001C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FPCGLayerSelectionKey, QueryType) == 8, "Offset mismatch for FPCGLayerSelectionKey::QueryType");
static_assert(offsetof(FPCGLayerSelectionKey, LayerName) == 12, "Offset mismatch for FPCGLayerSelectionKey::LayerName");
static_assert(offsetof(FPCGLayerSelectionKey, SubPriority) == 16, "Offset mismatch for FPCGLayerSelectionKey::SubPriority");
static_assert(offsetof(FPCGLayerSelectionKey, bIsFromPrevious) == 24, "Offset mismatch for FPCGLayerSelectionKey::bIsFromPrevious");
static_assert(offsetof(FPCGLayerSelectionKey, KeyType) == 28, "Offset mismatch for FPCGLayerSelectionKey::KeyType");

// /Script/PCGMeshPartitionInterop.PCGPatchInstanceModifierDescriptor
// Kind: ScriptStruct; super: none
struct FPCGPatchInstanceModifierDescriptor
{
public:
    float Radius; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxZDistance; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    double Priority; // 0x0010 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Type[0x4]; // 0x0018 (Size: 0x4, Type: NameProperty)
    std::uint8_t bWriteToWeightChannel; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x001D
    FName WeightChannelName; // 0x0020 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPCGPatchInstanceModifierDescriptor, Radius) == 0, "Offset mismatch for FPCGPatchInstanceModifierDescriptor::Radius");
static_assert(offsetof(FPCGPatchInstanceModifierDescriptor, Falloff) == 4, "Offset mismatch for FPCGPatchInstanceModifierDescriptor::Falloff");
static_assert(offsetof(FPCGPatchInstanceModifierDescriptor, MaxZDistance) == 8, "Offset mismatch for FPCGPatchInstanceModifierDescriptor::MaxZDistance");
static_assert(offsetof(FPCGPatchInstanceModifierDescriptor, Priority) == 16, "Offset mismatch for FPCGPatchInstanceModifierDescriptor::Priority");
static_assert(offsetof(FPCGPatchInstanceModifierDescriptor, Type) == 24, "Offset mismatch for FPCGPatchInstanceModifierDescriptor::Type");
static_assert(offsetof(FPCGPatchInstanceModifierDescriptor, bWriteToWeightChannel) == 28, "Offset mismatch for FPCGPatchInstanceModifierDescriptor::bWriteToWeightChannel");
static_assert(offsetof(FPCGPatchInstanceModifierDescriptor, WeightChannelName) == 32, "Offset mismatch for FPCGPatchInstanceModifierDescriptor::WeightChannelName");

// /Script/PCGMeshPartitionInterop.PCGPatchInstanceModifierSpawnerParams
// Kind: ScriptStruct; super: none
struct FPCGPatchInstanceModifierSpawnerParams
{
public:
    float Radius; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x0004 (Size: 0x4, Type: FloatProperty)
    double Priority; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Type[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    float MaxZDistance; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bWriteToWeightChannel; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0019
    FName WeightChannelName; // 0x001C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPCGPatchInstanceModifierSpawnerParams, Radius) == 0, "Offset mismatch for FPCGPatchInstanceModifierSpawnerParams::Radius");
static_assert(offsetof(FPCGPatchInstanceModifierSpawnerParams, Falloff) == 4, "Offset mismatch for FPCGPatchInstanceModifierSpawnerParams::Falloff");
static_assert(offsetof(FPCGPatchInstanceModifierSpawnerParams, Priority) == 8, "Offset mismatch for FPCGPatchInstanceModifierSpawnerParams::Priority");
static_assert(offsetof(FPCGPatchInstanceModifierSpawnerParams, Type) == 16, "Offset mismatch for FPCGPatchInstanceModifierSpawnerParams::Type");
static_assert(offsetof(FPCGPatchInstanceModifierSpawnerParams, MaxZDistance) == 20, "Offset mismatch for FPCGPatchInstanceModifierSpawnerParams::MaxZDistance");
static_assert(offsetof(FPCGPatchInstanceModifierSpawnerParams, bWriteToWeightChannel) == 24, "Offset mismatch for FPCGPatchInstanceModifierSpawnerParams::bWriteToWeightChannel");
static_assert(offsetof(FPCGPatchInstanceModifierSpawnerParams, WeightChannelName) == 28, "Offset mismatch for FPCGPatchInstanceModifierSpawnerParams::WeightChannelName");

// /Script/PCGMeshPartitionInterop.PCGQueryParams
// Kind: ScriptStruct; super: none
struct FPCGQueryParams
{
public:
    std::uint8_t RayOrigin[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t RayDirection[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    double RayLength; // 0x0030 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t QueryType; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0039
    std::uint8_t LayerName[0x4]; // 0x003C (Size: 0x4, Type: NameProperty)
    double SubPriority; // 0x0040 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bInclusive; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideDefaultParams; // 0x0049 (Size: 0x1, Type: BoolProperty)
    // 0x0049 BoolProperty bRecomputeVertexNormals (shared storage)
    std::uint8_t Pad_0001[0x6]; // 0x004A
    TArray<void*> Channels; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bAcceptAnyHitSection; // 0x0060 (Size: 0x1, Type: BoolProperty)
    // 0x0060 BoolProperty bGetDistance (shared storage)
    // 0x0060 BoolProperty bGetFaceIndex (shared storage)
    // 0x0060 BoolProperty bGetImpactNormal (shared storage)
    // 0x0060 BoolProperty bGetImpactPoint (shared storage)
    // 0x0060 BoolProperty bGetUVCoords (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x0061
    TSoftObjectPtr<void> MegaMeshOverride; // 0x0068 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FPCGQueryParams, RayOrigin) == 0, "Offset mismatch for FPCGQueryParams::RayOrigin");
static_assert(offsetof(FPCGQueryParams, RayDirection) == 24, "Offset mismatch for FPCGQueryParams::RayDirection");
static_assert(offsetof(FPCGQueryParams, RayLength) == 48, "Offset mismatch for FPCGQueryParams::RayLength");
static_assert(offsetof(FPCGQueryParams, QueryType) == 56, "Offset mismatch for FPCGQueryParams::QueryType");
static_assert(offsetof(FPCGQueryParams, LayerName) == 60, "Offset mismatch for FPCGQueryParams::LayerName");
static_assert(offsetof(FPCGQueryParams, SubPriority) == 64, "Offset mismatch for FPCGQueryParams::SubPriority");
static_assert(offsetof(FPCGQueryParams, bInclusive) == 72, "Offset mismatch for FPCGQueryParams::bInclusive");
static_assert(offsetof(FPCGQueryParams, bOverrideDefaultParams) == 73, "Offset mismatch for FPCGQueryParams::bOverrideDefaultParams");
static_assert(offsetof(FPCGQueryParams, Channels) == 80, "Offset mismatch for FPCGQueryParams::Channels");
static_assert(offsetof(FPCGQueryParams, bAcceptAnyHitSection) == 96, "Offset mismatch for FPCGQueryParams::bAcceptAnyHitSection");
static_assert(offsetof(FPCGQueryParams, MegaMeshOverride) == 104, "Offset mismatch for FPCGQueryParams::MegaMeshOverride");

// /Script/PCGMeshPartitionInterop.PCGBakeMeshTerrainSectionMeshSettings
// Kind: Class; super: PCGSettings
class UPCGBakeMeshTerrainSectionMeshSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t BakeParams[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGBakeMeshTerrainSectionMeshSettings, BakeParams) == 168, "Offset mismatch for UPCGBakeMeshTerrainSectionMeshSettings::BakeParams");

// /Script/PCGMeshPartitionInterop.PCGDataComponent
// Kind: Class; super: ActorComponent
class UPCGDataComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UPCGDataComponent, PrimaryComponentTick) == 56, "Offset mismatch for UPCGDataComponent::PrimaryComponentTick");
static_assert(offsetof(UPCGDataComponent, ComponentTags) == 104, "Offset mismatch for UPCGDataComponent::ComponentTags");
static_assert(offsetof(UPCGDataComponent, AssetUserData) == 120, "Offset mismatch for UPCGDataComponent::AssetUserData");
static_assert(offsetof(UPCGDataComponent, UCSSerializationIndex) == 144, "Offset mismatch for UPCGDataComponent::UCSSerializationIndex");
static_assert(offsetof(UPCGDataComponent, bNetAddressable) == 152, "Offset mismatch for UPCGDataComponent::bNetAddressable");
static_assert(offsetof(UPCGDataComponent, bAutoActivate) == 154, "Offset mismatch for UPCGDataComponent::bAutoActivate");
static_assert(offsetof(UPCGDataComponent, bIsEditorOnly) == 155, "Offset mismatch for UPCGDataComponent::bIsEditorOnly");
static_assert(offsetof(UPCGDataComponent, CreationMethod) == 185, "Offset mismatch for UPCGDataComponent::CreationMethod");
static_assert(offsetof(UPCGDataComponent, OnComponentActivated) == 186, "Offset mismatch for UPCGDataComponent::OnComponentActivated");
static_assert(offsetof(UPCGDataComponent, OnComponentDeactivated) == 187, "Offset mismatch for UPCGDataComponent::OnComponentDeactivated");

// /Script/PCGMeshPartitionInterop.PCGGetMeshPartitionGrassTypesSettings
// Kind: Class; super: PCGSettings
class UPCGGetMeshPartitionGrassTypesSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Definition[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t GrassNameAttributeName[0x4]; // 0x00C8 (Size: 0x4, Type: NameProperty)
    std::uint8_t GrassTypeAttributeName[0x4]; // 0x00CC (Size: 0x4, Type: NameProperty)
    std::uint8_t bSynchronousLoad; // 0x00D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGetMeshPartitionGrassTypesSettings, Definition) == 168, "Offset mismatch for UPCGGetMeshPartitionGrassTypesSettings::Definition");
static_assert(offsetof(UPCGGetMeshPartitionGrassTypesSettings, GrassNameAttributeName) == 200, "Offset mismatch for UPCGGetMeshPartitionGrassTypesSettings::GrassNameAttributeName");
static_assert(offsetof(UPCGGetMeshPartitionGrassTypesSettings, GrassTypeAttributeName) == 204, "Offset mismatch for UPCGGetMeshPartitionGrassTypesSettings::GrassTypeAttributeName");
static_assert(offsetof(UPCGGetMeshPartitionGrassTypesSettings, bSynchronousLoad) == 208, "Offset mismatch for UPCGGetMeshPartitionGrassTypesSettings::bSynchronousLoad");

// /Script/PCGMeshPartitionInterop.PCGGetMeshPartitionTexelSizesSettings
// Kind: Class; super: PCGSettings
class UPCGGetMeshPartitionTexelSizesSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Definition[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ChannelTexturesTexelSizeAttributeName[0x4]; // 0x00C8 (Size: 0x4, Type: NameProperty)
    std::uint8_t MaterialCacheTexelSizeAttributeName[0x4]; // 0x00CC (Size: 0x4, Type: NameProperty)
    std::uint8_t bSynchronousLoad; // 0x00D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGetMeshPartitionTexelSizesSettings, Definition) == 168, "Offset mismatch for UPCGGetMeshPartitionTexelSizesSettings::Definition");
static_assert(offsetof(UPCGGetMeshPartitionTexelSizesSettings, ChannelTexturesTexelSizeAttributeName) == 200, "Offset mismatch for UPCGGetMeshPartitionTexelSizesSettings::ChannelTexturesTexelSizeAttributeName");
static_assert(offsetof(UPCGGetMeshPartitionTexelSizesSettings, MaterialCacheTexelSizeAttributeName) == 204, "Offset mismatch for UPCGGetMeshPartitionTexelSizesSettings::MaterialCacheTexelSizeAttributeName");
static_assert(offsetof(UPCGGetMeshPartitionTexelSizesSettings, bSynchronousLoad) == 208, "Offset mismatch for UPCGGetMeshPartitionTexelSizesSettings::bSynchronousLoad");

// /Script/PCGMeshPartitionInterop.PCGGetMeshTerrainSectionActorSettings
// Kind: Class; super: PCGSettings
class UPCGGetMeshTerrainSectionActorSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FName OutputAttributeName; // 0x00A8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPCGGetMeshTerrainSectionActorSettings, OutputAttributeName) == 168, "Offset mismatch for UPCGGetMeshTerrainSectionActorSettings::OutputAttributeName");

// /Script/PCGMeshPartitionInterop.PCGGetMeshTerrainSectionChannelTexturesSettings
// Kind: Class; super: PCGSettings
class UPCGGetMeshTerrainSectionChannelTexturesSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> SelectedChannels; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bExcludeSelectedChannels; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDropMissingChannels; // 0x00B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutputTextureArray; // 0x00BA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Filter; // 0x00BB (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGGetMeshTerrainSectionChannelTexturesSettings, SelectedChannels) == 168, "Offset mismatch for UPCGGetMeshTerrainSectionChannelTexturesSettings::SelectedChannels");
static_assert(offsetof(UPCGGetMeshTerrainSectionChannelTexturesSettings, bExcludeSelectedChannels) == 184, "Offset mismatch for UPCGGetMeshTerrainSectionChannelTexturesSettings::bExcludeSelectedChannels");
static_assert(offsetof(UPCGGetMeshTerrainSectionChannelTexturesSettings, bDropMissingChannels) == 185, "Offset mismatch for UPCGGetMeshTerrainSectionChannelTexturesSettings::bDropMissingChannels");
static_assert(offsetof(UPCGGetMeshTerrainSectionChannelTexturesSettings, bOutputTextureArray) == 186, "Offset mismatch for UPCGGetMeshTerrainSectionChannelTexturesSettings::bOutputTextureArray");
static_assert(offsetof(UPCGGetMeshTerrainSectionChannelTexturesSettings, Filter) == 187, "Offset mismatch for UPCGGetMeshTerrainSectionChannelTexturesSettings::Filter");

// /Script/PCGMeshPartitionInterop.PCGGetMeshTerrainSectionSettings
// Kind: Class; super: PCGSettings
class UPCGGetMeshTerrainSectionSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> SelectedBuildVariants; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bExcludeSelectedBuildVariants; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEmitMultipleSections; // 0x00B9 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGetMeshTerrainSectionSettings, SelectedBuildVariants) == 168, "Offset mismatch for UPCGGetMeshTerrainSectionSettings::SelectedBuildVariants");
static_assert(offsetof(UPCGGetMeshTerrainSectionSettings, bExcludeSelectedBuildVariants) == 184, "Offset mismatch for UPCGGetMeshTerrainSectionSettings::bExcludeSelectedBuildVariants");
static_assert(offsetof(UPCGGetMeshTerrainSectionSettings, bEmitMultipleSections) == 185, "Offset mismatch for UPCGGetMeshTerrainSectionSettings::bEmitMultipleSections");

// /Script/PCGMeshPartitionInterop.PCGManagedInstancedProjectionModifier
// Kind: Class; super: PCGManagedComponent
class UPCGManagedInstancedProjectionModifier
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint64_t SettingsUID; // 0x0058 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(UPCGManagedInstancedProjectionModifier, SettingsUID) == 88, "Offset mismatch for UPCGManagedInstancedProjectionModifier::SettingsUID");

// /Script/PCGMeshPartitionInterop.PCGManagedModifierResource
// Kind: Class; super: PCGManagedComponent
class UPCGManagedModifierResource
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t SettingsCrc[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    std::uint8_t bSupportsComponentReset; // 0x0060 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGManagedModifierResource, SettingsCrc) == 88, "Offset mismatch for UPCGManagedModifierResource::SettingsCrc");
static_assert(offsetof(UPCGManagedModifierResource, bSupportsComponentReset) == 96, "Offset mismatch for UPCGManagedModifierResource::bSupportsComponentReset");

// /Script/PCGMeshPartitionInterop.PCGManagedPatchModifier
// Kind: Class; super: PCGManagedComponent
class UPCGManagedPatchModifier
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint64_t SettingsUID; // 0x0058 (Size: 0x8, Type: UInt64Property)
    std::uint8_t Descriptor[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGManagedPatchModifier, SettingsUID) == 88, "Offset mismatch for UPCGManagedPatchModifier::SettingsUID");
static_assert(offsetof(UPCGManagedPatchModifier, Descriptor) == 96, "Offset mismatch for UPCGManagedPatchModifier::Descriptor");

// /Script/PCGMeshPartitionInterop.PCGMeshPartitionData
// Kind: Class; super: PCGSurfaceData
class UPCGMeshPartitionData
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    TWeakObjectPtr<void> World; // 0x0180 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> OriginatingComponent; // 0x0188 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Bounds[0x38]; // 0x0190 (Size: 0x38, Type: StructProperty)
    std::uint8_t QueryParams[0x1]; // 0x01C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGMeshPartitionData, World) == 384, "Offset mismatch for UPCGMeshPartitionData::World");
static_assert(offsetof(UPCGMeshPartitionData, OriginatingComponent) == 392, "Offset mismatch for UPCGMeshPartitionData::OriginatingComponent");
static_assert(offsetof(UPCGMeshPartitionData, Bounds) == 400, "Offset mismatch for UPCGMeshPartitionData::Bounds");
static_assert(offsetof(UPCGMeshPartitionData, QueryParams) == 456, "Offset mismatch for UPCGMeshPartitionData::QueryParams");

// /Script/PCGMeshPartitionInterop.PCGMeshTerrainSectionData
// Kind: Class; super: PCGData
class UPCGMeshTerrainSectionData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint64_t UID; // 0x0028 (Size: 0x8, Type: UInt64Property)
    std::uint8_t Pad_0001[0x8]; // 0x0030
    void* MetaData; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPCGMeshTerrainSectionData, UID) == 40, "Offset mismatch for UPCGMeshTerrainSectionData::UID");
static_assert(offsetof(UPCGMeshTerrainSectionData, MetaData) == 56, "Offset mismatch for UPCGMeshTerrainSectionData::MetaData");

// /Script/PCGMeshPartitionInterop.PCGPatchInstanceSpawnerSettings
// Kind: Class; super: PCGSettings
class UPCGPatchInstanceSpawnerSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t SpawnerParams[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGPatchInstanceSpawnerSettings, SpawnerParams) == 168, "Offset mismatch for UPCGPatchInstanceSpawnerSettings::SpawnerParams");

// /Script/PCGMeshPartitionInterop.PCGProjectionSpawnerSettings
// Kind: Class; super: PCGSettings
class UPCGProjectionSpawnerSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    double Priority; // 0x00A8 (Size: 0x8, Type: DoubleProperty)
    FName Type; // 0x00B0 (Size: 0x8, Type: NameProperty)
    std::uint8_t AffectedMegaMesh[0x20]; // 0x00B8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BlendMode; // 0x00D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D9
    std::uint8_t HeightFalloff[0x20]; // 0x00E0 (Size: 0x20, Type: StructProperty)
    TArray<void*> WeightChannels; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    FString CustomMeshTransformsAttribute; // 0x0110 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UPCGProjectionSpawnerSettings, Priority) == 168, "Offset mismatch for UPCGProjectionSpawnerSettings::Priority");
static_assert(offsetof(UPCGProjectionSpawnerSettings, Type) == 176, "Offset mismatch for UPCGProjectionSpawnerSettings::Type");
static_assert(offsetof(UPCGProjectionSpawnerSettings, AffectedMegaMesh) == 184, "Offset mismatch for UPCGProjectionSpawnerSettings::AffectedMegaMesh");
static_assert(offsetof(UPCGProjectionSpawnerSettings, BlendMode) == 216, "Offset mismatch for UPCGProjectionSpawnerSettings::BlendMode");
static_assert(offsetof(UPCGProjectionSpawnerSettings, HeightFalloff) == 224, "Offset mismatch for UPCGProjectionSpawnerSettings::HeightFalloff");
static_assert(offsetof(UPCGProjectionSpawnerSettings, WeightChannels) == 256, "Offset mismatch for UPCGProjectionSpawnerSettings::WeightChannels");
static_assert(offsetof(UPCGProjectionSpawnerSettings, CustomMeshTransformsAttribute) == 272, "Offset mismatch for UPCGProjectionSpawnerSettings::CustomMeshTransformsAttribute");

// /Script/PCGMeshPartitionInterop.PCGQuerySettings
// Kind: Class; super: PCGSettings
class UPCGQuerySettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t QueryParams[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGQuerySettings, QueryParams) == 168, "Offset mismatch for UPCGQuerySettings::QueryParams");

// /Script/PCGMeshPartitionInterop.PCGSculptLayerWriteSettings
// Kind: Class; super: PCGSettings
class UPCGSculptLayerWriteSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FName Type; // 0x00A8 (Size: 0x8, Type: NameProperty)
    double Priority; // 0x00B0 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> Channels; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bSourcePositionIsAttribute; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C9
    FString SourcePositionsAttribute; // 0x00D0 (Size: 0x10, Type: StrProperty)
    std::uint8_t bWritePositions; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDestinationPositionIsAttribute; // 0x00E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x00E2
    FString DestinationPositionsAttribute; // 0x00E8 (Size: 0x10, Type: StrProperty)
    std::uint8_t bConstrainToBounds; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyIncludeFullyModifiedTriangles; // 0x00F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x00FA
    float MaxClosestPointDistance; // 0x00FC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPCGSculptLayerWriteSettings, Type) == 168, "Offset mismatch for UPCGSculptLayerWriteSettings::Type");
static_assert(offsetof(UPCGSculptLayerWriteSettings, Priority) == 176, "Offset mismatch for UPCGSculptLayerWriteSettings::Priority");
static_assert(offsetof(UPCGSculptLayerWriteSettings, Channels) == 184, "Offset mismatch for UPCGSculptLayerWriteSettings::Channels");
static_assert(offsetof(UPCGSculptLayerWriteSettings, bSourcePositionIsAttribute) == 200, "Offset mismatch for UPCGSculptLayerWriteSettings::bSourcePositionIsAttribute");
static_assert(offsetof(UPCGSculptLayerWriteSettings, SourcePositionsAttribute) == 208, "Offset mismatch for UPCGSculptLayerWriteSettings::SourcePositionsAttribute");
static_assert(offsetof(UPCGSculptLayerWriteSettings, bWritePositions) == 224, "Offset mismatch for UPCGSculptLayerWriteSettings::bWritePositions");
static_assert(offsetof(UPCGSculptLayerWriteSettings, bDestinationPositionIsAttribute) == 225, "Offset mismatch for UPCGSculptLayerWriteSettings::bDestinationPositionIsAttribute");
static_assert(offsetof(UPCGSculptLayerWriteSettings, DestinationPositionsAttribute) == 232, "Offset mismatch for UPCGSculptLayerWriteSettings::DestinationPositionsAttribute");
static_assert(offsetof(UPCGSculptLayerWriteSettings, bConstrainToBounds) == 248, "Offset mismatch for UPCGSculptLayerWriteSettings::bConstrainToBounds");
static_assert(offsetof(UPCGSculptLayerWriteSettings, bOnlyIncludeFullyModifiedTriangles) == 249, "Offset mismatch for UPCGSculptLayerWriteSettings::bOnlyIncludeFullyModifiedTriangles");
static_assert(offsetof(UPCGSculptLayerWriteSettings, MaxClosestPointDistance) == 252, "Offset mismatch for UPCGSculptLayerWriteSettings::MaxClosestPointDistance");

// /Script/PCGMeshPartitionInterop.PCGWriteSettings
// Kind: Class; super: PCGSettings
class UPCGWriteSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t AffectedMegaMesh[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    FName Type; // 0x00C8 (Size: 0x8, Type: NameProperty)
    double Priority; // 0x00D0 (Size: 0x8, Type: DoubleProperty)
    TArray<void*> Channels; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bSourcePositionIsAttribute; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E9
    FString SourcePositionsAttribute; // 0x00F0 (Size: 0x10, Type: StrProperty)
    std::uint8_t bWritePositions; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDestinationPositionIsAttribute; // 0x0101 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0102
    FString DestinationPositionsAttribute; // 0x0108 (Size: 0x10, Type: StrProperty)
    std::uint8_t bConstrainToBounds; // 0x0118 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGWriteSettings, AffectedMegaMesh) == 168, "Offset mismatch for UPCGWriteSettings::AffectedMegaMesh");
static_assert(offsetof(UPCGWriteSettings, Type) == 200, "Offset mismatch for UPCGWriteSettings::Type");
static_assert(offsetof(UPCGWriteSettings, Priority) == 208, "Offset mismatch for UPCGWriteSettings::Priority");
static_assert(offsetof(UPCGWriteSettings, Channels) == 216, "Offset mismatch for UPCGWriteSettings::Channels");
static_assert(offsetof(UPCGWriteSettings, bSourcePositionIsAttribute) == 232, "Offset mismatch for UPCGWriteSettings::bSourcePositionIsAttribute");
static_assert(offsetof(UPCGWriteSettings, SourcePositionsAttribute) == 240, "Offset mismatch for UPCGWriteSettings::SourcePositionsAttribute");
static_assert(offsetof(UPCGWriteSettings, bWritePositions) == 256, "Offset mismatch for UPCGWriteSettings::bWritePositions");
static_assert(offsetof(UPCGWriteSettings, bDestinationPositionIsAttribute) == 257, "Offset mismatch for UPCGWriteSettings::bDestinationPositionIsAttribute");
static_assert(offsetof(UPCGWriteSettings, DestinationPositionsAttribute) == 264, "Offset mismatch for UPCGWriteSettings::DestinationPositionsAttribute");
static_assert(offsetof(UPCGWriteSettings, bConstrainToBounds) == 280, "Offset mismatch for UPCGWriteSettings::bConstrainToBounds");
