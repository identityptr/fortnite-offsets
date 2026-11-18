#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::PixelStreaming2
{
    struct PixelStreaming2AudioComponent
    {
        static constexpr std::string_view Name = "PixelStreaming2AudioComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SynthComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t StreamerToHear = 0x628;
            static constexpr std::uintptr_t PlayerToHear = 0x638;
            static constexpr std::uintptr_t bAutoFindPeer = 0x648;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"StreamerToHear", 0x628, "StrProperty"},
            {"PlayerToHear", 0x638, "StrProperty"},
            {"bAutoFindPeer", 0x648, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "IsListeningToPlayer",
            "ListenTo",
            "Reset",
            "StreamerListenTo",
        }};
    };

    struct PixelStreaming2Blueprints
    {
        static constexpr std::string_view Name = "PixelStreaming2Blueprints";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 20> FunctionNames{{
            "AddJsonStringValue",
            "ForceKeyFrame",
            "FreezeFrame",
            "GetConnectedPlayers",
            "GetDefaultStreamerID",
            "GetDelegates",
            "GetJsonStringValue",
            "KickPlayer",
            "SendFile",
            "SendFileAsByteArray",
            "SendResponse",
            "StreamerForceKeyFrame",
            "StreamerFreezeStream",
            "StreamerGetConnectedPlayers",
            "StreamerKickPlayer",
            "StreamerSendFile",
            "StreamerSendFileAsByteArray",
            "StreamerSendResponse",
            "StreamerUnfreezeStream",
            "UnfreezeFrame",
        }};
    };

    struct PixelStreaming2Delegates
    {
        static constexpr std::string_view Name = "PixelStreaming2Delegates";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnConnectedToSignallingServer = 0x28;
            static constexpr std::uintptr_t OnDisconnectedFromSignallingServer = 0x78;
            static constexpr std::uintptr_t OnNewConnection = 0xC8;
            static constexpr std::uintptr_t OnClosedConnection = 0x118;
            static constexpr std::uintptr_t OnAllConnectionsClosed = 0x168;
            static constexpr std::uintptr_t OnDataTrackOpen = 0x1B8;
            static constexpr std::uintptr_t OnDataTrackClosed = 0x208;
            static constexpr std::uintptr_t OnStatChanged = 0x358;
            static constexpr std::uintptr_t OnFallbackToSoftwareEncoding = 0x3A8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OnConnectedToSignallingServer", 0x28, "MulticastInlineDelegateProperty"},
            {"OnDisconnectedFromSignallingServer", 0x78, "MulticastInlineDelegateProperty"},
            {"OnNewConnection", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnClosedConnection", 0x118, "MulticastInlineDelegateProperty"},
            {"OnAllConnectionsClosed", 0x168, "MulticastInlineDelegateProperty"},
            {"OnDataTrackOpen", 0x1B8, "MulticastInlineDelegateProperty"},
            {"OnDataTrackClosed", 0x208, "MulticastInlineDelegateProperty"},
            {"OnStatChanged", 0x358, "MulticastInlineDelegateProperty"},
            {"OnFallbackToSoftwareEncoding", 0x3A8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct PixelStreaming2Input
    {
        static constexpr std::string_view Name = "PixelStreaming2Input";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnInputEvent = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnInputEvent", 0xC0, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "AddJsonStringValue",
            "GetJsonStringValue",
            "SendPixelStreaming2Response",
        }};
    };

    struct PixelStreaming2MediaIOCapture
    {
        static constexpr std::string_view Name = "PixelStreaming2MediaIOCapture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MediaCapture";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStateChanged = 0x28;
            static constexpr std::uintptr_t MediaOutput = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnStateChanged", 0x28, "MulticastInlineDelegateProperty"},
            {"MediaOutput", 0x60, "ObjectProperty"},
        }};
    };

    struct PixelStreaming2MediaIOOutput
    {
        static constexpr std::string_view Name = "PixelStreaming2MediaIOOutput";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MediaOutput";
        struct Offsets
        {
            static constexpr std::uintptr_t MediaCapture = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MediaCapture", 0x30, "ObjectProperty"},
        }};
    };

    struct PixelStreaming2MediaTexture
    {
        static constexpr std::string_view Name = "PixelStreaming2MediaTexture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Texture2DDynamic";
        struct Offsets
        {
            static constexpr std::uintptr_t Format = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Format", 0x128, "ByteProperty"},
        }};
    };

    struct PixelStreaming2StreamerComponent
    {
        static constexpr std::string_view Name = "PixelStreaming2StreamerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t StreamerId = 0x108;
            static constexpr std::uintptr_t SignallingServerURL = 0x118;
            static constexpr std::uintptr_t UsePixelStreamingURL = 0x128;
            static constexpr std::uintptr_t StreamFPSOverride = 0x12C;
            static constexpr std::uintptr_t CoupleFramerate = 0x130;
            static constexpr std::uintptr_t VideoProducer = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"StreamerId", 0x108, "StrProperty"},
            {"SignallingServerURL", 0x118, "StrProperty"},
            {"UsePixelStreamingURL", 0x128, "BoolProperty"},
            {"StreamFPSOverride", 0x12C, "IntProperty"},
            {"CoupleFramerate", 0x130, "BoolProperty"},
            {"VideoProducer", 0x138, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "ForceKeyFrame",
            "FreezeStream",
            "GetId",
            "IsStreaming",
            "SendAllPlayersMessage",
            "SendPlayerMessage",
            "StartStreaming",
            "StopStreaming",
            "UnfreezeStream",
        }};
    };

    struct PixelStreaming2VideoComponent
    {
        static constexpr std::string_view Name = "PixelStreaming2VideoComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t StreamerToWatch = 0x248;
            static constexpr std::uintptr_t PlayerToWatch = 0x258;
            static constexpr std::uintptr_t bAutoFindPeer = 0x268;
            static constexpr std::uintptr_t VideoConsumer = 0x270;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"StreamerToWatch", 0x248, "StrProperty"},
            {"PlayerToWatch", 0x258, "StrProperty"},
            {"bAutoFindPeer", 0x268, "BoolProperty"},
            {"VideoConsumer", 0x270, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "IsWatchingPlayer",
            "Reset",
            "StreamerWatch",
            "Watch",
        }};
    };

    struct PixelStreaming2VideoProducerBackBuffer
    {
        static constexpr std::string_view Name = "PixelStreaming2VideoProducerBackBuffer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PixelStreaming2VideoProducerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PixelStreaming2VideoProducerBase
    {
        static constexpr std::string_view Name = "PixelStreaming2VideoProducerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PixelStreaming2VideoProducerMediaCapture
    {
        static constexpr std::string_view Name = "PixelStreaming2VideoProducerMediaCapture";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PixelStreaming2VideoProducerBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PixelStreaming2VideoProducerRenderTarget
    {
        static constexpr std::string_view Name = "PixelStreaming2VideoProducerRenderTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PixelStreaming2VideoProducerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Target = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Target", 0x38, "ObjectProperty"},
        }};
    };

}
