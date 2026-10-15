/**
 * decamp dumper generated SDK
 * Package: /FortniteCore/PlayerStateContextualReactions/BP_PlayerStateComponent_ContextualReactions
 */
#pragma once
#include "Basic.h"

// /FortniteCore/PlayerStateContextualReactions/BP_PlayerStateComponent_ContextualReactions.BP_PlayerStateComponent_ContextualReactions_C
// Kind: BlueprintGeneratedClass; super: FortGameFrameworkComponent_ContextualReactions
class UBP_PlayerStateComponent_ContextualReactions_C
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t ReactionsDataRegistry[0x30]; // 0x00C0 (Size: 0x30, Type: StructProperty)
    float AnalyticFlushFrequencyInSeconds; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplyReactionToParticipants; // 0x00F4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3B]; // 0x00F5
    void* LoadedDataTable; // 0x0130 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBP_PlayerStateComponent_ContextualReactions_C, ReactionsDataRegistry) == 192, "Offset mismatch for UBP_PlayerStateComponent_ContextualReactions_C::ReactionsDataRegistry");
static_assert(offsetof(UBP_PlayerStateComponent_ContextualReactions_C, AnalyticFlushFrequencyInSeconds) == 240, "Offset mismatch for UBP_PlayerStateComponent_ContextualReactions_C::AnalyticFlushFrequencyInSeconds");
static_assert(offsetof(UBP_PlayerStateComponent_ContextualReactions_C, bApplyReactionToParticipants) == 244, "Offset mismatch for UBP_PlayerStateComponent_ContextualReactions_C::bApplyReactionToParticipants");
static_assert(offsetof(UBP_PlayerStateComponent_ContextualReactions_C, LoadedDataTable) == 304, "Offset mismatch for UBP_PlayerStateComponent_ContextualReactions_C::LoadedDataTable");
