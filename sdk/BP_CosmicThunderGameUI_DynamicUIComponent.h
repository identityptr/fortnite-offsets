/**
 * decamp dumper generated SDK
 * Package: /CosmicThunderGameUI/DynamicUI/BP_CosmicThunderGameUI_DynamicUIComponent
 */
#pragma once
#include "Basic.h"

// /CosmicThunderGameUI/DynamicUI/BP_CosmicThunderGameUI_DynamicUIComponent.BP_CosmicThunderGameUI_DynamicUIComponent_C
// Kind: BlueprintGeneratedClass; super: FortDynamicUIDirectorComponent
class UBP_CosmicThunderGameUI_DynamicUIComponent_C
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t UberGraphFrame[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t ExtractionBannerActive; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t MatchEnd; // 0x00D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00D2
    void* TokenAddedUIScene; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    void* OnPlayerPlaceChangedRef; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t BannerNotificationTimerHandle[0x8]; // 0x00E8 (Size: 0x8, Type: StructProperty)
    std::uint8_t BannerNotificationSceneDuration[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBP_CosmicThunderGameUI_DynamicUIComponent_C, UberGraphFrame) == 192, "Offset mismatch for UBP_CosmicThunderGameUI_DynamicUIComponent_C::UberGraphFrame");
static_assert(offsetof(UBP_CosmicThunderGameUI_DynamicUIComponent_C, ExtractionBannerActive) == 208, "Offset mismatch for UBP_CosmicThunderGameUI_DynamicUIComponent_C::ExtractionBannerActive");
static_assert(offsetof(UBP_CosmicThunderGameUI_DynamicUIComponent_C, MatchEnd) == 209, "Offset mismatch for UBP_CosmicThunderGameUI_DynamicUIComponent_C::MatchEnd");
static_assert(offsetof(UBP_CosmicThunderGameUI_DynamicUIComponent_C, TokenAddedUIScene) == 216, "Offset mismatch for UBP_CosmicThunderGameUI_DynamicUIComponent_C::TokenAddedUIScene");
static_assert(offsetof(UBP_CosmicThunderGameUI_DynamicUIComponent_C, OnPlayerPlaceChangedRef) == 224, "Offset mismatch for UBP_CosmicThunderGameUI_DynamicUIComponent_C::OnPlayerPlaceChangedRef");
static_assert(offsetof(UBP_CosmicThunderGameUI_DynamicUIComponent_C, BannerNotificationTimerHandle) == 232, "Offset mismatch for UBP_CosmicThunderGameUI_DynamicUIComponent_C::BannerNotificationTimerHandle");
static_assert(offsetof(UBP_CosmicThunderGameUI_DynamicUIComponent_C, BannerNotificationSceneDuration) == 240, "Offset mismatch for UBP_CosmicThunderGameUI_DynamicUIComponent_C::BannerNotificationSceneDuration");
