#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DLSS
{
    struct DLSSOverrideSettings
    {
        static constexpr std::string_view Name = "DLSSOverrideSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bShowDLSSIncompatiblePluginsToolsWarnings = 0x28;
            static constexpr std::uintptr_t ShowDLSSSDebugOnScreenMessages = 0x29;
            static constexpr std::uintptr_t EnableDLSSInEditorViewportsOverride = 0x2A;
            static constexpr std::uintptr_t EnableDLSSInPlayInEditorViewportsOverride = 0x2B;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bShowDLSSIncompatiblePluginsToolsWarnings", 0x28, "BoolProperty"},
            {"ShowDLSSSDebugOnScreenMessages", 0x29, "EnumProperty"},
            {"EnableDLSSInEditorViewportsOverride", 0x2A, "EnumProperty"},
            {"EnableDLSSInPlayInEditorViewportsOverride", 0x2B, "EnumProperty"},
        }};
    };

    struct DLSSSettings
    {
        static constexpr std::string_view Name = "DLSSSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowOTAUpdate = 0x28;
            static constexpr std::uintptr_t NVIDIANGXApplicationId = 0x2C;
            static constexpr std::uintptr_t BiasCurrentColorStencilValue = 0x30;
            static constexpr std::uintptr_t bEnableDLSSD3D12 = 0x31;
            static constexpr std::uintptr_t bEnableDLSSD3D11 = 0x32;
            static constexpr std::uintptr_t bEnableDLSSVulkan = 0x33;
            static constexpr std::uintptr_t bShowDLSSIncompatiblePluginsToolsWarnings = 0x34;
            static constexpr std::uintptr_t bEnableDLSSInEditorViewports = 0x35;
            static constexpr std::uintptr_t bEnableDLSSInPlayInEditorViewports = 0x36;
            static constexpr std::uintptr_t bShowDLSSSDebugOnScreenMessages = 0x37;
            static constexpr std::uintptr_t GenericDLSSSRBinaryPath = 0x38;
            static constexpr std::uintptr_t bGenericDLSSSRBinaryExists = 0x48;
            static constexpr std::uintptr_t CustomDLSSSRBinaryPath = 0x50;
            static constexpr std::uintptr_t bCustomDLSSSRBinaryExists = 0x60;
            static constexpr std::uintptr_t DLAAPreset = 0x61;
            static constexpr std::uintptr_t DLSSQualityPreset = 0x63;
            static constexpr std::uintptr_t DLSSBalancedPreset = 0x64;
            static constexpr std::uintptr_t DLSSPerformancePreset = 0x65;
            static constexpr std::uintptr_t DLSSUltraPerformancePreset = 0x66;
            static constexpr std::uintptr_t GenericDLSSRRBinaryPath = 0x68;
            static constexpr std::uintptr_t bGenericDLSSRRBinaryExists = 0x78;
            static constexpr std::uintptr_t CustomDLSSRRBinaryPath = 0x80;
            static constexpr std::uintptr_t bCustomDLSSRRBinaryExists = 0x90;
            static constexpr std::uintptr_t DLAARRPreset = 0x91;
            static constexpr std::uintptr_t DLSSRRQualityPreset = 0x93;
            static constexpr std::uintptr_t DLSSRRBalancedPreset = 0x94;
            static constexpr std::uintptr_t DLSSRRPerformancePreset = 0x95;
            static constexpr std::uintptr_t DLSSRRUltraPerformancePreset = 0x96;
        };

        inline static constexpr std::array<PropertyInfo, 28> Properties{{
            {"bAllowOTAUpdate", 0x28, "BoolProperty"},
            {"NVIDIANGXApplicationId", 0x2C, "UInt32Property"},
            {"BiasCurrentColorStencilValue", 0x30, "ByteProperty"},
            {"bEnableDLSSD3D12", 0x31, "BoolProperty"},
            {"bEnableDLSSD3D11", 0x32, "BoolProperty"},
            {"bEnableDLSSVulkan", 0x33, "BoolProperty"},
            {"bShowDLSSIncompatiblePluginsToolsWarnings", 0x34, "BoolProperty"},
            {"bEnableDLSSInEditorViewports", 0x35, "BoolProperty"},
            {"bEnableDLSSInPlayInEditorViewports", 0x36, "BoolProperty"},
            {"bShowDLSSSDebugOnScreenMessages", 0x37, "BoolProperty"},
            {"GenericDLSSSRBinaryPath", 0x38, "StrProperty"},
            {"bGenericDLSSSRBinaryExists", 0x48, "BoolProperty"},
            {"CustomDLSSSRBinaryPath", 0x50, "StrProperty"},
            {"bCustomDLSSSRBinaryExists", 0x60, "BoolProperty"},
            {"DLAAPreset", 0x61, "EnumProperty"},
            {"DLSSQualityPreset", 0x63, "EnumProperty"},
            {"DLSSBalancedPreset", 0x64, "EnumProperty"},
            {"DLSSPerformancePreset", 0x65, "EnumProperty"},
            {"DLSSUltraPerformancePreset", 0x66, "EnumProperty"},
            {"GenericDLSSRRBinaryPath", 0x68, "StrProperty"},
            {"bGenericDLSSRRBinaryExists", 0x78, "BoolProperty"},
            {"CustomDLSSRRBinaryPath", 0x80, "StrProperty"},
            {"bCustomDLSSRRBinaryExists", 0x90, "BoolProperty"},
            {"DLAARRPreset", 0x91, "EnumProperty"},
            {"DLSSRRQualityPreset", 0x93, "EnumProperty"},
            {"DLSSRRBalancedPreset", 0x94, "EnumProperty"},
            {"DLSSRRPerformancePreset", 0x95, "EnumProperty"},
            {"DLSSRRUltraPerformancePreset", 0x96, "EnumProperty"},
        }};
    };

    struct DLSSUpscalerModularFeatureSettings
    {
        static constexpr std::string_view Name = "DLSSUpscalerModularFeatureSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Quality = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Quality", 0x0, "EnumProperty"},
        }};
    };

}
