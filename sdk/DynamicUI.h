/**
 * decamp dumper generated SDK
 * Package: /Script/DynamicUI
 */
#pragma once
#include "Basic.h"

// /Script/DynamicUI.DynamicUIAdjust
// Kind: ScriptStruct; super: none
struct FDynamicUIAdjust
{
public:
    std::uint8_t TargetWidget[0x78]; // 0x0000 (Size: 0x78, Type: StructProperty)
    void* LayoutConstraint; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* SizeModifier; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDynamicUIAdjust, TargetWidget) == 0, "Offset mismatch for FDynamicUIAdjust::TargetWidget");
static_assert(offsetof(FDynamicUIAdjust, LayoutConstraint) == 120, "Offset mismatch for FDynamicUIAdjust::LayoutConstraint");
static_assert(offsetof(FDynamicUIAdjust, SizeModifier) == 128, "Offset mismatch for FDynamicUIAdjust::SizeModifier");

// /Script/DynamicUI.DynamicUIAllowed
// Kind: ScriptStruct; super: none
struct FDynamicUIAllowed
{
public:
    std::uint8_t Widget[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ZOrder; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0021
    std::int32_t CustomZOrder; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t ActionDomain[0x20]; // 0x0028 (Size: 0x20, Type: SoftObjectProperty)
    void* LayoutConstraint; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* SizeModifier; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ExcludeConditions; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t UniqueID[0x4]; // 0x0068 (Size: 0x4, Type: NameProperty)
    std::uint16_t AllowLayerIDOverride; // 0x006C (Size: 0x2, Type: UInt16Property)
    std::uint8_t bClampMinDPIScaleToOne; // 0x006E (Size: 0x1, Type: BoolProperty)
    // 0x006E BoolProperty bHUDScaleOverride (shared storage)
    // 0x006E BoolProperty bIsUnique (shared storage)
    // 0x006E BoolProperty bUseActionDomain (shared storage)
    // 0x006E BoolProperty bUseExclude (shared storage)
    // 0x006E BoolProperty bUseHUDScaleOverride (shared storage)
    // 0x006E BoolProperty bUseLayerOverride (shared storage)
};

static_assert(offsetof(FDynamicUIAllowed, Widget) == 0, "Offset mismatch for FDynamicUIAllowed::Widget");
static_assert(offsetof(FDynamicUIAllowed, ZOrder) == 32, "Offset mismatch for FDynamicUIAllowed::ZOrder");
static_assert(offsetof(FDynamicUIAllowed, CustomZOrder) == 36, "Offset mismatch for FDynamicUIAllowed::CustomZOrder");
static_assert(offsetof(FDynamicUIAllowed, ActionDomain) == 40, "Offset mismatch for FDynamicUIAllowed::ActionDomain");
static_assert(offsetof(FDynamicUIAllowed, LayoutConstraint) == 72, "Offset mismatch for FDynamicUIAllowed::LayoutConstraint");
static_assert(offsetof(FDynamicUIAllowed, SizeModifier) == 80, "Offset mismatch for FDynamicUIAllowed::SizeModifier");
static_assert(offsetof(FDynamicUIAllowed, ExcludeConditions) == 88, "Offset mismatch for FDynamicUIAllowed::ExcludeConditions");
static_assert(offsetof(FDynamicUIAllowed, UniqueID) == 104, "Offset mismatch for FDynamicUIAllowed::UniqueID");
static_assert(offsetof(FDynamicUIAllowed, AllowLayerIDOverride) == 108, "Offset mismatch for FDynamicUIAllowed::AllowLayerIDOverride");
static_assert(offsetof(FDynamicUIAllowed, bClampMinDPIScaleToOne) == 110, "Offset mismatch for FDynamicUIAllowed::bClampMinDPIScaleToOne");

// /Script/DynamicUI.DynamicUIAspectRatio
// Kind: ScriptStruct; super: none
struct FDynamicUIAspectRatio
{
public:
    std::uint8_t bUseGlobalMaxAspectRatio; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bUseMaxAspectRatio (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t AspectRatio; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0005
    float CustomAspectRatio; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDynamicUIAspectRatio, bUseGlobalMaxAspectRatio) == 0, "Offset mismatch for FDynamicUIAspectRatio::bUseGlobalMaxAspectRatio");
static_assert(offsetof(FDynamicUIAspectRatio, AspectRatio) == 4, "Offset mismatch for FDynamicUIAspectRatio::AspectRatio");
static_assert(offsetof(FDynamicUIAspectRatio, CustomAspectRatio) == 8, "Offset mismatch for FDynamicUIAspectRatio::CustomAspectRatio");

// /Script/DynamicUI.DynamicUIDirectorData
// Kind: ScriptStruct; super: none
struct FDynamicUIDirectorData
{
public:
    std::uint8_t DirectorClass[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    TWeakObjectPtr<void> Instance; // 0x0020 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FDynamicUIDirectorData, DirectorClass) == 0, "Offset mismatch for FDynamicUIDirectorData::DirectorClass");
static_assert(offsetof(FDynamicUIDirectorData, Instance) == 32, "Offset mismatch for FDynamicUIDirectorData::Instance");

// /Script/DynamicUI.DynamicUIHorizontalMargin
// Kind: ScriptStruct; super: none
struct FDynamicUIHorizontalMargin
{
public:
    float Left; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Right; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDynamicUIHorizontalMargin, Left) == 0, "Offset mismatch for FDynamicUIHorizontalMargin::Left");
static_assert(offsetof(FDynamicUIHorizontalMargin, Right) == 4, "Offset mismatch for FDynamicUIHorizontalMargin::Right");

// /Script/DynamicUI.DynamicUILayer
// Kind: ScriptStruct; super: none
struct FDynamicUILayer
{
public:
    FString Name; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t ID; // 0x0010 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FDynamicUILayer, Name) == 0, "Offset mismatch for FDynamicUILayer::Name");
static_assert(offsetof(FDynamicUILayer, ID) == 16, "Offset mismatch for FDynamicUILayer::ID");

// /Script/DynamicUI.DynamicUIManagerDebug
// Kind: ScriptStruct; super: none
struct FDynamicUIManagerDebug
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DynamicUI.DynamicUIPanelDebug
// Kind: ScriptStruct; super: none
struct FDynamicUIPanelDebug
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DynamicUI.DynamicUIPlayerData
// Kind: ScriptStruct; super: none
struct FDynamicUIPlayerData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> ActiveDirectors; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FDynamicUIPlayerData, ActiveDirectors) == 40, "Offset mismatch for FDynamicUIPlayerData::ActiveDirectors");

// /Script/DynamicUI.DynamicUIPreload
// Kind: ScriptStruct; super: none
struct FDynamicUIPreload
{
public:
    TSoftClassPtr<void> Widget; // 0x0000 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FDynamicUIPreload, Widget) == 0, "Offset mismatch for FDynamicUIPreload::Widget");

// /Script/DynamicUI.DynamicUISceneData
// Kind: ScriptStruct; super: none
struct FDynamicUISceneData
{
public:
    TArray<void*> ContextData; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FDynamicUISceneData, ContextData) == 0, "Offset mismatch for FDynamicUISceneData::ContextData");

// /Script/DynamicUI.DynamicUISceneTarget
// Kind: ScriptStruct; super: none
struct FDynamicUISceneTarget
{
public:
    std::uint8_t SceneAssetPath[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FDynamicUISceneTarget, SceneAssetPath) == 0, "Offset mismatch for FDynamicUISceneTarget::SceneAssetPath");

// /Script/DynamicUI.DynamicUIVerticalMargin
// Kind: ScriptStruct; super: none
struct FDynamicUIVerticalMargin
{
public:
    float Top; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Bottom; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDynamicUIVerticalMargin, Top) == 0, "Offset mismatch for FDynamicUIVerticalMargin::Top");
