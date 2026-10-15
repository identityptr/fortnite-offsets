/**
 * decamp dumper generated SDK
 * Package: /Script/MediaPlate
 */
#pragma once
#include "Basic.h"

// /Script/MediaPlate.MediaPlateResource
// Kind: ScriptStruct; super: none
struct FMediaPlateResource
{
public:
    std::uint8_t Type; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString ExternalMediaPath; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::uint8_t MediaAsset[0x20]; // 0x0018 (Size: 0x20, Type: SoftObjectProperty)
    TSoftObjectPtr<void> SourcePlaylist; // 0x0038 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(FMediaPlateResource, Type) == 0, "Offset mismatch for FMediaPlateResource::Type");
static_assert(offsetof(FMediaPlateResource, ExternalMediaPath) == 8, "Offset mismatch for FMediaPlateResource::ExternalMediaPath");
static_assert(offsetof(FMediaPlateResource, MediaAsset) == 24, "Offset mismatch for FMediaPlateResource::MediaAsset");
static_assert(offsetof(FMediaPlateResource, SourcePlaylist) == 56, "Offset mismatch for FMediaPlateResource::SourcePlaylist");

// /Script/MediaPlate.MediaTextureResourceSettings
// Kind: ScriptStruct; super: none
struct FMediaTextureResourceSettings
{
public:
    std::uint8_t bEnableGenMips; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FMediaTextureResourceSettings, bEnableGenMips) == 0, "Offset mismatch for FMediaTextureResourceSettings::bEnableGenMips");

// /Script/MediaPlate.MediaPlate
// Kind: Class; super: Actor
class UMediaPlate
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* MediaPlateComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* StaticMeshComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bEnableHoldoutComposite; // 0x0280 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMediaPlate, MediaPlateComponent) == 624, "Offset mismatch for UMediaPlate::MediaPlateComponent");
static_assert(offsetof(UMediaPlate, StaticMeshComponent) == 632, "Offset mismatch for UMediaPlate::StaticMeshComponent");
static_assert(offsetof(UMediaPlate, bEnableHoldoutComposite) == 640, "Offset mismatch for UMediaPlate::bEnableHoldoutComposite");

// /Script/MediaPlate.MediaPlateAssetUserData
// Kind: Class; super: AssetUserData
class UMediaPlateAssetUserData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MediaPlate.MediaPlateComponent
// Kind: Class; super: ActorComponent
class UMediaPlateComponent
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t bPlayOnOpen; // 0x00C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoPlay; // 0x00C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableAudio; // 0x00CA (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x00CB
    float StartTime; // 0x00CC (Size: 0x4, Type: FloatProperty)
    void* SoundComponent; // 0x00D0 (Size: 0x8, Type: ObjectProperty)
    void* StaticMeshComponent; // 0x00D8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Letterboxes; // 0x00E0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MediaPlateResource[0x58]; // 0x00F0 (Size: 0x58, Type: StructProperty)
    std::int32_t PlaylistIndex; // 0x0148 (Size: 0x4, Type: IntProperty)
    std::uint8_t CacheSettings[0x8]; // 0x014C (Size: 0x8, Type: StructProperty)
    std::uint8_t bIsMediaPlatePlaying; // 0x0154 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x13]; // 0x0155
    std::uint8_t bPlayOnlyWhenVisible; // 0x0168 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLoop; // 0x0169 (Size: 0x1, Type: BoolProperty)
    std::uint8_t VisibleMipsTilesCalculations; // 0x016A (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0003[0x1]; // 0x016B
    float MipMapBias; // 0x016C (Size: 0x4, Type: FloatProperty)
    std::uint8_t bIsAspectRatioAuto; // 0x0170 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableMipMapUpscaling; // 0x0171 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x2]; // 0x0172
    std::int32_t MipLevelToUpscale; // 0x0174 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAdaptivePoleMipUpscaling; // 0x0178 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x3]; // 0x0179
    float LetterboxAspectRatio; // 0x017C (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0006[0x8]; // 0x0180
    std::uint8_t MeshRange[0x10]; // 0x0188 (Size: 0x10, Type: StructProperty)
    TArray<void*> MediaTextures; // 0x0198 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t MediaTextureSettings[0x8]; // 0x01A8 (Size: 0x8, Type: StructProperty)
    void* MediaPlayer; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    void* ExternalMediaSource; // 0x01B8 (Size: 0x8, Type: ObjectProperty)
    void* ActivePlaylist; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMediaPlateComponent, bPlayOnOpen) == 200, "Offset mismatch for UMediaPlateComponent::bPlayOnOpen");
