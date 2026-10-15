/**
 * decamp dumper generated SDK
 * Package: /Script/UIFramework
 */
#pragma once
#include "Basic.h"

// /Script/UIFramework.UIFrameworkCanvasBoxSlot
// Kind: ScriptStruct; super: UIFrameworkSlotBase
struct FUIFrameworkCanvasBoxSlot
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Anchors[0x20]; // 0x0028 (Size: 0x20, Type: StructProperty)
    std::uint8_t Offsets[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t Alignment[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::int32_t ZOrder; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::uint8_t bSizeToContent; // 0x006C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUIFrameworkCanvasBoxSlot, Anchors) == 40, "Offset mismatch for FUIFrameworkCanvasBoxSlot::Anchors");
static_assert(offsetof(FUIFrameworkCanvasBoxSlot, Offsets) == 72, "Offset mismatch for FUIFrameworkCanvasBoxSlot::Offsets");
static_assert(offsetof(FUIFrameworkCanvasBoxSlot, Alignment) == 88, "Offset mismatch for FUIFrameworkCanvasBoxSlot::Alignment");
static_assert(offsetof(FUIFrameworkCanvasBoxSlot, ZOrder) == 104, "Offset mismatch for FUIFrameworkCanvasBoxSlot::ZOrder");
static_assert(offsetof(FUIFrameworkCanvasBoxSlot, bSizeToContent) == 108, "Offset mismatch for FUIFrameworkCanvasBoxSlot::bSizeToContent");

// /Script/UIFramework.UIFrameworkCanvasBoxSlotList
// Kind: ScriptStruct; super: FastArraySerializer
struct FUIFrameworkCanvasBoxSlotList
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Slots; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* Owner; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUIFrameworkCanvasBoxSlotList, Slots) == 72, "Offset mismatch for FUIFrameworkCanvasBoxSlotList::Slots");
static_assert(offsetof(FUIFrameworkCanvasBoxSlotList, Owner) == 88, "Offset mismatch for FUIFrameworkCanvasBoxSlotList::Owner");

// /Script/UIFramework.UIFrameworkClickEventArgument
// Kind: ScriptStruct; super: UIFrameworkSimpleEventArgument
struct FUIFrameworkClickEventArgument
{
public:
    void* PlayerController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Sender; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUIFrameworkClickEventArgument, PlayerController) == 0, "Offset mismatch for FUIFrameworkClickEventArgument::PlayerController");
static_assert(offsetof(FUIFrameworkClickEventArgument, Sender) == 8, "Offset mismatch for FUIFrameworkClickEventArgument::Sender");

// /Script/UIFramework.UIFrameworkGameLayerSlot
// Kind: ScriptStruct; super: UIFrameworkSlotBase
struct FUIFrameworkGameLayerSlot
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t ZOrder; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::uint8_t InputMode; // 0x002C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Type; // 0x002D (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FUIFrameworkGameLayerSlot, ZOrder) == 40, "Offset mismatch for FUIFrameworkGameLayerSlot::ZOrder");
static_assert(offsetof(FUIFrameworkGameLayerSlot, InputMode) == 44, "Offset mismatch for FUIFrameworkGameLayerSlot::InputMode");
static_assert(offsetof(FUIFrameworkGameLayerSlot, Type) == 45, "Offset mismatch for FUIFrameworkGameLayerSlot::Type");

// /Script/UIFramework.UIFrameworkGameLayerSlotList
// Kind: ScriptStruct; super: FastArraySerializer
struct FUIFrameworkGameLayerSlotList
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Entries; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* Owner; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUIFrameworkGameLayerSlotList, Entries) == 72, "Offset mismatch for FUIFrameworkGameLayerSlotList::Entries");
static_assert(offsetof(FUIFrameworkGameLayerSlotList, Owner) == 88, "Offset mismatch for FUIFrameworkGameLayerSlotList::Owner");

// /Script/UIFramework.UIFrameworkHighlightEventArgument
// Kind: ScriptStruct; super: UIFrameworkSimpleEventArgument
struct FUIFrameworkHighlightEventArgument
{
public:
    void* PlayerController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Sender; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUIFrameworkHighlightEventArgument, PlayerController) == 0, "Offset mismatch for FUIFrameworkHighlightEventArgument::PlayerController");
