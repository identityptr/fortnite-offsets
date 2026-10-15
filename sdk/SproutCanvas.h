/**
 * decamp dumper generated SDK
 * Package: /Script/SproutCanvas
 */
#pragma once
#include "Basic.h"

// /Script/SproutCanvas.SproutCanvasDesign
// Kind: ScriptStruct; super: none
struct FSproutCanvasDesign
{
public:
    std::int32_t CanvasColor; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t Palette[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    TArray<void*> Elements; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumColumns; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSproutCanvasDesign, CanvasColor) == 0, "Offset mismatch for FSproutCanvasDesign::CanvasColor");
static_assert(offsetof(FSproutCanvasDesign, Palette) == 8, "Offset mismatch for FSproutCanvasDesign::Palette");
static_assert(offsetof(FSproutCanvasDesign, Elements) == 24, "Offset mismatch for FSproutCanvasDesign::Elements");
static_assert(offsetof(FSproutCanvasDesign, NumColumns) == 40, "Offset mismatch for FSproutCanvasDesign::NumColumns");

// /Script/SproutCanvas.SproutCanvasDesignPalette
// Kind: ScriptStruct; super: none
struct FSproutCanvasDesignPalette
{
public:
    TArray<void*> StaticMeshes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutCanvasDesignPalette, StaticMeshes) == 0, "Offset mismatch for FSproutCanvasDesignPalette::StaticMeshes");

// /Script/SproutCanvas.SproutCanvasEditorPalette
// Kind: ScriptStruct; super: SproutCanvasDesignPalette
struct FSproutCanvasEditorPalette
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Colors; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSproutCanvasEditorPalette, Colors) == 16, "Offset mismatch for FSproutCanvasEditorPalette::Colors");

// /Script/SproutCanvas.SproutCanvasEditorSelection
// Kind: ScriptStruct; super: none
struct FSproutCanvasEditorSelection
{
public:
    std::int32_t Row; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Column; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t CanvasColorIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t ElementMeshIndex; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t ElementColorIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0xC]; // 0x0014
    std::uint8_t ElementOffset[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutCanvasEditorSelection, Row) == 0, "Offset mismatch for FSproutCanvasEditorSelection::Row");
static_assert(offsetof(FSproutCanvasEditorSelection, Column) == 4, "Offset mismatch for FSproutCanvasEditorSelection::Column");
static_assert(offsetof(FSproutCanvasEditorSelection, CanvasColorIndex) == 8, "Offset mismatch for FSproutCanvasEditorSelection::CanvasColorIndex");
static_assert(offsetof(FSproutCanvasEditorSelection, ElementMeshIndex) == 12, "Offset mismatch for FSproutCanvasEditorSelection::ElementMeshIndex");
static_assert(offsetof(FSproutCanvasEditorSelection, ElementColorIndex) == 16, "Offset mismatch for FSproutCanvasEditorSelection::ElementColorIndex");
static_assert(offsetof(FSproutCanvasEditorSelection, ElementOffset) == 32, "Offset mismatch for FSproutCanvasEditorSelection::ElementOffset");

// /Script/SproutCanvas.SproutCanvasElement
// Kind: ScriptStruct; super: none
struct FSproutCanvasElement
{
public:
    std::int32_t PaletteMeshIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint32_t Color; // 0x0004 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0000[0x8]; // 0x0008
    std::uint8_t Offset[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutCanvasElement, PaletteMeshIndex) == 0, "Offset mismatch for FSproutCanvasElement::PaletteMeshIndex");
static_assert(offsetof(FSproutCanvasElement, Color) == 4, "Offset mismatch for FSproutCanvasElement::Color");
static_assert(offsetof(FSproutCanvasElement, Offset) == 16, "Offset mismatch for FSproutCanvasElement::Offset");

