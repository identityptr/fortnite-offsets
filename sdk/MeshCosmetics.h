/**
 * decamp dumper generated SDK
 * Package: /Script/MeshCosmetics
 */
#pragma once
#include "Basic.h"

// /Script/MeshCosmetics.CosmeticSlotSelector
// Kind: ScriptStruct; super: none
struct FCosmeticSlotSelector
{
public:
    std::uint8_t LegacyPartType; // 0x0000 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FCosmeticSlotSelector, LegacyPartType) == 0, "Offset mismatch for FCosmeticSlotSelector::LegacyPartType");

// /Script/MeshCosmetics.CosmeticsLayoutSlot
// Kind: ScriptStruct; super: none
struct FCosmeticsLayoutSlot
{
public:
    std::uint8_t SlottedObject[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ComponentName[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    std::uint8_t RequiredCosmeticPartType; // 0x0024 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0025
    std::uint8_t RequiredCosmeticLoadoutSlot[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    TSoftClassPtr<void> ProportionalLayerAnimBP; // 0x0030 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FCosmeticsLayoutSlot, SlottedObject) == 0, "Offset mismatch for FCosmeticsLayoutSlot::SlottedObject");
static_assert(offsetof(FCosmeticsLayoutSlot, ComponentName) == 32, "Offset mismatch for FCosmeticsLayoutSlot::ComponentName");
static_assert(offsetof(FCosmeticsLayoutSlot, RequiredCosmeticPartType) == 36, "Offset mismatch for FCosmeticsLayoutSlot::RequiredCosmeticPartType");
static_assert(offsetof(FCosmeticsLayoutSlot, RequiredCosmeticLoadoutSlot) == 40, "Offset mismatch for FCosmeticsLayoutSlot::RequiredCosmeticLoadoutSlot");
static_assert(offsetof(FCosmeticsLayoutSlot, ProportionalLayerAnimBP) == 48, "Offset mismatch for FCosmeticsLayoutSlot::ProportionalLayerAnimBP");

// /Script/MeshCosmetics.CustomizableObjectBoolParamVariant
// Kind: ScriptStruct; super: CustomizableObjectParamVariantBase
struct FCustomizableObjectBoolParamVariant
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> Parameters; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomizableObjectBoolParamVariant, Parameters) == 32, "Offset mismatch for FCustomizableObjectBoolParamVariant::Parameters");

// /Script/MeshCosmetics.CustomizableObjectBoolValue
// Kind: ScriptStruct; super: CustomizableObjectValueBase
struct FCustomizableObjectBoolValue
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Value; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCustomizableObjectBoolValue, Value) == 24, "Offset mismatch for FCustomizableObjectBoolValue::Value");

// /Script/MeshCosmetics.CustomizableObjectFloatParamVariant
// Kind: ScriptStruct; super: CustomizableObjectParamVariantBase
struct FCustomizableObjectFloatParamVariant
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> Parameters; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomizableObjectFloatParamVariant, Parameters) == 32, "Offset mismatch for FCustomizableObjectFloatParamVariant::Parameters");

// /Script/MeshCosmetics.CustomizableObjectFloatValue
// Kind: ScriptStruct; super: CustomizableObjectValueBase
struct FCustomizableObjectFloatValue
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    float Value; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCustomizableObjectFloatValue, Value) == 24, "Offset mismatch for FCustomizableObjectFloatValue::Value");

// /Script/MeshCosmetics.CustomizableObjectIntParamVariant
// Kind: ScriptStruct; super: CustomizableObjectParamVariantBase
struct FCustomizableObjectIntParamVariant
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> Parameters; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomizableObjectIntParamVariant, Parameters) == 32, "Offset mismatch for FCustomizableObjectIntParamVariant::Parameters");

// /Script/MeshCosmetics.CustomizableObjectIntValue
// Kind: ScriptStruct; super: CustomizableObjectValueBase
struct FCustomizableObjectIntValue
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::int32_t NumericValue; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    FString NamedValue; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCustomizableObjectIntValue, NumericValue) == 24, "Offset mismatch for FCustomizableObjectIntValue::NumericValue");
static_assert(offsetof(FCustomizableObjectIntValue, NamedValue) == 32, "Offset mismatch for FCustomizableObjectIntValue::NamedValue");

