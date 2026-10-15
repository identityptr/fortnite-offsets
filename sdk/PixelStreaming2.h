/**
 * decamp dumper generated SDK
 * Package: /Script/PixelStreaming2
 */
#pragma once
#include "Basic.h"

// /Script/PixelStreaming2.PixelStreaming2AudioComponent
// Kind: Class; super: SynthComponent
class UPixelStreaming2AudioComponent
{
public:
    std::uint8_t Pad_0000[0x628]; // 0x0000
    FString StreamerToHear; // 0x0628 (Size: 0x10, Type: StrProperty)
    FString PlayerToHear; // 0x0638 (Size: 0x10, Type: StrProperty)
    std::uint8_t bAutoFindPeer; // 0x0648 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPixelStreaming2AudioComponent, StreamerToHear) == 1576, "Offset mismatch for UPixelStreaming2AudioComponent::StreamerToHear");
static_assert(offsetof(UPixelStreaming2AudioComponent, PlayerToHear) == 1592, "Offset mismatch for UPixelStreaming2AudioComponent::PlayerToHear");
static_assert(offsetof(UPixelStreaming2AudioComponent, bAutoFindPeer) == 1608, "Offset mismatch for UPixelStreaming2AudioComponent::bAutoFindPeer");

// /Script/PixelStreaming2.PixelStreaming2Blueprints
// Kind: Class; super: BlueprintFunctionLibrary
class UPixelStreaming2Blueprints
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PixelStreaming2.PixelStreaming2Delegates
// Kind: Class; super: Object
class UPixelStreaming2Delegates
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnConnectedToSignallingServer; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x40]; // 0x0038
    FMulticastInlineDelegate OnDisconnectedFromSignallingServer; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0002[0x40]; // 0x0088
    FMulticastInlineDelegate OnNewConnection; // 0x00C8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0003[0x40]; // 0x00D8
    FMulticastInlineDelegate OnClosedConnection; // 0x0118 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0004[0x40]; // 0x0128
    FMulticastInlineDelegate OnAllConnectionsClosed; // 0x0168 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0005[0x40]; // 0x0178
    FMulticastInlineDelegate OnDataTrackOpen; // 0x01B8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0006[0x40]; // 0x01C8
    FMulticastInlineDelegate OnDataTrackClosed; // 0x0208 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0007[0x140]; // 0x0218
    FMulticastInlineDelegate OnStatChanged; // 0x0358 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0008[0x40]; // 0x0368
    FMulticastInlineDelegate OnFallbackToSoftwareEncoding; // 0x03A8 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UPixelStreaming2Delegates, OnConnectedToSignallingServer) == 40, "Offset mismatch for UPixelStreaming2Delegates::OnConnectedToSignallingServer");
static_assert(offsetof(UPixelStreaming2Delegates, OnDisconnectedFromSignallingServer) == 120, "Offset mismatch for UPixelStreaming2Delegates::OnDisconnectedFromSignallingServer");
static_assert(offsetof(UPixelStreaming2Delegates, OnNewConnection) == 200, "Offset mismatch for UPixelStreaming2Delegates::OnNewConnection");
static_assert(offsetof(UPixelStreaming2Delegates, OnClosedConnection) == 280, "Offset mismatch for UPixelStreaming2Delegates::OnClosedConnection");
static_assert(offsetof(UPixelStreaming2Delegates, OnAllConnectionsClosed) == 360, "Offset mismatch for UPixelStreaming2Delegates::OnAllConnectionsClosed");
static_assert(offsetof(UPixelStreaming2Delegates, OnDataTrackOpen) == 440, "Offset mismatch for UPixelStreaming2Delegates::OnDataTrackOpen");
static_assert(offsetof(UPixelStreaming2Delegates, OnDataTrackClosed) == 520, "Offset mismatch for UPixelStreaming2Delegates::OnDataTrackClosed");
static_assert(offsetof(UPixelStreaming2Delegates, OnStatChanged) == 856, "Offset mismatch for UPixelStreaming2Delegates::OnStatChanged");
static_assert(offsetof(UPixelStreaming2Delegates, OnFallbackToSoftwareEncoding) == 936, "Offset mismatch for UPixelStreaming2Delegates::OnFallbackToSoftwareEncoding");

// /Script/PixelStreaming2.PixelStreaming2Input
// Kind: Class; super: ActorComponent
class UPixelStreaming2Input
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnInputEvent; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UPixelStreaming2Input, OnInputEvent) == 192, "Offset mismatch for UPixelStreaming2Input::OnInputEvent");

// /Script/PixelStreaming2.PixelStreaming2MediaIOCapture
// Kind: Class; super: MediaCapture
class UPixelStreaming2MediaIOCapture
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    FMulticastInlineDelegate OnStateChanged; // 0x0028 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t Pad_0001[0x28]; // 0x0038
    void* MediaOutput; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPixelStreaming2MediaIOCapture, OnStateChanged) == 40, "Offset mismatch for UPixelStreaming2MediaIOCapture::OnStateChanged");
