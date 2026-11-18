#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SharedWeaponAnimsRuntime
{
    struct ChapWormChooserData
    {
        static constexpr std::string_view Name = "ChapWormChooserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemChooserData";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsOverpower = 0x28;
            static constexpr std::uintptr_t OPTagName = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsOverpower", 0x28, "BoolProperty"},
            {"OPTagName", 0x2C, "StructProperty"},
        }};
    };

    struct DualWieldableChooserData
    {
        static constexpr std::string_view Name = "DualWieldableChooserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemChooserData";
        struct Offsets
        {
            static constexpr std::uintptr_t bPlaySecondaryTargeting = 0x28;
            static constexpr std::uintptr_t bPlayPrimaryTargeting = 0x29;
            static constexpr std::uintptr_t bIsRelaxedLevel1 = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bPlaySecondaryTargeting", 0x28, "BoolProperty"},
            {"bPlayPrimaryTargeting", 0x29, "BoolProperty"},
            {"bIsRelaxedLevel1", 0x2A, "BoolProperty"},
        }};
    };

    struct FlexLegendChooserData
    {
        static constexpr std::string_view Name = "FlexLegendChooserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemChooserData";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsTargetingCustom = 0x28;
            static constexpr std::uintptr_t bPlayUpperBodyTargetingCustom = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsTargetingCustom", 0x28, "BoolProperty"},
            {"bPlayUpperBodyTargetingCustom", 0x29, "BoolProperty"},
        }};
    };

    struct RATTPistolChooserData
    {
        static constexpr std::string_view Name = "RATTPistolChooserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemChooserData";
        struct Offsets
        {
            static constexpr std::uintptr_t bPlayUpperBodyTargetingCustom = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bPlayUpperBodyTargetingCustom", 0x28, "BoolProperty"},
        }};
    };

    struct VividRazorLayerAnimInstance
    {
        static constexpr std::string_view Name = "VividRazorLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t FiringPoseDuration = 0x1180;
            static constexpr std::uintptr_t FirePoseRefreshDuration = 0x1184;
            static constexpr std::uintptr_t DualWieldableReloadBothHandsMontage = 0x1188;
            static constexpr std::uintptr_t ReloadPlayRate = 0x11A8;
            static constexpr std::uintptr_t bIsPrimaryReloadStart = 0x11AC;
            static constexpr std::uintptr_t bIsSecondaryReloadStart = 0x11AD;
            static constexpr std::uintptr_t bIsReloadSingle = 0x11AE;
            static constexpr std::uintptr_t bIsReloadBoth = 0x11AF;
            static constexpr std::uintptr_t bIsReloadBothSingle = 0x11B0;
            static constexpr std::uintptr_t bIsEarlySecondaryReloadBlendOut = 0x11B1;
            static constexpr std::uintptr_t bIsEarlyPrimaryReloadBlendOut = 0x11B2;
            static constexpr std::uintptr_t bIsPrimaryReloadOnly = 0x11B3;
            static constexpr std::uintptr_t bIsSecondaryReloadOnly = 0x11B4;
            static constexpr std::uintptr_t bPlayPrimaryTargeting = 0x11B5;
            static constexpr std::uintptr_t bPlaySecondaryTargeting = 0x11B6;
            static constexpr std::uintptr_t bIsPrimaryReload = 0x11B7;
            static constexpr std::uintptr_t bIsSecondaryReload = 0x11B8;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"FiringPoseDuration", 0x1180, "FloatProperty"},
            {"FirePoseRefreshDuration", 0x1184, "FloatProperty"},
            {"DualWieldableReloadBothHandsMontage", 0x1188, "SoftObjectProperty"},
            {"ReloadPlayRate", 0x11A8, "FloatProperty"},
            {"bIsPrimaryReloadStart", 0x11AC, "BoolProperty"},
            {"bIsSecondaryReloadStart", 0x11AD, "BoolProperty"},
            {"bIsReloadSingle", 0x11AE, "BoolProperty"},
            {"bIsReloadBoth", 0x11AF, "BoolProperty"},
            {"bIsReloadBothSingle", 0x11B0, "BoolProperty"},
            {"bIsEarlySecondaryReloadBlendOut", 0x11B1, "BoolProperty"},
            {"bIsEarlyPrimaryReloadBlendOut", 0x11B2, "BoolProperty"},
            {"bIsPrimaryReloadOnly", 0x11B3, "BoolProperty"},
            {"bIsSecondaryReloadOnly", 0x11B4, "BoolProperty"},
            {"bPlayPrimaryTargeting", 0x11B5, "BoolProperty"},
            {"bPlaySecondaryTargeting", 0x11B6, "BoolProperty"},
            {"bIsPrimaryReload", 0x11B7, "BoolProperty"},
            {"bIsSecondaryReload", 0x11B8, "BoolProperty"},
        }};
    };

}