static_assert(offsetof(FUIFrameworkHighlightEventArgument, Sender) == 8, "Offset mismatch for FUIFrameworkHighlightEventArgument::Sender");

// /Script/UIFramework.UIFrameworkImageBlockData
// Kind: ScriptStruct; super: none
struct FUIFrameworkImageBlockData
{
public:
    std::uint8_t Tint[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ResourceObject[0x20]; // 0x0010 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t DesiredSize[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t Tiling; // 0x0038 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bUseTextureSize; // 0x0039 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FUIFrameworkImageBlockData, Tint) == 0, "Offset mismatch for FUIFrameworkImageBlockData::Tint");
static_assert(offsetof(FUIFrameworkImageBlockData, ResourceObject) == 16, "Offset mismatch for FUIFrameworkImageBlockData::ResourceObject");
static_assert(offsetof(FUIFrameworkImageBlockData, DesiredSize) == 48, "Offset mismatch for FUIFrameworkImageBlockData::DesiredSize");
static_assert(offsetof(FUIFrameworkImageBlockData, Tiling) == 56, "Offset mismatch for FUIFrameworkImageBlockData::Tiling");
static_assert(offsetof(FUIFrameworkImageBlockData, bUseTextureSize) == 57, "Offset mismatch for FUIFrameworkImageBlockData::bUseTextureSize");

// /Script/UIFramework.UIFrameworkOverlaySlot
// Kind: ScriptStruct; super: UIFrameworkSlotBase
struct FUIFrameworkOverlaySlot
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Padding[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0038 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0039 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x003A
    std::int32_t Index; // 0x003C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FUIFrameworkOverlaySlot, Padding) == 40, "Offset mismatch for FUIFrameworkOverlaySlot::Padding");
static_assert(offsetof(FUIFrameworkOverlaySlot, HorizontalAlignment) == 56, "Offset mismatch for FUIFrameworkOverlaySlot::HorizontalAlignment");
static_assert(offsetof(FUIFrameworkOverlaySlot, VerticalAlignment) == 57, "Offset mismatch for FUIFrameworkOverlaySlot::VerticalAlignment");
static_assert(offsetof(FUIFrameworkOverlaySlot, Index) == 60, "Offset mismatch for FUIFrameworkOverlaySlot::Index");

// /Script/UIFramework.UIFrameworkOverlaySlotList
// Kind: ScriptStruct; super: FastArraySerializer
struct FUIFrameworkOverlaySlotList
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Slots; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* Owner; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUIFrameworkOverlaySlotList, Slots) == 72, "Offset mismatch for FUIFrameworkOverlaySlotList::Slots");
static_assert(offsetof(FUIFrameworkOverlaySlotList, Owner) == 88, "Offset mismatch for FUIFrameworkOverlaySlotList::Owner");

// /Script/UIFramework.UIFrameworkParentWidget
// Kind: ScriptStruct; super: none
struct FUIFrameworkParentWidget
{
public:
    void* Parent; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUIFrameworkParentWidget, Parent) == 0, "Offset mismatch for FUIFrameworkParentWidget::Parent");

// /Script/UIFramework.UIFrameworkSimpleEventArgument
// Kind: ScriptStruct; super: none
struct FUIFrameworkSimpleEventArgument
{
public:
    void* PlayerController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Sender; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUIFrameworkSimpleEventArgument, PlayerController) == 0, "Offset mismatch for FUIFrameworkSimpleEventArgument::PlayerController");
static_assert(offsetof(FUIFrameworkSimpleEventArgument, Sender) == 8, "Offset mismatch for FUIFrameworkSimpleEventArgument::Sender");

// /Script/UIFramework.UIFrameworkSimpleSlot
// Kind: ScriptStruct; super: UIFrameworkSlotBase
struct FUIFrameworkSimpleSlot
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Padding[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0038 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0039 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FUIFrameworkSimpleSlot, Padding) == 40, "Offset mismatch for FUIFrameworkSimpleSlot::Padding");
static_assert(offsetof(FUIFrameworkSimpleSlot, HorizontalAlignment) == 56, "Offset mismatch for FUIFrameworkSimpleSlot::HorizontalAlignment");
static_assert(offsetof(FUIFrameworkSimpleSlot, VerticalAlignment) == 57, "Offset mismatch for FUIFrameworkSimpleSlot::VerticalAlignment");

