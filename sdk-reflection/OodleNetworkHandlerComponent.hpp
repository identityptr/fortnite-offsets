#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::OodleNetworkHandlerComponent
{
    struct OodleNetworkTrainerCommandlet
    {
        static constexpr std::string_view Name = "OodleNetworkTrainerCommandlet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Commandlet";
        struct Offsets
        {
            static constexpr std::uintptr_t bCompressionTest = 0x80;
            static constexpr std::uintptr_t bWriteV5Dictionaries = 0x81;
            static constexpr std::uintptr_t HashTableSize = 0x84;
            static constexpr std::uintptr_t DictionarySize = 0x88;
            static constexpr std::uintptr_t DictionaryTrials = 0x8C;
            static constexpr std::uintptr_t TrialRandomness = 0x90;
            static constexpr std::uintptr_t TrialGenerations = 0x94;
            static constexpr std::uintptr_t bNoTrials = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bCompressionTest", 0x80, "BoolProperty"},
            {"bWriteV5Dictionaries", 0x81, "BoolProperty"},
            {"HashTableSize", 0x84, "IntProperty"},
            {"DictionarySize", 0x88, "IntProperty"},
            {"DictionaryTrials", 0x8C, "IntProperty"},
            {"TrialRandomness", 0x90, "IntProperty"},
            {"TrialGenerations", 0x94, "IntProperty"},
            {"bNoTrials", 0x98, "BoolProperty"},
        }};
    };

}
