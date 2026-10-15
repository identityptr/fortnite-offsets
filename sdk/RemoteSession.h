/**
 * decamp dumper generated SDK
 * Package: /Script/RemoteSession
 */
#pragma once
#include "Basic.h"

// /Script/RemoteSession.RemoteSessionChannelInfo
// Kind: ScriptStruct; super: none
struct FRemoteSessionChannelInfo
{
public:
    FString Type; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::uint8_t Mode; // 0x0010 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FRemoteSessionChannelInfo, Type) == 0, "Offset mismatch for FRemoteSessionChannelInfo::Type");
static_assert(offsetof(FRemoteSessionChannelInfo, Mode) == 16, "Offset mismatch for FRemoteSessionChannelInfo::Mode");

// /Script/RemoteSession.RemoteSessionMediaCapture
// Kind: Class; super: MediaCapture
class URemoteSessionMediaCapture
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnStateChanged; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x28]; // 0x0038
    void* MediaOutput; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URemoteSessionMediaCapture, OnStateChanged) == 40, "Offset mismatch for URemoteSessionMediaCapture::OnStateChanged");
static_assert(offsetof(URemoteSessionMediaCapture, MediaOutput) == 96, "Offset mismatch for URemoteSessionMediaCapture::MediaOutput");

// /Script/RemoteSession.RemoteSessionMediaOutput
// Kind: Class; super: MediaOutput
class URemoteSessionMediaOutput
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t NumberOfTextureBuffers; // 0x0028 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(URemoteSessionMediaOutput, NumberOfTextureBuffers) == 40, "Offset mismatch for URemoteSessionMediaOutput::NumberOfTextureBuffers");

// /Script/RemoteSession.RemoteSessionSettings
// Kind: Class; super: Object
class URemoteSessionSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t HostPort; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t ConnectionTimeout; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t ConnectionTimeoutWhenDebugging; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t PingTime; // 0x0034 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAllowInShipping; // 0x0038 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHostWithPIE; // 0x0039 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bAutoHostWithGame; // 0x003A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x003B
    std::int32_t ImageQuality; // 0x003C (Size: 0x4, Type: IntProperty)
    std::int32_t FrameRate; // 0x0040 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0044
    TArray<void*> AllowedChannels; // 0x0048 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DeniedChannels; // 0x0058 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(URemoteSessionSettings, HostPort) == 40, "Offset mismatch for URemoteSessionSettings::HostPort");
static_assert(offsetof(URemoteSessionSettings, ConnectionTimeout) == 44, "Offset mismatch for URemoteSessionSettings::ConnectionTimeout");
static_assert(offsetof(URemoteSessionSettings, ConnectionTimeoutWhenDebugging) == 48, "Offset mismatch for URemoteSessionSettings::ConnectionTimeoutWhenDebugging");
static_assert(offsetof(URemoteSessionSettings, PingTime) == 52, "Offset mismatch for URemoteSessionSettings::PingTime");
static_assert(offsetof(URemoteSessionSettings, bAllowInShipping) == 56, "Offset mismatch for URemoteSessionSettings::bAllowInShipping");
static_assert(offsetof(URemoteSessionSettings, bAutoHostWithPIE) == 57, "Offset mismatch for URemoteSessionSettings::bAutoHostWithPIE");
static_assert(offsetof(URemoteSessionSettings, bAutoHostWithGame) == 58, "Offset mismatch for URemoteSessionSettings::bAutoHostWithGame");
static_assert(offsetof(URemoteSessionSettings, ImageQuality) == 60, "Offset mismatch for URemoteSessionSettings::ImageQuality");
static_assert(offsetof(URemoteSessionSettings, FrameRate) == 64, "Offset mismatch for URemoteSessionSettings::FrameRate");
static_assert(offsetof(URemoteSessionSettings, AllowedChannels) == 72, "Offset mismatch for URemoteSessionSettings::AllowedChannels");
static_assert(offsetof(URemoteSessionSettings, DeniedChannels) == 88, "Offset mismatch for URemoteSessionSettings::DeniedChannels");
