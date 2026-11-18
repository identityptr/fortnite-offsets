#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::QuestDefinitionAsset
{
    struct QuestDefinitionAsset
    {
        static constexpr std::string_view Name = "QuestDefinitionAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x48;
            static constexpr std::uintptr_t DescriptionText = 0x58;
            static constexpr std::uintptr_t ShortDescriptionText = 0x68;
            static constexpr std::uintptr_t Icon = 0x78;
            static constexpr std::uintptr_t ObjectiveDefinition = 0x98;
            static constexpr std::uintptr_t Rewards = 0xA0;
            static constexpr std::uintptr_t DefinitionExtensions = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"DisplayName", 0x48, "TextProperty"},
            {"DescriptionText", 0x58, "TextProperty"},
            {"ShortDescriptionText", 0x68, "TextProperty"},
            {"Icon", 0x78, "SoftObjectProperty"},
            {"ObjectiveDefinition", 0x98, "ObjectProperty"},
            {"Rewards", 0xA0, "ArrayProperty"},
            {"DefinitionExtensions", 0xB0, "ArrayProperty"},
        }};
    };

}
