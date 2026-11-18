#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JunoPolarisUI
{
    struct JunoMotdActionViewModel
    {
        static constexpr std::string_view Name = "JunoMotdActionViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MVVMViewModelBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoMotdListViewModel
    {
        static constexpr std::string_view Name = "JunoMotdListViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t Motds = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Motds", 0x80, "ArrayProperty"},
        }};
    };

    struct JunoMotdViewModel
    {
        static constexpr std::string_view Name = "JunoMotdViewModel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPerUserViewModel";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningChannel = 0x78;
            static constexpr std::uintptr_t Actions = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OwningChannel", 0x78, "WeakObjectProperty"},
            {"Actions", 0x138, "ArrayProperty"},
        }};
    };

    struct JunoPolarisChannel
    {
        static constexpr std::string_view Name = "JunoPolarisChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrmChannel";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct JunoPolarisChannel_Motd
    {
        static constexpr std::string_view Name = "JunoPolarisChannel_Motd";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JunoPolarisChannel";
        struct Offsets
        {
            static constexpr std::uintptr_t RequestPath = 0x128;
            static constexpr std::uintptr_t GovernancePath = 0x138;
            static constexpr std::uintptr_t GovernanceName = 0x148;
            static constexpr std::uintptr_t Motds = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RequestPath", 0x128, "StrProperty"},
            {"GovernancePath", 0x138, "StrProperty"},
            {"GovernanceName", 0x148, "StrProperty"},
            {"Motds", 0x158, "ObjectProperty"},
        }};
    };

    struct JunoPolarisPlayerSubsystem
    {
        static constexpr std::string_view Name = "JunoPolarisPlayerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortLocalPlayerSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelMotd = 0x38;
            static constexpr std::uintptr_t ChannelChangeLog = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ChannelMotd", 0x38, "ObjectProperty"},
            {"ChannelChangeLog", 0x40, "ObjectProperty"},
        }};
    };

}
