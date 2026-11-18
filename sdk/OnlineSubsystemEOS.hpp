#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::OnlineSubsystemEOS
{
    struct EOSArtifactSettings
    {
        static constexpr std::string_view Name = "EOSArtifactSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct EOSSettings
    {
        static constexpr std::string_view Name = "EOSSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RuntimeOptionsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CacheDir = 0x38;
            static constexpr std::uintptr_t DefaultArtifactName = 0x48;
            static constexpr std::uintptr_t PlatformConfigName = 0x58;
            static constexpr std::uintptr_t RTCBackgroundMode = 0x68;
            static constexpr std::uintptr_t TickBudgetInMilliseconds = 0x78;
            static constexpr std::uintptr_t bEnableOverlay = 0x7C;
            static constexpr std::uintptr_t bEnableSocialOverlay = 0x7D;
            static constexpr std::uintptr_t bEnableEditorOverlay = 0x7E;
            static constexpr std::uintptr_t bPreferPersistentAuth = 0x7F;
            static constexpr std::uintptr_t TitleStorageTags = 0x80;
            static constexpr std::uintptr_t TitleStorageReadChunkLength = 0x90;
            static constexpr std::uintptr_t Artifacts = 0x98;
            static constexpr std::uintptr_t AuthScopeFlags = 0xA8;
            static constexpr std::uintptr_t bUseEAS = 0xB8;
            static constexpr std::uintptr_t bUseEOSConnect = 0xB9;
            static constexpr std::uintptr_t bUseEOSRTC = 0xBA;
            static constexpr std::uintptr_t bUseNamedPlatformConfig = 0xBB;
            static constexpr std::uintptr_t bUseNewEcomFlow = 0xBC;
            static constexpr std::uintptr_t bUseNewLoginFlow = 0xBD;
            static constexpr std::uintptr_t SteamTokenType = 0xC0;
            static constexpr std::uintptr_t NintendoTokenType = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"CacheDir", 0x38, "StrProperty"},
            {"DefaultArtifactName", 0x48, "StrProperty"},
            {"PlatformConfigName", 0x58, "StrProperty"},
            {"RTCBackgroundMode", 0x68, "StrProperty"},
            {"TickBudgetInMilliseconds", 0x78, "IntProperty"},
            {"bEnableOverlay", 0x7C, "BoolProperty"},
            {"bEnableSocialOverlay", 0x7D, "BoolProperty"},
            {"bEnableEditorOverlay", 0x7E, "BoolProperty"},
            {"bPreferPersistentAuth", 0x7F, "BoolProperty"},
            {"TitleStorageTags", 0x80, "ArrayProperty"},
            {"TitleStorageReadChunkLength", 0x90, "IntProperty"},
            {"Artifacts", 0x98, "ArrayProperty"},
            {"AuthScopeFlags", 0xA8, "ArrayProperty"},
            {"bUseEAS", 0xB8, "BoolProperty"},
            {"bUseEOSConnect", 0xB9, "BoolProperty"},
            {"bUseEOSRTC", 0xBA, "BoolProperty"},
            {"bUseNamedPlatformConfig", 0xBB, "BoolProperty"},
            {"bUseNewEcomFlow", 0xBC, "BoolProperty"},
            {"bUseNewLoginFlow", 0xBD, "BoolProperty"},
            {"SteamTokenType", 0xC0, "StrProperty"},
            {"NintendoTokenType", 0xD0, "StrProperty"},
        }};
    };

}
