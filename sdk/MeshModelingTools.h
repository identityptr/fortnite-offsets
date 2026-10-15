/**
 * decamp dumper generated SDK
 * Package: /Script/MeshModelingTools
 */
#pragma once
#include "Basic.h"

// /Script/MeshModelingTools.BrushToolRadius
// Kind: ScriptStruct; super: none
struct FBrushToolRadius
{
public:
    std::uint8_t SizeType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float AdaptiveSize; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float WorldRadius; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bToolSupportsPressureSensitivity; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnablePressureSensitivity; // 0x000D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FBrushToolRadius, SizeType) == 0, "Offset mismatch for FBrushToolRadius::SizeType");
static_assert(offsetof(FBrushToolRadius, AdaptiveSize) == 4, "Offset mismatch for FBrushToolRadius::AdaptiveSize");
static_assert(offsetof(FBrushToolRadius, WorldRadius) == 8, "Offset mismatch for FBrushToolRadius::WorldRadius");
static_assert(offsetof(FBrushToolRadius, bToolSupportsPressureSensitivity) == 12, "Offset mismatch for FBrushToolRadius::bToolSupportsPressureSensitivity");
static_assert(offsetof(FBrushToolRadius, bEnablePressureSensitivity) == 13, "Offset mismatch for FBrushToolRadius::bEnablePressureSensitivity");

// /Script/MeshModelingTools.PerlinLayerProperties
// Kind: ScriptStruct; super: none
struct FPerlinLayerProperties
{
public:
    float Frequency; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Intensity; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FPerlinLayerProperties, Frequency) == 0, "Offset mismatch for FPerlinLayerProperties::Frequency");
static_assert(offsetof(FPerlinLayerProperties, Intensity) == 4, "Offset mismatch for FPerlinLayerProperties::Intensity");

// /Script/MeshModelingTools.AddArrowPrimitiveTool
// Kind: Class; super: AddPrimitiveTool
class UAddArrowPrimitiveTool
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* OutputTypeProperties; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* ShapeSettings; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* MaterialProperties; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMesh; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* Gizmo; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* DragAlignmentMechanic; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    FString AssetName; // 0x0100 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UAddArrowPrimitiveTool, OutputTypeProperties) == 208, "Offset mismatch for UAddArrowPrimitiveTool::OutputTypeProperties");
static_assert(offsetof(UAddArrowPrimitiveTool, ShapeSettings) == 216, "Offset mismatch for UAddArrowPrimitiveTool::ShapeSettings");
static_assert(offsetof(UAddArrowPrimitiveTool, MaterialProperties) == 224, "Offset mismatch for UAddArrowPrimitiveTool::MaterialProperties");
static_assert(offsetof(UAddArrowPrimitiveTool, PreviewMesh) == 232, "Offset mismatch for UAddArrowPrimitiveTool::PreviewMesh");
static_assert(offsetof(UAddArrowPrimitiveTool, Gizmo) == 240, "Offset mismatch for UAddArrowPrimitiveTool::Gizmo");
static_assert(offsetof(UAddArrowPrimitiveTool, DragAlignmentMechanic) == 248, "Offset mismatch for UAddArrowPrimitiveTool::DragAlignmentMechanic");
static_assert(offsetof(UAddArrowPrimitiveTool, AssetName) == 256, "Offset mismatch for UAddArrowPrimitiveTool::AssetName");

// /Script/MeshModelingTools.AddBoxPrimitiveTool
// Kind: Class; super: AddPrimitiveTool
class UAddBoxPrimitiveTool
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* OutputTypeProperties; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* ShapeSettings; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* MaterialProperties; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMesh; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* Gizmo; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* DragAlignmentMechanic; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    FString AssetName; // 0x0100 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UAddBoxPrimitiveTool, OutputTypeProperties) == 208, "Offset mismatch for UAddBoxPrimitiveTool::OutputTypeProperties");
static_assert(offsetof(UAddBoxPrimitiveTool, ShapeSettings) == 216, "Offset mismatch for UAddBoxPrimitiveTool::ShapeSettings");
static_assert(offsetof(UAddBoxPrimitiveTool, MaterialProperties) == 224, "Offset mismatch for UAddBoxPrimitiveTool::MaterialProperties");
static_assert(offsetof(UAddBoxPrimitiveTool, PreviewMesh) == 232, "Offset mismatch for UAddBoxPrimitiveTool::PreviewMesh");
static_assert(offsetof(UAddBoxPrimitiveTool, Gizmo) == 240, "Offset mismatch for UAddBoxPrimitiveTool::Gizmo");
static_assert(offsetof(UAddBoxPrimitiveTool, DragAlignmentMechanic) == 248, "Offset mismatch for UAddBoxPrimitiveTool::DragAlignmentMechanic");
static_assert(offsetof(UAddBoxPrimitiveTool, AssetName) == 256, "Offset mismatch for UAddBoxPrimitiveTool::AssetName");

// /Script/MeshModelingTools.AddCapsulePrimitiveTool
// Kind: Class; super: AddPrimitiveTool
class UAddCapsulePrimitiveTool
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* OutputTypeProperties; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* ShapeSettings; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* MaterialProperties; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMesh; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* Gizmo; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* DragAlignmentMechanic; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    FString AssetName; // 0x0100 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UAddCapsulePrimitiveTool, OutputTypeProperties) == 208, "Offset mismatch for UAddCapsulePrimitiveTool::OutputTypeProperties");
static_assert(offsetof(UAddCapsulePrimitiveTool, ShapeSettings) == 216, "Offset mismatch for UAddCapsulePrimitiveTool::ShapeSettings");
static_assert(offsetof(UAddCapsulePrimitiveTool, MaterialProperties) == 224, "Offset mismatch for UAddCapsulePrimitiveTool::MaterialProperties");
static_assert(offsetof(UAddCapsulePrimitiveTool, PreviewMesh) == 232, "Offset mismatch for UAddCapsulePrimitiveTool::PreviewMesh");
static_assert(offsetof(UAddCapsulePrimitiveTool, Gizmo) == 240, "Offset mismatch for UAddCapsulePrimitiveTool::Gizmo");
static_assert(offsetof(UAddCapsulePrimitiveTool, DragAlignmentMechanic) == 248, "Offset mismatch for UAddCapsulePrimitiveTool::DragAlignmentMechanic");
static_assert(offsetof(UAddCapsulePrimitiveTool, AssetName) == 256, "Offset mismatch for UAddCapsulePrimitiveTool::AssetName");

// /Script/MeshModelingTools.AddConePrimitiveTool
// Kind: Class; super: AddPrimitiveTool
class UAddConePrimitiveTool
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* OutputTypeProperties; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* ShapeSettings; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* MaterialProperties; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMesh; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* Gizmo; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* DragAlignmentMechanic; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    FString AssetName; // 0x0100 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UAddConePrimitiveTool, OutputTypeProperties) == 208, "Offset mismatch for UAddConePrimitiveTool::OutputTypeProperties");
static_assert(offsetof(UAddConePrimitiveTool, ShapeSettings) == 216, "Offset mismatch for UAddConePrimitiveTool::ShapeSettings");
static_assert(offsetof(UAddConePrimitiveTool, MaterialProperties) == 224, "Offset mismatch for UAddConePrimitiveTool::MaterialProperties");
static_assert(offsetof(UAddConePrimitiveTool, PreviewMesh) == 232, "Offset mismatch for UAddConePrimitiveTool::PreviewMesh");
static_assert(offsetof(UAddConePrimitiveTool, Gizmo) == 240, "Offset mismatch for UAddConePrimitiveTool::Gizmo");
static_assert(offsetof(UAddConePrimitiveTool, DragAlignmentMechanic) == 248, "Offset mismatch for UAddConePrimitiveTool::DragAlignmentMechanic");
static_assert(offsetof(UAddConePrimitiveTool, AssetName) == 256, "Offset mismatch for UAddConePrimitiveTool::AssetName");

// /Script/MeshModelingTools.AddCylinderPrimitiveTool
// Kind: Class; super: AddPrimitiveTool
class UAddCylinderPrimitiveTool
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* OutputTypeProperties; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* ShapeSettings; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* MaterialProperties; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMesh; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* Gizmo; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* DragAlignmentMechanic; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    FString AssetName; // 0x0100 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UAddCylinderPrimitiveTool, OutputTypeProperties) == 208, "Offset mismatch for UAddCylinderPrimitiveTool::OutputTypeProperties");
static_assert(offsetof(UAddCylinderPrimitiveTool, ShapeSettings) == 216, "Offset mismatch for UAddCylinderPrimitiveTool::ShapeSettings");
static_assert(offsetof(UAddCylinderPrimitiveTool, MaterialProperties) == 224, "Offset mismatch for UAddCylinderPrimitiveTool::MaterialProperties");
static_assert(offsetof(UAddCylinderPrimitiveTool, PreviewMesh) == 232, "Offset mismatch for UAddCylinderPrimitiveTool::PreviewMesh");
static_assert(offsetof(UAddCylinderPrimitiveTool, Gizmo) == 240, "Offset mismatch for UAddCylinderPrimitiveTool::Gizmo");
static_assert(offsetof(UAddCylinderPrimitiveTool, DragAlignmentMechanic) == 248, "Offset mismatch for UAddCylinderPrimitiveTool::DragAlignmentMechanic");
static_assert(offsetof(UAddCylinderPrimitiveTool, AssetName) == 256, "Offset mismatch for UAddCylinderPrimitiveTool::AssetName");

// /Script/MeshModelingTools.AddDiscPrimitiveTool
// Kind: Class; super: AddPrimitiveTool
class UAddDiscPrimitiveTool
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* OutputTypeProperties; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* ShapeSettings; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* MaterialProperties; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMesh; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* Gizmo; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* DragAlignmentMechanic; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    FString AssetName; // 0x0100 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UAddDiscPrimitiveTool, OutputTypeProperties) == 208, "Offset mismatch for UAddDiscPrimitiveTool::OutputTypeProperties");
static_assert(offsetof(UAddDiscPrimitiveTool, ShapeSettings) == 216, "Offset mismatch for UAddDiscPrimitiveTool::ShapeSettings");
static_assert(offsetof(UAddDiscPrimitiveTool, MaterialProperties) == 224, "Offset mismatch for UAddDiscPrimitiveTool::MaterialProperties");
static_assert(offsetof(UAddDiscPrimitiveTool, PreviewMesh) == 232, "Offset mismatch for UAddDiscPrimitiveTool::PreviewMesh");
static_assert(offsetof(UAddDiscPrimitiveTool, Gizmo) == 240, "Offset mismatch for UAddDiscPrimitiveTool::Gizmo");
static_assert(offsetof(UAddDiscPrimitiveTool, DragAlignmentMechanic) == 248, "Offset mismatch for UAddDiscPrimitiveTool::DragAlignmentMechanic");
static_assert(offsetof(UAddDiscPrimitiveTool, AssetName) == 256, "Offset mismatch for UAddDiscPrimitiveTool::AssetName");

// /Script/MeshModelingTools.AddPrimitiveTool
// Kind: Class; super: SingleClickTool
class UAddPrimitiveTool
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* OutputTypeProperties; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* ShapeSettings; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* MaterialProperties; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMesh; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* Gizmo; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* DragAlignmentMechanic; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    FString AssetName; // 0x0100 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UAddPrimitiveTool, OutputTypeProperties) == 208, "Offset mismatch for UAddPrimitiveTool::OutputTypeProperties");
static_assert(offsetof(UAddPrimitiveTool, ShapeSettings) == 216, "Offset mismatch for UAddPrimitiveTool::ShapeSettings");
static_assert(offsetof(UAddPrimitiveTool, MaterialProperties) == 224, "Offset mismatch for UAddPrimitiveTool::MaterialProperties");
static_assert(offsetof(UAddPrimitiveTool, PreviewMesh) == 232, "Offset mismatch for UAddPrimitiveTool::PreviewMesh");
static_assert(offsetof(UAddPrimitiveTool, Gizmo) == 240, "Offset mismatch for UAddPrimitiveTool::Gizmo");
static_assert(offsetof(UAddPrimitiveTool, DragAlignmentMechanic) == 248, "Offset mismatch for UAddPrimitiveTool::DragAlignmentMechanic");
static_assert(offsetof(UAddPrimitiveTool, AssetName) == 256, "Offset mismatch for UAddPrimitiveTool::AssetName");

// /Script/MeshModelingTools.AddPrimitiveToolBuilder
// Kind: Class; super: InteractiveToolBuilder
class UAddPrimitiveToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.AddRectanglePrimitiveTool
// Kind: Class; super: AddPrimitiveTool
class UAddRectanglePrimitiveTool
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* OutputTypeProperties; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* ShapeSettings; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* MaterialProperties; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMesh; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* Gizmo; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* DragAlignmentMechanic; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    FString AssetName; // 0x0100 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UAddRectanglePrimitiveTool, OutputTypeProperties) == 208, "Offset mismatch for UAddRectanglePrimitiveTool::OutputTypeProperties");
static_assert(offsetof(UAddRectanglePrimitiveTool, ShapeSettings) == 216, "Offset mismatch for UAddRectanglePrimitiveTool::ShapeSettings");
static_assert(offsetof(UAddRectanglePrimitiveTool, MaterialProperties) == 224, "Offset mismatch for UAddRectanglePrimitiveTool::MaterialProperties");
static_assert(offsetof(UAddRectanglePrimitiveTool, PreviewMesh) == 232, "Offset mismatch for UAddRectanglePrimitiveTool::PreviewMesh");
static_assert(offsetof(UAddRectanglePrimitiveTool, Gizmo) == 240, "Offset mismatch for UAddRectanglePrimitiveTool::Gizmo");
static_assert(offsetof(UAddRectanglePrimitiveTool, DragAlignmentMechanic) == 248, "Offset mismatch for UAddRectanglePrimitiveTool::DragAlignmentMechanic");
static_assert(offsetof(UAddRectanglePrimitiveTool, AssetName) == 256, "Offset mismatch for UAddRectanglePrimitiveTool::AssetName");

// /Script/MeshModelingTools.AddSpherePrimitiveTool
// Kind: Class; super: AddPrimitiveTool
class UAddSpherePrimitiveTool
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* OutputTypeProperties; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* ShapeSettings; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* MaterialProperties; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMesh; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* Gizmo; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* DragAlignmentMechanic; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    FString AssetName; // 0x0100 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UAddSpherePrimitiveTool, OutputTypeProperties) == 208, "Offset mismatch for UAddSpherePrimitiveTool::OutputTypeProperties");
static_assert(offsetof(UAddSpherePrimitiveTool, ShapeSettings) == 216, "Offset mismatch for UAddSpherePrimitiveTool::ShapeSettings");
static_assert(offsetof(UAddSpherePrimitiveTool, MaterialProperties) == 224, "Offset mismatch for UAddSpherePrimitiveTool::MaterialProperties");
static_assert(offsetof(UAddSpherePrimitiveTool, PreviewMesh) == 232, "Offset mismatch for UAddSpherePrimitiveTool::PreviewMesh");
static_assert(offsetof(UAddSpherePrimitiveTool, Gizmo) == 240, "Offset mismatch for UAddSpherePrimitiveTool::Gizmo");
static_assert(offsetof(UAddSpherePrimitiveTool, DragAlignmentMechanic) == 248, "Offset mismatch for UAddSpherePrimitiveTool::DragAlignmentMechanic");
static_assert(offsetof(UAddSpherePrimitiveTool, AssetName) == 256, "Offset mismatch for UAddSpherePrimitiveTool::AssetName");

// /Script/MeshModelingTools.AddStairsPrimitiveTool
// Kind: Class; super: AddPrimitiveTool
class UAddStairsPrimitiveTool
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* OutputTypeProperties; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* ShapeSettings; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* MaterialProperties; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMesh; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* Gizmo; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* DragAlignmentMechanic; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    FString AssetName; // 0x0100 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UAddStairsPrimitiveTool, OutputTypeProperties) == 208, "Offset mismatch for UAddStairsPrimitiveTool::OutputTypeProperties");
static_assert(offsetof(UAddStairsPrimitiveTool, ShapeSettings) == 216, "Offset mismatch for UAddStairsPrimitiveTool::ShapeSettings");
static_assert(offsetof(UAddStairsPrimitiveTool, MaterialProperties) == 224, "Offset mismatch for UAddStairsPrimitiveTool::MaterialProperties");
static_assert(offsetof(UAddStairsPrimitiveTool, PreviewMesh) == 232, "Offset mismatch for UAddStairsPrimitiveTool::PreviewMesh");
static_assert(offsetof(UAddStairsPrimitiveTool, Gizmo) == 240, "Offset mismatch for UAddStairsPrimitiveTool::Gizmo");
static_assert(offsetof(UAddStairsPrimitiveTool, DragAlignmentMechanic) == 248, "Offset mismatch for UAddStairsPrimitiveTool::DragAlignmentMechanic");
static_assert(offsetof(UAddStairsPrimitiveTool, AssetName) == 256, "Offset mismatch for UAddStairsPrimitiveTool::AssetName");

// /Script/MeshModelingTools.AddTorusPrimitiveTool
// Kind: Class; super: AddPrimitiveTool
class UAddTorusPrimitiveTool
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* OutputTypeProperties; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* ShapeSettings; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* MaterialProperties; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMesh; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* Gizmo; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* DragAlignmentMechanic; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    FString AssetName; // 0x0100 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UAddTorusPrimitiveTool, OutputTypeProperties) == 208, "Offset mismatch for UAddTorusPrimitiveTool::OutputTypeProperties");
static_assert(offsetof(UAddTorusPrimitiveTool, ShapeSettings) == 216, "Offset mismatch for UAddTorusPrimitiveTool::ShapeSettings");
static_assert(offsetof(UAddTorusPrimitiveTool, MaterialProperties) == 224, "Offset mismatch for UAddTorusPrimitiveTool::MaterialProperties");
static_assert(offsetof(UAddTorusPrimitiveTool, PreviewMesh) == 232, "Offset mismatch for UAddTorusPrimitiveTool::PreviewMesh");
static_assert(offsetof(UAddTorusPrimitiveTool, Gizmo) == 240, "Offset mismatch for UAddTorusPrimitiveTool::Gizmo");
static_assert(offsetof(UAddTorusPrimitiveTool, DragAlignmentMechanic) == 248, "Offset mismatch for UAddTorusPrimitiveTool::DragAlignmentMechanic");
static_assert(offsetof(UAddTorusPrimitiveTool, AssetName) == 256, "Offset mismatch for UAddTorusPrimitiveTool::AssetName");

// /Script/MeshModelingTools.BaseKelvinletBrushOpProps
// Kind: Class; super: MeshSculptBrushOpProps
class UBaseKelvinletBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float Stiffness; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Incompressiblity; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::int32_t BrushSteps; // 0x0078 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UBaseKelvinletBrushOpProps, Stiffness) == 112, "Offset mismatch for UBaseKelvinletBrushOpProps::Stiffness");
static_assert(offsetof(UBaseKelvinletBrushOpProps, Incompressiblity) == 116, "Offset mismatch for UBaseKelvinletBrushOpProps::Incompressiblity");
static_assert(offsetof(UBaseKelvinletBrushOpProps, BrushSteps) == 120, "Offset mismatch for UBaseKelvinletBrushOpProps::BrushSteps");

// /Script/MeshModelingTools.BasePlaneBrushOpProps
// Kind: Class; super: MeshSculptBrushOpProps
class UBasePlaneBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bIsStrengthPressureEnabled; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBasePlaneBrushOpProps, bIsStrengthPressureEnabled) == 104, "Offset mismatch for UBasePlaneBrushOpProps::bIsStrengthPressureEnabled");

// /Script/MeshModelingTools.BaseSmoothBrushOpProps
// Kind: Class; super: MeshSculptBrushOpProps
class UBaseSmoothBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bIsStrengthPressureEnabled; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBaseSmoothBrushOpProps, bIsStrengthPressureEnabled) == 104, "Offset mismatch for UBaseSmoothBrushOpProps::bIsStrengthPressureEnabled");

// /Script/MeshModelingTools.BrushRemeshProperties
// Kind: Class; super: RemeshProperties
class UBrushRemeshProperties
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bEnableRemeshing; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    std::int32_t TriangleSize; // 0x007C (Size: 0x4, Type: IntProperty)
    std::int32_t PreserveDetail; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::int32_t Iterations; // 0x0084 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UBrushRemeshProperties, bEnableRemeshing) == 120, "Offset mismatch for UBrushRemeshProperties::bEnableRemeshing");
static_assert(offsetof(UBrushRemeshProperties, TriangleSize) == 124, "Offset mismatch for UBrushRemeshProperties::TriangleSize");
static_assert(offsetof(UBrushRemeshProperties, PreserveDetail) == 128, "Offset mismatch for UBrushRemeshProperties::PreserveDetail");
static_assert(offsetof(UBrushRemeshProperties, Iterations) == 132, "Offset mismatch for UBrushRemeshProperties::Iterations");

// /Script/MeshModelingTools.CSGMeshesTool
// Kind: Class; super: BaseCreateFromSelectedTool
class UCSGMeshesTool
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    void* CSGProperties; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* TrimProperties; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0130
    TArray<void*> OriginalMeshPreviews; // 0x0140 (Size: 0x10, Type: ArrayProperty)
    void* PreviewsGhostMaterial; // 0x0150 (Size: 0x8, Type: ObjectProperty)
    void* DrawnLineSet; // 0x0158 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCSGMeshesTool, CSGProperties) == 288, "Offset mismatch for UCSGMeshesTool::CSGProperties");
static_assert(offsetof(UCSGMeshesTool, TrimProperties) == 296, "Offset mismatch for UCSGMeshesTool::TrimProperties");
static_assert(offsetof(UCSGMeshesTool, OriginalMeshPreviews) == 320, "Offset mismatch for UCSGMeshesTool::OriginalMeshPreviews");
static_assert(offsetof(UCSGMeshesTool, PreviewsGhostMaterial) == 336, "Offset mismatch for UCSGMeshesTool::PreviewsGhostMaterial");
static_assert(offsetof(UCSGMeshesTool, DrawnLineSet) == 344, "Offset mismatch for UCSGMeshesTool::DrawnLineSet");

// /Script/MeshModelingTools.CSGMeshesToolBuilder
// Kind: Class; super: BaseCreateFromSelectedToolBuilder
class UCSGMeshesToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.CSGMeshesToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UCSGMeshesToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Operation; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bTryFixHoles; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryCollapseEdges; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x006B
    float WindingThreshold; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShowNewBoundaries; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowSubtractedMesh; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0072
    float SubtractedMeshOpacity; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SubtractedMeshColor[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t bUseFirstMeshMaterials; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCSGMeshesToolProperties, Operation) == 104, "Offset mismatch for UCSGMeshesToolProperties::Operation");
static_assert(offsetof(UCSGMeshesToolProperties, bTryFixHoles) == 105, "Offset mismatch for UCSGMeshesToolProperties::bTryFixHoles");
static_assert(offsetof(UCSGMeshesToolProperties, bTryCollapseEdges) == 106, "Offset mismatch for UCSGMeshesToolProperties::bTryCollapseEdges");
static_assert(offsetof(UCSGMeshesToolProperties, WindingThreshold) == 108, "Offset mismatch for UCSGMeshesToolProperties::WindingThreshold");
static_assert(offsetof(UCSGMeshesToolProperties, bShowNewBoundaries) == 112, "Offset mismatch for UCSGMeshesToolProperties::bShowNewBoundaries");
static_assert(offsetof(UCSGMeshesToolProperties, bShowSubtractedMesh) == 113, "Offset mismatch for UCSGMeshesToolProperties::bShowSubtractedMesh");
static_assert(offsetof(UCSGMeshesToolProperties, SubtractedMeshOpacity) == 116, "Offset mismatch for UCSGMeshesToolProperties::SubtractedMeshOpacity");
static_assert(offsetof(UCSGMeshesToolProperties, SubtractedMeshColor) == 120, "Offset mismatch for UCSGMeshesToolProperties::SubtractedMeshColor");
static_assert(offsetof(UCSGMeshesToolProperties, bUseFirstMeshMaterials) == 136, "Offset mismatch for UCSGMeshesToolProperties::bUseFirstMeshMaterials");

// /Script/MeshModelingTools.CombineMeshesTool
// Kind: Class; super: MultiSelectionMeshEditingTool
class UCombineMeshesTool
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* BasicProperties; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* OutputTypeProperties; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* HandleSourceProperties; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCombineMeshesTool, BasicProperties) == 216, "Offset mismatch for UCombineMeshesTool::BasicProperties");
static_assert(offsetof(UCombineMeshesTool, OutputTypeProperties) == 224, "Offset mismatch for UCombineMeshesTool::OutputTypeProperties");
static_assert(offsetof(UCombineMeshesTool, HandleSourceProperties) == 232, "Offset mismatch for UCombineMeshesTool::HandleSourceProperties");

// /Script/MeshModelingTools.CombineMeshesToolBuilder
// Kind: Class; super: MultiSelectionMeshEditingToolBuilder
class UCombineMeshesToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.CombineMeshesToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UCombineMeshesToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bIsDuplicateMode; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::uint8_t OutputWriteTo; // 0x006C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x006D
    FString OutputNewName; // 0x0070 (Size: 0x10, Type: StrProperty)
    FString OutputExistingName; // 0x0080 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UCombineMeshesToolProperties, bIsDuplicateMode) == 104, "Offset mismatch for UCombineMeshesToolProperties::bIsDuplicateMode");
static_assert(offsetof(UCombineMeshesToolProperties, OutputWriteTo) == 108, "Offset mismatch for UCombineMeshesToolProperties::OutputWriteTo");
static_assert(offsetof(UCombineMeshesToolProperties, OutputNewName) == 112, "Offset mismatch for UCombineMeshesToolProperties::OutputNewName");
static_assert(offsetof(UCombineMeshesToolProperties, OutputExistingName) == 128, "Offset mismatch for UCombineMeshesToolProperties::OutputExistingName");

// /Script/MeshModelingTools.ConvertToPolygonsOperatorFactory
// Kind: Class; super: Object
class UConvertToPolygonsOperatorFactory
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* ConvertToPolygonsTool; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UConvertToPolygonsOperatorFactory, ConvertToPolygonsTool) == 48, "Offset mismatch for UConvertToPolygonsOperatorFactory::ConvertToPolygonsTool");

// /Script/MeshModelingTools.ConvertToPolygonsTool
// Kind: Class; super: SingleTargetWithSelectionTool
class UConvertToPolygonsTool
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    void* Settings; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    void* CopyFromLayerProperties; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    void* PreviewCompute; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* PreviewGeometry; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* UnmodifiedAreaPreviewMesh; // 0x0128 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UConvertToPolygonsTool, Settings) == 264, "Offset mismatch for UConvertToPolygonsTool::Settings");
static_assert(offsetof(UConvertToPolygonsTool, CopyFromLayerProperties) == 272, "Offset mismatch for UConvertToPolygonsTool::CopyFromLayerProperties");
static_assert(offsetof(UConvertToPolygonsTool, PreviewCompute) == 280, "Offset mismatch for UConvertToPolygonsTool::PreviewCompute");
static_assert(offsetof(UConvertToPolygonsTool, PreviewGeometry) == 288, "Offset mismatch for UConvertToPolygonsTool::PreviewGeometry");
static_assert(offsetof(UConvertToPolygonsTool, UnmodifiedAreaPreviewMesh) == 296, "Offset mismatch for UConvertToPolygonsTool::UnmodifiedAreaPreviewMesh");

// /Script/MeshModelingTools.ConvertToPolygonsToolBuilder
// Kind: Class; super: SingleTargetWithSelectionToolBuilder
class UConvertToPolygonsToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.ConvertToPolygonsToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UConvertToPolygonsToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t ConversionMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    float AngleTolerance; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseAverageGroupNormal; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0071
    std::int32_t NumPoints; // 0x0074 (Size: 0x4, Type: IntProperty)
    std::uint8_t bSplitExisting; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNormalWeighted; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x007A
    float NormalWeighting; // 0x007C (Size: 0x4, Type: FloatProperty)
    float QuadAdjacencyWeight; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float QuadMetricClamp; // 0x0084 (Size: 0x4, Type: FloatProperty)
    std::int32_t QuadSearchRounds; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::uint8_t bRespectUVSeams; // 0x008C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRespectHardNormals; // 0x008D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x008E
    std::int32_t MinGroupSize; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShowGroupColors; // 0x0094 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCalculateNormals; // 0x0095 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x0096
    FName GroupLayer; // 0x0098 (Size: 0x8, Type: NameProperty)
    TArray<void*> OptionsList; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShowNewLayerName; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x7]; // 0x00B1
    FString NewLayerName; // 0x00B8 (Size: 0x10, Type: StrProperty)
    std::uint8_t LayerType; // 0x00C8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UConvertToPolygonsToolProperties, ConversionMode) == 104, "Offset mismatch for UConvertToPolygonsToolProperties::ConversionMode");