// /Script/UIFramework.UIFrameworkSlotBase
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FUIFrameworkSlotBase
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* Widget; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t WidgetId[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t LocalPreviousWidgetId[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUIFrameworkSlotBase, Widget) == 16, "Offset mismatch for FUIFrameworkSlotBase::Widget");
static_assert(offsetof(FUIFrameworkSlotBase, WidgetId) == 24, "Offset mismatch for FUIFrameworkSlotBase::WidgetId");
static_assert(offsetof(FUIFrameworkSlotBase, LocalPreviousWidgetId) == 32, "Offset mismatch for FUIFrameworkSlotBase::LocalPreviousWidgetId");

// /Script/UIFramework.UIFrameworkStackBoxSlot
// Kind: ScriptStruct; super: UIFrameworkSlotBase
struct FUIFrameworkStackBoxSlot
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t HorizontalAlignment; // 0x0028 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0029 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x002A
    std::uint8_t Padding[0x10]; // 0x002C (Size: 0x10, Type: StructProperty)
    std::uint8_t Size[0x8]; // 0x003C (Size: 0x8, Type: StructProperty)
    std::int32_t Index; // 0x0044 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FUIFrameworkStackBoxSlot, HorizontalAlignment) == 40, "Offset mismatch for FUIFrameworkStackBoxSlot::HorizontalAlignment");
static_assert(offsetof(FUIFrameworkStackBoxSlot, VerticalAlignment) == 41, "Offset mismatch for FUIFrameworkStackBoxSlot::VerticalAlignment");
static_assert(offsetof(FUIFrameworkStackBoxSlot, Padding) == 44, "Offset mismatch for FUIFrameworkStackBoxSlot::Padding");
static_assert(offsetof(FUIFrameworkStackBoxSlot, Size) == 60, "Offset mismatch for FUIFrameworkStackBoxSlot::Size");
static_assert(offsetof(FUIFrameworkStackBoxSlot, Index) == 68, "Offset mismatch for FUIFrameworkStackBoxSlot::Index");

// /Script/UIFramework.UIFrameworkStackBoxSlotList
// Kind: ScriptStruct; super: FastArraySerializer
struct FUIFrameworkStackBoxSlotList
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Slots; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* Owner; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUIFrameworkStackBoxSlotList, Slots) == 72, "Offset mismatch for FUIFrameworkStackBoxSlotList::Slots");
static_assert(offsetof(FUIFrameworkStackBoxSlotList, Owner) == 88, "Offset mismatch for FUIFrameworkStackBoxSlotList::Owner");

// /Script/UIFramework.UIFrameworkUnhighlightEventArgument
// Kind: ScriptStruct; super: UIFrameworkSimpleEventArgument
struct FUIFrameworkUnhighlightEventArgument
{
public:
    void* PlayerController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Sender; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUIFrameworkUnhighlightEventArgument, PlayerController) == 0, "Offset mismatch for FUIFrameworkUnhighlightEventArgument::PlayerController");
static_assert(offsetof(FUIFrameworkUnhighlightEventArgument, Sender) == 8, "Offset mismatch for FUIFrameworkUnhighlightEventArgument::Sender");

// /Script/UIFramework.UIFrameworkUserWidgetNamedSlot
// Kind: ScriptStruct; super: UIFrameworkSlotBase
struct FUIFrameworkUserWidgetNamedSlot
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName SlotName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FUIFrameworkUserWidgetNamedSlot, SlotName) == 40, "Offset mismatch for FUIFrameworkUserWidgetNamedSlot::SlotName");

// /Script/UIFramework.UIFrameworkUserWidgetNamedSlotList
// Kind: ScriptStruct; super: FastArraySerializer
struct FUIFrameworkUserWidgetNamedSlotList
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Slots; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    void* Owner; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUIFrameworkUserWidgetNamedSlotList, Slots) == 72, "Offset mismatch for FUIFrameworkUserWidgetNamedSlotList::Slots");
static_assert(offsetof(FUIFrameworkUserWidgetNamedSlotList, Owner) == 88, "Offset mismatch for FUIFrameworkUserWidgetNamedSlotList::Owner");

