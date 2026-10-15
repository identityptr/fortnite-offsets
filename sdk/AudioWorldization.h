/**
 * decamp dumper generated SDK
 * Package: /Script/AudioWorldization
 */
#pragma once
#include "Basic.h"

// /Script/AudioWorldization.AudioSphereTraceResult
// Kind: ScriptStruct; super: none
struct FAudioSphereTraceResult
{
public:
    std::uint8_t bBlocking; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Distance; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FAudioSphereTraceResult, bBlocking) == 0, "Offset mismatch for FAudioSphereTraceResult::bBlocking");
static_assert(offsetof(FAudioSphereTraceResult, Distance) == 4, "Offset mismatch for FAudioSphereTraceResult::Distance");

// /Script/AudioWorldization.AudioWorldizationGlobalSettings
// Kind: ScriptStruct; super: none
struct FAudioWorldizationGlobalSettings
{
public:
    float EffectCrossfadeTime; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t IgnoreTraceActorTag[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    void* EnclosureBus; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* WallDistanceBus; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* ListenerAzimuthBus; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Quadrants; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VolumeModulationForOldAGVSetup; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAudioWorldizationGlobalSettings, EffectCrossfadeTime) == 0, "Offset mismatch for FAudioWorldizationGlobalSettings::EffectCrossfadeTime");
static_assert(offsetof(FAudioWorldizationGlobalSettings, IgnoreTraceActorTag) == 4, "Offset mismatch for FAudioWorldizationGlobalSettings::IgnoreTraceActorTag");
static_assert(offsetof(FAudioWorldizationGlobalSettings, EnclosureBus) == 8, "Offset mismatch for FAudioWorldizationGlobalSettings::EnclosureBus");
static_assert(offsetof(FAudioWorldizationGlobalSettings, WallDistanceBus) == 16, "Offset mismatch for FAudioWorldizationGlobalSettings::WallDistanceBus");
static_assert(offsetof(FAudioWorldizationGlobalSettings, ListenerAzimuthBus) == 24, "Offset mismatch for FAudioWorldizationGlobalSettings::ListenerAzimuthBus");
static_assert(offsetof(FAudioWorldizationGlobalSettings, Quadrants) == 32, "Offset mismatch for FAudioWorldizationGlobalSettings::Quadrants");
static_assert(offsetof(FAudioWorldizationGlobalSettings, VolumeModulationForOldAGVSetup) == 48, "Offset mismatch for FAudioWorldizationGlobalSettings::VolumeModulationForOldAGVSetup");

// /Script/AudioWorldization.AudioWorldizationQuadrantSettings
// Kind: ScriptStruct; super: none
struct FAudioWorldizationQuadrantSettings
{
public:
    void* WallDistanceBus; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* EnclosureBus; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FAudioWorldizationQuadrantSettings, WallDistanceBus) == 0, "Offset mismatch for FAudioWorldizationQuadrantSettings::WallDistanceBus");
static_assert(offsetof(FAudioWorldizationQuadrantSettings, EnclosureBus) == 8, "Offset mismatch for FAudioWorldizationQuadrantSettings::EnclosureBus");

// /Script/AudioWorldization.AudioWorldizationSend
// Kind: ScriptStruct; super: none
struct FAudioWorldizationSend
{
public:
    std::uint8_t Submix[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t VolumeModulators[0x10]; // 0x0020 (Size: 0x10, Type: SetProperty)
    TArray<void*> EffectChain; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAudioWorldizationSend, Submix) == 0, "Offset mismatch for FAudioWorldizationSend::Submix");
static_assert(offsetof(FAudioWorldizationSend, VolumeModulators) == 32, "Offset mismatch for FAudioWorldizationSend::VolumeModulators");
static_assert(offsetof(FAudioWorldizationSend, EffectChain) == 48, "Offset mismatch for FAudioWorldizationSend::EffectChain");

