/**
 * decamp dumper generated SDK
 * Package: /Script/UMG
 */
#pragma once
#include "Basic.h"

// /Script/UMG.AnchorData
// Kind: ScriptStruct; super: none
struct FAnchorData
{
public:
    std::uint8_t Offsets[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Anchors[0x20]; // 0x0010 (Size: 0x20, Type: StructProperty)
    std::uint8_t Alignment[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FAnchorData, Offsets) == 0, "Offset mismatch for FAnchorData::Offsets");
static_assert(offsetof(FAnchorData, Anchors) == 16, "Offset mismatch for FAnchorData::Anchors");
static_assert(offsetof(FAnchorData, Alignment) == 48, "Offset mismatch for FAnchorData::Alignment");

// /Script/UMG.AnimationEventBinding
// Kind: ScriptStruct; super: none
struct FAnimationEventBinding
{
public:
    void* Animation; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Delegate[0xC]; // 0x0008 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t AnimationEvent; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0015
    FName UserTag; // 0x0018 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FAnimationEventBinding, Animation) == 0, "Offset mismatch for FAnimationEventBinding::Animation");
static_assert(offsetof(FAnimationEventBinding, Delegate) == 8, "Offset mismatch for FAnimationEventBinding::Delegate");
static_assert(offsetof(FAnimationEventBinding, AnimationEvent) == 20, "Offset mismatch for FAnimationEventBinding::AnimationEvent");
static_assert(offsetof(FAnimationEventBinding, UserTag) == 24, "Offset mismatch for FAnimationEventBinding::UserTag");

// /Script/UMG.BlueprintWidgetAnimationDelegateBinding
// Kind: ScriptStruct; super: none
struct FBlueprintWidgetAnimationDelegateBinding
{
public:
    std::uint8_t Action; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t AnimationToBind[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t FunctionNameToBind[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    FName UserTag; // 0x000C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FBlueprintWidgetAnimationDelegateBinding, Action) == 0, "Offset mismatch for FBlueprintWidgetAnimationDelegateBinding::Action");
static_assert(offsetof(FBlueprintWidgetAnimationDelegateBinding, AnimationToBind) == 4, "Offset mismatch for FBlueprintWidgetAnimationDelegateBinding::AnimationToBind");
static_assert(offsetof(FBlueprintWidgetAnimationDelegateBinding, FunctionNameToBind) == 8, "Offset mismatch for FBlueprintWidgetAnimationDelegateBinding::FunctionNameToBind");
static_assert(offsetof(FBlueprintWidgetAnimationDelegateBinding, UserTag) == 12, "Offset mismatch for FBlueprintWidgetAnimationDelegateBinding::UserTag");

// /Script/UMG.DelegateRuntimeBinding
// Kind: ScriptStruct; super: none
struct FDelegateRuntimeBinding
{
public:
    FString ObjectName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t PropertyName[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::uint8_t FunctionName[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t SourcePath[0x38]; // 0x0018 (Size: 0x38, Type: StructProperty)
    std::uint8_t Kind; // 0x0050 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FDelegateRuntimeBinding, ObjectName) == 0, "Offset mismatch for FDelegateRuntimeBinding::ObjectName");
static_assert(offsetof(FDelegateRuntimeBinding, PropertyName) == 16, "Offset mismatch for FDelegateRuntimeBinding::PropertyName");
static_assert(offsetof(FDelegateRuntimeBinding, FunctionName) == 20, "Offset mismatch for FDelegateRuntimeBinding::FunctionName");
static_assert(offsetof(FDelegateRuntimeBinding, SourcePath) == 24, "Offset mismatch for FDelegateRuntimeBinding::SourcePath");
static_assert(offsetof(FDelegateRuntimeBinding, Kind) == 80, "Offset mismatch for FDelegateRuntimeBinding::Kind");

// /Script/UMG.DynamicPropertyPath
// Kind: ScriptStruct; super: CachedPropertyPath
struct FDynamicPropertyPath
{
public:
    TArray<void*> Segments; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x8]; // 0x0010
    void* CachedFunction; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FDynamicPropertyPath, Segments) == 0, "Offset mismatch for FDynamicPropertyPath::Segments");
static_assert(offsetof(FDynamicPropertyPath, CachedFunction) == 24, "Offset mismatch for FDynamicPropertyPath::CachedFunction");

// /Script/UMG.EventReply
// Kind: ScriptStruct; super: none
struct FEventReply
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.GameViewportWidgetSlot
// Kind: ScriptStruct; super: none
struct FGameViewportWidgetSlot
{
public:
    std::uint8_t Anchors[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t Offsets[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t Alignment[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::int32_t ZOrder; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAutoRemoveOnWorldRemoved; // 0x0044 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGameViewportWidgetSlot, Anchors) == 0, "Offset mismatch for FGameViewportWidgetSlot::Anchors");
static_assert(offsetof(FGameViewportWidgetSlot, Offsets) == 32, "Offset mismatch for FGameViewportWidgetSlot::Offsets");
static_assert(offsetof(FGameViewportWidgetSlot, Alignment) == 48, "Offset mismatch for FGameViewportWidgetSlot::Alignment");
static_assert(offsetof(FGameViewportWidgetSlot, ZOrder) == 64, "Offset mismatch for FGameViewportWidgetSlot::ZOrder");
static_assert(offsetof(FGameViewportWidgetSlot, bAutoRemoveOnWorldRemoved) == 68, "Offset mismatch for FGameViewportWidgetSlot::bAutoRemoveOnWorldRemoved");

// /Script/UMG.MovieScene2DTransformMask
// Kind: ScriptStruct; super: none
struct FMovieScene2DTransformMask
{
public:
    std::uint32_t Mask; // 0x0000 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FMovieScene2DTransformMask, Mask) == 0, "Offset mismatch for FMovieScene2DTransformMask::Mask");

// /Script/UMG.NamedSlotBinding
// Kind: ScriptStruct; super: none
struct FNamedSlotBinding
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* Content; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FNamedSlotBinding, Name) == 0, "Offset mismatch for FNamedSlotBinding::Name");
static_assert(offsetof(FNamedSlotBinding, Content) == 8, "Offset mismatch for FNamedSlotBinding::Content");

// /Script/UMG.PaintContext
// Kind: ScriptStruct; super: none
struct FPaintContext
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.QueuedWidgetAnimationTransition
// Kind: ScriptStruct; super: none
struct FQueuedWidgetAnimationTransition
{
public:
    void* WidgetAnimation; // 0x0000 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FQueuedWidgetAnimationTransition, WidgetAnimation) == 0, "Offset mismatch for FQueuedWidgetAnimationTransition::WidgetAnimation");

// /Script/UMG.RadialBoxSettings
// Kind: ScriptStruct; super: none
struct FRadialBoxSettings
{
public:
    float StartingAngle; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDistributeItemsEvenly; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClockwiseOrder; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    float AngleBetweenItems; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float SectorCentralAngle; // 0x000C (Size: 0x4, Type: FloatProperty)
    float MarginSize; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FRadialBoxSettings, StartingAngle) == 0, "Offset mismatch for FRadialBoxSettings::StartingAngle");
static_assert(offsetof(FRadialBoxSettings, bDistributeItemsEvenly) == 4, "Offset mismatch for FRadialBoxSettings::bDistributeItemsEvenly");
static_assert(offsetof(FRadialBoxSettings, bClockwiseOrder) == 5, "Offset mismatch for FRadialBoxSettings::bClockwiseOrder");
static_assert(offsetof(FRadialBoxSettings, AngleBetweenItems) == 8, "Offset mismatch for FRadialBoxSettings::AngleBetweenItems");
static_assert(offsetof(FRadialBoxSettings, SectorCentralAngle) == 12, "Offset mismatch for FRadialBoxSettings::SectorCentralAngle");
static_assert(offsetof(FRadialBoxSettings, MarginSize) == 16, "Offset mismatch for FRadialBoxSettings::MarginSize");

// /Script/UMG.RichImageRow
// Kind: ScriptStruct; super: TableRowBase
struct FRichImageRow
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Brush[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRichImageRow, Brush) == 16, "Offset mismatch for FRichImageRow::Brush");

// /Script/UMG.RichTextStyleRow
// Kind: ScriptStruct; super: TableRowBase
struct FRichTextStyleRow
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t TextStyle[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FRichTextStyleRow, TextStyle) == 16, "Offset mismatch for FRichTextStyleRow::TextStyle");

// /Script/UMG.SequenceTickManagerWidgetData
// Kind: ScriptStruct; super: none
struct FSequenceTickManagerWidgetData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.ShapedTextOptions
// Kind: ScriptStruct; super: none
struct FShapedTextOptions
{
public:
    std::uint8_t bOverride_TextFlowDirection; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bOverride_TextShapingMethod (shared storage)
    std::uint8_t TextShapingMethod; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TextFlowDirection; // 0x0002 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FShapedTextOptions, bOverride_TextFlowDirection) == 0, "Offset mismatch for FShapedTextOptions::bOverride_TextFlowDirection");
static_assert(offsetof(FShapedTextOptions, TextShapingMethod) == 1, "Offset mismatch for FShapedTextOptions::TextShapingMethod");
static_assert(offsetof(FShapedTextOptions, TextFlowDirection) == 2, "Offset mismatch for FShapedTextOptions::TextFlowDirection");

// /Script/UMG.SlateChildSize
// Kind: ScriptStruct; super: none
struct FSlateChildSize
{
public:
    float Value; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SizeRule; // 0x0004 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FSlateChildSize, Value) == 0, "Offset mismatch for FSlateChildSize::Value");
static_assert(offsetof(FSlateChildSize, SizeRule) == 4, "Offset mismatch for FSlateChildSize::SizeRule");

// /Script/UMG.SlateMeshVertex
// Kind: ScriptStruct; super: none
struct FSlateMeshVertex
{
public:
    std::uint8_t Position[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Color[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t UV0[0x8]; // 0x000C (Size: 0x8, Type: StructProperty)
    std::uint8_t UV1[0x8]; // 0x0014 (Size: 0x8, Type: StructProperty)
    std::uint8_t UV2[0x8]; // 0x001C (Size: 0x8, Type: StructProperty)
    std::uint8_t UV3[0x8]; // 0x0024 (Size: 0x8, Type: StructProperty)
    std::uint8_t UV4[0x8]; // 0x002C (Size: 0x8, Type: StructProperty)
    std::uint8_t UV5[0x1]; // 0x0034 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSlateMeshVertex, Position) == 0, "Offset mismatch for FSlateMeshVertex::Position");
static_assert(offsetof(FSlateMeshVertex, Color) == 8, "Offset mismatch for FSlateMeshVertex::Color");
static_assert(offsetof(FSlateMeshVertex, UV0) == 12, "Offset mismatch for FSlateMeshVertex::UV0");
static_assert(offsetof(FSlateMeshVertex, UV1) == 20, "Offset mismatch for FSlateMeshVertex::UV1");
static_assert(offsetof(FSlateMeshVertex, UV2) == 28, "Offset mismatch for FSlateMeshVertex::UV2");
static_assert(offsetof(FSlateMeshVertex, UV3) == 36, "Offset mismatch for FSlateMeshVertex::UV3");
static_assert(offsetof(FSlateMeshVertex, UV4) == 44, "Offset mismatch for FSlateMeshVertex::UV4");
static_assert(offsetof(FSlateMeshVertex, UV5) == 52, "Offset mismatch for FSlateMeshVertex::UV5");

// /Script/UMG.SlatePostBufferUpdateInfo
// Kind: ScriptStruct; super: none
struct FSlatePostBufferUpdateInfo
{
public:
    std::uint8_t BufferToUpdate; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* PostParamUpdater; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FSlatePostBufferUpdateInfo, BufferToUpdate) == 0, "Offset mismatch for FSlatePostBufferUpdateInfo::BufferToUpdate");
static_assert(offsetof(FSlatePostBufferUpdateInfo, PostParamUpdater) == 8, "Offset mismatch for FSlatePostBufferUpdateInfo::PostParamUpdater");

// /Script/UMG.UIComponentTarget
// Kind: ScriptStruct; super: none
struct FUIComponentTarget
{
public:
    FName TargetName; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* Component; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FUIComponentTarget, TargetName) == 0, "Offset mismatch for FUIComponentTarget::TargetName");
static_assert(offsetof(FUIComponentTarget, Component) == 8, "Offset mismatch for FUIComponentTarget::Component");

// /Script/UMG.UserWidgetPool
// Kind: ScriptStruct; super: none
struct FUserWidgetPool
{
public:
    TArray<void*> ActiveWidgets; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InactiveWidgets; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FUserWidgetPool, ActiveWidgets) == 0, "Offset mismatch for FUserWidgetPool::ActiveWidgets");
static_assert(offsetof(FUserWidgetPool, InactiveWidgets) == 16, "Offset mismatch for FUserWidgetPool::InactiveWidgets");

// /Script/UMG.WidgetAnimationBinding
// Kind: ScriptStruct; super: none
struct FWidgetAnimationBinding
{
public:
    std::uint8_t WidgetName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t SlotWidgetName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t AnimationGuid[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsRootWidget; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0019
    std::uint8_t DynamicBinding[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWidgetAnimationBinding, WidgetName) == 0, "Offset mismatch for FWidgetAnimationBinding::WidgetName");
static_assert(offsetof(FWidgetAnimationBinding, SlotWidgetName) == 4, "Offset mismatch for FWidgetAnimationBinding::SlotWidgetName");
static_assert(offsetof(FWidgetAnimationBinding, AnimationGuid) == 8, "Offset mismatch for FWidgetAnimationBinding::AnimationGuid");
static_assert(offsetof(FWidgetAnimationBinding, bIsRootWidget) == 24, "Offset mismatch for FWidgetAnimationBinding::bIsRootWidget");
static_assert(offsetof(FWidgetAnimationBinding, DynamicBinding) == 32, "Offset mismatch for FWidgetAnimationBinding::DynamicBinding");

// /Script/UMG.WidgetAnimationHandle
// Kind: ScriptStruct; super: none
struct FWidgetAnimationHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.WidgetChild
// Kind: ScriptStruct; super: none
struct FWidgetChild
{
public:
    std::uint8_t WidgetName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    TWeakObjectPtr<void> WidgetPtr; // 0x0004 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FWidgetChild, WidgetName) == 0, "Offset mismatch for FWidgetChild::WidgetName");
static_assert(offsetof(FWidgetChild, WidgetPtr) == 4, "Offset mismatch for FWidgetChild::WidgetPtr");

// /Script/UMG.WidgetComponentInstanceData
// Kind: ScriptStruct; super: SceneComponentInstanceData
struct FWidgetComponentInstanceData
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TMap<void*, void*> AttachedInstanceComponents; // 0x0068 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FWidgetComponentInstanceData, AttachedInstanceComponents) == 104, "Offset mismatch for FWidgetComponentInstanceData::AttachedInstanceComponents");

// /Script/UMG.WidgetDesignTimeInfo
// Kind: ScriptStruct; super: none
struct FWidgetDesignTimeInfo
{
public:
    std::uint8_t PreviewSize[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsPortrait; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FWidgetDesignTimeInfo, PreviewSize) == 0, "Offset mismatch for FWidgetDesignTimeInfo::PreviewSize");
static_assert(offsetof(FWidgetDesignTimeInfo, bIsPortrait) == 16, "Offset mismatch for FWidgetDesignTimeInfo::bIsPortrait");

// /Script/UMG.WidgetEventField
// Kind: ScriptStruct; super: none
struct FWidgetEventField
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.WidgetNavigationData
// Kind: ScriptStruct; super: none
struct FWidgetNavigationData
{
public:
    std::uint8_t Rule; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t WidgetToFocus[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    TWeakObjectPtr<void> Widget; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    FScriptDelegate CustomDelegate; // 0x0010 (Size: 0x10, Type: DelegateProperty)
};

static_assert(offsetof(FWidgetNavigationData, Rule) == 0, "Offset mismatch for FWidgetNavigationData::Rule");
static_assert(offsetof(FWidgetNavigationData, WidgetToFocus) == 4, "Offset mismatch for FWidgetNavigationData::WidgetToFocus");
static_assert(offsetof(FWidgetNavigationData, Widget) == 8, "Offset mismatch for FWidgetNavigationData::Widget");
static_assert(offsetof(FWidgetNavigationData, CustomDelegate) == 16, "Offset mismatch for FWidgetNavigationData::CustomDelegate");

// /Script/UMG.WidgetStateBitfield
// Kind: ScriptStruct; super: none
struct FWidgetStateBitfield
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.WidgetTransform
// Kind: ScriptStruct; super: none
struct FWidgetTransform
{
public:
    std::uint8_t Translation[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Scale[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Shear[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    float Angle; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FWidgetTransform, Translation) == 0, "Offset mismatch for FWidgetTransform::Translation");
static_assert(offsetof(FWidgetTransform, Scale) == 16, "Offset mismatch for FWidgetTransform::Scale");
static_assert(offsetof(FWidgetTransform, Shear) == 32, "Offset mismatch for FWidgetTransform::Shear");
static_assert(offsetof(FWidgetTransform, Angle) == 48, "Offset mismatch for FWidgetTransform::Angle");

// /Script/UMG.AsyncTaskDownloadImage
// Kind: Class; super: BlueprintAsyncActionBase
class UAsyncTaskDownloadImage
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FMulticastInlineDelegate OnSuccess; // 0x0030 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFail; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAsyncTaskDownloadImage, OnSuccess) == 48, "Offset mismatch for UAsyncTaskDownloadImage::OnSuccess");
static_assert(offsetof(UAsyncTaskDownloadImage, OnFail) == 64, "Offset mismatch for UAsyncTaskDownloadImage::OnFail");

// /Script/UMG.BackgroundBlur
// Kind: Class; super: ContentWidget
class UBackgroundBlur
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t Padding[0x10]; // 0x0180 (Size: 0x10, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0190 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0191 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bApplyAlphaToBlur; // 0x0192 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0193
    float BlurStrength; // 0x0194 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOverrideAutoRadiusCalculation; // 0x0198 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0199
    std::int32_t BlurRadius; // 0x019C (Size: 0x4, Type: IntProperty)
    std::uint8_t CornerRadius[0x20]; // 0x01A0 (Size: 0x20, Type: StructProperty)
    std::uint8_t LowQualityFallbackBrush[0x1]; // 0x01C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBackgroundBlur, Padding) == 384, "Offset mismatch for UBackgroundBlur::Padding");
static_assert(offsetof(UBackgroundBlur, HorizontalAlignment) == 400, "Offset mismatch for UBackgroundBlur::HorizontalAlignment");
static_assert(offsetof(UBackgroundBlur, VerticalAlignment) == 401, "Offset mismatch for UBackgroundBlur::VerticalAlignment");
static_assert(offsetof(UBackgroundBlur, bApplyAlphaToBlur) == 402, "Offset mismatch for UBackgroundBlur::bApplyAlphaToBlur");
static_assert(offsetof(UBackgroundBlur, BlurStrength) == 404, "Offset mismatch for UBackgroundBlur::BlurStrength");
static_assert(offsetof(UBackgroundBlur, bOverrideAutoRadiusCalculation) == 408, "Offset mismatch for UBackgroundBlur::bOverrideAutoRadiusCalculation");
static_assert(offsetof(UBackgroundBlur, BlurRadius) == 412, "Offset mismatch for UBackgroundBlur::BlurRadius");
static_assert(offsetof(UBackgroundBlur, CornerRadius) == 416, "Offset mismatch for UBackgroundBlur::CornerRadius");
static_assert(offsetof(UBackgroundBlur, LowQualityFallbackBrush) == 448, "Offset mismatch for UBackgroundBlur::LowQualityFallbackBrush");

// /Script/UMG.BackgroundBlurSlot
// Kind: Class; super: PanelSlot
class UBackgroundBlurSlot
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Padding[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0048 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0049 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UBackgroundBlurSlot, Padding) == 56, "Offset mismatch for UBackgroundBlurSlot::Padding");
static_assert(offsetof(UBackgroundBlurSlot, HorizontalAlignment) == 72, "Offset mismatch for UBackgroundBlurSlot::HorizontalAlignment");
static_assert(offsetof(UBackgroundBlurSlot, VerticalAlignment) == 73, "Offset mismatch for UBackgroundBlurSlot::VerticalAlignment");

// /Script/UMG.BoolBinding
// Kind: Class; super: PropertyBinding
class UBoolBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> SourceObject; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t SourcePath[0x38]; // 0x0030 (Size: 0x38, Type: StructProperty)
    FName DestinationProperty; // 0x0068 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UBoolBinding, SourceObject) == 40, "Offset mismatch for UBoolBinding::SourceObject");
static_assert(offsetof(UBoolBinding, SourcePath) == 48, "Offset mismatch for UBoolBinding::SourcePath");
static_assert(offsetof(UBoolBinding, DestinationProperty) == 104, "Offset mismatch for UBoolBinding::DestinationProperty");

// /Script/UMG.Border
// Kind: Class; super: ContentWidget
class UBorder
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t HorizontalAlignment; // 0x0180 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0181 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bShowEffectWhenDisabled; // 0x0182 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0183
    std::uint8_t ContentColorAndOpacity[0x10]; // 0x0184 (Size: 0x10, Type: StructProperty)
    std::uint8_t ContentColorAndOpacityDelegate[0xC]; // 0x0194 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t Padding[0x10]; // 0x01A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t Background[0xB0]; // 0x01B0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t BackgroundDelegate[0xC]; // 0x0260 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t BrushColor[0x10]; // 0x026C (Size: 0x10, Type: StructProperty)
    std::uint8_t BrushColorDelegate[0xC]; // 0x027C (Size: 0xC, Type: DelegateProperty)
    std::uint8_t DesiredSizeScale[0x10]; // 0x0288 (Size: 0x10, Type: StructProperty)
    std::uint8_t bFlipForRightToLeftFlowDirection; // 0x0298 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0299
    std::uint8_t OnMouseButtonDownEvent[0xC]; // 0x029C (Size: 0xC, Type: DelegateProperty)
    std::uint8_t OnMouseButtonUpEvent[0xC]; // 0x02A8 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t OnMouseMoveEvent[0xC]; // 0x02B4 (Size: 0xC, Type: DelegateProperty)
    FScriptDelegate OnMouseDoubleClickEvent; // 0x02C0 (Size: 0x10, Type: DelegateProperty)
};

static_assert(offsetof(UBorder, HorizontalAlignment) == 384, "Offset mismatch for UBorder::HorizontalAlignment");
static_assert(offsetof(UBorder, VerticalAlignment) == 385, "Offset mismatch for UBorder::VerticalAlignment");
static_assert(offsetof(UBorder, bShowEffectWhenDisabled) == 386, "Offset mismatch for UBorder::bShowEffectWhenDisabled");
static_assert(offsetof(UBorder, ContentColorAndOpacity) == 388, "Offset mismatch for UBorder::ContentColorAndOpacity");
static_assert(offsetof(UBorder, ContentColorAndOpacityDelegate) == 404, "Offset mismatch for UBorder::ContentColorAndOpacityDelegate");
static_assert(offsetof(UBorder, Padding) == 416, "Offset mismatch for UBorder::Padding");
static_assert(offsetof(UBorder, Background) == 432, "Offset mismatch for UBorder::Background");
static_assert(offsetof(UBorder, BackgroundDelegate) == 608, "Offset mismatch for UBorder::BackgroundDelegate");
static_assert(offsetof(UBorder, BrushColor) == 620, "Offset mismatch for UBorder::BrushColor");
static_assert(offsetof(UBorder, BrushColorDelegate) == 636, "Offset mismatch for UBorder::BrushColorDelegate");
static_assert(offsetof(UBorder, DesiredSizeScale) == 648, "Offset mismatch for UBorder::DesiredSizeScale");
static_assert(offsetof(UBorder, bFlipForRightToLeftFlowDirection) == 664, "Offset mismatch for UBorder::bFlipForRightToLeftFlowDirection");
static_assert(offsetof(UBorder, OnMouseButtonDownEvent) == 668, "Offset mismatch for UBorder::OnMouseButtonDownEvent");
static_assert(offsetof(UBorder, OnMouseButtonUpEvent) == 680, "Offset mismatch for UBorder::OnMouseButtonUpEvent");
static_assert(offsetof(UBorder, OnMouseMoveEvent) == 692, "Offset mismatch for UBorder::OnMouseMoveEvent");
static_assert(offsetof(UBorder, OnMouseDoubleClickEvent) == 704, "Offset mismatch for UBorder::OnMouseDoubleClickEvent");

// /Script/UMG.BorderSlot
// Kind: Class; super: PanelSlot
class UBorderSlot
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Padding[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0048 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0049 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UBorderSlot, Padding) == 56, "Offset mismatch for UBorderSlot::Padding");
static_assert(offsetof(UBorderSlot, HorizontalAlignment) == 72, "Offset mismatch for UBorderSlot::HorizontalAlignment");
static_assert(offsetof(UBorderSlot, VerticalAlignment) == 73, "Offset mismatch for UBorderSlot::VerticalAlignment");

// /Script/UMG.BrushBinding
// Kind: Class; super: PropertyBinding
class UBrushBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> SourceObject; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t SourcePath[0x38]; // 0x0030 (Size: 0x38, Type: StructProperty)
    FName DestinationProperty; // 0x0068 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UBrushBinding, SourceObject) == 40, "Offset mismatch for UBrushBinding::SourceObject");
static_assert(offsetof(UBrushBinding, SourcePath) == 48, "Offset mismatch for UBrushBinding::SourcePath");
static_assert(offsetof(UBrushBinding, DestinationProperty) == 104, "Offset mismatch for UBrushBinding::DestinationProperty");

// /Script/UMG.ButtonSlot
// Kind: Class; super: PanelSlot
class UButtonSlot
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Padding[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0048 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0049 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UButtonSlot, Padding) == 56, "Offset mismatch for UButtonSlot::Padding");
static_assert(offsetof(UButtonSlot, HorizontalAlignment) == 72, "Offset mismatch for UButtonSlot::HorizontalAlignment");
static_assert(offsetof(UButtonSlot, VerticalAlignment) == 73, "Offset mismatch for UButtonSlot::VerticalAlignment");

// /Script/UMG.CanvasPanel
// Kind: Class; super: PanelWidget
class UCanvasPanel
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    TArray<void*> Slots; // 0x0168 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCanvasPanel, Slots) == 360, "Offset mismatch for UCanvasPanel::Slots");

// /Script/UMG.CanvasPanelSlot
// Kind: Class; super: PanelSlot
class UCanvasPanelSlot
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t LayoutData[0x40]; // 0x0038 (Size: 0x40, Type: StructProperty)
    std::uint8_t bAutoSize; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    std::int32_t ZOrder; // 0x007C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UCanvasPanelSlot, LayoutData) == 56, "Offset mismatch for UCanvasPanelSlot::LayoutData");
static_assert(offsetof(UCanvasPanelSlot, bAutoSize) == 120, "Offset mismatch for UCanvasPanelSlot::bAutoSize");
static_assert(offsetof(UCanvasPanelSlot, ZOrder) == 124, "Offset mismatch for UCanvasPanelSlot::ZOrder");

// /Script/UMG.CheckBox
// Kind: Class; super: ContentWidget
class UCheckBox
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t CheckedState; // 0x0180 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0181
    std::uint8_t CheckedStateDelegate[0xC]; // 0x0184 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t WidgetStyle[0x950]; // 0x0190 (Size: 0x950, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0AE0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ClickMethod; // 0x0AE1 (Size: 0x1, Type: ByteProperty)
    std::uint8_t TouchMethod; // 0x0AE2 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PressMethod; // 0x0AE3 (Size: 0x1, Type: ByteProperty)
    std::uint8_t IsFocusable; // 0x0AE4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0AE5
    FMulticastInlineDelegate OnCheckStateChanged; // 0x0AE8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UCheckBox, CheckedState) == 384, "Offset mismatch for UCheckBox::CheckedState");
static_assert(offsetof(UCheckBox, CheckedStateDelegate) == 388, "Offset mismatch for UCheckBox::CheckedStateDelegate");
static_assert(offsetof(UCheckBox, WidgetStyle) == 400, "Offset mismatch for UCheckBox::WidgetStyle");
static_assert(offsetof(UCheckBox, HorizontalAlignment) == 2784, "Offset mismatch for UCheckBox::HorizontalAlignment");
static_assert(offsetof(UCheckBox, ClickMethod) == 2785, "Offset mismatch for UCheckBox::ClickMethod");
static_assert(offsetof(UCheckBox, TouchMethod) == 2786, "Offset mismatch for UCheckBox::TouchMethod");
static_assert(offsetof(UCheckBox, PressMethod) == 2787, "Offset mismatch for UCheckBox::PressMethod");
static_assert(offsetof(UCheckBox, IsFocusable) == 2788, "Offset mismatch for UCheckBox::IsFocusable");
static_assert(offsetof(UCheckBox, OnCheckStateChanged) == 2792, "Offset mismatch for UCheckBox::OnCheckStateChanged");

// /Script/UMG.CheckedStateBinding
// Kind: Class; super: PropertyBinding
class UCheckedStateBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> SourceObject; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t SourcePath[0x38]; // 0x0030 (Size: 0x38, Type: StructProperty)
    FName DestinationProperty; // 0x0068 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UCheckedStateBinding, SourceObject) == 40, "Offset mismatch for UCheckedStateBinding::SourceObject");
static_assert(offsetof(UCheckedStateBinding, SourcePath) == 48, "Offset mismatch for UCheckedStateBinding::SourcePath");
static_assert(offsetof(UCheckedStateBinding, DestinationProperty) == 104, "Offset mismatch for UCheckedStateBinding::DestinationProperty");

// /Script/UMG.CircularThrobber
// Kind: Class; super: Widget
class UCircularThrobber
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    std::int32_t NumberOfPieces; // 0x0168 (Size: 0x4, Type: IntProperty)
    float Period; // 0x016C (Size: 0x4, Type: FloatProperty)
    float Radius; // 0x0170 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0xC]; // 0x0174
    std::uint8_t Image[0xB0]; // 0x0180 (Size: 0xB0, Type: StructProperty)
    std::uint8_t bEnableRadius; // 0x0230 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UCircularThrobber, NumberOfPieces) == 360, "Offset mismatch for UCircularThrobber::NumberOfPieces");
static_assert(offsetof(UCircularThrobber, Period) == 364, "Offset mismatch for UCircularThrobber::Period");
static_assert(offsetof(UCircularThrobber, Radius) == 368, "Offset mismatch for UCircularThrobber::Radius");
static_assert(offsetof(UCircularThrobber, Image) == 384, "Offset mismatch for UCircularThrobber::Image");
static_assert(offsetof(UCircularThrobber, bEnableRadius) == 560, "Offset mismatch for UCircularThrobber::bEnableRadius");

// /Script/UMG.ColorBinding
// Kind: Class; super: PropertyBinding
class UColorBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> SourceObject; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t SourcePath[0x38]; // 0x0030 (Size: 0x38, Type: StructProperty)
    FName DestinationProperty; // 0x0068 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UColorBinding, SourceObject) == 40, "Offset mismatch for UColorBinding::SourceObject");
static_assert(offsetof(UColorBinding, SourcePath) == 48, "Offset mismatch for UColorBinding::SourcePath");
static_assert(offsetof(UColorBinding, DestinationProperty) == 104, "Offset mismatch for UColorBinding::DestinationProperty");

// /Script/UMG.ComboBox
// Kind: Class; super: Widget
class UComboBox
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t ScrollBarStyle[0x650]; // 0x0170 (Size: 0x650, Type: StructProperty)
    TArray<void*> Items; // 0x07C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnGenerateWidgetEvent[0xC]; // 0x07D0 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t bIsFocusable; // 0x07DC (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UComboBox, ScrollBarStyle) == 368, "Offset mismatch for UComboBox::ScrollBarStyle");
static_assert(offsetof(UComboBox, Items) == 1984, "Offset mismatch for UComboBox::Items");
static_assert(offsetof(UComboBox, OnGenerateWidgetEvent) == 2000, "Offset mismatch for UComboBox::OnGenerateWidgetEvent");
static_assert(offsetof(UComboBox, bIsFocusable) == 2012, "Offset mismatch for UComboBox::bIsFocusable");

// /Script/UMG.ComboBoxKey
// Kind: Class; super: Widget
class UComboBoxKey
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    TArray<void*> Options; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    FName SelectedOption; // 0x0178 (Size: 0x8, Type: NameProperty)
    std::uint8_t WidgetStyle[0x5C0]; // 0x0180 (Size: 0x5C0, Type: StructProperty)
    std::uint8_t ItemStyle[0xB50]; // 0x0740 (Size: 0xB50, Type: StructProperty)
    std::uint8_t ScrollBarStyle[0x650]; // 0x1290 (Size: 0x650, Type: StructProperty)
    std::uint8_t ForegroundColor[0x14]; // 0x18E0 (Size: 0x14, Type: StructProperty)
    std::uint8_t ContentPadding[0x10]; // 0x18F4 (Size: 0x10, Type: StructProperty)
    float MaxListHeight; // 0x1904 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasDownArrow; // 0x1908 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableGamepadNavigationMode; // 0x1909 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFocusable; // 0x190A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x190B
    std::uint8_t OnGenerateContentWidget[0xC]; // 0x190C (Size: 0xC, Type: DelegateProperty)
    FScriptDelegate OnGenerateItemWidget; // 0x1918 (Size: 0x10, Type: DelegateProperty)
    FMulticastInlineDelegate OnSelectionChanged; // 0x1928 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnOpening; // 0x1938 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UComboBoxKey, Options) == 360, "Offset mismatch for UComboBoxKey::Options");
static_assert(offsetof(UComboBoxKey, SelectedOption) == 376, "Offset mismatch for UComboBoxKey::SelectedOption");
static_assert(offsetof(UComboBoxKey, WidgetStyle) == 384, "Offset mismatch for UComboBoxKey::WidgetStyle");
static_assert(offsetof(UComboBoxKey, ItemStyle) == 1856, "Offset mismatch for UComboBoxKey::ItemStyle");
static_assert(offsetof(UComboBoxKey, ScrollBarStyle) == 4752, "Offset mismatch for UComboBoxKey::ScrollBarStyle");
static_assert(offsetof(UComboBoxKey, ForegroundColor) == 6368, "Offset mismatch for UComboBoxKey::ForegroundColor");
static_assert(offsetof(UComboBoxKey, ContentPadding) == 6388, "Offset mismatch for UComboBoxKey::ContentPadding");
static_assert(offsetof(UComboBoxKey, MaxListHeight) == 6404, "Offset mismatch for UComboBoxKey::MaxListHeight");
static_assert(offsetof(UComboBoxKey, bHasDownArrow) == 6408, "Offset mismatch for UComboBoxKey::bHasDownArrow");
static_assert(offsetof(UComboBoxKey, bEnableGamepadNavigationMode) == 6409, "Offset mismatch for UComboBoxKey::bEnableGamepadNavigationMode");
static_assert(offsetof(UComboBoxKey, bIsFocusable) == 6410, "Offset mismatch for UComboBoxKey::bIsFocusable");
static_assert(offsetof(UComboBoxKey, OnGenerateContentWidget) == 6412, "Offset mismatch for UComboBoxKey::OnGenerateContentWidget");
static_assert(offsetof(UComboBoxKey, OnGenerateItemWidget) == 6424, "Offset mismatch for UComboBoxKey::OnGenerateItemWidget");
static_assert(offsetof(UComboBoxKey, OnSelectionChanged) == 6440, "Offset mismatch for UComboBoxKey::OnSelectionChanged");
static_assert(offsetof(UComboBoxKey, OnOpening) == 6456, "Offset mismatch for UComboBoxKey::OnOpening");

// /Script/UMG.ComboBoxString
// Kind: Class; super: Widget
class UComboBoxString
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    TArray<void*> DefaultOptions; // 0x0168 (Size: 0x10, Type: ArrayProperty)
    FString SelectedOption; // 0x0178 (Size: 0x10, Type: StrProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0188
    std::uint8_t WidgetStyle[0x5C0]; // 0x0190 (Size: 0x5C0, Type: StructProperty)
    std::uint8_t ItemStyle[0xB50]; // 0x0750 (Size: 0xB50, Type: StructProperty)
    std::uint8_t ScrollBarStyle[0x650]; // 0x12A0 (Size: 0x650, Type: StructProperty)
    std::uint8_t ContentPadding[0x10]; // 0x18F0 (Size: 0x10, Type: StructProperty)
    float MaxListHeight; // 0x1900 (Size: 0x4, Type: FloatProperty)
    std::uint8_t HasDownArrow; // 0x1904 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EnableGamepadNavigationMode; // 0x1905 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x1906
    std::uint8_t Font[0x58]; // 0x1908 (Size: 0x58, Type: StructProperty)
    std::uint8_t ForegroundColor[0x14]; // 0x1960 (Size: 0x14, Type: StructProperty)
    std::uint8_t bIsFocusable; // 0x1974 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x1975
    FScriptDelegate OnGenerateWidgetEvent; // 0x1978 (Size: 0x10, Type: DelegateProperty)
    FMulticastInlineDelegate OnSelectionChanged; // 0x1988 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnOpening; // 0x1998 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UComboBoxString, DefaultOptions) == 360, "Offset mismatch for UComboBoxString::DefaultOptions");
static_assert(offsetof(UComboBoxString, SelectedOption) == 376, "Offset mismatch for UComboBoxString::SelectedOption");
static_assert(offsetof(UComboBoxString, WidgetStyle) == 400, "Offset mismatch for UComboBoxString::WidgetStyle");
static_assert(offsetof(UComboBoxString, ItemStyle) == 1872, "Offset mismatch for UComboBoxString::ItemStyle");
static_assert(offsetof(UComboBoxString, ScrollBarStyle) == 4768, "Offset mismatch for UComboBoxString::ScrollBarStyle");
static_assert(offsetof(UComboBoxString, ContentPadding) == 6384, "Offset mismatch for UComboBoxString::ContentPadding");
static_assert(offsetof(UComboBoxString, MaxListHeight) == 6400, "Offset mismatch for UComboBoxString::MaxListHeight");
static_assert(offsetof(UComboBoxString, HasDownArrow) == 6404, "Offset mismatch for UComboBoxString::HasDownArrow");
static_assert(offsetof(UComboBoxString, EnableGamepadNavigationMode) == 6405, "Offset mismatch for UComboBoxString::EnableGamepadNavigationMode");
static_assert(offsetof(UComboBoxString, Font) == 6408, "Offset mismatch for UComboBoxString::Font");
static_assert(offsetof(UComboBoxString, ForegroundColor) == 6496, "Offset mismatch for UComboBoxString::ForegroundColor");
static_assert(offsetof(UComboBoxString, bIsFocusable) == 6516, "Offset mismatch for UComboBoxString::bIsFocusable");
static_assert(offsetof(UComboBoxString, OnGenerateWidgetEvent) == 6520, "Offset mismatch for UComboBoxString::OnGenerateWidgetEvent");
static_assert(offsetof(UComboBoxString, OnSelectionChanged) == 6536, "Offset mismatch for UComboBoxString::OnSelectionChanged");
static_assert(offsetof(UComboBoxString, OnOpening) == 6552, "Offset mismatch for UComboBoxString::OnOpening");

// /Script/UMG.ContentWidget
// Kind: Class; super: PanelWidget
class UContentWidget
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    TArray<void*> Slots; // 0x0168 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UContentWidget, Slots) == 360, "Offset mismatch for UContentWidget::Slots");

// /Script/UMG.ContextDataWidgetExtension
// Kind: Class; super: UserWidgetExtension
class UContextDataWidgetExtension
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ContextData; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    void* ContextWidget; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UContextDataWidgetExtension, ContextData) == 40, "Offset mismatch for UContextDataWidgetExtension::ContextData");
static_assert(offsetof(UContextDataWidgetExtension, ContextWidget) == 56, "Offset mismatch for UContextDataWidgetExtension::ContextWidget");

// /Script/UMG.Default__WidgetBlueprintGeneratedClass
// Kind: WidgetBlueprintGeneratedClass; super: none
class UDefault_WidgetBlueprintGeneratedClass
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.DragDropOperation
// Kind: Class; super: Object
class UDragDropOperation
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString Tag; // 0x0028 (Size: 0x10, Type: StrProperty)
    void* Payload; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* DefaultDragVisual; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pivot; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    std::uint8_t Offset[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate OnDrop; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDragCancelled; // 0x0070 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDragged; // 0x0080 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UDragDropOperation, Tag) == 40, "Offset mismatch for UDragDropOperation::Tag");
static_assert(offsetof(UDragDropOperation, Payload) == 56, "Offset mismatch for UDragDropOperation::Payload");
static_assert(offsetof(UDragDropOperation, DefaultDragVisual) == 64, "Offset mismatch for UDragDropOperation::DefaultDragVisual");
static_assert(offsetof(UDragDropOperation, Pivot) == 72, "Offset mismatch for UDragDropOperation::Pivot");
static_assert(offsetof(UDragDropOperation, Offset) == 80, "Offset mismatch for UDragDropOperation::Offset");
static_assert(offsetof(UDragDropOperation, OnDrop) == 96, "Offset mismatch for UDragDropOperation::OnDrop");
static_assert(offsetof(UDragDropOperation, OnDragCancelled) == 112, "Offset mismatch for UDragDropOperation::OnDragCancelled");
static_assert(offsetof(UDragDropOperation, OnDragged) == 128, "Offset mismatch for UDragDropOperation::OnDragged");

// /Script/UMG.DynamicEntryBox
// Kind: Class; super: DynamicEntryBoxBase
class UDynamicEntryBox
{
public:
    std::uint8_t Pad_0000[0x208]; // 0x0000
    void* EntryWidgetClass; // 0x0208 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UDynamicEntryBox, EntryWidgetClass) == 520, "Offset mismatch for UDynamicEntryBox::EntryWidgetClass");

// /Script/UMG.DynamicEntryBoxBase
// Kind: Class; super: Widget
class UDynamicEntryBoxBase
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    std::uint8_t EntrySpacing[0x10]; // 0x0168 (Size: 0x10, Type: StructProperty)
    TArray<void*> SpacingPattern; // 0x0178 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EntryBoxType; // 0x0188 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0189
    std::uint8_t EntrySizeRule[0x8]; // 0x018C (Size: 0x8, Type: StructProperty)
    std::uint8_t EntryHorizontalAlignment; // 0x0194 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EntryVerticalAlignment; // 0x0195 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0196
    std::int32_t MaxElementSize; // 0x0198 (Size: 0x4, Type: IntProperty)
    std::uint8_t RadialBoxSettings[0x24]; // 0x019C (Size: 0x24, Type: StructProperty)
    std::uint8_t EntryWidgetPool[0x1]; // 0x01C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UDynamicEntryBoxBase, EntrySpacing) == 360, "Offset mismatch for UDynamicEntryBoxBase::EntrySpacing");
static_assert(offsetof(UDynamicEntryBoxBase, SpacingPattern) == 376, "Offset mismatch for UDynamicEntryBoxBase::SpacingPattern");
static_assert(offsetof(UDynamicEntryBoxBase, EntryBoxType) == 392, "Offset mismatch for UDynamicEntryBoxBase::EntryBoxType");
static_assert(offsetof(UDynamicEntryBoxBase, EntrySizeRule) == 396, "Offset mismatch for UDynamicEntryBoxBase::EntrySizeRule");
static_assert(offsetof(UDynamicEntryBoxBase, EntryHorizontalAlignment) == 404, "Offset mismatch for UDynamicEntryBoxBase::EntryHorizontalAlignment");
static_assert(offsetof(UDynamicEntryBoxBase, EntryVerticalAlignment) == 405, "Offset mismatch for UDynamicEntryBoxBase::EntryVerticalAlignment");
static_assert(offsetof(UDynamicEntryBoxBase, MaxElementSize) == 408, "Offset mismatch for UDynamicEntryBoxBase::MaxElementSize");
static_assert(offsetof(UDynamicEntryBoxBase, RadialBoxSettings) == 412, "Offset mismatch for UDynamicEntryBoxBase::RadialBoxSettings");
static_assert(offsetof(UDynamicEntryBoxBase, EntryWidgetPool) == 448, "Offset mismatch for UDynamicEntryBoxBase::EntryWidgetPool");

// /Script/UMG.EditableText
// Kind: Class; super: Widget
class UEditableText
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    std::uint8_t Text[0x10]; // 0x0168 (Size: 0x10, Type: TextProperty)
    FScriptDelegate TextDelegate; // 0x0178 (Size: 0x10, Type: DelegateProperty)
    std::uint8_t HintText[0x10]; // 0x0188 (Size: 0x10, Type: TextProperty)
    FScriptDelegate HintTextDelegate; // 0x0198 (Size: 0x10, Type: DelegateProperty)
    std::uint8_t Pad_0001[0x8]; // 0x01A8
    std::uint8_t WidgetStyle[0x2C0]; // 0x01B0 (Size: 0x2C0, Type: StructProperty)
    std::uint8_t IsReadOnly; // 0x0470 (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsPassword; // 0x0471 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0472
    float MinimumDesiredWidth; // 0x0474 (Size: 0x4, Type: FloatProperty)
    std::uint8_t IsCaretMovedWhenGainFocus; // 0x0478 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SelectAllTextWhenFocused; // 0x0479 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RevertTextOnEscape; // 0x047A (Size: 0x1, Type: BoolProperty)
    std::uint8_t ClearKeyboardFocusOnCommit; // 0x047B (Size: 0x1, Type: BoolProperty)
    std::uint8_t SelectAllTextOnCommit; // 0x047C (Size: 0x1, Type: BoolProperty)
    std::uint8_t AllowContextMenu; // 0x047D (Size: 0x1, Type: BoolProperty)
    std::uint8_t KeyboardType; // 0x047E (Size: 0x1, Type: ByteProperty)
    std::uint8_t VirtualKeyboardOptions[0x1]; // 0x047F (Size: 0x1, Type: StructProperty)
    std::uint8_t VirtualKeyboardTrigger; // 0x0480 (Size: 0x1, Type: EnumProperty)
    std::uint8_t VirtualKeyboardDismissAction; // 0x0481 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Justification; // 0x0482 (Size: 0x1, Type: ByteProperty)
    std::uint8_t OverflowPolicy; // 0x0483 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShapedTextOptions[0x4]; // 0x0484 (Size: 0x4, Type: StructProperty)
    FMulticastInlineDelegate OnTextChanged; // 0x0488 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTextCommitted; // 0x0498 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTextSelectionChanged; // 0x04A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x10]; // 0x04B8
    std::uint8_t EnableIntegratedKeyboard; // 0x04C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x17]; // 0x04C9
    std::uint8_t FontFacesLoadingPaintPolicy; // 0x04E0 (Size: 0x1, Type: EnumProperty)
    FMulticastSparseDelegate OnAllFontFacesFinishLoading; // 0x04E1 (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UEditableText, Text) == 360, "Offset mismatch for UEditableText::Text");
static_assert(offsetof(UEditableText, TextDelegate) == 376, "Offset mismatch for UEditableText::TextDelegate");
static_assert(offsetof(UEditableText, HintText) == 392, "Offset mismatch for UEditableText::HintText");
static_assert(offsetof(UEditableText, HintTextDelegate) == 408, "Offset mismatch for UEditableText::HintTextDelegate");
static_assert(offsetof(UEditableText, WidgetStyle) == 432, "Offset mismatch for UEditableText::WidgetStyle");
static_assert(offsetof(UEditableText, IsReadOnly) == 1136, "Offset mismatch for UEditableText::IsReadOnly");
static_assert(offsetof(UEditableText, IsPassword) == 1137, "Offset mismatch for UEditableText::IsPassword");
static_assert(offsetof(UEditableText, MinimumDesiredWidth) == 1140, "Offset mismatch for UEditableText::MinimumDesiredWidth");
static_assert(offsetof(UEditableText, IsCaretMovedWhenGainFocus) == 1144, "Offset mismatch for UEditableText::IsCaretMovedWhenGainFocus");
static_assert(offsetof(UEditableText, SelectAllTextWhenFocused) == 1145, "Offset mismatch for UEditableText::SelectAllTextWhenFocused");
static_assert(offsetof(UEditableText, RevertTextOnEscape) == 1146, "Offset mismatch for UEditableText::RevertTextOnEscape");
static_assert(offsetof(UEditableText, ClearKeyboardFocusOnCommit) == 1147, "Offset mismatch for UEditableText::ClearKeyboardFocusOnCommit");
static_assert(offsetof(UEditableText, SelectAllTextOnCommit) == 1148, "Offset mismatch for UEditableText::SelectAllTextOnCommit");
static_assert(offsetof(UEditableText, AllowContextMenu) == 1149, "Offset mismatch for UEditableText::AllowContextMenu");
static_assert(offsetof(UEditableText, KeyboardType) == 1150, "Offset mismatch for UEditableText::KeyboardType");
static_assert(offsetof(UEditableText, VirtualKeyboardOptions) == 1151, "Offset mismatch for UEditableText::VirtualKeyboardOptions");
static_assert(offsetof(UEditableText, VirtualKeyboardTrigger) == 1152, "Offset mismatch for UEditableText::VirtualKeyboardTrigger");
static_assert(offsetof(UEditableText, VirtualKeyboardDismissAction) == 1153, "Offset mismatch for UEditableText::VirtualKeyboardDismissAction");
static_assert(offsetof(UEditableText, Justification) == 1154, "Offset mismatch for UEditableText::Justification");
static_assert(offsetof(UEditableText, OverflowPolicy) == 1155, "Offset mismatch for UEditableText::OverflowPolicy");
static_assert(offsetof(UEditableText, ShapedTextOptions) == 1156, "Offset mismatch for UEditableText::ShapedTextOptions");
static_assert(offsetof(UEditableText, OnTextChanged) == 1160, "Offset mismatch for UEditableText::OnTextChanged");
static_assert(offsetof(UEditableText, OnTextCommitted) == 1176, "Offset mismatch for UEditableText::OnTextCommitted");
static_assert(offsetof(UEditableText, OnTextSelectionChanged) == 1192, "Offset mismatch for UEditableText::OnTextSelectionChanged");
static_assert(offsetof(UEditableText, EnableIntegratedKeyboard) == 1224, "Offset mismatch for UEditableText::EnableIntegratedKeyboard");
static_assert(offsetof(UEditableText, FontFacesLoadingPaintPolicy) == 1248, "Offset mismatch for UEditableText::FontFacesLoadingPaintPolicy");
static_assert(offsetof(UEditableText, OnAllFontFacesFinishLoading) == 1249, "Offset mismatch for UEditableText::OnAllFontFacesFinishLoading");

// /Script/UMG.EditableTextBox
// Kind: Class; super: Widget
class UEditableTextBox
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    std::uint8_t Text[0x10]; // 0x0168 (Size: 0x10, Type: TextProperty)
    FScriptDelegate TextDelegate; // 0x0178 (Size: 0x10, Type: DelegateProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0188
    std::uint8_t WidgetStyle[0xC80]; // 0x0190 (Size: 0xC80, Type: StructProperty)
    std::uint8_t HintText[0x10]; // 0x0E10 (Size: 0x10, Type: TextProperty)
    std::uint8_t HintTextDelegate[0xC]; // 0x0E20 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t IsReadOnly; // 0x0E2C (Size: 0x1, Type: BoolProperty)
    std::uint8_t IsPassword; // 0x0E2D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0E2E
    float MinimumDesiredWidth; // 0x0E30 (Size: 0x4, Type: FloatProperty)
    std::uint8_t IsCaretMovedWhenGainFocus; // 0x0E34 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SelectAllTextWhenFocused; // 0x0E35 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RevertTextOnEscape; // 0x0E36 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ClearKeyboardFocusOnCommit; // 0x0E37 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SelectAllTextOnCommit; // 0x0E38 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AllowContextMenu; // 0x0E39 (Size: 0x1, Type: BoolProperty)
    std::uint8_t KeyboardType; // 0x0E3A (Size: 0x1, Type: ByteProperty)
    std::uint8_t VirtualKeyboardOptions[0x1]; // 0x0E3B (Size: 0x1, Type: StructProperty)
    std::uint8_t VirtualKeyboardTrigger; // 0x0E3C (Size: 0x1, Type: EnumProperty)
    std::uint8_t VirtualKeyboardDismissAction; // 0x0E3D (Size: 0x1, Type: EnumProperty)
    std::uint8_t Justification; // 0x0E3E (Size: 0x1, Type: ByteProperty)
    std::uint8_t OverflowPolicy; // 0x0E3F (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShapedTextOptions[0x8]; // 0x0E40 (Size: 0x8, Type: StructProperty)
    FMulticastInlineDelegate OnTextChanged; // 0x0E48 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTextCommitted; // 0x0E58 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x28]; // 0x0E68
    std::uint8_t FontFacesLoadingPaintPolicy; // 0x0E90 (Size: 0x1, Type: EnumProperty)
    FMulticastSparseDelegate OnAllFontFacesFinishLoading; // 0x0E91 (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UEditableTextBox, Text) == 360, "Offset mismatch for UEditableTextBox::Text");
static_assert(offsetof(UEditableTextBox, TextDelegate) == 376, "Offset mismatch for UEditableTextBox::TextDelegate");
static_assert(offsetof(UEditableTextBox, WidgetStyle) == 400, "Offset mismatch for UEditableTextBox::WidgetStyle");
static_assert(offsetof(UEditableTextBox, HintText) == 3600, "Offset mismatch for UEditableTextBox::HintText");
static_assert(offsetof(UEditableTextBox, HintTextDelegate) == 3616, "Offset mismatch for UEditableTextBox::HintTextDelegate");
static_assert(offsetof(UEditableTextBox, IsReadOnly) == 3628, "Offset mismatch for UEditableTextBox::IsReadOnly");
static_assert(offsetof(UEditableTextBox, IsPassword) == 3629, "Offset mismatch for UEditableTextBox::IsPassword");
static_assert(offsetof(UEditableTextBox, MinimumDesiredWidth) == 3632, "Offset mismatch for UEditableTextBox::MinimumDesiredWidth");
static_assert(offsetof(UEditableTextBox, IsCaretMovedWhenGainFocus) == 3636, "Offset mismatch for UEditableTextBox::IsCaretMovedWhenGainFocus");
static_assert(offsetof(UEditableTextBox, SelectAllTextWhenFocused) == 3637, "Offset mismatch for UEditableTextBox::SelectAllTextWhenFocused");
static_assert(offsetof(UEditableTextBox, RevertTextOnEscape) == 3638, "Offset mismatch for UEditableTextBox::RevertTextOnEscape");
static_assert(offsetof(UEditableTextBox, ClearKeyboardFocusOnCommit) == 3639, "Offset mismatch for UEditableTextBox::ClearKeyboardFocusOnCommit");
static_assert(offsetof(UEditableTextBox, SelectAllTextOnCommit) == 3640, "Offset mismatch for UEditableTextBox::SelectAllTextOnCommit");
static_assert(offsetof(UEditableTextBox, AllowContextMenu) == 3641, "Offset mismatch for UEditableTextBox::AllowContextMenu");
static_assert(offsetof(UEditableTextBox, KeyboardType) == 3642, "Offset mismatch for UEditableTextBox::KeyboardType");
static_assert(offsetof(UEditableTextBox, VirtualKeyboardOptions) == 3643, "Offset mismatch for UEditableTextBox::VirtualKeyboardOptions");
static_assert(offsetof(UEditableTextBox, VirtualKeyboardTrigger) == 3644, "Offset mismatch for UEditableTextBox::VirtualKeyboardTrigger");
static_assert(offsetof(UEditableTextBox, VirtualKeyboardDismissAction) == 3645, "Offset mismatch for UEditableTextBox::VirtualKeyboardDismissAction");
static_assert(offsetof(UEditableTextBox, Justification) == 3646, "Offset mismatch for UEditableTextBox::Justification");
static_assert(offsetof(UEditableTextBox, OverflowPolicy) == 3647, "Offset mismatch for UEditableTextBox::OverflowPolicy");
static_assert(offsetof(UEditableTextBox, ShapedTextOptions) == 3648, "Offset mismatch for UEditableTextBox::ShapedTextOptions");
static_assert(offsetof(UEditableTextBox, OnTextChanged) == 3656, "Offset mismatch for UEditableTextBox::OnTextChanged");
static_assert(offsetof(UEditableTextBox, OnTextCommitted) == 3672, "Offset mismatch for UEditableTextBox::OnTextCommitted");
static_assert(offsetof(UEditableTextBox, FontFacesLoadingPaintPolicy) == 3728, "Offset mismatch for UEditableTextBox::FontFacesLoadingPaintPolicy");
static_assert(offsetof(UEditableTextBox, OnAllFontFacesFinishLoading) == 3729, "Offset mismatch for UEditableTextBox::OnAllFontFacesFinishLoading");

// /Script/UMG.ExpandableArea
// Kind: Class; super: Widget
class UExpandableArea
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t Style[0x180]; // 0x0170 (Size: 0x180, Type: StructProperty)
    std::uint8_t BorderBrush[0xB0]; // 0x02F0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t BorderColor[0x14]; // 0x03A0 (Size: 0x14, Type: StructProperty)
    std::uint8_t bIsExpanded; // 0x03B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x03B5
    float MaxHeight; // 0x03B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t HeaderPadding[0x10]; // 0x03BC (Size: 0x10, Type: StructProperty)
    std::uint8_t AreaPadding[0x14]; // 0x03CC (Size: 0x14, Type: StructProperty)
    FMulticastInlineDelegate OnExpansionChanged; // 0x03E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* HeaderContent; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
    void* BodyContent; // 0x03F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UExpandableArea, Style) == 368, "Offset mismatch for UExpandableArea::Style");
static_assert(offsetof(UExpandableArea, BorderBrush) == 752, "Offset mismatch for UExpandableArea::BorderBrush");
static_assert(offsetof(UExpandableArea, BorderColor) == 928, "Offset mismatch for UExpandableArea::BorderColor");
static_assert(offsetof(UExpandableArea, bIsExpanded) == 948, "Offset mismatch for UExpandableArea::bIsExpanded");
static_assert(offsetof(UExpandableArea, MaxHeight) == 952, "Offset mismatch for UExpandableArea::MaxHeight");
static_assert(offsetof(UExpandableArea, HeaderPadding) == 956, "Offset mismatch for UExpandableArea::HeaderPadding");
static_assert(offsetof(UExpandableArea, AreaPadding) == 972, "Offset mismatch for UExpandableArea::AreaPadding");
static_assert(offsetof(UExpandableArea, OnExpansionChanged) == 992, "Offset mismatch for UExpandableArea::OnExpansionChanged");
static_assert(offsetof(UExpandableArea, HeaderContent) == 1008, "Offset mismatch for UExpandableArea::HeaderContent");
static_assert(offsetof(UExpandableArea, BodyContent) == 1016, "Offset mismatch for UExpandableArea::BodyContent");

// /Script/UMG.FloatBinding
// Kind: Class; super: PropertyBinding
class UFloatBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> SourceObject; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t SourcePath[0x38]; // 0x0030 (Size: 0x38, Type: StructProperty)
    FName DestinationProperty; // 0x0068 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UFloatBinding, SourceObject) == 40, "Offset mismatch for UFloatBinding::SourceObject");
static_assert(offsetof(UFloatBinding, SourcePath) == 48, "Offset mismatch for UFloatBinding::SourcePath");
static_assert(offsetof(UFloatBinding, DestinationProperty) == 104, "Offset mismatch for UFloatBinding::DestinationProperty");

// /Script/UMG.GameViewportSubsystem
// Kind: Class; super: EngineSubsystem
class UGameViewportSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.GridPanel
// Kind: Class; super: PanelWidget
class UGridPanel
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    TArray<void*> ColumnFill; // 0x0180 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RowFill; // 0x0190 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGridPanel, ColumnFill) == 384, "Offset mismatch for UGridPanel::ColumnFill");
static_assert(offsetof(UGridPanel, RowFill) == 400, "Offset mismatch for UGridPanel::RowFill");

// /Script/UMG.GridSlot
// Kind: Class; super: PanelSlot
class UGridSlot
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Padding[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0048 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0049 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x004A
    std::int32_t Row; // 0x004C (Size: 0x4, Type: IntProperty)
    std::int32_t RowSpan; // 0x0050 (Size: 0x4, Type: IntProperty)
    std::int32_t Column; // 0x0054 (Size: 0x4, Type: IntProperty)
    std::int32_t ColumnSpan; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::int32_t Layer; // 0x005C (Size: 0x4, Type: IntProperty)
    std::uint8_t Nudge[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGridSlot, Padding) == 56, "Offset mismatch for UGridSlot::Padding");
static_assert(offsetof(UGridSlot, HorizontalAlignment) == 72, "Offset mismatch for UGridSlot::HorizontalAlignment");
static_assert(offsetof(UGridSlot, VerticalAlignment) == 73, "Offset mismatch for UGridSlot::VerticalAlignment");
static_assert(offsetof(UGridSlot, Row) == 76, "Offset mismatch for UGridSlot::Row");
static_assert(offsetof(UGridSlot, RowSpan) == 80, "Offset mismatch for UGridSlot::RowSpan");
static_assert(offsetof(UGridSlot, Column) == 84, "Offset mismatch for UGridSlot::Column");
static_assert(offsetof(UGridSlot, ColumnSpan) == 88, "Offset mismatch for UGridSlot::ColumnSpan");
static_assert(offsetof(UGridSlot, Layer) == 92, "Offset mismatch for UGridSlot::Layer");
static_assert(offsetof(UGridSlot, Nudge) == 96, "Offset mismatch for UGridSlot::Nudge");

// /Script/UMG.HorizontalBox
// Kind: Class; super: PanelWidget
class UHorizontalBox
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    TArray<void*> Slots; // 0x0168 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UHorizontalBox, Slots) == 360, "Offset mismatch for UHorizontalBox::Slots");

// /Script/UMG.HorizontalBoxSlot
// Kind: Class; super: PanelSlot
class UHorizontalBoxSlot
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t Size[0x8]; // 0x0040 (Size: 0x8, Type: StructProperty)
    std::uint8_t Padding[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0058 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0059 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UHorizontalBoxSlot, Size) == 64, "Offset mismatch for UHorizontalBoxSlot::Size");
static_assert(offsetof(UHorizontalBoxSlot, Padding) == 72, "Offset mismatch for UHorizontalBoxSlot::Padding");
static_assert(offsetof(UHorizontalBoxSlot, HorizontalAlignment) == 88, "Offset mismatch for UHorizontalBoxSlot::HorizontalAlignment");
static_assert(offsetof(UHorizontalBoxSlot, VerticalAlignment) == 89, "Offset mismatch for UHorizontalBoxSlot::VerticalAlignment");

// /Script/UMG.Image
// Kind: Class; super: Widget
class UImage
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t Brush[0xB0]; // 0x0170 (Size: 0xB0, Type: StructProperty)
    std::uint8_t BrushDelegate[0xC]; // 0x0220 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t ColorAndOpacity[0x10]; // 0x022C (Size: 0x10, Type: StructProperty)
    std::uint8_t ColorAndOpacityDelegate[0xC]; // 0x023C (Size: 0xC, Type: DelegateProperty)
    std::uint8_t bFlipForRightToLeftFlowDirection; // 0x0248 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0249
    FScriptDelegate OnMouseButtonDownEvent; // 0x024C (Size: 0x10, Type: DelegateProperty)
};

static_assert(offsetof(UImage, Brush) == 368, "Offset mismatch for UImage::Brush");
static_assert(offsetof(UImage, BrushDelegate) == 544, "Offset mismatch for UImage::BrushDelegate");
static_assert(offsetof(UImage, ColorAndOpacity) == 556, "Offset mismatch for UImage::ColorAndOpacity");
static_assert(offsetof(UImage, ColorAndOpacityDelegate) == 572, "Offset mismatch for UImage::ColorAndOpacityDelegate");
static_assert(offsetof(UImage, bFlipForRightToLeftFlowDirection) == 584, "Offset mismatch for UImage::bFlipForRightToLeftFlowDirection");
static_assert(offsetof(UImage, OnMouseButtonDownEvent) == 588, "Offset mismatch for UImage::OnMouseButtonDownEvent");

// /Script/UMG.InputKeySelector
// Kind: Class; super: Widget
class UInputKeySelector
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t WidgetStyle[0x390]; // 0x0170 (Size: 0x390, Type: StructProperty)
    std::uint8_t TextStyle[0x2E0]; // 0x0500 (Size: 0x2E0, Type: StructProperty)
    std::uint8_t SelectedKey[0x20]; // 0x07E0 (Size: 0x20, Type: StructProperty)
    std::uint8_t Margin[0x10]; // 0x0800 (Size: 0x10, Type: StructProperty)
    std::uint8_t KeySelectionText[0x10]; // 0x0810 (Size: 0x10, Type: TextProperty)
    std::uint8_t NoKeySpecifiedText[0x10]; // 0x0820 (Size: 0x10, Type: TextProperty)
    std::uint8_t bAllowModifierKeys; // 0x0830 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowGamepadKeys; // 0x0831 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0832
    TArray<void*> EscapeKeys; // 0x0838 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnKeySelected; // 0x0848 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x0858 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UInputKeySelector, WidgetStyle) == 368, "Offset mismatch for UInputKeySelector::WidgetStyle");
static_assert(offsetof(UInputKeySelector, TextStyle) == 1280, "Offset mismatch for UInputKeySelector::TextStyle");
static_assert(offsetof(UInputKeySelector, SelectedKey) == 2016, "Offset mismatch for UInputKeySelector::SelectedKey");
static_assert(offsetof(UInputKeySelector, Margin) == 2048, "Offset mismatch for UInputKeySelector::Margin");
static_assert(offsetof(UInputKeySelector, KeySelectionText) == 2064, "Offset mismatch for UInputKeySelector::KeySelectionText");
static_assert(offsetof(UInputKeySelector, NoKeySpecifiedText) == 2080, "Offset mismatch for UInputKeySelector::NoKeySpecifiedText");
static_assert(offsetof(UInputKeySelector, bAllowModifierKeys) == 2096, "Offset mismatch for UInputKeySelector::bAllowModifierKeys");
static_assert(offsetof(UInputKeySelector, bAllowGamepadKeys) == 2097, "Offset mismatch for UInputKeySelector::bAllowGamepadKeys");
static_assert(offsetof(UInputKeySelector, EscapeKeys) == 2104, "Offset mismatch for UInputKeySelector::EscapeKeys");
static_assert(offsetof(UInputKeySelector, OnKeySelected) == 2120, "Offset mismatch for UInputKeySelector::OnKeySelected");
static_assert(offsetof(UInputKeySelector, OnIsSelectingKeyChanged) == 2136, "Offset mismatch for UInputKeySelector::OnIsSelectingKeyChanged");

// /Script/UMG.Int32Binding
// Kind: Class; super: PropertyBinding
class UInt32Binding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> SourceObject; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t SourcePath[0x38]; // 0x0030 (Size: 0x38, Type: StructProperty)
    FName DestinationProperty; // 0x0068 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UInt32Binding, SourceObject) == 40, "Offset mismatch for UInt32Binding::SourceObject");
static_assert(offsetof(UInt32Binding, SourcePath) == 48, "Offset mismatch for UInt32Binding::SourcePath");
static_assert(offsetof(UInt32Binding, DestinationProperty) == 104, "Offset mismatch for UInt32Binding::DestinationProperty");

// /Script/UMG.InvalidationBox
// Kind: Class; super: ContentWidget
class UInvalidationBox
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t bCanCache; // 0x0180 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UInvalidationBox, bCanCache) == 384, "Offset mismatch for UInvalidationBox::bCanCache");

// /Script/UMG.ListView
// Kind: Class; super: ListViewBase
class UListView
{
public:
    std::uint8_t Pad_0000[0x460]; // 0x0000
    std::uint8_t WidgetStyle[0xC0]; // 0x0460 (Size: 0xC0, Type: StructProperty)
    std::uint8_t ScrollBarStyle[0x650]; // 0x0520 (Size: 0x650, Type: StructProperty)
    std::uint8_t bEnableShadowBrush; // 0x0B70 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0xF]; // 0x0B71
    std::uint8_t ShadowBrushStyle[0x2F0]; // 0x0B80 (Size: 0x2F0, Type: StructProperty)
    std::uint8_t orientation; // 0x0E70 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SelectionMode; // 0x0E71 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ConsumeMouseWheel; // 0x0E72 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bClearSelectionOnClick; // 0x0E73 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsFocusable; // 0x0E74 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClearScrollVelocityOnSelection; // 0x0E75 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReturnFocusToSelection; // 0x0E76 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableProximateEntryNavigation; // 0x0E77 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ScrollIntoViewAlignment; // 0x0E78 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0E79
    TArray<void*> ListItems; // 0x0E80 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0E90
    float HorizontalEntrySpacing; // 0x0EA0 (Size: 0x4, Type: FloatProperty)
    float VerticalEntrySpacing; // 0x0EA4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ScrollBarPadding[0x10]; // 0x0EA8 (Size: 0x10, Type: StructProperty)
    FMulticastInlineDelegate BP_OnEntryInitialized; // 0x0EB8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemClicked; // 0x0EC8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x0ED8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemDragDetected; // 0x0EE8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemDragEnter; // 0x0EF8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemDragLeave; // 0x0F08 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemAcceptDrop; // 0x0F18 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemDragCancelled; // 0x0F28 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnListViewDraggingStateChanged; // 0x0F38 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x0F48 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x0F58 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x0F68 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnListViewScrolled; // 0x0F78 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnListViewFinishedScrolling; // 0x0F88 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnListViewTouchStart; // 0x0F98 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnListViewTouchMove; // 0x0FA8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnListViewTouchEnd; // 0x0FB8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FScriptDelegate BP_OnIsItemSelectableOrNavigable; // 0x0FC8 (Size: 0x10, Type: DelegateProperty)
};

static_assert(offsetof(UListView, WidgetStyle) == 1120, "Offset mismatch for UListView::WidgetStyle");
static_assert(offsetof(UListView, ScrollBarStyle) == 1312, "Offset mismatch for UListView::ScrollBarStyle");
static_assert(offsetof(UListView, bEnableShadowBrush) == 2928, "Offset mismatch for UListView::bEnableShadowBrush");
static_assert(offsetof(UListView, ShadowBrushStyle) == 2944, "Offset mismatch for UListView::ShadowBrushStyle");
static_assert(offsetof(UListView, orientation) == 3696, "Offset mismatch for UListView::orientation");
static_assert(offsetof(UListView, SelectionMode) == 3697, "Offset mismatch for UListView::SelectionMode");
static_assert(offsetof(UListView, ConsumeMouseWheel) == 3698, "Offset mismatch for UListView::ConsumeMouseWheel");
static_assert(offsetof(UListView, bClearSelectionOnClick) == 3699, "Offset mismatch for UListView::bClearSelectionOnClick");
static_assert(offsetof(UListView, bIsFocusable) == 3700, "Offset mismatch for UListView::bIsFocusable");
static_assert(offsetof(UListView, bClearScrollVelocityOnSelection) == 3701, "Offset mismatch for UListView::bClearScrollVelocityOnSelection");
static_assert(offsetof(UListView, bReturnFocusToSelection) == 3702, "Offset mismatch for UListView::bReturnFocusToSelection");
static_assert(offsetof(UListView, bEnableProximateEntryNavigation) == 3703, "Offset mismatch for UListView::bEnableProximateEntryNavigation");
static_assert(offsetof(UListView, ScrollIntoViewAlignment) == 3704, "Offset mismatch for UListView::ScrollIntoViewAlignment");
static_assert(offsetof(UListView, ListItems) == 3712, "Offset mismatch for UListView::ListItems");
static_assert(offsetof(UListView, HorizontalEntrySpacing) == 3744, "Offset mismatch for UListView::HorizontalEntrySpacing");
static_assert(offsetof(UListView, VerticalEntrySpacing) == 3748, "Offset mismatch for UListView::VerticalEntrySpacing");
static_assert(offsetof(UListView, ScrollBarPadding) == 3752, "Offset mismatch for UListView::ScrollBarPadding");
static_assert(offsetof(UListView, BP_OnEntryInitialized) == 3768, "Offset mismatch for UListView::BP_OnEntryInitialized");
static_assert(offsetof(UListView, BP_OnItemClicked) == 3784, "Offset mismatch for UListView::BP_OnItemClicked");
static_assert(offsetof(UListView, BP_OnItemDoubleClicked) == 3800, "Offset mismatch for UListView::BP_OnItemDoubleClicked");
static_assert(offsetof(UListView, BP_OnItemDragDetected) == 3816, "Offset mismatch for UListView::BP_OnItemDragDetected");
static_assert(offsetof(UListView, BP_OnItemDragEnter) == 3832, "Offset mismatch for UListView::BP_OnItemDragEnter");
static_assert(offsetof(UListView, BP_OnItemDragLeave) == 3848, "Offset mismatch for UListView::BP_OnItemDragLeave");
static_assert(offsetof(UListView, BP_OnItemAcceptDrop) == 3864, "Offset mismatch for UListView::BP_OnItemAcceptDrop");
static_assert(offsetof(UListView, BP_OnItemDragCancelled) == 3880, "Offset mismatch for UListView::BP_OnItemDragCancelled");
static_assert(offsetof(UListView, BP_OnListViewDraggingStateChanged) == 3896, "Offset mismatch for UListView::BP_OnListViewDraggingStateChanged");
static_assert(offsetof(UListView, BP_OnItemIsHoveredChanged) == 3912, "Offset mismatch for UListView::BP_OnItemIsHoveredChanged");
static_assert(offsetof(UListView, BP_OnItemSelectionChanged) == 3928, "Offset mismatch for UListView::BP_OnItemSelectionChanged");
static_assert(offsetof(UListView, BP_OnItemScrolledIntoView) == 3944, "Offset mismatch for UListView::BP_OnItemScrolledIntoView");
static_assert(offsetof(UListView, BP_OnListViewScrolled) == 3960, "Offset mismatch for UListView::BP_OnListViewScrolled");
static_assert(offsetof(UListView, BP_OnListViewFinishedScrolling) == 3976, "Offset mismatch for UListView::BP_OnListViewFinishedScrolling");
static_assert(offsetof(UListView, BP_OnListViewTouchStart) == 3992, "Offset mismatch for UListView::BP_OnListViewTouchStart");
static_assert(offsetof(UListView, BP_OnListViewTouchMove) == 4008, "Offset mismatch for UListView::BP_OnListViewTouchMove");
static_assert(offsetof(UListView, BP_OnListViewTouchEnd) == 4024, "Offset mismatch for UListView::BP_OnListViewTouchEnd");
static_assert(offsetof(UListView, BP_OnIsItemSelectableOrNavigable) == 4040, "Offset mismatch for UListView::BP_OnIsItemSelectableOrNavigable");

// /Script/UMG.ListViewBase
// Kind: Class; super: Widget
class UListViewBase
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    FMulticastInlineDelegate BP_OnEntryGenerated; // 0x0168 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate BP_OnEntriesGenerated; // 0x0178 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0188
    void* EntryWidgetClass; // 0x0198 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bPaintSelectedEntriesOnTop; // 0x01A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPaintHoveredEntriesOnTop; // 0x01A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableScrolling; // 0x01A2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x01A3
    float WheelScrollMultiplier; // 0x01A4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableScrollAnimation; // 0x01A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x01A9
    float ScrollingAnimationInterpolationSpeed; // 0x01AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bInEnableTouchAnimatedScrolling; // 0x01B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AllowOverscroll; // 0x01B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableRightClickScrolling; // 0x01B2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableTouchScrolling; // 0x01B3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPointerScrollingEnabled; // 0x01B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsGamepadScrollingEnabled; // 0x01B5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableFixedLineOffset; // 0x01B6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1]; // 0x01B7
    float FixedLineScrollOffset; // 0x01B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowDragging; // 0x01BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowDragDrop; // 0x01BD (Size: 0x1, Type: BoolProperty)
    std::uint8_t DragDropVisualPivot; // 0x01BE (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x1]; // 0x01BF
    std::uint8_t DragDropVisualOffset[0x10]; // 0x01C0 (Size: 0x10, Type: StructProperty)
    void* DragDropVisualEntryClass; // 0x01D0 (Size: 0x8, Type: ClassProperty)
    void* DragDropOperationClass; // 0x01D8 (Size: 0x8, Type: ClassProperty)
    void* DragVisualWidget; // 0x01E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsDragging; // 0x01E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSelectItemOnNavigation; // 0x01E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowKeepPreselectedItems; // 0x01EA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x5]; // 0x01EB
    FMulticastInlineDelegate BP_OnEntryReleased; // 0x01F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t EntryWidgetPool[0x1]; // 0x0200 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UListViewBase, BP_OnEntryGenerated) == 360, "Offset mismatch for UListViewBase::BP_OnEntryGenerated");
static_assert(offsetof(UListViewBase, BP_OnEntriesGenerated) == 376, "Offset mismatch for UListViewBase::BP_OnEntriesGenerated");
static_assert(offsetof(UListViewBase, EntryWidgetClass) == 408, "Offset mismatch for UListViewBase::EntryWidgetClass");
static_assert(offsetof(UListViewBase, bPaintSelectedEntriesOnTop) == 416, "Offset mismatch for UListViewBase::bPaintSelectedEntriesOnTop");
static_assert(offsetof(UListViewBase, bPaintHoveredEntriesOnTop) == 417, "Offset mismatch for UListViewBase::bPaintHoveredEntriesOnTop");
static_assert(offsetof(UListViewBase, bEnableScrolling) == 418, "Offset mismatch for UListViewBase::bEnableScrolling");
static_assert(offsetof(UListViewBase, WheelScrollMultiplier) == 420, "Offset mismatch for UListViewBase::WheelScrollMultiplier");
static_assert(offsetof(UListViewBase, bEnableScrollAnimation) == 424, "Offset mismatch for UListViewBase::bEnableScrollAnimation");
static_assert(offsetof(UListViewBase, ScrollingAnimationInterpolationSpeed) == 428, "Offset mismatch for UListViewBase::ScrollingAnimationInterpolationSpeed");
static_assert(offsetof(UListViewBase, bInEnableTouchAnimatedScrolling) == 432, "Offset mismatch for UListViewBase::bInEnableTouchAnimatedScrolling");
static_assert(offsetof(UListViewBase, AllowOverscroll) == 433, "Offset mismatch for UListViewBase::AllowOverscroll");
static_assert(offsetof(UListViewBase, bEnableRightClickScrolling) == 434, "Offset mismatch for UListViewBase::bEnableRightClickScrolling");
static_assert(offsetof(UListViewBase, bEnableTouchScrolling) == 435, "Offset mismatch for UListViewBase::bEnableTouchScrolling");
static_assert(offsetof(UListViewBase, bIsPointerScrollingEnabled) == 436, "Offset mismatch for UListViewBase::bIsPointerScrollingEnabled");
static_assert(offsetof(UListViewBase, bIsGamepadScrollingEnabled) == 437, "Offset mismatch for UListViewBase::bIsGamepadScrollingEnabled");
static_assert(offsetof(UListViewBase, bEnableFixedLineOffset) == 438, "Offset mismatch for UListViewBase::bEnableFixedLineOffset");
static_assert(offsetof(UListViewBase, FixedLineScrollOffset) == 440, "Offset mismatch for UListViewBase::FixedLineScrollOffset");
static_assert(offsetof(UListViewBase, bAllowDragging) == 444, "Offset mismatch for UListViewBase::bAllowDragging");
static_assert(offsetof(UListViewBase, bAllowDragDrop) == 445, "Offset mismatch for UListViewBase::bAllowDragDrop");
static_assert(offsetof(UListViewBase, DragDropVisualPivot) == 446, "Offset mismatch for UListViewBase::DragDropVisualPivot");
static_assert(offsetof(UListViewBase, DragDropVisualOffset) == 448, "Offset mismatch for UListViewBase::DragDropVisualOffset");
static_assert(offsetof(UListViewBase, DragDropVisualEntryClass) == 464, "Offset mismatch for UListViewBase::DragDropVisualEntryClass");
static_assert(offsetof(UListViewBase, DragDropOperationClass) == 472, "Offset mismatch for UListViewBase::DragDropOperationClass");
static_assert(offsetof(UListViewBase, DragVisualWidget) == 480, "Offset mismatch for UListViewBase::DragVisualWidget");
static_assert(offsetof(UListViewBase, bIsDragging) == 488, "Offset mismatch for UListViewBase::bIsDragging");
static_assert(offsetof(UListViewBase, bSelectItemOnNavigation) == 489, "Offset mismatch for UListViewBase::bSelectItemOnNavigation");
static_assert(offsetof(UListViewBase, bAllowKeepPreselectedItems) == 490, "Offset mismatch for UListViewBase::bAllowKeepPreselectedItems");
static_assert(offsetof(UListViewBase, BP_OnEntryReleased) == 496, "Offset mismatch for UListViewBase::BP_OnEntryReleased");
static_assert(offsetof(UListViewBase, EntryWidgetPool) == 512, "Offset mismatch for UListViewBase::EntryWidgetPool");

// /Script/UMG.ListViewDesignerPreviewItem
// Kind: Class; super: Object
class UListViewDesignerPreviewItem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.MenuAnchor
// Kind: Class; super: ContentWidget
class UMenuAnchor
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    void* MenuClass; // 0x0180 (Size: 0x8, Type: ClassProperty)
    std::uint8_t OnGetMenuContentEvent[0xC]; // 0x0188 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t OnGetUserMenuContentEvent[0xC]; // 0x0194 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t Placement; // 0x01A0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bFitInWindow; // 0x01A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShouldDeferPaintingAfterWindowContent; // 0x01A2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t UseApplicationMenuStack; // 0x01A3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShowMenuBackground; // 0x01A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x01A5
    FMulticastInlineDelegate OnMenuOpenChanged; // 0x01A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UMenuAnchor, MenuClass) == 384, "Offset mismatch for UMenuAnchor::MenuClass");
static_assert(offsetof(UMenuAnchor, OnGetMenuContentEvent) == 392, "Offset mismatch for UMenuAnchor::OnGetMenuContentEvent");
static_assert(offsetof(UMenuAnchor, OnGetUserMenuContentEvent) == 404, "Offset mismatch for UMenuAnchor::OnGetUserMenuContentEvent");
static_assert(offsetof(UMenuAnchor, Placement) == 416, "Offset mismatch for UMenuAnchor::Placement");
static_assert(offsetof(UMenuAnchor, bFitInWindow) == 417, "Offset mismatch for UMenuAnchor::bFitInWindow");
static_assert(offsetof(UMenuAnchor, ShouldDeferPaintingAfterWindowContent) == 418, "Offset mismatch for UMenuAnchor::ShouldDeferPaintingAfterWindowContent");
static_assert(offsetof(UMenuAnchor, UseApplicationMenuStack) == 419, "Offset mismatch for UMenuAnchor::UseApplicationMenuStack");
static_assert(offsetof(UMenuAnchor, ShowMenuBackground) == 420, "Offset mismatch for UMenuAnchor::ShowMenuBackground");
static_assert(offsetof(UMenuAnchor, OnMenuOpenChanged) == 424, "Offset mismatch for UMenuAnchor::OnMenuOpenChanged");

// /Script/UMG.MouseCursorBinding
// Kind: Class; super: PropertyBinding
class UMouseCursorBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> SourceObject; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t SourcePath[0x38]; // 0x0030 (Size: 0x38, Type: StructProperty)
    FName DestinationProperty; // 0x0068 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UMouseCursorBinding, SourceObject) == 40, "Offset mismatch for UMouseCursorBinding::SourceObject");
static_assert(offsetof(UMouseCursorBinding, SourcePath) == 48, "Offset mismatch for UMouseCursorBinding::SourcePath");
static_assert(offsetof(UMouseCursorBinding, DestinationProperty) == 104, "Offset mismatch for UMouseCursorBinding::DestinationProperty");

// /Script/UMG.MouseHoverComponent
// Kind: Class; super: UIComponent
class UMouseHoverComponent
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t bIsHovered; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMouseHoverComponent, bIsHovered) == 88, "Offset mismatch for UMouseHoverComponent::bIsHovered");

// /Script/UMG.MovieScene2DTransformPropertySystem
// Kind: Class; super: MovieScenePropertySystem
class UMovieScene2DTransformPropertySystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* InstantiatorSystem; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieScene2DTransformPropertySystem, InstantiatorSystem) == 72, "Offset mismatch for UMovieScene2DTransformPropertySystem::InstantiatorSystem");

// /Script/UMG.MovieScene2DTransformSection
// Kind: Class; super: MovieSceneSection
class UMovieScene2DTransformSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t TransformMask[0x8]; // 0x0148 (Size: 0x8, Type: StructProperty)
    std::uint8_t Translation[0x1A0]; // 0x0150 (Size: 0x1A0, Type: StructProperty)
    std::uint8_t Rotation[0xD0]; // 0x02F0 (Size: 0xD0, Type: StructProperty)
    std::uint8_t Scale[0x1A0]; // 0x03C0 (Size: 0x1A0, Type: StructProperty)
    std::uint8_t Shear[0x1]; // 0x0560 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieScene2DTransformSection, TransformMask) == 328, "Offset mismatch for UMovieScene2DTransformSection::TransformMask");
static_assert(offsetof(UMovieScene2DTransformSection, Translation) == 336, "Offset mismatch for UMovieScene2DTransformSection::Translation");
static_assert(offsetof(UMovieScene2DTransformSection, Rotation) == 752, "Offset mismatch for UMovieScene2DTransformSection::Rotation");
static_assert(offsetof(UMovieScene2DTransformSection, Scale) == 960, "Offset mismatch for UMovieScene2DTransformSection::Scale");
static_assert(offsetof(UMovieScene2DTransformSection, Shear) == 1376, "Offset mismatch for UMovieScene2DTransformSection::Shear");

// /Script/UMG.MovieScene2DTransformTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieScene2DTransformTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* SectionToKey; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PropertyBinding[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    TArray<void*> Sections; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieScene2DTransformTrack, SectionToKey) == 248, "Offset mismatch for UMovieScene2DTransformTrack::SectionToKey");
static_assert(offsetof(UMovieScene2DTransformTrack, PropertyBinding) == 256, "Offset mismatch for UMovieScene2DTransformTrack::PropertyBinding");
static_assert(offsetof(UMovieScene2DTransformTrack, Sections) == 272, "Offset mismatch for UMovieScene2DTransformTrack::Sections");

// /Script/UMG.MovieSceneMarginPropertySystem
// Kind: Class; super: MovieScenePropertySystem
class UMovieSceneMarginPropertySystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* InstantiatorSystem; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneMarginPropertySystem, InstantiatorSystem) == 72, "Offset mismatch for UMovieSceneMarginPropertySystem::InstantiatorSystem");

// /Script/UMG.MovieSceneMarginSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneMarginSection
{
public:
    std::uint8_t Pad_0000[0x148]; // 0x0000
    std::uint8_t TopCurve[0xD0]; // 0x0148 (Size: 0xD0, Type: StructProperty)
    std::uint8_t LeftCurve[0xD0]; // 0x0218 (Size: 0xD0, Type: StructProperty)
    std::uint8_t RightCurve[0xD0]; // 0x02E8 (Size: 0xD0, Type: StructProperty)
    std::uint8_t BottomCurve[0x1]; // 0x03B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneMarginSection, TopCurve) == 328, "Offset mismatch for UMovieSceneMarginSection::TopCurve");
static_assert(offsetof(UMovieSceneMarginSection, LeftCurve) == 536, "Offset mismatch for UMovieSceneMarginSection::LeftCurve");
static_assert(offsetof(UMovieSceneMarginSection, RightCurve) == 744, "Offset mismatch for UMovieSceneMarginSection::RightCurve");
static_assert(offsetof(UMovieSceneMarginSection, BottomCurve) == 952, "Offset mismatch for UMovieSceneMarginSection::BottomCurve");

// /Script/UMG.MovieSceneMarginTrack
// Kind: Class; super: MovieScenePropertyTrack
class UMovieSceneMarginTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    void* SectionToKey; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PropertyBinding[0x10]; // 0x0100 (Size: 0x10, Type: StructProperty)
    TArray<void*> Sections; // 0x0110 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneMarginTrack, SectionToKey) == 248, "Offset mismatch for UMovieSceneMarginTrack::SectionToKey");
static_assert(offsetof(UMovieSceneMarginTrack, PropertyBinding) == 256, "Offset mismatch for UMovieSceneMarginTrack::PropertyBinding");
static_assert(offsetof(UMovieSceneMarginTrack, Sections) == 272, "Offset mismatch for UMovieSceneMarginTrack::Sections");

// /Script/UMG.MovieSceneWidgetMaterialSystem
// Kind: Class; super: MovieSceneEntitySystem
class UMovieSceneWidgetMaterialSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Linker; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMovieSceneWidgetMaterialSystem, Linker) == 40, "Offset mismatch for UMovieSceneWidgetMaterialSystem::Linker");

// /Script/UMG.MovieSceneWidgetMaterialTrack
// Kind: Class; super: MovieSceneMaterialTrack
class UMovieSceneWidgetMaterialTrack
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    TArray<void*> BrushPropertyNamePath; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    FName TrackName; // 0x0130 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UMovieSceneWidgetMaterialTrack, BrushPropertyNamePath) == 288, "Offset mismatch for UMovieSceneWidgetMaterialTrack::BrushPropertyNamePath");
static_assert(offsetof(UMovieSceneWidgetMaterialTrack, TrackName) == 304, "Offset mismatch for UMovieSceneWidgetMaterialTrack::TrackName");

// /Script/UMG.MultiLineEditableText
// Kind: Class; super: TextLayoutWidget
class UMultiLineEditableText
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::uint8_t Text[0x10]; // 0x0190 (Size: 0x10, Type: TextProperty)
    std::uint8_t HintText[0x10]; // 0x01A0 (Size: 0x10, Type: TextProperty)
    FScriptDelegate HintTextDelegate; // 0x01B0 (Size: 0x10, Type: DelegateProperty)
    std::uint8_t WidgetStyle[0x2E0]; // 0x01C0 (Size: 0x2E0, Type: StructProperty)
    std::uint8_t bIsReadOnly; // 0x04A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t SelectAllTextWhenFocused; // 0x04A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ClearTextSelectionOnFocusLoss; // 0x04A2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RevertTextOnEscape; // 0x04A3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ClearKeyboardFocusOnCommit; // 0x04A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AllowContextMenu; // 0x04A5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t VirtualKeyboardOptions[0x1]; // 0x04A6 (Size: 0x1, Type: StructProperty)
    std::uint8_t VirtualKeyboardDismissAction; // 0x04A7 (Size: 0x1, Type: EnumProperty)
    FMulticastInlineDelegate OnTextChanged; // 0x04A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTextCommitted; // 0x04B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UMultiLineEditableText, Text) == 400, "Offset mismatch for UMultiLineEditableText::Text");
static_assert(offsetof(UMultiLineEditableText, HintText) == 416, "Offset mismatch for UMultiLineEditableText::HintText");
static_assert(offsetof(UMultiLineEditableText, HintTextDelegate) == 432, "Offset mismatch for UMultiLineEditableText::HintTextDelegate");
static_assert(offsetof(UMultiLineEditableText, WidgetStyle) == 448, "Offset mismatch for UMultiLineEditableText::WidgetStyle");
static_assert(offsetof(UMultiLineEditableText, bIsReadOnly) == 1184, "Offset mismatch for UMultiLineEditableText::bIsReadOnly");
static_assert(offsetof(UMultiLineEditableText, SelectAllTextWhenFocused) == 1185, "Offset mismatch for UMultiLineEditableText::SelectAllTextWhenFocused");
static_assert(offsetof(UMultiLineEditableText, ClearTextSelectionOnFocusLoss) == 1186, "Offset mismatch for UMultiLineEditableText::ClearTextSelectionOnFocusLoss");
static_assert(offsetof(UMultiLineEditableText, RevertTextOnEscape) == 1187, "Offset mismatch for UMultiLineEditableText::RevertTextOnEscape");
static_assert(offsetof(UMultiLineEditableText, ClearKeyboardFocusOnCommit) == 1188, "Offset mismatch for UMultiLineEditableText::ClearKeyboardFocusOnCommit");
static_assert(offsetof(UMultiLineEditableText, AllowContextMenu) == 1189, "Offset mismatch for UMultiLineEditableText::AllowContextMenu");
static_assert(offsetof(UMultiLineEditableText, VirtualKeyboardOptions) == 1190, "Offset mismatch for UMultiLineEditableText::VirtualKeyboardOptions");
static_assert(offsetof(UMultiLineEditableText, VirtualKeyboardDismissAction) == 1191, "Offset mismatch for UMultiLineEditableText::VirtualKeyboardDismissAction");
static_assert(offsetof(UMultiLineEditableText, OnTextChanged) == 1192, "Offset mismatch for UMultiLineEditableText::OnTextChanged");
static_assert(offsetof(UMultiLineEditableText, OnTextCommitted) == 1208, "Offset mismatch for UMultiLineEditableText::OnTextCommitted");

// /Script/UMG.MultiLineEditableTextBox
// Kind: Class; super: TextLayoutWidget
class UMultiLineEditableTextBox
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::uint8_t Text[0x10]; // 0x0190 (Size: 0x10, Type: TextProperty)
    std::uint8_t HintText[0x10]; // 0x01A0 (Size: 0x10, Type: TextProperty)
    FScriptDelegate HintTextDelegate; // 0x01B0 (Size: 0x10, Type: DelegateProperty)
    std::uint8_t WidgetStyle[0xC80]; // 0x01C0 (Size: 0xC80, Type: StructProperty)
    std::uint8_t bIsReadOnly; // 0x0E40 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AllowContextMenu; // 0x0E41 (Size: 0x1, Type: BoolProperty)
    std::uint8_t VirtualKeyboardOptions[0x1]; // 0x0E42 (Size: 0x1, Type: StructProperty)
    std::uint8_t VirtualKeyboardDismissAction; // 0x0E43 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0E44
    FMulticastInlineDelegate OnTextChanged; // 0x0E48 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnTextCommitted; // 0x0E58 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UMultiLineEditableTextBox, Text) == 400, "Offset mismatch for UMultiLineEditableTextBox::Text");
static_assert(offsetof(UMultiLineEditableTextBox, HintText) == 416, "Offset mismatch for UMultiLineEditableTextBox::HintText");
static_assert(offsetof(UMultiLineEditableTextBox, HintTextDelegate) == 432, "Offset mismatch for UMultiLineEditableTextBox::HintTextDelegate");
static_assert(offsetof(UMultiLineEditableTextBox, WidgetStyle) == 448, "Offset mismatch for UMultiLineEditableTextBox::WidgetStyle");
static_assert(offsetof(UMultiLineEditableTextBox, bIsReadOnly) == 3648, "Offset mismatch for UMultiLineEditableTextBox::bIsReadOnly");
static_assert(offsetof(UMultiLineEditableTextBox, AllowContextMenu) == 3649, "Offset mismatch for UMultiLineEditableTextBox::AllowContextMenu");
static_assert(offsetof(UMultiLineEditableTextBox, VirtualKeyboardOptions) == 3650, "Offset mismatch for UMultiLineEditableTextBox::VirtualKeyboardOptions");
static_assert(offsetof(UMultiLineEditableTextBox, VirtualKeyboardDismissAction) == 3651, "Offset mismatch for UMultiLineEditableTextBox::VirtualKeyboardDismissAction");
static_assert(offsetof(UMultiLineEditableTextBox, OnTextChanged) == 3656, "Offset mismatch for UMultiLineEditableTextBox::OnTextChanged");
static_assert(offsetof(UMultiLineEditableTextBox, OnTextCommitted) == 3672, "Offset mismatch for UMultiLineEditableTextBox::OnTextCommitted");

// /Script/UMG.NamedSlot
// Kind: Class; super: ContentWidget
class UNamedSlot
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    TArray<void*> Slots; // 0x0168 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNamedSlot, Slots) == 360, "Offset mismatch for UNamedSlot::Slots");

// /Script/UMG.NamedSlotInterface
// Kind: Class; super: Interface
class UNamedSlotInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.NativeWidgetHost
// Kind: Class; super: Widget
class UNativeWidgetHost
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

static_assert(offsetof(UNativeWidgetHost, Slot) == 48, "Offset mismatch for UNativeWidgetHost::Slot");
static_assert(offsetof(UNativeWidgetHost, bIsEnabledDelegate) == 56, "Offset mismatch for UNativeWidgetHost::bIsEnabledDelegate");
static_assert(offsetof(UNativeWidgetHost, ToolTipTextDelegate) == 68, "Offset mismatch for UNativeWidgetHost::ToolTipTextDelegate");
static_assert(offsetof(UNativeWidgetHost, ToolTipText) == 80, "Offset mismatch for UNativeWidgetHost::ToolTipText");
static_assert(offsetof(UNativeWidgetHost, ToolTipWidget) == 96, "Offset mismatch for UNativeWidgetHost::ToolTipWidget");
static_assert(offsetof(UNativeWidgetHost, ToolTipWidgetDelegate) == 104, "Offset mismatch for UNativeWidgetHost::ToolTipWidgetDelegate");
static_assert(offsetof(UNativeWidgetHost, VisibilityDelegate) == 116, "Offset mismatch for UNativeWidgetHost::VisibilityDelegate");
static_assert(offsetof(UNativeWidgetHost, RenderTransform) == 128, "Offset mismatch for UNativeWidgetHost::RenderTransform");
static_assert(offsetof(UNativeWidgetHost, RenderTransformPivot) == 184, "Offset mismatch for UNativeWidgetHost::RenderTransformPivot");
static_assert(offsetof(UNativeWidgetHost, FlowDirectionPreference) == 200, "Offset mismatch for UNativeWidgetHost::FlowDirectionPreference");
static_assert(offsetof(UNativeWidgetHost, bCreatedByConstructionScript) == 201, "Offset mismatch for UNativeWidgetHost::bCreatedByConstructionScript");
static_assert(offsetof(UNativeWidgetHost, bWrappedByComponent) == 202, "Offset mismatch for UNativeWidgetHost::bWrappedByComponent");
static_assert(offsetof(UNativeWidgetHost, Cursor) == 203, "Offset mismatch for UNativeWidgetHost::Cursor");
static_assert(offsetof(UNativeWidgetHost, Clipping) == 204, "Offset mismatch for UNativeWidgetHost::Clipping");
static_assert(offsetof(UNativeWidgetHost, Visibility) == 205, "Offset mismatch for UNativeWidgetHost::Visibility");
static_assert(offsetof(UNativeWidgetHost, PixelSnapping) == 206, "Offset mismatch for UNativeWidgetHost::PixelSnapping");
static_assert(offsetof(UNativeWidgetHost, RenderOpacity) == 208, "Offset mismatch for UNativeWidgetHost::RenderOpacity");
static_assert(offsetof(UNativeWidgetHost, AccessibleWidgetData) == 216, "Offset mismatch for UNativeWidgetHost::AccessibleWidgetData");
static_assert(offsetof(UNativeWidgetHost, Navigation) == 224, "Offset mismatch for UNativeWidgetHost::Navigation");
static_assert(offsetof(UNativeWidgetHost, NativeBindings) == 312, "Offset mismatch for UNativeWidgetHost::NativeBindings");

// /Script/UMG.NavigationUIComponent
// Kind: Class; super: UIComponent
class UNavigationUIComponent
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t OnNavigationEntered[0x4]; // 0x0058 (Size: 0x4, Type: NameProperty)
    std::uint8_t OnNavigationExited[0x4]; // 0x005C (Size: 0x4, Type: NameProperty)
    FMulticastInlineDelegate OnNavigationEnteredDelegate; // 0x0060 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnNavigationExitedDelegate; // 0x0070 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UNavigationUIComponent, OnNavigationEntered) == 88, "Offset mismatch for UNavigationUIComponent::OnNavigationEntered");
static_assert(offsetof(UNavigationUIComponent, OnNavigationExited) == 92, "Offset mismatch for UNavigationUIComponent::OnNavigationExited");
static_assert(offsetof(UNavigationUIComponent, OnNavigationEnteredDelegate) == 96, "Offset mismatch for UNavigationUIComponent::OnNavigationEnteredDelegate");
static_assert(offsetof(UNavigationUIComponent, OnNavigationExitedDelegate) == 112, "Offset mismatch for UNavigationUIComponent::OnNavigationExitedDelegate");

// /Script/UMG.Overlay
// Kind: Class; super: PanelWidget
class UOverlay
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    TArray<void*> Slots; // 0x0168 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UOverlay, Slots) == 360, "Offset mismatch for UOverlay::Slots");

// /Script/UMG.OverlaySlot
// Kind: Class; super: PanelSlot
class UOverlaySlot
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t Padding[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0050 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0051 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UOverlaySlot, Padding) == 64, "Offset mismatch for UOverlaySlot::Padding");
static_assert(offsetof(UOverlaySlot, HorizontalAlignment) == 80, "Offset mismatch for UOverlaySlot::HorizontalAlignment");
static_assert(offsetof(UOverlaySlot, VerticalAlignment) == 81, "Offset mismatch for UOverlaySlot::VerticalAlignment");

