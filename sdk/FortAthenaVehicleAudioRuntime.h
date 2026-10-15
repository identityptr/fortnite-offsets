/**
 * decamp dumper generated SDK
 * Package: /Script/FortAthenaVehicleAudioRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FortAthenaVehicleAudioRuntime.FortVehicleSoundComponent_BoostConfig
// Kind: ScriptStruct; super: FortVehicleSoundComponentConfigData
struct FFortVehicleSoundComponent_BoostConfig
{
public:
    float BoostReadyThreshold; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortVehicleSoundComponent_BoostConfig, BoostReadyThreshold) == 0, "Offset mismatch for FFortVehicleSoundComponent_BoostConfig::BoostReadyThreshold");

// /Script/FortAthenaVehicleAudioRuntime.FortVehicleSoundComponent_BoostContext
// Kind: ScriptStruct; super: none
struct FFortVehicleSoundComponent_BoostContext
{
public:
    void* BoostStartSound; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* BoostEndSound; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* BoostReadySound; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* BoostNotAvailableSound; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    float BoostStartFadeOutTime; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float BoostEndFadeOutTime; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float BoostReadyThreshold; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortVehicleSoundComponent_BoostContext, BoostStartSound) == 0, "Offset mismatch for FFortVehicleSoundComponent_BoostContext::BoostStartSound");
static_assert(offsetof(FFortVehicleSoundComponent_BoostContext, BoostEndSound) == 8, "Offset mismatch for FFortVehicleSoundComponent_BoostContext::BoostEndSound");
static_assert(offsetof(FFortVehicleSoundComponent_BoostContext, BoostReadySound) == 16, "Offset mismatch for FFortVehicleSoundComponent_BoostContext::BoostReadySound");
static_assert(offsetof(FFortVehicleSoundComponent_BoostContext, BoostNotAvailableSound) == 24, "Offset mismatch for FFortVehicleSoundComponent_BoostContext::BoostNotAvailableSound");
static_assert(offsetof(FFortVehicleSoundComponent_BoostContext, BoostStartFadeOutTime) == 32, "Offset mismatch for FFortVehicleSoundComponent_BoostContext::BoostStartFadeOutTime");
static_assert(offsetof(FFortVehicleSoundComponent_BoostContext, BoostEndFadeOutTime) == 36, "Offset mismatch for FFortVehicleSoundComponent_BoostContext::BoostEndFadeOutTime");
static_assert(offsetof(FFortVehicleSoundComponent_BoostContext, BoostReadyThreshold) == 40, "Offset mismatch for FFortVehicleSoundComponent_BoostContext::BoostReadyThreshold");

// /Script/FortAthenaVehicleAudioRuntime.FortVehicleSoundComponent_DamageStateContext
// Kind: ScriptStruct; super: none
struct FFortVehicleSoundComponent_DamageStateContext
{
public:
    void* ScrapingSound; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    float RelevantScrapingSpeedThreshold; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float NormalizedScrapingSpeedRangeA; // 0x000C (Size: 0x4, Type: FloatProperty)
    float NormalizedScrapingSpeedRangeB; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ScrapingParamName[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    FName SpeedParamName; // 0x0018 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FFortVehicleSoundComponent_DamageStateContext, ScrapingSound) == 0, "Offset mismatch for FFortVehicleSoundComponent_DamageStateContext::ScrapingSound");
static_assert(offsetof(FFortVehicleSoundComponent_DamageStateContext, RelevantScrapingSpeedThreshold) == 8, "Offset mismatch for FFortVehicleSoundComponent_DamageStateContext::RelevantScrapingSpeedThreshold");
static_assert(offsetof(FFortVehicleSoundComponent_DamageStateContext, NormalizedScrapingSpeedRangeA) == 12, "Offset mismatch for FFortVehicleSoundComponent_DamageStateContext::NormalizedScrapingSpeedRangeA");
static_assert(offsetof(FFortVehicleSoundComponent_DamageStateContext, NormalizedScrapingSpeedRangeB) == 16, "Offset mismatch for FFortVehicleSoundComponent_DamageStateContext::NormalizedScrapingSpeedRangeB");
static_assert(offsetof(FFortVehicleSoundComponent_DamageStateContext, ScrapingParamName) == 20, "Offset mismatch for FFortVehicleSoundComponent_DamageStateContext::ScrapingParamName");
static_assert(offsetof(FFortVehicleSoundComponent_DamageStateContext, SpeedParamName) == 24, "Offset mismatch for FFortVehicleSoundComponent_DamageStateContext::SpeedParamName");

// /Script/FortAthenaVehicleAudioRuntime.FortVehicleSoundComponent_SurfaceContext
// Kind: ScriptStruct; super: none
struct FFortVehicleSoundComponent_SurfaceContext
{
public:
    float BrakingHardStopThreshold; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float BrakingSoftStopThreshold; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float SurfaceParamInterpSpeed; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    TMap<void*, void*> SurfaceMap; // 0x0010 (Size: 0x10, Type: MapProperty)
    std::uint8_t WaterParamName[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    float WaterParamInterpSpeed; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AirParamName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    float AirParamAttackInterpSpeed; // 0x002C (Size: 0x4, Type: FloatProperty)
    float AirParamReleaseInterpSpeed; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float MinSpeedForSkidFX; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float MaxSpeedForSkidFX; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SkiddingParamName[0x4]; // 0x003C (Size: 0x4, Type: NameProperty)
    std::uint8_t StartSkidTriggerParamName[0x4]; // 0x0040 (Size: 0x4, Type: NameProperty)
    std::uint8_t StopSkidTriggerParamName[0x4]; // 0x0044 (Size: 0x4, Type: NameProperty)
    float SkiddingParamInterpSpeed; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SurfaceMagnitudeParamName[0x4]; // 0x004C (Size: 0x4, Type: NameProperty)
    float SpringCompressionMagnitudeAttack; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float SpringCompressionMagnitudeRelease; // 0x0054 (Size: 0x4, Type: FloatProperty)
    float MaxSpringCompressionMultiplier; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float ResetSpringCompressionMagnitudeTime; // 0x005C (Size: 0x4, Type: FloatProperty)
    float NormalizedVehicleSpeedThreshold; // 0x0060 (Size: 0x4, Type: FloatProperty)
    float MinAirTimeForLandSound; // 0x0064 (Size: 0x4, Type: FloatProperty)
    std::uint8_t BrakeStopSurfaceParamName[0x4]; // 0x0068 (Size: 0x4, Type: NameProperty)
    float BrakeStopFadeOutDuration; // 0x006C (Size: 0x4, Type: FloatProperty)
    float HardStopThreshold; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0074
    void* SoftStopSound; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    void* HardStopSound; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bHasTireMod; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0089
    void* SurfaceData; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* SurfaceOffRoadTireModData; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TirePoppedAudioParamName[0x4]; // 0x00A0 (Size: 0x4, Type: NameProperty)
    std::uint8_t TireRepairedAudioParamName[0x4]; // 0x00A4 (Size: 0x4, Type: NameProperty)
    std::uint8_t TireQuantityParamName[0x4]; // 0x00A8 (Size: 0x4, Type: NameProperty)
    std::uint8_t OnStopAudioParamName[0x4]; // 0x00AC (Size: 0x4, Type: NameProperty)
    FName SurfaceSpeedParamName; // 0x00B0 (Size: 0x8, Type: NameProperty)
    void* WaterEnterSound; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    void* WaterExitSound; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LandSpeedParamName[0x4]; // 0x00C8 (Size: 0x4, Type: NameProperty)
    std::uint8_t LandVelocityParamName[0x4]; // 0x00CC (Size: 0x4, Type: NameProperty)
    void* LandSound; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LandSoundLocationOffset[0x18]; // 0x00D8 (Size: 0x18, Type: StructProperty)
    std::uint8_t CurrentSurface; // 0x00F0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0003[0x7]; // 0x00F1
    TArray<void*> SurfaceParams; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, BrakingHardStopThreshold) == 0, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::BrakingHardStopThreshold");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, BrakingSoftStopThreshold) == 4, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::BrakingSoftStopThreshold");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, SurfaceParamInterpSpeed) == 8, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::SurfaceParamInterpSpeed");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, SurfaceMap) == 16, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::SurfaceMap");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, WaterParamName) == 32, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::WaterParamName");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, WaterParamInterpSpeed) == 36, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::WaterParamInterpSpeed");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, AirParamName) == 40, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::AirParamName");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, AirParamAttackInterpSpeed) == 44, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::AirParamAttackInterpSpeed");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, AirParamReleaseInterpSpeed) == 48, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::AirParamReleaseInterpSpeed");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, MinSpeedForSkidFX) == 52, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::MinSpeedForSkidFX");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, MaxSpeedForSkidFX) == 56, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::MaxSpeedForSkidFX");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, SkiddingParamName) == 60, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::SkiddingParamName");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, StartSkidTriggerParamName) == 64, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::StartSkidTriggerParamName");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, StopSkidTriggerParamName) == 68, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::StopSkidTriggerParamName");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, SkiddingParamInterpSpeed) == 72, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::SkiddingParamInterpSpeed");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, SurfaceMagnitudeParamName) == 76, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::SurfaceMagnitudeParamName");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, SpringCompressionMagnitudeAttack) == 80, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::SpringCompressionMagnitudeAttack");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, SpringCompressionMagnitudeRelease) == 84, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::SpringCompressionMagnitudeRelease");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, MaxSpringCompressionMultiplier) == 88, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::MaxSpringCompressionMultiplier");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, ResetSpringCompressionMagnitudeTime) == 92, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::ResetSpringCompressionMagnitudeTime");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, NormalizedVehicleSpeedThreshold) == 96, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::NormalizedVehicleSpeedThreshold");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, MinAirTimeForLandSound) == 100, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::MinAirTimeForLandSound");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, BrakeStopSurfaceParamName) == 104, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::BrakeStopSurfaceParamName");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, BrakeStopFadeOutDuration) == 108, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::BrakeStopFadeOutDuration");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, HardStopThreshold) == 112, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::HardStopThreshold");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, SoftStopSound) == 120, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::SoftStopSound");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, HardStopSound) == 128, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::HardStopSound");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, bHasTireMod) == 136, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::bHasTireMod");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, SurfaceData) == 144, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::SurfaceData");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, SurfaceOffRoadTireModData) == 152, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::SurfaceOffRoadTireModData");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, TirePoppedAudioParamName) == 160, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::TirePoppedAudioParamName");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, TireRepairedAudioParamName) == 164, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::TireRepairedAudioParamName");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, TireQuantityParamName) == 168, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::TireQuantityParamName");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, OnStopAudioParamName) == 172, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::OnStopAudioParamName");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, SurfaceSpeedParamName) == 176, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::SurfaceSpeedParamName");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, WaterEnterSound) == 184, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::WaterEnterSound");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, WaterExitSound) == 192, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::WaterExitSound");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, LandSpeedParamName) == 200, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::LandSpeedParamName");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, LandVelocityParamName) == 204, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::LandVelocityParamName");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, LandSound) == 208, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::LandSound");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, LandSoundLocationOffset) == 216, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::LandSoundLocationOffset");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, CurrentSurface) == 240, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::CurrentSurface");
static_assert(offsetof(FFortVehicleSoundComponent_SurfaceContext, SurfaceParams) == 248, "Offset mismatch for FFortVehicleSoundComponent_SurfaceContext::SurfaceParams");

// /Script/FortAthenaVehicleAudioRuntime.FortVehicleSoundSurfaceParam
// Kind: ScriptStruct; super: none
struct FFortVehicleSoundSurfaceParam
{
public:
    std::uint8_t Surface; // 0x0000 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t Name[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    float Value; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFortVehicleSoundSurfaceParam, Surface) == 0, "Offset mismatch for FFortVehicleSoundSurfaceParam::Surface");
static_assert(offsetof(FFortVehicleSoundSurfaceParam, Name) == 4, "Offset mismatch for FFortVehicleSoundSurfaceParam::Name");
static_assert(offsetof(FFortVehicleSoundSurfaceParam, Value) == 8, "Offset mismatch for FFortVehicleSoundSurfaceParam::Value");

// /Script/FortAthenaVehicleAudioRuntime.VehicleCollisionAudioConfig
// Kind: ScriptStruct; super: none
struct FVehicleCollisionAudioConfig
{
public:
    void* PawnCollisionSound; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> CollisionAudioComponent; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    float MaxVehicleSpeed; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MinCollisionAudioSpeedRange; // 0x0014 (Size: 0x4, Type: FloatProperty)
    float MaxCollisionAudioSpeedRange; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float MinCollisionAudioNormalizedSpeedRange; // 0x001C (Size: 0x4, Type: FloatProperty)
    float MaxCollisionAudioNormalizedSpeedRange; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float VehicleRecentlyAwakenedThreshold; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float VehicleVolumeMultiplier; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float LandscapeVolumeMultiplier; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t AudioLocationOffset[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    float VehicleAwakeTimestamp; // 0x0048 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FVehicleCollisionAudioConfig, PawnCollisionSound) == 0, "Offset mismatch for FVehicleCollisionAudioConfig::PawnCollisionSound");
static_assert(offsetof(FVehicleCollisionAudioConfig, CollisionAudioComponent) == 8, "Offset mismatch for FVehicleCollisionAudioConfig::CollisionAudioComponent");
static_assert(offsetof(FVehicleCollisionAudioConfig, MaxVehicleSpeed) == 16, "Offset mismatch for FVehicleCollisionAudioConfig::MaxVehicleSpeed");
static_assert(offsetof(FVehicleCollisionAudioConfig, MinCollisionAudioSpeedRange) == 20, "Offset mismatch for FVehicleCollisionAudioConfig::MinCollisionAudioSpeedRange");
static_assert(offsetof(FVehicleCollisionAudioConfig, MaxCollisionAudioSpeedRange) == 24, "Offset mismatch for FVehicleCollisionAudioConfig::MaxCollisionAudioSpeedRange");
static_assert(offsetof(FVehicleCollisionAudioConfig, MinCollisionAudioNormalizedSpeedRange) == 28, "Offset mismatch for FVehicleCollisionAudioConfig::MinCollisionAudioNormalizedSpeedRange");
static_assert(offsetof(FVehicleCollisionAudioConfig, MaxCollisionAudioNormalizedSpeedRange) == 32, "Offset mismatch for FVehicleCollisionAudioConfig::MaxCollisionAudioNormalizedSpeedRange");
static_assert(offsetof(FVehicleCollisionAudioConfig, VehicleRecentlyAwakenedThreshold) == 36, "Offset mismatch for FVehicleCollisionAudioConfig::VehicleRecentlyAwakenedThreshold");
static_assert(offsetof(FVehicleCollisionAudioConfig, VehicleVolumeMultiplier) == 40, "Offset mismatch for FVehicleCollisionAudioConfig::VehicleVolumeMultiplier");
static_assert(offsetof(FVehicleCollisionAudioConfig, LandscapeVolumeMultiplier) == 44, "Offset mismatch for FVehicleCollisionAudioConfig::LandscapeVolumeMultiplier");
static_assert(offsetof(FVehicleCollisionAudioConfig, AudioLocationOffset) == 48, "Offset mismatch for FVehicleCollisionAudioConfig::AudioLocationOffset");
static_assert(offsetof(FVehicleCollisionAudioConfig, VehicleAwakeTimestamp) == 72, "Offset mismatch for FVehicleCollisionAudioConfig::VehicleAwakeTimestamp");

// /Script/FortAthenaVehicleAudioRuntime.FortAthenaVehicleAudioController
// Kind: Class; super: VehicleAudioController
class UFortAthenaVehicleAudioController
{
public:
    std::uint8_t Pad_0000[0x30C]; // 0x0000
    std::int32_t CurrentSignificance; // 0x030C (Size: 0x4, Type: IntProperty)
    std::uint8_t bListenerInRange; // 0x0310 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceUpdatePastListenerRange; // 0x0311 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRedlineAllowed; // 0x0312 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0313
    float JitterTime; // 0x0314 (Size: 0x4, Type: FloatProperty)
    void* VehicleBase; // 0x0318 (Size: 0x8, Type: ObjectProperty)
    void* PhysicsVehicleConfigs; // 0x0320 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VehicleCollisionAudioConfig[0x58]; // 0x0328 (Size: 0x58, Type: OptionalProperty)
    void* LayeredAudioComponent; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* AudioParameterComponent; // 0x0388 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaVehicleAudioController, CurrentSignificance) == 780, "Offset mismatch for UFortAthenaVehicleAudioController::CurrentSignificance");
static_assert(offsetof(UFortAthenaVehicleAudioController, bListenerInRange) == 784, "Offset mismatch for UFortAthenaVehicleAudioController::bListenerInRange");
static_assert(offsetof(UFortAthenaVehicleAudioController, bForceUpdatePastListenerRange) == 785, "Offset mismatch for UFortAthenaVehicleAudioController::bForceUpdatePastListenerRange");
static_assert(offsetof(UFortAthenaVehicleAudioController, bRedlineAllowed) == 786, "Offset mismatch for UFortAthenaVehicleAudioController::bRedlineAllowed");
static_assert(offsetof(UFortAthenaVehicleAudioController, JitterTime) == 788, "Offset mismatch for UFortAthenaVehicleAudioController::JitterTime");
static_assert(offsetof(UFortAthenaVehicleAudioController, VehicleBase) == 792, "Offset mismatch for UFortAthenaVehicleAudioController::VehicleBase");
static_assert(offsetof(UFortAthenaVehicleAudioController, PhysicsVehicleConfigs) == 800, "Offset mismatch for UFortAthenaVehicleAudioController::PhysicsVehicleConfigs");
static_assert(offsetof(UFortAthenaVehicleAudioController, VehicleCollisionAudioConfig) == 808, "Offset mismatch for UFortAthenaVehicleAudioController::VehicleCollisionAudioConfig");
static_assert(offsetof(UFortAthenaVehicleAudioController, LayeredAudioComponent) == 896, "Offset mismatch for UFortAthenaVehicleAudioController::LayeredAudioComponent");
static_assert(offsetof(UFortAthenaVehicleAudioController, AudioParameterComponent) == 904, "Offset mismatch for UFortAthenaVehicleAudioController::AudioParameterComponent");

// /Script/FortAthenaVehicleAudioRuntime.FortAthenaVehicleSoundComponent
// Kind: Class; super: FortVehicleSoundComponent
class UFortAthenaVehicleSoundComponent
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    TWeakObjectPtr<void> AudioController; // 0x00E0 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFortAthenaVehicleSoundComponent, AudioController) == 224, "Offset mismatch for UFortAthenaVehicleSoundComponent::AudioController");

// /Script/FortAthenaVehicleAudioRuntime.FortAthenaVehicleSoundComponent_Boost
// Kind: Class; super: FortAthenaVehicleSoundComponent
class UFortAthenaVehicleSoundComponent_Boost
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t Context[0x30]; // 0x00E8 (Size: 0x30, Type: StructProperty)
    void* VehicleAudioComponentGroup; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* PlayingComponent; // 0x0120 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaVehicleSoundComponent_Boost, Context) == 232, "Offset mismatch for UFortAthenaVehicleSoundComponent_Boost::Context");
static_assert(offsetof(UFortAthenaVehicleSoundComponent_Boost, VehicleAudioComponentGroup) == 280, "Offset mismatch for UFortAthenaVehicleSoundComponent_Boost::VehicleAudioComponentGroup");
static_assert(offsetof(UFortAthenaVehicleSoundComponent_Boost, PlayingComponent) == 288, "Offset mismatch for UFortAthenaVehicleSoundComponent_Boost::PlayingComponent");

// /Script/FortAthenaVehicleAudioRuntime.FortAthenaVehicleSoundComponent_DamageState
// Kind: Class; super: FortAthenaVehicleSoundComponent
class UFortAthenaVehicleSoundComponent_DamageState
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t Context[0x20]; // 0x00E8 (Size: 0x20, Type: StructProperty)
    void* VehicleAudioComponentGroup; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    void* ScrapingAudioComponent; // 0x0110 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaVehicleSoundComponent_DamageState, Context) == 232, "Offset mismatch for UFortAthenaVehicleSoundComponent_DamageState::Context");
static_assert(offsetof(UFortAthenaVehicleSoundComponent_DamageState, VehicleAudioComponentGroup) == 264, "Offset mismatch for UFortAthenaVehicleSoundComponent_DamageState::VehicleAudioComponentGroup");
static_assert(offsetof(UFortAthenaVehicleSoundComponent_DamageState, ScrapingAudioComponent) == 272, "Offset mismatch for UFortAthenaVehicleSoundComponent_DamageState::ScrapingAudioComponent");

// /Script/FortAthenaVehicleAudioRuntime.FortAthenaVehicleSoundComponent_Speed
// Kind: Class; super: FortAthenaVehicleSoundComponent
class UFortAthenaVehicleSoundComponent_Speed
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t Speed[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaVehicleSoundComponent_Speed, Speed) == 232, "Offset mismatch for UFortAthenaVehicleSoundComponent_Speed::Speed");

// /Script/FortAthenaVehicleAudioRuntime.FortAthenaVehicleSoundComponent_Surface
// Kind: Class; super: FortAthenaVehicleSoundComponent
class UFortAthenaVehicleSoundComponent_Surface
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    std::uint8_t Context[0x138]; // 0x00E8 (Size: 0x138, Type: StructProperty)
    void* NativeSurfaceAudio1; // 0x0220 (Size: 0x8, Type: ObjectProperty)
    void* NativeSurfaceAudio2; // 0x0228 (Size: 0x8, Type: ObjectProperty)
    void* BrakeAudioComponent; // 0x0230 (Size: 0x8, Type: ObjectProperty)
    void* VehicleAudioComponentGroup; // 0x0238 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortAthenaVehicleSoundComponent_Surface, Context) == 232, "Offset mismatch for UFortAthenaVehicleSoundComponent_Surface::Context");
static_assert(offsetof(UFortAthenaVehicleSoundComponent_Surface, NativeSurfaceAudio1) == 544, "Offset mismatch for UFortAthenaVehicleSoundComponent_Surface::NativeSurfaceAudio1");
static_assert(offsetof(UFortAthenaVehicleSoundComponent_Surface, NativeSurfaceAudio2) == 552, "Offset mismatch for UFortAthenaVehicleSoundComponent_Surface::NativeSurfaceAudio2");
static_assert(offsetof(UFortAthenaVehicleSoundComponent_Surface, BrakeAudioComponent) == 560, "Offset mismatch for UFortAthenaVehicleSoundComponent_Surface::BrakeAudioComponent");
static_assert(offsetof(UFortAthenaVehicleSoundComponent_Surface, VehicleAudioComponentGroup) == 568, "Offset mismatch for UFortAthenaVehicleSoundComponent_Surface::VehicleAudioComponentGroup");

// /Script/FortAthenaVehicleAudioRuntime.FortVehicleAudioControllerUpdater_Significance
// Kind: Class; super: FortVehicleAudioControllerUpdater
class UFortVehicleAudioControllerUpdater_Significance
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t LODBucketCap; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortVehicleAudioControllerUpdater_Significance, LODBucketCap) == 40, "Offset mismatch for UFortVehicleAudioControllerUpdater_Significance::LODBucketCap");
