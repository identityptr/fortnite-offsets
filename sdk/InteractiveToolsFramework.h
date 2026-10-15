/**
 * decamp dumper generated SDK
 * Package: /Script/InteractiveToolsFramework
 */
#pragma once
#include "Basic.h"

// /Script/InteractiveToolsFramework.ActiveGizmo
// Kind: ScriptStruct; super: none
struct FActiveGizmo
{
public:
    void* Gizmo; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FActiveGizmo, Gizmo) == 0, "Offset mismatch for FActiveGizmo::Gizmo");

// /Script/InteractiveToolsFramework.BehaviorInfo
// Kind: ScriptStruct; super: none
struct FBehaviorInfo
{
public:
    void* Behavior; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FBehaviorInfo, Behavior) == 0, "Offset mismatch for FBehaviorInfo::Behavior");

// /Script/InteractiveToolsFramework.BrushStampData
// Kind: ScriptStruct; super: none
struct FBrushStampData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.DeviceButtonState
// Kind: ScriptStruct; super: none
struct FDeviceButtonState
{
public:
    std::uint8_t button[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t bPressed; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDown; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReleased; // 0x001A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoubleClicked; // 0x001B (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDeviceButtonState, button) == 0, "Offset mismatch for FDeviceButtonState::button");
static_assert(offsetof(FDeviceButtonState, bPressed) == 24, "Offset mismatch for FDeviceButtonState::bPressed");
static_assert(offsetof(FDeviceButtonState, bDown) == 25, "Offset mismatch for FDeviceButtonState::bDown");
static_assert(offsetof(FDeviceButtonState, bReleased) == 26, "Offset mismatch for FDeviceButtonState::bReleased");
static_assert(offsetof(FDeviceButtonState, bDoubleClicked) == 27, "Offset mismatch for FDeviceButtonState::bDoubleClicked");

// /Script/InteractiveToolsFramework.EnabledToolGroupState
// Kind: ScriptStruct; super: none
struct FEnabledToolGroupState
{
public:
    void* BehaviorSet; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FEnabledToolGroupState, BehaviorSet) == 0, "Offset mismatch for FEnabledToolGroupState::BehaviorSet");

// /Script/InteractiveToolsFramework.GizmoElementColorAttribute
// Kind: ScriptStruct; super: none
struct FGizmoElementColorAttribute
{
public:
    std::uint8_t Value[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t bHasValue; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverridesChildState; // 0x0011 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGizmoElementColorAttribute, Value) == 0, "Offset mismatch for FGizmoElementColorAttribute::Value");
static_assert(offsetof(FGizmoElementColorAttribute, bHasValue) == 16, "Offset mismatch for FGizmoElementColorAttribute::bHasValue");
static_assert(offsetof(FGizmoElementColorAttribute, bOverridesChildState) == 17, "Offset mismatch for FGizmoElementColorAttribute::bOverridesChildState");

// /Script/InteractiveToolsFramework.GizmoElementLineRenderStateAttributes
// Kind: ScriptStruct; super: none
struct FGizmoElementLineRenderStateAttributes
{
public:
    std::uint8_t LineColor[0x14]; // 0x0000 (Size: 0x14, Type: StructProperty)
    std::uint8_t HoverLineColor[0x14]; // 0x0014 (Size: 0x14, Type: StructProperty)
    std::uint8_t InteractLineColor[0x14]; // 0x0028 (Size: 0x14, Type: StructProperty)
    std::uint8_t SelectLineColor[0x14]; // 0x003C (Size: 0x14, Type: StructProperty)
    std::uint8_t SubdueLineColor[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGizmoElementLineRenderStateAttributes, LineColor) == 0, "Offset mismatch for FGizmoElementLineRenderStateAttributes::LineColor");
static_assert(offsetof(FGizmoElementLineRenderStateAttributes, HoverLineColor) == 20, "Offset mismatch for FGizmoElementLineRenderStateAttributes::HoverLineColor");
static_assert(offsetof(FGizmoElementLineRenderStateAttributes, InteractLineColor) == 40, "Offset mismatch for FGizmoElementLineRenderStateAttributes::InteractLineColor");
static_assert(offsetof(FGizmoElementLineRenderStateAttributes, SelectLineColor) == 60, "Offset mismatch for FGizmoElementLineRenderStateAttributes::SelectLineColor");
static_assert(offsetof(FGizmoElementLineRenderStateAttributes, SubdueLineColor) == 80, "Offset mismatch for FGizmoElementLineRenderStateAttributes::SubdueLineColor");

// /Script/InteractiveToolsFramework.GizmoElementMaterialAttribute
// Kind: ScriptStruct; super: none
struct FGizmoElementMaterialAttribute
{
public:
    TWeakObjectPtr<void> Value; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bOverridesChildState; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGizmoElementMaterialAttribute, Value) == 0, "Offset mismatch for FGizmoElementMaterialAttribute::Value");
static_assert(offsetof(FGizmoElementMaterialAttribute, bOverridesChildState) == 8, "Offset mismatch for FGizmoElementMaterialAttribute::bOverridesChildState");

// /Script/InteractiveToolsFramework.GizmoElementMeshRenderStateAttributes
// Kind: ScriptStruct; super: none
struct FGizmoElementMeshRenderStateAttributes
{
public:
    std::uint8_t Material[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t HoverMaterial[0xC]; // 0x000C (Size: 0xC, Type: StructProperty)
    std::uint8_t InteractMaterial[0xC]; // 0x0018 (Size: 0xC, Type: StructProperty)
    std::uint8_t SelectMaterial[0xC]; // 0x0024 (Size: 0xC, Type: StructProperty)
    std::uint8_t SubdueMaterial[0xC]; // 0x0030 (Size: 0xC, Type: StructProperty)
    std::uint8_t VertexColor[0x14]; // 0x003C (Size: 0x14, Type: StructProperty)
    std::uint8_t HoverVertexColor[0x14]; // 0x0050 (Size: 0x14, Type: StructProperty)
    std::uint8_t InteractVertexColor[0x14]; // 0x0064 (Size: 0x14, Type: StructProperty)
    std::uint8_t SelectVertexColor[0x14]; // 0x0078 (Size: 0x14, Type: StructProperty)
    std::uint8_t SubdueVertexColor[0x1]; // 0x008C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, Material) == 0, "Offset mismatch for FGizmoElementMeshRenderStateAttributes::Material");
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, HoverMaterial) == 12, "Offset mismatch for FGizmoElementMeshRenderStateAttributes::HoverMaterial");
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, InteractMaterial) == 24, "Offset mismatch for FGizmoElementMeshRenderStateAttributes::InteractMaterial");
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, SelectMaterial) == 36, "Offset mismatch for FGizmoElementMeshRenderStateAttributes::SelectMaterial");
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, SubdueMaterial) == 48, "Offset mismatch for FGizmoElementMeshRenderStateAttributes::SubdueMaterial");
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, VertexColor) == 60, "Offset mismatch for FGizmoElementMeshRenderStateAttributes::VertexColor");
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, HoverVertexColor) == 80, "Offset mismatch for FGizmoElementMeshRenderStateAttributes::HoverVertexColor");
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, InteractVertexColor) == 100, "Offset mismatch for FGizmoElementMeshRenderStateAttributes::InteractVertexColor");
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, SelectVertexColor) == 120, "Offset mismatch for FGizmoElementMeshRenderStateAttributes::SelectVertexColor");
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, SubdueVertexColor) == 140, "Offset mismatch for FGizmoElementMeshRenderStateAttributes::SubdueVertexColor");

// /Script/InteractiveToolsFramework.GizmoFloatParameterChange
// Kind: ScriptStruct; super: none
struct FGizmoFloatParameterChange
{
public:
    float InitialValue; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float CurrentValue; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FGizmoFloatParameterChange, InitialValue) == 0, "Offset mismatch for FGizmoFloatParameterChange::InitialValue");
static_assert(offsetof(FGizmoFloatParameterChange, CurrentValue) == 4, "Offset mismatch for FGizmoFloatParameterChange::CurrentValue");

