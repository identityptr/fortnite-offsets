#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::BoostJumpCode
{
    struct FortControllerComponent_BoostedJump
    {
        static constexpr std::string_view Name = "FortControllerComponent_BoostedJump";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultBlockingTags = 0xC0;
            static constexpr std::uintptr_t BoostedJumpCanBeActivatedTag = 0xE0;
            static constexpr std::uintptr_t MovementModeExtension = 0xE8;
            static constexpr std::uintptr_t BoostJumpWalkingConfig = 0xF0;
            static constexpr std::uintptr_t BoostedJumpFeatureEnabled = 0x190;
            static constexpr std::uintptr_t BoostedJumpMonitorRate = 0x1B8;
            static constexpr std::uintptr_t BoostedJumpContextualTutorialTag = 0x1BC;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"DefaultBlockingTags", 0xC0, "StructProperty"},
            {"BoostedJumpCanBeActivatedTag", 0xE0, "StructProperty"},
            {"MovementModeExtension", 0xE8, "ClassProperty"},
            {"BoostJumpWalkingConfig", 0xF0, "StructProperty"},
            {"BoostedJumpFeatureEnabled", 0x190, "StructProperty"},
            {"BoostedJumpMonitorRate", 0x1B8, "FloatProperty"},
            {"BoostedJumpContextualTutorialTag", 0x1BC, "StructProperty"},
        }};
    };

    struct FortMovementMode_BoostedJumpRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_BoostedJumpRuntimeData";
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

    struct FortMovementMode_ExtLogicBoostedJump
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicBoostedJump";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t JumpAddedVelocityMultiplier = 0x1C0;
            static constexpr std::uintptr_t JumpZVelocity = 0x1E8;
            static constexpr std::uintptr_t JumpHorizontalVelocityMax = 0x210;
            static constexpr std::uintptr_t MaxTimeSpentInBoostedJump = 0x238;
            static constexpr std::uintptr_t AnimLayer = 0x240;
            static constexpr std::uintptr_t CameraStartShake = 0x248;
            static constexpr std::uintptr_t GC_BoostedJumpBeingActivated = 0x250;
            static constexpr std::uintptr_t AnimationMontage = 0x258;
            static constexpr std::uintptr_t SkipAnimationTag = 0x260;
            static constexpr std::uintptr_t PreventHolsterTags = 0x268;
            static constexpr std::uintptr_t AllowPrimaryFireTag = 0x288;
            static constexpr std::uintptr_t AllowSecondaryFireTag = 0x28C;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"JumpAddedVelocityMultiplier", 0x1C0, "StructProperty"},
            {"JumpZVelocity", 0x1E8, "StructProperty"},
            {"JumpHorizontalVelocityMax", 0x210, "StructProperty"},
            {"MaxTimeSpentInBoostedJump", 0x238, "FloatProperty"},
            {"AnimLayer", 0x240, "ClassProperty"},
            {"CameraStartShake", 0x248, "ClassProperty"},
            {"GC_BoostedJumpBeingActivated", 0x250, "StructProperty"},
            {"AnimationMontage", 0x258, "ObjectProperty"},
            {"SkipAnimationTag", 0x260, "StructProperty"},
            {"PreventHolsterTags", 0x268, "StructProperty"},
            {"AllowPrimaryFireTag", 0x288, "StructProperty"},
            {"AllowSecondaryFireTag", 0x28C, "StructProperty"},
        }};
    };

}
