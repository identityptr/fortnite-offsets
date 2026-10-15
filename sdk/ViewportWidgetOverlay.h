/**
 * decamp dumper generated SDK
 * Package: /Script/ViewportWidgetOverlay
 */
#pragma once
#include "Basic.h"

// /Script/ViewportWidgetOverlay.ViewportWidgetOverlay_PostProcess
// Kind: ScriptStruct; super: ViewportWidgetOverlay_PostProcessBase
struct FViewportWidgetOverlay_PostProcess
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    void* PostProcessComponent; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* PostProcessMaterialInstance; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FViewportWidgetOverlay_PostProcess, PostProcessComponent) == 144, "Offset mismatch for FViewportWidgetOverlay_PostProcess::PostProcessComponent");
static_assert(offsetof(FViewportWidgetOverlay_PostProcess, PostProcessMaterialInstance) == 152, "Offset mismatch for FViewportWidgetOverlay_PostProcess::PostProcessMaterialInstance");

// /Script/ViewportWidgetOverlay.ViewportWidgetOverlay_PostProcessBase
// Kind: ScriptStruct; super: none
struct FViewportWidgetOverlay_PostProcessBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* PostProcessMaterial; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PostProcessTintColorAndOpacity[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    float PostProcessOpacityFromTexture; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseWidgetDrawSize; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0025
    std::uint8_t WidgetDrawSize[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t bWindowFocusable; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t WindowVisibility; // 0x0031 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bReceiveHardwareInput; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x0033
    std::uint8_t RenderTargetBackgroundColor[0x10]; // 0x0034 (Size: 0x10, Type: StructProperty)
    std::uint8_t RenderTargetBlendMode; // 0x0044 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0045
    void* WidgetRenderTarget; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FViewportWidgetOverlay_PostProcessBase, PostProcessMaterial) == 8, "Offset mismatch for FViewportWidgetOverlay_PostProcessBase::PostProcessMaterial");
static_assert(offsetof(FViewportWidgetOverlay_PostProcessBase, PostProcessTintColorAndOpacity) == 16, "Offset mismatch for FViewportWidgetOverlay_PostProcessBase::PostProcessTintColorAndOpacity");
static_assert(offsetof(FViewportWidgetOverlay_PostProcessBase, PostProcessOpacityFromTexture) == 32, "Offset mismatch for FViewportWidgetOverlay_PostProcessBase::PostProcessOpacityFromTexture");
static_assert(offsetof(FViewportWidgetOverlay_PostProcessBase, bUseWidgetDrawSize) == 36, "Offset mismatch for FViewportWidgetOverlay_PostProcessBase::bUseWidgetDrawSize");
static_assert(offsetof(FViewportWidgetOverlay_PostProcessBase, WidgetDrawSize) == 40, "Offset mismatch for FViewportWidgetOverlay_PostProcessBase::WidgetDrawSize");
static_assert(offsetof(FViewportWidgetOverlay_PostProcessBase, bWindowFocusable) == 48, "Offset mismatch for FViewportWidgetOverlay_PostProcessBase::bWindowFocusable");
static_assert(offsetof(FViewportWidgetOverlay_PostProcessBase, WindowVisibility) == 49, "Offset mismatch for FViewportWidgetOverlay_PostProcessBase::WindowVisibility");
static_assert(offsetof(FViewportWidgetOverlay_PostProcessBase, bReceiveHardwareInput) == 50, "Offset mismatch for FViewportWidgetOverlay_PostProcessBase::bReceiveHardwareInput");
static_assert(offsetof(FViewportWidgetOverlay_PostProcessBase, RenderTargetBackgroundColor) == 52, "Offset mismatch for FViewportWidgetOverlay_PostProcessBase::RenderTargetBackgroundColor");
static_assert(offsetof(FViewportWidgetOverlay_PostProcessBase, RenderTargetBlendMode) == 68, "Offset mismatch for FViewportWidgetOverlay_PostProcessBase::RenderTargetBlendMode");
static_assert(offsetof(FViewportWidgetOverlay_PostProcessBase, WidgetRenderTarget) == 72, "Offset mismatch for FViewportWidgetOverlay_PostProcessBase::WidgetRenderTarget");

// /Script/ViewportWidgetOverlay.ViewportWidgetOverlay_PostProcessWithSVE
// Kind: ScriptStruct; super: ViewportWidgetOverlay_PostProcessBase
struct FViewportWidgetOverlay_PostProcessWithSVE
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* PostProcessMaterial; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PostProcessTintColorAndOpacity[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    float PostProcessOpacityFromTexture; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseWidgetDrawSize; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0025
    std::uint8_t WidgetDrawSize[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t bWindowFocusable; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t WindowVisibility; // 0x0031 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bReceiveHardwareInput; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x0033
    std::uint8_t RenderTargetBackgroundColor[0x10]; // 0x0034 (Size: 0x10, Type: StructProperty)
    std::uint8_t RenderTargetBlendMode; // 0x0044 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0045
    void* WidgetRenderTarget; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FViewportWidgetOverlay_PostProcessWithSVE, PostProcessMaterial) == 8, "Offset mismatch for FViewportWidgetOverlay_PostProcessWithSVE::PostProcessMaterial");
