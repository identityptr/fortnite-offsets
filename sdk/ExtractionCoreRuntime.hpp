#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ExtractionCoreRuntime
{
    struct ExtractableCoreUtils
    {
        static constexpr std::string_view Name = "ExtractableCoreUtils";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ExtractableEventsComponent
    {
        static constexpr std::string_view Name = "ExtractableEventsComponent";
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

    struct ExtractableEventsGameplayAbility
    {
        static constexpr std::string_view Name = "ExtractableEventsGameplayAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemEventFilterTags = 0xB40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ItemEventFilterTags", 0xB40, "StructProperty"},
        }};
    };

    struct ExtractableItemDefinition
    {
        static constexpr std::string_view Name = "ExtractableItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t PossibleAugments = 0x4D8;
            static constexpr std::uintptr_t LevelUpExpCurve = 0x4E8;
            static constexpr std::uintptr_t RelicPointsOnExtraction = 0x510;
            static constexpr std::uintptr_t ParentExtractableDefinition = 0x520;
            static constexpr std::uintptr_t DexNumber = 0x540;
            static constexpr std::uintptr_t ExtractableType = 0x544;
            static constexpr std::uintptr_t ItemToGrant = 0x548;
            static constexpr std::uintptr_t AcquisitionType = 0x568;
            static constexpr std::uintptr_t CustomProjectile = 0x570;
            static constexpr std::uintptr_t EquippedActiveAbilitySet = 0x590;
            static constexpr std::uintptr_t AIEventTableRow = 0x5B0;
            static constexpr std::uintptr_t AcquisitionHintText = 0x5C0;
            static constexpr std::uintptr_t bIsSecret = 0x5D0;
            static constexpr std::uintptr_t ExtractRewardLootTier = 0x5D4;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"PossibleAugments", 0x4D8, "ArrayProperty"},
            {"LevelUpExpCurve", 0x4E8, "StructProperty"},
            {"RelicPointsOnExtraction", 0x510, "StructProperty"},
            {"ParentExtractableDefinition", 0x520, "SoftObjectProperty"},
            {"DexNumber", 0x540, "IntProperty"},
            {"ExtractableType", 0x544, "EnumProperty"},
            {"ItemToGrant", 0x548, "SoftObjectProperty"},
            {"AcquisitionType", 0x568, "EnumProperty"},
            {"CustomProjectile", 0x570, "SoftClassProperty"},
            {"EquippedActiveAbilitySet", 0x590, "SoftObjectProperty"},
            {"AIEventTableRow", 0x5B0, "StructProperty"},
            {"AcquisitionHintText", 0x5C0, "TextProperty"},
            {"bIsSecret", 0x5D0, "BoolProperty"},
            {"ExtractRewardLootTier", 0x5D4, "NameProperty"},
        }};
    };

    struct ExtractableItemPersistenceMenuExtension
    {
        static constexpr std::string_view Name = "ExtractableItemPersistenceMenuExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ExtractionCoreMenuExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ExtractableItem_DataComponent
    {
        static constexpr std::string_view Name = "ExtractableItem_DataComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemEntry = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ItemEntry", 0xC0, "StructProperty"},
        }};
    };

    struct ExtractablePickup
    {
        static constexpr std::string_view Name = "ExtractablePickup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPickupAthena";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideInteract = 0x790;
            static constexpr std::uintptr_t InteractionText = 0x798;
            static constexpr std::uintptr_t InteractionOverrideWidget = 0x7A8;
            static constexpr std::uintptr_t SecondaryInteractionText = 0x7B0;
            static constexpr std::uintptr_t SecondaryInteractionDuration = 0x7C0;
            static constexpr std::uintptr_t bHiddenForCustomDrop = 0x7C4;
            static constexpr std::uintptr_t CustomInteractionWidgetInstance = 0x7C8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bOverrideInteract", 0x790, "BoolProperty"},
            {"InteractionText", 0x798, "TextProperty"},
            {"InteractionOverrideWidget", 0x7A8, "ClassProperty"},
            {"SecondaryInteractionText", 0x7B0, "TextProperty"},
            {"SecondaryInteractionDuration", 0x7C0, "FloatProperty"},
            {"bHiddenForCustomDrop", 0x7C4, "BoolProperty"},
            {"CustomInteractionWidgetInstance", 0x7C8, "ObjectProperty"},
        }};
    };

    struct ExtractablePreviousSeason_MagpiePersistenceManager
    {
        static constexpr std::string_view Name = "ExtractablePreviousSeason_MagpiePersistenceManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Extractable_MagpiePersistenceManager";
        struct Offsets
        {
            static constexpr std::uintptr_t MagpieCatalogProviderClass = 0x1D8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MagpieCatalogProviderClass", 0x1D8, "ClassProperty"},
        }};
    };

    struct ExtractableSpawnSource
    {
        static constexpr std::string_view Name = "ExtractableSpawnSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Extractable_Ch7MS_MagpieModuleProvider
    {
        static constexpr std::string_view Name = "Extractable_Ch7MS_MagpieModuleProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Extractable_Ch7S3_MagpieModuleProvider
    {
        static constexpr std::string_view Name = "Extractable_Ch7S3_MagpieModuleProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Extractable_Ch7S4_MagpieModuleProvider
    {
        static constexpr std::string_view Name = "Extractable_Ch7S4_MagpieModuleProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Extractable_Ch8S1_MagpieModuleProvider
    {
        static constexpr std::string_view Name = "Extractable_Ch8S1_MagpieModuleProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct Extractable_MagpiePersistenceManager
    {
        static constexpr std::string_view Name = "Extractable_MagpiePersistenceManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Extractable_PersistenceManager";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalBackendDataTable = 0xD8;
            static constexpr std::uintptr_t MagpieModuleProviderClass = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LocalBackendDataTable", 0xD8, "ObjectProperty"},
            {"MagpieModuleProviderClass", 0xE0, "ClassProperty"},
        }};
    };

    struct Extractable_PersistenceManager
    {
        static constexpr std::string_view Name = "Extractable_PersistenceManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ExtractionCorePersistenceManager";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxExtractionPoints = 0x70;
            static constexpr std::uintptr_t InternalPersistenceData = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaxExtractionPoints", 0x70, "StructProperty"},
            {"InternalPersistenceData", 0xB0, "StructProperty"},
        }};
    };

    struct Extractable_PersistenceMenuExtension
    {
        static constexpr std::string_view Name = "Extractable_PersistenceMenuExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ExtractionCoreMenuExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ExtractionAnalyticsLibrary
    {
        static constexpr std::string_view Name = "ExtractionAnalyticsLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ExtractionAttributeSet
    {
        static constexpr std::string_view Name = "ExtractionAttributeSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentExtractableExperience = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentExtractableExperience", 0x48, "StructProperty"},
        }};
    };

    struct ExtractionBackpackActor
    {
        static constexpr std::string_view Name = "ExtractionBackpackActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t HideExtractableTag = 0x280;
            static constexpr std::uintptr_t OwningPawn = 0x284;
            static constexpr std::uintptr_t ExtractableItemDefinition = 0x28C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"HideExtractableTag", 0x280, "StructProperty"},
            {"OwningPawn", 0x284, "WeakObjectProperty"},
            {"ExtractableItemDefinition", 0x28C, "WeakObjectProperty"},
        }};
    };

    struct ExtractionBackpackGameplayAbility
    {
        static constexpr std::string_view Name = "ExtractionBackpackGameplayAbility";
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

    struct ExtractionCoreCheatManager
    {
        static constexpr std::string_view Name = "ExtractionCoreCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ExtractionCoreClientSettingRecordPartition
    {
        static constexpr std::string_view Name = "ExtractionCoreClientSettingRecordPartition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortClientSettingRecordPartition";
        struct Offsets
        {
            static constexpr std::uintptr_t bHideRiftRelicOnMyBack = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bHideRiftRelicOnMyBack", 0x40, "BoolProperty"},
        }};
    };

    struct ExtractionCoreControllerComponent
    {
        static constexpr std::string_view Name = "ExtractionCoreControllerComponent";
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

    struct ExtractionCoreMenu
    {
        static constexpr std::string_view Name = "ExtractionCoreMenu";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ImGuiDebugMenuBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveExtension = 0x448;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActiveExtension", 0x448, "ObjectProperty"},
        }};
    };

    struct ExtractionCoreMenuExtension
    {
        static constexpr std::string_view Name = "ExtractionCoreMenuExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ExtractionCorePersistenceManager
    {
        static constexpr std::string_view Name = "ExtractionCorePersistenceManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnReceivedPersistenceData = 0x28;
            static constexpr std::uintptr_t DebugMenuExtensionClass = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnReceivedPersistenceData", 0x28, "MulticastInlineDelegateProperty"},
            {"DebugMenuExtensionClass", 0x38, "ClassProperty"},
        }};
    };

    struct ExtractionCoreSubsystem
    {
        static constexpr std::string_view Name = "ExtractionCoreSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtractableRegisteredAssetRegistry_Map = 0x68;
            static constexpr std::uintptr_t ExtractableRegisteredAssetRegistry_InverseMap = 0x78;
            static constexpr std::uintptr_t ExtractableRegisteredAssetRegistry_InverseMapOverrides = 0x88;
            static constexpr std::uintptr_t CachedPersistenceManagerClasses = 0x98;
            static constexpr std::uintptr_t PersistenceManagerInstances = 0xE8;
            static constexpr std::uintptr_t PerPlayerPersistenceManagerList = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ExtractableRegisteredAssetRegistry_Map", 0x68, "MapProperty"},
            {"ExtractableRegisteredAssetRegistry_InverseMap", 0x78, "MapProperty"},
            {"ExtractableRegisteredAssetRegistry_InverseMapOverrides", 0x88, "MapProperty"},
            {"CachedPersistenceManagerClasses", 0x98, "MapProperty"},
            {"PersistenceManagerInstances", 0xE8, "MapProperty"},
            {"PerPlayerPersistenceManagerList", 0x118, "ArrayProperty"},
        }};
    };

    struct ExtractionInventoryUtils
    {
        static constexpr std::string_view Name = "ExtractionInventoryUtils";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ExtractionObjectInterface
    {
        static constexpr std::string_view Name = "ExtractionObjectInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ExtractionPickupInteractOverrideComponent
    {
        static constexpr std::string_view Name = "ExtractionPickupInteractOverrideComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPickupInteractOverrideComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SecondaryInteractionText = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SecondaryInteractionText", 0xE0, "TextProperty"},
        }};
    };

    struct FortAthenaMutator_RelicExtraction
    {
        static constexpr std::string_view Name = "FortAthenaMutator_RelicExtraction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t LeaderboardGameId = 0x2E8;
            static constexpr std::uintptr_t LeaderboardEventId = 0x2F8;
            static constexpr std::uintptr_t LeaderboardWindowId = 0x308;
            static constexpr std::uintptr_t LeaderboardTrackedStat = 0x318;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LeaderboardGameId", 0x2E8, "StrProperty"},
            {"LeaderboardEventId", 0x2F8, "StrProperty"},
            {"LeaderboardWindowId", 0x308, "StrProperty"},
            {"LeaderboardTrackedStat", 0x318, "StrProperty"},
        }};
    };

    struct WorldItemExtraction_PersistenceManager
    {
        static constexpr std::string_view Name = "WorldItemExtraction_PersistenceManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ExtractionCorePersistenceManager";
        struct Offsets
        {
            static constexpr std::uintptr_t MagpieModuleProviderClass = 0x70;
            static constexpr std::uintptr_t EntitlementContextTag = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MagpieModuleProviderClass", 0x70, "ClassProperty"},
            {"EntitlementContextTag", 0x78, "StructProperty"},
        }};
    };

}
