/**
 * decamp dumper generated SDK
 * Package: /SpriteExtractionGameplay/Conversations/Tasks/SpriteExtractionGameplay_SpriteUpgrade_ServiceBase
 */
#pragma once
#include "Basic.h"

// /SpriteExtractionGameplay/Conversations/Tasks/SpriteExtractionGameplay_SpriteUpgrade_ServiceBase.SpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C
// Kind: BlueprintGeneratedClass; super: SpriteExtraction_ServiceNode
class USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    std::uint8_t RequirementMatchPolicy; // 0x0190 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0191
    TArray<void*> Requirements; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EffectRecipientConfigs; // 0x01A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ServiceGameplayTag[0x8]; // 0x01B8 (Size: 0x8, Type: StructProperty)
    FString AnalyticsEventName; // 0x01C0 (Size: 0x10, Type: StrProperty)
    std::uint8_t VisibilityPolicy; // 0x01D0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPricingEnabled; // 0x01D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x01D2
    std::uint8_t PricingKey[0x4]; // 0x01D4 (Size: 0x4, Type: NameProperty)
    std::int32_t PricingColumn; // 0x01D8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x01DC
    std::uint8_t LimitedStockCount[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    void* ServiceBriefConfigCollection; // 0x0208 (Size: 0x8, Type: ObjectProperty)
    FName ServiceBriefCollectionKeyOveride; // 0x0210 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C, RequirementMatchPolicy) == 400, "Offset mismatch for USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C::RequirementMatchPolicy");
static_assert(offsetof(USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C, Requirements) == 408, "Offset mismatch for USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C::Requirements");
static_assert(offsetof(USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C, EffectRecipientConfigs) == 424, "Offset mismatch for USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C::EffectRecipientConfigs");
static_assert(offsetof(USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C, ServiceGameplayTag) == 440, "Offset mismatch for USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C::ServiceGameplayTag");
static_assert(offsetof(USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C, AnalyticsEventName) == 448, "Offset mismatch for USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C::AnalyticsEventName");
static_assert(offsetof(USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C, VisibilityPolicy) == 464, "Offset mismatch for USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C::VisibilityPolicy");
static_assert(offsetof(USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C, bPricingEnabled) == 465, "Offset mismatch for USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C::bPricingEnabled");
static_assert(offsetof(USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C, PricingKey) == 468, "Offset mismatch for USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C::PricingKey");
static_assert(offsetof(USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C, PricingColumn) == 472, "Offset mismatch for USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C::PricingColumn");
static_assert(offsetof(USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C, LimitedStockCount) == 480, "Offset mismatch for USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C::LimitedStockCount");
static_assert(offsetof(USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C, ServiceBriefConfigCollection) == 520, "Offset mismatch for USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C::ServiceBriefConfigCollection");
static_assert(offsetof(USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C, ServiceBriefCollectionKeyOveride) == 528, "Offset mismatch for USpriteExtractionGameplay_SpriteUpgrade_ServiceBase_C::ServiceBriefCollectionKeyOveride");
