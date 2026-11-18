#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SidecarSys
{
    struct SidecarDss
    {
        static constexpr std::string_view Name = "SidecarDss";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t FileInfoMap = 0x28;
            static constexpr std::uintptr_t DssDownloadUrl = 0x38;
            static constexpr std::uintptr_t DssCheckoutUrl = 0x48;
            static constexpr std::uintptr_t DssUploadUrl = 0x58;
            static constexpr std::uintptr_t DssRestoreUrl = 0x68;
            static constexpr std::uintptr_t DssCheckinUrl = 0x78;
            static constexpr std::uintptr_t DssListFilesUrl = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"FileInfoMap", 0x28, "MapProperty"},
            {"DssDownloadUrl", 0x38, "StrProperty"},
            {"DssCheckoutUrl", 0x48, "StrProperty"},
            {"DssUploadUrl", 0x58, "StrProperty"},
            {"DssRestoreUrl", 0x68, "StrProperty"},
            {"DssCheckinUrl", 0x78, "StrProperty"},
            {"DssListFilesUrl", 0x88, "StrProperty"},
        }};
    };

    struct SidecarFileInfo
    {
        static constexpr std::string_view Name = "SidecarFileInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Meta = 0x0;
            static constexpr std::uintptr_t bIsCheckedOut = 0x10;
            static constexpr std::uintptr_t bOperationPending = 0x11;
            static constexpr std::uintptr_t CheckoutGuid = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Meta", 0x0, "MapProperty"},
            {"bIsCheckedOut", 0x10, "BoolProperty"},
            {"bOperationPending", 0x11, "BoolProperty"},
            {"CheckoutGuid", 0x18, "StrProperty"},
        }};
    };

    struct SidecarInventorySys
    {
        static constexpr std::string_view Name = "SidecarInventorySys";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InventoryDownloadUrl = 0x30;
            static constexpr std::uintptr_t InventoryLockUrl = 0x40;
            static constexpr std::uintptr_t ItemUpdateUrl = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InventoryDownloadUrl", 0x30, "StrProperty"},
            {"InventoryLockUrl", 0x40, "StrProperty"},
            {"ItemUpdateUrl", 0x50, "StrProperty"},
        }};
    };

    struct SidecarSys
    {
        static constexpr std::string_view Name = "SidecarSys";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SidecarDss = 0x38;
            static constexpr std::uintptr_t SidecarInventory = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SidecarDss", 0x38, "ObjectProperty"},
            {"SidecarInventory", 0x40, "ObjectProperty"},
        }};
    };

}
