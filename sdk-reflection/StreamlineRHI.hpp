#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::StreamlineRHI
{
    struct StreamlineOverrideSettings
    {
        static constexpr std::string_view Name = "StreamlineOverrideSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t EnableDLSSFGInPlayInEditorViewportsOverride = 0x28;
            static constexpr std::uintptr_t LoadDebugOverlayOverride = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EnableDLSSFGInPlayInEditorViewportsOverride", 0x28, "EnumProperty"},
            {"LoadDebugOverlayOverride", 0x29, "EnumProperty"},
        }};
    };

    struct StreamlineSettings
    {
        static constexpr std::string_view Name = "StreamlineSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableStreamlineD3D12 = 0x28;
            static constexpr std::uintptr_t bEnableStreamlineD3D11 = 0x29;
            static constexpr std::uintptr_t bEnableDLSSFGInPlayInEditorViewports = 0x2A;
            static constexpr std::uintptr_t bLoadDebugOverlay = 0x2B;
            static constexpr std::uintptr_t bAllowOTAUpdate = 0x2C;
            static constexpr std::uintptr_t NVIDIANGXApplicationId = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bEnableStreamlineD3D12", 0x28, "BoolProperty"},
            {"bEnableStreamlineD3D11", 0x29, "BoolProperty"},
            {"bEnableDLSSFGInPlayInEditorViewports", 0x2A, "BoolProperty"},
            {"bLoadDebugOverlay", 0x2B, "BoolProperty"},
            {"bAllowOTAUpdate", 0x2C, "BoolProperty"},
            {"NVIDIANGXApplicationId", 0x30, "IntProperty"},
        }};
    };

}
