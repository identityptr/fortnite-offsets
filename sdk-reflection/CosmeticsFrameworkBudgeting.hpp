#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CosmeticsFrameworkBudgeting
{
    struct BudgetCandidateRequestHandle
    {
        static constexpr std::string_view Name = "BudgetCandidateRequestHandle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BudgetCategoryAnalyticsProvider
    {
        static constexpr std::string_view Name = "BudgetCategoryAnalyticsProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataDrivenCategoryModuleBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BudgetCategoryCapacityMultiplier
    {
        static constexpr std::string_view Name = "BudgetCategoryCapacityMultiplier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataDrivenCategoryModuleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CapacityChangedCSVEventName = 0x4C;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CapacityChangedCSVEventName", 0x4C, "NameProperty"},
        }};
    };

    struct BudgetCategoryCapacityProvider
    {
        static constexpr std::string_view Name = "BudgetCategoryCapacityProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataDrivenCategoryModuleBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BudgetCategoryCostProvider
    {
        static constexpr std::string_view Name = "BudgetCategoryCostProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataDrivenCategoryModuleBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BudgetCategoryFilter
    {
        static constexpr std::string_view Name = "BudgetCategoryFilter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BudgetCategoryFilterDetails
    {
        static constexpr std::string_view Name = "BudgetCategoryFilterDetails";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Filter = 0x0;
            static constexpr std::uintptr_t OptionalRestrictToCategoryIds = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Filter", 0x0, "ObjectProperty"},
            {"OptionalRestrictToCategoryIds", 0x8, "SetProperty"},
        }};
    };

    struct BudgetCategoryFilterList
    {
        static constexpr std::string_view Name = "BudgetCategoryFilterList";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Filters = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Filters", 0x0, "ArrayProperty"},
        }};
    };

    struct BudgetCategoryInstance
    {
        static constexpr std::string_view Name = "BudgetCategoryInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ManagedCategoryId = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ManagedCategoryId", 0x58, "StructProperty"},
        }};
    };

    struct BudgetCategoryManager
    {
        static constexpr std::string_view Name = "BudgetCategoryManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryInstances = 0xC0;
            static constexpr std::uintptr_t RequestFiltersByCategory = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CategoryInstances", 0xC0, "MapProperty"},
            {"RequestFiltersByCategory", 0xD0, "MapProperty"},
        }};
    };

    struct BudgetCategoryRegistrationHandler
    {
        static constexpr std::string_view Name = "BudgetCategoryRegistrationHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataDrivenCategoryModuleBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BudgetCategoryRequestFilter
    {
        static constexpr std::string_view Name = "BudgetCategoryRequestFilter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BudgetCategoryScorer
    {
        static constexpr std::string_view Name = "BudgetCategoryScorer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredCVarName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RequiredCVarName", 0x28, "NameProperty"},
        }};
    };

    struct BudgetGrantedHysteresisScorer
    {
        static constexpr std::string_view Name = "BudgetGrantedHysteresisScorer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BudgetCategoryScorer";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredCVarName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RequiredCVarName", 0x28, "NameProperty"},
        }};
    };

    struct BudgetItemScoreProvider
    {
        static constexpr std::string_view Name = "BudgetItemScoreProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataDrivenCategoryModuleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryFilters = 0x48;
            static constexpr std::uintptr_t CategoryScorers = 0x58;
            static constexpr std::uintptr_t MaxItemsToProcessPerFrame = 0x68;
            static constexpr std::uintptr_t bForceRescoreCandidatesOnRegister = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CategoryFilters", 0x48, "ArrayProperty"},
            {"CategoryScorers", 0x58, "ArrayProperty"},
            {"MaxItemsToProcessPerFrame", 0x68, "StructProperty"},
            {"bForceRescoreCandidatesOnRegister", 0x98, "BoolProperty"},
        }};
    };

    struct BudgetLockIfAlreadyBudgeted
    {
        static constexpr std::string_view Name = "BudgetLockIfAlreadyBudgeted";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BudgetLockProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredCVarName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RequiredCVarName", 0x28, "NameProperty"},
        }};
    };

    struct BudgetLockProvider
    {
        static constexpr std::string_view Name = "BudgetLockProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredCVarName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RequiredCVarName", 0x28, "NameProperty"},
        }};
    };

    struct BudgetingComponent
    {
        static constexpr std::string_view Name = "BudgetingComponent";
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

    struct CompositeWeightedScorer
    {
        static constexpr std::string_view Name = "CompositeWeightedScorer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BudgetCategoryScorer";
        struct Offsets
        {
            static constexpr std::uintptr_t WeightedScorers = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WeightedScorers", 0x30, "ArrayProperty"},
        }};
    };

    struct ConditionalCapacityProviderEntry
    {
        static constexpr std::string_view Name = "ConditionalCapacityProviderEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CVarName = 0x0;
            static constexpr std::uintptr_t CapacityProvider = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CVarName", 0x0, "StrProperty"},
            {"CapacityProvider", 0x10, "ObjectProperty"},
        }};
    };

    struct ConditionalCostProviderEntry
    {
        static constexpr std::string_view Name = "ConditionalCostProviderEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CVarName = 0x0;
            static constexpr std::uintptr_t CostProvider = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CVarName", 0x0, "StrProperty"},
            {"CostProvider", 0x10, "ObjectProperty"},
        }};
    };

    struct ConditionalHandlerEntry
    {
        static constexpr std::string_view Name = "ConditionalHandlerEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CVarName = 0x0;
            static constexpr std::uintptr_t Handler = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CVarName", 0x0, "StrProperty"},
            {"Handler", 0x10, "ObjectProperty"},
        }};
    };

    struct ConditionalProxyCapacityProvider
    {
        static constexpr std::string_view Name = "ConditionalProxyCapacityProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BudgetCategoryCapacityProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ConditionalCapacityProviders = 0x50;
            static constexpr std::uintptr_t ResolvedCapacityProvider = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ConditionalCapacityProviders", 0x50, "ArrayProperty"},
            {"ResolvedCapacityProvider", 0x60, "ObjectProperty"},
        }};
    };

    struct ConditionalProxyCostProvider
    {
        static constexpr std::string_view Name = "ConditionalProxyCostProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BudgetCategoryCostProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ConditionalCostProviders = 0x30;
            static constexpr std::uintptr_t ResolvedCostProvider = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ConditionalCostProviders", 0x30, "ArrayProperty"},
            {"ResolvedCostProvider", 0x40, "ObjectProperty"},
        }};
    };

    struct ConditionalProxyRegistrationHandler
    {
        static constexpr std::string_view Name = "ConditionalProxyRegistrationHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BudgetCategoryRegistrationHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t ConditionalHandlers = 0x30;
            static constexpr std::uintptr_t ResolvedHandler = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ConditionalHandlers", 0x30, "ArrayProperty"},
            {"ResolvedHandler", 0x40, "ObjectProperty"},
        }};
    };

    struct DataDrivenBudgetCategoryInstance
    {
        static constexpr std::string_view Name = "DataDrivenBudgetCategoryInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BudgetCategoryInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t RegistrationHandler = 0x70;
            static constexpr std::uintptr_t CostProvider = 0x78;
            static constexpr std::uintptr_t CapacityProvider = 0x80;
            static constexpr std::uintptr_t CapacityMultiplier = 0x88;
            static constexpr std::uintptr_t ScoreProvider = 0x90;
            static constexpr std::uintptr_t RebudgetCoordinator = 0x98;
            static constexpr std::uintptr_t AnalyticsProvider = 0xA0;
            static constexpr std::uintptr_t CustomCategoryModulesById = 0xA8;
            static constexpr std::uintptr_t RemainingCapacityCSVStatName = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"RegistrationHandler", 0x70, "ObjectProperty"},
            {"CostProvider", 0x78, "ObjectProperty"},
            {"CapacityProvider", 0x80, "ObjectProperty"},
            {"CapacityMultiplier", 0x88, "ObjectProperty"},
            {"ScoreProvider", 0x90, "ObjectProperty"},
            {"RebudgetCoordinator", 0x98, "ObjectProperty"},
            {"AnalyticsProvider", 0xA0, "ObjectProperty"},
            {"CustomCategoryModulesById", 0xA8, "MapProperty"},
            {"RemainingCapacityCSVStatName", 0xD8, "NameProperty"},
        }};
    };

    struct DataDrivenCategoryModuleBase
    {
        static constexpr std::string_view Name = "DataDrivenCategoryModuleBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DynamicallySourcedValue
    {
        static constexpr std::string_view Name = "DynamicallySourcedValue";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SpecificationMethod = 0x0;
            static constexpr std::uintptr_t RequiredCVarName = 0x4;
            static constexpr std::uintptr_t ZeroToOnePercentageCVarName = 0x8;
            static constexpr std::uintptr_t bMultiplyByInverseOfZeroToOnePercentage = 0xC;
            static constexpr std::uintptr_t Count = 0x10;
            static constexpr std::uintptr_t bValue = 0x14;
            static constexpr std::uintptr_t CurveTableRow = 0x18;
            static constexpr std::uintptr_t CurveLookupInput = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SpecificationMethod", 0x0, "EnumProperty"},
            {"RequiredCVarName", 0x4, "NameProperty"},
            {"ZeroToOnePercentageCVarName", 0x8, "NameProperty"},
            {"bMultiplyByInverseOfZeroToOnePercentage", 0xC, "BoolProperty"},
            {"Count", 0x10, "FloatProperty"},
            {"bValue", 0x14, "BoolProperty"},
            {"CurveTableRow", 0x18, "StructProperty"},
            {"CurveLookupInput", 0x28, "FloatProperty"},
        }};
    };

    struct GFA_RegisterBudgetCategoryRequestFilters
    {
        static constexpr std::string_view Name = "GFA_RegisterBudgetCategoryRequestFilters";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t RequestFilters = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RequestFilters", 0x28, "ArrayProperty"},
        }};
    };

    struct GFA_RegisterBudgetingCategories
    {
        static constexpr std::string_view Name = "GFA_RegisterBudgetingCategories";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t BudgetCategoryTypesByCategoryTag = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BudgetCategoryTypesByCategoryTag", 0x28, "MapProperty"},
        }};
    };

    struct PrioritizedRegistrationHandler
    {
        static constexpr std::string_view Name = "PrioritizedRegistrationHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BudgetCategoryRegistrationHandler";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RebudgetCoordinatorModule
    {
        static constexpr std::string_view Name = "RebudgetCoordinatorModule";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataDrivenCategoryModuleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Triggers = 0x30;
            static constexpr std::uintptr_t LockProviders = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Triggers", 0x30, "ArrayProperty"},
            {"LockProviders", 0x40, "ArrayProperty"},
        }};
    };

    struct RebudgetOnCapacityChangedTrigger
    {
        static constexpr std::string_view Name = "RebudgetOnCapacityChangedTrigger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RebudgetTrigger";
        struct Offsets
        {
            static constexpr std::uintptr_t Policy = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Policy", 0x38, "EnumProperty"},
        }};
    };

    struct RebudgetOnTimerTrigger
    {
        static constexpr std::string_view Name = "RebudgetOnTimerTrigger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RebudgetTrigger";
        struct Offsets
        {
            static constexpr std::uintptr_t RebudgetInterval = 0x38;
            static constexpr std::uintptr_t IdlePollInterval = 0x68;
            static constexpr std::uintptr_t ResumeMinDelay = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RebudgetInterval", 0x38, "StructProperty"},
            {"IdlePollInterval", 0x68, "StructProperty"},
            {"ResumeMinDelay", 0x98, "StructProperty"},
        }};
    };

    struct RebudgetTrigger
    {
        static constexpr std::string_view Name = "RebudgetTrigger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RequiredCVarName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RequiredCVarName", 0x28, "NameProperty"},
        }};
    };

    struct WeightedScorerEntry
    {
        static constexpr std::string_view Name = "WeightedScorerEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Scorer = 0x0;
            static constexpr std::uintptr_t Weight = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Scorer", 0x0, "ObjectProperty"},
            {"Weight", 0x8, "StructProperty"},
        }};
    };

}
