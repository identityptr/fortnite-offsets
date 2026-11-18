#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AccoladeCollectionScreen
{
    struct FortCollectionDataEntryAccolade
    {
        static constexpr std::string_view Name = "FortCollectionDataEntryAccolade";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCollectionDataEntry";
        struct Offsets
        {
            static constexpr std::uintptr_t bHideInCollectionsScreen = 0x28;
            static constexpr std::uintptr_t bAutoCollectOnServerJoin = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bHideInCollectionsScreen", 0x28, "BoolProperty"},
            {"bAutoCollectOnServerJoin", 0x29, "BoolProperty"},
        }};
    };

    struct PinnedAccoladeWidget
    {
        static constexpr std::string_view Name = "PinnedAccoladeWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t LazyImage_PinColor = 0x370;
            static constexpr std::uintptr_t NumAllowedDescCharacters = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LazyImage_PinColor", 0x370, "ObjectProperty"},
            {"NumAllowedDescCharacters", 0x378, "IntProperty"},
        }};
    };

    struct QuestAccoladeDataSource
    {
        static constexpr std::string_view Name = "QuestAccoladeDataSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestCollectionDataSource";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct QuestAccoladeInjector
    {
        static constexpr std::string_view Name = "QuestAccoladeInjector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestCollectionInjectorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CategorySortOrder = 0x110;
            static constexpr std::uintptr_t ProductData = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CategorySortOrder", 0x110, "IntProperty"},
            {"ProductData", 0x118, "ObjectProperty"},
        }};
    };

    struct QuestUIAccoladeEntryVM
    {
        static constexpr std::string_view Name = "QuestUIAccoladeEntryVM";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "QuestUICustomEntryVM";
        struct Offsets
        {
            static constexpr std::uintptr_t CompletedCount = 0x138;
            static constexpr std::uintptr_t Tier = 0x13C;
            static constexpr std::uintptr_t ProgressAchieved = 0x140;
            static constexpr std::uintptr_t ProgressTotal = 0x144;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CompletedCount", 0x138, "IntProperty"},
            {"Tier", 0x13C, "EnumProperty"},
            {"ProgressAchieved", 0x140, "IntProperty"},
            {"ProgressTotal", 0x144, "IntProperty"},
        }};
    };

}
