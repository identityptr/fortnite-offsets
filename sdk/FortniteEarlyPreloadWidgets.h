/**
 * decamp dumper generated SDK
 * Package: /Script/FortniteEarlyPreloadWidgets
 */
#pragma once
#include "Basic.h"

// /Script/FortniteEarlyPreloadWidgets.FortniteBootUpBackground
// Kind: Class; super: Widget
class UFortniteBootUpBackground
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Slot; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsEnabledDelegate[0xC]; // 0x0038 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t ToolTipTextDelegate[0xC]; // 0x0044 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t ToolTipText[0x10]; // 0x0050 (Size: 0x10, Type: TextProperty)
    void* ToolTipWidget; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ToolTipWidgetDelegate[0xC]; // 0x0068 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t VisibilityDelegate[0xC]; // 0x0074 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t RenderTransform[0x38]; // 0x0080 (Size: 0x38, Type: StructProperty)
    std::uint8_t RenderTransformPivot[0x10]; // 0x00B8 (Size: 0x10, Type: StructProperty)
    std::uint8_t FlowDirectionPreference; // 0x00C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCreatedByConstructionScript; // 0x00C9 (Size: 0x1, Type: BoolProperty)
    // 0x00C9 BoolProperty bIsEnabled (shared storage)
    // 0x00C9 BoolProperty bIsVariable (shared storage)
    // 0x00C9 BoolProperty bIsVolatile (shared storage)
    // 0x00C9 BoolProperty bOverride_Cursor (shared storage)
    std::uint8_t bWrappedByComponent; // 0x00CA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Cursor; // 0x00CB (Size: 0x1, Type: ByteProperty)
    std::uint8_t Clipping; // 0x00CC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Visibility; // 0x00CD (Size: 0x1, Type: EnumProperty)
    std::uint8_t PixelSnapping; // 0x00CE (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x1]; // 0x00CF
    float RenderOpacity; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00D4
    void* AccessibleWidgetData; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* Navigation; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x50]; // 0x00E8
    TArray<void*> NativeBindings; // 0x0138 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortniteBootUpBackground, Slot) == 48, "Offset mismatch for UFortniteBootUpBackground::Slot");
static_assert(offsetof(UFortniteBootUpBackground, bIsEnabledDelegate) == 56, "Offset mismatch for UFortniteBootUpBackground::bIsEnabledDelegate");
static_assert(offsetof(UFortniteBootUpBackground, ToolTipTextDelegate) == 68, "Offset mismatch for UFortniteBootUpBackground::ToolTipTextDelegate");
static_assert(offsetof(UFortniteBootUpBackground, ToolTipText) == 80, "Offset mismatch for UFortniteBootUpBackground::ToolTipText");
static_assert(offsetof(UFortniteBootUpBackground, ToolTipWidget) == 96, "Offset mismatch for UFortniteBootUpBackground::ToolTipWidget");
static_assert(offsetof(UFortniteBootUpBackground, ToolTipWidgetDelegate) == 104, "Offset mismatch for UFortniteBootUpBackground::ToolTipWidgetDelegate");
static_assert(offsetof(UFortniteBootUpBackground, VisibilityDelegate) == 116, "Offset mismatch for UFortniteBootUpBackground::VisibilityDelegate");
static_assert(offsetof(UFortniteBootUpBackground, RenderTransform) == 128, "Offset mismatch for UFortniteBootUpBackground::RenderTransform");
static_assert(offsetof(UFortniteBootUpBackground, RenderTransformPivot) == 184, "Offset mismatch for UFortniteBootUpBackground::RenderTransformPivot");
static_assert(offsetof(UFortniteBootUpBackground, FlowDirectionPreference) == 200, "Offset mismatch for UFortniteBootUpBackground::FlowDirectionPreference");
static_assert(offsetof(UFortniteBootUpBackground, bCreatedByConstructionScript) == 201, "Offset mismatch for UFortniteBootUpBackground::bCreatedByConstructionScript");
static_assert(offsetof(UFortniteBootUpBackground, bWrappedByComponent) == 202, "Offset mismatch for UFortniteBootUpBackground::bWrappedByComponent");
static_assert(offsetof(UFortniteBootUpBackground, Cursor) == 203, "Offset mismatch for UFortniteBootUpBackground::Cursor");
static_assert(offsetof(UFortniteBootUpBackground, Clipping) == 204, "Offset mismatch for UFortniteBootUpBackground::Clipping");
static_assert(offsetof(UFortniteBootUpBackground, Visibility) == 205, "Offset mismatch for UFortniteBootUpBackground::Visibility");
static_assert(offsetof(UFortniteBootUpBackground, PixelSnapping) == 206, "Offset mismatch for UFortniteBootUpBackground::PixelSnapping");
static_assert(offsetof(UFortniteBootUpBackground, RenderOpacity) == 208, "Offset mismatch for UFortniteBootUpBackground::RenderOpacity");
static_assert(offsetof(UFortniteBootUpBackground, AccessibleWidgetData) == 216, "Offset mismatch for UFortniteBootUpBackground::AccessibleWidgetData");
static_assert(offsetof(UFortniteBootUpBackground, Navigation) == 224, "Offset mismatch for UFortniteBootUpBackground::Navigation");
static_assert(offsetof(UFortniteBootUpBackground, NativeBindings) == 312, "Offset mismatch for UFortniteBootUpBackground::NativeBindings");