// /Script/UIFramework.UIFrameworkWidgetId
// Kind: ScriptStruct; super: none
struct FUIFrameworkWidgetId
{
public:
    std::int64_t Key; // 0x0000 (Size: 0x8, Type: Int64Property)
};

static_assert(offsetof(FUIFrameworkWidgetId, Key) == 0, "Offset mismatch for FUIFrameworkWidgetId::Key");

// /Script/UIFramework.UIFrameworkWidgetOwner
// Kind: ScriptStruct; super: none
struct FUIFrameworkWidgetOwner
{
public:
    void* PlayerController; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* GameInstance; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* World; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUIFrameworkWidgetOwner, PlayerController) == 0, "Offset mismatch for FUIFrameworkWidgetOwner::PlayerController");
static_assert(offsetof(FUIFrameworkWidgetOwner, GameInstance) == 8, "Offset mismatch for FUIFrameworkWidgetOwner::GameInstance");
static_assert(offsetof(FUIFrameworkWidgetOwner, World) == 16, "Offset mismatch for FUIFrameworkWidgetOwner::World");

// /Script/UIFramework.UIFrameworkWidgetToFocus
// Kind: ScriptStruct; super: none
struct FUIFrameworkWidgetToFocus
{
public:
    std::uint8_t ID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::int32_t ReplicationCounter; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FUIFrameworkWidgetToFocus, ID) == 0, "Offset mismatch for FUIFrameworkWidgetToFocus::ID");
static_assert(offsetof(FUIFrameworkWidgetToFocus, ReplicationCounter) == 8, "Offset mismatch for FUIFrameworkWidgetToFocus::ReplicationCounter");

// /Script/UIFramework.UIFrameworkWidgetTree
// Kind: ScriptStruct; super: FastArraySerializer
struct FUIFrameworkWidgetTree
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    TArray<void*> Entries; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    void* ReplicatedOwner; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUIFrameworkWidgetTree, Entries) == 144, "Offset mismatch for FUIFrameworkWidgetTree::Entries");
static_assert(offsetof(FUIFrameworkWidgetTree, ReplicatedOwner) == 160, "Offset mismatch for FUIFrameworkWidgetTree::ReplicatedOwner");

// /Script/UIFramework.UIFrameworkWidgetTreeEntry
// Kind: ScriptStruct; super: FastArraySerializerItem
struct FUIFrameworkWidgetTreeEntry
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    void* Parent; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* Child; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ParentId[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t ChildId[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FUIFrameworkWidgetTreeEntry, Parent) == 16, "Offset mismatch for FUIFrameworkWidgetTreeEntry::Parent");
static_assert(offsetof(FUIFrameworkWidgetTreeEntry, Child) == 24, "Offset mismatch for FUIFrameworkWidgetTreeEntry::Child");
static_assert(offsetof(FUIFrameworkWidgetTreeEntry, ParentId) == 32, "Offset mismatch for FUIFrameworkWidgetTreeEntry::ParentId");
static_assert(offsetof(FUIFrameworkWidgetTreeEntry, ChildId) == 40, "Offset mismatch for FUIFrameworkWidgetTreeEntry::ChildId");

// /Script/UIFramework.UIFrameworkButton
// Kind: Class; super: UIFrameworkWidget
class UUIFrameworkButton
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    std::uint8_t Slot[0x58]; // 0x0128 (Size: 0x58, Type: StructProperty)
    TSoftObjectPtr<void> TriggeringInputAction; // 0x0180 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UUIFrameworkButton, Slot) == 296, "Offset mismatch for UUIFrameworkButton::Slot");
static_assert(offsetof(UUIFrameworkButton, TriggeringInputAction) == 384, "Offset mismatch for UUIFrameworkButton::TriggeringInputAction");

// /Script/UIFramework.UIFrameworkButtonWidget
// Kind: Class; super: button
class UUIFrameworkButtonWidget
{
public:
    std::uint8_t Pad_0000[0x650]; // 0x0000
    void* TriggeringInputAction; // 0x0650 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUIFrameworkButtonWidget, TriggeringInputAction) == 1616, "Offset mismatch for UUIFrameworkButtonWidget::TriggeringInputAction");

// /Script/UIFramework.UIFrameworkCanvasBox
// Kind: Class; super: UIFrameworkWidget
class UUIFrameworkCanvasBox
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t ReplicatedSlotList[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UUIFrameworkCanvasBox, ReplicatedSlotList) == 224, "Offset mismatch for UUIFrameworkCanvasBox::ReplicatedSlotList");

