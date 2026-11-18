#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::HoneyGlassRuntime
{
    struct FortGameplayAbility_HoneyGlass_Primary
    {
        static constexpr std::string_view Name = "FortGameplayAbility_HoneyGlass_Primary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t TagQueryToBreakStacksNative = 0xB58;
            static constexpr std::uintptr_t AllowStacksHFNative = 0xBA0;
            static constexpr std::uintptr_t TagQueryToBreakConnectionNative = 0xBD0;
            static constexpr std::uintptr_t TagQueryToAvoidStacksNative = 0xC18;
            static constexpr std::uintptr_t TagQueryToIgnoreTargetNative = 0xC60;
            static constexpr std::uintptr_t MaxDistanceNative = 0xCA8;
            static constexpr std::uintptr_t TargetedPawnNative = 0xCD8;
            static constexpr std::uintptr_t DistanceAndLOSFailsNative = 0xCE0;
            static constexpr std::uintptr_t DistanceAndLOSToleranceNative = 0xCE8;
            static constexpr std::uintptr_t EnableDBNORevive = 0xD18;
            static constexpr std::uintptr_t bIsReviving = 0xD40;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"TagQueryToBreakStacksNative", 0xB58, "StructProperty"},
            {"AllowStacksHFNative", 0xBA0, "StructProperty"},
            {"TagQueryToBreakConnectionNative", 0xBD0, "StructProperty"},
            {"TagQueryToAvoidStacksNative", 0xC18, "StructProperty"},
            {"TagQueryToIgnoreTargetNative", 0xC60, "StructProperty"},
            {"MaxDistanceNative", 0xCA8, "StructProperty"},
            {"TargetedPawnNative", 0xCD8, "ObjectProperty"},
            {"DistanceAndLOSFailsNative", 0xCE0, "IntProperty"},
            {"DistanceAndLOSToleranceNative", 0xCE8, "StructProperty"},
            {"EnableDBNORevive", 0xD18, "StructProperty"},
            {"bIsReviving", 0xD40, "BoolProperty"},
        }};
    };

    struct FortGameplayAbility_HoneyGlass_SlowFall
    {
        static constexpr std::string_view Name = "FortGameplayAbility_HoneyGlass_SlowFall";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t FallingDownTagNative = 0xB40;
            static constexpr std::uintptr_t DownVelocityThresholdNative = 0xB44;
            static constexpr std::uintptr_t GroundCheckDistanceNative = 0xB48;
            static constexpr std::uintptr_t GroundCheckXYVelocityMultNative = 0xB78;
            static constexpr std::uintptr_t GroundTraceProfileName = 0xB7C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"FallingDownTagNative", 0xB40, "StructProperty"},
            {"DownVelocityThresholdNative", 0xB44, "FloatProperty"},
            {"GroundCheckDistanceNative", 0xB48, "StructProperty"},
            {"GroundCheckXYVelocityMultNative", 0xB78, "FloatProperty"},
            {"GroundTraceProfileName", 0xB7C, "NameProperty"},
        }};
    };

    struct HoneyGlassLayerAnimInstance
    {
        static constexpr std::string_view Name = "HoneyGlassLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t JumpAddAlpha = 0x1180;
            static constexpr std::uintptr_t bCanEnterRelaxedState = 0x1188;
            static constexpr std::uintptr_t HoneyGlassStaffFireCMMMontageAnimMontage = 0x1190;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"JumpAddAlpha", 0x1180, "DoubleProperty"},
            {"bCanEnterRelaxedState", 0x1188, "BoolProperty"},
            {"HoneyGlassStaffFireCMMMontageAnimMontage", 0x1190, "SoftObjectProperty"},
        }};
    };

    struct HoneyGlassWeapon
    {
        static constexpr std::string_view Name = "HoneyGlassWeapon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponRanged";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentTargetDelegate = 0x2A98;
            static constexpr std::uintptr_t ChannelTargetPlayerPawn = 0x2AA8;
            static constexpr std::uintptr_t HasDBNOTargetTagNative = 0x2AB0;
            static constexpr std::uintptr_t IsRevivingTagNative = 0x2AB4;
            static constexpr std::uintptr_t HasChannelingTargetTagNative = 0x2AB8;
            static constexpr std::uintptr_t IsChannelingTagNative = 0x2ABC;
            static constexpr std::uintptr_t ChannelTargetTagNative = 0x2AC0;
            static constexpr std::uintptr_t TargetingPresetNative = 0x2AC8;
            static constexpr std::uintptr_t ChannelTargetMaxDistanceNative = 0x2AD0;
            static constexpr std::uintptr_t TargetMultiInteractComponentNative = 0x2B00;
            static constexpr std::uintptr_t TargetUpdateIntervalNative = 0x2B08;
            static constexpr std::uintptr_t LocalIsEquipped = 0x2B38;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"CurrentTargetDelegate", 0x2A98, "MulticastInlineDelegateProperty"},
            {"ChannelTargetPlayerPawn", 0x2AA8, "ObjectProperty"},
            {"HasDBNOTargetTagNative", 0x2AB0, "StructProperty"},
            {"IsRevivingTagNative", 0x2AB4, "StructProperty"},
            {"HasChannelingTargetTagNative", 0x2AB8, "StructProperty"},
            {"IsChannelingTagNative", 0x2ABC, "StructProperty"},
            {"ChannelTargetTagNative", 0x2AC0, "StructProperty"},
            {"TargetingPresetNative", 0x2AC8, "ObjectProperty"},
            {"ChannelTargetMaxDistanceNative", 0x2AD0, "StructProperty"},
            {"TargetMultiInteractComponentNative", 0x2B00, "ObjectProperty"},
            {"TargetUpdateIntervalNative", 0x2B08, "StructProperty"},
            {"LocalIsEquipped", 0x2B38, "BoolProperty"},
        }};
    };

    struct HoneyGlassWeaponAnimInstance
    {
        static constexpr std::string_view Name = "HoneyGlassWeaponAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t TipRotationYawRot = 0x370;
            static constexpr std::uintptr_t TipRotation = 0x388;
            static constexpr std::uintptr_t bIsTeamBuff = 0x390;
            static constexpr std::uintptr_t bIsTeamHealing = 0x391;
            static constexpr std::uintptr_t bIsSelfHealing = 0x392;
            static constexpr std::uintptr_t bIsFiring = 0x393;
            static constexpr std::uintptr_t TeamHealingTagName = 0x394;
            static constexpr std::uintptr_t SelfHealingTagName = 0x398;
            static constexpr std::uintptr_t BuffTagName = 0x39C;
            static constexpr std::uintptr_t WeaponActor = 0x3A0;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"TipRotationYawRot", 0x370, "StructProperty"},
            {"TipRotation", 0x388, "DoubleProperty"},
            {"bIsTeamBuff", 0x390, "BoolProperty"},
            {"bIsTeamHealing", 0x391, "BoolProperty"},
            {"bIsSelfHealing", 0x392, "BoolProperty"},
            {"bIsFiring", 0x393, "BoolProperty"},
            {"TeamHealingTagName", 0x394, "StructProperty"},
            {"SelfHealingTagName", 0x398, "StructProperty"},
            {"BuffTagName", 0x39C, "StructProperty"},
            {"WeaponActor", 0x3A0, "ObjectProperty"},
        }};
    };

}
