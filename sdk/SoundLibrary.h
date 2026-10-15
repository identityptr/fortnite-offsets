/**
 * decamp dumper generated SDK
 * Package: /Script/SoundLibrary
 */
#pragma once
#include "Basic.h"

// /Script/SoundLibrary.SoundLibraryActorData
// Kind: ScriptStruct; super: none
struct FSoundLibraryActorData
{
public:
    std::uint8_t Pad_0000[0x20]; // 0x0000
    TArray<void*> SoundLibraries; // 0x0020 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> SoundLibraryContexts; // 0x0030 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSoundLibraryActorData, SoundLibraries) == 32, "Offset mismatch for FSoundLibraryActorData::SoundLibraries");
static_assert(offsetof(FSoundLibraryActorData, SoundLibraryContexts) == 48, "Offset mismatch for FSoundLibraryActorData::SoundLibraryContexts");

// /Script/SoundLibrary.SoundLibraryAnimContextSettings
// Kind: ScriptStruct; super: none
struct FSoundLibraryAnimContextSettings
{
public:
    std::uint8_t AnimRateThreshold[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    std::uint8_t EventName[0x4]; // 0x0008 (Size: 0x4, Type: StructProperty)
    std::uint8_t bOnThisActor; // 0x000C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAttachToActor; // 0x000D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStopWhenAttachedDestroyed; // 0x000E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x1]; // 0x000F
    std::uint8_t Offset[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t AttachName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    float FadeTime; // 0x002C (Size: 0x4, Type: FloatProperty)
    float NotifyTriggerChance; // 0x0030 (Size: 0x4, Type: FloatProperty)
    float VolumeMultiplier; // 0x0034 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSoundLibraryAnimContextSettings, AnimRateThreshold) == 0, "Offset mismatch for FSoundLibraryAnimContextSettings::AnimRateThreshold");
static_assert(offsetof(FSoundLibraryAnimContextSettings, EventName) == 8, "Offset mismatch for FSoundLibraryAnimContextSettings::EventName");
static_assert(offsetof(FSoundLibraryAnimContextSettings, bOnThisActor) == 12, "Offset mismatch for FSoundLibraryAnimContextSettings::bOnThisActor");
static_assert(offsetof(FSoundLibraryAnimContextSettings, bAttachToActor) == 13, "Offset mismatch for FSoundLibraryAnimContextSettings::bAttachToActor");
static_assert(offsetof(FSoundLibraryAnimContextSettings, bStopWhenAttachedDestroyed) == 14, "Offset mismatch for FSoundLibraryAnimContextSettings::bStopWhenAttachedDestroyed");
static_assert(offsetof(FSoundLibraryAnimContextSettings, Offset) == 16, "Offset mismatch for FSoundLibraryAnimContextSettings::Offset");
static_assert(offsetof(FSoundLibraryAnimContextSettings, AttachName) == 40, "Offset mismatch for FSoundLibraryAnimContextSettings::AttachName");
static_assert(offsetof(FSoundLibraryAnimContextSettings, FadeTime) == 44, "Offset mismatch for FSoundLibraryAnimContextSettings::FadeTime");
static_assert(offsetof(FSoundLibraryAnimContextSettings, NotifyTriggerChance) == 48, "Offset mismatch for FSoundLibraryAnimContextSettings::NotifyTriggerChance");
static_assert(offsetof(FSoundLibraryAnimContextSettings, VolumeMultiplier) == 52, "Offset mismatch for FSoundLibraryAnimContextSettings::VolumeMultiplier");

// /Script/SoundLibrary.SoundLibraryBaseEventData
// Kind: ScriptStruct; super: none
struct FSoundLibraryBaseEventData
{
public:
    TSoftObjectPtr<void> Sound; // 0x0000 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FSoundLibraryBaseEventData, Sound) == 0, "Offset mismatch for FSoundLibraryBaseEventData::Sound");

// /Script/SoundLibrary.SoundLibraryContextEventInput
// Kind: ScriptStruct; super: none
struct FSoundLibraryContextEventInput
{
public:
    void* Sound; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* Owner; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EventTag[0x8]; // 0x0010 (Size: 0x8, Type: StructProperty)
    std::uint8_t LibraryTags[0x1]; // 0x0018 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSoundLibraryContextEventInput, Sound) == 0, "Offset mismatch for FSoundLibraryContextEventInput::Sound");
static_assert(offsetof(FSoundLibraryContextEventInput, Owner) == 8, "Offset mismatch for FSoundLibraryContextEventInput::Owner");
static_assert(offsetof(FSoundLibraryContextEventInput, EventTag) == 16, "Offset mismatch for FSoundLibraryContextEventInput::EventTag");
static_assert(offsetof(FSoundLibraryContextEventInput, LibraryTags) == 24, "Offset mismatch for FSoundLibraryContextEventInput::LibraryTags");

// /Script/SoundLibrary.SoundLibraryPlayResult
// Kind: ScriptStruct; super: none
struct FSoundLibraryPlayResult
{
public:
    std::uint8_t EventName[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t bWasBlocked; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSuccess; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x2]; // 0x0006
    TArray<void*> AudioComponents; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSoundLibraryPlayResult, EventName) == 0, "Offset mismatch for FSoundLibraryPlayResult::EventName");
static_assert(offsetof(FSoundLibraryPlayResult, bWasBlocked) == 4, "Offset mismatch for FSoundLibraryPlayResult::bWasBlocked");
static_assert(offsetof(FSoundLibraryPlayResult, bSuccess) == 5, "Offset mismatch for FSoundLibraryPlayResult::bSuccess");
static_assert(offsetof(FSoundLibraryPlayResult, AudioComponents) == 8, "Offset mismatch for FSoundLibraryPlayResult::AudioComponents");

// /Script/SoundLibrary.SoundLibrarySet
// Kind: ScriptStruct; super: none
struct FSoundLibrarySet
{
public:
    std::uint8_t LibrarySet[0x10]; // 0x0000 (Size: 0x10, Type: SetProperty)
    std::uint8_t SelectionType; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FSoundLibrarySet, LibrarySet) == 0, "Offset mismatch for FSoundLibrarySet::LibrarySet");
static_assert(offsetof(FSoundLibrarySet, SelectionType) == 16, "Offset mismatch for FSoundLibrarySet::SelectionType");

// /Script/SoundLibrary.SoundLibraryTag
// Kind: ScriptStruct; super: GameplayTag
struct FSoundLibraryTag
{
public:
    FName TagName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FSoundLibraryTag, TagName) == 0, "Offset mismatch for FSoundLibraryTag::TagName");

// /Script/SoundLibrary.SoundlibrarySimpleContextSettings
// Kind: ScriptStruct; super: none
struct FSoundlibrarySimpleContextSettings
{
public:
    std::uint8_t EventName[0x4]; // 0x0000 (Size: 0x4, Type: StructProperty)
    std::uint8_t bAttachedSound; // 0x0004 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bStopWhenAttachedDestroyed; // 0x0005 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoDestroy; // 0x0006 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceComponentCreation; // 0x0007 (Size: 0x1, Type: BoolProperty)
    float VolumeMultiplier; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float PitchMultiplier; // 0x000C (Size: 0x4, Type: FloatProperty)
    float StartTime; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    void* ConcurrencySettings; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    void* AttenuationSettings; // 0x0020 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t AttachName[0x4]; // 0x0028 (Size: 0x4, Type: NameProperty)
    TWeakObjectPtr<void> AttachToComponent; // 0x002C (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t LocationType; // 0x0034 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0035
    std::uint8_t Location[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSoundlibrarySimpleContextSettings, EventName) == 0, "Offset mismatch for FSoundlibrarySimpleContextSettings::EventName");
static_assert(offsetof(FSoundlibrarySimpleContextSettings, bAttachedSound) == 4, "Offset mismatch for FSoundlibrarySimpleContextSettings::bAttachedSound");
static_assert(offsetof(FSoundlibrarySimpleContextSettings, bStopWhenAttachedDestroyed) == 5, "Offset mismatch for FSoundlibrarySimpleContextSettings::bStopWhenAttachedDestroyed");
static_assert(offsetof(FSoundlibrarySimpleContextSettings, bAutoDestroy) == 6, "Offset mismatch for FSoundlibrarySimpleContextSettings::bAutoDestroy");
static_assert(offsetof(FSoundlibrarySimpleContextSettings, bForceComponentCreation) == 7, "Offset mismatch for FSoundlibrarySimpleContextSettings::bForceComponentCreation");
static_assert(offsetof(FSoundlibrarySimpleContextSettings, VolumeMultiplier) == 8, "Offset mismatch for FSoundlibrarySimpleContextSettings::VolumeMultiplier");
static_assert(offsetof(FSoundlibrarySimpleContextSettings, PitchMultiplier) == 12, "Offset mismatch for FSoundlibrarySimpleContextSettings::PitchMultiplier");
static_assert(offsetof(FSoundlibrarySimpleContextSettings, StartTime) == 16, "Offset mismatch for FSoundlibrarySimpleContextSettings::StartTime");
static_assert(offsetof(FSoundlibrarySimpleContextSettings, ConcurrencySettings) == 24, "Offset mismatch for FSoundlibrarySimpleContextSettings::ConcurrencySettings");
static_assert(offsetof(FSoundlibrarySimpleContextSettings, AttenuationSettings) == 32, "Offset mismatch for FSoundlibrarySimpleContextSettings::AttenuationSettings");
static_assert(offsetof(FSoundlibrarySimpleContextSettings, AttachName) == 40, "Offset mismatch for FSoundlibrarySimpleContextSettings::AttachName");
static_assert(offsetof(FSoundlibrarySimpleContextSettings, AttachToComponent) == 44, "Offset mismatch for FSoundlibrarySimpleContextSettings::AttachToComponent");
static_assert(offsetof(FSoundlibrarySimpleContextSettings, LocationType) == 52, "Offset mismatch for FSoundlibrarySimpleContextSettings::LocationType");
static_assert(offsetof(FSoundlibrarySimpleContextSettings, Location) == 56, "Offset mismatch for FSoundlibrarySimpleContextSettings::Location");

// /Script/SoundLibrary.AnimNotifyState_SoundLibrary
// Kind: Class; super: AnimNotifyState
class UAnimNotifyState_SoundLibrary
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* SoundContext; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* NotifyHelper; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAnimNotifyState_SoundLibrary, SoundContext) == 48, "Offset mismatch for UAnimNotifyState_SoundLibrary::SoundContext");
static_assert(offsetof(UAnimNotifyState_SoundLibrary, NotifyHelper) == 56, "Offset mismatch for UAnimNotifyState_SoundLibrary::NotifyHelper");

// /Script/SoundLibrary.AnimNotify_SoundLibrary
// Kind: Class; super: AnimNotify
class UAnimNotify_SoundLibrary
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* SoundContext; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* NotifyHelper; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAnimNotify_SoundLibrary, SoundContext) == 56, "Offset mismatch for UAnimNotify_SoundLibrary::SoundContext");
static_assert(offsetof(UAnimNotify_SoundLibrary, NotifyHelper) == 64, "Offset mismatch for UAnimNotify_SoundLibrary::NotifyHelper");

