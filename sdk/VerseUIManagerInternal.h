/**
 * decamp dumper generated SDK
 * Package: /Script/VerseUIManagerInternal
 */
#pragma once
#include "Basic.h"

// /Script/VerseUIManagerInternal.QueuedDynamicUIScene
// Kind: ScriptStruct; super: none
struct FQueuedDynamicUIScene
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseUIManagerInternal.UIAllowedWidgetList
// Kind: ScriptStruct; super: FastArraySerializer
struct FUIAllowedWidgetList
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Slots; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* Owner; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUIAllowedWidgetList, Slots) == 72, "Offset mismatch for FUIAllowedWidgetList::Slots");
static_assert(offsetof(FUIAllowedWidgetList, Owner) == 88, "Offset mismatch for FUIAllowedWidgetList::Owner");

// /Script/VerseUIManagerInternal.UIFrameworkDynamicUIPanelSlot
// Kind: ScriptStruct; super: UIFrameworkSlotBase
struct FUIFrameworkDynamicUIPanelSlot
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName WidgetUniqueID; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FUIFrameworkDynamicUIPanelSlot, WidgetUniqueID) == 40, "Offset mismatch for FUIFrameworkDynamicUIPanelSlot::WidgetUniqueID");

// /Script/VerseUIManagerInternal.VerseDynamicUIAllowed
// Kind: ScriptStruct; super: none
struct FVerseDynamicUIAllowed
{
public:
    std::uint8_t Widget[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ZOrder; // 0x0020 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0021
    std::int32_t CustomZOrder; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::uint8_t LayoutConstraintAlignment[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t LayoutConstraintWidget[0x40]; // 0x0040 (Size: 0x40, Type: StructProperty)
    std::uint8_t LayoutConstraintReplace[0x38]; // 0x0080 (Size: 0x38, Type: StructProperty)
    std::uint8_t LayoutConstraintType; // 0x00B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00B9
    FName UniqueID; // 0x00BC (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FVerseDynamicUIAllowed, Widget) == 0, "Offset mismatch for FVerseDynamicUIAllowed::Widget");
static_assert(offsetof(FVerseDynamicUIAllowed, ZOrder) == 32, "Offset mismatch for FVerseDynamicUIAllowed::ZOrder");
static_assert(offsetof(FVerseDynamicUIAllowed, CustomZOrder) == 36, "Offset mismatch for FVerseDynamicUIAllowed::CustomZOrder");
static_assert(offsetof(FVerseDynamicUIAllowed, LayoutConstraintAlignment) == 40, "Offset mismatch for FVerseDynamicUIAllowed::LayoutConstraintAlignment");
static_assert(offsetof(FVerseDynamicUIAllowed, LayoutConstraintWidget) == 64, "Offset mismatch for FVerseDynamicUIAllowed::LayoutConstraintWidget");
static_assert(offsetof(FVerseDynamicUIAllowed, LayoutConstraintReplace) == 128, "Offset mismatch for FVerseDynamicUIAllowed::LayoutConstraintReplace");
static_assert(offsetof(FVerseDynamicUIAllowed, LayoutConstraintType) == 184, "Offset mismatch for FVerseDynamicUIAllowed::LayoutConstraintType");
static_assert(offsetof(FVerseDynamicUIAllowed, UniqueID) == 188, "Offset mismatch for FVerseDynamicUIAllowed::UniqueID");

// /Script/VerseUIManagerInternal.VerseDynamicUIConstraintAlignment
// Kind: ScriptStruct; super: VerseDynamicUIConstraintBase
struct FVerseDynamicUIConstraintAlignment
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t HorizontalAlignment; // 0x0010 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0011 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0012
    std::uint8_t Anchor; // 0x0014 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FVerseDynamicUIConstraintAlignment, HorizontalAlignment) == 16, "Offset mismatch for FVerseDynamicUIConstraintAlignment::HorizontalAlignment");
static_assert(offsetof(FVerseDynamicUIConstraintAlignment, VerticalAlignment) == 17, "Offset mismatch for FVerseDynamicUIConstraintAlignment::VerticalAlignment");
static_assert(offsetof(FVerseDynamicUIConstraintAlignment, Anchor) == 20, "Offset mismatch for FVerseDynamicUIConstraintAlignment::Anchor");

// /Script/VerseUIManagerInternal.VerseDynamicUIConstraintBase
// Kind: ScriptStruct; super: none
struct FVerseDynamicUIConstraintBase
{
public:
    std::uint8_t Offset[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVerseDynamicUIConstraintBase, Offset) == 0, "Offset mismatch for FVerseDynamicUIConstraintBase::Offset");

// /Script/VerseUIManagerInternal.VerseDynamicUIConstraintReplace
// Kind: ScriptStruct; super: VerseDynamicUIConstraintBase
struct FVerseDynamicUIConstraintReplace
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Widget[0x20]; // 0x0010 (Size: 0x20, Type: SoftClassProperty)
    FName UniqueID; // 0x0030 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FVerseDynamicUIConstraintReplace, Widget) == 16, "Offset mismatch for FVerseDynamicUIConstraintReplace::Widget");
static_assert(offsetof(FVerseDynamicUIConstraintReplace, UniqueID) == 48, "Offset mismatch for FVerseDynamicUIConstraintReplace::UniqueID");

// /Script/VerseUIManagerInternal.VerseDynamicUIConstraintWidget
// Kind: ScriptStruct; super: VerseDynamicUIConstraintBase
struct FVerseDynamicUIConstraintWidget
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Widget[0x20]; // 0x0010 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t Anchor; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    std::uint8_t TargetAnchor; // 0x0034 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0035
    FName UniqueID; // 0x0038 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FVerseDynamicUIConstraintWidget, Widget) == 16, "Offset mismatch for FVerseDynamicUIConstraintWidget::Widget");
static_assert(offsetof(FVerseDynamicUIConstraintWidget, Anchor) == 48, "Offset mismatch for FVerseDynamicUIConstraintWidget::Anchor");
static_assert(offsetof(FVerseDynamicUIConstraintWidget, TargetAnchor) == 52, "Offset mismatch for FVerseDynamicUIConstraintWidget::TargetAnchor");
static_assert(offsetof(FVerseDynamicUIConstraintWidget, UniqueID) == 56, "Offset mismatch for FVerseDynamicUIConstraintWidget::UniqueID");

// /Script/VerseUIManagerInternal.VerseDynamicUIScene
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FVerseDynamicUIScene
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    TArray<void*> Allowed; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Unallowed; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ID[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVerseDynamicUIScene, Allowed) == 16, "Offset mismatch for FVerseDynamicUIScene::Allowed");
static_assert(offsetof(FVerseDynamicUIScene, Unallowed) == 32, "Offset mismatch for FVerseDynamicUIScene::Unallowed");
static_assert(offsetof(FVerseDynamicUIScene, ID) == 48, "Offset mismatch for FVerseDynamicUIScene::ID");

// /Script/VerseUIManagerInternal.VerseDynamicUISceneList
// Kind: ScriptStruct; super: FastArraySerializer
struct FVerseDynamicUISceneList
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Slots; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* Owner; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FVerseDynamicUISceneList, Slots) == 72, "Offset mismatch for FVerseDynamicUISceneList::Slots");
static_assert(offsetof(FVerseDynamicUISceneList, Owner) == 88, "Offset mismatch for FVerseDynamicUISceneList::Owner");