static_assert(offsetof(UMediaPlateComponent, bAutoPlay) == 201, "Offset mismatch for UMediaPlateComponent::bAutoPlay");
static_assert(offsetof(UMediaPlateComponent, bEnableAudio) == 202, "Offset mismatch for UMediaPlateComponent::bEnableAudio");
static_assert(offsetof(UMediaPlateComponent, StartTime) == 204, "Offset mismatch for UMediaPlateComponent::StartTime");
static_assert(offsetof(UMediaPlateComponent, SoundComponent) == 208, "Offset mismatch for UMediaPlateComponent::SoundComponent");
static_assert(offsetof(UMediaPlateComponent, StaticMeshComponent) == 216, "Offset mismatch for UMediaPlateComponent::StaticMeshComponent");
static_assert(offsetof(UMediaPlateComponent, Letterboxes) == 224, "Offset mismatch for UMediaPlateComponent::Letterboxes");
static_assert(offsetof(UMediaPlateComponent, MediaPlateResource) == 240, "Offset mismatch for UMediaPlateComponent::MediaPlateResource");
static_assert(offsetof(UMediaPlateComponent, PlaylistIndex) == 328, "Offset mismatch for UMediaPlateComponent::PlaylistIndex");
static_assert(offsetof(UMediaPlateComponent, CacheSettings) == 332, "Offset mismatch for UMediaPlateComponent::CacheSettings");
static_assert(offsetof(UMediaPlateComponent, bIsMediaPlatePlaying) == 340, "Offset mismatch for UMediaPlateComponent::bIsMediaPlatePlaying");
static_assert(offsetof(UMediaPlateComponent, bPlayOnlyWhenVisible) == 360, "Offset mismatch for UMediaPlateComponent::bPlayOnlyWhenVisible");
static_assert(offsetof(UMediaPlateComponent, bLoop) == 361, "Offset mismatch for UMediaPlateComponent::bLoop");
static_assert(offsetof(UMediaPlateComponent, VisibleMipsTilesCalculations) == 362, "Offset mismatch for UMediaPlateComponent::VisibleMipsTilesCalculations");
static_assert(offsetof(UMediaPlateComponent, MipMapBias) == 364, "Offset mismatch for UMediaPlateComponent::MipMapBias");
static_assert(offsetof(UMediaPlateComponent, bIsAspectRatioAuto) == 368, "Offset mismatch for UMediaPlateComponent::bIsAspectRatioAuto");
static_assert(offsetof(UMediaPlateComponent, bEnableMipMapUpscaling) == 369, "Offset mismatch for UMediaPlateComponent::bEnableMipMapUpscaling");
static_assert(offsetof(UMediaPlateComponent, MipLevelToUpscale) == 372, "Offset mismatch for UMediaPlateComponent::MipLevelToUpscale");
static_assert(offsetof(UMediaPlateComponent, bAdaptivePoleMipUpscaling) == 376, "Offset mismatch for UMediaPlateComponent::bAdaptivePoleMipUpscaling");
static_assert(offsetof(UMediaPlateComponent, LetterboxAspectRatio) == 380, "Offset mismatch for UMediaPlateComponent::LetterboxAspectRatio");
static_assert(offsetof(UMediaPlateComponent, MeshRange) == 392, "Offset mismatch for UMediaPlateComponent::MeshRange");
static_assert(offsetof(UMediaPlateComponent, MediaTextures) == 408, "Offset mismatch for UMediaPlateComponent::MediaTextures");
static_assert(offsetof(UMediaPlateComponent, MediaTextureSettings) == 424, "Offset mismatch for UMediaPlateComponent::MediaTextureSettings");
static_assert(offsetof(UMediaPlateComponent, MediaPlayer) == 432, "Offset mismatch for UMediaPlateComponent::MediaPlayer");
static_assert(offsetof(UMediaPlateComponent, ExternalMediaSource) == 440, "Offset mismatch for UMediaPlateComponent::ExternalMediaSource");
static_assert(offsetof(UMediaPlateComponent, ActivePlaylist) == 448, "Offset mismatch for UMediaPlateComponent::ActivePlaylist");
