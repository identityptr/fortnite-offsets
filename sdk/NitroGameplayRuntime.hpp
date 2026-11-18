#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NitroGameplayRuntime
{
    struct FortGA_NitroBashBase
    {
        static constexpr std::string_view Name = "FortGA_NitroBashBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t MinExplosiveSpeedVehicle = 0xB40;
            static constexpr std::uintptr_t SpeedCheckFrequency = 0xB68;
            static constexpr std::uintptr_t MinGeneralSpeedToTrigger = 0xB90;
            static constexpr std::uintptr_t VehicleOnwer = 0xB94;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MinExplosiveSpeedVehicle", 0xB40, "StructProperty"},
            {"SpeedCheckFrequency", 0xB68, "StructProperty"},
            {"MinGeneralSpeedToTrigger", 0xB90, "FloatProperty"},
            {"VehicleOnwer", 0xB94, "WeakObjectProperty"},
        }};
    };

    struct FortGCNL_Nitro_Active_Base
    {
        static constexpr std::string_view Name = "FortGCNL_Nitro_Active_Base";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayCueNotify_Loop";
        struct Offsets
        {
            static constexpr std::uintptr_t IntervalToUpdateTimerHandleForVFX = 0xC58;
            static constexpr std::uintptr_t NitroStateEffectTags = 0xC60;
            static constexpr std::uintptr_t UseEffectDuration = 0xC80;
            static constexpr std::uintptr_t NitroStateEffectHandle = 0xC84;
            static constexpr std::uintptr_t TargetActor = 0xC98;
            static constexpr std::uintptr_t RemainingDuration = 0xCA0;
            static constexpr std::uintptr_t OwnerAbilitySystemComponent = 0xCA4;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"IntervalToUpdateTimerHandleForVFX", 0xC58, "FloatProperty"},
            {"NitroStateEffectTags", 0xC60, "StructProperty"},
            {"UseEffectDuration", 0xC80, "BoolProperty"},
            {"NitroStateEffectHandle", 0xC84, "StructProperty"},
            {"TargetActor", 0xC98, "ObjectProperty"},
            {"RemainingDuration", 0xCA0, "FloatProperty"},
            {"OwnerAbilitySystemComponent", 0xCA4, "WeakObjectProperty"},
        }};
    };

    struct FortMovementMode_ExtLogicNitroState
    {
        static constexpr std::string_view Name = "FortMovementMode_ExtLogicNitroState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_BaseExtLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t SwimSpeedSpeedMultiplier = 0x1B8;
            static constexpr std::uintptr_t LandSpeedMultiplier = 0x1E0;
            static constexpr std::uintptr_t JumpZVelocityMultiplier = 0x208;
            static constexpr std::uintptr_t JumpHorizontalVelocityOverride = 0x230;
            static constexpr std::uintptr_t JumpHorizontalAccelerationOverride = 0x258;
            static constexpr std::uintptr_t DotThresholdToApplyJumpBoostTag = 0x280;
            static constexpr std::uintptr_t RequiredTagsToApplyHorizontalJumpBoost = 0x2A8;
            static constexpr std::uintptr_t GameplayCuesTagsToPush = 0x2C8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SwimSpeedSpeedMultiplier", 0x1B8, "StructProperty"},
            {"LandSpeedMultiplier", 0x1E0, "StructProperty"},
            {"JumpZVelocityMultiplier", 0x208, "StructProperty"},
            {"JumpHorizontalVelocityOverride", 0x230, "StructProperty"},
            {"JumpHorizontalAccelerationOverride", 0x258, "StructProperty"},
            {"DotThresholdToApplyJumpBoostTag", 0x280, "StructProperty"},
            {"RequiredTagsToApplyHorizontalJumpBoost", 0x2A8, "StructProperty"},
            {"GameplayCuesTagsToPush", 0x2C8, "ArrayProperty"},
        }};
    };

    struct FortMovementMode_PlayerNitroStateRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_PlayerNitroStateRuntimeData";
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

    struct FortPawnComponent_NitroPlayerState
    {
        static constexpr std::string_view Name = "FortPawnComponent_NitroPlayerState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NitroStateMovementModeExtension = 0xC8;
            static constexpr std::uintptr_t NitroPlayerStateMovementTag = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NitroStateMovementModeExtension", 0xC8, "ClassProperty"},
            {"NitroPlayerStateMovementTag", 0xD0, "StructProperty"},
        }};
    };

    struct FortWeaponNitroGauntlets
    {
        static constexpr std::string_view Name = "FortWeaponNitroGauntlets";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortWeaponRanged";
        struct Offsets
        {
            static constexpr std::uintptr_t OnUpdatePunchPreview = 0x2A98;
            static constexpr std::uintptr_t PunchPreviewAsyncTargetingHandle = 0x2AA8;
            static constexpr std::uintptr_t GroundPunchTargetingPreset = 0x2AB0;
            static constexpr std::uintptr_t AirPunchTargetingPreset = 0x2AB8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnUpdatePunchPreview", 0x2A98, "MulticastInlineDelegateProperty"},
            {"PunchPreviewAsyncTargetingHandle", 0x2AA8, "StructProperty"},
            {"GroundPunchTargetingPreset", 0x2AB0, "ObjectProperty"},
            {"AirPunchTargetingPreset", 0x2AB8, "ObjectProperty"},
        }};
    };

    struct NirtroBashLayerAnimInstance
    {
        static constexpr std::string_view Name = "NirtroBashLayerAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerAnimInstanceProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsBash_01 = 0x1180;
            static constexpr std::uintptr_t bIsBash_02 = 0x1181;
            static constexpr std::uintptr_t bIsExitBash = 0x1182;
            static constexpr std::uintptr_t bIsBounceBack = 0x1183;
            static constexpr std::uintptr_t bIsTacSprintOrBashing = 0x1184;
            static constexpr std::uintptr_t bIsCurrentlyBashing = 0x1185;
            static constexpr std::uintptr_t UpperBodyBash = 0x1188;
            static constexpr std::uintptr_t FullBodyBash = 0x1190;
            static constexpr std::uintptr_t UpperBodyBashSequenceA = 0x1198;
            static constexpr std::uintptr_t UpperBodyBashSequenceB = 0x11A0;
            static constexpr std::uintptr_t FullBodyBashSequenceA = 0x11A8;
            static constexpr std::uintptr_t FullBodyBashSequenceB = 0x11B0;
            static constexpr std::uintptr_t TacticalSprintTag = 0x11B8;
            static constexpr std::uintptr_t BounceBackTag = 0x11BC;
            static constexpr std::uintptr_t IsBashingTag = 0x11C0;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"bIsBash_01", 0x1180, "BoolProperty"},
            {"bIsBash_02", 0x1181, "BoolProperty"},
            {"bIsExitBash", 0x1182, "BoolProperty"},
            {"bIsBounceBack", 0x1183, "BoolProperty"},
            {"bIsTacSprintOrBashing", 0x1184, "BoolProperty"},
            {"bIsCurrentlyBashing", 0x1185, "BoolProperty"},
            {"UpperBodyBash", 0x1188, "ObjectProperty"},
            {"FullBodyBash", 0x1190, "ObjectProperty"},
            {"UpperBodyBashSequenceA", 0x1198, "ObjectProperty"},
            {"UpperBodyBashSequenceB", 0x11A0, "ObjectProperty"},
            {"FullBodyBashSequenceA", 0x11A8, "ObjectProperty"},
            {"FullBodyBashSequenceB", 0x11B0, "ObjectProperty"},
            {"TacticalSprintTag", 0x11B8, "StructProperty"},
            {"BounceBackTag", 0x11BC, "StructProperty"},
            {"IsBashingTag", 0x11C0, "StructProperty"},
        }};
    };

    struct NitroGameplayAnalytics
    {
        static constexpr std::string_view Name = "NitroGameplayAnalytics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
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

}