// /Script/MeshCosmetics.CustomizableObjectMaterialParamVariant
// Kind: ScriptStruct; super: CustomizableObjectParamVariantBase
struct FCustomizableObjectMaterialParamVariant
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> Parameters; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomizableObjectMaterialParamVariant, Parameters) == 32, "Offset mismatch for FCustomizableObjectMaterialParamVariant::Parameters");

// /Script/MeshCosmetics.CustomizableObjectMaterialValue
// Kind: ScriptStruct; super: CustomizableObjectValueBase
struct FCustomizableObjectMaterialValue
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    void* Value; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCustomizableObjectMaterialValue, Value) == 24, "Offset mismatch for FCustomizableObjectMaterialValue::Value");

// /Script/MeshCosmetics.CustomizableObjectParamVariantBase
// Kind: ScriptStruct; super: none
struct FCustomizableObjectParamVariantBase
{
public:
    TSoftObjectPtr<void> ObjectToModify; // 0x0000 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FCustomizableObjectParamVariantBase, ObjectToModify) == 0, "Offset mismatch for FCustomizableObjectParamVariantBase::ObjectToModify");

// /Script/MeshCosmetics.CustomizableObjectParamsVariantDef
// Kind: ScriptStruct; super: BaseVariantDef
struct FCustomizableObjectParamsVariantDef
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    TArray<void*> IntParams; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FloatParams; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BoolParams; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VectorParams; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TextureParams; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SkeletalMeshParams; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MaterialParams; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TransformParams; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProjectorParams; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StateVariants; // 0x0130 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomizableObjectParamsVariantDef, IntParams) == 160, "Offset mismatch for FCustomizableObjectParamsVariantDef::IntParams");
static_assert(offsetof(FCustomizableObjectParamsVariantDef, FloatParams) == 176, "Offset mismatch for FCustomizableObjectParamsVariantDef::FloatParams");
static_assert(offsetof(FCustomizableObjectParamsVariantDef, BoolParams) == 192, "Offset mismatch for FCustomizableObjectParamsVariantDef::BoolParams");
static_assert(offsetof(FCustomizableObjectParamsVariantDef, VectorParams) == 208, "Offset mismatch for FCustomizableObjectParamsVariantDef::VectorParams");
static_assert(offsetof(FCustomizableObjectParamsVariantDef, TextureParams) == 224, "Offset mismatch for FCustomizableObjectParamsVariantDef::TextureParams");
static_assert(offsetof(FCustomizableObjectParamsVariantDef, SkeletalMeshParams) == 240, "Offset mismatch for FCustomizableObjectParamsVariantDef::SkeletalMeshParams");
static_assert(offsetof(FCustomizableObjectParamsVariantDef, MaterialParams) == 256, "Offset mismatch for FCustomizableObjectParamsVariantDef::MaterialParams");
static_assert(offsetof(FCustomizableObjectParamsVariantDef, TransformParams) == 272, "Offset mismatch for FCustomizableObjectParamsVariantDef::TransformParams");
static_assert(offsetof(FCustomizableObjectParamsVariantDef, ProjectorParams) == 288, "Offset mismatch for FCustomizableObjectParamsVariantDef::ProjectorParams");
static_assert(offsetof(FCustomizableObjectParamsVariantDef, StateVariants) == 304, "Offset mismatch for FCustomizableObjectParamsVariantDef::StateVariants");

// /Script/MeshCosmetics.CustomizableObjectProjectorValue
// Kind: ScriptStruct; super: CustomizableObjectValueBase
struct FCustomizableObjectProjectorValue
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Position[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Direction[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t UpDirection[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t Scale[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    float Angle; // 0x0078 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCustomizableObjectProjectorValue, Position) == 24, "Offset mismatch for FCustomizableObjectProjectorValue::Position");
static_assert(offsetof(FCustomizableObjectProjectorValue, Direction) == 48, "Offset mismatch for FCustomizableObjectProjectorValue::Direction");
static_assert(offsetof(FCustomizableObjectProjectorValue, UpDirection) == 72, "Offset mismatch for FCustomizableObjectProjectorValue::UpDirection");
static_assert(offsetof(FCustomizableObjectProjectorValue, Scale) == 96, "Offset mismatch for FCustomizableObjectProjectorValue::Scale");
static_assert(offsetof(FCustomizableObjectProjectorValue, Angle) == 120, "Offset mismatch for FCustomizableObjectProjectorValue::Angle");

// /Script/MeshCosmetics.CustomizableObjectProjectorVariant
// Kind: ScriptStruct; super: CustomizableObjectParamVariantBase
struct FCustomizableObjectProjectorVariant
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> Parameters; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomizableObjectProjectorVariant, Parameters) == 32, "Offset mismatch for FCustomizableObjectProjectorVariant::Parameters");

// /Script/MeshCosmetics.CustomizableObjectSkeletalMeshParamVariant
// Kind: ScriptStruct; super: CustomizableObjectParamVariantBase
struct FCustomizableObjectSkeletalMeshParamVariant
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> Parameters; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomizableObjectSkeletalMeshParamVariant, Parameters) == 32, "Offset mismatch for FCustomizableObjectSkeletalMeshParamVariant::Parameters");

// /Script/MeshCosmetics.CustomizableObjectSkeletalMeshValue
// Kind: ScriptStruct; super: CustomizableObjectValueBase
struct FCustomizableObjectSkeletalMeshValue
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    void* Value; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCustomizableObjectSkeletalMeshValue, Value) == 24, "Offset mismatch for FCustomizableObjectSkeletalMeshValue::Value");

