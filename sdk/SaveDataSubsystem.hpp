#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SaveDataSubsystem
{
    struct DeviceSaveCollection
    {
        static constexpr std::string_view Name = "DeviceSaveCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SaveGame";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x28, "MapProperty"},
        }};
    };

    struct SaveDataSubsystem
    {
        static constexpr std::string_view Name = "SaveDataSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LocalPlayerSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalForDevice = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LocalForDevice", 0x30, "ObjectProperty"},
        }};
    };

}
