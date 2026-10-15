/**
 * decamp dumper generated SDK
 * Package: /Script/AVCodecsCoreRHI
 */
#pragma once
#include "Basic.h"

// /Script/AVCodecsCoreRHI.SimpleAudioEncoderConfig
// Kind: ScriptStruct; super: none
struct FSimpleAudioEncoderConfig
{
public:
    std::int32_t bitrate; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t SampleRate; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t NumChannels; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSimpleAudioEncoderConfig, bitrate) == 0, "Offset mismatch for FSimpleAudioEncoderConfig::bitrate");
static_assert(offsetof(FSimpleAudioEncoderConfig, SampleRate) == 4, "Offset mismatch for FSimpleAudioEncoderConfig::SampleRate");
static_assert(offsetof(FSimpleAudioEncoderConfig, NumChannels) == 8, "Offset mismatch for FSimpleAudioEncoderConfig::NumChannels");

// /Script/AVCodecsCoreRHI.SimpleAudioPacket
// Kind: ScriptStruct; super: none
struct FSimpleAudioPacket
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AVCodecsCoreRHI.SimpleVideoEncoderConfig
// Kind: ScriptStruct; super: none
struct FSimpleVideoEncoderConfig
{
public:
    std::int32_t Width; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Height; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t TargetFramerate; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t targetBitrate; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t MaxBitrate; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSimpleVideoEncoderConfig, Width) == 0, "Offset mismatch for FSimpleVideoEncoderConfig::Width");
static_assert(offsetof(FSimpleVideoEncoderConfig, Height) == 4, "Offset mismatch for FSimpleVideoEncoderConfig::Height");
static_assert(offsetof(FSimpleVideoEncoderConfig, TargetFramerate) == 8, "Offset mismatch for FSimpleVideoEncoderConfig::TargetFramerate");
static_assert(offsetof(FSimpleVideoEncoderConfig, targetBitrate) == 12, "Offset mismatch for FSimpleVideoEncoderConfig::targetBitrate");
static_assert(offsetof(FSimpleVideoEncoderConfig, MaxBitrate) == 16, "Offset mismatch for FSimpleVideoEncoderConfig::MaxBitrate");

// /Script/AVCodecsCoreRHI.SimpleVideoPacket
// Kind: ScriptStruct; super: none
struct FSimpleVideoPacket
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AVCodecsCoreRHI.SimpleAVHelper
// Kind: Class; super: Object
class USimpleAVHelper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AVCodecsCoreRHI.SimpleAudioEncoder
// Kind: Class; super: Object
class USimpleAudioEncoder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AVCodecsCoreRHI.SimpleAudioHelper
// Kind: Class; super: SimpleAVHelper
class USimpleAudioHelper
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AVCodecsCoreRHI.SimpleVideoDecoder
// Kind: Class; super: Object
class USimpleVideoDecoder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AVCodecsCoreRHI.SimpleVideoEncoder
// Kind: Class; super: Object
class USimpleVideoEncoder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/AVCodecsCoreRHI.SimpleVideoHelper
// Kind: Class; super: SimpleAVHelper
class USimpleVideoHelper
{
public:
    std::uint8_t Opaque[1];
};