static_assert(offsetof(FDynamicUIVerticalMargin, Bottom) == 4, "Offset mismatch for FDynamicUIVerticalMargin::Bottom");

// /Script/DynamicUI.DynamicUIWidgetTarget
// Kind: ScriptStruct; super: none
struct FDynamicUIWidgetTarget
{
public:
    FName WidgetPath; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t WidgetAssetPath[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t WidgetClass[0x20]; // 0x0020 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t UniqueID[0x4]; // 0x0040 (Size: 0x4, Type: NameProperty)
    std::uint8_t bUseUniqueID; // 0x0044 (Size: 0x1, Type: BoolProperty)
    // 0x0044 BoolProperty bUseWidgetClass (shared storage)
};

static_assert(offsetof(FDynamicUIWidgetTarget, WidgetPath) == 0, "Offset mismatch for FDynamicUIWidgetTarget::WidgetPath");
static_assert(offsetof(FDynamicUIWidgetTarget, WidgetAssetPath) == 8, "Offset mismatch for FDynamicUIWidgetTarget::WidgetAssetPath");
static_assert(offsetof(FDynamicUIWidgetTarget, WidgetClass) == 32, "Offset mismatch for FDynamicUIWidgetTarget::WidgetClass");
static_assert(offsetof(FDynamicUIWidgetTarget, UniqueID) == 64, "Offset mismatch for FDynamicUIWidgetTarget::UniqueID");
static_assert(offsetof(FDynamicUIWidgetTarget, bUseUniqueID) == 68, "Offset mismatch for FDynamicUIWidgetTarget::bUseUniqueID");

// /Script/DynamicUI.CreatedWidgetsHandler
// Kind: Class; super: Interface
class UCreatedWidgetsHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DynamicUI.DynamicUIConstraintAlignment
// Kind: Class; super: DynamicUIConstraintBase
class UDynamicUIConstraintAlignment
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t HorizontalAlignment; // 0x0080 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0081 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0082
    std::uint8_t Anchor; // 0x0084 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0085
    std::uint8_t VerticalMargin[0x8]; // 0x0088 (Size: 0x8, Type: StructProperty)
    std::uint8_t HorizontalMargin[0x8]; // 0x0090 (Size: 0x8, Type: StructProperty)
    std::uint8_t MaxAspectRatio[0xC]; // 0x0098 (Size: 0xC, Type: StructProperty)
    std::uint8_t bUseMaxAspectRatio; // 0x00A4 (Size: 0x1, Type: BoolProperty)
    // 0x00A4 BoolProperty bUseSafeZone (shared storage)
};

