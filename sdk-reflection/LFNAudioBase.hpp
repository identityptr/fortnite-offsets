#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LFNAudioBase
{
    struct LFNActiveItemAnimContext
    {
        static constexpr std::string_view Name = "LFNActiveItemAnimContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundLibraryAnimContext";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimSettings = 0x60;
            static constexpr std::uintptr_t DefaultOffset = 0x98;
            static constexpr std::uintptr_t Animation = 0xB0;
            static constexpr std::uintptr_t MeshComponent = 0xB8;
            static constexpr std::uintptr_t bSupportsNotifyEnd = 0xC0;
            static constexpr std::uintptr_t AnimRate = 0xC4;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AnimSettings", 0x60, "StructProperty"},
            {"DefaultOffset", 0x98, "StructProperty"},
            {"Animation", 0xB0, "WeakObjectProperty"},
            {"MeshComponent", 0xB8, "WeakObjectProperty"},
            {"bSupportsNotifyEnd", 0xC0, "BoolProperty"},
            {"AnimRate", 0xC4, "FloatProperty"},
        }};
    };

    struct LFNFoleyContext
    {
        static constexpr std::string_view Name = "LFNFoleyContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerFoleyContext";
        struct Offsets
        {
            static constexpr std::uintptr_t PitchMultiplier = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PitchMultiplier", 0x180, "FloatProperty"},
        }};
    };

    struct LFNImpactAudioNativeFunctionLibrary
    {
        static constexpr std::string_view Name = "LFNImpactAudioNativeFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LFNImpactSoundLibrary
    {
        static constexpr std::string_view Name = "LFNImpactSoundLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundLibrarySimpleContext";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x60, "StructProperty"},
        }};
    };

    struct LFNSmartSoundLibraryContext
    {
        static constexpr std::string_view Name = "LFNSmartSoundLibraryContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundLibraryAnimContext";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimSettings = 0x60;
            static constexpr std::uintptr_t DefaultOffset = 0x98;
            static constexpr std::uintptr_t Animation = 0xB0;
            static constexpr std::uintptr_t MeshComponent = 0xB8;
            static constexpr std::uintptr_t bSupportsNotifyEnd = 0xC0;
            static constexpr std::uintptr_t AnimRate = 0xC4;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AnimSettings", 0x60, "StructProperty"},
            {"DefaultOffset", 0x98, "StructProperty"},
            {"Animation", 0xB0, "WeakObjectProperty"},
            {"MeshComponent", 0xB8, "WeakObjectProperty"},
            {"bSupportsNotifyEnd", 0xC0, "BoolProperty"},
            {"AnimRate", 0xC4, "FloatProperty"},
        }};
    };

    struct LFNVOSoundLibraryAnimContext
    {
        static constexpr std::string_view Name = "LFNVOSoundLibraryAnimContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SoundLibraryAnimContext";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimSettings = 0x60;
            static constexpr std::uintptr_t DefaultOffset = 0x98;
            static constexpr std::uintptr_t Animation = 0xB0;
            static constexpr std::uintptr_t MeshComponent = 0xB8;
            static constexpr std::uintptr_t bSupportsNotifyEnd = 0xC0;
            static constexpr std::uintptr_t AnimRate = 0xC4;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AnimSettings", 0x60, "StructProperty"},
            {"DefaultOffset", 0x98, "StructProperty"},
            {"Animation", 0xB0, "WeakObjectProperty"},
            {"MeshComponent", 0xB8, "WeakObjectProperty"},
            {"bSupportsNotifyEnd", 0xC0, "BoolProperty"},
            {"AnimRate", 0xC4, "FloatProperty"},
        }};
    };

    struct LFNVOSoundLibraryContext
    {
        static constexpr std::string_view Name = "LFNVOSoundLibraryContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundLibraryContext";
        struct Offsets
        {
            static constexpr std::uintptr_t PlaybackSettings = 0x60;
            static constexpr std::uintptr_t bAppendPerspectiveTag = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlaybackSettings", 0x60, "StructProperty"},
            {"bAppendPerspectiveTag", 0xB8, "BoolProperty"},
        }};
    };

}
