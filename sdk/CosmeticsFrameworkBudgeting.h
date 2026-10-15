/**
 * decamp dumper generated SDK
 * Package: /Script/CosmeticsFrameworkBudgeting
 */
#pragma once
#include "Basic.h"

// /Script/CosmeticsFrameworkBudgeting.BudgetCandidateRequestHandle
// Kind: ScriptStruct; super: none
struct FBudgetCandidateRequestHandle
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkBudgeting.BudgetCategoryFilterDetails
// Kind: ScriptStruct; super: none
struct FBudgetCategoryFilterDetails
{
public:
    void* Filter; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TSet<void*> OptionalRestrictToCategoryIds; // 0x0008 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(FBudgetCategoryFilterDetails, Filter) == 0, "Offset mismatch for FBudgetCategoryFilterDetails::Filter");
static_assert(offsetof(FBudgetCategoryFilterDetails, OptionalRestrictToCategoryIds) == 8, "Offset mismatch for FBudgetCategoryFilterDetails::OptionalRestrictToCategoryIds");

// /Script/CosmeticsFrameworkBudgeting.BudgetCategoryFilterList
// Kind: ScriptStruct; super: none
struct FBudgetCategoryFilterList
{
public:
    TArray<void*> Filters; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FBudgetCategoryFilterList, Filters) == 0, "Offset mismatch for FBudgetCategoryFilterList::Filters");

// /Script/CosmeticsFrameworkBudgeting.ConditionalCapacityProviderEntry
// Kind: ScriptStruct; super: none
struct FConditionalCapacityProviderEntry
{
public:
    FString CVarName; // 0x0000 (Size: 0x10, Type: StrProperty)
    void* CapacityProvider; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FConditionalCapacityProviderEntry, CVarName) == 0, "Offset mismatch for FConditionalCapacityProviderEntry::CVarName");
static_assert(offsetof(FConditionalCapacityProviderEntry, CapacityProvider) == 16, "Offset mismatch for FConditionalCapacityProviderEntry::CapacityProvider");

// /Script/CosmeticsFrameworkBudgeting.ConditionalCostProviderEntry
// Kind: ScriptStruct; super: none
struct FConditionalCostProviderEntry
{
public:
    FString CVarName; // 0x0000 (Size: 0x10, Type: StrProperty)
    void* CostProvider; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FConditionalCostProviderEntry, CVarName) == 0, "Offset mismatch for FConditionalCostProviderEntry::CVarName");
static_assert(offsetof(FConditionalCostProviderEntry, CostProvider) == 16, "Offset mismatch for FConditionalCostProviderEntry::CostProvider");

// /Script/CosmeticsFrameworkBudgeting.ConditionalHandlerEntry
// Kind: ScriptStruct; super: none
struct FConditionalHandlerEntry
{
public:
    FString CVarName; // 0x0000 (Size: 0x10, Type: StrProperty)
    void* Handler; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FConditionalHandlerEntry, CVarName) == 0, "Offset mismatch for FConditionalHandlerEntry::CVarName");
static_assert(offsetof(FConditionalHandlerEntry, Handler) == 16, "Offset mismatch for FConditionalHandlerEntry::Handler");

// /Script/CosmeticsFrameworkBudgeting.DynamicallySourcedValue
// Kind: ScriptStruct; super: none
struct FDynamicallySourcedValue
{
public:
    std::uint8_t SpecificationMethod; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t RequiredCVarName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t ZeroToOnePercentageCVarName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t bMultiplyByInverseOfZeroToOnePercentage; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    float Count; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bValue; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0015
    std::uint8_t CurveTableRow[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    float CurveLookupInput; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FDynamicallySourcedValue, SpecificationMethod) == 0, "Offset mismatch for FDynamicallySourcedValue::SpecificationMethod");
