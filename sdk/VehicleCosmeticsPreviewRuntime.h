/**
 * decamp dumper generated SDK
 * Package: /Script/VehicleCosmeticsPreviewRuntime
 */
#pragma once
#include "Basic.h"

// /Script/VehicleCosmeticsPreviewRuntime.FortVehicleCosmeticsLevelPreviewAssetData
// Kind: ScriptStruct; super: none
struct FFortVehicleCosmeticsLevelPreviewAssetData
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TWeakObjectPtr<void> OwningPreviewActor; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> CosmeticVariants; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AssetTierTag[0x4]; // 0x0050 (Size: 0x4, Type: StructProperty)
    std::uint8_t AssetColor[0x14]; // 0x0054 (Size: 0x14, Type: StructProperty)
    std::uint8_t AssetPaintName[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData, OwningPreviewActor) == 56, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData::OwningPreviewActor");
static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData, CosmeticVariants) == 64, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData::CosmeticVariants");
static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData, AssetTierTag) == 80, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData::AssetTierTag");
static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData, AssetColor) == 84, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData::AssetColor");
static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData, AssetPaintName) == 104, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData::AssetPaintName");

// /Script/VehicleCosmeticsPreviewRuntime.FortVehicleCosmeticsLevelPreviewAssetData_Body
// Kind: ScriptStruct; super: FortVehicleCosmeticsLevelPreviewAssetData
struct FFortVehicleCosmeticsLevelPreviewAssetData_Body
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* BodyAsset; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* BodyAssetInstance; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* BodyItemDefinition; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BodyGlowColor[0x1]; // 0x00A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_Body, BodyAsset) == 144, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_Body::BodyAsset");
static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_Body, BodyAssetInstance) == 152, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_Body::BodyAssetInstance");
static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_Body, BodyItemDefinition) == 160, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_Body::BodyItemDefinition");
static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_Body, BodyGlowColor) == 168, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_Body::BodyGlowColor");

// /Script/VehicleCosmeticsPreviewRuntime.FortVehicleCosmeticsLevelPreviewAssetData_Booster
// Kind: ScriptStruct; super: FortVehicleCosmeticsLevelPreviewAssetData
struct FFortVehicleCosmeticsLevelPreviewAssetData_Booster
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* BoosterAsset; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* BoosterAssetInstance; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* BoosterItemDefinition; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_Booster, BoosterAsset) == 144, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_Booster::BoosterAsset");
static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_Booster, BoosterAssetInstance) == 152, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_Booster::BoosterAssetInstance");
static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_Booster, BoosterItemDefinition) == 160, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_Booster::BoosterItemDefinition");

// /Script/VehicleCosmeticsPreviewRuntime.FortVehicleCosmeticsLevelPreviewAssetData_DriftTrail
// Kind: ScriptStruct; super: FortVehicleCosmeticsLevelPreviewAssetData
struct FFortVehicleCosmeticsLevelPreviewAssetData_DriftTrail
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* DriftTrailAsset; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* DriftTrailAssetInstance; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* DriftTrailItemDefinition; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_DriftTrail, DriftTrailAsset) == 144, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_DriftTrail::DriftTrailAsset");
static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_DriftTrail, DriftTrailAssetInstance) == 152, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_DriftTrail::DriftTrailAssetInstance");
static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_DriftTrail, DriftTrailItemDefinition) == 160, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_DriftTrail::DriftTrailItemDefinition");

// /Script/VehicleCosmeticsPreviewRuntime.FortVehicleCosmeticsLevelPreviewAssetData_Macaron
// Kind: ScriptStruct; super: FortVehicleCosmeticsLevelPreviewAssetData
struct FFortVehicleCosmeticsLevelPreviewAssetData_Macaron
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* MacaronAsset; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* MacaronAssetInstance; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* MacaronItemDefinition; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_Macaron, MacaronAsset) == 144, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_Macaron::MacaronAsset");
static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_Macaron, MacaronAssetInstance) == 152, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_Macaron::MacaronAssetInstance");
static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_Macaron, MacaronItemDefinition) == 160, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_Macaron::MacaronItemDefinition");

