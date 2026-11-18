#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MilkshakeRuntime
{
    struct MilkshakeControllerComponent
    {
        static constexpr std::string_view Name = "MilkshakeControllerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NearbyBuildingActorsUpdateScanRadius = 0xC8;
            static constexpr std::uintptr_t NearbyBuildingActorsUpdateScanRadiusReplicated = 0xF0;
            static constexpr std::uintptr_t CameraShakeScale = 0xF8;
            static constexpr std::uintptr_t CameraShakeScaleReplicated = 0x120;
            static constexpr std::uintptr_t NearbyBuildingActorsUpdateInterval = 0x128;
            static constexpr std::uintptr_t NearbyBuildingActorsUpdateIntervalReplicated = 0x150;
            static constexpr std::uintptr_t bForceFeedbackEnabled = 0x158;
            static constexpr std::uintptr_t bForceFeedbackEnabledReplicated = 0x180;
            static constexpr std::uintptr_t ForceFeedbackTag = 0x184;
            static constexpr std::uintptr_t PawnInAirBasedCameraShakeMultiplierLookUpCurve = 0x188;
            static constexpr std::uintptr_t PawnInAirBasedCameraShakeMultiplierInterpSpeed = 0x190;
            static constexpr std::uintptr_t CameraShakeClass = 0x198;
            static constexpr std::uintptr_t CameraShakeRotOscillationBaseValues = 0x1A0;
            static constexpr std::uintptr_t CameraShakeRotOscillationPitchFrequencyMin = 0x1C4;
            static constexpr std::uintptr_t CameraShakeRotOscillationPitchFrequencyMax = 0x1C8;
            static constexpr std::uintptr_t CameraShakeRotOscillationRollFrequencyMin = 0x1CC;
            static constexpr std::uintptr_t CameraShakeRotOscillationRollFrequencyMax = 0x1D0;
            static constexpr std::uintptr_t CameraShakeSoundCue = 0x1D8;
            static constexpr std::uintptr_t CameraShakeAudioFadeOutDuration = 0x1E0;
            static constexpr std::uintptr_t CameraShakeAudioFadeCurveType = 0x1E4;
            static constexpr std::uintptr_t CameraShakeAudioParam = 0x1E8;
            static constexpr std::uintptr_t MinTimeBetweenBuildingDamageFX = 0x1F0;
            static constexpr std::uintptr_t MinTimeBetweenBuildingDamageFXReplicated = 0x218;
            static constexpr std::uintptr_t MaxTimeBetweenBuildingDamageFX = 0x220;
            static constexpr std::uintptr_t MaxTimeBetweenBuildingDamageFXReplicated = 0x248;
            static constexpr std::uintptr_t BuildingDamageFXTemplate = 0x250;
            static constexpr std::uintptr_t BuildingDamageFXCooldown = 0x258;
            static constexpr std::uintptr_t BuildingDamageFXMagnitudeParamName = 0x25C;
            static constexpr std::uintptr_t RecentDamageFXBuildings = 0x260;
            static constexpr std::uintptr_t BuildingDamageSoundCueByResourceType = 0x270;
            static constexpr std::uintptr_t PlayForceFeedbackInterval = 0x280;
            static constexpr std::uintptr_t ForceFeedbackEffects = 0x288;
            static constexpr std::uintptr_t RegisteredEarthquakes = 0x2A8;
            static constexpr std::uintptr_t CurrentEarthquake = 0x2B8;
            static constexpr std::uintptr_t CurrentCameraShakeAudioComponent = 0x2D8;
            static constexpr std::uintptr_t NearbyBuildingActors = 0x2E0;
        };

        inline static constexpr std::array<PropertyInfo, 36> Properties{{
            {"NearbyBuildingActorsUpdateScanRadius", 0xC8, "StructProperty"},
            {"NearbyBuildingActorsUpdateScanRadiusReplicated", 0xF0, "IntProperty"},
            {"CameraShakeScale", 0xF8, "StructProperty"},
            {"CameraShakeScaleReplicated", 0x120, "FloatProperty"},
            {"NearbyBuildingActorsUpdateInterval", 0x128, "StructProperty"},
            {"NearbyBuildingActorsUpdateIntervalReplicated", 0x150, "FloatProperty"},
            {"bForceFeedbackEnabled", 0x158, "StructProperty"},
            {"bForceFeedbackEnabledReplicated", 0x180, "BoolProperty"},
            {"ForceFeedbackTag", 0x184, "NameProperty"},
            {"PawnInAirBasedCameraShakeMultiplierLookUpCurve", 0x188, "ObjectProperty"},
            {"PawnInAirBasedCameraShakeMultiplierInterpSpeed", 0x190, "FloatProperty"},
            {"CameraShakeClass", 0x198, "ClassProperty"},
            {"CameraShakeRotOscillationBaseValues", 0x1A0, "StructProperty"},
            {"CameraShakeRotOscillationPitchFrequencyMin", 0x1C4, "FloatProperty"},
            {"CameraShakeRotOscillationPitchFrequencyMax", 0x1C8, "FloatProperty"},
            {"CameraShakeRotOscillationRollFrequencyMin", 0x1CC, "FloatProperty"},
            {"CameraShakeRotOscillationRollFrequencyMax", 0x1D0, "FloatProperty"},
            {"CameraShakeSoundCue", 0x1D8, "ObjectProperty"},
            {"CameraShakeAudioFadeOutDuration", 0x1E0, "FloatProperty"},
            {"CameraShakeAudioFadeCurveType", 0x1E4, "EnumProperty"},
            {"CameraShakeAudioParam", 0x1E8, "NameProperty"},
            {"MinTimeBetweenBuildingDamageFX", 0x1F0, "StructProperty"},
            {"MinTimeBetweenBuildingDamageFXReplicated", 0x218, "FloatProperty"},
            {"MaxTimeBetweenBuildingDamageFX", 0x220, "StructProperty"},
            {"MaxTimeBetweenBuildingDamageFXReplicated", 0x248, "FloatProperty"},
            {"BuildingDamageFXTemplate", 0x250, "ObjectProperty"},
            {"BuildingDamageFXCooldown", 0x258, "FloatProperty"},
            {"BuildingDamageFXMagnitudeParamName", 0x25C, "NameProperty"},
            {"RecentDamageFXBuildings", 0x260, "MapProperty"},
            {"BuildingDamageSoundCueByResourceType", 0x270, "MapProperty"},
            {"PlayForceFeedbackInterval", 0x280, "FloatProperty"},
            {"ForceFeedbackEffects", 0x288, "ArrayProperty"},
            {"RegisteredEarthquakes", 0x2A8, "ArrayProperty"},
            {"CurrentEarthquake", 0x2B8, "ObjectProperty"},
            {"CurrentCameraShakeAudioComponent", 0x2D8, "ObjectProperty"},
            {"NearbyBuildingActors", 0x2E0, "ArrayProperty"},
        }};
    };

    struct MilkshakeEarthquakeActor
    {
        static constexpr std::string_view Name = "MilkshakeEarthquakeActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t AsyncOverlappedActorsPreallocateCount = 0x278;
            static constexpr std::uintptr_t AsyncOverlappedActors = 0x280;
            static constexpr std::uintptr_t OverlappedPhysicsActorInfos = 0x290;
            static constexpr std::uintptr_t MaxNumOfPhysicActorSimulation = 0x2A0;
            static constexpr std::uintptr_t MinTimeBeforeNextForceDirectionUpdate = 0x2C8;
            static constexpr std::uintptr_t MaxTimeBeforeNextForceDirectionUpdate = 0x2CC;
            static constexpr std::uintptr_t MinPhysicsImpulseMagnitude = 0x2D0;
            static constexpr std::uintptr_t MaxPhysicsImpulseMagnitude = 0x2D4;
            static constexpr std::uintptr_t SimSizeToImpulseScalarMap = 0x2D8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"AsyncOverlappedActorsPreallocateCount", 0x278, "IntProperty"},
            {"AsyncOverlappedActors", 0x280, "ArrayProperty"},
            {"OverlappedPhysicsActorInfos", 0x290, "ArrayProperty"},
            {"MaxNumOfPhysicActorSimulation", 0x2A0, "StructProperty"},
            {"MinTimeBeforeNextForceDirectionUpdate", 0x2C8, "FloatProperty"},
            {"MaxTimeBeforeNextForceDirectionUpdate", 0x2CC, "FloatProperty"},
            {"MinPhysicsImpulseMagnitude", 0x2D0, "FloatProperty"},
            {"MaxPhysicsImpulseMagnitude", 0x2D4, "FloatProperty"},
            {"SimSizeToImpulseScalarMap", 0x2D8, "MapProperty"},
        }};
    };

    struct MilkshakeFieldSystemActor
    {
        static constexpr std::string_view Name = "MilkshakeFieldSystemActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FieldSystemActor";
        struct Offsets
        {
            static constexpr std::uintptr_t OperatorFieldMultiplyComponent = 0x280;
            static constexpr std::uintptr_t RadialFallOffComponent = 0x288;
            static constexpr std::uintptr_t RadialVectorComponent = 0x290;
            static constexpr std::uintptr_t Radius = 0x298;
            static constexpr std::uintptr_t StopGameTime = 0x29C;
            static constexpr std::uintptr_t IncomingDuration = 0x2A0;
            static constexpr std::uintptr_t OutgoingDuration = 0x2A4;
            static constexpr std::uintptr_t Strength = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OperatorFieldMultiplyComponent", 0x280, "ObjectProperty"},
            {"RadialFallOffComponent", 0x288, "ObjectProperty"},
            {"RadialVectorComponent", 0x290, "ObjectProperty"},
            {"Radius", 0x298, "FloatProperty"},
            {"StopGameTime", 0x29C, "FloatProperty"},
            {"IncomingDuration", 0x2A0, "FloatProperty"},
            {"OutgoingDuration", 0x2A4, "FloatProperty"},
            {"Strength", 0x2A8, "FloatProperty"},
        }};
    };

}