// /Script/UIFramework.UIFrameworkColorBlock
// Kind: Class; super: UIFrameworkWidget
class UUIFrameworkColorBlock
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Color[0x10]; // 0x00E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t DesiredSize[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UUIFrameworkColorBlock, Color) == 224, "Offset mismatch for UUIFrameworkColorBlock::Color");
static_assert(offsetof(UUIFrameworkColorBlock, DesiredSize) == 240, "Offset mismatch for UUIFrameworkColorBlock::DesiredSize");

// /Script/UIFramework.UIFrameworkCustomButtonWidget
// Kind: Class; super: UIFrameworkButtonWidget
class UUIFrameworkCustomButtonWidget
{
public:
    std::uint8_t Pad_0000[0x6A0]; // 0x0000
    void* LocalDefaultUMGWidget; // 0x06A0 (Size: 0x8, Type: ObjectProperty)
    TSoftClassPtr<void> DefaultContentWidgetClass; // 0x06A8 (Size: 0x28, Type: SoftClassProperty)
    std::uint8_t Pad_0001[0x8]; // 0x06D0
    FMulticastInlineDelegate OnButtonClicked; // 0x06D8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonHighlight; // 0x06E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnButtonUnhighlight; // 0x06F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UUIFrameworkCustomButtonWidget, LocalDefaultUMGWidget) == 1696, "Offset mismatch for UUIFrameworkCustomButtonWidget::LocalDefaultUMGWidget");
static_assert(offsetof(UUIFrameworkCustomButtonWidget, DefaultContentWidgetClass) == 1704, "Offset mismatch for UUIFrameworkCustomButtonWidget::DefaultContentWidgetClass");
static_assert(offsetof(UUIFrameworkCustomButtonWidget, OnButtonClicked) == 1752, "Offset mismatch for UUIFrameworkCustomButtonWidget::OnButtonClicked");
static_assert(offsetof(UUIFrameworkCustomButtonWidget, OnButtonHighlight) == 1768, "Offset mismatch for UUIFrameworkCustomButtonWidget::OnButtonHighlight");
static_assert(offsetof(UUIFrameworkCustomButtonWidget, OnButtonUnhighlight) == 1784, "Offset mismatch for UUIFrameworkCustomButtonWidget::OnButtonUnhighlight");

// /Script/UIFramework.UIFrameworkGameViewportPresenter
// Kind: Class; super: UIFrameworkPresenter
class UUIFrameworkGameViewportPresenter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UIFramework.UIFrameworkImageBlock
// Kind: Class; super: UIFrameworkWidget
class UUIFrameworkImageBlock
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Data[0x40]; // 0x00E0 (Size: 0x40, Type: StructProperty)
    std::uint8_t bWaitForResourceToBeLoaded; // 0x0120 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UUIFrameworkImageBlock, Data) == 224, "Offset mismatch for UUIFrameworkImageBlock::Data");
static_assert(offsetof(UUIFrameworkImageBlock, bWaitForResourceToBeLoaded) == 288, "Offset mismatch for UUIFrameworkImageBlock::bWaitForResourceToBeLoaded");

// /Script/UIFramework.UIFrameworkLocalSettings
// Kind: Class; super: DeveloperSettings
class UUIFrameworkLocalSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ErrorResource[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> LoadingResource; // 0x0050 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UUIFrameworkLocalSettings, ErrorResource) == 48, "Offset mismatch for UUIFrameworkLocalSettings::ErrorResource");
static_assert(offsetof(UUIFrameworkLocalSettings, LoadingResource) == 80, "Offset mismatch for UUIFrameworkLocalSettings::LoadingResource");

// /Script/UIFramework.UIFrameworkOverlay
// Kind: Class; super: UIFrameworkWidget
class UUIFrameworkOverlay
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t ReplicatedSlotList[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UUIFrameworkOverlay, ReplicatedSlotList) == 224, "Offset mismatch for UUIFrameworkOverlay::ReplicatedSlotList");

// /Script/UIFramework.UIFrameworkPlayerComponent
// Kind: Class; super: ActorComponent
class UUIFrameworkPlayerComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t RootList[0x60]; // 0x00C8 (Size: 0x60, Type: StructProperty)
    std::uint8_t WidgetTree[0xD0]; // 0x0128 (Size: 0xD0, Type: StructProperty)
    void* Presenter; // 0x01F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetReplicationPending[0x10]; // 0x0200 (Size: 0x10, Type: SetProperty)
    std::uint8_t AddPending[0x28]; // 0x0210 (Size: 0x28, Type: SetProperty)
    std::uint8_t WidgetToFocus[0x1]; // 0x0238 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UUIFrameworkPlayerComponent, RootList) == 200, "Offset mismatch for UUIFrameworkPlayerComponent::RootList");
static_assert(offsetof(UUIFrameworkPlayerComponent, WidgetTree) == 296, "Offset mismatch for UUIFrameworkPlayerComponent::WidgetTree");
static_assert(offsetof(UUIFrameworkPlayerComponent, Presenter) == 504, "Offset mismatch for UUIFrameworkPlayerComponent::Presenter");
static_assert(offsetof(UUIFrameworkPlayerComponent, NetReplicationPending) == 512, "Offset mismatch for UUIFrameworkPlayerComponent::NetReplicationPending");
static_assert(offsetof(UUIFrameworkPlayerComponent, AddPending) == 528, "Offset mismatch for UUIFrameworkPlayerComponent::AddPending");
static_assert(offsetof(UUIFrameworkPlayerComponent, WidgetToFocus) == 568, "Offset mismatch for UUIFrameworkPlayerComponent::WidgetToFocus");

// /Script/UIFramework.UIFrameworkPresenter
// Kind: Class; super: Object
class UUIFrameworkPresenter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UIFramework.UIFrameworkSafeZoneBox
// Kind: Class; super: UIFrameworkWidget
class UUIFrameworkSafeZoneBox
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Slot[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UUIFrameworkSafeZoneBox, Slot) == 224, "Offset mismatch for UUIFrameworkSafeZoneBox::Slot");

