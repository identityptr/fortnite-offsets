#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CreativeDataChannelTriggerRuntime
{
    struct CreativeDataChannelAnalytics
    {
        static constexpr std::string_view Name = "CreativeDataChannelAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CreativeDataChannelTarget
    {
        static constexpr std::string_view Name = "CreativeDataChannelTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ElectraDataChannelTarget";
        struct Offsets
        {
            static constexpr std::uintptr_t VersionByte = 0x2B8;
            static constexpr std::uintptr_t Events = 0x2C0;
            static constexpr std::uintptr_t OnEventsRep = 0x2D0;
            static constexpr std::uintptr_t EventsCache = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"VersionByte", 0x2B8, "Int8Property"},
            {"Events", 0x2C0, "StructProperty"},
            {"OnEventsRep", 0x2D0, "MulticastInlineDelegateProperty"},
            {"EventsCache", 0x2E0, "StructProperty"},
        }};
    };

    struct CreativeDataChannelTargetFN
    {
        static constexpr std::string_view Name = "CreativeDataChannelTargetFN";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ElectraDataChannelTarget";
        struct Offsets
        {
            static constexpr std::uintptr_t VersionByte = 0x2B8;
            static constexpr std::uintptr_t VersionByteTracker = 0x2BC;
            static constexpr std::uintptr_t VersionByteEvent = 0x2C0;
            static constexpr std::uintptr_t LeaderBoard = 0x2D0;
            static constexpr std::uintptr_t StormCircleSize = 0x2E0;
            static constexpr std::uintptr_t StormCircleSizeTracker = 0x2E8;
            static constexpr std::uintptr_t StormCircleSizeEvent = 0x2F0;
            static constexpr std::uintptr_t StormCircleLocation = 0x300;
            static constexpr std::uintptr_t StormCircleLocationTracker = 0x310;
            static constexpr std::uintptr_t StormCircleLocationEvent = 0x320;
            static constexpr std::uintptr_t PlayerLocation = 0x330;
            static constexpr std::uintptr_t PlayerLocationTracker = 0x340;
            static constexpr std::uintptr_t PlayerLocationEvent = 0x350;
            static constexpr std::uintptr_t ArenaPointLeaderBoard = 0x360;
            static constexpr std::uintptr_t ArenaPointLeaderBoardTracker = 0x370;
            static constexpr std::uintptr_t ArenaPointLeaderBoardEvent = 0x390;
            static constexpr std::uintptr_t CashCupDataAllTimeEarners = 0x3A0;
            static constexpr std::uintptr_t CashCupDataAllTimeEanersTracker = 0x3B0;
            static constexpr std::uintptr_t CashCupDataAllTimeEarnersEvent = 0x3C0;
            static constexpr std::uintptr_t MythicBossEliminatedPlayer = 0x3D0;
            static constexpr std::uintptr_t MythicBossEliminatedPlayerTracker = 0x3E0;
            static constexpr std::uintptr_t MythicBossEliminatedPlayerEvent = 0x3F0;
            static constexpr std::uintptr_t MythicWeaponPlayer = 0x400;
            static constexpr std::uintptr_t MythicWeaponPlayerTracker = 0x410;
            static constexpr std::uintptr_t MythicWeaponPlayerEvent = 0x420;
            static constexpr std::uintptr_t PlayerInfo = 0x430;
            static constexpr std::uintptr_t PlayerInfoTracker = 0x440;
            static constexpr std::uintptr_t PlayerInfoEvent = 0x458;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"VersionByte", 0x2B8, "IntProperty"},
            {"VersionByteTracker", 0x2BC, "StructProperty"},
            {"VersionByteEvent", 0x2C0, "MulticastInlineDelegateProperty"},
            {"LeaderBoard", 0x2D0, "StrProperty"},
            {"StormCircleSize", 0x2E0, "Int64Property"},
            {"StormCircleSizeTracker", 0x2E8, "StructProperty"},
            {"StormCircleSizeEvent", 0x2F0, "MulticastInlineDelegateProperty"},
            {"StormCircleLocation", 0x300, "ArrayProperty"},
            {"StormCircleLocationTracker", 0x310, "StructProperty"},
            {"StormCircleLocationEvent", 0x320, "MulticastInlineDelegateProperty"},
            {"PlayerLocation", 0x330, "StrProperty"},
            {"PlayerLocationTracker", 0x340, "StructProperty"},
            {"PlayerLocationEvent", 0x350, "MulticastInlineDelegateProperty"},
            {"ArenaPointLeaderBoard", 0x360, "StrProperty"},
            {"ArenaPointLeaderBoardTracker", 0x370, "StructProperty"},
            {"ArenaPointLeaderBoardEvent", 0x390, "MulticastInlineDelegateProperty"},
            {"CashCupDataAllTimeEarners", 0x3A0, "StrProperty"},
            {"CashCupDataAllTimeEanersTracker", 0x3B0, "StructProperty"},
            {"CashCupDataAllTimeEarnersEvent", 0x3C0, "MulticastInlineDelegateProperty"},
            {"MythicBossEliminatedPlayer", 0x3D0, "StrProperty"},
            {"MythicBossEliminatedPlayerTracker", 0x3E0, "StructProperty"},
            {"MythicBossEliminatedPlayerEvent", 0x3F0, "MulticastInlineDelegateProperty"},
            {"MythicWeaponPlayer", 0x400, "StrProperty"},
            {"MythicWeaponPlayerTracker", 0x410, "StructProperty"},
            {"MythicWeaponPlayerEvent", 0x420, "MulticastInlineDelegateProperty"},
            {"PlayerInfo", 0x430, "StrProperty"},
            {"PlayerInfoTracker", 0x440, "StructProperty"},
            {"PlayerInfoEvent", 0x458, "MulticastInlineDelegateProperty"},
        }};
    };

    struct CreativeDataChannelTargetRL
    {
        static constexpr std::string_view Name = "CreativeDataChannelTargetRL";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ElectraDataChannelTarget";
        struct Offsets
        {
            static constexpr std::uintptr_t VersionByte = 0x2B8;
            static constexpr std::uintptr_t VersionByteTracker = 0x2BC;
            static constexpr std::uintptr_t VersionByteEvent = 0x2C0;
            static constexpr std::uintptr_t ScoreTeam = 0x2D0;
            static constexpr std::uintptr_t ScoreTeamTracker = 0x2D8;
            static constexpr std::uintptr_t ScoreTeamEvent = 0x2E8;
            static constexpr std::uintptr_t ScoreTotal = 0x2F8;
            static constexpr std::uintptr_t ScoreTotalTracker = 0x308;
            static constexpr std::uintptr_t ScoreTotalEvent = 0x318;
            static constexpr std::uintptr_t ScoreboardTimeLeft = 0x328;
            static constexpr std::uintptr_t ScoreboardTimeLeftTracker = 0x330;
            static constexpr std::uintptr_t ScoreboardTimeLeftEvent = 0x338;
            static constexpr std::uintptr_t ScoreboardBestOf = 0x348;
            static constexpr std::uintptr_t ScoreboardBestOfTracker = 0x358;
            static constexpr std::uintptr_t ScoreboardBestOfEvent = 0x368;
            static constexpr std::uintptr_t Overtime = 0x378;
            static constexpr std::uintptr_t OvertimeTracker = 0x37C;
            static constexpr std::uintptr_t OvertimeEvent = 0x380;
            static constexpr std::uintptr_t TeamNames = 0x390;
            static constexpr std::uintptr_t TeamNamesTracker = 0x3A0;
            static constexpr std::uintptr_t TeamNamesEvent = 0x3B8;
            static constexpr std::uintptr_t PlayerNames = 0x3C8;
            static constexpr std::uintptr_t PlayerNamesTracker = 0x3D8;
            static constexpr std::uintptr_t PlayerNamesEvent = 0x3F0;
            static constexpr std::uintptr_t PlayerBoost = 0x400;
            static constexpr std::uintptr_t PlayerBoostTracker = 0x410;
            static constexpr std::uintptr_t PlayerBoostEvent = 0x420;
            static constexpr std::uintptr_t PlayerBoostCollected = 0x430;
            static constexpr std::uintptr_t PlayerBoostCollectedTracker = 0x440;
            static constexpr std::uintptr_t PlayerBoostCollectedEvent = 0x460;
            static constexpr std::uintptr_t PlayerCoords = 0x470;
            static constexpr std::uintptr_t PlayerCoordsTracker = 0x480;
            static constexpr std::uintptr_t PlayerCoordsEvent = 0x490;
            static constexpr std::uintptr_t BallCoords = 0x4A0;
            static constexpr std::uintptr_t BallCoordsTracker = 0x4B0;
            static constexpr std::uintptr_t BallCoordsEvent = 0x4C0;
            static constexpr std::uintptr_t MediaStart = 0x4D0;
            static constexpr std::uintptr_t MediaStartTracker = 0x4E0;
            static constexpr std::uintptr_t MediaStartEvent = 0x500;
            static constexpr std::uintptr_t MediaStop = 0x510;
            static constexpr std::uintptr_t MediaStopTracker = 0x514;
            static constexpr std::uintptr_t MediaStopEvent = 0x518;
            static constexpr std::uintptr_t SeriesState = 0x528;
            static constexpr std::uintptr_t SeriesStateTracker = 0x52C;
            static constexpr std::uintptr_t SeriesStateEvent = 0x530;
            static constexpr std::uintptr_t MatchState = 0x540;
            static constexpr std::uintptr_t MatchStateTracker = 0x544;
            static constexpr std::uintptr_t MatchStateEvent = 0x548;
            static constexpr std::uintptr_t FinaleState = 0x558;
            static constexpr std::uintptr_t FinaleStateTracker = 0x55C;
            static constexpr std::uintptr_t FinaleStateEvent = 0x560;
        };

        inline static constexpr std::array<PropertyInfo, 51> Properties{{
            {"VersionByte", 0x2B8, "IntProperty"},
            {"VersionByteTracker", 0x2BC, "StructProperty"},
            {"VersionByteEvent", 0x2C0, "MulticastInlineDelegateProperty"},
            {"ScoreTeam", 0x2D0, "IntProperty"},
            {"ScoreTeamTracker", 0x2D8, "StructProperty"},
            {"ScoreTeamEvent", 0x2E8, "MulticastInlineDelegateProperty"},
            {"ScoreTotal", 0x2F8, "StrProperty"},
            {"ScoreTotalTracker", 0x308, "StructProperty"},
            {"ScoreTotalEvent", 0x318, "MulticastInlineDelegateProperty"},
            {"ScoreboardTimeLeft", 0x328, "Int64Property"},
            {"ScoreboardTimeLeftTracker", 0x330, "StructProperty"},
            {"ScoreboardTimeLeftEvent", 0x338, "MulticastInlineDelegateProperty"},
            {"ScoreboardBestOf", 0x348, "StrProperty"},
            {"ScoreboardBestOfTracker", 0x358, "StructProperty"},
            {"ScoreboardBestOfEvent", 0x368, "MulticastInlineDelegateProperty"},
            {"Overtime", 0x378, "IntProperty"},
            {"OvertimeTracker", 0x37C, "StructProperty"},
            {"OvertimeEvent", 0x380, "MulticastInlineDelegateProperty"},
            {"TeamNames", 0x390, "StrProperty"},
            {"TeamNamesTracker", 0x3A0, "StructProperty"},
            {"TeamNamesEvent", 0x3B8, "MulticastInlineDelegateProperty"},
            {"PlayerNames", 0x3C8, "StrProperty"},
            {"PlayerNamesTracker", 0x3D8, "StructProperty"},
            {"PlayerNamesEvent", 0x3F0, "MulticastInlineDelegateProperty"},
            {"PlayerBoost", 0x400, "StrProperty"},
            {"PlayerBoostTracker", 0x410, "StructProperty"},
            {"PlayerBoostEvent", 0x420, "MulticastInlineDelegateProperty"},
            {"PlayerBoostCollected", 0x430, "StrProperty"},
            {"PlayerBoostCollectedTracker", 0x440, "StructProperty"},
            {"PlayerBoostCollectedEvent", 0x460, "MulticastInlineDelegateProperty"},
            {"PlayerCoords", 0x470, "StrProperty"},
            {"PlayerCoordsTracker", 0x480, "StructProperty"},
            {"PlayerCoordsEvent", 0x490, "MulticastInlineDelegateProperty"},
            {"BallCoords", 0x4A0, "StrProperty"},
            {"BallCoordsTracker", 0x4B0, "StructProperty"},
            {"BallCoordsEvent", 0x4C0, "MulticastInlineDelegateProperty"},
            {"MediaStart", 0x4D0, "StrProperty"},
            {"MediaStartTracker", 0x4E0, "StructProperty"},
            {"MediaStartEvent", 0x500, "MulticastInlineDelegateProperty"},
            {"MediaStop", 0x510, "IntProperty"},
            {"MediaStopTracker", 0x514, "StructProperty"},
            {"MediaStopEvent", 0x518, "MulticastInlineDelegateProperty"},
            {"SeriesState", 0x528, "IntProperty"},
            {"SeriesStateTracker", 0x52C, "StructProperty"},
            {"SeriesStateEvent", 0x530, "MulticastInlineDelegateProperty"},
            {"MatchState", 0x540, "IntProperty"},
            {"MatchStateTracker", 0x544, "StructProperty"},
            {"MatchStateEvent", 0x548, "MulticastInlineDelegateProperty"},
            {"FinaleState", 0x558, "IntProperty"},
            {"FinaleStateTracker", 0x55C, "StructProperty"},
            {"FinaleStateEvent", 0x560, "MulticastInlineDelegateProperty"},
        }};
    };

}
