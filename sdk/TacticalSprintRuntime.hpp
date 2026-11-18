#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TacticalSprintRuntime
{
    struct FortGameplayCueNotifyLoop_TacticalSprint
    {
        static constexpr std::string_view Name = "FortGameplayCueNotifyLoop_TacticalSprint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayCueNotify_Loop";
        struct Offsets
        {
            static constexpr std::uintptr_t EnergyPercentageName = 0xC58;
            static constexpr std::uintptr_t KickAdditiveGainFadeName = 0xC5C;
            static constexpr std::uintptr_t FXUpdateRate = 0xC60;
            static constexpr std::uintptr_t LowestGainLevelValue = 0xC64;
            static constexpr std::uintptr_t NativePreStepFadeDelay = 0xC68;
            static constexpr std::uintptr_t EnergyComponentClass = 0xC70;
            static constexpr std::uintptr_t StartSprintSoundTag = 0xC78;
            static constexpr std::uintptr_t StartSoundContextClass = 0xC80;
            static constexpr std::uintptr_t OwnerPlayerPawn = 0xC88;
            static constexpr std::uintptr_t OwnerEnergyComponent = 0xC90;
            static constexpr std::uintptr_t OwnerAudioParameterComponent = 0xC98;
            static constexpr std::uintptr_t SprintSoundLibraryContext = 0xCA0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"EnergyPercentageName", 0xC58, "NameProperty"},
            {"KickAdditiveGainFadeName", 0xC5C, "NameProperty"},
            {"FXUpdateRate", 0xC60, "FloatProperty"},
            {"LowestGainLevelValue", 0xC64, "FloatProperty"},
            {"NativePreStepFadeDelay", 0xC68, "UInt32Property"},
            {"EnergyComponentClass", 0xC70, "ClassProperty"},
            {"StartSprintSoundTag", 0xC78, "StructProperty"},
            {"StartSoundContextClass", 0xC80, "ClassProperty"},
            {"OwnerPlayerPawn", 0xC88, "ObjectProperty"},
            {"OwnerEnergyComponent", 0xC90, "ObjectProperty"},
            {"OwnerAudioParameterComponent", 0xC98, "ObjectProperty"},
            {"SprintSoundLibraryContext", 0xCA0, "ObjectProperty"},
        }};
    };

    struct FortMovementMode_ELTacSprint
    {
        static constexpr std::string_view Name = "FortMovementMode_ELTacSprint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ItemActivated";
        struct Offsets
        {
            static constexpr std::uintptr_t TacticalSprintFail = 0x1E8;
            static constexpr std::uintptr_t TacticalSprintFailLowEnergy = 0x208;
            static constexpr std::uintptr_t MinEnergyToActivate = 0x228;
            static constexpr std::uintptr_t MinEnergyToActivateCreative = 0x258;
            static constexpr std::uintptr_t GCEnergyDrain = 0x284;
            static constexpr std::uintptr_t GCSpeedLines = 0x288;
            static constexpr std::uintptr_t GCSprintEnd = 0x28C;
            static constexpr std::uintptr_t ShowSpeedLines = 0x290;
            static constexpr std::uintptr_t MaxSpeedMultiplier = 0x2B8;
            static constexpr std::uintptr_t AccelerationMultiplier = 0x2E0;
            static constexpr std::uintptr_t RampUpSpeed = 0x308;
            static constexpr std::uintptr_t ModifiedRotationRate = 0x330;
            static constexpr std::uintptr_t JumpHeightMultiplier = 0x360;
            static constexpr std::uintptr_t TutorialGameplayTag = 0x38C;
            static constexpr std::uintptr_t TutorialAdditionalSourceTag = 0x390;
            static constexpr std::uintptr_t TutorialTargetTag = 0x3B0;
            static constexpr std::uintptr_t OnEnergyFullyDrainedSound = 0x3D0;
            static constexpr std::uintptr_t TacticalBehaviorTag = 0x3D8;
            static constexpr std::uintptr_t bIsCancelledBySliding = 0x3DC;
            static constexpr std::uintptr_t bUseModifiedRotationRate = 0x3DC;
            static constexpr std::uintptr_t AllowWeaponHolster = 0x3E0;
            static constexpr std::uintptr_t bOnlyShowEnergyDrainOnLocalClient = 0x40C;
            static constexpr std::uintptr_t bOnlyShowSpeedLinesOnLocalClient = 0x40C;
            static constexpr std::uintptr_t bOnlyShowSprintEndOnLocalClient = 0x40C;
            static constexpr std::uintptr_t bShouldDropHeldObjectOnActivate = 0x40C;
            static constexpr std::uintptr_t bShouldHolsterWeapon = 0x40C;
            static constexpr std::uintptr_t TagPreventWeaponHolster = 0x410;
            static constexpr std::uintptr_t TagPreventHeldObjectDrop = 0x414;
            static constexpr std::uintptr_t MinSpeedForHolster = 0x418;
            static constexpr std::uintptr_t HolsterTimeAttemptDelay = 0x41C;
            static constexpr std::uintptr_t MaxTryHolsterAttempt = 0x420;
            static constexpr std::uintptr_t EnergyComponentClass = 0x438;
            static constexpr std::uintptr_t HF_EnergyCostOnStart = 0x440;
            static constexpr std::uintptr_t HF_EnergyCostPerSecond = 0x470;
            static constexpr std::uintptr_t HF_EnergyCostOnJump = 0x4A0;
            static constexpr std::uintptr_t HF_DurabilityCostOnStart = 0x4D0;
            static constexpr std::uintptr_t HF_DurabilityCostOnJump = 0x500;
            static constexpr std::uintptr_t IgnoreJumpCostTag = 0x52C;
            static constexpr std::uintptr_t ShouldPauseEnergyUseOnFalling = 0x530;
            static constexpr std::uintptr_t ShouldStopEnergyRegenerationOnPaused = 0x560;
            static constexpr std::uintptr_t StopEnergyRegenerationOnPauseTag = 0x58C;
            static constexpr std::uintptr_t TacticalSprintTag = 0x590;
            static constexpr std::uintptr_t EnergyUseIdentifier = 0x594;
            static constexpr std::uintptr_t SprintStartedSoundMix = 0x598;
            static constexpr std::uintptr_t SprintStartedSound2D = 0x5A0;
            static constexpr std::uintptr_t HF_TacSprintEnabled = 0x5B0;
        };

        inline static constexpr std::array<PropertyInfo, 46> Properties{{
            {"TacticalSprintFail", 0x1E8, "StructProperty"},
            {"TacticalSprintFailLowEnergy", 0x208, "StructProperty"},
            {"MinEnergyToActivate", 0x228, "StructProperty"},
            {"MinEnergyToActivateCreative", 0x258, "StructProperty"},
            {"GCEnergyDrain", 0x284, "StructProperty"},
            {"GCSpeedLines", 0x288, "StructProperty"},
            {"GCSprintEnd", 0x28C, "StructProperty"},
            {"ShowSpeedLines", 0x290, "StructProperty"},
            {"MaxSpeedMultiplier", 0x2B8, "StructProperty"},
            {"AccelerationMultiplier", 0x2E0, "StructProperty"},
            {"RampUpSpeed", 0x308, "StructProperty"},
            {"ModifiedRotationRate", 0x330, "StructProperty"},
            {"JumpHeightMultiplier", 0x360, "StructProperty"},
            {"TutorialGameplayTag", 0x38C, "StructProperty"},
            {"TutorialAdditionalSourceTag", 0x390, "StructProperty"},
            {"TutorialTargetTag", 0x3B0, "StructProperty"},
            {"OnEnergyFullyDrainedSound", 0x3D0, "ObjectProperty"},
            {"TacticalBehaviorTag", 0x3D8, "StructProperty"},
            {"bIsCancelledBySliding", 0x3DC, "BoolProperty"},
            {"bUseModifiedRotationRate", 0x3DC, "BoolProperty"},
            {"AllowWeaponHolster", 0x3E0, "StructProperty"},
            {"bOnlyShowEnergyDrainOnLocalClient", 0x40C, "BoolProperty"},
            {"bOnlyShowSpeedLinesOnLocalClient", 0x40C, "BoolProperty"},
            {"bOnlyShowSprintEndOnLocalClient", 0x40C, "BoolProperty"},
            {"bShouldDropHeldObjectOnActivate", 0x40C, "BoolProperty"},
            {"bShouldHolsterWeapon", 0x40C, "BoolProperty"},
            {"TagPreventWeaponHolster", 0x410, "StructProperty"},
            {"TagPreventHeldObjectDrop", 0x414, "StructProperty"},
            {"MinSpeedForHolster", 0x418, "FloatProperty"},
            {"HolsterTimeAttemptDelay", 0x41C, "FloatProperty"},
            {"MaxTryHolsterAttempt", 0x420, "ByteProperty"},
            {"EnergyComponentClass", 0x438, "ClassProperty"},
            {"HF_EnergyCostOnStart", 0x440, "StructProperty"},
            {"HF_EnergyCostPerSecond", 0x470, "StructProperty"},
            {"HF_EnergyCostOnJump", 0x4A0, "StructProperty"},
            {"HF_DurabilityCostOnStart", 0x4D0, "StructProperty"},
            {"HF_DurabilityCostOnJump", 0x500, "StructProperty"},
            {"IgnoreJumpCostTag", 0x52C, "StructProperty"},
            {"ShouldPauseEnergyUseOnFalling", 0x530, "StructProperty"},
            {"ShouldStopEnergyRegenerationOnPaused", 0x560, "StructProperty"},
            {"StopEnergyRegenerationOnPauseTag", 0x58C, "StructProperty"},
            {"TacticalSprintTag", 0x590, "StructProperty"},
            {"EnergyUseIdentifier", 0x594, "StructProperty"},
            {"SprintStartedSoundMix", 0x598, "ObjectProperty"},
            {"SprintStartedSound2D", 0x5A0, "ObjectProperty"},
            {"HF_TacSprintEnabled", 0x5B0, "StructProperty"},
        }};
    };

    struct FortMovementMode_TacSprintRuntimeData
    {
        static constexpr std::string_view Name = "FortMovementMode_TacSprintRuntimeData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMovementMode_ItemActivatedRuntimeData";
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

    struct FortPlayerControllerComponent_TacticalSprint
    {
        static constexpr std::string_view Name = "FortPlayerControllerComponent_TacticalSprint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnFailedToSprint = 0xD8;
            static constexpr std::uintptr_t MovementModeExtension = 0xE8;
            static constexpr std::uintptr_t CurrentBoundPlayerPawn = 0xF0;
            static constexpr std::uintptr_t bFireAnalyticsEventOnEndPlay = 0xF8;
            static constexpr std::uintptr_t bHandlingMoveForward = 0xF8;
            static constexpr std::uintptr_t bIsSprinting = 0xF8;
            static constexpr std::uintptr_t bTacticalSprintEnabled = 0xF8;
            static constexpr std::uintptr_t bWantsToTacticalSprint = 0xF8;
            static constexpr std::uintptr_t bWasInBuildMode = 0xF8;
            static constexpr std::uintptr_t TacticalSprintAbilityGameplayTag = 0xFC;
            static constexpr std::uintptr_t DisableTacticalSprintAbilityGameplayTag = 0x100;
            static constexpr std::uintptr_t TacticalSprintEnabled = 0x108;
            static constexpr std::uintptr_t TacticalSprintToggleGracePeriod = 0x130;
            static constexpr std::uintptr_t bUseSpeedToAccelerationOverrideCurve = 0x158;
            static constexpr std::uintptr_t SpeedToAccelerationOverrideCurve = 0x160;
            static constexpr std::uintptr_t OnTacticalSprintStarted = 0x1A8;
            static constexpr std::uintptr_t OnTacticalSprintEnded = 0x1B8;
            static constexpr std::uintptr_t bUseMovementModeExtension = 0x1C8;
            static constexpr std::uintptr_t AllowPrimaryFireTag = 0x1D8;
            static constexpr std::uintptr_t AllowSecondaryFireTag = 0x1DC;
            static constexpr std::uintptr_t AllowSprintWhileAlreadyFiring = 0x1E0;
            static constexpr std::uintptr_t StopWantingToSprintTimerReceipt = 0x1E8;
            static constexpr std::uintptr_t InputComponent = 0x270;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"OnFailedToSprint", 0xD8, "MulticastInlineDelegateProperty"},
            {"MovementModeExtension", 0xE8, "ClassProperty"},
            {"CurrentBoundPlayerPawn", 0xF0, "ObjectProperty"},
            {"bFireAnalyticsEventOnEndPlay", 0xF8, "BoolProperty"},
            {"bHandlingMoveForward", 0xF8, "BoolProperty"},
            {"bIsSprinting", 0xF8, "BoolProperty"},
            {"bTacticalSprintEnabled", 0xF8, "BoolProperty"},
            {"bWantsToTacticalSprint", 0xF8, "BoolProperty"},
            {"bWasInBuildMode", 0xF8, "BoolProperty"},
            {"TacticalSprintAbilityGameplayTag", 0xFC, "StructProperty"},
            {"DisableTacticalSprintAbilityGameplayTag", 0x100, "StructProperty"},
            {"TacticalSprintEnabled", 0x108, "StructProperty"},
            {"TacticalSprintToggleGracePeriod", 0x130, "StructProperty"},
            {"bUseSpeedToAccelerationOverrideCurve", 0x158, "BoolProperty"},
            {"SpeedToAccelerationOverrideCurve", 0x160, "StructProperty"},
            {"OnTacticalSprintStarted", 0x1A8, "MulticastInlineDelegateProperty"},
            {"OnTacticalSprintEnded", 0x1B8, "MulticastInlineDelegateProperty"},
            {"bUseMovementModeExtension", 0x1C8, "BoolProperty"},
            {"AllowPrimaryFireTag", 0x1D8, "StructProperty"},
            {"AllowSecondaryFireTag", 0x1DC, "StructProperty"},
            {"AllowSprintWhileAlreadyFiring", 0x1E0, "StructProperty"},
            {"StopWantingToSprintTimerReceipt", 0x1E8, "StructProperty"},
            {"InputComponent", 0x270, "ObjectProperty"},
        }};
    };

    struct FortTacticalSprintSoundLibraryContext
    {
        static constexpr std::string_view Name = "FortTacticalSprintSoundLibraryContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSoundLibraryContext";
        struct Offsets
        {
            static constexpr std::uintptr_t StartEnergyPercentage = 0xC0;
            static constexpr std::uintptr_t EnergyFireThreshold = 0xC4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"StartEnergyPercentage", 0xC0, "FloatProperty"},
            {"EnergyFireThreshold", 0xC4, "FloatProperty"},
        }};
    };

}
