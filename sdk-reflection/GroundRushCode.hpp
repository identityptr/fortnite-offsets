#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GroundRushCode
{
    struct FortControllerComponent_GroundRush
    {
        static constexpr std::string_view Name = "FortControllerComponent_GroundRush";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent_DamageLanding";
        struct Offsets
        {
            static constexpr std::uintptr_t GroundRushEnabled = 0x1D0;
            static constexpr std::uintptr_t GroundRushLogicClass = 0x1F8;
            static constexpr std::uintptr_t UseLateralVelocityAsRagdollInitialSpeed = 0x200;
            static constexpr std::uintptr_t EnabledInGliderRedeploy = 0x228;
            static constexpr std::uintptr_t BlockActivationUntilLanded = 0x250;
            static constexpr std::uintptr_t EventPushGroundRushTag = 0x254;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"GroundRushEnabled", 0x1D0, "StructProperty"},
            {"GroundRushLogicClass", 0x1F8, "ClassProperty"},
            {"UseLateralVelocityAsRagdollInitialSpeed", 0x200, "StructProperty"},
            {"EnabledInGliderRedeploy", 0x228, "StructProperty"},
            {"BlockActivationUntilLanded", 0x250, "StructProperty"},
            {"EventPushGroundRushTag", 0x254, "StructProperty"},
        }};
    };

    struct FortMovementMode_ExtGroundRushLanding
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtGroundRushLanding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtDamageLanding";
        struct Offsets
        {
            static constexpr std::uintptr_t OverrideFallingDamageCurve = 0x498;
            static constexpr std::uintptr_t GliderVelocityDamageCurve = 0x4C0;
            static constexpr std::uintptr_t GEGliderVelocityDamageList = 0x4E8;
            static constexpr std::uintptr_t GEGliderVelocityDamageIndex = 0x4F8;
            static constexpr std::uintptr_t GEGliderVelocityDamageTag = 0x520;
            static constexpr std::uintptr_t UseSplatRagdollOnAnyGliderDamage = 0x528;
            static constexpr std::uintptr_t EnableRollingPostLanding = 0x550;
            static constexpr std::uintptr_t RollingMontageMap = 0x578;
            static constexpr std::uintptr_t CardinalToDotMap = 0x588;
            static constexpr std::uintptr_t MaxAccelerationForRolling = 0x598;
            static constexpr std::uintptr_t MaxSpeedForRolling = 0x5C0;
            static constexpr std::uintptr_t MinLateralSpeedToEnterRolling = 0x5E8;
            static constexpr std::uintptr_t MinInputToEnterRolling = 0x610;
            static constexpr std::uintptr_t MinLateralSpeedToRagdollGlider = 0x638;
            static constexpr std::uintptr_t MinLateralSpeedToRagdollFalling = 0x660;
            static constexpr std::uintptr_t GCUIFeedback = 0x688;
            static constexpr std::uintptr_t TagsAddedOnExtensionPush = 0x690;
            static constexpr std::uintptr_t TagsToPushOnStaticMovement = 0x6B0;
            static constexpr std::uintptr_t BlockAbilitiesOnStaticMovement = 0x6D0;
            static constexpr std::uintptr_t BlockGroundRushUntilLandedTag = 0x6F0;
            static constexpr std::uintptr_t EventFallDamageLandingTag = 0x6F4;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"OverrideFallingDamageCurve", 0x498, "StructProperty"},
            {"GliderVelocityDamageCurve", 0x4C0, "StructProperty"},
            {"GEGliderVelocityDamageList", 0x4E8, "ArrayProperty"},
            {"GEGliderVelocityDamageIndex", 0x4F8, "StructProperty"},
            {"GEGliderVelocityDamageTag", 0x520, "StructProperty"},
            {"UseSplatRagdollOnAnyGliderDamage", 0x528, "StructProperty"},
            {"EnableRollingPostLanding", 0x550, "StructProperty"},
            {"RollingMontageMap", 0x578, "MapProperty"},
            {"CardinalToDotMap", 0x588, "MapProperty"},
            {"MaxAccelerationForRolling", 0x598, "StructProperty"},
            {"MaxSpeedForRolling", 0x5C0, "StructProperty"},
            {"MinLateralSpeedToEnterRolling", 0x5E8, "StructProperty"},
            {"MinInputToEnterRolling", 0x610, "StructProperty"},
            {"MinLateralSpeedToRagdollGlider", 0x638, "StructProperty"},
            {"MinLateralSpeedToRagdollFalling", 0x660, "StructProperty"},
            {"GCUIFeedback", 0x688, "StructProperty"},
            {"TagsAddedOnExtensionPush", 0x690, "StructProperty"},
            {"TagsToPushOnStaticMovement", 0x6B0, "StructProperty"},
            {"BlockAbilitiesOnStaticMovement", 0x6D0, "StructProperty"},
            {"BlockGroundRushUntilLandedTag", 0x6F0, "StructProperty"},
            {"EventFallDamageLandingTag", 0x6F4, "StructProperty"},
        }};
    };

    struct FortMovementMode_ExtLogicGroundRush
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicGroundRush";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t GroundSearch_DistanceToGround = 0x1B8;
            static constexpr std::uintptr_t GroundSearch_ForwardSearchTime = 0x1E0;
            static constexpr std::uintptr_t GroundSearch_OverrideParachuteDeployTraceDistance = 0x208;
            static constexpr std::uintptr_t GroundSearch_ParachuteDeployTraceDistance = 0x230;
            static constexpr std::uintptr_t Parachute_ReleaseCheckDistanceAdded = 0x258;
            static constexpr std::uintptr_t BlockGroundRushUntilLandedTag = 0x280;
            static constexpr std::uintptr_t EventsToSendOnLaunchEnding = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GroundSearch_DistanceToGround", 0x1B8, "StructProperty"},
            {"GroundSearch_ForwardSearchTime", 0x1E0, "StructProperty"},
            {"GroundSearch_OverrideParachuteDeployTraceDistance", 0x208, "StructProperty"},
            {"GroundSearch_ParachuteDeployTraceDistance", 0x230, "StructProperty"},
            {"Parachute_ReleaseCheckDistanceAdded", 0x258, "StructProperty"},
            {"BlockGroundRushUntilLandedTag", 0x280, "StructProperty"},
            {"EventsToSendOnLaunchEnding", 0x288, "StructProperty"},
        }};
    };

    struct FortMovementMode_GroundRushLandingRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_GroundRushLandingRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_DamageLandingRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t NetAnimationMontage = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NetAnimationMontage", 0x78, "ObjectProperty"},
        }};
    };

    struct FortMovementMode_GroundRushRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_GroundRushRuntimeData";
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

}