// /Script/UMG.PanelSlot
// Kind: Class; super: Visual
class UPanelSlot
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Parent; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* Content; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPanelSlot, Parent) == 40, "Offset mismatch for UPanelSlot::Parent");
static_assert(offsetof(UPanelSlot, Content) == 48, "Offset mismatch for UPanelSlot::Content");

// /Script/UMG.PanelWidget
// Kind: Class; super: Widget
class UPanelWidget
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    TArray<void*> Slots; // 0x0168 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPanelWidget, Slots) == 360, "Offset mismatch for UPanelWidget::Slots");

// /Script/UMG.PostBufferBlurUpdater
// Kind: Class; super: SlatePostBufferProcessorUpdater
class UPostBufferBlurUpdater
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float GaussianBlurStrength; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UPostBufferBlurUpdater, GaussianBlurStrength) == 48, "Offset mismatch for UPostBufferBlurUpdater::GaussianBlurStrength");

// /Script/UMG.PostBufferUpdate
// Kind: Class; super: Widget
class UPostBufferUpdate
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    std::uint8_t bUpdateOnlyPaintArea; // 0x0168 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPerformDefaultPostBufferUpdate; // 0x0169 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x016A
    TArray<void*> BuffersToUpdate; // 0x0170 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UpdateBufferInfos; // 0x0180 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPostBufferUpdate, bUpdateOnlyPaintArea) == 360, "Offset mismatch for UPostBufferUpdate::bUpdateOnlyPaintArea");