// /Script/MeshCosmetics.CustomizableObjectSprayVariantFixedProperties
// Kind: ScriptStruct; super: none
struct FCustomizableObjectSprayVariantFixedProperties
{
public:
    std::uint8_t Position[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Direction[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t UpDirection[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t BaseScale[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    float BaseRotation; // 0x0060 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCustomizableObjectSprayVariantFixedProperties, Position) == 0, "Offset mismatch for FCustomizableObjectSprayVariantFixedProperties::Position");
static_assert(offsetof(FCustomizableObjectSprayVariantFixedProperties, Direction) == 24, "Offset mismatch for FCustomizableObjectSprayVariantFixedProperties::Direction");
static_assert(offsetof(FCustomizableObjectSprayVariantFixedProperties, UpDirection) == 48, "Offset mismatch for FCustomizableObjectSprayVariantFixedProperties::UpDirection");
static_assert(offsetof(FCustomizableObjectSprayVariantFixedProperties, BaseScale) == 72, "Offset mismatch for FCustomizableObjectSprayVariantFixedProperties::BaseScale");
static_assert(offsetof(FCustomizableObjectSprayVariantFixedProperties, BaseRotation) == 96, "Offset mismatch for FCustomizableObjectSprayVariantFixedProperties::BaseRotation");

// /Script/MeshCosmetics.CustomizableObjectSprayVariantMCPPayload
// Kind: ScriptStruct; super: none
struct FCustomizableObjectSprayVariantMCPPayload
{
public:
    std::uint8_t TextureAssetID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint16_t CompactSaturation; // 0x0008 (Size: 0x2, Type: UInt16Property)
    std::uint16_t CompactWear; // 0x000A (Size: 0x2, Type: UInt16Property)
    std::uint16_t CompactScale; // 0x000C (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FCustomizableObjectSprayVariantMCPPayload, TextureAssetID) == 0, "Offset mismatch for FCustomizableObjectSprayVariantMCPPayload::TextureAssetID");
static_assert(offsetof(FCustomizableObjectSprayVariantMCPPayload, CompactSaturation) == 8, "Offset mismatch for FCustomizableObjectSprayVariantMCPPayload::CompactSaturation");
static_assert(offsetof(FCustomizableObjectSprayVariantMCPPayload, CompactWear) == 10, "Offset mismatch for FCustomizableObjectSprayVariantMCPPayload::CompactWear");
static_assert(offsetof(FCustomizableObjectSprayVariantMCPPayload, CompactScale) == 12, "Offset mismatch for FCustomizableObjectSprayVariantMCPPayload::CompactScale");

// /Script/MeshCosmetics.CustomizableObjectSprayVariantPayloadClamps
// Kind: ScriptStruct; super: none
struct FCustomizableObjectSprayVariantPayloadClamps
{
public:
    std::uint8_t Saturation[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Wear[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Scale[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCustomizableObjectSprayVariantPayloadClamps, Saturation) == 0, "Offset mismatch for FCustomizableObjectSprayVariantPayloadClamps::Saturation");
static_assert(offsetof(FCustomizableObjectSprayVariantPayloadClamps, Wear) == 16, "Offset mismatch for FCustomizableObjectSprayVariantPayloadClamps::Wear");
static_assert(offsetof(FCustomizableObjectSprayVariantPayloadClamps, Scale) == 32, "Offset mismatch for FCustomizableObjectSprayVariantPayloadClamps::Scale");

// /Script/MeshCosmetics.CustomizableObjectSprayVariantSelectablePayload
// Kind: ScriptStruct; super: BaseVariantDef
struct FCustomizableObjectSprayVariantSelectablePayload
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t TextureSource[0x8]; // 0x00A0 (Size: 0x8, Type: StructProperty)
    float Saturation; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float Wear; // 0x00AC (Size: 0x4, Type: FloatProperty)
    float Scale; // 0x00B0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FCustomizableObjectSprayVariantSelectablePayload, TextureSource) == 160, "Offset mismatch for FCustomizableObjectSprayVariantSelectablePayload::TextureSource");
static_assert(offsetof(FCustomizableObjectSprayVariantSelectablePayload, Saturation) == 168, "Offset mismatch for FCustomizableObjectSprayVariantSelectablePayload::Saturation");
static_assert(offsetof(FCustomizableObjectSprayVariantSelectablePayload, Wear) == 172, "Offset mismatch for FCustomizableObjectSprayVariantSelectablePayload::Wear");
static_assert(offsetof(FCustomizableObjectSprayVariantSelectablePayload, Scale) == 176, "Offset mismatch for FCustomizableObjectSprayVariantSelectablePayload::Scale");

// /Script/MeshCosmetics.CustomizableObjectSprayVariantSlotImageProperties
// Kind: ScriptStruct; super: none
struct FCustomizableObjectSprayVariantSlotImageProperties
{
public:
    std::uint8_t SprayNotAssignedImage[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> SprayAssignedImage; // 0x0020 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FCustomizableObjectSprayVariantSlotImageProperties, SprayNotAssignedImage) == 0, "Offset mismatch for FCustomizableObjectSprayVariantSlotImageProperties::SprayNotAssignedImage");
static_assert(offsetof(FCustomizableObjectSprayVariantSlotImageProperties, SprayAssignedImage) == 32, "Offset mismatch for FCustomizableObjectSprayVariantSlotImageProperties::SprayAssignedImage");

// /Script/MeshCosmetics.CustomizableObjectStateValue
// Kind: ScriptStruct; super: CustomizableObjectValueBase
struct FCustomizableObjectStateValue
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    FString NewState; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FCustomizableObjectStateValue, NewState) == 24, "Offset mismatch for FCustomizableObjectStateValue::NewState");

// /Script/MeshCosmetics.CustomizableObjectStateVariant
// Kind: ScriptStruct; super: CustomizableObjectParamVariantBase
struct FCustomizableObjectStateVariant
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> States; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomizableObjectStateVariant, States) == 32, "Offset mismatch for FCustomizableObjectStateVariant::States");

// /Script/MeshCosmetics.CustomizableObjectTextureParamVariant
// Kind: ScriptStruct; super: CustomizableObjectParamVariantBase
struct FCustomizableObjectTextureParamVariant
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> Parameters; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomizableObjectTextureParamVariant, Parameters) == 32, "Offset mismatch for FCustomizableObjectTextureParamVariant::Parameters");

// /Script/MeshCosmetics.CustomizableObjectTextureValue
// Kind: ScriptStruct; super: CustomizableObjectValueBase
struct FCustomizableObjectTextureValue
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    void* Value; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCustomizableObjectTextureValue, Value) == 24, "Offset mismatch for FCustomizableObjectTextureValue::Value");

// /Script/MeshCosmetics.CustomizableObjectTransformParamVariant
// Kind: ScriptStruct; super: CustomizableObjectParamVariantBase
struct FCustomizableObjectTransformParamVariant
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> Parameters; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomizableObjectTransformParamVariant, Parameters) == 32, "Offset mismatch for FCustomizableObjectTransformParamVariant::Parameters");

