#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::McpProfileSys
{
    struct AccountIdAndProfileResponse
    {
        static constexpr std::string_view Name = "AccountIdAndProfileResponse";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AccountID = 0x0;
            static constexpr std::uintptr_t Response = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AccountID", 0x0, "StrProperty"},
            {"Response", 0x10, "StructProperty"},
        }};
    };

    struct BaseUrlContext
    {
        static constexpr std::string_view Name = "BaseUrlContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ClientUrlContext
    {
        static constexpr std::string_view Name = "ClientUrlContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BaseUrlContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DedicatedServerUrlContext
    {
        static constexpr std::string_view Name = "DedicatedServerUrlContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BaseUrlContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct GiftBoxInfo
    {
        static constexpr std::string_view Name = "GiftBoxInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t GiftedOn = 0x0;
            static constexpr std::uintptr_t FromAccountId = 0x8;
            static constexpr std::uintptr_t LootList = 0x18;
            static constexpr std::uintptr_t Params = 0x28;
            static constexpr std::uintptr_t grant_on_date = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"GiftedOn", 0x0, "StructProperty"},
            {"FromAccountId", 0x8, "StrProperty"},
            {"LootList", 0x18, "ArrayProperty"},
            {"Params", 0x28, "StructProperty"},
            {"grant_on_date", 0x48, "StructProperty"},
        }};
    };

    struct McpAddItemRequest
    {
        static constexpr std::string_view Name = "McpAddItemRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemID = 0x0;
            static constexpr std::uintptr_t TemplateId = 0x10;
            static constexpr std::uintptr_t Quantity = 0x20;
            static constexpr std::uintptr_t Attributes = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ItemID", 0x0, "StrProperty"},
            {"TemplateId", 0x10, "StrProperty"},
            {"Quantity", 0x20, "IntProperty"},
            {"Attributes", 0x28, "StructProperty"},
        }};
    };

    struct McpChangeAttributesRequest
    {
        static constexpr std::string_view Name = "McpChangeAttributesRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemID = 0x0;
            static constexpr std::uintptr_t Attributes = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ItemID", 0x0, "StrProperty"},
            {"Attributes", 0x10, "StructProperty"},
        }};
    };

    struct McpChangeQuantityRequest
    {
        static constexpr std::string_view Name = "McpChangeQuantityRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemID = 0x0;
            static constexpr std::uintptr_t DeltaQuantity = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ItemID", 0x0, "StrProperty"},
            {"DeltaQuantity", 0x10, "IntProperty"},
        }};
    };

    struct McpItemAware
    {
        static constexpr std::string_view Name = "McpItemAware";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct McpItemDefinitionBase
    {
        static constexpr std::string_view Name = "McpItemDefinitionBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetTemplateId",
        }};
    };

    struct McpItemIdAndQuantity
    {
        static constexpr std::string_view Name = "McpItemIdAndQuantity";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "McpLootEntry";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemType = 0x0;
            static constexpr std::uintptr_t ItemGuid = 0x10;
            static constexpr std::uintptr_t Quantity = 0x20;
            static constexpr std::uintptr_t Attributes = 0x28;
            static constexpr std::uintptr_t ItemProfile = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ItemType", 0x0, "StrProperty"},
            {"ItemGuid", 0x10, "StrProperty"},
            {"Quantity", 0x20, "IntProperty"},
            {"Attributes", 0x28, "StructProperty"},
            {"ItemProfile", 0x48, "StrProperty"},
        }};
    };

    struct McpLootEntry
    {
        static constexpr std::string_view Name = "McpLootEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemType = 0x0;
            static constexpr std::uintptr_t ItemGuid = 0x10;
            static constexpr std::uintptr_t Quantity = 0x20;
            static constexpr std::uintptr_t Attributes = 0x28;
            static constexpr std::uintptr_t ItemProfile = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"ItemType", 0x0, "StrProperty"},
            {"ItemGuid", 0x10, "StrProperty"},
            {"Quantity", 0x20, "IntProperty"},
            {"Attributes", 0x28, "StructProperty"},
            {"ItemProfile", 0x48, "StrProperty"},
        }};
    };

    struct McpLootResult
    {
        static constexpr std::string_view Name = "McpLootResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TierGroupName = 0x0;
            static constexpr std::uintptr_t Items = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TierGroupName", 0x0, "StrProperty"},
            {"Items", 0x10, "ArrayProperty"},
        }};
    };

    struct McpProfile
    {
        static constexpr std::string_view Name = "McpProfile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AllowSubscriptionToNotificationsService = 0x28;
            static constexpr std::uintptr_t DebugName = 0x88;
            static constexpr std::uintptr_t bProfileLockOperationPending = 0x98;
            static constexpr std::uintptr_t bProfileUnlockOperationPending = 0x99;
            static constexpr std::uintptr_t bEnableMocks = 0x9A;
            static constexpr std::uintptr_t ProfileGroup = 0xD0;
            static constexpr std::uintptr_t ProfileId = 0xD8;
            static constexpr std::uintptr_t ProfileRevision = 0xE8;
            static constexpr std::uintptr_t FullProfileQueryQueued = 0xF0;
            static constexpr std::uintptr_t bProfileWriteLocked = 0xF4;
            static constexpr std::uintptr_t ProfileWriteLockExpireTime = 0xF8;
            static constexpr std::uintptr_t QueuedProfileUpdatingEnabled = 0x100;
            static constexpr std::uintptr_t CreationTime = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"AllowSubscriptionToNotificationsService", 0x28, "BoolProperty"},
            {"DebugName", 0x88, "StrProperty"},
            {"bProfileLockOperationPending", 0x98, "BoolProperty"},
            {"bProfileUnlockOperationPending", 0x99, "BoolProperty"},
            {"bEnableMocks", 0x9A, "BoolProperty"},
            {"ProfileGroup", 0xD0, "ObjectProperty"},
            {"ProfileId", 0xD8, "StrProperty"},
            {"ProfileRevision", 0xE8, "Int64Property"},
            {"FullProfileQueryQueued", 0xF0, "IntProperty"},
            {"bProfileWriteLocked", 0xF4, "BoolProperty"},
            {"ProfileWriteLockExpireTime", 0xF8, "StructProperty"},
            {"QueuedProfileUpdatingEnabled", 0x100, "BoolProperty"},
            {"CreationTime", 0x108, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 6> FunctionNames{{
            "DeleteAllProfiles",
            "DeleteProfile",
            "LockProfileForWrite",
            "QueryProfile",
            "QueryPublicProfile",
            "UnlockProfileForWrite",
        }};
    };

    struct McpProfileChangeRequest
    {
        static constexpr std::string_view Name = "McpProfileChangeRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseCommandRevision = 0x0;
            static constexpr std::uintptr_t AddRequests = 0x8;
            static constexpr std::uintptr_t RemoveRequests = 0x18;
            static constexpr std::uintptr_t ChangeQuantityRequests = 0x28;
            static constexpr std::uintptr_t ChangeAttributesRequests = 0x38;
            static constexpr std::uintptr_t ChangeStatRequests = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"BaseCommandRevision", 0x0, "IntProperty"},
            {"AddRequests", 0x8, "ArrayProperty"},
            {"RemoveRequests", 0x18, "ArrayProperty"},
            {"ChangeQuantityRequests", 0x28, "ArrayProperty"},
            {"ChangeAttributesRequests", 0x38, "ArrayProperty"},
            {"ChangeStatRequests", 0x48, "ArrayProperty"},
        }};
    };

    struct McpProfileGroup
    {
        static constexpr std::string_view Name = "McpProfileGroup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DelayMcpResults = 0xBC;
            static constexpr std::uintptr_t WeeklyIntervalStartDay = 0xC0;
            static constexpr std::uintptr_t ProfileList = 0xC8;
            static constexpr std::uintptr_t PlayerName = 0xE0;
            static constexpr std::uintptr_t bIsServer = 0xF0;
            static constexpr std::uintptr_t LastMcpVersion = 0x138;
            static constexpr std::uintptr_t LastContentVersion = 0x148;
            static constexpr std::uintptr_t LastMinBuild = 0x158;
            static constexpr std::uintptr_t LocalTimeOffset = 0x168;
            static constexpr std::uintptr_t LockCode = 0x178;
            static constexpr std::uintptr_t LockedProfiles = 0x188;
            static constexpr std::uintptr_t LockedProfilesString = 0x198;
            static constexpr std::uintptr_t ProfileWriteLockTimeoutSecs = 0x1A8;
            static constexpr std::uintptr_t ApplyStashEndPoint = 0x1B0;
            static constexpr std::uintptr_t bAsyncParseProfileUpdates = 0x1C0;
            static constexpr std::uintptr_t MaxChangesToForwardInUpdate = 0x210;
            static constexpr std::uintptr_t MaxChangeSizeInBytes = 0x214;
            static constexpr std::uintptr_t ForwardToClientExclusions = 0x218;
            static constexpr std::uintptr_t PendingMultiProfileUpdates = 0x228;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"DelayMcpResults", 0xBC, "IntProperty"},
            {"WeeklyIntervalStartDay", 0xC0, "IntProperty"},
            {"ProfileList", 0xC8, "ArrayProperty"},
            {"PlayerName", 0xE0, "StrProperty"},
            {"bIsServer", 0xF0, "BoolProperty"},
            {"LastMcpVersion", 0x138, "StrProperty"},
            {"LastContentVersion", 0x148, "StrProperty"},
            {"LastMinBuild", 0x158, "StrProperty"},
            {"LocalTimeOffset", 0x168, "StructProperty"},
            {"LockCode", 0x178, "StrProperty"},
            {"LockedProfiles", 0x188, "ArrayProperty"},
            {"LockedProfilesString", 0x198, "StrProperty"},
            {"ProfileWriteLockTimeoutSecs", 0x1A8, "IntProperty"},
            {"ApplyStashEndPoint", 0x1B0, "StrProperty"},
            {"bAsyncParseProfileUpdates", 0x1C0, "BoolProperty"},
            {"MaxChangesToForwardInUpdate", 0x210, "IntProperty"},
            {"MaxChangeSizeInBytes", 0x214, "IntProperty"},
            {"ForwardToClientExclusions", 0x218, "ArrayProperty"},
            {"PendingMultiProfileUpdates", 0x228, "ArrayProperty"},
        }};
    };

    struct McpProfileManager
    {
        static constexpr std::string_view Name = "McpProfileManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ServerProfileGroups = 0x38;
            static constexpr std::uintptr_t ClientProfileGroups = 0x48;
            static constexpr std::uintptr_t MaxItemsProcessedInInitialUpdatesPerTick = 0x60;
            static constexpr std::uintptr_t ConfigProfileDataOmissionGroups = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ServerProfileGroups", 0x38, "ArrayProperty"},
            {"ClientProfileGroups", 0x48, "ArrayProperty"},
            {"MaxItemsProcessedInInitialUpdatesPerTick", 0x60, "IntProperty"},
            {"ConfigProfileDataOmissionGroups", 0x68, "ArrayProperty"},
        }};
    };

    struct McpRemoveItemRequest
    {
        static constexpr std::string_view Name = "McpRemoveItemRequest";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemID = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ItemID", 0x0, "StrProperty"},
        }};
    };

    struct MultiProfileUpdate
    {
        static constexpr std::string_view Name = "MultiProfileUpdate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProfileWeakPtr = 0x0;
            static constexpr std::uintptr_t bSkipPreload = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProfileWeakPtr", 0x0, "WeakObjectProperty"},
            {"bSkipPreload", 0x8, "BoolProperty"},
        }};
    };

    struct ProfileDataOmissionGroupsDefinition
    {
        static constexpr std::string_view Name = "ProfileDataOmissionGroupsDefinition";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProfileId = 0x0;
            static constexpr std::uintptr_t OmissionGroups = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProfileId", 0x0, "StrProperty"},
            {"OmissionGroups", 0x10, "ArrayProperty"},
        }};
    };

    struct ProfileEntry
    {
        static constexpr std::string_view Name = "ProfileEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProfileId = 0x0;
            static constexpr std::uintptr_t ProfileObject = 0x10;
            static constexpr std::uintptr_t bWaitingForRefreshAllProfilesResponse = 0x18;
            static constexpr std::uintptr_t bForwardUpdatesToClient = 0x19;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ProfileId", 0x0, "StrProperty"},
            {"ProfileObject", 0x10, "ObjectProperty"},
            {"bWaitingForRefreshAllProfilesResponse", 0x18, "BoolProperty"},
            {"bForwardUpdatesToClient", 0x19, "BoolProperty"},
        }};
    };

    struct ProfileGroupEntry
    {
        static constexpr std::string_view Name = "ProfileGroupEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProfileGroup = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ProfileGroup", 0x20, "ObjectProperty"},
        }};
    };

    struct ProfileUpdate
    {
        static constexpr std::string_view Name = "ProfileUpdate";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ProfileUpdateSingle";
        struct Offsets
        {
            static constexpr std::uintptr_t ResponseVersion = 0x58;
            static constexpr std::uintptr_t ServerTime = 0x60;
            static constexpr std::uintptr_t MultiUpdate = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ResponseVersion", 0x58, "IntProperty"},
            {"ServerTime", 0x60, "StructProperty"},
            {"MultiUpdate", 0x68, "ArrayProperty"},
        }};
    };

    struct ProfileUpdateNotification
    {
        static constexpr std::string_view Name = "ProfileUpdateNotification";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Changes = 0x0;
            static constexpr std::uintptr_t LockExpiration = 0x10;
            static constexpr std::uintptr_t CommandRevision = 0x18;
            static constexpr std::uintptr_t Revision = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Changes", 0x0, "ArrayProperty"},
            {"LockExpiration", 0x10, "StructProperty"},
            {"CommandRevision", 0x18, "IntProperty"},
            {"Revision", 0x20, "Int64Property"},
        }};
    };

    struct ProfileUpdateSingle
    {
        static constexpr std::string_view Name = "ProfileUpdateSingle";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ProfileRevision = 0x0;
            static constexpr std::uintptr_t ProfileId = 0x8;
            static constexpr std::uintptr_t ProfileChangesBaseRevision = 0x18;
            static constexpr std::uintptr_t ProfileChanges = 0x20;
            static constexpr std::uintptr_t LockExpiration = 0x30;
            static constexpr std::uintptr_t Notifications = 0x38;
            static constexpr std::uintptr_t ProfileCommandRevision = 0x48;
            static constexpr std::uintptr_t CreationTime = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ProfileRevision", 0x0, "Int64Property"},
            {"ProfileId", 0x8, "StrProperty"},
            {"ProfileChangesBaseRevision", 0x18, "Int64Property"},
            {"ProfileChanges", 0x20, "ArrayProperty"},
            {"LockExpiration", 0x30, "StructProperty"},
            {"Notifications", 0x38, "ArrayProperty"},
            {"ProfileCommandRevision", 0x48, "IntProperty"},
            {"CreationTime", 0x50, "StructProperty"},
        }};
    };

    struct PublicUrlContext
    {
        static constexpr std::string_view Name = "PublicUrlContext";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "BaseUrlContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
