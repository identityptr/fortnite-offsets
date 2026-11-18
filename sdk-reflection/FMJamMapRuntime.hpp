#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FMJamMapRuntime
{
    struct FMJamMapInputBasedAFKComponent
    {
        static constexpr std::string_view Name = "FMJamMapInputBasedAFKComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortInputBasedAFKComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AFKTableRowEntry = 0x1D8;
            static constexpr std::uintptr_t CachedAFKDetectionParameters = 0x1E8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AFKTableRowEntry", 0x1D8, "StructProperty"},
            {"CachedAFKDetectionParameters", 0x1E8, "StructProperty"},
        }};
    };

    struct FortAthenaMutator_FMJamPlayerIndicators
    {
        static constexpr std::string_view Name = "FortAthenaMutator_FMJamPlayerIndicators";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t bMutatesGameMode = 0x2B8;
            static constexpr std::uintptr_t bMutatesGameState = 0x2B8;
            static constexpr std::uintptr_t CachedGameMode = 0x2C0;
            static constexpr std::uintptr_t CachedGameState = 0x2C8;
            static constexpr std::uintptr_t InitializedPlayerControllers = 0x2D0;
            static constexpr std::uintptr_t OverridePriority = 0x2E4;
            static constexpr std::uintptr_t bOnlyRunOnGameThread = 0x2E5;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bMutatesGameMode", 0x2B8, "BoolProperty"},
            {"bMutatesGameState", 0x2B8, "BoolProperty"},
            {"CachedGameMode", 0x2C0, "ObjectProperty"},
            {"CachedGameState", 0x2C8, "ObjectProperty"},
            {"InitializedPlayerControllers", 0x2D0, "SetProperty"},
            {"OverridePriority", 0x2E4, "EnumProperty"},
            {"bOnlyRunOnGameThread", 0x2E5, "BoolProperty"},
        }};
    };

    struct JamIslandPlayspaceComponent_ServerExpiration
    {
        static constexpr std::string_view Name = "JamIslandPlayspaceComponent_ServerExpiration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayspaceComponent_ServerExpiration";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedShutdownTimeInSeconds = 0x158;
            static constexpr std::uintptr_t StartShutdownTimerOnGracefulShutdownRequest = 0x15C;
            static constexpr std::uintptr_t bDisableBackfillBeforeExpiration = 0x15D;
            static constexpr std::uintptr_t bDisableBackfillOnGracefulShutdown = 0x15E;
            static constexpr std::uintptr_t AlertDataList = 0x160;
            static constexpr std::uintptr_t ServerShutdownTimeInSeconds = 0x170;
            static constexpr std::uintptr_t DisableBackfillBeforeExpireTimeInSeconds = 0x174;
            static constexpr std::uintptr_t PostShutdownForceRestartTimeInSeconds = 0x178;
            static constexpr std::uintptr_t UINotificationIcon = 0x180;
            static constexpr std::uintptr_t GracefulShutdownInitiatedEventHandle = 0x1F0;
            static constexpr std::uintptr_t ShutdownTimeOverrides = 0x210;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ReplicatedShutdownTimeInSeconds", 0x158, "IntProperty"},
            {"StartShutdownTimerOnGracefulShutdownRequest", 0x15C, "BoolProperty"},
            {"bDisableBackfillBeforeExpiration", 0x15D, "BoolProperty"},
            {"bDisableBackfillOnGracefulShutdown", 0x15E, "BoolProperty"},
            {"AlertDataList", 0x160, "ArrayProperty"},
            {"ServerShutdownTimeInSeconds", 0x170, "IntProperty"},
            {"DisableBackfillBeforeExpireTimeInSeconds", 0x174, "IntProperty"},
            {"PostShutdownForceRestartTimeInSeconds", 0x178, "IntProperty"},
            {"UINotificationIcon", 0x180, "SoftObjectProperty"},
            {"GracefulShutdownInitiatedEventHandle", 0x1F0, "StructProperty"},
            {"ShutdownTimeOverrides", 0x210, "ArrayProperty"},
        }};
    };

}
