#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::OnlineSubsystemUtils
{
    struct AchievementBlueprintLibrary
    {
        static constexpr std::string_view Name = "AchievementBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetCachedAchievementDescription",
            "GetCachedAchievementProgress",
        }};
    };

    struct AchievementQueryCallbackProxy
    {
        static constexpr std::string_view Name = "AchievementQueryCallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBlueprintCallProxyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x30;
            static constexpr std::uintptr_t OnFailure = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x40, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "CacheAchievementDescriptions",
            "CacheAchievements",
        }};
    };

    struct AchievementWriteCallbackProxy
    {
        static constexpr std::string_view Name = "AchievementWriteCallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBlueprintCallProxyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnWriteSuccess = 0x30;
            static constexpr std::uintptr_t OnWriteFailure = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnWriteSuccess", 0x30, "MulticastInlineDelegateProperty"},
            {"OnWriteFailure", 0x40, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "WriteProgress",
        }};
    };

    struct BlueprintSessionResult
    {
        static constexpr std::string_view Name = "BlueprintSessionResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ConnectionCallbackProxy
    {
        static constexpr std::string_view Name = "ConnectionCallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBlueprintCallProxyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x30;
            static constexpr std::uintptr_t OnFailure = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x40, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ConnectToService",
        }};
    };

    struct CreateSessionCallbackProxy
    {
        static constexpr std::string_view Name = "CreateSessionCallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBlueprintCallProxyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x30;
            static constexpr std::uintptr_t OnFailure = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x40, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "CreateSession",
        }};
    };

    struct DestroySessionCallbackProxy
    {
        static constexpr std::string_view Name = "DestroySessionCallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBlueprintCallProxyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x30;
            static constexpr std::uintptr_t OnFailure = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x40, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "DestroySession",
        }};
    };

    struct EndMatchCallbackProxy
    {
        static constexpr std::string_view Name = "EndMatchCallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBlueprintCallProxyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x30;
            static constexpr std::uintptr_t OnFailure = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x40, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "EndMatch",
        }};
    };

    struct EndTurnCallbackProxy
    {
        static constexpr std::string_view Name = "EndTurnCallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBlueprintCallProxyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x30;
            static constexpr std::uintptr_t OnFailure = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x40, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "EndTurn",
        }};
    };

    struct FindSessionsCallbackProxy
    {
        static constexpr std::string_view Name = "FindSessionsCallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBlueprintCallProxyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x30;
            static constexpr std::uintptr_t OnFailure = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x40, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 5> FunctionNames{{
            "FindSessions",
            "GetCurrentPlayers",
            "GetMaxPlayers",
            "GetPingInMs",
            "GetServerName",
        }};
    };

    struct FindTurnBasedMatchCallbackProxy
    {
        static constexpr std::string_view Name = "FindTurnBasedMatchCallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBlueprintCallProxyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x30;
            static constexpr std::uintptr_t OnFailure = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x40, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "FindTurnBasedMatch",
        }};
    };

    struct InAppPurchaseCallbackProxy2
    {
        static constexpr std::string_view Name = "InAppPurchaseCallbackProxy2";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x28;
            static constexpr std::uintptr_t OnFailure = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x28, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x38, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "CreateProxyObjectForInAppPurchase",
            "CreateProxyObjectForInAppPurchaseQueryOwned",
            "CreateProxyObjectForInAppPurchaseUnprocessedPurchases",
        }};
    };

    struct InAppPurchaseCheckoutCallbackProxy
    {
        static constexpr std::string_view Name = "InAppPurchaseCheckoutCallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x28;
            static constexpr std::uintptr_t OnFailure = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x28, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x38, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "CreateProxyObjectForInAppPurchaseCheckout",
        }};
    };

    struct InAppPurchaseFinalizeProxy
    {
        static constexpr std::string_view Name = "InAppPurchaseFinalizeProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "CreateProxyObjectForInAppPurchaseFinalize",
        }};
    };

    struct InAppPurchaseProductInfo2
    {
        static constexpr std::string_view Name = "InAppPurchaseProductInfo2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Identifier = 0x0;
            static constexpr std::uintptr_t TransactionIdentifier = 0x10;
            static constexpr std::uintptr_t DisplayName = 0x20;
            static constexpr std::uintptr_t DisplayDescription = 0x30;
            static constexpr std::uintptr_t DisplayPrice = 0x40;
            static constexpr std::uintptr_t RawPrice = 0x50;
            static constexpr std::uintptr_t CurrencyCode = 0x58;
            static constexpr std::uintptr_t CurrencySymbol = 0x68;
            static constexpr std::uintptr_t DecimalSeparator = 0x78;
            static constexpr std::uintptr_t GroupingSeparator = 0x88;
            static constexpr std::uintptr_t ReceiptData = 0x98;
            static constexpr std::uintptr_t DynamicFields = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Identifier", 0x0, "StrProperty"},
            {"TransactionIdentifier", 0x10, "StrProperty"},
            {"DisplayName", 0x20, "StrProperty"},
            {"DisplayDescription", 0x30, "StrProperty"},
            {"DisplayPrice", 0x40, "StrProperty"},
            {"RawPrice", 0x50, "FloatProperty"},
            {"CurrencyCode", 0x58, "StrProperty"},
            {"CurrencySymbol", 0x68, "StrProperty"},
            {"DecimalSeparator", 0x78, "StrProperty"},
            {"GroupingSeparator", 0x88, "StrProperty"},
            {"ReceiptData", 0x98, "StrProperty"},
            {"DynamicFields", 0xA8, "MapProperty"},
        }};
    };

    struct InAppPurchaseProductRequest2
    {
        static constexpr std::string_view Name = "InAppPurchaseProductRequest2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProductIdentifier = 0x0;
            static constexpr std::uintptr_t bIsConsumable = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProductIdentifier", 0x0, "StrProperty"},
            {"bIsConsumable", 0x10, "BoolProperty"},
        }};
    };

    struct InAppPurchaseQueryCallbackProxy2
    {
        static constexpr std::string_view Name = "InAppPurchaseQueryCallbackProxy2";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x28;
            static constexpr std::uintptr_t OnFailure = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x28, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x38, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "CreateProxyObjectForInAppPurchaseQuery",
        }};
    };

    struct InAppPurchaseReceiptInfo2
    {
        static constexpr std::string_view Name = "InAppPurchaseReceiptInfo2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemName = 0x0;
            static constexpr std::uintptr_t ItemID = 0x10;
            static constexpr std::uintptr_t ValidationInfo = 0x20;
            static constexpr std::uintptr_t TransactionIdentifier = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ItemName", 0x0, "StrProperty"},
            {"ItemID", 0x10, "StrProperty"},
            {"ValidationInfo", 0x20, "StrProperty"},
            {"TransactionIdentifier", 0x30, "StrProperty"},
        }};
    };

    struct InAppPurchaseReceiptsCallbackProxy
    {
        static constexpr std::string_view Name = "InAppPurchaseReceiptsCallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x28;
            static constexpr std::uintptr_t OnFailure = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x28, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x38, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "CreateProxyObjectForInAppPurchaseGetKnownReceipts",
            "CreateProxyObjectForInAppPurchaseQueryOwnedProducts",
            "CreateProxyObjectForInAppPurchaseRestoreOwnedProducts",
        }};
    };

    struct InAppPurchaseRestoreCallbackProxy2
    {
        static constexpr std::string_view Name = "InAppPurchaseRestoreCallbackProxy2";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x28;
            static constexpr std::uintptr_t OnFailure = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x28, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x38, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "CreateProxyObjectForInAppPurchaseRestore",
        }};
    };

    struct InAppPurchaseRestoreInfo2
    {
        static constexpr std::string_view Name = "InAppPurchaseRestoreInfo2";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemName = 0x0;
            static constexpr std::uintptr_t ItemID = 0x10;
            static constexpr std::uintptr_t ValidationInfo = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ItemName", 0x0, "StrProperty"},
            {"ItemID", 0x10, "StrProperty"},
            {"ValidationInfo", 0x20, "StrProperty"},
        }};
    };

    struct IpConnection
    {
        static constexpr std::string_view Name = "IpConnection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetConnection";
        struct Offsets
        {
            static constexpr std::uintptr_t SocketErrorDisconnectDelay = 0x1A3C;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SocketErrorDisconnectDelay", 0x1A3C, "FloatProperty"},
        }};
    };

    struct IpNetDriver
    {
        static constexpr std::string_view Name = "IpNetDriver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetDriver";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowPlayerPortUnreach = 0x618;
            static constexpr std::uintptr_t LogPortUnreach = 0x618;
            static constexpr std::uintptr_t bExitOnBindFailure = 0x618;
            static constexpr std::uintptr_t MaxPortCountToTry = 0x61C;
            static constexpr std::uintptr_t ServerDesiredSocketReceiveBufferBytes = 0x624;
            static constexpr std::uintptr_t ServerDesiredSocketSendBufferBytes = 0x628;
            static constexpr std::uintptr_t ClientDesiredSocketReceiveBufferBytes = 0x62C;
            static constexpr std::uintptr_t ClientDesiredSocketSendBufferBytes = 0x630;
            static constexpr std::uintptr_t MaxSecondsInReceive = 0x638;
            static constexpr std::uintptr_t NbPacketsBetweenReceiveTimeTest = 0x640;
            static constexpr std::uintptr_t ResolutionConnectionTimeout = 0x644;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"AllowPlayerPortUnreach", 0x618, "BoolProperty"},
            {"LogPortUnreach", 0x618, "BoolProperty"},
            {"bExitOnBindFailure", 0x618, "BoolProperty"},
            {"MaxPortCountToTry", 0x61C, "UInt32Property"},
            {"ServerDesiredSocketReceiveBufferBytes", 0x624, "UInt32Property"},
            {"ServerDesiredSocketSendBufferBytes", 0x628, "UInt32Property"},
            {"ClientDesiredSocketReceiveBufferBytes", 0x62C, "UInt32Property"},
            {"ClientDesiredSocketSendBufferBytes", 0x630, "UInt32Property"},
            {"MaxSecondsInReceive", 0x638, "DoubleProperty"},
            {"NbPacketsBetweenReceiveTimeTest", 0x640, "IntProperty"},
            {"ResolutionConnectionTimeout", 0x644, "FloatProperty"},
        }};
    };

    struct JoinSessionCallbackProxy
    {
        static constexpr std::string_view Name = "JoinSessionCallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBlueprintCallProxyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x30;
            static constexpr std::uintptr_t OnFailure = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x40, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "JoinSession",
        }};
    };

    struct LeaderboardBlueprintLibrary
    {
        static constexpr std::string_view Name = "LeaderboardBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "WriteLeaderboardInteger",
        }};
    };

    struct LeaderboardFlushCallbackProxy
    {
        static constexpr std::string_view Name = "LeaderboardFlushCallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x28;
            static constexpr std::uintptr_t OnFailure = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x28, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x38, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "CreateProxyObjectForFlush",
        }};
    };

    struct LeaderboardQueryCallbackProxy
    {
        static constexpr std::string_view Name = "LeaderboardQueryCallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x28;
            static constexpr std::uintptr_t OnFailure = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x28, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x38, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "CreateProxyObjectForIntQuery",
        }};
    };

    struct LogoutCallbackProxy
    {
        static constexpr std::string_view Name = "LogoutCallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x30;
            static constexpr std::uintptr_t OnFailure = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x40, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "Logout",
        }};
    };

    struct OnlineAccountStoredCredentials
    {
        static constexpr std::string_view Name = "OnlineAccountStoredCredentials";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ID = 0x0;
            static constexpr std::uintptr_t Token = 0x10;
            static constexpr std::uintptr_t Type = 0x20;
            static constexpr std::uintptr_t TokenBytes = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ID", 0x0, "StrProperty"},
            {"Token", 0x10, "StrProperty"},
            {"Type", 0x20, "StrProperty"},
            {"TokenBytes", 0x30, "ArrayProperty"},
        }};
    };

    struct OnlineBeacon
    {
        static constexpr std::string_view Name = "OnlineBeacon";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t BeaconConnectionInitialTimeout = 0x280;
            static constexpr std::uintptr_t BeaconConnectionTimeout = 0x284;
            static constexpr std::uintptr_t NetDriver = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BeaconConnectionInitialTimeout", 0x280, "FloatProperty"},
            {"BeaconConnectionTimeout", 0x284, "FloatProperty"},
            {"NetDriver", 0x288, "ObjectProperty"},
        }};
    };

    struct OnlineBeaconClient
    {
        static constexpr std::string_view Name = "OnlineBeaconClient";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBeacon";
        struct Offsets
        {
            static constexpr std::uintptr_t BeaconOwner = 0x2B8;
            static constexpr std::uintptr_t BeaconConnection = 0x2C0;
            static constexpr std::uintptr_t ConnectionState = 0x2C8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BeaconOwner", 0x2B8, "ObjectProperty"},
            {"BeaconConnection", 0x2C0, "ObjectProperty"},
            {"ConnectionState", 0x2C8, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ClientOnConnected",
        }};
    };

    struct OnlineBeaconHost
    {
        static constexpr std::string_view Name = "OnlineBeaconHost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBeacon";
        struct Offsets
        {
            static constexpr std::uintptr_t ListenPort = 0x2B8;
            static constexpr std::uintptr_t bReuseAddressAndPort = 0x2BC;
            static constexpr std::uintptr_t bAuthRequired = 0x2BD;
            static constexpr std::uintptr_t MaxAuthTokenSize = 0x2C0;
            static constexpr std::uintptr_t ClientActors = 0x2D8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ListenPort", 0x2B8, "IntProperty"},
            {"bReuseAddressAndPort", 0x2BC, "BoolProperty"},
            {"bAuthRequired", 0x2BD, "BoolProperty"},
            {"MaxAuthTokenSize", 0x2C0, "UInt32Property"},
            {"ClientActors", 0x2D8, "ArrayProperty"},
        }};
    };

    struct OnlineBeaconHostObject
    {
        static constexpr std::string_view Name = "OnlineBeaconHostObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t BeaconTypeName = 0x278;
            static constexpr std::uintptr_t ClientBeaconActorClass = 0x288;
            static constexpr std::uintptr_t ClientActors = 0x290;
            static constexpr std::uintptr_t ClientBeaconActorChannelName = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BeaconTypeName", 0x278, "StrProperty"},
            {"ClientBeaconActorClass", 0x288, "ClassProperty"},
            {"ClientActors", 0x290, "ArrayProperty"},
            {"ClientBeaconActorChannelName", 0x2A0, "NameProperty"},
        }};
    };

    struct OnlineBeaconUnitTestClient
    {
        static constexpr std::string_view Name = "OnlineBeaconUnitTestClient";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBeaconClient";
        struct Offsets
        {
            static constexpr std::uintptr_t BeaconOwner = 0x2B8;
            static constexpr std::uintptr_t BeaconConnection = 0x2C0;
            static constexpr std::uintptr_t ConnectionState = 0x2C8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BeaconOwner", 0x2B8, "ObjectProperty"},
            {"BeaconConnection", 0x2C0, "ObjectProperty"},
            {"ConnectionState", 0x2C8, "EnumProperty"},
        }};
    };

    struct OnlineBeaconUnitTestHost
    {
        static constexpr std::string_view Name = "OnlineBeaconUnitTestHost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBeaconHost";
        struct Offsets
        {
            static constexpr std::uintptr_t ListenPort = 0x2B8;
            static constexpr std::uintptr_t bReuseAddressAndPort = 0x2BC;
            static constexpr std::uintptr_t bAuthRequired = 0x2BD;
            static constexpr std::uintptr_t MaxAuthTokenSize = 0x2C0;
            static constexpr std::uintptr_t ClientActors = 0x2D8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ListenPort", 0x2B8, "IntProperty"},
            {"bReuseAddressAndPort", 0x2BC, "BoolProperty"},
            {"bAuthRequired", 0x2BD, "BoolProperty"},
            {"MaxAuthTokenSize", 0x2C0, "UInt32Property"},
            {"ClientActors", 0x2D8, "ArrayProperty"},
        }};
    };

    struct OnlineBeaconUnitTestHostObject
    {
        static constexpr std::string_view Name = "OnlineBeaconUnitTestHostObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBeaconHostObject";
        struct Offsets
        {
            static constexpr std::uintptr_t BeaconTypeName = 0x278;
            static constexpr std::uintptr_t ClientBeaconActorClass = 0x288;
            static constexpr std::uintptr_t ClientActors = 0x290;
            static constexpr std::uintptr_t ClientBeaconActorChannelName = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BeaconTypeName", 0x278, "StrProperty"},
            {"ClientBeaconActorClass", 0x288, "ClassProperty"},
            {"ClientActors", 0x290, "ArrayProperty"},
            {"ClientBeaconActorChannelName", 0x2A0, "NameProperty"},
        }};
    };

    struct OnlineBeaconUnitTestNetConnection
    {
        static constexpr std::string_view Name = "OnlineBeaconUnitTestNetConnection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IpConnection";
        struct Offsets
        {
            static constexpr std::uintptr_t SocketErrorDisconnectDelay = 0x1A3C;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SocketErrorDisconnectDelay", 0x1A3C, "FloatProperty"},
        }};
    };

    struct OnlineBeaconUnitTestNetDriver
    {
        static constexpr std::string_view Name = "OnlineBeaconUnitTestNetDriver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "IpNetDriver";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowPlayerPortUnreach = 0x618;
            static constexpr std::uintptr_t LogPortUnreach = 0x618;
            static constexpr std::uintptr_t bExitOnBindFailure = 0x618;
            static constexpr std::uintptr_t MaxPortCountToTry = 0x61C;
            static constexpr std::uintptr_t ServerDesiredSocketReceiveBufferBytes = 0x624;
            static constexpr std::uintptr_t ServerDesiredSocketSendBufferBytes = 0x628;
            static constexpr std::uintptr_t ClientDesiredSocketReceiveBufferBytes = 0x62C;
            static constexpr std::uintptr_t ClientDesiredSocketSendBufferBytes = 0x630;
            static constexpr std::uintptr_t MaxSecondsInReceive = 0x638;
            static constexpr std::uintptr_t NbPacketsBetweenReceiveTimeTest = 0x640;
            static constexpr std::uintptr_t ResolutionConnectionTimeout = 0x644;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"AllowPlayerPortUnreach", 0x618, "BoolProperty"},
            {"LogPortUnreach", 0x618, "BoolProperty"},
            {"bExitOnBindFailure", 0x618, "BoolProperty"},
            {"MaxPortCountToTry", 0x61C, "UInt32Property"},
            {"ServerDesiredSocketReceiveBufferBytes", 0x624, "UInt32Property"},
            {"ServerDesiredSocketSendBufferBytes", 0x628, "UInt32Property"},
            {"ClientDesiredSocketReceiveBufferBytes", 0x62C, "UInt32Property"},
            {"ClientDesiredSocketSendBufferBytes", 0x630, "UInt32Property"},
            {"MaxSecondsInReceive", 0x638, "DoubleProperty"},
            {"NbPacketsBetweenReceiveTimeTest", 0x640, "IntProperty"},
            {"ResolutionConnectionTimeout", 0x644, "FloatProperty"},
        }};
    };

    struct OnlineEngineInterfaceImpl
    {
        static constexpr std::string_view Name = "OnlineEngineInterfaceImpl";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineEngineInterface";
        struct Offsets
        {
            static constexpr std::uintptr_t MappedUniqueNetIdTypes = 0x28;
            static constexpr std::uintptr_t CompatibleUniqueNetIdTypes = 0x38;
            static constexpr std::uintptr_t VoiceSubsystemNameOverride = 0x48;
            static constexpr std::uintptr_t bOnlineServicesCompatibilityEnabled = 0x88;
            static constexpr std::uintptr_t OnlineServicesCompatibilityInterface = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MappedUniqueNetIdTypes", 0x28, "MapProperty"},
            {"CompatibleUniqueNetIdTypes", 0x38, "ArrayProperty"},
            {"VoiceSubsystemNameOverride", 0x48, "NameProperty"},
            {"bOnlineServicesCompatibilityEnabled", 0x88, "BoolProperty"},
            {"OnlineServicesCompatibilityInterface", 0x90, "ObjectProperty"},
        }};
    };

    struct OnlinePIEConfig
    {
        static constexpr std::string_view Name = "OnlinePIEConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LoginTypesAllowingDuplicates = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LoginTypesAllowingDuplicates", 0x28, "ArrayProperty"},
        }};
    };

    struct OnlinePIESettings
    {
        static constexpr std::string_view Name = "OnlinePIESettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bOnlinePIEEnabled = 0x30;
            static constexpr std::uintptr_t Logins = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bOnlinePIEEnabled", 0x30, "BoolProperty"},
            {"Logins", 0x38, "ArrayProperty"},
        }};
    };

    struct OnlineProxyStoreOffer
    {
        static constexpr std::string_view Name = "OnlineProxyStoreOffer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t OfferId = 0x0;
            static constexpr std::uintptr_t Title = 0x10;
            static constexpr std::uintptr_t Description = 0x20;
            static constexpr std::uintptr_t LongDescription = 0x30;
            static constexpr std::uintptr_t RegularPriceText = 0x40;
            static constexpr std::uintptr_t RegularPrice = 0x50;
            static constexpr std::uintptr_t PriceText = 0x58;
            static constexpr std::uintptr_t NumericPrice = 0x68;
            static constexpr std::uintptr_t CurrencyCode = 0x70;
            static constexpr std::uintptr_t ReleaseDate = 0x80;
            static constexpr std::uintptr_t ExpirationDate = 0x88;
            static constexpr std::uintptr_t DiscountType = 0x90;
            static constexpr std::uintptr_t DynamicFields = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"OfferId", 0x0, "StrProperty"},
            {"Title", 0x10, "TextProperty"},
            {"Description", 0x20, "TextProperty"},
            {"LongDescription", 0x30, "TextProperty"},
            {"RegularPriceText", 0x40, "TextProperty"},
            {"RegularPrice", 0x50, "IntProperty"},
            {"PriceText", 0x58, "TextProperty"},
            {"NumericPrice", 0x68, "IntProperty"},
            {"CurrencyCode", 0x70, "StrProperty"},
            {"ReleaseDate", 0x80, "StructProperty"},
            {"ExpirationDate", 0x88, "StructProperty"},
            {"DiscountType", 0x90, "EnumProperty"},
            {"DynamicFields", 0x98, "MapProperty"},
        }};
    };

    struct OnlineServicesEngineInterfaceImpl
    {
        static constexpr std::string_view Name = "OnlineServicesEngineInterfaceImpl";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineEngineInterface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OnlineSessionClient
    {
        static constexpr std::string_view Name = "OnlineSessionClient";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineSession";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsFromInvite = 0x158;
            static constexpr std::uintptr_t bHandlingDisconnect = 0x159;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsFromInvite", 0x158, "BoolProperty"},
            {"bHandlingDisconnect", 0x159, "BoolProperty"},
        }};
    };

    struct PartyBeaconClient
    {
        static constexpr std::string_view Name = "PartyBeaconClient";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBeaconClient";
        struct Offsets
        {
            static constexpr std::uintptr_t DestSessionId = 0x350;
            static constexpr std::uintptr_t PendingReservation = 0x360;
            static constexpr std::uintptr_t RequestType = 0x3B8;
            static constexpr std::uintptr_t bPendingReservationSent = 0x3B9;
            static constexpr std::uintptr_t bCancelReservation = 0x3BA;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DestSessionId", 0x350, "StrProperty"},
            {"PendingReservation", 0x360, "StructProperty"},
            {"RequestType", 0x3B8, "EnumProperty"},
            {"bPendingReservationSent", 0x3B9, "BoolProperty"},
            {"bCancelReservation", 0x3BA, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "ClientCancelReservationResponse",
            "ClientReservationResponse",
            "ClientSendReservationFull",
            "ClientSendReservationUpdates",
            "ServerAddOrUpdateReservationRequest",
            "ServerCancelReservationRequest",
            "ServerRemoveMemberFromReservationRequest",
            "ServerReservationRequest",
            "ServerUpdateReservationRequest",
        }};
    };

    struct PartyBeaconCrossplayPlatformMapping
    {
        static constexpr std::string_view Name = "PartyBeaconCrossplayPlatformMapping";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PlatformName = 0x0;
            static constexpr std::uintptr_t PlatformType = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlatformName", 0x0, "StrProperty"},
            {"PlatformType", 0x10, "StrProperty"},
        }};
    };

    struct PartyBeaconHost
    {
        static constexpr std::string_view Name = "PartyBeaconHost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBeaconHostObject";
        struct Offsets
        {
            static constexpr std::uintptr_t State = 0x2A8;
            static constexpr std::uintptr_t bLogoutOnSessionTimeout = 0x310;
            static constexpr std::uintptr_t bIsValidationStrRequired = 0x311;
            static constexpr std::uintptr_t SessionTimeoutSecs = 0x314;
            static constexpr std::uintptr_t TravelSessionTimeoutSecs = 0x318;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"State", 0x2A8, "ObjectProperty"},
            {"bLogoutOnSessionTimeout", 0x310, "BoolProperty"},
            {"bIsValidationStrRequired", 0x311, "BoolProperty"},
            {"SessionTimeoutSecs", 0x314, "FloatProperty"},
            {"TravelSessionTimeoutSecs", 0x318, "FloatProperty"},
        }};
    };

    struct PartyBeaconState
    {
        static constexpr std::string_view Name = "PartyBeaconState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SessionName = 0x28;
            static constexpr std::uintptr_t NumConsumedReservations = 0x2C;
            static constexpr std::uintptr_t MaxReservations = 0x30;
            static constexpr std::uintptr_t NumTeams = 0x34;
            static constexpr std::uintptr_t NumPlayersPerTeam = 0x38;
            static constexpr std::uintptr_t TeamAssignmentMethod = 0x3C;
            static constexpr std::uintptr_t ReservedHostTeamNum = 0x40;
            static constexpr std::uintptr_t ForceTeamNum = 0x44;
            static constexpr std::uintptr_t bRestrictCrossConsole = 0x48;
            static constexpr std::uintptr_t PlatformCrossplayRestrictions = 0x50;
            static constexpr std::uintptr_t PlatformTypeMapping = 0x60;
            static constexpr std::uintptr_t bEnableRemovalRequests = 0x70;
            static constexpr std::uintptr_t bRespectCompetitiveIntegrity = 0x71;
            static constexpr std::uintptr_t Reservations = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"SessionName", 0x28, "NameProperty"},
            {"NumConsumedReservations", 0x2C, "IntProperty"},
            {"MaxReservations", 0x30, "IntProperty"},
            {"NumTeams", 0x34, "IntProperty"},
            {"NumPlayersPerTeam", 0x38, "IntProperty"},
            {"TeamAssignmentMethod", 0x3C, "NameProperty"},
            {"ReservedHostTeamNum", 0x40, "IntProperty"},
            {"ForceTeamNum", 0x44, "IntProperty"},
            {"bRestrictCrossConsole", 0x48, "BoolProperty"},
            {"PlatformCrossplayRestrictions", 0x50, "ArrayProperty"},
            {"PlatformTypeMapping", 0x60, "ArrayProperty"},
            {"bEnableRemovalRequests", 0x70, "BoolProperty"},
            {"bRespectCompetitiveIntegrity", 0x71, "BoolProperty"},
            {"Reservations", 0x78, "ArrayProperty"},
        }};
    };

    struct PartyReservation
    {
        static constexpr std::string_view Name = "PartyReservation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TeamNum = 0x0;
            static constexpr std::uintptr_t PartyLeader = 0x8;
            static constexpr std::uintptr_t PartyMembers = 0x38;
            static constexpr std::uintptr_t RemovedPartyMembers = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TeamNum", 0x0, "IntProperty"},
            {"PartyLeader", 0x8, "StructProperty"},
            {"PartyMembers", 0x38, "ArrayProperty"},
            {"RemovedPartyMembers", 0x48, "ArrayProperty"},
        }};
    };

    struct PlayerReservation
    {
        static constexpr std::string_view Name = "PlayerReservation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UniqueID = 0x0;
            static constexpr std::uintptr_t ValidationStr = 0x30;
            static constexpr std::uintptr_t Platform = 0x40;
            static constexpr std::uintptr_t bAllowCrossplay = 0x50;
            static constexpr std::uintptr_t ElapsedTime = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"UniqueID", 0x0, "StructProperty"},
            {"ValidationStr", 0x30, "StrProperty"},
            {"Platform", 0x40, "StrProperty"},
            {"bAllowCrossplay", 0x50, "BoolProperty"},
            {"ElapsedTime", 0x54, "FloatProperty"},
        }};
    };

    struct QuitMatchCallbackProxy
    {
        static constexpr std::string_view Name = "QuitMatchCallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBlueprintCallProxyBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x30;
            static constexpr std::uintptr_t OnFailure = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x40, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "QuitMatch",
        }};
    };

    struct ShowLoginUICallbackProxy
    {
        static constexpr std::string_view Name = "ShowLoginUICallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnSuccess = 0x30;
            static constexpr std::uintptr_t OnFailure = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnSuccess", 0x30, "MulticastInlineDelegateProperty"},
            {"OnFailure", 0x40, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "ShowExternalLoginUI",
        }};
    };

    struct SpectatorBeaconClient
    {
        static constexpr std::string_view Name = "SpectatorBeaconClient";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBeaconClient";
        struct Offsets
        {
            static constexpr std::uintptr_t DestSessionId = 0x350;
            static constexpr std::uintptr_t PendingReservation = 0x360;
            static constexpr std::uintptr_t RequestType = 0x3E8;
            static constexpr std::uintptr_t bPendingReservationSent = 0x3E9;
            static constexpr std::uintptr_t bCancelReservation = 0x3EA;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DestSessionId", 0x350, "StrProperty"},
            {"PendingReservation", 0x360, "StructProperty"},
            {"RequestType", 0x3E8, "EnumProperty"},
            {"bPendingReservationSent", 0x3E9, "BoolProperty"},
            {"bCancelReservation", 0x3EA, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "ClientCancelReservationResponse",
            "ClientReservationResponse",
            "ClientSendReservationFull",
            "ClientSendReservationUpdates",
            "ServerCancelReservationRequest",
            "ServerReservationRequest",
        }};
    };

    struct SpectatorBeaconHost
    {
        static constexpr std::string_view Name = "SpectatorBeaconHost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBeaconHostObject";
        struct Offsets
        {
            static constexpr std::uintptr_t State = 0x2A8;
            static constexpr std::uintptr_t bLogoutOnSessionTimeout = 0x310;
            static constexpr std::uintptr_t bIsValidationStrRequired = 0x311;
            static constexpr std::uintptr_t SessionTimeoutSecs = 0x314;
            static constexpr std::uintptr_t TravelSessionTimeoutSecs = 0x318;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"State", 0x2A8, "ObjectProperty"},
            {"bLogoutOnSessionTimeout", 0x310, "BoolProperty"},
            {"bIsValidationStrRequired", 0x311, "BoolProperty"},
            {"SessionTimeoutSecs", 0x314, "FloatProperty"},
            {"TravelSessionTimeoutSecs", 0x318, "FloatProperty"},
        }};
    };

    struct SpectatorBeaconState
    {
        static constexpr std::string_view Name = "SpectatorBeaconState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SessionName = 0x28;
            static constexpr std::uintptr_t NumConsumedReservations = 0x2C;
            static constexpr std::uintptr_t MaxReservations = 0x30;
            static constexpr std::uintptr_t bRestrictCrossConsole = 0x34;
            static constexpr std::uintptr_t Reservations = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SessionName", 0x28, "NameProperty"},
            {"NumConsumedReservations", 0x2C, "IntProperty"},
            {"MaxReservations", 0x30, "IntProperty"},
            {"bRestrictCrossConsole", 0x34, "BoolProperty"},
            {"Reservations", 0x38, "ArrayProperty"},
        }};
    };

    struct SpectatorReservation
    {
        static constexpr std::string_view Name = "SpectatorReservation";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SpectatorId = 0x0;
            static constexpr std::uintptr_t Spectator = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpectatorId", 0x0, "StructProperty"},
            {"Spectator", 0x30, "StructProperty"},
        }};
    };

    struct TestBeaconClient
    {
        static constexpr std::string_view Name = "TestBeaconClient";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBeaconClient";
        struct Offsets
        {
            static constexpr std::uintptr_t BeaconOwner = 0x2B8;
            static constexpr std::uintptr_t BeaconConnection = 0x2C0;
            static constexpr std::uintptr_t ConnectionState = 0x2C8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BeaconOwner", 0x2B8, "ObjectProperty"},
            {"BeaconConnection", 0x2C0, "ObjectProperty"},
            {"ConnectionState", 0x2C8, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "ClientPing",
            "ServerPong",
        }};
    };

    struct TestBeaconHost
    {
        static constexpr std::string_view Name = "TestBeaconHost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "OnlineBeaconHostObject";
        struct Offsets
        {
            static constexpr std::uintptr_t BeaconTypeName = 0x278;
            static constexpr std::uintptr_t ClientBeaconActorClass = 0x288;
            static constexpr std::uintptr_t ClientActors = 0x290;
            static constexpr std::uintptr_t ClientBeaconActorChannelName = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BeaconTypeName", 0x278, "StrProperty"},
            {"ClientBeaconActorClass", 0x288, "ClassProperty"},
            {"ClientActors", 0x290, "ArrayProperty"},
            {"ClientBeaconActorChannelName", 0x2A0, "NameProperty"},
        }};
    };

    struct TurnBasedBlueprintLibrary
    {
        static constexpr std::string_view Name = "TurnBasedBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "GetIsMyTurn",
            "GetMyPlayerIndex",
            "GetPlayerDisplayName",
            "RegisterTurnBasedMatchInterfaceObject",
        }};
    };

    struct VoipListenerSynthComponent
    {
        static constexpr std::string_view Name = "VoipListenerSynthComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SynthComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowSpatialization = 0x240;
            static constexpr std::uintptr_t bAutoDestroy = 0x240;
            static constexpr std::uintptr_t bOverrideAttenuation = 0x240;
            static constexpr std::uintptr_t bStopWhenOwnerDestroyed = 0x240;
            static constexpr std::uintptr_t bEnableBaseSubmix = 0x244;
            static constexpr std::uintptr_t bEnableBusSends = 0x244;
            static constexpr std::uintptr_t bEnableSubmixSends = 0x244;
            static constexpr std::uintptr_t AttenuationSettings = 0x248;
            static constexpr std::uintptr_t AttenuationOverrides = 0x250;
            static constexpr std::uintptr_t ConcurrencySettings = 0x4E0;
            static constexpr std::uintptr_t ConcurrencySet = 0x4E8;
            static constexpr std::uintptr_t ModulationRouting = 0x4F8;
            static constexpr std::uintptr_t SoundClass = 0x560;
            static constexpr std::uintptr_t SourceEffectChain = 0x568;
            static constexpr std::uintptr_t SoundSubmix = 0x570;
            static constexpr std::uintptr_t SoundSubmixSends = 0x578;
            static constexpr std::uintptr_t BusSends = 0x588;
            static constexpr std::uintptr_t PreEffectBusSends = 0x598;
            static constexpr std::uintptr_t bIsPreviewSound = 0x5A8;
            static constexpr std::uintptr_t bIsUISound = 0x5A8;
            static constexpr std::uintptr_t EnvelopeFollowerAttackTime = 0x5AC;
            static constexpr std::uintptr_t EnvelopeFollowerReleaseTime = 0x5B0;
            static constexpr std::uintptr_t OnAudioEnvelopeValue = 0x5B8;
            static constexpr std::uintptr_t Synth = 0x5E8;
            static constexpr std::uintptr_t AudioComponent = 0x5F0;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"bAllowSpatialization", 0x240, "BoolProperty"},
            {"bAutoDestroy", 0x240, "BoolProperty"},
            {"bOverrideAttenuation", 0x240, "BoolProperty"},
            {"bStopWhenOwnerDestroyed", 0x240, "BoolProperty"},
            {"bEnableBaseSubmix", 0x244, "BoolProperty"},
            {"bEnableBusSends", 0x244, "BoolProperty"},
            {"bEnableSubmixSends", 0x244, "BoolProperty"},
            {"AttenuationSettings", 0x248, "ObjectProperty"},
            {"AttenuationOverrides", 0x250, "StructProperty"},
            {"ConcurrencySettings", 0x4E0, "ObjectProperty"},
            {"ConcurrencySet", 0x4E8, "SetProperty"},
            {"ModulationRouting", 0x4F8, "StructProperty"},
            {"SoundClass", 0x560, "ObjectProperty"},
            {"SourceEffectChain", 0x568, "ObjectProperty"},
            {"SoundSubmix", 0x570, "ObjectProperty"},
            {"SoundSubmixSends", 0x578, "ArrayProperty"},
            {"BusSends", 0x588, "ArrayProperty"},
            {"PreEffectBusSends", 0x598, "ArrayProperty"},
            {"bIsPreviewSound", 0x5A8, "BoolProperty"},
            {"bIsUISound", 0x5A8, "BoolProperty"},
            {"EnvelopeFollowerAttackTime", 0x5AC, "IntProperty"},
            {"EnvelopeFollowerReleaseTime", 0x5B0, "IntProperty"},
            {"OnAudioEnvelopeValue", 0x5B8, "MulticastInlineDelegateProperty"},
            {"Synth", 0x5E8, "ObjectProperty"},
            {"AudioComponent", 0x5F0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "IsIdling",
        }};
    };

}
