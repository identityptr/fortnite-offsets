/**
 * decamp dumper generated SDK
 * Package: /Script/VehicleModsUI
 */
#pragma once
#include "Basic.h"

// /Script/VehicleModsUI.AthenaMarkerDetailsExtensionVehicleMods
// Kind: Class; super: AthenaMarkerDetailsExtension
class UAthenaMarkerDetailsExtensionVehicleMods
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

static_assert(offsetof(UAthenaMarkerDetailsExtensionVehicleMods, ColorAndOpacity) == 416, "Offset mismatch for UAthenaMarkerDetailsExtensionVehicleMods::ColorAndOpacity");
static_assert(offsetof(UAthenaMarkerDetailsExtensionVehicleMods, ColorAndOpacityDelegate) == 432, "Offset mismatch for UAthenaMarkerDetailsExtensionVehicleMods::ColorAndOpacityDelegate");
static_assert(offsetof(UAthenaMarkerDetailsExtensionVehicleMods, ForegroundColor) == 444, "Offset mismatch for UAthenaMarkerDetailsExtensionVehicleMods::ForegroundColor");
static_assert(offsetof(UAthenaMarkerDetailsExtensionVehicleMods, ForegroundColorDelegate) == 464, "Offset mismatch for UAthenaMarkerDetailsExtensionVehicleMods::ForegroundColorDelegate");
static_assert(offsetof(UAthenaMarkerDetailsExtensionVehicleMods, OnVisibilityChanged) == 480, "Offset mismatch for UAthenaMarkerDetailsExtensionVehicleMods::OnVisibilityChanged");
static_assert(offsetof(UAthenaMarkerDetailsExtensionVehicleMods, Padding) == 544, "Offset mismatch for UAthenaMarkerDetailsExtensionVehicleMods::Padding");
static_assert(offsetof(UAthenaMarkerDetailsExtensionVehicleMods, Priority) == 560, "Offset mismatch for UAthenaMarkerDetailsExtensionVehicleMods::Priority");
static_assert(offsetof(UAthenaMarkerDetailsExtensionVehicleMods, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UAthenaMarkerDetailsExtensionVehicleMods::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UAthenaMarkerDetailsExtensionVehicleMods, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UAthenaMarkerDetailsExtensionVehicleMods::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UAthenaMarkerDetailsExtensionVehicleMods, ActiveSequencePlayers) == 584, "Offset mismatch for UAthenaMarkerDetailsExtensionVehicleMods::ActiveSequencePlayers");
static_assert(offsetof(UAthenaMarkerDetailsExtensionVehicleMods, AnimationTickManager) == 600, "Offset mismatch for UAthenaMarkerDetailsExtensionVehicleMods::AnimationTickManager");
static_assert(offsetof(UAthenaMarkerDetailsExtensionVehicleMods, StoppedSequencePlayers) == 608, "Offset mismatch for UAthenaMarkerDetailsExtensionVehicleMods::StoppedSequencePlayers");
static_assert(offsetof(UAthenaMarkerDetailsExtensionVehicleMods, NamedSlotBindings) == 648, "Offset mismatch for UAthenaMarkerDetailsExtensionVehicleMods::NamedSlotBindings");
static_assert(offsetof(UAthenaMarkerDetailsExtensionVehicleMods, Extensions) == 664, "Offset mismatch for UAthenaMarkerDetailsExtensionVehicleMods::Extensions");
static_assert(offsetof(UAthenaMarkerDetailsExtensionVehicleMods, WidgetTree) == 680, "Offset mismatch for UAthenaMarkerDetailsExtensionVehicleMods::WidgetTree");
static_assert(offsetof(UAthenaMarkerDetailsExtensionVehicleMods, bHasScriptImplementedPaint) == 688, "Offset mismatch for UAthenaMarkerDetailsExtensionVehicleMods::bHasScriptImplementedPaint");
static_assert(offsetof(UAthenaMarkerDetailsExtensionVehicleMods, TickFrequency) == 712, "Offset mismatch for UAthenaMarkerDetailsExtensionVehicleMods::TickFrequency");
static_assert(offsetof(UAthenaMarkerDetailsExtensionVehicleMods, DesiredFocusWidget) == 716, "Offset mismatch for UAthenaMarkerDetailsExtensionVehicleMods::DesiredFocusWidget");
static_assert(offsetof(UAthenaMarkerDetailsExtensionVehicleMods, InputComponent) == 728, "Offset mismatch for UAthenaMarkerDetailsExtensionVehicleMods::InputComponent");
static_assert(offsetof(UAthenaMarkerDetailsExtensionVehicleMods, AnimationCallbacks) == 736, "Offset mismatch for UAthenaMarkerDetailsExtensionVehicleMods::AnimationCallbacks");

