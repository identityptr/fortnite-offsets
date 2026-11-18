#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SpriteExtractionCoreUI
{
    struct ExtractableCollectionViewModel
    {
        static constexpr std::string_view Name = "ExtractableCollectionViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsComingSoonActive = 0x78;
            static constexpr std::uintptr_t ComingSoonDate = 0x80;
            static constexpr std::uintptr_t CollectionCount = 0x88;
            static constexpr std::uintptr_t ItemMap = 0x98;
            static constexpr std::uintptr_t VariationsItemMap = 0xA8;
            static constexpr std::uintptr_t ArchivedSeasons = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bIsComingSoonActive", 0x78, "BoolProperty"},
            {"ComingSoonDate", 0x80, "StructProperty"},
            {"CollectionCount", 0x88, "IntProperty"},
            {"ItemMap", 0x98, "MapProperty"},
            {"VariationsItemMap", 0xA8, "MapProperty"},
            {"ArchivedSeasons", 0xB8, "ArrayProperty"},
        }};
    };

    struct ExtractableItemViewModel
    {
        static constexpr std::string_view Name = "ExtractableItemViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtractableItemDef = 0x78;
            static constexpr std::uintptr_t AugmentItemDefs = 0x80;
            static constexpr std::uintptr_t GrantItemDef = 0x90;
            static constexpr std::uintptr_t FortItemVM = 0x98;
            static constexpr std::uintptr_t CachedPersistenceManager = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ExtractableItemDef", 0x78, "ObjectProperty"},
            {"AugmentItemDefs", 0x80, "ArrayProperty"},
            {"GrantItemDef", 0x90, "ObjectProperty"},
            {"FortItemVM", 0x98, "ObjectProperty"},
            {"CachedPersistenceManager", 0xA8, "ObjectProperty"},
        }};
    };

    struct ExtractableWorldItemVM
    {
        static constexpr std::string_view Name = "ExtractableWorldItemVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemVM";
        struct Offsets
        {
            static constexpr std::uintptr_t TransientCosmeticDefinition = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TransientCosmeticDefinition", 0xE0, "ObjectProperty"},
        }};
    };

}
