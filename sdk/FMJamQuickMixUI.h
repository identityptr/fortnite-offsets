/**
 * decamp dumper generated SDK
 * Package: /Script/FMJamQuickMixUI
 */
#pragma once
#include "Basic.h"

// /Script/FMJamQuickMixUI.JamLoopInfo
// Kind: ScriptStruct; super: none
struct FJamLoopInfo
{
public:
    std::uint8_t SongShortName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t LoopType; // 0x0004 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJamLoopInfo, SongShortName) == 0, "Offset mismatch for FJamLoopInfo::SongShortName");
static_assert(offsetof(FJamLoopInfo, LoopType) == 4, "Offset mismatch for FJamLoopInfo::LoopType");

// /Script/FMJamQuickMixUI.JamQuickMix
// Kind: Class; super: FortHUDElementWidget
class UJamQuickMix
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

static_assert(offsetof(UJamQuickMix, HLTDependentWidgetTag) == 824, "Offset mismatch for UJamQuickMix::HLTDependentWidgetTag");
static_assert(offsetof(UJamQuickMix, ElementTag) == 828, "Offset mismatch for UJamQuickMix::ElementTag");
static_assert(offsetof(UJamQuickMix, HUDElementTag) == 832, "Offset mismatch for UJamQuickMix::HUDElementTag");
static_assert(offsetof(UJamQuickMix, HiddenVisibility) == 864, "Offset mismatch for UJamQuickMix::HiddenVisibility");
static_assert(offsetof(UJamQuickMix, TutorialHighlight) == 872, "Offset mismatch for UJamQuickMix::TutorialHighlight");