static_assert(offsetof(UConvertToPolygonsToolProperties, AngleTolerance) == 108, "Offset mismatch for UConvertToPolygonsToolProperties::AngleTolerance");
static_assert(offsetof(UConvertToPolygonsToolProperties, bUseAverageGroupNormal) == 112, "Offset mismatch for UConvertToPolygonsToolProperties::bUseAverageGroupNormal");
static_assert(offsetof(UConvertToPolygonsToolProperties, NumPoints) == 116, "Offset mismatch for UConvertToPolygonsToolProperties::NumPoints");
static_assert(offsetof(UConvertToPolygonsToolProperties, bSplitExisting) == 120, "Offset mismatch for UConvertToPolygonsToolProperties::bSplitExisting");
static_assert(offsetof(UConvertToPolygonsToolProperties, bNormalWeighted) == 121, "Offset mismatch for UConvertToPolygonsToolProperties::bNormalWeighted");
static_assert(offsetof(UConvertToPolygonsToolProperties, NormalWeighting) == 124, "Offset mismatch for UConvertToPolygonsToolProperties::NormalWeighting");
static_assert(offsetof(UConvertToPolygonsToolProperties, QuadAdjacencyWeight) == 128, "Offset mismatch for UConvertToPolygonsToolProperties::QuadAdjacencyWeight");
static_assert(offsetof(UConvertToPolygonsToolProperties, QuadMetricClamp) == 132, "Offset mismatch for UConvertToPolygonsToolProperties::QuadMetricClamp");
static_assert(offsetof(UConvertToPolygonsToolProperties, QuadSearchRounds) == 136, "Offset mismatch for UConvertToPolygonsToolProperties::QuadSearchRounds");
static_assert(offsetof(UConvertToPolygonsToolProperties, bRespectUVSeams) == 140, "Offset mismatch for UConvertToPolygonsToolProperties::bRespectUVSeams");
static_assert(offsetof(UConvertToPolygonsToolProperties, bRespectHardNormals) == 141, "Offset mismatch for UConvertToPolygonsToolProperties::bRespectHardNormals");
static_assert(offsetof(UConvertToPolygonsToolProperties, MinGroupSize) == 144, "Offset mismatch for UConvertToPolygonsToolProperties::MinGroupSize");
static_assert(offsetof(UConvertToPolygonsToolProperties, bShowGroupColors) == 148, "Offset mismatch for UConvertToPolygonsToolProperties::bShowGroupColors");
static_assert(offsetof(UConvertToPolygonsToolProperties, bCalculateNormals) == 149, "Offset mismatch for UConvertToPolygonsToolProperties::bCalculateNormals");
static_assert(offsetof(UConvertToPolygonsToolProperties, GroupLayer) == 152, "Offset mismatch for UConvertToPolygonsToolProperties::GroupLayer");
static_assert(offsetof(UConvertToPolygonsToolProperties, OptionsList) == 160, "Offset mismatch for UConvertToPolygonsToolProperties::OptionsList");
static_assert(offsetof(UConvertToPolygonsToolProperties, bShowNewLayerName) == 176, "Offset mismatch for UConvertToPolygonsToolProperties::bShowNewLayerName");
static_assert(offsetof(UConvertToPolygonsToolProperties, NewLayerName) == 184, "Offset mismatch for UConvertToPolygonsToolProperties::NewLayerName");
static_assert(offsetof(UConvertToPolygonsToolProperties, LayerType) == 200, "Offset mismatch for UConvertToPolygonsToolProperties::LayerType");

// /Script/MeshModelingTools.CutMeshWithMeshTool
// Kind: Class; super: BaseCreateFromSelectedTool
class UCutMeshWithMeshTool
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    void* CutProperties; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* IntersectPreviewMesh; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0130
    void* DrawnLineSet; // 0x0150 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCutMeshWithMeshTool, CutProperties) == 288, "Offset mismatch for UCutMeshWithMeshTool::CutProperties");
static_assert(offsetof(UCutMeshWithMeshTool, IntersectPreviewMesh) == 296, "Offset mismatch for UCutMeshWithMeshTool::IntersectPreviewMesh");
static_assert(offsetof(UCutMeshWithMeshTool, DrawnLineSet) == 336, "Offset mismatch for UCutMeshWithMeshTool::DrawnLineSet");

// /Script/MeshModelingTools.CutMeshWithMeshToolBuilder
// Kind: Class; super: BaseCreateFromSelectedToolBuilder
class UCutMeshWithMeshToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.CutMeshWithMeshToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UCutMeshWithMeshToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bTryFixHoles; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTryCollapseEdges; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x006A
    float WindingThreshold; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShowNewBoundaries; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseFirstMeshMaterials; // 0x0071 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCutMeshWithMeshToolProperties, bTryFixHoles) == 104, "Offset mismatch for UCutMeshWithMeshToolProperties::bTryFixHoles");
static_assert(offsetof(UCutMeshWithMeshToolProperties, bTryCollapseEdges) == 105, "Offset mismatch for UCutMeshWithMeshToolProperties::bTryCollapseEdges");
static_assert(offsetof(UCutMeshWithMeshToolProperties, WindingThreshold) == 108, "Offset mismatch for UCutMeshWithMeshToolProperties::WindingThreshold");
static_assert(offsetof(UCutMeshWithMeshToolProperties, bShowNewBoundaries) == 112, "Offset mismatch for UCutMeshWithMeshToolProperties::bShowNewBoundaries");
static_assert(offsetof(UCutMeshWithMeshToolProperties, bUseFirstMeshMaterials) == 113, "Offset mismatch for UCutMeshWithMeshToolProperties::bUseFirstMeshMaterials");

// /Script/MeshModelingTools.DeformMeshPolygonsTool
// Kind: Class; super: MeshSurfacePointTool
class UDeformMeshPolygonsTool
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    void* PreviewMeshActor; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* DynamicMeshComponent; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    void* TransformProps; // 0x0138 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDeformMeshPolygonsTool, PreviewMeshActor) == 296, "Offset mismatch for UDeformMeshPolygonsTool::PreviewMeshActor");
static_assert(offsetof(UDeformMeshPolygonsTool, DynamicMeshComponent) == 304, "Offset mismatch for UDeformMeshPolygonsTool::DynamicMeshComponent");
static_assert(offsetof(UDeformMeshPolygonsTool, TransformProps) == 312, "Offset mismatch for UDeformMeshPolygonsTool::TransformProps");

// /Script/MeshModelingTools.DeformMeshPolygonsToolBuilder
// Kind: Class; super: MeshSurfacePointMeshEditingToolBuilder
class UDeformMeshPolygonsToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.DeformMeshPolygonsTransformProperties
// Kind: Class; super: InteractiveToolPropertySet
class UDeformMeshPolygonsTransformProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t DeformationStrategy; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TransformMode; // 0x0069 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSelectFaces; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSelectEdges; // 0x006B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSelectVertices; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowWireframe; // 0x006D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x006E
    std::uint8_t SelectedWeightScheme; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0071
    double HandleWeight; // 0x0078 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bPostFixHandles; // 0x0080 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDeformMeshPolygonsTransformProperties, DeformationStrategy) == 104, "Offset mismatch for UDeformMeshPolygonsTransformProperties::DeformationStrategy");
static_assert(offsetof(UDeformMeshPolygonsTransformProperties, TransformMode) == 105, "Offset mismatch for UDeformMeshPolygonsTransformProperties::TransformMode");
static_assert(offsetof(UDeformMeshPolygonsTransformProperties, bSelectFaces) == 106, "Offset mismatch for UDeformMeshPolygonsTransformProperties::bSelectFaces");
static_assert(offsetof(UDeformMeshPolygonsTransformProperties, bSelectEdges) == 107, "Offset mismatch for UDeformMeshPolygonsTransformProperties::bSelectEdges");
static_assert(offsetof(UDeformMeshPolygonsTransformProperties, bSelectVertices) == 108, "Offset mismatch for UDeformMeshPolygonsTransformProperties::bSelectVertices");
static_assert(offsetof(UDeformMeshPolygonsTransformProperties, bShowWireframe) == 109, "Offset mismatch for UDeformMeshPolygonsTransformProperties::bShowWireframe");
static_assert(offsetof(UDeformMeshPolygonsTransformProperties, SelectedWeightScheme) == 112, "Offset mismatch for UDeformMeshPolygonsTransformProperties::SelectedWeightScheme");
static_assert(offsetof(UDeformMeshPolygonsTransformProperties, HandleWeight) == 120, "Offset mismatch for UDeformMeshPolygonsTransformProperties::HandleWeight");
static_assert(offsetof(UDeformMeshPolygonsTransformProperties, bPostFixHandles) == 128, "Offset mismatch for UDeformMeshPolygonsTransformProperties::bPostFixHandles");

// /Script/MeshModelingTools.DeleteGeometrySelectionCommand
// Kind: Class; super: GeometrySelectionEditCommand
class UDeleteGeometrySelectionCommand
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.DiffusionSmoothProperties
// Kind: Class; super: InteractiveToolPropertySet
class UDiffusionSmoothProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    float SmoothingPerStep; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t Steps; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t bPreserveUVs; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDiffusionSmoothProperties, SmoothingPerStep) == 104, "Offset mismatch for UDiffusionSmoothProperties::SmoothingPerStep");
static_assert(offsetof(UDiffusionSmoothProperties, Steps) == 108, "Offset mismatch for UDiffusionSmoothProperties::Steps");
static_assert(offsetof(UDiffusionSmoothProperties, bPreserveUVs) == 112, "Offset mismatch for UDiffusionSmoothProperties::bPreserveUVs");

// /Script/MeshModelingTools.DisconnectGeometrySelectionCommand
// Kind: Class; super: GeometrySelectionEditCommand
class UDisconnectGeometrySelectionCommand
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.DisplaceMeshCommonProperties
// Kind: Class; super: InteractiveToolPropertySet
class UDisplaceMeshCommonProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t DisplacementType; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    float DisplaceIntensity; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::int32_t RandomSeed; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::uint8_t SubdivisionType; // 0x0074 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0075
    std::int32_t Subdivisions; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t WeightMap[0x4]; // 0x007C (Size: 0x4, Type: NameProperty)
    TArray<void*> WeightMapsList; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bInvertWeightMap; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowWireframe; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisableSizeWarning; // 0x0092 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDisplaceMeshCommonProperties, DisplacementType) == 104, "Offset mismatch for UDisplaceMeshCommonProperties::DisplacementType");
static_assert(offsetof(UDisplaceMeshCommonProperties, DisplaceIntensity) == 108, "Offset mismatch for UDisplaceMeshCommonProperties::DisplaceIntensity");
static_assert(offsetof(UDisplaceMeshCommonProperties, RandomSeed) == 112, "Offset mismatch for UDisplaceMeshCommonProperties::RandomSeed");
static_assert(offsetof(UDisplaceMeshCommonProperties, SubdivisionType) == 116, "Offset mismatch for UDisplaceMeshCommonProperties::SubdivisionType");
static_assert(offsetof(UDisplaceMeshCommonProperties, Subdivisions) == 120, "Offset mismatch for UDisplaceMeshCommonProperties::Subdivisions");
static_assert(offsetof(UDisplaceMeshCommonProperties, WeightMap) == 124, "Offset mismatch for UDisplaceMeshCommonProperties::WeightMap");
static_assert(offsetof(UDisplaceMeshCommonProperties, WeightMapsList) == 128, "Offset mismatch for UDisplaceMeshCommonProperties::WeightMapsList");
static_assert(offsetof(UDisplaceMeshCommonProperties, bInvertWeightMap) == 144, "Offset mismatch for UDisplaceMeshCommonProperties::bInvertWeightMap");
static_assert(offsetof(UDisplaceMeshCommonProperties, bShowWireframe) == 145, "Offset mismatch for UDisplaceMeshCommonProperties::bShowWireframe");
static_assert(offsetof(UDisplaceMeshCommonProperties, bDisableSizeWarning) == 146, "Offset mismatch for UDisplaceMeshCommonProperties::bDisableSizeWarning");

// /Script/MeshModelingTools.DisplaceMeshDirectionalFilterProperties
// Kind: Class; super: InteractiveToolPropertySet
class UDisplaceMeshDirectionalFilterProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bEnableFilter; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    std::uint8_t FilterDirection[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    float FilterWidth; // 0x0088 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDisplaceMeshDirectionalFilterProperties, bEnableFilter) == 104, "Offset mismatch for UDisplaceMeshDirectionalFilterProperties::bEnableFilter");
static_assert(offsetof(UDisplaceMeshDirectionalFilterProperties, FilterDirection) == 112, "Offset mismatch for UDisplaceMeshDirectionalFilterProperties::FilterDirection");
static_assert(offsetof(UDisplaceMeshDirectionalFilterProperties, FilterWidth) == 136, "Offset mismatch for UDisplaceMeshDirectionalFilterProperties::FilterWidth");

// /Script/MeshModelingTools.DisplaceMeshPerlinNoiseProperties
// Kind: Class; super: InteractiveToolPropertySet
class UDisplaceMeshPerlinNoiseProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> PerlinLayerProperties; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDisplaceMeshPerlinNoiseProperties, PerlinLayerProperties) == 104, "Offset mismatch for UDisplaceMeshPerlinNoiseProperties::PerlinLayerProperties");

// /Script/MeshModelingTools.DisplaceMeshSineWaveProperties
// Kind: Class; super: InteractiveToolPropertySet
class UDisplaceMeshSineWaveProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    float SineWaveFrequency; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float SineWavePhaseShift; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t SineWaveDirection[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDisplaceMeshSineWaveProperties, SineWaveFrequency) == 104, "Offset mismatch for UDisplaceMeshSineWaveProperties::SineWaveFrequency");
static_assert(offsetof(UDisplaceMeshSineWaveProperties, SineWavePhaseShift) == 108, "Offset mismatch for UDisplaceMeshSineWaveProperties::SineWavePhaseShift");
static_assert(offsetof(UDisplaceMeshSineWaveProperties, SineWaveDirection) == 112, "Offset mismatch for UDisplaceMeshSineWaveProperties::SineWaveDirection");

// /Script/MeshModelingTools.DisplaceMeshTextureMapProperties
// Kind: Class; super: InteractiveToolPropertySet
class UDisplaceMeshTextureMapProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* DisplacementMap; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Channel; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0071
    float DisplacementMapBaseValue; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t UVScale[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t UVOffset[0x10]; // 0x0088 (Size: 0x10, Type: StructProperty)
    std::uint8_t bApplyAdjustmentCurve; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0099
    void* AdjustmentCurve; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bRecalcNormals; // 0x00A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDisplaceMeshTextureMapProperties, DisplacementMap) == 104, "Offset mismatch for UDisplaceMeshTextureMapProperties::DisplacementMap");
static_assert(offsetof(UDisplaceMeshTextureMapProperties, Channel) == 112, "Offset mismatch for UDisplaceMeshTextureMapProperties::Channel");
static_assert(offsetof(UDisplaceMeshTextureMapProperties, DisplacementMapBaseValue) == 116, "Offset mismatch for UDisplaceMeshTextureMapProperties::DisplacementMapBaseValue");
static_assert(offsetof(UDisplaceMeshTextureMapProperties, UVScale) == 120, "Offset mismatch for UDisplaceMeshTextureMapProperties::UVScale");
static_assert(offsetof(UDisplaceMeshTextureMapProperties, UVOffset) == 136, "Offset mismatch for UDisplaceMeshTextureMapProperties::UVOffset");
static_assert(offsetof(UDisplaceMeshTextureMapProperties, bApplyAdjustmentCurve) == 152, "Offset mismatch for UDisplaceMeshTextureMapProperties::bApplyAdjustmentCurve");
static_assert(offsetof(UDisplaceMeshTextureMapProperties, AdjustmentCurve) == 160, "Offset mismatch for UDisplaceMeshTextureMapProperties::AdjustmentCurve");
static_assert(offsetof(UDisplaceMeshTextureMapProperties, bRecalcNormals) == 168, "Offset mismatch for UDisplaceMeshTextureMapProperties::bRecalcNormals");

// /Script/MeshModelingTools.DisplaceMeshTool
// Kind: Class; super: SingleTargetWithSelectionTool
class UDisplaceMeshTool
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    void* CommonProperties; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    void* DirectionalFilterProperties; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    void* TextureMapProperties; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* NoiseProperties; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* SineWaveProperties; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* SelectiveTessellationProperties; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    void* ActiveContrastCurveTarget; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    void* MeshStatistics; // 0x0140 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x350]; // 0x0148
    void* PreviewMeshActor; // 0x0498 (Size: 0x8, Type: ObjectProperty)
    void* DynamicMeshComponent; // 0x04A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDisplaceMeshTool, CommonProperties) == 264, "Offset mismatch for UDisplaceMeshTool::CommonProperties");
static_assert(offsetof(UDisplaceMeshTool, DirectionalFilterProperties) == 272, "Offset mismatch for UDisplaceMeshTool::DirectionalFilterProperties");
static_assert(offsetof(UDisplaceMeshTool, TextureMapProperties) == 280, "Offset mismatch for UDisplaceMeshTool::TextureMapProperties");
static_assert(offsetof(UDisplaceMeshTool, NoiseProperties) == 288, "Offset mismatch for UDisplaceMeshTool::NoiseProperties");
static_assert(offsetof(UDisplaceMeshTool, SineWaveProperties) == 296, "Offset mismatch for UDisplaceMeshTool::SineWaveProperties");
static_assert(offsetof(UDisplaceMeshTool, SelectiveTessellationProperties) == 304, "Offset mismatch for UDisplaceMeshTool::SelectiveTessellationProperties");
static_assert(offsetof(UDisplaceMeshTool, ActiveContrastCurveTarget) == 312, "Offset mismatch for UDisplaceMeshTool::ActiveContrastCurveTarget");
static_assert(offsetof(UDisplaceMeshTool, MeshStatistics) == 320, "Offset mismatch for UDisplaceMeshTool::MeshStatistics");
static_assert(offsetof(UDisplaceMeshTool, PreviewMeshActor) == 1176, "Offset mismatch for UDisplaceMeshTool::PreviewMeshActor");
static_assert(offsetof(UDisplaceMeshTool, DynamicMeshComponent) == 1184, "Offset mismatch for UDisplaceMeshTool::DynamicMeshComponent");

// /Script/MeshModelingTools.DisplaceMeshToolBuilder
// Kind: Class; super: SingleTargetWithSelectionToolBuilder
class UDisplaceMeshToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.DrawAndRevolveTool
// Kind: Class; super: InteractiveTool
class UDrawAndRevolveTool
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    void* ControlPointsMechanic; // 0x0190 (Size: 0x8, Type: ObjectProperty)
    void* PlaneMechanic; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    void* OutputTypeProperties; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
    void* Settings; // 0x01A8 (Size: 0x8, Type: ObjectProperty)
    void* MaterialProperties; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    void* Preview; // 0x01B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDrawAndRevolveTool, ControlPointsMechanic) == 400, "Offset mismatch for UDrawAndRevolveTool::ControlPointsMechanic");
static_assert(offsetof(UDrawAndRevolveTool, PlaneMechanic) == 408, "Offset mismatch for UDrawAndRevolveTool::PlaneMechanic");
static_assert(offsetof(UDrawAndRevolveTool, OutputTypeProperties) == 416, "Offset mismatch for UDrawAndRevolveTool::OutputTypeProperties");
static_assert(offsetof(UDrawAndRevolveTool, Settings) == 424, "Offset mismatch for UDrawAndRevolveTool::Settings");
static_assert(offsetof(UDrawAndRevolveTool, MaterialProperties) == 432, "Offset mismatch for UDrawAndRevolveTool::MaterialProperties");
static_assert(offsetof(UDrawAndRevolveTool, Preview) == 440, "Offset mismatch for UDrawAndRevolveTool::Preview");

// /Script/MeshModelingTools.DrawAndRevolveToolBuilder
// Kind: Class; super: InteractiveToolBuilder
class UDrawAndRevolveToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.DrawPolygonTool
// Kind: Class; super: InteractiveTool
class UDrawPolygonTool
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* OutputTypeProperties; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* PolygonProperties; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* SnapProperties; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* MaterialProperties; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0xA0]; // 0x00E0
    void* PreviewMesh; // 0x0180 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x390]; // 0x0188
    void* HeightMechanic; // 0x0518 (Size: 0x8, Type: ObjectProperty)
    void* DragAlignmentMechanic; // 0x0520 (Size: 0x8, Type: ObjectProperty)
    void* PlaneMechanic; // 0x0528 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDrawPolygonTool, OutputTypeProperties) == 192, "Offset mismatch for UDrawPolygonTool::OutputTypeProperties");
static_assert(offsetof(UDrawPolygonTool, PolygonProperties) == 200, "Offset mismatch for UDrawPolygonTool::PolygonProperties");
static_assert(offsetof(UDrawPolygonTool, SnapProperties) == 208, "Offset mismatch for UDrawPolygonTool::SnapProperties");
static_assert(offsetof(UDrawPolygonTool, MaterialProperties) == 216, "Offset mismatch for UDrawPolygonTool::MaterialProperties");
static_assert(offsetof(UDrawPolygonTool, PreviewMesh) == 384, "Offset mismatch for UDrawPolygonTool::PreviewMesh");
static_assert(offsetof(UDrawPolygonTool, HeightMechanic) == 1304, "Offset mismatch for UDrawPolygonTool::HeightMechanic");
static_assert(offsetof(UDrawPolygonTool, DragAlignmentMechanic) == 1312, "Offset mismatch for UDrawPolygonTool::DragAlignmentMechanic");
static_assert(offsetof(UDrawPolygonTool, PlaneMechanic) == 1320, "Offset mismatch for UDrawPolygonTool::PlaneMechanic");

// /Script/MeshModelingTools.DrawPolygonToolBuilder
// Kind: Class; super: InteractiveToolBuilder
class UDrawPolygonToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.DrawPolygonToolSnapProperties
// Kind: Class; super: InteractiveToolPropertySet
class UDrawPolygonToolSnapProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bEnableSnapping; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSnapToWorldGrid; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSnapToVertices; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSnapToEdges; // 0x006B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSnapToAxes; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSnapToLengths; // 0x006D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSnapToSurfaces; // 0x006E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x006F
    float SnapToSurfacesOffset; // 0x0070 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDrawPolygonToolSnapProperties, bEnableSnapping) == 104, "Offset mismatch for UDrawPolygonToolSnapProperties::bEnableSnapping");
static_assert(offsetof(UDrawPolygonToolSnapProperties, bSnapToWorldGrid) == 105, "Offset mismatch for UDrawPolygonToolSnapProperties::bSnapToWorldGrid");
static_assert(offsetof(UDrawPolygonToolSnapProperties, bSnapToVertices) == 106, "Offset mismatch for UDrawPolygonToolSnapProperties::bSnapToVertices");
static_assert(offsetof(UDrawPolygonToolSnapProperties, bSnapToEdges) == 107, "Offset mismatch for UDrawPolygonToolSnapProperties::bSnapToEdges");
static_assert(offsetof(UDrawPolygonToolSnapProperties, bSnapToAxes) == 108, "Offset mismatch for UDrawPolygonToolSnapProperties::bSnapToAxes");
static_assert(offsetof(UDrawPolygonToolSnapProperties, bSnapToLengths) == 109, "Offset mismatch for UDrawPolygonToolSnapProperties::bSnapToLengths");
static_assert(offsetof(UDrawPolygonToolSnapProperties, bSnapToSurfaces) == 110, "Offset mismatch for UDrawPolygonToolSnapProperties::bSnapToSurfaces");
static_assert(offsetof(UDrawPolygonToolSnapProperties, SnapToSurfacesOffset) == 112, "Offset mismatch for UDrawPolygonToolSnapProperties::SnapToSurfacesOffset");

// /Script/MeshModelingTools.DrawPolygonToolStandardProperties
// Kind: Class; super: InteractiveToolPropertySet
class UDrawPolygonToolStandardProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t PolygonDrawMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAllowSelfIntersections; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x006A
    float FeatureSizeRatio; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::int32_t RadialSlices; // 0x0070 (Size: 0x4, Type: IntProperty)
    float Distance; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShowGridGizmo; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ExtrudeMode; // 0x0079 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x2]; // 0x007A
    float ExtrudeHeight; // 0x007C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UDrawPolygonToolStandardProperties, PolygonDrawMode) == 104, "Offset mismatch for UDrawPolygonToolStandardProperties::PolygonDrawMode");
static_assert(offsetof(UDrawPolygonToolStandardProperties, bAllowSelfIntersections) == 105, "Offset mismatch for UDrawPolygonToolStandardProperties::bAllowSelfIntersections");
static_assert(offsetof(UDrawPolygonToolStandardProperties, FeatureSizeRatio) == 108, "Offset mismatch for UDrawPolygonToolStandardProperties::FeatureSizeRatio");
static_assert(offsetof(UDrawPolygonToolStandardProperties, RadialSlices) == 112, "Offset mismatch for UDrawPolygonToolStandardProperties::RadialSlices");
static_assert(offsetof(UDrawPolygonToolStandardProperties, Distance) == 116, "Offset mismatch for UDrawPolygonToolStandardProperties::Distance");
static_assert(offsetof(UDrawPolygonToolStandardProperties, bShowGridGizmo) == 120, "Offset mismatch for UDrawPolygonToolStandardProperties::bShowGridGizmo");
static_assert(offsetof(UDrawPolygonToolStandardProperties, ExtrudeMode) == 121, "Offset mismatch for UDrawPolygonToolStandardProperties::ExtrudeMode");
static_assert(offsetof(UDrawPolygonToolStandardProperties, ExtrudeHeight) == 124, "Offset mismatch for UDrawPolygonToolStandardProperties::ExtrudeHeight");

// /Script/MeshModelingTools.DynamicMeshBrushProperties
// Kind: Class; super: InteractiveToolPropertySet
class UDynamicMeshBrushProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t BrushSize[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    float BrushFalloffAmount; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float Depth; // 0x0084 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHitBackFaces; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDynamicMeshBrushProperties, BrushSize) == 104, "Offset mismatch for UDynamicMeshBrushProperties::BrushSize");
static_assert(offsetof(UDynamicMeshBrushProperties, BrushFalloffAmount) == 128, "Offset mismatch for UDynamicMeshBrushProperties::BrushFalloffAmount");
static_assert(offsetof(UDynamicMeshBrushProperties, Depth) == 132, "Offset mismatch for UDynamicMeshBrushProperties::Depth");
static_assert(offsetof(UDynamicMeshBrushProperties, bHitBackFaces) == 136, "Offset mismatch for UDynamicMeshBrushProperties::bHitBackFaces");

// /Script/MeshModelingTools.DynamicMeshBrushSculptProperties
// Kind: Class; super: InteractiveToolPropertySet
class UDynamicMeshBrushSculptProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bIsRemeshingEnabled; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PrimaryBrushType; // 0x0069 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x006A
    float PrimaryBrushSpeed; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPreserveUVFlow; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFreezeTarget; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0072
    float SmoothBrushSpeed; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDetailPreservingSmooth; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDynamicMeshBrushSculptProperties, bIsRemeshingEnabled) == 104, "Offset mismatch for UDynamicMeshBrushSculptProperties::bIsRemeshingEnabled");
static_assert(offsetof(UDynamicMeshBrushSculptProperties, PrimaryBrushType) == 105, "Offset mismatch for UDynamicMeshBrushSculptProperties::PrimaryBrushType");
static_assert(offsetof(UDynamicMeshBrushSculptProperties, PrimaryBrushSpeed) == 108, "Offset mismatch for UDynamicMeshBrushSculptProperties::PrimaryBrushSpeed");
static_assert(offsetof(UDynamicMeshBrushSculptProperties, bPreserveUVFlow) == 112, "Offset mismatch for UDynamicMeshBrushSculptProperties::bPreserveUVFlow");
static_assert(offsetof(UDynamicMeshBrushSculptProperties, bFreezeTarget) == 113, "Offset mismatch for UDynamicMeshBrushSculptProperties::bFreezeTarget");
static_assert(offsetof(UDynamicMeshBrushSculptProperties, SmoothBrushSpeed) == 116, "Offset mismatch for UDynamicMeshBrushSculptProperties::SmoothBrushSpeed");
static_assert(offsetof(UDynamicMeshBrushSculptProperties, bDetailPreservingSmooth) == 120, "Offset mismatch for UDynamicMeshBrushSculptProperties::bDetailPreservingSmooth");

// /Script/MeshModelingTools.DynamicMeshBrushTool
// Kind: Class; super: BaseBrushTool
class UDynamicMeshBrushTool
{
public:
    std::uint8_t Pad_0000[0x2B8]; // 0x0000
    void* PreviewMesh; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDynamicMeshBrushTool, PreviewMesh) == 696, "Offset mismatch for UDynamicMeshBrushTool::PreviewMesh");

// /Script/MeshModelingTools.DynamicMeshSculptTool
// Kind: Class; super: MeshSurfacePointTool
class UDynamicMeshSculptTool
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    void* BrushProperties; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* SculptProperties; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* SculptMaxBrushProperties; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* KelvinBrushProperties; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    void* RemeshProperties; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    void* GizmoProperties; // 0x0140 (Size: 0x8, Type: ObjectProperty)
    void* ViewProperties; // 0x0148 (Size: 0x8, Type: ObjectProperty)
    void* SculptToolActions; // 0x0150 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x70]; // 0x0158
    void* BrushIndicator; // 0x01C8 (Size: 0x8, Type: ObjectProperty)
    void* BrushIndicatorMaterial; // 0x01D0 (Size: 0x8, Type: ObjectProperty)
    void* BrushIndicatorMesh; // 0x01D8 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMeshActor; // 0x01E0 (Size: 0x8, Type: ObjectProperty)
    void* DynamicMeshComponent; // 0x01E8 (Size: 0x8, Type: ObjectProperty)
    void* ActiveOverrideMaterial; // 0x01F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0xBF0]; // 0x01F8
    void* PlaneTransformGizmo; // 0x0DE8 (Size: 0x8, Type: ObjectProperty)
    void* PlaneTransformProxy; // 0x0DF0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDynamicMeshSculptTool, BrushProperties) == 280, "Offset mismatch for UDynamicMeshSculptTool::BrushProperties");
