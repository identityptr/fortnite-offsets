#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ItemizationDebug
{
    struct InventoryDebugMenu
    {
        static constexpr std::string_view Name = "InventoryDebugMenu";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ImGuiDebugMenuBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MonitoredActor = 0x440;
            static constexpr std::uintptr_t ServerDebugSnapshot = 0x448;
            static constexpr std::uintptr_t ServerDebugSnapshot_FortInventory = 0x458;
            static constexpr std::uintptr_t bDisplayClient = 0x480;
            static constexpr std::uintptr_t bDisplayServer = 0x481;
            static constexpr std::uintptr_t bDisplayFortInventories = 0x482;
            static constexpr std::uintptr_t bDisplayItemizationInventories = 0x483;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MonitoredActor", 0x440, "ObjectProperty"},
            {"ServerDebugSnapshot", 0x448, "StructProperty"},
            {"ServerDebugSnapshot_FortInventory", 0x458, "StructProperty"},
            {"bDisplayClient", 0x480, "BoolProperty"},
            {"bDisplayServer", 0x481, "BoolProperty"},
            {"bDisplayFortInventories", 0x482, "BoolProperty"},
            {"bDisplayItemizationInventories", 0x483, "BoolProperty"},
        }};
    };

    struct ItemizationCheatManager
    {
        static constexpr std::string_view Name = "ItemizationCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CheatManagerExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t VerseDebugLibrary = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VerseDebugLibrary", 0x28, "ObjectProperty"},
        }};
    };

    struct PropertyInterfaceDebugCheatRequest
    {
        static constexpr std::string_view Name = "PropertyInterfaceDebugCheatRequest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CollectionName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CollectionName", 0x28, "StrProperty"},
        }};
    };

    struct PropertyInterfaceDebugger
    {
        static constexpr std::string_view Name = "PropertyInterfaceDebugger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ImGuiDebugMenuBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MonitoredPropertyInterface = 0x440;
            static constexpr std::uintptr_t ServerDebugSnapshot = 0x448;
            static constexpr std::uintptr_t bDisplayClient = 0x480;
            static constexpr std::uintptr_t bDisplayServer = 0x481;
            static constexpr std::uintptr_t bDisplayNativeOnClient = 0x482;
            static constexpr std::uintptr_t DebugCheatRequests = 0x488;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"MonitoredPropertyInterface", 0x440, "ObjectProperty"},
            {"ServerDebugSnapshot", 0x448, "StructProperty"},
            {"bDisplayClient", 0x480, "BoolProperty"},
            {"bDisplayServer", 0x481, "BoolProperty"},
            {"bDisplayNativeOnClient", 0x482, "BoolProperty"},
            {"DebugCheatRequests", 0x488, "ArrayProperty"},
        }};
    };

    struct PropertyInterfacePropertyRefreshCheatRequest
    {
        static constexpr std::string_view Name = "PropertyInterfacePropertyRefreshCheatRequest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PropertyInterfaceDebugCheatRequest";
        struct Offsets
        {
            static constexpr std::uintptr_t PropertyName = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PropertyName", 0x38, "StrProperty"},
        }};
    };

}
