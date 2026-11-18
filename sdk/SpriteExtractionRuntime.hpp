#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SpriteExtractionRuntime
{
    struct DebugClientAuthMagpiePersistenceComponent
    {
        static constexpr std::string_view Name = "DebugClientAuthMagpiePersistenceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct FortGameStateComponent_SpriteExtractionAIData
    {
        static constexpr std::string_view Name = "FortGameStateComponent_SpriteExtractionAIData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TagQueriesDataTable = 0xD8;
            static constexpr std::uintptr_t PlaylistTagQueryRowName = 0xE0;
            static constexpr std::uintptr_t PlaylistTagQuery = 0xE8;
            static constexpr std::uintptr_t ItemsTagQueryRowName = 0x130;
            static constexpr std::uintptr_t ItemsTagQuery = 0x138;
            static constexpr std::uintptr_t MinDifferentItemsToAssign = 0x180;
            static constexpr std::uintptr_t RarityDataTable = 0x1A8;
            static constexpr std::uintptr_t MaxPlayerRarityTableRowName = 0x1B0;
            static constexpr std::uintptr_t MaxPlayerRarity = 0x1B4;
            static constexpr std::uintptr_t MaxFallbackRarityTableRowName = 0x1BC;
            static constexpr std::uintptr_t MaxFallbackRarity = 0x1C0;
            static constexpr std::uintptr_t MinMaxQuantileRarityTableRowName = 0x1C8;
            static constexpr std::uintptr_t MinMaxQuantileRarity = 0x1CC;
            static constexpr std::uintptr_t MaxItemRarityQuantile = 0x1D8;
            static constexpr std::uintptr_t MaxSpritesPerRarityDataTable = 0x200;
            static constexpr std::uintptr_t RemainingSpritesPerRarity = 0x208;
            static constexpr std::uintptr_t GatheredPlayerData = 0x238;
            static constexpr std::uintptr_t MaxQuantileRarity = 0x268;
            static constexpr std::uintptr_t PendingPersistencePlayers = 0x270;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"TagQueriesDataTable", 0xD8, "ObjectProperty"},
            {"PlaylistTagQueryRowName", 0xE0, "NameProperty"},
            {"PlaylistTagQuery", 0xE8, "StructProperty"},
            {"ItemsTagQueryRowName", 0x130, "NameProperty"},
            {"ItemsTagQuery", 0x138, "StructProperty"},
            {"MinDifferentItemsToAssign", 0x180, "StructProperty"},
            {"RarityDataTable", 0x1A8, "ObjectProperty"},
            {"MaxPlayerRarityTableRowName", 0x1B0, "NameProperty"},
            {"MaxPlayerRarity", 0x1B4, "StructProperty"},
            {"MaxFallbackRarityTableRowName", 0x1BC, "NameProperty"},
            {"MaxFallbackRarity", 0x1C0, "StructProperty"},
            {"MinMaxQuantileRarityTableRowName", 0x1C8, "NameProperty"},
            {"MinMaxQuantileRarity", 0x1CC, "StructProperty"},
            {"MaxItemRarityQuantile", 0x1D8, "StructProperty"},
            {"MaxSpritesPerRarityDataTable", 0x200, "ObjectProperty"},
            {"RemainingSpritesPerRarity", 0x208, "MapProperty"},
            {"GatheredPlayerData", 0x238, "ArrayProperty"},
            {"MaxQuantileRarity", 0x268, "StructProperty"},
            {"PendingPersistencePlayers", 0x270, "SetProperty"},
        }};
    };

    struct FortGenerateFakePlayerBotPersistenceDataAsyncAction
    {
        static constexpr std::string_view Name = "FortGenerateFakePlayerBotPersistenceDataAsyncAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPersistenceDataReady = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnPersistenceDataReady", 0x30, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortPlayerStateComponent_SpriteExtractionPersistence
    {
        static constexpr std::string_view Name = "FortPlayerStateComponent_SpriteExtractionPersistence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningController = 0x128;
            static constexpr std::uintptr_t ReplicatedSpriteData = 0x130;
            static constexpr std::uintptr_t ReplicatedStarterRelicId = 0x150;
            static constexpr std::uintptr_t MaxSpriteDust = 0x170;
            static constexpr std::uintptr_t MaxSpriteDustEarnablePerMatch = 0x198;
            static constexpr std::uintptr_t SpriteDustCurrencyItemDefinition = 0x1C0;
            static constexpr std::uintptr_t MasteryTokenDefinition = 0x1C8;
            static constexpr std::uintptr_t BoosterDustMultiplierTable = 0x1D0;
            static constexpr std::uintptr_t LowerLevelBonusExperience = 0x1D8;
            static constexpr std::uintptr_t ClientExtractionMatchData = 0x2C0;
            static constexpr std::uintptr_t FinalDataFlushCount = 0x320;
            static constexpr std::uintptr_t AllMatchExtractions = 0x3C0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"OwningController", 0x128, "WeakObjectProperty"},
            {"ReplicatedSpriteData", 0x130, "StructProperty"},
            {"ReplicatedStarterRelicId", 0x150, "NameProperty"},
            {"MaxSpriteDust", 0x170, "StructProperty"},
            {"MaxSpriteDustEarnablePerMatch", 0x198, "StructProperty"},
            {"SpriteDustCurrencyItemDefinition", 0x1C0, "ObjectProperty"},
            {"MasteryTokenDefinition", 0x1C8, "ObjectProperty"},
            {"BoosterDustMultiplierTable", 0x1D0, "ObjectProperty"},
            {"LowerLevelBonusExperience", 0x1D8, "StructProperty"},
            {"ClientExtractionMatchData", 0x2C0, "StructProperty"},
            {"FinalDataFlushCount", 0x320, "ByteProperty"},
            {"AllMatchExtractions", 0x3C0, "ArrayProperty"},
        }};
    };

    struct SpriteExtractionCreatureAnimInstance
    {
        static constexpr std::string_view Name = "SpriteExtractionCreatureAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsFleeing = 0x260;
            static constexpr std::uintptr_t bIsBackpack_Idle = 0x261;
            static constexpr std::uintptr_t bIsEquipped_Idle = 0x262;
            static constexpr std::uintptr_t bIsCooldown = 0x263;
            static constexpr std::uintptr_t bIsPawnSkydiving = 0x264;
            static constexpr std::uintptr_t bIsMoving = 0x265;
            static constexpr std::uintptr_t bDisableSprings = 0x266;
            static constexpr std::uintptr_t WalkPlayrate = 0x268;
            static constexpr std::uintptr_t RunPlayrate = 0x270;
            static constexpr std::uintptr_t bEnterRun = 0x278;
            static constexpr std::uintptr_t bEnterWalk = 0x279;
            static constexpr std::uintptr_t bEnterIdle = 0x27A;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"bIsFleeing", 0x260, "BoolProperty"},
            {"bIsBackpack_Idle", 0x261, "BoolProperty"},
            {"bIsEquipped_Idle", 0x262, "BoolProperty"},
            {"bIsCooldown", 0x263, "BoolProperty"},
            {"bIsPawnSkydiving", 0x264, "BoolProperty"},
            {"bIsMoving", 0x265, "BoolProperty"},
            {"bDisableSprings", 0x266, "BoolProperty"},
            {"WalkPlayrate", 0x268, "DoubleProperty"},
            {"RunPlayrate", 0x270, "DoubleProperty"},
            {"bEnterRun", 0x278, "BoolProperty"},
            {"bEnterWalk", 0x279, "BoolProperty"},
            {"bEnterIdle", 0x27A, "BoolProperty"},
        }};
    };

    struct SpriteExtractionUtils
    {
        static constexpr std::string_view Name = "SpriteExtractionUtils";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SpriteExtractionWaterHeldAnimInstance
    {
        static constexpr std::string_view Name = "SpriteExtractionWaterHeldAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t LookCurrentRot = 0x340;
            static constexpr std::uintptr_t PlayerLocalVelocity = 0x358;
            static constexpr std::uintptr_t PlayerWorldRotation = 0x370;
            static constexpr std::uintptr_t BobTranslation = 0x388;
            static constexpr std::uintptr_t bIsTacticalSprint = 0x38C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"LookCurrentRot", 0x340, "StructProperty"},
            {"PlayerLocalVelocity", 0x358, "StructProperty"},
            {"PlayerWorldRotation", 0x370, "StructProperty"},
            {"BobTranslation", 0x388, "FloatProperty"},
            {"bIsTacticalSprint", 0x38C, "BoolProperty"},
        }};
    };

    struct SpriteExtraction_ServiceNode
    {
        static constexpr std::string_view Name = "SpriteExtraction_ServiceNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode_DataDrivenService";
        struct Offsets
        {
            static constexpr std::uintptr_t RequirementMatchPolicy = 0x190;
            static constexpr std::uintptr_t Requirements = 0x198;
            static constexpr std::uintptr_t EffectRecipientConfigs = 0x1A8;
            static constexpr std::uintptr_t ServiceGameplayTag = 0x1B8;
            static constexpr std::uintptr_t AnalyticsEventName = 0x1C0;
            static constexpr std::uintptr_t VisibilityPolicy = 0x1D0;
            static constexpr std::uintptr_t bPricingEnabled = 0x1D1;
            static constexpr std::uintptr_t PricingKey = 0x1D4;
            static constexpr std::uintptr_t PricingColumn = 0x1D8;
            static constexpr std::uintptr_t LimitedStockCount = 0x1E0;
            static constexpr std::uintptr_t ServiceBriefConfigCollection = 0x208;
            static constexpr std::uintptr_t ServiceBriefCollectionKeyOveride = 0x210;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"RequirementMatchPolicy", 0x190, "EnumProperty"},
            {"Requirements", 0x198, "ArrayProperty"},
            {"EffectRecipientConfigs", 0x1A8, "ArrayProperty"},
            {"ServiceGameplayTag", 0x1B8, "StructProperty"},
            {"AnalyticsEventName", 0x1C0, "StrProperty"},
            {"VisibilityPolicy", 0x1D0, "EnumProperty"},
            {"bPricingEnabled", 0x1D1, "BoolProperty"},
            {"PricingKey", 0x1D4, "NameProperty"},
            {"PricingColumn", 0x1D8, "IntProperty"},
            {"LimitedStockCount", 0x1E0, "StructProperty"},
            {"ServiceBriefConfigCollection", 0x208, "ObjectProperty"},
            {"ServiceBriefCollectionKeyOveride", 0x210, "NameProperty"},
        }};
    };

    struct WaterSpriteExtractionCreatureAnimInstance
    {
        static constexpr std::string_view Name = "WaterSpriteExtractionCreatureAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpriteExtractionCreatureAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsSequentialIdle = 0x280;
            static constexpr std::uintptr_t bCanExitLoop = 0x281;
            static constexpr std::uintptr_t Idles = 0x288;
            static constexpr std::uintptr_t CurrentStartSequence = 0x290;
            static constexpr std::uintptr_t CurrentLoopSequence = 0x298;
            static constexpr std::uintptr_t CurrentExitSequence = 0x2A0;
            static constexpr std::uintptr_t PreviousStartSequence = 0x2A8;
            static constexpr std::uintptr_t PreviousLoopASequence = 0x2B0;
            static constexpr std::uintptr_t PreviousLoopBSequence = 0x2B8;
            static constexpr std::uintptr_t PreviousExitSequence = 0x2C0;
            static constexpr std::uintptr_t MouthMorphNames = 0x2C8;
            static constexpr std::uintptr_t LEyeMorphNames = 0x2D8;
            static constexpr std::uintptr_t REyeMorphNames = 0x2E8;
            static constexpr std::uintptr_t MouthIndexCurve = 0x2F8;
            static constexpr std::uintptr_t LEyeIndexCurve = 0x2FC;
            static constexpr std::uintptr_t REyeIndexCurve = 0x300;
            static constexpr std::uintptr_t MouthInterpSpeed = 0x308;
            static constexpr std::uintptr_t EyeInterpSpeed = 0x310;
            static constexpr std::uintptr_t MorphBucketBlendSpeed = 0x318;
            static constexpr std::uintptr_t bMouthMorphsEnabled = 0x320;
            static constexpr std::uintptr_t bLEyeMorphsEnabled = 0x321;
            static constexpr std::uintptr_t bREyeMorphsEnabled = 0x322;
            static constexpr std::uintptr_t bDebugPrintMorphs = 0x323;
            static constexpr std::uintptr_t CurrentLoopCount = 0x324;
            static constexpr std::uintptr_t TargetLoopCount = 0x328;
            static constexpr std::uintptr_t CurrentIdleIndex = 0x32C;
            static constexpr std::uintptr_t SelectedIndex = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"bIsSequentialIdle", 0x280, "BoolProperty"},
            {"bCanExitLoop", 0x281, "BoolProperty"},
            {"Idles", 0x288, "ObjectProperty"},
            {"CurrentStartSequence", 0x290, "ObjectProperty"},
            {"CurrentLoopSequence", 0x298, "ObjectProperty"},
            {"CurrentExitSequence", 0x2A0, "ObjectProperty"},
            {"PreviousStartSequence", 0x2A8, "ObjectProperty"},
            {"PreviousLoopASequence", 0x2B0, "ObjectProperty"},
            {"PreviousLoopBSequence", 0x2B8, "ObjectProperty"},
            {"PreviousExitSequence", 0x2C0, "ObjectProperty"},
            {"MouthMorphNames", 0x2C8, "ArrayProperty"},
            {"LEyeMorphNames", 0x2D8, "ArrayProperty"},
            {"REyeMorphNames", 0x2E8, "ArrayProperty"},
            {"MouthIndexCurve", 0x2F8, "NameProperty"},
            {"LEyeIndexCurve", 0x2FC, "NameProperty"},
            {"REyeIndexCurve", 0x300, "NameProperty"},
            {"MouthInterpSpeed", 0x308, "DoubleProperty"},
            {"EyeInterpSpeed", 0x310, "DoubleProperty"},
            {"MorphBucketBlendSpeed", 0x318, "DoubleProperty"},
            {"bMouthMorphsEnabled", 0x320, "BoolProperty"},
            {"bLEyeMorphsEnabled", 0x321, "BoolProperty"},
            {"bREyeMorphsEnabled", 0x322, "BoolProperty"},
            {"bDebugPrintMorphs", 0x323, "BoolProperty"},
            {"CurrentLoopCount", 0x324, "IntProperty"},
            {"TargetLoopCount", 0x328, "IntProperty"},
            {"CurrentIdleIndex", 0x32C, "IntProperty"},
            {"SelectedIndex", 0x330, "IntProperty"},
        }};
    };

    struct WeightedIdle
    {
        static constexpr std::string_view Name = "WeightedIdle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Start = 0x28;
            static constexpr std::uintptr_t Loop = 0x30;
            static constexpr std::uintptr_t Exit = 0x38;
            static constexpr std::uintptr_t LoopMin = 0x40;
            static constexpr std::uintptr_t LoopMax = 0x44;
            static constexpr std::uintptr_t Weight = 0x48;
            static constexpr std::uintptr_t Repeatable = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"Start", 0x28, "ObjectProperty"},
            {"Loop", 0x30, "ObjectProperty"},
            {"Exit", 0x38, "ObjectProperty"},
            {"LoopMin", 0x40, "IntProperty"},
            {"LoopMax", 0x44, "IntProperty"},
            {"Weight", 0x48, "FloatProperty"},
            {"Repeatable", 0x4C, "BoolProperty"},
        }};
    };

    struct WeightedIdleList
    {
        static constexpr std::string_view Name = "WeightedIdleList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Idles = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Idles", 0x28, "ArrayProperty"},
        }};
    };

}