static_assert(offsetof(FDynamicallySourcedValue, RequiredCVarName) == 4, "Offset mismatch for FDynamicallySourcedValue::RequiredCVarName");
static_assert(offsetof(FDynamicallySourcedValue, ZeroToOnePercentageCVarName) == 8, "Offset mismatch for FDynamicallySourcedValue::ZeroToOnePercentageCVarName");
static_assert(offsetof(FDynamicallySourcedValue, bMultiplyByInverseOfZeroToOnePercentage) == 12, "Offset mismatch for FDynamicallySourcedValue::bMultiplyByInverseOfZeroToOnePercentage");
static_assert(offsetof(FDynamicallySourcedValue, Count) == 16, "Offset mismatch for FDynamicallySourcedValue::Count");
static_assert(offsetof(FDynamicallySourcedValue, bValue) == 20, "Offset mismatch for FDynamicallySourcedValue::bValue");
static_assert(offsetof(FDynamicallySourcedValue, CurveTableRow) == 24, "Offset mismatch for FDynamicallySourcedValue::CurveTableRow");
static_assert(offsetof(FDynamicallySourcedValue, CurveLookupInput) == 40, "Offset mismatch for FDynamicallySourcedValue::CurveLookupInput");

// /Script/CosmeticsFrameworkBudgeting.WeightedScorerEntry
// Kind: ScriptStruct; super: none
struct FWeightedScorerEntry
{
public:
    void* Scorer; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Weight[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FWeightedScorerEntry, Scorer) == 0, "Offset mismatch for FWeightedScorerEntry::Scorer");
static_assert(offsetof(FWeightedScorerEntry, Weight) == 8, "Offset mismatch for FWeightedScorerEntry::Weight");

// /Script/CosmeticsFrameworkBudgeting.BudgetCategoryAnalyticsProvider
// Kind: Class; super: DataDrivenCategoryModuleBase
class UBudgetCategoryAnalyticsProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkBudgeting.BudgetCategoryCapacityMultiplier
// Kind: Class; super: DataDrivenCategoryModuleBase
class UBudgetCategoryCapacityMultiplier
{
public:
    std::uint8_t Pad_0000[0x4C]; // 0x0000
    FName CapacityChangedCSVEventName; // 0x004C (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UBudgetCategoryCapacityMultiplier, CapacityChangedCSVEventName) == 76, "Offset mismatch for UBudgetCategoryCapacityMultiplier::CapacityChangedCSVEventName");

// /Script/CosmeticsFrameworkBudgeting.BudgetCategoryCapacityProvider
// Kind: Class; super: DataDrivenCategoryModuleBase
class UBudgetCategoryCapacityProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkBudgeting.BudgetCategoryCostProvider
// Kind: Class; super: DataDrivenCategoryModuleBase
class UBudgetCategoryCostProvider
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkBudgeting.BudgetCategoryFilter
// Kind: Class; super: Object
class UBudgetCategoryFilter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkBudgeting.BudgetCategoryInstance
// Kind: Class; super: Object
class UBudgetCategoryInstance
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t ManagedCategoryId[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBudgetCategoryInstance, ManagedCategoryId) == 88, "Offset mismatch for UBudgetCategoryInstance::ManagedCategoryId");

// /Script/CosmeticsFrameworkBudgeting.BudgetCategoryManager
// Kind: Class; super: WorldSubsystem
class UBudgetCategoryManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TMap<void*, void*> CategoryInstances; // 0x00C0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> RequestFiltersByCategory; // 0x00D0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UBudgetCategoryManager, CategoryInstances) == 192, "Offset mismatch for UBudgetCategoryManager::CategoryInstances");
static_assert(offsetof(UBudgetCategoryManager, RequestFiltersByCategory) == 208, "Offset mismatch for UBudgetCategoryManager::RequestFiltersByCategory");

// /Script/CosmeticsFrameworkBudgeting.BudgetCategoryRegistrationHandler
// Kind: Class; super: DataDrivenCategoryModuleBase
class UBudgetCategoryRegistrationHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkBudgeting.BudgetCategoryRequestFilter
// Kind: Class; super: Object
class UBudgetCategoryRequestFilter
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkBudgeting.BudgetCategoryScorer
// Kind: Class; super: Object
class UBudgetCategoryScorer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName RequiredCVarName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UBudgetCategoryScorer, RequiredCVarName) == 40, "Offset mismatch for UBudgetCategoryScorer::RequiredCVarName");

// /Script/CosmeticsFrameworkBudgeting.BudgetGrantedHysteresisScorer
// Kind: Class; super: BudgetCategoryScorer
class UBudgetGrantedHysteresisScorer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName RequiredCVarName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UBudgetGrantedHysteresisScorer, RequiredCVarName) == 40, "Offset mismatch for UBudgetGrantedHysteresisScorer::RequiredCVarName");

