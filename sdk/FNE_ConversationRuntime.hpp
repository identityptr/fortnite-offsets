#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FNE_ConversationRuntime
{
    struct ConversationEntityProxyActor
    {
        static constexpr std::string_view Name = "ConversationEntityProxyActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ControllersInConversation = 0x278;
            static constexpr std::uintptr_t RootSceneComponent = 0x288;
            static constexpr std::uintptr_t NonPlayerConversationComponent = 0x290;
            static constexpr std::uintptr_t SpeakerName = 0x298;
            static constexpr std::uintptr_t CachedConversationEntityComponent = 0x2C8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ControllersInConversation", 0x278, "ArrayProperty"},
            {"RootSceneComponent", 0x288, "ObjectProperty"},
            {"NonPlayerConversationComponent", 0x290, "ObjectProperty"},
            {"SpeakerName", 0x298, "StructProperty"},
            {"CachedConversationEntityComponent", 0x2C8, "ObjectProperty"},
        }};
    };

    struct FNE_NonPlayerConversationParticipantComponent
    {
        static constexpr std::string_view Name = "FNE_NonPlayerConversationParticipantComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNonPlayerConversationParticipantComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnDialogMarkerInteractionStateChanged = 0x1B8;
            static constexpr std::uintptr_t OnReceivedLocalClientConversationMessage = 0x1C8;
            static constexpr std::uintptr_t OnEnterConversationStateDelegate = 0x1F0;
            static constexpr std::uintptr_t OnConversationEnded = 0x218;
            static constexpr std::uintptr_t OnMarkerSpawnedDelegate = 0x228;
            static constexpr std::uintptr_t OnSingleConversationEnded = 0x238;
            static constexpr std::uintptr_t ConversationEntryTag = 0x298;
            static constexpr std::uintptr_t InteractorParticipantTag = 0x29C;
            static constexpr std::uintptr_t SelfParticipantTag = 0x2A0;
            static constexpr std::uintptr_t ServiceProviderIDTag = 0x2A4;
            static constexpr std::uintptr_t ConditionalBenefitsConfigIDTag = 0x2A8;
            static constexpr std::uintptr_t ConsumableDiscountRowHandle = 0x2B0;
            static constexpr std::uintptr_t bShowNameWhenInRange = 0x2C0;
            static constexpr std::uintptr_t bShowIndicatorBubble = 0x2C1;
            static constexpr std::uintptr_t bShowNameplateOnPreview = 0x2C2;
            static constexpr std::uintptr_t bShowConversationText = 0x2C3;
            static constexpr std::uintptr_t bConversationsEnabled = 0x2C4;
            static constexpr std::uintptr_t InitiateConversationStatEventType = 0x2E8;
            static constexpr std::uintptr_t CompletedConversationStatEventType = 0x2E9;
            static constexpr std::uintptr_t ConversationMemoryComponent = 0x2F0;
            static constexpr std::uintptr_t bDialogMarkerBoundsAdjustmentEnabled = 0x2F8;
            static constexpr std::uintptr_t bOverrideRelativeLocation = 0x2F9;
            static constexpr std::uintptr_t RelativeLocationOverride = 0x300;
            static constexpr std::uintptr_t bOverrideParticipantDisplayName = 0x318;
            static constexpr std::uintptr_t bAllowEmptyOrWhitespaceDisplayName = 0x319;
            static constexpr std::uintptr_t bOverrideMaxDrawDistance = 0x31A;
            static constexpr std::uintptr_t MaxDrawDistanceOverride = 0x31C;
            static constexpr std::uintptr_t ParticipantDisplayNameOverride = 0x320;
            static constexpr std::uintptr_t ParticipantConversationMaxNameOverride = 0x330;
            static constexpr std::uintptr_t DialogMarkerIndicatorSoftIcon = 0x340;
            static constexpr std::uintptr_t CreativeConversationMaxMarkerIndicatorSoftIcon = 0x360;
            static constexpr std::uintptr_t CreativeConversationMaxTextColor = 0x380;
            static constexpr std::uintptr_t Gifts = 0x398;
            static constexpr std::uintptr_t GiftsSeasonDataTableTag = 0x3A0;
            static constexpr std::uintptr_t GiftTypeDefinitions = 0x3A8;
            static constexpr std::uintptr_t GiftTypeDefinitionsSeasonDataAssetTag = 0x3B0;
            static constexpr std::uintptr_t GiftItemInventory = 0x3B8;
            static constexpr std::uintptr_t GiftItemInventorySeasonDataTableTag = 0x3C0;
            static constexpr std::uintptr_t MaxServices = 0x3C4;
            static constexpr std::uintptr_t Services = 0x3C8;
            static constexpr std::uintptr_t ServicesOverride = 0x3D0;
            static constexpr std::uintptr_t SalesInventory = 0x3D8;
            static constexpr std::uintptr_t SalesInventoryOverride = 0x3E0;
            static constexpr std::uintptr_t DiscountTable = 0x3E8;
            static constexpr std::uintptr_t QuestsTable = 0x3F0;
            static constexpr std::uintptr_t ServicePricingKeyRemappingsTag = 0x3F8;
            static constexpr std::uintptr_t ServicePricingKeyRemappingsTable = 0x400;
            static constexpr std::uintptr_t ConditionalBenefitsConfigCollection = 0x408;
            static constexpr std::uintptr_t ConditionalBenefitsSeasonDataAssetTag = 0x410;
            static constexpr std::uintptr_t ServiceDiscountBenefitSettings = 0x418;
            static constexpr std::uintptr_t bQuestsRequireProviderTagMatch = 0x448;
            static constexpr std::uintptr_t MaxQuestsToSupportFromSingleProvider = 0x44C;
            static constexpr std::uintptr_t MaxQuestsToSupportForSingleFilterCategory = 0x450;
            static constexpr std::uintptr_t CustomDialogMarkerClass = 0x458;
            static constexpr std::uintptr_t CustomDialogMarkerTag = 0x460;
            static constexpr std::uintptr_t SupportedQuests = 0x468;
            static constexpr std::uintptr_t SupportedQuestsByFilterCategory = 0x478;
            static constexpr std::uintptr_t SupportedServices = 0x488;
            static constexpr std::uintptr_t SupportedSales = 0x498;
            static constexpr std::uintptr_t SupportedGiftTypes = 0x4A8;
            static constexpr std::uintptr_t SupportedGiftItems = 0x4B8;
            static constexpr std::uintptr_t SupportedServiceKeyRemappings = 0x4C8;
            static constexpr std::uintptr_t HideUIIndicatorReasons = 0x4D8;
            static constexpr std::uintptr_t ResolvedGiftTypeDefinitions = 0x4E8;
            static constexpr std::uintptr_t ResolvedConditionalBenefitsConfigCollection = 0x4F0;
            static constexpr std::uintptr_t bServiceDataInitialized = 0x4F8;
            static constexpr std::uintptr_t GiftCooldownTimestamps = 0x500;
            static constexpr std::uintptr_t BannedActors = 0x530;
        };

        inline static constexpr std::array<PropertyInfo, 68> Properties{{
            {"OnDialogMarkerInteractionStateChanged", 0x1B8, "MulticastInlineDelegateProperty"},
            {"OnReceivedLocalClientConversationMessage", 0x1C8, "MulticastInlineDelegateProperty"},
            {"OnEnterConversationStateDelegate", 0x1F0, "MulticastInlineDelegateProperty"},
            {"OnConversationEnded", 0x218, "MulticastInlineDelegateProperty"},
            {"OnMarkerSpawnedDelegate", 0x228, "MulticastInlineDelegateProperty"},
            {"OnSingleConversationEnded", 0x238, "MulticastInlineDelegateProperty"},
            {"ConversationEntryTag", 0x298, "StructProperty"},
            {"InteractorParticipantTag", 0x29C, "StructProperty"},
            {"SelfParticipantTag", 0x2A0, "StructProperty"},
            {"ServiceProviderIDTag", 0x2A4, "StructProperty"},
            {"ConditionalBenefitsConfigIDTag", 0x2A8, "StructProperty"},
            {"ConsumableDiscountRowHandle", 0x2B0, "StructProperty"},
            {"bShowNameWhenInRange", 0x2C0, "BoolProperty"},
            {"bShowIndicatorBubble", 0x2C1, "BoolProperty"},
            {"bShowNameplateOnPreview", 0x2C2, "BoolProperty"},
            {"bShowConversationText", 0x2C3, "BoolProperty"},
            {"bConversationsEnabled", 0x2C4, "BoolProperty"},
            {"InitiateConversationStatEventType", 0x2E8, "EnumProperty"},
            {"CompletedConversationStatEventType", 0x2E9, "EnumProperty"},
            {"ConversationMemoryComponent", 0x2F0, "ObjectProperty"},
            {"bDialogMarkerBoundsAdjustmentEnabled", 0x2F8, "BoolProperty"},
            {"bOverrideRelativeLocation", 0x2F9, "BoolProperty"},
            {"RelativeLocationOverride", 0x300, "StructProperty"},
            {"bOverrideParticipantDisplayName", 0x318, "BoolProperty"},
            {"bAllowEmptyOrWhitespaceDisplayName", 0x319, "BoolProperty"},
            {"bOverrideMaxDrawDistance", 0x31A, "BoolProperty"},
            {"MaxDrawDistanceOverride", 0x31C, "FloatProperty"},
            {"ParticipantDisplayNameOverride", 0x320, "TextProperty"},
            {"ParticipantConversationMaxNameOverride", 0x330, "TextProperty"},
            {"DialogMarkerIndicatorSoftIcon", 0x340, "SoftObjectProperty"},
            {"CreativeConversationMaxMarkerIndicatorSoftIcon", 0x360, "SoftObjectProperty"},
            {"CreativeConversationMaxTextColor", 0x380, "StructProperty"},
            {"Gifts", 0x398, "ObjectProperty"},
            {"GiftsSeasonDataTableTag", 0x3A0, "StructProperty"},
            {"GiftTypeDefinitions", 0x3A8, "ObjectProperty"},
            {"GiftTypeDefinitionsSeasonDataAssetTag", 0x3B0, "StructProperty"},
            {"GiftItemInventory", 0x3B8, "ObjectProperty"},
            {"GiftItemInventorySeasonDataTableTag", 0x3C0, "StructProperty"},
            {"MaxServices", 0x3C4, "IntProperty"},
            {"Services", 0x3C8, "ObjectProperty"},
            {"ServicesOverride", 0x3D0, "StructProperty"},
            {"SalesInventory", 0x3D8, "ObjectProperty"},
            {"SalesInventoryOverride", 0x3E0, "StructProperty"},
            {"DiscountTable", 0x3E8, "ObjectProperty"},
            {"QuestsTable", 0x3F0, "ObjectProperty"},
            {"ServicePricingKeyRemappingsTag", 0x3F8, "StructProperty"},
            {"ServicePricingKeyRemappingsTable", 0x400, "ObjectProperty"},
            {"ConditionalBenefitsConfigCollection", 0x408, "ObjectProperty"},
            {"ConditionalBenefitsSeasonDataAssetTag", 0x410, "StructProperty"},
            {"ServiceDiscountBenefitSettings", 0x418, "StructProperty"},
            {"bQuestsRequireProviderTagMatch", 0x448, "BoolProperty"},
            {"MaxQuestsToSupportFromSingleProvider", 0x44C, "IntProperty"},
            {"MaxQuestsToSupportForSingleFilterCategory", 0x450, "IntProperty"},
            {"CustomDialogMarkerClass", 0x458, "ClassProperty"},
            {"CustomDialogMarkerTag", 0x460, "StructProperty"},
            {"SupportedQuests", 0x468, "ArrayProperty"},
            {"SupportedQuestsByFilterCategory", 0x478, "MapProperty"},
            {"SupportedServices", 0x488, "ArrayProperty"},
            {"SupportedSales", 0x498, "ArrayProperty"},
            {"SupportedGiftTypes", 0x4A8, "ArrayProperty"},
            {"SupportedGiftItems", 0x4B8, "ArrayProperty"},
            {"SupportedServiceKeyRemappings", 0x4C8, "StructProperty"},
            {"HideUIIndicatorReasons", 0x4D8, "ArrayProperty"},
            {"ResolvedGiftTypeDefinitions", 0x4E8, "ObjectProperty"},
            {"ResolvedConditionalBenefitsConfigCollection", 0x4F0, "ObjectProperty"},
            {"bServiceDataInitialized", 0x4F8, "BoolProperty"},
            {"GiftCooldownTimestamps", 0x500, "MapProperty"},
            {"BannedActors", 0x530, "ArrayProperty"},
        }};
    };

}
