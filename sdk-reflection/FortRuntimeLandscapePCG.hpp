#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortRuntimeLandscapePCG
{
    struct FortRuntimeLandscapePCGGrassComponent
    {
        static constexpr std::string_view Name = "FortRuntimeLandscapePCGGrassComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct PCGFortRuntimeLandscapeGenerateTexturesSettings
    {
        static constexpr std::string_view Name = "PCGFortRuntimeLandscapeGenerateTexturesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedGrassTypes = 0xA8;
            static constexpr std::uintptr_t bOverrideFromInput = 0xB8;
            static constexpr std::uintptr_t GrassTypesAttribute = 0xC0;
            static constexpr std::uintptr_t bExcludeSelectedGrassTypes = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"SelectedGrassTypes", 0xA8, "ArrayProperty"},
            {"bOverrideFromInput", 0xB8, "BoolProperty"},
            {"GrassTypesAttribute", 0xC0, "StructProperty"},
            {"bExcludeSelectedGrassTypes", 0xF0, "BoolProperty"},
        }};
    };

    struct PCGFortRuntimeLandscapeGetGrassTypesSettings
    {
        static constexpr std::string_view Name = "PCGFortRuntimeLandscapeGetGrassTypesSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PCGSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t GrassNameAttributeName = 0xA8;
            static constexpr std::uintptr_t GrassTypeAttributeName = 0xAC;
            static constexpr std::uintptr_t bExcludeSelectedGrassTypes = 0xB0;
            static constexpr std::uintptr_t SelectedGrassTypes = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GrassNameAttributeName", 0xA8, "NameProperty"},
            {"GrassTypeAttributeName", 0xAC, "NameProperty"},
            {"bExcludeSelectedGrassTypes", 0xB0, "BoolProperty"},
            {"SelectedGrassTypes", 0xB8, "ArrayProperty"},
        }};
    };

}