// /Script/SoundLibrary.GameFeatureAction_AddSoundLibraryCollection
// Kind: Class; super: GameFeatureAction
class UGameFeatureAction_AddSoundLibraryCollection
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> CollectionList; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ProtoCollectionList; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> TrackedSubsystems; // 0x0048 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameFeatureAction_AddSoundLibraryCollection, CollectionList) == 40, "Offset mismatch for UGameFeatureAction_AddSoundLibraryCollection::CollectionList");
static_assert(offsetof(UGameFeatureAction_AddSoundLibraryCollection, ProtoCollectionList) == 56, "Offset mismatch for UGameFeatureAction_AddSoundLibraryCollection::ProtoCollectionList");
static_assert(offsetof(UGameFeatureAction_AddSoundLibraryCollection, TrackedSubsystems) == 72, "Offset mismatch for UGameFeatureAction_AddSoundLibraryCollection::TrackedSubsystems");

// /Script/SoundLibrary.NiagaraDataInterfaceSoundLibraryPlayer
// Kind: Class; super: NiagaraDataInterface
class UNiagaraDataInterfaceSoundLibraryPlayer
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    std::uint8_t EventName[0x4]; // 0x0038 (Size: 0x4, Type: StructProperty)
    std::uint8_t bForwardToActorOwner; // 0x003C (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForwardToAttachedActors; // 0x003D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAttachedSound; // 0x003E (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x003F
    std::uint8_t AttachComponentTag[0x4]; // 0x0040 (Size: 0x4, Type: NameProperty)
    std::uint8_t AttachName[0x4]; // 0x0044 (Size: 0x4, Type: NameProperty)
    std::uint8_t bStopWhenAttachedDestroyed; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoDestroy; // 0x0049 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNiagaraDataInterfaceSoundLibraryPlayer, EventName) == 56, "Offset mismatch for UNiagaraDataInterfaceSoundLibraryPlayer::EventName");
