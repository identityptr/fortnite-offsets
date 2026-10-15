/**
 * decamp dumper generated SDK
 * Package: /Script/OodleNetworkHandlerComponent
 */
#pragma once
#include "Basic.h"

// /Script/OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
// Kind: Class; super: Commandlet
class UOodleNetworkTrainerCommandlet
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    std::uint8_t bCompressionTest; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bWriteV5Dictionaries; // 0x0081 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0082
    std::int32_t HashTableSize; // 0x0084 (Size: 0x4, Type: IntProperty)
    std::int32_t DictionarySize; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::int32_t DictionaryTrials; // 0x008C (Size: 0x4, Type: IntProperty)
    std::int32_t TrialRandomness; // 0x0090 (Size: 0x4, Type: IntProperty)
    std::int32_t TrialGenerations; // 0x0094 (Size: 0x4, Type: IntProperty)
    std::uint8_t bNoTrials; // 0x0098 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UOodleNetworkTrainerCommandlet, bCompressionTest) == 128, "Offset mismatch for UOodleNetworkTrainerCommandlet::bCompressionTest");
static_assert(offsetof(UOodleNetworkTrainerCommandlet, bWriteV5Dictionaries) == 129, "Offset mismatch for UOodleNetworkTrainerCommandlet::bWriteV5Dictionaries");
static_assert(offsetof(UOodleNetworkTrainerCommandlet, HashTableSize) == 132, "Offset mismatch for UOodleNetworkTrainerCommandlet::HashTableSize");
static_assert(offsetof(UOodleNetworkTrainerCommandlet, DictionarySize) == 136, "Offset mismatch for UOodleNetworkTrainerCommandlet::DictionarySize");
static_assert(offsetof(UOodleNetworkTrainerCommandlet, DictionaryTrials) == 140, "Offset mismatch for UOodleNetworkTrainerCommandlet::DictionaryTrials");
static_assert(offsetof(UOodleNetworkTrainerCommandlet, TrialRandomness) == 144, "Offset mismatch for UOodleNetworkTrainerCommandlet::TrialRandomness");
static_assert(offsetof(UOodleNetworkTrainerCommandlet, TrialGenerations) == 148, "Offset mismatch for UOodleNetworkTrainerCommandlet::TrialGenerations");
static_assert(offsetof(UOodleNetworkTrainerCommandlet, bNoTrials) == 152, "Offset mismatch for UOodleNetworkTrainerCommandlet::bNoTrials");
