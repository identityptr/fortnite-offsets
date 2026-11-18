#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::STW_HestiaBeautyRuntime
{
    struct FortBackpackCounterComponent
    {
        static constexpr std::string_view Name = "FortBackpackCounterComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnBackpackCounterChanged = 0xC0;
            static constexpr std::uintptr_t CurrentFilledInventorySlots = 0xD0;
            static constexpr std::uintptr_t CurrentMaxInventorySlots = 0xD4;
            static constexpr std::uintptr_t CounterTemplate = 0xD8;
            static constexpr std::uintptr_t FullInventoryTemplate = 0xE8;
            static constexpr std::uintptr_t LocalPlayerController = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnBackpackCounterChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"CurrentFilledInventorySlots", 0xD0, "IntProperty"},
            {"CurrentMaxInventorySlots", 0xD4, "IntProperty"},
            {"CounterTemplate", 0xD8, "TextProperty"},
            {"FullInventoryTemplate", 0xE8, "TextProperty"},
            {"LocalPlayerController", 0xF8, "WeakObjectProperty"},
        }};
    };

    struct FortExpeditionMonitorsManager
    {
        static constexpr std::string_view Name = "FortExpeditionMonitorsManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Info";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnedByLocalHestiaPlayerComponent = 0x278;
            static constexpr std::uintptr_t MonitorActors = 0x280;
            static constexpr std::uintptr_t MaterialParameterNameIsMonitorOn = 0x290;
            static constexpr std::uintptr_t MaterialParameterNameIsInProgress = 0x294;
            static constexpr std::uintptr_t MaterialParameterNameExpeditionType = 0x298;
            static constexpr std::uintptr_t VehicleToExpeditionTypeMaterialParameterMap = 0x2A0;
            static constexpr std::uintptr_t MonitorsMIDs = 0x2B0;
            static constexpr std::uintptr_t LocalPlayerController = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OwnedByLocalHestiaPlayerComponent", 0x278, "ObjectProperty"},
            {"MonitorActors", 0x280, "ArrayProperty"},
            {"MaterialParameterNameIsMonitorOn", 0x290, "NameProperty"},
            {"MaterialParameterNameIsInProgress", 0x294, "NameProperty"},
            {"MaterialParameterNameExpeditionType", 0x298, "NameProperty"},
            {"VehicleToExpeditionTypeMaterialParameterMap", 0x2A0, "MapProperty"},
            {"MonitorsMIDs", 0x2B0, "ArrayProperty"},
            {"LocalPlayerController", 0x2C0, "WeakObjectProperty"},
        }};
    };

    struct FortHestiaHeroMannequin
    {
        static constexpr std::string_view Name = "FortHestiaHeroMannequin";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerMannequin";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotName = 0x908;
            static constexpr std::uintptr_t HeroCollisionAproximation = 0x910;
            static constexpr std::uintptr_t HeroStandInMesh = 0x918;
            static constexpr std::uintptr_t OwnedByLocalHestiaPlayerComponent = 0x920;
            static constexpr std::uintptr_t bOverrideWithPlayerCosmeticLoadout = 0x928;
            static constexpr std::uintptr_t DefaultVisualState = 0x929;
            static constexpr std::uintptr_t CameraTagSpecificVisualStates = 0x930;
            static constexpr std::uintptr_t HologramMaterial = 0x940;
            static constexpr std::uintptr_t CurrentVisualState = 0x948;
            static constexpr std::uintptr_t LocalPlayerController = 0x950;
            static constexpr std::uintptr_t LocalPlayerPawn = 0x958;
            static constexpr std::uintptr_t HeroItem = 0x960;
            static constexpr std::uintptr_t HeroLoadout = 0x968;
            static constexpr std::uintptr_t HeroType = 0x970;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"SlotName", 0x908, "NameProperty"},
            {"HeroCollisionAproximation", 0x910, "ObjectProperty"},
            {"HeroStandInMesh", 0x918, "ObjectProperty"},
            {"OwnedByLocalHestiaPlayerComponent", 0x920, "ObjectProperty"},
            {"bOverrideWithPlayerCosmeticLoadout", 0x928, "BoolProperty"},
            {"DefaultVisualState", 0x929, "EnumProperty"},
            {"CameraTagSpecificVisualStates", 0x930, "MapProperty"},
            {"HologramMaterial", 0x940, "ObjectProperty"},
            {"CurrentVisualState", 0x948, "EnumProperty"},
            {"LocalPlayerController", 0x950, "ObjectProperty"},
            {"LocalPlayerPawn", 0x958, "WeakObjectProperty"},
            {"HeroItem", 0x960, "ObjectProperty"},
            {"HeroLoadout", 0x968, "ObjectProperty"},
            {"HeroType", 0x970, "ObjectProperty"},
        }};
    };

    struct FortHestiaTrainerMannequin
    {
        static constexpr std::string_view Name = "FortHestiaTrainerMannequin";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerMannequin";
        struct Offsets
        {
            static constexpr std::uintptr_t ShowTrainerQuestCompletionCondition = 0x910;
            static constexpr std::uintptr_t ShowTrainerMinAccountLevelCondition = 0x918;
            static constexpr std::uintptr_t CanInteractQuestCompletionCondition = 0x920;
            static constexpr std::uintptr_t CanInteractMinAccountLevelCondition = 0x928;
            static constexpr std::uintptr_t ActorsToDisplayIfQuestComplete = 0x930;
            static constexpr std::uintptr_t ActorsToDisplayIfQuestNotComplete = 0x940;
            static constexpr std::uintptr_t InteractionDisplayText = 0x950;
            static constexpr std::uintptr_t FailedInteractionDisplayText = 0x960;
            static constexpr std::uintptr_t TrainerCollisionAproximation = 0x970;
            static constexpr std::uintptr_t InteractionBox = 0x978;
            static constexpr std::uintptr_t VoiceboxPawnClass = 0x980;
            static constexpr std::uintptr_t VoiceboxPawn = 0x9A0;
            static constexpr std::uintptr_t FeedbackBank = 0x9A8;
            static constexpr std::uintptr_t InteractionFeedbackHandleName = 0x9B0;
            static constexpr std::uintptr_t bShouldShowTrainer = 0x9C0;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"ShowTrainerQuestCompletionCondition", 0x910, "ObjectProperty"},
            {"ShowTrainerMinAccountLevelCondition", 0x918, "IntProperty"},
            {"CanInteractQuestCompletionCondition", 0x920, "ObjectProperty"},
            {"CanInteractMinAccountLevelCondition", 0x928, "IntProperty"},
            {"ActorsToDisplayIfQuestComplete", 0x930, "ArrayProperty"},
            {"ActorsToDisplayIfQuestNotComplete", 0x940, "ArrayProperty"},
            {"InteractionDisplayText", 0x950, "TextProperty"},
            {"FailedInteractionDisplayText", 0x960, "TextProperty"},
            {"TrainerCollisionAproximation", 0x970, "ObjectProperty"},
            {"InteractionBox", 0x978, "ObjectProperty"},
            {"VoiceboxPawnClass", 0x980, "SoftClassProperty"},
            {"VoiceboxPawn", 0x9A0, "ObjectProperty"},
            {"FeedbackBank", 0x9A8, "ObjectProperty"},
            {"InteractionFeedbackHandleName", 0x9B0, "NameProperty"},
            {"bShouldShowTrainer", 0x9C0, "BoolProperty"},
        }};
    };

    struct FortHestiaWeaponBoardBase
    {
        static constexpr std::string_view Name = "FortHestiaWeaponBoardBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t RangedWeaponDisplaySlots = 0x280;
            static constexpr std::uintptr_t MeleeWeaponDisplaySlots = 0x290;
            static constexpr std::uintptr_t DisplaySlotItemList = 0x2A0;
            static constexpr std::uintptr_t WeaponLists = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RangedWeaponDisplaySlots", 0x280, "ArrayProperty"},
            {"MeleeWeaponDisplaySlots", 0x290, "ArrayProperty"},
            {"DisplaySlotItemList", 0x2A0, "ArrayProperty"},
            {"WeaponLists", 0x2B0, "StructProperty"},
        }};
    };

    struct FortPlayerPowerDisplayComponent
    {
        static constexpr std::string_view Name = "FortPlayerPowerDisplayComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPlayerPowerRatingChanged = 0xC0;
            static constexpr std::uintptr_t CurrentPlayerPowerRating = 0xD0;
            static constexpr std::uintptr_t FortLocalPlayer = 0xD4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnPlayerPowerRatingChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"CurrentPlayerPowerRating", 0xD0, "IntProperty"},
            {"FortLocalPlayer", 0xD4, "WeakObjectProperty"},
        }};
    };

    struct FortTeamPerkComponent
    {
        static constexpr std::string_view Name = "FortTeamPerkComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTeamPerkChanged = 0xC0;
            static constexpr std::uintptr_t LocalPlayerController = 0xD0;
            static constexpr std::uintptr_t TeamPerk = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnTeamPerkChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"LocalPlayerController", 0xD0, "WeakObjectProperty"},
            {"TeamPerk", 0xD8, "ObjectProperty"},
        }};
    };

    struct HestiaConditionAccountLevel
    {
        static constexpr std::string_view Name = "HestiaConditionAccountLevel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HestiaConditionControllerBased";
        struct Offsets
        {
            static constexpr std::uintptr_t AccountLevel = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AccountLevel", 0x50, "IntProperty"},
        }};
    };

    struct HestiaConditionActiveEvent
    {
        static constexpr std::string_view Name = "HestiaConditionActiveEvent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HestiaVariationCondition";
        struct Offsets
        {
            static constexpr std::uintptr_t EventFlagName = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EventFlagName", 0x40, "StrProperty"},
        }};
    };

    struct HestiaConditionCanPurchaseStoreOffer
    {
        static constexpr std::string_view Name = "HestiaConditionCanPurchaseStoreOffer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HestiaConditionResourceBased";
        struct Offsets
        {
            static constexpr std::uintptr_t StorefrontNames = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StorefrontNames", 0x70, "ArrayProperty"},
        }};
    };

    struct HestiaConditionCollectionLevel
    {
        static constexpr std::string_view Name = "HestiaConditionCollectionLevel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HestiaConditionControllerBased";
        struct Offsets
        {
            static constexpr std::uintptr_t MinCollectionLevel = 0x50;
            static constexpr std::uintptr_t MaxCollectionLevel = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MinCollectionLevel", 0x50, "IntProperty"},
            {"MaxCollectionLevel", 0x54, "IntProperty"},
        }};
    };

    struct HestiaConditionControllerBased
    {
        static constexpr std::string_view Name = "HestiaConditionControllerBased";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HestiaVariationCondition";
        struct Offsets
        {
            static constexpr std::uintptr_t ControllerProviderClass = 0x40;
            static constexpr std::uintptr_t ControllerProvider = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ControllerProviderClass", 0x40, "ClassProperty"},
            {"ControllerProvider", 0x48, "ObjectProperty"},
        }};
    };

    struct HestiaConditionResourceBased
    {
        static constexpr std::string_view Name = "HestiaConditionResourceBased";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HestiaConditionControllerBased";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemDefinition = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ItemDefinition", 0x50, "SoftObjectProperty"},
        }};
    };

    struct HestiaControllerProvider
    {
        static constexpr std::string_view Name = "HestiaControllerProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Controller = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Controller", 0x40, "WeakObjectProperty"},
        }};
    };

    struct HestiaEffectSetAudioCompResumed
    {
        static constexpr std::string_view Name = "HestiaEffectSetAudioCompResumed";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HestiaVariationEffect";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HestiaEffectSetSkeletonUpdate
    {
        static constexpr std::string_view Name = "HestiaEffectSetSkeletonUpdate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HestiaVariationEffect";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HestiaHomeBaseControllerProvider
    {
        static constexpr std::string_view Name = "HestiaHomeBaseControllerProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HestiaControllerProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t Controller = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Controller", 0x40, "WeakObjectProperty"},
        }};
    };

    struct HestiaHostBannerDisplayComponent
    {
        static constexpr std::string_view Name = "HestiaHostBannerDisplayComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BannerPatternTexture = 0xC0;
            static constexpr std::uintptr_t BannerShapeTexture = 0xC8;
            static constexpr std::uintptr_t BannerMaterialSlotNames = 0xD0;
            static constexpr std::uintptr_t BannerIcon = 0xE8;
            static constexpr std::uintptr_t BannerColorName = 0x108;
            static constexpr std::uintptr_t BannerIconName = 0x10C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"BannerPatternTexture", 0xC0, "ObjectProperty"},
            {"BannerShapeTexture", 0xC8, "ObjectProperty"},
            {"BannerMaterialSlotNames", 0xD0, "ArrayProperty"},
            {"BannerIcon", 0xE8, "SoftObjectProperty"},
            {"BannerColorName", 0x108, "NameProperty"},
            {"BannerIconName", 0x10C, "NameProperty"},
        }};
    };

    struct HestiaIdleChatterFeedbackComponent
    {
        static constexpr std::string_view Name = "HestiaIdleChatterFeedbackComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t VoiceboxPawnClass = 0xC0;
            static constexpr std::uintptr_t FeedbackBank = 0xE0;
            static constexpr std::uintptr_t IdleChatterFeedbackHandleName = 0xE8;
            static constexpr std::uintptr_t MinTimeBetweenIdleChatters = 0xEC;
            static constexpr std::uintptr_t MaxTimeBetweenIdleChatters = 0xF0;
            static constexpr std::uintptr_t MaximumAudibleRangeToPlayers = 0xF4;
            static constexpr std::uintptr_t VoiceboxPawn = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"VoiceboxPawnClass", 0xC0, "SoftClassProperty"},
            {"FeedbackBank", 0xE0, "ObjectProperty"},
            {"IdleChatterFeedbackHandleName", 0xE8, "NameProperty"},
            {"MinTimeBetweenIdleChatters", 0xEC, "FloatProperty"},
            {"MaxTimeBetweenIdleChatters", 0xF0, "FloatProperty"},
            {"MaximumAudibleRangeToPlayers", 0xF4, "FloatProperty"},
            {"VoiceboxPawn", 0x100, "ObjectProperty"},
        }};
    };

    struct HestiaLocalControllerProvider
    {
        static constexpr std::string_view Name = "HestiaLocalControllerProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HestiaControllerProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t Controller = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Controller", 0x40, "WeakObjectProperty"},
        }};
    };

    struct HestiaQuestObjectiveNumberDisplay
    {
        static constexpr std::string_view Name = "HestiaQuestObjectiveNumberDisplay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackedQuest = 0x278;
            static constexpr std::uintptr_t ObjectiveIndex = 0x280;
            static constexpr std::uintptr_t RootStaticMesh = 0x288;
            static constexpr std::uintptr_t DisplayText = 0x290;
            static constexpr std::uintptr_t QuestCompleteMesh = 0x298;
            static constexpr std::uintptr_t OwnedByHestiaHostComponent = 0x2A0;
            static constexpr std::uintptr_t ObjectiveProgress = 0x2A8;
            static constexpr std::uintptr_t bIsTrackedQuestObjectiveComplete = 0x2AC;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"TrackedQuest", 0x278, "ObjectProperty"},
            {"ObjectiveIndex", 0x280, "IntProperty"},
            {"RootStaticMesh", 0x288, "ObjectProperty"},
            {"DisplayText", 0x290, "ObjectProperty"},
            {"QuestCompleteMesh", 0x298, "ObjectProperty"},
            {"OwnedByHestiaHostComponent", 0x2A0, "ObjectProperty"},
            {"ObjectiveProgress", 0x2A8, "IntProperty"},
            {"bIsTrackedQuestObjectiveComplete", 0x2AC, "BoolProperty"},
        }};
    };

    struct HestiaVariationCondition
    {
        static constexpr std::string_view Name = "HestiaVariationCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HestiaVariationConditionAnd
    {
        static constexpr std::string_view Name = "HestiaVariationConditionAnd";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HestiaVariationConditionsArray";
        struct Offsets
        {
            static constexpr std::uintptr_t Conditions = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Conditions", 0x48, "ArrayProperty"},
        }};
    };

    struct HestiaVariationConditionNot
    {
        static constexpr std::string_view Name = "HestiaVariationConditionNot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HestiaVariationCondition";
        struct Offsets
        {
            static constexpr std::uintptr_t Condition = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Condition", 0x40, "ObjectProperty"},
        }};
    };

    struct HestiaVariationConditionOr
    {
        static constexpr std::string_view Name = "HestiaVariationConditionOr";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HestiaVariationConditionsArray";
        struct Offsets
        {
            static constexpr std::uintptr_t Conditions = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Conditions", 0x48, "ArrayProperty"},
        }};
    };

    struct HestiaVariationConditionQuest
    {
        static constexpr std::string_view Name = "HestiaVariationConditionQuest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HestiaConditionControllerBased";
        struct Offsets
        {
            static constexpr std::uintptr_t Quest = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Quest", 0x50, "ObjectProperty"},
        }};
    };

    struct HestiaVariationConditionQuestCompleted
    {
        static constexpr std::string_view Name = "HestiaVariationConditionQuestCompleted";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HestiaVariationConditionQuest";
        struct Offsets
        {
            static constexpr std::uintptr_t Quest = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Quest", 0x50, "ObjectProperty"},
        }};
    };

    struct HestiaVariationConditionResourceInRange
    {
        static constexpr std::string_view Name = "HestiaVariationConditionResourceInRange";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HestiaConditionResourceBased";
        struct Offsets
        {
            static constexpr std::uintptr_t min = 0x70;
            static constexpr std::uintptr_t max = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"min", 0x70, "IntProperty"},
            {"max", 0x74, "IntProperty"},
        }};
    };

    struct HestiaVariationConditionsArray
    {
        static constexpr std::string_view Name = "HestiaVariationConditionsArray";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HestiaVariationCondition";
        struct Offsets
        {
            static constexpr std::uintptr_t Conditions = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Conditions", 0x48, "ArrayProperty"},
        }};
    };

    struct HestiaVariationEffect
    {
        static constexpr std::string_view Name = "HestiaVariationEffect";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HestiaVariationEffectCollisionOn
    {
        static constexpr std::string_view Name = "HestiaVariationEffectCollisionOn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HestiaVariationEffect";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HestiaVariationEffectEditMaterialParameterValues
    {
        static constexpr std::string_view Name = "HestiaVariationEffectEditMaterialParameterValues";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HestiaVariationEffect";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialEditsList = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaterialEditsList", 0x28, "MapProperty"},
        }};
    };

    struct HestiaVariationEffectLightingColor
    {
        static constexpr std::string_view Name = "HestiaVariationEffectLightingColor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HestiaVariationEffect";
        struct Offsets
        {
            static constexpr std::uintptr_t LightColor = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LightColor", 0x28, "StructProperty"},
        }};
    };

    struct HestiaVariationEffectNiagara
    {
        static constexpr std::string_view Name = "HestiaVariationEffectNiagara";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HestiaVariationEffect";
        struct Offsets
        {
            static constexpr std::uintptr_t NiagaraActor = 0x28;
            static constexpr std::uintptr_t AttachLocationRule = 0x48;
            static constexpr std::uintptr_t AttachRotationRule = 0x49;
            static constexpr std::uintptr_t AttachScaleRule = 0x4A;
            static constexpr std::uintptr_t AttachSocketName = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"NiagaraActor", 0x28, "SoftObjectProperty"},
            {"AttachLocationRule", 0x48, "EnumProperty"},
            {"AttachRotationRule", 0x49, "EnumProperty"},
            {"AttachScaleRule", 0x4A, "EnumProperty"},
            {"AttachSocketName", 0x4C, "NameProperty"},
        }};
    };

    struct HestiaVariationEffectSetVisible
    {
        static constexpr std::string_view Name = "HestiaVariationEffectSetVisible";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HestiaVariationEffect";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct HestiaVariationEffectsContainer
    {
        static constexpr std::string_view Name = "HestiaVariationEffectsContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Effects = 0x28;
            static constexpr std::uintptr_t ControlledActors = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Effects", 0x28, "ArrayProperty"},
            {"ControlledActors", 0x38, "ArrayProperty"},
        }};
    };

    struct HestiaVariationGroupData
    {
        static constexpr std::string_view Name = "HestiaVariationGroupData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlledActors = 0x28;
            static constexpr std::uintptr_t Condition = 0x38;
            static constexpr std::uintptr_t EffectsContainer = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ControlledActors", 0x28, "ArrayProperty"},
            {"Condition", 0x38, "ObjectProperty"},
            {"EffectsContainer", 0x40, "ObjectProperty"},
        }};
    };

    struct HestiaVariationManager
    {
        static constexpr std::string_view Name = "HestiaVariationManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bLoadAsyncGroupDatas = 0xC0;
            static constexpr std::uintptr_t bIsGroupDatasLoaded = 0xC1;
            static constexpr std::uintptr_t GroupDatas = 0xD8;
            static constexpr std::uintptr_t LoadedGroupDatas = 0xE8;
            static constexpr std::uintptr_t GroupConditions = 0xF8;
            static constexpr std::uintptr_t GroupEffectsContainers = 0x108;
            static constexpr std::uintptr_t GroupsIdxWithActiveEffects = 0x118;
            static constexpr std::uintptr_t IncompleteGroups = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bLoadAsyncGroupDatas", 0xC0, "BoolProperty"},
            {"bIsGroupDatasLoaded", 0xC1, "BoolProperty"},
            {"GroupDatas", 0xD8, "ArrayProperty"},
            {"LoadedGroupDatas", 0xE8, "ArrayProperty"},
            {"GroupConditions", 0xF8, "MapProperty"},
            {"GroupEffectsContainers", 0x108, "MapProperty"},
            {"GroupsIdxWithActiveEffects", 0x118, "ArrayProperty"},
            {"IncompleteGroups", 0x128, "ArrayProperty"},
        }};
    };

    struct HestiaWorldMapPinManager
    {
        static constexpr std::string_view Name = "HestiaWorldMapPinManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldMapPinManager";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldMapMesh = 0x280;
            static constexpr std::uintptr_t CurrentPins = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WorldMapMesh", 0x280, "ObjectProperty"},
            {"CurrentPins", 0x288, "ArrayProperty"},
        }};
    };

    struct OwnedByHestiaHostComponent
    {
        static constexpr std::string_view Name = "OwnedByHestiaHostComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t FOnHestiaHostFoundDelegate = 0xC0;
            static constexpr std::uintptr_t HestiaHomebaseOwner = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FOnHestiaHostFoundDelegate", 0xC0, "MulticastInlineDelegateProperty"},
            {"HestiaHomebaseOwner", 0xD0, "ObjectProperty"},
        }};
    };

    struct OwnedByLocalHestiaPlayerComponent
    {
        static constexpr std::string_view Name = "OwnedByLocalHestiaPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLocalHestiaPlayerControllerFoundDelegate = 0xC0;
            static constexpr std::uintptr_t HestiaLocalPlayerController = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnLocalHestiaPlayerControllerFoundDelegate", 0xC0, "MulticastInlineDelegateProperty"},
            {"HestiaLocalPlayerController", 0xD0, "ObjectProperty"},
        }};
    };

}
