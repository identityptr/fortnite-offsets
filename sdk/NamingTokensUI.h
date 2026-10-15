/**
 * decamp dumper generated SDK
 * Package: /Script/NamingTokensUI
 */
#pragma once
#include "Basic.h"

// /Script/NamingTokensUI.NamingTokensEditableText
// Kind: Class; super: MultiLineEditableText
class UNamingTokensEditableText
{
public:
    std::uint8_t Pad_0000[0x4E0]; // 0x0000
    std::uint8_t FilterArgs[0x18]; // 0x04E0 (Size: 0x18, Type: StructProperty)
    TArray<void*> NamespaceSuggestionPriority; // 0x04F8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnableSuggestionDropdown; // 0x0508 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFullyQualifyFilteredNamespaces; // 0x0509 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsMultiline; // 0x050A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayTokenIcon; // 0x050B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayErrorMessage; // 0x050C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayBorderImage; // 0x050D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x050E
    std::uint8_t ArgumentStyle[0x2E0]; // 0x0510 (Size: 0x2E0, Type: StructProperty)
    std::uint8_t BackgroundColor[0x14]; // 0x07F0 (Size: 0x14, Type: StructProperty)
    std::uint8_t bCanDisplayResolvedText; // 0x0804 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowUnknownTokenWarning; // 0x0805 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowUnsetTokenWarning; // 0x0806 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x0807
    FMulticastInlineDelegate OnPreEvaluateNamingTokens; // 0x0808 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x20]; // 0x0818
    TArray<void*> Contexts; // 0x0838 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNamingTokensEditableText, FilterArgs) == 1248, "Offset mismatch for UNamingTokensEditableText::FilterArgs");
static_assert(offsetof(UNamingTokensEditableText, NamespaceSuggestionPriority) == 1272, "Offset mismatch for UNamingTokensEditableText::NamespaceSuggestionPriority");
static_assert(offsetof(UNamingTokensEditableText, bEnableSuggestionDropdown) == 1288, "Offset mismatch for UNamingTokensEditableText::bEnableSuggestionDropdown");
static_assert(offsetof(UNamingTokensEditableText, bFullyQualifyFilteredNamespaces) == 1289, "Offset mismatch for UNamingTokensEditableText::bFullyQualifyFilteredNamespaces");
static_assert(offsetof(UNamingTokensEditableText, bIsMultiline) == 1290, "Offset mismatch for UNamingTokensEditableText::bIsMultiline");
static_assert(offsetof(UNamingTokensEditableText, bDisplayTokenIcon) == 1291, "Offset mismatch for UNamingTokensEditableText::bDisplayTokenIcon");
static_assert(offsetof(UNamingTokensEditableText, bDisplayErrorMessage) == 1292, "Offset mismatch for UNamingTokensEditableText::bDisplayErrorMessage");
static_assert(offsetof(UNamingTokensEditableText, bDisplayBorderImage) == 1293, "Offset mismatch for UNamingTokensEditableText::bDisplayBorderImage");
static_assert(offsetof(UNamingTokensEditableText, ArgumentStyle) == 1296, "Offset mismatch for UNamingTokensEditableText::ArgumentStyle");
static_assert(offsetof(UNamingTokensEditableText, BackgroundColor) == 2032, "Offset mismatch for UNamingTokensEditableText::BackgroundColor");
static_assert(offsetof(UNamingTokensEditableText, bCanDisplayResolvedText) == 2052, "Offset mismatch for UNamingTokensEditableText::bCanDisplayResolvedText");
static_assert(offsetof(UNamingTokensEditableText, bShowUnknownTokenWarning) == 2053, "Offset mismatch for UNamingTokensEditableText::bShowUnknownTokenWarning");
static_assert(offsetof(UNamingTokensEditableText, bShowUnsetTokenWarning) == 2054, "Offset mismatch for UNamingTokensEditableText::bShowUnsetTokenWarning");
static_assert(offsetof(UNamingTokensEditableText, OnPreEvaluateNamingTokens) == 2056, "Offset mismatch for UNamingTokensEditableText::OnPreEvaluateNamingTokens");
static_assert(offsetof(UNamingTokensEditableText, Contexts) == 2104, "Offset mismatch for UNamingTokensEditableText::Contexts");
