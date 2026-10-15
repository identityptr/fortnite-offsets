/**
 * decamp dumper generated SDK
 * Package: /Game/Balance/BudgetCategories/BP_BudgetCategory_Pickaxe
 */
#pragma once
#include "Basic.h"

// /Game/Balance/BudgetCategories/BP_BudgetCategory_Pickaxe.BP_BudgetCategory_Pickaxe_C
// Kind: BlueprintGeneratedClass; super: DataDrivenBudgetCategoryInstance
class UBP_BudgetCategory_Pickaxe_C
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

static_assert(offsetof(UBP_BudgetCategory_Pickaxe_C, RegistrationHandler) == 112, "Offset mismatch for UBP_BudgetCategory_Pickaxe_C::RegistrationHandler");
static_assert(offsetof(UBP_BudgetCategory_Pickaxe_C, CostProvider) == 120, "Offset mismatch for UBP_BudgetCategory_Pickaxe_C::CostProvider");
static_assert(offsetof(UBP_BudgetCategory_Pickaxe_C, CapacityProvider) == 128, "Offset mismatch for UBP_BudgetCategory_Pickaxe_C::CapacityProvider");
static_assert(offsetof(UBP_BudgetCategory_Pickaxe_C, CapacityMultiplier) == 136, "Offset mismatch for UBP_BudgetCategory_Pickaxe_C::CapacityMultiplier");
static_assert(offsetof(UBP_BudgetCategory_Pickaxe_C, ScoreProvider) == 144, "Offset mismatch for UBP_BudgetCategory_Pickaxe_C::ScoreProvider");
static_assert(offsetof(UBP_BudgetCategory_Pickaxe_C, RebudgetCoordinator) == 152, "Offset mismatch for UBP_BudgetCategory_Pickaxe_C::RebudgetCoordinator");
static_assert(offsetof(UBP_BudgetCategory_Pickaxe_C, AnalyticsProvider) == 160, "Offset mismatch for UBP_BudgetCategory_Pickaxe_C::AnalyticsProvider");
static_assert(offsetof(UBP_BudgetCategory_Pickaxe_C, CustomCategoryModulesById) == 168, "Offset mismatch for UBP_BudgetCategory_Pickaxe_C::CustomCategoryModulesById");
static_assert(offsetof(UBP_BudgetCategory_Pickaxe_C, RemainingCapacityCSVStatName) == 216, "Offset mismatch for UBP_BudgetCategory_Pickaxe_C::RemainingCapacityCSVStatName");
