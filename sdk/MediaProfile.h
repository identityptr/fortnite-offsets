/**
 * decamp dumper generated SDK
 * Package: /Script/MediaProfile
 */
#pragma once
#include "Basic.h"

// /Script/MediaProfile.MediaProfile
// Kind: Class; super: Object
class UMediaProfile
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> MediaSources; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MediaOutputs; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bOverrideTimecodeProvider; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0049
    void* TimecodeProvider; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bOverrideCustomTimeStep; // 0x0058 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0059
    void* CustomTimestep; // 0x0060 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0068
    void* AppliedTimecodeProvider; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* PreviousTimecodeProvider; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0004[0x8]; // 0x0080
    void* AppliedCustomTimeStep; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    void* PreviousCustomTimeStep; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    void* PlaybackManager; // 0x0098 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UMediaProfile, MediaSources) == 40, "Offset mismatch for UMediaProfile::MediaSources");
static_assert(offsetof(UMediaProfile, MediaOutputs) == 56, "Offset mismatch for UMediaProfile::MediaOutputs");
static_assert(offsetof(UMediaProfile, bOverrideTimecodeProvider) == 72, "Offset mismatch for UMediaProfile::bOverrideTimecodeProvider");
static_assert(offsetof(UMediaProfile, TimecodeProvider) == 80, "Offset mismatch for UMediaProfile::TimecodeProvider");
static_assert(offsetof(UMediaProfile, bOverrideCustomTimeStep) == 88, "Offset mismatch for UMediaProfile::bOverrideCustomTimeStep");
static_assert(offsetof(UMediaProfile, CustomTimestep) == 96, "Offset mismatch for UMediaProfile::CustomTimestep");
static_assert(offsetof(UMediaProfile, AppliedTimecodeProvider) == 112, "Offset mismatch for UMediaProfile::AppliedTimecodeProvider");
static_assert(offsetof(UMediaProfile, PreviousTimecodeProvider) == 120, "Offset mismatch for UMediaProfile::PreviousTimecodeProvider");
static_assert(offsetof(UMediaProfile, AppliedCustomTimeStep) == 136, "Offset mismatch for UMediaProfile::AppliedCustomTimeStep");
static_assert(offsetof(UMediaProfile, PreviousCustomTimeStep) == 144, "Offset mismatch for UMediaProfile::PreviousCustomTimeStep");
static_assert(offsetof(UMediaProfile, PlaybackManager) == 152, "Offset mismatch for UMediaProfile::PlaybackManager");

// /Script/MediaProfile.MediaProfileEditorSettings
// Kind: Class; super: Object
class UMediaProfileEditorSettings
{
public:
    std::uint8_t Opaque[1];
};


// /Script/MediaProfile.MediaProfilePlaybackManager
// Kind: Class; super: Object
class UMediaProfilePlaybackManager
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    TMap<void*, void*> MediaSourcePlayers; // 0x0030 (Size: 0x10, Type: MapProperty)
    TArray<void*> MediaSourceTextures; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TMap<void*, void*> MediaOutputCaptures; // 0x0050 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UMediaProfilePlaybackManager, MediaSourcePlayers) == 48, "Offset mismatch for UMediaProfilePlaybackManager::MediaSourcePlayers");
static_assert(offsetof(UMediaProfilePlaybackManager, MediaSourceTextures) == 64, "Offset mismatch for UMediaProfilePlaybackManager::MediaSourceTextures");
static_assert(offsetof(UMediaProfilePlaybackManager, MediaOutputCaptures) == 80, "Offset mismatch for UMediaProfilePlaybackManager::MediaOutputCaptures");

// /Script/MediaProfile.MediaProfileSettings
// Kind: Class; super: Object
class UMediaProfileSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bApplyInCommandlet; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    TArray<void*> MediaSourceProxy; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> MediaOutputProxy; // 0x0040 (Size: 0x10, Type: ArrayProperty)
    TSoftObjectPtr<void> StartupMediaProfile; // 0x0050 (Size: 0x28, Type: SoftObjectProperty)
};

static_assert(offsetof(UMediaProfileSettings, bApplyInCommandlet) == 40, "Offset mismatch for UMediaProfileSettings::bApplyInCommandlet");
static_assert(offsetof(UMediaProfileSettings, MediaSourceProxy) == 48, "Offset mismatch for UMediaProfileSettings::MediaSourceProxy");
static_assert(offsetof(UMediaProfileSettings, MediaOutputProxy) == 64, "Offset mismatch for UMediaProfileSettings::MediaOutputProxy");
static_assert(offsetof(UMediaProfileSettings, StartupMediaProfile) == 80, "Offset mismatch for UMediaProfileSettings::StartupMediaProfile");

// /Script/MediaProfile.ProxyMediaOutput
// Kind: Class; super: MediaOutput
class UProxyMediaOutput
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* DynamicProxy; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* Proxy; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UProxyMediaOutput, DynamicProxy) == 48, "Offset mismatch for UProxyMediaOutput::DynamicProxy");
static_assert(offsetof(UProxyMediaOutput, Proxy) == 56, "Offset mismatch for UProxyMediaOutput::Proxy");

// /Script/MediaProfile.ProxyMediaSource
// Kind: Class; super: MediaSource
class UProxyMediaSource
{
public:
    std::uint8_t Pad_0000[0x40]; // 0x0000
    void* DynamicProxy; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    void* Proxy; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UProxyMediaSource, DynamicProxy) == 64, "Offset mismatch for UProxyMediaSource::DynamicProxy");
static_assert(offsetof(UProxyMediaSource, Proxy) == 72, "Offset mismatch for UProxyMediaSource::Proxy");
