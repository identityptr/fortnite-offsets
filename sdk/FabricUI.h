/**
 * decamp dumper generated SDK
 * Package: /Script/FabricUI
 */
#pragma once
#include "Basic.h"

// /Script/FabricUI.FabricBeatDisplayViewModel
// Kind: Class; super: MVVMViewModelBase
class UFabricBeatDisplayViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    float NumberOfBeats; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bVisible; // 0x006C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFabricBeatDisplayViewModel, NumberOfBeats) == 104, "Offset mismatch for UFabricBeatDisplayViewModel::NumberOfBeats");
static_assert(offsetof(UFabricBeatDisplayViewModel, bVisible) == 108, "Offset mismatch for UFabricBeatDisplayViewModel::bVisible");

// /Script/FabricUI.FabricButtonBaseViewModel
// Kind: Class; super: FabricInteractableViewModel
class UFabricButtonBaseViewModel
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t ToggleState; // 0x0090 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFabricButtonBaseViewModel, ToggleState) == 144, "Offset mismatch for UFabricButtonBaseViewModel::ToggleState");

// /Script/FabricUI.FabricCarouselViewModel
// Kind: Class; super: FabricInteractableViewModel
class UFabricCarouselViewModel
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t bPresetEnabled; // 0x0090 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowBorder; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0092
    std::int32_t CurrentOptionIndex; // 0x0094 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFabricCarouselViewModel, bPresetEnabled) == 144, "Offset mismatch for UFabricCarouselViewModel::bPresetEnabled");
static_assert(offsetof(UFabricCarouselViewModel, bShowBorder) == 145, "Offset mismatch for UFabricCarouselViewModel::bShowBorder");
static_assert(offsetof(UFabricCarouselViewModel, CurrentOptionIndex) == 148, "Offset mismatch for UFabricCarouselViewModel::CurrentOptionIndex");

// /Script/FabricUI.FabricGeneralTextWidget
// Kind: Class; super: FabricWidget
class UFabricGeneralTextWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* GridStyle; // 0x0330 (Size: 0x8, Type: ClassProperty)
    void* ViewModelClass; // 0x0338 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFabricGeneralTextWidget, GridStyle) == 816, "Offset mismatch for UFabricGeneralTextWidget::GridStyle");
static_assert(offsetof(UFabricGeneralTextWidget, ViewModelClass) == 824, "Offset mismatch for UFabricGeneralTextWidget::ViewModelClass");