static_assert(offsetof(UDynamicMeshSculptTool, SculptProperties) == 288, "Offset mismatch for UDynamicMeshSculptTool::SculptProperties");
static_assert(offsetof(UDynamicMeshSculptTool, SculptMaxBrushProperties) == 296, "Offset mismatch for UDynamicMeshSculptTool::SculptMaxBrushProperties");
static_assert(offsetof(UDynamicMeshSculptTool, KelvinBrushProperties) == 304, "Offset mismatch for UDynamicMeshSculptTool::KelvinBrushProperties");
static_assert(offsetof(UDynamicMeshSculptTool, RemeshProperties) == 312, "Offset mismatch for UDynamicMeshSculptTool::RemeshProperties");
static_assert(offsetof(UDynamicMeshSculptTool, GizmoProperties) == 320, "Offset mismatch for UDynamicMeshSculptTool::GizmoProperties");
static_assert(offsetof(UDynamicMeshSculptTool, ViewProperties) == 328, "Offset mismatch for UDynamicMeshSculptTool::ViewProperties");
static_assert(offsetof(UDynamicMeshSculptTool, SculptToolActions) == 336, "Offset mismatch for UDynamicMeshSculptTool::SculptToolActions");
static_assert(offsetof(UDynamicMeshSculptTool, BrushIndicator) == 456, "Offset mismatch for UDynamicMeshSculptTool::BrushIndicator");
static_assert(offsetof(UDynamicMeshSculptTool, BrushIndicatorMaterial) == 464, "Offset mismatch for UDynamicMeshSculptTool::BrushIndicatorMaterial");
static_assert(offsetof(UDynamicMeshSculptTool, BrushIndicatorMesh) == 472, "Offset mismatch for UDynamicMeshSculptTool::BrushIndicatorMesh");
static_assert(offsetof(UDynamicMeshSculptTool, PreviewMeshActor) == 480, "Offset mismatch for UDynamicMeshSculptTool::PreviewMeshActor");
static_assert(offsetof(UDynamicMeshSculptTool, DynamicMeshComponent) == 488, "Offset mismatch for UDynamicMeshSculptTool::DynamicMeshComponent");
static_assert(offsetof(UDynamicMeshSculptTool, ActiveOverrideMaterial) == 496, "Offset mismatch for UDynamicMeshSculptTool::ActiveOverrideMaterial");
static_assert(offsetof(UDynamicMeshSculptTool, PlaneTransformGizmo) == 3560, "Offset mismatch for UDynamicMeshSculptTool::PlaneTransformGizmo");
static_assert(offsetof(UDynamicMeshSculptTool, PlaneTransformProxy) == 3568, "Offset mismatch for UDynamicMeshSculptTool::PlaneTransformProxy");

// /Script/MeshModelingTools.DynamicMeshSculptToolBuilder
// Kind: Class; super: MeshSurfacePointMeshEditingToolBuilder
class UDynamicMeshSculptToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.DynamicSculptToolActions
// Kind: Class; super: InteractiveToolPropertySet
class UDynamicSculptToolActions
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDynamicSculptToolActions, CachedPropertiesMap) == 56, "Offset mismatch for UDynamicSculptToolActions::CachedPropertiesMap");
static_assert(offsetof(UDynamicSculptToolActions, bIsPropertySetEnabled) == 72, "Offset mismatch for UDynamicSculptToolActions::bIsPropertySetEnabled");

// /Script/MeshModelingTools.EdgeLoopInsertionProperties
// Kind: Class; super: InteractiveToolPropertySet
class UEdgeLoopInsertionProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t PositionMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::uint8_t InsertionMode; // 0x006C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x006D
    std::int32_t NumLoops; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x0074
    double ProportionOffset; // 0x0078 (Size: 0x8, Type: DoubleProperty)
    double DistanceOffset; // 0x0080 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bInteractive; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlipOffsetDirection; // 0x0089 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHighlightProblemGroups; // 0x008A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x5]; // 0x008B
    double VertexTolerance; // 0x0090 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UEdgeLoopInsertionProperties, PositionMode) == 104, "Offset mismatch for UEdgeLoopInsertionProperties::PositionMode");
static_assert(offsetof(UEdgeLoopInsertionProperties, InsertionMode) == 108, "Offset mismatch for UEdgeLoopInsertionProperties::InsertionMode");
static_assert(offsetof(UEdgeLoopInsertionProperties, NumLoops) == 112, "Offset mismatch for UEdgeLoopInsertionProperties::NumLoops");
static_assert(offsetof(UEdgeLoopInsertionProperties, ProportionOffset) == 120, "Offset mismatch for UEdgeLoopInsertionProperties::ProportionOffset");
static_assert(offsetof(UEdgeLoopInsertionProperties, DistanceOffset) == 128, "Offset mismatch for UEdgeLoopInsertionProperties::DistanceOffset");
static_assert(offsetof(UEdgeLoopInsertionProperties, bInteractive) == 136, "Offset mismatch for UEdgeLoopInsertionProperties::bInteractive");
static_assert(offsetof(UEdgeLoopInsertionProperties, bFlipOffsetDirection) == 137, "Offset mismatch for UEdgeLoopInsertionProperties::bFlipOffsetDirection");
static_assert(offsetof(UEdgeLoopInsertionProperties, bHighlightProblemGroups) == 138, "Offset mismatch for UEdgeLoopInsertionProperties::bHighlightProblemGroups");
static_assert(offsetof(UEdgeLoopInsertionProperties, VertexTolerance) == 144, "Offset mismatch for UEdgeLoopInsertionProperties::VertexTolerance");

// /Script/MeshModelingTools.EditMeshPolygonsActionModeToolBuilder
// Kind: Class; super: EditMeshPolygonsToolBuilder
class UEditMeshPolygonsActionModeToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.EditMeshPolygonsSelectionModeToolBuilder
// Kind: Class; super: EditMeshPolygonsToolBuilder
class UEditMeshPolygonsSelectionModeToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.EditMeshPolygonsTool
// Kind: Class; super: SingleTargetWithSelectionTool
class UEditMeshPolygonsTool
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    void* Preview; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* CommonProps; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    void* EditActions; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    void* EditActions_Triangles; // 0x0140 (Size: 0x8, Type: ObjectProperty)
    void* EditEdgeActions; // 0x0148 (Size: 0x8, Type: ObjectProperty)
    void* EditEdgeActions_Triangles; // 0x0150 (Size: 0x8, Type: ObjectProperty)
    void* EditUVActions; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    void* TopologyProperties; // 0x0160 (Size: 0x8, Type: ObjectProperty)
    void* ExtrudeActivity; // 0x0168 (Size: 0x8, Type: ObjectProperty)
    void* InsetOutsetActivity; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    void* CutFacesActivity; // 0x0178 (Size: 0x8, Type: ObjectProperty)
    void* PlanarProjectionUVActivity; // 0x0180 (Size: 0x8, Type: ObjectProperty)
    void* InsertEdgeActivity; // 0x0188 (Size: 0x8, Type: ObjectProperty)
    void* InsertEdgeLoopActivity; // 0x0190 (Size: 0x8, Type: ObjectProperty)
    void* BevelEdgeActivity; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    void* ExtrudeEdgeActivity; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x58]; // 0x01A8
    void* ActivityContext; // 0x0200 (Size: 0x8, Type: ObjectProperty)
    void* SelectionMechanic; // 0x0208 (Size: 0x8, Type: ObjectProperty)
    void* DragAlignmentMechanic; // 0x0210 (Size: 0x8, Type: ObjectProperty)
    void* TransformGizmo; // 0x0218 (Size: 0x8, Type: ObjectProperty)
    void* TransformProxy; // 0x0220 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UEditMeshPolygonsTool, Preview) == 296, "Offset mismatch for UEditMeshPolygonsTool::Preview");
static_assert(offsetof(UEditMeshPolygonsTool, CommonProps) == 304, "Offset mismatch for UEditMeshPolygonsTool::CommonProps");
static_assert(offsetof(UEditMeshPolygonsTool, EditActions) == 312, "Offset mismatch for UEditMeshPolygonsTool::EditActions");
static_assert(offsetof(UEditMeshPolygonsTool, EditActions_Triangles) == 320, "Offset mismatch for UEditMeshPolygonsTool::EditActions_Triangles");
static_assert(offsetof(UEditMeshPolygonsTool, EditEdgeActions) == 328, "Offset mismatch for UEditMeshPolygonsTool::EditEdgeActions");
static_assert(offsetof(UEditMeshPolygonsTool, EditEdgeActions_Triangles) == 336, "Offset mismatch for UEditMeshPolygonsTool::EditEdgeActions_Triangles");
static_assert(offsetof(UEditMeshPolygonsTool, EditUVActions) == 344, "Offset mismatch for UEditMeshPolygonsTool::EditUVActions");
static_assert(offsetof(UEditMeshPolygonsTool, TopologyProperties) == 352, "Offset mismatch for UEditMeshPolygonsTool::TopologyProperties");
static_assert(offsetof(UEditMeshPolygonsTool, ExtrudeActivity) == 360, "Offset mismatch for UEditMeshPolygonsTool::ExtrudeActivity");
static_assert(offsetof(UEditMeshPolygonsTool, InsetOutsetActivity) == 368, "Offset mismatch for UEditMeshPolygonsTool::InsetOutsetActivity");
static_assert(offsetof(UEditMeshPolygonsTool, CutFacesActivity) == 376, "Offset mismatch for UEditMeshPolygonsTool::CutFacesActivity");
static_assert(offsetof(UEditMeshPolygonsTool, PlanarProjectionUVActivity) == 384, "Offset mismatch for UEditMeshPolygonsTool::PlanarProjectionUVActivity");
static_assert(offsetof(UEditMeshPolygonsTool, InsertEdgeActivity) == 392, "Offset mismatch for UEditMeshPolygonsTool::InsertEdgeActivity");
static_assert(offsetof(UEditMeshPolygonsTool, InsertEdgeLoopActivity) == 400, "Offset mismatch for UEditMeshPolygonsTool::InsertEdgeLoopActivity");
static_assert(offsetof(UEditMeshPolygonsTool, BevelEdgeActivity) == 408, "Offset mismatch for UEditMeshPolygonsTool::BevelEdgeActivity");
static_assert(offsetof(UEditMeshPolygonsTool, ExtrudeEdgeActivity) == 416, "Offset mismatch for UEditMeshPolygonsTool::ExtrudeEdgeActivity");
static_assert(offsetof(UEditMeshPolygonsTool, ActivityContext) == 512, "Offset mismatch for UEditMeshPolygonsTool::ActivityContext");
static_assert(offsetof(UEditMeshPolygonsTool, SelectionMechanic) == 520, "Offset mismatch for UEditMeshPolygonsTool::SelectionMechanic");
static_assert(offsetof(UEditMeshPolygonsTool, DragAlignmentMechanic) == 528, "Offset mismatch for UEditMeshPolygonsTool::DragAlignmentMechanic");
static_assert(offsetof(UEditMeshPolygonsTool, TransformGizmo) == 536, "Offset mismatch for UEditMeshPolygonsTool::TransformGizmo");
static_assert(offsetof(UEditMeshPolygonsTool, TransformProxy) == 544, "Offset mismatch for UEditMeshPolygonsTool::TransformProxy");

// /Script/MeshModelingTools.EditMeshPolygonsToolActionPropertySet
// Kind: Class; super: InteractiveToolPropertySet
class UEditMeshPolygonsToolActionPropertySet
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEditMeshPolygonsToolActionPropertySet, CachedPropertiesMap) == 56, "Offset mismatch for UEditMeshPolygonsToolActionPropertySet::CachedPropertiesMap");
static_assert(offsetof(UEditMeshPolygonsToolActionPropertySet, bIsPropertySetEnabled) == 72, "Offset mismatch for UEditMeshPolygonsToolActionPropertySet::bIsPropertySetEnabled");

// /Script/MeshModelingTools.EditMeshPolygonsToolActions
// Kind: Class; super: EditMeshPolygonsToolActionPropertySet
class UEditMeshPolygonsToolActions
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEditMeshPolygonsToolActions, CachedPropertiesMap) == 56, "Offset mismatch for UEditMeshPolygonsToolActions::CachedPropertiesMap");
static_assert(offsetof(UEditMeshPolygonsToolActions, bIsPropertySetEnabled) == 72, "Offset mismatch for UEditMeshPolygonsToolActions::bIsPropertySetEnabled");

// /Script/MeshModelingTools.EditMeshPolygonsToolActions_Triangles
// Kind: Class; super: EditMeshPolygonsToolActionPropertySet
class UEditMeshPolygonsToolActions_Triangles
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEditMeshPolygonsToolActions_Triangles, CachedPropertiesMap) == 56, "Offset mismatch for UEditMeshPolygonsToolActions_Triangles::CachedPropertiesMap");
static_assert(offsetof(UEditMeshPolygonsToolActions_Triangles, bIsPropertySetEnabled) == 72, "Offset mismatch for UEditMeshPolygonsToolActions_Triangles::bIsPropertySetEnabled");

// /Script/MeshModelingTools.EditMeshPolygonsToolBuilder
// Kind: Class; super: SingleTargetWithSelectionToolBuilder
class UEditMeshPolygonsToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions
// Kind: Class; super: EditMeshPolygonsToolActionPropertySet
class UEditMeshPolygonsToolEdgeActions
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEditMeshPolygonsToolEdgeActions, CachedPropertiesMap) == 56, "Offset mismatch for UEditMeshPolygonsToolEdgeActions::CachedPropertiesMap");
static_assert(offsetof(UEditMeshPolygonsToolEdgeActions, bIsPropertySetEnabled) == 72, "Offset mismatch for UEditMeshPolygonsToolEdgeActions::bIsPropertySetEnabled");

// /Script/MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles
// Kind: Class; super: EditMeshPolygonsToolActionPropertySet
class UEditMeshPolygonsToolEdgeActions_Triangles
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEditMeshPolygonsToolEdgeActions_Triangles, CachedPropertiesMap) == 56, "Offset mismatch for UEditMeshPolygonsToolEdgeActions_Triangles::CachedPropertiesMap");
static_assert(offsetof(UEditMeshPolygonsToolEdgeActions_Triangles, bIsPropertySetEnabled) == 72, "Offset mismatch for UEditMeshPolygonsToolEdgeActions_Triangles::bIsPropertySetEnabled");

// /Script/MeshModelingTools.EditMeshPolygonsToolUVActions
// Kind: Class; super: EditMeshPolygonsToolActionPropertySet
class UEditMeshPolygonsToolUVActions
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UEditMeshPolygonsToolUVActions, CachedPropertiesMap) == 56, "Offset mismatch for UEditMeshPolygonsToolUVActions::CachedPropertiesMap");
static_assert(offsetof(UEditMeshPolygonsToolUVActions, bIsPropertySetEnabled) == 72, "Offset mismatch for UEditMeshPolygonsToolUVActions::bIsPropertySetEnabled");

// /Script/MeshModelingTools.EraseBrushOpProps
// Kind: Class; super: MeshSculptBrushOpProps
class UEraseBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float Strength; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x0074 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UEraseBrushOpProps, Strength) == 112, "Offset mismatch for UEraseBrushOpProps::Strength");
static_assert(offsetof(UEraseBrushOpProps, Falloff) == 116, "Offset mismatch for UEraseBrushOpProps::Falloff");

// /Script/MeshModelingTools.EraseSculptLayerBrushOpProps
// Kind: Class; super: MeshSculptBrushOpProps
class UEraseSculptLayerBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float Strength; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x0074 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UEraseSculptLayerBrushOpProps, Strength) == 112, "Offset mismatch for UEraseSculptLayerBrushOpProps::Strength");
static_assert(offsetof(UEraseSculptLayerBrushOpProps, Falloff) == 116, "Offset mismatch for UEraseSculptLayerBrushOpProps::Falloff");

// /Script/MeshModelingTools.ExistingMeshMaterialProperties
// Kind: Class; super: InteractiveToolPropertySet
class UExistingMeshMaterialProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t MaterialMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    float CheckerDensity; // 0x006C (Size: 0x4, Type: FloatProperty)
    void* OverrideMaterial; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    FString UVChannel; // 0x0078 (Size: 0x10, Type: StrProperty)
    TArray<void*> UVChannelNamesList; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    void* CheckerMaterial; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UExistingMeshMaterialProperties, MaterialMode) == 104, "Offset mismatch for UExistingMeshMaterialProperties::MaterialMode");
static_assert(offsetof(UExistingMeshMaterialProperties, CheckerDensity) == 108, "Offset mismatch for UExistingMeshMaterialProperties::CheckerDensity");
static_assert(offsetof(UExistingMeshMaterialProperties, OverrideMaterial) == 112, "Offset mismatch for UExistingMeshMaterialProperties::OverrideMaterial");
static_assert(offsetof(UExistingMeshMaterialProperties, UVChannel) == 120, "Offset mismatch for UExistingMeshMaterialProperties::UVChannel");
static_assert(offsetof(UExistingMeshMaterialProperties, UVChannelNamesList) == 136, "Offset mismatch for UExistingMeshMaterialProperties::UVChannelNamesList");
static_assert(offsetof(UExistingMeshMaterialProperties, CheckerMaterial) == 152, "Offset mismatch for UExistingMeshMaterialProperties::CheckerMaterial");

// /Script/MeshModelingTools.FixedPlaneBrushOpProps
// Kind: Class; super: BasePlaneBrushOpProps
class UFixedPlaneBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float Strength; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WhichSide; // 0x0078 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFixedPlaneBrushOpProps, Strength) == 112, "Offset mismatch for UFixedPlaneBrushOpProps::Strength");
static_assert(offsetof(UFixedPlaneBrushOpProps, Falloff) == 116, "Offset mismatch for UFixedPlaneBrushOpProps::Falloff");
static_assert(offsetof(UFixedPlaneBrushOpProps, WhichSide) == 120, "Offset mismatch for UFixedPlaneBrushOpProps::WhichSide");

// /Script/MeshModelingTools.FixedPlaneBrushProperties
// Kind: Class; super: InteractiveToolPropertySet
class UFixedPlaneBrushProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bPropertySetEnabled; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowGizmo; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x006A
    std::uint8_t Position[0x20]; // 0x0070 (Size: 0x20, Type: StructProperty)
    std::uint8_t Rotation[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFixedPlaneBrushProperties, bPropertySetEnabled) == 104, "Offset mismatch for UFixedPlaneBrushProperties::bPropertySetEnabled");
static_assert(offsetof(UFixedPlaneBrushProperties, bShowGizmo) == 105, "Offset mismatch for UFixedPlaneBrushProperties::bShowGizmo");
static_assert(offsetof(UFixedPlaneBrushProperties, Position) == 112, "Offset mismatch for UFixedPlaneBrushProperties::Position");
static_assert(offsetof(UFixedPlaneBrushProperties, Rotation) == 144, "Offset mismatch for UFixedPlaneBrushProperties::Rotation");

// /Script/MeshModelingTools.FlattenBrushOpProps
// Kind: Class; super: MeshSculptBrushOpProps
class UFlattenBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float Strength; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WhichSide; // 0x0078 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFlattenBrushOpProps, Strength) == 112, "Offset mismatch for UFlattenBrushOpProps::Strength");
static_assert(offsetof(UFlattenBrushOpProps, Falloff) == 116, "Offset mismatch for UFlattenBrushOpProps::Falloff");
static_assert(offsetof(UFlattenBrushOpProps, WhichSide) == 120, "Offset mismatch for UFlattenBrushOpProps::WhichSide");

// /Script/MeshModelingTools.GroupEdgeInsertionProperties
// Kind: Class; super: InteractiveToolPropertySet
class UGroupEdgeInsertionProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t InsertionMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::uint8_t bContinuousInsertion; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x006D
    double VertexTolerance; // 0x0070 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UGroupEdgeInsertionProperties, InsertionMode) == 104, "Offset mismatch for UGroupEdgeInsertionProperties::InsertionMode");
static_assert(offsetof(UGroupEdgeInsertionProperties, bContinuousInsertion) == 108, "Offset mismatch for UGroupEdgeInsertionProperties::bContinuousInsertion");
static_assert(offsetof(UGroupEdgeInsertionProperties, VertexTolerance) == 112, "Offset mismatch for UGroupEdgeInsertionProperties::VertexTolerance");

// /Script/MeshModelingTools.GroupEraseBrushOpProps
// Kind: Class; super: MeshSculptBrushOpProps
class UGroupEraseBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::int32_t Group; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::uint8_t bOnlyEraseCurrent; // 0x0074 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGroupEraseBrushOpProps, Group) == 112, "Offset mismatch for UGroupEraseBrushOpProps::Group");
static_assert(offsetof(UGroupEraseBrushOpProps, bOnlyEraseCurrent) == 116, "Offset mismatch for UGroupEraseBrushOpProps::bOnlyEraseCurrent");

// /Script/MeshModelingTools.GroupPaintBrushFilterProperties
// Kind: Class; super: InteractiveToolPropertySet
class UGroupPaintBrushFilterProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t PrimaryBrushType; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SubToolType; // 0x0069 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x006A
    float BrushSize; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t BrushAreaMode; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHitBackFaces; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0072
    std::int32_t SetGroup; // 0x0074 (Size: 0x4, Type: IntProperty)
    std::uint8_t SetLabel[0x4]; // 0x0078 (Size: 0x4, Type: NameProperty)
    std::uint8_t bOnlySetUngrouped; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x007D
    std::int32_t EraseGroup; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::uint8_t EraseLabel[0x4]; // 0x0084 (Size: 0x4, Type: NameProperty)
    std::uint8_t bOnlyEraseCurrent; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0089
    float AngleThreshold; // 0x008C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUVSeams; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNormalSeams; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t VisibilityFilter; // 0x0092 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsolateGeometrySelection; // 0x0093 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bToolHasSelection; // 0x0094 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0095
    std::int32_t MinTriVertCount; // 0x0098 (Size: 0x4, Type: IntProperty)
    std::uint8_t bShowHitGroup; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowAllGroups; // 0x009D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPaintingLabels; // 0x009E (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGroupPaintBrushFilterProperties, PrimaryBrushType) == 104, "Offset mismatch for UGroupPaintBrushFilterProperties::PrimaryBrushType");
static_assert(offsetof(UGroupPaintBrushFilterProperties, SubToolType) == 105, "Offset mismatch for UGroupPaintBrushFilterProperties::SubToolType");
static_assert(offsetof(UGroupPaintBrushFilterProperties, BrushSize) == 108, "Offset mismatch for UGroupPaintBrushFilterProperties::BrushSize");
static_assert(offsetof(UGroupPaintBrushFilterProperties, BrushAreaMode) == 112, "Offset mismatch for UGroupPaintBrushFilterProperties::BrushAreaMode");
static_assert(offsetof(UGroupPaintBrushFilterProperties, bHitBackFaces) == 113, "Offset mismatch for UGroupPaintBrushFilterProperties::bHitBackFaces");
static_assert(offsetof(UGroupPaintBrushFilterProperties, SetGroup) == 116, "Offset mismatch for UGroupPaintBrushFilterProperties::SetGroup");
static_assert(offsetof(UGroupPaintBrushFilterProperties, SetLabel) == 120, "Offset mismatch for UGroupPaintBrushFilterProperties::SetLabel");
static_assert(offsetof(UGroupPaintBrushFilterProperties, bOnlySetUngrouped) == 124, "Offset mismatch for UGroupPaintBrushFilterProperties::bOnlySetUngrouped");
static_assert(offsetof(UGroupPaintBrushFilterProperties, EraseGroup) == 128, "Offset mismatch for UGroupPaintBrushFilterProperties::EraseGroup");
static_assert(offsetof(UGroupPaintBrushFilterProperties, EraseLabel) == 132, "Offset mismatch for UGroupPaintBrushFilterProperties::EraseLabel");
static_assert(offsetof(UGroupPaintBrushFilterProperties, bOnlyEraseCurrent) == 136, "Offset mismatch for UGroupPaintBrushFilterProperties::bOnlyEraseCurrent");
static_assert(offsetof(UGroupPaintBrushFilterProperties, AngleThreshold) == 140, "Offset mismatch for UGroupPaintBrushFilterProperties::AngleThreshold");
static_assert(offsetof(UGroupPaintBrushFilterProperties, bUVSeams) == 144, "Offset mismatch for UGroupPaintBrushFilterProperties::bUVSeams");
static_assert(offsetof(UGroupPaintBrushFilterProperties, bNormalSeams) == 145, "Offset mismatch for UGroupPaintBrushFilterProperties::bNormalSeams");
static_assert(offsetof(UGroupPaintBrushFilterProperties, VisibilityFilter) == 146, "Offset mismatch for UGroupPaintBrushFilterProperties::VisibilityFilter");
static_assert(offsetof(UGroupPaintBrushFilterProperties, bIsolateGeometrySelection) == 147, "Offset mismatch for UGroupPaintBrushFilterProperties::bIsolateGeometrySelection");
static_assert(offsetof(UGroupPaintBrushFilterProperties, bToolHasSelection) == 148, "Offset mismatch for UGroupPaintBrushFilterProperties::bToolHasSelection");
static_assert(offsetof(UGroupPaintBrushFilterProperties, MinTriVertCount) == 152, "Offset mismatch for UGroupPaintBrushFilterProperties::MinTriVertCount");
static_assert(offsetof(UGroupPaintBrushFilterProperties, bShowHitGroup) == 156, "Offset mismatch for UGroupPaintBrushFilterProperties::bShowHitGroup");
static_assert(offsetof(UGroupPaintBrushFilterProperties, bShowAllGroups) == 157, "Offset mismatch for UGroupPaintBrushFilterProperties::bShowAllGroups");
static_assert(offsetof(UGroupPaintBrushFilterProperties, bPaintingLabels) == 158, "Offset mismatch for UGroupPaintBrushFilterProperties::bPaintingLabels");

// /Script/MeshModelingTools.GroupPaintBrushOpProps
// Kind: Class; super: MeshSculptBrushOpProps
class UGroupPaintBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::int32_t Group; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::uint8_t bOnlyPaintUngrouped; // 0x0074 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGroupPaintBrushOpProps, Group) == 112, "Offset mismatch for UGroupPaintBrushOpProps::Group");
static_assert(offsetof(UGroupPaintBrushOpProps, bOnlyPaintUngrouped) == 116, "Offset mismatch for UGroupPaintBrushOpProps::bOnlyPaintUngrouped");

// /Script/MeshModelingTools.GroupPaintSymmetryProperties
// Kind: Class; super: InteractiveToolPropertySet
class UGroupPaintSymmetryProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bEnableSymmetry; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPaintingLabels; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x006A
    FString LeftString; // 0x0070 (Size: 0x10, Type: StrProperty)
    FString RightString; // 0x0080 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UGroupPaintSymmetryProperties, bEnableSymmetry) == 104, "Offset mismatch for UGroupPaintSymmetryProperties::bEnableSymmetry");
static_assert(offsetof(UGroupPaintSymmetryProperties, bPaintingLabels) == 105, "Offset mismatch for UGroupPaintSymmetryProperties::bPaintingLabels");
static_assert(offsetof(UGroupPaintSymmetryProperties, LeftString) == 112, "Offset mismatch for UGroupPaintSymmetryProperties::LeftString");
static_assert(offsetof(UGroupPaintSymmetryProperties, RightString) == 128, "Offset mismatch for UGroupPaintSymmetryProperties::RightString");

// /Script/MeshModelingTools.HoleFillOperatorFactory
// Kind: Class; super: Object
class UHoleFillOperatorFactory
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* FillTool; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UHoleFillOperatorFactory, FillTool) == 48, "Offset mismatch for UHoleFillOperatorFactory::FillTool");

// /Script/MeshModelingTools.HoleFillStatisticsProperties
// Kind: Class; super: InteractiveToolPropertySet
class UHoleFillStatisticsProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FString InitialHoles; // 0x0068 (Size: 0x10, Type: StrProperty)
    FString SelectedHoles; // 0x0078 (Size: 0x10, Type: StrProperty)
    FString SuccessfulFills; // 0x0088 (Size: 0x10, Type: StrProperty)
    FString FailedFills; // 0x0098 (Size: 0x10, Type: StrProperty)
    FString RemainingHoles; // 0x00A8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UHoleFillStatisticsProperties, InitialHoles) == 104, "Offset mismatch for UHoleFillStatisticsProperties::InitialHoles");
static_assert(offsetof(UHoleFillStatisticsProperties, SelectedHoles) == 120, "Offset mismatch for UHoleFillStatisticsProperties::SelectedHoles");
static_assert(offsetof(UHoleFillStatisticsProperties, SuccessfulFills) == 136, "Offset mismatch for UHoleFillStatisticsProperties::SuccessfulFills");
static_assert(offsetof(UHoleFillStatisticsProperties, FailedFills) == 152, "Offset mismatch for UHoleFillStatisticsProperties::FailedFills");
static_assert(offsetof(UHoleFillStatisticsProperties, RemainingHoles) == 168, "Offset mismatch for UHoleFillStatisticsProperties::RemainingHoles");

