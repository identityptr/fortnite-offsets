/**
 * decamp dumper generated SDK
 * Package: /Script/GizmosFrontendUI
 */
#pragma once
#include "Basic.h"

// /Script/GizmosFrontendUI.GizmosSeenUIEvent
// Kind: ScriptStruct; super: none
struct FGizmosSeenUIEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GizmosFrontendUI.GizmosTooltipUIEvent
// Kind: ScriptStruct; super: none
struct FGizmosTooltipUIEvent
{
public:
    std::uint8_t bShouldShow; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FGizmosTooltipUIEvent, bShouldShow) == 0, "Offset mismatch for FGizmosTooltipUIEvent::bShouldShow");

// /Script/GizmosFrontendUI.MatchmakingSettingsGizmoView
// Kind: ScriptStruct; super: none
struct FMatchmakingSettingsGizmoView
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t ItemName[0x10]; // 0x0010 (Size: 0x10, Type: TextProperty)
    std::uint8_t Icon[0x20]; // 0x0020 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ItemDescription[0x10]; // 0x0040 (Size: 0x10, Type: TextProperty)
    std::int64_t Amount; // 0x0050 (Size: 0x8, Type: Int64Property)
    std::uint8_t TimeLeft[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMatchmakingSettingsGizmoView, ItemName) == 16, "Offset mismatch for FMatchmakingSettingsGizmoView::ItemName");
static_assert(offsetof(FMatchmakingSettingsGizmoView, Icon) == 32, "Offset mismatch for FMatchmakingSettingsGizmoView::Icon");
static_assert(offsetof(FMatchmakingSettingsGizmoView, ItemDescription) == 64, "Offset mismatch for FMatchmakingSettingsGizmoView::ItemDescription");
static_assert(offsetof(FMatchmakingSettingsGizmoView, Amount) == 80, "Offset mismatch for FMatchmakingSettingsGizmoView::Amount");
static_assert(offsetof(FMatchmakingSettingsGizmoView, TimeLeft) == 88, "Offset mismatch for FMatchmakingSettingsGizmoView::TimeLeft");

// /Script/GizmosFrontendUI.GizmosFrontendUISettings
// Kind: Class; super: Object
class UGizmosFrontendUISettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GizmosTooltipProductTags[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGizmosFrontendUISettings, GizmosTooltipProductTags) == 40, "Offset mismatch for UGizmosFrontendUISettings::GizmosTooltipProductTags");

// /Script/GizmosFrontendUI.GizmosMatchmakingSettingsVM
// Kind: Class; super: FortMatchmakingSettingDiscreteEnumVM
class UGizmosMatchmakingSettingsVM
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    TArray<void*> GizmoViews; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TimeLeft[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGizmosMatchmakingSettingsVM, GizmoViews) == 176, "Offset mismatch for UGizmosMatchmakingSettingsVM::GizmoViews");
static_assert(offsetof(UGizmosMatchmakingSettingsVM, TimeLeft) == 192, "Offset mismatch for UGizmosMatchmakingSettingsVM::TimeLeft");

// /Script/GizmosFrontendUI.GizmosTooltipFlowStep
// Kind: Class; super: FortMenuFlowStep
class UGizmosTooltipFlowStep
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString Name; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t bEnabled; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGizmosTooltipFlowStep, Name) == 40, "Offset mismatch for UGizmosTooltipFlowStep::Name");
static_assert(offsetof(UGizmosTooltipFlowStep, bEnabled) == 56, "Offset mismatch for UGizmosTooltipFlowStep::bEnabled");

// /Script/GizmosFrontendUI.GizmosTooltipUIDirectorComponent
// Kind: Class; super: FortDynamicUIDirectorComponent
class UGizmosTooltipUIDirectorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* GizmosTooltipScene; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGizmosTooltipUIDirectorComponent, GizmosTooltipScene) == 192, "Offset mismatch for UGizmosTooltipUIDirectorComponent::GizmosTooltipScene");