static_assert(offsetof(FViewportWidgetOverlay_PostProcessWithSVE, PostProcessTintColorAndOpacity) == 16, "Offset mismatch for FViewportWidgetOverlay_PostProcessWithSVE::PostProcessTintColorAndOpacity");
static_assert(offsetof(FViewportWidgetOverlay_PostProcessWithSVE, PostProcessOpacityFromTexture) == 32, "Offset mismatch for FViewportWidgetOverlay_PostProcessWithSVE::PostProcessOpacityFromTexture");
static_assert(offsetof(FViewportWidgetOverlay_PostProcessWithSVE, bUseWidgetDrawSize) == 36, "Offset mismatch for FViewportWidgetOverlay_PostProcessWithSVE::bUseWidgetDrawSize");
static_assert(offsetof(FViewportWidgetOverlay_PostProcessWithSVE, WidgetDrawSize) == 40, "Offset mismatch for FViewportWidgetOverlay_PostProcessWithSVE::WidgetDrawSize");
static_assert(offsetof(FViewportWidgetOverlay_PostProcessWithSVE, bWindowFocusable) == 48, "Offset mismatch for FViewportWidgetOverlay_PostProcessWithSVE::bWindowFocusable");
static_assert(offsetof(FViewportWidgetOverlay_PostProcessWithSVE, WindowVisibility) == 49, "Offset mismatch for FViewportWidgetOverlay_PostProcessWithSVE::WindowVisibility");
static_assert(offsetof(FViewportWidgetOverlay_PostProcessWithSVE, bReceiveHardwareInput) == 50, "Offset mismatch for FViewportWidgetOverlay_PostProcessWithSVE::bReceiveHardwareInput");
static_assert(offsetof(FViewportWidgetOverlay_PostProcessWithSVE, RenderTargetBackgroundColor) == 52, "Offset mismatch for FViewportWidgetOverlay_PostProcessWithSVE::RenderTargetBackgroundColor");
static_assert(offsetof(FViewportWidgetOverlay_PostProcessWithSVE, RenderTargetBlendMode) == 68, "Offset mismatch for FViewportWidgetOverlay_PostProcessWithSVE::RenderTargetBlendMode");
static_assert(offsetof(FViewportWidgetOverlay_PostProcessWithSVE, WidgetRenderTarget) == 72, "Offset mismatch for FViewportWidgetOverlay_PostProcessWithSVE::WidgetRenderTarget");

// /Script/ViewportWidgetOverlay.ViewportWidgetOverlay_Viewport
// Kind: ScriptStruct; super: none
struct FViewportWidgetOverlay_Viewport
{
public:
    std::uint8_t Opaque[1];
};


// /Script/ViewportWidgetOverlay.ViewportWidgetOverlay
// Kind: Class; super: Object
class UViewportWidgetOverlay
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* WidgetClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
    std::uint8_t EditorDisplayType; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t GameDisplayType; // 0x0031 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PIEDisplayType; // 0x0032 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0033
    std::uint8_t ViewportDisplayType[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t PostProcessDisplayTypeWithBlendMaterial[0xA8]; // 0x0048 (Size: 0xA8, Type: StructProperty)
    std::uint8_t PostProcessWithSceneViewExtensions[0xB0]; // 0x00F0 (Size: 0xB0, Type: StructProperty)
    void* Widget; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> World; // 0x01A8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t CurrentDisplayType; // 0x01B0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UViewportWidgetOverlay, WidgetClass) == 40, "Offset mismatch for UViewportWidgetOverlay::WidgetClass");
static_assert(offsetof(UViewportWidgetOverlay, EditorDisplayType) == 48, "Offset mismatch for UViewportWidgetOverlay::EditorDisplayType");
static_assert(offsetof(UViewportWidgetOverlay, GameDisplayType) == 49, "Offset mismatch for UViewportWidgetOverlay::GameDisplayType");
static_assert(offsetof(UViewportWidgetOverlay, PIEDisplayType) == 50, "Offset mismatch for UViewportWidgetOverlay::PIEDisplayType");
static_assert(offsetof(UViewportWidgetOverlay, ViewportDisplayType) == 56, "Offset mismatch for UViewportWidgetOverlay::ViewportDisplayType");
static_assert(offsetof(UViewportWidgetOverlay, PostProcessDisplayTypeWithBlendMaterial) == 72, "Offset mismatch for UViewportWidgetOverlay::PostProcessDisplayTypeWithBlendMaterial");
static_assert(offsetof(UViewportWidgetOverlay, PostProcessWithSceneViewExtensions) == 240, "Offset mismatch for UViewportWidgetOverlay::PostProcessWithSceneViewExtensions");
static_assert(offsetof(UViewportWidgetOverlay, Widget) == 416, "Offset mismatch for UViewportWidgetOverlay::Widget");
static_assert(offsetof(UViewportWidgetOverlay, World) == 424, "Offset mismatch for UViewportWidgetOverlay::World");
static_assert(offsetof(UViewportWidgetOverlay, CurrentDisplayType) == 432, "Offset mismatch for UViewportWidgetOverlay::CurrentDisplayType");