// /Script/VehicleModsUI.FortInteractionContextInfoWidgetVehicleMods
// Kind: Class; super: FortInteractContextInfoWidget
class UFortInteractionContextInfoWidgetVehicleMods
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

static_assert(offsetof(UFortInteractionContextInfoWidgetVehicleMods, ColorAndOpacity) == 416, "Offset mismatch for UFortInteractionContextInfoWidgetVehicleMods::ColorAndOpacity");
static_assert(offsetof(UFortInteractionContextInfoWidgetVehicleMods, ColorAndOpacityDelegate) == 432, "Offset mismatch for UFortInteractionContextInfoWidgetVehicleMods::ColorAndOpacityDelegate");
static_assert(offsetof(UFortInteractionContextInfoWidgetVehicleMods, ForegroundColor) == 444, "Offset mismatch for UFortInteractionContextInfoWidgetVehicleMods::ForegroundColor");
static_assert(offsetof(UFortInteractionContextInfoWidgetVehicleMods, ForegroundColorDelegate) == 464, "Offset mismatch for UFortInteractionContextInfoWidgetVehicleMods::ForegroundColorDelegate");
static_assert(offsetof(UFortInteractionContextInfoWidgetVehicleMods, OnVisibilityChanged) == 480, "Offset mismatch for UFortInteractionContextInfoWidgetVehicleMods::OnVisibilityChanged");
static_assert(offsetof(UFortInteractionContextInfoWidgetVehicleMods, Padding) == 544, "Offset mismatch for UFortInteractionContextInfoWidgetVehicleMods::Padding");
static_assert(offsetof(UFortInteractionContextInfoWidgetVehicleMods, Priority) == 560, "Offset mismatch for UFortInteractionContextInfoWidgetVehicleMods::Priority");
static_assert(offsetof(UFortInteractionContextInfoWidgetVehicleMods, bAutomaticallyRegisterInputOnConstruction) == 564, "Offset mismatch for UFortInteractionContextInfoWidgetVehicleMods::bAutomaticallyRegisterInputOnConstruction");
static_assert(offsetof(UFortInteractionContextInfoWidgetVehicleMods, QueuedWidgetAnimationTransitions) == 568, "Offset mismatch for UFortInteractionContextInfoWidgetVehicleMods::QueuedWidgetAnimationTransitions");
static_assert(offsetof(UFortInteractionContextInfoWidgetVehicleMods, ActiveSequencePlayers) == 584, "Offset mismatch for UFortInteractionContextInfoWidgetVehicleMods::ActiveSequencePlayers");
static_assert(offsetof(UFortInteractionContextInfoWidgetVehicleMods, AnimationTickManager) == 600, "Offset mismatch for UFortInteractionContextInfoWidgetVehicleMods::AnimationTickManager");
static_assert(offsetof(UFortInteractionContextInfoWidgetVehicleMods, StoppedSequencePlayers) == 608, "Offset mismatch for UFortInteractionContextInfoWidgetVehicleMods::StoppedSequencePlayers");
static_assert(offsetof(UFortInteractionContextInfoWidgetVehicleMods, NamedSlotBindings) == 648, "Offset mismatch for UFortInteractionContextInfoWidgetVehicleMods::NamedSlotBindings");
static_assert(offsetof(UFortInteractionContextInfoWidgetVehicleMods, Extensions) == 664, "Offset mismatch for UFortInteractionContextInfoWidgetVehicleMods::Extensions");
static_assert(offsetof(UFortInteractionContextInfoWidgetVehicleMods, WidgetTree) == 680, "Offset mismatch for UFortInteractionContextInfoWidgetVehicleMods::WidgetTree");
static_assert(offsetof(UFortInteractionContextInfoWidgetVehicleMods, bHasScriptImplementedPaint) == 688, "Offset mismatch for UFortInteractionContextInfoWidgetVehicleMods::bHasScriptImplementedPaint");
static_assert(offsetof(UFortInteractionContextInfoWidgetVehicleMods, TickFrequency) == 712, "Offset mismatch for UFortInteractionContextInfoWidgetVehicleMods::TickFrequency");
static_assert(offsetof(UFortInteractionContextInfoWidgetVehicleMods, DesiredFocusWidget) == 716, "Offset mismatch for UFortInteractionContextInfoWidgetVehicleMods::DesiredFocusWidget");
static_assert(offsetof(UFortInteractionContextInfoWidgetVehicleMods, InputComponent) == 728, "Offset mismatch for UFortInteractionContextInfoWidgetVehicleMods::InputComponent");
static_assert(offsetof(UFortInteractionContextInfoWidgetVehicleMods, AnimationCallbacks) == 736, "Offset mismatch for UFortInteractionContextInfoWidgetVehicleMods::AnimationCallbacks");
