#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LearningTraining
{
    struct LearningSocketPPOTrainerServerCommandlet
    {
        static constexpr std::string_view Name = "LearningSocketPPOTrainerServerCommandlet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Commandlet";
        struct Offsets
        {
            static constexpr std::uintptr_t HelpDescription = 0x28;
            static constexpr std::uintptr_t HelpUsage = 0x38;
            static constexpr std::uintptr_t HelpWebLink = 0x48;
            static constexpr std::uintptr_t HelpParamNames = 0x58;
            static constexpr std::uintptr_t HelpParamDescriptions = 0x68;
            static constexpr std::uintptr_t FastExit = 0x78;
            static constexpr std::uintptr_t IsClient = 0x78;
            static constexpr std::uintptr_t IsEditor = 0x78;
            static constexpr std::uintptr_t IsServer = 0x78;
            static constexpr std::uintptr_t LogToConsole = 0x78;
            static constexpr std::uintptr_t ShowErrorCount = 0x78;
            static constexpr std::uintptr_t ShowProgress = 0x78;
            static constexpr std::uintptr_t UseCommandletResultAsExitCode = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"HelpDescription", 0x28, "StrProperty"},
            {"HelpUsage", 0x38, "StrProperty"},
            {"HelpWebLink", 0x48, "StrProperty"},
            {"HelpParamNames", 0x58, "ArrayProperty"},
            {"HelpParamDescriptions", 0x68, "ArrayProperty"},
            {"FastExit", 0x78, "BoolProperty"},
            {"IsClient", 0x78, "BoolProperty"},
            {"IsEditor", 0x78, "BoolProperty"},
            {"IsServer", 0x78, "BoolProperty"},
            {"LogToConsole", 0x78, "BoolProperty"},
            {"ShowErrorCount", 0x78, "BoolProperty"},
            {"ShowProgress", 0x78, "BoolProperty"},
            {"UseCommandletResultAsExitCode", 0x78, "BoolProperty"},
        }};
    };

}