static_assert(offsetof(UDynamicUIConstraintAlignment, HorizontalAlignment) == 128, "Offset mismatch for UDynamicUIConstraintAlignment::HorizontalAlignment");
static_assert(offsetof(UDynamicUIConstraintAlignment, VerticalAlignment) == 129, "Offset mismatch for UDynamicUIConstraintAlignment::VerticalAlignment");
static_assert(offsetof(UDynamicUIConstraintAlignment, Anchor) == 132, "Offset mismatch for UDynamicUIConstraintAlignment::Anchor");
static_assert(offsetof(UDynamicUIConstraintAlignment, VerticalMargin) == 136, "Offset mismatch for UDynamicUIConstraintAlignment::VerticalMargin");
static_assert(offsetof(UDynamicUIConstraintAlignment, HorizontalMargin) == 144, "Offset mismatch for UDynamicUIConstraintAlignment::HorizontalMargin");
static_assert(offsetof(UDynamicUIConstraintAlignment, MaxAspectRatio) == 152, "Offset mismatch for UDynamicUIConstraintAlignment::MaxAspectRatio");
static_assert(offsetof(UDynamicUIConstraintAlignment, bUseMaxAspectRatio) == 164, "Offset mismatch for UDynamicUIConstraintAlignment::bUseMaxAspectRatio");

