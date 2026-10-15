/**
 * decamp dumper generated SDK
 * Package: /Script/LearningTraining
 */
#pragma once
#include "Basic.h"

// /Script/LearningTraining.LearningSocketPPOTrainerServerCommandlet
// Kind: Class; super: Commandlet
class ULearningSocketPPOTrainerServerCommandlet
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString HelpDescription; // 0x0028 (Size: 0x10, Type: StrProperty)
    FString HelpUsage; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString HelpWebLink; // 0x0048 (Size: 0x10, Type: StrProperty)
    TArray<void*> HelpParamNames; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> HelpParamDescriptions; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t FastExit; // 0x0078 (Size: 0x1, Type: BoolProperty)
    // 0x0078 BoolProperty IsClient (shared storage)
    // 0x0078 BoolProperty IsEditor (shared storage)
    // 0x0078 BoolProperty IsServer (shared storage)
    // 0x0078 BoolProperty LogToConsole (shared storage)
    // 0x0078 BoolProperty ShowErrorCount (shared storage)
    // 0x0078 BoolProperty ShowProgress (shared storage)
    // 0x0078 BoolProperty UseCommandletResultAsExitCode (shared storage)
};

static_assert(offsetof(ULearningSocketPPOTrainerServerCommandlet, HelpDescription) == 40, "Offset mismatch for ULearningSocketPPOTrainerServerCommandlet::HelpDescription");
static_assert(offsetof(ULearningSocketPPOTrainerServerCommandlet, HelpUsage) == 56, "Offset mismatch for ULearningSocketPPOTrainerServerCommandlet::HelpUsage");
static_assert(offsetof(ULearningSocketPPOTrainerServerCommandlet, HelpWebLink) == 72, "Offset mismatch for ULearningSocketPPOTrainerServerCommandlet::HelpWebLink");
static_assert(offsetof(ULearningSocketPPOTrainerServerCommandlet, HelpParamNames) == 88, "Offset mismatch for ULearningSocketPPOTrainerServerCommandlet::HelpParamNames");
static_assert(offsetof(ULearningSocketPPOTrainerServerCommandlet, HelpParamDescriptions) == 104, "Offset mismatch for ULearningSocketPPOTrainerServerCommandlet::HelpParamDescriptions");
static_assert(offsetof(ULearningSocketPPOTrainerServerCommandlet, FastExit) == 120, "Offset mismatch for ULearningSocketPPOTrainerServerCommandlet::FastExit");