// /Script/InteractiveToolsFramework.GizmoPerStateValueDouble
// Kind: ScriptStruct; super: none
struct FGizmoPerStateValueDouble
{
public:
    std::uint8_t Default[0x10]; // 0x0000 (Size: 0x10, Type: OptionalProperty)
    std::uint8_t Hover[0x10]; // 0x0010 (Size: 0x10, Type: OptionalProperty)
    std::uint8_t Interact[0x10]; // 0x0020 (Size: 0x10, Type: OptionalProperty)
    std::uint8_t Select[0x10]; // 0x0030 (Size: 0x10, Type: OptionalProperty)
    std::uint8_t Subdue[0x1]; // 0x0040 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FGizmoPerStateValueDouble, Default) == 0, "Offset mismatch for FGizmoPerStateValueDouble::Default");
static_assert(offsetof(FGizmoPerStateValueDouble, Hover) == 16, "Offset mismatch for FGizmoPerStateValueDouble::Hover");
static_assert(offsetof(FGizmoPerStateValueDouble, Interact) == 32, "Offset mismatch for FGizmoPerStateValueDouble::Interact");
static_assert(offsetof(FGizmoPerStateValueDouble, Select) == 48, "Offset mismatch for FGizmoPerStateValueDouble::Select");
static_assert(offsetof(FGizmoPerStateValueDouble, Subdue) == 64, "Offset mismatch for FGizmoPerStateValueDouble::Subdue");

// /Script/InteractiveToolsFramework.GizmoPerStateValueLinearColor
// Kind: ScriptStruct; super: none
struct FGizmoPerStateValueLinearColor
{
public:
    std::uint8_t Default[0x14]; // 0x0000 (Size: 0x14, Type: OptionalProperty)
    std::uint8_t Hover[0x14]; // 0x0014 (Size: 0x14, Type: OptionalProperty)
    std::uint8_t Interact[0x14]; // 0x0028 (Size: 0x14, Type: OptionalProperty)
    std::uint8_t Select[0x14]; // 0x003C (Size: 0x14, Type: OptionalProperty)
    std::uint8_t Subdue[0x1]; // 0x0050 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FGizmoPerStateValueLinearColor, Default) == 0, "Offset mismatch for FGizmoPerStateValueLinearColor::Default");
static_assert(offsetof(FGizmoPerStateValueLinearColor, Hover) == 20, "Offset mismatch for FGizmoPerStateValueLinearColor::Hover");
static_assert(offsetof(FGizmoPerStateValueLinearColor, Interact) == 40, "Offset mismatch for FGizmoPerStateValueLinearColor::Interact");
static_assert(offsetof(FGizmoPerStateValueLinearColor, Select) == 60, "Offset mismatch for FGizmoPerStateValueLinearColor::Select");
static_assert(offsetof(FGizmoPerStateValueLinearColor, Subdue) == 80, "Offset mismatch for FGizmoPerStateValueLinearColor::Subdue");

// /Script/InteractiveToolsFramework.GizmoVec2ParameterChange
// Kind: ScriptStruct; super: none
struct FGizmoVec2ParameterChange
{
public:
    std::uint8_t InitialValue[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t CurrentValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FGizmoVec2ParameterChange, InitialValue) == 0, "Offset mismatch for FGizmoVec2ParameterChange::InitialValue");
static_assert(offsetof(FGizmoVec2ParameterChange, CurrentValue) == 16, "Offset mismatch for FGizmoVec2ParameterChange::CurrentValue");

// /Script/InteractiveToolsFramework.InputDeviceRay
// Kind: ScriptStruct; super: none
struct FInputDeviceRay
{
public:
    std::uint8_t WorldRay[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t bHas2D; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0031
    std::uint8_t ScreenPosition[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInputDeviceRay, WorldRay) == 0, "Offset mismatch for FInputDeviceRay::WorldRay");
static_assert(offsetof(FInputDeviceRay, bHas2D) == 48, "Offset mismatch for FInputDeviceRay::bHas2D");
static_assert(offsetof(FInputDeviceRay, ScreenPosition) == 56, "Offset mismatch for FInputDeviceRay::ScreenPosition");

// /Script/InteractiveToolsFramework.InputDeviceState
// Kind: ScriptStruct; super: none
struct FInputDeviceState
{
public:
    std::uint8_t InputDevice; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t bShiftKeyDown; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAltKeyDown; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCtrlKeyDown; // 0x0006 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCmdKeyDown; // 0x0007 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Keyboard[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    std::uint8_t Mouse[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FInputDeviceState, InputDevice) == 0, "Offset mismatch for FInputDeviceState::InputDevice");
static_assert(offsetof(FInputDeviceState, bShiftKeyDown) == 4, "Offset mismatch for FInputDeviceState::bShiftKeyDown");
static_assert(offsetof(FInputDeviceState, bAltKeyDown) == 5, "Offset mismatch for FInputDeviceState::bAltKeyDown");
static_assert(offsetof(FInputDeviceState, bCtrlKeyDown) == 6, "Offset mismatch for FInputDeviceState::bCtrlKeyDown");
static_assert(offsetof(FInputDeviceState, bCmdKeyDown) == 7, "Offset mismatch for FInputDeviceState::bCmdKeyDown");
static_assert(offsetof(FInputDeviceState, Keyboard) == 8, "Offset mismatch for FInputDeviceState::Keyboard");
static_assert(offsetof(FInputDeviceState, Mouse) == 40, "Offset mismatch for FInputDeviceState::Mouse");

// /Script/InteractiveToolsFramework.InputRayHit
// Kind: ScriptStruct; super: none
struct FInputRayHit
{
public:
    std::uint8_t bHit; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    double HitDepth; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t HitNormal[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t bHasHitNormal; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::int32_t HitIdentifier; // 0x002C (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0030
    TWeakObjectPtr<void> HitObject; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FInputRayHit, bHit) == 0, "Offset mismatch for FInputRayHit::bHit");
static_assert(offsetof(FInputRayHit, HitDepth) == 8, "Offset mismatch for FInputRayHit::HitDepth");
static_assert(offsetof(FInputRayHit, HitNormal) == 16, "Offset mismatch for FInputRayHit::HitNormal");
static_assert(offsetof(FInputRayHit, bHasHitNormal) == 40, "Offset mismatch for FInputRayHit::bHasHitNormal");
static_assert(offsetof(FInputRayHit, HitIdentifier) == 44, "Offset mismatch for FInputRayHit::HitIdentifier");
static_assert(offsetof(FInputRayHit, HitObject) == 56, "Offset mismatch for FInputRayHit::HitObject");

// /Script/InteractiveToolsFramework.KeyboardInputDeviceState
// Kind: ScriptStruct; super: none
struct FKeyboardInputDeviceState
{
public:
    std::uint8_t ActiveKey[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FKeyboardInputDeviceState, ActiveKey) == 0, "Offset mismatch for FKeyboardInputDeviceState::ActiveKey");

// /Script/InteractiveToolsFramework.MouseInputDeviceState
// Kind: ScriptStruct; super: none
struct FMouseInputDeviceState
{
public:
    std::uint8_t Left[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Middle[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::uint8_t Right[0x20]; // 0x0040 (Size: 0x20, Type: StructProperty)
    float WheelDelta; // 0x0060 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0064
    std::uint8_t Position2D[0x10]; // 0x0068 (Size: 0x10, Type: StructProperty)
    std::uint8_t Delta2D[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    std::uint8_t WorldRay[0x30]; // 0x0088 (Size: 0x30, Type: StructProperty)
    std::uint8_t UnboundedPosition2D[0x10]; // 0x00B8 (Size: 0x10, Type: StructProperty)
    std::uint8_t UnboundedMouseDelta2D[0x10]; // 0x00C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t UnboundedWorldRay[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMouseInputDeviceState, Left) == 0, "Offset mismatch for FMouseInputDeviceState::Left");
static_assert(offsetof(FMouseInputDeviceState, Middle) == 32, "Offset mismatch for FMouseInputDeviceState::Middle");
static_assert(offsetof(FMouseInputDeviceState, Right) == 64, "Offset mismatch for FMouseInputDeviceState::Right");
static_assert(offsetof(FMouseInputDeviceState, WheelDelta) == 96, "Offset mismatch for FMouseInputDeviceState::WheelDelta");
static_assert(offsetof(FMouseInputDeviceState, Position2D) == 104, "Offset mismatch for FMouseInputDeviceState::Position2D");
static_assert(offsetof(FMouseInputDeviceState, Delta2D) == 120, "Offset mismatch for FMouseInputDeviceState::Delta2D");
static_assert(offsetof(FMouseInputDeviceState, WorldRay) == 136, "Offset mismatch for FMouseInputDeviceState::WorldRay");
static_assert(offsetof(FMouseInputDeviceState, UnboundedPosition2D) == 184, "Offset mismatch for FMouseInputDeviceState::UnboundedPosition2D");
static_assert(offsetof(FMouseInputDeviceState, UnboundedMouseDelta2D) == 200, "Offset mismatch for FMouseInputDeviceState::UnboundedMouseDelta2D");
static_assert(offsetof(FMouseInputDeviceState, UnboundedWorldRay) == 216, "Offset mismatch for FMouseInputDeviceState::UnboundedWorldRay");

// /Script/InteractiveToolsFramework.AnyButtonInputBehavior
// Kind: Class; super: InputBehavior
class UAnyButtonInputBehavior
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.AssetBackedTarget
// Kind: Class; super: Interface
class UAssetBackedTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.AxisAngleGizmo
// Kind: Class; super: InteractiveGizmo
class UAxisAngleGizmo
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TScriptInterface<void> AxisSource; // 0x0048 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> AngleSource; // 0x0058 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> HitTarget; // 0x0068 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> StateTarget; // 0x0078 (Size: 0x10, Type: InterfaceProperty)
    void* MouseBehavior; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x60]; // 0x0090
    std::uint8_t bInInteraction; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00F1
    std::uint8_t RotationOrigin[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationAxis[0x18]; // 0x0110 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationPlaneX[0x18]; // 0x0128 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationPlaneY[0x18]; // 0x0140 (Size: 0x18, Type: StructProperty)
    std::uint8_t InteractionStartPoint[0x18]; // 0x0158 (Size: 0x18, Type: StructProperty)
    std::uint8_t InteractionCurPoint[0x18]; // 0x0170 (Size: 0x18, Type: StructProperty)
    float InteractionStartAngle; // 0x0188 (Size: 0x4, Type: FloatProperty)
    float InteractionCurAngle; // 0x018C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAxisAngleGizmo, AxisSource) == 72, "Offset mismatch for UAxisAngleGizmo::AxisSource");
static_assert(offsetof(UAxisAngleGizmo, AngleSource) == 88, "Offset mismatch for UAxisAngleGizmo::AngleSource");
static_assert(offsetof(UAxisAngleGizmo, HitTarget) == 104, "Offset mismatch for UAxisAngleGizmo::HitTarget");
static_assert(offsetof(UAxisAngleGizmo, StateTarget) == 120, "Offset mismatch for UAxisAngleGizmo::StateTarget");
static_assert(offsetof(UAxisAngleGizmo, MouseBehavior) == 136, "Offset mismatch for UAxisAngleGizmo::MouseBehavior");
static_assert(offsetof(UAxisAngleGizmo, bInInteraction) == 240, "Offset mismatch for UAxisAngleGizmo::bInInteraction");
static_assert(offsetof(UAxisAngleGizmo, RotationOrigin) == 248, "Offset mismatch for UAxisAngleGizmo::RotationOrigin");
static_assert(offsetof(UAxisAngleGizmo, RotationAxis) == 272, "Offset mismatch for UAxisAngleGizmo::RotationAxis");
static_assert(offsetof(UAxisAngleGizmo, RotationPlaneX) == 296, "Offset mismatch for UAxisAngleGizmo::RotationPlaneX");
static_assert(offsetof(UAxisAngleGizmo, RotationPlaneY) == 320, "Offset mismatch for UAxisAngleGizmo::RotationPlaneY");
static_assert(offsetof(UAxisAngleGizmo, InteractionStartPoint) == 344, "Offset mismatch for UAxisAngleGizmo::InteractionStartPoint");
static_assert(offsetof(UAxisAngleGizmo, InteractionCurPoint) == 368, "Offset mismatch for UAxisAngleGizmo::InteractionCurPoint");
static_assert(offsetof(UAxisAngleGizmo, InteractionStartAngle) == 392, "Offset mismatch for UAxisAngleGizmo::InteractionStartAngle");
static_assert(offsetof(UAxisAngleGizmo, InteractionCurAngle) == 396, "Offset mismatch for UAxisAngleGizmo::InteractionCurAngle");

// /Script/InteractiveToolsFramework.AxisAngleGizmoBuilder
// Kind: Class; super: InteractiveGizmoBuilder
class UAxisAngleGizmoBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.AxisPositionGizmo
// Kind: Class; super: InteractiveGizmo
class UAxisPositionGizmo
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TScriptInterface<void> AxisSource; // 0x0048 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> ParameterSource; // 0x0058 (Size: 0x10, Type: InterfaceProperty)
    void* GizmoViewContext; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    TScriptInterface<void> HitTarget; // 0x0070 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> StateTarget; // 0x0080 (Size: 0x10, Type: InterfaceProperty)
    void* MouseBehavior; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnableSignedAxis; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x68]; // 0x0099
    std::uint8_t bInInteraction; // 0x0101 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0102
    std::uint8_t InteractionOrigin[0x18]; // 0x0108 (Size: 0x18, Type: StructProperty)
    std::uint8_t InteractionAxis[0x18]; // 0x0120 (Size: 0x18, Type: StructProperty)
    std::uint8_t InteractionStartPoint[0x18]; // 0x0138 (Size: 0x18, Type: StructProperty)
    std::uint8_t InteractionCurPoint[0x18]; // 0x0150 (Size: 0x18, Type: StructProperty)
    float InteractionStartParameter; // 0x0168 (Size: 0x4, Type: FloatProperty)
    float InteractionCurParameter; // 0x016C (Size: 0x4, Type: FloatProperty)
    float ParameterSign; // 0x0170 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UAxisPositionGizmo, AxisSource) == 72, "Offset mismatch for UAxisPositionGizmo::AxisSource");
static_assert(offsetof(UAxisPositionGizmo, ParameterSource) == 88, "Offset mismatch for UAxisPositionGizmo::ParameterSource");
static_assert(offsetof(UAxisPositionGizmo, GizmoViewContext) == 104, "Offset mismatch for UAxisPositionGizmo::GizmoViewContext");
static_assert(offsetof(UAxisPositionGizmo, HitTarget) == 112, "Offset mismatch for UAxisPositionGizmo::HitTarget");
static_assert(offsetof(UAxisPositionGizmo, StateTarget) == 128, "Offset mismatch for UAxisPositionGizmo::StateTarget");
static_assert(offsetof(UAxisPositionGizmo, MouseBehavior) == 144, "Offset mismatch for UAxisPositionGizmo::MouseBehavior");
static_assert(offsetof(UAxisPositionGizmo, bEnableSignedAxis) == 152, "Offset mismatch for UAxisPositionGizmo::bEnableSignedAxis");
static_assert(offsetof(UAxisPositionGizmo, bInInteraction) == 257, "Offset mismatch for UAxisPositionGizmo::bInInteraction");
static_assert(offsetof(UAxisPositionGizmo, InteractionOrigin) == 264, "Offset mismatch for UAxisPositionGizmo::InteractionOrigin");
static_assert(offsetof(UAxisPositionGizmo, InteractionAxis) == 288, "Offset mismatch for UAxisPositionGizmo::InteractionAxis");
static_assert(offsetof(UAxisPositionGizmo, InteractionStartPoint) == 312, "Offset mismatch for UAxisPositionGizmo::InteractionStartPoint");
static_assert(offsetof(UAxisPositionGizmo, InteractionCurPoint) == 336, "Offset mismatch for UAxisPositionGizmo::InteractionCurPoint");
static_assert(offsetof(UAxisPositionGizmo, InteractionStartParameter) == 360, "Offset mismatch for UAxisPositionGizmo::InteractionStartParameter");
static_assert(offsetof(UAxisPositionGizmo, InteractionCurParameter) == 364, "Offset mismatch for UAxisPositionGizmo::InteractionCurParameter");
static_assert(offsetof(UAxisPositionGizmo, ParameterSign) == 368, "Offset mismatch for UAxisPositionGizmo::ParameterSign");

// /Script/InteractiveToolsFramework.AxisPositionGizmoBuilder
// Kind: Class; super: InteractiveGizmoBuilder
class UAxisPositionGizmoBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.BaseBrushTool
// Kind: Class; super: MeshSurfacePointTool
class UBaseBrushTool
{
public:
    std::uint8_t Pad_0000[0x118]; // 0x0000
    void* BrushProperties; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bInBrushStroke; // 0x0120 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0121
    float WorldToLocalScale; // 0x0124 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LastBrushStamp[0x148]; // 0x0128 (Size: 0x148, Type: StructProperty)
    std::uint8_t PropertyClass[0x20]; // 0x0270 (Size: 0x20, Type: SoftClassProperty)
    void* BrushStampIndicator; // 0x0290 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBaseBrushTool, BrushProperties) == 280, "Offset mismatch for UBaseBrushTool::BrushProperties");
static_assert(offsetof(UBaseBrushTool, bInBrushStroke) == 288, "Offset mismatch for UBaseBrushTool::bInBrushStroke");
static_assert(offsetof(UBaseBrushTool, WorldToLocalScale) == 292, "Offset mismatch for UBaseBrushTool::WorldToLocalScale");
static_assert(offsetof(UBaseBrushTool, LastBrushStamp) == 296, "Offset mismatch for UBaseBrushTool::LastBrushStamp");
static_assert(offsetof(UBaseBrushTool, PropertyClass) == 624, "Offset mismatch for UBaseBrushTool::PropertyClass");
static_assert(offsetof(UBaseBrushTool, BrushStampIndicator) == 656, "Offset mismatch for UBaseBrushTool::BrushStampIndicator");

// /Script/InteractiveToolsFramework.BrushAdjusterInputBehavior
// Kind: Class; super: AnyButtonInputBehavior
class UBrushAdjusterInputBehavior
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.BrushBaseProperties
// Kind: Class; super: InteractiveToolPropertySet
class UBrushBaseProperties
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    float BrushSize; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bSpecifyRadius; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x006D
    float BrushRadius; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bToolSupportsPressureSensitivity; // 0x0074 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnablePressureSensitivity; // 0x0075 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0076
    float BrushStrength; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float BrushFalloffAmount; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHitBackFaces; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowStrength; // 0x0081 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowFalloff; // 0x0082 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowHitBackFaces; // 0x0083 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBrushBaseProperties, BrushSize) == 104, "Offset mismatch for UBrushBaseProperties::BrushSize");
static_assert(offsetof(UBrushBaseProperties, bSpecifyRadius) == 108, "Offset mismatch for UBrushBaseProperties::bSpecifyRadius");
static_assert(offsetof(UBrushBaseProperties, BrushRadius) == 112, "Offset mismatch for UBrushBaseProperties::BrushRadius");
static_assert(offsetof(UBrushBaseProperties, bToolSupportsPressureSensitivity) == 116, "Offset mismatch for UBrushBaseProperties::bToolSupportsPressureSensitivity");
static_assert(offsetof(UBrushBaseProperties, bEnablePressureSensitivity) == 117, "Offset mismatch for UBrushBaseProperties::bEnablePressureSensitivity");
static_assert(offsetof(UBrushBaseProperties, BrushStrength) == 120, "Offset mismatch for UBrushBaseProperties::BrushStrength");
static_assert(offsetof(UBrushBaseProperties, BrushFalloffAmount) == 124, "Offset mismatch for UBrushBaseProperties::BrushFalloffAmount");
static_assert(offsetof(UBrushBaseProperties, bHitBackFaces) == 128, "Offset mismatch for UBrushBaseProperties::bHitBackFaces");
static_assert(offsetof(UBrushBaseProperties, bShowStrength) == 129, "Offset mismatch for UBrushBaseProperties::bShowStrength");
static_assert(offsetof(UBrushBaseProperties, bShowFalloff) == 130, "Offset mismatch for UBrushBaseProperties::bShowFalloff");
static_assert(offsetof(UBrushBaseProperties, bShowHitBackFaces) == 131, "Offset mismatch for UBrushBaseProperties::bShowHitBackFaces");

// /Script/InteractiveToolsFramework.BrushStampIndicator
// Kind: Class; super: InteractiveGizmo
class UBrushStampIndicator
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bVisible; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    float BrushRadius; // 0x003C (Size: 0x4, Type: FloatProperty)
    float BrushFalloff; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float BrushStrength; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BrushPosition[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t BrushNormal[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t bDrawIndicatorLines; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawRadiusCircle; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bScaleNormalByStrength; // 0x007A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x007B
    std::int32_t SampleStepCount; // 0x007C (Size: 0x4, Type: IntProperty)
    std::uint8_t LineColor[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    float LineThickness; // 0x0090 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDepthTested; // 0x0094 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawSecondaryLines; // 0x0095 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x0096
    float SecondaryLineThickness; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SecondaryLineColor[0x14]; // 0x009C (Size: 0x14, Type: StructProperty)
    void* AttachedComponent; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBrushStampIndicator, bVisible) == 56, "Offset mismatch for UBrushStampIndicator::bVisible");
static_assert(offsetof(UBrushStampIndicator, BrushRadius) == 60, "Offset mismatch for UBrushStampIndicator::BrushRadius");
static_assert(offsetof(UBrushStampIndicator, BrushFalloff) == 64, "Offset mismatch for UBrushStampIndicator::BrushFalloff");
static_assert(offsetof(UBrushStampIndicator, BrushStrength) == 68, "Offset mismatch for UBrushStampIndicator::BrushStrength");
static_assert(offsetof(UBrushStampIndicator, BrushPosition) == 72, "Offset mismatch for UBrushStampIndicator::BrushPosition");
static_assert(offsetof(UBrushStampIndicator, BrushNormal) == 96, "Offset mismatch for UBrushStampIndicator::BrushNormal");
static_assert(offsetof(UBrushStampIndicator, bDrawIndicatorLines) == 120, "Offset mismatch for UBrushStampIndicator::bDrawIndicatorLines");
static_assert(offsetof(UBrushStampIndicator, bDrawRadiusCircle) == 121, "Offset mismatch for UBrushStampIndicator::bDrawRadiusCircle");
static_assert(offsetof(UBrushStampIndicator, bScaleNormalByStrength) == 122, "Offset mismatch for UBrushStampIndicator::bScaleNormalByStrength");
static_assert(offsetof(UBrushStampIndicator, SampleStepCount) == 124, "Offset mismatch for UBrushStampIndicator::SampleStepCount");
static_assert(offsetof(UBrushStampIndicator, LineColor) == 128, "Offset mismatch for UBrushStampIndicator::LineColor");
static_assert(offsetof(UBrushStampIndicator, LineThickness) == 144, "Offset mismatch for UBrushStampIndicator::LineThickness");
static_assert(offsetof(UBrushStampIndicator, bDepthTested) == 148, "Offset mismatch for UBrushStampIndicator::bDepthTested");
static_assert(offsetof(UBrushStampIndicator, bDrawSecondaryLines) == 149, "Offset mismatch for UBrushStampIndicator::bDrawSecondaryLines");
static_assert(offsetof(UBrushStampIndicator, SecondaryLineThickness) == 152, "Offset mismatch for UBrushStampIndicator::SecondaryLineThickness");
static_assert(offsetof(UBrushStampIndicator, SecondaryLineColor) == 156, "Offset mismatch for UBrushStampIndicator::SecondaryLineColor");
static_assert(offsetof(UBrushStampIndicator, AttachedComponent) == 176, "Offset mismatch for UBrushStampIndicator::AttachedComponent");

// /Script/InteractiveToolsFramework.BrushStampIndicatorBuilder
// Kind: Class; super: InteractiveGizmoBuilder
class UBrushStampIndicatorBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.ClickDragInputBehavior
// Kind: Class; super: AnyButtonInputBehavior
class UClickDragInputBehavior
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t bUpdateModifiersDuringDrag; // 0x00E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UClickDragInputBehavior, bUpdateModifiersDuringDrag) == 224, "Offset mismatch for UClickDragInputBehavior::bUpdateModifiersDuringDrag");

// /Script/InteractiveToolsFramework.ClickDragTool
// Kind: Class; super: InteractiveTool
class UClickDragTool
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    void* InputBehaviors; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ToolPropertyObjects; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UClickDragTool, InputBehaviors) == 96, "Offset mismatch for UClickDragTool::InputBehaviors");
static_assert(offsetof(UClickDragTool, ToolPropertyObjects) == 104, "Offset mismatch for UClickDragTool::ToolPropertyObjects");

// /Script/InteractiveToolsFramework.ClickDragToolBuilder
// Kind: Class; super: InteractiveToolBuilder
class UClickDragToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.CombinedTransformGizmo
// Kind: Class; super: InteractiveGizmo
class UCombinedTransformGizmo
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* ActiveTarget; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bSnapToWorldGrid; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0041
    std::uint8_t bGridSizeIsExplicit; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0045
    std::uint8_t ExplicitGridSize[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t bRotationGridSizeIsExplicit; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0061
    std::uint8_t ExplicitRotationGridSize[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    std::uint8_t bSnapToWorldRotGrid; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSnapToScaleGrid; // 0x0081 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseContextCoordinateSystem; // 0x0082 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CurrentCoordinateSystem; // 0x0083 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseContextGizmoMode; // 0x0084 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ActiveGizmoMode; // 0x0085 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x10A]; // 0x0086
    TArray<void*> ActiveComponents; // 0x0190 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveGizmos; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0005[0x218]; // 0x01B0
    void* GizmoActor; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    void* CameraAxisSource; // 0x03D0 (Size: 0x8, Type: ObjectProperty)
    void* AxisXSource; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    void* AxisYSource; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
    void* AxisZSource; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
    void* UnitAxisXSource; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
    void* UnitAxisYSource; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
    void* UnitAxisZSource; // 0x0400 (Size: 0x8, Type: ObjectProperty)
    void* StateTarget; // 0x0408 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCombinedTransformGizmo, ActiveTarget) == 56, "Offset mismatch for UCombinedTransformGizmo::ActiveTarget");
static_assert(offsetof(UCombinedTransformGizmo, bSnapToWorldGrid) == 64, "Offset mismatch for UCombinedTransformGizmo::bSnapToWorldGrid");
static_assert(offsetof(UCombinedTransformGizmo, bGridSizeIsExplicit) == 68, "Offset mismatch for UCombinedTransformGizmo::bGridSizeIsExplicit");
static_assert(offsetof(UCombinedTransformGizmo, ExplicitGridSize) == 72, "Offset mismatch for UCombinedTransformGizmo::ExplicitGridSize");
static_assert(offsetof(UCombinedTransformGizmo, bRotationGridSizeIsExplicit) == 96, "Offset mismatch for UCombinedTransformGizmo::bRotationGridSizeIsExplicit");
static_assert(offsetof(UCombinedTransformGizmo, ExplicitRotationGridSize) == 104, "Offset mismatch for UCombinedTransformGizmo::ExplicitRotationGridSize");
static_assert(offsetof(UCombinedTransformGizmo, bSnapToWorldRotGrid) == 128, "Offset mismatch for UCombinedTransformGizmo::bSnapToWorldRotGrid");
static_assert(offsetof(UCombinedTransformGizmo, bSnapToScaleGrid) == 129, "Offset mismatch for UCombinedTransformGizmo::bSnapToScaleGrid");
static_assert(offsetof(UCombinedTransformGizmo, bUseContextCoordinateSystem) == 130, "Offset mismatch for UCombinedTransformGizmo::bUseContextCoordinateSystem");
static_assert(offsetof(UCombinedTransformGizmo, CurrentCoordinateSystem) == 131, "Offset mismatch for UCombinedTransformGizmo::CurrentCoordinateSystem");
static_assert(offsetof(UCombinedTransformGizmo, bUseContextGizmoMode) == 132, "Offset mismatch for UCombinedTransformGizmo::bUseContextGizmoMode");
static_assert(offsetof(UCombinedTransformGizmo, ActiveGizmoMode) == 133, "Offset mismatch for UCombinedTransformGizmo::ActiveGizmoMode");
static_assert(offsetof(UCombinedTransformGizmo, ActiveComponents) == 400, "Offset mismatch for UCombinedTransformGizmo::ActiveComponents");
static_assert(offsetof(UCombinedTransformGizmo, ActiveGizmos) == 416, "Offset mismatch for UCombinedTransformGizmo::ActiveGizmos");
static_assert(offsetof(UCombinedTransformGizmo, GizmoActor) == 968, "Offset mismatch for UCombinedTransformGizmo::GizmoActor");
static_assert(offsetof(UCombinedTransformGizmo, CameraAxisSource) == 976, "Offset mismatch for UCombinedTransformGizmo::CameraAxisSource");
static_assert(offsetof(UCombinedTransformGizmo, AxisXSource) == 984, "Offset mismatch for UCombinedTransformGizmo::AxisXSource");
static_assert(offsetof(UCombinedTransformGizmo, AxisYSource) == 992, "Offset mismatch for UCombinedTransformGizmo::AxisYSource");
static_assert(offsetof(UCombinedTransformGizmo, AxisZSource) == 1000, "Offset mismatch for UCombinedTransformGizmo::AxisZSource");
static_assert(offsetof(UCombinedTransformGizmo, UnitAxisXSource) == 1008, "Offset mismatch for UCombinedTransformGizmo::UnitAxisXSource");
static_assert(offsetof(UCombinedTransformGizmo, UnitAxisYSource) == 1016, "Offset mismatch for UCombinedTransformGizmo::UnitAxisYSource");
static_assert(offsetof(UCombinedTransformGizmo, UnitAxisZSource) == 1024, "Offset mismatch for UCombinedTransformGizmo::UnitAxisZSource");
static_assert(offsetof(UCombinedTransformGizmo, StateTarget) == 1032, "Offset mismatch for UCombinedTransformGizmo::StateTarget");

// /Script/InteractiveToolsFramework.CombinedTransformGizmoActor
// Kind: Class; super: GizmoActor
class UCombinedTransformGizmoActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* TranslateX; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* TranslateY; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* TranslateZ; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* TranslateYZ; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* TranslateXZ; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* TranslateXY; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
    void* RotateX; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    void* RotateY; // 0x02B0 (Size: 0x8, Type: ObjectProperty)
    void* RotateZ; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* RotationSphere; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    void* FreeRotateHandle; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
    void* FreeTranslateHandle; // 0x02D0 (Size: 0x8, Type: ObjectProperty)
    void* UniformScale; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    void* AxisScaleX; // 0x02E0 (Size: 0x8, Type: ObjectProperty)
    void* AxisScaleY; // 0x02E8 (Size: 0x8, Type: ObjectProperty)
    void* AxisScaleZ; // 0x02F0 (Size: 0x8, Type: ObjectProperty)
    void* PlaneScaleYZ; // 0x02F8 (Size: 0x8, Type: ObjectProperty)
    void* PlaneScaleXZ; // 0x0300 (Size: 0x8, Type: ObjectProperty)
    void* PlaneScaleXY; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0310
    void* FullAxisScaleX; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    void* FullAxisScaleY; // 0x0328 (Size: 0x8, Type: ObjectProperty)
    void* FullAxisScaleZ; // 0x0330 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UCombinedTransformGizmoActor, TranslateX) == 632, "Offset mismatch for UCombinedTransformGizmoActor::TranslateX");
static_assert(offsetof(UCombinedTransformGizmoActor, TranslateY) == 640, "Offset mismatch for UCombinedTransformGizmoActor::TranslateY");
static_assert(offsetof(UCombinedTransformGizmoActor, TranslateZ) == 648, "Offset mismatch for UCombinedTransformGizmoActor::TranslateZ");
static_assert(offsetof(UCombinedTransformGizmoActor, TranslateYZ) == 656, "Offset mismatch for UCombinedTransformGizmoActor::TranslateYZ");
static_assert(offsetof(UCombinedTransformGizmoActor, TranslateXZ) == 664, "Offset mismatch for UCombinedTransformGizmoActor::TranslateXZ");
static_assert(offsetof(UCombinedTransformGizmoActor, TranslateXY) == 672, "Offset mismatch for UCombinedTransformGizmoActor::TranslateXY");
static_assert(offsetof(UCombinedTransformGizmoActor, RotateX) == 680, "Offset mismatch for UCombinedTransformGizmoActor::RotateX");
static_assert(offsetof(UCombinedTransformGizmoActor, RotateY) == 688, "Offset mismatch for UCombinedTransformGizmoActor::RotateY");
static_assert(offsetof(UCombinedTransformGizmoActor, RotateZ) == 696, "Offset mismatch for UCombinedTransformGizmoActor::RotateZ");
static_assert(offsetof(UCombinedTransformGizmoActor, RotationSphere) == 704, "Offset mismatch for UCombinedTransformGizmoActor::RotationSphere");
static_assert(offsetof(UCombinedTransformGizmoActor, FreeRotateHandle) == 712, "Offset mismatch for UCombinedTransformGizmoActor::FreeRotateHandle");
static_assert(offsetof(UCombinedTransformGizmoActor, FreeTranslateHandle) == 720, "Offset mismatch for UCombinedTransformGizmoActor::FreeTranslateHandle");
static_assert(offsetof(UCombinedTransformGizmoActor, UniformScale) == 728, "Offset mismatch for UCombinedTransformGizmoActor::UniformScale");
static_assert(offsetof(UCombinedTransformGizmoActor, AxisScaleX) == 736, "Offset mismatch for UCombinedTransformGizmoActor::AxisScaleX");
static_assert(offsetof(UCombinedTransformGizmoActor, AxisScaleY) == 744, "Offset mismatch for UCombinedTransformGizmoActor::AxisScaleY");
static_assert(offsetof(UCombinedTransformGizmoActor, AxisScaleZ) == 752, "Offset mismatch for UCombinedTransformGizmoActor::AxisScaleZ");
static_assert(offsetof(UCombinedTransformGizmoActor, PlaneScaleYZ) == 760, "Offset mismatch for UCombinedTransformGizmoActor::PlaneScaleYZ");
static_assert(offsetof(UCombinedTransformGizmoActor, PlaneScaleXZ) == 768, "Offset mismatch for UCombinedTransformGizmoActor::PlaneScaleXZ");
static_assert(offsetof(UCombinedTransformGizmoActor, PlaneScaleXY) == 776, "Offset mismatch for UCombinedTransformGizmoActor::PlaneScaleXY");
static_assert(offsetof(UCombinedTransformGizmoActor, FullAxisScaleX) == 800, "Offset mismatch for UCombinedTransformGizmoActor::FullAxisScaleX");
static_assert(offsetof(UCombinedTransformGizmoActor, FullAxisScaleY) == 808, "Offset mismatch for UCombinedTransformGizmoActor::FullAxisScaleY");
static_assert(offsetof(UCombinedTransformGizmoActor, FullAxisScaleZ) == 816, "Offset mismatch for UCombinedTransformGizmoActor::FullAxisScaleZ");

// /Script/InteractiveToolsFramework.CombinedTransformGizmoBuilder
// Kind: Class; super: InteractiveGizmoBuilder
class UCombinedTransformGizmoBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.CombinedTransformGizmoContextObject
// Kind: Class; super: Object
class UCombinedTransformGizmoContextObject
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.ComponentBoundTransformProxy
// Kind: Class; super: TransformProxy
class UComponentBoundTransformProxy
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t bRotatePerObject; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetPivotMode; // 0x00D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1E]; // 0x00D2
    std::uint8_t SharedTransform[0x60]; // 0x00F0 (Size: 0x60, Type: StructProperty)
    std::uint8_t InitialSharedTransform[0x1]; // 0x0150 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UComponentBoundTransformProxy, bRotatePerObject) == 208, "Offset mismatch for UComponentBoundTransformProxy::bRotatePerObject");
static_assert(offsetof(UComponentBoundTransformProxy, bSetPivotMode) == 209, "Offset mismatch for UComponentBoundTransformProxy::bSetPivotMode");
static_assert(offsetof(UComponentBoundTransformProxy, SharedTransform) == 240, "Offset mismatch for UComponentBoundTransformProxy::SharedTransform");
static_assert(offsetof(UComponentBoundTransformProxy, InitialSharedTransform) == 336, "Offset mismatch for UComponentBoundTransformProxy::InitialSharedTransform");

// /Script/InteractiveToolsFramework.ContextObjectStore
// Kind: Class; super: Object
class UContextObjectStore
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ContextObjects; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UContextObjectStore, ContextObjects) == 40, "Offset mismatch for UContextObjectStore::ContextObjects");

// /Script/InteractiveToolsFramework.DoubleClickInputBehavior
// Kind: Class; super: SingleClickInputBehavior
class UDoubleClickInputBehavior
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t HitTestOnRelease; // 0x00B0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDoubleClickInputBehavior, HitTestOnRelease) == 176, "Offset mismatch for UDoubleClickInputBehavior::HitTestOnRelease");

// /Script/InteractiveToolsFramework.FreePositionSubGizmo
// Kind: Class; super: PlanePositionGizmo
class UFreePositionSubGizmo
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    TScriptInterface<void> TransformSource; // 0x0280 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UFreePositionSubGizmo, TransformSource) == 640, "Offset mismatch for UFreePositionSubGizmo::TransformSource");

// /Script/InteractiveToolsFramework.FreeRotationSubGizmo
// Kind: Class; super: InteractiveGizmo
class UFreeRotationSubGizmo
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TScriptInterface<void> AxisSource; // 0x0048 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> HitTarget; // 0x0058 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> StateTarget; // 0x0068 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> TransformSource; // 0x0078 (Size: 0x10, Type: InterfaceProperty)
    void* GizmoViewContext; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    void* MouseBehavior; // 0x0090 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFreeRotationSubGizmo, AxisSource) == 72, "Offset mismatch for UFreeRotationSubGizmo::AxisSource");
static_assert(offsetof(UFreeRotationSubGizmo, HitTarget) == 88, "Offset mismatch for UFreeRotationSubGizmo::HitTarget");
static_assert(offsetof(UFreeRotationSubGizmo, StateTarget) == 104, "Offset mismatch for UFreeRotationSubGizmo::StateTarget");
static_assert(offsetof(UFreeRotationSubGizmo, TransformSource) == 120, "Offset mismatch for UFreeRotationSubGizmo::TransformSource");
static_assert(offsetof(UFreeRotationSubGizmo, GizmoViewContext) == 136, "Offset mismatch for UFreeRotationSubGizmo::GizmoViewContext");
static_assert(offsetof(UFreeRotationSubGizmo, MouseBehavior) == 144, "Offset mismatch for UFreeRotationSubGizmo::MouseBehavior");

// /Script/InteractiveToolsFramework.GizmoActor
// Kind: Class; super: InternalToolFrameworkActor
class UGizmoActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t bIsSelectableInEditor; // 0x0270 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGizmoActor, bIsSelectableInEditor) == 624, "Offset mismatch for UGizmoActor::bIsSelectableInEditor");

// /Script/InteractiveToolsFramework.GizmoArrowComponent
// Kind: Class; super: GizmoBaseComponent
class UGizmoArrowComponent
{
public:
    std::uint8_t Pad_0000[0x5B0]; // 0x0000
    std::uint8_t Direction[0x18]; // 0x05B0 (Size: 0x18, Type: StructProperty)
    float Gap; // 0x05C8 (Size: 0x4, Type: FloatProperty)
    float Length; // 0x05CC (Size: 0x4, Type: FloatProperty)
    float Thickness; // 0x05D0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UGizmoArrowComponent, Direction) == 1456, "Offset mismatch for UGizmoArrowComponent::Direction");
static_assert(offsetof(UGizmoArrowComponent, Gap) == 1480, "Offset mismatch for UGizmoArrowComponent::Gap");
static_assert(offsetof(UGizmoArrowComponent, Length) == 1484, "Offset mismatch for UGizmoArrowComponent::Length");
static_assert(offsetof(UGizmoArrowComponent, Thickness) == 1488, "Offset mismatch for UGizmoArrowComponent::Thickness");

// /Script/InteractiveToolsFramework.GizmoAxisIntervalParameterSource
// Kind: Class; super: GizmoBaseFloatParameterSource
class UGizmoAxisIntervalParameterSource
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TScriptInterface<void> FloatParameterSource; // 0x0048 (Size: 0x10, Type: InterfaceProperty)
    float MinParameter; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float MaxParameter; // 0x005C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UGizmoAxisIntervalParameterSource, FloatParameterSource) == 72, "Offset mismatch for UGizmoAxisIntervalParameterSource::FloatParameterSource");
static_assert(offsetof(UGizmoAxisIntervalParameterSource, MinParameter) == 88, "Offset mismatch for UGizmoAxisIntervalParameterSource::MinParameter");
static_assert(offsetof(UGizmoAxisIntervalParameterSource, MaxParameter) == 92, "Offset mismatch for UGizmoAxisIntervalParameterSource::MaxParameter");

// /Script/InteractiveToolsFramework.GizmoAxisRotationParameterSource
// Kind: Class; super: GizmoBaseFloatParameterSource
class UGizmoAxisRotationParameterSource
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    TScriptInterface<void> AxisSource; // 0x00B0 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> TransformSource; // 0x00C0 (Size: 0x10, Type: InterfaceProperty)
    float Angle; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LastChange[0xC]; // 0x00D4 (Size: 0xC, Type: StructProperty)
    std::uint8_t CurRotationAxis[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurRotationOrigin[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t InitialTransform[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGizmoAxisRotationParameterSource, AxisSource) == 176, "Offset mismatch for UGizmoAxisRotationParameterSource::AxisSource");
static_assert(offsetof(UGizmoAxisRotationParameterSource, TransformSource) == 192, "Offset mismatch for UGizmoAxisRotationParameterSource::TransformSource");
static_assert(offsetof(UGizmoAxisRotationParameterSource, Angle) == 208, "Offset mismatch for UGizmoAxisRotationParameterSource::Angle");
static_assert(offsetof(UGizmoAxisRotationParameterSource, LastChange) == 212, "Offset mismatch for UGizmoAxisRotationParameterSource::LastChange");
static_assert(offsetof(UGizmoAxisRotationParameterSource, CurRotationAxis) == 224, "Offset mismatch for UGizmoAxisRotationParameterSource::CurRotationAxis");
static_assert(offsetof(UGizmoAxisRotationParameterSource, CurRotationOrigin) == 248, "Offset mismatch for UGizmoAxisRotationParameterSource::CurRotationOrigin");
static_assert(offsetof(UGizmoAxisRotationParameterSource, InitialTransform) == 272, "Offset mismatch for UGizmoAxisRotationParameterSource::InitialTransform");

// /Script/InteractiveToolsFramework.GizmoAxisScaleParameterSource
// Kind: Class; super: GizmoBaseFloatParameterSource
class UGizmoAxisScaleParameterSource
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    TScriptInterface<void> AxisSource; // 0x00B0 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> TransformSource; // 0x00C0 (Size: 0x10, Type: InterfaceProperty)
    float ScaleMultiplier; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bClampToZero; // 0x00D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00D5
    float Parameter; // 0x00D8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LastChange[0xC]; // 0x00DC (Size: 0xC, Type: StructProperty)
    std::uint8_t CurScaleAxis[0x18]; // 0x00E8 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurScaleOrigin[0x20]; // 0x0100 (Size: 0x20, Type: StructProperty)
    std::uint8_t InitialTransform[0x1]; // 0x0120 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGizmoAxisScaleParameterSource, AxisSource) == 176, "Offset mismatch for UGizmoAxisScaleParameterSource::AxisSource");
static_assert(offsetof(UGizmoAxisScaleParameterSource, TransformSource) == 192, "Offset mismatch for UGizmoAxisScaleParameterSource::TransformSource");
static_assert(offsetof(UGizmoAxisScaleParameterSource, ScaleMultiplier) == 208, "Offset mismatch for UGizmoAxisScaleParameterSource::ScaleMultiplier");
static_assert(offsetof(UGizmoAxisScaleParameterSource, bClampToZero) == 212, "Offset mismatch for UGizmoAxisScaleParameterSource::bClampToZero");
static_assert(offsetof(UGizmoAxisScaleParameterSource, Parameter) == 216, "Offset mismatch for UGizmoAxisScaleParameterSource::Parameter");
static_assert(offsetof(UGizmoAxisScaleParameterSource, LastChange) == 220, "Offset mismatch for UGizmoAxisScaleParameterSource::LastChange");
static_assert(offsetof(UGizmoAxisScaleParameterSource, CurScaleAxis) == 232, "Offset mismatch for UGizmoAxisScaleParameterSource::CurScaleAxis");
static_assert(offsetof(UGizmoAxisScaleParameterSource, CurScaleOrigin) == 256, "Offset mismatch for UGizmoAxisScaleParameterSource::CurScaleOrigin");
static_assert(offsetof(UGizmoAxisScaleParameterSource, InitialTransform) == 288, "Offset mismatch for UGizmoAxisScaleParameterSource::InitialTransform");

// /Script/InteractiveToolsFramework.GizmoAxisSource
// Kind: Class; super: Interface
class UGizmoAxisSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.GizmoAxisTranslationParameterSource
// Kind: Class; super: GizmoBaseFloatParameterSource
class UGizmoAxisTranslationParameterSource
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    TScriptInterface<void> AxisSource; // 0x00B0 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> TransformSource; // 0x00C0 (Size: 0x10, Type: InterfaceProperty)
    float Parameter; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LastChange[0xC]; // 0x00D4 (Size: 0xC, Type: StructProperty)
    std::uint8_t CurTranslationAxis[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurTranslationOrigin[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t InitialTransform[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGizmoAxisTranslationParameterSource, AxisSource) == 176, "Offset mismatch for UGizmoAxisTranslationParameterSource::AxisSource");
static_assert(offsetof(UGizmoAxisTranslationParameterSource, TransformSource) == 192, "Offset mismatch for UGizmoAxisTranslationParameterSource::TransformSource");
static_assert(offsetof(UGizmoAxisTranslationParameterSource, Parameter) == 208, "Offset mismatch for UGizmoAxisTranslationParameterSource::Parameter");
static_assert(offsetof(UGizmoAxisTranslationParameterSource, LastChange) == 212, "Offset mismatch for UGizmoAxisTranslationParameterSource::LastChange");
static_assert(offsetof(UGizmoAxisTranslationParameterSource, CurTranslationAxis) == 224, "Offset mismatch for UGizmoAxisTranslationParameterSource::CurTranslationAxis");
static_assert(offsetof(UGizmoAxisTranslationParameterSource, CurTranslationOrigin) == 248, "Offset mismatch for UGizmoAxisTranslationParameterSource::CurTranslationOrigin");
static_assert(offsetof(UGizmoAxisTranslationParameterSource, InitialTransform) == 272, "Offset mismatch for UGizmoAxisTranslationParameterSource::InitialTransform");

// /Script/InteractiveToolsFramework.GizmoBaseComponent
// Kind: Class; super: PrimitiveComponent
class UGizmoBaseComponent
{
public:
    std::uint8_t Pad_0000[0x578]; // 0x0000
    std::uint8_t Color[0x10]; // 0x0578 (Size: 0x10, Type: StructProperty)
    float HoverSizeMultiplier; // 0x0588 (Size: 0x4, Type: FloatProperty)
    float PixelHitDistanceThreshold; // 0x058C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0590
    void* GizmoViewContext; // 0x0598 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGizmoBaseComponent, Color) == 1400, "Offset mismatch for UGizmoBaseComponent::Color");
static_assert(offsetof(UGizmoBaseComponent, HoverSizeMultiplier) == 1416, "Offset mismatch for UGizmoBaseComponent::HoverSizeMultiplier");
static_assert(offsetof(UGizmoBaseComponent, PixelHitDistanceThreshold) == 1420, "Offset mismatch for UGizmoBaseComponent::PixelHitDistanceThreshold");
static_assert(offsetof(UGizmoBaseComponent, GizmoViewContext) == 1432, "Offset mismatch for UGizmoBaseComponent::GizmoViewContext");

// /Script/InteractiveToolsFramework.GizmoBaseComponentInterface
// Kind: Class; super: Interface
class UGizmoBaseComponentInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.GizmoBaseFloatParameterSource
// Kind: Class; super: Object
class UGizmoBaseFloatParameterSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.GizmoBaseTransformSource
// Kind: Class; super: Object
class UGizmoBaseTransformSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.GizmoBaseVec2ParameterSource
// Kind: Class; super: Object
class UGizmoBaseVec2ParameterSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.GizmoBoxComponent
// Kind: Class; super: GizmoBaseComponent
class UGizmoBoxComponent
{
public:
    std::uint8_t Pad_0000[0x5B0]; // 0x0000
    std::uint8_t origin[0x20]; // 0x05B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t Rotation[0x20]; // 0x05D0 (Size: 0x20, Type: StructProperty)
    std::uint8_t Dimensions[0x18]; // 0x05F0 (Size: 0x18, Type: StructProperty)
    float LineThickness; // 0x0608 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bRemoveHiddenLines; // 0x060C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableAxisFlip; // 0x060D (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGizmoBoxComponent, origin) == 1456, "Offset mismatch for UGizmoBoxComponent::origin");
static_assert(offsetof(UGizmoBoxComponent, Rotation) == 1488, "Offset mismatch for UGizmoBoxComponent::Rotation");
static_assert(offsetof(UGizmoBoxComponent, Dimensions) == 1520, "Offset mismatch for UGizmoBoxComponent::Dimensions");
static_assert(offsetof(UGizmoBoxComponent, LineThickness) == 1544, "Offset mismatch for UGizmoBoxComponent::LineThickness");
static_assert(offsetof(UGizmoBoxComponent, bRemoveHiddenLines) == 1548, "Offset mismatch for UGizmoBoxComponent::bRemoveHiddenLines");
static_assert(offsetof(UGizmoBoxComponent, bEnableAxisFlip) == 1549, "Offset mismatch for UGizmoBoxComponent::bEnableAxisFlip");

// /Script/InteractiveToolsFramework.GizmoCircleComponent
// Kind: Class; super: GizmoBaseComponent
class UGizmoCircleComponent
{
public:
    std::uint8_t Pad_0000[0x5B0]; // 0x0000
    std::uint8_t Normal[0x18]; // 0x05B0 (Size: 0x18, Type: StructProperty)
    float Radius; // 0x05C8 (Size: 0x4, Type: FloatProperty)
    float Thickness; // 0x05CC (Size: 0x4, Type: FloatProperty)
    std::int32_t NumSides; // 0x05D0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bViewAligned; // 0x05D4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawFullCircle; // 0x05D5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyAllowFrontFacingHits; // 0x05D6 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGizmoCircleComponent, Normal) == 1456, "Offset mismatch for UGizmoCircleComponent::Normal");
static_assert(offsetof(UGizmoCircleComponent, Radius) == 1480, "Offset mismatch for UGizmoCircleComponent::Radius");
static_assert(offsetof(UGizmoCircleComponent, Thickness) == 1484, "Offset mismatch for UGizmoCircleComponent::Thickness");
static_assert(offsetof(UGizmoCircleComponent, NumSides) == 1488, "Offset mismatch for UGizmoCircleComponent::NumSides");
static_assert(offsetof(UGizmoCircleComponent, bViewAligned) == 1492, "Offset mismatch for UGizmoCircleComponent::bViewAligned");
static_assert(offsetof(UGizmoCircleComponent, bDrawFullCircle) == 1493, "Offset mismatch for UGizmoCircleComponent::bDrawFullCircle");
static_assert(offsetof(UGizmoCircleComponent, bOnlyAllowFrontFacingHits) == 1494, "Offset mismatch for UGizmoCircleComponent::bOnlyAllowFrontFacingHits");

// /Script/InteractiveToolsFramework.GizmoClickMultiTarget
// Kind: Class; super: Interface
class UGizmoClickMultiTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.GizmoClickTarget
// Kind: Class; super: Interface
class UGizmoClickTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.GizmoComponentAxisSource
// Kind: Class; super: Object
class UGizmoComponentAxisSource
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Component; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::int32_t AxisIndex; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t bLocalAxes; // 0x003C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGizmoComponentAxisSource, Component) == 48, "Offset mismatch for UGizmoComponentAxisSource::Component");
static_assert(offsetof(UGizmoComponentAxisSource, AxisIndex) == 56, "Offset mismatch for UGizmoComponentAxisSource::AxisIndex");
static_assert(offsetof(UGizmoComponentAxisSource, bLocalAxes) == 60, "Offset mismatch for UGizmoComponentAxisSource::bLocalAxes");

// /Script/InteractiveToolsFramework.GizmoComponentHitTarget
// Kind: Class; super: Object
class UGizmoComponentHitTarget
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Component; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGizmoComponentHitTarget, Component) == 48, "Offset mismatch for UGizmoComponentHitTarget::Component");

// /Script/InteractiveToolsFramework.GizmoComponentWorldTransformSource
// Kind: Class; super: GizmoBaseTransformSource
class UGizmoComponentWorldTransformSource
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Component; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bModifyComponentOnTransform; // 0x0050 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGizmoComponentWorldTransformSource, Component) == 72, "Offset mismatch for UGizmoComponentWorldTransformSource::Component");
static_assert(offsetof(UGizmoComponentWorldTransformSource, bModifyComponentOnTransform) == 80, "Offset mismatch for UGizmoComponentWorldTransformSource::bModifyComponentOnTransform");

// /Script/InteractiveToolsFramework.GizmoConstantAxisSource
// Kind: Class; super: Object
class UGizmoConstantAxisSource
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t origin[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t Direction[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGizmoConstantAxisSource, origin) == 48, "Offset mismatch for UGizmoConstantAxisSource::origin");
static_assert(offsetof(UGizmoConstantAxisSource, Direction) == 72, "Offset mismatch for UGizmoConstantAxisSource::Direction");

// /Script/InteractiveToolsFramework.GizmoConstantFrameAxisSource
// Kind: Class; super: Object
class UGizmoConstantFrameAxisSource
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t origin[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t Direction[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    std::uint8_t TangentX[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t TangentY[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGizmoConstantFrameAxisSource, origin) == 48, "Offset mismatch for UGizmoConstantFrameAxisSource::origin");
static_assert(offsetof(UGizmoConstantFrameAxisSource, Direction) == 72, "Offset mismatch for UGizmoConstantFrameAxisSource::Direction");
static_assert(offsetof(UGizmoConstantFrameAxisSource, TangentX) == 96, "Offset mismatch for UGizmoConstantFrameAxisSource::TangentX");
static_assert(offsetof(UGizmoConstantFrameAxisSource, TangentY) == 120, "Offset mismatch for UGizmoConstantFrameAxisSource::TangentY");

// /Script/InteractiveToolsFramework.GizmoElementArc
// Kind: Class; super: GizmoElementCircleBase
class UGizmoElementArc
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    double InnerRadius; // 0x02F0 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UGizmoElementArc, InnerRadius) == 752, "Offset mismatch for UGizmoElementArc::InnerRadius");

// /Script/InteractiveToolsFramework.GizmoElementArrow
// Kind: Class; super: GizmoElementGroupBase
class UGizmoElementArrow
{
public:
    std::uint8_t Pad_0000[0x258]; // 0x0000
    void* CylinderElement; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    void* HeadElement; // 0x0260 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t base[0x18]; // 0x0268 (Size: 0x18, Type: StructProperty)
    std::uint8_t Direction[0x18]; // 0x0280 (Size: 0x18, Type: StructProperty)
    std::uint8_t SideDirection[0x18]; // 0x0298 (Size: 0x18, Type: StructProperty)
    float BodyLength; // 0x02B0 (Size: 0x4, Type: FloatProperty)
    float BodyRadius; // 0x02B4 (Size: 0x4, Type: FloatProperty)
    float HeadLength; // 0x02B8 (Size: 0x4, Type: FloatProperty)
    float HeadRadius; // 0x02BC (Size: 0x4, Type: FloatProperty)
    std::int32_t NumSides; // 0x02C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t bEndCaps; // 0x02C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x02C5
    std::uint8_t HeadType; // 0x02C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x02C9
    TWeakObjectPtr<void> HitMask; // 0x02CC (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UGizmoElementArrow, CylinderElement) == 600, "Offset mismatch for UGizmoElementArrow::CylinderElement");
static_assert(offsetof(UGizmoElementArrow, HeadElement) == 608, "Offset mismatch for UGizmoElementArrow::HeadElement");
static_assert(offsetof(UGizmoElementArrow, base) == 616, "Offset mismatch for UGizmoElementArrow::base");
static_assert(offsetof(UGizmoElementArrow, Direction) == 640, "Offset mismatch for UGizmoElementArrow::Direction");
static_assert(offsetof(UGizmoElementArrow, SideDirection) == 664, "Offset mismatch for UGizmoElementArrow::SideDirection");
static_assert(offsetof(UGizmoElementArrow, BodyLength) == 688, "Offset mismatch for UGizmoElementArrow::BodyLength");
static_assert(offsetof(UGizmoElementArrow, BodyRadius) == 692, "Offset mismatch for UGizmoElementArrow::BodyRadius");
static_assert(offsetof(UGizmoElementArrow, HeadLength) == 696, "Offset mismatch for UGizmoElementArrow::HeadLength");
static_assert(offsetof(UGizmoElementArrow, HeadRadius) == 700, "Offset mismatch for UGizmoElementArrow::HeadRadius");
static_assert(offsetof(UGizmoElementArrow, NumSides) == 704, "Offset mismatch for UGizmoElementArrow::NumSides");
static_assert(offsetof(UGizmoElementArrow, bEndCaps) == 708, "Offset mismatch for UGizmoElementArrow::bEndCaps");
static_assert(offsetof(UGizmoElementArrow, HeadType) == 712, "Offset mismatch for UGizmoElementArrow::HeadType");
static_assert(offsetof(UGizmoElementArrow, HitMask) == 716, "Offset mismatch for UGizmoElementArrow::HitMask");

// /Script/InteractiveToolsFramework.GizmoElementArrowHead
// Kind: Class; super: GizmoElementGroupBase
class UGizmoElementArrowHead
{
public:
    std::uint8_t Pad_0000[0x258]; // 0x0000
    void* ConeElement; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    void* BoxElement; // 0x0260 (Size: 0x8, Type: ObjectProperty)
    void* SphereElement; // 0x0268 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Center[0x18]; // 0x0270 (Size: 0x18, Type: StructProperty)
    std::uint8_t Direction[0x18]; // 0x0288 (Size: 0x18, Type: StructProperty)
    std::uint8_t SideDirection[0x18]; // 0x02A0 (Size: 0x18, Type: StructProperty)
    float Length; // 0x02B8 (Size: 0x4, Type: FloatProperty)
    float Radius; // 0x02BC (Size: 0x4, Type: FloatProperty)
    std::int32_t NumSides; // 0x02C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Type; // 0x02C4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x02C5
    TWeakObjectPtr<void> HitMask; // 0x02C8 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UGizmoElementArrowHead, ConeElement) == 600, "Offset mismatch for UGizmoElementArrowHead::ConeElement");
static_assert(offsetof(UGizmoElementArrowHead, BoxElement) == 608, "Offset mismatch for UGizmoElementArrowHead::BoxElement");
static_assert(offsetof(UGizmoElementArrowHead, SphereElement) == 616, "Offset mismatch for UGizmoElementArrowHead::SphereElement");
static_assert(offsetof(UGizmoElementArrowHead, Center) == 624, "Offset mismatch for UGizmoElementArrowHead::Center");
static_assert(offsetof(UGizmoElementArrowHead, Direction) == 648, "Offset mismatch for UGizmoElementArrowHead::Direction");
static_assert(offsetof(UGizmoElementArrowHead, SideDirection) == 672, "Offset mismatch for UGizmoElementArrowHead::SideDirection");
static_assert(offsetof(UGizmoElementArrowHead, Length) == 696, "Offset mismatch for UGizmoElementArrowHead::Length");
static_assert(offsetof(UGizmoElementArrowHead, Radius) == 700, "Offset mismatch for UGizmoElementArrowHead::Radius");
static_assert(offsetof(UGizmoElementArrowHead, NumSides) == 704, "Offset mismatch for UGizmoElementArrowHead::NumSides");
static_assert(offsetof(UGizmoElementArrowHead, Type) == 708, "Offset mismatch for UGizmoElementArrowHead::Type");
static_assert(offsetof(UGizmoElementArrowHead, HitMask) == 712, "Offset mismatch for UGizmoElementArrowHead::HitMask");

// /Script/InteractiveToolsFramework.GizmoElementBase
// Kind: Class; super: Object
class UGizmoElementBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnabledForPerspectiveProjection; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnabledForOrthographicProjection; // 0x002A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnabledForDefaultState; // 0x002B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnabledForHoveringState; // 0x002C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnabledForInteractingState; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnabledForSelectedState; // 0x002E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnabledForSubduedState; // 0x002F (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x60]; // 0x0030
    std::uint32_t PartIdentifier; // 0x0090 (Size: 0x4, Type: UInt32Property)
    std::uint8_t MeshRenderAttributes[0xA0]; // 0x0094 (Size: 0xA0, Type: StructProperty)
    std::uint8_t ElementState; // 0x0134 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0135
    std::uint8_t ElementInteractionState; // 0x0138 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0139
    std::uint8_t ViewDependentType; // 0x013C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x3]; // 0x013D
    std::uint8_t ViewDependentAxis[0x18]; // 0x0140 (Size: 0x18, Type: StructProperty)
    float ViewDependentAngleTol; // 0x0158 (Size: 0x4, Type: FloatProperty)
    float ViewDependentAxialMaxCosAngleTol; // 0x015C (Size: 0x4, Type: FloatProperty)
    float ViewDependentPlanarMinCosAngleTol; // 0x0160 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ViewAlignType; // 0x0164 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0165
    std::uint8_t ViewAlignAxis[0x18]; // 0x0168 (Size: 0x18, Type: StructProperty)
    std::uint8_t ViewAlignNormal[0x18]; // 0x0180 (Size: 0x18, Type: StructProperty)
    float ViewAlignAxialAngleTol; // 0x0198 (Size: 0x4, Type: FloatProperty)
    float ViewAlignAxialMaxCosAngleTol; // 0x019C (Size: 0x4, Type: FloatProperty)
    float PixelHitDistanceThreshold; // 0x01A0 (Size: 0x4, Type: FloatProperty)
    float MinimumPixelHitDistanceThreshold; // 0x01A4 (Size: 0x4, Type: FloatProperty)
    std::int32_t HitPriority; // 0x01A8 (Size: 0x4, Type: IntProperty)
    float ViewDepthOffset; // 0x01AC (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UGizmoElementBase, bEnabled) == 40, "Offset mismatch for UGizmoElementBase::bEnabled");
static_assert(offsetof(UGizmoElementBase, bEnabledForPerspectiveProjection) == 41, "Offset mismatch for UGizmoElementBase::bEnabledForPerspectiveProjection");
static_assert(offsetof(UGizmoElementBase, bEnabledForOrthographicProjection) == 42, "Offset mismatch for UGizmoElementBase::bEnabledForOrthographicProjection");
static_assert(offsetof(UGizmoElementBase, bEnabledForDefaultState) == 43, "Offset mismatch for UGizmoElementBase::bEnabledForDefaultState");
static_assert(offsetof(UGizmoElementBase, bEnabledForHoveringState) == 44, "Offset mismatch for UGizmoElementBase::bEnabledForHoveringState");
static_assert(offsetof(UGizmoElementBase, bEnabledForInteractingState) == 45, "Offset mismatch for UGizmoElementBase::bEnabledForInteractingState");
static_assert(offsetof(UGizmoElementBase, bEnabledForSelectedState) == 46, "Offset mismatch for UGizmoElementBase::bEnabledForSelectedState");
static_assert(offsetof(UGizmoElementBase, bEnabledForSubduedState) == 47, "Offset mismatch for UGizmoElementBase::bEnabledForSubduedState");
static_assert(offsetof(UGizmoElementBase, PartIdentifier) == 144, "Offset mismatch for UGizmoElementBase::PartIdentifier");
static_assert(offsetof(UGizmoElementBase, MeshRenderAttributes) == 148, "Offset mismatch for UGizmoElementBase::MeshRenderAttributes");
static_assert(offsetof(UGizmoElementBase, ElementState) == 308, "Offset mismatch for UGizmoElementBase::ElementState");
static_assert(offsetof(UGizmoElementBase, ElementInteractionState) == 312, "Offset mismatch for UGizmoElementBase::ElementInteractionState");
static_assert(offsetof(UGizmoElementBase, ViewDependentType) == 316, "Offset mismatch for UGizmoElementBase::ViewDependentType");
static_assert(offsetof(UGizmoElementBase, ViewDependentAxis) == 320, "Offset mismatch for UGizmoElementBase::ViewDependentAxis");
static_assert(offsetof(UGizmoElementBase, ViewDependentAngleTol) == 344, "Offset mismatch for UGizmoElementBase::ViewDependentAngleTol");
static_assert(offsetof(UGizmoElementBase, ViewDependentAxialMaxCosAngleTol) == 348, "Offset mismatch for UGizmoElementBase::ViewDependentAxialMaxCosAngleTol");
static_assert(offsetof(UGizmoElementBase, ViewDependentPlanarMinCosAngleTol) == 352, "Offset mismatch for UGizmoElementBase::ViewDependentPlanarMinCosAngleTol");
static_assert(offsetof(UGizmoElementBase, ViewAlignType) == 356, "Offset mismatch for UGizmoElementBase::ViewAlignType");
static_assert(offsetof(UGizmoElementBase, ViewAlignAxis) == 360, "Offset mismatch for UGizmoElementBase::ViewAlignAxis");
static_assert(offsetof(UGizmoElementBase, ViewAlignNormal) == 384, "Offset mismatch for UGizmoElementBase::ViewAlignNormal");
static_assert(offsetof(UGizmoElementBase, ViewAlignAxialAngleTol) == 408, "Offset mismatch for UGizmoElementBase::ViewAlignAxialAngleTol");
static_assert(offsetof(UGizmoElementBase, ViewAlignAxialMaxCosAngleTol) == 412, "Offset mismatch for UGizmoElementBase::ViewAlignAxialMaxCosAngleTol");
static_assert(offsetof(UGizmoElementBase, PixelHitDistanceThreshold) == 416, "Offset mismatch for UGizmoElementBase::PixelHitDistanceThreshold");
static_assert(offsetof(UGizmoElementBase, MinimumPixelHitDistanceThreshold) == 420, "Offset mismatch for UGizmoElementBase::MinimumPixelHitDistanceThreshold");
static_assert(offsetof(UGizmoElementBase, HitPriority) == 424, "Offset mismatch for UGizmoElementBase::HitPriority");
static_assert(offsetof(UGizmoElementBase, ViewDepthOffset) == 428, "Offset mismatch for UGizmoElementBase::ViewDepthOffset");

// /Script/InteractiveToolsFramework.GizmoElementBox
// Kind: Class; super: GizmoElementBase
class UGizmoElementBox
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    std::uint8_t Center[0x18]; // 0x01B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Dimensions[0x18]; // 0x01C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t UpDirection[0x18]; // 0x01E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t SideDirection[0x1]; // 0x01F8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGizmoElementBox, Center) == 432, "Offset mismatch for UGizmoElementBox::Center");
static_assert(offsetof(UGizmoElementBox, Dimensions) == 456, "Offset mismatch for UGizmoElementBox::Dimensions");
static_assert(offsetof(UGizmoElementBox, UpDirection) == 480, "Offset mismatch for UGizmoElementBox::UpDirection");
static_assert(offsetof(UGizmoElementBox, SideDirection) == 504, "Offset mismatch for UGizmoElementBox::SideDirection");

// /Script/InteractiveToolsFramework.GizmoElementCircle
// Kind: Class; super: GizmoElementCircleBase
class UGizmoElementCircle
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    std::uint8_t bDrawMesh; // 0x02F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawLine; // 0x02F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHitMesh; // 0x02F2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHitLine; // 0x02F3 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGizmoElementCircle, bDrawMesh) == 752, "Offset mismatch for UGizmoElementCircle::bDrawMesh");
static_assert(offsetof(UGizmoElementCircle, bDrawLine) == 753, "Offset mismatch for UGizmoElementCircle::bDrawLine");
static_assert(offsetof(UGizmoElementCircle, bHitMesh) == 754, "Offset mismatch for UGizmoElementCircle::bHitMesh");
static_assert(offsetof(UGizmoElementCircle, bHitLine) == 755, "Offset mismatch for UGizmoElementCircle::bHitLine");

// /Script/InteractiveToolsFramework.GizmoElementCircleBase
// Kind: Class; super: GizmoElementLineBase
class UGizmoElementCircleBase
{
public:
    std::uint8_t Pad_0000[0x230]; // 0x0000
    std::uint8_t Center[0x18]; // 0x0230 (Size: 0x18, Type: StructProperty)
    std::uint8_t Axis0[0x18]; // 0x0248 (Size: 0x18, Type: StructProperty)
    std::uint8_t Axis1[0x18]; // 0x0260 (Size: 0x18, Type: StructProperty)
    double Radius; // 0x0278 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t RadiusMultiplier[0x50]; // 0x0280 (Size: 0x50, Type: StructProperty)
    std::int32_t NumSegments; // 0x02D0 (Size: 0x4, Type: IntProperty)
    std::uint8_t PartialType; // 0x02D4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x02D5
    double PartialStartAngle; // 0x02D8 (Size: 0x8, Type: DoubleProperty)
    double PartialEndAngle; // 0x02E0 (Size: 0x8, Type: DoubleProperty)
    double PartialViewDependentMaxCosTol; // 0x02E8 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UGizmoElementCircleBase, Center) == 560, "Offset mismatch for UGizmoElementCircleBase::Center");
static_assert(offsetof(UGizmoElementCircleBase, Axis0) == 584, "Offset mismatch for UGizmoElementCircleBase::Axis0");
static_assert(offsetof(UGizmoElementCircleBase, Axis1) == 608, "Offset mismatch for UGizmoElementCircleBase::Axis1");
static_assert(offsetof(UGizmoElementCircleBase, Radius) == 632, "Offset mismatch for UGizmoElementCircleBase::Radius");
static_assert(offsetof(UGizmoElementCircleBase, RadiusMultiplier) == 640, "Offset mismatch for UGizmoElementCircleBase::RadiusMultiplier");
static_assert(offsetof(UGizmoElementCircleBase, NumSegments) == 720, "Offset mismatch for UGizmoElementCircleBase::NumSegments");
static_assert(offsetof(UGizmoElementCircleBase, PartialType) == 724, "Offset mismatch for UGizmoElementCircleBase::PartialType");
static_assert(offsetof(UGizmoElementCircleBase, PartialStartAngle) == 728, "Offset mismatch for UGizmoElementCircleBase::PartialStartAngle");
static_assert(offsetof(UGizmoElementCircleBase, PartialEndAngle) == 736, "Offset mismatch for UGizmoElementCircleBase::PartialEndAngle");
static_assert(offsetof(UGizmoElementCircleBase, PartialViewDependentMaxCosTol) == 744, "Offset mismatch for UGizmoElementCircleBase::PartialViewDependentMaxCosTol");

// /Script/InteractiveToolsFramework.GizmoElementCone
// Kind: Class; super: GizmoElementBase
class UGizmoElementCone
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    std::uint8_t origin[0x18]; // 0x01B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Direction[0x18]; // 0x01C8 (Size: 0x18, Type: StructProperty)
    float Height; // 0x01E0 (Size: 0x4, Type: FloatProperty)
    float Radius; // 0x01E4 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumSides; // 0x01E8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bEndCaps; // 0x01EC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGizmoElementCone, origin) == 432, "Offset mismatch for UGizmoElementCone::origin");
static_assert(offsetof(UGizmoElementCone, Direction) == 456, "Offset mismatch for UGizmoElementCone::Direction");
static_assert(offsetof(UGizmoElementCone, Height) == 480, "Offset mismatch for UGizmoElementCone::Height");
static_assert(offsetof(UGizmoElementCone, Radius) == 484, "Offset mismatch for UGizmoElementCone::Radius");
static_assert(offsetof(UGizmoElementCone, NumSides) == 488, "Offset mismatch for UGizmoElementCone::NumSides");
static_assert(offsetof(UGizmoElementCone, bEndCaps) == 492, "Offset mismatch for UGizmoElementCone::bEndCaps");

// /Script/InteractiveToolsFramework.GizmoElementCylinder
// Kind: Class; super: GizmoElementBase
class UGizmoElementCylinder
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    std::uint8_t base[0x18]; // 0x01B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t Direction[0x18]; // 0x01C8 (Size: 0x18, Type: StructProperty)
    float Height; // 0x01E0 (Size: 0x4, Type: FloatProperty)
    float Radius; // 0x01E4 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumSides; // 0x01E8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsDashed; // 0x01EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x01ED
    float DashLength; // 0x01F0 (Size: 0x4, Type: FloatProperty)
    float DashGapLength; // 0x01F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bScreenSpace; // 0x01F8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGizmoElementCylinder, base) == 432, "Offset mismatch for UGizmoElementCylinder::base");
static_assert(offsetof(UGizmoElementCylinder, Direction) == 456, "Offset mismatch for UGizmoElementCylinder::Direction");
static_assert(offsetof(UGizmoElementCylinder, Height) == 480, "Offset mismatch for UGizmoElementCylinder::Height");
static_assert(offsetof(UGizmoElementCylinder, Radius) == 484, "Offset mismatch for UGizmoElementCylinder::Radius");
static_assert(offsetof(UGizmoElementCylinder, NumSides) == 488, "Offset mismatch for UGizmoElementCylinder::NumSides");
static_assert(offsetof(UGizmoElementCylinder, bIsDashed) == 492, "Offset mismatch for UGizmoElementCylinder::bIsDashed");
static_assert(offsetof(UGizmoElementCylinder, DashLength) == 496, "Offset mismatch for UGizmoElementCylinder::DashLength");
static_assert(offsetof(UGizmoElementCylinder, DashGapLength) == 500, "Offset mismatch for UGizmoElementCylinder::DashGapLength");
static_assert(offsetof(UGizmoElementCylinder, bScreenSpace) == 504, "Offset mismatch for UGizmoElementCylinder::bScreenSpace");

// /Script/InteractiveToolsFramework.GizmoElementGroup
// Kind: Class; super: GizmoElementGroupBase
class UGizmoElementGroup
{
public:
    std::uint8_t Pad_0000[0x230]; // 0x0000
    std::uint8_t bConstantScale; // 0x0230 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHitOwner; // 0x0231 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0232
    TArray<void*> Elements; // 0x0238 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGizmoElementGroup, bConstantScale) == 560, "Offset mismatch for UGizmoElementGroup::bConstantScale");
static_assert(offsetof(UGizmoElementGroup, bHitOwner) == 561, "Offset mismatch for UGizmoElementGroup::bHitOwner");
static_assert(offsetof(UGizmoElementGroup, Elements) == 568, "Offset mismatch for UGizmoElementGroup::Elements");

// /Script/InteractiveToolsFramework.GizmoElementGroupBase
// Kind: Class; super: GizmoElementLineBase
class UGizmoElementGroupBase
{
public:
    std::uint8_t Pad_0000[0x230]; // 0x0000
    std::uint8_t bConstantScale; // 0x0230 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHitOwner; // 0x0231 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0232
    TArray<void*> Elements; // 0x0238 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGizmoElementGroupBase, bConstantScale) == 560, "Offset mismatch for UGizmoElementGroupBase::bConstantScale");
static_assert(offsetof(UGizmoElementGroupBase, bHitOwner) == 561, "Offset mismatch for UGizmoElementGroupBase::bHitOwner");
static_assert(offsetof(UGizmoElementGroupBase, Elements) == 568, "Offset mismatch for UGizmoElementGroupBase::Elements");

// /Script/InteractiveToolsFramework.GizmoElementHitMultiTarget
// Kind: Class; super: Object
class UGizmoElementHitMultiTarget
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* GizmoElement; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* GizmoViewContext; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* GizmoTransformProxy; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGizmoElementHitMultiTarget, GizmoElement) == 48, "Offset mismatch for UGizmoElementHitMultiTarget::GizmoElement");
static_assert(offsetof(UGizmoElementHitMultiTarget, GizmoViewContext) == 56, "Offset mismatch for UGizmoElementHitMultiTarget::GizmoViewContext");
static_assert(offsetof(UGizmoElementHitMultiTarget, GizmoTransformProxy) == 64, "Offset mismatch for UGizmoElementHitMultiTarget::GizmoTransformProxy");

// /Script/InteractiveToolsFramework.GizmoElementHitTarget
// Kind: Class; super: Object
class UGizmoElementHitTarget
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* GizmoElement; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* GizmoViewContext; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* GizmoTransformProxy; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGizmoElementHitTarget, GizmoElement) == 48, "Offset mismatch for UGizmoElementHitTarget::GizmoElement");
static_assert(offsetof(UGizmoElementHitTarget, GizmoViewContext) == 56, "Offset mismatch for UGizmoElementHitTarget::GizmoViewContext");
static_assert(offsetof(UGizmoElementHitTarget, GizmoTransformProxy) == 64, "Offset mismatch for UGizmoElementHitTarget::GizmoTransformProxy");

// /Script/InteractiveToolsFramework.GizmoElementLineBase
// Kind: Class; super: GizmoElementBase
class UGizmoElementLineBase
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    std::uint8_t LineRenderAttributes[0x64]; // 0x01B0 (Size: 0x64, Type: StructProperty)
    float LineThickness; // 0x0214 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bScreenSpaceLine; // 0x0218 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0219
    float HoverLineThicknessMultiplier; // 0x021C (Size: 0x4, Type: FloatProperty)
    float InteractLineThicknessMultiplier; // 0x0220 (Size: 0x4, Type: FloatProperty)
    float SelectLineThicknessMultiplier; // 0x0224 (Size: 0x4, Type: FloatProperty)
    float SubdueLineThicknessMultiplier; // 0x0228 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UGizmoElementLineBase, LineRenderAttributes) == 432, "Offset mismatch for UGizmoElementLineBase::LineRenderAttributes");
static_assert(offsetof(UGizmoElementLineBase, LineThickness) == 532, "Offset mismatch for UGizmoElementLineBase::LineThickness");
static_assert(offsetof(UGizmoElementLineBase, bScreenSpaceLine) == 536, "Offset mismatch for UGizmoElementLineBase::bScreenSpaceLine");
static_assert(offsetof(UGizmoElementLineBase, HoverLineThicknessMultiplier) == 540, "Offset mismatch for UGizmoElementLineBase::HoverLineThicknessMultiplier");
static_assert(offsetof(UGizmoElementLineBase, InteractLineThicknessMultiplier) == 544, "Offset mismatch for UGizmoElementLineBase::InteractLineThicknessMultiplier");
static_assert(offsetof(UGizmoElementLineBase, SelectLineThicknessMultiplier) == 548, "Offset mismatch for UGizmoElementLineBase::SelectLineThicknessMultiplier");
static_assert(offsetof(UGizmoElementLineBase, SubdueLineThicknessMultiplier) == 552, "Offset mismatch for UGizmoElementLineBase::SubdueLineThicknessMultiplier");

// /Script/InteractiveToolsFramework.GizmoElementLineStrip
// Kind: Class; super: GizmoElementLineBase
class UGizmoElementLineStrip
{
public:
    std::uint8_t Pad_0000[0x230]; // 0x0000
    TArray<void*> Vertices; // 0x0230 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t base[0x18]; // 0x0240 (Size: 0x18, Type: StructProperty)
    std::uint8_t UpDirection[0x18]; // 0x0258 (Size: 0x18, Type: StructProperty)
    std::uint8_t SideDirection[0x18]; // 0x0270 (Size: 0x18, Type: StructProperty)
    std::uint8_t bDrawLineStrip; // 0x0288 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGizmoElementLineStrip, Vertices) == 560, "Offset mismatch for UGizmoElementLineStrip::Vertices");
static_assert(offsetof(UGizmoElementLineStrip, base) == 576, "Offset mismatch for UGizmoElementLineStrip::base");
static_assert(offsetof(UGizmoElementLineStrip, UpDirection) == 600, "Offset mismatch for UGizmoElementLineStrip::UpDirection");
static_assert(offsetof(UGizmoElementLineStrip, SideDirection) == 624, "Offset mismatch for UGizmoElementLineStrip::SideDirection");
static_assert(offsetof(UGizmoElementLineStrip, bDrawLineStrip) == 648, "Offset mismatch for UGizmoElementLineStrip::bDrawLineStrip");

// /Script/InteractiveToolsFramework.GizmoElementRectangle
// Kind: Class; super: GizmoElementLineBase
class UGizmoElementRectangle
{
public:
    std::uint8_t Pad_0000[0x230]; // 0x0000
    std::uint8_t Center[0x18]; // 0x0230 (Size: 0x18, Type: StructProperty)
    float Width; // 0x0248 (Size: 0x4, Type: FloatProperty)
    float Height; // 0x024C (Size: 0x4, Type: FloatProperty)
    std::uint8_t UpDirection[0x18]; // 0x0250 (Size: 0x18, Type: StructProperty)
    std::uint8_t SideDirection[0x18]; // 0x0268 (Size: 0x18, Type: StructProperty)
    std::uint8_t bDrawMesh; // 0x0280 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawLine; // 0x0281 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHitMesh; // 0x0282 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHitLine; // 0x0283 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGizmoElementRectangle, Center) == 560, "Offset mismatch for UGizmoElementRectangle::Center");
static_assert(offsetof(UGizmoElementRectangle, Width) == 584, "Offset mismatch for UGizmoElementRectangle::Width");
static_assert(offsetof(UGizmoElementRectangle, Height) == 588, "Offset mismatch for UGizmoElementRectangle::Height");
static_assert(offsetof(UGizmoElementRectangle, UpDirection) == 592, "Offset mismatch for UGizmoElementRectangle::UpDirection");
static_assert(offsetof(UGizmoElementRectangle, SideDirection) == 616, "Offset mismatch for UGizmoElementRectangle::SideDirection");
static_assert(offsetof(UGizmoElementRectangle, bDrawMesh) == 640, "Offset mismatch for UGizmoElementRectangle::bDrawMesh");
static_assert(offsetof(UGizmoElementRectangle, bDrawLine) == 641, "Offset mismatch for UGizmoElementRectangle::bDrawLine");
static_assert(offsetof(UGizmoElementRectangle, bHitMesh) == 642, "Offset mismatch for UGizmoElementRectangle::bHitMesh");
static_assert(offsetof(UGizmoElementRectangle, bHitLine) == 643, "Offset mismatch for UGizmoElementRectangle::bHitLine");

// /Script/InteractiveToolsFramework.GizmoElementSphere
// Kind: Class; super: GizmoElementBase
class UGizmoElementSphere
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    std::uint8_t Center[0x18]; // 0x01B0 (Size: 0x18, Type: StructProperty)
    float Radius; // 0x01C8 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumSides; // 0x01CC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UGizmoElementSphere, Center) == 432, "Offset mismatch for UGizmoElementSphere::Center");
static_assert(offsetof(UGizmoElementSphere, Radius) == 456, "Offset mismatch for UGizmoElementSphere::Radius");
static_assert(offsetof(UGizmoElementSphere, NumSides) == 460, "Offset mismatch for UGizmoElementSphere::NumSides");

// /Script/InteractiveToolsFramework.GizmoElementTorus
// Kind: Class; super: GizmoElementCircleBase
class UGizmoElementTorus
{
public:
    std::uint8_t Pad_0000[0x2F0]; // 0x0000
    double InnerRadius; // 0x02F0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t InnerRadiusMultiplier[0x50]; // 0x02F8 (Size: 0x50, Type: StructProperty)
    std::int32_t NumInnerSlices; // 0x0348 (Size: 0x4, Type: IntProperty)
    std::uint8_t bEndCaps; // 0x034C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGizmoElementTorus, InnerRadius) == 752, "Offset mismatch for UGizmoElementTorus::InnerRadius");
static_assert(offsetof(UGizmoElementTorus, InnerRadiusMultiplier) == 760, "Offset mismatch for UGizmoElementTorus::InnerRadiusMultiplier");
static_assert(offsetof(UGizmoElementTorus, NumInnerSlices) == 840, "Offset mismatch for UGizmoElementTorus::NumInnerSlices");
static_assert(offsetof(UGizmoElementTorus, bEndCaps) == 844, "Offset mismatch for UGizmoElementTorus::bEndCaps");

// /Script/InteractiveToolsFramework.GizmoElementTriangleList
// Kind: Class; super: GizmoElementBase
class UGizmoElementTriangleList
{
public:
    std::uint8_t Pad_0000[0x1B0]; // 0x0000
    TArray<void*> Vertices; // 0x01B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t base[0x18]; // 0x01C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t UpDirection[0x18]; // 0x01D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t SideDirection[0x1]; // 0x01F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGizmoElementTriangleList, Vertices) == 432, "Offset mismatch for UGizmoElementTriangleList::Vertices");
static_assert(offsetof(UGizmoElementTriangleList, base) == 448, "Offset mismatch for UGizmoElementTriangleList::base");
static_assert(offsetof(UGizmoElementTriangleList, UpDirection) == 472, "Offset mismatch for UGizmoElementTriangleList::UpDirection");
static_assert(offsetof(UGizmoElementTriangleList, SideDirection) == 496, "Offset mismatch for UGizmoElementTriangleList::SideDirection");

// /Script/InteractiveToolsFramework.GizmoFloatParameterSource
// Kind: Class; super: Interface
class UGizmoFloatParameterSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.GizmoLambdaHitTarget
// Kind: Class; super: Object
class UGizmoLambdaHitTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.GizmoLambdaStateTarget
// Kind: Class; super: Object
class UGizmoLambdaStateTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.GizmoLineHandleComponent
// Kind: Class; super: GizmoBaseComponent
class UGizmoLineHandleComponent
{
public:
    std::uint8_t Pad_0000[0x5B0]; // 0x0000
    std::uint8_t Normal[0x18]; // 0x05B0 (Size: 0x18, Type: StructProperty)
    float HandleSize; // 0x05C8 (Size: 0x4, Type: FloatProperty)
    float Thickness; // 0x05CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t Direction[0x18]; // 0x05D0 (Size: 0x18, Type: StructProperty)
    float Length; // 0x05E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bImageScale; // 0x05EC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGizmoLineHandleComponent, Normal) == 1456, "Offset mismatch for UGizmoLineHandleComponent::Normal");
static_assert(offsetof(UGizmoLineHandleComponent, HandleSize) == 1480, "Offset mismatch for UGizmoLineHandleComponent::HandleSize");
static_assert(offsetof(UGizmoLineHandleComponent, Thickness) == 1484, "Offset mismatch for UGizmoLineHandleComponent::Thickness");
static_assert(offsetof(UGizmoLineHandleComponent, Direction) == 1488, "Offset mismatch for UGizmoLineHandleComponent::Direction");
static_assert(offsetof(UGizmoLineHandleComponent, Length) == 1512, "Offset mismatch for UGizmoLineHandleComponent::Length");
static_assert(offsetof(UGizmoLineHandleComponent, bImageScale) == 1516, "Offset mismatch for UGizmoLineHandleComponent::bImageScale");

// /Script/InteractiveToolsFramework.GizmoLocalFloatParameterSource
// Kind: Class; super: GizmoBaseFloatParameterSource
class UGizmoLocalFloatParameterSource
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    float Value; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LastChange[0x1]; // 0x004C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGizmoLocalFloatParameterSource, Value) == 72, "Offset mismatch for UGizmoLocalFloatParameterSource::Value");
static_assert(offsetof(UGizmoLocalFloatParameterSource, LastChange) == 76, "Offset mismatch for UGizmoLocalFloatParameterSource::LastChange");

// /Script/InteractiveToolsFramework.GizmoLocalVec2ParameterSource
// Kind: Class; super: GizmoBaseVec2ParameterSource
class UGizmoLocalVec2ParameterSource
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t Value[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t LastChange[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGizmoLocalVec2ParameterSource, Value) == 72, "Offset mismatch for UGizmoLocalVec2ParameterSource::Value");
static_assert(offsetof(UGizmoLocalVec2ParameterSource, LastChange) == 88, "Offset mismatch for UGizmoLocalVec2ParameterSource::LastChange");

// /Script/InteractiveToolsFramework.GizmoNilStateTarget
// Kind: Class; super: Object
class UGizmoNilStateTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.GizmoObjectModifyStateTarget
// Kind: Class; super: Object
class UGizmoObjectModifyStateTarget
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TScriptInterface<void> TransactionManager; // 0x0048 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UGizmoObjectModifyStateTarget, TransactionManager) == 72, "Offset mismatch for UGizmoObjectModifyStateTarget::TransactionManager");

// /Script/InteractiveToolsFramework.GizmoPlaneScaleParameterSource
// Kind: Class; super: GizmoBaseVec2ParameterSource
class UGizmoPlaneScaleParameterSource
{
public:
    std::uint8_t Pad_0000[0x110]; // 0x0000
    TScriptInterface<void> AxisSource; // 0x0110 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> TransformSource; // 0x0120 (Size: 0x10, Type: InterfaceProperty)
    float ScaleMultiplier; // 0x0130 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseEqualScaling; // 0x0134 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClampToZero; // 0x0135 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0136
    std::uint8_t Parameter[0x10]; // 0x0138 (Size: 0x10, Type: StructProperty)
    std::uint8_t LastChange[0x20]; // 0x0148 (Size: 0x20, Type: StructProperty)
    std::uint8_t CurScaleOrigin[0x18]; // 0x0168 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurScaleNormal[0x18]; // 0x0180 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurScaleAxisX[0x18]; // 0x0198 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurScaleAxisY[0x20]; // 0x01B0 (Size: 0x20, Type: StructProperty)
    std::uint8_t InitialTransform[0x1]; // 0x01D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGizmoPlaneScaleParameterSource, AxisSource) == 272, "Offset mismatch for UGizmoPlaneScaleParameterSource::AxisSource");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, TransformSource) == 288, "Offset mismatch for UGizmoPlaneScaleParameterSource::TransformSource");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, ScaleMultiplier) == 304, "Offset mismatch for UGizmoPlaneScaleParameterSource::ScaleMultiplier");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, bUseEqualScaling) == 308, "Offset mismatch for UGizmoPlaneScaleParameterSource::bUseEqualScaling");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, bClampToZero) == 309, "Offset mismatch for UGizmoPlaneScaleParameterSource::bClampToZero");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, Parameter) == 312, "Offset mismatch for UGizmoPlaneScaleParameterSource::Parameter");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, LastChange) == 328, "Offset mismatch for UGizmoPlaneScaleParameterSource::LastChange");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, CurScaleOrigin) == 360, "Offset mismatch for UGizmoPlaneScaleParameterSource::CurScaleOrigin");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, CurScaleNormal) == 384, "Offset mismatch for UGizmoPlaneScaleParameterSource::CurScaleNormal");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, CurScaleAxisX) == 408, "Offset mismatch for UGizmoPlaneScaleParameterSource::CurScaleAxisX");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, CurScaleAxisY) == 432, "Offset mismatch for UGizmoPlaneScaleParameterSource::CurScaleAxisY");
static_assert(offsetof(UGizmoPlaneScaleParameterSource, InitialTransform) == 464, "Offset mismatch for UGizmoPlaneScaleParameterSource::InitialTransform");

// /Script/InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
// Kind: Class; super: GizmoBaseVec2ParameterSource
class UGizmoPlaneTranslationParameterSource
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    TScriptInterface<void> AxisSource; // 0x00E8 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> TransformSource; // 0x00F8 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t Parameter[0x10]; // 0x0108 (Size: 0x10, Type: StructProperty)
    std::uint8_t LastChange[0x20]; // 0x0118 (Size: 0x20, Type: StructProperty)
    std::uint8_t CurTranslationOrigin[0x18]; // 0x0138 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurTranslationNormal[0x18]; // 0x0150 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurTranslationAxisX[0x18]; // 0x0168 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurTranslationAxisY[0x20]; // 0x0180 (Size: 0x20, Type: StructProperty)
    std::uint8_t InitialTransform[0x1]; // 0x01A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGizmoPlaneTranslationParameterSource, AxisSource) == 232, "Offset mismatch for UGizmoPlaneTranslationParameterSource::AxisSource");
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, TransformSource) == 248, "Offset mismatch for UGizmoPlaneTranslationParameterSource::TransformSource");
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, Parameter) == 264, "Offset mismatch for UGizmoPlaneTranslationParameterSource::Parameter");
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, LastChange) == 280, "Offset mismatch for UGizmoPlaneTranslationParameterSource::LastChange");
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, CurTranslationOrigin) == 312, "Offset mismatch for UGizmoPlaneTranslationParameterSource::CurTranslationOrigin");
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, CurTranslationNormal) == 336, "Offset mismatch for UGizmoPlaneTranslationParameterSource::CurTranslationNormal");
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, CurTranslationAxisX) == 360, "Offset mismatch for UGizmoPlaneTranslationParameterSource::CurTranslationAxisX");
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, CurTranslationAxisY) == 384, "Offset mismatch for UGizmoPlaneTranslationParameterSource::CurTranslationAxisY");
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, InitialTransform) == 416, "Offset mismatch for UGizmoPlaneTranslationParameterSource::InitialTransform");

// /Script/InteractiveToolsFramework.GizmoRectangleComponent
// Kind: Class; super: GizmoBaseComponent
class UGizmoRectangleComponent
{
public:
    std::uint8_t Pad_0000[0x5B0]; // 0x0000
    std::uint8_t DirectionX[0x18]; // 0x05B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t DirectionY[0x18]; // 0x05C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t bOrientYAccordingToCamera; // 0x05E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x05E1
    float OffsetX; // 0x05E4 (Size: 0x4, Type: FloatProperty)
    float OffsetY; // 0x05E8 (Size: 0x4, Type: FloatProperty)
    float LengthX; // 0x05EC (Size: 0x4, Type: FloatProperty)
    float LengthY; // 0x05F0 (Size: 0x4, Type: FloatProperty)
    float Thickness; // 0x05F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SegmentFlags; // 0x05F8 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UGizmoRectangleComponent, DirectionX) == 1456, "Offset mismatch for UGizmoRectangleComponent::DirectionX");
static_assert(offsetof(UGizmoRectangleComponent, DirectionY) == 1480, "Offset mismatch for UGizmoRectangleComponent::DirectionY");
static_assert(offsetof(UGizmoRectangleComponent, bOrientYAccordingToCamera) == 1504, "Offset mismatch for UGizmoRectangleComponent::bOrientYAccordingToCamera");
static_assert(offsetof(UGizmoRectangleComponent, OffsetX) == 1508, "Offset mismatch for UGizmoRectangleComponent::OffsetX");
static_assert(offsetof(UGizmoRectangleComponent, OffsetY) == 1512, "Offset mismatch for UGizmoRectangleComponent::OffsetY");
static_assert(offsetof(UGizmoRectangleComponent, LengthX) == 1516, "Offset mismatch for UGizmoRectangleComponent::LengthX");
static_assert(offsetof(UGizmoRectangleComponent, LengthY) == 1520, "Offset mismatch for UGizmoRectangleComponent::LengthY");
static_assert(offsetof(UGizmoRectangleComponent, Thickness) == 1524, "Offset mismatch for UGizmoRectangleComponent::Thickness");
static_assert(offsetof(UGizmoRectangleComponent, SegmentFlags) == 1528, "Offset mismatch for UGizmoRectangleComponent::SegmentFlags");

// /Script/InteractiveToolsFramework.GizmoRenderMultiTarget
// Kind: Class; super: Interface
class UGizmoRenderMultiTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.GizmoRenderTarget
// Kind: Class; super: Interface
class UGizmoRenderTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.GizmoScaledAndUnscaledTransformSources
// Kind: Class; super: GizmoBaseTransformSource
class UGizmoScaledAndUnscaledTransformSources
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TScriptInterface<void> ScaledTransformSource; // 0x0048 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> UnscaledTransformSource; // 0x0058 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UGizmoScaledAndUnscaledTransformSources, ScaledTransformSource) == 72, "Offset mismatch for UGizmoScaledAndUnscaledTransformSources::ScaledTransformSource");
static_assert(offsetof(UGizmoScaledAndUnscaledTransformSources, UnscaledTransformSource) == 88, "Offset mismatch for UGizmoScaledAndUnscaledTransformSources::UnscaledTransformSource");

// /Script/InteractiveToolsFramework.GizmoScaledTransformSource
// Kind: Class; super: GizmoBaseTransformSource
class UGizmoScaledTransformSource
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TScriptInterface<void> ChildTransformSource; // 0x0048 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UGizmoScaledTransformSource, ChildTransformSource) == 72, "Offset mismatch for UGizmoScaledTransformSource::ChildTransformSource");

// /Script/InteractiveToolsFramework.GizmoStateTarget
// Kind: Class; super: Interface
class UGizmoStateTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.GizmoTransformChangeStateTarget
// Kind: Class; super: Object
class UGizmoTransformChangeStateTarget
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TScriptInterface<void> TransactionManager; // 0x0048 (Size: 0x10, Type: InterfaceProperty)
};

static_assert(offsetof(UGizmoTransformChangeStateTarget, TransactionManager) == 72, "Offset mismatch for UGizmoTransformChangeStateTarget::TransactionManager");

// /Script/InteractiveToolsFramework.GizmoTransformProxyTransformSource
// Kind: Class; super: GizmoBaseTransformSource
class UGizmoTransformProxyTransformSource
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Proxy; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGizmoTransformProxyTransformSource, Proxy) == 72, "Offset mismatch for UGizmoTransformProxyTransformSource::Proxy");

// /Script/InteractiveToolsFramework.GizmoTransformSource
// Kind: Class; super: Interface
class UGizmoTransformSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.GizmoUniformScaleParameterSource
// Kind: Class; super: GizmoBaseVec2ParameterSource
class UGizmoUniformScaleParameterSource
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    TScriptInterface<void> AxisSource; // 0x00B0 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> TransformSource; // 0x00C0 (Size: 0x10, Type: InterfaceProperty)
    float ScaleMultiplier; // 0x00D0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00D4
    std::uint8_t Parameter[0x10]; // 0x00D8 (Size: 0x10, Type: StructProperty)
    std::uint8_t LastChange[0x20]; // 0x00E8 (Size: 0x20, Type: StructProperty)
    std::uint8_t CurScaleOrigin[0x18]; // 0x0108 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurScaleNormal[0x18]; // 0x0120 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurScaleAxisX[0x18]; // 0x0138 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurScaleAxisY[0x20]; // 0x0150 (Size: 0x20, Type: StructProperty)
    std::uint8_t InitialTransform[0x1]; // 0x0170 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGizmoUniformScaleParameterSource, AxisSource) == 176, "Offset mismatch for UGizmoUniformScaleParameterSource::AxisSource");
static_assert(offsetof(UGizmoUniformScaleParameterSource, TransformSource) == 192, "Offset mismatch for UGizmoUniformScaleParameterSource::TransformSource");
static_assert(offsetof(UGizmoUniformScaleParameterSource, ScaleMultiplier) == 208, "Offset mismatch for UGizmoUniformScaleParameterSource::ScaleMultiplier");
static_assert(offsetof(UGizmoUniformScaleParameterSource, Parameter) == 216, "Offset mismatch for UGizmoUniformScaleParameterSource::Parameter");
static_assert(offsetof(UGizmoUniformScaleParameterSource, LastChange) == 232, "Offset mismatch for UGizmoUniformScaleParameterSource::LastChange");
static_assert(offsetof(UGizmoUniformScaleParameterSource, CurScaleOrigin) == 264, "Offset mismatch for UGizmoUniformScaleParameterSource::CurScaleOrigin");
static_assert(offsetof(UGizmoUniformScaleParameterSource, CurScaleNormal) == 288, "Offset mismatch for UGizmoUniformScaleParameterSource::CurScaleNormal");
static_assert(offsetof(UGizmoUniformScaleParameterSource, CurScaleAxisX) == 312, "Offset mismatch for UGizmoUniformScaleParameterSource::CurScaleAxisX");
static_assert(offsetof(UGizmoUniformScaleParameterSource, CurScaleAxisY) == 336, "Offset mismatch for UGizmoUniformScaleParameterSource::CurScaleAxisY");
static_assert(offsetof(UGizmoUniformScaleParameterSource, InitialTransform) == 368, "Offset mismatch for UGizmoUniformScaleParameterSource::InitialTransform");

// /Script/InteractiveToolsFramework.GizmoVec2ParameterSource
// Kind: Class; super: Interface
class UGizmoVec2ParameterSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.GizmoViewContext
// Kind: Class; super: Object
class UGizmoViewContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.GizmoWorldAxisSource
// Kind: Class; super: Object
class UGizmoWorldAxisSource
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t origin[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::int32_t AxisIndex; // 0x0048 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UGizmoWorldAxisSource, origin) == 48, "Offset mismatch for UGizmoWorldAxisSource::origin");
static_assert(offsetof(UGizmoWorldAxisSource, AxisIndex) == 72, "Offset mismatch for UGizmoWorldAxisSource::AxisIndex");

// /Script/InteractiveToolsFramework.InputBehavior
// Kind: Class; super: Object
class UInputBehavior
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.InputBehaviorSet
// Kind: Class; super: Object
class UInputBehaviorSet
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Behaviors; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UInputBehaviorSet, Behaviors) == 40, "Offset mismatch for UInputBehaviorSet::Behaviors");

// /Script/InteractiveToolsFramework.InputBehaviorSource
// Kind: Class; super: Interface
class UInputBehaviorSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.InputRouter
// Kind: Class; super: Object
class UInputRouter
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bAutoInvalidateOnHover; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoInvalidateOnCapture; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xE]; // 0x002A
    void* ActiveInputBehaviors; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInputRouter, bAutoInvalidateOnHover) == 40, "Offset mismatch for UInputRouter::bAutoInvalidateOnHover");
