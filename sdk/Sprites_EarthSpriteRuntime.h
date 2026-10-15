/**
 * decamp dumper generated SDK
 * Package: /Script/Sprites_EarthSpriteRuntime
 */
#pragma once
#include "Basic.h"

// /Script/Sprites_EarthSpriteRuntime.SpriteEarthCreatureTransform
// Kind: ScriptStruct; super: none
struct FSpriteEarthCreatureTransform
{
public:
    std::uint8_t RootTransform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t TrackedPawnLocation[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpriteEarthCreatureTransform, RootTransform) == 0, "Offset mismatch for FSpriteEarthCreatureTransform::RootTransform");
static_assert(offsetof(FSpriteEarthCreatureTransform, TrackedPawnLocation) == 96, "Offset mismatch for FSpriteEarthCreatureTransform::TrackedPawnLocation");

// /Script/Sprites_EarthSpriteRuntime.EarthSpriteExchangeItem_Service
// Kind: Class; super: FortConversationTaskNode_DataDrivenService
class UEarthSpriteExchangeItem_Service
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

static_assert(offsetof(UEarthSpriteExchangeItem_Service, RequirementMatchPolicy) == 400, "Offset mismatch for UEarthSpriteExchangeItem_Service::RequirementMatchPolicy");
static_assert(offsetof(UEarthSpriteExchangeItem_Service, Requirements) == 408, "Offset mismatch for UEarthSpriteExchangeItem_Service::Requirements");
static_assert(offsetof(UEarthSpriteExchangeItem_Service, EffectRecipientConfigs) == 424, "Offset mismatch for UEarthSpriteExchangeItem_Service::EffectRecipientConfigs");
static_assert(offsetof(UEarthSpriteExchangeItem_Service, ServiceGameplayTag) == 440, "Offset mismatch for UEarthSpriteExchangeItem_Service::ServiceGameplayTag");
static_assert(offsetof(UEarthSpriteExchangeItem_Service, AnalyticsEventName) == 448, "Offset mismatch for UEarthSpriteExchangeItem_Service::AnalyticsEventName");
static_assert(offsetof(UEarthSpriteExchangeItem_Service, VisibilityPolicy) == 464, "Offset mismatch for UEarthSpriteExchangeItem_Service::VisibilityPolicy");
static_assert(offsetof(UEarthSpriteExchangeItem_Service, bPricingEnabled) == 465, "Offset mismatch for UEarthSpriteExchangeItem_Service::bPricingEnabled");
static_assert(offsetof(UEarthSpriteExchangeItem_Service, PricingKey) == 468, "Offset mismatch for UEarthSpriteExchangeItem_Service::PricingKey");
static_assert(offsetof(UEarthSpriteExchangeItem_Service, PricingColumn) == 472, "Offset mismatch for UEarthSpriteExchangeItem_Service::PricingColumn");
static_assert(offsetof(UEarthSpriteExchangeItem_Service, LimitedStockCount) == 480, "Offset mismatch for UEarthSpriteExchangeItem_Service::LimitedStockCount");
static_assert(offsetof(UEarthSpriteExchangeItem_Service, ServiceBriefConfigCollection) == 520, "Offset mismatch for UEarthSpriteExchangeItem_Service::ServiceBriefConfigCollection");
static_assert(offsetof(UEarthSpriteExchangeItem_Service, ServiceBriefCollectionKeyOveride) == 528, "Offset mismatch for UEarthSpriteExchangeItem_Service::ServiceBriefCollectionKeyOveride");

// /Script/Sprites_EarthSpriteRuntime.EarthSpriteSelectorSubsystem
// Kind: Class; super: WorldSubsystem
class UEarthSpriteSelectorSubsystem
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Sprites_EarthSpriteRuntime.FortControllerRequirement_EarthSprite_NoTag
// Kind: Class; super: FortControllerRequirement
class UFortControllerRequirement_EarthSprite_NoTag
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bInverseCondition; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortControllerRequirement_EarthSprite_NoTag, bInverseCondition) == 40, "Offset mismatch for UFortControllerRequirement_EarthSprite_NoTag::bInverseCondition");

// /Script/Sprites_EarthSpriteRuntime.SpriteEarthCreatureAnimInstance
// Kind: Class; super: AnimInstance
class USpriteEarthCreatureAnimInstance
{
public:
    std::uint8_t Pad_0000[0x260]; // 0x0000
    std::uint8_t bIdleBreak; // 0x0260 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0261
    float Pitch; // 0x0264 (Size: 0x4, Type: FloatProperty)
    float Yaw; // 0x0268 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bTransitionIdleBreakToIdle; // 0x026C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x026D
    std::uint8_t IdleBreakRelevancyData[0x1]; // 0x0270 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USpriteEarthCreatureAnimInstance, bIdleBreak) == 608, "Offset mismatch for USpriteEarthCreatureAnimInstance::bIdleBreak");
static_assert(offsetof(USpriteEarthCreatureAnimInstance, Pitch) == 612, "Offset mismatch for USpriteEarthCreatureAnimInstance::Pitch");
static_assert(offsetof(USpriteEarthCreatureAnimInstance, Yaw) == 616, "Offset mismatch for USpriteEarthCreatureAnimInstance::Yaw");
static_assert(offsetof(USpriteEarthCreatureAnimInstance, bTransitionIdleBreakToIdle) == 620, "Offset mismatch for USpriteEarthCreatureAnimInstance::bTransitionIdleBreakToIdle");
static_assert(offsetof(USpriteEarthCreatureAnimInstance, IdleBreakRelevancyData) == 624, "Offset mismatch for USpriteEarthCreatureAnimInstance::IdleBreakRelevancyData");

// /Script/Sprites_EarthSpriteRuntime.SpriteEarthCreatureInterface
// Kind: Class; super: Interface
class USpriteEarthCreatureInterface
{
public:
    std::uint8_t Opaque[1];
};
