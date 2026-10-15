/**
 * decamp dumper generated SDK
 * Package: /Script/YokeHopUnkindUI
 */
#pragma once
#include "Basic.h"

// /Script/YokeHopUnkindUI.StormMaskTextureData
// Kind: ScriptStruct; super: none
struct FStormMaskTextureData
{
public:
    void* StormMaskTexture; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* RT_BlurFirstPass; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* RT_BlurSecondPass; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FStormMaskTextureData, StormMaskTexture) == 0, "Offset mismatch for FStormMaskTextureData::StormMaskTexture");
static_assert(offsetof(FStormMaskTextureData, RT_BlurFirstPass) == 8, "Offset mismatch for FStormMaskTextureData::RT_BlurFirstPass");
static_assert(offsetof(FStormMaskTextureData, RT_BlurSecondPass) == 16, "Offset mismatch for FStormMaskTextureData::RT_BlurSecondPass");

// /Script/YokeHopUnkindUI.StormMaskTextureGenerationInfo
// Kind: ScriptStruct; super: TableRowBase
struct FStormMaskTextureGenerationInfo
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t CurrentStormTextureSize; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t FutureStormTextureSize; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t BlurRadius; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FStormMaskTextureGenerationInfo, CurrentStormTextureSize) == 8, "Offset mismatch for FStormMaskTextureGenerationInfo::CurrentStormTextureSize");
static_assert(offsetof(FStormMaskTextureGenerationInfo, FutureStormTextureSize) == 12, "Offset mismatch for FStormMaskTextureGenerationInfo::FutureStormTextureSize");
static_assert(offsetof(FStormMaskTextureGenerationInfo, BlurRadius) == 16, "Offset mismatch for FStormMaskTextureGenerationInfo::BlurRadius");

// /Script/YokeHopUnkindUI.YokeHopUnkindUIComponent_StormLine
// Kind: Class; super: FortControllerComponent
class UYokeHopUnkindUIComponent_StormLine
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    void* StormLineMaterial; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* StormLineMID; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MinimapStormLineBrush[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UYokeHopUnkindUIComponent_StormLine, StormLineMaterial) == 224, "Offset mismatch for UYokeHopUnkindUIComponent_StormLine::StormLineMaterial");
static_assert(offsetof(UYokeHopUnkindUIComponent_StormLine, StormLineMID) == 232, "Offset mismatch for UYokeHopUnkindUIComponent_StormLine::StormLineMID");
static_assert(offsetof(UYokeHopUnkindUIComponent_StormLine, MinimapStormLineBrush) == 240, "Offset mismatch for UYokeHopUnkindUIComponent_StormLine::MinimapStormLineBrush");

// /Script/YokeHopUnkindUI.YokeHopUnkindUIComponent_StormShape
// Kind: Class; super: FortGameStateComponent
class UYokeHopUnkindUIComponent_StormShape
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    void* StormMaskMaterialOverride; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t StormMaskTextureData[0x60]; // 0x0130 (Size: 0x60, Type: StructProperty)
    void* DualStormMaskMaterialOverride; // 0x0190 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentStormMaskData[0x60]; // 0x0198 (Size: 0x60, Type: StructProperty)
    std::uint8_t FutureStormMaskData[0x60]; // 0x01F8 (Size: 0x60, Type: StructProperty)
    std::int32_t FallbackStormMaskTextureSize; // 0x0258 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x025C
    void* StormMaskTextureSizeByQualityDT; // 0x0260 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NumSplineSegmentSubdivisions; // 0x0268 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0xC]; // 0x026C
    TWeakObjectPtr<void> SafeZoneOverrideProvider; // 0x0278 (Size: 0x8, Type: WeakObjectProperty)
    float DefaultStormOpacity; // 0x0280 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0xC]; // 0x0284
    void* BlurMaterial; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* BlurMID; // 0x0298 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UYokeHopUnkindUIComponent_StormShape, StormMaskMaterialOverride) == 296, "Offset mismatch for UYokeHopUnkindUIComponent_StormShape::StormMaskMaterialOverride");
static_assert(offsetof(UYokeHopUnkindUIComponent_StormShape, StormMaskTextureData) == 304, "Offset mismatch for UYokeHopUnkindUIComponent_StormShape::StormMaskTextureData");
static_assert(offsetof(UYokeHopUnkindUIComponent_StormShape, DualStormMaskMaterialOverride) == 400, "Offset mismatch for UYokeHopUnkindUIComponent_StormShape::DualStormMaskMaterialOverride");
static_assert(offsetof(UYokeHopUnkindUIComponent_StormShape, CurrentStormMaskData) == 408, "Offset mismatch for UYokeHopUnkindUIComponent_StormShape::CurrentStormMaskData");
static_assert(offsetof(UYokeHopUnkindUIComponent_StormShape, FutureStormMaskData) == 504, "Offset mismatch for UYokeHopUnkindUIComponent_StormShape::FutureStormMaskData");
static_assert(offsetof(UYokeHopUnkindUIComponent_StormShape, FallbackStormMaskTextureSize) == 600, "Offset mismatch for UYokeHopUnkindUIComponent_StormShape::FallbackStormMaskTextureSize");
static_assert(offsetof(UYokeHopUnkindUIComponent_StormShape, StormMaskTextureSizeByQualityDT) == 608, "Offset mismatch for UYokeHopUnkindUIComponent_StormShape::StormMaskTextureSizeByQualityDT");
static_assert(offsetof(UYokeHopUnkindUIComponent_StormShape, NumSplineSegmentSubdivisions) == 616, "Offset mismatch for UYokeHopUnkindUIComponent_StormShape::NumSplineSegmentSubdivisions");
static_assert(offsetof(UYokeHopUnkindUIComponent_StormShape, SafeZoneOverrideProvider) == 632, "Offset mismatch for UYokeHopUnkindUIComponent_StormShape::SafeZoneOverrideProvider");
static_assert(offsetof(UYokeHopUnkindUIComponent_StormShape, DefaultStormOpacity) == 640, "Offset mismatch for UYokeHopUnkindUIComponent_StormShape::DefaultStormOpacity");
static_assert(offsetof(UYokeHopUnkindUIComponent_StormShape, BlurMaterial) == 656, "Offset mismatch for UYokeHopUnkindUIComponent_StormShape::BlurMaterial");
static_assert(offsetof(UYokeHopUnkindUIComponent_StormShape, BlurMID) == 664, "Offset mismatch for UYokeHopUnkindUIComponent_StormShape::BlurMID");