// /Script/DynamicUI.DynamicUIConstraintBase
// Kind: Class; super: Object
class UDynamicUIConstraintBase
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    std::uint8_t Offset[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    TArray<void*> ConstraintOverrides; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseOffset; // 0x0070 (Size: 0x1, Type: BoolProperty)
    // 0x0070 BoolProperty bUseOverride (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0071
    void* ConstraintOverride; // 0x0078 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDynamicUIConstraintBase, Offset) == 80, "Offset mismatch for UDynamicUIConstraintBase::Offset");
static_assert(offsetof(UDynamicUIConstraintBase, ConstraintOverrides) == 96, "Offset mismatch for UDynamicUIConstraintBase::ConstraintOverrides");
static_assert(offsetof(UDynamicUIConstraintBase, bUseOffset) == 112, "Offset mismatch for UDynamicUIConstraintBase::bUseOffset");
static_assert(offsetof(UDynamicUIConstraintBase, ConstraintOverride) == 120, "Offset mismatch for UDynamicUIConstraintBase::ConstraintOverride");

// /Script/DynamicUI.DynamicUIConstraintContainer
// Kind: Class; super: DynamicUIConstraintBase
class UDynamicUIConstraintContainer
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TArray<void*> WidgetsToContain; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Padding[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    std::uint8_t bMustMatchAllWidgets; // 0x00A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDynamicUIConstraintContainer, WidgetsToContain) == 128, "Offset mismatch for UDynamicUIConstraintContainer::WidgetsToContain");
static_assert(offsetof(UDynamicUIConstraintContainer, Padding) == 144, "Offset mismatch for UDynamicUIConstraintContainer::Padding");
static_assert(offsetof(UDynamicUIConstraintContainer, bMustMatchAllWidgets) == 160, "Offset mismatch for UDynamicUIConstraintContainer::bMustMatchAllWidgets");

// /Script/DynamicUI.DynamicUIConstraintOverrideBase
// Kind: Class; super: Object
class UDynamicUIConstraintOverrideBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DynamicUI.DynamicUIConstraintOwnershipModifierTaggedSlot
// Kind: Class; super: DynamicUIConstraintBase
class UDynamicUIConstraintOwnershipModifierTaggedSlot
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t SlotTag[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDynamicUIConstraintOwnershipModifierTaggedSlot, SlotTag) == 128, "Offset mismatch for UDynamicUIConstraintOwnershipModifierTaggedSlot::SlotTag");

// /Script/DynamicUI.DynamicUIConstraintPlatformOverride
// Kind: Class; super: DynamicUIConstraintOverrideBase
class UDynamicUIConstraintPlatformOverride
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> PlatformVisibilityControls; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> InputTypeVisibilityControls; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDynamicUIConstraintPlatformOverride, PlatformVisibilityControls) == 40, "Offset mismatch for UDynamicUIConstraintPlatformOverride::PlatformVisibilityControls");
static_assert(offsetof(UDynamicUIConstraintPlatformOverride, InputTypeVisibilityControls) == 56, "Offset mismatch for UDynamicUIConstraintPlatformOverride::InputTypeVisibilityControls");

// /Script/DynamicUI.DynamicUIConstraintPosition
// Kind: Class; super: DynamicUIConstraintBase
class UDynamicUIConstraintPosition
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t Position[0x10]; // 0x0080 (Size: 0x10, Type: StructProperty)
    std::uint8_t Anchor; // 0x0090 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0091
    std::uint8_t bUseSafeZone; // 0x0094 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDynamicUIConstraintPosition, Position) == 128, "Offset mismatch for UDynamicUIConstraintPosition::Position");
static_assert(offsetof(UDynamicUIConstraintPosition, Anchor) == 144, "Offset mismatch for UDynamicUIConstraintPosition::Anchor");
static_assert(offsetof(UDynamicUIConstraintPosition, bUseSafeZone) == 148, "Offset mismatch for UDynamicUIConstraintPosition::bUseSafeZone");

// /Script/DynamicUI.DynamicUIConstraintReplace
// Kind: Class; super: DynamicUIConstraintBase
class UDynamicUIConstraintReplace
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t TargetWidget[0x78]; // 0x0080 (Size: 0x78, Type: StructProperty)
    std::uint8_t ReplacedWidgetBehavior; // 0x00F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00F9
    TArray<void*> Fallbacks; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseFallbacks; // 0x0110 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDynamicUIConstraintReplace, TargetWidget) == 128, "Offset mismatch for UDynamicUIConstraintReplace::TargetWidget");
static_assert(offsetof(UDynamicUIConstraintReplace, ReplacedWidgetBehavior) == 248, "Offset mismatch for UDynamicUIConstraintReplace::ReplacedWidgetBehavior");
static_assert(offsetof(UDynamicUIConstraintReplace, Fallbacks) == 256, "Offset mismatch for UDynamicUIConstraintReplace::Fallbacks");
static_assert(offsetof(UDynamicUIConstraintReplace, bUseFallbacks) == 272, "Offset mismatch for UDynamicUIConstraintReplace::bUseFallbacks");

// /Script/DynamicUI.DynamicUIConstraintSplitscreenOverride
// Kind: Class; super: DynamicUIConstraintOverrideBase
class UDynamicUIConstraintSplitscreenOverride
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SplitscreenConstraintOverride; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDynamicUIConstraintSplitscreenOverride, SplitscreenConstraintOverride) == 40, "Offset mismatch for UDynamicUIConstraintSplitscreenOverride::SplitscreenConstraintOverride");

