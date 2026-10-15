/**
 * decamp dumper generated SDK
 * Package: /Script/PixelStreaming2Settings
 */
#pragma once
#include "Basic.h"

// /Script/PixelStreaming2Settings.PixelStreaming2PluginSettings
// Kind: Class; super: DeveloperSettings
class UPixelStreaming2PluginSettings
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t EnablePixelStreamingToolbar; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t LogStats; // 0x0031 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x0032
    FString EpicRtcLogFilter; // 0x0038 (Size: 0x10, Type: StrProperty)
    std::uint8_t DisableLatencyTester; // 0x0048 (Size: 0x1, Type: BoolProperty)
    std::uint8_t inputController; // 0x0049 (Size: 0x1, Type: EnumProperty)
    std::uint8_t DecoupleFramerate; // 0x004A (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x004B
    float DecoupleWaitFactor; // 0x004C (Size: 0x4, Type: FloatProperty)
    float SignalingReconnectInterval; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::int32_t SignalingMaxReconnectAttempts; // 0x0054 (Size: 0x4, Type: IntProperty)
    float SignalingKeepAliveInterval; // 0x0058 (Size: 0x4, Type: FloatProperty)
    std::uint8_t UseMediaCapture; // 0x005C (Size: 0x1, Type: BoolProperty)
    std::uint8_t InitializeDefaultStreamer; // 0x005D (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x2]; // 0x005E
    FString DefaultStreamerID; // 0x0060 (Size: 0x10, Type: StrProperty)
    FString DefaultStreamerType; // 0x0070 (Size: 0x10, Type: StrProperty)
    std::uint8_t AutoStartStream; // 0x0080 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x7]; // 0x0081
    FString ConnectionURL; // 0x0088 (Size: 0x10, Type: StrProperty)
    std::uint8_t CaptureUseFence; // 0x0098 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0005[0x7]; // 0x0099
    std::uint8_t DefaultCursorClassName[0x18]; // 0x00A0 (Size: 0x18, Type: StructProperty)
    std::uint8_t TextEditBeamCursorClassName[0x18]; // 0x00B8 (Size: 0x18, Type: StructProperty)
    std::uint8_t HiddenCursorClassName[0x18]; // 0x00D0 (Size: 0x18, Type: StructProperty)
    std::int32_t EncoderTargetBitrate; // 0x00E8 (Size: 0x4, Type: IntProperty)
    std::int32_t EncoderMinQuality; // 0x00EC (Size: 0x4, Type: IntProperty)
    std::int32_t EncoderMaxQuality; // 0x00F0 (Size: 0x4, Type: IntProperty)
    std::uint8_t QualityPreset; // 0x00F4 (Size: 0x1, Type: EnumProperty)
    std::uint8_t LatencyMode; // 0x00F5 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0006[0x2]; // 0x00F6
    std::int32_t KeyframeInterval; // 0x00F8 (Size: 0x4, Type: IntProperty)
    std::int32_t MaxSessions; // 0x00FC (Size: 0x4, Type: IntProperty)
    std::uint8_t EnableSimulcast; // 0x0100 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0007[0x7]; // 0x0101
    FString Codec; // 0x0108 (Size: 0x10, Type: StrProperty)
    FString ScalabilityMode; // 0x0118 (Size: 0x10, Type: StrProperty)
    std::uint8_t H264Profile; // 0x0128 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0008[0x3]; // 0x0129
    std::int32_t WebRTCFps; // 0x012C (Size: 0x4, Type: IntProperty)
    std::int32_t WebRTCStartBitrate; // 0x0130 (Size: 0x4, Type: IntProperty)
    std::int32_t WebRTCMinBitrate; // 0x0134 (Size: 0x4, Type: IntProperty)
    std::int32_t WebRTCMaxBitrate; // 0x0138 (Size: 0x4, Type: IntProperty)
    std::uint8_t WebRTCDisableReceiveAudio; // 0x013C (Size: 0x1, Type: BoolProperty)
    std::uint8_t WebRTCDisableReceiveVideo; // 0x013D (Size: 0x1, Type: BoolProperty)
    std::uint8_t WebRTCDisableTransmitAudio; // 0x013E (Size: 0x1, Type: BoolProperty)
    std::uint8_t WebRTCDisableTransmitVideo; // 0x013F (Size: 0x1, Type: BoolProperty)
    std::uint8_t WebRTCDisableAudioSync; // 0x0140 (Size: 0x1, Type: BoolProperty)
    std::uint8_t WebRTCEnableFlexFec; // 0x0141 (Size: 0x1, Type: BoolProperty)
    std::uint8_t WebRTCDisableStats; // 0x0142 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0009[0x1]; // 0x0143
    float WebRTCStatsInterval; // 0x0144 (Size: 0x4, Type: FloatProperty)
    std::uint8_t WebRTCNegotiateCodecs; // 0x0148 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000A[0x7]; // 0x0149
    TArray<void*> WebRTCCodecPreferences; // 0x0150 (Size: 0x10, Type: ArrayProperty)
    float WebRTCAudioGain; // 0x0160 (Size: 0x4, Type: FloatProperty)
    std::int32_t WebRTCPortAllocatorFlags; // 0x0164 (Size: 0x4, Type: IntProperty)
    std::uint8_t IcePolicy; // 0x0168 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_000B[0x3]; // 0x0169
    std::int32_t WebRTCMinPort; // 0x016C (Size: 0x4, Type: IntProperty)
    std::int32_t WebRTCMaxPort; // 0x0170 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_000C[0x4]; // 0x0174
    FString WebRTCFieldTrials; // 0x0178 (Size: 0x10, Type: StrProperty)
    std::uint8_t WebRTCDisableFrameDropper; // 0x0188 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000D[0x3]; // 0x0189
    float WebRTCVideoPacingMaxDelay; // 0x018C (Size: 0x4, Type: FloatProperty)
    float WebRTCVideoPacingFactor; // 0x0190 (Size: 0x4, Type: FloatProperty)
    std::uint8_t EditorUseRemoteSignallingServer; // 0x0194 (Size: 0x1, Type: BoolProperty)
    std::uint8_t AutoStreamPlayInEditor; // 0x0195 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EditorStartOnLaunch; // 0x0196 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EditorSource; // 0x0197 (Size: 0x1, Type: EnumProperty)
    std::uint8_t HMDEnable; // 0x0198 (Size: 0x1, Type: BoolProperty)
    std::uint8_t HMDMatchAspectRatio; // 0x0199 (Size: 0x1, Type: BoolProperty)
    std::uint8_t HMDAppleEyePosition; // 0x019A (Size: 0x1, Type: BoolProperty)
    std::uint8_t HMDApplyEyeRotation; // 0x019B (Size: 0x1, Type: BoolProperty)
    float HMDHFOV; // 0x019C (Size: 0x4, Type: FloatProperty)
    float HMDVFOV; // 0x01A0 (Size: 0x4, Type: FloatProperty)
    float HMDIPD; // 0x01A4 (Size: 0x4, Type: FloatProperty)
    float HMDProjectionOffsetX; // 0x01A8 (Size: 0x4, Type: FloatProperty)
    float HMDProjectionOffsetY; // 0x01AC (Size: 0x4, Type: FloatProperty)
    std::uint8_t InputAllowConsoleCommands; // 0x01B0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_000E[0x7]; // 0x01B1
    FString InputKeyFilter; // 0x01B8 (Size: 0x10, Type: StrProperty)
    FString AllowedOrigins; // 0x01C8 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UPixelStreaming2PluginSettings, EnablePixelStreamingToolbar) == 48, "Offset mismatch for UPixelStreaming2PluginSettings::EnablePixelStreamingToolbar");