static_assert(offsetof(UPostBufferUpdate, bPerformDefaultPostBufferUpdate) == 361, "Offset mismatch for UPostBufferUpdate::bPerformDefaultPostBufferUpdate");
static_assert(offsetof(UPostBufferUpdate, BuffersToUpdate) == 368, "Offset mismatch for UPostBufferUpdate::BuffersToUpdate");
static_assert(offsetof(UPostBufferUpdate, UpdateBufferInfos) == 384, "Offset mismatch for UPostBufferUpdate::UpdateBufferInfos");

// /Script/UMG.ProgressBar
// Kind: Class; super: Widget
class UProgressBar
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t WidgetStyle[0x230]; // 0x0170 (Size: 0x230, Type: StructProperty)
    float Percent; // 0x03A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BarFillType; // 0x03A4 (Size: 0x1, Type: ByteProperty)
    std::uint8_t BarFillStyle; // 0x03A5 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bIsMarquee; // 0x03A6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x03A7
    std::uint8_t BorderPadding[0x10]; // 0x03A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t PercentDelegate[0xC]; // 0x03B8 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t FillColorAndOpacity[0x10]; // 0x03C4 (Size: 0x10, Type: StructProperty)
    FScriptDelegate FillColorAndOpacityDelegate; // 0x03D4 (Size: 0x10, Type: DelegateProperty)
};

