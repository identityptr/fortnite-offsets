/**
 * decamp dumper generated SDK
 * Package: /Script/SocialPosePickerRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SocialPosePickerRuntime.SocialPosePickerTogglePoseSelectionEvent
// Kind: ScriptStruct; super: none
struct FSocialPosePickerTogglePoseSelectionEvent
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SocialPosePickerRuntime.SocialPoseTableRow
// Kind: ScriptStruct; super: TableRowBase
struct FSocialPoseTableRow
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Category[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t Emote[0x40]; // 0x0010 (Size: 0x40, Type: StructProperty)
    std::int32_t DisplaySortPriority; // 0x0050 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSocialPoseTableRow, Category) == 8, "Offset mismatch for FSocialPoseTableRow::Category");
static_assert(offsetof(FSocialPoseTableRow, Emote) == 16, "Offset mismatch for FSocialPoseTableRow::Emote");
static_assert(offsetof(FSocialPoseTableRow, DisplaySortPriority) == 80, "Offset mismatch for FSocialPoseTableRow::DisplaySortPriority");

// /Script/SocialPosePickerRuntime.SocialRequestPoseSelectionEvent
// Kind: ScriptStruct; super: none
struct FSocialRequestPoseSelectionEvent
{
public:
    std::uint8_t bStart; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSocialRequestPoseSelectionEvent, bStart) == 0, "Offset mismatch for FSocialRequestPoseSelectionEvent::bStart");

// /Script/SocialPosePickerRuntime.SocialPosePickerBlueprintFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class USocialPosePickerBlueprintFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};
