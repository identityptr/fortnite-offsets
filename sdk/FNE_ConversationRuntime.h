/**
 * decamp dumper generated SDK
 * Package: /FNE_Conversation/_Verse/VNI/FNE_ConversationRuntime
 */
#pragma once
#include "Basic.h"

// /FNE_Conversation/_Verse/VNI/FNE_ConversationRuntime.FNECon_conversation_component
// Kind: VerseClass; super: Component
class UFNECon_conversation_component
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t verse_0x5CDFC2A5_Enabled; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t verse_0x7C5B6343_ShowNameWhenNearby; // 0x0059 (Size: 0x1, Type: BoolProperty)
    std::uint8_t verse_0xA89F1EDE_ShowIndicatorBubble; // 0x005A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x005B
    double verse_0x78107DFF_IndicatorBubbleRange; // 0x0060 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t verse_0x6EF46B10_ShowConversationText; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0069
    void* verse_0x2AFE2AC7_ConversationDatabase; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x30]; // 0x0078
    std::int64_t verse_0xB8B80D31_MaximumParticipatingAgents; // 0x00A8 (Size: 0x8, Type: Int64Property)
    void* verse_0x1EA0DE50_ConversationStartedEvent; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* verse_0x23D944E3_ConversationEndedEvent; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFNECon_conversation_component, verse_0x5CDFC2A5_Enabled) == 88, "Offset mismatch for UFNECon_conversation_component::verse_0x5CDFC2A5_Enabled");
static_assert(offsetof(UFNECon_conversation_component, verse_0x7C5B6343_ShowNameWhenNearby) == 89, "Offset mismatch for UFNECon_conversation_component::verse_0x7C5B6343_ShowNameWhenNearby");
static_assert(offsetof(UFNECon_conversation_component, verse_0xA89F1EDE_ShowIndicatorBubble) == 90, "Offset mismatch for UFNECon_conversation_component::verse_0xA89F1EDE_ShowIndicatorBubble");
static_assert(offsetof(UFNECon_conversation_component, verse_0x78107DFF_IndicatorBubbleRange) == 96, "Offset mismatch for UFNECon_conversation_component::verse_0x78107DFF_IndicatorBubbleRange");
static_assert(offsetof(UFNECon_conversation_component, verse_0x6EF46B10_ShowConversationText) == 104, "Offset mismatch for UFNECon_conversation_component::verse_0x6EF46B10_ShowConversationText");
static_assert(offsetof(UFNECon_conversation_component, verse_0x2AFE2AC7_ConversationDatabase) == 112, "Offset mismatch for UFNECon_conversation_component::verse_0x2AFE2AC7_ConversationDatabase");
static_assert(offsetof(UFNECon_conversation_component, verse_0xB8B80D31_MaximumParticipatingAgents) == 168, "Offset mismatch for UFNECon_conversation_component::verse_0xB8B80D31_MaximumParticipatingAgents");
static_assert(offsetof(UFNECon_conversation_component, verse_0x1EA0DE50_ConversationStartedEvent) == 176, "Offset mismatch for UFNECon_conversation_component::verse_0x1EA0DE50_ConversationStartedEvent");
static_assert(offsetof(UFNECon_conversation_component, verse_0x23D944E3_ConversationEndedEvent) == 184, "Offset mismatch for UFNECon_conversation_component::verse_0x23D944E3_ConversationEndedEvent");

// /FNE_Conversation/_Verse/VNI/FNE_ConversationRuntime.FNECon_conversation_database
// Kind: VerseClass; super: None
class UFNECon_conversation_database
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t AssetForEditor[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    FName AssetPathName; // 0x0058 (Size: 0x8, Type: NameProperty)
    void* Object; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFNECon_conversation_database, AssetForEditor) == 56, "Offset mismatch for UFNECon_conversation_database::AssetForEditor");
static_assert(offsetof(UFNECon_conversation_database, AssetPathName) == 88, "Offset mismatch for UFNECon_conversation_database::AssetPathName");
static_assert(offsetof(UFNECon_conversation_database, Object) == 96, "Offset mismatch for UFNECon_conversation_database::Object");
