/**
 * decamp dumper generated SDK
 * Package: /Script/IceRuntime
 */
#pragma once
#include "Basic.h"

// /Script/IceRuntime.FortCurieElementAttachConditionHandlerIce
// Kind: Class; super: FortCurieElementAttachConditionHandler
class UFortCurieElementAttachConditionHandlerIce
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ElementMagnitudeToIntensityCurve[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortCurieElementAttachConditionHandlerIce, ElementMagnitudeToIntensityCurve) == 48, "Offset mismatch for UFortCurieElementAttachConditionHandlerIce::ElementMagnitudeToIntensityCurve");

// /Script/IceRuntime.FortCurieElementAttachHandlerIce
// Kind: Class; super: FortCurieElementAttachHandler
class UFortCurieElementAttachHandlerIce
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    float MinWaterContentOnDetach; // 0x0090 (Size: 0x4, Type: FloatProperty)
    float ShatterDamageThreshold; // 0x0094 (Size: 0x4, Type: FloatProperty)
    TMap<void*, void*> AggregateDamagePerActor; // 0x0098 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UFortCurieElementAttachHandlerIce, MinWaterContentOnDetach) == 144, "Offset mismatch for UFortCurieElementAttachHandlerIce::MinWaterContentOnDetach");
static_assert(offsetof(UFortCurieElementAttachHandlerIce, ShatterDamageThreshold) == 148, "Offset mismatch for UFortCurieElementAttachHandlerIce::ShatterDamageThreshold");
static_assert(offsetof(UFortCurieElementAttachHandlerIce, AggregateDamagePerActor) == 152, "Offset mismatch for UFortCurieElementAttachHandlerIce::AggregateDamagePerActor");

// /Script/IceRuntime.FortCurieIceNativeFXHandler
// Kind: Class; super: FortCurieNativeFXHandler
class UFortCurieIceNativeFXHandler
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* CachedConfig; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCurieIceNativeFXHandler, CachedConfig) == 40, "Offset mismatch for UFortCurieIceNativeFXHandler::CachedConfig");

// /Script/IceRuntime.FortCurieIceNativeFXHandlerConfig
// Kind: Class; super: FortCurieNativeFXHandlerConfig
class UFortCurieIceNativeFXHandlerConfig
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ConfigName[0x4]; // 0x0030 (Size: 0x4, Type: NameProperty)
    std::uint8_t ConfigTag[0x4]; // 0x0034 (Size: 0x4, Type: StructProperty)
    std::uint8_t bNeedsAmbientAudio; // 0x0038 (Size: 0x1, Type: BoolProperty)
    // 0x0038 BoolProperty bNeedsSignificanceTracking (shared storage)
    // 0x0038 BoolProperty bUseGlow (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::int32_t GlowPriority; // 0x003C (Size: 0x4, Type: IntProperty)
    float GlowMaterialIdx; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0044
    std::uint8_t GlowFadeInCurve[0x48]; // 0x0048 (Size: 0x48, Type: StructProperty)
    std::uint8_t GlowFadeOutCurve[0x48]; // 0x0090 (Size: 0x48, Type: StructProperty)
    void* AmbientSound; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCurieIceNativeFXHandlerConfig, ConfigName) == 48, "Offset mismatch for UFortCurieIceNativeFXHandlerConfig::ConfigName");
static_assert(offsetof(UFortCurieIceNativeFXHandlerConfig, ConfigTag) == 52, "Offset mismatch for UFortCurieIceNativeFXHandlerConfig::ConfigTag");
static_assert(offsetof(UFortCurieIceNativeFXHandlerConfig, bNeedsAmbientAudio) == 56, "Offset mismatch for UFortCurieIceNativeFXHandlerConfig::bNeedsAmbientAudio");
static_assert(offsetof(UFortCurieIceNativeFXHandlerConfig, GlowPriority) == 60, "Offset mismatch for UFortCurieIceNativeFXHandlerConfig::GlowPriority");
static_assert(offsetof(UFortCurieIceNativeFXHandlerConfig, GlowMaterialIdx) == 64, "Offset mismatch for UFortCurieIceNativeFXHandlerConfig::GlowMaterialIdx");
static_assert(offsetof(UFortCurieIceNativeFXHandlerConfig, GlowFadeInCurve) == 72, "Offset mismatch for UFortCurieIceNativeFXHandlerConfig::GlowFadeInCurve");
static_assert(offsetof(UFortCurieIceNativeFXHandlerConfig, GlowFadeOutCurve) == 144, "Offset mismatch for UFortCurieIceNativeFXHandlerConfig::GlowFadeOutCurve");
static_assert(offsetof(UFortCurieIceNativeFXHandlerConfig, AmbientSound) == 216, "Offset mismatch for UFortCurieIceNativeFXHandlerConfig::AmbientSound");

// /Script/IceRuntime.FortCurieIcePropagationManager
// Kind: Class; super: FortCurieManagerComponent
class UFortCurieIcePropagationManager
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* InternalManagerConfig; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortCurieIcePropagationManager, InternalManagerConfig) == 48, "Offset mismatch for UFortCurieIcePropagationManager::InternalManagerConfig");

// /Script/IceRuntime.FortCurieIcePropagationManagerConfig
// Kind: Class; super: CurieManagerComponentConfig
class UFortCurieIcePropagationManagerConfig
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    float IceBlockSeparation; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x003C
    void* IceBlockClass; // 0x0040 (Size: 0x8, Type: ClassProperty)
    float PropagationRate; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::int32_t DefaultPropagationDepth; // 0x004C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UFortCurieIcePropagationManagerConfig, IceBlockSeparation) == 56, "Offset mismatch for UFortCurieIcePropagationManagerConfig::IceBlockSeparation");
