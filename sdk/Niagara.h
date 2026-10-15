/**
 * decamp dumper generated SDK
 * Package: /Script/Niagara
 */
#pragma once
#include "Basic.h"

// /Script/Niagara.BasicParticleData
// Kind: ScriptStruct; super: none
struct FBasicParticleData
{
public:
    std::uint8_t Position[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    float Size; // 0x0018 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    std::uint8_t Velocity[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FBasicParticleData, Position) == 0, "Offset mismatch for FBasicParticleData::Position");
static_assert(offsetof(FBasicParticleData, Size) == 24, "Offset mismatch for FBasicParticleData::Size");
static_assert(offsetof(FBasicParticleData, Velocity) == 32, "Offset mismatch for FBasicParticleData::Velocity");

// /Script/Niagara.EmitterCompiledScriptPair
// Kind: ScriptStruct; super: none
struct FEmitterCompiledScriptPair
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.MeshTriCoordinate
// Kind: ScriptStruct; super: none
struct FMeshTriCoordinate
{
public:
    std::int32_t Tri; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t BaryCoord[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMeshTriCoordinate, Tri) == 0, "Offset mismatch for FMeshTriCoordinate::Tri");
static_assert(offsetof(FMeshTriCoordinate, BaryCoord) == 4, "Offset mismatch for FMeshTriCoordinate::BaryCoord");

// /Script/Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
// Kind: ScriptStruct; super: MovieSceneNiagaraParameterSectionTemplate
struct FMovieSceneNiagaraBoolParameterSectionTemplate
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t BoolChannel[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneNiagaraBoolParameterSectionTemplate, BoolChannel) == 56, "Offset mismatch for FMovieSceneNiagaraBoolParameterSectionTemplate::BoolChannel");

// /Script/Niagara.MovieSceneNiagaraColorParameterSectionTemplate
// Kind: ScriptStruct; super: MovieSceneNiagaraParameterSectionTemplate
struct FMovieSceneNiagaraColorParameterSectionTemplate
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t RedChannel[0xD0]; // 0x0038 (Size: 0xD0, Type: StructProperty)
    std::uint8_t GreenChannel[0xD0]; // 0x0108 (Size: 0xD0, Type: StructProperty)
    std::uint8_t BlueChannel[0xD0]; // 0x01D8 (Size: 0xD0, Type: StructProperty)
    std::uint8_t AlphaChannel[0x1]; // 0x02A8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, RedChannel) == 56, "Offset mismatch for FMovieSceneNiagaraColorParameterSectionTemplate::RedChannel");
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, GreenChannel) == 264, "Offset mismatch for FMovieSceneNiagaraColorParameterSectionTemplate::GreenChannel");
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, BlueChannel) == 472, "Offset mismatch for FMovieSceneNiagaraColorParameterSectionTemplate::BlueChannel");
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, AlphaChannel) == 680, "Offset mismatch for FMovieSceneNiagaraColorParameterSectionTemplate::AlphaChannel");

// /Script/Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
// Kind: ScriptStruct; super: MovieSceneNiagaraParameterSectionTemplate
struct FMovieSceneNiagaraFloatParameterSectionTemplate
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t FloatChannel[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneNiagaraFloatParameterSectionTemplate, FloatChannel) == 56, "Offset mismatch for FMovieSceneNiagaraFloatParameterSectionTemplate::FloatChannel");

// /Script/Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
// Kind: ScriptStruct; super: MovieSceneNiagaraParameterSectionTemplate
struct FMovieSceneNiagaraIntegerParameterSectionTemplate
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t IntegerChannel[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneNiagaraIntegerParameterSectionTemplate, IntegerChannel) == 56, "Offset mismatch for FMovieSceneNiagaraIntegerParameterSectionTemplate::IntegerChannel");

// /Script/Niagara.MovieSceneNiagaraParameterSectionTemplate
// Kind: ScriptStruct; super: MovieSceneEvalTemplate
struct FMovieSceneNiagaraParameterSectionTemplate
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    std::uint8_t Parameter[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FMovieSceneNiagaraParameterSectionTemplate, Parameter) == 32, "Offset mismatch for FMovieSceneNiagaraParameterSectionTemplate::Parameter");

// /Script/Niagara.MovieSceneNiagaraSystemTrackImplementation
// Kind: ScriptStruct; super: MovieSceneTrackImplementation
struct FMovieSceneNiagaraSystemTrackImplementation
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t SpawnSectionStartFrame[0x4]; // 0x0010 (Size: 0x4, Type: StructProperty)
    std::uint8_t SpawnSectionEndFrame[0x4]; // 0x0014 (Size: 0x4, Type: StructProperty)
    std::uint8_t SpawnSectionStartBehavior; // 0x0018 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SpawnSectionEvaluateBehavior; // 0x0019 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SpawnSectionEndBehavior; // 0x001A (Size: 0x1, Type: EnumProperty)
    std::uint8_t AgeUpdateMode; // 0x001B (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAllowScalability; // 0x001C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionStartFrame) == 16, "Offset mismatch for FMovieSceneNiagaraSystemTrackImplementation::SpawnSectionStartFrame");
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEndFrame) == 20, "Offset mismatch for FMovieSceneNiagaraSystemTrackImplementation::SpawnSectionEndFrame");
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionStartBehavior) == 24, "Offset mismatch for FMovieSceneNiagaraSystemTrackImplementation::SpawnSectionStartBehavior");
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEvaluateBehavior) == 25, "Offset mismatch for FMovieSceneNiagaraSystemTrackImplementation::SpawnSectionEvaluateBehavior");
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEndBehavior) == 26, "Offset mismatch for FMovieSceneNiagaraSystemTrackImplementation::SpawnSectionEndBehavior");
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, AgeUpdateMode) == 27, "Offset mismatch for FMovieSceneNiagaraSystemTrackImplementation::AgeUpdateMode");
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, bAllowScalability) == 28, "Offset mismatch for FMovieSceneNiagaraSystemTrackImplementation::bAllowScalability");

// /Script/Niagara.MovieSceneNiagaraSystemTrackTemplate
// Kind: ScriptStruct; super: MovieSceneEvalTemplate
struct FMovieSceneNiagaraSystemTrackTemplate
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t CompletionMode; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0011
    TWeakObjectPtr<void> SourceSectionPtr; // 0x0014 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FMovieSceneNiagaraSystemTrackTemplate, CompletionMode) == 16, "Offset mismatch for FMovieSceneNiagaraSystemTrackTemplate::CompletionMode");
static_assert(offsetof(FMovieSceneNiagaraSystemTrackTemplate, SourceSectionPtr) == 20, "Offset mismatch for FMovieSceneNiagaraSystemTrackTemplate::SourceSectionPtr");

// /Script/Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
// Kind: ScriptStruct; super: MovieSceneNiagaraParameterSectionTemplate
struct FMovieSceneNiagaraVectorParameterSectionTemplate
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t VectorChannels[0x340]; // 0x0038 (Size: 0x340, Type: StructProperty)
    std::int32_t ChannelsUsed; // 0x0378 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FMovieSceneNiagaraVectorParameterSectionTemplate, VectorChannels) == 56, "Offset mismatch for FMovieSceneNiagaraVectorParameterSectionTemplate::VectorChannels");
static_assert(offsetof(FMovieSceneNiagaraVectorParameterSectionTemplate, ChannelsUsed) == 888, "Offset mismatch for FMovieSceneNiagaraVectorParameterSectionTemplate::ChannelsUsed");

// /Script/Niagara.NCPool
// Kind: ScriptStruct; super: none
struct FNCPool
{
public:
    TArray<void*> FreeElements; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNCPool, FreeElements) == 0, "Offset mismatch for FNCPool::FreeElements");

// /Script/Niagara.NCPoolElement
// Kind: ScriptStruct; super: none
struct FNCPoolElement
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NDCAccessContext
// Kind: ScriptStruct; super: NDCAccessContextBase
struct FNDCAccessContext
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Location[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t bOverrideLocation; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bOverrideSystemToSpawn (shared storage)
    // 0x0028 BoolProperty bReturnExistingSystems (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    void* SystemToSpawn; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SpawnedSystems; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNDCAccessContext, Location) == 16, "Offset mismatch for FNDCAccessContext::Location");
static_assert(offsetof(FNDCAccessContext, bOverrideLocation) == 40, "Offset mismatch for FNDCAccessContext::bOverrideLocation");
static_assert(offsetof(FNDCAccessContext, SystemToSpawn) == 48, "Offset mismatch for FNDCAccessContext::SystemToSpawn");
static_assert(offsetof(FNDCAccessContext, SpawnedSystems) == 56, "Offset mismatch for FNDCAccessContext::SpawnedSystems");

// /Script/Niagara.NDCAccessContextBase
// Kind: ScriptStruct; super: none
struct FNDCAccessContextBase
{
public:
    void* OwningComponent; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bIsAutoLinkingSystem; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNDCAccessContextBase, OwningComponent) == 0, "Offset mismatch for FNDCAccessContextBase::OwningComponent");
static_assert(offsetof(FNDCAccessContextBase, bIsAutoLinkingSystem) == 8, "Offset mismatch for FNDCAccessContextBase::bIsAutoLinkingSystem");

// /Script/Niagara.NDCAccessContextInst
// Kind: ScriptStruct; super: none
struct FNDCAccessContextInst
{
public:
    std::uint8_t AccessContext[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNDCAccessContextInst, AccessContext) == 0, "Offset mismatch for FNDCAccessContextInst::AccessContext");

// /Script/Niagara.NDCAccessContextLegacy
// Kind: ScriptStruct; super: NDCAccessContextBase
struct FNDCAccessContextLegacy
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Location[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t bOverrideLocation; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNDCAccessContextLegacy, Location) == 16, "Offset mismatch for FNDCAccessContextLegacy::Location");
static_assert(offsetof(FNDCAccessContextLegacy, bOverrideLocation) == 40, "Offset mismatch for FNDCAccessContextLegacy::bOverrideLocation");

// /Script/Niagara.NDCAccessContext_GameplayBurst
// Kind: ScriptStruct; super: NDCAccessContext_MapBase
struct FNDCAccessContext_GameplayBurst
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t bAttachedToOwningComponent; // 0x0048 (Size: 0x1, Type: BoolProperty)
    // 0x0048 BoolProperty bForceAttachToOwningComponent (shared storage)
    // 0x0048 BoolProperty bOverrideBoundsPadding (shared storage)
    // 0x0048 BoolProperty bOverrideCellSize (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    std::uint8_t CellSizeOverride[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t SystemBoundsPadding[0x18]; // 0x0068 (Size: 0x18, Type: StructProperty)
    std::uint8_t GameplayTag[0x1]; // 0x0080 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNDCAccessContext_GameplayBurst, bAttachedToOwningComponent) == 72, "Offset mismatch for FNDCAccessContext_GameplayBurst::bAttachedToOwningComponent");
static_assert(offsetof(FNDCAccessContext_GameplayBurst, CellSizeOverride) == 80, "Offset mismatch for FNDCAccessContext_GameplayBurst::CellSizeOverride");
static_assert(offsetof(FNDCAccessContext_GameplayBurst, SystemBoundsPadding) == 104, "Offset mismatch for FNDCAccessContext_GameplayBurst::SystemBoundsPadding");
static_assert(offsetof(FNDCAccessContext_GameplayBurst, GameplayTag) == 128, "Offset mismatch for FNDCAccessContext_GameplayBurst::GameplayTag");

// /Script/Niagara.NDCAccessContext_MapBase
// Kind: ScriptStruct; super: NDCAccessContext
struct FNDCAccessContext_MapBase
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t Location[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t bOverrideLocation; // 0x0028 (Size: 0x1, Type: BoolProperty)
    // 0x0028 BoolProperty bOverrideSystemToSpawn (shared storage)
    // 0x0028 BoolProperty bReturnExistingSystems (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    void* SystemToSpawn; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SpawnedSystems; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNDCAccessContext_MapBase, Location) == 16, "Offset mismatch for FNDCAccessContext_MapBase::Location");
static_assert(offsetof(FNDCAccessContext_MapBase, bOverrideLocation) == 40, "Offset mismatch for FNDCAccessContext_MapBase::bOverrideLocation");
static_assert(offsetof(FNDCAccessContext_MapBase, SystemToSpawn) == 48, "Offset mismatch for FNDCAccessContext_MapBase::SystemToSpawn");
static_assert(offsetof(FNDCAccessContext_MapBase, SpawnedSystems) == 56, "Offset mismatch for FNDCAccessContext_MapBase::SpawnedSystems");

// /Script/Niagara.NDCGameplayBurstAttachmentSettings
// Kind: ScriptStruct; super: none
struct FNDCGameplayBurstAttachmentSettings
{
public:
    float SpeedThreshold; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t GameplayTags[0x20]; // 0x0008 (Size: 0x20, Type: StructProperty)
    TArray<void*> ComponentTypes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNDCGameplayBurstAttachmentSettings, SpeedThreshold) == 0, "Offset mismatch for FNDCGameplayBurstAttachmentSettings::SpeedThreshold");
static_assert(offsetof(FNDCGameplayBurstAttachmentSettings, GameplayTags) == 8, "Offset mismatch for FNDCGameplayBurstAttachmentSettings::GameplayTags");
static_assert(offsetof(FNDCGameplayBurstAttachmentSettings, ComponentTypes) == 40, "Offset mismatch for FNDCGameplayBurstAttachmentSettings::ComponentTypes");

// /Script/Niagara.NDCIsland
// Kind: ScriptStruct; super: none
struct FNDCIsland
{
public:
    void* Owner; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Bounds[0x38]; // 0x0008 (Size: 0x38, Type: StructProperty)
    TArray<void*> SpawnedComponents; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNDCIsland, Owner) == 0, "Offset mismatch for FNDCIsland::Owner");
static_assert(offsetof(FNDCIsland, Bounds) == 8, "Offset mismatch for FNDCIsland::Bounds");
static_assert(offsetof(FNDCIsland, SpawnedComponents) == 64, "Offset mismatch for FNDCIsland::SpawnedComponents");

// /Script/Niagara.NDCIslandDebugDrawSettings
// Kind: ScriptStruct; super: none
struct FNDCIslandDebugDrawSettings
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bShowIslandBounds (shared storage)
};

static_assert(offsetof(FNDCIslandDebugDrawSettings, bEnabled) == 0, "Offset mismatch for FNDCIslandDebugDrawSettings::bEnabled");

// /Script/Niagara.NDCMapEntry
// Kind: ScriptStruct; super: none
struct FNDCMapEntry
{
public:
    std::uint8_t EntryData[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNDCMapEntry, EntryData) == 0, "Offset mismatch for FNDCMapEntry::EntryData");

// /Script/Niagara.NDCMapEntryBase
// Kind: ScriptStruct; super: none
struct FNDCMapEntryBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Owner; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SpawnedComponents; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0020
    float LastUsedTime; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNDCMapEntryBase, Owner) == 8, "Offset mismatch for FNDCMapEntryBase::Owner");
static_assert(offsetof(FNDCMapEntryBase, SpawnedComponents) == 16, "Offset mismatch for FNDCMapEntryBase::SpawnedComponents");
static_assert(offsetof(FNDCMapEntryBase, LastUsedTime) == 48, "Offset mismatch for FNDCMapEntryBase::LastUsedTime");

// /Script/Niagara.NDCMapEntry_GameplayBurst
// Kind: ScriptStruct; super: NDCMapEntryBase
struct FNDCMapEntry_GameplayBurst
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* Owner; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SpawnedComponents; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0020
    float LastUsedTime; // 0x0030 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNDCMapEntry_GameplayBurst, Owner) == 8, "Offset mismatch for FNDCMapEntry_GameplayBurst::Owner");
static_assert(offsetof(FNDCMapEntry_GameplayBurst, SpawnedComponents) == 16, "Offset mismatch for FNDCMapEntry_GameplayBurst::SpawnedComponents");
static_assert(offsetof(FNDCMapEntry_GameplayBurst, LastUsedTime) == 48, "Offset mismatch for FNDCMapEntry_GameplayBurst::LastUsedTime");

// /Script/Niagara.NDCMapKey
// Kind: ScriptStruct; super: none
struct FNDCMapKey
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NDCSpawnedSystemRef
// Kind: ScriptStruct; super: none
struct FNDCSpawnedSystemRef
{
public:
    TWeakObjectPtr<void> SpawnedSystem; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
};

static_assert(offsetof(FNDCSpawnedSystemRef, SpawnedSystem) == 0, "Offset mismatch for FNDCSpawnedSystemRef::SpawnedSystem");

// /Script/Niagara.NDIArraySimCacheDataFrame
// Kind: ScriptStruct; super: none
struct FNDIArraySimCacheDataFrame
{
public:
    std::int32_t NumElements; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t DataOffset; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNDIArraySimCacheDataFrame, NumElements) == 0, "Offset mismatch for FNDIArraySimCacheDataFrame::NumElements");
static_assert(offsetof(FNDIArraySimCacheDataFrame, DataOffset) == 4, "Offset mismatch for FNDIArraySimCacheDataFrame::DataOffset");

// /Script/Niagara.NDIDataChannelCompiledData
// Kind: ScriptStruct; super: none
struct FNDIDataChannelCompiledData
{
public:
    TArray<void*> FunctionInfo; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> GPUScriptParameterInfos; // 0x0010 (Size: 0x10, Type: MapProperty)
    std::uint32_t TotalParams; // 0x0020 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bUsedByCPU; // 0x0024 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUsedByGPU; // 0x0025 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bNeedsSpawnDataTable; // 0x0026 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSpawnsParticles; // 0x0027 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCallsWrite; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNDIDataChannelCompiledData, FunctionInfo) == 0, "Offset mismatch for FNDIDataChannelCompiledData::FunctionInfo");
static_assert(offsetof(FNDIDataChannelCompiledData, GPUScriptParameterInfos) == 16, "Offset mismatch for FNDIDataChannelCompiledData::GPUScriptParameterInfos");
static_assert(offsetof(FNDIDataChannelCompiledData, TotalParams) == 32, "Offset mismatch for FNDIDataChannelCompiledData::TotalParams");
static_assert(offsetof(FNDIDataChannelCompiledData, bUsedByCPU) == 36, "Offset mismatch for FNDIDataChannelCompiledData::bUsedByCPU");
static_assert(offsetof(FNDIDataChannelCompiledData, bUsedByGPU) == 37, "Offset mismatch for FNDIDataChannelCompiledData::bUsedByGPU");
static_assert(offsetof(FNDIDataChannelCompiledData, bNeedsSpawnDataTable) == 38, "Offset mismatch for FNDIDataChannelCompiledData::bNeedsSpawnDataTable");
static_assert(offsetof(FNDIDataChannelCompiledData, bSpawnsParticles) == 39, "Offset mismatch for FNDIDataChannelCompiledData::bSpawnsParticles");
static_assert(offsetof(FNDIDataChannelCompiledData, bCallsWrite) == 40, "Offset mismatch for FNDIDataChannelCompiledData::bCallsWrite");

// /Script/Niagara.NDIDataChannelFunctionInfo
// Kind: ScriptStruct; super: none
struct FNDIDataChannelFunctionInfo
{
public:
    FName FunctionName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> Inputs; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Outputs; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNDIDataChannelFunctionInfo, FunctionName) == 0, "Offset mismatch for FNDIDataChannelFunctionInfo::FunctionName");
static_assert(offsetof(FNDIDataChannelFunctionInfo, Inputs) == 8, "Offset mismatch for FNDIDataChannelFunctionInfo::Inputs");
static_assert(offsetof(FNDIDataChannelFunctionInfo, Outputs) == 24, "Offset mismatch for FNDIDataChannelFunctionInfo::Outputs");

// /Script/Niagara.NDIDataChannelWriteCompiledData
// Kind: ScriptStruct; super: NDIDataChannelCompiledData
struct FNDIDataChannelWriteCompiledData
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DataLayout[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNDIDataChannelWriteCompiledData, DataLayout) == 48, "Offset mismatch for FNDIDataChannelWriteCompiledData::DataLayout");

// /Script/Niagara.NDIDataChannelWriteSimCacheFrame
// Kind: ScriptStruct; super: none
struct FNDIDataChannelWriteSimCacheFrame
{
public:
    std::int32_t NumElements; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    TArray<void*> VariableData; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bVisibleToGame; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVisibleToCPUSims; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bVisibleToGPUSims; // 0x001A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNDIDataChannelWriteSimCacheFrame, NumElements) == 0, "Offset mismatch for FNDIDataChannelWriteSimCacheFrame::NumElements");
static_assert(offsetof(FNDIDataChannelWriteSimCacheFrame, VariableData) == 8, "Offset mismatch for FNDIDataChannelWriteSimCacheFrame::VariableData");
static_assert(offsetof(FNDIDataChannelWriteSimCacheFrame, bVisibleToGame) == 24, "Offset mismatch for FNDIDataChannelWriteSimCacheFrame::bVisibleToGame");
static_assert(offsetof(FNDIDataChannelWriteSimCacheFrame, bVisibleToCPUSims) == 25, "Offset mismatch for FNDIDataChannelWriteSimCacheFrame::bVisibleToCPUSims");
static_assert(offsetof(FNDIDataChannelWriteSimCacheFrame, bVisibleToGPUSims) == 26, "Offset mismatch for FNDIDataChannelWriteSimCacheFrame::bVisibleToGPUSims");

// /Script/Niagara.NDIDataChannelWriteSimCacheFrameBuffer
// Kind: ScriptStruct; super: none
struct FNDIDataChannelWriteSimCacheFrameBuffer
{
public:
    TArray<void*> Data; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t Size; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t SourceVar[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNDIDataChannelWriteSimCacheFrameBuffer, Data) == 0, "Offset mismatch for FNDIDataChannelWriteSimCacheFrameBuffer::Data");
static_assert(offsetof(FNDIDataChannelWriteSimCacheFrameBuffer, Size) == 16, "Offset mismatch for FNDIDataChannelWriteSimCacheFrameBuffer::Size");
static_assert(offsetof(FNDIDataChannelWriteSimCacheFrameBuffer, SourceVar) == 20, "Offset mismatch for FNDIDataChannelWriteSimCacheFrameBuffer::SourceVar");

// /Script/Niagara.NDIDataChannel_GPUScriptParameterAccessInfo
// Kind: ScriptStruct; super: none
struct FNDIDataChannel_GPUScriptParameterAccessInfo
{
public:
    TArray<void*> SortedParameters; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNDIDataChannel_GPUScriptParameterAccessInfo, SortedParameters) == 0, "Offset mismatch for FNDIDataChannel_GPUScriptParameterAccessInfo::SortedParameters");

// /Script/Niagara.NDIDistributionIntArrayEntry
// Kind: ScriptStruct; super: none
struct FNDIDistributionIntArrayEntry
{
public:
    std::int32_t Value; // 0x0000 (Size: 0x4, Type: IntProperty)
    float Weight; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNDIDistributionIntArrayEntry, Value) == 0, "Offset mismatch for FNDIDistributionIntArrayEntry::Value");
static_assert(offsetof(FNDIDistributionIntArrayEntry, Weight) == 4, "Offset mismatch for FNDIDistributionIntArrayEntry::Weight");

// /Script/Niagara.NDIDynamicMeshSimCacheFrame
// Kind: ScriptStruct; super: none
struct FNDIDynamicMeshSimCacheFrame
{
public:
    std::uint32_t NumTriangles; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint32_t NumVertices; // 0x0004 (Size: 0x4, Type: UInt32Property)
    std::uint32_t NumTexCoords; // 0x0008 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    std::uint8_t LocalBounds[0x38]; // 0x0010 (Size: 0x38, Type: StructProperty)
    std::uint32_t VertexBufferSize; // 0x0048 (Size: 0x4, Type: UInt32Property)
    std::uint32_t PositionOffset; // 0x004C (Size: 0x4, Type: UInt32Property)
    std::uint32_t TangentBasisOffset; // 0x0050 (Size: 0x4, Type: UInt32Property)
    std::uint32_t TexCoordOffset; // 0x0054 (Size: 0x4, Type: UInt32Property)
    std::uint32_t ColorOffset; // 0x0058 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0001[0x4]; // 0x005C
    TArray<void*> IndexData; // 0x0060 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VertexData; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Sections; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNDIDynamicMeshSimCacheFrame, NumTriangles) == 0, "Offset mismatch for FNDIDynamicMeshSimCacheFrame::NumTriangles");
static_assert(offsetof(FNDIDynamicMeshSimCacheFrame, NumVertices) == 4, "Offset mismatch for FNDIDynamicMeshSimCacheFrame::NumVertices");
static_assert(offsetof(FNDIDynamicMeshSimCacheFrame, NumTexCoords) == 8, "Offset mismatch for FNDIDynamicMeshSimCacheFrame::NumTexCoords");
static_assert(offsetof(FNDIDynamicMeshSimCacheFrame, LocalBounds) == 16, "Offset mismatch for FNDIDynamicMeshSimCacheFrame::LocalBounds");
static_assert(offsetof(FNDIDynamicMeshSimCacheFrame, VertexBufferSize) == 72, "Offset mismatch for FNDIDynamicMeshSimCacheFrame::VertexBufferSize");
static_assert(offsetof(FNDIDynamicMeshSimCacheFrame, PositionOffset) == 76, "Offset mismatch for FNDIDynamicMeshSimCacheFrame::PositionOffset");
static_assert(offsetof(FNDIDynamicMeshSimCacheFrame, TangentBasisOffset) == 80, "Offset mismatch for FNDIDynamicMeshSimCacheFrame::TangentBasisOffset");
static_assert(offsetof(FNDIDynamicMeshSimCacheFrame, TexCoordOffset) == 84, "Offset mismatch for FNDIDynamicMeshSimCacheFrame::TexCoordOffset");
static_assert(offsetof(FNDIDynamicMeshSimCacheFrame, ColorOffset) == 88, "Offset mismatch for FNDIDynamicMeshSimCacheFrame::ColorOffset");
static_assert(offsetof(FNDIDynamicMeshSimCacheFrame, IndexData) == 96, "Offset mismatch for FNDIDynamicMeshSimCacheFrame::IndexData");
static_assert(offsetof(FNDIDynamicMeshSimCacheFrame, VertexData) == 112, "Offset mismatch for FNDIDynamicMeshSimCacheFrame::VertexData");
static_assert(offsetof(FNDIDynamicMeshSimCacheFrame, Sections) == 128, "Offset mismatch for FNDIDynamicMeshSimCacheFrame::Sections");

// /Script/Niagara.NDIDynamicMeshSimCacheSection
// Kind: ScriptStruct; super: none
struct FNDIDynamicMeshSimCacheSection
{
public:
    std::uint32_t TriangleOffset; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint32_t MaxTriangles; // 0x0004 (Size: 0x4, Type: UInt32Property)
    std::uint32_t AllocatedTriangles; // 0x0008 (Size: 0x4, Type: UInt32Property)
    std::uint8_t Pad_0000[0x4]; // 0x000C
    void* Material; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FNDIDynamicMeshSimCacheSection, TriangleOffset) == 0, "Offset mismatch for FNDIDynamicMeshSimCacheSection::TriangleOffset");
static_assert(offsetof(FNDIDynamicMeshSimCacheSection, MaxTriangles) == 4, "Offset mismatch for FNDIDynamicMeshSimCacheSection::MaxTriangles");
static_assert(offsetof(FNDIDynamicMeshSimCacheSection, AllocatedTriangles) == 8, "Offset mismatch for FNDIDynamicMeshSimCacheSection::AllocatedTriangles");
static_assert(offsetof(FNDIDynamicMeshSimCacheSection, Material) == 16, "Offset mismatch for FNDIDynamicMeshSimCacheSection::Material");

// /Script/Niagara.NDIMemoryBufferSimCacheDataFrame
// Kind: ScriptStruct; super: none
struct FNDIMemoryBufferSimCacheDataFrame
{
public:
    std::int32_t CpuBufferSize; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t CpuDataOffset; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t GpuBufferSize; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t GpuDataOffset; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNDIMemoryBufferSimCacheDataFrame, CpuBufferSize) == 0, "Offset mismatch for FNDIMemoryBufferSimCacheDataFrame::CpuBufferSize");
static_assert(offsetof(FNDIMemoryBufferSimCacheDataFrame, CpuDataOffset) == 4, "Offset mismatch for FNDIMemoryBufferSimCacheDataFrame::CpuDataOffset");
static_assert(offsetof(FNDIMemoryBufferSimCacheDataFrame, GpuBufferSize) == 8, "Offset mismatch for FNDIMemoryBufferSimCacheDataFrame::GpuBufferSize");
static_assert(offsetof(FNDIMemoryBufferSimCacheDataFrame, GpuDataOffset) == 12, "Offset mismatch for FNDIMemoryBufferSimCacheDataFrame::GpuDataOffset");

// /Script/Niagara.NDIRenderTargetSimCacheFrame
// Kind: ScriptStruct; super: none
struct FNDIRenderTargetSimCacheFrame
{
public:
    std::uint8_t Size[0xC]; // 0x0000 (Size: 0xC, Type: StructProperty)
    std::uint8_t Format; // 0x000C (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    std::int32_t UncompressedSize; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t CompressedSize; // 0x0014 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNDIRenderTargetSimCacheFrame, Size) == 0, "Offset mismatch for FNDIRenderTargetSimCacheFrame::Size");
static_assert(offsetof(FNDIRenderTargetSimCacheFrame, Format) == 12, "Offset mismatch for FNDIRenderTargetSimCacheFrame::Format");
static_assert(offsetof(FNDIRenderTargetSimCacheFrame, UncompressedSize) == 16, "Offset mismatch for FNDIRenderTargetSimCacheFrame::UncompressedSize");
static_assert(offsetof(FNDIRenderTargetSimCacheFrame, CompressedSize) == 20, "Offset mismatch for FNDIRenderTargetSimCacheFrame::CompressedSize");

// /Script/Niagara.NDIStaticMeshIndirectCompiledData
// Kind: ScriptStruct; super: none
struct FNDIStaticMeshIndirectCompiledData
{
public:
    std::uint8_t bNeedsCpuAccess; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bRequiresDistanceFields (shared storage)
    // 0x0000 BoolProperty bUsedByCPU (shared storage)
    // 0x0000 BoolProperty bUsedByGPU (shared storage)
};

static_assert(offsetof(FNDIStaticMeshIndirectCompiledData, bNeedsCpuAccess) == 0, "Offset mismatch for FNDIStaticMeshIndirectCompiledData::bNeedsCpuAccess");

// /Script/Niagara.NDIStaticMeshSectionFilter
// Kind: ScriptStruct; super: none
struct FNDIStaticMeshSectionFilter
{
public:
    TArray<void*> AllowedMaterialSlots; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNDIStaticMeshSectionFilter, AllowedMaterialSlots) == 0, "Offset mismatch for FNDIStaticMeshSectionFilter::AllowedMaterialSlots");

// /Script/Niagara.NiagaraAssetTagDefinition
// Kind: ScriptStruct; super: none
struct FNiagaraAssetTagDefinition
{
public:
    std::uint8_t AssetTag[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::int32_t AssetFlags; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    std::uint8_t Description[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    std::uint8_t DisplayType; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t Color[0x10]; // 0x002C (Size: 0x10, Type: StructProperty)
    std::uint8_t TagGuid[0x1]; // 0x003C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraAssetTagDefinition, AssetTag) == 0, "Offset mismatch for FNiagaraAssetTagDefinition::AssetTag");
static_assert(offsetof(FNiagaraAssetTagDefinition, AssetFlags) == 16, "Offset mismatch for FNiagaraAssetTagDefinition::AssetFlags");
static_assert(offsetof(FNiagaraAssetTagDefinition, Description) == 24, "Offset mismatch for FNiagaraAssetTagDefinition::Description");
static_assert(offsetof(FNiagaraAssetTagDefinition, DisplayType) == 40, "Offset mismatch for FNiagaraAssetTagDefinition::DisplayType");
static_assert(offsetof(FNiagaraAssetTagDefinition, Color) == 44, "Offset mismatch for FNiagaraAssetTagDefinition::Color");
static_assert(offsetof(FNiagaraAssetTagDefinition, TagGuid) == 60, "Offset mismatch for FNiagaraAssetTagDefinition::TagGuid");

// /Script/Niagara.NiagaraAssetTagDefinitionReference
// Kind: ScriptStruct; super: none
struct FNiagaraAssetTagDefinitionReference
{
public:
    std::uint8_t AssetTagDefinitionGuid[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraAssetTagDefinitionReference, AssetTagDefinitionGuid) == 0, "Offset mismatch for FNiagaraAssetTagDefinitionReference::AssetTagDefinitionGuid");

// /Script/Niagara.NiagaraAssetVersion
// Kind: ScriptStruct; super: none
struct FNiagaraAssetVersion
{
public:
    std::int32_t MajorVersion; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t MinorVersion; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t VersionGuid[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsVisibleInVersionSelector; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNiagaraAssetVersion, MajorVersion) == 0, "Offset mismatch for FNiagaraAssetVersion::MajorVersion");
static_assert(offsetof(FNiagaraAssetVersion, MinorVersion) == 4, "Offset mismatch for FNiagaraAssetVersion::MinorVersion");
static_assert(offsetof(FNiagaraAssetVersion, VersionGuid) == 8, "Offset mismatch for FNiagaraAssetVersion::VersionGuid");
static_assert(offsetof(FNiagaraAssetVersion, bIsVisibleInVersionSelector) == 24, "Offset mismatch for FNiagaraAssetVersion::bIsVisibleInVersionSelector");

// /Script/Niagara.NiagaraBakerCameraSettings
// Kind: ScriptStruct; super: none
struct FNiagaraBakerCameraSettings
{
public:
    std::uint8_t ViewMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t ViewportLocation[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t ViewportRotation[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    float OrbitDistance; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float FOV; // 0x003C (Size: 0x4, Type: FloatProperty)
    float OrthoWidth; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseAspectRatio; // 0x0044 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0045
    float AspectRatio; // 0x0048 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNiagaraBakerCameraSettings, ViewMode) == 0, "Offset mismatch for FNiagaraBakerCameraSettings::ViewMode");
static_assert(offsetof(FNiagaraBakerCameraSettings, ViewportLocation) == 8, "Offset mismatch for FNiagaraBakerCameraSettings::ViewportLocation");
static_assert(offsetof(FNiagaraBakerCameraSettings, ViewportRotation) == 32, "Offset mismatch for FNiagaraBakerCameraSettings::ViewportRotation");
static_assert(offsetof(FNiagaraBakerCameraSettings, OrbitDistance) == 56, "Offset mismatch for FNiagaraBakerCameraSettings::OrbitDistance");
static_assert(offsetof(FNiagaraBakerCameraSettings, FOV) == 60, "Offset mismatch for FNiagaraBakerCameraSettings::FOV");
static_assert(offsetof(FNiagaraBakerCameraSettings, OrthoWidth) == 64, "Offset mismatch for FNiagaraBakerCameraSettings::OrthoWidth");
static_assert(offsetof(FNiagaraBakerCameraSettings, bUseAspectRatio) == 68, "Offset mismatch for FNiagaraBakerCameraSettings::bUseAspectRatio");
static_assert(offsetof(FNiagaraBakerCameraSettings, AspectRatio) == 72, "Offset mismatch for FNiagaraBakerCameraSettings::AspectRatio");

// /Script/Niagara.NiagaraBakerTextureSettings
// Kind: ScriptStruct; super: none
struct FNiagaraBakerTextureSettings
{
public:
    FName OutputName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t SourceBinding[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseFrameSize; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0021
    std::uint8_t FrameSize[0x8]; // 0x0024 (Size: 0x8, Type: StructProperty)
    std::uint8_t TextureSize[0xC]; // 0x002C (Size: 0xC, Type: StructProperty)
    void* GeneratedTexture; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FNiagaraBakerTextureSettings, OutputName) == 0, "Offset mismatch for FNiagaraBakerTextureSettings::OutputName");
static_assert(offsetof(FNiagaraBakerTextureSettings, SourceBinding) == 8, "Offset mismatch for FNiagaraBakerTextureSettings::SourceBinding");
static_assert(offsetof(FNiagaraBakerTextureSettings, bUseFrameSize) == 32, "Offset mismatch for FNiagaraBakerTextureSettings::bUseFrameSize");
static_assert(offsetof(FNiagaraBakerTextureSettings, FrameSize) == 36, "Offset mismatch for FNiagaraBakerTextureSettings::FrameSize");
static_assert(offsetof(FNiagaraBakerTextureSettings, TextureSize) == 44, "Offset mismatch for FNiagaraBakerTextureSettings::TextureSize");
static_assert(offsetof(FNiagaraBakerTextureSettings, GeneratedTexture) == 56, "Offset mismatch for FNiagaraBakerTextureSettings::GeneratedTexture");

// /Script/Niagara.NiagaraBakerTextureSource
// Kind: ScriptStruct; super: none
struct FNiagaraBakerTextureSource
{
public:
    FString DisplayString; // 0x0000 (Size: 0x10, Type: StrProperty)
    FName SourceName; // 0x0010 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FNiagaraBakerTextureSource, DisplayString) == 0, "Offset mismatch for FNiagaraBakerTextureSource::DisplayString");
static_assert(offsetof(FNiagaraBakerTextureSource, SourceName) == 16, "Offset mismatch for FNiagaraBakerTextureSource::SourceName");

// /Script/Niagara.NiagaraBool
// Kind: ScriptStruct; super: none
struct FNiagaraBool
{
public:
    std::int32_t Value; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNiagaraBool, Value) == 0, "Offset mismatch for FNiagaraBool::Value");

// /Script/Niagara.NiagaraBoolParameterMetaData
// Kind: ScriptStruct; super: none
struct FNiagaraBoolParameterMetaData
{
public:
    std::uint8_t DisplayMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t OverrideNameTrue[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    FName OverrideNameFalse; // 0x0008 (Size: 0x8, Type: NameProperty)
    void* IconOverrideTrue; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    void* IconOverrideFalse; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FNiagaraBoolParameterMetaData, DisplayMode) == 0, "Offset mismatch for FNiagaraBoolParameterMetaData::DisplayMode");
static_assert(offsetof(FNiagaraBoolParameterMetaData, OverrideNameTrue) == 4, "Offset mismatch for FNiagaraBoolParameterMetaData::OverrideNameTrue");
static_assert(offsetof(FNiagaraBoolParameterMetaData, OverrideNameFalse) == 8, "Offset mismatch for FNiagaraBoolParameterMetaData::OverrideNameFalse");
static_assert(offsetof(FNiagaraBoolParameterMetaData, IconOverrideTrue) == 16, "Offset mismatch for FNiagaraBoolParameterMetaData::IconOverrideTrue");
static_assert(offsetof(FNiagaraBoolParameterMetaData, IconOverrideFalse) == 24, "Offset mismatch for FNiagaraBoolParameterMetaData::IconOverrideFalse");

// /Script/Niagara.NiagaraBoundParameter
// Kind: ScriptStruct; super: none
struct FNiagaraBoundParameter
{
public:
    std::uint8_t Parameter[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::int32_t SrcOffset; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t DestOffset; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNiagaraBoundParameter, Parameter) == 0, "Offset mismatch for FNiagaraBoundParameter::Parameter");
static_assert(offsetof(FNiagaraBoundParameter, SrcOffset) == 8, "Offset mismatch for FNiagaraBoundParameter::SrcOffset");
static_assert(offsetof(FNiagaraBoundParameter, DestOffset) == 12, "Offset mismatch for FNiagaraBoundParameter::DestOffset");

// /Script/Niagara.NiagaraCollisionEventPayload
// Kind: ScriptStruct; super: none
struct FNiagaraCollisionEventPayload
{
public:
    std::uint8_t CollisionPos[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t CollisionNormal[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t CollisionVelocity[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::int32_t ParticleIndex; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::int32_t PhysicalMaterialIndex; // 0x004C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNiagaraCollisionEventPayload, CollisionPos) == 0, "Offset mismatch for FNiagaraCollisionEventPayload::CollisionPos");
static_assert(offsetof(FNiagaraCollisionEventPayload, CollisionNormal) == 24, "Offset mismatch for FNiagaraCollisionEventPayload::CollisionNormal");
static_assert(offsetof(FNiagaraCollisionEventPayload, CollisionVelocity) == 48, "Offset mismatch for FNiagaraCollisionEventPayload::CollisionVelocity");
static_assert(offsetof(FNiagaraCollisionEventPayload, ParticleIndex) == 72, "Offset mismatch for FNiagaraCollisionEventPayload::ParticleIndex");
static_assert(offsetof(FNiagaraCollisionEventPayload, PhysicalMaterialIndex) == 76, "Offset mismatch for FNiagaraCollisionEventPayload::PhysicalMaterialIndex");

// /Script/Niagara.NiagaraCompileDependency
// Kind: ScriptStruct; super: none
struct FNiagaraCompileDependency
{
public:
    FString LinkerErrorMessage; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t NodeGUID[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t PinGuid[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    TArray<void*> StackGuids; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DependentVariable[0x8]; // 0x0040 (Size: 0x8, Type: StructProperty)
    std::uint8_t bDependentVariableFromCustomIterationNamespace; // 0x0048 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNiagaraCompileDependency, LinkerErrorMessage) == 0, "Offset mismatch for FNiagaraCompileDependency::LinkerErrorMessage");
static_assert(offsetof(FNiagaraCompileDependency, NodeGUID) == 16, "Offset mismatch for FNiagaraCompileDependency::NodeGUID");
static_assert(offsetof(FNiagaraCompileDependency, PinGuid) == 32, "Offset mismatch for FNiagaraCompileDependency::PinGuid");
static_assert(offsetof(FNiagaraCompileDependency, StackGuids) == 48, "Offset mismatch for FNiagaraCompileDependency::StackGuids");
static_assert(offsetof(FNiagaraCompileDependency, DependentVariable) == 64, "Offset mismatch for FNiagaraCompileDependency::DependentVariable");
static_assert(offsetof(FNiagaraCompileDependency, bDependentVariableFromCustomIterationNamespace) == 72, "Offset mismatch for FNiagaraCompileDependency::bDependentVariableFromCustomIterationNamespace");

// /Script/Niagara.NiagaraCompileHashVisitorDebugInfo
// Kind: ScriptStruct; super: none
struct FNiagaraCompileHashVisitorDebugInfo
{
public:
    FString Object; // 0x0000 (Size: 0x10, Type: StrProperty)
    TArray<void*> PropertyKeys; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PropertyValues; // 0x0020 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraCompileHashVisitorDebugInfo, Object) == 0, "Offset mismatch for FNiagaraCompileHashVisitorDebugInfo::Object");
static_assert(offsetof(FNiagaraCompileHashVisitorDebugInfo, PropertyKeys) == 16, "Offset mismatch for FNiagaraCompileHashVisitorDebugInfo::PropertyKeys");
static_assert(offsetof(FNiagaraCompileHashVisitorDebugInfo, PropertyValues) == 32, "Offset mismatch for FNiagaraCompileHashVisitorDebugInfo::PropertyValues");

// /Script/Niagara.NiagaraCompilerTag
// Kind: ScriptStruct; super: none
struct FNiagaraCompilerTag
{
public:
    std::uint8_t Variable[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    FString StringValue; // 0x0018 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FNiagaraCompilerTag, Variable) == 0, "Offset mismatch for FNiagaraCompilerTag::Variable");
static_assert(offsetof(FNiagaraCompilerTag, StringValue) == 24, "Offset mismatch for FNiagaraCompilerTag::StringValue");

// /Script/Niagara.NiagaraComponentPropertyBinding
// Kind: ScriptStruct; super: none
struct FNiagaraComponentPropertyBinding
{
public:
    std::uint8_t AttributeBinding[0x14]; // 0x0000 (Size: 0x14, Type: StructProperty)
    std::uint8_t PropertyName[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t PropertyType[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    FName MetadataSetterName; // 0x0030 (Size: 0x8, Type: NameProperty)
    TMap<void*, void*> PropertySetterParameterDefaults; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FNiagaraComponentPropertyBinding, AttributeBinding) == 0, "Offset mismatch for FNiagaraComponentPropertyBinding::AttributeBinding");
static_assert(offsetof(FNiagaraComponentPropertyBinding, PropertyName) == 20, "Offset mismatch for FNiagaraComponentPropertyBinding::PropertyName");
static_assert(offsetof(FNiagaraComponentPropertyBinding, PropertyType) == 24, "Offset mismatch for FNiagaraComponentPropertyBinding::PropertyType");
static_assert(offsetof(FNiagaraComponentPropertyBinding, MetadataSetterName) == 48, "Offset mismatch for FNiagaraComponentPropertyBinding::MetadataSetterName");
static_assert(offsetof(FNiagaraComponentPropertyBinding, PropertySetterParameterDefaults) == 56, "Offset mismatch for FNiagaraComponentPropertyBinding::PropertySetterParameterDefaults");

// /Script/Niagara.NiagaraCulledComponentInfo
// Kind: ScriptStruct; super: none
struct FNiagaraCulledComponentInfo
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraDataChannelGameDataLayout
// Kind: ScriptStruct; super: none
struct FNiagaraDataChannelGameDataLayout
{
public:
    TMap<void*, void*> VariableIndices; // 0x0000 (Size: 0x10, Type: MapProperty)
    TArray<void*> LwcConverters; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraDataChannelGameDataLayout, VariableIndices) == 0, "Offset mismatch for FNiagaraDataChannelGameDataLayout::VariableIndices");
static_assert(offsetof(FNiagaraDataChannelGameDataLayout, LwcConverters) == 16, "Offset mismatch for FNiagaraDataChannelGameDataLayout::LwcConverters");

// /Script/Niagara.NiagaraDataChannelReference
// Kind: ScriptStruct; super: none
struct FNiagaraDataChannelReference
{
public:
    void* DataChannel; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AccessContext[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t bCustomAccessContext; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNiagaraDataChannelReference, DataChannel) == 0, "Offset mismatch for FNiagaraDataChannelReference::DataChannel");
static_assert(offsetof(FNiagaraDataChannelReference, AccessContext) == 8, "Offset mismatch for FNiagaraDataChannelReference::AccessContext");
static_assert(offsetof(FNiagaraDataChannelReference, bCustomAccessContext) == 24, "Offset mismatch for FNiagaraDataChannelReference::bCustomAccessContext");

// /Script/Niagara.NiagaraDataChannelSearchParameters
// Kind: ScriptStruct; super: none
struct FNiagaraDataChannelSearchParameters
{
public:
    void* OwningComponent; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Location[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t bOverrideLocation; // 0x0020 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNiagaraDataChannelSearchParameters, OwningComponent) == 0, "Offset mismatch for FNiagaraDataChannelSearchParameters::OwningComponent");
static_assert(offsetof(FNiagaraDataChannelSearchParameters, Location) == 8, "Offset mismatch for FNiagaraDataChannelSearchParameters::Location");
static_assert(offsetof(FNiagaraDataChannelSearchParameters, bOverrideLocation) == 32, "Offset mismatch for FNiagaraDataChannelSearchParameters::bOverrideLocation");

// /Script/Niagara.NiagaraDataChannelUpdateContext
// Kind: ScriptStruct; super: none
struct FNiagaraDataChannelUpdateContext
{
public:
    void* Reader; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t FirstNewDataIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t LastNewDataIndex; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t NewElementCount; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNiagaraDataChannelUpdateContext, Reader) == 0, "Offset mismatch for FNiagaraDataChannelUpdateContext::Reader");
static_assert(offsetof(FNiagaraDataChannelUpdateContext, FirstNewDataIndex) == 8, "Offset mismatch for FNiagaraDataChannelUpdateContext::FirstNewDataIndex");
static_assert(offsetof(FNiagaraDataChannelUpdateContext, LastNewDataIndex) == 12, "Offset mismatch for FNiagaraDataChannelUpdateContext::LastNewDataIndex");
static_assert(offsetof(FNiagaraDataChannelUpdateContext, NewElementCount) == 16, "Offset mismatch for FNiagaraDataChannelUpdateContext::NewElementCount");

// /Script/Niagara.NiagaraDataChannelVariable
// Kind: ScriptStruct; super: NiagaraVariableBase
struct FNiagaraDataChannelVariable
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t TypeDefHandle[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraDataChannelVariable, Name) == 0, "Offset mismatch for FNiagaraDataChannelVariable::Name");
static_assert(offsetof(FNiagaraDataChannelVariable, TypeDefHandle) == 4, "Offset mismatch for FNiagaraDataChannelVariable::TypeDefHandle");

// /Script/Niagara.NiagaraDataInterfaceEmitterBinding
// Kind: ScriptStruct; super: none
struct FNiagaraDataInterfaceEmitterBinding
{
public:
    std::uint8_t BindingMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    FName EmitterName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FNiagaraDataInterfaceEmitterBinding, BindingMode) == 0, "Offset mismatch for FNiagaraDataInterfaceEmitterBinding::BindingMode");
static_assert(offsetof(FNiagaraDataInterfaceEmitterBinding, EmitterName) == 4, "Offset mismatch for FNiagaraDataInterfaceEmitterBinding::EmitterName");

// /Script/Niagara.NiagaraDataInterfaceSplineLUT
// Kind: ScriptStruct; super: none
struct FNiagaraDataInterfaceSplineLUT
{
public:
    TArray<void*> Positions; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Scales; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Rotations; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    float SplineLength; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float SplineDistanceStep; // 0x0034 (Size: 0x4, Type: FloatProperty)
    float InvSplineDistanceStep; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::int32_t MaxIndex; // 0x003C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNiagaraDataInterfaceSplineLUT, Positions) == 0, "Offset mismatch for FNiagaraDataInterfaceSplineLUT::Positions");
static_assert(offsetof(FNiagaraDataInterfaceSplineLUT, Scales) == 16, "Offset mismatch for FNiagaraDataInterfaceSplineLUT::Scales");
static_assert(offsetof(FNiagaraDataInterfaceSplineLUT, Rotations) == 32, "Offset mismatch for FNiagaraDataInterfaceSplineLUT::Rotations");
static_assert(offsetof(FNiagaraDataInterfaceSplineLUT, SplineLength) == 48, "Offset mismatch for FNiagaraDataInterfaceSplineLUT::SplineLength");
static_assert(offsetof(FNiagaraDataInterfaceSplineLUT, SplineDistanceStep) == 52, "Offset mismatch for FNiagaraDataInterfaceSplineLUT::SplineDistanceStep");
static_assert(offsetof(FNiagaraDataInterfaceSplineLUT, InvSplineDistanceStep) == 56, "Offset mismatch for FNiagaraDataInterfaceSplineLUT::InvSplineDistanceStep");
static_assert(offsetof(FNiagaraDataInterfaceSplineLUT, MaxIndex) == 60, "Offset mismatch for FNiagaraDataInterfaceSplineLUT::MaxIndex");

// /Script/Niagara.NiagaraDataSetCompiledData
// Kind: ScriptStruct; super: none
struct FNiagaraDataSetCompiledData
{
public:
    TArray<void*> Variables; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VariableLayouts; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ID[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint32_t TotalFloatComponents; // 0x0028 (Size: 0x4, Type: UInt32Property)
    std::uint32_t TotalInt32Components; // 0x002C (Size: 0x4, Type: UInt32Property)
    std::uint32_t TotalHalfComponents; // 0x0030 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bRequiresPersistentIDs; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0035
    std::uint8_t SimTarget; // 0x0038 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FNiagaraDataSetCompiledData, Variables) == 0, "Offset mismatch for FNiagaraDataSetCompiledData::Variables");
static_assert(offsetof(FNiagaraDataSetCompiledData, VariableLayouts) == 16, "Offset mismatch for FNiagaraDataSetCompiledData::VariableLayouts");
static_assert(offsetof(FNiagaraDataSetCompiledData, ID) == 32, "Offset mismatch for FNiagaraDataSetCompiledData::ID");
static_assert(offsetof(FNiagaraDataSetCompiledData, TotalFloatComponents) == 40, "Offset mismatch for FNiagaraDataSetCompiledData::TotalFloatComponents");
static_assert(offsetof(FNiagaraDataSetCompiledData, TotalInt32Components) == 44, "Offset mismatch for FNiagaraDataSetCompiledData::TotalInt32Components");
static_assert(offsetof(FNiagaraDataSetCompiledData, TotalHalfComponents) == 48, "Offset mismatch for FNiagaraDataSetCompiledData::TotalHalfComponents");
static_assert(offsetof(FNiagaraDataSetCompiledData, bRequiresPersistentIDs) == 52, "Offset mismatch for FNiagaraDataSetCompiledData::bRequiresPersistentIDs");
static_assert(offsetof(FNiagaraDataSetCompiledData, SimTarget) == 56, "Offset mismatch for FNiagaraDataSetCompiledData::SimTarget");

// /Script/Niagara.NiagaraDataSetID
// Kind: ScriptStruct; super: none
struct FNiagaraDataSetID
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Type; // 0x0004 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FNiagaraDataSetID, Name) == 0, "Offset mismatch for FNiagaraDataSetID::Name");
static_assert(offsetof(FNiagaraDataSetID, Type) == 4, "Offset mismatch for FNiagaraDataSetID::Type");

// /Script/Niagara.NiagaraDataSetProperties
// Kind: ScriptStruct; super: none
struct FNiagaraDataSetProperties
{
public:
    std::uint8_t ID[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    TArray<void*> Variables; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraDataSetProperties, ID) == 0, "Offset mismatch for FNiagaraDataSetProperties::ID");
static_assert(offsetof(FNiagaraDataSetProperties, Variables) == 8, "Offset mismatch for FNiagaraDataSetProperties::Variables");

// /Script/Niagara.NiagaraDebugHUDSettingsData
// Kind: ScriptStruct; super: none
struct FNiagaraDebugHUDSettingsData
{
public:
    std::uint8_t bHudEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHudRenderingEnabled; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bValidationEnabled; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverviewEnabled; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::uint8_t OverviewMode; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t OverviewSortMode; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t bIncludeCascade; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIncludeNiagara; // 0x000D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowRegisteredComponents; // 0x000E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverviewShowFilteredSystemOnly; // 0x000F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowGlobalBudgetInfo; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFiltersEnabled; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSystemFilterEnabled; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x5]; // 0x0013
    FString SystemFilter; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t bEmitterFilterEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0029
    FString EmitterFilter; // 0x0030 (Size: 0x10, Type: StrProperty)
    std::uint8_t bActorFilterEnabled; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0041
    FString ActorFilter; // 0x0048 (Size: 0x10, Type: StrProperty)
    std::uint8_t bComponentFilterEnabled; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0059
    FString ComponentFilter; // 0x0060 (Size: 0x10, Type: StrProperty)
    std::uint8_t bValidateSystemSimulationDataBuffers; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bValidateParticleDataBuffers; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bValidationLogErrors; // 0x0072 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x1]; // 0x0073
    std::int32_t ValidationAttributeDisplayTruncate; // 0x0074 (Size: 0x4, Type: IntProperty)
    std::uint8_t SystemDebugVerbosity; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0007[0x3]; // 0x0079
    std::uint8_t SystemEmitterVerbosity; // 0x007C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0008[0x3]; // 0x007D
    std::uint8_t DataInterfaceVerbosity; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0009[0x7]; // 0x0081
    TArray<void*> SystemVariables; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bSystemShowActiveOnlyInWorld; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowParticleVariables; // 0x0099 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x6]; // 0x009A
    TArray<void*> ParticlesVariables; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnableGpuParticleReadback; // 0x00B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowParticleIndex; // 0x00B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowParticlesVariablesWithSystem; // 0x00B2 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bShowParticleVariablesVertical; // 0x00B3 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUseMaxParticlesToDisplay; // 0x00B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000B[0x3]; // 0x00B5
    std::int32_t MaxParticlesToDisplay; // 0x00B8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseParticleDisplayClip; // 0x00BC (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000C[0x3]; // 0x00BD
    std::uint8_t ParticleDisplayClip[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t bUseParticleDisplayCenterRadius; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000D[0x3]; // 0x00D1
    float ParticleDisplayCenterRadius; // 0x00D4 (Size: 0x4, Type: FloatProperty)
    std::int32_t PerfReportFrames; // 0x00D8 (Size: 0x4, Type: IntProperty)
    std::uint8_t PerfSampleMode; // 0x00DC (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000E[0x3]; // 0x00DD
    std::uint8_t PerfUnits; // 0x00E0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000F[0x3]; // 0x00E1
    std::uint8_t bShowPerfColumGameThreadOnly; // 0x00E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0010[0x3]; // 0x00E5
    std::uint8_t PerfGraphMode; // 0x00E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0011[0x3]; // 0x00E9
    std::int32_t PerfHistoryFrames; // 0x00EC (Size: 0x4, Type: IntProperty)
    std::uint8_t bUsePerfGraphTimeRange; // 0x00F0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0012[0x3]; // 0x00F1
    float PerfGraphTimeRange; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PerfGraphSize[0x10]; // 0x00F8 (Size: 0x10, Type: StructProperty)
    std::uint8_t PerfGraphAxisColor[0x10]; // 0x0108 (Size: 0x10, Type: StructProperty)
    std::int32_t SmoothingWidth; // 0x0118 (Size: 0x4, Type: IntProperty)
    std::uint8_t OverviewFont; // 0x011C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0013[0x3]; // 0x011D
    std::uint8_t OverviewLocation[0x10]; // 0x0120 (Size: 0x10, Type: StructProperty)
    std::uint8_t SystemTextOptions[0x18]; // 0x0130 (Size: 0x18, Type: StructProperty)
    std::uint8_t ParticleTextOptions[0x18]; // 0x0148 (Size: 0x18, Type: StructProperty)
    std::uint8_t bDrawBoundsEnabled; // 0x0160 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawBoundsWireframe; // 0x0161 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0014[0x2]; // 0x0162
    float DrawBoundsAlpha; // 0x0164 (Size: 0x4, Type: FloatProperty)
    std::uint8_t DefaultBackgroundColor[0x10]; // 0x0168 (Size: 0x10, Type: StructProperty)
    std::uint8_t OverviewHeadingColor[0x10]; // 0x0178 (Size: 0x10, Type: StructProperty)
    std::uint8_t OverviewDetailColor[0x10]; // 0x0188 (Size: 0x10, Type: StructProperty)
    std::uint8_t OverviewDetailHighlightColor[0x10]; // 0x0198 (Size: 0x10, Type: StructProperty)
    std::uint8_t InWorldErrorTextColor[0x10]; // 0x01A8 (Size: 0x10, Type: StructProperty)
    std::uint8_t InWorldTextColor[0x10]; // 0x01B8 (Size: 0x10, Type: StructProperty)
    std::uint8_t MessageInfoTextColor[0x10]; // 0x01C8 (Size: 0x10, Type: StructProperty)
    std::uint8_t MessageWarningTextColor[0x10]; // 0x01D8 (Size: 0x10, Type: StructProperty)
    std::uint8_t MessageErrorTextColor[0x10]; // 0x01E8 (Size: 0x10, Type: StructProperty)
    float SystemColorTableOpacity; // 0x01F8 (Size: 0x4, Type: FloatProperty)
    std::uint32_t SystemColorSeed; // 0x01FC (Size: 0x4, Type: UInt32Property)
    std::uint8_t SystemColorHSVMin[0x18]; // 0x0200 (Size: 0x18, Type: StructProperty)
    std::uint8_t SystemColorHSVMax[0x18]; // 0x0218 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlaybackMode; // 0x0230 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bPlaybackRateEnabled; // 0x0231 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0015[0x2]; // 0x0232
    float PlaybackRate; // 0x0234 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLoopTimeEnabled; // 0x0238 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0016[0x3]; // 0x0239
    float LoopTime; // 0x023C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNiagaraDebugHUDSettingsData, bHudEnabled) == 0, "Offset mismatch for FNiagaraDebugHUDSettingsData::bHudEnabled");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bHudRenderingEnabled) == 1, "Offset mismatch for FNiagaraDebugHUDSettingsData::bHudRenderingEnabled");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bValidationEnabled) == 2, "Offset mismatch for FNiagaraDebugHUDSettingsData::bValidationEnabled");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bOverviewEnabled) == 3, "Offset mismatch for FNiagaraDebugHUDSettingsData::bOverviewEnabled");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewMode) == 4, "Offset mismatch for FNiagaraDebugHUDSettingsData::OverviewMode");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewSortMode) == 8, "Offset mismatch for FNiagaraDebugHUDSettingsData::OverviewSortMode");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bIncludeCascade) == 12, "Offset mismatch for FNiagaraDebugHUDSettingsData::bIncludeCascade");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bIncludeNiagara) == 13, "Offset mismatch for FNiagaraDebugHUDSettingsData::bIncludeNiagara");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bShowRegisteredComponents) == 14, "Offset mismatch for FNiagaraDebugHUDSettingsData::bShowRegisteredComponents");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bOverviewShowFilteredSystemOnly) == 15, "Offset mismatch for FNiagaraDebugHUDSettingsData::bOverviewShowFilteredSystemOnly");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bShowGlobalBudgetInfo) == 16, "Offset mismatch for FNiagaraDebugHUDSettingsData::bShowGlobalBudgetInfo");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bFiltersEnabled) == 17, "Offset mismatch for FNiagaraDebugHUDSettingsData::bFiltersEnabled");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bSystemFilterEnabled) == 18, "Offset mismatch for FNiagaraDebugHUDSettingsData::bSystemFilterEnabled");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemFilter) == 24, "Offset mismatch for FNiagaraDebugHUDSettingsData::SystemFilter");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bEmitterFilterEnabled) == 40, "Offset mismatch for FNiagaraDebugHUDSettingsData::bEmitterFilterEnabled");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, EmitterFilter) == 48, "Offset mismatch for FNiagaraDebugHUDSettingsData::EmitterFilter");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bActorFilterEnabled) == 64, "Offset mismatch for FNiagaraDebugHUDSettingsData::bActorFilterEnabled");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ActorFilter) == 72, "Offset mismatch for FNiagaraDebugHUDSettingsData::ActorFilter");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bComponentFilterEnabled) == 88, "Offset mismatch for FNiagaraDebugHUDSettingsData::bComponentFilterEnabled");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ComponentFilter) == 96, "Offset mismatch for FNiagaraDebugHUDSettingsData::ComponentFilter");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bValidateSystemSimulationDataBuffers) == 112, "Offset mismatch for FNiagaraDebugHUDSettingsData::bValidateSystemSimulationDataBuffers");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bValidateParticleDataBuffers) == 113, "Offset mismatch for FNiagaraDebugHUDSettingsData::bValidateParticleDataBuffers");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bValidationLogErrors) == 114, "Offset mismatch for FNiagaraDebugHUDSettingsData::bValidationLogErrors");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ValidationAttributeDisplayTruncate) == 116, "Offset mismatch for FNiagaraDebugHUDSettingsData::ValidationAttributeDisplayTruncate");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemDebugVerbosity) == 120, "Offset mismatch for FNiagaraDebugHUDSettingsData::SystemDebugVerbosity");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemEmitterVerbosity) == 124, "Offset mismatch for FNiagaraDebugHUDSettingsData::SystemEmitterVerbosity");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, DataInterfaceVerbosity) == 128, "Offset mismatch for FNiagaraDebugHUDSettingsData::DataInterfaceVerbosity");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemVariables) == 136, "Offset mismatch for FNiagaraDebugHUDSettingsData::SystemVariables");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bSystemShowActiveOnlyInWorld) == 152, "Offset mismatch for FNiagaraDebugHUDSettingsData::bSystemShowActiveOnlyInWorld");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bShowParticleVariables) == 153, "Offset mismatch for FNiagaraDebugHUDSettingsData::bShowParticleVariables");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ParticlesVariables) == 160, "Offset mismatch for FNiagaraDebugHUDSettingsData::ParticlesVariables");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bEnableGpuParticleReadback) == 176, "Offset mismatch for FNiagaraDebugHUDSettingsData::bEnableGpuParticleReadback");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bShowParticleIndex) == 177, "Offset mismatch for FNiagaraDebugHUDSettingsData::bShowParticleIndex");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bShowParticlesVariablesWithSystem) == 178, "Offset mismatch for FNiagaraDebugHUDSettingsData::bShowParticlesVariablesWithSystem");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bShowParticleVariablesVertical) == 179, "Offset mismatch for FNiagaraDebugHUDSettingsData::bShowParticleVariablesVertical");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bUseMaxParticlesToDisplay) == 180, "Offset mismatch for FNiagaraDebugHUDSettingsData::bUseMaxParticlesToDisplay");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, MaxParticlesToDisplay) == 184, "Offset mismatch for FNiagaraDebugHUDSettingsData::MaxParticlesToDisplay");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bUseParticleDisplayClip) == 188, "Offset mismatch for FNiagaraDebugHUDSettingsData::bUseParticleDisplayClip");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ParticleDisplayClip) == 192, "Offset mismatch for FNiagaraDebugHUDSettingsData::ParticleDisplayClip");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bUseParticleDisplayCenterRadius) == 208, "Offset mismatch for FNiagaraDebugHUDSettingsData::bUseParticleDisplayCenterRadius");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ParticleDisplayCenterRadius) == 212, "Offset mismatch for FNiagaraDebugHUDSettingsData::ParticleDisplayCenterRadius");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PerfReportFrames) == 216, "Offset mismatch for FNiagaraDebugHUDSettingsData::PerfReportFrames");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PerfSampleMode) == 220, "Offset mismatch for FNiagaraDebugHUDSettingsData::PerfSampleMode");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PerfUnits) == 224, "Offset mismatch for FNiagaraDebugHUDSettingsData::PerfUnits");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bShowPerfColumGameThreadOnly) == 228, "Offset mismatch for FNiagaraDebugHUDSettingsData::bShowPerfColumGameThreadOnly");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PerfGraphMode) == 232, "Offset mismatch for FNiagaraDebugHUDSettingsData::PerfGraphMode");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PerfHistoryFrames) == 236, "Offset mismatch for FNiagaraDebugHUDSettingsData::PerfHistoryFrames");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bUsePerfGraphTimeRange) == 240, "Offset mismatch for FNiagaraDebugHUDSettingsData::bUsePerfGraphTimeRange");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PerfGraphTimeRange) == 244, "Offset mismatch for FNiagaraDebugHUDSettingsData::PerfGraphTimeRange");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PerfGraphSize) == 248, "Offset mismatch for FNiagaraDebugHUDSettingsData::PerfGraphSize");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PerfGraphAxisColor) == 264, "Offset mismatch for FNiagaraDebugHUDSettingsData::PerfGraphAxisColor");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SmoothingWidth) == 280, "Offset mismatch for FNiagaraDebugHUDSettingsData::SmoothingWidth");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewFont) == 284, "Offset mismatch for FNiagaraDebugHUDSettingsData::OverviewFont");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewLocation) == 288, "Offset mismatch for FNiagaraDebugHUDSettingsData::OverviewLocation");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemTextOptions) == 304, "Offset mismatch for FNiagaraDebugHUDSettingsData::SystemTextOptions");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ParticleTextOptions) == 328, "Offset mismatch for FNiagaraDebugHUDSettingsData::ParticleTextOptions");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bDrawBoundsEnabled) == 352, "Offset mismatch for FNiagaraDebugHUDSettingsData::bDrawBoundsEnabled");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bDrawBoundsWireframe) == 353, "Offset mismatch for FNiagaraDebugHUDSettingsData::bDrawBoundsWireframe");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, DrawBoundsAlpha) == 356, "Offset mismatch for FNiagaraDebugHUDSettingsData::DrawBoundsAlpha");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, DefaultBackgroundColor) == 360, "Offset mismatch for FNiagaraDebugHUDSettingsData::DefaultBackgroundColor");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewHeadingColor) == 376, "Offset mismatch for FNiagaraDebugHUDSettingsData::OverviewHeadingColor");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewDetailColor) == 392, "Offset mismatch for FNiagaraDebugHUDSettingsData::OverviewDetailColor");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewDetailHighlightColor) == 408, "Offset mismatch for FNiagaraDebugHUDSettingsData::OverviewDetailHighlightColor");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, InWorldErrorTextColor) == 424, "Offset mismatch for FNiagaraDebugHUDSettingsData::InWorldErrorTextColor");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, InWorldTextColor) == 440, "Offset mismatch for FNiagaraDebugHUDSettingsData::InWorldTextColor");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, MessageInfoTextColor) == 456, "Offset mismatch for FNiagaraDebugHUDSettingsData::MessageInfoTextColor");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, MessageWarningTextColor) == 472, "Offset mismatch for FNiagaraDebugHUDSettingsData::MessageWarningTextColor");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, MessageErrorTextColor) == 488, "Offset mismatch for FNiagaraDebugHUDSettingsData::MessageErrorTextColor");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemColorTableOpacity) == 504, "Offset mismatch for FNiagaraDebugHUDSettingsData::SystemColorTableOpacity");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemColorSeed) == 508, "Offset mismatch for FNiagaraDebugHUDSettingsData::SystemColorSeed");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemColorHSVMin) == 512, "Offset mismatch for FNiagaraDebugHUDSettingsData::SystemColorHSVMin");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemColorHSVMax) == 536, "Offset mismatch for FNiagaraDebugHUDSettingsData::SystemColorHSVMax");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PlaybackMode) == 560, "Offset mismatch for FNiagaraDebugHUDSettingsData::PlaybackMode");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bPlaybackRateEnabled) == 561, "Offset mismatch for FNiagaraDebugHUDSettingsData::bPlaybackRateEnabled");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PlaybackRate) == 564, "Offset mismatch for FNiagaraDebugHUDSettingsData::PlaybackRate");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, bLoopTimeEnabled) == 568, "Offset mismatch for FNiagaraDebugHUDSettingsData::bLoopTimeEnabled");
static_assert(offsetof(FNiagaraDebugHUDSettingsData, LoopTime) == 572, "Offset mismatch for FNiagaraDebugHUDSettingsData::LoopTime");

// /Script/Niagara.NiagaraDebugHUDVariable
// Kind: ScriptStruct; super: none
struct FNiagaraDebugHUDVariable
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString Name; // 0x0008 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FNiagaraDebugHUDVariable, bEnabled) == 0, "Offset mismatch for FNiagaraDebugHUDVariable::bEnabled");
static_assert(offsetof(FNiagaraDebugHUDVariable, Name) == 8, "Offset mismatch for FNiagaraDebugHUDVariable::Name");

// /Script/Niagara.NiagaraDebugHudTextOptions
// Kind: ScriptStruct; super: none
struct FNiagaraDebugHudTextOptions
{
public:
    std::uint8_t Font; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t HorizontalAlignment; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t VerticalAlignment; // 0x0005 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0006
    std::uint8_t ScreenOffset[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraDebugHudTextOptions, Font) == 0, "Offset mismatch for FNiagaraDebugHudTextOptions::Font");
static_assert(offsetof(FNiagaraDebugHudTextOptions, HorizontalAlignment) == 4, "Offset mismatch for FNiagaraDebugHudTextOptions::HorizontalAlignment");
static_assert(offsetof(FNiagaraDebugHudTextOptions, VerticalAlignment) == 5, "Offset mismatch for FNiagaraDebugHudTextOptions::VerticalAlignment");
static_assert(offsetof(FNiagaraDebugHudTextOptions, ScreenOffset) == 8, "Offset mismatch for FNiagaraDebugHudTextOptions::ScreenOffset");

// /Script/Niagara.NiagaraDebuggerAcceptConnection
// Kind: ScriptStruct; super: none
struct FNiagaraDebuggerAcceptConnection
{
public:
    std::uint8_t SessionID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t InstanceID[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraDebuggerAcceptConnection, SessionID) == 0, "Offset mismatch for FNiagaraDebuggerAcceptConnection::SessionID");
static_assert(offsetof(FNiagaraDebuggerAcceptConnection, InstanceID) == 16, "Offset mismatch for FNiagaraDebuggerAcceptConnection::InstanceID");

// /Script/Niagara.NiagaraDebuggerConnectionClosed
// Kind: ScriptStruct; super: none
struct FNiagaraDebuggerConnectionClosed
{
public:
    std::uint8_t SessionID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t InstanceID[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraDebuggerConnectionClosed, SessionID) == 0, "Offset mismatch for FNiagaraDebuggerConnectionClosed::SessionID");
static_assert(offsetof(FNiagaraDebuggerConnectionClosed, InstanceID) == 16, "Offset mismatch for FNiagaraDebuggerConnectionClosed::InstanceID");

// /Script/Niagara.NiagaraDebuggerExecuteConsoleCommand
// Kind: ScriptStruct; super: none
struct FNiagaraDebuggerExecuteConsoleCommand
{
public:
    FString Command; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t bRequiresWorld; // 0x0010 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNiagaraDebuggerExecuteConsoleCommand, Command) == 0, "Offset mismatch for FNiagaraDebuggerExecuteConsoleCommand::Command");
static_assert(offsetof(FNiagaraDebuggerExecuteConsoleCommand, bRequiresWorld) == 16, "Offset mismatch for FNiagaraDebuggerExecuteConsoleCommand::bRequiresWorld");

// /Script/Niagara.NiagaraDebuggerOutlinerUpdate
// Kind: ScriptStruct; super: none
struct FNiagaraDebuggerOutlinerUpdate
{
public:
    std::uint8_t OutlinerData[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraDebuggerOutlinerUpdate, OutlinerData) == 0, "Offset mismatch for FNiagaraDebuggerOutlinerUpdate::OutlinerData");

// /Script/Niagara.NiagaraDebuggerRequestConnection
// Kind: ScriptStruct; super: none
struct FNiagaraDebuggerRequestConnection
{
public:
    std::uint8_t SessionID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t InstanceID[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraDebuggerRequestConnection, SessionID) == 0, "Offset mismatch for FNiagaraDebuggerRequestConnection::SessionID");
static_assert(offsetof(FNiagaraDebuggerRequestConnection, InstanceID) == 16, "Offset mismatch for FNiagaraDebuggerRequestConnection::InstanceID");

// /Script/Niagara.NiagaraDetailsLevelScaleOverrides
// Kind: ScriptStruct; super: none
struct FNiagaraDetailsLevelScaleOverrides
{
public:
    float Low; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Medium; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float High; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float Epic; // 0x000C (Size: 0x4, Type: FloatProperty)
    float Cine; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNiagaraDetailsLevelScaleOverrides, Low) == 0, "Offset mismatch for FNiagaraDetailsLevelScaleOverrides::Low");
static_assert(offsetof(FNiagaraDetailsLevelScaleOverrides, Medium) == 4, "Offset mismatch for FNiagaraDetailsLevelScaleOverrides::Medium");
static_assert(offsetof(FNiagaraDetailsLevelScaleOverrides, High) == 8, "Offset mismatch for FNiagaraDetailsLevelScaleOverrides::High");
static_assert(offsetof(FNiagaraDetailsLevelScaleOverrides, Epic) == 12, "Offset mismatch for FNiagaraDetailsLevelScaleOverrides::Epic");
static_assert(offsetof(FNiagaraDetailsLevelScaleOverrides, Cine) == 16, "Offset mismatch for FNiagaraDetailsLevelScaleOverrides::Cine");

// /Script/Niagara.NiagaraDeviceProfileStateEntry
// Kind: ScriptStruct; super: none
struct FNiagaraDeviceProfileStateEntry
{
public:
    std::uint8_t ProfileName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint32_t QualityLevelMask; // 0x0004 (Size: 0x4, Type: UInt32Property)
    std::uint32_t SetQualityLevelMask; // 0x0008 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FNiagaraDeviceProfileStateEntry, ProfileName) == 0, "Offset mismatch for FNiagaraDeviceProfileStateEntry::ProfileName");
static_assert(offsetof(FNiagaraDeviceProfileStateEntry, QualityLevelMask) == 4, "Offset mismatch for FNiagaraDeviceProfileStateEntry::QualityLevelMask");
static_assert(offsetof(FNiagaraDeviceProfileStateEntry, SetQualityLevelMask) == 8, "Offset mismatch for FNiagaraDeviceProfileStateEntry::SetQualityLevelMask");

// /Script/Niagara.NiagaraDistributionBase
// Kind: ScriptStruct; super: none
struct FNiagaraDistributionBase
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Mode; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AddressMode; // 0x0009 (Size: 0x1, Type: BoolProperty)
    // 0x0009 BoolProperty InterpolationMode (shared storage)
    std::uint8_t LookupValueMode; // 0x000A (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x1]; // 0x000B
    std::uint8_t ParameterBinding[0xC]; // 0x000C (Size: 0xC, Type: StructProperty)
    std::uint8_t ParameterExpression[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraDistributionBase, Mode) == 8, "Offset mismatch for FNiagaraDistributionBase::Mode");
static_assert(offsetof(FNiagaraDistributionBase, AddressMode) == 9, "Offset mismatch for FNiagaraDistributionBase::AddressMode");
static_assert(offsetof(FNiagaraDistributionBase, LookupValueMode) == 10, "Offset mismatch for FNiagaraDistributionBase::LookupValueMode");
static_assert(offsetof(FNiagaraDistributionBase, ParameterBinding) == 12, "Offset mismatch for FNiagaraDistributionBase::ParameterBinding");
static_assert(offsetof(FNiagaraDistributionBase, ParameterExpression) == 24, "Offset mismatch for FNiagaraDistributionBase::ParameterExpression");

// /Script/Niagara.NiagaraDistributionColor
// Kind: ScriptStruct; super: NiagaraDistributionBase
struct FNiagaraDistributionColor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Values; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ValuesTimeRange[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraDistributionColor, Values) == 40, "Offset mismatch for FNiagaraDistributionColor::Values");
static_assert(offsetof(FNiagaraDistributionColor, ValuesTimeRange) == 56, "Offset mismatch for FNiagaraDistributionColor::ValuesTimeRange");

// /Script/Niagara.NiagaraDistributionCurveFloat
// Kind: ScriptStruct; super: NiagaraDistributionBase
struct FNiagaraDistributionCurveFloat
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Values; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ValuesTimeRange[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraDistributionCurveFloat, Values) == 40, "Offset mismatch for FNiagaraDistributionCurveFloat::Values");
static_assert(offsetof(FNiagaraDistributionCurveFloat, ValuesTimeRange) == 56, "Offset mismatch for FNiagaraDistributionCurveFloat::ValuesTimeRange");

// /Script/Niagara.NiagaraDistributionCurveVector3
// Kind: ScriptStruct; super: NiagaraDistributionBase
struct FNiagaraDistributionCurveVector3
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Values; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ValuesTimeRange[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraDistributionCurveVector3, Values) == 40, "Offset mismatch for FNiagaraDistributionCurveVector3::Values");
static_assert(offsetof(FNiagaraDistributionCurveVector3, ValuesTimeRange) == 56, "Offset mismatch for FNiagaraDistributionCurveVector3::ValuesTimeRange");

// /Script/Niagara.NiagaraDistributionFloat
// Kind: ScriptStruct; super: NiagaraDistributionBase
struct FNiagaraDistributionFloat
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Values; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ValuesTimeRange[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraDistributionFloat, Values) == 40, "Offset mismatch for FNiagaraDistributionFloat::Values");
static_assert(offsetof(FNiagaraDistributionFloat, ValuesTimeRange) == 56, "Offset mismatch for FNiagaraDistributionFloat::ValuesTimeRange");

// /Script/Niagara.NiagaraDistributionPosition
// Kind: ScriptStruct; super: NiagaraDistributionVector3
struct FNiagaraDistributionPosition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Values; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ValuesTimeRange[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraDistributionPosition, Values) == 40, "Offset mismatch for FNiagaraDistributionPosition::Values");
static_assert(offsetof(FNiagaraDistributionPosition, ValuesTimeRange) == 56, "Offset mismatch for FNiagaraDistributionPosition::ValuesTimeRange");

// /Script/Niagara.NiagaraDistributionRangeColor
// Kind: ScriptStruct; super: NiagaraDistributionBase
struct FNiagaraDistributionRangeColor
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t min[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t max[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraDistributionRangeColor, min) == 40, "Offset mismatch for FNiagaraDistributionRangeColor::min");
static_assert(offsetof(FNiagaraDistributionRangeColor, max) == 56, "Offset mismatch for FNiagaraDistributionRangeColor::max");

// /Script/Niagara.NiagaraDistributionRangeFloat
// Kind: ScriptStruct; super: NiagaraDistributionBase
struct FNiagaraDistributionRangeFloat
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float min; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float max; // 0x002C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNiagaraDistributionRangeFloat, min) == 40, "Offset mismatch for FNiagaraDistributionRangeFloat::min");
static_assert(offsetof(FNiagaraDistributionRangeFloat, max) == 44, "Offset mismatch for FNiagaraDistributionRangeFloat::max");

// /Script/Niagara.NiagaraDistributionRangeInt
// Kind: ScriptStruct; super: none
struct FNiagaraDistributionRangeInt
{
public:
    std::uint8_t Mode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t ParameterBinding[0xC]; // 0x0004 (Size: 0xC, Type: StructProperty)
    std::uint8_t ParameterExpression[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::int32_t min; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t max; // 0x0024 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNiagaraDistributionRangeInt, Mode) == 0, "Offset mismatch for FNiagaraDistributionRangeInt::Mode");
static_assert(offsetof(FNiagaraDistributionRangeInt, ParameterBinding) == 4, "Offset mismatch for FNiagaraDistributionRangeInt::ParameterBinding");
static_assert(offsetof(FNiagaraDistributionRangeInt, ParameterExpression) == 16, "Offset mismatch for FNiagaraDistributionRangeInt::ParameterExpression");
static_assert(offsetof(FNiagaraDistributionRangeInt, min) == 32, "Offset mismatch for FNiagaraDistributionRangeInt::min");
static_assert(offsetof(FNiagaraDistributionRangeInt, max) == 36, "Offset mismatch for FNiagaraDistributionRangeInt::max");

// /Script/Niagara.NiagaraDistributionRangeRotator
// Kind: ScriptStruct; super: NiagaraDistributionBase
struct FNiagaraDistributionRangeRotator
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t min[0xC]; // 0x0028 (Size: 0xC, Type: StructProperty)
    std::uint8_t max[0x1]; // 0x0034 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraDistributionRangeRotator, min) == 40, "Offset mismatch for FNiagaraDistributionRangeRotator::min");
static_assert(offsetof(FNiagaraDistributionRangeRotator, max) == 52, "Offset mismatch for FNiagaraDistributionRangeRotator::max");

// /Script/Niagara.NiagaraDistributionRangeVector2
// Kind: ScriptStruct; super: NiagaraDistributionBase
struct FNiagaraDistributionRangeVector2
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t min[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t max[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraDistributionRangeVector2, min) == 40, "Offset mismatch for FNiagaraDistributionRangeVector2::min");
static_assert(offsetof(FNiagaraDistributionRangeVector2, max) == 48, "Offset mismatch for FNiagaraDistributionRangeVector2::max");

// /Script/Niagara.NiagaraDistributionRangeVector3
// Kind: ScriptStruct; super: NiagaraDistributionBase
struct FNiagaraDistributionRangeVector3
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t min[0xC]; // 0x0028 (Size: 0xC, Type: StructProperty)
    std::uint8_t max[0x1]; // 0x0034 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraDistributionRangeVector3, min) == 40, "Offset mismatch for FNiagaraDistributionRangeVector3::min");
static_assert(offsetof(FNiagaraDistributionRangeVector3, max) == 52, "Offset mismatch for FNiagaraDistributionRangeVector3::max");

// /Script/Niagara.NiagaraDistributionVector2
// Kind: ScriptStruct; super: NiagaraDistributionBase
struct FNiagaraDistributionVector2
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Values; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ValuesTimeRange[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraDistributionVector2, Values) == 40, "Offset mismatch for FNiagaraDistributionVector2::Values");
static_assert(offsetof(FNiagaraDistributionVector2, ValuesTimeRange) == 56, "Offset mismatch for FNiagaraDistributionVector2::ValuesTimeRange");

// /Script/Niagara.NiagaraDistributionVector3
// Kind: ScriptStruct; super: NiagaraDistributionBase
struct FNiagaraDistributionVector3
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Values; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ValuesTimeRange[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraDistributionVector3, Values) == 40, "Offset mismatch for FNiagaraDistributionVector3::Values");
static_assert(offsetof(FNiagaraDistributionVector3, ValuesTimeRange) == 56, "Offset mismatch for FNiagaraDistributionVector3::ValuesTimeRange");

// /Script/Niagara.NiagaraDouble
// Kind: ScriptStruct; super: none
struct FNiagaraDouble
{
public:
    double Value; // 0x0000 (Size: 0x8, Type: DoubleProperty)
};

static_assert(offsetof(FNiagaraDouble, Value) == 0, "Offset mismatch for FNiagaraDouble::Value");

// /Script/Niagara.NiagaraDynamicMeshMaterial
// Kind: ScriptStruct; super: none
struct FNiagaraDynamicMeshMaterial
{
public:
    void* Material; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MaterialUserParamBinding[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraDynamicMeshMaterial, Material) == 0, "Offset mismatch for FNiagaraDynamicMeshMaterial::Material");
static_assert(offsetof(FNiagaraDynamicMeshMaterial, MaterialUserParamBinding) == 8, "Offset mismatch for FNiagaraDynamicMeshMaterial::MaterialUserParamBinding");

// /Script/Niagara.NiagaraDynamicMeshSection
// Kind: ScriptStruct; super: none
struct FNiagaraDynamicMeshSection
{
public:
    std::int32_t NumTriangles; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t MaterialIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNiagaraDynamicMeshSection, NumTriangles) == 0, "Offset mismatch for FNiagaraDynamicMeshSection::NumTriangles");
static_assert(offsetof(FNiagaraDynamicMeshSection, MaterialIndex) == 4, "Offset mismatch for FNiagaraDynamicMeshSection::MaterialIndex");

// /Script/Niagara.NiagaraEmitterCompiledData
// Kind: ScriptStruct; super: none
struct FNiagaraEmitterCompiledData
{
public:
    TArray<void*> SpawnAttributes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t EmitterSpawnIntervalVar[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t EmitterInterpSpawnStartDTVar[0x18]; // 0x0028 (Size: 0x18, Type: StructProperty)
    std::uint8_t EmitterSpawnGroupVar[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t EmitterAgeVar[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t EmitterRandomSeedVar[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t EmitterInstanceSeedVar[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t EmitterTotalSpawnedParticlesVar[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t DataSetCompiledData[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraEmitterCompiledData, SpawnAttributes) == 0, "Offset mismatch for FNiagaraEmitterCompiledData::SpawnAttributes");
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterSpawnIntervalVar) == 16, "Offset mismatch for FNiagaraEmitterCompiledData::EmitterSpawnIntervalVar");
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterInterpSpawnStartDTVar) == 40, "Offset mismatch for FNiagaraEmitterCompiledData::EmitterInterpSpawnStartDTVar");
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterSpawnGroupVar) == 64, "Offset mismatch for FNiagaraEmitterCompiledData::EmitterSpawnGroupVar");
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterAgeVar) == 88, "Offset mismatch for FNiagaraEmitterCompiledData::EmitterAgeVar");
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterRandomSeedVar) == 112, "Offset mismatch for FNiagaraEmitterCompiledData::EmitterRandomSeedVar");
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterInstanceSeedVar) == 136, "Offset mismatch for FNiagaraEmitterCompiledData::EmitterInstanceSeedVar");
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterTotalSpawnedParticlesVar) == 160, "Offset mismatch for FNiagaraEmitterCompiledData::EmitterTotalSpawnedParticlesVar");
static_assert(offsetof(FNiagaraEmitterCompiledData, DataSetCompiledData) == 184, "Offset mismatch for FNiagaraEmitterCompiledData::DataSetCompiledData");

// /Script/Niagara.NiagaraEmitterHandle
// Kind: ScriptStruct; super: none
struct FNiagaraEmitterHandle
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ID[0x10]; // 0x0004 (Size: 0x10, Type: StructProperty)
    std::uint8_t IdName[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsEnabled; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EmitterMode; // 0x0019 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x6]; // 0x001A
    std::uint8_t VersionedInstance[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    void* StatelessEmitter; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FNiagaraEmitterHandle, Name) == 0, "Offset mismatch for FNiagaraEmitterHandle::Name");
static_assert(offsetof(FNiagaraEmitterHandle, ID) == 4, "Offset mismatch for FNiagaraEmitterHandle::ID");
static_assert(offsetof(FNiagaraEmitterHandle, IdName) == 20, "Offset mismatch for FNiagaraEmitterHandle::IdName");
static_assert(offsetof(FNiagaraEmitterHandle, bIsEnabled) == 24, "Offset mismatch for FNiagaraEmitterHandle::bIsEnabled");
static_assert(offsetof(FNiagaraEmitterHandle, EmitterMode) == 25, "Offset mismatch for FNiagaraEmitterHandle::EmitterMode");
static_assert(offsetof(FNiagaraEmitterHandle, VersionedInstance) == 32, "Offset mismatch for FNiagaraEmitterHandle::VersionedInstance");
static_assert(offsetof(FNiagaraEmitterHandle, StatelessEmitter) == 56, "Offset mismatch for FNiagaraEmitterHandle::StatelessEmitter");

// /Script/Niagara.NiagaraEmitterID
// Kind: ScriptStruct; super: none
struct FNiagaraEmitterID
{
public:
    std::int32_t ID; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNiagaraEmitterID, ID) == 0, "Offset mismatch for FNiagaraEmitterID::ID");

// /Script/Niagara.NiagaraEmitterScalabilityOverride
// Kind: ScriptStruct; super: NiagaraEmitterScalabilitySettings
struct FNiagaraEmitterScalabilityOverride
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bOverrideSpawnCountScale; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNiagaraEmitterScalabilityOverride, bOverrideSpawnCountScale) == 56, "Offset mismatch for FNiagaraEmitterScalabilityOverride::bOverrideSpawnCountScale");

// /Script/Niagara.NiagaraEmitterScalabilityOverrides
// Kind: ScriptStruct; super: none
struct FNiagaraEmitterScalabilityOverrides
{
public:
    TArray<void*> Overrides; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraEmitterScalabilityOverrides, Overrides) == 0, "Offset mismatch for FNiagaraEmitterScalabilityOverrides::Overrides");

// /Script/Niagara.NiagaraEmitterScalabilitySettings
// Kind: ScriptStruct; super: none
struct FNiagaraEmitterScalabilitySettings
{
public:
    std::uint8_t Platforms[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t bScaleSpawnCount; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0031
    float SpawnCountScale; // 0x0034 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNiagaraEmitterScalabilitySettings, Platforms) == 0, "Offset mismatch for FNiagaraEmitterScalabilitySettings::Platforms");
static_assert(offsetof(FNiagaraEmitterScalabilitySettings, bScaleSpawnCount) == 48, "Offset mismatch for FNiagaraEmitterScalabilitySettings::bScaleSpawnCount");
static_assert(offsetof(FNiagaraEmitterScalabilitySettings, SpawnCountScale) == 52, "Offset mismatch for FNiagaraEmitterScalabilitySettings::SpawnCountScale");

// /Script/Niagara.NiagaraEmitterScalabilitySettingsArray
// Kind: ScriptStruct; super: none
struct FNiagaraEmitterScalabilitySettingsArray
{
public:
    TArray<void*> Settings; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraEmitterScalabilitySettingsArray, Settings) == 0, "Offset mismatch for FNiagaraEmitterScalabilitySettingsArray::Settings");

// /Script/Niagara.NiagaraEmitterScriptProperties
// Kind: ScriptStruct; super: none
struct FNiagaraEmitterScriptProperties
{
public:
    void* Script; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> EventReceivers; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EventGenerators; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraEmitterScriptProperties, Script) == 0, "Offset mismatch for FNiagaraEmitterScriptProperties::Script");
static_assert(offsetof(FNiagaraEmitterScriptProperties, EventReceivers) == 8, "Offset mismatch for FNiagaraEmitterScriptProperties::EventReceivers");
static_assert(offsetof(FNiagaraEmitterScriptProperties, EventGenerators) == 24, "Offset mismatch for FNiagaraEmitterScriptProperties::EventGenerators");

// /Script/Niagara.NiagaraEmitterStateData
// Kind: ScriptStruct; super: none
struct FNiagaraEmitterStateData
{
public:
    std::uint8_t InactiveResponse; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LoopBehavior; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::int32_t LoopCount; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t LoopDurationMode; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0009
    std::uint8_t LoopDuration[0x30]; // 0x0010 (Size: 0x30, Type: StructProperty)
    std::uint8_t LoopDelay[0x30]; // 0x0040 (Size: 0x30, Type: StructProperty)
    std::uint8_t bDelayFirstLoopOnly; // 0x0070 (Size: 0x1, Type: BoolProperty)
    // 0x0070 BoolProperty bEnableDistanceCulling (shared storage)
    // 0x0070 BoolProperty bEnableVisibilityCulling (shared storage)
    // 0x0070 BoolProperty bLoopDelayEnabled (shared storage)
    // 0x0070 BoolProperty bMaxDistanceEnabled (shared storage)
    // 0x0070 BoolProperty bMinDistanceEnabled (shared storage)
    // 0x0070 BoolProperty bRecalculateDelayEachLoop (shared storage)
    // 0x0070 BoolProperty bRecalculateDurationEachLoop (shared storage)
    std::uint8_t bResetAgeOnAwaken; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0072
    float MinDistance; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MinDistanceReaction; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0079
    float MaxDistance; // 0x007C (Size: 0x4, Type: FloatProperty)
    std::uint8_t MaxDistanceReaction; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0081
    std::uint8_t VisibilityCullReaction; // 0x0084 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0085
    float VisibilityCullDelay; // 0x0088 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNiagaraEmitterStateData, InactiveResponse) == 0, "Offset mismatch for FNiagaraEmitterStateData::InactiveResponse");
static_assert(offsetof(FNiagaraEmitterStateData, LoopBehavior) == 1, "Offset mismatch for FNiagaraEmitterStateData::LoopBehavior");
static_assert(offsetof(FNiagaraEmitterStateData, LoopCount) == 4, "Offset mismatch for FNiagaraEmitterStateData::LoopCount");
static_assert(offsetof(FNiagaraEmitterStateData, LoopDurationMode) == 8, "Offset mismatch for FNiagaraEmitterStateData::LoopDurationMode");
static_assert(offsetof(FNiagaraEmitterStateData, LoopDuration) == 16, "Offset mismatch for FNiagaraEmitterStateData::LoopDuration");
static_assert(offsetof(FNiagaraEmitterStateData, LoopDelay) == 64, "Offset mismatch for FNiagaraEmitterStateData::LoopDelay");
static_assert(offsetof(FNiagaraEmitterStateData, bDelayFirstLoopOnly) == 112, "Offset mismatch for FNiagaraEmitterStateData::bDelayFirstLoopOnly");
static_assert(offsetof(FNiagaraEmitterStateData, bResetAgeOnAwaken) == 113, "Offset mismatch for FNiagaraEmitterStateData::bResetAgeOnAwaken");
static_assert(offsetof(FNiagaraEmitterStateData, MinDistance) == 116, "Offset mismatch for FNiagaraEmitterStateData::MinDistance");
static_assert(offsetof(FNiagaraEmitterStateData, MinDistanceReaction) == 120, "Offset mismatch for FNiagaraEmitterStateData::MinDistanceReaction");
static_assert(offsetof(FNiagaraEmitterStateData, MaxDistance) == 124, "Offset mismatch for FNiagaraEmitterStateData::MaxDistance");
static_assert(offsetof(FNiagaraEmitterStateData, MaxDistanceReaction) == 128, "Offset mismatch for FNiagaraEmitterStateData::MaxDistanceReaction");
static_assert(offsetof(FNiagaraEmitterStateData, VisibilityCullReaction) == 132, "Offset mismatch for FNiagaraEmitterStateData::VisibilityCullReaction");
static_assert(offsetof(FNiagaraEmitterStateData, VisibilityCullDelay) == 136, "Offset mismatch for FNiagaraEmitterStateData::VisibilityCullDelay");

// /Script/Niagara.NiagaraEnumParameterMetaData
// Kind: ScriptStruct; super: none
struct FNiagaraEnumParameterMetaData
{
public:
    FName OverrideName; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* IconOverride; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bUseColorOverride; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    std::uint8_t ColorOverride[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraEnumParameterMetaData, OverrideName) == 0, "Offset mismatch for FNiagaraEnumParameterMetaData::OverrideName");
static_assert(offsetof(FNiagaraEnumParameterMetaData, IconOverride) == 8, "Offset mismatch for FNiagaraEnumParameterMetaData::IconOverride");
static_assert(offsetof(FNiagaraEnumParameterMetaData, bUseColorOverride) == 16, "Offset mismatch for FNiagaraEnumParameterMetaData::bUseColorOverride");
static_assert(offsetof(FNiagaraEnumParameterMetaData, ColorOverride) == 20, "Offset mismatch for FNiagaraEnumParameterMetaData::ColorOverride");

// /Script/Niagara.NiagaraEventGeneratorProperties
// Kind: ScriptStruct; super: none
struct FNiagaraEventGeneratorProperties
{
public:
    std::int32_t MaxEventsPerFrame; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t ID[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t DataSetCompiledData[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraEventGeneratorProperties, MaxEventsPerFrame) == 0, "Offset mismatch for FNiagaraEventGeneratorProperties::MaxEventsPerFrame");
static_assert(offsetof(FNiagaraEventGeneratorProperties, ID) == 4, "Offset mismatch for FNiagaraEventGeneratorProperties::ID");
static_assert(offsetof(FNiagaraEventGeneratorProperties, DataSetCompiledData) == 8, "Offset mismatch for FNiagaraEventGeneratorProperties::DataSetCompiledData");

// /Script/Niagara.NiagaraEventReceiverProperties
// Kind: ScriptStruct; super: none
struct FNiagaraEventReceiverProperties
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t SourceEventGenerator[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    FName SourceEmitter; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FNiagaraEventReceiverProperties, Name) == 0, "Offset mismatch for FNiagaraEventReceiverProperties::Name");
static_assert(offsetof(FNiagaraEventReceiverProperties, SourceEventGenerator) == 4, "Offset mismatch for FNiagaraEventReceiverProperties::SourceEventGenerator");
static_assert(offsetof(FNiagaraEventReceiverProperties, SourceEmitter) == 8, "Offset mismatch for FNiagaraEventReceiverProperties::SourceEmitter");

// /Script/Niagara.NiagaraEventScriptProperties
// Kind: ScriptStruct; super: NiagaraEmitterScriptProperties
struct FNiagaraEventScriptProperties
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t ExecutionMode; // 0x0028 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint32_t SpawnNumber; // 0x002C (Size: 0x4, Type: UInt32Property)
    std::uint32_t MaxEventsPerFrame; // 0x0030 (Size: 0x4, Type: UInt32Property)
    std::uint8_t SourceEmitterID[0x10]; // 0x0034 (Size: 0x10, Type: StructProperty)
    std::uint8_t SourceEventName[0x4]; // 0x0044 (Size: 0x4, Type: NameProperty)
    std::uint8_t bRandomSpawnNumber; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0049
    std::uint32_t MinSpawnNumber; // 0x004C (Size: 0x4, Type: UInt32Property)
    std::uint8_t UpdateAttributeInitialValues; // 0x0050 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNiagaraEventScriptProperties, ExecutionMode) == 40, "Offset mismatch for FNiagaraEventScriptProperties::ExecutionMode");
static_assert(offsetof(FNiagaraEventScriptProperties, SpawnNumber) == 44, "Offset mismatch for FNiagaraEventScriptProperties::SpawnNumber");
static_assert(offsetof(FNiagaraEventScriptProperties, MaxEventsPerFrame) == 48, "Offset mismatch for FNiagaraEventScriptProperties::MaxEventsPerFrame");
static_assert(offsetof(FNiagaraEventScriptProperties, SourceEmitterID) == 52, "Offset mismatch for FNiagaraEventScriptProperties::SourceEmitterID");
static_assert(offsetof(FNiagaraEventScriptProperties, SourceEventName) == 68, "Offset mismatch for FNiagaraEventScriptProperties::SourceEventName");
static_assert(offsetof(FNiagaraEventScriptProperties, bRandomSpawnNumber) == 72, "Offset mismatch for FNiagaraEventScriptProperties::bRandomSpawnNumber");
static_assert(offsetof(FNiagaraEventScriptProperties, MinSpawnNumber) == 76, "Offset mismatch for FNiagaraEventScriptProperties::MinSpawnNumber");
static_assert(offsetof(FNiagaraEventScriptProperties, UpdateAttributeInitialValues) == 80, "Offset mismatch for FNiagaraEventScriptProperties::UpdateAttributeInitialValues");

// /Script/Niagara.NiagaraExternalUObjectInfo
// Kind: ScriptStruct; super: none
struct FNiagaraExternalUObjectInfo
{
public:
    std::uint8_t Variable[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    FName ExternalName; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FNiagaraExternalUObjectInfo, Variable) == 0, "Offset mismatch for FNiagaraExternalUObjectInfo::Variable");
static_assert(offsetof(FNiagaraExternalUObjectInfo, ExternalName) == 8, "Offset mismatch for FNiagaraExternalUObjectInfo::ExternalName");

// /Script/Niagara.NiagaraFloat
// Kind: ScriptStruct; super: none
struct FNiagaraFloat
{
public:
    float Value; // 0x0000 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNiagaraFloat, Value) == 0, "Offset mismatch for FNiagaraFloat::Value");

// /Script/Niagara.NiagaraFunctionSignature
// Kind: ScriptStruct; super: none
struct FNiagaraFunctionSignature
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> Inputs; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Outputs; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OwnerName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::uint8_t bExperimental; // 0x002C (Size: 0x1, Type: BoolProperty)
    // 0x002C BoolProperty bMemberFunction (shared storage)
    // 0x002C BoolProperty bReadFunction (shared storage)
    // 0x002C BoolProperty bRequiresContext (shared storage)
    // 0x002C BoolProperty bRequiresExecPin (shared storage)
    // 0x002C BoolProperty bSupportsCPU (shared storage)
    // 0x002C BoolProperty bSupportsGPU (shared storage)
    // 0x002C BoolProperty bWriteFunction (shared storage)
    std::uint8_t bHidden; // 0x002D (Size: 0x1, Type: BoolProperty)
    // 0x002D BoolProperty bIsCompileTagGenerator (shared storage)
    // 0x002D BoolProperty bSoftDeprecatedFunction (shared storage)
    std::uint8_t Pad_0000[0x2]; // 0x002E
    std::int32_t ModuleUsageBitmask; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint16_t MiscUsageBitMask; // 0x0034 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0001[0x2]; // 0x0036
    std::int32_t ContextStageIndex; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int16_t RequiredInputs; // 0x003C (Size: 0x2, Type: Int16Property)
    std::int16_t RequiredOutputs; // 0x003E (Size: 0x2, Type: Int16Property)
    TMap<void*, void*> FunctionSpecifiers; // 0x0040 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FNiagaraFunctionSignature, Name) == 0, "Offset mismatch for FNiagaraFunctionSignature::Name");
static_assert(offsetof(FNiagaraFunctionSignature, Inputs) == 8, "Offset mismatch for FNiagaraFunctionSignature::Inputs");
static_assert(offsetof(FNiagaraFunctionSignature, Outputs) == 24, "Offset mismatch for FNiagaraFunctionSignature::Outputs");
static_assert(offsetof(FNiagaraFunctionSignature, OwnerName) == 40, "Offset mismatch for FNiagaraFunctionSignature::OwnerName");
static_assert(offsetof(FNiagaraFunctionSignature, bExperimental) == 44, "Offset mismatch for FNiagaraFunctionSignature::bExperimental");
static_assert(offsetof(FNiagaraFunctionSignature, bHidden) == 45, "Offset mismatch for FNiagaraFunctionSignature::bHidden");
static_assert(offsetof(FNiagaraFunctionSignature, ModuleUsageBitmask) == 48, "Offset mismatch for FNiagaraFunctionSignature::ModuleUsageBitmask");
static_assert(offsetof(FNiagaraFunctionSignature, MiscUsageBitMask) == 52, "Offset mismatch for FNiagaraFunctionSignature::MiscUsageBitMask");
static_assert(offsetof(FNiagaraFunctionSignature, ContextStageIndex) == 56, "Offset mismatch for FNiagaraFunctionSignature::ContextStageIndex");
static_assert(offsetof(FNiagaraFunctionSignature, RequiredInputs) == 60, "Offset mismatch for FNiagaraFunctionSignature::RequiredInputs");
static_assert(offsetof(FNiagaraFunctionSignature, RequiredOutputs) == 62, "Offset mismatch for FNiagaraFunctionSignature::RequiredOutputs");
static_assert(offsetof(FNiagaraFunctionSignature, FunctionSpecifiers) == 64, "Offset mismatch for FNiagaraFunctionSignature::FunctionSpecifiers");

// /Script/Niagara.NiagaraGlobalBudgetScaling
// Kind: ScriptStruct; super: none
struct FNiagaraGlobalBudgetScaling
{
public:
    std::uint8_t bCullByGlobalBudget; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bScaleMaxDistanceByGlobalBudgetUse (shared storage)
    // 0x0000 BoolProperty bScaleMaxInstanceCountByGlobalBudgetUse (shared storage)
    // 0x0000 BoolProperty bScaleSystemInstanceCountByGlobalBudgetUse (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float MaxGlobalBudgetUsage; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t MaxDistanceScaleByGlobalBudgetUse[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t MaxInstanceCountScaleByGlobalBudgetUse[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t MaxSystemInstanceCountScaleByGlobalBudgetUse[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraGlobalBudgetScaling, bCullByGlobalBudget) == 0, "Offset mismatch for FNiagaraGlobalBudgetScaling::bCullByGlobalBudget");
static_assert(offsetof(FNiagaraGlobalBudgetScaling, MaxGlobalBudgetUsage) == 4, "Offset mismatch for FNiagaraGlobalBudgetScaling::MaxGlobalBudgetUsage");
static_assert(offsetof(FNiagaraGlobalBudgetScaling, MaxDistanceScaleByGlobalBudgetUse) == 8, "Offset mismatch for FNiagaraGlobalBudgetScaling::MaxDistanceScaleByGlobalBudgetUse");
static_assert(offsetof(FNiagaraGlobalBudgetScaling, MaxInstanceCountScaleByGlobalBudgetUse) == 24, "Offset mismatch for FNiagaraGlobalBudgetScaling::MaxInstanceCountScaleByGlobalBudgetUse");
static_assert(offsetof(FNiagaraGlobalBudgetScaling, MaxSystemInstanceCountScaleByGlobalBudgetUse) == 40, "Offset mismatch for FNiagaraGlobalBudgetScaling::MaxSystemInstanceCountScaleByGlobalBudgetUse");

// /Script/Niagara.NiagaraGraphViewSettings
// Kind: ScriptStruct; super: none
struct FNiagaraGraphViewSettings
{
public:
    std::uint8_t Location[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    float Zoom; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsValid; // 0x000C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNiagaraGraphViewSettings, Location) == 0, "Offset mismatch for FNiagaraGraphViewSettings::Location");
static_assert(offsetof(FNiagaraGraphViewSettings, Zoom) == 8, "Offset mismatch for FNiagaraGraphViewSettings::Zoom");
static_assert(offsetof(FNiagaraGraphViewSettings, bIsValid) == 12, "Offset mismatch for FNiagaraGraphViewSettings::bIsValid");

// /Script/Niagara.NiagaraHalf
// Kind: ScriptStruct; super: none
struct FNiagaraHalf
{
public:
    std::uint16_t Value; // 0x0000 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FNiagaraHalf, Value) == 0, "Offset mismatch for FNiagaraHalf::Value");

// /Script/Niagara.NiagaraHalfVector2
// Kind: ScriptStruct; super: none
struct FNiagaraHalfVector2
{
public:
    std::uint16_t X; // 0x0000 (Size: 0x2, Type: UInt16Property)
    std::uint16_t Y; // 0x0002 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FNiagaraHalfVector2, X) == 0, "Offset mismatch for FNiagaraHalfVector2::X");
static_assert(offsetof(FNiagaraHalfVector2, Y) == 2, "Offset mismatch for FNiagaraHalfVector2::Y");

// /Script/Niagara.NiagaraHalfVector3
// Kind: ScriptStruct; super: none
struct FNiagaraHalfVector3
{
public:
    std::uint16_t X; // 0x0000 (Size: 0x2, Type: UInt16Property)
    std::uint16_t Y; // 0x0002 (Size: 0x2, Type: UInt16Property)
    std::uint16_t Z; // 0x0004 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FNiagaraHalfVector3, X) == 0, "Offset mismatch for FNiagaraHalfVector3::X");
static_assert(offsetof(FNiagaraHalfVector3, Y) == 2, "Offset mismatch for FNiagaraHalfVector3::Y");
static_assert(offsetof(FNiagaraHalfVector3, Z) == 4, "Offset mismatch for FNiagaraHalfVector3::Z");

// /Script/Niagara.NiagaraHalfVector4
// Kind: ScriptStruct; super: none
struct FNiagaraHalfVector4
{
public:
    std::uint16_t X; // 0x0000 (Size: 0x2, Type: UInt16Property)
    std::uint16_t Y; // 0x0002 (Size: 0x2, Type: UInt16Property)
    std::uint16_t Z; // 0x0004 (Size: 0x2, Type: UInt16Property)
    std::uint16_t W; // 0x0006 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FNiagaraHalfVector4, X) == 0, "Offset mismatch for FNiagaraHalfVector4::X");
static_assert(offsetof(FNiagaraHalfVector4, Y) == 2, "Offset mismatch for FNiagaraHalfVector4::Y");
static_assert(offsetof(FNiagaraHalfVector4, Z) == 4, "Offset mismatch for FNiagaraHalfVector4::Z");
static_assert(offsetof(FNiagaraHalfVector4, W) == 6, "Offset mismatch for FNiagaraHalfVector4::W");

// /Script/Niagara.NiagaraID
// Kind: ScriptStruct; super: none
struct FNiagaraID
{
public:
    std::int32_t Index; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t AcquireTag; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNiagaraID, Index) == 0, "Offset mismatch for FNiagaraID::Index");
static_assert(offsetof(FNiagaraID, AcquireTag) == 4, "Offset mismatch for FNiagaraID::AcquireTag");

// /Script/Niagara.NiagaraInlineDynamicInputFormatToken
// Kind: ScriptStruct; super: none
struct FNiagaraInlineDynamicInputFormatToken
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraInputConditionMetadata
// Kind: ScriptStruct; super: none
struct FNiagaraInputConditionMetadata
{
public:
    FName InputName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> TargetValues; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraInputConditionMetadata, InputName) == 0, "Offset mismatch for FNiagaraInputConditionMetadata::InputName");
static_assert(offsetof(FNiagaraInputConditionMetadata, TargetValues) == 8, "Offset mismatch for FNiagaraInputConditionMetadata::TargetValues");

// /Script/Niagara.NiagaraInputParameterCustomization
// Kind: ScriptStruct; super: none
struct FNiagaraInputParameterCustomization
{
public:
    std::uint8_t WidgetType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bHasMinValue; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    float MinValue; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasMaxValue; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    float MaxValue; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bHasStepWidth; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0011
    float StepWidth; // 0x0014 (Size: 0x4, Type: FloatProperty)
    TArray<void*> InputDropdownValues; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> EnumStyleDropdownValues; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::int32_t MaxSegmentsPerRow; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x003C
    TArray<void*> SegmentValueOverrides; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bBroadcastValueChangesOnCommitOnly; // 0x0050 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNiagaraInputParameterCustomization, WidgetType) == 0, "Offset mismatch for FNiagaraInputParameterCustomization::WidgetType");
static_assert(offsetof(FNiagaraInputParameterCustomization, bHasMinValue) == 1, "Offset mismatch for FNiagaraInputParameterCustomization::bHasMinValue");
static_assert(offsetof(FNiagaraInputParameterCustomization, MinValue) == 4, "Offset mismatch for FNiagaraInputParameterCustomization::MinValue");
static_assert(offsetof(FNiagaraInputParameterCustomization, bHasMaxValue) == 8, "Offset mismatch for FNiagaraInputParameterCustomization::bHasMaxValue");
static_assert(offsetof(FNiagaraInputParameterCustomization, MaxValue) == 12, "Offset mismatch for FNiagaraInputParameterCustomization::MaxValue");
static_assert(offsetof(FNiagaraInputParameterCustomization, bHasStepWidth) == 16, "Offset mismatch for FNiagaraInputParameterCustomization::bHasStepWidth");
static_assert(offsetof(FNiagaraInputParameterCustomization, StepWidth) == 20, "Offset mismatch for FNiagaraInputParameterCustomization::StepWidth");
static_assert(offsetof(FNiagaraInputParameterCustomization, InputDropdownValues) == 24, "Offset mismatch for FNiagaraInputParameterCustomization::InputDropdownValues");
static_assert(offsetof(FNiagaraInputParameterCustomization, EnumStyleDropdownValues) == 40, "Offset mismatch for FNiagaraInputParameterCustomization::EnumStyleDropdownValues");
static_assert(offsetof(FNiagaraInputParameterCustomization, MaxSegmentsPerRow) == 56, "Offset mismatch for FNiagaraInputParameterCustomization::MaxSegmentsPerRow");
static_assert(offsetof(FNiagaraInputParameterCustomization, SegmentValueOverrides) == 64, "Offset mismatch for FNiagaraInputParameterCustomization::SegmentValueOverrides");
static_assert(offsetof(FNiagaraInputParameterCustomization, bBroadcastValueChangesOnCommitOnly) == 80, "Offset mismatch for FNiagaraInputParameterCustomization::bBroadcastValueChangesOnCommitOnly");

// /Script/Niagara.NiagaraInt32
// Kind: ScriptStruct; super: none
struct FNiagaraInt32
{
public:
    std::int32_t Value; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNiagaraInt32, Value) == 0, "Offset mismatch for FNiagaraInt32::Value");

// /Script/Niagara.NiagaraLinearRamp
// Kind: ScriptStruct; super: none
struct FNiagaraLinearRamp
{
public:
    float StartX; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float StartY; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float EndX; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float EndY; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNiagaraLinearRamp, StartX) == 0, "Offset mismatch for FNiagaraLinearRamp::StartX");
static_assert(offsetof(FNiagaraLinearRamp, StartY) == 4, "Offset mismatch for FNiagaraLinearRamp::StartY");
static_assert(offsetof(FNiagaraLinearRamp, EndX) == 8, "Offset mismatch for FNiagaraLinearRamp::EndX");
static_assert(offsetof(FNiagaraLinearRamp, EndY) == 12, "Offset mismatch for FNiagaraLinearRamp::EndY");

// /Script/Niagara.NiagaraLwcStructConverter
// Kind: ScriptStruct; super: none
struct FNiagaraLwcStructConverter
{
public:
    std::int32_t LWCSize; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t SWCSize; // 0x0004 (Size: 0x4, Type: IntProperty)
    TArray<void*> ConversionSteps; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraLwcStructConverter, LWCSize) == 0, "Offset mismatch for FNiagaraLwcStructConverter::LWCSize");
static_assert(offsetof(FNiagaraLwcStructConverter, SWCSize) == 4, "Offset mismatch for FNiagaraLwcStructConverter::SWCSize");
static_assert(offsetof(FNiagaraLwcStructConverter, ConversionSteps) == 8, "Offset mismatch for FNiagaraLwcStructConverter::ConversionSteps");

// /Script/Niagara.NiagaraMaterialAttributeBinding
// Kind: ScriptStruct; super: none
struct FNiagaraMaterialAttributeBinding
{
public:
    std::uint8_t MaterialParameterName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t NiagaraVariable[0x8]; // 0x0004 (Size: 0x8, Type: StructProperty)
    std::uint8_t ResolvedNiagaraVariable[0x8]; // 0x000C (Size: 0x8, Type: StructProperty)
    std::uint8_t NiagaraChildVariable[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraMaterialAttributeBinding, MaterialParameterName) == 0, "Offset mismatch for FNiagaraMaterialAttributeBinding::MaterialParameterName");
static_assert(offsetof(FNiagaraMaterialAttributeBinding, NiagaraVariable) == 4, "Offset mismatch for FNiagaraMaterialAttributeBinding::NiagaraVariable");
static_assert(offsetof(FNiagaraMaterialAttributeBinding, ResolvedNiagaraVariable) == 12, "Offset mismatch for FNiagaraMaterialAttributeBinding::ResolvedNiagaraVariable");
static_assert(offsetof(FNiagaraMaterialAttributeBinding, NiagaraChildVariable) == 20, "Offset mismatch for FNiagaraMaterialAttributeBinding::NiagaraChildVariable");

// /Script/Niagara.NiagaraMatrix
// Kind: ScriptStruct; super: none
struct FNiagaraMatrix
{
public:
    std::uint8_t Row0[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t Row1[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    std::uint8_t Row2[0x10]; // 0x0020 (Size: 0x10, Type: StructProperty)
    std::uint8_t Row3[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraMatrix, Row0) == 0, "Offset mismatch for FNiagaraMatrix::Row0");
static_assert(offsetof(FNiagaraMatrix, Row1) == 16, "Offset mismatch for FNiagaraMatrix::Row1");
static_assert(offsetof(FNiagaraMatrix, Row2) == 32, "Offset mismatch for FNiagaraMatrix::Row2");
static_assert(offsetof(FNiagaraMatrix, Row3) == 48, "Offset mismatch for FNiagaraMatrix::Row3");

// /Script/Niagara.NiagaraMeshMICOverride
// Kind: ScriptStruct; super: none
struct FNiagaraMeshMICOverride
{
public:
    void* OriginalMaterial; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* ReplacementMaterial; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FNiagaraMeshMICOverride, OriginalMaterial) == 0, "Offset mismatch for FNiagaraMeshMICOverride::OriginalMaterial");
static_assert(offsetof(FNiagaraMeshMICOverride, ReplacementMaterial) == 8, "Offset mismatch for FNiagaraMeshMICOverride::ReplacementMaterial");

// /Script/Niagara.NiagaraMeshMaterialOverride
// Kind: ScriptStruct; super: none
struct FNiagaraMeshMaterialOverride
{
public:
    void* ExplicitMat; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t UserParamBinding[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraMeshMaterialOverride, ExplicitMat) == 0, "Offset mismatch for FNiagaraMeshMaterialOverride::ExplicitMat");
static_assert(offsetof(FNiagaraMeshMaterialOverride, UserParamBinding) == 8, "Offset mismatch for FNiagaraMeshMaterialOverride::UserParamBinding");

// /Script/Niagara.NiagaraMeshRendererMeshProperties
// Kind: ScriptStruct; super: NiagaraMeshRendererMeshPropertiesBase
struct FNiagaraMeshRendererMeshProperties
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    std::uint8_t MeshParameterBinding[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    std::uint8_t LODMode; // 0x0060 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0061
    std::int32_t LODLevel; // 0x0064 (Size: 0x4, Type: IntProperty)
    std::int32_t LODBias; // 0x0068 (Size: 0x4, Type: IntProperty)
    float LODDistanceFactor; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseLODRange; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0071
    std::uint8_t LODRange[0x1]; // 0x0074 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraMeshRendererMeshProperties, MeshParameterBinding) == 88, "Offset mismatch for FNiagaraMeshRendererMeshProperties::MeshParameterBinding");
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, LODMode) == 96, "Offset mismatch for FNiagaraMeshRendererMeshProperties::LODMode");
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, LODLevel) == 100, "Offset mismatch for FNiagaraMeshRendererMeshProperties::LODLevel");
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, LODBias) == 104, "Offset mismatch for FNiagaraMeshRendererMeshProperties::LODBias");
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, LODDistanceFactor) == 108, "Offset mismatch for FNiagaraMeshRendererMeshProperties::LODDistanceFactor");
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, bUseLODRange) == 112, "Offset mismatch for FNiagaraMeshRendererMeshProperties::bUseLODRange");
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, LODRange) == 116, "Offset mismatch for FNiagaraMeshRendererMeshProperties::LODRange");

// /Script/Niagara.NiagaraMeshRendererMeshPropertiesBase
// Kind: ScriptStruct; super: none
struct FNiagaraMeshRendererMeshPropertiesBase
{
public:
    void* Mesh; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Scale[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Rotation[0x18]; // 0x0020 (Size: 0x18, Type: StructProperty)
    std::uint8_t PivotOffset[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t PivotOffsetSpace; // 0x0050 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FNiagaraMeshRendererMeshPropertiesBase, Mesh) == 0, "Offset mismatch for FNiagaraMeshRendererMeshPropertiesBase::Mesh");
static_assert(offsetof(FNiagaraMeshRendererMeshPropertiesBase, Scale) == 8, "Offset mismatch for FNiagaraMeshRendererMeshPropertiesBase::Scale");
static_assert(offsetof(FNiagaraMeshRendererMeshPropertiesBase, Rotation) == 32, "Offset mismatch for FNiagaraMeshRendererMeshPropertiesBase::Rotation");
static_assert(offsetof(FNiagaraMeshRendererMeshPropertiesBase, PivotOffset) == 56, "Offset mismatch for FNiagaraMeshRendererMeshPropertiesBase::PivotOffset");
static_assert(offsetof(FNiagaraMeshRendererMeshPropertiesBase, PivotOffsetSpace) == 80, "Offset mismatch for FNiagaraMeshRendererMeshPropertiesBase::PivotOffsetSpace");

// /Script/Niagara.NiagaraMessageStore
// Kind: ScriptStruct; super: none
struct FNiagaraMessageStore
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraMinimalEmitterInfo
// Kind: ScriptStruct; super: none
struct FNiagaraMinimalEmitterInfo
{
public:
    std::uint8_t EmitterName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsEnabled; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsLightweight; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    TArray<void*> UsedRendererMaterials; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UsedRendererMeshes; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraMinimalEmitterInfo, EmitterName) == 0, "Offset mismatch for FNiagaraMinimalEmitterInfo::EmitterName");
static_assert(offsetof(FNiagaraMinimalEmitterInfo, bIsEnabled) == 4, "Offset mismatch for FNiagaraMinimalEmitterInfo::bIsEnabled");
static_assert(offsetof(FNiagaraMinimalEmitterInfo, bIsLightweight) == 5, "Offset mismatch for FNiagaraMinimalEmitterInfo::bIsLightweight");
static_assert(offsetof(FNiagaraMinimalEmitterInfo, UsedRendererMaterials) == 8, "Offset mismatch for FNiagaraMinimalEmitterInfo::UsedRendererMaterials");
static_assert(offsetof(FNiagaraMinimalEmitterInfo, UsedRendererMeshes) == 24, "Offset mismatch for FNiagaraMinimalEmitterInfo::UsedRendererMeshes");

// /Script/Niagara.NiagaraModuleDependency
// Kind: ScriptStruct; super: none
struct FNiagaraModuleDependency
{
public:
    std::uint8_t ID[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Type; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ScriptConstraint; // 0x0005 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    FString RequiredVersion; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::int32_t OnlyEvaluateInScriptUsage; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x001C
    FText Description; // 0x0020 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FNiagaraModuleDependency, ID) == 0, "Offset mismatch for FNiagaraModuleDependency::ID");
static_assert(offsetof(FNiagaraModuleDependency, Type) == 4, "Offset mismatch for FNiagaraModuleDependency::Type");
static_assert(offsetof(FNiagaraModuleDependency, ScriptConstraint) == 5, "Offset mismatch for FNiagaraModuleDependency::ScriptConstraint");
static_assert(offsetof(FNiagaraModuleDependency, RequiredVersion) == 8, "Offset mismatch for FNiagaraModuleDependency::RequiredVersion");
static_assert(offsetof(FNiagaraModuleDependency, OnlyEvaluateInScriptUsage) == 24, "Offset mismatch for FNiagaraModuleDependency::OnlyEvaluateInScriptUsage");
static_assert(offsetof(FNiagaraModuleDependency, Description) == 32, "Offset mismatch for FNiagaraModuleDependency::Description");

// /Script/Niagara.NiagaraNumeric
// Kind: ScriptStruct; super: none
struct FNiagaraNumeric
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraOutlinerCaptureSettings
// Kind: ScriptStruct; super: none
struct FNiagaraOutlinerCaptureSettings
{
public:
    std::uint8_t bTriggerCapture; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint32_t CaptureDelayFrames; // 0x0004 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bGatherPerfData; // 0x0008 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint32_t SimCacheCaptureFrames; // 0x000C (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FNiagaraOutlinerCaptureSettings, bTriggerCapture) == 0, "Offset mismatch for FNiagaraOutlinerCaptureSettings::bTriggerCapture");
static_assert(offsetof(FNiagaraOutlinerCaptureSettings, CaptureDelayFrames) == 4, "Offset mismatch for FNiagaraOutlinerCaptureSettings::CaptureDelayFrames");
static_assert(offsetof(FNiagaraOutlinerCaptureSettings, bGatherPerfData) == 8, "Offset mismatch for FNiagaraOutlinerCaptureSettings::bGatherPerfData");
static_assert(offsetof(FNiagaraOutlinerCaptureSettings, SimCacheCaptureFrames) == 12, "Offset mismatch for FNiagaraOutlinerCaptureSettings::SimCacheCaptureFrames");

// /Script/Niagara.NiagaraOutlinerData
// Kind: ScriptStruct; super: none
struct FNiagaraOutlinerData
{
public:
    TMap<void*, void*> WorldData; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FNiagaraOutlinerData, WorldData) == 0, "Offset mismatch for FNiagaraOutlinerData::WorldData");

// /Script/Niagara.NiagaraOutlinerEmitterInstanceData
// Kind: ScriptStruct; super: none
struct FNiagaraOutlinerEmitterInstanceData
{
public:
    FString EmitterName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t SimTarget; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    std::uint8_t ExecState; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0015
    std::int32_t NumParticles; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsLightweight; // 0x001C (Size: 0x1, Type: BoolProperty)
    // 0x001C BoolProperty bRequiresPersistentIDs (shared storage)
};

static_assert(offsetof(FNiagaraOutlinerEmitterInstanceData, EmitterName) == 0, "Offset mismatch for FNiagaraOutlinerEmitterInstanceData::EmitterName");
static_assert(offsetof(FNiagaraOutlinerEmitterInstanceData, SimTarget) == 16, "Offset mismatch for FNiagaraOutlinerEmitterInstanceData::SimTarget");
static_assert(offsetof(FNiagaraOutlinerEmitterInstanceData, ExecState) == 20, "Offset mismatch for FNiagaraOutlinerEmitterInstanceData::ExecState");
static_assert(offsetof(FNiagaraOutlinerEmitterInstanceData, NumParticles) == 24, "Offset mismatch for FNiagaraOutlinerEmitterInstanceData::NumParticles");
static_assert(offsetof(FNiagaraOutlinerEmitterInstanceData, bIsLightweight) == 28, "Offset mismatch for FNiagaraOutlinerEmitterInstanceData::bIsLightweight");

// /Script/Niagara.NiagaraOutlinerSystemData
// Kind: ScriptStruct; super: none
struct FNiagaraOutlinerSystemData
{
public:
    std::uint8_t AssetPath[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    TArray<void*> SystemInstances; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t AveragePerFrameTime[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t MaxPerFrameTime[0x8]; // 0x0030 (Size: 0x8, Type: StructProperty)
    std::uint8_t AveragePerInstanceTime[0x8]; // 0x0038 (Size: 0x8, Type: StructProperty)
    std::uint8_t MaxPerInstanceTime[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraOutlinerSystemData, AssetPath) == 0, "Offset mismatch for FNiagaraOutlinerSystemData::AssetPath");
static_assert(offsetof(FNiagaraOutlinerSystemData, SystemInstances) == 24, "Offset mismatch for FNiagaraOutlinerSystemData::SystemInstances");
static_assert(offsetof(FNiagaraOutlinerSystemData, AveragePerFrameTime) == 40, "Offset mismatch for FNiagaraOutlinerSystemData::AveragePerFrameTime");
static_assert(offsetof(FNiagaraOutlinerSystemData, MaxPerFrameTime) == 48, "Offset mismatch for FNiagaraOutlinerSystemData::MaxPerFrameTime");
static_assert(offsetof(FNiagaraOutlinerSystemData, AveragePerInstanceTime) == 56, "Offset mismatch for FNiagaraOutlinerSystemData::AveragePerInstanceTime");
static_assert(offsetof(FNiagaraOutlinerSystemData, MaxPerInstanceTime) == 64, "Offset mismatch for FNiagaraOutlinerSystemData::MaxPerInstanceTime");

// /Script/Niagara.NiagaraOutlinerSystemInstanceData
// Kind: ScriptStruct; super: none
struct FNiagaraOutlinerSystemInstanceData
{
public:
    FString ComponentName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t LWCTile[0x10]; // 0x0010 (Size: 0x10, Type: StructProperty)
    TArray<void*> Emitters; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ActualExecutionState; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0031
    std::uint8_t RequestedExecutionState; // 0x0034 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    std::uint8_t ScalabilityState[0xC]; // 0x0038 (Size: 0xC, Type: StructProperty)
    std::uint8_t bPendingKill; // 0x0044 (Size: 0x1, Type: BoolProperty)
    // 0x0044 BoolProperty bUsingCullProxy (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0045
    std::uint8_t PoolMethod; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0049
    std::uint8_t AverageTime[0x8]; // 0x004C (Size: 0x8, Type: StructProperty)
    std::uint8_t MaxTime[0x8]; // 0x0054 (Size: 0x8, Type: StructProperty)
    std::uint8_t TickGroup; // 0x005C (Size: 0x1, Type: ByteProperty)
    std::uint8_t GpuTickStage; // 0x005D (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0004[0x2]; // 0x005E
    std::uint8_t bIsSolo; // 0x0060 (Size: 0x1, Type: BoolProperty)
    // 0x0060 BoolProperty bRequiresCurrentFrameNDC (shared storage)
    // 0x0060 BoolProperty bRequiresDepthBuffer (shared storage)
    // 0x0060 BoolProperty bRequiresEarlyViewData (shared storage)
    // 0x0060 BoolProperty bRequiresGlobalDistanceField (shared storage)
    // 0x0060 BoolProperty bRequiresRayTracingScene (shared storage)
    // 0x0060 BoolProperty bRequiresViewUniformBuffer (shared storage)
};

static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, ComponentName) == 0, "Offset mismatch for FNiagaraOutlinerSystemInstanceData::ComponentName");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, LWCTile) == 16, "Offset mismatch for FNiagaraOutlinerSystemInstanceData::LWCTile");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, Emitters) == 32, "Offset mismatch for FNiagaraOutlinerSystemInstanceData::Emitters");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, ActualExecutionState) == 48, "Offset mismatch for FNiagaraOutlinerSystemInstanceData::ActualExecutionState");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, RequestedExecutionState) == 52, "Offset mismatch for FNiagaraOutlinerSystemInstanceData::RequestedExecutionState");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, ScalabilityState) == 56, "Offset mismatch for FNiagaraOutlinerSystemInstanceData::ScalabilityState");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, bPendingKill) == 68, "Offset mismatch for FNiagaraOutlinerSystemInstanceData::bPendingKill");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, PoolMethod) == 72, "Offset mismatch for FNiagaraOutlinerSystemInstanceData::PoolMethod");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, AverageTime) == 76, "Offset mismatch for FNiagaraOutlinerSystemInstanceData::AverageTime");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, MaxTime) == 84, "Offset mismatch for FNiagaraOutlinerSystemInstanceData::MaxTime");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, TickGroup) == 92, "Offset mismatch for FNiagaraOutlinerSystemInstanceData::TickGroup");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, GpuTickStage) == 93, "Offset mismatch for FNiagaraOutlinerSystemInstanceData::GpuTickStage");
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, bIsSolo) == 96, "Offset mismatch for FNiagaraOutlinerSystemInstanceData::bIsSolo");

// /Script/Niagara.NiagaraOutlinerTimingData
// Kind: ScriptStruct; super: none
struct FNiagaraOutlinerTimingData
{
public:
    float GameThread; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float RenderThread; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNiagaraOutlinerTimingData, GameThread) == 0, "Offset mismatch for FNiagaraOutlinerTimingData::GameThread");
static_assert(offsetof(FNiagaraOutlinerTimingData, RenderThread) == 4, "Offset mismatch for FNiagaraOutlinerTimingData::RenderThread");

// /Script/Niagara.NiagaraOutlinerWorldData
// Kind: ScriptStruct; super: none
struct FNiagaraOutlinerWorldData
{
public:
    TMap<void*, void*> Systems; // 0x0000 (Size: 0x10, Type: MapProperty)
    std::uint8_t bHasBegunPlay; // 0x0010 (Size: 0x1, Type: BoolProperty)
    std::uint8_t WorldType; // 0x0011 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NetMode; // 0x0012 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0013
    std::uint8_t AveragePerFrameTime[0x8]; // 0x0014 (Size: 0x8, Type: StructProperty)
    std::uint8_t MaxPerFrameTime[0x1]; // 0x001C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraOutlinerWorldData, Systems) == 0, "Offset mismatch for FNiagaraOutlinerWorldData::Systems");
static_assert(offsetof(FNiagaraOutlinerWorldData, bHasBegunPlay) == 16, "Offset mismatch for FNiagaraOutlinerWorldData::bHasBegunPlay");
static_assert(offsetof(FNiagaraOutlinerWorldData, WorldType) == 17, "Offset mismatch for FNiagaraOutlinerWorldData::WorldType");
static_assert(offsetof(FNiagaraOutlinerWorldData, NetMode) == 18, "Offset mismatch for FNiagaraOutlinerWorldData::NetMode");
static_assert(offsetof(FNiagaraOutlinerWorldData, AveragePerFrameTime) == 20, "Offset mismatch for FNiagaraOutlinerWorldData::AveragePerFrameTime");
static_assert(offsetof(FNiagaraOutlinerWorldData, MaxPerFrameTime) == 28, "Offset mismatch for FNiagaraOutlinerWorldData::MaxPerFrameTime");

// /Script/Niagara.NiagaraParameterBinding
// Kind: ScriptStruct; super: none
struct FNiagaraParameterBinding
{
public:
    std::uint8_t ResolvedParameter[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraParameterBinding, ResolvedParameter) == 0, "Offset mismatch for FNiagaraParameterBinding::ResolvedParameter");

// /Script/Niagara.NiagaraParameterBindingWithValue
// Kind: ScriptStruct; super: NiagaraParameterBinding
struct FNiagaraParameterBindingWithValue
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> DefaultValue; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraParameterBindingWithValue, DefaultValue) == 8, "Offset mismatch for FNiagaraParameterBindingWithValue::DefaultValue");

// /Script/Niagara.NiagaraParameterDataSetBinding
// Kind: ScriptStruct; super: none
struct FNiagaraParameterDataSetBinding
{
public:
    std::int32_t ParameterOffset; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t DataSetComponentOffset; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNiagaraParameterDataSetBinding, ParameterOffset) == 0, "Offset mismatch for FNiagaraParameterDataSetBinding::ParameterOffset");
static_assert(offsetof(FNiagaraParameterDataSetBinding, DataSetComponentOffset) == 4, "Offset mismatch for FNiagaraParameterDataSetBinding::DataSetComponentOffset");

// /Script/Niagara.NiagaraParameterDataSetBindingCollection
// Kind: ScriptStruct; super: none
struct FNiagaraParameterDataSetBindingCollection
{
public:
    TArray<void*> FloatOffsets; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Int32Offsets; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraParameterDataSetBindingCollection, FloatOffsets) == 0, "Offset mismatch for FNiagaraParameterDataSetBindingCollection::FloatOffsets");
static_assert(offsetof(FNiagaraParameterDataSetBindingCollection, Int32Offsets) == 16, "Offset mismatch for FNiagaraParameterDataSetBindingCollection::Int32Offsets");

// /Script/Niagara.NiagaraParameterMap
// Kind: ScriptStruct; super: none
struct FNiagaraParameterMap
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraParameterStore
// Kind: ScriptStruct; super: none
struct FNiagaraParameterStore
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TWeakObjectPtr<void> Owner; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> SortedParameterOffsets; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ParameterData; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DataInterfaces; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UObjects; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OriginalPositionData; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraParameterStore, Owner) == 8, "Offset mismatch for FNiagaraParameterStore::Owner");
static_assert(offsetof(FNiagaraParameterStore, SortedParameterOffsets) == 16, "Offset mismatch for FNiagaraParameterStore::SortedParameterOffsets");
static_assert(offsetof(FNiagaraParameterStore, ParameterData) == 32, "Offset mismatch for FNiagaraParameterStore::ParameterData");
static_assert(offsetof(FNiagaraParameterStore, DataInterfaces) == 48, "Offset mismatch for FNiagaraParameterStore::DataInterfaces");
static_assert(offsetof(FNiagaraParameterStore, UObjects) == 64, "Offset mismatch for FNiagaraParameterStore::UObjects");
static_assert(offsetof(FNiagaraParameterStore, OriginalPositionData) == 80, "Offset mismatch for FNiagaraParameterStore::OriginalPositionData");

// /Script/Niagara.NiagaraParameters
// Kind: ScriptStruct; super: none
struct FNiagaraParameters
{
public:
    TArray<void*> Parameters; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraParameters, Parameters) == 0, "Offset mismatch for FNiagaraParameters::Parameters");

// /Script/Niagara.NiagaraPerfBaselineStats
// Kind: ScriptStruct; super: none
struct FNiagaraPerfBaselineStats
{
public:
    float PerInstanceAvg_GT; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float PerInstanceAvg_RT; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float PerInstanceMax_GT; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float PerInstanceMax_RT; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNiagaraPerfBaselineStats, PerInstanceAvg_GT) == 0, "Offset mismatch for FNiagaraPerfBaselineStats::PerInstanceAvg_GT");
static_assert(offsetof(FNiagaraPerfBaselineStats, PerInstanceAvg_RT) == 4, "Offset mismatch for FNiagaraPerfBaselineStats::PerInstanceAvg_RT");
static_assert(offsetof(FNiagaraPerfBaselineStats, PerInstanceMax_GT) == 8, "Offset mismatch for FNiagaraPerfBaselineStats::PerInstanceMax_GT");
static_assert(offsetof(FNiagaraPerfBaselineStats, PerInstanceMax_RT) == 12, "Offset mismatch for FNiagaraPerfBaselineStats::PerInstanceMax_RT");

// /Script/Niagara.NiagaraPlatformSet
// Kind: ScriptStruct; super: none
struct FNiagaraPlatformSet
{
public:
    TArray<void*> DeviceProfileStates; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CVarConditions; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::int32_t QualityLevelMask; // 0x0020 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNiagaraPlatformSet, DeviceProfileStates) == 0, "Offset mismatch for FNiagaraPlatformSet::DeviceProfileStates");
static_assert(offsetof(FNiagaraPlatformSet, CVarConditions) == 16, "Offset mismatch for FNiagaraPlatformSet::CVarConditions");
static_assert(offsetof(FNiagaraPlatformSet, QualityLevelMask) == 32, "Offset mismatch for FNiagaraPlatformSet::QualityLevelMask");

// /Script/Niagara.NiagaraPlatformSetCVarCondition
// Kind: ScriptStruct; super: none
struct FNiagaraPlatformSetCVarCondition
{
public:
    std::uint8_t CVarName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t PassResponse; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FailResponse; // 0x0005 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Value; // 0x0006 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0007
    std::int32_t MinInt; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxInt; // 0x000C (Size: 0x4, Type: IntProperty)
    float MinFloat; // 0x0010 (Size: 0x4, Type: FloatProperty)
    float MaxFloat; // 0x0014 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseMaxFloat; // 0x0018 (Size: 0x1, Type: BoolProperty)
    // 0x0018 BoolProperty bUseMaxInt (shared storage)
    // 0x0018 BoolProperty bUseMinFloat (shared storage)
    // 0x0018 BoolProperty bUseMinInt (shared storage)
};

static_assert(offsetof(FNiagaraPlatformSetCVarCondition, CVarName) == 0, "Offset mismatch for FNiagaraPlatformSetCVarCondition::CVarName");
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, PassResponse) == 4, "Offset mismatch for FNiagaraPlatformSetCVarCondition::PassResponse");
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, FailResponse) == 5, "Offset mismatch for FNiagaraPlatformSetCVarCondition::FailResponse");
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, Value) == 6, "Offset mismatch for FNiagaraPlatformSetCVarCondition::Value");
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, MinInt) == 8, "Offset mismatch for FNiagaraPlatformSetCVarCondition::MinInt");
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, MaxInt) == 12, "Offset mismatch for FNiagaraPlatformSetCVarCondition::MaxInt");
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, MinFloat) == 16, "Offset mismatch for FNiagaraPlatformSetCVarCondition::MinFloat");
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, MaxFloat) == 20, "Offset mismatch for FNiagaraPlatformSetCVarCondition::MaxFloat");
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, bUseMaxFloat) == 24, "Offset mismatch for FNiagaraPlatformSetCVarCondition::bUseMaxFloat");

// /Script/Niagara.NiagaraPlatformSetConflictEntry
// Kind: ScriptStruct; super: none
struct FNiagaraPlatformSetConflictEntry
{
public:
    std::uint8_t ProfileName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t QualityLevelMask; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNiagaraPlatformSetConflictEntry, ProfileName) == 0, "Offset mismatch for FNiagaraPlatformSetConflictEntry::ProfileName");
static_assert(offsetof(FNiagaraPlatformSetConflictEntry, QualityLevelMask) == 4, "Offset mismatch for FNiagaraPlatformSetConflictEntry::QualityLevelMask");

// /Script/Niagara.NiagaraPlatformSetConflictInfo
// Kind: ScriptStruct; super: none
struct FNiagaraPlatformSetConflictInfo
{
public:
    std::int32_t SetAIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t SetBIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
    TArray<void*> Conflicts; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraPlatformSetConflictInfo, SetAIndex) == 0, "Offset mismatch for FNiagaraPlatformSetConflictInfo::SetAIndex");
static_assert(offsetof(FNiagaraPlatformSetConflictInfo, SetBIndex) == 4, "Offset mismatch for FNiagaraPlatformSetConflictInfo::SetBIndex");
static_assert(offsetof(FNiagaraPlatformSetConflictInfo, Conflicts) == 8, "Offset mismatch for FNiagaraPlatformSetConflictInfo::Conflicts");

// /Script/Niagara.NiagaraPlatformSetRedirect
// Kind: ScriptStruct; super: none
struct FNiagaraPlatformSetRedirect
{
public:
    TArray<void*> ProfileNames; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Mode; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    std::uint8_t RedirectProfileName[0x4]; // 0x0014 (Size: 0x4, Type: NameProperty)
    std::uint8_t CVarConditionEnabled[0x30]; // 0x0018 (Size: 0x30, Type: StructProperty)
    std::uint8_t CVarConditionDisabled[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraPlatformSetRedirect, ProfileNames) == 0, "Offset mismatch for FNiagaraPlatformSetRedirect::ProfileNames");
static_assert(offsetof(FNiagaraPlatformSetRedirect, Mode) == 16, "Offset mismatch for FNiagaraPlatformSetRedirect::Mode");
static_assert(offsetof(FNiagaraPlatformSetRedirect, RedirectProfileName) == 20, "Offset mismatch for FNiagaraPlatformSetRedirect::RedirectProfileName");
static_assert(offsetof(FNiagaraPlatformSetRedirect, CVarConditionEnabled) == 24, "Offset mismatch for FNiagaraPlatformSetRedirect::CVarConditionEnabled");
static_assert(offsetof(FNiagaraPlatformSetRedirect, CVarConditionDisabled) == 72, "Offset mismatch for FNiagaraPlatformSetRedirect::CVarConditionDisabled");

// /Script/Niagara.NiagaraPosition
// Kind: ScriptStruct; super: Vector3f
struct FNiagaraPosition
{
public:
    float X; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float Y; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Z; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNiagaraPosition, X) == 0, "Offset mismatch for FNiagaraPosition::X");
static_assert(offsetof(FNiagaraPosition, Y) == 4, "Offset mismatch for FNiagaraPosition::Y");
static_assert(offsetof(FNiagaraPosition, Z) == 8, "Offset mismatch for FNiagaraPosition::Z");

// /Script/Niagara.NiagaraPositionSource
// Kind: ScriptStruct; super: none
struct FNiagaraPositionSource
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t Value[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraPositionSource, Name) == 0, "Offset mismatch for FNiagaraPositionSource::Name");
static_assert(offsetof(FNiagaraPositionSource, Value) == 8, "Offset mismatch for FNiagaraPositionSource::Value");

// /Script/Niagara.NiagaraRandInfo
// Kind: ScriptStruct; super: none
struct FNiagaraRandInfo
{
public:
    std::int32_t Seed1; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Seed2; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t Seed3; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNiagaraRandInfo, Seed1) == 0, "Offset mismatch for FNiagaraRandInfo::Seed1");
static_assert(offsetof(FNiagaraRandInfo, Seed2) == 4, "Offset mismatch for FNiagaraRandInfo::Seed2");
static_assert(offsetof(FNiagaraRandInfo, Seed3) == 8, "Offset mismatch for FNiagaraRandInfo::Seed3");

// /Script/Niagara.NiagaraReadinessSettings
// Kind: ScriptStruct; super: NiagaraSettingsProfile
struct FNiagaraReadinessSettings
{
public:
    std::uint8_t PlatformSet[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t PSOPrecacheSettings[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraReadinessSettings, PlatformSet) == 0, "Offset mismatch for FNiagaraReadinessSettings::PlatformSet");
static_assert(offsetof(FNiagaraReadinessSettings, PSOPrecacheSettings) == 48, "Offset mismatch for FNiagaraReadinessSettings::PSOPrecacheSettings");

// /Script/Niagara.NiagaraReadinessSettingsProfile
// Kind: ScriptStruct; super: NiagaraScalabiltiySettingsProfile
struct FNiagaraReadinessSettingsProfile
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> Settings; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraReadinessSettingsProfile, Settings) == 8, "Offset mismatch for FNiagaraReadinessSettingsProfile::Settings");

// /Script/Niagara.NiagaraRendererMaterialParameters
// Kind: ScriptStruct; super: none
struct FNiagaraRendererMaterialParameters
{
public:
    TArray<void*> AttributeBindings; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ScalarParameters; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VectorParameters; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TextureParameters; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StaticBoolParameters; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraRendererMaterialParameters, AttributeBindings) == 0, "Offset mismatch for FNiagaraRendererMaterialParameters::AttributeBindings");
static_assert(offsetof(FNiagaraRendererMaterialParameters, ScalarParameters) == 16, "Offset mismatch for FNiagaraRendererMaterialParameters::ScalarParameters");
static_assert(offsetof(FNiagaraRendererMaterialParameters, VectorParameters) == 32, "Offset mismatch for FNiagaraRendererMaterialParameters::VectorParameters");
static_assert(offsetof(FNiagaraRendererMaterialParameters, TextureParameters) == 48, "Offset mismatch for FNiagaraRendererMaterialParameters::TextureParameters");
static_assert(offsetof(FNiagaraRendererMaterialParameters, StaticBoolParameters) == 64, "Offset mismatch for FNiagaraRendererMaterialParameters::StaticBoolParameters");

// /Script/Niagara.NiagaraRendererMaterialScalarParameter
// Kind: ScriptStruct; super: none
struct FNiagaraRendererMaterialScalarParameter
{
public:
    std::uint8_t MaterialParameterName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    float Value; // 0x0004 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNiagaraRendererMaterialScalarParameter, MaterialParameterName) == 0, "Offset mismatch for FNiagaraRendererMaterialScalarParameter::MaterialParameterName");
static_assert(offsetof(FNiagaraRendererMaterialScalarParameter, Value) == 4, "Offset mismatch for FNiagaraRendererMaterialScalarParameter::Value");

// /Script/Niagara.NiagaraRendererMaterialStaticBoolParameter
// Kind: ScriptStruct; super: none
struct FNiagaraRendererMaterialStaticBoolParameter
{
public:
    std::uint8_t MaterialParameterName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t StaticVariableName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    std::uint8_t StaticValue[0x1]; // 0x0008 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FNiagaraRendererMaterialStaticBoolParameter, MaterialParameterName) == 0, "Offset mismatch for FNiagaraRendererMaterialStaticBoolParameter::MaterialParameterName");
static_assert(offsetof(FNiagaraRendererMaterialStaticBoolParameter, StaticVariableName) == 4, "Offset mismatch for FNiagaraRendererMaterialStaticBoolParameter::StaticVariableName");
static_assert(offsetof(FNiagaraRendererMaterialStaticBoolParameter, StaticValue) == 8, "Offset mismatch for FNiagaraRendererMaterialStaticBoolParameter::StaticValue");

// /Script/Niagara.NiagaraRendererMaterialTextureParameter
// Kind: ScriptStruct; super: none
struct FNiagaraRendererMaterialTextureParameter
{
public:
    FName MaterialParameterName; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* Texture; // 0x0008 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FNiagaraRendererMaterialTextureParameter, MaterialParameterName) == 0, "Offset mismatch for FNiagaraRendererMaterialTextureParameter::MaterialParameterName");
static_assert(offsetof(FNiagaraRendererMaterialTextureParameter, Texture) == 8, "Offset mismatch for FNiagaraRendererMaterialTextureParameter::Texture");

// /Script/Niagara.NiagaraRendererMaterialVectorParameter
// Kind: ScriptStruct; super: none
struct FNiagaraRendererMaterialVectorParameter
{
public:
    std::uint8_t MaterialParameterName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t Value[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraRendererMaterialVectorParameter, MaterialParameterName) == 0, "Offset mismatch for FNiagaraRendererMaterialVectorParameter::MaterialParameterName");
static_assert(offsetof(FNiagaraRendererMaterialVectorParameter, Value) == 4, "Offset mismatch for FNiagaraRendererMaterialVectorParameter::Value");

// /Script/Niagara.NiagaraRendererReadbackParameters
// Kind: ScriptStruct; super: none
struct FNiagaraRendererReadbackParameters
{
public:
    std::uint8_t CoordinateSpace; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bExportPosition; // 0x0001 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExportTangentBasis; // 0x0002 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExportColor; // 0x0003 (Size: 0x1, Type: BoolProperty)
    std::int32_t ExportNumTexCoords; // 0x0004 (Size: 0x4, Type: IntProperty)
    TArray<void*> ExportTexCoordBindings; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bExportMaterials; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyWPO; // 0x0019 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x001A
    std::uint8_t ViewIndexToCapture[0x1]; // 0x001C (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(FNiagaraRendererReadbackParameters, CoordinateSpace) == 0, "Offset mismatch for FNiagaraRendererReadbackParameters::CoordinateSpace");
static_assert(offsetof(FNiagaraRendererReadbackParameters, bExportPosition) == 1, "Offset mismatch for FNiagaraRendererReadbackParameters::bExportPosition");
static_assert(offsetof(FNiagaraRendererReadbackParameters, bExportTangentBasis) == 2, "Offset mismatch for FNiagaraRendererReadbackParameters::bExportTangentBasis");
static_assert(offsetof(FNiagaraRendererReadbackParameters, bExportColor) == 3, "Offset mismatch for FNiagaraRendererReadbackParameters::bExportColor");
static_assert(offsetof(FNiagaraRendererReadbackParameters, ExportNumTexCoords) == 4, "Offset mismatch for FNiagaraRendererReadbackParameters::ExportNumTexCoords");
static_assert(offsetof(FNiagaraRendererReadbackParameters, ExportTexCoordBindings) == 8, "Offset mismatch for FNiagaraRendererReadbackParameters::ExportTexCoordBindings");
static_assert(offsetof(FNiagaraRendererReadbackParameters, bExportMaterials) == 24, "Offset mismatch for FNiagaraRendererReadbackParameters::bExportMaterials");
static_assert(offsetof(FNiagaraRendererReadbackParameters, bApplyWPO) == 25, "Offset mismatch for FNiagaraRendererReadbackParameters::bApplyWPO");
static_assert(offsetof(FNiagaraRendererReadbackParameters, ViewIndexToCapture) == 28, "Offset mismatch for FNiagaraRendererReadbackParameters::ViewIndexToCapture");

// /Script/Niagara.NiagaraRequestSimpleClientInfoMessage
// Kind: ScriptStruct; super: none
struct FNiagaraRequestSimpleClientInfoMessage
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraResolvedUObjectInfo
// Kind: ScriptStruct; super: none
struct FNiagaraResolvedUObjectInfo
{
public:
    std::uint8_t ReadVariableName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ResolvedVariable[0xC]; // 0x0004 (Size: 0xC, Type: StructProperty)
    void* Object; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FNiagaraResolvedUObjectInfo, ReadVariableName) == 0, "Offset mismatch for FNiagaraResolvedUObjectInfo::ReadVariableName");
static_assert(offsetof(FNiagaraResolvedUObjectInfo, ResolvedVariable) == 4, "Offset mismatch for FNiagaraResolvedUObjectInfo::ResolvedVariable");
static_assert(offsetof(FNiagaraResolvedUObjectInfo, Object) == 16, "Offset mismatch for FNiagaraResolvedUObjectInfo::Object");

// /Script/Niagara.NiagaraResolvedUserDataInterfaceBinding
// Kind: ScriptStruct; super: none
struct FNiagaraResolvedUserDataInterfaceBinding
{
public:
    std::int32_t UserParameterStoreDataInterfaceIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t ScriptParameterStoreDataInterfaceIndex; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNiagaraResolvedUserDataInterfaceBinding, UserParameterStoreDataInterfaceIndex) == 0, "Offset mismatch for FNiagaraResolvedUserDataInterfaceBinding::UserParameterStoreDataInterfaceIndex");
static_assert(offsetof(FNiagaraResolvedUserDataInterfaceBinding, ScriptParameterStoreDataInterfaceIndex) == 4, "Offset mismatch for FNiagaraResolvedUserDataInterfaceBinding::ScriptParameterStoreDataInterfaceIndex");

// /Script/Niagara.NiagaraRibbonShape
// Kind: ScriptStruct; super: none
struct FNiagaraRibbonShape
{
public:
    std::uint8_t bClosedShape; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bEnableAccurateGeometry (shared storage)
    // 0x0000 BoolProperty bUseMaterialBackfaceCulling (shared storage)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> Points; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraRibbonShape, bClosedShape) == 0, "Offset mismatch for FNiagaraRibbonShape::bClosedShape");
static_assert(offsetof(FNiagaraRibbonShape, Points) == 8, "Offset mismatch for FNiagaraRibbonShape::Points");

// /Script/Niagara.NiagaraRibbonShapeCustomVertex
// Kind: ScriptStruct; super: none
struct FNiagaraRibbonShapeCustomVertex
{
public:
    std::uint8_t Position[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Normal[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    float TextureV; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNiagaraRibbonShapeCustomVertex, Position) == 0, "Offset mismatch for FNiagaraRibbonShapeCustomVertex::Position");
static_assert(offsetof(FNiagaraRibbonShapeCustomVertex, Normal) == 8, "Offset mismatch for FNiagaraRibbonShapeCustomVertex::Normal");
static_assert(offsetof(FNiagaraRibbonShapeCustomVertex, TextureV) == 16, "Offset mismatch for FNiagaraRibbonShapeCustomVertex::TextureV");

// /Script/Niagara.NiagaraRibbonShapePoint
// Kind: ScriptStruct; super: none
struct FNiagaraRibbonShapePoint
{
public:
    std::uint8_t Position[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t Normal[0x8]; // 0x0008 (Size: 0x8, Type: StructProperty)
    float TextureV; // 0x0010 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNiagaraRibbonShapePoint, Position) == 0, "Offset mismatch for FNiagaraRibbonShapePoint::Position");
static_assert(offsetof(FNiagaraRibbonShapePoint, Normal) == 8, "Offset mismatch for FNiagaraRibbonShapePoint::Normal");
static_assert(offsetof(FNiagaraRibbonShapePoint, TextureV) == 16, "Offset mismatch for FNiagaraRibbonShapePoint::TextureV");

// /Script/Niagara.NiagaraRibbonUVSettings
// Kind: ScriptStruct; super: none
struct FNiagaraRibbonUVSettings
{
public:
    std::uint8_t DistributionMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LeadingEdgeMode; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t TrailingEdgeMode; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEnablePerParticleUOverride; // 0x0003 (Size: 0x1, Type: BoolProperty)
    // 0x0003 BoolProperty bEnablePerParticleVRangeOverride (shared storage)
    float TilingLength; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Offset[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t Scale[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraRibbonUVSettings, DistributionMode) == 0, "Offset mismatch for FNiagaraRibbonUVSettings::DistributionMode");
static_assert(offsetof(FNiagaraRibbonUVSettings, LeadingEdgeMode) == 1, "Offset mismatch for FNiagaraRibbonUVSettings::LeadingEdgeMode");
static_assert(offsetof(FNiagaraRibbonUVSettings, TrailingEdgeMode) == 2, "Offset mismatch for FNiagaraRibbonUVSettings::TrailingEdgeMode");
static_assert(offsetof(FNiagaraRibbonUVSettings, bEnablePerParticleUOverride) == 3, "Offset mismatch for FNiagaraRibbonUVSettings::bEnablePerParticleUOverride");
static_assert(offsetof(FNiagaraRibbonUVSettings, TilingLength) == 4, "Offset mismatch for FNiagaraRibbonUVSettings::TilingLength");
static_assert(offsetof(FNiagaraRibbonUVSettings, Offset) == 8, "Offset mismatch for FNiagaraRibbonUVSettings::Offset");
static_assert(offsetof(FNiagaraRibbonUVSettings, Scale) == 24, "Offset mismatch for FNiagaraRibbonUVSettings::Scale");

// /Script/Niagara.NiagaraScalabilityManager
// Kind: ScriptStruct; super: none
struct FNiagaraScalabilityManager
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    void* EffectType; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ManagedComponents; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraScalabilityManager, EffectType) == 8, "Offset mismatch for FNiagaraScalabilityManager::EffectType");
static_assert(offsetof(FNiagaraScalabilityManager, ManagedComponents) == 16, "Offset mismatch for FNiagaraScalabilityManager::ManagedComponents");

// /Script/Niagara.NiagaraScalabilityState
// Kind: ScriptStruct; super: none
struct FNiagaraScalabilityState
{
public:
    float Significance; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float LastVisibleTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0008
    std::uint8_t bCulled; // 0x000A (Size: 0x1, Type: BoolProperty)
    // 0x000A BoolProperty bCulledByDistance (shared storage)
    // 0x000A BoolProperty bCulledByGlobalBudget (shared storage)
    // 0x000A BoolProperty bCulledByInstanceCount (shared storage)
    // 0x000A BoolProperty bCulledByVisibility (shared storage)
    // 0x000A BoolProperty bNewlyRegistered (shared storage)
    // 0x000A BoolProperty bNewlyRegisteredDirty (shared storage)
    // 0x000A BoolProperty bPreviousCulled (shared storage)
};

static_assert(offsetof(FNiagaraScalabilityState, Significance) == 0, "Offset mismatch for FNiagaraScalabilityState::Significance");
static_assert(offsetof(FNiagaraScalabilityState, LastVisibleTime) == 4, "Offset mismatch for FNiagaraScalabilityState::LastVisibleTime");
static_assert(offsetof(FNiagaraScalabilityState, bCulled) == 10, "Offset mismatch for FNiagaraScalabilityState::bCulled");

// /Script/Niagara.NiagaraScalabiltiySettingsProfile
// Kind: ScriptStruct; super: none
struct FNiagaraScalabiltiySettingsProfile
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraScriptAsyncCompileData
// Kind: ScriptStruct; super: none
struct FNiagaraScriptAsyncCompileData
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TArray<void*> RapidIterationParameters; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> NamedDataInterfaces; // 0x0090 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FNiagaraScriptAsyncCompileData, RapidIterationParameters) == 128, "Offset mismatch for FNiagaraScriptAsyncCompileData::RapidIterationParameters");
static_assert(offsetof(FNiagaraScriptAsyncCompileData, NamedDataInterfaces) == 144, "Offset mismatch for FNiagaraScriptAsyncCompileData::NamedDataInterfaces");

// /Script/Niagara.NiagaraScriptDataInterfaceCompileInfo
// Kind: ScriptStruct; super: none
struct FNiagaraScriptDataInterfaceCompileInfo
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t UserPtrIdx; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t Type[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t RegisteredParameterMapRead[0x4]; // 0x0020 (Size: 0x4, Type: NameProperty)
    std::uint8_t RegisteredParameterMapWrite[0x4]; // 0x0024 (Size: 0x4, Type: NameProperty)
    std::uint8_t bIsPlaceholder; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0029
    FString SourceEmitterName; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, Name) == 0, "Offset mismatch for FNiagaraScriptDataInterfaceCompileInfo::Name");
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, UserPtrIdx) == 4, "Offset mismatch for FNiagaraScriptDataInterfaceCompileInfo::UserPtrIdx");
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, Type) == 8, "Offset mismatch for FNiagaraScriptDataInterfaceCompileInfo::Type");
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, RegisteredParameterMapRead) == 32, "Offset mismatch for FNiagaraScriptDataInterfaceCompileInfo::RegisteredParameterMapRead");
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, RegisteredParameterMapWrite) == 36, "Offset mismatch for FNiagaraScriptDataInterfaceCompileInfo::RegisteredParameterMapWrite");
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, bIsPlaceholder) == 40, "Offset mismatch for FNiagaraScriptDataInterfaceCompileInfo::bIsPlaceholder");
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, SourceEmitterName) == 48, "Offset mismatch for FNiagaraScriptDataInterfaceCompileInfo::SourceEmitterName");

// /Script/Niagara.NiagaraScriptDataInterfaceInfo
// Kind: ScriptStruct; super: none
struct FNiagaraScriptDataInterfaceInfo
{
public:
    void* DataInterface; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Name[0x4]; // 0x0008 (Size: 0x4, Type: NameProperty)
    std::uint8_t CompileName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::int32_t UserPtrIdx; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    std::uint8_t Type[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t RegisteredParameterMapRead[0x4]; // 0x0030 (Size: 0x4, Type: NameProperty)
    std::uint8_t RegisteredParameterMapWrite[0x4]; // 0x0034 (Size: 0x4, Type: NameProperty)
    FString SourceEmitterName; // 0x0038 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, DataInterface) == 0, "Offset mismatch for FNiagaraScriptDataInterfaceInfo::DataInterface");
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, Name) == 8, "Offset mismatch for FNiagaraScriptDataInterfaceInfo::Name");
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, CompileName) == 12, "Offset mismatch for FNiagaraScriptDataInterfaceInfo::CompileName");
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, UserPtrIdx) == 16, "Offset mismatch for FNiagaraScriptDataInterfaceInfo::UserPtrIdx");
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, Type) == 24, "Offset mismatch for FNiagaraScriptDataInterfaceInfo::Type");
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, RegisteredParameterMapRead) == 48, "Offset mismatch for FNiagaraScriptDataInterfaceInfo::RegisteredParameterMapRead");
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, RegisteredParameterMapWrite) == 52, "Offset mismatch for FNiagaraScriptDataInterfaceInfo::RegisteredParameterMapWrite");
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, SourceEmitterName) == 56, "Offset mismatch for FNiagaraScriptDataInterfaceInfo::SourceEmitterName");

// /Script/Niagara.NiagaraScriptDataKey
// Kind: ScriptStruct; super: none
struct FNiagaraScriptDataKey
{
public:
    std::uint8_t EmitterHandleId[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t ScriptUsage; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    std::uint8_t ScriptUsageId[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraScriptDataKey, EmitterHandleId) == 0, "Offset mismatch for FNiagaraScriptDataKey::EmitterHandleId");
static_assert(offsetof(FNiagaraScriptDataKey, ScriptUsage) == 16, "Offset mismatch for FNiagaraScriptDataKey::ScriptUsage");
static_assert(offsetof(FNiagaraScriptDataKey, ScriptUsageId) == 20, "Offset mismatch for FNiagaraScriptDataKey::ScriptUsageId");

// /Script/Niagara.NiagaraScriptDataUsageInfo
// Kind: ScriptStruct; super: none
struct FNiagaraScriptDataUsageInfo
{
public:
    std::uint8_t bReadsAttributeData; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNiagaraScriptDataUsageInfo, bReadsAttributeData) == 0, "Offset mismatch for FNiagaraScriptDataUsageInfo::bReadsAttributeData");

// /Script/Niagara.NiagaraScriptExecutionPaddingInfo
// Kind: ScriptStruct; super: none
struct FNiagaraScriptExecutionPaddingInfo
{
public:
    std::uint16_t SrcOffset; // 0x0000 (Size: 0x2, Type: UInt16Property)
    std::uint16_t DestOffset; // 0x0002 (Size: 0x2, Type: UInt16Property)
    std::uint16_t SrcSize; // 0x0004 (Size: 0x2, Type: UInt16Property)
    std::uint16_t DestSize; // 0x0006 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FNiagaraScriptExecutionPaddingInfo, SrcOffset) == 0, "Offset mismatch for FNiagaraScriptExecutionPaddingInfo::SrcOffset");
static_assert(offsetof(FNiagaraScriptExecutionPaddingInfo, DestOffset) == 2, "Offset mismatch for FNiagaraScriptExecutionPaddingInfo::DestOffset");
static_assert(offsetof(FNiagaraScriptExecutionPaddingInfo, SrcSize) == 4, "Offset mismatch for FNiagaraScriptExecutionPaddingInfo::SrcSize");
static_assert(offsetof(FNiagaraScriptExecutionPaddingInfo, DestSize) == 6, "Offset mismatch for FNiagaraScriptExecutionPaddingInfo::DestSize");

// /Script/Niagara.NiagaraScriptExecutionParameterStore
// Kind: ScriptStruct; super: NiagaraParameterStore
struct FNiagaraScriptExecutionParameterStore
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    std::int32_t ParameterSize; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::uint8_t bInitialized; // 0x008C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNiagaraScriptExecutionParameterStore, ParameterSize) == 136, "Offset mismatch for FNiagaraScriptExecutionParameterStore::ParameterSize");
static_assert(offsetof(FNiagaraScriptExecutionParameterStore, bInitialized) == 140, "Offset mismatch for FNiagaraScriptExecutionParameterStore::bInitialized");

// /Script/Niagara.NiagaraScriptHighlight
// Kind: ScriptStruct; super: none
struct FNiagaraScriptHighlight
{
public:
    std::uint8_t Color[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    FText DisplayName; // 0x0010 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FNiagaraScriptHighlight, Color) == 0, "Offset mismatch for FNiagaraScriptHighlight::Color");
static_assert(offsetof(FNiagaraScriptHighlight, DisplayName) == 16, "Offset mismatch for FNiagaraScriptHighlight::DisplayName");

// /Script/Niagara.NiagaraScriptInstanceParameterStore
// Kind: ScriptStruct; super: NiagaraParameterStore
struct FNiagaraScriptInstanceParameterStore
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TWeakObjectPtr<void> Owner; // 0x0008 (Size: 0x8, Type: WeakObjectProperty)
    TArray<void*> SortedParameterOffsets; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ParameterData; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DataInterfaces; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> UObjects; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OriginalPositionData; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraScriptInstanceParameterStore, Owner) == 8, "Offset mismatch for FNiagaraScriptInstanceParameterStore::Owner");
static_assert(offsetof(FNiagaraScriptInstanceParameterStore, SortedParameterOffsets) == 16, "Offset mismatch for FNiagaraScriptInstanceParameterStore::SortedParameterOffsets");
static_assert(offsetof(FNiagaraScriptInstanceParameterStore, ParameterData) == 32, "Offset mismatch for FNiagaraScriptInstanceParameterStore::ParameterData");
static_assert(offsetof(FNiagaraScriptInstanceParameterStore, DataInterfaces) == 48, "Offset mismatch for FNiagaraScriptInstanceParameterStore::DataInterfaces");
static_assert(offsetof(FNiagaraScriptInstanceParameterStore, UObjects) == 64, "Offset mismatch for FNiagaraScriptInstanceParameterStore::UObjects");
static_assert(offsetof(FNiagaraScriptInstanceParameterStore, OriginalPositionData) == 80, "Offset mismatch for FNiagaraScriptInstanceParameterStore::OriginalPositionData");

// /Script/Niagara.NiagaraScriptResolvedDataInterfaceInfo
// Kind: ScriptStruct; super: none
struct FNiagaraScriptResolvedDataInterfaceInfo
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t CompileName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    FString ResolvedSourceEmitterName; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::uint8_t ResolvedVariable[0x8]; // 0x0018 (Size: 0x8, Type: StructProperty)
    std::uint8_t ParameterStoreVariable[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t bIsInternal; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0029
    void* ResolvedDataInterface; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::int32_t UserPtrIdx; // 0x0038 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNiagaraScriptResolvedDataInterfaceInfo, Name) == 0, "Offset mismatch for FNiagaraScriptResolvedDataInterfaceInfo::Name");
static_assert(offsetof(FNiagaraScriptResolvedDataInterfaceInfo, CompileName) == 4, "Offset mismatch for FNiagaraScriptResolvedDataInterfaceInfo::CompileName");
static_assert(offsetof(FNiagaraScriptResolvedDataInterfaceInfo, ResolvedSourceEmitterName) == 8, "Offset mismatch for FNiagaraScriptResolvedDataInterfaceInfo::ResolvedSourceEmitterName");
static_assert(offsetof(FNiagaraScriptResolvedDataInterfaceInfo, ResolvedVariable) == 24, "Offset mismatch for FNiagaraScriptResolvedDataInterfaceInfo::ResolvedVariable");
static_assert(offsetof(FNiagaraScriptResolvedDataInterfaceInfo, ParameterStoreVariable) == 32, "Offset mismatch for FNiagaraScriptResolvedDataInterfaceInfo::ParameterStoreVariable");
static_assert(offsetof(FNiagaraScriptResolvedDataInterfaceInfo, bIsInternal) == 40, "Offset mismatch for FNiagaraScriptResolvedDataInterfaceInfo::bIsInternal");
static_assert(offsetof(FNiagaraScriptResolvedDataInterfaceInfo, ResolvedDataInterface) == 48, "Offset mismatch for FNiagaraScriptResolvedDataInterfaceInfo::ResolvedDataInterface");
static_assert(offsetof(FNiagaraScriptResolvedDataInterfaceInfo, UserPtrIdx) == 56, "Offset mismatch for FNiagaraScriptResolvedDataInterfaceInfo::UserPtrIdx");

// /Script/Niagara.NiagaraScriptRuntimeCompiledData
// Kind: ScriptStruct; super: none
struct FNiagaraScriptRuntimeCompiledData
{
public:
    TArray<void*> ResolvedDataInterfaces; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ResolvedUserDataInterfaceBindings; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ResolvedUObjects; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SimTarget; // 0x0030 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FNiagaraScriptRuntimeCompiledData, ResolvedDataInterfaces) == 0, "Offset mismatch for FNiagaraScriptRuntimeCompiledData::ResolvedDataInterfaces");
static_assert(offsetof(FNiagaraScriptRuntimeCompiledData, ResolvedUserDataInterfaceBindings) == 16, "Offset mismatch for FNiagaraScriptRuntimeCompiledData::ResolvedUserDataInterfaceBindings");
static_assert(offsetof(FNiagaraScriptRuntimeCompiledData, ResolvedUObjects) == 32, "Offset mismatch for FNiagaraScriptRuntimeCompiledData::ResolvedUObjects");
static_assert(offsetof(FNiagaraScriptRuntimeCompiledData, SimTarget) == 48, "Offset mismatch for FNiagaraScriptRuntimeCompiledData::SimTarget");

// /Script/Niagara.NiagaraScriptRuntimeCookedData
// Kind: ScriptStruct; super: none
struct FNiagaraScriptRuntimeCookedData
{
public:
    std::uint8_t CookedScriptRuntimeCompiledData[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t CookedExecutionParameterStore[0x90]; // 0x0038 (Size: 0x90, Type: StructProperty)
    TArray<void*> CookedRapidIterationBindings; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraScriptRuntimeCookedData, CookedScriptRuntimeCompiledData) == 0, "Offset mismatch for FNiagaraScriptRuntimeCookedData::CookedScriptRuntimeCompiledData");
static_assert(offsetof(FNiagaraScriptRuntimeCookedData, CookedExecutionParameterStore) == 56, "Offset mismatch for FNiagaraScriptRuntimeCookedData::CookedExecutionParameterStore");
static_assert(offsetof(FNiagaraScriptRuntimeCookedData, CookedRapidIterationBindings) == 200, "Offset mismatch for FNiagaraScriptRuntimeCookedData::CookedRapidIterationBindings");

// /Script/Niagara.NiagaraScriptUObjectCompileInfo
// Kind: ScriptStruct; super: none
struct FNiagaraScriptUObjectCompileInfo
{
public:
    std::uint8_t Variable[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* Object; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ObjectPath[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    FName RegisteredParameterMapRead; // 0x0028 (Size: 0x8, Type: NameProperty)
    TArray<void*> RegisteredParameterMapWrites; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraScriptUObjectCompileInfo, Variable) == 0, "Offset mismatch for FNiagaraScriptUObjectCompileInfo::Variable");
static_assert(offsetof(FNiagaraScriptUObjectCompileInfo, Object) == 8, "Offset mismatch for FNiagaraScriptUObjectCompileInfo::Object");
static_assert(offsetof(FNiagaraScriptUObjectCompileInfo, ObjectPath) == 16, "Offset mismatch for FNiagaraScriptUObjectCompileInfo::ObjectPath");
static_assert(offsetof(FNiagaraScriptUObjectCompileInfo, RegisteredParameterMapRead) == 40, "Offset mismatch for FNiagaraScriptUObjectCompileInfo::RegisteredParameterMapRead");
static_assert(offsetof(FNiagaraScriptUObjectCompileInfo, RegisteredParameterMapWrites) == 48, "Offset mismatch for FNiagaraScriptUObjectCompileInfo::RegisteredParameterMapWrites");

// /Script/Niagara.NiagaraScriptVariableBinding
// Kind: ScriptStruct; super: none
struct FNiagaraScriptVariableBinding
{
public:
    FName Name; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FNiagaraScriptVariableBinding, Name) == 0, "Offset mismatch for FNiagaraScriptVariableBinding::Name");

// /Script/Niagara.NiagaraSettingsProfile
// Kind: ScriptStruct; super: none
struct FNiagaraSettingsProfile
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraSharedDataID_StaticMesh
// Kind: ScriptStruct; super: NiagaraID
struct FNiagaraSharedDataID_StaticMesh
{
public:
    std::int32_t Index; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t AcquireTag; // 0x0004 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNiagaraSharedDataID_StaticMesh, Index) == 0, "Offset mismatch for FNiagaraSharedDataID_StaticMesh::Index");
static_assert(offsetof(FNiagaraSharedDataID_StaticMesh, AcquireTag) == 4, "Offset mismatch for FNiagaraSharedDataID_StaticMesh::AcquireTag");

// /Script/Niagara.NiagaraSimCacheCaptureParameters
// Kind: ScriptStruct; super: none
struct FNiagaraSimCacheCaptureParameters
{
public:
    std::uint8_t bAppendToSimCache; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bCaptureFixedNumberOfFrames (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::int32_t NumFrames; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t CaptureRate; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseTimeout; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x000D
    std::int32_t TimeoutFrameCount; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t bCaptureAllFramesImmediatly; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0015
    float ImmediateCaptureDeltaTime; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNiagaraSimCacheCaptureParameters, bAppendToSimCache) == 0, "Offset mismatch for FNiagaraSimCacheCaptureParameters::bAppendToSimCache");
static_assert(offsetof(FNiagaraSimCacheCaptureParameters, NumFrames) == 4, "Offset mismatch for FNiagaraSimCacheCaptureParameters::NumFrames");
static_assert(offsetof(FNiagaraSimCacheCaptureParameters, CaptureRate) == 8, "Offset mismatch for FNiagaraSimCacheCaptureParameters::CaptureRate");
static_assert(offsetof(FNiagaraSimCacheCaptureParameters, bUseTimeout) == 12, "Offset mismatch for FNiagaraSimCacheCaptureParameters::bUseTimeout");
static_assert(offsetof(FNiagaraSimCacheCaptureParameters, TimeoutFrameCount) == 16, "Offset mismatch for FNiagaraSimCacheCaptureParameters::TimeoutFrameCount");
static_assert(offsetof(FNiagaraSimCacheCaptureParameters, bCaptureAllFramesImmediatly) == 20, "Offset mismatch for FNiagaraSimCacheCaptureParameters::bCaptureAllFramesImmediatly");
static_assert(offsetof(FNiagaraSimCacheCaptureParameters, ImmediateCaptureDeltaTime) == 24, "Offset mismatch for FNiagaraSimCacheCaptureParameters::ImmediateCaptureDeltaTime");

// /Script/Niagara.NiagaraSimCacheCreateParameters
// Kind: ScriptStruct; super: none
struct FNiagaraSimCacheCreateParameters
{
public:
    std::uint8_t AttributeCaptureMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t bAllowDataInterfaceCaching; // 0x0004 (Size: 0x1, Type: BoolProperty)
    // 0x0004 BoolProperty bAllowInterpolation (shared storage)
    // 0x0004 BoolProperty bAllowRebasing (shared storage)
    // 0x0004 BoolProperty bAllowSerializeLargeCache (shared storage)
    // 0x0004 BoolProperty bAllowVelocityExtrapolation (shared storage)
    // 0x0004 BoolProperty bIncludeDebugData (shared storage)
    // 0x0004 BoolProperty bInterpolateAllTypes (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0005
    TArray<void*> RebaseIncludeAttributes; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RebaseExcludeAttributes; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InterpolationIncludeAttributes; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InterpolationExcludeAttributes; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExplicitCaptureAttributes; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraSimCacheCreateParameters, AttributeCaptureMode) == 0, "Offset mismatch for FNiagaraSimCacheCreateParameters::AttributeCaptureMode");
static_assert(offsetof(FNiagaraSimCacheCreateParameters, bAllowDataInterfaceCaching) == 4, "Offset mismatch for FNiagaraSimCacheCreateParameters::bAllowDataInterfaceCaching");
static_assert(offsetof(FNiagaraSimCacheCreateParameters, RebaseIncludeAttributes) == 8, "Offset mismatch for FNiagaraSimCacheCreateParameters::RebaseIncludeAttributes");
static_assert(offsetof(FNiagaraSimCacheCreateParameters, RebaseExcludeAttributes) == 24, "Offset mismatch for FNiagaraSimCacheCreateParameters::RebaseExcludeAttributes");
static_assert(offsetof(FNiagaraSimCacheCreateParameters, InterpolationIncludeAttributes) == 40, "Offset mismatch for FNiagaraSimCacheCreateParameters::InterpolationIncludeAttributes");
static_assert(offsetof(FNiagaraSimCacheCreateParameters, InterpolationExcludeAttributes) == 56, "Offset mismatch for FNiagaraSimCacheCreateParameters::InterpolationExcludeAttributes");
static_assert(offsetof(FNiagaraSimCacheCreateParameters, ExplicitCaptureAttributes) == 72, "Offset mismatch for FNiagaraSimCacheCreateParameters::ExplicitCaptureAttributes");

// /Script/Niagara.NiagaraSimCacheDataBuffers
// Kind: ScriptStruct; super: none
struct FNiagaraSimCacheDataBuffers
{
public:
    std::uint32_t NumInstances; // 0x0000 (Size: 0x4, Type: UInt32Property)
    std::uint32_t IDAcquireTag; // 0x0004 (Size: 0x4, Type: UInt32Property)
    std::uint32_t IDToIndexTableElements; // 0x0008 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FNiagaraSimCacheDataBuffers, NumInstances) == 0, "Offset mismatch for FNiagaraSimCacheDataBuffers::NumInstances");
static_assert(offsetof(FNiagaraSimCacheDataBuffers, IDAcquireTag) == 4, "Offset mismatch for FNiagaraSimCacheDataBuffers::IDAcquireTag");
static_assert(offsetof(FNiagaraSimCacheDataBuffers, IDToIndexTableElements) == 8, "Offset mismatch for FNiagaraSimCacheDataBuffers::IDToIndexTableElements");

// /Script/Niagara.NiagaraSimCacheDataBuffersLayout
// Kind: ScriptStruct; super: none
struct FNiagaraSimCacheDataBuffersLayout
{
public:
    std::uint8_t LayoutName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t SimTarget; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    TArray<void*> Variables; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint16_t FloatCount; // 0x0018 (Size: 0x2, Type: UInt16Property)
    std::uint16_t HalfCount; // 0x001A (Size: 0x2, Type: UInt16Property)
    std::uint16_t Int32Count; // 0x001C (Size: 0x2, Type: UInt16Property)
    std::uint8_t bLocalSpace; // 0x001E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowInterpolation; // 0x001F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowVelocityExtrapolation; // 0x0020 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0021
    TArray<void*> RebaseVariableNames; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> InterpVariableNames; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint16_t ComponentVelocity; // 0x0048 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, LayoutName) == 0, "Offset mismatch for FNiagaraSimCacheDataBuffersLayout::LayoutName");
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, SimTarget) == 4, "Offset mismatch for FNiagaraSimCacheDataBuffersLayout::SimTarget");
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, Variables) == 8, "Offset mismatch for FNiagaraSimCacheDataBuffersLayout::Variables");
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, FloatCount) == 24, "Offset mismatch for FNiagaraSimCacheDataBuffersLayout::FloatCount");
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, HalfCount) == 26, "Offset mismatch for FNiagaraSimCacheDataBuffersLayout::HalfCount");
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, Int32Count) == 28, "Offset mismatch for FNiagaraSimCacheDataBuffersLayout::Int32Count");
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, bLocalSpace) == 30, "Offset mismatch for FNiagaraSimCacheDataBuffersLayout::bLocalSpace");
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, bAllowInterpolation) == 31, "Offset mismatch for FNiagaraSimCacheDataBuffersLayout::bAllowInterpolation");
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, bAllowVelocityExtrapolation) == 32, "Offset mismatch for FNiagaraSimCacheDataBuffersLayout::bAllowVelocityExtrapolation");
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, RebaseVariableNames) == 40, "Offset mismatch for FNiagaraSimCacheDataBuffersLayout::RebaseVariableNames");
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, InterpVariableNames) == 56, "Offset mismatch for FNiagaraSimCacheDataBuffersLayout::InterpVariableNames");
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, ComponentVelocity) == 72, "Offset mismatch for FNiagaraSimCacheDataBuffersLayout::ComponentVelocity");

// /Script/Niagara.NiagaraSimCacheDebugDataFrame
// Kind: ScriptStruct; super: none
struct FNiagaraSimCacheDebugDataFrame
{
public:
    TMap<void*, void*> DebugParameterStores; // 0x0000 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FNiagaraSimCacheDebugDataFrame, DebugParameterStores) == 0, "Offset mismatch for FNiagaraSimCacheDebugDataFrame::DebugParameterStores");

// /Script/Niagara.NiagaraSimCacheEmitterFrame
// Kind: ScriptStruct; super: none
struct FNiagaraSimCacheEmitterFrame
{
public:
    std::uint8_t LocalBounds[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::int32_t TotalSpawnedParticles; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x003C
    std::uint8_t ParticleDataBuffers[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraSimCacheEmitterFrame, LocalBounds) == 0, "Offset mismatch for FNiagaraSimCacheEmitterFrame::LocalBounds");
static_assert(offsetof(FNiagaraSimCacheEmitterFrame, TotalSpawnedParticles) == 56, "Offset mismatch for FNiagaraSimCacheEmitterFrame::TotalSpawnedParticles");
static_assert(offsetof(FNiagaraSimCacheEmitterFrame, ParticleDataBuffers) == 64, "Offset mismatch for FNiagaraSimCacheEmitterFrame::ParticleDataBuffers");

// /Script/Niagara.NiagaraSimCacheFrame
// Kind: ScriptStruct; super: none
struct FNiagaraSimCacheFrame
{
public:
    std::uint8_t LocalToWorld[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    std::uint8_t LWCTile[0xC]; // 0x0060 (Size: 0xC, Type: StructProperty)
    float SimulationAge; // 0x006C (Size: 0x4, Type: FloatProperty)
    std::int32_t SimulationTickCount; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0074
    std::uint8_t SystemData[0xD0]; // 0x0078 (Size: 0xD0, Type: StructProperty)
    TArray<void*> EmitterData; // 0x0148 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraSimCacheFrame, LocalToWorld) == 0, "Offset mismatch for FNiagaraSimCacheFrame::LocalToWorld");
static_assert(offsetof(FNiagaraSimCacheFrame, LWCTile) == 96, "Offset mismatch for FNiagaraSimCacheFrame::LWCTile");
static_assert(offsetof(FNiagaraSimCacheFrame, SimulationAge) == 108, "Offset mismatch for FNiagaraSimCacheFrame::SimulationAge");
static_assert(offsetof(FNiagaraSimCacheFrame, SimulationTickCount) == 112, "Offset mismatch for FNiagaraSimCacheFrame::SimulationTickCount");
static_assert(offsetof(FNiagaraSimCacheFrame, SystemData) == 120, "Offset mismatch for FNiagaraSimCacheFrame::SystemData");
static_assert(offsetof(FNiagaraSimCacheFrame, EmitterData) == 328, "Offset mismatch for FNiagaraSimCacheFrame::EmitterData");

// /Script/Niagara.NiagaraSimCacheLayout
// Kind: ScriptStruct; super: none
struct FNiagaraSimCacheLayout
{
public:
    std::uint8_t SystemLayout[0xB0]; // 0x0000 (Size: 0xB0, Type: StructProperty)
    TArray<void*> EmitterLayouts; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraSimCacheLayout, SystemLayout) == 0, "Offset mismatch for FNiagaraSimCacheLayout::SystemLayout");
static_assert(offsetof(FNiagaraSimCacheLayout, EmitterLayouts) == 176, "Offset mismatch for FNiagaraSimCacheLayout::EmitterLayouts");

// /Script/Niagara.NiagaraSimCacheSystemFrame
// Kind: ScriptStruct; super: none
struct FNiagaraSimCacheSystemFrame
{
public:
    std::uint8_t LocalBounds[0x38]; // 0x0000 (Size: 0x38, Type: StructProperty)
    std::uint8_t SystemDataBuffers[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraSimCacheSystemFrame, LocalBounds) == 0, "Offset mismatch for FNiagaraSimCacheSystemFrame::LocalBounds");
static_assert(offsetof(FNiagaraSimCacheSystemFrame, SystemDataBuffers) == 56, "Offset mismatch for FNiagaraSimCacheSystemFrame::SystemDataBuffers");

// /Script/Niagara.NiagaraSimCacheVariable
// Kind: ScriptStruct; super: none
struct FNiagaraSimCacheVariable
{
public:
    std::uint8_t Variable[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint16_t FloatOffset; // 0x0008 (Size: 0x2, Type: UInt16Property)
    std::uint16_t FloatCount; // 0x000A (Size: 0x2, Type: UInt16Property)
    std::uint16_t HalfOffset; // 0x000C (Size: 0x2, Type: UInt16Property)
    std::uint16_t HalfCount; // 0x000E (Size: 0x2, Type: UInt16Property)
    std::uint16_t Int32Offset; // 0x0010 (Size: 0x2, Type: UInt16Property)
    std::uint16_t Int32Count; // 0x0012 (Size: 0x2, Type: UInt16Property)
};

static_assert(offsetof(FNiagaraSimCacheVariable, Variable) == 0, "Offset mismatch for FNiagaraSimCacheVariable::Variable");
static_assert(offsetof(FNiagaraSimCacheVariable, FloatOffset) == 8, "Offset mismatch for FNiagaraSimCacheVariable::FloatOffset");
static_assert(offsetof(FNiagaraSimCacheVariable, FloatCount) == 10, "Offset mismatch for FNiagaraSimCacheVariable::FloatCount");
static_assert(offsetof(FNiagaraSimCacheVariable, HalfOffset) == 12, "Offset mismatch for FNiagaraSimCacheVariable::HalfOffset");
static_assert(offsetof(FNiagaraSimCacheVariable, HalfCount) == 14, "Offset mismatch for FNiagaraSimCacheVariable::HalfCount");
static_assert(offsetof(FNiagaraSimCacheVariable, Int32Offset) == 16, "Offset mismatch for FNiagaraSimCacheVariable::Int32Offset");
static_assert(offsetof(FNiagaraSimCacheVariable, Int32Count) == 18, "Offset mismatch for FNiagaraSimCacheVariable::Int32Count");

// /Script/Niagara.NiagaraSimStageExecutionLoopData
// Kind: ScriptStruct; super: none
struct FNiagaraSimStageExecutionLoopData
{
public:
    std::uint8_t NumLoopsBinding[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::int32_t NumLoops; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t StartStageIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t EndStageIndex; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNiagaraSimStageExecutionLoopData, NumLoopsBinding) == 0, "Offset mismatch for FNiagaraSimStageExecutionLoopData::NumLoopsBinding");
static_assert(offsetof(FNiagaraSimStageExecutionLoopData, NumLoops) == 4, "Offset mismatch for FNiagaraSimStageExecutionLoopData::NumLoops");
static_assert(offsetof(FNiagaraSimStageExecutionLoopData, StartStageIndex) == 8, "Offset mismatch for FNiagaraSimStageExecutionLoopData::StartStageIndex");
static_assert(offsetof(FNiagaraSimStageExecutionLoopData, EndStageIndex) == 12, "Offset mismatch for FNiagaraSimStageExecutionLoopData::EndStageIndex");

// /Script/Niagara.NiagaraSimStageExecutionLoopEditorData
// Kind: ScriptStruct; super: none
struct FNiagaraSimStageExecutionLoopEditorData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraSimpleClientInfo
// Kind: ScriptStruct; super: none
struct FNiagaraSimpleClientInfo
{
public:
    TArray<void*> Systems; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Actors; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Components; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Emitters; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraSimpleClientInfo, Systems) == 0, "Offset mismatch for FNiagaraSimpleClientInfo::Systems");
static_assert(offsetof(FNiagaraSimpleClientInfo, Actors) == 16, "Offset mismatch for FNiagaraSimpleClientInfo::Actors");
static_assert(offsetof(FNiagaraSimpleClientInfo, Components) == 32, "Offset mismatch for FNiagaraSimpleClientInfo::Components");
static_assert(offsetof(FNiagaraSimpleClientInfo, Emitters) == 48, "Offset mismatch for FNiagaraSimpleClientInfo::Emitters");

// /Script/Niagara.NiagaraSpawnInfo
// Kind: ScriptStruct; super: none
struct FNiagaraSpawnInfo
{
public:
    std::int32_t Count; // 0x0000 (Size: 0x4, Type: IntProperty)
    float InterpStartDt; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float IntervalDt; // 0x0008 (Size: 0x4, Type: FloatProperty)
    std::int32_t SpawnGroup; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNiagaraSpawnInfo, Count) == 0, "Offset mismatch for FNiagaraSpawnInfo::Count");
static_assert(offsetof(FNiagaraSpawnInfo, InterpStartDt) == 4, "Offset mismatch for FNiagaraSpawnInfo::InterpStartDt");
static_assert(offsetof(FNiagaraSpawnInfo, IntervalDt) == 8, "Offset mismatch for FNiagaraSpawnInfo::IntervalDt");
static_assert(offsetof(FNiagaraSpawnInfo, SpawnGroup) == 12, "Offset mismatch for FNiagaraSpawnInfo::SpawnGroup");

// /Script/Niagara.NiagaraStackSection
// Kind: ScriptStruct; super: none
struct FNiagaraStackSection
{
public:
    FName SectionIdentifier; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t SectionDisplayName[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    TArray<void*> Categories; // 0x0018 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ToolTip[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t bEnabled; // 0x0038 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNiagaraStackSection, SectionIdentifier) == 0, "Offset mismatch for FNiagaraStackSection::SectionIdentifier");
static_assert(offsetof(FNiagaraStackSection, SectionDisplayName) == 8, "Offset mismatch for FNiagaraStackSection::SectionDisplayName");
static_assert(offsetof(FNiagaraStackSection, Categories) == 24, "Offset mismatch for FNiagaraStackSection::Categories");
static_assert(offsetof(FNiagaraStackSection, ToolTip) == 40, "Offset mismatch for FNiagaraStackSection::ToolTip");
static_assert(offsetof(FNiagaraStackSection, bEnabled) == 56, "Offset mismatch for FNiagaraStackSection::bEnabled");

// /Script/Niagara.NiagaraStatScope
// Kind: ScriptStruct; super: none
struct FNiagaraStatScope
{
public:
    std::uint8_t FullName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName FriendlyName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FNiagaraStatScope, FullName) == 0, "Offset mismatch for FNiagaraStatScope::FullName");
static_assert(offsetof(FNiagaraStatScope, FriendlyName) == 4, "Offset mismatch for FNiagaraStatScope::FriendlyName");

// /Script/Niagara.NiagaraStatelessDynamicParameterSet
// Kind: ScriptStruct; super: none
struct FNiagaraStatelessDynamicParameterSet
{
public:
    std::uint8_t bWChannelEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bXChannelEnabled (shared storage)
    // 0x0000 BoolProperty bYChannelEnabled (shared storage)
    // 0x0000 BoolProperty bZChannelEnabled (shared storage)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t XChannelDistribution[0x40]; // 0x0008 (Size: 0x40, Type: StructProperty)
    std::uint8_t YChannelDistribution[0x40]; // 0x0048 (Size: 0x40, Type: StructProperty)
    std::uint8_t ZChannelDistribution[0x40]; // 0x0088 (Size: 0x40, Type: StructProperty)
    std::uint8_t WChannelDistribution[0x1]; // 0x00C8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessDynamicParameterSet, bWChannelEnabled) == 0, "Offset mismatch for FNiagaraStatelessDynamicParameterSet::bWChannelEnabled");
static_assert(offsetof(FNiagaraStatelessDynamicParameterSet, XChannelDistribution) == 8, "Offset mismatch for FNiagaraStatelessDynamicParameterSet::XChannelDistribution");
static_assert(offsetof(FNiagaraStatelessDynamicParameterSet, YChannelDistribution) == 72, "Offset mismatch for FNiagaraStatelessDynamicParameterSet::YChannelDistribution");
static_assert(offsetof(FNiagaraStatelessDynamicParameterSet, ZChannelDistribution) == 136, "Offset mismatch for FNiagaraStatelessDynamicParameterSet::ZChannelDistribution");
static_assert(offsetof(FNiagaraStatelessDynamicParameterSet, WChannelDistribution) == 200, "Offset mismatch for FNiagaraStatelessDynamicParameterSet::WChannelDistribution");

// /Script/Niagara.NiagaraStatelessExpression
// Kind: ScriptStruct; super: none
struct FNiagaraStatelessExpression
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraStatelessExpressionColor
// Kind: ScriptStruct; super: NiagaraStatelessExpression
struct FNiagaraStatelessExpressionColor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraStatelessExpressionColorAdd
// Kind: ScriptStruct; super: NiagaraStatelessExpressionColor
struct FNiagaraStatelessExpressionColorAdd
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionColorAdd, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionColorAdd::A");
static_assert(offsetof(FNiagaraStatelessExpressionColorAdd, B) == 24, "Offset mismatch for FNiagaraStatelessExpressionColorAdd::B");

// /Script/Niagara.NiagaraStatelessExpressionColorBinding
// Kind: ScriptStruct; super: NiagaraStatelessExpressionColor
struct FNiagaraStatelessExpressionColorBinding
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName A; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionColorBinding, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionColorBinding::A");

// /Script/Niagara.NiagaraStatelessExpressionColorConstant
// Kind: ScriptStruct; super: NiagaraStatelessExpressionColor
struct FNiagaraStatelessExpressionColorConstant
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionColorConstant, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionColorConstant::A");

// /Script/Niagara.NiagaraStatelessExpressionColorDivide
// Kind: ScriptStruct; super: NiagaraStatelessExpressionColor
struct FNiagaraStatelessExpressionColorDivide
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionColorDivide, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionColorDivide::A");
static_assert(offsetof(FNiagaraStatelessExpressionColorDivide, B) == 24, "Offset mismatch for FNiagaraStatelessExpressionColorDivide::B");

// /Script/Niagara.NiagaraStatelessExpressionColorMultiply
// Kind: ScriptStruct; super: NiagaraStatelessExpressionColor
struct FNiagaraStatelessExpressionColorMultiply
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionColorMultiply, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionColorMultiply::A");
static_assert(offsetof(FNiagaraStatelessExpressionColorMultiply, B) == 24, "Offset mismatch for FNiagaraStatelessExpressionColorMultiply::B");

// /Script/Niagara.NiagaraStatelessExpressionColorSubtract
// Kind: ScriptStruct; super: NiagaraStatelessExpressionColor
struct FNiagaraStatelessExpressionColorSubtract
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionColorSubtract, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionColorSubtract::A");
static_assert(offsetof(FNiagaraStatelessExpressionColorSubtract, B) == 24, "Offset mismatch for FNiagaraStatelessExpressionColorSubtract::B");

// /Script/Niagara.NiagaraStatelessExpressionFloat
// Kind: ScriptStruct; super: NiagaraStatelessExpression
struct FNiagaraStatelessExpressionFloat
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraStatelessExpressionFloatAdd
// Kind: ScriptStruct; super: NiagaraStatelessExpressionFloat
struct FNiagaraStatelessExpressionFloatAdd
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionFloatAdd, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionFloatAdd::A");
static_assert(offsetof(FNiagaraStatelessExpressionFloatAdd, B) == 24, "Offset mismatch for FNiagaraStatelessExpressionFloatAdd::B");

// /Script/Niagara.NiagaraStatelessExpressionFloatBinding
// Kind: ScriptStruct; super: NiagaraStatelessExpressionFloat
struct FNiagaraStatelessExpressionFloatBinding
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName A; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionFloatBinding, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionFloatBinding::A");

// /Script/Niagara.NiagaraStatelessExpressionFloatConstant
// Kind: ScriptStruct; super: NiagaraStatelessExpressionFloat
struct FNiagaraStatelessExpressionFloatConstant
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    float A; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionFloatConstant, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionFloatConstant::A");

// /Script/Niagara.NiagaraStatelessExpressionFloatDivide
// Kind: ScriptStruct; super: NiagaraStatelessExpressionFloat
struct FNiagaraStatelessExpressionFloatDivide
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionFloatDivide, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionFloatDivide::A");
static_assert(offsetof(FNiagaraStatelessExpressionFloatDivide, B) == 24, "Offset mismatch for FNiagaraStatelessExpressionFloatDivide::B");

// /Script/Niagara.NiagaraStatelessExpressionFloatMultiply
// Kind: ScriptStruct; super: NiagaraStatelessExpressionFloat
struct FNiagaraStatelessExpressionFloatMultiply
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionFloatMultiply, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionFloatMultiply::A");
static_assert(offsetof(FNiagaraStatelessExpressionFloatMultiply, B) == 24, "Offset mismatch for FNiagaraStatelessExpressionFloatMultiply::B");

// /Script/Niagara.NiagaraStatelessExpressionFloatSubtract
// Kind: ScriptStruct; super: NiagaraStatelessExpressionFloat
struct FNiagaraStatelessExpressionFloatSubtract
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionFloatSubtract, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionFloatSubtract::A");
static_assert(offsetof(FNiagaraStatelessExpressionFloatSubtract, B) == 24, "Offset mismatch for FNiagaraStatelessExpressionFloatSubtract::B");

// /Script/Niagara.NiagaraStatelessExpressionVec2
// Kind: ScriptStruct; super: NiagaraStatelessExpression
struct FNiagaraStatelessExpressionVec2
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraStatelessExpressionVec2Add
// Kind: ScriptStruct; super: NiagaraStatelessExpressionVec2
struct FNiagaraStatelessExpressionVec2Add
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionVec2Add, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionVec2Add::A");
static_assert(offsetof(FNiagaraStatelessExpressionVec2Add, B) == 24, "Offset mismatch for FNiagaraStatelessExpressionVec2Add::B");

// /Script/Niagara.NiagaraStatelessExpressionVec2Binding
// Kind: ScriptStruct; super: NiagaraStatelessExpressionVec2
struct FNiagaraStatelessExpressionVec2Binding
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName A; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionVec2Binding, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionVec2Binding::A");

// /Script/Niagara.NiagaraStatelessExpressionVec2Constant
// Kind: ScriptStruct; super: NiagaraStatelessExpressionVec2
struct FNiagaraStatelessExpressionVec2Constant
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionVec2Constant, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionVec2Constant::A");

// /Script/Niagara.NiagaraStatelessExpressionVec2Divide
// Kind: ScriptStruct; super: NiagaraStatelessExpressionVec2
struct FNiagaraStatelessExpressionVec2Divide
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionVec2Divide, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionVec2Divide::A");
static_assert(offsetof(FNiagaraStatelessExpressionVec2Divide, B) == 24, "Offset mismatch for FNiagaraStatelessExpressionVec2Divide::B");

// /Script/Niagara.NiagaraStatelessExpressionVec2Multiply
// Kind: ScriptStruct; super: NiagaraStatelessExpressionVec2
struct FNiagaraStatelessExpressionVec2Multiply
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionVec2Multiply, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionVec2Multiply::A");
static_assert(offsetof(FNiagaraStatelessExpressionVec2Multiply, B) == 24, "Offset mismatch for FNiagaraStatelessExpressionVec2Multiply::B");

// /Script/Niagara.NiagaraStatelessExpressionVec2Subtract
// Kind: ScriptStruct; super: NiagaraStatelessExpressionVec2
struct FNiagaraStatelessExpressionVec2Subtract
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionVec2Subtract, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionVec2Subtract::A");
static_assert(offsetof(FNiagaraStatelessExpressionVec2Subtract, B) == 24, "Offset mismatch for FNiagaraStatelessExpressionVec2Subtract::B");

// /Script/Niagara.NiagaraStatelessExpressionVec3
// Kind: ScriptStruct; super: NiagaraStatelessExpression
struct FNiagaraStatelessExpressionVec3
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraStatelessExpressionVec3Add
// Kind: ScriptStruct; super: NiagaraStatelessExpressionVec3
struct FNiagaraStatelessExpressionVec3Add
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionVec3Add, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionVec3Add::A");
static_assert(offsetof(FNiagaraStatelessExpressionVec3Add, B) == 24, "Offset mismatch for FNiagaraStatelessExpressionVec3Add::B");

// /Script/Niagara.NiagaraStatelessExpressionVec3Binding
// Kind: ScriptStruct; super: NiagaraStatelessExpressionVec3
struct FNiagaraStatelessExpressionVec3Binding
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName A; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionVec3Binding, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionVec3Binding::A");

// /Script/Niagara.NiagaraStatelessExpressionVec3Constant
// Kind: ScriptStruct; super: NiagaraStatelessExpressionVec3
struct FNiagaraStatelessExpressionVec3Constant
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionVec3Constant, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionVec3Constant::A");

// /Script/Niagara.NiagaraStatelessExpressionVec3Divide
// Kind: ScriptStruct; super: NiagaraStatelessExpressionVec3
struct FNiagaraStatelessExpressionVec3Divide
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionVec3Divide, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionVec3Divide::A");
static_assert(offsetof(FNiagaraStatelessExpressionVec3Divide, B) == 24, "Offset mismatch for FNiagaraStatelessExpressionVec3Divide::B");

// /Script/Niagara.NiagaraStatelessExpressionVec3Multiply
// Kind: ScriptStruct; super: NiagaraStatelessExpressionVec3
struct FNiagaraStatelessExpressionVec3Multiply
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionVec3Multiply, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionVec3Multiply::A");
static_assert(offsetof(FNiagaraStatelessExpressionVec3Multiply, B) == 24, "Offset mismatch for FNiagaraStatelessExpressionVec3Multiply::B");

// /Script/Niagara.NiagaraStatelessExpressionVec3Subtract
// Kind: ScriptStruct; super: NiagaraStatelessExpressionVec3
struct FNiagaraStatelessExpressionVec3Subtract
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionVec3Subtract, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionVec3Subtract::A");
static_assert(offsetof(FNiagaraStatelessExpressionVec3Subtract, B) == 24, "Offset mismatch for FNiagaraStatelessExpressionVec3Subtract::B");

// /Script/Niagara.NiagaraStatelessExpressionVec4
// Kind: ScriptStruct; super: NiagaraStatelessExpression
struct FNiagaraStatelessExpressionVec4
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraStatelessExpressionVec4Add
// Kind: ScriptStruct; super: NiagaraStatelessExpressionVec4
struct FNiagaraStatelessExpressionVec4Add
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionVec4Add, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionVec4Add::A");
static_assert(offsetof(FNiagaraStatelessExpressionVec4Add, B) == 24, "Offset mismatch for FNiagaraStatelessExpressionVec4Add::B");

// /Script/Niagara.NiagaraStatelessExpressionVec4Binding
// Kind: ScriptStruct; super: NiagaraStatelessExpressionVec4
struct FNiagaraStatelessExpressionVec4Binding
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    FName A; // 0x0008 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionVec4Binding, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionVec4Binding::A");

// /Script/Niagara.NiagaraStatelessExpressionVec4Constant
// Kind: ScriptStruct; super: NiagaraStatelessExpressionVec4
struct FNiagaraStatelessExpressionVec4Constant
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t A[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionVec4Constant, A) == 16, "Offset mismatch for FNiagaraStatelessExpressionVec4Constant::A");

// /Script/Niagara.NiagaraStatelessExpressionVec4Divide
// Kind: ScriptStruct; super: NiagaraStatelessExpressionVec4
struct FNiagaraStatelessExpressionVec4Divide
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionVec4Divide, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionVec4Divide::A");
static_assert(offsetof(FNiagaraStatelessExpressionVec4Divide, B) == 24, "Offset mismatch for FNiagaraStatelessExpressionVec4Divide::B");

// /Script/Niagara.NiagaraStatelessExpressionVec4Multiply
// Kind: ScriptStruct; super: NiagaraStatelessExpressionVec4
struct FNiagaraStatelessExpressionVec4Multiply
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionVec4Multiply, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionVec4Multiply::A");
static_assert(offsetof(FNiagaraStatelessExpressionVec4Multiply, B) == 24, "Offset mismatch for FNiagaraStatelessExpressionVec4Multiply::B");

// /Script/Niagara.NiagaraStatelessExpressionVec4Subtract
// Kind: ScriptStruct; super: NiagaraStatelessExpressionVec4
struct FNiagaraStatelessExpressionVec4Subtract
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t A[0x10]; // 0x0008 (Size: 0x10, Type: StructProperty)
    std::uint8_t B[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessExpressionVec4Subtract, A) == 8, "Offset mismatch for FNiagaraStatelessExpressionVec4Subtract::A");
static_assert(offsetof(FNiagaraStatelessExpressionVec4Subtract, B) == 24, "Offset mismatch for FNiagaraStatelessExpressionVec4Subtract::B");

// /Script/Niagara.NiagaraStatelessSpawnInfo
// Kind: ScriptStruct; super: none
struct FNiagaraStatelessSpawnInfo
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float SpawnTime; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Amount[0x28]; // 0x0008 (Size: 0x28, Type: StructProperty)
    std::uint8_t Rate[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    std::uint8_t bEnabled; // 0x0060 (Size: 0x1, Type: BoolProperty)
    // 0x0060 BoolProperty bLoopCountLimitEnabled (shared storage)
    // 0x0060 BoolProperty bSpawnProbabilityEnabled (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0061
    std::uint8_t SpawnProbability[0x30]; // 0x0068 (Size: 0x30, Type: StructProperty)
    std::uint8_t LoopCountLimit[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraStatelessSpawnInfo, Type) == 0, "Offset mismatch for FNiagaraStatelessSpawnInfo::Type");
static_assert(offsetof(FNiagaraStatelessSpawnInfo, SpawnTime) == 4, "Offset mismatch for FNiagaraStatelessSpawnInfo::SpawnTime");
static_assert(offsetof(FNiagaraStatelessSpawnInfo, Amount) == 8, "Offset mismatch for FNiagaraStatelessSpawnInfo::Amount");
static_assert(offsetof(FNiagaraStatelessSpawnInfo, Rate) == 48, "Offset mismatch for FNiagaraStatelessSpawnInfo::Rate");
static_assert(offsetof(FNiagaraStatelessSpawnInfo, bEnabled) == 96, "Offset mismatch for FNiagaraStatelessSpawnInfo::bEnabled");
static_assert(offsetof(FNiagaraStatelessSpawnInfo, SpawnProbability) == 104, "Offset mismatch for FNiagaraStatelessSpawnInfo::SpawnProbability");
static_assert(offsetof(FNiagaraStatelessSpawnInfo, LoopCountLimit) == 152, "Offset mismatch for FNiagaraStatelessSpawnInfo::LoopCountLimit");

// /Script/Niagara.NiagaraStatelessSystemScaleBuildData
// Kind: ScriptStruct; super: none
struct FNiagaraStatelessSystemScaleBuildData
{
public:
    std::uint8_t bScaleCameraOffset; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bScaleForces (shared storage)
    // 0x0000 BoolProperty bScaleInitialDecalSize (shared storage)
    // 0x0000 BoolProperty bScaleInitialLightRadius (shared storage)
    // 0x0000 BoolProperty bScaleInitialRibbonWidth (shared storage)
    // 0x0000 BoolProperty bScaleInitialSpriteSize (shared storage)
    // 0x0000 BoolProperty bScaleInitialSpriteSizeBySingleAxis (shared storage)
    // 0x0000 BoolProperty bScaleInitialVelocity (shared storage)
    std::uint8_t bScaleInitialLightRadiusBySingleAxis; // 0x0001 (Size: 0x1, Type: BoolProperty)
    // 0x0001 BoolProperty bScaleInitialRibbonWidthBySingleAxis (shared storage)
    std::uint8_t Pad_0000[0x2]; // 0x0002
    std::uint8_t ScaleInitialVelocityScaleAmount[0xC]; // 0x0004 (Size: 0xC, Type: StructProperty)
    std::uint8_t ScaleForcesScaleAmount[0xC]; // 0x0010 (Size: 0xC, Type: StructProperty)
    std::uint8_t bScaleForcesInverseScaling; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x001D
    float ScaleInitialSpriteSizeScaleAmount; // 0x0020 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ScaleInitialSpriteSizeAxis; // 0x0024 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0025
    float ScaleCameraOffsetAmount; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float ScaleInitialRibbonWidthScaleAmount; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::uint8_t ScaleInitialRibbonWidthScalingAxis; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0031
    std::uint8_t ScaleInitialDecalSizeScaleAmount[0xC]; // 0x0034 (Size: 0xC, Type: StructProperty)
    float ScaleInitialLightRadiusScaleAmount; // 0x0040 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ScaleInitialLightRadiusScalingAxis; // 0x0044 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FNiagaraStatelessSystemScaleBuildData, bScaleCameraOffset) == 0, "Offset mismatch for FNiagaraStatelessSystemScaleBuildData::bScaleCameraOffset");
static_assert(offsetof(FNiagaraStatelessSystemScaleBuildData, bScaleInitialLightRadiusBySingleAxis) == 1, "Offset mismatch for FNiagaraStatelessSystemScaleBuildData::bScaleInitialLightRadiusBySingleAxis");
static_assert(offsetof(FNiagaraStatelessSystemScaleBuildData, ScaleInitialVelocityScaleAmount) == 4, "Offset mismatch for FNiagaraStatelessSystemScaleBuildData::ScaleInitialVelocityScaleAmount");
static_assert(offsetof(FNiagaraStatelessSystemScaleBuildData, ScaleForcesScaleAmount) == 16, "Offset mismatch for FNiagaraStatelessSystemScaleBuildData::ScaleForcesScaleAmount");
static_assert(offsetof(FNiagaraStatelessSystemScaleBuildData, bScaleForcesInverseScaling) == 28, "Offset mismatch for FNiagaraStatelessSystemScaleBuildData::bScaleForcesInverseScaling");
static_assert(offsetof(FNiagaraStatelessSystemScaleBuildData, ScaleInitialSpriteSizeScaleAmount) == 32, "Offset mismatch for FNiagaraStatelessSystemScaleBuildData::ScaleInitialSpriteSizeScaleAmount");
static_assert(offsetof(FNiagaraStatelessSystemScaleBuildData, ScaleInitialSpriteSizeAxis) == 36, "Offset mismatch for FNiagaraStatelessSystemScaleBuildData::ScaleInitialSpriteSizeAxis");
static_assert(offsetof(FNiagaraStatelessSystemScaleBuildData, ScaleCameraOffsetAmount) == 40, "Offset mismatch for FNiagaraStatelessSystemScaleBuildData::ScaleCameraOffsetAmount");
static_assert(offsetof(FNiagaraStatelessSystemScaleBuildData, ScaleInitialRibbonWidthScaleAmount) == 44, "Offset mismatch for FNiagaraStatelessSystemScaleBuildData::ScaleInitialRibbonWidthScaleAmount");
static_assert(offsetof(FNiagaraStatelessSystemScaleBuildData, ScaleInitialRibbonWidthScalingAxis) == 48, "Offset mismatch for FNiagaraStatelessSystemScaleBuildData::ScaleInitialRibbonWidthScalingAxis");
static_assert(offsetof(FNiagaraStatelessSystemScaleBuildData, ScaleInitialDecalSizeScaleAmount) == 52, "Offset mismatch for FNiagaraStatelessSystemScaleBuildData::ScaleInitialDecalSizeScaleAmount");
static_assert(offsetof(FNiagaraStatelessSystemScaleBuildData, ScaleInitialLightRadiusScaleAmount) == 64, "Offset mismatch for FNiagaraStatelessSystemScaleBuildData::ScaleInitialLightRadiusScaleAmount");
static_assert(offsetof(FNiagaraStatelessSystemScaleBuildData, ScaleInitialLightRadiusScalingAxis) == 68, "Offset mismatch for FNiagaraStatelessSystemScaleBuildData::ScaleInitialLightRadiusScalingAxis");

// /Script/Niagara.NiagaraStructConversionStep
// Kind: ScriptStruct; super: none
struct FNiagaraStructConversionStep
{
public:
    std::int32_t LWCBytes; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t LWCOffset; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t SimulationBytes; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t SimulationOffset; // 0x000C (Size: 0x4, Type: IntProperty)
    std::uint8_t ConversionType; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FNiagaraStructConversionStep, LWCBytes) == 0, "Offset mismatch for FNiagaraStructConversionStep::LWCBytes");
static_assert(offsetof(FNiagaraStructConversionStep, LWCOffset) == 4, "Offset mismatch for FNiagaraStructConversionStep::LWCOffset");
static_assert(offsetof(FNiagaraStructConversionStep, SimulationBytes) == 8, "Offset mismatch for FNiagaraStructConversionStep::SimulationBytes");
static_assert(offsetof(FNiagaraStructConversionStep, SimulationOffset) == 12, "Offset mismatch for FNiagaraStructConversionStep::SimulationOffset");
static_assert(offsetof(FNiagaraStructConversionStep, ConversionType) == 16, "Offset mismatch for FNiagaraStructConversionStep::ConversionType");

// /Script/Niagara.NiagaraSystemAsyncCompileResults
// Kind: ScriptStruct; super: none
struct FNiagaraSystemAsyncCompileResults
{
public:
    TArray<void*> RootObjects; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0000[0x18]; // 0x0010
    TArray<void*> ExposedVariables; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraSystemAsyncCompileResults, RootObjects) == 0, "Offset mismatch for FNiagaraSystemAsyncCompileResults::RootObjects");
static_assert(offsetof(FNiagaraSystemAsyncCompileResults, ExposedVariables) == 40, "Offset mismatch for FNiagaraSystemAsyncCompileResults::ExposedVariables");

// /Script/Niagara.NiagaraSystemCollectionData
// Kind: ScriptStruct; super: none
struct FNiagaraSystemCollectionData
{
public:
    TArray<void*> Systems; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SystemsInternal; // 0x0010 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraSystemCollectionData, Systems) == 0, "Offset mismatch for FNiagaraSystemCollectionData::Systems");
static_assert(offsetof(FNiagaraSystemCollectionData, SystemsInternal) == 16, "Offset mismatch for FNiagaraSystemCollectionData::SystemsInternal");

// /Script/Niagara.NiagaraSystemCompiledData
// Kind: ScriptStruct; super: none
struct FNiagaraSystemCompiledData
{
public:
    std::uint8_t InstanceParamStore[0x88]; // 0x0000 (Size: 0x88, Type: StructProperty)
    std::uint8_t DataSetCompiledData[0x40]; // 0x0088 (Size: 0x40, Type: StructProperty)
    std::uint8_t SpawnInstanceParamsDataSetCompiledData[0x40]; // 0x00C8 (Size: 0x40, Type: StructProperty)
    std::uint8_t UpdateInstanceParamsDataSetCompiledData[0x40]; // 0x0108 (Size: 0x40, Type: StructProperty)
    std::uint8_t SpawnInstanceGlobalBinding[0x20]; // 0x0148 (Size: 0x20, Type: StructProperty)
    std::uint8_t SpawnInstanceSystemBinding[0x20]; // 0x0168 (Size: 0x20, Type: StructProperty)
    std::uint8_t SpawnInstanceOwnerBinding[0x20]; // 0x0188 (Size: 0x20, Type: StructProperty)
    TArray<void*> SpawnInstanceEmitterBindings; // 0x01A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t UpdateInstanceGlobalBinding[0x20]; // 0x01B8 (Size: 0x20, Type: StructProperty)
    std::uint8_t UpdateInstanceSystemBinding[0x20]; // 0x01D8 (Size: 0x20, Type: StructProperty)
    std::uint8_t UpdateInstanceOwnerBinding[0x20]; // 0x01F8 (Size: 0x20, Type: StructProperty)
    TArray<void*> UpdateInstanceEmitterBindings; // 0x0218 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraSystemCompiledData, InstanceParamStore) == 0, "Offset mismatch for FNiagaraSystemCompiledData::InstanceParamStore");
static_assert(offsetof(FNiagaraSystemCompiledData, DataSetCompiledData) == 136, "Offset mismatch for FNiagaraSystemCompiledData::DataSetCompiledData");
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceParamsDataSetCompiledData) == 200, "Offset mismatch for FNiagaraSystemCompiledData::SpawnInstanceParamsDataSetCompiledData");
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceParamsDataSetCompiledData) == 264, "Offset mismatch for FNiagaraSystemCompiledData::UpdateInstanceParamsDataSetCompiledData");
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceGlobalBinding) == 328, "Offset mismatch for FNiagaraSystemCompiledData::SpawnInstanceGlobalBinding");
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceSystemBinding) == 360, "Offset mismatch for FNiagaraSystemCompiledData::SpawnInstanceSystemBinding");
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceOwnerBinding) == 392, "Offset mismatch for FNiagaraSystemCompiledData::SpawnInstanceOwnerBinding");
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceEmitterBindings) == 424, "Offset mismatch for FNiagaraSystemCompiledData::SpawnInstanceEmitterBindings");
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceGlobalBinding) == 440, "Offset mismatch for FNiagaraSystemCompiledData::UpdateInstanceGlobalBinding");
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceSystemBinding) == 472, "Offset mismatch for FNiagaraSystemCompiledData::UpdateInstanceSystemBinding");
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceOwnerBinding) == 504, "Offset mismatch for FNiagaraSystemCompiledData::UpdateInstanceOwnerBinding");
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceEmitterBindings) == 536, "Offset mismatch for FNiagaraSystemCompiledData::UpdateInstanceEmitterBindings");

// /Script/Niagara.NiagaraSystemPSOPrecacheSettings
// Kind: ScriptStruct; super: none
struct FNiagaraSystemPSOPrecacheSettings
{
public:
    std::uint8_t DelayMode; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PreCachePriorityBoost; // 0x0001 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PrecachingTime; // 0x0002 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCacheOnLoad; // 0x0003 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNiagaraSystemPSOPrecacheSettings, DelayMode) == 0, "Offset mismatch for FNiagaraSystemPSOPrecacheSettings::DelayMode");
static_assert(offsetof(FNiagaraSystemPSOPrecacheSettings, PreCachePriorityBoost) == 1, "Offset mismatch for FNiagaraSystemPSOPrecacheSettings::PreCachePriorityBoost");
static_assert(offsetof(FNiagaraSystemPSOPrecacheSettings, PrecachingTime) == 2, "Offset mismatch for FNiagaraSystemPSOPrecacheSettings::PrecachingTime");
static_assert(offsetof(FNiagaraSystemPSOPrecacheSettings, bCacheOnLoad) == 3, "Offset mismatch for FNiagaraSystemPSOPrecacheSettings::bCacheOnLoad");

// /Script/Niagara.NiagaraSystemScalabilityOverride
// Kind: ScriptStruct; super: NiagaraSystemScalabilitySettings
struct FNiagaraSystemScalabilityOverride
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t bOverrideCullProxySettings; // 0x0098 (Size: 0x1, Type: BoolProperty)
    // 0x0098 BoolProperty bOverrideDistanceSettings (shared storage)
    // 0x0098 BoolProperty bOverrideGlobalBudgetScalingSettings (shared storage)
    // 0x0098 BoolProperty bOverrideInstanceCountSettings (shared storage)
    // 0x0098 BoolProperty bOverridePerSystemInstanceCountSettings (shared storage)
    // 0x0098 BoolProperty bOverrideVisibilitySettings (shared storage)
};

static_assert(offsetof(FNiagaraSystemScalabilityOverride, bOverrideCullProxySettings) == 152, "Offset mismatch for FNiagaraSystemScalabilityOverride::bOverrideCullProxySettings");

// /Script/Niagara.NiagaraSystemScalabilityOverrides
// Kind: ScriptStruct; super: none
struct FNiagaraSystemScalabilityOverrides
{
public:
    TArray<void*> Overrides; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraSystemScalabilityOverrides, Overrides) == 0, "Offset mismatch for FNiagaraSystemScalabilityOverrides::Overrides");

// /Script/Niagara.NiagaraSystemScalabilitySettings
// Kind: ScriptStruct; super: none
struct FNiagaraSystemScalabilitySettings
{
public:
    std::uint8_t Platforms[0x30]; // 0x0000 (Size: 0x30, Type: StructProperty)
    std::uint8_t bCullByDistance; // 0x0030 (Size: 0x1, Type: BoolProperty)
    // 0x0030 BoolProperty bCullMaxInstanceCount (shared storage)
    // 0x0030 BoolProperty bCullPerSystemMaxInstanceCount (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0031
    float MaxDistance; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bCullByMaxTimeWithoutRender; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::int32_t MaxInstances; // 0x003C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxSystemInstances; // 0x0040 (Size: 0x4, Type: IntProperty)
    float MaxTimeWithoutRender; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CullProxyMode; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0049
    std::int32_t MaxSystemProxies; // 0x004C (Size: 0x4, Type: IntProperty)
    std::uint8_t VisibilityCulling[0xC]; // 0x0050 (Size: 0xC, Type: StructProperty)
    std::uint8_t BudgetScaling[0x1]; // 0x005C (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraSystemScalabilitySettings, Platforms) == 0, "Offset mismatch for FNiagaraSystemScalabilitySettings::Platforms");
static_assert(offsetof(FNiagaraSystemScalabilitySettings, bCullByDistance) == 48, "Offset mismatch for FNiagaraSystemScalabilitySettings::bCullByDistance");
static_assert(offsetof(FNiagaraSystemScalabilitySettings, MaxDistance) == 52, "Offset mismatch for FNiagaraSystemScalabilitySettings::MaxDistance");
static_assert(offsetof(FNiagaraSystemScalabilitySettings, bCullByMaxTimeWithoutRender) == 56, "Offset mismatch for FNiagaraSystemScalabilitySettings::bCullByMaxTimeWithoutRender");
static_assert(offsetof(FNiagaraSystemScalabilitySettings, MaxInstances) == 60, "Offset mismatch for FNiagaraSystemScalabilitySettings::MaxInstances");
static_assert(offsetof(FNiagaraSystemScalabilitySettings, MaxSystemInstances) == 64, "Offset mismatch for FNiagaraSystemScalabilitySettings::MaxSystemInstances");
static_assert(offsetof(FNiagaraSystemScalabilitySettings, MaxTimeWithoutRender) == 68, "Offset mismatch for FNiagaraSystemScalabilitySettings::MaxTimeWithoutRender");
static_assert(offsetof(FNiagaraSystemScalabilitySettings, CullProxyMode) == 72, "Offset mismatch for FNiagaraSystemScalabilitySettings::CullProxyMode");
static_assert(offsetof(FNiagaraSystemScalabilitySettings, MaxSystemProxies) == 76, "Offset mismatch for FNiagaraSystemScalabilitySettings::MaxSystemProxies");
static_assert(offsetof(FNiagaraSystemScalabilitySettings, VisibilityCulling) == 80, "Offset mismatch for FNiagaraSystemScalabilitySettings::VisibilityCulling");
static_assert(offsetof(FNiagaraSystemScalabilitySettings, BudgetScaling) == 92, "Offset mismatch for FNiagaraSystemScalabilitySettings::BudgetScaling");

// /Script/Niagara.NiagaraSystemScalabilitySettingsArray
// Kind: ScriptStruct; super: none
struct FNiagaraSystemScalabilitySettingsArray
{
public:
    TArray<void*> Settings; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraSystemScalabilitySettingsArray, Settings) == 0, "Offset mismatch for FNiagaraSystemScalabilitySettingsArray::Settings");

// /Script/Niagara.NiagaraSystemSimCacheCaptureReply
// Kind: ScriptStruct; super: none
struct FNiagaraSystemSimCacheCaptureReply
{
public:
    FName ComponentName; // 0x0000 (Size: 0x8, Type: NameProperty)
    TArray<void*> SimCacheData; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraSystemSimCacheCaptureReply, ComponentName) == 0, "Offset mismatch for FNiagaraSystemSimCacheCaptureReply::ComponentName");
static_assert(offsetof(FNiagaraSystemSimCacheCaptureReply, SimCacheData) == 8, "Offset mismatch for FNiagaraSystemSimCacheCaptureReply::SimCacheData");

// /Script/Niagara.NiagaraSystemSimCacheCaptureRequest
// Kind: ScriptStruct; super: none
struct FNiagaraSystemSimCacheCaptureRequest
{
public:
    std::uint8_t ComponentName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint32_t CaptureDelayFrames; // 0x0004 (Size: 0x4, Type: UInt32Property)
    std::uint32_t CaptureFrames; // 0x0008 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(FNiagaraSystemSimCacheCaptureRequest, ComponentName) == 0, "Offset mismatch for FNiagaraSystemSimCacheCaptureRequest::ComponentName");
static_assert(offsetof(FNiagaraSystemSimCacheCaptureRequest, CaptureDelayFrames) == 4, "Offset mismatch for FNiagaraSystemSimCacheCaptureRequest::CaptureDelayFrames");
static_assert(offsetof(FNiagaraSystemSimCacheCaptureRequest, CaptureFrames) == 8, "Offset mismatch for FNiagaraSystemSimCacheCaptureRequest::CaptureFrames");

// /Script/Niagara.NiagaraSystemStateData
// Kind: ScriptStruct; super: none
struct FNiagaraSystemStateData
{
public:
    std::uint8_t bDelayFirstLoopOnly; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bIgnoreSystemState (shared storage)
    // 0x0000 BoolProperty bLoopDelayEnabled (shared storage)
    // 0x0000 BoolProperty bRecalculateDelayEachLoop (shared storage)
    // 0x0000 BoolProperty bRecalculateDurationEachLoop (shared storage)
    // 0x0000 BoolProperty bRunSpawnScript (shared storage)
    // 0x0000 BoolProperty bRunUpdateScript (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t InactiveResponse; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LoopBehavior; // 0x0005 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0006
    std::uint8_t LoopDuration[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::int32_t LoopCount; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x003C
    std::uint8_t LoopDelay[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraSystemStateData, bDelayFirstLoopOnly) == 0, "Offset mismatch for FNiagaraSystemStateData::bDelayFirstLoopOnly");
static_assert(offsetof(FNiagaraSystemStateData, InactiveResponse) == 4, "Offset mismatch for FNiagaraSystemStateData::InactiveResponse");
static_assert(offsetof(FNiagaraSystemStateData, LoopBehavior) == 5, "Offset mismatch for FNiagaraSystemStateData::LoopBehavior");
static_assert(offsetof(FNiagaraSystemStateData, LoopDuration) == 8, "Offset mismatch for FNiagaraSystemStateData::LoopDuration");
static_assert(offsetof(FNiagaraSystemStateData, LoopCount) == 56, "Offset mismatch for FNiagaraSystemStateData::LoopCount");
static_assert(offsetof(FNiagaraSystemStateData, LoopDelay) == 64, "Offset mismatch for FNiagaraSystemStateData::LoopDelay");

// /Script/Niagara.NiagaraSystemUpdateContext
// Kind: ScriptStruct; super: none
struct FNiagaraSystemUpdateContext
{
public:
    TArray<void*> ComponentsToReset; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ComponentsToReInit; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ComponentsToNotifySimDestroy; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ComponentsToDestroyInstance; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SystemSimsToDestroy; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SystemSimsToRecache; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraSystemUpdateContext, ComponentsToReset) == 0, "Offset mismatch for FNiagaraSystemUpdateContext::ComponentsToReset");
static_assert(offsetof(FNiagaraSystemUpdateContext, ComponentsToReInit) == 16, "Offset mismatch for FNiagaraSystemUpdateContext::ComponentsToReInit");
static_assert(offsetof(FNiagaraSystemUpdateContext, ComponentsToNotifySimDestroy) == 32, "Offset mismatch for FNiagaraSystemUpdateContext::ComponentsToNotifySimDestroy");
static_assert(offsetof(FNiagaraSystemUpdateContext, ComponentsToDestroyInstance) == 48, "Offset mismatch for FNiagaraSystemUpdateContext::ComponentsToDestroyInstance");
static_assert(offsetof(FNiagaraSystemUpdateContext, SystemSimsToDestroy) == 64, "Offset mismatch for FNiagaraSystemUpdateContext::SystemSimsToDestroy");
static_assert(offsetof(FNiagaraSystemUpdateContext, SystemSimsToRecache) == 80, "Offset mismatch for FNiagaraSystemUpdateContext::SystemSimsToRecache");

// /Script/Niagara.NiagaraSystemVisibilityCullingSettings
// Kind: ScriptStruct; super: none
struct FNiagaraSystemVisibilityCullingSettings
{
public:
    std::uint8_t bAllowPreCullingByViewFrustum; // 0x0000 (Size: 0x1, Type: BoolProperty)
    // 0x0000 BoolProperty bCullByViewFrustum (shared storage)
    // 0x0000 BoolProperty bCullWhenNotRendered (shared storage)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float MaxTimeOutsideViewFrustum; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MaxTimeWithoutRender; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNiagaraSystemVisibilityCullingSettings, bAllowPreCullingByViewFrustum) == 0, "Offset mismatch for FNiagaraSystemVisibilityCullingSettings::bAllowPreCullingByViewFrustum");
static_assert(offsetof(FNiagaraSystemVisibilityCullingSettings, MaxTimeOutsideViewFrustum) == 4, "Offset mismatch for FNiagaraSystemVisibilityCullingSettings::MaxTimeOutsideViewFrustum");
static_assert(offsetof(FNiagaraSystemVisibilityCullingSettings, MaxTimeWithoutRender) == 8, "Offset mismatch for FNiagaraSystemVisibilityCullingSettings::MaxTimeWithoutRender");

// /Script/Niagara.NiagaraTypeDefinition
// Kind: ScriptStruct; super: none
struct FNiagaraTypeDefinition
{
public:
    void* ClassStructOrEnum; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint16_t UnderlyingType; // 0x0008 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Flags; // 0x000A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FNiagaraTypeDefinition, ClassStructOrEnum) == 0, "Offset mismatch for FNiagaraTypeDefinition::ClassStructOrEnum");
static_assert(offsetof(FNiagaraTypeDefinition, UnderlyingType) == 8, "Offset mismatch for FNiagaraTypeDefinition::UnderlyingType");
static_assert(offsetof(FNiagaraTypeDefinition, Flags) == 10, "Offset mismatch for FNiagaraTypeDefinition::Flags");

// /Script/Niagara.NiagaraTypeDefinitionHandle
// Kind: ScriptStruct; super: none
struct FNiagaraTypeDefinitionHandle
{
public:
    std::int32_t RegisteredTypeIndex; // 0x0000 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNiagaraTypeDefinitionHandle, RegisteredTypeIndex) == 0, "Offset mismatch for FNiagaraTypeDefinitionHandle::RegisteredTypeIndex");

// /Script/Niagara.NiagaraTypeLayoutInfo
// Kind: ScriptStruct; super: none
struct FNiagaraTypeLayoutInfo
{
public:
    std::uint16_t NumFloatComponents; // 0x0000 (Size: 0x2, Type: UInt16Property)
    std::uint16_t NumInt32Components; // 0x0002 (Size: 0x2, Type: UInt16Property)
    std::uint16_t NumHalfComponents; // 0x0004 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    TArray<void*> ComponentsOffsets; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraTypeLayoutInfo, NumFloatComponents) == 0, "Offset mismatch for FNiagaraTypeLayoutInfo::NumFloatComponents");
static_assert(offsetof(FNiagaraTypeLayoutInfo, NumInt32Components) == 2, "Offset mismatch for FNiagaraTypeLayoutInfo::NumInt32Components");
static_assert(offsetof(FNiagaraTypeLayoutInfo, NumHalfComponents) == 4, "Offset mismatch for FNiagaraTypeLayoutInfo::NumHalfComponents");
static_assert(offsetof(FNiagaraTypeLayoutInfo, ComponentsOffsets) == 8, "Offset mismatch for FNiagaraTypeLayoutInfo::ComponentsOffsets");

// /Script/Niagara.NiagaraUObjectPropertyReaderRemap
// Kind: ScriptStruct; super: none
struct FNiagaraUObjectPropertyReaderRemap
{
public:
    std::uint8_t GraphName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName RemapName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FNiagaraUObjectPropertyReaderRemap, GraphName) == 0, "Offset mismatch for FNiagaraUObjectPropertyReaderRemap::GraphName");
static_assert(offsetof(FNiagaraUObjectPropertyReaderRemap, RemapName) == 4, "Offset mismatch for FNiagaraUObjectPropertyReaderRemap::RemapName");

// /Script/Niagara.NiagaraUserParameterBinding
// Kind: ScriptStruct; super: none
struct FNiagaraUserParameterBinding
{
public:
    std::uint8_t Parameter[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraUserParameterBinding, Parameter) == 0, "Offset mismatch for FNiagaraUserParameterBinding::Parameter");

// /Script/Niagara.NiagaraUserParameterInfo
// Kind: ScriptStruct; super: none
struct FNiagaraUserParameterInfo
{
public:
    FName ParameterName; // 0x0000 (Size: 0x8, Type: NameProperty)
    void* ParameterType; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TypeName[0x4]; // 0x0010 (Size: 0x4, Type: NameProperty)
    std::int32_t ParameterSizeBytes; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t bIsEnumType; // 0x0018 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FNiagaraUserParameterInfo, ParameterName) == 0, "Offset mismatch for FNiagaraUserParameterInfo::ParameterName");
static_assert(offsetof(FNiagaraUserParameterInfo, ParameterType) == 8, "Offset mismatch for FNiagaraUserParameterInfo::ParameterType");
static_assert(offsetof(FNiagaraUserParameterInfo, TypeName) == 16, "Offset mismatch for FNiagaraUserParameterInfo::TypeName");
static_assert(offsetof(FNiagaraUserParameterInfo, ParameterSizeBytes) == 20, "Offset mismatch for FNiagaraUserParameterInfo::ParameterSizeBytes");
static_assert(offsetof(FNiagaraUserParameterInfo, bIsEnumType) == 24, "Offset mismatch for FNiagaraUserParameterInfo::bIsEnumType");

// /Script/Niagara.NiagaraUserRedirectionParameterStore
// Kind: ScriptStruct; super: NiagaraParameterStore
struct FNiagaraUserRedirectionParameterStore
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TMap<void*, void*> UserParameterRedirects; // 0x0088 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(FNiagaraUserRedirectionParameterStore, UserParameterRedirects) == 136, "Offset mismatch for FNiagaraUserRedirectionParameterStore::UserParameterRedirects");

// /Script/Niagara.NiagaraVMExecutableByteCode
// Kind: ScriptStruct; super: none
struct FNiagaraVMExecutableByteCode
{
public:
    TArray<void*> Data; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::int32_t UncompressedSize; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNiagaraVMExecutableByteCode, Data) == 0, "Offset mismatch for FNiagaraVMExecutableByteCode::Data");
static_assert(offsetof(FNiagaraVMExecutableByteCode, UncompressedSize) == 16, "Offset mismatch for FNiagaraVMExecutableByteCode::UncompressedSize");

// /Script/Niagara.NiagaraVMExecutableData
// Kind: ScriptStruct; super: none
struct FNiagaraVMExecutableData
{
public:
    std::uint8_t ByteCode[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::int32_t NumTempRegisters; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::int32_t NumUserPtrs; // 0x001C (Size: 0x4, Type: IntProperty)
    TArray<void*> CompileTags; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ScriptLiterals; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Attributes; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DataUsage[0x8]; // 0x0050 (Size: 0x8, Type: StructProperty)
    TArray<void*> UObjectInfos; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CalledVMExternalFunctions; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ReadDataSets; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> WriteDataSets; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> StatScopes; // 0x0098 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ShaderScriptParametersMetadata[0x40]; // 0x00A8 (Size: 0x40, Type: StructProperty)
    std::uint8_t LastCompileStatus; // 0x00E8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x00E9
    TArray<void*> SimulationStageMetaData; // 0x00F0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ExperimentalContextData; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bNeedsGPUContextInit; // 0x0110 (Size: 0x1, Type: BoolProperty)
    // 0x0110 BoolProperty bReadsSignificanceIndex (shared storage)
};

static_assert(offsetof(FNiagaraVMExecutableData, ByteCode) == 0, "Offset mismatch for FNiagaraVMExecutableData::ByteCode");
static_assert(offsetof(FNiagaraVMExecutableData, NumTempRegisters) == 24, "Offset mismatch for FNiagaraVMExecutableData::NumTempRegisters");
static_assert(offsetof(FNiagaraVMExecutableData, NumUserPtrs) == 28, "Offset mismatch for FNiagaraVMExecutableData::NumUserPtrs");
static_assert(offsetof(FNiagaraVMExecutableData, CompileTags) == 32, "Offset mismatch for FNiagaraVMExecutableData::CompileTags");
static_assert(offsetof(FNiagaraVMExecutableData, ScriptLiterals) == 48, "Offset mismatch for FNiagaraVMExecutableData::ScriptLiterals");
static_assert(offsetof(FNiagaraVMExecutableData, Attributes) == 64, "Offset mismatch for FNiagaraVMExecutableData::Attributes");
static_assert(offsetof(FNiagaraVMExecutableData, DataUsage) == 80, "Offset mismatch for FNiagaraVMExecutableData::DataUsage");
static_assert(offsetof(FNiagaraVMExecutableData, UObjectInfos) == 88, "Offset mismatch for FNiagaraVMExecutableData::UObjectInfos");
static_assert(offsetof(FNiagaraVMExecutableData, CalledVMExternalFunctions) == 104, "Offset mismatch for FNiagaraVMExecutableData::CalledVMExternalFunctions");
static_assert(offsetof(FNiagaraVMExecutableData, ReadDataSets) == 120, "Offset mismatch for FNiagaraVMExecutableData::ReadDataSets");
static_assert(offsetof(FNiagaraVMExecutableData, WriteDataSets) == 136, "Offset mismatch for FNiagaraVMExecutableData::WriteDataSets");
static_assert(offsetof(FNiagaraVMExecutableData, StatScopes) == 152, "Offset mismatch for FNiagaraVMExecutableData::StatScopes");
static_assert(offsetof(FNiagaraVMExecutableData, ShaderScriptParametersMetadata) == 168, "Offset mismatch for FNiagaraVMExecutableData::ShaderScriptParametersMetadata");
static_assert(offsetof(FNiagaraVMExecutableData, LastCompileStatus) == 232, "Offset mismatch for FNiagaraVMExecutableData::LastCompileStatus");
static_assert(offsetof(FNiagaraVMExecutableData, SimulationStageMetaData) == 240, "Offset mismatch for FNiagaraVMExecutableData::SimulationStageMetaData");
static_assert(offsetof(FNiagaraVMExecutableData, ExperimentalContextData) == 256, "Offset mismatch for FNiagaraVMExecutableData::ExperimentalContextData");
static_assert(offsetof(FNiagaraVMExecutableData, bNeedsGPUContextInit) == 272, "Offset mismatch for FNiagaraVMExecutableData::bNeedsGPUContextInit");

// /Script/Niagara.NiagaraVMExecutableDataId
// Kind: ScriptStruct; super: none
struct FNiagaraVMExecutableDataId
{
public:
    std::uint8_t CompilerVersionID[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    std::uint8_t InterpolatedSpawnMode; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0011
    std::uint8_t BaseScriptCompileHash[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraVMExecutableDataId, CompilerVersionID) == 0, "Offset mismatch for FNiagaraVMExecutableDataId::CompilerVersionID");
static_assert(offsetof(FNiagaraVMExecutableDataId, InterpolatedSpawnMode) == 16, "Offset mismatch for FNiagaraVMExecutableDataId::InterpolatedSpawnMode");
static_assert(offsetof(FNiagaraVMExecutableDataId, BaseScriptCompileHash) == 24, "Offset mismatch for FNiagaraVMExecutableDataId::BaseScriptCompileHash");

// /Script/Niagara.NiagaraVariable
// Kind: ScriptStruct; super: NiagaraVariableBase
struct FNiagaraVariable
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    TArray<void*> VarData; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FNiagaraVariable, VarData) == 8, "Offset mismatch for FNiagaraVariable::VarData");

// /Script/Niagara.NiagaraVariableAttributeBinding
// Kind: ScriptStruct; super: none
struct FNiagaraVariableAttributeBinding
{
public:
    std::uint8_t RootName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t ParamMapVariable[0x8]; // 0x0004 (Size: 0x8, Type: StructProperty)
    std::uint8_t DataSetName[0x4]; // 0x000C (Size: 0x4, Type: NameProperty)
    std::uint8_t BindingSourceMode; // 0x0010 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bBindingExistsOnSource; // 0x0011 (Size: 0x1, Type: BoolProperty)
    // 0x0011 BoolProperty bIsCachedParticleValue (shared storage)
};

static_assert(offsetof(FNiagaraVariableAttributeBinding, RootName) == 0, "Offset mismatch for FNiagaraVariableAttributeBinding::RootName");
static_assert(offsetof(FNiagaraVariableAttributeBinding, ParamMapVariable) == 4, "Offset mismatch for FNiagaraVariableAttributeBinding::ParamMapVariable");
static_assert(offsetof(FNiagaraVariableAttributeBinding, DataSetName) == 12, "Offset mismatch for FNiagaraVariableAttributeBinding::DataSetName");
static_assert(offsetof(FNiagaraVariableAttributeBinding, BindingSourceMode) == 16, "Offset mismatch for FNiagaraVariableAttributeBinding::BindingSourceMode");
static_assert(offsetof(FNiagaraVariableAttributeBinding, bBindingExistsOnSource) == 17, "Offset mismatch for FNiagaraVariableAttributeBinding::bBindingExistsOnSource");

// /Script/Niagara.NiagaraVariableBase
// Kind: ScriptStruct; super: none
struct FNiagaraVariableBase
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t TypeDefHandle[0x1]; // 0x0004 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraVariableBase, Name) == 0, "Offset mismatch for FNiagaraVariableBase::Name");
static_assert(offsetof(FNiagaraVariableBase, TypeDefHandle) == 4, "Offset mismatch for FNiagaraVariableBase::TypeDefHandle");

// /Script/Niagara.NiagaraVariableDataInterfaceBinding
// Kind: ScriptStruct; super: none
struct FNiagaraVariableDataInterfaceBinding
{
public:
    std::uint8_t BoundVariable[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraVariableDataInterfaceBinding, BoundVariable) == 0, "Offset mismatch for FNiagaraVariableDataInterfaceBinding::BoundVariable");

// /Script/Niagara.NiagaraVariableInfo
// Kind: ScriptStruct; super: none
struct FNiagaraVariableInfo
{
public:
    std::uint8_t Variable[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    std::uint8_t Definition[0x10]; // 0x0018 (Size: 0x10, Type: TextProperty)
    void* DataInterface; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FNiagaraVariableInfo, Variable) == 0, "Offset mismatch for FNiagaraVariableInfo::Variable");
static_assert(offsetof(FNiagaraVariableInfo, Definition) == 24, "Offset mismatch for FNiagaraVariableInfo::Definition");
static_assert(offsetof(FNiagaraVariableInfo, DataInterface) == 40, "Offset mismatch for FNiagaraVariableInfo::DataInterface");

// /Script/Niagara.NiagaraVariableLayoutInfo
// Kind: ScriptStruct; super: none
struct FNiagaraVariableLayoutInfo
{
public:
    std::uint16_t FloatComponentStart; // 0x0000 (Size: 0x2, Type: UInt16Property)
    std::uint16_t Int32ComponentStart; // 0x0002 (Size: 0x2, Type: UInt16Property)
    std::uint16_t HalfComponentStart; // 0x0004 (Size: 0x2, Type: UInt16Property)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    std::uint8_t LayoutInfo[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraVariableLayoutInfo, FloatComponentStart) == 0, "Offset mismatch for FNiagaraVariableLayoutInfo::FloatComponentStart");
static_assert(offsetof(FNiagaraVariableLayoutInfo, Int32ComponentStart) == 2, "Offset mismatch for FNiagaraVariableLayoutInfo::Int32ComponentStart");
static_assert(offsetof(FNiagaraVariableLayoutInfo, HalfComponentStart) == 4, "Offset mismatch for FNiagaraVariableLayoutInfo::HalfComponentStart");
static_assert(offsetof(FNiagaraVariableLayoutInfo, LayoutInfo) == 8, "Offset mismatch for FNiagaraVariableLayoutInfo::LayoutInfo");

// /Script/Niagara.NiagaraVariableMetaData
// Kind: ScriptStruct; super: none
struct FNiagaraVariableMetaData
{
public:
    std::uint8_t Description[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    std::uint8_t DisplayUnit; // 0x0010 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAdvancedDisplay; // 0x0011 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDisplayInOverviewStack; // 0x0012 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x0013
    std::int32_t InlineParameterSortPriority; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::uint8_t bOverrideColor; // 0x0018 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0019
    std::uint8_t InlineParameterColorOverride[0x14]; // 0x001C (Size: 0x14, Type: StructProperty)
    TArray<void*> InlineParameterEnumOverrides; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bEnableBoolOverride; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0041
    std::uint8_t InlineParameterBoolOverride[0x20]; // 0x0048 (Size: 0x20, Type: StructProperty)
    std::uint8_t bInlineEditConditionToggle; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0069
    std::uint8_t EditCondition[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t VisibleCondition[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    TMap<void*, void*> PropertyMetaData; // 0x00A0 (Size: 0x10, Type: MapProperty)
    TArray<void*> AlternateAliases; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t WidgetCustomization[0x58]; // 0x00C0 (Size: 0x58, Type: StructProperty)
    std::uint8_t VariableGuid[0x10]; // 0x0118 (Size: 0x10, Type: StructProperty)
    std::uint8_t bIsStaticSwitch; // 0x0128 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0129
    std::int32_t StaticSwitchDefaultValue; // 0x012C (Size: 0x4, Type: IntProperty)
    std::uint8_t CategoryName[0x10]; // 0x0130 (Size: 0x10, Type: TextProperty)
    std::uint8_t ParentAttribute[0x4]; // 0x0140 (Size: 0x4, Type: NameProperty)
    std::int32_t EditorSortPriority; // 0x0144 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FNiagaraVariableMetaData, Description) == 0, "Offset mismatch for FNiagaraVariableMetaData::Description");
static_assert(offsetof(FNiagaraVariableMetaData, DisplayUnit) == 16, "Offset mismatch for FNiagaraVariableMetaData::DisplayUnit");
static_assert(offsetof(FNiagaraVariableMetaData, bAdvancedDisplay) == 17, "Offset mismatch for FNiagaraVariableMetaData::bAdvancedDisplay");
static_assert(offsetof(FNiagaraVariableMetaData, bDisplayInOverviewStack) == 18, "Offset mismatch for FNiagaraVariableMetaData::bDisplayInOverviewStack");
static_assert(offsetof(FNiagaraVariableMetaData, InlineParameterSortPriority) == 20, "Offset mismatch for FNiagaraVariableMetaData::InlineParameterSortPriority");
static_assert(offsetof(FNiagaraVariableMetaData, bOverrideColor) == 24, "Offset mismatch for FNiagaraVariableMetaData::bOverrideColor");
static_assert(offsetof(FNiagaraVariableMetaData, InlineParameterColorOverride) == 28, "Offset mismatch for FNiagaraVariableMetaData::InlineParameterColorOverride");
static_assert(offsetof(FNiagaraVariableMetaData, InlineParameterEnumOverrides) == 48, "Offset mismatch for FNiagaraVariableMetaData::InlineParameterEnumOverrides");
static_assert(offsetof(FNiagaraVariableMetaData, bEnableBoolOverride) == 64, "Offset mismatch for FNiagaraVariableMetaData::bEnableBoolOverride");
static_assert(offsetof(FNiagaraVariableMetaData, InlineParameterBoolOverride) == 72, "Offset mismatch for FNiagaraVariableMetaData::InlineParameterBoolOverride");
static_assert(offsetof(FNiagaraVariableMetaData, bInlineEditConditionToggle) == 104, "Offset mismatch for FNiagaraVariableMetaData::bInlineEditConditionToggle");
static_assert(offsetof(FNiagaraVariableMetaData, EditCondition) == 112, "Offset mismatch for FNiagaraVariableMetaData::EditCondition");
static_assert(offsetof(FNiagaraVariableMetaData, VisibleCondition) == 136, "Offset mismatch for FNiagaraVariableMetaData::VisibleCondition");
static_assert(offsetof(FNiagaraVariableMetaData, PropertyMetaData) == 160, "Offset mismatch for FNiagaraVariableMetaData::PropertyMetaData");
static_assert(offsetof(FNiagaraVariableMetaData, AlternateAliases) == 176, "Offset mismatch for FNiagaraVariableMetaData::AlternateAliases");
static_assert(offsetof(FNiagaraVariableMetaData, WidgetCustomization) == 192, "Offset mismatch for FNiagaraVariableMetaData::WidgetCustomization");
static_assert(offsetof(FNiagaraVariableMetaData, VariableGuid) == 280, "Offset mismatch for FNiagaraVariableMetaData::VariableGuid");
static_assert(offsetof(FNiagaraVariableMetaData, bIsStaticSwitch) == 296, "Offset mismatch for FNiagaraVariableMetaData::bIsStaticSwitch");
static_assert(offsetof(FNiagaraVariableMetaData, StaticSwitchDefaultValue) == 300, "Offset mismatch for FNiagaraVariableMetaData::StaticSwitchDefaultValue");
static_assert(offsetof(FNiagaraVariableMetaData, CategoryName) == 304, "Offset mismatch for FNiagaraVariableMetaData::CategoryName");
static_assert(offsetof(FNiagaraVariableMetaData, ParentAttribute) == 320, "Offset mismatch for FNiagaraVariableMetaData::ParentAttribute");
static_assert(offsetof(FNiagaraVariableMetaData, EditorSortPriority) == 324, "Offset mismatch for FNiagaraVariableMetaData::EditorSortPriority");

// /Script/Niagara.NiagaraVariableWithOffset
// Kind: ScriptStruct; super: NiagaraVariableBase
struct FNiagaraVariableWithOffset
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::int32_t Offset; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x000C
    std::uint8_t StructConverter[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FNiagaraVariableWithOffset, Offset) == 8, "Offset mismatch for FNiagaraVariableWithOffset::Offset");
static_assert(offsetof(FNiagaraVariableWithOffset, StructConverter) == 16, "Offset mismatch for FNiagaraVariableWithOffset::StructConverter");

// /Script/Niagara.NiagaraVariant
// Kind: ScriptStruct; super: none
struct FNiagaraVariant
{
public:
    void* Object; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* DataInterface; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Bytes; // 0x0010 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CurrentMode; // 0x0020 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FNiagaraVariant, Object) == 0, "Offset mismatch for FNiagaraVariant::Object");
static_assert(offsetof(FNiagaraVariant, DataInterface) == 8, "Offset mismatch for FNiagaraVariant::DataInterface");
static_assert(offsetof(FNiagaraVariant, Bytes) == 16, "Offset mismatch for FNiagaraVariant::Bytes");
static_assert(offsetof(FNiagaraVariant, CurrentMode) == 32, "Offset mismatch for FNiagaraVariant::CurrentMode");

// /Script/Niagara.NiagaraWidgetNamedIntegerInputValue
// Kind: ScriptStruct; super: none
struct FNiagaraWidgetNamedIntegerInputValue
{
public:
    std::uint8_t DisplayName[0x10]; // 0x0000 (Size: 0x10, Type: TextProperty)
    FText ToolTip; // 0x0010 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FNiagaraWidgetNamedIntegerInputValue, DisplayName) == 0, "Offset mismatch for FNiagaraWidgetNamedIntegerInputValue::DisplayName");
static_assert(offsetof(FNiagaraWidgetNamedIntegerInputValue, ToolTip) == 16, "Offset mismatch for FNiagaraWidgetNamedIntegerInputValue::ToolTip");

// /Script/Niagara.NiagaraWildcard
// Kind: ScriptStruct; super: none
struct FNiagaraWildcard
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraWorldManagerTickFunction
// Kind: ScriptStruct; super: TickFunction
struct FNiagaraWorldManagerTickFunction
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t TickGroup; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t EndTickGroup; // 0x0009 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bAllowTickOnDedicatedServer; // 0x000A (Size: 0x1, Type: BoolProperty)
    // 0x000A BoolProperty bCanEverTick (shared storage)
    // 0x000A BoolProperty bStartWithTickEnabled (shared storage)
    // 0x000A BoolProperty bTickEvenWhenPaused (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x000B
    float TickInterval; // 0x000C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNiagaraWorldManagerTickFunction, TickGroup) == 8, "Offset mismatch for FNiagaraWorldManagerTickFunction::TickGroup");
static_assert(offsetof(FNiagaraWorldManagerTickFunction, EndTickGroup) == 9, "Offset mismatch for FNiagaraWorldManagerTickFunction::EndTickGroup");
static_assert(offsetof(FNiagaraWorldManagerTickFunction, bAllowTickOnDedicatedServer) == 10, "Offset mismatch for FNiagaraWorldManagerTickFunction::bAllowTickOnDedicatedServer");
static_assert(offsetof(FNiagaraWorldManagerTickFunction, TickInterval) == 12, "Offset mismatch for FNiagaraWorldManagerTickFunction::TickInterval");

// /Script/Niagara.ParameterDefinitionsSubscription
// Kind: ScriptStruct; super: none
struct FParameterDefinitionsSubscription
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.VMExternalFunctionBindingInfo
// Kind: ScriptStruct; super: none
struct FVMExternalFunctionBindingInfo
{
public:
    std::uint8_t Name[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    std::uint8_t OwnerName[0x4]; // 0x0004 (Size: 0x4, Type: NameProperty)
    TArray<void*> InputParamLocations; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumOutputs; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0000[0x4]; // 0x001C
    TArray<void*> FunctionSpecifiers; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VariadicInputs; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> VariadicOutputs; // 0x0040 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FVMExternalFunctionBindingInfo, Name) == 0, "Offset mismatch for FVMExternalFunctionBindingInfo::Name");
static_assert(offsetof(FVMExternalFunctionBindingInfo, OwnerName) == 4, "Offset mismatch for FVMExternalFunctionBindingInfo::OwnerName");
static_assert(offsetof(FVMExternalFunctionBindingInfo, InputParamLocations) == 8, "Offset mismatch for FVMExternalFunctionBindingInfo::InputParamLocations");
static_assert(offsetof(FVMExternalFunctionBindingInfo, NumOutputs) == 24, "Offset mismatch for FVMExternalFunctionBindingInfo::NumOutputs");
static_assert(offsetof(FVMExternalFunctionBindingInfo, FunctionSpecifiers) == 32, "Offset mismatch for FVMExternalFunctionBindingInfo::FunctionSpecifiers");
static_assert(offsetof(FVMExternalFunctionBindingInfo, VariadicInputs) == 48, "Offset mismatch for FVMExternalFunctionBindingInfo::VariadicInputs");
static_assert(offsetof(FVMExternalFunctionBindingInfo, VariadicOutputs) == 64, "Offset mismatch for FVMExternalFunctionBindingInfo::VariadicOutputs");

// /Script/Niagara.VMFunctionSpecifier
// Kind: ScriptStruct; super: none
struct FVMFunctionSpecifier
{
public:
    std::uint8_t Key[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName Value; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FVMFunctionSpecifier, Key) == 0, "Offset mismatch for FVMFunctionSpecifier::Key");
static_assert(offsetof(FVMFunctionSpecifier, Value) == 4, "Offset mismatch for FVMFunctionSpecifier::Value");

// /Script/Niagara.VersionedNiagaraEmitter
// Kind: ScriptStruct; super: none
struct FVersionedNiagaraEmitter
{
public:
    void* Emitter; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Version[0x1]; // 0x0008 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVersionedNiagaraEmitter, Emitter) == 0, "Offset mismatch for FVersionedNiagaraEmitter::Emitter");
static_assert(offsetof(FVersionedNiagaraEmitter, Version) == 8, "Offset mismatch for FVersionedNiagaraEmitter::Version");

// /Script/Niagara.VersionedNiagaraEmitterData
// Kind: ScriptStruct; super: none
struct FVersionedNiagaraEmitterData
{
public:
    std::uint8_t Version[0x1C]; // 0x0000 (Size: 0x1C, Type: StructProperty)
    std::uint8_t bDeprecated; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x001D
    std::uint8_t DeprecationMessage[0x10]; // 0x0020 (Size: 0x10, Type: TextProperty)
    std::uint8_t bLocalSpace; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDeterminism; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0032
    std::int32_t RandomSeed; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::uint8_t InterpolatedSpawnMode; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SimTarget; // 0x0039 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Importance; // 0x003A (Size: 0x1, Type: EnumProperty)
    std::uint8_t CalculateBoundsMode; // 0x003B (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x4]; // 0x003C
    std::uint8_t FixedBounds[0x38]; // 0x0040 (Size: 0x38, Type: StructProperty)
    std::uint8_t bRequiresPersistentIDs; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0079
    TArray<void*> EventHandlerScriptProps; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Platforms[0x30]; // 0x0090 (Size: 0x30, Type: StructProperty)
    std::uint8_t ScalabilityOverrides[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    std::int32_t MaxGPUParticlesSpawnPerFrame; // 0x00D0 (Size: 0x4, Type: IntProperty)
    std::uint8_t AllocationMode; // 0x00D4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x3]; // 0x00D5
    std::int32_t PreAllocationCount; // 0x00D8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0005[0x4]; // 0x00DC
    TArray<void*> EmitterDependencies; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t UpdateScriptProps[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SpawnScriptProps[0x28]; // 0x0118 (Size: 0x28, Type: StructProperty)
    std::uint8_t RendererBindings[0x88]; // 0x0140 (Size: 0x88, Type: StructProperty)
    TArray<void*> RendererBindingsExternalObjects; // 0x01C8 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ResolvedDIBindings; // 0x01D8 (Size: 0x10, Type: MapProperty)
    TArray<void*> RendererProperties; // 0x01E8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SimulationStages; // 0x01F8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SimStageExecutionLoops; // 0x0208 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0006[0x10]; // 0x0218
    void* GPUComputeScript; // 0x0228 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> SharedEventGeneratorIds; // 0x0230 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CurrentScalabilitySettings[0x1]; // 0x0240 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FVersionedNiagaraEmitterData, Version) == 0, "Offset mismatch for FVersionedNiagaraEmitterData::Version");
static_assert(offsetof(FVersionedNiagaraEmitterData, bDeprecated) == 28, "Offset mismatch for FVersionedNiagaraEmitterData::bDeprecated");
static_assert(offsetof(FVersionedNiagaraEmitterData, DeprecationMessage) == 32, "Offset mismatch for FVersionedNiagaraEmitterData::DeprecationMessage");
static_assert(offsetof(FVersionedNiagaraEmitterData, bLocalSpace) == 48, "Offset mismatch for FVersionedNiagaraEmitterData::bLocalSpace");
static_assert(offsetof(FVersionedNiagaraEmitterData, bDeterminism) == 49, "Offset mismatch for FVersionedNiagaraEmitterData::bDeterminism");
static_assert(offsetof(FVersionedNiagaraEmitterData, RandomSeed) == 52, "Offset mismatch for FVersionedNiagaraEmitterData::RandomSeed");
static_assert(offsetof(FVersionedNiagaraEmitterData, InterpolatedSpawnMode) == 56, "Offset mismatch for FVersionedNiagaraEmitterData::InterpolatedSpawnMode");
static_assert(offsetof(FVersionedNiagaraEmitterData, SimTarget) == 57, "Offset mismatch for FVersionedNiagaraEmitterData::SimTarget");
static_assert(offsetof(FVersionedNiagaraEmitterData, Importance) == 58, "Offset mismatch for FVersionedNiagaraEmitterData::Importance");
static_assert(offsetof(FVersionedNiagaraEmitterData, CalculateBoundsMode) == 59, "Offset mismatch for FVersionedNiagaraEmitterData::CalculateBoundsMode");
static_assert(offsetof(FVersionedNiagaraEmitterData, FixedBounds) == 64, "Offset mismatch for FVersionedNiagaraEmitterData::FixedBounds");
static_assert(offsetof(FVersionedNiagaraEmitterData, bRequiresPersistentIDs) == 120, "Offset mismatch for FVersionedNiagaraEmitterData::bRequiresPersistentIDs");
static_assert(offsetof(FVersionedNiagaraEmitterData, EventHandlerScriptProps) == 128, "Offset mismatch for FVersionedNiagaraEmitterData::EventHandlerScriptProps");
static_assert(offsetof(FVersionedNiagaraEmitterData, Platforms) == 144, "Offset mismatch for FVersionedNiagaraEmitterData::Platforms");
static_assert(offsetof(FVersionedNiagaraEmitterData, ScalabilityOverrides) == 192, "Offset mismatch for FVersionedNiagaraEmitterData::ScalabilityOverrides");
static_assert(offsetof(FVersionedNiagaraEmitterData, MaxGPUParticlesSpawnPerFrame) == 208, "Offset mismatch for FVersionedNiagaraEmitterData::MaxGPUParticlesSpawnPerFrame");
static_assert(offsetof(FVersionedNiagaraEmitterData, AllocationMode) == 212, "Offset mismatch for FVersionedNiagaraEmitterData::AllocationMode");
static_assert(offsetof(FVersionedNiagaraEmitterData, PreAllocationCount) == 216, "Offset mismatch for FVersionedNiagaraEmitterData::PreAllocationCount");
static_assert(offsetof(FVersionedNiagaraEmitterData, EmitterDependencies) == 224, "Offset mismatch for FVersionedNiagaraEmitterData::EmitterDependencies");
static_assert(offsetof(FVersionedNiagaraEmitterData, UpdateScriptProps) == 240, "Offset mismatch for FVersionedNiagaraEmitterData::UpdateScriptProps");
static_assert(offsetof(FVersionedNiagaraEmitterData, SpawnScriptProps) == 280, "Offset mismatch for FVersionedNiagaraEmitterData::SpawnScriptProps");
static_assert(offsetof(FVersionedNiagaraEmitterData, RendererBindings) == 320, "Offset mismatch for FVersionedNiagaraEmitterData::RendererBindings");
static_assert(offsetof(FVersionedNiagaraEmitterData, RendererBindingsExternalObjects) == 456, "Offset mismatch for FVersionedNiagaraEmitterData::RendererBindingsExternalObjects");
static_assert(offsetof(FVersionedNiagaraEmitterData, ResolvedDIBindings) == 472, "Offset mismatch for FVersionedNiagaraEmitterData::ResolvedDIBindings");
static_assert(offsetof(FVersionedNiagaraEmitterData, RendererProperties) == 488, "Offset mismatch for FVersionedNiagaraEmitterData::RendererProperties");
static_assert(offsetof(FVersionedNiagaraEmitterData, SimulationStages) == 504, "Offset mismatch for FVersionedNiagaraEmitterData::SimulationStages");
static_assert(offsetof(FVersionedNiagaraEmitterData, SimStageExecutionLoops) == 520, "Offset mismatch for FVersionedNiagaraEmitterData::SimStageExecutionLoops");
static_assert(offsetof(FVersionedNiagaraEmitterData, GPUComputeScript) == 552, "Offset mismatch for FVersionedNiagaraEmitterData::GPUComputeScript");
static_assert(offsetof(FVersionedNiagaraEmitterData, SharedEventGeneratorIds) == 560, "Offset mismatch for FVersionedNiagaraEmitterData::SharedEventGeneratorIds");
static_assert(offsetof(FVersionedNiagaraEmitterData, CurrentScalabilitySettings) == 576, "Offset mismatch for FVersionedNiagaraEmitterData::CurrentScalabilitySettings");

// /Script/Niagara.VersionedNiagaraScriptData
// Kind: ScriptStruct; super: none
struct FVersionedNiagaraScriptData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.WidgetNamedInputValue
// Kind: ScriptStruct; super: none
struct FWidgetNamedInputValue
{
public:
    float Value; // 0x0000 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0004
    std::uint8_t DisplayName[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    FText ToolTip; // 0x0018 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(FWidgetNamedInputValue, Value) == 0, "Offset mismatch for FWidgetNamedInputValue::Value");
static_assert(offsetof(FWidgetNamedInputValue, DisplayName) == 8, "Offset mismatch for FWidgetNamedInputValue::DisplayName");
static_assert(offsetof(FWidgetNamedInputValue, ToolTip) == 24, "Offset mismatch for FWidgetNamedInputValue::ToolTip");

// /Script/Niagara.WidgetSegmentValueOverride
// Kind: ScriptStruct; super: none
struct FWidgetSegmentValueOverride
{
public:
    std::int32_t EnumIndexToOverride; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::uint8_t bOverrideDisplayName; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0005
    std::uint8_t DisplayNameOverride[0x10]; // 0x0008 (Size: 0x10, Type: TextProperty)
    void* DisplayIcon; // 0x0018 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FWidgetSegmentValueOverride, EnumIndexToOverride) == 0, "Offset mismatch for FWidgetSegmentValueOverride::EnumIndexToOverride");
static_assert(offsetof(FWidgetSegmentValueOverride, bOverrideDisplayName) == 4, "Offset mismatch for FWidgetSegmentValueOverride::bOverrideDisplayName");
static_assert(offsetof(FWidgetSegmentValueOverride, DisplayNameOverride) == 8, "Offset mismatch for FWidgetSegmentValueOverride::DisplayNameOverride");
static_assert(offsetof(FWidgetSegmentValueOverride, DisplayIcon) == 24, "Offset mismatch for FWidgetSegmentValueOverride::DisplayIcon");

// /Script/Niagara.AsyncNiagaraCaptureSimCache
// Kind: Class; super: CancellableAsyncAction
class UAsyncNiagaraCaptureSimCache
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* CaptureSimCache; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* CaptureComponent; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate CaptureComplete; // 0x0040 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UAsyncNiagaraCaptureSimCache, CaptureSimCache) == 48, "Offset mismatch for UAsyncNiagaraCaptureSimCache::CaptureSimCache");
static_assert(offsetof(UAsyncNiagaraCaptureSimCache, CaptureComponent) == 56, "Offset mismatch for UAsyncNiagaraCaptureSimCache::CaptureComponent");
static_assert(offsetof(UAsyncNiagaraCaptureSimCache, CaptureComplete) == 64, "Offset mismatch for UAsyncNiagaraCaptureSimCache::CaptureComplete");

// /Script/Niagara.MovieSceneNiagaraBoolParameterTrack
// Kind: Class; super: MovieSceneNiagaraParameterTrack
class UMovieSceneNiagaraBoolParameterTrack
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t Parameter[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneNiagaraBoolParameterTrack, Parameter) == 264, "Offset mismatch for UMovieSceneNiagaraBoolParameterTrack::Parameter");

// /Script/Niagara.MovieSceneNiagaraColorParameterTrack
// Kind: Class; super: MovieSceneNiagaraParameterTrack
class UMovieSceneNiagaraColorParameterTrack
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t Parameter[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneNiagaraColorParameterTrack, Parameter) == 264, "Offset mismatch for UMovieSceneNiagaraColorParameterTrack::Parameter");

// /Script/Niagara.MovieSceneNiagaraFloatParameterTrack
// Kind: Class; super: MovieSceneNiagaraParameterTrack
class UMovieSceneNiagaraFloatParameterTrack
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t Parameter[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneNiagaraFloatParameterTrack, Parameter) == 264, "Offset mismatch for UMovieSceneNiagaraFloatParameterTrack::Parameter");

// /Script/Niagara.MovieSceneNiagaraIntegerParameterTrack
// Kind: Class; super: MovieSceneNiagaraParameterTrack
class UMovieSceneNiagaraIntegerParameterTrack
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t Parameter[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneNiagaraIntegerParameterTrack, Parameter) == 264, "Offset mismatch for UMovieSceneNiagaraIntegerParameterTrack::Parameter");

// /Script/Niagara.MovieSceneNiagaraParameterTrack
// Kind: Class; super: MovieSceneNiagaraTrack
class UMovieSceneNiagaraParameterTrack
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    std::uint8_t Parameter[0x1]; // 0x0108 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UMovieSceneNiagaraParameterTrack, Parameter) == 264, "Offset mismatch for UMovieSceneNiagaraParameterTrack::Parameter");

// /Script/Niagara.MovieSceneNiagaraSystemSpawnSection
// Kind: Class; super: MovieSceneSection
class UMovieSceneNiagaraSystemSpawnSection
{
public:
    std::uint8_t Pad_0000[0x140]; // 0x0000
    std::uint8_t SectionStartBehavior; // 0x0140 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SectionEvaluateBehavior; // 0x0141 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SectionEndBehavior; // 0x0142 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AgeUpdateMode; // 0x0143 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bAllowScalability; // 0x0144 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, SectionStartBehavior) == 320, "Offset mismatch for UMovieSceneNiagaraSystemSpawnSection::SectionStartBehavior");
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, SectionEvaluateBehavior) == 321, "Offset mismatch for UMovieSceneNiagaraSystemSpawnSection::SectionEvaluateBehavior");
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, SectionEndBehavior) == 322, "Offset mismatch for UMovieSceneNiagaraSystemSpawnSection::SectionEndBehavior");
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, AgeUpdateMode) == 323, "Offset mismatch for UMovieSceneNiagaraSystemSpawnSection::AgeUpdateMode");
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, bAllowScalability) == 324, "Offset mismatch for UMovieSceneNiagaraSystemSpawnSection::bAllowScalability");

// /Script/Niagara.MovieSceneNiagaraSystemTrack
// Kind: Class; super: MovieSceneNiagaraTrack
class UMovieSceneNiagaraSystemTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> Sections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneNiagaraSystemTrack, Sections) == 248, "Offset mismatch for UMovieSceneNiagaraSystemTrack::Sections");

// /Script/Niagara.MovieSceneNiagaraTrack
// Kind: Class; super: MovieSceneNameableTrack
class UMovieSceneNiagaraTrack
{
public:
    std::uint8_t Pad_0000[0xF8]; // 0x0000
    TArray<void*> Sections; // 0x00F8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMovieSceneNiagaraTrack, Sections) == 248, "Offset mismatch for UMovieSceneNiagaraTrack::Sections");

// /Script/Niagara.MovieSceneNiagaraVectorParameterTrack
// Kind: Class; super: MovieSceneNiagaraParameterTrack
class UMovieSceneNiagaraVectorParameterTrack
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    std::int32_t ChannelsUsed; // 0x0128 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UMovieSceneNiagaraVectorParameterTrack, ChannelsUsed) == 296, "Offset mismatch for UMovieSceneNiagaraVectorParameterTrack::ChannelsUsed");

// /Script/Niagara.NDIArraySimCacheData
// Kind: Class; super: Object
class UNDIArraySimCacheData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> CpuFrameData; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GpuFrameData; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BufferData; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNDIArraySimCacheData, CpuFrameData) == 40, "Offset mismatch for UNDIArraySimCacheData::CpuFrameData");
static_assert(offsetof(UNDIArraySimCacheData, GpuFrameData) == 56, "Offset mismatch for UNDIArraySimCacheData::GpuFrameData");
static_assert(offsetof(UNDIArraySimCacheData, BufferData) == 72, "Offset mismatch for UNDIArraySimCacheData::BufferData");

// /Script/Niagara.NDIDataChannelWriteSimCacheData
// Kind: Class; super: Object
class UNDIDataChannelWriteSimCacheData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> FrameData; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DataChannelReference[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    void* DataInterface; // 0x0050 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNDIDataChannelWriteSimCacheData, FrameData) == 40, "Offset mismatch for UNDIDataChannelWriteSimCacheData::FrameData");
static_assert(offsetof(UNDIDataChannelWriteSimCacheData, DataChannelReference) == 56, "Offset mismatch for UNDIDataChannelWriteSimCacheData::DataChannelReference");
static_assert(offsetof(UNDIDataChannelWriteSimCacheData, DataInterface) == 80, "Offset mismatch for UNDIDataChannelWriteSimCacheData::DataInterface");

// /Script/Niagara.NDILandscapeSimCacheData
// Kind: Class; super: Object
class UNDILandscapeSimCacheData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> HeightFieldTextures; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNDILandscapeSimCacheData, HeightFieldTextures) == 40, "Offset mismatch for UNDILandscapeSimCacheData::HeightFieldTextures");

// /Script/Niagara.NDIMemoryBufferSimCacheData
// Kind: Class; super: Object
class UNDIMemoryBufferSimCacheData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> FrameData; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BufferData; // 0x0038 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNDIMemoryBufferSimCacheData, FrameData) == 40, "Offset mismatch for UNDIMemoryBufferSimCacheData::FrameData");
static_assert(offsetof(UNDIMemoryBufferSimCacheData, BufferData) == 56, "Offset mismatch for UNDIMemoryBufferSimCacheData::BufferData");

// /Script/Niagara.NDIRenderTargetSimCacheData
// Kind: Class; super: Object
class UNDIRenderTargetSimCacheData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName CompressionType; // 0x0028 (Size: 0x8, Type: NameProperty)
    TArray<void*> Frames; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNDIRenderTargetSimCacheData, CompressionType) == 40, "Offset mismatch for UNDIRenderTargetSimCacheData::CompressionType");
static_assert(offsetof(UNDIRenderTargetSimCacheData, Frames) == 48, "Offset mismatch for UNDIRenderTargetSimCacheData::Frames");

// /Script/Niagara.NDISimpleCounterSimCacheData
// Kind: Class; super: Object
class UNDISimpleCounterSimCacheData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Values; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNDISimpleCounterSimCacheData, Values) == 40, "Offset mismatch for UNDISimpleCounterSimCacheData::Values");

// /Script/Niagara.NiagaraActor
// Kind: Class; super: Actor
class UNiagaraActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* NiagaraComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bDestroyOnSystemFinish; // 0x0278 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNiagaraActor, NiagaraComponent) == 624, "Offset mismatch for UNiagaraActor::NiagaraComponent");
static_assert(offsetof(UNiagaraActor, bDestroyOnSystemFinish) == 632, "Offset mismatch for UNiagaraActor::bDestroyOnSystemFinish");

// /Script/Niagara.NiagaraAssetTagDefinitions
// Kind: Class; super: Object
class UNiagaraAssetTagDefinitions
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t DisplayName[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::uint8_t Description[0x10]; // 0x0038 (Size: 0x10, Type: TextProperty)
    TArray<void*> TagDefinitions; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bDisplayTagsAsFlatList; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0059
    std::int32_t SortOrder; // 0x005C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UNiagaraAssetTagDefinitions, DisplayName) == 40, "Offset mismatch for UNiagaraAssetTagDefinitions::DisplayName");
static_assert(offsetof(UNiagaraAssetTagDefinitions, Description) == 56, "Offset mismatch for UNiagaraAssetTagDefinitions::Description");
static_assert(offsetof(UNiagaraAssetTagDefinitions, TagDefinitions) == 72, "Offset mismatch for UNiagaraAssetTagDefinitions::TagDefinitions");
static_assert(offsetof(UNiagaraAssetTagDefinitions, bDisplayTagsAsFlatList) == 88, "Offset mismatch for UNiagaraAssetTagDefinitions::bDisplayTagsAsFlatList");
static_assert(offsetof(UNiagaraAssetTagDefinitions, SortOrder) == 92, "Offset mismatch for UNiagaraAssetTagDefinitions::SortOrder");

// /Script/Niagara.NiagaraBakerOutput
// Kind: Class; super: Object
class UNiagaraBakerOutput
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString OutputName; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UNiagaraBakerOutput, OutputName) == 40, "Offset mismatch for UNiagaraBakerOutput::OutputName");

// /Script/Niagara.NiagaraBakerOutputSimCache
// Kind: Class; super: NiagaraBakerOutput
class UNiagaraBakerOutputSimCache
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FString SimCacheAssetPathFormat; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t CreateParameters[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraBakerOutputSimCache, SimCacheAssetPathFormat) == 56, "Offset mismatch for UNiagaraBakerOutputSimCache::SimCacheAssetPathFormat");
static_assert(offsetof(UNiagaraBakerOutputSimCache, CreateParameters) == 72, "Offset mismatch for UNiagaraBakerOutputSimCache::CreateParameters");

// /Script/Niagara.NiagaraBakerOutputSparseVolumeTexture
// Kind: Class; super: NiagaraBakerOutput
class UNiagaraBakerOutputSparseVolumeTexture
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SourceBinding[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t VolumeWorldSpaceSizeBinding[0x8]; // 0x0050 (Size: 0x8, Type: StructProperty)
    FString SparseVolumeTextureAssetPathFormat; // 0x0058 (Size: 0x10, Type: StrProperty)
    std::uint8_t bEnableLoopedOutput; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    FString LoopedSparseVolumeTextureAssetPathFormat; // 0x0070 (Size: 0x10, Type: StrProperty)
    float StartTime; // 0x0080 (Size: 0x4, Type: FloatProperty)
    float BlendDuration; // 0x0084 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UNiagaraBakerOutputSparseVolumeTexture, SourceBinding) == 56, "Offset mismatch for UNiagaraBakerOutputSparseVolumeTexture::SourceBinding");
static_assert(offsetof(UNiagaraBakerOutputSparseVolumeTexture, VolumeWorldSpaceSizeBinding) == 80, "Offset mismatch for UNiagaraBakerOutputSparseVolumeTexture::VolumeWorldSpaceSizeBinding");
static_assert(offsetof(UNiagaraBakerOutputSparseVolumeTexture, SparseVolumeTextureAssetPathFormat) == 88, "Offset mismatch for UNiagaraBakerOutputSparseVolumeTexture::SparseVolumeTextureAssetPathFormat");
static_assert(offsetof(UNiagaraBakerOutputSparseVolumeTexture, bEnableLoopedOutput) == 104, "Offset mismatch for UNiagaraBakerOutputSparseVolumeTexture::bEnableLoopedOutput");
static_assert(offsetof(UNiagaraBakerOutputSparseVolumeTexture, LoopedSparseVolumeTextureAssetPathFormat) == 112, "Offset mismatch for UNiagaraBakerOutputSparseVolumeTexture::LoopedSparseVolumeTextureAssetPathFormat");
static_assert(offsetof(UNiagaraBakerOutputSparseVolumeTexture, StartTime) == 128, "Offset mismatch for UNiagaraBakerOutputSparseVolumeTexture::StartTime");
static_assert(offsetof(UNiagaraBakerOutputSparseVolumeTexture, BlendDuration) == 132, "Offset mismatch for UNiagaraBakerOutputSparseVolumeTexture::BlendDuration");

// /Script/Niagara.NiagaraBakerOutputStaticMesh
// Kind: Class; super: NiagaraBakerOutput
class UNiagaraBakerOutputStaticMesh
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    FString FramesAssetPathFormat; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t ExportParameters[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraBakerOutputStaticMesh, FramesAssetPathFormat) == 56, "Offset mismatch for UNiagaraBakerOutputStaticMesh::FramesAssetPathFormat");
static_assert(offsetof(UNiagaraBakerOutputStaticMesh, ExportParameters) == 72, "Offset mismatch for UNiagaraBakerOutputStaticMesh::ExportParameters");

// /Script/Niagara.NiagaraBakerOutputTexture2D
// Kind: Class; super: NiagaraBakerOutput
class UNiagaraBakerOutputTexture2D
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SourceBinding[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t bExportFrames; // 0x0050 (Size: 0x1, Type: BoolProperty)
    // 0x0050 BoolProperty bGenerateAtlas (shared storage)
    // 0x0050 BoolProperty bGenerateFrames (shared storage)
    // 0x0050 BoolProperty bSetTextureAddressX (shared storage)
    // 0x0050 BoolProperty bSetTextureAddressY (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0051
    std::uint8_t FrameSize[0x8]; // 0x0054 (Size: 0x8, Type: StructProperty)
    std::uint8_t AtlasTextureSize[0x10]; // 0x005C (Size: 0x10, Type: StructProperty)
    std::uint8_t TextureAddressX; // 0x006C (Size: 0x1, Type: ByteProperty)
    std::uint8_t TextureAddressY; // 0x006D (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x2]; // 0x006E
    FString AtlasAssetPathFormat; // 0x0070 (Size: 0x10, Type: StrProperty)
    FString FramesAssetPathFormat; // 0x0080 (Size: 0x10, Type: StrProperty)
    FString FramesExportPathFormat; // 0x0090 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UNiagaraBakerOutputTexture2D, SourceBinding) == 56, "Offset mismatch for UNiagaraBakerOutputTexture2D::SourceBinding");
static_assert(offsetof(UNiagaraBakerOutputTexture2D, bExportFrames) == 80, "Offset mismatch for UNiagaraBakerOutputTexture2D::bExportFrames");
static_assert(offsetof(UNiagaraBakerOutputTexture2D, FrameSize) == 84, "Offset mismatch for UNiagaraBakerOutputTexture2D::FrameSize");
static_assert(offsetof(UNiagaraBakerOutputTexture2D, AtlasTextureSize) == 92, "Offset mismatch for UNiagaraBakerOutputTexture2D::AtlasTextureSize");
static_assert(offsetof(UNiagaraBakerOutputTexture2D, TextureAddressX) == 108, "Offset mismatch for UNiagaraBakerOutputTexture2D::TextureAddressX");
static_assert(offsetof(UNiagaraBakerOutputTexture2D, TextureAddressY) == 109, "Offset mismatch for UNiagaraBakerOutputTexture2D::TextureAddressY");
static_assert(offsetof(UNiagaraBakerOutputTexture2D, AtlasAssetPathFormat) == 112, "Offset mismatch for UNiagaraBakerOutputTexture2D::AtlasAssetPathFormat");
static_assert(offsetof(UNiagaraBakerOutputTexture2D, FramesAssetPathFormat) == 128, "Offset mismatch for UNiagaraBakerOutputTexture2D::FramesAssetPathFormat");
static_assert(offsetof(UNiagaraBakerOutputTexture2D, FramesExportPathFormat) == 144, "Offset mismatch for UNiagaraBakerOutputTexture2D::FramesExportPathFormat");

// /Script/Niagara.NiagaraBakerOutputVolumeTexture
// Kind: Class; super: NiagaraBakerOutput
class UNiagaraBakerOutputVolumeTexture
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SourceBinding[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t bExportFrames; // 0x0050 (Size: 0x1, Type: BoolProperty)
    // 0x0050 BoolProperty bGenerateAtlas (shared storage)
    // 0x0050 BoolProperty bGenerateFrames (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0051
    FString AtlasAssetPathFormat; // 0x0058 (Size: 0x10, Type: StrProperty)
    FString FramesAssetPathFormat; // 0x0068 (Size: 0x10, Type: StrProperty)
    FString FramesExportPathFormat; // 0x0078 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UNiagaraBakerOutputVolumeTexture, SourceBinding) == 56, "Offset mismatch for UNiagaraBakerOutputVolumeTexture::SourceBinding");
static_assert(offsetof(UNiagaraBakerOutputVolumeTexture, bExportFrames) == 80, "Offset mismatch for UNiagaraBakerOutputVolumeTexture::bExportFrames");
static_assert(offsetof(UNiagaraBakerOutputVolumeTexture, AtlasAssetPathFormat) == 88, "Offset mismatch for UNiagaraBakerOutputVolumeTexture::AtlasAssetPathFormat");
static_assert(offsetof(UNiagaraBakerOutputVolumeTexture, FramesAssetPathFormat) == 104, "Offset mismatch for UNiagaraBakerOutputVolumeTexture::FramesAssetPathFormat");
static_assert(offsetof(UNiagaraBakerOutputVolumeTexture, FramesExportPathFormat) == 120, "Offset mismatch for UNiagaraBakerOutputVolumeTexture::FramesExportPathFormat");

// /Script/Niagara.NiagaraBakerSettings
// Kind: Class; super: Object
class UNiagaraBakerSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float StartSeconds; // 0x0028 (Size: 0x4, Type: FloatProperty)
    float DurationSeconds; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::int32_t framesPerSecond; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t bLockToSimulationFrameRate; // 0x0034 (Size: 0x1, Type: BoolProperty)
    // 0x0034 BoolProperty bPreviewLooping (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    std::uint8_t FramesPerDimension[0x8]; // 0x0038 (Size: 0x8, Type: StructProperty)
    TArray<void*> Outputs; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CameraSettings; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::int32_t CurrentCameraIndex; // 0x0060 (Size: 0x4, Type: IntProperty)
    std::uint8_t BakeQualityLevel[0x4]; // 0x0064 (Size: 0x4, Type: NameProperty)
    std::uint8_t bPreviewLoopedOutput; // 0x0068 (Size: 0x1, Type: BoolProperty)
    // 0x0068 BoolProperty bRenderComponentOnly (shared storage)
    std::uint8_t Pad_0002[0x7]; // 0x0069
    TArray<void*> OutputTextures; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t CameraViewportMode; // 0x0080 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0081
    std::uint8_t CameraViewportLocation[0xA8]; // 0x0088 (Size: 0xA8, Type: StructProperty)
    std::uint8_t CameraViewportRotation[0xA8]; // 0x0130 (Size: 0xA8, Type: StructProperty)
    float CameraOrbitDistance; // 0x01D8 (Size: 0x4, Type: FloatProperty)
    float CameraFOV; // 0x01DC (Size: 0x4, Type: FloatProperty)
    float CameraOrthoWidth; // 0x01E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bUseCameraAspectRatio; // 0x01E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x01E5
    float CameraAspectRatio; // 0x01E8 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UNiagaraBakerSettings, StartSeconds) == 40, "Offset mismatch for UNiagaraBakerSettings::StartSeconds");
static_assert(offsetof(UNiagaraBakerSettings, DurationSeconds) == 44, "Offset mismatch for UNiagaraBakerSettings::DurationSeconds");
static_assert(offsetof(UNiagaraBakerSettings, framesPerSecond) == 48, "Offset mismatch for UNiagaraBakerSettings::framesPerSecond");
static_assert(offsetof(UNiagaraBakerSettings, bLockToSimulationFrameRate) == 52, "Offset mismatch for UNiagaraBakerSettings::bLockToSimulationFrameRate");
static_assert(offsetof(UNiagaraBakerSettings, FramesPerDimension) == 56, "Offset mismatch for UNiagaraBakerSettings::FramesPerDimension");
static_assert(offsetof(UNiagaraBakerSettings, Outputs) == 64, "Offset mismatch for UNiagaraBakerSettings::Outputs");
static_assert(offsetof(UNiagaraBakerSettings, CameraSettings) == 80, "Offset mismatch for UNiagaraBakerSettings::CameraSettings");
static_assert(offsetof(UNiagaraBakerSettings, CurrentCameraIndex) == 96, "Offset mismatch for UNiagaraBakerSettings::CurrentCameraIndex");
static_assert(offsetof(UNiagaraBakerSettings, BakeQualityLevel) == 100, "Offset mismatch for UNiagaraBakerSettings::BakeQualityLevel");
static_assert(offsetof(UNiagaraBakerSettings, bPreviewLoopedOutput) == 104, "Offset mismatch for UNiagaraBakerSettings::bPreviewLoopedOutput");
static_assert(offsetof(UNiagaraBakerSettings, OutputTextures) == 112, "Offset mismatch for UNiagaraBakerSettings::OutputTextures");
static_assert(offsetof(UNiagaraBakerSettings, CameraViewportMode) == 128, "Offset mismatch for UNiagaraBakerSettings::CameraViewportMode");
static_assert(offsetof(UNiagaraBakerSettings, CameraViewportLocation) == 136, "Offset mismatch for UNiagaraBakerSettings::CameraViewportLocation");
static_assert(offsetof(UNiagaraBakerSettings, CameraViewportRotation) == 304, "Offset mismatch for UNiagaraBakerSettings::CameraViewportRotation");
static_assert(offsetof(UNiagaraBakerSettings, CameraOrbitDistance) == 472, "Offset mismatch for UNiagaraBakerSettings::CameraOrbitDistance");
static_assert(offsetof(UNiagaraBakerSettings, CameraFOV) == 476, "Offset mismatch for UNiagaraBakerSettings::CameraFOV");
static_assert(offsetof(UNiagaraBakerSettings, CameraOrthoWidth) == 480, "Offset mismatch for UNiagaraBakerSettings::CameraOrthoWidth");
static_assert(offsetof(UNiagaraBakerSettings, bUseCameraAspectRatio) == 484, "Offset mismatch for UNiagaraBakerSettings::bUseCameraAspectRatio");
static_assert(offsetof(UNiagaraBakerSettings, CameraAspectRatio) == 488, "Offset mismatch for UNiagaraBakerSettings::CameraAspectRatio");

// /Script/Niagara.NiagaraBaselineController
// Kind: Class; super: Object
class UNiagaraBaselineController
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float TestDuration; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    void* EffectType; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* Owner; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TSoftObjectPtr<void> System; // 0x0040 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UNiagaraBaselineController, TestDuration) == 40, "Offset mismatch for UNiagaraBaselineController::TestDuration");
static_assert(offsetof(UNiagaraBaselineController, EffectType) == 48, "Offset mismatch for UNiagaraBaselineController::EffectType");
static_assert(offsetof(UNiagaraBaselineController, Owner) == 56, "Offset mismatch for UNiagaraBaselineController::Owner");
static_assert(offsetof(UNiagaraBaselineController, System) == 64, "Offset mismatch for UNiagaraBaselineController::System");

// /Script/Niagara.NiagaraBaselineController_Basic
// Kind: Class; super: NiagaraBaselineController
class UNiagaraBaselineController_Basic
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::int32_t NumInstances; // 0x0060 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0064
    TArray<void*> SpawnedComponents; // 0x0068 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraBaselineController_Basic, NumInstances) == 96, "Offset mismatch for UNiagaraBaselineController_Basic::NumInstances");
static_assert(offsetof(UNiagaraBaselineController_Basic, SpawnedComponents) == 104, "Offset mismatch for UNiagaraBaselineController_Basic::SpawnedComponents");

// /Script/Niagara.NiagaraComponent
// Kind: Class; super: FXSystemComponent
class UNiagaraComponent
{
public:
    std::uint8_t Pad_0000[0x580]; // 0x0000
    void* Asset; // 0x0580 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TickBehavior; // 0x0588 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0589
    std::int32_t RandomSeedOffset; // 0x058C (Size: 0x4, Type: IntProperty)
    std::uint8_t OverrideParameters[0x98]; // 0x0590 (Size: 0x98, Type: StructProperty)
    std::uint8_t bEnableGpuComputeDebug; // 0x0628 (Size: 0x1, Type: BoolProperty)
    // 0x0628 BoolProperty bOverrideWarmupSettings (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0629
    std::int32_t WarmupTickCount; // 0x062C (Size: 0x4, Type: IntProperty)
    float WarmupTickDelta; // 0x0630 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x34]; // 0x0634
    std::uint8_t bAutoAttachWeldSimulatedBodies; // 0x0668 (Size: 0x1, Type: BoolProperty)
    // 0x0668 BoolProperty bAutoDestroy (shared storage)
    // 0x0668 BoolProperty bAutoManageAttachment (shared storage)
    // 0x0668 BoolProperty bRenderingEnabled (shared storage)
    std::uint8_t Pad_0004[0x3]; // 0x0669
    float MaxTimeBeforeForceUpdateTransform; // 0x066C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0005[0x1]; // 0x0670
    std::uint8_t OcclusionQueryMode; // 0x0671 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x6]; // 0x0672
    FMulticastInlineDelegate OnSystemFinished; // 0x0678 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    TWeakObjectPtr<void> AutoAttachParent; // 0x0688 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t AutoAttachSocketName[0x4]; // 0x0690 (Size: 0x4, Type: NameProperty)
    std::uint8_t AutoAttachLocationRule; // 0x0694 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoAttachRotationRule; // 0x0695 (Size: 0x1, Type: EnumProperty)
    std::uint8_t AutoAttachScaleRule; // 0x0696 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0007[0x9]; // 0x0697
    std::uint8_t bAllowScalability; // 0x06A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0008[0x11F]; // 0x06A1
    void* SimCache; // 0x07C0 (Size: 0x8, Type: ObjectProperty)
    void* CullProxy; // 0x07C8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ParameterCollectionOverrides; // 0x07D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraComponent, Asset) == 1408, "Offset mismatch for UNiagaraComponent::Asset");
static_assert(offsetof(UNiagaraComponent, TickBehavior) == 1416, "Offset mismatch for UNiagaraComponent::TickBehavior");
static_assert(offsetof(UNiagaraComponent, RandomSeedOffset) == 1420, "Offset mismatch for UNiagaraComponent::RandomSeedOffset");
static_assert(offsetof(UNiagaraComponent, OverrideParameters) == 1424, "Offset mismatch for UNiagaraComponent::OverrideParameters");
static_assert(offsetof(UNiagaraComponent, bEnableGpuComputeDebug) == 1576, "Offset mismatch for UNiagaraComponent::bEnableGpuComputeDebug");
static_assert(offsetof(UNiagaraComponent, WarmupTickCount) == 1580, "Offset mismatch for UNiagaraComponent::WarmupTickCount");
static_assert(offsetof(UNiagaraComponent, WarmupTickDelta) == 1584, "Offset mismatch for UNiagaraComponent::WarmupTickDelta");
static_assert(offsetof(UNiagaraComponent, bAutoAttachWeldSimulatedBodies) == 1640, "Offset mismatch for UNiagaraComponent::bAutoAttachWeldSimulatedBodies");
static_assert(offsetof(UNiagaraComponent, MaxTimeBeforeForceUpdateTransform) == 1644, "Offset mismatch for UNiagaraComponent::MaxTimeBeforeForceUpdateTransform");
static_assert(offsetof(UNiagaraComponent, OcclusionQueryMode) == 1649, "Offset mismatch for UNiagaraComponent::OcclusionQueryMode");
static_assert(offsetof(UNiagaraComponent, OnSystemFinished) == 1656, "Offset mismatch for UNiagaraComponent::OnSystemFinished");
static_assert(offsetof(UNiagaraComponent, AutoAttachParent) == 1672, "Offset mismatch for UNiagaraComponent::AutoAttachParent");
static_assert(offsetof(UNiagaraComponent, AutoAttachSocketName) == 1680, "Offset mismatch for UNiagaraComponent::AutoAttachSocketName");
static_assert(offsetof(UNiagaraComponent, AutoAttachLocationRule) == 1684, "Offset mismatch for UNiagaraComponent::AutoAttachLocationRule");
static_assert(offsetof(UNiagaraComponent, AutoAttachRotationRule) == 1685, "Offset mismatch for UNiagaraComponent::AutoAttachRotationRule");
static_assert(offsetof(UNiagaraComponent, AutoAttachScaleRule) == 1686, "Offset mismatch for UNiagaraComponent::AutoAttachScaleRule");
static_assert(offsetof(UNiagaraComponent, bAllowScalability) == 1696, "Offset mismatch for UNiagaraComponent::bAllowScalability");
static_assert(offsetof(UNiagaraComponent, SimCache) == 1984, "Offset mismatch for UNiagaraComponent::SimCache");
static_assert(offsetof(UNiagaraComponent, CullProxy) == 1992, "Offset mismatch for UNiagaraComponent::CullProxy");
static_assert(offsetof(UNiagaraComponent, ParameterCollectionOverrides) == 2000, "Offset mismatch for UNiagaraComponent::ParameterCollectionOverrides");

// /Script/Niagara.NiagaraComponentPool
// Kind: Class; super: Object
class UNiagaraComponentPool
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraComponentRendererProperties
// Kind: Class; super: NiagaraRendererProperties
class UNiagaraComponentRendererProperties
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    void* ComponentType; // 0x0098 (Size: 0x8, Type: ClassProperty)
    std::uint32_t ComponentCountLimit; // 0x00A0 (Size: 0x4, Type: UInt32Property)
    std::uint8_t EnabledBinding[0x14]; // 0x00A4 (Size: 0x14, Type: StructProperty)
    std::uint8_t RendererVisibilityTagBinding[0x14]; // 0x00B8 (Size: 0x14, Type: StructProperty)
    std::uint8_t bAssignComponentsOnParticleID; // 0x00CC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCreateComponentFirstParticleFrame; // 0x00CD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyActivateNewlyAquiredComponents; // 0x00CE (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInheritOwnerVisibility; // 0x00CF (Size: 0x1, Type: BoolProperty)
    std::int32_t RendererVisibility; // 0x00D0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00D4
    void* TemplateComponent; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> PropertyBindings; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraComponentRendererProperties, ComponentType) == 152, "Offset mismatch for UNiagaraComponentRendererProperties::ComponentType");
static_assert(offsetof(UNiagaraComponentRendererProperties, ComponentCountLimit) == 160, "Offset mismatch for UNiagaraComponentRendererProperties::ComponentCountLimit");
static_assert(offsetof(UNiagaraComponentRendererProperties, EnabledBinding) == 164, "Offset mismatch for UNiagaraComponentRendererProperties::EnabledBinding");
static_assert(offsetof(UNiagaraComponentRendererProperties, RendererVisibilityTagBinding) == 184, "Offset mismatch for UNiagaraComponentRendererProperties::RendererVisibilityTagBinding");
static_assert(offsetof(UNiagaraComponentRendererProperties, bAssignComponentsOnParticleID) == 204, "Offset mismatch for UNiagaraComponentRendererProperties::bAssignComponentsOnParticleID");
static_assert(offsetof(UNiagaraComponentRendererProperties, bCreateComponentFirstParticleFrame) == 205, "Offset mismatch for UNiagaraComponentRendererProperties::bCreateComponentFirstParticleFrame");
static_assert(offsetof(UNiagaraComponentRendererProperties, bOnlyActivateNewlyAquiredComponents) == 206, "Offset mismatch for UNiagaraComponentRendererProperties::bOnlyActivateNewlyAquiredComponents");
static_assert(offsetof(UNiagaraComponentRendererProperties, bInheritOwnerVisibility) == 207, "Offset mismatch for UNiagaraComponentRendererProperties::bInheritOwnerVisibility");
static_assert(offsetof(UNiagaraComponentRendererProperties, RendererVisibility) == 208, "Offset mismatch for UNiagaraComponentRendererProperties::RendererVisibility");
static_assert(offsetof(UNiagaraComponentRendererProperties, TemplateComponent) == 216, "Offset mismatch for UNiagaraComponentRendererProperties::TemplateComponent");
static_assert(offsetof(UNiagaraComponentRendererProperties, PropertyBindings) == 224, "Offset mismatch for UNiagaraComponentRendererProperties::PropertyBindings");

// /Script/Niagara.NiagaraConvertInPlaceUtilityBase
// Kind: Class; super: Object
class UNiagaraConvertInPlaceUtilityBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraCullProxyComponent
// Kind: Class; super: NiagaraComponent
class UNiagaraCullProxyComponent
{
public:
    std::uint8_t Pad_0000[0x7E0]; // 0x0000
    TArray<void*> Instances; // 0x07E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraCullProxyComponent, Instances) == 2016, "Offset mismatch for UNiagaraCullProxyComponent::Instances");

// /Script/Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UNiagaraDIRigidMeshCollisionFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraDataChannel
// Kind: Class; super: Object
class UNiagaraDataChannel
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ChannelVariables; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bKeepPreviousFrameData; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnforceTickGroupReadWriteOrder; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t FinalWriteTickGroup; // 0x003A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UNiagaraDataChannel, ChannelVariables) == 40, "Offset mismatch for UNiagaraDataChannel::ChannelVariables");
static_assert(offsetof(UNiagaraDataChannel, bKeepPreviousFrameData) == 56, "Offset mismatch for UNiagaraDataChannel::bKeepPreviousFrameData");
static_assert(offsetof(UNiagaraDataChannel, bEnforceTickGroupReadWriteOrder) == 57, "Offset mismatch for UNiagaraDataChannel::bEnforceTickGroupReadWriteOrder");
static_assert(offsetof(UNiagaraDataChannel, FinalWriteTickGroup) == 58, "Offset mismatch for UNiagaraDataChannel::FinalWriteTickGroup");

// /Script/Niagara.NiagaraDataChannelAsset
// Kind: Class; super: Object
class UNiagaraDataChannelAsset
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* DataChannel; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNiagaraDataChannelAsset, DataChannel) == 40, "Offset mismatch for UNiagaraDataChannelAsset::DataChannel");

// /Script/Niagara.NiagaraDataChannelHandler
// Kind: Class; super: Object
class UNiagaraDataChannelHandler
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TWeakObjectPtr<void> DataChannel; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    void* Writer; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* Reader; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNiagaraDataChannelHandler, DataChannel) == 48, "Offset mismatch for UNiagaraDataChannelHandler::DataChannel");
static_assert(offsetof(UNiagaraDataChannelHandler, Writer) == 56, "Offset mismatch for UNiagaraDataChannelHandler::Writer");
static_assert(offsetof(UNiagaraDataChannelHandler, Reader) == 64, "Offset mismatch for UNiagaraDataChannelHandler::Reader");

// /Script/Niagara.NiagaraDataChannelHandler_GameplayBurst
// Kind: Class; super: NiagaraDataChannelHandler_MapBase
class UNiagaraDataChannelHandler_GameplayBurst
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    std::uint8_t AttachmentSettings[0x1]; // 0x0100 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataChannelHandler_GameplayBurst, AttachmentSettings) == 256, "Offset mismatch for UNiagaraDataChannelHandler_GameplayBurst::AttachmentSettings");

// /Script/Niagara.NiagaraDataChannelHandler_Global
// Kind: Class; super: NiagaraDataChannelHandler
class UNiagaraDataChannelHandler_Global
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TWeakObjectPtr<void> DataChannel; // 0x0030 (Size: 0x8, Type: WeakObjectProperty)
    void* Writer; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* Reader; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNiagaraDataChannelHandler_Global, DataChannel) == 48, "Offset mismatch for UNiagaraDataChannelHandler_Global::DataChannel");
static_assert(offsetof(UNiagaraDataChannelHandler_Global, Writer) == 56, "Offset mismatch for UNiagaraDataChannelHandler_Global::Writer");
static_assert(offsetof(UNiagaraDataChannelHandler_Global, Reader) == 64, "Offset mismatch for UNiagaraDataChannelHandler_Global::Reader");

// /Script/Niagara.NiagaraDataChannelHandler_Islands
// Kind: Class; super: NiagaraDataChannelHandler
class UNiagaraDataChannelHandler_Islands
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    TArray<void*> ActiveIslands; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FreeIslands; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> IslandPool; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraDataChannelHandler_Islands, ActiveIslands) == 168, "Offset mismatch for UNiagaraDataChannelHandler_Islands::ActiveIslands");
static_assert(offsetof(UNiagaraDataChannelHandler_Islands, FreeIslands) == 184, "Offset mismatch for UNiagaraDataChannelHandler_Islands::FreeIslands");
static_assert(offsetof(UNiagaraDataChannelHandler_Islands, IslandPool) == 200, "Offset mismatch for UNiagaraDataChannelHandler_Islands::IslandPool");

// /Script/Niagara.NiagaraDataChannelHandler_MapBase
// Kind: Class; super: NiagaraDataChannelHandler
class UNiagaraDataChannelHandler_MapBase
{
public:
    std::uint8_t Pad_0000[0xB8]; // 0x0000
    TArray<void*> EntryPool; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x20]; // 0x00C8
    TMap<void*, void*> SpawnedComponentsToActiveEntry; // 0x00E8 (Size: 0x10, Type: MapProperty)
    void* DefaultSystemToSpawn; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNiagaraDataChannelHandler_MapBase, EntryPool) == 184, "Offset mismatch for UNiagaraDataChannelHandler_MapBase::EntryPool");
static_assert(offsetof(UNiagaraDataChannelHandler_MapBase, SpawnedComponentsToActiveEntry) == 232, "Offset mismatch for UNiagaraDataChannelHandler_MapBase::SpawnedComponentsToActiveEntry");
static_assert(offsetof(UNiagaraDataChannelHandler_MapBase, DefaultSystemToSpawn) == 248, "Offset mismatch for UNiagaraDataChannelHandler_MapBase::DefaultSystemToSpawn");

// /Script/Niagara.NiagaraDataChannelLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UNiagaraDataChannelLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraDataChannelReader
// Kind: Class; super: Object
class UNiagaraDataChannelReader
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* Owner; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNiagaraDataChannelReader, Owner) == 64, "Offset mismatch for UNiagaraDataChannelReader::Owner");

// /Script/Niagara.NiagaraDataChannelWriter
// Kind: Class; super: Object
class UNiagaraDataChannelWriter
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* Owner; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNiagaraDataChannelWriter, Owner) == 64, "Offset mismatch for UNiagaraDataChannelWriter::Owner");

// /Script/Niagara.NiagaraDataChannel_GameplayBurst
// Kind: Class; super: NiagaraDataChannel_MapBase
class UNiagaraDataChannel_GameplayBurst
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t CellSize[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t SystemBoundsPadding[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t AttachmentSettings[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataChannel_GameplayBurst, CellSize) == 112, "Offset mismatch for UNiagaraDataChannel_GameplayBurst::CellSize");
static_assert(offsetof(UNiagaraDataChannel_GameplayBurst, SystemBoundsPadding) == 136, "Offset mismatch for UNiagaraDataChannel_GameplayBurst::SystemBoundsPadding");
static_assert(offsetof(UNiagaraDataChannel_GameplayBurst, AttachmentSettings) == 160, "Offset mismatch for UNiagaraDataChannel_GameplayBurst::AttachmentSettings");

// /Script/Niagara.NiagaraDataChannel_Global
// Kind: Class; super: NiagaraDataChannel
class UNiagaraDataChannel_Global
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ChannelVariables; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bKeepPreviousFrameData; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnforceTickGroupReadWriteOrder; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t FinalWriteTickGroup; // 0x003A (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UNiagaraDataChannel_Global, ChannelVariables) == 40, "Offset mismatch for UNiagaraDataChannel_Global::ChannelVariables");
static_assert(offsetof(UNiagaraDataChannel_Global, bKeepPreviousFrameData) == 56, "Offset mismatch for UNiagaraDataChannel_Global::bKeepPreviousFrameData");
static_assert(offsetof(UNiagaraDataChannel_Global, bEnforceTickGroupReadWriteOrder) == 57, "Offset mismatch for UNiagaraDataChannel_Global::bEnforceTickGroupReadWriteOrder");
static_assert(offsetof(UNiagaraDataChannel_Global, FinalWriteTickGroup) == 58, "Offset mismatch for UNiagaraDataChannel_Global::FinalWriteTickGroup");

// /Script/Niagara.NiagaraDataChannel_Islands
// Kind: Class; super: NiagaraDataChannel
class UNiagaraDataChannel_Islands
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Mode; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0069
    std::uint8_t InitialExtents[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaxExtents[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t PerElementExtents[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    TArray<void*> Systems; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    std::int32_t IslandPoolSize; // 0x00C8 (Size: 0x4, Type: IntProperty)
    std::uint8_t DebugDrawSettings[0x4]; // 0x00CC (Size: 0x4, Type: StructProperty)
    TArray<void*> SystemsInternal; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraDataChannel_Islands, Mode) == 104, "Offset mismatch for UNiagaraDataChannel_Islands::Mode");
static_assert(offsetof(UNiagaraDataChannel_Islands, InitialExtents) == 112, "Offset mismatch for UNiagaraDataChannel_Islands::InitialExtents");
static_assert(offsetof(UNiagaraDataChannel_Islands, MaxExtents) == 136, "Offset mismatch for UNiagaraDataChannel_Islands::MaxExtents");
static_assert(offsetof(UNiagaraDataChannel_Islands, PerElementExtents) == 160, "Offset mismatch for UNiagaraDataChannel_Islands::PerElementExtents");
static_assert(offsetof(UNiagaraDataChannel_Islands, Systems) == 184, "Offset mismatch for UNiagaraDataChannel_Islands::Systems");
static_assert(offsetof(UNiagaraDataChannel_Islands, IslandPoolSize) == 200, "Offset mismatch for UNiagaraDataChannel_Islands::IslandPoolSize");
static_assert(offsetof(UNiagaraDataChannel_Islands, DebugDrawSettings) == 204, "Offset mismatch for UNiagaraDataChannel_Islands::DebugDrawSettings");
static_assert(offsetof(UNiagaraDataChannel_Islands, SystemsInternal) == 208, "Offset mismatch for UNiagaraDataChannel_Islands::SystemsInternal");

// /Script/Niagara.NiagaraDataChannel_MapBase
// Kind: Class; super: NiagaraDataChannel
class UNiagaraDataChannel_MapBase
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    void* DefaultSystemToSpawn; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNiagaraDataChannel_MapBase, DefaultSystemToSpawn) == 104, "Offset mismatch for UNiagaraDataChannel_MapBase::DefaultSystemToSpawn");

// /Script/Niagara.NiagaraDataInterface
// Kind: Class; super: NiagaraDataInterfaceBase
class UNiagaraDataInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraDataInterface2DArrayTexture
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterface2DArrayTexture
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Texture; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TextureUserParameter[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterface2DArrayTexture, Texture) == 56, "Offset mismatch for UNiagaraDataInterface2DArrayTexture::Texture");
static_assert(offsetof(UNiagaraDataInterface2DArrayTexture, TextureUserParameter) == 64, "Offset mismatch for UNiagaraDataInterface2DArrayTexture::TextureUserParameter");

// /Script/Niagara.NiagaraDataInterfaceActorComponent
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceActorComponent
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SourceMode; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::int32_t LocalPlayerIndex; // 0x003C (Size: 0x4, Type: IntProperty)
    std::uint8_t SourceActor[0x18]; // 0x0040 (Size: 0x18, Type: LazyObjectProperty)
    std::uint8_t ActorOrComponentParameter[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t bRequireCurrentFrameData; // 0x0070 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceActorComponent, SourceMode) == 56, "Offset mismatch for UNiagaraDataInterfaceActorComponent::SourceMode");
static_assert(offsetof(UNiagaraDataInterfaceActorComponent, LocalPlayerIndex) == 60, "Offset mismatch for UNiagaraDataInterfaceActorComponent::LocalPlayerIndex");
static_assert(offsetof(UNiagaraDataInterfaceActorComponent, SourceActor) == 64, "Offset mismatch for UNiagaraDataInterfaceActorComponent::SourceActor");
static_assert(offsetof(UNiagaraDataInterfaceActorComponent, ActorOrComponentParameter) == 88, "Offset mismatch for UNiagaraDataInterfaceActorComponent::ActorOrComponentParameter");
static_assert(offsetof(UNiagaraDataInterfaceActorComponent, bRequireCurrentFrameData) == 112, "Offset mismatch for UNiagaraDataInterfaceActorComponent::bRequireCurrentFrameData");

// /Script/Niagara.NiagaraDataInterfaceArray
// Kind: Class; super: NiagaraDataInterfaceRWBase
class UNiagaraDataInterfaceArray
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t GpuSyncMode; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0049
    std::int32_t MaxElements; // 0x004C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceArray, GpuSyncMode) == 72, "Offset mismatch for UNiagaraDataInterfaceArray::GpuSyncMode");
static_assert(offsetof(UNiagaraDataInterfaceArray, MaxElements) == 76, "Offset mismatch for UNiagaraDataInterfaceArray::MaxElements");

// /Script/Niagara.NiagaraDataInterfaceArrayBool
// Kind: Class; super: NiagaraDataInterfaceArray
class UNiagaraDataInterfaceArrayBool
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> BoolData; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceArrayBool, BoolData) == 80, "Offset mismatch for UNiagaraDataInterfaceArrayBool::BoolData");

// /Script/Niagara.NiagaraDataInterfaceArrayColor
// Kind: Class; super: NiagaraDataInterfaceArray
class UNiagaraDataInterfaceArrayColor
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> ColorData; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceArrayColor, ColorData) == 80, "Offset mismatch for UNiagaraDataInterfaceArrayColor::ColorData");

// /Script/Niagara.NiagaraDataInterfaceArrayDistributionInt
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceArrayDistributionInt
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    TArray<void*> ArrayData; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> BuiltTableData; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceArrayDistributionInt, ArrayData) == 64, "Offset mismatch for UNiagaraDataInterfaceArrayDistributionInt::ArrayData");
static_assert(offsetof(UNiagaraDataInterfaceArrayDistributionInt, BuiltTableData) == 80, "Offset mismatch for UNiagaraDataInterfaceArrayDistributionInt::BuiltTableData");

// /Script/Niagara.NiagaraDataInterfaceArrayFloat
// Kind: Class; super: NiagaraDataInterfaceArray
class UNiagaraDataInterfaceArrayFloat
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> FloatData; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceArrayFloat, FloatData) == 80, "Offset mismatch for UNiagaraDataInterfaceArrayFloat::FloatData");

// /Script/Niagara.NiagaraDataInterfaceArrayFloat2
// Kind: Class; super: NiagaraDataInterfaceArray
class UNiagaraDataInterfaceArrayFloat2
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> InternalFloatData; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceArrayFloat2, InternalFloatData) == 80, "Offset mismatch for UNiagaraDataInterfaceArrayFloat2::InternalFloatData");

// /Script/Niagara.NiagaraDataInterfaceArrayFloat3
// Kind: Class; super: NiagaraDataInterfaceArray
class UNiagaraDataInterfaceArrayFloat3
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> InternalFloatData; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceArrayFloat3, InternalFloatData) == 80, "Offset mismatch for UNiagaraDataInterfaceArrayFloat3::InternalFloatData");

// /Script/Niagara.NiagaraDataInterfaceArrayFloat4
// Kind: Class; super: NiagaraDataInterfaceArray
class UNiagaraDataInterfaceArrayFloat4
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> InternalFloatData; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceArrayFloat4, InternalFloatData) == 80, "Offset mismatch for UNiagaraDataInterfaceArrayFloat4::InternalFloatData");

// /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UNiagaraDataInterfaceArrayFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraDataInterfaceArrayInt32
// Kind: Class; super: NiagaraDataInterfaceArray
class UNiagaraDataInterfaceArrayInt32
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> IntData; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceArrayInt32, IntData) == 80, "Offset mismatch for UNiagaraDataInterfaceArrayInt32::IntData");

// /Script/Niagara.NiagaraDataInterfaceArrayMatrix
// Kind: Class; super: NiagaraDataInterfaceArray
class UNiagaraDataInterfaceArrayMatrix
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> InternalMatrixData; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceArrayMatrix, InternalMatrixData) == 80, "Offset mismatch for UNiagaraDataInterfaceArrayMatrix::InternalMatrixData");

// /Script/Niagara.NiagaraDataInterfaceArrayMesh
// Kind: Class; super: NiagaraDataInterfaceArray
class UNiagaraDataInterfaceArrayMesh
{
public:
    std::uint8_t Pad_0000[0x58]; // 0x0000
    TArray<void*> MeshData; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceArrayMesh, MeshData) == 88, "Offset mismatch for UNiagaraDataInterfaceArrayMesh::MeshData");

// /Script/Niagara.NiagaraDataInterfaceArrayNiagaraID
// Kind: Class; super: NiagaraDataInterfaceArray
class UNiagaraDataInterfaceArrayNiagaraID
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> IntData; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceArrayNiagaraID, IntData) == 80, "Offset mismatch for UNiagaraDataInterfaceArrayNiagaraID::IntData");

// /Script/Niagara.NiagaraDataInterfaceArrayPosition
// Kind: Class; super: NiagaraDataInterfaceArray
class UNiagaraDataInterfaceArrayPosition
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> PositionData; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceArrayPosition, PositionData) == 80, "Offset mismatch for UNiagaraDataInterfaceArrayPosition::PositionData");

// /Script/Niagara.NiagaraDataInterfaceArrayQuat
// Kind: Class; super: NiagaraDataInterfaceArray
class UNiagaraDataInterfaceArrayQuat
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> InternalQuatData; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceArrayQuat, InternalQuatData) == 80, "Offset mismatch for UNiagaraDataInterfaceArrayQuat::InternalQuatData");

// /Script/Niagara.NiagaraDataInterfaceArrayUInt8
// Kind: Class; super: NiagaraDataInterfaceArray
class UNiagaraDataInterfaceArrayUInt8
{
public:
    std::uint8_t Pad_0000[0x50]; // 0x0000
    TArray<void*> InternalIntData; // 0x0050 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceArrayUInt8, InternalIntData) == 80, "Offset mismatch for UNiagaraDataInterfaceArrayUInt8::InternalIntData");

// /Script/Niagara.NiagaraDataInterfaceAsyncGpuTrace
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceAsyncGpuTrace
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::int32_t MaxTracesPerParticle; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxRetraces; // 0x003C (Size: 0x4, Type: IntProperty)
    std::uint8_t TraceProvider; // 0x0040 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceAsyncGpuTrace, MaxTracesPerParticle) == 56, "Offset mismatch for UNiagaraDataInterfaceAsyncGpuTrace::MaxTracesPerParticle");
static_assert(offsetof(UNiagaraDataInterfaceAsyncGpuTrace, MaxRetraces) == 60, "Offset mismatch for UNiagaraDataInterfaceAsyncGpuTrace::MaxRetraces");
static_assert(offsetof(UNiagaraDataInterfaceAsyncGpuTrace, TraceProvider) == 64, "Offset mismatch for UNiagaraDataInterfaceAsyncGpuTrace::TraceProvider");

// /Script/Niagara.NiagaraDataInterfaceAudioOscilloscope
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceAudioOscilloscope
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Submix; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Resolution; // 0x0040 (Size: 0x4, Type: IntProperty)
    float ScopeInMilliseconds; // 0x0044 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceAudioOscilloscope, Submix) == 56, "Offset mismatch for UNiagaraDataInterfaceAudioOscilloscope::Submix");
static_assert(offsetof(UNiagaraDataInterfaceAudioOscilloscope, Resolution) == 64, "Offset mismatch for UNiagaraDataInterfaceAudioOscilloscope::Resolution");
static_assert(offsetof(UNiagaraDataInterfaceAudioOscilloscope, ScopeInMilliseconds) == 68, "Offset mismatch for UNiagaraDataInterfaceAudioOscilloscope::ScopeInMilliseconds");

// /Script/Niagara.NiagaraDataInterfaceAudioPlayer
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceAudioPlayer
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* SoundToPlay; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* Attenuation; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* Concurrency; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ParameterNames; // 0x0050 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ConfigurationUserParameter[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t bLimitPlaysPerTick; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0079
    std::int32_t MaxPlaysPerTick; // 0x007C (Size: 0x4, Type: IntProperty)
    std::uint8_t bStopWhenComponentIsDestroyed; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowLoopingOneShotSounds; // 0x0081 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, SoundToPlay) == 56, "Offset mismatch for UNiagaraDataInterfaceAudioPlayer::SoundToPlay");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, Attenuation) == 64, "Offset mismatch for UNiagaraDataInterfaceAudioPlayer::Attenuation");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, Concurrency) == 72, "Offset mismatch for UNiagaraDataInterfaceAudioPlayer::Concurrency");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, ParameterNames) == 80, "Offset mismatch for UNiagaraDataInterfaceAudioPlayer::ParameterNames");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, ConfigurationUserParameter) == 96, "Offset mismatch for UNiagaraDataInterfaceAudioPlayer::ConfigurationUserParameter");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, bLimitPlaysPerTick) == 120, "Offset mismatch for UNiagaraDataInterfaceAudioPlayer::bLimitPlaysPerTick");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, MaxPlaysPerTick) == 124, "Offset mismatch for UNiagaraDataInterfaceAudioPlayer::MaxPlaysPerTick");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, bStopWhenComponentIsDestroyed) == 128, "Offset mismatch for UNiagaraDataInterfaceAudioPlayer::bStopWhenComponentIsDestroyed");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, bAllowLoopingOneShotSounds) == 129, "Offset mismatch for UNiagaraDataInterfaceAudioPlayer::bAllowLoopingOneShotSounds");

// /Script/Niagara.NiagaraDataInterfaceAudioPlayerSettings
// Kind: Class; super: Object
class UNiagaraDataInterfaceAudioPlayerSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bOverrideConcurrency; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    void* Concurrency; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bOverrideAttenuationSettings; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0039
    std::uint8_t AttenuationSettings[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceAudioPlayerSettings, bOverrideConcurrency) == 40, "Offset mismatch for UNiagaraDataInterfaceAudioPlayerSettings::bOverrideConcurrency");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayerSettings, Concurrency) == 48, "Offset mismatch for UNiagaraDataInterfaceAudioPlayerSettings::Concurrency");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayerSettings, bOverrideAttenuationSettings) == 56, "Offset mismatch for UNiagaraDataInterfaceAudioPlayerSettings::bOverrideAttenuationSettings");
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayerSettings, AttenuationSettings) == 64, "Offset mismatch for UNiagaraDataInterfaceAudioPlayerSettings::AttenuationSettings");

// /Script/Niagara.NiagaraDataInterfaceAudioSpectrum
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceAudioSpectrum
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Submix; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::int32_t Resolution; // 0x0040 (Size: 0x4, Type: IntProperty)
    float MinimumFrequency; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float MaximumFrequency; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float NoiseFloorDb; // 0x004C (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceAudioSpectrum, Submix) == 56, "Offset mismatch for UNiagaraDataInterfaceAudioSpectrum::Submix");
static_assert(offsetof(UNiagaraDataInterfaceAudioSpectrum, Resolution) == 64, "Offset mismatch for UNiagaraDataInterfaceAudioSpectrum::Resolution");
static_assert(offsetof(UNiagaraDataInterfaceAudioSpectrum, MinimumFrequency) == 68, "Offset mismatch for UNiagaraDataInterfaceAudioSpectrum::MinimumFrequency");
static_assert(offsetof(UNiagaraDataInterfaceAudioSpectrum, MaximumFrequency) == 72, "Offset mismatch for UNiagaraDataInterfaceAudioSpectrum::MaximumFrequency");
static_assert(offsetof(UNiagaraDataInterfaceAudioSpectrum, NoiseFloorDb) == 76, "Offset mismatch for UNiagaraDataInterfaceAudioSpectrum::NoiseFloorDb");

// /Script/Niagara.NiagaraDataInterfaceCamera
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceCamera
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::int32_t PlayerControllerIndex; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t bRequireCurrentFrameData; // 0x003C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceCamera, PlayerControllerIndex) == 56, "Offset mismatch for UNiagaraDataInterfaceCamera::PlayerControllerIndex");
static_assert(offsetof(UNiagaraDataInterfaceCamera, bRequireCurrentFrameData) == 60, "Offset mismatch for UNiagaraDataInterfaceCamera::bRequireCurrentFrameData");

// /Script/Niagara.NiagaraDataInterfaceCollisionQuery
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceCollisionQuery
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraDataInterfaceColorCurve
// Kind: Class; super: NiagaraDataInterfaceCurveBase
class UNiagaraDataInterfaceColorCurve
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t RedCurve[0x40]; // 0x0070 (Size: 0x40, Type: StructProperty)
    std::uint8_t GreenCurve[0x40]; // 0x00B0 (Size: 0x40, Type: StructProperty)
    std::uint8_t BlueCurve[0x40]; // 0x00F0 (Size: 0x40, Type: StructProperty)
    std::uint8_t AlphaCurve[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceColorCurve, RedCurve) == 112, "Offset mismatch for UNiagaraDataInterfaceColorCurve::RedCurve");
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, GreenCurve) == 176, "Offset mismatch for UNiagaraDataInterfaceColorCurve::GreenCurve");
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, BlueCurve) == 240, "Offset mismatch for UNiagaraDataInterfaceColorCurve::BlueCurve");
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, AlphaCurve) == 304, "Offset mismatch for UNiagaraDataInterfaceColorCurve::AlphaCurve");

// /Script/Niagara.NiagaraDataInterfaceConsoleVariable
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceConsoleVariable
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraDataInterfaceCubeTexture
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceCubeTexture
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Texture; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TextureUserParameter[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceCubeTexture, Texture) == 56, "Offset mismatch for UNiagaraDataInterfaceCubeTexture::Texture");
static_assert(offsetof(UNiagaraDataInterfaceCubeTexture, TextureUserParameter) == 64, "Offset mismatch for UNiagaraDataInterfaceCubeTexture::TextureUserParameter");

// /Script/Niagara.NiagaraDataInterfaceCurlNoise
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceCurlNoise
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint32_t Seed; // 0x0038 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UNiagaraDataInterfaceCurlNoise, Seed) == 56, "Offset mismatch for UNiagaraDataInterfaceCurlNoise::Seed");

// /Script/Niagara.NiagaraDataInterfaceCurve
// Kind: Class; super: NiagaraDataInterfaceCurveBase
class UNiagaraDataInterfaceCurve
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t Curve[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceCurve, Curve) == 112, "Offset mismatch for UNiagaraDataInterfaceCurve::Curve");

// /Script/Niagara.NiagaraDataInterfaceCurveBase
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceCurveBase
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> ShaderLUT; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    float LUTMinTime; // 0x0048 (Size: 0x4, Type: FloatProperty)
    float LUTMaxTime; // 0x004C (Size: 0x4, Type: FloatProperty)
    float LUTInvTimeRange; // 0x0050 (Size: 0x4, Type: FloatProperty)
    float LUTNumSamplesMinusOne; // 0x0054 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0058
    std::uint8_t bExposeCurve; // 0x005C (Size: 0x1, Type: BoolProperty)
    // 0x005C BoolProperty bUseLUT (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x005D
    FName ExposedName; // 0x0060 (Size: 0x8, Type: NameProperty)
    void* ExposedTexture; // 0x0068 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceCurveBase, ShaderLUT) == 56, "Offset mismatch for UNiagaraDataInterfaceCurveBase::ShaderLUT");
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, LUTMinTime) == 72, "Offset mismatch for UNiagaraDataInterfaceCurveBase::LUTMinTime");
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, LUTMaxTime) == 76, "Offset mismatch for UNiagaraDataInterfaceCurveBase::LUTMaxTime");
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, LUTInvTimeRange) == 80, "Offset mismatch for UNiagaraDataInterfaceCurveBase::LUTInvTimeRange");
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, LUTNumSamplesMinusOne) == 84, "Offset mismatch for UNiagaraDataInterfaceCurveBase::LUTNumSamplesMinusOne");
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, bExposeCurve) == 92, "Offset mismatch for UNiagaraDataInterfaceCurveBase::bExposeCurve");
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, ExposedName) == 96, "Offset mismatch for UNiagaraDataInterfaceCurveBase::ExposedName");
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, ExposedTexture) == 104, "Offset mismatch for UNiagaraDataInterfaceCurveBase::ExposedTexture");

// /Script/Niagara.NiagaraDataInterfaceDataChannelRead
// Kind: Class; super: NiagaraDataInterfaceRWBase
class UNiagaraDataInterfaceDataChannelRead
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Channel; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AccessContext[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t bAutoLinkToSpawningNDC; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReadCurrentFrame; // 0x0051 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUpdateSourceDataEveryTick; // 0x0052 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOverrideSpawnGroupToDataChannelIndex; // 0x0053 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlySpawnOnceOnSubticks; // 0x0054 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0055
    std::uint8_t CompiledData[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceDataChannelRead, Channel) == 56, "Offset mismatch for UNiagaraDataInterfaceDataChannelRead::Channel");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelRead, AccessContext) == 64, "Offset mismatch for UNiagaraDataInterfaceDataChannelRead::AccessContext");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelRead, bAutoLinkToSpawningNDC) == 80, "Offset mismatch for UNiagaraDataInterfaceDataChannelRead::bAutoLinkToSpawningNDC");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelRead, bReadCurrentFrame) == 81, "Offset mismatch for UNiagaraDataInterfaceDataChannelRead::bReadCurrentFrame");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelRead, bUpdateSourceDataEveryTick) == 82, "Offset mismatch for UNiagaraDataInterfaceDataChannelRead::bUpdateSourceDataEveryTick");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelRead, bOverrideSpawnGroupToDataChannelIndex) == 83, "Offset mismatch for UNiagaraDataInterfaceDataChannelRead::bOverrideSpawnGroupToDataChannelIndex");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelRead, bOnlySpawnOnceOnSubticks) == 84, "Offset mismatch for UNiagaraDataInterfaceDataChannelRead::bOnlySpawnOnceOnSubticks");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelRead, CompiledData) == 88, "Offset mismatch for UNiagaraDataInterfaceDataChannelRead::CompiledData");

// /Script/Niagara.NiagaraDataInterfaceDataChannelWrite
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceDataChannelWrite
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t AllocationMode; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0041
    std::uint32_t AllocationCount; // 0x0044 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bPublishToGame; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPublishToCPU; // 0x0049 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bPublishToGPU; // 0x004A (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUpdateDestinationDataEveryTick; // 0x004B (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOnlyWriteOnceOnSubticks; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x004D
    void* Channel; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AccessContext[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    std::uint8_t CompiledData[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceDataChannelWrite, AllocationMode) == 64, "Offset mismatch for UNiagaraDataInterfaceDataChannelWrite::AllocationMode");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelWrite, AllocationCount) == 68, "Offset mismatch for UNiagaraDataInterfaceDataChannelWrite::AllocationCount");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelWrite, bPublishToGame) == 72, "Offset mismatch for UNiagaraDataInterfaceDataChannelWrite::bPublishToGame");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelWrite, bPublishToCPU) == 73, "Offset mismatch for UNiagaraDataInterfaceDataChannelWrite::bPublishToCPU");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelWrite, bPublishToGPU) == 74, "Offset mismatch for UNiagaraDataInterfaceDataChannelWrite::bPublishToGPU");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelWrite, bUpdateDestinationDataEveryTick) == 75, "Offset mismatch for UNiagaraDataInterfaceDataChannelWrite::bUpdateDestinationDataEveryTick");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelWrite, bOnlyWriteOnceOnSubticks) == 76, "Offset mismatch for UNiagaraDataInterfaceDataChannelWrite::bOnlyWriteOnceOnSubticks");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelWrite, Channel) == 80, "Offset mismatch for UNiagaraDataInterfaceDataChannelWrite::Channel");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelWrite, AccessContext) == 88, "Offset mismatch for UNiagaraDataInterfaceDataChannelWrite::AccessContext");
static_assert(offsetof(UNiagaraDataInterfaceDataChannelWrite, CompiledData) == 104, "Offset mismatch for UNiagaraDataInterfaceDataChannelWrite::CompiledData");

// /Script/Niagara.NiagaraDataInterfaceDataTable
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceDataTable
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* DataTable; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> FilteredRowNames; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ObjectParameterBinding[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t bCreateFilteredTable; // 0x0068 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceDataTable, DataTable) == 56, "Offset mismatch for UNiagaraDataInterfaceDataTable::DataTable");
static_assert(offsetof(UNiagaraDataInterfaceDataTable, FilteredRowNames) == 64, "Offset mismatch for UNiagaraDataInterfaceDataTable::FilteredRowNames");
static_assert(offsetof(UNiagaraDataInterfaceDataTable, ObjectParameterBinding) == 80, "Offset mismatch for UNiagaraDataInterfaceDataTable::ObjectParameterBinding");
static_assert(offsetof(UNiagaraDataInterfaceDataTable, bCreateFilteredTable) == 104, "Offset mismatch for UNiagaraDataInterfaceDataTable::bCreateFilteredTable");

// /Script/Niagara.NiagaraDataInterfaceDebugDraw
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceDebugDraw
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint32_t OverrideMaxLineInstances; // 0x0038 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UNiagaraDataInterfaceDebugDraw, OverrideMaxLineInstances) == 56, "Offset mismatch for UNiagaraDataInterfaceDebugDraw::OverrideMaxLineInstances");

// /Script/Niagara.NiagaraDataInterfaceDynamicMesh
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceDynamicMesh
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    TArray<void*> Sections; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Materials; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumVertices; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::int32_t NumTexCoords; // 0x006C (Size: 0x4, Type: IntProperty)
    std::uint8_t bHasColors; // 0x0070 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bHasTangentBasis; // 0x0071 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClearTrianglesPerFrame; // 0x0072 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0073
    std::uint8_t DefaultBounds[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceDynamicMesh, Sections) == 72, "Offset mismatch for UNiagaraDataInterfaceDynamicMesh::Sections");
static_assert(offsetof(UNiagaraDataInterfaceDynamicMesh, Materials) == 88, "Offset mismatch for UNiagaraDataInterfaceDynamicMesh::Materials");
static_assert(offsetof(UNiagaraDataInterfaceDynamicMesh, NumVertices) == 104, "Offset mismatch for UNiagaraDataInterfaceDynamicMesh::NumVertices");
static_assert(offsetof(UNiagaraDataInterfaceDynamicMesh, NumTexCoords) == 108, "Offset mismatch for UNiagaraDataInterfaceDynamicMesh::NumTexCoords");
static_assert(offsetof(UNiagaraDataInterfaceDynamicMesh, bHasColors) == 112, "Offset mismatch for UNiagaraDataInterfaceDynamicMesh::bHasColors");
static_assert(offsetof(UNiagaraDataInterfaceDynamicMesh, bHasTangentBasis) == 113, "Offset mismatch for UNiagaraDataInterfaceDynamicMesh::bHasTangentBasis");
static_assert(offsetof(UNiagaraDataInterfaceDynamicMesh, bClearTrianglesPerFrame) == 114, "Offset mismatch for UNiagaraDataInterfaceDynamicMesh::bClearTrianglesPerFrame");
static_assert(offsetof(UNiagaraDataInterfaceDynamicMesh, DefaultBounds) == 120, "Offset mismatch for UNiagaraDataInterfaceDynamicMesh::DefaultBounds");

// /Script/Niagara.NiagaraDataInterfaceDynamicMeshSimCacheData
// Kind: Class; super: Object
class UNiagaraDataInterfaceDynamicMeshSimCacheData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> UniqueFrames; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CpuFrameIndices; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> GpuFrameIndices; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceDynamicMeshSimCacheData, UniqueFrames) == 40, "Offset mismatch for UNiagaraDataInterfaceDynamicMeshSimCacheData::UniqueFrames");
static_assert(offsetof(UNiagaraDataInterfaceDynamicMeshSimCacheData, CpuFrameIndices) == 56, "Offset mismatch for UNiagaraDataInterfaceDynamicMeshSimCacheData::CpuFrameIndices");
static_assert(offsetof(UNiagaraDataInterfaceDynamicMeshSimCacheData, GpuFrameIndices) == 72, "Offset mismatch for UNiagaraDataInterfaceDynamicMeshSimCacheData::GpuFrameIndices");

// /Script/Niagara.NiagaraDataInterfaceEmitterProperties
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceEmitterProperties
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t EmitterBinding[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceEmitterProperties, EmitterBinding) == 56, "Offset mismatch for UNiagaraDataInterfaceEmitterProperties::EmitterBinding");

// /Script/Niagara.NiagaraDataInterfaceExport
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceExport
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t CallbackHandlerParameter[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    std::uint8_t GPUAllocationMode; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0051
    std::int32_t GPUAllocationFixedSize; // 0x0054 (Size: 0x4, Type: IntProperty)
    float GPUAllocationPerParticleSize; // 0x0058 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceExport, CallbackHandlerParameter) == 56, "Offset mismatch for UNiagaraDataInterfaceExport::CallbackHandlerParameter");
static_assert(offsetof(UNiagaraDataInterfaceExport, GPUAllocationMode) == 80, "Offset mismatch for UNiagaraDataInterfaceExport::GPUAllocationMode");
static_assert(offsetof(UNiagaraDataInterfaceExport, GPUAllocationFixedSize) == 84, "Offset mismatch for UNiagaraDataInterfaceExport::GPUAllocationFixedSize");
static_assert(offsetof(UNiagaraDataInterfaceExport, GPUAllocationPerParticleSize) == 88, "Offset mismatch for UNiagaraDataInterfaceExport::GPUAllocationPerParticleSize");

// /Script/Niagara.NiagaraDataInterfaceGBuffer
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceGBuffer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraDataInterfaceGrid2D
// Kind: Class; super: NiagaraDataInterfaceRWBase
class UNiagaraDataInterfaceGrid2D
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t ClearBeforeNonIterationStage; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::int32_t NumCellsX; // 0x003C (Size: 0x4, Type: IntProperty)
    std::int32_t NumCellsY; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::int32_t NumCellsMaxAxis; // 0x0044 (Size: 0x4, Type: IntProperty)
    std::int32_t NumAttributes; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::uint8_t SetGridFromMaxAxis; // 0x004C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x004D
    std::uint8_t WorldBBoxSize[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceGrid2D, ClearBeforeNonIterationStage) == 56, "Offset mismatch for UNiagaraDataInterfaceGrid2D::ClearBeforeNonIterationStage");
static_assert(offsetof(UNiagaraDataInterfaceGrid2D, NumCellsX) == 60, "Offset mismatch for UNiagaraDataInterfaceGrid2D::NumCellsX");
static_assert(offsetof(UNiagaraDataInterfaceGrid2D, NumCellsY) == 64, "Offset mismatch for UNiagaraDataInterfaceGrid2D::NumCellsY");
static_assert(offsetof(UNiagaraDataInterfaceGrid2D, NumCellsMaxAxis) == 68, "Offset mismatch for UNiagaraDataInterfaceGrid2D::NumCellsMaxAxis");
static_assert(offsetof(UNiagaraDataInterfaceGrid2D, NumAttributes) == 72, "Offset mismatch for UNiagaraDataInterfaceGrid2D::NumAttributes");
static_assert(offsetof(UNiagaraDataInterfaceGrid2D, SetGridFromMaxAxis) == 76, "Offset mismatch for UNiagaraDataInterfaceGrid2D::SetGridFromMaxAxis");
static_assert(offsetof(UNiagaraDataInterfaceGrid2D, WorldBBoxSize) == 80, "Offset mismatch for UNiagaraDataInterfaceGrid2D::WorldBBoxSize");

// /Script/Niagara.NiagaraDataInterfaceGrid2DCollection
// Kind: Class; super: NiagaraDataInterfaceGrid2D
class UNiagaraDataInterfaceGrid2DCollection
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t RenderTargetUserParameter[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t OverrideBufferFormat; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOverrideFormat; // 0x0079 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x16]; // 0x007A
    TMap<void*, void*> ManagedRenderTargets; // 0x0090 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollection, RenderTargetUserParameter) == 96, "Offset mismatch for UNiagaraDataInterfaceGrid2DCollection::RenderTargetUserParameter");
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollection, OverrideBufferFormat) == 120, "Offset mismatch for UNiagaraDataInterfaceGrid2DCollection::OverrideBufferFormat");
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollection, bOverrideFormat) == 121, "Offset mismatch for UNiagaraDataInterfaceGrid2DCollection::bOverrideFormat");
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollection, ManagedRenderTargets) == 144, "Offset mismatch for UNiagaraDataInterfaceGrid2DCollection::ManagedRenderTargets");

// /Script/Niagara.NiagaraDataInterfaceGrid2DCollectionReader
// Kind: Class; super: NiagaraDataInterfaceGrid2DCollection
class UNiagaraDataInterfaceGrid2DCollectionReader
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    FString EmitterName; // 0x00A0 (Size: 0x10, Type: StrProperty)
    FString DIName; // 0x00B0 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollectionReader, EmitterName) == 160, "Offset mismatch for UNiagaraDataInterfaceGrid2DCollectionReader::EmitterName");
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollectionReader, DIName) == 176, "Offset mismatch for UNiagaraDataInterfaceGrid2DCollectionReader::DIName");

// /Script/Niagara.NiagaraDataInterfaceGrid3D
// Kind: Class; super: NiagaraDataInterfaceRWBase
class UNiagaraDataInterfaceGrid3D
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t ClearBeforeNonIterationStage; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::uint8_t NumCells[0xC]; // 0x003C (Size: 0xC, Type: StructProperty)
    float CellSize; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::int32_t NumCellsMaxAxis; // 0x004C (Size: 0x4, Type: IntProperty)
    std::uint8_t SetResolutionMethod; // 0x0050 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0051
    std::uint8_t WorldBBoxSize[0x1]; // 0x0058 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceGrid3D, ClearBeforeNonIterationStage) == 56, "Offset mismatch for UNiagaraDataInterfaceGrid3D::ClearBeforeNonIterationStage");
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, NumCells) == 60, "Offset mismatch for UNiagaraDataInterfaceGrid3D::NumCells");
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, CellSize) == 72, "Offset mismatch for UNiagaraDataInterfaceGrid3D::CellSize");
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, NumCellsMaxAxis) == 76, "Offset mismatch for UNiagaraDataInterfaceGrid3D::NumCellsMaxAxis");
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, SetResolutionMethod) == 80, "Offset mismatch for UNiagaraDataInterfaceGrid3D::SetResolutionMethod");
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, WorldBBoxSize) == 88, "Offset mismatch for UNiagaraDataInterfaceGrid3D::WorldBBoxSize");

// /Script/Niagara.NiagaraDataInterfaceGrid3DCollection
// Kind: Class; super: NiagaraDataInterfaceGrid3D
class UNiagaraDataInterfaceGrid3DCollection
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::int32_t NumAttributes; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0074
    std::uint8_t RenderTargetUserParameter[0x18]; // 0x0078 (Size: 0x18, Type: StructProperty)
    std::uint8_t OverrideBufferFormat; // 0x0090 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bOverrideFormat; // 0x0091 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceGrid3DCollection, NumAttributes) == 112, "Offset mismatch for UNiagaraDataInterfaceGrid3DCollection::NumAttributes");
static_assert(offsetof(UNiagaraDataInterfaceGrid3DCollection, RenderTargetUserParameter) == 120, "Offset mismatch for UNiagaraDataInterfaceGrid3DCollection::RenderTargetUserParameter");
static_assert(offsetof(UNiagaraDataInterfaceGrid3DCollection, OverrideBufferFormat) == 144, "Offset mismatch for UNiagaraDataInterfaceGrid3DCollection::OverrideBufferFormat");
static_assert(offsetof(UNiagaraDataInterfaceGrid3DCollection, bOverrideFormat) == 145, "Offset mismatch for UNiagaraDataInterfaceGrid3DCollection::bOverrideFormat");

// /Script/Niagara.NiagaraDataInterfaceGrid3DCollectionReader
// Kind: Class; super: NiagaraDataInterfaceGrid3DCollection
class UNiagaraDataInterfaceGrid3DCollectionReader
{
public:
    std::uint8_t Pad_0000[0xA8]; // 0x0000
    FString EmitterName; // 0x00A8 (Size: 0x10, Type: StrProperty)
    FString DIName; // 0x00B8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceGrid3DCollectionReader, EmitterName) == 168, "Offset mismatch for UNiagaraDataInterfaceGrid3DCollectionReader::EmitterName");
static_assert(offsetof(UNiagaraDataInterfaceGrid3DCollectionReader, DIName) == 184, "Offset mismatch for UNiagaraDataInterfaceGrid3DCollectionReader::DIName");

// /Script/Niagara.NiagaraDataInterfaceIntRenderTarget2D
// Kind: Class; super: NiagaraDataInterfaceRWBase
class UNiagaraDataInterfaceIntRenderTarget2D
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Size[0x8]; // 0x0038 (Size: 0x8, Type: StructProperty)
    std::uint8_t RenderTargetUserParameter[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceIntRenderTarget2D, Size) == 56, "Offset mismatch for UNiagaraDataInterfaceIntRenderTarget2D::Size");
static_assert(offsetof(UNiagaraDataInterfaceIntRenderTarget2D, RenderTargetUserParameter) == 64, "Offset mismatch for UNiagaraDataInterfaceIntRenderTarget2D::RenderTargetUserParameter");

// /Script/Niagara.NiagaraDataInterfaceLandscape
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceLandscape
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* SourceLandscape; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SourceMode; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0041
    TArray<void*> PhysicalMaterials; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bVirtualTexturesSupported; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceLandscape, SourceLandscape) == 56, "Offset mismatch for UNiagaraDataInterfaceLandscape::SourceLandscape");
static_assert(offsetof(UNiagaraDataInterfaceLandscape, SourceMode) == 64, "Offset mismatch for UNiagaraDataInterfaceLandscape::SourceMode");
static_assert(offsetof(UNiagaraDataInterfaceLandscape, PhysicalMaterials) == 72, "Offset mismatch for UNiagaraDataInterfaceLandscape::PhysicalMaterials");
static_assert(offsetof(UNiagaraDataInterfaceLandscape, bVirtualTexturesSupported) == 88, "Offset mismatch for UNiagaraDataInterfaceLandscape::bVirtualTexturesSupported");

// /Script/Niagara.NiagaraDataInterfaceMaterialInstanceDynamic
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceMaterialInstanceDynamic
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* DefaultMaterialInst; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InstancedMaterialParamBinding[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceMaterialInstanceDynamic, DefaultMaterialInst) == 56, "Offset mismatch for UNiagaraDataInterfaceMaterialInstanceDynamic::DefaultMaterialInst");
static_assert(offsetof(UNiagaraDataInterfaceMaterialInstanceDynamic, InstancedMaterialParamBinding) == 64, "Offset mismatch for UNiagaraDataInterfaceMaterialInstanceDynamic::InstancedMaterialParamBinding");

// /Script/Niagara.NiagaraDataInterfaceMaterialParameterCollection
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceMaterialParameterCollection
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* DefaultCollection; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CollectionBinding[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceMaterialParameterCollection, DefaultCollection) == 56, "Offset mismatch for UNiagaraDataInterfaceMaterialParameterCollection::DefaultCollection");
static_assert(offsetof(UNiagaraDataInterfaceMaterialParameterCollection, CollectionBinding) == 64, "Offset mismatch for UNiagaraDataInterfaceMaterialParameterCollection::CollectionBinding");

// /Script/Niagara.NiagaraDataInterfaceMemoryBuffer
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceMemoryBuffer
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::int32_t DefaultNumElements; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::uint8_t GpuSyncMode; // 0x0044 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceMemoryBuffer, DefaultNumElements) == 64, "Offset mismatch for UNiagaraDataInterfaceMemoryBuffer::DefaultNumElements");
static_assert(offsetof(UNiagaraDataInterfaceMemoryBuffer, GpuSyncMode) == 68, "Offset mismatch for UNiagaraDataInterfaceMemoryBuffer::GpuSyncMode");

// /Script/Niagara.NiagaraDataInterfaceMeshRendererInfo
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceMeshRendererInfo
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* MeshRenderer; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceMeshRendererInfo, MeshRenderer) == 56, "Offset mismatch for UNiagaraDataInterfaceMeshRendererInfo::MeshRenderer");

// /Script/Niagara.NiagaraDataInterfaceNeighborGrid3D
// Kind: Class; super: NiagaraDataInterfaceGrid3D
class UNiagaraDataInterfaceNeighborGrid3D
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint32_t MaxNeighborsPerCell; // 0x0070 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UNiagaraDataInterfaceNeighborGrid3D, MaxNeighborsPerCell) == 112, "Offset mismatch for UNiagaraDataInterfaceNeighborGrid3D::MaxNeighborsPerCell");

// /Script/Niagara.NiagaraDataInterfaceNeighborQuery
// Kind: Class; super: NiagaraDataInterfaceGrid3D
class UNiagaraDataInterfaceNeighborQuery
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint32_t MaxCellsPerParticle; // 0x0070 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bCountOnly; // 0x0074 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUsePersistentIDs; // 0x0075 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceNeighborQuery, MaxCellsPerParticle) == 112, "Offset mismatch for UNiagaraDataInterfaceNeighborQuery::MaxCellsPerParticle");
static_assert(offsetof(UNiagaraDataInterfaceNeighborQuery, bCountOnly) == 116, "Offset mismatch for UNiagaraDataInterfaceNeighborQuery::bCountOnly");
static_assert(offsetof(UNiagaraDataInterfaceNeighborQuery, bUsePersistentIDs) == 117, "Offset mismatch for UNiagaraDataInterfaceNeighborQuery::bUsePersistentIDs");

// /Script/Niagara.NiagaraDataInterfaceOcclusion
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceOcclusion
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraDataInterfaceParticleRead
// Kind: Class; super: NiagaraDataInterfaceRWBase
class UNiagaraDataInterfaceParticleRead
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t EmitterBinding[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceParticleRead, EmitterBinding) == 56, "Offset mismatch for UNiagaraDataInterfaceParticleRead::EmitterBinding");

// /Script/Niagara.NiagaraDataInterfacePhysicsAsset
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfacePhysicsAsset
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* DefaultSource; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SoftSourceActor[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t MeshUserParameter[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfacePhysicsAsset, DefaultSource) == 56, "Offset mismatch for UNiagaraDataInterfacePhysicsAsset::DefaultSource");
static_assert(offsetof(UNiagaraDataInterfacePhysicsAsset, SoftSourceActor) == 64, "Offset mismatch for UNiagaraDataInterfacePhysicsAsset::SoftSourceActor");
static_assert(offsetof(UNiagaraDataInterfacePhysicsAsset, MeshUserParameter) == 96, "Offset mismatch for UNiagaraDataInterfacePhysicsAsset::MeshUserParameter");

// /Script/Niagara.NiagaraDataInterfacePlatformSet
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfacePlatformSet
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Platforms[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfacePlatformSet, Platforms) == 56, "Offset mismatch for UNiagaraDataInterfacePlatformSet::Platforms");

// /Script/Niagara.NiagaraDataInterfacePropertyInterface
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfacePropertyInterface
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t InterfaceName[0x4]; // 0x0038 (Size: 0x4, Type: NameProperty)
    std::uint8_t InterfacePath[0x4]; // 0x003C (Size: 0x4, Type: NameProperty)
    FName InterfacePackage; // 0x0040 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UNiagaraDataInterfacePropertyInterface, InterfaceName) == 56, "Offset mismatch for UNiagaraDataInterfacePropertyInterface::InterfaceName");
static_assert(offsetof(UNiagaraDataInterfacePropertyInterface, InterfacePath) == 60, "Offset mismatch for UNiagaraDataInterfacePropertyInterface::InterfacePath");
static_assert(offsetof(UNiagaraDataInterfacePropertyInterface, InterfacePackage) == 64, "Offset mismatch for UNiagaraDataInterfacePropertyInterface::InterfacePackage");

// /Script/Niagara.NiagaraDataInterfaceRWBase
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceRWBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraDataInterfaceRasterizationGrid3D
// Kind: Class; super: NiagaraDataInterfaceGrid3D
class UNiagaraDataInterfaceRasterizationGrid3D
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::int32_t NumAttributes; // 0x0070 (Size: 0x4, Type: IntProperty)
    float Precision; // 0x0074 (Size: 0x4, Type: FloatProperty)
    std::int32_t ResetValue; // 0x0078 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceRasterizationGrid3D, NumAttributes) == 112, "Offset mismatch for UNiagaraDataInterfaceRasterizationGrid3D::NumAttributes");
static_assert(offsetof(UNiagaraDataInterfaceRasterizationGrid3D, Precision) == 116, "Offset mismatch for UNiagaraDataInterfaceRasterizationGrid3D::Precision");
static_assert(offsetof(UNiagaraDataInterfaceRasterizationGrid3D, ResetValue) == 120, "Offset mismatch for UNiagaraDataInterfaceRasterizationGrid3D::ResetValue");

// /Script/Niagara.NiagaraDataInterfaceRenderTarget2D
// Kind: Class; super: NiagaraDataInterfaceRWBase
class UNiagaraDataInterfaceRenderTarget2D
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t Size[0x8]; // 0x0040 (Size: 0x8, Type: StructProperty)
    std::uint8_t MipMapGeneration; // 0x0048 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MipMapGenerationType; // 0x0049 (Size: 0x1, Type: EnumProperty)
    std::uint8_t OverrideRenderTargetFormat; // 0x004A (Size: 0x1, Type: ByteProperty)
    std::uint8_t OverrideRenderTargetFilter; // 0x004B (Size: 0x1, Type: ByteProperty)
    std::uint8_t bInheritUserParameterSettings; // 0x004C (Size: 0x1, Type: BoolProperty)
    // 0x004C BoolProperty bOverrideFormat (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x004D
    std::uint8_t RenderTargetUserParameter[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, Size) == 64, "Offset mismatch for UNiagaraDataInterfaceRenderTarget2D::Size");
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, MipMapGeneration) == 72, "Offset mismatch for UNiagaraDataInterfaceRenderTarget2D::MipMapGeneration");
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, MipMapGenerationType) == 73, "Offset mismatch for UNiagaraDataInterfaceRenderTarget2D::MipMapGenerationType");
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, OverrideRenderTargetFormat) == 74, "Offset mismatch for UNiagaraDataInterfaceRenderTarget2D::OverrideRenderTargetFormat");
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, OverrideRenderTargetFilter) == 75, "Offset mismatch for UNiagaraDataInterfaceRenderTarget2D::OverrideRenderTargetFilter");
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, bInheritUserParameterSettings) == 76, "Offset mismatch for UNiagaraDataInterfaceRenderTarget2D::bInheritUserParameterSettings");
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, RenderTargetUserParameter) == 80, "Offset mismatch for UNiagaraDataInterfaceRenderTarget2D::RenderTargetUserParameter");

// /Script/Niagara.NiagaraDataInterfaceRenderTarget2DArray
// Kind: Class; super: NiagaraDataInterfaceRWBase
class UNiagaraDataInterfaceRenderTarget2DArray
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t Size[0xC]; // 0x0038 (Size: 0xC, Type: StructProperty)
    std::uint8_t OverrideRenderTargetFormat; // 0x0044 (Size: 0x1, Type: ByteProperty)
    std::uint8_t OverrideRenderTargetFilter; // 0x0045 (Size: 0x1, Type: ByteProperty)
    std::uint8_t bInheritUserParameterSettings; // 0x0046 (Size: 0x1, Type: BoolProperty)
    // 0x0046 BoolProperty bOverrideFormat (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x0047
    std::uint8_t RenderTargetUserParameter[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, Size) == 56, "Offset mismatch for UNiagaraDataInterfaceRenderTarget2DArray::Size");
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, OverrideRenderTargetFormat) == 68, "Offset mismatch for UNiagaraDataInterfaceRenderTarget2DArray::OverrideRenderTargetFormat");
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, OverrideRenderTargetFilter) == 69, "Offset mismatch for UNiagaraDataInterfaceRenderTarget2DArray::OverrideRenderTargetFilter");
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, bInheritUserParameterSettings) == 70, "Offset mismatch for UNiagaraDataInterfaceRenderTarget2DArray::bInheritUserParameterSettings");
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, RenderTargetUserParameter) == 72, "Offset mismatch for UNiagaraDataInterfaceRenderTarget2DArray::RenderTargetUserParameter");

// /Script/Niagara.NiagaraDataInterfaceRenderTargetCube
// Kind: Class; super: NiagaraDataInterfaceRWBase
class UNiagaraDataInterfaceRenderTargetCube
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::int32_t Size; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::uint8_t OverrideRenderTargetFormat; // 0x003C (Size: 0x1, Type: ByteProperty)
    std::uint8_t OverrideRenderTargetFilter; // 0x003D (Size: 0x1, Type: ByteProperty)
    std::uint8_t bInheritUserParameterSettings; // 0x003E (Size: 0x1, Type: BoolProperty)
    // 0x003E BoolProperty bOverrideFormat (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x003F
    std::uint8_t RenderTargetUserParameter[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceRenderTargetCube, Size) == 56, "Offset mismatch for UNiagaraDataInterfaceRenderTargetCube::Size");
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetCube, OverrideRenderTargetFormat) == 60, "Offset mismatch for UNiagaraDataInterfaceRenderTargetCube::OverrideRenderTargetFormat");
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetCube, OverrideRenderTargetFilter) == 61, "Offset mismatch for UNiagaraDataInterfaceRenderTargetCube::OverrideRenderTargetFilter");
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetCube, bInheritUserParameterSettings) == 62, "Offset mismatch for UNiagaraDataInterfaceRenderTargetCube::bInheritUserParameterSettings");
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetCube, RenderTargetUserParameter) == 64, "Offset mismatch for UNiagaraDataInterfaceRenderTargetCube::RenderTargetUserParameter");

// /Script/Niagara.NiagaraDataInterfaceRenderTargetVolume
// Kind: Class; super: NiagaraDataInterfaceRWBase
class UNiagaraDataInterfaceRenderTargetVolume
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t Size[0xC]; // 0x0040 (Size: 0xC, Type: StructProperty)
    std::uint8_t OverrideRenderTargetFormat; // 0x004C (Size: 0x1, Type: ByteProperty)
    std::uint8_t OverrideRenderTargetFilter; // 0x004D (Size: 0x1, Type: ByteProperty)
    std::uint8_t bInheritUserParameterSettings; // 0x004E (Size: 0x1, Type: BoolProperty)
    // 0x004E BoolProperty bOverrideFormat (shared storage)
    std::uint8_t Pad_0001[0x1]; // 0x004F
    std::uint8_t RenderTargetUserParameter[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, Size) == 64, "Offset mismatch for UNiagaraDataInterfaceRenderTargetVolume::Size");
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, OverrideRenderTargetFormat) == 76, "Offset mismatch for UNiagaraDataInterfaceRenderTargetVolume::OverrideRenderTargetFormat");
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, OverrideRenderTargetFilter) == 77, "Offset mismatch for UNiagaraDataInterfaceRenderTargetVolume::OverrideRenderTargetFilter");
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, bInheritUserParameterSettings) == 78, "Offset mismatch for UNiagaraDataInterfaceRenderTargetVolume::bInheritUserParameterSettings");
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, RenderTargetUserParameter) == 80, "Offset mismatch for UNiagaraDataInterfaceRenderTargetVolume::RenderTargetUserParameter");

// /Script/Niagara.NiagaraDataInterfaceRibbon
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceRibbon
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t bRibbonEnableAccurateGeometry; // 0x0038 (Size: 0x1, Type: BoolProperty)
    // 0x0038 BoolProperty bRibbonShapeClosed (shared storage)
    // 0x0038 BoolProperty bRibbonUseMaterialBackfaceCulling (shared storage)
};

static_assert(offsetof(UNiagaraDataInterfaceRibbon, bRibbonEnableAccurateGeometry) == 56, "Offset mismatch for UNiagaraDataInterfaceRibbon::bRibbonEnableAccurateGeometry");

// /Script/Niagara.NiagaraDataInterfaceRigidMeshCollisionQuery
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceRigidMeshCollisionQuery
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> ActorTags; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ComponentTags; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SourceActors; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t OnlyUseMoveable; // 0x0068 (Size: 0x1, Type: BoolProperty)
    std::uint8_t UseComplexCollisions; // 0x0069 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFilterByObjectType; // 0x006A (Size: 0x1, Type: BoolProperty)
    std::uint8_t GlobalSearchAllowed; // 0x006B (Size: 0x1, Type: BoolProperty)
    std::uint8_t GlobalSearchForced; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t GlobalSearchFallback_Unscripted; // 0x006D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x006E
    std::int32_t MaxNumPrimitives; // 0x0070 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceRigidMeshCollisionQuery, ActorTags) == 56, "Offset mismatch for UNiagaraDataInterfaceRigidMeshCollisionQuery::ActorTags");
static_assert(offsetof(UNiagaraDataInterfaceRigidMeshCollisionQuery, ComponentTags) == 72, "Offset mismatch for UNiagaraDataInterfaceRigidMeshCollisionQuery::ComponentTags");
static_assert(offsetof(UNiagaraDataInterfaceRigidMeshCollisionQuery, SourceActors) == 88, "Offset mismatch for UNiagaraDataInterfaceRigidMeshCollisionQuery::SourceActors");
static_assert(offsetof(UNiagaraDataInterfaceRigidMeshCollisionQuery, OnlyUseMoveable) == 104, "Offset mismatch for UNiagaraDataInterfaceRigidMeshCollisionQuery::OnlyUseMoveable");
static_assert(offsetof(UNiagaraDataInterfaceRigidMeshCollisionQuery, UseComplexCollisions) == 105, "Offset mismatch for UNiagaraDataInterfaceRigidMeshCollisionQuery::UseComplexCollisions");
static_assert(offsetof(UNiagaraDataInterfaceRigidMeshCollisionQuery, bFilterByObjectType) == 106, "Offset mismatch for UNiagaraDataInterfaceRigidMeshCollisionQuery::bFilterByObjectType");
static_assert(offsetof(UNiagaraDataInterfaceRigidMeshCollisionQuery, GlobalSearchAllowed) == 107, "Offset mismatch for UNiagaraDataInterfaceRigidMeshCollisionQuery::GlobalSearchAllowed");
static_assert(offsetof(UNiagaraDataInterfaceRigidMeshCollisionQuery, GlobalSearchForced) == 108, "Offset mismatch for UNiagaraDataInterfaceRigidMeshCollisionQuery::GlobalSearchForced");
static_assert(offsetof(UNiagaraDataInterfaceRigidMeshCollisionQuery, GlobalSearchFallback_Unscripted) == 109, "Offset mismatch for UNiagaraDataInterfaceRigidMeshCollisionQuery::GlobalSearchFallback_Unscripted");
static_assert(offsetof(UNiagaraDataInterfaceRigidMeshCollisionQuery, MaxNumPrimitives) == 112, "Offset mismatch for UNiagaraDataInterfaceRigidMeshCollisionQuery::MaxNumPrimitives");

// /Script/Niagara.NiagaraDataInterfaceSceneCapture2D
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceSceneCapture2D
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SourceMode; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    std::uint8_t SceneCaptureUserParameter[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAutoMoveWithComponent; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AutoMoveOffsetLocationMode; // 0x0059 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x6]; // 0x005A
    std::uint8_t AutoMoveOffsetLocation[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t AutoMoveOffsetRotationMode; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0079
    std::uint8_t AutoMoveOffsetRotation[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    std::uint8_t ManagedCaptureSource; // 0x0098 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0099
    std::uint8_t ManagedTextureSize[0x8]; // 0x009C (Size: 0x8, Type: StructProperty)
    std::uint8_t ManagedTextureFormat; // 0x00A4 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ManagedProjectionType; // 0x00A5 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0005[0x2]; // 0x00A6
    float ManagedFOVAngle; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float ManagedOrthoWidth; // 0x00AC (Size: 0x4, Type: FloatProperty)
    float ManagedLODDistanceFactor; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bManagedCaptureEveryFrame; // 0x00B4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bManagedCaptureOnMovement; // 0x00B5 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bManagedHideAttachComponent; // 0x00B6 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x1]; // 0x00B7
    TArray<void*> ManagedHiddenActors; // 0x00B8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ManagedShowOnlyActors; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0007[0x8]; // 0x00D8
    TMap<void*, void*> ManagedCaptureComponents; // 0x00E0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceSceneCapture2D, SourceMode) == 56, "Offset mismatch for UNiagaraDataInterfaceSceneCapture2D::SourceMode");
static_assert(offsetof(UNiagaraDataInterfaceSceneCapture2D, SceneCaptureUserParameter) == 64, "Offset mismatch for UNiagaraDataInterfaceSceneCapture2D::SceneCaptureUserParameter");
static_assert(offsetof(UNiagaraDataInterfaceSceneCapture2D, bAutoMoveWithComponent) == 88, "Offset mismatch for UNiagaraDataInterfaceSceneCapture2D::bAutoMoveWithComponent");
static_assert(offsetof(UNiagaraDataInterfaceSceneCapture2D, AutoMoveOffsetLocationMode) == 89, "Offset mismatch for UNiagaraDataInterfaceSceneCapture2D::AutoMoveOffsetLocationMode");
static_assert(offsetof(UNiagaraDataInterfaceSceneCapture2D, AutoMoveOffsetLocation) == 96, "Offset mismatch for UNiagaraDataInterfaceSceneCapture2D::AutoMoveOffsetLocation");
static_assert(offsetof(UNiagaraDataInterfaceSceneCapture2D, AutoMoveOffsetRotationMode) == 120, "Offset mismatch for UNiagaraDataInterfaceSceneCapture2D::AutoMoveOffsetRotationMode");
static_assert(offsetof(UNiagaraDataInterfaceSceneCapture2D, AutoMoveOffsetRotation) == 128, "Offset mismatch for UNiagaraDataInterfaceSceneCapture2D::AutoMoveOffsetRotation");
static_assert(offsetof(UNiagaraDataInterfaceSceneCapture2D, ManagedCaptureSource) == 152, "Offset mismatch for UNiagaraDataInterfaceSceneCapture2D::ManagedCaptureSource");
static_assert(offsetof(UNiagaraDataInterfaceSceneCapture2D, ManagedTextureSize) == 156, "Offset mismatch for UNiagaraDataInterfaceSceneCapture2D::ManagedTextureSize");
static_assert(offsetof(UNiagaraDataInterfaceSceneCapture2D, ManagedTextureFormat) == 164, "Offset mismatch for UNiagaraDataInterfaceSceneCapture2D::ManagedTextureFormat");
static_assert(offsetof(UNiagaraDataInterfaceSceneCapture2D, ManagedProjectionType) == 165, "Offset mismatch for UNiagaraDataInterfaceSceneCapture2D::ManagedProjectionType");
static_assert(offsetof(UNiagaraDataInterfaceSceneCapture2D, ManagedFOVAngle) == 168, "Offset mismatch for UNiagaraDataInterfaceSceneCapture2D::ManagedFOVAngle");
static_assert(offsetof(UNiagaraDataInterfaceSceneCapture2D, ManagedOrthoWidth) == 172, "Offset mismatch for UNiagaraDataInterfaceSceneCapture2D::ManagedOrthoWidth");
static_assert(offsetof(UNiagaraDataInterfaceSceneCapture2D, ManagedLODDistanceFactor) == 176, "Offset mismatch for UNiagaraDataInterfaceSceneCapture2D::ManagedLODDistanceFactor");
static_assert(offsetof(UNiagaraDataInterfaceSceneCapture2D, bManagedCaptureEveryFrame) == 180, "Offset mismatch for UNiagaraDataInterfaceSceneCapture2D::bManagedCaptureEveryFrame");
static_assert(offsetof(UNiagaraDataInterfaceSceneCapture2D, bManagedCaptureOnMovement) == 181, "Offset mismatch for UNiagaraDataInterfaceSceneCapture2D::bManagedCaptureOnMovement");
static_assert(offsetof(UNiagaraDataInterfaceSceneCapture2D, bManagedHideAttachComponent) == 182, "Offset mismatch for UNiagaraDataInterfaceSceneCapture2D::bManagedHideAttachComponent");
static_assert(offsetof(UNiagaraDataInterfaceSceneCapture2D, ManagedHiddenActors) == 184, "Offset mismatch for UNiagaraDataInterfaceSceneCapture2D::ManagedHiddenActors");
static_assert(offsetof(UNiagaraDataInterfaceSceneCapture2D, ManagedShowOnlyActors) == 200, "Offset mismatch for UNiagaraDataInterfaceSceneCapture2D::ManagedShowOnlyActors");
static_assert(offsetof(UNiagaraDataInterfaceSceneCapture2D, ManagedCaptureComponents) == 224, "Offset mismatch for UNiagaraDataInterfaceSceneCapture2D::ManagedCaptureComponents");

// /Script/Niagara.NiagaraDataInterfaceSimCacheReader
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceSimCacheReader
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SimCacheBinding[0x18]; // 0x0038 (Size: 0x18, Type: StructProperty)
    void* SimCache; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    FName EmitterBinding; // 0x0058 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceSimCacheReader, SimCacheBinding) == 56, "Offset mismatch for UNiagaraDataInterfaceSimCacheReader::SimCacheBinding");
static_assert(offsetof(UNiagaraDataInterfaceSimCacheReader, SimCache) == 80, "Offset mismatch for UNiagaraDataInterfaceSimCacheReader::SimCache");
static_assert(offsetof(UNiagaraDataInterfaceSimCacheReader, EmitterBinding) == 88, "Offset mismatch for UNiagaraDataInterfaceSimCacheReader::EmitterBinding");

// /Script/Niagara.NiagaraDataInterfaceSimpleCounter
// Kind: Class; super: NiagaraDataInterfaceRWBase
class UNiagaraDataInterfaceSimpleCounter
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t GpuSyncMode; // 0x0040 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0041
    std::int32_t InitialValue; // 0x0044 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceSimpleCounter, GpuSyncMode) == 64, "Offset mismatch for UNiagaraDataInterfaceSimpleCounter::GpuSyncMode");
static_assert(offsetof(UNiagaraDataInterfaceSimpleCounter, InitialValue) == 68, "Offset mismatch for UNiagaraDataInterfaceSimpleCounter::InitialValue");

// /Script/Niagara.NiagaraDataInterfaceSkeletalMesh
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceSkeletalMesh
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SourceMode; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    void* DefaultMesh; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SoftSourceActor[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    TArray<void*> ComponentTags; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    void* OptionalComponentClass; // 0x0078 (Size: 0x8, Type: ClassProperty)
    TWeakObjectPtr<void> SourceComponent; // 0x0080 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t MeshUserParameter[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t SkinningMode; // 0x00A0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00A1
    TArray<void*> SamplingRegions; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    std::int32_t WholeMeshLOD; // 0x00B8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x00BC
    TArray<void*> FilteredBones; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> FilteredSockets; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ExcludeBoneName[0x4]; // 0x00E0 (Size: 0x4, Type: NameProperty)
    std::uint8_t bExcludeBone; // 0x00E4 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x00E5
    std::int32_t UVSetIndex; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::uint8_t bRequireCurrentFrameData; // 0x00EC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bReadDeformedGeometry; // 0x00ED (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SourceMode) == 56, "Offset mismatch for UNiagaraDataInterfaceSkeletalMesh::SourceMode");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, DefaultMesh) == 64, "Offset mismatch for UNiagaraDataInterfaceSkeletalMesh::DefaultMesh");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SoftSourceActor) == 72, "Offset mismatch for UNiagaraDataInterfaceSkeletalMesh::SoftSourceActor");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, ComponentTags) == 104, "Offset mismatch for UNiagaraDataInterfaceSkeletalMesh::ComponentTags");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, OptionalComponentClass) == 120, "Offset mismatch for UNiagaraDataInterfaceSkeletalMesh::OptionalComponentClass");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SourceComponent) == 128, "Offset mismatch for UNiagaraDataInterfaceSkeletalMesh::SourceComponent");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, MeshUserParameter) == 136, "Offset mismatch for UNiagaraDataInterfaceSkeletalMesh::MeshUserParameter");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SkinningMode) == 160, "Offset mismatch for UNiagaraDataInterfaceSkeletalMesh::SkinningMode");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SamplingRegions) == 168, "Offset mismatch for UNiagaraDataInterfaceSkeletalMesh::SamplingRegions");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, WholeMeshLOD) == 184, "Offset mismatch for UNiagaraDataInterfaceSkeletalMesh::WholeMeshLOD");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, FilteredBones) == 192, "Offset mismatch for UNiagaraDataInterfaceSkeletalMesh::FilteredBones");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, FilteredSockets) == 208, "Offset mismatch for UNiagaraDataInterfaceSkeletalMesh::FilteredSockets");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, ExcludeBoneName) == 224, "Offset mismatch for UNiagaraDataInterfaceSkeletalMesh::ExcludeBoneName");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, bExcludeBone) == 228, "Offset mismatch for UNiagaraDataInterfaceSkeletalMesh::bExcludeBone");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, UVSetIndex) == 232, "Offset mismatch for UNiagaraDataInterfaceSkeletalMesh::UVSetIndex");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, bRequireCurrentFrameData) == 236, "Offset mismatch for UNiagaraDataInterfaceSkeletalMesh::bRequireCurrentFrameData");
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, bReadDeformedGeometry) == 237, "Offset mismatch for UNiagaraDataInterfaceSkeletalMesh::bReadDeformedGeometry");

// /Script/Niagara.NiagaraDataInterfaceSocketReader
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceSocketReader
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SourceMode; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    TArray<void*> FilteredSockets; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SourceActor[0x18]; // 0x0050 (Size: 0x18, Type: LazyObjectProperty)
    void* SourceAsset; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* AttachComponentClass; // 0x0070 (Size: 0x8, Type: ClassProperty)
    FName AttachComponentTag; // 0x0078 (Size: 0x8, Type: NameProperty)
    std::uint8_t ObjectParameterBinding[0x18]; // 0x0080 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUpdateSocketsPerFrame; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bRequireCurrentFrameData; // 0x0099 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceSocketReader, SourceMode) == 56, "Offset mismatch for UNiagaraDataInterfaceSocketReader::SourceMode");
static_assert(offsetof(UNiagaraDataInterfaceSocketReader, FilteredSockets) == 64, "Offset mismatch for UNiagaraDataInterfaceSocketReader::FilteredSockets");
static_assert(offsetof(UNiagaraDataInterfaceSocketReader, SourceActor) == 80, "Offset mismatch for UNiagaraDataInterfaceSocketReader::SourceActor");
static_assert(offsetof(UNiagaraDataInterfaceSocketReader, SourceAsset) == 104, "Offset mismatch for UNiagaraDataInterfaceSocketReader::SourceAsset");
static_assert(offsetof(UNiagaraDataInterfaceSocketReader, AttachComponentClass) == 112, "Offset mismatch for UNiagaraDataInterfaceSocketReader::AttachComponentClass");
static_assert(offsetof(UNiagaraDataInterfaceSocketReader, AttachComponentTag) == 120, "Offset mismatch for UNiagaraDataInterfaceSocketReader::AttachComponentTag");
static_assert(offsetof(UNiagaraDataInterfaceSocketReader, ObjectParameterBinding) == 128, "Offset mismatch for UNiagaraDataInterfaceSocketReader::ObjectParameterBinding");
static_assert(offsetof(UNiagaraDataInterfaceSocketReader, bUpdateSocketsPerFrame) == 152, "Offset mismatch for UNiagaraDataInterfaceSocketReader::bUpdateSocketsPerFrame");
static_assert(offsetof(UNiagaraDataInterfaceSocketReader, bRequireCurrentFrameData) == 153, "Offset mismatch for UNiagaraDataInterfaceSocketReader::bRequireCurrentFrameData");

// /Script/Niagara.NiagaraDataInterfaceSparseVolumeTexture
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceSparseVolumeTexture
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* SparseVolumeTexture; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SparseVolumeTextureUserParameter[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t BlockingStreamingRequests; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceSparseVolumeTexture, SparseVolumeTexture) == 56, "Offset mismatch for UNiagaraDataInterfaceSparseVolumeTexture::SparseVolumeTexture");
static_assert(offsetof(UNiagaraDataInterfaceSparseVolumeTexture, SparseVolumeTextureUserParameter) == 64, "Offset mismatch for UNiagaraDataInterfaceSparseVolumeTexture::SparseVolumeTextureUserParameter");
static_assert(offsetof(UNiagaraDataInterfaceSparseVolumeTexture, BlockingStreamingRequests) == 88, "Offset mismatch for UNiagaraDataInterfaceSparseVolumeTexture::BlockingStreamingRequests");

// /Script/Niagara.NiagaraDataInterfaceSpline
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceSpline
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SourceMode; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    std::uint8_t SoftSourceActor[0x20]; // 0x0040 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t SplineUserParameter[0x18]; // 0x0060 (Size: 0x18, Type: StructProperty)
    std::uint8_t bUseLUT; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0079
    std::int32_t NumLUTSteps; // 0x007C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceSpline, SourceMode) == 56, "Offset mismatch for UNiagaraDataInterfaceSpline::SourceMode");
static_assert(offsetof(UNiagaraDataInterfaceSpline, SoftSourceActor) == 64, "Offset mismatch for UNiagaraDataInterfaceSpline::SoftSourceActor");
static_assert(offsetof(UNiagaraDataInterfaceSpline, SplineUserParameter) == 96, "Offset mismatch for UNiagaraDataInterfaceSpline::SplineUserParameter");
static_assert(offsetof(UNiagaraDataInterfaceSpline, bUseLUT) == 120, "Offset mismatch for UNiagaraDataInterfaceSpline::bUseLUT");
static_assert(offsetof(UNiagaraDataInterfaceSpline, NumLUTSteps) == 124, "Offset mismatch for UNiagaraDataInterfaceSpline::NumLUTSteps");

// /Script/Niagara.NiagaraDataInterfaceSpriteRendererInfo
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceSpriteRendererInfo
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* SpriteRenderer; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceSpriteRendererInfo, SpriteRenderer) == 56, "Offset mismatch for UNiagaraDataInterfaceSpriteRendererInfo::SpriteRenderer");

// /Script/Niagara.NiagaraDataInterfaceStaticMesh
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceStaticMesh
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SourceMode; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    void* DefaultMesh; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SoftSourceActor[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    TWeakObjectPtr<void> SourceComponent; // 0x0068 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t SectionFilter[0x10]; // 0x0070 (Size: 0x10, Type: StructProperty)
    std::uint8_t bCaptureTransformsPerFrame; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bUsePhysicsBodyVelocity; // 0x0081 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowSamplingFromStreamingLODs; // 0x0082 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x0083
    std::int32_t LODIndex; // 0x0084 (Size: 0x4, Type: IntProperty)
    std::uint8_t LODIndexUserParameter[0x18]; // 0x0088 (Size: 0x18, Type: StructProperty)
    std::uint8_t MeshParameterBinding[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    std::int32_t InstanceIndex; // 0x00B8 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x00BC
    TArray<void*> FilteredSockets; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SourceMode) == 56, "Offset mismatch for UNiagaraDataInterfaceStaticMesh::SourceMode");
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, DefaultMesh) == 64, "Offset mismatch for UNiagaraDataInterfaceStaticMesh::DefaultMesh");
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SoftSourceActor) == 72, "Offset mismatch for UNiagaraDataInterfaceStaticMesh::SoftSourceActor");
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SourceComponent) == 104, "Offset mismatch for UNiagaraDataInterfaceStaticMesh::SourceComponent");
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SectionFilter) == 112, "Offset mismatch for UNiagaraDataInterfaceStaticMesh::SectionFilter");
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, bCaptureTransformsPerFrame) == 128, "Offset mismatch for UNiagaraDataInterfaceStaticMesh::bCaptureTransformsPerFrame");
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, bUsePhysicsBodyVelocity) == 129, "Offset mismatch for UNiagaraDataInterfaceStaticMesh::bUsePhysicsBodyVelocity");
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, bAllowSamplingFromStreamingLODs) == 130, "Offset mismatch for UNiagaraDataInterfaceStaticMesh::bAllowSamplingFromStreamingLODs");
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, LODIndex) == 132, "Offset mismatch for UNiagaraDataInterfaceStaticMesh::LODIndex");
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, LODIndexUserParameter) == 136, "Offset mismatch for UNiagaraDataInterfaceStaticMesh::LODIndexUserParameter");
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, MeshParameterBinding) == 160, "Offset mismatch for UNiagaraDataInterfaceStaticMesh::MeshParameterBinding");
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, InstanceIndex) == 184, "Offset mismatch for UNiagaraDataInterfaceStaticMesh::InstanceIndex");
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, FilteredSockets) == 192, "Offset mismatch for UNiagaraDataInterfaceStaticMesh::FilteredSockets");

// /Script/Niagara.NiagaraDataInterfaceStaticMeshIndirect
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceStaticMeshIndirect
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t CompiledData[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceStaticMeshIndirect, CompiledData) == 56, "Offset mismatch for UNiagaraDataInterfaceStaticMeshIndirect::CompiledData");

// /Script/Niagara.NiagaraDataInterfaceTexture
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceTexture
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Texture; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TextureUserParameter[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceTexture, Texture) == 56, "Offset mismatch for UNiagaraDataInterfaceTexture::Texture");
static_assert(offsetof(UNiagaraDataInterfaceTexture, TextureUserParameter) == 64, "Offset mismatch for UNiagaraDataInterfaceTexture::TextureUserParameter");

// /Script/Niagara.NiagaraDataInterfaceUObjectPropertyReader
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceUObjectPropertyReader
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t SourceMode; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    std::uint8_t UObjectParameterBinding[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    TArray<void*> PropertyRemap; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SourceActor[0x20]; // 0x0068 (Size: 0x20, Type: SoftObjectProperty)
    void* SourceActorComponentClass; // 0x0088 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceUObjectPropertyReader, SourceMode) == 56, "Offset mismatch for UNiagaraDataInterfaceUObjectPropertyReader::SourceMode");
static_assert(offsetof(UNiagaraDataInterfaceUObjectPropertyReader, UObjectParameterBinding) == 64, "Offset mismatch for UNiagaraDataInterfaceUObjectPropertyReader::UObjectParameterBinding");
static_assert(offsetof(UNiagaraDataInterfaceUObjectPropertyReader, PropertyRemap) == 88, "Offset mismatch for UNiagaraDataInterfaceUObjectPropertyReader::PropertyRemap");
static_assert(offsetof(UNiagaraDataInterfaceUObjectPropertyReader, SourceActor) == 104, "Offset mismatch for UNiagaraDataInterfaceUObjectPropertyReader::SourceActor");
static_assert(offsetof(UNiagaraDataInterfaceUObjectPropertyReader, SourceActorComponentClass) == 136, "Offset mismatch for UNiagaraDataInterfaceUObjectPropertyReader::SourceActorComponentClass");

// /Script/Niagara.NiagaraDataInterfaceVector2DCurve
// Kind: Class; super: NiagaraDataInterfaceCurveBase
class UNiagaraDataInterfaceVector2DCurve
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t XCurve[0x40]; // 0x0070 (Size: 0x40, Type: StructProperty)
    std::uint8_t YCurve[0x1]; // 0x00B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceVector2DCurve, XCurve) == 112, "Offset mismatch for UNiagaraDataInterfaceVector2DCurve::XCurve");
static_assert(offsetof(UNiagaraDataInterfaceVector2DCurve, YCurve) == 176, "Offset mismatch for UNiagaraDataInterfaceVector2DCurve::YCurve");

// /Script/Niagara.NiagaraDataInterfaceVector4Curve
// Kind: Class; super: NiagaraDataInterfaceCurveBase
class UNiagaraDataInterfaceVector4Curve
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t XCurve[0x40]; // 0x0070 (Size: 0x40, Type: StructProperty)
    std::uint8_t YCurve[0x40]; // 0x00B0 (Size: 0x40, Type: StructProperty)
    std::uint8_t ZCurve[0x40]; // 0x00F0 (Size: 0x40, Type: StructProperty)
    std::uint8_t WCurve[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, XCurve) == 112, "Offset mismatch for UNiagaraDataInterfaceVector4Curve::XCurve");
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, YCurve) == 176, "Offset mismatch for UNiagaraDataInterfaceVector4Curve::YCurve");
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, ZCurve) == 240, "Offset mismatch for UNiagaraDataInterfaceVector4Curve::ZCurve");
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, WCurve) == 304, "Offset mismatch for UNiagaraDataInterfaceVector4Curve::WCurve");

// /Script/Niagara.NiagaraDataInterfaceVectorCurve
// Kind: Class; super: NiagaraDataInterfaceCurveBase
class UNiagaraDataInterfaceVectorCurve
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t XCurve[0x40]; // 0x0070 (Size: 0x40, Type: StructProperty)
    std::uint8_t YCurve[0x40]; // 0x00B0 (Size: 0x40, Type: StructProperty)
    std::uint8_t ZCurve[0x1]; // 0x00F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceVectorCurve, XCurve) == 112, "Offset mismatch for UNiagaraDataInterfaceVectorCurve::XCurve");
static_assert(offsetof(UNiagaraDataInterfaceVectorCurve, YCurve) == 176, "Offset mismatch for UNiagaraDataInterfaceVectorCurve::YCurve");
static_assert(offsetof(UNiagaraDataInterfaceVectorCurve, ZCurve) == 240, "Offset mismatch for UNiagaraDataInterfaceVectorCurve::ZCurve");

// /Script/Niagara.NiagaraDataInterfaceVectorField
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceVectorField
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Field; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bTileX; // 0x0040 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTileY; // 0x0041 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bTileZ; // 0x0042 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceVectorField, Field) == 56, "Offset mismatch for UNiagaraDataInterfaceVectorField::Field");
static_assert(offsetof(UNiagaraDataInterfaceVectorField, bTileX) == 64, "Offset mismatch for UNiagaraDataInterfaceVectorField::bTileX");
static_assert(offsetof(UNiagaraDataInterfaceVectorField, bTileY) == 65, "Offset mismatch for UNiagaraDataInterfaceVectorField::bTileY");
static_assert(offsetof(UNiagaraDataInterfaceVectorField, bTileZ) == 66, "Offset mismatch for UNiagaraDataInterfaceVectorField::bTileZ");

// /Script/Niagara.NiagaraDataInterfaceVirtualTexture
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceVirtualTexture
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Texture; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TextureUserParameter[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceVirtualTexture, Texture) == 56, "Offset mismatch for UNiagaraDataInterfaceVirtualTexture::Texture");
static_assert(offsetof(UNiagaraDataInterfaceVirtualTexture, TextureUserParameter) == 64, "Offset mismatch for UNiagaraDataInterfaceVirtualTexture::TextureUserParameter");

// /Script/Niagara.NiagaraDataInterfaceVirtualTextureSample
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceVirtualTextureSample
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Texture; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TextureUserParameter[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceVirtualTextureSample, Texture) == 56, "Offset mismatch for UNiagaraDataInterfaceVirtualTextureSample::Texture");
static_assert(offsetof(UNiagaraDataInterfaceVirtualTextureSample, TextureUserParameter) == 64, "Offset mismatch for UNiagaraDataInterfaceVirtualTextureSample::TextureUserParameter");

// /Script/Niagara.NiagaraDataInterfaceVolumeCache
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceVolumeCache
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* VolumeCache; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceVolumeCache, VolumeCache) == 56, "Offset mismatch for UNiagaraDataInterfaceVolumeCache::VolumeCache");

// /Script/Niagara.NiagaraDataInterfaceVolumeTexture
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceVolumeTexture
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Texture; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TextureUserParameter[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceVolumeTexture, Texture) == 56, "Offset mismatch for UNiagaraDataInterfaceVolumeTexture::Texture");
static_assert(offsetof(UNiagaraDataInterfaceVolumeTexture, TextureUserParameter) == 64, "Offset mismatch for UNiagaraDataInterfaceVolumeTexture::TextureUserParameter");

// /Script/Niagara.NiagaraDataManager
// Kind: Class; super: Object
class UNiagaraDataManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraDataManager_StaticMesh
// Kind: Class; super: NiagaraDataManager
class UNiagaraDataManager_StaticMesh
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraDebugHUDSettings
// Kind: Class; super: Object
class UNiagaraDebugHUDSettings
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    std::uint8_t Data[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDebugHUDSettings, Data) == 72, "Offset mismatch for UNiagaraDebugHUDSettings::Data");

// /Script/Niagara.NiagaraDecalRendererProperties
// Kind: Class; super: NiagaraRendererProperties
class UNiagaraDecalRendererProperties
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    void* Material; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MaterialParameterBinding[0x8]; // 0x00A0 (Size: 0x8, Type: StructProperty)
    std::uint8_t SourceMode; // 0x00A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00A9
    std::int32_t RendererVisibility; // 0x00AC (Size: 0x4, Type: IntProperty)
    float DecalScreenSizeFade; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PositionBinding[0x14]; // 0x00B4 (Size: 0x14, Type: StructProperty)
    std::uint8_t DecalOrientationBinding[0x14]; // 0x00C8 (Size: 0x14, Type: StructProperty)
    std::uint8_t DecalSizeBinding[0x14]; // 0x00DC (Size: 0x14, Type: StructProperty)
    std::uint8_t DecalFadeBinding[0x14]; // 0x00F0 (Size: 0x14, Type: StructProperty)
    std::uint8_t DecalSortOrderBinding[0x14]; // 0x0104 (Size: 0x14, Type: StructProperty)
    std::uint8_t DecalColorBinding[0x14]; // 0x0118 (Size: 0x14, Type: StructProperty)
    std::uint8_t DecalVisibleBinding[0x14]; // 0x012C (Size: 0x14, Type: StructProperty)
    std::uint8_t RendererVisibilityTagBinding[0x18]; // 0x0140 (Size: 0x18, Type: StructProperty)
    std::uint8_t MaterialParameters[0x1]; // 0x0158 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraDecalRendererProperties, Material) == 152, "Offset mismatch for UNiagaraDecalRendererProperties::Material");
static_assert(offsetof(UNiagaraDecalRendererProperties, MaterialParameterBinding) == 160, "Offset mismatch for UNiagaraDecalRendererProperties::MaterialParameterBinding");
static_assert(offsetof(UNiagaraDecalRendererProperties, SourceMode) == 168, "Offset mismatch for UNiagaraDecalRendererProperties::SourceMode");
static_assert(offsetof(UNiagaraDecalRendererProperties, RendererVisibility) == 172, "Offset mismatch for UNiagaraDecalRendererProperties::RendererVisibility");
static_assert(offsetof(UNiagaraDecalRendererProperties, DecalScreenSizeFade) == 176, "Offset mismatch for UNiagaraDecalRendererProperties::DecalScreenSizeFade");
static_assert(offsetof(UNiagaraDecalRendererProperties, PositionBinding) == 180, "Offset mismatch for UNiagaraDecalRendererProperties::PositionBinding");
static_assert(offsetof(UNiagaraDecalRendererProperties, DecalOrientationBinding) == 200, "Offset mismatch for UNiagaraDecalRendererProperties::DecalOrientationBinding");
static_assert(offsetof(UNiagaraDecalRendererProperties, DecalSizeBinding) == 220, "Offset mismatch for UNiagaraDecalRendererProperties::DecalSizeBinding");
static_assert(offsetof(UNiagaraDecalRendererProperties, DecalFadeBinding) == 240, "Offset mismatch for UNiagaraDecalRendererProperties::DecalFadeBinding");
static_assert(offsetof(UNiagaraDecalRendererProperties, DecalSortOrderBinding) == 260, "Offset mismatch for UNiagaraDecalRendererProperties::DecalSortOrderBinding");
static_assert(offsetof(UNiagaraDecalRendererProperties, DecalColorBinding) == 280, "Offset mismatch for UNiagaraDecalRendererProperties::DecalColorBinding");
static_assert(offsetof(UNiagaraDecalRendererProperties, DecalVisibleBinding) == 300, "Offset mismatch for UNiagaraDecalRendererProperties::DecalVisibleBinding");
static_assert(offsetof(UNiagaraDecalRendererProperties, RendererVisibilityTagBinding) == 320, "Offset mismatch for UNiagaraDecalRendererProperties::RendererVisibilityTagBinding");
static_assert(offsetof(UNiagaraDecalRendererProperties, MaterialParameters) == 344, "Offset mismatch for UNiagaraDecalRendererProperties::MaterialParameters");

// /Script/Niagara.NiagaraEditorDataBase
// Kind: Class; super: Object
class UNiagaraEditorDataBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraEditorParametersAdapterBase
// Kind: Class; super: Object
class UNiagaraEditorParametersAdapterBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraEditorPreviewActor
// Kind: Class; super: Actor
class UNiagaraEditorPreviewActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    double MotionDuration; // 0x0270 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t PlaybackType; // 0x0278 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0279
    std::uint8_t MotionType; // 0x027C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x027D
    double ShapeTension; // 0x0280 (Size: 0x8, Type: DoubleProperty)
    double ShapeScale; // 0x0288 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t ShapeRotation[0x18]; // 0x0290 (Size: 0x18, Type: StructProperty)
    TArray<void*> CustomShapePoints; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
    double CircleRadius; // 0x02B8 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t CircleEndRadius[0x10]; // 0x02C0 (Size: 0x10, Type: OptionalProperty)
    std::uint8_t CircleRotationRate[0x10]; // 0x02D0 (Size: 0x10, Type: OptionalProperty)
    std::uint8_t SquareSize[0x10]; // 0x02E0 (Size: 0x10, Type: StructProperty)
    std::uint8_t TriangleSize[0x10]; // 0x02F0 (Size: 0x10, Type: StructProperty)
    std::uint8_t RotationMode; // 0x0300 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0301
    void* NiagaraComponent; // 0x0308 (Size: 0x8, Type: ObjectProperty)
    void* ArrowComponent; // 0x0310 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNiagaraEditorPreviewActor, MotionDuration) == 624, "Offset mismatch for UNiagaraEditorPreviewActor::MotionDuration");
static_assert(offsetof(UNiagaraEditorPreviewActor, PlaybackType) == 632, "Offset mismatch for UNiagaraEditorPreviewActor::PlaybackType");
static_assert(offsetof(UNiagaraEditorPreviewActor, MotionType) == 636, "Offset mismatch for UNiagaraEditorPreviewActor::MotionType");
static_assert(offsetof(UNiagaraEditorPreviewActor, ShapeTension) == 640, "Offset mismatch for UNiagaraEditorPreviewActor::ShapeTension");
static_assert(offsetof(UNiagaraEditorPreviewActor, ShapeScale) == 648, "Offset mismatch for UNiagaraEditorPreviewActor::ShapeScale");
static_assert(offsetof(UNiagaraEditorPreviewActor, ShapeRotation) == 656, "Offset mismatch for UNiagaraEditorPreviewActor::ShapeRotation");
static_assert(offsetof(UNiagaraEditorPreviewActor, CustomShapePoints) == 680, "Offset mismatch for UNiagaraEditorPreviewActor::CustomShapePoints");
static_assert(offsetof(UNiagaraEditorPreviewActor, CircleRadius) == 696, "Offset mismatch for UNiagaraEditorPreviewActor::CircleRadius");
static_assert(offsetof(UNiagaraEditorPreviewActor, CircleEndRadius) == 704, "Offset mismatch for UNiagaraEditorPreviewActor::CircleEndRadius");
static_assert(offsetof(UNiagaraEditorPreviewActor, CircleRotationRate) == 720, "Offset mismatch for UNiagaraEditorPreviewActor::CircleRotationRate");
static_assert(offsetof(UNiagaraEditorPreviewActor, SquareSize) == 736, "Offset mismatch for UNiagaraEditorPreviewActor::SquareSize");
static_assert(offsetof(UNiagaraEditorPreviewActor, TriangleSize) == 752, "Offset mismatch for UNiagaraEditorPreviewActor::TriangleSize");
static_assert(offsetof(UNiagaraEditorPreviewActor, RotationMode) == 768, "Offset mismatch for UNiagaraEditorPreviewActor::RotationMode");
static_assert(offsetof(UNiagaraEditorPreviewActor, NiagaraComponent) == 776, "Offset mismatch for UNiagaraEditorPreviewActor::NiagaraComponent");
static_assert(offsetof(UNiagaraEditorPreviewActor, ArrowComponent) == 784, "Offset mismatch for UNiagaraEditorPreviewActor::ArrowComponent");

// /Script/Niagara.NiagaraEffectType
// Kind: Class; super: Object
class UNiagaraEffectType
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bAllowCullingForLocalPlayers; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0029
    std::uint8_t UpdateFrequency; // 0x002C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x002D
    std::uint8_t CullReaction; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0031
    void* SignificanceHandler; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> DetailLevelScalabilitySettings; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SystemScalabilitySettings[0x10]; // 0x0050 (Size: 0x10, Type: StructProperty)
    std::uint8_t EmitterScalabilitySettings[0x10]; // 0x0060 (Size: 0x10, Type: StructProperty)
    void* ReadinessSettings; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ReadinessProfile[0x10]; // 0x0078 (Size: 0x10, Type: StructProperty)
    void* PerformanceBaselineController; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t PerfBaselineStats[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    std::uint8_t PerfBaselineVersion[0x1]; // 0x00A0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraEffectType, bAllowCullingForLocalPlayers) == 40, "Offset mismatch for UNiagaraEffectType::bAllowCullingForLocalPlayers");
static_assert(offsetof(UNiagaraEffectType, UpdateFrequency) == 44, "Offset mismatch for UNiagaraEffectType::UpdateFrequency");
static_assert(offsetof(UNiagaraEffectType, CullReaction) == 48, "Offset mismatch for UNiagaraEffectType::CullReaction");
static_assert(offsetof(UNiagaraEffectType, SignificanceHandler) == 56, "Offset mismatch for UNiagaraEffectType::SignificanceHandler");
static_assert(offsetof(UNiagaraEffectType, DetailLevelScalabilitySettings) == 64, "Offset mismatch for UNiagaraEffectType::DetailLevelScalabilitySettings");
static_assert(offsetof(UNiagaraEffectType, SystemScalabilitySettings) == 80, "Offset mismatch for UNiagaraEffectType::SystemScalabilitySettings");
static_assert(offsetof(UNiagaraEffectType, EmitterScalabilitySettings) == 96, "Offset mismatch for UNiagaraEffectType::EmitterScalabilitySettings");
static_assert(offsetof(UNiagaraEffectType, ReadinessSettings) == 112, "Offset mismatch for UNiagaraEffectType::ReadinessSettings");
static_assert(offsetof(UNiagaraEffectType, ReadinessProfile) == 120, "Offset mismatch for UNiagaraEffectType::ReadinessProfile");
static_assert(offsetof(UNiagaraEffectType, PerformanceBaselineController) == 136, "Offset mismatch for UNiagaraEffectType::PerformanceBaselineController");
static_assert(offsetof(UNiagaraEffectType, PerfBaselineStats) == 144, "Offset mismatch for UNiagaraEffectType::PerfBaselineStats");
static_assert(offsetof(UNiagaraEffectType, PerfBaselineVersion) == 160, "Offset mismatch for UNiagaraEffectType::PerfBaselineVersion");

// /Script/Niagara.NiagaraEmitter
// Kind: Class; super: NiagaraEmitterBase
class UNiagaraEmitter
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    std::uint8_t ExposedVersion[0x10]; // 0x0040 (Size: 0x10, Type: StructProperty)
    std::uint8_t bVersioningEnabled; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0051
    TArray<void*> VersionData; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraEmitter, ExposedVersion) == 64, "Offset mismatch for UNiagaraEmitter::ExposedVersion");
static_assert(offsetof(UNiagaraEmitter, bVersioningEnabled) == 80, "Offset mismatch for UNiagaraEmitter::bVersioningEnabled");
static_assert(offsetof(UNiagaraEmitter, VersionData) == 88, "Offset mismatch for UNiagaraEmitter::VersionData");

// /Script/Niagara.NiagaraEmitterBase
// Kind: Class; super: Object
class UNiagaraEmitterBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString UniqueEmitterName; // 0x0028 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UNiagaraEmitterBase, UniqueEmitterName) == 40, "Offset mismatch for UNiagaraEmitterBase::UniqueEmitterName");

// /Script/Niagara.NiagaraEventReceiverEmitterAction
// Kind: Class; super: Object
class UNiagaraEventReceiverEmitterAction
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// Kind: Class; super: NiagaraEventReceiverEmitterAction
class UNiagaraEventReceiverEmitterAction_SpawnParticles
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint32_t NumParticles; // 0x0028 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UNiagaraEventReceiverEmitterAction_SpawnParticles, NumParticles) == 40, "Offset mismatch for UNiagaraEventReceiverEmitterAction_SpawnParticles::NumParticles");

// /Script/Niagara.NiagaraFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UNiagaraFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraLensEffectBase
// Kind: Class; super: NiagaraActor
class UNiagaraLensEffectBase
{
public:
    std::uint8_t Pad_0000[0x290]; // 0x0000
    std::uint8_t DesiredRelativeTransform[0x60]; // 0x0290 (Size: 0x60, Type: StructProperty)
    float BaseAuthoredFOV; // 0x02F0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bAllowMultipleInstances; // 0x02F4 (Size: 0x1, Type: BoolProperty)
    // 0x02F4 BoolProperty bResetWhenRetriggered (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x02F5
    TArray<void*> EmittersToTreatAsSame; // 0x02F8 (Size: 0x10, Type: ArrayProperty)
    void* OwningCameraManager; // 0x0308 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNiagaraLensEffectBase, DesiredRelativeTransform) == 656, "Offset mismatch for UNiagaraLensEffectBase::DesiredRelativeTransform");
static_assert(offsetof(UNiagaraLensEffectBase, BaseAuthoredFOV) == 752, "Offset mismatch for UNiagaraLensEffectBase::BaseAuthoredFOV");
static_assert(offsetof(UNiagaraLensEffectBase, bAllowMultipleInstances) == 756, "Offset mismatch for UNiagaraLensEffectBase::bAllowMultipleInstances");
static_assert(offsetof(UNiagaraLensEffectBase, EmittersToTreatAsSame) == 760, "Offset mismatch for UNiagaraLensEffectBase::EmittersToTreatAsSame");
static_assert(offsetof(UNiagaraLensEffectBase, OwningCameraManager) == 776, "Offset mismatch for UNiagaraLensEffectBase::OwningCameraManager");

// /Script/Niagara.NiagaraLightRendererProperties
// Kind: Class; super: NiagaraRendererProperties
class UNiagaraLightRendererProperties
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t SourceMode; // 0x0098 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0099
    std::uint8_t bAffectsTranslucency; // 0x009C (Size: 0x1, Type: BoolProperty)
    // 0x009C BoolProperty bAllowMegaLights (shared storage)
    // 0x009C BoolProperty bAlphaScalesBrightness (shared storage)
    // 0x009C BoolProperty bMegaLightsCastShadows (shared storage)
    // 0x009C BoolProperty bOverrideInverseExposureBlend (shared storage)
    // 0x009C BoolProperty bUseInverseSquaredFalloff (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x009D
    float RadiusScale; // 0x00A0 (Size: 0x4, Type: FloatProperty)
    float DefaultExponent; // 0x00A4 (Size: 0x4, Type: FloatProperty)
    float SpecularScale; // 0x00A8 (Size: 0x4, Type: FloatProperty)
    float DiffuseScale; // 0x00AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t ColorAdd[0xC]; // 0x00B0 (Size: 0xC, Type: StructProperty)
    float InverseExposureBlend; // 0x00BC (Size: 0x4, Type: FloatProperty)
    std::int32_t RendererVisibility; // 0x00C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t LightRenderingEnabledBinding[0x14]; // 0x00C4 (Size: 0x14, Type: StructProperty)
    std::uint8_t LightExponentBinding[0x14]; // 0x00D8 (Size: 0x14, Type: StructProperty)
    std::uint8_t PositionBinding[0x14]; // 0x00EC (Size: 0x14, Type: StructProperty)
    std::uint8_t ColorBinding[0x14]; // 0x0100 (Size: 0x14, Type: StructProperty)
    std::uint8_t RadiusBinding[0x14]; // 0x0114 (Size: 0x14, Type: StructProperty)
    std::uint8_t VolumetricScatteringBinding[0x14]; // 0x0128 (Size: 0x14, Type: StructProperty)
    std::uint8_t RendererVisibilityTagBinding[0x14]; // 0x013C (Size: 0x14, Type: StructProperty)
    std::uint8_t SpecularScaleBinding[0x14]; // 0x0150 (Size: 0x14, Type: StructProperty)
    std::uint8_t DiffuseScaleBinding[0x1]; // 0x0164 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraLightRendererProperties, SourceMode) == 152, "Offset mismatch for UNiagaraLightRendererProperties::SourceMode");
static_assert(offsetof(UNiagaraLightRendererProperties, bAffectsTranslucency) == 156, "Offset mismatch for UNiagaraLightRendererProperties::bAffectsTranslucency");
static_assert(offsetof(UNiagaraLightRendererProperties, RadiusScale) == 160, "Offset mismatch for UNiagaraLightRendererProperties::RadiusScale");
static_assert(offsetof(UNiagaraLightRendererProperties, DefaultExponent) == 164, "Offset mismatch for UNiagaraLightRendererProperties::DefaultExponent");
static_assert(offsetof(UNiagaraLightRendererProperties, SpecularScale) == 168, "Offset mismatch for UNiagaraLightRendererProperties::SpecularScale");
static_assert(offsetof(UNiagaraLightRendererProperties, DiffuseScale) == 172, "Offset mismatch for UNiagaraLightRendererProperties::DiffuseScale");
static_assert(offsetof(UNiagaraLightRendererProperties, ColorAdd) == 176, "Offset mismatch for UNiagaraLightRendererProperties::ColorAdd");
static_assert(offsetof(UNiagaraLightRendererProperties, InverseExposureBlend) == 188, "Offset mismatch for UNiagaraLightRendererProperties::InverseExposureBlend");
static_assert(offsetof(UNiagaraLightRendererProperties, RendererVisibility) == 192, "Offset mismatch for UNiagaraLightRendererProperties::RendererVisibility");
static_assert(offsetof(UNiagaraLightRendererProperties, LightRenderingEnabledBinding) == 196, "Offset mismatch for UNiagaraLightRendererProperties::LightRenderingEnabledBinding");
static_assert(offsetof(UNiagaraLightRendererProperties, LightExponentBinding) == 216, "Offset mismatch for UNiagaraLightRendererProperties::LightExponentBinding");
static_assert(offsetof(UNiagaraLightRendererProperties, PositionBinding) == 236, "Offset mismatch for UNiagaraLightRendererProperties::PositionBinding");
static_assert(offsetof(UNiagaraLightRendererProperties, ColorBinding) == 256, "Offset mismatch for UNiagaraLightRendererProperties::ColorBinding");
static_assert(offsetof(UNiagaraLightRendererProperties, RadiusBinding) == 276, "Offset mismatch for UNiagaraLightRendererProperties::RadiusBinding");
static_assert(offsetof(UNiagaraLightRendererProperties, VolumetricScatteringBinding) == 296, "Offset mismatch for UNiagaraLightRendererProperties::VolumetricScatteringBinding");
static_assert(offsetof(UNiagaraLightRendererProperties, RendererVisibilityTagBinding) == 316, "Offset mismatch for UNiagaraLightRendererProperties::RendererVisibilityTagBinding");
static_assert(offsetof(UNiagaraLightRendererProperties, SpecularScaleBinding) == 336, "Offset mismatch for UNiagaraLightRendererProperties::SpecularScaleBinding");
static_assert(offsetof(UNiagaraLightRendererProperties, DiffuseScaleBinding) == 356, "Offset mismatch for UNiagaraLightRendererProperties::DiffuseScaleBinding");

// /Script/Niagara.NiagaraMeshRendererProperties
// Kind: Class; super: NiagaraRendererProperties
class UNiagaraMeshRendererProperties
{
public:
    std::uint8_t Pad_0000[0xA0]; // 0x0000
    TArray<void*> Meshes; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MeshesBinding[0x8]; // 0x00B0 (Size: 0x8, Type: StructProperty)
    std::uint8_t SourceMode; // 0x00B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SortMode; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t SortPrecision; // 0x00BA (Size: 0x1, Type: EnumProperty)
    std::uint8_t GpuTranslucentLatency; // 0x00BB (Size: 0x1, Type: EnumProperty)
    std::uint8_t bEnableCameraDistanceCulling; // 0x00BC (Size: 0x1, Type: BoolProperty)
    // 0x00BC BoolProperty bEnableFrustumCulling (shared storage)
    // 0x00BC BoolProperty bEnableMeshFlipbook (shared storage)
    // 0x00BC BoolProperty bLockedAxisEnable (shared storage)
    // 0x00BC BoolProperty bOverrideMaterials (shared storage)
    // 0x00BC BoolProperty bSortOnlyWhenTranslucent (shared storage)
    // 0x00BC BoolProperty bSubImageBlend (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x00BD
    std::uint8_t bCastShadows; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x00C1
    TArray<void*> OverrideMaterials; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MICOverrideMaterials; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SubImageSize[0x10]; // 0x00E8 (Size: 0x10, Type: StructProperty)
    std::uint8_t LockedAxis[0x18]; // 0x00F8 (Size: 0x18, Type: StructProperty)
    std::uint8_t MeshBoundsScale[0x18]; // 0x0110 (Size: 0x18, Type: StructProperty)
    std::uint8_t FacingMode; // 0x0128 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LockedAxisSpace; // 0x0129 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x2]; // 0x012A
    float MinCameraDistance; // 0x012C (Size: 0x4, Type: FloatProperty)
    float MaxCameraDistance; // 0x0130 (Size: 0x4, Type: FloatProperty)
    std::uint32_t RendererVisibility; // 0x0134 (Size: 0x4, Type: UInt32Property)
    std::uint8_t PositionBinding[0x14]; // 0x0138 (Size: 0x14, Type: StructProperty)
    std::uint8_t ColorBinding[0x14]; // 0x014C (Size: 0x14, Type: StructProperty)
    std::uint8_t VelocityBinding[0x14]; // 0x0160 (Size: 0x14, Type: StructProperty)
    std::uint8_t MeshOrientationBinding[0x14]; // 0x0174 (Size: 0x14, Type: StructProperty)
    std::uint8_t ScaleBinding[0x14]; // 0x0188 (Size: 0x14, Type: StructProperty)
    std::uint8_t SubImageIndexBinding[0x14]; // 0x019C (Size: 0x14, Type: StructProperty)
    std::uint8_t DynamicMaterialBinding[0x14]; // 0x01B0 (Size: 0x14, Type: StructProperty)
    std::uint8_t DynamicMaterial1Binding[0x14]; // 0x01C4 (Size: 0x14, Type: StructProperty)
    std::uint8_t DynamicMaterial2Binding[0x14]; // 0x01D8 (Size: 0x14, Type: StructProperty)
    std::uint8_t DynamicMaterial3Binding[0x14]; // 0x01EC (Size: 0x14, Type: StructProperty)
    std::uint8_t MaterialRandomBinding[0x14]; // 0x0200 (Size: 0x14, Type: StructProperty)
    std::uint8_t CustomSortingBinding[0x14]; // 0x0214 (Size: 0x14, Type: StructProperty)
    std::uint8_t NormalizedAgeBinding[0x14]; // 0x0228 (Size: 0x14, Type: StructProperty)
    std::uint8_t CameraOffsetBinding[0x14]; // 0x023C (Size: 0x14, Type: StructProperty)
    std::uint8_t RendererVisibilityTagBinding[0x14]; // 0x0250 (Size: 0x14, Type: StructProperty)
    std::uint8_t MeshIndexBinding[0x14]; // 0x0264 (Size: 0x14, Type: StructProperty)
    std::uint8_t MaterialParameters[0x50]; // 0x0278 (Size: 0x50, Type: StructProperty)
    std::uint8_t PrevPositionBinding[0x14]; // 0x02C8 (Size: 0x14, Type: StructProperty)
    std::uint8_t PrevScaleBinding[0x14]; // 0x02DC (Size: 0x14, Type: StructProperty)
    std::uint8_t PrevMeshOrientationBinding[0x14]; // 0x02F0 (Size: 0x14, Type: StructProperty)
    std::uint8_t PrevCameraOffsetBinding[0x14]; // 0x0304 (Size: 0x14, Type: StructProperty)
    std::uint8_t PrevVelocityBinding[0x14]; // 0x0318 (Size: 0x14, Type: StructProperty)
    std::uint32_t MaterialParamValidMask; // 0x032C (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UNiagaraMeshRendererProperties, Meshes) == 160, "Offset mismatch for UNiagaraMeshRendererProperties::Meshes");
static_assert(offsetof(UNiagaraMeshRendererProperties, MeshesBinding) == 176, "Offset mismatch for UNiagaraMeshRendererProperties::MeshesBinding");
static_assert(offsetof(UNiagaraMeshRendererProperties, SourceMode) == 184, "Offset mismatch for UNiagaraMeshRendererProperties::SourceMode");
static_assert(offsetof(UNiagaraMeshRendererProperties, SortMode) == 185, "Offset mismatch for UNiagaraMeshRendererProperties::SortMode");
static_assert(offsetof(UNiagaraMeshRendererProperties, SortPrecision) == 186, "Offset mismatch for UNiagaraMeshRendererProperties::SortPrecision");
static_assert(offsetof(UNiagaraMeshRendererProperties, GpuTranslucentLatency) == 187, "Offset mismatch for UNiagaraMeshRendererProperties::GpuTranslucentLatency");
static_assert(offsetof(UNiagaraMeshRendererProperties, bEnableCameraDistanceCulling) == 188, "Offset mismatch for UNiagaraMeshRendererProperties::bEnableCameraDistanceCulling");
static_assert(offsetof(UNiagaraMeshRendererProperties, bCastShadows) == 192, "Offset mismatch for UNiagaraMeshRendererProperties::bCastShadows");
static_assert(offsetof(UNiagaraMeshRendererProperties, OverrideMaterials) == 200, "Offset mismatch for UNiagaraMeshRendererProperties::OverrideMaterials");
static_assert(offsetof(UNiagaraMeshRendererProperties, MICOverrideMaterials) == 216, "Offset mismatch for UNiagaraMeshRendererProperties::MICOverrideMaterials");
static_assert(offsetof(UNiagaraMeshRendererProperties, SubImageSize) == 232, "Offset mismatch for UNiagaraMeshRendererProperties::SubImageSize");
static_assert(offsetof(UNiagaraMeshRendererProperties, LockedAxis) == 248, "Offset mismatch for UNiagaraMeshRendererProperties::LockedAxis");
static_assert(offsetof(UNiagaraMeshRendererProperties, MeshBoundsScale) == 272, "Offset mismatch for UNiagaraMeshRendererProperties::MeshBoundsScale");
static_assert(offsetof(UNiagaraMeshRendererProperties, FacingMode) == 296, "Offset mismatch for UNiagaraMeshRendererProperties::FacingMode");
static_assert(offsetof(UNiagaraMeshRendererProperties, LockedAxisSpace) == 297, "Offset mismatch for UNiagaraMeshRendererProperties::LockedAxisSpace");
static_assert(offsetof(UNiagaraMeshRendererProperties, MinCameraDistance) == 300, "Offset mismatch for UNiagaraMeshRendererProperties::MinCameraDistance");
static_assert(offsetof(UNiagaraMeshRendererProperties, MaxCameraDistance) == 304, "Offset mismatch for UNiagaraMeshRendererProperties::MaxCameraDistance");
static_assert(offsetof(UNiagaraMeshRendererProperties, RendererVisibility) == 308, "Offset mismatch for UNiagaraMeshRendererProperties::RendererVisibility");
static_assert(offsetof(UNiagaraMeshRendererProperties, PositionBinding) == 312, "Offset mismatch for UNiagaraMeshRendererProperties::PositionBinding");
static_assert(offsetof(UNiagaraMeshRendererProperties, ColorBinding) == 332, "Offset mismatch for UNiagaraMeshRendererProperties::ColorBinding");
static_assert(offsetof(UNiagaraMeshRendererProperties, VelocityBinding) == 352, "Offset mismatch for UNiagaraMeshRendererProperties::VelocityBinding");
static_assert(offsetof(UNiagaraMeshRendererProperties, MeshOrientationBinding) == 372, "Offset mismatch for UNiagaraMeshRendererProperties::MeshOrientationBinding");
static_assert(offsetof(UNiagaraMeshRendererProperties, ScaleBinding) == 392, "Offset mismatch for UNiagaraMeshRendererProperties::ScaleBinding");
static_assert(offsetof(UNiagaraMeshRendererProperties, SubImageIndexBinding) == 412, "Offset mismatch for UNiagaraMeshRendererProperties::SubImageIndexBinding");
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterialBinding) == 432, "Offset mismatch for UNiagaraMeshRendererProperties::DynamicMaterialBinding");
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterial1Binding) == 452, "Offset mismatch for UNiagaraMeshRendererProperties::DynamicMaterial1Binding");
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterial2Binding) == 472, "Offset mismatch for UNiagaraMeshRendererProperties::DynamicMaterial2Binding");
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterial3Binding) == 492, "Offset mismatch for UNiagaraMeshRendererProperties::DynamicMaterial3Binding");
static_assert(offsetof(UNiagaraMeshRendererProperties, MaterialRandomBinding) == 512, "Offset mismatch for UNiagaraMeshRendererProperties::MaterialRandomBinding");
static_assert(offsetof(UNiagaraMeshRendererProperties, CustomSortingBinding) == 532, "Offset mismatch for UNiagaraMeshRendererProperties::CustomSortingBinding");
static_assert(offsetof(UNiagaraMeshRendererProperties, NormalizedAgeBinding) == 552, "Offset mismatch for UNiagaraMeshRendererProperties::NormalizedAgeBinding");
static_assert(offsetof(UNiagaraMeshRendererProperties, CameraOffsetBinding) == 572, "Offset mismatch for UNiagaraMeshRendererProperties::CameraOffsetBinding");
static_assert(offsetof(UNiagaraMeshRendererProperties, RendererVisibilityTagBinding) == 592, "Offset mismatch for UNiagaraMeshRendererProperties::RendererVisibilityTagBinding");
static_assert(offsetof(UNiagaraMeshRendererProperties, MeshIndexBinding) == 612, "Offset mismatch for UNiagaraMeshRendererProperties::MeshIndexBinding");
static_assert(offsetof(UNiagaraMeshRendererProperties, MaterialParameters) == 632, "Offset mismatch for UNiagaraMeshRendererProperties::MaterialParameters");
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevPositionBinding) == 712, "Offset mismatch for UNiagaraMeshRendererProperties::PrevPositionBinding");
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevScaleBinding) == 732, "Offset mismatch for UNiagaraMeshRendererProperties::PrevScaleBinding");
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevMeshOrientationBinding) == 752, "Offset mismatch for UNiagaraMeshRendererProperties::PrevMeshOrientationBinding");
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevCameraOffsetBinding) == 772, "Offset mismatch for UNiagaraMeshRendererProperties::PrevCameraOffsetBinding");
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevVelocityBinding) == 792, "Offset mismatch for UNiagaraMeshRendererProperties::PrevVelocityBinding");
static_assert(offsetof(UNiagaraMeshRendererProperties, MaterialParamValidMask) == 812, "Offset mismatch for UNiagaraMeshRendererProperties::MaterialParamValidMask");

// /Script/Niagara.NiagaraMessageDataBase
// Kind: Class; super: Object
class UNiagaraMessageDataBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraParameterCollection
// Kind: Class; super: Object
class UNiagaraParameterCollection
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FName Namespace; // 0x0028 (Size: 0x8, Type: NameProperty)
    TArray<void*> Parameters; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    void* SourceMaterialCollection; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* DefaultInstance; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CompileId[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraParameterCollection, Namespace) == 40, "Offset mismatch for UNiagaraParameterCollection::Namespace");
static_assert(offsetof(UNiagaraParameterCollection, Parameters) == 48, "Offset mismatch for UNiagaraParameterCollection::Parameters");
static_assert(offsetof(UNiagaraParameterCollection, SourceMaterialCollection) == 64, "Offset mismatch for UNiagaraParameterCollection::SourceMaterialCollection");
static_assert(offsetof(UNiagaraParameterCollection, DefaultInstance) == 72, "Offset mismatch for UNiagaraParameterCollection::DefaultInstance");
static_assert(offsetof(UNiagaraParameterCollection, CompileId) == 80, "Offset mismatch for UNiagaraParameterCollection::CompileId");

// /Script/Niagara.NiagaraParameterCollectionInstance
// Kind: Class; super: Object
class UNiagaraParameterCollectionInstance
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Collection; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> OverridenParameters; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ParameterStorage[0x88]; // 0x0040 (Size: 0x88, Type: StructProperty)
    void* SourceMaterialCollectionInstance; // 0x00C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNiagaraParameterCollectionInstance, Collection) == 40, "Offset mismatch for UNiagaraParameterCollectionInstance::Collection");
static_assert(offsetof(UNiagaraParameterCollectionInstance, OverridenParameters) == 48, "Offset mismatch for UNiagaraParameterCollectionInstance::OverridenParameters");
static_assert(offsetof(UNiagaraParameterCollectionInstance, ParameterStorage) == 64, "Offset mismatch for UNiagaraParameterCollectionInstance::ParameterStorage");
static_assert(offsetof(UNiagaraParameterCollectionInstance, SourceMaterialCollectionInstance) == 200, "Offset mismatch for UNiagaraParameterCollectionInstance::SourceMaterialCollectionInstance");

// /Script/Niagara.NiagaraParameterDefinitionsBase
// Kind: Class; super: Object
class UNiagaraParameterDefinitionsBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraParticleCallbackHandler
// Kind: Class; super: Interface
class UNiagaraParticleCallbackHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraPerfBaselineActor
// Kind: Class; super: Actor
class UNiagaraPerfBaselineActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* Controller; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* Label; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNiagaraPerfBaselineActor, Controller) == 624, "Offset mismatch for UNiagaraPerfBaselineActor::Controller");
static_assert(offsetof(UNiagaraPerfBaselineActor, Label) == 632, "Offset mismatch for UNiagaraPerfBaselineActor::Label");

// /Script/Niagara.NiagaraPhysicsAssetDICollectorInterface
// Kind: Class; super: Interface
class UNiagaraPhysicsAssetDICollectorInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraPrecompileContainer
// Kind: Class; super: Object
class UNiagaraPrecompileContainer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Scripts; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    void* System; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNiagaraPrecompileContainer, Scripts) == 40, "Offset mismatch for UNiagaraPrecompileContainer::Scripts");
static_assert(offsetof(UNiagaraPrecompileContainer, System) == 56, "Offset mismatch for UNiagaraPrecompileContainer::System");

// /Script/Niagara.NiagaraPreviewAxis
// Kind: Class; super: Object
class UNiagaraPreviewAxis
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraPreviewAxis_InterpParamBase
// Kind: Class; super: NiagaraPreviewAxis
class UNiagaraPreviewAxis_InterpParamBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Param[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    std::int32_t Count; // 0x002C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UNiagaraPreviewAxis_InterpParamBase, Param) == 40, "Offset mismatch for UNiagaraPreviewAxis_InterpParamBase::Param");
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamBase, Count) == 44, "Offset mismatch for UNiagaraPreviewAxis_InterpParamBase::Count");

// /Script/Niagara.NiagaraPreviewAxis_InterpParamFloat
// Kind: Class; super: NiagaraPreviewAxis_InterpParamBase
class UNiagaraPreviewAxis_InterpParamFloat
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float min; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float max; // 0x0034 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UNiagaraPreviewAxis_InterpParamFloat, min) == 48, "Offset mismatch for UNiagaraPreviewAxis_InterpParamFloat::min");
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamFloat, max) == 52, "Offset mismatch for UNiagaraPreviewAxis_InterpParamFloat::max");

// /Script/Niagara.NiagaraPreviewAxis_InterpParamInt32
// Kind: Class; super: NiagaraPreviewAxis_InterpParamBase
class UNiagaraPreviewAxis_InterpParamInt32
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t min; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t max; // 0x0034 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UNiagaraPreviewAxis_InterpParamInt32, min) == 48, "Offset mismatch for UNiagaraPreviewAxis_InterpParamInt32::min");
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamInt32, max) == 52, "Offset mismatch for UNiagaraPreviewAxis_InterpParamInt32::max");

// /Script/Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// Kind: Class; super: NiagaraPreviewAxis_InterpParamBase
class UNiagaraPreviewAxis_InterpParamLinearColor
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t min[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t max[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraPreviewAxis_InterpParamLinearColor, min) == 48, "Offset mismatch for UNiagaraPreviewAxis_InterpParamLinearColor::min");
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamLinearColor, max) == 64, "Offset mismatch for UNiagaraPreviewAxis_InterpParamLinearColor::max");

// /Script/Niagara.NiagaraPreviewAxis_InterpParamVector
// Kind: Class; super: NiagaraPreviewAxis_InterpParamBase
class UNiagaraPreviewAxis_InterpParamVector
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t min[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t max[0x1]; // 0x0048 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector, min) == 48, "Offset mismatch for UNiagaraPreviewAxis_InterpParamVector::min");
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector, max) == 72, "Offset mismatch for UNiagaraPreviewAxis_InterpParamVector::max");

// /Script/Niagara.NiagaraPreviewAxis_InterpParamVector2D
// Kind: Class; super: NiagaraPreviewAxis_InterpParamBase
class UNiagaraPreviewAxis_InterpParamVector2D
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t min[0x10]; // 0x0030 (Size: 0x10, Type: StructProperty)
    std::uint8_t max[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector2D, min) == 48, "Offset mismatch for UNiagaraPreviewAxis_InterpParamVector2D::min");
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector2D, max) == 64, "Offset mismatch for UNiagaraPreviewAxis_InterpParamVector2D::max");

// /Script/Niagara.NiagaraPreviewAxis_InterpParamVector4
// Kind: Class; super: NiagaraPreviewAxis_InterpParamBase
class UNiagaraPreviewAxis_InterpParamVector4
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t min[0x20]; // 0x0030 (Size: 0x20, Type: StructProperty)
    std::uint8_t max[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector4, min) == 48, "Offset mismatch for UNiagaraPreviewAxis_InterpParamVector4::min");
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector4, max) == 80, "Offset mismatch for UNiagaraPreviewAxis_InterpParamVector4::max");

// /Script/Niagara.NiagaraPreviewBase
// Kind: Class; super: Actor
class UNiagaraPreviewBase
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

static_assert(offsetof(UNiagaraPreviewBase, PrimaryActorTick) == 40, "Offset mismatch for UNiagaraPreviewBase::PrimaryActorTick");
static_assert(offsetof(UNiagaraPreviewBase, bAlwaysRelevant) == 88, "Offset mismatch for UNiagaraPreviewBase::bAlwaysRelevant");
static_assert(offsetof(UNiagaraPreviewBase, bExchangedRoles) == 89, "Offset mismatch for UNiagaraPreviewBase::bExchangedRoles");
static_assert(offsetof(UNiagaraPreviewBase, bAllowTickBeforeBeginPlay) == 90, "Offset mismatch for UNiagaraPreviewBase::bAllowTickBeforeBeginPlay");
static_assert(offsetof(UNiagaraPreviewBase, bAllowReceiveTickEventOnDedicatedServer) == 91, "Offset mismatch for UNiagaraPreviewBase::bAllowReceiveTickEventOnDedicatedServer");
static_assert(offsetof(UNiagaraPreviewBase, bActorEnableCollision) == 93, "Offset mismatch for UNiagaraPreviewBase::bActorEnableCollision");
static_assert(offsetof(UNiagaraPreviewBase, UpdateOverlapsMethodDuringLevelStreaming) == 94, "Offset mismatch for UNiagaraPreviewBase::UpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UNiagaraPreviewBase, DefaultUpdateOverlapsMethodDuringLevelStreaming) == 95, "Offset mismatch for UNiagaraPreviewBase::DefaultUpdateOverlapsMethodDuringLevelStreaming");
static_assert(offsetof(UNiagaraPreviewBase, RemoteRole) == 96, "Offset mismatch for UNiagaraPreviewBase::RemoteRole");
static_assert(offsetof(UNiagaraPreviewBase, InitialLifeSpan) == 100, "Offset mismatch for UNiagaraPreviewBase::InitialLifeSpan");
static_assert(offsetof(UNiagaraPreviewBase, CustomTimeDilation) == 104, "Offset mismatch for UNiagaraPreviewBase::CustomTimeDilation");
static_assert(offsetof(UNiagaraPreviewBase, RayTracingGroupId) == 108, "Offset mismatch for UNiagaraPreviewBase::RayTracingGroupId");
static_assert(offsetof(UNiagaraPreviewBase, AttachmentReplication) == 112, "Offset mismatch for UNiagaraPreviewBase::AttachmentReplication");
static_assert(offsetof(UNiagaraPreviewBase, ReplicatedMovement) == 208, "Offset mismatch for UNiagaraPreviewBase::ReplicatedMovement");
static_assert(offsetof(UNiagaraPreviewBase, Owner) == 344, "Offset mismatch for UNiagaraPreviewBase::Owner");
static_assert(offsetof(UNiagaraPreviewBase, NetDriverName) == 352, "Offset mismatch for UNiagaraPreviewBase::NetDriverName");
static_assert(offsetof(UNiagaraPreviewBase, Role) == 356, "Offset mismatch for UNiagaraPreviewBase::Role");
static_assert(offsetof(UNiagaraPreviewBase, NetDormancy) == 357, "Offset mismatch for UNiagaraPreviewBase::NetDormancy");
static_assert(offsetof(UNiagaraPreviewBase, SpawnCollisionHandlingMethod) == 358, "Offset mismatch for UNiagaraPreviewBase::SpawnCollisionHandlingMethod");
static_assert(offsetof(UNiagaraPreviewBase, AutoReceiveInput) == 359, "Offset mismatch for UNiagaraPreviewBase::AutoReceiveInput");
static_assert(offsetof(UNiagaraPreviewBase, InputPriority) == 360, "Offset mismatch for UNiagaraPreviewBase::InputPriority");
static_assert(offsetof(UNiagaraPreviewBase, InputComponent) == 368, "Offset mismatch for UNiagaraPreviewBase::InputComponent");
static_assert(offsetof(UNiagaraPreviewBase, NetTag) == 376, "Offset mismatch for UNiagaraPreviewBase::NetTag");
static_assert(offsetof(UNiagaraPreviewBase, NetCullDistanceSquared) == 380, "Offset mismatch for UNiagaraPreviewBase::NetCullDistanceSquared");
static_assert(offsetof(UNiagaraPreviewBase, NetUpdateFrequency) == 384, "Offset mismatch for UNiagaraPreviewBase::NetUpdateFrequency");
static_assert(offsetof(UNiagaraPreviewBase, MinNetUpdateFrequency) == 388, "Offset mismatch for UNiagaraPreviewBase::MinNetUpdateFrequency");
static_assert(offsetof(UNiagaraPreviewBase, NetPriority) == 392, "Offset mismatch for UNiagaraPreviewBase::NetPriority");
static_assert(offsetof(UNiagaraPreviewBase, PhysicsReplicationMode) == 396, "Offset mismatch for UNiagaraPreviewBase::PhysicsReplicationMode");
static_assert(offsetof(UNiagaraPreviewBase, Instigator) == 408, "Offset mismatch for UNiagaraPreviewBase::Instigator");
static_assert(offsetof(UNiagaraPreviewBase, Children) == 416, "Offset mismatch for UNiagaraPreviewBase::Children");
static_assert(offsetof(UNiagaraPreviewBase, RootComponent) == 432, "Offset mismatch for UNiagaraPreviewBase::RootComponent");
static_assert(offsetof(UNiagaraPreviewBase, HLODLayer) == 448, "Offset mismatch for UNiagaraPreviewBase::HLODLayer");
static_assert(offsetof(UNiagaraPreviewBase, Layers) == 456, "Offset mismatch for UNiagaraPreviewBase::Layers");
static_assert(offsetof(UNiagaraPreviewBase, ParentComponent) == 472, "Offset mismatch for UNiagaraPreviewBase::ParentComponent");
static_assert(offsetof(UNiagaraPreviewBase, Tags) == 496, "Offset mismatch for UNiagaraPreviewBase::Tags");
static_assert(offsetof(UNiagaraPreviewBase, OnTakeAnyDamage) == 512, "Offset mismatch for UNiagaraPreviewBase::OnTakeAnyDamage");
static_assert(offsetof(UNiagaraPreviewBase, OnTakePointDamage) == 513, "Offset mismatch for UNiagaraPreviewBase::OnTakePointDamage");
static_assert(offsetof(UNiagaraPreviewBase, OnTakeRadialDamage) == 514, "Offset mismatch for UNiagaraPreviewBase::OnTakeRadialDamage");
static_assert(offsetof(UNiagaraPreviewBase, OnActorBeginOverlap) == 515, "Offset mismatch for UNiagaraPreviewBase::OnActorBeginOverlap");
static_assert(offsetof(UNiagaraPreviewBase, OnActorEndOverlap) == 516, "Offset mismatch for UNiagaraPreviewBase::OnActorEndOverlap");
static_assert(offsetof(UNiagaraPreviewBase, OnBeginCursorOver) == 517, "Offset mismatch for UNiagaraPreviewBase::OnBeginCursorOver");
static_assert(offsetof(UNiagaraPreviewBase, OnEndCursorOver) == 518, "Offset mismatch for UNiagaraPreviewBase::OnEndCursorOver");
static_assert(offsetof(UNiagaraPreviewBase, OnClicked) == 519, "Offset mismatch for UNiagaraPreviewBase::OnClicked");
static_assert(offsetof(UNiagaraPreviewBase, OnReleased) == 520, "Offset mismatch for UNiagaraPreviewBase::OnReleased");
static_assert(offsetof(UNiagaraPreviewBase, OnInputTouchBegin) == 521, "Offset mismatch for UNiagaraPreviewBase::OnInputTouchBegin");
static_assert(offsetof(UNiagaraPreviewBase, OnInputTouchEnd) == 522, "Offset mismatch for UNiagaraPreviewBase::OnInputTouchEnd");
static_assert(offsetof(UNiagaraPreviewBase, OnInputTouchEnter) == 523, "Offset mismatch for UNiagaraPreviewBase::OnInputTouchEnter");
static_assert(offsetof(UNiagaraPreviewBase, OnInputTouchLeave) == 524, "Offset mismatch for UNiagaraPreviewBase::OnInputTouchLeave");
static_assert(offsetof(UNiagaraPreviewBase, OnActorHit) == 525, "Offset mismatch for UNiagaraPreviewBase::OnActorHit");
static_assert(offsetof(UNiagaraPreviewBase, OnDestroyed) == 526, "Offset mismatch for UNiagaraPreviewBase::OnDestroyed");
static_assert(offsetof(UNiagaraPreviewBase, OnEndPlay) == 527, "Offset mismatch for UNiagaraPreviewBase::OnEndPlay");
static_assert(offsetof(UNiagaraPreviewBase, InstanceComponents) == 592, "Offset mismatch for UNiagaraPreviewBase::InstanceComponents");
static_assert(offsetof(UNiagaraPreviewBase, BlueprintCreatedComponents) == 608, "Offset mismatch for UNiagaraPreviewBase::BlueprintCreatedComponents");

// /Script/Niagara.NiagaraPreviewGrid
// Kind: Class; super: Actor
class UNiagaraPreviewGrid
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* System; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ResetMode; // 0x0278 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0279
    void* PreviewAxisX; // 0x0280 (Size: 0x8, Type: ObjectProperty)
    void* PreviewAxisY; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    void* PreviewClass; // 0x0290 (Size: 0x8, Type: ClassProperty)
    float SpacingX; // 0x0298 (Size: 0x4, Type: FloatProperty)
    float SpacingY; // 0x029C (Size: 0x4, Type: FloatProperty)
    std::int32_t NumX; // 0x02A0 (Size: 0x4, Type: IntProperty)
    std::int32_t NumY; // 0x02A4 (Size: 0x4, Type: IntProperty)
    TArray<void*> PreviewComponents; // 0x02A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraPreviewGrid, System) == 624, "Offset mismatch for UNiagaraPreviewGrid::System");
static_assert(offsetof(UNiagaraPreviewGrid, ResetMode) == 632, "Offset mismatch for UNiagaraPreviewGrid::ResetMode");
static_assert(offsetof(UNiagaraPreviewGrid, PreviewAxisX) == 640, "Offset mismatch for UNiagaraPreviewGrid::PreviewAxisX");
static_assert(offsetof(UNiagaraPreviewGrid, PreviewAxisY) == 648, "Offset mismatch for UNiagaraPreviewGrid::PreviewAxisY");
static_assert(offsetof(UNiagaraPreviewGrid, PreviewClass) == 656, "Offset mismatch for UNiagaraPreviewGrid::PreviewClass");
static_assert(offsetof(UNiagaraPreviewGrid, SpacingX) == 664, "Offset mismatch for UNiagaraPreviewGrid::SpacingX");
static_assert(offsetof(UNiagaraPreviewGrid, SpacingY) == 668, "Offset mismatch for UNiagaraPreviewGrid::SpacingY");
static_assert(offsetof(UNiagaraPreviewGrid, NumX) == 672, "Offset mismatch for UNiagaraPreviewGrid::NumX");
static_assert(offsetof(UNiagaraPreviewGrid, NumY) == 676, "Offset mismatch for UNiagaraPreviewGrid::NumY");
static_assert(offsetof(UNiagaraPreviewGrid, PreviewComponents) == 680, "Offset mismatch for UNiagaraPreviewGrid::PreviewComponents");

// /Script/Niagara.NiagaraRenderableMeshArrayInterface
// Kind: Class; super: Interface
class UNiagaraRenderableMeshArrayInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraRenderableMeshInterface
// Kind: Class; super: Interface
class UNiagaraRenderableMeshInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraRendererProperties
// Kind: Class; super: NiagaraMergeable
class UNiagaraRendererProperties
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t Platforms[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::int32_t SortOrderHint; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::uint8_t MotionVectorSetting; // 0x005C (Size: 0x1, Type: EnumProperty)
    std::uint8_t bIsEnabled; // 0x005D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAllowInCullProxies; // 0x005E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x005F
    std::uint8_t RendererEnabledBinding[0x14]; // 0x0060 (Size: 0x14, Type: StructProperty)
    std::uint8_t OuterEmitterVersion[0x1]; // 0x0074 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraRendererProperties, Platforms) == 40, "Offset mismatch for UNiagaraRendererProperties::Platforms");
static_assert(offsetof(UNiagaraRendererProperties, SortOrderHint) == 88, "Offset mismatch for UNiagaraRendererProperties::SortOrderHint");
static_assert(offsetof(UNiagaraRendererProperties, MotionVectorSetting) == 92, "Offset mismatch for UNiagaraRendererProperties::MotionVectorSetting");
static_assert(offsetof(UNiagaraRendererProperties, bIsEnabled) == 93, "Offset mismatch for UNiagaraRendererProperties::bIsEnabled");
static_assert(offsetof(UNiagaraRendererProperties, bAllowInCullProxies) == 94, "Offset mismatch for UNiagaraRendererProperties::bAllowInCullProxies");
static_assert(offsetof(UNiagaraRendererProperties, RendererEnabledBinding) == 96, "Offset mismatch for UNiagaraRendererProperties::RendererEnabledBinding");
static_assert(offsetof(UNiagaraRendererProperties, OuterEmitterVersion) == 116, "Offset mismatch for UNiagaraRendererProperties::OuterEmitterVersion");

// /Script/Niagara.NiagaraRibbonRendererProperties
// Kind: Class; super: NiagaraRendererProperties
class UNiagaraRibbonRendererProperties
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    void* Material; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MaterialUserParamBinding[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t RibbonInterfaceBinding[0x8]; // 0x00B8 (Size: 0x8, Type: StructProperty)
    std::uint8_t UV0Settings[0x28]; // 0x00C0 (Size: 0x28, Type: StructProperty)
    std::uint8_t UV1Settings[0x28]; // 0x00E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t FacingMode; // 0x0110 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0111
    std::int32_t RendererVisibility; // 0x0114 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxNumRibbons; // 0x0118 (Size: 0x4, Type: IntProperty)
    std::uint8_t DrawDirection; // 0x011C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Shape; // 0x011D (Size: 0x1, Type: EnumProperty)
    std::uint8_t bCastShadows; // 0x011E (Size: 0x1, Type: BoolProperty)
    // 0x011E BoolProperty bEnableAccurateGeometry (shared storage)
    // 0x011E BoolProperty bLinkOrderUseUniqueID (shared storage)
    // 0x011E BoolProperty bScreenSpaceTessellation (shared storage)
    // 0x011E BoolProperty bUseConstantFactor (shared storage)
    // 0x011E BoolProperty bUseGPUInit (shared storage)
    // 0x011E BoolProperty bUseGeometryNormals (shared storage)
    // 0x011E BoolProperty bUseMaterialBackfaceCulling (shared storage)
    std::uint8_t Pad_0002[0x1]; // 0x011F
    std::int32_t WidthSegmentationCount; // 0x0120 (Size: 0x4, Type: IntProperty)
    std::int32_t MultiPlaneCount; // 0x0124 (Size: 0x4, Type: IntProperty)
    std::int32_t TubeSubdivisions; // 0x0128 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0003[0x4]; // 0x012C
    TArray<void*> CustomVertices; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bCustomShapeClosed; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t TessellationMode; // 0x0141 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x2]; // 0x0142
    float CurveTension; // 0x0144 (Size: 0x4, Type: FloatProperty)
    std::int32_t TessellationFactor; // 0x0148 (Size: 0x4, Type: IntProperty)
    float TessellationAngle; // 0x014C (Size: 0x4, Type: FloatProperty)
    std::uint8_t PositionBinding[0x14]; // 0x0150 (Size: 0x14, Type: StructProperty)
    std::uint8_t ColorBinding[0x14]; // 0x0164 (Size: 0x14, Type: StructProperty)
    std::uint8_t VelocityBinding[0x14]; // 0x0178 (Size: 0x14, Type: StructProperty)
    std::uint8_t NormalizedAgeBinding[0x14]; // 0x018C (Size: 0x14, Type: StructProperty)
    std::uint8_t RibbonTwistBinding[0x14]; // 0x01A0 (Size: 0x14, Type: StructProperty)
    std::uint8_t RibbonWidthBinding[0x14]; // 0x01B4 (Size: 0x14, Type: StructProperty)
    std::uint8_t RibbonFacingBinding[0x14]; // 0x01C8 (Size: 0x14, Type: StructProperty)
    std::uint8_t RibbonIdBinding[0x14]; // 0x01DC (Size: 0x14, Type: StructProperty)
    std::uint8_t RibbonLinkOrderBinding[0x14]; // 0x01F0 (Size: 0x14, Type: StructProperty)
    std::uint8_t MaterialRandomBinding[0x14]; // 0x0204 (Size: 0x14, Type: StructProperty)
    std::uint8_t DynamicMaterialBinding[0x14]; // 0x0218 (Size: 0x14, Type: StructProperty)
    std::uint8_t DynamicMaterial1Binding[0x14]; // 0x022C (Size: 0x14, Type: StructProperty)
    std::uint8_t DynamicMaterial2Binding[0x14]; // 0x0240 (Size: 0x14, Type: StructProperty)
    std::uint8_t DynamicMaterial3Binding[0x14]; // 0x0254 (Size: 0x14, Type: StructProperty)
    std::uint8_t RibbonUVDistance[0x14]; // 0x0268 (Size: 0x14, Type: StructProperty)
    std::uint8_t U0OverrideBinding[0x14]; // 0x027C (Size: 0x14, Type: StructProperty)
    std::uint8_t V0RangeOverrideBinding[0x14]; // 0x0290 (Size: 0x14, Type: StructProperty)
    std::uint8_t U1OverrideBinding[0x14]; // 0x02A4 (Size: 0x14, Type: StructProperty)
    std::uint8_t V1RangeOverrideBinding[0x14]; // 0x02B8 (Size: 0x14, Type: StructProperty)
    std::uint8_t RendererVisibilityTagBinding[0x14]; // 0x02CC (Size: 0x14, Type: StructProperty)
    std::uint8_t MaterialParameters[0x50]; // 0x02E0 (Size: 0x50, Type: StructProperty)
    std::uint8_t PrevPositionBinding[0x14]; // 0x0330 (Size: 0x14, Type: StructProperty)
    std::uint8_t PrevRibbonWidthBinding[0x14]; // 0x0344 (Size: 0x14, Type: StructProperty)
    std::uint8_t PrevRibbonFacingBinding[0x14]; // 0x0358 (Size: 0x14, Type: StructProperty)
    std::uint8_t PrevRibbonTwistBinding[0x14]; // 0x036C (Size: 0x14, Type: StructProperty)
    std::uint32_t MaterialParamValidMask; // 0x0380 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UNiagaraRibbonRendererProperties, Material) == 152, "Offset mismatch for UNiagaraRibbonRendererProperties::Material");
static_assert(offsetof(UNiagaraRibbonRendererProperties, MaterialUserParamBinding) == 160, "Offset mismatch for UNiagaraRibbonRendererProperties::MaterialUserParamBinding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonInterfaceBinding) == 184, "Offset mismatch for UNiagaraRibbonRendererProperties::RibbonInterfaceBinding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, UV0Settings) == 192, "Offset mismatch for UNiagaraRibbonRendererProperties::UV0Settings");
static_assert(offsetof(UNiagaraRibbonRendererProperties, UV1Settings) == 232, "Offset mismatch for UNiagaraRibbonRendererProperties::UV1Settings");
static_assert(offsetof(UNiagaraRibbonRendererProperties, FacingMode) == 272, "Offset mismatch for UNiagaraRibbonRendererProperties::FacingMode");
static_assert(offsetof(UNiagaraRibbonRendererProperties, RendererVisibility) == 276, "Offset mismatch for UNiagaraRibbonRendererProperties::RendererVisibility");
static_assert(offsetof(UNiagaraRibbonRendererProperties, MaxNumRibbons) == 280, "Offset mismatch for UNiagaraRibbonRendererProperties::MaxNumRibbons");
static_assert(offsetof(UNiagaraRibbonRendererProperties, DrawDirection) == 284, "Offset mismatch for UNiagaraRibbonRendererProperties::DrawDirection");
static_assert(offsetof(UNiagaraRibbonRendererProperties, Shape) == 285, "Offset mismatch for UNiagaraRibbonRendererProperties::Shape");
static_assert(offsetof(UNiagaraRibbonRendererProperties, bCastShadows) == 286, "Offset mismatch for UNiagaraRibbonRendererProperties::bCastShadows");
static_assert(offsetof(UNiagaraRibbonRendererProperties, WidthSegmentationCount) == 288, "Offset mismatch for UNiagaraRibbonRendererProperties::WidthSegmentationCount");
static_assert(offsetof(UNiagaraRibbonRendererProperties, MultiPlaneCount) == 292, "Offset mismatch for UNiagaraRibbonRendererProperties::MultiPlaneCount");
static_assert(offsetof(UNiagaraRibbonRendererProperties, TubeSubdivisions) == 296, "Offset mismatch for UNiagaraRibbonRendererProperties::TubeSubdivisions");
static_assert(offsetof(UNiagaraRibbonRendererProperties, CustomVertices) == 304, "Offset mismatch for UNiagaraRibbonRendererProperties::CustomVertices");
static_assert(offsetof(UNiagaraRibbonRendererProperties, bCustomShapeClosed) == 320, "Offset mismatch for UNiagaraRibbonRendererProperties::bCustomShapeClosed");
static_assert(offsetof(UNiagaraRibbonRendererProperties, TessellationMode) == 321, "Offset mismatch for UNiagaraRibbonRendererProperties::TessellationMode");
static_assert(offsetof(UNiagaraRibbonRendererProperties, CurveTension) == 324, "Offset mismatch for UNiagaraRibbonRendererProperties::CurveTension");
static_assert(offsetof(UNiagaraRibbonRendererProperties, TessellationFactor) == 328, "Offset mismatch for UNiagaraRibbonRendererProperties::TessellationFactor");
static_assert(offsetof(UNiagaraRibbonRendererProperties, TessellationAngle) == 332, "Offset mismatch for UNiagaraRibbonRendererProperties::TessellationAngle");
static_assert(offsetof(UNiagaraRibbonRendererProperties, PositionBinding) == 336, "Offset mismatch for UNiagaraRibbonRendererProperties::PositionBinding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, ColorBinding) == 356, "Offset mismatch for UNiagaraRibbonRendererProperties::ColorBinding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, VelocityBinding) == 376, "Offset mismatch for UNiagaraRibbonRendererProperties::VelocityBinding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, NormalizedAgeBinding) == 396, "Offset mismatch for UNiagaraRibbonRendererProperties::NormalizedAgeBinding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonTwistBinding) == 416, "Offset mismatch for UNiagaraRibbonRendererProperties::RibbonTwistBinding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonWidthBinding) == 436, "Offset mismatch for UNiagaraRibbonRendererProperties::RibbonWidthBinding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonFacingBinding) == 456, "Offset mismatch for UNiagaraRibbonRendererProperties::RibbonFacingBinding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonIdBinding) == 476, "Offset mismatch for UNiagaraRibbonRendererProperties::RibbonIdBinding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonLinkOrderBinding) == 496, "Offset mismatch for UNiagaraRibbonRendererProperties::RibbonLinkOrderBinding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, MaterialRandomBinding) == 516, "Offset mismatch for UNiagaraRibbonRendererProperties::MaterialRandomBinding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterialBinding) == 536, "Offset mismatch for UNiagaraRibbonRendererProperties::DynamicMaterialBinding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterial1Binding) == 556, "Offset mismatch for UNiagaraRibbonRendererProperties::DynamicMaterial1Binding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterial2Binding) == 576, "Offset mismatch for UNiagaraRibbonRendererProperties::DynamicMaterial2Binding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterial3Binding) == 596, "Offset mismatch for UNiagaraRibbonRendererProperties::DynamicMaterial3Binding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonUVDistance) == 616, "Offset mismatch for UNiagaraRibbonRendererProperties::RibbonUVDistance");
static_assert(offsetof(UNiagaraRibbonRendererProperties, U0OverrideBinding) == 636, "Offset mismatch for UNiagaraRibbonRendererProperties::U0OverrideBinding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, V0RangeOverrideBinding) == 656, "Offset mismatch for UNiagaraRibbonRendererProperties::V0RangeOverrideBinding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, U1OverrideBinding) == 676, "Offset mismatch for UNiagaraRibbonRendererProperties::U1OverrideBinding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, V1RangeOverrideBinding) == 696, "Offset mismatch for UNiagaraRibbonRendererProperties::V1RangeOverrideBinding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, RendererVisibilityTagBinding) == 716, "Offset mismatch for UNiagaraRibbonRendererProperties::RendererVisibilityTagBinding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, MaterialParameters) == 736, "Offset mismatch for UNiagaraRibbonRendererProperties::MaterialParameters");
static_assert(offsetof(UNiagaraRibbonRendererProperties, PrevPositionBinding) == 816, "Offset mismatch for UNiagaraRibbonRendererProperties::PrevPositionBinding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, PrevRibbonWidthBinding) == 836, "Offset mismatch for UNiagaraRibbonRendererProperties::PrevRibbonWidthBinding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, PrevRibbonFacingBinding) == 856, "Offset mismatch for UNiagaraRibbonRendererProperties::PrevRibbonFacingBinding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, PrevRibbonTwistBinding) == 876, "Offset mismatch for UNiagaraRibbonRendererProperties::PrevRibbonTwistBinding");
static_assert(offsetof(UNiagaraRibbonRendererProperties, MaterialParamValidMask) == 896, "Offset mismatch for UNiagaraRibbonRendererProperties::MaterialParamValidMask");

// /Script/Niagara.NiagaraScratchPadContainer
// Kind: Class; super: Object
class UNiagaraScratchPadContainer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraScript
// Kind: Class; super: NiagaraScriptBase
class UNiagaraScript
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Usage; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0031
    std::uint8_t UsageId[0x14]; // 0x0034 (Size: 0x14, Type: StructProperty)
    std::uint8_t RapidIterationParameters[0x88]; // 0x0048 (Size: 0x88, Type: StructProperty)
    std::uint8_t CachedScriptVMId[0x38]; // 0x00D0 (Size: 0x38, Type: StructProperty)
    std::uint8_t CachedScriptVM[0x118]; // 0x0108 (Size: 0x118, Type: StructProperty)
    TArray<void*> CachedParameterCollectionReferences; // 0x0220 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraScript, Usage) == 48, "Offset mismatch for UNiagaraScript::Usage");
static_assert(offsetof(UNiagaraScript, UsageId) == 52, "Offset mismatch for UNiagaraScript::UsageId");
static_assert(offsetof(UNiagaraScript, RapidIterationParameters) == 72, "Offset mismatch for UNiagaraScript::RapidIterationParameters");
static_assert(offsetof(UNiagaraScript, CachedScriptVMId) == 208, "Offset mismatch for UNiagaraScript::CachedScriptVMId");
static_assert(offsetof(UNiagaraScript, CachedScriptVM) == 264, "Offset mismatch for UNiagaraScript::CachedScriptVM");
static_assert(offsetof(UNiagaraScript, CachedParameterCollectionReferences) == 544, "Offset mismatch for UNiagaraScript::CachedParameterCollectionReferences");

// /Script/Niagara.NiagaraScriptRuntimeCompiledDataEditorReference
// Kind: Class; super: Object
class UNiagaraScriptRuntimeCompiledDataEditorReference
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> ScriptRuntimeCompiledDataMap; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UNiagaraScriptRuntimeCompiledDataEditorReference, ScriptRuntimeCompiledDataMap) == 40, "Offset mismatch for UNiagaraScriptRuntimeCompiledDataEditorReference::ScriptRuntimeCompiledDataMap");

// /Script/Niagara.NiagaraScriptSourceBase
// Kind: Class; super: Object
class UNiagaraScriptSourceBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraSettings
// Kind: Class; super: DeveloperSettings
class UNiagaraSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bSystemsSupportLargeWorldCoordinates; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LargeWorldCoordinateTileUpdateMode; // 0x0031 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0032
    std::uint32_t LargeWorldCoordinateMaxTilesBeforeReset; // 0x0034 (Size: 0x4, Type: UInt32Property)
    std::uint8_t bEnforceStrictStackTypes; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAccurateQuatInterpolation; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t InvalidNamespaceWriteSeverity; // 0x003A (Size: 0x1, Type: EnumProperty)
    std::uint8_t bLimitDeltaTime; // 0x003B (Size: 0x1, Type: BoolProperty)
    float MaxDeltaTimePerTick; // 0x003C (Size: 0x4, Type: FloatProperty)
    std::uint8_t DefaultEffectType[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAllowCreateActorFromSystemWithNoEffectType; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0059
    std::uint8_t PositionPinTypeColor[0x10]; // 0x005C (Size: 0x10, Type: StructProperty)
    std::uint8_t ByteCodeStripOption; // 0x006C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x006D
    TArray<void*> QualityLevels; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> ComponentRendererWarningsPerClass; // 0x0080 (Size: 0x10, Type: MapProperty)
    std::uint8_t DefaultRenderTargetFormat; // 0x0090 (Size: 0x1, Type: ByteProperty)
    std::uint8_t DefaultGridFormat; // 0x0091 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultRendererMotionVectorSetting; // 0x0092 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultPixelCoverageMode; // 0x0093 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultSortPrecision; // 0x0094 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DefaultGpuTranslucentLatency; // 0x0095 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x2]; // 0x0096
    float DefaultLightInverseExposureBlend; // 0x0098 (Size: 0x4, Type: FloatProperty)
    std::uint8_t NDISkelMesh_SupportReadingDeformedGeometry; // 0x009C (Size: 0x1, Type: BoolProperty)
    std::uint8_t NDISkelMesh_Support16BitIndexWeight; // 0x009D (Size: 0x1, Type: BoolProperty)
    std::uint8_t NDISkelMesh_GpuMaxInfluences; // 0x009E (Size: 0x1, Type: ByteProperty)
    std::uint8_t NDISkelMesh_GpuUniformSamplingFormat; // 0x009F (Size: 0x1, Type: ByteProperty)
    std::uint8_t NDISkelMesh_AdjacencyTriangleIndexFormat; // 0x00A0 (Size: 0x1, Type: ByteProperty)
    std::uint8_t NDIStaticMesh_AllowDistanceFields; // 0x00A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x6]; // 0x00A2
    TArray<void*> NDICollisionQuery_AsyncGpuTraceProviderOrder; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
    FString SimCacheAuxiliaryFileBasePath; // 0x00B8 (Size: 0x10, Type: StrProperty)
    std::int64_t SimCacheMaxCPUMemoryVolumetrics; // 0x00C8 (Size: 0x8, Type: Int64Property)
    TArray<void*> PlatformSetRedirects; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t DefaultPSOPrecacheSettings[0x1]; // 0x00E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraSettings, bSystemsSupportLargeWorldCoordinates) == 48, "Offset mismatch for UNiagaraSettings::bSystemsSupportLargeWorldCoordinates");
static_assert(offsetof(UNiagaraSettings, LargeWorldCoordinateTileUpdateMode) == 49, "Offset mismatch for UNiagaraSettings::LargeWorldCoordinateTileUpdateMode");
static_assert(offsetof(UNiagaraSettings, LargeWorldCoordinateMaxTilesBeforeReset) == 52, "Offset mismatch for UNiagaraSettings::LargeWorldCoordinateMaxTilesBeforeReset");
static_assert(offsetof(UNiagaraSettings, bEnforceStrictStackTypes) == 56, "Offset mismatch for UNiagaraSettings::bEnforceStrictStackTypes");
static_assert(offsetof(UNiagaraSettings, bAccurateQuatInterpolation) == 57, "Offset mismatch for UNiagaraSettings::bAccurateQuatInterpolation");
static_assert(offsetof(UNiagaraSettings, InvalidNamespaceWriteSeverity) == 58, "Offset mismatch for UNiagaraSettings::InvalidNamespaceWriteSeverity");
static_assert(offsetof(UNiagaraSettings, bLimitDeltaTime) == 59, "Offset mismatch for UNiagaraSettings::bLimitDeltaTime");
static_assert(offsetof(UNiagaraSettings, MaxDeltaTimePerTick) == 60, "Offset mismatch for UNiagaraSettings::MaxDeltaTimePerTick");
static_assert(offsetof(UNiagaraSettings, DefaultEffectType) == 64, "Offset mismatch for UNiagaraSettings::DefaultEffectType");
static_assert(offsetof(UNiagaraSettings, bAllowCreateActorFromSystemWithNoEffectType) == 88, "Offset mismatch for UNiagaraSettings::bAllowCreateActorFromSystemWithNoEffectType");
static_assert(offsetof(UNiagaraSettings, PositionPinTypeColor) == 92, "Offset mismatch for UNiagaraSettings::PositionPinTypeColor");
static_assert(offsetof(UNiagaraSettings, ByteCodeStripOption) == 108, "Offset mismatch for UNiagaraSettings::ByteCodeStripOption");
static_assert(offsetof(UNiagaraSettings, QualityLevels) == 112, "Offset mismatch for UNiagaraSettings::QualityLevels");
static_assert(offsetof(UNiagaraSettings, ComponentRendererWarningsPerClass) == 128, "Offset mismatch for UNiagaraSettings::ComponentRendererWarningsPerClass");
static_assert(offsetof(UNiagaraSettings, DefaultRenderTargetFormat) == 144, "Offset mismatch for UNiagaraSettings::DefaultRenderTargetFormat");
static_assert(offsetof(UNiagaraSettings, DefaultGridFormat) == 145, "Offset mismatch for UNiagaraSettings::DefaultGridFormat");
static_assert(offsetof(UNiagaraSettings, DefaultRendererMotionVectorSetting) == 146, "Offset mismatch for UNiagaraSettings::DefaultRendererMotionVectorSetting");
static_assert(offsetof(UNiagaraSettings, DefaultPixelCoverageMode) == 147, "Offset mismatch for UNiagaraSettings::DefaultPixelCoverageMode");
static_assert(offsetof(UNiagaraSettings, DefaultSortPrecision) == 148, "Offset mismatch for UNiagaraSettings::DefaultSortPrecision");
static_assert(offsetof(UNiagaraSettings, DefaultGpuTranslucentLatency) == 149, "Offset mismatch for UNiagaraSettings::DefaultGpuTranslucentLatency");
static_assert(offsetof(UNiagaraSettings, DefaultLightInverseExposureBlend) == 152, "Offset mismatch for UNiagaraSettings::DefaultLightInverseExposureBlend");
static_assert(offsetof(UNiagaraSettings, NDISkelMesh_SupportReadingDeformedGeometry) == 156, "Offset mismatch for UNiagaraSettings::NDISkelMesh_SupportReadingDeformedGeometry");
static_assert(offsetof(UNiagaraSettings, NDISkelMesh_Support16BitIndexWeight) == 157, "Offset mismatch for UNiagaraSettings::NDISkelMesh_Support16BitIndexWeight");
static_assert(offsetof(UNiagaraSettings, NDISkelMesh_GpuMaxInfluences) == 158, "Offset mismatch for UNiagaraSettings::NDISkelMesh_GpuMaxInfluences");
static_assert(offsetof(UNiagaraSettings, NDISkelMesh_GpuUniformSamplingFormat) == 159, "Offset mismatch for UNiagaraSettings::NDISkelMesh_GpuUniformSamplingFormat");
static_assert(offsetof(UNiagaraSettings, NDISkelMesh_AdjacencyTriangleIndexFormat) == 160, "Offset mismatch for UNiagaraSettings::NDISkelMesh_AdjacencyTriangleIndexFormat");
static_assert(offsetof(UNiagaraSettings, NDIStaticMesh_AllowDistanceFields) == 161, "Offset mismatch for UNiagaraSettings::NDIStaticMesh_AllowDistanceFields");
static_assert(offsetof(UNiagaraSettings, NDICollisionQuery_AsyncGpuTraceProviderOrder) == 168, "Offset mismatch for UNiagaraSettings::NDICollisionQuery_AsyncGpuTraceProviderOrder");
static_assert(offsetof(UNiagaraSettings, SimCacheAuxiliaryFileBasePath) == 184, "Offset mismatch for UNiagaraSettings::SimCacheAuxiliaryFileBasePath");
static_assert(offsetof(UNiagaraSettings, SimCacheMaxCPUMemoryVolumetrics) == 200, "Offset mismatch for UNiagaraSettings::SimCacheMaxCPUMemoryVolumetrics");
static_assert(offsetof(UNiagaraSettings, PlatformSetRedirects) == 208, "Offset mismatch for UNiagaraSettings::PlatformSetRedirects");
static_assert(offsetof(UNiagaraSettings, DefaultPSOPrecacheSettings) == 224, "Offset mismatch for UNiagaraSettings::DefaultPSOPrecacheSettings");

// /Script/Niagara.NiagaraSettingsProfileSet
// Kind: Class; super: DataAsset
class UNiagaraSettingsProfileSet
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraSignificanceHandler
// Kind: Class; super: Object
class UNiagaraSignificanceHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraSignificanceHandlerAge
// Kind: Class; super: NiagaraSignificanceHandler
class UNiagaraSignificanceHandlerAge
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraSignificanceHandlerDistance
// Kind: Class; super: NiagaraSignificanceHandler
class UNiagaraSignificanceHandlerDistance
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraSimCache
// Kind: Class; super: Object
class UNiagaraSimCache
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t CacheGuid[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    std::uint8_t SoftNiagaraSystem[0x20]; // 0x0038 (Size: 0x20, Type: SoftObjectProperty)
    float StartSeconds; // 0x0058 (Size: 0x4, Type: FloatProperty)
    float DurationSeconds; // 0x005C (Size: 0x4, Type: FloatProperty)
    std::uint8_t CreateParameters[0x58]; // 0x0060 (Size: 0x58, Type: StructProperty)
    std::uint8_t bNeedsReadComponentMappingRecache; // 0x00B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanRunAsync; // 0x00B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x00BA
    std::uint8_t CacheLayout[0xC0]; // 0x00C0 (Size: 0xC0, Type: StructProperty)
    TArray<void*> CacheFrames; // 0x0180 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> DataInterfaceStorage; // 0x0190 (Size: 0x10, Type: MapProperty)
    void* DebugData; // 0x01A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNiagaraSimCache, CacheGuid) == 40, "Offset mismatch for UNiagaraSimCache::CacheGuid");
static_assert(offsetof(UNiagaraSimCache, SoftNiagaraSystem) == 56, "Offset mismatch for UNiagaraSimCache::SoftNiagaraSystem");
static_assert(offsetof(UNiagaraSimCache, StartSeconds) == 88, "Offset mismatch for UNiagaraSimCache::StartSeconds");
static_assert(offsetof(UNiagaraSimCache, DurationSeconds) == 92, "Offset mismatch for UNiagaraSimCache::DurationSeconds");
static_assert(offsetof(UNiagaraSimCache, CreateParameters) == 96, "Offset mismatch for UNiagaraSimCache::CreateParameters");
static_assert(offsetof(UNiagaraSimCache, bNeedsReadComponentMappingRecache) == 184, "Offset mismatch for UNiagaraSimCache::bNeedsReadComponentMappingRecache");
static_assert(offsetof(UNiagaraSimCache, bCanRunAsync) == 185, "Offset mismatch for UNiagaraSimCache::bCanRunAsync");
static_assert(offsetof(UNiagaraSimCache, CacheLayout) == 192, "Offset mismatch for UNiagaraSimCache::CacheLayout");
static_assert(offsetof(UNiagaraSimCache, CacheFrames) == 384, "Offset mismatch for UNiagaraSimCache::CacheFrames");
static_assert(offsetof(UNiagaraSimCache, DataInterfaceStorage) == 400, "Offset mismatch for UNiagaraSimCache::DataInterfaceStorage");
static_assert(offsetof(UNiagaraSimCache, DebugData) == 416, "Offset mismatch for UNiagaraSimCache::DebugData");

// /Script/Niagara.NiagaraSimCacheCustomStorageInterface
// Kind: Class; super: Interface
class UNiagaraSimCacheCustomStorageInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraSimCacheDebugData
// Kind: Class; super: Object
class UNiagaraSimCacheDebugData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SystemStateData[0x70]; // 0x0028 (Size: 0x70, Type: StructProperty)
    TArray<void*> Frames; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraSimCacheDebugData, SystemStateData) == 40, "Offset mismatch for UNiagaraSimCacheDebugData::SystemStateData");
static_assert(offsetof(UNiagaraSimCacheDebugData, Frames) == 152, "Offset mismatch for UNiagaraSimCacheDebugData::Frames");

// /Script/Niagara.NiagaraSimCacheFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UNiagaraSimCacheFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraSimulationStageBase
// Kind: Class; super: NiagaraMergeable
class UNiagaraSimulationStageBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Script; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SimulationStageName[0x4]; // 0x0030 (Size: 0x4, Type: NameProperty)
    std::uint8_t bEnabled; // 0x0034 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNiagaraSimulationStageBase, Script) == 40, "Offset mismatch for UNiagaraSimulationStageBase::Script");
static_assert(offsetof(UNiagaraSimulationStageBase, SimulationStageName) == 48, "Offset mismatch for UNiagaraSimulationStageBase::SimulationStageName");
static_assert(offsetof(UNiagaraSimulationStageBase, bEnabled) == 52, "Offset mismatch for UNiagaraSimulationStageBase::bEnabled");

// /Script/Niagara.NiagaraSimulationStageGeneric
// Kind: Class; super: NiagaraSimulationStageBase
class UNiagaraSimulationStageGeneric
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t EnabledBinding[0x14]; // 0x0038 (Size: 0x14, Type: StructProperty)
    std::uint8_t IterationSource; // 0x004C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x004D
    std::uint8_t NumIterations[0x18]; // 0x0050 (Size: 0x18, Type: StructProperty)
    std::uint8_t ExecuteBehavior; // 0x0068 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x3]; // 0x0069
    std::uint8_t bDisablePartialParticleUpdate; // 0x006C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x006D
    std::uint8_t DataInterface[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t bParticleIterationStateEnabled; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x3]; // 0x0089
    std::uint8_t ParticleIterationStateBinding[0x14]; // 0x008C (Size: 0x14, Type: StructProperty)
    std::uint8_t ParticleIterationStateRange[0x8]; // 0x00A0 (Size: 0x8, Type: StructProperty)
    std::uint8_t bGpuDispatchForceLinear; // 0x00A8 (Size: 0x1, Type: BoolProperty)
    // 0x00A8 BoolProperty bOverrideGpuDispatchNumThreads (shared storage)
    std::uint8_t Pad_0005[0x7]; // 0x00A9
    std::uint8_t OverrideGpuDispatchNumThreadsX[0x18]; // 0x00B0 (Size: 0x18, Type: StructProperty)
    std::uint8_t OverrideGpuDispatchNumThreadsY[0x18]; // 0x00C8 (Size: 0x18, Type: StructProperty)
    std::uint8_t OverrideGpuDispatchNumThreadsZ[0x18]; // 0x00E0 (Size: 0x18, Type: StructProperty)
    std::uint8_t DirectDispatchType; // 0x00F8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DirectDispatchElementType; // 0x00F9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x6]; // 0x00FA
    std::uint8_t ElementCountX[0x18]; // 0x0100 (Size: 0x18, Type: StructProperty)
    std::uint8_t ElementCountY[0x18]; // 0x0118 (Size: 0x18, Type: StructProperty)
    std::uint8_t ElementCountZ[0x1]; // 0x0130 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraSimulationStageGeneric, EnabledBinding) == 56, "Offset mismatch for UNiagaraSimulationStageGeneric::EnabledBinding");
static_assert(offsetof(UNiagaraSimulationStageGeneric, IterationSource) == 76, "Offset mismatch for UNiagaraSimulationStageGeneric::IterationSource");
static_assert(offsetof(UNiagaraSimulationStageGeneric, NumIterations) == 80, "Offset mismatch for UNiagaraSimulationStageGeneric::NumIterations");
static_assert(offsetof(UNiagaraSimulationStageGeneric, ExecuteBehavior) == 104, "Offset mismatch for UNiagaraSimulationStageGeneric::ExecuteBehavior");
static_assert(offsetof(UNiagaraSimulationStageGeneric, bDisablePartialParticleUpdate) == 108, "Offset mismatch for UNiagaraSimulationStageGeneric::bDisablePartialParticleUpdate");
static_assert(offsetof(UNiagaraSimulationStageGeneric, DataInterface) == 112, "Offset mismatch for UNiagaraSimulationStageGeneric::DataInterface");
static_assert(offsetof(UNiagaraSimulationStageGeneric, bParticleIterationStateEnabled) == 136, "Offset mismatch for UNiagaraSimulationStageGeneric::bParticleIterationStateEnabled");
static_assert(offsetof(UNiagaraSimulationStageGeneric, ParticleIterationStateBinding) == 140, "Offset mismatch for UNiagaraSimulationStageGeneric::ParticleIterationStateBinding");
static_assert(offsetof(UNiagaraSimulationStageGeneric, ParticleIterationStateRange) == 160, "Offset mismatch for UNiagaraSimulationStageGeneric::ParticleIterationStateRange");
static_assert(offsetof(UNiagaraSimulationStageGeneric, bGpuDispatchForceLinear) == 168, "Offset mismatch for UNiagaraSimulationStageGeneric::bGpuDispatchForceLinear");
static_assert(offsetof(UNiagaraSimulationStageGeneric, OverrideGpuDispatchNumThreadsX) == 176, "Offset mismatch for UNiagaraSimulationStageGeneric::OverrideGpuDispatchNumThreadsX");
static_assert(offsetof(UNiagaraSimulationStageGeneric, OverrideGpuDispatchNumThreadsY) == 200, "Offset mismatch for UNiagaraSimulationStageGeneric::OverrideGpuDispatchNumThreadsY");
static_assert(offsetof(UNiagaraSimulationStageGeneric, OverrideGpuDispatchNumThreadsZ) == 224, "Offset mismatch for UNiagaraSimulationStageGeneric::OverrideGpuDispatchNumThreadsZ");
static_assert(offsetof(UNiagaraSimulationStageGeneric, DirectDispatchType) == 248, "Offset mismatch for UNiagaraSimulationStageGeneric::DirectDispatchType");
static_assert(offsetof(UNiagaraSimulationStageGeneric, DirectDispatchElementType) == 249, "Offset mismatch for UNiagaraSimulationStageGeneric::DirectDispatchElementType");
static_assert(offsetof(UNiagaraSimulationStageGeneric, ElementCountX) == 256, "Offset mismatch for UNiagaraSimulationStageGeneric::ElementCountX");
static_assert(offsetof(UNiagaraSimulationStageGeneric, ElementCountY) == 280, "Offset mismatch for UNiagaraSimulationStageGeneric::ElementCountY");
static_assert(offsetof(UNiagaraSimulationStageGeneric, ElementCountZ) == 304, "Offset mismatch for UNiagaraSimulationStageGeneric::ElementCountZ");

// /Script/Niagara.NiagaraSpriteRendererProperties
// Kind: Class; super: NiagaraRendererProperties
class UNiagaraSpriteRendererProperties
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    void* Material; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MaterialUserParamBinding[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t SourceMode; // 0x00B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Alignment; // 0x00B9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t FacingMode; // 0x00BA (Size: 0x1, Type: EnumProperty)
    std::uint8_t SortMode; // 0x00BB (Size: 0x1, Type: EnumProperty)
    float MacroUVRadius; // 0x00BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t PivotInUVSpace[0x10]; // 0x00C0 (Size: 0x10, Type: StructProperty)
    std::uint8_t SubImageSize[0x10]; // 0x00D0 (Size: 0x10, Type: StructProperty)
    std::uint8_t bCastShadows; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    // 0x00E0 BoolProperty bEnableCameraDistanceCulling (shared storage)
    // 0x00E0 BoolProperty bRemoveHMDRollInVR (shared storage)
    // 0x00E0 BoolProperty bSortOnlyWhenTranslucent (shared storage)
    // 0x00E0 BoolProperty bSubImageBlend (shared storage)
    std::uint8_t SortPrecision; // 0x00E1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t GpuTranslucentLatency; // 0x00E2 (Size: 0x1, Type: EnumProperty)
    std::uint8_t PixelCoverageMode; // 0x00E3 (Size: 0x1, Type: EnumProperty)
    float PixelCoverageBlend; // 0x00E4 (Size: 0x4, Type: FloatProperty)
    float MinFacingCameraBlendDistance; // 0x00E8 (Size: 0x4, Type: FloatProperty)
    float MaxFacingCameraBlendDistance; // 0x00EC (Size: 0x4, Type: FloatProperty)
    float MinCameraDistance; // 0x00F0 (Size: 0x4, Type: FloatProperty)
    float MaxCameraDistance; // 0x00F4 (Size: 0x4, Type: FloatProperty)
    std::uint32_t RendererVisibility; // 0x00F8 (Size: 0x4, Type: UInt32Property)
    std::uint8_t PositionBinding[0x14]; // 0x00FC (Size: 0x14, Type: StructProperty)
    std::uint8_t ColorBinding[0x14]; // 0x0110 (Size: 0x14, Type: StructProperty)
    std::uint8_t VelocityBinding[0x14]; // 0x0124 (Size: 0x14, Type: StructProperty)
    std::uint8_t SpriteRotationBinding[0x14]; // 0x0138 (Size: 0x14, Type: StructProperty)
    std::uint8_t SpriteSizeBinding[0x14]; // 0x014C (Size: 0x14, Type: StructProperty)
    std::uint8_t SpriteFacingBinding[0x14]; // 0x0160 (Size: 0x14, Type: StructProperty)
    std::uint8_t SpriteAlignmentBinding[0x14]; // 0x0174 (Size: 0x14, Type: StructProperty)
    std::uint8_t SubImageIndexBinding[0x14]; // 0x0188 (Size: 0x14, Type: StructProperty)
    std::uint8_t DynamicMaterialBinding[0x14]; // 0x019C (Size: 0x14, Type: StructProperty)
    std::uint8_t DynamicMaterial1Binding[0x14]; // 0x01B0 (Size: 0x14, Type: StructProperty)
    std::uint8_t DynamicMaterial2Binding[0x14]; // 0x01C4 (Size: 0x14, Type: StructProperty)
    std::uint8_t DynamicMaterial3Binding[0x14]; // 0x01D8 (Size: 0x14, Type: StructProperty)
    std::uint8_t CameraOffsetBinding[0x14]; // 0x01EC (Size: 0x14, Type: StructProperty)
    std::uint8_t UVScaleBinding[0x14]; // 0x0200 (Size: 0x14, Type: StructProperty)
    std::uint8_t PivotOffsetBinding[0x14]; // 0x0214 (Size: 0x14, Type: StructProperty)
    std::uint8_t MaterialRandomBinding[0x14]; // 0x0228 (Size: 0x14, Type: StructProperty)
    std::uint8_t CustomSortingBinding[0x14]; // 0x023C (Size: 0x14, Type: StructProperty)
    std::uint8_t NormalizedAgeBinding[0x14]; // 0x0250 (Size: 0x14, Type: StructProperty)
    std::uint8_t RendererVisibilityTagBinding[0x14]; // 0x0264 (Size: 0x14, Type: StructProperty)
    std::uint8_t MaterialParameters[0x50]; // 0x0278 (Size: 0x50, Type: StructProperty)
    std::uint8_t PrevPositionBinding[0x14]; // 0x02C8 (Size: 0x14, Type: StructProperty)
    std::uint8_t PrevVelocityBinding[0x14]; // 0x02DC (Size: 0x14, Type: StructProperty)
    std::uint8_t PrevSpriteRotationBinding[0x14]; // 0x02F0 (Size: 0x14, Type: StructProperty)
    std::uint8_t PrevSpriteSizeBinding[0x14]; // 0x0304 (Size: 0x14, Type: StructProperty)
    std::uint8_t PrevSpriteFacingBinding[0x14]; // 0x0318 (Size: 0x14, Type: StructProperty)
    std::uint8_t PrevSpriteAlignmentBinding[0x14]; // 0x032C (Size: 0x14, Type: StructProperty)
    std::uint8_t PrevCameraOffsetBinding[0x14]; // 0x0340 (Size: 0x14, Type: StructProperty)
    std::uint8_t PrevPivotOffsetBinding[0x14]; // 0x0354 (Size: 0x14, Type: StructProperty)
    std::uint32_t MaterialParamValidMask; // 0x0368 (Size: 0x4, Type: UInt32Property)
};

static_assert(offsetof(UNiagaraSpriteRendererProperties, Material) == 152, "Offset mismatch for UNiagaraSpriteRendererProperties::Material");
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaterialUserParamBinding) == 160, "Offset mismatch for UNiagaraSpriteRendererProperties::MaterialUserParamBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, SourceMode) == 184, "Offset mismatch for UNiagaraSpriteRendererProperties::SourceMode");
static_assert(offsetof(UNiagaraSpriteRendererProperties, Alignment) == 185, "Offset mismatch for UNiagaraSpriteRendererProperties::Alignment");
static_assert(offsetof(UNiagaraSpriteRendererProperties, FacingMode) == 186, "Offset mismatch for UNiagaraSpriteRendererProperties::FacingMode");
static_assert(offsetof(UNiagaraSpriteRendererProperties, SortMode) == 187, "Offset mismatch for UNiagaraSpriteRendererProperties::SortMode");
static_assert(offsetof(UNiagaraSpriteRendererProperties, MacroUVRadius) == 188, "Offset mismatch for UNiagaraSpriteRendererProperties::MacroUVRadius");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PivotInUVSpace) == 192, "Offset mismatch for UNiagaraSpriteRendererProperties::PivotInUVSpace");
static_assert(offsetof(UNiagaraSpriteRendererProperties, SubImageSize) == 208, "Offset mismatch for UNiagaraSpriteRendererProperties::SubImageSize");
static_assert(offsetof(UNiagaraSpriteRendererProperties, bCastShadows) == 224, "Offset mismatch for UNiagaraSpriteRendererProperties::bCastShadows");
static_assert(offsetof(UNiagaraSpriteRendererProperties, SortPrecision) == 225, "Offset mismatch for UNiagaraSpriteRendererProperties::SortPrecision");
static_assert(offsetof(UNiagaraSpriteRendererProperties, GpuTranslucentLatency) == 226, "Offset mismatch for UNiagaraSpriteRendererProperties::GpuTranslucentLatency");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PixelCoverageMode) == 227, "Offset mismatch for UNiagaraSpriteRendererProperties::PixelCoverageMode");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PixelCoverageBlend) == 228, "Offset mismatch for UNiagaraSpriteRendererProperties::PixelCoverageBlend");
static_assert(offsetof(UNiagaraSpriteRendererProperties, MinFacingCameraBlendDistance) == 232, "Offset mismatch for UNiagaraSpriteRendererProperties::MinFacingCameraBlendDistance");
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaxFacingCameraBlendDistance) == 236, "Offset mismatch for UNiagaraSpriteRendererProperties::MaxFacingCameraBlendDistance");
static_assert(offsetof(UNiagaraSpriteRendererProperties, MinCameraDistance) == 240, "Offset mismatch for UNiagaraSpriteRendererProperties::MinCameraDistance");
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaxCameraDistance) == 244, "Offset mismatch for UNiagaraSpriteRendererProperties::MaxCameraDistance");
static_assert(offsetof(UNiagaraSpriteRendererProperties, RendererVisibility) == 248, "Offset mismatch for UNiagaraSpriteRendererProperties::RendererVisibility");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PositionBinding) == 252, "Offset mismatch for UNiagaraSpriteRendererProperties::PositionBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, ColorBinding) == 272, "Offset mismatch for UNiagaraSpriteRendererProperties::ColorBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, VelocityBinding) == 292, "Offset mismatch for UNiagaraSpriteRendererProperties::VelocityBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteRotationBinding) == 312, "Offset mismatch for UNiagaraSpriteRendererProperties::SpriteRotationBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteSizeBinding) == 332, "Offset mismatch for UNiagaraSpriteRendererProperties::SpriteSizeBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteFacingBinding) == 352, "Offset mismatch for UNiagaraSpriteRendererProperties::SpriteFacingBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteAlignmentBinding) == 372, "Offset mismatch for UNiagaraSpriteRendererProperties::SpriteAlignmentBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, SubImageIndexBinding) == 392, "Offset mismatch for UNiagaraSpriteRendererProperties::SubImageIndexBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterialBinding) == 412, "Offset mismatch for UNiagaraSpriteRendererProperties::DynamicMaterialBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterial1Binding) == 432, "Offset mismatch for UNiagaraSpriteRendererProperties::DynamicMaterial1Binding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterial2Binding) == 452, "Offset mismatch for UNiagaraSpriteRendererProperties::DynamicMaterial2Binding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterial3Binding) == 472, "Offset mismatch for UNiagaraSpriteRendererProperties::DynamicMaterial3Binding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, CameraOffsetBinding) == 492, "Offset mismatch for UNiagaraSpriteRendererProperties::CameraOffsetBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, UVScaleBinding) == 512, "Offset mismatch for UNiagaraSpriteRendererProperties::UVScaleBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PivotOffsetBinding) == 532, "Offset mismatch for UNiagaraSpriteRendererProperties::PivotOffsetBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaterialRandomBinding) == 552, "Offset mismatch for UNiagaraSpriteRendererProperties::MaterialRandomBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, CustomSortingBinding) == 572, "Offset mismatch for UNiagaraSpriteRendererProperties::CustomSortingBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, NormalizedAgeBinding) == 592, "Offset mismatch for UNiagaraSpriteRendererProperties::NormalizedAgeBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, RendererVisibilityTagBinding) == 612, "Offset mismatch for UNiagaraSpriteRendererProperties::RendererVisibilityTagBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaterialParameters) == 632, "Offset mismatch for UNiagaraSpriteRendererProperties::MaterialParameters");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevPositionBinding) == 712, "Offset mismatch for UNiagaraSpriteRendererProperties::PrevPositionBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevVelocityBinding) == 732, "Offset mismatch for UNiagaraSpriteRendererProperties::PrevVelocityBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevSpriteRotationBinding) == 752, "Offset mismatch for UNiagaraSpriteRendererProperties::PrevSpriteRotationBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevSpriteSizeBinding) == 772, "Offset mismatch for UNiagaraSpriteRendererProperties::PrevSpriteSizeBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevSpriteFacingBinding) == 792, "Offset mismatch for UNiagaraSpriteRendererProperties::PrevSpriteFacingBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevSpriteAlignmentBinding) == 812, "Offset mismatch for UNiagaraSpriteRendererProperties::PrevSpriteAlignmentBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevCameraOffsetBinding) == 832, "Offset mismatch for UNiagaraSpriteRendererProperties::PrevCameraOffsetBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevPivotOffsetBinding) == 852, "Offset mismatch for UNiagaraSpriteRendererProperties::PrevPivotOffsetBinding");
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaterialParamValidMask) == 872, "Offset mismatch for UNiagaraSpriteRendererProperties::MaterialParamValidMask");

// /Script/Niagara.NiagaraStatelessEmitter
// Kind: Class; super: NiagaraEmitterBase
class UNiagaraStatelessEmitter
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* EmitterTemplate; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bDeterministic; // 0x0050 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0051
    std::uint32_t AllowedFeatureMask; // 0x0054 (Size: 0x4, Type: UInt32Property)
    std::int32_t RandomSeed; // 0x0058 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x005C
    std::uint8_t FixedBounds[0x38]; // 0x0060 (Size: 0x38, Type: StructProperty)
    std::uint8_t EmitterState[0x90]; // 0x0098 (Size: 0x90, Type: StructProperty)
    TArray<void*> SpawnInfos; // 0x0128 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Modules; // 0x0138 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RendererProperties; // 0x0148 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Platforms[0x30]; // 0x0158 (Size: 0x30, Type: StructProperty)
    std::uint8_t ScalabilityOverrides[0x10]; // 0x0188 (Size: 0x10, Type: StructProperty)
    std::uint8_t ParticleDataSetCompiledData[0x40]; // 0x0198 (Size: 0x40, Type: StructProperty)
    TArray<void*> ShaderOutputVariableOffsets; // 0x01D8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> CachedParameterCollectionReferences; // 0x01E8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraStatelessEmitter, EmitterTemplate) == 72, "Offset mismatch for UNiagaraStatelessEmitter::EmitterTemplate");
static_assert(offsetof(UNiagaraStatelessEmitter, bDeterministic) == 80, "Offset mismatch for UNiagaraStatelessEmitter::bDeterministic");
static_assert(offsetof(UNiagaraStatelessEmitter, AllowedFeatureMask) == 84, "Offset mismatch for UNiagaraStatelessEmitter::AllowedFeatureMask");
static_assert(offsetof(UNiagaraStatelessEmitter, RandomSeed) == 88, "Offset mismatch for UNiagaraStatelessEmitter::RandomSeed");
static_assert(offsetof(UNiagaraStatelessEmitter, FixedBounds) == 96, "Offset mismatch for UNiagaraStatelessEmitter::FixedBounds");
static_assert(offsetof(UNiagaraStatelessEmitter, EmitterState) == 152, "Offset mismatch for UNiagaraStatelessEmitter::EmitterState");
static_assert(offsetof(UNiagaraStatelessEmitter, SpawnInfos) == 296, "Offset mismatch for UNiagaraStatelessEmitter::SpawnInfos");
static_assert(offsetof(UNiagaraStatelessEmitter, Modules) == 312, "Offset mismatch for UNiagaraStatelessEmitter::Modules");
static_assert(offsetof(UNiagaraStatelessEmitter, RendererProperties) == 328, "Offset mismatch for UNiagaraStatelessEmitter::RendererProperties");
static_assert(offsetof(UNiagaraStatelessEmitter, Platforms) == 344, "Offset mismatch for UNiagaraStatelessEmitter::Platforms");
static_assert(offsetof(UNiagaraStatelessEmitter, ScalabilityOverrides) == 392, "Offset mismatch for UNiagaraStatelessEmitter::ScalabilityOverrides");
static_assert(offsetof(UNiagaraStatelessEmitter, ParticleDataSetCompiledData) == 408, "Offset mismatch for UNiagaraStatelessEmitter::ParticleDataSetCompiledData");
static_assert(offsetof(UNiagaraStatelessEmitter, ShaderOutputVariableOffsets) == 472, "Offset mismatch for UNiagaraStatelessEmitter::ShaderOutputVariableOffsets");
static_assert(offsetof(UNiagaraStatelessEmitter, CachedParameterCollectionReferences) == 488, "Offset mismatch for UNiagaraStatelessEmitter::CachedParameterCollectionReferences");

// /Script/Niagara.NiagaraStatelessEmitterDefault
// Kind: Class; super: NiagaraStatelessEmitterTemplate
class UNiagaraStatelessEmitterDefault
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Modules; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumShaderOutputVariables; // 0x0038 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UNiagaraStatelessEmitterDefault, Modules) == 40, "Offset mismatch for UNiagaraStatelessEmitterDefault::Modules");
static_assert(offsetof(UNiagaraStatelessEmitterDefault, NumShaderOutputVariables) == 56, "Offset mismatch for UNiagaraStatelessEmitterDefault::NumShaderOutputVariables");

// /Script/Niagara.NiagaraStatelessEmitterTemplate
// Kind: Class; super: Object
class UNiagaraStatelessEmitterTemplate
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Modules; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    std::int32_t NumShaderOutputVariables; // 0x0038 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UNiagaraStatelessEmitterTemplate, Modules) == 40, "Offset mismatch for UNiagaraStatelessEmitterTemplate::Modules");
static_assert(offsetof(UNiagaraStatelessEmitterTemplate, NumShaderOutputVariables) == 56, "Offset mismatch for UNiagaraStatelessEmitterTemplate::NumShaderOutputVariables");

// /Script/Niagara.NiagaraStatelessModule
// Kind: Class; super: NiagaraMergeable
class UNiagaraStatelessModule
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bModuleEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNiagaraStatelessModule, bModuleEnabled) == 40, "Offset mismatch for UNiagaraStatelessModule::bModuleEnabled");

// /Script/Niagara.NiagaraStatelessModule_AccelerationForce
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_AccelerationForce
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t AccelerationDistribution[0x40]; // 0x0030 (Size: 0x40, Type: StructProperty)
    std::uint8_t CoordinateSpace; // 0x0070 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_AccelerationForce, AccelerationDistribution) == 48, "Offset mismatch for UNiagaraStatelessModule_AccelerationForce::AccelerationDistribution");
static_assert(offsetof(UNiagaraStatelessModule_AccelerationForce, CoordinateSpace) == 112, "Offset mismatch for UNiagaraStatelessModule_AccelerationForce::CoordinateSpace");

// /Script/Niagara.NiagaraStatelessModule_AddVelocity
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_AddVelocity
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t VelocityType; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t LinearVelocityDistribution[0x40]; // 0x0038 (Size: 0x40, Type: StructProperty)
    std::uint8_t LinearVelocityScale[0x30]; // 0x0078 (Size: 0x30, Type: StructProperty)
    std::uint8_t ConeVelocityDistribution[0x30]; // 0x00A8 (Size: 0x30, Type: StructProperty)
    std::uint8_t ConeVelocityScale[0x30]; // 0x00D8 (Size: 0x30, Type: StructProperty)
    std::uint8_t ConeRotationType; // 0x0108 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0109
    std::uint8_t ConeRotation[0x40]; // 0x0110 (Size: 0x40, Type: StructProperty)
    std::uint8_t ConeDirection[0x40]; // 0x0150 (Size: 0x40, Type: StructProperty)
    float ConeAngle; // 0x0190 (Size: 0x4, Type: FloatProperty)
    float InnerCone; // 0x0194 (Size: 0x4, Type: FloatProperty)
    std::uint8_t PointVelocityDistribution[0x30]; // 0x0198 (Size: 0x30, Type: StructProperty)
    std::uint8_t PointVelocityScale[0x30]; // 0x01C8 (Size: 0x30, Type: StructProperty)
    std::uint8_t PointOrigin[0xC]; // 0x01F8 (Size: 0xC, Type: StructProperty)
    std::uint8_t bSpeedFalloffFromConeAxisEnabled; // 0x0204 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0205
    float SpeedFalloffFromConeAxis; // 0x0208 (Size: 0x4, Type: FloatProperty)
    std::uint8_t CoordinateSpace; // 0x020C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_AddVelocity, VelocityType) == 48, "Offset mismatch for UNiagaraStatelessModule_AddVelocity::VelocityType");
static_assert(offsetof(UNiagaraStatelessModule_AddVelocity, LinearVelocityDistribution) == 56, "Offset mismatch for UNiagaraStatelessModule_AddVelocity::LinearVelocityDistribution");
static_assert(offsetof(UNiagaraStatelessModule_AddVelocity, LinearVelocityScale) == 120, "Offset mismatch for UNiagaraStatelessModule_AddVelocity::LinearVelocityScale");
static_assert(offsetof(UNiagaraStatelessModule_AddVelocity, ConeVelocityDistribution) == 168, "Offset mismatch for UNiagaraStatelessModule_AddVelocity::ConeVelocityDistribution");
static_assert(offsetof(UNiagaraStatelessModule_AddVelocity, ConeVelocityScale) == 216, "Offset mismatch for UNiagaraStatelessModule_AddVelocity::ConeVelocityScale");
static_assert(offsetof(UNiagaraStatelessModule_AddVelocity, ConeRotationType) == 264, "Offset mismatch for UNiagaraStatelessModule_AddVelocity::ConeRotationType");
static_assert(offsetof(UNiagaraStatelessModule_AddVelocity, ConeRotation) == 272, "Offset mismatch for UNiagaraStatelessModule_AddVelocity::ConeRotation");
static_assert(offsetof(UNiagaraStatelessModule_AddVelocity, ConeDirection) == 336, "Offset mismatch for UNiagaraStatelessModule_AddVelocity::ConeDirection");
static_assert(offsetof(UNiagaraStatelessModule_AddVelocity, ConeAngle) == 400, "Offset mismatch for UNiagaraStatelessModule_AddVelocity::ConeAngle");
static_assert(offsetof(UNiagaraStatelessModule_AddVelocity, InnerCone) == 404, "Offset mismatch for UNiagaraStatelessModule_AddVelocity::InnerCone");
static_assert(offsetof(UNiagaraStatelessModule_AddVelocity, PointVelocityDistribution) == 408, "Offset mismatch for UNiagaraStatelessModule_AddVelocity::PointVelocityDistribution");
static_assert(offsetof(UNiagaraStatelessModule_AddVelocity, PointVelocityScale) == 456, "Offset mismatch for UNiagaraStatelessModule_AddVelocity::PointVelocityScale");
static_assert(offsetof(UNiagaraStatelessModule_AddVelocity, PointOrigin) == 504, "Offset mismatch for UNiagaraStatelessModule_AddVelocity::PointOrigin");
static_assert(offsetof(UNiagaraStatelessModule_AddVelocity, bSpeedFalloffFromConeAxisEnabled) == 516, "Offset mismatch for UNiagaraStatelessModule_AddVelocity::bSpeedFalloffFromConeAxisEnabled");
static_assert(offsetof(UNiagaraStatelessModule_AddVelocity, SpeedFalloffFromConeAxis) == 520, "Offset mismatch for UNiagaraStatelessModule_AddVelocity::SpeedFalloffFromConeAxis");
static_assert(offsetof(UNiagaraStatelessModule_AddVelocity, CoordinateSpace) == 524, "Offset mismatch for UNiagaraStatelessModule_AddVelocity::CoordinateSpace");

// /Script/Niagara.NiagaraStatelessModule_ApplyOwnerScaleToAttributes
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_ApplyOwnerScaleToAttributes
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t SystemScaleData[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_ApplyOwnerScaleToAttributes, SystemScaleData) == 48, "Offset mismatch for UNiagaraStatelessModule_ApplyOwnerScaleToAttributes::SystemScaleData");

// /Script/Niagara.NiagaraStatelessModule_CalculateAccurateVelocity
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_CalculateAccurateVelocity
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bModuleEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_CalculateAccurateVelocity, bModuleEnabled) == 40, "Offset mismatch for UNiagaraStatelessModule_CalculateAccurateVelocity::bModuleEnabled");

// /Script/Niagara.NiagaraStatelessModule_CameraOffset
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_CameraOffset
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t CameraOffsetDistribution[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_CameraOffset, CameraOffsetDistribution) == 48, "Offset mismatch for UNiagaraStatelessModule_CameraOffset::CameraOffsetDistribution");

// /Script/Niagara.NiagaraStatelessModule_CurlNoiseForce
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_CurlNoiseForce
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    float NoiseStrength; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float NoiseFrequency; // 0x0034 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bBiasNoiseFieldEnabled; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0039
    std::uint8_t BiasNoiseField[0x1]; // 0x0040 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_CurlNoiseForce, NoiseStrength) == 48, "Offset mismatch for UNiagaraStatelessModule_CurlNoiseForce::NoiseStrength");
static_assert(offsetof(UNiagaraStatelessModule_CurlNoiseForce, NoiseFrequency) == 52, "Offset mismatch for UNiagaraStatelessModule_CurlNoiseForce::NoiseFrequency");
static_assert(offsetof(UNiagaraStatelessModule_CurlNoiseForce, bBiasNoiseFieldEnabled) == 56, "Offset mismatch for UNiagaraStatelessModule_CurlNoiseForce::bBiasNoiseFieldEnabled");
static_assert(offsetof(UNiagaraStatelessModule_CurlNoiseForce, BiasNoiseField) == 64, "Offset mismatch for UNiagaraStatelessModule_CurlNoiseForce::BiasNoiseField");

// /Script/Niagara.NiagaraStatelessModule_DecalAttributes
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_DecalAttributes
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bApplyOrientation; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplySize; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bApplyFade; // 0x0032 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x5]; // 0x0033
    std::uint8_t orientation[0x40]; // 0x0038 (Size: 0x40, Type: StructProperty)
    std::uint8_t OrientationCoordinateSpace; // 0x0078 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0079
    std::uint8_t Size[0x40]; // 0x0080 (Size: 0x40, Type: StructProperty)
    std::uint8_t Fade[0x1]; // 0x00C0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_DecalAttributes, bApplyOrientation) == 48, "Offset mismatch for UNiagaraStatelessModule_DecalAttributes::bApplyOrientation");
static_assert(offsetof(UNiagaraStatelessModule_DecalAttributes, bApplySize) == 49, "Offset mismatch for UNiagaraStatelessModule_DecalAttributes::bApplySize");
static_assert(offsetof(UNiagaraStatelessModule_DecalAttributes, bApplyFade) == 50, "Offset mismatch for UNiagaraStatelessModule_DecalAttributes::bApplyFade");
static_assert(offsetof(UNiagaraStatelessModule_DecalAttributes, orientation) == 56, "Offset mismatch for UNiagaraStatelessModule_DecalAttributes::orientation");
static_assert(offsetof(UNiagaraStatelessModule_DecalAttributes, OrientationCoordinateSpace) == 120, "Offset mismatch for UNiagaraStatelessModule_DecalAttributes::OrientationCoordinateSpace");
static_assert(offsetof(UNiagaraStatelessModule_DecalAttributes, Size) == 128, "Offset mismatch for UNiagaraStatelessModule_DecalAttributes::Size");
static_assert(offsetof(UNiagaraStatelessModule_DecalAttributes, Fade) == 192, "Offset mismatch for UNiagaraStatelessModule_DecalAttributes::Fade");

// /Script/Niagara.NiagaraStatelessModule_Drag
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_Drag
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DragDistribution[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_Drag, DragDistribution) == 48, "Offset mismatch for UNiagaraStatelessModule_Drag::DragDistribution");

// /Script/Niagara.NiagaraStatelessModule_DynamicMaterialParameters
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_DynamicMaterialParameters
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bParameter0Enabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
    // 0x0030 BoolProperty bParameter1Enabled (shared storage)
    // 0x0030 BoolProperty bParameter2Enabled (shared storage)
    // 0x0030 BoolProperty bParameter3Enabled (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t Parameter0[0x108]; // 0x0038 (Size: 0x108, Type: StructProperty)
    std::uint8_t Parameter1[0x108]; // 0x0140 (Size: 0x108, Type: StructProperty)
    std::uint8_t Parameter2[0x108]; // 0x0248 (Size: 0x108, Type: StructProperty)
    std::uint8_t Parameter3[0x1]; // 0x0350 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_DynamicMaterialParameters, bParameter0Enabled) == 48, "Offset mismatch for UNiagaraStatelessModule_DynamicMaterialParameters::bParameter0Enabled");
static_assert(offsetof(UNiagaraStatelessModule_DynamicMaterialParameters, Parameter0) == 56, "Offset mismatch for UNiagaraStatelessModule_DynamicMaterialParameters::Parameter0");
static_assert(offsetof(UNiagaraStatelessModule_DynamicMaterialParameters, Parameter1) == 320, "Offset mismatch for UNiagaraStatelessModule_DynamicMaterialParameters::Parameter1");
static_assert(offsetof(UNiagaraStatelessModule_DynamicMaterialParameters, Parameter2) == 584, "Offset mismatch for UNiagaraStatelessModule_DynamicMaterialParameters::Parameter2");
static_assert(offsetof(UNiagaraStatelessModule_DynamicMaterialParameters, Parameter3) == 848, "Offset mismatch for UNiagaraStatelessModule_DynamicMaterialParameters::Parameter3");

// /Script/Niagara.NiagaraStatelessModule_GravityForce
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_GravityForce
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t GravityDistribution[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_GravityForce, GravityDistribution) == 48, "Offset mismatch for UNiagaraStatelessModule_GravityForce::GravityDistribution");

// /Script/Niagara.NiagaraStatelessModule_InitialMeshOrientation
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_InitialMeshOrientation
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t MeshOrientationMode; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t OrientationVector[0x40]; // 0x0038 (Size: 0x40, Type: StructProperty)
    std::uint8_t MeshAxisToOrient[0x40]; // 0x0078 (Size: 0x40, Type: StructProperty)
    std::uint8_t Rotation[0x1]; // 0x00B8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_InitialMeshOrientation, MeshOrientationMode) == 48, "Offset mismatch for UNiagaraStatelessModule_InitialMeshOrientation::MeshOrientationMode");
static_assert(offsetof(UNiagaraStatelessModule_InitialMeshOrientation, OrientationVector) == 56, "Offset mismatch for UNiagaraStatelessModule_InitialMeshOrientation::OrientationVector");
static_assert(offsetof(UNiagaraStatelessModule_InitialMeshOrientation, MeshAxisToOrient) == 120, "Offset mismatch for UNiagaraStatelessModule_InitialMeshOrientation::MeshAxisToOrient");
static_assert(offsetof(UNiagaraStatelessModule_InitialMeshOrientation, Rotation) == 184, "Offset mismatch for UNiagaraStatelessModule_InitialMeshOrientation::Rotation");

// /Script/Niagara.NiagaraStatelessModule_InitializeParticle
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_InitializeParticle
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t LifetimeDistribution[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    std::uint8_t ColorDistribution[0x40]; // 0x0060 (Size: 0x40, Type: StructProperty)
    std::uint8_t MassDistribution[0x30]; // 0x00A0 (Size: 0x30, Type: StructProperty)
    std::uint8_t SpriteSizeDistribution[0x38]; // 0x00D0 (Size: 0x38, Type: StructProperty)
    std::uint8_t SpriteRotationDistribution[0x30]; // 0x0108 (Size: 0x30, Type: StructProperty)
    std::uint8_t MeshScaleDistribution[0x40]; // 0x0138 (Size: 0x40, Type: StructProperty)
    std::uint8_t bWriteRibbonWidth; // 0x0178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0179
    std::uint8_t RibbonWidthDistribution[0x30]; // 0x0180 (Size: 0x30, Type: StructProperty)
    std::uint8_t InitialPositionDistribution[0x1]; // 0x01B0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_InitializeParticle, LifetimeDistribution) == 48, "Offset mismatch for UNiagaraStatelessModule_InitializeParticle::LifetimeDistribution");
static_assert(offsetof(UNiagaraStatelessModule_InitializeParticle, ColorDistribution) == 96, "Offset mismatch for UNiagaraStatelessModule_InitializeParticle::ColorDistribution");
static_assert(offsetof(UNiagaraStatelessModule_InitializeParticle, MassDistribution) == 160, "Offset mismatch for UNiagaraStatelessModule_InitializeParticle::MassDistribution");
static_assert(offsetof(UNiagaraStatelessModule_InitializeParticle, SpriteSizeDistribution) == 208, "Offset mismatch for UNiagaraStatelessModule_InitializeParticle::SpriteSizeDistribution");
static_assert(offsetof(UNiagaraStatelessModule_InitializeParticle, SpriteRotationDistribution) == 264, "Offset mismatch for UNiagaraStatelessModule_InitializeParticle::SpriteRotationDistribution");
static_assert(offsetof(UNiagaraStatelessModule_InitializeParticle, MeshScaleDistribution) == 312, "Offset mismatch for UNiagaraStatelessModule_InitializeParticle::MeshScaleDistribution");
static_assert(offsetof(UNiagaraStatelessModule_InitializeParticle, bWriteRibbonWidth) == 376, "Offset mismatch for UNiagaraStatelessModule_InitializeParticle::bWriteRibbonWidth");
static_assert(offsetof(UNiagaraStatelessModule_InitializeParticle, RibbonWidthDistribution) == 384, "Offset mismatch for UNiagaraStatelessModule_InitializeParticle::RibbonWidthDistribution");
static_assert(offsetof(UNiagaraStatelessModule_InitializeParticle, InitialPositionDistribution) == 432, "Offset mismatch for UNiagaraStatelessModule_InitializeParticle::InitialPositionDistribution");

// /Script/Niagara.NiagaraStatelessModule_LightAttributes
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_LightAttributes
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bApplyDiffuseScale; // 0x0030 (Size: 0x1, Type: BoolProperty)
    // 0x0030 BoolProperty bApplyFalloffExponent (shared storage)
    // 0x0030 BoolProperty bApplyRadius (shared storage)
    // 0x0030 BoolProperty bApplySpecularScale (shared storage)
    // 0x0030 BoolProperty bApplyVolumetricScattering (shared storage)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t Radius[0x40]; // 0x0038 (Size: 0x40, Type: StructProperty)
    std::uint8_t FallOffExponent[0x40]; // 0x0078 (Size: 0x40, Type: StructProperty)
    std::uint8_t DiffuseScale[0x40]; // 0x00B8 (Size: 0x40, Type: StructProperty)
    std::uint8_t SpecularScale[0x40]; // 0x00F8 (Size: 0x40, Type: StructProperty)
    std::uint8_t VolumetricScattering[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_LightAttributes, bApplyDiffuseScale) == 48, "Offset mismatch for UNiagaraStatelessModule_LightAttributes::bApplyDiffuseScale");
static_assert(offsetof(UNiagaraStatelessModule_LightAttributes, Radius) == 56, "Offset mismatch for UNiagaraStatelessModule_LightAttributes::Radius");
static_assert(offsetof(UNiagaraStatelessModule_LightAttributes, FallOffExponent) == 120, "Offset mismatch for UNiagaraStatelessModule_LightAttributes::FallOffExponent");
static_assert(offsetof(UNiagaraStatelessModule_LightAttributes, DiffuseScale) == 184, "Offset mismatch for UNiagaraStatelessModule_LightAttributes::DiffuseScale");
static_assert(offsetof(UNiagaraStatelessModule_LightAttributes, SpecularScale) == 248, "Offset mismatch for UNiagaraStatelessModule_LightAttributes::SpecularScale");
static_assert(offsetof(UNiagaraStatelessModule_LightAttributes, VolumetricScattering) == 312, "Offset mismatch for UNiagaraStatelessModule_LightAttributes::VolumetricScattering");

// /Script/Niagara.NiagaraStatelessModule_MeshIndex
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_MeshIndex
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t MeshIndex[0x28]; // 0x0030 (Size: 0x28, Type: StructProperty)
    TArray<void*> MeshIndexWeight; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_MeshIndex, MeshIndex) == 48, "Offset mismatch for UNiagaraStatelessModule_MeshIndex::MeshIndex");
static_assert(offsetof(UNiagaraStatelessModule_MeshIndex, MeshIndexWeight) == 88, "Offset mismatch for UNiagaraStatelessModule_MeshIndex::MeshIndexWeight");

// /Script/Niagara.NiagaraStatelessModule_MeshRotationRate
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_MeshRotationRate
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bUseRateScale; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t RotationRateDistribution[0x40]; // 0x0038 (Size: 0x40, Type: StructProperty)
    std::uint8_t RateScaleDistribution[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_MeshRotationRate, bUseRateScale) == 48, "Offset mismatch for UNiagaraStatelessModule_MeshRotationRate::bUseRateScale");
static_assert(offsetof(UNiagaraStatelessModule_MeshRotationRate, RotationRateDistribution) == 56, "Offset mismatch for UNiagaraStatelessModule_MeshRotationRate::RotationRateDistribution");
static_assert(offsetof(UNiagaraStatelessModule_MeshRotationRate, RateScaleDistribution) == 120, "Offset mismatch for UNiagaraStatelessModule_MeshRotationRate::RateScaleDistribution");

// /Script/Niagara.NiagaraStatelessModule_RotateAroundPoint
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_RotateAroundPoint
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t Rate[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    std::uint8_t Radius[0x30]; // 0x0060 (Size: 0x30, Type: StructProperty)
    std::uint8_t InitialPhase[0x30]; // 0x0090 (Size: 0x30, Type: StructProperty)
    std::uint8_t CenterCoordinateSpace; // 0x00C0 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    std::uint8_t Center[0x40]; // 0x00C8 (Size: 0x40, Type: StructProperty)
    std::uint8_t RotationCoordinateSpace; // 0x0108 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0109
    std::uint8_t RotationAxis[0x1]; // 0x0110 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_RotateAroundPoint, Rate) == 48, "Offset mismatch for UNiagaraStatelessModule_RotateAroundPoint::Rate");
static_assert(offsetof(UNiagaraStatelessModule_RotateAroundPoint, Radius) == 96, "Offset mismatch for UNiagaraStatelessModule_RotateAroundPoint::Radius");
static_assert(offsetof(UNiagaraStatelessModule_RotateAroundPoint, InitialPhase) == 144, "Offset mismatch for UNiagaraStatelessModule_RotateAroundPoint::InitialPhase");
static_assert(offsetof(UNiagaraStatelessModule_RotateAroundPoint, CenterCoordinateSpace) == 192, "Offset mismatch for UNiagaraStatelessModule_RotateAroundPoint::CenterCoordinateSpace");
static_assert(offsetof(UNiagaraStatelessModule_RotateAroundPoint, Center) == 200, "Offset mismatch for UNiagaraStatelessModule_RotateAroundPoint::Center");
static_assert(offsetof(UNiagaraStatelessModule_RotateAroundPoint, RotationCoordinateSpace) == 264, "Offset mismatch for UNiagaraStatelessModule_RotateAroundPoint::RotationCoordinateSpace");
static_assert(offsetof(UNiagaraStatelessModule_RotateAroundPoint, RotationAxis) == 272, "Offset mismatch for UNiagaraStatelessModule_RotateAroundPoint::RotationAxis");

// /Script/Niagara.NiagaraStatelessModule_ScaleColor
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_ScaleColor
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ScaleDistribution[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_ScaleColor, ScaleDistribution) == 48, "Offset mismatch for UNiagaraStatelessModule_ScaleColor::ScaleDistribution");

// /Script/Niagara.NiagaraStatelessModule_ScaleMeshSize
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_ScaleMeshSize
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ScaleDistribution[0x40]; // 0x0030 (Size: 0x40, Type: StructProperty)
    std::uint8_t ScaleCurveRange[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_ScaleMeshSize, ScaleDistribution) == 48, "Offset mismatch for UNiagaraStatelessModule_ScaleMeshSize::ScaleDistribution");
static_assert(offsetof(UNiagaraStatelessModule_ScaleMeshSize, ScaleCurveRange) == 112, "Offset mismatch for UNiagaraStatelessModule_ScaleMeshSize::ScaleCurveRange");

// /Script/Niagara.NiagaraStatelessModule_ScaleMeshSizeBySpeed
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_ScaleMeshSizeBySpeed
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t VelocityThreshold[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    std::uint8_t MinScaleFactor[0x40]; // 0x0060 (Size: 0x40, Type: StructProperty)
    std::uint8_t MaxScaleFactor[0x40]; // 0x00A0 (Size: 0x40, Type: StructProperty)
    std::uint8_t bSampleScaleFactorByCurve; // 0x00E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00E1
    std::uint8_t SampleFactorCurve[0x1]; // 0x00E8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_ScaleMeshSizeBySpeed, VelocityThreshold) == 48, "Offset mismatch for UNiagaraStatelessModule_ScaleMeshSizeBySpeed::VelocityThreshold");
static_assert(offsetof(UNiagaraStatelessModule_ScaleMeshSizeBySpeed, MinScaleFactor) == 96, "Offset mismatch for UNiagaraStatelessModule_ScaleMeshSizeBySpeed::MinScaleFactor");
static_assert(offsetof(UNiagaraStatelessModule_ScaleMeshSizeBySpeed, MaxScaleFactor) == 160, "Offset mismatch for UNiagaraStatelessModule_ScaleMeshSizeBySpeed::MaxScaleFactor");
static_assert(offsetof(UNiagaraStatelessModule_ScaleMeshSizeBySpeed, bSampleScaleFactorByCurve) == 224, "Offset mismatch for UNiagaraStatelessModule_ScaleMeshSizeBySpeed::bSampleScaleFactorByCurve");
static_assert(offsetof(UNiagaraStatelessModule_ScaleMeshSizeBySpeed, SampleFactorCurve) == 232, "Offset mismatch for UNiagaraStatelessModule_ScaleMeshSizeBySpeed::SampleFactorCurve");

// /Script/Niagara.NiagaraStatelessModule_ScaleRibbonWidth
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_ScaleRibbonWidth
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ScaleDistribution[0x40]; // 0x0030 (Size: 0x40, Type: StructProperty)
    std::uint8_t ScaleCurveRange[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_ScaleRibbonWidth, ScaleDistribution) == 48, "Offset mismatch for UNiagaraStatelessModule_ScaleRibbonWidth::ScaleDistribution");
static_assert(offsetof(UNiagaraStatelessModule_ScaleRibbonWidth, ScaleCurveRange) == 112, "Offset mismatch for UNiagaraStatelessModule_ScaleRibbonWidth::ScaleCurveRange");

// /Script/Niagara.NiagaraStatelessModule_ScaleSpriteSize
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_ScaleSpriteSize
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ScaleDistribution[0x40]; // 0x0030 (Size: 0x40, Type: StructProperty)
    std::uint8_t ScaleCurveRange[0x1]; // 0x0070 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_ScaleSpriteSize, ScaleDistribution) == 48, "Offset mismatch for UNiagaraStatelessModule_ScaleSpriteSize::ScaleDistribution");
static_assert(offsetof(UNiagaraStatelessModule_ScaleSpriteSize, ScaleCurveRange) == 112, "Offset mismatch for UNiagaraStatelessModule_ScaleSpriteSize::ScaleCurveRange");

// /Script/Niagara.NiagaraStatelessModule_ScaleSpriteSizeBySpeed
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_ScaleSpriteSizeBySpeed
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t VelocityThreshold[0x30]; // 0x0030 (Size: 0x30, Type: StructProperty)
    std::uint8_t MinScaleFactor[0x38]; // 0x0060 (Size: 0x38, Type: StructProperty)
    std::uint8_t MaxScaleFactor[0x38]; // 0x0098 (Size: 0x38, Type: StructProperty)
    std::uint8_t bSampleScaleFactorByCurve; // 0x00D0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00D1
    std::uint8_t SampleFactorCurve[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_ScaleSpriteSizeBySpeed, VelocityThreshold) == 48, "Offset mismatch for UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::VelocityThreshold");
static_assert(offsetof(UNiagaraStatelessModule_ScaleSpriteSizeBySpeed, MinScaleFactor) == 96, "Offset mismatch for UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::MinScaleFactor");
static_assert(offsetof(UNiagaraStatelessModule_ScaleSpriteSizeBySpeed, MaxScaleFactor) == 152, "Offset mismatch for UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::MaxScaleFactor");
static_assert(offsetof(UNiagaraStatelessModule_ScaleSpriteSizeBySpeed, bSampleScaleFactorByCurve) == 208, "Offset mismatch for UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::bSampleScaleFactorByCurve");
static_assert(offsetof(UNiagaraStatelessModule_ScaleSpriteSizeBySpeed, SampleFactorCurve) == 216, "Offset mismatch for UNiagaraStatelessModule_ScaleSpriteSizeBySpeed::SampleFactorCurve");

// /Script/Niagara.NiagaraStatelessModule_ShapeLocation
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_ShapeLocation
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t ShapePrimitive; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t BoxSize[0x40]; // 0x0038 (Size: 0x40, Type: StructProperty)
    std::uint8_t bBoxSurfaceOnly; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BoxSurfaceExpansion; // 0x0079 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x6]; // 0x007A
    std::uint8_t BoxSurfaceThickness[0x30]; // 0x0080 (Size: 0x30, Type: StructProperty)
    std::uint8_t PlaneSize[0x38]; // 0x00B0 (Size: 0x38, Type: StructProperty)
    std::uint8_t bPlaneEdgesOnly; // 0x00E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PlaneEdgeExpansion; // 0x00E9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x6]; // 0x00EA
    std::uint8_t PlaneEdgeThickness[0x30]; // 0x00F0 (Size: 0x30, Type: StructProperty)
    std::uint8_t CylinderHeight[0x30]; // 0x0120 (Size: 0x30, Type: StructProperty)
    std::uint8_t CylinderRadius[0x30]; // 0x0150 (Size: 0x30, Type: StructProperty)
    std::uint8_t CylinderHeightMidpoint[0x30]; // 0x0180 (Size: 0x30, Type: StructProperty)
    std::uint8_t bCylinderSurfaceOnly; // 0x01B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCylinderSurfaceOnlyIncludeEndCaps; // 0x01B1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t CylinderSurfaceExpansion; // 0x01B2 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x5]; // 0x01B3
    std::uint8_t CylinderSurfaceThickness[0x30]; // 0x01B8 (Size: 0x30, Type: StructProperty)
    std::uint8_t RingRadius[0x30]; // 0x01E8 (Size: 0x30, Type: StructProperty)
    std::uint8_t DiscCoverage[0x30]; // 0x0218 (Size: 0x30, Type: StructProperty)
    std::uint8_t RingUDistribution[0x30]; // 0x0248 (Size: 0x30, Type: StructProperty)
    std::uint8_t SphereRadius[0x30]; // 0x0278 (Size: 0x30, Type: StructProperty)
    std::uint8_t CoordinateSpace; // 0x02A8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x7]; // 0x02A9
    std::uint8_t ShapeRotation[0x40]; // 0x02B0 (Size: 0x40, Type: StructProperty)
    std::uint8_t ShapeScale[0x40]; // 0x02F0 (Size: 0x40, Type: StructProperty)
    std::uint8_t TransformOffset[0x40]; // 0x0330 (Size: 0x40, Type: StructProperty)
    std::uint8_t TransformOffsetScale[0x1]; // 0x0370 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, ShapePrimitive) == 48, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::ShapePrimitive");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, BoxSize) == 56, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::BoxSize");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, bBoxSurfaceOnly) == 120, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::bBoxSurfaceOnly");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, BoxSurfaceExpansion) == 121, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::BoxSurfaceExpansion");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, BoxSurfaceThickness) == 128, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::BoxSurfaceThickness");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, PlaneSize) == 176, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::PlaneSize");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, bPlaneEdgesOnly) == 232, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::bPlaneEdgesOnly");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, PlaneEdgeExpansion) == 233, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::PlaneEdgeExpansion");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, PlaneEdgeThickness) == 240, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::PlaneEdgeThickness");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, CylinderHeight) == 288, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::CylinderHeight");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, CylinderRadius) == 336, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::CylinderRadius");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, CylinderHeightMidpoint) == 384, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::CylinderHeightMidpoint");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, bCylinderSurfaceOnly) == 432, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::bCylinderSurfaceOnly");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, bCylinderSurfaceOnlyIncludeEndCaps) == 433, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::bCylinderSurfaceOnlyIncludeEndCaps");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, CylinderSurfaceExpansion) == 434, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::CylinderSurfaceExpansion");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, CylinderSurfaceThickness) == 440, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::CylinderSurfaceThickness");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, RingRadius) == 488, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::RingRadius");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, DiscCoverage) == 536, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::DiscCoverage");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, RingUDistribution) == 584, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::RingUDistribution");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, SphereRadius) == 632, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::SphereRadius");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, CoordinateSpace) == 680, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::CoordinateSpace");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, ShapeRotation) == 688, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::ShapeRotation");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, ShapeScale) == 752, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::ShapeScale");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, TransformOffset) == 816, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::TransformOffset");
static_assert(offsetof(UNiagaraStatelessModule_ShapeLocation, TransformOffsetScale) == 880, "Offset mismatch for UNiagaraStatelessModule_ShapeLocation::TransformOffsetScale");

// /Script/Niagara.NiagaraStatelessModule_SolveVelocitiesAndForces
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_SolveVelocitiesAndForces
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bModuleEnabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_SolveVelocitiesAndForces, bModuleEnabled) == 40, "Offset mismatch for UNiagaraStatelessModule_SolveVelocitiesAndForces::bModuleEnabled");

// /Script/Niagara.NiagaraStatelessModule_SpriteFacingAndAlignment
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_SpriteFacingAndAlignment
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bSpriteFacingEnabled; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSpriteAlignmentEnabled; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0032
    std::uint8_t SpriteFacing[0x40]; // 0x0038 (Size: 0x40, Type: StructProperty)
    std::uint8_t SpriteAlignment[0x1]; // 0x0078 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_SpriteFacingAndAlignment, bSpriteFacingEnabled) == 48, "Offset mismatch for UNiagaraStatelessModule_SpriteFacingAndAlignment::bSpriteFacingEnabled");
static_assert(offsetof(UNiagaraStatelessModule_SpriteFacingAndAlignment, bSpriteAlignmentEnabled) == 49, "Offset mismatch for UNiagaraStatelessModule_SpriteFacingAndAlignment::bSpriteAlignmentEnabled");
static_assert(offsetof(UNiagaraStatelessModule_SpriteFacingAndAlignment, SpriteFacing) == 56, "Offset mismatch for UNiagaraStatelessModule_SpriteFacingAndAlignment::SpriteFacing");
static_assert(offsetof(UNiagaraStatelessModule_SpriteFacingAndAlignment, SpriteAlignment) == 120, "Offset mismatch for UNiagaraStatelessModule_SpriteFacingAndAlignment::SpriteAlignment");

// /Script/Niagara.NiagaraStatelessModule_SpriteRotationRate
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_SpriteRotationRate
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t bUseRateScale; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t RotationRateDistribution[0x30]; // 0x0038 (Size: 0x30, Type: StructProperty)
    std::uint8_t RateScaleDistribution[0x1]; // 0x0068 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_SpriteRotationRate, bUseRateScale) == 48, "Offset mismatch for UNiagaraStatelessModule_SpriteRotationRate::bUseRateScale");
static_assert(offsetof(UNiagaraStatelessModule_SpriteRotationRate, RotationRateDistribution) == 56, "Offset mismatch for UNiagaraStatelessModule_SpriteRotationRate::RotationRateDistribution");
static_assert(offsetof(UNiagaraStatelessModule_SpriteRotationRate, RateScaleDistribution) == 104, "Offset mismatch for UNiagaraStatelessModule_SpriteRotationRate::RateScaleDistribution");

// /Script/Niagara.NiagaraStatelessModule_SubUVAnimation
// Kind: Class; super: NiagaraStatelessModule
class UNiagaraStatelessModule_SubUVAnimation
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::int32_t NumFrames; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0034
    std::uint8_t FrameIndex[0x28]; // 0x0038 (Size: 0x28, Type: StructProperty)
    std::uint8_t bStartFrameRangeOverride_Enabled; // 0x0060 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEndFrameRangeOverride_Enabled; // 0x0061 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x2]; // 0x0062
    std::int32_t StartFrameRangeOverride; // 0x0064 (Size: 0x4, Type: IntProperty)
    std::int32_t EndFrameRangeOverride; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::uint8_t AnimationMode; // 0x006C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x3]; // 0x006D
    float LoopsPerSecond; // 0x0070 (Size: 0x4, Type: FloatProperty)
    float RandomChangeInterval; // 0x0074 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UNiagaraStatelessModule_SubUVAnimation, NumFrames) == 48, "Offset mismatch for UNiagaraStatelessModule_SubUVAnimation::NumFrames");
static_assert(offsetof(UNiagaraStatelessModule_SubUVAnimation, FrameIndex) == 56, "Offset mismatch for UNiagaraStatelessModule_SubUVAnimation::FrameIndex");
static_assert(offsetof(UNiagaraStatelessModule_SubUVAnimation, bStartFrameRangeOverride_Enabled) == 96, "Offset mismatch for UNiagaraStatelessModule_SubUVAnimation::bStartFrameRangeOverride_Enabled");
static_assert(offsetof(UNiagaraStatelessModule_SubUVAnimation, bEndFrameRangeOverride_Enabled) == 97, "Offset mismatch for UNiagaraStatelessModule_SubUVAnimation::bEndFrameRangeOverride_Enabled");
static_assert(offsetof(UNiagaraStatelessModule_SubUVAnimation, StartFrameRangeOverride) == 100, "Offset mismatch for UNiagaraStatelessModule_SubUVAnimation::StartFrameRangeOverride");
static_assert(offsetof(UNiagaraStatelessModule_SubUVAnimation, EndFrameRangeOverride) == 104, "Offset mismatch for UNiagaraStatelessModule_SubUVAnimation::EndFrameRangeOverride");
static_assert(offsetof(UNiagaraStatelessModule_SubUVAnimation, AnimationMode) == 108, "Offset mismatch for UNiagaraStatelessModule_SubUVAnimation::AnimationMode");
static_assert(offsetof(UNiagaraStatelessModule_SubUVAnimation, LoopsPerSecond) == 112, "Offset mismatch for UNiagaraStatelessModule_SubUVAnimation::LoopsPerSecond");
static_assert(offsetof(UNiagaraStatelessModule_SubUVAnimation, RandomChangeInterval) == 116, "Offset mismatch for UNiagaraStatelessModule_SubUVAnimation::RandomChangeInterval");

// /Script/Niagara.NiagaraSystem
// Kind: Class; super: FXSystemAsset
class UNiagaraSystem
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t bOverrideCastShadow; // 0x0060 (Size: 0x1, Type: BoolProperty)
    // 0x0060 BoolProperty bOverrideCustomDepthStencilValue (shared storage)
    // 0x0060 BoolProperty bOverrideCustomDepthStencilWriteMask (shared storage)
    // 0x0060 BoolProperty bOverrideReceivesDecals (shared storage)
    // 0x0060 BoolProperty bOverrideRenderCustomDepth (shared storage)
    // 0x0060 BoolProperty bOverrideTranslucencySortDistanceOffset (shared storage)
    // 0x0060 BoolProperty bOverrideTranslucencySortPriority (shared storage)
    // 0x0060 BoolProperty bSupportLargeWorldCoordinates (shared storage)
    std::uint8_t bCastShadow; // 0x0061 (Size: 0x1, Type: BoolProperty)
    // 0x0061 BoolProperty bInitialOwnerVelocityFromActor (shared storage)
    // 0x0061 BoolProperty bReceivesDecals (shared storage)
    // 0x0061 BoolProperty bRenderCustomDepth (shared storage)
    std::uint8_t LargeWorldCoordinateTileUpdateMode[0x2]; // 0x0062 (Size: 0x2, Type: OptionalProperty)
    std::uint8_t CustomDepthStencilWriteMask; // 0x0064 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0065
    std::int32_t CustomDepthStencilValue; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::int32_t TranslucencySortPriority; // 0x006C (Size: 0x4, Type: IntProperty)
    float TranslucencySortDistanceOffset; // 0x0070 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bDumpDebugEmitterInfo; // 0x0074 (Size: 0x1, Type: BoolProperty)
    // 0x0074 BoolProperty bDumpDebugSystemInfo (shared storage)
    // 0x0074 BoolProperty bOverrideScalabilitySettings (shared storage)
    // 0x0074 BoolProperty bRequireCurrentFrameData (shared storage)
    std::uint8_t Pad_0002[0x3]; // 0x0075
    std::uint8_t bFixedBounds; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x7]; // 0x0079
    void* EffectType; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bAllowCullingForLocalPlayersOverride; // 0x0088 (Size: 0x1, Type: BoolProperty)
    // 0x0088 BoolProperty bOverrideAllowCullingForLocalPlayers (shared storage)
    std::uint8_t Pad_0004[0x7]; // 0x0089
    std::uint8_t SystemScalabilityOverrides[0x10]; // 0x0090 (Size: 0x10, Type: StructProperty)
    std::uint8_t Platforms[0x30]; // 0x00A0 (Size: 0x30, Type: StructProperty)
    TArray<void*> EmitterHandles; // 0x00D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ParameterCollectionOverrides; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    void* SystemSpawnScript; // 0x00F0 (Size: 0x8, Type: ObjectProperty)
    void* SystemUpdateScript; // 0x00F8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0005[0x10]; // 0x0100
    std::uint8_t SystemCompiledData[0x238]; // 0x0110 (Size: 0x238, Type: StructProperty)
    TMap<void*, void*> ScriptRuntimeCookedDataMap; // 0x0348 (Size: 0x10, Type: MapProperty)
    std::uint8_t ExposedParameters[0x98]; // 0x0358 (Size: 0x98, Type: StructProperty)
    std::uint8_t FixedBounds[0x38]; // 0x03F0 (Size: 0x38, Type: StructProperty)
    std::uint8_t bUseInitialStreamingBounds; // 0x0428 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x7]; // 0x0429
    std::uint8_t InitialStreamingBounds[0x38]; // 0x0430 (Size: 0x38, Type: StructProperty)
    std::uint8_t bNeedsGPUContextInitForDataInterfaces; // 0x0468 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDeterminism; // 0x0469 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFixedTickDelta; // 0x046A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x1]; // 0x046B
    std::int32_t RandomSeed; // 0x046C (Size: 0x4, Type: IntProperty)
    float WarmupTime; // 0x0470 (Size: 0x4, Type: FloatProperty)
    std::int32_t WarmupTickCount; // 0x0474 (Size: 0x4, Type: IntProperty)
    float WarmupTickDelta; // 0x0478 (Size: 0x4, Type: FloatProperty)
    float FixedTickDeltaTime; // 0x047C (Size: 0x4, Type: FloatProperty)
    std::uint8_t MaxEmitterImportance; // 0x0480 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0008[0x97]; // 0x0481
    std::uint8_t bAllowSystemStateFastPath; // 0x0518 (Size: 0x1, Type: BoolProperty)
    // 0x0518 BoolProperty bSystemStateFastPathEnabled (shared storage)
    std::uint8_t Pad_0009[0xF]; // 0x0519
    std::uint8_t SystemStateDataStruct[0x1]; // 0x0528 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraSystem, bOverrideCastShadow) == 96, "Offset mismatch for UNiagaraSystem::bOverrideCastShadow");
static_assert(offsetof(UNiagaraSystem, bCastShadow) == 97, "Offset mismatch for UNiagaraSystem::bCastShadow");
static_assert(offsetof(UNiagaraSystem, LargeWorldCoordinateTileUpdateMode) == 98, "Offset mismatch for UNiagaraSystem::LargeWorldCoordinateTileUpdateMode");
static_assert(offsetof(UNiagaraSystem, CustomDepthStencilWriteMask) == 100, "Offset mismatch for UNiagaraSystem::CustomDepthStencilWriteMask");
static_assert(offsetof(UNiagaraSystem, CustomDepthStencilValue) == 104, "Offset mismatch for UNiagaraSystem::CustomDepthStencilValue");
static_assert(offsetof(UNiagaraSystem, TranslucencySortPriority) == 108, "Offset mismatch for UNiagaraSystem::TranslucencySortPriority");
static_assert(offsetof(UNiagaraSystem, TranslucencySortDistanceOffset) == 112, "Offset mismatch for UNiagaraSystem::TranslucencySortDistanceOffset");
static_assert(offsetof(UNiagaraSystem, bDumpDebugEmitterInfo) == 116, "Offset mismatch for UNiagaraSystem::bDumpDebugEmitterInfo");
static_assert(offsetof(UNiagaraSystem, bFixedBounds) == 120, "Offset mismatch for UNiagaraSystem::bFixedBounds");
static_assert(offsetof(UNiagaraSystem, EffectType) == 128, "Offset mismatch for UNiagaraSystem::EffectType");
static_assert(offsetof(UNiagaraSystem, bAllowCullingForLocalPlayersOverride) == 136, "Offset mismatch for UNiagaraSystem::bAllowCullingForLocalPlayersOverride");
static_assert(offsetof(UNiagaraSystem, SystemScalabilityOverrides) == 144, "Offset mismatch for UNiagaraSystem::SystemScalabilityOverrides");
static_assert(offsetof(UNiagaraSystem, Platforms) == 160, "Offset mismatch for UNiagaraSystem::Platforms");
static_assert(offsetof(UNiagaraSystem, EmitterHandles) == 208, "Offset mismatch for UNiagaraSystem::EmitterHandles");
static_assert(offsetof(UNiagaraSystem, ParameterCollectionOverrides) == 224, "Offset mismatch for UNiagaraSystem::ParameterCollectionOverrides");
static_assert(offsetof(UNiagaraSystem, SystemSpawnScript) == 240, "Offset mismatch for UNiagaraSystem::SystemSpawnScript");
static_assert(offsetof(UNiagaraSystem, SystemUpdateScript) == 248, "Offset mismatch for UNiagaraSystem::SystemUpdateScript");
static_assert(offsetof(UNiagaraSystem, SystemCompiledData) == 272, "Offset mismatch for UNiagaraSystem::SystemCompiledData");
static_assert(offsetof(UNiagaraSystem, ScriptRuntimeCookedDataMap) == 840, "Offset mismatch for UNiagaraSystem::ScriptRuntimeCookedDataMap");
static_assert(offsetof(UNiagaraSystem, ExposedParameters) == 856, "Offset mismatch for UNiagaraSystem::ExposedParameters");
static_assert(offsetof(UNiagaraSystem, FixedBounds) == 1008, "Offset mismatch for UNiagaraSystem::FixedBounds");
static_assert(offsetof(UNiagaraSystem, bUseInitialStreamingBounds) == 1064, "Offset mismatch for UNiagaraSystem::bUseInitialStreamingBounds");
static_assert(offsetof(UNiagaraSystem, InitialStreamingBounds) == 1072, "Offset mismatch for UNiagaraSystem::InitialStreamingBounds");
static_assert(offsetof(UNiagaraSystem, bNeedsGPUContextInitForDataInterfaces) == 1128, "Offset mismatch for UNiagaraSystem::bNeedsGPUContextInitForDataInterfaces");
static_assert(offsetof(UNiagaraSystem, bDeterminism) == 1129, "Offset mismatch for UNiagaraSystem::bDeterminism");
static_assert(offsetof(UNiagaraSystem, bFixedTickDelta) == 1130, "Offset mismatch for UNiagaraSystem::bFixedTickDelta");
static_assert(offsetof(UNiagaraSystem, RandomSeed) == 1132, "Offset mismatch for UNiagaraSystem::RandomSeed");
static_assert(offsetof(UNiagaraSystem, WarmupTime) == 1136, "Offset mismatch for UNiagaraSystem::WarmupTime");
static_assert(offsetof(UNiagaraSystem, WarmupTickCount) == 1140, "Offset mismatch for UNiagaraSystem::WarmupTickCount");
static_assert(offsetof(UNiagaraSystem, WarmupTickDelta) == 1144, "Offset mismatch for UNiagaraSystem::WarmupTickDelta");
static_assert(offsetof(UNiagaraSystem, FixedTickDeltaTime) == 1148, "Offset mismatch for UNiagaraSystem::FixedTickDeltaTime");
static_assert(offsetof(UNiagaraSystem, MaxEmitterImportance) == 1152, "Offset mismatch for UNiagaraSystem::MaxEmitterImportance");
static_assert(offsetof(UNiagaraSystem, bAllowSystemStateFastPath) == 1304, "Offset mismatch for UNiagaraSystem::bAllowSystemStateFastPath");
static_assert(offsetof(UNiagaraSystem, SystemStateDataStruct) == 1320, "Offset mismatch for UNiagaraSystem::SystemStateDataStruct");

// /Script/Niagara.NiagaraSystemCollection
// Kind: Class; super: DataAsset
class UNiagaraSystemCollection
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t SystemCollection[0x30]; // 0x0028 (Size: 0x30, Type: StructProperty)
    std::uint8_t bLoadImmediately; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNiagaraSystemCollection, SystemCollection) == 40, "Offset mismatch for UNiagaraSystemCollection::SystemCollection");
static_assert(offsetof(UNiagaraSystemCollection, bLoadImmediately) == 88, "Offset mismatch for UNiagaraSystemCollection::bLoadImmediately");

// /Script/Niagara.NiagaraSystemReadinessSettings
// Kind: Class; super: NiagaraSettingsProfileSet
class UNiagaraSystemReadinessSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* Parent; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> Profiles; // 0x0030 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UNiagaraSystemReadinessSettings, Parent) == 40, "Offset mismatch for UNiagaraSystemReadinessSettings::Parent");
static_assert(offsetof(UNiagaraSystemReadinessSettings, Profiles) == 48, "Offset mismatch for UNiagaraSystemReadinessSettings::Profiles");

// /Script/Niagara.NiagaraValidationRule
// Kind: Class; super: Object
class UNiagaraValidationRule
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsConfigDisabled; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNiagaraValidationRule, bIsConfigDisabled) == 40, "Offset mismatch for UNiagaraValidationRule::bIsConfigDisabled");

// /Script/Niagara.NiagaraValidationRuleSet
// Kind: Class; super: Object
class UNiagaraValidationRuleSet
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> ValidationRules; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNiagaraValidationRuleSet, ValidationRules) == 40, "Offset mismatch for UNiagaraValidationRuleSet::ValidationRules");

// /Script/Niagara.NiagaraVersionUpgradeBase
// Kind: Class; super: Object
class UNiagaraVersionUpgradeBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Niagara.NiagaraVolumeRendererProperties
// Kind: Class; super: NiagaraRendererProperties
class UNiagaraVolumeRendererProperties
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    void* Material; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t MaterialParameterBinding[0xC]; // 0x00A0 (Size: 0xC, Type: StructProperty)
    std::int32_t RendererVisibility; // 0x00AC (Size: 0x4, Type: IntProperty)
    float StepFactor; // 0x00B0 (Size: 0x4, Type: FloatProperty)
    float LightingDownsampleFactor; // 0x00B4 (Size: 0x4, Type: FloatProperty)
    float ShadowStepFactor; // 0x00B8 (Size: 0x4, Type: FloatProperty)
    float ShadowBiasFactor; // 0x00BC (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x3C]; // 0x00C0
    std::uint8_t RendererVisibilityTagBinding[0x14]; // 0x00FC (Size: 0x14, Type: StructProperty)
    std::uint8_t VolumeResolutionMaxAxisBinding[0x14]; // 0x0110 (Size: 0x14, Type: StructProperty)
    std::uint8_t VolumeWorldSpaceSizeBinding[0x14]; // 0x0124 (Size: 0x14, Type: StructProperty)
    std::uint8_t MaterialParameters[0x1]; // 0x0138 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UNiagaraVolumeRendererProperties, Material) == 152, "Offset mismatch for UNiagaraVolumeRendererProperties::Material");
static_assert(offsetof(UNiagaraVolumeRendererProperties, MaterialParameterBinding) == 160, "Offset mismatch for UNiagaraVolumeRendererProperties::MaterialParameterBinding");
static_assert(offsetof(UNiagaraVolumeRendererProperties, RendererVisibility) == 172, "Offset mismatch for UNiagaraVolumeRendererProperties::RendererVisibility");
static_assert(offsetof(UNiagaraVolumeRendererProperties, StepFactor) == 176, "Offset mismatch for UNiagaraVolumeRendererProperties::StepFactor");
static_assert(offsetof(UNiagaraVolumeRendererProperties, LightingDownsampleFactor) == 180, "Offset mismatch for UNiagaraVolumeRendererProperties::LightingDownsampleFactor");
static_assert(offsetof(UNiagaraVolumeRendererProperties, ShadowStepFactor) == 184, "Offset mismatch for UNiagaraVolumeRendererProperties::ShadowStepFactor");
static_assert(offsetof(UNiagaraVolumeRendererProperties, ShadowBiasFactor) == 188, "Offset mismatch for UNiagaraVolumeRendererProperties::ShadowBiasFactor");
static_assert(offsetof(UNiagaraVolumeRendererProperties, RendererVisibilityTagBinding) == 252, "Offset mismatch for UNiagaraVolumeRendererProperties::RendererVisibilityTagBinding");
static_assert(offsetof(UNiagaraVolumeRendererProperties, VolumeResolutionMaxAxisBinding) == 272, "Offset mismatch for UNiagaraVolumeRendererProperties::VolumeResolutionMaxAxisBinding");
static_assert(offsetof(UNiagaraVolumeRendererProperties, VolumeWorldSpaceSizeBinding) == 292, "Offset mismatch for UNiagaraVolumeRendererProperties::VolumeWorldSpaceSizeBinding");
static_assert(offsetof(UNiagaraVolumeRendererProperties, MaterialParameters) == 312, "Offset mismatch for UNiagaraVolumeRendererProperties::MaterialParameters");

// /Script/Niagara.VolumeCache
// Kind: Class; super: Object
class UVolumeCache
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FString FilePath; // 0x0028 (Size: 0x10, Type: StrProperty)
    std::uint8_t CacheType; // 0x0038 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0039
    std::uint8_t Resolution[0xC]; // 0x003C (Size: 0xC, Type: StructProperty)
    std::int32_t FrameRangeStart; // 0x0048 (Size: 0x4, Type: IntProperty)
    std::int32_t FrameRangeEnd; // 0x004C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UVolumeCache, FilePath) == 40, "Offset mismatch for UVolumeCache::FilePath");
static_assert(offsetof(UVolumeCache, CacheType) == 56, "Offset mismatch for UVolumeCache::CacheType");
static_assert(offsetof(UVolumeCache, Resolution) == 60, "Offset mismatch for UVolumeCache::Resolution");
static_assert(offsetof(UVolumeCache, FrameRangeStart) == 72, "Offset mismatch for UVolumeCache::FrameRangeStart");
static_assert(offsetof(UVolumeCache, FrameRangeEnd) == 76, "Offset mismatch for UVolumeCache::FrameRangeEnd");
