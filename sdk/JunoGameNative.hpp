#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoGameNative
{
    struct AITask_JunoMoveTo
    {
        static constexpr std::string_view Name = "AITask_JunoMoveTo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AITask_MoveTo";
        struct Offsets
        {
            static constexpr std::uintptr_t MoveConfig = 0x140;
            static constexpr std::uintptr_t BlockedByActor = 0x14C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MoveConfig", 0x140, "StructProperty"},
            {"BlockedByActor", 0x14C, "WeakObjectProperty"},
        }};
    };

    struct AudioEventAggregatorSubsystem
    {
        static constexpr std::string_view Name = "AudioEventAggregatorSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSoundBreakEvents = 0x38;
            static constexpr std::uintptr_t OnSoundCollisionEvents = 0x48;
            static constexpr std::uintptr_t OnActiveSoundBreakEventsUpdated = 0x58;
            static constexpr std::uintptr_t OnActiveSoundCollisionEventsUpdated = 0x68;
            static constexpr std::uintptr_t World = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnSoundBreakEvents", 0x38, "MulticastInlineDelegateProperty"},
            {"OnSoundCollisionEvents", 0x48, "MulticastInlineDelegateProperty"},
            {"OnActiveSoundBreakEventsUpdated", 0x58, "MulticastInlineDelegateProperty"},
            {"OnActiveSoundCollisionEventsUpdated", 0x68, "MulticastInlineDelegateProperty"},
            {"World", 0x78, "ObjectProperty"},
        }};
    };

    struct BTTask_JunoMoveTo
    {
        static constexpr std::string_view Name = "BTTask_JunoMoveTo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaBTTask_MoveTo";
        struct Offsets
        {
            static constexpr std::uintptr_t bAssignFoundBlockingBuildingAsTarget = 0x1C0;
            static constexpr std::uintptr_t bOnUnreachableGoalFindBlockingBuilding = 0x1C0;
            static constexpr std::uintptr_t BlockingBuildingTraceDistance = 0x1C8;
            static constexpr std::uintptr_t BlockingBuildingTraceCooldown = 0x1F0;
            static constexpr std::uintptr_t BlockedByBuildingKeySelector = 0x218;
            static constexpr std::uintptr_t LastBlockingBuildingTraceTimeKeySelector = 0x240;
            static constexpr std::uintptr_t PathObstacleAction = 0x268;
            static constexpr std::uintptr_t bApplyCostLimit = 0x26C;
            static constexpr std::uintptr_t PathingCostLimitFactor = 0x270;
            static constexpr std::uintptr_t PathingMinimumCostLimit = 0x274;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"bAssignFoundBlockingBuildingAsTarget", 0x1C0, "BoolProperty"},
            {"bOnUnreachableGoalFindBlockingBuilding", 0x1C0, "BoolProperty"},
            {"BlockingBuildingTraceDistance", 0x1C8, "StructProperty"},
            {"BlockingBuildingTraceCooldown", 0x1F0, "StructProperty"},
            {"BlockedByBuildingKeySelector", 0x218, "StructProperty"},
            {"LastBlockingBuildingTraceTimeKeySelector", 0x240, "StructProperty"},
            {"PathObstacleAction", 0x268, "ByteProperty"},
            {"bApplyCostLimit", 0x26C, "BoolProperty"},
            {"PathingCostLimitFactor", 0x270, "FloatProperty"},
            {"PathingMinimumCostLimit", 0x274, "FloatProperty"},
        }};
    };

    struct CheckPointLocationInterface
    {
        static constexpr std::string_view Name = "CheckPointLocationInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DisplayableTile
    {
        static constexpr std::string_view Name = "DisplayableTile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Coordinates = 0x28;
            static constexpr std::uintptr_t ClearedPixelCount = 0x30;
            static constexpr std::uintptr_t FogMask = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Coordinates", 0x28, "StructProperty"},
            {"ClearedPixelCount", 0x30, "IntProperty"},
            {"FogMask", 0x38, "ObjectProperty"},
        }};
    };

    struct EnvQueryTest_JunoIsNearBuilding
    {
        static constexpr std::string_view Name = "EnvQueryTest_JunoIsNearBuilding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t OverlapData = 0x1F8;
            static constexpr std::uintptr_t GenerateOnlyInsideClusterBounds = 0x228;
            static constexpr std::uintptr_t MinimumBuildingClusterVolume = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OverlapData", 0x1F8, "StructProperty"},
            {"GenerateOnlyInsideClusterBounds", 0x228, "StructProperty"},
            {"MinimumBuildingClusterVolume", 0x260, "StructProperty"},
        }};
    };

    struct EnvQueryTest_JunoIsNotInCampWithVillagerSpawningOff
    {
        static constexpr std::string_view Name = "EnvQueryTest_JunoIsNotInCampWithVillagerSpawningOff";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t TestOrder = 0x30;
            static constexpr std::uintptr_t TestPurpose = 0x34;
            static constexpr std::uintptr_t TestComment = 0x38;
            static constexpr std::uintptr_t MultipleContextFilterOp = 0x48;
            static constexpr std::uintptr_t MultipleContextScoreOp = 0x49;
            static constexpr std::uintptr_t FilterType = 0x4A;
            static constexpr std::uintptr_t BoolValue = 0x50;
            static constexpr std::uintptr_t FloatValueMin = 0x88;
            static constexpr std::uintptr_t FloatValueMax = 0xC0;
            static constexpr std::uintptr_t ScoringEquation = 0xF9;
            static constexpr std::uintptr_t ClampMinType = 0xFA;
            static constexpr std::uintptr_t ClampMaxType = 0xFB;
            static constexpr std::uintptr_t NormalizationType = 0xFC;
            static constexpr std::uintptr_t ScoreClampMin = 0x100;
            static constexpr std::uintptr_t ScoreClampMax = 0x138;
            static constexpr std::uintptr_t ScoringFactor = 0x170;
            static constexpr std::uintptr_t ReferenceValue = 0x1A8;
            static constexpr std::uintptr_t bDefineReferenceValue = 0x1E0;
            static constexpr std::uintptr_t bWorkOnFloatValues = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"TestOrder", 0x30, "IntProperty"},
            {"TestPurpose", 0x34, "ByteProperty"},
            {"TestComment", 0x38, "StrProperty"},
            {"MultipleContextFilterOp", 0x48, "ByteProperty"},
            {"MultipleContextScoreOp", 0x49, "ByteProperty"},
            {"FilterType", 0x4A, "ByteProperty"},
            {"BoolValue", 0x50, "StructProperty"},
            {"FloatValueMin", 0x88, "StructProperty"},
            {"FloatValueMax", 0xC0, "StructProperty"},
            {"ScoringEquation", 0xF9, "ByteProperty"},
            {"ClampMinType", 0xFA, "ByteProperty"},
            {"ClampMaxType", 0xFB, "ByteProperty"},
            {"NormalizationType", 0xFC, "EnumProperty"},
            {"ScoreClampMin", 0x100, "StructProperty"},
            {"ScoreClampMax", 0x138, "StructProperty"},
            {"ScoringFactor", 0x170, "StructProperty"},
            {"ReferenceValue", 0x1A8, "StructProperty"},
            {"bDefineReferenceValue", 0x1E0, "BoolProperty"},
            {"bWorkOnFloatValues", 0x1F0, "BoolProperty"},
        }};
    };

    struct EnvQueryTest_JunoIsUnderCeiling
    {
        static constexpr std::string_view Name = "EnvQueryTest_JunoIsUnderCeiling";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t SweepData = 0x1F8;
            static constexpr std::uintptr_t SweepHeight = 0x228;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SweepData", 0x1F8, "StructProperty"},
            {"SweepHeight", 0x228, "StructProperty"},
        }};
    };

    struct FJunoAICampManagementVisitorWorldConditionSchema
    {
        static constexpr std::string_view Name = "FJunoAICampManagementVisitorWorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCampWorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_JunoConversation
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_JunoConversation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_AIBotConversation";
        struct Offsets
        {
            static constexpr std::uintptr_t NPCMoodReactionAnimTable = 0x2F8;
            static constexpr std::uintptr_t GrantableQuestTags = 0x300;
            static constexpr std::uintptr_t bShouldCreateMerchantComponent = 0x320;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NPCMoodReactionAnimTable", 0x2F8, "ObjectProperty"},
            {"GrantableQuestTags", 0x300, "StructProperty"},
            {"bShouldCreateMerchantComponent", 0x320, "BoolProperty"},
        }};
    };

    struct FortAutomationRpcManager_Juno
    {
        static constexpr std::string_view Name = "FortAutomationRpcManager_Juno";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAutomationRpcManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortGameStateComponent_LFNReplay
    {
        static constexpr std::string_view Name = "FortGameStateComponent_LFNReplay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent_Replay";
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

    struct FortPickupInteractOverrideComponent_Juno
    {
        static constexpr std::string_view Name = "FortPickupInteractOverrideComponent_Juno";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPickupInteractOverrideComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Priority = 0xC0;
            static constexpr std::uintptr_t ContextOverrideWidget = 0xC8;
            static constexpr std::uintptr_t SecondContextOverrideWidget = 0xD0;
            static constexpr std::uintptr_t bContextOverrideWidgetApplied = 0xD8;
            static constexpr std::uintptr_t bRemoveContextOverrideWidgetsImmediately = 0xD9;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Priority", 0xC0, "IntProperty"},
            {"ContextOverrideWidget", 0xC8, "ClassProperty"},
            {"SecondContextOverrideWidget", 0xD0, "ClassProperty"},
            {"bContextOverrideWidgetApplied", 0xD8, "BoolProperty"},
            {"bRemoveContextOverrideWidgetsImmediately", 0xD9, "BoolProperty"},
        }};
    };

    struct FortQueryGenerator_PointsOutsideVolume
    {
        static constexpr std::string_view Name = "FortQueryGenerator_PointsOutsideVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryGenerator_ProjectedPoints";
        struct Offsets
        {
            static constexpr std::uintptr_t SpaceBetween = 0x90;
            static constexpr std::uintptr_t NumberOfRingsAroundVolume = 0xC8;
            static constexpr std::uintptr_t GenerateInVolume = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SpaceBetween", 0x90, "StructProperty"},
            {"NumberOfRingsAroundVolume", 0xC8, "StructProperty"},
            {"GenerateInVolume", 0x100, "ClassProperty"},
        }};
    };

    struct FortQuestDefinitionComponent_Juno
    {
        static constexpr std::string_view Name = "FortQuestDefinitionComponent_Juno";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestDefinitionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoQuestData = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JunoQuestData", 0x40, "StructProperty"},
        }};
    };

    struct FortQuestDefinitionComponent_JunoEncounter
    {
        static constexpr std::string_view Name = "FortQuestDefinitionComponent_JunoEncounter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestDefinitionComponent_Juno";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoQuestData = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JunoQuestData", 0x40, "StructProperty"},
        }};
    };

    struct FortQuestItemComponent_Juno
    {
        static constexpr std::string_view Name = "FortQuestItemComponent_Juno";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestItemComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestDefinitionComponent = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuestDefinitionComponent", 0x30, "ObjectProperty"},
        }};
    };

    struct FortQuestItemComponent_JunoEncounter
    {
        static constexpr std::string_view Name = "FortQuestItemComponent_JunoEncounter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestItemComponent_Juno";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestDefinitionComponent = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuestDefinitionComponent", 0x30, "ObjectProperty"},
        }};
    };

    struct GFA_JunoUI_OverrideReticle
    {
        static constexpr std::string_view Name = "GFA_JunoUI_OverrideReticle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t ReticleOverrides = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReticleOverrides", 0x28, "MapProperty"},
        }};
    };

    struct InteractSelection_Juno
    {
        static constexpr std::string_view Name = "InteractSelection_Juno";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InteractSelection_SweepFromReticle";
        struct Offsets
        {
            static constexpr std::uintptr_t InteractableActorsCache = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InteractableActorsCache", 0x38, "ArrayProperty"},
        }};
    };

    struct JunoAIAttachableArmorActor
    {
        static constexpr std::string_view Name = "JunoAIAttachableArmorActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingSMActor";
        struct Offsets
        {
            static constexpr std::uintptr_t ArmorMaxHealth = 0xB60;
            static constexpr std::uintptr_t OwnerForwardedDamageMultiplerWhenArmored = 0xB88;
            static constexpr std::uintptr_t OwnerForwardedDamageMultiplerWhenExposed = 0xBB0;
            static constexpr std::uintptr_t HitArmorDamageGameplayEffect = 0xBD8;
            static constexpr std::uintptr_t HitWeakPointDamageGameplayEffect = 0xBE0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ArmorMaxHealth", 0xB60, "StructProperty"},
            {"OwnerForwardedDamageMultiplerWhenArmored", 0xB88, "StructProperty"},
            {"OwnerForwardedDamageMultiplerWhenExposed", 0xBB0, "StructProperty"},
            {"HitArmorDamageGameplayEffect", 0xBD8, "ClassProperty"},
            {"HitWeakPointDamageGameplayEffect", 0xBE0, "ClassProperty"},
        }};
    };

    struct JunoAIAttachableArmorComponent
    {
        static constexpr std::string_view Name = "JunoAIAttachableArmorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnAttachedArmorDamagedDelegate = 0x290;
            static constexpr std::uintptr_t OnAttachedArmorDestroyedDelegate = 0x2A0;
            static constexpr std::uintptr_t AttachToSocket = 0x2B0;
            static constexpr std::uintptr_t ChildAttachableArmor = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnAttachedArmorDamagedDelegate", 0x290, "MulticastInlineDelegateProperty"},
            {"OnAttachedArmorDestroyedDelegate", 0x2A0, "MulticastInlineDelegateProperty"},
            {"AttachToSocket", 0x2B0, "NameProperty"},
            {"ChildAttachableArmor", 0x2B8, "ObjectProperty"},
        }};
    };

    struct JunoAIBotController
    {
        static constexpr std::string_view Name = "JunoAIBotController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotController";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoAIInventoryComponent = 0x1540;
            static constexpr std::uintptr_t DefaultItemsToAdd = 0x1548;
            static constexpr std::uintptr_t EnableDurabilityOnInventory = 0x15B8;
            static constexpr std::uintptr_t UseRoleCheckForDurability = 0x15E0;
            static constexpr std::uintptr_t RequiredRoleForDurability = 0x1608;
            static constexpr std::uintptr_t bUseFocusedActorEyeLocationForFocalPoint = 0x1650;
            static constexpr std::uintptr_t bUseValidItemsPerType = 0x1651;
            static constexpr std::uintptr_t bAutoRemoveItemWhenAddingToFullInventory = 0x1652;
            static constexpr std::uintptr_t EffectivenessMultiplierForWeaponSelectionOnPickedOrAddedItem = 0x1658;
            static constexpr std::uintptr_t ValidItemsTablePerType = 0x1680;
            static constexpr std::uintptr_t AutomaticallyEquippedWeaponOnDurabilityBreak = 0x1690;
            static constexpr std::uintptr_t DurabilityMultiplier = 0x1698;
            static constexpr std::uintptr_t TagToApplyWhenAddingFallbackItemForDurabilityBreak = 0x16C0;
            static constexpr std::uintptr_t TargetWeightModifiers = 0x16C8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"JunoAIInventoryComponent", 0x1540, "ObjectProperty"},
            {"DefaultItemsToAdd", 0x1548, "ArrayProperty"},
            {"EnableDurabilityOnInventory", 0x15B8, "StructProperty"},
            {"UseRoleCheckForDurability", 0x15E0, "StructProperty"},
            {"RequiredRoleForDurability", 0x1608, "StructProperty"},
            {"bUseFocusedActorEyeLocationForFocalPoint", 0x1650, "BoolProperty"},
            {"bUseValidItemsPerType", 0x1651, "BoolProperty"},
            {"bAutoRemoveItemWhenAddingToFullInventory", 0x1652, "BoolProperty"},
            {"EffectivenessMultiplierForWeaponSelectionOnPickedOrAddedItem", 0x1658, "StructProperty"},
            {"ValidItemsTablePerType", 0x1680, "MapProperty"},
            {"AutomaticallyEquippedWeaponOnDurabilityBreak", 0x1690, "ObjectProperty"},
            {"DurabilityMultiplier", 0x1698, "StructProperty"},
            {"TagToApplyWhenAddingFallbackItemForDurabilityBreak", 0x16C0, "StructProperty"},
            {"TargetWeightModifiers", 0x16C8, "ArrayProperty"},
        }};
    };

    struct JunoAIBotEvaluator_ConsumeInventory
    {
        static constexpr std::string_view Name = "JunoAIBotEvaluator_ConsumeInventory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t ConsumeTimeoutSeconds = 0xC0;
            static constexpr std::uintptr_t FailedConsumeItemCooldownInSeconds = 0xC4;
            static constexpr std::uintptr_t MaxItemsOnCooldown = 0xC8;
            static constexpr std::uintptr_t ItemTagQueryConsumeAllowed = 0xD0;
            static constexpr std::uintptr_t OwnerPawnQueryConsumeEnabled = 0x118;
            static constexpr std::uintptr_t ItemSelected = 0x160;
            static constexpr std::uintptr_t ConsumeItemConfigurations = 0x178;
            static constexpr std::uintptr_t ConsumeInventoryItemObjectKeyName = 0x198;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ConsumeTimeoutSeconds", 0xC0, "FloatProperty"},
            {"FailedConsumeItemCooldownInSeconds", 0xC4, "FloatProperty"},
            {"MaxItemsOnCooldown", 0xC8, "IntProperty"},
            {"ItemTagQueryConsumeAllowed", 0xD0, "StructProperty"},
            {"OwnerPawnQueryConsumeEnabled", 0x118, "StructProperty"},
            {"ItemSelected", 0x160, "WeakObjectProperty"},
            {"ConsumeItemConfigurations", 0x178, "SoftObjectProperty"},
            {"ConsumeInventoryItemObjectKeyName", 0x198, "NameProperty"},
        }};
    };

    struct JunoAIBotEvaluator_FTUENPC
    {
        static constexpr std::string_view Name = "JunoAIBotEvaluator_FTUENPC";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t TeleportDestinationKeyName = 0xCC;
            static constexpr std::uintptr_t ShouldTeleportKeyName = 0xD4;
            static constexpr std::uintptr_t FTUERuntimeConfiguration = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TeleportDestinationKeyName", 0xCC, "NameProperty"},
            {"ShouldTeleportKeyName", 0xD4, "NameProperty"},
            {"FTUERuntimeConfiguration", 0xE0, "StructProperty"},
        }};
    };

    struct JunoAIBotEvaluator_FallbackBehavior
    {
        static constexpr std::string_view Name = "JunoAIBotEvaluator_FallbackBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t EQSRequest = 0x1C8;
            static constexpr std::uintptr_t EQSRequestTagQuery = 0x210;
            static constexpr std::uintptr_t NavigationQueryFilterClass = 0x258;
            static constexpr std::uintptr_t bFallbackToPointWithNoCustomNavigationQueryFilter = 0x260;
            static constexpr std::uintptr_t bFallbackToPawnPossessedLocation = 0x261;
            static constexpr std::uintptr_t bEnableAutomaticDespawn = 0x262;
            static constexpr std::uintptr_t AutomaticDespawnMinDistanceFromPossessedLocation = 0x268;
            static constexpr std::uintptr_t AutomaticDespawnMinTimeAwayFromPossessedLocation = 0x290;
            static constexpr std::uintptr_t AutomaticDespawnMinDistanceFromPlayers = 0x2B8;
            static constexpr std::uintptr_t AutomaticDespawnTagQuery = 0x2E0;
            static constexpr std::uintptr_t BestTargetActorName = 0x328;
            static constexpr std::uintptr_t EnableKeyName = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"EQSRequest", 0x1C8, "StructProperty"},
            {"EQSRequestTagQuery", 0x210, "StructProperty"},
            {"NavigationQueryFilterClass", 0x258, "ClassProperty"},
            {"bFallbackToPointWithNoCustomNavigationQueryFilter", 0x260, "BoolProperty"},
            {"bFallbackToPawnPossessedLocation", 0x261, "BoolProperty"},
            {"bEnableAutomaticDespawn", 0x262, "BoolProperty"},
            {"AutomaticDespawnMinDistanceFromPossessedLocation", 0x268, "StructProperty"},
            {"AutomaticDespawnMinTimeAwayFromPossessedLocation", 0x290, "StructProperty"},
            {"AutomaticDespawnMinDistanceFromPlayers", 0x2B8, "StructProperty"},
            {"AutomaticDespawnTagQuery", 0x2E0, "StructProperty"},
            {"BestTargetActorName", 0x328, "NameProperty"},
            {"EnableKeyName", 0x330, "NameProperty"},
        }};
    };

    struct JunoAIBotEvaluator_HardRemovalStart
    {
        static constexpr std::string_view Name = "JunoAIBotEvaluator_HardRemovalStart";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t EQSRequest = 0x1C8;
            static constexpr std::uintptr_t RequestHardRemovalOnSuccess = 0x210;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EQSRequest", 0x1C8, "StructProperty"},
            {"RequestHardRemovalOnSuccess", 0x210, "StructProperty"},
        }};
    };

    struct JunoAIBotEvaluator_Leash
    {
        static constexpr std::string_view Name = "JunoAIBotEvaluator_Leash";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t DisengageTokenQuery = 0xA8;
            static constexpr std::uintptr_t DisengageTimeOutsideLeashMin = 0xF0;
            static constexpr std::uintptr_t DisengageTimeOutsideLeashMax = 0x108;
            static constexpr std::uintptr_t DisengageTimeSinceLastRangedWeaponFireOnTarget = 0x120;
            static constexpr std::uintptr_t CombatPositionQuery = 0x138;
            static constexpr std::uintptr_t ReengageDistance = 0x180;
            static constexpr std::uintptr_t KitingTokenQuery = 0x198;
            static constexpr std::uintptr_t GiveUpWaitTime = 0x1E0;
            static constexpr std::uintptr_t TargetActorKeyName = 0x1F8;
            static constexpr std::uintptr_t TargetInsideLeashKeyName = 0x1FC;
            static constexpr std::uintptr_t TargetLeashExitTimeKeyName = 0x200;
            static constexpr std::uintptr_t LastRangedWeaponFireAbilityTimeKeyName = 0x204;
            static constexpr std::uintptr_t HasLoSOnThreatKeyName = 0x208;
            static constexpr std::uintptr_t BehaviorStartTimeKeyName = 0x20C;
            static constexpr std::uintptr_t TokenMovementStateKeyName = 0x210;
            static constexpr std::uintptr_t FallbackMovementStateKeyName = 0x214;
            static constexpr std::uintptr_t CachedPawnPtr = 0x230;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"DisengageTokenQuery", 0xA8, "StructProperty"},
            {"DisengageTimeOutsideLeashMin", 0xF0, "StructProperty"},
            {"DisengageTimeOutsideLeashMax", 0x108, "StructProperty"},
            {"DisengageTimeSinceLastRangedWeaponFireOnTarget", 0x120, "StructProperty"},
            {"CombatPositionQuery", 0x138, "StructProperty"},
            {"ReengageDistance", 0x180, "StructProperty"},
            {"KitingTokenQuery", 0x198, "StructProperty"},
            {"GiveUpWaitTime", 0x1E0, "StructProperty"},
            {"TargetActorKeyName", 0x1F8, "NameProperty"},
            {"TargetInsideLeashKeyName", 0x1FC, "NameProperty"},
            {"TargetLeashExitTimeKeyName", 0x200, "NameProperty"},
            {"LastRangedWeaponFireAbilityTimeKeyName", 0x204, "NameProperty"},
            {"HasLoSOnThreatKeyName", 0x208, "NameProperty"},
            {"BehaviorStartTimeKeyName", 0x20C, "NameProperty"},
            {"TokenMovementStateKeyName", 0x210, "NameProperty"},
            {"FallbackMovementStateKeyName", 0x214, "NameProperty"},
            {"CachedPawnPtr", 0x230, "ObjectProperty"},
        }};
    };

    struct JunoAIBotEvaluator_OffhandWeapon
    {
        static constexpr std::string_view Name = "JunoAIBotEvaluator_OffhandWeapon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t TorchWeaponTag = 0xC8;
            static constexpr std::uintptr_t OffhandWeaponToEquipTag = 0xCC;
            static constexpr std::uintptr_t ExecutionStatusesToCheckedToHolsterKeyNames = 0xD0;
            static constexpr std::uintptr_t BoolsToCheckToHolsterKeyNames = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TorchWeaponTag", 0xC8, "StructProperty"},
            {"OffhandWeaponToEquipTag", 0xCC, "StructProperty"},
            {"ExecutionStatusesToCheckedToHolsterKeyNames", 0xD0, "ArrayProperty"},
            {"BoolsToCheckToHolsterKeyNames", 0xF0, "ArrayProperty"},
        }};
    };

    struct JunoAIBotEvaluator_ReactToVerb
    {
        static constexpr std::string_view Name = "JunoAIBotEvaluator_ReactToVerb";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_ReactToVerb";
        struct Offsets
        {
            static constexpr std::uintptr_t CacheReactToVerbDigestedSkillSet = 0x230;
            static constexpr std::uintptr_t CanRunPreconditions = 0x290;
            static constexpr std::uintptr_t VerbReactionsMap = 0x2B8;
            static constexpr std::uintptr_t MinDistanceFromPlayerToReact = 0x2E8;
            static constexpr std::uintptr_t MinDistanceFromPlayerToReactForGroupEmotes = 0x310;
            static constexpr std::uintptr_t MaxReactionEmoteDuration = 0x338;
            static constexpr std::uintptr_t MaxReactionEmoteDurationForGroupEmotes = 0x360;
            static constexpr std::uintptr_t MaxReactionWaitTime = 0x388;
            static constexpr std::uintptr_t DelayBeforeRunningQueuedReaction = 0x3B0;
            static constexpr std::uintptr_t PerceptionConfiguration = 0x3E0;
            static constexpr std::uintptr_t bIsHighPriorityEvaluator = 0x4A0;
            static constexpr std::uintptr_t bEnableNPCReactionsPersistence = 0x4A1;
            static constexpr std::uintptr_t ReactToEmotes = 0x4A8;
            static constexpr std::uintptr_t MaxNPCsReactingToEmotes = 0x4D0;
            static constexpr std::uintptr_t LimitReactToGroupEmote = 0x4F8;
            static constexpr std::uintptr_t ReactToGroupEmoteIfClosestNPCWithinDistance = 0x520;
            static constexpr std::uintptr_t ReactToGroupEmoteDelaySecondsWhenPlayersNearby = 0x548;
            static constexpr std::uintptr_t MinDistanceOfPlayersFromPlayerToConsiderNearbyPlayer = 0x570;
            static constexpr std::uintptr_t ReactToGroupEmoteDelayRandomDeviation = 0x598;
            static constexpr std::uintptr_t ReactToGroupEmoteDelayForNumPlayersNearby = 0x5C0;
            static constexpr std::uintptr_t ReactToEmoteGameplayTag = 0x5E8;
            static constexpr std::uintptr_t ReactToEmoteRequiredTagQueryOnAI = 0x5F0;
            static constexpr std::uintptr_t ReactToVerbTargetActorKeyName = 0x638;
            static constexpr std::uintptr_t ReactToVerbShouldMoveKeyName = 0x640;
            static constexpr std::uintptr_t ReactToVerbShouldMoveReachDistanceKeyName = 0x648;
            static constexpr std::uintptr_t ExtraStructDataKeyName = 0x650;
            static constexpr std::uintptr_t ReactToVerbShouldJoinGroupEmoteKeyName = 0x658;
            static constexpr std::uintptr_t ShouldFollowTargetKeyName = 0x660;
            static constexpr std::uintptr_t TagQueryRequiredOnPlayerToMoveForReactToEmote = 0x668;
            static constexpr std::uintptr_t TagQueryRequiredOnPlayerToLookAtCameraForReactToEmote = 0x6B0;
            static constexpr std::uintptr_t CanRunPreconditionsQueryState = 0x700;
            static constexpr std::uintptr_t SaveControl = 0x758;
        };

        inline static constexpr std::array<PropertyInfo, 32> Properties{{
            {"CacheReactToVerbDigestedSkillSet", 0x230, "ObjectProperty"},
            {"CanRunPreconditions", 0x290, "StructProperty"},
            {"VerbReactionsMap", 0x2B8, "StructProperty"},
            {"MinDistanceFromPlayerToReact", 0x2E8, "StructProperty"},
            {"MinDistanceFromPlayerToReactForGroupEmotes", 0x310, "StructProperty"},
            {"MaxReactionEmoteDuration", 0x338, "StructProperty"},
            {"MaxReactionEmoteDurationForGroupEmotes", 0x360, "StructProperty"},
            {"MaxReactionWaitTime", 0x388, "StructProperty"},
            {"DelayBeforeRunningQueuedReaction", 0x3B0, "StructProperty"},
            {"PerceptionConfiguration", 0x3E0, "StructProperty"},
            {"bIsHighPriorityEvaluator", 0x4A0, "BoolProperty"},
            {"bEnableNPCReactionsPersistence", 0x4A1, "BoolProperty"},
            {"ReactToEmotes", 0x4A8, "StructProperty"},
            {"MaxNPCsReactingToEmotes", 0x4D0, "StructProperty"},
            {"LimitReactToGroupEmote", 0x4F8, "StructProperty"},
            {"ReactToGroupEmoteIfClosestNPCWithinDistance", 0x520, "StructProperty"},
            {"ReactToGroupEmoteDelaySecondsWhenPlayersNearby", 0x548, "StructProperty"},
            {"MinDistanceOfPlayersFromPlayerToConsiderNearbyPlayer", 0x570, "StructProperty"},
            {"ReactToGroupEmoteDelayRandomDeviation", 0x598, "StructProperty"},
            {"ReactToGroupEmoteDelayForNumPlayersNearby", 0x5C0, "StructProperty"},
            {"ReactToEmoteGameplayTag", 0x5E8, "StructProperty"},
            {"ReactToEmoteRequiredTagQueryOnAI", 0x5F0, "StructProperty"},
            {"ReactToVerbTargetActorKeyName", 0x638, "NameProperty"},
            {"ReactToVerbShouldMoveKeyName", 0x640, "NameProperty"},
            {"ReactToVerbShouldMoveReachDistanceKeyName", 0x648, "NameProperty"},
            {"ExtraStructDataKeyName", 0x650, "NameProperty"},
            {"ReactToVerbShouldJoinGroupEmoteKeyName", 0x658, "NameProperty"},
            {"ShouldFollowTargetKeyName", 0x660, "NameProperty"},
            {"TagQueryRequiredOnPlayerToMoveForReactToEmote", 0x668, "StructProperty"},
            {"TagQueryRequiredOnPlayerToLookAtCameraForReactToEmote", 0x6B0, "StructProperty"},
            {"CanRunPreconditionsQueryState", 0x700, "StructProperty"},
            {"SaveControl", 0x758, "StructProperty"},
        }};
    };

    struct JunoAIBotEvaluator_UnderThunderBehavior
    {
        static constexpr std::string_view Name = "JunoAIBotEvaluator_UnderThunderBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t IsEnabled = 0x1E8;
            static constexpr std::uintptr_t UseTagForShelterCheck = 0x210;
            static constexpr std::uintptr_t TagToCheckForSheltered = 0x238;
            static constexpr std::uintptr_t ShelterQueryTypes = 0x240;
            static constexpr std::uintptr_t MaxShelterDistance = 0x250;
            static constexpr std::uintptr_t MinDistanceFromShelterLocationToKeepItValid = 0x278;
            static constexpr std::uintptr_t ShelterCollidingActorRequiresAnyTag = 0x2A0;
            static constexpr std::uintptr_t TagToApplyForShelteredNPC = 0x2C0;
            static constexpr std::uintptr_t TagToApplyForNonShelteredNPC = 0x2C4;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"IsEnabled", 0x1E8, "StructProperty"},
            {"UseTagForShelterCheck", 0x210, "StructProperty"},
            {"TagToCheckForSheltered", 0x238, "StructProperty"},
            {"ShelterQueryTypes", 0x240, "ArrayProperty"},
            {"MaxShelterDistance", 0x250, "StructProperty"},
            {"MinDistanceFromShelterLocationToKeepItValid", 0x278, "StructProperty"},
            {"ShelterCollidingActorRequiresAnyTag", 0x2A0, "StructProperty"},
            {"TagToApplyForShelteredNPC", 0x2C0, "StructProperty"},
            {"TagToApplyForNonShelteredNPC", 0x2C4, "StructProperty"},
        }};
    };

    struct JunoAIBotEvaluator_UnstuckFailsafe
    {
        static constexpr std::string_view Name = "JunoAIBotEvaluator_UnstuckFailsafe";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t TeleportDestinationKeyName = 0xC0;
            static constexpr std::uintptr_t ShouldTeleportKeyName = 0xC4;
            static constexpr std::uintptr_t Configuration = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TeleportDestinationKeyName", 0xC0, "NameProperty"},
            {"ShouldTeleportKeyName", 0xC4, "NameProperty"},
            {"Configuration", 0xD0, "StructProperty"},
        }};
    };

    struct JunoAICampManagementRewardsWorldConditionSchema
    {
        static constexpr std::string_view Name = "JunoAICampManagementRewardsWorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCampWorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct JunoAICheatManager
    {
        static constexpr std::string_view Name = "JunoAICheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoAIEvaluator_RandomMoodReaction
    {
        static constexpr std::string_view Name = "JunoAIEvaluator_RandomMoodReaction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t ReactionsConfig = 0xA0;
            static constexpr std::uintptr_t EvaluationIntervalSecondsRange = 0xD0;
            static constexpr std::uintptr_t MoodReactionToUseKeyName = 0xF0;
            static constexpr std::uintptr_t GrantStartTimeoutSeconds = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ReactionsConfig", 0xA0, "StructProperty"},
            {"EvaluationIntervalSecondsRange", 0xD0, "StructProperty"},
            {"MoodReactionToUseKeyName", 0xF0, "NameProperty"},
            {"GrantStartTimeoutSeconds", 0xF8, "StructProperty"},
        }};
    };

    struct JunoAIEvaluator_RequestedMoodReaction
    {
        static constexpr std::string_view Name = "JunoAIEvaluator_RequestedMoodReaction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedOwnerComp = 0x28;
            static constexpr std::uintptr_t CachedAIController = 0x30;
            static constexpr std::uintptr_t OverrideNavigationFilterClass = 0x38;
            static constexpr std::uintptr_t ExecutionStatusName = 0x58;
            static constexpr std::uintptr_t CachedLODSettingsInterface = 0x68;
            static constexpr std::uintptr_t KeyAccessValidator = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CachedOwnerComp", 0x28, "ObjectProperty"},
            {"CachedAIController", 0x30, "ObjectProperty"},
            {"OverrideNavigationFilterClass", 0x38, "ClassProperty"},
            {"ExecutionStatusName", 0x58, "NameProperty"},
            {"CachedLODSettingsInterface", 0x68, "InterfaceProperty"},
            {"KeyAccessValidator", 0x78, "ObjectProperty"},
        }};
    };

    struct JunoAIFTUEEndWorldConditionSchema
    {
        static constexpr std::string_view Name = "JunoAIFTUEEndWorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct JunoAIFriendshipPawnComponent
    {
        static constexpr std::string_view Name = "JunoAIFriendshipPawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoEnableFriendshipChanges = 0xC8;
            static constexpr std::uintptr_t bAutoDisableFriendshipChangesWhenConverted = 0xC9;
            static constexpr std::uintptr_t VerbsDatatable = 0xD0;
            static constexpr std::uintptr_t MaxDistanceFromPlayerToReact = 0xD8;
            static constexpr std::uintptr_t MinimumFriendship = 0x100;
            static constexpr std::uintptr_t MaximumFriendship = 0x128;
            static constexpr std::uintptr_t MoodReactionOnFriendshipStateIncrease = 0x150;
            static constexpr std::uintptr_t MoodReactionOnFriendshipStateDecrease = 0x160;
            static constexpr std::uintptr_t OnFriendshipValueRequestedChangeDelegate = 0x2D8;
            static constexpr std::uintptr_t OnFriendshipValueChangedDelegate = 0x300;
            static constexpr std::uintptr_t OnFriendshipStateChangedDelegate = 0x328;
            static constexpr std::uintptr_t FriendshipValue = 0x33C;
            static constexpr std::uintptr_t FriendshipState = 0x340;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"bAutoEnableFriendshipChanges", 0xC8, "BoolProperty"},
            {"bAutoDisableFriendshipChangesWhenConverted", 0xC9, "BoolProperty"},
            {"VerbsDatatable", 0xD0, "ObjectProperty"},
            {"MaxDistanceFromPlayerToReact", 0xD8, "StructProperty"},
            {"MinimumFriendship", 0x100, "StructProperty"},
            {"MaximumFriendship", 0x128, "StructProperty"},
            {"MoodReactionOnFriendshipStateIncrease", 0x150, "MapProperty"},
            {"MoodReactionOnFriendshipStateDecrease", 0x160, "MapProperty"},
            {"OnFriendshipValueRequestedChangeDelegate", 0x2D8, "MulticastInlineDelegateProperty"},
            {"OnFriendshipValueChangedDelegate", 0x300, "MulticastInlineDelegateProperty"},
            {"OnFriendshipStateChangedDelegate", 0x328, "MulticastInlineDelegateProperty"},
            {"FriendshipValue", 0x33C, "FloatProperty"},
            {"FriendshipState", 0x340, "StructProperty"},
        }};
    };

    struct JunoAIHappinessPawnComponent
    {
        static constexpr std::string_view Name = "JunoAIHappinessPawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbsConfig = 0xC8;
            static constexpr std::uintptr_t OngoingRequirementsConfig = 0xF8;
            static constexpr std::uintptr_t OnHappinessValueChangedDelegate = 0x288;
            static constexpr std::uintptr_t OnHappinessStateChangedDelegate = 0x298;
            static constexpr std::uintptr_t HappinessValue = 0x2AC;
            static constexpr std::uintptr_t HappinessState = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"VerbsConfig", 0xC8, "StructProperty"},
            {"OngoingRequirementsConfig", 0xF8, "StructProperty"},
            {"OnHappinessValueChangedDelegate", 0x288, "MulticastInlineDelegateProperty"},
            {"OnHappinessStateChangedDelegate", 0x298, "MulticastInlineDelegateProperty"},
            {"HappinessValue", 0x2AC, "FloatProperty"},
            {"HappinessState", 0x2B0, "StructProperty"},
        }};
    };

    struct JunoAIHappinessWorldConditionSchema
    {
        static constexpr std::string_view Name = "JunoAIHappinessWorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct JunoAIInventoryComponent
    {
        static constexpr std::string_view Name = "JunoAIInventoryComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoInventoryComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnInventoryDataRestored = 0xD0;
            static constexpr std::uintptr_t bShouldAcquireInventoryOnInitialize = 0xF8;
            static constexpr std::uintptr_t InventoryConfig = 0x100;
            static constexpr std::uintptr_t TypeTags = 0x118;
            static constexpr std::uintptr_t InventoryLootTierGroup = 0x138;
            static constexpr std::uintptr_t bCanEverBeCraftingSource = 0x13C;
            static constexpr std::uintptr_t bEnabledAsCraftingSource = 0x13C;
            static constexpr std::uintptr_t bShouldDropContentsOnOwnerDeath = 0x13C;
            static constexpr std::uintptr_t bShouldOpenInventoryMenu = 0x13C;
            static constexpr std::uintptr_t OnEnabledAsCraftingSourceDelegate = 0x140;
            static constexpr std::uintptr_t LootTossSpeed = 0x150;
            static constexpr std::uintptr_t LootTossAngle = 0x154;
            static constexpr std::uintptr_t LootTossOffset = 0x158;
            static constexpr std::uintptr_t InventoryHandle = 0x170;
            static constexpr std::uintptr_t ItemSlotGroups = 0x1C8;
            static constexpr std::uintptr_t ReplicatedItemSlotData = 0x1D8;
            static constexpr std::uintptr_t OnInventoryChangedEvent = 0x240;
            static constexpr std::uintptr_t SelectedItemGroupSlots = 0x270;
            static constexpr std::uintptr_t TotalItemCounts = 0x2C0;
            static constexpr std::uintptr_t CachedItemInstanceCounts = 0x2D0;
            static constexpr std::uintptr_t MigrationSearcher = 0x2F0;
            static constexpr std::uintptr_t CustomFilterDelegate = 0x2F8;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"OnInventoryDataRestored", 0xD0, "MulticastInlineDelegateProperty"},
            {"bShouldAcquireInventoryOnInitialize", 0xF8, "BoolProperty"},
            {"InventoryConfig", 0x100, "StructProperty"},
            {"TypeTags", 0x118, "StructProperty"},
            {"InventoryLootTierGroup", 0x138, "NameProperty"},
            {"bCanEverBeCraftingSource", 0x13C, "BoolProperty"},
            {"bEnabledAsCraftingSource", 0x13C, "BoolProperty"},
            {"bShouldDropContentsOnOwnerDeath", 0x13C, "BoolProperty"},
            {"bShouldOpenInventoryMenu", 0x13C, "BoolProperty"},
            {"OnEnabledAsCraftingSourceDelegate", 0x140, "MulticastInlineDelegateProperty"},
            {"LootTossSpeed", 0x150, "FloatProperty"},
            {"LootTossAngle", 0x154, "FloatProperty"},
            {"LootTossOffset", 0x158, "StructProperty"},
            {"InventoryHandle", 0x170, "StructProperty"},
            {"ItemSlotGroups", 0x1C8, "MapProperty"},
            {"ReplicatedItemSlotData", 0x1D8, "StructProperty"},
            {"OnInventoryChangedEvent", 0x240, "MulticastInlineDelegateProperty"},
            {"SelectedItemGroupSlots", 0x270, "ArrayProperty"},
            {"TotalItemCounts", 0x2C0, "MapProperty"},
            {"CachedItemInstanceCounts", 0x2D0, "MapProperty"},
            {"MigrationSearcher", 0x2F0, "ObjectProperty"},
            {"CustomFilterDelegate", 0x2F8, "DelegateProperty"},
        }};
    };

    struct JunoAIInventorySourceComponent
    {
        static constexpr std::string_view Name = "JunoAIInventorySourceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Inventory = 0x138;
            static constexpr std::uintptr_t CachedJunoAIPersistence = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Inventory", 0x138, "WeakObjectProperty"},
            {"CachedJunoAIPersistence", 0x140, "WeakObjectProperty"},
        }};
    };

    struct JunoAIMerchantComponent
    {
        static constexpr std::string_view Name = "JunoAIMerchantComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bRestockInRealWorldTime = 0x131;
            static constexpr std::uintptr_t bRefreshTimeOnTransaction = 0x132;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bRestockInRealWorldTime", 0x131, "BoolProperty"},
            {"bRefreshTimeOnTransaction", 0x132, "BoolProperty"},
        }};
    };

    struct JunoAINPCRelationshipPawnComponent
    {
        static constexpr std::string_view Name = "JunoAINPCRelationshipPawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Config = 0xC8;
            static constexpr std::uintptr_t WCConditionsConfig = 0xE8;
            static constexpr std::uintptr_t VerbConditionsConfig = 0x118;
            static constexpr std::uintptr_t OnRelationshipLevelChanged = 0x148;
            static constexpr std::uintptr_t PlayerStates = 0x2D0;
            static constexpr std::uintptr_t bHasRunInitialEvaluation = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Config", 0xC8, "StructProperty"},
            {"WCConditionsConfig", 0xE8, "StructProperty"},
            {"VerbConditionsConfig", 0x118, "StructProperty"},
            {"OnRelationshipLevelChanged", 0x148, "MulticastInlineDelegateProperty"},
            {"PlayerStates", 0x2D0, "ArrayProperty"},
            {"bHasRunInitialEvaluation", 0x2E0, "BoolProperty"},
        }};
    };

    struct JunoAINavInvokerComponent
    {
        static constexpr std::string_view Name = "JunoAINavInvokerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavigationInvokerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TileGenerationRadius = 0xC0;
            static constexpr std::uintptr_t TileRemovalRadius = 0xC4;
            static constexpr std::uintptr_t SupportedAgents = 0xC8;
            static constexpr std::uintptr_t Priority = 0xCC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TileGenerationRadius", 0xC0, "FloatProperty"},
            {"TileRemovalRadius", 0xC4, "FloatProperty"},
            {"SupportedAgents", 0xC8, "StructProperty"},
            {"Priority", 0xCC, "EnumProperty"},
        }};
    };

    struct JunoAIPersistenceComponent
    {
        static constexpr std::string_view Name = "JunoAIPersistenceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
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

    struct JunoAIPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoAIPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t SavedAIData = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SavedAIData", 0x58, "StructProperty"},
        }};
    };

    struct JunoAIPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoAIPersistenceFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoAIPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoAIPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoAIRecruitmentRequirementsPawnComponent
    {
        static constexpr std::string_view Name = "JunoAIRecruitmentRequirementsPawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnRequirementsStateChanged = 0xC8;
            static constexpr std::uintptr_t RequirementsConfig = 0xD8;
            static constexpr std::uintptr_t CanEvaluateRequirementsCondition = 0x108;
            static constexpr std::uintptr_t bTreatUnsetAsNotMet = 0x130;
            static constexpr std::uintptr_t Results = 0x138;
            static constexpr std::uintptr_t bHasRunInitialEvaluation = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnRequirementsStateChanged", 0xC8, "MulticastInlineDelegateProperty"},
            {"RequirementsConfig", 0xD8, "StructProperty"},
            {"CanEvaluateRequirementsCondition", 0x108, "StructProperty"},
            {"bTreatUnsetAsNotMet", 0x130, "BoolProperty"},
            {"Results", 0x138, "ArrayProperty"},
            {"bHasRunInitialEvaluation", 0x148, "BoolProperty"},
        }};
    };

    struct JunoAIRecruitmentRequirementsWorldConditionSchema
    {
        static constexpr std::string_view Name = "JunoAIRecruitmentRequirementsWorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct JunoAIRelationshipWorldConditionSchema
    {
        static constexpr std::string_view Name = "JunoAIRelationshipWorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct JunoAIRuntimeAnalytics
    {
        static constexpr std::string_view Name = "JunoAIRuntimeAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoAISafetyBubbleComponent
    {
        static constexpr std::string_view Name = "JunoAISafetyBubbleComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TagsData = 0xC0;
            static constexpr std::uintptr_t InGameHoursDuration = 0xD0;
            static constexpr std::uintptr_t SafetyBubbleRadius = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TagsData", 0xC0, "ArrayProperty"},
            {"InGameHoursDuration", 0xD0, "StructProperty"},
            {"SafetyBubbleRadius", 0xF8, "StructProperty"},
        }};
    };

    struct JunoAISpawnerDataComponent_AssembledMesh
    {
        static constexpr std::string_view Name = "JunoAISpawnerDataComponent_AssembledMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_AssembledMesh";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseDisplayNameFromAssembledMeshCID = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bUseDisplayNameFromAssembledMeshCID", 0xA0, "BoolProperty"},
        }};
    };

    struct JunoAbilityTask_UseConsumable
    {
        static constexpr std::string_view Name = "JunoAbilityTask_UseConsumable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemConsumed = 0x78;
            static constexpr std::uintptr_t Cancelled = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ItemConsumed", 0x78, "MulticastInlineDelegateProperty"},
            {"Cancelled", 0x88, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoAbilityTask_WaitLowMoveInput
    {
        static constexpr std::string_view Name = "JunoAbilityTask_WaitLowMoveInput";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AbilityTask";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLowMovementInput = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnLowMovementInput", 0x78, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoAbility_AIRangedWeaponMultiFire
    {
        static constexpr std::string_view Name = "JunoAbility_AIRangedWeaponMultiFire";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t WeaponFireSequence = 0xB40;
            static constexpr std::uintptr_t SequenceRelativeLocationForwardOffset = 0xB50;
            static constexpr std::uintptr_t SequenceRelativeLocationUpOffset = 0xB78;
            static constexpr std::uintptr_t TargetActorKeyName = 0xBA0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"WeaponFireSequence", 0xB40, "ArrayProperty"},
            {"SequenceRelativeLocationForwardOffset", 0xB50, "StructProperty"},
            {"SequenceRelativeLocationUpOffset", 0xB78, "StructProperty"},
            {"TargetActorKeyName", 0xBA0, "NameProperty"},
        }};
    };

    struct JunoAbility_BusGlider
    {
        static constexpr std::string_view Name = "JunoAbility_BusGlider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoAbility_GliderBase";
        struct Offsets
        {
            static constexpr std::uintptr_t GliderStaminaImmunityTag = 0xCC0;
            static constexpr std::uintptr_t UnforcedGliderEnabledTag = 0xCC4;
            static constexpr std::uintptr_t bIsUnforcedGliderEquipped = 0xCC8;
            static constexpr std::uintptr_t bIsUnforcedGliderActionUnblocked = 0xCC9;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GliderStaminaImmunityTag", 0xCC0, "StructProperty"},
            {"UnforcedGliderEnabledTag", 0xCC4, "StructProperty"},
            {"bIsUnforcedGliderEquipped", 0xCC8, "BoolProperty"},
            {"bIsUnforcedGliderActionUnblocked", 0xCC9, "BoolProperty"},
        }};
    };

    struct JunoAbility_Gear
    {
        static constexpr std::string_view Name = "JunoAbility_Gear";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t ActivationType = 0x3A8;
            static constexpr std::uintptr_t EffectContainers = 0x3B0;
            static constexpr std::uintptr_t GameplayEffectContainers = 0x748;
            static constexpr std::uintptr_t DynamicGameplayEffectContainers = 0x758;
            static constexpr std::uintptr_t OwnerPreviewImageOverrideTags = 0x768;
            static constexpr std::uintptr_t ProjectileClass = 0x788;
            static constexpr std::uintptr_t bAllowBlueprintReplicatedVariables = 0x790;
            static constexpr std::uintptr_t DamageStatHandle = 0x798;
            static constexpr std::uintptr_t AbilityCosts = 0x7A8;
            static constexpr std::uintptr_t Costs = 0x7B8;
            static constexpr std::uintptr_t bApplyingCostsEnabled = 0x7C8;
            static constexpr std::uintptr_t bShowWidgetForCosts = 0x7C8;
            static constexpr std::uintptr_t MovementCancellationLeashLength = 0x7D0;
            static constexpr std::uintptr_t ExplicitCooldownDuration = 0x7F8;
            static constexpr std::uintptr_t ExplicitCooldownTags = 0x820;
            static constexpr std::uintptr_t ExplicitCooldownAssetTags = 0x840;
            static constexpr std::uintptr_t CustomFiringSequenceLength = 0x860;
            static constexpr std::uintptr_t bDisableMoveCombining = 0x864;
            static constexpr std::uintptr_t bIgnoreClientActivationAttempts = 0x864;
            static constexpr std::uintptr_t bPersistOnDeath = 0x864;
            static constexpr std::uintptr_t bRequireServerTimeValidationPass = 0x864;
            static constexpr std::uintptr_t bRequireServerValidationPass = 0x864;
            static constexpr std::uintptr_t bStartWithCooldown = 0x864;
            static constexpr std::uintptr_t bStopsAIBehaviorLogic = 0x864;
            static constexpr std::uintptr_t bStopsAIMovement = 0x864;
            static constexpr std::uintptr_t bForceNormalAILOD = 0x865;
            static constexpr std::uintptr_t bStopsRVOAvoidance = 0x865;
            static constexpr std::uintptr_t MinimumRequiredAILODLevel = 0x868;
            static constexpr std::uintptr_t bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests = 0x86C;
            static constexpr std::uintptr_t bAcceptTargetActorVehicleForCanHitTests = 0x86C;
            static constexpr std::uintptr_t bRelevantForAIDespawning = 0x86C;
            static constexpr std::uintptr_t bUseOwnerInstigatorAsInstigator = 0x86C;
            static constexpr std::uintptr_t bUseTetheredPawnAsInstigator = 0x86C;
            static constexpr std::uintptr_t bUseAIFireLocationAndRotation = 0x86D;
            static constexpr std::uintptr_t AIWeaponUsage = 0x870;
            static constexpr std::uintptr_t WeaponTestApplicationTag = 0x874;
            static constexpr std::uintptr_t bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling = 0x878;
            static constexpr std::uintptr_t bCanHitIgnoresNonzeroTranslationOffsetsForNavigationRaycast = 0x878;
            static constexpr std::uintptr_t bVerifyFireOffsetIsNotObstructedByWorldGeometry = 0x878;
            static constexpr std::uintptr_t FireOffset = 0x880;
            static constexpr std::uintptr_t ActivationNoiseRange = 0x898;
            static constexpr std::uintptr_t ImpactNoiseRange = 0x89C;
            static constexpr std::uintptr_t ActivationNoiseLoudness = 0x8A0;
            static constexpr std::uintptr_t ImpactNoiseLoudness = 0x8A4;
            static constexpr std::uintptr_t ProhibitedTargetTags = 0x8A8;
            static constexpr std::uintptr_t bLeadPawnTargets = 0x8C9;
            static constexpr std::uintptr_t DesiredThrowAngle = 0x8CC;
            static constexpr std::uintptr_t MaxYawAngleToFire = 0x8D0;
            static constexpr std::uintptr_t bClampMaxYawAngleToFire = 0x8D4;
            static constexpr std::uintptr_t bUseTargetActorLocation = 0x8D5;
            static constexpr std::uintptr_t InitialAccuracyMax = 0x8D8;
            static constexpr std::uintptr_t InitialAccuracyMin = 0x8DC;
            static constexpr std::uintptr_t TargetAccuracyMax = 0x8E0;
            static constexpr std::uintptr_t TargetAccuracyMin = 0x8E4;
            static constexpr std::uintptr_t MinAccuracyDistance = 0x8E8;
            static constexpr std::uintptr_t MaxAccuracyDistance = 0x8EC;
            static constexpr std::uintptr_t AccuracyDistanceMultiplier = 0x8F0;
            static constexpr std::uintptr_t NumUsesToReachTargetAccuracy = 0x8F4;
            static constexpr std::uintptr_t UseCount = 0x8F8;
            static constexpr std::uintptr_t bIsMobileToggle = 0x8FC;
            static constexpr std::uintptr_t bActivateIfTagsAlreadyPresent = 0x8FD;
            static constexpr std::uintptr_t GameplayAbilityBehaviorDistanceData = 0x908;
            static constexpr std::uintptr_t MontageInfo = 0x978;
            static constexpr std::uintptr_t PreviousMontageInfo = 0x9D0;
            static constexpr std::uintptr_t ModList = 0xA28;
            static constexpr std::uintptr_t AbilityWeapon = 0xA38;
            static constexpr std::uintptr_t DisplayName = 0xA40;
            static constexpr std::uintptr_t Description = 0xA50;
            static constexpr std::uintptr_t SmallPreviewImageOverride = 0xA68;
            static constexpr std::uintptr_t ChargeStartTime = 0xA80;
            static constexpr std::uintptr_t ChargeState = 0xA88;
            static constexpr std::uintptr_t ToolTip = 0xAD0;
            static constexpr std::uintptr_t StatList = 0xAD8;
            static constexpr std::uintptr_t ActorTrackingSettings = 0xAE8;
            static constexpr std::uintptr_t AnalyticsTags = 0xB10;
            static constexpr std::uintptr_t TagChangedActions = 0xB30;
        };

        inline static constexpr std::array<PropertyInfo, 76> Properties{{
            {"ActivationType", 0x3A8, "EnumProperty"},
            {"EffectContainers", 0x3B0, "StructProperty"},
            {"GameplayEffectContainers", 0x748, "ArrayProperty"},
            {"DynamicGameplayEffectContainers", 0x758, "MapProperty"},
            {"OwnerPreviewImageOverrideTags", 0x768, "StructProperty"},
            {"ProjectileClass", 0x788, "ClassProperty"},
            {"bAllowBlueprintReplicatedVariables", 0x790, "BoolProperty"},
            {"DamageStatHandle", 0x798, "StructProperty"},
            {"AbilityCosts", 0x7A8, "ArrayProperty"},
            {"Costs", 0x7B8, "ArrayProperty"},
            {"bApplyingCostsEnabled", 0x7C8, "BoolProperty"},
            {"bShowWidgetForCosts", 0x7C8, "BoolProperty"},
            {"MovementCancellationLeashLength", 0x7D0, "StructProperty"},
            {"ExplicitCooldownDuration", 0x7F8, "StructProperty"},
            {"ExplicitCooldownTags", 0x820, "StructProperty"},
            {"ExplicitCooldownAssetTags", 0x840, "StructProperty"},
            {"CustomFiringSequenceLength", 0x860, "ByteProperty"},
            {"bDisableMoveCombining", 0x864, "BoolProperty"},
            {"bIgnoreClientActivationAttempts", 0x864, "BoolProperty"},
            {"bPersistOnDeath", 0x864, "BoolProperty"},
            {"bRequireServerTimeValidationPass", 0x864, "BoolProperty"},
            {"bRequireServerValidationPass", 0x864, "BoolProperty"},
            {"bStartWithCooldown", 0x864, "BoolProperty"},
            {"bStopsAIBehaviorLogic", 0x864, "BoolProperty"},
            {"bStopsAIMovement", 0x864, "BoolProperty"},
            {"bForceNormalAILOD", 0x865, "BoolProperty"},
            {"bStopsRVOAvoidance", 0x865, "BoolProperty"},
            {"MinimumRequiredAILODLevel", 0x868, "EnumProperty"},
            {"bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests", 0x86C, "BoolProperty"},
            {"bAcceptTargetActorVehicleForCanHitTests", 0x86C, "BoolProperty"},
            {"bRelevantForAIDespawning", 0x86C, "BoolProperty"},
            {"bUseOwnerInstigatorAsInstigator", 0x86C, "BoolProperty"},
            {"bUseTetheredPawnAsInstigator", 0x86C, "BoolProperty"},
            {"bUseAIFireLocationAndRotation", 0x86D, "BoolProperty"},
            {"AIWeaponUsage", 0x870, "EnumProperty"},
            {"WeaponTestApplicationTag", 0x874, "StructProperty"},
            {"bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling", 0x878, "BoolProperty"},
            {"bCanHitIgnoresNonzeroTranslationOffsetsForNavigationRaycast", 0x878, "BoolProperty"},
            {"bVerifyFireOffsetIsNotObstructedByWorldGeometry", 0x878, "BoolProperty"},
            {"FireOffset", 0x880, "StructProperty"},
            {"ActivationNoiseRange", 0x898, "FloatProperty"},
            {"ImpactNoiseRange", 0x89C, "FloatProperty"},
            {"ActivationNoiseLoudness", 0x8A0, "FloatProperty"},
            {"ImpactNoiseLoudness", 0x8A4, "FloatProperty"},
            {"ProhibitedTargetTags", 0x8A8, "StructProperty"},
            {"bLeadPawnTargets", 0x8C9, "BoolProperty"},
            {"DesiredThrowAngle", 0x8CC, "FloatProperty"},
            {"MaxYawAngleToFire", 0x8D0, "FloatProperty"},
            {"bClampMaxYawAngleToFire", 0x8D4, "BoolProperty"},
            {"bUseTargetActorLocation", 0x8D5, "BoolProperty"},
            {"InitialAccuracyMax", 0x8D8, "FloatProperty"},
            {"InitialAccuracyMin", 0x8DC, "FloatProperty"},
            {"TargetAccuracyMax", 0x8E0, "FloatProperty"},
            {"TargetAccuracyMin", 0x8E4, "FloatProperty"},
            {"MinAccuracyDistance", 0x8E8, "FloatProperty"},
            {"MaxAccuracyDistance", 0x8EC, "FloatProperty"},
            {"AccuracyDistanceMultiplier", 0x8F0, "FloatProperty"},
            {"NumUsesToReachTargetAccuracy", 0x8F4, "IntProperty"},
            {"UseCount", 0x8F8, "IntProperty"},
            {"bIsMobileToggle", 0x8FC, "BoolProperty"},
            {"bActivateIfTagsAlreadyPresent", 0x8FD, "BoolProperty"},
            {"GameplayAbilityBehaviorDistanceData", 0x908, "ArrayProperty"},
            {"MontageInfo", 0x978, "StructProperty"},
            {"PreviousMontageInfo", 0x9D0, "StructProperty"},
            {"ModList", 0xA28, "ArrayProperty"},
            {"AbilityWeapon", 0xA38, "ObjectProperty"},
            {"DisplayName", 0xA40, "TextProperty"},
            {"Description", 0xA50, "TextProperty"},
            {"SmallPreviewImageOverride", 0xA68, "ObjectProperty"},
            {"ChargeStartTime", 0xA80, "FloatProperty"},
            {"ChargeState", 0xA88, "EnumProperty"},
            {"ToolTip", 0xAD0, "ClassProperty"},
            {"StatList", 0xAD8, "ObjectProperty"},
            {"ActorTrackingSettings", 0xAE8, "StructProperty"},
            {"AnalyticsTags", 0xB10, "StructProperty"},
            {"TagChangedActions", 0xB30, "ArrayProperty"},
        }};
    };

    struct JunoAbility_Gear_Resurrect
    {
        static constexpr std::string_view Name = "JunoAbility_Gear_Resurrect";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoAbility_Gear";
        struct Offsets
        {
            static constexpr std::uintptr_t ActivationType = 0x3A8;
            static constexpr std::uintptr_t EffectContainers = 0x3B0;
            static constexpr std::uintptr_t GameplayEffectContainers = 0x748;
            static constexpr std::uintptr_t DynamicGameplayEffectContainers = 0x758;
            static constexpr std::uintptr_t OwnerPreviewImageOverrideTags = 0x768;
            static constexpr std::uintptr_t ProjectileClass = 0x788;
            static constexpr std::uintptr_t bAllowBlueprintReplicatedVariables = 0x790;
            static constexpr std::uintptr_t DamageStatHandle = 0x798;
            static constexpr std::uintptr_t AbilityCosts = 0x7A8;
            static constexpr std::uintptr_t Costs = 0x7B8;
            static constexpr std::uintptr_t bApplyingCostsEnabled = 0x7C8;
            static constexpr std::uintptr_t bShowWidgetForCosts = 0x7C8;
            static constexpr std::uintptr_t MovementCancellationLeashLength = 0x7D0;
            static constexpr std::uintptr_t ExplicitCooldownDuration = 0x7F8;
            static constexpr std::uintptr_t ExplicitCooldownTags = 0x820;
            static constexpr std::uintptr_t ExplicitCooldownAssetTags = 0x840;
            static constexpr std::uintptr_t CustomFiringSequenceLength = 0x860;
            static constexpr std::uintptr_t bDisableMoveCombining = 0x864;
            static constexpr std::uintptr_t bIgnoreClientActivationAttempts = 0x864;
            static constexpr std::uintptr_t bPersistOnDeath = 0x864;
            static constexpr std::uintptr_t bRequireServerTimeValidationPass = 0x864;
            static constexpr std::uintptr_t bRequireServerValidationPass = 0x864;
            static constexpr std::uintptr_t bStartWithCooldown = 0x864;
            static constexpr std::uintptr_t bStopsAIBehaviorLogic = 0x864;
            static constexpr std::uintptr_t bStopsAIMovement = 0x864;
            static constexpr std::uintptr_t bForceNormalAILOD = 0x865;
            static constexpr std::uintptr_t bStopsRVOAvoidance = 0x865;
            static constexpr std::uintptr_t MinimumRequiredAILODLevel = 0x868;
            static constexpr std::uintptr_t bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests = 0x86C;
            static constexpr std::uintptr_t bAcceptTargetActorVehicleForCanHitTests = 0x86C;
            static constexpr std::uintptr_t bRelevantForAIDespawning = 0x86C;
            static constexpr std::uintptr_t bUseOwnerInstigatorAsInstigator = 0x86C;
            static constexpr std::uintptr_t bUseTetheredPawnAsInstigator = 0x86C;
            static constexpr std::uintptr_t bUseAIFireLocationAndRotation = 0x86D;
            static constexpr std::uintptr_t AIWeaponUsage = 0x870;
            static constexpr std::uintptr_t WeaponTestApplicationTag = 0x874;
            static constexpr std::uintptr_t bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling = 0x878;
            static constexpr std::uintptr_t bCanHitIgnoresNonzeroTranslationOffsetsForNavigationRaycast = 0x878;
            static constexpr std::uintptr_t bVerifyFireOffsetIsNotObstructedByWorldGeometry = 0x878;
            static constexpr std::uintptr_t FireOffset = 0x880;
            static constexpr std::uintptr_t ActivationNoiseRange = 0x898;
            static constexpr std::uintptr_t ImpactNoiseRange = 0x89C;
            static constexpr std::uintptr_t ActivationNoiseLoudness = 0x8A0;
            static constexpr std::uintptr_t ImpactNoiseLoudness = 0x8A4;
            static constexpr std::uintptr_t ProhibitedTargetTags = 0x8A8;
            static constexpr std::uintptr_t bLeadPawnTargets = 0x8C9;
            static constexpr std::uintptr_t DesiredThrowAngle = 0x8CC;
            static constexpr std::uintptr_t MaxYawAngleToFire = 0x8D0;
            static constexpr std::uintptr_t bClampMaxYawAngleToFire = 0x8D4;
            static constexpr std::uintptr_t bUseTargetActorLocation = 0x8D5;
            static constexpr std::uintptr_t InitialAccuracyMax = 0x8D8;
            static constexpr std::uintptr_t InitialAccuracyMin = 0x8DC;
            static constexpr std::uintptr_t TargetAccuracyMax = 0x8E0;
            static constexpr std::uintptr_t TargetAccuracyMin = 0x8E4;
            static constexpr std::uintptr_t MinAccuracyDistance = 0x8E8;
            static constexpr std::uintptr_t MaxAccuracyDistance = 0x8EC;
            static constexpr std::uintptr_t AccuracyDistanceMultiplier = 0x8F0;
            static constexpr std::uintptr_t NumUsesToReachTargetAccuracy = 0x8F4;
            static constexpr std::uintptr_t UseCount = 0x8F8;
            static constexpr std::uintptr_t bIsMobileToggle = 0x8FC;
            static constexpr std::uintptr_t bActivateIfTagsAlreadyPresent = 0x8FD;
            static constexpr std::uintptr_t GameplayAbilityBehaviorDistanceData = 0x908;
            static constexpr std::uintptr_t MontageInfo = 0x978;
            static constexpr std::uintptr_t PreviousMontageInfo = 0x9D0;
            static constexpr std::uintptr_t ModList = 0xA28;
            static constexpr std::uintptr_t AbilityWeapon = 0xA38;
            static constexpr std::uintptr_t DisplayName = 0xA40;
            static constexpr std::uintptr_t Description = 0xA50;
            static constexpr std::uintptr_t SmallPreviewImageOverride = 0xA68;
            static constexpr std::uintptr_t ChargeStartTime = 0xA80;
            static constexpr std::uintptr_t ChargeState = 0xA88;
            static constexpr std::uintptr_t ToolTip = 0xAD0;
            static constexpr std::uintptr_t StatList = 0xAD8;
            static constexpr std::uintptr_t ActorTrackingSettings = 0xAE8;
            static constexpr std::uintptr_t AnalyticsTags = 0xB10;
            static constexpr std::uintptr_t TagChangedActions = 0xB30;
        };

        inline static constexpr std::array<PropertyInfo, 76> Properties{{
            {"ActivationType", 0x3A8, "EnumProperty"},
            {"EffectContainers", 0x3B0, "StructProperty"},
            {"GameplayEffectContainers", 0x748, "ArrayProperty"},
            {"DynamicGameplayEffectContainers", 0x758, "MapProperty"},
            {"OwnerPreviewImageOverrideTags", 0x768, "StructProperty"},
            {"ProjectileClass", 0x788, "ClassProperty"},
            {"bAllowBlueprintReplicatedVariables", 0x790, "BoolProperty"},
            {"DamageStatHandle", 0x798, "StructProperty"},
            {"AbilityCosts", 0x7A8, "ArrayProperty"},
            {"Costs", 0x7B8, "ArrayProperty"},
            {"bApplyingCostsEnabled", 0x7C8, "BoolProperty"},
            {"bShowWidgetForCosts", 0x7C8, "BoolProperty"},
            {"MovementCancellationLeashLength", 0x7D0, "StructProperty"},
            {"ExplicitCooldownDuration", 0x7F8, "StructProperty"},
            {"ExplicitCooldownTags", 0x820, "StructProperty"},
            {"ExplicitCooldownAssetTags", 0x840, "StructProperty"},
            {"CustomFiringSequenceLength", 0x860, "ByteProperty"},
            {"bDisableMoveCombining", 0x864, "BoolProperty"},
            {"bIgnoreClientActivationAttempts", 0x864, "BoolProperty"},
            {"bPersistOnDeath", 0x864, "BoolProperty"},
            {"bRequireServerTimeValidationPass", 0x864, "BoolProperty"},
            {"bRequireServerValidationPass", 0x864, "BoolProperty"},
            {"bStartWithCooldown", 0x864, "BoolProperty"},
            {"bStopsAIBehaviorLogic", 0x864, "BoolProperty"},
            {"bStopsAIMovement", 0x864, "BoolProperty"},
            {"bForceNormalAILOD", 0x865, "BoolProperty"},
            {"bStopsRVOAvoidance", 0x865, "BoolProperty"},
            {"MinimumRequiredAILODLevel", 0x868, "EnumProperty"},
            {"bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests", 0x86C, "BoolProperty"},
            {"bAcceptTargetActorVehicleForCanHitTests", 0x86C, "BoolProperty"},
            {"bRelevantForAIDespawning", 0x86C, "BoolProperty"},
            {"bUseOwnerInstigatorAsInstigator", 0x86C, "BoolProperty"},
            {"bUseTetheredPawnAsInstigator", 0x86C, "BoolProperty"},
            {"bUseAIFireLocationAndRotation", 0x86D, "BoolProperty"},
            {"AIWeaponUsage", 0x870, "EnumProperty"},
            {"WeaponTestApplicationTag", 0x874, "StructProperty"},
            {"bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling", 0x878, "BoolProperty"},
            {"bCanHitIgnoresNonzeroTranslationOffsetsForNavigationRaycast", 0x878, "BoolProperty"},
            {"bVerifyFireOffsetIsNotObstructedByWorldGeometry", 0x878, "BoolProperty"},
            {"FireOffset", 0x880, "StructProperty"},
            {"ActivationNoiseRange", 0x898, "FloatProperty"},
            {"ImpactNoiseRange", 0x89C, "FloatProperty"},
            {"ActivationNoiseLoudness", 0x8A0, "FloatProperty"},
            {"ImpactNoiseLoudness", 0x8A4, "FloatProperty"},
            {"ProhibitedTargetTags", 0x8A8, "StructProperty"},
            {"bLeadPawnTargets", 0x8C9, "BoolProperty"},
            {"DesiredThrowAngle", 0x8CC, "FloatProperty"},
            {"MaxYawAngleToFire", 0x8D0, "FloatProperty"},
            {"bClampMaxYawAngleToFire", 0x8D4, "BoolProperty"},
            {"bUseTargetActorLocation", 0x8D5, "BoolProperty"},
            {"InitialAccuracyMax", 0x8D8, "FloatProperty"},
            {"InitialAccuracyMin", 0x8DC, "FloatProperty"},
            {"TargetAccuracyMax", 0x8E0, "FloatProperty"},
            {"TargetAccuracyMin", 0x8E4, "FloatProperty"},
            {"MinAccuracyDistance", 0x8E8, "FloatProperty"},
            {"MaxAccuracyDistance", 0x8EC, "FloatProperty"},
            {"AccuracyDistanceMultiplier", 0x8F0, "FloatProperty"},
            {"NumUsesToReachTargetAccuracy", 0x8F4, "IntProperty"},
            {"UseCount", 0x8F8, "IntProperty"},
            {"bIsMobileToggle", 0x8FC, "BoolProperty"},
            {"bActivateIfTagsAlreadyPresent", 0x8FD, "BoolProperty"},
            {"GameplayAbilityBehaviorDistanceData", 0x908, "ArrayProperty"},
            {"MontageInfo", 0x978, "StructProperty"},
            {"PreviousMontageInfo", 0x9D0, "StructProperty"},
            {"ModList", 0xA28, "ArrayProperty"},
            {"AbilityWeapon", 0xA38, "ObjectProperty"},
            {"DisplayName", 0xA40, "TextProperty"},
            {"Description", 0xA50, "TextProperty"},
            {"SmallPreviewImageOverride", 0xA68, "ObjectProperty"},
            {"ChargeStartTime", 0xA80, "FloatProperty"},
            {"ChargeState", 0xA88, "EnumProperty"},
            {"ToolTip", 0xAD0, "ClassProperty"},
            {"StatList", 0xAD8, "ObjectProperty"},
            {"ActorTrackingSettings", 0xAE8, "StructProperty"},
            {"AnalyticsTags", 0xB10, "StructProperty"},
            {"TagChangedActions", 0xB30, "ArrayProperty"},
        }};
    };

    struct JunoAbility_Glider
    {
        static constexpr std::string_view Name = "JunoAbility_Glider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoAbility_GliderBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ForcedGlidingTag = 0xCC0;
            static constexpr std::uintptr_t bShowGliderDeployPrompt = 0xCC4;
            static constexpr std::uintptr_t bIsGliderForcedOpen = 0xCC5;
            static constexpr std::uintptr_t OpenParachuteTags = 0xCC8;
            static constexpr std::uintptr_t RecentlyClosedGliderGE = 0xCE8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ForcedGlidingTag", 0xCC0, "StructProperty"},
            {"bShowGliderDeployPrompt", 0xCC4, "BoolProperty"},
            {"bIsGliderForcedOpen", 0xCC5, "BoolProperty"},
            {"OpenParachuteTags", 0xCC8, "StructProperty"},
            {"RecentlyClosedGliderGE", 0xCE8, "ClassProperty"},
        }};
    };

    struct JunoAbility_GliderBase
    {
        static constexpr std::string_view Name = "JunoAbility_GliderBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsGliderEnabled = 0xCB0;
            static constexpr std::uintptr_t InGliderDefinitionOverride = 0xCB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsGliderEnabled", 0xCB0, "BoolProperty"},
            {"InGliderDefinitionOverride", 0xCB8, "ObjectProperty"},
        }};
    };

    struct JunoAbility_PlayerPushPhysicsObject
    {
        static constexpr std::string_view Name = "JunoAbility_PlayerPushPhysicsObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxPhysicsObjectSizeToPush = 0xB40;
            static constexpr std::uintptr_t MinPhysicsObjectSizeToPush = 0xB41;
            static constexpr std::uintptr_t NoTagsPusher = 0xB48;
            static constexpr std::uintptr_t NoTagsPushedObject = 0xB68;
            static constexpr std::uintptr_t DefaultPushMontage = 0xB88;
            static constexpr std::uintptr_t SpecializedPushMontages = 0xB90;
            static constexpr std::uintptr_t StaminaInitialCost = 0xBA0;
            static constexpr std::uintptr_t StaminaDrainPerSecond = 0xBC8;
            static constexpr std::uintptr_t CachedStaminaComponent = 0xBF0;
            static constexpr std::uintptr_t TrackedObjectToPush = 0xC00;
            static constexpr std::uintptr_t TrackedObjectSimSize = 0xC08;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"MaxPhysicsObjectSizeToPush", 0xB40, "EnumProperty"},
            {"MinPhysicsObjectSizeToPush", 0xB41, "EnumProperty"},
            {"NoTagsPusher", 0xB48, "StructProperty"},
            {"NoTagsPushedObject", 0xB68, "StructProperty"},
            {"DefaultPushMontage", 0xB88, "ObjectProperty"},
            {"SpecializedPushMontages", 0xB90, "ArrayProperty"},
            {"StaminaInitialCost", 0xBA0, "StructProperty"},
            {"StaminaDrainPerSecond", 0xBC8, "StructProperty"},
            {"CachedStaminaComponent", 0xBF0, "WeakObjectProperty"},
            {"TrackedObjectToPush", 0xC00, "WeakObjectProperty"},
            {"TrackedObjectSimSize", 0xC08, "EnumProperty"},
        }};
    };

    struct JunoAccountItemUnlockLookupSubsystem
    {
        static constexpr std::string_view Name = "JunoAccountItemUnlockLookupSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLookupReady = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnLookupReady", 0x38, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoAction
    {
        static constexpr std::string_view Name = "JunoAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoActionConfig
    {
        static constexpr std::string_view Name = "JunoActionConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoActionClass = 0x28;
            static constexpr std::uintptr_t JunoActionExecutionConfig = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"JunoActionClass", 0x28, "ClassProperty"},
            {"JunoActionExecutionConfig", 0x30, "EnumProperty"},
        }};
    };

    struct JunoActionConfig_LoadAndSetStaticMesh
    {
        static constexpr std::string_view Name = "JunoActionConfig_LoadAndSetStaticMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoActionConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t SoftStaticMesh = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SoftStaticMesh", 0x38, "SoftObjectProperty"},
        }};
    };

    struct JunoActionConfig_StaticMesh
    {
        static constexpr std::string_view Name = "JunoActionConfig_StaticMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoActionConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticMesh = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StaticMesh", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoAction_LoadAndSetStaticMesh
    {
        static constexpr std::string_view Name = "JunoAction_LoadAndSetStaticMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoAction_SetStaticMesh
    {
        static constexpr std::string_view Name = "JunoAction_SetStaticMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoAction";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoActionsDB
    {
        static constexpr std::string_view Name = "JunoActionsDB";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoTokenToJunoActions = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JunoTokenToJunoActions", 0x28, "MapProperty"},
        }};
    };

    struct JunoActorAttributeOverrideComponent
    {
        static constexpr std::string_view Name = "JunoActorAttributeOverrideComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBuildingActorTagComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AttributeOverrideDataRegistry = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttributeOverrideDataRegistry", 0xC0, "StructProperty"},
        }};
    };

    struct JunoActorMapSubsystem
    {
        static constexpr std::string_view Name = "JunoActorMapSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoActorWorldLocationPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoActorWorldLocationPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorWorldLocationSaveData = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActorWorldLocationSaveData", 0x60, "StructProperty"},
        }};
    };

    struct JunoActorWorldLocationPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoActorWorldLocationPersistenceFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoActorWorldLocationPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoActorWorldLocationPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoAdventureGameplayVolume
    {
        static constexpr std::string_view Name = "JunoAdventureGameplayVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t bShouldPersist = 0x348;
            static constexpr std::uintptr_t bDestroyLinkedPlayspaceOnEndPlay = 0x349;
            static constexpr std::uintptr_t SavedActorGuid = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bShouldPersist", 0x348, "BoolProperty"},
            {"bDestroyLinkedPlayspaceOnEndPlay", 0x349, "BoolProperty"},
            {"SavedActorGuid", 0x368, "StructProperty"},
        }};
    };

    struct JunoAdventurePlayspaceBase
    {
        static constexpr std::string_view Name = "JunoAdventurePlayspaceBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspace";
        struct Offsets
        {
            static constexpr std::uintptr_t bShouldPersist = 0x670;
            static constexpr std::uintptr_t AdventureTags = 0x678;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bShouldPersist", 0x670, "BoolProperty"},
            {"AdventureTags", 0x678, "StructProperty"},
        }};
    };

    struct JunoAdventuresAnalytics
    {
        static constexpr std::string_view Name = "JunoAdventuresAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoAdventuresBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoAdventuresBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoAfflictionAttributeSetInterface
    {
        static constexpr std::string_view Name = "JunoAfflictionAttributeSetInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoAfflictionSet
    {
        static constexpr std::string_view Name = "JunoAfflictionSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t OutgoingAffliction = 0x48;
            static constexpr std::uintptr_t OutgoingAfflictionMultiplier = 0x58;
            static constexpr std::uintptr_t IncomingAfflictionMultiplier = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OutgoingAffliction", 0x48, "StructProperty"},
            {"OutgoingAfflictionMultiplier", 0x58, "StructProperty"},
            {"IncomingAfflictionMultiplier", 0x68, "StructProperty"},
        }};
    };

    struct JunoAlterationCraftingComponent
    {
        static constexpr std::string_view Name = "JunoAlterationCraftingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedCraftingObjectComponent = 0xD8;
            static constexpr std::uintptr_t WeaponEssenceDataRegistryType = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedCraftingObjectComponent", 0xD8, "WeakObjectProperty"},
            {"WeaponEssenceDataRegistryType", 0xE0, "StructProperty"},
        }};
    };

    struct JunoAnalytics
    {
        static constexpr std::string_view Name = "JunoAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoAnimGeometryCollectionComponent
    {
        static constexpr std::string_view Name = "JunoAnimGeometryCollectionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GeometryCollectionReference = 0xC0;
            static constexpr std::uintptr_t SkeletalMeshReference = 0xE8;
            static constexpr std::uintptr_t Mappings = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GeometryCollectionReference", 0xC0, "StructProperty"},
            {"SkeletalMeshReference", 0xE8, "StructProperty"},
            {"Mappings", 0x110, "ArrayProperty"},
        }};
    };

    struct JunoAnimInstance
    {
        static constexpr std::string_view Name = "JunoAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimInputEventList = 0x270;
            static constexpr std::uintptr_t BoneSets = 0x280;
            static constexpr std::uintptr_t AnimPropertyGameplayTagBindings = 0x290;
            static constexpr std::uintptr_t AnimPropertyCurveFloatBindings = 0x2A0;
            static constexpr std::uintptr_t AnimPropertyCurveCompareBindings = 0x2B0;
            static constexpr std::uintptr_t OnGameplayTagNotifyBegin = 0x2C0;
            static constexpr std::uintptr_t OnGameplayTagNotifyEnd = 0x2D0;
            static constexpr std::uintptr_t WakeUpThresholdSeconds = 0x2F0;
            static constexpr std::uintptr_t LastUpdateTimestamp = 0x320;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"AnimInputEventList", 0x270, "ArrayProperty"},
            {"BoneSets", 0x280, "MapProperty"},
            {"AnimPropertyGameplayTagBindings", 0x290, "ArrayProperty"},
            {"AnimPropertyCurveFloatBindings", 0x2A0, "ArrayProperty"},
            {"AnimPropertyCurveCompareBindings", 0x2B0, "ArrayProperty"},
            {"OnGameplayTagNotifyBegin", 0x2C0, "MulticastInlineDelegateProperty"},
            {"OnGameplayTagNotifyEnd", 0x2D0, "MulticastInlineDelegateProperty"},
            {"WakeUpThresholdSeconds", 0x2F0, "FloatProperty"},
            {"LastUpdateTimestamp", 0x320, "FloatProperty"},
        }};
    };

    struct JunoAnimNotifyState_MakeInterruptible
    {
        static constexpr std::string_view Name = "JunoAnimNotifyState_MakeInterruptible";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState";
        struct Offsets
        {
            static constexpr std::uintptr_t AbilityTagsToRemove = 0x30;
            static constexpr std::uintptr_t AbilityTagsToAdd = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AbilityTagsToRemove", 0x30, "StructProperty"},
            {"AbilityTagsToAdd", 0x50, "StructProperty"},
        }};
    };

    struct JunoAnimNotifyState_QueueInput
    {
        static constexpr std::string_view Name = "JunoAnimNotifyState_QueueInput";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotifyState";
        struct Offsets
        {
            static constexpr std::uintptr_t bQueueMantisInput = 0x30;
            static constexpr std::uintptr_t GameplayEventTagsToQueue = 0x38;
            static constexpr std::uintptr_t AbilityTagsToRemove = 0x58;
            static constexpr std::uintptr_t AbilityTagsToAdd = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bQueueMantisInput", 0x30, "BoolProperty"},
            {"GameplayEventTagsToQueue", 0x38, "StructProperty"},
            {"AbilityTagsToRemove", 0x58, "StructProperty"},
            {"AbilityTagsToAdd", 0x78, "StructProperty"},
        }};
    };

    struct JunoAnimNotify_PlayMontageNotify
    {
        static constexpr std::string_view Name = "JunoAnimNotify_PlayMontageNotify";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotify_PlayMontageNotify";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyName = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NotifyName", 0x38, "NameProperty"},
        }};
    };

    struct JunoAnimationBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoAnimationBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoAnimationSharingStateProcessor
    {
        static constexpr std::string_view Name = "JunoAnimationSharingStateProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimationSharingStateProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t RunningAccelerationThreshold = 0x48;
            static constexpr std::uintptr_t TagsForItemEquippedStates = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RunningAccelerationThreshold", 0x48, "FloatProperty"},
            {"TagsForItemEquippedStates", 0x50, "StructProperty"},
        }};
    };

    struct JunoAssetList
    {
        static constexpr std::string_view Name = "JunoAssetList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Assets = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Assets", 0x28, "ArrayProperty"},
        }};
    };

    struct JunoAsyncAction_TeleportAndWaitForLevelStreaming
    {
        static constexpr std::string_view Name = "JunoAsyncAction_TeleportAndWaitForLevelStreaming";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnComplete = 0x30;
            static constexpr std::uintptr_t PlayerPawn = 0x40;
            static constexpr std::uintptr_t TeleportLocation = 0x48;
            static constexpr std::uintptr_t TeleportRotation = 0x60;
            static constexpr std::uintptr_t bIgnoreCollision = 0x78;
            static constexpr std::uintptr_t bIgnoreSupplementalKillVolumeSweep = 0x79;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnComplete", 0x30, "MulticastInlineDelegateProperty"},
            {"PlayerPawn", 0x40, "ObjectProperty"},
            {"TeleportLocation", 0x48, "StructProperty"},
            {"TeleportRotation", 0x60, "StructProperty"},
            {"bIgnoreCollision", 0x78, "BoolProperty"},
            {"bIgnoreSupplementalKillVolumeSweep", 0x79, "BoolProperty"},
        }};
    };

    struct JunoAsyncAction_WaitForEventRouter
    {
        static constexpr std::string_view Name = "JunoAsyncAction_WaitForEventRouter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnGameplayEventRouterAvailable = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnGameplayEventRouterAvailable", 0x30, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoAsyncAction_WaitForPlayerPersistence
    {
        static constexpr std::string_view Name = "JunoAsyncAction_WaitForPlayerPersistence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnReady = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnReady", 0x30, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoAsyncAction_WaitForRootPlayspace
    {
        static constexpr std::string_view Name = "JunoAsyncAction_WaitForRootPlayspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnReady = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnReady", 0x30, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoAtomColorAssetUserData
    {
        static constexpr std::string_view Name = "JunoAtomColorAssetUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorLUTAtlas = 0x28;
            static constexpr std::uintptr_t ColorLUTTexture = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ColorLUTAtlas", 0x28, "ObjectProperty"},
            {"ColorLUTTexture", 0x30, "ObjectProperty"},
        }};
    };

    struct JunoAttachedBuildingSpawner
    {
        static constexpr std::string_view Name = "JunoAttachedBuildingSpawner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoAutoPickupComponent
    {
        static constexpr std::string_view Name = "JunoAutoPickupComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ScanRate = 0xC8;
            static constexpr std::uintptr_t MinSpawnedTime = 0xF0;
            static constexpr std::uintptr_t ScanDistance = 0x118;
            static constexpr std::uintptr_t TimeBetweenMultiPickups = 0x140;
            static constexpr std::uintptr_t RandomPickupDelayMin = 0x168;
            static constexpr std::uintptr_t RandomPickupDelayMax = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ScanRate", 0xC8, "StructProperty"},
            {"MinSpawnedTime", 0xF0, "StructProperty"},
            {"ScanDistance", 0x118, "StructProperty"},
            {"TimeBetweenMultiPickups", 0x140, "StructProperty"},
            {"RandomPickupDelayMin", 0x168, "StructProperty"},
            {"RandomPickupDelayMax", 0x190, "StructProperty"},
        }};
    };

    struct JunoAutomationBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoAutomationBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoAwesomeBiomeConfigMappings
    {
        static constexpr std::string_view Name = "JunoAwesomeBiomeConfigMappings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t BiomeRegistryType = 0x28;
            static constexpr std::uintptr_t SortedBiomeRows = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BiomeRegistryType", 0x28, "StructProperty"},
            {"SortedBiomeRows", 0x30, "ArrayProperty"},
        }};
    };

    struct JunoAwesomeBiomeWorldConditionSchema
    {
        static constexpr std::string_view Name = "JunoAwesomeBiomeWorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct JunoAwesomeInteractionConfigMappings
    {
        static constexpr std::string_view Name = "JunoAwesomeInteractionConfigMappings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t InteractionConfigMap = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InteractionConfigMap", 0x28, "MapProperty"},
        }};
    };

    struct JunoAwesomeLevelComponent
    {
        static constexpr std::string_view Name = "JunoAwesomeLevelComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCampComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnNonResourceRequirementsMetDelegate = 0xC0;
            static constexpr std::uintptr_t OnJunoAwesomeLevelChangedDelegate = 0xD0;
            static constexpr std::uintptr_t OnJunoAwesomePointModification = 0xE0;
            static constexpr std::uintptr_t OnJunoAwesomeComponentReadyDelegate = 0xF0;
            static constexpr std::uintptr_t AwesomeLevel = 0x118;
            static constexpr std::uintptr_t CurrentAwesomePoints = 0x11C;
            static constexpr std::uintptr_t AwesomePointGoals = 0x130;
            static constexpr std::uintptr_t AwesomeUpgradeRequirements = 0x140;
            static constexpr std::uintptr_t CurrentUpgradeRequirements = 0x150;
            static constexpr std::uintptr_t CampPersistentTagsCopy = 0x180;
            static constexpr std::uintptr_t AwesomeConfigDeterminationType = 0x1A0;
            static constexpr std::uintptr_t bUseFocalPointProgression = 0x1A1;
            static constexpr std::uintptr_t CampBiomeTag = 0x1A4;
            static constexpr std::uintptr_t CachedAwesomePointModificationData = 0x200;
            static constexpr std::uintptr_t CachedAwesomeLevelChangeData = 0x228;
            static constexpr std::uintptr_t bNonResourceRequirementsMet = 0x248;
            static constexpr std::uintptr_t bSkipAwesomeUpgradeResourceChecks = 0x248;
            static constexpr std::uintptr_t bCanEverUpgrade = 0x249;
            static constexpr std::uintptr_t bIsFromPersistence = 0x249;
            static constexpr std::uintptr_t bIsReadyForUse = 0x249;
            static constexpr std::uintptr_t AwesomeLevelRewardEntries = 0x250;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"OnNonResourceRequirementsMetDelegate", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnJunoAwesomeLevelChangedDelegate", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnJunoAwesomePointModification", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnJunoAwesomeComponentReadyDelegate", 0xF0, "MulticastInlineDelegateProperty"},
            {"AwesomeLevel", 0x118, "IntProperty"},
            {"CurrentAwesomePoints", 0x11C, "IntProperty"},
            {"AwesomePointGoals", 0x130, "ArrayProperty"},
            {"AwesomeUpgradeRequirements", 0x140, "ArrayProperty"},
            {"CurrentUpgradeRequirements", 0x150, "StructProperty"},
            {"CampPersistentTagsCopy", 0x180, "StructProperty"},
            {"AwesomeConfigDeterminationType", 0x1A0, "EnumProperty"},
            {"bUseFocalPointProgression", 0x1A1, "BoolProperty"},
            {"CampBiomeTag", 0x1A4, "StructProperty"},
            {"CachedAwesomePointModificationData", 0x200, "StructProperty"},
            {"CachedAwesomeLevelChangeData", 0x228, "StructProperty"},
            {"bNonResourceRequirementsMet", 0x248, "BoolProperty"},
            {"bSkipAwesomeUpgradeResourceChecks", 0x248, "BoolProperty"},
            {"bCanEverUpgrade", 0x249, "BoolProperty"},
            {"bIsFromPersistence", 0x249, "BoolProperty"},
            {"bIsReadyForUse", 0x249, "BoolProperty"},
            {"AwesomeLevelRewardEntries", 0x250, "ArrayProperty"},
        }};
    };

    struct JunoAwesomePlacementConfigMappings
    {
        static constexpr std::string_view Name = "JunoAwesomePlacementConfigMappings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t PlacementConfigRegistryType = 0x48;
            static constexpr std::uintptr_t CategoryConfigTable = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlacementConfigRegistryType", 0x48, "StructProperty"},
            {"CategoryConfigTable", 0x60, "ObjectProperty"},
        }};
    };

    struct JunoAwesomePoiConfigMappings
    {
        static constexpr std::string_view Name = "JunoAwesomePoiConfigMappings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t AwesomeProgressionConfigRegistryType = 0x28;
            static constexpr std::uintptr_t DefaultConfig = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AwesomeProgressionConfigRegistryType", 0x28, "StructProperty"},
            {"DefaultConfig", 0x50, "StructProperty"},
        }};
    };

    struct JunoAwesomeSystemDatabaseComponent
    {
        static constexpr std::string_view Name = "JunoAwesomeSystemDatabaseComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InteractionConfigMappings = 0x118;
            static constexpr std::uintptr_t PlacementConfigMappings = 0x120;
            static constexpr std::uintptr_t PoiConfigMappings = 0x128;
            static constexpr std::uintptr_t BiomeConfigMappings = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InteractionConfigMappings", 0x118, "ObjectProperty"},
            {"PlacementConfigMappings", 0x120, "ObjectProperty"},
            {"PoiConfigMappings", 0x128, "ObjectProperty"},
            {"BiomeConfigMappings", 0x130, "ObjectProperty"},
        }};
    };

    struct JunoAwesomeThresholdsComponent
    {
        static constexpr std::string_view Name = "JunoAwesomeThresholdsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnAwesomeLevelChanged = 0xC0;
            static constexpr std::uintptr_t AwesomeThresholdToActionsMappings = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnAwesomeLevelChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"AwesomeThresholdToActionsMappings", 0xD0, "ArrayProperty"},
        }};
    };

    struct JunoBTService_Leash
    {
        static constexpr std::string_view Name = "JunoBTService_Leash";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t KitingTokenQuery = 0x70;
            static constexpr std::uintptr_t BehaviorStartTimeKeyName = 0xB8;
            static constexpr std::uintptr_t PlayspaceVolumeActorKeyName = 0xBC;
            static constexpr std::uintptr_t TokenMovementStateKeyName = 0xC0;
            static constexpr std::uintptr_t FallbackMovementStateKeyName = 0xC4;
            static constexpr std::uintptr_t FallbackDestinationKeyName = 0xC8;
            static constexpr std::uintptr_t TargetActorKeyName = 0xCC;
            static constexpr std::uintptr_t HasLoSOnThreatKeyName = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"KitingTokenQuery", 0x70, "StructProperty"},
            {"BehaviorStartTimeKeyName", 0xB8, "NameProperty"},
            {"PlayspaceVolumeActorKeyName", 0xBC, "NameProperty"},
            {"TokenMovementStateKeyName", 0xC0, "NameProperty"},
            {"FallbackMovementStateKeyName", 0xC4, "NameProperty"},
            {"FallbackDestinationKeyName", 0xC8, "NameProperty"},
            {"TargetActorKeyName", 0xCC, "NameProperty"},
            {"HasLoSOnThreatKeyName", 0xD0, "NameProperty"},
        }};
    };

    struct JunoBTService_UseOffhand
    {
        static constexpr std::string_view Name = "JunoBTService_UseOffhand";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t Interval = 0x60;
            static constexpr std::uintptr_t RandomDeviation = 0x64;
            static constexpr std::uintptr_t bCallTickOnSearchStart = 0x68;
            static constexpr std::uintptr_t bRestartTimerOnEachActivation = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Interval", 0x60, "FloatProperty"},
            {"RandomDeviation", 0x64, "FloatProperty"},
            {"bCallTickOnSearchStart", 0x68, "BoolProperty"},
            {"bRestartTimerOnEachActivation", 0x68, "BoolProperty"},
        }};
    };

    struct JunoBTTask_FTUENPC
    {
        static constexpr std::string_view Name = "JunoBTTask_FTUENPC";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBTTask_ExecuteGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t FTUENPCStatusKeyName = 0x118;
            static constexpr std::uintptr_t ShouldTeleportKeyName = 0x11C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FTUENPCStatusKeyName", 0x118, "NameProperty"},
            {"ShouldTeleportKeyName", 0x11C, "NameProperty"},
        }};
    };

    struct JunoBTTask_ReactToVerb
    {
        static constexpr std::string_view Name = "JunoBTTask_ReactToVerb";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaBTTask_ReactToVerb";
        struct Offsets
        {
            static constexpr std::uintptr_t ReactToVerbTargetActorKeyName = 0x70;
            static constexpr std::uintptr_t ReactToVerbExecutionStatusKeyName = 0x78;
            static constexpr std::uintptr_t ExtraStructDataKeyName = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ReactToVerbTargetActorKeyName", 0x70, "NameProperty"},
            {"ReactToVerbExecutionStatusKeyName", 0x78, "NameProperty"},
            {"ExtraStructDataKeyName", 0x80, "NameProperty"},
        }};
    };

    struct JunoBTTask_RunMoodReaction
    {
        static constexpr std::string_view Name = "JunoBTTask_RunMoodReaction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bRunMoodComponentRequest = 0x70;
            static constexpr std::uintptr_t MoodReactionToUseKeyName = 0x74;
            static constexpr std::uintptr_t PossibleMoodReactions = 0x78;
            static constexpr std::uintptr_t MaximumDuration = 0x88;
            static constexpr std::uintptr_t ExecutionStatusKeyName = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bRunMoodComponentRequest", 0x70, "BoolProperty"},
            {"MoodReactionToUseKeyName", 0x74, "NameProperty"},
            {"PossibleMoodReactions", 0x78, "ArrayProperty"},
            {"MaximumDuration", 0x88, "StructProperty"},
            {"ExecutionStatusKeyName", 0xB0, "NameProperty"},
        }};
    };

    struct JunoBasePlayspaceMigrationComponent
    {
        static constexpr std::string_view Name = "JunoBasePlayspaceMigrationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
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

    struct JunoBaseTeleportBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoBaseTeleportBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoBeaconBase
    {
        static constexpr std::string_view Name = "JunoBeaconBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t BeaconTags = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BeaconTags", 0x278, "StructProperty"},
        }};
    };

    struct JunoBeaconManagerComponent
    {
        static constexpr std::string_view Name = "JunoBeaconManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
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

    struct JunoBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoBlueprintPersistenceAssetType
    {
        static constexpr std::string_view Name = "JunoBlueprintPersistenceAssetType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPersistenceAssetType";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoBoneMaskInstanceDataAsset
    {
        static constexpr std::string_view Name = "JunoBoneMaskInstanceDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t BodyPartsDefinition = 0x28;
            static constexpr std::uintptr_t Data = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BodyPartsDefinition", 0x28, "ObjectProperty"},
            {"Data", 0x30, "ArrayProperty"},
        }};
    };

    struct JunoBuildInstructionsItemDefinition
    {
        static constexpr std::string_view Name = "JunoBuildInstructionsItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuilderToolItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t bGiveResourcesOnDestroy = 0xA8;
            static constexpr std::uintptr_t SelfCraftingFormulaName = 0xAC;
            static constexpr std::uintptr_t PrerequisiteCraftingFormulaNames = 0xB0;
            static constexpr std::uintptr_t SizeDescription = 0xC0;
            static constexpr std::uintptr_t SetDescription = 0xD0;
            static constexpr std::uintptr_t ActorClassToBuild = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bGiveResourcesOnDestroy", 0xA8, "BoolProperty"},
            {"SelfCraftingFormulaName", 0xAC, "NameProperty"},
            {"PrerequisiteCraftingFormulaNames", 0xB0, "ArrayProperty"},
            {"SizeDescription", 0xC0, "TextProperty"},
            {"SetDescription", 0xD0, "TextProperty"},
            {"ActorClassToBuild", 0xE0, "SoftClassProperty"},
        }};
    };

    struct JunoBuildLimitGetter
    {
        static constexpr std::string_view Name = "JunoBuildLimitGetter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoBuilderTool
    {
        static constexpr std::string_view Name = "JunoBuilderTool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuilderTool";
        struct Offsets
        {
            static constexpr std::uintptr_t InputMappingData = 0x1AF0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InputMappingData", 0x1AF0, "ObjectProperty"},
        }};
    };

    struct JunoBuildingActor
    {
        static constexpr std::string_view Name = "JunoBuildingActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingProp";
        struct Offsets
        {
            static constexpr std::uintptr_t Connectivity = 0xC28;
            static constexpr std::uintptr_t TerrainVisualModifierActor = 0xC30;
            static constexpr std::uintptr_t bCanRegenHealth = 0xC38;
            static constexpr std::uintptr_t bShouldPersist = 0xC39;
            static constexpr std::uintptr_t bPreventDestroyingFoliageWhenPlaced = 0xC3A;
            static constexpr std::uintptr_t bAvoidExternalConnectionWithGuidedBuild = 0xC3C;
            static constexpr std::uintptr_t FoundationEmbedOffset = 0xC40;
            static constexpr std::uintptr_t bWasMovedByBuilderTool = 0xC44;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Connectivity", 0xC28, "ObjectProperty"},
            {"TerrainVisualModifierActor", 0xC30, "ObjectProperty"},
            {"bCanRegenHealth", 0xC38, "BoolProperty"},
            {"bShouldPersist", 0xC39, "BoolProperty"},
            {"bPreventDestroyingFoliageWhenPlaced", 0xC3A, "BoolProperty"},
            {"bAvoidExternalConnectionWithGuidedBuild", 0xC3C, "BoolProperty"},
            {"FoundationEmbedOffset", 0xC40, "FloatProperty"},
            {"bWasMovedByBuilderTool", 0xC44, "BoolProperty"},
        }};
    };

    struct JunoBuildingActorCountMetric
    {
        static constexpr std::string_view Name = "JunoBuildingActorCountMetric";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BuildLimitDataRegistry = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BuildLimitDataRegistry", 0x28, "ObjectProperty"},
        }};
    };

    struct JunoBuildingActorCountMetricComponent
    {
        static constexpr std::string_view Name = "JunoBuildingActorCountMetricComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoBuildingMetricClass = 0xC0;
            static constexpr std::uintptr_t JunoBuildingMetric = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"JunoBuildingMetricClass", 0xC0, "ClassProperty"},
            {"JunoBuildingMetric", 0xC8, "ObjectProperty"},
        }};
    };

    struct JunoBuildingActorMetric
    {
        static constexpr std::string_view Name = "JunoBuildingActorMetric";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SpatialMetricInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t MinValue = 0x58;
            static constexpr std::uintptr_t NetworkRelevantActorCountThreshold = 0x80;
            static constexpr std::uintptr_t SpatialPrecision = 0xA8;
            static constexpr std::uintptr_t ActorCounts = 0xD0;
            static constexpr std::uintptr_t TrackedActors = 0xE0;
            static constexpr std::uintptr_t TrackedClasses = 0xF0;
            static constexpr std::uintptr_t PendingRefreshments = 0x100;
            static constexpr std::uintptr_t ActorsPendingAdd = 0x110;
            static constexpr std::uintptr_t CachedSpatialPrecision = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"MinValue", 0x58, "StructProperty"},
            {"NetworkRelevantActorCountThreshold", 0x80, "StructProperty"},
            {"SpatialPrecision", 0xA8, "StructProperty"},
            {"ActorCounts", 0xD0, "MapProperty"},
            {"TrackedActors", 0xE0, "SetProperty"},
            {"TrackedClasses", 0xF0, "ArrayProperty"},
            {"PendingRefreshments", 0x100, "SetProperty"},
            {"ActorsPendingAdd", 0x110, "SetProperty"},
            {"CachedSpatialPrecision", 0x120, "IntProperty"},
        }};
    };

    struct JunoBuildingAssociatedItemInterface
    {
        static constexpr std::string_view Name = "JunoBuildingAssociatedItemInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoBuildingBehavior
    {
        static constexpr std::string_view Name = "JunoBuildingBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingBehaviorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SavedBuildManifest = 0x338;
            static constexpr std::uintptr_t RotateInputAction = 0x390;
            static constexpr std::uintptr_t NudgeInputAction = 0x398;
            static constexpr std::uintptr_t ToggleNudgeInputAction = 0x3A0;
            static constexpr std::uintptr_t AdjacencyInputAction = 0x3A8;
            static constexpr std::uintptr_t SnapToggleInputAction = 0x3B0;
            static constexpr std::uintptr_t ToggleNudgeAxisInputAction = 0x3B8;
            static constexpr std::uintptr_t ResetNudgeInputAction = 0x3C0;
            static constexpr std::uintptr_t EditModeInputAction = 0x3C8;
            static constexpr std::uintptr_t OffGridRotationStep = 0x3D0;
            static constexpr std::uintptr_t MaxSelectionDistance = 0x3D8;
            static constexpr std::uintptr_t MaxSelectionDistanceZ = 0x3DC;
            static constexpr std::uintptr_t MaxConnectivityDistance = 0x3E0;
            static constexpr std::uintptr_t DefaultGridOffsetLimit = 0x3F8;
            static constexpr std::uintptr_t PenetrationTolerance = 0x408;
            static constexpr std::uintptr_t SFX = 0x420;
            static constexpr std::uintptr_t OverlappableClasses = 0x468;
            static constexpr std::uintptr_t PlacementSupportingClasses = 0x488;
            static constexpr std::uintptr_t SupportedOverlappableClasses = 0x4A8;
            static constexpr std::uintptr_t Overrides = 0x4C8;
            static constexpr std::uintptr_t bEnableAdjacency = 0x820;
            static constexpr std::uintptr_t bEnableSnapPlacement = 0x821;
            static constexpr std::uintptr_t bEnableVerticalAxisNudge = 0x822;
            static constexpr std::uintptr_t OnToggleSnapping = 0x828;
            static constexpr std::uintptr_t OnSmoothingChanged = 0x838;
            static constexpr std::uintptr_t OnPlacementTypeChanged = 0x848;
            static constexpr std::uintptr_t CachedBuildingStateContext = 0x878;
            static constexpr std::uintptr_t OnBuildingStateContextChanged = 0x8B8;
            static constexpr std::uintptr_t LastTriggerRequestedTimestamp = 0x8C8;
            static constexpr std::uintptr_t LastTriggerTimestamp = 0x8D0;
        };

        inline static constexpr std::array<PropertyInfo, 30> Properties{{
            {"SavedBuildManifest", 0x338, "StructProperty"},
            {"RotateInputAction", 0x390, "ObjectProperty"},
            {"NudgeInputAction", 0x398, "ObjectProperty"},
            {"ToggleNudgeInputAction", 0x3A0, "ObjectProperty"},
            {"AdjacencyInputAction", 0x3A8, "ObjectProperty"},
            {"SnapToggleInputAction", 0x3B0, "ObjectProperty"},
            {"ToggleNudgeAxisInputAction", 0x3B8, "ObjectProperty"},
            {"ResetNudgeInputAction", 0x3C0, "ObjectProperty"},
            {"EditModeInputAction", 0x3C8, "ObjectProperty"},
            {"OffGridRotationStep", 0x3D0, "DoubleProperty"},
            {"MaxSelectionDistance", 0x3D8, "FloatProperty"},
            {"MaxSelectionDistanceZ", 0x3DC, "FloatProperty"},
            {"MaxConnectivityDistance", 0x3E0, "StructProperty"},
            {"DefaultGridOffsetLimit", 0x3F8, "StructProperty"},
            {"PenetrationTolerance", 0x408, "StructProperty"},
            {"SFX", 0x420, "StructProperty"},
            {"OverlappableClasses", 0x468, "StructProperty"},
            {"PlacementSupportingClasses", 0x488, "StructProperty"},
            {"SupportedOverlappableClasses", 0x4A8, "StructProperty"},
            {"Overrides", 0x4C8, "StructProperty"},
            {"bEnableAdjacency", 0x820, "BoolProperty"},
            {"bEnableSnapPlacement", 0x821, "BoolProperty"},
            {"bEnableVerticalAxisNudge", 0x822, "BoolProperty"},
            {"OnToggleSnapping", 0x828, "MulticastInlineDelegateProperty"},
            {"OnSmoothingChanged", 0x838, "MulticastInlineDelegateProperty"},
            {"OnPlacementTypeChanged", 0x848, "MulticastInlineDelegateProperty"},
            {"CachedBuildingStateContext", 0x878, "StructProperty"},
            {"OnBuildingStateContextChanged", 0x8B8, "MulticastInlineDelegateProperty"},
            {"LastTriggerRequestedTimestamp", 0x8C8, "DoubleProperty"},
            {"LastTriggerTimestamp", 0x8D0, "DoubleProperty"},
        }};
    };

    struct JunoBuildingBehaviorBase
    {
        static constexpr std::string_view Name = "JunoBuildingBehaviorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuilderToolBehavior";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewerClass = 0x228;
            static constexpr std::uintptr_t DefaultPreviewParams = 0x230;
            static constexpr std::uintptr_t Previewer_Internal = 0x248;
            static constexpr std::uintptr_t BuildingState = 0x250;
            static constexpr std::uintptr_t BuildingStateTags = 0x258;
            static constexpr std::uintptr_t OnBuildingStateChanged = 0x280;
            static constexpr std::uintptr_t OnBuildingStateTagsChanged = 0x290;
            static constexpr std::uintptr_t LocationLerpAlpha = 0x2A0;
            static constexpr std::uintptr_t RotationLerpAlpha = 0x2A4;
            static constexpr std::uintptr_t OnPositionInterpStart = 0x2A8;
            static constexpr std::uintptr_t OnPositionInterpEnd = 0x2B8;
            static constexpr std::uintptr_t SpatialInterfaceSelectionQuery = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"PreviewerClass", 0x228, "ClassProperty"},
            {"DefaultPreviewParams", 0x230, "StructProperty"},
            {"Previewer_Internal", 0x248, "ObjectProperty"},
            {"BuildingState", 0x250, "EnumProperty"},
            {"BuildingStateTags", 0x258, "StructProperty"},
            {"OnBuildingStateChanged", 0x280, "MulticastInlineDelegateProperty"},
            {"OnBuildingStateTagsChanged", 0x290, "MulticastInlineDelegateProperty"},
            {"LocationLerpAlpha", 0x2A0, "FloatProperty"},
            {"RotationLerpAlpha", 0x2A4, "FloatProperty"},
            {"OnPositionInterpStart", 0x2A8, "MulticastInlineDelegateProperty"},
            {"OnPositionInterpEnd", 0x2B8, "MulticastInlineDelegateProperty"},
            {"SpatialInterfaceSelectionQuery", 0x2F0, "StructProperty"},
        }};
    };

    struct JunoBuildingBehaviorQuick
    {
        static constexpr std::string_view Name = "JunoBuildingBehaviorQuick";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingBehavior";
        struct Offsets
        {
            static constexpr std::uintptr_t AbandonInputAction = 0x900;
            static constexpr std::uintptr_t QuickBuildInterface = 0x908;
            static constexpr std::uintptr_t FocusBuildItemID = 0x918;
            static constexpr std::uintptr_t FocusBuildItemGuid = 0x91C;
            static constexpr std::uintptr_t FocusBuildItemPreview = 0x930;
            static constexpr std::uintptr_t PreloadMap = 0xAA0;
            static constexpr std::uintptr_t BuildQueue = 0xAB0;
            static constexpr std::uintptr_t ActivePreview = 0xAE0;
            static constexpr std::uintptr_t bIsNearlyComplete = 0xC60;
            static constexpr std::uintptr_t PercentDone = 0xC64;
            static constexpr std::uintptr_t FocusItem = 0xC68;
            static constexpr std::uintptr_t QuickBuildActor = 0xC6C;
            static constexpr std::uintptr_t MaterialFadeRange = 0xC78;
            static constexpr std::uintptr_t PercentToSeeAll = 0xCA0;
            static constexpr std::uintptr_t PercentToSeeAllMobile = 0xCC8;
            static constexpr std::uintptr_t RemainingPiecesToSeeAll = 0xCF0;
            static constexpr std::uintptr_t NearlyCompleteFocusStencilValue = 0xD18;
            static constexpr std::uintptr_t NearlyCompleteFocusBlockedStencilValue = 0xD1C;
            static constexpr std::uintptr_t NearlyCompleteStencilValue = 0xD20;
            static constexpr std::uintptr_t BuildEnergyBuildRadiusCurve = 0xD28;
            static constexpr std::uintptr_t SmallTraceSphereRadius = 0xD30;
            static constexpr std::uintptr_t LargeTraceSphereRadius = 0xD34;
            static constexpr std::uintptr_t VisionRadius = 0xD38;
            static constexpr std::uintptr_t VisibleList = 0xD60;
            static constexpr std::uintptr_t FocusRadius = 0xD70;
            static constexpr std::uintptr_t FocusLocation = 0xD78;
            static constexpr std::uintptr_t FocusDirection = 0xD90;
            static constexpr std::uintptr_t AreaFocusBuildablesCount = 0xDA8;
            static constexpr std::uintptr_t bIsFocusSetBlocked = 0xDAC;
            static constexpr std::uintptr_t FocusBuildState = 0xDAD;
            static constexpr std::uintptr_t TouchTapLocation = 0xDB0;
            static constexpr std::uintptr_t TouchTapDirection = 0xDC8;
        };

        inline static constexpr std::array<PropertyInfo, 32> Properties{{
            {"AbandonInputAction", 0x900, "ObjectProperty"},
            {"QuickBuildInterface", 0x908, "InterfaceProperty"},
            {"FocusBuildItemID", 0x918, "IntProperty"},
            {"FocusBuildItemGuid", 0x91C, "StructProperty"},
            {"FocusBuildItemPreview", 0x930, "StructProperty"},
            {"PreloadMap", 0xAA0, "MapProperty"},
            {"BuildQueue", 0xAB0, "ArrayProperty"},
            {"ActivePreview", 0xAE0, "StructProperty"},
            {"bIsNearlyComplete", 0xC60, "BoolProperty"},
            {"PercentDone", 0xC64, "FloatProperty"},
            {"FocusItem", 0xC68, "IntProperty"},
            {"QuickBuildActor", 0xC6C, "WeakObjectProperty"},
            {"MaterialFadeRange", 0xC78, "StructProperty"},
            {"PercentToSeeAll", 0xCA0, "StructProperty"},
            {"PercentToSeeAllMobile", 0xCC8, "StructProperty"},
            {"RemainingPiecesToSeeAll", 0xCF0, "StructProperty"},
            {"NearlyCompleteFocusStencilValue", 0xD18, "IntProperty"},
            {"NearlyCompleteFocusBlockedStencilValue", 0xD1C, "IntProperty"},
            {"NearlyCompleteStencilValue", 0xD20, "IntProperty"},
            {"BuildEnergyBuildRadiusCurve", 0xD28, "ObjectProperty"},
            {"SmallTraceSphereRadius", 0xD30, "FloatProperty"},
            {"LargeTraceSphereRadius", 0xD34, "FloatProperty"},
            {"VisionRadius", 0xD38, "StructProperty"},
            {"VisibleList", 0xD60, "ArrayProperty"},
            {"FocusRadius", 0xD70, "FloatProperty"},
            {"FocusLocation", 0xD78, "StructProperty"},
            {"FocusDirection", 0xD90, "StructProperty"},
            {"AreaFocusBuildablesCount", 0xDA8, "IntProperty"},
            {"bIsFocusSetBlocked", 0xDAC, "BoolProperty"},
            {"FocusBuildState", 0xDAD, "EnumProperty"},
            {"TouchTapLocation", 0xDB0, "StructProperty"},
            {"TouchTapDirection", 0xDC8, "StructProperty"},
        }};
    };

    struct JunoBuildingBehaviorSelectedActorInterface
    {
        static constexpr std::string_view Name = "JunoBuildingBehaviorSelectedActorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoBuildingBehaviorToys
    {
        static constexpr std::string_view Name = "JunoBuildingBehaviorToys";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingBehavior";
        struct Offsets
        {
            static constexpr std::uintptr_t SavedBuildManifest = 0x338;
            static constexpr std::uintptr_t RotateInputAction = 0x390;
            static constexpr std::uintptr_t NudgeInputAction = 0x398;
            static constexpr std::uintptr_t ToggleNudgeInputAction = 0x3A0;
            static constexpr std::uintptr_t AdjacencyInputAction = 0x3A8;
            static constexpr std::uintptr_t SnapToggleInputAction = 0x3B0;
            static constexpr std::uintptr_t ToggleNudgeAxisInputAction = 0x3B8;
            static constexpr std::uintptr_t ResetNudgeInputAction = 0x3C0;
            static constexpr std::uintptr_t EditModeInputAction = 0x3C8;
            static constexpr std::uintptr_t OffGridRotationStep = 0x3D0;
            static constexpr std::uintptr_t MaxSelectionDistance = 0x3D8;
            static constexpr std::uintptr_t MaxSelectionDistanceZ = 0x3DC;
            static constexpr std::uintptr_t MaxConnectivityDistance = 0x3E0;
            static constexpr std::uintptr_t DefaultGridOffsetLimit = 0x3F8;
            static constexpr std::uintptr_t PenetrationTolerance = 0x408;
            static constexpr std::uintptr_t SFX = 0x420;
            static constexpr std::uintptr_t OverlappableClasses = 0x468;
            static constexpr std::uintptr_t PlacementSupportingClasses = 0x488;
            static constexpr std::uintptr_t SupportedOverlappableClasses = 0x4A8;
            static constexpr std::uintptr_t Overrides = 0x4C8;
            static constexpr std::uintptr_t bEnableAdjacency = 0x820;
            static constexpr std::uintptr_t bEnableSnapPlacement = 0x821;
            static constexpr std::uintptr_t bEnableVerticalAxisNudge = 0x822;
            static constexpr std::uintptr_t OnToggleSnapping = 0x828;
            static constexpr std::uintptr_t OnSmoothingChanged = 0x838;
            static constexpr std::uintptr_t OnPlacementTypeChanged = 0x848;
            static constexpr std::uintptr_t CachedBuildingStateContext = 0x878;
            static constexpr std::uintptr_t OnBuildingStateContextChanged = 0x8B8;
            static constexpr std::uintptr_t LastTriggerRequestedTimestamp = 0x8C8;
            static constexpr std::uintptr_t LastTriggerTimestamp = 0x8D0;
        };

        inline static constexpr std::array<PropertyInfo, 30> Properties{{
            {"SavedBuildManifest", 0x338, "StructProperty"},
            {"RotateInputAction", 0x390, "ObjectProperty"},
            {"NudgeInputAction", 0x398, "ObjectProperty"},
            {"ToggleNudgeInputAction", 0x3A0, "ObjectProperty"},
            {"AdjacencyInputAction", 0x3A8, "ObjectProperty"},
            {"SnapToggleInputAction", 0x3B0, "ObjectProperty"},
            {"ToggleNudgeAxisInputAction", 0x3B8, "ObjectProperty"},
            {"ResetNudgeInputAction", 0x3C0, "ObjectProperty"},
            {"EditModeInputAction", 0x3C8, "ObjectProperty"},
            {"OffGridRotationStep", 0x3D0, "DoubleProperty"},
            {"MaxSelectionDistance", 0x3D8, "FloatProperty"},
            {"MaxSelectionDistanceZ", 0x3DC, "FloatProperty"},
            {"MaxConnectivityDistance", 0x3E0, "StructProperty"},
            {"DefaultGridOffsetLimit", 0x3F8, "StructProperty"},
            {"PenetrationTolerance", 0x408, "StructProperty"},
            {"SFX", 0x420, "StructProperty"},
            {"OverlappableClasses", 0x468, "StructProperty"},
            {"PlacementSupportingClasses", 0x488, "StructProperty"},
            {"SupportedOverlappableClasses", 0x4A8, "StructProperty"},
            {"Overrides", 0x4C8, "StructProperty"},
            {"bEnableAdjacency", 0x820, "BoolProperty"},
            {"bEnableSnapPlacement", 0x821, "BoolProperty"},
            {"bEnableVerticalAxisNudge", 0x822, "BoolProperty"},
            {"OnToggleSnapping", 0x828, "MulticastInlineDelegateProperty"},
            {"OnSmoothingChanged", 0x838, "MulticastInlineDelegateProperty"},
            {"OnPlacementTypeChanged", 0x848, "MulticastInlineDelegateProperty"},
            {"CachedBuildingStateContext", 0x878, "StructProperty"},
            {"OnBuildingStateContextChanged", 0x8B8, "MulticastInlineDelegateProperty"},
            {"LastTriggerRequestedTimestamp", 0x8C8, "DoubleProperty"},
            {"LastTriggerTimestamp", 0x8D0, "DoubleProperty"},
        }};
    };

    struct JunoBuildingBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoBuildingBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoBuildingConnectivityBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoBuildingConnectivityBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoBuildingGameplayActor
    {
        static constexpr std::string_view Name = "JunoBuildingGameplayActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t GeometryCollectionAssemblerComponentClass = 0x9F0;
            static constexpr std::uintptr_t NeedsAssemblyInDirection = 0x9F8;
            static constexpr std::uintptr_t AssociatedItem = 0xA00;
            static constexpr std::uintptr_t bShouldPersist = 0xA08;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GeometryCollectionAssemblerComponentClass", 0x9F0, "ClassProperty"},
            {"NeedsAssemblyInDirection", 0x9F8, "EnumProperty"},
            {"AssociatedItem", 0xA00, "ObjectProperty"},
            {"bShouldPersist", 0xA08, "BoolProperty"},
        }};
    };

    struct JunoBuildingInventorySourceComponent
    {
        static constexpr std::string_view Name = "JunoBuildingInventorySourceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SavedBuildingInventory = 0xD0;
            static constexpr std::uintptr_t Inventory = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SavedBuildingInventory", 0xD0, "StructProperty"},
            {"Inventory", 0x148, "WeakObjectProperty"},
        }};
    };

    struct JunoBuildingParentBase
    {
        static constexpr std::string_view Name = "JunoBuildingParentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingActor";
        struct Offsets
        {
            static constexpr std::uintptr_t CompositeActorAttributeOverrideDataTable = 0xC48;
            static constexpr std::uintptr_t DefaultPhysicalMaterial = 0xC50;
            static constexpr std::uintptr_t bShouldOverrideDefaultPhysicalMaterialWithActorAttributeOverride = 0xC58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CompositeActorAttributeOverrideDataTable", 0xC48, "ObjectProperty"},
            {"DefaultPhysicalMaterial", 0xC50, "ObjectProperty"},
            {"bShouldOverrideDefaultPhysicalMaterialWithActorAttributeOverride", 0xC58, "BoolProperty"},
        }};
    };

    struct JunoBuildingPlanInterface
    {
        static constexpr std::string_view Name = "JunoBuildingPlanInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoBuildingPlanRegistrySubsystem
    {
        static constexpr std::string_view Name = "JunoBuildingPlanRegistrySubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoBuildingPreviewer
    {
        static constexpr std::string_view Name = "JunoBuildingPreviewer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCameraUpdateNudgeAxis = 0x278;
            static constexpr std::uintptr_t OwningBehavior = 0x2A0;
            static constexpr std::uintptr_t bEnabled = 0x2A8;
            static constexpr std::uintptr_t PreviewPool = 0x2B0;
            static constexpr std::uintptr_t MostRecentlyUpdated = 0x2C0;
            static constexpr std::uintptr_t PendingSetPreviewGUID = 0x2D0;
            static constexpr std::uintptr_t CurrentlySetPreviewGUID = 0x2E0;
            static constexpr std::uintptr_t bHasSetPreview = 0x2F0;
            static constexpr std::uintptr_t PlacementPreview = 0x300;
            static constexpr std::uintptr_t PrefabPivotColor = 0x3C0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"OnCameraUpdateNudgeAxis", 0x278, "MulticastInlineDelegateProperty"},
            {"OwningBehavior", 0x2A0, "WeakObjectProperty"},
            {"bEnabled", 0x2A8, "BoolProperty"},
            {"PreviewPool", 0x2B0, "MapProperty"},
            {"MostRecentlyUpdated", 0x2C0, "ArrayProperty"},
            {"PendingSetPreviewGUID", 0x2D0, "StructProperty"},
            {"CurrentlySetPreviewGUID", 0x2E0, "StructProperty"},
            {"bHasSetPreview", 0x2F0, "BoolProperty"},
            {"PlacementPreview", 0x300, "StructProperty"},
            {"PrefabPivotColor", 0x3C0, "StructProperty"},
        }};
    };

    struct JunoBuildingProp
    {
        static constexpr std::string_view Name = "JunoBuildingProp";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingProp";
        struct Offsets
        {
            static constexpr std::uintptr_t GeometryCollectionAssemblerComponentClass = 0xBF0;
            static constexpr std::uintptr_t NeedsAssemblyInDirection = 0xBF8;
            static constexpr std::uintptr_t AssociatedItem = 0xC00;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GeometryCollectionAssemblerComponentClass", 0xBF0, "ClassProperty"},
            {"NeedsAssemblyInDirection", 0xBF8, "EnumProperty"},
            {"AssociatedItem", 0xC00, "ObjectProperty"},
        }};
    };

    struct JunoBuildingPropTree
    {
        static constexpr std::string_view Name = "JunoBuildingPropTree";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingProp";
        struct Offsets
        {
            static constexpr std::uintptr_t LifecycleComponent = 0xC08;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LifecycleComponent", 0xC08, "ObjectProperty"},
        }};
    };

    struct JunoBuildingSafeZoneProtectionComponent
    {
        static constexpr std::string_view Name = "JunoBuildingSafeZoneProtectionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ProtectingSafeZone = 0xC8;
            static constexpr std::uintptr_t bServerHasProtection = 0xD0;
            static constexpr std::uintptr_t MinMoveDistance = 0xF0;
            static constexpr std::uintptr_t DebounceWindowSeconds = 0x118;
            static constexpr std::uintptr_t CachedBuildingOwner = 0x150;
            static constexpr std::uintptr_t bIsEligibleForProtection = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ProtectingSafeZone", 0xC8, "WeakObjectProperty"},
            {"bServerHasProtection", 0xD0, "BoolProperty"},
            {"MinMoveDistance", 0xF0, "StructProperty"},
            {"DebounceWindowSeconds", 0x118, "StructProperty"},
            {"CachedBuildingOwner", 0x150, "ObjectProperty"},
            {"bIsEligibleForProtection", 0x158, "BoolProperty"},
        }};
    };

    struct JunoBuildingSnapEditorComponent
    {
        static constexpr std::string_view Name = "JunoBuildingSnapEditorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SnapEntries = 0xC0;
            static constexpr std::uintptr_t bShowUnselectedTargetingAreas = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SnapEntries", 0xC0, "ArrayProperty"},
            {"bShowUnselectedTargetingAreas", 0xD0, "BoolProperty"},
        }};
    };

    struct JunoBuildingSnappingLocation
    {
        static constexpr std::string_view Name = "JunoBuildingSnappingLocation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LocationTags = 0x240;
            static constexpr std::uintptr_t SnapEntries = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LocationTags", 0x240, "StructProperty"},
            {"SnapEntries", 0x260, "ArrayProperty"},
        }};
    };

    struct JunoBuildingSpatialMetricComponent
    {
        static constexpr std::string_view Name = "JunoBuildingSpatialMetricComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoBuildingMetricClass = 0xC0;
            static constexpr std::uintptr_t JunoBuildingMetric = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"JunoBuildingMetricClass", 0xC0, "SoftClassProperty"},
            {"JunoBuildingMetric", 0xE0, "WeakObjectProperty"},
        }};
    };

    struct JunoBuildingSpawnAsyncAction
    {
        static constexpr std::string_view Name = "JunoBuildingSpawnAsyncAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnComplete = 0x30;
            static constexpr std::uintptr_t OnFailed = 0x40;
            static constexpr std::uintptr_t WorldContext = 0x50;
            static constexpr std::uintptr_t PendingRequests = 0x58;
            static constexpr std::uintptr_t PendingParams = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnComplete", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFailed", 0x40, "MulticastInlineDelegateProperty"},
            {"WorldContext", 0x50, "ObjectProperty"},
            {"PendingRequests", 0x58, "ArrayProperty"},
            {"PendingParams", 0x68, "StructProperty"},
        }};
    };

    struct JunoBuildingSpawnSubsystem
    {
        static constexpr std::string_view Name = "JunoBuildingSpawnSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveBatches = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActiveBatches", 0x38, "MapProperty"},
        }};
    };

    struct JunoBuildingStaticMeshComponent
    {
        static constexpr std::string_view Name = "JunoBuildingStaticMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ForcedLodModel = 0x5C8;
            static constexpr std::uintptr_t MinLOD = 0x5CC;
            static constexpr std::uintptr_t SubDivisionStepSize = 0x5D0;
            static constexpr std::uintptr_t WireframeColorOverride = 0x5D4;
            static constexpr std::uintptr_t StaticMesh = 0x5D8;
            static constexpr std::uintptr_t WorldPositionOffsetDisableDistance = 0x5E0;
            static constexpr std::uintptr_t bDisallowNanite = 0x5E4;
            static constexpr std::uintptr_t bEvaluateWorldPositionOffset = 0x5E4;
            static constexpr std::uintptr_t bEvaluateWorldPositionOffsetInRayTracing = 0x5E4;
            static constexpr std::uintptr_t bForceDisableNanite = 0x5E4;
            static constexpr std::uintptr_t bForceNaniteForMasked = 0x5E4;
            static constexpr std::uintptr_t bWorldPositionOffsetWritesVelocity = 0x5E4;
            static constexpr std::uintptr_t bForceNavigationObstacle = 0x5E5;
            static constexpr std::uintptr_t bOverrideMinLOD = 0x5E5;
            static constexpr std::uintptr_t bOverrideNavAreaClass = 0x5E5;
            static constexpr std::uintptr_t bOverrideNavigationExport = 0x5E5;
            static constexpr std::uintptr_t bOverrideWireframeColor = 0x5E5;
            static constexpr std::uintptr_t NavAreaClass = 0x5E8;
            static constexpr std::uintptr_t bCastDistanceFieldIndirectShadow = 0x5F0;
            static constexpr std::uintptr_t bDisallowMeshPaintPerInstance = 0x5F0;
            static constexpr std::uintptr_t bIgnoreInstanceForTextureStreaming = 0x5F0;
            static constexpr std::uintptr_t bOverrideDistanceFieldSelfShadowBias = 0x5F0;
            static constexpr std::uintptr_t bOverrideLightMapRes = 0x5F0;
            static constexpr std::uintptr_t bSortTriangles = 0x5F0;
            static constexpr std::uintptr_t bUseDefaultCollision = 0x5F0;
            static constexpr std::uintptr_t bUseSubDivisions = 0x5F0;
            static constexpr std::uintptr_t bEnableTextureColorMeshPainting = 0x5F1;
            static constexpr std::uintptr_t bEnableVertexColorMeshPainting = 0x5F1;
            static constexpr std::uintptr_t bOverrideMeshPaintTextureCoordinateIndex = 0x5F1;
            static constexpr std::uintptr_t bOverrideMeshPaintTextureResolution = 0x5F1;
            static constexpr std::uintptr_t bReverseCulling = 0x5F1;
            static constexpr std::uintptr_t bWritesToMaterialCache = 0x5F1;
            static constexpr std::uintptr_t OverriddenMeshPaintTextureCoordinateIndex = 0x5F4;
            static constexpr std::uintptr_t OverriddenMeshPaintTextureResolution = 0x5F8;
            static constexpr std::uintptr_t OverriddenLightMapRes = 0x5FC;
            static constexpr std::uintptr_t MeshPaintTextureCooked = 0x600;
            static constexpr std::uintptr_t MeshPaintTextureOverride = 0x608;
            static constexpr std::uintptr_t MaterialCacheTileCount = 0x610;
            static constexpr std::uintptr_t MaterialCacheUVRegion = 0x618;
            static constexpr std::uintptr_t MaterialCacheUVCoordinateIndex = 0x62C;
            static constexpr std::uintptr_t MaterialCacheTextures = 0x630;
            static constexpr std::uintptr_t DistanceFieldIndirectShadowMinVisibility = 0x640;
            static constexpr std::uintptr_t DistanceFieldSelfShadowBias = 0x644;
            static constexpr std::uintptr_t StreamingDistanceMultiplier = 0x648;
            static constexpr std::uintptr_t NanitePixelProgrammableDistance = 0x64C;
            static constexpr std::uintptr_t LodData = 0x650;
            static constexpr std::uintptr_t StreamingTextureData = 0x660;
            static constexpr std::uintptr_t LightmassSettings = 0x670;
        };

        inline static constexpr std::array<PropertyInfo, 48> Properties{{
            {"ForcedLodModel", 0x5C8, "IntProperty"},
            {"MinLOD", 0x5CC, "IntProperty"},
            {"SubDivisionStepSize", 0x5D0, "IntProperty"},
            {"WireframeColorOverride", 0x5D4, "StructProperty"},
            {"StaticMesh", 0x5D8, "ObjectProperty"},
            {"WorldPositionOffsetDisableDistance", 0x5E0, "IntProperty"},
            {"bDisallowNanite", 0x5E4, "BoolProperty"},
            {"bEvaluateWorldPositionOffset", 0x5E4, "BoolProperty"},
            {"bEvaluateWorldPositionOffsetInRayTracing", 0x5E4, "BoolProperty"},
            {"bForceDisableNanite", 0x5E4, "BoolProperty"},
            {"bForceNaniteForMasked", 0x5E4, "BoolProperty"},
            {"bWorldPositionOffsetWritesVelocity", 0x5E4, "BoolProperty"},
            {"bForceNavigationObstacle", 0x5E5, "BoolProperty"},
            {"bOverrideMinLOD", 0x5E5, "BoolProperty"},
            {"bOverrideNavAreaClass", 0x5E5, "BoolProperty"},
            {"bOverrideNavigationExport", 0x5E5, "BoolProperty"},
            {"bOverrideWireframeColor", 0x5E5, "BoolProperty"},
            {"NavAreaClass", 0x5E8, "ClassProperty"},
            {"bCastDistanceFieldIndirectShadow", 0x5F0, "BoolProperty"},
            {"bDisallowMeshPaintPerInstance", 0x5F0, "BoolProperty"},
            {"bIgnoreInstanceForTextureStreaming", 0x5F0, "BoolProperty"},
            {"bOverrideDistanceFieldSelfShadowBias", 0x5F0, "BoolProperty"},
            {"bOverrideLightMapRes", 0x5F0, "BoolProperty"},
            {"bSortTriangles", 0x5F0, "BoolProperty"},
            {"bUseDefaultCollision", 0x5F0, "BoolProperty"},
            {"bUseSubDivisions", 0x5F0, "BoolProperty"},
            {"bEnableTextureColorMeshPainting", 0x5F1, "BoolProperty"},
            {"bEnableVertexColorMeshPainting", 0x5F1, "BoolProperty"},
            {"bOverrideMeshPaintTextureCoordinateIndex", 0x5F1, "BoolProperty"},
            {"bOverrideMeshPaintTextureResolution", 0x5F1, "BoolProperty"},
            {"bReverseCulling", 0x5F1, "BoolProperty"},
            {"bWritesToMaterialCache", 0x5F1, "BoolProperty"},
            {"OverriddenMeshPaintTextureCoordinateIndex", 0x5F4, "IntProperty"},
            {"OverriddenMeshPaintTextureResolution", 0x5F8, "IntProperty"},
            {"OverriddenLightMapRes", 0x5FC, "IntProperty"},
            {"MeshPaintTextureCooked", 0x600, "ObjectProperty"},
            {"MeshPaintTextureOverride", 0x608, "ObjectProperty"},
            {"MaterialCacheTileCount", 0x610, "StructProperty"},
            {"MaterialCacheUVRegion", 0x618, "StructProperty"},
            {"MaterialCacheUVCoordinateIndex", 0x62C, "IntProperty"},
            {"MaterialCacheTextures", 0x630, "ArrayProperty"},
            {"DistanceFieldIndirectShadowMinVisibility", 0x640, "FloatProperty"},
            {"DistanceFieldSelfShadowBias", 0x644, "FloatProperty"},
            {"StreamingDistanceMultiplier", 0x648, "FloatProperty"},
            {"NanitePixelProgrammableDistance", 0x64C, "FloatProperty"},
            {"LodData", 0x650, "ArrayProperty"},
            {"StreamingTextureData", 0x660, "ArrayProperty"},
            {"LightmassSettings", 0x670, "StructProperty"},
        }};
    };

    struct JunoBuildingTrackedActorInterface
    {
        static constexpr std::string_view Name = "JunoBuildingTrackedActorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoBusManagerInterface
    {
        static constexpr std::string_view Name = "JunoBusManagerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCameraModeOverrideComponent
    {
        static constexpr std::string_view Name = "JunoCameraModeOverrideComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraModeOverrideComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraModeOverride = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CameraModeOverride", 0xC0, "ClassProperty"},
        }};
    };

    struct JunoCameraMode_OrbitCam
    {
        static constexpr std::string_view Name = "JunoCameraMode_OrbitCam";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCameraMode_ThirdPerson";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideCameraOriginDuringBuildPreview = 0x2080;
            static constexpr std::uintptr_t BuildingPreviewHeightAdditionalZoom = 0x2088;
            static constexpr std::uintptr_t BuildingSizeMin = 0x2090;
            static constexpr std::uintptr_t BuildingSizeMax = 0x2098;
            static constexpr std::uintptr_t BuildingScalarDistanceOffsetInterpSpeed = 0x20A0;
            static constexpr std::uintptr_t JunoMaterialCollection = 0x20A8;
            static constexpr std::uintptr_t Tag_IgnoredActors = 0x20B0;
            static constexpr std::uintptr_t VerticalProbeLength = 0x20B8;
            static constexpr std::uintptr_t FrontalAngledProbeAngle = 0x20C0;
            static constexpr std::uintptr_t FrontalAngledProbeLength = 0x20C4;
            static constexpr std::uintptr_t ViewTargetHeight = 0x20C8;
            static constexpr std::uintptr_t VerticalProbeTickSkip = 0x20D0;
            static constexpr std::uintptr_t FrontalProbeTickSkip = 0x20D4;
            static constexpr std::uintptr_t NonAttackingFollowInterp = 0x20D8;
            static constexpr std::uintptr_t AttackingFollowInterp = 0x20E0;
            static constexpr std::uintptr_t FollowInterpBlenuOutSpeed = 0x20E8;
            static constexpr std::uintptr_t FollowInterpBlendInSpeed = 0x20F0;
            static constexpr std::uintptr_t GroundInterpBlendOutSpeed = 0x20F8;
            static constexpr std::uintptr_t GroundInterpBlendInSpeed = 0x2100;
            static constexpr std::uintptr_t GroundedZInterp = 0x2108;
            static constexpr std::uintptr_t NonGroundedZInterp = 0x2110;
            static constexpr std::uintptr_t UseVelocityViewTargetLeading = 0x2118;
            static constexpr std::uintptr_t MaxVelocityCamOffset = 0x2120;
            static constexpr std::uintptr_t DotParallelThreshold = 0x2128;
            static constexpr std::uintptr_t VelOffsetSpeed = 0x2130;
            static constexpr std::uintptr_t Curve_VelocityInterpSpeed = 0x2138;
            static constexpr std::uintptr_t StrafingVelOffsetInterpSpeed = 0x2140;
            static constexpr std::uintptr_t MinVelOffsetInterpSpeed = 0x2148;
            static constexpr std::uintptr_t MaxVelOffsetInterpSpeed = 0x2150;
            static constexpr std::uintptr_t CameraSpaceForwardDistanceIterpoltionSpeed = 0x2158;
            static constexpr std::uintptr_t CurCamSpaceViewOffsetIterpoltionSpeed = 0x2160;
            static constexpr std::uintptr_t ViewTargetOffsetInterpSpeed = 0x2168;
            static constexpr std::uintptr_t DefaultTargetViewOffset = 0x2170;
            static constexpr std::uintptr_t PitchCameraForwardDistanceMultiplier = 0x2188;
            static constexpr std::uintptr_t Curve_PitchDistanceMult = 0x2198;
            static constexpr std::uintptr_t CameraAdjustsWhenStrafing = 0x21A0;
            static constexpr std::uintptr_t VelocityAddDistanceThreshold = 0x21A8;
            static constexpr std::uintptr_t VelocityAddMaxDistance = 0x21B0;
            static constexpr std::uintptr_t InteriorCameraSpaceForwardDistance = 0x21B8;
            static constexpr std::uintptr_t InteriorCamZOffset = 0x21C0;
            static constexpr std::uintptr_t ExteriorCameraSpaceForwardDistance = 0x21C8;
            static constexpr std::uintptr_t ExteriorCameraSpaceForwardDistanceStrafing = 0x21D0;
            static constexpr std::uintptr_t ExteriorCamZOffset = 0x21D8;
            static constexpr std::uintptr_t AllowChangingHidePercentByPitch = 0x21E0;
            static constexpr std::uintptr_t ChangingHideDefaultValue = 0x21E4;
            static constexpr std::uintptr_t ChangingHidePitchedValue = 0x21E8;
            static constexpr std::uintptr_t ChangingHidePitchedThreshold = 0x21F0;
            static constexpr std::uintptr_t VelocityAddMaxFOV = 0x21F8;
            static constexpr std::uintptr_t MinFOVAndDistanceInterpSpeed = 0x2200;
            static constexpr std::uintptr_t MaxFOVAndDistanceInterpSpeed = 0x2208;
            static constexpr std::uintptr_t CurrentFOV = 0x2210;
            static constexpr std::uintptr_t FastVelocityThreshold = 0x2218;
            static constexpr std::uintptr_t InteriorFOV = 0x2220;
            static constexpr std::uintptr_t ExteriorFOV = 0x2228;
            static constexpr std::uintptr_t VerticalProbeCurTickNum = 0x2230;
            static constexpr std::uintptr_t FrontalProbeCurTickNum = 0x2234;
            static constexpr std::uintptr_t CurGroundedBlendInterp = 0x2238;
            static constexpr std::uintptr_t CurFollowBlendInterp = 0x2240;
            static constexpr std::uintptr_t CurVelOffset = 0x2248;
            static constexpr std::uintptr_t CurrentBuildingScalarDistanceOffset = 0x2260;
            static constexpr std::uintptr_t CurCamSpaceViewOffset = 0x2268;
            static constexpr std::uintptr_t ConversationFocusLocation = 0x2280;
            static constexpr std::uintptr_t VerticalProbeBlocked = 0x2298;
            static constexpr std::uintptr_t VerticalHitDistance = 0x229C;
            static constexpr std::uintptr_t FrontaAngledlProbeBlocked = 0x22A0;
            static constexpr std::uintptr_t ForwardAngledHitDistance = 0x22A4;
        };

        inline static constexpr std::array<PropertyInfo, 66> Properties{{
            {"bOverrideCameraOriginDuringBuildPreview", 0x2080, "BoolProperty"},
            {"BuildingPreviewHeightAdditionalZoom", 0x2088, "DoubleProperty"},
            {"BuildingSizeMin", 0x2090, "DoubleProperty"},
            {"BuildingSizeMax", 0x2098, "DoubleProperty"},
            {"BuildingScalarDistanceOffsetInterpSpeed", 0x20A0, "DoubleProperty"},
            {"JunoMaterialCollection", 0x20A8, "ObjectProperty"},
            {"Tag_IgnoredActors", 0x20B0, "NameProperty"},
            {"VerticalProbeLength", 0x20B8, "DoubleProperty"},
            {"FrontalAngledProbeAngle", 0x20C0, "FloatProperty"},
            {"FrontalAngledProbeLength", 0x20C4, "FloatProperty"},
            {"ViewTargetHeight", 0x20C8, "DoubleProperty"},
            {"VerticalProbeTickSkip", 0x20D0, "IntProperty"},
            {"FrontalProbeTickSkip", 0x20D4, "IntProperty"},
            {"NonAttackingFollowInterp", 0x20D8, "DoubleProperty"},
            {"AttackingFollowInterp", 0x20E0, "DoubleProperty"},
            {"FollowInterpBlenuOutSpeed", 0x20E8, "DoubleProperty"},
            {"FollowInterpBlendInSpeed", 0x20F0, "DoubleProperty"},
            {"GroundInterpBlendOutSpeed", 0x20F8, "DoubleProperty"},
            {"GroundInterpBlendInSpeed", 0x2100, "DoubleProperty"},
            {"GroundedZInterp", 0x2108, "DoubleProperty"},
            {"NonGroundedZInterp", 0x2110, "DoubleProperty"},
            {"UseVelocityViewTargetLeading", 0x2118, "BoolProperty"},
            {"MaxVelocityCamOffset", 0x2120, "DoubleProperty"},
            {"DotParallelThreshold", 0x2128, "DoubleProperty"},
            {"VelOffsetSpeed", 0x2130, "DoubleProperty"},
            {"Curve_VelocityInterpSpeed", 0x2138, "ObjectProperty"},
            {"StrafingVelOffsetInterpSpeed", 0x2140, "DoubleProperty"},
            {"MinVelOffsetInterpSpeed", 0x2148, "DoubleProperty"},
            {"MaxVelOffsetInterpSpeed", 0x2150, "DoubleProperty"},
            {"CameraSpaceForwardDistanceIterpoltionSpeed", 0x2158, "DoubleProperty"},
            {"CurCamSpaceViewOffsetIterpoltionSpeed", 0x2160, "DoubleProperty"},
            {"ViewTargetOffsetInterpSpeed", 0x2168, "FloatProperty"},
            {"DefaultTargetViewOffset", 0x2170, "StructProperty"},
            {"PitchCameraForwardDistanceMultiplier", 0x2188, "StructProperty"},
            {"Curve_PitchDistanceMult", 0x2198, "ObjectProperty"},
            {"CameraAdjustsWhenStrafing", 0x21A0, "BoolProperty"},
            {"VelocityAddDistanceThreshold", 0x21A8, "DoubleProperty"},
            {"VelocityAddMaxDistance", 0x21B0, "DoubleProperty"},
            {"InteriorCameraSpaceForwardDistance", 0x21B8, "DoubleProperty"},
            {"InteriorCamZOffset", 0x21C0, "DoubleProperty"},
            {"ExteriorCameraSpaceForwardDistance", 0x21C8, "DoubleProperty"},
            {"ExteriorCameraSpaceForwardDistanceStrafing", 0x21D0, "DoubleProperty"},
            {"ExteriorCamZOffset", 0x21D8, "DoubleProperty"},
            {"AllowChangingHidePercentByPitch", 0x21E0, "BoolProperty"},
            {"ChangingHideDefaultValue", 0x21E4, "FloatProperty"},
            {"ChangingHidePitchedValue", 0x21E8, "FloatProperty"},
            {"ChangingHidePitchedThreshold", 0x21F0, "DoubleProperty"},
            {"VelocityAddMaxFOV", 0x21F8, "DoubleProperty"},
            {"MinFOVAndDistanceInterpSpeed", 0x2200, "DoubleProperty"},
            {"MaxFOVAndDistanceInterpSpeed", 0x2208, "DoubleProperty"},
            {"CurrentFOV", 0x2210, "DoubleProperty"},
            {"FastVelocityThreshold", 0x2218, "DoubleProperty"},
            {"InteriorFOV", 0x2220, "DoubleProperty"},
            {"ExteriorFOV", 0x2228, "DoubleProperty"},
            {"VerticalProbeCurTickNum", 0x2230, "IntProperty"},
            {"FrontalProbeCurTickNum", 0x2234, "IntProperty"},
            {"CurGroundedBlendInterp", 0x2238, "DoubleProperty"},
            {"CurFollowBlendInterp", 0x2240, "DoubleProperty"},
            {"CurVelOffset", 0x2248, "StructProperty"},
            {"CurrentBuildingScalarDistanceOffset", 0x2260, "DoubleProperty"},
            {"CurCamSpaceViewOffset", 0x2268, "StructProperty"},
            {"ConversationFocusLocation", 0x2280, "StructProperty"},
            {"VerticalProbeBlocked", 0x2298, "BoolProperty"},
            {"VerticalHitDistance", 0x229C, "FloatProperty"},
            {"FrontaAngledlProbeBlocked", 0x22A0, "BoolProperty"},
            {"ForwardAngledHitDistance", 0x22A4, "FloatProperty"},
        }};
    };

    struct JunoCameraMode_OrbitCam_BPFunctions
    {
        static constexpr std::string_view Name = "JunoCameraMode_OrbitCam_BPFunctions";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCampAIManagementComponent
    {
        static constexpr std::string_view Name = "JunoCampAIManagementComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCampComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedAndReplicatedRecruitmentData = 0xD8;
            static constexpr std::uintptr_t UniqueAIIdentifierToSpawnedAIs = 0x130;
            static constexpr std::uintptr_t NPCPointProviders = 0x228;
            static constexpr std::uintptr_t NPCEncounter = 0x238;
            static constexpr std::uintptr_t CreaturePointProviders = 0x240;
            static constexpr std::uintptr_t CreatureEncounter = 0x250;
            static constexpr std::uintptr_t VisitorsConfigurationDigested = 0x258;
            static constexpr std::uintptr_t CachedFixedNPCsConfigurationAtCurrentAwesomenessLevel = 0x270;
            static constexpr std::uintptr_t CachedFixedCreaturesConfigurationAtCurrentAwesomenessLevel = 0x280;
            static constexpr std::uintptr_t CachedVisitorsPickingConfigurationAtCurrentAwesomenessLevel = 0x290;
            static constexpr std::uintptr_t NonSpawnedCreaturesIdentifiersWaitingForSpawnCondition = 0x2B8;
            static constexpr std::uintptr_t NPCLWMConfiguration = 0x2D8;
            static constexpr std::uintptr_t VisitorSpawnAroundEnvironmentQuery = 0x6B8;
            static constexpr std::uintptr_t CreaturesLWMConfiguration = 0x6C0;
            static constexpr std::uintptr_t VisitorsConfiguration = 0xAA0;
            static constexpr std::uintptr_t AwesomenessLevelToFixedNPCsConfiguration = 0xAE0;
            static constexpr std::uintptr_t AwesomenessLevelToFixedCreaturesConfiguration = 0xAF0;
            static constexpr std::uintptr_t AwesomenessLevelToVisitorsPickingConfiguration = 0xB00;
            static constexpr std::uintptr_t AwesomenessLevelToNPCRewards = 0xB10;
            static constexpr std::uintptr_t InitialIngameHoursDelayBeforeFirstRewardRoll = 0xB20;
            static constexpr std::uintptr_t MinimumIngameHoursBetweenRewardRolls = 0xB48;
            static constexpr std::uintptr_t ResetDelayBetweenRollsOnLevelChange = 0xB70;
            static constexpr std::uintptr_t PassiveResourceGatheringTime = 0xB98;
            static constexpr std::uintptr_t MultiplierForSimulatedGeneration = 0xBC0;
            static constexpr std::uintptr_t MaximumAllocableSOPerAIForSimulation = 0xBE8;
            static constexpr std::uintptr_t SupportedAgents = 0xC10;
            static constexpr std::uintptr_t ShouldCheckWCForRemoteRecruitment = 0xC18;
            static constexpr std::uintptr_t RequireNPCToBeInVisitorsListForRemoteRecruitment = 0xC40;
            static constexpr std::uintptr_t SpawnDelayFromCampSpawn = 0xC68;
            static constexpr std::uintptr_t MinDistanceFromPlayersToAddVisitors = 0xC90;
            static constexpr std::uintptr_t MinDistanceFromPlayersToAddFixedNPCs = 0xCB8;
            static constexpr std::uintptr_t MinDistanceFromPlayersToAddFixedCreatures = 0xCE0;
            static constexpr std::uintptr_t CanSpawnVillagersOnStart = 0xD08;
        };

        inline static constexpr std::array<PropertyInfo, 33> Properties{{
            {"CachedAndReplicatedRecruitmentData", 0xD8, "StructProperty"},
            {"UniqueAIIdentifierToSpawnedAIs", 0x130, "MapProperty"},
            {"NPCPointProviders", 0x228, "ArrayProperty"},
            {"NPCEncounter", 0x238, "ObjectProperty"},
            {"CreaturePointProviders", 0x240, "ArrayProperty"},
            {"CreatureEncounter", 0x250, "ObjectProperty"},
            {"VisitorsConfigurationDigested", 0x258, "StructProperty"},
            {"CachedFixedNPCsConfigurationAtCurrentAwesomenessLevel", 0x270, "ArrayProperty"},
            {"CachedFixedCreaturesConfigurationAtCurrentAwesomenessLevel", 0x280, "ArrayProperty"},
            {"CachedVisitorsPickingConfigurationAtCurrentAwesomenessLevel", 0x290, "StructProperty"},
            {"NonSpawnedCreaturesIdentifiersWaitingForSpawnCondition", 0x2B8, "ArrayProperty"},
            {"NPCLWMConfiguration", 0x2D8, "StructProperty"},
            {"VisitorSpawnAroundEnvironmentQuery", 0x6B8, "ObjectProperty"},
            {"CreaturesLWMConfiguration", 0x6C0, "StructProperty"},
            {"VisitorsConfiguration", 0xAA0, "StructProperty"},
            {"AwesomenessLevelToFixedNPCsConfiguration", 0xAE0, "MapProperty"},
            {"AwesomenessLevelToFixedCreaturesConfiguration", 0xAF0, "MapProperty"},
            {"AwesomenessLevelToVisitorsPickingConfiguration", 0xB00, "MapProperty"},
            {"AwesomenessLevelToNPCRewards", 0xB10, "MapProperty"},
            {"InitialIngameHoursDelayBeforeFirstRewardRoll", 0xB20, "StructProperty"},
            {"MinimumIngameHoursBetweenRewardRolls", 0xB48, "StructProperty"},
            {"ResetDelayBetweenRollsOnLevelChange", 0xB70, "StructProperty"},
            {"PassiveResourceGatheringTime", 0xB98, "StructProperty"},
            {"MultiplierForSimulatedGeneration", 0xBC0, "StructProperty"},
            {"MaximumAllocableSOPerAIForSimulation", 0xBE8, "StructProperty"},
            {"SupportedAgents", 0xC10, "StructProperty"},
            {"ShouldCheckWCForRemoteRecruitment", 0xC18, "StructProperty"},
            {"RequireNPCToBeInVisitorsListForRemoteRecruitment", 0xC40, "StructProperty"},
            {"SpawnDelayFromCampSpawn", 0xC68, "StructProperty"},
            {"MinDistanceFromPlayersToAddVisitors", 0xC90, "StructProperty"},
            {"MinDistanceFromPlayersToAddFixedNPCs", 0xCB8, "StructProperty"},
            {"MinDistanceFromPlayersToAddFixedCreatures", 0xCE0, "StructProperty"},
            {"CanSpawnVillagersOnStart", 0xD08, "StructProperty"},
        }};
    };

    struct JunoCampActor
    {
        static constexpr std::string_view Name = "JunoCampActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticGameplayTag = 0x2F0;
            static constexpr std::uintptr_t VillageTypeTag = 0x2F4;
            static constexpr std::uintptr_t DefaultPersistentTags = 0x2F8;
            static constexpr std::uintptr_t TagsToApplyToNPCsInArea = 0x318;
            static constexpr std::uintptr_t CampUpgradeRewardFilters = 0x338;
            static constexpr std::uintptr_t SavedActorGuid = 0x368;
            static constexpr std::uintptr_t BoundsComponent = 0x380;
            static constexpr std::uintptr_t CampCenterCache = 0x388;
            static constexpr std::uintptr_t CampBiome = 0x390;
            static constexpr std::uintptr_t CampBiomeTag = 0x394;
            static constexpr std::uintptr_t OwnedGameplayTags = 0x398;
            static constexpr std::uintptr_t CampInventoryComponent = 0x3B8;
            static constexpr std::uintptr_t CampPointProviders = 0x3C0;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"StaticGameplayTag", 0x2F0, "StructProperty"},
            {"VillageTypeTag", 0x2F4, "StructProperty"},
            {"DefaultPersistentTags", 0x2F8, "StructProperty"},
            {"TagsToApplyToNPCsInArea", 0x318, "StructProperty"},
            {"CampUpgradeRewardFilters", 0x338, "IntProperty"},
            {"SavedActorGuid", 0x368, "StructProperty"},
            {"BoundsComponent", 0x380, "ObjectProperty"},
            {"CampCenterCache", 0x388, "WeakObjectProperty"},
            {"CampBiome", 0x390, "EnumProperty"},
            {"CampBiomeTag", 0x394, "StructProperty"},
            {"OwnedGameplayTags", 0x398, "StructProperty"},
            {"CampInventoryComponent", 0x3B8, "ObjectProperty"},
            {"CampPointProviders", 0x3C0, "ArrayProperty"},
        }};
    };

    struct JunoCampCenterComponent
    {
        static constexpr std::string_view Name = "JunoCampCenterComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnJunoCampAwesomeLevelChangedDelegate = 0xC8;
            static constexpr std::uintptr_t OnJunoCampAwesomePointModificationDelegate = 0xD8;
            static constexpr std::uintptr_t OnJunoCampNonResourceRequirementsMetChanged = 0xE8;
            static constexpr std::uintptr_t CampActorClassToSpawn = 0x140;
            static constexpr std::uintptr_t CampCenterDestructionDeathReasonTag = 0x148;
            static constexpr std::uintptr_t bForceCampCreation = 0x14C;
            static constexpr std::uintptr_t bCreatePermanentCamp = 0x14D;
            static constexpr std::uintptr_t bUseAlternateCampCreationFlow = 0x14E;
            static constexpr std::uintptr_t RandomCampNameRegistry = 0x150;
            static constexpr std::uintptr_t bAutoDetectVillageTypeFromBuildToolSelection = 0x154;
            static constexpr std::uintptr_t WaitForEventRouterAction = 0x158;
            static constexpr std::uintptr_t LinkedCampActorID = 0x160;
            static constexpr std::uintptr_t bCampCreationFlowTriggered = 0x170;
            static constexpr std::uintptr_t CampActorCache = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"OnJunoCampAwesomeLevelChangedDelegate", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnJunoCampAwesomePointModificationDelegate", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnJunoCampNonResourceRequirementsMetChanged", 0xE8, "MulticastInlineDelegateProperty"},
            {"CampActorClassToSpawn", 0x140, "ClassProperty"},
            {"CampCenterDestructionDeathReasonTag", 0x148, "StructProperty"},
            {"bForceCampCreation", 0x14C, "BoolProperty"},
            {"bCreatePermanentCamp", 0x14D, "BoolProperty"},
            {"bUseAlternateCampCreationFlow", 0x14E, "BoolProperty"},
            {"RandomCampNameRegistry", 0x150, "StructProperty"},
            {"bAutoDetectVillageTypeFromBuildToolSelection", 0x154, "BoolProperty"},
            {"WaitForEventRouterAction", 0x158, "ObjectProperty"},
            {"LinkedCampActorID", 0x160, "StructProperty"},
            {"bCampCreationFlowTriggered", 0x170, "BoolProperty"},
            {"CampActorCache", 0x188, "WeakObjectProperty"},
        }};
    };

    struct JunoCampComponentBase
    {
        static constexpr std::string_view Name = "JunoCampComponentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
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

    struct JunoCampFocalPointManagerComponent
    {
        static constexpr std::string_view Name = "JunoCampFocalPointManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCampComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FocalPointDataTable = 0xC0;
            static constexpr std::uintptr_t ReplicatedFocalPoints = 0x120;
            static constexpr std::uintptr_t TotalAwesomeness = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FocalPointDataTable", 0xC0, "StructProperty"},
            {"ReplicatedFocalPoints", 0x120, "StructProperty"},
            {"TotalAwesomeness", 0x178, "DoubleProperty"},
        }};
    };

    struct JunoCampMarkerComponent
    {
        static constexpr std::string_view Name = "JunoCampMarkerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoMarkerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TeleportLocationDistanceOffset = 0x290;
            static constexpr std::uintptr_t TeleportZOffset = 0x294;
            static constexpr std::uintptr_t bUpdateExistingMarkerSettings = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TeleportLocationDistanceOffset", 0x290, "FloatProperty"},
            {"TeleportZOffset", 0x294, "FloatProperty"},
            {"bUpdateExistingMarkerSettings", 0x298, "BoolProperty"},
        }};
    };

    struct JunoCampMembershipActorComponent
    {
        static constexpr std::string_view Name = "JunoCampMembershipActorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaTrackableAIObjectComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnJunoCampMembershipChanged = 0x100;
            static constexpr std::uintptr_t BoundCamp = 0x128;
            static constexpr std::uintptr_t ToleranceForMovementUpdates = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnJunoCampMembershipChanged", 0x100, "MulticastInlineDelegateProperty"},
            {"BoundCamp", 0x128, "WeakObjectProperty"},
            {"ToleranceForMovementUpdates", 0x170, "StructProperty"},
        }};
    };

    struct JunoCampPersistenceComponent
    {
        static constexpr std::string_view Name = "JunoCampPersistenceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCampComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AwesomeLevelSaveData = 0xF8;
            static constexpr std::uintptr_t AICampManagementSaveData = 0x100;
            static constexpr std::uintptr_t NamedPOISaveData = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AwesomeLevelSaveData", 0xF8, "StructProperty"},
            {"AICampManagementSaveData", 0x100, "StructProperty"},
            {"NamedPOISaveData", 0x118, "StructProperty"},
        }};
    };

    struct JunoCampPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoCampPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t SavedAllCamps = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SavedAllCamps", 0x60, "StructProperty"},
        }};
    };

    struct JunoCampPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoCampPersistenceFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoCampPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoCampPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoCampRecruitmentComponent
    {
        static constexpr std::string_view Name = "JunoCampRecruitmentComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCampComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveNPCEntries = 0x108;
            static constexpr std::uintptr_t ActiveCreatureEntries = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActiveNPCEntries", 0x108, "ArrayProperty"},
            {"ActiveCreatureEntries", 0x118, "ArrayProperty"},
        }};
    };

    struct JunoCampRecruitmentObjectComponent
    {
        static constexpr std::string_view Name = "JunoCampRecruitmentObjectComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AcceptedPawnTypes = 0xC0;
            static constexpr std::uintptr_t OnJunoRecruitmentObjectAssignedChangedDelegate = 0xC8;
            static constexpr std::uintptr_t OnJunoRecruitmentObjectEnableChangeDelegate = 0xF0;
            static constexpr std::uintptr_t OnJunoRecruitmentObjectAssignedAISpawnedDelegate = 0x100;
            static constexpr std::uintptr_t OnJunoRecruitmentObjectAssignedAIDespawnedDelegate = 0x110;
            static constexpr std::uintptr_t bIsEnabled = 0x120;
            static constexpr std::uintptr_t CachedAssignedData = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"AcceptedPawnTypes", 0xC0, "IntProperty"},
            {"OnJunoRecruitmentObjectAssignedChangedDelegate", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnJunoRecruitmentObjectEnableChangeDelegate", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnJunoRecruitmentObjectAssignedAISpawnedDelegate", 0x100, "MulticastInlineDelegateProperty"},
            {"OnJunoRecruitmentObjectAssignedAIDespawnedDelegate", 0x110, "MulticastInlineDelegateProperty"},
            {"bIsEnabled", 0x120, "BoolProperty"},
            {"CachedAssignedData", 0x128, "StructProperty"},
        }};
    };

    struct JunoCampRemovalStatusComponent
    {
        static constexpr std::string_view Name = "JunoCampRemovalStatusComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCampComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SoftRemovalCampComponentUpdateRate = 0xD0;
            static constexpr std::uintptr_t CampRemovalStatusData = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SoftRemovalCampComponentUpdateRate", 0xD0, "StructProperty"},
            {"CampRemovalStatusData", 0x108, "StructProperty"},
        }};
    };

    struct JunoCampSafeZoneComponent
    {
        static constexpr std::string_view Name = "JunoCampSafeZoneComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoSafeZoneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ActivationPolicy = 0xC0;
            static constexpr std::uintptr_t OverrideShape = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActivationPolicy", 0xC0, "EnumProperty"},
            {"OverrideShape", 0xC8, "StructProperty"},
        }};
    };

    struct JunoCampSpawningControlComponent
    {
        static constexpr std::string_view Name = "JunoCampSpawningControlComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CanControlCampSpawning = 0xC0;
            static constexpr std::uintptr_t SpawnDelay = 0xE8;
            static constexpr std::uintptr_t CampQueryExtent = 0x110;
            static constexpr std::uintptr_t CampComponent = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CanControlCampSpawning", 0xC0, "StructProperty"},
            {"SpawnDelay", 0xE8, "StructProperty"},
            {"CampQueryExtent", 0x110, "StructProperty"},
            {"CampComponent", 0x138, "WeakObjectProperty"},
        }};
    };

    struct JunoCampWorldConditionSchema
    {
        static constexpr std::string_view Name = "JunoCampWorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct JunoCapturableInterface
    {
        static constexpr std::string_view Name = "JunoCapturableInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCapture
    {
        static constexpr std::string_view Name = "JunoCapture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SavedActorGuid = 0x290;
            static constexpr std::uintptr_t bSpawnedByLevelSaveRecord = 0x2B8;
            static constexpr std::uintptr_t CaptureContext = 0x2C0;
            static constexpr std::uintptr_t OwningPlayerState = 0x2E0;
            static constexpr std::uintptr_t bAutoDetectType = 0x2E8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SavedActorGuid", 0x290, "StructProperty"},
            {"bSpawnedByLevelSaveRecord", 0x2B8, "BoolProperty"},
            {"CaptureContext", 0x2C0, "StructProperty"},
            {"OwningPlayerState", 0x2E0, "ObjectProperty"},
            {"bAutoDetectType", 0x2E8, "BoolProperty"},
        }};
    };

    struct JunoCaptureBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoCaptureBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCaptureBuildingBehavior
    {
        static constexpr std::string_view Name = "JunoCaptureBuildingBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingBehaviorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSaveSelectedActorsCompleted = 0x338;
            static constexpr std::uintptr_t OnCaptureContextChanged = 0x360;
            static constexpr std::uintptr_t InvalidReasons = 0x370;
            static constexpr std::uintptr_t SupportedBoundingActorClasses = 0x378;
            static constexpr std::uintptr_t AutoSelectAttachedToyClasses = 0x398;
            static constexpr std::uintptr_t ExcludedPhysicsToyClasses = 0x3A8;
            static constexpr std::uintptr_t MaxSelectionPieces = 0x3B8;
            static constexpr std::uintptr_t MaxSelectionVolumeM3 = 0x3BC;
            static constexpr std::uintptr_t MaxSelectionDimensionM = 0x3C0;
            static constexpr std::uintptr_t MaxSelectionDistance = 0x3C4;
            static constexpr std::uintptr_t HoldSelectInputAction = 0x3C8;
            static constexpr std::uintptr_t MultiSelectInputAction = 0x3D0;
            static constexpr std::uintptr_t MultiSelectHoldSelectInputAction = 0x3D8;
            static constexpr std::uintptr_t SaveBuildInputAction = 0x3E0;
            static constexpr std::uintptr_t CaptureActorToEdit = 0x408;
            static constexpr std::uintptr_t PreRemoveCaptureContext = 0x410;
            static constexpr std::uintptr_t HandoffCaptureContext = 0x468;
            static constexpr std::uintptr_t HoveredExclusionReason = 0x4C0;
            static constexpr std::uintptr_t CachedTypeConfigMap = 0x4C8;
            static constexpr std::uintptr_t CaptureContext = 0x4D8;
            static constexpr std::uintptr_t LastTriggerTimestamp = 0x4F8;
            static constexpr std::uintptr_t SpawnContexts = 0x508;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"OnSaveSelectedActorsCompleted", 0x338, "MulticastInlineDelegateProperty"},
            {"OnCaptureContextChanged", 0x360, "MulticastInlineDelegateProperty"},
            {"InvalidReasons", 0x370, "ObjectProperty"},
            {"SupportedBoundingActorClasses", 0x378, "StructProperty"},
            {"AutoSelectAttachedToyClasses", 0x398, "ArrayProperty"},
            {"ExcludedPhysicsToyClasses", 0x3A8, "ArrayProperty"},
            {"MaxSelectionPieces", 0x3B8, "IntProperty"},
            {"MaxSelectionVolumeM3", 0x3BC, "FloatProperty"},
            {"MaxSelectionDimensionM", 0x3C0, "FloatProperty"},
            {"MaxSelectionDistance", 0x3C4, "FloatProperty"},
            {"HoldSelectInputAction", 0x3C8, "ObjectProperty"},
            {"MultiSelectInputAction", 0x3D0, "ObjectProperty"},
            {"MultiSelectHoldSelectInputAction", 0x3D8, "ObjectProperty"},
            {"SaveBuildInputAction", 0x3E0, "ObjectProperty"},
            {"CaptureActorToEdit", 0x408, "ObjectProperty"},
            {"PreRemoveCaptureContext", 0x410, "StructProperty"},
            {"HandoffCaptureContext", 0x468, "StructProperty"},
            {"HoveredExclusionReason", 0x4C0, "StructProperty"},
            {"CachedTypeConfigMap", 0x4C8, "MapProperty"},
            {"CaptureContext", 0x4D8, "StructProperty"},
            {"LastTriggerTimestamp", 0x4F8, "DoubleProperty"},
            {"SpawnContexts", 0x508, "MapProperty"},
        }};
    };

    struct JunoCaptureManagerPlayspaceComponent
    {
        static constexpr std::string_view Name = "JunoCaptureManagerPlayspaceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCapturedFinished = 0x118;
            static constexpr std::uintptr_t BuildingCapture = 0x128;
            static constexpr std::uintptr_t RegisteredCaptures = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnCapturedFinished", 0x118, "MulticastInlineDelegateProperty"},
            {"BuildingCapture", 0x128, "ObjectProperty"},
            {"RegisteredCaptures", 0x130, "ArrayProperty"},
        }};
    };

    struct JunoCaveContainerInterface
    {
        static constexpr std::string_view Name = "JunoCaveContainerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCaveDensityGridIDSelector
    {
        static constexpr std::string_view Name = "JunoCaveDensityGridIDSelector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldDensityGridIDSelector";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCaveLivingWorldEventData
    {
        static constexpr std::string_view Name = "JunoCaveLivingWorldEventData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldEventData";
        struct Offsets
        {
            static constexpr std::uintptr_t CaveRoomDistanceMin = 0x168;
            static constexpr std::uintptr_t CaveRoomDistanceMax = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CaveRoomDistanceMin", 0x168, "StructProperty"},
            {"CaveRoomDistanceMax", 0x190, "StructProperty"},
        }};
    };

    struct JunoCaveLocationInterface
    {
        static constexpr std::string_view Name = "JunoCaveLocationInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCellTransformer
    {
        static constexpr std::string_view Name = "JunoCellTransformer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FNCellTransformer";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bEnabled", 0x28, "BoolProperty"},
        }};
    };

    struct JunoCellTransformerDataAsset
    {
        static constexpr std::string_view Name = "JunoCellTransformerDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t TransformerEntries = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TransformerEntries", 0x28, "ArrayProperty"},
        }};
    };

    struct JunoCellTransformerDataAssetEntry
    {
        static constexpr std::string_view Name = "JunoCellTransformerDataAssetEntry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LevelsToProcess = 0x28;
            static constexpr std::uintptr_t CellTransformerInstance = 0x38;
            static constexpr std::uintptr_t bEnabled = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LevelsToProcess", 0x28, "ArrayProperty"},
            {"CellTransformerInstance", 0x38, "ObjectProperty"},
            {"bEnabled", 0x40, "BoolProperty"},
        }};
    };

    struct JunoChangeInventoryHelper
    {
        static constexpr std::string_view Name = "JunoChangeInventoryHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemRequirements = 0x28;
            static constexpr std::uintptr_t bExactRequirements = 0x38;
            static constexpr std::uintptr_t StateDrivenOwner = 0x3C;
            static constexpr std::uintptr_t InteractingPawn = 0x44;
            static constexpr std::uintptr_t TransitionTag = 0x4C;
            static constexpr std::uintptr_t InventoryComponent = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ItemRequirements", 0x28, "ArrayProperty"},
            {"bExactRequirements", 0x38, "BoolProperty"},
            {"StateDrivenOwner", 0x3C, "WeakObjectProperty"},
            {"InteractingPawn", 0x44, "WeakObjectProperty"},
            {"TransitionTag", 0x4C, "StructProperty"},
            {"InventoryComponent", 0x50, "WeakObjectProperty"},
        }};
    };

    struct JunoChaosAudioGameStateComponent
    {
        static constexpr std::string_view Name = "JunoChaosAudioGameStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t FallbackPhysicalMaterial = 0xC0;
            static constexpr std::uintptr_t CollisionEventSizeParamName = 0xC8;
            static constexpr std::uintptr_t CollisionTriggerUpdateParamName = 0xCC;
            static constexpr std::uintptr_t Collision_Loop = 0xD0;
            static constexpr std::uintptr_t CollisionMassToSize = 0xF0;
            static constexpr std::uintptr_t CollisionVolumeMultiplier = 0x118;
            static constexpr std::uintptr_t CollisionMaterials = 0x140;
            static constexpr std::uintptr_t BreakEventSizeParamName = 0x150;
            static constexpr std::uintptr_t Break_Group_Default = 0x158;
            static constexpr std::uintptr_t BreakGroupMaterialMap = 0x178;
            static constexpr std::uintptr_t BreakMassToSize = 0x188;
            static constexpr std::uintptr_t BreakVolumeMultiplier = 0x1B0;
            static constexpr std::uintptr_t BreakMaterials = 0x1D8;
            static constexpr std::uintptr_t CollisionSoundMap = 0x1E8;
            static constexpr std::uintptr_t BreakSoundMap = 0x1F8;
            static constexpr std::uintptr_t AudioEventAggregatorSubsystem = 0x208;
            static constexpr std::uintptr_t SoftAssets = 0x210;
            static constexpr std::uintptr_t LoadedAssets = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"FallbackPhysicalMaterial", 0xC0, "ObjectProperty"},
            {"CollisionEventSizeParamName", 0xC8, "NameProperty"},
            {"CollisionTriggerUpdateParamName", 0xCC, "NameProperty"},
            {"Collision_Loop", 0xD0, "SoftObjectProperty"},
            {"CollisionMassToSize", 0xF0, "StructProperty"},
            {"CollisionVolumeMultiplier", 0x118, "StructProperty"},
            {"CollisionMaterials", 0x140, "MapProperty"},
            {"BreakEventSizeParamName", 0x150, "NameProperty"},
            {"Break_Group_Default", 0x158, "SoftObjectProperty"},
            {"BreakGroupMaterialMap", 0x178, "MapProperty"},
            {"BreakMassToSize", 0x188, "StructProperty"},
            {"BreakVolumeMultiplier", 0x1B0, "StructProperty"},
            {"BreakMaterials", 0x1D8, "MapProperty"},
            {"CollisionSoundMap", 0x1E8, "MapProperty"},
            {"BreakSoundMap", 0x1F8, "MapProperty"},
            {"AudioEventAggregatorSubsystem", 0x208, "ObjectProperty"},
            {"SoftAssets", 0x210, "ArrayProperty"},
            {"LoadedAssets", 0x220, "ArrayProperty"},
        }};
    };

    struct JunoCheatManager
    {
        static constexpr std::string_view Name = "JunoCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCheatManager_Adventures
    {
        static constexpr std::string_view Name = "JunoCheatManager_Adventures";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCheatManager_Beacon
    {
        static constexpr std::string_view Name = "JunoCheatManager_Beacon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCheatManager_SavedBuilds
    {
        static constexpr std::string_view Name = "JunoCheatManager_SavedBuilds";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCheatProfilerSubsystem
    {
        static constexpr std::string_view Name = "JunoCheatProfilerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoClientAtomicReplacementComponent
    {
        static constexpr std::string_view Name = "JunoClientAtomicReplacementComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Guid = 0xC0;
            static constexpr std::uintptr_t TargetPlayspace = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Guid", 0xC0, "StructProperty"},
            {"TargetPlayspace", 0xD0, "ObjectProperty"},
        }};
    };

    struct JunoClientAtomicReplacementWorldSubsystem
    {
        static constexpr std::string_view Name = "JunoClientAtomicReplacementWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoClosedDoorNavArea
    {
        static constexpr std::string_view Name = "JunoClosedDoorNavArea";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultCost = 0x30;
            static constexpr std::uintptr_t FixedAreaEnteringCost = 0x34;
            static constexpr std::uintptr_t DrawColor = 0x38;
            static constexpr std::uintptr_t SupportedAgents = 0x3C;
            static constexpr std::uintptr_t bSupportsAgent0 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent1 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent2 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent3 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent4 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent5 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent6 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent7 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent10 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent11 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent12 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent13 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent14 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent15 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent8 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent9 = 0x41;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"DefaultCost", 0x30, "FloatProperty"},
            {"FixedAreaEnteringCost", 0x34, "FloatProperty"},
            {"DrawColor", 0x38, "StructProperty"},
            {"SupportedAgents", 0x3C, "StructProperty"},
            {"bSupportsAgent0", 0x40, "BoolProperty"},
            {"bSupportsAgent1", 0x40, "BoolProperty"},
            {"bSupportsAgent2", 0x40, "BoolProperty"},
            {"bSupportsAgent3", 0x40, "BoolProperty"},
            {"bSupportsAgent4", 0x40, "BoolProperty"},
            {"bSupportsAgent5", 0x40, "BoolProperty"},
            {"bSupportsAgent6", 0x40, "BoolProperty"},
            {"bSupportsAgent7", 0x40, "BoolProperty"},
            {"bSupportsAgent10", 0x41, "BoolProperty"},
            {"bSupportsAgent11", 0x41, "BoolProperty"},
            {"bSupportsAgent12", 0x41, "BoolProperty"},
            {"bSupportsAgent13", 0x41, "BoolProperty"},
            {"bSupportsAgent14", 0x41, "BoolProperty"},
            {"bSupportsAgent15", 0x41, "BoolProperty"},
            {"bSupportsAgent8", 0x41, "BoolProperty"},
            {"bSupportsAgent9", 0x41, "BoolProperty"},
        }};
    };

    struct JunoClusterUnionActor
    {
        static constexpr std::string_view Name = "JunoClusterUnionActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortClusterUnionActor";
        struct Offsets
        {
            static constexpr std::uintptr_t OnComponentAdded = 0x2B8;
            static constexpr std::uintptr_t OnComponentRemoved = 0x2C8;
            static constexpr std::uintptr_t OnChannelTagsSubscribedChanged = 0x2D8;
            static constexpr std::uintptr_t CachedChannelTagSubscribed = 0x310;
            static constexpr std::uintptr_t ChannelIconOverrides = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnComponentAdded", 0x2B8, "MulticastInlineDelegateProperty"},
            {"OnComponentRemoved", 0x2C8, "MulticastInlineDelegateProperty"},
            {"OnChannelTagsSubscribedChanged", 0x2D8, "MulticastInlineDelegateProperty"},
            {"CachedChannelTagSubscribed", 0x310, "StructProperty"},
            {"ChannelIconOverrides", 0x330, "StructProperty"},
        }};
    };

    struct JunoClusterUnionComponent
    {
        static constexpr std::string_view Name = "JunoClusterUnionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ClusterUnionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyOnRigidStateChanged = 0x6C0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NotifyOnRigidStateChanged", 0x6C0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoClusterUnionCustomRepNode
    {
        static constexpr std::string_view Name = "JunoClusterUnionCustomRepNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortReplicationGraphNode_Custom";
        struct Offsets
        {
            static constexpr std::uintptr_t AllClusterUnions = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AllClusterUnions", 0x50, "ArrayProperty"},
        }};
    };

    struct JunoClusterUnionPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoClusterUnionPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t SaveData = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SaveData", 0x58, "StructProperty"},
        }};
    };

    struct JunoClusterUnionPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoClusterUnionPersistenceFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoClusterUnionPhysicsRelevancyTrackingSubsystem
    {
        static constexpr std::string_view Name = "JunoClusterUnionPhysicsRelevancyTrackingSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCommonPartsDataMappings
    {
        static constexpr std::string_view Name = "JunoCommonPartsDataMappings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Mapping = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Mapping", 0x28, "MapProperty"},
        }};
    };

    struct JunoComponentPreviewInterface
    {
        static constexpr std::string_view Name = "JunoComponentPreviewInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoComponent_HealthIndicator
    {
        static constexpr std::string_view Name = "JunoComponent_HealthIndicator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Health = 0xF0;
            static constexpr std::uintptr_t MaxHealth = 0xF4;
            static constexpr std::uintptr_t CurrentShield = 0xF8;
            static constexpr std::uintptr_t Shield = 0xFC;
            static constexpr std::uintptr_t bHasEverHadShield = 0x100;
            static constexpr std::uintptr_t OverpoweredThreshold = 0x104;
            static constexpr std::uintptr_t bShowDefaultHealthIndicatorWidget = 0x108;
            static constexpr std::uintptr_t AttachOffset = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Health", 0xF0, "FloatProperty"},
            {"MaxHealth", 0xF4, "FloatProperty"},
            {"CurrentShield", 0xF8, "FloatProperty"},
            {"Shield", 0xFC, "FloatProperty"},
            {"bHasEverHadShield", 0x100, "BoolProperty"},
            {"OverpoweredThreshold", 0x104, "FloatProperty"},
            {"bShowDefaultHealthIndicatorWidget", 0x108, "BoolProperty"},
            {"AttachOffset", 0x110, "StructProperty"},
        }};
    };

    struct JunoConnectableActorInterface
    {
        static constexpr std::string_view Name = "JunoConnectableActorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoConnectedSurfaceComponent
    {
        static constexpr std::string_view Name = "JunoConnectedSurfaceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bAlignsWithConnectedSurface = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bAlignsWithConnectedSurface", 0xC0, "BoolProperty"},
        }};
    };

    struct JunoConnectivityBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoConnectivityBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoConnectivityComponent
    {
        static constexpr std::string_view Name = "JunoConnectivityComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoConnectivityComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyAddedIntoClusterUnion = 0xC8;
            static constexpr std::uintptr_t NotifyRemovedFromClusterUnion = 0xD8;
            static constexpr std::uintptr_t ContactDistance = 0x130;
            static constexpr std::uintptr_t bIsInGraph = 0x134;
            static constexpr std::uintptr_t GeometryCollectionsToIgnoreBreaksForConnectivity = 0x138;
            static constexpr std::uintptr_t RootDoorComponentReferences = 0x148;
            static constexpr std::uintptr_t DoorComponents = 0x158;
            static constexpr std::uintptr_t bAreDoorsEjected = 0x168;
            static constexpr std::uintptr_t bAreDoorsEjectedInternal = 0x169;
            static constexpr std::uintptr_t GraphHandle = 0x170;
            static constexpr std::uintptr_t bRootPlayspaceInitialized = 0x198;
            static constexpr std::uintptr_t bIsDebris = 0x199;
            static constexpr std::uintptr_t bHasBeenSaved = 0x19A;
            static constexpr std::uintptr_t AutomaticConnectionMethod = 0x19B;
            static constexpr std::uintptr_t CustomConnectionDirections = 0x1A0;
            static constexpr std::uintptr_t bCanBeConnectedTo = 0x1B0;
            static constexpr std::uintptr_t bMustConnectToDynamic = 0x1B1;
            static constexpr std::uintptr_t bMustConnectToStatic = 0x1B2;
            static constexpr std::uintptr_t bForceIndependentlySupported = 0x1B3;
            static constexpr std::uintptr_t bForceWorldSupportWhenPotentialConnectionsAreNotFound = 0x1B4;
            static constexpr std::uintptr_t bAddToConnectivityGraphOnBeginPlay = 0x1B5;
            static constexpr std::uintptr_t bCanBeWorldSupported = 0x1B6;
            static constexpr std::uintptr_t ClassesThatAreAlwaysValidForWorldSupport = 0x1B8;
            static constexpr std::uintptr_t OverlapMargin = 0x1C8;
            static constexpr std::uintptr_t MinimumIslandSize = 0x1E0;
            static constexpr std::uintptr_t AttachedToys = 0x1E8;
            static constexpr std::uintptr_t bDisablePartialDestruction = 0x1F9;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"NotifyAddedIntoClusterUnion", 0xC8, "MulticastInlineDelegateProperty"},
            {"NotifyRemovedFromClusterUnion", 0xD8, "MulticastInlineDelegateProperty"},
            {"ContactDistance", 0x130, "FloatProperty"},
            {"bIsInGraph", 0x134, "BoolProperty"},
            {"GeometryCollectionsToIgnoreBreaksForConnectivity", 0x138, "ArrayProperty"},
            {"RootDoorComponentReferences", 0x148, "ArrayProperty"},
            {"DoorComponents", 0x158, "ArrayProperty"},
            {"bAreDoorsEjected", 0x168, "BoolProperty"},
            {"bAreDoorsEjectedInternal", 0x169, "BoolProperty"},
            {"GraphHandle", 0x170, "StructProperty"},
            {"bRootPlayspaceInitialized", 0x198, "BoolProperty"},
            {"bIsDebris", 0x199, "BoolProperty"},
            {"bHasBeenSaved", 0x19A, "BoolProperty"},
            {"AutomaticConnectionMethod", 0x19B, "EnumProperty"},
            {"CustomConnectionDirections", 0x1A0, "ArrayProperty"},
            {"bCanBeConnectedTo", 0x1B0, "BoolProperty"},
            {"bMustConnectToDynamic", 0x1B1, "BoolProperty"},
            {"bMustConnectToStatic", 0x1B2, "BoolProperty"},
            {"bForceIndependentlySupported", 0x1B3, "BoolProperty"},
            {"bForceWorldSupportWhenPotentialConnectionsAreNotFound", 0x1B4, "BoolProperty"},
            {"bAddToConnectivityGraphOnBeginPlay", 0x1B5, "BoolProperty"},
            {"bCanBeWorldSupported", 0x1B6, "BoolProperty"},
            {"ClassesThatAreAlwaysValidForWorldSupport", 0x1B8, "ArrayProperty"},
            {"OverlapMargin", 0x1C8, "StructProperty"},
            {"MinimumIslandSize", 0x1E0, "IntProperty"},
            {"AttachedToys", 0x1E8, "ArrayProperty"},
            {"bDisablePartialDestruction", 0x1F9, "BoolProperty"},
        }};
    };

    struct JunoConnectivityComponentBase
    {
        static constexpr std::string_view Name = "JunoConnectivityComponentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
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

    struct JunoConnectivityDataComponent
    {
        static constexpr std::string_view Name = "JunoConnectivityDataComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
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

    struct JunoConnectivityGraphPFWPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoConnectivityGraphPFWPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t SavedConnectivityData = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SavedConnectivityData", 0x68, "StructProperty"},
        }};
    };

    struct JunoConnectivityGraphPFW_Container
    {
        static constexpr std::string_view Name = "JunoConnectivityGraphPFW_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoConnectivityGraphPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoConnectivityGraphPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPlayspacePersistenceFeatureDataActor";
        struct Offsets
        {
            static constexpr std::uintptr_t SavedConnectivityData = 0x2E8;
            static constexpr std::uintptr_t CurrentSavedConnectivityData = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SavedConnectivityData", 0x2E8, "StructProperty"},
            {"CurrentSavedConnectivityData", 0x330, "StructProperty"},
        }};
    };

    struct JunoConnectivityGraphPersistenceFeatureDataInterface
    {
        static constexpr std::string_view Name = "JunoConnectivityGraphPersistenceFeatureDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoConnectivityGraphWorldSubsystem
    {
        static constexpr std::string_view Name = "JunoConnectivityGraphWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoConnectivityManagerComponent
    {
        static constexpr std::string_view Name = "JunoConnectivityManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsReady = 0xE1;
            static constexpr std::uintptr_t bIsNewPlayspace = 0xF8;
            static constexpr std::uintptr_t Graph = 0x100;
            static constexpr std::uintptr_t bIsGraphInReadOnlyMode = 0x108;
            static constexpr std::uintptr_t DebugDrawData = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsReady", 0xE1, "BoolProperty"},
            {"bIsNewPlayspace", 0xF8, "BoolProperty"},
            {"Graph", 0x100, "ObjectProperty"},
            {"bIsGraphInReadOnlyMode", 0x108, "BoolProperty"},
            {"DebugDrawData", 0x130, "StructProperty"},
        }};
    };

    struct JunoConnectivityRemovalFixupComponent
    {
        static constexpr std::string_view Name = "JunoConnectivityRemovalFixupComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
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

    struct JunoConnectivitySupportDataComponent
    {
        static constexpr std::string_view Name = "JunoConnectivitySupportDataComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoConnectivityDataComponent";
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

    struct JunoContentModerationPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoContentModerationPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t ModerationSaveData = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ModerationSaveData", 0x58, "StructProperty"},
        }};
    };

    struct JunoContentModerationPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoContentModerationPersistenceFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoContentModerationPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoContentModerationPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoContentModeration_GameStateComponent
    {
        static constexpr std::string_view Name = "JunoContentModeration_GameStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LFNContentModeration_GameStateComponent";
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

    struct JunoContextualMessageConfigCollection
    {
        static constexpr std::string_view Name = "JunoContextualMessageConfigCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SpecializedConfigs = 0x28;
            static constexpr std::uintptr_t GeneralConfig = 0x38;
            static constexpr std::uintptr_t GeneralConfigTableRow = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SpecializedConfigs", 0x28, "ArrayProperty"},
            {"GeneralConfig", 0x38, "StructProperty"},
            {"GeneralConfigTableRow", 0x48, "StructProperty"},
        }};
    };

    struct JunoContraptionSettings
    {
        static constexpr std::string_view Name = "JunoContraptionSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ToyActorClasses = 0x30;
            static constexpr std::uintptr_t ToyComponentClasses = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ToyActorClasses", 0x30, "ArrayProperty"},
            {"ToyComponentClasses", 0x40, "ArrayProperty"},
        }};
    };

    struct JunoControlChannelActorInterface
    {
        static constexpr std::string_view Name = "JunoControlChannelActorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoControlChannelComponent
    {
        static constexpr std::string_view Name = "JunoControlChannelComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnDetachedFromClusterUnion = 0xC0;
            static constexpr std::uintptr_t OnJunoChannelValueReceived = 0xD0;
            static constexpr std::uintptr_t OnJunoInputTypeReceived = 0xE0;
            static constexpr std::uintptr_t SourceClusterUnionActor = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnDetachedFromClusterUnion", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnJunoChannelValueReceived", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnJunoInputTypeReceived", 0xE0, "MulticastInlineDelegateProperty"},
            {"SourceClusterUnionActor", 0x160, "WeakObjectProperty"},
        }};
    };

    struct JunoControllerComponent
    {
        static constexpr std::string_view Name = "JunoControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPlayerSpawnedActorWithBuilderTool = 0x118;
            static constexpr std::uintptr_t OnOffhandInputPressed = 0x128;
            static constexpr std::uintptr_t OnOffhandInputReleased = 0x138;
            static constexpr std::uintptr_t EmptyHandItemDefinition = 0x158;
            static constexpr std::uintptr_t InteractionDistanceFromCamera = 0x160;
            static constexpr std::uintptr_t InteractionDistanceFromPlayer = 0x164;
            static constexpr std::uintptr_t BuilderToolPrimaryAsset = 0x168;
            static constexpr std::uintptr_t DeathChestActorClass = 0x170;
            static constexpr std::uintptr_t DeathChestNavFilterClass = 0x178;
            static constexpr std::uintptr_t DeathChestNavQuestyExtents = 0x180;
            static constexpr std::uintptr_t DeathChestZDistanceToCheck = 0x198;
            static constexpr std::uintptr_t CheckpointMarker = 0x1A0;
            static constexpr std::uintptr_t BlockCameraAssists = 0x2B0;
            static constexpr std::uintptr_t ItemToBuildGUID = 0x2D8;
            static constexpr std::uintptr_t ItemSelectedGuid = 0x308;
            static constexpr std::uintptr_t bSpawnedBackpack = 0x318;
            static constexpr std::uintptr_t BackpackSpawnLocation = 0x320;
            static constexpr std::uintptr_t InputComponent = 0x348;
            static constexpr std::uintptr_t CachedQuickBuildItem = 0x3D0;
            static constexpr std::uintptr_t OffhandComponent = 0x540;
            static constexpr std::uintptr_t CheckpointActorDestroyedHandle = 0x548;
            static constexpr std::uintptr_t PlayerCheckpoint = 0x568;
            static constexpr std::uintptr_t bIsModeratorModeEnabled = 0x5D8;
            static constexpr std::uintptr_t NonPermadeathTags = 0x5E0;
            static constexpr std::uintptr_t DeathTagsConsideredAsLogout = 0x5F0;
            static constexpr std::uintptr_t DeathMarker = 0x600;
        };

        inline static constexpr std::array<PropertyInfo, 26> Properties{{
            {"OnPlayerSpawnedActorWithBuilderTool", 0x118, "MulticastInlineDelegateProperty"},
            {"OnOffhandInputPressed", 0x128, "MulticastInlineDelegateProperty"},
            {"OnOffhandInputReleased", 0x138, "MulticastInlineDelegateProperty"},
            {"EmptyHandItemDefinition", 0x158, "ObjectProperty"},
            {"InteractionDistanceFromCamera", 0x160, "FloatProperty"},
            {"InteractionDistanceFromPlayer", 0x164, "FloatProperty"},
            {"BuilderToolPrimaryAsset", 0x168, "StructProperty"},
            {"DeathChestActorClass", 0x170, "ClassProperty"},
            {"DeathChestNavFilterClass", 0x178, "ClassProperty"},
            {"DeathChestNavQuestyExtents", 0x180, "StructProperty"},
            {"DeathChestZDistanceToCheck", 0x198, "FloatProperty"},
            {"CheckpointMarker", 0x1A0, "StructProperty"},
            {"BlockCameraAssists", 0x2B0, "StructProperty"},
            {"ItemToBuildGUID", 0x2D8, "StructProperty"},
            {"ItemSelectedGuid", 0x308, "StructProperty"},
            {"bSpawnedBackpack", 0x318, "BoolProperty"},
            {"BackpackSpawnLocation", 0x320, "StructProperty"},
            {"InputComponent", 0x348, "ObjectProperty"},
            {"CachedQuickBuildItem", 0x3D0, "ObjectProperty"},
            {"OffhandComponent", 0x540, "ObjectProperty"},
            {"CheckpointActorDestroyedHandle", 0x548, "StructProperty"},
            {"PlayerCheckpoint", 0x568, "StructProperty"},
            {"bIsModeratorModeEnabled", 0x5D8, "BoolProperty"},
            {"NonPermadeathTags", 0x5E0, "ArrayProperty"},
            {"DeathTagsConsideredAsLogout", 0x5F0, "ArrayProperty"},
            {"DeathMarker", 0x600, "StructProperty"},
        }};
    };

    struct JunoControllerComponent_AFKHandler
    {
        static constexpr std::string_view Name = "JunoControllerComponent_AFKHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent_AFKHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t AFKEventsDataTable = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AFKEventsDataTable", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoControllerComponent_AccountItemsUnlock
    {
        static constexpr std::string_view Name = "JunoControllerComponent_AccountItemsUnlock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnAccountItemUnlocked = 0xC8;
            static constexpr std::uintptr_t ApprovedAccountUnlocks = 0xD8;
            static constexpr std::uintptr_t ServerUnlockedItemsCache = 0x100;
            static constexpr std::uintptr_t McpOwnershipTags = 0x130;
            static constexpr std::uintptr_t OnAccountTagsChanged = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnAccountItemUnlocked", 0xC8, "MulticastInlineDelegateProperty"},
            {"ApprovedAccountUnlocks", 0xD8, "ObjectProperty"},
            {"ServerUnlockedItemsCache", 0x100, "ArrayProperty"},
            {"McpOwnershipTags", 0x130, "StructProperty"},
            {"OnAccountTagsChanged", 0x160, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoControllerComponent_ActiveEffects
    {
        static constexpr std::string_view Name = "JunoControllerComponent_ActiveEffects";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct JunoControllerComponent_BedAssignmentNetworkEvents
    {
        static constexpr std::string_view Name = "JunoControllerComponent_BedAssignmentNetworkEvents";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedCharacterData = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedCharacterData", 0xE0, "StructProperty"},
        }};
    };

    struct JunoControllerComponent_ControlChannelNetworkEvents
    {
        static constexpr std::string_view Name = "JunoControllerComponent_ControlChannelNetworkEvents";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct JunoControllerComponent_ConversationHistory
    {
        static constexpr std::string_view Name = "JunoControllerComponent_ConversationHistory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent_ConversationHistory";
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

    struct JunoControllerComponent_CraftingNetworkEvents
    {
        static constexpr std::string_view Name = "JunoControllerComponent_CraftingNetworkEvents";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorsToUpgrade = 0xC8;
            static constexpr std::uintptr_t LastUpgradedActor = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActorsToUpgrade", 0xC8, "ArrayProperty"},
            {"LastUpgradedActor", 0xE8, "WeakObjectProperty"},
        }};
    };

    struct JunoControllerComponent_CraftingObject
    {
        static constexpr std::string_view Name = "JunoControllerComponent_CraftingObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct JunoControllerComponent_ItemLoader
    {
        static constexpr std::string_view Name = "JunoControllerComponent_ItemLoader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct JunoControllerComponent_Loading
    {
        static constexpr std::string_view Name = "JunoControllerComponent_Loading";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PollIntervalSeconds = 0xC8;
            static constexpr std::uintptr_t ReadinessCheckDelaySeconds = 0xCC;
            static constexpr std::uintptr_t PlayspaceSearchBoxExtent = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PollIntervalSeconds", 0xC8, "FloatProperty"},
            {"ReadinessCheckDelaySeconds", 0xCC, "FloatProperty"},
            {"PlayspaceSearchBoxExtent", 0xD0, "StructProperty"},
        }};
    };

    struct JunoControllerComponent_MapMarker
    {
        static constexpr std::string_view Name = "JunoControllerComponent_MapMarker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NonCampSettingNames = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NonCampSettingNames", 0xE0, "SetProperty"},
        }};
    };

    struct JunoControllerComponent_ProfanityCheck
    {
        static constexpr std::string_view Name = "JunoControllerComponent_ProfanityCheck";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct JunoControllerComponent_SocialSim
    {
        static constexpr std::string_view Name = "JunoControllerComponent_SocialSim";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct JunoControllerComponent_SocialSimAI
    {
        static constexpr std::string_view Name = "JunoControllerComponent_SocialSimAI";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct JunoControllerComponent_StreamingSources
    {
        static constexpr std::string_view Name = "JunoControllerComponent_StreamingSources";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FNDynamicStreamingSourceComponent";
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

    struct JunoControllerComponent_ToyCustomization
    {
        static constexpr std::string_view Name = "JunoControllerComponent_ToyCustomization";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct JunoControllerRequirement
    {
        static constexpr std::string_view Name = "JunoControllerRequirement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t bInverseCondition = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bInverseCondition", 0x28, "BoolProperty"},
        }};
    };

    struct JunoControllerRequirement_CampResidentsHaveTag
    {
        static constexpr std::string_view Name = "JunoControllerRequirement_CampResidentsHaveTag";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoControllerRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t RoleTagToValidate = 0x30;
            static constexpr std::uintptr_t UniqueIdentifierTagToValidate = 0x34;
            static constexpr std::uintptr_t bIncludeSpeakingNpcInQueries = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RoleTagToValidate", 0x30, "StructProperty"},
            {"UniqueIdentifierTagToValidate", 0x34, "StructProperty"},
            {"bIncludeSpeakingNpcInQueries", 0x38, "BoolProperty"},
        }};
    };

    struct JunoControllerRequirement_HasCompletedNumQuestObjectives
    {
        static constexpr std::string_view Name = "JunoControllerRequirement_HasCompletedNumQuestObjectives";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestDefinition = 0x30;
            static constexpr std::uintptr_t RequiredCount = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"QuestDefinition", 0x30, "StructProperty"},
            {"RequiredCount", 0x48, "StructProperty"},
        }};
    };

    struct JunoControllerRequirement_HasCompletedQuestObjective
    {
        static constexpr std::string_view Name = "JunoControllerRequirement_HasCompletedQuestObjective";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestDefinition = 0x30;
            static constexpr std::uintptr_t ObjectiveBackendName = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"QuestDefinition", 0x30, "StructProperty"},
            {"ObjectiveBackendName", 0x48, "NameProperty"},
        }};
    };

    struct JunoControllerRequirement_HasConversationTag
    {
        static constexpr std::string_view Name = "JunoControllerRequirement_HasConversationTag";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t ConversationTagQuery = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConversationTagQuery", 0x30, "StructProperty"},
        }};
    };

    struct JunoControllerRequirement_HasEntryTag
    {
        static constexpr std::string_view Name = "JunoControllerRequirement_HasEntryTag";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t QueryTag = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QueryTag", 0x30, "StructProperty"},
        }};
    };

    struct JunoControllerRequirement_HasLostAndFoundInventory
    {
        static constexpr std::string_view Name = "JunoControllerRequirement_HasLostAndFoundInventory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoControllerRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t bInverseCondition = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bInverseCondition", 0x28, "BoolProperty"},
        }};
    };

    struct JunoControllerRequirement_HasReceivedDirectReward
    {
        static constexpr std::string_view Name = "JunoControllerRequirement_HasReceivedDirectReward";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoControllerRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t bSinceLastDailyQuestReset = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bSinceLastDailyQuestReset", 0x30, "BoolProperty"},
        }};
    };

    struct JunoControllerRequirement_IsFirstConversationWithNPC
    {
        static constexpr std::string_view Name = "JunoControllerRequirement_IsFirstConversationWithNPC";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoControllerRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t bInverseCondition = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bInverseCondition", 0x28, "BoolProperty"},
        }};
    };

    struct JunoControllerRequirement_IsFollowingAnotherPlayer
    {
        static constexpr std::string_view Name = "JunoControllerRequirement_IsFollowingAnotherPlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoControllerRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t bInverseCondition = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bInverseCondition", 0x28, "BoolProperty"},
        }};
    };

    struct JunoControllerRequirement_IsGeneratingResourcesAndEmpty
    {
        static constexpr std::string_view Name = "JunoControllerRequirement_IsGeneratingResourcesAndEmpty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoControllerRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t bRequiresGeneratedPercentageWhenNoLootGenerated = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bRequiresGeneratedPercentageWhenNoLootGenerated", 0x30, "BoolProperty"},
        }};
    };

    struct JunoControllerRequirement_IsQuestActive
    {
        static constexpr std::string_view Name = "JunoControllerRequirement_IsQuestActive";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestDefinition = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuestDefinition", 0x30, "StructProperty"},
        }};
    };

    struct JunoControllerRequirement_MerchantHasStock
    {
        static constexpr std::string_view Name = "JunoControllerRequirement_MerchantHasStock";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoControllerRequirement";
        struct Offsets
        {
            static constexpr std::uintptr_t bInverseCondition = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bInverseCondition", 0x28, "BoolProperty"},
        }};
    };

    struct JunoConversationRequirementDatabase
    {
        static constexpr std::string_view Name = "JunoConversationRequirementDatabase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ConversationRequirementMappingData = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConversationRequirementMappingData", 0x118, "ObjectProperty"},
        }};
    };

    struct JunoConversationRequirementMappings
    {
        static constexpr std::string_view Name = "JunoConversationRequirementMappings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ConversationRequirementMappings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConversationRequirementMappings", 0x28, "MapProperty"},
        }};
    };

    struct JunoConversationRequirement_NearestCampWorldCondition
    {
        static constexpr std::string_view Name = "JunoConversationRequirement_NearestCampWorldCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ConversationRequirementNode";
        struct Offsets
        {
            static constexpr std::uintptr_t CampSlot = 0x58;
            static constexpr std::uintptr_t MaxDistanceFromCamp = 0x60;
            static constexpr std::uintptr_t Conditions = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CampSlot", 0x58, "IntProperty"},
            {"MaxDistanceFromCamp", 0x60, "StructProperty"},
            {"Conditions", 0x88, "StructProperty"},
        }};
    };

    struct JunoConversationRequirement_NearestCampWorldConditionSchema
    {
        static constexpr std::string_view Name = "JunoConversationRequirement_NearestCampWorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct JunoConversationTaskNode_ActivateVisitor
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_ActivateVisitor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode_Service";
        struct Offsets
        {
            static constexpr std::uintptr_t ResourceCurrency = 0x170;
            static constexpr std::uintptr_t PricingTables = 0x178;
            static constexpr std::uintptr_t bPriceDiscountsEnabled = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ResourceCurrency", 0x170, "ObjectProperty"},
            {"PricingTables", 0x178, "ArrayProperty"},
            {"bPriceDiscountsEnabled", 0x188, "BoolProperty"},
        }};
    };

    struct JunoConversationTaskNode_AddPoiMarker
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_AddPoiMarker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorTypeIdentifier = 0x170;
            static constexpr std::uintptr_t PoiTagQuery = 0x178;
            static constexpr std::uintptr_t Mode = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActorTypeIdentifier", 0x170, "StructProperty"},
            {"PoiTagQuery", 0x178, "StructProperty"},
            {"Mode", 0x1C0, "EnumProperty"},
        }};
    };

    struct JunoConversationTaskNode_CampFollowerAssignment
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_CampFollowerAssignment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode_Service";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableFollower = 0x190;
            static constexpr std::uintptr_t bCampRecruitment = 0x191;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bEnableFollower", 0x190, "BoolProperty"},
            {"bCampRecruitment", 0x191, "BoolProperty"},
        }};
    };

    struct JunoConversationTaskNode_CampJobAssignment
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_CampJobAssignment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode_Service";
        struct Offsets
        {
            static constexpr std::uintptr_t JobTag = 0x190;
            static constexpr std::uintptr_t bRemoveJob = 0x194;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"JobTag", 0x190, "StructProperty"},
            {"bRemoveJob", 0x194, "BoolProperty"},
        }};
    };

    struct JunoConversationTaskNode_CampRecruitment
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_CampRecruitment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode_Service";
        struct Offsets
        {
            static constexpr std::uintptr_t ResourceCurrency = 0x170;
            static constexpr std::uintptr_t PricingTables = 0x178;
            static constexpr std::uintptr_t bPriceDiscountsEnabled = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ResourceCurrency", 0x170, "ObjectProperty"},
            {"PricingTables", 0x178, "ArrayProperty"},
            {"bPriceDiscountsEnabled", 0x188, "BoolProperty"},
        }};
    };

    struct JunoConversationTaskNode_CompleteQuestObjective
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_CompleteQuestObjective";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestToProgress = 0x170;
            static constexpr std::uintptr_t ObjectiveBackendName = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"QuestToProgress", 0x170, "SoftObjectProperty"},
            {"ObjectiveBackendName", 0x190, "NameProperty"},
        }};
    };

    struct JunoConversationTaskNode_DiscoverBusStop
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_DiscoverBusStop";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t MaximumBusStopDistance = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaximumBusStopDistance", 0x170, "DoubleProperty"},
        }};
    };

    struct JunoConversationTaskNode_GetResource
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_GetResource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode_Service";
        struct Offsets
        {
            static constexpr std::uintptr_t ResourceSlot = 0x190;
            static constexpr std::uintptr_t GetTextFormat = 0x198;
            static constexpr std::uintptr_t FinishedTextFormat = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ResourceSlot", 0x190, "IntProperty"},
            {"GetTextFormat", 0x198, "TextProperty"},
            {"FinishedTextFormat", 0x1A8, "TextProperty"},
        }};
    };

    struct JunoConversationTaskNode_GiftNPC
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_GiftNPC";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t GiftTextFormat = 0x170;
            static constexpr std::uintptr_t MaxChoiceNodesToGenerate = 0x180;
            static constexpr std::uintptr_t InventoryGroupTypesToPickItemsFrom = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GiftTextFormat", 0x170, "TextProperty"},
            {"MaxChoiceNodesToGenerate", 0x180, "IntProperty"},
            {"InventoryGroupTypesToPickItemsFrom", 0x188, "ArrayProperty"},
        }};
    };

    struct JunoConversationTaskNode_GrantAwesomePoints
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_GrantAwesomePoints";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t AwesomeInteractionTag = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AwesomeInteractionTag", 0x170, "StructProperty"},
        }};
    };

    struct JunoConversationTaskNode_GrantDirectReward
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_GrantDirectReward";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoConversationTaskNode_GrantDirectRewardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RewardsToGive = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RewardsToGive", 0x1B0, "ArrayProperty"},
        }};
    };

    struct JunoConversationTaskNode_GrantDirectRewardBase
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_GrantDirectRewardBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode_Service";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextualAnimScene = 0x190;
            static constexpr std::uintptr_t ContextualAnimAbilityTag = 0x198;
            static constexpr std::uintptr_t bContinueIfNoLoot = 0x19C;
            static constexpr std::uintptr_t MaxRewardsToGrant = 0x1A0;
            static constexpr std::uintptr_t RandomSeedMode = 0x1A4;
            static constexpr std::uintptr_t CategoryTag = 0x1A8;
            static constexpr std::uintptr_t CooldownConfigRegistry = 0x1AC;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ContextualAnimScene", 0x190, "ObjectProperty"},
            {"ContextualAnimAbilityTag", 0x198, "StructProperty"},
            {"bContinueIfNoLoot", 0x19C, "BoolProperty"},
            {"MaxRewardsToGrant", 0x1A0, "IntProperty"},
            {"RandomSeedMode", 0x1A4, "EnumProperty"},
            {"CategoryTag", 0x1A8, "StructProperty"},
            {"CooldownConfigRegistry", 0x1AC, "StructProperty"},
        }};
    };

    struct JunoConversationTaskNode_GrantLostAndFoundItem
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_GrantLostAndFoundItem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode_Service";
        struct Offsets
        {
            static constexpr std::uintptr_t DropTextFormat = 0x190;
            static constexpr std::uintptr_t DropAllTextFormat = 0x1A0;
            static constexpr std::uintptr_t MaxChoiceNodesToGenerate = 0x1B0;
            static constexpr std::uintptr_t ContinueConversationMode = 0x1B4;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DropTextFormat", 0x190, "TextProperty"},
            {"DropAllTextFormat", 0x1A0, "TextProperty"},
            {"MaxChoiceNodesToGenerate", 0x1B0, "IntProperty"},
            {"ContinueConversationMode", 0x1B4, "EnumProperty"},
        }};
    };

    struct JunoConversationTaskNode_GrantNPCCampReward
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_GrantNPCCampReward";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode_Service";
        struct Offsets
        {
            static constexpr std::uintptr_t ResourceCurrency = 0x170;
            static constexpr std::uintptr_t PricingTables = 0x178;
            static constexpr std::uintptr_t bPriceDiscountsEnabled = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ResourceCurrency", 0x170, "ObjectProperty"},
            {"PricingTables", 0x178, "ArrayProperty"},
            {"bPriceDiscountsEnabled", 0x188, "BoolProperty"},
        }};
    };

    struct JunoConversationTaskNode_GrantNPCDirectReward
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_GrantNPCDirectReward";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoConversationTaskNode_GrantDirectRewardBase";
        struct Offsets
        {
            static constexpr std::uintptr_t RewardRegistry = 0x1B0;
            static constexpr std::uintptr_t bPickAllMatchingRewards = 0x1B4;
            static constexpr std::uintptr_t RewardNames = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RewardRegistry", 0x1B0, "StructProperty"},
            {"bPickAllMatchingRewards", 0x1B4, "BoolProperty"},
            {"RewardNames", 0x1B8, "ArrayProperty"},
        }};
    };

    struct JunoConversationTaskNode_GrantQuest
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_GrantQuest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestToGrant = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuestToGrant", 0x170, "SoftObjectProperty"},
        }};
    };

    struct JunoConversationTaskNode_MarkFirstConversationComplete
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_MarkFirstConversationComplete";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeTags = 0x80;
            static constexpr std::uintptr_t NodeType = 0xA0;
            static constexpr std::uintptr_t DefaultDisplayAsset = 0xB0;
            static constexpr std::uintptr_t SoftTaskIcon = 0xD0;
            static constexpr std::uintptr_t ChoiceSound = 0xF0;
            static constexpr std::uintptr_t HoverChoiceSound = 0x110;
            static constexpr std::uintptr_t BriefWidgetClassOverride = 0x130;
            static constexpr std::uintptr_t SelectionWidgetClass = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"NodeTags", 0x80, "StructProperty"},
            {"NodeType", 0xA0, "StrProperty"},
            {"DefaultDisplayAsset", 0xB0, "SoftObjectProperty"},
            {"SoftTaskIcon", 0xD0, "SoftObjectProperty"},
            {"ChoiceSound", 0xF0, "SoftObjectProperty"},
            {"HoverChoiceSound", 0x110, "SoftObjectProperty"},
            {"BriefWidgetClassOverride", 0x130, "SoftClassProperty"},
            {"SelectionWidgetClass", 0x150, "SoftClassProperty"},
        }};
    };

    struct JunoConversationTaskNode_NukeVillager
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_NukeVillager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode_Service";
        struct Offsets
        {
            static constexpr std::uintptr_t ResourceCurrency = 0x170;
            static constexpr std::uintptr_t PricingTables = 0x178;
            static constexpr std::uintptr_t bPriceDiscountsEnabled = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ResourceCurrency", 0x170, "ObjectProperty"},
            {"PricingTables", 0x178, "ArrayProperty"},
            {"bPriceDiscountsEnabled", 0x188, "BoolProperty"},
        }};
    };

    struct JunoConversationTaskNode_RemoteCampRecruitment
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_RemoteCampRecruitment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode_Service";
        struct Offsets
        {
            static constexpr std::uintptr_t JoinCampTextFormat = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JoinCampTextFormat", 0x190, "TextProperty"},
        }};
    };

    struct JunoConversationTaskNode_RemovePoiMarker
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_RemovePoiMarker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorTypeIdentifier = 0x170;
            static constexpr std::uintptr_t PoiTagQuery = 0x178;
            static constexpr std::uintptr_t Mode = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ActorTypeIdentifier", 0x170, "StructProperty"},
            {"PoiTagQuery", 0x178, "StructProperty"},
            {"Mode", 0x1C0, "EnumProperty"},
        }};
    };

    struct JunoConversationTaskNode_Speech
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_Speech";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t MetaIdentifier_Animations = 0x170;
            static constexpr std::uintptr_t SpeakerTag = 0x180;
            static constexpr std::uintptr_t ListenerTag = 0x184;
            static constexpr std::uintptr_t DefaultMoodReactionTag = 0x188;
            static constexpr std::uintptr_t StyledParticipantNameFormat = 0x190;
            static constexpr std::uintptr_t bUseInlineConfig = 0x1A0;
            static constexpr std::uintptr_t ExternalContextualMessageCollection = 0x1A8;
            static constexpr std::uintptr_t SpecializedConfigs = 0x1B0;
            static constexpr std::uintptr_t GeneralConfig = 0x1C0;
            static constexpr std::uintptr_t GeneralConfigTableRow = 0x1D0;
            static constexpr std::uintptr_t SequentialDialogueTag = 0x1E0;
            static constexpr std::uintptr_t SequentialDialogueRegistry = 0x1E4;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"MetaIdentifier_Animations", 0x170, "StrProperty"},
            {"SpeakerTag", 0x180, "StructProperty"},
            {"ListenerTag", 0x184, "StructProperty"},
            {"DefaultMoodReactionTag", 0x188, "StructProperty"},
            {"StyledParticipantNameFormat", 0x190, "TextProperty"},
            {"bUseInlineConfig", 0x1A0, "BoolProperty"},
            {"ExternalContextualMessageCollection", 0x1A8, "ObjectProperty"},
            {"SpecializedConfigs", 0x1B0, "ArrayProperty"},
            {"GeneralConfig", 0x1C0, "StructProperty"},
            {"GeneralConfigTableRow", 0x1D0, "StructProperty"},
            {"SequentialDialogueTag", 0x1E0, "StructProperty"},
            {"SequentialDialogueRegistry", 0x1E4, "StructProperty"},
        }};
    };

    struct JunoConversationTaskNode_StaticTeleportRequest
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_StaticTeleportRequest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t TeleportLocation = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TeleportLocation", 0x170, "NameProperty"},
        }};
    };

    struct JunoConversationTaskNode_TagCurrentConversation
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_TagCurrentConversation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t TagsToApply = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TagsToApply", 0x170, "StructProperty"},
        }};
    };

    struct JunoConversationTaskNode_TradeWithMerchant
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_TradeWithMerchant";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t TradeTextFormat = 0x170;
            static constexpr std::uintptr_t NotEnoughForTradeTextFormat = 0x180;
            static constexpr std::uintptr_t MaxChoiceNodesToGenerate = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TradeTextFormat", 0x170, "TextProperty"},
            {"NotEnoughForTradeTextFormat", 0x180, "TextProperty"},
            {"MaxChoiceNodesToGenerate", 0x190, "IntProperty"},
        }};
    };

    struct JunoConversationTaskNode_TurnInQuest
    {
        static constexpr std::string_view Name = "JunoConversationTaskNode_TurnInQuest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortConversationTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestToTurnIn = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuestToTurnIn", 0x170, "SoftObjectProperty"},
        }};
    };

    struct JunoCoreMutators
    {
        static constexpr std::string_view Name = "JunoCoreMutators";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPawnLoaded = 0x2F0;
            static constexpr std::uintptr_t OnClientInitialLoadingFinished = 0x300;
            static constexpr std::uintptr_t DBNOReviveTime = 0x310;
            static constexpr std::uintptr_t bIsJunoPlayspaceReady = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnPawnLoaded", 0x2F0, "MulticastInlineDelegateProperty"},
            {"OnClientInitialLoadingFinished", 0x300, "MulticastInlineDelegateProperty"},
            {"DBNOReviveTime", 0x310, "StructProperty"},
            {"bIsJunoPlayspaceReady", 0x338, "BoolProperty"},
        }};
    };

    struct JunoCosmeticAlterationComponent
    {
        static constexpr std::string_view Name = "JunoCosmeticAlterationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseAlteration = 0xC0;
            static constexpr std::uintptr_t ActiveAlterations = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BaseAlteration", 0xC0, "ObjectProperty"},
            {"ActiveAlterations", 0xC8, "ArrayProperty"},
        }};
    };

    struct JunoCraftingAnalytics
    {
        static constexpr std::string_view Name = "JunoCraftingAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCraftingGameplayAbility
    {
        static constexpr std::string_view Name = "JunoCraftingGameplayAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t ActivationType = 0x3A8;
            static constexpr std::uintptr_t EffectContainers = 0x3B0;
            static constexpr std::uintptr_t GameplayEffectContainers = 0x748;
            static constexpr std::uintptr_t DynamicGameplayEffectContainers = 0x758;
            static constexpr std::uintptr_t OwnerPreviewImageOverrideTags = 0x768;
            static constexpr std::uintptr_t ProjectileClass = 0x788;
            static constexpr std::uintptr_t bAllowBlueprintReplicatedVariables = 0x790;
            static constexpr std::uintptr_t DamageStatHandle = 0x798;
            static constexpr std::uintptr_t AbilityCosts = 0x7A8;
            static constexpr std::uintptr_t Costs = 0x7B8;
            static constexpr std::uintptr_t bApplyingCostsEnabled = 0x7C8;
            static constexpr std::uintptr_t bShowWidgetForCosts = 0x7C8;
            static constexpr std::uintptr_t MovementCancellationLeashLength = 0x7D0;
            static constexpr std::uintptr_t ExplicitCooldownDuration = 0x7F8;
            static constexpr std::uintptr_t ExplicitCooldownTags = 0x820;
            static constexpr std::uintptr_t ExplicitCooldownAssetTags = 0x840;
            static constexpr std::uintptr_t CustomFiringSequenceLength = 0x860;
            static constexpr std::uintptr_t bDisableMoveCombining = 0x864;
            static constexpr std::uintptr_t bIgnoreClientActivationAttempts = 0x864;
            static constexpr std::uintptr_t bPersistOnDeath = 0x864;
            static constexpr std::uintptr_t bRequireServerTimeValidationPass = 0x864;
            static constexpr std::uintptr_t bRequireServerValidationPass = 0x864;
            static constexpr std::uintptr_t bStartWithCooldown = 0x864;
            static constexpr std::uintptr_t bStopsAIBehaviorLogic = 0x864;
            static constexpr std::uintptr_t bStopsAIMovement = 0x864;
            static constexpr std::uintptr_t bForceNormalAILOD = 0x865;
            static constexpr std::uintptr_t bStopsRVOAvoidance = 0x865;
            static constexpr std::uintptr_t MinimumRequiredAILODLevel = 0x868;
            static constexpr std::uintptr_t bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests = 0x86C;
            static constexpr std::uintptr_t bAcceptTargetActorVehicleForCanHitTests = 0x86C;
            static constexpr std::uintptr_t bRelevantForAIDespawning = 0x86C;
            static constexpr std::uintptr_t bUseOwnerInstigatorAsInstigator = 0x86C;
            static constexpr std::uintptr_t bUseTetheredPawnAsInstigator = 0x86C;
            static constexpr std::uintptr_t bUseAIFireLocationAndRotation = 0x86D;
            static constexpr std::uintptr_t AIWeaponUsage = 0x870;
            static constexpr std::uintptr_t WeaponTestApplicationTag = 0x874;
            static constexpr std::uintptr_t bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling = 0x878;
            static constexpr std::uintptr_t bCanHitIgnoresNonzeroTranslationOffsetsForNavigationRaycast = 0x878;
            static constexpr std::uintptr_t bVerifyFireOffsetIsNotObstructedByWorldGeometry = 0x878;
            static constexpr std::uintptr_t FireOffset = 0x880;
            static constexpr std::uintptr_t ActivationNoiseRange = 0x898;
            static constexpr std::uintptr_t ImpactNoiseRange = 0x89C;
            static constexpr std::uintptr_t ActivationNoiseLoudness = 0x8A0;
            static constexpr std::uintptr_t ImpactNoiseLoudness = 0x8A4;
            static constexpr std::uintptr_t ProhibitedTargetTags = 0x8A8;
            static constexpr std::uintptr_t bLeadPawnTargets = 0x8C9;
            static constexpr std::uintptr_t DesiredThrowAngle = 0x8CC;
            static constexpr std::uintptr_t MaxYawAngleToFire = 0x8D0;
            static constexpr std::uintptr_t bClampMaxYawAngleToFire = 0x8D4;
            static constexpr std::uintptr_t bUseTargetActorLocation = 0x8D5;
            static constexpr std::uintptr_t InitialAccuracyMax = 0x8D8;
            static constexpr std::uintptr_t InitialAccuracyMin = 0x8DC;
            static constexpr std::uintptr_t TargetAccuracyMax = 0x8E0;
            static constexpr std::uintptr_t TargetAccuracyMin = 0x8E4;
            static constexpr std::uintptr_t MinAccuracyDistance = 0x8E8;
            static constexpr std::uintptr_t MaxAccuracyDistance = 0x8EC;
            static constexpr std::uintptr_t AccuracyDistanceMultiplier = 0x8F0;
            static constexpr std::uintptr_t NumUsesToReachTargetAccuracy = 0x8F4;
            static constexpr std::uintptr_t UseCount = 0x8F8;
            static constexpr std::uintptr_t bIsMobileToggle = 0x8FC;
            static constexpr std::uintptr_t bActivateIfTagsAlreadyPresent = 0x8FD;
            static constexpr std::uintptr_t GameplayAbilityBehaviorDistanceData = 0x908;
            static constexpr std::uintptr_t MontageInfo = 0x978;
            static constexpr std::uintptr_t PreviousMontageInfo = 0x9D0;
            static constexpr std::uintptr_t ModList = 0xA28;
            static constexpr std::uintptr_t AbilityWeapon = 0xA38;
            static constexpr std::uintptr_t DisplayName = 0xA40;
            static constexpr std::uintptr_t Description = 0xA50;
            static constexpr std::uintptr_t SmallPreviewImageOverride = 0xA68;
            static constexpr std::uintptr_t ChargeStartTime = 0xA80;
            static constexpr std::uintptr_t ChargeState = 0xA88;
            static constexpr std::uintptr_t ToolTip = 0xAD0;
            static constexpr std::uintptr_t StatList = 0xAD8;
            static constexpr std::uintptr_t ActorTrackingSettings = 0xAE8;
            static constexpr std::uintptr_t AnalyticsTags = 0xB10;
            static constexpr std::uintptr_t TagChangedActions = 0xB30;
        };

        inline static constexpr std::array<PropertyInfo, 76> Properties{{
            {"ActivationType", 0x3A8, "EnumProperty"},
            {"EffectContainers", 0x3B0, "StructProperty"},
            {"GameplayEffectContainers", 0x748, "ArrayProperty"},
            {"DynamicGameplayEffectContainers", 0x758, "MapProperty"},
            {"OwnerPreviewImageOverrideTags", 0x768, "StructProperty"},
            {"ProjectileClass", 0x788, "ClassProperty"},
            {"bAllowBlueprintReplicatedVariables", 0x790, "BoolProperty"},
            {"DamageStatHandle", 0x798, "StructProperty"},
            {"AbilityCosts", 0x7A8, "ArrayProperty"},
            {"Costs", 0x7B8, "ArrayProperty"},
            {"bApplyingCostsEnabled", 0x7C8, "BoolProperty"},
            {"bShowWidgetForCosts", 0x7C8, "BoolProperty"},
            {"MovementCancellationLeashLength", 0x7D0, "StructProperty"},
            {"ExplicitCooldownDuration", 0x7F8, "StructProperty"},
            {"ExplicitCooldownTags", 0x820, "StructProperty"},
            {"ExplicitCooldownAssetTags", 0x840, "StructProperty"},
            {"CustomFiringSequenceLength", 0x860, "ByteProperty"},
            {"bDisableMoveCombining", 0x864, "BoolProperty"},
            {"bIgnoreClientActivationAttempts", 0x864, "BoolProperty"},
            {"bPersistOnDeath", 0x864, "BoolProperty"},
            {"bRequireServerTimeValidationPass", 0x864, "BoolProperty"},
            {"bRequireServerValidationPass", 0x864, "BoolProperty"},
            {"bStartWithCooldown", 0x864, "BoolProperty"},
            {"bStopsAIBehaviorLogic", 0x864, "BoolProperty"},
            {"bStopsAIMovement", 0x864, "BoolProperty"},
            {"bForceNormalAILOD", 0x865, "BoolProperty"},
            {"bStopsRVOAvoidance", 0x865, "BoolProperty"},
            {"MinimumRequiredAILODLevel", 0x868, "EnumProperty"},
            {"bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests", 0x86C, "BoolProperty"},
            {"bAcceptTargetActorVehicleForCanHitTests", 0x86C, "BoolProperty"},
            {"bRelevantForAIDespawning", 0x86C, "BoolProperty"},
            {"bUseOwnerInstigatorAsInstigator", 0x86C, "BoolProperty"},
            {"bUseTetheredPawnAsInstigator", 0x86C, "BoolProperty"},
            {"bUseAIFireLocationAndRotation", 0x86D, "BoolProperty"},
            {"AIWeaponUsage", 0x870, "EnumProperty"},
            {"WeaponTestApplicationTag", 0x874, "StructProperty"},
            {"bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling", 0x878, "BoolProperty"},
            {"bCanHitIgnoresNonzeroTranslationOffsetsForNavigationRaycast", 0x878, "BoolProperty"},
            {"bVerifyFireOffsetIsNotObstructedByWorldGeometry", 0x878, "BoolProperty"},
            {"FireOffset", 0x880, "StructProperty"},
            {"ActivationNoiseRange", 0x898, "FloatProperty"},
            {"ImpactNoiseRange", 0x89C, "FloatProperty"},
            {"ActivationNoiseLoudness", 0x8A0, "FloatProperty"},
            {"ImpactNoiseLoudness", 0x8A4, "FloatProperty"},
            {"ProhibitedTargetTags", 0x8A8, "StructProperty"},
            {"bLeadPawnTargets", 0x8C9, "BoolProperty"},
            {"DesiredThrowAngle", 0x8CC, "FloatProperty"},
            {"MaxYawAngleToFire", 0x8D0, "FloatProperty"},
            {"bClampMaxYawAngleToFire", 0x8D4, "BoolProperty"},
            {"bUseTargetActorLocation", 0x8D5, "BoolProperty"},
            {"InitialAccuracyMax", 0x8D8, "FloatProperty"},
            {"InitialAccuracyMin", 0x8DC, "FloatProperty"},
            {"TargetAccuracyMax", 0x8E0, "FloatProperty"},
            {"TargetAccuracyMin", 0x8E4, "FloatProperty"},
            {"MinAccuracyDistance", 0x8E8, "FloatProperty"},
            {"MaxAccuracyDistance", 0x8EC, "FloatProperty"},
            {"AccuracyDistanceMultiplier", 0x8F0, "FloatProperty"},
            {"NumUsesToReachTargetAccuracy", 0x8F4, "IntProperty"},
            {"UseCount", 0x8F8, "IntProperty"},
            {"bIsMobileToggle", 0x8FC, "BoolProperty"},
            {"bActivateIfTagsAlreadyPresent", 0x8FD, "BoolProperty"},
            {"GameplayAbilityBehaviorDistanceData", 0x908, "ArrayProperty"},
            {"MontageInfo", 0x978, "StructProperty"},
            {"PreviousMontageInfo", 0x9D0, "StructProperty"},
            {"ModList", 0xA28, "ArrayProperty"},
            {"AbilityWeapon", 0xA38, "ObjectProperty"},
            {"DisplayName", 0xA40, "TextProperty"},
            {"Description", 0xA50, "TextProperty"},
            {"SmallPreviewImageOverride", 0xA68, "ObjectProperty"},
            {"ChargeStartTime", 0xA80, "FloatProperty"},
            {"ChargeState", 0xA88, "EnumProperty"},
            {"ToolTip", 0xAD0, "ClassProperty"},
            {"StatList", 0xAD8, "ObjectProperty"},
            {"ActorTrackingSettings", 0xAE8, "StructProperty"},
            {"AnalyticsTags", 0xB10, "StructProperty"},
            {"TagChangedActions", 0xB30, "ArrayProperty"},
        }};
    };

    struct JunoCraftingInventoryComponent
    {
        static constexpr std::string_view Name = "JunoCraftingInventoryComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoInventoryComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnInventoryDataRestored = 0xD0;
            static constexpr std::uintptr_t bShouldAcquireInventoryOnInitialize = 0xF8;
            static constexpr std::uintptr_t InventoryConfig = 0x100;
            static constexpr std::uintptr_t TypeTags = 0x118;
            static constexpr std::uintptr_t InventoryLootTierGroup = 0x138;
            static constexpr std::uintptr_t bCanEverBeCraftingSource = 0x13C;
            static constexpr std::uintptr_t bEnabledAsCraftingSource = 0x13C;
            static constexpr std::uintptr_t bShouldDropContentsOnOwnerDeath = 0x13C;
            static constexpr std::uintptr_t bShouldOpenInventoryMenu = 0x13C;
            static constexpr std::uintptr_t OnEnabledAsCraftingSourceDelegate = 0x140;
            static constexpr std::uintptr_t LootTossSpeed = 0x150;
            static constexpr std::uintptr_t LootTossAngle = 0x154;
            static constexpr std::uintptr_t LootTossOffset = 0x158;
            static constexpr std::uintptr_t InventoryHandle = 0x170;
            static constexpr std::uintptr_t ItemSlotGroups = 0x1C8;
            static constexpr std::uintptr_t ReplicatedItemSlotData = 0x1D8;
            static constexpr std::uintptr_t OnInventoryChangedEvent = 0x240;
            static constexpr std::uintptr_t SelectedItemGroupSlots = 0x270;
            static constexpr std::uintptr_t TotalItemCounts = 0x2C0;
            static constexpr std::uintptr_t CachedItemInstanceCounts = 0x2D0;
            static constexpr std::uintptr_t MigrationSearcher = 0x2F0;
            static constexpr std::uintptr_t CustomFilterDelegate = 0x2F8;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"OnInventoryDataRestored", 0xD0, "MulticastInlineDelegateProperty"},
            {"bShouldAcquireInventoryOnInitialize", 0xF8, "BoolProperty"},
            {"InventoryConfig", 0x100, "StructProperty"},
            {"TypeTags", 0x118, "StructProperty"},
            {"InventoryLootTierGroup", 0x138, "NameProperty"},
            {"bCanEverBeCraftingSource", 0x13C, "BoolProperty"},
            {"bEnabledAsCraftingSource", 0x13C, "BoolProperty"},
            {"bShouldDropContentsOnOwnerDeath", 0x13C, "BoolProperty"},
            {"bShouldOpenInventoryMenu", 0x13C, "BoolProperty"},
            {"OnEnabledAsCraftingSourceDelegate", 0x140, "MulticastInlineDelegateProperty"},
            {"LootTossSpeed", 0x150, "FloatProperty"},
            {"LootTossAngle", 0x154, "FloatProperty"},
            {"LootTossOffset", 0x158, "StructProperty"},
            {"InventoryHandle", 0x170, "StructProperty"},
            {"ItemSlotGroups", 0x1C8, "MapProperty"},
            {"ReplicatedItemSlotData", 0x1D8, "StructProperty"},
            {"OnInventoryChangedEvent", 0x240, "MulticastInlineDelegateProperty"},
            {"SelectedItemGroupSlots", 0x270, "ArrayProperty"},
            {"TotalItemCounts", 0x2C0, "MapProperty"},
            {"CachedItemInstanceCounts", 0x2D0, "MapProperty"},
            {"MigrationSearcher", 0x2F0, "ObjectProperty"},
            {"CustomFilterDelegate", 0x2F8, "DelegateProperty"},
        }};
    };

    struct JunoCraftingLibrary
    {
        static constexpr std::string_view Name = "JunoCraftingLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCraftingObjectBGA
    {
        static constexpr std::string_view Name = "JunoCraftingObjectBGA";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CraftingObjectBGA";
        struct Offsets
        {
            static constexpr std::uintptr_t DisabledCraftingFromChestsStations = 0xA68;
            static constexpr std::uintptr_t GeometryCollectionAssemblerComponentClass = 0xA78;
            static constexpr std::uintptr_t NeedsAssemblyInDirection = 0xA80;
            static constexpr std::uintptr_t WorldStateAddition = 0xA84;
            static constexpr std::uintptr_t GridSizeOverride = 0xA88;
            static constexpr std::uintptr_t BuildingPivotOffset = 0xAA0;
            static constexpr std::uintptr_t BuildingGridSnapOffset = 0xB00;
            static constexpr std::uintptr_t GridOffsetLimits = 0xB18;
            static constexpr std::uintptr_t OverlappableClasses = 0xB28;
            static constexpr std::uintptr_t AssociatedItem = 0xB48;
            static constexpr std::uintptr_t PreviewComponentTemplates = 0xB58;
            static constexpr std::uintptr_t UpgradeRecipe = 0xB68;
            static constexpr std::uintptr_t bAutoTakeCraftingInventoryOnServerInteract = 0xB88;
            static constexpr std::uintptr_t bShouldPersist = 0xB89;
            static constexpr std::uintptr_t bCloseMenuWhenOutOfInteractionRange = 0xB8A;
            static constexpr std::uintptr_t InteractionRangeSphereRadius = 0xB8C;
            static constexpr std::uintptr_t bBroadcastAnalyticsOnSuccess = 0xB90;
            static constexpr std::uintptr_t bIncludeNearbyChests = 0xB90;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"DisabledCraftingFromChestsStations", 0xA68, "SetProperty"},
            {"GeometryCollectionAssemblerComponentClass", 0xA78, "ClassProperty"},
            {"NeedsAssemblyInDirection", 0xA80, "EnumProperty"},
            {"WorldStateAddition", 0xA84, "StructProperty"},
            {"GridSizeOverride", 0xA88, "StructProperty"},
            {"BuildingPivotOffset", 0xAA0, "StructProperty"},
            {"BuildingGridSnapOffset", 0xB00, "StructProperty"},
            {"GridOffsetLimits", 0xB18, "StructProperty"},
            {"OverlappableClasses", 0xB28, "StructProperty"},
            {"AssociatedItem", 0xB48, "ObjectProperty"},
            {"PreviewComponentTemplates", 0xB58, "MapProperty"},
            {"UpgradeRecipe", 0xB68, "NameProperty"},
            {"bAutoTakeCraftingInventoryOnServerInteract", 0xB88, "BoolProperty"},
            {"bShouldPersist", 0xB89, "BoolProperty"},
            {"bCloseMenuWhenOutOfInteractionRange", 0xB8A, "BoolProperty"},
            {"InteractionRangeSphereRadius", 0xB8C, "FloatProperty"},
            {"bBroadcastAnalyticsOnSuccess", 0xB90, "BoolProperty"},
            {"bIncludeNearbyChests", 0xB90, "BoolProperty"},
        }};
    };

    struct JunoCraftingObjectInterface
    {
        static constexpr std::string_view Name = "JunoCraftingObjectInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCraftingSourceInterface
    {
        static constexpr std::string_view Name = "JunoCraftingSourceInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCraftingSourceInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCreativeFlightBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoCreativeFlightBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoCreativeFlightComponent
    {
        static constexpr std::string_view Name = "JunoCreativeFlightComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCreativeFlightStatusUpdated = 0xC0;
            static constexpr std::uintptr_t bIsCreativeFlightEnabled = 0xD0;
            static constexpr std::uintptr_t PlayerCreativeFlightStates = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnCreativeFlightStatusUpdated", 0xC0, "MulticastInlineDelegateProperty"},
            {"bIsCreativeFlightEnabled", 0xD0, "BoolProperty"},
            {"PlayerCreativeFlightStates", 0xD8, "ArrayProperty"},
        }};
    };

    struct JunoCreatureAnimInstance
    {
        static constexpr std::string_view Name = "JunoCreatureAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPawnAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t TickDeltaSeconds = 0x4A0;
            static constexpr std::uintptr_t bIsTurning = 0x4A4;
            static constexpr std::uintptr_t bWasTurning = 0x4A5;
            static constexpr std::uintptr_t bIdleShuffleTurnDirection = 0x4A6;
            static constexpr std::uintptr_t IdleShufflePlayRate = 0x4A8;
            static constexpr std::uintptr_t bIsIdleShuffleTurn = 0x4AC;
            static constexpr std::uintptr_t CreaturePosition = 0x4B0;
            static constexpr std::uintptr_t CreaturePositionDelta = 0x4C8;
            static constexpr std::uintptr_t CreatureRootRotation = 0x4E0;
            static constexpr std::uintptr_t CreatureRootRotationOffset = 0x4F8;
            static constexpr std::uintptr_t CreatureRotation = 0x510;
            static constexpr std::uintptr_t CreatureRotationDelta = 0x528;
            static constexpr std::uintptr_t CreatureVelocity = 0x540;
            static constexpr std::uintptr_t CreatureYaw = 0x558;
            static constexpr std::uintptr_t CreatureYawDelta = 0x55C;
            static constexpr std::uintptr_t LookAtComponent = 0x560;
            static constexpr std::uintptr_t AIMovementComponent = 0x568;
            static constexpr std::uintptr_t CurrentMaxSpeed = 0x570;
            static constexpr std::uintptr_t CurrentPathLength = 0x574;
            static constexpr std::uintptr_t PawnIsMovingBackward = 0x578;
            static constexpr std::uintptr_t CreatureSkelMeshRotation = 0x580;
            static constexpr std::uintptr_t RootSmoothing_Enabled = 0x598;
            static constexpr std::uintptr_t RootSmoothing_Distance = 0x59C;
            static constexpr std::uintptr_t RootSmoothing_DisableSpeed = 0x5A0;
            static constexpr std::uintptr_t RootSmoothing_EnableSpeed = 0x5A4;
            static constexpr std::uintptr_t RootSmoothing_ResultRotation = 0x5A8;
            static constexpr std::uintptr_t RootSmoothing_SmoothedRotation = 0x5C0;
            static constexpr std::uintptr_t RootSmoothing_Strength = 0x5E0;
            static constexpr std::uintptr_t RootSmoothing_Alpha = 0x5E4;
            static constexpr std::uintptr_t bSlopeWarpingIsEnabled = 0x5E8;
            static constexpr std::uintptr_t SlopeWarpingFloorCheckFrequency = 0x5EC;
            static constexpr std::uintptr_t SlopeWarpingRollAlpha = 0x5F0;
            static constexpr std::uintptr_t bStartingInPlace = 0x5F4;
            static constexpr std::uintptr_t StartInPlace_RootTranslation = 0x5F8;
            static constexpr std::uintptr_t StartInPlace_Sequence = 0x610;
            static constexpr std::uintptr_t StartInPlace_SequenceTime = 0x618;
            static constexpr std::uintptr_t bTurningInPlace = 0x61C;
            static constexpr std::uintptr_t bTurnInPlace_UseAuthoredAngle = 0x61D;
            static constexpr std::uintptr_t TurnAnimation = 0x620;
            static constexpr std::uintptr_t TurnInPlace_AnimationAuthoredAngle = 0x628;
            static constexpr std::uintptr_t TurnPlayRate = 0x62C;
            static constexpr std::uintptr_t TurnInPlace_RootRotationZ = 0x630;
            static constexpr std::uintptr_t TurnInPlace_RotationAngle = 0x634;
            static constexpr std::uintptr_t TurnInPlace_RotationAngle_Min = 0x638;
            static constexpr std::uintptr_t TurnInPlace_RotationRate = 0x63C;
            static constexpr std::uintptr_t TurnInPlace_Sequence = 0x640;
            static constexpr std::uintptr_t TurnInPlace_SequenceTime = 0x648;
            static constexpr std::uintptr_t bStateRule_Idle_Moving = 0x64C;
            static constexpr std::uintptr_t IdleShuffleTurnThreshold = 0x650;
            static constexpr std::uintptr_t IdleShuffleTurnDirectionThreshold = 0x654;
            static constexpr std::uintptr_t IdleShufflePlayRateInRangeA = 0x658;
            static constexpr std::uintptr_t IdleShufflePlayRateInRangeB = 0x65C;
            static constexpr std::uintptr_t IdleShufflePlayRateOutRangeA = 0x660;
            static constexpr std::uintptr_t IdleShufflePlayRateOutRangeB = 0x664;
            static constexpr std::uintptr_t bHasValidAimTarget = 0x668;
            static constexpr std::uintptr_t AimTargetLocation = 0x670;
            static constexpr std::uintptr_t AimTime = 0x688;
            static constexpr std::uintptr_t LookAtAlpha = 0x68C;
            static constexpr std::uintptr_t MaxDistanceToPlayerForLookAt = 0x690;
            static constexpr std::uintptr_t LookAtTooFarFromPlayerTimeOut = 0x694;
            static constexpr std::uintptr_t bDisableLookAtDuringMontage = 0x698;
            static constexpr std::uintptr_t DisableHeadTrackingCurveName = 0x69C;
            static constexpr std::uintptr_t bStartTurn = 0x6A0;
            static constexpr std::uintptr_t TurnAngle = 0x6A4;
            static constexpr std::uintptr_t TurnRate = 0x6A8;
            static constexpr std::uintptr_t RidingAnimationData = 0x6AC;
            static constexpr std::uintptr_t Speed = 0x6C0;
            static constexpr std::uintptr_t bPlayLandAdditive = 0x6C4;
            static constexpr std::uintptr_t bIsFloating = 0x6C5;
            static constexpr std::uintptr_t bIsSurfaceSwimming = 0x6C6;
            static constexpr std::uintptr_t bIsTurningInPlace = 0x6C7;
            static constexpr std::uintptr_t bTurnInPlaceV3 = 0x6CD;
            static constexpr std::uintptr_t TurnInPlaceV3_Chooser = 0x6D0;
            static constexpr std::uintptr_t TurnInPlaceV3_AnimSequence = 0x6D8;
            static constexpr std::uintptr_t TurnInPlaceV3_AnimSequenceTime = 0x6E0;
            static constexpr std::uintptr_t TurnInPlaceV3_SteeringEndNotifyEventName = 0x6E4;
            static constexpr std::uintptr_t bTurnInPlaceV3_IsSteering = 0x6E8;
            static constexpr std::uintptr_t TurnInPlaceV3_PickedAnimSeqID = 0x6EC;
            static constexpr std::uintptr_t bTurnInPlaceV3_DoTurn = 0x6F0;
            static constexpr std::uintptr_t TurnInPlaceV3_TargetAngleWS = 0x700;
            static constexpr std::uintptr_t TurnInPlaceV3_RecievedDesiredAngleWS = 0x720;
            static constexpr std::uintptr_t TurnInPlaceV3_PlayRate = 0x724;
            static constexpr std::uintptr_t TurnInPlaceV3_SteeringTargetTime = 0x728;
            static constexpr std::uintptr_t TurnInPlaceV3_SteeringAlpha = 0x72C;
        };

        inline static constexpr std::array<PropertyInfo, 84> Properties{{
            {"TickDeltaSeconds", 0x4A0, "FloatProperty"},
            {"bIsTurning", 0x4A4, "BoolProperty"},
            {"bWasTurning", 0x4A5, "BoolProperty"},
            {"bIdleShuffleTurnDirection", 0x4A6, "BoolProperty"},
            {"IdleShufflePlayRate", 0x4A8, "FloatProperty"},
            {"bIsIdleShuffleTurn", 0x4AC, "BoolProperty"},
            {"CreaturePosition", 0x4B0, "StructProperty"},
            {"CreaturePositionDelta", 0x4C8, "StructProperty"},
            {"CreatureRootRotation", 0x4E0, "StructProperty"},
            {"CreatureRootRotationOffset", 0x4F8, "StructProperty"},
            {"CreatureRotation", 0x510, "StructProperty"},
            {"CreatureRotationDelta", 0x528, "StructProperty"},
            {"CreatureVelocity", 0x540, "StructProperty"},
            {"CreatureYaw", 0x558, "FloatProperty"},
            {"CreatureYawDelta", 0x55C, "FloatProperty"},
            {"LookAtComponent", 0x560, "WeakObjectProperty"},
            {"AIMovementComponent", 0x568, "WeakObjectProperty"},
            {"CurrentMaxSpeed", 0x570, "FloatProperty"},
            {"CurrentPathLength", 0x574, "FloatProperty"},
            {"PawnIsMovingBackward", 0x578, "BoolProperty"},
            {"CreatureSkelMeshRotation", 0x580, "StructProperty"},
            {"RootSmoothing_Enabled", 0x598, "BoolProperty"},
            {"RootSmoothing_Distance", 0x59C, "FloatProperty"},
            {"RootSmoothing_DisableSpeed", 0x5A0, "FloatProperty"},
            {"RootSmoothing_EnableSpeed", 0x5A4, "FloatProperty"},
            {"RootSmoothing_ResultRotation", 0x5A8, "StructProperty"},
            {"RootSmoothing_SmoothedRotation", 0x5C0, "StructProperty"},
            {"RootSmoothing_Strength", 0x5E0, "FloatProperty"},
            {"RootSmoothing_Alpha", 0x5E4, "FloatProperty"},
            {"bSlopeWarpingIsEnabled", 0x5E8, "BoolProperty"},
            {"SlopeWarpingFloorCheckFrequency", 0x5EC, "FloatProperty"},
            {"SlopeWarpingRollAlpha", 0x5F0, "FloatProperty"},
            {"bStartingInPlace", 0x5F4, "BoolProperty"},
            {"StartInPlace_RootTranslation", 0x5F8, "StructProperty"},
            {"StartInPlace_Sequence", 0x610, "ObjectProperty"},
            {"StartInPlace_SequenceTime", 0x618, "FloatProperty"},
            {"bTurningInPlace", 0x61C, "BoolProperty"},
            {"bTurnInPlace_UseAuthoredAngle", 0x61D, "BoolProperty"},
            {"TurnAnimation", 0x620, "ObjectProperty"},
            {"TurnInPlace_AnimationAuthoredAngle", 0x628, "FloatProperty"},
            {"TurnPlayRate", 0x62C, "FloatProperty"},
            {"TurnInPlace_RootRotationZ", 0x630, "FloatProperty"},
            {"TurnInPlace_RotationAngle", 0x634, "FloatProperty"},
            {"TurnInPlace_RotationAngle_Min", 0x638, "FloatProperty"},
            {"TurnInPlace_RotationRate", 0x63C, "FloatProperty"},
            {"TurnInPlace_Sequence", 0x640, "ObjectProperty"},
            {"TurnInPlace_SequenceTime", 0x648, "FloatProperty"},
            {"bStateRule_Idle_Moving", 0x64C, "BoolProperty"},
            {"IdleShuffleTurnThreshold", 0x650, "FloatProperty"},
            {"IdleShuffleTurnDirectionThreshold", 0x654, "FloatProperty"},
            {"IdleShufflePlayRateInRangeA", 0x658, "FloatProperty"},
            {"IdleShufflePlayRateInRangeB", 0x65C, "FloatProperty"},
            {"IdleShufflePlayRateOutRangeA", 0x660, "FloatProperty"},
            {"IdleShufflePlayRateOutRangeB", 0x664, "FloatProperty"},
            {"bHasValidAimTarget", 0x668, "BoolProperty"},
            {"AimTargetLocation", 0x670, "StructProperty"},
            {"AimTime", 0x688, "FloatProperty"},
            {"LookAtAlpha", 0x68C, "FloatProperty"},
            {"MaxDistanceToPlayerForLookAt", 0x690, "FloatProperty"},
            {"LookAtTooFarFromPlayerTimeOut", 0x694, "FloatProperty"},
            {"bDisableLookAtDuringMontage", 0x698, "BoolProperty"},
            {"DisableHeadTrackingCurveName", 0x69C, "NameProperty"},
            {"bStartTurn", 0x6A0, "BoolProperty"},
            {"TurnAngle", 0x6A4, "FloatProperty"},
            {"TurnRate", 0x6A8, "FloatProperty"},
            {"RidingAnimationData", 0x6AC, "StructProperty"},
            {"Speed", 0x6C0, "FloatProperty"},
            {"bPlayLandAdditive", 0x6C4, "BoolProperty"},
            {"bIsFloating", 0x6C5, "BoolProperty"},
            {"bIsSurfaceSwimming", 0x6C6, "BoolProperty"},
            {"bIsTurningInPlace", 0x6C7, "BoolProperty"},
            {"bTurnInPlaceV3", 0x6CD, "BoolProperty"},
            {"TurnInPlaceV3_Chooser", 0x6D0, "ObjectProperty"},
            {"TurnInPlaceV3_AnimSequence", 0x6D8, "ObjectProperty"},
            {"TurnInPlaceV3_AnimSequenceTime", 0x6E0, "FloatProperty"},
            {"TurnInPlaceV3_SteeringEndNotifyEventName", 0x6E4, "NameProperty"},
            {"bTurnInPlaceV3_IsSteering", 0x6E8, "BoolProperty"},
            {"TurnInPlaceV3_PickedAnimSeqID", 0x6EC, "FloatProperty"},
            {"bTurnInPlaceV3_DoTurn", 0x6F0, "BoolProperty"},
            {"TurnInPlaceV3_TargetAngleWS", 0x700, "StructProperty"},
            {"TurnInPlaceV3_RecievedDesiredAngleWS", 0x720, "FloatProperty"},
            {"TurnInPlaceV3_PlayRate", 0x724, "FloatProperty"},
            {"TurnInPlaceV3_SteeringTargetTime", 0x728, "FloatProperty"},
            {"TurnInPlaceV3_SteeringAlpha", 0x72C, "FloatProperty"},
        }};
    };

    struct JunoCreatureAnimInstance_LootLlama
    {
        static constexpr std::string_view Name = "JunoCreatureAnimInstance_LootLlama";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCreatureAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bHighVelocity = 0x820;
            static constexpr std::uintptr_t bIsInterruptible = 0x821;
            static constexpr std::uintptr_t bLocoToIdle = 0x822;
            static constexpr std::uintptr_t bIdleToLoco = 0x823;
            static constexpr std::uintptr_t bJumpStartToJumpLoop = 0x824;
            static constexpr std::uintptr_t bJumpLandToMovement = 0x825;
            static constexpr std::uintptr_t bIsRunning = 0x826;
            static constexpr std::uintptr_t bIdleToFalling = 0x827;
            static constexpr std::uintptr_t bToppledOnGround = 0x828;
            static constexpr std::uintptr_t bTransitionToLand = 0x829;
            static constexpr std::uintptr_t TargetDistance = 0x82C;
            static constexpr std::uintptr_t bTargetIsClose = 0x830;
            static constexpr std::uintptr_t bIsToppled = 0x831;
            static constexpr std::uintptr_t bIsLeaking = 0x832;
            static constexpr std::uintptr_t MinHighVelocityMagnitude = 0x834;
            static constexpr std::uintptr_t MaxInterruptibleCurveValue = 0x838;
            static constexpr std::uintptr_t LocoIdleTransitionThreshold = 0x83C;
            static constexpr std::uintptr_t RunSpeedThreshold = 0x840;
            static constexpr std::uintptr_t JumpLandToMovementInterruptibleThreshold = 0x844;
            static constexpr std::uintptr_t MinTargetIsCloseDistance = 0x848;
            static constexpr std::uintptr_t CurveName_Interruptible = 0x84C;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"bHighVelocity", 0x820, "BoolProperty"},
            {"bIsInterruptible", 0x821, "BoolProperty"},
            {"bLocoToIdle", 0x822, "BoolProperty"},
            {"bIdleToLoco", 0x823, "BoolProperty"},
            {"bJumpStartToJumpLoop", 0x824, "BoolProperty"},
            {"bJumpLandToMovement", 0x825, "BoolProperty"},
            {"bIsRunning", 0x826, "BoolProperty"},
            {"bIdleToFalling", 0x827, "BoolProperty"},
            {"bToppledOnGround", 0x828, "BoolProperty"},
            {"bTransitionToLand", 0x829, "BoolProperty"},
            {"TargetDistance", 0x82C, "FloatProperty"},
            {"bTargetIsClose", 0x830, "BoolProperty"},
            {"bIsToppled", 0x831, "BoolProperty"},
            {"bIsLeaking", 0x832, "BoolProperty"},
            {"MinHighVelocityMagnitude", 0x834, "FloatProperty"},
            {"MaxInterruptibleCurveValue", 0x838, "FloatProperty"},
            {"LocoIdleTransitionThreshold", 0x83C, "FloatProperty"},
            {"RunSpeedThreshold", 0x840, "FloatProperty"},
            {"JumpLandToMovementInterruptibleThreshold", 0x844, "FloatProperty"},
            {"MinTargetIsCloseDistance", 0x848, "FloatProperty"},
            {"CurveName_Interruptible", 0x84C, "NameProperty"},
        }};
    };

    struct JunoCreatureAnimInstance_Molded
    {
        static constexpr std::string_view Name = "JunoCreatureAnimInstance_Molded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCreatureAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t PRA_Molded_Core_Idle = 0x820;
            static constexpr std::uintptr_t PRA_Molded_Core_IdleBreak = 0x828;
            static constexpr std::uintptr_t PRA_Molded_Core_Burrow = 0x830;
            static constexpr std::uintptr_t PRA_Molded_Core_TurnInPlaces = 0x838;
            static constexpr std::uintptr_t PRA_Molded_Core_IdleLand = 0x840;
            static constexpr std::uintptr_t PRA_Molded_Core_Moving = 0x848;
            static constexpr std::uintptr_t PRA_Molded_Core_JumpStart = 0x850;
            static constexpr std::uintptr_t PRA_Molded_Core_FallLoop = 0x858;
            static constexpr std::uintptr_t PRA_Molded_Core_MovingIdleBreak = 0x860;
            static constexpr std::uintptr_t PRA_Molded_Core_MovingLand = 0x868;
            static constexpr std::uintptr_t PRT_Molded_Core = 0x870;
            static constexpr std::uintptr_t IdleBreakMinTime = 0x878;
            static constexpr std::uintptr_t IdleBreakMaxTime = 0x87C;
            static constexpr std::uintptr_t MovingIdleBreakMinTime = 0x880;
            static constexpr std::uintptr_t MovingIdleBreakMaxTime = 0x884;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PRA_Molded_Core_Idle", 0x820, "ObjectProperty"},
            {"PRA_Molded_Core_IdleBreak", 0x828, "ObjectProperty"},
            {"PRA_Molded_Core_Burrow", 0x830, "ObjectProperty"},
            {"PRA_Molded_Core_TurnInPlaces", 0x838, "ObjectProperty"},
            {"PRA_Molded_Core_IdleLand", 0x840, "ObjectProperty"},
            {"PRA_Molded_Core_Moving", 0x848, "ObjectProperty"},
            {"PRA_Molded_Core_JumpStart", 0x850, "ObjectProperty"},
            {"PRA_Molded_Core_FallLoop", 0x858, "ObjectProperty"},
            {"PRA_Molded_Core_MovingIdleBreak", 0x860, "ObjectProperty"},
            {"PRA_Molded_Core_MovingLand", 0x868, "ObjectProperty"},
            {"PRT_Molded_Core", 0x870, "ObjectProperty"},
            {"IdleBreakMinTime", 0x878, "FloatProperty"},
            {"IdleBreakMaxTime", 0x87C, "FloatProperty"},
            {"MovingIdleBreakMinTime", 0x880, "FloatProperty"},
            {"MovingIdleBreakMaxTime", 0x884, "FloatProperty"},
        }};
    };

    struct JunoCreatureAnimInstance_Rocky
    {
        static constexpr std::string_view Name = "JunoCreatureAnimInstance_Rocky";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCreatureAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t PRA_Moving = 0x820;
            static constexpr std::uintptr_t PRT_AnimSet = 0x828;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PRA_Moving", 0x820, "ObjectProperty"},
            {"PRT_AnimSet", 0x828, "ObjectProperty"},
        }};
    };

    struct JunoCreatureAnimLogic
    {
        static constexpr std::string_view Name = "JunoCreatureAnimLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCreatureAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentMovementParameters = 0x820;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentMovementParameters", 0x820, "StructProperty"},
        }};
    };

    struct JunoCreatureFollowerPawnComponent
    {
        static constexpr std::string_view Name = "JunoCreatureFollowerPawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoFollowerPawnComponentBase";
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

    struct JunoCreatureInCampLivingWorldStaticPointProvider
    {
        static constexpr std::string_view Name = "JunoCreatureInCampLivingWorldStaticPointProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldStaticPointProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t OnActorSpawned = 0x280;
            static constexpr std::uintptr_t OnEventRequested_BP = 0x290;
            static constexpr std::uintptr_t OnEventSpawned_BP = 0x2A0;
            static constexpr std::uintptr_t OnEventFinished_BP = 0x2B0;
            static constexpr std::uintptr_t SpawnLimiter = 0x2C0;
            static constexpr std::uintptr_t FiltersTags = 0x328;
            static constexpr std::uintptr_t SpawnPoints = 0x348;
            static constexpr std::uintptr_t bStartEnabled = 0x358;
            static constexpr std::uintptr_t bRandomizeStartPoint = 0x359;
            static constexpr std::uintptr_t bRandomizePointRotation = 0x35A;
            static constexpr std::uintptr_t DebugInfo = 0x360;
            static constexpr std::uintptr_t CachedGameState = 0x370;
            static constexpr std::uintptr_t CachedLivingWorldManager = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"OnActorSpawned", 0x280, "MulticastInlineDelegateProperty"},
            {"OnEventRequested_BP", 0x290, "MulticastInlineDelegateProperty"},
            {"OnEventSpawned_BP", 0x2A0, "MulticastInlineDelegateProperty"},
            {"OnEventFinished_BP", 0x2B0, "MulticastInlineDelegateProperty"},
            {"SpawnLimiter", 0x2C0, "StructProperty"},
            {"FiltersTags", 0x328, "StructProperty"},
            {"SpawnPoints", 0x348, "ArrayProperty"},
            {"bStartEnabled", 0x358, "BoolProperty"},
            {"bRandomizeStartPoint", 0x359, "BoolProperty"},
            {"bRandomizePointRotation", 0x35A, "BoolProperty"},
            {"DebugInfo", 0x360, "StructProperty"},
            {"CachedGameState", 0x370, "ObjectProperty"},
            {"CachedLivingWorldManager", 0x378, "ObjectProperty"},
        }};
    };

    struct JunoCreaturePawnComponent
    {
        static constexpr std::string_view Name = "JunoCreaturePawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t HUDKeyTag = 0xC8;
            static constexpr std::uintptr_t ContinuousFriendshipChangeConfigurationWhenNoInteractions = 0xCC;
            static constexpr std::uintptr_t MaxNoInteractionTimeForNPCBeforeFriendshipChangeInJunoGameTimeHours = 0xD8;
            static constexpr std::uintptr_t ContinuousFriendshipChangeConfigurationWithNoRecruitmentObject = 0x100;
            static constexpr std::uintptr_t ContinuousFriendshipChangeConfigurationWithSoftRemovedCamp = 0x10C;
            static constexpr std::uintptr_t ConvertedOverrideTileGenerationRadius = 0x118;
            static constexpr std::uintptr_t ConvertedOverrideTileRemovalRadius = 0x140;
            static constexpr std::uintptr_t AutomaticFriendshipResetDelay = 0x168;
            static constexpr std::uintptr_t ValidFriendshipStateQueryForAutomaticReset = 0x190;
            static constexpr std::uintptr_t AllowedToBeRecruitedInCamp = 0x1D8;
            static constexpr std::uintptr_t OnJunoCreatureRecruitedToCampDelegate = 0x200;
            static constexpr std::uintptr_t OnJunoCreatureCustomNameChangedDelegate = 0x210;
            static constexpr std::uintptr_t CachedAndReplicatedCustomName = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"HUDKeyTag", 0xC8, "StructProperty"},
            {"ContinuousFriendshipChangeConfigurationWhenNoInteractions", 0xCC, "StructProperty"},
            {"MaxNoInteractionTimeForNPCBeforeFriendshipChangeInJunoGameTimeHours", 0xD8, "StructProperty"},
            {"ContinuousFriendshipChangeConfigurationWithNoRecruitmentObject", 0x100, "StructProperty"},
            {"ContinuousFriendshipChangeConfigurationWithSoftRemovedCamp", 0x10C, "StructProperty"},
            {"ConvertedOverrideTileGenerationRadius", 0x118, "StructProperty"},
            {"ConvertedOverrideTileRemovalRadius", 0x140, "StructProperty"},
            {"AutomaticFriendshipResetDelay", 0x168, "StructProperty"},
            {"ValidFriendshipStateQueryForAutomaticReset", 0x190, "StructProperty"},
            {"AllowedToBeRecruitedInCamp", 0x1D8, "StructProperty"},
            {"OnJunoCreatureRecruitedToCampDelegate", 0x200, "MulticastInlineDelegateProperty"},
            {"OnJunoCreatureCustomNameChangedDelegate", 0x210, "MulticastInlineDelegateProperty"},
            {"CachedAndReplicatedCustomName", 0x220, "TextProperty"},
        }};
    };

    struct JunoCubeImpostorProxy
    {
        static constexpr std::string_view Name = "JunoCubeImpostorProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t BoxExtent = 0x278;
            static constexpr std::uintptr_t Color = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BoxExtent", 0x278, "StructProperty"},
            {"Color", 0x290, "StructProperty"},
        }};
    };

    struct JunoCubeImpostorSubsystem
    {
        static constexpr std::string_view Name = "JunoCubeImpostorSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ImpostorHolderActor = 0x38;
            static constexpr std::uintptr_t ImpostorISM = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ImpostorHolderActor", 0x38, "ObjectProperty"},
            {"ImpostorISM", 0x40, "ObjectProperty"},
        }};
    };

    struct JunoDamageFormulaExecutionCalculation
    {
        static constexpr std::string_view Name = "JunoDamageFormulaExecutionCalculation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortDamageFormulaExecutionCalculation";
        struct Offsets
        {
            static constexpr std::uintptr_t DamageFloor = 0x48;
            static constexpr std::uintptr_t OneHitGraceHealth = 0x4C;
            static constexpr std::uintptr_t ArmorDRConversionConstant = 0x50;
            static constexpr std::uintptr_t OneHitGraceThresholdPercent = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DamageFloor", 0x48, "FloatProperty"},
            {"OneHitGraceHealth", 0x4C, "FloatProperty"},
            {"ArmorDRConversionConstant", 0x50, "FloatProperty"},
            {"OneHitGraceThresholdPercent", 0x54, "FloatProperty"},
        }};
    };

    struct JunoDamageLibrary
    {
        static constexpr std::string_view Name = "JunoDamageLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoDamageSet
    {
        static constexpr std::string_view Name = "JunoDamageSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t ArmorPenetration = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ArmorPenetration", 0x48, "StructProperty"},
        }};
    };

    struct JunoDamageableBuildingInterface
    {
        static constexpr std::string_view Name = "JunoDamageableBuildingInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoDataRegistryPersistenceAssetType
    {
        static constexpr std::string_view Name = "JunoDataRegistryPersistenceAssetType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPersistenceAssetType";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoDataTablePersistenceAssetType
    {
        static constexpr std::string_view Name = "JunoDataTablePersistenceAssetType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPersistenceAssetType";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoDestructionBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoDestructionBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoDocileCreatureAnimLogic
    {
        static constexpr std::string_view Name = "JunoDocileCreatureAnimLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCreatureAnimLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentMovementParameters = 0x820;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentMovementParameters", 0x820, "StructProperty"},
        }};
    };

    struct JunoDoorMetaNavArea
    {
        static constexpr std::string_view Name = "JunoDoorMetaNavArea";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavAreaMeta";
        struct Offsets
        {
            static constexpr std::uintptr_t DoorAwareAgents = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DoorAwareAgents", 0x48, "StructProperty"},
        }};
    };

    struct JunoEncounterCheatInterface
    {
        static constexpr std::string_view Name = "JunoEncounterCheatInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoEncounterFactionDataAssetType
    {
        static constexpr std::string_view Name = "JunoEncounterFactionDataAssetType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPersistenceAssetType";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoEncounterManagerComponent
    {
        static constexpr std::string_view Name = "JunoEncounterManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMeshNetworkReady_BP = 0xC0;
            static constexpr std::uintptr_t OnMeshNetworkEventBurst_BP = 0xD0;
            static constexpr std::uintptr_t OnMeshNetworkEventStart_BP = 0xE0;
            static constexpr std::uintptr_t OnMeshNetworkEventChange_BP = 0xF0;
            static constexpr std::uintptr_t OnMeshNetworkEventEnd_BP = 0x100;
            static constexpr std::uintptr_t bSubscribeToMeshNetwork = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnMeshNetworkReady_BP", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventBurst_BP", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventStart_BP", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventChange_BP", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventEnd_BP", 0x100, "MulticastInlineDelegateProperty"},
            {"bSubscribeToMeshNetwork", 0x110, "BoolProperty"},
        }};
    };

    struct JunoEnemyAnalyticsComponent
    {
        static constexpr std::string_view Name = "JunoEnemyAnalyticsComponent";
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

    struct JunoEnemyAnimLogic
    {
        static constexpr std::string_view Name = "JunoEnemyAnimLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPlayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t MutableAnimInstanceClass = 0x9B0;
            static constexpr std::uintptr_t EnemyLookAtAngleThreshold_Native = 0x9B8;
            static constexpr std::uintptr_t LocomotionGraph_Native = 0x9C0;
            static constexpr std::uintptr_t PawnAccelerationDirectionClamped_Native = 0x9C8;
            static constexpr std::uintptr_t LeanAmount_Native = 0x9CC;
            static constexpr std::uintptr_t bEnemyShouldIdle_Native = 0x9D0;
            static constexpr std::uintptr_t bShouldStopMovement_Native = 0x9D1;
            static constexpr std::uintptr_t bShouldLandAdd_Native = 0x9D2;
            static constexpr std::uintptr_t bShouldLand_Native = 0x9D3;
            static constexpr std::uintptr_t bIsOverPawnAccelerationThreshold_E_Native = 0x9D4;
            static constexpr std::uintptr_t bIsOverPawnAccelerationThreshold_W_Native = 0x9D5;
            static constexpr std::uintptr_t bShouldTurnInPlace_Native = 0x9D6;
            static constexpr std::uintptr_t bShouldTurnInPlaceFromStop_Native = 0x9D7;
            static constexpr std::uintptr_t bShouldWalk_Native = 0x9D8;
            static constexpr std::uintptr_t BMFullArmsHead_Native = 0x9E0;
            static constexpr std::uintptr_t RequestedRotationMode_Native = 0x9F0;
            static constexpr std::uintptr_t RootRotation_Native = 0x9F8;
            static constexpr std::uintptr_t RootRotationLastFrame_Native = 0xA10;
            static constexpr std::uintptr_t StartingRotation_Native = 0xA28;
            static constexpr std::uintptr_t TargetRotation_Native = 0xA40;
            static constexpr std::uintptr_t TargetRotationLastFrame_Native = 0xA58;
            static constexpr std::uintptr_t SmoothedTargetRotation_Native = 0xA70;
            static constexpr std::uintptr_t SuperSmoothedTargetRotation_Native = 0xA88;
            static constexpr std::uintptr_t StartingAngle_Native = 0xAA0;
            static constexpr std::uintptr_t TargetAO_Native = 0xAA8;
            static constexpr std::uintptr_t MontageGenericSlotWeight_Native = 0xAB8;
            static constexpr std::uintptr_t MontageSwingSlotWeight_Native = 0xABC;
            static constexpr std::uintptr_t bIsAggressive_Native = 0xAC0;
            static constexpr std::uintptr_t bIsAggressiveLastFrame_Native = 0xAC1;
            static constexpr std::uintptr_t bIsPatrolling_Native = 0xAC2;
            static constexpr std::uintptr_t bIsPatrollingLastFrame_Native = 0xAC3;
            static constexpr std::uintptr_t CurrentGameplayState_Native = 0xAC4;
            static constexpr std::uintptr_t CurrentGameplayStateLastFrame_Native = 0xAC5;
            static constexpr std::uintptr_t TargetPlayerPawn_Native = 0xAC8;
            static constexpr std::uintptr_t bIsLookAtInBounds = 0xAD0;
            static constexpr std::uintptr_t EnemyLookAtWeight_Native = 0xAD4;
            static constexpr std::uintptr_t TargetPlayerLocation_Native = 0xAD8;
            static constexpr std::uintptr_t MovingStopThreshold = 0xAF0;
            static constexpr std::uintptr_t ShouldWalkThreshold = 0xAF4;
            static constexpr std::uintptr_t AccelerationDirectionThreshold_E = 0xAF8;
            static constexpr std::uintptr_t AccelerationDirectionThreshold_W = 0xAFC;
            static constexpr std::uintptr_t RotationLinearRate = 0xB00;
            static constexpr std::uintptr_t RotationSmoothRate = 0xB04;
            static constexpr std::uintptr_t bIsMeshSpaceBlend = 0xB08;
            static constexpr std::uintptr_t bForceBlend = 0xB09;
            static constexpr std::uintptr_t RotateCurveName = 0xB0C;
            static constexpr std::uintptr_t EnemyMainLocomotionProxyTableChooser_Native = 0xB10;
            static constexpr std::uintptr_t EnemyMainProp1ProxyTableChooser_Native = 0xB18;
            static constexpr std::uintptr_t EnemyMainOffHandProxyTableChooser_Native = 0xB20;
            static constexpr std::uintptr_t BM_NoBlend = 0xB28;
            static constexpr std::uintptr_t bHasOffhandItem_Native = 0xB30;
            static constexpr std::uintptr_t bIsNoBlend_Native = 0xB31;
            static constexpr std::uintptr_t BMDataAssetAdditiveLayer_Native = 0xB38;
            static constexpr std::uintptr_t BMDataAssetOffhandAdditiveLayer_Native = 0xB40;
            static constexpr std::uintptr_t CurrentAdditiveBoneMask_Native = 0xB48;
            static constexpr std::uintptr_t CurrentOffhandAdditiveBoneMask_Native = 0xB58;
            static constexpr std::uintptr_t PRT_Enemy_Locomotion_Main = 0xB68;
            static constexpr std::uintptr_t LocomotionProxyTable_Native = 0xB70;
            static constexpr std::uintptr_t MainHandProxyTable_Native = 0xB78;
            static constexpr std::uintptr_t MainHandProxyTableLastFrame_Native = 0xB80;
            static constexpr std::uintptr_t OffHandProxyTable_Native = 0xB88;
            static constexpr std::uintptr_t PRT_Enemy_Prop1_Melee = 0xB90;
            static constexpr std::uintptr_t PRT_Enemy_OffHandWep_Main = 0xB98;
            static constexpr std::uintptr_t PRA_Prop1_PropPose_StrafeLayer = 0xBA0;
            static constexpr std::uintptr_t PRA_Prop1_PropPose_Idle = 0xBA8;
            static constexpr std::uintptr_t PRA_Enemy_Idle = 0xBB0;
            static constexpr std::uintptr_t PRA_OffHand_LayerPose_Strafe = 0xBB8;
            static constexpr std::uintptr_t PRA_OffHand_LayerPose_Idle = 0xBC0;
            static constexpr std::uintptr_t PRA_Prop1_PropPose_BlendSettings = 0xBC8;
            static constexpr std::uintptr_t PRA_Offhand_LayerPose_BlendSettings = 0xBD0;
            static constexpr std::uintptr_t OutputAnim_Native = 0xBD8;
            static constexpr std::uintptr_t CurrentLayeredIdlePose_Native = 0xBE0;
            static constexpr std::uintptr_t CurrentLayeredAnim_Native = 0xBE8;
            static constexpr std::uintptr_t CurrentStrafeLayerPoses_Native = 0xBF0;
            static constexpr std::uintptr_t CurrentOffhandLayeredIdlePose_Native = 0xBF8;
            static constexpr std::uintptr_t CurrentOffhandStrafeLayerPoses_Native = 0xC00;
            static constexpr std::uintptr_t CurrentOffhandLayeredAnim_Native = 0xC08;
            static constexpr std::uintptr_t CurrentBasePose_Native = 0xC10;
            static constexpr std::uintptr_t OnStatusChanged_Native = 0xC18;
            static constexpr std::uintptr_t OnPropStateChanged_Native = 0xC28;
        };

        inline static constexpr std::array<PropertyInfo, 80> Properties{{
            {"MutableAnimInstanceClass", 0x9B0, "ClassProperty"},
            {"EnemyLookAtAngleThreshold_Native", 0x9B8, "FloatProperty"},
            {"LocomotionGraph_Native", 0x9C0, "ObjectProperty"},
            {"PawnAccelerationDirectionClamped_Native", 0x9C8, "FloatProperty"},
            {"LeanAmount_Native", 0x9CC, "FloatProperty"},
            {"bEnemyShouldIdle_Native", 0x9D0, "BoolProperty"},
            {"bShouldStopMovement_Native", 0x9D1, "BoolProperty"},
            {"bShouldLandAdd_Native", 0x9D2, "BoolProperty"},
            {"bShouldLand_Native", 0x9D3, "BoolProperty"},
            {"bIsOverPawnAccelerationThreshold_E_Native", 0x9D4, "BoolProperty"},
            {"bIsOverPawnAccelerationThreshold_W_Native", 0x9D5, "BoolProperty"},
            {"bShouldTurnInPlace_Native", 0x9D6, "BoolProperty"},
            {"bShouldTurnInPlaceFromStop_Native", 0x9D7, "BoolProperty"},
            {"bShouldWalk_Native", 0x9D8, "BoolProperty"},
            {"BMFullArmsHead_Native", 0x9E0, "StructProperty"},
            {"RequestedRotationMode_Native", 0x9F0, "EnumProperty"},
            {"RootRotation_Native", 0x9F8, "StructProperty"},
            {"RootRotationLastFrame_Native", 0xA10, "StructProperty"},
            {"StartingRotation_Native", 0xA28, "StructProperty"},
            {"TargetRotation_Native", 0xA40, "StructProperty"},
            {"TargetRotationLastFrame_Native", 0xA58, "StructProperty"},
            {"SmoothedTargetRotation_Native", 0xA70, "StructProperty"},
            {"SuperSmoothedTargetRotation_Native", 0xA88, "StructProperty"},
            {"StartingAngle_Native", 0xAA0, "FloatProperty"},
            {"TargetAO_Native", 0xAA8, "StructProperty"},
            {"MontageGenericSlotWeight_Native", 0xAB8, "FloatProperty"},
            {"MontageSwingSlotWeight_Native", 0xABC, "FloatProperty"},
            {"bIsAggressive_Native", 0xAC0, "BoolProperty"},
            {"bIsAggressiveLastFrame_Native", 0xAC1, "BoolProperty"},
            {"bIsPatrolling_Native", 0xAC2, "BoolProperty"},
            {"bIsPatrollingLastFrame_Native", 0xAC3, "BoolProperty"},
            {"CurrentGameplayState_Native", 0xAC4, "EnumProperty"},
            {"CurrentGameplayStateLastFrame_Native", 0xAC5, "EnumProperty"},
            {"TargetPlayerPawn_Native", 0xAC8, "ObjectProperty"},
            {"bIsLookAtInBounds", 0xAD0, "BoolProperty"},
            {"EnemyLookAtWeight_Native", 0xAD4, "FloatProperty"},
            {"TargetPlayerLocation_Native", 0xAD8, "StructProperty"},
            {"MovingStopThreshold", 0xAF0, "FloatProperty"},
            {"ShouldWalkThreshold", 0xAF4, "FloatProperty"},
            {"AccelerationDirectionThreshold_E", 0xAF8, "FloatProperty"},
            {"AccelerationDirectionThreshold_W", 0xAFC, "FloatProperty"},
            {"RotationLinearRate", 0xB00, "FloatProperty"},
            {"RotationSmoothRate", 0xB04, "FloatProperty"},
            {"bIsMeshSpaceBlend", 0xB08, "BoolProperty"},
            {"bForceBlend", 0xB09, "BoolProperty"},
            {"RotateCurveName", 0xB0C, "NameProperty"},
            {"EnemyMainLocomotionProxyTableChooser_Native", 0xB10, "ObjectProperty"},
            {"EnemyMainProp1ProxyTableChooser_Native", 0xB18, "ObjectProperty"},
            {"EnemyMainOffHandProxyTableChooser_Native", 0xB20, "ObjectProperty"},
            {"BM_NoBlend", 0xB28, "ObjectProperty"},
            {"bHasOffhandItem_Native", 0xB30, "BoolProperty"},
            {"bIsNoBlend_Native", 0xB31, "BoolProperty"},
            {"BMDataAssetAdditiveLayer_Native", 0xB38, "ObjectProperty"},
            {"BMDataAssetOffhandAdditiveLayer_Native", 0xB40, "ObjectProperty"},
            {"CurrentAdditiveBoneMask_Native", 0xB48, "StructProperty"},
            {"CurrentOffhandAdditiveBoneMask_Native", 0xB58, "StructProperty"},
            {"PRT_Enemy_Locomotion_Main", 0xB68, "ObjectProperty"},
            {"LocomotionProxyTable_Native", 0xB70, "ObjectProperty"},
            {"MainHandProxyTable_Native", 0xB78, "ObjectProperty"},
            {"MainHandProxyTableLastFrame_Native", 0xB80, "ObjectProperty"},
            {"OffHandProxyTable_Native", 0xB88, "ObjectProperty"},
            {"PRT_Enemy_Prop1_Melee", 0xB90, "ObjectProperty"},
            {"PRT_Enemy_OffHandWep_Main", 0xB98, "ObjectProperty"},
            {"PRA_Prop1_PropPose_StrafeLayer", 0xBA0, "ObjectProperty"},
            {"PRA_Prop1_PropPose_Idle", 0xBA8, "ObjectProperty"},
            {"PRA_Enemy_Idle", 0xBB0, "ObjectProperty"},
            {"PRA_OffHand_LayerPose_Strafe", 0xBB8, "ObjectProperty"},
            {"PRA_OffHand_LayerPose_Idle", 0xBC0, "ObjectProperty"},
            {"PRA_Prop1_PropPose_BlendSettings", 0xBC8, "ObjectProperty"},
            {"PRA_Offhand_LayerPose_BlendSettings", 0xBD0, "ObjectProperty"},
            {"OutputAnim_Native", 0xBD8, "ObjectProperty"},
            {"CurrentLayeredIdlePose_Native", 0xBE0, "ObjectProperty"},
            {"CurrentLayeredAnim_Native", 0xBE8, "ObjectProperty"},
            {"CurrentStrafeLayerPoses_Native", 0xBF0, "ObjectProperty"},
            {"CurrentOffhandLayeredIdlePose_Native", 0xBF8, "ObjectProperty"},
            {"CurrentOffhandStrafeLayerPoses_Native", 0xC00, "ObjectProperty"},
            {"CurrentOffhandLayeredAnim_Native", 0xC08, "ObjectProperty"},
            {"CurrentBasePose_Native", 0xC10, "ObjectProperty"},
            {"OnStatusChanged_Native", 0xC18, "MulticastInlineDelegateProperty"},
            {"OnPropStateChanged_Native", 0xC28, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoEnemyAnimLogic_Main
    {
        static constexpr std::string_view Name = "JunoEnemyAnimLogic_Main";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoEnemyAnimLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t MutableAnimInstanceClass = 0x9B0;
            static constexpr std::uintptr_t EnemyLookAtAngleThreshold_Native = 0x9B8;
            static constexpr std::uintptr_t LocomotionGraph_Native = 0x9C0;
            static constexpr std::uintptr_t PawnAccelerationDirectionClamped_Native = 0x9C8;
            static constexpr std::uintptr_t LeanAmount_Native = 0x9CC;
            static constexpr std::uintptr_t bEnemyShouldIdle_Native = 0x9D0;
            static constexpr std::uintptr_t bShouldStopMovement_Native = 0x9D1;
            static constexpr std::uintptr_t bShouldLandAdd_Native = 0x9D2;
            static constexpr std::uintptr_t bShouldLand_Native = 0x9D3;
            static constexpr std::uintptr_t bIsOverPawnAccelerationThreshold_E_Native = 0x9D4;
            static constexpr std::uintptr_t bIsOverPawnAccelerationThreshold_W_Native = 0x9D5;
            static constexpr std::uintptr_t bShouldTurnInPlace_Native = 0x9D6;
            static constexpr std::uintptr_t bShouldTurnInPlaceFromStop_Native = 0x9D7;
            static constexpr std::uintptr_t bShouldWalk_Native = 0x9D8;
            static constexpr std::uintptr_t BMFullArmsHead_Native = 0x9E0;
            static constexpr std::uintptr_t RequestedRotationMode_Native = 0x9F0;
            static constexpr std::uintptr_t RootRotation_Native = 0x9F8;
            static constexpr std::uintptr_t RootRotationLastFrame_Native = 0xA10;
            static constexpr std::uintptr_t StartingRotation_Native = 0xA28;
            static constexpr std::uintptr_t TargetRotation_Native = 0xA40;
            static constexpr std::uintptr_t TargetRotationLastFrame_Native = 0xA58;
            static constexpr std::uintptr_t SmoothedTargetRotation_Native = 0xA70;
            static constexpr std::uintptr_t SuperSmoothedTargetRotation_Native = 0xA88;
            static constexpr std::uintptr_t StartingAngle_Native = 0xAA0;
            static constexpr std::uintptr_t TargetAO_Native = 0xAA8;
            static constexpr std::uintptr_t MontageGenericSlotWeight_Native = 0xAB8;
            static constexpr std::uintptr_t MontageSwingSlotWeight_Native = 0xABC;
            static constexpr std::uintptr_t bIsAggressive_Native = 0xAC0;
            static constexpr std::uintptr_t bIsAggressiveLastFrame_Native = 0xAC1;
            static constexpr std::uintptr_t bIsPatrolling_Native = 0xAC2;
            static constexpr std::uintptr_t bIsPatrollingLastFrame_Native = 0xAC3;
            static constexpr std::uintptr_t CurrentGameplayState_Native = 0xAC4;
            static constexpr std::uintptr_t CurrentGameplayStateLastFrame_Native = 0xAC5;
            static constexpr std::uintptr_t TargetPlayerPawn_Native = 0xAC8;
            static constexpr std::uintptr_t bIsLookAtInBounds = 0xAD0;
            static constexpr std::uintptr_t EnemyLookAtWeight_Native = 0xAD4;
            static constexpr std::uintptr_t TargetPlayerLocation_Native = 0xAD8;
            static constexpr std::uintptr_t MovingStopThreshold = 0xAF0;
            static constexpr std::uintptr_t ShouldWalkThreshold = 0xAF4;
            static constexpr std::uintptr_t AccelerationDirectionThreshold_E = 0xAF8;
            static constexpr std::uintptr_t AccelerationDirectionThreshold_W = 0xAFC;
            static constexpr std::uintptr_t RotationLinearRate = 0xB00;
            static constexpr std::uintptr_t RotationSmoothRate = 0xB04;
            static constexpr std::uintptr_t bIsMeshSpaceBlend = 0xB08;
            static constexpr std::uintptr_t bForceBlend = 0xB09;
            static constexpr std::uintptr_t RotateCurveName = 0xB0C;
            static constexpr std::uintptr_t EnemyMainLocomotionProxyTableChooser_Native = 0xB10;
            static constexpr std::uintptr_t EnemyMainProp1ProxyTableChooser_Native = 0xB18;
            static constexpr std::uintptr_t EnemyMainOffHandProxyTableChooser_Native = 0xB20;
            static constexpr std::uintptr_t BM_NoBlend = 0xB28;
            static constexpr std::uintptr_t bHasOffhandItem_Native = 0xB30;
            static constexpr std::uintptr_t bIsNoBlend_Native = 0xB31;
            static constexpr std::uintptr_t BMDataAssetAdditiveLayer_Native = 0xB38;
            static constexpr std::uintptr_t BMDataAssetOffhandAdditiveLayer_Native = 0xB40;
            static constexpr std::uintptr_t CurrentAdditiveBoneMask_Native = 0xB48;
            static constexpr std::uintptr_t CurrentOffhandAdditiveBoneMask_Native = 0xB58;
            static constexpr std::uintptr_t PRT_Enemy_Locomotion_Main = 0xB68;
            static constexpr std::uintptr_t LocomotionProxyTable_Native = 0xB70;
            static constexpr std::uintptr_t MainHandProxyTable_Native = 0xB78;
            static constexpr std::uintptr_t MainHandProxyTableLastFrame_Native = 0xB80;
            static constexpr std::uintptr_t OffHandProxyTable_Native = 0xB88;
            static constexpr std::uintptr_t PRT_Enemy_Prop1_Melee = 0xB90;
            static constexpr std::uintptr_t PRT_Enemy_OffHandWep_Main = 0xB98;
            static constexpr std::uintptr_t PRA_Prop1_PropPose_StrafeLayer = 0xBA0;
            static constexpr std::uintptr_t PRA_Prop1_PropPose_Idle = 0xBA8;
            static constexpr std::uintptr_t PRA_Enemy_Idle = 0xBB0;
            static constexpr std::uintptr_t PRA_OffHand_LayerPose_Strafe = 0xBB8;
            static constexpr std::uintptr_t PRA_OffHand_LayerPose_Idle = 0xBC0;
            static constexpr std::uintptr_t PRA_Prop1_PropPose_BlendSettings = 0xBC8;
            static constexpr std::uintptr_t PRA_Offhand_LayerPose_BlendSettings = 0xBD0;
            static constexpr std::uintptr_t OutputAnim_Native = 0xBD8;
            static constexpr std::uintptr_t CurrentLayeredIdlePose_Native = 0xBE0;
            static constexpr std::uintptr_t CurrentLayeredAnim_Native = 0xBE8;
            static constexpr std::uintptr_t CurrentStrafeLayerPoses_Native = 0xBF0;
            static constexpr std::uintptr_t CurrentOffhandLayeredIdlePose_Native = 0xBF8;
            static constexpr std::uintptr_t CurrentOffhandStrafeLayerPoses_Native = 0xC00;
            static constexpr std::uintptr_t CurrentOffhandLayeredAnim_Native = 0xC08;
            static constexpr std::uintptr_t CurrentBasePose_Native = 0xC10;
            static constexpr std::uintptr_t OnStatusChanged_Native = 0xC18;
            static constexpr std::uintptr_t OnPropStateChanged_Native = 0xC28;
        };

        inline static constexpr std::array<PropertyInfo, 80> Properties{{
            {"MutableAnimInstanceClass", 0x9B0, "ClassProperty"},
            {"EnemyLookAtAngleThreshold_Native", 0x9B8, "FloatProperty"},
            {"LocomotionGraph_Native", 0x9C0, "ObjectProperty"},
            {"PawnAccelerationDirectionClamped_Native", 0x9C8, "FloatProperty"},
            {"LeanAmount_Native", 0x9CC, "FloatProperty"},
            {"bEnemyShouldIdle_Native", 0x9D0, "BoolProperty"},
            {"bShouldStopMovement_Native", 0x9D1, "BoolProperty"},
            {"bShouldLandAdd_Native", 0x9D2, "BoolProperty"},
            {"bShouldLand_Native", 0x9D3, "BoolProperty"},
            {"bIsOverPawnAccelerationThreshold_E_Native", 0x9D4, "BoolProperty"},
            {"bIsOverPawnAccelerationThreshold_W_Native", 0x9D5, "BoolProperty"},
            {"bShouldTurnInPlace_Native", 0x9D6, "BoolProperty"},
            {"bShouldTurnInPlaceFromStop_Native", 0x9D7, "BoolProperty"},
            {"bShouldWalk_Native", 0x9D8, "BoolProperty"},
            {"BMFullArmsHead_Native", 0x9E0, "StructProperty"},
            {"RequestedRotationMode_Native", 0x9F0, "EnumProperty"},
            {"RootRotation_Native", 0x9F8, "StructProperty"},
            {"RootRotationLastFrame_Native", 0xA10, "StructProperty"},
            {"StartingRotation_Native", 0xA28, "StructProperty"},
            {"TargetRotation_Native", 0xA40, "StructProperty"},
            {"TargetRotationLastFrame_Native", 0xA58, "StructProperty"},
            {"SmoothedTargetRotation_Native", 0xA70, "StructProperty"},
            {"SuperSmoothedTargetRotation_Native", 0xA88, "StructProperty"},
            {"StartingAngle_Native", 0xAA0, "FloatProperty"},
            {"TargetAO_Native", 0xAA8, "StructProperty"},
            {"MontageGenericSlotWeight_Native", 0xAB8, "FloatProperty"},
            {"MontageSwingSlotWeight_Native", 0xABC, "FloatProperty"},
            {"bIsAggressive_Native", 0xAC0, "BoolProperty"},
            {"bIsAggressiveLastFrame_Native", 0xAC1, "BoolProperty"},
            {"bIsPatrolling_Native", 0xAC2, "BoolProperty"},
            {"bIsPatrollingLastFrame_Native", 0xAC3, "BoolProperty"},
            {"CurrentGameplayState_Native", 0xAC4, "EnumProperty"},
            {"CurrentGameplayStateLastFrame_Native", 0xAC5, "EnumProperty"},
            {"TargetPlayerPawn_Native", 0xAC8, "ObjectProperty"},
            {"bIsLookAtInBounds", 0xAD0, "BoolProperty"},
            {"EnemyLookAtWeight_Native", 0xAD4, "FloatProperty"},
            {"TargetPlayerLocation_Native", 0xAD8, "StructProperty"},
            {"MovingStopThreshold", 0xAF0, "FloatProperty"},
            {"ShouldWalkThreshold", 0xAF4, "FloatProperty"},
            {"AccelerationDirectionThreshold_E", 0xAF8, "FloatProperty"},
            {"AccelerationDirectionThreshold_W", 0xAFC, "FloatProperty"},
            {"RotationLinearRate", 0xB00, "FloatProperty"},
            {"RotationSmoothRate", 0xB04, "FloatProperty"},
            {"bIsMeshSpaceBlend", 0xB08, "BoolProperty"},
            {"bForceBlend", 0xB09, "BoolProperty"},
            {"RotateCurveName", 0xB0C, "NameProperty"},
            {"EnemyMainLocomotionProxyTableChooser_Native", 0xB10, "ObjectProperty"},
            {"EnemyMainProp1ProxyTableChooser_Native", 0xB18, "ObjectProperty"},
            {"EnemyMainOffHandProxyTableChooser_Native", 0xB20, "ObjectProperty"},
            {"BM_NoBlend", 0xB28, "ObjectProperty"},
            {"bHasOffhandItem_Native", 0xB30, "BoolProperty"},
            {"bIsNoBlend_Native", 0xB31, "BoolProperty"},
            {"BMDataAssetAdditiveLayer_Native", 0xB38, "ObjectProperty"},
            {"BMDataAssetOffhandAdditiveLayer_Native", 0xB40, "ObjectProperty"},
            {"CurrentAdditiveBoneMask_Native", 0xB48, "StructProperty"},
            {"CurrentOffhandAdditiveBoneMask_Native", 0xB58, "StructProperty"},
            {"PRT_Enemy_Locomotion_Main", 0xB68, "ObjectProperty"},
            {"LocomotionProxyTable_Native", 0xB70, "ObjectProperty"},
            {"MainHandProxyTable_Native", 0xB78, "ObjectProperty"},
            {"MainHandProxyTableLastFrame_Native", 0xB80, "ObjectProperty"},
            {"OffHandProxyTable_Native", 0xB88, "ObjectProperty"},
            {"PRT_Enemy_Prop1_Melee", 0xB90, "ObjectProperty"},
            {"PRT_Enemy_OffHandWep_Main", 0xB98, "ObjectProperty"},
            {"PRA_Prop1_PropPose_StrafeLayer", 0xBA0, "ObjectProperty"},
            {"PRA_Prop1_PropPose_Idle", 0xBA8, "ObjectProperty"},
            {"PRA_Enemy_Idle", 0xBB0, "ObjectProperty"},
            {"PRA_OffHand_LayerPose_Strafe", 0xBB8, "ObjectProperty"},
            {"PRA_OffHand_LayerPose_Idle", 0xBC0, "ObjectProperty"},
            {"PRA_Prop1_PropPose_BlendSettings", 0xBC8, "ObjectProperty"},
            {"PRA_Offhand_LayerPose_BlendSettings", 0xBD0, "ObjectProperty"},
            {"OutputAnim_Native", 0xBD8, "ObjectProperty"},
            {"CurrentLayeredIdlePose_Native", 0xBE0, "ObjectProperty"},
            {"CurrentLayeredAnim_Native", 0xBE8, "ObjectProperty"},
            {"CurrentStrafeLayerPoses_Native", 0xBF0, "ObjectProperty"},
            {"CurrentOffhandLayeredIdlePose_Native", 0xBF8, "ObjectProperty"},
            {"CurrentOffhandStrafeLayerPoses_Native", 0xC00, "ObjectProperty"},
            {"CurrentOffhandLayeredAnim_Native", 0xC08, "ObjectProperty"},
            {"CurrentBasePose_Native", 0xC10, "ObjectProperty"},
            {"OnStatusChanged_Native", 0xC18, "MulticastInlineDelegateProperty"},
            {"OnPropStateChanged_Native", 0xC28, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoEssenceLevelComponent
    {
        static constexpr std::string_view Name = "JunoEssenceLevelComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponComponent";
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

    struct JunoEventLimiterInterface
    {
        static constexpr std::string_view Name = "JunoEventLimiterInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoEventRouterLibrary
    {
        static constexpr std::string_view Name = "JunoEventRouterLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoFilteredEventContextCollector
    {
        static constexpr std::string_view Name = "JunoFilteredEventContextCollector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FilteredEventContextCollectorBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoFocalPointComponent
    {
        static constexpr std::string_view Name = "JunoFocalPointComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoFocalPointComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FocalPointTag = 0xD8;
            static constexpr std::uintptr_t CachedConfig = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FocalPointTag", 0xD8, "StructProperty"},
            {"CachedConfig", 0xE0, "StructProperty"},
        }};
    };

    struct JunoFocalPointComponentBase
    {
        static constexpr std::string_view Name = "JunoFocalPointComponentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t FocalPointManager = 0xC0;
            static constexpr std::uintptr_t CachedMembershipComponent = 0xC8;
            static constexpr std::uintptr_t InstigatorActor = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FocalPointManager", 0xC0, "WeakObjectProperty"},
            {"CachedMembershipComponent", 0xC8, "WeakObjectProperty"},
            {"InstigatorActor", 0xD0, "WeakObjectProperty"},
        }};
    };

    struct JunoFocalPointContributorComponent
    {
        static constexpr std::string_view Name = "JunoFocalPointContributorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoFocalPointComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FocalPointManager = 0xC0;
            static constexpr std::uintptr_t CachedMembershipComponent = 0xC8;
            static constexpr std::uintptr_t InstigatorActor = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FocalPointManager", 0xC0, "WeakObjectProperty"},
            {"CachedMembershipComponent", 0xC8, "WeakObjectProperty"},
            {"InstigatorActor", 0xD0, "WeakObjectProperty"},
        }};
    };

    struct JunoFogOfWarPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoFogOfWarPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t FogOfWarSaveDatas = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FogOfWarSaveDatas", 0x58, "StructProperty"},
        }};
    };

    struct JunoFogOfWarPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoFogOfWarPersistenceFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoFogOfWarPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoFogOfWarPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoFollowerPawnComponentBase
    {
        static constexpr std::string_view Name = "JunoFollowerPawnComponentBase";
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

    struct JunoFreeBuildBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoFreeBuildBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoFreeBuildComponent
    {
        static constexpr std::string_view Name = "JunoFreeBuildComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnableItemsRegistryType = 0xC0;
            static constexpr std::uintptr_t bIsFreeBuildEnabled = 0xC4;
            static constexpr std::uintptr_t bIsItemSpawnerEnabled = 0xC5;
            static constexpr std::uintptr_t bIsFreeBuildCostFilteringEnabled = 0xC6;
            static constexpr std::uintptr_t bIsKnowledgeFilteringEnabled = 0xC7;
            static constexpr std::uintptr_t bWasFreeBuildEverEnabled = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SpawnableItemsRegistryType", 0xC0, "StructProperty"},
            {"bIsFreeBuildEnabled", 0xC4, "BoolProperty"},
            {"bIsItemSpawnerEnabled", 0xC5, "BoolProperty"},
            {"bIsFreeBuildCostFilteringEnabled", 0xC6, "BoolProperty"},
            {"bIsKnowledgeFilteringEnabled", 0xC7, "BoolProperty"},
            {"bWasFreeBuildEverEnabled", 0xC8, "BoolProperty"},
        }};
    };

    struct JunoFreeBuildPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoFreeBuildPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t FreeBuildSaveData = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FreeBuildSaveData", 0x78, "StructProperty"},
        }};
    };

    struct JunoFreeBuildPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoFreeBuildPersistenceFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoFreeBuildPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoFreeBuildPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoGameFeatureAction_AddJunoAnalytics
    {
        static constexpr std::string_view Name = "JunoGameFeatureAction_AddJunoAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoAnalytics = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JunoAnalytics", 0x28, "ObjectProperty"},
        }};
    };

    struct JunoGameFeatureAction_PreloadAssets
    {
        static constexpr std::string_view Name = "JunoGameFeatureAction_PreloadAssets";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t AssetsToPreload = 0x28;
            static constexpr std::uintptr_t ServerOnlyAssetsToPreload = 0x38;
            static constexpr std::uintptr_t ClientOnlyAssetsToPreload = 0x48;
            static constexpr std::uintptr_t ClassesToPreload = 0x58;
            static constexpr std::uintptr_t ServerOnlyClassesToPreload = 0x68;
            static constexpr std::uintptr_t ClientOnlyClassesToPreload = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AssetsToPreload", 0x28, "ArrayProperty"},
            {"ServerOnlyAssetsToPreload", 0x38, "ArrayProperty"},
            {"ClientOnlyAssetsToPreload", 0x48, "ArrayProperty"},
            {"ClassesToPreload", 0x58, "ArrayProperty"},
            {"ServerOnlyClassesToPreload", 0x68, "ArrayProperty"},
            {"ClientOnlyClassesToPreload", 0x78, "ArrayProperty"},
        }};
    };

    struct JunoGameModeComponent_PawnEffects
    {
        static constexpr std::string_view Name = "JunoGameModeComponent_PawnEffects";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EffectRegistryType = 0xC0;
            static constexpr std::uintptr_t SetByCallerMagnitudeTag = 0xC4;
            static constexpr std::uintptr_t CachedEffectMap = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"EffectRegistryType", 0xC0, "StructProperty"},
            {"SetByCallerMagnitudeTag", 0xC4, "StructProperty"},
            {"CachedEffectMap", 0xC8, "MapProperty"},
        }};
    };

    struct JunoGameNativeNativeFunctionLibrary
    {
        static constexpr std::string_view Name = "JunoGameNativeNativeFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoGameStateComponent_Codex
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_Codex";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCodexEnabled = 0xC0;
            static constexpr std::uintptr_t CodexEntryRegistryType = 0xD0;
            static constexpr std::uintptr_t RecipeFilterDataRegistryType = 0xD4;
            static constexpr std::uintptr_t bIsCodexEnabled = 0xD8;
            static constexpr std::uintptr_t ItemTagToEntryName = 0xF0;
            static constexpr std::uintptr_t ItemDefinitionToEntryName = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnCodexEnabled", 0xC0, "MulticastInlineDelegateProperty"},
            {"CodexEntryRegistryType", 0xD0, "StructProperty"},
            {"RecipeFilterDataRegistryType", 0xD4, "StructProperty"},
            {"bIsCodexEnabled", 0xD8, "BoolProperty"},
            {"ItemTagToEntryName", 0xF0, "MapProperty"},
            {"ItemDefinitionToEntryName", 0x100, "MapProperty"},
        }};
    };

    struct JunoGameStateComponent_Crafting
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_Crafting";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent_Crafting";
        struct Offsets
        {
            static constexpr std::uintptr_t DirectOutputResults = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DirectOutputResults", 0x1A8, "MapProperty"},
        }};
    };

    struct JunoGameStateComponent_DataBase
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_DataBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bLoadOnClient = 0xD0;
            static constexpr std::uintptr_t bLoadOnServer = 0xD1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bLoadOnClient", 0xD0, "BoolProperty"},
            {"bLoadOnServer", 0xD1, "BoolProperty"},
        }};
    };

    struct JunoGameStateComponent_GameEventStream
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_GameEventStream";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxGameEventEntries = 0xC0;
            static constexpr std::uintptr_t GameEventEntries = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaxGameEventEntries", 0xC0, "IntProperty"},
            {"GameEventEntries", 0xC8, "StructProperty"},
        }};
    };

    struct JunoGameStateComponent_Health
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_Health";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
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

    struct JunoGameStateComponent_Inventory
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_Inventory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
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

    struct JunoGameStateComponent_Loot
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_Loot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LootTierTables = 0xD0;
            static constexpr std::uintptr_t LootPackageTables = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LootTierTables", 0xD0, "ArrayProperty"},
            {"LootPackageTables", 0xE0, "ArrayProperty"},
        }};
    };

    struct JunoGameStateComponent_PickupManagement
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_PickupManagement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent_PickupManagement";
        struct Offsets
        {
            static constexpr std::uintptr_t SettingsRow = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SettingsRow", 0x150, "StructProperty"},
        }};
    };

    struct JunoGameStateComponent_QuestStateManager
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_QuestStateManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
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

    struct JunoGameStateComponent_Sleep
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_Sleep";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
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

    struct JunoGameStateComponent_WorldReactionsManager
    {
        static constexpr std::string_view Name = "JunoGameStateComponent_WorldReactionsManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent_WorldReactionsManager";
        struct Offsets
        {
            static constexpr std::uintptr_t OnReplicatedWorldStatesChanged = 0x1F0;
            static constexpr std::uintptr_t WaitForPlayspaceAction = 0x210;
            static constexpr std::uintptr_t ConditionalStatePatchDataRegistry = 0x218;
            static constexpr std::uintptr_t ReplicatedWorldStates = 0x248;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnReplicatedWorldStatesChanged", 0x1F0, "MulticastInlineDelegateProperty"},
            {"WaitForPlayspaceAction", 0x210, "ObjectProperty"},
            {"ConditionalStatePatchDataRegistry", 0x218, "StructProperty"},
            {"ReplicatedWorldStates", 0x248, "StructProperty"},
        }};
    };

    struct JunoGameStateSettings
    {
        static constexpr std::string_view Name = "JunoGameStateSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PreOverrideRuntimeSettings = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PreOverrideRuntimeSettings", 0xC0, "ObjectProperty"},
        }};
    };

    struct JunoGameStateTemperatureComponent
    {
        static constexpr std::string_view Name = "JunoGameStateTemperatureComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TemperatureToFloatMap = 0xC0;
            static constexpr std::uintptr_t TemperatureThresholdsMap = 0xD0;
            static constexpr std::uintptr_t TemperatureRange = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TemperatureToFloatMap", 0xC0, "MapProperty"},
            {"TemperatureThresholdsMap", 0xD0, "MapProperty"},
            {"TemperatureRange", 0xE0, "StructProperty"},
        }};
    };

    struct JunoGameStateWeatherComponent
    {
        static constexpr std::string_view Name = "JunoGameStateWeatherComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalizedWeatherStateSubclass = 0xC0;
            static constexpr std::uintptr_t WeatherPersistenceFeatureHelper = 0xD0;
            static constexpr std::uintptr_t SeasonTable = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LocalizedWeatherStateSubclass", 0xC0, "ClassProperty"},
            {"WeatherPersistenceFeatureHelper", 0xD0, "ObjectProperty"},
            {"SeasonTable", 0xE0, "ObjectProperty"},
        }};
    };

    struct JunoGeneratePersistenceAssetsReportCommandlet
    {
        static constexpr std::string_view Name = "JunoGeneratePersistenceAssetsReportCommandlet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Commandlet";
        struct Offsets
        {
            static constexpr std::uintptr_t HelpDescription = 0x28;
            static constexpr std::uintptr_t HelpUsage = 0x38;
            static constexpr std::uintptr_t HelpWebLink = 0x48;
            static constexpr std::uintptr_t HelpParamNames = 0x58;
            static constexpr std::uintptr_t HelpParamDescriptions = 0x68;
            static constexpr std::uintptr_t FastExit = 0x78;
            static constexpr std::uintptr_t IsClient = 0x78;
            static constexpr std::uintptr_t IsEditor = 0x78;
            static constexpr std::uintptr_t IsServer = 0x78;
            static constexpr std::uintptr_t LogToConsole = 0x78;
            static constexpr std::uintptr_t ShowErrorCount = 0x78;
            static constexpr std::uintptr_t ShowProgress = 0x78;
            static constexpr std::uintptr_t UseCommandletResultAsExitCode = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"HelpDescription", 0x28, "StrProperty"},
            {"HelpUsage", 0x38, "StrProperty"},
            {"HelpWebLink", 0x48, "StrProperty"},
            {"HelpParamNames", 0x58, "ArrayProperty"},
            {"HelpParamDescriptions", 0x68, "ArrayProperty"},
            {"FastExit", 0x78, "BoolProperty"},
            {"IsClient", 0x78, "BoolProperty"},
            {"IsEditor", 0x78, "BoolProperty"},
            {"IsServer", 0x78, "BoolProperty"},
            {"LogToConsole", 0x78, "BoolProperty"},
            {"ShowErrorCount", 0x78, "BoolProperty"},
            {"ShowProgress", 0x78, "BoolProperty"},
            {"UseCommandletResultAsExitCode", 0x78, "BoolProperty"},
        }};
    };

    struct JunoGeometryCollectionAssemblerComponent
    {
        static constexpr std::string_view Name = "JunoGeometryCollectionAssemblerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AssemblyRatioInterpSpeed = 0xC0;
            static constexpr std::uintptr_t AssemblerData = 0xC8;
            static constexpr std::uintptr_t bFreeMemoryWhenNotAnimating = 0xD0;
            static constexpr std::uintptr_t bDestroyComponentOnAssemblyComplete = 0xD1;
            static constexpr std::uintptr_t GeometryCollectionInfos = 0xD8;
            static constexpr std::uintptr_t OnAssemblyVisualsAnimationStart = 0xF8;
            static constexpr std::uintptr_t OnAssemblyVisualsAnimationUpdated = 0x108;
            static constexpr std::uintptr_t OnAssemblyVisualsAnimationEnd = 0x118;
            static constexpr std::uintptr_t OnAssemblyGeometryAnimationEnd = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"AssemblyRatioInterpSpeed", 0xC0, "FloatProperty"},
            {"AssemblerData", 0xC8, "ObjectProperty"},
            {"bFreeMemoryWhenNotAnimating", 0xD0, "BoolProperty"},
            {"bDestroyComponentOnAssemblyComplete", 0xD1, "BoolProperty"},
            {"GeometryCollectionInfos", 0xD8, "MapProperty"},
            {"OnAssemblyVisualsAnimationStart", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnAssemblyVisualsAnimationUpdated", 0x108, "MulticastInlineDelegateProperty"},
            {"OnAssemblyVisualsAnimationEnd", 0x118, "MulticastInlineDelegateProperty"},
            {"OnAssemblyGeometryAnimationEnd", 0x128, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoGeometryCollectionAssemblerData
    {
        static constexpr std::string_view Name = "JunoGeometryCollectionAssemblerData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Implementation = 0x28;
            static constexpr std::uintptr_t DurationType = 0x2C;
            static constexpr std::uintptr_t LayerHeight = 0x30;
            static constexpr std::uintptr_t LayerCount = 0x34;
            static constexpr std::uintptr_t TimeToAssemble = 0x38;
            static constexpr std::uintptr_t SingleGeometryTimeToAssemble = 0x60;
            static constexpr std::uintptr_t ZBuildOffset = 0x88;
            static constexpr std::uintptr_t DisassembledZDistance = 0xB0;
            static constexpr std::uintptr_t DisassembledZDistanceRandomRatio = 0xD8;
            static constexpr std::uintptr_t DisassembledRotationAmount = 0x100;
            static constexpr std::uintptr_t DisassembledStartingScale = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Implementation", 0x28, "EnumProperty"},
            {"DurationType", 0x2C, "EnumProperty"},
            {"LayerHeight", 0x30, "FloatProperty"},
            {"LayerCount", 0x34, "IntProperty"},
            {"TimeToAssemble", 0x38, "StructProperty"},
            {"SingleGeometryTimeToAssemble", 0x60, "StructProperty"},
            {"ZBuildOffset", 0x88, "StructProperty"},
            {"DisassembledZDistance", 0xB0, "StructProperty"},
            {"DisassembledZDistanceRandomRatio", 0xD8, "StructProperty"},
            {"DisassembledRotationAmount", 0x100, "StructProperty"},
            {"DisassembledStartingScale", 0x128, "StructProperty"},
        }};
    };

    struct JunoGeometryCollectionAssemblerUserInterface
    {
        static constexpr std::string_view Name = "JunoGeometryCollectionAssemblerUserInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoGliderAnimInstance
    {
        static constexpr std::string_view Name = "JunoGliderAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGliderAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bGliderUseFastDeploy = 0x720;
            static constexpr std::uintptr_t bIsParachuteOpen = 0x720;
            static constexpr std::uintptr_t bIsSkydiving = 0x720;
            static constexpr std::uintptr_t GliderPitch = 0x724;
            static constexpr std::uintptr_t GliderRoll = 0x728;
            static constexpr std::uintptr_t PlayerAnimInstance = 0x730;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bGliderUseFastDeploy", 0x720, "BoolProperty"},
            {"bIsParachuteOpen", 0x720, "BoolProperty"},
            {"bIsSkydiving", 0x720, "BoolProperty"},
            {"GliderPitch", 0x724, "FloatProperty"},
            {"GliderRoll", 0x728, "FloatProperty"},
            {"PlayerAnimInstance", 0x730, "ObjectProperty"},
        }};
    };

    struct JunoGliderAttributeSet
    {
        static constexpr std::string_view Name = "JunoGliderAttributeSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxAcceleration = 0x48;
            static constexpr std::uintptr_t LateralFriction = 0x58;
            static constexpr std::uintptr_t MaxLateralSpeed = 0x68;
            static constexpr std::uintptr_t TerminalVelocity = 0x78;
            static constexpr std::uintptr_t UpwardTerminalVelocity = 0x88;
            static constexpr std::uintptr_t GravityScalar = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MaxAcceleration", 0x48, "StructProperty"},
            {"LateralFriction", 0x58, "StructProperty"},
            {"MaxLateralSpeed", 0x68, "StructProperty"},
            {"TerminalVelocity", 0x78, "StructProperty"},
            {"UpwardTerminalVelocity", 0x88, "StructProperty"},
            {"GravityScalar", 0x98, "StructProperty"},
        }};
    };

    struct JunoGlobalKnowledgeComponent
    {
        static constexpr std::string_view Name = "JunoGlobalKnowledgeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentWorldKnowledge = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentWorldKnowledge", 0x168, "StructProperty"},
        }};
    };

    struct JunoGlobals
    {
        static constexpr std::string_view Name = "JunoGlobals";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoGrassOccluderSubsystem
    {
        static constexpr std::string_view Name = "JunoGrassOccluderSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t SubsystemDataAssetPath = 0x48;
            static constexpr std::uintptr_t SubsystemData = 0x60;
            static constexpr std::uintptr_t FootprintMIDPool = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SubsystemDataAssetPath", 0x48, "StructProperty"},
            {"SubsystemData", 0x60, "ObjectProperty"},
            {"FootprintMIDPool", 0x78, "ArrayProperty"},
        }};
    };

    struct JunoGrassOccluderSubsystemData
    {
        static constexpr std::string_view Name = "JunoGrassOccluderSubsystemData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialParameterCollection = 0x28;
            static constexpr std::uintptr_t TextureTarget = 0x30;
            static constexpr std::uintptr_t FootprintMaterial = 0x38;
            static constexpr std::uintptr_t CaptureLocationParameterName = 0x40;
            static constexpr std::uintptr_t CaptureSize = 0x48;
            static constexpr std::uintptr_t SettleRedrawDelay = 0x50;
            static constexpr std::uintptr_t RecenterEdgeMargin = 0x58;
            static constexpr std::uintptr_t BoundsExpansion = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"MaterialParameterCollection", 0x28, "ObjectProperty"},
            {"TextureTarget", 0x30, "ObjectProperty"},
            {"FootprintMaterial", 0x38, "ObjectProperty"},
            {"CaptureLocationParameterName", 0x40, "NameProperty"},
            {"CaptureSize", 0x48, "DoubleProperty"},
            {"SettleRedrawDelay", 0x50, "DoubleProperty"},
            {"RecenterEdgeMargin", 0x58, "DoubleProperty"},
            {"BoundsExpansion", 0x60, "DoubleProperty"},
        }};
    };

    struct JunoGuidedBuildCampCommunicationComponent
    {
        static constexpr std::string_view Name = "JunoGuidedBuildCampCommunicationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PersistentTagsToApplyOnStart = 0xC0;
            static constexpr std::uintptr_t PeristentTagsToApplyOnCompletion = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PersistentTagsToApplyOnStart", 0xC0, "StructProperty"},
            {"PeristentTagsToApplyOnCompletion", 0xE0, "StructProperty"},
        }};
    };

    struct JunoGuidedBuildingActor
    {
        static constexpr std::string_view Name = "JunoGuidedBuildingActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingProp";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCurrentStageUpdateDelegate = 0xC38;
            static constexpr std::uintptr_t OnStageUpdateDelegate = 0xC48;
            static constexpr std::uintptr_t OnStageCompleteDelegate = 0xC58;
            static constexpr std::uintptr_t OnSectionCompleteDelegate = 0xC68;
            static constexpr std::uintptr_t OnSetCompleteDelegate = 0xC78;
            static constexpr std::uintptr_t OnSetIncompleteDelegate = 0xC88;
            static constexpr std::uintptr_t OnSetUnfinishedDelegate = 0xC98;
            static constexpr std::uintptr_t OnCurrentStageChange = 0xCA8;
            static constexpr std::uintptr_t OnSnapsUpdatedDelegate = 0xCB8;
            static constexpr std::uintptr_t OnEntryStateChanged = 0xCC8;
            static constexpr std::uintptr_t GuidedBuildingRecipe = 0xCE8;
            static constexpr std::uintptr_t DataArray = 0xCF0;
            static constexpr std::uintptr_t bHasMovedPlacementRestore = 0xD00;
            static constexpr std::uintptr_t StateArray = 0xD08;
            static constexpr std::uintptr_t CurrentStage = 0xD68;
            static constexpr std::uintptr_t bWasMovedByBuilderTool = 0xD70;
            static constexpr std::uintptr_t MovedRestoreStage = 0xD74;
            static constexpr std::uintptr_t SetCompleteState = 0xD80;
            static constexpr std::uintptr_t TimeStarted = 0xD90;
            static constexpr std::uintptr_t OwningPlayerID = 0xD98;
            static constexpr std::uintptr_t SetData = 0xDC8;
            static constexpr std::uintptr_t LocalRegisteredController = 0xE58;
            static constexpr std::uintptr_t TerrainVisualModifierActor = 0xE60;
            static constexpr std::uintptr_t RegisteredPlayers = 0xED0;
            static constexpr std::uintptr_t BlockedAutoCompleteIndexes = 0xF58;
            static constexpr std::uintptr_t AutoCompleteInstigatingPawn = 0xF68;
            static constexpr std::uintptr_t OptionalCameraMode = 0xF70;
            static constexpr std::uintptr_t BuildID = 0xF78;
            static constexpr std::uintptr_t PendingAutoCompleteJobs = 0xF88;
            static constexpr std::uintptr_t CurrentAutoCompleteBatches = 0xF98;
            static constexpr std::uintptr_t bSkipFoundation = 0xFE0;
            static constexpr std::uintptr_t AutoCompleteStageKey = 0xFE4;
            static constexpr std::uintptr_t bInstantBuildAutoComplete = 0xFEC;
            static constexpr std::uintptr_t DisplayActorClass = 0xFF0;
            static constexpr std::uintptr_t DisplayActor = 0xFF8;
            static constexpr std::uintptr_t bEnablePreciseCollision = 0x1000;
            static constexpr std::uintptr_t BehaviorClasses = 0x1008;
            static constexpr std::uintptr_t bGuidedBuildConstructionFlowDisabled = 0x101D;
            static constexpr std::uintptr_t ConnectivityComponent = 0x10B8;
            static constexpr std::uintptr_t QuickBuildConversionData = 0x10D0;
        };

        inline static constexpr std::array<PropertyInfo, 40> Properties{{
            {"OnCurrentStageUpdateDelegate", 0xC38, "MulticastInlineDelegateProperty"},
            {"OnStageUpdateDelegate", 0xC48, "MulticastInlineDelegateProperty"},
            {"OnStageCompleteDelegate", 0xC58, "MulticastInlineDelegateProperty"},
            {"OnSectionCompleteDelegate", 0xC68, "MulticastInlineDelegateProperty"},
            {"OnSetCompleteDelegate", 0xC78, "MulticastInlineDelegateProperty"},
            {"OnSetIncompleteDelegate", 0xC88, "MulticastInlineDelegateProperty"},
            {"OnSetUnfinishedDelegate", 0xC98, "MulticastInlineDelegateProperty"},
            {"OnCurrentStageChange", 0xCA8, "MulticastInlineDelegateProperty"},
            {"OnSnapsUpdatedDelegate", 0xCB8, "MulticastInlineDelegateProperty"},
            {"OnEntryStateChanged", 0xCC8, "MulticastInlineDelegateProperty"},
            {"GuidedBuildingRecipe", 0xCE8, "NameProperty"},
            {"DataArray", 0xCF0, "ArrayProperty"},
            {"bHasMovedPlacementRestore", 0xD00, "BoolProperty"},
            {"StateArray", 0xD08, "StructProperty"},
            {"CurrentStage", 0xD68, "StructProperty"},
            {"bWasMovedByBuilderTool", 0xD70, "BoolProperty"},
            {"MovedRestoreStage", 0xD74, "StructProperty"},
            {"SetCompleteState", 0xD80, "StructProperty"},
            {"TimeStarted", 0xD90, "StructProperty"},
            {"OwningPlayerID", 0xD98, "StructProperty"},
            {"SetData", 0xDC8, "StructProperty"},
            {"LocalRegisteredController", 0xE58, "ObjectProperty"},
            {"TerrainVisualModifierActor", 0xE60, "ObjectProperty"},
            {"RegisteredPlayers", 0xED0, "StructProperty"},
            {"BlockedAutoCompleteIndexes", 0xF58, "ArrayProperty"},
            {"AutoCompleteInstigatingPawn", 0xF68, "WeakObjectProperty"},
            {"OptionalCameraMode", 0xF70, "ClassProperty"},
            {"BuildID", 0xF78, "StructProperty"},
            {"PendingAutoCompleteJobs", 0xF88, "ArrayProperty"},
            {"CurrentAutoCompleteBatches", 0xF98, "ArrayProperty"},
            {"bSkipFoundation", 0xFE0, "BoolProperty"},
            {"AutoCompleteStageKey", 0xFE4, "StructProperty"},
            {"bInstantBuildAutoComplete", 0xFEC, "BoolProperty"},
            {"DisplayActorClass", 0xFF0, "ClassProperty"},
            {"DisplayActor", 0xFF8, "ObjectProperty"},
            {"bEnablePreciseCollision", 0x1000, "BoolProperty"},
            {"BehaviorClasses", 0x1008, "ArrayProperty"},
            {"bGuidedBuildConstructionFlowDisabled", 0x101D, "BoolProperty"},
            {"ConnectivityComponent", 0x10B8, "ObjectProperty"},
            {"QuickBuildConversionData", 0x10D0, "ArrayProperty"},
        }};
    };

    struct JunoGuidedBuildingBCOInterface
    {
        static constexpr std::string_view Name = "JunoGuidedBuildingBCOInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoGuidedBuildingBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoGuidedBuildingBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoGuidedBuildingChildActorComponent
    {
        static constexpr std::string_view Name = "JunoGuidedBuildingChildActorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ChildActorClass = 0x240;
            static constexpr std::uintptr_t ChildActor = 0x248;
            static constexpr std::uintptr_t ChildActorTemplate = 0x250;
            static constexpr std::uintptr_t bChildActorIsTransient = 0x270;
            static constexpr std::uintptr_t bSetOwner = 0x270;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ChildActorClass", 0x240, "ClassProperty"},
            {"ChildActor", 0x248, "ObjectProperty"},
            {"ChildActorTemplate", 0x250, "ObjectProperty"},
            {"bChildActorIsTransient", 0x270, "BoolProperty"},
            {"bSetOwner", 0x270, "BoolProperty"},
        }};
    };

    struct JunoGuidedBuildingInteractionComponent
    {
        static constexpr std::string_view Name = "JunoGuidedBuildingInteractionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ParentBuilding = 0xC8;
            static constexpr std::uintptr_t InteractionText = 0xD0;
            static constexpr std::uintptr_t InteractRatingAdjustment = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ParentBuilding", 0xC8, "WeakObjectProperty"},
            {"InteractionText", 0xD0, "TextProperty"},
            {"InteractRatingAdjustment", 0xE0, "FloatProperty"},
        }};
    };

    struct JunoGuidedBuildingInterface
    {
        static constexpr std::string_view Name = "JunoGuidedBuildingInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoGuidedBuildingLandscapeVisualModifierActor
    {
        static constexpr std::string_view Name = "JunoGuidedBuildingLandscapeVisualModifierActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t VisualModifier = 0x280;
            static constexpr std::uintptr_t SavedActorGuid = 0x28C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VisualModifier", 0x280, "ObjectProperty"},
            {"SavedActorGuid", 0x28C, "StructProperty"},
        }};
    };

    struct JunoGuidedBuildingPreviewComponent
    {
        static constexpr std::string_view Name = "JunoGuidedBuildingPreviewComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingPreviewComponent";
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

    struct JunoGuidedBuildingSettings
    {
        static constexpr std::string_view Name = "JunoGuidedBuildingSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ZLevelSize = 0x278;
            static constexpr std::uintptr_t SortRankTags = 0x280;
            static constexpr std::uintptr_t BaseActorClasses = 0x290;
            static constexpr std::uintptr_t AllowedInterfaces = 0x2A0;
            static constexpr std::uintptr_t ExcludedBaseActorClasses = 0x2B0;
            static constexpr std::uintptr_t GeneratedData = 0x2C0;
            static constexpr std::uintptr_t DefaultPluginsToActivate = 0x370;
            static constexpr std::uintptr_t PrimaryPlaylist = 0x380;
            static constexpr std::uintptr_t ClassToRecipeMap = 0x388;
            static constexpr std::uintptr_t CurrentState = 0x398;
            static constexpr std::uintptr_t ActorList = 0x4D8;
            static constexpr std::uintptr_t PassThroughTags = 0x4E8;
            static constexpr std::uintptr_t bUpdateRetainedData = 0x4F8;
            static constexpr std::uintptr_t bCreateDisplayActor = 0x4F9;
            static constexpr std::uintptr_t bCreateDisplayActorInMinimalPlugin = 0x4FA;
            static constexpr std::uintptr_t bEnablePreciseCollision = 0x4FB;
            static constexpr std::uintptr_t bCreateCustomMesh = 0x4FC;
            static constexpr std::uintptr_t DefaultMesh = 0x500;
            static constexpr std::uintptr_t bConvexHullsWithSimplerCollisionShapes = 0x508;
            static constexpr std::uintptr_t ConvexHullApproximationOptions = 0x50C;
            static constexpr std::uintptr_t bMergeCollision = 0x518;
            static constexpr std::uintptr_t MergeOptions = 0x520;
            static constexpr std::uintptr_t bSimplifyHull = 0x5A0;
            static constexpr std::uintptr_t HullSimplificationOptions = 0x5A4;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"ZLevelSize", 0x278, "FloatProperty"},
            {"SortRankTags", 0x280, "ArrayProperty"},
            {"BaseActorClasses", 0x290, "ArrayProperty"},
            {"AllowedInterfaces", 0x2A0, "ArrayProperty"},
            {"ExcludedBaseActorClasses", 0x2B0, "ArrayProperty"},
            {"GeneratedData", 0x2C0, "StructProperty"},
            {"DefaultPluginsToActivate", 0x370, "ArrayProperty"},
            {"PrimaryPlaylist", 0x380, "NameProperty"},
            {"ClassToRecipeMap", 0x388, "MapProperty"},
            {"CurrentState", 0x398, "StructProperty"},
            {"ActorList", 0x4D8, "ArrayProperty"},
            {"PassThroughTags", 0x4E8, "ArrayProperty"},
            {"bUpdateRetainedData", 0x4F8, "BoolProperty"},
            {"bCreateDisplayActor", 0x4F9, "BoolProperty"},
            {"bCreateDisplayActorInMinimalPlugin", 0x4FA, "BoolProperty"},
            {"bEnablePreciseCollision", 0x4FB, "BoolProperty"},
            {"bCreateCustomMesh", 0x4FC, "BoolProperty"},
            {"DefaultMesh", 0x500, "ObjectProperty"},
            {"bConvexHullsWithSimplerCollisionShapes", 0x508, "BoolProperty"},
            {"ConvexHullApproximationOptions", 0x50C, "StructProperty"},
            {"bMergeCollision", 0x518, "BoolProperty"},
            {"MergeOptions", 0x520, "StructProperty"},
            {"bSimplifyHull", 0x5A0, "BoolProperty"},
            {"HullSimplificationOptions", 0x5A4, "StructProperty"},
        }};
    };

    struct JunoHarvestingComponent
    {
        static constexpr std::string_view Name = "JunoHarvestingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t HeightOffset = 0xC0;
            static constexpr std::uintptr_t HorizontalConeRadius = 0xC4;
            static constexpr std::uintptr_t VerticalConeRadius = 0xC8;
            static constexpr std::uintptr_t BuildingTagToResourceDataTable = 0xD0;
            static constexpr std::uintptr_t ResourceIdentifierTags = 0xD8;
            static constexpr std::uintptr_t BuildingTagsToIgnoreForResourceSplitting = 0xF8;
            static constexpr std::uintptr_t CraftingIngredientRegistryType = 0x118;
            static constexpr std::uintptr_t TimeToRegenHealth = 0x11C;
            static constexpr std::uintptr_t BuildingsHitList = 0x120;
            static constexpr std::uintptr_t ResourcePercentToReturn = 0x130;
            static constexpr std::uintptr_t PickupsPerResource = 0x134;
            static constexpr std::uintptr_t PickupClassPtr = 0x138;
            static constexpr std::uintptr_t TossSpeed = 0x158;
            static constexpr std::uintptr_t ConeHalfAngleDegrees = 0x15C;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"HeightOffset", 0xC0, "FloatProperty"},
            {"HorizontalConeRadius", 0xC4, "FloatProperty"},
            {"VerticalConeRadius", 0xC8, "FloatProperty"},
            {"BuildingTagToResourceDataTable", 0xD0, "ObjectProperty"},
            {"ResourceIdentifierTags", 0xD8, "StructProperty"},
            {"BuildingTagsToIgnoreForResourceSplitting", 0xF8, "StructProperty"},
            {"CraftingIngredientRegistryType", 0x118, "StructProperty"},
            {"TimeToRegenHealth", 0x11C, "FloatProperty"},
            {"BuildingsHitList", 0x120, "ArrayProperty"},
            {"ResourcePercentToReturn", 0x130, "FloatProperty"},
            {"PickupsPerResource", 0x134, "IntProperty"},
            {"PickupClassPtr", 0x138, "SoftClassProperty"},
            {"TossSpeed", 0x158, "FloatProperty"},
            {"ConeHalfAngleDegrees", 0x15C, "FloatProperty"},
        }};
    };

    struct JunoHealthComponent
    {
        static constexpr std::string_view Name = "JunoHealthComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
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

    struct JunoHealthGameStateInterface
    {
        static constexpr std::string_view Name = "JunoHealthGameStateInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoHeroCreatureAnimLogic
    {
        static constexpr std::string_view Name = "JunoHeroCreatureAnimLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCreatureAnimLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t LookAtV2_Enable = 0x830;
            static constexpr std::uintptr_t LookAtV2_OriginJoint = 0x834;
            static constexpr std::uintptr_t LookAtV2_DisableInLocomotionCurveName = 0x838;
            static constexpr std::uintptr_t LookAtV2_EnableInMontageCurveName = 0x83C;
            static constexpr std::uintptr_t LookAtV2_OriginPos = 0x840;
            static constexpr std::uintptr_t LookAtV2_AimTargetLocationOffset = 0x858;
            static constexpr std::uintptr_t LookAtV2_MinDistance = 0x870;
            static constexpr std::uintptr_t bOnGroundAndNotMoving_Native = 0x874;
            static constexpr std::uintptr_t bNotFallingAndNotJumping_Native = 0x875;
            static constexpr std::uintptr_t NotSurfaceSwimming_Native = 0x878;
            static constexpr std::uintptr_t AnimCurveIsMoving_Native = 0x87C;
            static constexpr std::uintptr_t PawnIsMoving2DAlpha = 0x880;
            static constexpr std::uintptr_t CreatureIdleBreakMinTime = 0x884;
            static constexpr std::uintptr_t CreatureIdleBreakMaxTime = 0x888;
            static constexpr std::uintptr_t CreatureMovingIdleBreakMinTime = 0x88C;
            static constexpr std::uintptr_t CreatureMovingIdleBreakMaxTime = 0x890;
            static constexpr std::uintptr_t LookAtV2_Weight_Native = 0x894;
            static constexpr std::uintptr_t LookAtV2_Target_Native = 0x898;
            static constexpr std::uintptr_t LookAtV2_HorizontalAngle_Native = 0x8B0;
            static constexpr std::uintptr_t LookAtV2_VerticalAngle_Native = 0x8B4;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"LookAtV2_Enable", 0x830, "BoolProperty"},
            {"LookAtV2_OriginJoint", 0x834, "NameProperty"},
            {"LookAtV2_DisableInLocomotionCurveName", 0x838, "NameProperty"},
            {"LookAtV2_EnableInMontageCurveName", 0x83C, "NameProperty"},
            {"LookAtV2_OriginPos", 0x840, "StructProperty"},
            {"LookAtV2_AimTargetLocationOffset", 0x858, "StructProperty"},
            {"LookAtV2_MinDistance", 0x870, "FloatProperty"},
            {"bOnGroundAndNotMoving_Native", 0x874, "BoolProperty"},
            {"bNotFallingAndNotJumping_Native", 0x875, "BoolProperty"},
            {"NotSurfaceSwimming_Native", 0x878, "FloatProperty"},
            {"AnimCurveIsMoving_Native", 0x87C, "FloatProperty"},
            {"PawnIsMoving2DAlpha", 0x880, "FloatProperty"},
            {"CreatureIdleBreakMinTime", 0x884, "FloatProperty"},
            {"CreatureIdleBreakMaxTime", 0x888, "FloatProperty"},
            {"CreatureMovingIdleBreakMinTime", 0x88C, "FloatProperty"},
            {"CreatureMovingIdleBreakMaxTime", 0x890, "FloatProperty"},
            {"LookAtV2_Weight_Native", 0x894, "FloatProperty"},
            {"LookAtV2_Target_Native", 0x898, "StructProperty"},
            {"LookAtV2_HorizontalAngle_Native", 0x8B0, "FloatProperty"},
            {"LookAtV2_VerticalAngle_Native", 0x8B4, "FloatProperty"},
        }};
    };

    struct JunoHeroCreatureAnimLogic_Bear
    {
        static constexpr std::string_view Name = "JunoHeroCreatureAnimLogic_Bear";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoHeroCreatureAnimLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t bIdleLandToMovement_Native = 0x8C0;
            static constexpr std::uintptr_t LoopsMoveSpeedClamped_Native = 0x8C4;
            static constexpr std::uintptr_t GetRootOffsetMode_Native = 0x8C8;
            static constexpr std::uintptr_t GetRootOffsetHalfLife_Native = 0x8CC;
            static constexpr std::uintptr_t bIsBerserk = 0x8D0;
            static constexpr std::uintptr_t BearLocmotionSettings = 0x8D4;
            static constexpr std::uintptr_t CachedStateData_Locomotion_Idle_Land = 0x8E4;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bIdleLandToMovement_Native", 0x8C0, "BoolProperty"},
            {"LoopsMoveSpeedClamped_Native", 0x8C4, "FloatProperty"},
            {"GetRootOffsetMode_Native", 0x8C8, "EnumProperty"},
            {"GetRootOffsetHalfLife_Native", 0x8CC, "FloatProperty"},
            {"bIsBerserk", 0x8D0, "BoolProperty"},
            {"BearLocmotionSettings", 0x8D4, "StructProperty"},
            {"CachedStateData_Locomotion_Idle_Land", 0x8E4, "StructProperty"},
        }};
    };

    struct JunoHeroCreatureAnimLogic_Brute
    {
        static constexpr std::string_view Name = "JunoHeroCreatureAnimLogic_Brute";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoHeroCreatureAnimLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsMoving2dAndIsAggressive_Native = 0x8C0;
            static constexpr std::uintptr_t bIsAggressive = 0x8C1;
            static constexpr std::uintptr_t bPawnIdleBreakTimerExpiredAndIsNotAggressive_Native = 0x8C2;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bIsMoving2dAndIsAggressive_Native", 0x8C0, "BoolProperty"},
            {"bIsAggressive", 0x8C1, "BoolProperty"},
            {"bPawnIdleBreakTimerExpiredAndIsNotAggressive_Native", 0x8C2, "BoolProperty"},
        }};
    };

    struct JunoHeroCreatureAnimLogic_ButterCake
    {
        static constexpr std::string_view Name = "JunoHeroCreatureAnimLogic_ButterCake";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoHeroCreatureAnimLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t ControlRigAlpha_Native = 0x8C0;
            static constexpr std::uintptr_t IsIdeling_Native = 0x8C4;
            static constexpr std::uintptr_t IsIdeleBreak_Native = 0x8C8;
            static constexpr std::uintptr_t RootSmoothingWeight_Native = 0x8CC;
            static constexpr std::uintptr_t ControlRigJumpingWeightSmoothed = 0x8D0;
            static constexpr std::uintptr_t LookAtWeight_Native = 0x8D4;
            static constexpr std::uintptr_t LookAtAngleH_Native = 0x8D8;
            static constexpr std::uintptr_t LookAtAngleV_Native = 0x8DC;
            static constexpr std::uintptr_t LookAtTarget_Native = 0x8E0;
            static constexpr std::uintptr_t LookAtTargetWhenRiding = 0x8F8;
            static constexpr std::uintptr_t LookAtOverNinetyTime = 0x910;
            static constexpr std::uintptr_t GetRootOffsetMode_Native = 0x914;
            static constexpr std::uintptr_t GetRootOffsetHalfLife_Native = 0x918;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"ControlRigAlpha_Native", 0x8C0, "FloatProperty"},
            {"IsIdeling_Native", 0x8C4, "FloatProperty"},
            {"IsIdeleBreak_Native", 0x8C8, "FloatProperty"},
            {"RootSmoothingWeight_Native", 0x8CC, "FloatProperty"},
            {"ControlRigJumpingWeightSmoothed", 0x8D0, "FloatProperty"},
            {"LookAtWeight_Native", 0x8D4, "FloatProperty"},
            {"LookAtAngleH_Native", 0x8D8, "FloatProperty"},
            {"LookAtAngleV_Native", 0x8DC, "FloatProperty"},
            {"LookAtTarget_Native", 0x8E0, "StructProperty"},
            {"LookAtTargetWhenRiding", 0x8F8, "StructProperty"},
            {"LookAtOverNinetyTime", 0x910, "FloatProperty"},
            {"GetRootOffsetMode_Native", 0x914, "EnumProperty"},
            {"GetRootOffsetHalfLife_Native", 0x918, "FloatProperty"},
        }};
    };

    struct JunoHeroCreatureAnimLogic_Crawler
    {
        static constexpr std::string_view Name = "JunoHeroCreatureAnimLogic_Crawler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoHeroCreatureAnimLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsAggro = 0x8C0;
            static constexpr std::uintptr_t bCombatStrafeCooldownActive = 0x8C1;
            static constexpr std::uintptr_t bIdleBreakTimerExpiredAndNotAggro_Native = 0x8C2;
            static constexpr std::uintptr_t bNotMovingAndIsAggro_Native = 0x8C3;
            static constexpr std::uintptr_t bWasMovingAndIsIdlingAndNotAggro_Native = 0x8C4;
            static constexpr std::uintptr_t PawnAccelerationDirectionClamped_Native = 0x8C8;
            static constexpr std::uintptr_t bIsDefaultSlotActive_Native = 0x8CC;
            static constexpr std::uintptr_t bCondRootOffsetDisable_Native = 0x8CD;
            static constexpr std::uintptr_t GetRootOffsetHalfLife_Native = 0x8D0;
            static constexpr std::uintptr_t GetRootOffsetMode_Native = 0x8D4;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"bIsAggro", 0x8C0, "BoolProperty"},
            {"bCombatStrafeCooldownActive", 0x8C1, "BoolProperty"},
            {"bIdleBreakTimerExpiredAndNotAggro_Native", 0x8C2, "BoolProperty"},
            {"bNotMovingAndIsAggro_Native", 0x8C3, "BoolProperty"},
            {"bWasMovingAndIsIdlingAndNotAggro_Native", 0x8C4, "BoolProperty"},
            {"PawnAccelerationDirectionClamped_Native", 0x8C8, "FloatProperty"},
            {"bIsDefaultSlotActive_Native", 0x8CC, "BoolProperty"},
            {"bCondRootOffsetDisable_Native", 0x8CD, "BoolProperty"},
            {"GetRootOffsetHalfLife_Native", 0x8D0, "FloatProperty"},
            {"GetRootOffsetMode_Native", 0x8D4, "EnumProperty"},
        }};
    };

    struct JunoHeroCreatureAnimLogic_Golem
    {
        static constexpr std::string_view Name = "JunoHeroCreatureAnimLogic_Golem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoHeroCreatureAnimLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t LookAtV2_Enable = 0x830;
            static constexpr std::uintptr_t LookAtV2_OriginJoint = 0x834;
            static constexpr std::uintptr_t LookAtV2_DisableInLocomotionCurveName = 0x838;
            static constexpr std::uintptr_t LookAtV2_EnableInMontageCurveName = 0x83C;
            static constexpr std::uintptr_t LookAtV2_OriginPos = 0x840;
            static constexpr std::uintptr_t LookAtV2_AimTargetLocationOffset = 0x858;
            static constexpr std::uintptr_t LookAtV2_MinDistance = 0x870;
            static constexpr std::uintptr_t bOnGroundAndNotMoving_Native = 0x874;
            static constexpr std::uintptr_t bNotFallingAndNotJumping_Native = 0x875;
            static constexpr std::uintptr_t NotSurfaceSwimming_Native = 0x878;
            static constexpr std::uintptr_t AnimCurveIsMoving_Native = 0x87C;
            static constexpr std::uintptr_t PawnIsMoving2DAlpha = 0x880;
            static constexpr std::uintptr_t CreatureIdleBreakMinTime = 0x884;
            static constexpr std::uintptr_t CreatureIdleBreakMaxTime = 0x888;
            static constexpr std::uintptr_t CreatureMovingIdleBreakMinTime = 0x88C;
            static constexpr std::uintptr_t CreatureMovingIdleBreakMaxTime = 0x890;
            static constexpr std::uintptr_t LookAtV2_Weight_Native = 0x894;
            static constexpr std::uintptr_t LookAtV2_Target_Native = 0x898;
            static constexpr std::uintptr_t LookAtV2_HorizontalAngle_Native = 0x8B0;
            static constexpr std::uintptr_t LookAtV2_VerticalAngle_Native = 0x8B4;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"LookAtV2_Enable", 0x830, "BoolProperty"},
            {"LookAtV2_OriginJoint", 0x834, "NameProperty"},
            {"LookAtV2_DisableInLocomotionCurveName", 0x838, "NameProperty"},
            {"LookAtV2_EnableInMontageCurveName", 0x83C, "NameProperty"},
            {"LookAtV2_OriginPos", 0x840, "StructProperty"},
            {"LookAtV2_AimTargetLocationOffset", 0x858, "StructProperty"},
            {"LookAtV2_MinDistance", 0x870, "FloatProperty"},
            {"bOnGroundAndNotMoving_Native", 0x874, "BoolProperty"},
            {"bNotFallingAndNotJumping_Native", 0x875, "BoolProperty"},
            {"NotSurfaceSwimming_Native", 0x878, "FloatProperty"},
            {"AnimCurveIsMoving_Native", 0x87C, "FloatProperty"},
            {"PawnIsMoving2DAlpha", 0x880, "FloatProperty"},
            {"CreatureIdleBreakMinTime", 0x884, "FloatProperty"},
            {"CreatureIdleBreakMaxTime", 0x888, "FloatProperty"},
            {"CreatureMovingIdleBreakMinTime", 0x88C, "FloatProperty"},
            {"CreatureMovingIdleBreakMaxTime", 0x890, "FloatProperty"},
            {"LookAtV2_Weight_Native", 0x894, "FloatProperty"},
            {"LookAtV2_Target_Native", 0x898, "StructProperty"},
            {"LookAtV2_HorizontalAngle_Native", 0x8B0, "FloatProperty"},
            {"LookAtV2_VerticalAngle_Native", 0x8B4, "FloatProperty"},
        }};
    };

    struct JunoISMPoolRenderer
    {
        static constexpr std::string_view Name = "JunoISMPoolRenderer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedISMPoolComponent = 0x38;
            static constexpr std::uintptr_t LocalISMPoolComponent = 0x40;
            static constexpr std::uintptr_t OverrideISMPoolComponent = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CachedISMPoolComponent", 0x38, "ObjectProperty"},
            {"LocalISMPoolComponent", 0x40, "ObjectProperty"},
            {"OverrideISMPoolComponent", 0x48, "ObjectProperty"},
        }};
    };

    struct JunoISMPoolRendererSettings
    {
        static constexpr std::string_view Name = "JunoISMPoolRendererSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoISMRemoveSubsystem
    {
        static constexpr std::string_view Name = "JunoISMRemoveSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoISMRemoveTargetComponent
    {
        static constexpr std::string_view Name = "JunoISMRemoveTargetComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Tags = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Tags", 0xC0, "StructProperty"},
        }};
    };

    struct JunoISMRemoveVolumeComponent
    {
        static constexpr std::string_view Name = "JunoISMRemoveVolumeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TagsQuery = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TagsQuery", 0xC0, "StructProperty"},
        }};
    };

    struct JunoInputBasedAFKComponent
    {
        static constexpr std::string_view Name = "JunoInputBasedAFKComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortInputBasedAFKComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AFKTableRowEntry = 0x1D8;
            static constexpr std::uintptr_t CachedAFKDetectionParameters = 0x1E8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AFKTableRowEntry", 0x1D8, "StructProperty"},
            {"CachedAFKDetectionParameters", 0x1E8, "StructProperty"},
        }};
    };

    struct JunoInputControllerComponent
    {
        static constexpr std::string_view Name = "JunoInputControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bCachedEnableClientSettingsRestoreInputPresets = 0x108;
            static constexpr std::uintptr_t InputMappingData = 0x110;
            static constexpr std::uintptr_t DBNOInteractInputMappingData = 0x118;
            static constexpr std::uintptr_t HeroInputMappingData = 0x120;
            static constexpr std::uintptr_t HeroInputActivationTag = 0x128;
            static constexpr std::uintptr_t InputAction_HandleCameraToggle = 0x130;
            static constexpr std::uintptr_t InputAction_HandleAnimToggle = 0x138;
            static constexpr std::uintptr_t InputAction_HandleCyclePOI = 0x140;
            static constexpr std::uintptr_t InputAction_HandleTeleportToCave = 0x148;
            static constexpr std::uintptr_t InputAction_NextQuickbarSlot = 0x150;
            static constexpr std::uintptr_t InputAction_NextQuickbarSlot_Delayed = 0x158;
            static constexpr std::uintptr_t InputAction_PrevQuickbarSlot = 0x160;
            static constexpr std::uintptr_t InputAction_PrevQuickbarSlot_Delayed = 0x168;
            static constexpr std::uintptr_t InputAction_HandleOpenHudMenu = 0x170;
            static constexpr std::uintptr_t InputAction_HandleOpenBuildingMenu = 0x178;
            static constexpr std::uintptr_t InputAction_HandleOpenMapMenu = 0x180;
            static constexpr std::uintptr_t InputAction_HandleOpenInventoryMenu = 0x188;
            static constexpr std::uintptr_t InputAction_HandleOpenShopMenu = 0x190;
            static constexpr std::uintptr_t InputAction_HandleOpenEngagementMenu = 0x198;
            static constexpr std::uintptr_t InputAction_HandleOpenInGameFrontend = 0x1A0;
            static constexpr std::uintptr_t InputAction_HandleOpenJournalMenu = 0x1A8;
            static constexpr std::uintptr_t InputAction_HandleOpenJournalMenuDev = 0x1B0;
            static constexpr std::uintptr_t InputAction_HandleOpenQuickItemRadial = 0x1B8;
            static constexpr std::uintptr_t InputAction_HideFTUEQuestTracking = 0x1C0;
            static constexpr std::uintptr_t InputAction_HandleOpenEscapeMenu = 0x1C8;
            static constexpr std::uintptr_t InputAction_JunoBuildingStartPlacement = 0x1D0;
            static constexpr std::uintptr_t InputAction_ToggleBuildMode = 0x1D8;
            static constexpr std::uintptr_t InputAction_ToggleTrackingWidget = 0x1E0;
            static constexpr std::uintptr_t InputAction_TeleportPlayer = 0x1E8;
            static constexpr std::uintptr_t InputAction_OffhandUse = 0x1F0;
            static constexpr std::uintptr_t InputAction_FlyDown = 0x1F8;
            static constexpr std::uintptr_t InputAction_FlyUp = 0x200;
            static constexpr std::uintptr_t InputAction_DBNOCarry = 0x208;
            static constexpr std::uintptr_t QuickbarBindings = 0x210;
            static constexpr std::uintptr_t InputActionsToGameplayEvents = 0x220;
            static constexpr std::uintptr_t bJunoIsFlying = 0x230;
            static constexpr std::uintptr_t EnhancedInputComponent = 0x234;
            static constexpr std::uintptr_t LegacyBlockingInputComponent = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 38> Properties{{
            {"bCachedEnableClientSettingsRestoreInputPresets", 0x108, "BoolProperty"},
            {"InputMappingData", 0x110, "ObjectProperty"},
            {"DBNOInteractInputMappingData", 0x118, "ObjectProperty"},
            {"HeroInputMappingData", 0x120, "ObjectProperty"},
            {"HeroInputActivationTag", 0x128, "StructProperty"},
            {"InputAction_HandleCameraToggle", 0x130, "ObjectProperty"},
            {"InputAction_HandleAnimToggle", 0x138, "ObjectProperty"},
            {"InputAction_HandleCyclePOI", 0x140, "ObjectProperty"},
            {"InputAction_HandleTeleportToCave", 0x148, "ObjectProperty"},
            {"InputAction_NextQuickbarSlot", 0x150, "ObjectProperty"},
            {"InputAction_NextQuickbarSlot_Delayed", 0x158, "ObjectProperty"},
            {"InputAction_PrevQuickbarSlot", 0x160, "ObjectProperty"},
            {"InputAction_PrevQuickbarSlot_Delayed", 0x168, "ObjectProperty"},
            {"InputAction_HandleOpenHudMenu", 0x170, "ObjectProperty"},
            {"InputAction_HandleOpenBuildingMenu", 0x178, "ObjectProperty"},
            {"InputAction_HandleOpenMapMenu", 0x180, "ObjectProperty"},
            {"InputAction_HandleOpenInventoryMenu", 0x188, "ObjectProperty"},
            {"InputAction_HandleOpenShopMenu", 0x190, "ObjectProperty"},
            {"InputAction_HandleOpenEngagementMenu", 0x198, "ObjectProperty"},
            {"InputAction_HandleOpenInGameFrontend", 0x1A0, "ObjectProperty"},
            {"InputAction_HandleOpenJournalMenu", 0x1A8, "ObjectProperty"},
            {"InputAction_HandleOpenJournalMenuDev", 0x1B0, "ObjectProperty"},
            {"InputAction_HandleOpenQuickItemRadial", 0x1B8, "ObjectProperty"},
            {"InputAction_HideFTUEQuestTracking", 0x1C0, "ObjectProperty"},
            {"InputAction_HandleOpenEscapeMenu", 0x1C8, "ObjectProperty"},
            {"InputAction_JunoBuildingStartPlacement", 0x1D0, "ObjectProperty"},
            {"InputAction_ToggleBuildMode", 0x1D8, "ObjectProperty"},
            {"InputAction_ToggleTrackingWidget", 0x1E0, "ObjectProperty"},
            {"InputAction_TeleportPlayer", 0x1E8, "ObjectProperty"},
            {"InputAction_OffhandUse", 0x1F0, "ObjectProperty"},
            {"InputAction_FlyDown", 0x1F8, "ObjectProperty"},
            {"InputAction_FlyUp", 0x200, "ObjectProperty"},
            {"InputAction_DBNOCarry", 0x208, "ObjectProperty"},
            {"QuickbarBindings", 0x210, "ArrayProperty"},
            {"InputActionsToGameplayEvents", 0x220, "ArrayProperty"},
            {"bJunoIsFlying", 0x230, "BoolProperty"},
            {"EnhancedInputComponent", 0x234, "WeakObjectProperty"},
            {"LegacyBlockingInputComponent", 0x240, "ObjectProperty"},
        }};
    };

    struct JunoInputMappingComponent
    {
        static constexpr std::string_view Name = "JunoInputMappingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Data = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Data", 0xC0, "ObjectProperty"},
        }};
    };

    struct JunoInputMappingComponentData
    {
        static constexpr std::string_view Name = "JunoInputMappingComponentData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DesiredInputMappings = 0x28;
            static constexpr std::uintptr_t DisplayTexts = 0x38;
            static constexpr std::uintptr_t EventTag = 0x48;
            static constexpr std::uintptr_t bPopDefaultContext = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DesiredInputMappings", 0x28, "ArrayProperty"},
            {"DisplayTexts", 0x38, "ArrayProperty"},
            {"EventTag", 0x48, "StructProperty"},
            {"bPopDefaultContext", 0x4C, "BoolProperty"},
        }};
    };

    struct JunoInputQueueComponent
    {
        static constexpr std::string_view Name = "JunoInputQueueComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PawnComponent";
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

    struct JunoInventory
    {
        static constexpr std::string_view Name = "JunoInventory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortInventory";
        struct Offsets
        {
            static constexpr std::uintptr_t SavedActorGuid = 0x430;
            static constexpr std::uintptr_t InventoryCapacity = 0x480;
            static constexpr std::uintptr_t InventoryHandleGuid = 0x484;
            static constexpr std::uintptr_t bIsPersistent = 0x494;
            static constexpr std::uintptr_t bWasSpawnedByLevelSaveRecord = 0x495;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SavedActorGuid", 0x430, "StructProperty"},
            {"InventoryCapacity", 0x480, "IntProperty"},
            {"InventoryHandleGuid", 0x484, "StructProperty"},
            {"bIsPersistent", 0x494, "BoolProperty"},
            {"bWasSpawnedByLevelSaveRecord", 0x495, "BoolProperty"},
        }};
    };

    struct JunoInventoryAggregateComponent
    {
        static constexpr std::string_view Name = "JunoInventoryAggregateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InventoryArray = 0xC8;
            static constexpr std::uintptr_t IngredientMap = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InventoryArray", 0xC8, "ArrayProperty"},
            {"IngredientMap", 0xD8, "MapProperty"},
        }};
    };

    struct JunoInventoryAudioComponent
    {
        static constexpr std::string_view Name = "JunoInventoryAudioComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InventoryComponent = 0xC8;
            static constexpr std::uintptr_t InventoryCount = 0xD0;
            static constexpr std::uintptr_t InventorySounds = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InventoryComponent", 0xC8, "WeakObjectProperty"},
            {"InventoryCount", 0xD0, "MapProperty"},
            {"InventorySounds", 0xE0, "ArrayProperty"},
        }};
    };

    struct JunoInventoryBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoInventoryBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoInventoryCheatManager
    {
        static constexpr std::string_view Name = "JunoInventoryCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoInventoryComponent
    {
        static constexpr std::string_view Name = "JunoInventoryComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnInventoryDataRestored = 0xD0;
            static constexpr std::uintptr_t bShouldAcquireInventoryOnInitialize = 0xF8;
            static constexpr std::uintptr_t InventoryConfig = 0x100;
            static constexpr std::uintptr_t TypeTags = 0x118;
            static constexpr std::uintptr_t InventoryLootTierGroup = 0x138;
            static constexpr std::uintptr_t bCanEverBeCraftingSource = 0x13C;
            static constexpr std::uintptr_t bEnabledAsCraftingSource = 0x13C;
            static constexpr std::uintptr_t bShouldDropContentsOnOwnerDeath = 0x13C;
            static constexpr std::uintptr_t bShouldOpenInventoryMenu = 0x13C;
            static constexpr std::uintptr_t OnEnabledAsCraftingSourceDelegate = 0x140;
            static constexpr std::uintptr_t LootTossSpeed = 0x150;
            static constexpr std::uintptr_t LootTossAngle = 0x154;
            static constexpr std::uintptr_t LootTossOffset = 0x158;
            static constexpr std::uintptr_t InventoryHandle = 0x170;
            static constexpr std::uintptr_t ItemSlotGroups = 0x1C8;
            static constexpr std::uintptr_t ReplicatedItemSlotData = 0x1D8;
            static constexpr std::uintptr_t OnInventoryChangedEvent = 0x240;
            static constexpr std::uintptr_t SelectedItemGroupSlots = 0x270;
            static constexpr std::uintptr_t TotalItemCounts = 0x2C0;
            static constexpr std::uintptr_t CachedItemInstanceCounts = 0x2D0;
            static constexpr std::uintptr_t MigrationSearcher = 0x2F0;
            static constexpr std::uintptr_t CustomFilterDelegate = 0x2F8;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"OnInventoryDataRestored", 0xD0, "MulticastInlineDelegateProperty"},
            {"bShouldAcquireInventoryOnInitialize", 0xF8, "BoolProperty"},
            {"InventoryConfig", 0x100, "StructProperty"},
            {"TypeTags", 0x118, "StructProperty"},
            {"InventoryLootTierGroup", 0x138, "NameProperty"},
            {"bCanEverBeCraftingSource", 0x13C, "BoolProperty"},
            {"bEnabledAsCraftingSource", 0x13C, "BoolProperty"},
            {"bShouldDropContentsOnOwnerDeath", 0x13C, "BoolProperty"},
            {"bShouldOpenInventoryMenu", 0x13C, "BoolProperty"},
            {"OnEnabledAsCraftingSourceDelegate", 0x140, "MulticastInlineDelegateProperty"},
            {"LootTossSpeed", 0x150, "FloatProperty"},
            {"LootTossAngle", 0x154, "FloatProperty"},
            {"LootTossOffset", 0x158, "StructProperty"},
            {"InventoryHandle", 0x170, "StructProperty"},
            {"ItemSlotGroups", 0x1C8, "MapProperty"},
            {"ReplicatedItemSlotData", 0x1D8, "StructProperty"},
            {"OnInventoryChangedEvent", 0x240, "MulticastInlineDelegateProperty"},
            {"SelectedItemGroupSlots", 0x270, "ArrayProperty"},
            {"TotalItemCounts", 0x2C0, "MapProperty"},
            {"CachedItemInstanceCounts", 0x2D0, "MapProperty"},
            {"MigrationSearcher", 0x2F0, "ObjectProperty"},
            {"CustomFilterDelegate", 0x2F8, "DelegateProperty"},
        }};
    };

    struct JunoInventoryDisplayComponent
    {
        static constexpr std::string_view Name = "JunoInventoryDisplayComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SkeletalMeshComponentRefs = 0xC0;
            static constexpr std::uintptr_t InventoryComponent = 0xD0;
            static constexpr std::uintptr_t DisplayEntries = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SkeletalMeshComponentRefs", 0xC0, "ArrayProperty"},
            {"InventoryComponent", 0xD0, "WeakObjectProperty"},
            {"DisplayEntries", 0xD8, "ArrayProperty"},
        }};
    };

    struct JunoInventoryManagerComponent
    {
        static constexpr std::string_view Name = "JunoInventoryManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InventoryHandles = 0xC0;
            static constexpr std::uintptr_t InventoryInstances = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InventoryHandles", 0xC0, "ArrayProperty"},
            {"InventoryInstances", 0xD0, "ArrayProperty"},
        }};
    };

    struct JunoInventoryMigrationSearcher
    {
        static constexpr std::string_view Name = "JunoInventoryMigrationSearcher";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoInventoryMigratorInterface
    {
        static constexpr std::string_view Name = "JunoInventoryMigratorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoInventoryPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoInventoryPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t SavedInventories = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SavedInventories", 0x58, "StructProperty"},
        }};
    };

    struct JunoInventoryPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoInventoryPersistenceFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoInventoryPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoInventoryPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoInventorySourceInterface
    {
        static constexpr std::string_view Name = "JunoInventorySourceInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoInventoryUIPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoInventoryUIPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t SavedInventoryUI = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SavedInventoryUI", 0x58, "StructProperty"},
        }};
    };

    struct JunoInventoryUIPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoInventoryUIPersistenceFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoInventoryUIPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoInventoryUIPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoItemChargeCheatManager
    {
        static constexpr std::string_view Name = "JunoItemChargeCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoItemChargeInventoryComponent
    {
        static constexpr std::string_view Name = "JunoItemChargeInventoryComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DischargeBeginDelay = 0xC0;
            static constexpr std::uintptr_t DischargeRate = 0xE8;
            static constexpr std::uintptr_t bClearChargeOnTransfer = 0x110;
            static constexpr std::uintptr_t MaxChargeSubtagName = 0x114;
            static constexpr std::uintptr_t JunoInventory = 0x118;
            static constexpr std::uintptr_t JunoInventoryComponent = 0x120;
            static constexpr std::uintptr_t DischargingItems = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"DischargeBeginDelay", 0xC0, "StructProperty"},
            {"DischargeRate", 0xE8, "StructProperty"},
            {"bClearChargeOnTransfer", 0x110, "BoolProperty"},
            {"MaxChargeSubtagName", 0x114, "NameProperty"},
            {"JunoInventory", 0x118, "WeakObjectProperty"},
            {"JunoInventoryComponent", 0x120, "WeakObjectProperty"},
            {"DischargingItems", 0x128, "MapProperty"},
        }};
    };

    struct JunoItemChargeLibrary
    {
        static constexpr std::string_view Name = "JunoItemChargeLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoItemCosmeticAlterationComponent
    {
        static constexpr std::string_view Name = "JunoItemCosmeticAlterationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCosmeticAlterationComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemEntry = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ItemEntry", 0xF8, "StructProperty"},
        }};
    };

    struct JunoItemDefinitionPersistenceAssetType
    {
        static constexpr std::string_view Name = "JunoItemDefinitionPersistenceAssetType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPersistenceAssetType";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoItemDurabilityMigrator
    {
        static constexpr std::string_view Name = "JunoItemDurabilityMigrator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
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

    struct JunoItemLibrary
    {
        static constexpr std::string_view Name = "JunoItemLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoItemStatsInterface
    {
        static constexpr std::string_view Name = "JunoItemStatsInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoItemTierLibrary
    {
        static constexpr std::string_view Name = "JunoItemTierLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoJumpAttackTargetInterface
    {
        static constexpr std::string_view Name = "JunoJumpAttackTargetInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoKnowledgeBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoKnowledgeBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoKnowledgeBundle
    {
        static constexpr std::string_view Name = "JunoKnowledgeBundle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t RecipeTable = 0x28;
            static constexpr std::uintptr_t BundleName = 0x30;
            static constexpr std::uintptr_t BundleDescription = 0x40;
            static constexpr std::uintptr_t BundleImage = 0x50;
            static constexpr std::uintptr_t BundleIdentifier = 0x70;
            static constexpr std::uintptr_t BundleTags = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"RecipeTable", 0x28, "ObjectProperty"},
            {"BundleName", 0x30, "TextProperty"},
            {"BundleDescription", 0x40, "TextProperty"},
            {"BundleImage", 0x50, "SoftObjectProperty"},
            {"BundleIdentifier", 0x70, "StructProperty"},
            {"BundleTags", 0x78, "StructProperty"},
        }};
    };

    struct JunoKnowledgeComponent
    {
        static constexpr std::string_view Name = "JunoKnowledgeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableKnowledgeComponent = 0x1A0;
            static constexpr std::uintptr_t bEnableKnowledgePersistence = 0x1A1;
            static constexpr std::uintptr_t bEnableKnowledgeFiltering = 0x1A2;
            static constexpr std::uintptr_t bUnownedMCPRecipesKnowledgeBlockedWhenUnfiltered = 0x1A4;
            static constexpr std::uintptr_t DefaultKnownItems = 0x1A8;
            static constexpr std::uintptr_t DefaultCraftingObjects = 0x1B8;
            static constexpr std::uintptr_t UnblockMCPRecipesWorldStateTag = 0x1D8;
            static constexpr std::uintptr_t FoundCraftingObjects = 0x1E0;
            static constexpr std::uintptr_t ClaimedKnowlegeBundles = 0x200;
            static constexpr std::uintptr_t ItemStateArray = 0x220;
            static constexpr std::uintptr_t RecipeStateArray = 0x238;
            static constexpr std::uintptr_t CreatureStateArray = 0x298;
            static constexpr std::uintptr_t ItemServerState = 0x2B0;
            static constexpr std::uintptr_t RecipeServerState = 0x2C0;
            static constexpr std::uintptr_t CreatureServerState = 0x2D0;
            static constexpr std::uintptr_t ViewedItems = 0x310;
            static constexpr std::uintptr_t ViewedRecipes = 0x320;
            static constexpr std::uintptr_t ViewedCreatures = 0x330;
            static constexpr std::uintptr_t OwnedMcpRecipes = 0x340;
            static constexpr std::uintptr_t RecipeDiscoverers = 0x350;
            static constexpr std::uintptr_t RecipeDiscoverersMap = 0x360;
            static constexpr std::uintptr_t bMCPRecipesBlocked = 0x370;
            static constexpr std::uintptr_t bComponentReady = 0x371;
            static constexpr std::uintptr_t bStreamRecipeKnowledge = 0x372;
            static constexpr std::uintptr_t ItemQuickLookup = 0x378;
            static constexpr std::uintptr_t CreatureQuickLookup = 0x388;
            static constexpr std::uintptr_t CreatureDiscoveredTagContainer = 0x398;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"bEnableKnowledgeComponent", 0x1A0, "BoolProperty"},
            {"bEnableKnowledgePersistence", 0x1A1, "BoolProperty"},
            {"bEnableKnowledgeFiltering", 0x1A2, "BoolProperty"},
            {"bUnownedMCPRecipesKnowledgeBlockedWhenUnfiltered", 0x1A4, "BoolProperty"},
            {"DefaultKnownItems", 0x1A8, "ArrayProperty"},
            {"DefaultCraftingObjects", 0x1B8, "StructProperty"},
            {"UnblockMCPRecipesWorldStateTag", 0x1D8, "StructProperty"},
            {"FoundCraftingObjects", 0x1E0, "StructProperty"},
            {"ClaimedKnowlegeBundles", 0x200, "StructProperty"},
            {"ItemStateArray", 0x220, "ArrayProperty"},
            {"RecipeStateArray", 0x238, "StructProperty"},
            {"CreatureStateArray", 0x298, "ArrayProperty"},
            {"ItemServerState", 0x2B0, "ArrayProperty"},
            {"RecipeServerState", 0x2C0, "MapProperty"},
            {"CreatureServerState", 0x2D0, "ArrayProperty"},
            {"ViewedItems", 0x310, "ArrayProperty"},
            {"ViewedRecipes", 0x320, "ArrayProperty"},
            {"ViewedCreatures", 0x330, "ArrayProperty"},
            {"OwnedMcpRecipes", 0x340, "ArrayProperty"},
            {"RecipeDiscoverers", 0x350, "ArrayProperty"},
            {"RecipeDiscoverersMap", 0x360, "MapProperty"},
            {"bMCPRecipesBlocked", 0x370, "BoolProperty"},
            {"bComponentReady", 0x371, "BoolProperty"},
            {"bStreamRecipeKnowledge", 0x372, "BoolProperty"},
            {"ItemQuickLookup", 0x378, "SetProperty"},
            {"CreatureQuickLookup", 0x388, "SetProperty"},
            {"CreatureDiscoveredTagContainer", 0x398, "StructProperty"},
        }};
    };

    struct JunoKnowledgeCraftingComponent
    {
        static constexpr std::string_view Name = "JunoKnowledgeCraftingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedCraftingObjectComponent = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedCraftingObjectComponent", 0xC0, "WeakObjectProperty"},
        }};
    };

    struct JunoKnowledgeMigratorInterface
    {
        static constexpr std::string_view Name = "JunoKnowledgeMigratorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoKnowledgeOverrideComponent_WorldState
    {
        static constexpr std::string_view Name = "JunoKnowledgeOverrideComponent_WorldState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
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

    struct JunoKnowledgeOverrideInterface
    {
        static constexpr std::string_view Name = "JunoKnowledgeOverrideInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoKnowledgePersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoKnowledgePersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t KnowledgeSaveData = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"KnowledgeSaveData", 0x58, "StructProperty"},
        }};
    };

    struct JunoKnowledgePersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoKnowledgePersistenceFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoKnowledgePersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoKnowledgePersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoKnowledgeReplicatorComponent
    {
        static constexpr std::string_view Name = "JunoKnowledgeReplicatorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct JunoLWITriggerComponent
    {
        static constexpr std::string_view Name = "JunoLWITriggerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
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

    struct JunoLWMCaveEventDataInterface
    {
        static constexpr std::string_view Name = "JunoLWMCaveEventDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoLWMGridReadinessCheck_Playspace
    {
        static constexpr std::string_view Name = "JunoLWMGridReadinessCheck_Playspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaLivingWorldGridReadinessCheck";
        struct Offsets
        {
            static constexpr std::uintptr_t BoundaryCheckDistance = 0x38;
            static constexpr std::uintptr_t MaxWaitInSeconds = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BoundaryCheckDistance", 0x38, "StructProperty"},
            {"MaxWaitInSeconds", 0x60, "StructProperty"},
        }};
    };

    struct JunoLandscapeIADSubsystem
    {
        static constexpr std::string_view Name = "JunoLandscapeIADSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoLandscapeVisualModifierComponent
    {
        static constexpr std::string_view Name = "JunoLandscapeVisualModifierComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DirtPlane = 0x258;
            static constexpr std::uintptr_t VisualModifierType = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DirtPlane", 0x258, "ObjectProperty"},
            {"VisualModifierType", 0x260, "EnumProperty"},
        }};
    };

    struct JunoLevelReadyInterface
    {
        static constexpr std::string_view Name = "JunoLevelReadyInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoLifeCycleInterface
    {
        static constexpr std::string_view Name = "JunoLifeCycleInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoLocalEnvironmentActorInterface
    {
        static constexpr std::string_view Name = "JunoLocalEnvironmentActorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoLocalEnvironmentComponentInterface
    {
        static constexpr std::string_view Name = "JunoLocalEnvironmentComponentInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoLocalPlayersProximityComponent
    {
        static constexpr std::string_view Name = "JunoLocalPlayersProximityComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLocalPlayerInRangeEvent = 0xC0;
            static constexpr std::uintptr_t WaitForEventRouterAction = 0xD0;
            static constexpr std::uintptr_t DistanceCheckSettings = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnLocalPlayerInRangeEvent", 0xC0, "MulticastInlineDelegateProperty"},
            {"WaitForEventRouterAction", 0xD0, "ObjectProperty"},
            {"DistanceCheckSettings", 0xD8, "StructProperty"},
        }};
    };

    struct JunoLostAndFoundInventoryFeatureData
    {
        static constexpr std::string_view Name = "JunoLostAndFoundInventoryFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t LostAndFoundInventory = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LostAndFoundInventory", 0x58, "StructProperty"},
        }};
    };

    struct JunoLostAndFoundInventoryFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoLostAndFoundInventoryFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoLostAndFoundInventoryFeatureModule
    {
        static constexpr std::string_view Name = "JunoLostAndFoundInventoryFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoMantisAbilityBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoMantisAbilityBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoMapManager
    {
        static constexpr std::string_view Name = "JunoMapManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t TileSize = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TileSize", 0x278, "FloatProperty"},
        }};
    };

    struct JunoMapManagerComponent_Storms
    {
        static constexpr std::string_view Name = "JunoMapManagerComponent_Storms";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t StormLocations = 0xD8;
            static constexpr std::uintptr_t LargeStormIdentifier = 0xE8;
            static constexpr std::uintptr_t SmallStormIdentifier = 0xEC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StormLocations", 0xD8, "ArrayProperty"},
            {"LargeStormIdentifier", 0xE8, "StructProperty"},
            {"SmallStormIdentifier", 0xEC, "StructProperty"},
        }};
    };

    struct JunoMapMarkerCustomizationInitData
    {
        static constexpr std::string_view Name = "JunoMapMarkerCustomizationInitData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MarkerId = 0x28;
            static constexpr std::uintptr_t Marker = 0x38;
            static constexpr std::uintptr_t DisplayName = 0x148;
            static constexpr std::uintptr_t BiomeTag = 0x158;
            static constexpr std::uintptr_t bEditingMarker = 0x15C;
            static constexpr std::uintptr_t OwningCampActor = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MarkerId", 0x28, "StructProperty"},
            {"Marker", 0x38, "StructProperty"},
            {"DisplayName", 0x148, "TextProperty"},
            {"BiomeTag", 0x158, "StructProperty"},
            {"bEditingMarker", 0x15C, "BoolProperty"},
            {"OwningCampActor", 0x160, "ObjectProperty"},
        }};
    };

    struct JunoMapPersistenceAssetType
    {
        static constexpr std::string_view Name = "JunoMapPersistenceAssetType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPersistenceAssetType";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoMarkerComponent
    {
        static constexpr std::string_view Name = "JunoMarkerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xC0;
            static constexpr std::uintptr_t bShouldCreateMarkerOnStart = 0x1D0;
            static constexpr std::uintptr_t bOnlyRemoveOnOwnerDied = 0x1D1;
            static constexpr std::uintptr_t bSupportNormalActorMovement = 0x1D2;
            static constexpr std::uintptr_t ForceEnableMovementUpdateByRoot = 0x1D8;
            static constexpr std::uintptr_t MapMarkerUpdateDistanceOverride = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Settings", 0xC0, "StructProperty"},
            {"bShouldCreateMarkerOnStart", 0x1D0, "BoolProperty"},
            {"bOnlyRemoveOnOwnerDied", 0x1D1, "BoolProperty"},
            {"bSupportNormalActorMovement", 0x1D2, "BoolProperty"},
            {"ForceEnableMovementUpdateByRoot", 0x1D8, "StructProperty"},
            {"MapMarkerUpdateDistanceOverride", 0x200, "StructProperty"},
        }};
    };

    struct JunoMarkerManager
    {
        static constexpr std::string_view Name = "JunoMarkerManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Markers = 0x2B8;
            static constexpr std::uintptr_t MarkerDataRegistry = 0x330;
            static constexpr std::uintptr_t UniqueMarkers = 0x338;
            static constexpr std::uintptr_t LoadedIconTextures = 0x348;
            static constexpr std::uintptr_t PendingMarkerInitializations = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Markers", 0x2B8, "StructProperty"},
            {"MarkerDataRegistry", 0x330, "ObjectProperty"},
            {"UniqueMarkers", 0x338, "ArrayProperty"},
            {"LoadedIconTextures", 0x348, "ArrayProperty"},
            {"PendingMarkerInitializations", 0x358, "ArrayProperty"},
        }};
    };

    struct JunoMarkerRefinementComponent
    {
        static constexpr std::string_view Name = "JunoMarkerRefinementComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct JunoMarkersLimitPool
    {
        static constexpr std::string_view Name = "JunoMarkersLimitPool";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildLimitGetter";
        struct Offsets
        {
            static constexpr std::uintptr_t PhysicalMarkerSettingName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PhysicalMarkerSettingName", 0x28, "NameProperty"},
        }};
    };

    struct JunoMarkersPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoMarkersPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t MarkersSaveData = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MarkersSaveData", 0x60, "StructProperty"},
        }};
    };

    struct JunoMarkersPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoMarkersPersistenceFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoMarkersPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoMarkersPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoMaterialInstanceConstantPersistenceAssetType
    {
        static constexpr std::string_view Name = "JunoMaterialInstanceConstantPersistenceAssetType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPersistenceAssetType";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoMaterialOverrideComponent
    {
        static constexpr std::string_view Name = "JunoMaterialOverrideComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GeometryCollectionReference = 0xC8;
            static constexpr std::uintptr_t OverrideMap = 0xF0;
            static constexpr std::uintptr_t bUpdateFromGeometryCollection = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GeometryCollectionReference", 0xC8, "StructProperty"},
            {"OverrideMap", 0xF0, "MapProperty"},
            {"bUpdateFromGeometryCollection", 0x100, "BoolProperty"},
        }};
    };

    struct JunoMerchantDatabase
    {
        static constexpr std::string_view Name = "JunoMerchantDatabase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MerchantSalesDataTable = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MerchantSalesDataTable", 0x118, "ObjectProperty"},
        }};
    };

    struct JunoMeshNetworkWeatherComponent
    {
        static constexpr std::string_view Name = "JunoMeshNetworkWeatherComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshNetworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SynchronizedWeatherStates = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SynchronizedWeatherStates", 0xF0, "ArrayProperty"},
        }};
    };

    struct JunoMetaNavArea
    {
        static constexpr std::string_view Name = "JunoMetaNavArea";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavAreaMeta";
        struct Offsets
        {
            static constexpr std::uintptr_t HealthThreshold = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HealthThreshold", 0x48, "IntProperty"},
        }};
    };

    struct JunoMinifigAnimationComponent
    {
        static constexpr std::string_view Name = "JunoMinifigAnimationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LookAtRotationUpdateRate = 0xC0;
            static constexpr std::uintptr_t MinifigLookAtRotation = 0xC8;
            static constexpr std::uintptr_t AnimSharingSetup = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LookAtRotationUpdateRate", 0xC0, "FloatProperty"},
            {"MinifigLookAtRotation", 0xC8, "StructProperty"},
            {"AnimSharingSetup", 0xE0, "ObjectProperty"},
        }};
    };

    struct JunoModeratorModeBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoModeratorModeBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoModeratorModeComponent
    {
        static constexpr std::string_view Name = "JunoModeratorModeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InputAction_TeleportPlayer_ModeratorMode = 0xC0;
            static constexpr std::uintptr_t bIsModeratorModeEnabled = 0xC8;
            static constexpr std::uintptr_t bIsPlayerAllowedToFly = 0xC9;
            static constexpr std::uintptr_t bModeratorConfirmed = 0xCA;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"InputAction_TeleportPlayer_ModeratorMode", 0xC0, "ObjectProperty"},
            {"bIsModeratorModeEnabled", 0xC8, "BoolProperty"},
            {"bIsPlayerAllowedToFly", 0xC9, "BoolProperty"},
            {"bModeratorConfirmed", 0xCA, "BoolProperty"},
        }};
    };

    struct JunoMoodReactionConfigMappings
    {
        static constexpr std::string_view Name = "JunoMoodReactionConfigMappings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t MoodReactionConfigMap = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MoodReactionConfigMap", 0x28, "MapProperty"},
        }};
    };

    struct JunoMoveBuildingBehavior
    {
        static constexpr std::string_view Name = "JunoMoveBuildingBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingBehavior";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSaveSelectedActorsCompleted = 0x900;
            static constexpr std::uintptr_t ExitBehavior = 0x958;
            static constexpr std::uintptr_t SaveBuild = 0x960;
            static constexpr std::uintptr_t MaxDistanceFromCapturedOriginXY = 0x968;
            static constexpr std::uintptr_t MaxDistanceFromCapturedOriginZ = 0x96C;
            static constexpr std::uintptr_t UnweldMoveClasses = 0x970;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnSaveSelectedActorsCompleted", 0x900, "MulticastInlineDelegateProperty"},
            {"ExitBehavior", 0x958, "ObjectProperty"},
            {"SaveBuild", 0x960, "ObjectProperty"},
            {"MaxDistanceFromCapturedOriginXY", 0x968, "FloatProperty"},
            {"MaxDistanceFromCapturedOriginZ", 0x96C, "FloatProperty"},
            {"UnweldMoveClasses", 0x970, "ArrayProperty"},
        }};
    };

    struct JunoMovementMode_ELTacSprint
    {
        static constexpr std::string_view Name = "JunoMovementMode_ELTacSprint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ELTacSprint";
        struct Offsets
        {
            static constexpr std::uintptr_t TacticalSprintFail = 0x1E8;
            static constexpr std::uintptr_t TacticalSprintFailLowEnergy = 0x208;
            static constexpr std::uintptr_t MinEnergyToActivate = 0x228;
            static constexpr std::uintptr_t MinEnergyToActivateCreative = 0x258;
            static constexpr std::uintptr_t GCEnergyDrain = 0x284;
            static constexpr std::uintptr_t GCSpeedLines = 0x288;
            static constexpr std::uintptr_t GCSprintEnd = 0x28C;
            static constexpr std::uintptr_t ShowSpeedLines = 0x290;
            static constexpr std::uintptr_t MaxSpeedMultiplier = 0x2B8;
            static constexpr std::uintptr_t AccelerationMultiplier = 0x2E0;
            static constexpr std::uintptr_t RampUpSpeed = 0x308;
            static constexpr std::uintptr_t ModifiedRotationRate = 0x330;
            static constexpr std::uintptr_t JumpHeightMultiplier = 0x360;
            static constexpr std::uintptr_t TutorialGameplayTag = 0x38C;
            static constexpr std::uintptr_t TutorialAdditionalSourceTag = 0x390;
            static constexpr std::uintptr_t TutorialTargetTag = 0x3B0;
            static constexpr std::uintptr_t OnEnergyFullyDrainedSound = 0x3D0;
            static constexpr std::uintptr_t TacticalBehaviorTag = 0x3D8;
            static constexpr std::uintptr_t bIsCancelledBySliding = 0x3DC;
            static constexpr std::uintptr_t bUseModifiedRotationRate = 0x3DC;
            static constexpr std::uintptr_t AllowWeaponHolster = 0x3E0;
            static constexpr std::uintptr_t bOnlyShowEnergyDrainOnLocalClient = 0x40C;
            static constexpr std::uintptr_t bOnlyShowSpeedLinesOnLocalClient = 0x40C;
            static constexpr std::uintptr_t bOnlyShowSprintEndOnLocalClient = 0x40C;
            static constexpr std::uintptr_t bShouldDropHeldObjectOnActivate = 0x40C;
            static constexpr std::uintptr_t bShouldHolsterWeapon = 0x40C;
            static constexpr std::uintptr_t TagPreventWeaponHolster = 0x410;
            static constexpr std::uintptr_t TagPreventHeldObjectDrop = 0x414;
            static constexpr std::uintptr_t MinSpeedForHolster = 0x418;
            static constexpr std::uintptr_t HolsterTimeAttemptDelay = 0x41C;
            static constexpr std::uintptr_t MaxTryHolsterAttempt = 0x420;
            static constexpr std::uintptr_t EnergyComponentClass = 0x438;
            static constexpr std::uintptr_t HF_EnergyCostOnStart = 0x440;
            static constexpr std::uintptr_t HF_EnergyCostPerSecond = 0x470;
            static constexpr std::uintptr_t HF_EnergyCostOnJump = 0x4A0;
            static constexpr std::uintptr_t HF_DurabilityCostOnStart = 0x4D0;
            static constexpr std::uintptr_t HF_DurabilityCostOnJump = 0x500;
            static constexpr std::uintptr_t IgnoreJumpCostTag = 0x52C;
            static constexpr std::uintptr_t ShouldPauseEnergyUseOnFalling = 0x530;
            static constexpr std::uintptr_t ShouldStopEnergyRegenerationOnPaused = 0x560;
            static constexpr std::uintptr_t StopEnergyRegenerationOnPauseTag = 0x58C;
            static constexpr std::uintptr_t TacticalSprintTag = 0x590;
            static constexpr std::uintptr_t EnergyUseIdentifier = 0x594;
            static constexpr std::uintptr_t SprintStartedSoundMix = 0x598;
            static constexpr std::uintptr_t SprintStartedSound2D = 0x5A0;
            static constexpr std::uintptr_t HF_TacSprintEnabled = 0x5B0;
        };

        inline static constexpr std::array<PropertyInfo, 46> Properties{{
            {"TacticalSprintFail", 0x1E8, "StructProperty"},
            {"TacticalSprintFailLowEnergy", 0x208, "StructProperty"},
            {"MinEnergyToActivate", 0x228, "StructProperty"},
            {"MinEnergyToActivateCreative", 0x258, "StructProperty"},
            {"GCEnergyDrain", 0x284, "StructProperty"},
            {"GCSpeedLines", 0x288, "StructProperty"},
            {"GCSprintEnd", 0x28C, "StructProperty"},
            {"ShowSpeedLines", 0x290, "StructProperty"},
            {"MaxSpeedMultiplier", 0x2B8, "StructProperty"},
            {"AccelerationMultiplier", 0x2E0, "StructProperty"},
            {"RampUpSpeed", 0x308, "StructProperty"},
            {"ModifiedRotationRate", 0x330, "StructProperty"},
            {"JumpHeightMultiplier", 0x360, "StructProperty"},
            {"TutorialGameplayTag", 0x38C, "StructProperty"},
            {"TutorialAdditionalSourceTag", 0x390, "StructProperty"},
            {"TutorialTargetTag", 0x3B0, "StructProperty"},
            {"OnEnergyFullyDrainedSound", 0x3D0, "ObjectProperty"},
            {"TacticalBehaviorTag", 0x3D8, "StructProperty"},
            {"bIsCancelledBySliding", 0x3DC, "BoolProperty"},
            {"bUseModifiedRotationRate", 0x3DC, "BoolProperty"},
            {"AllowWeaponHolster", 0x3E0, "StructProperty"},
            {"bOnlyShowEnergyDrainOnLocalClient", 0x40C, "BoolProperty"},
            {"bOnlyShowSpeedLinesOnLocalClient", 0x40C, "BoolProperty"},
            {"bOnlyShowSprintEndOnLocalClient", 0x40C, "BoolProperty"},
            {"bShouldDropHeldObjectOnActivate", 0x40C, "BoolProperty"},
            {"bShouldHolsterWeapon", 0x40C, "BoolProperty"},
            {"TagPreventWeaponHolster", 0x410, "StructProperty"},
            {"TagPreventHeldObjectDrop", 0x414, "StructProperty"},
            {"MinSpeedForHolster", 0x418, "FloatProperty"},
            {"HolsterTimeAttemptDelay", 0x41C, "FloatProperty"},
            {"MaxTryHolsterAttempt", 0x420, "ByteProperty"},
            {"EnergyComponentClass", 0x438, "ClassProperty"},
            {"HF_EnergyCostOnStart", 0x440, "StructProperty"},
            {"HF_EnergyCostPerSecond", 0x470, "StructProperty"},
            {"HF_EnergyCostOnJump", 0x4A0, "StructProperty"},
            {"HF_DurabilityCostOnStart", 0x4D0, "StructProperty"},
            {"HF_DurabilityCostOnJump", 0x500, "StructProperty"},
            {"IgnoreJumpCostTag", 0x52C, "StructProperty"},
            {"ShouldPauseEnergyUseOnFalling", 0x530, "StructProperty"},
            {"ShouldStopEnergyRegenerationOnPaused", 0x560, "StructProperty"},
            {"StopEnergyRegenerationOnPauseTag", 0x58C, "StructProperty"},
            {"TacticalSprintTag", 0x590, "StructProperty"},
            {"EnergyUseIdentifier", 0x594, "StructProperty"},
            {"SprintStartedSoundMix", 0x598, "ObjectProperty"},
            {"SprintStartedSound2D", 0x5A0, "ObjectProperty"},
            {"HF_TacSprintEnabled", 0x5B0, "StructProperty"},
        }};
    };

    struct JunoMultiCraftingComponent
    {
        static constexpr std::string_view Name = "JunoMultiCraftingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMultiCraftingFinished = 0xC8;
            static constexpr std::uintptr_t OnMultiCraftingBlocked = 0xD8;
            static constexpr std::uintptr_t TimeToStartProcess = 0x100;
            static constexpr std::uintptr_t CachedCraftingObjectComponent = 0x104;
            static constexpr std::uintptr_t CachedInventoryComponent = 0x10C;
            static constexpr std::uintptr_t AnalyticsComponent = 0x118;
            static constexpr std::uintptr_t CraftingProcesses = 0x120;
            static constexpr std::uintptr_t KeyGenerator = 0x138;
            static constexpr std::uintptr_t bIsCraftingBlocked = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OnMultiCraftingFinished", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnMultiCraftingBlocked", 0xD8, "MulticastInlineDelegateProperty"},
            {"TimeToStartProcess", 0x100, "FloatProperty"},
            {"CachedCraftingObjectComponent", 0x104, "WeakObjectProperty"},
            {"CachedInventoryComponent", 0x10C, "WeakObjectProperty"},
            {"AnalyticsComponent", 0x118, "ObjectProperty"},
            {"CraftingProcesses", 0x120, "ArrayProperty"},
            {"KeyGenerator", 0x138, "Int64Property"},
            {"bIsCraftingBlocked", 0x150, "BoolProperty"},
        }};
    };

    struct JunoMutator_AutoPickup
    {
        static constexpr std::string_view Name = "JunoMutator_AutoPickup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t DoNotAutoPickupGameplayTags = 0x2F0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DoNotAutoPickupGameplayTags", 0x2F0, "StructProperty"},
        }};
    };

    struct JunoNPCConversationParticipantComponent
    {
        static constexpr std::string_view Name = "JunoNPCConversationParticipantComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNPCConversationParticipantComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxActiveConversations = 0x668;
            static constexpr std::uintptr_t ParticipantIconSmall = 0x670;
            static constexpr std::uintptr_t ParticipantIconWide = 0x690;
            static constexpr std::uintptr_t CurrentConversationItemRewards = 0x6D8;
            static constexpr std::uintptr_t CurrentConversationItemsGivenToNPC = 0x708;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MaxActiveConversations", 0x668, "IntProperty"},
            {"ParticipantIconSmall", 0x670, "SoftObjectProperty"},
            {"ParticipantIconWide", 0x690, "SoftObjectProperty"},
            {"CurrentConversationItemRewards", 0x6D8, "ArrayProperty"},
            {"CurrentConversationItemsGivenToNPC", 0x708, "ArrayProperty"},
        }};
    };

    struct JunoNPCFollowerPawnComponent
    {
        static constexpr std::string_view Name = "JunoNPCFollowerPawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoFollowerPawnComponentBase";
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

    struct JunoNPCMoodReactionDatabase
    {
        static constexpr std::string_view Name = "JunoNPCMoodReactionDatabase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MoodReactionConfigMappings = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MoodReactionConfigMappings", 0x118, "ObjectProperty"},
        }};
    };

    struct JunoNPCPawnComponent
    {
        static constexpr std::string_view Name = "JunoNPCPawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnJunoNPCPawnComponentChangedSoftRemovedReason = 0xC8;
            static constexpr std::uintptr_t PreFTUESkillSetClasses = 0x188;
            static constexpr std::uintptr_t CachedAIBotConvertParameters = 0x198;
            static constexpr std::uintptr_t AIRoleToDisplayText = 0x208;
            static constexpr std::uintptr_t FTUESkillSetClasses = 0x218;
            static constexpr std::uintptr_t FTUETagsToAdd = 0x228;
            static constexpr std::uintptr_t FTUEOverrideTileGenerationRadius = 0x248;
            static constexpr std::uintptr_t FTUEOverrideTileRemovalRadius = 0x270;
            static constexpr std::uintptr_t TimeToGoInHardRemovalStartStateBeforeHardRemovalInRealSeconds = 0x298;
            static constexpr std::uintptr_t TimeForVisitorsToGoInHardRemovalStartStateBeforeHardRemovalInRealSeconds = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"OnJunoNPCPawnComponentChangedSoftRemovedReason", 0xC8, "MulticastInlineDelegateProperty"},
            {"PreFTUESkillSetClasses", 0x188, "ArrayProperty"},
            {"CachedAIBotConvertParameters", 0x198, "ObjectProperty"},
            {"AIRoleToDisplayText", 0x208, "MapProperty"},
            {"FTUESkillSetClasses", 0x218, "ArrayProperty"},
            {"FTUETagsToAdd", 0x228, "StructProperty"},
            {"FTUEOverrideTileGenerationRadius", 0x248, "StructProperty"},
            {"FTUEOverrideTileRemovalRadius", 0x270, "StructProperty"},
            {"TimeToGoInHardRemovalStartStateBeforeHardRemovalInRealSeconds", 0x298, "StructProperty"},
            {"TimeForVisitorsToGoInHardRemovalStartStateBeforeHardRemovalInRealSeconds", 0x2C0, "StructProperty"},
        }};
    };

    struct JunoNPCPawnComponent_Speech
    {
        static constexpr std::string_view Name = "JunoNPCPawnComponent_Speech";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t StyledParticipantNameFormat = 0xD0;
            static constexpr std::uintptr_t SpeechSetupPerType = 0xE0;
            static constexpr std::uintptr_t GlobalSetup = 0xF0;
            static constexpr std::uintptr_t RequiredTagQueryToEnable = 0x100;
            static constexpr std::uintptr_t RunningResult = 0x148;
            static constexpr std::uintptr_t OnNewRunningResultDelegate = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"StyledParticipantNameFormat", 0xD0, "TextProperty"},
            {"SpeechSetupPerType", 0xE0, "MapProperty"},
            {"GlobalSetup", 0xF0, "StructProperty"},
            {"RequiredTagQueryToEnable", 0x100, "StructProperty"},
            {"RunningResult", 0x148, "StructProperty"},
            {"OnNewRunningResultDelegate", 0x1B8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoNPCSpeechComponentInterface
    {
        static constexpr std::string_view Name = "JunoNPCSpeechComponentInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoNamedPOIComponent
    {
        static constexpr std::string_view Name = "JunoNamedPOIComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCampComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnJunoPOINameChangedDelegate = 0xC0;
            static constexpr std::uintptr_t OnJunoPOIMarkerChangedDelegate = 0xD0;
            static constexpr std::uintptr_t bUseStaticPOIName = 0x101;
            static constexpr std::uintptr_t POIName = 0x108;
            static constexpr std::uintptr_t bUseStaticMarker = 0x118;
            static constexpr std::uintptr_t Marker = 0x120;
            static constexpr std::uintptr_t MarkerId = 0x230;
            static constexpr std::uintptr_t RandomNameRegistry = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OnJunoPOINameChangedDelegate", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnJunoPOIMarkerChangedDelegate", 0xD0, "MulticastInlineDelegateProperty"},
            {"bUseStaticPOIName", 0x101, "BoolProperty"},
            {"POIName", 0x108, "TextProperty"},
            {"bUseStaticMarker", 0x118, "BoolProperty"},
            {"Marker", 0x120, "StructProperty"},
            {"MarkerId", 0x230, "StructProperty"},
            {"RandomNameRegistry", 0x240, "StructProperty"},
        }};
    };

    struct JunoNamedRandomStreamGenerator
    {
        static constexpr std::string_view Name = "JunoNamedRandomStreamGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RandomSeed = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RandomSeed", 0x28, "IntProperty"},
        }};
    };

    struct JunoNavSystemConfig
    {
        static constexpr std::string_view Name = "JunoNavSystemConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaNavSystemConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t NavDataSetVariants = 0x60;
            static constexpr std::uintptr_t bAllowStaticNavigationInvokerBoxes = 0x70;
            static constexpr std::uintptr_t bDiscardNavDataFromSublevels = 0x70;
            static constexpr std::uintptr_t bLazyOctree = 0x70;
            static constexpr std::uintptr_t bPrioritizeNavigationAroundSpawners = 0x70;
            static constexpr std::uintptr_t bResetDirtyAreasOnInitialBuildingRelease = 0x70;
            static constexpr std::uintptr_t bUseNavDataSetVariants = 0x70;
            static constexpr std::uintptr_t bUseNavOctTreeInclusionBounds = 0x70;
            static constexpr std::uintptr_t bUseNavigationInvokers = 0x70;
            static constexpr std::uintptr_t bConfigureDirtyAreaWarningSizeThreshold = 0x71;
            static constexpr std::uintptr_t bNavOctreeUnlockedByDefaultWhenNotPreloadingNavData = 0x71;
            static constexpr std::uintptr_t bShouldDiscardMainLevelNavDataAndBound = 0x71;
            static constexpr std::uintptr_t bSupportRuntimeNavmeshDisabling = 0x71;
            static constexpr std::uintptr_t bUseDirtyAreaFilterFunction = 0x71;
            static constexpr std::uintptr_t InvokersMaximumDistanceFromSeed = 0x78;
            static constexpr std::uintptr_t DirtyAreaWarningSizeThreshold = 0x80;
            static constexpr std::uintptr_t OverriddenSupportedAgentsByReleaseVersion = 0x88;
            static constexpr std::uintptr_t bSuspendNavmeshWhenNoPossibleUsers = 0x98;
            static constexpr std::uintptr_t bConfigureNavigationFromWorldSettings = 0x99;
            static constexpr std::uintptr_t bRemoveNavmeshWhenNotUsedInExperience = 0x9A;
            static constexpr std::uintptr_t AllowedNavBoundsUniqueActorTags = 0xA0;
            static constexpr std::uintptr_t EnableAutoNavConfigForAgent = 0xB0;
            static constexpr std::uintptr_t AgentsSupportingAutoNavMeshDetection = 0xB4;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"NavDataSetVariants", 0x60, "ArrayProperty"},
            {"bAllowStaticNavigationInvokerBoxes", 0x70, "BoolProperty"},
            {"bDiscardNavDataFromSublevels", 0x70, "BoolProperty"},
            {"bLazyOctree", 0x70, "BoolProperty"},
            {"bPrioritizeNavigationAroundSpawners", 0x70, "BoolProperty"},
            {"bResetDirtyAreasOnInitialBuildingRelease", 0x70, "BoolProperty"},
            {"bUseNavDataSetVariants", 0x70, "BoolProperty"},
            {"bUseNavOctTreeInclusionBounds", 0x70, "BoolProperty"},
            {"bUseNavigationInvokers", 0x70, "BoolProperty"},
            {"bConfigureDirtyAreaWarningSizeThreshold", 0x71, "BoolProperty"},
            {"bNavOctreeUnlockedByDefaultWhenNotPreloadingNavData", 0x71, "BoolProperty"},
            {"bShouldDiscardMainLevelNavDataAndBound", 0x71, "BoolProperty"},
            {"bSupportRuntimeNavmeshDisabling", 0x71, "BoolProperty"},
            {"bUseDirtyAreaFilterFunction", 0x71, "BoolProperty"},
            {"InvokersMaximumDistanceFromSeed", 0x78, "DoubleProperty"},
            {"DirtyAreaWarningSizeThreshold", 0x80, "FloatProperty"},
            {"OverriddenSupportedAgentsByReleaseVersion", 0x88, "ArrayProperty"},
            {"bSuspendNavmeshWhenNoPossibleUsers", 0x98, "BoolProperty"},
            {"bConfigureNavigationFromWorldSettings", 0x99, "BoolProperty"},
            {"bRemoveNavmeshWhenNotUsedInExperience", 0x9A, "BoolProperty"},
            {"AllowedNavBoundsUniqueActorTags", 0xA0, "ArrayProperty"},
            {"EnableAutoNavConfigForAgent", 0xB0, "StructProperty"},
            {"AgentsSupportingAutoNavMeshDetection", 0xB4, "StructProperty"},
        }};
    };

    struct JunoNoBuildVolume
    {
        static constexpr std::string_view Name = "JunoNoBuildVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Volume";
        struct Offsets
        {
            static constexpr std::uintptr_t bBlocksBuilding = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bBlocksBuilding", 0x2B0, "BoolProperty"},
        }};
    };

    struct JunoNoBuildVolumeRegistrySubsystem
    {
        static constexpr std::string_view Name = "JunoNoBuildVolumeRegistrySubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoObjectiveProcessor_ItemGivenToNPC
    {
        static constexpr std::string_view Name = "JunoObjectiveProcessor_ItemGivenToNPC";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoPOIQuestComponent
    {
        static constexpr std::string_view Name = "JunoPOIQuestComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent_Quests";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestsToGrantOnStart = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuestsToGrantOnStart", 0x1B0, "ArrayProperty"},
        }};
    };

    struct JunoPassiveCraftingAnalyticsComponent
    {
        static constexpr std::string_view Name = "JunoPassiveCraftingAnalyticsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AccumulatedItem = 0xC8;
            static constexpr std::uintptr_t AccumulatedContributors = 0xD8;
            static constexpr std::uintptr_t AccumulatedIngredients = 0xE8;
            static constexpr std::uintptr_t Recipe = 0xF8;
            static constexpr std::uintptr_t AccumulatedCraftingTime = 0x100;
            static constexpr std::uintptr_t bUsedResourcesFromNearbyChests = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AccumulatedItem", 0xC8, "StructProperty"},
            {"AccumulatedContributors", 0xD8, "ArrayProperty"},
            {"AccumulatedIngredients", 0xE8, "ArrayProperty"},
            {"Recipe", 0xF8, "NameProperty"},
            {"AccumulatedCraftingTime", 0x100, "DoubleProperty"},
            {"bUsedResourcesFromNearbyChests", 0x108, "BoolProperty"},
        }};
    };

    struct JunoPassiveCraftingComponent
    {
        static constexpr std::string_view Name = "JunoPassiveCraftingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPassiveCraftingDone = 0xC8;
            static constexpr std::uintptr_t OnAutoCraftingFormulaRowChanged = 0xD8;
            static constexpr std::uintptr_t bAutoSelectRecipeFromIngredients = 0xE8;
            static constexpr std::uintptr_t CachedInventoryComponent = 0xEC;
            static constexpr std::uintptr_t CachedCraftingObjectComponent = 0xF4;
            static constexpr std::uintptr_t bIsAutoCrafting = 0xFC;
            static constexpr std::uintptr_t AutoCraftingFormulaRow = 0x100;
            static constexpr std::uintptr_t AutoCraftingStartDateTime = 0x108;
            static constexpr std::uintptr_t AnalyticsComponent = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OnPassiveCraftingDone", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnAutoCraftingFormulaRowChanged", 0xD8, "MulticastInlineDelegateProperty"},
            {"bAutoSelectRecipeFromIngredients", 0xE8, "BoolProperty"},
            {"CachedInventoryComponent", 0xEC, "WeakObjectProperty"},
            {"CachedCraftingObjectComponent", 0xF4, "WeakObjectProperty"},
            {"bIsAutoCrafting", 0xFC, "BoolProperty"},
            {"AutoCraftingFormulaRow", 0x100, "NameProperty"},
            {"AutoCraftingStartDateTime", 0x108, "StructProperty"},
            {"AnalyticsComponent", 0x118, "ObjectProperty"},
        }};
    };

    struct JunoPassiveResourcesGathererPawnComponent
    {
        static constexpr std::string_view Name = "JunoPassiveResourcesGathererPawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t JobEstimationTimeMultiplier = 0xC0;
            static constexpr std::uintptr_t BespokeLootPathTagQuery = 0xE8;
            static constexpr std::uintptr_t VillagerJobGlobalConfig = 0x130;
            static constexpr std::uintptr_t GathererTable = 0x150;
            static constexpr std::uintptr_t OnPassiveResourceGeneratedOnPawnDelegate = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"JobEstimationTimeMultiplier", 0xC0, "StructProperty"},
            {"BespokeLootPathTagQuery", 0xE8, "StructProperty"},
            {"VillagerJobGlobalConfig", 0x130, "StructProperty"},
            {"GathererTable", 0x150, "ObjectProperty"},
            {"OnPassiveResourceGeneratedOnPawnDelegate", 0x158, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoPassiveResourcesGatheringComponent
    {
        static constexpr std::string_view Name = "JunoPassiveResourcesGatheringComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveGatheringRows = 0xE8;
            static constexpr std::uintptr_t OnPassiveResourceGeneratedDelegate = 0xF8;
            static constexpr std::uintptr_t MatchingRolesQuery = 0x130;
            static constexpr std::uintptr_t VillagerJobLootRegistryType = 0x178;
            static constexpr std::uintptr_t GatheringRows = 0x180;
            static constexpr std::uintptr_t SimulationConfigurationRow = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ActiveGatheringRows", 0xE8, "ArrayProperty"},
            {"OnPassiveResourceGeneratedDelegate", 0xF8, "MulticastInlineDelegateProperty"},
            {"MatchingRolesQuery", 0x130, "StructProperty"},
            {"VillagerJobLootRegistryType", 0x178, "StructProperty"},
            {"GatheringRows", 0x180, "ArrayProperty"},
            {"SimulationConfigurationRow", 0x190, "StructProperty"},
        }};
    };

    struct JunoPassiveResourcesGatheringWorldConditionSchema
    {
        static constexpr std::string_view Name = "JunoPassiveResourcesGatheringWorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct JunoPawnAnimInstance
    {
        static constexpr std::string_view Name = "JunoPawnAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t AggressiveGameplayTag = 0x360;
            static constexpr std::uintptr_t FrozenGameplayTag = 0x364;
            static constexpr std::uintptr_t PawnMovingSpeedThreshold = 0x368;
            static constexpr std::uintptr_t bIsFalling = 0x36C;
            static constexpr std::uintptr_t PawnSpeed2D = 0x370;
            static constexpr std::uintptr_t PawnVelocity = 0x378;
            static constexpr std::uintptr_t PawnRotationRate = 0x390;
            static constexpr std::uintptr_t bPawnIsDBNO = 0x3A8;
            static constexpr std::uintptr_t bPawnIsDying = 0x3A8;
            static constexpr std::uintptr_t bPawnIsFalling = 0x3A8;
            static constexpr std::uintptr_t bPawnIsIdling = 0x3A8;
            static constexpr std::uintptr_t bPawnIsJumping = 0x3A8;
            static constexpr std::uintptr_t bPawnIsMoving2D = 0x3A8;
            static constexpr std::uintptr_t bPawnIsMovingOnGround = 0x3A8;
            static constexpr std::uintptr_t bPawnIsOnGround = 0x3A8;
            static constexpr std::uintptr_t bPawnHasAcceleration = 0x3A9;
            static constexpr std::uintptr_t bPawnHasRootMotion = 0x3A9;
            static constexpr std::uintptr_t bPawnHasVelocity = 0x3A9;
            static constexpr std::uintptr_t bPawnIdleBreakTimeIsExpired = 0x3A9;
            static constexpr std::uintptr_t bPawnIsAggressive = 0x3A9;
            static constexpr std::uintptr_t bPawnMovingIdleBreakTimeIsExpired = 0x3A9;
            static constexpr std::uintptr_t bPawnWasMoving2D = 0x3A9;
            static constexpr std::uintptr_t bPawnIsFrozen = 0x3AA;
            static constexpr std::uintptr_t PawnAcceleration = 0x3B0;
            static constexpr std::uintptr_t PawnAccelerationDirection = 0x3C8;
            static constexpr std::uintptr_t PawnRotation = 0x3D0;
            static constexpr std::uintptr_t PawnRotationDelta = 0x3E8;
            static constexpr std::uintptr_t PawnRotationRateNormalized = 0x400;
            static constexpr std::uintptr_t PawnRootRotation = 0x418;
            static constexpr std::uintptr_t PawnVelocityDirection = 0x430;
            static constexpr std::uintptr_t PawnPreviousVelocity = 0x438;
            static constexpr std::uintptr_t PawnIdleBreakTime = 0x450;
            static constexpr std::uintptr_t PawnMovingIdleBreakTime = 0x454;
            static constexpr std::uintptr_t PawnCurrentLOD = 0x458;
            static constexpr std::uintptr_t PawnLocation = 0x460;
            static constexpr std::uintptr_t PawnLandSpeedMultiplier = 0x478;
            static constexpr std::uintptr_t AnimationFrozenPoseName = 0x47C;
            static constexpr std::uintptr_t bAnimDynamicsEnabled = 0x480;
            static constexpr std::uintptr_t bClothEnabled = 0x480;
            static constexpr std::uintptr_t bRigidBodyEnabled = 0x480;
        };

        inline static constexpr std::array<PropertyInfo, 40> Properties{{
            {"AggressiveGameplayTag", 0x360, "StructProperty"},
            {"FrozenGameplayTag", 0x364, "StructProperty"},
            {"PawnMovingSpeedThreshold", 0x368, "FloatProperty"},
            {"bIsFalling", 0x36C, "BoolProperty"},
            {"PawnSpeed2D", 0x370, "FloatProperty"},
            {"PawnVelocity", 0x378, "StructProperty"},
            {"PawnRotationRate", 0x390, "StructProperty"},
            {"bPawnIsDBNO", 0x3A8, "BoolProperty"},
            {"bPawnIsDying", 0x3A8, "BoolProperty"},
            {"bPawnIsFalling", 0x3A8, "BoolProperty"},
            {"bPawnIsIdling", 0x3A8, "BoolProperty"},
            {"bPawnIsJumping", 0x3A8, "BoolProperty"},
            {"bPawnIsMoving2D", 0x3A8, "BoolProperty"},
            {"bPawnIsMovingOnGround", 0x3A8, "BoolProperty"},
            {"bPawnIsOnGround", 0x3A8, "BoolProperty"},
            {"bPawnHasAcceleration", 0x3A9, "BoolProperty"},
            {"bPawnHasRootMotion", 0x3A9, "BoolProperty"},
            {"bPawnHasVelocity", 0x3A9, "BoolProperty"},
            {"bPawnIdleBreakTimeIsExpired", 0x3A9, "BoolProperty"},
            {"bPawnIsAggressive", 0x3A9, "BoolProperty"},
            {"bPawnMovingIdleBreakTimeIsExpired", 0x3A9, "BoolProperty"},
            {"bPawnWasMoving2D", 0x3A9, "BoolProperty"},
            {"bPawnIsFrozen", 0x3AA, "BoolProperty"},
            {"PawnAcceleration", 0x3B0, "StructProperty"},
            {"PawnAccelerationDirection", 0x3C8, "FloatProperty"},
            {"PawnRotation", 0x3D0, "StructProperty"},
            {"PawnRotationDelta", 0x3E8, "StructProperty"},
            {"PawnRotationRateNormalized", 0x400, "StructProperty"},
            {"PawnRootRotation", 0x418, "StructProperty"},
            {"PawnVelocityDirection", 0x430, "FloatProperty"},
            {"PawnPreviousVelocity", 0x438, "StructProperty"},
            {"PawnIdleBreakTime", 0x450, "FloatProperty"},
            {"PawnMovingIdleBreakTime", 0x454, "FloatProperty"},
            {"PawnCurrentLOD", 0x458, "IntProperty"},
            {"PawnLocation", 0x460, "StructProperty"},
            {"PawnLandSpeedMultiplier", 0x478, "FloatProperty"},
            {"AnimationFrozenPoseName", 0x47C, "NameProperty"},
            {"bAnimDynamicsEnabled", 0x480, "BoolProperty"},
            {"bClothEnabled", 0x480, "BoolProperty"},
            {"bRigidBodyEnabled", 0x480, "BoolProperty"},
        }};
    };

    struct JunoPawnComponent
    {
        static constexpr std::string_view Name = "JunoPawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bShouldSpawnDeathChest = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bShouldSpawnDeathChest", 0xC8, "BoolProperty"},
        }};
    };

    struct JunoPawnComponentMood
    {
        static constexpr std::string_view Name = "JunoPawnComponentMood";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnJunoMoodChangedDelegate = 0xC8;
            static constexpr std::uintptr_t MaximumTimeToUseRequest = 0xF0;
            static constexpr std::uintptr_t bHandleHolstering = 0xF4;
            static constexpr std::uintptr_t CurrentMoodState = 0xF8;
            static constexpr std::uintptr_t MoodAnimProxyTable = 0x100;
            static constexpr std::uintptr_t DefaultMoodAnimProxyTable = 0x108;
            static constexpr std::uintptr_t bIsMoodReactionActive = 0x110;
            static constexpr std::uintptr_t RunningMoodReactionConfig = 0x114;
            static constexpr std::uintptr_t LastRequestedMoodReaction = 0x128;
            static constexpr std::uintptr_t OnJunoMoodReactionTriggeredDelegate = 0x140;
            static constexpr std::uintptr_t OnJunoMoodReactionFinishedDelegate = 0x168;
            static constexpr std::uintptr_t OnJunoMoodReactionCanceledDelegate = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"OnJunoMoodChangedDelegate", 0xC8, "MulticastInlineDelegateProperty"},
            {"MaximumTimeToUseRequest", 0xF0, "FloatProperty"},
            {"bHandleHolstering", 0xF4, "BoolProperty"},
            {"CurrentMoodState", 0xF8, "StructProperty"},
            {"MoodAnimProxyTable", 0x100, "ObjectProperty"},
            {"DefaultMoodAnimProxyTable", 0x108, "ObjectProperty"},
            {"bIsMoodReactionActive", 0x110, "BoolProperty"},
            {"RunningMoodReactionConfig", 0x114, "StructProperty"},
            {"LastRequestedMoodReaction", 0x128, "StructProperty"},
            {"OnJunoMoodReactionTriggeredDelegate", 0x140, "MulticastInlineDelegateProperty"},
            {"OnJunoMoodReactionFinishedDelegate", 0x168, "MulticastInlineDelegateProperty"},
            {"OnJunoMoodReactionCanceledDelegate", 0x190, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoPawnComponentSpeechBubble
    {
        static constexpr std::string_view Name = "JunoPawnComponentSpeechBubble";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent_SpeechBubble";
        struct Offsets
        {
            static constexpr std::uintptr_t SpeechBubbleShow = 0xC8;
            static constexpr std::uintptr_t SpeechBubbleHide = 0xD8;
            static constexpr std::uintptr_t SpeechBubbleTexts = 0xE8;
            static constexpr std::uintptr_t SpeechBubbleWidgetComponentClass = 0x108;
            static constexpr std::uintptr_t IsEnabled = 0x110;
            static constexpr std::uintptr_t OnlyDisplaysBetweenTeammates = 0x138;
            static constexpr std::uintptr_t UseRandomTextAtEachSpeech = 0x160;
            static constexpr std::uintptr_t DisplayBubbleDuration = 0x188;
            static constexpr std::uintptr_t SpeechBubbleMaxDrawDistance = 0x1B0;
            static constexpr std::uintptr_t CheckGroupMembersToSpeak = 0x1D8;
            static constexpr std::uintptr_t CheckFactionMembersInRadius = 0x200;
            static constexpr std::uintptr_t SpeechBubbleInfo = 0x228;
            static constexpr std::uintptr_t CachedSelectedText = 0x240;
            static constexpr std::uintptr_t bIsLocallySpeaking = 0x250;
            static constexpr std::uintptr_t SpeechBubbleMaxDrawDistanceSqr = 0x254;
            static constexpr std::uintptr_t bShouldShowSpeechBubble = 0x258;
            static constexpr std::uintptr_t TextWidgetComponent = 0x260;
            static constexpr std::uintptr_t CachedGroupComponent = 0x278;
            static constexpr std::uintptr_t LoadedTextsDataTable = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"SpeechBubbleShow", 0xC8, "MulticastInlineDelegateProperty"},
            {"SpeechBubbleHide", 0xD8, "MulticastInlineDelegateProperty"},
            {"SpeechBubbleTexts", 0xE8, "SoftObjectProperty"},
            {"SpeechBubbleWidgetComponentClass", 0x108, "ClassProperty"},
            {"IsEnabled", 0x110, "StructProperty"},
            {"OnlyDisplaysBetweenTeammates", 0x138, "StructProperty"},
            {"UseRandomTextAtEachSpeech", 0x160, "StructProperty"},
            {"DisplayBubbleDuration", 0x188, "StructProperty"},
            {"SpeechBubbleMaxDrawDistance", 0x1B0, "StructProperty"},
            {"CheckGroupMembersToSpeak", 0x1D8, "StructProperty"},
            {"CheckFactionMembersInRadius", 0x200, "StructProperty"},
            {"SpeechBubbleInfo", 0x228, "StructProperty"},
            {"CachedSelectedText", 0x240, "TextProperty"},
            {"bIsLocallySpeaking", 0x250, "BoolProperty"},
            {"SpeechBubbleMaxDrawDistanceSqr", 0x254, "FloatProperty"},
            {"bShouldShowSpeechBubble", 0x258, "BoolProperty"},
            {"TextWidgetComponent", 0x260, "ObjectProperty"},
            {"CachedGroupComponent", 0x278, "ObjectProperty"},
            {"LoadedTextsDataTable", 0x280, "ObjectProperty"},
        }};
    };

    struct JunoPawnComponent_EmotionalState
    {
        static constexpr std::string_view Name = "JunoPawnComponent_EmotionalState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnJunoCurrentEmotionalStateChangedDelegate = 0xC8;
            static constexpr std::uintptr_t OnJunoCurrentEmotionalStateStartedChange = 0xD8;
            static constexpr std::uintptr_t OnJunoCurrentEmotionChangeFinished = 0xE8;
            static constexpr std::uintptr_t OnCheatEmotionIndexChanged = 0xF8;
            static constexpr std::uintptr_t CurrentEmotionalState = 0x108;
            static constexpr std::uintptr_t TargetEmotionalState = 0x10C;
            static constexpr std::uintptr_t CheatEmotionIndex = 0x11C;
            static constexpr std::uintptr_t JunoPawnEmotionalStateMappingFromAwesomeLevel = 0x120;
            static constexpr std::uintptr_t ResetToDefaultEmotionRate = 0x138;
            static constexpr std::uintptr_t TimeToStayAtEmotionInSeconds = 0x13C;
            static constexpr std::uintptr_t DefaultEmotionHandle = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"OnJunoCurrentEmotionalStateChangedDelegate", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnJunoCurrentEmotionalStateStartedChange", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnJunoCurrentEmotionChangeFinished", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnCheatEmotionIndexChanged", 0xF8, "MulticastInlineDelegateProperty"},
            {"CurrentEmotionalState", 0x108, "EnumProperty"},
            {"TargetEmotionalState", 0x10C, "StructProperty"},
            {"CheatEmotionIndex", 0x11C, "ByteProperty"},
            {"JunoPawnEmotionalStateMappingFromAwesomeLevel", 0x120, "ArrayProperty"},
            {"ResetToDefaultEmotionRate", 0x138, "FloatProperty"},
            {"TimeToStayAtEmotionInSeconds", 0x13C, "FloatProperty"},
            {"DefaultEmotionHandle", 0x148, "StructProperty"},
        }};
    };

    struct JunoPawnComponent_MovementInputOverrides
    {
        static constexpr std::string_view Name = "JunoPawnComponent_MovementInputOverrides";
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

    struct JunoPawnPhysicsRepulsionComponent
    {
        static constexpr std::string_view Name = "JunoPawnPhysicsRepulsionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PushOutMaxDistance = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PushOutMaxDistance", 0xC0, "FloatProperty"},
        }};
    };

    struct JunoPawnStrafeComponent
    {
        static constexpr std::string_view Name = "JunoPawnStrafeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DisableStrafeTags = 0xC8;
            static constexpr std::uintptr_t StrafeGE = 0xE8;
            static constexpr std::uintptr_t InputAction_Strafe = 0xF0;
            static constexpr std::uintptr_t bStrafeEnabled = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DisableStrafeTags", 0xC8, "StructProperty"},
            {"StrafeGE", 0xE8, "ClassProperty"},
            {"InputAction_Strafe", 0xF0, "ObjectProperty"},
            {"bStrafeEnabled", 0xF8, "BoolProperty"},
        }};
    };

    struct JunoPersistenceProcessorFeatureData
    {
        static constexpr std::string_view Name = "JunoPersistenceProcessorFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t ProcessorSaveData = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ProcessorSaveData", 0x58, "StructProperty"},
        }};
    };

    struct JunoPersistenceProcessorFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoPersistenceProcessorFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoPersistenceProcessorFeatureModule
    {
        static constexpr std::string_view Name = "JunoPersistenceProcessorFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoPhysicsObjectNavigationComponent
    {
        static constexpr std::string_view Name = "JunoPhysicsObjectNavigationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LowSpeedThreshold = 0xC8;
            static constexpr std::uintptr_t LowSpeedDistanceThreshold = 0xCC;
            static constexpr std::uintptr_t LowSpeedRotationThreshold = 0xD0;
            static constexpr std::uintptr_t LowSpeedScaleThreshold = 0xD4;
            static constexpr std::uintptr_t LowSpeedDurationTrigger = 0xD8;
            static constexpr std::uintptr_t PrimitiveComponentAffectingNavMesh = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"LowSpeedThreshold", 0xC8, "FloatProperty"},
            {"LowSpeedDistanceThreshold", 0xCC, "FloatProperty"},
            {"LowSpeedRotationThreshold", 0xD0, "FloatProperty"},
            {"LowSpeedScaleThreshold", 0xD4, "FloatProperty"},
            {"LowSpeedDurationTrigger", 0xD8, "FloatProperty"},
            {"PrimitiveComponentAffectingNavMesh", 0x150, "ObjectProperty"},
        }};
    };

    struct JunoPhysicsPFWModule
    {
        static constexpr std::string_view Name = "JunoPhysicsPFWModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoPhysicsPersistenceComponent
    {
        static constexpr std::string_view Name = "JunoPhysicsPersistenceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
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

    struct JunoPhysicsPersistenceWorldSubsystem
    {
        static constexpr std::string_view Name = "JunoPhysicsPersistenceWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPhysicsTelemetrySubSystem
    {
        static constexpr std::string_view Name = "JunoPhysicsTelemetrySubSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPhysicsToy
    {
        static constexpr std::string_view Name = "JunoPhysicsToy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPhysicsToyAbilities
    {
        static constexpr std::string_view Name = "JunoPhysicsToyAbilities";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelSubscribeEvent = 0xD8;
            static constexpr std::uintptr_t ChannelUnsubscribeEvent = 0xE8;
            static constexpr std::uintptr_t OnBoundChannelUpdate = 0xF8;
            static constexpr std::uintptr_t OnReplication = 0x108;
            static constexpr std::uintptr_t OnPersistenceDataReady = 0x118;
            static constexpr std::uintptr_t OnPostPersistenceAndReady = 0x128;
            static constexpr std::uintptr_t OnToyParameterUpdate = 0x138;
            static constexpr std::uintptr_t ToyAbilities = 0x148;
            static constexpr std::uintptr_t ToyParameters = 0x158;
            static constexpr std::uintptr_t BoundControlChannels = 0x168;
            static constexpr std::uintptr_t SaveDataKeyInt = 0x178;
            static constexpr std::uintptr_t bHandlePersistenceForParameters = 0x188;
            static constexpr std::uintptr_t bPersistentDataReady = 0x189;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"ChannelSubscribeEvent", 0xD8, "MulticastInlineDelegateProperty"},
            {"ChannelUnsubscribeEvent", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnBoundChannelUpdate", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnReplication", 0x108, "MulticastInlineDelegateProperty"},
            {"OnPersistenceDataReady", 0x118, "MulticastInlineDelegateProperty"},
            {"OnPostPersistenceAndReady", 0x128, "MulticastInlineDelegateProperty"},
            {"OnToyParameterUpdate", 0x138, "MulticastInlineDelegateProperty"},
            {"ToyAbilities", 0x148, "ArrayProperty"},
            {"ToyParameters", 0x158, "ArrayProperty"},
            {"BoundControlChannels", 0x168, "ArrayProperty"},
            {"SaveDataKeyInt", 0x178, "ArrayProperty"},
            {"bHandlePersistenceForParameters", 0x188, "BoolProperty"},
            {"bPersistentDataReady", 0x189, "BoolProperty"},
        }};
    };

    struct JunoPhysicsToyActor
    {
        static constexpr std::string_view Name = "JunoPhysicsToyActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t GeometryCollectionAssemblerComponentClass = 0x9F0;
            static constexpr std::uintptr_t NeedsAssemblyInDirection = 0x9F8;
            static constexpr std::uintptr_t AssociatedItem = 0xA00;
            static constexpr std::uintptr_t bShouldPersist = 0xA08;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GeometryCollectionAssemblerComponentClass", 0x9F0, "ClassProperty"},
            {"NeedsAssemblyInDirection", 0x9F8, "EnumProperty"},
            {"AssociatedItem", 0xA00, "ObjectProperty"},
            {"bShouldPersist", 0xA08, "BoolProperty"},
        }};
    };

    struct JunoPhysicsToyConnectivityComponent
    {
        static constexpr std::string_view Name = "JunoPhysicsToyConnectivityComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyAttachedToConnectivityComponent = 0xD0;
            static constexpr std::uintptr_t NotifyRemovedFromConnectivityComponent = 0xE0;
            static constexpr std::uintptr_t bPlayspaceInitialized = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NotifyAttachedToConnectivityComponent", 0xD0, "MulticastInlineDelegateProperty"},
            {"NotifyRemovedFromConnectivityComponent", 0xE0, "MulticastInlineDelegateProperty"},
            {"bPlayspaceInitialized", 0xF8, "BoolProperty"},
        }};
    };

    struct JunoPhysicsToyPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoPhysicsToyPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t Container = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Container", 0x60, "StructProperty"},
        }};
    };

    struct JunoPhysicsToyPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoPhysicsToyPersistenceFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoPhysicsToySpawnerActor
    {
        static constexpr std::string_view Name = "JunoPhysicsToySpawnerActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingActor";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseOffsetOrientation = 0xC48;
            static constexpr std::uintptr_t FloatingValidationDirections = 0xC50;
            static constexpr std::uintptr_t bCanBeCaptured = 0xC60;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bUseOffsetOrientation", 0xC48, "BoolProperty"},
            {"FloatingValidationDirections", 0xC50, "ArrayProperty"},
            {"bCanBeCaptured", 0xC60, "BoolProperty"},
        }};
    };

    struct JunoPhysicsToysFunctionLibrary
    {
        static constexpr std::string_view Name = "JunoPhysicsToysFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPickup
    {
        static constexpr std::string_view Name = "JunoPickup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPickupAthena";
        struct Offsets
        {
            static constexpr std::uintptr_t AlwaysInteractableQuery = 0x798;
            static constexpr std::uintptr_t MaxDropTossSpeed = 0x7E0;
            static constexpr std::uintptr_t CombineLerpTimeModValue = 0x7E4;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AlwaysInteractableQuery", 0x798, "StructProperty"},
            {"MaxDropTossSpeed", 0x7E0, "FloatProperty"},
            {"CombineLerpTimeModValue", 0x7E4, "FloatProperty"},
        }};
    };

    struct JunoPickupComponent
    {
        static constexpr std::string_view Name = "JunoPickupComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CraftingSourceTable = 0xC0;
            static constexpr std::uintptr_t ResourceDataTable = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CraftingSourceTable", 0xC0, "StructProperty"},
            {"ResourceDataTable", 0xD0, "ObjectProperty"},
        }};
    };

    struct JunoPickupCosmeticAlterationComponent
    {
        static constexpr std::string_view Name = "JunoPickupCosmeticAlterationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCosmeticAlterationComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseAlteration = 0xC0;
            static constexpr std::uintptr_t ActiveAlterations = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BaseAlteration", 0xC0, "ObjectProperty"},
            {"ActiveAlterations", 0xC8, "ArrayProperty"},
        }};
    };

    struct JunoPickupEffectComponent
    {
        static constexpr std::string_view Name = "JunoPickupEffectComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bOnlyVisibleToOwner = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bOnlyVisibleToOwner", 0xD0, "BoolProperty"},
        }};
    };

    struct JunoPlaceBuildingBehavior
    {
        static constexpr std::string_view Name = "JunoPlaceBuildingBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingBehavior";
        struct Offsets
        {
            static constexpr std::uintptr_t SavedBuildManifest = 0x338;
            static constexpr std::uintptr_t RotateInputAction = 0x390;
            static constexpr std::uintptr_t NudgeInputAction = 0x398;
            static constexpr std::uintptr_t ToggleNudgeInputAction = 0x3A0;
            static constexpr std::uintptr_t AdjacencyInputAction = 0x3A8;
            static constexpr std::uintptr_t SnapToggleInputAction = 0x3B0;
            static constexpr std::uintptr_t ToggleNudgeAxisInputAction = 0x3B8;
            static constexpr std::uintptr_t ResetNudgeInputAction = 0x3C0;
            static constexpr std::uintptr_t EditModeInputAction = 0x3C8;
            static constexpr std::uintptr_t OffGridRotationStep = 0x3D0;
            static constexpr std::uintptr_t MaxSelectionDistance = 0x3D8;
            static constexpr std::uintptr_t MaxSelectionDistanceZ = 0x3DC;
            static constexpr std::uintptr_t MaxConnectivityDistance = 0x3E0;
            static constexpr std::uintptr_t DefaultGridOffsetLimit = 0x3F8;
            static constexpr std::uintptr_t PenetrationTolerance = 0x408;
            static constexpr std::uintptr_t SFX = 0x420;
            static constexpr std::uintptr_t OverlappableClasses = 0x468;
            static constexpr std::uintptr_t PlacementSupportingClasses = 0x488;
            static constexpr std::uintptr_t SupportedOverlappableClasses = 0x4A8;
            static constexpr std::uintptr_t Overrides = 0x4C8;
            static constexpr std::uintptr_t bEnableAdjacency = 0x820;
            static constexpr std::uintptr_t bEnableSnapPlacement = 0x821;
            static constexpr std::uintptr_t bEnableVerticalAxisNudge = 0x822;
            static constexpr std::uintptr_t OnToggleSnapping = 0x828;
            static constexpr std::uintptr_t OnSmoothingChanged = 0x838;
            static constexpr std::uintptr_t OnPlacementTypeChanged = 0x848;
            static constexpr std::uintptr_t CachedBuildingStateContext = 0x878;
            static constexpr std::uintptr_t OnBuildingStateContextChanged = 0x8B8;
            static constexpr std::uintptr_t LastTriggerRequestedTimestamp = 0x8C8;
            static constexpr std::uintptr_t LastTriggerTimestamp = 0x8D0;
        };

        inline static constexpr std::array<PropertyInfo, 30> Properties{{
            {"SavedBuildManifest", 0x338, "StructProperty"},
            {"RotateInputAction", 0x390, "ObjectProperty"},
            {"NudgeInputAction", 0x398, "ObjectProperty"},
            {"ToggleNudgeInputAction", 0x3A0, "ObjectProperty"},
            {"AdjacencyInputAction", 0x3A8, "ObjectProperty"},
            {"SnapToggleInputAction", 0x3B0, "ObjectProperty"},
            {"ToggleNudgeAxisInputAction", 0x3B8, "ObjectProperty"},
            {"ResetNudgeInputAction", 0x3C0, "ObjectProperty"},
            {"EditModeInputAction", 0x3C8, "ObjectProperty"},
            {"OffGridRotationStep", 0x3D0, "DoubleProperty"},
            {"MaxSelectionDistance", 0x3D8, "FloatProperty"},
            {"MaxSelectionDistanceZ", 0x3DC, "FloatProperty"},
            {"MaxConnectivityDistance", 0x3E0, "StructProperty"},
            {"DefaultGridOffsetLimit", 0x3F8, "StructProperty"},
            {"PenetrationTolerance", 0x408, "StructProperty"},
            {"SFX", 0x420, "StructProperty"},
            {"OverlappableClasses", 0x468, "StructProperty"},
            {"PlacementSupportingClasses", 0x488, "StructProperty"},
            {"SupportedOverlappableClasses", 0x4A8, "StructProperty"},
            {"Overrides", 0x4C8, "StructProperty"},
            {"bEnableAdjacency", 0x820, "BoolProperty"},
            {"bEnableSnapPlacement", 0x821, "BoolProperty"},
            {"bEnableVerticalAxisNudge", 0x822, "BoolProperty"},
            {"OnToggleSnapping", 0x828, "MulticastInlineDelegateProperty"},
            {"OnSmoothingChanged", 0x838, "MulticastInlineDelegateProperty"},
            {"OnPlacementTypeChanged", 0x848, "MulticastInlineDelegateProperty"},
            {"CachedBuildingStateContext", 0x878, "StructProperty"},
            {"OnBuildingStateContextChanged", 0x8B8, "MulticastInlineDelegateProperty"},
            {"LastTriggerRequestedTimestamp", 0x8C8, "DoubleProperty"},
            {"LastTriggerTimestamp", 0x8D0, "DoubleProperty"},
        }};
    };

    struct JunoPlayerAnimInstance
    {
        static constexpr std::string_view Name = "JunoPlayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPawnAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerLookAngleFromPawnMax = 0x4A8;
            static constexpr std::uintptr_t PlayerLookAngleFromRootMax = 0x4AC;
            static constexpr std::uintptr_t PlayerFaceVisibleAngle = 0x4B0;
            static constexpr std::uintptr_t PlayerRunningAccelerationThreshold = 0x4B4;
            static constexpr std::uintptr_t PlayerWalkingAccelerationThreshold = 0x4B8;
            static constexpr std::uintptr_t PlayerStrafeCurve = 0x4C0;
            static constexpr std::uintptr_t DBNOCarrierAttachSocket = 0x4C8;
            static constexpr std::uintptr_t Locomotion_Parameters = 0x4CC;
            static constexpr std::uintptr_t FortPlayerPawn = 0x4D8;
            static constexpr std::uintptr_t bIsAccelerating2D = 0x4E0;
            static constexpr std::uintptr_t bIsMovingAndInMotionEmote = 0x4E0;
            static constexpr std::uintptr_t bIsPlayingEmote = 0x4E0;
            static constexpr std::uintptr_t bIsSurfaceSwimming = 0x4E0;
            static constexpr std::uintptr_t StaticToTraversalBlendTime = 0x4E4;
            static constexpr std::uintptr_t TraversalToStaticBlendTime = 0x4E8;
            static constexpr std::uintptr_t bIsSlopeSliding = 0x4EC;
            static constexpr std::uintptr_t bIsInVehicle = 0x4ED;
            static constexpr std::uintptr_t LocalAcceleration = 0x4F0;
            static constexpr std::uintptr_t LocalAccelYawAngle = 0x508;
            static constexpr std::uintptr_t LocalVelocity = 0x510;
            static constexpr std::uintptr_t LocalVelocityRight = 0x528;
            static constexpr std::uintptr_t LocalVelocityYawAngle = 0x52C;
            static constexpr std::uintptr_t MaxSpeed = 0x530;
            static constexpr std::uintptr_t MaxSwimSpeed = 0x534;
            static constexpr std::uintptr_t VelocityZ = 0x538;
            static constexpr std::uintptr_t WorldAcceleration = 0x540;
            static constexpr std::uintptr_t WorldVelocity = 0x558;
            static constexpr std::uintptr_t ActorRotationLastTick = 0x570;
            static constexpr std::uintptr_t YawDeltaCurrentTick = 0x588;
            static constexpr std::uintptr_t YawDeltaLastTick = 0x58C;
            static constexpr std::uintptr_t YawDeltaSmoothed = 0x590;
            static constexpr std::uintptr_t bIsParachuteOpen = 0x594;
            static constexpr std::uintptr_t bIsSkydiving = 0x594;
            static constexpr std::uintptr_t bIsTacticalSprint = 0x594;
            static constexpr std::uintptr_t AimPitch = 0x598;
            static constexpr std::uintptr_t FreeFallAimPitch = 0x59C;
            static constexpr std::uintptr_t SkydiveAimPitch = 0x5A0;
            static constexpr std::uintptr_t SkydiveAimYaw = 0x5A4;
            static constexpr std::uintptr_t bGliderIsOpen = 0x5A8;
            static constexpr std::uintptr_t bGliderUseFastDeploy = 0x5A8;
            static constexpr std::uintptr_t bGliderWasOpen = 0x5A8;
            static constexpr std::uintptr_t bMinifigDisableHeadConstraints = 0x5A8;
            static constexpr std::uintptr_t bPlayerProp1Aim = 0x5A8;
            static constexpr std::uintptr_t bPlayerProp2Aim = 0x5A8;
            static constexpr std::uintptr_t bPlayerProp2ShieldActive = 0x5A8;
            static constexpr std::uintptr_t bPlayerRotationUnlocked = 0x5A8;
            static constexpr std::uintptr_t bPlayerIsCold = 0x5A9;
            static constexpr std::uintptr_t bPlayerIsDBNOCarried = 0x5A9;
            static constexpr std::uintptr_t bPlayerIsDBNOCarrying = 0x5A9;
            static constexpr std::uintptr_t bPlayerIsHot = 0x5A9;
            static constexpr std::uintptr_t bPlayerIsMildCold = 0x5A9;
            static constexpr std::uintptr_t bPlayerIsMildHot = 0x5A9;
            static constexpr std::uintptr_t bPlayerIsVeryCold = 0x5A9;
            static constexpr std::uintptr_t bPlayerIsVeryHot = 0x5A9;
            static constexpr std::uintptr_t bPlayerIsFastDiving = 0x5AA;
            static constexpr std::uintptr_t bPlayerIsFishing = 0x5AA;
            static constexpr std::uintptr_t bPlayerIsFlying = 0x5AA;
            static constexpr std::uintptr_t bPlayerIsFocusing = 0x5AA;
            static constexpr std::uintptr_t bPlayerIsHumanControlled = 0x5AA;
            static constexpr std::uintptr_t bPlayerIsRiding = 0x5AA;
            static constexpr std::uintptr_t bPlayerIsSneaking = 0x5AA;
            static constexpr std::uintptr_t bPlayerWasFishing = 0x5AA;
            static constexpr std::uintptr_t bPlayerIsFacingController = 0x5AB;
            static constexpr std::uintptr_t bPlayerIsMovingBackwards = 0x5AB;
            static constexpr std::uintptr_t bPlayerIsProp1AimTargetValid = 0x5AB;
            static constexpr std::uintptr_t bPlayerIsPushing = 0x5AB;
            static constexpr std::uintptr_t bPlayerIsRunning = 0x5AB;
            static constexpr std::uintptr_t bPlayerIsZiplining = 0x5AB;
            static constexpr std::uintptr_t bPlayerRotationLocked = 0x5AB;
            static constexpr std::uintptr_t bPlayerWasPushing = 0x5AB;
            static constexpr std::uintptr_t bPlayerFaceIsVisible = 0x5AC;
            static constexpr std::uintptr_t bPlayerIsSprinting = 0x5AC;
            static constexpr std::uintptr_t bPlayerIsWalking = 0x5AC;
            static constexpr std::uintptr_t bPlayerIsWaterJumping = 0x5AC;
            static constexpr std::uintptr_t bPlayerProp1MontageActive = 0x5AC;
            static constexpr std::uintptr_t bPlayerShouldMove = 0x5AC;
            static constexpr std::uintptr_t bPlayerShouldTurnInPlace = 0x5AC;
            static constexpr std::uintptr_t bPlayerUpperBodyIsSwinging = 0x5AC;
            static constexpr std::uintptr_t bPlayerHeadShouldFollowCamera = 0x5AD;
            static constexpr std::uintptr_t bPlayerProp2MontageActive = 0x5AD;
            static constexpr std::uintptr_t DBNOCarrierAttachLocation = 0x5B0;
            static constexpr std::uintptr_t DBNOCarrierAttachRotation = 0x5C8;
            static constexpr std::uintptr_t PlayerMovementStyle = 0x5E0;
            static constexpr std::uintptr_t PlayerAccelerationAmount = 0x5E4;
            static constexpr std::uintptr_t PlayerLookAtRotation = 0x5E8;
            static constexpr std::uintptr_t PlayerRotationTarget = 0x600;
            static constexpr std::uintptr_t PlayerPreviousRotationTarget = 0x618;
            static constexpr std::uintptr_t PlayerRotationTargetRate = 0x630;
            static constexpr std::uintptr_t PlayerVelocityYawRate = 0x634;
            static constexpr std::uintptr_t PlayerUseProceduralFaceAnim = 0x638;
            static constexpr std::uintptr_t LayeringMask = 0x63C;
            static constexpr std::uintptr_t bLayering_V3_Enable = 0x6DC;
            static constexpr std::uintptr_t ABPDeltaTime = 0x6E0;
            static constexpr std::uintptr_t bPlayerIsDoubleJumping = 0x6E4;
            static constexpr std::uintptr_t SecondaryMotionLODBlend = 0x6E8;
            static constexpr std::uintptr_t SecondaryMotionLODThreshold = 0x730;
            static constexpr std::uintptr_t SecondaryMotionLODBlendTime = 0x734;
            static constexpr std::uintptr_t MontageSlotGroupsToStop = 0x738;
            static constexpr std::uintptr_t GliderPitch = 0x748;
            static constexpr std::uintptr_t GliderRoll = 0x74C;
            static constexpr std::uintptr_t PlayerMainHandItem = 0x750;
            static constexpr std::uintptr_t PlayerOffHandItem = 0x758;
            static constexpr std::uintptr_t PlayerAimOffset = 0x760;
            static constexpr std::uintptr_t PlayerAimOffsetTemp = 0x770;
            static constexpr std::uintptr_t PlayerProp1AimOffset = 0x788;
            static constexpr std::uintptr_t PlayerProp1AimTargetLocation = 0x798;
            static constexpr std::uintptr_t PlayerSlopeMatchingRotationOffset = 0x7B0;
            static constexpr std::uintptr_t PlayerSlopeMatchingWeight = 0x7C8;
            static constexpr std::uintptr_t PlayerPreviousRootRotation = 0x7D0;
            static constexpr std::uintptr_t PlayerRotationMode = 0x7E8;
            static constexpr std::uintptr_t SmoothedRotationTarget = 0x7F0;
            static constexpr std::uintptr_t SuperSmoothedRotationTarget = 0x808;
            static constexpr std::uintptr_t PlayerStartingRotation = 0x820;
            static constexpr std::uintptr_t PlayerStartingAngle = 0x838;
            static constexpr std::uintptr_t bPlayerEmotionHasChanged = 0x83C;
            static constexpr std::uintptr_t JunoRandomizeMontageSectionInput = 0x840;
            static constexpr std::uintptr_t bForcePlayerToFacePawnRotation = 0x858;
            static constexpr std::uintptr_t MinifigAnimationComponent = 0x85C;
            static constexpr std::uintptr_t OffhandComponent = 0x864;
            static constexpr std::uintptr_t LookAtComponent = 0x86C;
            static constexpr std::uintptr_t MovementComponent = 0x874;
            static constexpr std::uintptr_t bFacingV2_EnableNewStrafing = 0x87C;
            static constexpr std::uintptr_t bFacingV2_ForceFacingToCamera = 0x87D;
            static constexpr std::uintptr_t FacingV2_StrafeHipsRotationOffset = 0x880;
            static constexpr std::uintptr_t FacingV2_StrafeHipsRotationOffsetDefault = 0x890;
            static constexpr std::uintptr_t FacingV2_StrafingHipsAngle_Native = 0x8A0;
            static constexpr std::uintptr_t bFacingV2_IsOn = 0x8A9;
            static constexpr std::uintptr_t bFacingV2_IsSteering = 0x8AA;
            static constexpr std::uintptr_t bFacingV2_WasSteering = 0x8AB;
            static constexpr std::uintptr_t bFacingV2_IsHolding = 0x8AC;
            static constexpr std::uintptr_t FacingV2_SteeringTarget = 0x8B0;
            static constexpr std::uintptr_t CameraLocation = 0x8D0;
            static constexpr std::uintptr_t CameraDirection = 0x8E8;
            static constexpr std::uintptr_t ABP_LOD_Level = 0x938;
            static constexpr std::uintptr_t ABP_LOD_Level_IsOneOrLess = 0x93C;
            static constexpr std::uintptr_t JackalVehicleInput = 0x940;
        };

        inline static constexpr std::array<PropertyInfo, 136> Properties{{
            {"PlayerLookAngleFromPawnMax", 0x4A8, "FloatProperty"},
            {"PlayerLookAngleFromRootMax", 0x4AC, "FloatProperty"},
            {"PlayerFaceVisibleAngle", 0x4B0, "FloatProperty"},
            {"PlayerRunningAccelerationThreshold", 0x4B4, "FloatProperty"},
            {"PlayerWalkingAccelerationThreshold", 0x4B8, "FloatProperty"},
            {"PlayerStrafeCurve", 0x4C0, "ObjectProperty"},
            {"DBNOCarrierAttachSocket", 0x4C8, "NameProperty"},
            {"Locomotion_Parameters", 0x4CC, "StructProperty"},
            {"FortPlayerPawn", 0x4D8, "ObjectProperty"},
            {"bIsAccelerating2D", 0x4E0, "BoolProperty"},
            {"bIsMovingAndInMotionEmote", 0x4E0, "BoolProperty"},
            {"bIsPlayingEmote", 0x4E0, "BoolProperty"},
            {"bIsSurfaceSwimming", 0x4E0, "BoolProperty"},
            {"StaticToTraversalBlendTime", 0x4E4, "FloatProperty"},
            {"TraversalToStaticBlendTime", 0x4E8, "FloatProperty"},
            {"bIsSlopeSliding", 0x4EC, "BoolProperty"},
            {"bIsInVehicle", 0x4ED, "BoolProperty"},
            {"LocalAcceleration", 0x4F0, "StructProperty"},
            {"LocalAccelYawAngle", 0x508, "FloatProperty"},
            {"LocalVelocity", 0x510, "StructProperty"},
            {"LocalVelocityRight", 0x528, "FloatProperty"},
            {"LocalVelocityYawAngle", 0x52C, "FloatProperty"},
            {"MaxSpeed", 0x530, "FloatProperty"},
            {"MaxSwimSpeed", 0x534, "FloatProperty"},
            {"VelocityZ", 0x538, "FloatProperty"},
            {"WorldAcceleration", 0x540, "StructProperty"},
            {"WorldVelocity", 0x558, "StructProperty"},
            {"ActorRotationLastTick", 0x570, "StructProperty"},
            {"YawDeltaCurrentTick", 0x588, "FloatProperty"},
            {"YawDeltaLastTick", 0x58C, "FloatProperty"},
            {"YawDeltaSmoothed", 0x590, "FloatProperty"},
            {"bIsParachuteOpen", 0x594, "BoolProperty"},
            {"bIsSkydiving", 0x594, "BoolProperty"},
            {"bIsTacticalSprint", 0x594, "BoolProperty"},
            {"AimPitch", 0x598, "FloatProperty"},
            {"FreeFallAimPitch", 0x59C, "FloatProperty"},
            {"SkydiveAimPitch", 0x5A0, "FloatProperty"},
            {"SkydiveAimYaw", 0x5A4, "FloatProperty"},
            {"bGliderIsOpen", 0x5A8, "BoolProperty"},
            {"bGliderUseFastDeploy", 0x5A8, "BoolProperty"},
            {"bGliderWasOpen", 0x5A8, "BoolProperty"},
            {"bMinifigDisableHeadConstraints", 0x5A8, "BoolProperty"},
            {"bPlayerProp1Aim", 0x5A8, "BoolProperty"},
            {"bPlayerProp2Aim", 0x5A8, "BoolProperty"},
            {"bPlayerProp2ShieldActive", 0x5A8, "BoolProperty"},
            {"bPlayerRotationUnlocked", 0x5A8, "BoolProperty"},
            {"bPlayerIsCold", 0x5A9, "BoolProperty"},
            {"bPlayerIsDBNOCarried", 0x5A9, "BoolProperty"},
            {"bPlayerIsDBNOCarrying", 0x5A9, "BoolProperty"},
            {"bPlayerIsHot", 0x5A9, "BoolProperty"},
            {"bPlayerIsMildCold", 0x5A9, "BoolProperty"},
            {"bPlayerIsMildHot", 0x5A9, "BoolProperty"},
            {"bPlayerIsVeryCold", 0x5A9, "BoolProperty"},
            {"bPlayerIsVeryHot", 0x5A9, "BoolProperty"},
            {"bPlayerIsFastDiving", 0x5AA, "BoolProperty"},
            {"bPlayerIsFishing", 0x5AA, "BoolProperty"},
            {"bPlayerIsFlying", 0x5AA, "BoolProperty"},
            {"bPlayerIsFocusing", 0x5AA, "BoolProperty"},
            {"bPlayerIsHumanControlled", 0x5AA, "BoolProperty"},
            {"bPlayerIsRiding", 0x5AA, "BoolProperty"},
            {"bPlayerIsSneaking", 0x5AA, "BoolProperty"},
            {"bPlayerWasFishing", 0x5AA, "BoolProperty"},
            {"bPlayerIsFacingController", 0x5AB, "BoolProperty"},
            {"bPlayerIsMovingBackwards", 0x5AB, "BoolProperty"},
            {"bPlayerIsProp1AimTargetValid", 0x5AB, "BoolProperty"},
            {"bPlayerIsPushing", 0x5AB, "BoolProperty"},
            {"bPlayerIsRunning", 0x5AB, "BoolProperty"},
            {"bPlayerIsZiplining", 0x5AB, "BoolProperty"},
            {"bPlayerRotationLocked", 0x5AB, "BoolProperty"},
            {"bPlayerWasPushing", 0x5AB, "BoolProperty"},
            {"bPlayerFaceIsVisible", 0x5AC, "BoolProperty"},
            {"bPlayerIsSprinting", 0x5AC, "BoolProperty"},
            {"bPlayerIsWalking", 0x5AC, "BoolProperty"},
            {"bPlayerIsWaterJumping", 0x5AC, "BoolProperty"},
            {"bPlayerProp1MontageActive", 0x5AC, "BoolProperty"},
            {"bPlayerShouldMove", 0x5AC, "BoolProperty"},
            {"bPlayerShouldTurnInPlace", 0x5AC, "BoolProperty"},
            {"bPlayerUpperBodyIsSwinging", 0x5AC, "BoolProperty"},
            {"bPlayerHeadShouldFollowCamera", 0x5AD, "BoolProperty"},
            {"bPlayerProp2MontageActive", 0x5AD, "BoolProperty"},
            {"DBNOCarrierAttachLocation", 0x5B0, "StructProperty"},
            {"DBNOCarrierAttachRotation", 0x5C8, "StructProperty"},
            {"PlayerMovementStyle", 0x5E0, "ByteProperty"},
            {"PlayerAccelerationAmount", 0x5E4, "FloatProperty"},
            {"PlayerLookAtRotation", 0x5E8, "StructProperty"},
            {"PlayerRotationTarget", 0x600, "StructProperty"},
            {"PlayerPreviousRotationTarget", 0x618, "StructProperty"},
            {"PlayerRotationTargetRate", 0x630, "FloatProperty"},
            {"PlayerVelocityYawRate", 0x634, "FloatProperty"},
            {"PlayerUseProceduralFaceAnim", 0x638, "FloatProperty"},
            {"LayeringMask", 0x63C, "StructProperty"},
            {"bLayering_V3_Enable", 0x6DC, "BoolProperty"},
            {"ABPDeltaTime", 0x6E0, "FloatProperty"},
            {"bPlayerIsDoubleJumping", 0x6E4, "BoolProperty"},
            {"SecondaryMotionLODBlend", 0x6E8, "StructProperty"},
            {"SecondaryMotionLODThreshold", 0x730, "IntProperty"},
            {"SecondaryMotionLODBlendTime", 0x734, "FloatProperty"},
            {"MontageSlotGroupsToStop", 0x738, "ArrayProperty"},
            {"GliderPitch", 0x748, "FloatProperty"},
            {"GliderRoll", 0x74C, "FloatProperty"},
            {"PlayerMainHandItem", 0x750, "ObjectProperty"},
            {"PlayerOffHandItem", 0x758, "ObjectProperty"},
            {"PlayerAimOffset", 0x760, "StructProperty"},
            {"PlayerAimOffsetTemp", 0x770, "StructProperty"},
            {"PlayerProp1AimOffset", 0x788, "StructProperty"},
            {"PlayerProp1AimTargetLocation", 0x798, "StructProperty"},
            {"PlayerSlopeMatchingRotationOffset", 0x7B0, "StructProperty"},
            {"PlayerSlopeMatchingWeight", 0x7C8, "FloatProperty"},
            {"PlayerPreviousRootRotation", 0x7D0, "StructProperty"},
            {"PlayerRotationMode", 0x7E8, "EnumProperty"},
            {"SmoothedRotationTarget", 0x7F0, "StructProperty"},
            {"SuperSmoothedRotationTarget", 0x808, "StructProperty"},
            {"PlayerStartingRotation", 0x820, "StructProperty"},
            {"PlayerStartingAngle", 0x838, "FloatProperty"},
            {"bPlayerEmotionHasChanged", 0x83C, "BoolProperty"},
            {"JunoRandomizeMontageSectionInput", 0x840, "StructProperty"},
            {"bForcePlayerToFacePawnRotation", 0x858, "BoolProperty"},
            {"MinifigAnimationComponent", 0x85C, "WeakObjectProperty"},
            {"OffhandComponent", 0x864, "WeakObjectProperty"},
            {"LookAtComponent", 0x86C, "WeakObjectProperty"},
            {"MovementComponent", 0x874, "WeakObjectProperty"},
            {"bFacingV2_EnableNewStrafing", 0x87C, "BoolProperty"},
            {"bFacingV2_ForceFacingToCamera", 0x87D, "BoolProperty"},
            {"FacingV2_StrafeHipsRotationOffset", 0x880, "ArrayProperty"},
            {"FacingV2_StrafeHipsRotationOffsetDefault", 0x890, "ArrayProperty"},
            {"FacingV2_StrafingHipsAngle_Native", 0x8A0, "FloatProperty"},
            {"bFacingV2_IsOn", 0x8A9, "BoolProperty"},
            {"bFacingV2_IsSteering", 0x8AA, "BoolProperty"},
            {"bFacingV2_WasSteering", 0x8AB, "BoolProperty"},
            {"bFacingV2_IsHolding", 0x8AC, "BoolProperty"},
            {"FacingV2_SteeringTarget", 0x8B0, "StructProperty"},
            {"CameraLocation", 0x8D0, "StructProperty"},
            {"CameraDirection", 0x8E8, "StructProperty"},
            {"ABP_LOD_Level", 0x938, "IntProperty"},
            {"ABP_LOD_Level_IsOneOrLess", 0x93C, "BoolProperty"},
            {"JackalVehicleInput", 0x940, "StructProperty"},
        }};
    };

    struct JunoPlayerAnimLogic
    {
        static constexpr std::string_view Name = "JunoPlayerAnimLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPlayerAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseState_Native = 0x9B0;
            static constexpr std::uintptr_t RequestedRotationMode_Native = 0x9B1;
            static constexpr std::uintptr_t RootRotation_Native = 0x9B8;
            static constexpr std::uintptr_t StartingRotation_Native = 0x9D0;
            static constexpr std::uintptr_t TargetRotation_Native = 0x9E8;
            static constexpr std::uintptr_t SmoothedTargetRotation_Native = 0xA00;
            static constexpr std::uintptr_t SuperSmoothedTargetRotation_Native = 0xA18;
            static constexpr std::uintptr_t StartingAngle_Native = 0xA30;
            static constexpr std::uintptr_t bMirror_Jump_Native = 0xA34;
            static constexpr std::uintptr_t CurveValue_MoveData_Speed_Native = 0xA38;
            static constexpr std::uintptr_t LocoStealthPlayRate_Native = 0xA3C;
            static constexpr std::uintptr_t bIsSwinging_Native = 0xA40;
            static constexpr std::uintptr_t bIsSlotActiveProp1Swing_Native = 0xA41;
            static constexpr std::uintptr_t bIsSlotActiveProp2Swing_Native = 0xA42;
            static constexpr std::uintptr_t bIsSlotActivePreLayering_Native = 0xA43;
            static constexpr std::uintptr_t bIsSlotActiveReaction_Native = 0xA44;
            static constexpr std::uintptr_t Prop1MontageWeight_Native = 0xA48;
            static constexpr std::uintptr_t Prop2MontageWeight_Native = 0xA4C;
            static constexpr std::uintptr_t PostLayeringMontagesWeight_Native = 0xA50;
            static constexpr std::uintptr_t PreLayeringMontagesWeight_Native = 0xA54;
            static constexpr std::uintptr_t SittingMontageWeight_Native = 0xA58;
            static constexpr std::uintptr_t EditMontageCurvesProp1GenericWeight_Native = 0xA5C;
            static constexpr std::uintptr_t EditMontageCurvesProp1SwingWeight_Native = 0xA60;
            static constexpr std::uintptr_t EditMontageCurvesProp2GenericWeight_Native = 0xA64;
            static constexpr std::uintptr_t EditMontageCurvesProp2SwingWeight_Native = 0xA68;
            static constexpr std::uintptr_t bShouldIdle_Native = 0xA6C;
            static constexpr std::uintptr_t bNoTurnsInPlace_Native = 0xA6D;
            static constexpr std::uintptr_t bShouldRun_Native = 0xA6E;
            static constexpr std::uintptr_t bShouldWalk_Native = 0xA6F;
            static constexpr std::uintptr_t bShouldMoveMantis_Native = 0xA70;
            static constexpr std::uintptr_t bShouldTurnInPlace_Native = 0xA71;
            static constexpr std::uintptr_t bShouldTurnInPlaceAndFacingController_Native = 0xA72;
            static constexpr std::uintptr_t bShouldTurnInPlaceOrMoving_Native = 0xA73;
            static constexpr std::uintptr_t bShouldPivot_Native = 0xA74;
            static constexpr std::uintptr_t bShouldMoveBackwards_Native = 0xA75;
            static constexpr std::uintptr_t bIsRunningOrSprinting_Native = 0xA76;
            static constexpr std::uintptr_t bIsWalkingOrSprinting_Native = 0xA77;
            static constexpr std::uintptr_t bNotSwingingAndMoving_Native = 0xA78;
            static constexpr std::uintptr_t bSneakingAndMoving_Native = 0xA79;
            static constexpr std::uintptr_t bNotSneakingAndMoving_Native = 0xA7A;
            static constexpr std::uintptr_t PlayerLeanAmount_Native = 0xA7C;
            static constexpr std::uintptr_t PlayerStrideScale_Native = 0xA80;
            static constexpr std::uintptr_t bIsWalkingSlow_Native = 0xA84;
            static constexpr std::uintptr_t bJumpIsInApex_Native = 0xA85;
            static constexpr std::uintptr_t bOnGroundAndMoving_Native = 0xA86;
            static constexpr std::uintptr_t bDoAdditiveLanding_Native = 0xA87;
            static constexpr std::uintptr_t bWasDoubleJumping_Native = 0xA88;
            static constexpr std::uintptr_t bShouldLaunchPad_Native = 0xA89;
            static constexpr std::uintptr_t bIsFlyingSprint_Native = 0xA8A;
            static constexpr std::uintptr_t bShouldGlide_Native = 0xA8B;
            static constexpr std::uintptr_t bShouldSkydive_Native = 0xA8C;
            static constexpr std::uintptr_t bIsFlyingOrSwimmingOrGliding_Native = 0xA8D;
            static constexpr std::uintptr_t bIsAimOffsetActive_Native = 0xA8E;
            static constexpr std::uintptr_t bWasAimOffsetActive_Native = 0xA8F;
            static constexpr std::uintptr_t bEnableAimOffsetActive_Native = 0xA90;
            static constexpr std::uintptr_t PlayerAimOffsetAdjusted_Native = 0xA98;
            static constexpr std::uintptr_t Prop1_AO_Weight_Native = 0xAA8;
            static constexpr std::uintptr_t Prop2_AO_Weight_Native = 0xAAC;
            static constexpr std::uintptr_t Head_Look_Weight_Native = 0xAB0;
            static constexpr std::uintptr_t bProp1_Pose_Active_Native = 0xAB4;
            static constexpr std::uintptr_t WeaponIK_L_Arm_Weight_Native = 0xAB8;
            static constexpr std::uintptr_t WeaponIK_IsActive_Native = 0xABC;
            static constexpr std::uintptr_t bPlayerIsHotOrCold_Native = 0xAC0;
            static constexpr std::uintptr_t fPlayerIsFlying_Native = 0xAC4;
            static constexpr std::uintptr_t Disable_Systemic_Facial_Native = 0xAC8;
            static constexpr std::uintptr_t Override_Prop1_Curves_When_Flying_Native = 0xAD0;
            static constexpr std::uintptr_t OverrideProp1CurvesWhenFlyingAlpha_Native = 0xAE0;
            static constexpr std::uintptr_t Disable_R_Arm_IK_Native = 0xAE4;
            static constexpr std::uintptr_t Disable_L_Arm_IK_Native = 0xAE8;
            static constexpr std::uintptr_t bFacingV2_DisableHipsStrafeOffset = 0xAEC;
            static constexpr std::uintptr_t FacingV2_DisableHipsStrafeOffset_Native = 0xAF0;
            static constexpr std::uintptr_t Layering_Simple_Prop1_BoneMask_Native = 0xAF8;
            static constexpr std::uintptr_t Layering_Simple_Prop2_Arm_L_Native = 0xB08;
            static constexpr std::uintptr_t Layering_Simple_Prop2_Arm_L_MS_Native = 0xB0C;
            static constexpr std::uintptr_t Layering_Simple_Prop2_Hand_L_Native = 0xB10;
            static constexpr std::uintptr_t Layering_Reactions_Mask_Native = 0xB18;
            static constexpr std::uintptr_t Layering_V3_Mask_Native = 0xB28;
            static constexpr std::uintptr_t bLayering_V3_Disable_Prop1 = 0xB38;
            static constexpr std::uintptr_t bLayering_V3_Disable_Prop2 = 0xB39;
            static constexpr std::uintptr_t bLayering_V3_Disable_LocoAdd = 0xB3A;
            static constexpr std::uintptr_t bLayering_V3_Disable_Secondary = 0xB3B;
            static constexpr std::uintptr_t bLayering_V3_Disable_MeshSpace = 0xB3C;
            static constexpr std::uintptr_t bLayering_V3_Disable_AO = 0xB3D;
            static constexpr std::uintptr_t bIsLaunched = 0xB3E;
            static constexpr std::uintptr_t bPlayerIsCarrying = 0xB3F;
            static constexpr std::uintptr_t bPlayerIsADSAim = 0xB40;
            static constexpr std::uintptr_t bPlayerIsInSelfieMode = 0xB41;
            static constexpr std::uintptr_t bPlayerIsNinja = 0xB42;
            static constexpr std::uintptr_t bPlayerIsSuperSprinting = 0xB43;
            static constexpr std::uintptr_t bIsJamming = 0xB44;
            static constexpr std::uintptr_t bPlayerWasADSAim_Native = 0xB45;
            static constexpr std::uintptr_t bProp1IsEquipped = 0xB46;
            static constexpr std::uintptr_t bProp1IsTwoHanded = 0xB47;
            static constexpr std::uintptr_t bProp2IsEquipped = 0xB48;
            static constexpr std::uintptr_t bProp1IsHolstered = 0xB49;
            static constexpr std::uintptr_t bProp2IsHolstered = 0xB4A;
            static constexpr std::uintptr_t fProp2IsEquipped = 0xB4C;
            static constexpr std::uintptr_t TurnInPlaceTriggerAngle = 0xB50;
            static constexpr std::uintptr_t PlayerStrafeCurveDefault = 0xB58;
            static constexpr std::uintptr_t AO_Output_Data = 0xB60;
            static constexpr std::uintptr_t AO_BlendSpace = 0xB80;
            static constexpr std::uintptr_t AO_Flip = 0xB88;
            static constexpr std::uintptr_t Locomotion_Data = 0xB90;
            static constexpr std::uintptr_t PRT_Locomotion = 0xBF0;
            static constexpr std::uintptr_t bTransition_Swimming_StopToIdle = 0xBF8;
            static constexpr std::uintptr_t bTransition_StealthLocomotion_TurnInPlaceToReTurnInPlace_Native = 0xBF9;
            static constexpr std::uintptr_t bTransition_StealthLocomotion_ReTurnInPlaceToTurnInPlace_Native = 0xBFA;
            static constexpr std::uintptr_t bTransition_LocoJumpFall_LandToGrounded_Native = 0xBFB;
            static constexpr std::uintptr_t CachedStateData_Locomotion_TurnInPlace = 0xBFC;
            static constexpr std::uintptr_t CachedStateData_Locomotion_ReTurnInPlace = 0xC10;
            static constexpr std::uintptr_t CachedStateData_Locomotion_WalkStart = 0xC24;
            static constexpr std::uintptr_t CachedStateData_Locomotion_Pivot = 0xC38;
            static constexpr std::uintptr_t CachedStateData_Locomotion_RePivot = 0xC4C;
            static constexpr std::uintptr_t CachedStateData_Locomotion_Land = 0xC60;
            static constexpr std::uintptr_t CachedStateData_Swimming_Stop = 0xC74;
            static constexpr std::uintptr_t CachedStateData_Locomotion_StealthTurnInPlace = 0xC88;
            static constexpr std::uintptr_t CachedStateData_Locomotion_StealthReTurnInPlace = 0xC9C;
        };

        inline static constexpr std::array<PropertyInfo, 117> Properties{{
            {"BaseState_Native", 0x9B0, "EnumProperty"},
            {"RequestedRotationMode_Native", 0x9B1, "EnumProperty"},
            {"RootRotation_Native", 0x9B8, "StructProperty"},
            {"StartingRotation_Native", 0x9D0, "StructProperty"},
            {"TargetRotation_Native", 0x9E8, "StructProperty"},
            {"SmoothedTargetRotation_Native", 0xA00, "StructProperty"},
            {"SuperSmoothedTargetRotation_Native", 0xA18, "StructProperty"},
            {"StartingAngle_Native", 0xA30, "FloatProperty"},
            {"bMirror_Jump_Native", 0xA34, "BoolProperty"},
            {"CurveValue_MoveData_Speed_Native", 0xA38, "FloatProperty"},
            {"LocoStealthPlayRate_Native", 0xA3C, "FloatProperty"},
            {"bIsSwinging_Native", 0xA40, "BoolProperty"},
            {"bIsSlotActiveProp1Swing_Native", 0xA41, "BoolProperty"},
            {"bIsSlotActiveProp2Swing_Native", 0xA42, "BoolProperty"},
            {"bIsSlotActivePreLayering_Native", 0xA43, "BoolProperty"},
            {"bIsSlotActiveReaction_Native", 0xA44, "BoolProperty"},
            {"Prop1MontageWeight_Native", 0xA48, "FloatProperty"},
            {"Prop2MontageWeight_Native", 0xA4C, "FloatProperty"},
            {"PostLayeringMontagesWeight_Native", 0xA50, "FloatProperty"},
            {"PreLayeringMontagesWeight_Native", 0xA54, "FloatProperty"},
            {"SittingMontageWeight_Native", 0xA58, "FloatProperty"},
            {"EditMontageCurvesProp1GenericWeight_Native", 0xA5C, "FloatProperty"},
            {"EditMontageCurvesProp1SwingWeight_Native", 0xA60, "FloatProperty"},
            {"EditMontageCurvesProp2GenericWeight_Native", 0xA64, "FloatProperty"},
            {"EditMontageCurvesProp2SwingWeight_Native", 0xA68, "FloatProperty"},
            {"bShouldIdle_Native", 0xA6C, "BoolProperty"},
            {"bNoTurnsInPlace_Native", 0xA6D, "BoolProperty"},
            {"bShouldRun_Native", 0xA6E, "BoolProperty"},
            {"bShouldWalk_Native", 0xA6F, "BoolProperty"},
            {"bShouldMoveMantis_Native", 0xA70, "BoolProperty"},
            {"bShouldTurnInPlace_Native", 0xA71, "BoolProperty"},
            {"bShouldTurnInPlaceAndFacingController_Native", 0xA72, "BoolProperty"},
            {"bShouldTurnInPlaceOrMoving_Native", 0xA73, "BoolProperty"},
            {"bShouldPivot_Native", 0xA74, "BoolProperty"},
            {"bShouldMoveBackwards_Native", 0xA75, "BoolProperty"},
            {"bIsRunningOrSprinting_Native", 0xA76, "BoolProperty"},
            {"bIsWalkingOrSprinting_Native", 0xA77, "BoolProperty"},
            {"bNotSwingingAndMoving_Native", 0xA78, "BoolProperty"},
            {"bSneakingAndMoving_Native", 0xA79, "BoolProperty"},
            {"bNotSneakingAndMoving_Native", 0xA7A, "BoolProperty"},
            {"PlayerLeanAmount_Native", 0xA7C, "FloatProperty"},
            {"PlayerStrideScale_Native", 0xA80, "FloatProperty"},
            {"bIsWalkingSlow_Native", 0xA84, "BoolProperty"},
            {"bJumpIsInApex_Native", 0xA85, "BoolProperty"},
            {"bOnGroundAndMoving_Native", 0xA86, "BoolProperty"},
            {"bDoAdditiveLanding_Native", 0xA87, "BoolProperty"},
            {"bWasDoubleJumping_Native", 0xA88, "BoolProperty"},
            {"bShouldLaunchPad_Native", 0xA89, "BoolProperty"},
            {"bIsFlyingSprint_Native", 0xA8A, "BoolProperty"},
            {"bShouldGlide_Native", 0xA8B, "BoolProperty"},
            {"bShouldSkydive_Native", 0xA8C, "BoolProperty"},
            {"bIsFlyingOrSwimmingOrGliding_Native", 0xA8D, "BoolProperty"},
            {"bIsAimOffsetActive_Native", 0xA8E, "BoolProperty"},
            {"bWasAimOffsetActive_Native", 0xA8F, "BoolProperty"},
            {"bEnableAimOffsetActive_Native", 0xA90, "BoolProperty"},
            {"PlayerAimOffsetAdjusted_Native", 0xA98, "StructProperty"},
            {"Prop1_AO_Weight_Native", 0xAA8, "FloatProperty"},
            {"Prop2_AO_Weight_Native", 0xAAC, "FloatProperty"},
            {"Head_Look_Weight_Native", 0xAB0, "FloatProperty"},
            {"bProp1_Pose_Active_Native", 0xAB4, "BoolProperty"},
            {"WeaponIK_L_Arm_Weight_Native", 0xAB8, "FloatProperty"},
            {"WeaponIK_IsActive_Native", 0xABC, "FloatProperty"},
            {"bPlayerIsHotOrCold_Native", 0xAC0, "BoolProperty"},
            {"fPlayerIsFlying_Native", 0xAC4, "FloatProperty"},
            {"Disable_Systemic_Facial_Native", 0xAC8, "FloatProperty"},
            {"Override_Prop1_Curves_When_Flying_Native", 0xAD0, "MapProperty"},
            {"OverrideProp1CurvesWhenFlyingAlpha_Native", 0xAE0, "FloatProperty"},
            {"Disable_R_Arm_IK_Native", 0xAE4, "FloatProperty"},
            {"Disable_L_Arm_IK_Native", 0xAE8, "FloatProperty"},
            {"bFacingV2_DisableHipsStrafeOffset", 0xAEC, "BoolProperty"},
            {"FacingV2_DisableHipsStrafeOffset_Native", 0xAF0, "FloatProperty"},
            {"Layering_Simple_Prop1_BoneMask_Native", 0xAF8, "StructProperty"},
            {"Layering_Simple_Prop2_Arm_L_Native", 0xB08, "FloatProperty"},
            {"Layering_Simple_Prop2_Arm_L_MS_Native", 0xB0C, "FloatProperty"},
            {"Layering_Simple_Prop2_Hand_L_Native", 0xB10, "FloatProperty"},
            {"Layering_Reactions_Mask_Native", 0xB18, "StructProperty"},
            {"Layering_V3_Mask_Native", 0xB28, "StructProperty"},
            {"bLayering_V3_Disable_Prop1", 0xB38, "BoolProperty"},
            {"bLayering_V3_Disable_Prop2", 0xB39, "BoolProperty"},
            {"bLayering_V3_Disable_LocoAdd", 0xB3A, "BoolProperty"},
            {"bLayering_V3_Disable_Secondary", 0xB3B, "BoolProperty"},
            {"bLayering_V3_Disable_MeshSpace", 0xB3C, "BoolProperty"},
            {"bLayering_V3_Disable_AO", 0xB3D, "BoolProperty"},
            {"bIsLaunched", 0xB3E, "BoolProperty"},
            {"bPlayerIsCarrying", 0xB3F, "BoolProperty"},
            {"bPlayerIsADSAim", 0xB40, "BoolProperty"},
            {"bPlayerIsInSelfieMode", 0xB41, "BoolProperty"},
            {"bPlayerIsNinja", 0xB42, "BoolProperty"},
            {"bPlayerIsSuperSprinting", 0xB43, "BoolProperty"},
            {"bIsJamming", 0xB44, "BoolProperty"},
            {"bPlayerWasADSAim_Native", 0xB45, "BoolProperty"},
            {"bProp1IsEquipped", 0xB46, "BoolProperty"},
            {"bProp1IsTwoHanded", 0xB47, "BoolProperty"},
            {"bProp2IsEquipped", 0xB48, "BoolProperty"},
            {"bProp1IsHolstered", 0xB49, "BoolProperty"},
            {"bProp2IsHolstered", 0xB4A, "BoolProperty"},
            {"fProp2IsEquipped", 0xB4C, "FloatProperty"},
            {"TurnInPlaceTriggerAngle", 0xB50, "FloatProperty"},
            {"PlayerStrafeCurveDefault", 0xB58, "ObjectProperty"},
            {"AO_Output_Data", 0xB60, "StructProperty"},
            {"AO_BlendSpace", 0xB80, "ObjectProperty"},
            {"AO_Flip", 0xB88, "BoolProperty"},
            {"Locomotion_Data", 0xB90, "StructProperty"},
            {"PRT_Locomotion", 0xBF0, "ObjectProperty"},
            {"bTransition_Swimming_StopToIdle", 0xBF8, "BoolProperty"},
            {"bTransition_StealthLocomotion_TurnInPlaceToReTurnInPlace_Native", 0xBF9, "BoolProperty"},
            {"bTransition_StealthLocomotion_ReTurnInPlaceToTurnInPlace_Native", 0xBFA, "BoolProperty"},
            {"bTransition_LocoJumpFall_LandToGrounded_Native", 0xBFB, "BoolProperty"},
            {"CachedStateData_Locomotion_TurnInPlace", 0xBFC, "StructProperty"},
            {"CachedStateData_Locomotion_ReTurnInPlace", 0xC10, "StructProperty"},
            {"CachedStateData_Locomotion_WalkStart", 0xC24, "StructProperty"},
            {"CachedStateData_Locomotion_Pivot", 0xC38, "StructProperty"},
            {"CachedStateData_Locomotion_RePivot", 0xC4C, "StructProperty"},
            {"CachedStateData_Locomotion_Land", 0xC60, "StructProperty"},
            {"CachedStateData_Swimming_Stop", 0xC74, "StructProperty"},
            {"CachedStateData_Locomotion_StealthTurnInPlace", 0xC88, "StructProperty"},
            {"CachedStateData_Locomotion_StealthReTurnInPlace", 0xC9C, "StructProperty"},
        }};
    };

    struct JunoPlayerBuildingComponent
    {
        static constexpr std::string_view Name = "JunoPlayerBuildingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasSeenItemShopCallout = 0xC8;
            static constexpr std::uintptr_t bSnapPlacementEnabled = 0xC9;
            static constexpr std::uintptr_t InputMappingData = 0xD0;
            static constexpr std::uintptr_t ExitBuildMode = 0xD8;
            static constexpr std::uintptr_t RoomEditAction = 0xE0;
            static constexpr std::uintptr_t DefaultRoomClass = 0xE8;
            static constexpr std::uintptr_t BuildingCaptureMode = 0x108;
            static constexpr std::uintptr_t DefaultCaptureClass = 0x110;
            static constexpr std::uintptr_t BuildingCapturePlace = 0x130;
            static constexpr std::uintptr_t BuildingCaptureMove = 0x138;
            static constexpr std::uintptr_t BuildingCaptureRemove = 0x140;
            static constexpr std::uintptr_t DefaultRecipes = 0x148;
            static constexpr std::uintptr_t MaxRecentRecipes = 0x158;
            static constexpr std::uintptr_t DefaultBuildingCameraMode = 0x160;
            static constexpr std::uintptr_t UINotificationIcon = 0x168;
            static constexpr std::uintptr_t ReplicatedSelectedSlot = 0x188;
            static constexpr std::uintptr_t ReplicatedSlotRequestId = 0x1C8;
            static constexpr std::uintptr_t LastGuidedBuildingActor = 0x21C;
            static constexpr std::uintptr_t ReplicatedLastGuidedBuildingActor = 0x224;
            static constexpr std::uintptr_t ReplicateLastGuidedActorTime = 0x22C;
            static constexpr std::uintptr_t ReplicatedLastQuickBuildingActor = 0x240;
            static constexpr std::uintptr_t ReplicateLastQuickActorTime = 0x248;
            static constexpr std::uintptr_t ReplicateBuildingMetricSpatialPrecision = 0x24C;
            static constexpr std::uintptr_t DirtyCellLocations = 0x250;
            static constexpr std::uintptr_t MCPItemPlacementStatus = 0x270;
            static constexpr std::uintptr_t WaitForEventRouterAction = 0x368;
            static constexpr std::uintptr_t AlertData = 0x370;
            static constexpr std::uintptr_t BuildingSessionInfo = 0x390;
            static constexpr std::uintptr_t ClientSpatialMetricsBuildingPermissions = 0x3C0;
            static constexpr std::uintptr_t LastKnownPawnSpatialCell = 0x3D0;
        };

        inline static constexpr std::array<PropertyInfo, 30> Properties{{
            {"bHasSeenItemShopCallout", 0xC8, "BoolProperty"},
            {"bSnapPlacementEnabled", 0xC9, "BoolProperty"},
            {"InputMappingData", 0xD0, "ObjectProperty"},
            {"ExitBuildMode", 0xD8, "ObjectProperty"},
            {"RoomEditAction", 0xE0, "ObjectProperty"},
            {"DefaultRoomClass", 0xE8, "SoftClassProperty"},
            {"BuildingCaptureMode", 0x108, "ObjectProperty"},
            {"DefaultCaptureClass", 0x110, "SoftClassProperty"},
            {"BuildingCapturePlace", 0x130, "ObjectProperty"},
            {"BuildingCaptureMove", 0x138, "ObjectProperty"},
            {"BuildingCaptureRemove", 0x140, "ObjectProperty"},
            {"DefaultRecipes", 0x148, "ArrayProperty"},
            {"MaxRecentRecipes", 0x158, "IntProperty"},
            {"DefaultBuildingCameraMode", 0x160, "ClassProperty"},
            {"UINotificationIcon", 0x168, "SoftObjectProperty"},
            {"ReplicatedSelectedSlot", 0x188, "StructProperty"},
            {"ReplicatedSlotRequestId", 0x1C8, "IntProperty"},
            {"LastGuidedBuildingActor", 0x21C, "WeakObjectProperty"},
            {"ReplicatedLastGuidedBuildingActor", 0x224, "WeakObjectProperty"},
            {"ReplicateLastGuidedActorTime", 0x22C, "FloatProperty"},
            {"ReplicatedLastQuickBuildingActor", 0x240, "WeakObjectProperty"},
            {"ReplicateLastQuickActorTime", 0x248, "FloatProperty"},
            {"ReplicateBuildingMetricSpatialPrecision", 0x24C, "FloatProperty"},
            {"DirtyCellLocations", 0x250, "SetProperty"},
            {"MCPItemPlacementStatus", 0x270, "StructProperty"},
            {"WaitForEventRouterAction", 0x368, "ObjectProperty"},
            {"AlertData", 0x370, "ArrayProperty"},
            {"BuildingSessionInfo", 0x390, "StructProperty"},
            {"ClientSpatialMetricsBuildingPermissions", 0x3C0, "ArrayProperty"},
            {"LastKnownPawnSpatialCell", 0x3D0, "StructProperty"},
        }};
    };

    struct JunoPlayerCampPawnComponent
    {
        static constexpr std::string_view Name = "JunoPlayerCampPawnComponent";
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

    struct JunoPlayerControllerComponent_ContraptionAnalytics
    {
        static constexpr std::string_view Name = "JunoPlayerControllerComponent_ContraptionAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DelayToSendMessage = 0xC0;
            static constexpr std::uintptr_t ContraptionUseSessionData = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DelayToSendMessage", 0xC0, "FloatProperty"},
            {"ContraptionUseSessionData", 0xC8, "StructProperty"},
        }};
    };

    struct JunoPlayerControllerComponent_JunoSessionAnalytics
    {
        static constexpr std::string_view Name = "JunoPlayerControllerComponent_JunoSessionAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPlayerControllerComponent_SessionAnalytics";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoPlaySessionStartedTime = 0xF0;
            static constexpr std::uintptr_t RecipesUnlockedDuringSession = 0xF8;
            static constexpr std::uintptr_t AccumulatedDistanceTraveled = 0x108;
            static constexpr std::uintptr_t LastIdleCheckTime = 0x10C;
            static constexpr std::uintptr_t AccumulatedIdleTime = 0x110;
            static constexpr std::uintptr_t LastPlayerPawnLocation = 0x118;
            static constexpr std::uintptr_t SavedDisconnectReason = 0x140;
            static constexpr std::uintptr_t GracefulShutdownInitiatedEventHandle = 0x150;
            static constexpr std::uintptr_t bGracefulShutdownStarted = 0x16C;
            static constexpr std::uintptr_t GracefulShutdownExitCode = 0x170;
            static constexpr std::uintptr_t GracefulShutdownMaxTime = 0x174;
            static constexpr std::uintptr_t SavedPlayerPermadeathStatus = 0x178;
            static constexpr std::uintptr_t PawnEliminatedEventHandle = 0x198;
            static constexpr std::uintptr_t HeartbeatIntervalSeconds = 0x260;
            static constexpr std::uintptr_t PlayerStatsUpdateIntervalSeconds = 0x264;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"JunoPlaySessionStartedTime", 0xF0, "DoubleProperty"},
            {"RecipesUnlockedDuringSession", 0xF8, "ArrayProperty"},
            {"AccumulatedDistanceTraveled", 0x108, "FloatProperty"},
            {"LastIdleCheckTime", 0x10C, "FloatProperty"},
            {"AccumulatedIdleTime", 0x110, "FloatProperty"},
            {"LastPlayerPawnLocation", 0x118, "StructProperty"},
            {"SavedDisconnectReason", 0x140, "StrProperty"},
            {"GracefulShutdownInitiatedEventHandle", 0x150, "StructProperty"},
            {"bGracefulShutdownStarted", 0x16C, "BoolProperty"},
            {"GracefulShutdownExitCode", 0x170, "IntProperty"},
            {"GracefulShutdownMaxTime", 0x174, "IntProperty"},
            {"SavedPlayerPermadeathStatus", 0x178, "StrProperty"},
            {"PawnEliminatedEventHandle", 0x198, "StructProperty"},
            {"HeartbeatIntervalSeconds", 0x260, "FloatProperty"},
            {"PlayerStatsUpdateIntervalSeconds", 0x264, "FloatProperty"},
        }};
    };

    struct JunoPlayerControllerComponent_PersistenceProxy
    {
        static constexpr std::string_view Name = "JunoPlayerControllerComponent_PersistenceProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PendingLoadValues = 0xC8;
            static constexpr std::uintptr_t CachedPersistentValues = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PendingLoadValues", 0xC8, "ArrayProperty"},
            {"CachedPersistentValues", 0xE0, "MapProperty"},
        }};
    };

    struct JunoPlayerControllerComponent_SessionAnalytics
    {
        static constexpr std::string_view Name = "JunoPlayerControllerComponent_SessionAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent_SessionAnalytics";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoPlaySessionStartedTime = 0xF0;
            static constexpr std::uintptr_t RecipesUnlockedDuringSession = 0xF8;
            static constexpr std::uintptr_t AccumulatedDistanceTraveled = 0x108;
            static constexpr std::uintptr_t LastIdleCheckTime = 0x10C;
            static constexpr std::uintptr_t AccumulatedIdleTime = 0x110;
            static constexpr std::uintptr_t LastPlayerPawnLocation = 0x118;
            static constexpr std::uintptr_t SavedDisconnectReason = 0x140;
            static constexpr std::uintptr_t GracefulShutdownInitiatedEventHandle = 0x150;
            static constexpr std::uintptr_t bGracefulShutdownStarted = 0x16C;
            static constexpr std::uintptr_t GracefulShutdownExitCode = 0x170;
            static constexpr std::uintptr_t GracefulShutdownMaxTime = 0x174;
            static constexpr std::uintptr_t SavedPlayerPermadeathStatus = 0x178;
            static constexpr std::uintptr_t PawnEliminatedEventHandle = 0x198;
            static constexpr std::uintptr_t HeartbeatIntervalSeconds = 0x260;
            static constexpr std::uintptr_t PlayerStatsUpdateIntervalSeconds = 0x264;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"JunoPlaySessionStartedTime", 0xF0, "DoubleProperty"},
            {"RecipesUnlockedDuringSession", 0xF8, "ArrayProperty"},
            {"AccumulatedDistanceTraveled", 0x108, "FloatProperty"},
            {"LastIdleCheckTime", 0x10C, "FloatProperty"},
            {"AccumulatedIdleTime", 0x110, "FloatProperty"},
            {"LastPlayerPawnLocation", 0x118, "StructProperty"},
            {"SavedDisconnectReason", 0x140, "StrProperty"},
            {"GracefulShutdownInitiatedEventHandle", 0x150, "StructProperty"},
            {"bGracefulShutdownStarted", 0x16C, "BoolProperty"},
            {"GracefulShutdownExitCode", 0x170, "IntProperty"},
            {"GracefulShutdownMaxTime", 0x174, "IntProperty"},
            {"SavedPlayerPermadeathStatus", 0x178, "StrProperty"},
            {"PawnEliminatedEventHandle", 0x198, "StructProperty"},
            {"HeartbeatIntervalSeconds", 0x260, "FloatProperty"},
            {"PlayerStatsUpdateIntervalSeconds", 0x264, "FloatProperty"},
        }};
    };

    struct JunoPlayerInventoryComponent
    {
        static constexpr std::string_view Name = "JunoPlayerInventoryComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoInventoryComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnItemReplacedEvent = 0x308;
            static constexpr std::uintptr_t AutoReplacementDelay = 0x318;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnItemReplacedEvent", 0x308, "MulticastInlineDelegateProperty"},
            {"AutoReplacementDelay", 0x318, "StructProperty"},
        }};
    };

    struct JunoPlayerInventorySourceComponent
    {
        static constexpr std::string_view Name = "JunoPlayerInventorySourceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Inventory = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Inventory", 0x138, "WeakObjectProperty"},
        }};
    };

    struct JunoPlayerLifetimeStatsComponent
    {
        static constexpr std::string_view Name = "JunoPlayerLifetimeStatsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AccumulatedTimePlayedSeconds = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AccumulatedTimePlayedSeconds", 0xC8, "IntProperty"},
        }};
    };

    struct JunoPlayerModifiersPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoPlayerModifiersPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoPlayerPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoPlayerPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoPlayerReactionsPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoPlayerReactionsPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoPlayerSavedBuildsComponent
    {
        static constexpr std::string_view Name = "JunoPlayerSavedBuildsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPlayerSaveBuildChanged = 0xE0;
            static constexpr std::uintptr_t OnPlayerSaveBuildLost = 0xF0;
            static constexpr std::uintptr_t OnClientDeleteSavedBuildFinished = 0x100;
            static constexpr std::uintptr_t OnClientUpdateDisplayInfoSavedBuildFinished = 0x110;
            static constexpr std::uintptr_t bSavedBuildsEnabled = 0x120;
            static constexpr std::uintptr_t bSavedBuildPlacementEnabled = 0x121;
            static constexpr std::uintptr_t SavedBuildsInfo = 0x128;
            static constexpr std::uintptr_t WaitForPlayerPersistence = 0x188;
            static constexpr std::uintptr_t ConfigData = 0x1E0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OnPlayerSaveBuildChanged", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnPlayerSaveBuildLost", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnClientDeleteSavedBuildFinished", 0x100, "MulticastInlineDelegateProperty"},
            {"OnClientUpdateDisplayInfoSavedBuildFinished", 0x110, "MulticastInlineDelegateProperty"},
            {"bSavedBuildsEnabled", 0x120, "BoolProperty"},
            {"bSavedBuildPlacementEnabled", 0x121, "BoolProperty"},
            {"SavedBuildsInfo", 0x128, "StructProperty"},
            {"WaitForPlayerPersistence", 0x188, "ObjectProperty"},
            {"ConfigData", 0x1E0, "StructProperty"},
        }};
    };

    struct JunoPlayerSpawningComponent
    {
        static constexpr std::string_view Name = "JunoPlayerSpawningComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent_PlayerSpawning";
        struct Offsets
        {
            static constexpr std::uintptr_t SurvivalSettings = 0xF8;
            static constexpr std::uintptr_t SandboxSettings = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SurvivalSettings", 0xF8, "StructProperty"},
            {"SandboxSettings", 0x168, "StructProperty"},
        }};
    };

    struct JunoPlayerState
    {
        static constexpr std::string_view Name = "JunoPlayerState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStateAthena";
        struct Offsets
        {
            static constexpr std::uintptr_t CaveId = 0x17C8;
            static constexpr std::uintptr_t PinColorForPlayer = 0x17D8;
            static constexpr std::uintptr_t GameplayTagPresentWhenTeleporting = 0x17E8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CaveId", 0x17C8, "StructProperty"},
            {"PinColorForPlayer", 0x17D8, "ArrayProperty"},
            {"GameplayTagPresentWhenTeleporting", 0x17E8, "StructProperty"},
        }};
    };

    struct JunoPlayerStateComponent_PlayerReactionsManager
    {
        static constexpr std::string_view Name = "JunoPlayerStateComponent_PlayerReactionsManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStateComponent_PlayerReactionsManager";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedTriggeredReactions = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedTriggeredReactions", 0x1B0, "ArrayProperty"},
        }};
    };

    struct JunoPlayerTierComponent
    {
        static constexpr std::string_view Name = "JunoPlayerTierComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerTierValueChanged = 0xC8;
            static constexpr std::uintptr_t PlayerTierComparisonOffset = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayerTierValueChanged", 0xC8, "MulticastInlineDelegateProperty"},
            {"PlayerTierComparisonOffset", 0xD8, "StructProperty"},
        }};
    };

    struct JunoPlayerUpdateHandlerPersistenceComponent
    {
        static constexpr std::string_view Name = "JunoPlayerUpdateHandlerPersistenceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMeshNetworkReady_BP = 0xC0;
            static constexpr std::uintptr_t OnMeshNetworkEventBurst_BP = 0xD0;
            static constexpr std::uintptr_t OnMeshNetworkEventStart_BP = 0xE0;
            static constexpr std::uintptr_t OnMeshNetworkEventChange_BP = 0xF0;
            static constexpr std::uintptr_t OnMeshNetworkEventEnd_BP = 0x100;
            static constexpr std::uintptr_t bSubscribeToMeshNetwork = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnMeshNetworkReady_BP", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventBurst_BP", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventStart_BP", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventChange_BP", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventEnd_BP", 0x100, "MulticastInlineDelegateProperty"},
            {"bSubscribeToMeshNetwork", 0x110, "BoolProperty"},
        }};
    };

    struct JunoPlayerUpdateHandlerPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoPlayerUpdateHandlerPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoPlayspaceAccountantComponent
    {
        static constexpr std::string_view Name = "JunoPlayspaceAccountantComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMeshNetworkReady_BP = 0xC0;
            static constexpr std::uintptr_t OnMeshNetworkEventBurst_BP = 0xD0;
            static constexpr std::uintptr_t OnMeshNetworkEventStart_BP = 0xE0;
            static constexpr std::uintptr_t OnMeshNetworkEventChange_BP = 0xF0;
            static constexpr std::uintptr_t OnMeshNetworkEventEnd_BP = 0x100;
            static constexpr std::uintptr_t bSubscribeToMeshNetwork = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnMeshNetworkReady_BP", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventBurst_BP", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventStart_BP", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventChange_BP", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventEnd_BP", 0x100, "MulticastInlineDelegateProperty"},
            {"bSubscribeToMeshNetwork", 0x110, "BoolProperty"},
        }};
    };

    struct JunoPlayspaceAccountantFeatureData
    {
        static constexpr std::string_view Name = "JunoPlayspaceAccountantFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoPlayspaceAccountantSaveData = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JunoPlayspaceAccountantSaveData", 0x58, "StructProperty"},
        }};
    };

    struct JunoPlayspaceAccountantPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoPlayspaceAccountantPersistenceFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoPlayspaceAccountantPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoPlayspaceAccountantPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoPlayspaceControllerComponent_PlayerSpawning
    {
        static constexpr std::string_view Name = "JunoPlayspaceControllerComponent_PlayerSpawning";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceControllerComponent_PlayerSpawning";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayspaceSearchBoxExtent = 0x190;
            static constexpr std::uintptr_t bHasPlayerRespawnedFromDeath = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayspaceSearchBoxExtent", 0x190, "StructProperty"},
            {"bHasPlayerRespawnedFromDeath", 0x1B8, "BoolProperty"},
        }};
    };

    struct JunoPlayspacePersistenceFeatureHelper
    {
        static constexpr std::string_view Name = "JunoPlayspacePersistenceFeatureHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PersistenceFeatureDataClass = 0x28;
            static constexpr std::uintptr_t PersistenceFeatureData = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PersistenceFeatureDataClass", 0x28, "ClassProperty"},
            {"PersistenceFeatureData", 0x30, "InterfaceProperty"},
        }};
    };

    struct JunoPlayspacePickupComponent
    {
        static constexpr std::string_view Name = "JunoPlayspacePickupComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMeshNetworkReady_BP = 0xC0;
            static constexpr std::uintptr_t OnMeshNetworkEventBurst_BP = 0xD0;
            static constexpr std::uintptr_t OnMeshNetworkEventStart_BP = 0xE0;
            static constexpr std::uintptr_t OnMeshNetworkEventChange_BP = 0xF0;
            static constexpr std::uintptr_t OnMeshNetworkEventEnd_BP = 0x100;
            static constexpr std::uintptr_t bSubscribeToMeshNetwork = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnMeshNetworkReady_BP", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventBurst_BP", 0xD0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventStart_BP", 0xE0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventChange_BP", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnMeshNetworkEventEnd_BP", 0x100, "MulticastInlineDelegateProperty"},
            {"bSubscribeToMeshNetwork", 0x110, "BoolProperty"},
        }};
    };

    struct JunoPlayspacePickupFeatureData
    {
        static constexpr std::string_view Name = "JunoPlayspacePickupFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoPlayspacePickupSaveData = 0x58;
            static constexpr std::uintptr_t PendingLoadPickups = 0x68;
            static constexpr std::uintptr_t SpawnedPickupBeingProcessed = 0x78;
            static constexpr std::uintptr_t PendingSpawnPickups = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"JunoPlayspacePickupSaveData", 0x58, "StructProperty"},
            {"PendingLoadPickups", 0x68, "MapProperty"},
            {"SpawnedPickupBeingProcessed", 0x78, "ObjectProperty"},
            {"PendingSpawnPickups", 0x80, "MapProperty"},
        }};
    };

    struct JunoPlayspacePickupPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoPlayspacePickupPersistenceFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoPlayspacePickupPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoPlayspacePickupPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoPlayspaceRandomStreamComponent
    {
        static constexpr std::string_view Name = "JunoPlayspaceRandomStreamComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayspaceRandomSeed = 0x118;
            static constexpr std::uintptr_t RandomStreamGenerator = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayspaceRandomSeed", 0x118, "IntProperty"},
            {"RandomStreamGenerator", 0x120, "ObjectProperty"},
        }};
    };

    struct JunoProjectileCosmeticAlterationComponent
    {
        static constexpr std::string_view Name = "JunoProjectileCosmeticAlterationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCosmeticAlterationComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseAlteration = 0xC0;
            static constexpr std::uintptr_t ActiveAlterations = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BaseAlteration", 0xC0, "ObjectProperty"},
            {"ActiveAlterations", 0xC8, "ArrayProperty"},
        }};
    };

    struct JunoProjectileMovementComponent_SurfaceSlide
    {
        static constexpr std::string_view Name = "JunoProjectileMovementComponent_SurfaceSlide";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortProjectileMovementComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SlideIgnoreActorClasses = 0x450;
            static constexpr std::uintptr_t MaxSlideAngle = 0x460;
            static constexpr std::uintptr_t SildeUnpenetrateVelocity = 0x488;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SlideIgnoreActorClasses", 0x450, "ArrayProperty"},
            {"MaxSlideAngle", 0x460, "StructProperty"},
            {"SildeUnpenetrateVelocity", 0x488, "StructProperty"},
        }};
    };

    struct JunoQueryContext_AICamp_AssignedRecruitmentObject
    {
        static constexpr std::string_view Name = "JunoQueryContext_AICamp_AssignedRecruitmentObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoQueryContext_AICamp_LastOrCurrentAssignedRecruitmentObject_Location
    {
        static constexpr std::string_view Name = "JunoQueryContext_AICamp_LastOrCurrentAssignedRecruitmentObject_Location";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoQueryContext_Camp_Center
    {
        static constexpr std::string_view Name = "JunoQueryContext_Camp_Center";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoQueryContext_Camp_Extents
    {
        static constexpr std::string_view Name = "JunoQueryContext_Camp_Extents";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoQueryTest_IsInCamp
    {
        static constexpr std::string_view Name = "JunoQueryTest_IsInCamp";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest";
        struct Offsets
        {
            static constexpr std::uintptr_t Context = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Context", 0x1F8, "ClassProperty"},
        }};
    };

    struct JunoQuestActorSpawnPoint
    {
        static constexpr std::string_view Name = "JunoQuestActorSpawnPoint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnTags = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpawnTags", 0x278, "StructProperty"},
        }};
    };

    struct JunoQuestDatabaseComponent
    {
        static constexpr std::string_view Name = "JunoQuestDatabaseComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestPoolAssets = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuestPoolAssets", 0x138, "ArrayProperty"},
        }};
    };

    struct JunoQuestDefinitionComponent_ProductCompatibilityInjector_GameMode
    {
        static constexpr std::string_view Name = "JunoQuestDefinitionComponent_ProductCompatibilityInjector_GameMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestDefinitionComponent_ProductCompatibilityInjector";
        struct Offsets
        {
            static constexpr std::uintptr_t GameMode = 0x40;
            static constexpr std::uintptr_t FrontEndTags = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GameMode", 0x40, "EnumProperty"},
            {"FrontEndTags", 0x48, "StructProperty"},
        }};
    };

    struct JunoQuestGiverComponent
    {
        static constexpr std::string_view Name = "JunoQuestGiverComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GrantableQuestID = 0xC0;
            static constexpr std::uintptr_t GrantableQuestTags = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GrantableQuestID", 0xC0, "StrProperty"},
            {"GrantableQuestTags", 0xD0, "StructProperty"},
        }};
    };

    struct JunoQuestItemComponent_ProductCompatibilityInjector_GameMode
    {
        static constexpr std::string_view Name = "JunoQuestItemComponent_ProductCompatibilityInjector_GameMode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortQuestItemComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestDefinitionComponent = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuestDefinitionComponent", 0x30, "ObjectProperty"},
        }};
    };

    struct JunoQuestManagerComponent
    {
        static constexpr std::string_view Name = "JunoQuestManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent_Quests";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestsToGrantOnStart = 0x1B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"QuestsToGrantOnStart", 0x1B0, "ArrayProperty"},
        }};
    };

    struct JunoQuestPoolDataAsset
    {
        static constexpr std::string_view Name = "JunoQuestPoolDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t QuestEntries = 0x28;
            static constexpr std::uintptr_t QuestPoolTag = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"QuestEntries", 0x28, "ArrayProperty"},
            {"QuestPoolTag", 0x38, "StructProperty"},
        }};
    };

    struct JunoQuestSpawnPointComponent
    {
        static constexpr std::string_view Name = "JunoQuestSpawnPointComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
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

    struct JunoQuestSystemInitReadyHelper
    {
        static constexpr std::string_view Name = "JunoQuestSystemInitReadyHelper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestSystemInitReadyHelperBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoQuickBuildInterface
    {
        static constexpr std::string_view Name = "JunoQuickBuildInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoQuickBuildSelectionData
    {
        static constexpr std::string_view Name = "JunoQuickBuildSelectionData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentlySelectedIndex = 0x28;
            static constexpr std::uintptr_t QuickBuildRecipes = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurrentlySelectedIndex", 0x28, "IntProperty"},
            {"QuickBuildRecipes", 0x30, "ArrayProperty"},
        }};
    };

    struct JunoQuickGuidedBuildComponent
    {
        static constexpr std::string_view Name = "JunoQuickGuidedBuildComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnQuickBuildInitialized = 0xC8;
            static constexpr std::uintptr_t OnQuickActorSpawned = 0xD8;
            static constexpr std::uintptr_t OnQuickBuildableStateChanged = 0xE8;
            static constexpr std::uintptr_t OnQuickBuildCompleted = 0xF8;
            static constexpr std::uintptr_t OnPlayerRegistered = 0x108;
            static constexpr std::uintptr_t OnPlayerUnregistered = 0x118;
            static constexpr std::uintptr_t SoftMaterialSet = 0x138;
            static constexpr std::uintptr_t MaterialSet = 0x148;
            static constexpr std::uintptr_t RegisteredPlayerStates = 0x158;
            static constexpr std::uintptr_t QuickBuildableDynamicData = 0x168;
            static constexpr std::uintptr_t QuickBuildNetInitState = 0x1C8;
            static constexpr std::uintptr_t bBuildCompleted = 0x1CA;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"OnQuickBuildInitialized", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnQuickActorSpawned", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnQuickBuildableStateChanged", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnQuickBuildCompleted", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnPlayerRegistered", 0x108, "MulticastInlineDelegateProperty"},
            {"OnPlayerUnregistered", 0x118, "MulticastInlineDelegateProperty"},
            {"SoftMaterialSet", 0x138, "MapProperty"},
            {"MaterialSet", 0x148, "MapProperty"},
            {"RegisteredPlayerStates", 0x158, "ArrayProperty"},
            {"QuickBuildableDynamicData", 0x168, "StructProperty"},
            {"QuickBuildNetInitState", 0x1C8, "StructProperty"},
            {"bBuildCompleted", 0x1CA, "BoolProperty"},
        }};
    };

    struct JunoRainCapture
    {
        static constexpr std::string_view Name = "JunoRainCapture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SceneCaptureComponent2D = 0x278;
            static constexpr std::uintptr_t MaterialParameterCollection = 0x290;
            static constexpr std::uintptr_t RainOccluderSceneCaptureLocationName = 0x298;
            static constexpr std::uintptr_t RainOccluderPositionOffset = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SceneCaptureComponent2D", 0x278, "ObjectProperty"},
            {"MaterialParameterCollection", 0x290, "ObjectProperty"},
            {"RainOccluderSceneCaptureLocationName", 0x298, "NameProperty"},
            {"RainOccluderPositionOffset", 0x2A0, "StructProperty"},
        }};
    };

    struct JunoRainCaptureSubsystem
    {
        static constexpr std::string_view Name = "JunoRainCaptureSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t SubsystemDataAssetPath = 0x48;
            static constexpr std::uintptr_t SubsystemData = 0x60;
            static constexpr std::uintptr_t RainCaptureInstance = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SubsystemDataAssetPath", 0x48, "StructProperty"},
            {"SubsystemData", 0x60, "ObjectProperty"},
            {"RainCaptureInstance", 0x88, "ObjectProperty"},
        }};
    };

    struct JunoRainCaptureSubsystemData
    {
        static constexpr std::string_view Name = "JunoRainCaptureSubsystemData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialParameterCollection = 0x28;
            static constexpr std::uintptr_t TextureTarget = 0x30;
            static constexpr std::uintptr_t WeatherParameterName = 0x38;
            static constexpr std::uintptr_t RainOccluderSceneCaptureLocationName = 0x3C;
            static constexpr std::uintptr_t RainOccluderPositionOffset = 0x40;
            static constexpr std::uintptr_t UpdateDistanceThreshold = 0x58;
            static constexpr std::uintptr_t UpdateTimeThreshold = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MaterialParameterCollection", 0x28, "ObjectProperty"},
            {"TextureTarget", 0x30, "ObjectProperty"},
            {"WeatherParameterName", 0x38, "NameProperty"},
            {"RainOccluderSceneCaptureLocationName", 0x3C, "NameProperty"},
            {"RainOccluderPositionOffset", 0x40, "StructProperty"},
            {"UpdateDistanceThreshold", 0x58, "FloatProperty"},
            {"UpdateTimeThreshold", 0x5C, "FloatProperty"},
        }};
    };

    struct JunoRainOccluderComponent
    {
        static constexpr std::string_view Name = "JunoRainOccluderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
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

    struct JunoRainOcclusionExcludeComponent
    {
        static constexpr std::string_view Name = "JunoRainOcclusionExcludeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
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

    struct JunoRandomMoodReactionWorldConditionSchema
    {
        static constexpr std::string_view Name = "JunoRandomMoodReactionWorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct JunoRecipeBundleItemDefinition
    {
        static constexpr std::string_view Name = "JunoRecipeBundleItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWorldItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t CraftingFormulas = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CraftingFormulas", 0xA8, "ArrayProperty"},
        }};
    };

    struct JunoRegisteredClassLibrary
    {
        static constexpr std::string_view Name = "JunoRegisteredClassLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoRegisteredClassSubsystem
    {
        static constexpr std::string_view Name = "JunoRegisteredClassSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoResourceComponent
    {
        static constexpr std::string_view Name = "JunoResourceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BuildingTagDataTable = 0xC0;
            static constexpr std::uintptr_t ResourceDataTable = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BuildingTagDataTable", 0xC0, "ObjectProperty"},
            {"ResourceDataTable", 0xC8, "ObjectProperty"},
        }};
    };

    struct JunoReticleOverrideSubsystem
    {
        static constexpr std::string_view Name = "JunoReticleOverrideSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveReticleOverrides = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActiveReticleOverrides", 0x30, "MapProperty"},
        }};
    };

    struct JunoRolledCraftingComponent
    {
        static constexpr std::string_view Name = "JunoRolledCraftingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TossOffset = 0xC0;
            static constexpr std::uintptr_t TossAngle = 0xD8;
            static constexpr std::uintptr_t TossSpeed = 0xDC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TossOffset", 0xC0, "StructProperty"},
            {"TossAngle", 0xD8, "FloatProperty"},
            {"TossSpeed", 0xDC, "FloatProperty"},
        }};
    };

    struct JunoRoom
    {
        static constexpr std::string_view Name = "JunoRoom";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t RoomTypeRegistry = 0x290;
            static constexpr std::uintptr_t SavedActorGuid = 0x294;
            static constexpr std::uintptr_t RoomContext = 0x2C8;
            static constexpr std::uintptr_t bAutoDetectType = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RoomTypeRegistry", 0x290, "StructProperty"},
            {"SavedActorGuid", 0x294, "StructProperty"},
            {"RoomContext", 0x2C8, "StructProperty"},
            {"bAutoDetectType", 0x2E0, "BoolProperty"},
        }};
    };

    struct JunoRoomBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoRoomBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoRoomBuildingBehavior
    {
        static constexpr std::string_view Name = "JunoRoomBuildingBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingBehaviorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnRoomContextChanged = 0x338;
            static constexpr std::uintptr_t SupportedBoundingActorClasses = 0x348;
            static constexpr std::uintptr_t MaxSelectionDistance = 0x368;
            static constexpr std::uintptr_t RoomActorToEdit = 0x390;
            static constexpr std::uintptr_t CachedTypeConfigMap = 0x398;
            static constexpr std::uintptr_t RoomContext = 0x3A8;
            static constexpr std::uintptr_t LastTriggerTimestamp = 0x3C0;
            static constexpr std::uintptr_t SpawnContexts = 0x3D0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OnRoomContextChanged", 0x338, "MulticastInlineDelegateProperty"},
            {"SupportedBoundingActorClasses", 0x348, "StructProperty"},
            {"MaxSelectionDistance", 0x368, "FloatProperty"},
            {"RoomActorToEdit", 0x390, "ObjectProperty"},
            {"CachedTypeConfigMap", 0x398, "MapProperty"},
            {"RoomContext", 0x3A8, "StructProperty"},
            {"LastTriggerTimestamp", 0x3C0, "DoubleProperty"},
            {"SpawnContexts", 0x3D0, "MapProperty"},
        }};
    };

    struct JunoRoomManagerPlayspaceComponent
    {
        static constexpr std::string_view Name = "JunoRoomManagerPlayspaceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Rooms = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Rooms", 0x118, "ArrayProperty"},
        }};
    };

    struct JunoRootPlayspace
    {
        static constexpr std::string_view Name = "JunoRootPlayspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseRootPersistentPlayspace";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultInventoryItemTag = 0x810;
            static constexpr std::uintptr_t JunoServerExpiration = 0x818;
            static constexpr std::uintptr_t ProcessPlayerProgressionTime = 0x820;
            static constexpr std::uintptr_t WorldDataAvailable = 0x838;
            static constexpr std::uintptr_t MapManager = 0x850;
            static constexpr std::uintptr_t MapManagerClassKey = 0x858;
            static constexpr std::uintptr_t MapManagerClassMap = 0x860;
            static constexpr std::uintptr_t MarkerManager = 0x870;
            static constexpr std::uintptr_t MarkerManagerClass = 0x878;
            static constexpr std::uintptr_t bCheckForPlayspaceOwner = 0x880;
            static constexpr std::uintptr_t bFiredFirstMatchStartedVerb = 0x881;
            static constexpr std::uintptr_t OwningController = 0x884;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"DefaultInventoryItemTag", 0x810, "StructProperty"},
            {"JunoServerExpiration", 0x818, "ObjectProperty"},
            {"ProcessPlayerProgressionTime", 0x820, "FloatProperty"},
            {"WorldDataAvailable", 0x838, "EnumProperty"},
            {"MapManager", 0x850, "ObjectProperty"},
            {"MapManagerClassKey", 0x858, "StructProperty"},
            {"MapManagerClassMap", 0x860, "MapProperty"},
            {"MarkerManager", 0x870, "ObjectProperty"},
            {"MarkerManagerClass", 0x878, "ClassProperty"},
            {"bCheckForPlayspaceOwner", 0x880, "BoolProperty"},
            {"bFiredFirstMatchStartedVerb", 0x881, "BoolProperty"},
            {"OwningController", 0x884, "WeakObjectProperty"},
        }};
    };

    struct JunoRuntimeSettings
    {
        static constexpr std::string_view Name = "JunoRuntimeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bPawnsUseProbeCollision = 0x30;
            static constexpr std::uintptr_t bCharacterBasedMovementIgnorePhysicsBase = 0x31;
            static constexpr std::uintptr_t bCharacterStayBasedInAir = 0x32;
            static constexpr std::uintptr_t bCharacterBaseOnAttachmentRoot = 0x33;
            static constexpr std::uintptr_t bBuoyancyEnabled = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bPawnsUseProbeCollision", 0x30, "BoolProperty"},
            {"bCharacterBasedMovementIgnorePhysicsBase", 0x31, "BoolProperty"},
            {"bCharacterStayBasedInAir", 0x32, "BoolProperty"},
            {"bCharacterBaseOnAttachmentRoot", 0x33, "BoolProperty"},
            {"bBuoyancyEnabled", 0x34, "BoolProperty"},
        }};
    };

    struct JunoSafeZoneComponent
    {
        static constexpr std::string_view Name = "JunoSafeZoneComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ActivationPolicy = 0xC0;
            static constexpr std::uintptr_t OverrideShape = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActivationPolicy", 0xC0, "EnumProperty"},
            {"OverrideShape", 0xC8, "StructProperty"},
        }};
    };

    struct JunoSafeZoneDebugSubsystem
    {
        static constexpr std::string_view Name = "JunoSafeZoneDebugSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoSafeZoneExplorerWidget
    {
        static constexpr std::string_view Name = "JunoSafeZoneExplorerWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SlateIMInGameWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ServerSnapshot = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ServerSnapshot", 0x280, "ArrayProperty"},
        }};
    };

    struct JunoSafeZonePersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoSafeZonePersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t SavedZones = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SavedZones", 0x60, "ArrayProperty"},
        }};
    };

    struct JunoSafeZonePersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoSafeZonePersistenceFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoSafeZonePersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoSafeZonePersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoSafeZoneRegistrySubsystem
    {
        static constexpr std::string_view Name = "JunoSafeZoneRegistrySubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoSaveABuildActor
    {
        static constexpr std::string_view Name = "JunoSaveABuildActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingProp";
        struct Offsets
        {
            static constexpr std::uintptr_t OnQuickBuildInitialized = 0xC38;
            static constexpr std::uintptr_t OnQuickActorSpawned = 0xC48;
            static constexpr std::uintptr_t OnQuickBuildableStateChanged = 0xC58;
            static constexpr std::uintptr_t OnQuickBuildCompleted = 0xC68;
            static constexpr std::uintptr_t OnPlayerRegistered = 0xC78;
            static constexpr std::uintptr_t OnPlayerUnregistered = 0xC88;
            static constexpr std::uintptr_t SavedBuildSubWorldId = 0xC98;
            static constexpr std::uintptr_t SavedBuildId = 0xCA8;
            static constexpr std::uintptr_t BuildManifest = 0xCD8;
            static constexpr std::uintptr_t QuickBuildDynamicData = 0xD08;
            static constexpr std::uintptr_t QuickBuildAuthorityData = 0xD68;
            static constexpr std::uintptr_t PreviewComponentsPerBuildable = 0xDE8;
            static constexpr std::uintptr_t ConnectivityComponent = 0xDF8;
            static constexpr std::uintptr_t LoadedGhostMaterials = 0xE00;
            static constexpr std::uintptr_t GhostEffectiveMaterials = 0xE10;
            static constexpr std::uintptr_t GhostComponentToBuildItemID = 0xE20;
            static constexpr std::uintptr_t bBuildCompleted = 0xE34;
            static constexpr std::uintptr_t bBuildAbandoned = 0xE35;
            static constexpr std::uintptr_t RegisteredPlayerStates = 0xE38;
            static constexpr std::uintptr_t DisplayInfo = 0xE48;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"OnQuickBuildInitialized", 0xC38, "MulticastInlineDelegateProperty"},
            {"OnQuickActorSpawned", 0xC48, "MulticastInlineDelegateProperty"},
            {"OnQuickBuildableStateChanged", 0xC58, "MulticastInlineDelegateProperty"},
            {"OnQuickBuildCompleted", 0xC68, "MulticastInlineDelegateProperty"},
            {"OnPlayerRegistered", 0xC78, "MulticastInlineDelegateProperty"},
            {"OnPlayerUnregistered", 0xC88, "MulticastInlineDelegateProperty"},
            {"SavedBuildSubWorldId", 0xC98, "StrProperty"},
            {"SavedBuildId", 0xCA8, "StructProperty"},
            {"BuildManifest", 0xCD8, "StructProperty"},
            {"QuickBuildDynamicData", 0xD08, "StructProperty"},
            {"QuickBuildAuthorityData", 0xD68, "StructProperty"},
            {"PreviewComponentsPerBuildable", 0xDE8, "ArrayProperty"},
            {"ConnectivityComponent", 0xDF8, "ObjectProperty"},
            {"LoadedGhostMaterials", 0xE00, "MapProperty"},
            {"GhostEffectiveMaterials", 0xE10, "MapProperty"},
            {"GhostComponentToBuildItemID", 0xE20, "MapProperty"},
            {"bBuildCompleted", 0xE34, "BoolProperty"},
            {"bBuildAbandoned", 0xE35, "BoolProperty"},
            {"RegisteredPlayerStates", 0xE38, "ArrayProperty"},
            {"DisplayInfo", 0xE48, "StructProperty"},
        }};
    };

    struct JunoSavedWorldWorldSubsystem
    {
        static constexpr std::string_view Name = "JunoSavedWorldWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoSequentialDialogueUtils
    {
        static constexpr std::string_view Name = "JunoSequentialDialogueUtils";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoSkeletalMeshDynamicsComponent
    {
        static constexpr std::string_view Name = "JunoSkeletalMeshDynamicsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SkeletalMeshReference = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SkeletalMeshReference", 0xC0, "StructProperty"},
        }};
    };

    struct JunoSmartObjectComponent
    {
        static constexpr std::string_view Name = "JunoSmartObjectComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSmartObjectComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LootTierPercentageToSlotPickingModifier = 0x388;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LootTierPercentageToSlotPickingModifier", 0x388, "ObjectProperty"},
        }};
    };

    struct JunoSpatialReadinessAnalytics
    {
        static constexpr std::string_view Name = "JunoSpatialReadinessAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoStateMachine
    {
        static constexpr std::string_view Name = "JunoStateMachine";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayStateMachine";
        struct Offsets
        {
            static constexpr std::uintptr_t StateMachineId = 0x90;
            static constexpr std::uintptr_t ActiveGameplayStateData = 0x98;
            static constexpr std::uintptr_t GameplayStateSettings = 0xB0;
            static constexpr std::uintptr_t InitialGameplayStateId = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"StateMachineId", 0x90, "StructProperty"},
            {"ActiveGameplayStateData", 0x98, "StructProperty"},
            {"GameplayStateSettings", 0xB0, "ArrayProperty"},
            {"InitialGameplayStateId", 0xC0, "StructProperty"},
        }};
    };

    struct JunoState_Setup
    {
        static constexpr std::string_view Name = "JunoState_Setup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoState_SetupBase";
        struct Offsets
        {
            static constexpr std::uintptr_t StateId = 0x28;
            static constexpr std::uintptr_t StateRuntimeTags = 0x30;
            static constexpr std::uintptr_t bEvaluateTransition = 0x50;
            static constexpr std::uintptr_t bReplicates = 0x51;
            static constexpr std::uintptr_t bStateBegun = 0x52;
            static constexpr std::uintptr_t bStateEnded = 0x53;
            static constexpr std::uintptr_t InitializationServerTime = 0x54;
            static constexpr std::uintptr_t BeginStateDelay = 0x58;
            static constexpr std::uintptr_t CachedGameplayStateMachine = 0x60;
            static constexpr std::uintptr_t CachedStateMachineManager = 0x68;
            static constexpr std::uintptr_t Hack_StateToDelayProcess = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"StateId", 0x28, "StructProperty"},
            {"StateRuntimeTags", 0x30, "StructProperty"},
            {"bEvaluateTransition", 0x50, "BoolProperty"},
            {"bReplicates", 0x51, "BoolProperty"},
            {"bStateBegun", 0x52, "BoolProperty"},
            {"bStateEnded", 0x53, "BoolProperty"},
            {"InitializationServerTime", 0x54, "FloatProperty"},
            {"BeginStateDelay", 0x58, "FloatProperty"},
            {"CachedGameplayStateMachine", 0x60, "ObjectProperty"},
            {"CachedStateMachineManager", 0x68, "ObjectProperty"},
            {"Hack_StateToDelayProcess", 0x70, "ObjectProperty"},
        }};
    };

    struct JunoState_SetupBase
    {
        static constexpr std::string_view Name = "JunoState_SetupBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayState";
        struct Offsets
        {
            static constexpr std::uintptr_t StateId = 0x28;
            static constexpr std::uintptr_t StateRuntimeTags = 0x30;
            static constexpr std::uintptr_t bEvaluateTransition = 0x50;
            static constexpr std::uintptr_t bReplicates = 0x51;
            static constexpr std::uintptr_t bStateBegun = 0x52;
            static constexpr std::uintptr_t bStateEnded = 0x53;
            static constexpr std::uintptr_t InitializationServerTime = 0x54;
            static constexpr std::uintptr_t BeginStateDelay = 0x58;
            static constexpr std::uintptr_t CachedGameplayStateMachine = 0x60;
            static constexpr std::uintptr_t CachedStateMachineManager = 0x68;
            static constexpr std::uintptr_t Hack_StateToDelayProcess = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"StateId", 0x28, "StructProperty"},
            {"StateRuntimeTags", 0x30, "StructProperty"},
            {"bEvaluateTransition", 0x50, "BoolProperty"},
            {"bReplicates", 0x51, "BoolProperty"},
            {"bStateBegun", 0x52, "BoolProperty"},
            {"bStateEnded", 0x53, "BoolProperty"},
            {"InitializationServerTime", 0x54, "FloatProperty"},
            {"BeginStateDelay", 0x58, "FloatProperty"},
            {"CachedGameplayStateMachine", 0x60, "ObjectProperty"},
            {"CachedStateMachineManager", 0x68, "ObjectProperty"},
            {"Hack_StateToDelayProcess", 0x70, "ObjectProperty"},
        }};
    };

    struct JunoStorageChest
    {
        static constexpr std::string_view Name = "JunoStorageChest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBuildingProp";
        struct Offsets
        {
            static constexpr std::uintptr_t GeometryCollectionComponent = 0xC18;
            static constexpr std::uintptr_t ChestInventoryComponent = 0xC20;
            static constexpr std::uintptr_t CampMembershipComponent = 0xC28;
            static constexpr std::uintptr_t bTakeAllItemsOnInteract = 0xC30;
            static constexpr std::uintptr_t bDestroyOnInteract = 0xC31;
            static constexpr std::uintptr_t bShouldCrumbleOnDeath = 0xC32;
            static constexpr std::uintptr_t bDisableInventoryCreation = 0xC33;
            static constexpr std::uintptr_t GridSizeOverride = 0xC38;
            static constexpr std::uintptr_t BuildingPivotOffset = 0xC50;
            static constexpr std::uintptr_t BuildingGridSnapOffset = 0xCB0;
            static constexpr std::uintptr_t GridOffsetLimits = 0xCC8;
            static constexpr std::uintptr_t OverlappableClasses = 0xCD8;
            static constexpr std::uintptr_t PreviewComponentTemplates = 0xCF8;
            static constexpr std::uintptr_t OwnerPlayerId = 0xD08;
            static constexpr std::uintptr_t BaseLootTierGroup = 0xD38;
            static constexpr std::uintptr_t DefaultInteractTime = 0xD3C;
            static constexpr std::uintptr_t PlayerPlacedInteractTime = 0xD40;
            static constexpr std::uintptr_t SearchedInteractTime = 0xD44;
            static constexpr std::uintptr_t bUsePlayerPlacedInteractionTime = 0xD48;
            static constexpr std::uintptr_t bDropInstancedLoot = 0xD49;
            static constexpr std::uintptr_t SearchedMesh = 0xD50;
            static constexpr std::uintptr_t LootTossSpeed = 0xD58;
            static constexpr std::uintptr_t LootTossAngle = 0xD5C;
            static constexpr std::uintptr_t bChestSearched = 0xD60;
            static constexpr std::uintptr_t bChestLooted = 0xD61;
            static constexpr std::uintptr_t LastInteractor = 0xD64;
            static constexpr std::uintptr_t RuntimeLootTierGroup = 0xD6C;
            static constexpr std::uintptr_t ChestTransactionTelemetry = 0xD70;
            static constexpr std::uintptr_t bAllowInteractionFromPersistence = 0xDA0;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"GeometryCollectionComponent", 0xC18, "ObjectProperty"},
            {"ChestInventoryComponent", 0xC20, "ObjectProperty"},
            {"CampMembershipComponent", 0xC28, "ObjectProperty"},
            {"bTakeAllItemsOnInteract", 0xC30, "BoolProperty"},
            {"bDestroyOnInteract", 0xC31, "BoolProperty"},
            {"bShouldCrumbleOnDeath", 0xC32, "BoolProperty"},
            {"bDisableInventoryCreation", 0xC33, "BoolProperty"},
            {"GridSizeOverride", 0xC38, "StructProperty"},
            {"BuildingPivotOffset", 0xC50, "StructProperty"},
            {"BuildingGridSnapOffset", 0xCB0, "StructProperty"},
            {"GridOffsetLimits", 0xCC8, "StructProperty"},
            {"OverlappableClasses", 0xCD8, "StructProperty"},
            {"PreviewComponentTemplates", 0xCF8, "MapProperty"},
            {"OwnerPlayerId", 0xD08, "StructProperty"},
            {"BaseLootTierGroup", 0xD38, "NameProperty"},
            {"DefaultInteractTime", 0xD3C, "FloatProperty"},
            {"PlayerPlacedInteractTime", 0xD40, "FloatProperty"},
            {"SearchedInteractTime", 0xD44, "FloatProperty"},
            {"bUsePlayerPlacedInteractionTime", 0xD48, "BoolProperty"},
            {"bDropInstancedLoot", 0xD49, "BoolProperty"},
            {"SearchedMesh", 0xD50, "ObjectProperty"},
            {"LootTossSpeed", 0xD58, "FloatProperty"},
            {"LootTossAngle", 0xD5C, "FloatProperty"},
            {"bChestSearched", 0xD60, "BoolProperty"},
            {"bChestLooted", 0xD61, "BoolProperty"},
            {"LastInteractor", 0xD64, "WeakObjectProperty"},
            {"RuntimeLootTierGroup", 0xD6C, "NameProperty"},
            {"ChestTransactionTelemetry", 0xD70, "StructProperty"},
            {"bAllowInteractionFromPersistence", 0xDA0, "BoolProperty"},
        }};
    };

    struct JunoSurvivalMapManager
    {
        static constexpr std::string_view Name = "JunoSurvivalMapManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoMapManager";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayableTiles = 0x298;
            static constexpr std::uintptr_t MapExplorationData = 0x2A8;
            static constexpr std::uintptr_t bIsExplorationDataInitialized = 0x318;
            static constexpr std::uintptr_t ClearedFogMask = 0x320;
            static constexpr std::uintptr_t ExploredRadius = 0x328;
            static constexpr std::uintptr_t OceanTileTexture = 0x330;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DisplayableTiles", 0x298, "ArrayProperty"},
            {"MapExplorationData", 0x2A8, "StructProperty"},
            {"bIsExplorationDataInitialized", 0x318, "BoolProperty"},
            {"ClearedFogMask", 0x320, "ObjectProperty"},
            {"ExploredRadius", 0x328, "FloatProperty"},
            {"OceanTileTexture", 0x330, "SoftObjectProperty"},
        }};
    };

    struct JunoSurvivalRootPlayspace
    {
        static constexpr std::string_view Name = "JunoSurvivalRootPlayspace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoRootPlayspace";
        struct Offsets
        {
            static constexpr std::uintptr_t MetadataForReplication = 0x8A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MetadataForReplication", 0x8A8, "StructProperty"},
        }};
    };

    struct JunoSyncTimeOfDayComponent
    {
        static constexpr std::string_view Name = "JunoSyncTimeOfDayComponent";
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

    struct JunoSyncWeatherComponent
    {
        static constexpr std::string_view Name = "JunoSyncWeatherComponent";
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

    struct JunoTargetTeleporterGeneratorInterface
    {
        static constexpr std::string_view Name = "JunoTargetTeleporterGeneratorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoTeamStart
    {
        static constexpr std::string_view Name = "JunoTeamStart";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerStart";
        struct Offsets
        {
            static constexpr std::uintptr_t IdentifierTag = 0x2A8;
            static constexpr std::uintptr_t CapsuleRadius = 0x2C8;
            static constexpr std::uintptr_t CapsuleHeight = 0x2CC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"IdentifierTag", 0x2A8, "StructProperty"},
            {"CapsuleRadius", 0x2C8, "FloatProperty"},
            {"CapsuleHeight", 0x2CC, "FloatProperty"},
        }};
    };

    struct JunoTeleportInterface
    {
        static constexpr std::string_view Name = "JunoTeleportInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoTeleporter
    {
        static constexpr std::string_view Name = "JunoTeleporter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingProp";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetTeleporter = 0xB48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TargetTeleporter", 0xB48, "WeakObjectProperty"},
        }};
    };

    struct JunoTemperatureAttributeSet
    {
        static constexpr std::string_view Name = "JunoTemperatureAttributeSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t BlockedTemperatures = 0x48;
            static constexpr std::uintptr_t Temperature = 0x68;
            static constexpr std::uintptr_t ColdResistance = 0x90;
            static constexpr std::uintptr_t HeatResistance = 0xB8;
            static constexpr std::uintptr_t CurrentTemperature = 0xE0;
            static constexpr std::uintptr_t TemperatureRanges = 0xE8;
            static constexpr std::uintptr_t OnTemperatureChanged = 0xF8;
            static constexpr std::uintptr_t OnTemperatureRangesChanged = 0x108;
            static constexpr std::uintptr_t bAddTemperatureTagToActor = 0x118;
            static constexpr std::uintptr_t ForcedTemperature = 0x11C;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"BlockedTemperatures", 0x48, "StructProperty"},
            {"Temperature", 0x68, "StructProperty"},
            {"ColdResistance", 0x90, "StructProperty"},
            {"HeatResistance", 0xB8, "StructProperty"},
            {"CurrentTemperature", 0xE0, "StructProperty"},
            {"TemperatureRanges", 0xE8, "ArrayProperty"},
            {"OnTemperatureChanged", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnTemperatureRangesChanged", 0x108, "MulticastInlineDelegateProperty"},
            {"bAddTemperatureTagToActor", 0x118, "BoolProperty"},
            {"ForcedTemperature", 0x11C, "StructProperty"},
        }};
    };

    struct JunoTemperatureComponent
    {
        static constexpr std::string_view Name = "JunoTemperatureComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TemperatureAttributeSet = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TemperatureAttributeSet", 0xC0, "WeakObjectProperty"},
        }};
    };

    struct JunoTexture2DPersistenceAssetType
    {
        static constexpr std::string_view Name = "JunoTexture2DPersistenceAssetType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPersistenceAssetType";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoTokenHandlerAIComponent
    {
        static constexpr std::string_view Name = "JunoTokenHandlerAIComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
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

    struct JunoTokenReceiver
    {
        static constexpr std::string_view Name = "JunoTokenReceiver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoToyAttachmentFixupComponent
    {
        static constexpr std::string_view Name = "JunoToyAttachmentFixupComponent";
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

    struct JunoTransientInventorySourceComponent
    {
        static constexpr std::string_view Name = "JunoTransientInventorySourceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
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

    struct JunoUGCActorInterface
    {
        static constexpr std::string_view Name = "JunoUGCActorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoUIHealthBarLocationInterface
    {
        static constexpr std::string_view Name = "JunoUIHealthBarLocationInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoUIHealthInterface
    {
        static constexpr std::string_view Name = "JunoUIHealthInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoUserGeneratedTextPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoUserGeneratedTextPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t UserGeneratedTextSaveData = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UserGeneratedTextSaveData", 0x58, "StructProperty"},
        }};
    };

    struct JunoUserGeneratedTextPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoUserGeneratedTextPersistenceFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoUserGeneratedTextPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoUserGeneratedTextPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoVerbProcessor_AssignPhysicsToyChannel
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_AssignPhysicsToyChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_AwesomeLevelIncreased
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_AwesomeLevelIncreased";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_BattleBusBoarded
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_BattleBusBoarded";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_CreatureFed
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_CreatureFed";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_CreaturePet
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_CreaturePet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_EnteredVillage
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_EnteredVillage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_EquipmentChanged
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_EquipmentChanged";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_FirstPlayerMatchStarted
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_FirstPlayerMatchStarted";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_FocalPointLevelChanged
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_FocalPointLevelChanged";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_GuidedBuildCompleted
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_GuidedBuildCompleted";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_GuidedBuildStageCompleted
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_GuidedBuildStageCompleted";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_HappinessStateChanged
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_HappinessStateChanged";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_HappinessValueChanged
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_HappinessValueChanged";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_PartAttachmentChanged
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_PartAttachmentChanged";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_PlayerTier
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_PlayerTier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_RecipeStateChanged
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_RecipeStateChanged";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_RecruitCreature
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_RecruitCreature";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_RecruitNPC
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_RecruitNPC";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_RelationshipStateChanged
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_RelationshipStateChanged";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_TemperatureUpdated
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_TemperatureUpdated";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVerbProcessor_UpdatePhysicsToyChannelValue
    {
        static constexpr std::string_view Name = "JunoVerbProcessor_UpdatePhysicsToyChannelValue";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortObjectiveProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t VerbListenerHandles = 0x28;
            static constexpr std::uintptr_t OwningProcessorSubsystem = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VerbListenerHandles", 0x28, "ArrayProperty"},
            {"OwningProcessorSubsystem", 0x38, "ObjectProperty"},
        }};
    };

    struct JunoVillageTypeConfigMappings
    {
        static constexpr std::string_view Name = "JunoVillageTypeConfigMappings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t VillageTypeConfigRegistryType = 0x28;
            static constexpr std::uintptr_t DefaultConfig = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VillageTypeConfigRegistryType", 0x28, "StructProperty"},
            {"DefaultConfig", 0x50, "StructProperty"},
        }};
    };

    struct JunoVillageTypeDatabaseComponent
    {
        static constexpr std::string_view Name = "JunoVillageTypeDatabaseComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t VillageTypeConfigMappings = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VillageTypeConfigMappings", 0x118, "ObjectProperty"},
        }};
    };

    struct JunoVisitorEndConditionSchema
    {
        static constexpr std::string_view Name = "JunoVisitorEndConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct JunoWaitForPlayerPersistence
    {
        static constexpr std::string_view Name = "JunoWaitForPlayerPersistence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerState = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlayerState", 0xA0, "WeakObjectProperty"},
        }};
    };

    struct JunoWeaponAIRangedMultiFireAbility
    {
        static constexpr std::string_view Name = "JunoWeaponAIRangedMultiFireAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponRanged";
        struct Offsets
        {
            static constexpr std::uintptr_t OnProjectileSpawned = 0x1A70;
            static constexpr std::uintptr_t OnRecoilAdded = 0x1A80;
            static constexpr std::uintptr_t OnBulletTracerNiagaraDataSent = 0x1A90;
            static constexpr std::uintptr_t OnBulletTracerBeamFXActivated = 0x1AA0;
            static constexpr std::uintptr_t ReplayActivationCue = 0x1AC8;
            static constexpr std::uintptr_t ReplayImpactCue = 0x1BA0;
            static constexpr std::uintptr_t PlayDelayedRecoilTimerHandle = 0x1C80;
            static constexpr std::uintptr_t PlayDelayedFiringAnimationTimerHandle = 0x1C90;
            static constexpr std::uintptr_t PlayDelayedSpreadTimerHandle = 0x1CA0;
            static constexpr std::uintptr_t bLWPNudgeHitOrigin = 0x1CB0;
            static constexpr std::uintptr_t LWPNudgeHitDistance = 0x1CB8;
            static constexpr std::uintptr_t TracerFXDataChannel = 0x1CE8;
            static constexpr std::uintptr_t NDCTracerFx = 0x1CF0;
            static constexpr std::uintptr_t MuzzleFXData = 0x1E28;
            static constexpr std::uintptr_t HitscanTracerFakeVelocity = 0x1ED8;
            static constexpr std::uintptr_t TracerTemplate = 0x1EE0;
            static constexpr std::uintptr_t bAllowAutomaticWeaponCatchup = 0x1EE8;
            static constexpr std::uintptr_t LocalFireRateModification = 0x1F08;
            static constexpr std::uintptr_t CurrentNumBullets = 0x1F0C;
            static constexpr std::uintptr_t ScopeTargetingMuzzleOffset = 0x1F10;
            static constexpr std::uintptr_t CurrentMuzzleBlockedLocation = 0x1F28;
            static constexpr std::uintptr_t CurrentDamageStart = 0x1F40;
            static constexpr std::uintptr_t MaxTargetingAimAdjustment = 0x1F48;
            static constexpr std::uintptr_t bAimFromMuzzleAtCloseRange = 0x1F60;
            static constexpr std::uintptr_t bAnchorReticleCenter = 0x1F60;
            static constexpr std::uintptr_t bHideAmmoCounterDuringTargeting = 0x1F60;
            static constexpr std::uintptr_t bShouldDisplayAmmoCounter = 0x1F60;
            static constexpr std::uintptr_t bShouldDisplayAmmoCounterDuringSecondaryFire = 0x1F60;
            static constexpr std::uintptr_t bShouldDisplayReticleAmmoCounter = 0x1F60;
            static constexpr std::uintptr_t bShouldHideMagazineAmmo = 0x1F60;
            static constexpr std::uintptr_t bShouldHideReserveAmmo = 0x1F60;
            static constexpr std::uintptr_t bAlwaysAimFromMuzzle = 0x1F61;
            static constexpr std::uintptr_t bAutoReloadBlocksManualReload = 0x1F61;
            static constexpr std::uintptr_t bShouldAimFromMuzzleAtCloseRange = 0x1F61;
            static constexpr std::uintptr_t bAllowTrySecondaryFireDuringReload = 0x1F62;
            static constexpr std::uintptr_t bDisableTargetingForHipFireFirstPerson = 0x1F63;
            static constexpr std::uintptr_t bMaintainAimLocationDuringTargeting = 0x1F63;
            static constexpr std::uintptr_t bUseFirstPersonTargeting = 0x1F63;
            static constexpr std::uintptr_t bUseScopeTargeting = 0x1F63;
            static constexpr std::uintptr_t HipFireFirstPersonMeshFOV = 0x1F64;
            static constexpr std::uintptr_t bUseScopedThirdPersonTargeting = 0x1F74;
            static constexpr std::uintptr_t ADSFireHeadToHandDistance = 0x1F7C;
            static constexpr std::uintptr_t bActivateRangeAbilityPerBurstShot = 0x1F80;
            static constexpr std::uintptr_t bPersistentFireFX = 0x1F80;
            static constexpr std::uintptr_t bSendSingleFireEventForLoopingMetaSoundWeapons = 0x1F80;
            static constexpr std::uintptr_t bUseBeamParticles = 0x1F80;
            static constexpr std::uintptr_t bUseImpactDecals = 0x1F80;
            static constexpr std::uintptr_t bUseImpactFXForProjectileOverlaps = 0x1F80;
            static constexpr std::uintptr_t bUseImpactFXForProjectiles = 0x1F80;
            static constexpr std::uintptr_t bUsePersistentBeam = 0x1F80;
            static constexpr std::uintptr_t bUseOverrideBaseSpread = 0x1F81;
            static constexpr std::uintptr_t bUseOverrideSpreadDownsightsMultiplier = 0x1F81;
            static constexpr std::uintptr_t bUseShellsParticles = 0x1F81;
            static constexpr std::uintptr_t bUseTracers = 0x1F81;
            static constexpr std::uintptr_t bIsMuzzleTraceNearWall = 0x1F82;
            static constexpr std::uintptr_t MaxMuzzleAimCameraAimHeadingAngleDifferenceDegrees = 0x1F84;
            static constexpr std::uintptr_t AimPitchMin = 0x1F88;
            static constexpr std::uintptr_t AimPitchMax = 0x1F8C;
            static constexpr std::uintptr_t MuzzleTraceNearWallThreshold = 0x1F90;
            static constexpr std::uintptr_t BeamSignificance = 0x1F9C;
            static constexpr std::uintptr_t ImpactSignificance = 0x1FB4;
            static constexpr std::uintptr_t DecalSignificance = 0x1FCC;
            static constexpr std::uintptr_t ScopeImpactEffectDistanceOffset = 0x1FE4;
            static constexpr std::uintptr_t MuzzlePSC = 0x1FE8;
            static constexpr std::uintptr_t ShellPSCMap = 0x1FF0;
            static constexpr std::uintptr_t BeamParticleSystem = 0x2000;
            static constexpr std::uintptr_t BeamNiagaraSystemAsset = 0x2008;
            static constexpr std::uintptr_t BeamSourceSocketName = 0x2028;
            static constexpr std::uintptr_t FortSpawnPropOverride = 0x2030;
            static constexpr std::uintptr_t FortSpawnPropAnimOverride = 0x2038;
            static constexpr std::uintptr_t DecalSizeMin = 0x2040;
            static constexpr std::uintptr_t DecalSizeMax = 0x2058;
            static constexpr std::uintptr_t DecalLifespanMin = 0x2070;
            static constexpr std::uintptr_t DecalLifespanMax = 0x2074;
            static constexpr std::uintptr_t DecalColorStart = 0x2078;
            static constexpr std::uintptr_t DecalColorEnd = 0x2088;
            static constexpr std::uintptr_t DecalMaterial = 0x2098;
            static constexpr std::uintptr_t DecalTexture = 0x20A0;
            static constexpr std::uintptr_t SurfaceAcceptingDecals = 0x20A8;
            static constexpr std::uintptr_t ShellReloadCounter = 0x20BC;
            static constexpr std::uintptr_t MaxTargetingAimAdjustPerSecond = 0x2108;
            static constexpr std::uintptr_t ScopePostProcessEnabled = 0x2348;
            static constexpr std::uintptr_t ScopePostProcessBlendWeight = 0x234C;
            static constexpr std::uintptr_t ScopePostProcessMaterial = 0x2350;
            static constexpr std::uintptr_t ScopePostProcessMaterialFromOptic = 0x2360;
            static constexpr std::uintptr_t LWPSpawnDirectionAdjustmentStrengthOverride = 0x2378;
            static constexpr std::uintptr_t LWPDirectionAdjustmentMaxAngleOverride = 0x237C;
            static constexpr std::uintptr_t bSendChargeSnapshotWithShot = 0x2380;
            static constexpr std::uintptr_t BulletPattern = 0x2388;
            static constexpr std::uintptr_t AltBulletPattern = 0x2398;
            static constexpr std::uintptr_t RampingFireRateData = 0x23A8;
            static constexpr std::uintptr_t EnemyWarningWeaponImpactSFX = 0x2530;
            static constexpr std::uintptr_t LastFiredInterval = 0x25D4;
            static constexpr std::uintptr_t BeamNiagaraSystem = 0x25D8;
            static constexpr std::uintptr_t bUseAthenaRecoil = 0x2658;
            static constexpr std::uintptr_t bFirstShotAccuracyCheckVehicleMovement = 0x2659;
            static constexpr std::uintptr_t bUseAthenaPerfectADSAim = 0x2659;
            static constexpr std::uintptr_t FirstShotAccuracyMinWaitTime = 0x265C;
            static constexpr std::uintptr_t BulletCountForPerBulletRecoil = 0x2660;
            static constexpr std::uintptr_t RecoilProcessingShotCounter = 0x2664;
            static constexpr std::uintptr_t RecoilTimingCounter = 0x2668;
            static constexpr std::uintptr_t BulletCountForPerBulletSpread = 0x266C;
            static constexpr std::uintptr_t TimeRemainingForBulletSpread = 0x2670;
            static constexpr std::uintptr_t FireAnimation = 0x2700;
            static constexpr std::uintptr_t FireDownsightsAnimation = 0x2708;
            static constexpr std::uintptr_t bShouldOverrideFireAnimation = 0x2710;
            static constexpr std::uintptr_t FireFromCrouchWalkAnimation = 0x2718;
            static constexpr std::uintptr_t CockingAnimation = 0x2720;
            static constexpr std::uintptr_t WeaponFireMontage = 0x2728;
            static constexpr std::uintptr_t WeaponFireDownsightsMontage = 0x2730;
            static constexpr std::uintptr_t WeaponFireFromCrouchWalkMontage = 0x2738;
            static constexpr std::uintptr_t WeaponCockingMontage = 0x2740;
            static constexpr std::uintptr_t BeamPSC = 0x2748;
            static constexpr std::uintptr_t bTracerFXSupportsMultipleSequentialTracers = 0x2750;
            static constexpr std::uintptr_t bTracerFXSupportsMultipleSimultaneousTracers = 0x2750;
            static constexpr std::uintptr_t TracerBeamFX = 0x2758;
            static constexpr std::uintptr_t CrouchWalkSpeedThreshold = 0x2760;
            static constexpr std::uintptr_t bEnableRecoilDelay = 0x2764;
            static constexpr std::uintptr_t ReticleSpreadZeroingDistanceFromMuzzle = 0x2768;
            static constexpr std::uintptr_t OnScopedThirdPersonTargetingChanged = 0x2780;
            static constexpr std::uintptr_t OnOverheatValueChanged = 0x27D0;
            static constexpr std::uintptr_t OverheatState = 0x27E0;
            static constexpr std::uintptr_t OverheatSyncData = 0x27E4;
            static constexpr std::uintptr_t OverheatedAnimation = 0x27F0;
            static constexpr std::uintptr_t WeaponOverheatedAnimation = 0x27F8;
            static constexpr std::uintptr_t bCooldownWhileOverheated = 0x2800;
            static constexpr std::uintptr_t bShouldDisplayReticleOverheatIndicator = 0x2801;
            static constexpr std::uintptr_t bAllowAutoProxyOverheatSimulation = 0x2802;
            static constexpr std::uintptr_t OverheatValue = 0x2804;
            static constexpr std::uintptr_t TimeHeatWasLastAdded = 0x2810;
            static constexpr std::uintptr_t TimeOverheatedBegan = 0x2814;
            static constexpr std::uintptr_t OverheatValueWhenVentingBegan = 0x2818;
            static constexpr std::uintptr_t bIsManuallyVentingWeapon = 0x281C;
            static constexpr std::uintptr_t LWProjectile_DamageStart = 0x2830;
            static constexpr std::uintptr_t LWProjectile_DamageDirection = 0x2848;
            static constexpr std::uintptr_t LWProjectile_ActivateRemovedTimestamp = 0x2860;
            static constexpr std::uintptr_t bCacheAimPointOnFire = 0x2901;
            static constexpr std::uintptr_t CachedAimPoint = 0x2908;
            static constexpr std::uintptr_t CustomFiringSequenceLength = 0x2920;
            static constexpr std::uintptr_t CustomFiringSequenceMinTimeBetween = 0x2924;
            static constexpr std::uintptr_t CachedLODSettingsManager = 0x2930;
            static constexpr std::uintptr_t bUseTargetingBasedLOD = 0x2968;
            static constexpr std::uintptr_t ScopeRailMaterialIndex = 0x296C;
            static constexpr std::uintptr_t HideScopeRailMaterialParameterName = 0x2970;
        };

        inline static constexpr std::array<PropertyInfo, 144> Properties{{
            {"OnProjectileSpawned", 0x1A70, "MulticastInlineDelegateProperty"},
            {"OnRecoilAdded", 0x1A80, "MulticastInlineDelegateProperty"},
            {"OnBulletTracerNiagaraDataSent", 0x1A90, "MulticastInlineDelegateProperty"},
            {"OnBulletTracerBeamFXActivated", 0x1AA0, "MulticastInlineDelegateProperty"},
            {"ReplayActivationCue", 0x1AC8, "StructProperty"},
            {"ReplayImpactCue", 0x1BA0, "StructProperty"},
            {"PlayDelayedRecoilTimerHandle", 0x1C80, "StructProperty"},
            {"PlayDelayedFiringAnimationTimerHandle", 0x1C90, "StructProperty"},
            {"PlayDelayedSpreadTimerHandle", 0x1CA0, "StructProperty"},
            {"bLWPNudgeHitOrigin", 0x1CB0, "BoolProperty"},
            {"LWPNudgeHitDistance", 0x1CB8, "StructProperty"},
            {"TracerFXDataChannel", 0x1CE8, "ObjectProperty"},
            {"NDCTracerFx", 0x1CF0, "StructProperty"},
            {"MuzzleFXData", 0x1E28, "StructProperty"},
            {"HitscanTracerFakeVelocity", 0x1ED8, "FloatProperty"},
            {"TracerTemplate", 0x1EE0, "ClassProperty"},
            {"bAllowAutomaticWeaponCatchup", 0x1EE8, "BoolProperty"},
            {"LocalFireRateModification", 0x1F08, "FloatProperty"},
            {"CurrentNumBullets", 0x1F0C, "IntProperty"},
            {"ScopeTargetingMuzzleOffset", 0x1F10, "StructProperty"},
            {"CurrentMuzzleBlockedLocation", 0x1F28, "StructProperty"},
            {"CurrentDamageStart", 0x1F40, "EnumProperty"},
            {"MaxTargetingAimAdjustment", 0x1F48, "StructProperty"},
            {"bAimFromMuzzleAtCloseRange", 0x1F60, "BoolProperty"},
            {"bAnchorReticleCenter", 0x1F60, "BoolProperty"},
            {"bHideAmmoCounterDuringTargeting", 0x1F60, "BoolProperty"},
            {"bShouldDisplayAmmoCounter", 0x1F60, "BoolProperty"},
            {"bShouldDisplayAmmoCounterDuringSecondaryFire", 0x1F60, "BoolProperty"},
            {"bShouldDisplayReticleAmmoCounter", 0x1F60, "BoolProperty"},
            {"bShouldHideMagazineAmmo", 0x1F60, "BoolProperty"},
            {"bShouldHideReserveAmmo", 0x1F60, "BoolProperty"},
            {"bAlwaysAimFromMuzzle", 0x1F61, "BoolProperty"},
            {"bAutoReloadBlocksManualReload", 0x1F61, "BoolProperty"},
            {"bShouldAimFromMuzzleAtCloseRange", 0x1F61, "BoolProperty"},
            {"bAllowTrySecondaryFireDuringReload", 0x1F62, "BoolProperty"},
            {"bDisableTargetingForHipFireFirstPerson", 0x1F63, "BoolProperty"},
            {"bMaintainAimLocationDuringTargeting", 0x1F63, "BoolProperty"},
            {"bUseFirstPersonTargeting", 0x1F63, "BoolProperty"},
            {"bUseScopeTargeting", 0x1F63, "BoolProperty"},
            {"HipFireFirstPersonMeshFOV", 0x1F64, "FloatProperty"},
            {"bUseScopedThirdPersonTargeting", 0x1F74, "BoolProperty"},
            {"ADSFireHeadToHandDistance", 0x1F7C, "FloatProperty"},
            {"bActivateRangeAbilityPerBurstShot", 0x1F80, "BoolProperty"},
            {"bPersistentFireFX", 0x1F80, "BoolProperty"},
            {"bSendSingleFireEventForLoopingMetaSoundWeapons", 0x1F80, "BoolProperty"},
            {"bUseBeamParticles", 0x1F80, "BoolProperty"},
            {"bUseImpactDecals", 0x1F80, "BoolProperty"},
            {"bUseImpactFXForProjectileOverlaps", 0x1F80, "BoolProperty"},
            {"bUseImpactFXForProjectiles", 0x1F80, "BoolProperty"},
            {"bUsePersistentBeam", 0x1F80, "BoolProperty"},
            {"bUseOverrideBaseSpread", 0x1F81, "BoolProperty"},
            {"bUseOverrideSpreadDownsightsMultiplier", 0x1F81, "BoolProperty"},
            {"bUseShellsParticles", 0x1F81, "BoolProperty"},
            {"bUseTracers", 0x1F81, "BoolProperty"},
            {"bIsMuzzleTraceNearWall", 0x1F82, "BoolProperty"},
            {"MaxMuzzleAimCameraAimHeadingAngleDifferenceDegrees", 0x1F84, "FloatProperty"},
            {"AimPitchMin", 0x1F88, "FloatProperty"},
            {"AimPitchMax", 0x1F8C, "FloatProperty"},
            {"MuzzleTraceNearWallThreshold", 0x1F90, "FloatProperty"},
            {"BeamSignificance", 0x1F9C, "StructProperty"},
            {"ImpactSignificance", 0x1FB4, "StructProperty"},
            {"DecalSignificance", 0x1FCC, "StructProperty"},
            {"ScopeImpactEffectDistanceOffset", 0x1FE4, "FloatProperty"},
            {"MuzzlePSC", 0x1FE8, "ObjectProperty"},
            {"ShellPSCMap", 0x1FF0, "MapProperty"},
            {"BeamParticleSystem", 0x2000, "ObjectProperty"},
            {"BeamNiagaraSystemAsset", 0x2008, "SoftObjectProperty"},
            {"BeamSourceSocketName", 0x2028, "NameProperty"},
            {"FortSpawnPropOverride", 0x2030, "ObjectProperty"},
            {"FortSpawnPropAnimOverride", 0x2038, "ObjectProperty"},
            {"DecalSizeMin", 0x2040, "StructProperty"},
            {"DecalSizeMax", 0x2058, "StructProperty"},
            {"DecalLifespanMin", 0x2070, "FloatProperty"},
            {"DecalLifespanMax", 0x2074, "FloatProperty"},
            {"DecalColorStart", 0x2078, "StructProperty"},
            {"DecalColorEnd", 0x2088, "StructProperty"},
            {"DecalMaterial", 0x2098, "ObjectProperty"},
            {"DecalTexture", 0x20A0, "ObjectProperty"},
            {"SurfaceAcceptingDecals", 0x20A8, "ArrayProperty"},
            {"ShellReloadCounter", 0x20BC, "IntProperty"},
            {"MaxTargetingAimAdjustPerSecond", 0x2108, "StructProperty"},
            {"ScopePostProcessEnabled", 0x2348, "BoolProperty"},
            {"ScopePostProcessBlendWeight", 0x234C, "FloatProperty"},
            {"ScopePostProcessMaterial", 0x2350, "ArrayProperty"},
            {"ScopePostProcessMaterialFromOptic", 0x2360, "ArrayProperty"},
            {"LWPSpawnDirectionAdjustmentStrengthOverride", 0x2378, "FloatProperty"},
            {"LWPDirectionAdjustmentMaxAngleOverride", 0x237C, "FloatProperty"},
            {"bSendChargeSnapshotWithShot", 0x2380, "BoolProperty"},
            {"BulletPattern", 0x2388, "ArrayProperty"},
            {"AltBulletPattern", 0x2398, "ArrayProperty"},
            {"RampingFireRateData", 0x23A8, "StructProperty"},
            {"EnemyWarningWeaponImpactSFX", 0x2530, "ObjectProperty"},
            {"LastFiredInterval", 0x25D4, "FloatProperty"},
            {"BeamNiagaraSystem", 0x25D8, "ObjectProperty"},
            {"bUseAthenaRecoil", 0x2658, "BoolProperty"},
            {"bFirstShotAccuracyCheckVehicleMovement", 0x2659, "BoolProperty"},
            {"bUseAthenaPerfectADSAim", 0x2659, "BoolProperty"},
            {"FirstShotAccuracyMinWaitTime", 0x265C, "FloatProperty"},
            {"BulletCountForPerBulletRecoil", 0x2660, "FloatProperty"},
            {"RecoilProcessingShotCounter", 0x2664, "FloatProperty"},
            {"RecoilTimingCounter", 0x2668, "FloatProperty"},
            {"BulletCountForPerBulletSpread", 0x266C, "FloatProperty"},
            {"TimeRemainingForBulletSpread", 0x2670, "FloatProperty"},
            {"FireAnimation", 0x2700, "ObjectProperty"},
            {"FireDownsightsAnimation", 0x2708, "ObjectProperty"},
            {"bShouldOverrideFireAnimation", 0x2710, "BoolProperty"},
            {"FireFromCrouchWalkAnimation", 0x2718, "ObjectProperty"},
            {"CockingAnimation", 0x2720, "ObjectProperty"},
            {"WeaponFireMontage", 0x2728, "ObjectProperty"},
            {"WeaponFireDownsightsMontage", 0x2730, "ObjectProperty"},
            {"WeaponFireFromCrouchWalkMontage", 0x2738, "ObjectProperty"},
            {"WeaponCockingMontage", 0x2740, "ObjectProperty"},
            {"BeamPSC", 0x2748, "ObjectProperty"},
            {"bTracerFXSupportsMultipleSequentialTracers", 0x2750, "BoolProperty"},
            {"bTracerFXSupportsMultipleSimultaneousTracers", 0x2750, "BoolProperty"},
            {"TracerBeamFX", 0x2758, "ObjectProperty"},
            {"CrouchWalkSpeedThreshold", 0x2760, "FloatProperty"},
            {"bEnableRecoilDelay", 0x2764, "BoolProperty"},
            {"ReticleSpreadZeroingDistanceFromMuzzle", 0x2768, "FloatProperty"},
            {"OnScopedThirdPersonTargetingChanged", 0x2780, "MulticastInlineDelegateProperty"},
            {"OnOverheatValueChanged", 0x27D0, "MulticastInlineDelegateProperty"},
            {"OverheatState", 0x27E0, "EnumProperty"},
            {"OverheatSyncData", 0x27E4, "StructProperty"},
            {"OverheatedAnimation", 0x27F0, "ObjectProperty"},
            {"WeaponOverheatedAnimation", 0x27F8, "ObjectProperty"},
            {"bCooldownWhileOverheated", 0x2800, "BoolProperty"},
            {"bShouldDisplayReticleOverheatIndicator", 0x2801, "BoolProperty"},
            {"bAllowAutoProxyOverheatSimulation", 0x2802, "BoolProperty"},
            {"OverheatValue", 0x2804, "FloatProperty"},
            {"TimeHeatWasLastAdded", 0x2810, "FloatProperty"},
            {"TimeOverheatedBegan", 0x2814, "FloatProperty"},
            {"OverheatValueWhenVentingBegan", 0x2818, "FloatProperty"},
            {"bIsManuallyVentingWeapon", 0x281C, "BoolProperty"},
            {"LWProjectile_DamageStart", 0x2830, "StructProperty"},
            {"LWProjectile_DamageDirection", 0x2848, "StructProperty"},
            {"LWProjectile_ActivateRemovedTimestamp", 0x2860, "FloatProperty"},
            {"bCacheAimPointOnFire", 0x2901, "BoolProperty"},
            {"CachedAimPoint", 0x2908, "StructProperty"},
            {"CustomFiringSequenceLength", 0x2920, "IntProperty"},
            {"CustomFiringSequenceMinTimeBetween", 0x2924, "FloatProperty"},
            {"CachedLODSettingsManager", 0x2930, "InterfaceProperty"},
            {"bUseTargetingBasedLOD", 0x2968, "BoolProperty"},
            {"ScopeRailMaterialIndex", 0x296C, "IntProperty"},
            {"HideScopeRailMaterialParameterName", 0x2970, "NameProperty"},
        }};
    };

    struct JunoWeaponAbility
    {
        static constexpr std::string_view Name = "JunoWeaponAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t ActivationType = 0x3A8;
            static constexpr std::uintptr_t EffectContainers = 0x3B0;
            static constexpr std::uintptr_t GameplayEffectContainers = 0x748;
            static constexpr std::uintptr_t DynamicGameplayEffectContainers = 0x758;
            static constexpr std::uintptr_t OwnerPreviewImageOverrideTags = 0x768;
            static constexpr std::uintptr_t ProjectileClass = 0x788;
            static constexpr std::uintptr_t bAllowBlueprintReplicatedVariables = 0x790;
            static constexpr std::uintptr_t DamageStatHandle = 0x798;
            static constexpr std::uintptr_t AbilityCosts = 0x7A8;
            static constexpr std::uintptr_t Costs = 0x7B8;
            static constexpr std::uintptr_t bApplyingCostsEnabled = 0x7C8;
            static constexpr std::uintptr_t bShowWidgetForCosts = 0x7C8;
            static constexpr std::uintptr_t MovementCancellationLeashLength = 0x7D0;
            static constexpr std::uintptr_t ExplicitCooldownDuration = 0x7F8;
            static constexpr std::uintptr_t ExplicitCooldownTags = 0x820;
            static constexpr std::uintptr_t ExplicitCooldownAssetTags = 0x840;
            static constexpr std::uintptr_t CustomFiringSequenceLength = 0x860;
            static constexpr std::uintptr_t bDisableMoveCombining = 0x864;
            static constexpr std::uintptr_t bIgnoreClientActivationAttempts = 0x864;
            static constexpr std::uintptr_t bPersistOnDeath = 0x864;
            static constexpr std::uintptr_t bRequireServerTimeValidationPass = 0x864;
            static constexpr std::uintptr_t bRequireServerValidationPass = 0x864;
            static constexpr std::uintptr_t bStartWithCooldown = 0x864;
            static constexpr std::uintptr_t bStopsAIBehaviorLogic = 0x864;
            static constexpr std::uintptr_t bStopsAIMovement = 0x864;
            static constexpr std::uintptr_t bForceNormalAILOD = 0x865;
            static constexpr std::uintptr_t bStopsRVOAvoidance = 0x865;
            static constexpr std::uintptr_t MinimumRequiredAILODLevel = 0x868;
            static constexpr std::uintptr_t bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests = 0x86C;
            static constexpr std::uintptr_t bAcceptTargetActorVehicleForCanHitTests = 0x86C;
            static constexpr std::uintptr_t bRelevantForAIDespawning = 0x86C;
            static constexpr std::uintptr_t bUseOwnerInstigatorAsInstigator = 0x86C;
            static constexpr std::uintptr_t bUseTetheredPawnAsInstigator = 0x86C;
            static constexpr std::uintptr_t bUseAIFireLocationAndRotation = 0x86D;
            static constexpr std::uintptr_t AIWeaponUsage = 0x870;
            static constexpr std::uintptr_t WeaponTestApplicationTag = 0x874;
            static constexpr std::uintptr_t bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling = 0x878;
            static constexpr std::uintptr_t bCanHitIgnoresNonzeroTranslationOffsetsForNavigationRaycast = 0x878;
            static constexpr std::uintptr_t bVerifyFireOffsetIsNotObstructedByWorldGeometry = 0x878;
            static constexpr std::uintptr_t FireOffset = 0x880;
            static constexpr std::uintptr_t ActivationNoiseRange = 0x898;
            static constexpr std::uintptr_t ImpactNoiseRange = 0x89C;
            static constexpr std::uintptr_t ActivationNoiseLoudness = 0x8A0;
            static constexpr std::uintptr_t ImpactNoiseLoudness = 0x8A4;
            static constexpr std::uintptr_t ProhibitedTargetTags = 0x8A8;
            static constexpr std::uintptr_t bLeadPawnTargets = 0x8C9;
            static constexpr std::uintptr_t DesiredThrowAngle = 0x8CC;
            static constexpr std::uintptr_t MaxYawAngleToFire = 0x8D0;
            static constexpr std::uintptr_t bClampMaxYawAngleToFire = 0x8D4;
            static constexpr std::uintptr_t bUseTargetActorLocation = 0x8D5;
            static constexpr std::uintptr_t InitialAccuracyMax = 0x8D8;
            static constexpr std::uintptr_t InitialAccuracyMin = 0x8DC;
            static constexpr std::uintptr_t TargetAccuracyMax = 0x8E0;
            static constexpr std::uintptr_t TargetAccuracyMin = 0x8E4;
            static constexpr std::uintptr_t MinAccuracyDistance = 0x8E8;
            static constexpr std::uintptr_t MaxAccuracyDistance = 0x8EC;
            static constexpr std::uintptr_t AccuracyDistanceMultiplier = 0x8F0;
            static constexpr std::uintptr_t NumUsesToReachTargetAccuracy = 0x8F4;
            static constexpr std::uintptr_t UseCount = 0x8F8;
            static constexpr std::uintptr_t bIsMobileToggle = 0x8FC;
            static constexpr std::uintptr_t bActivateIfTagsAlreadyPresent = 0x8FD;
            static constexpr std::uintptr_t GameplayAbilityBehaviorDistanceData = 0x908;
            static constexpr std::uintptr_t MontageInfo = 0x978;
            static constexpr std::uintptr_t PreviousMontageInfo = 0x9D0;
            static constexpr std::uintptr_t ModList = 0xA28;
            static constexpr std::uintptr_t AbilityWeapon = 0xA38;
            static constexpr std::uintptr_t DisplayName = 0xA40;
            static constexpr std::uintptr_t Description = 0xA50;
            static constexpr std::uintptr_t SmallPreviewImageOverride = 0xA68;
            static constexpr std::uintptr_t ChargeStartTime = 0xA80;
            static constexpr std::uintptr_t ChargeState = 0xA88;
            static constexpr std::uintptr_t ToolTip = 0xAD0;
            static constexpr std::uintptr_t StatList = 0xAD8;
            static constexpr std::uintptr_t ActorTrackingSettings = 0xAE8;
            static constexpr std::uintptr_t AnalyticsTags = 0xB10;
            static constexpr std::uintptr_t TagChangedActions = 0xB30;
        };

        inline static constexpr std::array<PropertyInfo, 76> Properties{{
            {"ActivationType", 0x3A8, "EnumProperty"},
            {"EffectContainers", 0x3B0, "StructProperty"},
            {"GameplayEffectContainers", 0x748, "ArrayProperty"},
            {"DynamicGameplayEffectContainers", 0x758, "MapProperty"},
            {"OwnerPreviewImageOverrideTags", 0x768, "StructProperty"},
            {"ProjectileClass", 0x788, "ClassProperty"},
            {"bAllowBlueprintReplicatedVariables", 0x790, "BoolProperty"},
            {"DamageStatHandle", 0x798, "StructProperty"},
            {"AbilityCosts", 0x7A8, "ArrayProperty"},
            {"Costs", 0x7B8, "ArrayProperty"},
            {"bApplyingCostsEnabled", 0x7C8, "BoolProperty"},
            {"bShowWidgetForCosts", 0x7C8, "BoolProperty"},
            {"MovementCancellationLeashLength", 0x7D0, "StructProperty"},
            {"ExplicitCooldownDuration", 0x7F8, "StructProperty"},
            {"ExplicitCooldownTags", 0x820, "StructProperty"},
            {"ExplicitCooldownAssetTags", 0x840, "StructProperty"},
            {"CustomFiringSequenceLength", 0x860, "ByteProperty"},
            {"bDisableMoveCombining", 0x864, "BoolProperty"},
            {"bIgnoreClientActivationAttempts", 0x864, "BoolProperty"},
            {"bPersistOnDeath", 0x864, "BoolProperty"},
            {"bRequireServerTimeValidationPass", 0x864, "BoolProperty"},
            {"bRequireServerValidationPass", 0x864, "BoolProperty"},
            {"bStartWithCooldown", 0x864, "BoolProperty"},
            {"bStopsAIBehaviorLogic", 0x864, "BoolProperty"},
            {"bStopsAIMovement", 0x864, "BoolProperty"},
            {"bForceNormalAILOD", 0x865, "BoolProperty"},
            {"bStopsRVOAvoidance", 0x865, "BoolProperty"},
            {"MinimumRequiredAILODLevel", 0x868, "EnumProperty"},
            {"bAcceptActorOnSamePhysicsRootAsTargetSOForCanHitTests", 0x86C, "BoolProperty"},
            {"bAcceptTargetActorVehicleForCanHitTests", 0x86C, "BoolProperty"},
            {"bRelevantForAIDespawning", 0x86C, "BoolProperty"},
            {"bUseOwnerInstigatorAsInstigator", 0x86C, "BoolProperty"},
            {"bUseTetheredPawnAsInstigator", 0x86C, "BoolProperty"},
            {"bUseAIFireLocationAndRotation", 0x86D, "BoolProperty"},
            {"AIWeaponUsage", 0x870, "EnumProperty"},
            {"WeaponTestApplicationTag", 0x874, "StructProperty"},
            {"bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling", 0x878, "BoolProperty"},
            {"bCanHitIgnoresNonzeroTranslationOffsetsForNavigationRaycast", 0x878, "BoolProperty"},
            {"bVerifyFireOffsetIsNotObstructedByWorldGeometry", 0x878, "BoolProperty"},
            {"FireOffset", 0x880, "StructProperty"},
            {"ActivationNoiseRange", 0x898, "FloatProperty"},
            {"ImpactNoiseRange", 0x89C, "FloatProperty"},
            {"ActivationNoiseLoudness", 0x8A0, "FloatProperty"},
            {"ImpactNoiseLoudness", 0x8A4, "FloatProperty"},
            {"ProhibitedTargetTags", 0x8A8, "StructProperty"},
            {"bLeadPawnTargets", 0x8C9, "BoolProperty"},
            {"DesiredThrowAngle", 0x8CC, "FloatProperty"},
            {"MaxYawAngleToFire", 0x8D0, "FloatProperty"},
            {"bClampMaxYawAngleToFire", 0x8D4, "BoolProperty"},
            {"bUseTargetActorLocation", 0x8D5, "BoolProperty"},
            {"InitialAccuracyMax", 0x8D8, "FloatProperty"},
            {"InitialAccuracyMin", 0x8DC, "FloatProperty"},
            {"TargetAccuracyMax", 0x8E0, "FloatProperty"},
            {"TargetAccuracyMin", 0x8E4, "FloatProperty"},
            {"MinAccuracyDistance", 0x8E8, "FloatProperty"},
            {"MaxAccuracyDistance", 0x8EC, "FloatProperty"},
            {"AccuracyDistanceMultiplier", 0x8F0, "FloatProperty"},
            {"NumUsesToReachTargetAccuracy", 0x8F4, "IntProperty"},
            {"UseCount", 0x8F8, "IntProperty"},
            {"bIsMobileToggle", 0x8FC, "BoolProperty"},
            {"bActivateIfTagsAlreadyPresent", 0x8FD, "BoolProperty"},
            {"GameplayAbilityBehaviorDistanceData", 0x908, "ArrayProperty"},
            {"MontageInfo", 0x978, "StructProperty"},
            {"PreviousMontageInfo", 0x9D0, "StructProperty"},
            {"ModList", 0xA28, "ArrayProperty"},
            {"AbilityWeapon", 0xA38, "ObjectProperty"},
            {"DisplayName", 0xA40, "TextProperty"},
            {"Description", 0xA50, "TextProperty"},
            {"SmallPreviewImageOverride", 0xA68, "ObjectProperty"},
            {"ChargeStartTime", 0xA80, "FloatProperty"},
            {"ChargeState", 0xA88, "EnumProperty"},
            {"ToolTip", 0xAD0, "ClassProperty"},
            {"StatList", 0xAD8, "ObjectProperty"},
            {"ActorTrackingSettings", 0xAE8, "StructProperty"},
            {"AnalyticsTags", 0xB10, "StructProperty"},
            {"TagChangedActions", 0xB30, "ArrayProperty"},
        }};
    };

    struct JunoWeaponCosmeticAlterationComponent
    {
        static constexpr std::string_view Name = "JunoWeaponCosmeticAlterationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoCosmeticAlterationComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseAlteration = 0xC0;
            static constexpr std::uintptr_t ActiveAlterations = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BaseAlteration", 0xC0, "ObjectProperty"},
            {"ActiveAlterations", 0xC8, "ArrayProperty"},
        }};
    };

    struct JunoWeaponCreatureItemDefinition
    {
        static constexpr std::string_view Name = "JunoWeaponCreatureItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponRangedItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t Debug_CreaturesToSpawn = 0x4E0;
            static constexpr std::uintptr_t SpawnEvents = 0x4F0;
            static constexpr std::uintptr_t SpawnEventRegistryIds = 0x500;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Debug_CreaturesToSpawn", 0x4E0, "ArrayProperty"},
            {"SpawnEvents", 0x4F0, "ArrayProperty"},
            {"SpawnEventRegistryIds", 0x500, "ArrayProperty"},
        }};
    };

    struct JunoWeaponsBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoWeaponsBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWeatherFXComponent
    {
        static constexpr std::string_view Name = "JunoWeatherFXComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerLocation = 0xC0;
            static constexpr std::uintptr_t WeatherCollection = 0xD8;
            static constexpr std::uintptr_t TorchLightColorIC = 0xE0;
            static constexpr std::uintptr_t TorchCampfireLightColor = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PlayerLocation", 0xC0, "StructProperty"},
            {"WeatherCollection", 0xD8, "ObjectProperty"},
            {"TorchLightColorIC", 0xE0, "StructProperty"},
            {"TorchCampfireLightColor", 0xF0, "StructProperty"},
        }};
    };

    struct JunoWeatherFXPersistence
    {
        static constexpr std::string_view Name = "JunoWeatherFXPersistence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t MaterialParameterCollection = 0x278;
            static constexpr std::uintptr_t CachedMPCInstance = 0x280;
            static constexpr std::uintptr_t WindPosition = 0x288;
            static constexpr std::uintptr_t WindValueInCave = 0x298;
            static constexpr std::uintptr_t MaxWindSpeed = 0x2A8;
            static constexpr std::uintptr_t GustMaxWindSpeedAddend = 0x2AC;
            static constexpr std::uintptr_t WindScalar = 0x2BC;
            static constexpr std::uintptr_t WindParamName = 0x2C0;
            static constexpr std::uintptr_t WindPositionParamName = 0x2C4;
            static constexpr std::uintptr_t WindPreviousPositionParamName = 0x2C8;
            static constexpr std::uintptr_t bInCave = 0x2CC;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"MaterialParameterCollection", 0x278, "ObjectProperty"},
            {"CachedMPCInstance", 0x280, "ObjectProperty"},
            {"WindPosition", 0x288, "StructProperty"},
            {"WindValueInCave", 0x298, "StructProperty"},
            {"MaxWindSpeed", 0x2A8, "FloatProperty"},
            {"GustMaxWindSpeedAddend", 0x2AC, "StructProperty"},
            {"WindScalar", 0x2BC, "FloatProperty"},
            {"WindParamName", 0x2C0, "NameProperty"},
            {"WindPositionParamName", 0x2C4, "NameProperty"},
            {"WindPreviousPositionParamName", 0x2C8, "NameProperty"},
            {"bInCave", 0x2CC, "BoolProperty"},
        }};
    };

    struct JunoWeatherLibrary
    {
        static constexpr std::string_view Name = "JunoWeatherLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWeatherLocationComponent
    {
        static constexpr std::string_view Name = "JunoWeatherLocationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLocationChanged = 0xC0;
            static constexpr std::uintptr_t Location = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnLocationChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"Location", 0xF0, "StructProperty"},
        }};
    };

    struct JunoWeatherPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoWeatherPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t WeatherSaveData = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WeatherSaveData", 0x58, "StructProperty"},
        }};
    };

    struct JunoWeatherPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoWeatherPersistenceFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoWeatherPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoWeatherPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoWeatherReactionComponent
    {
        static constexpr std::string_view Name = "JunoWeatherReactionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnWeatherPhaseChanged = 0xC0;
            static constexpr std::uintptr_t OnTemperatureChanged = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnWeatherPhaseChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"OnTemperatureChanged", 0xD0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct JunoWeatherStateComponent
    {
        static constexpr std::string_view Name = "JunoWeatherStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Location = 0xF0;
            static constexpr std::uintptr_t SeasonTable = 0x158;
            static constexpr std::uintptr_t CurrentWeatherPhase = 0x168;
            static constexpr std::uintptr_t NextWeatherPhase = 0x1A0;
            static constexpr std::uintptr_t NextWeatherQueue = 0x1D8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Location", 0xF0, "StructProperty"},
            {"SeasonTable", 0x158, "ObjectProperty"},
            {"CurrentWeatherPhase", 0x168, "StructProperty"},
            {"NextWeatherPhase", 0x1A0, "StructProperty"},
            {"NextWeatherQueue", 0x1D8, "ArrayProperty"},
        }};
    };

    struct JunoWorldConditionWeatherState
    {
        static constexpr std::string_view Name = "JunoWorldConditionWeatherState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldCondition_AIWorldSettings_State
    {
        static constexpr std::string_view Name = "JunoWorldCondition_AIWorldSettings_State";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldInGameTimePersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoWorldInGameTimePersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoWorldInGameTimeSaveData = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JunoWorldInGameTimeSaveData", 0x58, "StructProperty"},
        }};
    };

    struct JunoWorldInGameTimePersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoWorldInGameTimePersistenceFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoWorldInGameTimePersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoWorldInGameTimePersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoWorldPartitionActor
    {
        static constexpr std::string_view Name = "JunoWorldPartitionActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FNWorldPartitionActor";
        struct Offsets
        {
            static constexpr std::uintptr_t ISMComponentSettings = 0x280;
            static constexpr std::uintptr_t InvalidPrimitives = 0x290;
            static constexpr std::uintptr_t bCellTransformerIsGridAligned = 0x370;
            static constexpr std::uintptr_t ColorSwaps = 0x378;
            static constexpr std::uintptr_t ColorLUTs = 0x388;
            static constexpr std::uintptr_t AtlasLUTs = 0x398;
            static constexpr std::uintptr_t ColorLookup = 0x3A8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ISMComponentSettings", 0x280, "ArrayProperty"},
            {"InvalidPrimitives", 0x290, "ArrayProperty"},
            {"bCellTransformerIsGridAligned", 0x370, "BoolProperty"},
            {"ColorSwaps", 0x378, "ArrayProperty"},
            {"ColorLUTs", 0x388, "ArrayProperty"},
            {"AtlasLUTs", 0x398, "ArrayProperty"},
            {"ColorLookup", 0x3A8, "ArrayProperty"},
        }};
    };

    struct JunoWorldPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoWorldPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldSaveData = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WorldSaveData", 0x58, "StructProperty"},
        }};
    };

    struct JunoWorldPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoWorldPersistenceFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoWorldPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoWorldPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoWorldReadinessQueryComponent
    {
        static constexpr std::string_view Name = "JunoWorldReadinessQueryComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
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

    struct JunoWorldRegistryInterface
    {
        static constexpr std::string_view Name = "JunoWorldRegistryInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldSettingsBlueprintLibrary
    {
        static constexpr std::string_view Name = "JunoWorldSettingsBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoWorldSettingsComponent
    {
        static constexpr std::string_view Name = "JunoWorldSettingsComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldSettingsTable = 0xD8;
            static constexpr std::uintptr_t WorldSettings = 0xE0;
            static constexpr std::uintptr_t PreviousMetadataWorldSettings = 0xF0;
            static constexpr std::uintptr_t bAreWorldSettingsLoaded = 0x100;
            static constexpr std::uintptr_t bCanWorldSettingsTaint = 0x101;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"WorldSettingsTable", 0xD8, "ObjectProperty"},
            {"WorldSettings", 0xE0, "ArrayProperty"},
            {"PreviousMetadataWorldSettings", 0xF0, "ArrayProperty"},
            {"bAreWorldSettingsLoaded", 0x100, "BoolProperty"},
            {"bCanWorldSettingsTaint", 0x101, "BoolProperty"},
        }};
    };

    struct JunoWorldSettingsPersistenceFeatureData
    {
        static constexpr std::string_view Name = "JunoWorldSettingsPersistenceFeatureData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureData";
        struct Offsets
        {
            static constexpr std::uintptr_t BoolWorldSettings = 0x78;
            static constexpr std::uintptr_t EnumWorldSettings = 0x88;
            static constexpr std::uintptr_t TaintedSettings = 0x98;
            static constexpr std::uintptr_t WorldSettingsSaveData = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BoolWorldSettings", 0x78, "MapProperty"},
            {"EnumWorldSettings", 0x88, "MapProperty"},
            {"TaintedSettings", 0x98, "SetProperty"},
            {"WorldSettingsSaveData", 0xA8, "StructProperty"},
        }};
    };

    struct JunoWorldSettingsPersistenceFeatureData_Container
    {
        static constexpr std::string_view Name = "JunoWorldSettingsPersistenceFeatureData_Container";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoBasePFWPersistenceFeatureDataContainer";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t RestoreVersionInfo = 0x48;
            static constexpr std::uintptr_t SupportedVersionsTable = 0x58;
            static constexpr std::uintptr_t RestoreAttemptCount = 0x78;
            static constexpr std::uintptr_t SaveAttemptCount = 0x80;
            static constexpr std::uintptr_t DeleteAttemptCount = 0x88;
            static constexpr std::uintptr_t ServiceData = 0x90;
            static constexpr std::uintptr_t BackendRequestsQueue = 0x98;
            static constexpr std::uintptr_t PersistentClassName = 0xA0;
            static constexpr std::uintptr_t PersistentName = 0xA8;
            static constexpr std::uintptr_t Description = 0xD8;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0xE8;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0xF0;
            static constexpr std::uintptr_t DeinitProcess = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"RestoreVersionInfo", 0x48, "StructProperty"},
            {"SupportedVersionsTable", 0x58, "StructProperty"},
            {"RestoreAttemptCount", 0x78, "UInt64Property"},
            {"SaveAttemptCount", 0x80, "UInt64Property"},
            {"DeleteAttemptCount", 0x88, "UInt64Property"},
            {"ServiceData", 0x90, "ObjectProperty"},
            {"BackendRequestsQueue", 0x98, "ObjectProperty"},
            {"PersistentClassName", 0xA0, "NameProperty"},
            {"PersistentName", 0xA8, "StructProperty"},
            {"Description", 0xD8, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0xE8, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0xF0, "BoolProperty"},
            {"DeinitProcess", 0xF8, "ObjectProperty"},
        }};
    };

    struct JunoWorldSettingsPersistenceFeatureModule
    {
        static constexpr std::string_view Name = "JunoWorldSettingsPersistenceFeatureModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PersistenceFrameworkModule";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTagContainer = 0x28;
            static constexpr std::uintptr_t Containers = 0x48;
            static constexpr std::uintptr_t ServiceData = 0x58;
            static constexpr std::uintptr_t PersistentName = 0x60;
            static constexpr std::uintptr_t MakeReadyForPersistenceProcess = 0x70;
            static constexpr std::uintptr_t bMakeReadyForPersistenceProcessFailedOnLastAttempt = 0x78;
            static constexpr std::uintptr_t DeinitProcess = 0x80;
            static constexpr std::uintptr_t Description = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayTagContainer", 0x28, "StructProperty"},
            {"Containers", 0x48, "MapProperty"},
            {"ServiceData", 0x58, "ObjectProperty"},
            {"PersistentName", 0x60, "StrProperty"},
            {"MakeReadyForPersistenceProcess", 0x70, "ObjectProperty"},
            {"bMakeReadyForPersistenceProcessFailedOnLastAttempt", 0x78, "BoolProperty"},
            {"DeinitProcess", 0x80, "ObjectProperty"},
            {"Description", 0x88, "StrProperty"},
        }};
    };

    struct JunoWorldStreamingSourceProviderInterface
    {
        static constexpr std::string_view Name = "JunoWorldStreamingSourceProviderInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Juno_GFA_AddMapManagerClass
    {
        static constexpr std::string_view Name = "Juno_GFA_AddMapManagerClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t MapManagerClasses = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MapManagerClasses", 0x28, "MapProperty"},
        }};
    };

    struct Juno_GFA_AddRegisteredClass
    {
        static constexpr std::string_view Name = "Juno_GFA_AddRegisteredClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t RegisteredClasses = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RegisteredClasses", 0x28, "ArrayProperty"},
        }};
    };

    struct LFNAmbientAudioGameStateComp
    {
        static constexpr std::string_view Name = "LFNAmbientAudioGameStateComp";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAudioTODComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveAmbienceCategoryMap = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActiveAmbienceCategoryMap", 0xE0, "MapProperty"},
        }};
    };

    struct PhysicalStrainHealthRuntimeSettings
    {
        static constexpr std::string_view Name = "PhysicalStrainHealthRuntimeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0x30;
            static constexpr std::uintptr_t FatigueDamageThresholdPercent = 0x34;
            static constexpr std::uintptr_t FatigueDamageThresholdMinimum = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Mode", 0x30, "EnumProperty"},
            {"FatigueDamageThresholdPercent", 0x34, "FloatProperty"},
            {"FatigueDamageThresholdMinimum", 0x38, "FloatProperty"},
        }};
    };

    struct PhysicalStrainHealthSubsystem
    {
        static constexpr std::string_view Name = "PhysicalStrainHealthSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PlayerRuneRollInterface
    {
        static constexpr std::string_view Name = "PlayerRuneRollInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PlayspaceComponent_JunoAIPersistence
    {
        static constexpr std::string_view Name = "PlayspaceComponent_JunoAIPersistence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AllDynamicUniqueAIIdentifiers = 0x160;
            static constexpr std::uintptr_t FriendshipStateThresholds = 0x180;
            static constexpr std::uintptr_t HappinessStateThresholds = 0x190;
            static constexpr std::uintptr_t HappinessConfig = 0x1A0;
            static constexpr std::uintptr_t VillagerReplacementForPersistentDataTable = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AllDynamicUniqueAIIdentifiers", 0x160, "StructProperty"},
            {"FriendshipStateThresholds", 0x180, "ArrayProperty"},
            {"HappinessStateThresholds", 0x190, "ArrayProperty"},
            {"HappinessConfig", 0x1A0, "StructProperty"},
            {"VillagerReplacementForPersistentDataTable", 0x1D0, "SoftObjectProperty"},
        }};
    };

    struct PlayspaceComponent_JunoAISafetyBubble
    {
        static constexpr std::string_view Name = "PlayspaceComponent_JunoAISafetyBubble";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SafetyBubbleComponent = 0x118;
            static constexpr std::uintptr_t bPreventSafetyBubbleInCamp = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SafetyBubbleComponent", 0x118, "ClassProperty"},
            {"bPreventSafetyBubbleInCamp", 0x120, "BoolProperty"},
        }};
    };

    struct PlayspaceComponent_JunoActionsDB
    {
        static constexpr std::string_view Name = "PlayspaceComponent_JunoActionsDB";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t JunoActionsDBs = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"JunoActionsDBs", 0x118, "ArrayProperty"},
        }};
    };

    struct PlayspaceComponent_JunoActorWorldLocation
    {
        static constexpr std::string_view Name = "PlayspaceComponent_JunoActorWorldLocation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
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

    struct PlayspaceComponent_JunoLTMState
    {
        static constexpr std::string_view Name = "PlayspaceComponent_JunoLTMState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLTMStateChanged = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnLTMStateChanged", 0xC0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct PlayspaceComponent_JunoPerformance
    {
        static constexpr std::string_view Name = "PlayspaceComponent_JunoPerformance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
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

    struct PlayspaceComponent_JunoRootCampManagement
    {
        static constexpr std::string_view Name = "PlayspaceComponent_JunoRootCampManagement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeBeforeSoftRemovedCampBecomesHardRemovedInJunoGameTimeHours = 0x120;
            static constexpr std::uintptr_t RunValidityChecksForCampPlacementOnServer = 0x148;
            static constexpr std::uintptr_t RunValidityChecksForCampPlacementOnClients = 0x170;
            static constexpr std::uintptr_t BoxExtentsForCampValidityCheck = 0x198;
            static constexpr std::uintptr_t BoxExtentsForCampValidityCheckForPOIs = 0x1C0;
            static constexpr std::uintptr_t BoxExtentsForCampAreaReservationBounds = 0x1E8;
            static constexpr std::uintptr_t ValidLocationTagQuery = 0x210;
            static constexpr std::uintptr_t PlayerPerks = 0x258;
            static constexpr std::uintptr_t NPCPerks = 0x25C;
            static constexpr std::uintptr_t NPCPerksPerBiomeTag = 0x260;
            static constexpr std::uintptr_t WaitForEventRouterAction = 0x298;
            static constexpr std::uintptr_t ReplicatedCampDatas = 0x2B0;
            static constexpr std::uintptr_t ReplicatedCampAreaReservationDatas = 0x2C0;
            static constexpr std::uintptr_t ActivePOIEncounters = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"TimeBeforeSoftRemovedCampBecomesHardRemovedInJunoGameTimeHours", 0x120, "StructProperty"},
            {"RunValidityChecksForCampPlacementOnServer", 0x148, "StructProperty"},
            {"RunValidityChecksForCampPlacementOnClients", 0x170, "StructProperty"},
            {"BoxExtentsForCampValidityCheck", 0x198, "StructProperty"},
            {"BoxExtentsForCampValidityCheckForPOIs", 0x1C0, "StructProperty"},
            {"BoxExtentsForCampAreaReservationBounds", 0x1E8, "StructProperty"},
            {"ValidLocationTagQuery", 0x210, "StructProperty"},
            {"PlayerPerks", 0x258, "StructProperty"},
            {"NPCPerks", 0x25C, "StructProperty"},
            {"NPCPerksPerBiomeTag", 0x260, "StructProperty"},
            {"WaitForEventRouterAction", 0x298, "ObjectProperty"},
            {"ReplicatedCampDatas", 0x2B0, "ArrayProperty"},
            {"ReplicatedCampAreaReservationDatas", 0x2C0, "ArrayProperty"},
            {"ActivePOIEncounters", 0x308, "ArrayProperty"},
        }};
    };

    struct PlayspaceComponent_JunoSafeZoneRegistry
    {
        static constexpr std::string_view Name = "PlayspaceComponent_JunoSafeZoneRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent";
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

    struct PlayspaceComponent_JunoServerExpiration
    {
        static constexpr std::string_view Name = "PlayspaceComponent_JunoServerExpiration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent_ServerExpiration";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseConfigAlertDataList = 0x228;
            static constexpr std::uintptr_t ConfigAlertDataList = 0x230;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bUseConfigAlertDataList", 0x228, "BoolProperty"},
            {"ConfigAlertDataList", 0x230, "ArrayProperty"},
        }};
    };

    struct PlayspaceComponent_Root_JunoAIManagement
    {
        static constexpr std::string_view Name = "PlayspaceComponent_Root_JunoAIManagement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayspaceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LWMConfiguration = 0x130;
            static constexpr std::uintptr_t CreatureFollowerLWMConfiguration = 0x500;
            static constexpr std::uintptr_t TemporaryGlobalEncounterLWMConfiguration = 0x8D0;
            static constexpr std::uintptr_t FTUEConfigurationsTable = 0xC98;
            static constexpr std::uintptr_t MaxNoInteractionTimeForNPCBeforeSoftRemovalInJunoGameTimeHours = 0xCC8;
            static constexpr std::uintptr_t TimeBeforeSoftRemovedNPCBecomesHardRemovedInJunoGameTimeHours = 0xCF0;
            static constexpr std::uintptr_t TimeToRemoveStaleFollowersFromDisconnectedPlayersInRealHours = 0xD18;
            static constexpr std::uintptr_t SecondsToWaitBeforeRemovingStaleFollowers = 0xD40;
            static constexpr std::uintptr_t TimeBeforeSoftRemovedCreatureBecomesHardRemovedInJunoGameTimeHours = 0xD68;
            static constexpr std::uintptr_t MinFriendshipValueBeforeSoftRemoval = 0xD90;
            static constexpr std::uintptr_t GlobalRecruitableNPCsCap = 0xDB8;
            static constexpr std::uintptr_t GlobalRecruitableCreaturesCap = 0xDE0;
            static constexpr std::uintptr_t GlobalRecruitableNPCsCapUpgrades = 0xE08;
            static constexpr std::uintptr_t BannedDescriptorTagsTable = 0xE18;
            static constexpr std::uintptr_t ManagedFollowers = 0xE50;
            static constexpr std::uintptr_t TemporaryGlobalEncounterPointProvider = 0xE60;
            static constexpr std::uintptr_t TemporaryGlobalEncounter = 0xE70;
            static constexpr std::uintptr_t DigestedFTUEConfigurations = 0xE78;
            static constexpr std::uintptr_t FTUERuntimeDatas = 0xE88;
            static constexpr std::uintptr_t WorldAssignedNPCs = 0xEC8;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"LWMConfiguration", 0x130, "StructProperty"},
            {"CreatureFollowerLWMConfiguration", 0x500, "StructProperty"},
            {"TemporaryGlobalEncounterLWMConfiguration", 0x8D0, "StructProperty"},
            {"FTUEConfigurationsTable", 0xC98, "StructProperty"},
            {"MaxNoInteractionTimeForNPCBeforeSoftRemovalInJunoGameTimeHours", 0xCC8, "StructProperty"},
            {"TimeBeforeSoftRemovedNPCBecomesHardRemovedInJunoGameTimeHours", 0xCF0, "StructProperty"},
            {"TimeToRemoveStaleFollowersFromDisconnectedPlayersInRealHours", 0xD18, "StructProperty"},
            {"SecondsToWaitBeforeRemovingStaleFollowers", 0xD40, "StructProperty"},
            {"TimeBeforeSoftRemovedCreatureBecomesHardRemovedInJunoGameTimeHours", 0xD68, "StructProperty"},
            {"MinFriendshipValueBeforeSoftRemoval", 0xD90, "StructProperty"},
            {"GlobalRecruitableNPCsCap", 0xDB8, "StructProperty"},
            {"GlobalRecruitableCreaturesCap", 0xDE0, "StructProperty"},
            {"GlobalRecruitableNPCsCapUpgrades", 0xE08, "MapProperty"},
            {"BannedDescriptorTagsTable", 0xE18, "ObjectProperty"},
            {"ManagedFollowers", 0xE50, "ArrayProperty"},
            {"TemporaryGlobalEncounterPointProvider", 0xE60, "InterfaceProperty"},
            {"TemporaryGlobalEncounter", 0xE70, "ObjectProperty"},
            {"DigestedFTUEConfigurations", 0xE78, "MapProperty"},
            {"FTUERuntimeDatas", 0xE88, "MapProperty"},
            {"WorldAssignedNPCs", 0xEC8, "MapProperty"},
        }};
    };

}
