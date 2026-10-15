/**
 * decamp dumper generated SDK
 * Package: /Script/JunoNeptuneUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoNeptuneUI.JunoStormKingHealthInfo
// Kind: ScriptStruct; super: none
struct FJunoStormKingHealthInfo
{
public:
    float HealthPercent; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t HealthType; // 0x0004 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FJunoStormKingHealthInfo, HealthPercent) == 0, "Offset mismatch for FJunoStormKingHealthInfo::HealthPercent");
static_assert(offsetof(FJunoStormKingHealthInfo, HealthType) == 4, "Offset mismatch for FJunoStormKingHealthInfo::HealthType");

// /Script/JunoNeptuneUI.JunoQuestObjectiveViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoQuestObjectiveViewModel
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::uint8_t QuestName[0x10]; // 0x0088 (Size: 0x10, Type: TextProperty)
    std::uint8_t FlavorText[0x10]; // 0x0098 (Size: 0x10, Type: TextProperty)
    std::int32_t AchievedCount; // 0x00A8 (Size: 0x4, Type: IntProperty)
    std::int32_t RequiredCount; // 0x00AC (Size: 0x4, Type: IntProperty)
    std::uint8_t bHasExpirationTime; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B1
    std::uint8_t ExpirationTime[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoQuestObjectiveViewModel, QuestName) == 136, "Offset mismatch for UJunoQuestObjectiveViewModel::QuestName");
static_assert(offsetof(UJunoQuestObjectiveViewModel, FlavorText) == 152, "Offset mismatch for UJunoQuestObjectiveViewModel::FlavorText");
static_assert(offsetof(UJunoQuestObjectiveViewModel, AchievedCount) == 168, "Offset mismatch for UJunoQuestObjectiveViewModel::AchievedCount");
static_assert(offsetof(UJunoQuestObjectiveViewModel, RequiredCount) == 172, "Offset mismatch for UJunoQuestObjectiveViewModel::RequiredCount");
static_assert(offsetof(UJunoQuestObjectiveViewModel, bHasExpirationTime) == 176, "Offset mismatch for UJunoQuestObjectiveViewModel::bHasExpirationTime");
static_assert(offsetof(UJunoQuestObjectiveViewModel, ExpirationTime) == 184, "Offset mismatch for UJunoQuestObjectiveViewModel::ExpirationTime");

// /Script/JunoNeptuneUI.JunoRiftForgeViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoRiftForgeViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* SelectedSlot; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> StatEntries; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SelectedRecipeRequirements; // 0x0090 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RuneForgeableInventorySlots; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    void* PlayerInventoryViewModel; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* InventoryFilterViewModel; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> WeakCraftingObject; // 0x00C0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t UpgradeRegistry[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoRiftForgeViewModel, SelectedSlot) == 120, "Offset mismatch for UJunoRiftForgeViewModel::SelectedSlot");
static_assert(offsetof(UJunoRiftForgeViewModel, StatEntries) == 128, "Offset mismatch for UJunoRiftForgeViewModel::StatEntries");
static_assert(offsetof(UJunoRiftForgeViewModel, SelectedRecipeRequirements) == 144, "Offset mismatch for UJunoRiftForgeViewModel::SelectedRecipeRequirements");
static_assert(offsetof(UJunoRiftForgeViewModel, RuneForgeableInventorySlots) == 160, "Offset mismatch for UJunoRiftForgeViewModel::RuneForgeableInventorySlots");
static_assert(offsetof(UJunoRiftForgeViewModel, PlayerInventoryViewModel) == 176, "Offset mismatch for UJunoRiftForgeViewModel::PlayerInventoryViewModel");
static_assert(offsetof(UJunoRiftForgeViewModel, InventoryFilterViewModel) == 184, "Offset mismatch for UJunoRiftForgeViewModel::InventoryFilterViewModel");
static_assert(offsetof(UJunoRiftForgeViewModel, WeakCraftingObject) == 192, "Offset mismatch for UJunoRiftForgeViewModel::WeakCraftingObject");
static_assert(offsetof(UJunoRiftForgeViewModel, UpgradeRegistry) == 200, "Offset mismatch for UJunoRiftForgeViewModel::UpgradeRegistry");

// /Script/JunoNeptuneUI.JunoStormKingHealthViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoStormKingHealthViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t HealthInfo[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UJunoStormKingHealthViewModel, HealthInfo) == 120, "Offset mismatch for UJunoStormKingHealthViewModel::HealthInfo");

// /Script/JunoNeptuneUI.JunoStormRiftTimerViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoStormRiftTimerViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    float CurrentTime; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float BarPercentage; // 0x007C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UJunoStormRiftTimerViewModel, CurrentTime) == 120, "Offset mismatch for UJunoStormRiftTimerViewModel::CurrentTime");
static_assert(offsetof(UJunoStormRiftTimerViewModel, BarPercentage) == 124, "Offset mismatch for UJunoStormRiftTimerViewModel::BarPercentage");

// /Script/JunoNeptuneUI.JunoUrgentQuestsViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoUrgentQuestsViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    void* NewQuest; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* RemovedQuest; // 0x0080 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoUrgentQuestsViewModel, NewQuest) == 120, "Offset mismatch for UJunoUrgentQuestsViewModel::NewQuest");
static_assert(offsetof(UJunoUrgentQuestsViewModel, RemovedQuest) == 128, "Offset mismatch for UJunoUrgentQuestsViewModel::RemovedQuest");