// /Script/DynamicUI.DynamicUIConstraintWidget
// Kind: Class; super: DynamicUIConstraintBase
class UDynamicUIConstraintWidget
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t Anchor; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0081
    std::uint8_t TargetWidget[0x78]; // 0x0088 (Size: 0x78, Type: StructProperty)
    std::uint8_t TargetAnchor; // 0x0100 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0101
    TArray<void*> Fallbacks; // 0x0108 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bConstrainToUnallowedWidgets; // 0x0118 (Size: 0x1, Type: BoolProperty)
    // 0x0118 BoolProperty bUseFallbacks (shared storage)
};

static_assert(offsetof(UDynamicUIConstraintWidget, Anchor) == 128, "Offset mismatch for UDynamicUIConstraintWidget::Anchor");
static_assert(offsetof(UDynamicUIConstraintWidget, TargetWidget) == 136, "Offset mismatch for UDynamicUIConstraintWidget::TargetWidget");
static_assert(offsetof(UDynamicUIConstraintWidget, TargetAnchor) == 256, "Offset mismatch for UDynamicUIConstraintWidget::TargetAnchor");
static_assert(offsetof(UDynamicUIConstraintWidget, Fallbacks) == 264, "Offset mismatch for UDynamicUIConstraintWidget::Fallbacks");
static_assert(offsetof(UDynamicUIConstraintWidget, bConstrainToUnallowedWidgets) == 280, "Offset mismatch for UDynamicUIConstraintWidget::bConstrainToUnallowedWidgets");

// /Script/DynamicUI.DynamicUIDirectorBase
// Kind: Class; super: Actor
class UDynamicUIDirectorBase
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> DefaultScenes; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> OwningLocalPlayer; // 0x0280 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bEnabledDuringReplay; // 0x0288 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0289
    TArray<void*> ScenesManuallyAdded; // 0x0290 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDynamicUIDirectorBase, DefaultScenes) == 624, "Offset mismatch for UDynamicUIDirectorBase::DefaultScenes");
static_assert(offsetof(UDynamicUIDirectorBase, OwningLocalPlayer) == 640, "Offset mismatch for UDynamicUIDirectorBase::OwningLocalPlayer");
static_assert(offsetof(UDynamicUIDirectorBase, bEnabledDuringReplay) == 648, "Offset mismatch for UDynamicUIDirectorBase::bEnabledDuringReplay");
static_assert(offsetof(UDynamicUIDirectorBase, ScenesManuallyAdded) == 656, "Offset mismatch for UDynamicUIDirectorBase::ScenesManuallyAdded");

// /Script/DynamicUI.DynamicUIExcludeBase
// Kind: Class; super: Object
class UDynamicUIExcludeBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DynamicUI.DynamicUIExcludeConsoleVariable
// Kind: Class; super: DynamicUIExcludeBase
class UDynamicUIExcludeConsoleVariable
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ConsoleVariables; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDynamicUIExcludeConsoleVariable, ConsoleVariables) == 40, "Offset mismatch for UDynamicUIExcludeConsoleVariable::ConsoleVariables");

// /Script/DynamicUI.DynamicUIExcludeConsoleVariableTypeBase
// Kind: Class; super: Object
class UDynamicUIExcludeConsoleVariableTypeBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString ConsoleVariableName; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UDynamicUIExcludeConsoleVariableTypeBase, ConsoleVariableName) == 40, "Offset mismatch for UDynamicUIExcludeConsoleVariableTypeBase::ConsoleVariableName");

// /Script/DynamicUI.DynamicUIExcludeConsoleVariableTypeBool
// Kind: Class; super: DynamicUIExcludeConsoleVariableTypeBase
class UDynamicUIExcludeConsoleVariableTypeBool
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t ExclusionState; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDynamicUIExcludeConsoleVariableTypeBool, ExclusionState) == 64, "Offset mismatch for UDynamicUIExcludeConsoleVariableTypeBool::ExclusionState");

// /Script/DynamicUI.DynamicUIExcludeInputType
// Kind: Class; super: DynamicUIExcludeBase
class UDynamicUIExcludeInputType
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> InputTypes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDynamicUIExcludeInputType, InputTypes) == 40, "Offset mismatch for UDynamicUIExcludeInputType::InputTypes");