static_assert(offsetof(UFortCurieIcePropagationManagerConfig, IceBlockClass) == 64, "Offset mismatch for UFortCurieIcePropagationManagerConfig::IceBlockClass");
static_assert(offsetof(UFortCurieIcePropagationManagerConfig, PropagationRate) == 72, "Offset mismatch for UFortCurieIcePropagationManagerConfig::PropagationRate");
static_assert(offsetof(UFortCurieIcePropagationManagerConfig, DefaultPropagationDepth) == 76, "Offset mismatch for UFortCurieIcePropagationManagerConfig::DefaultPropagationDepth");

// /Script/IceRuntime.FortIceSkatesMovementControls
// Kind: Class; super: FortMovementControls
class UFortIceSkatesMovementControls
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t TurnSpeed[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    std::uint8_t Acceleration[0x28]; // 0x0058 (Size: 0x28, Type: StructProperty)
    std::uint8_t UphillSlopeAcceleration[0x28]; // 0x0080 (Size: 0x28, Type: StructProperty)
    std::uint8_t DownhillSlopeAcceleration[0x28]; // 0x00A8 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxSlopeAngle[0x28]; // 0x00D0 (Size: 0x28, Type: StructProperty)
    std::uint8_t MinSpeed[0x28]; // 0x00F8 (Size: 0x28, Type: StructProperty)
    std::uint8_t TargetSpeed[0x28]; // 0x0120 (Size: 0x28, Type: StructProperty)
    std::uint8_t MaxSpeed[0x28]; // 0x0148 (Size: 0x28, Type: StructProperty)
    std::uint8_t AirDrag[0x1]; // 0x0170 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortIceSkatesMovementControls, TurnSpeed) == 48, "Offset mismatch for UFortIceSkatesMovementControls::TurnSpeed");
static_assert(offsetof(UFortIceSkatesMovementControls, Acceleration) == 88, "Offset mismatch for UFortIceSkatesMovementControls::Acceleration");
static_assert(offsetof(UFortIceSkatesMovementControls, UphillSlopeAcceleration) == 128, "Offset mismatch for UFortIceSkatesMovementControls::UphillSlopeAcceleration");
static_assert(offsetof(UFortIceSkatesMovementControls, DownhillSlopeAcceleration) == 168, "Offset mismatch for UFortIceSkatesMovementControls::DownhillSlopeAcceleration");
static_assert(offsetof(UFortIceSkatesMovementControls, MaxSlopeAngle) == 208, "Offset mismatch for UFortIceSkatesMovementControls::MaxSlopeAngle");
static_assert(offsetof(UFortIceSkatesMovementControls, MinSpeed) == 248, "Offset mismatch for UFortIceSkatesMovementControls::MinSpeed");
static_assert(offsetof(UFortIceSkatesMovementControls, TargetSpeed) == 288, "Offset mismatch for UFortIceSkatesMovementControls::TargetSpeed");
static_assert(offsetof(UFortIceSkatesMovementControls, MaxSpeed) == 328, "Offset mismatch for UFortIceSkatesMovementControls::MaxSpeed");
static_assert(offsetof(UFortIceSkatesMovementControls, AirDrag) == 368, "Offset mismatch for UFortIceSkatesMovementControls::AirDrag");

// /Script/IceRuntime.IceGroundPath
// Kind: Class; super: Actor
class UIceGroundPath
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* StaticMesh; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* Material; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ForwardAxis; // 0x0280 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0281
    TArray<void*> SplinePoints; // 0x0288 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SplineOffset[0x18]; // 0x0298 (Size: 0x18, Type: StructProperty)
    float SplineColliderExtentWidth; // 0x02B0 (Size: 0x4, Type: FloatProperty)
    float SplineColliderExtentHeight; // 0x02B4 (Size: 0x4, Type: FloatProperty)
    float LandscapeTraceBuffer; // 0x02B8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x02BC
    TArray<void*> BoxColliderArray; // 0x02C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UIceGroundPath, StaticMesh) == 624, "Offset mismatch for UIceGroundPath::StaticMesh");
static_assert(offsetof(UIceGroundPath, Material) == 632, "Offset mismatch for UIceGroundPath::Material");
static_assert(offsetof(UIceGroundPath, ForwardAxis) == 640, "Offset mismatch for UIceGroundPath::ForwardAxis");
static_assert(offsetof(UIceGroundPath, SplinePoints) == 648, "Offset mismatch for UIceGroundPath::SplinePoints");
static_assert(offsetof(UIceGroundPath, SplineOffset) == 664, "Offset mismatch for UIceGroundPath::SplineOffset");
static_assert(offsetof(UIceGroundPath, SplineColliderExtentWidth) == 688, "Offset mismatch for UIceGroundPath::SplineColliderExtentWidth");
static_assert(offsetof(UIceGroundPath, SplineColliderExtentHeight) == 692, "Offset mismatch for UIceGroundPath::SplineColliderExtentHeight");
static_assert(offsetof(UIceGroundPath, LandscapeTraceBuffer) == 696, "Offset mismatch for UIceGroundPath::LandscapeTraceBuffer");
static_assert(offsetof(UIceGroundPath, BoxColliderArray) == 704, "Offset mismatch for UIceGroundPath::BoxColliderArray");
