#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DashRuntime
{
    struct FortAttributeSet_DashCharges
    {
        static constexpr std::string_view Name = "FortAttributeSet_DashCharges";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAttributeSet";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentDashCharges = 0x48;
            static constexpr std::uintptr_t MaxDashCharges = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CurrentDashCharges", 0x48, "StructProperty"},
            {"MaxDashCharges", 0x70, "StructProperty"},
        }};
    };

    struct FortMovementMode_DashRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_DashRuntimeData";
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

    struct FortMovementMode_ExtDash
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtDash";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t DashDistance = 0x1B8;
            static constexpr std::uintptr_t DashDuration = 0x1E0;
            static constexpr std::uintptr_t UseMovementForTargetDeadzone = 0x208;
            static constexpr std::uintptr_t bUseDynamicZTarget = 0x230;
            static constexpr std::uintptr_t DynamicZMaxReverseAngle = 0x258;
            static constexpr std::uintptr_t DynamicZMinReverseAngle = 0x280;
            static constexpr std::uintptr_t DynamicZReverseModifier = 0x2A8;
            static constexpr std::uintptr_t DynamicZReverseTargetMinZ = 0x2D0;
            static constexpr std::uintptr_t DashEndVelocity = 0x2F8;
            static constexpr std::uintptr_t bDashEndVelocityUseZ = 0x320;
            static constexpr std::uintptr_t DashAccelerationMultiplier = 0x348;
            static constexpr std::uintptr_t EndVelocityMultiplier = 0x370;
            static constexpr std::uintptr_t EndVelocityMultiplierOnNoUserInput = 0x398;
            static constexpr std::uintptr_t bRestrictSpeedToExpected = 0x3C0;
            static constexpr std::uintptr_t VelocityOnFinishMode = 0x3E8;
            static constexpr std::uintptr_t ClampVelocityOnFinish = 0x3F0;
            static constexpr std::uintptr_t HeightAboveGround = 0x418;
            static constexpr std::uintptr_t bEnsureHeightAboveGround = 0x440;
            static constexpr std::uintptr_t PathOffsetCurve = 0x468;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"DashDistance", 0x1B8, "StructProperty"},
            {"DashDuration", 0x1E0, "StructProperty"},
            {"UseMovementForTargetDeadzone", 0x208, "StructProperty"},
            {"bUseDynamicZTarget", 0x230, "StructProperty"},
            {"DynamicZMaxReverseAngle", 0x258, "StructProperty"},
            {"DynamicZMinReverseAngle", 0x280, "StructProperty"},
            {"DynamicZReverseModifier", 0x2A8, "StructProperty"},
            {"DynamicZReverseTargetMinZ", 0x2D0, "StructProperty"},
            {"DashEndVelocity", 0x2F8, "StructProperty"},
            {"bDashEndVelocityUseZ", 0x320, "StructProperty"},
            {"DashAccelerationMultiplier", 0x348, "StructProperty"},
            {"EndVelocityMultiplier", 0x370, "StructProperty"},
            {"EndVelocityMultiplierOnNoUserInput", 0x398, "StructProperty"},
            {"bRestrictSpeedToExpected", 0x3C0, "StructProperty"},
            {"VelocityOnFinishMode", 0x3E8, "EnumProperty"},
            {"ClampVelocityOnFinish", 0x3F0, "StructProperty"},
            {"HeightAboveGround", 0x418, "StructProperty"},
            {"bEnsureHeightAboveGround", 0x440, "StructProperty"},
            {"PathOffsetCurve", 0x468, "ObjectProperty"},
        }};
    };

}
