#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Hotfix
{
    struct OnlineHotfixManager
    {
        static constexpr std::string_view Name = "OnlineHotfixManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OSSName = 0x228;
            static constexpr std::uintptr_t HotfixManagerClassName = 0x238;
            static constexpr std::uintptr_t DebugPrefix = 0x248;
            static constexpr std::uintptr_t HotfixableAssetClasses = 0x258;
            static constexpr std::uintptr_t HotfixDownloadInactivityTimeoutSeconds = 0x268;
            static constexpr std::uintptr_t AssetsHotfixedFromIniFiles = 0x270;
            static constexpr std::uintptr_t ResolvedHotfixableAssetClasses = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"OSSName", 0x228, "StrProperty"},
            {"HotfixManagerClassName", 0x238, "StrProperty"},
            {"DebugPrefix", 0x248, "StrProperty"},
            {"HotfixableAssetClasses", 0x258, "ArrayProperty"},
            {"HotfixDownloadInactivityTimeoutSeconds", 0x268, "FloatProperty"},
            {"AssetsHotfixedFromIniFiles", 0x270, "ArrayProperty"},
            {"ResolvedHotfixableAssetClasses", 0x280, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "StartHotfixProcess",
        }};
    };

    struct UpdateContextDefinition
    {
        static constexpr std::string_view Name = "UpdateContextDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
            static constexpr std::uintptr_t bEnabled = 0x10;
            static constexpr std::uintptr_t bCheckAvailabilityOnly = 0x11;
            static constexpr std::uintptr_t bPatchCheckEnabled = 0x12;
            static constexpr std::uintptr_t AdditionalTags = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Name", 0x0, "StrProperty"},
            {"bEnabled", 0x10, "BoolProperty"},
            {"bCheckAvailabilityOnly", 0x11, "BoolProperty"},
            {"bPatchCheckEnabled", 0x12, "BoolProperty"},
            {"AdditionalTags", 0x18, "SetProperty"},
        }};
    };

    struct UpdateManager
    {
        static constexpr std::string_view Name = "UpdateManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t UpdateCheckStartDelay = 0x88;
            static constexpr std::uintptr_t UpdateCheckCachedResponseDelay = 0x8C;
            static constexpr std::uintptr_t HotfixCheckCompleteDelay = 0x90;
            static constexpr std::uintptr_t UpdateCheckCompleteDelay = 0x94;
            static constexpr std::uintptr_t HotfixAvailabilityCheckCompleteDelay = 0x98;
            static constexpr std::uintptr_t UpdateCheckAvailabilityCompleteDelay = 0x9C;
            static constexpr std::uintptr_t AppSuspendedUpdateCheckTimeSeconds = 0xA4;
            static constexpr std::uintptr_t bInitialUpdateFinished = 0xB0;
            static constexpr std::uintptr_t bCheckHotfixAvailabilityOnly = 0xB1;
            static constexpr std::uintptr_t CurrentUpdateState = 0xB2;
            static constexpr std::uintptr_t WorstNumFilesPendingLoadViewed = 0xB4;
            static constexpr std::uintptr_t LastHotfixResult = 0xBC;
            static constexpr std::uintptr_t LastUpdateCheck = 0xE0;
            static constexpr std::uintptr_t LastCompletionResult = 0xF0;
            static constexpr std::uintptr_t UpdateStateEnum = 0x128;
            static constexpr std::uintptr_t UpdateCompletionEnum = 0x130;
            static constexpr std::uintptr_t UpdateContextDefinitionUnknown = 0x138;
            static constexpr std::uintptr_t UpdateContextDefinitions = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"UpdateCheckStartDelay", 0x88, "FloatProperty"},
            {"UpdateCheckCachedResponseDelay", 0x8C, "FloatProperty"},
            {"HotfixCheckCompleteDelay", 0x90, "FloatProperty"},
            {"UpdateCheckCompleteDelay", 0x94, "FloatProperty"},
            {"HotfixAvailabilityCheckCompleteDelay", 0x98, "FloatProperty"},
            {"UpdateCheckAvailabilityCompleteDelay", 0x9C, "FloatProperty"},
            {"AppSuspendedUpdateCheckTimeSeconds", 0xA4, "IntProperty"},
            {"bInitialUpdateFinished", 0xB0, "BoolProperty"},
            {"bCheckHotfixAvailabilityOnly", 0xB1, "BoolProperty"},
            {"CurrentUpdateState", 0xB2, "EnumProperty"},
            {"WorstNumFilesPendingLoadViewed", 0xB4, "IntProperty"},
            {"LastHotfixResult", 0xBC, "EnumProperty"},
            {"LastUpdateCheck", 0xE0, "StructProperty"},
            {"LastCompletionResult", 0xF0, "EnumProperty"},
            {"UpdateStateEnum", 0x128, "ObjectProperty"},
            {"UpdateCompletionEnum", 0x130, "ObjectProperty"},
            {"UpdateContextDefinitionUnknown", 0x138, "StructProperty"},
            {"UpdateContextDefinitions", 0x160, "ArrayProperty"},
        }};
    };

}
