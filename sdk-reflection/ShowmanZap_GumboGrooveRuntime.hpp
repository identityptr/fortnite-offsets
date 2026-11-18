#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ShowmanZap_GumboGrooveRuntime
{
    struct GumboGrooveGameplayCueStaggerComponent
    {
        static constexpr std::string_view Name = "GumboGrooveGameplayCueStaggerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameStateComponent";
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

    struct GumboGrooveGameplayCueStaggerLibrary
    {
        static constexpr std::string_view Name = "GumboGrooveGameplayCueStaggerLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ShowmanZapGumboGrooveLayerAnimInstance
    {
        static constexpr std::string_view Name = "ShowmanZapGumboGrooveLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t IdleAddAlpha = 0x1180;
            static constexpr std::uintptr_t bIsPlayingSecondaryMontages = 0x1184;
            static constexpr std::uintptr_t TacticalSprintTagName = 0x1188;
            static constexpr std::uintptr_t ShowmanZapGumboGrooveSecondaryIntroMontageObject = 0x1190;
            static constexpr std::uintptr_t ShowmanZapGumboGrooveTeleportEnterObject = 0x11B0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"IdleAddAlpha", 0x1180, "FloatProperty"},
            {"bIsPlayingSecondaryMontages", 0x1184, "BoolProperty"},
            {"TacticalSprintTagName", 0x1188, "StructProperty"},
            {"ShowmanZapGumboGrooveSecondaryIntroMontageObject", 0x1190, "SoftObjectProperty"},
            {"ShowmanZapGumboGrooveTeleportEnterObject", 0x11B0, "SoftObjectProperty"},
        }};
    };

}
