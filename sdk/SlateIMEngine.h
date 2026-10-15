/**
 * decamp dumper generated SDK
 * Package: /Script/SlateIMEngine
 */
#pragma once
#include "Basic.h"

// /Script/SlateIMEngine.SlateIMEngineBorderRenderParams
// Kind: ScriptStruct; super: none
struct FSlateIMEngineBorderRenderParams
{
public:
    std::uint8_t UVPosition[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t UVSize[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t RenderColor[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t BlendMode; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0031
    float Rotation; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PivotPoint[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t BorderScale[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackgroundScale[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t CornerSize[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSlateIMEngineBorderRenderParams, UVPosition) == 0, "Offset mismatch for FSlateIMEngineBorderRenderParams::UVPosition");
static_assert(offsetof(FSlateIMEngineBorderRenderParams, UVSize) == 16, "Offset mismatch for FSlateIMEngineBorderRenderParams::UVSize");
static_assert(offsetof(FSlateIMEngineBorderRenderParams, RenderColor) == 32, "Offset mismatch for FSlateIMEngineBorderRenderParams::RenderColor");
static_assert(offsetof(FSlateIMEngineBorderRenderParams, BlendMode) == 48, "Offset mismatch for FSlateIMEngineBorderRenderParams::BlendMode");
static_assert(offsetof(FSlateIMEngineBorderRenderParams, Rotation) == 52, "Offset mismatch for FSlateIMEngineBorderRenderParams::Rotation");
static_assert(offsetof(FSlateIMEngineBorderRenderParams, PivotPoint) == 56, "Offset mismatch for FSlateIMEngineBorderRenderParams::PivotPoint");
static_assert(offsetof(FSlateIMEngineBorderRenderParams, BorderScale) == 72, "Offset mismatch for FSlateIMEngineBorderRenderParams::BorderScale");
static_assert(offsetof(FSlateIMEngineBorderRenderParams, BackgroundScale) == 88, "Offset mismatch for FSlateIMEngineBorderRenderParams::BackgroundScale");
static_assert(offsetof(FSlateIMEngineBorderRenderParams, CornerSize) == 104, "Offset mismatch for FSlateIMEngineBorderRenderParams::CornerSize");

// /Script/SlateIMEngine.SlateIMEngineCanvasParams
// Kind: ScriptStruct; super: none
struct FSlateIMEngineCanvasParams
{
public:
    std::uint8_t ColorAndOpacity[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t DesiredSize[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    void* WorldContext; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t UpdateType; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSlateIMEngineCanvasParams, ColorAndOpacity) == 0, "Offset mismatch for FSlateIMEngineCanvasParams::ColorAndOpacity");
static_assert(offsetof(FSlateIMEngineCanvasParams, DesiredSize) == 24, "Offset mismatch for FSlateIMEngineCanvasParams::DesiredSize");
static_assert(offsetof(FSlateIMEngineCanvasParams, WorldContext) == 40, "Offset mismatch for FSlateIMEngineCanvasParams::WorldContext");
static_assert(offsetof(FSlateIMEngineCanvasParams, UpdateType) == 48, "Offset mismatch for FSlateIMEngineCanvasParams::UpdateType");

// /Script/SlateIMEngine.SlateIMEngineTextRenderParams
// Kind: ScriptStruct; super: none
struct FSlateIMEngineTextRenderParams
{
public:
    std::uint8_t Scale[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t RenderColor[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    float Kerning; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ShadowColor[0x14]; // 0x0024 (Size: 0x14, Type: StructProperty)
    std::uint8_t ShadowOffset[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t bCentreX; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCentreY; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutlined; // 0x004A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x004B
    std::uint8_t OutlineColor[0x1]; // 0x004C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSlateIMEngineTextRenderParams, Scale) == 0, "Offset mismatch for FSlateIMEngineTextRenderParams::Scale");
static_assert(offsetof(FSlateIMEngineTextRenderParams, RenderColor) == 16, "Offset mismatch for FSlateIMEngineTextRenderParams::RenderColor");
static_assert(offsetof(FSlateIMEngineTextRenderParams, Kerning) == 32, "Offset mismatch for FSlateIMEngineTextRenderParams::Kerning");
static_assert(offsetof(FSlateIMEngineTextRenderParams, ShadowColor) == 36, "Offset mismatch for FSlateIMEngineTextRenderParams::ShadowColor");
static_assert(offsetof(FSlateIMEngineTextRenderParams, ShadowOffset) == 56, "Offset mismatch for FSlateIMEngineTextRenderParams::ShadowOffset");
static_assert(offsetof(FSlateIMEngineTextRenderParams, bCentreX) == 72, "Offset mismatch for FSlateIMEngineTextRenderParams::bCentreX");
static_assert(offsetof(FSlateIMEngineTextRenderParams, bCentreY) == 73, "Offset mismatch for FSlateIMEngineTextRenderParams::bCentreY");
static_assert(offsetof(FSlateIMEngineTextRenderParams, bOutlined) == 74, "Offset mismatch for FSlateIMEngineTextRenderParams::bOutlined");
static_assert(offsetof(FSlateIMEngineTextRenderParams, OutlineColor) == 76, "Offset mismatch for FSlateIMEngineTextRenderParams::OutlineColor");

// /Script/SlateIMEngine.SlateIMEngineTileRenderParams
// Kind: ScriptStruct; super: none
struct FSlateIMEngineTileRenderParams
{
public:
    std::uint8_t UVPosition[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t UVSize[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t RenderColor[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t BlendMode; // 0x0030 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0031
    float Rotation; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PivotPoint[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSlateIMEngineTileRenderParams, UVPosition) == 0, "Offset mismatch for FSlateIMEngineTileRenderParams::UVPosition");
static_assert(offsetof(FSlateIMEngineTileRenderParams, UVSize) == 16, "Offset mismatch for FSlateIMEngineTileRenderParams::UVSize");
static_assert(offsetof(FSlateIMEngineTileRenderParams, RenderColor) == 32, "Offset mismatch for FSlateIMEngineTileRenderParams::RenderColor");
static_assert(offsetof(FSlateIMEngineTileRenderParams, BlendMode) == 48, "Offset mismatch for FSlateIMEngineTileRenderParams::BlendMode");
static_assert(offsetof(FSlateIMEngineTileRenderParams, Rotation) == 52, "Offset mismatch for FSlateIMEngineTileRenderParams::Rotation");
static_assert(offsetof(FSlateIMEngineTileRenderParams, PivotPoint) == 56, "Offset mismatch for FSlateIMEngineTileRenderParams::PivotPoint");

// /Script/SlateIMEngine.SlateIMEngineCanvasDrawCommandList
// Kind: Class; super: Object
class USlateIMEngineCanvasDrawCommandList
{
public:
    std::uint8_t Opaque[1];
};