// /Script/MeshModelingTools.HoleFillTool
// Kind: Class; super: SingleSelectionMeshEditingTool
class UHoleFillTool
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* SmoothHoleFillProperties; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* Properties; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* Actions; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* Statistics; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* Preview; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* SelectionMechanic; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UHoleFillTool, SmoothHoleFillProperties) == 200, "Offset mismatch for UHoleFillTool::SmoothHoleFillProperties");
static_assert(offsetof(UHoleFillTool, Properties) == 208, "Offset mismatch for UHoleFillTool::Properties");
static_assert(offsetof(UHoleFillTool, Actions) == 216, "Offset mismatch for UHoleFillTool::Actions");
static_assert(offsetof(UHoleFillTool, Statistics) == 224, "Offset mismatch for UHoleFillTool::Statistics");
static_assert(offsetof(UHoleFillTool, Preview) == 232, "Offset mismatch for UHoleFillTool::Preview");
static_assert(offsetof(UHoleFillTool, SelectionMechanic) == 240, "Offset mismatch for UHoleFillTool::SelectionMechanic");

// /Script/MeshModelingTools.HoleFillToolActions
// Kind: Class; super: InteractiveToolPropertySet
class UHoleFillToolActions
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UHoleFillToolActions, CachedPropertiesMap) == 56, "Offset mismatch for UHoleFillToolActions::CachedPropertiesMap");
static_assert(offsetof(UHoleFillToolActions, bIsPropertySetEnabled) == 72, "Offset mismatch for UHoleFillToolActions::bIsPropertySetEnabled");

// /Script/MeshModelingTools.HoleFillToolBuilder
// Kind: Class; super: SingleSelectionMeshEditingToolBuilder
class UHoleFillToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.HoleFillToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UHoleFillToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t FillType; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bRemoveIsolatedTriangles; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bQuickFillSmallHoles; // 0x006A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UHoleFillToolProperties, FillType) == 104, "Offset mismatch for UHoleFillToolProperties::FillType");
static_assert(offsetof(UHoleFillToolProperties, bRemoveIsolatedTriangles) == 105, "Offset mismatch for UHoleFillToolProperties::bRemoveIsolatedTriangles");
static_assert(offsetof(UHoleFillToolProperties, bQuickFillSmallHoles) == 106, "Offset mismatch for UHoleFillToolProperties::bQuickFillSmallHoles");

// /Script/MeshModelingTools.ImplicitOffsetProperties
// Kind: Class; super: InteractiveToolPropertySet
class UImplicitOffsetProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    float Smoothness; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPreserveUVs; // 0x006C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UImplicitOffsetProperties, Smoothness) == 104, "Offset mismatch for UImplicitOffsetProperties::Smoothness");
static_assert(offsetof(UImplicitOffsetProperties, bPreserveUVs) == 108, "Offset mismatch for UImplicitOffsetProperties::bPreserveUVs");

// /Script/MeshModelingTools.ImplicitSmoothProperties
// Kind: Class; super: InteractiveToolPropertySet
class UImplicitSmoothProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    float SmoothSpeed; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float Smoothness; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPreserveUVs; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0071
    float VolumeCorrection; // 0x0074 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UImplicitSmoothProperties, SmoothSpeed) == 104, "Offset mismatch for UImplicitSmoothProperties::SmoothSpeed");
static_assert(offsetof(UImplicitSmoothProperties, Smoothness) == 108, "Offset mismatch for UImplicitSmoothProperties::Smoothness");
static_assert(offsetof(UImplicitSmoothProperties, bPreserveUVs) == 112, "Offset mismatch for UImplicitSmoothProperties::bPreserveUVs");
static_assert(offsetof(UImplicitSmoothProperties, VolumeCorrection) == 116, "Offset mismatch for UImplicitSmoothProperties::VolumeCorrection");

// /Script/MeshModelingTools.InflateBrushOpProps
// Kind: Class; super: MeshSculptBrushOpProps
class UInflateBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float Strength; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x0074 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UInflateBrushOpProps, Strength) == 112, "Offset mismatch for UInflateBrushOpProps::Strength");
static_assert(offsetof(UInflateBrushOpProps, Falloff) == 116, "Offset mismatch for UInflateBrushOpProps::Falloff");

// /Script/MeshModelingTools.IterativeOffsetProperties
// Kind: Class; super: InteractiveToolPropertySet
class UIterativeOffsetProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::int32_t Steps; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::uint8_t bOffsetBoundaries; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x006D
    float SmoothingPerStep; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bReprojectSmooth; // 0x0074 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UIterativeOffsetProperties, Steps) == 104, "Offset mismatch for UIterativeOffsetProperties::Steps");
static_assert(offsetof(UIterativeOffsetProperties, bOffsetBoundaries) == 108, "Offset mismatch for UIterativeOffsetProperties::bOffsetBoundaries");
static_assert(offsetof(UIterativeOffsetProperties, SmoothingPerStep) == 112, "Offset mismatch for UIterativeOffsetProperties::SmoothingPerStep");
static_assert(offsetof(UIterativeOffsetProperties, bReprojectSmooth) == 116, "Offset mismatch for UIterativeOffsetProperties::bReprojectSmooth");

// /Script/MeshModelingTools.IterativeSmoothProperties
// Kind: Class; super: InteractiveToolPropertySet
class UIterativeSmoothProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    float SmoothingPerStep; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t Steps; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t bSmoothBoundary; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UIterativeSmoothProperties, SmoothingPerStep) == 104, "Offset mismatch for UIterativeSmoothProperties::SmoothingPerStep");
static_assert(offsetof(UIterativeSmoothProperties, Steps) == 108, "Offset mismatch for UIterativeSmoothProperties::Steps");
static_assert(offsetof(UIterativeSmoothProperties, bSmoothBoundary) == 112, "Offset mismatch for UIterativeSmoothProperties::bSmoothBoundary");

// /Script/MeshModelingTools.KelvinBrushProperties
// Kind: Class; super: InteractiveToolPropertySet
class UKelvinBrushProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    float FallOffDistance; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float Stiffness; // 0x006C (Size: 0x4, Type: FloatProperty)
    float Incompressiblity; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::int32_t BrushSteps; // 0x0074 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UKelvinBrushProperties, FallOffDistance) == 104, "Offset mismatch for UKelvinBrushProperties::FallOffDistance");
static_assert(offsetof(UKelvinBrushProperties, Stiffness) == 108, "Offset mismatch for UKelvinBrushProperties::Stiffness");
static_assert(offsetof(UKelvinBrushProperties, Incompressiblity) == 112, "Offset mismatch for UKelvinBrushProperties::Incompressiblity");
static_assert(offsetof(UKelvinBrushProperties, BrushSteps) == 116, "Offset mismatch for UKelvinBrushProperties::BrushSteps");

// /Script/MeshModelingTools.LatticeDeformerOperatorFactory
// Kind: Class; super: Object
class ULatticeDeformerOperatorFactory
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* LatticeDeformerTool; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULatticeDeformerOperatorFactory, LatticeDeformerTool) == 48, "Offset mismatch for ULatticeDeformerOperatorFactory::LatticeDeformerTool");

// /Script/MeshModelingTools.LatticeDeformerTool
// Kind: Class; super: MultiTargetWithSelectionTool
class ULatticeDeformerTool
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    void* ControlPointsMechanic; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
    void* Settings; // 0x01A8 (Size: 0x8, Type: ObjectProperty)
    void* Preview; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    void* SculptLayerProperties; // 0x01B8 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> LatticeStorage; // 0x01C0 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t bLatticeDeformed; // 0x01D0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULatticeDeformerTool, ControlPointsMechanic) == 416, "Offset mismatch for ULatticeDeformerTool::ControlPointsMechanic");
static_assert(offsetof(ULatticeDeformerTool, Settings) == 424, "Offset mismatch for ULatticeDeformerTool::Settings");
static_assert(offsetof(ULatticeDeformerTool, Preview) == 432, "Offset mismatch for ULatticeDeformerTool::Preview");
static_assert(offsetof(ULatticeDeformerTool, SculptLayerProperties) == 440, "Offset mismatch for ULatticeDeformerTool::SculptLayerProperties");
static_assert(offsetof(ULatticeDeformerTool, LatticeStorage) == 448, "Offset mismatch for ULatticeDeformerTool::LatticeStorage");
static_assert(offsetof(ULatticeDeformerTool, bLatticeDeformed) == 464, "Offset mismatch for ULatticeDeformerTool::bLatticeDeformed");

// /Script/MeshModelingTools.LatticeDeformerToolBuilder
// Kind: Class; super: MultiTargetWithSelectionToolBuilder
class ULatticeDeformerToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.LatticeDeformerToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class ULatticeDeformerToolProperties
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::int32_t XAxisResolution; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::int32_t YAxisResolution; // 0x0074 (Size: 0x4, Type: IntProperty)
    std::int32_t ZAxisResolution; // 0x0078 (Size: 0x4, Type: IntProperty)
    float Padding; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::uint8_t InterpolationType; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bDeformNormals; // 0x0081 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanChangeResolution; // 0x0082 (Size: 0x1, Type: BoolProperty)
    std::uint8_t GizmoCoordinateSystem; // 0x0083 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSetPivotMode; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSoftDeformation; // 0x0085 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULatticeDeformerToolProperties, XAxisResolution) == 112, "Offset mismatch for ULatticeDeformerToolProperties::XAxisResolution");
static_assert(offsetof(ULatticeDeformerToolProperties, YAxisResolution) == 116, "Offset mismatch for ULatticeDeformerToolProperties::YAxisResolution");
static_assert(offsetof(ULatticeDeformerToolProperties, ZAxisResolution) == 120, "Offset mismatch for ULatticeDeformerToolProperties::ZAxisResolution");
static_assert(offsetof(ULatticeDeformerToolProperties, Padding) == 124, "Offset mismatch for ULatticeDeformerToolProperties::Padding");
static_assert(offsetof(ULatticeDeformerToolProperties, InterpolationType) == 128, "Offset mismatch for ULatticeDeformerToolProperties::InterpolationType");
static_assert(offsetof(ULatticeDeformerToolProperties, bDeformNormals) == 129, "Offset mismatch for ULatticeDeformerToolProperties::bDeformNormals");
static_assert(offsetof(ULatticeDeformerToolProperties, bCanChangeResolution) == 130, "Offset mismatch for ULatticeDeformerToolProperties::bCanChangeResolution");
static_assert(offsetof(ULatticeDeformerToolProperties, GizmoCoordinateSystem) == 131, "Offset mismatch for ULatticeDeformerToolProperties::GizmoCoordinateSystem");
static_assert(offsetof(ULatticeDeformerToolProperties, bSetPivotMode) == 132, "Offset mismatch for ULatticeDeformerToolProperties::bSetPivotMode");
static_assert(offsetof(ULatticeDeformerToolProperties, bSoftDeformation) == 133, "Offset mismatch for ULatticeDeformerToolProperties::bSoftDeformation");

// /Script/MeshModelingTools.MeshAttributePaintBrushOperationProperties
// Kind: Class; super: InteractiveToolPropertySet
class UMeshAttributePaintBrushOperationProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bIsolateGeometrySelection; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bToolHasSelection; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x006A
    std::uint8_t BrushAction; // 0x006C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x006D
    float BrushValue; // 0x0070 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMeshAttributePaintBrushOperationProperties, bIsolateGeometrySelection) == 104, "Offset mismatch for UMeshAttributePaintBrushOperationProperties::bIsolateGeometrySelection");
static_assert(offsetof(UMeshAttributePaintBrushOperationProperties, bToolHasSelection) == 105, "Offset mismatch for UMeshAttributePaintBrushOperationProperties::bToolHasSelection");
static_assert(offsetof(UMeshAttributePaintBrushOperationProperties, BrushAction) == 108, "Offset mismatch for UMeshAttributePaintBrushOperationProperties::BrushAction");
static_assert(offsetof(UMeshAttributePaintBrushOperationProperties, BrushValue) == 112, "Offset mismatch for UMeshAttributePaintBrushOperationProperties::BrushValue");

// /Script/MeshModelingTools.MeshAttributePaintEditActions
// Kind: Class; super: InteractiveToolPropertySet
class UMeshAttributePaintEditActions
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMeshAttributePaintEditActions, CachedPropertiesMap) == 56, "Offset mismatch for UMeshAttributePaintEditActions::CachedPropertiesMap");
static_assert(offsetof(UMeshAttributePaintEditActions, bIsPropertySetEnabled) == 72, "Offset mismatch for UMeshAttributePaintEditActions::bIsPropertySetEnabled");

// /Script/MeshModelingTools.MeshAttributePaintTool
// Kind: Class; super: DynamicMeshBrushTool
class UMeshAttributePaintTool
{
public:
    std::uint8_t Pad_0000[0x3B0]; // 0x0000
    void* BrushActionProps; // 0x03B0 (Size: 0x8, Type: ObjectProperty)
    void* AttribProps; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    void* ViewProperties; // 0x03C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x78]; // 0x03C8
    void* ActiveOverrideMaterial; // 0x0440 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMeshAttributePaintTool, BrushActionProps) == 944, "Offset mismatch for UMeshAttributePaintTool::BrushActionProps");
static_assert(offsetof(UMeshAttributePaintTool, AttribProps) == 952, "Offset mismatch for UMeshAttributePaintTool::AttribProps");
static_assert(offsetof(UMeshAttributePaintTool, ViewProperties) == 960, "Offset mismatch for UMeshAttributePaintTool::ViewProperties");
static_assert(offsetof(UMeshAttributePaintTool, ActiveOverrideMaterial) == 1088, "Offset mismatch for UMeshAttributePaintTool::ActiveOverrideMaterial");

// /Script/MeshModelingTools.MeshAttributePaintToolBuilder
// Kind: Class; super: MeshSurfacePointMeshEditingToolBuilder
class UMeshAttributePaintToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.MeshAttributePaintToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UMeshAttributePaintToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FString Attribute; // 0x0068 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UMeshAttributePaintToolProperties, Attribute) == 104, "Offset mismatch for UMeshAttributePaintToolProperties::Attribute");

// /Script/MeshModelingTools.MeshAttributePaintToolVisualizationProperties
// Kind: Class; super: InteractiveToolPropertySet
class UMeshAttributePaintToolVisualizationProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t MaterialMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::uint8_t bFlatShading; // 0x006C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMeshAttributePaintToolVisualizationProperties, MaterialMode) == 104, "Offset mismatch for UMeshAttributePaintToolVisualizationProperties::MaterialMode");
static_assert(offsetof(UMeshAttributePaintToolVisualizationProperties, bFlatShading) == 108, "Offset mismatch for UMeshAttributePaintToolVisualizationProperties::bFlatShading");

// /Script/MeshModelingTools.MeshConstraintProperties
// Kind: Class; super: InteractiveToolPropertySet
class UMeshConstraintProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bPreserveSharpEdges; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MeshBoundaryConstraint; // 0x0069 (Size: 0x1, Type: EnumProperty)
    std::uint8_t GroupBoundaryConstraint; // 0x006A (Size: 0x1, Type: EnumProperty)
    std::uint8_t MaterialBoundaryConstraint; // 0x006B (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPreventNormalFlips; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreventTinyTriangles; // 0x006D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMeshConstraintProperties, bPreserveSharpEdges) == 104, "Offset mismatch for UMeshConstraintProperties::bPreserveSharpEdges");
static_assert(offsetof(UMeshConstraintProperties, MeshBoundaryConstraint) == 105, "Offset mismatch for UMeshConstraintProperties::MeshBoundaryConstraint");
static_assert(offsetof(UMeshConstraintProperties, GroupBoundaryConstraint) == 106, "Offset mismatch for UMeshConstraintProperties::GroupBoundaryConstraint");
static_assert(offsetof(UMeshConstraintProperties, MaterialBoundaryConstraint) == 107, "Offset mismatch for UMeshConstraintProperties::MaterialBoundaryConstraint");
static_assert(offsetof(UMeshConstraintProperties, bPreventNormalFlips) == 108, "Offset mismatch for UMeshConstraintProperties::bPreventNormalFlips");
static_assert(offsetof(UMeshConstraintProperties, bPreventTinyTriangles) == 109, "Offset mismatch for UMeshConstraintProperties::bPreventTinyTriangles");

// /Script/MeshModelingTools.MeshEditingViewProperties
// Kind: Class; super: InteractiveToolPropertySet
class UMeshEditingViewProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bShowWireframe; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::uint8_t MaterialMode; // 0x006C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x006D
    std::uint8_t bFlatShading; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0071
    std::uint8_t Color[0x14]; // 0x0074 (Size: 0x14, Type: StructProperty)
    void* Image; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    double Opacity; // 0x0090 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t TransparentMaterialColor[0x10]; // 0x0098 (Size: 0x10, Type: StructProperty)
    std::uint8_t bTwoSided; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x00A9
    TWeakObjectPtr<void> CustomMaterial; // 0x00AC (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UMeshEditingViewProperties, bShowWireframe) == 104, "Offset mismatch for UMeshEditingViewProperties::bShowWireframe");
static_assert(offsetof(UMeshEditingViewProperties, MaterialMode) == 108, "Offset mismatch for UMeshEditingViewProperties::MaterialMode");
static_assert(offsetof(UMeshEditingViewProperties, bFlatShading) == 112, "Offset mismatch for UMeshEditingViewProperties::bFlatShading");
static_assert(offsetof(UMeshEditingViewProperties, Color) == 116, "Offset mismatch for UMeshEditingViewProperties::Color");
static_assert(offsetof(UMeshEditingViewProperties, Image) == 136, "Offset mismatch for UMeshEditingViewProperties::Image");
static_assert(offsetof(UMeshEditingViewProperties, Opacity) == 144, "Offset mismatch for UMeshEditingViewProperties::Opacity");
static_assert(offsetof(UMeshEditingViewProperties, TransparentMaterialColor) == 152, "Offset mismatch for UMeshEditingViewProperties::TransparentMaterialColor");
static_assert(offsetof(UMeshEditingViewProperties, bTwoSided) == 168, "Offset mismatch for UMeshEditingViewProperties::bTwoSided");
static_assert(offsetof(UMeshEditingViewProperties, CustomMaterial) == 172, "Offset mismatch for UMeshEditingViewProperties::CustomMaterial");

// /Script/MeshModelingTools.MeshGroupPaintTool
// Kind: Class; super: MeshSculptToolBase
class UMeshGroupPaintTool
{
public:
    std::uint8_t Pad_0000[0xB08]; // 0x0000
    void* PolygroupLayerProperties; // 0x0B08 (Size: 0x8, Type: ObjectProperty)
    void* FilterProperties; // 0x0B10 (Size: 0x8, Type: ObjectProperty)
    void* SymmetryProperties; // 0x0B18 (Size: 0x8, Type: ObjectProperty)
    void* PaintBrushOpProperties; // 0x0B20 (Size: 0x8, Type: ObjectProperty)
    void* EraseBrushOpProperties; // 0x0B28 (Size: 0x8, Type: ObjectProperty)
    void* FreezeActions; // 0x0B30 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0B38
    void* PolyLassoMechanic; // 0x0B40 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMeshActor; // 0x0B48 (Size: 0x8, Type: ObjectProperty)
    void* DynamicMeshComponent; // 0x0B50 (Size: 0x8, Type: ObjectProperty)
    void* MeshElementsDisplay; // 0x0B58 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x300]; // 0x0B60
    void* MirrorBrushIndicator; // 0x0E60 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMeshGroupPaintTool, PolygroupLayerProperties) == 2824, "Offset mismatch for UMeshGroupPaintTool::PolygroupLayerProperties");
static_assert(offsetof(UMeshGroupPaintTool, FilterProperties) == 2832, "Offset mismatch for UMeshGroupPaintTool::FilterProperties");
static_assert(offsetof(UMeshGroupPaintTool, SymmetryProperties) == 2840, "Offset mismatch for UMeshGroupPaintTool::SymmetryProperties");
static_assert(offsetof(UMeshGroupPaintTool, PaintBrushOpProperties) == 2848, "Offset mismatch for UMeshGroupPaintTool::PaintBrushOpProperties");
static_assert(offsetof(UMeshGroupPaintTool, EraseBrushOpProperties) == 2856, "Offset mismatch for UMeshGroupPaintTool::EraseBrushOpProperties");
static_assert(offsetof(UMeshGroupPaintTool, FreezeActions) == 2864, "Offset mismatch for UMeshGroupPaintTool::FreezeActions");
static_assert(offsetof(UMeshGroupPaintTool, PolyLassoMechanic) == 2880, "Offset mismatch for UMeshGroupPaintTool::PolyLassoMechanic");
static_assert(offsetof(UMeshGroupPaintTool, PreviewMeshActor) == 2888, "Offset mismatch for UMeshGroupPaintTool::PreviewMeshActor");
static_assert(offsetof(UMeshGroupPaintTool, DynamicMeshComponent) == 2896, "Offset mismatch for UMeshGroupPaintTool::DynamicMeshComponent");
static_assert(offsetof(UMeshGroupPaintTool, MeshElementsDisplay) == 2904, "Offset mismatch for UMeshGroupPaintTool::MeshElementsDisplay");
static_assert(offsetof(UMeshGroupPaintTool, MirrorBrushIndicator) == 3680, "Offset mismatch for UMeshGroupPaintTool::MirrorBrushIndicator");

// /Script/MeshModelingTools.MeshGroupPaintToolActionPropertySet
// Kind: Class; super: InteractiveToolPropertySet
class UMeshGroupPaintToolActionPropertySet
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMeshGroupPaintToolActionPropertySet, CachedPropertiesMap) == 56, "Offset mismatch for UMeshGroupPaintToolActionPropertySet::CachedPropertiesMap");
static_assert(offsetof(UMeshGroupPaintToolActionPropertySet, bIsPropertySetEnabled) == 72, "Offset mismatch for UMeshGroupPaintToolActionPropertySet::bIsPropertySetEnabled");

// /Script/MeshModelingTools.MeshGroupPaintToolBuilder
// Kind: Class; super: MeshSurfacePointMeshEditingToolBuilder
class UMeshGroupPaintToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.MeshGroupPaintToolFreezeActions
// Kind: Class; super: MeshGroupPaintToolActionPropertySet
class UMeshGroupPaintToolFreezeActions
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMeshGroupPaintToolFreezeActions, CachedPropertiesMap) == 56, "Offset mismatch for UMeshGroupPaintToolFreezeActions::CachedPropertiesMap");
static_assert(offsetof(UMeshGroupPaintToolFreezeActions, bIsPropertySetEnabled) == 72, "Offset mismatch for UMeshGroupPaintToolFreezeActions::bIsPropertySetEnabled");

// /Script/MeshModelingTools.MeshSculptBrushOpProps
// Kind: Class; super: InteractiveToolPropertySet
class UMeshSculptBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bIsStrengthPressureEnabled; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMeshSculptBrushOpProps, bIsStrengthPressureEnabled) == 104, "Offset mismatch for UMeshSculptBrushOpProps::bIsStrengthPressureEnabled");

// /Script/MeshModelingTools.MeshSculptLayerProperties
// Kind: Class; super: Object
class UMeshSculptLayerProperties
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t ActiveLayer; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    TArray<void*> LayerWeights; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCanEditLayers; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMeshSculptLayerProperties, ActiveLayer) == 40, "Offset mismatch for UMeshSculptLayerProperties::ActiveLayer");
static_assert(offsetof(UMeshSculptLayerProperties, LayerWeights) == 48, "Offset mismatch for UMeshSculptLayerProperties::LayerWeights");
static_assert(offsetof(UMeshSculptLayerProperties, bCanEditLayers) == 64, "Offset mismatch for UMeshSculptLayerProperties::bCanEditLayers");

// /Script/MeshModelingTools.MeshSculptToolBase
// Kind: Class; super: MeshSurfacePointTool
class UMeshSculptToolBase
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    void* BrushProperties; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* GizmoProperties; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x128]; // 0x0128
    TMap<void*, void*> BrushOpPropSets; // 0x0250 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0260
    TMap<void*, void*> SecondaryBrushOpPropSets; // 0x0270 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0003[0x1C0]; // 0x0280
    void* StrokeGeometry; // 0x0440 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x558]; // 0x0448
    void* ViewProperties; // 0x09A0 (Size: 0x8, Type: ObjectProperty)
    void* ActiveOverrideMaterial; // 0x09A8 (Size: 0x8, Type: ObjectProperty)
    void* BrushIndicator; // 0x09B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsVolumetricIndicator; // 0x09B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x09B9
    void* BrushIndicatorMaterial; // 0x09C0 (Size: 0x8, Type: ObjectProperty)
    void* BrushIndicatorMesh; // 0x09C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0006[0x8]; // 0x09D0
    void* PlaneTransformGizmo; // 0x09D8 (Size: 0x8, Type: ObjectProperty)
    void* PlaneTransformProxy; // 0x09E0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMeshSculptToolBase, BrushProperties) == 280, "Offset mismatch for UMeshSculptToolBase::BrushProperties");
static_assert(offsetof(UMeshSculptToolBase, GizmoProperties) == 288, "Offset mismatch for UMeshSculptToolBase::GizmoProperties");
static_assert(offsetof(UMeshSculptToolBase, BrushOpPropSets) == 592, "Offset mismatch for UMeshSculptToolBase::BrushOpPropSets");
static_assert(offsetof(UMeshSculptToolBase, SecondaryBrushOpPropSets) == 624, "Offset mismatch for UMeshSculptToolBase::SecondaryBrushOpPropSets");
static_assert(offsetof(UMeshSculptToolBase, StrokeGeometry) == 1088, "Offset mismatch for UMeshSculptToolBase::StrokeGeometry");
static_assert(offsetof(UMeshSculptToolBase, ViewProperties) == 2464, "Offset mismatch for UMeshSculptToolBase::ViewProperties");
static_assert(offsetof(UMeshSculptToolBase, ActiveOverrideMaterial) == 2472, "Offset mismatch for UMeshSculptToolBase::ActiveOverrideMaterial");
static_assert(offsetof(UMeshSculptToolBase, BrushIndicator) == 2480, "Offset mismatch for UMeshSculptToolBase::BrushIndicator");
static_assert(offsetof(UMeshSculptToolBase, bIsVolumetricIndicator) == 2488, "Offset mismatch for UMeshSculptToolBase::bIsVolumetricIndicator");
static_assert(offsetof(UMeshSculptToolBase, BrushIndicatorMaterial) == 2496, "Offset mismatch for UMeshSculptToolBase::BrushIndicatorMaterial");
static_assert(offsetof(UMeshSculptToolBase, BrushIndicatorMesh) == 2504, "Offset mismatch for UMeshSculptToolBase::BrushIndicatorMesh");
static_assert(offsetof(UMeshSculptToolBase, PlaneTransformGizmo) == 2520, "Offset mismatch for UMeshSculptToolBase::PlaneTransformGizmo");
static_assert(offsetof(UMeshSculptToolBase, PlaneTransformProxy) == 2528, "Offset mismatch for UMeshSculptToolBase::PlaneTransformProxy");

// /Script/MeshModelingTools.MeshSpaceDeformerTool
// Kind: Class; super: SingleSelectionMeshEditingTool
class UMeshSpaceDeformerTool
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* Settings; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* ToolActions; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* StateTarget; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* DragAlignmentMechanic; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* Preview; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00F8
    void* OriginalMeshPreview; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    void* IntervalGizmo; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    void* TransformGizmo; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* TransformProxy; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* UpIntervalSource; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* DownIntervalSource; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    void* ForwardIntervalSource; // 0x0138 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMeshSpaceDeformerTool, Settings) == 208, "Offset mismatch for UMeshSpaceDeformerTool::Settings");
static_assert(offsetof(UMeshSpaceDeformerTool, ToolActions) == 216, "Offset mismatch for UMeshSpaceDeformerTool::ToolActions");
static_assert(offsetof(UMeshSpaceDeformerTool, StateTarget) == 224, "Offset mismatch for UMeshSpaceDeformerTool::StateTarget");
static_assert(offsetof(UMeshSpaceDeformerTool, DragAlignmentMechanic) == 232, "Offset mismatch for UMeshSpaceDeformerTool::DragAlignmentMechanic");
static_assert(offsetof(UMeshSpaceDeformerTool, Preview) == 240, "Offset mismatch for UMeshSpaceDeformerTool::Preview");
static_assert(offsetof(UMeshSpaceDeformerTool, OriginalMeshPreview) == 264, "Offset mismatch for UMeshSpaceDeformerTool::OriginalMeshPreview");
static_assert(offsetof(UMeshSpaceDeformerTool, IntervalGizmo) == 272, "Offset mismatch for UMeshSpaceDeformerTool::IntervalGizmo");
static_assert(offsetof(UMeshSpaceDeformerTool, TransformGizmo) == 280, "Offset mismatch for UMeshSpaceDeformerTool::TransformGizmo");
static_assert(offsetof(UMeshSpaceDeformerTool, TransformProxy) == 288, "Offset mismatch for UMeshSpaceDeformerTool::TransformProxy");
static_assert(offsetof(UMeshSpaceDeformerTool, UpIntervalSource) == 296, "Offset mismatch for UMeshSpaceDeformerTool::UpIntervalSource");
static_assert(offsetof(UMeshSpaceDeformerTool, DownIntervalSource) == 304, "Offset mismatch for UMeshSpaceDeformerTool::DownIntervalSource");
static_assert(offsetof(UMeshSpaceDeformerTool, ForwardIntervalSource) == 312, "Offset mismatch for UMeshSpaceDeformerTool::ForwardIntervalSource");

// /Script/MeshModelingTools.MeshSpaceDeformerToolActionPropertySet
// Kind: Class; super: InteractiveToolPropertySet
class UMeshSpaceDeformerToolActionPropertySet
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMeshSpaceDeformerToolActionPropertySet, CachedPropertiesMap) == 56, "Offset mismatch for UMeshSpaceDeformerToolActionPropertySet::CachedPropertiesMap");
static_assert(offsetof(UMeshSpaceDeformerToolActionPropertySet, bIsPropertySetEnabled) == 72, "Offset mismatch for UMeshSpaceDeformerToolActionPropertySet::bIsPropertySetEnabled");

