#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortMagpiePlayerInterfaceRuntime
{
    struct FortMagpiePlayerInterfaceCheatManagerExtension
    {
        static constexpr std::string_view Name = "FortMagpiePlayerInterfaceCheatManagerExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CheatManagerExtension";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortMagpiePlayerInterfaceSubsystem
    {
        static constexpr std::string_view Name = "FortMagpiePlayerInterfaceSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t TickRate = 0x100;
            static constexpr std::uintptr_t QueryInventoryRetryBackoff = 0x108;
            static constexpr std::uintptr_t MaxApplyOperationRetries = 0x110;
            static constexpr std::uintptr_t ApplyOperationRetryDenyList = 0x118;
            static constexpr std::uintptr_t ApplyOperationMaxCountExceededError = 0x128;
            static constexpr std::uintptr_t ApplyOperationMaxPendingOperations = 0x138;
            static constexpr std::uintptr_t ApplyOperationMinimumInterval = 0x140;
            static constexpr std::uintptr_t ApplyOperationRetryDelay = 0x144;
            static constexpr std::uintptr_t ApplyOperationMaxInFlightRequests = 0x148;
            static constexpr std::uintptr_t CacheClearDelay = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"TickRate", 0x100, "FloatProperty"},
            {"QueryInventoryRetryBackoff", 0x108, "DoubleProperty"},
            {"MaxApplyOperationRetries", 0x110, "Int64Property"},
            {"ApplyOperationRetryDenyList", 0x118, "ArrayProperty"},
            {"ApplyOperationMaxCountExceededError", 0x128, "StrProperty"},
            {"ApplyOperationMaxPendingOperations", 0x138, "Int64Property"},
            {"ApplyOperationMinimumInterval", 0x140, "FloatProperty"},
            {"ApplyOperationRetryDelay", 0x144, "FloatProperty"},
            {"ApplyOperationMaxInFlightRequests", 0x148, "IntProperty"},
            {"CacheClearDelay", 0x150, "DoubleProperty"},
        }};
    };

}