// /Script/MeshCosmetics.CustomizableObjectTransformValue
// Kind: ScriptStruct; super: CustomizableObjectValueBase
struct FCustomizableObjectTransformValue
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCustomizableObjectTransformValue, Value) == 32, "Offset mismatch for FCustomizableObjectTransformValue::Value");

// /Script/MeshCosmetics.CustomizableObjectValueBase
// Kind: ScriptStruct; super: none
struct FCustomizableObjectValueBase
{
public:
    FString ParameterName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t RangeIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCustomizableObjectValueBase, ParameterName) == 0, "Offset mismatch for FCustomizableObjectValueBase::ParameterName");
static_assert(offsetof(FCustomizableObjectValueBase, RangeIndex) == 16, "Offset mismatch for FCustomizableObjectValueBase::RangeIndex");

// /Script/MeshCosmetics.CustomizableObjectVectorParamVariant
// Kind: ScriptStruct; super: CustomizableObjectParamVariantBase
struct FCustomizableObjectVectorParamVariant
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> Parameters; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCustomizableObjectVectorParamVariant, Parameters) == 32, "Offset mismatch for FCustomizableObjectVectorParamVariant::Parameters");

// /Script/MeshCosmetics.CustomizableObjectVectorValue
// Kind: ScriptStruct; super: CustomizableObjectValueBase
struct FCustomizableObjectVectorValue
{
public:
    std::uint8_t Pad_0000[0x18]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCustomizableObjectVectorValue, Value) == 24, "Offset mismatch for FCustomizableObjectVectorValue::Value");

