/**
 * decamp dumper generated SDK
 * Package: /Script/SparksCosmeticsRuntime
 */
#pragma once
#include "Basic.h"

// /Script/SparksCosmeticsRuntime.SparksCosmeticsEvent_AuraEnable
// Kind: ScriptStruct; super: none
struct FSparksCosmeticsEvent_AuraEnable
{
public:
    TWeakObjectPtr<void> ForPlayer; // 0x0000 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t bAuraIsEnabled; // 0x0008 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSparksCosmeticsEvent_AuraEnable, ForPlayer) == 0, "Offset mismatch for FSparksCosmeticsEvent_AuraEnable::ForPlayer");
static_assert(offsetof(FSparksCosmeticsEvent_AuraEnable, bAuraIsEnabled) == 8, "Offset mismatch for FSparksCosmeticsEvent_AuraEnable::bAuraIsEnabled");

// /Script/SparksCosmeticsRuntime.SparksCosmeticsCheatManager
// Kind: Class; super: ChildCheatManager
class USparksCosmeticsCheatManager
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SparksCosmeticsRuntime.SparksInstrumentPreviewActor
// Kind: Class; super: FortItemPreviewActor
class USparksInstrumentPreviewActor
{
public:
    std::uint8_t Pad_0000[0x4B0]; // 0x0000
    std::uint8_t ItemDef[0x20]; // 0x04B0 (Size: 0x20, Type: SoftObjectProperty)
    void* WeaponActor; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    FScriptDelegate OnSettingsChangedDelegate; // 0x04D8 (Size: 0x10, Type: DelegateProperty)
    std::uint8_t ActiveSetup[0xA8]; // 0x04E8 (Size: 0xA8, Type: StructProperty)
    std::uint8_t ActiveWeaponDefinition[0x20]; // 0x0590 (Size: 0x20, Type: SoftObjectProperty)
    void* LoadedWeaponDefinition; // 0x05B0 (Size: 0x8, Type: ObjectProperty)
    void* PendingAuxiliaryMesh; // 0x05B8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x10]; // 0x05C0
    std::uint8_t SeamlessLoadout[0x1]; // 0x05D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(USparksInstrumentPreviewActor, ItemDef) == 1200, "Offset mismatch for USparksInstrumentPreviewActor::ItemDef");
static_assert(offsetof(USparksInstrumentPreviewActor, WeaponActor) == 1232, "Offset mismatch for USparksInstrumentPreviewActor::WeaponActor");
static_assert(offsetof(USparksInstrumentPreviewActor, OnSettingsChangedDelegate) == 1240, "Offset mismatch for USparksInstrumentPreviewActor::OnSettingsChangedDelegate");
static_assert(offsetof(USparksInstrumentPreviewActor, ActiveSetup) == 1256, "Offset mismatch for USparksInstrumentPreviewActor::ActiveSetup");
static_assert(offsetof(USparksInstrumentPreviewActor, ActiveWeaponDefinition) == 1424, "Offset mismatch for USparksInstrumentPreviewActor::ActiveWeaponDefinition");
static_assert(offsetof(USparksInstrumentPreviewActor, LoadedWeaponDefinition) == 1456, "Offset mismatch for USparksInstrumentPreviewActor::LoadedWeaponDefinition");
static_assert(offsetof(USparksInstrumentPreviewActor, PendingAuxiliaryMesh) == 1464, "Offset mismatch for USparksInstrumentPreviewActor::PendingAuxiliaryMesh");
static_assert(offsetof(USparksInstrumentPreviewActor, SeamlessLoadout) == 1488, "Offset mismatch for USparksInstrumentPreviewActor::SeamlessLoadout");

// /Script/SparksCosmeticsRuntime.SparksItemPreviewOffPawnActor
// Kind: Class; super: FortItemPreviewOffPawnActor
class USparksItemPreviewOffPawnActor
{
public:
    std::uint8_t Pad_0000[0x4B8]; // 0x0000
    void* PreviewActorComponent; // 0x04B8 (Size: 0x8, Type: ObjectProperty)
    void* ChildPreviewActor; // 0x04C0 (Size: 0x8, Type: ObjectProperty)
    void* PreviewStaticMeshComponent; // 0x04C8 (Size: 0x8, Type: ObjectProperty)
    void* PreviewSkelMeshComponent; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    void* DefaultPreviewActorClass; // 0x04D8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bAllowPivotLocationOffsetOnPreviewChildActor; // 0x04E0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x04E1
    void* GliderSpawnComponent; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksItemPreviewOffPawnActor, PreviewActorComponent) == 1208, "Offset mismatch for USparksItemPreviewOffPawnActor::PreviewActorComponent");
static_assert(offsetof(USparksItemPreviewOffPawnActor, ChildPreviewActor) == 1216, "Offset mismatch for USparksItemPreviewOffPawnActor::ChildPreviewActor");
static_assert(offsetof(USparksItemPreviewOffPawnActor, PreviewStaticMeshComponent) == 1224, "Offset mismatch for USparksItemPreviewOffPawnActor::PreviewStaticMeshComponent");
static_assert(offsetof(USparksItemPreviewOffPawnActor, PreviewSkelMeshComponent) == 1232, "Offset mismatch for USparksItemPreviewOffPawnActor::PreviewSkelMeshComponent");
static_assert(offsetof(USparksItemPreviewOffPawnActor, DefaultPreviewActorClass) == 1240, "Offset mismatch for USparksItemPreviewOffPawnActor::DefaultPreviewActorClass");
static_assert(offsetof(USparksItemPreviewOffPawnActor, bAllowPivotLocationOffsetOnPreviewChildActor) == 1248, "Offset mismatch for USparksItemPreviewOffPawnActor::bAllowPivotLocationOffsetOnPreviewChildActor");
static_assert(offsetof(USparksItemPreviewOffPawnActor, GliderSpawnComponent) == 1256, "Offset mismatch for USparksItemPreviewOffPawnActor::GliderSpawnComponent");

// /Script/SparksCosmeticsRuntime.SparksItemPreviewOnPawnActor
// Kind: Class; super: FortItemPreviewOnPawnActor
class USparksItemPreviewOnPawnActor
{
public:
    std::uint8_t Pad_0000[0x5E0]; // 0x0000
    void* ZoomedInBodyCameraComponent; // 0x05E0 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedOutTallBodyCameraComponent; // 0x05E8 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedInTallBodyCameraComponent; // 0x05F0 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedOutBackpackCameraComponent; // 0x05F8 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedInBackpackCameraComponent; // 0x0600 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedOutSkydiveCameraComponent; // 0x0608 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedInSkydiveCameraComponent; // 0x0610 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedOutEmoteCameraComponent; // 0x0618 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedInEmoteCameraComponent; // 0x0620 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedOutEmoteHighCameraComponent; // 0x0628 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedInEmoteHighCameraComponent; // 0x0630 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedOutEmoticonCameraComponent; // 0x0638 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedInEmoticonCameraComponent; // 0x0640 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedOutPickaxeCameraComponent; // 0x0648 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedInPickaxeCameraComponent; // 0x0650 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedOutDualPickaxeCameraComponent; // 0x0658 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedInDualPickaxeCameraComponent; // 0x0660 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedOutDoubleWristPickaxeCameraComponent; // 0x0668 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedInDoubleWristPickaxeCameraComponent; // 0x0670 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedOutPersonalGliderCameraComponent; // 0x0678 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedInPersonalGliderCameraComponent; // 0x0680 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedOutCharacterCustomizerCameraComponent; // 0x0688 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedInCharacterCustomizerCameraComponent; // 0x0690 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedOutShoesCameraComponent; // 0x0698 (Size: 0x8, Type: ObjectProperty)
    void* ZoomedInShoesCameraComponent; // 0x06A0 (Size: 0x8, Type: ObjectProperty)
    void* PrimaryPreviewPawnComponent; // 0x06A8 (Size: 0x8, Type: ObjectProperty)
    void* SecondaryPreviewPawnComponent; // 0x06B0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AdditionalPreviewPawnComponents; // 0x06B8 (Size: 0x10, Type: ArrayProperty)
    void* EquippedWeapon; // 0x06C8 (Size: 0x8, Type: ObjectProperty)
    void* EquippedParachute; // 0x06D0 (Size: 0x8, Type: ObjectProperty)
    void* ItemWrapModifier; // 0x06D8 (Size: 0x8, Type: ObjectProperty)
    float ContrailGlideVerticalVelocity; // 0x06E0 (Size: 0x4, Type: FloatProperty)
    float ContrailDiveVerticalVelocity; // 0x06E4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bForceEmotePlayDelay; // 0x06E8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x06E9
    float EmotePlayDelay; // 0x06EC (Size: 0x4, Type: FloatProperty)
    float EmoteFXDuration; // 0x06F0 (Size: 0x4, Type: FloatProperty)
    float MinimumWeaponFireDelay; // 0x06F4 (Size: 0x4, Type: FloatProperty)
    float LastWeaponFireTimeStamp; // 0x06F8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x06FC
    std::uint8_t PickaxeImpactFXPreviewLocation[0x18]; // 0x0700 (Size: 0x18, Type: StructProperty)
    std::uint8_t PickaxeHitTags[0x20]; // 0x0718 (Size: 0x20, Type: StructProperty)
    std::uint8_t SeamlessPreviewProductTags[0xC8]; // 0x0738 (Size: 0xC8, Type: StructProperty)
    void* EmojiPreviewComponent; // 0x0800 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedInBodyCameraComponent) == 1504, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedInBodyCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedOutTallBodyCameraComponent) == 1512, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedOutTallBodyCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedInTallBodyCameraComponent) == 1520, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedInTallBodyCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedOutBackpackCameraComponent) == 1528, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedOutBackpackCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedInBackpackCameraComponent) == 1536, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedInBackpackCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedOutSkydiveCameraComponent) == 1544, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedOutSkydiveCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedInSkydiveCameraComponent) == 1552, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedInSkydiveCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedOutEmoteCameraComponent) == 1560, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedOutEmoteCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedInEmoteCameraComponent) == 1568, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedInEmoteCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedOutEmoteHighCameraComponent) == 1576, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedOutEmoteHighCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedInEmoteHighCameraComponent) == 1584, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedInEmoteHighCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedOutEmoticonCameraComponent) == 1592, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedOutEmoticonCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedInEmoticonCameraComponent) == 1600, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedInEmoticonCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedOutPickaxeCameraComponent) == 1608, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedOutPickaxeCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedInPickaxeCameraComponent) == 1616, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedInPickaxeCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedOutDualPickaxeCameraComponent) == 1624, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedOutDualPickaxeCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedInDualPickaxeCameraComponent) == 1632, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedInDualPickaxeCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedOutDoubleWristPickaxeCameraComponent) == 1640, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedOutDoubleWristPickaxeCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedInDoubleWristPickaxeCameraComponent) == 1648, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedInDoubleWristPickaxeCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedOutPersonalGliderCameraComponent) == 1656, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedOutPersonalGliderCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedInPersonalGliderCameraComponent) == 1664, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedInPersonalGliderCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedOutCharacterCustomizerCameraComponent) == 1672, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedOutCharacterCustomizerCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedInCharacterCustomizerCameraComponent) == 1680, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedInCharacterCustomizerCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedOutShoesCameraComponent) == 1688, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedOutShoesCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ZoomedInShoesCameraComponent) == 1696, "Offset mismatch for USparksItemPreviewOnPawnActor::ZoomedInShoesCameraComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, PrimaryPreviewPawnComponent) == 1704, "Offset mismatch for USparksItemPreviewOnPawnActor::PrimaryPreviewPawnComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, SecondaryPreviewPawnComponent) == 1712, "Offset mismatch for USparksItemPreviewOnPawnActor::SecondaryPreviewPawnComponent");
static_assert(offsetof(USparksItemPreviewOnPawnActor, AdditionalPreviewPawnComponents) == 1720, "Offset mismatch for USparksItemPreviewOnPawnActor::AdditionalPreviewPawnComponents");
static_assert(offsetof(USparksItemPreviewOnPawnActor, EquippedWeapon) == 1736, "Offset mismatch for USparksItemPreviewOnPawnActor::EquippedWeapon");
static_assert(offsetof(USparksItemPreviewOnPawnActor, EquippedParachute) == 1744, "Offset mismatch for USparksItemPreviewOnPawnActor::EquippedParachute");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ItemWrapModifier) == 1752, "Offset mismatch for USparksItemPreviewOnPawnActor::ItemWrapModifier");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ContrailGlideVerticalVelocity) == 1760, "Offset mismatch for USparksItemPreviewOnPawnActor::ContrailGlideVerticalVelocity");
static_assert(offsetof(USparksItemPreviewOnPawnActor, ContrailDiveVerticalVelocity) == 1764, "Offset mismatch for USparksItemPreviewOnPawnActor::ContrailDiveVerticalVelocity");
static_assert(offsetof(USparksItemPreviewOnPawnActor, bForceEmotePlayDelay) == 1768, "Offset mismatch for USparksItemPreviewOnPawnActor::bForceEmotePlayDelay");
static_assert(offsetof(USparksItemPreviewOnPawnActor, EmotePlayDelay) == 1772, "Offset mismatch for USparksItemPreviewOnPawnActor::EmotePlayDelay");
static_assert(offsetof(USparksItemPreviewOnPawnActor, EmoteFXDuration) == 1776, "Offset mismatch for USparksItemPreviewOnPawnActor::EmoteFXDuration");
static_assert(offsetof(USparksItemPreviewOnPawnActor, MinimumWeaponFireDelay) == 1780, "Offset mismatch for USparksItemPreviewOnPawnActor::MinimumWeaponFireDelay");
static_assert(offsetof(USparksItemPreviewOnPawnActor, LastWeaponFireTimeStamp) == 1784, "Offset mismatch for USparksItemPreviewOnPawnActor::LastWeaponFireTimeStamp");
static_assert(offsetof(USparksItemPreviewOnPawnActor, PickaxeImpactFXPreviewLocation) == 1792, "Offset mismatch for USparksItemPreviewOnPawnActor::PickaxeImpactFXPreviewLocation");
static_assert(offsetof(USparksItemPreviewOnPawnActor, PickaxeHitTags) == 1816, "Offset mismatch for USparksItemPreviewOnPawnActor::PickaxeHitTags");
static_assert(offsetof(USparksItemPreviewOnPawnActor, SeamlessPreviewProductTags) == 1848, "Offset mismatch for USparksItemPreviewOnPawnActor::SeamlessPreviewProductTags");
static_assert(offsetof(USparksItemPreviewOnPawnActor, EmojiPreviewComponent) == 2048, "Offset mismatch for USparksItemPreviewOnPawnActor::EmojiPreviewComponent");

// /Script/SparksCosmeticsRuntime.SparksPlayerStateComponent
// Kind: Class; super: PlayerStateComponent
class USparksPlayerStateComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t SparksInstrumentChoice; // 0x00C0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(USparksPlayerStateComponent, SparksInstrumentChoice) == 192, "Offset mismatch for USparksPlayerStateComponent::SparksInstrumentChoice");

// /Script/SparksCosmeticsRuntime.SparksSongPreviewActor
// Kind: Class; super: Actor
class USparksSongPreviewActor
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    FName SongShortName; // 0x0280 (Size: 0x8, Type: NameProperty)
    void* SongItemDefinition; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    float BoundsScale; // 0x0290 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(USparksSongPreviewActor, SongShortName) == 640, "Offset mismatch for USparksSongPreviewActor::SongShortName");
static_assert(offsetof(USparksSongPreviewActor, SongItemDefinition) == 648, "Offset mismatch for USparksSongPreviewActor::SongItemDefinition");
static_assert(offsetof(USparksSongPreviewActor, BoundsScale) == 656, "Offset mismatch for USparksSongPreviewActor::BoundsScale");