// /Script/VehicleCosmeticsPreviewRuntime.FortVehicleCosmeticsLevelPreviewAssetData_Skin
// Kind: ScriptStruct; super: FortVehicleCosmeticsLevelPreviewAssetData
struct FFortVehicleCosmeticsLevelPreviewAssetData_Skin
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* SkinAsset; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* SkinAssetInstance; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* SkinItemDefinition; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    FString SkinName; // 0x00A8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_Skin, SkinAsset) == 144, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_Skin::SkinAsset");
static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_Skin, SkinAssetInstance) == 152, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_Skin::SkinAssetInstance");
static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_Skin, SkinItemDefinition) == 160, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_Skin::SkinItemDefinition");
static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_Skin, SkinName) == 168, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_Skin::SkinName");

// /Script/VehicleCosmeticsPreviewRuntime.FortVehicleCosmeticsLevelPreviewAssetData_Wheel
// Kind: ScriptStruct; super: FortVehicleCosmeticsLevelPreviewAssetData
struct FFortVehicleCosmeticsLevelPreviewAssetData_Wheel
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* WheelAsset; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* WheelAssetInstance; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* WheelItemDefinition; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_Wheel, WheelAsset) == 144, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_Wheel::WheelAsset");
static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_Wheel, WheelAssetInstance) == 152, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_Wheel::WheelAssetInstance");
static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_Wheel, WheelItemDefinition) == 160, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_Wheel::WheelItemDefinition");

// /Script/VehicleCosmeticsPreviewRuntime.FortVehicleCosmeticsLevelPreviewAssetData_Zest
// Kind: ScriptStruct; super: FortVehicleCosmeticsLevelPreviewAssetData
struct FFortVehicleCosmeticsLevelPreviewAssetData_Zest
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* ZestAsset; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* ZestAssetInstance; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* ZestItemDefinition; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_Zest, ZestAsset) == 144, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_Zest::ZestAsset");
static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_Zest, ZestAssetInstance) == 152, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_Zest::ZestAssetInstance");
static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewAssetData_Zest, ZestItemDefinition) == 160, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewAssetData_Zest::ZestItemDefinition");

// /Script/VehicleCosmeticsPreviewRuntime.FortVehicleCosmeticsLevelPreviewPaintedVariant
// Kind: ScriptStruct; super: none
struct FFortVehicleCosmeticsLevelPreviewPaintedVariant
{
public:
    FString PaintName; // 0x0000 (Size: 0x10, Type: StrProperty)
    void* PreviewActor; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewPaintedVariant, PaintName) == 0, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewPaintedVariant::PaintName");
static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewPaintedVariant, PreviewActor) == 16, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewPaintedVariant::PreviewActor");

// /Script/VehicleCosmeticsPreviewRuntime.FortVehicleCosmeticsLevelPreviewPaintedVariantCollection
// Kind: ScriptStruct; super: none
struct FFortVehicleCosmeticsLevelPreviewPaintedVariantCollection
{
public:
    TArray<void*> PaintedVariants; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PreviewSlotTag[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewPaintedVariantCollection, PaintedVariants) == 0, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewPaintedVariantCollection::PaintedVariants");
static_assert(offsetof(FFortVehicleCosmeticsLevelPreviewPaintedVariantCollection, PreviewSlotTag) == 16, "Offset mismatch for FFortVehicleCosmeticsLevelPreviewPaintedVariantCollection::PreviewSlotTag");

// /Script/VehicleCosmeticsPreviewRuntime.FortVehicleCosmeticsPaintName
// Kind: ScriptStruct; super: none
struct FFortVehicleCosmeticsPaintName
{
public:
    FString PaintName; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FFortVehicleCosmeticsPaintName, PaintName) == 0, "Offset mismatch for FFortVehicleCosmeticsPaintName::PaintName");