// /Script/UIFramework.UIFrameworkStackBox
// Kind: Class; super: UIFrameworkWidget
class UUIFrameworkStackBox
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t orientation; // 0x00E0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    std::uint8_t ReplicatedSlotList[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UUIFrameworkStackBox, orientation) == 224, "Offset mismatch for UUIFrameworkStackBox::orientation");
static_assert(offsetof(UUIFrameworkStackBox, ReplicatedSlotList) == 232, "Offset mismatch for UUIFrameworkStackBox::ReplicatedSlotList");

// /Script/UIFramework.UIFrameworkTextBase
// Kind: Class; super: UIFrameworkWidget
class UUIFrameworkTextBase
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t Text[0x10]; // 0x00E0 (Size: 0x10, Type: TextProperty)
    std::uint8_t Message[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TextColor[0x10]; // 0x0120 (Size: 0x10, Type: StructProperty)
    float TextSize; // 0x0130 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AutoWrap; // 0x0134 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0135
    float WrapWidth; // 0x0138 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WrappingPolicy; // 0x013C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Justification; // 0x013D (Size: 0x1, Type: ByteProperty)
    std::uint8_t OverflowPolicy; // 0x013E (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UUIFrameworkTextBase, Text) == 224, "Offset mismatch for UUIFrameworkTextBase::Text");
static_assert(offsetof(UUIFrameworkTextBase, Message) == 240, "Offset mismatch for UUIFrameworkTextBase::Message");
static_assert(offsetof(UUIFrameworkTextBase, TextColor) == 288, "Offset mismatch for UUIFrameworkTextBase::TextColor");
static_assert(offsetof(UUIFrameworkTextBase, TextSize) == 304, "Offset mismatch for UUIFrameworkTextBase::TextSize");
static_assert(offsetof(UUIFrameworkTextBase, AutoWrap) == 308, "Offset mismatch for UUIFrameworkTextBase::AutoWrap");
static_assert(offsetof(UUIFrameworkTextBase, WrapWidth) == 312, "Offset mismatch for UUIFrameworkTextBase::WrapWidth");
static_assert(offsetof(UUIFrameworkTextBase, WrappingPolicy) == 316, "Offset mismatch for UUIFrameworkTextBase::WrappingPolicy");
static_assert(offsetof(UUIFrameworkTextBase, Justification) == 317, "Offset mismatch for UUIFrameworkTextBase::Justification");
static_assert(offsetof(UUIFrameworkTextBase, OverflowPolicy) == 318, "Offset mismatch for UUIFrameworkTextBase::OverflowPolicy");

// /Script/UIFramework.UIFrameworkTextBlock
// Kind: Class; super: UIFrameworkTextBase
class UUIFrameworkTextBlock
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t ShadowOffset[0x8]; // 0x0140 (Size: 0x8, Type: StructProperty)
    std::uint8_t ShadowColor[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UUIFrameworkTextBlock, ShadowOffset) == 320, "Offset mismatch for UUIFrameworkTextBlock::ShadowOffset");
