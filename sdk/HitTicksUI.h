/**
 * decamp dumper generated SDK
 * Package: /Script/HitTicksUI
 */
#pragma once
#include "Basic.h"

// /Script/HitTicksUI.HitTickEvent
// Kind: ScriptStruct; super: none
struct FHitTickEvent
{
public:
    double Damage; // 0x0000 (Size: 0x8, Type: DoubleProperty)
    double AccumulatedDamage; // 0x0008 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bShield; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCritical; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFatal; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x5]; // 0x0013
    void* Target; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FHitTickEvent, Damage) == 0, "Offset mismatch for FHitTickEvent::Damage");
static_assert(offsetof(FHitTickEvent, AccumulatedDamage) == 8, "Offset mismatch for FHitTickEvent::AccumulatedDamage");
static_assert(offsetof(FHitTickEvent, bShield) == 16, "Offset mismatch for FHitTickEvent::bShield");
static_assert(offsetof(FHitTickEvent, bCritical) == 17, "Offset mismatch for FHitTickEvent::bCritical");
static_assert(offsetof(FHitTickEvent, bFatal) == 18, "Offset mismatch for FHitTickEvent::bFatal");
static_assert(offsetof(FHitTickEvent, Target) == 24, "Offset mismatch for FHitTickEvent::Target");

// /Script/HitTicksUI.FortAthenaHitTicksViewModel
// Kind: Class; super: FortPerUserViewModel
class UFortAthenaHitTicksViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t bUseNative; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    std::uint8_t UseNativeMarkerTag[0x4C]; // 0x007C (Size: 0x4C, Type: StructProperty)
    double HitInterval; // 0x00C8 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(UFortAthenaHitTicksViewModel, bUseNative) == 120, "Offset mismatch for UFortAthenaHitTicksViewModel::bUseNative");
static_assert(offsetof(UFortAthenaHitTicksViewModel, UseNativeMarkerTag) == 124, "Offset mismatch for UFortAthenaHitTicksViewModel::UseNativeMarkerTag");
static_assert(offsetof(UFortAthenaHitTicksViewModel, HitInterval) == 200, "Offset mismatch for UFortAthenaHitTicksViewModel::HitInterval");