// /Script/MeshCosmetics.MeshCosmeticsCustomizableObjectEntry
// Kind: ScriptStruct; super: none
struct FMeshCosmeticsCustomizableObjectEntry
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshCosmetics.MeshCosmeticsCustomizationCCV2Data
// Kind: ScriptStruct; super: none
struct FMeshCosmeticsCustomizationCCV2Data
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshCosmetics.MeshCosmeticsCustomizationPerSlotData
// Kind: ScriptStruct; super: none
struct FMeshCosmeticsCustomizationPerSlotData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshCosmetics.PartHandleControllers
// Kind: ScriptStruct; super: none
struct FPartHandleControllers
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshCosmetics.FortCustomizableObjectParameterVariant
// Kind: Class; super: FortCosmeticVariantBackedByArray
class UFortCustomizableObjectParameterVariant
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TArray<void*> ParameterOptions; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortCustomizableObjectParameterVariant, ParameterOptions) == 128, "Offset mismatch for UFortCustomizableObjectParameterVariant::ParameterOptions");

// /Script/MeshCosmetics.FortCustomizableObjectSprayVariant
// Kind: Class; super: FortCosmeticVariant
class UFortCustomizableObjectSprayVariant
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t ActiveSelectionTag[0x8]; // 0x0080 (Size: 0x8, Type: StructProperty)
    FString EnabledParamName; // 0x0088 (Size: 0x10, Type: StrProperty)
    FString ProjectorParamName; // 0x0098 (Size: 0x10, Type: StrProperty)
    FString TextureParamName; // 0x00A8 (Size: 0x10, Type: StrProperty)
    FString SaturationParamName; // 0x00B8 (Size: 0x10, Type: StrProperty)
    FString WearParamName; // 0x00C8 (Size: 0x10, Type: StrProperty)
    FString ScaleParamName; // 0x00D8 (Size: 0x10, Type: StrProperty)
    std::uint8_t TagQueryForShouldOverrideCODefaultsWithFixedLocationParameters[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    std::uint8_t FixedSprayLocation[0x68]; // 0x0130 (Size: 0x68, Type: StructProperty)
    std::uint8_t DefaultSprayCustomization[0xB8]; // 0x0198 (Size: 0xB8, Type: StructProperty)
    std::uint8_t SprayNumericConstraints[0x30]; // 0x0250 (Size: 0x30, Type: StructProperty)
    float TextureBaseScale; // 0x0280 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0284
    std::uint8_t SpraySlotImageProperties[0x1]; // 0x0288 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCustomizableObjectSprayVariant, ActiveSelectionTag) == 128, "Offset mismatch for UFortCustomizableObjectSprayVariant::ActiveSelectionTag");
static_assert(offsetof(UFortCustomizableObjectSprayVariant, EnabledParamName) == 136, "Offset mismatch for UFortCustomizableObjectSprayVariant::EnabledParamName");
static_assert(offsetof(UFortCustomizableObjectSprayVariant, ProjectorParamName) == 152, "Offset mismatch for UFortCustomizableObjectSprayVariant::ProjectorParamName");
static_assert(offsetof(UFortCustomizableObjectSprayVariant, TextureParamName) == 168, "Offset mismatch for UFortCustomizableObjectSprayVariant::TextureParamName");
static_assert(offsetof(UFortCustomizableObjectSprayVariant, SaturationParamName) == 184, "Offset mismatch for UFortCustomizableObjectSprayVariant::SaturationParamName");
static_assert(offsetof(UFortCustomizableObjectSprayVariant, WearParamName) == 200, "Offset mismatch for UFortCustomizableObjectSprayVariant::WearParamName");
static_assert(offsetof(UFortCustomizableObjectSprayVariant, ScaleParamName) == 216, "Offset mismatch for UFortCustomizableObjectSprayVariant::ScaleParamName");
static_assert(offsetof(UFortCustomizableObjectSprayVariant, TagQueryForShouldOverrideCODefaultsWithFixedLocationParameters) == 232, "Offset mismatch for UFortCustomizableObjectSprayVariant::TagQueryForShouldOverrideCODefaultsWithFixedLocationParameters");
static_assert(offsetof(UFortCustomizableObjectSprayVariant, FixedSprayLocation) == 304, "Offset mismatch for UFortCustomizableObjectSprayVariant::FixedSprayLocation");
static_assert(offsetof(UFortCustomizableObjectSprayVariant, DefaultSprayCustomization) == 408, "Offset mismatch for UFortCustomizableObjectSprayVariant::DefaultSprayCustomization");
static_assert(offsetof(UFortCustomizableObjectSprayVariant, SprayNumericConstraints) == 592, "Offset mismatch for UFortCustomizableObjectSprayVariant::SprayNumericConstraints");
static_assert(offsetof(UFortCustomizableObjectSprayVariant, TextureBaseScale) == 640, "Offset mismatch for UFortCustomizableObjectSprayVariant::TextureBaseScale");
static_assert(offsetof(UFortCustomizableObjectSprayVariant, SpraySlotImageProperties) == 648, "Offset mismatch for UFortCustomizableObjectSprayVariant::SpraySlotImageProperties");

// /Script/MeshCosmetics.GameFeatureAction_MeshCosmeticsCompileSchemaDepenencies
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshCosmetics.MeshCosmeticTagInterface
// Kind: Class; super: Interface
class UMeshCosmeticTagInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshCosmetics.MeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams
// Kind: Class; super: FortCosmeticItemAdditionalData
class UMeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> MaterialOnlyParameterNames; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams, MaterialOnlyParameterNames) == 40, "Offset mismatch for UMeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams::MaterialOnlyParameterNames");

