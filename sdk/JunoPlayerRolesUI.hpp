#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoPlayerRolesUI
{
    struct JunoPlayerProgressionViewModel
    {
        static constexpr std::string_view Name = "JunoPlayerProgressionViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Roles = 0x78;
            static constexpr std::uintptr_t CurrentRole = 0x88;
            static constexpr std::uintptr_t SelectedRole = 0x90;
            static constexpr std::uintptr_t SelectedUpgradeTag = 0x98;
            static constexpr std::uintptr_t AllRolesAndSkills = 0xA0;
            static constexpr std::uintptr_t AllRoleCategories = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Roles", 0x78, "ArrayProperty"},
            {"CurrentRole", 0x88, "ObjectProperty"},
            {"SelectedRole", 0x90, "ObjectProperty"},
            {"SelectedUpgradeTag", 0x98, "StructProperty"},
            {"AllRolesAndSkills", 0xA0, "ArrayProperty"},
            {"AllRoleCategories", 0xB0, "ArrayProperty"},
        }};
    };

    struct JunoPlayerRoleCategoryViewModel
    {
        static constexpr std::string_view Name = "JunoPlayerRoleCategoryViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DisplayName = 0x68;
            static constexpr std::uintptr_t RoleCategoryTag = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DisplayName", 0x68, "TextProperty"},
            {"RoleCategoryTag", 0x78, "StructProperty"},
        }};
    };

    struct JunoPlayerRoleViewModel
    {
        static constexpr std::string_view Name = "JunoPlayerRoleViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t GridListItemType = 0x88;
            static constexpr std::uintptr_t RoleTag = 0x8C;
            static constexpr std::uintptr_t RoleCategoryTag = 0x90;
            static constexpr std::uintptr_t DisplayName = 0x98;
            static constexpr std::uintptr_t Description = 0xA8;
            static constexpr std::uintptr_t ShortDescription = 0xB8;
            static constexpr std::uintptr_t RoleColor = 0xC8;
            static constexpr std::uintptr_t Icon = 0xD8;
            static constexpr std::uintptr_t Portrait = 0xF8;
            static constexpr std::uintptr_t CloseUpPortrait = 0x118;
            static constexpr std::uintptr_t PortraitBackground = 0x138;
            static constexpr std::uintptr_t BackgroundImage = 0x158;
            static constexpr std::uintptr_t BackgroundFX = 0x178;
            static constexpr std::uintptr_t ProgressBar = 0x198;
            static constexpr std::uintptr_t SkillPointIcon = 0x1B8;
            static constexpr std::uintptr_t CurrentLevel = 0x1D8;
            static constexpr std::uintptr_t CurrentXP = 0x1DC;
            static constexpr std::uintptr_t RequiredXP = 0x1E0;
            static constexpr std::uintptr_t ProgressToNextLevel = 0x1E4;
            static constexpr std::uintptr_t AvailableSkillPoints = 0x1E8;
            static constexpr std::uintptr_t Skills = 0x1F0;
            static constexpr std::uintptr_t SelectedSkill = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"GridListItemType", 0x88, "NameProperty"},
            {"RoleTag", 0x8C, "StructProperty"},
            {"RoleCategoryTag", 0x90, "StructProperty"},
            {"DisplayName", 0x98, "TextProperty"},
            {"Description", 0xA8, "TextProperty"},
            {"ShortDescription", 0xB8, "TextProperty"},
            {"RoleColor", 0xC8, "StructProperty"},
            {"Icon", 0xD8, "SoftObjectProperty"},
            {"Portrait", 0xF8, "SoftObjectProperty"},
            {"CloseUpPortrait", 0x118, "SoftObjectProperty"},
            {"PortraitBackground", 0x138, "SoftObjectProperty"},
            {"BackgroundImage", 0x158, "SoftObjectProperty"},
            {"BackgroundFX", 0x178, "SoftObjectProperty"},
            {"ProgressBar", 0x198, "SoftObjectProperty"},
            {"SkillPointIcon", 0x1B8, "SoftObjectProperty"},
            {"CurrentLevel", 0x1D8, "IntProperty"},
            {"CurrentXP", 0x1DC, "IntProperty"},
            {"RequiredXP", 0x1E0, "IntProperty"},
            {"ProgressToNextLevel", 0x1E4, "FloatProperty"},
            {"AvailableSkillPoints", 0x1E8, "IntProperty"},
            {"Skills", 0x1F0, "ArrayProperty"},
            {"SelectedSkill", 0x200, "ObjectProperty"},
        }};
    };

    struct JunoPlayerRolesUICheatManager
    {
        static constexpr std::string_view Name = "JunoPlayerRolesUICheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPlayerSkillViewModel
    {
        static constexpr std::string_view Name = "JunoPlayerSkillViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t GridListItemType = 0x80;
            static constexpr std::uintptr_t DisplayName = 0x88;
            static constexpr std::uintptr_t ShortDescription = 0x98;
            static constexpr std::uintptr_t LongDescription = 0xA8;
            static constexpr std::uintptr_t Icon = 0xB8;
            static constexpr std::uintptr_t UpgradeIcon = 0xD8;
            static constexpr std::uintptr_t SkillType = 0xF8;
            static constexpr std::uintptr_t WeakInputAction = 0xFC;
            static constexpr std::uintptr_t TempOverrideLegacyActions = 0x108;
            static constexpr std::uintptr_t SkillUpgradePhases = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"GridListItemType", 0x80, "NameProperty"},
            {"DisplayName", 0x88, "TextProperty"},
            {"ShortDescription", 0x98, "TextProperty"},
            {"LongDescription", 0xA8, "TextProperty"},
            {"Icon", 0xB8, "SoftObjectProperty"},
            {"UpgradeIcon", 0xD8, "SoftObjectProperty"},
            {"SkillType", 0xF8, "EnumProperty"},
            {"WeakInputAction", 0xFC, "WeakObjectProperty"},
            {"TempOverrideLegacyActions", 0x108, "MapProperty"},
            {"SkillUpgradePhases", 0x118, "ArrayProperty"},
        }};
    };

}