static_assert(offsetof(UInputRouter, bAutoInvalidateOnCapture) == 41, "Offset mismatch for UInputRouter::bAutoInvalidateOnCapture");
static_assert(offsetof(UInputRouter, ActiveInputBehaviors) == 56, "Offset mismatch for UInputRouter::ActiveInputBehaviors");

// /Script/InteractiveToolsFramework.InteractionMechanic
// Kind: Class; super: Object
class UInteractionMechanic
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.InteractiveCommand
// Kind: Class; super: Object
class UInteractiveCommand
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.InteractiveCommandArguments
// Kind: Class; super: Object
class UInteractiveCommandArguments
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.InteractiveCommandResult
// Kind: Class; super: Object
class UInteractiveCommandResult
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.InteractiveGizmo
// Kind: Class; super: Object
class UInteractiveGizmo
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* InputBehaviors; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UInteractiveGizmo, InputBehaviors) == 48, "Offset mismatch for UInteractiveGizmo::InputBehaviors");

// /Script/InteractiveToolsFramework.InteractiveGizmoBuilder
// Kind: Class; super: Object
class UInteractiveGizmoBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.InteractiveGizmoManager
// Kind: Class; super: Object
class UInteractiveGizmoManager
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> ActiveGizmos; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0040
    TMap<void*, void*> GizmoBuilders; // 0x0058 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UInteractiveGizmoManager, ActiveGizmos) == 48, "Offset mismatch for UInteractiveGizmoManager::ActiveGizmos");
