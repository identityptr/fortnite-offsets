#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PixelStreaming2Settings
{
    struct PixelStreaming2PluginSettings
    {
        static constexpr std::string_view Name = "PixelStreaming2PluginSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t EnablePixelStreamingToolbar = 0x30;
            static constexpr std::uintptr_t LogStats = 0x31;
            static constexpr std::uintptr_t EpicRtcLogFilter = 0x38;
            static constexpr std::uintptr_t DisableLatencyTester = 0x48;
            static constexpr std::uintptr_t inputController = 0x49;
            static constexpr std::uintptr_t DecoupleFramerate = 0x4A;
            static constexpr std::uintptr_t DecoupleWaitFactor = 0x4C;
            static constexpr std::uintptr_t SignalingReconnectInterval = 0x50;
            static constexpr std::uintptr_t SignalingMaxReconnectAttempts = 0x54;
            static constexpr std::uintptr_t SignalingKeepAliveInterval = 0x58;
            static constexpr std::uintptr_t UseMediaCapture = 0x5C;
            static constexpr std::uintptr_t InitializeDefaultStreamer = 0x5D;
            static constexpr std::uintptr_t DefaultStreamerID = 0x60;
            static constexpr std::uintptr_t DefaultStreamerType = 0x70;
            static constexpr std::uintptr_t AutoStartStream = 0x80;
            static constexpr std::uintptr_t ConnectionURL = 0x88;
            static constexpr std::uintptr_t CaptureUseFence = 0x98;
            static constexpr std::uintptr_t DefaultCursorClassName = 0xA0;
            static constexpr std::uintptr_t TextEditBeamCursorClassName = 0xB8;
            static constexpr std::uintptr_t HiddenCursorClassName = 0xD0;
            static constexpr std::uintptr_t EncoderTargetBitrate = 0xE8;
            static constexpr std::uintptr_t EncoderMinQuality = 0xEC;
            static constexpr std::uintptr_t EncoderMaxQuality = 0xF0;
            static constexpr std::uintptr_t QualityPreset = 0xF4;
            static constexpr std::uintptr_t LatencyMode = 0xF5;
            static constexpr std::uintptr_t KeyframeInterval = 0xF8;
            static constexpr std::uintptr_t MaxSessions = 0xFC;
            static constexpr std::uintptr_t EnableSimulcast = 0x100;
            static constexpr std::uintptr_t Codec = 0x108;
            static constexpr std::uintptr_t ScalabilityMode = 0x118;
            static constexpr std::uintptr_t H264Profile = 0x128;
            static constexpr std::uintptr_t WebRTCFps = 0x12C;
            static constexpr std::uintptr_t WebRTCStartBitrate = 0x130;
            static constexpr std::uintptr_t WebRTCMinBitrate = 0x134;
            static constexpr std::uintptr_t WebRTCMaxBitrate = 0x138;
            static constexpr std::uintptr_t WebRTCDisableReceiveAudio = 0x13C;
            static constexpr std::uintptr_t WebRTCDisableReceiveVideo = 0x13D;
            static constexpr std::uintptr_t WebRTCDisableTransmitAudio = 0x13E;
            static constexpr std::uintptr_t WebRTCDisableTransmitVideo = 0x13F;
            static constexpr std::uintptr_t WebRTCDisableAudioSync = 0x140;
            static constexpr std::uintptr_t WebRTCEnableFlexFec = 0x141;
            static constexpr std::uintptr_t WebRTCDisableStats = 0x142;
            static constexpr std::uintptr_t WebRTCStatsInterval = 0x144;
            static constexpr std::uintptr_t WebRTCNegotiateCodecs = 0x148;
            static constexpr std::uintptr_t WebRTCCodecPreferences = 0x150;
            static constexpr std::uintptr_t WebRTCAudioGain = 0x160;
            static constexpr std::uintptr_t WebRTCPortAllocatorFlags = 0x164;
            static constexpr std::uintptr_t IcePolicy = 0x168;
            static constexpr std::uintptr_t WebRTCMinPort = 0x16C;
            static constexpr std::uintptr_t WebRTCMaxPort = 0x170;
            static constexpr std::uintptr_t WebRTCFieldTrials = 0x178;
            static constexpr std::uintptr_t WebRTCDisableFrameDropper = 0x188;
            static constexpr std::uintptr_t WebRTCVideoPacingMaxDelay = 0x18C;
            static constexpr std::uintptr_t WebRTCVideoPacingFactor = 0x190;
            static constexpr std::uintptr_t EditorUseRemoteSignallingServer = 0x194;
            static constexpr std::uintptr_t AutoStreamPlayInEditor = 0x195;
            static constexpr std::uintptr_t EditorStartOnLaunch = 0x196;
            static constexpr std::uintptr_t EditorSource = 0x197;
            static constexpr std::uintptr_t HMDEnable = 0x198;
            static constexpr std::uintptr_t HMDMatchAspectRatio = 0x199;
            static constexpr std::uintptr_t HMDAppleEyePosition = 0x19A;
            static constexpr std::uintptr_t HMDApplyEyeRotation = 0x19B;
            static constexpr std::uintptr_t HMDHFOV = 0x19C;
            static constexpr std::uintptr_t HMDVFOV = 0x1A0;
            static constexpr std::uintptr_t HMDIPD = 0x1A4;
            static constexpr std::uintptr_t HMDProjectionOffsetX = 0x1A8;
            static constexpr std::uintptr_t HMDProjectionOffsetY = 0x1AC;
            static constexpr std::uintptr_t InputAllowConsoleCommands = 0x1B0;
            static constexpr std::uintptr_t InputKeyFilter = 0x1B8;
            static constexpr std::uintptr_t AllowedOrigins = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 70> Properties{{
            {"EnablePixelStreamingToolbar", 0x30, "BoolProperty"},
            {"LogStats", 0x31, "BoolProperty"},
            {"EpicRtcLogFilter", 0x38, "StrProperty"},
            {"DisableLatencyTester", 0x48, "BoolProperty"},
            {"inputController", 0x49, "EnumProperty"},
            {"DecoupleFramerate", 0x4A, "BoolProperty"},
            {"DecoupleWaitFactor", 0x4C, "FloatProperty"},
            {"SignalingReconnectInterval", 0x50, "FloatProperty"},
            {"SignalingMaxReconnectAttempts", 0x54, "IntProperty"},
            {"SignalingKeepAliveInterval", 0x58, "FloatProperty"},
            {"UseMediaCapture", 0x5C, "BoolProperty"},
            {"InitializeDefaultStreamer", 0x5D, "BoolProperty"},
            {"DefaultStreamerID", 0x60, "StrProperty"},
            {"DefaultStreamerType", 0x70, "StrProperty"},
            {"AutoStartStream", 0x80, "BoolProperty"},
            {"ConnectionURL", 0x88, "StrProperty"},
            {"CaptureUseFence", 0x98, "BoolProperty"},
            {"DefaultCursorClassName", 0xA0, "StructProperty"},
            {"TextEditBeamCursorClassName", 0xB8, "StructProperty"},
            {"HiddenCursorClassName", 0xD0, "StructProperty"},
            {"EncoderTargetBitrate", 0xE8, "IntProperty"},
            {"EncoderMinQuality", 0xEC, "IntProperty"},
            {"EncoderMaxQuality", 0xF0, "IntProperty"},
            {"QualityPreset", 0xF4, "EnumProperty"},
            {"LatencyMode", 0xF5, "EnumProperty"},
            {"KeyframeInterval", 0xF8, "IntProperty"},
            {"MaxSessions", 0xFC, "IntProperty"},
            {"EnableSimulcast", 0x100, "BoolProperty"},
            {"Codec", 0x108, "StrProperty"},
            {"ScalabilityMode", 0x118, "StrProperty"},
            {"H264Profile", 0x128, "EnumProperty"},
            {"WebRTCFps", 0x12C, "IntProperty"},
            {"WebRTCStartBitrate", 0x130, "IntProperty"},
            {"WebRTCMinBitrate", 0x134, "IntProperty"},
            {"WebRTCMaxBitrate", 0x138, "IntProperty"},
            {"WebRTCDisableReceiveAudio", 0x13C, "BoolProperty"},
            {"WebRTCDisableReceiveVideo", 0x13D, "BoolProperty"},
            {"WebRTCDisableTransmitAudio", 0x13E, "BoolProperty"},
            {"WebRTCDisableTransmitVideo", 0x13F, "BoolProperty"},
            {"WebRTCDisableAudioSync", 0x140, "BoolProperty"},
            {"WebRTCEnableFlexFec", 0x141, "BoolProperty"},
            {"WebRTCDisableStats", 0x142, "BoolProperty"},
            {"WebRTCStatsInterval", 0x144, "FloatProperty"},
            {"WebRTCNegotiateCodecs", 0x148, "BoolProperty"},
            {"WebRTCCodecPreferences", 0x150, "ArrayProperty"},
            {"WebRTCAudioGain", 0x160, "FloatProperty"},
            {"WebRTCPortAllocatorFlags", 0x164, "IntProperty"},
            {"IcePolicy", 0x168, "EnumProperty"},
            {"WebRTCMinPort", 0x16C, "IntProperty"},
            {"WebRTCMaxPort", 0x170, "IntProperty"},
            {"WebRTCFieldTrials", 0x178, "StrProperty"},
            {"WebRTCDisableFrameDropper", 0x188, "BoolProperty"},
            {"WebRTCVideoPacingMaxDelay", 0x18C, "FloatProperty"},
            {"WebRTCVideoPacingFactor", 0x190, "FloatProperty"},
            {"EditorUseRemoteSignallingServer", 0x194, "BoolProperty"},
            {"AutoStreamPlayInEditor", 0x195, "BoolProperty"},
            {"EditorStartOnLaunch", 0x196, "BoolProperty"},
            {"EditorSource", 0x197, "EnumProperty"},
            {"HMDEnable", 0x198, "BoolProperty"},
            {"HMDMatchAspectRatio", 0x199, "BoolProperty"},
            {"HMDAppleEyePosition", 0x19A, "BoolProperty"},
            {"HMDApplyEyeRotation", 0x19B, "BoolProperty"},
            {"HMDHFOV", 0x19C, "FloatProperty"},
            {"HMDVFOV", 0x1A0, "FloatProperty"},
            {"HMDIPD", 0x1A4, "FloatProperty"},
            {"HMDProjectionOffsetX", 0x1A8, "FloatProperty"},
            {"HMDProjectionOffsetY", 0x1AC, "FloatProperty"},
            {"InputAllowConsoleCommands", 0x1B0, "BoolProperty"},
            {"InputKeyFilter", 0x1B8, "StrProperty"},
            {"AllowedOrigins", 0x1C8, "StrProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetDefaultStreamerTypeOptions",
            "GetScalabilityModeOptions",
            "GetVideoCodecOptions",
            "GetWebRTCCodecPreferencesOptions",
        }};
    };

}
