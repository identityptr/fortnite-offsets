/**
 * decamp dumper generated SDK
 * Package: /Script/SparksCoreCosmeticsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SparksCoreCosmeticsRuntime.FortAnimNotifyState_SpawnSparksPropData
// Kind: ScriptStruct; super: none
struct FFortAnimNotifyState_SpawnSparksPropData
{
public:
    TArray<void*> SpawnedInstances; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FFortAnimNotifyState_SpawnSparksPropData, SpawnedInstances) == 0, "Offset mismatch for FFortAnimNotifyState_SpawnSparksPropData::SpawnedInstances");

// /Script/SparksCoreCosmeticsRuntime.NameList
// Kind: ScriptStruct; super: none
struct FNameList
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCoreCosmeticsRuntime.PendingInstrumentIADRequest
// Kind: ScriptStruct; super: none
struct FPendingInstrumentIADRequest
{
public:
    void* DesiredInstrumentDef; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DesiredSparkVariantChoices; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FPendingInstrumentIADRequest, DesiredInstrumentDef) == 0, "Offset mismatch for FPendingInstrumentIADRequest::DesiredInstrumentDef");
static_assert(offsetof(FPendingInstrumentIADRequest, DesiredSparkVariantChoices) == 8, "Offset mismatch for FPendingInstrumentIADRequest::DesiredSparkVariantChoices");

// /Script/SparksCoreCosmeticsRuntime.SongItemDefPrimaryAssetNameMatcher
// Kind: ScriptStruct; super: none
struct FSongItemDefPrimaryAssetNameMatcher
{
public:
    TArray<void*> SongItemDefs; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MatchType; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSongItemDefPrimaryAssetNameMatcher, SongItemDefs) == 0, "Offset mismatch for FSongItemDefPrimaryAssetNameMatcher::SongItemDefs");
static_assert(offsetof(FSongItemDefPrimaryAssetNameMatcher, MatchType) == 16, "Offset mismatch for FSongItemDefPrimaryAssetNameMatcher::MatchType");

// /Script/SparksCoreCosmeticsRuntime.SparksAnimNotifyDataRegistryEntry
// Kind: ScriptStruct; super: none
struct FSparksAnimNotifyDataRegistryEntry
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Data[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSparksAnimNotifyDataRegistryEntry, Data) == 8, "Offset mismatch for FSparksAnimNotifyDataRegistryEntry::Data");

// /Script/SparksCoreCosmeticsRuntime.SparksCosmeticLoadoutData
// Kind: ScriptStruct; super: none
struct FSparksCosmeticLoadoutData
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    TArray<void*> JamSongChoices; // 0x0090 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSparksCosmeticLoadoutData, JamSongChoices) == 144, "Offset mismatch for FSparksCosmeticLoadoutData::JamSongChoices");

// /Script/SparksCoreCosmeticsRuntime.SparksInstrumentPreviewPartPlacement
// Kind: ScriptStruct; super: none
struct FSparksInstrumentPreviewPartPlacement
{
public:
    std::uint8_t Location[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    float Scale; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSparksInstrumentPreviewPartPlacement, Location) == 0, "Offset mismatch for FSparksInstrumentPreviewPartPlacement::Location");
static_assert(offsetof(FSparksInstrumentPreviewPartPlacement, Rotation) == 24, "Offset mismatch for FSparksInstrumentPreviewPartPlacement::Rotation");
static_assert(offsetof(FSparksInstrumentPreviewPartPlacement, Scale) == 48, "Offset mismatch for FSparksInstrumentPreviewPartPlacement::Scale");

// /Script/SparksCoreCosmeticsRuntime.SparksInstrumentPreviewSetup
// Kind: ScriptStruct; super: none
struct FSparksInstrumentPreviewSetup
{
public:
    std::uint8_t Main[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t LeftHand[0x38]; // 0x0038 (Size: 0x38, Type: StructProperty)
    std::uint8_t Auxiliary[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSparksInstrumentPreviewSetup, Main) == 0, "Offset mismatch for FSparksInstrumentPreviewSetup::Main");
static_assert(offsetof(FSparksInstrumentPreviewSetup, LeftHand) == 56, "Offset mismatch for FSparksInstrumentPreviewSetup::LeftHand");
static_assert(offsetof(FSparksInstrumentPreviewSetup, Auxiliary) == 112, "Offset mismatch for FSparksInstrumentPreviewSetup::Auxiliary");

// /Script/SparksCoreCosmeticsRuntime.SparksPickableSongPartTargetData
// Kind: ScriptStruct; super: GameplayAbilityTargetData
struct FSparksPickableSongPartTargetData
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t SongShortName[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t PartLoopType; // 0x000C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSparksPickableSongPartTargetData, SongShortName) == 8, "Offset mismatch for FSparksPickableSongPartTargetData::SongShortName");
static_assert(offsetof(FSparksPickableSongPartTargetData, PartLoopType) == 12, "Offset mismatch for FSparksPickableSongPartTargetData::PartLoopType");

// /Script/SparksCoreCosmeticsRuntime.SpawnedSparksPropDataInstance
// Kind: ScriptStruct; super: none
struct FSpawnedSparksPropDataInstance
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* NiagaraComponent; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::int32_t PropId; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t InstrumentType; // 0x0014 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSpawnedSparksPropDataInstance, NiagaraComponent) == 8, "Offset mismatch for FSpawnedSparksPropDataInstance::NiagaraComponent");
static_assert(offsetof(FSpawnedSparksPropDataInstance, PropId) == 16, "Offset mismatch for FSpawnedSparksPropDataInstance::PropId");
static_assert(offsetof(FSpawnedSparksPropDataInstance, InstrumentType) == 20, "Offset mismatch for FSpawnedSparksPropDataInstance::InstrumentType");

// /Script/SparksCoreCosmeticsRuntime.FortAnimNotifyState_SpawnSparksProp
// Kind: Class; super: FortAnimNotifyState_SpawnProp
class UFortAnimNotifyState_SpawnSparksProp
{
public:
    std::uint8_t Pad_0000[0x1F0]; // 0x0000
    std::uint8_t InstrumentType; // 0x01F0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ShouldUseLeftHandMesh; // 0x01F1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t ShouldUseAuxiliaryMesh; // 0x01F2 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAnimNotifyState_SpawnSparksProp, InstrumentType) == 496, "Offset mismatch for UFortAnimNotifyState_SpawnSparksProp::InstrumentType");
static_assert(offsetof(UFortAnimNotifyState_SpawnSparksProp, ShouldUseLeftHandMesh) == 497, "Offset mismatch for UFortAnimNotifyState_SpawnSparksProp::ShouldUseLeftHandMesh");
static_assert(offsetof(UFortAnimNotifyState_SpawnSparksProp, ShouldUseAuxiliaryMesh) == 498, "Offset mismatch for UFortAnimNotifyState_SpawnSparksProp::ShouldUseAuxiliaryMesh");

// /Script/SparksCoreCosmeticsRuntime.FortAthenaBTService_PlaySparksAura
// Kind: Class; super: BTService
class UFortAthenaBTService_PlaySparksAura
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t SparksAuraPrimaryAssetId[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortAthenaBTService_PlaySparksAura, SparksAuraPrimaryAssetId) == 112, "Offset mismatch for UFortAthenaBTService_PlaySparksAura::SparksAuraPrimaryAssetId");

// /Script/SparksCoreCosmeticsRuntime.FortAthenaMutator_JamEmote
// Kind: Class; super: FortAthenaMutator
class UFortAthenaMutator_JamEmote
{
public:
    std::uint8_t Pad_0000[0x2B0]; // 0x0000
    std::uint8_t bMutatesGameMode; // 0x02B0 (Size: 0x1, Type: BoolProperty)
    // 0x02B0 BoolProperty bMutatesGameState (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x02B1
    void* CachedGameMode; // 0x02B8 (Size: 0x8, Type: ObjectProperty)
    void* CachedGameState; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InitializedPlayerControllers[0x14]; // 0x02C8 (Size: 0x14, Type: SetProperty)
    std::uint8_t OverridePriority; // 0x02DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOnlyRunOnGameThread; // 0x02DD (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortAthenaMutator_JamEmote, bMutatesGameMode) == 688, "Offset mismatch for UFortAthenaMutator_JamEmote::bMutatesGameMode");
static_assert(offsetof(UFortAthenaMutator_JamEmote, CachedGameMode) == 696, "Offset mismatch for UFortAthenaMutator_JamEmote::CachedGameMode");
static_assert(offsetof(UFortAthenaMutator_JamEmote, CachedGameState) == 704, "Offset mismatch for UFortAthenaMutator_JamEmote::CachedGameState");
static_assert(offsetof(UFortAthenaMutator_JamEmote, InitializedPlayerControllers) == 712, "Offset mismatch for UFortAthenaMutator_JamEmote::InitializedPlayerControllers");
static_assert(offsetof(UFortAthenaMutator_JamEmote, OverridePriority) == 732, "Offset mismatch for UFortAthenaMutator_JamEmote::OverridePriority");
static_assert(offsetof(UFortAthenaMutator_JamEmote, bOnlyRunOnGameThread) == 733, "Offset mismatch for UFortAthenaMutator_JamEmote::bOnlyRunOnGameThread");

// /Script/SparksCoreCosmeticsRuntime.FortPawnComponent_SparksAuraRelay
// Kind: Class; super: FortPawnComponent
class UFortPawnComponent_SparksAuraRelay
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t bAuraEnabled; // 0x00C8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortPawnComponent_SparksAuraRelay, bAuraEnabled) == 200, "Offset mismatch for UFortPawnComponent_SparksAuraRelay::bAuraEnabled");

// /Script/SparksCoreCosmeticsRuntime.SongPartExecutionExtender
// Kind: Class; super: Interface
class USongPartExecutionExtender
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCoreCosmeticsRuntime.SparksAccountItemDefinition
// Kind: Class; super: AthenaCosmeticItemDefinition
class USparksAccountItemDefinition
{
public:
    std::uint8_t Pad_0000[0x3F8]; // 0x0000
    std::uint8_t SubType; // 0x03F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x03F9
    std::uint8_t Slot[0x1]; // 0x03FC (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USparksAccountItemDefinition, SubType) == 1016, "Offset mismatch for USparksAccountItemDefinition::SubType");
static_assert(offsetof(USparksAccountItemDefinition, Slot) == 1020, "Offset mismatch for USparksAccountItemDefinition::Slot");

// /Script/SparksCoreCosmeticsRuntime.SparksAnimNotifyDataRegistry
// Kind: Class; super: ActorComponent
class USparksAnimNotifyDataRegistry
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> RegisteredData; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USparksAnimNotifyDataRegistry, RegisteredData) == 192, "Offset mismatch for USparksAnimNotifyDataRegistry::RegisteredData");

// /Script/SparksCoreCosmeticsRuntime.SparksAuraComponent
// Kind: Class; super: PawnComponent
class USparksAuraComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnAuraItemChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x8]; // 0x00D0
    void* ActiveAura; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t DefaultAuraItemDefID[0x8]; // 0x00E0 (Size: 0x8, Type: StructProperty)
    void* AuraItemDef; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    void* AuraItemDefOverride; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksAuraComponent, OnAuraItemChanged) == 192, "Offset mismatch for USparksAuraComponent::OnAuraItemChanged");
static_assert(offsetof(USparksAuraComponent, ActiveAura) == 216, "Offset mismatch for USparksAuraComponent::ActiveAura");
static_assert(offsetof(USparksAuraComponent, DefaultAuraItemDefID) == 224, "Offset mismatch for USparksAuraComponent::DefaultAuraItemDefID");
static_assert(offsetof(USparksAuraComponent, AuraItemDef) == 232, "Offset mismatch for USparksAuraComponent::AuraItemDef");
static_assert(offsetof(USparksAuraComponent, AuraItemDefOverride) == 240, "Offset mismatch for USparksAuraComponent::AuraItemDefOverride");

// /Script/SparksCoreCosmeticsRuntime.SparksAuraItemDefinition
// Kind: Class; super: SparksAccountItemDefinition
class USparksAuraItemDefinition
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    std::uint8_t StartSystem[0x20]; // 0x0400 (Size: 0x20, Type: SoftObjectProperty)
    FName StartSystemAttachPoint; // 0x0420 (Size: 0x8, Type: NameProperty)
    std::uint8_t SustainSystem[0x20]; // 0x0428 (Size: 0x20, Type: SoftObjectProperty)
    FName SustainSystemAttachPoint; // 0x0448 (Size: 0x8, Type: NameProperty)
    std::uint8_t StopSystem[0x20]; // 0x0450 (Size: 0x20, Type: SoftObjectProperty)
    FName StopSystemAttachPoint; // 0x0470 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(USparksAuraItemDefinition, StartSystem) == 1024, "Offset mismatch for USparksAuraItemDefinition::StartSystem");
static_assert(offsetof(USparksAuraItemDefinition, StartSystemAttachPoint) == 1056, "Offset mismatch for USparksAuraItemDefinition::StartSystemAttachPoint");
static_assert(offsetof(USparksAuraItemDefinition, SustainSystem) == 1064, "Offset mismatch for USparksAuraItemDefinition::SustainSystem");
static_assert(offsetof(USparksAuraItemDefinition, SustainSystemAttachPoint) == 1096, "Offset mismatch for USparksAuraItemDefinition::SustainSystemAttachPoint");
static_assert(offsetof(USparksAuraItemDefinition, StopSystem) == 1104, "Offset mismatch for USparksAuraItemDefinition::StopSystem");
static_assert(offsetof(USparksAuraItemDefinition, StopSystemAttachPoint) == 1136, "Offset mismatch for USparksAuraItemDefinition::StopSystemAttachPoint");

// /Script/SparksCoreCosmeticsRuntime.SparksBassItemDefinition
// Kind: Class; super: SparksInstrumentItemDefBase
class USparksBassItemDefinition
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    std::uint8_t Mesh[0x20]; // 0x0400 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LeftHandMesh[0x20]; // 0x0420 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxiliaryMesh[0x20]; // 0x0440 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Material[0x20]; // 0x0460 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LeftHandMaterial[0x20]; // 0x0480 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxiliaryMaterial[0x20]; // 0x04A0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxiliaryMaterial2[0x20]; // 0x04C0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MainFXSystem[0x20]; // 0x04E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LHFXSystem[0x20]; // 0x0500 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxFXSystem[0x20]; // 0x0520 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MainFXSocket[0x4]; // 0x0540 (Size: 0x4, Type: NameProperty)
    std::uint8_t LHFXSocket[0x4]; // 0x0544 (Size: 0x4, Type: NameProperty)
    FName AuxFXSocket; // 0x0548 (Size: 0x8, Type: NameProperty)
    std::uint8_t CameraFramingBounds[0x20]; // 0x0550 (Size: 0x20, Type: StructProperty)
    std::uint8_t BoneSetsToHide[0x1]; // 0x0570 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USparksBassItemDefinition, Mesh) == 1024, "Offset mismatch for USparksBassItemDefinition::Mesh");
static_assert(offsetof(USparksBassItemDefinition, LeftHandMesh) == 1056, "Offset mismatch for USparksBassItemDefinition::LeftHandMesh");
static_assert(offsetof(USparksBassItemDefinition, AuxiliaryMesh) == 1088, "Offset mismatch for USparksBassItemDefinition::AuxiliaryMesh");
static_assert(offsetof(USparksBassItemDefinition, Material) == 1120, "Offset mismatch for USparksBassItemDefinition::Material");
static_assert(offsetof(USparksBassItemDefinition, LeftHandMaterial) == 1152, "Offset mismatch for USparksBassItemDefinition::LeftHandMaterial");
static_assert(offsetof(USparksBassItemDefinition, AuxiliaryMaterial) == 1184, "Offset mismatch for USparksBassItemDefinition::AuxiliaryMaterial");
static_assert(offsetof(USparksBassItemDefinition, AuxiliaryMaterial2) == 1216, "Offset mismatch for USparksBassItemDefinition::AuxiliaryMaterial2");
static_assert(offsetof(USparksBassItemDefinition, MainFXSystem) == 1248, "Offset mismatch for USparksBassItemDefinition::MainFXSystem");
static_assert(offsetof(USparksBassItemDefinition, LHFXSystem) == 1280, "Offset mismatch for USparksBassItemDefinition::LHFXSystem");
static_assert(offsetof(USparksBassItemDefinition, AuxFXSystem) == 1312, "Offset mismatch for USparksBassItemDefinition::AuxFXSystem");
static_assert(offsetof(USparksBassItemDefinition, MainFXSocket) == 1344, "Offset mismatch for USparksBassItemDefinition::MainFXSocket");
static_assert(offsetof(USparksBassItemDefinition, LHFXSocket) == 1348, "Offset mismatch for USparksBassItemDefinition::LHFXSocket");
static_assert(offsetof(USparksBassItemDefinition, AuxFXSocket) == 1352, "Offset mismatch for USparksBassItemDefinition::AuxFXSocket");
static_assert(offsetof(USparksBassItemDefinition, CameraFramingBounds) == 1360, "Offset mismatch for USparksBassItemDefinition::CameraFramingBounds");
static_assert(offsetof(USparksBassItemDefinition, BoneSetsToHide) == 1392, "Offset mismatch for USparksBassItemDefinition::BoneSetsToHide");

// /Script/SparksCoreCosmeticsRuntime.SparksBassSpotlightDefinition
// Kind: Class; super: SparksSpotlightAnimDefinition
class USparksBassSpotlightDefinition
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    std::uint8_t SpotlightSequence[0x20]; // 0x0400 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t InstrumentType; // 0x0420 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USparksBassSpotlightDefinition, SpotlightSequence) == 1024, "Offset mismatch for USparksBassSpotlightDefinition::SpotlightSequence");
static_assert(offsetof(USparksBassSpotlightDefinition, InstrumentType) == 1056, "Offset mismatch for USparksBassSpotlightDefinition::InstrumentType");

// /Script/SparksCoreCosmeticsRuntime.SparksControllerComponent_JamTrackLoadout
// Kind: Class; super: PawnComponent
class USparksControllerComponent_JamTrackLoadout
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> EquippedJamSongs; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USparksControllerComponent_JamTrackLoadout, EquippedJamSongs) == 192, "Offset mismatch for USparksControllerComponent_JamTrackLoadout::EquippedJamSongs");

// /Script/SparksCoreCosmeticsRuntime.SparksCosmeticCatalog
// Kind: Class; super: GameStateComponent
class USparksCosmeticCatalog
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bDefsAreInitialized; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    TMap<void*, void*> ItemDefinitionMap; // 0x00C8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> AssetIDMap; // 0x00D8 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(USparksCosmeticCatalog, bDefsAreInitialized) == 192, "Offset mismatch for USparksCosmeticCatalog::bDefsAreInitialized");
static_assert(offsetof(USparksCosmeticCatalog, ItemDefinitionMap) == 200, "Offset mismatch for USparksCosmeticCatalog::ItemDefinitionMap");
static_assert(offsetof(USparksCosmeticCatalog, AssetIDMap) == 216, "Offset mismatch for USparksCosmeticCatalog::AssetIDMap");

// /Script/SparksCoreCosmeticsRuntime.SparksCosmeticComponent
// Kind: Class; super: PawnComponent
class USparksCosmeticComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    FMulticastInlineDelegate CosmeticItemChanged; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x18]; // 0x00D8
    FMulticastInlineDelegate CosmeticChoiceChanged; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnLoadoutFilled; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t bIsLoadoutFilled; // 0x0110 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0111
    std::uint8_t CurrentLoadout[0xA0]; // 0x0118 (Size: 0xA0, Type: StructProperty)
    TMap<void*, void*> DefaultInstrumentDefIDs; // 0x01B8 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> InstrumentDefs; // 0x01C8 (Size: 0x10, Type: MapProperty)
    std::uint8_t Pad_0003[0xA0]; // 0x01D8
    TMap<void*, void*> PendingInstrumentIADRequests; // 0x0278 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(USparksCosmeticComponent, CosmeticItemChanged) == 200, "Offset mismatch for USparksCosmeticComponent::CosmeticItemChanged");
static_assert(offsetof(USparksCosmeticComponent, CosmeticChoiceChanged) == 240, "Offset mismatch for USparksCosmeticComponent::CosmeticChoiceChanged");
static_assert(offsetof(USparksCosmeticComponent, OnLoadoutFilled) == 256, "Offset mismatch for USparksCosmeticComponent::OnLoadoutFilled");
static_assert(offsetof(USparksCosmeticComponent, bIsLoadoutFilled) == 272, "Offset mismatch for USparksCosmeticComponent::bIsLoadoutFilled");
static_assert(offsetof(USparksCosmeticComponent, CurrentLoadout) == 280, "Offset mismatch for USparksCosmeticComponent::CurrentLoadout");
static_assert(offsetof(USparksCosmeticComponent, DefaultInstrumentDefIDs) == 440, "Offset mismatch for USparksCosmeticComponent::DefaultInstrumentDefIDs");
static_assert(offsetof(USparksCosmeticComponent, InstrumentDefs) == 456, "Offset mismatch for USparksCosmeticComponent::InstrumentDefs");
static_assert(offsetof(USparksCosmeticComponent, PendingInstrumentIADRequests) == 632, "Offset mismatch for USparksCosmeticComponent::PendingInstrumentIADRequests");

// /Script/SparksCoreCosmeticsRuntime.SparksCosmeticOverrides
// Kind: Class; super: GameStateComponent
class USparksCosmeticOverrides
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bPreloadInstrumentAssetsOnStartup; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    std::uint8_t PawnType[0x20]; // 0x00C8 (Size: 0x20, Type: SoftClassProperty)
    void* InstrumenItemDefOverrides; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x20]; // 0x00F0
    void* IADInstrumentPlaceholderOverrides; // 0x0110 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksCosmeticOverrides, bPreloadInstrumentAssetsOnStartup) == 192, "Offset mismatch for USparksCosmeticOverrides::bPreloadInstrumentAssetsOnStartup");
static_assert(offsetof(USparksCosmeticOverrides, PawnType) == 200, "Offset mismatch for USparksCosmeticOverrides::PawnType");
static_assert(offsetof(USparksCosmeticOverrides, InstrumenItemDefOverrides) == 232, "Offset mismatch for USparksCosmeticOverrides::InstrumenItemDefOverrides");
static_assert(offsetof(USparksCosmeticOverrides, IADInstrumentPlaceholderOverrides) == 272, "Offset mismatch for USparksCosmeticOverrides::IADInstrumentPlaceholderOverrides");

// /Script/SparksCoreCosmeticsRuntime.SparksCosmeticsSettings
// Kind: Class; super: PrimaryDataAsset
class USparksCosmeticsSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SparksCosmeticPreviewActorClass[0x20]; // 0x0028 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t SparksPreviewCameraActorClass[0x20]; // 0x0048 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t SparksAuraPreviewActorClass[0x20]; // 0x0068 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t SparksAuraDisplayActorClass[0x20]; // 0x0088 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t SparksSongPreviewActorClass[0x20]; // 0x00A8 (Size: 0x20, Type: SoftClassProperty)
    std::uint8_t SparksSongPrefabActorClass[0x20]; // 0x00C8 (Size: 0x20, Type: SoftClassProperty)
    void* SparksLoadoutSchema; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t GuitarCameraFramingBounds[0x20]; // 0x00F0 (Size: 0x20, Type: StructProperty)
    std::uint8_t BassCameraFramingBounds[0x20]; // 0x0110 (Size: 0x20, Type: StructProperty)
    std::uint8_t DrumCameraFramingBounds[0x20]; // 0x0130 (Size: 0x20, Type: StructProperty)
    std::uint8_t MicCameraFramingBounds[0x20]; // 0x0150 (Size: 0x20, Type: StructProperty)
    TMap<void*, void*> InstrumentPreviewSetups; // 0x0170 (Size: 0x10, Type: MapProperty)
    void* LUT_VolumeTexture; // 0x0180 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksCosmeticsSettings, SparksCosmeticPreviewActorClass) == 40, "Offset mismatch for USparksCosmeticsSettings::SparksCosmeticPreviewActorClass");
static_assert(offsetof(USparksCosmeticsSettings, SparksPreviewCameraActorClass) == 72, "Offset mismatch for USparksCosmeticsSettings::SparksPreviewCameraActorClass");
static_assert(offsetof(USparksCosmeticsSettings, SparksAuraPreviewActorClass) == 104, "Offset mismatch for USparksCosmeticsSettings::SparksAuraPreviewActorClass");
static_assert(offsetof(USparksCosmeticsSettings, SparksAuraDisplayActorClass) == 136, "Offset mismatch for USparksCosmeticsSettings::SparksAuraDisplayActorClass");
static_assert(offsetof(USparksCosmeticsSettings, SparksSongPreviewActorClass) == 168, "Offset mismatch for USparksCosmeticsSettings::SparksSongPreviewActorClass");
static_assert(offsetof(USparksCosmeticsSettings, SparksSongPrefabActorClass) == 200, "Offset mismatch for USparksCosmeticsSettings::SparksSongPrefabActorClass");
static_assert(offsetof(USparksCosmeticsSettings, SparksLoadoutSchema) == 232, "Offset mismatch for USparksCosmeticsSettings::SparksLoadoutSchema");
static_assert(offsetof(USparksCosmeticsSettings, GuitarCameraFramingBounds) == 240, "Offset mismatch for USparksCosmeticsSettings::GuitarCameraFramingBounds");
static_assert(offsetof(USparksCosmeticsSettings, BassCameraFramingBounds) == 272, "Offset mismatch for USparksCosmeticsSettings::BassCameraFramingBounds");
static_assert(offsetof(USparksCosmeticsSettings, DrumCameraFramingBounds) == 304, "Offset mismatch for USparksCosmeticsSettings::DrumCameraFramingBounds");
static_assert(offsetof(USparksCosmeticsSettings, MicCameraFramingBounds) == 336, "Offset mismatch for USparksCosmeticsSettings::MicCameraFramingBounds");
static_assert(offsetof(USparksCosmeticsSettings, InstrumentPreviewSetups) == 368, "Offset mismatch for USparksCosmeticsSettings::InstrumentPreviewSetups");
static_assert(offsetof(USparksCosmeticsSettings, LUT_VolumeTexture) == 384, "Offset mismatch for USparksCosmeticsSettings::LUT_VolumeTexture");

// /Script/SparksCoreCosmeticsRuntime.SparksCosmetics_BPFL
// Kind: Class; super: BlueprintFunctionLibrary
class USparksCosmetics_BPFL
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCoreCosmeticsRuntime.SparksDrumItemDefinition
// Kind: Class; super: SparksInstrumentItemDefBase
class USparksDrumItemDefinition
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    std::uint8_t Mesh[0x20]; // 0x0400 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LeftHandMesh[0x20]; // 0x0420 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxiliaryMesh[0x20]; // 0x0440 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Material[0x20]; // 0x0460 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LeftHandMaterial[0x20]; // 0x0480 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxiliaryMaterial[0x20]; // 0x04A0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxiliaryMaterial2[0x20]; // 0x04C0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MainFXSystem[0x20]; // 0x04E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LHFXSystem[0x20]; // 0x0500 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxFXSystem[0x20]; // 0x0520 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MainFXSocket[0x4]; // 0x0540 (Size: 0x4, Type: NameProperty)
    std::uint8_t LHFXSocket[0x4]; // 0x0544 (Size: 0x4, Type: NameProperty)
    FName AuxFXSocket; // 0x0548 (Size: 0x8, Type: NameProperty)
    std::uint8_t CameraFramingBounds[0x20]; // 0x0550 (Size: 0x20, Type: StructProperty)
    std::uint8_t BoneSetsToHide[0x1]; // 0x0570 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USparksDrumItemDefinition, Mesh) == 1024, "Offset mismatch for USparksDrumItemDefinition::Mesh");
static_assert(offsetof(USparksDrumItemDefinition, LeftHandMesh) == 1056, "Offset mismatch for USparksDrumItemDefinition::LeftHandMesh");
static_assert(offsetof(USparksDrumItemDefinition, AuxiliaryMesh) == 1088, "Offset mismatch for USparksDrumItemDefinition::AuxiliaryMesh");
static_assert(offsetof(USparksDrumItemDefinition, Material) == 1120, "Offset mismatch for USparksDrumItemDefinition::Material");
static_assert(offsetof(USparksDrumItemDefinition, LeftHandMaterial) == 1152, "Offset mismatch for USparksDrumItemDefinition::LeftHandMaterial");
static_assert(offsetof(USparksDrumItemDefinition, AuxiliaryMaterial) == 1184, "Offset mismatch for USparksDrumItemDefinition::AuxiliaryMaterial");
static_assert(offsetof(USparksDrumItemDefinition, AuxiliaryMaterial2) == 1216, "Offset mismatch for USparksDrumItemDefinition::AuxiliaryMaterial2");
static_assert(offsetof(USparksDrumItemDefinition, MainFXSystem) == 1248, "Offset mismatch for USparksDrumItemDefinition::MainFXSystem");
static_assert(offsetof(USparksDrumItemDefinition, LHFXSystem) == 1280, "Offset mismatch for USparksDrumItemDefinition::LHFXSystem");
static_assert(offsetof(USparksDrumItemDefinition, AuxFXSystem) == 1312, "Offset mismatch for USparksDrumItemDefinition::AuxFXSystem");
static_assert(offsetof(USparksDrumItemDefinition, MainFXSocket) == 1344, "Offset mismatch for USparksDrumItemDefinition::MainFXSocket");
static_assert(offsetof(USparksDrumItemDefinition, LHFXSocket) == 1348, "Offset mismatch for USparksDrumItemDefinition::LHFXSocket");
static_assert(offsetof(USparksDrumItemDefinition, AuxFXSocket) == 1352, "Offset mismatch for USparksDrumItemDefinition::AuxFXSocket");
static_assert(offsetof(USparksDrumItemDefinition, CameraFramingBounds) == 1360, "Offset mismatch for USparksDrumItemDefinition::CameraFramingBounds");
static_assert(offsetof(USparksDrumItemDefinition, BoneSetsToHide) == 1392, "Offset mismatch for USparksDrumItemDefinition::BoneSetsToHide");

// /Script/SparksCoreCosmeticsRuntime.SparksDrumSpotlightDefinition
// Kind: Class; super: SparksSpotlightAnimDefinition
class USparksDrumSpotlightDefinition
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    std::uint8_t SpotlightSequence[0x20]; // 0x0400 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t InstrumentType; // 0x0420 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USparksDrumSpotlightDefinition, SpotlightSequence) == 1024, "Offset mismatch for USparksDrumSpotlightDefinition::SpotlightSequence");
static_assert(offsetof(USparksDrumSpotlightDefinition, InstrumentType) == 1056, "Offset mismatch for USparksDrumSpotlightDefinition::InstrumentType");

// /Script/SparksCoreCosmeticsRuntime.SparksGuitarItemDefinition
// Kind: Class; super: SparksInstrumentItemDefBase
class USparksGuitarItemDefinition
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    std::uint8_t Mesh[0x20]; // 0x0400 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LeftHandMesh[0x20]; // 0x0420 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxiliaryMesh[0x20]; // 0x0440 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Material[0x20]; // 0x0460 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LeftHandMaterial[0x20]; // 0x0480 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxiliaryMaterial[0x20]; // 0x04A0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxiliaryMaterial2[0x20]; // 0x04C0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MainFXSystem[0x20]; // 0x04E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LHFXSystem[0x20]; // 0x0500 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxFXSystem[0x20]; // 0x0520 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MainFXSocket[0x4]; // 0x0540 (Size: 0x4, Type: NameProperty)
    std::uint8_t LHFXSocket[0x4]; // 0x0544 (Size: 0x4, Type: NameProperty)
    FName AuxFXSocket; // 0x0548 (Size: 0x8, Type: NameProperty)
    std::uint8_t CameraFramingBounds[0x20]; // 0x0550 (Size: 0x20, Type: StructProperty)
    std::uint8_t BoneSetsToHide[0x1]; // 0x0570 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USparksGuitarItemDefinition, Mesh) == 1024, "Offset mismatch for USparksGuitarItemDefinition::Mesh");
static_assert(offsetof(USparksGuitarItemDefinition, LeftHandMesh) == 1056, "Offset mismatch for USparksGuitarItemDefinition::LeftHandMesh");
static_assert(offsetof(USparksGuitarItemDefinition, AuxiliaryMesh) == 1088, "Offset mismatch for USparksGuitarItemDefinition::AuxiliaryMesh");
static_assert(offsetof(USparksGuitarItemDefinition, Material) == 1120, "Offset mismatch for USparksGuitarItemDefinition::Material");
static_assert(offsetof(USparksGuitarItemDefinition, LeftHandMaterial) == 1152, "Offset mismatch for USparksGuitarItemDefinition::LeftHandMaterial");
static_assert(offsetof(USparksGuitarItemDefinition, AuxiliaryMaterial) == 1184, "Offset mismatch for USparksGuitarItemDefinition::AuxiliaryMaterial");
static_assert(offsetof(USparksGuitarItemDefinition, AuxiliaryMaterial2) == 1216, "Offset mismatch for USparksGuitarItemDefinition::AuxiliaryMaterial2");
static_assert(offsetof(USparksGuitarItemDefinition, MainFXSystem) == 1248, "Offset mismatch for USparksGuitarItemDefinition::MainFXSystem");
static_assert(offsetof(USparksGuitarItemDefinition, LHFXSystem) == 1280, "Offset mismatch for USparksGuitarItemDefinition::LHFXSystem");
static_assert(offsetof(USparksGuitarItemDefinition, AuxFXSystem) == 1312, "Offset mismatch for USparksGuitarItemDefinition::AuxFXSystem");
static_assert(offsetof(USparksGuitarItemDefinition, MainFXSocket) == 1344, "Offset mismatch for USparksGuitarItemDefinition::MainFXSocket");
static_assert(offsetof(USparksGuitarItemDefinition, LHFXSocket) == 1348, "Offset mismatch for USparksGuitarItemDefinition::LHFXSocket");
static_assert(offsetof(USparksGuitarItemDefinition, AuxFXSocket) == 1352, "Offset mismatch for USparksGuitarItemDefinition::AuxFXSocket");
static_assert(offsetof(USparksGuitarItemDefinition, CameraFramingBounds) == 1360, "Offset mismatch for USparksGuitarItemDefinition::CameraFramingBounds");
static_assert(offsetof(USparksGuitarItemDefinition, BoneSetsToHide) == 1392, "Offset mismatch for USparksGuitarItemDefinition::BoneSetsToHide");

// /Script/SparksCoreCosmeticsRuntime.SparksGuitarSpotlightDefinition
// Kind: Class; super: SparksSpotlightAnimDefinition
class USparksGuitarSpotlightDefinition
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    std::uint8_t SpotlightSequence[0x20]; // 0x0400 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t InstrumentType; // 0x0420 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USparksGuitarSpotlightDefinition, SpotlightSequence) == 1024, "Offset mismatch for USparksGuitarSpotlightDefinition::SpotlightSequence");
static_assert(offsetof(USparksGuitarSpotlightDefinition, InstrumentType) == 1056, "Offset mismatch for USparksGuitarSpotlightDefinition::InstrumentType");

// /Script/SparksCoreCosmeticsRuntime.SparksInstrumentComponentBase
// Kind: Class; super: ActorComponent
class USparksInstrumentComponentBase
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    TArray<void*> SpawnedCosmeticVFX; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x18]; // 0x00D8
    void* PreviewInstrumentDef; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PreviewVariantChannels; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USparksInstrumentComponentBase, SpawnedCosmeticVFX) == 200, "Offset mismatch for USparksInstrumentComponentBase::SpawnedCosmeticVFX");
static_assert(offsetof(USparksInstrumentComponentBase, PreviewInstrumentDef) == 240, "Offset mismatch for USparksInstrumentComponentBase::PreviewInstrumentDef");
static_assert(offsetof(USparksInstrumentComponentBase, PreviewVariantChannels) == 248, "Offset mismatch for USparksInstrumentComponentBase::PreviewVariantChannels");

// /Script/SparksCoreCosmeticsRuntime.SparksInstrumentItemDefBase
// Kind: Class; super: SparksAccountItemDefinition
class USparksInstrumentItemDefBase
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    std::uint8_t Mesh[0x20]; // 0x0400 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LeftHandMesh[0x20]; // 0x0420 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxiliaryMesh[0x20]; // 0x0440 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Material[0x20]; // 0x0460 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LeftHandMaterial[0x20]; // 0x0480 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxiliaryMaterial[0x20]; // 0x04A0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxiliaryMaterial2[0x20]; // 0x04C0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MainFXSystem[0x20]; // 0x04E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LHFXSystem[0x20]; // 0x0500 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxFXSystem[0x20]; // 0x0520 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MainFXSocket[0x4]; // 0x0540 (Size: 0x4, Type: NameProperty)
    std::uint8_t LHFXSocket[0x4]; // 0x0544 (Size: 0x4, Type: NameProperty)
    FName AuxFXSocket; // 0x0548 (Size: 0x8, Type: NameProperty)
    std::uint8_t CameraFramingBounds[0x20]; // 0x0550 (Size: 0x20, Type: StructProperty)
    std::uint8_t BoneSetsToHide[0x1]; // 0x0570 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USparksInstrumentItemDefBase, Mesh) == 1024, "Offset mismatch for USparksInstrumentItemDefBase::Mesh");
static_assert(offsetof(USparksInstrumentItemDefBase, LeftHandMesh) == 1056, "Offset mismatch for USparksInstrumentItemDefBase::LeftHandMesh");
static_assert(offsetof(USparksInstrumentItemDefBase, AuxiliaryMesh) == 1088, "Offset mismatch for USparksInstrumentItemDefBase::AuxiliaryMesh");
static_assert(offsetof(USparksInstrumentItemDefBase, Material) == 1120, "Offset mismatch for USparksInstrumentItemDefBase::Material");
static_assert(offsetof(USparksInstrumentItemDefBase, LeftHandMaterial) == 1152, "Offset mismatch for USparksInstrumentItemDefBase::LeftHandMaterial");
static_assert(offsetof(USparksInstrumentItemDefBase, AuxiliaryMaterial) == 1184, "Offset mismatch for USparksInstrumentItemDefBase::AuxiliaryMaterial");
static_assert(offsetof(USparksInstrumentItemDefBase, AuxiliaryMaterial2) == 1216, "Offset mismatch for USparksInstrumentItemDefBase::AuxiliaryMaterial2");
static_assert(offsetof(USparksInstrumentItemDefBase, MainFXSystem) == 1248, "Offset mismatch for USparksInstrumentItemDefBase::MainFXSystem");
static_assert(offsetof(USparksInstrumentItemDefBase, LHFXSystem) == 1280, "Offset mismatch for USparksInstrumentItemDefBase::LHFXSystem");
static_assert(offsetof(USparksInstrumentItemDefBase, AuxFXSystem) == 1312, "Offset mismatch for USparksInstrumentItemDefBase::AuxFXSystem");
static_assert(offsetof(USparksInstrumentItemDefBase, MainFXSocket) == 1344, "Offset mismatch for USparksInstrumentItemDefBase::MainFXSocket");
static_assert(offsetof(USparksInstrumentItemDefBase, LHFXSocket) == 1348, "Offset mismatch for USparksInstrumentItemDefBase::LHFXSocket");
static_assert(offsetof(USparksInstrumentItemDefBase, AuxFXSocket) == 1352, "Offset mismatch for USparksInstrumentItemDefBase::AuxFXSocket");
static_assert(offsetof(USparksInstrumentItemDefBase, CameraFramingBounds) == 1360, "Offset mismatch for USparksInstrumentItemDefBase::CameraFramingBounds");
static_assert(offsetof(USparksInstrumentItemDefBase, BoneSetsToHide) == 1392, "Offset mismatch for USparksInstrumentItemDefBase::BoneSetsToHide");

// /Script/SparksCoreCosmeticsRuntime.SparksJamEmoteItemDefinition
// Kind: Class; super: AthenaDanceItemDefinition
class USparksJamEmoteItemDefinition
{
public:
    std::uint8_t Pad_0000[0x630]; // 0x0000
    void* SongItemDef; // 0x0630 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LoopType; // 0x0638 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USparksJamEmoteItemDefinition, SongItemDef) == 1584, "Offset mismatch for USparksJamEmoteItemDefinition::SongItemDef");
static_assert(offsetof(USparksJamEmoteItemDefinition, LoopType) == 1592, "Offset mismatch for USparksJamEmoteItemDefinition::LoopType");

// /Script/SparksCoreCosmeticsRuntime.SparksKeyboardItemDefinition
// Kind: Class; super: SparksInstrumentItemDefBase
class USparksKeyboardItemDefinition
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    std::uint8_t Mesh[0x20]; // 0x0400 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LeftHandMesh[0x20]; // 0x0420 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxiliaryMesh[0x20]; // 0x0440 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Material[0x20]; // 0x0460 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LeftHandMaterial[0x20]; // 0x0480 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxiliaryMaterial[0x20]; // 0x04A0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxiliaryMaterial2[0x20]; // 0x04C0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MainFXSystem[0x20]; // 0x04E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LHFXSystem[0x20]; // 0x0500 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxFXSystem[0x20]; // 0x0520 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MainFXSocket[0x4]; // 0x0540 (Size: 0x4, Type: NameProperty)
    std::uint8_t LHFXSocket[0x4]; // 0x0544 (Size: 0x4, Type: NameProperty)
    FName AuxFXSocket; // 0x0548 (Size: 0x8, Type: NameProperty)
    std::uint8_t CameraFramingBounds[0x20]; // 0x0550 (Size: 0x20, Type: StructProperty)
    std::uint8_t BoneSetsToHide[0x1]; // 0x0570 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USparksKeyboardItemDefinition, Mesh) == 1024, "Offset mismatch for USparksKeyboardItemDefinition::Mesh");
static_assert(offsetof(USparksKeyboardItemDefinition, LeftHandMesh) == 1056, "Offset mismatch for USparksKeyboardItemDefinition::LeftHandMesh");
static_assert(offsetof(USparksKeyboardItemDefinition, AuxiliaryMesh) == 1088, "Offset mismatch for USparksKeyboardItemDefinition::AuxiliaryMesh");
static_assert(offsetof(USparksKeyboardItemDefinition, Material) == 1120, "Offset mismatch for USparksKeyboardItemDefinition::Material");
static_assert(offsetof(USparksKeyboardItemDefinition, LeftHandMaterial) == 1152, "Offset mismatch for USparksKeyboardItemDefinition::LeftHandMaterial");
static_assert(offsetof(USparksKeyboardItemDefinition, AuxiliaryMaterial) == 1184, "Offset mismatch for USparksKeyboardItemDefinition::AuxiliaryMaterial");
static_assert(offsetof(USparksKeyboardItemDefinition, AuxiliaryMaterial2) == 1216, "Offset mismatch for USparksKeyboardItemDefinition::AuxiliaryMaterial2");
static_assert(offsetof(USparksKeyboardItemDefinition, MainFXSystem) == 1248, "Offset mismatch for USparksKeyboardItemDefinition::MainFXSystem");
static_assert(offsetof(USparksKeyboardItemDefinition, LHFXSystem) == 1280, "Offset mismatch for USparksKeyboardItemDefinition::LHFXSystem");
static_assert(offsetof(USparksKeyboardItemDefinition, AuxFXSystem) == 1312, "Offset mismatch for USparksKeyboardItemDefinition::AuxFXSystem");
static_assert(offsetof(USparksKeyboardItemDefinition, MainFXSocket) == 1344, "Offset mismatch for USparksKeyboardItemDefinition::MainFXSocket");
static_assert(offsetof(USparksKeyboardItemDefinition, LHFXSocket) == 1348, "Offset mismatch for USparksKeyboardItemDefinition::LHFXSocket");
static_assert(offsetof(USparksKeyboardItemDefinition, AuxFXSocket) == 1352, "Offset mismatch for USparksKeyboardItemDefinition::AuxFXSocket");
static_assert(offsetof(USparksKeyboardItemDefinition, CameraFramingBounds) == 1360, "Offset mismatch for USparksKeyboardItemDefinition::CameraFramingBounds");
static_assert(offsetof(USparksKeyboardItemDefinition, BoneSetsToHide) == 1392, "Offset mismatch for USparksKeyboardItemDefinition::BoneSetsToHide");

// /Script/SparksCoreCosmeticsRuntime.SparksKeyboardSpotlightDefinition
// Kind: Class; super: SparksSpotlightAnimDefinition
class USparksKeyboardSpotlightDefinition
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    std::uint8_t SpotlightSequence[0x20]; // 0x0400 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t InstrumentType; // 0x0420 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USparksKeyboardSpotlightDefinition, SpotlightSequence) == 1024, "Offset mismatch for USparksKeyboardSpotlightDefinition::SpotlightSequence");
static_assert(offsetof(USparksKeyboardSpotlightDefinition, InstrumentType) == 1056, "Offset mismatch for USparksKeyboardSpotlightDefinition::InstrumentType");

// /Script/SparksCoreCosmeticsRuntime.SparksMicItemDefinition
// Kind: Class; super: SparksInstrumentItemDefBase
class USparksMicItemDefinition
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    std::uint8_t Mesh[0x20]; // 0x0400 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LeftHandMesh[0x20]; // 0x0420 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxiliaryMesh[0x20]; // 0x0440 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t Material[0x20]; // 0x0460 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LeftHandMaterial[0x20]; // 0x0480 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxiliaryMaterial[0x20]; // 0x04A0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxiliaryMaterial2[0x20]; // 0x04C0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MainFXSystem[0x20]; // 0x04E0 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t LHFXSystem[0x20]; // 0x0500 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t AuxFXSystem[0x20]; // 0x0520 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MainFXSocket[0x4]; // 0x0540 (Size: 0x4, Type: NameProperty)
    std::uint8_t LHFXSocket[0x4]; // 0x0544 (Size: 0x4, Type: NameProperty)
    FName AuxFXSocket; // 0x0548 (Size: 0x8, Type: NameProperty)
    std::uint8_t CameraFramingBounds[0x20]; // 0x0550 (Size: 0x20, Type: StructProperty)
    std::uint8_t BoneSetsToHide[0x1]; // 0x0570 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USparksMicItemDefinition, Mesh) == 1024, "Offset mismatch for USparksMicItemDefinition::Mesh");
static_assert(offsetof(USparksMicItemDefinition, LeftHandMesh) == 1056, "Offset mismatch for USparksMicItemDefinition::LeftHandMesh");
static_assert(offsetof(USparksMicItemDefinition, AuxiliaryMesh) == 1088, "Offset mismatch for USparksMicItemDefinition::AuxiliaryMesh");
static_assert(offsetof(USparksMicItemDefinition, Material) == 1120, "Offset mismatch for USparksMicItemDefinition::Material");
static_assert(offsetof(USparksMicItemDefinition, LeftHandMaterial) == 1152, "Offset mismatch for USparksMicItemDefinition::LeftHandMaterial");
static_assert(offsetof(USparksMicItemDefinition, AuxiliaryMaterial) == 1184, "Offset mismatch for USparksMicItemDefinition::AuxiliaryMaterial");
static_assert(offsetof(USparksMicItemDefinition, AuxiliaryMaterial2) == 1216, "Offset mismatch for USparksMicItemDefinition::AuxiliaryMaterial2");
static_assert(offsetof(USparksMicItemDefinition, MainFXSystem) == 1248, "Offset mismatch for USparksMicItemDefinition::MainFXSystem");
static_assert(offsetof(USparksMicItemDefinition, LHFXSystem) == 1280, "Offset mismatch for USparksMicItemDefinition::LHFXSystem");
static_assert(offsetof(USparksMicItemDefinition, AuxFXSystem) == 1312, "Offset mismatch for USparksMicItemDefinition::AuxFXSystem");
static_assert(offsetof(USparksMicItemDefinition, MainFXSocket) == 1344, "Offset mismatch for USparksMicItemDefinition::MainFXSocket");
static_assert(offsetof(USparksMicItemDefinition, LHFXSocket) == 1348, "Offset mismatch for USparksMicItemDefinition::LHFXSocket");
static_assert(offsetof(USparksMicItemDefinition, AuxFXSocket) == 1352, "Offset mismatch for USparksMicItemDefinition::AuxFXSocket");
static_assert(offsetof(USparksMicItemDefinition, CameraFramingBounds) == 1360, "Offset mismatch for USparksMicItemDefinition::CameraFramingBounds");
static_assert(offsetof(USparksMicItemDefinition, BoneSetsToHide) == 1392, "Offset mismatch for USparksMicItemDefinition::BoneSetsToHide");

// /Script/SparksCoreCosmeticsRuntime.SparksMicSpotlightDefinition
// Kind: Class; super: SparksSpotlightAnimDefinition
class USparksMicSpotlightDefinition
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    std::uint8_t SpotlightSequence[0x20]; // 0x0400 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t InstrumentType; // 0x0420 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USparksMicSpotlightDefinition, SpotlightSequence) == 1024, "Offset mismatch for USparksMicSpotlightDefinition::SpotlightSequence");
static_assert(offsetof(USparksMicSpotlightDefinition, InstrumentType) == 1056, "Offset mismatch for USparksMicSpotlightDefinition::InstrumentType");

// /Script/SparksCoreCosmeticsRuntime.SparksPickableSongPart
// Kind: Class; super: PrimaryDataAsset
class USparksPickableSongPart
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t LoopType; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    void* BackingMontageDef; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* SongItemDef; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksPickableSongPart, LoopType) == 56, "Offset mismatch for USparksPickableSongPart::LoopType");
static_assert(offsetof(USparksPickableSongPart, BackingMontageDef) == 64, "Offset mismatch for USparksPickableSongPart::BackingMontageDef");
static_assert(offsetof(USparksPickableSongPart, SongItemDef) == 72, "Offset mismatch for USparksPickableSongPart::SongItemDef");

// /Script/SparksCoreCosmeticsRuntime.SparksPickableSongPartHelpers
// Kind: Class; super: BlueprintFunctionLibrary
class USparksPickableSongPartHelpers
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCoreCosmeticsRuntime.SparksSongItemDefinition
// Kind: Class; super: SparksAccountItemDefinition
class USparksSongItemDefinition
{
public:
    std::uint8_t Pad_0000[0x408]; // 0x0000
    void* SongPart_Vox; // 0x0408 (Size: 0x8, Type: ObjectProperty)
    void* SongPart_Lead; // 0x0410 (Size: 0x8, Type: ObjectProperty)
    void* SongPart_Bass; // 0x0418 (Size: 0x8, Type: ObjectProperty)
    void* SongPart_Drum; // 0x0420 (Size: 0x8, Type: ObjectProperty)
    void* SongPart_All; // 0x0428 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> CatalogData; // 0x0430 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(USparksSongItemDefinition, SongPart_Vox) == 1032, "Offset mismatch for USparksSongItemDefinition::SongPart_Vox");
static_assert(offsetof(USparksSongItemDefinition, SongPart_Lead) == 1040, "Offset mismatch for USparksSongItemDefinition::SongPart_Lead");
static_assert(offsetof(USparksSongItemDefinition, SongPart_Bass) == 1048, "Offset mismatch for USparksSongItemDefinition::SongPart_Bass");
static_assert(offsetof(USparksSongItemDefinition, SongPart_Drum) == 1056, "Offset mismatch for USparksSongItemDefinition::SongPart_Drum");
static_assert(offsetof(USparksSongItemDefinition, SongPart_All) == 1064, "Offset mismatch for USparksSongItemDefinition::SongPart_All");
static_assert(offsetof(USparksSongItemDefinition, CatalogData) == 1072, "Offset mismatch for USparksSongItemDefinition::CatalogData");

// /Script/SparksCoreCosmeticsRuntime.SparksSongPartPlayerComponent
// Kind: Class; super: ControllerComponent
class USparksSongPartPlayerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TArray<void*> Extenders; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USparksSongPartPlayerComponent, Extenders) == 192, "Offset mismatch for USparksSongPartPlayerComponent::Extenders");

// /Script/SparksCoreCosmeticsRuntime.SparksSongPartPlayerOverrideComponent
// Kind: Class; super: ControllerComponent
class USparksSongPartPlayerOverrideComponent
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t OverrideOverlayWidget[0x20]; // 0x00E0 (Size: 0x20, Type: SoftClassProperty)
    TSoftClassPtr<void> NewOverrideOverlayWidget; // 0x0100 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(USparksSongPartPlayerOverrideComponent, OverrideOverlayWidget) == 224, "Offset mismatch for USparksSongPartPlayerOverrideComponent::OverrideOverlayWidget");
static_assert(offsetof(USparksSongPartPlayerOverrideComponent, NewOverrideOverlayWidget) == 256, "Offset mismatch for USparksSongPartPlayerOverrideComponent::NewOverrideOverlayWidget");

// /Script/SparksCoreCosmeticsRuntime.SparksSpotlightAnimDefinition
// Kind: Class; super: SparksAccountItemDefinition
class USparksSpotlightAnimDefinition
{
public:
    std::uint8_t Pad_0000[0x400]; // 0x0000
    std::uint8_t SpotlightSequence[0x20]; // 0x0400 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t InstrumentType; // 0x0420 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USparksSpotlightAnimDefinition, SpotlightSequence) == 1024, "Offset mismatch for USparksSpotlightAnimDefinition::SpotlightSequence");
static_assert(offsetof(USparksSpotlightAnimDefinition, InstrumentType) == 1056, "Offset mismatch for USparksSpotlightAnimDefinition::InstrumentType");