static_assert(offsetof(UProgressBar, WidgetStyle) == 368, "Offset mismatch for UProgressBar::WidgetStyle");
static_assert(offsetof(UProgressBar, Percent) == 928, "Offset mismatch for UProgressBar::Percent");
static_assert(offsetof(UProgressBar, BarFillType) == 932, "Offset mismatch for UProgressBar::BarFillType");
static_assert(offsetof(UProgressBar, BarFillStyle) == 933, "Offset mismatch for UProgressBar::BarFillStyle");
static_assert(offsetof(UProgressBar, bIsMarquee) == 934, "Offset mismatch for UProgressBar::bIsMarquee");
static_assert(offsetof(UProgressBar, BorderPadding) == 936, "Offset mismatch for UProgressBar::BorderPadding");
static_assert(offsetof(UProgressBar, PercentDelegate) == 952, "Offset mismatch for UProgressBar::PercentDelegate");
static_assert(offsetof(UProgressBar, FillColorAndOpacity) == 964, "Offset mismatch for UProgressBar::FillColorAndOpacity");
static_assert(offsetof(UProgressBar, FillColorAndOpacityDelegate) == 980, "Offset mismatch for UProgressBar::FillColorAndOpacityDelegate");

// /Script/UMG.PropertyBinding
// Kind: Class; super: Object
class UPropertyBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> SourceObject; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t SourcePath[0x38]; // 0x0030 (Size: 0x38, Type: StructProperty)
    FName DestinationProperty; // 0x0068 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UPropertyBinding, SourceObject) == 40, "Offset mismatch for UPropertyBinding::SourceObject");
