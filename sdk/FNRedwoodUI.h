/**
 * decamp dumper generated SDK
 * Package: /Script/FNRedwoodUI
 */
#pragma once
#include "Basic.h"

// /Script/FNRedwoodUI.FNRedwoodFeedbackInjector
// Kind: Class; super: SocialListEntryBase
class UFNRedwoodFeedbackInjector
{
public:
    std::uint8_t Pad_0000[0x1610]; // 0x0000
    std::uint8_t ReportId[0x4]; // 0x1610 (Size: 0x4, Type: NameProperty)
    std::uint8_t ReportInjectCategoryName[0x4]; // 0x1614 (Size: 0x4, Type: NameProperty)
    std::uint8_t ReportOption[0x10]; // 0x1618 (Size: 0x10, Type: TextProperty)
    std::uint8_t ReportOptionSummary[0x10]; // 0x1628 (Size: 0x10, Type: TextProperty)
    FText ReportOptionDescription; // 0x1638 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UFNRedwoodFeedbackInjector, ReportId) == 5648, "Offset mismatch for UFNRedwoodFeedbackInjector::ReportId");
static_assert(offsetof(UFNRedwoodFeedbackInjector, ReportInjectCategoryName) == 5652, "Offset mismatch for UFNRedwoodFeedbackInjector::ReportInjectCategoryName");
static_assert(offsetof(UFNRedwoodFeedbackInjector, ReportOption) == 5656, "Offset mismatch for UFNRedwoodFeedbackInjector::ReportOption");
static_assert(offsetof(UFNRedwoodFeedbackInjector, ReportOptionSummary) == 5672, "Offset mismatch for UFNRedwoodFeedbackInjector::ReportOptionSummary");
static_assert(offsetof(UFNRedwoodFeedbackInjector, ReportOptionDescription) == 5688, "Offset mismatch for UFNRedwoodFeedbackInjector::ReportOptionDescription");