// /Script/DynamicUI.DynamicUILayerSettings
// Kind: Class; super: Object
class UDynamicUILayerSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ExperienceLayers; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PlatformLayers; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    FString DefaultLayerName; // 0x0048 (Size: 0x10, Type: StrProperty)
    TArray<void*> HUDScaledLayers; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDynamicUILayerSettings, ExperienceLayers) == 40, "Offset mismatch for UDynamicUILayerSettings::ExperienceLayers");
static_assert(offsetof(UDynamicUILayerSettings, PlatformLayers) == 56, "Offset mismatch for UDynamicUILayerSettings::PlatformLayers");
static_assert(offsetof(UDynamicUILayerSettings, DefaultLayerName) == 72, "Offset mismatch for UDynamicUILayerSettings::DefaultLayerName");
static_assert(offsetof(UDynamicUILayerSettings, HUDScaledLayers) == 88, "Offset mismatch for UDynamicUILayerSettings::HUDScaledLayers");

// /Script/DynamicUI.DynamicUIManager
// Kind: Class; super: WorldSubsystem
class UDynamicUIManager
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TMap<void*, void*> PlayerDataMap; // 0x0058 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDynamicUIManager, PlayerDataMap) == 88, "Offset mismatch for UDynamicUIManager::PlayerDataMap");

// /Script/DynamicUI.DynamicUIScene
// Kind: Class; super: DataAsset
class UDynamicUIScene
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint16_t SceneLayerID; // 0x0028 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0001[0x6]; // 0x002A
    TArray<void*> Allowed; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Unallow; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Adjust; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Preload; // 0x0060 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDynamicUIScene, SceneLayerID) == 40, "Offset mismatch for UDynamicUIScene::SceneLayerID");
static_assert(offsetof(UDynamicUIScene, Allowed) == 48, "Offset mismatch for UDynamicUIScene::Allowed");
static_assert(offsetof(UDynamicUIScene, Unallow) == 64, "Offset mismatch for UDynamicUIScene::Unallow");
static_assert(offsetof(UDynamicUIScene, Adjust) == 80, "Offset mismatch for UDynamicUIScene::Adjust");
static_assert(offsetof(UDynamicUIScene, Preload) == 96, "Offset mismatch for UDynamicUIScene::Preload");

// /Script/DynamicUI.DynamicUISizeBase
// Kind: Class; super: Object
class UDynamicUISizeBase
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    void* SizeOverride; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseOverride; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bUseRenderTransform (shared storage)
};

static_assert(offsetof(UDynamicUISizeBase, SizeOverride) == 80, "Offset mismatch for UDynamicUISizeBase::SizeOverride");
static_assert(offsetof(UDynamicUISizeBase, bUseOverride) == 88, "Offset mismatch for UDynamicUISizeBase::bUseOverride");

// /Script/DynamicUI.DynamicUISizeFixed
// Kind: Class; super: DynamicUISizeBase
class UDynamicUISizeFixed
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t Size[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDynamicUISizeFixed, Size) == 96, "Offset mismatch for UDynamicUISizeFixed::Size");

// /Script/DynamicUI.DynamicUISizeMatchWidget
// Kind: Class; super: DynamicUISizeBase
class UDynamicUISizeMatchWidget
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t TargetWidget[0x78]; // 0x0060 (Size: 0x78, Type: StructProperty)
    std::uint8_t MatchType; // 0x00D8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D9
    TArray<void*> Fallbacks; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseFallbacks; // 0x00F0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDynamicUISizeMatchWidget, TargetWidget) == 96, "Offset mismatch for UDynamicUISizeMatchWidget::TargetWidget");
static_assert(offsetof(UDynamicUISizeMatchWidget, MatchType) == 216, "Offset mismatch for UDynamicUISizeMatchWidget::MatchType");
static_assert(offsetof(UDynamicUISizeMatchWidget, Fallbacks) == 224, "Offset mismatch for UDynamicUISizeMatchWidget::Fallbacks");
static_assert(offsetof(UDynamicUISizeMatchWidget, bUseFallbacks) == 240, "Offset mismatch for UDynamicUISizeMatchWidget::bUseFallbacks");

