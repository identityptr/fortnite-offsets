#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CharacterCollectionMapScreen
{
    struct AthenaMapCollectionIcon
    {
        static constexpr std::string_view Name = "AthenaMapCollectionIcon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaMapNavigableIconCustom";
        struct Offsets
        {
            static constexpr std::uintptr_t Image_Icon = 0x358;
            static constexpr std::uintptr_t AnchorPoint = 0x360;
            static constexpr std::uintptr_t QuestData = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Image_Icon", 0x358, "ObjectProperty"},
            {"AnchorPoint", 0x360, "StructProperty"},
            {"QuestData", 0x378, "OptionalProperty"},
        }};
    };

    struct QuestCharacterInjector
    {
        static constexpr std::string_view Name = "QuestCharacterInjector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestCollectionInjectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryDisplayName = 0x118;
            static constexpr std::uintptr_t CategoryIcon = 0x128;
            static constexpr std::uintptr_t CategorySortOrder = 0x148;
            static constexpr std::uintptr_t CollectionType = 0x150;
            static constexpr std::uintptr_t CollectionCategory = 0x160;
            static constexpr std::uintptr_t SharedServiceVisualData = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CategoryDisplayName", 0x118, "TextProperty"},
            {"CategoryIcon", 0x128, "SoftObjectProperty"},
            {"CategorySortOrder", 0x148, "IntProperty"},
            {"CollectionType", 0x150, "StrProperty"},
            {"CollectionCategory", 0x160, "StrProperty"},
            {"SharedServiceVisualData", 0x170, "ObjectProperty"},
        }};
    };

    struct QuestUICharacterEntryVM
    {
        static constexpr std::string_view Name = "QuestUICharacterEntryVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUICustomEntryVM";
        struct Offsets
        {
            static constexpr std::uintptr_t SpecializationIcon = 0x138;
            static constexpr std::uintptr_t NPCTag = 0x158;
            static constexpr std::uintptr_t AdditionalEntryDescription = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SpecializationIcon", 0x138, "SoftObjectProperty"},
            {"NPCTag", 0x158, "StructProperty"},
            {"AdditionalEntryDescription", 0x160, "TextProperty"},
        }};
    };

}