static_assert(offsetof(UPixelStreaming2MediaIOCapture, MediaOutput) == 96, "Offset mismatch for UPixelStreaming2MediaIOCapture::MediaOutput");

// /Script/PixelStreaming2.PixelStreaming2MediaIOOutput
// Kind: Class; super: MediaOutput
class UPixelStreaming2MediaIOOutput
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* MediaCapture; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPixelStreaming2MediaIOOutput, MediaCapture) == 48, "Offset mismatch for UPixelStreaming2MediaIOOutput::MediaCapture");

// /Script/PixelStreaming2.PixelStreaming2MediaTexture
// Kind: Class; super: Texture2DDynamic
class UPixelStreaming2MediaTexture
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    std::uint8_t Format; // 0x0128 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UPixelStreaming2MediaTexture, Format) == 296, "Offset mismatch for UPixelStreaming2MediaTexture::Format");

// /Script/PixelStreaming2.PixelStreaming2StreamerComponent
// Kind: Class; super: ActorComponent
class UPixelStreaming2StreamerComponent
{
public:
    std::uint8_t Pad_0000[0x108]; // 0x0000
    FString StreamerId; // 0x0108 (Size: 0x10, Type: StrProperty)
    FString SignallingServerURL; // 0x0118 (Size: 0x10, Type: StrProperty)
    std::uint8_t UsePixelStreamingURL; // 0x0128 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0129
    std::int32_t StreamFPSOverride; // 0x012C (Size: 0x4, Type: IntProperty)
    std::uint8_t CoupleFramerate; // 0x0130 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x7]; // 0x0131
    void* VideoProducer; // 0x0138 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPixelStreaming2StreamerComponent, StreamerId) == 264, "Offset mismatch for UPixelStreaming2StreamerComponent::StreamerId");
static_assert(offsetof(UPixelStreaming2StreamerComponent, SignallingServerURL) == 280, "Offset mismatch for UPixelStreaming2StreamerComponent::SignallingServerURL");
static_assert(offsetof(UPixelStreaming2StreamerComponent, UsePixelStreamingURL) == 296, "Offset mismatch for UPixelStreaming2StreamerComponent::UsePixelStreamingURL");
static_assert(offsetof(UPixelStreaming2StreamerComponent, StreamFPSOverride) == 300, "Offset mismatch for UPixelStreaming2StreamerComponent::StreamFPSOverride");
static_assert(offsetof(UPixelStreaming2StreamerComponent, CoupleFramerate) == 304, "Offset mismatch for UPixelStreaming2StreamerComponent::CoupleFramerate");
static_assert(offsetof(UPixelStreaming2StreamerComponent, VideoProducer) == 312, "Offset mismatch for UPixelStreaming2StreamerComponent::VideoProducer");

// /Script/PixelStreaming2.PixelStreaming2VideoComponent
// Kind: Class; super: SceneComponent
class UPixelStreaming2VideoComponent
{
public:
    std::uint8_t Pad_0000[0x248]; // 0x0000
    FString StreamerToWatch; // 0x0248 (Size: 0x10, Type: StrProperty)
    FString PlayerToWatch; // 0x0258 (Size: 0x10, Type: StrProperty)
    std::uint8_t bAutoFindPeer; // 0x0268 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0269
    void* VideoConsumer; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPixelStreaming2VideoComponent, StreamerToWatch) == 584, "Offset mismatch for UPixelStreaming2VideoComponent::StreamerToWatch");
static_assert(offsetof(UPixelStreaming2VideoComponent, PlayerToWatch) == 600, "Offset mismatch for UPixelStreaming2VideoComponent::PlayerToWatch");
static_assert(offsetof(UPixelStreaming2VideoComponent, bAutoFindPeer) == 616, "Offset mismatch for UPixelStreaming2VideoComponent::bAutoFindPeer");
static_assert(offsetof(UPixelStreaming2VideoComponent, VideoConsumer) == 624, "Offset mismatch for UPixelStreaming2VideoComponent::VideoConsumer");

// /Script/PixelStreaming2.PixelStreaming2VideoProducerBackBuffer
// Kind: Class; super: PixelStreaming2VideoProducerBase
class UPixelStreaming2VideoProducerBackBuffer
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PixelStreaming2.PixelStreaming2VideoProducerBase
// Kind: Class; super: Object
class UPixelStreaming2VideoProducerBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PixelStreaming2.PixelStreaming2VideoProducerMediaCapture
// Kind: Class; super: PixelStreaming2VideoProducerBase
class UPixelStreaming2VideoProducerMediaCapture
{
public:
    std::uint8_t Opaque[1];
};


// /Script/PixelStreaming2.PixelStreaming2VideoProducerRenderTarget
// Kind: Class; super: PixelStreaming2VideoProducerBase
class UPixelStreaming2VideoProducerRenderTarget
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Target; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPixelStreaming2VideoProducerRenderTarget, Target) == 56, "Offset mismatch for UPixelStreaming2VideoProducerRenderTarget::Target");
