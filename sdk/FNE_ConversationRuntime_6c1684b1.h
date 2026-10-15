/**
 * decamp dumper generated SDK
 * Package: /Script/FNE_ConversationRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FNE_ConversationRuntime.ConversationEntityProxyActor
// Kind: Class; super: Actor
class UConversationEntityProxyActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    TArray<void*> ControllersInConversation; // 0x0270 (Size: 0x10, Type: ArrayProperty)
    void* RootSceneComponent; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* NonPlayerConversationComponent; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SpeakerName[0x30]; // 0x0290 (Size: 0x30, Type: StructProperty)
    void* CachedConversationEntityComponent; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UConversationEntityProxyActor, ControllersInConversation) == 624, "Offset mismatch for UConversationEntityProxyActor::ControllersInConversation");
static_assert(offsetof(UConversationEntityProxyActor, RootSceneComponent) == 640, "Offset mismatch for UConversationEntityProxyActor::RootSceneComponent");
static_assert(offsetof(UConversationEntityProxyActor, NonPlayerConversationComponent) == 648, "Offset mismatch for UConversationEntityProxyActor::NonPlayerConversationComponent");
static_assert(offsetof(UConversationEntityProxyActor, SpeakerName) == 656, "Offset mismatch for UConversationEntityProxyActor::SpeakerName");
static_assert(offsetof(UConversationEntityProxyActor, CachedConversationEntityComponent) == 704, "Offset mismatch for UConversationEntityProxyActor::CachedConversationEntityComponent");

// /Script/FNE_ConversationRuntime.FNE_NonPlayerConversationParticipantComponent
// Kind: Class; super: FortNonPlayerConversationParticipantComponent
class UFNE_NonPlayerConversationParticipantComponent
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    FMulticastInlineDelegate OnDialogMarkerInteractionStateChanged; // 0x01B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnReceivedLocalClientConversationMessage; // 0x01C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x01D8
    FMulticastInlineDelegate OnEnterConversationStateDelegate; // 0x01F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x18]; // 0x0200
    FMulticastInlineDelegate OnConversationEnded; // 0x0218 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMarkerSpawnedDelegate; // 0x0228 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnSingleConversationEnded; // 0x0238 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x50]; // 0x0248
    std::uint8_t ConversationEntryTag[0x4]; // 0x0298 (Size: 0x4, Type: StructProperty)
    std::uint8_t InteractorParticipantTag[0x4]; // 0x029C (Size: 0x4, Type: StructProperty)
    std::uint8_t SelfParticipantTag[0x4]; // 0x02A0 (Size: 0x4, Type: StructProperty)
    std::uint8_t ServiceProviderIDTag[0x4]; // 0x02A4 (Size: 0x4, Type: StructProperty)
    std::uint8_t ConditionalBenefitsConfigIDTag[0x8]; // 0x02A8 (Size: 0x8, Type: StructProperty)
    std::uint8_t ConsumableDiscountRowHandle[0x10]; // 0x02B0 (Size: 0x10, Type: StructProperty)
    std::uint8_t bShowNameWhenInRange; // 0x02C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowIndicatorBubble; // 0x02C1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowNameplateOnPreview; // 0x02C2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowConversationText; // 0x02C3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bConversationsEnabled; // 0x02C4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x23]; // 0x02C5
    std::uint8_t InitiateConversationStatEventType; // 0x02E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t CompletedConversationStatEventType; // 0x02E9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x6]; // 0x02EA
    void* ConversationMemoryComponent; // 0x02F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bDialogMarkerBoundsAdjustmentEnabled; // 0x02F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideRelativeLocation; // 0x02F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x6]; // 0x02FA
    std::uint8_t RelativeLocationOverride[0x18]; // 0x0300 (Size: 0x18, Type: StructProperty)
    std::uint8_t bOverrideParticipantDisplayName; // 0x0318 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowEmptyOrWhitespaceDisplayName; // 0x0319 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideMaxDrawDistance; // 0x031A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x1]; // 0x031B
    float MaxDrawDistanceOverride; // 0x031C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ParticipantDisplayNameOverride[0x10]; // 0x0320 (Size: 0x10, Type: TextProperty)
    std::uint8_t ParticipantConversationMaxNameOverride[0x10]; // 0x0330 (Size: 0x10, Type: TextProperty)
    std::uint8_t DialogMarkerIndicatorSoftIcon[0x20]; // 0x0340 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CreativeConversationMaxMarkerIndicatorSoftIcon[0x20]; // 0x0360 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t CreativeConversationMaxTextColor[0x18]; // 0x0380 (Size: 0x18, Type: StructProperty)
    void* Gifts; // 0x0398 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GiftsSeasonDataTableTag[0x8]; // 0x03A0 (Size: 0x8, Type: StructProperty)
    void* GiftTypeDefinitions; // 0x03A8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GiftTypeDefinitionsSeasonDataAssetTag[0x8]; // 0x03B0 (Size: 0x8, Type: StructProperty)
    void* GiftItemInventory; // 0x03B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GiftItemInventorySeasonDataTableTag[0x4]; // 0x03C0 (Size: 0x4, Type: StructProperty)
    std::int32_t MaxServices; // 0x03C4 (Size: 0x4, Type: IntProperty)
    void* Services; // 0x03C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ServicesOverride[0x8]; // 0x03D0 (Size: 0x8, Type: StructProperty)
    void* SalesInventory; // 0x03D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SalesInventoryOverride[0x8]; // 0x03E0 (Size: 0x8, Type: StructProperty)
    void* DiscountTable; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
    void* QuestsTable; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ServicePricingKeyRemappingsTag[0x8]; // 0x03F8 (Size: 0x8, Type: StructProperty)
    void* ServicePricingKeyRemappingsTable; // 0x0400 (Size: 0x8, Type: ObjectProperty)
    void* ConditionalBenefitsConfigCollection; // 0x0408 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ConditionalBenefitsSeasonDataAssetTag[0x8]; // 0x0410 (Size: 0x8, Type: StructProperty)
    std::uint8_t ServiceDiscountBenefitSettings[0x30]; // 0x0418 (Size: 0x30, Type: StructProperty)
    std::uint8_t bQuestsRequireProviderTagMatch; // 0x0448 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x3]; // 0x0449
    std::int32_t MaxQuestsToSupportFromSingleProvider; // 0x044C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxQuestsToSupportForSingleFilterCategory; // 0x0450 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0009[0x4]; // 0x0454
    void* CustomDialogMarkerClass; // 0x0458 (Size: 0x8, Type: ClassProperty)
    std::uint8_t CustomDialogMarkerTag[0x8]; // 0x0460 (Size: 0x8, Type: StructProperty)
    TArray<void*> SupportedQuests; // 0x0468 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> SupportedQuestsByFilterCategory; // 0x0478 (Size: 0x10, Type: MapProperty)
    TArray<void*> SupportedServices; // 0x0488 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SupportedSales; // 0x0498 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SupportedGiftTypes; // 0x04A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SupportedGiftItems; // 0x04B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SupportedServiceKeyRemappings[0x10]; // 0x04C8 (Size: 0x10, Type: StructProperty)
    TArray<void*> HideUIIndicatorReasons; // 0x04D8 (Size: 0x10, Type: ArrayProperty)
    void* ResolvedGiftTypeDefinitions; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
    void* ResolvedConditionalBenefitsConfigCollection; // 0x04F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bServiceDataInitialized; // 0x04F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x7]; // 0x04F9
    TMap<void*, void*> GiftCooldownTimestamps; // 0x0500 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_000B[0x20]; // 0x0510
    TArray<void*> BannedActors; // 0x0530 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, OnDialogMarkerInteractionStateChanged) == 440, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::OnDialogMarkerInteractionStateChanged");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, OnReceivedLocalClientConversationMessage) == 456, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::OnReceivedLocalClientConversationMessage");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, OnEnterConversationStateDelegate) == 496, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::OnEnterConversationStateDelegate");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, OnConversationEnded) == 536, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::OnConversationEnded");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, OnMarkerSpawnedDelegate) == 552, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::OnMarkerSpawnedDelegate");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, OnSingleConversationEnded) == 568, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::OnSingleConversationEnded");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, ConversationEntryTag) == 664, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::ConversationEntryTag");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, InteractorParticipantTag) == 668, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::InteractorParticipantTag");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, SelfParticipantTag) == 672, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::SelfParticipantTag");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, ServiceProviderIDTag) == 676, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::ServiceProviderIDTag");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, ConditionalBenefitsConfigIDTag) == 680, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::ConditionalBenefitsConfigIDTag");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, ConsumableDiscountRowHandle) == 688, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::ConsumableDiscountRowHandle");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, bShowNameWhenInRange) == 704, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::bShowNameWhenInRange");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, bShowIndicatorBubble) == 705, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::bShowIndicatorBubble");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, bShowNameplateOnPreview) == 706, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::bShowNameplateOnPreview");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, bShowConversationText) == 707, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::bShowConversationText");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, bConversationsEnabled) == 708, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::bConversationsEnabled");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, InitiateConversationStatEventType) == 744, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::InitiateConversationStatEventType");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, CompletedConversationStatEventType) == 745, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::CompletedConversationStatEventType");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, ConversationMemoryComponent) == 752, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::ConversationMemoryComponent");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, bDialogMarkerBoundsAdjustmentEnabled) == 760, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::bDialogMarkerBoundsAdjustmentEnabled");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, bOverrideRelativeLocation) == 761, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::bOverrideRelativeLocation");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, RelativeLocationOverride) == 768, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::RelativeLocationOverride");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, bOverrideParticipantDisplayName) == 792, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::bOverrideParticipantDisplayName");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, bAllowEmptyOrWhitespaceDisplayName) == 793, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::bAllowEmptyOrWhitespaceDisplayName");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, bOverrideMaxDrawDistance) == 794, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::bOverrideMaxDrawDistance");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, MaxDrawDistanceOverride) == 796, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::MaxDrawDistanceOverride");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, ParticipantDisplayNameOverride) == 800, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::ParticipantDisplayNameOverride");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, ParticipantConversationMaxNameOverride) == 816, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::ParticipantConversationMaxNameOverride");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, DialogMarkerIndicatorSoftIcon) == 832, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::DialogMarkerIndicatorSoftIcon");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, CreativeConversationMaxMarkerIndicatorSoftIcon) == 864, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::CreativeConversationMaxMarkerIndicatorSoftIcon");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, CreativeConversationMaxTextColor) == 896, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::CreativeConversationMaxTextColor");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, Gifts) == 920, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::Gifts");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, GiftsSeasonDataTableTag) == 928, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::GiftsSeasonDataTableTag");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, GiftTypeDefinitions) == 936, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::GiftTypeDefinitions");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, GiftTypeDefinitionsSeasonDataAssetTag) == 944, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::GiftTypeDefinitionsSeasonDataAssetTag");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, GiftItemInventory) == 952, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::GiftItemInventory");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, GiftItemInventorySeasonDataTableTag) == 960, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::GiftItemInventorySeasonDataTableTag");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, MaxServices) == 964, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::MaxServices");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, Services) == 968, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::Services");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, ServicesOverride) == 976, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::ServicesOverride");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, SalesInventory) == 984, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::SalesInventory");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, SalesInventoryOverride) == 992, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::SalesInventoryOverride");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, DiscountTable) == 1000, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::DiscountTable");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, QuestsTable) == 1008, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::QuestsTable");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, ServicePricingKeyRemappingsTag) == 1016, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::ServicePricingKeyRemappingsTag");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, ServicePricingKeyRemappingsTable) == 1024, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::ServicePricingKeyRemappingsTable");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, ConditionalBenefitsConfigCollection) == 1032, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::ConditionalBenefitsConfigCollection");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, ConditionalBenefitsSeasonDataAssetTag) == 1040, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::ConditionalBenefitsSeasonDataAssetTag");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, ServiceDiscountBenefitSettings) == 1048, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::ServiceDiscountBenefitSettings");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, bQuestsRequireProviderTagMatch) == 1096, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::bQuestsRequireProviderTagMatch");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, MaxQuestsToSupportFromSingleProvider) == 1100, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::MaxQuestsToSupportFromSingleProvider");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, MaxQuestsToSupportForSingleFilterCategory) == 1104, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::MaxQuestsToSupportForSingleFilterCategory");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, CustomDialogMarkerClass) == 1112, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::CustomDialogMarkerClass");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, CustomDialogMarkerTag) == 1120, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::CustomDialogMarkerTag");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, SupportedQuests) == 1128, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::SupportedQuests");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, SupportedQuestsByFilterCategory) == 1144, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::SupportedQuestsByFilterCategory");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, SupportedServices) == 1160, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::SupportedServices");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, SupportedSales) == 1176, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::SupportedSales");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, SupportedGiftTypes) == 1192, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::SupportedGiftTypes");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, SupportedGiftItems) == 1208, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::SupportedGiftItems");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, SupportedServiceKeyRemappings) == 1224, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::SupportedServiceKeyRemappings");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, HideUIIndicatorReasons) == 1240, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::HideUIIndicatorReasons");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, ResolvedGiftTypeDefinitions) == 1256, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::ResolvedGiftTypeDefinitions");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, ResolvedConditionalBenefitsConfigCollection) == 1264, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::ResolvedConditionalBenefitsConfigCollection");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, bServiceDataInitialized) == 1272, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::bServiceDataInitialized");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, GiftCooldownTimestamps) == 1280, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::GiftCooldownTimestamps");
static_assert(offsetof(UFNE_NonPlayerConversationParticipantComponent, BannedActors) == 1328, "Offset mismatch for UFNE_NonPlayerConversationParticipantComponent::BannedActors");