// /Script/MeshModelingTools.MeshSpaceDeformerToolBuilder
// Kind: Class; super: SingleSelectionMeshEditingToolBuilder
class UMeshSpaceDeformerToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.MeshSpaceDeformerToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UMeshSpaceDeformerToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t SelectedOperationType; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    float UpperBoundsInterval; // 0x006C (Size: 0x4, Type: FloatProperty)
    float LowerBoundsInterval; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float BendDegrees; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float TwistDegrees; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::uint8_t FlareProfileType; // 0x007C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x007D
    float FlarePercentY; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLockXAndYFlaring; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0085
    float FlarePercentX; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLockBottom; // 0x008C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowOriginalMesh; // 0x008D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawVisualization; // 0x008E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlignToNormalOnCtrlClick; // 0x008F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMeshSpaceDeformerToolProperties, SelectedOperationType) == 104, "Offset mismatch for UMeshSpaceDeformerToolProperties::SelectedOperationType");
static_assert(offsetof(UMeshSpaceDeformerToolProperties, UpperBoundsInterval) == 108, "Offset mismatch for UMeshSpaceDeformerToolProperties::UpperBoundsInterval");
static_assert(offsetof(UMeshSpaceDeformerToolProperties, LowerBoundsInterval) == 112, "Offset mismatch for UMeshSpaceDeformerToolProperties::LowerBoundsInterval");
static_assert(offsetof(UMeshSpaceDeformerToolProperties, BendDegrees) == 116, "Offset mismatch for UMeshSpaceDeformerToolProperties::BendDegrees");
static_assert(offsetof(UMeshSpaceDeformerToolProperties, TwistDegrees) == 120, "Offset mismatch for UMeshSpaceDeformerToolProperties::TwistDegrees");
static_assert(offsetof(UMeshSpaceDeformerToolProperties, FlareProfileType) == 124, "Offset mismatch for UMeshSpaceDeformerToolProperties::FlareProfileType");
static_assert(offsetof(UMeshSpaceDeformerToolProperties, FlarePercentY) == 128, "Offset mismatch for UMeshSpaceDeformerToolProperties::FlarePercentY");
static_assert(offsetof(UMeshSpaceDeformerToolProperties, bLockXAndYFlaring) == 132, "Offset mismatch for UMeshSpaceDeformerToolProperties::bLockXAndYFlaring");
static_assert(offsetof(UMeshSpaceDeformerToolProperties, FlarePercentX) == 136, "Offset mismatch for UMeshSpaceDeformerToolProperties::FlarePercentX");
static_assert(offsetof(UMeshSpaceDeformerToolProperties, bLockBottom) == 140, "Offset mismatch for UMeshSpaceDeformerToolProperties::bLockBottom");
static_assert(offsetof(UMeshSpaceDeformerToolProperties, bShowOriginalMesh) == 141, "Offset mismatch for UMeshSpaceDeformerToolProperties::bShowOriginalMesh");
static_assert(offsetof(UMeshSpaceDeformerToolProperties, bDrawVisualization) == 142, "Offset mismatch for UMeshSpaceDeformerToolProperties::bDrawVisualization");
static_assert(offsetof(UMeshSpaceDeformerToolProperties, bAlignToNormalOnCtrlClick) == 143, "Offset mismatch for UMeshSpaceDeformerToolProperties::bAlignToNormalOnCtrlClick");

// /Script/MeshModelingTools.MeshStatisticsProperties
// Kind: Class; super: InteractiveToolPropertySet
class UMeshStatisticsProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FString Mesh; // 0x0068 (Size: 0x10, Type: StrProperty)
    FString UV; // 0x0078 (Size: 0x10, Type: StrProperty)
    FString Attributes; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UMeshStatisticsProperties, Mesh) == 104, "Offset mismatch for UMeshStatisticsProperties::Mesh");
static_assert(offsetof(UMeshStatisticsProperties, UV) == 120, "Offset mismatch for UMeshStatisticsProperties::UV");
static_assert(offsetof(UMeshStatisticsProperties, Attributes) == 136, "Offset mismatch for UMeshStatisticsProperties::Attributes");

// /Script/MeshModelingTools.MeshSymmetryProperties
// Kind: Class; super: InteractiveToolPropertySet
class UMeshSymmetryProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bEnableSymmetry; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSymmetryCanBeEnabled; // 0x0069 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMeshSymmetryProperties, bEnableSymmetry) == 104, "Offset mismatch for UMeshSymmetryProperties::bEnableSymmetry");
static_assert(offsetof(UMeshSymmetryProperties, bSymmetryCanBeEnabled) == 105, "Offset mismatch for UMeshSymmetryProperties::bSymmetryCanBeEnabled");

// /Script/MeshModelingTools.MeshUVChannelProperties
// Kind: Class; super: InteractiveToolPropertySet
class UMeshUVChannelProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FString UVChannel; // 0x0068 (Size: 0x10, Type: StrProperty)
    TArray<void*> UVChannelNamesList; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMeshUVChannelProperties, UVChannel) == 104, "Offset mismatch for UMeshUVChannelProperties::UVChannel");
static_assert(offsetof(UMeshUVChannelProperties, UVChannelNamesList) == 120, "Offset mismatch for UMeshUVChannelProperties::UVChannelNamesList");

// /Script/MeshModelingTools.MeshVertexPaintTool
// Kind: Class; super: MeshSculptToolBase
class UMeshVertexPaintTool
{
public:
    std::uint8_t Pad_0000[0xB08]; // 0x0000
    void* PolygroupLayerProperties; // 0x0B08 (Size: 0x8, Type: ObjectProperty)
    void* BasicProperties; // 0x0B10 (Size: 0x8, Type: ObjectProperty)
    void* FilterProperties; // 0x0B18 (Size: 0x8, Type: ObjectProperty)
    void* SymmetryProperties; // 0x0B20 (Size: 0x8, Type: ObjectProperty)
    void* PaintBrushOpProperties; // 0x0B28 (Size: 0x8, Type: ObjectProperty)
    void* EraseBrushOpProperties; // 0x0B30 (Size: 0x8, Type: ObjectProperty)
    void* QuickActions; // 0x0B38 (Size: 0x8, Type: ObjectProperty)
    void* UtilityActions; // 0x0B40 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0B48
    void* PolyLassoMechanic; // 0x0B50 (Size: 0x8, Type: ObjectProperty)
    void* PreviewMeshActor; // 0x0B58 (Size: 0x8, Type: ObjectProperty)
    void* DynamicMeshComponent; // 0x0B60 (Size: 0x8, Type: ObjectProperty)
    void* MeshElementsDisplay; // 0x0B68 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMeshVertexPaintTool, PolygroupLayerProperties) == 2824, "Offset mismatch for UMeshVertexPaintTool::PolygroupLayerProperties");
static_assert(offsetof(UMeshVertexPaintTool, BasicProperties) == 2832, "Offset mismatch for UMeshVertexPaintTool::BasicProperties");
static_assert(offsetof(UMeshVertexPaintTool, FilterProperties) == 2840, "Offset mismatch for UMeshVertexPaintTool::FilterProperties");
static_assert(offsetof(UMeshVertexPaintTool, SymmetryProperties) == 2848, "Offset mismatch for UMeshVertexPaintTool::SymmetryProperties");
static_assert(offsetof(UMeshVertexPaintTool, PaintBrushOpProperties) == 2856, "Offset mismatch for UMeshVertexPaintTool::PaintBrushOpProperties");
static_assert(offsetof(UMeshVertexPaintTool, EraseBrushOpProperties) == 2864, "Offset mismatch for UMeshVertexPaintTool::EraseBrushOpProperties");
static_assert(offsetof(UMeshVertexPaintTool, QuickActions) == 2872, "Offset mismatch for UMeshVertexPaintTool::QuickActions");
static_assert(offsetof(UMeshVertexPaintTool, UtilityActions) == 2880, "Offset mismatch for UMeshVertexPaintTool::UtilityActions");
static_assert(offsetof(UMeshVertexPaintTool, PolyLassoMechanic) == 2896, "Offset mismatch for UMeshVertexPaintTool::PolyLassoMechanic");
static_assert(offsetof(UMeshVertexPaintTool, PreviewMeshActor) == 2904, "Offset mismatch for UMeshVertexPaintTool::PreviewMeshActor");
static_assert(offsetof(UMeshVertexPaintTool, DynamicMeshComponent) == 2912, "Offset mismatch for UMeshVertexPaintTool::DynamicMeshComponent");
static_assert(offsetof(UMeshVertexPaintTool, MeshElementsDisplay) == 2920, "Offset mismatch for UMeshVertexPaintTool::MeshElementsDisplay");

// /Script/MeshModelingTools.MeshVertexPaintToolActionPropertySet
// Kind: Class; super: InteractiveToolPropertySet
class UMeshVertexPaintToolActionPropertySet
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMeshVertexPaintToolActionPropertySet, CachedPropertiesMap) == 56, "Offset mismatch for UMeshVertexPaintToolActionPropertySet::CachedPropertiesMap");
static_assert(offsetof(UMeshVertexPaintToolActionPropertySet, bIsPropertySetEnabled) == 72, "Offset mismatch for UMeshVertexPaintToolActionPropertySet::bIsPropertySetEnabled");

// /Script/MeshModelingTools.MeshVertexPaintToolBuilder
// Kind: Class; super: MeshSurfacePointMeshEditingToolBuilder
class UMeshVertexPaintToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.MeshVertexPaintToolQuickActions
// Kind: Class; super: MeshVertexPaintToolActionPropertySet
class UMeshVertexPaintToolQuickActions
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMeshVertexPaintToolQuickActions, CachedPropertiesMap) == 56, "Offset mismatch for UMeshVertexPaintToolQuickActions::CachedPropertiesMap");
static_assert(offsetof(UMeshVertexPaintToolQuickActions, bIsPropertySetEnabled) == 72, "Offset mismatch for UMeshVertexPaintToolQuickActions::bIsPropertySetEnabled");

// /Script/MeshModelingTools.MeshVertexPaintToolUtilityActions
// Kind: Class; super: MeshVertexPaintToolActionPropertySet
class UMeshVertexPaintToolUtilityActions
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t Operation; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0071
    std::uint8_t SourceChannel; // 0x0074 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0075
    float SourceValue; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WeightMap[0x4]; // 0x007C (Size: 0x4, Type: NameProperty)
    TArray<void*> WeightMapsList; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TargetChannels[0x4]; // 0x0090 (Size: 0x4, Type: StructProperty)
    std::uint8_t TargetChannel; // 0x0094 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCopyToHiRes; // 0x0095 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x0096
    FString CopyToLODName; // 0x0098 (Size: 0x10, Type: StrProperty)
    TArray<void*> LODNamesList; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMeshVertexPaintToolUtilityActions, Operation) == 112, "Offset mismatch for UMeshVertexPaintToolUtilityActions::Operation");
static_assert(offsetof(UMeshVertexPaintToolUtilityActions, SourceChannel) == 116, "Offset mismatch for UMeshVertexPaintToolUtilityActions::SourceChannel");
static_assert(offsetof(UMeshVertexPaintToolUtilityActions, SourceValue) == 120, "Offset mismatch for UMeshVertexPaintToolUtilityActions::SourceValue");
static_assert(offsetof(UMeshVertexPaintToolUtilityActions, WeightMap) == 124, "Offset mismatch for UMeshVertexPaintToolUtilityActions::WeightMap");
static_assert(offsetof(UMeshVertexPaintToolUtilityActions, WeightMapsList) == 128, "Offset mismatch for UMeshVertexPaintToolUtilityActions::WeightMapsList");
static_assert(offsetof(UMeshVertexPaintToolUtilityActions, TargetChannels) == 144, "Offset mismatch for UMeshVertexPaintToolUtilityActions::TargetChannels");
static_assert(offsetof(UMeshVertexPaintToolUtilityActions, TargetChannel) == 148, "Offset mismatch for UMeshVertexPaintToolUtilityActions::TargetChannel");
static_assert(offsetof(UMeshVertexPaintToolUtilityActions, bCopyToHiRes) == 149, "Offset mismatch for UMeshVertexPaintToolUtilityActions::bCopyToHiRes");
static_assert(offsetof(UMeshVertexPaintToolUtilityActions, CopyToLODName) == 152, "Offset mismatch for UMeshVertexPaintToolUtilityActions::CopyToLODName");
static_assert(offsetof(UMeshVertexPaintToolUtilityActions, LODNamesList) == 168, "Offset mismatch for UMeshVertexPaintToolUtilityActions::LODNamesList");

// /Script/MeshModelingTools.MeshVertexSculptTool
// Kind: Class; super: MeshSculptToolBase
class UMeshVertexSculptTool
{
public:
    std::uint8_t Pad_0000[0xB10]; // 0x0000
    void* SculptProperties; // 0x0B10 (Size: 0x8, Type: ObjectProperty)
    void* AlphaProperties; // 0x0B18 (Size: 0x8, Type: ObjectProperty)
    void* BrushAlpha; // 0x0B20 (Size: 0x8, Type: ObjectProperty)
    void* SymmetryProperties; // 0x0B28 (Size: 0x8, Type: ObjectProperty)
    void* SculptLayerProperties; // 0x0B30 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0B38
    void* PreviewMeshActor; // 0x0B50 (Size: 0x8, Type: ObjectProperty)
    void* DynamicMeshComponent; // 0x0B58 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8F0]; // 0x0B60
    void* OctreeGeometry; // 0x1450 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMeshVertexSculptTool, SculptProperties) == 2832, "Offset mismatch for UMeshVertexSculptTool::SculptProperties");
static_assert(offsetof(UMeshVertexSculptTool, AlphaProperties) == 2840, "Offset mismatch for UMeshVertexSculptTool::AlphaProperties");
static_assert(offsetof(UMeshVertexSculptTool, BrushAlpha) == 2848, "Offset mismatch for UMeshVertexSculptTool::BrushAlpha");
static_assert(offsetof(UMeshVertexSculptTool, SymmetryProperties) == 2856, "Offset mismatch for UMeshVertexSculptTool::SymmetryProperties");
static_assert(offsetof(UMeshVertexSculptTool, SculptLayerProperties) == 2864, "Offset mismatch for UMeshVertexSculptTool::SculptLayerProperties");
static_assert(offsetof(UMeshVertexSculptTool, PreviewMeshActor) == 2896, "Offset mismatch for UMeshVertexSculptTool::PreviewMeshActor");
static_assert(offsetof(UMeshVertexSculptTool, DynamicMeshComponent) == 2904, "Offset mismatch for UMeshVertexSculptTool::DynamicMeshComponent");
static_assert(offsetof(UMeshVertexSculptTool, OctreeGeometry) == 5200, "Offset mismatch for UMeshVertexSculptTool::OctreeGeometry");

// /Script/MeshModelingTools.MeshVertexSculptToolBuilder
// Kind: Class; super: MeshSurfacePointMeshEditingToolBuilder
class UMeshVertexSculptToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.MeshWeightChannelDensityProperties
// Kind: Class; super: InteractiveToolPropertySet
class UMeshWeightChannelDensityProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bUseWeightMap; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    FName SelectedAttribute; // 0x006C (Size: 0x8, Type: NameProperty)
    std::uint8_t Pad_0002[0xC]; // 0x0074
    float RelativeDensity; // 0x0080 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UMeshWeightChannelDensityProperties, bUseWeightMap) == 104, "Offset mismatch for UMeshWeightChannelDensityProperties::bUseWeightMap");
static_assert(offsetof(UMeshWeightChannelDensityProperties, SelectedAttribute) == 108, "Offset mismatch for UMeshWeightChannelDensityProperties::SelectedAttribute");
static_assert(offsetof(UMeshWeightChannelDensityProperties, RelativeDensity) == 128, "Offset mismatch for UMeshWeightChannelDensityProperties::RelativeDensity");

// /Script/MeshModelingTools.ModifyGeometrySelectionCommand
// Kind: Class; super: GeometrySelectionEditCommand
class UModifyGeometrySelectionCommand
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.ModifyGeometrySelectionCommand_Contract
// Kind: Class; super: ModifyGeometrySelectionCommand
class UModifyGeometrySelectionCommand_Contract
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.ModifyGeometrySelectionCommand_Expand
// Kind: Class; super: ModifyGeometrySelectionCommand
class UModifyGeometrySelectionCommand_Expand
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.ModifyGeometrySelectionCommand_ExpandToConnected
// Kind: Class; super: ModifyGeometrySelectionCommand
class UModifyGeometrySelectionCommand_ExpandToConnected
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.ModifyGeometrySelectionCommand_Invert
// Kind: Class; super: ModifyGeometrySelectionCommand
class UModifyGeometrySelectionCommand_Invert
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.ModifyGeometrySelectionCommand_InvertConnected
// Kind: Class; super: ModifyGeometrySelectionCommand
class UModifyGeometrySelectionCommand_InvertConnected
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.MoveBrushOpProps
// Kind: Class; super: MeshSculptBrushOpProps
class UMoveBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float Strength; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AxisFilters[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMoveBrushOpProps, Strength) == 112, "Offset mismatch for UMoveBrushOpProps::Strength");
static_assert(offsetof(UMoveBrushOpProps, Falloff) == 116, "Offset mismatch for UMoveBrushOpProps::Falloff");
static_assert(offsetof(UMoveBrushOpProps, AxisFilters) == 120, "Offset mismatch for UMoveBrushOpProps::AxisFilters");

// /Script/MeshModelingTools.NewMeshMaterialProperties
// Kind: Class; super: InteractiveToolPropertySet
class UNewMeshMaterialProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TWeakObjectPtr<void> Material; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    float UVScale; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bWorldSpaceUVScale; // 0x0074 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowWireframe; // 0x0075 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowExtendedOptions; // 0x0076 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNewMeshMaterialProperties, Material) == 104, "Offset mismatch for UNewMeshMaterialProperties::Material");
static_assert(offsetof(UNewMeshMaterialProperties, UVScale) == 112, "Offset mismatch for UNewMeshMaterialProperties::UVScale");
static_assert(offsetof(UNewMeshMaterialProperties, bWorldSpaceUVScale) == 116, "Offset mismatch for UNewMeshMaterialProperties::bWorldSpaceUVScale");
static_assert(offsetof(UNewMeshMaterialProperties, bShowWireframe) == 117, "Offset mismatch for UNewMeshMaterialProperties::bShowWireframe");
static_assert(offsetof(UNewMeshMaterialProperties, bShowExtendedOptions) == 118, "Offset mismatch for UNewMeshMaterialProperties::bShowExtendedOptions");

// /Script/MeshModelingTools.OffsetMeshTool
// Kind: Class; super: BaseMeshProcessingTool
class UOffsetMeshTool
{
public:
    std::uint8_t Pad_0000[0x460]; // 0x0000
    void* OffsetProperties; // 0x0460 (Size: 0x8, Type: ObjectProperty)
    void* IterativeProperties; // 0x0468 (Size: 0x8, Type: ObjectProperty)
    void* ImplicitProperties; // 0x0470 (Size: 0x8, Type: ObjectProperty)
    void* WeightMapProperties; // 0x0478 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UOffsetMeshTool, OffsetProperties) == 1120, "Offset mismatch for UOffsetMeshTool::OffsetProperties");
static_assert(offsetof(UOffsetMeshTool, IterativeProperties) == 1128, "Offset mismatch for UOffsetMeshTool::IterativeProperties");
static_assert(offsetof(UOffsetMeshTool, ImplicitProperties) == 1136, "Offset mismatch for UOffsetMeshTool::ImplicitProperties");
static_assert(offsetof(UOffsetMeshTool, WeightMapProperties) == 1144, "Offset mismatch for UOffsetMeshTool::WeightMapProperties");

// /Script/MeshModelingTools.OffsetMeshToolBuilder
// Kind: Class; super: BaseMeshProcessingToolBuilder
class UOffsetMeshToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.OffsetMeshToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UOffsetMeshToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t OffsetType; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    float Distance; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCreateShell; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UOffsetMeshToolProperties, OffsetType) == 104, "Offset mismatch for UOffsetMeshToolProperties::OffsetType");
static_assert(offsetof(UOffsetMeshToolProperties, Distance) == 108, "Offset mismatch for UOffsetMeshToolProperties::Distance");
static_assert(offsetof(UOffsetMeshToolProperties, bCreateShell) == 112, "Offset mismatch for UOffsetMeshToolProperties::bCreateShell");

// /Script/MeshModelingTools.OffsetWeightMapSetProperties
// Kind: Class; super: WeightMapSetProperties
class UOffsetWeightMapSetProperties
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    float MinDistance; // 0x0088 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UOffsetWeightMapSetProperties, MinDistance) == 136, "Offset mismatch for UOffsetWeightMapSetProperties::MinDistance");

// /Script/MeshModelingTools.PinchBrushOpProps
// Kind: Class; super: MeshSculptBrushOpProps
class UPinchBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float Strength; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float Depth; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPerpDamping; // 0x007C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPinchBrushOpProps, Strength) == 112, "Offset mismatch for UPinchBrushOpProps::Strength");
static_assert(offsetof(UPinchBrushOpProps, Falloff) == 116, "Offset mismatch for UPinchBrushOpProps::Falloff");
static_assert(offsetof(UPinchBrushOpProps, Depth) == 120, "Offset mismatch for UPinchBrushOpProps::Depth");
static_assert(offsetof(UPinchBrushOpProps, bPerpDamping) == 124, "Offset mismatch for UPinchBrushOpProps::bPerpDamping");

// /Script/MeshModelingTools.PlaneBrushOpProps
// Kind: Class; super: BasePlaneBrushOpProps
class UPlaneBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float Strength; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float Depth; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WhichSide; // 0x007C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPlaneBrushOpProps, Strength) == 112, "Offset mismatch for UPlaneBrushOpProps::Strength");
static_assert(offsetof(UPlaneBrushOpProps, Falloff) == 116, "Offset mismatch for UPlaneBrushOpProps::Falloff");
static_assert(offsetof(UPlaneBrushOpProps, Depth) == 120, "Offset mismatch for UPlaneBrushOpProps::Depth");
static_assert(offsetof(UPlaneBrushOpProps, WhichSide) == 124, "Offset mismatch for UPlaneBrushOpProps::WhichSide");

// /Script/MeshModelingTools.PolyEditActivityContext
// Kind: Class; super: Object
class UPolyEditActivityContext
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* CommonProperties; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0030
    void* Preview; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x28]; // 0x0048
    void* SelectionMechanic; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPolyEditActivityContext, CommonProperties) == 40, "Offset mismatch for UPolyEditActivityContext::CommonProperties");
static_assert(offsetof(UPolyEditActivityContext, Preview) == 64, "Offset mismatch for UPolyEditActivityContext::Preview");
static_assert(offsetof(UPolyEditActivityContext, SelectionMechanic) == 112, "Offset mismatch for UPolyEditActivityContext::SelectionMechanic");

// /Script/MeshModelingTools.PolyEditBevelEdgeActivity
// Kind: Class; super: InteractiveToolActivity
class UPolyEditBevelEdgeActivity
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* BevelProperties; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* ActivityContext; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPolyEditBevelEdgeActivity, BevelProperties) == 56, "Offset mismatch for UPolyEditBevelEdgeActivity::BevelProperties");
static_assert(offsetof(UPolyEditBevelEdgeActivity, ActivityContext) == 64, "Offset mismatch for UPolyEditBevelEdgeActivity::ActivityContext");

// /Script/MeshModelingTools.PolyEditBevelEdgeProperties
// Kind: Class; super: InteractiveToolPropertySet
class UPolyEditBevelEdgeProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    double BevelDistance; // 0x0068 (Size: 0x8, Type: DoubleProperty)
    std::int32_t Subdivisions; // 0x0070 (Size: 0x4, Type: IntProperty)
    float RoundWeight; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInferMaterialID; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    std::int32_t SetMaterialID; // 0x007C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPolyEditBevelEdgeProperties, BevelDistance) == 104, "Offset mismatch for UPolyEditBevelEdgeProperties::BevelDistance");
static_assert(offsetof(UPolyEditBevelEdgeProperties, Subdivisions) == 112, "Offset mismatch for UPolyEditBevelEdgeProperties::Subdivisions");
static_assert(offsetof(UPolyEditBevelEdgeProperties, RoundWeight) == 116, "Offset mismatch for UPolyEditBevelEdgeProperties::RoundWeight");
static_assert(offsetof(UPolyEditBevelEdgeProperties, bInferMaterialID) == 120, "Offset mismatch for UPolyEditBevelEdgeProperties::bInferMaterialID");
static_assert(offsetof(UPolyEditBevelEdgeProperties, SetMaterialID) == 124, "Offset mismatch for UPolyEditBevelEdgeProperties::SetMaterialID");

// /Script/MeshModelingTools.PolyEditCommonProperties
// Kind: Class; super: InteractiveToolPropertySet
class UPolyEditCommonProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bShowWireframe; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowSelectableCorners; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bGizmoVisible; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x006B
    std::uint8_t LocalFrameMode; // 0x006C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x006D
    std::uint8_t bLockRotation; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLocalCoordSystem; // 0x0071 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPolyEditCommonProperties, bShowWireframe) == 104, "Offset mismatch for UPolyEditCommonProperties::bShowWireframe");
static_assert(offsetof(UPolyEditCommonProperties, bShowSelectableCorners) == 105, "Offset mismatch for UPolyEditCommonProperties::bShowSelectableCorners");
static_assert(offsetof(UPolyEditCommonProperties, bGizmoVisible) == 106, "Offset mismatch for UPolyEditCommonProperties::bGizmoVisible");
static_assert(offsetof(UPolyEditCommonProperties, LocalFrameMode) == 108, "Offset mismatch for UPolyEditCommonProperties::LocalFrameMode");
static_assert(offsetof(UPolyEditCommonProperties, bLockRotation) == 112, "Offset mismatch for UPolyEditCommonProperties::bLockRotation");
static_assert(offsetof(UPolyEditCommonProperties, bLocalCoordSystem) == 113, "Offset mismatch for UPolyEditCommonProperties::bLocalCoordSystem");

// /Script/MeshModelingTools.PolyEditCutFacesActivity
// Kind: Class; super: InteractiveToolActivity
class UPolyEditCutFacesActivity
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* CutProperties; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* EditPreview; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* SurfacePathMechanic; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ActivityContext; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPolyEditCutFacesActivity, CutProperties) == 64, "Offset mismatch for UPolyEditCutFacesActivity::CutProperties");
static_assert(offsetof(UPolyEditCutFacesActivity, EditPreview) == 72, "Offset mismatch for UPolyEditCutFacesActivity::EditPreview");
static_assert(offsetof(UPolyEditCutFacesActivity, SurfacePathMechanic) == 80, "Offset mismatch for UPolyEditCutFacesActivity::SurfacePathMechanic");
static_assert(offsetof(UPolyEditCutFacesActivity, ActivityContext) == 88, "Offset mismatch for UPolyEditCutFacesActivity::ActivityContext");

// /Script/MeshModelingTools.PolyEditCutProperties
// Kind: Class; super: InteractiveToolPropertySet
class UPolyEditCutProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t orientation; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::uint8_t bSnapToVertices; // 0x006C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPolyEditCutProperties, orientation) == 104, "Offset mismatch for UPolyEditCutProperties::orientation");
static_assert(offsetof(UPolyEditCutProperties, bSnapToVertices) == 108, "Offset mismatch for UPolyEditCutProperties::bSnapToVertices");

// /Script/MeshModelingTools.PolyEditExtrudeActivity
// Kind: Class; super: InteractiveToolActivity
class UPolyEditExtrudeActivity
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* ExtrudeProperties; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* OffsetProperties; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* PushPullProperties; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* ExtrudeHeightMechanic; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* ActivityContext; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPolyEditExtrudeActivity, ExtrudeProperties) == 80, "Offset mismatch for UPolyEditExtrudeActivity::ExtrudeProperties");
static_assert(offsetof(UPolyEditExtrudeActivity, OffsetProperties) == 88, "Offset mismatch for UPolyEditExtrudeActivity::OffsetProperties");
static_assert(offsetof(UPolyEditExtrudeActivity, PushPullProperties) == 96, "Offset mismatch for UPolyEditExtrudeActivity::PushPullProperties");
static_assert(offsetof(UPolyEditExtrudeActivity, ExtrudeHeightMechanic) == 104, "Offset mismatch for UPolyEditExtrudeActivity::ExtrudeHeightMechanic");
static_assert(offsetof(UPolyEditExtrudeActivity, ActivityContext) == 112, "Offset mismatch for UPolyEditExtrudeActivity::ActivityContext");