// /Script/CosmeticsFrameworkBudgeting.BudgetItemScoreProvider
// Kind: Class; super: DataDrivenCategoryModuleBase
class UBudgetItemScoreProvider
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> CategoryFilters; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CategoryScorers; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MaxItemsToProcessPerFrame[0x30]; // 0x0068 (Size: 0x30, Type: StructProperty)
    std::uint8_t bForceRescoreCandidatesOnRegister; // 0x0098 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UBudgetItemScoreProvider, CategoryFilters) == 72, "Offset mismatch for UBudgetItemScoreProvider::CategoryFilters");
static_assert(offsetof(UBudgetItemScoreProvider, CategoryScorers) == 88, "Offset mismatch for UBudgetItemScoreProvider::CategoryScorers");
static_assert(offsetof(UBudgetItemScoreProvider, MaxItemsToProcessPerFrame) == 104, "Offset mismatch for UBudgetItemScoreProvider::MaxItemsToProcessPerFrame");
static_assert(offsetof(UBudgetItemScoreProvider, bForceRescoreCandidatesOnRegister) == 152, "Offset mismatch for UBudgetItemScoreProvider::bForceRescoreCandidatesOnRegister");

// /Script/CosmeticsFrameworkBudgeting.BudgetLockIfAlreadyBudgeted
// Kind: Class; super: BudgetLockProvider
class UBudgetLockIfAlreadyBudgeted
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName RequiredCVarName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UBudgetLockIfAlreadyBudgeted, RequiredCVarName) == 40, "Offset mismatch for UBudgetLockIfAlreadyBudgeted::RequiredCVarName");

// /Script/CosmeticsFrameworkBudgeting.BudgetLockProvider
// Kind: Class; super: Object
class UBudgetLockProvider
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName RequiredCVarName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UBudgetLockProvider, RequiredCVarName) == 40, "Offset mismatch for UBudgetLockProvider::RequiredCVarName");

// /Script/CosmeticsFrameworkBudgeting.BudgetingComponent
// Kind: Class; super: ActorComponent
class UBudgetingComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t PrimaryComponentTick[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AssetUserData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0088
    std::int32_t UCSSerializationIndex; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0094
    std::uint8_t bNetAddressable; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x0098 BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0003[0x1]; // 0x0099
    std::uint8_t bAutoActivate; // 0x009A (Size: 0x1, Type: BoolProperty)
    // 0x009A BoolProperty bCanEverAffectNavigation (shared storage)
    // 0x009A BoolProperty bEditableWhenInherited (shared storage)
    // 0x009A BoolProperty bIsActive (shared storage)
    std::uint8_t bIsEditorOnly; // 0x009B (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x1D]; // 0x009C
    std::uint8_t CreationMethod; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OnComponentActivated[0x1]; // 0x00BA (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnComponentDeactivated; // 0x00BB (Size: 0x10, Type: MulticastSparseDelegateProperty)
};

static_assert(offsetof(UBudgetingComponent, PrimaryComponentTick) == 56, "Offset mismatch for UBudgetingComponent::PrimaryComponentTick");
static_assert(offsetof(UBudgetingComponent, ComponentTags) == 104, "Offset mismatch for UBudgetingComponent::ComponentTags");
static_assert(offsetof(UBudgetingComponent, AssetUserData) == 120, "Offset mismatch for UBudgetingComponent::AssetUserData");
static_assert(offsetof(UBudgetingComponent, UCSSerializationIndex) == 144, "Offset mismatch for UBudgetingComponent::UCSSerializationIndex");
static_assert(offsetof(UBudgetingComponent, bNetAddressable) == 152, "Offset mismatch for UBudgetingComponent::bNetAddressable");
static_assert(offsetof(UBudgetingComponent, bAutoActivate) == 154, "Offset mismatch for UBudgetingComponent::bAutoActivate");
static_assert(offsetof(UBudgetingComponent, bIsEditorOnly) == 155, "Offset mismatch for UBudgetingComponent::bIsEditorOnly");
static_assert(offsetof(UBudgetingComponent, CreationMethod) == 185, "Offset mismatch for UBudgetingComponent::CreationMethod");
static_assert(offsetof(UBudgetingComponent, OnComponentActivated) == 186, "Offset mismatch for UBudgetingComponent::OnComponentActivated");
static_assert(offsetof(UBudgetingComponent, OnComponentDeactivated) == 187, "Offset mismatch for UBudgetingComponent::OnComponentDeactivated");

