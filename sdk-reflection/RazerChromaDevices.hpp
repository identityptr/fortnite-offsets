#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::RazerChromaDevices
{
    struct RazerChromaAnimationAsset
    {
        static constexpr std::string_view Name = "RazerChromaAnimationAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimationName = 0x28;
            static constexpr std::uintptr_t RawData = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AnimationName", 0x28, "StrProperty"},
            {"RawData", 0x38, "ArrayProperty"},
        }};
    };

    struct RazerChromaDevicesDeveloperSettings
    {
        static constexpr std::string_view Name = "RazerChromaDevicesDeveloperSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsRazerChromaEnabled = 0x30;
            static constexpr std::uintptr_t bCreateRazerChromaInputDevice = 0x31;
            static constexpr std::uintptr_t IdleAnimationAsset = 0x38;
            static constexpr std::uintptr_t bUseChromaAppInfoForInit = 0x40;
            static constexpr std::uintptr_t AppInfo = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bIsRazerChromaEnabled", 0x30, "BoolProperty"},
            {"bCreateRazerChromaInputDevice", 0x31, "BoolProperty"},
            {"IdleAnimationAsset", 0x38, "ObjectProperty"},
            {"bUseChromaAppInfoForInit", 0x40, "BoolProperty"},
            {"AppInfo", 0x48, "StructProperty"},
        }};
    };

    struct RazerChromaFunctionLibrary
    {
        static constexpr std::string_view Name = "RazerChromaFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct RazerChromaPlayAnimationFile
    {
        static constexpr std::string_view Name = "RazerChromaPlayAnimationFile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "InputDeviceProperty";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimAsset = 0x30;
            static constexpr std::uintptr_t bLooping = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AnimAsset", 0x30, "ObjectProperty"},
            {"bLooping", 0x38, "BoolProperty"},
        }};
    };

}