// /Script/MeshModelingTools.PolyEditExtrudeEdgeActivity
// Kind: Class; super: InteractiveToolActivity
class UPolyEditExtrudeEdgeActivity
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Settings; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* ActivityContext; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* ExtrudeFrameProxy; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* ExtrudeFrameGizmo; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* SingleDirectionProxy; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* SingleDirectionGizmo; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* PreviewGeometry; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPolyEditExtrudeEdgeActivity, Settings) == 56, "Offset mismatch for UPolyEditExtrudeEdgeActivity::Settings");
static_assert(offsetof(UPolyEditExtrudeEdgeActivity, ActivityContext) == 64, "Offset mismatch for UPolyEditExtrudeEdgeActivity::ActivityContext");
static_assert(offsetof(UPolyEditExtrudeEdgeActivity, ExtrudeFrameProxy) == 72, "Offset mismatch for UPolyEditExtrudeEdgeActivity::ExtrudeFrameProxy");
static_assert(offsetof(UPolyEditExtrudeEdgeActivity, ExtrudeFrameGizmo) == 80, "Offset mismatch for UPolyEditExtrudeEdgeActivity::ExtrudeFrameGizmo");
static_assert(offsetof(UPolyEditExtrudeEdgeActivity, SingleDirectionProxy) == 88, "Offset mismatch for UPolyEditExtrudeEdgeActivity::SingleDirectionProxy");
static_assert(offsetof(UPolyEditExtrudeEdgeActivity, SingleDirectionGizmo) == 96, "Offset mismatch for UPolyEditExtrudeEdgeActivity::SingleDirectionGizmo");
static_assert(offsetof(UPolyEditExtrudeEdgeActivity, PreviewGeometry) == 104, "Offset mismatch for UPolyEditExtrudeEdgeActivity::PreviewGeometry");

// /Script/MeshModelingTools.PolyEditExtrudeEdgeActivityProperties
// Kind: Class; super: InteractiveToolPropertySet
class UPolyEditExtrudeEdgeActivityProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t DirectionMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::uint8_t DistanceMode; // 0x006C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x006D
    double Distance; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bUseUnselectedForFrames; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAdjustToExtrudeEvenly; // 0x0079 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPolyEditExtrudeEdgeActivityProperties, DirectionMode) == 104, "Offset mismatch for UPolyEditExtrudeEdgeActivityProperties::DirectionMode");
static_assert(offsetof(UPolyEditExtrudeEdgeActivityProperties, DistanceMode) == 108, "Offset mismatch for UPolyEditExtrudeEdgeActivityProperties::DistanceMode");
static_assert(offsetof(UPolyEditExtrudeEdgeActivityProperties, Distance) == 112, "Offset mismatch for UPolyEditExtrudeEdgeActivityProperties::Distance");
static_assert(offsetof(UPolyEditExtrudeEdgeActivityProperties, bUseUnselectedForFrames) == 120, "Offset mismatch for UPolyEditExtrudeEdgeActivityProperties::bUseUnselectedForFrames");
static_assert(offsetof(UPolyEditExtrudeEdgeActivityProperties, bAdjustToExtrudeEvenly) == 121, "Offset mismatch for UPolyEditExtrudeEdgeActivityProperties::bAdjustToExtrudeEvenly");

// /Script/MeshModelingTools.PolyEditExtrudeProperties
// Kind: Class; super: InteractiveToolPropertySet
class UPolyEditExtrudeProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t DistanceMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    double Distance; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t DirectionMode; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0079
    std::uint8_t Direction; // 0x007C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x007D
    double MaxDistanceScaleFactor; // 0x0080 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bShellsToSolids; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0089
    std::uint8_t MeasureDirection; // 0x008C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x008D
    std::uint8_t bUseColinearityForSettingBorderGroups; // 0x0090 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPolyEditExtrudeProperties, DistanceMode) == 104, "Offset mismatch for UPolyEditExtrudeProperties::DistanceMode");
static_assert(offsetof(UPolyEditExtrudeProperties, Distance) == 112, "Offset mismatch for UPolyEditExtrudeProperties::Distance");
static_assert(offsetof(UPolyEditExtrudeProperties, DirectionMode) == 120, "Offset mismatch for UPolyEditExtrudeProperties::DirectionMode");
static_assert(offsetof(UPolyEditExtrudeProperties, Direction) == 124, "Offset mismatch for UPolyEditExtrudeProperties::Direction");
static_assert(offsetof(UPolyEditExtrudeProperties, MaxDistanceScaleFactor) == 128, "Offset mismatch for UPolyEditExtrudeProperties::MaxDistanceScaleFactor");
static_assert(offsetof(UPolyEditExtrudeProperties, bShellsToSolids) == 136, "Offset mismatch for UPolyEditExtrudeProperties::bShellsToSolids");
static_assert(offsetof(UPolyEditExtrudeProperties, MeasureDirection) == 140, "Offset mismatch for UPolyEditExtrudeProperties::MeasureDirection");
static_assert(offsetof(UPolyEditExtrudeProperties, bUseColinearityForSettingBorderGroups) == 144, "Offset mismatch for UPolyEditExtrudeProperties::bUseColinearityForSettingBorderGroups");

// /Script/MeshModelingTools.PolyEditInsertEdgeActivity
// Kind: Class; super: InteractiveToolActivity
class UPolyEditInsertEdgeActivity
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Settings; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* ActivityContext; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPolyEditInsertEdgeActivity, Settings) == 72, "Offset mismatch for UPolyEditInsertEdgeActivity::Settings");
static_assert(offsetof(UPolyEditInsertEdgeActivity, ActivityContext) == 80, "Offset mismatch for UPolyEditInsertEdgeActivity::ActivityContext");

// /Script/MeshModelingTools.PolyEditInsertEdgeLoopActivity
// Kind: Class; super: InteractiveToolActivity
class UPolyEditInsertEdgeLoopActivity
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Settings; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* ActivityContext; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPolyEditInsertEdgeLoopActivity, Settings) == 72, "Offset mismatch for UPolyEditInsertEdgeLoopActivity::Settings");
static_assert(offsetof(UPolyEditInsertEdgeLoopActivity, ActivityContext) == 80, "Offset mismatch for UPolyEditInsertEdgeLoopActivity::ActivityContext");

// /Script/MeshModelingTools.PolyEditInsetOutsetActivity
// Kind: Class; super: InteractiveToolActivity
class UPolyEditInsetOutsetActivity
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* Settings; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0048
    void* EditPreview; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* CurveDistMechanic; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* ActivityContext; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPolyEditInsetOutsetActivity, Settings) == 64, "Offset mismatch for UPolyEditInsetOutsetActivity::Settings");
static_assert(offsetof(UPolyEditInsetOutsetActivity, EditPreview) == 80, "Offset mismatch for UPolyEditInsetOutsetActivity::EditPreview");
static_assert(offsetof(UPolyEditInsetOutsetActivity, CurveDistMechanic) == 88, "Offset mismatch for UPolyEditInsetOutsetActivity::CurveDistMechanic");
static_assert(offsetof(UPolyEditInsetOutsetActivity, ActivityContext) == 96, "Offset mismatch for UPolyEditInsetOutsetActivity::ActivityContext");

// /Script/MeshModelingTools.PolyEditInsetOutsetProperties
// Kind: Class; super: InteractiveToolPropertySet
class UPolyEditInsetOutsetProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    float Softness; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bBoundaryOnly; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x006D
    float AreaScale; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bReproject; // 0x0074 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutset; // 0x0075 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPolyEditInsetOutsetProperties, Softness) == 104, "Offset mismatch for UPolyEditInsetOutsetProperties::Softness");
static_assert(offsetof(UPolyEditInsetOutsetProperties, bBoundaryOnly) == 108, "Offset mismatch for UPolyEditInsetOutsetProperties::bBoundaryOnly");
static_assert(offsetof(UPolyEditInsetOutsetProperties, AreaScale) == 112, "Offset mismatch for UPolyEditInsetOutsetProperties::AreaScale");
static_assert(offsetof(UPolyEditInsetOutsetProperties, bReproject) == 116, "Offset mismatch for UPolyEditInsetOutsetProperties::bReproject");
static_assert(offsetof(UPolyEditInsetOutsetProperties, bOutset) == 117, "Offset mismatch for UPolyEditInsetOutsetProperties::bOutset");

// /Script/MeshModelingTools.PolyEditOffsetProperties
// Kind: Class; super: InteractiveToolPropertySet
class UPolyEditOffsetProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t DistanceMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    double Distance; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t DirectionMode; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0079
    double MaxDistanceScaleFactor; // 0x0080 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bShellsToSolids; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0089
    std::uint8_t MeasureDirection; // 0x008C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x3]; // 0x008D
    std::uint8_t bUseColinearityForSettingBorderGroups; // 0x0090 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPolyEditOffsetProperties, DistanceMode) == 104, "Offset mismatch for UPolyEditOffsetProperties::DistanceMode");
static_assert(offsetof(UPolyEditOffsetProperties, Distance) == 112, "Offset mismatch for UPolyEditOffsetProperties::Distance");
static_assert(offsetof(UPolyEditOffsetProperties, DirectionMode) == 120, "Offset mismatch for UPolyEditOffsetProperties::DirectionMode");
static_assert(offsetof(UPolyEditOffsetProperties, MaxDistanceScaleFactor) == 128, "Offset mismatch for UPolyEditOffsetProperties::MaxDistanceScaleFactor");
static_assert(offsetof(UPolyEditOffsetProperties, bShellsToSolids) == 136, "Offset mismatch for UPolyEditOffsetProperties::bShellsToSolids");
static_assert(offsetof(UPolyEditOffsetProperties, MeasureDirection) == 140, "Offset mismatch for UPolyEditOffsetProperties::MeasureDirection");
static_assert(offsetof(UPolyEditOffsetProperties, bUseColinearityForSettingBorderGroups) == 144, "Offset mismatch for UPolyEditOffsetProperties::bUseColinearityForSettingBorderGroups");

// /Script/MeshModelingTools.PolyEditPlanarProjectionUVActivity
// Kind: Class; super: InteractiveToolActivity
class UPolyEditPlanarProjectionUVActivity
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* SetUVProperties; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* EditPreview; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* SurfacePathMechanic; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* ActivityContext; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPolyEditPlanarProjectionUVActivity, SetUVProperties) == 64, "Offset mismatch for UPolyEditPlanarProjectionUVActivity::SetUVProperties");
static_assert(offsetof(UPolyEditPlanarProjectionUVActivity, EditPreview) == 72, "Offset mismatch for UPolyEditPlanarProjectionUVActivity::EditPreview");
static_assert(offsetof(UPolyEditPlanarProjectionUVActivity, SurfacePathMechanic) == 80, "Offset mismatch for UPolyEditPlanarProjectionUVActivity::SurfacePathMechanic");
static_assert(offsetof(UPolyEditPlanarProjectionUVActivity, ActivityContext) == 88, "Offset mismatch for UPolyEditPlanarProjectionUVActivity::ActivityContext");

// /Script/MeshModelingTools.PolyEditPushPullProperties
// Kind: Class; super: InteractiveToolPropertySet
class UPolyEditPushPullProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t DistanceMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    double Distance; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t DirectionMode; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0079
    std::uint8_t SingleDirection; // 0x007C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x007D
    double MaxDistanceScaleFactor; // 0x0080 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bShellsToSolids; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0089
    std::uint8_t MeasureDirection; // 0x008C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x008D
    std::uint8_t bUseColinearityForSettingBorderGroups; // 0x0090 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPolyEditPushPullProperties, DistanceMode) == 104, "Offset mismatch for UPolyEditPushPullProperties::DistanceMode");
static_assert(offsetof(UPolyEditPushPullProperties, Distance) == 112, "Offset mismatch for UPolyEditPushPullProperties::Distance");
static_assert(offsetof(UPolyEditPushPullProperties, DirectionMode) == 120, "Offset mismatch for UPolyEditPushPullProperties::DirectionMode");
static_assert(offsetof(UPolyEditPushPullProperties, SingleDirection) == 124, "Offset mismatch for UPolyEditPushPullProperties::SingleDirection");
static_assert(offsetof(UPolyEditPushPullProperties, MaxDistanceScaleFactor) == 128, "Offset mismatch for UPolyEditPushPullProperties::MaxDistanceScaleFactor");
static_assert(offsetof(UPolyEditPushPullProperties, bShellsToSolids) == 136, "Offset mismatch for UPolyEditPushPullProperties::bShellsToSolids");
static_assert(offsetof(UPolyEditPushPullProperties, MeasureDirection) == 140, "Offset mismatch for UPolyEditPushPullProperties::MeasureDirection");
static_assert(offsetof(UPolyEditPushPullProperties, bUseColinearityForSettingBorderGroups) == 144, "Offset mismatch for UPolyEditPushPullProperties::bUseColinearityForSettingBorderGroups");

// /Script/MeshModelingTools.PolyEditSetUVProperties
// Kind: Class; super: InteractiveToolPropertySet
class UPolyEditSetUVProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bShowMaterial; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPolyEditSetUVProperties, bShowMaterial) == 104, "Offset mismatch for UPolyEditSetUVProperties::bShowMaterial");

// /Script/MeshModelingTools.PolyEditTopologyProperties
// Kind: Class; super: EditMeshPolygonsToolActionPropertySet
class UPolyEditTopologyProperties
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t bAddExtraCorners; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0071
    double ExtraCornerAngleThresholdDegrees; // 0x0078 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UPolyEditTopologyProperties, bAddExtraCorners) == 112, "Offset mismatch for UPolyEditTopologyProperties::bAddExtraCorners");
static_assert(offsetof(UPolyEditTopologyProperties, ExtraCornerAngleThresholdDegrees) == 120, "Offset mismatch for UPolyEditTopologyProperties::ExtraCornerAngleThresholdDegrees");

// /Script/MeshModelingTools.ProceduralArrowToolProperties
// Kind: Class; super: ProceduralShapeToolProperties
class UProceduralArrowToolProperties
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    float ShaftRadius; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float ShaftHeight; // 0x007C (Size: 0x4, Type: FloatProperty)
    float HeadRadius; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float HeadHeight; // 0x0084 (Size: 0x4, Type: FloatProperty)
    std::int32_t RadialSlices; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::int32_t HeightSubdivisions; // 0x008C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UProceduralArrowToolProperties, ShaftRadius) == 120, "Offset mismatch for UProceduralArrowToolProperties::ShaftRadius");
static_assert(offsetof(UProceduralArrowToolProperties, ShaftHeight) == 124, "Offset mismatch for UProceduralArrowToolProperties::ShaftHeight");
static_assert(offsetof(UProceduralArrowToolProperties, HeadRadius) == 128, "Offset mismatch for UProceduralArrowToolProperties::HeadRadius");
static_assert(offsetof(UProceduralArrowToolProperties, HeadHeight) == 132, "Offset mismatch for UProceduralArrowToolProperties::HeadHeight");
static_assert(offsetof(UProceduralArrowToolProperties, RadialSlices) == 136, "Offset mismatch for UProceduralArrowToolProperties::RadialSlices");
static_assert(offsetof(UProceduralArrowToolProperties, HeightSubdivisions) == 140, "Offset mismatch for UProceduralArrowToolProperties::HeightSubdivisions");

// /Script/MeshModelingTools.ProceduralBoxToolProperties
// Kind: Class; super: ProceduralShapeToolProperties
class UProceduralBoxToolProperties
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    float Width; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float Depth; // 0x007C (Size: 0x4, Type: FloatProperty)
    float Height; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::int32_t WidthSubdivisions; // 0x0084 (Size: 0x4, Type: IntProperty)
    std::int32_t DepthSubdivisions; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::int32_t HeightSubdivisions; // 0x008C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UProceduralBoxToolProperties, Width) == 120, "Offset mismatch for UProceduralBoxToolProperties::Width");
static_assert(offsetof(UProceduralBoxToolProperties, Depth) == 124, "Offset mismatch for UProceduralBoxToolProperties::Depth");
static_assert(offsetof(UProceduralBoxToolProperties, Height) == 128, "Offset mismatch for UProceduralBoxToolProperties::Height");
static_assert(offsetof(UProceduralBoxToolProperties, WidthSubdivisions) == 132, "Offset mismatch for UProceduralBoxToolProperties::WidthSubdivisions");
static_assert(offsetof(UProceduralBoxToolProperties, DepthSubdivisions) == 136, "Offset mismatch for UProceduralBoxToolProperties::DepthSubdivisions");
static_assert(offsetof(UProceduralBoxToolProperties, HeightSubdivisions) == 140, "Offset mismatch for UProceduralBoxToolProperties::HeightSubdivisions");

// /Script/MeshModelingTools.ProceduralCapsuleToolProperties
// Kind: Class; super: ProceduralShapeToolProperties
class UProceduralCapsuleToolProperties
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    float Radius; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float CylinderLength; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::int32_t HemisphereSlices; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::int32_t CylinderSlices; // 0x0084 (Size: 0x4, Type: IntProperty)
    std::int32_t CylinderSubdivisions; // 0x0088 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UProceduralCapsuleToolProperties, Radius) == 120, "Offset mismatch for UProceduralCapsuleToolProperties::Radius");
static_assert(offsetof(UProceduralCapsuleToolProperties, CylinderLength) == 124, "Offset mismatch for UProceduralCapsuleToolProperties::CylinderLength");
static_assert(offsetof(UProceduralCapsuleToolProperties, HemisphereSlices) == 128, "Offset mismatch for UProceduralCapsuleToolProperties::HemisphereSlices");
static_assert(offsetof(UProceduralCapsuleToolProperties, CylinderSlices) == 132, "Offset mismatch for UProceduralCapsuleToolProperties::CylinderSlices");
static_assert(offsetof(UProceduralCapsuleToolProperties, CylinderSubdivisions) == 136, "Offset mismatch for UProceduralCapsuleToolProperties::CylinderSubdivisions");

// /Script/MeshModelingTools.ProceduralConeToolProperties
// Kind: Class; super: ProceduralShapeToolProperties
class UProceduralConeToolProperties
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    float Radius; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float Height; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::int32_t RadialSlices; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::int32_t HeightSubdivisions; // 0x0084 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UProceduralConeToolProperties, Radius) == 120, "Offset mismatch for UProceduralConeToolProperties::Radius");
static_assert(offsetof(UProceduralConeToolProperties, Height) == 124, "Offset mismatch for UProceduralConeToolProperties::Height");
static_assert(offsetof(UProceduralConeToolProperties, RadialSlices) == 128, "Offset mismatch for UProceduralConeToolProperties::RadialSlices");
static_assert(offsetof(UProceduralConeToolProperties, HeightSubdivisions) == 132, "Offset mismatch for UProceduralConeToolProperties::HeightSubdivisions");

// /Script/MeshModelingTools.ProceduralCylinderToolProperties
// Kind: Class; super: ProceduralShapeToolProperties
class UProceduralCylinderToolProperties
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    float Radius; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float Height; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::int32_t RadialSlices; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::int32_t HeightSubdivisions; // 0x0084 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UProceduralCylinderToolProperties, Radius) == 120, "Offset mismatch for UProceduralCylinderToolProperties::Radius");
static_assert(offsetof(UProceduralCylinderToolProperties, Height) == 124, "Offset mismatch for UProceduralCylinderToolProperties::Height");
static_assert(offsetof(UProceduralCylinderToolProperties, RadialSlices) == 128, "Offset mismatch for UProceduralCylinderToolProperties::RadialSlices");
static_assert(offsetof(UProceduralCylinderToolProperties, HeightSubdivisions) == 132, "Offset mismatch for UProceduralCylinderToolProperties::HeightSubdivisions");

// /Script/MeshModelingTools.ProceduralDiscToolProperties
// Kind: Class; super: ProceduralShapeToolProperties
class UProceduralDiscToolProperties
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t DiscType; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    float Radius; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::int32_t RadialSlices; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::int32_t RadialSubdivisions; // 0x0084 (Size: 0x4, Type: IntProperty)
    float HoleRadius; // 0x0088 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UProceduralDiscToolProperties, DiscType) == 120, "Offset mismatch for UProceduralDiscToolProperties::DiscType");
static_assert(offsetof(UProceduralDiscToolProperties, Radius) == 124, "Offset mismatch for UProceduralDiscToolProperties::Radius");
static_assert(offsetof(UProceduralDiscToolProperties, RadialSlices) == 128, "Offset mismatch for UProceduralDiscToolProperties::RadialSlices");
static_assert(offsetof(UProceduralDiscToolProperties, RadialSubdivisions) == 132, "Offset mismatch for UProceduralDiscToolProperties::RadialSubdivisions");
static_assert(offsetof(UProceduralDiscToolProperties, HoleRadius) == 136, "Offset mismatch for UProceduralDiscToolProperties::HoleRadius");

// /Script/MeshModelingTools.ProceduralRectangleToolProperties
// Kind: Class; super: ProceduralShapeToolProperties
class UProceduralRectangleToolProperties
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t RectangleType; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    float Width; // 0x007C (Size: 0x4, Type: FloatProperty)
    float Depth; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::int32_t WidthSubdivisions; // 0x0084 (Size: 0x4, Type: IntProperty)
    std::int32_t DepthSubdivisions; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::uint8_t bMaintainDimension; // 0x008C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x008D
    float CornerRadius; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::int32_t CornerSlices; // 0x0094 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UProceduralRectangleToolProperties, RectangleType) == 120, "Offset mismatch for UProceduralRectangleToolProperties::RectangleType");
static_assert(offsetof(UProceduralRectangleToolProperties, Width) == 124, "Offset mismatch for UProceduralRectangleToolProperties::Width");
static_assert(offsetof(UProceduralRectangleToolProperties, Depth) == 128, "Offset mismatch for UProceduralRectangleToolProperties::Depth");
static_assert(offsetof(UProceduralRectangleToolProperties, WidthSubdivisions) == 132, "Offset mismatch for UProceduralRectangleToolProperties::WidthSubdivisions");
static_assert(offsetof(UProceduralRectangleToolProperties, DepthSubdivisions) == 136, "Offset mismatch for UProceduralRectangleToolProperties::DepthSubdivisions");
static_assert(offsetof(UProceduralRectangleToolProperties, bMaintainDimension) == 140, "Offset mismatch for UProceduralRectangleToolProperties::bMaintainDimension");
static_assert(offsetof(UProceduralRectangleToolProperties, CornerRadius) == 144, "Offset mismatch for UProceduralRectangleToolProperties::CornerRadius");
static_assert(offsetof(UProceduralRectangleToolProperties, CornerSlices) == 148, "Offset mismatch for UProceduralRectangleToolProperties::CornerSlices");

// /Script/MeshModelingTools.ProceduralShapeToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UProceduralShapeToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t PolygroupMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TargetSurface; // 0x0069 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PivotLocation; // 0x006A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x006B
    float Rotation; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAlignToNormal; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowGizmo; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowGizmoOptions; // 0x0072 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UProceduralShapeToolProperties, PolygroupMode) == 104, "Offset mismatch for UProceduralShapeToolProperties::PolygroupMode");
static_assert(offsetof(UProceduralShapeToolProperties, TargetSurface) == 105, "Offset mismatch for UProceduralShapeToolProperties::TargetSurface");
static_assert(offsetof(UProceduralShapeToolProperties, PivotLocation) == 106, "Offset mismatch for UProceduralShapeToolProperties::PivotLocation");
static_assert(offsetof(UProceduralShapeToolProperties, Rotation) == 108, "Offset mismatch for UProceduralShapeToolProperties::Rotation");
static_assert(offsetof(UProceduralShapeToolProperties, bAlignToNormal) == 112, "Offset mismatch for UProceduralShapeToolProperties::bAlignToNormal");
static_assert(offsetof(UProceduralShapeToolProperties, bShowGizmo) == 113, "Offset mismatch for UProceduralShapeToolProperties::bShowGizmo");
static_assert(offsetof(UProceduralShapeToolProperties, bShowGizmoOptions) == 114, "Offset mismatch for UProceduralShapeToolProperties::bShowGizmoOptions");

// /Script/MeshModelingTools.ProceduralSphereToolProperties
// Kind: Class; super: ProceduralShapeToolProperties
class UProceduralSphereToolProperties
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    float Radius; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SubdivisionType; // 0x007C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x007D
    std::int32_t Subdivisions; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::int32_t HorizontalSlices; // 0x0084 (Size: 0x4, Type: IntProperty)
    std::int32_t VerticalSlices; // 0x0088 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UProceduralSphereToolProperties, Radius) == 120, "Offset mismatch for UProceduralSphereToolProperties::Radius");
static_assert(offsetof(UProceduralSphereToolProperties, SubdivisionType) == 124, "Offset mismatch for UProceduralSphereToolProperties::SubdivisionType");
static_assert(offsetof(UProceduralSphereToolProperties, Subdivisions) == 128, "Offset mismatch for UProceduralSphereToolProperties::Subdivisions");
static_assert(offsetof(UProceduralSphereToolProperties, HorizontalSlices) == 132, "Offset mismatch for UProceduralSphereToolProperties::HorizontalSlices");
static_assert(offsetof(UProceduralSphereToolProperties, VerticalSlices) == 136, "Offset mismatch for UProceduralSphereToolProperties::VerticalSlices");

// /Script/MeshModelingTools.ProceduralStairsToolProperties
// Kind: Class; super: ProceduralShapeToolProperties
class UProceduralStairsToolProperties
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t StairsType; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    std::int32_t NumSteps; // 0x007C (Size: 0x4, Type: IntProperty)
    float StepWidth; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float StepHeight; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float StepDepth; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float CurveAngle; // 0x008C (Size: 0x4, Type: FloatProperty)
    float SpiralAngle; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float InnerRadius; // 0x0094 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UProceduralStairsToolProperties, StairsType) == 120, "Offset mismatch for UProceduralStairsToolProperties::StairsType");
static_assert(offsetof(UProceduralStairsToolProperties, NumSteps) == 124, "Offset mismatch for UProceduralStairsToolProperties::NumSteps");
static_assert(offsetof(UProceduralStairsToolProperties, StepWidth) == 128, "Offset mismatch for UProceduralStairsToolProperties::StepWidth");
static_assert(offsetof(UProceduralStairsToolProperties, StepHeight) == 132, "Offset mismatch for UProceduralStairsToolProperties::StepHeight");
static_assert(offsetof(UProceduralStairsToolProperties, StepDepth) == 136, "Offset mismatch for UProceduralStairsToolProperties::StepDepth");
static_assert(offsetof(UProceduralStairsToolProperties, CurveAngle) == 140, "Offset mismatch for UProceduralStairsToolProperties::CurveAngle");
static_assert(offsetof(UProceduralStairsToolProperties, SpiralAngle) == 144, "Offset mismatch for UProceduralStairsToolProperties::SpiralAngle");
static_assert(offsetof(UProceduralStairsToolProperties, InnerRadius) == 148, "Offset mismatch for UProceduralStairsToolProperties::InnerRadius");

// /Script/MeshModelingTools.ProceduralTorusToolProperties
// Kind: Class; super: ProceduralShapeToolProperties
class UProceduralTorusToolProperties
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    float MajorRadius; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float MinorRadius; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::int32_t MajorSlices; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::int32_t MinorSlices; // 0x0084 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UProceduralTorusToolProperties, MajorRadius) == 120, "Offset mismatch for UProceduralTorusToolProperties::MajorRadius");
static_assert(offsetof(UProceduralTorusToolProperties, MinorRadius) == 124, "Offset mismatch for UProceduralTorusToolProperties::MinorRadius");
static_assert(offsetof(UProceduralTorusToolProperties, MajorSlices) == 128, "Offset mismatch for UProceduralTorusToolProperties::MajorSlices");
static_assert(offsetof(UProceduralTorusToolProperties, MinorSlices) == 132, "Offset mismatch for UProceduralTorusToolProperties::MinorSlices");

// /Script/MeshModelingTools.ProjectToTargetTool
// Kind: Class; super: RemeshMeshTool
class UProjectToTargetTool
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* BasicProperties; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* WeightMapProperties; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* MeshStatisticsProperties; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* Preview; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* MeshElementsDisplay; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UProjectToTargetTool, BasicProperties) == 216, "Offset mismatch for UProjectToTargetTool::BasicProperties");
static_assert(offsetof(UProjectToTargetTool, WeightMapProperties) == 224, "Offset mismatch for UProjectToTargetTool::WeightMapProperties");
static_assert(offsetof(UProjectToTargetTool, MeshStatisticsProperties) == 232, "Offset mismatch for UProjectToTargetTool::MeshStatisticsProperties");
static_assert(offsetof(UProjectToTargetTool, Preview) == 240, "Offset mismatch for UProjectToTargetTool::Preview");
static_assert(offsetof(UProjectToTargetTool, MeshElementsDisplay) == 248, "Offset mismatch for UProjectToTargetTool::MeshElementsDisplay");

// /Script/MeshModelingTools.ProjectToTargetToolBuilder
// Kind: Class; super: MultiSelectionMeshEditingToolBuilder
class UProjectToTargetToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.ProjectToTargetToolProperties
// Kind: Class; super: RemeshMeshToolProperties
class UProjectToTargetToolProperties
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    std::uint8_t bWorldSpace; // 0x00A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bParallel; // 0x00A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x00A2
    std::int32_t FaceProjectionPassesPerRemeshIteration; // 0x00A4 (Size: 0x4, Type: IntProperty)
    float SurfaceProjectionSpeed; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float NormalAlignmentSpeed; // 0x00AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSmoothInFillAreas; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00B1
    float FillAreaDistanceMultiplier; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    float FillAreaSmoothMultiplier; // 0x00B8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UProjectToTargetToolProperties, bWorldSpace) == 160, "Offset mismatch for UProjectToTargetToolProperties::bWorldSpace");