static_assert(offsetof(UPropertyBinding, SourcePath) == 48, "Offset mismatch for UPropertyBinding::SourcePath");
static_assert(offsetof(UPropertyBinding, DestinationProperty) == 104, "Offset mismatch for UPropertyBinding::DestinationProperty");

// /Script/UMG.RetainerBox
// Kind: Class; super: ContentWidget
class URetainerBox
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t bRetainRender; // 0x0180 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RenderOnInvalidation; // 0x0181 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RenderOnPhase; // 0x0182 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0183
    std::int32_t Phase; // 0x0184 (Size: 0x4, Type: IntProperty)
    std::int32_t PhaseCount; // 0x0188 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x018C
    void* EffectMaterial; // 0x0190 (Size: 0x8, Type: ObjectProperty)
    FName TextureParameter; // 0x0198 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(URetainerBox, bRetainRender) == 384, "Offset mismatch for URetainerBox::bRetainRender");
static_assert(offsetof(URetainerBox, RenderOnInvalidation) == 385, "Offset mismatch for URetainerBox::RenderOnInvalidation");
static_assert(offsetof(URetainerBox, RenderOnPhase) == 386, "Offset mismatch for URetainerBox::RenderOnPhase");
static_assert(offsetof(URetainerBox, Phase) == 388, "Offset mismatch for URetainerBox::Phase");
static_assert(offsetof(URetainerBox, PhaseCount) == 392, "Offset mismatch for URetainerBox::PhaseCount");
static_assert(offsetof(URetainerBox, EffectMaterial) == 400, "Offset mismatch for URetainerBox::EffectMaterial");
static_assert(offsetof(URetainerBox, TextureParameter) == 408, "Offset mismatch for URetainerBox::TextureParameter");

// /Script/UMG.RichTextBlock
// Kind: Class; super: TextLayoutWidget
class URichTextBlock
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::uint8_t Text[0x10]; // 0x0190 (Size: 0x10, Type: TextProperty)
    void* TextStyleSet; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DecoratorClasses; // 0x01A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x01B8
    std::uint8_t DefaultTextStyleOverride[0x2E0]; // 0x01C0 (Size: 0x2E0, Type: StructProperty)
    float MinDesiredWidth; // 0x04A0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOverrideDefaultStyle; // 0x04A4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TextTransformPolicy; // 0x04A5 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TextOverflowPolicy; // 0x04A6 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x9]; // 0x04A7
    std::uint8_t DefaultTextStyle[0x2E0]; // 0x04B0 (Size: 0x2E0, Type: StructProperty)
    TArray<void*> InstanceDecorators; // 0x0790 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(URichTextBlock, Text) == 400, "Offset mismatch for URichTextBlock::Text");
static_assert(offsetof(URichTextBlock, TextStyleSet) == 416, "Offset mismatch for URichTextBlock::TextStyleSet");
static_assert(offsetof(URichTextBlock, DecoratorClasses) == 424, "Offset mismatch for URichTextBlock::DecoratorClasses");
static_assert(offsetof(URichTextBlock, DefaultTextStyleOverride) == 448, "Offset mismatch for URichTextBlock::DefaultTextStyleOverride");
static_assert(offsetof(URichTextBlock, MinDesiredWidth) == 1184, "Offset mismatch for URichTextBlock::MinDesiredWidth");
static_assert(offsetof(URichTextBlock, bOverrideDefaultStyle) == 1188, "Offset mismatch for URichTextBlock::bOverrideDefaultStyle");
static_assert(offsetof(URichTextBlock, TextTransformPolicy) == 1189, "Offset mismatch for URichTextBlock::TextTransformPolicy");
static_assert(offsetof(URichTextBlock, TextOverflowPolicy) == 1190, "Offset mismatch for URichTextBlock::TextOverflowPolicy");
static_assert(offsetof(URichTextBlock, DefaultTextStyle) == 1200, "Offset mismatch for URichTextBlock::DefaultTextStyle");
static_assert(offsetof(URichTextBlock, InstanceDecorators) == 1936, "Offset mismatch for URichTextBlock::InstanceDecorators");

// /Script/UMG.RichTextBlockDecorator
// Kind: Class; super: Object
class URichTextBlockDecorator
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.RichTextBlockImageDecorator
// Kind: Class; super: RichTextBlockDecorator
class URichTextBlockImageDecorator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ImageSet; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URichTextBlockImageDecorator, ImageSet) == 40, "Offset mismatch for URichTextBlockImageDecorator::ImageSet");

// /Script/UMG.SafeZone
// Kind: Class; super: ContentWidget
class USafeZone
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t PadLeft; // 0x0180 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PadRight; // 0x0181 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PadTop; // 0x0182 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PadBottom; // 0x0183 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USafeZone, PadLeft) == 384, "Offset mismatch for USafeZone::PadLeft");
static_assert(offsetof(USafeZone, PadRight) == 385, "Offset mismatch for USafeZone::PadRight");
static_assert(offsetof(USafeZone, PadTop) == 386, "Offset mismatch for USafeZone::PadTop");
static_assert(offsetof(USafeZone, PadBottom) == 387, "Offset mismatch for USafeZone::PadBottom");

// /Script/UMG.SafeZoneSlot
// Kind: Class; super: PanelSlot
class USafeZoneSlot
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bIsTitleSafe; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::uint8_t SafeAreaScale[0x10]; // 0x003C (Size: 0x10, Type: StructProperty)
    std::uint8_t HAlign; // 0x004C (Size: 0x1, Type: ByteProperty)
    std::uint8_t VAlign; // 0x004D (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x2]; // 0x004E
    std::uint8_t Padding[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USafeZoneSlot, bIsTitleSafe) == 56, "Offset mismatch for USafeZoneSlot::bIsTitleSafe");
static_assert(offsetof(USafeZoneSlot, SafeAreaScale) == 60, "Offset mismatch for USafeZoneSlot::SafeAreaScale");
static_assert(offsetof(USafeZoneSlot, HAlign) == 76, "Offset mismatch for USafeZoneSlot::HAlign");
static_assert(offsetof(USafeZoneSlot, VAlign) == 77, "Offset mismatch for USafeZoneSlot::VAlign");
static_assert(offsetof(USafeZoneSlot, Padding) == 80, "Offset mismatch for USafeZoneSlot::Padding");

// /Script/UMG.ScaleBox
// Kind: Class; super: ContentWidget
class UScaleBox
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t Stretch; // 0x0180 (Size: 0x1, Type: ByteProperty)
    std::uint8_t StretchDirection; // 0x0181 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0182
    float UserSpecifiedScale; // 0x0184 (Size: 0x4, Type: FloatProperty)
    std::uint8_t IgnoreInheritedScale; // 0x0188 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UScaleBox, Stretch) == 384, "Offset mismatch for UScaleBox::Stretch");
static_assert(offsetof(UScaleBox, StretchDirection) == 385, "Offset mismatch for UScaleBox::StretchDirection");
static_assert(offsetof(UScaleBox, UserSpecifiedScale) == 388, "Offset mismatch for UScaleBox::UserSpecifiedScale");
static_assert(offsetof(UScaleBox, IgnoreInheritedScale) == 392, "Offset mismatch for UScaleBox::IgnoreInheritedScale");

// /Script/UMG.ScaleBoxComponent
// Kind: Class; super: UIComponent
class UScaleBoxComponent
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t HorizontalAlignment; // 0x0058 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0059 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Stretch; // 0x005A (Size: 0x1, Type: ByteProperty)
    std::uint8_t StretchDirection; // 0x005B (Size: 0x1, Type: ByteProperty)
    float UserSpecifiedScale; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t IgnoreInheritedScale; // 0x0060 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UScaleBoxComponent, HorizontalAlignment) == 88, "Offset mismatch for UScaleBoxComponent::HorizontalAlignment");
static_assert(offsetof(UScaleBoxComponent, VerticalAlignment) == 89, "Offset mismatch for UScaleBoxComponent::VerticalAlignment");
static_assert(offsetof(UScaleBoxComponent, Stretch) == 90, "Offset mismatch for UScaleBoxComponent::Stretch");
static_assert(offsetof(UScaleBoxComponent, StretchDirection) == 91, "Offset mismatch for UScaleBoxComponent::StretchDirection");
static_assert(offsetof(UScaleBoxComponent, UserSpecifiedScale) == 92, "Offset mismatch for UScaleBoxComponent::UserSpecifiedScale");
static_assert(offsetof(UScaleBoxComponent, IgnoreInheritedScale) == 96, "Offset mismatch for UScaleBoxComponent::IgnoreInheritedScale");

// /Script/UMG.ScaleBoxSlot
// Kind: Class; super: PanelSlot
class UScaleBoxSlot
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t HorizontalAlignment; // 0x0038 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0039 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UScaleBoxSlot, HorizontalAlignment) == 56, "Offset mismatch for UScaleBoxSlot::HorizontalAlignment");
static_assert(offsetof(UScaleBoxSlot, VerticalAlignment) == 57, "Offset mismatch for UScaleBoxSlot::VerticalAlignment");

// /Script/UMG.ScrollBar
// Kind: Class; super: Widget
class UScrollBar
{
public:
    std::uint8_t Pad_0000[0x170]; // 0x0000
    std::uint8_t WidgetStyle[0x650]; // 0x0170 (Size: 0x650, Type: StructProperty)
    std::uint8_t bAlwaysShowScrollbar; // 0x07C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAlwaysShowScrollbarTrack; // 0x07C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t orientation; // 0x07C2 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x5]; // 0x07C3
    std::uint8_t Thickness[0x10]; // 0x07C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t Padding[0x1]; // 0x07D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UScrollBar, WidgetStyle) == 368, "Offset mismatch for UScrollBar::WidgetStyle");
static_assert(offsetof(UScrollBar, bAlwaysShowScrollbar) == 1984, "Offset mismatch for UScrollBar::bAlwaysShowScrollbar");
static_assert(offsetof(UScrollBar, bAlwaysShowScrollbarTrack) == 1985, "Offset mismatch for UScrollBar::bAlwaysShowScrollbarTrack");
static_assert(offsetof(UScrollBar, orientation) == 1986, "Offset mismatch for UScrollBar::orientation");
static_assert(offsetof(UScrollBar, Thickness) == 1992, "Offset mismatch for UScrollBar::Thickness");
static_assert(offsetof(UScrollBar, Padding) == 2008, "Offset mismatch for UScrollBar::Padding");

// /Script/UMG.ScrollBox
// Kind: Class; super: PanelWidget
class UScrollBox
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    float ScrollAnimationInterpolationSpeed; // 0x0180 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableTouchScrolling; // 0x0184 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConsumePointerInput; // 0x0185 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0186
    std::uint8_t AnalogMouseWheelKey[0x18]; // 0x0188 (Size: 0x18, Type: StructProperty)
    std::uint8_t bIsFocusable; // 0x01A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0xF]; // 0x01A1
    std::uint8_t WidgetStyle[0x2F0]; // 0x01B0 (Size: 0x2F0, Type: StructProperty)
    std::uint8_t WidgetBarStyle[0x650]; // 0x04A0 (Size: 0x650, Type: StructProperty)
    std::uint8_t orientation; // 0x0AF0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ScrollBarVisibility; // 0x0AF1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ConsumeMouseWheel; // 0x0AF2 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x5]; // 0x0AF3
    std::uint8_t ScrollbarThickness[0x10]; // 0x0AF8 (Size: 0x10, Type: StructProperty)
    std::uint8_t ScrollBarPadding[0x10]; // 0x0B08 (Size: 0x10, Type: StructProperty)
    std::uint8_t AlwaysShowScrollbar; // 0x0B18 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AlwaysShowScrollbarTrack; // 0x0B19 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AllowOverscroll; // 0x0B1A (Size: 0x1, Type: BoolProperty)
    std::uint8_t BackPadScrolling; // 0x0B1B (Size: 0x1, Type: BoolProperty)
    std::uint8_t FrontPadScrolling; // 0x0B1C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAnimateWheelScrolling; // 0x0B1D (Size: 0x1, Type: BoolProperty)
    std::uint8_t NavigationDestination; // 0x0B1E (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x1]; // 0x0B1F
    float NavigationScrollPadding; // 0x0B20 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ScrollWhenFocusChanges; // 0x0B24 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAllowRightClickDragScrolling; // 0x0B25 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x2]; // 0x0B26
    float WheelScrollMultiplier; // 0x0B28 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x4]; // 0x0B2C
    FMulticastInlineDelegate OnUserScrolled; // 0x0B30 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnScrollBarVisibilityChanged; // 0x0B40 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFocusReceived; // 0x0B50 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFocusLost; // 0x0B60 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFocusUpdated; // 0x0B70 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UScrollBox, ScrollAnimationInterpolationSpeed) == 384, "Offset mismatch for UScrollBox::ScrollAnimationInterpolationSpeed");
static_assert(offsetof(UScrollBox, bEnableTouchScrolling) == 388, "Offset mismatch for UScrollBox::bEnableTouchScrolling");
static_assert(offsetof(UScrollBox, bConsumePointerInput) == 389, "Offset mismatch for UScrollBox::bConsumePointerInput");
static_assert(offsetof(UScrollBox, AnalogMouseWheelKey) == 392, "Offset mismatch for UScrollBox::AnalogMouseWheelKey");
static_assert(offsetof(UScrollBox, bIsFocusable) == 416, "Offset mismatch for UScrollBox::bIsFocusable");
static_assert(offsetof(UScrollBox, WidgetStyle) == 432, "Offset mismatch for UScrollBox::WidgetStyle");
static_assert(offsetof(UScrollBox, WidgetBarStyle) == 1184, "Offset mismatch for UScrollBox::WidgetBarStyle");
static_assert(offsetof(UScrollBox, orientation) == 2800, "Offset mismatch for UScrollBox::orientation");
static_assert(offsetof(UScrollBox, ScrollBarVisibility) == 2801, "Offset mismatch for UScrollBox::ScrollBarVisibility");
static_assert(offsetof(UScrollBox, ConsumeMouseWheel) == 2802, "Offset mismatch for UScrollBox::ConsumeMouseWheel");
static_assert(offsetof(UScrollBox, ScrollbarThickness) == 2808, "Offset mismatch for UScrollBox::ScrollbarThickness");
static_assert(offsetof(UScrollBox, ScrollBarPadding) == 2824, "Offset mismatch for UScrollBox::ScrollBarPadding");
static_assert(offsetof(UScrollBox, AlwaysShowScrollbar) == 2840, "Offset mismatch for UScrollBox::AlwaysShowScrollbar");
static_assert(offsetof(UScrollBox, AlwaysShowScrollbarTrack) == 2841, "Offset mismatch for UScrollBox::AlwaysShowScrollbarTrack");
static_assert(offsetof(UScrollBox, AllowOverscroll) == 2842, "Offset mismatch for UScrollBox::AllowOverscroll");
static_assert(offsetof(UScrollBox, BackPadScrolling) == 2843, "Offset mismatch for UScrollBox::BackPadScrolling");
static_assert(offsetof(UScrollBox, FrontPadScrolling) == 2844, "Offset mismatch for UScrollBox::FrontPadScrolling");
static_assert(offsetof(UScrollBox, bAnimateWheelScrolling) == 2845, "Offset mismatch for UScrollBox::bAnimateWheelScrolling");
static_assert(offsetof(UScrollBox, NavigationDestination) == 2846, "Offset mismatch for UScrollBox::NavigationDestination");
static_assert(offsetof(UScrollBox, NavigationScrollPadding) == 2848, "Offset mismatch for UScrollBox::NavigationScrollPadding");
static_assert(offsetof(UScrollBox, ScrollWhenFocusChanges) == 2852, "Offset mismatch for UScrollBox::ScrollWhenFocusChanges");
static_assert(offsetof(UScrollBox, bAllowRightClickDragScrolling) == 2853, "Offset mismatch for UScrollBox::bAllowRightClickDragScrolling");
static_assert(offsetof(UScrollBox, WheelScrollMultiplier) == 2856, "Offset mismatch for UScrollBox::WheelScrollMultiplier");
static_assert(offsetof(UScrollBox, OnUserScrolled) == 2864, "Offset mismatch for UScrollBox::OnUserScrolled");
static_assert(offsetof(UScrollBox, OnScrollBarVisibilityChanged) == 2880, "Offset mismatch for UScrollBox::OnScrollBarVisibilityChanged");
static_assert(offsetof(UScrollBox, OnFocusReceived) == 2896, "Offset mismatch for UScrollBox::OnFocusReceived");
static_assert(offsetof(UScrollBox, OnFocusLost) == 2912, "Offset mismatch for UScrollBox::OnFocusLost");
static_assert(offsetof(UScrollBox, OnFocusUpdated) == 2928, "Offset mismatch for UScrollBox::OnFocusUpdated");

// /Script/UMG.ScrollBoxSlot
// Kind: Class; super: PanelSlot
class UScrollBoxSlot
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Size[0x8]; // 0x0038 (Size: 0x8, Type: StructProperty)
    std::uint8_t Padding[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0050 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0051 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UScrollBoxSlot, Size) == 56, "Offset mismatch for UScrollBoxSlot::Size");
static_assert(offsetof(UScrollBoxSlot, Padding) == 64, "Offset mismatch for UScrollBoxSlot::Padding");
static_assert(offsetof(UScrollBoxSlot, HorizontalAlignment) == 80, "Offset mismatch for UScrollBoxSlot::HorizontalAlignment");
static_assert(offsetof(UScrollBoxSlot, VerticalAlignment) == 81, "Offset mismatch for UScrollBoxSlot::VerticalAlignment");

// /Script/UMG.SizeBox
// Kind: Class; super: ContentWidget
class USizeBox
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    float WidthOverride; // 0x0190 (Size: 0x4, Type: FloatProperty)
    float HeightOverride; // 0x0194 (Size: 0x4, Type: FloatProperty)
    float MinDesiredWidth; // 0x0198 (Size: 0x4, Type: FloatProperty)
    float MinDesiredHeight; // 0x019C (Size: 0x4, Type: FloatProperty)
    float MaxDesiredWidth; // 0x01A0 (Size: 0x4, Type: FloatProperty)
    float MaxDesiredHeight; // 0x01A4 (Size: 0x4, Type: FloatProperty)
    float MinAspectRatio; // 0x01A8 (Size: 0x4, Type: FloatProperty)
    float MaxAspectRatio; // 0x01AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOverride_HeightOverride; // 0x01B0 (Size: 0x1, Type: BoolProperty)
    // 0x01B0 BoolProperty bOverride_MaxAspectRatio (shared storage)
    // 0x01B0 BoolProperty bOverride_MaxDesiredHeight (shared storage)
    // 0x01B0 BoolProperty bOverride_MaxDesiredWidth (shared storage)
    // 0x01B0 BoolProperty bOverride_MinAspectRatio (shared storage)
    // 0x01B0 BoolProperty bOverride_MinDesiredHeight (shared storage)
    // 0x01B0 BoolProperty bOverride_MinDesiredWidth (shared storage)
    // 0x01B0 BoolProperty bOverride_WidthOverride (shared storage)
};

static_assert(offsetof(USizeBox, WidthOverride) == 400, "Offset mismatch for USizeBox::WidthOverride");
static_assert(offsetof(USizeBox, HeightOverride) == 404, "Offset mismatch for USizeBox::HeightOverride");
static_assert(offsetof(USizeBox, MinDesiredWidth) == 408, "Offset mismatch for USizeBox::MinDesiredWidth");
static_assert(offsetof(USizeBox, MinDesiredHeight) == 412, "Offset mismatch for USizeBox::MinDesiredHeight");
static_assert(offsetof(USizeBox, MaxDesiredWidth) == 416, "Offset mismatch for USizeBox::MaxDesiredWidth");
static_assert(offsetof(USizeBox, MaxDesiredHeight) == 420, "Offset mismatch for USizeBox::MaxDesiredHeight");
static_assert(offsetof(USizeBox, MinAspectRatio) == 424, "Offset mismatch for USizeBox::MinAspectRatio");
static_assert(offsetof(USizeBox, MaxAspectRatio) == 428, "Offset mismatch for USizeBox::MaxAspectRatio");
static_assert(offsetof(USizeBox, bOverride_HeightOverride) == 432, "Offset mismatch for USizeBox::bOverride_HeightOverride");

// /Script/UMG.SizeBoxComponent
// Kind: Class; super: UIComponent
class USizeBoxComponent
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t Padding[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0068 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0069 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x006A
    float WidthOverride; // 0x006C (Size: 0x4, Type: FloatProperty)
    float HeightOverride; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float MinDesiredWidth; // 0x0074 (Size: 0x4, Type: FloatProperty)
    float MinDesiredHeight; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float MaxDesiredWidth; // 0x007C (Size: 0x4, Type: FloatProperty)
    float MaxDesiredHeight; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float MinAspectRatio; // 0x0084 (Size: 0x4, Type: FloatProperty)
    float MaxAspectRatio; // 0x0088 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOverride_HeightOverride; // 0x008C (Size: 0x1, Type: BoolProperty)
    // 0x008C BoolProperty bOverride_MaxAspectRatio (shared storage)
    // 0x008C BoolProperty bOverride_MaxDesiredHeight (shared storage)
    // 0x008C BoolProperty bOverride_MaxDesiredWidth (shared storage)
    // 0x008C BoolProperty bOverride_MinAspectRatio (shared storage)
    // 0x008C BoolProperty bOverride_MinDesiredHeight (shared storage)
    // 0x008C BoolProperty bOverride_MinDesiredWidth (shared storage)
    // 0x008C BoolProperty bOverride_WidthOverride (shared storage)
};

static_assert(offsetof(USizeBoxComponent, Padding) == 88, "Offset mismatch for USizeBoxComponent::Padding");
static_assert(offsetof(USizeBoxComponent, HorizontalAlignment) == 104, "Offset mismatch for USizeBoxComponent::HorizontalAlignment");
static_assert(offsetof(USizeBoxComponent, VerticalAlignment) == 105, "Offset mismatch for USizeBoxComponent::VerticalAlignment");
static_assert(offsetof(USizeBoxComponent, WidthOverride) == 108, "Offset mismatch for USizeBoxComponent::WidthOverride");
static_assert(offsetof(USizeBoxComponent, HeightOverride) == 112, "Offset mismatch for USizeBoxComponent::HeightOverride");
static_assert(offsetof(USizeBoxComponent, MinDesiredWidth) == 116, "Offset mismatch for USizeBoxComponent::MinDesiredWidth");
static_assert(offsetof(USizeBoxComponent, MinDesiredHeight) == 120, "Offset mismatch for USizeBoxComponent::MinDesiredHeight");
static_assert(offsetof(USizeBoxComponent, MaxDesiredWidth) == 124, "Offset mismatch for USizeBoxComponent::MaxDesiredWidth");
static_assert(offsetof(USizeBoxComponent, MaxDesiredHeight) == 128, "Offset mismatch for USizeBoxComponent::MaxDesiredHeight");
static_assert(offsetof(USizeBoxComponent, MinAspectRatio) == 132, "Offset mismatch for USizeBoxComponent::MinAspectRatio");
static_assert(offsetof(USizeBoxComponent, MaxAspectRatio) == 136, "Offset mismatch for USizeBoxComponent::MaxAspectRatio");
static_assert(offsetof(USizeBoxComponent, bOverride_HeightOverride) == 140, "Offset mismatch for USizeBoxComponent::bOverride_HeightOverride");

