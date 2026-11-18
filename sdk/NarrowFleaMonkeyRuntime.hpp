#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NarrowFleaMonkeyRuntime
{
    struct FortMovementMode_NarrowFleaMonkey
    {
        static constexpr std::string_view Name = "FortMovementMode_NarrowFleaMonkey";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t LateralMaxPoweredSpeed = 0x1B8;
            static constexpr std::uintptr_t LateralAcceleration = 0x1E0;
            static constexpr std::uintptr_t LateralDeceleration = 0x208;
            static constexpr std::uintptr_t Gravity = 0x230;
            static constexpr std::uintptr_t ZCurve = 0x258;
            static constexpr std::uintptr_t ClassMonkey = 0x260;
            static constexpr std::uintptr_t MonkeyAnimLayer = 0x268;
            static constexpr std::uintptr_t AfterUseCooldownDuration = 0x270;
            static constexpr std::uintptr_t AfterUseCoolDownToggle = 0x298;
            static constexpr std::uintptr_t AfterUseCooldownTag = 0x2C0;
            static constexpr std::uintptr_t AirReactivationTimePenalty = 0x2C8;
            static constexpr std::uintptr_t FallDamageImmunityTag = 0x2F0;
            static constexpr std::uintptr_t MonkeyFallDamageImmunityGameplayEffect = 0x2F8;
            static constexpr std::uintptr_t MonkeyVerticalOffset = 0x300;
            static constexpr std::uintptr_t HideSpriteGameplayEffect = 0x328;
            static constexpr std::uintptr_t SpriteHideCueTag = 0x330;
            static constexpr std::uintptr_t SpriteShowCueTag = 0x334;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"LateralMaxPoweredSpeed", 0x1B8, "StructProperty"},
            {"LateralAcceleration", 0x1E0, "StructProperty"},
            {"LateralDeceleration", 0x208, "StructProperty"},
            {"Gravity", 0x230, "StructProperty"},
            {"ZCurve", 0x258, "ObjectProperty"},
            {"ClassMonkey", 0x260, "ClassProperty"},
            {"MonkeyAnimLayer", 0x268, "ClassProperty"},
            {"AfterUseCooldownDuration", 0x270, "StructProperty"},
            {"AfterUseCoolDownToggle", 0x298, "StructProperty"},
            {"AfterUseCooldownTag", 0x2C0, "StructProperty"},
            {"AirReactivationTimePenalty", 0x2C8, "StructProperty"},
            {"FallDamageImmunityTag", 0x2F0, "StructProperty"},
            {"MonkeyFallDamageImmunityGameplayEffect", 0x2F8, "ClassProperty"},
            {"MonkeyVerticalOffset", 0x300, "StructProperty"},
            {"HideSpriteGameplayEffect", 0x328, "ClassProperty"},
            {"SpriteHideCueTag", 0x330, "StructProperty"},
            {"SpriteShowCueTag", 0x334, "StructProperty"},
        }};
    };

    struct FortMovementMode_NarrowFleaMonkeyRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_NarrowFleaMonkeyRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t LogicID = 0x28;
            static constexpr std::uintptr_t RuntimeID = 0x2C;
            static constexpr std::uintptr_t bForceManualActivation = 0x2D;
            static constexpr std::uintptr_t bForceManualEnd = 0x2E;
            static constexpr std::uintptr_t bForceManualActivationNetworked = 0x2F;
            static constexpr std::uintptr_t bForceManualEndNetworked = 0x30;
            static constexpr std::uintptr_t EndReasonFlags = 0x31;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"LogicID", 0x28, "StructProperty"},
            {"RuntimeID", 0x2C, "ByteProperty"},
            {"bForceManualActivation", 0x2D, "BoolProperty"},
            {"bForceManualEnd", 0x2E, "BoolProperty"},
            {"bForceManualActivationNetworked", 0x2F, "BoolProperty"},
            {"bForceManualEndNetworked", 0x30, "BoolProperty"},
            {"EndReasonFlags", 0x31, "ByteProperty"},
        }};
    };

    struct NarrowFleaMonkeyAnimInstance
    {
        static constexpr std::string_view Name = "NarrowFleaMonkeyAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalVelocityTail2D = 0x1180;
            static constexpr std::uintptr_t LocalVelocity2D = 0x1190;
            static constexpr std::uintptr_t LocalVelocity2D_X10 = 0x11A0;
            static constexpr std::uintptr_t bSlowSpeed = 0x11B0;
            static constexpr std::uintptr_t bExiting = 0x11B1;
            static constexpr std::uintptr_t OwningCharacter = 0x11D0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"LocalVelocityTail2D", 0x1180, "StructProperty"},
            {"LocalVelocity2D", 0x1190, "StructProperty"},
            {"LocalVelocity2D_X10", 0x11A0, "StructProperty"},
            {"bSlowSpeed", 0x11B0, "BoolProperty"},
            {"bExiting", 0x11B1, "BoolProperty"},
            {"OwningCharacter", 0x11D0, "ObjectProperty"},
        }};
    };

    struct NarrowFleaMonkeyLayerAnimInstance
    {
        static constexpr std::string_view Name = "NarrowFleaMonkeyLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t HoverYawDelta = 0x1180;
            static constexpr std::uintptr_t LeanY = 0x1188;
            static constexpr std::uintptr_t LeanX = 0x1190;
            static constexpr std::uintptr_t bIsStartBlend = 0x1198;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"HoverYawDelta", 0x1180, "FloatProperty"},
            {"LeanY", 0x1188, "DoubleProperty"},
            {"LeanX", 0x1190, "DoubleProperty"},
            {"bIsStartBlend", 0x1198, "BoolProperty"},
        }};
    };

    struct NarrowFleaMonkeyProp
    {
        static constexpr std::string_view Name = "NarrowFleaMonkeyProp";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ExitDuration = 0x278;
            static constexpr std::uintptr_t SpriteVariants = 0x2A0;
            static constexpr std::uintptr_t BodyMaterialSlotIndex = 0x2B0;
            static constexpr std::uintptr_t TailMaterialSlotIndex = 0x2B4;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ExitDuration", 0x278, "StructProperty"},
            {"SpriteVariants", 0x2A0, "ArrayProperty"},
            {"BodyMaterialSlotIndex", 0x2B0, "IntProperty"},
            {"TailMaterialSlotIndex", 0x2B4, "IntProperty"},
        }};
    };

}