// /Script/HitTicksUI.FortHitTicksHUDElement
// Kind: Class; super: FortHUDElementWidget
class UFortHitTicksHUDElement
{
public:
    std::uint8_t Pad_0000[0x338]; // 0x0000
    std::uint8_t HLTDependentWidgetTag[0x4]; // 0x0338 (Size: 0x4, Type: StructProperty)
    std::uint8_t ElementTag[0x4]; // 0x033C (Size: 0x4, Type: StructProperty)
    std::uint8_t HUDElementTag[0x20]; // 0x0340 (Size: 0x20, Type: StructProperty)
    std::uint8_t HiddenVisibility; // 0x0360 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0361
    void* TutorialHighlight; // 0x0368 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortHitTicksHUDElement, HLTDependentWidgetTag) == 824, "Offset mismatch for UFortHitTicksHUDElement::HLTDependentWidgetTag");
static_assert(offsetof(UFortHitTicksHUDElement, ElementTag) == 828, "Offset mismatch for UFortHitTicksHUDElement::ElementTag");
static_assert(offsetof(UFortHitTicksHUDElement, HUDElementTag) == 832, "Offset mismatch for UFortHitTicksHUDElement::HUDElementTag");
static_assert(offsetof(UFortHitTicksHUDElement, HiddenVisibility) == 864, "Offset mismatch for UFortHitTicksHUDElement::HiddenVisibility");
static_assert(offsetof(UFortHitTicksHUDElement, TutorialHighlight) == 872, "Offset mismatch for UFortHitTicksHUDElement::TutorialHighlight");

// /Script/HitTicksUI.FortUserWidget_HitTicks
// Kind: Class; super: FortUserWidget
class UFortUserWidget_HitTicks
{
public:
    std::uint8_t Pad_0000[0x318]; // 0x0000
    std::uint8_t bShield; // 0x0318 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0319
    double HitTime; // 0x0320 (Size: 0x8, Type: DoubleProperty)
    double ShieldHitTime; // 0x0328 (Size: 0x8, Type: DoubleProperty)
    double TimeSinceHit; // 0x0330 (Size: 0x8, Type: DoubleProperty)
    double HitInterval; // 0x0338 (Size: 0x8, Type: DoubleProperty)
    double ShieldIconMaxAlpha; // 0x0340 (Size: 0x8, Type: DoubleProperty)
    double FadeDuration; // 0x0348 (Size: 0x8, Type: DoubleProperty)
    double AccumulatedDamage; // 0x0350 (Size: 0x8, Type: DoubleProperty)
    void* HitMarker; // 0x0358 (Size: 0x8, Type: ObjectProperty)
    void* ShieldIcon; // 0x0360 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CurrentHitFeedbackMode; // 0x0368 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseNative; // 0x0369 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x6]; // 0x036A
    void* PrevHitPawn; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    double Damage; // 0x0378 (Size: 0x8, Type: DoubleProperty)
    void* Anim_Elimination2; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* Anim_ShieldCrack; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BaseColor_BG1[0x10]; // 0x0390 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShieldColor_BG1[0x10]; // 0x03A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t CritColor_BG1[0x10]; // 0x03B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ElimColor_BG1[0x10]; // 0x03C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t BaseColor_BG2[0x10]; // 0x03D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShieldColor_BG2[0x10]; // 0x03E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t CritColor_BG2[0x10]; // 0x03F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ElimColor_BG2[0x10]; // 0x0400 (Size: 0x10, Type: StructProperty)
    std::uint8_t BaseColor_Outline1[0x10]; // 0x0410 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShieldColor_Outline1[0x10]; // 0x0420 (Size: 0x10, Type: StructProperty)
    std::uint8_t CritColor_Outline1[0x10]; // 0x0430 (Size: 0x10, Type: StructProperty)
    std::uint8_t ElimColor_Outline1[0x10]; // 0x0440 (Size: 0x10, Type: StructProperty)
    std::uint8_t BaseColor_Outline2[0x10]; // 0x0450 (Size: 0x10, Type: StructProperty)
    std::uint8_t ShieldColor_Outline2[0x10]; // 0x0460 (Size: 0x10, Type: StructProperty)
    std::uint8_t CritColor_Outline2[0x10]; // 0x0470 (Size: 0x10, Type: StructProperty)
    std::uint8_t ElimColor_Outline2[0x10]; // 0x0480 (Size: 0x10, Type: StructProperty)
    std::uint8_t UseNativeMarkerTag[0x1]; // 0x0490 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortUserWidget_HitTicks, bShield) == 792, "Offset mismatch for UFortUserWidget_HitTicks::bShield");
static_assert(offsetof(UFortUserWidget_HitTicks, HitTime) == 800, "Offset mismatch for UFortUserWidget_HitTicks::HitTime");
static_assert(offsetof(UFortUserWidget_HitTicks, ShieldHitTime) == 808, "Offset mismatch for UFortUserWidget_HitTicks::ShieldHitTime");
static_assert(offsetof(UFortUserWidget_HitTicks, TimeSinceHit) == 816, "Offset mismatch for UFortUserWidget_HitTicks::TimeSinceHit");
static_assert(offsetof(UFortUserWidget_HitTicks, HitInterval) == 824, "Offset mismatch for UFortUserWidget_HitTicks::HitInterval");
static_assert(offsetof(UFortUserWidget_HitTicks, ShieldIconMaxAlpha) == 832, "Offset mismatch for UFortUserWidget_HitTicks::ShieldIconMaxAlpha");
static_assert(offsetof(UFortUserWidget_HitTicks, FadeDuration) == 840, "Offset mismatch for UFortUserWidget_HitTicks::FadeDuration");
static_assert(offsetof(UFortUserWidget_HitTicks, AccumulatedDamage) == 848, "Offset mismatch for UFortUserWidget_HitTicks::AccumulatedDamage");
static_assert(offsetof(UFortUserWidget_HitTicks, HitMarker) == 856, "Offset mismatch for UFortUserWidget_HitTicks::HitMarker");
static_assert(offsetof(UFortUserWidget_HitTicks, ShieldIcon) == 864, "Offset mismatch for UFortUserWidget_HitTicks::ShieldIcon");
static_assert(offsetof(UFortUserWidget_HitTicks, CurrentHitFeedbackMode) == 872, "Offset mismatch for UFortUserWidget_HitTicks::CurrentHitFeedbackMode");
static_assert(offsetof(UFortUserWidget_HitTicks, bUseNative) == 873, "Offset mismatch for UFortUserWidget_HitTicks::bUseNative");
static_assert(offsetof(UFortUserWidget_HitTicks, PrevHitPawn) == 880, "Offset mismatch for UFortUserWidget_HitTicks::PrevHitPawn");
static_assert(offsetof(UFortUserWidget_HitTicks, Damage) == 888, "Offset mismatch for UFortUserWidget_HitTicks::Damage");
static_assert(offsetof(UFortUserWidget_HitTicks, Anim_Elimination2) == 896, "Offset mismatch for UFortUserWidget_HitTicks::Anim_Elimination2");
static_assert(offsetof(UFortUserWidget_HitTicks, Anim_ShieldCrack) == 904, "Offset mismatch for UFortUserWidget_HitTicks::Anim_ShieldCrack");
static_assert(offsetof(UFortUserWidget_HitTicks, BaseColor_BG1) == 912, "Offset mismatch for UFortUserWidget_HitTicks::BaseColor_BG1");
static_assert(offsetof(UFortUserWidget_HitTicks, ShieldColor_BG1) == 928, "Offset mismatch for UFortUserWidget_HitTicks::ShieldColor_BG1");
static_assert(offsetof(UFortUserWidget_HitTicks, CritColor_BG1) == 944, "Offset mismatch for UFortUserWidget_HitTicks::CritColor_BG1");
static_assert(offsetof(UFortUserWidget_HitTicks, ElimColor_BG1) == 960, "Offset mismatch for UFortUserWidget_HitTicks::ElimColor_BG1");
static_assert(offsetof(UFortUserWidget_HitTicks, BaseColor_BG2) == 976, "Offset mismatch for UFortUserWidget_HitTicks::BaseColor_BG2");
static_assert(offsetof(UFortUserWidget_HitTicks, ShieldColor_BG2) == 992, "Offset mismatch for UFortUserWidget_HitTicks::ShieldColor_BG2");
static_assert(offsetof(UFortUserWidget_HitTicks, CritColor_BG2) == 1008, "Offset mismatch for UFortUserWidget_HitTicks::CritColor_BG2");
static_assert(offsetof(UFortUserWidget_HitTicks, ElimColor_BG2) == 1024, "Offset mismatch for UFortUserWidget_HitTicks::ElimColor_BG2");
static_assert(offsetof(UFortUserWidget_HitTicks, BaseColor_Outline1) == 1040, "Offset mismatch for UFortUserWidget_HitTicks::BaseColor_Outline1");
static_assert(offsetof(UFortUserWidget_HitTicks, ShieldColor_Outline1) == 1056, "Offset mismatch for UFortUserWidget_HitTicks::ShieldColor_Outline1");
static_assert(offsetof(UFortUserWidget_HitTicks, CritColor_Outline1) == 1072, "Offset mismatch for UFortUserWidget_HitTicks::CritColor_Outline1");
static_assert(offsetof(UFortUserWidget_HitTicks, ElimColor_Outline1) == 1088, "Offset mismatch for UFortUserWidget_HitTicks::ElimColor_Outline1");
static_assert(offsetof(UFortUserWidget_HitTicks, BaseColor_Outline2) == 1104, "Offset mismatch for UFortUserWidget_HitTicks::BaseColor_Outline2");
static_assert(offsetof(UFortUserWidget_HitTicks, ShieldColor_Outline2) == 1120, "Offset mismatch for UFortUserWidget_HitTicks::ShieldColor_Outline2");
static_assert(offsetof(UFortUserWidget_HitTicks, CritColor_Outline2) == 1136, "Offset mismatch for UFortUserWidget_HitTicks::CritColor_Outline2");
static_assert(offsetof(UFortUserWidget_HitTicks, ElimColor_Outline2) == 1152, "Offset mismatch for UFortUserWidget_HitTicks::ElimColor_Outline2");
static_assert(offsetof(UFortUserWidget_HitTicks, UseNativeMarkerTag) == 1168, "Offset mismatch for UFortUserWidget_HitTicks::UseNativeMarkerTag");
