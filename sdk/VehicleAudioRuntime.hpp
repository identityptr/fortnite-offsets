#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VehicleAudioRuntime
{
    struct BudgetedEngineAudioUser
    {
        static constexpr std::string_view Name = "BudgetedEngineAudioUser";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "OnEngineAssetEjected",
            "OnEngineAssetLoaded",
        }};
    };

    struct FortMotorSimComponent_PatternPlayer
    {
        static constexpr std::string_view Name = "FortMotorSimComponent_PatternPlayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioMotorSimComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PatternResetCooldown = 0xD0;
            static constexpr std::uintptr_t DriftState = 0xD8;
            static constexpr std::uintptr_t AirState = 0x108;
            static constexpr std::uintptr_t StartlineState = 0x138;
            static constexpr std::uintptr_t CurrentCurve = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PatternResetCooldown", 0xD0, "FloatProperty"},
            {"DriftState", 0xD8, "StructProperty"},
            {"AirState", 0x108, "StructProperty"},
            {"StartlineState", 0x138, "StructProperty"},
            {"CurrentCurve", 0x188, "ObjectProperty"},
        }};
    };

    struct FortMotorSimComponent_SurfaceModifier
    {
        static constexpr std::string_view Name = "FortMotorSimComponent_SurfaceModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioMotorSimComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Surfaces = 0xD0;
            static constexpr std::uintptr_t ThrottleRange = 0xE0;
            static constexpr std::uintptr_t OnsetInterpTime = 0xE8;
            static constexpr std::uintptr_t CurrentCurve = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Surfaces", 0xD0, "MapProperty"},
            {"ThrottleRange", 0xE0, "StructProperty"},
            {"OnsetInterpTime", 0xE8, "FloatProperty"},
            {"CurrentCurve", 0xF0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSurface",
        }};
    };

    struct FortMotorSimPatternState
    {
        static constexpr std::string_view Name = "FortMotorSimPatternState";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Curves = 0x0;
            static constexpr std::uintptr_t OnsetInterpSpeed = 0x10;
            static constexpr std::uintptr_t ThrottleThreshold = 0x14;
            static constexpr std::uintptr_t RpmFallRate = 0x18;
            static constexpr std::uintptr_t SpeedMin = 0x1C;
            static constexpr std::uintptr_t SpeedMax = 0x20;
            static constexpr std::uintptr_t RpmOffsetMin = 0x24;
            static constexpr std::uintptr_t RpmOffsetMax = 0x28;
            static constexpr std::uintptr_t bLoopCurves = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Curves", 0x0, "ArrayProperty"},
            {"OnsetInterpSpeed", 0x10, "FloatProperty"},
            {"ThrottleThreshold", 0x14, "FloatProperty"},
            {"RpmFallRate", 0x18, "FloatProperty"},
            {"SpeedMin", 0x1C, "FloatProperty"},
            {"SpeedMax", 0x20, "FloatProperty"},
            {"RpmOffsetMin", 0x24, "FloatProperty"},
            {"RpmOffsetMax", 0x28, "FloatProperty"},
            {"bLoopCurves", 0x2C, "BoolProperty"},
        }};
    };

    struct FortVehicleAudioControllerSubsystem
    {
        static constexpr std::string_view Name = "FortVehicleAudioControllerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t RegisteredUpdateGroups = 0x60;
            static constexpr std::uintptr_t ControllerClassToUpdateGroupMappings = 0x70;
            static constexpr std::uintptr_t UpdateStateMap = 0x80;
            static constexpr std::uintptr_t UpdateStateReaders = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RegisteredUpdateGroups", 0x60, "MapProperty"},
            {"ControllerClassToUpdateGroupMappings", 0x70, "MapProperty"},
            {"UpdateStateMap", 0x80, "MapProperty"},
            {"UpdateStateReaders", 0x90, "ArrayProperty"},
        }};
    };

    struct FortVehicleAudioControllerUpdateGroup
    {
        static constexpr std::string_view Name = "FortVehicleAudioControllerUpdateGroup";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RegisteredControllers = 0x0;
            static constexpr std::uintptr_t Updater = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RegisteredControllers", 0x0, "ArrayProperty"},
            {"Updater", 0x10, "ObjectProperty"},
        }};
    };

    struct FortVehicleAudioControllerUpdateStateReader
    {
        static constexpr std::string_view Name = "FortVehicleAudioControllerUpdateStateReader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortVehicleAudioControllerUpdater
    {
        static constexpr std::string_view Name = "FortVehicleAudioControllerUpdater";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortVehicleAudioControllerUpdater_Proximity
    {
        static constexpr std::string_view Name = "FortVehicleAudioControllerUpdater_Proximity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleAudioControllerUpdater";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundAttenuation = 0x28;
            static constexpr std::uintptr_t UpdateRadius = 0x30;
            static constexpr std::uintptr_t UpdateCap = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SoundAttenuation", 0x28, "ObjectProperty"},
            {"UpdateRadius", 0x30, "FloatProperty"},
            {"UpdateCap", 0x34, "IntProperty"},
        }};
    };

    struct FortVehicleAudioControllerUpdater_UpdateAll
    {
        static constexpr std::string_view Name = "FortVehicleAudioControllerUpdater_UpdateAll";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleAudioControllerUpdater";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortVehicleAudioCookSettings
    {
        static constexpr std::string_view Name = "FortVehicleAudioCookSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RevModelChannelThreshold = 0x28;
            static constexpr std::uintptr_t MetaSoundQualitySettingsToExclude = 0x30;
            static constexpr std::uintptr_t PathsToScan = 0x40;
            static constexpr std::uintptr_t PlatformQualitySettingsToExclude = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RevModelChannelThreshold", 0x28, "IntProperty"},
            {"MetaSoundQualitySettingsToExclude", 0x30, "ArrayProperty"},
            {"PathsToScan", 0x40, "ArrayProperty"},
            {"PlatformQualitySettingsToExclude", 0x50, "ArrayProperty"},
        }};
    };

    struct FortVehicleAudioDataInterface
    {
        static constexpr std::string_view Name = "FortVehicleAudioDataInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 15> FunctionNames{{
            "GetBoostLevelForAudio",
            "GetForwardSpeedKmhForAudio",
            "GetNormalizedForwardSpeedForAudio",
            "GetSlipAngleForAudio",
            "GetSpringCompressionForAudio",
            "GetSurfaceVehicleIsOnForAudio",
            "GetThrottleForAudio",
            "GetTotalSpeedKmhForAudio",
            "GetVehicleRightVectorForAudio",
            "GetVehicleVelocityForAudio",
            "IsBoostingForAudio",
            "IsInAirForAudio",
            "IsLocalForAudio",
            "IsReversingForAudio",
            "IsVehicleBeingDrivenForAudio",
        }};
    };

    struct FortVehicleEngineAudioRegistry
    {
        static constexpr std::string_view Name = "FortVehicleEngineAudioRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t LoadedAssets = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LoadedAssets", 0x68, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "RegisterVehicleEntry",
            "RemoveVehicleEntry",
        }};
    };

    struct FortVehicleSoundComponent
    {
        static constexpr std::string_view Name = "FortVehicleSoundComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OwningVehicleData = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OwningVehicleData", 0xC8, "InterfaceProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "ConfigComponent",
            "Init",
            "Pause",
            "Resume",
            "Shutdown",
            "Update",
        }};
    };

    struct FortVehicleSoundComponentConfigData
    {
        static constexpr std::string_view Name = "FortVehicleSoundComponentConfigData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortVehicleSoundComponent_Surface
    {
        static constexpr std::string_view Name = "FortVehicleSoundComponent_Surface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleSoundComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SurfaceSoundsTable = 0xE0;
            static constexpr std::uintptr_t OnSurfaceEnterSoundsTable = 0xE8;
            static constexpr std::uintptr_t OnSurfaceExitSoundsTable = 0xF0;
            static constexpr std::uintptr_t LandingSoundsTable = 0xF8;
            static constexpr std::uintptr_t SurfaceSoundFadeOutDuration = 0x100;
            static constexpr std::uintptr_t MinAirTimeForLandSound = 0x104;
            static constexpr std::uintptr_t SurfaceSpeedParameterName = 0x108;
            static constexpr std::uintptr_t SlipAngleParameterName = 0x10C;
            static constexpr std::uintptr_t bMapSlipAngleToCustomRange = 0x110;
            static constexpr std::uintptr_t SourceSlipAngleRange = 0x118;
            static constexpr std::uintptr_t TargetSlipAngleRange = 0x128;
            static constexpr std::uintptr_t bClampTargetSlipAngleRange = 0x138;
            static constexpr std::uintptr_t CompressionMagnitudeParameterName = 0x13C;
            static constexpr std::uintptr_t bMapCompressionMagnitudeToCustomRange = 0x140;
            static constexpr std::uintptr_t SourceCompressionMagnitudeRange = 0x148;
            static constexpr std::uintptr_t TargetCompressionMagnitudeRange = 0x158;
            static constexpr std::uintptr_t bClampTargetCompressionMagnitudeRange = 0x168;
            static constexpr std::uintptr_t LandingVelocityParameterName = 0x16C;
            static constexpr std::uintptr_t bMapLandingVelocityToCustomRange = 0x170;
            static constexpr std::uintptr_t SourceLandingVelocityRange = 0x178;
            static constexpr std::uintptr_t TargetLandingVelocityRange = 0x188;
            static constexpr std::uintptr_t bClampLandingVelocityRange = 0x198;
            static constexpr std::uintptr_t SurfaceAudioComponents = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"SurfaceSoundsTable", 0xE0, "ObjectProperty"},
            {"OnSurfaceEnterSoundsTable", 0xE8, "ObjectProperty"},
            {"OnSurfaceExitSoundsTable", 0xF0, "ObjectProperty"},
            {"LandingSoundsTable", 0xF8, "ObjectProperty"},
            {"SurfaceSoundFadeOutDuration", 0x100, "FloatProperty"},
            {"MinAirTimeForLandSound", 0x104, "FloatProperty"},
            {"SurfaceSpeedParameterName", 0x108, "NameProperty"},
            {"SlipAngleParameterName", 0x10C, "NameProperty"},
            {"bMapSlipAngleToCustomRange", 0x110, "BoolProperty"},
            {"SourceSlipAngleRange", 0x118, "StructProperty"},
            {"TargetSlipAngleRange", 0x128, "StructProperty"},
            {"bClampTargetSlipAngleRange", 0x138, "BoolProperty"},
            {"CompressionMagnitudeParameterName", 0x13C, "NameProperty"},
            {"bMapCompressionMagnitudeToCustomRange", 0x140, "BoolProperty"},
            {"SourceCompressionMagnitudeRange", 0x148, "StructProperty"},
            {"TargetCompressionMagnitudeRange", 0x158, "StructProperty"},
            {"bClampTargetCompressionMagnitudeRange", 0x168, "BoolProperty"},
            {"LandingVelocityParameterName", 0x16C, "NameProperty"},
            {"bMapLandingVelocityToCustomRange", 0x170, "BoolProperty"},
            {"SourceLandingVelocityRange", 0x178, "StructProperty"},
            {"TargetLandingVelocityRange", 0x188, "StructProperty"},
            {"bClampLandingVelocityRange", 0x198, "BoolProperty"},
            {"SurfaceAudioComponents", 0x1A8, "ArrayProperty"},
        }};
    };

    struct FortVehicleSoundComponent_Wind
    {
        static constexpr std::string_view Name = "FortVehicleSoundComponent_Wind";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleSoundComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GroundedWindSound = 0xE0;
            static constexpr std::uintptr_t InAirWindSound = 0xE8;
            static constexpr std::uintptr_t bLocalPlayerOnly = 0xF0;
            static constexpr std::uintptr_t FadeDuration = 0xF4;
            static constexpr std::uintptr_t SpeedParameterName = 0xF8;
            static constexpr std::uintptr_t PitchParameterName = 0xFC;
            static constexpr std::uintptr_t RollParameterName = 0x100;
            static constexpr std::uintptr_t YawParameterName = 0x104;
            static constexpr std::uintptr_t InvertedParameterName = 0x108;
            static constexpr std::uintptr_t ActiveWindSound = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"GroundedWindSound", 0xE0, "ObjectProperty"},
            {"InAirWindSound", 0xE8, "ObjectProperty"},
            {"bLocalPlayerOnly", 0xF0, "BoolProperty"},
            {"FadeDuration", 0xF4, "FloatProperty"},
            {"SpeedParameterName", 0xF8, "NameProperty"},
            {"PitchParameterName", 0xFC, "NameProperty"},
            {"RollParameterName", 0x100, "NameProperty"},
            {"YawParameterName", 0x104, "NameProperty"},
            {"InvertedParameterName", 0x108, "NameProperty"},
            {"ActiveWindSound", 0x110, "ObjectProperty"},
        }};
    };

    struct FortVehicleSoundData
    {
        static constexpr std::string_view Name = "FortVehicleSoundData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t AudioMotorSimComponents = 0x28;
            static constexpr std::uintptr_t SoundComponents = 0x38;
            static constexpr std::uintptr_t bUseAudioComponentGroup = 0x48;
            static constexpr std::uintptr_t bIgnoreModelData = 0x49;
            static constexpr std::uintptr_t MotorSimParamUpdateTolerance = 0x4C;
            static constexpr std::uintptr_t MaxBrakeThreshold = 0x50;
            static constexpr std::uintptr_t ThrottleMultiplier = 0x54;
            static constexpr std::uintptr_t SurfaceFrictionModifier = 0x58;
            static constexpr std::uintptr_t MotorFrictionModifier = 0x5C;
            static constexpr std::uintptr_t FrictionJitter = 0x60;
            static constexpr std::uintptr_t bCanShiftOverride = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"AudioMotorSimComponents", 0x28, "ArrayProperty"},
            {"SoundComponents", 0x38, "ArrayProperty"},
            {"bUseAudioComponentGroup", 0x48, "BoolProperty"},
            {"bIgnoreModelData", 0x49, "BoolProperty"},
            {"MotorSimParamUpdateTolerance", 0x4C, "FloatProperty"},
            {"MaxBrakeThreshold", 0x50, "FloatProperty"},
            {"ThrottleMultiplier", 0x54, "FloatProperty"},
            {"SurfaceFrictionModifier", 0x58, "FloatProperty"},
            {"MotorFrictionModifier", 0x5C, "FloatProperty"},
            {"FrictionJitter", 0x60, "StructProperty"},
            {"bCanShiftOverride", 0x70, "BoolProperty"},
        }};
    };

    struct FortVehicleSoundSurfaceChooserParam
    {
        static constexpr std::string_view Name = "FortVehicleSoundSurfaceChooserParam";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InPhysicalSurface = 0x0;
            static constexpr std::uintptr_t bInIsAirborne = 0x1;
            static constexpr std::uintptr_t bInIsLocal = 0x2;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InPhysicalSurface", 0x0, "ByteProperty"},
            {"bInIsAirborne", 0x1, "BoolProperty"},
            {"bInIsLocal", 0x2, "BoolProperty"},
        }};
    };

    struct GameFeatureAction_RegisterVehicleAudioClassMappings
    {
        static constexpr std::string_view Name = "GameFeatureAction_RegisterVehicleAudioClassMappings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassMappings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClassMappings", 0x28, "MapProperty"},
        }};
    };

    struct GameFeatureAction_RegisterVehicleAudioControllerGroup
    {
        static constexpr std::string_view Name = "GameFeatureAction_RegisterVehicleAudioControllerGroup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t GroupsToRegister = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GroupsToRegister", 0x28, "MapProperty"},
        }};
    };

    struct GameFeatureAction_SetMaxLoadedEngineAudioItems
    {
        static constexpr std::string_view Name = "GameFeatureAction_SetMaxLoadedEngineAudioItems";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultSetting = 0x28;
            static constexpr std::uintptr_t XB1Setting = 0x2C;
            static constexpr std::uintptr_t XSXSetting = 0x30;
            static constexpr std::uintptr_t PS4Setting = 0x34;
            static constexpr std::uintptr_t PS5Setting = 0x38;
            static constexpr std::uintptr_t MobileSetting = 0x3C;
            static constexpr std::uintptr_t SwitchSetting = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"DefaultSetting", 0x28, "IntProperty"},
            {"XB1Setting", 0x2C, "IntProperty"},
            {"XSXSetting", 0x30, "IntProperty"},
            {"PS4Setting", 0x34, "IntProperty"},
            {"PS5Setting", 0x38, "IntProperty"},
            {"MobileSetting", 0x3C, "IntProperty"},
            {"SwitchSetting", 0x40, "IntProperty"},
        }};
    };

    struct VehicleAudioController
    {
        static constexpr std::string_view Name = "VehicleAudioController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleAudioControllerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleSoundData = 0x290;
            static constexpr std::uintptr_t EngineComponentAttenuation = 0x298;
            static constexpr std::uintptr_t ControllerUpdateRule = 0x2A0;
            static constexpr std::uintptr_t AudioMotorModelUpdater = 0x2A8;
            static constexpr std::uintptr_t AudioParameterUpdater = 0x2B0;
            static constexpr std::uintptr_t AudioMotorModelComponent = 0x2B8;
            static constexpr std::uintptr_t EngineComponent = 0x2C0;
            static constexpr std::uintptr_t CachedParameterPack = 0x2C8;
            static constexpr std::uintptr_t MetasoundGeneratorHandle = 0x2D0;
            static constexpr std::uintptr_t VehicleAudioComponentGroup = 0x2D8;
            static constexpr std::uintptr_t VehicleSoundComponents = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"VehicleSoundData", 0x290, "ObjectProperty"},
            {"EngineComponentAttenuation", 0x298, "ObjectProperty"},
            {"ControllerUpdateRule", 0x2A0, "ObjectProperty"},
            {"AudioMotorModelUpdater", 0x2A8, "ObjectProperty"},
            {"AudioParameterUpdater", 0x2B0, "ObjectProperty"},
            {"AudioMotorModelComponent", 0x2B8, "ObjectProperty"},
            {"EngineComponent", 0x2C0, "ObjectProperty"},
            {"CachedParameterPack", 0x2C8, "ObjectProperty"},
            {"MetasoundGeneratorHandle", 0x2D0, "ObjectProperty"},
            {"VehicleAudioComponentGroup", 0x2D8, "ObjectProperty"},
            {"VehicleSoundComponents", 0x2E0, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "ConfigureAudioController",
            "GetAudioMotorModelComponent",
            "GetEngineAudioComponent",
            "OnPostAudioControllerConfiguration",
            "PushVehicleSoundComponentConfig",
            "SetMetasoundGeneratorHandle",
            "SetVehicleSoundData",
            "ToggleEngineSoundNative",
        }};
    };

    struct VehicleAudioControllerBase
    {
        static constexpr std::string_view Name = "VehicleAudioControllerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryActorTick = 0x28;
            static constexpr std::uintptr_t bAlwaysRelevant = 0x58;
            static constexpr std::uintptr_t bCallPreReplication = 0x58;
            static constexpr std::uintptr_t bCallPreReplicationForReplay = 0x58;
            static constexpr std::uintptr_t bHidden = 0x58;
            static constexpr std::uintptr_t bNetTemporary = 0x58;
            static constexpr std::uintptr_t bOnlyRelevantToOwner = 0x58;
            static constexpr std::uintptr_t bReplicateMovement = 0x58;
            static constexpr std::uintptr_t bExchangedRoles = 0x59;
            static constexpr std::uintptr_t bForceNetAddressable = 0x59;
            static constexpr std::uintptr_t bNetLoadOnClient = 0x59;
            static constexpr std::uintptr_t bNetUseOwnerRelevancy = 0x59;
            static constexpr std::uintptr_t bRelevantForLevelBounds = 0x59;
            static constexpr std::uintptr_t bRelevantForNetworkReplays = 0x59;
            static constexpr std::uintptr_t bReplayRewindable = 0x59;
            static constexpr std::uintptr_t bTearOff = 0x59;
            static constexpr std::uintptr_t bAllowTickBeforeBeginPlay = 0x5A;
            static constexpr std::uintptr_t bAutoDestroyWhenFinished = 0x5A;
            static constexpr std::uintptr_t bBlockInput = 0x5A;
            static constexpr std::uintptr_t bCanBeDamaged = 0x5A;
            static constexpr std::uintptr_t bCollideWhenPlacing = 0x5A;
            static constexpr std::uintptr_t bFindCameraComponentWhenViewTarget = 0x5A;
            static constexpr std::uintptr_t bGenerateOverlapEventsDuringLevelStreaming = 0x5A;
            static constexpr std::uintptr_t bIgnoresOriginShifting = 0x5A;
            static constexpr std::uintptr_t bAllowReceiveTickEventOnDedicatedServer = 0x5B;
            static constexpr std::uintptr_t bCanBeInCluster = 0x5B;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x5B;
            static constexpr std::uintptr_t bIsEditorOnlyActor = 0x5B;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x5B;
            static constexpr std::uintptr_t bReplicates = 0x5B;
            static constexpr std::uintptr_t bActorEnableCollision = 0x5D;
            static constexpr std::uintptr_t bActorIsBeingDestroyed = 0x5D;
            static constexpr std::uintptr_t bAsyncPhysicsTickEnabled = 0x5D;
            static constexpr std::uintptr_t UpdateOverlapsMethodDuringLevelStreaming = 0x5E;
            static constexpr std::uintptr_t DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5F;
            static constexpr std::uintptr_t RemoteRole = 0x60;
            static constexpr std::uintptr_t InitialLifeSpan = 0x64;
            static constexpr std::uintptr_t CustomTimeDilation = 0x68;
            static constexpr std::uintptr_t RayTracingGroupId = 0x6C;
            static constexpr std::uintptr_t AttachmentReplication = 0x70;
            static constexpr std::uintptr_t ReplicatedMovement = 0xD0;
            static constexpr std::uintptr_t Owner = 0x158;
            static constexpr std::uintptr_t NetDriverName = 0x160;
            static constexpr std::uintptr_t Role = 0x164;
            static constexpr std::uintptr_t NetDormancy = 0x165;
            static constexpr std::uintptr_t SpawnCollisionHandlingMethod = 0x166;
            static constexpr std::uintptr_t AutoReceiveInput = 0x167;
            static constexpr std::uintptr_t InputPriority = 0x168;
            static constexpr std::uintptr_t InputComponent = 0x170;
            static constexpr std::uintptr_t NetTag = 0x178;
            static constexpr std::uintptr_t NetCullDistanceSquared = 0x17C;
            static constexpr std::uintptr_t NetUpdateFrequency = 0x180;
            static constexpr std::uintptr_t MinNetUpdateFrequency = 0x184;
            static constexpr std::uintptr_t NetPriority = 0x188;
            static constexpr std::uintptr_t PhysicsReplicationMode = 0x18C;
            static constexpr std::uintptr_t Instigator = 0x198;
            static constexpr std::uintptr_t Children = 0x1A0;
            static constexpr std::uintptr_t RootComponent = 0x1B0;
            static constexpr std::uintptr_t HLODLayer = 0x1C8;
            static constexpr std::uintptr_t Layers = 0x1D0;
            static constexpr std::uintptr_t ParentComponent = 0x1E0;
            static constexpr std::uintptr_t Tags = 0x1F8;
            static constexpr std::uintptr_t OnTakeAnyDamage = 0x208;
            static constexpr std::uintptr_t OnTakePointDamage = 0x209;
            static constexpr std::uintptr_t OnTakeRadialDamage = 0x20A;
            static constexpr std::uintptr_t OnActorBeginOverlap = 0x20B;
            static constexpr std::uintptr_t OnActorEndOverlap = 0x20C;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x20D;
            static constexpr std::uintptr_t OnEndCursorOver = 0x20E;
            static constexpr std::uintptr_t OnClicked = 0x20F;
            static constexpr std::uintptr_t OnReleased = 0x210;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x211;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x212;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x213;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x214;
            static constexpr std::uintptr_t OnActorHit = 0x215;
            static constexpr std::uintptr_t OnDestroyed = 0x216;
            static constexpr std::uintptr_t OnEndPlay = 0x217;
            static constexpr std::uintptr_t InstanceComponents = 0x258;
            static constexpr std::uintptr_t BlueprintCreatedComponents = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 80> Properties{{
            {"PrimaryActorTick", 0x28, "StructProperty"},
            {"bAlwaysRelevant", 0x58, "BoolProperty"},
            {"bCallPreReplication", 0x58, "BoolProperty"},
            {"bCallPreReplicationForReplay", 0x58, "BoolProperty"},
            {"bHidden", 0x58, "BoolProperty"},
            {"bNetTemporary", 0x58, "BoolProperty"},
            {"bOnlyRelevantToOwner", 0x58, "BoolProperty"},
            {"bReplicateMovement", 0x58, "BoolProperty"},
            {"bExchangedRoles", 0x59, "BoolProperty"},
            {"bForceNetAddressable", 0x59, "BoolProperty"},
            {"bNetLoadOnClient", 0x59, "BoolProperty"},
            {"bNetUseOwnerRelevancy", 0x59, "BoolProperty"},
            {"bRelevantForLevelBounds", 0x59, "BoolProperty"},
            {"bRelevantForNetworkReplays", 0x59, "BoolProperty"},
            {"bReplayRewindable", 0x59, "BoolProperty"},
            {"bTearOff", 0x59, "BoolProperty"},
            {"bAllowTickBeforeBeginPlay", 0x5A, "BoolProperty"},
            {"bAutoDestroyWhenFinished", 0x5A, "BoolProperty"},
            {"bBlockInput", 0x5A, "BoolProperty"},
            {"bCanBeDamaged", 0x5A, "BoolProperty"},
            {"bCollideWhenPlacing", 0x5A, "BoolProperty"},
            {"bFindCameraComponentWhenViewTarget", 0x5A, "BoolProperty"},
            {"bGenerateOverlapEventsDuringLevelStreaming", 0x5A, "BoolProperty"},
            {"bIgnoresOriginShifting", 0x5A, "BoolProperty"},
            {"bAllowReceiveTickEventOnDedicatedServer", 0x5B, "BoolProperty"},
            {"bCanBeInCluster", 0x5B, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x5B, "BoolProperty"},
            {"bIsEditorOnlyActor", 0x5B, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x5B, "BoolProperty"},
            {"bReplicates", 0x5B, "BoolProperty"},
            {"bActorEnableCollision", 0x5D, "BoolProperty"},
            {"bActorIsBeingDestroyed", 0x5D, "BoolProperty"},
            {"bAsyncPhysicsTickEnabled", 0x5D, "BoolProperty"},
            {"UpdateOverlapsMethodDuringLevelStreaming", 0x5E, "EnumProperty"},
            {"DefaultUpdateOverlapsMethodDuringLevelStreaming", 0x5F, "EnumProperty"},
            {"RemoteRole", 0x60, "ByteProperty"},
            {"InitialLifeSpan", 0x64, "FloatProperty"},
            {"CustomTimeDilation", 0x68, "FloatProperty"},
            {"RayTracingGroupId", 0x6C, "IntProperty"},
            {"AttachmentReplication", 0x70, "StructProperty"},
            {"ReplicatedMovement", 0xD0, "StructProperty"},
            {"Owner", 0x158, "ObjectProperty"},
            {"NetDriverName", 0x160, "NameProperty"},
            {"Role", 0x164, "ByteProperty"},
            {"NetDormancy", 0x165, "ByteProperty"},
            {"SpawnCollisionHandlingMethod", 0x166, "EnumProperty"},
            {"AutoReceiveInput", 0x167, "ByteProperty"},
            {"InputPriority", 0x168, "IntProperty"},
            {"InputComponent", 0x170, "ObjectProperty"},
            {"NetTag", 0x178, "IntProperty"},
            {"NetCullDistanceSquared", 0x17C, "FloatProperty"},
            {"NetUpdateFrequency", 0x180, "FloatProperty"},
            {"MinNetUpdateFrequency", 0x184, "FloatProperty"},
            {"NetPriority", 0x188, "FloatProperty"},
            {"PhysicsReplicationMode", 0x18C, "EnumProperty"},
            {"Instigator", 0x198, "ObjectProperty"},
            {"Children", 0x1A0, "ArrayProperty"},
            {"RootComponent", 0x1B0, "ObjectProperty"},
            {"HLODLayer", 0x1C8, "ObjectProperty"},
            {"Layers", 0x1D0, "ArrayProperty"},
            {"ParentComponent", 0x1E0, "WeakObjectProperty"},
            {"Tags", 0x1F8, "ArrayProperty"},
            {"OnTakeAnyDamage", 0x208, "MulticastSparseDelegateProperty"},
            {"OnTakePointDamage", 0x209, "MulticastSparseDelegateProperty"},
            {"OnTakeRadialDamage", 0x20A, "MulticastSparseDelegateProperty"},
            {"OnActorBeginOverlap", 0x20B, "MulticastSparseDelegateProperty"},
            {"OnActorEndOverlap", 0x20C, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x20D, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x20E, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x20F, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x210, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x211, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x212, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x213, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x214, "MulticastSparseDelegateProperty"},
            {"OnActorHit", 0x215, "MulticastSparseDelegateProperty"},
            {"OnDestroyed", 0x216, "MulticastSparseDelegateProperty"},
            {"OnEndPlay", 0x217, "MulticastSparseDelegateProperty"},
            {"InstanceComponents", 0x258, "ArrayProperty"},
            {"BlueprintCreatedComponents", 0x268, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetVehicleDataInterface",
            "SetVehicle",
        }};
    };

    struct VehicleAudioControllerBaseProperties
    {
        static constexpr std::string_view Name = "VehicleAudioControllerBaseProperties";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EngineSound = 0x0;
            static constexpr std::uintptr_t EngineOn = 0x20;
            static constexpr std::uintptr_t EngineOff = 0x28;
            static constexpr std::uintptr_t GainFuelSound = 0x30;
            static constexpr std::uintptr_t EngineSoundAttenuation = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"EngineSound", 0x0, "SoftObjectProperty"},
            {"EngineOn", 0x20, "ObjectProperty"},
            {"EngineOff", 0x28, "ObjectProperty"},
            {"GainFuelSound", 0x30, "ObjectProperty"},
            {"EngineSoundAttenuation", 0x38, "ObjectProperty"},
        }};
    };

    struct VehicleAudioControllerConfig
    {
        static constexpr std::string_view Name = "VehicleAudioControllerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleAudioControllerClass = 0x28;
            static constexpr std::uintptr_t AudioControllerLogic = 0x30;
            static constexpr std::uintptr_t VehicleSoundComponents = 0x38;
            static constexpr std::uintptr_t UserDefinedData = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"VehicleAudioControllerClass", 0x28, "ClassProperty"},
            {"AudioControllerLogic", 0x30, "ObjectProperty"},
            {"VehicleSoundComponents", 0x38, "ObjectProperty"},
            {"UserDefinedData", 0x40, "ObjectProperty"},
        }};
    };

    struct VehicleAudioControllerInterface
    {
        static constexpr std::string_view Name = "VehicleAudioControllerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VehicleAudioControllerLogic
    {
        static constexpr std::string_view Name = "VehicleAudioControllerLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ControllerUpdateRule = 0x28;
            static constexpr std::uintptr_t AudioMotorModelUpdater = 0x30;
            static constexpr std::uintptr_t AudioParameterUpdater = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ControllerUpdateRule", 0x28, "ClassProperty"},
            {"AudioMotorModelUpdater", 0x30, "ClassProperty"},
            {"AudioParameterUpdater", 0x38, "ClassProperty"},
        }};
    };

    struct VehicleAudioLifecycleInterface
    {
        static constexpr std::string_view Name = "VehicleAudioLifecycleInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "OnInit",
            "OnShutdown",
            "OnUpdate",
        }};
    };

    struct VehicleAudioMotorModelUpdaterBase
    {
        static constexpr std::string_view Name = "VehicleAudioMotorModelUpdaterBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VehicleAudioMotorModelUpdater_Default
    {
        static constexpr std::string_view Name = "VehicleAudioMotorModelUpdater_Default";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleAudioMotorModelUpdaterBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VehicleAudioParameterUpdaterBase
    {
        static constexpr std::string_view Name = "VehicleAudioParameterUpdaterBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VehicleAudioParameterUpdater_Default
    {
        static constexpr std::string_view Name = "VehicleAudioParameterUpdater_Default";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleAudioParameterUpdaterBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VehicleAudioUpdateRuleBase
    {
        static constexpr std::string_view Name = "VehicleAudioUpdateRuleBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VehicleAudioUpdateRuleBaseData
    {
        static constexpr std::string_view Name = "VehicleAudioUpdateRuleBaseData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VehicleAudioUpdateRule_Default
    {
        static constexpr std::string_view Name = "VehicleAudioUpdateRule_Default";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleAudioUpdateRuleBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VehicleAudioUserDefinedData
    {
        static constexpr std::string_view Name = "VehicleAudioUserDefinedData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t UserDefinedData = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"UserDefinedData", 0x28, "StructProperty"},
        }};
    };

    struct VehicleEngineAudioRegistryEntryRequest
    {
        static constexpr std::string_view Name = "VehicleEngineAudioRegistryEntryRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Vehicle = 0x0;
            static constexpr std::uintptr_t Asset = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Vehicle", 0x0, "InterfaceProperty"},
            {"Asset", 0x10, "SoftObjectProperty"},
        }};
    };

    struct VehicleEngineAudioRegistryLoadedEntry
    {
        static constexpr std::string_view Name = "VehicleEngineAudioRegistryLoadedEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SoundBasePtr = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SoundBasePtr", 0x18, "ObjectProperty"},
        }};
    };

    struct VehicleSoundSurfaceData
    {
        static constexpr std::string_view Name = "VehicleSoundSurfaceData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SurfaceData = 0x28;
            static constexpr std::uintptr_t DefaultSound = 0x30;
            static constexpr std::uintptr_t InAirSound = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SurfaceData", 0x28, "ObjectProperty"},
            {"DefaultSound", 0x30, "ObjectProperty"},
            {"InAirSound", 0x38, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "BP_GetSoundForSurface",
        }};
    };

    struct VehicleSoundSurfaceDataRow
    {
        static constexpr std::string_view Name = "VehicleSoundSurfaceDataRow";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "TableRowBase";
        struct Offsets
        {
            static constexpr std::uintptr_t SurfaceType = 0x8;
            static constexpr std::uintptr_t SurfaceSounds = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SurfaceType", 0x8, "ByteProperty"},
            {"SurfaceSounds", 0x10, "ArrayProperty"},
        }};
    };

}
