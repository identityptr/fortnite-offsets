/**
 * decamp dumper generated SDK
 * Package: /Script/VehicleCosmeticsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/VehicleCosmeticsRuntime.AttachOverrideInfo
// Kind: ScriptStruct; super: none
struct FAttachOverrideInfo
{
public:
    std::uint8_t AttachmentRule; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0xF]; // 0x0001
    std::uint8_t AttachOverride[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAttachOverrideInfo, AttachmentRule) == 0, "Offset mismatch for FAttachOverrideInfo::AttachmentRule");
static_assert(offsetof(FAttachOverrideInfo, AttachOverride) == 16, "Offset mismatch for FAttachOverrideInfo::AttachOverride");

// /Script/VehicleCosmeticsRuntime.BoosterAttachInfo
// Kind: ScriptStruct; super: none
struct FBoosterAttachInfo
{
public:
    std::uint8_t BoosterSocket[0x80]; // 0x0000 (Size: 0x80, Type: StructProperty)
    std::int32_t BoosterPortsNum; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0xC]; // 0x0084
    std::uint8_t BoosterAttachOverride[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBoosterAttachInfo, BoosterSocket) == 0, "Offset mismatch for FBoosterAttachInfo::BoosterSocket");
static_assert(offsetof(FBoosterAttachInfo, BoosterPortsNum) == 128, "Offset mismatch for FBoosterAttachInfo::BoosterPortsNum");
static_assert(offsetof(FBoosterAttachInfo, BoosterAttachOverride) == 144, "Offset mismatch for FBoosterAttachInfo::BoosterAttachOverride");

// /Script/VehicleCosmeticsRuntime.COParamsVariantDef
// Kind: ScriptStruct; super: BaseVariantDef
struct FCOParamsVariantDef
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    TSoftObjectPtr<void> COParamsDataAsset; // 0x00A0 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FCOParamsVariantDef, COParamsDataAsset) == 160, "Offset mismatch for FCOParamsVariantDef::COParamsDataAsset");

// /Script/VehicleCosmeticsRuntime.CachedCOIEntry
// Kind: ScriptStruct; super: none
struct FCachedCOIEntry
{
public:
    void* Instance; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FCachedCOIEntry, Instance) == 0, "Offset mismatch for FCachedCOIEntry::Instance");

// /Script/VehicleCosmeticsRuntime.ColorMappingData
// Kind: ScriptStruct; super: none
struct FColorMappingData
{
public:
    std::uint8_t ColorName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ColorRange[0x24]; // 0x0004 (Size: 0x24, Type: StructProperty)
    std::uint8_t BodyColorParameters[0x60]; // 0x0028 (Size: 0x60, Type: StructProperty)
    std::uint8_t BodyGlowColorParameters[0x60]; // 0x0088 (Size: 0x60, Type: StructProperty)
    std::uint8_t BodyPaintedParameters[0x60]; // 0x00E8 (Size: 0x60, Type: StructProperty)
    std::uint8_t SkinColorParameters[0x60]; // 0x0148 (Size: 0x60, Type: StructProperty)
    std::uint8_t SkinPaintedParameters[0x60]; // 0x01A8 (Size: 0x60, Type: StructProperty)
    std::uint8_t WheelPaintedParameters[0x60]; // 0x0208 (Size: 0x60, Type: StructProperty)
    std::uint8_t MacaronPaintedParameters[0x60]; // 0x0268 (Size: 0x60, Type: StructProperty)
    std::uint8_t ZestPaintedParameters[0x60]; // 0x02C8 (Size: 0x60, Type: StructProperty)
    std::uint8_t BoosterPaintedParameters[0x60]; // 0x0328 (Size: 0x60, Type: StructProperty)
    std::uint8_t DriftTrailPaintedParameters[0x1]; // 0x0388 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FColorMappingData, ColorName) == 0, "Offset mismatch for FColorMappingData::ColorName");
static_assert(offsetof(FColorMappingData, ColorRange) == 4, "Offset mismatch for FColorMappingData::ColorRange");
static_assert(offsetof(FColorMappingData, BodyColorParameters) == 40, "Offset mismatch for FColorMappingData::BodyColorParameters");
static_assert(offsetof(FColorMappingData, BodyGlowColorParameters) == 136, "Offset mismatch for FColorMappingData::BodyGlowColorParameters");
static_assert(offsetof(FColorMappingData, BodyPaintedParameters) == 232, "Offset mismatch for FColorMappingData::BodyPaintedParameters");
static_assert(offsetof(FColorMappingData, SkinColorParameters) == 328, "Offset mismatch for FColorMappingData::SkinColorParameters");
static_assert(offsetof(FColorMappingData, SkinPaintedParameters) == 424, "Offset mismatch for FColorMappingData::SkinPaintedParameters");
static_assert(offsetof(FColorMappingData, WheelPaintedParameters) == 520, "Offset mismatch for FColorMappingData::WheelPaintedParameters");
static_assert(offsetof(FColorMappingData, MacaronPaintedParameters) == 616, "Offset mismatch for FColorMappingData::MacaronPaintedParameters");
static_assert(offsetof(FColorMappingData, ZestPaintedParameters) == 712, "Offset mismatch for FColorMappingData::ZestPaintedParameters");
static_assert(offsetof(FColorMappingData, BoosterPaintedParameters) == 808, "Offset mismatch for FColorMappingData::BoosterPaintedParameters");
static_assert(offsetof(FColorMappingData, DriftTrailPaintedParameters) == 904, "Offset mismatch for FColorMappingData::DriftTrailPaintedParameters");

// /Script/VehicleCosmeticsRuntime.ColorMatchRange
// Kind: ScriptStruct; super: none
struct FColorMatchRange
{
public:
    std::uint8_t min[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t max[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FColorMatchRange, min) == 0, "Offset mismatch for FColorMatchRange::min");
static_assert(offsetof(FColorMatchRange, max) == 16, "Offset mismatch for FColorMatchRange::max");

// /Script/VehicleCosmeticsRuntime.DuallyWheelInfo
// Kind: ScriptStruct; super: none
struct FDuallyWheelInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleCosmeticsRuntime.ExhaustEffectInfo
// Kind: ScriptStruct; super: none
struct FExhaustEffectInfo
{
public:
    std::uint8_t bEnableExhaust; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FExhaustEffectInfo, bEnableExhaust) == 0, "Offset mismatch for FExhaustEffectInfo::bEnableExhaust");

// /Script/VehicleCosmeticsRuntime.HeadlightEffectInfo
// Kind: ScriptStruct; super: none
struct FHeadlightEffectInfo
{
public:
    std::int32_t HeadlightCount; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> HeadlightColorArray; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FHeadlightEffectInfo, HeadlightCount) == 0, "Offset mismatch for FHeadlightEffectInfo::HeadlightCount");
static_assert(offsetof(FHeadlightEffectInfo, HeadlightColorArray) == 8, "Offset mismatch for FHeadlightEffectInfo::HeadlightColorArray");

// /Script/VehicleCosmeticsRuntime.MaterialSlotWithParameterInfo
// Kind: ScriptStruct; super: none
struct FMaterialSlotWithParameterInfo
{
public:
    std::uint8_t MaterialSlotName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t MaterialParameterName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    float MaterialParameterValue; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FMaterialSlotWithParameterInfo, MaterialSlotName) == 0, "Offset mismatch for FMaterialSlotWithParameterInfo::MaterialSlotName");
static_assert(offsetof(FMaterialSlotWithParameterInfo, MaterialParameterName) == 4, "Offset mismatch for FMaterialSlotWithParameterInfo::MaterialParameterName");
static_assert(offsetof(FMaterialSlotWithParameterInfo, MaterialParameterValue) == 8, "Offset mismatch for FMaterialSlotWithParameterInfo::MaterialParameterValue");

// /Script/VehicleCosmeticsRuntime.ReplicatedCosmeticLoadoutData
// Kind: ScriptStruct; super: none
struct FReplicatedCosmeticLoadoutData
{
public:
    std::uint8_t CosmeticLoadout[0x28]; // 0x0000 (Size: 0x28, Type: StructProperty)
    std::uint8_t PrimaryArchetype[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FReplicatedCosmeticLoadoutData, CosmeticLoadout) == 0, "Offset mismatch for FReplicatedCosmeticLoadoutData::CosmeticLoadout");
static_assert(offsetof(FReplicatedCosmeticLoadoutData, PrimaryArchetype) == 40, "Offset mismatch for FReplicatedCosmeticLoadoutData::PrimaryArchetype");

// /Script/VehicleCosmeticsRuntime.SpinnerWheelInfo
// Kind: ScriptStruct; super: none
struct FSpinnerWheelInfo
{
public:
    std::uint8_t bShouldSpin; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float SpinAccelRate; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float SpinDecelRate; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float SpinMaxSpeed; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSpinnerWheelInfo, bShouldSpin) == 0, "Offset mismatch for FSpinnerWheelInfo::bShouldSpin");
static_assert(offsetof(FSpinnerWheelInfo, SpinAccelRate) == 4, "Offset mismatch for FSpinnerWheelInfo::SpinAccelRate");
static_assert(offsetof(FSpinnerWheelInfo, SpinDecelRate) == 8, "Offset mismatch for FSpinnerWheelInfo::SpinDecelRate");
static_assert(offsetof(FSpinnerWheelInfo, SpinMaxSpeed) == 12, "Offset mismatch for FSpinnerWheelInfo::SpinMaxSpeed");

// /Script/VehicleCosmeticsRuntime.ThrusterAttachInfo
// Kind: ScriptStruct; super: none
struct FThrusterAttachInfo
{
public:
    std::uint8_t ThrusterAttachOverride[0x70]; // 0x0000 (Size: 0x70, Type: StructProperty)
    std::uint8_t ThrusterMeshInfo[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FThrusterAttachInfo, ThrusterAttachOverride) == 0, "Offset mismatch for FThrusterAttachInfo::ThrusterAttachOverride");
static_assert(offsetof(FThrusterAttachInfo, ThrusterMeshInfo) == 112, "Offset mismatch for FThrusterAttachInfo::ThrusterMeshInfo");

// /Script/VehicleCosmeticsRuntime.ThrusterMeshInfo
// Kind: ScriptStruct; super: none
struct FThrusterMeshInfo
{
public:
    std::uint8_t ThrusterMesh[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t BoostDensity; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t AuxilaryDensity; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::int32_t NumberOfBoosterPorts; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t NumberOfAuxiliaryPorts; // 0x002C (Size: 0x4, Type: IntProperty)
    std::uint8_t Booster_LF_Scale[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t Auxiliary_LF_Scale[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FThrusterMeshInfo, ThrusterMesh) == 0, "Offset mismatch for FThrusterMeshInfo::ThrusterMesh");
static_assert(offsetof(FThrusterMeshInfo, BoostDensity) == 32, "Offset mismatch for FThrusterMeshInfo::BoostDensity");
static_assert(offsetof(FThrusterMeshInfo, AuxilaryDensity) == 36, "Offset mismatch for FThrusterMeshInfo::AuxilaryDensity");
static_assert(offsetof(FThrusterMeshInfo, NumberOfBoosterPorts) == 40, "Offset mismatch for FThrusterMeshInfo::NumberOfBoosterPorts");
static_assert(offsetof(FThrusterMeshInfo, NumberOfAuxiliaryPorts) == 44, "Offset mismatch for FThrusterMeshInfo::NumberOfAuxiliaryPorts");
static_assert(offsetof(FThrusterMeshInfo, Booster_LF_Scale) == 48, "Offset mismatch for FThrusterMeshInfo::Booster_LF_Scale");
static_assert(offsetof(FThrusterMeshInfo, Auxiliary_LF_Scale) == 64, "Offset mismatch for FThrusterMeshInfo::Auxiliary_LF_Scale");

// /Script/VehicleCosmeticsRuntime.TirePopInfo
// Kind: ScriptStruct; super: none
struct FTirePopInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleCosmeticsRuntime.TirePopReplacementInfo
// Kind: ScriptStruct; super: none
struct FTirePopReplacementInfo
{
public:
    TWeakObjectPtr<void> ReplacementWheelMesh; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> ReplacementDuallyWheelMesh; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FTirePopReplacementInfo, ReplacementWheelMesh) == 0, "Offset mismatch for FTirePopReplacementInfo::ReplacementWheelMesh");
static_assert(offsetof(FTirePopReplacementInfo, ReplacementDuallyWheelMesh) == 8, "Offset mismatch for FTirePopReplacementInfo::ReplacementDuallyWheelMesh");

// /Script/VehicleCosmeticsRuntime.TirePopUsingBoneInfo
// Kind: ScriptStruct; super: TirePopInfo
struct FTirePopUsingBoneInfo
{
public:
    std::uint8_t WheelSkeletonReference[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t WheelBone[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FTirePopUsingBoneInfo, WheelSkeletonReference) == 0, "Offset mismatch for FTirePopUsingBoneInfo::WheelSkeletonReference");
static_assert(offsetof(FTirePopUsingBoneInfo, WheelBone) == 32, "Offset mismatch for FTirePopUsingBoneInfo::WheelBone");

// /Script/VehicleCosmeticsRuntime.TirePopUsingMaterialParameterInfo
// Kind: ScriptStruct; super: TirePopInfo
struct FTirePopUsingMaterialParameterInfo
{
public:
    TArray<void*> WheelMaterialSlotNames; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    FName WheelMaterialParameterName; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FTirePopUsingMaterialParameterInfo, WheelMaterialSlotNames) == 0, "Offset mismatch for FTirePopUsingMaterialParameterInfo::WheelMaterialSlotNames");
static_assert(offsetof(FTirePopUsingMaterialParameterInfo, WheelMaterialParameterName) == 16, "Offset mismatch for FTirePopUsingMaterialParameterInfo::WheelMaterialParameterName");

// /Script/VehicleCosmeticsRuntime.TirePopUsingReplacementMeshInfo
// Kind: ScriptStruct; super: TirePopInfo
struct FTirePopUsingReplacementMeshInfo
{
public:
    std::uint8_t WheelSkeletonReference[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t WheelBone[0x80]; // 0x0020 (Size: 0x80, Type: StructProperty)
    std::uint8_t WheelReplacementMesh[0x20]; // 0x00A0 (Size: 0x20, Type: SoftObjectProperty)
    TMap<void*, void*> WheelTransformInfos; // 0x00C0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FTirePopUsingReplacementMeshInfo, WheelSkeletonReference) == 0, "Offset mismatch for FTirePopUsingReplacementMeshInfo::WheelSkeletonReference");
static_assert(offsetof(FTirePopUsingReplacementMeshInfo, WheelBone) == 32, "Offset mismatch for FTirePopUsingReplacementMeshInfo::WheelBone");
static_assert(offsetof(FTirePopUsingReplacementMeshInfo, WheelReplacementMesh) == 160, "Offset mismatch for FTirePopUsingReplacementMeshInfo::WheelReplacementMesh");
static_assert(offsetof(FTirePopUsingReplacementMeshInfo, WheelTransformInfos) == 192, "Offset mismatch for FTirePopUsingReplacementMeshInfo::WheelTransformInfos");

// /Script/VehicleCosmeticsRuntime.VehicleAudioCosmeticChooserInput
// Kind: ScriptStruct; super: none
struct FVehicleAudioCosmeticChooserInput
{
public:
    std::uint8_t InCosmeticTags[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVehicleAudioCosmeticChooserInput, InCosmeticTags) == 0, "Offset mismatch for FVehicleAudioCosmeticChooserInput::InCosmeticTags");

// /Script/VehicleCosmeticsRuntime.VehicleAudioCosmeticChooserOutput
// Kind: ScriptStruct; super: none
struct FVehicleAudioCosmeticChooserOutput
{
public:
    std::uint8_t VehicleAudioCosmeticData[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVehicleAudioCosmeticChooserOutput, VehicleAudioCosmeticData) == 0, "Offset mismatch for FVehicleAudioCosmeticChooserOutput::VehicleAudioCosmeticData");

// /Script/VehicleCosmeticsRuntime.VehicleAudioCosmeticDataBase
// Kind: ScriptStruct; super: none
struct FVehicleAudioCosmeticDataBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleCosmeticsRuntime.VehicleAudioCosmeticDataStruct
// Kind: ScriptStruct; super: VehicleAudioCosmeticDataBase
struct FVehicleAudioCosmeticDataStruct
{
public:
    std::uint8_t EngineSound[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    void* EngineIgnitionSound; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    void* EngineOffSound; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* GearShiftUpSound; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* GearShiftDownSound; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* HornSound; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsIP; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreShifting; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIgnoreExhaustPops; // 0x004A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x5]; // 0x004B
    TArray<void*> MotorSimConfigData; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVehicleAudioCosmeticDataStruct, EngineSound) == 0, "Offset mismatch for FVehicleAudioCosmeticDataStruct::EngineSound");
static_assert(offsetof(FVehicleAudioCosmeticDataStruct, EngineIgnitionSound) == 32, "Offset mismatch for FVehicleAudioCosmeticDataStruct::EngineIgnitionSound");
static_assert(offsetof(FVehicleAudioCosmeticDataStruct, EngineOffSound) == 40, "Offset mismatch for FVehicleAudioCosmeticDataStruct::EngineOffSound");
static_assert(offsetof(FVehicleAudioCosmeticDataStruct, GearShiftUpSound) == 48, "Offset mismatch for FVehicleAudioCosmeticDataStruct::GearShiftUpSound");
static_assert(offsetof(FVehicleAudioCosmeticDataStruct, GearShiftDownSound) == 56, "Offset mismatch for FVehicleAudioCosmeticDataStruct::GearShiftDownSound");
static_assert(offsetof(FVehicleAudioCosmeticDataStruct, HornSound) == 64, "Offset mismatch for FVehicleAudioCosmeticDataStruct::HornSound");
static_assert(offsetof(FVehicleAudioCosmeticDataStruct, bIsIP) == 72, "Offset mismatch for FVehicleAudioCosmeticDataStruct::bIsIP");
static_assert(offsetof(FVehicleAudioCosmeticDataStruct, bIgnoreShifting) == 73, "Offset mismatch for FVehicleAudioCosmeticDataStruct::bIgnoreShifting");
static_assert(offsetof(FVehicleAudioCosmeticDataStruct, bIgnoreExhaustPops) == 74, "Offset mismatch for FVehicleAudioCosmeticDataStruct::bIgnoreExhaustPops");
static_assert(offsetof(FVehicleAudioCosmeticDataStruct, MotorSimConfigData) == 80, "Offset mismatch for FVehicleAudioCosmeticDataStruct::MotorSimConfigData");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAdditionalParameterInfos
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsAdditionalParameterInfos
{
public:
    TArray<void*> FloatParameters; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IntParameters; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ColorParameters; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SkeletalMeshParameters; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MaterialParameters; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TextureParameters; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVehicleCosmeticsAdditionalParameterInfos, FloatParameters) == 0, "Offset mismatch for FVehicleCosmeticsAdditionalParameterInfos::FloatParameters");
static_assert(offsetof(FVehicleCosmeticsAdditionalParameterInfos, IntParameters) == 16, "Offset mismatch for FVehicleCosmeticsAdditionalParameterInfos::IntParameters");
static_assert(offsetof(FVehicleCosmeticsAdditionalParameterInfos, ColorParameters) == 32, "Offset mismatch for FVehicleCosmeticsAdditionalParameterInfos::ColorParameters");
static_assert(offsetof(FVehicleCosmeticsAdditionalParameterInfos, SkeletalMeshParameters) == 48, "Offset mismatch for FVehicleCosmeticsAdditionalParameterInfos::SkeletalMeshParameters");
static_assert(offsetof(FVehicleCosmeticsAdditionalParameterInfos, MaterialParameters) == 64, "Offset mismatch for FVehicleCosmeticsAdditionalParameterInfos::MaterialParameters");
static_assert(offsetof(FVehicleCosmeticsAdditionalParameterInfos, TextureParameters) == 80, "Offset mismatch for FVehicleCosmeticsAdditionalParameterInfos::TextureParameters");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAnimInfo
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsAnimInfo
{
public:
    std::uint8_t VehicleTagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    TSoftClassPtr<void> AnimClass; // 0x0048 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FVehicleCosmeticsAnimInfo, VehicleTagQuery) == 0, "Offset mismatch for FVehicleCosmeticsAnimInfo::VehicleTagQuery");
static_assert(offsetof(FVehicleCosmeticsAnimInfo, AnimClass) == 72, "Offset mismatch for FVehicleCosmeticsAnimInfo::AnimClass");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAnimPreviewSettings
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsAnimPreviewSettings
{
public:
    float PreviewWheelSpinVelocity; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TMap<void*, void*> PreviewWheelTravelOffset; // 0x0008 (Size: 0x10, Type: MapProperty)
    float PreviewMacaronSteeringSpeed; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float PreviewMacaronSteeringMaxAngle; // 0x001C (Size: 0x4, Type: FloatProperty)
    std::uint8_t PreviewMacaronSteeringCycles; // 0x0020 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PreviewMacaronSteeringStickiness; // 0x0021 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0022
    std::uint8_t PreviewZestInitialVehicleVelocity[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    float PreviewZestVehicleDecelerationRate; // 0x0040 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FVehicleCosmeticsAnimPreviewSettings, PreviewWheelSpinVelocity) == 0, "Offset mismatch for FVehicleCosmeticsAnimPreviewSettings::PreviewWheelSpinVelocity");
static_assert(offsetof(FVehicleCosmeticsAnimPreviewSettings, PreviewWheelTravelOffset) == 8, "Offset mismatch for FVehicleCosmeticsAnimPreviewSettings::PreviewWheelTravelOffset");
static_assert(offsetof(FVehicleCosmeticsAnimPreviewSettings, PreviewMacaronSteeringSpeed) == 24, "Offset mismatch for FVehicleCosmeticsAnimPreviewSettings::PreviewMacaronSteeringSpeed");
static_assert(offsetof(FVehicleCosmeticsAnimPreviewSettings, PreviewMacaronSteeringMaxAngle) == 28, "Offset mismatch for FVehicleCosmeticsAnimPreviewSettings::PreviewMacaronSteeringMaxAngle");
static_assert(offsetof(FVehicleCosmeticsAnimPreviewSettings, PreviewMacaronSteeringCycles) == 32, "Offset mismatch for FVehicleCosmeticsAnimPreviewSettings::PreviewMacaronSteeringCycles");
static_assert(offsetof(FVehicleCosmeticsAnimPreviewSettings, PreviewMacaronSteeringStickiness) == 33, "Offset mismatch for FVehicleCosmeticsAnimPreviewSettings::PreviewMacaronSteeringStickiness");
static_assert(offsetof(FVehicleCosmeticsAnimPreviewSettings, PreviewZestInitialVehicleVelocity) == 40, "Offset mismatch for FVehicleCosmeticsAnimPreviewSettings::PreviewZestInitialVehicleVelocity");
static_assert(offsetof(FVehicleCosmeticsAnimPreviewSettings, PreviewZestVehicleDecelerationRate) == 64, "Offset mismatch for FVehicleCosmeticsAnimPreviewSettings::PreviewZestVehicleDecelerationRate");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAttachmentQueryInfo
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsAttachmentQueryInfo
{
public:
    std::uint8_t VehicleTagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t AttachmentInfo[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVehicleCosmeticsAttachmentQueryInfo, VehicleTagQuery) == 0, "Offset mismatch for FVehicleCosmeticsAttachmentQueryInfo::VehicleTagQuery");
static_assert(offsetof(FVehicleCosmeticsAttachmentQueryInfo, AttachmentInfo) == 72, "Offset mismatch for FVehicleCosmeticsAttachmentQueryInfo::AttachmentInfo");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBespokeBehaviorRules
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsBespokeBehaviorRules
{
public:
    TArray<void*> Rules; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVehicleCosmeticsBespokeBehaviorRules, Rules) == 0, "Offset mismatch for FVehicleCosmeticsBespokeBehaviorRules::Rules");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBespokeBehaviorSlotRule
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsBespokeBehaviorSlotRule
{
public:
    std::uint8_t SlotTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Rule[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVehicleCosmeticsBespokeBehaviorSlotRule, SlotTag) == 0, "Offset mismatch for FVehicleCosmeticsBespokeBehaviorSlotRule::SlotTag");
static_assert(offsetof(FVehicleCosmeticsBespokeBehaviorSlotRule, Rule) == 8, "Offset mismatch for FVehicleCosmeticsBespokeBehaviorSlotRule::Rule");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBodyAttachmentQueryInfo
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsBodyAttachmentQueryInfo
{
public:
    std::uint8_t VehicleTagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t BodyAttachmentInfo[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVehicleCosmeticsBodyAttachmentQueryInfo, VehicleTagQuery) == 0, "Offset mismatch for FVehicleCosmeticsBodyAttachmentQueryInfo::VehicleTagQuery");
static_assert(offsetof(FVehicleCosmeticsBodyAttachmentQueryInfo, BodyAttachmentInfo) == 72, "Offset mismatch for FVehicleCosmeticsBodyAttachmentQueryInfo::BodyAttachmentInfo");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBodyPhysicsInfo
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsBodyPhysicsInfo
{
public:
    std::uint8_t CenterOfMass[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    TSoftObjectPtr<void> PhysicsAssetOverride; // 0x0018 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FVehicleCosmeticsBodyPhysicsInfo, CenterOfMass) == 0, "Offset mismatch for FVehicleCosmeticsBodyPhysicsInfo::CenterOfMass");
static_assert(offsetof(FVehicleCosmeticsBodyPhysicsInfo, PhysicsAssetOverride) == 24, "Offset mismatch for FVehicleCosmeticsBodyPhysicsInfo::PhysicsAssetOverride");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBodyPhysicsQueryInfo
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsBodyPhysicsQueryInfo
{
public:
    std::uint8_t VehicleTagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t PhysicsInfo[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVehicleCosmeticsBodyPhysicsQueryInfo, VehicleTagQuery) == 0, "Offset mismatch for FVehicleCosmeticsBodyPhysicsQueryInfo::VehicleTagQuery");
static_assert(offsetof(FVehicleCosmeticsBodyPhysicsQueryInfo, PhysicsInfo) == 72, "Offset mismatch for FVehicleCosmeticsBodyPhysicsQueryInfo::PhysicsInfo");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBodyReactiveQueryInfo
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsBodyReactiveQueryInfo
{
public:
    std::uint8_t VehicleTagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    TArray<void*> ReactiveMaterialInfos; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVehicleCosmeticsBodyReactiveQueryInfo, VehicleTagQuery) == 0, "Offset mismatch for FVehicleCosmeticsBodyReactiveQueryInfo::VehicleTagQuery");
static_assert(offsetof(FVehicleCosmeticsBodyReactiveQueryInfo, ReactiveMaterialInfos) == 72, "Offset mismatch for FVehicleCosmeticsBodyReactiveQueryInfo::ReactiveMaterialInfos");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBodyWindowInfo
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsBodyWindowInfo
{
public:
    FName WindowDataTableParameterName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t WindowRow[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVehicleCosmeticsBodyWindowInfo, WindowDataTableParameterName) == 0, "Offset mismatch for FVehicleCosmeticsBodyWindowInfo::WindowDataTableParameterName");
static_assert(offsetof(FVehicleCosmeticsBodyWindowInfo, WindowRow) == 8, "Offset mismatch for FVehicleCosmeticsBodyWindowInfo::WindowRow");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBodyWindowQueryInfo
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsBodyWindowQueryInfo
{
public:
    std::uint8_t VehicleTagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t WindowInfo[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVehicleCosmeticsBodyWindowQueryInfo, VehicleTagQuery) == 0, "Offset mismatch for FVehicleCosmeticsBodyWindowQueryInfo::VehicleTagQuery");
static_assert(offsetof(FVehicleCosmeticsBodyWindowQueryInfo, WindowInfo) == 72, "Offset mismatch for FVehicleCosmeticsBodyWindowQueryInfo::WindowInfo");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCosmeticAttachmentQueryInfo
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsCosmeticAttachmentQueryInfo
{
public:
    std::uint8_t VehicleTagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    TArray<void*> CosmeticAttachments; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVehicleCosmeticsCosmeticAttachmentQueryInfo, VehicleTagQuery) == 0, "Offset mismatch for FVehicleCosmeticsCosmeticAttachmentQueryInfo::VehicleTagQuery");
static_assert(offsetof(FVehicleCosmeticsCosmeticAttachmentQueryInfo, CosmeticAttachments) == 72, "Offset mismatch for FVehicleCosmeticsCosmeticAttachmentQueryInfo::CosmeticAttachments");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCustomizableObjectColorInfo
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsCustomizableObjectColorInfo
{
public:
    std::uint8_t ParameterName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ParameterValue[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVehicleCosmeticsCustomizableObjectColorInfo, ParameterName) == 0, "Offset mismatch for FVehicleCosmeticsCustomizableObjectColorInfo::ParameterName");
static_assert(offsetof(FVehicleCosmeticsCustomizableObjectColorInfo, ParameterValue) == 4, "Offset mismatch for FVehicleCosmeticsCustomizableObjectColorInfo::ParameterValue");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCustomizableObjectFloatInfo
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsCustomizableObjectFloatInfo
{
public:
    std::uint8_t ParameterName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float ParameterValue; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FVehicleCosmeticsCustomizableObjectFloatInfo, ParameterName) == 0, "Offset mismatch for FVehicleCosmeticsCustomizableObjectFloatInfo::ParameterName");
static_assert(offsetof(FVehicleCosmeticsCustomizableObjectFloatInfo, ParameterValue) == 4, "Offset mismatch for FVehicleCosmeticsCustomizableObjectFloatInfo::ParameterValue");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCustomizableObjectIntInfo
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsCustomizableObjectIntInfo
{
public:
    std::uint8_t ParameterName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName ParameterValue; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FVehicleCosmeticsCustomizableObjectIntInfo, ParameterName) == 0, "Offset mismatch for FVehicleCosmeticsCustomizableObjectIntInfo::ParameterName");
static_assert(offsetof(FVehicleCosmeticsCustomizableObjectIntInfo, ParameterValue) == 4, "Offset mismatch for FVehicleCosmeticsCustomizableObjectIntInfo::ParameterValue");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCustomizableObjectMaterialInfo
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsCustomizableObjectMaterialInfo
{
public:
    FName ParameterName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TSoftObjectPtr<void> ParameterValue; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FVehicleCosmeticsCustomizableObjectMaterialInfo, ParameterName) == 0, "Offset mismatch for FVehicleCosmeticsCustomizableObjectMaterialInfo::ParameterName");
static_assert(offsetof(FVehicleCosmeticsCustomizableObjectMaterialInfo, ParameterValue) == 8, "Offset mismatch for FVehicleCosmeticsCustomizableObjectMaterialInfo::ParameterValue");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCustomizableObjectSkeletalMeshInfo
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsCustomizableObjectSkeletalMeshInfo
{
public:
    FName ParameterName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TSoftObjectPtr<void> ParameterValue; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FVehicleCosmeticsCustomizableObjectSkeletalMeshInfo, ParameterName) == 0, "Offset mismatch for FVehicleCosmeticsCustomizableObjectSkeletalMeshInfo::ParameterName");
static_assert(offsetof(FVehicleCosmeticsCustomizableObjectSkeletalMeshInfo, ParameterValue) == 8, "Offset mismatch for FVehicleCosmeticsCustomizableObjectSkeletalMeshInfo::ParameterValue");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCustomizableObjectTextureInfo
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsCustomizableObjectTextureInfo
{
public:
    FName ParameterName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TSoftObjectPtr<void> ParameterValue; // 0x0008 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FVehicleCosmeticsCustomizableObjectTextureInfo, ParameterName) == 0, "Offset mismatch for FVehicleCosmeticsCustomizableObjectTextureInfo::ParameterName");
static_assert(offsetof(FVehicleCosmeticsCustomizableObjectTextureInfo, ParameterValue) == 8, "Offset mismatch for FVehicleCosmeticsCustomizableObjectTextureInfo::ParameterValue");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsDefaultLoadoutInfo
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsDefaultLoadoutInfo
{
public:
    std::uint8_t VehicleTagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t DefaultLoadout[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVehicleCosmeticsDefaultLoadoutInfo, VehicleTagQuery) == 0, "Offset mismatch for FVehicleCosmeticsDefaultLoadoutInfo::VehicleTagQuery");
static_assert(offsetof(FVehicleCosmeticsDefaultLoadoutInfo, DefaultLoadout) == 72, "Offset mismatch for FVehicleCosmeticsDefaultLoadoutInfo::DefaultLoadout");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsEditorPreviewSlotInfo
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsEditorPreviewSlotInfo
{
public:
    std::uint8_t VehicleType[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t SlotTag[0x4]; // 0x0004 (Size: 0x4, Type: StructProperty)
    std::uint8_t SlotTemplate[0x20]; // 0x0008 (Size: 0x20, Type: SoftObjectProperty)
    FName SchemaTagName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FVehicleCosmeticsEditorPreviewSlotInfo, VehicleType) == 0, "Offset mismatch for FVehicleCosmeticsEditorPreviewSlotInfo::VehicleType");
static_assert(offsetof(FVehicleCosmeticsEditorPreviewSlotInfo, SlotTag) == 4, "Offset mismatch for FVehicleCosmeticsEditorPreviewSlotInfo::SlotTag");
static_assert(offsetof(FVehicleCosmeticsEditorPreviewSlotInfo, SlotTemplate) == 8, "Offset mismatch for FVehicleCosmeticsEditorPreviewSlotInfo::SlotTemplate");
static_assert(offsetof(FVehicleCosmeticsEditorPreviewSlotInfo, SchemaTagName) == 40, "Offset mismatch for FVehicleCosmeticsEditorPreviewSlotInfo::SchemaTagName");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsFailureInfo
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsFailureInfo
{
public:
    std::uint8_t Reason; // 0x0000 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FVehicleCosmeticsFailureInfo, Reason) == 0, "Offset mismatch for FVehicleCosmeticsFailureInfo::Reason");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsPreviewActorOverrideInfo
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsPreviewActorOverrideInfo
{
public:
    std::uint8_t CosmeticTagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    TSoftClassPtr<void> OverridenPreviewActor; // 0x0048 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FVehicleCosmeticsPreviewActorOverrideInfo, CosmeticTagQuery) == 0, "Offset mismatch for FVehicleCosmeticsPreviewActorOverrideInfo::CosmeticTagQuery");
static_assert(offsetof(FVehicleCosmeticsPreviewActorOverrideInfo, OverridenPreviewActor) == 72, "Offset mismatch for FVehicleCosmeticsPreviewActorOverrideInfo::OverridenPreviewActor");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsReactiveMaterialInfo
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsReactiveMaterialInfo
{
public:
    std::uint8_t ActionTag[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    FName MaterialParameter; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FVehicleCosmeticsReactiveMaterialInfo, ActionTag) == 0, "Offset mismatch for FVehicleCosmeticsReactiveMaterialInfo::ActionTag");
static_assert(offsetof(FVehicleCosmeticsReactiveMaterialInfo, MaterialParameter) == 4, "Offset mismatch for FVehicleCosmeticsReactiveMaterialInfo::MaterialParameter");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsRestrictionDefinition
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsRestrictionDefinition
{
public:
    std::uint8_t RequiredTagQuery[0x48]; // 0x0000 (Size: 0x48, Type: StructProperty)
    std::uint8_t RequiredBodyItem[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    FText ItemLockerRestrictedText; // 0x0068 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FVehicleCosmeticsRestrictionDefinition, RequiredTagQuery) == 0, "Offset mismatch for FVehicleCosmeticsRestrictionDefinition::RequiredTagQuery");
static_assert(offsetof(FVehicleCosmeticsRestrictionDefinition, RequiredBodyItem) == 72, "Offset mismatch for FVehicleCosmeticsRestrictionDefinition::RequiredBodyItem");
static_assert(offsetof(FVehicleCosmeticsRestrictionDefinition, ItemLockerRestrictedText) == 104, "Offset mismatch for FVehicleCosmeticsRestrictionDefinition::ItemLockerRestrictedText");

// /Script/VehicleCosmeticsRuntime.WheelAttachInfo
// Kind: ScriptStruct; super: none
struct FWheelAttachInfo
{
public:
    std::uint8_t WheelLocation; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0xF]; // 0x0001
    std::uint8_t WheelSocket[0x80]; // 0x0010 (Size: 0x80, Type: StructProperty)
    std::uint8_t bEnableDuallyWheel; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0091
    std::uint8_t DuallyWheelSocket[0x80]; // 0x00A0 (Size: 0x80, Type: StructProperty)
    std::uint8_t bUseGenericInnerWheel; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0121
    FName DuallyWheelComponentNameOverride; // 0x0124 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FWheelAttachInfo, WheelLocation) == 0, "Offset mismatch for FWheelAttachInfo::WheelLocation");
static_assert(offsetof(FWheelAttachInfo, WheelSocket) == 16, "Offset mismatch for FWheelAttachInfo::WheelSocket");
static_assert(offsetof(FWheelAttachInfo, bEnableDuallyWheel) == 144, "Offset mismatch for FWheelAttachInfo::bEnableDuallyWheel");
static_assert(offsetof(FWheelAttachInfo, DuallyWheelSocket) == 160, "Offset mismatch for FWheelAttachInfo::DuallyWheelSocket");
static_assert(offsetof(FWheelAttachInfo, bUseGenericInnerWheel) == 288, "Offset mismatch for FWheelAttachInfo::bUseGenericInnerWheel");
static_assert(offsetof(FWheelAttachInfo, DuallyWheelComponentNameOverride) == 292, "Offset mismatch for FWheelAttachInfo::DuallyWheelComponentNameOverride");

// /Script/VehicleCosmeticsRuntime.WheelInfo
// Kind: ScriptStruct; super: none
struct FWheelInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleCosmeticsRuntime.WheelSetupInfo
// Kind: ScriptStruct; super: none
struct FWheelSetupInfo
{
public:
    std::uint8_t WheelLocation; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t WheelOffset[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t WheelRotation[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t WheelScale[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    float RimRadiusOffset; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0054
    TArray<void*> WheelMaterialSlotInfos; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SpinnerWheelInfo[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t WheelFXInfo[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    FName WheelComponentNameOverride; // 0x0088 (Size: 0x8, Type: NameProperty)
    TArray<void*> BodyBonesToHideWhenAttached; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FWheelSetupInfo, WheelLocation) == 0, "Offset mismatch for FWheelSetupInfo::WheelLocation");
static_assert(offsetof(FWheelSetupInfo, WheelOffset) == 8, "Offset mismatch for FWheelSetupInfo::WheelOffset");
static_assert(offsetof(FWheelSetupInfo, WheelRotation) == 32, "Offset mismatch for FWheelSetupInfo::WheelRotation");
static_assert(offsetof(FWheelSetupInfo, WheelScale) == 56, "Offset mismatch for FWheelSetupInfo::WheelScale");
static_assert(offsetof(FWheelSetupInfo, RimRadiusOffset) == 80, "Offset mismatch for FWheelSetupInfo::RimRadiusOffset");
static_assert(offsetof(FWheelSetupInfo, WheelMaterialSlotInfos) == 88, "Offset mismatch for FWheelSetupInfo::WheelMaterialSlotInfos");
static_assert(offsetof(FWheelSetupInfo, SpinnerWheelInfo) == 104, "Offset mismatch for FWheelSetupInfo::SpinnerWheelInfo");
static_assert(offsetof(FWheelSetupInfo, WheelFXInfo) == 120, "Offset mismatch for FWheelSetupInfo::WheelFXInfo");
static_assert(offsetof(FWheelSetupInfo, WheelComponentNameOverride) == 136, "Offset mismatch for FWheelSetupInfo::WheelComponentNameOverride");
static_assert(offsetof(FWheelSetupInfo, BodyBonesToHideWhenAttached) == 144, "Offset mismatch for FWheelSetupInfo::BodyBonesToHideWhenAttached");

// /Script/VehicleCosmeticsRuntime.WheelTransformInfo
// Kind: ScriptStruct; super: none
struct FWheelTransformInfo
{
public:
    std::uint8_t WheelOffset[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t WheelRotation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t WheelScale[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWheelTransformInfo, WheelOffset) == 0, "Offset mismatch for FWheelTransformInfo::WheelOffset");
static_assert(offsetof(FWheelTransformInfo, WheelRotation) == 24, "Offset mismatch for FWheelTransformInfo::WheelRotation");
static_assert(offsetof(FWheelTransformInfo, WheelScale) == 48, "Offset mismatch for FWheelTransformInfo::WheelScale");

// /Script/VehicleCosmeticsRuntime.FortVehicleCOParamsVariant
// Kind: Class; super: FortCosmeticVariantBackedByArray
class UFortVehicleCOParamsVariant
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TArray<void*> RawCOParamsAssetOptions; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    FString COParamNameSuffix; // 0x0090 (Size: 0x10, Type: StrProperty)
    TMap<void*, void*> ParamNamesAppendSuffixMap; // 0x00A0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortVehicleCOParamsVariant, RawCOParamsAssetOptions) == 128, "Offset mismatch for UFortVehicleCOParamsVariant::RawCOParamsAssetOptions");
static_assert(offsetof(UFortVehicleCOParamsVariant, COParamNameSuffix) == 144, "Offset mismatch for UFortVehicleCOParamsVariant::COParamNameSuffix");
static_assert(offsetof(UFortVehicleCOParamsVariant, ParamNamesAppendSuffixMap) == 160, "Offset mismatch for UFortVehicleCOParamsVariant::ParamNamesAppendSuffixMap");

// /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition
// Kind: Class; super: AthenaCosmeticItemDefinition
class UFortVehicleCosmeticsItemDefinition
{
public:
    std::uint8_t Pad_0000[0x3F8]; // 0x0000
    std::uint8_t VehicleCosmeticsItemDef[0x20]; // 0x03F8 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> VehicleCosmeticsItemDefForTiers; // 0x0418 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ItemTypeTag[0x8]; // 0x0428 (Size: 0x8, Type: StructProperty)
    std::uint8_t PreviewConfig[0x20]; // 0x0430 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> RestrictionDefinitions; // 0x0450 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ItemPreviewVehicleBody[0x20]; // 0x0460 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> ItemPreviewBodyVariantOverrides; // 0x0480 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShouldSimulateSteering; // 0x0490 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortVehicleCosmeticsItemDefinition, VehicleCosmeticsItemDef) == 1016, "Offset mismatch for UFortVehicleCosmeticsItemDefinition::VehicleCosmeticsItemDef");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition, VehicleCosmeticsItemDefForTiers) == 1048, "Offset mismatch for UFortVehicleCosmeticsItemDefinition::VehicleCosmeticsItemDefForTiers");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition, ItemTypeTag) == 1064, "Offset mismatch for UFortVehicleCosmeticsItemDefinition::ItemTypeTag");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition, PreviewConfig) == 1072, "Offset mismatch for UFortVehicleCosmeticsItemDefinition::PreviewConfig");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition, RestrictionDefinitions) == 1104, "Offset mismatch for UFortVehicleCosmeticsItemDefinition::RestrictionDefinitions");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition, ItemPreviewVehicleBody) == 1120, "Offset mismatch for UFortVehicleCosmeticsItemDefinition::ItemPreviewVehicleBody");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition, ItemPreviewBodyVariantOverrides) == 1152, "Offset mismatch for UFortVehicleCosmeticsItemDefinition::ItemPreviewBodyVariantOverrides");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition, bShouldSimulateSteering) == 1168, "Offset mismatch for UFortVehicleCosmeticsItemDefinition::bShouldSimulateSteering");

// /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_Body
// Kind: Class; super: FortVehicleCosmeticsItemDefinition
class UFortVehicleCosmeticsItemDefinition_Body
{
public:
    std::uint8_t Pad_0000[0x3F8]; // 0x0000
    std::uint8_t VehicleCosmeticsItemDef[0x20]; // 0x03F8 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> VehicleCosmeticsItemDefForTiers; // 0x0418 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ItemTypeTag[0x8]; // 0x0428 (Size: 0x8, Type: StructProperty)
    std::uint8_t PreviewConfig[0x20]; // 0x0430 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> RestrictionDefinitions; // 0x0450 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ItemPreviewVehicleBody[0x20]; // 0x0460 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> ItemPreviewBodyVariantOverrides; // 0x0480 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShouldSimulateSteering; // 0x0490 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Body, VehicleCosmeticsItemDef) == 1016, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Body::VehicleCosmeticsItemDef");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Body, VehicleCosmeticsItemDefForTiers) == 1048, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Body::VehicleCosmeticsItemDefForTiers");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Body, ItemTypeTag) == 1064, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Body::ItemTypeTag");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Body, PreviewConfig) == 1072, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Body::PreviewConfig");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Body, RestrictionDefinitions) == 1104, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Body::RestrictionDefinitions");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Body, ItemPreviewVehicleBody) == 1120, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Body::ItemPreviewVehicleBody");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Body, ItemPreviewBodyVariantOverrides) == 1152, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Body::ItemPreviewBodyVariantOverrides");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Body, bShouldSimulateSteering) == 1168, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Body::bShouldSimulateSteering");

// /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_Booster
// Kind: Class; super: FortVehicleCosmeticsItemDefinition
class UFortVehicleCosmeticsItemDefinition_Booster
{
public:
    std::uint8_t Pad_0000[0x3F8]; // 0x0000
    std::uint8_t VehicleCosmeticsItemDef[0x20]; // 0x03F8 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> VehicleCosmeticsItemDefForTiers; // 0x0418 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ItemTypeTag[0x8]; // 0x0428 (Size: 0x8, Type: StructProperty)
    std::uint8_t PreviewConfig[0x20]; // 0x0430 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> RestrictionDefinitions; // 0x0450 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ItemPreviewVehicleBody[0x20]; // 0x0460 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> ItemPreviewBodyVariantOverrides; // 0x0480 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShouldSimulateSteering; // 0x0490 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Booster, VehicleCosmeticsItemDef) == 1016, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Booster::VehicleCosmeticsItemDef");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Booster, VehicleCosmeticsItemDefForTiers) == 1048, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Booster::VehicleCosmeticsItemDefForTiers");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Booster, ItemTypeTag) == 1064, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Booster::ItemTypeTag");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Booster, PreviewConfig) == 1072, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Booster::PreviewConfig");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Booster, RestrictionDefinitions) == 1104, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Booster::RestrictionDefinitions");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Booster, ItemPreviewVehicleBody) == 1120, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Booster::ItemPreviewVehicleBody");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Booster, ItemPreviewBodyVariantOverrides) == 1152, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Booster::ItemPreviewBodyVariantOverrides");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Booster, bShouldSimulateSteering) == 1168, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Booster::bShouldSimulateSteering");

// /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_DriftTrail
// Kind: Class; super: FortVehicleCosmeticsItemDefinition
class UFortVehicleCosmeticsItemDefinition_DriftTrail
{
public:
    std::uint8_t Pad_0000[0x3F8]; // 0x0000
    std::uint8_t VehicleCosmeticsItemDef[0x20]; // 0x03F8 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> VehicleCosmeticsItemDefForTiers; // 0x0418 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ItemTypeTag[0x8]; // 0x0428 (Size: 0x8, Type: StructProperty)
    std::uint8_t PreviewConfig[0x20]; // 0x0430 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> RestrictionDefinitions; // 0x0450 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ItemPreviewVehicleBody[0x20]; // 0x0460 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> ItemPreviewBodyVariantOverrides; // 0x0480 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShouldSimulateSteering; // 0x0490 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_DriftTrail, VehicleCosmeticsItemDef) == 1016, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_DriftTrail::VehicleCosmeticsItemDef");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_DriftTrail, VehicleCosmeticsItemDefForTiers) == 1048, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_DriftTrail::VehicleCosmeticsItemDefForTiers");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_DriftTrail, ItemTypeTag) == 1064, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_DriftTrail::ItemTypeTag");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_DriftTrail, PreviewConfig) == 1072, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_DriftTrail::PreviewConfig");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_DriftTrail, RestrictionDefinitions) == 1104, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_DriftTrail::RestrictionDefinitions");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_DriftTrail, ItemPreviewVehicleBody) == 1120, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_DriftTrail::ItemPreviewVehicleBody");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_DriftTrail, ItemPreviewBodyVariantOverrides) == 1152, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_DriftTrail::ItemPreviewBodyVariantOverrides");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_DriftTrail, bShouldSimulateSteering) == 1168, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_DriftTrail::bShouldSimulateSteering");

// /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_EngineAudio
// Kind: Class; super: FortVehicleCosmeticsItemDefinition
class UFortVehicleCosmeticsItemDefinition_EngineAudio
{
public:
    std::uint8_t Pad_0000[0x3F8]; // 0x0000
    std::uint8_t VehicleCosmeticsItemDef[0x20]; // 0x03F8 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> VehicleCosmeticsItemDefForTiers; // 0x0418 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ItemTypeTag[0x8]; // 0x0428 (Size: 0x8, Type: StructProperty)
    std::uint8_t PreviewConfig[0x20]; // 0x0430 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> RestrictionDefinitions; // 0x0450 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ItemPreviewVehicleBody[0x20]; // 0x0460 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> ItemPreviewBodyVariantOverrides; // 0x0480 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShouldSimulateSteering; // 0x0490 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_EngineAudio, VehicleCosmeticsItemDef) == 1016, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_EngineAudio::VehicleCosmeticsItemDef");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_EngineAudio, VehicleCosmeticsItemDefForTiers) == 1048, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_EngineAudio::VehicleCosmeticsItemDefForTiers");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_EngineAudio, ItemTypeTag) == 1064, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_EngineAudio::ItemTypeTag");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_EngineAudio, PreviewConfig) == 1072, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_EngineAudio::PreviewConfig");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_EngineAudio, RestrictionDefinitions) == 1104, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_EngineAudio::RestrictionDefinitions");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_EngineAudio, ItemPreviewVehicleBody) == 1120, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_EngineAudio::ItemPreviewVehicleBody");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_EngineAudio, ItemPreviewBodyVariantOverrides) == 1152, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_EngineAudio::ItemPreviewBodyVariantOverrides");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_EngineAudio, bShouldSimulateSteering) == 1168, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_EngineAudio::bShouldSimulateSteering");

// /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_Macaron
// Kind: Class; super: FortVehicleCosmeticsItemDefinition
class UFortVehicleCosmeticsItemDefinition_Macaron
{
public:
    std::uint8_t Pad_0000[0x3F8]; // 0x0000
    std::uint8_t VehicleCosmeticsItemDef[0x20]; // 0x03F8 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> VehicleCosmeticsItemDefForTiers; // 0x0418 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ItemTypeTag[0x8]; // 0x0428 (Size: 0x8, Type: StructProperty)
    std::uint8_t PreviewConfig[0x20]; // 0x0430 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> RestrictionDefinitions; // 0x0450 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ItemPreviewVehicleBody[0x20]; // 0x0460 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> ItemPreviewBodyVariantOverrides; // 0x0480 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShouldSimulateSteering; // 0x0490 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Macaron, VehicleCosmeticsItemDef) == 1016, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Macaron::VehicleCosmeticsItemDef");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Macaron, VehicleCosmeticsItemDefForTiers) == 1048, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Macaron::VehicleCosmeticsItemDefForTiers");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Macaron, ItemTypeTag) == 1064, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Macaron::ItemTypeTag");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Macaron, PreviewConfig) == 1072, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Macaron::PreviewConfig");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Macaron, RestrictionDefinitions) == 1104, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Macaron::RestrictionDefinitions");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Macaron, ItemPreviewVehicleBody) == 1120, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Macaron::ItemPreviewVehicleBody");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Macaron, ItemPreviewBodyVariantOverrides) == 1152, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Macaron::ItemPreviewBodyVariantOverrides");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Macaron, bShouldSimulateSteering) == 1168, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Macaron::bShouldSimulateSteering");

// /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_Skin
// Kind: Class; super: FortVehicleCosmeticsItemDefinition
class UFortVehicleCosmeticsItemDefinition_Skin
{
public:
    std::uint8_t Pad_0000[0x3F8]; // 0x0000
    std::uint8_t VehicleCosmeticsItemDef[0x20]; // 0x03F8 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> VehicleCosmeticsItemDefForTiers; // 0x0418 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ItemTypeTag[0x8]; // 0x0428 (Size: 0x8, Type: StructProperty)
    std::uint8_t PreviewConfig[0x20]; // 0x0430 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> RestrictionDefinitions; // 0x0450 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ItemPreviewVehicleBody[0x20]; // 0x0460 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> ItemPreviewBodyVariantOverrides; // 0x0480 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShouldSimulateSteering; // 0x0490 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Skin, VehicleCosmeticsItemDef) == 1016, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Skin::VehicleCosmeticsItemDef");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Skin, VehicleCosmeticsItemDefForTiers) == 1048, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Skin::VehicleCosmeticsItemDefForTiers");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Skin, ItemTypeTag) == 1064, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Skin::ItemTypeTag");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Skin, PreviewConfig) == 1072, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Skin::PreviewConfig");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Skin, RestrictionDefinitions) == 1104, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Skin::RestrictionDefinitions");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Skin, ItemPreviewVehicleBody) == 1120, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Skin::ItemPreviewVehicleBody");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Skin, ItemPreviewBodyVariantOverrides) == 1152, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Skin::ItemPreviewBodyVariantOverrides");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Skin, bShouldSimulateSteering) == 1168, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Skin::bShouldSimulateSteering");

// /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_Wheel
// Kind: Class; super: FortVehicleCosmeticsItemDefinition
class UFortVehicleCosmeticsItemDefinition_Wheel
{
public:
    std::uint8_t Pad_0000[0x3F8]; // 0x0000
    std::uint8_t VehicleCosmeticsItemDef[0x20]; // 0x03F8 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> VehicleCosmeticsItemDefForTiers; // 0x0418 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ItemTypeTag[0x8]; // 0x0428 (Size: 0x8, Type: StructProperty)
    std::uint8_t PreviewConfig[0x20]; // 0x0430 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> RestrictionDefinitions; // 0x0450 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ItemPreviewVehicleBody[0x20]; // 0x0460 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> ItemPreviewBodyVariantOverrides; // 0x0480 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShouldSimulateSteering; // 0x0490 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Wheel, VehicleCosmeticsItemDef) == 1016, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Wheel::VehicleCosmeticsItemDef");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Wheel, VehicleCosmeticsItemDefForTiers) == 1048, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Wheel::VehicleCosmeticsItemDefForTiers");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Wheel, ItemTypeTag) == 1064, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Wheel::ItemTypeTag");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Wheel, PreviewConfig) == 1072, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Wheel::PreviewConfig");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Wheel, RestrictionDefinitions) == 1104, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Wheel::RestrictionDefinitions");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Wheel, ItemPreviewVehicleBody) == 1120, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Wheel::ItemPreviewVehicleBody");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Wheel, ItemPreviewBodyVariantOverrides) == 1152, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Wheel::ItemPreviewBodyVariantOverrides");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Wheel, bShouldSimulateSteering) == 1168, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Wheel::bShouldSimulateSteering");

// /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsItemDefinition_Zest
// Kind: Class; super: FortVehicleCosmeticsItemDefinition
class UFortVehicleCosmeticsItemDefinition_Zest
{
public:
    std::uint8_t Pad_0000[0x3F8]; // 0x0000
    std::uint8_t VehicleCosmeticsItemDef[0x20]; // 0x03F8 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> VehicleCosmeticsItemDefForTiers; // 0x0418 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ItemTypeTag[0x8]; // 0x0428 (Size: 0x8, Type: StructProperty)
    std::uint8_t PreviewConfig[0x20]; // 0x0430 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> RestrictionDefinitions; // 0x0450 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ItemPreviewVehicleBody[0x20]; // 0x0460 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> ItemPreviewBodyVariantOverrides; // 0x0480 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShouldSimulateSteering; // 0x0490 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Zest, VehicleCosmeticsItemDef) == 1016, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Zest::VehicleCosmeticsItemDef");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Zest, VehicleCosmeticsItemDefForTiers) == 1048, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Zest::VehicleCosmeticsItemDefForTiers");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Zest, ItemTypeTag) == 1064, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Zest::ItemTypeTag");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Zest, PreviewConfig) == 1072, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Zest::PreviewConfig");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Zest, RestrictionDefinitions) == 1104, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Zest::RestrictionDefinitions");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Zest, ItemPreviewVehicleBody) == 1120, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Zest::ItemPreviewVehicleBody");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Zest, ItemPreviewBodyVariantOverrides) == 1152, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Zest::ItemPreviewBodyVariantOverrides");
static_assert(offsetof(UFortVehicleCosmeticsItemDefinition_Zest, bShouldSimulateSteering) == 1168, "Offset mismatch for UFortVehicleCosmeticsItemDefinition_Zest::bShouldSimulateSteering");

// /Script/VehicleCosmeticsRuntime.FortVehicleCosmeticsVariantTokenType
// Kind: Class; super: FortVariantTokenType
class UFortVehicleCosmeticsVariantTokenType
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    std::uint8_t ProfileType; // 0x0128 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAutoEquipVariant; // 0x0129 (Size: 0x1, Type: BoolProperty)
    std::uint8_t VariantEquipRules; // 0x012A (Size: 0x1, Type: EnumProperty)
    std::uint8_t bMarkItemUnseen; // 0x012B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCreateGiftbox; // 0x012C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGrantBaseItem; // 0x012D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseDisplayNameInGiftbox; // 0x012E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPersistAfterApplication; // 0x012F (Size: 0x1, Type: BoolProperty)
    void* cosmetic_item; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VariantChannelTag[0x4]; // 0x0138 (Size: 0x4, Type: StructProperty)
    std::uint8_t VariantNameTag[0x4]; // 0x013C (Size: 0x4, Type: StructProperty)
    TArray<void*> AdditionalVariantsToGrant; // 0x0140 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VariantPreviewOverrides; // 0x0150 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortVehicleCosmeticsVariantTokenType, ProfileType) == 296, "Offset mismatch for UFortVehicleCosmeticsVariantTokenType::ProfileType");
static_assert(offsetof(UFortVehicleCosmeticsVariantTokenType, bAutoEquipVariant) == 297, "Offset mismatch for UFortVehicleCosmeticsVariantTokenType::bAutoEquipVariant");
static_assert(offsetof(UFortVehicleCosmeticsVariantTokenType, VariantEquipRules) == 298, "Offset mismatch for UFortVehicleCosmeticsVariantTokenType::VariantEquipRules");
static_assert(offsetof(UFortVehicleCosmeticsVariantTokenType, bMarkItemUnseen) == 299, "Offset mismatch for UFortVehicleCosmeticsVariantTokenType::bMarkItemUnseen");
static_assert(offsetof(UFortVehicleCosmeticsVariantTokenType, bCreateGiftbox) == 300, "Offset mismatch for UFortVehicleCosmeticsVariantTokenType::bCreateGiftbox");
static_assert(offsetof(UFortVehicleCosmeticsVariantTokenType, bGrantBaseItem) == 301, "Offset mismatch for UFortVehicleCosmeticsVariantTokenType::bGrantBaseItem");
static_assert(offsetof(UFortVehicleCosmeticsVariantTokenType, bUseDisplayNameInGiftbox) == 302, "Offset mismatch for UFortVehicleCosmeticsVariantTokenType::bUseDisplayNameInGiftbox");
static_assert(offsetof(UFortVehicleCosmeticsVariantTokenType, bPersistAfterApplication) == 303, "Offset mismatch for UFortVehicleCosmeticsVariantTokenType::bPersistAfterApplication");
static_assert(offsetof(UFortVehicleCosmeticsVariantTokenType, cosmetic_item) == 304, "Offset mismatch for UFortVehicleCosmeticsVariantTokenType::cosmetic_item");
static_assert(offsetof(UFortVehicleCosmeticsVariantTokenType, VariantChannelTag) == 312, "Offset mismatch for UFortVehicleCosmeticsVariantTokenType::VariantChannelTag");
static_assert(offsetof(UFortVehicleCosmeticsVariantTokenType, VariantNameTag) == 316, "Offset mismatch for UFortVehicleCosmeticsVariantTokenType::VariantNameTag");
static_assert(offsetof(UFortVehicleCosmeticsVariantTokenType, AdditionalVariantsToGrant) == 320, "Offset mismatch for UFortVehicleCosmeticsVariantTokenType::AdditionalVariantsToGrant");
static_assert(offsetof(UFortVehicleCosmeticsVariantTokenType, VariantPreviewOverrides) == 336, "Offset mismatch for UFortVehicleCosmeticsVariantTokenType::VariantPreviewOverrides");

// /Script/VehicleCosmeticsRuntime.PlayerCustomizableObjectCacheComponent
// Kind: Class; super: PlayerStateComponent
class UPlayerCustomizableObjectCacheComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TMap<void*, void*> CachedInstanceMap; // 0x00C0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPlayerCustomizableObjectCacheComponent, CachedInstanceMap) == 192, "Offset mismatch for UPlayerCustomizableObjectCacheComponent::CachedInstanceMap");

// /Script/VehicleCosmeticsRuntime.VehicleCOParamsDataAsset
// Kind: Class; super: DataAsset
class UVehicleCOParamsDataAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t COParams[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVehicleCOParamsDataAsset, COParams) == 40, "Offset mismatch for UVehicleCOParamsDataAsset::COParams");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAIControllerInterface
// Kind: Class; super: Interface
class UVehicleCosmeticsAIControllerInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActor
// Kind: Class; super: Actor
class UVehicleCosmeticsActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* SpawnLogic; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> CosmeticDependencies; // 0x0278 (Size: 0x10, Type: ArrayProperty)
    TScriptInterface<void> VehicleCosmeticsInterface; // 0x0288 (Size: 0x10, Type: InterfaceProperty)
    void* VehicleCosmeticComponent; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SocketAttachedTo[0x4]; // 0x02A0 (Size: 0x4, Type: NameProperty)
    std::int32_t BoosterPortsNum; // 0x02A4 (Size: 0x4, Type: IntProperty)
    void* BoostAGBClass; // 0x02A8 (Size: 0x8, Type: ClassProperty)
    void* BoostAGBComponent; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVehicleCosmeticsActor, SpawnLogic) == 624, "Offset mismatch for UVehicleCosmeticsActor::SpawnLogic");
static_assert(offsetof(UVehicleCosmeticsActor, CosmeticDependencies) == 632, "Offset mismatch for UVehicleCosmeticsActor::CosmeticDependencies");
static_assert(offsetof(UVehicleCosmeticsActor, VehicleCosmeticsInterface) == 648, "Offset mismatch for UVehicleCosmeticsActor::VehicleCosmeticsInterface");
static_assert(offsetof(UVehicleCosmeticsActor, VehicleCosmeticComponent) == 664, "Offset mismatch for UVehicleCosmeticsActor::VehicleCosmeticComponent");
static_assert(offsetof(UVehicleCosmeticsActor, SocketAttachedTo) == 672, "Offset mismatch for UVehicleCosmeticsActor::SocketAttachedTo");
static_assert(offsetof(UVehicleCosmeticsActor, BoosterPortsNum) == 676, "Offset mismatch for UVehicleCosmeticsActor::BoosterPortsNum");
static_assert(offsetof(UVehicleCosmeticsActor, BoostAGBClass) == 680, "Offset mismatch for UVehicleCosmeticsActor::BoostAGBClass");
static_assert(offsetof(UVehicleCosmeticsActor, BoostAGBComponent) == 688, "Offset mismatch for UVehicleCosmeticsActor::BoostAGBComponent");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActorSpawnLogic
// Kind: Class; super: Object
class UVehicleCosmeticsActorSpawnLogic
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bSpawnOnBodySkeletal; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UVehicleCosmeticsActorSpawnLogic, bSpawnOnBodySkeletal) == 40, "Offset mismatch for UVehicleCosmeticsActorSpawnLogic::bSpawnOnBodySkeletal");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActorSpawnLogic_AttachTo
// Kind: Class; super: VehicleCosmeticsActorSpawnLogic
class UVehicleCosmeticsActorSpawnLogic_AttachTo
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FName AttachSocket; // 0x0030 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UVehicleCosmeticsActorSpawnLogic_AttachTo, AttachSocket) == 48, "Offset mismatch for UVehicleCosmeticsActorSpawnLogic_AttachTo::AttachSocket");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActorSpawnLogic_AttachToEach
// Kind: Class; super: VehicleCosmeticsActorSpawnLogic
class UVehicleCosmeticsActorSpawnLogic_AttachToEach
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> AttachSockets; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVehicleCosmeticsActorSpawnLogic_AttachToEach, AttachSockets) == 48, "Offset mismatch for UVehicleCosmeticsActorSpawnLogic_AttachToEach::AttachSockets");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActorSpawnLogic_Booster
// Kind: Class; super: VehicleCosmeticsActorSpawnLogic
class UVehicleCosmeticsActorSpawnLogic_Booster
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bSpawnOnBodySkeletal; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UVehicleCosmeticsActorSpawnLogic_Booster, bSpawnOnBodySkeletal) == 40, "Offset mismatch for UVehicleCosmeticsActorSpawnLogic_Booster::bSpawnOnBodySkeletal");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsActorSpawnLogic_Thruster
// Kind: Class; super: VehicleCosmeticsActorSpawnLogic_AttachTo
class UVehicleCosmeticsActorSpawnLogic_Thruster
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FName AttachSocket; // 0x0030 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UVehicleCosmeticsActorSpawnLogic_Thruster, AttachSocket) == 48, "Offset mismatch for UVehicleCosmeticsActorSpawnLogic_Thruster::AttachSocket");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAnimInstance
// Kind: Class; super: VehicleBouncyChassisAnimInstance
class UVehicleCosmeticsAnimInstance
{
public:
    std::uint8_t Pad_0000[0x7B0]; // 0x0000
    float ForwardSpeedPercent; // 0x07B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsTouchingGround; // 0x07B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x07B5
    float DistanceToGround; // 0x07B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x07BC
    std::uint8_t VehicleVelocity[0x18]; // 0x07C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bDriftBoostActive; // 0x07D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUnderthrustActive; // 0x07D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDriftActive; // 0x07DA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKickflipActive; // 0x07DB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJumpActive; // 0x07DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTurboActive; // 0x07DD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStartlineBoostActive; // 0x07DE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDraftingActive; // 0x07DF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWorldBonusSpeedApplied; // 0x07E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTireMod; // 0x07E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBoosting; // 0x07E2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPreview; // 0x07E3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsWheelCambered; // 0x07E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldWheelSpinForPreview; // 0x07E5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldBodyRumbleForPreview; // 0x07E6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldSimulateSteeringForPreview; // 0x07E7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldSimulateDecelerationForPreview; // 0x07E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x07E9
    float FakeWheelSteeringAngle; // 0x07EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t PreviewSettings[0x48]; // 0x07F0 (Size: 0x48, Type: StructProperty)
    float PreviewWheelSpin; // 0x0838 (Size: 0x4, Type: FloatProperty)
    float PreviewSteeringRotationAngle; // 0x083C (Size: 0x4, Type: FloatProperty)
    std::uint8_t PreviewVehicleVelocity[0x18]; // 0x0840 (Size: 0x18, Type: StructProperty)
    std::uint8_t bCanEnterTransition_IdleToBoostStart; // 0x0858 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterTransition_BoostStartToBoostLoop; // 0x0859 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterTransition_BoostLoopToBoostEnd; // 0x085A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterTransition_BoostEndToIdle; // 0x085B (Size: 0x1, Type: BoolProperty)
    std::uint8_t BoostStartToBoostLoopRelevancyData[0x14]; // 0x085C (Size: 0x14, Type: StructProperty)
    std::uint8_t BoostEndToIdleRelevancyData[0x14]; // 0x0870 (Size: 0x14, Type: StructProperty)
    float BoostStartToBoostLoopRemainingTimeThreshold; // 0x0884 (Size: 0x4, Type: FloatProperty)
    float BoostEndToIdleRemainingTimeThreshold; // 0x0888 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x088C
    void* CachedCosmeticsComponent; // 0x0890 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVehicleCosmeticsAnimInstance, ForwardSpeedPercent) == 1968, "Offset mismatch for UVehicleCosmeticsAnimInstance::ForwardSpeedPercent");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, bIsTouchingGround) == 1972, "Offset mismatch for UVehicleCosmeticsAnimInstance::bIsTouchingGround");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, DistanceToGround) == 1976, "Offset mismatch for UVehicleCosmeticsAnimInstance::DistanceToGround");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, VehicleVelocity) == 1984, "Offset mismatch for UVehicleCosmeticsAnimInstance::VehicleVelocity");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, bDriftBoostActive) == 2008, "Offset mismatch for UVehicleCosmeticsAnimInstance::bDriftBoostActive");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, bUnderthrustActive) == 2009, "Offset mismatch for UVehicleCosmeticsAnimInstance::bUnderthrustActive");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, bDriftActive) == 2010, "Offset mismatch for UVehicleCosmeticsAnimInstance::bDriftActive");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, bKickflipActive) == 2011, "Offset mismatch for UVehicleCosmeticsAnimInstance::bKickflipActive");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, bJumpActive) == 2012, "Offset mismatch for UVehicleCosmeticsAnimInstance::bJumpActive");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, bTurboActive) == 2013, "Offset mismatch for UVehicleCosmeticsAnimInstance::bTurboActive");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, bStartlineBoostActive) == 2014, "Offset mismatch for UVehicleCosmeticsAnimInstance::bStartlineBoostActive");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, bDraftingActive) == 2015, "Offset mismatch for UVehicleCosmeticsAnimInstance::bDraftingActive");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, bWorldBonusSpeedApplied) == 2016, "Offset mismatch for UVehicleCosmeticsAnimInstance::bWorldBonusSpeedApplied");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, bHasTireMod) == 2017, "Offset mismatch for UVehicleCosmeticsAnimInstance::bHasTireMod");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, bIsBoosting) == 2018, "Offset mismatch for UVehicleCosmeticsAnimInstance::bIsBoosting");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, bIsPreview) == 2019, "Offset mismatch for UVehicleCosmeticsAnimInstance::bIsPreview");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, bIsWheelCambered) == 2020, "Offset mismatch for UVehicleCosmeticsAnimInstance::bIsWheelCambered");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, bShouldWheelSpinForPreview) == 2021, "Offset mismatch for UVehicleCosmeticsAnimInstance::bShouldWheelSpinForPreview");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, bShouldBodyRumbleForPreview) == 2022, "Offset mismatch for UVehicleCosmeticsAnimInstance::bShouldBodyRumbleForPreview");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, bShouldSimulateSteeringForPreview) == 2023, "Offset mismatch for UVehicleCosmeticsAnimInstance::bShouldSimulateSteeringForPreview");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, bShouldSimulateDecelerationForPreview) == 2024, "Offset mismatch for UVehicleCosmeticsAnimInstance::bShouldSimulateDecelerationForPreview");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, FakeWheelSteeringAngle) == 2028, "Offset mismatch for UVehicleCosmeticsAnimInstance::FakeWheelSteeringAngle");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, PreviewSettings) == 2032, "Offset mismatch for UVehicleCosmeticsAnimInstance::PreviewSettings");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, PreviewWheelSpin) == 2104, "Offset mismatch for UVehicleCosmeticsAnimInstance::PreviewWheelSpin");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, PreviewSteeringRotationAngle) == 2108, "Offset mismatch for UVehicleCosmeticsAnimInstance::PreviewSteeringRotationAngle");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, PreviewVehicleVelocity) == 2112, "Offset mismatch for UVehicleCosmeticsAnimInstance::PreviewVehicleVelocity");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, bCanEnterTransition_IdleToBoostStart) == 2136, "Offset mismatch for UVehicleCosmeticsAnimInstance::bCanEnterTransition_IdleToBoostStart");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, bCanEnterTransition_BoostStartToBoostLoop) == 2137, "Offset mismatch for UVehicleCosmeticsAnimInstance::bCanEnterTransition_BoostStartToBoostLoop");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, bCanEnterTransition_BoostLoopToBoostEnd) == 2138, "Offset mismatch for UVehicleCosmeticsAnimInstance::bCanEnterTransition_BoostLoopToBoostEnd");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, bCanEnterTransition_BoostEndToIdle) == 2139, "Offset mismatch for UVehicleCosmeticsAnimInstance::bCanEnterTransition_BoostEndToIdle");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, BoostStartToBoostLoopRelevancyData) == 2140, "Offset mismatch for UVehicleCosmeticsAnimInstance::BoostStartToBoostLoopRelevancyData");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, BoostEndToIdleRelevancyData) == 2160, "Offset mismatch for UVehicleCosmeticsAnimInstance::BoostEndToIdleRelevancyData");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, BoostStartToBoostLoopRemainingTimeThreshold) == 2180, "Offset mismatch for UVehicleCosmeticsAnimInstance::BoostStartToBoostLoopRemainingTimeThreshold");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, BoostEndToIdleRemainingTimeThreshold) == 2184, "Offset mismatch for UVehicleCosmeticsAnimInstance::BoostEndToIdleRemainingTimeThreshold");
static_assert(offsetof(UVehicleCosmeticsAnimInstance, CachedCosmeticsComponent) == 2192, "Offset mismatch for UVehicleCosmeticsAnimInstance::CachedCosmeticsComponent");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsAssembledMeshUserComponent
// Kind: Class; super: AssembledMeshUserComponent
class UVehicleCosmeticsAssembledMeshUserComponent
{
public:
    std::uint8_t Pad_0000[0x178]; // 0x0000
    void* TempCustomizableObjectInstance; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0180
    std::uint8_t OwningCosmeticLoadoutData[0x88]; // 0x0190 (Size: 0x88, Type: StructProperty)
    TArray<void*> DefaultLoadoutInfos; // 0x0218 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CamberWheelRules[0x10]; // 0x0228 (Size: 0x10, Type: StructProperty)
    std::uint8_t GroundTracingRules[0x11]; // 0x0238 (Size: 0x11, Type: StructProperty)
    std::uint8_t bVehicleCosmeticsEnabled; // 0x0249 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x024A
    TArray<void*> SpawnedCosmeticActors_Body; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0260
    TArray<void*> SpawnedCosmeticActors_Macaron; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0004[0x10]; // 0x0280
    TArray<void*> SpawnedCosmeticActors_Zest; // 0x0290 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x10]; // 0x02A0
    TArray<void*> SpawnedCosmeticActors_Booster; // 0x02B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0006[0x10]; // 0x02C0
    TArray<void*> SpawnedCosmeticActors_DriftTrail; // 0x02D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0007[0x10]; // 0x02E0
    TArray<void*> SpawnedCosmeticActors_Skin; // 0x02F0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> HasBeenCustomizedMap; // 0x0300 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> MeshPartDataMap; // 0x0310 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0008[0x830]; // 0x0320
    TArray<void*> TirePopReplacementInfos; // 0x0B50 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t LoadoutSlotTagQuery[0x200]; // 0x0B60 (Size: 0x200, Type: StructProperty)
    void* DownloadingOverlayMaterial; // 0x0D60 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnCosmeticActorSpawned; // 0x0D68 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t CustomizationEnabled[0x28]; // 0x0D78 (Size: 0x28, Type: StructProperty)
    std::uint8_t CosmeticsLoadoutFXLoopTime[0x48]; // 0x0DA0 (Size: 0x48, Type: StructProperty)
    FMulticastInlineDelegate OnEngineAudioUpdated; // 0x0DE8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnVehicleCosmeticsFailed; // 0x0DF8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0009[0x30]; // 0x0E08
    FMulticastInlineDelegate VehicleCosmeticsStartFXDelegate; // 0x0E38 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate VehicleCosmeticsFinishFXDelegate; // 0x0E48 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, TempCustomizableObjectInstance) == 376, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::TempCustomizableObjectInstance");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, OwningCosmeticLoadoutData) == 400, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::OwningCosmeticLoadoutData");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, DefaultLoadoutInfos) == 536, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::DefaultLoadoutInfos");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, CamberWheelRules) == 552, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::CamberWheelRules");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, GroundTracingRules) == 568, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::GroundTracingRules");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, bVehicleCosmeticsEnabled) == 585, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::bVehicleCosmeticsEnabled");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, SpawnedCosmeticActors_Body) == 592, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::SpawnedCosmeticActors_Body");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, SpawnedCosmeticActors_Macaron) == 624, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::SpawnedCosmeticActors_Macaron");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, SpawnedCosmeticActors_Zest) == 656, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::SpawnedCosmeticActors_Zest");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, SpawnedCosmeticActors_Booster) == 688, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::SpawnedCosmeticActors_Booster");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, SpawnedCosmeticActors_DriftTrail) == 720, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::SpawnedCosmeticActors_DriftTrail");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, SpawnedCosmeticActors_Skin) == 752, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::SpawnedCosmeticActors_Skin");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, HasBeenCustomizedMap) == 768, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::HasBeenCustomizedMap");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, MeshPartDataMap) == 784, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::MeshPartDataMap");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, TirePopReplacementInfos) == 2896, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::TirePopReplacementInfos");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, LoadoutSlotTagQuery) == 2912, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::LoadoutSlotTagQuery");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, DownloadingOverlayMaterial) == 3424, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::DownloadingOverlayMaterial");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, OnCosmeticActorSpawned) == 3432, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::OnCosmeticActorSpawned");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, CustomizationEnabled) == 3448, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::CustomizationEnabled");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, CosmeticsLoadoutFXLoopTime) == 3488, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::CosmeticsLoadoutFXLoopTime");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, OnEngineAudioUpdated) == 3560, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::OnEngineAudioUpdated");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, OnVehicleCosmeticsFailed) == 3576, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::OnVehicleCosmeticsFailed");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, VehicleCosmeticsStartFXDelegate) == 3640, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::VehicleCosmeticsStartFXDelegate");
static_assert(offsetof(UVehicleCosmeticsAssembledMeshUserComponent, VehicleCosmeticsFinishFXDelegate) == 3656, "Offset mismatch for UVehicleCosmeticsAssembledMeshUserComponent::VehicleCosmeticsFinishFXDelegate");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UVehicleCosmeticsBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsCheatManager
// Kind: Class; super: ChildCheatManager
class UVehicleCosmeticsCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsColorMappingData
// Kind: Class; super: PrimaryDataAsset
class UVehicleCosmeticsColorMappingData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ColorMappingDataArray; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVehicleCosmeticsColorMappingData, ColorMappingDataArray) == 40, "Offset mismatch for UVehicleCosmeticsColorMappingData::ColorMappingDataArray");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsEditorPreviewSettings
// Kind: Class; super: Object
class UVehicleCosmeticsEditorPreviewSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> PreviewSlotInfos; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FortItemVehiclePreviewClass[0x20]; // 0x0038 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t FortVehicleCosmeticsLevelPreviewClass[0x20]; // 0x0058 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t VehicleCosmeticsPreviewClass[0x20]; // 0x0078 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t PaintTable[0x20]; // 0x0098 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BodySchemaTag[0x4]; // 0x00B8 (Size: 0x4, Type: StructProperty)
    std::uint8_t TierVariantPropertyTag[0x4]; // 0x00BC (Size: 0x4, Type: StructProperty)
    std::uint8_t WheelSchemaTag[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVehicleCosmeticsEditorPreviewSettings, PreviewSlotInfos) == 40, "Offset mismatch for UVehicleCosmeticsEditorPreviewSettings::PreviewSlotInfos");
static_assert(offsetof(UVehicleCosmeticsEditorPreviewSettings, FortItemVehiclePreviewClass) == 56, "Offset mismatch for UVehicleCosmeticsEditorPreviewSettings::FortItemVehiclePreviewClass");
static_assert(offsetof(UVehicleCosmeticsEditorPreviewSettings, FortVehicleCosmeticsLevelPreviewClass) == 88, "Offset mismatch for UVehicleCosmeticsEditorPreviewSettings::FortVehicleCosmeticsLevelPreviewClass");
static_assert(offsetof(UVehicleCosmeticsEditorPreviewSettings, VehicleCosmeticsPreviewClass) == 120, "Offset mismatch for UVehicleCosmeticsEditorPreviewSettings::VehicleCosmeticsPreviewClass");
static_assert(offsetof(UVehicleCosmeticsEditorPreviewSettings, PaintTable) == 152, "Offset mismatch for UVehicleCosmeticsEditorPreviewSettings::PaintTable");
static_assert(offsetof(UVehicleCosmeticsEditorPreviewSettings, BodySchemaTag) == 184, "Offset mismatch for UVehicleCosmeticsEditorPreviewSettings::BodySchemaTag");
static_assert(offsetof(UVehicleCosmeticsEditorPreviewSettings, TierVariantPropertyTag) == 188, "Offset mismatch for UVehicleCosmeticsEditorPreviewSettings::TierVariantPropertyTag");
static_assert(offsetof(UVehicleCosmeticsEditorPreviewSettings, WheelSchemaTag) == 192, "Offset mismatch for UVehicleCosmeticsEditorPreviewSettings::WheelSchemaTag");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInstanceCacheSubsystem
// Kind: Class; super: WorldSubsystem
class UVehicleCosmeticsInstanceCacheSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedInstances; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t InFlightBuilds[0x20]; // 0x0048 (Size: 0x20, Type: SetProperty)
    void* CachedCustomizableObject; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVehicleCosmeticsInstanceCacheSubsystem, CachedInstances) == 56, "Offset mismatch for UVehicleCosmeticsInstanceCacheSubsystem::CachedInstances");
static_assert(offsetof(UVehicleCosmeticsInstanceCacheSubsystem, InFlightBuilds) == 72, "Offset mismatch for UVehicleCosmeticsInstanceCacheSubsystem::InFlightBuilds");
static_assert(offsetof(UVehicleCosmeticsInstanceCacheSubsystem, CachedCustomizableObject) == 104, "Offset mismatch for UVehicleCosmeticsInstanceCacheSubsystem::CachedCustomizableObject");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsInterface
// Kind: Class; super: Interface
class UVehicleCosmeticsInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition
// Kind: Class; super: AssembledMeshSchema
class UVehicleCosmeticsItemDefinition
{
public:
    std::uint8_t Pad_0000[0x188]; // 0x0000
    TArray<void*> CosmeticAttachments; // 0x0188 (Size: 0x10, Type: ArrayProperty)
    FName PaintedDataTableParameterName; // 0x0198 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> AdditionalVariantInfos; // 0x01A0 (Size: 0x10, Type: MapProperty)
    TArray<void*> CosmeticAttachmentQueryInfos; // 0x01B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AnimInfos; // 0x01C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CheatNames; // 0x01D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AdditionalParametersInfos; // 0x01E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVehicleCosmeticsItemDefinition, CosmeticAttachments) == 392, "Offset mismatch for UVehicleCosmeticsItemDefinition::CosmeticAttachments");
static_assert(offsetof(UVehicleCosmeticsItemDefinition, PaintedDataTableParameterName) == 408, "Offset mismatch for UVehicleCosmeticsItemDefinition::PaintedDataTableParameterName");
static_assert(offsetof(UVehicleCosmeticsItemDefinition, AdditionalVariantInfos) == 416, "Offset mismatch for UVehicleCosmeticsItemDefinition::AdditionalVariantInfos");
static_assert(offsetof(UVehicleCosmeticsItemDefinition, CosmeticAttachmentQueryInfos) == 432, "Offset mismatch for UVehicleCosmeticsItemDefinition::CosmeticAttachmentQueryInfos");
static_assert(offsetof(UVehicleCosmeticsItemDefinition, AnimInfos) == 448, "Offset mismatch for UVehicleCosmeticsItemDefinition::AnimInfos");
static_assert(offsetof(UVehicleCosmeticsItemDefinition, CheatNames) == 464, "Offset mismatch for UVehicleCosmeticsItemDefinition::CheatNames");
static_assert(offsetof(UVehicleCosmeticsItemDefinition, AdditionalParametersInfos) == 480, "Offset mismatch for UVehicleCosmeticsItemDefinition::AdditionalParametersInfos");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_Body
// Kind: Class; super: VehicleCosmeticsItemDefinition
class UVehicleCosmeticsItemDefinition_Body
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t BodyGroup[0x8]; // 0x01F8 (Size: 0x8, Type: StructProperty)
    std::uint8_t CustomizableObjectGroup[0x8]; // 0x0200 (Size: 0x8, Type: StructProperty)
    std::uint8_t SkeletalMeshInfo[0x28]; // 0x0208 (Size: 0x28, Type: StructProperty)
    FName SkinMaterialParameterName; // 0x0230 (Size: 0x8, Type: NameProperty)
    std::uint8_t NormalTextureInfo[0x28]; // 0x0238 (Size: 0x28, Type: StructProperty)
    std::uint8_t SkinDataTableParameterName[0x4]; // 0x0260 (Size: 0x4, Type: NameProperty)
    std::uint8_t BodyColorParameterName[0x4]; // 0x0264 (Size: 0x4, Type: NameProperty)
    std::uint8_t SkinColorParameterName[0x4]; // 0x0268 (Size: 0x4, Type: NameProperty)
    std::uint8_t GlowColorParameterName[0x4]; // 0x026C (Size: 0x4, Type: NameProperty)
    std::uint8_t AdditionalColorMappingData[0x20]; // 0x0270 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> PhysicsQueryInfos; // 0x0290 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t WheelAttachSkeletonReference[0x20]; // 0x02A0 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> WheelAttachInfos; // 0x02C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MacaronAttachInfos; // 0x02D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t BoosterAttachSkeletonReference[0x20]; // 0x02E0 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> BoosterAttachInfos; // 0x0300 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ThrusterAttachInfo[0xC0]; // 0x0310 (Size: 0xC0, Type: StructProperty)
    std::uint8_t HeadlightEffectInfo[0x18]; // 0x03D0 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExhaustEffectInfo[0x8]; // 0x03E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t DefaultWheelItemDef[0x20]; // 0x03F0 (Size: 0x20, Type: SoftObjectProperty)
    FName DefaultSkinRowName; // 0x0410 (Size: 0x8, Type: NameProperty)
    std::uint8_t DefaultSkinItemDef[0x20]; // 0x0418 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DefaultSkinMaterial[0x20]; // 0x0438 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AudioData[0x20]; // 0x0458 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AnimSetOverride[0x20]; // 0x0478 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t BodyTypeTagQuery[0x48]; // 0x0498 (Size: 0x48, Type: StructProperty)
    std::uint8_t TagsToAdd[0x20]; // 0x04E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t TagsToRemove[0x20]; // 0x0500 (Size: 0x20, Type: StructProperty)
    TArray<void*> WindowQueryInfos; // 0x0520 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BodyAttachmentQueryInfos; // 0x0530 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReactiveQueryInfos; // 0x0540 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, BodyGroup) == 504, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::BodyGroup");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, CustomizableObjectGroup) == 512, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::CustomizableObjectGroup");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, SkeletalMeshInfo) == 520, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::SkeletalMeshInfo");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, SkinMaterialParameterName) == 560, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::SkinMaterialParameterName");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, NormalTextureInfo) == 568, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::NormalTextureInfo");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, SkinDataTableParameterName) == 608, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::SkinDataTableParameterName");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, BodyColorParameterName) == 612, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::BodyColorParameterName");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, SkinColorParameterName) == 616, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::SkinColorParameterName");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, GlowColorParameterName) == 620, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::GlowColorParameterName");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, AdditionalColorMappingData) == 624, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::AdditionalColorMappingData");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, PhysicsQueryInfos) == 656, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::PhysicsQueryInfos");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, WheelAttachSkeletonReference) == 672, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::WheelAttachSkeletonReference");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, WheelAttachInfos) == 704, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::WheelAttachInfos");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, MacaronAttachInfos) == 720, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::MacaronAttachInfos");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, BoosterAttachSkeletonReference) == 736, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::BoosterAttachSkeletonReference");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, BoosterAttachInfos) == 768, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::BoosterAttachInfos");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, ThrusterAttachInfo) == 784, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::ThrusterAttachInfo");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, HeadlightEffectInfo) == 976, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::HeadlightEffectInfo");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, ExhaustEffectInfo) == 1000, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::ExhaustEffectInfo");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, DefaultWheelItemDef) == 1008, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::DefaultWheelItemDef");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, DefaultSkinRowName) == 1040, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::DefaultSkinRowName");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, DefaultSkinItemDef) == 1048, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::DefaultSkinItemDef");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, DefaultSkinMaterial) == 1080, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::DefaultSkinMaterial");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, AudioData) == 1112, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::AudioData");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, AnimSetOverride) == 1144, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::AnimSetOverride");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, BodyTypeTagQuery) == 1176, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::BodyTypeTagQuery");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, TagsToAdd) == 1248, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::TagsToAdd");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, TagsToRemove) == 1280, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::TagsToRemove");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, WindowQueryInfos) == 1312, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::WindowQueryInfos");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, BodyAttachmentQueryInfos) == 1328, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::BodyAttachmentQueryInfos");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Body, ReactiveQueryInfos) == 1344, "Offset mismatch for UVehicleCosmeticsItemDefinition_Body::ReactiveQueryInfos");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_Booster
// Kind: Class; super: VehicleCosmeticsItemDefinition
class UVehicleCosmeticsItemDefinition_Booster
{
public:
    std::uint8_t Pad_0000[0x188]; // 0x0000
    TArray<void*> CosmeticAttachments; // 0x0188 (Size: 0x10, Type: ArrayProperty)
    FName PaintedDataTableParameterName; // 0x0198 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> AdditionalVariantInfos; // 0x01A0 (Size: 0x10, Type: MapProperty)
    TArray<void*> CosmeticAttachmentQueryInfos; // 0x01B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AnimInfos; // 0x01C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CheatNames; // 0x01D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AdditionalParametersInfos; // 0x01E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVehicleCosmeticsItemDefinition_Booster, CosmeticAttachments) == 392, "Offset mismatch for UVehicleCosmeticsItemDefinition_Booster::CosmeticAttachments");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Booster, PaintedDataTableParameterName) == 408, "Offset mismatch for UVehicleCosmeticsItemDefinition_Booster::PaintedDataTableParameterName");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Booster, AdditionalVariantInfos) == 416, "Offset mismatch for UVehicleCosmeticsItemDefinition_Booster::AdditionalVariantInfos");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Booster, CosmeticAttachmentQueryInfos) == 432, "Offset mismatch for UVehicleCosmeticsItemDefinition_Booster::CosmeticAttachmentQueryInfos");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Booster, AnimInfos) == 448, "Offset mismatch for UVehicleCosmeticsItemDefinition_Booster::AnimInfos");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Booster, CheatNames) == 464, "Offset mismatch for UVehicleCosmeticsItemDefinition_Booster::CheatNames");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Booster, AdditionalParametersInfos) == 480, "Offset mismatch for UVehicleCosmeticsItemDefinition_Booster::AdditionalParametersInfos");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_DriftTrail
// Kind: Class; super: VehicleCosmeticsItemDefinition
class UVehicleCosmeticsItemDefinition_DriftTrail
{
public:
    std::uint8_t Pad_0000[0x188]; // 0x0000
    TArray<void*> CosmeticAttachments; // 0x0188 (Size: 0x10, Type: ArrayProperty)
    FName PaintedDataTableParameterName; // 0x0198 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> AdditionalVariantInfos; // 0x01A0 (Size: 0x10, Type: MapProperty)
    TArray<void*> CosmeticAttachmentQueryInfos; // 0x01B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AnimInfos; // 0x01C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CheatNames; // 0x01D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AdditionalParametersInfos; // 0x01E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVehicleCosmeticsItemDefinition_DriftTrail, CosmeticAttachments) == 392, "Offset mismatch for UVehicleCosmeticsItemDefinition_DriftTrail::CosmeticAttachments");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_DriftTrail, PaintedDataTableParameterName) == 408, "Offset mismatch for UVehicleCosmeticsItemDefinition_DriftTrail::PaintedDataTableParameterName");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_DriftTrail, AdditionalVariantInfos) == 416, "Offset mismatch for UVehicleCosmeticsItemDefinition_DriftTrail::AdditionalVariantInfos");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_DriftTrail, CosmeticAttachmentQueryInfos) == 432, "Offset mismatch for UVehicleCosmeticsItemDefinition_DriftTrail::CosmeticAttachmentQueryInfos");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_DriftTrail, AnimInfos) == 448, "Offset mismatch for UVehicleCosmeticsItemDefinition_DriftTrail::AnimInfos");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_DriftTrail, CheatNames) == 464, "Offset mismatch for UVehicleCosmeticsItemDefinition_DriftTrail::CheatNames");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_DriftTrail, AdditionalParametersInfos) == 480, "Offset mismatch for UVehicleCosmeticsItemDefinition_DriftTrail::AdditionalParametersInfos");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_EngineAudio
// Kind: Class; super: VehicleCosmeticsItemDefinition
class UVehicleCosmeticsItemDefinition_EngineAudio
{
public:
    std::uint8_t Pad_0000[0x1F0]; // 0x0000
    TSoftObjectPtr<void> DataChooserTable; // 0x01F0 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UVehicleCosmeticsItemDefinition_EngineAudio, DataChooserTable) == 496, "Offset mismatch for UVehicleCosmeticsItemDefinition_EngineAudio::DataChooserTable");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_Macaron
// Kind: Class; super: VehicleCosmeticsItemDefinition
class UVehicleCosmeticsItemDefinition_Macaron
{
public:
    std::uint8_t Pad_0000[0x1F0]; // 0x0000
    std::uint8_t ObjectGroup[0x8]; // 0x01F0 (Size: 0x8, Type: StructProperty)
    std::uint8_t SkeletalMeshInfo[0x28]; // 0x01F8 (Size: 0x28, Type: StructProperty)
    TArray<void*> MaterialInfos; // 0x0220 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVehicleCosmeticsItemDefinition_Macaron, ObjectGroup) == 496, "Offset mismatch for UVehicleCosmeticsItemDefinition_Macaron::ObjectGroup");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Macaron, SkeletalMeshInfo) == 504, "Offset mismatch for UVehicleCosmeticsItemDefinition_Macaron::SkeletalMeshInfo");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Macaron, MaterialInfos) == 544, "Offset mismatch for UVehicleCosmeticsItemDefinition_Macaron::MaterialInfos");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_Skin
// Kind: Class; super: VehicleCosmeticsItemDefinition
class UVehicleCosmeticsItemDefinition_Skin
{
public:
    std::uint8_t Pad_0000[0x1F0]; // 0x0000
    std::uint8_t bLockBodyColor; // 0x01F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLockGlowColor; // 0x01F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x01F2
    std::uint8_t LockedBodyColor[0x10]; // 0x01F4 (Size: 0x10, Type: StructProperty)
    std::uint8_t LockedSkinColor[0x10]; // 0x0204 (Size: 0x10, Type: StructProperty)
    std::uint8_t LockedGlowColor[0x10]; // 0x0214 (Size: 0x10, Type: StructProperty)
    std::uint8_t SkinRowName[0x4]; // 0x0224 (Size: 0x4, Type: NameProperty)
    std::uint8_t SkinMaterial[0x20]; // 0x0228 (Size: 0x20, Type: SoftObjectProperty)
    FName PaintedEnumParameterName; // 0x0248 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UVehicleCosmeticsItemDefinition_Skin, bLockBodyColor) == 496, "Offset mismatch for UVehicleCosmeticsItemDefinition_Skin::bLockBodyColor");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Skin, bLockGlowColor) == 497, "Offset mismatch for UVehicleCosmeticsItemDefinition_Skin::bLockGlowColor");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Skin, LockedBodyColor) == 500, "Offset mismatch for UVehicleCosmeticsItemDefinition_Skin::LockedBodyColor");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Skin, LockedSkinColor) == 516, "Offset mismatch for UVehicleCosmeticsItemDefinition_Skin::LockedSkinColor");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Skin, LockedGlowColor) == 532, "Offset mismatch for UVehicleCosmeticsItemDefinition_Skin::LockedGlowColor");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Skin, SkinRowName) == 548, "Offset mismatch for UVehicleCosmeticsItemDefinition_Skin::SkinRowName");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Skin, SkinMaterial) == 552, "Offset mismatch for UVehicleCosmeticsItemDefinition_Skin::SkinMaterial");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Skin, PaintedEnumParameterName) == 584, "Offset mismatch for UVehicleCosmeticsItemDefinition_Skin::PaintedEnumParameterName");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_Wheel
// Kind: Class; super: VehicleCosmeticsItemDefinition
class UVehicleCosmeticsItemDefinition_Wheel
{
public:
    std::uint8_t Pad_0000[0x1F8]; // 0x0000
    std::uint8_t WheelGroup[0x8]; // 0x01F8 (Size: 0x8, Type: StructProperty)
    std::uint8_t CustomizableObjectGroup[0x8]; // 0x0200 (Size: 0x8, Type: StructProperty)
    TArray<void*> AdditionalBodyCosmeticAttachments; // 0x0208 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t WheelSkeletalMeshInfo[0x28]; // 0x0218 (Size: 0x28, Type: StructProperty)
    std::uint8_t RearWheelSkeletalMeshInfo[0x28]; // 0x0240 (Size: 0x28, Type: StructProperty)
    TArray<void*> AdditionalWheelGroups; // 0x0268 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t WheelTirePoppedInfo[0x10]; // 0x0278 (Size: 0x10, Type: StructProperty)
    TArray<void*> WheelSetupInfos; // 0x0288 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVehicleCosmeticsItemDefinition_Wheel, WheelGroup) == 504, "Offset mismatch for UVehicleCosmeticsItemDefinition_Wheel::WheelGroup");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Wheel, CustomizableObjectGroup) == 512, "Offset mismatch for UVehicleCosmeticsItemDefinition_Wheel::CustomizableObjectGroup");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Wheel, AdditionalBodyCosmeticAttachments) == 520, "Offset mismatch for UVehicleCosmeticsItemDefinition_Wheel::AdditionalBodyCosmeticAttachments");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Wheel, WheelSkeletalMeshInfo) == 536, "Offset mismatch for UVehicleCosmeticsItemDefinition_Wheel::WheelSkeletalMeshInfo");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Wheel, RearWheelSkeletalMeshInfo) == 576, "Offset mismatch for UVehicleCosmeticsItemDefinition_Wheel::RearWheelSkeletalMeshInfo");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Wheel, AdditionalWheelGroups) == 616, "Offset mismatch for UVehicleCosmeticsItemDefinition_Wheel::AdditionalWheelGroups");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Wheel, WheelTirePoppedInfo) == 632, "Offset mismatch for UVehicleCosmeticsItemDefinition_Wheel::WheelTirePoppedInfo");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Wheel, WheelSetupInfos) == 648, "Offset mismatch for UVehicleCosmeticsItemDefinition_Wheel::WheelSetupInfos");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsItemDefinition_Zest
// Kind: Class; super: VehicleCosmeticsItemDefinition
class UVehicleCosmeticsItemDefinition_Zest
{
public:
    std::uint8_t Pad_0000[0x1F0]; // 0x0000
    std::uint8_t ObjectGroup[0x8]; // 0x01F0 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIsOnePart; // 0x01F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x01F9
    std::uint8_t BaseSkeletalMeshInfo[0x28]; // 0x0200 (Size: 0x28, Type: StructProperty)
    TArray<void*> BaseMaterialInfos; // 0x0228 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TopSkeletalMeshInfo[0x28]; // 0x0238 (Size: 0x28, Type: StructProperty)
    TArray<void*> TopMaterialInfos; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVehicleCosmeticsItemDefinition_Zest, ObjectGroup) == 496, "Offset mismatch for UVehicleCosmeticsItemDefinition_Zest::ObjectGroup");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Zest, bIsOnePart) == 504, "Offset mismatch for UVehicleCosmeticsItemDefinition_Zest::bIsOnePart");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Zest, BaseSkeletalMeshInfo) == 512, "Offset mismatch for UVehicleCosmeticsItemDefinition_Zest::BaseSkeletalMeshInfo");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Zest, BaseMaterialInfos) == 552, "Offset mismatch for UVehicleCosmeticsItemDefinition_Zest::BaseMaterialInfos");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Zest, TopSkeletalMeshInfo) == 568, "Offset mismatch for UVehicleCosmeticsItemDefinition_Zest::TopSkeletalMeshInfo");
static_assert(offsetof(UVehicleCosmeticsItemDefinition_Zest, TopMaterialInfos) == 608, "Offset mismatch for UVehicleCosmeticsItemDefinition_Zest::TopMaterialInfos");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsMacaronAnimInstance
// Kind: Class; super: VehicleCosmeticsAnimInstance
class UVehicleCosmeticsMacaronAnimInstance
{
public:
    std::uint8_t Pad_0000[0x7B0]; // 0x0000
    float ForwardSpeedPercent; // 0x07B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsTouchingGround; // 0x07B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x07B5
    float DistanceToGround; // 0x07B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x07BC
    std::uint8_t VehicleVelocity[0x18]; // 0x07C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bDriftBoostActive; // 0x07D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUnderthrustActive; // 0x07D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDriftActive; // 0x07DA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKickflipActive; // 0x07DB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJumpActive; // 0x07DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTurboActive; // 0x07DD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStartlineBoostActive; // 0x07DE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDraftingActive; // 0x07DF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWorldBonusSpeedApplied; // 0x07E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTireMod; // 0x07E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBoosting; // 0x07E2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPreview; // 0x07E3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsWheelCambered; // 0x07E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldWheelSpinForPreview; // 0x07E5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldBodyRumbleForPreview; // 0x07E6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldSimulateSteeringForPreview; // 0x07E7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldSimulateDecelerationForPreview; // 0x07E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x07E9
    float FakeWheelSteeringAngle; // 0x07EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t PreviewSettings[0x48]; // 0x07F0 (Size: 0x48, Type: StructProperty)
    float PreviewWheelSpin; // 0x0838 (Size: 0x4, Type: FloatProperty)
    float PreviewSteeringRotationAngle; // 0x083C (Size: 0x4, Type: FloatProperty)
    std::uint8_t PreviewVehicleVelocity[0x18]; // 0x0840 (Size: 0x18, Type: StructProperty)
    std::uint8_t bCanEnterTransition_IdleToBoostStart; // 0x0858 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterTransition_BoostStartToBoostLoop; // 0x0859 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterTransition_BoostLoopToBoostEnd; // 0x085A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterTransition_BoostEndToIdle; // 0x085B (Size: 0x1, Type: BoolProperty)
    std::uint8_t BoostStartToBoostLoopRelevancyData[0x14]; // 0x085C (Size: 0x14, Type: StructProperty)
    std::uint8_t BoostEndToIdleRelevancyData[0x14]; // 0x0870 (Size: 0x14, Type: StructProperty)
    float BoostStartToBoostLoopRemainingTimeThreshold; // 0x0884 (Size: 0x4, Type: FloatProperty)
    float BoostEndToIdleRemainingTimeThreshold; // 0x0888 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x088C
    void* CachedCosmeticsComponent; // 0x0890 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, ForwardSpeedPercent) == 1968, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::ForwardSpeedPercent");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, bIsTouchingGround) == 1972, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::bIsTouchingGround");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, DistanceToGround) == 1976, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::DistanceToGround");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, VehicleVelocity) == 1984, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::VehicleVelocity");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, bDriftBoostActive) == 2008, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::bDriftBoostActive");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, bUnderthrustActive) == 2009, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::bUnderthrustActive");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, bDriftActive) == 2010, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::bDriftActive");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, bKickflipActive) == 2011, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::bKickflipActive");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, bJumpActive) == 2012, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::bJumpActive");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, bTurboActive) == 2013, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::bTurboActive");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, bStartlineBoostActive) == 2014, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::bStartlineBoostActive");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, bDraftingActive) == 2015, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::bDraftingActive");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, bWorldBonusSpeedApplied) == 2016, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::bWorldBonusSpeedApplied");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, bHasTireMod) == 2017, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::bHasTireMod");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, bIsBoosting) == 2018, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::bIsBoosting");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, bIsPreview) == 2019, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::bIsPreview");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, bIsWheelCambered) == 2020, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::bIsWheelCambered");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, bShouldWheelSpinForPreview) == 2021, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::bShouldWheelSpinForPreview");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, bShouldBodyRumbleForPreview) == 2022, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::bShouldBodyRumbleForPreview");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, bShouldSimulateSteeringForPreview) == 2023, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::bShouldSimulateSteeringForPreview");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, bShouldSimulateDecelerationForPreview) == 2024, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::bShouldSimulateDecelerationForPreview");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, FakeWheelSteeringAngle) == 2028, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::FakeWheelSteeringAngle");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, PreviewSettings) == 2032, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::PreviewSettings");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, PreviewWheelSpin) == 2104, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::PreviewWheelSpin");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, PreviewSteeringRotationAngle) == 2108, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::PreviewSteeringRotationAngle");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, PreviewVehicleVelocity) == 2112, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::PreviewVehicleVelocity");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, bCanEnterTransition_IdleToBoostStart) == 2136, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::bCanEnterTransition_IdleToBoostStart");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, bCanEnterTransition_BoostStartToBoostLoop) == 2137, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::bCanEnterTransition_BoostStartToBoostLoop");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, bCanEnterTransition_BoostLoopToBoostEnd) == 2138, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::bCanEnterTransition_BoostLoopToBoostEnd");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, bCanEnterTransition_BoostEndToIdle) == 2139, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::bCanEnterTransition_BoostEndToIdle");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, BoostStartToBoostLoopRelevancyData) == 2140, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::BoostStartToBoostLoopRelevancyData");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, BoostEndToIdleRelevancyData) == 2160, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::BoostEndToIdleRelevancyData");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, BoostStartToBoostLoopRemainingTimeThreshold) == 2180, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::BoostStartToBoostLoopRemainingTimeThreshold");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, BoostEndToIdleRemainingTimeThreshold) == 2184, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::BoostEndToIdleRemainingTimeThreshold");
static_assert(offsetof(UVehicleCosmeticsMacaronAnimInstance, CachedCosmeticsComponent) == 2192, "Offset mismatch for UVehicleCosmeticsMacaronAnimInstance::CachedCosmeticsComponent");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsPreWarmPlayerStateComponent
// Kind: Class; super: PlayerStateComponent
class UVehicleCosmeticsPreWarmPlayerStateComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t VehicleCosmeticLoadoutData[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVehicleCosmeticsPreWarmPlayerStateComponent, VehicleCosmeticLoadoutData) == 192, "Offset mismatch for UVehicleCosmeticsPreWarmPlayerStateComponent::VehicleCosmeticLoadoutData");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsPreviewConfigs
// Kind: Class; super: PrimaryDataAsset
class UVehicleCosmeticsPreviewConfigs
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t VehiclePreviewActorClass[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    TArray<void*> VehiclePreviewActorOverrides; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultBoostPreviewActorClass[0x20]; // 0x0058 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t DefaultTrailPreviewActorClass[0x20]; // 0x0078 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t VehiclePreviewPrefabAssetClass[0x20]; // 0x0098 (Size: 0x20, Type: SoftClassProperty)
    TMap<void*, void*> VehiclePreviewDefaultPreviewBody; // 0x00B8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UVehicleCosmeticsPreviewConfigs, VehiclePreviewActorClass) == 40, "Offset mismatch for UVehicleCosmeticsPreviewConfigs::VehiclePreviewActorClass");
static_assert(offsetof(UVehicleCosmeticsPreviewConfigs, VehiclePreviewActorOverrides) == 72, "Offset mismatch for UVehicleCosmeticsPreviewConfigs::VehiclePreviewActorOverrides");
static_assert(offsetof(UVehicleCosmeticsPreviewConfigs, DefaultBoostPreviewActorClass) == 88, "Offset mismatch for UVehicleCosmeticsPreviewConfigs::DefaultBoostPreviewActorClass");
static_assert(offsetof(UVehicleCosmeticsPreviewConfigs, DefaultTrailPreviewActorClass) == 120, "Offset mismatch for UVehicleCosmeticsPreviewConfigs::DefaultTrailPreviewActorClass");
static_assert(offsetof(UVehicleCosmeticsPreviewConfigs, VehiclePreviewPrefabAssetClass) == 152, "Offset mismatch for UVehicleCosmeticsPreviewConfigs::VehiclePreviewPrefabAssetClass");
static_assert(offsetof(UVehicleCosmeticsPreviewConfigs, VehiclePreviewDefaultPreviewBody) == 184, "Offset mismatch for UVehicleCosmeticsPreviewConfigs::VehiclePreviewDefaultPreviewBody");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsWheelAnimInstance
// Kind: Class; super: VehicleCosmeticsAnimInstance
class UVehicleCosmeticsWheelAnimInstance
{
public:
    std::uint8_t Pad_0000[0x8A0]; // 0x0000
    std::uint8_t SpinnerSpin[0x1]; // 0x08A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVehicleCosmeticsWheelAnimInstance, SpinnerSpin) == 2208, "Offset mismatch for UVehicleCosmeticsWheelAnimInstance::SpinnerSpin");

// /Script/VehicleCosmeticsRuntime.VehicleCosmeticsZestAnimInstance
// Kind: Class; super: VehicleCosmeticsAnimInstance
class UVehicleCosmeticsZestAnimInstance
{
public:
    std::uint8_t Pad_0000[0x7B0]; // 0x0000
    float ForwardSpeedPercent; // 0x07B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsTouchingGround; // 0x07B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x07B5
    float DistanceToGround; // 0x07B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x07BC
    std::uint8_t VehicleVelocity[0x18]; // 0x07C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t bDriftBoostActive; // 0x07D8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUnderthrustActive; // 0x07D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDriftActive; // 0x07DA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bKickflipActive; // 0x07DB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bJumpActive; // 0x07DC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTurboActive; // 0x07DD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStartlineBoostActive; // 0x07DE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDraftingActive; // 0x07DF (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWorldBonusSpeedApplied; // 0x07E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTireMod; // 0x07E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBoosting; // 0x07E2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPreview; // 0x07E3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsWheelCambered; // 0x07E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldWheelSpinForPreview; // 0x07E5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldBodyRumbleForPreview; // 0x07E6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldSimulateSteeringForPreview; // 0x07E7 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShouldSimulateDecelerationForPreview; // 0x07E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x07E9
    float FakeWheelSteeringAngle; // 0x07EC (Size: 0x4, Type: FloatProperty)
    std::uint8_t PreviewSettings[0x48]; // 0x07F0 (Size: 0x48, Type: StructProperty)
    float PreviewWheelSpin; // 0x0838 (Size: 0x4, Type: FloatProperty)
    float PreviewSteeringRotationAngle; // 0x083C (Size: 0x4, Type: FloatProperty)
    std::uint8_t PreviewVehicleVelocity[0x18]; // 0x0840 (Size: 0x18, Type: StructProperty)
    std::uint8_t bCanEnterTransition_IdleToBoostStart; // 0x0858 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterTransition_BoostStartToBoostLoop; // 0x0859 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterTransition_BoostLoopToBoostEnd; // 0x085A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanEnterTransition_BoostEndToIdle; // 0x085B (Size: 0x1, Type: BoolProperty)
    std::uint8_t BoostStartToBoostLoopRelevancyData[0x14]; // 0x085C (Size: 0x14, Type: StructProperty)
    std::uint8_t BoostEndToIdleRelevancyData[0x14]; // 0x0870 (Size: 0x14, Type: StructProperty)
    float BoostStartToBoostLoopRemainingTimeThreshold; // 0x0884 (Size: 0x4, Type: FloatProperty)
    float BoostEndToIdleRemainingTimeThreshold; // 0x0888 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x088C
    void* CachedCosmeticsComponent; // 0x0890 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, ForwardSpeedPercent) == 1968, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::ForwardSpeedPercent");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, bIsTouchingGround) == 1972, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::bIsTouchingGround");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, DistanceToGround) == 1976, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::DistanceToGround");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, VehicleVelocity) == 1984, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::VehicleVelocity");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, bDriftBoostActive) == 2008, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::bDriftBoostActive");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, bUnderthrustActive) == 2009, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::bUnderthrustActive");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, bDriftActive) == 2010, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::bDriftActive");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, bKickflipActive) == 2011, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::bKickflipActive");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, bJumpActive) == 2012, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::bJumpActive");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, bTurboActive) == 2013, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::bTurboActive");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, bStartlineBoostActive) == 2014, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::bStartlineBoostActive");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, bDraftingActive) == 2015, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::bDraftingActive");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, bWorldBonusSpeedApplied) == 2016, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::bWorldBonusSpeedApplied");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, bHasTireMod) == 2017, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::bHasTireMod");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, bIsBoosting) == 2018, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::bIsBoosting");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, bIsPreview) == 2019, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::bIsPreview");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, bIsWheelCambered) == 2020, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::bIsWheelCambered");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, bShouldWheelSpinForPreview) == 2021, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::bShouldWheelSpinForPreview");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, bShouldBodyRumbleForPreview) == 2022, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::bShouldBodyRumbleForPreview");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, bShouldSimulateSteeringForPreview) == 2023, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::bShouldSimulateSteeringForPreview");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, bShouldSimulateDecelerationForPreview) == 2024, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::bShouldSimulateDecelerationForPreview");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, FakeWheelSteeringAngle) == 2028, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::FakeWheelSteeringAngle");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, PreviewSettings) == 2032, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::PreviewSettings");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, PreviewWheelSpin) == 2104, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::PreviewWheelSpin");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, PreviewSteeringRotationAngle) == 2108, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::PreviewSteeringRotationAngle");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, PreviewVehicleVelocity) == 2112, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::PreviewVehicleVelocity");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, bCanEnterTransition_IdleToBoostStart) == 2136, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::bCanEnterTransition_IdleToBoostStart");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, bCanEnterTransition_BoostStartToBoostLoop) == 2137, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::bCanEnterTransition_BoostStartToBoostLoop");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, bCanEnterTransition_BoostLoopToBoostEnd) == 2138, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::bCanEnterTransition_BoostLoopToBoostEnd");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, bCanEnterTransition_BoostEndToIdle) == 2139, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::bCanEnterTransition_BoostEndToIdle");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, BoostStartToBoostLoopRelevancyData) == 2140, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::BoostStartToBoostLoopRelevancyData");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, BoostEndToIdleRelevancyData) == 2160, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::BoostEndToIdleRelevancyData");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, BoostStartToBoostLoopRemainingTimeThreshold) == 2180, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::BoostStartToBoostLoopRemainingTimeThreshold");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, BoostEndToIdleRemainingTimeThreshold) == 2184, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::BoostEndToIdleRemainingTimeThreshold");
static_assert(offsetof(UVehicleCosmeticsZestAnimInstance, CachedCosmeticsComponent) == 2192, "Offset mismatch for UVehicleCosmeticsZestAnimInstance::CachedCosmeticsComponent");