static_assert(offsetof(UNiagaraDataInterfaceSoundLibraryPlayer, bForwardToActorOwner) == 60, "Offset mismatch for UNiagaraDataInterfaceSoundLibraryPlayer::bForwardToActorOwner");
static_assert(offsetof(UNiagaraDataInterfaceSoundLibraryPlayer, bForwardToAttachedActors) == 61, "Offset mismatch for UNiagaraDataInterfaceSoundLibraryPlayer::bForwardToAttachedActors");
static_assert(offsetof(UNiagaraDataInterfaceSoundLibraryPlayer, bAttachedSound) == 62, "Offset mismatch for UNiagaraDataInterfaceSoundLibraryPlayer::bAttachedSound");
static_assert(offsetof(UNiagaraDataInterfaceSoundLibraryPlayer, AttachComponentTag) == 64, "Offset mismatch for UNiagaraDataInterfaceSoundLibraryPlayer::AttachComponentTag");
static_assert(offsetof(UNiagaraDataInterfaceSoundLibraryPlayer, AttachName) == 68, "Offset mismatch for UNiagaraDataInterfaceSoundLibraryPlayer::AttachName");
static_assert(offsetof(UNiagaraDataInterfaceSoundLibraryPlayer, bStopWhenAttachedDestroyed) == 72, "Offset mismatch for UNiagaraDataInterfaceSoundLibraryPlayer::bStopWhenAttachedDestroyed");
static_assert(offsetof(UNiagaraDataInterfaceSoundLibraryPlayer, bAutoDestroy) == 73, "Offset mismatch for UNiagaraDataInterfaceSoundLibraryPlayer::bAutoDestroy");