// /Script/MeshCosmetics.MeshCosmeticsAppliedSchemaData
// Kind: Class; super: FortCosmeticItemAdditionalData
class UMeshCosmeticsAppliedSchemaData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TSoftObjectPtr<void> SchemaAsset; // 0x0028 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UMeshCosmeticsAppliedSchemaData, SchemaAsset) == 40, "Offset mismatch for UMeshCosmeticsAppliedSchemaData::SchemaAsset");

// /Script/MeshCosmetics.MeshCosmeticsLayoutSchema
// Kind: Class; super: FortApparelLayoutItemDefinition
class UMeshCosmeticsLayoutSchema
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    TMap<void*, void*> SlotDataConfig; // 0x00A0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> SlottedCustomizableObjects; // 0x00B0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMeshCosmeticsLayoutSchema, SlotDataConfig) == 160, "Offset mismatch for UMeshCosmeticsLayoutSchema::SlotDataConfig");
static_assert(offsetof(UMeshCosmeticsLayoutSchema, SlottedCustomizableObjects) == 176, "Offset mismatch for UMeshCosmeticsLayoutSchema::SlottedCustomizableObjects");

// /Script/MeshCosmetics.MeshCosmeticsOption_ApplyAssembledMeshSchema
// Kind: Class; super: FortCosmeticFlowOption
class UMeshCosmeticsOption_ApplyAssembledMeshSchema
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshCosmetics.MeshCosmeticsOption_ApplyCustomizableObject
// Kind: Class; super: FortCosmeticFlowOption
class UMeshCosmeticsOption_ApplyCustomizableObject
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshCosmetics.MeshCosmeticsStep_ChooseParameters
// Kind: Class; super: FortCosmeticStep
class UMeshCosmeticsStep_ChooseParameters
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t FlowgraphKey[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMeshCosmeticsStep_ChooseParameters, FlowgraphKey) == 88, "Offset mismatch for UMeshCosmeticsStep_ChooseParameters::FlowgraphKey");

