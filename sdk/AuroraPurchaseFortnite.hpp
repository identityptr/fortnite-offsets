#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AuroraPurchaseFortnite
{
    struct AuroraAnalyticsSubsystem
    {
        static constexpr std::string_view Name = "AuroraAnalyticsSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameInstanceSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ChanceToSendUserExperienceEvent = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChanceToSendUserExperienceEvent", 0x30, "FloatProperty"},
        }};
    };

    struct AuroraPurchaseFortnite
    {
        static constexpr std::string_view Name = "AuroraPurchaseFortnite";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TickRate = 0x40;
            static constexpr std::uintptr_t QueryInventoryRetryBackoff = 0x48;
            static constexpr std::uintptr_t ApplyOperationRetryDenyList = 0x50;
            static constexpr std::uintptr_t MaxApplyOperationRetries = 0x60;
            static constexpr std::uintptr_t ApplyOperationRetryDelay = 0x68;
            static constexpr std::uintptr_t bShouldApplyOperationReturnImmediately = 0x6C;
            static constexpr std::uintptr_t ApplyOperationMaxInFlightRequests = 0x70;
            static constexpr std::uintptr_t ApplyOperationMinimumInterval = 0x74;
            static constexpr std::uintptr_t bApplyOperationPreserveCallOrder = 0x78;
            static constexpr std::uintptr_t bApplyOperationMustUseRepeatCount = 0x79;
            static constexpr std::uintptr_t bApplyOperationAllowImmediateExecution = 0x7A;
            static constexpr std::uintptr_t ApplyOperationMaxPendingOperations = 0x80;
            static constexpr std::uintptr_t CacheClearDelay = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"TickRate", 0x40, "FloatProperty"},
            {"QueryInventoryRetryBackoff", 0x48, "DoubleProperty"},
            {"ApplyOperationRetryDenyList", 0x50, "ArrayProperty"},
            {"MaxApplyOperationRetries", 0x60, "Int64Property"},
            {"ApplyOperationRetryDelay", 0x68, "FloatProperty"},
            {"bShouldApplyOperationReturnImmediately", 0x6C, "BoolProperty"},
            {"ApplyOperationMaxInFlightRequests", 0x70, "IntProperty"},
            {"ApplyOperationMinimumInterval", 0x74, "FloatProperty"},
            {"bApplyOperationPreserveCallOrder", 0x78, "BoolProperty"},
            {"bApplyOperationMustUseRepeatCount", 0x79, "BoolProperty"},
            {"bApplyOperationAllowImmediateExecution", 0x7A, "BoolProperty"},
            {"ApplyOperationMaxPendingOperations", 0x80, "Int64Property"},
            {"CacheClearDelay", 0x88, "DoubleProperty"},
        }};
    };

}