// /Script/SoundLibrary.RichSoundLibrary
// Kind: Class; super: SoundLibrary
class URichSoundLibrary
{
public:
    std::uint8_t Pad_0000[0x190]; // 0x0000
    TMap<void*, void*> Data; // 0x0190 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(URichSoundLibrary, Data) == 400, "Offset mismatch for URichSoundLibrary::Data");

// /Script/SoundLibrary.SoundLibrary
// Kind: Class; super: Object
class USoundLibrary
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> Sounds; // 0x0028 (Size: 0x10, Type: MapProperty)
    std::uint8_t LibraryRequirements[0x50]; // 0x0038 (Size: 0x50, Type: StructProperty)
    std::uint8_t Channel[0x4]; // 0x0088 (Size: 0x4, Type: StructProperty)
    std::int32_t Priority; // 0x008C (Size: 0x4, Type: IntProperty)
    std::uint8_t MetaData[0x20]; // 0x0090 (Size: 0x20, Type: StructProperty)
    TArray<void*> PrimeOnLoadEvents; // 0x00B0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> FullLibrary; // 0x00C0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> FullRichLibrary; // 0x00D0 (Size: 0x10, Type: MapProperty)
    TArray<void*> FullPrimeOnLoadEvents; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> RuntimeSounds; // 0x00F0 (Size: 0x10, Type: MapProperty)
    TArray<void*> LoadedSoundObjects; // 0x0100 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> LoadedRichObjects; // 0x0110 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PrimeOnLoadSoundObjects; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PrimeOnLoadRichObjects; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Assets; // 0x0140 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(USoundLibrary, Sounds) == 40, "Offset mismatch for USoundLibrary::Sounds");
static_assert(offsetof(USoundLibrary, LibraryRequirements) == 56, "Offset mismatch for USoundLibrary::LibraryRequirements");
static_assert(offsetof(USoundLibrary, Channel) == 136, "Offset mismatch for USoundLibrary::Channel");
static_assert(offsetof(USoundLibrary, Priority) == 140, "Offset mismatch for USoundLibrary::Priority");
static_assert(offsetof(USoundLibrary, MetaData) == 144, "Offset mismatch for USoundLibrary::MetaData");
static_assert(offsetof(USoundLibrary, PrimeOnLoadEvents) == 176, "Offset mismatch for USoundLibrary::PrimeOnLoadEvents");
static_assert(offsetof(USoundLibrary, FullLibrary) == 192, "Offset mismatch for USoundLibrary::FullLibrary");
static_assert(offsetof(USoundLibrary, FullRichLibrary) == 208, "Offset mismatch for USoundLibrary::FullRichLibrary");
static_assert(offsetof(USoundLibrary, FullPrimeOnLoadEvents) == 224, "Offset mismatch for USoundLibrary::FullPrimeOnLoadEvents");
static_assert(offsetof(USoundLibrary, RuntimeSounds) == 240, "Offset mismatch for USoundLibrary::RuntimeSounds");
static_assert(offsetof(USoundLibrary, LoadedSoundObjects) == 256, "Offset mismatch for USoundLibrary::LoadedSoundObjects");
static_assert(offsetof(USoundLibrary, LoadedRichObjects) == 272, "Offset mismatch for USoundLibrary::LoadedRichObjects");
static_assert(offsetof(USoundLibrary, PrimeOnLoadSoundObjects) == 288, "Offset mismatch for USoundLibrary::PrimeOnLoadSoundObjects");
static_assert(offsetof(USoundLibrary, PrimeOnLoadRichObjects) == 304, "Offset mismatch for USoundLibrary::PrimeOnLoadRichObjects");
static_assert(offsetof(USoundLibrary, Assets) == 320, "Offset mismatch for USoundLibrary::Assets");

// /Script/SoundLibrary.SoundLibraryAnimContext
// Kind: Class; super: SoundLibraryContext
class USoundLibraryAnimContext
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t AnimSettings[0x38]; // 0x0060 (Size: 0x38, Type: StructProperty)
    std::uint8_t DefaultOffset[0x18]; // 0x0098 (Size: 0x18, Type: StructProperty)
    TWeakObjectPtr<void> Animation; // 0x00B0 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> MeshComponent; // 0x00B8 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bSupportsNotifyEnd; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x00C1
    float AnimRate; // 0x00C4 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USoundLibraryAnimContext, AnimSettings) == 96, "Offset mismatch for USoundLibraryAnimContext::AnimSettings");
static_assert(offsetof(USoundLibraryAnimContext, DefaultOffset) == 152, "Offset mismatch for USoundLibraryAnimContext::DefaultOffset");
static_assert(offsetof(USoundLibraryAnimContext, Animation) == 176, "Offset mismatch for USoundLibraryAnimContext::Animation");
static_assert(offsetof(USoundLibraryAnimContext, MeshComponent) == 184, "Offset mismatch for USoundLibraryAnimContext::MeshComponent");
static_assert(offsetof(USoundLibraryAnimContext, bSupportsNotifyEnd) == 192, "Offset mismatch for USoundLibraryAnimContext::bSupportsNotifyEnd");
static_assert(offsetof(USoundLibraryAnimContext, AnimRate) == 196, "Offset mismatch for USoundLibraryAnimContext::AnimRate");

// /Script/SoundLibrary.SoundLibraryAnimNotifyHelper
// Kind: Class; super: Object
class USoundLibraryAnimNotifyHelper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SoundLibrary.SoundLibraryCollection
// Kind: Class; super: DataAsset
class USoundLibraryCollection
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TMap<void*, void*> Libraries; // 0x0028 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(USoundLibraryCollection, Libraries) == 40, "Offset mismatch for USoundLibraryCollection::Libraries");

// /Script/SoundLibrary.SoundLibraryComponent
// Kind: Class; super: AudioGameplayComponent
class USoundLibraryComponent
{
public:
    std::uint8_t Pad_0000[0xD0]; // 0x0000
    std::uint8_t ComponentTag[0x8]; // 0x00D0 (Size: 0x8, Type: StructProperty)
    void* ContextClass; // 0x00D8 (Size: 0x8, Type: ClassProperty)
    TArray<void*> Libraries; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    FMulticastInlineDelegate OnSoundLibraryPlayEvent; // 0x00F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEventPlayedDelegate; // 0x0100 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnEventStoppedDelegate; // 0x0110 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x10]; // 0x0120
    void* Context; // 0x0130 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USoundLibraryComponent, ComponentTag) == 208, "Offset mismatch for USoundLibraryComponent::ComponentTag");
static_assert(offsetof(USoundLibraryComponent, ContextClass) == 216, "Offset mismatch for USoundLibraryComponent::ContextClass");
static_assert(offsetof(USoundLibraryComponent, Libraries) == 224, "Offset mismatch for USoundLibraryComponent::Libraries");
static_assert(offsetof(USoundLibraryComponent, OnSoundLibraryPlayEvent) == 240, "Offset mismatch for USoundLibraryComponent::OnSoundLibraryPlayEvent");
static_assert(offsetof(USoundLibraryComponent, OnEventPlayedDelegate) == 256, "Offset mismatch for USoundLibraryComponent::OnEventPlayedDelegate");
static_assert(offsetof(USoundLibraryComponent, OnEventStoppedDelegate) == 272, "Offset mismatch for USoundLibraryComponent::OnEventStoppedDelegate");
static_assert(offsetof(USoundLibraryComponent, Context) == 304, "Offset mismatch for USoundLibraryComponent::Context");

// /Script/SoundLibrary.SoundLibraryContext
// Kind: Class; super: Object
class USoundLibraryContext
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> Actor; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t BaseEventName[0x4]; // 0x0030 (Size: 0x4, Type: StructProperty)
    std::uint8_t bForwardToActorOwner; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForwardToAttachedActors; // 0x0035 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoResetContext; // 0x0036 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0037
    std::uint8_t PlaybackTags[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USoundLibraryContext, Actor) == 40, "Offset mismatch for USoundLibraryContext::Actor");
static_assert(offsetof(USoundLibraryContext, BaseEventName) == 48, "Offset mismatch for USoundLibraryContext::BaseEventName");
static_assert(offsetof(USoundLibraryContext, bForwardToActorOwner) == 52, "Offset mismatch for USoundLibraryContext::bForwardToActorOwner");
static_assert(offsetof(USoundLibraryContext, bForwardToAttachedActors) == 53, "Offset mismatch for USoundLibraryContext::bForwardToAttachedActors");
static_assert(offsetof(USoundLibraryContext, bAutoResetContext) == 54, "Offset mismatch for USoundLibraryContext::bAutoResetContext");
static_assert(offsetof(USoundLibraryContext, PlaybackTags) == 56, "Offset mismatch for USoundLibraryContext::PlaybackTags");

// /Script/SoundLibrary.SoundLibraryNiagaraContext
// Kind: Class; super: SoundLibraryContext
class USoundLibraryNiagaraContext
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TWeakObjectPtr<void> Actor; // 0x0028 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t BaseEventName[0x4]; // 0x0030 (Size: 0x4, Type: StructProperty)
    std::uint8_t bForwardToActorOwner; // 0x0034 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForwardToAttachedActors; // 0x0035 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoResetContext; // 0x0036 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x0037
    std::uint8_t PlaybackTags[0x1]; // 0x0038 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USoundLibraryNiagaraContext, Actor) == 40, "Offset mismatch for USoundLibraryNiagaraContext::Actor");
static_assert(offsetof(USoundLibraryNiagaraContext, BaseEventName) == 48, "Offset mismatch for USoundLibraryNiagaraContext::BaseEventName");
static_assert(offsetof(USoundLibraryNiagaraContext, bForwardToActorOwner) == 52, "Offset mismatch for USoundLibraryNiagaraContext::bForwardToActorOwner");
static_assert(offsetof(USoundLibraryNiagaraContext, bForwardToAttachedActors) == 53, "Offset mismatch for USoundLibraryNiagaraContext::bForwardToAttachedActors");
static_assert(offsetof(USoundLibraryNiagaraContext, bAutoResetContext) == 54, "Offset mismatch for USoundLibraryNiagaraContext::bAutoResetContext");
static_assert(offsetof(USoundLibraryNiagaraContext, PlaybackTags) == 56, "Offset mismatch for USoundLibraryNiagaraContext::PlaybackTags");

// /Script/SoundLibrary.SoundLibraryProviderInterface
// Kind: Class; super: Interface
class USoundLibraryProviderInterface
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SoundLibrary.SoundLibrarySettings
// Kind: Class; super: DeveloperSettings
class USoundLibrarySettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TSoftObjectPtr<void> CommonLibraries; // 0x0030 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(USoundLibrarySettings, CommonLibraries) == 48, "Offset mismatch for USoundLibrarySettings::CommonLibraries");

// /Script/SoundLibrary.SoundLibrarySimpleContext
// Kind: Class; super: SoundLibraryContext
class USoundLibrarySimpleContext
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USoundLibrarySimpleContext, Settings) == 96, "Offset mismatch for USoundLibrarySimpleContext::Settings");

// /Script/SoundLibrary.SoundLibrarySubsystem
// Kind: Class; super: WorldSubsystem
class USoundLibrarySubsystem
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TArray<void*> LibraryCollections; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    void* SimpleContext; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* NiagaraContext; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x00A0
    TMap<void*, void*> SoundLibraryRefCount; // 0x00B0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(USoundLibrarySubsystem, LibraryCollections) == 128, "Offset mismatch for USoundLibrarySubsystem::LibraryCollections");
static_assert(offsetof(USoundLibrarySubsystem, SimpleContext) == 144, "Offset mismatch for USoundLibrarySubsystem::SimpleContext");
static_assert(offsetof(USoundLibrarySubsystem, NiagaraContext) == 152, "Offset mismatch for USoundLibrarySubsystem::NiagaraContext");
static_assert(offsetof(USoundLibrarySubsystem, SoundLibraryRefCount) == 176, "Offset mismatch for USoundLibrarySubsystem::SoundLibraryRefCount");

// /Script/SoundLibrary.SoundLibraryTagHelperFunctions
// Kind: Class; super: Object
class USoundLibraryTagHelperFunctions
{
public:
    std::uint8_t Opaque[1];
};
