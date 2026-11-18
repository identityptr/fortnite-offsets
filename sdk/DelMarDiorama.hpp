#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DelMarDiorama
{
    struct DelMarCockpitActor
    {
        static constexpr std::string_view Name = "DelMarCockpitActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t CockpitMeshComponent = 0x278;
            static constexpr std::uintptr_t BoundVehicle = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CockpitMeshComponent", 0x278, "ObjectProperty"},
            {"BoundVehicle", 0x280, "ObjectProperty"},
        }};
    };

    struct DelMarCockpitAnimInstance
    {
        static constexpr std::string_view Name = "DelMarCockpitAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarDriverAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultCameraShakeIntensity = 0x360;
            static constexpr std::uintptr_t DefaultTerrainAccMultiplier = 0x364;
            static constexpr std::uintptr_t DefaultTerrainMaxForwardSpeedPercentage = 0x368;
            static constexpr std::uintptr_t CameraShakeIntensity = 0x36C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DefaultCameraShakeIntensity", 0x360, "FloatProperty"},
            {"DefaultTerrainAccMultiplier", 0x364, "FloatProperty"},
            {"DefaultTerrainMaxForwardSpeedPercentage", 0x368, "FloatProperty"},
            {"CameraShakeIntensity", 0x36C, "FloatProperty"},
        }};
    };

    struct DelMarDioramaActor
    {
        static constexpr std::string_view Name = "DelMarDioramaActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleInteriorMeshComponent = 0x278;
            static constexpr std::uintptr_t CustomSequenceListTable = 0x280;
            static constexpr std::uintptr_t DriverMannequinClass = 0x2A8;
            static constexpr std::uintptr_t LevelSequenceActorClass = 0x2B0;
            static constexpr std::uintptr_t CineCameraClass = 0x2B8;
            static constexpr std::uintptr_t CockpitClass = 0x2C0;
            static constexpr std::uintptr_t ConfigData = 0x2C8;
            static constexpr std::uintptr_t DefaultCameraOffset = 0x2D0;
            static constexpr std::uintptr_t DefaultCameraRotation = 0x2E8;
            static constexpr std::uintptr_t SequenceActor = 0x300;
            static constexpr std::uintptr_t CameraActor = 0x308;
            static constexpr std::uintptr_t DriverMannequin = 0x310;
            static constexpr std::uintptr_t CockpitActor = 0x318;
            static constexpr std::uintptr_t BoundPlayer = 0x320;
            static constexpr std::uintptr_t LastPlayedSequenceData = 0x328;
            static constexpr std::uintptr_t BoundSequencesTables = 0x330;
            static constexpr std::uintptr_t DefaultCameraSocketIndex = 0x344;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"VehicleInteriorMeshComponent", 0x278, "ObjectProperty"},
            {"CustomSequenceListTable", 0x280, "MapProperty"},
            {"DriverMannequinClass", 0x2A8, "ClassProperty"},
            {"LevelSequenceActorClass", 0x2B0, "ClassProperty"},
            {"CineCameraClass", 0x2B8, "ClassProperty"},
            {"CockpitClass", 0x2C0, "ClassProperty"},
            {"ConfigData", 0x2C8, "ObjectProperty"},
            {"DefaultCameraOffset", 0x2D0, "StructProperty"},
            {"DefaultCameraRotation", 0x2E8, "StructProperty"},
            {"SequenceActor", 0x300, "ObjectProperty"},
            {"CameraActor", 0x308, "ObjectProperty"},
            {"DriverMannequin", 0x310, "ObjectProperty"},
            {"CockpitActor", 0x318, "ObjectProperty"},
            {"BoundPlayer", 0x320, "ObjectProperty"},
            {"LastPlayedSequenceData", 0x328, "ObjectProperty"},
            {"BoundSequencesTables", 0x330, "SetProperty"},
            {"DefaultCameraSocketIndex", 0x344, "IntProperty"},
        }};
    };

    struct DelMarDioramaConfigData
    {
        static constexpr std::string_view Name = "DelMarDioramaConfigData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraActorTag = 0x28;
            static constexpr std::uintptr_t DriverMannequinTag = 0x2C;
            static constexpr std::uintptr_t CockpitActorTag = 0x30;
            static constexpr std::uintptr_t CockpitCameraCutSockets = 0x38;
            static constexpr std::uintptr_t CockpitCameraIdleSocket = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CameraActorTag", 0x28, "NameProperty"},
            {"DriverMannequinTag", 0x2C, "NameProperty"},
            {"CockpitActorTag", 0x30, "NameProperty"},
            {"CockpitCameraCutSockets", 0x38, "ArrayProperty"},
            {"CockpitCameraIdleSocket", 0x48, "NameProperty"},
        }};
    };

    struct DelMarDioramaControllerComponent
    {
        static constexpr std::string_view Name = "DelMarDioramaControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DioramaOffset = 0xC0;
            static constexpr std::uintptr_t DioramaClass = 0xD8;
            static constexpr std::uintptr_t CustomizedSequencesTable = 0xE0;
            static constexpr std::uintptr_t DioramaInitialTransform = 0xF0;
            static constexpr std::uintptr_t MainChannelClass = 0x150;
            static constexpr std::uintptr_t MainChannel = 0x158;
            static constexpr std::uintptr_t PostRaceChannelClass = 0x160;
            static constexpr std::uintptr_t PostRaceChannels = 0x168;
            static constexpr std::uintptr_t CachedOwningPlayerState = 0x178;
            static constexpr std::uintptr_t ViewTargetPlayer = 0x180;
            static constexpr std::uintptr_t ViewTargetVehicle = 0x188;
            static constexpr std::uintptr_t PlayerDioramaTable = 0x190;
            static constexpr std::uintptr_t NumPostRaceChannel = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"DioramaOffset", 0xC0, "StructProperty"},
            {"DioramaClass", 0xD8, "ClassProperty"},
            {"CustomizedSequencesTable", 0xE0, "ObjectProperty"},
            {"DioramaInitialTransform", 0xF0, "StructProperty"},
            {"MainChannelClass", 0x150, "ClassProperty"},
            {"MainChannel", 0x158, "ObjectProperty"},
            {"PostRaceChannelClass", 0x160, "ClassProperty"},
            {"PostRaceChannels", 0x168, "ArrayProperty"},
            {"CachedOwningPlayerState", 0x178, "ObjectProperty"},
            {"ViewTargetPlayer", 0x180, "ObjectProperty"},
            {"ViewTargetVehicle", 0x188, "WeakObjectProperty"},
            {"PlayerDioramaTable", 0x190, "MapProperty"},
            {"NumPostRaceChannel", 0x1A0, "IntProperty"},
        }};
    };

    struct DelMarDriverAnimInstance
    {
        static constexpr std::string_view Name = "DelMarDriverAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBaseAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t BoundVehicle = 0x340;
            static constexpr std::uintptr_t bDrifting = 0x348;
            static constexpr std::uintptr_t bTurboing = 0x349;
            static constexpr std::uintptr_t SteeringAngle = 0x34C;
            static constexpr std::uintptr_t SlipAngle = 0x350;
            static constexpr std::uintptr_t StableSpeed = 0x354;
            static constexpr std::uintptr_t DrivingSpeedThreshold = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"BoundVehicle", 0x340, "ObjectProperty"},
            {"bDrifting", 0x348, "BoolProperty"},
            {"bTurboing", 0x349, "BoolProperty"},
            {"SteeringAngle", 0x34C, "FloatProperty"},
            {"SlipAngle", 0x350, "FloatProperty"},
            {"StableSpeed", 0x354, "FloatProperty"},
            {"DrivingSpeedThreshold", 0x358, "FloatProperty"},
        }};
    };

    struct DelMarDriverCameraActor
    {
        static constexpr std::string_view Name = "DelMarDriverCameraActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CineCameraActor";
        struct Offsets
        {
            static constexpr std::uintptr_t CaptureComponent = 0xAD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CaptureComponent", 0xAD0, "ObjectProperty"},
        }};
    };

    struct DelMarDriverChannel
    {
        static constexpr std::string_view Name = "DelMarDriverChannel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarDriverChannelBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewVehicle = 0x88;
            static constexpr std::uintptr_t QueueReactions = 0x90;
            static constexpr std::uintptr_t SequenceListTableInstance = 0xA0;
            static constexpr std::uintptr_t ReactionCoolDownTimeStamp = 0xB0;
            static constexpr std::uintptr_t LandingForceThreshold = 0xC0;
            static constexpr std::uintptr_t SlowDownImpactSpeedThreshold = 0xC4;
            static constexpr std::uintptr_t HitWallImpactThreshold = 0xC8;
            static constexpr std::uintptr_t HitWallImpactHardThreshold = 0xCC;
            static constexpr std::uintptr_t DraftBonusPercentageThreshold = 0xD0;
            static constexpr std::uintptr_t StartlineBoostPercentageEarnedThreshold = 0xD4;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ViewVehicle", 0x88, "ObjectProperty"},
            {"QueueReactions", 0x90, "ArrayProperty"},
            {"SequenceListTableInstance", 0xA0, "MapProperty"},
            {"ReactionCoolDownTimeStamp", 0xB0, "MapProperty"},
            {"LandingForceThreshold", 0xC0, "FloatProperty"},
            {"SlowDownImpactSpeedThreshold", 0xC4, "FloatProperty"},
            {"HitWallImpactThreshold", 0xC8, "FloatProperty"},
            {"HitWallImpactHardThreshold", 0xCC, "FloatProperty"},
            {"DraftBonusPercentageThreshold", 0xD0, "FloatProperty"},
            {"StartlineBoostPercentageEarnedThreshold", 0xD4, "FloatProperty"},
        }};
    };

    struct DelMarDriverChannelBase
    {
        static constexpr std::string_view Name = "DelMarDriverChannelBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ViewRenderTarget = 0x28;
            static constexpr std::uintptr_t RenderTargetDim = 0x30;
            static constexpr std::uintptr_t SequencesTable = 0x68;
            static constexpr std::uintptr_t ViewPlayer = 0x70;
            static constexpr std::uintptr_t ViewDiorama = 0x78;
            static constexpr std::uintptr_t SequencePlayer = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ViewRenderTarget", 0x28, "ObjectProperty"},
            {"RenderTargetDim", 0x30, "StructProperty"},
            {"SequencesTable", 0x68, "ObjectProperty"},
            {"ViewPlayer", 0x70, "ObjectProperty"},
            {"ViewDiorama", 0x78, "ObjectProperty"},
            {"SequencePlayer", 0x80, "ObjectProperty"},
        }};
    };

    struct DelMarDriverCheatManager
    {
        static constexpr std::string_view Name = "DelMarDriverCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DelMarDriverMannequin
    {
        static constexpr std::string_view Name = "DelMarDriverMannequin";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerMannequin";
        struct Offsets
        {
            static constexpr std::uintptr_t AthenaCharacter = 0x3B0;
            static constexpr std::uintptr_t AthenaBackBling = 0x3B8;
            static constexpr std::uintptr_t ExtraPart = 0x3C0;
            static constexpr std::uintptr_t MannequinLightingChannels = 0x3E8;
            static constexpr std::uintptr_t MannequinBoundsScale = 0x3EC;
            static constexpr std::uintptr_t bIsMannequinVisible = 0x3F0;
            static constexpr std::uintptr_t bMannequinCastsHiddenShadow = 0x3F1;
            static constexpr std::uintptr_t AppliedCosmeticParts = 0x3F8;
            static constexpr std::uintptr_t CharacterPartList = 0x408;
            static constexpr std::uintptr_t SoftCharacterPartList = 0x450;
            static constexpr std::uintptr_t BackupCharacterPartList = 0x570;
            static constexpr std::uintptr_t OverrideVariants = 0x6C8;
            static constexpr std::uintptr_t ColorSwatches = 0x6D8;
            static constexpr std::uintptr_t WeaponSkeletalMesh = 0x6E8;
            static constexpr std::uintptr_t WeaponAttachSocket = 0x6F0;
            static constexpr std::uintptr_t WeaponSkeletalMeshComponent = 0x6F8;
            static constexpr std::uintptr_t CosmeticDataComponent = 0x700;
            static constexpr std::uintptr_t MannequinPartSkeletalMeshComponents = 0x708;
            static constexpr std::uintptr_t MannequinPartChaosClothComponents = 0x750;
            static constexpr std::uintptr_t MorphTargets = 0x798;
            static constexpr std::uintptr_t CosmeticApplicatorComponent = 0x7A8;
            static constexpr std::uintptr_t ContextualAnimSceneActorComponent = 0x7B0;
            static constexpr std::uintptr_t bInitialized = 0x7B8;
            static constexpr std::uintptr_t bLimitTick = 0x7B9;
            static constexpr std::uintptr_t bHighPriorityRBAN = 0x7BA;
            static constexpr std::uintptr_t bAutoRegisterMannequinWithBudgetAllocator = 0x7BB;
            static constexpr std::uintptr_t bAutoCalculateMannequinSignificance = 0x7BC;
            static constexpr std::uintptr_t CustomizationAssetLoader = 0x7C0;
            static constexpr std::uintptr_t LoadingMode = 0x7C8;
            static constexpr std::uintptr_t OnMaterialsUpdated = 0x838;
            static constexpr std::uintptr_t UsageContext = 0x848;
            static constexpr std::uintptr_t PartModifiers = 0x850;
            static constexpr std::uintptr_t PlaceholderPartsList = 0x8A0;
        };

        inline static constexpr std::array<PropertyInfo, 33> Properties{{
            {"AthenaCharacter", 0x3B0, "ObjectProperty"},
            {"AthenaBackBling", 0x3B8, "ObjectProperty"},
            {"ExtraPart", 0x3C0, "ObjectProperty"},
            {"MannequinLightingChannels", 0x3E8, "StructProperty"},
            {"MannequinBoundsScale", 0x3EC, "FloatProperty"},
            {"bIsMannequinVisible", 0x3F0, "BoolProperty"},
            {"bMannequinCastsHiddenShadow", 0x3F1, "BoolProperty"},
            {"AppliedCosmeticParts", 0x3F8, "ArrayProperty"},
            {"CharacterPartList", 0x408, "ObjectProperty"},
            {"SoftCharacterPartList", 0x450, "SoftObjectProperty"},
            {"BackupCharacterPartList", 0x570, "SoftObjectProperty"},
            {"OverrideVariants", 0x6C8, "ArrayProperty"},
            {"ColorSwatches", 0x6D8, "ObjectProperty"},
            {"WeaponSkeletalMesh", 0x6E8, "ObjectProperty"},
            {"WeaponAttachSocket", 0x6F0, "NameProperty"},
            {"WeaponSkeletalMeshComponent", 0x6F8, "ObjectProperty"},
            {"CosmeticDataComponent", 0x700, "ObjectProperty"},
            {"MannequinPartSkeletalMeshComponents", 0x708, "ObjectProperty"},
            {"MannequinPartChaosClothComponents", 0x750, "ObjectProperty"},
            {"MorphTargets", 0x798, "ArrayProperty"},
            {"CosmeticApplicatorComponent", 0x7A8, "ObjectProperty"},
            {"ContextualAnimSceneActorComponent", 0x7B0, "ObjectProperty"},
            {"bInitialized", 0x7B8, "BoolProperty"},
            {"bLimitTick", 0x7B9, "BoolProperty"},
            {"bHighPriorityRBAN", 0x7BA, "BoolProperty"},
            {"bAutoRegisterMannequinWithBudgetAllocator", 0x7BB, "BoolProperty"},
            {"bAutoCalculateMannequinSignificance", 0x7BC, "BoolProperty"},
            {"CustomizationAssetLoader", 0x7C0, "ObjectProperty"},
            {"LoadingMode", 0x7C8, "EnumProperty"},
            {"OnMaterialsUpdated", 0x838, "MulticastInlineDelegateProperty"},
            {"UsageContext", 0x848, "EnumProperty"},
            {"PartModifiers", 0x850, "ObjectProperty"},
            {"PlaceholderPartsList", 0x8A0, "ObjectProperty"},
        }};
    };

    struct DelMarDriverSequenceData
    {
        static constexpr std::string_view Name = "DelMarDriverSequenceData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Sequence = 0x28;
            static constexpr std::uintptr_t PriorityLevel = 0x30;
            static constexpr std::uintptr_t bLoop = 0x34;
            static constexpr std::uintptr_t bTriggerReactiveWidget = 0x35;
            static constexpr std::uintptr_t bCameraCut = 0x36;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Sequence", 0x28, "ObjectProperty"},
            {"PriorityLevel", 0x30, "IntProperty"},
            {"bLoop", 0x34, "BoolProperty"},
            {"bTriggerReactiveWidget", 0x35, "BoolProperty"},
            {"bCameraCut", 0x36, "BoolProperty"},
        }};
    };

    struct DelMarDriverSequenceDataTable
    {
        static constexpr std::string_view Name = "DelMarDriverSequenceDataTable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SequenceListTable = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SequenceListTable", 0x28, "MapProperty"},
        }};
    };

    struct DelMarIntercomComponent
    {
        static constexpr std::string_view Name = "DelMarIntercomComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GuestChannelClass = 0xD8;
            static constexpr std::uintptr_t GuestChannel = 0xE0;
            static constexpr std::uintptr_t ViewPlayerPawn = 0xE8;
            static constexpr std::uintptr_t MainChannelDiorama = 0xF0;
            static constexpr std::uintptr_t ViewPlayerState = 0xF8;
            static constexpr std::uintptr_t DioramaControllerComponent = 0x100;
            static constexpr std::uintptr_t ServerEventClasses = 0x108;
            static constexpr std::uintptr_t ServerEvents = 0x118;
            static constexpr std::uintptr_t InteractionTagTable = 0x128;
            static constexpr std::uintptr_t EmoteBroadcastMaxDistanceSq = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"GuestChannelClass", 0xD8, "ClassProperty"},
            {"GuestChannel", 0xE0, "ObjectProperty"},
            {"ViewPlayerPawn", 0xE8, "WeakObjectProperty"},
            {"MainChannelDiorama", 0xF0, "WeakObjectProperty"},
            {"ViewPlayerState", 0xF8, "ObjectProperty"},
            {"DioramaControllerComponent", 0x100, "ObjectProperty"},
            {"ServerEventClasses", 0x108, "ArrayProperty"},
            {"ServerEvents", 0x118, "ArrayProperty"},
            {"InteractionTagTable", 0x128, "MapProperty"},
            {"EmoteBroadcastMaxDistanceSq", 0x138, "FloatProperty"},
        }};
    };

    struct DelMarIntercomEvent
    {
        static constexpr std::string_view Name = "DelMarIntercomEvent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningPlayerState = 0x28;
            static constexpr std::uintptr_t OwningVehicle = 0x30;
            static constexpr std::uintptr_t IntercomComponent = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OwningPlayerState", 0x28, "ObjectProperty"},
            {"OwningVehicle", 0x30, "ObjectProperty"},
            {"IntercomComponent", 0x38, "ObjectProperty"},
        }};
    };

    struct DelMarIntercomEvent_TurboPassing
    {
        static constexpr std::string_view Name = "DelMarIntercomEvent_TurboPassing";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DelMarIntercomEvent";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerAhead = 0x40;
            static constexpr std::uintptr_t RaceData = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayerAhead", 0x40, "WeakObjectProperty"},
            {"RaceData", 0x48, "ObjectProperty"},
        }};
    };

}