static_assert(offsetof(UInteractiveGizmoManager, GizmoBuilders) == 88, "Offset mismatch for UInteractiveGizmoManager::GizmoBuilders");

// /Script/InteractiveToolsFramework.InteractiveTool
// Kind: Class; super: Object
class UInteractiveTool
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    void* InputBehaviors; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ToolPropertyObjects; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UInteractiveTool, InputBehaviors) == 96, "Offset mismatch for UInteractiveTool::InputBehaviors");
static_assert(offsetof(UInteractiveTool, ToolPropertyObjects) == 104, "Offset mismatch for UInteractiveTool::ToolPropertyObjects");

// /Script/InteractiveToolsFramework.InteractiveToolBuilder
// Kind: Class; super: Object
class UInteractiveToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.InteractiveToolCameraFocusAPI
// Kind: Class; super: Interface
class UInteractiveToolCameraFocusAPI
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.InteractiveToolEditorGizmoAPI
// Kind: Class; super: Interface
class UInteractiveToolEditorGizmoAPI
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.InteractiveToolExclusiveToolAPI
// Kind: Class; super: Interface
class UInteractiveToolExclusiveToolAPI
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.InteractiveToolManageGeometrySelectionAPI
// Kind: Class; super: Interface
class UInteractiveToolManageGeometrySelectionAPI
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.InteractiveToolManager
// Kind: Class; super: Object
class UInteractiveToolManager
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* ActiveLeftTool; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* ActiveRightTool; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x98]; // 0x0068
    TMap<void*, void*> ToolBuilders; // 0x0100 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UInteractiveToolManager, ActiveLeftTool) == 88, "Offset mismatch for UInteractiveToolManager::ActiveLeftTool");
