#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ZiplineCodeRuntime
{
    struct FortMovementMode_ExtLogicZipline
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicZipline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtLogicZiplineBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ZiplinePawnComponent = 0x1C0;
            static constexpr std::uintptr_t GracePeriodToConnectToZipline = 0x1C8;
            static constexpr std::uintptr_t ZiplineReentryProtectionDelay = 0x1D8;
            static constexpr std::uintptr_t DefaultIgnoreCollisionsTime = 0x200;
            static constexpr std::uintptr_t ZiplineUseSweepDelay = 0x204;
            static constexpr std::uintptr_t ReachedEndMaxLateralSpeed = 0x220;
            static constexpr std::uintptr_t ReachedEndVertStrength = 0x248;
            static constexpr std::uintptr_t ReachedEndMinVertStrength = 0x270;
            static constexpr std::uintptr_t ReachedEndMaxZiplineSpeed = 0x298;
            static constexpr std::uintptr_t ReachedEndLateralDamping = 0x2C0;
            static constexpr std::uintptr_t bReachedEndOverrideXYVelocity = 0x2E8;
            static constexpr std::uintptr_t bReachedEndPlayFeedbackEvent = 0x2E9;
            static constexpr std::uintptr_t ReachedEndActivateDelay = 0x2F0;
            static constexpr std::uintptr_t JumpedMaxLateralSpeed = 0x330;
            static constexpr std::uintptr_t JumpedVertStrength = 0x358;
            static constexpr std::uintptr_t JumpedLateralDamping = 0x380;
            static constexpr std::uintptr_t bJumpedOverrideXYVelocity = 0x3A8;
            static constexpr std::uintptr_t bJumpedPlayFeedbackEvent = 0x3A9;
            static constexpr std::uintptr_t JumpedActivateDelay = 0x3B0;
            static constexpr std::uintptr_t TagPreventHeldObjectDrop = 0x3EC;
            static constexpr std::uintptr_t ZiplineEnterBlockedTags = 0x3F0;
            static constexpr std::uintptr_t PassiveGE = 0x410;
            static constexpr std::uintptr_t FallDamageImmunityGE = 0x418;
            static constexpr std::uintptr_t FallDamageImmunityGENoFX = 0x420;
            static constexpr std::uintptr_t TagToUseNoFX = 0x428;
            static constexpr std::uintptr_t StructureDamageGE = 0x430;
            static constexpr std::uintptr_t AttachVFXCue = 0x438;
            static constexpr std::uintptr_t EnteredZiplineAnimEventName = 0x43C;
            static constexpr std::uintptr_t ExitedZiplineAnimEventName = 0x440;
            static constexpr std::uintptr_t RemoveFallDamageImmunityTime = 0x444;
            static constexpr std::uintptr_t TagsThatBlockRemoveFallDamageImmunity = 0x448;
            static constexpr std::uintptr_t SurroundingsCheckTime = 0x468;
            static constexpr std::uintptr_t SmashBoxPositionAdditionalZ = 0x46C;
            static constexpr std::uintptr_t SmashBoxExtent = 0x470;
            static constexpr std::uintptr_t bUsePawnCapsuleForSweepSmash = 0x488;
            static constexpr std::uintptr_t SweepSmashBoxHalfExtent = 0x490;
            static constexpr std::uintptr_t SweepSmashBoxPositionAdditionalZ = 0x4A8;
            static constexpr std::uintptr_t SmashObjectTypes = 0x4B0;
            static constexpr std::uintptr_t SmashImmuneTags = 0x4C0;
            static constexpr std::uintptr_t SmashCue = 0x4E0;
            static constexpr std::uintptr_t SmashTagDestroyBuildings = 0x4E4;
            static constexpr std::uintptr_t MotorHarnessClass = 0x4E8;
            static constexpr std::uintptr_t MotorHarness = 0x4F0;
            static constexpr std::uintptr_t AscenderAscendingGE = 0x518;
            static constexpr std::uintptr_t AscenderDescendingGE = 0x520;
            static constexpr std::uintptr_t AscenderEnterTag = 0x528;
            static constexpr std::uintptr_t AscenderMaleAscendingAnim = 0x530;
            static constexpr std::uintptr_t AscenderMaleDescendingAnim = 0x538;
            static constexpr std::uintptr_t AscenderFemaleAscendingAnim = 0x540;
            static constexpr std::uintptr_t AscenderFemaleDescendingAnim = 0x548;
        };

        inline static constexpr std::array<PropertyInfo, 50> Properties{{
            {"ZiplinePawnComponent", 0x1C0, "WeakObjectProperty"},
            {"GracePeriodToConnectToZipline", 0x1C8, "FloatProperty"},
            {"ZiplineReentryProtectionDelay", 0x1D8, "StructProperty"},
            {"DefaultIgnoreCollisionsTime", 0x200, "FloatProperty"},
            {"ZiplineUseSweepDelay", 0x204, "FloatProperty"},
            {"ReachedEndMaxLateralSpeed", 0x220, "StructProperty"},
            {"ReachedEndVertStrength", 0x248, "StructProperty"},
            {"ReachedEndMinVertStrength", 0x270, "StructProperty"},
            {"ReachedEndMaxZiplineSpeed", 0x298, "StructProperty"},
            {"ReachedEndLateralDamping", 0x2C0, "StructProperty"},
            {"bReachedEndOverrideXYVelocity", 0x2E8, "BoolProperty"},
            {"bReachedEndPlayFeedbackEvent", 0x2E9, "BoolProperty"},
            {"ReachedEndActivateDelay", 0x2F0, "StructProperty"},
            {"JumpedMaxLateralSpeed", 0x330, "StructProperty"},
            {"JumpedVertStrength", 0x358, "StructProperty"},
            {"JumpedLateralDamping", 0x380, "StructProperty"},
            {"bJumpedOverrideXYVelocity", 0x3A8, "BoolProperty"},
            {"bJumpedPlayFeedbackEvent", 0x3A9, "BoolProperty"},
            {"JumpedActivateDelay", 0x3B0, "StructProperty"},
            {"TagPreventHeldObjectDrop", 0x3EC, "StructProperty"},
            {"ZiplineEnterBlockedTags", 0x3F0, "StructProperty"},
            {"PassiveGE", 0x410, "ClassProperty"},
            {"FallDamageImmunityGE", 0x418, "ClassProperty"},
            {"FallDamageImmunityGENoFX", 0x420, "ClassProperty"},
            {"TagToUseNoFX", 0x428, "StructProperty"},
            {"StructureDamageGE", 0x430, "ClassProperty"},
            {"AttachVFXCue", 0x438, "StructProperty"},
            {"EnteredZiplineAnimEventName", 0x43C, "NameProperty"},
            {"ExitedZiplineAnimEventName", 0x440, "NameProperty"},
            {"RemoveFallDamageImmunityTime", 0x444, "FloatProperty"},
            {"TagsThatBlockRemoveFallDamageImmunity", 0x448, "StructProperty"},
            {"SurroundingsCheckTime", 0x468, "FloatProperty"},
            {"SmashBoxPositionAdditionalZ", 0x46C, "FloatProperty"},
            {"SmashBoxExtent", 0x470, "StructProperty"},
            {"bUsePawnCapsuleForSweepSmash", 0x488, "BoolProperty"},
            {"SweepSmashBoxHalfExtent", 0x490, "StructProperty"},
            {"SweepSmashBoxPositionAdditionalZ", 0x4A8, "FloatProperty"},
            {"SmashObjectTypes", 0x4B0, "ArrayProperty"},
            {"SmashImmuneTags", 0x4C0, "StructProperty"},
            {"SmashCue", 0x4E0, "StructProperty"},
            {"SmashTagDestroyBuildings", 0x4E4, "StructProperty"},
            {"MotorHarnessClass", 0x4E8, "ClassProperty"},
            {"MotorHarness", 0x4F0, "ObjectProperty"},
            {"AscenderAscendingGE", 0x518, "ClassProperty"},
            {"AscenderDescendingGE", 0x520, "ClassProperty"},
            {"AscenderEnterTag", 0x528, "StructProperty"},
            {"AscenderMaleAscendingAnim", 0x530, "ObjectProperty"},
            {"AscenderMaleDescendingAnim", 0x538, "ObjectProperty"},
            {"AscenderFemaleAscendingAnim", 0x540, "ObjectProperty"},
            {"AscenderFemaleDescendingAnim", 0x548, "ObjectProperty"},
        }};
    };

    struct FortMovementMode_ExtLogicZiplineBase
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicZiplineBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t ZiplinePawnComponent = 0x1C0;
            static constexpr std::uintptr_t GracePeriodToConnectToZipline = 0x1C8;
            static constexpr std::uintptr_t ZiplineReentryProtectionDelay = 0x1D8;
            static constexpr std::uintptr_t DefaultIgnoreCollisionsTime = 0x200;
            static constexpr std::uintptr_t ZiplineUseSweepDelay = 0x204;
            static constexpr std::uintptr_t ReachedEndMaxLateralSpeed = 0x220;
            static constexpr std::uintptr_t ReachedEndVertStrength = 0x248;
            static constexpr std::uintptr_t ReachedEndMinVertStrength = 0x270;
            static constexpr std::uintptr_t ReachedEndMaxZiplineSpeed = 0x298;
            static constexpr std::uintptr_t ReachedEndLateralDamping = 0x2C0;
            static constexpr std::uintptr_t bReachedEndOverrideXYVelocity = 0x2E8;
            static constexpr std::uintptr_t bReachedEndPlayFeedbackEvent = 0x2E9;
            static constexpr std::uintptr_t ReachedEndActivateDelay = 0x2F0;
            static constexpr std::uintptr_t JumpedMaxLateralSpeed = 0x330;
            static constexpr std::uintptr_t JumpedVertStrength = 0x358;
            static constexpr std::uintptr_t JumpedLateralDamping = 0x380;
            static constexpr std::uintptr_t bJumpedOverrideXYVelocity = 0x3A8;
            static constexpr std::uintptr_t bJumpedPlayFeedbackEvent = 0x3A9;
            static constexpr std::uintptr_t JumpedActivateDelay = 0x3B0;
            static constexpr std::uintptr_t TagPreventHeldObjectDrop = 0x3EC;
            static constexpr std::uintptr_t ZiplineEnterBlockedTags = 0x3F0;
            static constexpr std::uintptr_t PassiveGE = 0x410;
            static constexpr std::uintptr_t FallDamageImmunityGE = 0x418;
            static constexpr std::uintptr_t FallDamageImmunityGENoFX = 0x420;
            static constexpr std::uintptr_t TagToUseNoFX = 0x428;
            static constexpr std::uintptr_t StructureDamageGE = 0x430;
            static constexpr std::uintptr_t AttachVFXCue = 0x438;
            static constexpr std::uintptr_t EnteredZiplineAnimEventName = 0x43C;
            static constexpr std::uintptr_t ExitedZiplineAnimEventName = 0x440;
            static constexpr std::uintptr_t RemoveFallDamageImmunityTime = 0x444;
            static constexpr std::uintptr_t TagsThatBlockRemoveFallDamageImmunity = 0x448;
            static constexpr std::uintptr_t SurroundingsCheckTime = 0x468;
            static constexpr std::uintptr_t SmashBoxPositionAdditionalZ = 0x46C;
            static constexpr std::uintptr_t SmashBoxExtent = 0x470;
            static constexpr std::uintptr_t bUsePawnCapsuleForSweepSmash = 0x488;
            static constexpr std::uintptr_t SweepSmashBoxHalfExtent = 0x490;
            static constexpr std::uintptr_t SweepSmashBoxPositionAdditionalZ = 0x4A8;
            static constexpr std::uintptr_t SmashObjectTypes = 0x4B0;
            static constexpr std::uintptr_t SmashImmuneTags = 0x4C0;
            static constexpr std::uintptr_t SmashCue = 0x4E0;
            static constexpr std::uintptr_t SmashTagDestroyBuildings = 0x4E4;
            static constexpr std::uintptr_t MotorHarnessClass = 0x4E8;
            static constexpr std::uintptr_t MotorHarness = 0x4F0;
            static constexpr std::uintptr_t AscenderAscendingGE = 0x518;
            static constexpr std::uintptr_t AscenderDescendingGE = 0x520;
            static constexpr std::uintptr_t AscenderEnterTag = 0x528;
            static constexpr std::uintptr_t AscenderMaleAscendingAnim = 0x530;
            static constexpr std::uintptr_t AscenderMaleDescendingAnim = 0x538;
            static constexpr std::uintptr_t AscenderFemaleAscendingAnim = 0x540;
            static constexpr std::uintptr_t AscenderFemaleDescendingAnim = 0x548;
        };

        inline static constexpr std::array<PropertyInfo, 50> Properties{{
            {"ZiplinePawnComponent", 0x1C0, "WeakObjectProperty"},
            {"GracePeriodToConnectToZipline", 0x1C8, "FloatProperty"},
            {"ZiplineReentryProtectionDelay", 0x1D8, "StructProperty"},
            {"DefaultIgnoreCollisionsTime", 0x200, "FloatProperty"},
            {"ZiplineUseSweepDelay", 0x204, "FloatProperty"},
            {"ReachedEndMaxLateralSpeed", 0x220, "StructProperty"},
            {"ReachedEndVertStrength", 0x248, "StructProperty"},
            {"ReachedEndMinVertStrength", 0x270, "StructProperty"},
            {"ReachedEndMaxZiplineSpeed", 0x298, "StructProperty"},
            {"ReachedEndLateralDamping", 0x2C0, "StructProperty"},
            {"bReachedEndOverrideXYVelocity", 0x2E8, "BoolProperty"},
            {"bReachedEndPlayFeedbackEvent", 0x2E9, "BoolProperty"},
            {"ReachedEndActivateDelay", 0x2F0, "StructProperty"},
            {"JumpedMaxLateralSpeed", 0x330, "StructProperty"},
            {"JumpedVertStrength", 0x358, "StructProperty"},
            {"JumpedLateralDamping", 0x380, "StructProperty"},
            {"bJumpedOverrideXYVelocity", 0x3A8, "BoolProperty"},
            {"bJumpedPlayFeedbackEvent", 0x3A9, "BoolProperty"},
            {"JumpedActivateDelay", 0x3B0, "StructProperty"},
            {"TagPreventHeldObjectDrop", 0x3EC, "StructProperty"},
            {"ZiplineEnterBlockedTags", 0x3F0, "StructProperty"},
            {"PassiveGE", 0x410, "ClassProperty"},
            {"FallDamageImmunityGE", 0x418, "ClassProperty"},
            {"FallDamageImmunityGENoFX", 0x420, "ClassProperty"},
            {"TagToUseNoFX", 0x428, "StructProperty"},
            {"StructureDamageGE", 0x430, "ClassProperty"},
            {"AttachVFXCue", 0x438, "StructProperty"},
            {"EnteredZiplineAnimEventName", 0x43C, "NameProperty"},
            {"ExitedZiplineAnimEventName", 0x440, "NameProperty"},
            {"RemoveFallDamageImmunityTime", 0x444, "FloatProperty"},
            {"TagsThatBlockRemoveFallDamageImmunity", 0x448, "StructProperty"},
            {"SurroundingsCheckTime", 0x468, "FloatProperty"},
            {"SmashBoxPositionAdditionalZ", 0x46C, "FloatProperty"},
            {"SmashBoxExtent", 0x470, "StructProperty"},
            {"bUsePawnCapsuleForSweepSmash", 0x488, "BoolProperty"},
            {"SweepSmashBoxHalfExtent", 0x490, "StructProperty"},
            {"SweepSmashBoxPositionAdditionalZ", 0x4A8, "FloatProperty"},
            {"SmashObjectTypes", 0x4B0, "ArrayProperty"},
            {"SmashImmuneTags", 0x4C0, "StructProperty"},
            {"SmashCue", 0x4E0, "StructProperty"},
            {"SmashTagDestroyBuildings", 0x4E4, "StructProperty"},
            {"MotorHarnessClass", 0x4E8, "ClassProperty"},
            {"MotorHarness", 0x4F0, "ObjectProperty"},
            {"AscenderAscendingGE", 0x518, "ClassProperty"},
            {"AscenderDescendingGE", 0x520, "ClassProperty"},
            {"AscenderEnterTag", 0x528, "StructProperty"},
            {"AscenderMaleAscendingAnim", 0x530, "ObjectProperty"},
            {"AscenderMaleDescendingAnim", 0x538, "ObjectProperty"},
            {"AscenderFemaleAscendingAnim", 0x540, "ObjectProperty"},
            {"AscenderFemaleDescendingAnim", 0x548, "ObjectProperty"},
        }};
    };

    struct FortMovementMode_ExtLogicZiplineSpline
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicZiplineSpline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ExtLogicZiplineBase";
        struct Offsets
        {
            static constexpr std::uintptr_t XYVelocityClampMaxValue = 0x550;
            static constexpr std::uintptr_t VerticalZiplineUseSweepDelay = 0x578;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"XYVelocityClampMaxValue", 0x550, "StructProperty"},
            {"VerticalZiplineUseSweepDelay", 0x578, "FloatProperty"},
        }};
    };

    struct FortMovementMode_ZiplineBaseRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_ZiplineBaseRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t StartElapsedTime = 0x9C;
            static constexpr std::uintptr_t EndElapsedTime = 0xA0;
            static constexpr std::uintptr_t IgnoreCollisionsStartElapsedTime = 0xA4;
            static constexpr std::uintptr_t IgnoreCollisionsEndElapsedTime = 0xA8;
            static constexpr std::uintptr_t bHolsterApplied = 0x128;
            static constexpr std::uintptr_t AscenderMontageSelected = 0x12C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"StartElapsedTime", 0x9C, "FloatProperty"},
            {"EndElapsedTime", 0xA0, "FloatProperty"},
            {"IgnoreCollisionsStartElapsedTime", 0xA4, "FloatProperty"},
            {"IgnoreCollisionsEndElapsedTime", 0xA8, "FloatProperty"},
            {"bHolsterApplied", 0x128, "BoolProperty"},
            {"AscenderMontageSelected", 0x12C, "WeakObjectProperty"},
        }};
    };

    struct FortMovementMode_ZiplineRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_ZiplineRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ZiplineBaseRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t StartElapsedTime = 0x9C;
            static constexpr std::uintptr_t EndElapsedTime = 0xA0;
            static constexpr std::uintptr_t IgnoreCollisionsStartElapsedTime = 0xA4;
            static constexpr std::uintptr_t IgnoreCollisionsEndElapsedTime = 0xA8;
            static constexpr std::uintptr_t bHolsterApplied = 0x128;
            static constexpr std::uintptr_t AscenderMontageSelected = 0x12C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"StartElapsedTime", 0x9C, "FloatProperty"},
            {"EndElapsedTime", 0xA0, "FloatProperty"},
            {"IgnoreCollisionsStartElapsedTime", 0xA4, "FloatProperty"},
            {"IgnoreCollisionsEndElapsedTime", 0xA8, "FloatProperty"},
            {"bHolsterApplied", 0x128, "BoolProperty"},
            {"AscenderMontageSelected", 0x12C, "WeakObjectProperty"},
        }};
    };

    struct FortMovementMode_ZiplineSplineRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_ZiplineSplineRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ZiplineBaseRuntimeData";
        struct Offsets
        {
            static constexpr std::uintptr_t StartElapsedTime = 0x9C;
            static constexpr std::uintptr_t EndElapsedTime = 0xA0;
            static constexpr std::uintptr_t IgnoreCollisionsStartElapsedTime = 0xA4;
            static constexpr std::uintptr_t IgnoreCollisionsEndElapsedTime = 0xA8;
            static constexpr std::uintptr_t bHolsterApplied = 0x128;
            static constexpr std::uintptr_t AscenderMontageSelected = 0x12C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"StartElapsedTime", 0x9C, "FloatProperty"},
            {"EndElapsedTime", 0xA0, "FloatProperty"},
            {"IgnoreCollisionsStartElapsedTime", 0xA4, "FloatProperty"},
            {"IgnoreCollisionsEndElapsedTime", 0xA8, "FloatProperty"},
            {"bHolsterApplied", 0x128, "BoolProperty"},
            {"AscenderMontageSelected", 0x12C, "WeakObjectProperty"},
        }};
    };

    struct FortPawnComponent_Zipline
    {
        static constexpr std::string_view Name = "FortPawnComponent_Zipline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ZiplineExtLogicClass = 0xD0;
            static constexpr std::uintptr_t ZiplineSplineExtLogicClass = 0xD8;
            static constexpr std::uintptr_t OwnerPawn = 0xE0;
            static constexpr std::uintptr_t OwnerMovementComponent = 0xE8;
            static constexpr std::uintptr_t ZiplineSocketZOffset = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ZiplineExtLogicClass", 0xD0, "ClassProperty"},
            {"ZiplineSplineExtLogicClass", 0xD8, "ClassProperty"},
            {"OwnerPawn", 0xE0, "WeakObjectProperty"},
            {"OwnerMovementComponent", 0xE8, "WeakObjectProperty"},
            {"ZiplineSocketZOffset", 0xF0, "FloatProperty"},
        }};
    };

    struct FortZiplineMotorHarness
    {
        static constexpr std::string_view Name = "FortZiplineMotorHarness";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachedPlayer = 0x278;
            static constexpr std::uintptr_t AttachedZipline = 0x280;
            static constexpr std::uintptr_t bHasHitAnotherPlayer = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AttachedPlayer", 0x278, "WeakObjectProperty"},
            {"AttachedZipline", 0x280, "WeakObjectProperty"},
            {"bHasHitAnotherPlayer", 0x288, "BoolProperty"},
        }};
    };

}
