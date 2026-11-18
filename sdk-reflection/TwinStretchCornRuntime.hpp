#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TwinStretchCornRuntime
{
    struct FortPlayerViewFollowerComponent
    {
        static constexpr std::string_view Name = "FortPlayerViewFollowerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t WolrdOffsetFromPlayerLocation = 0xC0;
            static constexpr std::uintptr_t RelativeOffsetFromPlayerView = 0xD8;
            static constexpr std::uintptr_t PitchRange = 0xF0;
            static constexpr std::uintptr_t UpdateFrequency = 0x100;
            static constexpr std::uintptr_t LocationLerpSpeed = 0x128;
            static constexpr std::uintptr_t RotationLerpSpeed = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"WolrdOffsetFromPlayerLocation", 0xC0, "StructProperty"},
            {"RelativeOffsetFromPlayerView", 0xD8, "StructProperty"},
            {"PitchRange", 0xF0, "StructProperty"},
            {"UpdateFrequency", 0x100, "StructProperty"},
            {"LocationLerpSpeed", 0x128, "StructProperty"},
            {"RotationLerpSpeed", 0x150, "StructProperty"},
        }};
    };

    struct TwinStretchCornLayerAnimInstance
    {
        static constexpr std::string_view Name = "TwinStretchCornLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsBlocking = 0x1180;
            static constexpr std::uintptr_t bIsFiring = 0x1181;
            static constexpr std::uintptr_t bIsReFiring = 0x1182;
            static constexpr std::uintptr_t bIsFireActive = 0x1183;
            static constexpr std::uintptr_t FireAOAlpha = 0x1184;
            static constexpr std::uintptr_t ClampedPitch = 0x1188;
            static constexpr std::uintptr_t UpperLowerBlendAlpha = 0x118C;
            static constexpr std::uintptr_t bIsUpperBodyOnly = 0x1190;
            static constexpr std::uintptr_t bIsShieldBroken = 0x1191;
            static constexpr std::uintptr_t CooldownTagName = 0x1194;
            static constexpr std::uintptr_t UpperBodyOnlyTestTagContainer = 0x1198;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"bIsBlocking", 0x1180, "BoolProperty"},
            {"bIsFiring", 0x1181, "BoolProperty"},
            {"bIsReFiring", 0x1182, "BoolProperty"},
            {"bIsFireActive", 0x1183, "BoolProperty"},
            {"FireAOAlpha", 0x1184, "FloatProperty"},
            {"ClampedPitch", 0x1188, "FloatProperty"},
            {"UpperLowerBlendAlpha", 0x118C, "FloatProperty"},
            {"bIsUpperBodyOnly", 0x1190, "BoolProperty"},
            {"bIsShieldBroken", 0x1191, "BoolProperty"},
            {"CooldownTagName", 0x1194, "StructProperty"},
            {"UpperBodyOnlyTestTagContainer", 0x1198, "StructProperty"},
        }};
    };

    struct TwinStretchCornShieldInterface
    {
        static constexpr std::string_view Name = "TwinStretchCornShieldInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TwinStretchCornShieldWeaponAnimInstance
    {
        static constexpr std::string_view Name = "TwinStretchCornShieldWeaponAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t ShieldPosOffset = 0x370;
            static constexpr std::uintptr_t bIsBlocking = 0x374;
            static constexpr std::uintptr_t bIsEquip = 0x375;
            static constexpr std::uintptr_t LagPitch = 0x378;
            static constexpr std::uintptr_t LagYaw = 0x37C;
            static constexpr std::uintptr_t bIsShieldBroken = 0x380;
            static constexpr std::uintptr_t bIsShieldHit = 0x381;
            static constexpr std::uintptr_t LagForwardSpeed = 0x384;
            static constexpr std::uintptr_t ShardNoiseAlpha = 0x388;
            static constexpr std::uintptr_t bIsIdleNoise = 0x38C;
            static constexpr std::uintptr_t CooldownTagName = 0x390;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"ShieldPosOffset", 0x370, "FloatProperty"},
            {"bIsBlocking", 0x374, "BoolProperty"},
            {"bIsEquip", 0x375, "BoolProperty"},
            {"LagPitch", 0x378, "FloatProperty"},
            {"LagYaw", 0x37C, "FloatProperty"},
            {"bIsShieldBroken", 0x380, "BoolProperty"},
            {"bIsShieldHit", 0x381, "BoolProperty"},
            {"LagForwardSpeed", 0x384, "FloatProperty"},
            {"ShardNoiseAlpha", 0x388, "FloatProperty"},
            {"bIsIdleNoise", 0x38C, "BoolProperty"},
            {"CooldownTagName", 0x390, "StructProperty"},
        }};
    };

    struct TwinStretchCornWeaponAnimInstance
    {
        static constexpr std::string_view Name = "TwinStretchCornWeaponAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsBlocking = 0x370;
            static constexpr std::uintptr_t BlockingTagName = 0x374;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsBlocking", 0x370, "BoolProperty"},
            {"BlockingTagName", 0x374, "StructProperty"},
        }};
    };

    struct TwinStretchCornWeaponInterface
    {
        static constexpr std::string_view Name = "TwinStretchCornWeaponInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