static_assert(offsetof(UInteractiveToolManager, ActiveRightTool) == 96, "Offset mismatch for UInteractiveToolManager::ActiveRightTool");
static_assert(offsetof(UInteractiveToolManager, ToolBuilders) == 256, "Offset mismatch for UInteractiveToolManager::ToolBuilders");

// /Script/InteractiveToolsFramework.InteractiveToolNestedAcceptCancelAPI
// Kind: Class; super: Interface
class UInteractiveToolNestedAcceptCancelAPI
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.InteractiveToolPropertySet
// Kind: Class; super: Object
class UInteractiveToolPropertySet
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> CachedPropertiesMap; // 0x0038 (Size: 0x10, Type: MapProperty)
    std::uint8_t bIsPropertySetEnabled; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInteractiveToolPropertySet, CachedPropertiesMap) == 56, "Offset mismatch for UInteractiveToolPropertySet::CachedPropertiesMap");
static_assert(offsetof(UInteractiveToolPropertySet, bIsPropertySetEnabled) == 72, "Offset mismatch for UInteractiveToolPropertySet::bIsPropertySetEnabled");

// /Script/InteractiveToolsFramework.InteractiveToolShutdownQueryAPI
// Kind: Class; super: Interface
class UInteractiveToolShutdownQueryAPI
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.InteractiveToolWithToolTargetsBuilder
// Kind: Class; super: InteractiveToolBuilder
class UInteractiveToolWithToolTargetsBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.InteractiveToolsContext
// Kind: Class; super: Object
class UInteractiveToolsContext
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* InputRouter; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* TargetManager; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* ToolManager; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* GizmoManager; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* ToolGroupManager; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* ContextObjectStore; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x248]; // 0x0088
    TSoftClassPtr<void> ToolManagerClass; // 0x02D0 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(UInteractiveToolsContext, InputRouter) == 88, "Offset mismatch for UInteractiveToolsContext::InputRouter");
