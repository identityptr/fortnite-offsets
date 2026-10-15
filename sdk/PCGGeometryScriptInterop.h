/**
 * decamp dumper generated SDK
 * Package: /Script/PCGGeometryScriptInterop
 */
#pragma once
#include "Basic.h"

// /Script/PCGGeometryScriptInterop.PCGAppendMeshesFromPointsSettings
// Kind: Class; super: PCGDynamicMeshBaseSettings
class UPCGAppendMeshesFromPointsSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Mode; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    std::uint8_t Mesh[0x20]; // 0x00B0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MeshAttribute[0x30]; // 0x00D0 (Size: 0x30, Type: StructProperty)
    std::uint8_t bExtractMaterials; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RequestedLODType; // 0x0101 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0102
    std::int32_t RequestedLODIndex; // 0x0104 (Size: 0x4, Type: IntProperty)
    std::uint8_t bSynchronousLoad; // 0x0108 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGAppendMeshesFromPointsSettings, Mode) == 168, "Offset mismatch for UPCGAppendMeshesFromPointsSettings::Mode");
static_assert(offsetof(UPCGAppendMeshesFromPointsSettings, Mesh) == 176, "Offset mismatch for UPCGAppendMeshesFromPointsSettings::Mesh");
static_assert(offsetof(UPCGAppendMeshesFromPointsSettings, MeshAttribute) == 208, "Offset mismatch for UPCGAppendMeshesFromPointsSettings::MeshAttribute");
static_assert(offsetof(UPCGAppendMeshesFromPointsSettings, bExtractMaterials) == 256, "Offset mismatch for UPCGAppendMeshesFromPointsSettings::bExtractMaterials");
static_assert(offsetof(UPCGAppendMeshesFromPointsSettings, RequestedLODType) == 257, "Offset mismatch for UPCGAppendMeshesFromPointsSettings::RequestedLODType");
static_assert(offsetof(UPCGAppendMeshesFromPointsSettings, RequestedLODIndex) == 260, "Offset mismatch for UPCGAppendMeshesFromPointsSettings::RequestedLODIndex");
static_assert(offsetof(UPCGAppendMeshesFromPointsSettings, bSynchronousLoad) == 264, "Offset mismatch for UPCGAppendMeshesFromPointsSettings::bSynchronousLoad");

// /Script/PCGGeometryScriptInterop.PCGBooleanOperationSettings
// Kind: Class; super: PCGDynamicMeshBaseSettings
class UPCGBooleanOperationSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t BooleanOperation; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::uint8_t BooleanOperationOptions[0xC]; // 0x00AC (Size: 0xC, Type: StructProperty)
    std::uint8_t TagInheritanceMode; // 0x00B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Mode; // 0x00B9 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPCGBooleanOperationSettings, BooleanOperation) == 168, "Offset mismatch for UPCGBooleanOperationSettings::BooleanOperation");
static_assert(offsetof(UPCGBooleanOperationSettings, BooleanOperationOptions) == 172, "Offset mismatch for UPCGBooleanOperationSettings::BooleanOperationOptions");
static_assert(offsetof(UPCGBooleanOperationSettings, TagInheritanceMode) == 184, "Offset mismatch for UPCGBooleanOperationSettings::TagInheritanceMode");
static_assert(offsetof(UPCGBooleanOperationSettings, Mode) == 185, "Offset mismatch for UPCGBooleanOperationSettings::Mode");