static_assert(offsetof(UProjectToTargetToolProperties, bParallel) == 161, "Offset mismatch for UProjectToTargetToolProperties::bParallel");
static_assert(offsetof(UProjectToTargetToolProperties, FaceProjectionPassesPerRemeshIteration) == 164, "Offset mismatch for UProjectToTargetToolProperties::FaceProjectionPassesPerRemeshIteration");
static_assert(offsetof(UProjectToTargetToolProperties, SurfaceProjectionSpeed) == 168, "Offset mismatch for UProjectToTargetToolProperties::SurfaceProjectionSpeed");
static_assert(offsetof(UProjectToTargetToolProperties, NormalAlignmentSpeed) == 172, "Offset mismatch for UProjectToTargetToolProperties::NormalAlignmentSpeed");
static_assert(offsetof(UProjectToTargetToolProperties, bSmoothInFillAreas) == 176, "Offset mismatch for UProjectToTargetToolProperties::bSmoothInFillAreas");
static_assert(offsetof(UProjectToTargetToolProperties, FillAreaDistanceMultiplier) == 180, "Offset mismatch for UProjectToTargetToolProperties::FillAreaDistanceMultiplier");
static_assert(offsetof(UProjectToTargetToolProperties, FillAreaSmoothMultiplier) == 184, "Offset mismatch for UProjectToTargetToolProperties::FillAreaSmoothMultiplier");

// /Script/MeshModelingTools.PullKelvinletBrushOpProps
// Kind: Class; super: BaseKelvinletBrushOpProps
class UPullKelvinletBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    float Falloff; // 0x0080 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPullKelvinletBrushOpProps, Falloff) == 128, "Offset mismatch for UPullKelvinletBrushOpProps::Falloff");

// /Script/MeshModelingTools.RecomputeUVsTool
// Kind: Class; super: SingleSelectionMeshEditingTool
class URecomputeUVsTool
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* UVChannelProperties; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* Settings; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* PolygroupLayerProperties; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* MaterialSettings; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bCreateUVLayoutViewOnSetup; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F1
    void* UVLayoutView; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* RecomputeUVsOpFactory; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    void* Preview; // 0x0108 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URecomputeUVsTool, UVChannelProperties) == 208, "Offset mismatch for URecomputeUVsTool::UVChannelProperties");
static_assert(offsetof(URecomputeUVsTool, Settings) == 216, "Offset mismatch for URecomputeUVsTool::Settings");
static_assert(offsetof(URecomputeUVsTool, PolygroupLayerProperties) == 224, "Offset mismatch for URecomputeUVsTool::PolygroupLayerProperties");
static_assert(offsetof(URecomputeUVsTool, MaterialSettings) == 232, "Offset mismatch for URecomputeUVsTool::MaterialSettings");
static_assert(offsetof(URecomputeUVsTool, bCreateUVLayoutViewOnSetup) == 240, "Offset mismatch for URecomputeUVsTool::bCreateUVLayoutViewOnSetup");
static_assert(offsetof(URecomputeUVsTool, UVLayoutView) == 248, "Offset mismatch for URecomputeUVsTool::UVLayoutView");
static_assert(offsetof(URecomputeUVsTool, RecomputeUVsOpFactory) == 256, "Offset mismatch for URecomputeUVsTool::RecomputeUVsOpFactory");
static_assert(offsetof(URecomputeUVsTool, Preview) == 264, "Offset mismatch for URecomputeUVsTool::Preview");

// /Script/MeshModelingTools.RecomputeUVsToolBuilder
// Kind: Class; super: SingleSelectionMeshEditingToolBuilder
class URecomputeUVsToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.RemeshMeshTool
// Kind: Class; super: MultiSelectionMeshEditingTool
class URemeshMeshTool
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* BasicProperties; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* WeightMapProperties; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* MeshStatisticsProperties; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* Preview; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* MeshElementsDisplay; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URemeshMeshTool, BasicProperties) == 216, "Offset mismatch for URemeshMeshTool::BasicProperties");
static_assert(offsetof(URemeshMeshTool, WeightMapProperties) == 224, "Offset mismatch for URemeshMeshTool::WeightMapProperties");
static_assert(offsetof(URemeshMeshTool, MeshStatisticsProperties) == 232, "Offset mismatch for URemeshMeshTool::MeshStatisticsProperties");
static_assert(offsetof(URemeshMeshTool, Preview) == 240, "Offset mismatch for URemeshMeshTool::Preview");
static_assert(offsetof(URemeshMeshTool, MeshElementsDisplay) == 248, "Offset mismatch for URemeshMeshTool::MeshElementsDisplay");

// /Script/MeshModelingTools.RemeshMeshToolBuilder
// Kind: Class; super: MultiSelectionMeshEditingToolBuilder
class URemeshMeshToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.RemeshMeshToolProperties
// Kind: Class; super: RemeshProperties
class URemeshMeshToolProperties
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::int32_t TargetTriangleCount; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t SmoothingType; // 0x007C (Size: 0x1, Type: EnumProperty)
    std::uint8_t bDiscardAttributes; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowGroupColors; // 0x007E (Size: 0x1, Type: BoolProperty)
    std::uint8_t RemeshType; // 0x007F (Size: 0x1, Type: EnumProperty)
    std::int32_t RemeshIterations; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxRemeshIterations; // 0x0084 (Size: 0x4, Type: IntProperty)
    std::int32_t ExtraProjectionIterations; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseTargetEdgeLength; // 0x008C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x008D
    float TargetEdgeLength; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bReproject; // 0x0094 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReprojectConstraints; // 0x0095 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0096
    float BoundaryCornerAngleThreshold; // 0x0098 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(URemeshMeshToolProperties, TargetTriangleCount) == 120, "Offset mismatch for URemeshMeshToolProperties::TargetTriangleCount");
static_assert(offsetof(URemeshMeshToolProperties, SmoothingType) == 124, "Offset mismatch for URemeshMeshToolProperties::SmoothingType");
static_assert(offsetof(URemeshMeshToolProperties, bDiscardAttributes) == 125, "Offset mismatch for URemeshMeshToolProperties::bDiscardAttributes");
static_assert(offsetof(URemeshMeshToolProperties, bShowGroupColors) == 126, "Offset mismatch for URemeshMeshToolProperties::bShowGroupColors");
static_assert(offsetof(URemeshMeshToolProperties, RemeshType) == 127, "Offset mismatch for URemeshMeshToolProperties::RemeshType");
static_assert(offsetof(URemeshMeshToolProperties, RemeshIterations) == 128, "Offset mismatch for URemeshMeshToolProperties::RemeshIterations");
static_assert(offsetof(URemeshMeshToolProperties, MaxRemeshIterations) == 132, "Offset mismatch for URemeshMeshToolProperties::MaxRemeshIterations");
static_assert(offsetof(URemeshMeshToolProperties, ExtraProjectionIterations) == 136, "Offset mismatch for URemeshMeshToolProperties::ExtraProjectionIterations");
static_assert(offsetof(URemeshMeshToolProperties, bUseTargetEdgeLength) == 140, "Offset mismatch for URemeshMeshToolProperties::bUseTargetEdgeLength");
static_assert(offsetof(URemeshMeshToolProperties, TargetEdgeLength) == 144, "Offset mismatch for URemeshMeshToolProperties::TargetEdgeLength");
static_assert(offsetof(URemeshMeshToolProperties, bReproject) == 148, "Offset mismatch for URemeshMeshToolProperties::bReproject");
static_assert(offsetof(URemeshMeshToolProperties, bReprojectConstraints) == 149, "Offset mismatch for URemeshMeshToolProperties::bReprojectConstraints");
static_assert(offsetof(URemeshMeshToolProperties, BoundaryCornerAngleThreshold) == 152, "Offset mismatch for URemeshMeshToolProperties::BoundaryCornerAngleThreshold");

// /Script/MeshModelingTools.RemeshProperties
// Kind: Class; super: MeshConstraintProperties
class URemeshProperties
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float SmoothingStrength; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFlips; // 0x0074 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSplits; // 0x0075 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCollapses; // 0x0076 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(URemeshProperties, SmoothingStrength) == 112, "Offset mismatch for URemeshProperties::SmoothingStrength");
static_assert(offsetof(URemeshProperties, bFlips) == 116, "Offset mismatch for URemeshProperties::bFlips");
static_assert(offsetof(URemeshProperties, bSplits) == 117, "Offset mismatch for URemeshProperties::bSplits");
static_assert(offsetof(URemeshProperties, bCollapses) == 118, "Offset mismatch for URemeshProperties::bCollapses");

// /Script/MeshModelingTools.RemoveOccludedTrianglesAdvancedProperties
// Kind: Class; super: InteractiveToolPropertySet
class URemoveOccludedTrianglesAdvancedProperties
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(URemoveOccludedTrianglesAdvancedProperties, CachedPropertiesMap) == 56, "Offset mismatch for URemoveOccludedTrianglesAdvancedProperties::CachedPropertiesMap");
static_assert(offsetof(URemoveOccludedTrianglesAdvancedProperties, bIsPropertySetEnabled) == 72, "Offset mismatch for URemoveOccludedTrianglesAdvancedProperties::bIsPropertySetEnabled");

// /Script/MeshModelingTools.RemoveOccludedTrianglesOperatorFactory
// Kind: Class; super: Object
class URemoveOccludedTrianglesOperatorFactory
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Tool; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URemoveOccludedTrianglesOperatorFactory, Tool) == 48, "Offset mismatch for URemoveOccludedTrianglesOperatorFactory::Tool");

// /Script/MeshModelingTools.RemoveOccludedTrianglesTool
// Kind: Class; super: MultiSelectionMeshEditingTool
class URemoveOccludedTrianglesTool
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* BasicProperties; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* PolygroupLayersProperties; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* AdvancedProperties; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Previews; // 0x00E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PreviewCopies; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(URemoveOccludedTrianglesTool, BasicProperties) == 208, "Offset mismatch for URemoveOccludedTrianglesTool::BasicProperties");
static_assert(offsetof(URemoveOccludedTrianglesTool, PolygroupLayersProperties) == 216, "Offset mismatch for URemoveOccludedTrianglesTool::PolygroupLayersProperties");
static_assert(offsetof(URemoveOccludedTrianglesTool, AdvancedProperties) == 224, "Offset mismatch for URemoveOccludedTrianglesTool::AdvancedProperties");
static_assert(offsetof(URemoveOccludedTrianglesTool, Previews) == 232, "Offset mismatch for URemoveOccludedTrianglesTool::Previews");
static_assert(offsetof(URemoveOccludedTrianglesTool, PreviewCopies) == 248, "Offset mismatch for URemoveOccludedTrianglesTool::PreviewCopies");

// /Script/MeshModelingTools.RemoveOccludedTrianglesToolBuilder
// Kind: Class; super: MultiSelectionMeshEditingToolBuilder
class URemoveOccludedTrianglesToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.RemoveOccludedTrianglesToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class URemoveOccludedTrianglesToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t OcclusionTestMethod; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TriangleSampling; // 0x0069 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x006A
    double WindingIsoValue; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    std::int32_t AddRandomRays; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::int32_t AddTriangleSamples; // 0x007C (Size: 0x4, Type: IntProperty)
    std::uint8_t bOnlySelfOcclude; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0081
    std::int32_t ShrinkRemoval; // 0x0084 (Size: 0x4, Type: IntProperty)
    double MinAreaIsland; // 0x0088 (Size: 0x8, Type: DoubleProperty)
    std::int32_t MinTriCountIsland; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Action; // 0x0094 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(URemoveOccludedTrianglesToolProperties, OcclusionTestMethod) == 104, "Offset mismatch for URemoveOccludedTrianglesToolProperties::OcclusionTestMethod");
static_assert(offsetof(URemoveOccludedTrianglesToolProperties, TriangleSampling) == 105, "Offset mismatch for URemoveOccludedTrianglesToolProperties::TriangleSampling");
static_assert(offsetof(URemoveOccludedTrianglesToolProperties, WindingIsoValue) == 112, "Offset mismatch for URemoveOccludedTrianglesToolProperties::WindingIsoValue");
static_assert(offsetof(URemoveOccludedTrianglesToolProperties, AddRandomRays) == 120, "Offset mismatch for URemoveOccludedTrianglesToolProperties::AddRandomRays");
static_assert(offsetof(URemoveOccludedTrianglesToolProperties, AddTriangleSamples) == 124, "Offset mismatch for URemoveOccludedTrianglesToolProperties::AddTriangleSamples");
static_assert(offsetof(URemoveOccludedTrianglesToolProperties, bOnlySelfOcclude) == 128, "Offset mismatch for URemoveOccludedTrianglesToolProperties::bOnlySelfOcclude");
static_assert(offsetof(URemoveOccludedTrianglesToolProperties, ShrinkRemoval) == 132, "Offset mismatch for URemoveOccludedTrianglesToolProperties::ShrinkRemoval");
static_assert(offsetof(URemoveOccludedTrianglesToolProperties, MinAreaIsland) == 136, "Offset mismatch for URemoveOccludedTrianglesToolProperties::MinAreaIsland");
static_assert(offsetof(URemoveOccludedTrianglesToolProperties, MinTriCountIsland) == 144, "Offset mismatch for URemoveOccludedTrianglesToolProperties::MinTriCountIsland");
static_assert(offsetof(URemoveOccludedTrianglesToolProperties, Action) == 148, "Offset mismatch for URemoveOccludedTrianglesToolProperties::Action");

// /Script/MeshModelingTools.RetriangulateGeometrySelectionCommand
// Kind: Class; super: GeometrySelectionEditCommand
class URetriangulateGeometrySelectionCommand
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.RevolveOperatorFactory
// Kind: Class; super: Object
class URevolveOperatorFactory
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* RevolveTool; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URevolveOperatorFactory, RevolveTool) == 48, "Offset mismatch for URevolveOperatorFactory::RevolveTool");

// /Script/MeshModelingTools.RevolveProperties
// Kind: Class; super: InteractiveToolPropertySet
class URevolveProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    double RevolveDegreesClamped; // 0x0068 (Size: 0x8, Type: DoubleProperty)
    double RevolveDegrees; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    double RevolveDegreesOffset; // 0x0078 (Size: 0x8, Type: DoubleProperty)
    double StepsMaxDegrees; // 0x0080 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bExplicitSteps; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0089
    std::int32_t NumExplicitSteps; // 0x008C (Size: 0x4, Type: IntProperty)
    double HeightOffsetPerDegree; // 0x0090 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bReverseRevolutionDirection; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlipMesh; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSharpNormals; // 0x009A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x5]; // 0x009B
    double SharpNormalsDegreeThreshold; // 0x00A0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bPathAtMidpointOfStep; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PolygroupMode; // 0x00A9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t QuadSplitMode; // 0x00AA (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(URevolveProperties, RevolveDegreesClamped) == 104, "Offset mismatch for URevolveProperties::RevolveDegreesClamped");
static_assert(offsetof(URevolveProperties, RevolveDegrees) == 112, "Offset mismatch for URevolveProperties::RevolveDegrees");
static_assert(offsetof(URevolveProperties, RevolveDegreesOffset) == 120, "Offset mismatch for URevolveProperties::RevolveDegreesOffset");
static_assert(offsetof(URevolveProperties, StepsMaxDegrees) == 128, "Offset mismatch for URevolveProperties::StepsMaxDegrees");
static_assert(offsetof(URevolveProperties, bExplicitSteps) == 136, "Offset mismatch for URevolveProperties::bExplicitSteps");
static_assert(offsetof(URevolveProperties, NumExplicitSteps) == 140, "Offset mismatch for URevolveProperties::NumExplicitSteps");
static_assert(offsetof(URevolveProperties, HeightOffsetPerDegree) == 144, "Offset mismatch for URevolveProperties::HeightOffsetPerDegree");
static_assert(offsetof(URevolveProperties, bReverseRevolutionDirection) == 152, "Offset mismatch for URevolveProperties::bReverseRevolutionDirection");
static_assert(offsetof(URevolveProperties, bFlipMesh) == 153, "Offset mismatch for URevolveProperties::bFlipMesh");
static_assert(offsetof(URevolveProperties, bSharpNormals) == 154, "Offset mismatch for URevolveProperties::bSharpNormals");
static_assert(offsetof(URevolveProperties, SharpNormalsDegreeThreshold) == 160, "Offset mismatch for URevolveProperties::SharpNormalsDegreeThreshold");
static_assert(offsetof(URevolveProperties, bPathAtMidpointOfStep) == 168, "Offset mismatch for URevolveProperties::bPathAtMidpointOfStep");
static_assert(offsetof(URevolveProperties, PolygroupMode) == 169, "Offset mismatch for URevolveProperties::PolygroupMode");
static_assert(offsetof(URevolveProperties, QuadSplitMode) == 170, "Offset mismatch for URevolveProperties::QuadSplitMode");

// /Script/MeshModelingTools.RevolveToolProperties
// Kind: Class; super: RevolveProperties
class URevolveToolProperties
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    std::uint8_t CapFillMode; // 0x00D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bClosePathToAxis; // 0x00D9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00DA
    std::uint8_t DrawPlaneOrigin[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t DrawPlaneOrientation[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bEnableSnapping; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowedToEditDrawPlane; // 0x0111 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(URevolveToolProperties, CapFillMode) == 216, "Offset mismatch for URevolveToolProperties::CapFillMode");
static_assert(offsetof(URevolveToolProperties, bClosePathToAxis) == 217, "Offset mismatch for URevolveToolProperties::bClosePathToAxis");
static_assert(offsetof(URevolveToolProperties, DrawPlaneOrigin) == 224, "Offset mismatch for URevolveToolProperties::DrawPlaneOrigin");
static_assert(offsetof(URevolveToolProperties, DrawPlaneOrientation) == 248, "Offset mismatch for URevolveToolProperties::DrawPlaneOrientation");
static_assert(offsetof(URevolveToolProperties, bEnableSnapping) == 272, "Offset mismatch for URevolveToolProperties::bEnableSnapping");
static_assert(offsetof(URevolveToolProperties, bAllowedToEditDrawPlane) == 273, "Offset mismatch for URevolveToolProperties::bAllowedToEditDrawPlane");

// /Script/MeshModelingTools.ScaleKelvinletBrushOpProps
// Kind: Class; super: BaseKelvinletBrushOpProps
class UScaleKelvinletBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    float Strength; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x0084 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UScaleKelvinletBrushOpProps, Strength) == 128, "Offset mismatch for UScaleKelvinletBrushOpProps::Strength");
static_assert(offsetof(UScaleKelvinletBrushOpProps, Falloff) == 132, "Offset mismatch for UScaleKelvinletBrushOpProps::Falloff");

// /Script/MeshModelingTools.SculptBrushProperties
// Kind: Class; super: InteractiveToolPropertySet
class USculptBrushProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t StrokeType; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::uint8_t BrushSize[0x18]; // 0x006C (Size: 0x18, Type: StructProperty)
    float BrushFalloffAmount; // 0x0084 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShowFalloff; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0089
    float Depth; // 0x008C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHitBackFaces; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0091
    float FlowRate; // 0x0094 (Size: 0x4, Type: FloatProperty)
    float RayDensity; // 0x0098 (Size: 0x4, Type: FloatProperty)
    float Spacing; // 0x009C (Size: 0x4, Type: FloatProperty)
    float Lazyness; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShowPerBrushProps; // 0x00A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowLazyness; // 0x00A5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowFlowRate; // 0x00A6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowSpacing; // 0x00A7 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USculptBrushProperties, StrokeType) == 104, "Offset mismatch for USculptBrushProperties::StrokeType");
static_assert(offsetof(USculptBrushProperties, BrushSize) == 108, "Offset mismatch for USculptBrushProperties::BrushSize");
static_assert(offsetof(USculptBrushProperties, BrushFalloffAmount) == 132, "Offset mismatch for USculptBrushProperties::BrushFalloffAmount");
static_assert(offsetof(USculptBrushProperties, bShowFalloff) == 136, "Offset mismatch for USculptBrushProperties::bShowFalloff");
static_assert(offsetof(USculptBrushProperties, Depth) == 140, "Offset mismatch for USculptBrushProperties::Depth");
static_assert(offsetof(USculptBrushProperties, bHitBackFaces) == 144, "Offset mismatch for USculptBrushProperties::bHitBackFaces");
static_assert(offsetof(USculptBrushProperties, FlowRate) == 148, "Offset mismatch for USculptBrushProperties::FlowRate");
static_assert(offsetof(USculptBrushProperties, RayDensity) == 152, "Offset mismatch for USculptBrushProperties::RayDensity");
static_assert(offsetof(USculptBrushProperties, Spacing) == 156, "Offset mismatch for USculptBrushProperties::Spacing");
static_assert(offsetof(USculptBrushProperties, Lazyness) == 160, "Offset mismatch for USculptBrushProperties::Lazyness");
static_assert(offsetof(USculptBrushProperties, bShowPerBrushProps) == 164, "Offset mismatch for USculptBrushProperties::bShowPerBrushProps");
static_assert(offsetof(USculptBrushProperties, bShowLazyness) == 165, "Offset mismatch for USculptBrushProperties::bShowLazyness");
static_assert(offsetof(USculptBrushProperties, bShowFlowRate) == 166, "Offset mismatch for USculptBrushProperties::bShowFlowRate");
static_assert(offsetof(USculptBrushProperties, bShowSpacing) == 167, "Offset mismatch for USculptBrushProperties::bShowSpacing");

// /Script/MeshModelingTools.SculptMaxBrushOpProps
// Kind: Class; super: MeshSculptBrushOpProps
class USculptMaxBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float Strength; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float MaxHeight; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseFixedHeight; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x007D
    float FixedHeight; // 0x0080 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USculptMaxBrushOpProps, Strength) == 112, "Offset mismatch for USculptMaxBrushOpProps::Strength");
static_assert(offsetof(USculptMaxBrushOpProps, Falloff) == 116, "Offset mismatch for USculptMaxBrushOpProps::Falloff");
static_assert(offsetof(USculptMaxBrushOpProps, MaxHeight) == 120, "Offset mismatch for USculptMaxBrushOpProps::MaxHeight");
static_assert(offsetof(USculptMaxBrushOpProps, bUseFixedHeight) == 124, "Offset mismatch for USculptMaxBrushOpProps::bUseFixedHeight");
static_assert(offsetof(USculptMaxBrushOpProps, FixedHeight) == 128, "Offset mismatch for USculptMaxBrushOpProps::FixedHeight");

// /Script/MeshModelingTools.SculptMaxBrushProperties
// Kind: Class; super: InteractiveToolPropertySet
class USculptMaxBrushProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    float MaxHeight; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFreezeCurrentHeight; // 0x006C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USculptMaxBrushProperties, MaxHeight) == 104, "Offset mismatch for USculptMaxBrushProperties::MaxHeight");
static_assert(offsetof(USculptMaxBrushProperties, bFreezeCurrentHeight) == 108, "Offset mismatch for USculptMaxBrushProperties::bFreezeCurrentHeight");

// /Script/MeshModelingTools.SecondarySmoothBrushOpProps
// Kind: Class; super: BaseSmoothBrushOpProps
class USecondarySmoothBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float Strength; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::int32_t Iterations; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bPreserveUVFlow; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFavorPolyGroupEdges; // 0x007D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USecondarySmoothBrushOpProps, Strength) == 112, "Offset mismatch for USecondarySmoothBrushOpProps::Strength");
static_assert(offsetof(USecondarySmoothBrushOpProps, Falloff) == 116, "Offset mismatch for USecondarySmoothBrushOpProps::Falloff");
static_assert(offsetof(USecondarySmoothBrushOpProps, Iterations) == 120, "Offset mismatch for USecondarySmoothBrushOpProps::Iterations");
static_assert(offsetof(USecondarySmoothBrushOpProps, bPreserveUVFlow) == 124, "Offset mismatch for USecondarySmoothBrushOpProps::bPreserveUVFlow");
static_assert(offsetof(USecondarySmoothBrushOpProps, bFavorPolyGroupEdges) == 125, "Offset mismatch for USecondarySmoothBrushOpProps::bFavorPolyGroupEdges");

// /Script/MeshModelingTools.SelectiveTessellationProperties
// Kind: Class; super: InteractiveToolPropertySet
class USelectiveTessellationProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t SelectionType; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::uint8_t ActiveMaterial[0x4]; // 0x006C (Size: 0x4, Type: NameProperty)
    TArray<void*> MaterialIDList; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USelectiveTessellationProperties, SelectionType) == 104, "Offset mismatch for USelectiveTessellationProperties::SelectionType");
static_assert(offsetof(USelectiveTessellationProperties, ActiveMaterial) == 108, "Offset mismatch for USelectiveTessellationProperties::ActiveMaterial");
static_assert(offsetof(USelectiveTessellationProperties, MaterialIDList) == 112, "Offset mismatch for USelectiveTessellationProperties::MaterialIDList");

// /Script/MeshModelingTools.SharpPullKelvinletBrushOpProps
// Kind: Class; super: BaseKelvinletBrushOpProps
class USharpPullKelvinletBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    float Falloff; // 0x0080 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USharpPullKelvinletBrushOpProps, Falloff) == 128, "Offset mismatch for USharpPullKelvinletBrushOpProps::Falloff");

// /Script/MeshModelingTools.SmoothBrushOpProps
// Kind: Class; super: BaseSmoothBrushOpProps
class USmoothBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float Strength; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::int32_t Iterations; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t bPreserveUVFlow; // 0x007C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFavorPolyGroupEdges; // 0x007D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USmoothBrushOpProps, Strength) == 112, "Offset mismatch for USmoothBrushOpProps::Strength");
static_assert(offsetof(USmoothBrushOpProps, Falloff) == 116, "Offset mismatch for USmoothBrushOpProps::Falloff");
static_assert(offsetof(USmoothBrushOpProps, Iterations) == 120, "Offset mismatch for USmoothBrushOpProps::Iterations");
static_assert(offsetof(USmoothBrushOpProps, bPreserveUVFlow) == 124, "Offset mismatch for USmoothBrushOpProps::bPreserveUVFlow");
static_assert(offsetof(USmoothBrushOpProps, bFavorPolyGroupEdges) == 125, "Offset mismatch for USmoothBrushOpProps::bFavorPolyGroupEdges");

// /Script/MeshModelingTools.SmoothFillBrushOpProps
// Kind: Class; super: BaseSmoothBrushOpProps
class USmoothFillBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float Strength; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bPreserveUVFlow; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USmoothFillBrushOpProps, Strength) == 112, "Offset mismatch for USmoothFillBrushOpProps::Strength");
static_assert(offsetof(USmoothFillBrushOpProps, Falloff) == 116, "Offset mismatch for USmoothFillBrushOpProps::Falloff");
static_assert(offsetof(USmoothFillBrushOpProps, bPreserveUVFlow) == 120, "Offset mismatch for USmoothFillBrushOpProps::bPreserveUVFlow");

// /Script/MeshModelingTools.SmoothHoleFillProperties
// Kind: Class; super: InteractiveToolPropertySet
class USmoothHoleFillProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bConstrainToHoleInterior; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::int32_t RemeshingExteriorRegionWidth; // 0x006C (Size: 0x4, Type: IntProperty)
    std::int32_t SmoothingExteriorRegionWidth; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::int32_t SmoothingInteriorRegionWidth; // 0x0074 (Size: 0x4, Type: IntProperty)
    float InteriorSmoothness; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x007C
    double FillDensityScalar; // 0x0080 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bProjectDuringRemesh; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USmoothHoleFillProperties, bConstrainToHoleInterior) == 104, "Offset mismatch for USmoothHoleFillProperties::bConstrainToHoleInterior");
static_assert(offsetof(USmoothHoleFillProperties, RemeshingExteriorRegionWidth) == 108, "Offset mismatch for USmoothHoleFillProperties::RemeshingExteriorRegionWidth");
static_assert(offsetof(USmoothHoleFillProperties, SmoothingExteriorRegionWidth) == 112, "Offset mismatch for USmoothHoleFillProperties::SmoothingExteriorRegionWidth");
static_assert(offsetof(USmoothHoleFillProperties, SmoothingInteriorRegionWidth) == 116, "Offset mismatch for USmoothHoleFillProperties::SmoothingInteriorRegionWidth");
static_assert(offsetof(USmoothHoleFillProperties, InteriorSmoothness) == 120, "Offset mismatch for USmoothHoleFillProperties::InteriorSmoothness");
static_assert(offsetof(USmoothHoleFillProperties, FillDensityScalar) == 128, "Offset mismatch for USmoothHoleFillProperties::FillDensityScalar");
static_assert(offsetof(USmoothHoleFillProperties, bProjectDuringRemesh) == 136, "Offset mismatch for USmoothHoleFillProperties::bProjectDuringRemesh");

// /Script/MeshModelingTools.SmoothMeshTool
// Kind: Class; super: BaseMeshProcessingTool
class USmoothMeshTool
{
public:
    std::uint8_t Pad_0000[0x468]; // 0x0000
    void* SmoothProperties; // 0x0468 (Size: 0x8, Type: ObjectProperty)
    void* IterativeProperties; // 0x0470 (Size: 0x8, Type: ObjectProperty)
    void* DiffusionProperties; // 0x0478 (Size: 0x8, Type: ObjectProperty)
    void* ImplicitProperties; // 0x0480 (Size: 0x8, Type: ObjectProperty)
    void* WeightMapProperties; // 0x0488 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USmoothMeshTool, SmoothProperties) == 1128, "Offset mismatch for USmoothMeshTool::SmoothProperties");
static_assert(offsetof(USmoothMeshTool, IterativeProperties) == 1136, "Offset mismatch for USmoothMeshTool::IterativeProperties");
static_assert(offsetof(USmoothMeshTool, DiffusionProperties) == 1144, "Offset mismatch for USmoothMeshTool::DiffusionProperties");
static_assert(offsetof(USmoothMeshTool, ImplicitProperties) == 1152, "Offset mismatch for USmoothMeshTool::ImplicitProperties");
static_assert(offsetof(USmoothMeshTool, WeightMapProperties) == 1160, "Offset mismatch for USmoothMeshTool::WeightMapProperties");

// /Script/MeshModelingTools.SmoothMeshToolBuilder
// Kind: Class; super: BaseMeshProcessingToolBuilder
class USmoothMeshToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.SmoothMeshToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class USmoothMeshToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t SmoothingType; // 0x0068 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USmoothMeshToolProperties, SmoothingType) == 104, "Offset mismatch for USmoothMeshToolProperties::SmoothingType");

// /Script/MeshModelingTools.SmoothWeightMapSetProperties
// Kind: Class; super: WeightMapSetProperties
class USmoothWeightMapSetProperties
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    float MinSmoothMultiplier; // 0x0088 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USmoothWeightMapSetProperties, MinSmoothMultiplier) == 136, "Offset mismatch for USmoothWeightMapSetProperties::MinSmoothMultiplier");

// /Script/MeshModelingTools.SpaceDeformerOperatorFactory
// Kind: Class; super: Object
class USpaceDeformerOperatorFactory
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* SpaceDeformerTool; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpaceDeformerOperatorFactory, SpaceDeformerTool) == 48, "Offset mismatch for USpaceDeformerOperatorFactory::SpaceDeformerTool");