static_assert(offsetof(UInteractiveToolsContext, TargetManager) == 96, "Offset mismatch for UInteractiveToolsContext::TargetManager");
static_assert(offsetof(UInteractiveToolsContext, ToolManager) == 104, "Offset mismatch for UInteractiveToolsContext::ToolManager");
static_assert(offsetof(UInteractiveToolsContext, GizmoManager) == 112, "Offset mismatch for UInteractiveToolsContext::GizmoManager");
static_assert(offsetof(UInteractiveToolsContext, ToolGroupManager) == 120, "Offset mismatch for UInteractiveToolsContext::ToolGroupManager");
static_assert(offsetof(UInteractiveToolsContext, ContextObjectStore) == 128, "Offset mismatch for UInteractiveToolsContext::ContextObjectStore");
static_assert(offsetof(UInteractiveToolsContext, ToolManagerClass) == 720, "Offset mismatch for UInteractiveToolsContext::ToolManagerClass");

// /Script/InteractiveToolsFramework.InternalToolFrameworkActor
// Kind: Class; super: Actor
class UInternalToolFrameworkActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t bIsSelectableInEditor; // 0x0270 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInternalToolFrameworkActor, bIsSelectableInEditor) == 624, "Offset mismatch for UInternalToolFrameworkActor::bIsSelectableInEditor");