// /Script/CosmeticsFrameworkBudgeting.CompositeWeightedScorer
// Kind: Class; super: BudgetCategoryScorer
class UCompositeWeightedScorer
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> WeightedScorers; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UCompositeWeightedScorer, WeightedScorers) == 48, "Offset mismatch for UCompositeWeightedScorer::WeightedScorers");

// /Script/CosmeticsFrameworkBudgeting.ConditionalProxyCapacityProvider
// Kind: Class; super: BudgetCategoryCapacityProvider
class UConditionalProxyCapacityProvider
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> ConditionalCapacityProviders; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    void* ResolvedCapacityProvider; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UConditionalProxyCapacityProvider, ConditionalCapacityProviders) == 80, "Offset mismatch for UConditionalProxyCapacityProvider::ConditionalCapacityProviders");
static_assert(offsetof(UConditionalProxyCapacityProvider, ResolvedCapacityProvider) == 96, "Offset mismatch for UConditionalProxyCapacityProvider::ResolvedCapacityProvider");

// /Script/CosmeticsFrameworkBudgeting.ConditionalProxyCostProvider
// Kind: Class; super: BudgetCategoryCostProvider
class UConditionalProxyCostProvider
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> ConditionalCostProviders; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    void* ResolvedCostProvider; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UConditionalProxyCostProvider, ConditionalCostProviders) == 48, "Offset mismatch for UConditionalProxyCostProvider::ConditionalCostProviders");
static_assert(offsetof(UConditionalProxyCostProvider, ResolvedCostProvider) == 64, "Offset mismatch for UConditionalProxyCostProvider::ResolvedCostProvider");

// /Script/CosmeticsFrameworkBudgeting.ConditionalProxyRegistrationHandler
// Kind: Class; super: BudgetCategoryRegistrationHandler
class UConditionalProxyRegistrationHandler
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> ConditionalHandlers; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    void* ResolvedHandler; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UConditionalProxyRegistrationHandler, ConditionalHandlers) == 48, "Offset mismatch for UConditionalProxyRegistrationHandler::ConditionalHandlers");
static_assert(offsetof(UConditionalProxyRegistrationHandler, ResolvedHandler) == 64, "Offset mismatch for UConditionalProxyRegistrationHandler::ResolvedHandler");

// /Script/CosmeticsFrameworkBudgeting.DataDrivenBudgetCategoryInstance
// Kind: Class; super: BudgetCategoryInstance
class UDataDrivenBudgetCategoryInstance
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* RegistrationHandler; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* CostProvider; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* CapacityProvider; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    void* CapacityMultiplier; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    void* ScoreProvider; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* RebudgetCoordinator; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* AnalyticsProvider; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> CustomCategoryModulesById; // 0x00A8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0001[0x20]; // 0x00B8
    FName RemainingCapacityCSVStatName; // 0x00D8 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UDataDrivenBudgetCategoryInstance, RegistrationHandler) == 112, "Offset mismatch for UDataDrivenBudgetCategoryInstance::RegistrationHandler");