// /Script/FabricUI.FabricGridStyle
// Kind: Class; super: Object
class UFabricGridStyle
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Padding[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t HorizontalAlignment; // 0x0038 (Size: 0x1, Type: ByteProperty)
    std::uint8_t VerticalAlignment; // 0x0039 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x003A
    std::int32_t RowSpan; // 0x003C (Size: 0x4, Type: IntProperty)
    std::int32_t ColumnSpan; // 0x0040 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFabricGridStyle, Padding) == 40, "Offset mismatch for UFabricGridStyle::Padding");
static_assert(offsetof(UFabricGridStyle, HorizontalAlignment) == 56, "Offset mismatch for UFabricGridStyle::HorizontalAlignment");
static_assert(offsetof(UFabricGridStyle, VerticalAlignment) == 57, "Offset mismatch for UFabricGridStyle::VerticalAlignment");
static_assert(offsetof(UFabricGridStyle, RowSpan) == 60, "Offset mismatch for UFabricGridStyle::RowSpan");
static_assert(offsetof(UFabricGridStyle, ColumnSpan) == 64, "Offset mismatch for UFabricGridStyle::ColumnSpan");

// /Script/FabricUI.FabricInfoWidget
// Kind: Class; super: FabricWidget
class UFabricInfoWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* GridStyle; // 0x0330 (Size: 0x8, Type: ClassProperty)
    void* ViewModelClass; // 0x0338 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFabricInfoWidget, GridStyle) == 816, "Offset mismatch for UFabricInfoWidget::GridStyle");
static_assert(offsetof(UFabricInfoWidget, ViewModelClass) == 824, "Offset mismatch for UFabricInfoWidget::ViewModelClass");

// /Script/FabricUI.FabricInteractableViewModel
// Kind: Class; super: MVVMViewModelBase
class UFabricInteractableViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Label[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t Value[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    std::uint8_t bEnabled; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVisible; // 0x0089 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFabricInteractableViewModel, Label) == 104, "Offset mismatch for UFabricInteractableViewModel::Label");
static_assert(offsetof(UFabricInteractableViewModel, Value) == 120, "Offset mismatch for UFabricInteractableViewModel::Value");
static_assert(offsetof(UFabricInteractableViewModel, bEnabled) == 136, "Offset mismatch for UFabricInteractableViewModel::bEnabled");
static_assert(offsetof(UFabricInteractableViewModel, bVisible) == 137, "Offset mismatch for UFabricInteractableViewModel::bVisible");

// /Script/FabricUI.FabricKnobViewModel
// Kind: Class; super: FabricInteractableViewModel
class UFabricKnobViewModel
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t bValueVisible; // 0x0090 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFabricKnobViewModel, bValueVisible) == 144, "Offset mismatch for UFabricKnobViewModel::bValueVisible");

// /Script/FabricUI.FabricMeasureViewModel
// Kind: Class; super: MVVMViewModelBase
class UFabricMeasureViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t MeasureCount[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t bVisible; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFabricMeasureViewModel, MeasureCount) == 104, "Offset mismatch for UFabricMeasureViewModel::MeasureCount");
static_assert(offsetof(UFabricMeasureViewModel, bVisible) == 120, "Offset mismatch for UFabricMeasureViewModel::bVisible");

// /Script/FabricUI.FabricPageInfoViewModel
// Kind: Class; super: MVVMViewModelBase
class UFabricPageInfoViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t bHasContent; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bActivePage; // 0x0069 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFabricPageInfoViewModel, bHasContent) == 104, "Offset mismatch for UFabricPageInfoViewModel::bHasContent");
static_assert(offsetof(UFabricPageInfoViewModel, bActivePage) == 105, "Offset mismatch for UFabricPageInfoViewModel::bActivePage");

// /Script/FabricUI.FabricPlaybackTimeViewModel
// Kind: Class; super: MVVMViewModelBase
class UFabricPlaybackTimeViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    float ElapsedSeconds; // 0x0068 (Size: 0x4, Type: FloatProperty)
    float TotalSeconds; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnabled; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVisible; // 0x0071 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFabricPlaybackTimeViewModel, ElapsedSeconds) == 104, "Offset mismatch for UFabricPlaybackTimeViewModel::ElapsedSeconds");
static_assert(offsetof(UFabricPlaybackTimeViewModel, TotalSeconds) == 108, "Offset mismatch for UFabricPlaybackTimeViewModel::TotalSeconds");
static_assert(offsetof(UFabricPlaybackTimeViewModel, bEnabled) == 112, "Offset mismatch for UFabricPlaybackTimeViewModel::bEnabled");
static_assert(offsetof(UFabricPlaybackTimeViewModel, bVisible) == 113, "Offset mismatch for UFabricPlaybackTimeViewModel::bVisible");

// /Script/FabricUI.FabricPlaybackTimeWidget
// Kind: Class; super: FabricWidget
class UFabricPlaybackTimeWidget
{
public:
    std::uint8_t Pad_0000[0x340]; // 0x0000
    void* NamedSlot_Left; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* NamedSlot_Right; // 0x0348 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFabricPlaybackTimeWidget, NamedSlot_Left) == 832, "Offset mismatch for UFabricPlaybackTimeWidget::NamedSlot_Left");
static_assert(offsetof(UFabricPlaybackTimeWidget, NamedSlot_Right) == 840, "Offset mismatch for UFabricPlaybackTimeWidget::NamedSlot_Right");

// /Script/FabricUI.FabricScreenWidget
// Kind: Class; super: CommonUserWidget
class UFabricScreenWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* InvalidationBox_RootBox; // 0x0330 (Size: 0x8, Type: ObjectProperty)
    void* ScaleBox_ScreenScale; // 0x0338 (Size: 0x8, Type: ObjectProperty)
    void* GridPanel_ScreenGrid; // 0x0340 (Size: 0x8, Type: ObjectProperty)
    void* Spacer_ElementSpacer; // 0x0348 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFabricScreenWidget, InvalidationBox_RootBox) == 816, "Offset mismatch for UFabricScreenWidget::InvalidationBox_RootBox");
static_assert(offsetof(UFabricScreenWidget, ScaleBox_ScreenScale) == 824, "Offset mismatch for UFabricScreenWidget::ScaleBox_ScreenScale");
static_assert(offsetof(UFabricScreenWidget, GridPanel_ScreenGrid) == 832, "Offset mismatch for UFabricScreenWidget::GridPanel_ScreenGrid");
static_assert(offsetof(UFabricScreenWidget, Spacer_ElementSpacer) == 840, "Offset mismatch for UFabricScreenWidget::Spacer_ElementSpacer");

// /Script/FabricUI.FabricSongSyncViewModel
// Kind: Class; super: MVVMViewModelBase
class UFabricSongSyncViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t ControlTempoState; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHasLinkedSongSyncDevices; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnabled; // 0x006A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFabricSongSyncViewModel, ControlTempoState) == 104, "Offset mismatch for UFabricSongSyncViewModel::ControlTempoState");
static_assert(offsetof(UFabricSongSyncViewModel, bHasLinkedSongSyncDevices) == 105, "Offset mismatch for UFabricSongSyncViewModel::bHasLinkedSongSyncDevices");
static_assert(offsetof(UFabricSongSyncViewModel, bEnabled) == 106, "Offset mismatch for UFabricSongSyncViewModel::bEnabled");

// /Script/FabricUI.FabricTimeSignatureViewModel
// Kind: Class; super: MVVMViewModelBase
class UFabricTimeSignatureViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t TopValue[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t BottomValue[0x10]; // 0x0078 (Size: 0x10, Type: TextProperty)
    std::uint8_t bEnabled; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVisible; // 0x0089 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFabricTimeSignatureViewModel, TopValue) == 104, "Offset mismatch for UFabricTimeSignatureViewModel::TopValue");
static_assert(offsetof(UFabricTimeSignatureViewModel, BottomValue) == 120, "Offset mismatch for UFabricTimeSignatureViewModel::BottomValue");
static_assert(offsetof(UFabricTimeSignatureViewModel, bEnabled) == 136, "Offset mismatch for UFabricTimeSignatureViewModel::bEnabled");
static_assert(offsetof(UFabricTimeSignatureViewModel, bVisible) == 137, "Offset mismatch for UFabricTimeSignatureViewModel::bVisible");

// /Script/FabricUI.FabricTimeSignatureWidget
// Kind: Class; super: FabricWidget
class UFabricTimeSignatureWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* GridStyle; // 0x0330 (Size: 0x8, Type: ClassProperty)
    void* ViewModelClass; // 0x0338 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFabricTimeSignatureWidget, GridStyle) == 816, "Offset mismatch for UFabricTimeSignatureWidget::GridStyle");
static_assert(offsetof(UFabricTimeSignatureWidget, ViewModelClass) == 824, "Offset mismatch for UFabricTimeSignatureWidget::ViewModelClass");

// /Script/FabricUI.FabricTrackInfoViewModel
// Kind: Class; super: MVVMViewModelBase
class UFabricTrackInfoViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t TrackInfoState; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    FString Artist; // 0x0070 (Size: 0x10, Type: StrProperty)
    FString Title; // 0x0080 (Size: 0x10, Type: StrProperty)
    std::uint8_t bLoading; // 0x0090 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFabricTrackInfoViewModel, TrackInfoState) == 104, "Offset mismatch for UFabricTrackInfoViewModel::TrackInfoState");
static_assert(offsetof(UFabricTrackInfoViewModel, Artist) == 112, "Offset mismatch for UFabricTrackInfoViewModel::Artist");
static_assert(offsetof(UFabricTrackInfoViewModel, Title) == 128, "Offset mismatch for UFabricTrackInfoViewModel::Title");
static_assert(offsetof(UFabricTrackInfoViewModel, bLoading) == 144, "Offset mismatch for UFabricTrackInfoViewModel::bLoading");

// /Script/FabricUI.FabricTrackInfoWidget
// Kind: Class; super: FabricWidget
class UFabricTrackInfoWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* GridStyle; // 0x0330 (Size: 0x8, Type: ClassProperty)
    void* ViewModelClass; // 0x0338 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFabricTrackInfoWidget, GridStyle) == 816, "Offset mismatch for UFabricTrackInfoWidget::GridStyle");
static_assert(offsetof(UFabricTrackInfoWidget, ViewModelClass) == 824, "Offset mismatch for UFabricTrackInfoWidget::ViewModelClass");

// /Script/FabricUI.FabricTrackNumberViewModel
// Kind: Class; super: MVVMViewModelBase
class UFabricTrackNumberViewModel
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::int32_t CurrentTrackNumber; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::int32_t TotalNumberOfTracks; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t bEnabled; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVisible; // 0x0071 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFabricTrackNumberViewModel, CurrentTrackNumber) == 104, "Offset mismatch for UFabricTrackNumberViewModel::CurrentTrackNumber");
static_assert(offsetof(UFabricTrackNumberViewModel, TotalNumberOfTracks) == 108, "Offset mismatch for UFabricTrackNumberViewModel::TotalNumberOfTracks");
static_assert(offsetof(UFabricTrackNumberViewModel, bEnabled) == 112, "Offset mismatch for UFabricTrackNumberViewModel::bEnabled");
static_assert(offsetof(UFabricTrackNumberViewModel, bVisible) == 113, "Offset mismatch for UFabricTrackNumberViewModel::bVisible");

// /Script/FabricUI.FabricTrackNumberWidget
// Kind: Class; super: FabricWidget
class UFabricTrackNumberWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* GridStyle; // 0x0330 (Size: 0x8, Type: ClassProperty)
    void* ViewModelClass; // 0x0338 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFabricTrackNumberWidget, GridStyle) == 816, "Offset mismatch for UFabricTrackNumberWidget::GridStyle");
static_assert(offsetof(UFabricTrackNumberWidget, ViewModelClass) == 824, "Offset mismatch for UFabricTrackNumberWidget::ViewModelClass");

// /Script/FabricUI.FabricWidget
// Kind: Class; super: CommonUserWidget
class UFabricWidget
{
public:
    std::uint8_t Pad_0000[0x330]; // 0x0000
    void* GridStyle; // 0x0330 (Size: 0x8, Type: ClassProperty)
    void* ViewModelClass; // 0x0338 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UFabricWidget, GridStyle) == 816, "Offset mismatch for UFabricWidget::GridStyle");
static_assert(offsetof(UFabricWidget, ViewModelClass) == 824, "Offset mismatch for UFabricWidget::ViewModelClass");

// /Script/FabricUI.FabricWidgetComponent
// Kind: Class; super: WidgetComponent
class UFabricWidgetComponent
{
public:
    std::uint8_t Pad_0000[0x770]; // 0x0000
    std::uint8_t bShouldSuscribeToSignificanceSubsystem; // 0x0770 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFabricWidgetComponent, bShouldSuscribeToSignificanceSubsystem) == 1904, "Offset mismatch for UFabricWidgetComponent::bShouldSuscribeToSignificanceSubsystem");

// /Script/FabricUI.FabricWidgetTickControlSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UFabricWidgetTickControlSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FabricUI.PlayspaceComponent_FabricViewModelManager
// Kind: Class; super: PlayspaceComponent
class UPlayspaceComponent_FabricViewModelManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TMap<void*, void*> ViewModels; // 0x00C0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UPlayspaceComponent_FabricViewModelManager, ViewModels) == 192, "Offset mismatch for UPlayspaceComponent_FabricViewModelManager::ViewModels");