// /Script/InteractiveToolsFramework.IntervalGizmo
// Kind: Class; super: InteractiveGizmo
class UIntervalGizmo
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* StateTarget; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x48]; // 0x0040
    void* World; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    void* GizmoActor; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* TransformProxy; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ActiveComponents; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveGizmos; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    void* UpIntervalSource; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    void* DownIntervalSource; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    void* ForwardIntervalSource; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* BackwardIntervalSource; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* RightIntervalSource; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    void* LeftIntervalSource; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* AxisXSource; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* AxisYSource; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* AxisZSource; // 0x0100 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UIntervalGizmo, StateTarget) == 56, "Offset mismatch for UIntervalGizmo::StateTarget");
static_assert(offsetof(UIntervalGizmo, World) == 136, "Offset mismatch for UIntervalGizmo::World");
static_assert(offsetof(UIntervalGizmo, GizmoActor) == 144, "Offset mismatch for UIntervalGizmo::GizmoActor");
static_assert(offsetof(UIntervalGizmo, TransformProxy) == 152, "Offset mismatch for UIntervalGizmo::TransformProxy");
static_assert(offsetof(UIntervalGizmo, ActiveComponents) == 160, "Offset mismatch for UIntervalGizmo::ActiveComponents");
static_assert(offsetof(UIntervalGizmo, ActiveGizmos) == 176, "Offset mismatch for UIntervalGizmo::ActiveGizmos");
static_assert(offsetof(UIntervalGizmo, UpIntervalSource) == 192, "Offset mismatch for UIntervalGizmo::UpIntervalSource");
static_assert(offsetof(UIntervalGizmo, DownIntervalSource) == 200, "Offset mismatch for UIntervalGizmo::DownIntervalSource");
static_assert(offsetof(UIntervalGizmo, ForwardIntervalSource) == 208, "Offset mismatch for UIntervalGizmo::ForwardIntervalSource");
static_assert(offsetof(UIntervalGizmo, BackwardIntervalSource) == 216, "Offset mismatch for UIntervalGizmo::BackwardIntervalSource");
static_assert(offsetof(UIntervalGizmo, RightIntervalSource) == 224, "Offset mismatch for UIntervalGizmo::RightIntervalSource");
static_assert(offsetof(UIntervalGizmo, LeftIntervalSource) == 232, "Offset mismatch for UIntervalGizmo::LeftIntervalSource");
static_assert(offsetof(UIntervalGizmo, AxisXSource) == 240, "Offset mismatch for UIntervalGizmo::AxisXSource");
static_assert(offsetof(UIntervalGizmo, AxisYSource) == 248, "Offset mismatch for UIntervalGizmo::AxisYSource");
static_assert(offsetof(UIntervalGizmo, AxisZSource) == 256, "Offset mismatch for UIntervalGizmo::AxisZSource");

// /Script/InteractiveToolsFramework.IntervalGizmoActor
// Kind: Class; super: GizmoActor
class UIntervalGizmoActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* UpIntervalComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* DownIntervalComponent; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* ForwardIntervalComponent; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* BackwardIntervalComponent; // 0x0290 (Size: 0x8, Type: ObjectProperty)
    void* RightIntervalComponent; // 0x0298 (Size: 0x8, Type: ObjectProperty)
    void* LeftIntervalComponent; // 0x02A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UIntervalGizmoActor, UpIntervalComponent) == 632, "Offset mismatch for UIntervalGizmoActor::UpIntervalComponent");
static_assert(offsetof(UIntervalGizmoActor, DownIntervalComponent) == 640, "Offset mismatch for UIntervalGizmoActor::DownIntervalComponent");
static_assert(offsetof(UIntervalGizmoActor, ForwardIntervalComponent) == 648, "Offset mismatch for UIntervalGizmoActor::ForwardIntervalComponent");
static_assert(offsetof(UIntervalGizmoActor, BackwardIntervalComponent) == 656, "Offset mismatch for UIntervalGizmoActor::BackwardIntervalComponent");
static_assert(offsetof(UIntervalGizmoActor, RightIntervalComponent) == 664, "Offset mismatch for UIntervalGizmoActor::RightIntervalComponent");
static_assert(offsetof(UIntervalGizmoActor, LeftIntervalComponent) == 672, "Offset mismatch for UIntervalGizmoActor::LeftIntervalComponent");

// /Script/InteractiveToolsFramework.IntervalGizmoBuilder
// Kind: Class; super: InteractiveGizmoBuilder
class UIntervalGizmoBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.KeyAsModifierInputBehavior
// Kind: Class; super: InputBehavior
class UKeyAsModifierInputBehavior
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.KeyInputBehavior
// Kind: Class; super: InputBehavior
class UKeyInputBehavior
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.LocalClickDragInputBehavior
// Kind: Class; super: ClickDragInputBehavior
class ULocalClickDragInputBehavior
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t bUpdateModifiersDuringDrag; // 0x00E0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULocalClickDragInputBehavior, bUpdateModifiersDuringDrag) == 224, "Offset mismatch for ULocalClickDragInputBehavior::bUpdateModifiersDuringDrag");

// /Script/InteractiveToolsFramework.LocalDoubleClickInputBehavior
// Kind: Class; super: DoubleClickInputBehavior
class ULocalDoubleClickInputBehavior
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t HitTestOnRelease; // 0x00B0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULocalDoubleClickInputBehavior, HitTestOnRelease) == 176, "Offset mismatch for ULocalDoubleClickInputBehavior::HitTestOnRelease");

// /Script/InteractiveToolsFramework.LocalInputBehaviorSource
// Kind: Class; super: Object
class ULocalInputBehaviorSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.LocalMouseHoverBehavior
// Kind: Class; super: MouseHoverBehavior
class ULocalMouseHoverBehavior
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.LocalSingleClickInputBehavior
// Kind: Class; super: SingleClickInputBehavior
class ULocalSingleClickInputBehavior
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t HitTestOnRelease; // 0x00B0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULocalSingleClickInputBehavior, HitTestOnRelease) == 176, "Offset mismatch for ULocalSingleClickInputBehavior::HitTestOnRelease");

