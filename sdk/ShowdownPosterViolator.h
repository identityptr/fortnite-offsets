/**
 * decamp dumper generated SDK
 * Package: /CompeteOldTab/Frontend/Showdown/ShowdownPosterViolator
 */
#pragma once
#include "Basic.h"

// /CompeteOldTab/Frontend/Showdown/ShowdownPosterViolator.ShowdownPosterViolator_C
// Kind: WidgetBlueprintGeneratedClass; super: FortTournamentPosterViolator
class UShowdownPosterViolator_C
{
public:
    std::uint8_t Pad_0000[0x370]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0370 (Size: 0x8, Type: StructProperty)
    void* NoViolator; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    void* LiveViolator; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* LiveEventViolator; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    void* InformationViolator; // 0x0390 (Size: 0x8, Type: ObjectProperty)
    void* FutureEventViolator; // 0x0398 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UShowdownPosterViolator_C, UberGraphFrame) == 880, "Offset mismatch for UShowdownPosterViolator_C::UberGraphFrame");
static_assert(offsetof(UShowdownPosterViolator_C, NoViolator) == 888, "Offset mismatch for UShowdownPosterViolator_C::NoViolator");
static_assert(offsetof(UShowdownPosterViolator_C, LiveViolator) == 896, "Offset mismatch for UShowdownPosterViolator_C::LiveViolator");
static_assert(offsetof(UShowdownPosterViolator_C, LiveEventViolator) == 904, "Offset mismatch for UShowdownPosterViolator_C::LiveEventViolator");
static_assert(offsetof(UShowdownPosterViolator_C, InformationViolator) == 912, "Offset mismatch for UShowdownPosterViolator_C::InformationViolator");
static_assert(offsetof(UShowdownPosterViolator_C, FutureEventViolator) == 920, "Offset mismatch for UShowdownPosterViolator_C::FutureEventViolator");
