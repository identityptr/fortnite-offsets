#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LauncherSocialDefaults
{
    struct ChatColorSchemeDataAsset
    {
        static constexpr std::string_view Name = "ChatColorSchemeDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ChatColorData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChatColorData", 0x28, "StructProperty"},
        }};
    };

    struct SocialActionButtonStyleDataAsset
    {
        static constexpr std::string_view Name = "SocialActionButtonStyleDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Style = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Style", 0x30, "StructProperty"},
        }};
    };

    struct SocialChatChromeColorSchemeDataAsset
    {
        static constexpr std::string_view Name = "SocialChatChromeColorSchemeDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Style = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Style", 0x28, "StructProperty"},
        }};
    };

    struct SocialChatChromeMarginsDataAsset
    {
        static constexpr std::string_view Name = "SocialChatChromeMarginsDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Style = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Style", 0x28, "StructProperty"},
        }};
    };

    struct SocialChatChromeStyleDataAsset
    {
        static constexpr std::string_view Name = "SocialChatChromeStyleDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Style = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Style", 0x30, "StructProperty"},
        }};
    };

    struct SocialChatMarkupStyleDataAsset
    {
        static constexpr std::string_view Name = "SocialChatMarkupStyleDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Style = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Style", 0x30, "StructProperty"},
        }};
    };

    struct SocialChatStyleDataAsset
    {
        static constexpr std::string_view Name = "SocialChatStyleDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Style = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Style", 0x30, "StructProperty"},
        }};
    };

    struct SocialCheckBoxStyleDataAsset
    {
        static constexpr std::string_view Name = "SocialCheckBoxStyleDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Style = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Style", 0x30, "StructProperty"},
        }};
    };

    struct SocialFontStyleDataAsset
    {
        static constexpr std::string_view Name = "SocialFontStyleDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Style = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Style", 0x28, "StructProperty"},
        }};
    };

    struct SocialListMarginsDataAsset
    {
        static constexpr std::string_view Name = "SocialListMarginsDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Style = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Style", 0x28, "StructProperty"},
        }};
    };

    struct SocialListStyleDataAsset
    {
        static constexpr std::string_view Name = "SocialListStyleDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Style = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Style", 0x30, "StructProperty"},
        }};
    };

    struct SocialProfanityDataAsset
    {
        static constexpr std::string_view Name = "SocialProfanityDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ProfanityData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ProfanityData", 0x28, "ArrayProperty"},
        }};
    };

    struct SocialRadioBoxStyleDataAsset
    {
        static constexpr std::string_view Name = "SocialRadioBoxStyleDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Style = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Style", 0x30, "StructProperty"},
        }};
    };

    struct SocialScrollBarStyleDataAsset
    {
        static constexpr std::string_view Name = "SocialScrollBarStyleDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Style = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Style", 0x30, "StructProperty"},
        }};
    };

    struct SocialSoundSchemaDataAsset
    {
        static constexpr std::string_view Name = "SocialSoundSchemaDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundSchema = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SoundSchema", 0x28, "StructProperty"},
        }};
    };

    struct SocialStyleDataAsset
    {
        static constexpr std::string_view Name = "SocialStyleDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SmallFontStyle = 0x28;
            static constexpr std::uintptr_t NormalFontStyle = 0x30;
            static constexpr std::uintptr_t LargeFontStyle = 0x38;
            static constexpr std::uintptr_t ChatFontStyle = 0x40;
            static constexpr std::uintptr_t SocialListStyle = 0x48;
            static constexpr std::uintptr_t SocialListMargins = 0x50;
            static constexpr std::uintptr_t ChatStyle = 0x58;
            static constexpr std::uintptr_t ChatChromeStyle = 0x60;
            static constexpr std::uintptr_t ChatChromeMargins = 0x68;
            static constexpr std::uintptr_t ChatChromeColorScheme = 0x70;
            static constexpr std::uintptr_t ChatColorScheme = 0x78;
            static constexpr std::uintptr_t SoundSchema = 0x80;
            static constexpr std::uintptr_t ActionButtonStyle = 0x88;
            static constexpr std::uintptr_t CheckBoxStyle = 0x90;
            static constexpr std::uintptr_t RadioBoxStyle = 0x98;
            static constexpr std::uintptr_t ScrollBoxStyle = 0xA0;
            static constexpr std::uintptr_t MarkupStyle = 0xA8;
            static constexpr std::uintptr_t ProfanityDataAsset = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"SmallFontStyle", 0x28, "ObjectProperty"},
            {"NormalFontStyle", 0x30, "ObjectProperty"},
            {"LargeFontStyle", 0x38, "ObjectProperty"},
            {"ChatFontStyle", 0x40, "ObjectProperty"},
            {"SocialListStyle", 0x48, "ObjectProperty"},
            {"SocialListMargins", 0x50, "ObjectProperty"},
            {"ChatStyle", 0x58, "ObjectProperty"},
            {"ChatChromeStyle", 0x60, "ObjectProperty"},
            {"ChatChromeMargins", 0x68, "ObjectProperty"},
            {"ChatChromeColorScheme", 0x70, "ObjectProperty"},
            {"ChatColorScheme", 0x78, "ObjectProperty"},
            {"SoundSchema", 0x80, "ObjectProperty"},
            {"ActionButtonStyle", 0x88, "ObjectProperty"},
            {"CheckBoxStyle", 0x90, "ObjectProperty"},
            {"RadioBoxStyle", 0x98, "ObjectProperty"},
            {"ScrollBoxStyle", 0xA0, "ObjectProperty"},
            {"MarkupStyle", 0xA8, "ObjectProperty"},
            {"ProfanityDataAsset", 0xB0, "ObjectProperty"},
        }};
    };

}