// /Script/PCGGeometryScriptInterop.PCGCreateEmptyDynamicMeshSettings
// Kind: Class; super: PCGDynamicMeshBaseSettings
class UPCGCreateEmptyDynamicMeshSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGCreateEmptyDynamicMeshSettings, Seed) == 80, "Offset mismatch for UPCGCreateEmptyDynamicMeshSettings::Seed");
static_assert(offsetof(UPCGCreateEmptyDynamicMeshSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGCreateEmptyDynamicMeshSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGCreateEmptyDynamicMeshSettings, bUseSeed) == 96, "Offset mismatch for UPCGCreateEmptyDynamicMeshSettings::bUseSeed");
static_assert(offsetof(UPCGCreateEmptyDynamicMeshSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGCreateEmptyDynamicMeshSettings::CachedOverridableParams");
static_assert(offsetof(UPCGCreateEmptyDynamicMeshSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGCreateEmptyDynamicMeshSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGCreateEmptyDynamicMeshSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGCreateEmptyDynamicMeshSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGCreateEmptyDynamicMeshSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGCreateEmptyDynamicMeshSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGCreateEmptyDynamicMeshSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGCreateEmptyDynamicMeshSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGCreateEmptyDynamicMeshSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGCreateEmptyDynamicMeshSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGCreateEmptyDynamicMeshSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGCreateEmptyDynamicMeshSettings::DebugBufferSize");

// /Script/PCGGeometryScriptInterop.PCGDynamicMeshBaseSettings
// Kind: Class; super: PCGSettings
class UPCGDynamicMeshBaseSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGDynamicMeshBaseSettings, Seed) == 80, "Offset mismatch for UPCGDynamicMeshBaseSettings::Seed");
static_assert(offsetof(UPCGDynamicMeshBaseSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGDynamicMeshBaseSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGDynamicMeshBaseSettings, bUseSeed) == 96, "Offset mismatch for UPCGDynamicMeshBaseSettings::bUseSeed");
static_assert(offsetof(UPCGDynamicMeshBaseSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGDynamicMeshBaseSettings::CachedOverridableParams");
static_assert(offsetof(UPCGDynamicMeshBaseSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGDynamicMeshBaseSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGDynamicMeshBaseSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGDynamicMeshBaseSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGDynamicMeshBaseSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGDynamicMeshBaseSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGDynamicMeshBaseSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGDynamicMeshBaseSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGDynamicMeshBaseSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGDynamicMeshBaseSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGDynamicMeshBaseSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGDynamicMeshBaseSettings::DebugBufferSize");

// /Script/PCGGeometryScriptInterop.PCGDynamicMeshManagedComponent
// Kind: Class; super: PCGManagedComponent
class UPCGDynamicMeshManagedComponent
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint64_t DataUID; // 0x0058 (Size: 0x8, Type: UInt64Property)
};

static_assert(offsetof(UPCGDynamicMeshManagedComponent, DataUID) == 88, "Offset mismatch for UPCGDynamicMeshManagedComponent::DataUID");

// /Script/PCGGeometryScriptInterop.PCGDynamicMeshTransformSettings
// Kind: Class; super: PCGDynamicMeshBaseSettings
class UPCGDynamicMeshTransformSettings
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t Transform[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGDynamicMeshTransformSettings, Transform) == 176, "Offset mismatch for UPCGDynamicMeshTransformSettings::Transform");

// /Script/PCGGeometryScriptInterop.PCGGeometryBlueprintElement
// Kind: Class; super: PCGBlueprintBaseElement
class UPCGGeometryBlueprintElement
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsCacheable; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bComputeFullDataCrc; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequiresGameThread; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x002B
    TArray<void*> CustomInputPins; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CustomOutputPins; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bHasDefaultInPin; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasDefaultOutPin; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasDynamicPins; // 0x0052 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGGeometryBlueprintElement, bIsCacheable) == 40, "Offset mismatch for UPCGGeometryBlueprintElement::bIsCacheable");
static_assert(offsetof(UPCGGeometryBlueprintElement, bComputeFullDataCrc) == 41, "Offset mismatch for UPCGGeometryBlueprintElement::bComputeFullDataCrc");
static_assert(offsetof(UPCGGeometryBlueprintElement, bRequiresGameThread) == 42, "Offset mismatch for UPCGGeometryBlueprintElement::bRequiresGameThread");
static_assert(offsetof(UPCGGeometryBlueprintElement, CustomInputPins) == 48, "Offset mismatch for UPCGGeometryBlueprintElement::CustomInputPins");
static_assert(offsetof(UPCGGeometryBlueprintElement, CustomOutputPins) == 64, "Offset mismatch for UPCGGeometryBlueprintElement::CustomOutputPins");
static_assert(offsetof(UPCGGeometryBlueprintElement, bHasDefaultInPin) == 80, "Offset mismatch for UPCGGeometryBlueprintElement::bHasDefaultInPin");
static_assert(offsetof(UPCGGeometryBlueprintElement, bHasDefaultOutPin) == 81, "Offset mismatch for UPCGGeometryBlueprintElement::bHasDefaultOutPin");
static_assert(offsetof(UPCGGeometryBlueprintElement, bHasDynamicPins) == 82, "Offset mismatch for UPCGGeometryBlueprintElement::bHasDynamicPins");

// /Script/PCGGeometryScriptInterop.PCGGetDynamicMeshDataSettings
// Kind: Class; super: PCGDataFromActorSettings
class UPCGGetDynamicMeshDataSettings
{
public:
    std::uint8_t Pad_0000[0x178]; // 0x0000
    std::uint8_t Options[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGGetDynamicMeshDataSettings, Options) == 376, "Offset mismatch for UPCGGetDynamicMeshDataSettings::Options");

// /Script/PCGGeometryScriptInterop.PCGGetMaterialsDynamicMeshSettings
// Kind: Class; super: PCGDynamicMeshBaseSettings
class UPCGGetMaterialsDynamicMeshSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGGetMaterialsDynamicMeshSettings, Seed) == 80, "Offset mismatch for UPCGGetMaterialsDynamicMeshSettings::Seed");
static_assert(offsetof(UPCGGetMaterialsDynamicMeshSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGGetMaterialsDynamicMeshSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGGetMaterialsDynamicMeshSettings, bUseSeed) == 96, "Offset mismatch for UPCGGetMaterialsDynamicMeshSettings::bUseSeed");
static_assert(offsetof(UPCGGetMaterialsDynamicMeshSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGGetMaterialsDynamicMeshSettings::CachedOverridableParams");
static_assert(offsetof(UPCGGetMaterialsDynamicMeshSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGGetMaterialsDynamicMeshSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGGetMaterialsDynamicMeshSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGGetMaterialsDynamicMeshSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGGetMaterialsDynamicMeshSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGGetMaterialsDynamicMeshSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGGetMaterialsDynamicMeshSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGGetMaterialsDynamicMeshSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGGetMaterialsDynamicMeshSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGGetMaterialsDynamicMeshSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGGetMaterialsDynamicMeshSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGGetMaterialsDynamicMeshSettings::DebugBufferSize");

// /Script/PCGGeometryScriptInterop.PCGMergeDynamicMeshesSettings
// Kind: Class; super: PCGDynamicMeshBaseSettings
class UPCGMergeDynamicMeshesSettings
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::int32_t Seed; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::uint8_t bExecutionDependencyRequired; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xB]; // 0x0055
    std::uint8_t bUseSeed; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1F]; // 0x0061
    TArray<void*> CachedOverridableParams; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* OverriddenSettingsPropertyBag; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0098
    std::uint8_t bExecuteOnGPU; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpCookedHLSL; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDumpDataDescriptions; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPrintShaderDebugValues; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x009D
    std::int32_t DebugBufferSize; // 0x00A0 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPCGMergeDynamicMeshesSettings, Seed) == 80, "Offset mismatch for UPCGMergeDynamicMeshesSettings::Seed");
static_assert(offsetof(UPCGMergeDynamicMeshesSettings, bExecutionDependencyRequired) == 84, "Offset mismatch for UPCGMergeDynamicMeshesSettings::bExecutionDependencyRequired");
static_assert(offsetof(UPCGMergeDynamicMeshesSettings, bUseSeed) == 96, "Offset mismatch for UPCGMergeDynamicMeshesSettings::bUseSeed");
static_assert(offsetof(UPCGMergeDynamicMeshesSettings, CachedOverridableParams) == 128, "Offset mismatch for UPCGMergeDynamicMeshesSettings::CachedOverridableParams");
static_assert(offsetof(UPCGMergeDynamicMeshesSettings, OverriddenSettingsPropertyBag) == 144, "Offset mismatch for UPCGMergeDynamicMeshesSettings::OverriddenSettingsPropertyBag");
static_assert(offsetof(UPCGMergeDynamicMeshesSettings, bExecuteOnGPU) == 153, "Offset mismatch for UPCGMergeDynamicMeshesSettings::bExecuteOnGPU");
static_assert(offsetof(UPCGMergeDynamicMeshesSettings, bDumpCookedHLSL) == 154, "Offset mismatch for UPCGMergeDynamicMeshesSettings::bDumpCookedHLSL");
static_assert(offsetof(UPCGMergeDynamicMeshesSettings, bDumpDataDescriptions) == 155, "Offset mismatch for UPCGMergeDynamicMeshesSettings::bDumpDataDescriptions");
static_assert(offsetof(UPCGMergeDynamicMeshesSettings, bPrintShaderDebugValues) == 156, "Offset mismatch for UPCGMergeDynamicMeshesSettings::bPrintShaderDebugValues");
static_assert(offsetof(UPCGMergeDynamicMeshesSettings, DebugBufferSize) == 160, "Offset mismatch for UPCGMergeDynamicMeshesSettings::DebugBufferSize");

// /Script/PCGGeometryScriptInterop.PCGMeshSamplerSettings
// Kind: Class; super: PCGSettings
class UPCGMeshSamplerSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t bExtractMeshFromInput; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00A9
    std::uint8_t Mesh[0x20]; // 0x00B0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t InputSource[0x30]; // 0x00D0 (Size: 0x30, Type: StructProperty)
    std::uint8_t SamplingMethod; // 0x0100 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseColorChannelAsDensity; // 0x0101 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0102
    std::uint8_t ColorChannelAsDensity; // 0x0104 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0105
    std::uint8_t bHasDefaultColorOverride; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0109
    std::uint8_t DefaultColorOverride[0x10]; // 0x010C (Size: 0x10, Type: StructProperty)
    std::uint8_t bVoxelize; // 0x011C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x011D
    float VoxelSize; // 0x0120 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRemoveHiddenTriangles; // 0x0124 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RequestedLODType; // 0x0125 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x2]; // 0x0126
    std::int32_t RequestedLODIndex; // 0x0128 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0007[0x4]; // 0x012C
    std::uint8_t SamplingOptions[0x20]; // 0x0130 (Size: 0x20, Type: StructProperty)
    std::uint8_t NonUniformSamplingOptions[0x18]; // 0x0150 (Size: 0x18, Type: StructProperty)
    std::uint8_t bExtractUVAsAttribute; // 0x0168 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x3]; // 0x0169
    std::uint8_t UVAttributeName[0x4]; // 0x016C (Size: 0x4, Type: NameProperty)
    std::int32_t UVChannel; // 0x0170 (Size: 0x4, Type: IntProperty)
    std::uint8_t bOutputTriangleIds; // 0x0174 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x3]; // 0x0175
    std::uint8_t TriangleIdAttributeName[0x4]; // 0x0178 (Size: 0x4, Type: NameProperty)
    std::uint8_t bOutputMaterialInfo; // 0x017C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x3]; // 0x017D
    std::uint8_t MaterialIdAttributeName[0x4]; // 0x0180 (Size: 0x4, Type: NameProperty)
    std::uint8_t MaterialAttributeName[0x4]; // 0x0184 (Size: 0x4, Type: NameProperty)
    float PointSteepness; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSynchronousLoad; // 0x018C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGMeshSamplerSettings, bExtractMeshFromInput) == 168, "Offset mismatch for UPCGMeshSamplerSettings::bExtractMeshFromInput");
static_assert(offsetof(UPCGMeshSamplerSettings, Mesh) == 176, "Offset mismatch for UPCGMeshSamplerSettings::Mesh");
static_assert(offsetof(UPCGMeshSamplerSettings, InputSource) == 208, "Offset mismatch for UPCGMeshSamplerSettings::InputSource");
static_assert(offsetof(UPCGMeshSamplerSettings, SamplingMethod) == 256, "Offset mismatch for UPCGMeshSamplerSettings::SamplingMethod");
static_assert(offsetof(UPCGMeshSamplerSettings, bUseColorChannelAsDensity) == 257, "Offset mismatch for UPCGMeshSamplerSettings::bUseColorChannelAsDensity");
static_assert(offsetof(UPCGMeshSamplerSettings, ColorChannelAsDensity) == 260, "Offset mismatch for UPCGMeshSamplerSettings::ColorChannelAsDensity");
static_assert(offsetof(UPCGMeshSamplerSettings, bHasDefaultColorOverride) == 264, "Offset mismatch for UPCGMeshSamplerSettings::bHasDefaultColorOverride");
static_assert(offsetof(UPCGMeshSamplerSettings, DefaultColorOverride) == 268, "Offset mismatch for UPCGMeshSamplerSettings::DefaultColorOverride");
static_assert(offsetof(UPCGMeshSamplerSettings, bVoxelize) == 284, "Offset mismatch for UPCGMeshSamplerSettings::bVoxelize");
static_assert(offsetof(UPCGMeshSamplerSettings, VoxelSize) == 288, "Offset mismatch for UPCGMeshSamplerSettings::VoxelSize");
static_assert(offsetof(UPCGMeshSamplerSettings, bRemoveHiddenTriangles) == 292, "Offset mismatch for UPCGMeshSamplerSettings::bRemoveHiddenTriangles");
static_assert(offsetof(UPCGMeshSamplerSettings, RequestedLODType) == 293, "Offset mismatch for UPCGMeshSamplerSettings::RequestedLODType");
static_assert(offsetof(UPCGMeshSamplerSettings, RequestedLODIndex) == 296, "Offset mismatch for UPCGMeshSamplerSettings::RequestedLODIndex");
static_assert(offsetof(UPCGMeshSamplerSettings, SamplingOptions) == 304, "Offset mismatch for UPCGMeshSamplerSettings::SamplingOptions");
static_assert(offsetof(UPCGMeshSamplerSettings, NonUniformSamplingOptions) == 336, "Offset mismatch for UPCGMeshSamplerSettings::NonUniformSamplingOptions");
static_assert(offsetof(UPCGMeshSamplerSettings, bExtractUVAsAttribute) == 360, "Offset mismatch for UPCGMeshSamplerSettings::bExtractUVAsAttribute");
static_assert(offsetof(UPCGMeshSamplerSettings, UVAttributeName) == 364, "Offset mismatch for UPCGMeshSamplerSettings::UVAttributeName");
static_assert(offsetof(UPCGMeshSamplerSettings, UVChannel) == 368, "Offset mismatch for UPCGMeshSamplerSettings::UVChannel");
static_assert(offsetof(UPCGMeshSamplerSettings, bOutputTriangleIds) == 372, "Offset mismatch for UPCGMeshSamplerSettings::bOutputTriangleIds");
static_assert(offsetof(UPCGMeshSamplerSettings, TriangleIdAttributeName) == 376, "Offset mismatch for UPCGMeshSamplerSettings::TriangleIdAttributeName");
static_assert(offsetof(UPCGMeshSamplerSettings, bOutputMaterialInfo) == 380, "Offset mismatch for UPCGMeshSamplerSettings::bOutputMaterialInfo");
static_assert(offsetof(UPCGMeshSamplerSettings, MaterialIdAttributeName) == 384, "Offset mismatch for UPCGMeshSamplerSettings::MaterialIdAttributeName");
static_assert(offsetof(UPCGMeshSamplerSettings, MaterialAttributeName) == 388, "Offset mismatch for UPCGMeshSamplerSettings::MaterialAttributeName");
static_assert(offsetof(UPCGMeshSamplerSettings, PointSteepness) == 392, "Offset mismatch for UPCGMeshSamplerSettings::PointSteepness");
static_assert(offsetof(UPCGMeshSamplerSettings, bSynchronousLoad) == 396, "Offset mismatch for UPCGMeshSamplerSettings::bSynchronousLoad");

// /Script/PCGGeometryScriptInterop.PCGMeshToDynamicMeshSettings
// Kind: Class; super: PCGDynamicMeshBaseSettings
class UPCGMeshToDynamicMeshSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t Mesh[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bExtractMaterials; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C9
    TArray<void*> OverrideMaterials; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t RequestedLODType; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00E1
    std::int32_t RequestedLODIndex; // 0x00E4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bSynchronousLoad; // 0x00E8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGMeshToDynamicMeshSettings, Mesh) == 168, "Offset mismatch for UPCGMeshToDynamicMeshSettings::Mesh");
static_assert(offsetof(UPCGMeshToDynamicMeshSettings, bExtractMaterials) == 200, "Offset mismatch for UPCGMeshToDynamicMeshSettings::bExtractMaterials");
static_assert(offsetof(UPCGMeshToDynamicMeshSettings, OverrideMaterials) == 208, "Offset mismatch for UPCGMeshToDynamicMeshSettings::OverrideMaterials");
static_assert(offsetof(UPCGMeshToDynamicMeshSettings, RequestedLODType) == 224, "Offset mismatch for UPCGMeshToDynamicMeshSettings::RequestedLODType");
static_assert(offsetof(UPCGMeshToDynamicMeshSettings, RequestedLODIndex) == 228, "Offset mismatch for UPCGMeshToDynamicMeshSettings::RequestedLODIndex");
static_assert(offsetof(UPCGMeshToDynamicMeshSettings, bSynchronousLoad) == 232, "Offset mismatch for UPCGMeshToDynamicMeshSettings::bSynchronousLoad");

// /Script/PCGGeometryScriptInterop.PCGPrimitiveCrossSectionSettings
// Kind: Class; super: PCGSettings
class UPCGPrimitiveCrossSectionSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t SliceDirection[0x18]; // 0x00A8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExtrusionVectorAttribute[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    std::int32_t MinimumCoplanarVertices; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxMeshVertexCount; // 0x00F4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnableTierMerging; // 0x00F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F9
    double TierMergingThreshold; // 0x0100 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bEnableMinAreaCulling; // 0x0108 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0109
    double MinAreaCullingThreshold; // 0x0110 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bEnableMinHeightCulling; // 0x0118 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0119
    double MinHeightCullingThreshold; // 0x0120 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bRemoveRedundantSections; // 0x0128 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPCGPrimitiveCrossSectionSettings, SliceDirection) == 168, "Offset mismatch for UPCGPrimitiveCrossSectionSettings::SliceDirection");
static_assert(offsetof(UPCGPrimitiveCrossSectionSettings, ExtrusionVectorAttribute) == 192, "Offset mismatch for UPCGPrimitiveCrossSectionSettings::ExtrusionVectorAttribute");
static_assert(offsetof(UPCGPrimitiveCrossSectionSettings, MinimumCoplanarVertices) == 240, "Offset mismatch for UPCGPrimitiveCrossSectionSettings::MinimumCoplanarVertices");
static_assert(offsetof(UPCGPrimitiveCrossSectionSettings, MaxMeshVertexCount) == 244, "Offset mismatch for UPCGPrimitiveCrossSectionSettings::MaxMeshVertexCount");
static_assert(offsetof(UPCGPrimitiveCrossSectionSettings, bEnableTierMerging) == 248, "Offset mismatch for UPCGPrimitiveCrossSectionSettings::bEnableTierMerging");
static_assert(offsetof(UPCGPrimitiveCrossSectionSettings, TierMergingThreshold) == 256, "Offset mismatch for UPCGPrimitiveCrossSectionSettings::TierMergingThreshold");
static_assert(offsetof(UPCGPrimitiveCrossSectionSettings, bEnableMinAreaCulling) == 264, "Offset mismatch for UPCGPrimitiveCrossSectionSettings::bEnableMinAreaCulling");
static_assert(offsetof(UPCGPrimitiveCrossSectionSettings, MinAreaCullingThreshold) == 272, "Offset mismatch for UPCGPrimitiveCrossSectionSettings::MinAreaCullingThreshold");
static_assert(offsetof(UPCGPrimitiveCrossSectionSettings, bEnableMinHeightCulling) == 280, "Offset mismatch for UPCGPrimitiveCrossSectionSettings::bEnableMinHeightCulling");
static_assert(offsetof(UPCGPrimitiveCrossSectionSettings, MinHeightCullingThreshold) == 288, "Offset mismatch for UPCGPrimitiveCrossSectionSettings::MinHeightCullingThreshold");
static_assert(offsetof(UPCGPrimitiveCrossSectionSettings, bRemoveRedundantSections) == 296, "Offset mismatch for UPCGPrimitiveCrossSectionSettings::bRemoveRedundantSections");

// /Script/PCGGeometryScriptInterop.PCGSaveDynamicMeshToAssetSettings
// Kind: Class; super: PCGDynamicMeshBaseSettings
class UPCGSaveDynamicMeshToAssetSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t ExportParams[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t bExportMaterialsFromDynamicMesh; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D9
    std::uint8_t CopyMeshToAssetOptions[0xB8]; // 0x00E0 (Size: 0xB8, Type: StructProperty)
    std::uint8_t MeshWriteLOD[0x1]; // 0x0198 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPCGSaveDynamicMeshToAssetSettings, ExportParams) == 168, "Offset mismatch for UPCGSaveDynamicMeshToAssetSettings::ExportParams");
static_assert(offsetof(UPCGSaveDynamicMeshToAssetSettings, bExportMaterialsFromDynamicMesh) == 216, "Offset mismatch for UPCGSaveDynamicMeshToAssetSettings::bExportMaterialsFromDynamicMesh");
static_assert(offsetof(UPCGSaveDynamicMeshToAssetSettings, CopyMeshToAssetOptions) == 224, "Offset mismatch for UPCGSaveDynamicMeshToAssetSettings::CopyMeshToAssetOptions");
static_assert(offsetof(UPCGSaveDynamicMeshToAssetSettings, MeshWriteLOD) == 408, "Offset mismatch for UPCGSaveDynamicMeshToAssetSettings::MeshWriteLOD");

// /Script/PCGGeometryScriptInterop.PCGSetMaterialsDynamicMeshSettings
// Kind: Class; super: PCGDynamicMeshBaseSettings
class UPCGSetMaterialsDynamicMeshSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> Materials; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGSetMaterialsDynamicMeshSettings, Materials) == 168, "Offset mismatch for UPCGSetMaterialsDynamicMeshSettings::Materials");

// /Script/PCGGeometryScriptInterop.PCGSpawnDynamicMeshSettings
// Kind: Class; super: PCGDynamicMeshBaseSettings
class UPCGSpawnDynamicMeshSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    std::uint8_t TargetActor[0x20]; // 0x00A8 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> PostProcessFunctionNames; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPCGSpawnDynamicMeshSettings, TargetActor) == 168, "Offset mismatch for UPCGSpawnDynamicMeshSettings::TargetActor");
static_assert(offsetof(UPCGSpawnDynamicMeshSettings, PostProcessFunctionNames) == 200, "Offset mismatch for UPCGSpawnDynamicMeshSettings::PostProcessFunctionNames");

// /Script/PCGGeometryScriptInterop.PCGSplineToMeshSettings
// Kind: Class; super: PCGDynamicMeshBaseSettings
class UPCGSplineToMeshSettings
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    double ErrorTolerance; // 0x00A8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t FlattenMethod; // 0x00B0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    double Thickness; // 0x00B8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t ExtrusionVector[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bExtrudeInLocalSpace; // 0x00D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlipResult; // 0x00D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t OpenCurves; // 0x00DA (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x5]; // 0x00DB
    double CurveOffset; // 0x00E0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t OffsetClosedCurves; // 0x00E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t EndShapes; // 0x00E9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t JoinMethod; // 0x00EA (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x5]; // 0x00EB
    double MiterLimit; // 0x00F0 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UPCGSplineToMeshSettings, ErrorTolerance) == 168, "Offset mismatch for UPCGSplineToMeshSettings::ErrorTolerance");
static_assert(offsetof(UPCGSplineToMeshSettings, FlattenMethod) == 176, "Offset mismatch for UPCGSplineToMeshSettings::FlattenMethod");
static_assert(offsetof(UPCGSplineToMeshSettings, Thickness) == 184, "Offset mismatch for UPCGSplineToMeshSettings::Thickness");
static_assert(offsetof(UPCGSplineToMeshSettings, ExtrusionVector) == 192, "Offset mismatch for UPCGSplineToMeshSettings::ExtrusionVector");
static_assert(offsetof(UPCGSplineToMeshSettings, bExtrudeInLocalSpace) == 216, "Offset mismatch for UPCGSplineToMeshSettings::bExtrudeInLocalSpace");
static_assert(offsetof(UPCGSplineToMeshSettings, bFlipResult) == 217, "Offset mismatch for UPCGSplineToMeshSettings::bFlipResult");
static_assert(offsetof(UPCGSplineToMeshSettings, OpenCurves) == 218, "Offset mismatch for UPCGSplineToMeshSettings::OpenCurves");
static_assert(offsetof(UPCGSplineToMeshSettings, CurveOffset) == 224, "Offset mismatch for UPCGSplineToMeshSettings::CurveOffset");
static_assert(offsetof(UPCGSplineToMeshSettings, OffsetClosedCurves) == 232, "Offset mismatch for UPCGSplineToMeshSettings::OffsetClosedCurves");
static_assert(offsetof(UPCGSplineToMeshSettings, EndShapes) == 233, "Offset mismatch for UPCGSplineToMeshSettings::EndShapes");
static_assert(offsetof(UPCGSplineToMeshSettings, JoinMethod) == 234, "Offset mismatch for UPCGSplineToMeshSettings::JoinMethod");
static_assert(offsetof(UPCGSplineToMeshSettings, MiterLimit) == 240, "Offset mismatch for UPCGSplineToMeshSettings::MiterLimit");
