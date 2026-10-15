/**
 * decamp dumper generated SDK
 * Package: /BattleRoyaleFrontend/BP_BattleRoyaleFrontendExperienceFlow
 */
#pragma once
#include "Basic.h"

// /BattleRoyaleFrontend/BP_BattleRoyaleFrontendExperienceFlow.BP_BattleRoyaleFrontendExperienceFlow_C
// Kind: BlueprintGeneratedClass; super: BattleRoyaleFrontendExperienceFlow
class UBP_BattleRoyaleFrontendExperienceFlow_C
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> DefaultFlowStepArray; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FirstTimeSeasonFlowStepArray; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> BRVideoRating; // 0x0070 (Size: 0x10, Type: MapProperty)
    TArray<void*> ProductVideoOverrides; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x18]; // 0x0090
    TSoftClassPtr<void> VideoPlayerClass; // 0x00A8 (Size: 0x28, Type: SoftClassProperty)
    void* HabaneroIntroModalClass; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t FireModeSelectionReminderModalClass[0x20]; // 0x00D8 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t FireModeSelectionScreenClass[0x20]; // 0x00F8 (Size: 0x20, Type: SoftClassProperty)
    void* SimpleBuildAndEditModalHelper; // 0x0118 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UBP_BattleRoyaleFrontendExperienceFlow_C, DefaultFlowStepArray) == 80, "Offset mismatch for UBP_BattleRoyaleFrontendExperienceFlow_C::DefaultFlowStepArray");
static_assert(offsetof(UBP_BattleRoyaleFrontendExperienceFlow_C, FirstTimeSeasonFlowStepArray) == 96, "Offset mismatch for UBP_BattleRoyaleFrontendExperienceFlow_C::FirstTimeSeasonFlowStepArray");
static_assert(offsetof(UBP_BattleRoyaleFrontendExperienceFlow_C, BRVideoRating) == 112, "Offset mismatch for UBP_BattleRoyaleFrontendExperienceFlow_C::BRVideoRating");
static_assert(offsetof(UBP_BattleRoyaleFrontendExperienceFlow_C, ProductVideoOverrides) == 128, "Offset mismatch for UBP_BattleRoyaleFrontendExperienceFlow_C::ProductVideoOverrides");
static_assert(offsetof(UBP_BattleRoyaleFrontendExperienceFlow_C, VideoPlayerClass) == 168, "Offset mismatch for UBP_BattleRoyaleFrontendExperienceFlow_C::VideoPlayerClass");
static_assert(offsetof(UBP_BattleRoyaleFrontendExperienceFlow_C, HabaneroIntroModalClass) == 208, "Offset mismatch for UBP_BattleRoyaleFrontendExperienceFlow_C::HabaneroIntroModalClass");
static_assert(offsetof(UBP_BattleRoyaleFrontendExperienceFlow_C, FireModeSelectionReminderModalClass) == 216, "Offset mismatch for UBP_BattleRoyaleFrontendExperienceFlow_C::FireModeSelectionReminderModalClass");
static_assert(offsetof(UBP_BattleRoyaleFrontendExperienceFlow_C, FireModeSelectionScreenClass) == 248, "Offset mismatch for UBP_BattleRoyaleFrontendExperienceFlow_C::FireModeSelectionScreenClass");
static_assert(offsetof(UBP_BattleRoyaleFrontendExperienceFlow_C, SimpleBuildAndEditModalHelper) == 280, "Offset mismatch for UBP_BattleRoyaleFrontendExperienceFlow_C::SimpleBuildAndEditModalHelper");