static_assert(offsetof(UDataDrivenBudgetCategoryInstance, CostProvider) == 120, "Offset mismatch for UDataDrivenBudgetCategoryInstance::CostProvider");
static_assert(offsetof(UDataDrivenBudgetCategoryInstance, CapacityProvider) == 128, "Offset mismatch for UDataDrivenBudgetCategoryInstance::CapacityProvider");
static_assert(offsetof(UDataDrivenBudgetCategoryInstance, CapacityMultiplier) == 136, "Offset mismatch for UDataDrivenBudgetCategoryInstance::CapacityMultiplier");
static_assert(offsetof(UDataDrivenBudgetCategoryInstance, ScoreProvider) == 144, "Offset mismatch for UDataDrivenBudgetCategoryInstance::ScoreProvider");
static_assert(offsetof(UDataDrivenBudgetCategoryInstance, RebudgetCoordinator) == 152, "Offset mismatch for UDataDrivenBudgetCategoryInstance::RebudgetCoordinator");
static_assert(offsetof(UDataDrivenBudgetCategoryInstance, AnalyticsProvider) == 160, "Offset mismatch for UDataDrivenBudgetCategoryInstance::AnalyticsProvider");
static_assert(offsetof(UDataDrivenBudgetCategoryInstance, CustomCategoryModulesById) == 168, "Offset mismatch for UDataDrivenBudgetCategoryInstance::CustomCategoryModulesById");
static_assert(offsetof(UDataDrivenBudgetCategoryInstance, RemainingCapacityCSVStatName) == 216, "Offset mismatch for UDataDrivenBudgetCategoryInstance::RemainingCapacityCSVStatName");

// /Script/CosmeticsFrameworkBudgeting.DataDrivenCategoryModuleBase
// Kind: Class; super: Object
class UDataDrivenCategoryModuleBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkBudgeting.GFA_RegisterBudgetCategoryRequestFilters
// Kind: Class; super: GameFeatureAction
class UGFA_RegisterBudgetCategoryRequestFilters
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> RequestFilters; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGFA_RegisterBudgetCategoryRequestFilters, RequestFilters) == 40, "Offset mismatch for UGFA_RegisterBudgetCategoryRequestFilters::RequestFilters");

// /Script/CosmeticsFrameworkBudgeting.GFA_RegisterBudgetingCategories
// Kind: Class; super: GameFeatureAction
class UGFA_RegisterBudgetingCategories
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> BudgetCategoryTypesByCategoryTag; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UGFA_RegisterBudgetingCategories, BudgetCategoryTypesByCategoryTag) == 40, "Offset mismatch for UGFA_RegisterBudgetingCategories::BudgetCategoryTypesByCategoryTag");

// /Script/CosmeticsFrameworkBudgeting.PrioritizedRegistrationHandler
// Kind: Class; super: BudgetCategoryRegistrationHandler
class UPrioritizedRegistrationHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkBudgeting.RebudgetCoordinatorModule
// Kind: Class; super: DataDrivenCategoryModuleBase
class URebudgetCoordinatorModule
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TArray<void*> Triggers; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LockProviders; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(URebudgetCoordinatorModule, Triggers) == 48, "Offset mismatch for URebudgetCoordinatorModule::Triggers");
static_assert(offsetof(URebudgetCoordinatorModule, LockProviders) == 64, "Offset mismatch for URebudgetCoordinatorModule::LockProviders");

// /Script/CosmeticsFrameworkBudgeting.RebudgetOnCapacityChangedTrigger
// Kind: Class; super: RebudgetTrigger
class URebudgetOnCapacityChangedTrigger
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Policy; // 0x0038 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(URebudgetOnCapacityChangedTrigger, Policy) == 56, "Offset mismatch for URebudgetOnCapacityChangedTrigger::Policy");

// /Script/CosmeticsFrameworkBudgeting.RebudgetOnTimerTrigger
// Kind: Class; super: RebudgetTrigger
class URebudgetOnTimerTrigger
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t RebudgetInterval[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    std::uint8_t IdlePollInterval[0x30]; // 0x0068 (Size: 0x30, Type: StructProperty)
    std::uint8_t ResumeMinDelay[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(URebudgetOnTimerTrigger, RebudgetInterval) == 56, "Offset mismatch for URebudgetOnTimerTrigger::RebudgetInterval");
static_assert(offsetof(URebudgetOnTimerTrigger, IdlePollInterval) == 104, "Offset mismatch for URebudgetOnTimerTrigger::IdlePollInterval");
static_assert(offsetof(URebudgetOnTimerTrigger, ResumeMinDelay) == 152, "Offset mismatch for URebudgetOnTimerTrigger::ResumeMinDelay");

// /Script/CosmeticsFrameworkBudgeting.RebudgetTrigger
// Kind: Class; super: Object
class URebudgetTrigger
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName RequiredCVarName; // 0x0028 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(URebudgetTrigger, RequiredCVarName) == 40, "Offset mismatch for URebudgetTrigger::RequiredCVarName");