// /Script/SproutCanvas.SproutCanvasElementInstance
// Kind: ScriptStruct; super: none
struct FSproutCanvasElementInstance
{
public:
    std::int32_t Row; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Column; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t ComponentIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t InstanceID[0x1]; // 0x000C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutCanvasElementInstance, Row) == 0, "Offset mismatch for FSproutCanvasElementInstance::Row");
static_assert(offsetof(FSproutCanvasElementInstance, Column) == 4, "Offset mismatch for FSproutCanvasElementInstance::Column");
static_assert(offsetof(FSproutCanvasElementInstance, ComponentIndex) == 8, "Offset mismatch for FSproutCanvasElementInstance::ComponentIndex");
static_assert(offsetof(FSproutCanvasElementInstance, InstanceID) == 12, "Offset mismatch for FSproutCanvasElementInstance::InstanceID");

// /Script/SproutCanvas.SproutCanvasElementParams
// Kind: ScriptStruct; super: none
struct FSproutCanvasElementParams
{
public:
    std::uint8_t StaticMesh[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint32_t Color; // 0x0020 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0000[0xC]; // 0x0024
    std::uint8_t Offset[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSproutCanvasElementParams, StaticMesh) == 0, "Offset mismatch for FSproutCanvasElementParams::StaticMesh");
static_assert(offsetof(FSproutCanvasElementParams, Color) == 32, "Offset mismatch for FSproutCanvasElementParams::Color");
static_assert(offsetof(FSproutCanvasElementParams, Offset) == 48, "Offset mismatch for FSproutCanvasElementParams::Offset");

// /Script/SproutCanvas.SproutCanvasComponent
// Kind: Class; super: SceneComponent
class USproutCanvasComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    std::uint8_t CanvasSize[0x8]; // 0x0240 (Size: 0x8, Type: StructProperty)
    std::uint8_t CanvasDesign[0x30]; // 0x0248 (Size: 0x30, Type: StructProperty)
    TWeakObjectPtr<void> CanvasDesignOwner; // 0x0278 (Size: 0x8, Type: WeakObjectProperty)
    void* CanvasInstanceClass; // 0x0280 (Size: 0x8, Type: ClassProperty)
    void* CanvasInstance; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> CanvasEditor; // 0x0290 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(USproutCanvasComponent, CanvasSize) == 576, "Offset mismatch for USproutCanvasComponent::CanvasSize");
static_assert(offsetof(USproutCanvasComponent, CanvasDesign) == 584, "Offset mismatch for USproutCanvasComponent::CanvasDesign");
static_assert(offsetof(USproutCanvasComponent, CanvasDesignOwner) == 632, "Offset mismatch for USproutCanvasComponent::CanvasDesignOwner");
static_assert(offsetof(USproutCanvasComponent, CanvasInstanceClass) == 640, "Offset mismatch for USproutCanvasComponent::CanvasInstanceClass");
static_assert(offsetof(USproutCanvasComponent, CanvasInstance) == 648, "Offset mismatch for USproutCanvasComponent::CanvasInstance");
static_assert(offsetof(USproutCanvasComponent, CanvasEditor) == 656, "Offset mismatch for USproutCanvasComponent::CanvasEditor");

// /Script/SproutCanvas.SproutCanvasInstance
// Kind: Class; super: Object
class USproutCanvasInstance
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t RelativeTransform[0x60]; // 0x0030 (Size: 0x60, Type: StructProperty)
    TWeakObjectPtr<void> CanvasPrimitiveComponent; // 0x0090 (Size: 0x8, Type: WeakObjectProperty)
    void* ComponentClass; // 0x0098 (Size: 0x8, Type: ClassProperty)
    TArray<void*> ComponentPool; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Elements; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    float ElementPadding; // 0x00C0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHiddenInGame; // 0x00C4 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USproutCanvasInstance, RelativeTransform) == 48, "Offset mismatch for USproutCanvasInstance::RelativeTransform");
static_assert(offsetof(USproutCanvasInstance, CanvasPrimitiveComponent) == 144, "Offset mismatch for USproutCanvasInstance::CanvasPrimitiveComponent");
static_assert(offsetof(USproutCanvasInstance, ComponentClass) == 152, "Offset mismatch for USproutCanvasInstance::ComponentClass");
static_assert(offsetof(USproutCanvasInstance, ComponentPool) == 160, "Offset mismatch for USproutCanvasInstance::ComponentPool");
static_assert(offsetof(USproutCanvasInstance, Elements) == 176, "Offset mismatch for USproutCanvasInstance::Elements");
static_assert(offsetof(USproutCanvasInstance, ElementPadding) == 192, "Offset mismatch for USproutCanvasInstance::ElementPadding");
static_assert(offsetof(USproutCanvasInstance, bHiddenInGame) == 196, "Offset mismatch for USproutCanvasInstance::bHiddenInGame");

// /Script/SproutCanvas.SproutCanvasPlayerComponent
// Kind: Class; super: ActorComponent
class USproutCanvasPlayerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnEditingStart; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnApplyEdit; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEditingEnd; // 0x00E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* InputMappingContext; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    std::int32_t InputMappingPriority; // 0x00F8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00FC
    void* ToggleCanvasColorInputAction; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    void* ToggleElementMeshInputAction; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    void* ToggleElementColorInputAction; // 0x0110 (Size: 0x8, Type: ObjectProperty)
    void* MoveElementInputAction; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* RotateElementInputAction; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    void* SetElementInputAction; // 0x0128 (Size: 0x8, Type: ObjectProperty)
    void* ApplyEditInputAction; // 0x0130 (Size: 0x8, Type: ObjectProperty)
    void* StopEditInputAction; // 0x0138 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x10]; // 0x0140
    void* StartEditAbility; // 0x0150 (Size: 0x8, Type: ClassProperty)
    void* StopEditAbility; // 0x0158 (Size: 0x8, Type: ClassProperty)
    void* FailAbility; // 0x0160 (Size: 0x8, Type: ClassProperty)
    TArray<void*> SavedDesigns; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EditorPalette[0x28]; // 0x0178 (Size: 0x28, Type: StructProperty)
    std::uint8_t EditorSelection[0x80]; // 0x01A0 (Size: 0x80, Type: StructProperty)
    void* PreviewActorClass; // 0x0220 (Size: 0x8, Type: ClassProperty)
    void* PreviewActor; // 0x0228 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> ElementPreviewComponent; // 0x0230 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> CanvasPreviewComponent; // 0x0238 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t PreviewDesign[0x30]; // 0x0240 (Size: 0x30, Type: StructProperty)
    void* PreviewInstanceClass; // 0x0270 (Size: 0x8, Type: ClassProperty)
    void* PreviewInstance; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> CanvasComponentToEdit; // 0x0280 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(USproutCanvasPlayerComponent, OnEditingStart) == 192, "Offset mismatch for USproutCanvasPlayerComponent::OnEditingStart");
static_assert(offsetof(USproutCanvasPlayerComponent, OnApplyEdit) == 208, "Offset mismatch for USproutCanvasPlayerComponent::OnApplyEdit");
static_assert(offsetof(USproutCanvasPlayerComponent, OnEditingEnd) == 224, "Offset mismatch for USproutCanvasPlayerComponent::OnEditingEnd");
static_assert(offsetof(USproutCanvasPlayerComponent, InputMappingContext) == 240, "Offset mismatch for USproutCanvasPlayerComponent::InputMappingContext");
static_assert(offsetof(USproutCanvasPlayerComponent, InputMappingPriority) == 248, "Offset mismatch for USproutCanvasPlayerComponent::InputMappingPriority");
static_assert(offsetof(USproutCanvasPlayerComponent, ToggleCanvasColorInputAction) == 256, "Offset mismatch for USproutCanvasPlayerComponent::ToggleCanvasColorInputAction");
static_assert(offsetof(USproutCanvasPlayerComponent, ToggleElementMeshInputAction) == 264, "Offset mismatch for USproutCanvasPlayerComponent::ToggleElementMeshInputAction");
static_assert(offsetof(USproutCanvasPlayerComponent, ToggleElementColorInputAction) == 272, "Offset mismatch for USproutCanvasPlayerComponent::ToggleElementColorInputAction");
static_assert(offsetof(USproutCanvasPlayerComponent, MoveElementInputAction) == 280, "Offset mismatch for USproutCanvasPlayerComponent::MoveElementInputAction");
static_assert(offsetof(USproutCanvasPlayerComponent, RotateElementInputAction) == 288, "Offset mismatch for USproutCanvasPlayerComponent::RotateElementInputAction");
static_assert(offsetof(USproutCanvasPlayerComponent, SetElementInputAction) == 296, "Offset mismatch for USproutCanvasPlayerComponent::SetElementInputAction");
static_assert(offsetof(USproutCanvasPlayerComponent, ApplyEditInputAction) == 304, "Offset mismatch for USproutCanvasPlayerComponent::ApplyEditInputAction");
static_assert(offsetof(USproutCanvasPlayerComponent, StopEditInputAction) == 312, "Offset mismatch for USproutCanvasPlayerComponent::StopEditInputAction");
static_assert(offsetof(USproutCanvasPlayerComponent, StartEditAbility) == 336, "Offset mismatch for USproutCanvasPlayerComponent::StartEditAbility");
static_assert(offsetof(USproutCanvasPlayerComponent, StopEditAbility) == 344, "Offset mismatch for USproutCanvasPlayerComponent::StopEditAbility");
static_assert(offsetof(USproutCanvasPlayerComponent, FailAbility) == 352, "Offset mismatch for USproutCanvasPlayerComponent::FailAbility");
static_assert(offsetof(USproutCanvasPlayerComponent, SavedDesigns) == 360, "Offset mismatch for USproutCanvasPlayerComponent::SavedDesigns");
static_assert(offsetof(USproutCanvasPlayerComponent, EditorPalette) == 376, "Offset mismatch for USproutCanvasPlayerComponent::EditorPalette");
static_assert(offsetof(USproutCanvasPlayerComponent, EditorSelection) == 416, "Offset mismatch for USproutCanvasPlayerComponent::EditorSelection");
static_assert(offsetof(USproutCanvasPlayerComponent, PreviewActorClass) == 544, "Offset mismatch for USproutCanvasPlayerComponent::PreviewActorClass");
static_assert(offsetof(USproutCanvasPlayerComponent, PreviewActor) == 552, "Offset mismatch for USproutCanvasPlayerComponent::PreviewActor");
static_assert(offsetof(USproutCanvasPlayerComponent, ElementPreviewComponent) == 560, "Offset mismatch for USproutCanvasPlayerComponent::ElementPreviewComponent");
static_assert(offsetof(USproutCanvasPlayerComponent, CanvasPreviewComponent) == 568, "Offset mismatch for USproutCanvasPlayerComponent::CanvasPreviewComponent");
static_assert(offsetof(USproutCanvasPlayerComponent, PreviewDesign) == 576, "Offset mismatch for USproutCanvasPlayerComponent::PreviewDesign");
static_assert(offsetof(USproutCanvasPlayerComponent, PreviewInstanceClass) == 624, "Offset mismatch for USproutCanvasPlayerComponent::PreviewInstanceClass");
static_assert(offsetof(USproutCanvasPlayerComponent, PreviewInstance) == 632, "Offset mismatch for USproutCanvasPlayerComponent::PreviewInstance");
static_assert(offsetof(USproutCanvasPlayerComponent, CanvasComponentToEdit) == 640, "Offset mismatch for USproutCanvasPlayerComponent::CanvasComponentToEdit");