// /Script/UMG.SizeBoxSlot
// Kind: Class; super: PanelSlot
class USizeBoxSlot
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Padding[0x20]; // 0x0038 (Size: 0x20, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0058 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0059 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(USizeBoxSlot, Padding) == 56, "Offset mismatch for USizeBoxSlot::Padding");
static_assert(offsetof(USizeBoxSlot, HorizontalAlignment) == 88, "Offset mismatch for USizeBoxSlot::HorizontalAlignment");
static_assert(offsetof(USizeBoxSlot, VerticalAlignment) == 89, "Offset mismatch for USizeBoxSlot::VerticalAlignment");

// /Script/UMG.SlateAccessibleWidgetData
// Kind: Class; super: Object
class USlateAccessibleWidgetData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bCanChildrenBeAccessible; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AccessibleBehavior; // 0x0029 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AccessibleSummaryBehavior; // 0x002A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x5]; // 0x002B
    std::uint8_t AccessibleText[0x10]; // 0x0030 (Size: 0x10, Type: TextProperty)
    FScriptDelegate AccessibleTextDelegate; // 0x0040 (Size: 0x10, Type: DelegateProperty)
    std::uint8_t AccessibleSummaryText[0x10]; // 0x0050 (Size: 0x10, Type: TextProperty)
    FScriptDelegate AccessibleSummaryTextDelegate; // 0x0060 (Size: 0x10, Type: DelegateProperty)
};

static_assert(offsetof(USlateAccessibleWidgetData, bCanChildrenBeAccessible) == 40, "Offset mismatch for USlateAccessibleWidgetData::bCanChildrenBeAccessible");
static_assert(offsetof(USlateAccessibleWidgetData, AccessibleBehavior) == 41, "Offset mismatch for USlateAccessibleWidgetData::AccessibleBehavior");
static_assert(offsetof(USlateAccessibleWidgetData, AccessibleSummaryBehavior) == 42, "Offset mismatch for USlateAccessibleWidgetData::AccessibleSummaryBehavior");
static_assert(offsetof(USlateAccessibleWidgetData, AccessibleText) == 48, "Offset mismatch for USlateAccessibleWidgetData::AccessibleText");
static_assert(offsetof(USlateAccessibleWidgetData, AccessibleTextDelegate) == 64, "Offset mismatch for USlateAccessibleWidgetData::AccessibleTextDelegate");
static_assert(offsetof(USlateAccessibleWidgetData, AccessibleSummaryText) == 80, "Offset mismatch for USlateAccessibleWidgetData::AccessibleSummaryText");
static_assert(offsetof(USlateAccessibleWidgetData, AccessibleSummaryTextDelegate) == 96, "Offset mismatch for USlateAccessibleWidgetData::AccessibleSummaryTextDelegate");

// /Script/UMG.SlateBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USlateBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.SlatePostBufferProcessorUpdater
// Kind: Class; super: Object
class USlatePostBufferProcessorUpdater
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bSkipBufferUpdate; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(USlatePostBufferProcessorUpdater, bSkipBufferUpdate) == 40, "Offset mismatch for USlatePostBufferProcessorUpdater::bSkipBufferUpdate");

// /Script/UMG.SlateVectorArtData
// Kind: Class; super: Object
class USlateVectorArtData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> VertexData; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IndexData; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    void* Material; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ExtentMin[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    std::uint8_t ExtentMax[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USlateVectorArtData, VertexData) == 40, "Offset mismatch for USlateVectorArtData::VertexData");
static_assert(offsetof(USlateVectorArtData, IndexData) == 56, "Offset mismatch for USlateVectorArtData::IndexData");
static_assert(offsetof(USlateVectorArtData, Material) == 72, "Offset mismatch for USlateVectorArtData::Material");
static_assert(offsetof(USlateVectorArtData, ExtentMin) == 80, "Offset mismatch for USlateVectorArtData::ExtentMin");
static_assert(offsetof(USlateVectorArtData, ExtentMax) == 96, "Offset mismatch for USlateVectorArtData::ExtentMax");

// /Script/UMG.Slider
// Kind: Class; super: Widget
class USlider
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    float Value; // 0x0168 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ValueDelegate[0xC]; // 0x016C (Size: 0xC, Type: DelegateProperty)
    float MinValue; // 0x0178 (Size: 0x4, Type: FloatProperty)
    float MaxValue; // 0x017C (Size: 0x4, Type: FloatProperty)
    std::uint8_t WidgetStyle[0x440]; // 0x0180 (Size: 0x440, Type: StructProperty)
    std::uint8_t orientation; // 0x05C0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x05C1
    std::uint8_t SliderBarColor[0x10]; // 0x05C4 (Size: 0x10, Type: StructProperty)
    std::uint8_t SliderHandleColor[0x10]; // 0x05D4 (Size: 0x10, Type: StructProperty)
    std::uint8_t IndentHandle; // 0x05E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Locked; // 0x05E5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MouseUsesStep; // 0x05E6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t RequiresControllerLock; // 0x05E7 (Size: 0x1, Type: BoolProperty)
    float StepSize; // 0x05E8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t IsFocusable; // 0x05EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPreventThrottling; // 0x05ED (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x05EE
    FMulticastInlineDelegate OnMouseCaptureBegin; // 0x05F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMouseCaptureEnd; // 0x0600 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnControllerCaptureBegin; // 0x0610 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnControllerCaptureEnd; // 0x0620 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnValueChanged; // 0x0630 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(USlider, Value) == 360, "Offset mismatch for USlider::Value");
static_assert(offsetof(USlider, ValueDelegate) == 364, "Offset mismatch for USlider::ValueDelegate");
static_assert(offsetof(USlider, MinValue) == 376, "Offset mismatch for USlider::MinValue");
static_assert(offsetof(USlider, MaxValue) == 380, "Offset mismatch for USlider::MaxValue");
static_assert(offsetof(USlider, WidgetStyle) == 384, "Offset mismatch for USlider::WidgetStyle");
static_assert(offsetof(USlider, orientation) == 1472, "Offset mismatch for USlider::orientation");
static_assert(offsetof(USlider, SliderBarColor) == 1476, "Offset mismatch for USlider::SliderBarColor");
static_assert(offsetof(USlider, SliderHandleColor) == 1492, "Offset mismatch for USlider::SliderHandleColor");
static_assert(offsetof(USlider, IndentHandle) == 1508, "Offset mismatch for USlider::IndentHandle");
static_assert(offsetof(USlider, Locked) == 1509, "Offset mismatch for USlider::Locked");
static_assert(offsetof(USlider, MouseUsesStep) == 1510, "Offset mismatch for USlider::MouseUsesStep");
static_assert(offsetof(USlider, RequiresControllerLock) == 1511, "Offset mismatch for USlider::RequiresControllerLock");
static_assert(offsetof(USlider, StepSize) == 1512, "Offset mismatch for USlider::StepSize");
static_assert(offsetof(USlider, IsFocusable) == 1516, "Offset mismatch for USlider::IsFocusable");
static_assert(offsetof(USlider, bPreventThrottling) == 1517, "Offset mismatch for USlider::bPreventThrottling");
static_assert(offsetof(USlider, OnMouseCaptureBegin) == 1520, "Offset mismatch for USlider::OnMouseCaptureBegin");
static_assert(offsetof(USlider, OnMouseCaptureEnd) == 1536, "Offset mismatch for USlider::OnMouseCaptureEnd");
static_assert(offsetof(USlider, OnControllerCaptureBegin) == 1552, "Offset mismatch for USlider::OnControllerCaptureBegin");
static_assert(offsetof(USlider, OnControllerCaptureEnd) == 1568, "Offset mismatch for USlider::OnControllerCaptureEnd");
static_assert(offsetof(USlider, OnValueChanged) == 1584, "Offset mismatch for USlider::OnValueChanged");

// /Script/UMG.Spacer
// Kind: Class; super: Widget
class USpacer
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    std::uint8_t Size[0x1]; // 0x0168 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpacer, Size) == 360, "Offset mismatch for USpacer::Size");

// /Script/UMG.SpinBox
// Kind: Class; super: Widget
class USpinBox
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    float Value; // 0x0168 (Size: 0x4, Type: FloatProperty)
    FScriptDelegate ValueDelegate; // 0x016C (Size: 0x10, Type: DelegateProperty)
    std::uint8_t Pad_0001[0x4]; // 0x017C
    std::uint8_t WidgetStyle[0x520]; // 0x0180 (Size: 0x520, Type: StructProperty)
    std::int32_t MinFractionalDigits; // 0x06A0 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxFractionalDigits; // 0x06A4 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAlwaysUsesDeltaSnap; // 0x06A8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableSlider; // 0x06A9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x06AA
    float Delta; // 0x06AC (Size: 0x4, Type: FloatProperty)
    float SliderExponent; // 0x06B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x06B4
    std::uint8_t Font[0x58]; // 0x06B8 (Size: 0x58, Type: StructProperty)
    std::uint8_t Justification; // 0x0710 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0711
    float MinDesiredWidth; // 0x0714 (Size: 0x4, Type: FloatProperty)
    std::uint8_t KeyboardType; // 0x0718 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VirtualKeyboardDismissAction; // 0x0719 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ClearKeyboardFocusOnCommit; // 0x071A (Size: 0x1, Type: BoolProperty)
    std::uint8_t SelectAllTextOnCommit; // 0x071B (Size: 0x1, Type: BoolProperty)
    std::uint8_t ForegroundColor[0x14]; // 0x071C (Size: 0x14, Type: StructProperty)
    FMulticastInlineDelegate OnValueChanged; // 0x0730 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnValueCommitted; // 0x0740 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnBeginSliderMovement; // 0x0750 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEndSliderMovement; // 0x0760 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bOverride_MaxSliderValue; // 0x0770 (Size: 0x1, Type: BoolProperty)
    // 0x0770 BoolProperty bOverride_MaxValue (shared storage)
    // 0x0770 BoolProperty bOverride_MinSliderValue (shared storage)
    // 0x0770 BoolProperty bOverride_MinValue (shared storage)
    std::uint8_t Pad_0005[0x3]; // 0x0771
    float MinValue; // 0x0774 (Size: 0x4, Type: FloatProperty)
    float MaxValue; // 0x0778 (Size: 0x4, Type: FloatProperty)
    float MinSliderValue; // 0x077C (Size: 0x4, Type: FloatProperty)
    float MaxSliderValue; // 0x0780 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USpinBox, Value) == 360, "Offset mismatch for USpinBox::Value");
static_assert(offsetof(USpinBox, ValueDelegate) == 364, "Offset mismatch for USpinBox::ValueDelegate");
static_assert(offsetof(USpinBox, WidgetStyle) == 384, "Offset mismatch for USpinBox::WidgetStyle");
static_assert(offsetof(USpinBox, MinFractionalDigits) == 1696, "Offset mismatch for USpinBox::MinFractionalDigits");
static_assert(offsetof(USpinBox, MaxFractionalDigits) == 1700, "Offset mismatch for USpinBox::MaxFractionalDigits");
static_assert(offsetof(USpinBox, bAlwaysUsesDeltaSnap) == 1704, "Offset mismatch for USpinBox::bAlwaysUsesDeltaSnap");
static_assert(offsetof(USpinBox, bEnableSlider) == 1705, "Offset mismatch for USpinBox::bEnableSlider");
static_assert(offsetof(USpinBox, Delta) == 1708, "Offset mismatch for USpinBox::Delta");
static_assert(offsetof(USpinBox, SliderExponent) == 1712, "Offset mismatch for USpinBox::SliderExponent");
static_assert(offsetof(USpinBox, Font) == 1720, "Offset mismatch for USpinBox::Font");
static_assert(offsetof(USpinBox, Justification) == 1808, "Offset mismatch for USpinBox::Justification");
static_assert(offsetof(USpinBox, MinDesiredWidth) == 1812, "Offset mismatch for USpinBox::MinDesiredWidth");
static_assert(offsetof(USpinBox, KeyboardType) == 1816, "Offset mismatch for USpinBox::KeyboardType");
static_assert(offsetof(USpinBox, VirtualKeyboardDismissAction) == 1817, "Offset mismatch for USpinBox::VirtualKeyboardDismissAction");
static_assert(offsetof(USpinBox, ClearKeyboardFocusOnCommit) == 1818, "Offset mismatch for USpinBox::ClearKeyboardFocusOnCommit");
static_assert(offsetof(USpinBox, SelectAllTextOnCommit) == 1819, "Offset mismatch for USpinBox::SelectAllTextOnCommit");
static_assert(offsetof(USpinBox, ForegroundColor) == 1820, "Offset mismatch for USpinBox::ForegroundColor");
static_assert(offsetof(USpinBox, OnValueChanged) == 1840, "Offset mismatch for USpinBox::OnValueChanged");
static_assert(offsetof(USpinBox, OnValueCommitted) == 1856, "Offset mismatch for USpinBox::OnValueCommitted");
static_assert(offsetof(USpinBox, OnBeginSliderMovement) == 1872, "Offset mismatch for USpinBox::OnBeginSliderMovement");
static_assert(offsetof(USpinBox, OnEndSliderMovement) == 1888, "Offset mismatch for USpinBox::OnEndSliderMovement");
static_assert(offsetof(USpinBox, bOverride_MaxSliderValue) == 1904, "Offset mismatch for USpinBox::bOverride_MaxSliderValue");
static_assert(offsetof(USpinBox, MinValue) == 1908, "Offset mismatch for USpinBox::MinValue");
static_assert(offsetof(USpinBox, MaxValue) == 1912, "Offset mismatch for USpinBox::MaxValue");
static_assert(offsetof(USpinBox, MinSliderValue) == 1916, "Offset mismatch for USpinBox::MinSliderValue");
static_assert(offsetof(USpinBox, MaxSliderValue) == 1920, "Offset mismatch for USpinBox::MaxSliderValue");

// /Script/UMG.StackBox
// Kind: Class; super: PanelWidget
class UStackBox
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t orientation; // 0x0180 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UStackBox, orientation) == 384, "Offset mismatch for UStackBox::orientation");

// /Script/UMG.StackBoxSlot
// Kind: Class; super: PanelSlot
class UStackBoxSlot
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Padding[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t Size[0x8]; // 0x0048 (Size: 0x8, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0050 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0051 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UStackBoxSlot, Padding) == 56, "Offset mismatch for UStackBoxSlot::Padding");
static_assert(offsetof(UStackBoxSlot, Size) == 72, "Offset mismatch for UStackBoxSlot::Size");
static_assert(offsetof(UStackBoxSlot, HorizontalAlignment) == 80, "Offset mismatch for UStackBoxSlot::HorizontalAlignment");
static_assert(offsetof(UStackBoxSlot, VerticalAlignment) == 81, "Offset mismatch for UStackBoxSlot::VerticalAlignment");

// /Script/UMG.TextBinding
// Kind: Class; super: PropertyBinding
class UTextBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> SourceObject; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t SourcePath[0x38]; // 0x0030 (Size: 0x38, Type: StructProperty)
    FName DestinationProperty; // 0x0068 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UTextBinding, SourceObject) == 40, "Offset mismatch for UTextBinding::SourceObject");
static_assert(offsetof(UTextBinding, SourcePath) == 48, "Offset mismatch for UTextBinding::SourcePath");
static_assert(offsetof(UTextBinding, DestinationProperty) == 104, "Offset mismatch for UTextBinding::DestinationProperty");

// /Script/UMG.TextBlock
// Kind: Class; super: TextLayoutWidget
class UTextBlock
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::uint8_t Text[0x10]; // 0x0190 (Size: 0x10, Type: TextProperty)
    std::uint8_t TextDelegate[0xC]; // 0x01A0 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t ColorAndOpacity[0x14]; // 0x01AC (Size: 0x14, Type: StructProperty)
    std::uint8_t ColorAndOpacityDelegate[0xC]; // 0x01C0 (Size: 0xC, Type: DelegateProperty)
    float MinDesiredWidth; // 0x01CC (Size: 0x4, Type: FloatProperty)
    std::uint8_t Font[0x60]; // 0x01D0 (Size: 0x60, Type: StructProperty)
    std::uint8_t StrikeBrush[0xB0]; // 0x0230 (Size: 0xB0, Type: StructProperty)
    std::uint8_t ShadowOffset[0x10]; // 0x02E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShadowColorAndOpacity[0x10]; // 0x02F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShadowColorAndOpacityDelegate[0xC]; // 0x0300 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t bWrapWithInvalidationPanel; // 0x030C (Size: 0x1, Type: BoolProperty)
    std::uint8_t TextTransformPolicy; // 0x030D (Size: 0x1, Type: EnumProperty)
    std::uint8_t TextOverflowPolicy; // 0x030E (Size: 0x1, Type: EnumProperty)
    std::uint8_t bSimpleTextMode; // 0x030F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UTextBlock, Text) == 400, "Offset mismatch for UTextBlock::Text");
static_assert(offsetof(UTextBlock, TextDelegate) == 416, "Offset mismatch for UTextBlock::TextDelegate");
static_assert(offsetof(UTextBlock, ColorAndOpacity) == 428, "Offset mismatch for UTextBlock::ColorAndOpacity");
static_assert(offsetof(UTextBlock, ColorAndOpacityDelegate) == 448, "Offset mismatch for UTextBlock::ColorAndOpacityDelegate");
static_assert(offsetof(UTextBlock, MinDesiredWidth) == 460, "Offset mismatch for UTextBlock::MinDesiredWidth");
static_assert(offsetof(UTextBlock, Font) == 464, "Offset mismatch for UTextBlock::Font");
static_assert(offsetof(UTextBlock, StrikeBrush) == 560, "Offset mismatch for UTextBlock::StrikeBrush");
static_assert(offsetof(UTextBlock, ShadowOffset) == 736, "Offset mismatch for UTextBlock::ShadowOffset");
static_assert(offsetof(UTextBlock, ShadowColorAndOpacity) == 752, "Offset mismatch for UTextBlock::ShadowColorAndOpacity");
static_assert(offsetof(UTextBlock, ShadowColorAndOpacityDelegate) == 768, "Offset mismatch for UTextBlock::ShadowColorAndOpacityDelegate");
static_assert(offsetof(UTextBlock, bWrapWithInvalidationPanel) == 780, "Offset mismatch for UTextBlock::bWrapWithInvalidationPanel");
static_assert(offsetof(UTextBlock, TextTransformPolicy) == 781, "Offset mismatch for UTextBlock::TextTransformPolicy");
static_assert(offsetof(UTextBlock, TextOverflowPolicy) == 782, "Offset mismatch for UTextBlock::TextOverflowPolicy");
static_assert(offsetof(UTextBlock, bSimpleTextMode) == 783, "Offset mismatch for UTextBlock::bSimpleTextMode");

// /Script/UMG.TextLayoutWidget
// Kind: Class; super: Widget
class UTextLayoutWidget
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    std::uint8_t ShapedTextOptions[0x3]; // 0x0168 (Size: 0x3, Type: StructProperty)
    std::uint8_t OnAllFontFacesFinishLoading[0x1]; // 0x016B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t Justification; // 0x016C (Size: 0x1, Type: ByteProperty)
    std::uint8_t WrappingPolicy; // 0x016D (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoWrapText; // 0x016E (Size: 0x1, Type: BoolProperty)
    std::uint8_t ApplyLineHeightToBottomLine; // 0x016F (Size: 0x1, Type: BoolProperty)
    std::uint8_t FontFacesLoadingPaintPolicy; // 0x0170 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0171
    float WrapTextAt; // 0x0174 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Margin[0x10]; // 0x0178 (Size: 0x10, Type: StructProperty)
    float LineHeightPercentage; // 0x0188 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UTextLayoutWidget, ShapedTextOptions) == 360, "Offset mismatch for UTextLayoutWidget::ShapedTextOptions");
static_assert(offsetof(UTextLayoutWidget, OnAllFontFacesFinishLoading) == 363, "Offset mismatch for UTextLayoutWidget::OnAllFontFacesFinishLoading");
static_assert(offsetof(UTextLayoutWidget, Justification) == 364, "Offset mismatch for UTextLayoutWidget::Justification");
static_assert(offsetof(UTextLayoutWidget, WrappingPolicy) == 365, "Offset mismatch for UTextLayoutWidget::WrappingPolicy");
static_assert(offsetof(UTextLayoutWidget, AutoWrapText) == 366, "Offset mismatch for UTextLayoutWidget::AutoWrapText");
static_assert(offsetof(UTextLayoutWidget, ApplyLineHeightToBottomLine) == 367, "Offset mismatch for UTextLayoutWidget::ApplyLineHeightToBottomLine");
static_assert(offsetof(UTextLayoutWidget, FontFacesLoadingPaintPolicy) == 368, "Offset mismatch for UTextLayoutWidget::FontFacesLoadingPaintPolicy");
static_assert(offsetof(UTextLayoutWidget, WrapTextAt) == 372, "Offset mismatch for UTextLayoutWidget::WrapTextAt");
static_assert(offsetof(UTextLayoutWidget, Margin) == 376, "Offset mismatch for UTextLayoutWidget::Margin");
static_assert(offsetof(UTextLayoutWidget, LineHeightPercentage) == 392, "Offset mismatch for UTextLayoutWidget::LineHeightPercentage");

// /Script/UMG.Throbber
// Kind: Class; super: Widget
class UThrobber
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    std::int32_t NumberOfPieces; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAnimateHorizontally; // 0x016C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAnimateVertically; // 0x016D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAnimateOpacity; // 0x016E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x016F
    std::uint8_t Image[0x1]; // 0x0170 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UThrobber, NumberOfPieces) == 360, "Offset mismatch for UThrobber::NumberOfPieces");
static_assert(offsetof(UThrobber, bAnimateHorizontally) == 364, "Offset mismatch for UThrobber::bAnimateHorizontally");
static_assert(offsetof(UThrobber, bAnimateVertically) == 365, "Offset mismatch for UThrobber::bAnimateVertically");
static_assert(offsetof(UThrobber, bAnimateOpacity) == 366, "Offset mismatch for UThrobber::bAnimateOpacity");
static_assert(offsetof(UThrobber, Image) == 368, "Offset mismatch for UThrobber::Image");

// /Script/UMG.TileView
// Kind: Class; super: ListView
class UTileView
{
public:
    std::uint8_t Pad_0000[0xFE0]; // 0x0000
    float EntryHeight; // 0x0FE0 (Size: 0x4, Type: FloatProperty)
    float EntryWidth; // 0x0FE4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TileAlignment; // 0x0FE8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOverrideNumItemsPerLine; // 0x0FE9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0FEA
    std::int32_t NumItemsPerLine; // 0x0FEC (Size: 0x4, Type: IntProperty)
    std::uint8_t bWrapHorizontalNavigation; // 0x0FF0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ScrollbarDisabledVisibility; // 0x0FF1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x16]; // 0x0FF2
    std::uint8_t bEntrySizeIncludesEntrySpacing; // 0x1008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UTileView, EntryHeight) == 4064, "Offset mismatch for UTileView::EntryHeight");
static_assert(offsetof(UTileView, EntryWidth) == 4068, "Offset mismatch for UTileView::EntryWidth");
static_assert(offsetof(UTileView, TileAlignment) == 4072, "Offset mismatch for UTileView::TileAlignment");
static_assert(offsetof(UTileView, bOverrideNumItemsPerLine) == 4073, "Offset mismatch for UTileView::bOverrideNumItemsPerLine");
static_assert(offsetof(UTileView, NumItemsPerLine) == 4076, "Offset mismatch for UTileView::NumItemsPerLine");
static_assert(offsetof(UTileView, bWrapHorizontalNavigation) == 4080, "Offset mismatch for UTileView::bWrapHorizontalNavigation");
static_assert(offsetof(UTileView, ScrollbarDisabledVisibility) == 4081, "Offset mismatch for UTileView::ScrollbarDisabledVisibility");
static_assert(offsetof(UTileView, bEntrySizeIncludesEntrySpacing) == 4104, "Offset mismatch for UTileView::bEntrySizeIncludesEntrySpacing");

// /Script/UMG.TreeView
// Kind: Class; super: ListView
class UTreeView
{
public:
    std::uint8_t Pad_0000[0xFF0]; // 0x0000
    FScriptDelegate BP_OnGetItemChildren; // 0x0FF0 (Size: 0x10, Type: DelegateProperty)
    FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x1000 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UTreeView, BP_OnGetItemChildren) == 4080, "Offset mismatch for UTreeView::BP_OnGetItemChildren");
static_assert(offsetof(UTreeView, BP_OnItemExpansionChanged) == 4096, "Offset mismatch for UTreeView::BP_OnItemExpansionChanged");

// /Script/UMG.UIComponent
// Kind: Class; super: Object
class UUIComponent
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TWeakObjectPtr<void> Owner; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UUIComponent, Owner) == 48, "Offset mismatch for UUIComponent::Owner");

// /Script/UMG.UIComponentContainer
// Kind: Class; super: Object
class UUIComponentContainer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Components; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UUIComponentContainer, Components) == 40, "Offset mismatch for UUIComponentContainer::Components");

// /Script/UMG.UIComponentUserWidgetExtension
// Kind: Class; super: UserWidgetExtension
class UUIComponentUserWidgetExtension
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ComponentContainer; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUIComponentUserWidgetExtension, ComponentContainer) == 40, "Offset mismatch for UUIComponentUserWidgetExtension::ComponentContainer");

// /Script/UMG.UIComponentWidgetBlueprintGeneratedClassExtension
// Kind: Class; super: WidgetBlueprintGeneratedClassExtension
class UUIComponentWidgetBlueprintGeneratedClassExtension
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ComponentContainer; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUIComponentWidgetBlueprintGeneratedClassExtension, ComponentContainer) == 40, "Offset mismatch for UUIComponentWidgetBlueprintGeneratedClassExtension::ComponentContainer");

// /Script/UMG.UMGSequencePlayer
// Kind: Class; super: Object
class UUMGSequencePlayer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.UMGSequenceTickManager
// Kind: Class; super: Object
class UUMGSequenceTickManager
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> WeakUserWidgetData; // 0x0028 (Size: 0x10, Type: MapProperty)
    TArray<void*> PendingUserWidgets; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    void* Linker; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUMGSequenceTickManager, WeakUserWidgetData) == 40, "Offset mismatch for UUMGSequenceTickManager::WeakUserWidgetData");