static_assert(offsetof(UUIFrameworkTextBlock, ShadowColor) == 328, "Offset mismatch for UUIFrameworkTextBlock::ShadowColor");

// /Script/UIFramework.UIFrameworkTouchActionWrapperWidget
// Kind: Class; super: UIFrameworkButtonWidget
class UUIFrameworkTouchActionWrapperWidget
{
public:
    std::uint8_t Pad_0000[0x650]; // 0x0000
    void* TriggeringInputAction; // 0x0650 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUIFrameworkTouchActionWrapperWidget, TriggeringInputAction) == 1616, "Offset mismatch for UUIFrameworkTouchActionWrapperWidget::TriggeringInputAction");

// /Script/UIFramework.UIFrameworkUserWidget
// Kind: Class; super: UIFrameworkWidget
class UUIFrameworkUserWidget
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t ReplicatedNamedSlotList[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UUIFrameworkUserWidget, ReplicatedNamedSlotList) == 224, "Offset mismatch for UUIFrameworkUserWidget::ReplicatedNamedSlotList");

// /Script/UIFramework.UIFrameworkWidget
// Kind: Class; super: MVVMViewModelBase
class UUIFrameworkWidget
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bIsEnabled; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Visibility; // 0x0069 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsHitTestVisible; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x006B
    double RenderOpacity; // 0x0070 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t WidgetClass[0x20]; // 0x0078 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t ID[0x8]; // 0x0098 (Size: 0x8, Type: StructProperty)
    TScriptInterface<void> AuthorityWrapper; // 0x00A0 (Size: 0x10, Type: InterfaceProperty)
    std::uint8_t Pad_0002[0x8]; // 0x00B0
    std::uint8_t AuthorityParent[0x10]; // 0x00B8 (Size: 0x10, Type: StructProperty)
    void* LocalUMGWidget; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUIFrameworkWidget, bIsEnabled) == 104, "Offset mismatch for UUIFrameworkWidget::bIsEnabled");
static_assert(offsetof(UUIFrameworkWidget, Visibility) == 105, "Offset mismatch for UUIFrameworkWidget::Visibility");
static_assert(offsetof(UUIFrameworkWidget, bIsHitTestVisible) == 106, "Offset mismatch for UUIFrameworkWidget::bIsHitTestVisible");
static_assert(offsetof(UUIFrameworkWidget, RenderOpacity) == 112, "Offset mismatch for UUIFrameworkWidget::RenderOpacity");
static_assert(offsetof(UUIFrameworkWidget, WidgetClass) == 120, "Offset mismatch for UUIFrameworkWidget::WidgetClass");
static_assert(offsetof(UUIFrameworkWidget, ID) == 152, "Offset mismatch for UUIFrameworkWidget::ID");
static_assert(offsetof(UUIFrameworkWidget, AuthorityWrapper) == 160, "Offset mismatch for UUIFrameworkWidget::AuthorityWrapper");
static_assert(offsetof(UUIFrameworkWidget, AuthorityParent) == 184, "Offset mismatch for UUIFrameworkWidget::AuthorityParent");
static_assert(offsetof(UUIFrameworkWidget, LocalUMGWidget) == 200, "Offset mismatch for UUIFrameworkWidget::LocalUMGWidget");

// /Script/UIFramework.UIFrameworkWidgetWrapperInterface
// Kind: Class; super: Interface
class UUIFrameworkWidgetWrapperInterface
{
public:
    std::uint8_t Opaque[1];
};
