#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MotherGameplayUI
{
    struct AvocadoEaterHealthBarWidget
    {
        static constexpr std::string_view Name = "AvocadoEaterHealthBarWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortHUDElementWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachedMessageTag = 0x370;
            static constexpr std::uintptr_t AttachedMessageType = 0x378;
            static constexpr std::uintptr_t DetachedMessageTag = 0x380;
            static constexpr std::uintptr_t DetachedMessageType = 0x388;
            static constexpr std::uintptr_t SetMarkerPositionMessageTag = 0x390;
            static constexpr std::uintptr_t SetMarkerPositionMessageType = 0x398;
            static constexpr std::uintptr_t SetMarkerPositionMessagePropertyName = 0x3A0;
            static constexpr std::uintptr_t TargetDamagedMessageTag = 0x3A4;
            static constexpr std::uintptr_t TargetDamagedMessageType = 0x3A8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"AttachedMessageTag", 0x370, "StructProperty"},
            {"AttachedMessageType", 0x378, "ObjectProperty"},
            {"DetachedMessageTag", 0x380, "StructProperty"},
            {"DetachedMessageType", 0x388, "ObjectProperty"},
            {"SetMarkerPositionMessageTag", 0x390, "StructProperty"},
            {"SetMarkerPositionMessageType", 0x398, "ObjectProperty"},
            {"SetMarkerPositionMessagePropertyName", 0x3A0, "NameProperty"},
            {"TargetDamagedMessageTag", 0x3A4, "StructProperty"},
            {"TargetDamagedMessageType", 0x3A8, "ObjectProperty"},
        }};
    };

    struct FortGravyGoblinReticleExtensionWidget
    {
        static constexpr std::string_view Name = "FortGravyGoblinReticleExtensionWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponReticleExtensionWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedAssociatedWeapon = 0x370;
            static constexpr std::uintptr_t ReticleExtensionsToHide = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedAssociatedWeapon", 0x370, "ObjectProperty"},
            {"ReticleExtensionsToHide", 0x378, "StructProperty"},
        }};
    };

    struct FortLlamaRoasterReticleExtensionWidget
    {
        static constexpr std::string_view Name = "FortLlamaRoasterReticleExtensionWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponReticleExtensionWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedAssociatedWeapon = 0x370;
            static constexpr std::uintptr_t ReticleExtensionsToHide = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedAssociatedWeapon", 0x370, "ObjectProperty"},
            {"ReticleExtensionsToHide", 0x378, "StructProperty"},
        }};
    };

    struct FortMobileActionBBE_GravyGoblinRotate
    {
        static constexpr std::string_view Name = "FortMobileActionBBE_GravyGoblinRotate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMobileActionButtonBehaviorExtension";
        struct Offsets
        {
            static constexpr std::uintptr_t GravyGoblinTag = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GravyGoblinTag", 0x90, "StructProperty"},
        }};
    };

    struct FortPaddleGingerReticleExtensionWidget
    {
        static constexpr std::string_view Name = "FortPaddleGingerReticleExtensionWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponReticleExtensionWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Keybind_ActivateAction = 0x3B0;
            static constexpr std::uintptr_t Keybind_CycleCategoryAction = 0x3B8;
            static constexpr std::uintptr_t Keybind_CyclePropAction = 0x3C0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Keybind_ActivateAction", 0x3B0, "ObjectProperty"},
            {"Keybind_CycleCategoryAction", 0x3B8, "ObjectProperty"},
            {"Keybind_CyclePropAction", 0x3C0, "ObjectProperty"},
        }};
    };

    struct FortReactorGradeReticleExtensionWidget
    {
        static constexpr std::string_view Name = "FortReactorGradeReticleExtensionWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponReticleExtensionWidgetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedAssociatedWeapon = 0x370;
            static constexpr std::uintptr_t ReticleExtensionsToHide = 0x378;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CachedAssociatedWeapon", 0x370, "ObjectProperty"},
            {"ReticleExtensionsToHide", 0x378, "StructProperty"},
        }};
    };

}
