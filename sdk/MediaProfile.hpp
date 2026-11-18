#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MediaProfile
{
    struct MediaProfile
    {
        static constexpr std::string_view Name = "MediaProfile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MediaSources = 0x28;
            static constexpr std::uintptr_t MediaOutputs = 0x38;
            static constexpr std::uintptr_t bOverrideTimecodeProvider = 0x48;
            static constexpr std::uintptr_t TimecodeProvider = 0x50;
            static constexpr std::uintptr_t bOverrideCustomTimeStep = 0x58;
            static constexpr std::uintptr_t CustomTimestep = 0x60;
            static constexpr std::uintptr_t AppliedTimecodeProvider = 0x70;
            static constexpr std::uintptr_t PreviousTimecodeProvider = 0x78;
            static constexpr std::uintptr_t AppliedCustomTimeStep = 0x88;
            static constexpr std::uintptr_t PreviousCustomTimeStep = 0x90;
            static constexpr std::uintptr_t PlaybackManager = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"MediaSources", 0x28, "ArrayProperty"},
            {"MediaOutputs", 0x38, "ArrayProperty"},
            {"bOverrideTimecodeProvider", 0x48, "BoolProperty"},
            {"TimecodeProvider", 0x50, "ObjectProperty"},
            {"bOverrideCustomTimeStep", 0x58, "BoolProperty"},
            {"CustomTimestep", 0x60, "ObjectProperty"},
            {"AppliedTimecodeProvider", 0x70, "ObjectProperty"},
            {"PreviousTimecodeProvider", 0x78, "ObjectProperty"},
            {"AppliedCustomTimeStep", 0x88, "ObjectProperty"},
            {"PreviousCustomTimeStep", 0x90, "ObjectProperty"},
            {"PlaybackManager", 0x98, "ObjectProperty"},
        }};
    };

    struct MediaProfileEditorSettings
    {
        static constexpr std::string_view Name = "MediaProfileEditorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MediaProfilePlaybackManager
    {
        static constexpr std::string_view Name = "MediaProfilePlaybackManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MediaSourcePlayers = 0x30;
            static constexpr std::uintptr_t MediaSourceTextures = 0x40;
            static constexpr std::uintptr_t MediaOutputCaptures = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MediaSourcePlayers", 0x30, "MapProperty"},
            {"MediaSourceTextures", 0x40, "ArrayProperty"},
            {"MediaOutputCaptures", 0x50, "MapProperty"},
        }};
    };

    struct MediaProfileSettings
    {
        static constexpr std::string_view Name = "MediaProfileSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bApplyInCommandlet = 0x28;
            static constexpr std::uintptr_t MediaSourceProxy = 0x30;
            static constexpr std::uintptr_t MediaOutputProxy = 0x40;
            static constexpr std::uintptr_t StartupMediaProfile = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bApplyInCommandlet", 0x28, "BoolProperty"},
            {"MediaSourceProxy", 0x30, "ArrayProperty"},
            {"MediaOutputProxy", 0x40, "ArrayProperty"},
            {"StartupMediaProfile", 0x50, "SoftObjectProperty"},
        }};
    };

    struct ProxyMediaOutput
    {
        static constexpr std::string_view Name = "ProxyMediaOutput";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MediaOutput";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicProxy = 0x30;
            static constexpr std::uintptr_t Proxy = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DynamicProxy", 0x30, "ObjectProperty"},
            {"Proxy", 0x38, "ObjectProperty"},
        }};
    };

    struct ProxyMediaSource
    {
        static constexpr std::string_view Name = "ProxyMediaSource";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MediaSource";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicProxy = 0x40;
            static constexpr std::uintptr_t Proxy = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DynamicProxy", 0x40, "ObjectProperty"},
            {"Proxy", 0x48, "ObjectProperty"},
        }};
    };

}
