/**
 * decamp dumper generated SDK
 * Package: /Script/QuestPresentation
 */
#pragma once
#include "Basic.h"

// /Script/QuestPresentation.QuestViewExtensionData_HasQuestPresentation
// Kind: ScriptStruct; super: QuestViewExtension
struct FQuestViewExtensionData_HasQuestPresentation
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> CategoryIDs; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bShowToast; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPinnable; // 0x0019 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FQuestViewExtensionData_HasQuestPresentation, CategoryIDs) == 8, "Offset mismatch for FQuestViewExtensionData_HasQuestPresentation::CategoryIDs");
static_assert(offsetof(FQuestViewExtensionData_HasQuestPresentation, bShowToast) == 24, "Offset mismatch for FQuestViewExtensionData_HasQuestPresentation::bShowToast");
static_assert(offsetof(FQuestViewExtensionData_HasQuestPresentation, bPinnable) == 25, "Offset mismatch for FQuestViewExtensionData_HasQuestPresentation::bPinnable");
