/**
 * decamp dumper generated SDK
 * Package: /FMJamDecks/UI/Indicators/WBP_JamDeckCardIndicator
 */
#pragma once
#include "Basic.h"

// /FMJamDecks/UI/Indicators/WBP_JamDeckCardIndicator.WBP_JamDeckCardIndicator_C
// Kind: WidgetBlueprintGeneratedClass; super: JamDeckIndicatorBase
class UWBP_JamDeckCardIndicator_C
{
public:
    std::uint8_t Pad_0000[0x438]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0438 (Size: 0x8, Type: StructProperty)
    void* WBP_JamPrompts; // 0x0440 (Size: 0x8, Type: ObjectProperty)
    void* WBP_JamLoopDisplay; // 0x0448 (Size: 0x8, Type: ObjectProperty)
    void* WBP_Background; // 0x0450 (Size: 0x8, Type: ObjectProperty)
    void* PrivacyMessage; // 0x0458 (Size: 0x8, Type: ObjectProperty)
    void* Player_Avatar_Icon; // 0x0460 (Size: 0x8, Type: ObjectProperty)
    void* OwnerLabel; // 0x0468 (Size: 0x8, Type: ObjectProperty)
    void* Line_Separator; // 0x0470 (Size: 0x8, Type: ObjectProperty)
    void* FortLazyImage; // 0x0478 (Size: 0x8, Type: ObjectProperty)
    void* TransitionON; // 0x0480 (Size: 0x8, Type: ObjectProperty)
    void* JamDeckViewModel; // 0x0488 (Size: 0x8, Type: ObjectProperty)
    void* JamGlobalStateVM; // 0x0490 (Size: 0x8, Type: ObjectProperty)
    void* CommonTextBlock; // 0x0498 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AddJam_Prompt_Padding[0x10]; // 0x04A0 (Size: 0x10, Type: StructProperty)
    std::uint8_t Brush[0xB0]; // 0x04B0 (Size: 0xB0, Type: StructProperty)
    std::uint8_t JamPromptsPadding[0x10]; // 0x0560 (Size: 0x10, Type: StructProperty)
    void* InnerColliderTagAddedAction; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    void* InnerColliderTagRemovedAction; // 0x0578 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InnerColliderTag[0x1]; // 0x0580 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWBP_JamDeckCardIndicator_C, UberGraphFrame) == 1080, "Offset mismatch for UWBP_JamDeckCardIndicator_C::UberGraphFrame");
static_assert(offsetof(UWBP_JamDeckCardIndicator_C, WBP_JamPrompts) == 1088, "Offset mismatch for UWBP_JamDeckCardIndicator_C::WBP_JamPrompts");
static_assert(offsetof(UWBP_JamDeckCardIndicator_C, WBP_JamLoopDisplay) == 1096, "Offset mismatch for UWBP_JamDeckCardIndicator_C::WBP_JamLoopDisplay");
static_assert(offsetof(UWBP_JamDeckCardIndicator_C, WBP_Background) == 1104, "Offset mismatch for UWBP_JamDeckCardIndicator_C::WBP_Background");
static_assert(offsetof(UWBP_JamDeckCardIndicator_C, PrivacyMessage) == 1112, "Offset mismatch for UWBP_JamDeckCardIndicator_C::PrivacyMessage");
static_assert(offsetof(UWBP_JamDeckCardIndicator_C, Player_Avatar_Icon) == 1120, "Offset mismatch for UWBP_JamDeckCardIndicator_C::Player_Avatar_Icon");
static_assert(offsetof(UWBP_JamDeckCardIndicator_C, OwnerLabel) == 1128, "Offset mismatch for UWBP_JamDeckCardIndicator_C::OwnerLabel");
static_assert(offsetof(UWBP_JamDeckCardIndicator_C, Line_Separator) == 1136, "Offset mismatch for UWBP_JamDeckCardIndicator_C::Line_Separator");
static_assert(offsetof(UWBP_JamDeckCardIndicator_C, FortLazyImage) == 1144, "Offset mismatch for UWBP_JamDeckCardIndicator_C::FortLazyImage");
static_assert(offsetof(UWBP_JamDeckCardIndicator_C, TransitionON) == 1152, "Offset mismatch for UWBP_JamDeckCardIndicator_C::TransitionON");
static_assert(offsetof(UWBP_JamDeckCardIndicator_C, JamDeckViewModel) == 1160, "Offset mismatch for UWBP_JamDeckCardIndicator_C::JamDeckViewModel");
static_assert(offsetof(UWBP_JamDeckCardIndicator_C, JamGlobalStateVM) == 1168, "Offset mismatch for UWBP_JamDeckCardIndicator_C::JamGlobalStateVM");
static_assert(offsetof(UWBP_JamDeckCardIndicator_C, CommonTextBlock) == 1176, "Offset mismatch for UWBP_JamDeckCardIndicator_C::CommonTextBlock");
static_assert(offsetof(UWBP_JamDeckCardIndicator_C, AddJam_Prompt_Padding) == 1184, "Offset mismatch for UWBP_JamDeckCardIndicator_C::AddJam_Prompt_Padding");
static_assert(offsetof(UWBP_JamDeckCardIndicator_C, Brush) == 1200, "Offset mismatch for UWBP_JamDeckCardIndicator_C::Brush");
static_assert(offsetof(UWBP_JamDeckCardIndicator_C, JamPromptsPadding) == 1376, "Offset mismatch for UWBP_JamDeckCardIndicator_C::JamPromptsPadding");
static_assert(offsetof(UWBP_JamDeckCardIndicator_C, InnerColliderTagAddedAction) == 1392, "Offset mismatch for UWBP_JamDeckCardIndicator_C::InnerColliderTagAddedAction");
static_assert(offsetof(UWBP_JamDeckCardIndicator_C, InnerColliderTagRemovedAction) == 1400, "Offset mismatch for UWBP_JamDeckCardIndicator_C::InnerColliderTagRemovedAction");
static_assert(offsetof(UWBP_JamDeckCardIndicator_C, InnerColliderTag) == 1408, "Offset mismatch for UWBP_JamDeckCardIndicator_C::InnerColliderTag");
