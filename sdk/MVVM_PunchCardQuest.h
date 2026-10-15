/**
 * decamp dumper generated SDK
 * Package: /QuestUI/QuestScreen/Modal/MVVM_PunchCardQuest
 */
#pragma once
#include "Basic.h"

// /QuestUI/QuestScreen/Modal/MVVM_PunchCardQuest.MVVM_PunchCardQuest_C
// Kind: BlueprintGeneratedClass; super: MVVMViewModelBase
class UMVVM_PunchCardQuest_C
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* QuestData; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0070
    std::uint8_t CustomWidget[0x20]; // 0x0078 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t CustomBackground[0x20]; // 0x0098 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> Rewards; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMVVM_PunchCardQuest_C, QuestData) == 104, "Offset mismatch for UMVVM_PunchCardQuest_C::QuestData");
static_assert(offsetof(UMVVM_PunchCardQuest_C, CustomWidget) == 120, "Offset mismatch for UMVVM_PunchCardQuest_C::CustomWidget");
static_assert(offsetof(UMVVM_PunchCardQuest_C, CustomBackground) == 152, "Offset mismatch for UMVVM_PunchCardQuest_C::CustomBackground");
static_assert(offsetof(UMVVM_PunchCardQuest_C, Rewards) == 184, "Offset mismatch for UMVVM_PunchCardQuest_C::Rewards");