// /Script/MeshCosmetics.MeshCosmeticsStep_CommitChosenParams
// Kind: Class; super: FortCosmeticStep
class UMeshCosmeticsStep_CommitChosenParams
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t FlowgraphKey[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMeshCosmeticsStep_CommitChosenParams, FlowgraphKey) == 88, "Offset mismatch for UMeshCosmeticsStep_CommitChosenParams::FlowgraphKey");

// /Script/MeshCosmetics.MeshCosmeticsStep_CompileCustomizableObjects
// Kind: Class; super: FortCosmeticStep
class UMeshCosmeticsStep_CompileCustomizableObjects
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t FlowgraphKey[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMeshCosmeticsStep_CompileCustomizableObjects, FlowgraphKey) == 88, "Offset mismatch for UMeshCosmeticsStep_CompileCustomizableObjects::FlowgraphKey");

// /Script/MeshCosmetics.MeshCosmeticsStep_ComponentRemoval
// Kind: Class; super: FortCosmeticStep
class UMeshCosmeticsStep_ComponentRemoval
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t FlowgraphKey[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMeshCosmeticsStep_ComponentRemoval, FlowgraphKey) == 88, "Offset mismatch for UMeshCosmeticsStep_ComponentRemoval::FlowgraphKey");

// /Script/MeshCosmetics.MeshCosmeticsStep_HandleGeneratedMesh
// Kind: Class; super: FortCosmeticStep
class UMeshCosmeticsStep_HandleGeneratedMesh
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t FlowgraphKey[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMeshCosmeticsStep_HandleGeneratedMesh, FlowgraphKey) == 88, "Offset mismatch for UMeshCosmeticsStep_HandleGeneratedMesh::FlowgraphKey");

// /Script/MeshCosmetics.MeshCosmeticsStep_PlaceComponent
// Kind: Class; super: FortCosmeticStep
class UMeshCosmeticsStep_PlaceComponent
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t FlowgraphKey[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMeshCosmeticsStep_PlaceComponent, FlowgraphKey) == 88, "Offset mismatch for UMeshCosmeticsStep_PlaceComponent::FlowgraphKey");

// /Script/MeshCosmetics.MeshCosmeticsStep_RemoveCustomizableSkeletalComponents
// Kind: Class; super: FortCosmeticStep
class UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t FlowgraphKey[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents, FlowgraphKey) == 88, "Offset mismatch for UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents::FlowgraphKey");

// /Script/MeshCosmetics.MeshCosmeticsSupportedSchemaData
// Kind: Class; super: FortCosmeticItemAdditionalData
class UMeshCosmeticsSupportedSchemaData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> SupportedSchemas; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMeshCosmeticsSupportedSchemaData, SupportedSchemas) == 40, "Offset mismatch for UMeshCosmeticsSupportedSchemaData::SupportedSchemas");
