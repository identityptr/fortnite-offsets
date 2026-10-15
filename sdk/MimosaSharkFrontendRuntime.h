/**
 * decamp dumper generated SDK
 * Package: /Script/MimosaSharkFrontendRuntime
 */
#pragma once
#include "Basic.h"

// /Script/MimosaSharkFrontendRuntime.MimosaSharkQuestProgress
// Kind: ScriptStruct; super: none
struct FMimosaSharkQuestProgress
{
public:
    std::int32_t AchievedCount; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t RequiredCount; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t CategoryTimeRemaining[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    std::uint8_t CategoryExpirationDate[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMimosaSharkQuestProgress, AchievedCount) == 0, "Offset mismatch for FMimosaSharkQuestProgress::AchievedCount");
static_assert(offsetof(FMimosaSharkQuestProgress, RequiredCount) == 4, "Offset mismatch for FMimosaSharkQuestProgress::RequiredCount");
static_assert(offsetof(FMimosaSharkQuestProgress, CategoryTimeRemaining) == 8, "Offset mismatch for FMimosaSharkQuestProgress::CategoryTimeRemaining");
static_assert(offsetof(FMimosaSharkQuestProgress, CategoryExpirationDate) == 16, "Offset mismatch for FMimosaSharkQuestProgress::CategoryExpirationDate");

// /Script/MimosaSharkFrontendRuntime.MimosaSharkFrontendViewModel
// Kind: Class; super: FortPerUserViewModel
class UMimosaSharkFrontendViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    FString QuestTemplateId; // 0x0078 (Size: 0x10, Type: StrProperty)
    std::uint8_t QuestProgress[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurrentProductTag[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMimosaSharkFrontendViewModel, QuestTemplateId) == 120, "Offset mismatch for UMimosaSharkFrontendViewModel::QuestTemplateId");
static_assert(offsetof(UMimosaSharkFrontendViewModel, QuestProgress) == 136, "Offset mismatch for UMimosaSharkFrontendViewModel::QuestProgress");
static_assert(offsetof(UMimosaSharkFrontendViewModel, CurrentProductTag) == 160, "Offset mismatch for UMimosaSharkFrontendViewModel::CurrentProductTag");

// /Script/MimosaSharkFrontendRuntime.MimosaSharkLobbyDetailsUIDirector
// Kind: Class; super: DynamicUIDirectorBase
class UMimosaSharkLobbyDetailsUIDirector
{
public:
    std::uint8_t Pad_0000[0x2A0]; // 0x0000
    std::uint8_t ValidProductIslands[0x1]; // 0x02A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMimosaSharkLobbyDetailsUIDirector, ValidProductIslands) == 672, "Offset mismatch for UMimosaSharkLobbyDetailsUIDirector::ValidProductIslands");