// /Script/AudioWorldization.AudioWorldizationSettings
// Kind: ScriptStruct; super: none
struct FAudioWorldizationSettings
{
public:
    FName Identifier; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> Sends; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    float EnclosureSmoothSpeed; // 0x0018 (Size: 0x4, Type: FloatProperty)
    float WallDistanceSmoothSpeed; // 0x001C (Size: 0x4, Type: FloatProperty)
    float TraceRadius; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float CrossfadeTime; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::int32_t TracePoints; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t TracesPerFrame; // 0x002C (Size: 0x4, Type: IntProperty)
    float SideQuadrantDegrees; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float UpQuadrantDegrees; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t TraceOrigin[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t TraceChannel; // 0x0050 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0051
    TArray<void*> ResponseChannels; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    void* TracePolicy; // 0x0068 (Size: 0x8, Type: ClassProperty)
    void* TraceDirectionPolicy; // 0x0070 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bCollectActorAssetTags; // 0x0078 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FAudioWorldizationSettings, Identifier) == 0, "Offset mismatch for FAudioWorldizationSettings::Identifier");
static_assert(offsetof(FAudioWorldizationSettings, Sends) == 8, "Offset mismatch for FAudioWorldizationSettings::Sends");
static_assert(offsetof(FAudioWorldizationSettings, EnclosureSmoothSpeed) == 24, "Offset mismatch for FAudioWorldizationSettings::EnclosureSmoothSpeed");
static_assert(offsetof(FAudioWorldizationSettings, WallDistanceSmoothSpeed) == 28, "Offset mismatch for FAudioWorldizationSettings::WallDistanceSmoothSpeed");
static_assert(offsetof(FAudioWorldizationSettings, TraceRadius) == 32, "Offset mismatch for FAudioWorldizationSettings::TraceRadius");
static_assert(offsetof(FAudioWorldizationSettings, CrossfadeTime) == 36, "Offset mismatch for FAudioWorldizationSettings::CrossfadeTime");
static_assert(offsetof(FAudioWorldizationSettings, TracePoints) == 40, "Offset mismatch for FAudioWorldizationSettings::TracePoints");
static_assert(offsetof(FAudioWorldizationSettings, TracesPerFrame) == 44, "Offset mismatch for FAudioWorldizationSettings::TracesPerFrame");
static_assert(offsetof(FAudioWorldizationSettings, SideQuadrantDegrees) == 48, "Offset mismatch for FAudioWorldizationSettings::SideQuadrantDegrees");
static_assert(offsetof(FAudioWorldizationSettings, UpQuadrantDegrees) == 52, "Offset mismatch for FAudioWorldizationSettings::UpQuadrantDegrees");
static_assert(offsetof(FAudioWorldizationSettings, TraceOrigin) == 56, "Offset mismatch for FAudioWorldizationSettings::TraceOrigin");
static_assert(offsetof(FAudioWorldizationSettings, TraceChannel) == 80, "Offset mismatch for FAudioWorldizationSettings::TraceChannel");
static_assert(offsetof(FAudioWorldizationSettings, ResponseChannels) == 88, "Offset mismatch for FAudioWorldizationSettings::ResponseChannels");
static_assert(offsetof(FAudioWorldizationSettings, TracePolicy) == 104, "Offset mismatch for FAudioWorldizationSettings::TracePolicy");
static_assert(offsetof(FAudioWorldizationSettings, TraceDirectionPolicy) == 112, "Offset mismatch for FAudioWorldizationSettings::TraceDirectionPolicy");
static_assert(offsetof(FAudioWorldizationSettings, bCollectActorAssetTags) == 120, "Offset mismatch for FAudioWorldizationSettings::bCollectActorAssetTags");

// /Script/AudioWorldization.AudioWorldizationData
// Kind: Class; super: DataAsset
class UAudioWorldizationData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAudioWorldizationData, Settings) == 40, "Offset mismatch for UAudioWorldizationData::Settings");