static_assert(offsetof(UUMGSequenceTickManager, PendingUserWidgets) == 56, "Offset mismatch for UUMGSequenceTickManager::PendingUserWidgets");
static_assert(offsetof(UUMGSequenceTickManager, Linker) == 72, "Offset mismatch for UUMGSequenceTickManager::Linker");

// /Script/UMG.UniformGridPanel
// Kind: Class; super: PanelWidget
class UUniformGridPanel
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t SlotPadding[0x10]; // 0x0180 (Size: 0x10, Type: StructProperty)
    float MinDesiredSlotWidth; // 0x0190 (Size: 0x4, Type: FloatProperty)
    float MinDesiredSlotHeight; // 0x0194 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UUniformGridPanel, SlotPadding) == 384, "Offset mismatch for UUniformGridPanel::SlotPadding");
static_assert(offsetof(UUniformGridPanel, MinDesiredSlotWidth) == 400, "Offset mismatch for UUniformGridPanel::MinDesiredSlotWidth");
static_assert(offsetof(UUniformGridPanel, MinDesiredSlotHeight) == 404, "Offset mismatch for UUniformGridPanel::MinDesiredSlotHeight");

// /Script/UMG.UniformGridSlot
// Kind: Class; super: PanelSlot
class UUniformGridSlot
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t HorizontalAlignment; // 0x0038 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0039 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x003A
    std::int32_t Row; // 0x003C (Size: 0x4, Type: IntProperty)
    std::int32_t Column; // 0x0040 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UUniformGridSlot, HorizontalAlignment) == 56, "Offset mismatch for UUniformGridSlot::HorizontalAlignment");
static_assert(offsetof(UUniformGridSlot, VerticalAlignment) == 57, "Offset mismatch for UUniformGridSlot::VerticalAlignment");
static_assert(offsetof(UUniformGridSlot, Row) == 60, "Offset mismatch for UUniformGridSlot::Row");
static_assert(offsetof(UUniformGridSlot, Column) == 64, "Offset mismatch for UUniformGridSlot::Column");

// /Script/UMG.UserListEntry
// Kind: Class; super: Interface
class UUserListEntry
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.UserListEntryLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UUserListEntryLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.UserObjectListEntry
// Kind: Class; super: UserListEntry
class UUserObjectListEntry
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.UserObjectListEntryLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UUserObjectListEntryLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.UserWidget
// Kind: Class; super: Widget
class UUserWidget
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t ColorAndOpacity[0x10]; // 0x01A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ColorAndOpacityDelegate[0xC]; // 0x01B0 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t ForegroundColor[0x14]; // 0x01BC (Size: 0x14, Type: StructProperty)
    FScriptDelegate ForegroundColorDelegate; // 0x01D0 (Size: 0x10, Type: DelegateProperty)
    FMulticastInlineDelegate OnVisibilityChanged; // 0x01E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x30]; // 0x01F0
    std::uint8_t Padding[0x10]; // 0x0220 (Size: 0x10, Type: StructProperty)
    std::int32_t Priority; // 0x0230 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAutomaticallyRegisterInputOnConstruction; // 0x0234 (Size: 0x1, Type: BoolProperty)
    // 0x0234 BoolProperty bIsFocusable (shared storage)
    // 0x0234 BoolProperty bStopAction (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0235
    TArray<void*> QueuedWidgetAnimationTransitions; // 0x0238 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveSequencePlayers; // 0x0248 (Size: 0x10, Type: ArrayProperty)
    void* AnimationTickManager; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> StoppedSequencePlayers; // 0x0260 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x18]; // 0x0270
    TArray<void*> NamedSlotBindings; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Extensions; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    void* WidgetTree; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasScriptImplementedPaint; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bHasScriptImplementedTick (shared storage)
    std::uint8_t Pad_0004[0x17]; // 0x02B1
    std::uint8_t TickFrequency; // 0x02C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x02C9
    std::uint8_t DesiredFocusWidget[0xC]; // 0x02CC (Size: 0xC, Type: StructProperty)
    void* InputComponent; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AnimationCallbacks; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UUserWidget, ColorAndOpacity) == 416, "Offset mismatch for UUserWidget::ColorAndOpacity");
static_assert(offsetof(UUserWidget, ColorAndOpacityDelegate) == 432, "Offset mismatch for UUserWidget::ColorAndOpacityDelegate");
static_assert(offsetof(UUserWidget, ForegroundColor) == 444, "Offset mismatch for UUserWidget::ForegroundColor");
static_assert(offsetof(UUserWidget, ForegroundColorDelegate) == 464, "Offset mismatch for UUserWidget::ForegroundColorDelegate");
static_assert(offsetof(UUserWidget, OnVisibilityChanged) == 480, "Offset mismatch for UUserWidget::OnVisibilityChanged");
static_assert(offsetof(UUserWidget, Padding) == 544, "Offset mismatch for UUserWidget::Padding");
static_assert(offsetof(UUserWidget, Priority) == 560, "Offset mismatch for UUserWidget::Priority");
static_assert(offsetof(UUserWidget, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UUserWidget::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UUserWidget, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UUserWidget::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UUserWidget, ActiveSequencePlayers) == 584, "Offset mismatch for UUserWidget::ActiveSequencePlayers");
static_assert(offsetof(UUserWidget, AnimationTickManager) == 600, "Offset mismatch for UUserWidget::AnimationTickManager");
static_assert(offsetof(UUserWidget, StoppedSequencePlayers) == 608, "Offset mismatch for UUserWidget::StoppedSequencePlayers");
static_assert(offsetof(UUserWidget, NamedSlotBindings) == 648, "Offset mismatch for UUserWidget::NamedSlotBindings");
static_assert(offsetof(UUserWidget, Extensions) == 664, "Offset mismatch for UUserWidget::Extensions");
static_assert(offsetof(UUserWidget, WidgetTree) == 680, "Offset mismatch for UUserWidget::WidgetTree");
static_assert(offsetof(UUserWidget, bHasScriptImplementedPaint) == 688, "Offset mismatch for UUserWidget::bHasScriptImplementedPaint");
static_assert(offsetof(UUserWidget, TickFrequency) == 712, "Offset mismatch for UUserWidget::TickFrequency");
static_assert(offsetof(UUserWidget, DesiredFocusWidget) == 716, "Offset mismatch for UUserWidget::DesiredFocusWidget");
static_assert(offsetof(UUserWidget, InputComponent) == 728, "Offset mismatch for UUserWidget::InputComponent");
static_assert(offsetof(UUserWidget, AnimationCallbacks) == 736, "Offset mismatch for UUserWidget::AnimationCallbacks");

// /Script/UMG.UserWidgetBlueprint
// Kind: Class; super: Blueprint
class UUserWidgetBlueprint
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    void* ParentClass; // 0x0058 (Size: 0x8, Type: ClassProperty)
    std::uint8_t BlueprintType; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bHasBeenRegenerated; // 0x0061 (Size: 0x1, Type: BoolProperty)
    // 0x0061 BoolProperty bIsRegeneratingOnLoad (shared storage)
    // 0x0061 BoolProperty bRecompileOnLoad (shared storage)
    std::uint8_t Pad_0001[0x2]; // 0x0062
    std::int32_t BlueprintSystemVersion; // 0x0064 (Size: 0x4, Type: IntProperty)
    void* SimpleConstructionScript; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ComponentTemplates; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Timelines; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ComponentClassOverrides; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    void* InheritableComponentHandler; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUserWidgetBlueprint, ParentClass) == 88, "Offset mismatch for UUserWidgetBlueprint::ParentClass");
static_assert(offsetof(UUserWidgetBlueprint, BlueprintType) == 96, "Offset mismatch for UUserWidgetBlueprint::BlueprintType");
static_assert(offsetof(UUserWidgetBlueprint, bHasBeenRegenerated) == 97, "Offset mismatch for UUserWidgetBlueprint::bHasBeenRegenerated");
static_assert(offsetof(UUserWidgetBlueprint, BlueprintSystemVersion) == 100, "Offset mismatch for UUserWidgetBlueprint::BlueprintSystemVersion");
static_assert(offsetof(UUserWidgetBlueprint, SimpleConstructionScript) == 104, "Offset mismatch for UUserWidgetBlueprint::SimpleConstructionScript");
static_assert(offsetof(UUserWidgetBlueprint, ComponentTemplates) == 112, "Offset mismatch for UUserWidgetBlueprint::ComponentTemplates");
static_assert(offsetof(UUserWidgetBlueprint, Timelines) == 128, "Offset mismatch for UUserWidgetBlueprint::Timelines");
static_assert(offsetof(UUserWidgetBlueprint, ComponentClassOverrides) == 144, "Offset mismatch for UUserWidgetBlueprint::ComponentClassOverrides");
static_assert(offsetof(UUserWidgetBlueprint, InheritableComponentHandler) == 160, "Offset mismatch for UUserWidgetBlueprint::InheritableComponentHandler");

// /Script/UMG.UserWidgetExtension
// Kind: Class; super: Object
class UUserWidgetExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.UserWidgetFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UUserWidgetFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.VerticalBox
// Kind: Class; super: PanelWidget
class UVerticalBox
{
public:
    std::uint8_t Pad_0000[0x168]; // 0x0000
    TArray<void*> Slots; // 0x0168 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVerticalBox, Slots) == 360, "Offset mismatch for UVerticalBox::Slots");

// /Script/UMG.VerticalBoxSlot
// Kind: Class; super: PanelSlot
class UVerticalBoxSlot
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Size[0x8]; // 0x0038 (Size: 0x8, Type: StructProperty)
    std::uint8_t Padding[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0050 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0051 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UVerticalBoxSlot, Size) == 56, "Offset mismatch for UVerticalBoxSlot::Size");
static_assert(offsetof(UVerticalBoxSlot, Padding) == 64, "Offset mismatch for UVerticalBoxSlot::Padding");
static_assert(offsetof(UVerticalBoxSlot, HorizontalAlignment) == 80, "Offset mismatch for UVerticalBoxSlot::HorizontalAlignment");
static_assert(offsetof(UVerticalBoxSlot, VerticalAlignment) == 81, "Offset mismatch for UVerticalBoxSlot::VerticalAlignment");

// /Script/UMG.Viewport
// Kind: Class; super: ContentWidget
class UViewport
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t BackgroundColor[0x10]; // 0x0180 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsEditorPreview; // 0x0190 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UViewport, BackgroundColor) == 384, "Offset mismatch for UViewport::BackgroundColor");
static_assert(offsetof(UViewport, bIsEditorPreview) == 400, "Offset mismatch for UViewport::bIsEditorPreview");

// /Script/UMG.VisibilityBinding
// Kind: Class; super: PropertyBinding
class UVisibilityBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> SourceObject; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t SourcePath[0x38]; // 0x0030 (Size: 0x38, Type: StructProperty)
    FName DestinationProperty; // 0x0068 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UVisibilityBinding, SourceObject) == 40, "Offset mismatch for UVisibilityBinding::SourceObject");
static_assert(offsetof(UVisibilityBinding, SourcePath) == 48, "Offset mismatch for UVisibilityBinding::SourcePath");
static_assert(offsetof(UVisibilityBinding, DestinationProperty) == 104, "Offset mismatch for UVisibilityBinding::DestinationProperty");

// /Script/UMG.Visual
// Kind: Class; super: Object
class UVisual
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.Widget
// Kind: Class; super: Visual
class UWidget
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

static_assert(offsetof(UWidget, Slot) == 48, "Offset mismatch for UWidget::Slot");
static_assert(offsetof(UWidget, bIsEnabledDelegate) == 56, "Offset mismatch for UWidget::bIsEnabledDelegate");
static_assert(offsetof(UWidget, ToolTipTextDelegate) == 68, "Offset mismatch for UWidget::ToolTipTextDelegate");
static_assert(offsetof(UWidget, ToolTipText) == 80, "Offset mismatch for UWidget::ToolTipText");
static_assert(offsetof(UWidget, ToolTipWidget) == 96, "Offset mismatch for UWidget::ToolTipWidget");
static_assert(offsetof(UWidget, ToolTipWidgetDelegate) == 104, "Offset mismatch for UWidget::ToolTipWidgetDelegate");
static_assert(offsetof(UWidget, VisibilityDelegate) == 116, "Offset mismatch for UWidget::VisibilityDelegate");
static_assert(offsetof(UWidget, RenderTransform) == 128, "Offset mismatch for UWidget::RenderTransform");
static_assert(offsetof(UWidget, RenderTransformPivot) == 184, "Offset mismatch for UWidget::RenderTransformPivot");
static_assert(offsetof(UWidget, FlowDirectionPreference) == 200, "Offset mismatch for UWidget::FlowDirectionPreference");
static_assert(offsetof(UWidget, bCreatedByConstructionScript) == 201, "Offset mismatch for UWidget::bCreatedByConstructionScript");
static_assert(offsetof(UWidget, bWrappedByComponent) == 202, "Offset mismatch for UWidget::bWrappedByComponent");
static_assert(offsetof(UWidget, Cursor) == 203, "Offset mismatch for UWidget::Cursor");
static_assert(offsetof(UWidget, Clipping) == 204, "Offset mismatch for UWidget::Clipping");
static_assert(offsetof(UWidget, Visibility) == 205, "Offset mismatch for UWidget::Visibility");
static_assert(offsetof(UWidget, PixelSnapping) == 206, "Offset mismatch for UWidget::PixelSnapping");
static_assert(offsetof(UWidget, RenderOpacity) == 208, "Offset mismatch for UWidget::RenderOpacity");
static_assert(offsetof(UWidget, AccessibleWidgetData) == 216, "Offset mismatch for UWidget::AccessibleWidgetData");
static_assert(offsetof(UWidget, Navigation) == 224, "Offset mismatch for UWidget::Navigation");
static_assert(offsetof(UWidget, NativeBindings) == 312, "Offset mismatch for UWidget::NativeBindings");

// /Script/UMG.WidgetAnimation
// Kind: Class; super: MovieSceneSequence
class UWidgetAnimation
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* MovieScene; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AnimationBindings; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bLegacyFinishOnStop; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0081
    FString DisplayLabel; // 0x0088 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UWidgetAnimation, MovieScene) == 104, "Offset mismatch for UWidgetAnimation::MovieScene");
static_assert(offsetof(UWidgetAnimation, AnimationBindings) == 112, "Offset mismatch for UWidgetAnimation::AnimationBindings");
static_assert(offsetof(UWidgetAnimation, bLegacyFinishOnStop) == 128, "Offset mismatch for UWidgetAnimation::bLegacyFinishOnStop");
static_assert(offsetof(UWidgetAnimation, DisplayLabel) == 136, "Offset mismatch for UWidgetAnimation::DisplayLabel");

// /Script/UMG.WidgetAnimationDelegateBinding
// Kind: Class; super: DynamicBlueprintBinding
class UWidgetAnimationDelegateBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> WidgetAnimationDelegateBindings; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UWidgetAnimationDelegateBinding, WidgetAnimationDelegateBindings) == 40, "Offset mismatch for UWidgetAnimationDelegateBinding::WidgetAnimationDelegateBindings");

// /Script/UMG.WidgetAnimationHandleFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UWidgetAnimationHandleFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.WidgetAnimationPlayCallbackProxy
// Kind: Class; super: Object
class UWidgetAnimationPlayCallbackProxy
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate Finished; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UWidgetAnimationPlayCallbackProxy, Finished) == 40, "Offset mismatch for UWidgetAnimationPlayCallbackProxy::Finished");

// /Script/UMG.WidgetAnimationTeardownTestWidget
// Kind: Class; super: UserWidget
class UWidgetAnimationTeardownTestWidget
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    std::uint8_t ColorAndOpacity[0x10]; // 0x01A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ColorAndOpacityDelegate[0xC]; // 0x01B0 (Size: 0xC, Type: DelegateProperty)
    std::uint8_t ForegroundColor[0x14]; // 0x01BC (Size: 0x14, Type: StructProperty)
    FScriptDelegate ForegroundColorDelegate; // 0x01D0 (Size: 0x10, Type: DelegateProperty)
    FMulticastInlineDelegate OnVisibilityChanged; // 0x01E0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x30]; // 0x01F0
    std::uint8_t Padding[0x10]; // 0x0220 (Size: 0x10, Type: StructProperty)
    std::int32_t Priority; // 0x0230 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAutomaticallyRegisterInputOnConstruction; // 0x0234 (Size: 0x1, Type: BoolProperty)
    // 0x0234 BoolProperty bIsFocusable (shared storage)
    // 0x0234 BoolProperty bStopAction (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0235
    TArray<void*> QueuedWidgetAnimationTransitions; // 0x0238 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ActiveSequencePlayers; // 0x0248 (Size: 0x10, Type: ArrayProperty)
    void* AnimationTickManager; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> StoppedSequencePlayers; // 0x0260 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x18]; // 0x0270
    TArray<void*> NamedSlotBindings; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Extensions; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    void* WidgetTree; // 0x02A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasScriptImplementedPaint; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bHasScriptImplementedTick (shared storage)
    std::uint8_t Pad_0004[0x17]; // 0x02B1
    std::uint8_t TickFrequency; // 0x02C8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x02C9
    std::uint8_t DesiredFocusWidget[0xC]; // 0x02CC (Size: 0xC, Type: StructProperty)
    void* InputComponent; // 0x02D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AnimationCallbacks; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UWidgetAnimationTeardownTestWidget, ColorAndOpacity) == 416, "Offset mismatch for UWidgetAnimationTeardownTestWidget::ColorAndOpacity");
static_assert(offsetof(UWidgetAnimationTeardownTestWidget, ColorAndOpacityDelegate) == 432, "Offset mismatch for UWidgetAnimationTeardownTestWidget::ColorAndOpacityDelegate");
static_assert(offsetof(UWidgetAnimationTeardownTestWidget, ForegroundColor) == 444, "Offset mismatch for UWidgetAnimationTeardownTestWidget::ForegroundColor");
static_assert(offsetof(UWidgetAnimationTeardownTestWidget, ForegroundColorDelegate) == 464, "Offset mismatch for UWidgetAnimationTeardownTestWidget::ForegroundColorDelegate");
static_assert(offsetof(UWidgetAnimationTeardownTestWidget, OnVisibilityChanged) == 480, "Offset mismatch for UWidgetAnimationTeardownTestWidget::OnVisibilityChanged");
static_assert(offsetof(UWidgetAnimationTeardownTestWidget, Padding) == 544, "Offset mismatch for UWidgetAnimationTeardownTestWidget::Padding");
static_assert(offsetof(UWidgetAnimationTeardownTestWidget, Priority) == 560, "Offset mismatch for UWidgetAnimationTeardownTestWidget::Priority");
static_assert(offsetof(UWidgetAnimationTeardownTestWidget, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UWidgetAnimationTeardownTestWidget::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UWidgetAnimationTeardownTestWidget, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UWidgetAnimationTeardownTestWidget::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UWidgetAnimationTeardownTestWidget, ActiveSequencePlayers) == 584, "Offset mismatch for UWidgetAnimationTeardownTestWidget::ActiveSequencePlayers");
static_assert(offsetof(UWidgetAnimationTeardownTestWidget, AnimationTickManager) == 600, "Offset mismatch for UWidgetAnimationTeardownTestWidget::AnimationTickManager");
static_assert(offsetof(UWidgetAnimationTeardownTestWidget, StoppedSequencePlayers) == 608, "Offset mismatch for UWidgetAnimationTeardownTestWidget::StoppedSequencePlayers");
static_assert(offsetof(UWidgetAnimationTeardownTestWidget, NamedSlotBindings) == 648, "Offset mismatch for UWidgetAnimationTeardownTestWidget::NamedSlotBindings");
static_assert(offsetof(UWidgetAnimationTeardownTestWidget, Extensions) == 664, "Offset mismatch for UWidgetAnimationTeardownTestWidget::Extensions");
static_assert(offsetof(UWidgetAnimationTeardownTestWidget, WidgetTree) == 680, "Offset mismatch for UWidgetAnimationTeardownTestWidget::WidgetTree");
static_assert(offsetof(UWidgetAnimationTeardownTestWidget, bHasScriptImplementedPaint) == 688, "Offset mismatch for UWidgetAnimationTeardownTestWidget::bHasScriptImplementedPaint");
static_assert(offsetof(UWidgetAnimationTeardownTestWidget, TickFrequency) == 712, "Offset mismatch for UWidgetAnimationTeardownTestWidget::TickFrequency");
static_assert(offsetof(UWidgetAnimationTeardownTestWidget, DesiredFocusWidget) == 716, "Offset mismatch for UWidgetAnimationTeardownTestWidget::DesiredFocusWidget");
static_assert(offsetof(UWidgetAnimationTeardownTestWidget, InputComponent) == 728, "Offset mismatch for UWidgetAnimationTeardownTestWidget::InputComponent");
static_assert(offsetof(UWidgetAnimationTeardownTestWidget, AnimationCallbacks) == 736, "Offset mismatch for UWidgetAnimationTeardownTestWidget::AnimationCallbacks");

// /Script/UMG.WidgetBinaryStateRegistration
// Kind: Class; super: Object
class UWidgetBinaryStateRegistration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.WidgetBinding
// Kind: Class; super: PropertyBinding
class UWidgetBinding
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> SourceObject; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t SourcePath[0x38]; // 0x0030 (Size: 0x38, Type: StructProperty)
    FName DestinationProperty; // 0x0068 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UWidgetBinding, SourceObject) == 40, "Offset mismatch for UWidgetBinding::SourceObject");
static_assert(offsetof(UWidgetBinding, SourcePath) == 48, "Offset mismatch for UWidgetBinding::SourcePath");
static_assert(offsetof(UWidgetBinding, DestinationProperty) == 104, "Offset mismatch for UWidgetBinding::DestinationProperty");

// /Script/UMG.WidgetBlueprintGeneratedClass
// Kind: Class; super: BlueprintGeneratedClass
class UWidgetBlueprintGeneratedClass
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    void* WidgetTree; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Extensions; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCanCallInitializedWithoutPlayerContext; // 0x0298 (Size: 0x1, Type: BoolProperty)
    // 0x0298 BoolProperty bClassRequiresNativeTick (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0299
    TArray<void*> Bindings; // 0x02A0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Animations; // 0x02B0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> NamedSlots; // 0x02C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AvailableNamedSlots; // 0x02D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InstanceNamedSlots; // 0x02E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UWidgetBlueprintGeneratedClass, WidgetTree) == 640, "Offset mismatch for UWidgetBlueprintGeneratedClass::WidgetTree");
static_assert(offsetof(UWidgetBlueprintGeneratedClass, Extensions) == 648, "Offset mismatch for UWidgetBlueprintGeneratedClass::Extensions");
static_assert(offsetof(UWidgetBlueprintGeneratedClass, bCanCallInitializedWithoutPlayerContext) == 664, "Offset mismatch for UWidgetBlueprintGeneratedClass::bCanCallInitializedWithoutPlayerContext");
static_assert(offsetof(UWidgetBlueprintGeneratedClass, Bindings) == 672, "Offset mismatch for UWidgetBlueprintGeneratedClass::Bindings");
static_assert(offsetof(UWidgetBlueprintGeneratedClass, Animations) == 688, "Offset mismatch for UWidgetBlueprintGeneratedClass::Animations");
static_assert(offsetof(UWidgetBlueprintGeneratedClass, NamedSlots) == 704, "Offset mismatch for UWidgetBlueprintGeneratedClass::NamedSlots");
static_assert(offsetof(UWidgetBlueprintGeneratedClass, AvailableNamedSlots) == 720, "Offset mismatch for UWidgetBlueprintGeneratedClass::AvailableNamedSlots");
static_assert(offsetof(UWidgetBlueprintGeneratedClass, InstanceNamedSlots) == 736, "Offset mismatch for UWidgetBlueprintGeneratedClass::InstanceNamedSlots");

