/**
 * decamp dumper generated SDK
 * Package: /Script/LFNAudioBase
 */
#pragma once
#include "Basic.h"

// /Script/LFNAudioBase.LFNActiveItemAnimContext
// Kind: Class; super: SoundLibraryAnimContext
class ULFNActiveItemAnimContext
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

static_assert(offsetof(ULFNActiveItemAnimContext, AnimSettings) == 96, "Offset mismatch for ULFNActiveItemAnimContext::AnimSettings");
static_assert(offsetof(ULFNActiveItemAnimContext, DefaultOffset) == 152, "Offset mismatch for ULFNActiveItemAnimContext::DefaultOffset");
static_assert(offsetof(ULFNActiveItemAnimContext, Animation) == 176, "Offset mismatch for ULFNActiveItemAnimContext::Animation");
static_assert(offsetof(ULFNActiveItemAnimContext, MeshComponent) == 184, "Offset mismatch for ULFNActiveItemAnimContext::MeshComponent");
static_assert(offsetof(ULFNActiveItemAnimContext, bSupportsNotifyEnd) == 192, "Offset mismatch for ULFNActiveItemAnimContext::bSupportsNotifyEnd");
static_assert(offsetof(ULFNActiveItemAnimContext, AnimRate) == 196, "Offset mismatch for ULFNActiveItemAnimContext::AnimRate");

// /Script/LFNAudioBase.LFNFoleyContext
// Kind: Class; super: FortPlayerFoleyContext
class ULFNFoleyContext
{
public:
    std::uint8_t Pad_0000[0x180]; // 0x0000
    float PitchMultiplier; // 0x0180 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(ULFNFoleyContext, PitchMultiplier) == 384, "Offset mismatch for ULFNFoleyContext::PitchMultiplier");

// /Script/LFNAudioBase.LFNImpactAudioNativeFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class ULFNImpactAudioNativeFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LFNAudioBase.LFNImpactSoundLibrary
// Kind: Class; super: SoundLibrarySimpleContext
class ULFNImpactSoundLibrary
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t Settings[0x1]; // 0x0060 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULFNImpactSoundLibrary, Settings) == 96, "Offset mismatch for ULFNImpactSoundLibrary::Settings");

// /Script/LFNAudioBase.LFNSmartSoundLibraryContext
// Kind: Class; super: SoundLibraryAnimContext
class ULFNSmartSoundLibraryContext
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

static_assert(offsetof(ULFNSmartSoundLibraryContext, AnimSettings) == 96, "Offset mismatch for ULFNSmartSoundLibraryContext::AnimSettings");
static_assert(offsetof(ULFNSmartSoundLibraryContext, DefaultOffset) == 152, "Offset mismatch for ULFNSmartSoundLibraryContext::DefaultOffset");
static_assert(offsetof(ULFNSmartSoundLibraryContext, Animation) == 176, "Offset mismatch for ULFNSmartSoundLibraryContext::Animation");
static_assert(offsetof(ULFNSmartSoundLibraryContext, MeshComponent) == 184, "Offset mismatch for ULFNSmartSoundLibraryContext::MeshComponent");
static_assert(offsetof(ULFNSmartSoundLibraryContext, bSupportsNotifyEnd) == 192, "Offset mismatch for ULFNSmartSoundLibraryContext::bSupportsNotifyEnd");
static_assert(offsetof(ULFNSmartSoundLibraryContext, AnimRate) == 196, "Offset mismatch for ULFNSmartSoundLibraryContext::AnimRate");

// /Script/LFNAudioBase.LFNVOSoundLibraryAnimContext
// Kind: Class; super: SoundLibraryAnimContext
class ULFNVOSoundLibraryAnimContext
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

static_assert(offsetof(ULFNVOSoundLibraryAnimContext, AnimSettings) == 96, "Offset mismatch for ULFNVOSoundLibraryAnimContext::AnimSettings");
static_assert(offsetof(ULFNVOSoundLibraryAnimContext, DefaultOffset) == 152, "Offset mismatch for ULFNVOSoundLibraryAnimContext::DefaultOffset");
static_assert(offsetof(ULFNVOSoundLibraryAnimContext, Animation) == 176, "Offset mismatch for ULFNVOSoundLibraryAnimContext::Animation");
static_assert(offsetof(ULFNVOSoundLibraryAnimContext, MeshComponent) == 184, "Offset mismatch for ULFNVOSoundLibraryAnimContext::MeshComponent");
static_assert(offsetof(ULFNVOSoundLibraryAnimContext, bSupportsNotifyEnd) == 192, "Offset mismatch for ULFNVOSoundLibraryAnimContext::bSupportsNotifyEnd");
static_assert(offsetof(ULFNVOSoundLibraryAnimContext, AnimRate) == 196, "Offset mismatch for ULFNVOSoundLibraryAnimContext::AnimRate");

// /Script/LFNAudioBase.LFNVOSoundLibraryContext
// Kind: Class; super: FortSoundLibraryContext
class ULFNVOSoundLibraryContext
{
public:
    std::uint8_t Pad_0000[0x60]; // 0x0000
    std::uint8_t PlaybackSettings[0x58]; // 0x0060 (Size: 0x58, Type: StructProperty)
    std::uint8_t bAppendPerspectiveTag; // 0x00B8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(ULFNVOSoundLibraryContext, PlaybackSettings) == 96, "Offset mismatch for ULFNVOSoundLibraryContext::PlaybackSettings");
static_assert(offsetof(ULFNVOSoundLibraryContext, bAppendPerspectiveTag) == 184, "Offset mismatch for ULFNVOSoundLibraryContext::bAppendPerspectiveTag");
