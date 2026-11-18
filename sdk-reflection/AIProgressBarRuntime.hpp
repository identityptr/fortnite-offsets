#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AIProgressBarRuntime
{
    struct ChallengeManagerBase
    {
        static constexpr std::string_view Name = "ChallengeManagerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t OnBossProgressUpdated = 0x278;
            static constexpr std::uintptr_t OnCurrentStateUpdated = 0x288;
            static constexpr std::uintptr_t OnChallengeBegun = 0x298;
            static constexpr std::uintptr_t OnStageAdvanced = 0x2A8;
            static constexpr std::uintptr_t OnBossReadyForFinalFight = 0x2B8;
            static constexpr std::uintptr_t OnTotalProgressUpdated = 0x2C8;
            static constexpr std::uintptr_t EncounterRef = 0x2D8;
            static constexpr std::uintptr_t ChallengeIDTag = 0x2E0;
            static constexpr std::uintptr_t LooseTagToApplyWhileInChallenge = 0x2E8;
            static constexpr std::uintptr_t CurrentChallengeID = 0x308;
            static constexpr std::uintptr_t bBossDeathCompletesChallenge = 0x30C;
            static constexpr std::uintptr_t BossIDTag = 0x310;
            static constexpr std::uintptr_t BossActor = 0x318;
            static constexpr std::uintptr_t bIsBossReadyForFinalFight = 0x320;
            static constexpr std::uintptr_t StageData = 0x328;
            static constexpr std::uintptr_t bCountMinionDeathForProgress = 0x338;
            static constexpr std::uintptr_t BossProgress = 0x340;
            static constexpr std::uintptr_t CurrentState = 0x348;
            static constexpr std::uintptr_t CurrentStage = 0x34C;
            static constexpr std::uintptr_t CurrentPhase = 0x350;
            static constexpr std::uintptr_t CurrentPhaseProgress = 0x354;
            static constexpr std::uintptr_t CurrentPhaseProgressTarget = 0x358;
            static constexpr std::uintptr_t PhaseProgressTargets = 0x360;
            static constexpr std::uintptr_t TotalProgress = 0x370;
            static constexpr std::uintptr_t TotalProgressToStageAdvance = 0x378;
            static constexpr std::uintptr_t GoalTargetIndexByPlaylist = 0x388;
            static constexpr std::uintptr_t CurrentPhaseMusicTag = 0x38C;
            static constexpr std::uintptr_t PhaseMusicTags = 0x390;
            static constexpr std::uintptr_t RowDisableMapIconOnBossSpawn = 0x3A0;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"OnBossProgressUpdated", 0x278, "MulticastInlineDelegateProperty"},
            {"OnCurrentStateUpdated", 0x288, "MulticastInlineDelegateProperty"},
            {"OnChallengeBegun", 0x298, "MulticastInlineDelegateProperty"},
            {"OnStageAdvanced", 0x2A8, "MulticastInlineDelegateProperty"},
            {"OnBossReadyForFinalFight", 0x2B8, "MulticastInlineDelegateProperty"},
            {"OnTotalProgressUpdated", 0x2C8, "MulticastInlineDelegateProperty"},
            {"EncounterRef", 0x2D8, "ObjectProperty"},
            {"ChallengeIDTag", 0x2E0, "StructProperty"},
            {"LooseTagToApplyWhileInChallenge", 0x2E8, "StructProperty"},
            {"CurrentChallengeID", 0x308, "StructProperty"},
            {"bBossDeathCompletesChallenge", 0x30C, "BoolProperty"},
            {"BossIDTag", 0x310, "StructProperty"},
            {"BossActor", 0x318, "ObjectProperty"},
            {"bIsBossReadyForFinalFight", 0x320, "BoolProperty"},
            {"StageData", 0x328, "ArrayProperty"},
            {"bCountMinionDeathForProgress", 0x338, "BoolProperty"},
            {"BossProgress", 0x340, "DoubleProperty"},
            {"CurrentState", 0x348, "EnumProperty"},
            {"CurrentStage", 0x34C, "IntProperty"},
            {"CurrentPhase", 0x350, "IntProperty"},
            {"CurrentPhaseProgress", 0x354, "IntProperty"},
            {"CurrentPhaseProgressTarget", 0x358, "IntProperty"},
            {"PhaseProgressTargets", 0x360, "ArrayProperty"},
            {"TotalProgress", 0x370, "IntProperty"},
            {"TotalProgressToStageAdvance", 0x378, "ArrayProperty"},
            {"GoalTargetIndexByPlaylist", 0x388, "IntProperty"},
            {"CurrentPhaseMusicTag", 0x38C, "StructProperty"},
            {"PhaseMusicTags", 0x390, "ArrayProperty"},
            {"RowDisableMapIconOnBossSpawn", 0x3A0, "StructProperty"},
        }};
    };

}
