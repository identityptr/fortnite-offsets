#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MassIrisReplication
{
    struct MassEntityCountLimitedPrioritizerConfig
    {
        static constexpr std::string_view Name = "MassEntityCountLimitedPrioritizerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectCountLimiterConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0x28;
            static constexpr std::uintptr_t MaxObjectCount = 0x2C;
            static constexpr std::uintptr_t Priority = 0x30;
            static constexpr std::uintptr_t OwningConnectionPriority = 0x34;
            static constexpr std::uintptr_t bEnableOwnedObjectsFastLane = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Mode", 0x28, "EnumProperty"},
            {"MaxObjectCount", 0x2C, "UInt32Property"},
            {"Priority", 0x30, "FloatProperty"},
            {"OwningConnectionPriority", 0x34, "FloatProperty"},
            {"bEnableOwnedObjectsFastLane", 0x38, "BoolProperty"},
        }};
    };

    struct MassEntityDefaultPrioritizerConfig
    {
        static constexpr std::string_view Name = "MassEntityDefaultPrioritizerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SphereNetObjectPrioritizerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerRadius = 0x28;
            static constexpr std::uintptr_t OuterRadius = 0x2C;
            static constexpr std::uintptr_t InnerPriority = 0x30;
            static constexpr std::uintptr_t OuterPriority = 0x34;
            static constexpr std::uintptr_t OutsidePriority = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InnerRadius", 0x28, "FloatProperty"},
            {"OuterRadius", 0x2C, "FloatProperty"},
            {"InnerPriority", 0x30, "FloatProperty"},
            {"OuterPriority", 0x34, "FloatProperty"},
            {"OutsidePriority", 0x38, "FloatProperty"},
        }};
    };

    struct MassEntityNoLimitPrioritizerConfig
    {
        static constexpr std::string_view Name = "MassEntityNoLimitPrioritizerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SphereNetObjectPrioritizerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerRadius = 0x28;
            static constexpr std::uintptr_t OuterRadius = 0x2C;
            static constexpr std::uintptr_t InnerPriority = 0x30;
            static constexpr std::uintptr_t OuterPriority = 0x34;
            static constexpr std::uintptr_t OutsidePriority = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InnerRadius", 0x28, "FloatProperty"},
            {"OuterRadius", 0x2C, "FloatProperty"},
            {"InnerPriority", 0x30, "FloatProperty"},
            {"OuterPriority", 0x34, "FloatProperty"},
            {"OutsidePriority", 0x38, "FloatProperty"},
        }};
    };

    struct MassEntityVIPPrioritizerConfig
    {
        static constexpr std::string_view Name = "MassEntityVIPPrioritizerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SphereNetObjectPrioritizerConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t InnerRadius = 0x28;
            static constexpr std::uintptr_t OuterRadius = 0x2C;
            static constexpr std::uintptr_t InnerPriority = 0x30;
            static constexpr std::uintptr_t OuterPriority = 0x34;
            static constexpr std::uintptr_t OutsidePriority = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"InnerRadius", 0x28, "FloatProperty"},
            {"OuterRadius", 0x2C, "FloatProperty"},
            {"InnerPriority", 0x30, "FloatProperty"},
            {"OuterPriority", 0x34, "FloatProperty"},
            {"OutsidePriority", 0x38, "FloatProperty"},
        }};
    };

    struct MassIrisReplicationSettings
    {
        static constexpr std::string_view Name = "MassIrisReplicationSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassModuleSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t ExcludedFragments = 0x28;
            static constexpr std::uintptr_t ExcludedProperties = 0x38;
            static constexpr std::uintptr_t ReplicateOnceProperties = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ExcludedFragments", 0x28, "ArrayProperty"},
            {"ExcludedProperties", 0x38, "ArrayProperty"},
            {"ReplicateOnceProperties", 0x48, "ArrayProperty"},
        }};
    };

    struct MassNetClientApplyProcessor
    {
        static constexpr std::string_view Name = "MassNetClientApplyProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t NetSubsystem = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NetSubsystem", 0x120, "ObjectProperty"},
        }};
    };

    struct MassNetClientSubsystem
    {
        static constexpr std::string_view Name = "MassNetClientSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ClientProxies = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClientProxies", 0x90, "ArrayProperty"},
        }};
    };

    struct MassNetDeregistrationObserver
    {
        static constexpr std::string_view Name = "MassNetDeregistrationObserver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassObserverProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t NetSubsystem = 0x770;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NetSubsystem", 0x770, "ObjectProperty"},
        }};
    };

    struct MassNetGenericProxy
    {
        static constexpr std::string_view Name = "MassNetGenericProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicatedStateBuffer = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicatedStateBuffer", 0x28, "ArrayProperty"},
        }};
    };

    struct MassNetObjectFactory
    {
        static constexpr std::string_view Name = "MassNetObjectFactory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NetObjectFactory";
        struct Offsets
        {
            static constexpr std::uintptr_t ServerSubsystem = 0x38;
            static constexpr std::uintptr_t ClientSubsystem = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ServerSubsystem", 0x38, "ObjectProperty"},
            {"ClientSubsystem", 0x40, "ObjectProperty"},
        }};
    };

    struct MassNetProxySyncProcessor
    {
        static constexpr std::string_view Name = "MassNetProxySyncProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t NetSubsystem = 0x750;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NetSubsystem", 0x750, "ObjectProperty"},
        }};
    };

    struct MassNetRegistrationProcessor
    {
        static constexpr std::string_view Name = "MassNetRegistrationProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassProcessor";
        struct Offsets
        {
            static constexpr std::uintptr_t NetSubsystem = 0x750;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NetSubsystem", 0x750, "ObjectProperty"},
        }};
    };

    struct MassNetReplicationTrait
    {
        static constexpr std::string_view Name = "MassNetReplicationTrait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MassEntityTraitBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ReplicationConfig = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReplicationConfig", 0x30, "StructProperty"},
        }};
    };

    struct MassNetServerSubsystem
    {
        static constexpr std::string_view Name = "MassNetServerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t ProxyPool = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ProxyPool", 0x60, "ArrayProperty"},
        }};
    };

}