// /Script/AudioWorldization.AudioWorldizationDefaultSettings
// Kind: Class; super: DeveloperSettings
class UAudioWorldizationDefaultSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t GlobalSettings[0x40]; // 0x0030 (Size: 0x40, Type: StructProperty)
    std::uint8_t DefaultSettings[0x80]; // 0x0070 (Size: 0x80, Type: StructProperty)
    TArray<void*> ModulationParameters; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAudioWorldizationDefaultSettings, GlobalSettings) == 48, "Offset mismatch for UAudioWorldizationDefaultSettings::GlobalSettings");
static_assert(offsetof(UAudioWorldizationDefaultSettings, DefaultSettings) == 112, "Offset mismatch for UAudioWorldizationDefaultSettings::DefaultSettings");
static_assert(offsetof(UAudioWorldizationDefaultSettings, ModulationParameters) == 240, "Offset mismatch for UAudioWorldizationDefaultSettings::ModulationParameters");

// /Script/AudioWorldization.AudioWorldizationReflectionProbe
// Kind: Class; super: Actor
class UAudioWorldizationReflectionProbe
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* SubmixSends; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* SubmixEffects; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* AGVComponent; // 0x0288 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAudioWorldizationReflectionProbe, SubmixSends) == 632, "Offset mismatch for UAudioWorldizationReflectionProbe::SubmixSends");
static_assert(offsetof(UAudioWorldizationReflectionProbe, SubmixEffects) == 640, "Offset mismatch for UAudioWorldizationReflectionProbe::SubmixEffects");
static_assert(offsetof(UAudioWorldizationReflectionProbe, AGVComponent) == 648, "Offset mismatch for UAudioWorldizationReflectionProbe::AGVComponent");

// /Script/AudioWorldization.AudioWorldizationSendsVolumeComponent
// Kind: Class; super: AudioGameplayVolumeComponentBase
class UAudioWorldizationSendsVolumeComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    FName Identifier; // 0x00D0 (Size: 0x8, Type: NameProperty)
    TArray<void*> Sends; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAudioWorldizationSendsVolumeComponent, Identifier) == 208, "Offset mismatch for UAudioWorldizationSendsVolumeComponent::Identifier");
static_assert(offsetof(UAudioWorldizationSendsVolumeComponent, Sends) == 216, "Offset mismatch for UAudioWorldizationSendsVolumeComponent::Sends");

// /Script/AudioWorldization.AudioWorldizationSubsystem
// Kind: Class; super: TickableWorldSubsystem
class UAudioWorldizationSubsystem
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    FMulticastInlineDelegate OnWorldizationEnabled; // 0x0048 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* EnclosureBus; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* WallDistanceBus; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    void* ListenerAzimuthBus; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x8]; // 0x0070
    std::uint8_t CurrentSettings[0x80]; // 0x0078 (Size: 0x80, Type: StructProperty)
    void* VolumeActor; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* TracePolicy; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    void* TraceDirectionPolicy; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x230]; // 0x0110
    TArray<void*> SettingsStack; // 0x0340 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> QuadrantEnclosureBuses; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> QuadrantWallDistanceBuses; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CachedTraceOrigin[0x1]; // 0x0370 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UAudioWorldizationSubsystem, OnWorldizationEnabled) == 72, "Offset mismatch for UAudioWorldizationSubsystem::OnWorldizationEnabled");
