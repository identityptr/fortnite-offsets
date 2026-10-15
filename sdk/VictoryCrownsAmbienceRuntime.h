/**
 * decamp dumper generated SDK
 * Package: /Script/VictoryCrownsAmbienceRuntime
 */
#pragma once
#include "Basic.h"

// /Script/VictoryCrownsAmbienceRuntime.VictoryCrownPlaylistData
// Kind: ScriptStruct; super: TableRowBase
struct FVictoryCrownPlaylistData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t MaxRankingForCrownAward; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FVictoryCrownPlaylistData, MaxRankingForCrownAward) == 8, "Offset mismatch for FVictoryCrownPlaylistData::MaxRankingForCrownAward");

// /Script/VictoryCrownsAmbienceRuntime.FortGameplayCueNotify_CrownWear
// Kind: Class; super: FortGameplayCueNotify_Loop
class UFortGameplayCueNotify_CrownWear
{
public:
    std::uint8_t Pad_0000[0xC48]; // 0x0000
    std::uint8_t IntroFXVisualVolume[0x28]; // 0x0C48 (Size: 0x28, Type: StructProperty)
    std::uint8_t IntroFXTimelineRate[0x28]; // 0x0C70 (Size: 0x28, Type: StructProperty)
    std::uint8_t IntroFXUpdatePrecision[0x28]; // 0x0C98 (Size: 0x28, Type: StructProperty)
    TArray<void*> IntroFXUpdateFrequencies; // 0x0CC0 (Size: 0x10, Type: ArrayProperty)
    void* IntroFXCurve; // 0x0CD0 (Size: 0x8, Type: ObjectProperty)
    void* IntroFXTimeline; // 0x0CD8 (Size: 0x8, Type: ObjectProperty)
    void* CrownParticleComponent; // 0x0CE0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortGameplayCueNotify_CrownWear, IntroFXVisualVolume) == 3144, "Offset mismatch for UFortGameplayCueNotify_CrownWear::IntroFXVisualVolume");
static_assert(offsetof(UFortGameplayCueNotify_CrownWear, IntroFXTimelineRate) == 3184, "Offset mismatch for UFortGameplayCueNotify_CrownWear::IntroFXTimelineRate");
static_assert(offsetof(UFortGameplayCueNotify_CrownWear, IntroFXUpdatePrecision) == 3224, "Offset mismatch for UFortGameplayCueNotify_CrownWear::IntroFXUpdatePrecision");
static_assert(offsetof(UFortGameplayCueNotify_CrownWear, IntroFXUpdateFrequencies) == 3264, "Offset mismatch for UFortGameplayCueNotify_CrownWear::IntroFXUpdateFrequencies");
static_assert(offsetof(UFortGameplayCueNotify_CrownWear, IntroFXCurve) == 3280, "Offset mismatch for UFortGameplayCueNotify_CrownWear::IntroFXCurve");
static_assert(offsetof(UFortGameplayCueNotify_CrownWear, IntroFXTimeline) == 3288, "Offset mismatch for UFortGameplayCueNotify_CrownWear::IntroFXTimeline");
static_assert(offsetof(UFortGameplayCueNotify_CrownWear, CrownParticleComponent) == 3296, "Offset mismatch for UFortGameplayCueNotify_CrownWear::CrownParticleComponent");

// /Script/VictoryCrownsAmbienceRuntime.FortPawnComponent_VictoryCrownsFrontEnd
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_VictoryCrownsFrontEnd
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* VictoryCrownPlaylistData; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bInitializeSuccess; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSelectedPlaylistSupportCrown; // 0x00D1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00D2
    void* PersistentParty; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortPawnComponent_VictoryCrownsFrontEnd, VictoryCrownPlaylistData) == 200, "Offset mismatch for UFortPawnComponent_VictoryCrownsFrontEnd::VictoryCrownPlaylistData");
static_assert(offsetof(UFortPawnComponent_VictoryCrownsFrontEnd, bInitializeSuccess) == 208, "Offset mismatch for UFortPawnComponent_VictoryCrownsFrontEnd::bInitializeSuccess");
static_assert(offsetof(UFortPawnComponent_VictoryCrownsFrontEnd, bSelectedPlaylistSupportCrown) == 209, "Offset mismatch for UFortPawnComponent_VictoryCrownsFrontEnd::bSelectedPlaylistSupportCrown");
static_assert(offsetof(UFortPawnComponent_VictoryCrownsFrontEnd, PersistentParty) == 216, "Offset mismatch for UFortPawnComponent_VictoryCrownsFrontEnd::PersistentParty");
