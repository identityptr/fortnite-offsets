#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::OpenColorIO
{
    struct OpenColorIOBlueprintLibrary
    {
        static constexpr std::string_view Name = "OpenColorIOBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ApplyColorSpaceTransform",
        }};
    };

    struct OpenColorIOColorConversionSettings
    {
        static constexpr std::string_view Name = "OpenColorIOColorConversionSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ConfigurationSource = 0x0;
            static constexpr std::uintptr_t SourceColorSpace = 0x8;
            static constexpr std::uintptr_t DestinationColorSpace = 0x38;
            static constexpr std::uintptr_t DestinationDisplayView = 0x68;
            static constexpr std::uintptr_t DisplayViewDirection = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ConfigurationSource", 0x0, "ObjectProperty"},
            {"SourceColorSpace", 0x8, "StructProperty"},
            {"DestinationColorSpace", 0x38, "StructProperty"},
            {"DestinationDisplayView", 0x68, "StructProperty"},
            {"DisplayViewDirection", 0x98, "EnumProperty"},
        }};
    };

    struct OpenColorIOColorSpace
    {
        static constexpr std::string_view Name = "OpenColorIOColorSpace";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorSpaceName = 0x0;
            static constexpr std::uintptr_t FamilyName = 0x10;
            static constexpr std::uintptr_t Description = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ColorSpaceName", 0x0, "StrProperty"},
            {"FamilyName", 0x10, "StrProperty"},
            {"Description", 0x20, "StrProperty"},
        }};
    };

    struct OpenColorIOColorTransform
    {
        static constexpr std::string_view Name = "OpenColorIOColorTransform";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsDisplayViewType = 0x28;
            static constexpr std::uintptr_t SourceColorSpace = 0x30;
            static constexpr std::uintptr_t DestinationColorSpace = 0x40;
            static constexpr std::uintptr_t Display = 0x50;
            static constexpr std::uintptr_t View = 0x60;
            static constexpr std::uintptr_t DisplayViewDirection = 0x70;
            static constexpr std::uintptr_t LookupTextures = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bIsDisplayViewType", 0x28, "BoolProperty"},
            {"SourceColorSpace", 0x30, "StrProperty"},
            {"DestinationColorSpace", 0x40, "StrProperty"},
            {"Display", 0x50, "StrProperty"},
            {"View", 0x60, "StrProperty"},
            {"DisplayViewDirection", 0x70, "EnumProperty"},
            {"LookupTextures", 0x78, "ArrayProperty"},
        }};
    };

    struct OpenColorIOConfiguration
    {
        static constexpr std::string_view Name = "OpenColorIOConfiguration";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DesiredColorSpaces = 0x28;
            static constexpr std::uintptr_t DesiredDisplayViews = 0x38;
            static constexpr std::uintptr_t Context = 0x48;
            static constexpr std::uintptr_t ConfigurationFile = 0x58;
            static constexpr std::uintptr_t ColorTransforms = 0x68;
            static constexpr std::uintptr_t ConfigHash = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DesiredColorSpaces", 0x28, "ArrayProperty"},
            {"DesiredDisplayViews", 0x38, "ArrayProperty"},
            {"Context", 0x48, "MapProperty"},
            {"ConfigurationFile", 0x58, "StructProperty"},
            {"ColorTransforms", 0x68, "ArrayProperty"},
            {"ConfigHash", 0xA8, "StrProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "GetConfigurationFile",
            "ReloadExistingColorspaces",
            "SetConfigurationFile",
        }};
    };

    struct OpenColorIODisplayConfiguration
    {
        static constexpr std::string_view Name = "OpenColorIODisplayConfiguration";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsEnabled = 0x0;
            static constexpr std::uintptr_t ColorConfiguration = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsEnabled", 0x0, "BoolProperty"},
            {"ColorConfiguration", 0x8, "StructProperty"},
        }};
    };

    struct OpenColorIODisplayExtensionWrapper
    {
        static constexpr std::string_view Name = "OpenColorIODisplayExtensionWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "CreateInGameOpenColorIODisplayExtension",
            "CreateOpenColorIODisplayExtension",
            "GetOpenColorIOConfiguration",
            "RemoveSceneExtension",
            "SetOpenColorIOConfiguration",
            "SetSceneExtensionIsActiveFunction",
            "SetSceneExtensionIsActiveFunctions",
        }};
    };

    struct OpenColorIODisplayView
    {
        static constexpr std::string_view Name = "OpenColorIODisplayView";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Display = 0x0;
            static constexpr std::uintptr_t View = 0x10;
            static constexpr std::uintptr_t Description = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Display", 0x0, "StrProperty"},
            {"View", 0x10, "StrProperty"},
            {"Description", 0x20, "StrProperty"},
        }};
    };

    struct OpenColorIOSettings
    {
        static constexpr std::string_view Name = "OpenColorIOSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bSupportInverseViewTransforms = 0x30;
            static constexpr std::uintptr_t bUse32fLUT = 0x30;
            static constexpr std::uintptr_t bUseLegacyProcessor = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bSupportInverseViewTransforms", 0x30, "BoolProperty"},
            {"bUse32fLUT", 0x30, "BoolProperty"},
            {"bUseLegacyProcessor", 0x30, "BoolProperty"},
        }};
    };

}
