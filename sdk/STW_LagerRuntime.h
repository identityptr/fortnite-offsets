/**
 * decamp dumper generated SDK
 * Package: /Script/STW_LagerRuntime
 */
#pragma once
#include "Basic.h"

// /Script/STW_LagerRuntime.FortQuestLivingWorldVolume
// Kind: Class; super: FortAthenaLivingWorldVolume
class UFortQuestLivingWorldVolume
{
public:
    std::uint8_t Pad_0000[0x540]; // 0x0000
    std::uint8_t NoPlayerNeedsQuestFilterTags[0x20]; // 0x0540 (Size: 0x20, Type: StructProperty)
    std::uint8_t PlayerNeedsQuestFilterTags[0x20]; // 0x0560 (Size: 0x20, Type: StructProperty)
    void* RequiredQuest; // 0x0580 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortQuestLivingWorldVolume, NoPlayerNeedsQuestFilterTags) == 1344, "Offset mismatch for UFortQuestLivingWorldVolume::NoPlayerNeedsQuestFilterTags");
static_assert(offsetof(UFortQuestLivingWorldVolume, PlayerNeedsQuestFilterTags) == 1376, "Offset mismatch for UFortQuestLivingWorldVolume::PlayerNeedsQuestFilterTags");
static_assert(offsetof(UFortQuestLivingWorldVolume, RequiredQuest) == 1408, "Offset mismatch for UFortQuestLivingWorldVolume::RequiredQuest");