static_assert(offsetof(UPixelStreaming2PluginSettings, LogStats) == 49, "Offset mismatch for UPixelStreaming2PluginSettings::LogStats");
static_assert(offsetof(UPixelStreaming2PluginSettings, EpicRtcLogFilter) == 56, "Offset mismatch for UPixelStreaming2PluginSettings::EpicRtcLogFilter");
static_assert(offsetof(UPixelStreaming2PluginSettings, DisableLatencyTester) == 72, "Offset mismatch for UPixelStreaming2PluginSettings::DisableLatencyTester");
static_assert(offsetof(UPixelStreaming2PluginSettings, inputController) == 73, "Offset mismatch for UPixelStreaming2PluginSettings::inputController");
static_assert(offsetof(UPixelStreaming2PluginSettings, DecoupleFramerate) == 74, "Offset mismatch for UPixelStreaming2PluginSettings::DecoupleFramerate");
static_assert(offsetof(UPixelStreaming2PluginSettings, DecoupleWaitFactor) == 76, "Offset mismatch for UPixelStreaming2PluginSettings::DecoupleWaitFactor");
static_assert(offsetof(UPixelStreaming2PluginSettings, SignalingReconnectInterval) == 80, "Offset mismatch for UPixelStreaming2PluginSettings::SignalingReconnectInterval");
static_assert(offsetof(UPixelStreaming2PluginSettings, SignalingMaxReconnectAttempts) == 84, "Offset mismatch for UPixelStreaming2PluginSettings::SignalingMaxReconnectAttempts");
static_assert(offsetof(UPixelStreaming2PluginSettings, SignalingKeepAliveInterval) == 88, "Offset mismatch for UPixelStreaming2PluginSettings::SignalingKeepAliveInterval");
static_assert(offsetof(UPixelStreaming2PluginSettings, UseMediaCapture) == 92, "Offset mismatch for UPixelStreaming2PluginSettings::UseMediaCapture");
static_assert(offsetof(UPixelStreaming2PluginSettings, InitializeDefaultStreamer) == 93, "Offset mismatch for UPixelStreaming2PluginSettings::InitializeDefaultStreamer");
static_assert(offsetof(UPixelStreaming2PluginSettings, DefaultStreamerID) == 96, "Offset mismatch for UPixelStreaming2PluginSettings::DefaultStreamerID");
static_assert(offsetof(UPixelStreaming2PluginSettings, DefaultStreamerType) == 112, "Offset mismatch for UPixelStreaming2PluginSettings::DefaultStreamerType");
static_assert(offsetof(UPixelStreaming2PluginSettings, AutoStartStream) == 128, "Offset mismatch for UPixelStreaming2PluginSettings::AutoStartStream");
static_assert(offsetof(UPixelStreaming2PluginSettings, ConnectionURL) == 136, "Offset mismatch for UPixelStreaming2PluginSettings::ConnectionURL");
static_assert(offsetof(UPixelStreaming2PluginSettings, CaptureUseFence) == 152, "Offset mismatch for UPixelStreaming2PluginSettings::CaptureUseFence");
static_assert(offsetof(UPixelStreaming2PluginSettings, DefaultCursorClassName) == 160, "Offset mismatch for UPixelStreaming2PluginSettings::DefaultCursorClassName");
static_assert(offsetof(UPixelStreaming2PluginSettings, TextEditBeamCursorClassName) == 184, "Offset mismatch for UPixelStreaming2PluginSettings::TextEditBeamCursorClassName");
static_assert(offsetof(UPixelStreaming2PluginSettings, HiddenCursorClassName) == 208, "Offset mismatch for UPixelStreaming2PluginSettings::HiddenCursorClassName");
static_assert(offsetof(UPixelStreaming2PluginSettings, EncoderTargetBitrate) == 232, "Offset mismatch for UPixelStreaming2PluginSettings::EncoderTargetBitrate");
static_assert(offsetof(UPixelStreaming2PluginSettings, EncoderMinQuality) == 236, "Offset mismatch for UPixelStreaming2PluginSettings::EncoderMinQuality");
static_assert(offsetof(UPixelStreaming2PluginSettings, EncoderMaxQuality) == 240, "Offset mismatch for UPixelStreaming2PluginSettings::EncoderMaxQuality");
static_assert(offsetof(UPixelStreaming2PluginSettings, QualityPreset) == 244, "Offset mismatch for UPixelStreaming2PluginSettings::QualityPreset");
static_assert(offsetof(UPixelStreaming2PluginSettings, LatencyMode) == 245, "Offset mismatch for UPixelStreaming2PluginSettings::LatencyMode");
static_assert(offsetof(UPixelStreaming2PluginSettings, KeyframeInterval) == 248, "Offset mismatch for UPixelStreaming2PluginSettings::KeyframeInterval");
static_assert(offsetof(UPixelStreaming2PluginSettings, MaxSessions) == 252, "Offset mismatch for UPixelStreaming2PluginSettings::MaxSessions");
static_assert(offsetof(UPixelStreaming2PluginSettings, EnableSimulcast) == 256, "Offset mismatch for UPixelStreaming2PluginSettings::EnableSimulcast");
static_assert(offsetof(UPixelStreaming2PluginSettings, Codec) == 264, "Offset mismatch for UPixelStreaming2PluginSettings::Codec");
static_assert(offsetof(UPixelStreaming2PluginSettings, ScalabilityMode) == 280, "Offset mismatch for UPixelStreaming2PluginSettings::ScalabilityMode");
static_assert(offsetof(UPixelStreaming2PluginSettings, H264Profile) == 296, "Offset mismatch for UPixelStreaming2PluginSettings::H264Profile");
static_assert(offsetof(UPixelStreaming2PluginSettings, WebRTCFps) == 300, "Offset mismatch for UPixelStreaming2PluginSettings::WebRTCFps");
static_assert(offsetof(UPixelStreaming2PluginSettings, WebRTCStartBitrate) == 304, "Offset mismatch for UPixelStreaming2PluginSettings::WebRTCStartBitrate");
static_assert(offsetof(UPixelStreaming2PluginSettings, WebRTCMinBitrate) == 308, "Offset mismatch for UPixelStreaming2PluginSettings::WebRTCMinBitrate");
static_assert(offsetof(UPixelStreaming2PluginSettings, WebRTCMaxBitrate) == 312, "Offset mismatch for UPixelStreaming2PluginSettings::WebRTCMaxBitrate");
static_assert(offsetof(UPixelStreaming2PluginSettings, WebRTCDisableReceiveAudio) == 316, "Offset mismatch for UPixelStreaming2PluginSettings::WebRTCDisableReceiveAudio");
static_assert(offsetof(UPixelStreaming2PluginSettings, WebRTCDisableReceiveVideo) == 317, "Offset mismatch for UPixelStreaming2PluginSettings::WebRTCDisableReceiveVideo");
static_assert(offsetof(UPixelStreaming2PluginSettings, WebRTCDisableTransmitAudio) == 318, "Offset mismatch for UPixelStreaming2PluginSettings::WebRTCDisableTransmitAudio");
static_assert(offsetof(UPixelStreaming2PluginSettings, WebRTCDisableTransmitVideo) == 319, "Offset mismatch for UPixelStreaming2PluginSettings::WebRTCDisableTransmitVideo");
static_assert(offsetof(UPixelStreaming2PluginSettings, WebRTCDisableAudioSync) == 320, "Offset mismatch for UPixelStreaming2PluginSettings::WebRTCDisableAudioSync");
static_assert(offsetof(UPixelStreaming2PluginSettings, WebRTCEnableFlexFec) == 321, "Offset mismatch for UPixelStreaming2PluginSettings::WebRTCEnableFlexFec");
static_assert(offsetof(UPixelStreaming2PluginSettings, WebRTCDisableStats) == 322, "Offset mismatch for UPixelStreaming2PluginSettings::WebRTCDisableStats");
static_assert(offsetof(UPixelStreaming2PluginSettings, WebRTCStatsInterval) == 324, "Offset mismatch for UPixelStreaming2PluginSettings::WebRTCStatsInterval");
static_assert(offsetof(UPixelStreaming2PluginSettings, WebRTCNegotiateCodecs) == 328, "Offset mismatch for UPixelStreaming2PluginSettings::WebRTCNegotiateCodecs");
static_assert(offsetof(UPixelStreaming2PluginSettings, WebRTCCodecPreferences) == 336, "Offset mismatch for UPixelStreaming2PluginSettings::WebRTCCodecPreferences");
static_assert(offsetof(UPixelStreaming2PluginSettings, WebRTCAudioGain) == 352, "Offset mismatch for UPixelStreaming2PluginSettings::WebRTCAudioGain");
static_assert(offsetof(UPixelStreaming2PluginSettings, WebRTCPortAllocatorFlags) == 356, "Offset mismatch for UPixelStreaming2PluginSettings::WebRTCPortAllocatorFlags");
static_assert(offsetof(UPixelStreaming2PluginSettings, IcePolicy) == 360, "Offset mismatch for UPixelStreaming2PluginSettings::IcePolicy");
static_assert(offsetof(UPixelStreaming2PluginSettings, WebRTCMinPort) == 364, "Offset mismatch for UPixelStreaming2PluginSettings::WebRTCMinPort");
static_assert(offsetof(UPixelStreaming2PluginSettings, WebRTCMaxPort) == 368, "Offset mismatch for UPixelStreaming2PluginSettings::WebRTCMaxPort");
static_assert(offsetof(UPixelStreaming2PluginSettings, WebRTCFieldTrials) == 376, "Offset mismatch for UPixelStreaming2PluginSettings::WebRTCFieldTrials");
static_assert(offsetof(UPixelStreaming2PluginSettings, WebRTCDisableFrameDropper) == 392, "Offset mismatch for UPixelStreaming2PluginSettings::WebRTCDisableFrameDropper");
static_assert(offsetof(UPixelStreaming2PluginSettings, WebRTCVideoPacingMaxDelay) == 396, "Offset mismatch for UPixelStreaming2PluginSettings::WebRTCVideoPacingMaxDelay");
static_assert(offsetof(UPixelStreaming2PluginSettings, WebRTCVideoPacingFactor) == 400, "Offset mismatch for UPixelStreaming2PluginSettings::WebRTCVideoPacingFactor");
static_assert(offsetof(UPixelStreaming2PluginSettings, EditorUseRemoteSignallingServer) == 404, "Offset mismatch for UPixelStreaming2PluginSettings::EditorUseRemoteSignallingServer");
static_assert(offsetof(UPixelStreaming2PluginSettings, AutoStreamPlayInEditor) == 405, "Offset mismatch for UPixelStreaming2PluginSettings::AutoStreamPlayInEditor");
static_assert(offsetof(UPixelStreaming2PluginSettings, EditorStartOnLaunch) == 406, "Offset mismatch for UPixelStreaming2PluginSettings::EditorStartOnLaunch");
static_assert(offsetof(UPixelStreaming2PluginSettings, EditorSource) == 407, "Offset mismatch for UPixelStreaming2PluginSettings::EditorSource");
static_assert(offsetof(UPixelStreaming2PluginSettings, HMDEnable) == 408, "Offset mismatch for UPixelStreaming2PluginSettings::HMDEnable");
static_assert(offsetof(UPixelStreaming2PluginSettings, HMDMatchAspectRatio) == 409, "Offset mismatch for UPixelStreaming2PluginSettings::HMDMatchAspectRatio");
static_assert(offsetof(UPixelStreaming2PluginSettings, HMDAppleEyePosition) == 410, "Offset mismatch for UPixelStreaming2PluginSettings::HMDAppleEyePosition");
static_assert(offsetof(UPixelStreaming2PluginSettings, HMDApplyEyeRotation) == 411, "Offset mismatch for UPixelStreaming2PluginSettings::HMDApplyEyeRotation");
static_assert(offsetof(UPixelStreaming2PluginSettings, HMDHFOV) == 412, "Offset mismatch for UPixelStreaming2PluginSettings::HMDHFOV");
static_assert(offsetof(UPixelStreaming2PluginSettings, HMDVFOV) == 416, "Offset mismatch for UPixelStreaming2PluginSettings::HMDVFOV");
static_assert(offsetof(UPixelStreaming2PluginSettings, HMDIPD) == 420, "Offset mismatch for UPixelStreaming2PluginSettings::HMDIPD");
static_assert(offsetof(UPixelStreaming2PluginSettings, HMDProjectionOffsetX) == 424, "Offset mismatch for UPixelStreaming2PluginSettings::HMDProjectionOffsetX");
static_assert(offsetof(UPixelStreaming2PluginSettings, HMDProjectionOffsetY) == 428, "Offset mismatch for UPixelStreaming2PluginSettings::HMDProjectionOffsetY");
static_assert(offsetof(UPixelStreaming2PluginSettings, InputAllowConsoleCommands) == 432, "Offset mismatch for UPixelStreaming2PluginSettings::InputAllowConsoleCommands");
static_assert(offsetof(UPixelStreaming2PluginSettings, InputKeyFilter) == 440, "Offset mismatch for UPixelStreaming2PluginSettings::InputKeyFilter");
static_assert(offsetof(UPixelStreaming2PluginSettings, AllowedOrigins) == 456, "Offset mismatch for UPixelStreaming2PluginSettings::AllowedOrigins");