static_assert(offsetof(UAudioWorldizationSubsystem, EnclosureBus) == 88, "Offset mismatch for UAudioWorldizationSubsystem::EnclosureBus");
static_assert(offsetof(UAudioWorldizationSubsystem, WallDistanceBus) == 96, "Offset mismatch for UAudioWorldizationSubsystem::WallDistanceBus");
static_assert(offsetof(UAudioWorldizationSubsystem, ListenerAzimuthBus) == 104, "Offset mismatch for UAudioWorldizationSubsystem::ListenerAzimuthBus");
static_assert(offsetof(UAudioWorldizationSubsystem, CurrentSettings) == 120, "Offset mismatch for UAudioWorldizationSubsystem::CurrentSettings");
static_assert(offsetof(UAudioWorldizationSubsystem, VolumeActor) == 248, "Offset mismatch for UAudioWorldizationSubsystem::VolumeActor");
static_assert(offsetof(UAudioWorldizationSubsystem, TracePolicy) == 256, "Offset mismatch for UAudioWorldizationSubsystem::TracePolicy");
static_assert(offsetof(UAudioWorldizationSubsystem, TraceDirectionPolicy) == 264, "Offset mismatch for UAudioWorldizationSubsystem::TraceDirectionPolicy");
static_assert(offsetof(UAudioWorldizationSubsystem, SettingsStack) == 832, "Offset mismatch for UAudioWorldizationSubsystem::SettingsStack");
static_assert(offsetof(UAudioWorldizationSubsystem, QuadrantEnclosureBuses) == 848, "Offset mismatch for UAudioWorldizationSubsystem::QuadrantEnclosureBuses");
static_assert(offsetof(UAudioWorldizationSubsystem, QuadrantWallDistanceBuses) == 864, "Offset mismatch for UAudioWorldizationSubsystem::QuadrantWallDistanceBuses");
static_assert(offsetof(UAudioWorldizationSubsystem, CachedTraceOrigin) == 880, "Offset mismatch for UAudioWorldizationSubsystem::CachedTraceOrigin");

// /Script/AudioWorldization.AudioWorldizationTraceDirectionPolicyBase
// Kind: Class; super: Object
class UAudioWorldizationTraceDirectionPolicyBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioWorldization.AudioWorldizationTraceDirectionPolicyDefault
// Kind: Class; super: AudioWorldizationTraceDirectionPolicyBase
class UAudioWorldizationTraceDirectionPolicyDefault
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioWorldization.AudioWorldizationTracePolicyBase
// Kind: Class; super: Object
class UAudioWorldizationTracePolicyBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioWorldization.AudioWorldizationTracePolicyDefault
// Kind: Class; super: AudioWorldizationTracePolicyBase
class UAudioWorldizationTracePolicyDefault
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AudioWorldization.AudioWorldizationVolumeComponent
// Kind: Class; super: AudioGameplayVolumeComponentBase
class UAudioWorldizationVolumeComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    void* Settings; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAudioWorldizationVolumeComponent, Settings) == 208, "Offset mismatch for UAudioWorldizationVolumeComponent::Settings");

// /Script/AudioWorldization.AudioWorldizationVolumeProxy
// Kind: Class; super: AGVPrimitiveComponentProxy
class UAudioWorldizationVolumeProxy
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    float EnclosureTarget; // 0x0060 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Requirement; // 0x0064 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UAudioWorldizationVolumeProxy, EnclosureTarget) == 96, "Offset mismatch for UAudioWorldizationVolumeProxy::EnclosureTarget");
static_assert(offsetof(UAudioWorldizationVolumeProxy, Requirement) == 100, "Offset mismatch for UAudioWorldizationVolumeProxy::Requirement");

// /Script/AudioWorldization.GameFeatureAction_SetAudioWorldizationEffectSends
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_SetAudioWorldizationEffectSends
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName Identifier; // 0x0028 (Size: 0x8, Type: NameProperty)
    TArray<void*> Sends; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameFeatureAction_SetAudioWorldizationEffectSends, Identifier) == 40, "Offset mismatch for UGameFeatureAction_SetAudioWorldizationEffectSends::Identifier");
static_assert(offsetof(UGameFeatureAction_SetAudioWorldizationEffectSends, Sends) == 48, "Offset mismatch for UGameFeatureAction_SetAudioWorldizationEffectSends::Sends");

// /Script/AudioWorldization.GameFeatureAction_SetAudioWorldizationSettings
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_SetAudioWorldizationSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGameFeatureAction_SetAudioWorldizationSettings, Settings) == 40, "Offset mismatch for UGameFeatureAction_SetAudioWorldizationSettings::Settings");
