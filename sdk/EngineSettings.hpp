#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::EngineSettings
{
    struct AutoCompleteCommand
    {
        static constexpr std::string_view Name = "AutoCompleteCommand";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Command = 0x0;
            static constexpr std::uintptr_t Desc = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Command", 0x0, "StrProperty"},
            {"Desc", 0x10, "StrProperty"},
        }};
    };

    struct ConsoleSettings
    {
        static constexpr std::string_view Name = "ConsoleSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxScrollbackSize = 0x28;
            static constexpr std::uintptr_t ManualAutoCompleteList = 0x30;
            static constexpr std::uintptr_t AutoCompleteMapPaths = 0x40;
            static constexpr std::uintptr_t BackgroundOpacityPercentage = 0x50;
            static constexpr std::uintptr_t bOrderTopToBottom = 0x54;
            static constexpr std::uintptr_t bDisplayHelpInAutoComplete = 0x55;
            static constexpr std::uintptr_t InputColor = 0x58;
            static constexpr std::uintptr_t HistoryColor = 0x5C;
            static constexpr std::uintptr_t AutoCompleteCommandColor = 0x60;
            static constexpr std::uintptr_t AutoCompleteCVarColor = 0x64;
            static constexpr std::uintptr_t AutoCompleteFadedColor = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"MaxScrollbackSize", 0x28, "IntProperty"},
            {"ManualAutoCompleteList", 0x30, "ArrayProperty"},
            {"AutoCompleteMapPaths", 0x40, "ArrayProperty"},
            {"BackgroundOpacityPercentage", 0x50, "FloatProperty"},
            {"bOrderTopToBottom", 0x54, "BoolProperty"},
            {"bDisplayHelpInAutoComplete", 0x55, "BoolProperty"},
            {"InputColor", 0x58, "StructProperty"},
            {"HistoryColor", 0x5C, "StructProperty"},
            {"AutoCompleteCommandColor", 0x60, "StructProperty"},
            {"AutoCompleteCVarColor", 0x64, "StructProperty"},
            {"AutoCompleteFadedColor", 0x68, "StructProperty"},
        }};
    };

    struct GameMapsSettings
    {
        static constexpr std::string_view Name = "GameMapsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalMapOptions = 0x28;
            static constexpr std::uintptr_t TransitionMap = 0x38;
            static constexpr std::uintptr_t bUseSplitscreen = 0x50;
            static constexpr std::uintptr_t TwoPlayerSplitscreenLayout = 0x51;
            static constexpr std::uintptr_t ThreePlayerSplitscreenLayout = 0x52;
            static constexpr std::uintptr_t FourPlayerSplitscreenLayout = 0x53;
            static constexpr std::uintptr_t bShowAllPlayerWidgetsWhenSplitscreenDisabled = 0x54;
            static constexpr std::uintptr_t bOffsetPlayerGamepadIds = 0x55;
            static constexpr std::uintptr_t GameInstanceClass = 0x58;
            static constexpr std::uintptr_t GameDefaultMap = 0x70;
            static constexpr std::uintptr_t ServerDefaultMap = 0x88;
            static constexpr std::uintptr_t GlobalDefaultGameMode = 0xA0;
            static constexpr std::uintptr_t GlobalDefaultServerGameMode = 0xB8;
            static constexpr std::uintptr_t GameModeMapPrefixes = 0xD0;
            static constexpr std::uintptr_t GameModeClassAliases = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"LocalMapOptions", 0x28, "StrProperty"},
            {"TransitionMap", 0x38, "StructProperty"},
            {"bUseSplitscreen", 0x50, "BoolProperty"},
            {"TwoPlayerSplitscreenLayout", 0x51, "ByteProperty"},
            {"ThreePlayerSplitscreenLayout", 0x52, "ByteProperty"},
            {"FourPlayerSplitscreenLayout", 0x53, "EnumProperty"},
            {"bShowAllPlayerWidgetsWhenSplitscreenDisabled", 0x54, "BoolProperty"},
            {"bOffsetPlayerGamepadIds", 0x55, "BoolProperty"},
            {"GameInstanceClass", 0x58, "StructProperty"},
            {"GameDefaultMap", 0x70, "StructProperty"},
            {"ServerDefaultMap", 0x88, "StructProperty"},
            {"GlobalDefaultGameMode", 0xA0, "StructProperty"},
            {"GlobalDefaultServerGameMode", 0xB8, "StructProperty"},
            {"GameModeMapPrefixes", 0xD0, "ArrayProperty"},
            {"GameModeClassAliases", 0xE0, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "GetGameMapsSettings",
            "GetSkipAssigningGamepadToPlayer1",
            "SetSkipAssigningGamepadToPlayer1",
        }};
    };

    struct GameModeName
    {
        static constexpr std::string_view Name = "GameModeName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t GameMode = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"GameMode", 0x10, "StructProperty"},
        }};
    };

    struct GameNetworkManagerSettings
    {
        static constexpr std::string_view Name = "GameNetworkManagerSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MinDynamicBandwidth = 0x28;
            static constexpr std::uintptr_t MaxDynamicBandwidth = 0x2C;
            static constexpr std::uintptr_t TotalNetBandwidth = 0x30;
            static constexpr std::uintptr_t BadPingThreshold = 0x34;
            static constexpr std::uintptr_t bIsStandbyCheckingEnabled = 0x38;
            static constexpr std::uintptr_t StandbyRxCheatTime = 0x3C;
            static constexpr std::uintptr_t StandbyTxCheatTime = 0x40;
            static constexpr std::uintptr_t PercentMissingForRxStandby = 0x44;
            static constexpr std::uintptr_t PercentMissingForTxStandby = 0x48;
            static constexpr std::uintptr_t PercentForBadPing = 0x4C;
            static constexpr std::uintptr_t JoinInProgressStandbyWaitTime = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"MinDynamicBandwidth", 0x28, "IntProperty"},
            {"MaxDynamicBandwidth", 0x2C, "IntProperty"},
            {"TotalNetBandwidth", 0x30, "IntProperty"},
            {"BadPingThreshold", 0x34, "IntProperty"},
            {"bIsStandbyCheckingEnabled", 0x38, "BoolProperty"},
            {"StandbyRxCheatTime", 0x3C, "FloatProperty"},
            {"StandbyTxCheatTime", 0x40, "FloatProperty"},
            {"PercentMissingForRxStandby", 0x44, "FloatProperty"},
            {"PercentMissingForTxStandby", 0x48, "FloatProperty"},
            {"PercentForBadPing", 0x4C, "FloatProperty"},
            {"JoinInProgressStandbyWaitTime", 0x50, "FloatProperty"},
        }};
    };

    struct GameSessionSettings
    {
        static constexpr std::string_view Name = "GameSessionSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxSpectators = 0x28;
            static constexpr std::uintptr_t MaxPlayers = 0x2C;
            static constexpr std::uintptr_t bRequiresPushToTalk = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaxSpectators", 0x28, "IntProperty"},
            {"MaxPlayers", 0x2C, "IntProperty"},
            {"bRequiresPushToTalk", 0x30, "BoolProperty"},
        }};
    };

    struct GeneralEngineSettings
    {
        static constexpr std::string_view Name = "GeneralEngineSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GeneralProjectSettings
    {
        static constexpr std::string_view Name = "GeneralProjectSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CompanyName = 0x28;
            static constexpr std::uintptr_t CompanyDistinguishedName = 0x38;
            static constexpr std::uintptr_t CopyrightNotice = 0x48;
            static constexpr std::uintptr_t Description = 0x58;
            static constexpr std::uintptr_t Homepage = 0x68;
            static constexpr std::uintptr_t LicensingTerms = 0x78;
            static constexpr std::uintptr_t PrivacyPolicy = 0x88;
            static constexpr std::uintptr_t ProjectID = 0x98;
            static constexpr std::uintptr_t ProjectName = 0xA8;
            static constexpr std::uintptr_t ProjectVersion = 0xB8;
            static constexpr std::uintptr_t SupportContact = 0xC8;
            static constexpr std::uintptr_t ProjectDisplayedTitle = 0xD8;
            static constexpr std::uintptr_t ProjectDebugTitleInfo = 0xE8;
            static constexpr std::uintptr_t bShouldWindowPreserveAspectRatio = 0xF8;
            static constexpr std::uintptr_t bUseBorderlessWindow = 0xF9;
            static constexpr std::uintptr_t bStartInVR = 0xFA;
            static constexpr std::uintptr_t bAllowWindowResize = 0xFB;
            static constexpr std::uintptr_t bAllowClose = 0xFC;
            static constexpr std::uintptr_t bAllowMaximize = 0xFD;
            static constexpr std::uintptr_t bAllowMinimize = 0xFE;
            static constexpr std::uintptr_t EyeOffsetForFakeStereoRenderingDevice = 0x100;
            static constexpr std::uintptr_t FOVForFakeStereoRenderingDevice = 0x104;
            static constexpr std::uintptr_t TopFOVRatioForFakeStereoRenderingDevice = 0x108;
            static constexpr std::uintptr_t DifferenceBetweenEyesForFakeStereoRenderingDevice = 0x10C;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"CompanyName", 0x28, "StrProperty"},
            {"CompanyDistinguishedName", 0x38, "StrProperty"},
            {"CopyrightNotice", 0x48, "StrProperty"},
            {"Description", 0x58, "StrProperty"},
            {"Homepage", 0x68, "StrProperty"},
            {"LicensingTerms", 0x78, "StrProperty"},
            {"PrivacyPolicy", 0x88, "StrProperty"},
            {"ProjectID", 0x98, "StructProperty"},
            {"ProjectName", 0xA8, "StrProperty"},
            {"ProjectVersion", 0xB8, "StrProperty"},
            {"SupportContact", 0xC8, "StrProperty"},
            {"ProjectDisplayedTitle", 0xD8, "TextProperty"},
            {"ProjectDebugTitleInfo", 0xE8, "TextProperty"},
            {"bShouldWindowPreserveAspectRatio", 0xF8, "BoolProperty"},
            {"bUseBorderlessWindow", 0xF9, "BoolProperty"},
            {"bStartInVR", 0xFA, "BoolProperty"},
            {"bAllowWindowResize", 0xFB, "BoolProperty"},
            {"bAllowClose", 0xFC, "BoolProperty"},
            {"bAllowMaximize", 0xFD, "BoolProperty"},
            {"bAllowMinimize", 0xFE, "BoolProperty"},
            {"EyeOffsetForFakeStereoRenderingDevice", 0x100, "FloatProperty"},
            {"FOVForFakeStereoRenderingDevice", 0x104, "FloatProperty"},
            {"TopFOVRatioForFakeStereoRenderingDevice", 0x108, "FloatProperty"},
            {"DifferenceBetweenEyesForFakeStereoRenderingDevice", 0x10C, "FloatProperty"},
        }};
    };

    struct HUDSettings
    {
        static constexpr std::string_view Name = "HUDSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowHUD = 0x28;
            static constexpr std::uintptr_t DebugDisplay = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bShowHUD", 0x28, "BoolProperty"},
            {"DebugDisplay", 0x30, "ArrayProperty"},
        }};
    };

    struct TemplateMapInfoOverride
    {
        static constexpr std::string_view Name = "TemplateMapInfoOverride";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Thumbnail = 0x0;
            static constexpr std::uintptr_t Map = 0x18;
            static constexpr std::uintptr_t DisplayName = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Thumbnail", 0x0, "StructProperty"},
            {"Map", 0x18, "StructProperty"},
            {"DisplayName", 0x30, "TextProperty"},
        }};
    };

}
