#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::OidcAuthentication
{
    struct GameFeatureAction_OidcAuthentication
    {
        static constexpr std::string_view Name = "GameFeatureAction_OidcAuthentication";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t AuthenticationProvider = 0x28;
            static constexpr std::uintptr_t AuthenticationProviderIdentifier = 0x30;
            static constexpr std::uintptr_t Retries = 0x40;
            static constexpr std::uintptr_t RequiredCVar = 0x44;
            static constexpr std::uintptr_t bEditorOnly = 0x48;
            static constexpr std::uintptr_t bAuthenticateOnLoading = 0x49;
            static constexpr std::uintptr_t bAuthenticateOnRegistering = 0x4A;
            static constexpr std::uintptr_t bAuthenticateOnActivating = 0x4B;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"AuthenticationProvider", 0x28, "ClassProperty"},
            {"AuthenticationProviderIdentifier", 0x30, "StrProperty"},
            {"Retries", 0x40, "ByteProperty"},
            {"RequiredCVar", 0x44, "NameProperty"},
            {"bEditorOnly", 0x48, "BoolProperty"},
            {"bAuthenticateOnLoading", 0x49, "BoolProperty"},
            {"bAuthenticateOnRegistering", 0x4A, "BoolProperty"},
            {"bAuthenticateOnActivating", 0x4B, "BoolProperty"},
        }};
    };

    struct OidcAuthenticationProvider
    {
        static constexpr std::string_view Name = "OidcAuthenticationProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ProviderIdentifier = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ProviderIdentifier", 0x28, "StrProperty"},
        }};
    };

    struct OidcAuthenticationProviderAsyncAction
    {
        static constexpr std::string_view Name = "OidcAuthenticationProviderAsyncAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnAuthenticationCompleted = 0x30;
            static constexpr std::uintptr_t OidcAuthenticationProvider = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnAuthenticationCompleted", 0x30, "MulticastInlineDelegateProperty"},
            {"OidcAuthenticationProvider", 0x40, "ObjectProperty"},
        }};
    };

    struct OidcAuthenticationSubsystem
    {
        static constexpr std::string_view Name = "OidcAuthenticationSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