// /Script/MeshModelingTools.StandardSculptBrushOpProps
// Kind: Class; super: MeshSculptBrushOpProps
class UStandardSculptBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float Strength; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x0074 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UStandardSculptBrushOpProps, Strength) == 112, "Offset mismatch for UStandardSculptBrushOpProps::Strength");
static_assert(offsetof(UStandardSculptBrushOpProps, Falloff) == 116, "Offset mismatch for UStandardSculptBrushOpProps::Falloff");

// /Script/MeshModelingTools.TrimMeshesToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UTrimMeshesToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t WhichMesh; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TrimSide; // 0x0069 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x006A
    float WindingThreshold; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bShowTrimmingMesh; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0071
    float OpacityOfTrimmingMesh; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ColorOfTrimmingMesh[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTrimMeshesToolProperties, WhichMesh) == 104, "Offset mismatch for UTrimMeshesToolProperties::WhichMesh");
static_assert(offsetof(UTrimMeshesToolProperties, TrimSide) == 105, "Offset mismatch for UTrimMeshesToolProperties::TrimSide");
static_assert(offsetof(UTrimMeshesToolProperties, WindingThreshold) == 108, "Offset mismatch for UTrimMeshesToolProperties::WindingThreshold");
static_assert(offsetof(UTrimMeshesToolProperties, bShowTrimmingMesh) == 112, "Offset mismatch for UTrimMeshesToolProperties::bShowTrimmingMesh");
static_assert(offsetof(UTrimMeshesToolProperties, OpacityOfTrimmingMesh) == 116, "Offset mismatch for UTrimMeshesToolProperties::OpacityOfTrimmingMesh");
static_assert(offsetof(UTrimMeshesToolProperties, ColorOfTrimmingMesh) == 120, "Offset mismatch for UTrimMeshesToolProperties::ColorOfTrimmingMesh");

// /Script/MeshModelingTools.TwistKelvinletBrushOpProps
// Kind: Class; super: BaseKelvinletBrushOpProps
class UTwistKelvinletBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    float Strength; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x0084 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UTwistKelvinletBrushOpProps, Strength) == 128, "Offset mismatch for UTwistKelvinletBrushOpProps::Strength");
static_assert(offsetof(UTwistKelvinletBrushOpProps, Falloff) == 132, "Offset mismatch for UTwistKelvinletBrushOpProps::Falloff");

// /Script/MeshModelingTools.UVLayoutTool
// Kind: Class; super: MultiSelectionMeshEditingTool
class UUVLayoutTool
{
public:
    std::uint8_t Pad_0000[0xD8]; // 0x0000
    void* UVChannelProperties; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* BasicProperties; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* MaterialSettings; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Previews; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Factories; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x70]; // 0x0110
    void* UVLayoutView; // 0x0180 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUVLayoutTool, UVChannelProperties) == 216, "Offset mismatch for UUVLayoutTool::UVChannelProperties");
static_assert(offsetof(UUVLayoutTool, BasicProperties) == 224, "Offset mismatch for UUVLayoutTool::BasicProperties");
static_assert(offsetof(UUVLayoutTool, MaterialSettings) == 232, "Offset mismatch for UUVLayoutTool::MaterialSettings");
static_assert(offsetof(UUVLayoutTool, Previews) == 240, "Offset mismatch for UUVLayoutTool::Previews");
static_assert(offsetof(UUVLayoutTool, Factories) == 256, "Offset mismatch for UUVLayoutTool::Factories");
static_assert(offsetof(UUVLayoutTool, UVLayoutView) == 384, "Offset mismatch for UUVLayoutTool::UVLayoutView");

// /Script/MeshModelingTools.UVLayoutToolBuilder
// Kind: Class; super: MultiSelectionMeshEditingToolBuilder
class UUVLayoutToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.UVProjectionOperatorFactory
// Kind: Class; super: Object
class UUVProjectionOperatorFactory
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Tool; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUVProjectionOperatorFactory, Tool) == 48, "Offset mismatch for UUVProjectionOperatorFactory::Tool");

// /Script/MeshModelingTools.UVProjectionTool
// Kind: Class; super: SingleTargetWithSelectionTool
class UUVProjectionTool
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    void* UVChannelProperties; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    void* BasicProperties; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    void* EditActions; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* MaterialSettings; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* Preview; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* CheckerMaterial; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    void* TransformGizmo; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    void* TransformProxy; // 0x0140 (Size: 0x8, Type: ObjectProperty)
    void* OperatorFactory; // 0x0148 (Size: 0x8, Type: ObjectProperty)
    void* EdgeRenderer; // 0x0150 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x330]; // 0x0158
    void* ClickToSetPlaneBehavior; // 0x0488 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUVProjectionTool, UVChannelProperties) == 264, "Offset mismatch for UUVProjectionTool::UVChannelProperties");
static_assert(offsetof(UUVProjectionTool, BasicProperties) == 272, "Offset mismatch for UUVProjectionTool::BasicProperties");
static_assert(offsetof(UUVProjectionTool, EditActions) == 280, "Offset mismatch for UUVProjectionTool::EditActions");
static_assert(offsetof(UUVProjectionTool, MaterialSettings) == 288, "Offset mismatch for UUVProjectionTool::MaterialSettings");
static_assert(offsetof(UUVProjectionTool, Preview) == 296, "Offset mismatch for UUVProjectionTool::Preview");
static_assert(offsetof(UUVProjectionTool, CheckerMaterial) == 304, "Offset mismatch for UUVProjectionTool::CheckerMaterial");
static_assert(offsetof(UUVProjectionTool, TransformGizmo) == 312, "Offset mismatch for UUVProjectionTool::TransformGizmo");
static_assert(offsetof(UUVProjectionTool, TransformProxy) == 320, "Offset mismatch for UUVProjectionTool::TransformProxy");
static_assert(offsetof(UUVProjectionTool, OperatorFactory) == 328, "Offset mismatch for UUVProjectionTool::OperatorFactory");
static_assert(offsetof(UUVProjectionTool, EdgeRenderer) == 336, "Offset mismatch for UUVProjectionTool::EdgeRenderer");
static_assert(offsetof(UUVProjectionTool, ClickToSetPlaneBehavior) == 1160, "Offset mismatch for UUVProjectionTool::ClickToSetPlaneBehavior");

// /Script/MeshModelingTools.UVProjectionToolBuilder
// Kind: Class; super: SingleTargetWithSelectionToolBuilder
class UUVProjectionToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.UVProjectionToolEditActions
// Kind: Class; super: InteractiveToolPropertySet
class UUVProjectionToolEditActions
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UUVProjectionToolEditActions, CachedPropertiesMap) == 56, "Offset mismatch for UUVProjectionToolEditActions::CachedPropertiesMap");
static_assert(offsetof(UUVProjectionToolEditActions, bIsPropertySetEnabled) == 72, "Offset mismatch for UUVProjectionToolEditActions::bIsPropertySetEnabled");

// /Script/MeshModelingTools.UVProjectionToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UUVProjectionToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t ProjectionType; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    std::uint8_t Dimensions[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t bProportionalDimensions; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0089
    std::uint8_t Initialization; // 0x008C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x008D
    float CylinderSplitAngle; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float ExpMapNormalBlending; // 0x0094 (Size: 0x4, Type: FloatProperty)
    std::int32_t ExpMapSmoothingSteps; // 0x0098 (Size: 0x4, Type: IntProperty)
    float ExpMapSmoothingAlpha; // 0x009C (Size: 0x4, Type: FloatProperty)
    float Rotation; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0004[0x4]; // 0x00A4
    std::uint8_t Scale[0x10]; // 0x00A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t Translation[0x10]; // 0x00B8 (Size: 0x10, Type: StructProperty)
    std::uint8_t SavedDimensions[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bSavedProportionalDimensions; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0xF]; // 0x00E1
    std::uint8_t SavedTransform[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UUVProjectionToolProperties, ProjectionType) == 104, "Offset mismatch for UUVProjectionToolProperties::ProjectionType");
static_assert(offsetof(UUVProjectionToolProperties, Dimensions) == 112, "Offset mismatch for UUVProjectionToolProperties::Dimensions");
static_assert(offsetof(UUVProjectionToolProperties, bProportionalDimensions) == 136, "Offset mismatch for UUVProjectionToolProperties::bProportionalDimensions");
static_assert(offsetof(UUVProjectionToolProperties, Initialization) == 140, "Offset mismatch for UUVProjectionToolProperties::Initialization");
static_assert(offsetof(UUVProjectionToolProperties, CylinderSplitAngle) == 144, "Offset mismatch for UUVProjectionToolProperties::CylinderSplitAngle");
static_assert(offsetof(UUVProjectionToolProperties, ExpMapNormalBlending) == 148, "Offset mismatch for UUVProjectionToolProperties::ExpMapNormalBlending");
static_assert(offsetof(UUVProjectionToolProperties, ExpMapSmoothingSteps) == 152, "Offset mismatch for UUVProjectionToolProperties::ExpMapSmoothingSteps");
static_assert(offsetof(UUVProjectionToolProperties, ExpMapSmoothingAlpha) == 156, "Offset mismatch for UUVProjectionToolProperties::ExpMapSmoothingAlpha");
static_assert(offsetof(UUVProjectionToolProperties, Rotation) == 160, "Offset mismatch for UUVProjectionToolProperties::Rotation");
static_assert(offsetof(UUVProjectionToolProperties, Scale) == 168, "Offset mismatch for UUVProjectionToolProperties::Scale");
static_assert(offsetof(UUVProjectionToolProperties, Translation) == 184, "Offset mismatch for UUVProjectionToolProperties::Translation");
static_assert(offsetof(UUVProjectionToolProperties, SavedDimensions) == 200, "Offset mismatch for UUVProjectionToolProperties::SavedDimensions");
static_assert(offsetof(UUVProjectionToolProperties, bSavedProportionalDimensions) == 224, "Offset mismatch for UUVProjectionToolProperties::bSavedProportionalDimensions");
static_assert(offsetof(UUVProjectionToolProperties, SavedTransform) == 240, "Offset mismatch for UUVProjectionToolProperties::SavedTransform");

// /Script/MeshModelingTools.VertexBrushAlphaProperties
// Kind: Class; super: InteractiveToolPropertySet
class UVertexBrushAlphaProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* Alpha; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    float RotationAngle; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRandomize; // 0x0074 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0075
    float RandomRange; // 0x0078 (Size: 0x4, Type: FloatProperty)
    TWeakObjectPtr<void> Tool; // 0x007C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UVertexBrushAlphaProperties, Alpha) == 104, "Offset mismatch for UVertexBrushAlphaProperties::Alpha");
static_assert(offsetof(UVertexBrushAlphaProperties, RotationAngle) == 112, "Offset mismatch for UVertexBrushAlphaProperties::RotationAngle");
static_assert(offsetof(UVertexBrushAlphaProperties, bRandomize) == 116, "Offset mismatch for UVertexBrushAlphaProperties::bRandomize");
static_assert(offsetof(UVertexBrushAlphaProperties, RandomRange) == 120, "Offset mismatch for UVertexBrushAlphaProperties::RandomRange");
static_assert(offsetof(UVertexBrushAlphaProperties, Tool) == 124, "Offset mismatch for UVertexBrushAlphaProperties::Tool");

// /Script/MeshModelingTools.VertexBrushSculptProperties
// Kind: Class; super: InteractiveToolPropertySet
class UVertexBrushSculptProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t PrimaryBrushType; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    std::int32_t PrimaryBrushID; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t PrimaryFalloffType; // 0x0070 (Size: 0x1, Type: EnumProperty)
    std::uint8_t BrushFilter; // 0x0071 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bFreezeTarget; // 0x0072 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLockBoundaries; // 0x0073 (Size: 0x1, Type: BoolProperty)
    float StampOpacity; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCanFreezeTarget; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0079
    TWeakObjectPtr<void> Tool; // 0x007C (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UVertexBrushSculptProperties, PrimaryBrushType) == 104, "Offset mismatch for UVertexBrushSculptProperties::PrimaryBrushType");
static_assert(offsetof(UVertexBrushSculptProperties, PrimaryBrushID) == 108, "Offset mismatch for UVertexBrushSculptProperties::PrimaryBrushID");
static_assert(offsetof(UVertexBrushSculptProperties, PrimaryFalloffType) == 112, "Offset mismatch for UVertexBrushSculptProperties::PrimaryFalloffType");
static_assert(offsetof(UVertexBrushSculptProperties, BrushFilter) == 113, "Offset mismatch for UVertexBrushSculptProperties::BrushFilter");
static_assert(offsetof(UVertexBrushSculptProperties, bFreezeTarget) == 114, "Offset mismatch for UVertexBrushSculptProperties::bFreezeTarget");
static_assert(offsetof(UVertexBrushSculptProperties, bLockBoundaries) == 115, "Offset mismatch for UVertexBrushSculptProperties::bLockBoundaries");
static_assert(offsetof(UVertexBrushSculptProperties, StampOpacity) == 116, "Offset mismatch for UVertexBrushSculptProperties::StampOpacity");
static_assert(offsetof(UVertexBrushSculptProperties, bCanFreezeTarget) == 120, "Offset mismatch for UVertexBrushSculptProperties::bCanFreezeTarget");
static_assert(offsetof(UVertexBrushSculptProperties, Tool) == 124, "Offset mismatch for UVertexBrushSculptProperties::Tool");

// /Script/MeshModelingTools.VertexColorBaseBrushOpProps
// Kind: Class; super: MeshSculptBrushOpProps
class UVertexColorBaseBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float Strength; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BlendMode; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    std::uint8_t bApplyFalloff; // 0x007C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UVertexColorBaseBrushOpProps, Strength) == 112, "Offset mismatch for UVertexColorBaseBrushOpProps::Strength");
static_assert(offsetof(UVertexColorBaseBrushOpProps, Falloff) == 116, "Offset mismatch for UVertexColorBaseBrushOpProps::Falloff");
static_assert(offsetof(UVertexColorBaseBrushOpProps, BlendMode) == 120, "Offset mismatch for UVertexColorBaseBrushOpProps::BlendMode");
static_assert(offsetof(UVertexColorBaseBrushOpProps, bApplyFalloff) == 124, "Offset mismatch for UVertexColorBaseBrushOpProps::bApplyFalloff");

// /Script/MeshModelingTools.VertexColorPaintBrushOpProps
// Kind: Class; super: VertexColorBaseBrushOpProps
class UVertexColorPaintBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t Color[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVertexColorPaintBrushOpProps, Color) == 128, "Offset mismatch for UVertexColorPaintBrushOpProps::Color");

// /Script/MeshModelingTools.VertexColorSmoothBrushOpProps
// Kind: Class; super: VertexColorBaseBrushOpProps
class UVertexColorSmoothBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float Strength; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BlendMode; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    std::uint8_t bApplyFalloff; // 0x007C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UVertexColorSmoothBrushOpProps, Strength) == 112, "Offset mismatch for UVertexColorSmoothBrushOpProps::Strength");
static_assert(offsetof(UVertexColorSmoothBrushOpProps, Falloff) == 116, "Offset mismatch for UVertexColorSmoothBrushOpProps::Falloff");
static_assert(offsetof(UVertexColorSmoothBrushOpProps, BlendMode) == 120, "Offset mismatch for UVertexColorSmoothBrushOpProps::BlendMode");
static_assert(offsetof(UVertexColorSmoothBrushOpProps, bApplyFalloff) == 124, "Offset mismatch for UVertexColorSmoothBrushOpProps::bApplyFalloff");

// /Script/MeshModelingTools.VertexColorSoftenBrushOpProps
// Kind: Class; super: VertexColorBaseBrushOpProps
class UVertexColorSoftenBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float Strength; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BlendMode; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    std::uint8_t bApplyFalloff; // 0x007C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UVertexColorSoftenBrushOpProps, Strength) == 112, "Offset mismatch for UVertexColorSoftenBrushOpProps::Strength");
static_assert(offsetof(UVertexColorSoftenBrushOpProps, Falloff) == 116, "Offset mismatch for UVertexColorSoftenBrushOpProps::Falloff");
static_assert(offsetof(UVertexColorSoftenBrushOpProps, BlendMode) == 120, "Offset mismatch for UVertexColorSoftenBrushOpProps::BlendMode");
static_assert(offsetof(UVertexColorSoftenBrushOpProps, bApplyFalloff) == 124, "Offset mismatch for UVertexColorSoftenBrushOpProps::bApplyFalloff");

// /Script/MeshModelingTools.VertexPaintBasicProperties
// Kind: Class; super: InteractiveToolPropertySet
class UVertexPaintBasicProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t PrimaryBrushType; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SubToolType; // 0x0069 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x006A
    double Strength; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t PaintColor[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsPaintPressureEnabled; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BlendMode; // 0x0089 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SecondaryActionType; // 0x008A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x1]; // 0x008B
    std::uint8_t EraseColor[0x10]; // 0x008C (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsErasePressureEnabled; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x009D
    float SmoothStrength; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ChannelFilter[0x4]; // 0x00A4 (Size: 0x4, Type: StructProperty)
    std::uint8_t bHardEdges; // 0x00A8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UVertexPaintBasicProperties, PrimaryBrushType) == 104, "Offset mismatch for UVertexPaintBasicProperties::PrimaryBrushType");
static_assert(offsetof(UVertexPaintBasicProperties, SubToolType) == 105, "Offset mismatch for UVertexPaintBasicProperties::SubToolType");
static_assert(offsetof(UVertexPaintBasicProperties, Strength) == 112, "Offset mismatch for UVertexPaintBasicProperties::Strength");
static_assert(offsetof(UVertexPaintBasicProperties, PaintColor) == 120, "Offset mismatch for UVertexPaintBasicProperties::PaintColor");
static_assert(offsetof(UVertexPaintBasicProperties, bIsPaintPressureEnabled) == 136, "Offset mismatch for UVertexPaintBasicProperties::bIsPaintPressureEnabled");
static_assert(offsetof(UVertexPaintBasicProperties, BlendMode) == 137, "Offset mismatch for UVertexPaintBasicProperties::BlendMode");
static_assert(offsetof(UVertexPaintBasicProperties, SecondaryActionType) == 138, "Offset mismatch for UVertexPaintBasicProperties::SecondaryActionType");
static_assert(offsetof(UVertexPaintBasicProperties, EraseColor) == 140, "Offset mismatch for UVertexPaintBasicProperties::EraseColor");
static_assert(offsetof(UVertexPaintBasicProperties, bIsErasePressureEnabled) == 156, "Offset mismatch for UVertexPaintBasicProperties::bIsErasePressureEnabled");
static_assert(offsetof(UVertexPaintBasicProperties, SmoothStrength) == 160, "Offset mismatch for UVertexPaintBasicProperties::SmoothStrength");
static_assert(offsetof(UVertexPaintBasicProperties, ChannelFilter) == 164, "Offset mismatch for UVertexPaintBasicProperties::ChannelFilter");
static_assert(offsetof(UVertexPaintBasicProperties, bHardEdges) == 168, "Offset mismatch for UVertexPaintBasicProperties::bHardEdges");

// /Script/MeshModelingTools.VertexPaintBrushFilterProperties
// Kind: Class; super: InteractiveToolPropertySet
class UVertexPaintBrushFilterProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t BrushAreaMode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0069
    float AngleThreshold; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUVSeams; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNormalSeams; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t VisibilityFilter; // 0x0072 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsolateGeometrySelection; // 0x0073 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bToolHasSelection; // 0x0074 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0075
    std::int32_t MinTriVertCount; // 0x0078 (Size: 0x4, Type: IntProperty)
    std::uint8_t MaterialMode; // 0x007C (Size: 0x1, Type: EnumProperty)
    std::uint8_t bShowHitColor; // 0x007D (Size: 0x1, Type: BoolProperty)
    std::uint8_t CurrentSubToolType; // 0x007E (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UVertexPaintBrushFilterProperties, BrushAreaMode) == 104, "Offset mismatch for UVertexPaintBrushFilterProperties::BrushAreaMode");
static_assert(offsetof(UVertexPaintBrushFilterProperties, AngleThreshold) == 108, "Offset mismatch for UVertexPaintBrushFilterProperties::AngleThreshold");
static_assert(offsetof(UVertexPaintBrushFilterProperties, bUVSeams) == 112, "Offset mismatch for UVertexPaintBrushFilterProperties::bUVSeams");
static_assert(offsetof(UVertexPaintBrushFilterProperties, bNormalSeams) == 113, "Offset mismatch for UVertexPaintBrushFilterProperties::bNormalSeams");
static_assert(offsetof(UVertexPaintBrushFilterProperties, VisibilityFilter) == 114, "Offset mismatch for UVertexPaintBrushFilterProperties::VisibilityFilter");
static_assert(offsetof(UVertexPaintBrushFilterProperties, bIsolateGeometrySelection) == 115, "Offset mismatch for UVertexPaintBrushFilterProperties::bIsolateGeometrySelection");
static_assert(offsetof(UVertexPaintBrushFilterProperties, bToolHasSelection) == 116, "Offset mismatch for UVertexPaintBrushFilterProperties::bToolHasSelection");
static_assert(offsetof(UVertexPaintBrushFilterProperties, MinTriVertCount) == 120, "Offset mismatch for UVertexPaintBrushFilterProperties::MinTriVertCount");
static_assert(offsetof(UVertexPaintBrushFilterProperties, MaterialMode) == 124, "Offset mismatch for UVertexPaintBrushFilterProperties::MaterialMode");
static_assert(offsetof(UVertexPaintBrushFilterProperties, bShowHitColor) == 125, "Offset mismatch for UVertexPaintBrushFilterProperties::bShowHitColor");
static_assert(offsetof(UVertexPaintBrushFilterProperties, CurrentSubToolType) == 126, "Offset mismatch for UVertexPaintBrushFilterProperties::CurrentSubToolType");

// /Script/MeshModelingTools.ViewAlignedPlaneBrushOpProps
// Kind: Class; super: BasePlaneBrushOpProps
class UViewAlignedPlaneBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float Strength; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float Depth; // 0x0078 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WhichSide; // 0x007C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UViewAlignedPlaneBrushOpProps, Strength) == 112, "Offset mismatch for UViewAlignedPlaneBrushOpProps::Strength");
static_assert(offsetof(UViewAlignedPlaneBrushOpProps, Falloff) == 116, "Offset mismatch for UViewAlignedPlaneBrushOpProps::Falloff");
static_assert(offsetof(UViewAlignedPlaneBrushOpProps, Depth) == 120, "Offset mismatch for UViewAlignedPlaneBrushOpProps::Depth");
static_assert(offsetof(UViewAlignedPlaneBrushOpProps, WhichSide) == 124, "Offset mismatch for UViewAlignedPlaneBrushOpProps::WhichSide");

// /Script/MeshModelingTools.ViewAlignedSculptBrushOpProps
// Kind: Class; super: MeshSculptBrushOpProps
class UViewAlignedSculptBrushOpProps
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float Strength; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float Falloff; // 0x0074 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UViewAlignedSculptBrushOpProps, Strength) == 112, "Offset mismatch for UViewAlignedSculptBrushOpProps::Strength");
static_assert(offsetof(UViewAlignedSculptBrushOpProps, Falloff) == 116, "Offset mismatch for UViewAlignedSculptBrushOpProps::Falloff");

// /Script/MeshModelingTools.WeldMeshEdgesOperatorFactory
// Kind: Class; super: Object
class UWeldMeshEdgesOperatorFactory
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* WeldMeshEdgesTool; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWeldMeshEdgesOperatorFactory, WeldMeshEdgesTool) == 48, "Offset mismatch for UWeldMeshEdgesOperatorFactory::WeldMeshEdgesTool");

// /Script/MeshModelingTools.WeldMeshEdgesTool
// Kind: Class; super: SingleTargetWithSelectionTool
class UWeldMeshEdgesTool
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    void* Settings; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    void* PreviewCompute; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    void* MeshElementsDisplay; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* OperatorFactory; // 0x0120 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWeldMeshEdgesTool, Settings) == 264, "Offset mismatch for UWeldMeshEdgesTool::Settings");
static_assert(offsetof(UWeldMeshEdgesTool, PreviewCompute) == 272, "Offset mismatch for UWeldMeshEdgesTool::PreviewCompute");
static_assert(offsetof(UWeldMeshEdgesTool, MeshElementsDisplay) == 280, "Offset mismatch for UWeldMeshEdgesTool::MeshElementsDisplay");
static_assert(offsetof(UWeldMeshEdgesTool, OperatorFactory) == 288, "Offset mismatch for UWeldMeshEdgesTool::OperatorFactory");

// /Script/MeshModelingTools.WeldMeshEdgesToolBuilder
// Kind: Class; super: SingleTargetWithSelectionToolBuilder
class UWeldMeshEdgesToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MeshModelingTools.WeldMeshEdgesToolProperties
// Kind: Class; super: InteractiveToolPropertySet
class UWeldMeshEdgesToolProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    float Tolerance; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOnlyUnique; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bResolveTJunctions; // 0x006D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSplitBowties; // 0x006E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x006F
    std::int32_t InitialEdges; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::int32_t RemainingEdges; // 0x0074 (Size: 0x4, Type: IntProperty)
    std::uint8_t AttrWeldingMode; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0079
    float SplitNormalThreshold; // 0x007C (Size: 0x4, Type: FloatProperty)
    float SplitTangentsThreshold; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float SplitUVThreshold; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float SplitColorThreshold; // 0x0088 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UWeldMeshEdgesToolProperties, Tolerance) == 104, "Offset mismatch for UWeldMeshEdgesToolProperties::Tolerance");
static_assert(offsetof(UWeldMeshEdgesToolProperties, bOnlyUnique) == 108, "Offset mismatch for UWeldMeshEdgesToolProperties::bOnlyUnique");
static_assert(offsetof(UWeldMeshEdgesToolProperties, bResolveTJunctions) == 109, "Offset mismatch for UWeldMeshEdgesToolProperties::bResolveTJunctions");
static_assert(offsetof(UWeldMeshEdgesToolProperties, bSplitBowties) == 110, "Offset mismatch for UWeldMeshEdgesToolProperties::bSplitBowties");
static_assert(offsetof(UWeldMeshEdgesToolProperties, InitialEdges) == 112, "Offset mismatch for UWeldMeshEdgesToolProperties::InitialEdges");
static_assert(offsetof(UWeldMeshEdgesToolProperties, RemainingEdges) == 116, "Offset mismatch for UWeldMeshEdgesToolProperties::RemainingEdges");
static_assert(offsetof(UWeldMeshEdgesToolProperties, AttrWeldingMode) == 120, "Offset mismatch for UWeldMeshEdgesToolProperties::AttrWeldingMode");
static_assert(offsetof(UWeldMeshEdgesToolProperties, SplitNormalThreshold) == 124, "Offset mismatch for UWeldMeshEdgesToolProperties::SplitNormalThreshold");
static_assert(offsetof(UWeldMeshEdgesToolProperties, SplitTangentsThreshold) == 128, "Offset mismatch for UWeldMeshEdgesToolProperties::SplitTangentsThreshold");
static_assert(offsetof(UWeldMeshEdgesToolProperties, SplitUVThreshold) == 132, "Offset mismatch for UWeldMeshEdgesToolProperties::SplitUVThreshold");
static_assert(offsetof(UWeldMeshEdgesToolProperties, SplitColorThreshold) == 136, "Offset mismatch for UWeldMeshEdgesToolProperties::SplitColorThreshold");

// /Script/MeshModelingTools.WorkPlaneProperties
// Kind: Class; super: InteractiveToolPropertySet
class UWorkPlaneProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bPropertySetEnabled; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowGizmo; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowPlane; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x006B
    std::uint8_t Position[0x20]; // 0x0070 (Size: 0x20, Type: StructProperty)
    std::uint8_t Rotation[0x1]; // 0x0090 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWorkPlaneProperties, bPropertySetEnabled) == 104, "Offset mismatch for UWorkPlaneProperties::bPropertySetEnabled");
static_assert(offsetof(UWorkPlaneProperties, bShowGizmo) == 105, "Offset mismatch for UWorkPlaneProperties::bShowGizmo");
static_assert(offsetof(UWorkPlaneProperties, bShowPlane) == 106, "Offset mismatch for UWorkPlaneProperties::bShowPlane");
static_assert(offsetof(UWorkPlaneProperties, Position) == 112, "Offset mismatch for UWorkPlaneProperties::Position");
static_assert(offsetof(UWorkPlaneProperties, Rotation) == 144, "Offset mismatch for UWorkPlaneProperties::Rotation");