// /Script/DynamicUI.DynamicUISizeOverrideBase
// Kind: Class; super: Object
class UDynamicUISizeOverrideBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DynamicUI.DynamicUISizeOverridePlatform
// Kind: Class; super: DynamicUISizeOverrideBase
class UDynamicUISizeOverridePlatform
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> PlatformOverrides; // 0x0028 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> InputTypeOverrides; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UDynamicUISizeOverridePlatform, PlatformOverrides) == 40, "Offset mismatch for UDynamicUISizeOverridePlatform::PlatformOverrides");
static_assert(offsetof(UDynamicUISizeOverridePlatform, InputTypeOverrides) == 56, "Offset mismatch for UDynamicUISizeOverridePlatform::InputTypeOverrides");

// /Script/DynamicUI.DynamicUISizeScale
// Kind: Class; super: DynamicUISizeBase
class UDynamicUISizeScale
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t Scale[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDynamicUISizeScale, Scale) == 96, "Offset mismatch for UDynamicUISizeScale::Scale");

// /Script/DynamicUI.DynamicUISizeSplitscreenOverride
// Kind: Class; super: DynamicUISizeOverrideBase
class UDynamicUISizeSplitscreenOverride
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* SplitscreenSizeModifier; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDynamicUISizeSplitscreenOverride, SplitscreenSizeModifier) == 40, "Offset mismatch for UDynamicUISizeSplitscreenOverride::SplitscreenSizeModifier");

// /Script/DynamicUI.DynamicUITransitionableWidgetInterface
// Kind: Class; super: Interface
class UDynamicUITransitionableWidgetInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/DynamicUI.DynamicUIUnallowBase
// Kind: Class; super: Object
class UDynamicUIUnallowBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Behavior; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    TArray<void*> ExcludeConditions; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bUseExclude; // 0x0040 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDynamicUIUnallowBase, Behavior) == 40, "Offset mismatch for UDynamicUIUnallowBase::Behavior");
static_assert(offsetof(UDynamicUIUnallowBase, ExcludeConditions) == 48, "Offset mismatch for UDynamicUIUnallowBase::ExcludeConditions");
static_assert(offsetof(UDynamicUIUnallowBase, bUseExclude) == 64, "Offset mismatch for UDynamicUIUnallowBase::bUseExclude");

// /Script/DynamicUI.DynamicUIUnallowLayer
// Kind: Class; super: DynamicUIUnallowBase
class UDynamicUIUnallowLayer
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint16_t UnallowLayerID; // 0x0048 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Comparison; // 0x004A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x5]; // 0x004B
    TArray<void*> Exclusions; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UDynamicUIUnallowLayer, UnallowLayerID) == 72, "Offset mismatch for UDynamicUIUnallowLayer::UnallowLayerID");
static_assert(offsetof(UDynamicUIUnallowLayer, Comparison) == 74, "Offset mismatch for UDynamicUIUnallowLayer::Comparison");
static_assert(offsetof(UDynamicUIUnallowLayer, Exclusions) == 80, "Offset mismatch for UDynamicUIUnallowLayer::Exclusions");

// /Script/DynamicUI.DynamicUIUnallowScene
// Kind: Class; super: DynamicUIUnallowBase
class UDynamicUIUnallowScene
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t Scene[0x18]; // 0x0048 (Size: 0x18, Type: StructProperty)
    TArray<void*> Exclusions; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    void* RuntimeScene; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDynamicUIUnallowScene, Scene) == 72, "Offset mismatch for UDynamicUIUnallowScene::Scene");
static_assert(offsetof(UDynamicUIUnallowScene, Exclusions) == 96, "Offset mismatch for UDynamicUIUnallowScene::Exclusions");
static_assert(offsetof(UDynamicUIUnallowScene, RuntimeScene) == 112, "Offset mismatch for UDynamicUIUnallowScene::RuntimeScene");

// /Script/DynamicUI.DynamicUIUnallowWidget
// Kind: Class; super: DynamicUIUnallowBase
class UDynamicUIUnallowWidget
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t Widget[0x78]; // 0x0048 (Size: 0x78, Type: StructProperty)
    std::uint8_t bTargetAll; // 0x00C0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UDynamicUIUnallowWidget, Widget) == 72, "Offset mismatch for UDynamicUIUnallowWidget::Widget");
static_assert(offsetof(UDynamicUIUnallowWidget, bTargetAll) == 192, "Offset mismatch for UDynamicUIUnallowWidget::bTargetAll");
