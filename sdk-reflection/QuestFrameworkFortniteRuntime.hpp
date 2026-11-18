#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::QuestFrameworkFortniteRuntime
{
    struct FortQuestCategoryDescriptor
    {
        static constexpr std::string_view Name = "FortQuestCategoryDescriptor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryID = 0x0;
            static constexpr std::uintptr_t DisplayName = 0x10;
            static constexpr std::uintptr_t Description = 0x20;
            static constexpr std::uintptr_t Icon = 0x30;
            static constexpr std::uintptr_t SortOrder = 0x48;
            static constexpr std::uintptr_t ParentCategoryId = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CategoryID", 0x0, "StrProperty"},
            {"DisplayName", 0x10, "TextProperty"},
            {"Description", 0x20, "TextProperty"},
            {"Icon", 0x30, "StructProperty"},
            {"SortOrder", 0x48, "DoubleProperty"},
            {"ParentCategoryId", 0x50, "StrProperty"},
        }};
    };

    struct FortQuestCategoryRegistry
    {
        static constexpr std::string_view Name = "FortQuestCategoryRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Info";
        struct Offsets
        {
            static constexpr std::uintptr_t Categories = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Categories", 0x278, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "OnRep_Categories",
        }};
    };

    struct FortQuestCategoryRegistrySubsystem
    {
        static constexpr std::string_view Name = "FortQuestCategoryRegistrySubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Registry = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Registry", 0x38, "ObjectProperty"},
        }};
    };

}