// /Script/VerseUIManagerInternal.VerseDynamicUIUnallowed
// Kind: ScriptStruct; super: none
struct FVerseDynamicUIUnallowed
{
public:
    std::uint8_t Widget[0x20]; // 0x0000 (Size: 0x20, Type: SoftClassProperty)
    FName UniqueID; // 0x0020 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FVerseDynamicUIUnallowed, Widget) == 0, "Offset mismatch for FVerseDynamicUIUnallowed::Widget");
static_assert(offsetof(FVerseDynamicUIUnallowed, UniqueID) == 32, "Offset mismatch for FVerseDynamicUIUnallowed::UniqueID");

// /Script/VerseUIManagerInternal.FortControllerComponent_VerseUIExtensionWidget
// Kind: Class; super: FortControllerComponent_UIExtensionWidget
class UFortControllerComponent_VerseUIExtensionWidget
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* VerseUIExtensionComponent; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortControllerComponent_VerseUIExtensionWidget, VerseUIExtensionComponent) == 208, "Offset mismatch for UFortControllerComponent_VerseUIExtensionWidget::VerseUIExtensionComponent");

// /Script/VerseUIManagerInternal.VerseDynamicUIPanel
// Kind: Class; super: UIFrameworkWidget
class UVerseDynamicUIPanel
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t ActiveScenes[0x60]; // 0x00E0 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedWidgetList[0x60]; // 0x0140 (Size: 0x60, Type: StructProperty)
    TMap<void*, void*> LocalSceneObjects; // 0x01A0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> LocalQueuedScenes; // 0x01B0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UVerseDynamicUIPanel, ActiveScenes) == 224, "Offset mismatch for UVerseDynamicUIPanel::ActiveScenes");
static_assert(offsetof(UVerseDynamicUIPanel, ReplicatedWidgetList) == 320, "Offset mismatch for UVerseDynamicUIPanel::ReplicatedWidgetList");
static_assert(offsetof(UVerseDynamicUIPanel, LocalSceneObjects) == 416, "Offset mismatch for UVerseDynamicUIPanel::LocalSceneObjects");
static_assert(offsetof(UVerseDynamicUIPanel, LocalQueuedScenes) == 432, "Offset mismatch for UVerseDynamicUIPanel::LocalQueuedScenes");