// /Script/InteractiveToolsFramework.LocalTwoAxisPropertyEditInputBehavior
// Kind: Class; super: TwoAxisPropertyEditInputBehavior
class ULocalTwoAxisPropertyEditInputBehavior
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.MaterialProvider
// Kind: Class; super: Interface
class UMaterialProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.MeshDescriptionCommitter
// Kind: Class; super: Interface
class UMeshDescriptionCommitter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.MeshDescriptionProvider
// Kind: Class; super: Interface
class UMeshDescriptionProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.MeshSelectionSet
// Kind: Class; super: SelectionSet
class UMeshSelectionSet
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TArray<void*> Vertices; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Edges; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Faces; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Groups; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMeshSelectionSet, Vertices) == 64, "Offset mismatch for UMeshSelectionSet::Vertices");
static_assert(offsetof(UMeshSelectionSet, Edges) == 80, "Offset mismatch for UMeshSelectionSet::Edges");
static_assert(offsetof(UMeshSelectionSet, Faces) == 96, "Offset mismatch for UMeshSelectionSet::Faces");
static_assert(offsetof(UMeshSelectionSet, Groups) == 112, "Offset mismatch for UMeshSelectionSet::Groups");

// /Script/InteractiveToolsFramework.MeshSurfacePointTool
// Kind: Class; super: SingleSelectionTool
class UMeshSurfacePointTool
{
public:
    std::uint8_t Pad_0000[0x110]; // 0x0000
    TWeakObjectPtr<void> TargetWorld; // 0x0110 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UMeshSurfacePointTool, TargetWorld) == 272, "Offset mismatch for UMeshSurfacePointTool::TargetWorld");

// /Script/InteractiveToolsFramework.MeshSurfacePointToolBuilder
// Kind: Class; super: InteractiveToolWithToolTargetsBuilder
class UMeshSurfacePointToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.MouseButtonAsModifierInputBehavior
// Kind: Class; super: KeyAsModifierInputBehavior
class UMouseButtonAsModifierInputBehavior
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.MouseHoverBehavior
// Kind: Class; super: InputBehavior
class UMouseHoverBehavior
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.MouseWheelInputBehavior
// Kind: Class; super: AnyButtonInputBehavior
class UMouseWheelInputBehavior
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.MouseWheelModifierInputBehavior
// Kind: Class; super: MouseWheelInputBehavior
class UMouseWheelModifierInputBehavior
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.MultiClickSequenceInputBehavior
// Kind: Class; super: AnyButtonInputBehavior
class UMultiClickSequenceInputBehavior
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.MultiSelectionTool
// Kind: Class; super: InteractiveTool
class UMultiSelectionTool
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    TArray<void*> Targets; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMultiSelectionTool, Targets) == 184, "Offset mismatch for UMultiSelectionTool::Targets");

// /Script/InteractiveToolsFramework.PhysicsDataSource
// Kind: Class; super: Interface
class UPhysicsDataSource
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.PlanePositionGizmo
// Kind: Class; super: InteractiveGizmo
class UPlanePositionGizmo
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TScriptInterface<void> AxisSource; // 0x0048 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> ParameterSource; // 0x0058 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> HitTarget; // 0x0068 (Size: 0x10, Type: InterfaceProperty)
    TScriptInterface<void> StateTarget; // 0x0078 (Size: 0x10, Type: InterfaceProperty)
    void* MouseBehavior; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnableSignedAxis; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlipX; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFlipY; // 0x0092 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6D]; // 0x0093
    std::uint8_t bInInteraction; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0101
    std::uint8_t InteractionOrigin[0x18]; // 0x0108 (Size: 0x18, Type: StructProperty)
    std::uint8_t InteractionNormal[0x18]; // 0x0120 (Size: 0x18, Type: StructProperty)
    std::uint8_t InteractionAxisX[0x18]; // 0x0138 (Size: 0x18, Type: StructProperty)
    std::uint8_t InteractionAxisY[0x18]; // 0x0150 (Size: 0x18, Type: StructProperty)
    std::uint8_t InteractionStartPoint[0x18]; // 0x0168 (Size: 0x18, Type: StructProperty)
    std::uint8_t InteractionCurPoint[0x18]; // 0x0180 (Size: 0x18, Type: StructProperty)
    std::uint8_t InteractionStartParameter[0x10]; // 0x0198 (Size: 0x10, Type: StructProperty)
    std::uint8_t InteractionCurParameter[0x10]; // 0x01A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t ParameterSigns[0x1]; // 0x01B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPlanePositionGizmo, AxisSource) == 72, "Offset mismatch for UPlanePositionGizmo::AxisSource");
static_assert(offsetof(UPlanePositionGizmo, ParameterSource) == 88, "Offset mismatch for UPlanePositionGizmo::ParameterSource");
static_assert(offsetof(UPlanePositionGizmo, HitTarget) == 104, "Offset mismatch for UPlanePositionGizmo::HitTarget");
static_assert(offsetof(UPlanePositionGizmo, StateTarget) == 120, "Offset mismatch for UPlanePositionGizmo::StateTarget");
static_assert(offsetof(UPlanePositionGizmo, MouseBehavior) == 136, "Offset mismatch for UPlanePositionGizmo::MouseBehavior");
static_assert(offsetof(UPlanePositionGizmo, bEnableSignedAxis) == 144, "Offset mismatch for UPlanePositionGizmo::bEnableSignedAxis");
static_assert(offsetof(UPlanePositionGizmo, bFlipX) == 145, "Offset mismatch for UPlanePositionGizmo::bFlipX");
static_assert(offsetof(UPlanePositionGizmo, bFlipY) == 146, "Offset mismatch for UPlanePositionGizmo::bFlipY");
static_assert(offsetof(UPlanePositionGizmo, bInInteraction) == 256, "Offset mismatch for UPlanePositionGizmo::bInInteraction");
static_assert(offsetof(UPlanePositionGizmo, InteractionOrigin) == 264, "Offset mismatch for UPlanePositionGizmo::InteractionOrigin");
static_assert(offsetof(UPlanePositionGizmo, InteractionNormal) == 288, "Offset mismatch for UPlanePositionGizmo::InteractionNormal");
static_assert(offsetof(UPlanePositionGizmo, InteractionAxisX) == 312, "Offset mismatch for UPlanePositionGizmo::InteractionAxisX");
static_assert(offsetof(UPlanePositionGizmo, InteractionAxisY) == 336, "Offset mismatch for UPlanePositionGizmo::InteractionAxisY");
static_assert(offsetof(UPlanePositionGizmo, InteractionStartPoint) == 360, "Offset mismatch for UPlanePositionGizmo::InteractionStartPoint");
static_assert(offsetof(UPlanePositionGizmo, InteractionCurPoint) == 384, "Offset mismatch for UPlanePositionGizmo::InteractionCurPoint");
static_assert(offsetof(UPlanePositionGizmo, InteractionStartParameter) == 408, "Offset mismatch for UPlanePositionGizmo::InteractionStartParameter");
static_assert(offsetof(UPlanePositionGizmo, InteractionCurParameter) == 424, "Offset mismatch for UPlanePositionGizmo::InteractionCurParameter");
static_assert(offsetof(UPlanePositionGizmo, ParameterSigns) == 440, "Offset mismatch for UPlanePositionGizmo::ParameterSigns");

// /Script/InteractiveToolsFramework.PlanePositionGizmoBuilder
// Kind: Class; super: InteractiveGizmoBuilder
class UPlanePositionGizmoBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.PrimitiveComponentBackedTarget
// Kind: Class; super: SceneComponentBackedTarget
class UPrimitiveComponentBackedTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.PrimitiveComponentToolTarget
// Kind: Class; super: ToolTarget
class UPrimitiveComponentToolTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.PrimitiveComponentToolTargetFactory
// Kind: Class; super: ToolTargetFactory
class UPrimitiveComponentToolTargetFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.RepositionableTransformGizmo
// Kind: Class; super: CombinedTransformGizmo
class URepositionableTransformGizmo
{
public:
    std::uint8_t Pad_0000[0x5B0]; // 0x0000
    void* RepositionStateTarget; // 0x05B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URepositionableTransformGizmo, RepositionStateTarget) == 1456, "Offset mismatch for URepositionableTransformGizmo::RepositionStateTarget");

// /Script/InteractiveToolsFramework.RepositionableTransformGizmoBuilder
// Kind: Class; super: CombinedTransformGizmoBuilder
class URepositionableTransformGizmoBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.ScalableSphereGizmo
// Kind: Class; super: InteractiveGizmo
class UScalableSphereGizmo
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    float HitErrorThreshold; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0074
    std::uint8_t TransactionDescription[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    float Radius; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsHovering; // 0x008C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsDragging; // 0x008D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x008E
    void* ActiveTarget; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ActiveAxis[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    std::uint8_t DragStartWorldPosition[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t DragCurrentPositionProjected[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    float InteractionStartParameter; // 0x00E0 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UScalableSphereGizmo, HitErrorThreshold) == 112, "Offset mismatch for UScalableSphereGizmo::HitErrorThreshold");
static_assert(offsetof(UScalableSphereGizmo, TransactionDescription) == 120, "Offset mismatch for UScalableSphereGizmo::TransactionDescription");
static_assert(offsetof(UScalableSphereGizmo, Radius) == 136, "Offset mismatch for UScalableSphereGizmo::Radius");
static_assert(offsetof(UScalableSphereGizmo, bIsHovering) == 140, "Offset mismatch for UScalableSphereGizmo::bIsHovering");
static_assert(offsetof(UScalableSphereGizmo, bIsDragging) == 141, "Offset mismatch for UScalableSphereGizmo::bIsDragging");
static_assert(offsetof(UScalableSphereGizmo, ActiveTarget) == 144, "Offset mismatch for UScalableSphereGizmo::ActiveTarget");
static_assert(offsetof(UScalableSphereGizmo, ActiveAxis) == 152, "Offset mismatch for UScalableSphereGizmo::ActiveAxis");
static_assert(offsetof(UScalableSphereGizmo, DragStartWorldPosition) == 176, "Offset mismatch for UScalableSphereGizmo::DragStartWorldPosition");
static_assert(offsetof(UScalableSphereGizmo, DragCurrentPositionProjected) == 200, "Offset mismatch for UScalableSphereGizmo::DragCurrentPositionProjected");
static_assert(offsetof(UScalableSphereGizmo, InteractionStartParameter) == 224, "Offset mismatch for UScalableSphereGizmo::InteractionStartParameter");

// /Script/InteractiveToolsFramework.ScalableSphereGizmoBuilder
// Kind: Class; super: InteractiveGizmoBuilder
class UScalableSphereGizmoBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.ScalableSphereGizmoInputBehavior
// Kind: Class; super: AnyButtonInputBehavior
class UScalableSphereGizmoInputBehavior
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.SceneComponentBackedTarget
// Kind: Class; super: Interface
class USceneComponentBackedTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.SceneComponentToolTarget
// Kind: Class; super: ToolTarget
class USceneComponentToolTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.SceneComponentToolTargetFactory
// Kind: Class; super: ToolTargetFactory
class USceneComponentToolTargetFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.SceneSnappingManager
// Kind: Class; super: Object
class USceneSnappingManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.SelectionSet
// Kind: Class; super: Object
class USelectionSet
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.SimpleLambdaInteractiveGizmoBuilder
// Kind: Class; super: InteractiveGizmoBuilder
class USimpleLambdaInteractiveGizmoBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.SimpleSingleClickGizmo
// Kind: Class; super: InteractiveGizmo
class USimpleSingleClickGizmo
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    TScriptInterface<void> HitTarget; // 0x0060 (Size: 0x10, Type: InterfaceProperty)
    void* ClickBehavior; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USimpleSingleClickGizmo, HitTarget) == 96, "Offset mismatch for USimpleSingleClickGizmo::HitTarget");
static_assert(offsetof(USimpleSingleClickGizmo, ClickBehavior) == 112, "Offset mismatch for USimpleSingleClickGizmo::ClickBehavior");

// /Script/InteractiveToolsFramework.SingleClickInputBehavior
// Kind: Class; super: AnyButtonInputBehavior
class USingleClickInputBehavior
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    std::uint8_t HitTestOnRelease; // 0x00B0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USingleClickInputBehavior, HitTestOnRelease) == 176, "Offset mismatch for USingleClickInputBehavior::HitTestOnRelease");

// /Script/InteractiveToolsFramework.SingleClickOrDragInputBehavior
// Kind: Class; super: AnyButtonInputBehavior
class USingleClickOrDragInputBehavior
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t bBeginDragIfClickTargetNotHit; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00E1
    float ClickDistanceThreshold; // 0x00E4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USingleClickOrDragInputBehavior, bBeginDragIfClickTargetNotHit) == 224, "Offset mismatch for USingleClickOrDragInputBehavior::bBeginDragIfClickTargetNotHit");
static_assert(offsetof(USingleClickOrDragInputBehavior, ClickDistanceThreshold) == 228, "Offset mismatch for USingleClickOrDragInputBehavior::ClickDistanceThreshold");

// /Script/InteractiveToolsFramework.SingleClickTool
// Kind: Class; super: InteractiveTool
class USingleClickTool
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    void* InputBehaviors; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ToolPropertyObjects; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USingleClickTool, InputBehaviors) == 96, "Offset mismatch for USingleClickTool::InputBehaviors");
static_assert(offsetof(USingleClickTool, ToolPropertyObjects) == 104, "Offset mismatch for USingleClickTool::ToolPropertyObjects");

// /Script/InteractiveToolsFramework.SingleClickToolBuilder
// Kind: Class; super: InteractiveToolBuilder
class USingleClickToolBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.SingleKeyCaptureBehavior
// Kind: Class; super: InputBehavior
class USingleKeyCaptureBehavior
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.SingleSelectionTool
// Kind: Class; super: InteractiveTool
class USingleSelectionTool
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    void* Target; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USingleSelectionTool, Target) == 184, "Offset mismatch for USingleSelectionTool::Target");

// /Script/InteractiveToolsFramework.SkeletalMeshBackedTarget
// Kind: Class; super: AssetBackedTarget
class USkeletalMeshBackedTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.StaticMeshBackedTarget
// Kind: Class; super: AssetBackedTarget
class UStaticMeshBackedTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.ToolContextTransactionProvider
// Kind: Class; super: Interface
class UToolContextTransactionProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.ToolFrameworkComponent
// Kind: Class; super: Interface
class UToolFrameworkComponent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.ToolGroupManager
// Kind: Class; super: Object
class UToolGroupManager
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> EnabledGroups; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UToolGroupManager, EnabledGroups) == 56, "Offset mismatch for UToolGroupManager::EnabledGroups");

// /Script/InteractiveToolsFramework.ToolTarget
// Kind: Class; super: Object
class UToolTarget
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.ToolTargetFactory
// Kind: Class; super: Object
class UToolTargetFactory
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.ToolTargetManager
// Kind: Class; super: Object
class UToolTargetManager
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> Factories; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UToolTargetManager, Factories) == 48, "Offset mismatch for UToolTargetManager::Factories");

// /Script/InteractiveToolsFramework.ToolsContextCursorAPI
// Kind: Class; super: Object
class UToolsContextCursorAPI
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.TransformProxy
// Kind: Class; super: Object
class UTransformProxy
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t bRotatePerObject; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSetPivotMode; // 0x00D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1E]; // 0x00D2
    std::uint8_t SharedTransform[0x60]; // 0x00F0 (Size: 0x60, Type: StructProperty)
    std::uint8_t InitialSharedTransform[0x1]; // 0x0150 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UTransformProxy, bRotatePerObject) == 208, "Offset mismatch for UTransformProxy::bRotatePerObject");
static_assert(offsetof(UTransformProxy, bSetPivotMode) == 209, "Offset mismatch for UTransformProxy::bSetPivotMode");
static_assert(offsetof(UTransformProxy, SharedTransform) == 240, "Offset mismatch for UTransformProxy::SharedTransform");
static_assert(offsetof(UTransformProxy, InitialSharedTransform) == 336, "Offset mismatch for UTransformProxy::InitialSharedTransform");

// /Script/InteractiveToolsFramework.TwoAxisPropertyEditInputBehavior
// Kind: Class; super: InputBehavior
class UTwoAxisPropertyEditInputBehavior
{
public:
    std::uint8_t Opaque[1];
};


// /Script/InteractiveToolsFramework.ViewAdjustedStaticMeshGizmoComponent
// Kind: Class; super: StaticMeshComponent
class UViewAdjustedStaticMeshGizmoComponent
{
public:
    std::uint8_t Pad_0000[0x6B8]; // 0x0000
    void* GizmoViewContext; // 0x06B8 (Size: 0x8, Type: ObjectProperty)
    void* SubstituteInteractionComponent; // 0x06C0 (Size: 0x8, Type: ObjectProperty)
    void* HoverOverrideMaterial; // 0x06C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UViewAdjustedStaticMeshGizmoComponent, GizmoViewContext) == 1720, "Offset mismatch for UViewAdjustedStaticMeshGizmoComponent::GizmoViewContext");
static_assert(offsetof(UViewAdjustedStaticMeshGizmoComponent, SubstituteInteractionComponent) == 1728, "Offset mismatch for UViewAdjustedStaticMeshGizmoComponent::SubstituteInteractionComponent");
static_assert(offsetof(UViewAdjustedStaticMeshGizmoComponent, HoverOverrideMaterial) == 1736, "Offset mismatch for UViewAdjustedStaticMeshGizmoComponent::HoverOverrideMaterial");

// /Script/InteractiveToolsFramework.WidgetBaseBehavior
// Kind: Class; super: Interface
class UWidgetBaseBehavior
{
public:
    std::uint8_t Opaque[1];
};
