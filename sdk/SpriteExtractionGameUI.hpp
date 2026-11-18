#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SpriteExtractionGameUI
{
    struct ExtractionEventInfoViewModel
    {
        static constexpr std::string_view Name = "ExtractionEventInfoViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefinitionViewModel = 0x70;
            static constexpr std::uintptr_t ItemDefinition = 0x78;
            static constexpr std::uintptr_t SpriteExtractionPersistence = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DefinitionViewModel", 0x70, "ObjectProperty"},
            {"ItemDefinition", 0x78, "ObjectProperty"},
            {"SpriteExtractionPersistence", 0x80, "ObjectProperty"},
        }};
    };

    struct InGameExtractableItemViewModel
    {
        static constexpr std::string_view Name = "InGameExtractableItemViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefinitionViewModel = 0x68;
            static constexpr std::uintptr_t WorldItem = 0x70;
            static constexpr std::uintptr_t ItemDefinition = 0x78;
            static constexpr std::uintptr_t ExtractionPersistenceComponent = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DefinitionViewModel", 0x68, "ObjectProperty"},
            {"WorldItem", 0x70, "ObjectProperty"},
            {"ItemDefinition", 0x78, "ObjectProperty"},
            {"ExtractionPersistenceComponent", 0x80, "ObjectProperty"},
        }};
    };

    struct PlayerExtractableInfoViewModel
    {
        static constexpr std::string_view Name = "PlayerExtractableInfoViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t EquippedExtractableViewModel = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EquippedExtractableViewModel", 0x78, "ObjectProperty"},
        }};
    };

    struct PlayerExtractedItemsViewModel
    {
        static constexpr std::string_view Name = "PlayerExtractedItemsViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t NewExtractionEvents = 0x78;
            static constexpr std::uintptr_t DuplicateExtractionEvents = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NewExtractionEvents", 0x78, "ArrayProperty"},
            {"DuplicateExtractionEvents", 0x88, "ArrayProperty"},
        }};
    };

    struct PostMatchExtractionInfoViewModel
    {
        static constexpr std::string_view Name = "PostMatchExtractionInfoViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t SecuredItems = 0x78;
            static constexpr std::uintptr_t ExtractedItems = 0x88;
            static constexpr std::uintptr_t LostItems = 0x98;
            static constexpr std::uintptr_t FirstTimeMasteredItems = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SecuredItems", 0x78, "ArrayProperty"},
            {"ExtractedItems", 0x88, "ArrayProperty"},
            {"LostItems", 0x98, "ArrayProperty"},
            {"FirstTimeMasteredItems", 0xA8, "ArrayProperty"},
        }};
    };

    struct PostMatchExtractionItemViewModel
    {
        static constexpr std::string_view Name = "PostMatchExtractionItemViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefinitionViewModel = 0x68;
            static constexpr std::uintptr_t Data = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefinitionViewModel", 0x68, "ObjectProperty"},
            {"Data", 0x70, "StructProperty"},
        }};
    };

}
