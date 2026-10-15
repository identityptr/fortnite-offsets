/**
 * decamp dumper generated SDK
 * Package: /Script/FMDeviceCablesRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FMDeviceCablesRuntime.FMDeviceCableArtifact
// Kind: ScriptStruct; super: none
struct FFMDeviceCableArtifact
{
public:
    void* MeshTreeNode; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* MetaSoundTreeNode; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* TextureTreeNode; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* ModulationNode; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FFMDeviceCableArtifact, MeshTreeNode) == 0, "Offset mismatch for FFMDeviceCableArtifact::MeshTreeNode");
static_assert(offsetof(FFMDeviceCableArtifact, MetaSoundTreeNode) == 8, "Offset mismatch for FFMDeviceCableArtifact::MetaSoundTreeNode");
static_assert(offsetof(FFMDeviceCableArtifact, TextureTreeNode) == 16, "Offset mismatch for FFMDeviceCableArtifact::TextureTreeNode");
static_assert(offsetof(FFMDeviceCableArtifact, ModulationNode) == 24, "Offset mismatch for FFMDeviceCableArtifact::ModulationNode");

// /Script/FMDeviceCablesRuntime.FMDeviceCableOrderingMovementInfo
// Kind: ScriptStruct; super: none
struct FFMDeviceCableOrderingMovementInfo
{
public:
    void* Curve; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* ScaleCurve; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Vector[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    float MovementTimeSeconds; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FFMDeviceCableOrderingMovementInfo, Curve) == 0, "Offset mismatch for FFMDeviceCableOrderingMovementInfo::Curve");
static_assert(offsetof(FFMDeviceCableOrderingMovementInfo, ScaleCurve) == 8, "Offset mismatch for FFMDeviceCableOrderingMovementInfo::ScaleCurve");
static_assert(offsetof(FFMDeviceCableOrderingMovementInfo, Vector) == 16, "Offset mismatch for FFMDeviceCableOrderingMovementInfo::Vector");
static_assert(offsetof(FFMDeviceCableOrderingMovementInfo, MovementTimeSeconds) == 40, "Offset mismatch for FFMDeviceCableOrderingMovementInfo::MovementTimeSeconds");

// /Script/FMDeviceCablesRuntime.FMDeviceCableOrderingMovementState
// Kind: ScriptStruct; super: none
struct FFMDeviceCableOrderingMovementState
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FMDeviceCablesRuntime.FMDeviceCableOrderingPortState
// Kind: ScriptStruct; super: none
struct FFMDeviceCableOrderingPortState
{
public:
    void* WildcardPort; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* VerticalPositionParent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VisualState; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    std::uint8_t State; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0015
    std::int32_t Slot; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t TargetSlot; // 0x001C (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x240]; // 0x0020
    TWeakObjectPtr<void> Owner; // 0x0260 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FFMDeviceCableOrderingPortState, WildcardPort) == 0, "Offset mismatch for FFMDeviceCableOrderingPortState::WildcardPort");
static_assert(offsetof(FFMDeviceCableOrderingPortState, VerticalPositionParent) == 8, "Offset mismatch for FFMDeviceCableOrderingPortState::VerticalPositionParent");
static_assert(offsetof(FFMDeviceCableOrderingPortState, VisualState) == 16, "Offset mismatch for FFMDeviceCableOrderingPortState::VisualState");
static_assert(offsetof(FFMDeviceCableOrderingPortState, State) == 20, "Offset mismatch for FFMDeviceCableOrderingPortState::State");
static_assert(offsetof(FFMDeviceCableOrderingPortState, Slot) == 24, "Offset mismatch for FFMDeviceCableOrderingPortState::Slot");
static_assert(offsetof(FFMDeviceCableOrderingPortState, TargetSlot) == 28, "Offset mismatch for FFMDeviceCableOrderingPortState::TargetSlot");
static_assert(offsetof(FFMDeviceCableOrderingPortState, Owner) == 608, "Offset mismatch for FFMDeviceCableOrderingPortState::Owner");

// /Script/FMDeviceCablesRuntime.ModulatorPortSaveData
// Kind: ScriptStruct; super: none
struct FModulatorPortSaveData
{
public:
    std::uint8_t ConnectionGuid[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    TArray<void*> ConnectedGuids; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FModulatorPortSaveData, ConnectionGuid) == 0, "Offset mismatch for FModulatorPortSaveData::ConnectionGuid");
static_assert(offsetof(FModulatorPortSaveData, ConnectedGuids) == 16, "Offset mismatch for FModulatorPortSaveData::ConnectedGuids");

// /Script/FMDeviceCablesRuntime.PortUpdateInfo
// Kind: ScriptStruct; super: none
struct FPortUpdateInfo
{
public:
    std::uint8_t PortSelectStatus; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* ConstantPort; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* ConnectedPort; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* DisconnectedPort; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FPortUpdateInfo, PortSelectStatus) == 0, "Offset mismatch for FPortUpdateInfo::PortSelectStatus");
static_assert(offsetof(FPortUpdateInfo, ConstantPort) == 8, "Offset mismatch for FPortUpdateInfo::ConstantPort");
static_assert(offsetof(FPortUpdateInfo, ConnectedPort) == 16, "Offset mismatch for FPortUpdateInfo::ConnectedPort");
static_assert(offsetof(FPortUpdateInfo, DisconnectedPort) == 24, "Offset mismatch for FPortUpdateInfo::DisconnectedPort");

// /Script/FMDeviceCablesRuntime.FMDeviceCable
// Kind: Class; super: BuildingActor
class UFMDeviceCable
{
public:
    std::uint8_t Pad_0000[0x6C0]; // 0x0000
    void* SplineComponent; // 0x06C0 (Size: 0x8, Type: ObjectProperty)
    void* DeviceCableHead; // 0x06C8 (Size: 0x8, Type: ObjectProperty)
    void* SplineMeshComponentClass; // 0x06D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t ScalarStaticMesh[0x20]; // 0x06D8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AudioStaticMesh[0x20]; // 0x06F8 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t NoteStaticMesh[0x20]; // 0x0718 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t TextureStaticMesh[0x20]; // 0x0738 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MeshStaticMesh[0x20]; // 0x0758 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SplineLengthParam[0x4]; // 0x0778 (Size: 0x4, Type: NameProperty)
    std::uint8_t SplineStartParam[0x4]; // 0x077C (Size: 0x4, Type: NameProperty)
    std::uint8_t SplineEndParam[0x4]; // 0x0780 (Size: 0x4, Type: NameProperty)
    std::uint8_t PortTypeParam[0x4]; // 0x0784 (Size: 0x4, Type: NameProperty)
    float CableStubLength; // 0x0788 (Size: 0x4, Type: FloatProperty)
    float CableDistanceFromPortB; // 0x078C (Size: 0x4, Type: FloatProperty)
    float CableMinTangent; // 0x0790 (Size: 0x4, Type: FloatProperty)
    float CableMaxTangent; // 0x0794 (Size: 0x4, Type: FloatProperty)
    float CableSectionLengthAtCableCenter; // 0x0798 (Size: 0x4, Type: FloatProperty)
    float CableSectionLengthAtCableHeads; // 0x079C (Size: 0x4, Type: FloatProperty)
    std::int32_t CableSectionCountAtCableHeads; // 0x07A0 (Size: 0x4, Type: IntProperty)
    std::int32_t CableCenterSectionsMaxCount; // 0x07A4 (Size: 0x4, Type: IntProperty)
    float ExtremeMinDotProduct; // 0x07A8 (Size: 0x4, Type: FloatProperty)
    float MaxExtremeCableBendSize; // 0x07AC (Size: 0x4, Type: FloatProperty)
    float ExtremeAngleTangentScale; // 0x07B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x07B4
    TArray<void*> CableSplineMeshArray; // 0x07B8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> DeviceCableAnimator; // 0x07C8 (Size: 0x8, Type: WeakObjectProperty)
    void* DeviceCableMaterial; // 0x07D0 (Size: 0x8, Type: ObjectProperty)
    void* DeviceCableHeadMaterial; // 0x07D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DeviceCableHeadScale[0x28]; // 0x07E0 (Size: 0x28, Type: StructProperty)
    void* ConstantPort; // 0x0808 (Size: 0x8, Type: ObjectProperty)
    void* PortA; // 0x0810 (Size: 0x8, Type: ObjectProperty)
    void* ServerPortA; // 0x0818 (Size: 0x8, Type: ObjectProperty)
    void* PortB; // 0x0820 (Size: 0x8, Type: ObjectProperty)
    void* ServerPortB; // 0x0828 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bPermittedToShowVisuals; // 0x0830 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFMDeviceCable, SplineComponent) == 1728, "Offset mismatch for UFMDeviceCable::SplineComponent");
static_assert(offsetof(UFMDeviceCable, DeviceCableHead) == 1736, "Offset mismatch for UFMDeviceCable::DeviceCableHead");
static_assert(offsetof(UFMDeviceCable, SplineMeshComponentClass) == 1744, "Offset mismatch for UFMDeviceCable::SplineMeshComponentClass");
static_assert(offsetof(UFMDeviceCable, ScalarStaticMesh) == 1752, "Offset mismatch for UFMDeviceCable::ScalarStaticMesh");
static_assert(offsetof(UFMDeviceCable, AudioStaticMesh) == 1784, "Offset mismatch for UFMDeviceCable::AudioStaticMesh");
static_assert(offsetof(UFMDeviceCable, NoteStaticMesh) == 1816, "Offset mismatch for UFMDeviceCable::NoteStaticMesh");
static_assert(offsetof(UFMDeviceCable, TextureStaticMesh) == 1848, "Offset mismatch for UFMDeviceCable::TextureStaticMesh");
static_assert(offsetof(UFMDeviceCable, MeshStaticMesh) == 1880, "Offset mismatch for UFMDeviceCable::MeshStaticMesh");
static_assert(offsetof(UFMDeviceCable, SplineLengthParam) == 1912, "Offset mismatch for UFMDeviceCable::SplineLengthParam");
static_assert(offsetof(UFMDeviceCable, SplineStartParam) == 1916, "Offset mismatch for UFMDeviceCable::SplineStartParam");
static_assert(offsetof(UFMDeviceCable, SplineEndParam) == 1920, "Offset mismatch for UFMDeviceCable::SplineEndParam");
static_assert(offsetof(UFMDeviceCable, PortTypeParam) == 1924, "Offset mismatch for UFMDeviceCable::PortTypeParam");
static_assert(offsetof(UFMDeviceCable, CableStubLength) == 1928, "Offset mismatch for UFMDeviceCable::CableStubLength");
static_assert(offsetof(UFMDeviceCable, CableDistanceFromPortB) == 1932, "Offset mismatch for UFMDeviceCable::CableDistanceFromPortB");
static_assert(offsetof(UFMDeviceCable, CableMinTangent) == 1936, "Offset mismatch for UFMDeviceCable::CableMinTangent");
static_assert(offsetof(UFMDeviceCable, CableMaxTangent) == 1940, "Offset mismatch for UFMDeviceCable::CableMaxTangent");
static_assert(offsetof(UFMDeviceCable, CableSectionLengthAtCableCenter) == 1944, "Offset mismatch for UFMDeviceCable::CableSectionLengthAtCableCenter");
static_assert(offsetof(UFMDeviceCable, CableSectionLengthAtCableHeads) == 1948, "Offset mismatch for UFMDeviceCable::CableSectionLengthAtCableHeads");
static_assert(offsetof(UFMDeviceCable, CableSectionCountAtCableHeads) == 1952, "Offset mismatch for UFMDeviceCable::CableSectionCountAtCableHeads");
static_assert(offsetof(UFMDeviceCable, CableCenterSectionsMaxCount) == 1956, "Offset mismatch for UFMDeviceCable::CableCenterSectionsMaxCount");
static_assert(offsetof(UFMDeviceCable, ExtremeMinDotProduct) == 1960, "Offset mismatch for UFMDeviceCable::ExtremeMinDotProduct");
static_assert(offsetof(UFMDeviceCable, MaxExtremeCableBendSize) == 1964, "Offset mismatch for UFMDeviceCable::MaxExtremeCableBendSize");
static_assert(offsetof(UFMDeviceCable, ExtremeAngleTangentScale) == 1968, "Offset mismatch for UFMDeviceCable::ExtremeAngleTangentScale");
static_assert(offsetof(UFMDeviceCable, CableSplineMeshArray) == 1976, "Offset mismatch for UFMDeviceCable::CableSplineMeshArray");
static_assert(offsetof(UFMDeviceCable, DeviceCableAnimator) == 1992, "Offset mismatch for UFMDeviceCable::DeviceCableAnimator");
static_assert(offsetof(UFMDeviceCable, DeviceCableMaterial) == 2000, "Offset mismatch for UFMDeviceCable::DeviceCableMaterial");
static_assert(offsetof(UFMDeviceCable, DeviceCableHeadMaterial) == 2008, "Offset mismatch for UFMDeviceCable::DeviceCableHeadMaterial");
static_assert(offsetof(UFMDeviceCable, DeviceCableHeadScale) == 2016, "Offset mismatch for UFMDeviceCable::DeviceCableHeadScale");
static_assert(offsetof(UFMDeviceCable, ConstantPort) == 2056, "Offset mismatch for UFMDeviceCable::ConstantPort");
static_assert(offsetof(UFMDeviceCable, PortA) == 2064, "Offset mismatch for UFMDeviceCable::PortA");
static_assert(offsetof(UFMDeviceCable, ServerPortA) == 2072, "Offset mismatch for UFMDeviceCable::ServerPortA");
static_assert(offsetof(UFMDeviceCable, PortB) == 2080, "Offset mismatch for UFMDeviceCable::PortB");
static_assert(offsetof(UFMDeviceCable, ServerPortB) == 2088, "Offset mismatch for UFMDeviceCable::ServerPortB");
static_assert(offsetof(UFMDeviceCable, bPermittedToShowVisuals) == 2096, "Offset mismatch for UFMDeviceCable::bPermittedToShowVisuals");

// /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorAudioAnalyzer
// Kind: Class; super: FMDeviceCableAnimatorBase
class UFMDeviceCableAnimatorAudioAnalyzer
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t FftTextureParam[0x4]; // 0x0068 (Size: 0x4, Type: NameProperty)
    std::uint8_t WaveformTextureParam[0x4]; // 0x006C (Size: 0x4, Type: NameProperty)
    std::uint8_t AmplitudeTextureParam[0x4]; // 0x0070 (Size: 0x4, Type: NameProperty)
    std::uint8_t AmplitudeDataParam[0x4]; // 0x0074 (Size: 0x4, Type: NameProperty)
    std::uint8_t CableQualityParam[0x4]; // 0x0078 (Size: 0x4, Type: NameProperty)
    std::uint8_t CableReactivityParam[0x4]; // 0x007C (Size: 0x4, Type: NameProperty)
    std::int32_t WaveformNumSamplesHeld; // 0x0080 (Size: 0x4, Type: IntProperty)
    std::int32_t WaveformSmoothingDistance; // 0x0084 (Size: 0x4, Type: IntProperty)
    float WaveformSmoothingFactor; // 0x0088 (Size: 0x4, Type: FloatProperty)
    float WaveformDecayPerSecond; // 0x008C (Size: 0x4, Type: FloatProperty)
    void* WaveformTexture; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* AmplitudeTexture; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* PatchWrapper; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFMDeviceCableAnimatorAudioAnalyzer, FftTextureParam) == 104, "Offset mismatch for UFMDeviceCableAnimatorAudioAnalyzer::FftTextureParam");
static_assert(offsetof(UFMDeviceCableAnimatorAudioAnalyzer, WaveformTextureParam) == 108, "Offset mismatch for UFMDeviceCableAnimatorAudioAnalyzer::WaveformTextureParam");
static_assert(offsetof(UFMDeviceCableAnimatorAudioAnalyzer, AmplitudeTextureParam) == 112, "Offset mismatch for UFMDeviceCableAnimatorAudioAnalyzer::AmplitudeTextureParam");
static_assert(offsetof(UFMDeviceCableAnimatorAudioAnalyzer, AmplitudeDataParam) == 116, "Offset mismatch for UFMDeviceCableAnimatorAudioAnalyzer::AmplitudeDataParam");
static_assert(offsetof(UFMDeviceCableAnimatorAudioAnalyzer, CableQualityParam) == 120, "Offset mismatch for UFMDeviceCableAnimatorAudioAnalyzer::CableQualityParam");
static_assert(offsetof(UFMDeviceCableAnimatorAudioAnalyzer, CableReactivityParam) == 124, "Offset mismatch for UFMDeviceCableAnimatorAudioAnalyzer::CableReactivityParam");
static_assert(offsetof(UFMDeviceCableAnimatorAudioAnalyzer, WaveformNumSamplesHeld) == 128, "Offset mismatch for UFMDeviceCableAnimatorAudioAnalyzer::WaveformNumSamplesHeld");
static_assert(offsetof(UFMDeviceCableAnimatorAudioAnalyzer, WaveformSmoothingDistance) == 132, "Offset mismatch for UFMDeviceCableAnimatorAudioAnalyzer::WaveformSmoothingDistance");
static_assert(offsetof(UFMDeviceCableAnimatorAudioAnalyzer, WaveformSmoothingFactor) == 136, "Offset mismatch for UFMDeviceCableAnimatorAudioAnalyzer::WaveformSmoothingFactor");
static_assert(offsetof(UFMDeviceCableAnimatorAudioAnalyzer, WaveformDecayPerSecond) == 140, "Offset mismatch for UFMDeviceCableAnimatorAudioAnalyzer::WaveformDecayPerSecond");
static_assert(offsetof(UFMDeviceCableAnimatorAudioAnalyzer, WaveformTexture) == 144, "Offset mismatch for UFMDeviceCableAnimatorAudioAnalyzer::WaveformTexture");
static_assert(offsetof(UFMDeviceCableAnimatorAudioAnalyzer, AmplitudeTexture) == 152, "Offset mismatch for UFMDeviceCableAnimatorAudioAnalyzer::AmplitudeTexture");
static_assert(offsetof(UFMDeviceCableAnimatorAudioAnalyzer, PatchWrapper) == 160, "Offset mismatch for UFMDeviceCableAnimatorAudioAnalyzer::PatchWrapper");

// /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorBase
// Kind: Class; super: Object
class UFMDeviceCableAnimatorBase
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TWeakObjectPtr<void> OwnerPort; // 0x0038 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFMDeviceCableAnimatorBase, OwnerPort) == 56, "Offset mismatch for UFMDeviceCableAnimatorBase::OwnerPort");

// /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorFloatProvider
// Kind: Class; super: FMDeviceCableAnimatorBase
class UFMDeviceCableAnimatorFloatProvider
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t CableDataParam[0x4]; // 0x0068 (Size: 0x4, Type: NameProperty)
    std::uint8_t FloatProviderTypeParam[0x4]; // 0x006C (Size: 0x4, Type: NameProperty)
    TArray<void*> FloatProviders; // 0x0070 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFMDeviceCableAnimatorFloatProvider, CableDataParam) == 104, "Offset mismatch for UFMDeviceCableAnimatorFloatProvider::CableDataParam");
static_assert(offsetof(UFMDeviceCableAnimatorFloatProvider, FloatProviderTypeParam) == 108, "Offset mismatch for UFMDeviceCableAnimatorFloatProvider::FloatProviderTypeParam");
static_assert(offsetof(UFMDeviceCableAnimatorFloatProvider, FloatProviders) == 112, "Offset mismatch for UFMDeviceCableAnimatorFloatProvider::FloatProviders");

// /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorMeshProvider
// Kind: Class; super: FMDeviceCableAnimatorBase
class UFMDeviceCableAnimatorMeshProvider
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t CableDataParam[0x4]; // 0x0068 (Size: 0x4, Type: NameProperty)
    float DecayRate; // 0x006C (Size: 0x4, Type: FloatProperty)
    void* MeshProvider; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFMDeviceCableAnimatorMeshProvider, CableDataParam) == 104, "Offset mismatch for UFMDeviceCableAnimatorMeshProvider::CableDataParam");
static_assert(offsetof(UFMDeviceCableAnimatorMeshProvider, DecayRate) == 108, "Offset mismatch for UFMDeviceCableAnimatorMeshProvider::DecayRate");
static_assert(offsetof(UFMDeviceCableAnimatorMeshProvider, MeshProvider) == 112, "Offset mismatch for UFMDeviceCableAnimatorMeshProvider::MeshProvider");

// /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorMidiEvent
// Kind: Class; super: FMDeviceCableAnimatorBase
class UFMDeviceCableAnimatorMidiEvent
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FName NoteTextureParam; // 0x0068 (Size: 0x8, Type: NameProperty)
    void* NoteShapeCurve; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    float NotePercentOfTexture; // 0x0078 (Size: 0x4, Type: FloatProperty)
    float NoteTravelBeats; // 0x007C (Size: 0x4, Type: FloatProperty)
    float NoteStartDelayBeats; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x14]; // 0x0084
    void* NoteTexture; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* PatchWrapper; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFMDeviceCableAnimatorMidiEvent, NoteTextureParam) == 104, "Offset mismatch for UFMDeviceCableAnimatorMidiEvent::NoteTextureParam");
static_assert(offsetof(UFMDeviceCableAnimatorMidiEvent, NoteShapeCurve) == 112, "Offset mismatch for UFMDeviceCableAnimatorMidiEvent::NoteShapeCurve");
static_assert(offsetof(UFMDeviceCableAnimatorMidiEvent, NotePercentOfTexture) == 120, "Offset mismatch for UFMDeviceCableAnimatorMidiEvent::NotePercentOfTexture");
static_assert(offsetof(UFMDeviceCableAnimatorMidiEvent, NoteTravelBeats) == 124, "Offset mismatch for UFMDeviceCableAnimatorMidiEvent::NoteTravelBeats");
static_assert(offsetof(UFMDeviceCableAnimatorMidiEvent, NoteStartDelayBeats) == 128, "Offset mismatch for UFMDeviceCableAnimatorMidiEvent::NoteStartDelayBeats");
static_assert(offsetof(UFMDeviceCableAnimatorMidiEvent, NoteTexture) == 152, "Offset mismatch for UFMDeviceCableAnimatorMidiEvent::NoteTexture");
static_assert(offsetof(UFMDeviceCableAnimatorMidiEvent, PatchWrapper) == 160, "Offset mismatch for UFMDeviceCableAnimatorMidiEvent::PatchWrapper");

// /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorTextureProvider
// Kind: Class; super: FMDeviceCableAnimatorBase
class UFMDeviceCableAnimatorTextureProvider
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t CableDataParam[0x4]; // 0x0068 (Size: 0x4, Type: NameProperty)
    float DecayRate; // 0x006C (Size: 0x4, Type: FloatProperty)
    void* TextureProvider; // 0x0070 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFMDeviceCableAnimatorTextureProvider, CableDataParam) == 104, "Offset mismatch for UFMDeviceCableAnimatorTextureProvider::CableDataParam");
static_assert(offsetof(UFMDeviceCableAnimatorTextureProvider, DecayRate) == 108, "Offset mismatch for UFMDeviceCableAnimatorTextureProvider::DecayRate");
static_assert(offsetof(UFMDeviceCableAnimatorTextureProvider, TextureProvider) == 112, "Offset mismatch for UFMDeviceCableAnimatorTextureProvider::TextureProvider");

// /Script/FMDeviceCablesRuntime.FMDeviceCableAnimatorTickSubsystem
// Kind: Class; super: FortManagedTickSubsystem
class UFMDeviceCableAnimatorTickSubsystem
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    TArray<void*> ActiveTickList; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> AllEnabledObjects; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TSet<void*> AllRegisteredObjects; // 0x0088 (Size: 0x50, Type: SetProperty)
};

static_assert(offsetof(UFMDeviceCableAnimatorTickSubsystem, ActiveTickList) == 104, "Offset mismatch for UFMDeviceCableAnimatorTickSubsystem::ActiveTickList");
static_assert(offsetof(UFMDeviceCableAnimatorTickSubsystem, AllEnabledObjects) == 120, "Offset mismatch for UFMDeviceCableAnimatorTickSubsystem::AllEnabledObjects");
static_assert(offsetof(UFMDeviceCableAnimatorTickSubsystem, AllRegisteredObjects) == 136, "Offset mismatch for UFMDeviceCableAnimatorTickSubsystem::AllRegisteredObjects");

// /Script/FMDeviceCablesRuntime.FMDeviceCableAudioConnection
// Kind: Class; super: FMDeviceCableMetaSoundConnection
class UFMDeviceCableAudioConnection
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t bConnectionActive; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0041
    TArray<void*> BuildingCompositeArtifactFromPorts; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFMDeviceCableAudioConnection, bConnectionActive) == 64, "Offset mismatch for UFMDeviceCableAudioConnection::bConnectionActive");
static_assert(offsetof(UFMDeviceCableAudioConnection, BuildingCompositeArtifactFromPorts) == 72, "Offset mismatch for UFMDeviceCableAudioConnection::BuildingCompositeArtifactFromPorts");

// /Script/FMDeviceCablesRuntime.FMDeviceCableConnectionBase
// Kind: Class; super: Object
class UFMDeviceCableConnectionBase
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t bConnectionActive; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0041
    TArray<void*> BuildingCompositeArtifactFromPorts; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFMDeviceCableConnectionBase, bConnectionActive) == 64, "Offset mismatch for UFMDeviceCableConnectionBase::bConnectionActive");
static_assert(offsetof(UFMDeviceCableConnectionBase, BuildingCompositeArtifactFromPorts) == 72, "Offset mismatch for UFMDeviceCableConnectionBase::BuildingCompositeArtifactFromPorts");

// /Script/FMDeviceCablesRuntime.FMDeviceCableControllerComponent
// Kind: Class; super: ActorComponent
class UFMDeviceCableControllerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnControllerCableConnected; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnControllerCableDisconnected; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* ControllerCablePort; // 0x00E0 (Size: 0x8, Type: ClassProperty)
    void* DeviceCableManagerClass; // 0x00E8 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> CurrentPlayerPawn; // 0x00F0 (Size: 0x8, Type: WeakObjectProperty)
    void* PlayerController; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    void* LocalControllerPort; // 0x0100 (Size: 0x8, Type: ObjectProperty)
    void* ServerControllerPort; // 0x0108 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> LocalControllerPortActor; // 0x0110 (Size: 0x8, Type: WeakObjectProperty)
    void* LocalDeviceCableManager; // 0x0118 (Size: 0x8, Type: ObjectProperty)
    void* ServerDeviceCableManager; // 0x0120 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bFitIsEquipped; // 0x0128 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFMDeviceCableControllerComponent, OnControllerCableConnected) == 192, "Offset mismatch for UFMDeviceCableControllerComponent::OnControllerCableConnected");
static_assert(offsetof(UFMDeviceCableControllerComponent, OnControllerCableDisconnected) == 208, "Offset mismatch for UFMDeviceCableControllerComponent::OnControllerCableDisconnected");
static_assert(offsetof(UFMDeviceCableControllerComponent, ControllerCablePort) == 224, "Offset mismatch for UFMDeviceCableControllerComponent::ControllerCablePort");
static_assert(offsetof(UFMDeviceCableControllerComponent, DeviceCableManagerClass) == 232, "Offset mismatch for UFMDeviceCableControllerComponent::DeviceCableManagerClass");
static_assert(offsetof(UFMDeviceCableControllerComponent, CurrentPlayerPawn) == 240, "Offset mismatch for UFMDeviceCableControllerComponent::CurrentPlayerPawn");
static_assert(offsetof(UFMDeviceCableControllerComponent, PlayerController) == 248, "Offset mismatch for UFMDeviceCableControllerComponent::PlayerController");
static_assert(offsetof(UFMDeviceCableControllerComponent, LocalControllerPort) == 256, "Offset mismatch for UFMDeviceCableControllerComponent::LocalControllerPort");
static_assert(offsetof(UFMDeviceCableControllerComponent, ServerControllerPort) == 264, "Offset mismatch for UFMDeviceCableControllerComponent::ServerControllerPort");
static_assert(offsetof(UFMDeviceCableControllerComponent, LocalControllerPortActor) == 272, "Offset mismatch for UFMDeviceCableControllerComponent::LocalControllerPortActor");
static_assert(offsetof(UFMDeviceCableControllerComponent, LocalDeviceCableManager) == 280, "Offset mismatch for UFMDeviceCableControllerComponent::LocalDeviceCableManager");
static_assert(offsetof(UFMDeviceCableControllerComponent, ServerDeviceCableManager) == 288, "Offset mismatch for UFMDeviceCableControllerComponent::ServerDeviceCableManager");
static_assert(offsetof(UFMDeviceCableControllerComponent, bFitIsEquipped) == 296, "Offset mismatch for UFMDeviceCableControllerComponent::bFitIsEquipped");

// /Script/FMDeviceCablesRuntime.FMDeviceCableFloatConnection
// Kind: Class; super: FMDeviceCableConnectionBase
class UFMDeviceCableFloatConnection
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t bConnectionActive; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0041
    TArray<void*> BuildingCompositeArtifactFromPorts; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFMDeviceCableFloatConnection, bConnectionActive) == 64, "Offset mismatch for UFMDeviceCableFloatConnection::bConnectionActive");
static_assert(offsetof(UFMDeviceCableFloatConnection, BuildingCompositeArtifactFromPorts) == 72, "Offset mismatch for UFMDeviceCableFloatConnection::BuildingCompositeArtifactFromPorts");

// /Script/FMDeviceCablesRuntime.FMDeviceCableManagerComponent
// Kind: Class; super: ActorComponent
class UFMDeviceCableManagerComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* DeviceCableClass; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    std::int32_t StartingCablePoolSize; // 0x00D0 (Size: 0x4, Type: IntProperty)
    std::uint8_t CableInteractionType; // 0x00D4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00D5
    TMap<void*, void*> ConnectionClasses; // 0x00D8 (Size: 0x10, Type: MapProperty)
    std::uint8_t PlayerEnteredHandle[0x48]; // 0x00E8 (Size: 0x48, Type: StructProperty)
    TArray<void*> FreeDeviceCables; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> CableConnectionsByType; // 0x0140 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> PortsInVolume; // 0x0150 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> OriginalGuidToDuplicatedGuidThisFrame; // 0x0160 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0002[0x20]; // 0x0170
    TArray<void*> CablesToBeNotifiedOfVisualPermissions; // 0x0190 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bVisualPermissionsAlreadyEstablished; // 0x01A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUnregisterWithSignificanceSystem; // 0x01A1 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFMDeviceCableManagerComponent, DeviceCableClass) == 200, "Offset mismatch for UFMDeviceCableManagerComponent::DeviceCableClass");
static_assert(offsetof(UFMDeviceCableManagerComponent, StartingCablePoolSize) == 208, "Offset mismatch for UFMDeviceCableManagerComponent::StartingCablePoolSize");
static_assert(offsetof(UFMDeviceCableManagerComponent, CableInteractionType) == 212, "Offset mismatch for UFMDeviceCableManagerComponent::CableInteractionType");
static_assert(offsetof(UFMDeviceCableManagerComponent, ConnectionClasses) == 216, "Offset mismatch for UFMDeviceCableManagerComponent::ConnectionClasses");
static_assert(offsetof(UFMDeviceCableManagerComponent, PlayerEnteredHandle) == 232, "Offset mismatch for UFMDeviceCableManagerComponent::PlayerEnteredHandle");
static_assert(offsetof(UFMDeviceCableManagerComponent, FreeDeviceCables) == 304, "Offset mismatch for UFMDeviceCableManagerComponent::FreeDeviceCables");
static_assert(offsetof(UFMDeviceCableManagerComponent, CableConnectionsByType) == 320, "Offset mismatch for UFMDeviceCableManagerComponent::CableConnectionsByType");
static_assert(offsetof(UFMDeviceCableManagerComponent, PortsInVolume) == 336, "Offset mismatch for UFMDeviceCableManagerComponent::PortsInVolume");
static_assert(offsetof(UFMDeviceCableManagerComponent, OriginalGuidToDuplicatedGuidThisFrame) == 352, "Offset mismatch for UFMDeviceCableManagerComponent::OriginalGuidToDuplicatedGuidThisFrame");
static_assert(offsetof(UFMDeviceCableManagerComponent, CablesToBeNotifiedOfVisualPermissions) == 400, "Offset mismatch for UFMDeviceCableManagerComponent::CablesToBeNotifiedOfVisualPermissions");
static_assert(offsetof(UFMDeviceCableManagerComponent, bVisualPermissionsAlreadyEstablished) == 416, "Offset mismatch for UFMDeviceCableManagerComponent::bVisualPermissionsAlreadyEstablished");
static_assert(offsetof(UFMDeviceCableManagerComponent, bUnregisterWithSignificanceSystem) == 417, "Offset mismatch for UFMDeviceCableManagerComponent::bUnregisterWithSignificanceSystem");

// /Script/FMDeviceCablesRuntime.FMDeviceCableMeshConnection
// Kind: Class; super: FMDeviceCableConnectionBase
class UFMDeviceCableMeshConnection
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint32_t PreviousMeshInstanceHash; // 0x0058 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UFMDeviceCableMeshConnection, PreviousMeshInstanceHash) == 88, "Offset mismatch for UFMDeviceCableMeshConnection::PreviousMeshInstanceHash");

// /Script/FMDeviceCablesRuntime.FMDeviceCableMetaSoundConnection
// Kind: Class; super: FMDeviceCableConnectionBase
class UFMDeviceCableMetaSoundConnection
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t bConnectionActive; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0041
    TArray<void*> BuildingCompositeArtifactFromPorts; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFMDeviceCableMetaSoundConnection, bConnectionActive) == 64, "Offset mismatch for UFMDeviceCableMetaSoundConnection::bConnectionActive");
static_assert(offsetof(UFMDeviceCableMetaSoundConnection, BuildingCompositeArtifactFromPorts) == 72, "Offset mismatch for UFMDeviceCableMetaSoundConnection::BuildingCompositeArtifactFromPorts");

// /Script/FMDeviceCablesRuntime.FMDeviceCableModulatorPortComponent
// Kind: Class; super: FMDeviceCablePortComponent
class UFMDeviceCableModulatorPortComponent
{
public:
    std::uint8_t Pad_0000[0x988]; // 0x0000
    FString AssociatedProperty; // 0x0988 (Size: 0x10, Type: StrProperty)
    TWeakObjectPtr<void> AssociatedObject; // 0x0998 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(UFMDeviceCableModulatorPortComponent, AssociatedProperty) == 2440, "Offset mismatch for UFMDeviceCableModulatorPortComponent::AssociatedProperty");
static_assert(offsetof(UFMDeviceCableModulatorPortComponent, AssociatedObject) == 2456, "Offset mismatch for UFMDeviceCableModulatorPortComponent::AssociatedObject");

// /Script/FMDeviceCablesRuntime.FMDeviceCableNoteConnection
// Kind: Class; super: FMDeviceCableMetaSoundConnection
class UFMDeviceCableNoteConnection
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t bConnectionActive; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0041
    TArray<void*> BuildingCompositeArtifactFromPorts; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFMDeviceCableNoteConnection, bConnectionActive) == 64, "Offset mismatch for UFMDeviceCableNoteConnection::bConnectionActive");
static_assert(offsetof(UFMDeviceCableNoteConnection, BuildingCompositeArtifactFromPorts) == 72, "Offset mismatch for UFMDeviceCableNoteConnection::BuildingCompositeArtifactFromPorts");

// /Script/FMDeviceCablesRuntime.FMDeviceCablePortComponent
// Kind: Class; super: StaticMeshComponent
class UFMDeviceCablePortComponent
{
public:
    std::uint8_t Pad_0000[0x6E8]; // 0x0000
    FMulticastInlineDelegate OnCablePortSizeUpdated; // 0x06E8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnAnimatorCreated; // 0x06F8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnConnected; // 0x0708 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x20]; // 0x0718
    FMulticastInlineDelegate OnConnectedDuringGameplay; // 0x0738 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDisconnected; // 0x0748 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnConnectionStarted; // 0x0758 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnConnectionEnded; // 0x0768 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPortArtifactUpdated; // 0x0778 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnReceiveFloatProviders; // 0x0788 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnDisconnectFloatProvider; // 0x0798 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* DeviceCableManagerClass; // 0x07A8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t OutputStaticMesh[0x20]; // 0x07B0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AudioInStaticMesh[0x20]; // 0x07D0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t NoteInStaticMesh[0x20]; // 0x07F0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t TextureInStaticMesh[0x20]; // 0x0810 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MeshInStaticMesh[0x20]; // 0x0830 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t ScalarInStaticMesh[0x20]; // 0x0850 (Size: 0x20, Type: SoftObjectProperty)
    TMap<void*, void*> CableAnimatorClasses; // 0x0870 (Size: 0x10, Type: MapProperty)
    std::uint8_t PortFlowType; // 0x0880 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PortDataType; // 0x0881 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PortLoadableState; // 0x0882 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AnimationSyncType; // 0x0883 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAllowMultipleConnections; // 0x0884 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowSiblingConnections; // 0x0885 (Size: 0x1, Type: BoolProperty)
    std::uint8_t OverrideAllowMultipleConnections; // 0x0886 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OverrideAllowSiblingConnections; // 0x0887 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHideWhenNotRelevant; // 0x0888 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsPlayerPort; // 0x0889 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsOnPreviewBuildingActor; // 0x088A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x088B
    std::uint8_t EnterVolumeTag[0x4]; // 0x088C (Size: 0x4, Type: NameProperty)
    FName ExitVolumeTag; // 0x0890 (Size: 0x8, Type: NameProperty)
    TArray<void*> ConnectedPorts; // 0x0898 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ServerConnectedPorts; // 0x08A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CurrentConnections; // 0x08B8 (Size: 0x10, Type: ArrayProperty)
    void* ConstantCable; // 0x08C8 (Size: 0x8, Type: ObjectProperty)
    void* DeviceCableManager; // 0x08D0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> OtherPortsOnActor; // 0x08D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PortActivatedState; // 0x08E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ServerPortActivatedState; // 0x08E9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PortSelectableState; // 0x08EA (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x5]; // 0x08EB
    void* DeviceCableAnimator; // 0x08F0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ConnectionGuid[0x10]; // 0x08F8 (Size: 0x10, Type: StructProperty)
    TArray<void*> ConnectedGuids; // 0x0908 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CachedArtifact[0x30]; // 0x0918 (Size: 0x30, Type: StructProperty)
    TArray<void*> PendingConnectionBroadcasts; // 0x0948 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SaveGuid[0x1]; // 0x0958 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFMDeviceCablePortComponent, OnCablePortSizeUpdated) == 1768, "Offset mismatch for UFMDeviceCablePortComponent::OnCablePortSizeUpdated");
static_assert(offsetof(UFMDeviceCablePortComponent, OnAnimatorCreated) == 1784, "Offset mismatch for UFMDeviceCablePortComponent::OnAnimatorCreated");
static_assert(offsetof(UFMDeviceCablePortComponent, OnConnected) == 1800, "Offset mismatch for UFMDeviceCablePortComponent::OnConnected");
static_assert(offsetof(UFMDeviceCablePortComponent, OnConnectedDuringGameplay) == 1848, "Offset mismatch for UFMDeviceCablePortComponent::OnConnectedDuringGameplay");
static_assert(offsetof(UFMDeviceCablePortComponent, OnDisconnected) == 1864, "Offset mismatch for UFMDeviceCablePortComponent::OnDisconnected");
static_assert(offsetof(UFMDeviceCablePortComponent, OnConnectionStarted) == 1880, "Offset mismatch for UFMDeviceCablePortComponent::OnConnectionStarted");
static_assert(offsetof(UFMDeviceCablePortComponent, OnConnectionEnded) == 1896, "Offset mismatch for UFMDeviceCablePortComponent::OnConnectionEnded");
static_assert(offsetof(UFMDeviceCablePortComponent, OnPortArtifactUpdated) == 1912, "Offset mismatch for UFMDeviceCablePortComponent::OnPortArtifactUpdated");
static_assert(offsetof(UFMDeviceCablePortComponent, OnReceiveFloatProviders) == 1928, "Offset mismatch for UFMDeviceCablePortComponent::OnReceiveFloatProviders");
static_assert(offsetof(UFMDeviceCablePortComponent, OnDisconnectFloatProvider) == 1944, "Offset mismatch for UFMDeviceCablePortComponent::OnDisconnectFloatProvider");
static_assert(offsetof(UFMDeviceCablePortComponent, DeviceCableManagerClass) == 1960, "Offset mismatch for UFMDeviceCablePortComponent::DeviceCableManagerClass");
static_assert(offsetof(UFMDeviceCablePortComponent, OutputStaticMesh) == 1968, "Offset mismatch for UFMDeviceCablePortComponent::OutputStaticMesh");
static_assert(offsetof(UFMDeviceCablePortComponent, AudioInStaticMesh) == 2000, "Offset mismatch for UFMDeviceCablePortComponent::AudioInStaticMesh");
static_assert(offsetof(UFMDeviceCablePortComponent, NoteInStaticMesh) == 2032, "Offset mismatch for UFMDeviceCablePortComponent::NoteInStaticMesh");
static_assert(offsetof(UFMDeviceCablePortComponent, TextureInStaticMesh) == 2064, "Offset mismatch for UFMDeviceCablePortComponent::TextureInStaticMesh");
static_assert(offsetof(UFMDeviceCablePortComponent, MeshInStaticMesh) == 2096, "Offset mismatch for UFMDeviceCablePortComponent::MeshInStaticMesh");
static_assert(offsetof(UFMDeviceCablePortComponent, ScalarInStaticMesh) == 2128, "Offset mismatch for UFMDeviceCablePortComponent::ScalarInStaticMesh");
static_assert(offsetof(UFMDeviceCablePortComponent, CableAnimatorClasses) == 2160, "Offset mismatch for UFMDeviceCablePortComponent::CableAnimatorClasses");
static_assert(offsetof(UFMDeviceCablePortComponent, PortFlowType) == 2176, "Offset mismatch for UFMDeviceCablePortComponent::PortFlowType");
static_assert(offsetof(UFMDeviceCablePortComponent, PortDataType) == 2177, "Offset mismatch for UFMDeviceCablePortComponent::PortDataType");
static_assert(offsetof(UFMDeviceCablePortComponent, PortLoadableState) == 2178, "Offset mismatch for UFMDeviceCablePortComponent::PortLoadableState");
static_assert(offsetof(UFMDeviceCablePortComponent, AnimationSyncType) == 2179, "Offset mismatch for UFMDeviceCablePortComponent::AnimationSyncType");
static_assert(offsetof(UFMDeviceCablePortComponent, bAllowMultipleConnections) == 2180, "Offset mismatch for UFMDeviceCablePortComponent::bAllowMultipleConnections");
static_assert(offsetof(UFMDeviceCablePortComponent, bAllowSiblingConnections) == 2181, "Offset mismatch for UFMDeviceCablePortComponent::bAllowSiblingConnections");
static_assert(offsetof(UFMDeviceCablePortComponent, OverrideAllowMultipleConnections) == 2182, "Offset mismatch for UFMDeviceCablePortComponent::OverrideAllowMultipleConnections");
static_assert(offsetof(UFMDeviceCablePortComponent, OverrideAllowSiblingConnections) == 2183, "Offset mismatch for UFMDeviceCablePortComponent::OverrideAllowSiblingConnections");
static_assert(offsetof(UFMDeviceCablePortComponent, bHideWhenNotRelevant) == 2184, "Offset mismatch for UFMDeviceCablePortComponent::bHideWhenNotRelevant");
static_assert(offsetof(UFMDeviceCablePortComponent, bIsPlayerPort) == 2185, "Offset mismatch for UFMDeviceCablePortComponent::bIsPlayerPort");
static_assert(offsetof(UFMDeviceCablePortComponent, bIsOnPreviewBuildingActor) == 2186, "Offset mismatch for UFMDeviceCablePortComponent::bIsOnPreviewBuildingActor");
static_assert(offsetof(UFMDeviceCablePortComponent, EnterVolumeTag) == 2188, "Offset mismatch for UFMDeviceCablePortComponent::EnterVolumeTag");
static_assert(offsetof(UFMDeviceCablePortComponent, ExitVolumeTag) == 2192, "Offset mismatch for UFMDeviceCablePortComponent::ExitVolumeTag");
static_assert(offsetof(UFMDeviceCablePortComponent, ConnectedPorts) == 2200, "Offset mismatch for UFMDeviceCablePortComponent::ConnectedPorts");
static_assert(offsetof(UFMDeviceCablePortComponent, ServerConnectedPorts) == 2216, "Offset mismatch for UFMDeviceCablePortComponent::ServerConnectedPorts");
static_assert(offsetof(UFMDeviceCablePortComponent, CurrentConnections) == 2232, "Offset mismatch for UFMDeviceCablePortComponent::CurrentConnections");
static_assert(offsetof(UFMDeviceCablePortComponent, ConstantCable) == 2248, "Offset mismatch for UFMDeviceCablePortComponent::ConstantCable");
static_assert(offsetof(UFMDeviceCablePortComponent, DeviceCableManager) == 2256, "Offset mismatch for UFMDeviceCablePortComponent::DeviceCableManager");
static_assert(offsetof(UFMDeviceCablePortComponent, OtherPortsOnActor) == 2264, "Offset mismatch for UFMDeviceCablePortComponent::OtherPortsOnActor");
static_assert(offsetof(UFMDeviceCablePortComponent, PortActivatedState) == 2280, "Offset mismatch for UFMDeviceCablePortComponent::PortActivatedState");
static_assert(offsetof(UFMDeviceCablePortComponent, ServerPortActivatedState) == 2281, "Offset mismatch for UFMDeviceCablePortComponent::ServerPortActivatedState");
static_assert(offsetof(UFMDeviceCablePortComponent, PortSelectableState) == 2282, "Offset mismatch for UFMDeviceCablePortComponent::PortSelectableState");
static_assert(offsetof(UFMDeviceCablePortComponent, DeviceCableAnimator) == 2288, "Offset mismatch for UFMDeviceCablePortComponent::DeviceCableAnimator");
static_assert(offsetof(UFMDeviceCablePortComponent, ConnectionGuid) == 2296, "Offset mismatch for UFMDeviceCablePortComponent::ConnectionGuid");
static_assert(offsetof(UFMDeviceCablePortComponent, ConnectedGuids) == 2312, "Offset mismatch for UFMDeviceCablePortComponent::ConnectedGuids");
static_assert(offsetof(UFMDeviceCablePortComponent, CachedArtifact) == 2328, "Offset mismatch for UFMDeviceCablePortComponent::CachedArtifact");
static_assert(offsetof(UFMDeviceCablePortComponent, PendingConnectionBroadcasts) == 2376, "Offset mismatch for UFMDeviceCablePortComponent::PendingConnectionBroadcasts");
static_assert(offsetof(UFMDeviceCablePortComponent, SaveGuid) == 2392, "Offset mismatch for UFMDeviceCablePortComponent::SaveGuid");

// /Script/FMDeviceCablesRuntime.FMDeviceCableSystem
// Kind: Class; super: Actor
class UFMDeviceCableSystem
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t PrimaryActorTick[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bAlwaysRelevant; // 0x0058 (Size: 0x1, Type: BoolProperty)
    // 0x0058 BoolProperty bCallPreReplication (shared storage)
    // 0x0058 BoolProperty bCallPreReplicationForReplay (shared storage)
    // 0x0058 BoolProperty bHidden (shared storage)
    // 0x0058 BoolProperty bNetTemporary (shared storage)
    // 0x0058 BoolProperty bOnlyRelevantToOwner (shared storage)
    // 0x0058 BoolProperty bReplicateMovement (shared storage)
    std::uint8_t bExchangedRoles; // 0x0059 (Size: 0x1, Type: BoolProperty)
    // 0x0059 BoolProperty bForceNetAddressable (shared storage)
    // 0x0059 BoolProperty bNetLoadOnClient (shared storage)
    // 0x0059 BoolProperty bNetUseOwnerRelevancy (shared storage)
    // 0x0059 BoolProperty bRelevantForLevelBounds (shared storage)
    // 0x0059 BoolProperty bRelevantForNetworkReplays (shared storage)
    // 0x0059 BoolProperty bReplayRewindable (shared storage)
    // 0x0059 BoolProperty bTearOff (shared storage)
    std::uint8_t bAllowTickBeforeBeginPlay; // 0x005A (Size: 0x1, Type: BoolProperty)
    // 0x005A BoolProperty bAutoDestroyWhenFinished (shared storage)
    // 0x005A BoolProperty bBlockInput (shared storage)
    // 0x005A BoolProperty bCanBeDamaged (shared storage)
    // 0x005A BoolProperty bCollideWhenPlacing (shared storage)
    // 0x005A BoolProperty bFindCameraComponentWhenViewTarget (shared storage)
    // 0x005A BoolProperty bGenerateOverlapEventsDuringLevelStreaming (shared storage)
    // 0x005A BoolProperty bIgnoresOriginShifting (shared storage)
    std::uint8_t bAllowReceiveTickEventOnDedicatedServer; // 0x005B (Size: 0x1, Type: BoolProperty)
    // 0x005B BoolProperty bCanBeInCluster (shared storage)
    // 0x005B BoolProperty bEnableAutoLODGeneration (shared storage)
    // 0x005B BoolProperty bIsEditorOnlyActor (shared storage)
    // 0x005B BoolProperty bReplicateUsingRegisteredSubObjectList (shared storage)
    // 0x005B BoolProperty bReplicates (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x005C
    std::uint8_t bActorEnableCollision; // 0x005D (Size: 0x1, Type: BoolProperty)
    // 0x005D BoolProperty bActorIsBeingDestroyed (shared storage)
    // 0x005D BoolProperty bAsyncPhysicsTickEnabled (shared storage)
    std::uint8_t UpdateOverlapsMethodDuringLevelStreaming; // 0x005E (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x005F (Size: 0x1, Type: EnumProperty)
    std::uint8_t RemoteRole; // 0x0060 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0061
    float InitialLifeSpan; // 0x0064 (Size: 0x4, Type: FloatProperty)
    float CustomTimeDilation; // 0x0068 (Size: 0x4, Type: FloatProperty)
    std::int32_t RayTracingGroupId; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t AttachmentReplication[0x60]; // 0x0070 (Size: 0x60, Type: StructProperty)
    std::uint8_t ReplicatedMovement[0x88]; // 0x00D0 (Size: 0x88, Type: StructProperty)
    void* Owner; // 0x0158 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t NetDriverName[0x4]; // 0x0160 (Size: 0x4, Type: NameProperty)
    std::uint8_t Role; // 0x0164 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetDormancy; // 0x0165 (Size: 0x1, Type: ByteProperty)
    std::uint8_t SpawnCollisionHandlingMethod; // 0x0166 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoReceiveInput; // 0x0167 (Size: 0x1, Type: ByteProperty)
    std::int32_t InputPriority; // 0x0168 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x016C
    void* InputComponent; // 0x0170 (Size: 0x8, Type: ObjectProperty)
    std::int32_t NetTag; // 0x0178 (Size: 0x4, Type: IntProperty)
    float NetCullDistanceSquared; // 0x017C (Size: 0x4, Type: FloatProperty)
    float NetUpdateFrequency; // 0x0180 (Size: 0x4, Type: FloatProperty)
    float MinNetUpdateFrequency; // 0x0184 (Size: 0x4, Type: FloatProperty)
    float NetPriority; // 0x0188 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PhysicsReplicationMode; // 0x018C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0xB]; // 0x018D
    void* Instigator; // 0x0198 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Children; // 0x01A0 (Size: 0x10, Type: ArrayProperty)
    void* RootComponent; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x8]; // 0x01B8
    void* HLODLayer; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Layers; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TWeakObjectPtr<void> ParentComponent; // 0x01D8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0006[0x10]; // 0x01E0
    TArray<void*> Tags; // 0x01F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnTakeAnyDamage[0x1]; // 0x0200 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakePointDamage[0x1]; // 0x0201 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnTakeRadialDamage[0x1]; // 0x0202 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorBeginOverlap[0x1]; // 0x0203 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorEndOverlap[0x1]; // 0x0204 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnBeginCursorOver[0x1]; // 0x0205 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnEndCursorOver[0x1]; // 0x0206 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnClicked[0x1]; // 0x0207 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnReleased[0x1]; // 0x0208 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchBegin[0x1]; // 0x0209 (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnd[0x1]; // 0x020A (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchEnter[0x1]; // 0x020B (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnInputTouchLeave[0x1]; // 0x020C (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnActorHit[0x1]; // 0x020D (Size: 0x1, Type: MulticastSparseDelegateProperty)
    std::uint8_t OnDestroyed[0x1]; // 0x020E (Size: 0x1, Type: MulticastSparseDelegateProperty)
    FMulticastSparseDelegate OnEndPlay; // 0x020F (Size: 0x10, Type: MulticastSparseDelegateProperty)
    std::uint8_t Pad_0007[0x31]; // 0x021F
    TArray<void*> InstanceComponents; // 0x0250 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BlueprintCreatedComponents; // 0x0260 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFMDeviceCableSystem, PrimaryActorTick) == 40, "Offset mismatch for UFMDeviceCableSystem::PrimaryActorTick");
static_assert(offsetof(UFMDeviceCableSystem, bAlwaysRelevant) == 88, "Offset mismatch for UFMDeviceCableSystem::bAlwaysRelevant");
static_assert(offsetof(UFMDeviceCableSystem, bExchangedRoles) == 89, "Offset mismatch for UFMDeviceCableSystem::bExchangedRoles");
static_assert(offsetof(UFMDeviceCableSystem, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UFMDeviceCableSystem::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UFMDeviceCableSystem, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UFMDeviceCableSystem::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UFMDeviceCableSystem, bActorEnableCollision) == 93, "Offset mismatch for UFMDeviceCableSystem::bActorEnableCollision");
static_assert(offsetof(UFMDeviceCableSystem, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UFMDeviceCableSystem::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UFMDeviceCableSystem, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UFMDeviceCableSystem::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UFMDeviceCableSystem, RemoteRole) == 96, "Offset mismatch for UFMDeviceCableSystem::RemoteRole");
static_assert(offsetof(UFMDeviceCableSystem, InitialLifeSpan) == 100, "Offset mismatch for UFMDeviceCableSystem::InitialLifeSpan");
static_assert(offsetof(UFMDeviceCableSystem, CustomTimeDilation) == 104, "Offset mismatch for UFMDeviceCableSystem::CustomTimeDilation");
static_assert(offsetof(UFMDeviceCableSystem, RayTracingGroupId) == 108, "Offset mismatch for UFMDeviceCableSystem::RayTracingGroupId");
static_assert(offsetof(UFMDeviceCableSystem, AttachmentReplication) == 112, "Offset mismatch for UFMDeviceCableSystem::AttachmentReplication");
static_assert(offsetof(UFMDeviceCableSystem, ReplicatedMovement) == 208, "Offset mismatch for UFMDeviceCableSystem::ReplicatedMovement");
static_assert(offsetof(UFMDeviceCableSystem, Owner) == 344, "Offset mismatch for UFMDeviceCableSystem::Owner");
static_assert(offsetof(UFMDeviceCableSystem, NetDriverName) == 352, "Offset mismatch for UFMDeviceCableSystem::NetDriverName");
static_assert(offsetof(UFMDeviceCableSystem, Role) == 356, "Offset mismatch for UFMDeviceCableSystem::Role");
static_assert(offsetof(UFMDeviceCableSystem, NetDormancy) == 357, "Offset mismatch for UFMDeviceCableSystem::NetDormancy");
static_assert(offsetof(UFMDeviceCableSystem, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UFMDeviceCableSystem::SpawnCollisionHandlingMethod");
static_assert(offsetof(UFMDeviceCableSystem, AutoReceiveInput) == 359, "Offset mismatch for UFMDeviceCableSystem::AutoReceiveInput");
static_assert(offsetof(UFMDeviceCableSystem, InputPriority) == 360, "Offset mismatch for UFMDeviceCableSystem::InputPriority");
static_assert(offsetof(UFMDeviceCableSystem, InputComponent) == 368, "Offset mismatch for UFMDeviceCableSystem::InputComponent");
static_assert(offsetof(UFMDeviceCableSystem, NetTag) == 376, "Offset mismatch for UFMDeviceCableSystem::NetTag");
static_assert(offsetof(UFMDeviceCableSystem, NetCullDistanceSquared) == 380, "Offset mismatch for UFMDeviceCableSystem::NetCullDistanceSquared");
static_assert(offsetof(UFMDeviceCableSystem, NetUpdateFrequency) == 384, "Offset mismatch for UFMDeviceCableSystem::NetUpdateFrequency");
static_assert(offsetof(UFMDeviceCableSystem, MinNetUpdateFrequency) == 388, "Offset mismatch for UFMDeviceCableSystem::MinNetUpdateFrequency");
static_assert(offsetof(UFMDeviceCableSystem, NetPriority) == 392, "Offset mismatch for UFMDeviceCableSystem::NetPriority");
static_assert(offsetof(UFMDeviceCableSystem, PhysicsReplicationMode) == 396, "Offset mismatch for UFMDeviceCableSystem::PhysicsReplicationMode");
static_assert(offsetof(UFMDeviceCableSystem, Instigator) == 408, "Offset mismatch for UFMDeviceCableSystem::Instigator");
static_assert(offsetof(UFMDeviceCableSystem, Children) == 416, "Offset mismatch for UFMDeviceCableSystem::Children");
static_assert(offsetof(UFMDeviceCableSystem, RootComponent) == 432, "Offset mismatch for UFMDeviceCableSystem::RootComponent");
static_assert(offsetof(UFMDeviceCableSystem, HLODLayer) == 448, "Offset mismatch for UFMDeviceCableSystem::HLODLayer");
static_assert(offsetof(UFMDeviceCableSystem, Layers) == 456, "Offset mismatch for UFMDeviceCableSystem::Layers");
static_assert(offsetof(UFMDeviceCableSystem, ParentComponent) == 472, "Offset mismatch for UFMDeviceCableSystem::ParentComponent");
static_assert(offsetof(UFMDeviceCableSystem, Tags) == 496, "Offset mismatch for UFMDeviceCableSystem::Tags");
static_assert(offsetof(UFMDeviceCableSystem, OnTakeAnyDamage) == 512, "Offset mismatch for UFMDeviceCableSystem::OnTakeAnyDamage");
static_assert(offsetof(UFMDeviceCableSystem, OnTakePointDamage) == 513, "Offset mismatch for UFMDeviceCableSystem::OnTakePointDamage");
static_assert(offsetof(UFMDeviceCableSystem, OnTakeRadialDamage) == 514, "Offset mismatch for UFMDeviceCableSystem::OnTakeRadialDamage");
static_assert(offsetof(UFMDeviceCableSystem, OnActorBeginOverlap) == 515, "Offset mismatch for UFMDeviceCableSystem::OnActorBeginOverlap");
static_assert(offsetof(UFMDeviceCableSystem, OnActorEndOverlap) == 516, "Offset mismatch for UFMDeviceCableSystem::OnActorEndOverlap");
static_assert(offsetof(UFMDeviceCableSystem, OnBeginCursorOver) == 517, "Offset mismatch for UFMDeviceCableSystem::OnBeginCursorOver");
static_assert(offsetof(UFMDeviceCableSystem, OnEndCursorOver) == 518, "Offset mismatch for UFMDeviceCableSystem::OnEndCursorOver");
static_assert(offsetof(UFMDeviceCableSystem, OnClicked) == 519, "Offset mismatch for UFMDeviceCableSystem::OnClicked");
static_assert(offsetof(UFMDeviceCableSystem, OnReleased) == 520, "Offset mismatch for UFMDeviceCableSystem::OnReleased");
static_assert(offsetof(UFMDeviceCableSystem, OnInputTouchBegin) == 521, "Offset mismatch for UFMDeviceCableSystem::OnInputTouchBegin");
static_assert(offsetof(UFMDeviceCableSystem, OnInputTouchEnd) == 522, "Offset mismatch for UFMDeviceCableSystem::OnInputTouchEnd");
static_assert(offsetof(UFMDeviceCableSystem, OnInputTouchEnter) == 523, "Offset mismatch for UFMDeviceCableSystem::OnInputTouchEnter");
static_assert(offsetof(UFMDeviceCableSystem, OnInputTouchLeave) == 524, "Offset mismatch for UFMDeviceCableSystem::OnInputTouchLeave");
static_assert(offsetof(UFMDeviceCableSystem, OnActorHit) == 525, "Offset mismatch for UFMDeviceCableSystem::OnActorHit");
static_assert(offsetof(UFMDeviceCableSystem, OnDestroyed) == 526, "Offset mismatch for UFMDeviceCableSystem::OnDestroyed");
static_assert(offsetof(UFMDeviceCableSystem, OnEndPlay) == 527, "Offset mismatch for UFMDeviceCableSystem::OnEndPlay");
static_assert(offsetof(UFMDeviceCableSystem, InstanceComponents) == 592, "Offset mismatch for UFMDeviceCableSystem::InstanceComponents");
static_assert(offsetof(UFMDeviceCableSystem, BlueprintCreatedComponents) == 608, "Offset mismatch for UFMDeviceCableSystem::BlueprintCreatedComponents");

// /Script/FMDeviceCablesRuntime.FMDeviceCableTextureConnection
// Kind: Class; super: FMDeviceCableConnectionBase
class UFMDeviceCableTextureConnection
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t bConnectionActive; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0041
    TArray<void*> BuildingCompositeArtifactFromPorts; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFMDeviceCableTextureConnection, bConnectionActive) == 64, "Offset mismatch for UFMDeviceCableTextureConnection::bConnectionActive");
static_assert(offsetof(UFMDeviceCableTextureConnection, BuildingCompositeArtifactFromPorts) == 72, "Offset mismatch for UFMDeviceCableTextureConnection::BuildingCompositeArtifactFromPorts");

// /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardOrderingComponent
// Kind: Class; super: ActorComponent
class UFMDeviceCableWildcardOrderingComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t InputsShowHideMovementInfo[0xE8]; // 0x00C8 (Size: 0xE8, Type: StructProperty)
    std::uint8_t InOutMovementInfo[0x30]; // 0x01B0 (Size: 0x30, Type: StructProperty)
    std::uint8_t TransitionMovementInfo[0xE8]; // 0x01E0 (Size: 0xE8, Type: StructProperty)
    std::uint8_t CollapseExpandMovementInfo[0xE8]; // 0x02C8 (Size: 0xE8, Type: StructProperty)
    std::uint8_t CollapsedOutputPosition[0x18]; // 0x03B0 (Size: 0x18, Type: StructProperty)
    float VisualChangeTimeoutTime; // 0x03C8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x03CC
    std::uint8_t ClosedMeshTag[0x4]; // 0x03D0 (Size: 0x4, Type: NameProperty)
    std::uint8_t TopMeshTag[0x4]; // 0x03D4 (Size: 0x4, Type: NameProperty)
    std::uint8_t MiddleMeshTag[0x4]; // 0x03D8 (Size: 0x4, Type: NameProperty)
    std::uint8_t BottomMeshTag[0x4]; // 0x03DC (Size: 0x4, Type: NameProperty)
    FName InputPortParentTag; // 0x03E0 (Size: 0x8, Type: NameProperty)
    void* ClosedMesh; // 0x03E8 (Size: 0x8, Type: ObjectProperty)
    void* TopMesh; // 0x03F0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> MiddleMeshes; // 0x03F8 (Size: 0x10, Type: ArrayProperty)
    void* BottomMesh; // 0x0408 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0410
    TArray<void*> InputWildcardPorts; // 0x0418 (Size: 0x10, Type: ArrayProperty)
    void* InputWildcardPortParent; // 0x0428 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> OutputWildcardPorts; // 0x0430 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0003[0x60]; // 0x0440
    TArray<void*> ServerPortStates; // 0x04A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFMDeviceCableWildcardOrderingComponent, InputsShowHideMovementInfo) == 200, "Offset mismatch for UFMDeviceCableWildcardOrderingComponent::InputsShowHideMovementInfo");
static_assert(offsetof(UFMDeviceCableWildcardOrderingComponent, InOutMovementInfo) == 432, "Offset mismatch for UFMDeviceCableWildcardOrderingComponent::InOutMovementInfo");
static_assert(offsetof(UFMDeviceCableWildcardOrderingComponent, TransitionMovementInfo) == 480, "Offset mismatch for UFMDeviceCableWildcardOrderingComponent::TransitionMovementInfo");
static_assert(offsetof(UFMDeviceCableWildcardOrderingComponent, CollapseExpandMovementInfo) == 712, "Offset mismatch for UFMDeviceCableWildcardOrderingComponent::CollapseExpandMovementInfo");
static_assert(offsetof(UFMDeviceCableWildcardOrderingComponent, CollapsedOutputPosition) == 944, "Offset mismatch for UFMDeviceCableWildcardOrderingComponent::CollapsedOutputPosition");
static_assert(offsetof(UFMDeviceCableWildcardOrderingComponent, VisualChangeTimeoutTime) == 968, "Offset mismatch for UFMDeviceCableWildcardOrderingComponent::VisualChangeTimeoutTime");
static_assert(offsetof(UFMDeviceCableWildcardOrderingComponent, ClosedMeshTag) == 976, "Offset mismatch for UFMDeviceCableWildcardOrderingComponent::ClosedMeshTag");
static_assert(offsetof(UFMDeviceCableWildcardOrderingComponent, TopMeshTag) == 980, "Offset mismatch for UFMDeviceCableWildcardOrderingComponent::TopMeshTag");
static_assert(offsetof(UFMDeviceCableWildcardOrderingComponent, MiddleMeshTag) == 984, "Offset mismatch for UFMDeviceCableWildcardOrderingComponent::MiddleMeshTag");
static_assert(offsetof(UFMDeviceCableWildcardOrderingComponent, BottomMeshTag) == 988, "Offset mismatch for UFMDeviceCableWildcardOrderingComponent::BottomMeshTag");
static_assert(offsetof(UFMDeviceCableWildcardOrderingComponent, InputPortParentTag) == 992, "Offset mismatch for UFMDeviceCableWildcardOrderingComponent::InputPortParentTag");
static_assert(offsetof(UFMDeviceCableWildcardOrderingComponent, ClosedMesh) == 1000, "Offset mismatch for UFMDeviceCableWildcardOrderingComponent::ClosedMesh");
static_assert(offsetof(UFMDeviceCableWildcardOrderingComponent, TopMesh) == 1008, "Offset mismatch for UFMDeviceCableWildcardOrderingComponent::TopMesh");
static_assert(offsetof(UFMDeviceCableWildcardOrderingComponent, MiddleMeshes) == 1016, "Offset mismatch for UFMDeviceCableWildcardOrderingComponent::MiddleMeshes");
static_assert(offsetof(UFMDeviceCableWildcardOrderingComponent, BottomMesh) == 1032, "Offset mismatch for UFMDeviceCableWildcardOrderingComponent::BottomMesh");
static_assert(offsetof(UFMDeviceCableWildcardOrderingComponent, InputWildcardPorts) == 1048, "Offset mismatch for UFMDeviceCableWildcardOrderingComponent::InputWildcardPorts");
static_assert(offsetof(UFMDeviceCableWildcardOrderingComponent, InputWildcardPortParent) == 1064, "Offset mismatch for UFMDeviceCableWildcardOrderingComponent::InputWildcardPortParent");
static_assert(offsetof(UFMDeviceCableWildcardOrderingComponent, OutputWildcardPorts) == 1072, "Offset mismatch for UFMDeviceCableWildcardOrderingComponent::OutputWildcardPorts");
static_assert(offsetof(UFMDeviceCableWildcardOrderingComponent, ServerPortStates) == 1184, "Offset mismatch for UFMDeviceCableWildcardOrderingComponent::ServerPortStates");

// /Script/FMDeviceCablesRuntime.FMDeviceCableWildcardPortComponent
// Kind: Class; super: FMDeviceCablePortComponent
class UFMDeviceCableWildcardPortComponent
{
public:
    std::uint8_t Pad_0000[0x988]; // 0x0000
    FMulticastInlineDelegate OnWildcardDataTypeChanged; // 0x0988 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnWildcardPortSlotSetFromSave; // 0x0998 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::int32_t SlotIndex; // 0x09A8 (Size: 0x4, Type: IntProperty)
    std::int32_t SavedSlotIndex; // 0x09AC (Size: 0x4, Type: IntProperty)
    std::uint8_t SavedPortDataType; // 0x09B0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UFMDeviceCableWildcardPortComponent, OnWildcardDataTypeChanged) == 2440, "Offset mismatch for UFMDeviceCableWildcardPortComponent::OnWildcardDataTypeChanged");
static_assert(offsetof(UFMDeviceCableWildcardPortComponent, OnWildcardPortSlotSetFromSave) == 2456, "Offset mismatch for UFMDeviceCableWildcardPortComponent::OnWildcardPortSlotSetFromSave");
static_assert(offsetof(UFMDeviceCableWildcardPortComponent, SlotIndex) == 2472, "Offset mismatch for UFMDeviceCableWildcardPortComponent::SlotIndex");
static_assert(offsetof(UFMDeviceCableWildcardPortComponent, SavedSlotIndex) == 2476, "Offset mismatch for UFMDeviceCableWildcardPortComponent::SavedSlotIndex");
static_assert(offsetof(UFMDeviceCableWildcardPortComponent, SavedPortDataType) == 2480, "Offset mismatch for UFMDeviceCableWildcardPortComponent::SavedPortDataType");

// /Script/FMDeviceCablesRuntime.FMDeviceCablesFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UFMDeviceCablesFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};