// /Script/VehicleCosmeticsPreviewRuntime.VehicleCosmeticsPreviewAudioParams
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsPreviewAudioParams
{
public:
    std::uint8_t Velocity[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float Throttle; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float ForwardSpeed; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MaxForwardSpeed; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float SlipAngle; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float MaxSpringLength; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsReversing; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsInAir; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsBeingDriven; // 0x002E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FVehicleCosmeticsPreviewAudioParams, Velocity) == 0, "Offset mismatch for FVehicleCosmeticsPreviewAudioParams::Velocity");
static_assert(offsetof(FVehicleCosmeticsPreviewAudioParams, Throttle) == 24, "Offset mismatch for FVehicleCosmeticsPreviewAudioParams::Throttle");
static_assert(offsetof(FVehicleCosmeticsPreviewAudioParams, ForwardSpeed) == 28, "Offset mismatch for FVehicleCosmeticsPreviewAudioParams::ForwardSpeed");
static_assert(offsetof(FVehicleCosmeticsPreviewAudioParams, MaxForwardSpeed) == 32, "Offset mismatch for FVehicleCosmeticsPreviewAudioParams::MaxForwardSpeed");
static_assert(offsetof(FVehicleCosmeticsPreviewAudioParams, SlipAngle) == 36, "Offset mismatch for FVehicleCosmeticsPreviewAudioParams::SlipAngle");
static_assert(offsetof(FVehicleCosmeticsPreviewAudioParams, MaxSpringLength) == 40, "Offset mismatch for FVehicleCosmeticsPreviewAudioParams::MaxSpringLength");
static_assert(offsetof(FVehicleCosmeticsPreviewAudioParams, bIsReversing) == 44, "Offset mismatch for FVehicleCosmeticsPreviewAudioParams::bIsReversing");
static_assert(offsetof(FVehicleCosmeticsPreviewAudioParams, bIsInAir) == 45, "Offset mismatch for FVehicleCosmeticsPreviewAudioParams::bIsInAir");
static_assert(offsetof(FVehicleCosmeticsPreviewAudioParams, bIsBeingDriven) == 46, "Offset mismatch for FVehicleCosmeticsPreviewAudioParams::bIsBeingDriven");

// /Script/VehicleCosmeticsPreviewRuntime.VehicleCosmeticsPreviewSettings
// Kind: ScriptStruct; super: none
struct FVehicleCosmeticsPreviewSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleCosmeticsPreviewRuntime.FortItemVehiclePreviewActor
// Kind: Class; super: FortItemPreviewMultiAngleActor
class UFortItemVehiclePreviewActor
{
public:
    std::uint8_t Pad_0000[0x5E0]; // 0x0000
    void* ZoomedOutVehicleCameraComponent; // 0x05E0 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedInVehicleCameraComponent; // 0x05E8 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedOutWheelCameraComponent; // 0x05F0 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedInWheelCameraComponent; // 0x05F8 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedOutMacaronCameraComponent; // 0x0600 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedInMacaronCameraComponent; // 0x0608 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedOutZestCameraComponent; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedInZestCameraComponent; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedOutBoostCameraComponent; // 0x0620 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedInBoostCameraComponent; // 0x0628 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedOutDriftTrailCameraComponent; // 0x0630 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedInDriftTrailCameraComponent; // 0x0638 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseSingleConfiguredCamera; // 0x0640 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0641
    float FrameSettingHeightOffset; // 0x0644 (Size: 0x4, Type: FloatProperty)
    float FrameSettingExpansionOffset; // 0x0648 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FrameSettingBoundingBehavior; // 0x064C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x064D
    float FrameSettingZoomInBoundsScale; // 0x0650 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOverrideTargetBounds; // 0x0654 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0655
    std::uint8_t OverrideTargetBounds[0x20]; // 0x0658 (Size: 0x20, Type: StructProperty)
    void* PreviewVehicleActorComponent; // 0x0678 (Size: 0x8, Type: ObjectProperty)
    void* PreviewVehicleActor; // 0x0680 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ItemTypesToHideWhenLoading[0x20]; // 0x0688 (Size: 0x20, Type: StructProperty)
    std::uint8_t ItemTypesToNeverHideWhenLoading[0x1]; // 0x06A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortItemVehiclePreviewActor, ZoomedOutVehicleCameraComponent) == 1504, "Offset mismatch for UFortItemVehiclePreviewActor::ZoomedOutVehicleCameraComponent");
static_assert(offsetof(UFortItemVehiclePreviewActor, ZoomedInVehicleCameraComponent) == 1512, "Offset mismatch for UFortItemVehiclePreviewActor::ZoomedInVehicleCameraComponent");
static_assert(offsetof(UFortItemVehiclePreviewActor, ZoomedOutWheelCameraComponent) == 1520, "Offset mismatch for UFortItemVehiclePreviewActor::ZoomedOutWheelCameraComponent");
static_assert(offsetof(UFortItemVehiclePreviewActor, ZoomedInWheelCameraComponent) == 1528, "Offset mismatch for UFortItemVehiclePreviewActor::ZoomedInWheelCameraComponent");
static_assert(offsetof(UFortItemVehiclePreviewActor, ZoomedOutMacaronCameraComponent) == 1536, "Offset mismatch for UFortItemVehiclePreviewActor::ZoomedOutMacaronCameraComponent");
static_assert(offsetof(UFortItemVehiclePreviewActor, ZoomedInMacaronCameraComponent) == 1544, "Offset mismatch for UFortItemVehiclePreviewActor::ZoomedInMacaronCameraComponent");
static_assert(offsetof(UFortItemVehiclePreviewActor, ZoomedOutZestCameraComponent) == 1552, "Offset mismatch for UFortItemVehiclePreviewActor::ZoomedOutZestCameraComponent");
static_assert(offsetof(UFortItemVehiclePreviewActor, ZoomedInZestCameraComponent) == 1560, "Offset mismatch for UFortItemVehiclePreviewActor::ZoomedInZestCameraComponent");
static_assert(offsetof(UFortItemVehiclePreviewActor, ZoomedOutBoostCameraComponent) == 1568, "Offset mismatch for UFortItemVehiclePreviewActor::ZoomedOutBoostCameraComponent");
static_assert(offsetof(UFortItemVehiclePreviewActor, ZoomedInBoostCameraComponent) == 1576, "Offset mismatch for UFortItemVehiclePreviewActor::ZoomedInBoostCameraComponent");
static_assert(offsetof(UFortItemVehiclePreviewActor, ZoomedOutDriftTrailCameraComponent) == 1584, "Offset mismatch for UFortItemVehiclePreviewActor::ZoomedOutDriftTrailCameraComponent");
static_assert(offsetof(UFortItemVehiclePreviewActor, ZoomedInDriftTrailCameraComponent) == 1592, "Offset mismatch for UFortItemVehiclePreviewActor::ZoomedInDriftTrailCameraComponent");
static_assert(offsetof(UFortItemVehiclePreviewActor, bUseSingleConfiguredCamera) == 1600, "Offset mismatch for UFortItemVehiclePreviewActor::bUseSingleConfiguredCamera");
static_assert(offsetof(UFortItemVehiclePreviewActor, FrameSettingHeightOffset) == 1604, "Offset mismatch for UFortItemVehiclePreviewActor::FrameSettingHeightOffset");
static_assert(offsetof(UFortItemVehiclePreviewActor, FrameSettingExpansionOffset) == 1608, "Offset mismatch for UFortItemVehiclePreviewActor::FrameSettingExpansionOffset");
static_assert(offsetof(UFortItemVehiclePreviewActor, FrameSettingBoundingBehavior) == 1612, "Offset mismatch for UFortItemVehiclePreviewActor::FrameSettingBoundingBehavior");
static_assert(offsetof(UFortItemVehiclePreviewActor, FrameSettingZoomInBoundsScale) == 1616, "Offset mismatch for UFortItemVehiclePreviewActor::FrameSettingZoomInBoundsScale");
static_assert(offsetof(UFortItemVehiclePreviewActor, bOverrideTargetBounds) == 1620, "Offset mismatch for UFortItemVehiclePreviewActor::bOverrideTargetBounds");
static_assert(offsetof(UFortItemVehiclePreviewActor, OverrideTargetBounds) == 1624, "Offset mismatch for UFortItemVehiclePreviewActor::OverrideTargetBounds");
static_assert(offsetof(UFortItemVehiclePreviewActor, PreviewVehicleActorComponent) == 1656, "Offset mismatch for UFortItemVehiclePreviewActor::PreviewVehicleActorComponent");
static_assert(offsetof(UFortItemVehiclePreviewActor, PreviewVehicleActor) == 1664, "Offset mismatch for UFortItemVehiclePreviewActor::PreviewVehicleActor");
static_assert(offsetof(UFortItemVehiclePreviewActor, ItemTypesToHideWhenLoading) == 1672, "Offset mismatch for UFortItemVehiclePreviewActor::ItemTypesToHideWhenLoading");
static_assert(offsetof(UFortItemVehiclePreviewActor, ItemTypesToNeverHideWhenLoading) == 1704, "Offset mismatch for UFortItemVehiclePreviewActor::ItemTypesToNeverHideWhenLoading");

// /Script/VehicleCosmeticsPreviewRuntime.FortVehicleCosmeticsLevelPreviewActor
// Kind: Class; super: Actor
class UFortVehicleCosmeticsLevelPreviewActor
{
public:
    std::uint8_t Pad_0000[0x2D0]; // 0x0000
    std::uint8_t BodyAssetData[0xB8]; // 0x02D0 (Size: 0xB8, Type: StructProperty)
    std::uint8_t BoosterAssetData[0xA8]; // 0x0388 (Size: 0xA8, Type: StructProperty)
    std::uint8_t DriftTrailAssetData[0xA8]; // 0x0430 (Size: 0xA8, Type: StructProperty)
    std::uint8_t MacaronAssetData[0xA8]; // 0x04D8 (Size: 0xA8, Type: StructProperty)
    std::uint8_t SkinAssetData[0xB8]; // 0x0580 (Size: 0xB8, Type: StructProperty)
    std::uint8_t WheelAssetData[0xA8]; // 0x0638 (Size: 0xA8, Type: StructProperty)
    std::uint8_t ZestAssetData[0xA8]; // 0x06E0 (Size: 0xA8, Type: StructProperty)
    void* BodyAsset; // 0x0788 (Size: 0x8, Type: ObjectProperty)
    void* BoosterAsset; // 0x0790 (Size: 0x8, Type: ObjectProperty)
    void* DriftTrailAsset; // 0x0798 (Size: 0x8, Type: ObjectProperty)
    void* SkinAsset; // 0x07A0 (Size: 0x8, Type: ObjectProperty)
    void* WheelAsset; // 0x07A8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> BodyCosmeticVariants; // 0x07B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BoosterCosmeticVariants; // 0x07C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DriftTrailCosmeticVariants; // 0x07D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SkinCosmeticVariants; // 0x07E0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WheelCosmeticVariants; // 0x07F0 (Size: 0x10, Type: ArrayProperty)
    void* CosmeticsPreviewActor; // 0x0800 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnableBoost; // 0x0808 (Size: 0x1, Type: BoolProperty)
    // 0x0808 BoolProperty bEnableDriftTrail (shared storage)
    // 0x0808 BoolProperty bForceFrontEndPreview (shared storage)
    std::uint8_t bEnableWheelSpin; // 0x0809 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x080A
    float WheelSpinSpeed; // 0x080C (Size: 0x4, Type: FloatProperty)
    float WheelSteeringAngle; // 0x0810 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableAsynchronousLoading; // 0x0814 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0815
    std::uint8_t BodyAssetTierTag[0x4]; // 0x0818 (Size: 0x4, Type: StructProperty)
    std::uint8_t BoosterAssetTierTag[0x4]; // 0x081C (Size: 0x4, Type: StructProperty)
    std::uint8_t DriftTrailAssetTierTag[0x4]; // 0x0820 (Size: 0x4, Type: StructProperty)
    std::uint8_t SkinAssetTierTag[0x4]; // 0x0824 (Size: 0x4, Type: StructProperty)
    std::uint8_t WheelAssetTierTag[0x4]; // 0x0828 (Size: 0x4, Type: StructProperty)
    std::uint8_t BodyColor[0x10]; // 0x082C (Size: 0x10, Type: StructProperty)
    std::uint8_t GlowColor[0x14]; // 0x083C (Size: 0x14, Type: StructProperty)
    FString BodyPaintName; // 0x0850 (Size: 0x10, Type: StrProperty)
    FString BoosterPaintName; // 0x0860 (Size: 0x10, Type: StrProperty)
    FString DriftTrailPaintName; // 0x0870 (Size: 0x10, Type: StrProperty)
    std::uint8_t SkinColor[0x10]; // 0x0880 (Size: 0x10, Type: StructProperty)
    FString SkinName; // 0x0890 (Size: 0x10, Type: StrProperty)
    FString SkinPaintName; // 0x08A0 (Size: 0x10, Type: StrProperty)
    FString WheelPaintName; // 0x08B0 (Size: 0x10, Type: StrProperty)
    std::uint8_t bCreateBodyPaintedVariants; // 0x08C0 (Size: 0x1, Type: BoolProperty)
    // 0x08C0 BoolProperty bCreateSkinPaintedVariants (shared storage)
    // 0x08C0 BoolProperty bCreateWheelPaintedVariants (shared storage)
    std::uint8_t Pad_0003[0x7]; // 0x08C1
    TArray<void*> PaintedVariantCollections; // 0x08C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0004[0x28]; // 0x08D8
    std::uint8_t PreviewActorVersion; // 0x0900 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, BodyAssetData) == 720, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::BodyAssetData");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, BoosterAssetData) == 904, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::BoosterAssetData");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, DriftTrailAssetData) == 1072, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::DriftTrailAssetData");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, MacaronAssetData) == 1240, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::MacaronAssetData");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, SkinAssetData) == 1408, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::SkinAssetData");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, WheelAssetData) == 1592, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::WheelAssetData");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, ZestAssetData) == 1760, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::ZestAssetData");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, BodyAsset) == 1928, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::BodyAsset");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, BoosterAsset) == 1936, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::BoosterAsset");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, DriftTrailAsset) == 1944, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::DriftTrailAsset");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, SkinAsset) == 1952, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::SkinAsset");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, WheelAsset) == 1960, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::WheelAsset");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, BodyCosmeticVariants) == 1968, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::BodyCosmeticVariants");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, BoosterCosmeticVariants) == 1984, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::BoosterCosmeticVariants");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, DriftTrailCosmeticVariants) == 2000, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::DriftTrailCosmeticVariants");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, SkinCosmeticVariants) == 2016, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::SkinCosmeticVariants");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, WheelCosmeticVariants) == 2032, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::WheelCosmeticVariants");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, CosmeticsPreviewActor) == 2048, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::CosmeticsPreviewActor");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, bEnableBoost) == 2056, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::bEnableBoost");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, bEnableWheelSpin) == 2057, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::bEnableWheelSpin");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, WheelSpinSpeed) == 2060, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::WheelSpinSpeed");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, WheelSteeringAngle) == 2064, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::WheelSteeringAngle");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, bEnableAsynchronousLoading) == 2068, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::bEnableAsynchronousLoading");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, BodyAssetTierTag) == 2072, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::BodyAssetTierTag");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, BoosterAssetTierTag) == 2076, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::BoosterAssetTierTag");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, DriftTrailAssetTierTag) == 2080, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::DriftTrailAssetTierTag");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, SkinAssetTierTag) == 2084, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::SkinAssetTierTag");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, WheelAssetTierTag) == 2088, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::WheelAssetTierTag");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, BodyColor) == 2092, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::BodyColor");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, GlowColor) == 2108, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::GlowColor");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, BodyPaintName) == 2128, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::BodyPaintName");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, BoosterPaintName) == 2144, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::BoosterPaintName");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, DriftTrailPaintName) == 2160, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::DriftTrailPaintName");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, SkinColor) == 2176, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::SkinColor");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, SkinName) == 2192, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::SkinName");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, SkinPaintName) == 2208, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::SkinPaintName");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, WheelPaintName) == 2224, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::WheelPaintName");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, bCreateBodyPaintedVariants) == 2240, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::bCreateBodyPaintedVariants");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, PaintedVariantCollections) == 2248, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::PaintedVariantCollections");
static_assert(offsetof(UFortVehicleCosmeticsLevelPreviewActor, PreviewActorVersion) == 2304, "Offset mismatch for UFortVehicleCosmeticsLevelPreviewActor::PreviewActorVersion");

// /Script/VehicleCosmeticsPreviewRuntime.VehicleAudioMotorModelUpdater_Preview
// Kind: Class; super: VehicleAudioMotorModelUpdater_Default
class UVehicleAudioMotorModelUpdater_Preview
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VehicleCosmeticsPreviewRuntime.VehicleCosmeticsPreviewVehicle
// Kind: Class; super: FortAthenaSKVehicle
class UVehicleCosmeticsPreviewVehicle
{
public:
    std::uint8_t Pad_0000[0x20F1]; // 0x0000
    std::uint8_t bShouldWheelSpin; // 0x20F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x20F2
    float FakeWheelSpinSpeed; // 0x20F4 (Size: 0x4, Type: FloatProperty)
    float FakeWheelSteeringAngle; // 0x20F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x50]; // 0x20FC
    std::int32_t NumAllowedVehicleCosmeticChanges; // 0x214C (Size: 0x4, Type: IntProperty)
    std::uint8_t AudioParams[0x1]; // 0x2150 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVehicleCosmeticsPreviewVehicle, bShouldWheelSpin) == 8433, "Offset mismatch for UVehicleCosmeticsPreviewVehicle::bShouldWheelSpin");
static_assert(offsetof(UVehicleCosmeticsPreviewVehicle, FakeWheelSpinSpeed) == 8436, "Offset mismatch for UVehicleCosmeticsPreviewVehicle::FakeWheelSpinSpeed");
static_assert(offsetof(UVehicleCosmeticsPreviewVehicle, FakeWheelSteeringAngle) == 8440, "Offset mismatch for UVehicleCosmeticsPreviewVehicle::FakeWheelSteeringAngle");
static_assert(offsetof(UVehicleCosmeticsPreviewVehicle, NumAllowedVehicleCosmeticChanges) == 8524, "Offset mismatch for UVehicleCosmeticsPreviewVehicle::NumAllowedVehicleCosmeticChanges");
static_assert(offsetof(UVehicleCosmeticsPreviewVehicle, AudioParams) == 8528, "Offset mismatch for UVehicleCosmeticsPreviewVehicle::AudioParams");