// /Script/UMG.WidgetBlueprintGeneratedClassExtension
// Kind: Class; super: Object
class UWidgetBlueprintGeneratedClassExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.WidgetBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UWidgetBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.WidgetCheckedStateRegistration
// Kind: Class; super: WidgetEnumStateRegistration
class UWidgetCheckedStateRegistration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.WidgetComponent
// Kind: Class; super: MeshComponent
class UWidgetComponent
{
public:
    std::uint8_t Pad_0000[0x5E8]; // 0x0000
    std::uint8_t Space; // 0x05E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TimingPolicy; // 0x05E9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x6]; // 0x05EA
    void* WidgetClass; // 0x05F0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t DrawSize[0x8]; // 0x05F8 (Size: 0x8, Type: StructProperty)
    float RenderTargetPixelsPerCentimeter; // 0x0600 (Size: 0x4, Type: FloatProperty)
    float SlateLayoutScale; // 0x0604 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bManuallyRedraw; // 0x0608 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRedrawRequested; // 0x0609 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x060A
    float RedrawTime; // 0x060C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0610
    std::uint8_t CurrentDrawSize[0x8]; // 0x0618 (Size: 0x8, Type: StructProperty)
    std::uint8_t bUseInvalidationInWorldSpace; // 0x0620 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawAtDesiredSize; // 0x0621 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x6]; // 0x0622
    std::uint8_t Pivot[0x10]; // 0x0628 (Size: 0x10, Type: StructProperty)
    std::uint8_t bReceiveHardwareInput; // 0x0638 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWindowFocusable; // 0x0639 (Size: 0x1, Type: BoolProperty)
    std::uint8_t WindowVisibility; // 0x063A (Size: 0x1, Type: EnumProperty)
    std::uint8_t bApplyGammaCorrection; // 0x063B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x4]; // 0x063C
    void* OwnerPlayer; // 0x0640 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BackgroundColor[0x10]; // 0x0648 (Size: 0x10, Type: StructProperty)
    std::uint8_t TintColorAndOpacity[0x10]; // 0x0658 (Size: 0x10, Type: StructProperty)
    float OpacityFromTexture; // 0x0668 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BlendMode; // 0x066C (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOverrideRenderTargetFormat; // 0x066D (Size: 0x1, Type: BoolProperty)
    std::uint8_t RenderTargetFormatOverride; // 0x066E (Size: 0x1, Type: ByteProperty)
    std::uint8_t bIsTwoSided; // 0x066F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOutputDepthAndVelocity; // 0x0670 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWriteDepthPrepass; // 0x0671 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x2]; // 0x0672
    float DepthPrepassOpacityThreshold; // 0x0674 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TickWhenOffscreen; // 0x0678 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x7]; // 0x0679
    void* BodySetup; // 0x0680 (Size: 0x8, Type: ObjectProperty)
    void* TranslucentMaterial; // 0x0688 (Size: 0x8, Type: ObjectProperty)
    void* TranslucentMaterial_OneSided; // 0x0690 (Size: 0x8, Type: ObjectProperty)
    void* TranslucentMaterial_OutputDepthAndVelocity; // 0x0698 (Size: 0x8, Type: ObjectProperty)
    void* TranslucentMaterial_OutputDepthAndVelocity_OneSided; // 0x06A0 (Size: 0x8, Type: ObjectProperty)
    void* OpaqueMaterial; // 0x06A8 (Size: 0x8, Type: ObjectProperty)
    void* OpaqueMaterial_OneSided; // 0x06B0 (Size: 0x8, Type: ObjectProperty)
    void* MaskedMaterial; // 0x06B8 (Size: 0x8, Type: ObjectProperty)
    void* MaskedMaterial_OneSided; // 0x06C0 (Size: 0x8, Type: ObjectProperty)
    void* DepthPrepassMaterialInstance; // 0x06C8 (Size: 0x8, Type: ObjectProperty)
    void* RenderTarget; // 0x06D0 (Size: 0x8, Type: ObjectProperty)
    void* MaterialInstance; // 0x06D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAddedToScreen; // 0x06E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEditTimeUsable; // 0x06E1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x2]; // 0x06E2
    std::uint8_t SharedLayerName[0x4]; // 0x06E4 (Size: 0x4, Type: NameProperty)
    std::int32_t LayerZOrder; // 0x06E8 (Size: 0x4, Type: IntProperty)
    std::uint8_t GeometryMode; // 0x06EC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0009[0x3]; // 0x06ED
    double CylinderArcAngle; // 0x06F0 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t TickMode; // 0x06F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000A[0x2F]; // 0x06F9
    void* Widget; // 0x0728 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWidgetComponent, Space) == 1512, "Offset mismatch for UWidgetComponent::Space");
static_assert(offsetof(UWidgetComponent, TimingPolicy) == 1513, "Offset mismatch for UWidgetComponent::TimingPolicy");
static_assert(offsetof(UWidgetComponent, WidgetClass) == 1520, "Offset mismatch for UWidgetComponent::WidgetClass");
static_assert(offsetof(UWidgetComponent, DrawSize) == 1528, "Offset mismatch for UWidgetComponent::DrawSize");
static_assert(offsetof(UWidgetComponent, RenderTargetPixelsPerCentimeter) == 1536, "Offset mismatch for UWidgetComponent::RenderTargetPixelsPerCentimeter");
static_assert(offsetof(UWidgetComponent, SlateLayoutScale) == 1540, "Offset mismatch for UWidgetComponent::SlateLayoutScale");
static_assert(offsetof(UWidgetComponent, bManuallyRedraw) == 1544, "Offset mismatch for UWidgetComponent::bManuallyRedraw");
static_assert(offsetof(UWidgetComponent, bRedrawRequested) == 1545, "Offset mismatch for UWidgetComponent::bRedrawRequested");
static_assert(offsetof(UWidgetComponent, RedrawTime) == 1548, "Offset mismatch for UWidgetComponent::RedrawTime");
static_assert(offsetof(UWidgetComponent, CurrentDrawSize) == 1560, "Offset mismatch for UWidgetComponent::CurrentDrawSize");
static_assert(offsetof(UWidgetComponent, bUseInvalidationInWorldSpace) == 1568, "Offset mismatch for UWidgetComponent::bUseInvalidationInWorldSpace");
static_assert(offsetof(UWidgetComponent, bDrawAtDesiredSize) == 1569, "Offset mismatch for UWidgetComponent::bDrawAtDesiredSize");
static_assert(offsetof(UWidgetComponent, Pivot) == 1576, "Offset mismatch for UWidgetComponent::Pivot");
static_assert(offsetof(UWidgetComponent, bReceiveHardwareInput) == 1592, "Offset mismatch for UWidgetComponent::bReceiveHardwareInput");
static_assert(offsetof(UWidgetComponent, bWindowFocusable) == 1593, "Offset mismatch for UWidgetComponent::bWindowFocusable");
static_assert(offsetof(UWidgetComponent, WindowVisibility) == 1594, "Offset mismatch for UWidgetComponent::WindowVisibility");
static_assert(offsetof(UWidgetComponent, bApplyGammaCorrection) == 1595, "Offset mismatch for UWidgetComponent::bApplyGammaCorrection");
static_assert(offsetof(UWidgetComponent, OwnerPlayer) == 1600, "Offset mismatch for UWidgetComponent::OwnerPlayer");
static_assert(offsetof(UWidgetComponent, BackgroundColor) == 1608, "Offset mismatch for UWidgetComponent::BackgroundColor");
static_assert(offsetof(UWidgetComponent, TintColorAndOpacity) == 1624, "Offset mismatch for UWidgetComponent::TintColorAndOpacity");
static_assert(offsetof(UWidgetComponent, OpacityFromTexture) == 1640, "Offset mismatch for UWidgetComponent::OpacityFromTexture");
static_assert(offsetof(UWidgetComponent, BlendMode) == 1644, "Offset mismatch for UWidgetComponent::BlendMode");
static_assert(offsetof(UWidgetComponent, bOverrideRenderTargetFormat) == 1645, "Offset mismatch for UWidgetComponent::bOverrideRenderTargetFormat");
static_assert(offsetof(UWidgetComponent, RenderTargetFormatOverride) == 1646, "Offset mismatch for UWidgetComponent::RenderTargetFormatOverride");
static_assert(offsetof(UWidgetComponent, bIsTwoSided) == 1647, "Offset mismatch for UWidgetComponent::bIsTwoSided");
static_assert(offsetof(UWidgetComponent, bOutputDepthAndVelocity) == 1648, "Offset mismatch for UWidgetComponent::bOutputDepthAndVelocity");
static_assert(offsetof(UWidgetComponent, bWriteDepthPrepass) == 1649, "Offset mismatch for UWidgetComponent::bWriteDepthPrepass");
static_assert(offsetof(UWidgetComponent, DepthPrepassOpacityThreshold) == 1652, "Offset mismatch for UWidgetComponent::DepthPrepassOpacityThreshold");
static_assert(offsetof(UWidgetComponent, TickWhenOffscreen) == 1656, "Offset mismatch for UWidgetComponent::TickWhenOffscreen");
static_assert(offsetof(UWidgetComponent, BodySetup) == 1664, "Offset mismatch for UWidgetComponent::BodySetup");
static_assert(offsetof(UWidgetComponent, TranslucentMaterial) == 1672, "Offset mismatch for UWidgetComponent::TranslucentMaterial");
static_assert(offsetof(UWidgetComponent, TranslucentMaterial_OneSided) == 1680, "Offset mismatch for UWidgetComponent::TranslucentMaterial_OneSided");
static_assert(offsetof(UWidgetComponent, TranslucentMaterial_OutputDepthAndVelocity) == 1688, "Offset mismatch for UWidgetComponent::TranslucentMaterial_OutputDepthAndVelocity");
static_assert(offsetof(UWidgetComponent, TranslucentMaterial_OutputDepthAndVelocity_OneSided) == 1696, "Offset mismatch for UWidgetComponent::TranslucentMaterial_OutputDepthAndVelocity_OneSided");
static_assert(offsetof(UWidgetComponent, OpaqueMaterial) == 1704, "Offset mismatch for UWidgetComponent::OpaqueMaterial");
static_assert(offsetof(UWidgetComponent, OpaqueMaterial_OneSided) == 1712, "Offset mismatch for UWidgetComponent::OpaqueMaterial_OneSided");
static_assert(offsetof(UWidgetComponent, MaskedMaterial) == 1720, "Offset mismatch for UWidgetComponent::MaskedMaterial");
static_assert(offsetof(UWidgetComponent, MaskedMaterial_OneSided) == 1728, "Offset mismatch for UWidgetComponent::MaskedMaterial_OneSided");
static_assert(offsetof(UWidgetComponent, DepthPrepassMaterialInstance) == 1736, "Offset mismatch for UWidgetComponent::DepthPrepassMaterialInstance");
static_assert(offsetof(UWidgetComponent, RenderTarget) == 1744, "Offset mismatch for UWidgetComponent::RenderTarget");
static_assert(offsetof(UWidgetComponent, MaterialInstance) == 1752, "Offset mismatch for UWidgetComponent::MaterialInstance");
static_assert(offsetof(UWidgetComponent, bAddedToScreen) == 1760, "Offset mismatch for UWidgetComponent::bAddedToScreen");
static_assert(offsetof(UWidgetComponent, bEditTimeUsable) == 1761, "Offset mismatch for UWidgetComponent::bEditTimeUsable");
static_assert(offsetof(UWidgetComponent, SharedLayerName) == 1764, "Offset mismatch for UWidgetComponent::SharedLayerName");
static_assert(offsetof(UWidgetComponent, LayerZOrder) == 1768, "Offset mismatch for UWidgetComponent::LayerZOrder");
static_assert(offsetof(UWidgetComponent, GeometryMode) == 1772, "Offset mismatch for UWidgetComponent::GeometryMode");
static_assert(offsetof(UWidgetComponent, CylinderArcAngle) == 1776, "Offset mismatch for UWidgetComponent::CylinderArcAngle");
static_assert(offsetof(UWidgetComponent, TickMode) == 1784, "Offset mismatch for UWidgetComponent::TickMode");
static_assert(offsetof(UWidgetComponent, Widget) == 1832, "Offset mismatch for UWidgetComponent::Widget");

// /Script/UMG.WidgetDisabledStateRegistration
// Kind: Class; super: WidgetBinaryStateRegistration
class UWidgetDisabledStateRegistration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.WidgetEnumStateRegistration
// Kind: Class; super: Object
class UWidgetEnumStateRegistration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.WidgetFieldNotificationExtension
// Kind: Class; super: UserWidgetExtension
class UWidgetFieldNotificationExtension
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.WidgetHoveredStateRegistration
// Kind: Class; super: WidgetBinaryStateRegistration
class UWidgetHoveredStateRegistration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.WidgetInteractionComponent
// Kind: Class; super: SceneComponent
class UWidgetInteractionComponent
{
public:
    std::uint8_t Pad_0000[0x240]; // 0x0000
    FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x0240 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0250
    std::int32_t VirtualUserIndex; // 0x0260 (Size: 0x4, Type: IntProperty)
    std::int32_t PointerIndex; // 0x0264 (Size: 0x4, Type: IntProperty)
    std::uint8_t TraceChannel; // 0x0268 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0269
    float InteractionDistance; // 0x026C (Size: 0x4, Type: FloatProperty)
    std::uint8_t InteractionSource; // 0x0270 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEnableHitTesting; // 0x0271 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowDebug; // 0x0272 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x1]; // 0x0273
    float DebugSphereLineThickness; // 0x0274 (Size: 0x4, Type: FloatProperty)
    float DebugLineThickness; // 0x0278 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DebugColor[0x4C]; // 0x027C (Size: 0x4C, Type: StructProperty)
    std::uint8_t CustomHitResult[0xF8]; // 0x02C8 (Size: 0xF8, Type: StructProperty)
    std::uint8_t LocalHitLocation[0x10]; // 0x03C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t LastLocalHitLocation[0x10]; // 0x03D0 (Size: 0x10, Type: StructProperty)
    void* HoveredWidgetComponent; // 0x03E0 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> WeakHoveredWidgetComponent; // 0x03E8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t LastHitResult[0xF8]; // 0x03F0 (Size: 0xF8, Type: StructProperty)
    std::uint8_t bIsHoveredWidgetInteractable; // 0x04E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsHoveredWidgetFocusable; // 0x04E9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsHoveredWidgetHitTestVisible; // 0x04EA (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWidgetInteractionComponent, OnHoveredWidgetChanged) == 576, "Offset mismatch for UWidgetInteractionComponent::OnHoveredWidgetChanged");
static_assert(offsetof(UWidgetInteractionComponent, VirtualUserIndex) == 608, "Offset mismatch for UWidgetInteractionComponent::VirtualUserIndex");
static_assert(offsetof(UWidgetInteractionComponent, PointerIndex) == 612, "Offset mismatch for UWidgetInteractionComponent::PointerIndex");
static_assert(offsetof(UWidgetInteractionComponent, TraceChannel) == 616, "Offset mismatch for UWidgetInteractionComponent::TraceChannel");
static_assert(offsetof(UWidgetInteractionComponent, InteractionDistance) == 620, "Offset mismatch for UWidgetInteractionComponent::InteractionDistance");
static_assert(offsetof(UWidgetInteractionComponent, InteractionSource) == 624, "Offset mismatch for UWidgetInteractionComponent::InteractionSource");
static_assert(offsetof(UWidgetInteractionComponent, bEnableHitTesting) == 625, "Offset mismatch for UWidgetInteractionComponent::bEnableHitTesting");
static_assert(offsetof(UWidgetInteractionComponent, bShowDebug) == 626, "Offset mismatch for UWidgetInteractionComponent::bShowDebug");
static_assert(offsetof(UWidgetInteractionComponent, DebugSphereLineThickness) == 628, "Offset mismatch for UWidgetInteractionComponent::DebugSphereLineThickness");
static_assert(offsetof(UWidgetInteractionComponent, DebugLineThickness) == 632, "Offset mismatch for UWidgetInteractionComponent::DebugLineThickness");
static_assert(offsetof(UWidgetInteractionComponent, DebugColor) == 636, "Offset mismatch for UWidgetInteractionComponent::DebugColor");
static_assert(offsetof(UWidgetInteractionComponent, CustomHitResult) == 712, "Offset mismatch for UWidgetInteractionComponent::CustomHitResult");
static_assert(offsetof(UWidgetInteractionComponent, LocalHitLocation) == 960, "Offset mismatch for UWidgetInteractionComponent::LocalHitLocation");
static_assert(offsetof(UWidgetInteractionComponent, LastLocalHitLocation) == 976, "Offset mismatch for UWidgetInteractionComponent::LastLocalHitLocation");
static_assert(offsetof(UWidgetInteractionComponent, HoveredWidgetComponent) == 992, "Offset mismatch for UWidgetInteractionComponent::HoveredWidgetComponent");
static_assert(offsetof(UWidgetInteractionComponent, WeakHoveredWidgetComponent) == 1000, "Offset mismatch for UWidgetInteractionComponent::WeakHoveredWidgetComponent");
static_assert(offsetof(UWidgetInteractionComponent, LastHitResult) == 1008, "Offset mismatch for UWidgetInteractionComponent::LastHitResult");
static_assert(offsetof(UWidgetInteractionComponent, bIsHoveredWidgetInteractable) == 1256, "Offset mismatch for UWidgetInteractionComponent::bIsHoveredWidgetInteractable");
static_assert(offsetof(UWidgetInteractionComponent, bIsHoveredWidgetFocusable) == 1257, "Offset mismatch for UWidgetInteractionComponent::bIsHoveredWidgetFocusable");
static_assert(offsetof(UWidgetInteractionComponent, bIsHoveredWidgetHitTestVisible) == 1258, "Offset mismatch for UWidgetInteractionComponent::bIsHoveredWidgetHitTestVisible");

// /Script/UMG.WidgetLayoutLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UWidgetLayoutLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.WidgetNavigation
// Kind: Class; super: Object
class UWidgetNavigation
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Up[0x1C]; // 0x0028 (Size: 0x1C, Type: StructProperty)
    std::uint8_t Down[0x1C]; // 0x0044 (Size: 0x1C, Type: StructProperty)
    std::uint8_t Left[0x1C]; // 0x0060 (Size: 0x1C, Type: StructProperty)
    std::uint8_t Right[0x1C]; // 0x007C (Size: 0x1C, Type: StructProperty)
    std::uint8_t Next[0x1C]; // 0x0098 (Size: 0x1C, Type: StructProperty)
    std::uint8_t Previous[0x1C]; // 0x00B4 (Size: 0x1C, Type: StructProperty)
    std::uint8_t RoutingPolicy; // 0x00D0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D1
    std::uint8_t NavigationMethod[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWidgetNavigation, Up) == 40, "Offset mismatch for UWidgetNavigation::Up");
static_assert(offsetof(UWidgetNavigation, Down) == 68, "Offset mismatch for UWidgetNavigation::Down");
static_assert(offsetof(UWidgetNavigation, Left) == 96, "Offset mismatch for UWidgetNavigation::Left");
static_assert(offsetof(UWidgetNavigation, Right) == 124, "Offset mismatch for UWidgetNavigation::Right");
static_assert(offsetof(UWidgetNavigation, Next) == 152, "Offset mismatch for UWidgetNavigation::Next");
static_assert(offsetof(UWidgetNavigation, Previous) == 180, "Offset mismatch for UWidgetNavigation::Previous");
static_assert(offsetof(UWidgetNavigation, RoutingPolicy) == 208, "Offset mismatch for UWidgetNavigation::RoutingPolicy");
static_assert(offsetof(UWidgetNavigation, NavigationMethod) == 216, "Offset mismatch for UWidgetNavigation::NavigationMethod");

// /Script/UMG.WidgetPressedStateRegistration
// Kind: Class; super: WidgetBinaryStateRegistration
class UWidgetPressedStateRegistration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.WidgetSelectedStateRegistration
// Kind: Class; super: WidgetBinaryStateRegistration
class UWidgetSelectedStateRegistration
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.WidgetStateSettings
// Kind: Class; super: DeveloperSettings
class UWidgetStateSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/UMG.WidgetSwitcher
// Kind: Class; super: PanelWidget
class UWidgetSwitcher
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::int32_t ActiveWidgetIndex; // 0x0180 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UWidgetSwitcher, ActiveWidgetIndex) == 384, "Offset mismatch for UWidgetSwitcher::ActiveWidgetIndex");

// /Script/UMG.WidgetSwitcherSlot
// Kind: Class; super: PanelSlot
class UWidgetSwitcherSlot
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t Padding[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0050 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0051 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UWidgetSwitcherSlot, Padding) == 64, "Offset mismatch for UWidgetSwitcherSlot::Padding");
static_assert(offsetof(UWidgetSwitcherSlot, HorizontalAlignment) == 80, "Offset mismatch for UWidgetSwitcherSlot::HorizontalAlignment");
static_assert(offsetof(UWidgetSwitcherSlot, VerticalAlignment) == 81, "Offset mismatch for UWidgetSwitcherSlot::VerticalAlignment");

// /Script/UMG.WidgetTree
// Kind: Class; super: Object
class UWidgetTree
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* RootWidget; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> NamedSlotBindings; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UWidgetTree, RootWidget) == 48, "Offset mismatch for UWidgetTree::RootWidget");
static_assert(offsetof(UWidgetTree, NamedSlotBindings) == 56, "Offset mismatch for UWidgetTree::NamedSlotBindings");

// /Script/UMG.WindowTitleBarArea
// Kind: Class; super: ContentWidget
class UWindowTitleBarArea
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t bWindowButtonsEnabled; // 0x0180 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDoubleClickTogglesFullscreen; // 0x0181 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWindowTitleBarArea, bWindowButtonsEnabled) == 384, "Offset mismatch for UWindowTitleBarArea::bWindowButtonsEnabled");
static_assert(offsetof(UWindowTitleBarArea, bDoubleClickTogglesFullscreen) == 385, "Offset mismatch for UWindowTitleBarArea::bDoubleClickTogglesFullscreen");

// /Script/UMG.WindowTitleBarAreaSlot
// Kind: Class; super: PanelSlot
class UWindowTitleBarAreaSlot
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Padding[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0048 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0049 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UWindowTitleBarAreaSlot, Padding) == 56, "Offset mismatch for UWindowTitleBarAreaSlot::Padding");
static_assert(offsetof(UWindowTitleBarAreaSlot, HorizontalAlignment) == 72, "Offset mismatch for UWindowTitleBarAreaSlot::HorizontalAlignment");
static_assert(offsetof(UWindowTitleBarAreaSlot, VerticalAlignment) == 73, "Offset mismatch for UWindowTitleBarAreaSlot::VerticalAlignment");

// /Script/UMG.WrapBox
// Kind: Class; super: PanelWidget
class UWrapBox
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t InnerSlotPadding[0x10]; // 0x0180 (Size: 0x10, Type: StructProperty)
    float WrapSize; // 0x0190 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bExplicitWrapSize; // 0x0194 (Size: 0x1, Type: BoolProperty)
    std::uint8_t HorizontalAlignment; // 0x0195 (Size: 0x1, Type: ByteProperty)
    std::uint8_t orientation; // 0x0196 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UWrapBox, InnerSlotPadding) == 384, "Offset mismatch for UWrapBox::InnerSlotPadding");
static_assert(offsetof(UWrapBox, WrapSize) == 400, "Offset mismatch for UWrapBox::WrapSize");
static_assert(offsetof(UWrapBox, bExplicitWrapSize) == 404, "Offset mismatch for UWrapBox::bExplicitWrapSize");
static_assert(offsetof(UWrapBox, HorizontalAlignment) == 405, "Offset mismatch for UWrapBox::HorizontalAlignment");
static_assert(offsetof(UWrapBox, orientation) == 406, "Offset mismatch for UWrapBox::orientation");

// /Script/UMG.WrapBoxSlot
// Kind: Class; super: PanelSlot
class UWrapBoxSlot
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Padding[0x10]; // 0x0038 (Size: 0x10, Type: StructProperty)
    float FillSpanWhenLessThan; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t HorizontalAlignment; // 0x004C (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x004D (Size: 0x1, Type: ByteProperty)
    std::uint8_t bFillEmptySpace; // 0x004E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceNewLine; // 0x004F (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UWrapBoxSlot, Padding) == 56, "Offset mismatch for UWrapBoxSlot::Padding");
static_assert(offsetof(UWrapBoxSlot, FillSpanWhenLessThan) == 72, "Offset mismatch for UWrapBoxSlot::FillSpanWhenLessThan");
static_assert(offsetof(UWrapBoxSlot, HorizontalAlignment) == 76, "Offset mismatch for UWrapBoxSlot::HorizontalAlignment");
static_assert(offsetof(UWrapBoxSlot, VerticalAlignment) == 77, "Offset mismatch for UWrapBoxSlot::VerticalAlignment");
static_assert(offsetof(UWrapBoxSlot, bFillEmptySpace) == 78, "Offset mismatch for UWrapBoxSlot::bFillEmptySpace");
static_assert(offsetof(UWrapBoxSlot, bForceNewLine) == 79, "Offset mismatch for UWrapBoxSlot::bForceNewLine");

// /Script/UMG.button
// Kind: Class; super: ContentWidget
class Ubutton
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    std::uint8_t WidgetStyle[0x390]; // 0x0180 (Size: 0x390, Type: StructProperty)
    std::uint8_t ColorAndOpacity[0x10]; // 0x0510 (Size: 0x10, Type: StructProperty)
    std::uint8_t BackgroundColor[0x10]; // 0x0520 (Size: 0x10, Type: StructProperty)
    std::uint8_t ClickMethod; // 0x0530 (Size: 0x1, Type: ByteProperty)
    std::uint8_t TouchMethod; // 0x0531 (Size: 0x1, Type: ByteProperty)
    std::uint8_t PressMethod; // 0x0532 (Size: 0x1, Type: ByteProperty)
    std::uint8_t IsFocusable; // 0x0533 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0534
    FMulticastInlineDelegate OnClicked; // 0x0538 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPressed; // 0x0548 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnReleased; // 0x0558 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnHovered; // 0x0568 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnUnhovered; // 0x0578 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x80]; // 0x0588
    std::uint8_t bAllowDragDrop; // 0x0608 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(Ubutton, WidgetStyle) == 384, "Offset mismatch for Ubutton::WidgetStyle");
static_assert(offsetof(Ubutton, ColorAndOpacity) == 1296, "Offset mismatch for Ubutton::ColorAndOpacity");
static_assert(offsetof(Ubutton, BackgroundColor) == 1312, "Offset mismatch for Ubutton::BackgroundColor");
static_assert(offsetof(Ubutton, ClickMethod) == 1328, "Offset mismatch for Ubutton::ClickMethod");
static_assert(offsetof(Ubutton, TouchMethod) == 1329, "Offset mismatch for Ubutton::TouchMethod");
static_assert(offsetof(Ubutton, PressMethod) == 1330, "Offset mismatch for Ubutton::PressMethod");
static_assert(offsetof(Ubutton, IsFocusable) == 1331, "Offset mismatch for Ubutton::IsFocusable");
static_assert(offsetof(Ubutton, OnClicked) == 1336, "Offset mismatch for Ubutton::OnClicked");
static_assert(offsetof(Ubutton, OnPressed) == 1352, "Offset mismatch for Ubutton::OnPressed");
static_assert(offsetof(Ubutton, OnReleased) == 1368, "Offset mismatch for Ubutton::OnReleased");
static_assert(offsetof(Ubutton, OnHovered) == 1384, "Offset mismatch for Ubutton::OnHovered");
static_assert(offsetof(Ubutton, OnUnhovered) == 1400, "Offset mismatch for Ubutton::OnUnhovered");
static_assert(offsetof(Ubutton, bAllowDragDrop) == 1544, "Offset mismatch for Ubutton::bAllowDragDrop");
