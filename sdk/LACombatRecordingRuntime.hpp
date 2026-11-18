#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LACombatRecordingRuntime
{
    struct LACombatActionsRecorder
    {
        static constexpr std::string_view Name = "LACombatActionsRecorder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
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

    struct LACombatDistanceWidget
    {
        static constexpr std::string_view Name = "LACombatDistanceWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t DistanceText = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DistanceText", 0x308, "ObjectProperty"},
        }};
    };

    struct LACombatRecordingBlueprintLibrary
    {
        static constexpr std::string_view Name = "LACombatRecordingBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LACombatRecordingCheatManager
    {
        static constexpr std::string_view Name = "LACombatRecordingCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
            static constexpr std::uintptr_t MonitoredControllers = 0x28;
            static constexpr std::uintptr_t PendingFightSetupControllers = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MonitoredControllers", 0x28, "ArrayProperty"},
            {"PendingFightSetupControllers", 0x38, "ArrayProperty"},
        }};
    };

    struct LACombatRecordingController
    {
        static constexpr std::string_view Name = "LACombatRecordingController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LearningAgentsController";
        struct Offsets
        {
            static constexpr std::uintptr_t LastMovementInput = 0x50;
            static constexpr std::uintptr_t LastRotationInputPitch = 0x68;
            static constexpr std::uintptr_t LastRotationInputYaw = 0x6C;
            static constexpr std::uintptr_t CumulativeAimInputPitch = 0x70;
            static constexpr std::uintptr_t CumulativeAimInputYaw = 0x74;
            static constexpr std::uintptr_t AimDeltaRotationPitch = 0x78;
            static constexpr std::uintptr_t AimDeltaRotationYaw = 0x7C;
            static constexpr std::uintptr_t AngularVelocityInputPitch = 0x80;
            static constexpr std::uintptr_t AngularVelocityInputYaw = 0x84;
            static constexpr std::uintptr_t WasCrouched = 0x88;
            static constexpr std::uintptr_t WasSliding = 0x89;
            static constexpr std::uintptr_t WasReloading = 0x8A;
            static constexpr std::uintptr_t PreviousPitch = 0x8C;
            static constexpr std::uintptr_t PreviousYaw = 0x90;
            static constexpr std::uintptr_t XIndex = 0x94;
            static constexpr std::uintptr_t YIndex = 0x98;
            static constexpr std::uintptr_t Speed = 0x9C;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"LastMovementInput", 0x50, "StructProperty"},
            {"LastRotationInputPitch", 0x68, "FloatProperty"},
            {"LastRotationInputYaw", 0x6C, "FloatProperty"},
            {"CumulativeAimInputPitch", 0x70, "FloatProperty"},
            {"CumulativeAimInputYaw", 0x74, "FloatProperty"},
            {"AimDeltaRotationPitch", 0x78, "FloatProperty"},
            {"AimDeltaRotationYaw", 0x7C, "FloatProperty"},
            {"AngularVelocityInputPitch", 0x80, "FloatProperty"},
            {"AngularVelocityInputYaw", 0x84, "FloatProperty"},
            {"WasCrouched", 0x88, "BoolProperty"},
            {"WasSliding", 0x89, "BoolProperty"},
            {"WasReloading", 0x8A, "BoolProperty"},
            {"PreviousPitch", 0x8C, "FloatProperty"},
            {"PreviousYaw", 0x90, "FloatProperty"},
            {"XIndex", 0x94, "IntProperty"},
            {"YIndex", 0x98, "IntProperty"},
            {"Speed", 0x9C, "FloatProperty"},
        }};
    };

    struct LACombatRecordingData
    {
        static constexpr std::string_view Name = "LACombatRecordingData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LearningAgentsRecording";
        struct Offsets
        {
            static constexpr std::uintptr_t RecordsCount = 0x80;
            static constexpr std::uintptr_t RecordsWithPersonalityCount = 0x84;
            static constexpr std::uintptr_t MetaReference = 0x88;
            static constexpr std::uintptr_t PersonalityInsertionIndex = 0x98;
            static constexpr std::uintptr_t PersonalityMetaDataPerRecord = 0xA0;
            static constexpr std::uintptr_t PersonalityIsAddedPerRecord = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"RecordsCount", 0x80, "IntProperty"},
            {"RecordsWithPersonalityCount", 0x84, "IntProperty"},
            {"MetaReference", 0x88, "MapProperty"},
            {"PersonalityInsertionIndex", 0x98, "IntProperty"},
            {"PersonalityMetaDataPerRecord", 0xA0, "ArrayProperty"},
            {"PersonalityIsAddedPerRecord", 0xB0, "ArrayProperty"},
        }};
    };

    struct LACombatRecordingManager
    {
        static constexpr std::string_view Name = "LACombatRecordingManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LearningAgentsManager";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxAgentNum = 0xC0;
            static constexpr std::uintptr_t Agents = 0xC8;
            static constexpr std::uintptr_t Listeners = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MaxAgentNum", 0xC0, "IntProperty"},
            {"Agents", 0xC8, "ArrayProperty"},
            {"Listeners", 0xD8, "ArrayProperty"},
        }};
    };

    struct LACombatRecordingSettings
    {
        static constexpr std::string_view Name = "LACombatRecordingSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t FightLoadouts = 0x30;
            static constexpr std::uintptr_t bRandomLoadoutSelection = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FightLoadouts", 0x30, "ArrayProperty"},
            {"bRandomLoadoutSelection", 0x40, "BoolProperty"},
        }};
    };

    struct LACombatReplayRecorder
    {
        static constexpr std::string_view Name = "LACombatReplayRecorder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LAReplayRecorder";
        struct Offsets
        {
            static constexpr std::uintptr_t SelfRaycastsNum = 0x398;
            static constexpr std::uintptr_t SelfRaycastHalfFOV = 0x39C;
            static constexpr std::uintptr_t SelfRaycastsDistance = 0x3A0;
            static constexpr std::uintptr_t SelfRaycastCollisionChannel = 0x3A4;
            static constexpr std::uintptr_t LOSCollisionChannel = 0x3A5;
            static constexpr std::uintptr_t LOSFOVHalf = 0x3A8;
            static constexpr std::uintptr_t MaxTargets = 0x3AC;
            static constexpr std::uintptr_t MaxContainers = 0x3B0;
            static constexpr std::uintptr_t bRecordCoverObservations = 0x3B4;
            static constexpr std::uintptr_t CoverRingNumProbes = 0x3B8;
            static constexpr std::uintptr_t CoverSearchRadius = 0x3BC;
            static constexpr std::uintptr_t MajorVersion = 0x3C0;
            static constexpr std::uintptr_t MinorVersion = 0x3C4;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"SelfRaycastsNum", 0x398, "IntProperty"},
            {"SelfRaycastHalfFOV", 0x39C, "FloatProperty"},
            {"SelfRaycastsDistance", 0x3A0, "FloatProperty"},
            {"SelfRaycastCollisionChannel", 0x3A4, "ByteProperty"},
            {"LOSCollisionChannel", 0x3A5, "ByteProperty"},
            {"LOSFOVHalf", 0x3A8, "FloatProperty"},
            {"MaxTargets", 0x3AC, "IntProperty"},
            {"MaxContainers", 0x3B0, "IntProperty"},
            {"bRecordCoverObservations", 0x3B4, "BoolProperty"},
            {"CoverRingNumProbes", 0x3B8, "IntProperty"},
            {"CoverSearchRadius", 0x3BC, "FloatProperty"},
            {"MajorVersion", 0x3C0, "IntProperty"},
            {"MinorVersion", 0x3C4, "IntProperty"},
        }};
    };

    struct LACombatTimerWidget
    {
        static constexpr std::string_view Name = "LACombatTimerWidget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t TimerText = 0x308;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TimerText", 0x308, "ObjectProperty"},
        }};
    };

    struct LAReplay
    {
        static constexpr std::string_view Name = "LAReplay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Episodes = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Episodes", 0x28, "ArrayProperty"},
        }};
    };

    struct LAReplayRecorder
    {
        static constexpr std::string_view Name = "LAReplayRecorder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LearningAgentsManagerListener";
        struct Offsets
        {
            static constexpr std::uintptr_t OnRecordingBegin = 0x48;
            static constexpr std::uintptr_t OnRecordingEnd = 0x58;
            static constexpr std::uintptr_t Recording = 0x68;
            static constexpr std::uintptr_t bIsRecording = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnRecordingBegin", 0x48, "MulticastInlineDelegateProperty"},
            {"OnRecordingEnd", 0x58, "MulticastInlineDelegateProperty"},
            {"Recording", 0x68, "ObjectProperty"},
            {"bIsRecording", 0x70, "BoolProperty"},
        }};
    };

}
