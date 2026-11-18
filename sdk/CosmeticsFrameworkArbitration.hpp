#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CosmeticsFrameworkArbitration
{
    struct CosmeticApplicatorComponent
    {
        static constexpr std::string_view Name = "CosmeticApplicatorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowgraphKey = 0x120;
            static constexpr std::uintptr_t bUseScheduleManager = 0x130;
            static constexpr std::uintptr_t FallbackParams = 0x138;
            static constexpr std::uintptr_t FlowData = 0x168;
            static constexpr std::uintptr_t QueuedPassInfo = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"FlowgraphKey", 0x120, "StructProperty"},
            {"bUseScheduleManager", 0x130, "BoolProperty"},
            {"FallbackParams", 0x138, "StructProperty"},
            {"FlowData", 0x168, "StructProperty"},
            {"QueuedPassInfo", 0x178, "StructProperty"},
        }};
    };

    struct CosmeticApplicatorDummyStruct
    {
        static constexpr std::string_view Name = "CosmeticApplicatorDummyStruct";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CosmeticApplicatorFallbackParams
    {
        static constexpr std::string_view Name = "CosmeticApplicatorFallbackParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowgraphKey = 0x0;
            static constexpr std::uintptr_t TimerValue = 0x10;
            static constexpr std::uintptr_t bApplyOnAuthority = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FlowgraphKey", 0x0, "StructProperty"},
            {"TimerValue", 0x10, "FloatProperty"},
            {"bApplyOnAuthority", 0x14, "BoolProperty"},
        }};
    };

    struct CosmeticApplicatorFallbackTimerBase
    {
        static constexpr std::string_view Name = "CosmeticApplicatorFallbackTimerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CosmeticApplicatorFallbackTimerSimple
    {
        static constexpr std::string_view Name = "CosmeticApplicatorFallbackTimerSimple";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CosmeticApplicatorFallbackTimerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TimerValue = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TimerValue", 0x28, "FloatProperty"},
        }};
    };

    struct CosmeticApplicatorQueuedPassInfo
    {
        static constexpr std::string_view Name = "CosmeticApplicatorQueuedPassInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticSpec = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CosmeticSpec", 0x0, "StructProperty"},
        }};
    };

    struct CosmeticPortComponent
    {
        static constexpr std::string_view Name = "CosmeticPortComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DesiredPorts = 0xC0;
            static constexpr std::uintptr_t AppliedPorts = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DesiredPorts", 0xC0, "MapProperty"},
            {"AppliedPorts", 0xD0, "MapProperty"},
        }};
    };

    struct CosmeticPortData
    {
        static constexpr std::string_view Name = "CosmeticPortData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CosmeticPortGroupIdentifier
    {
        static constexpr std::string_view Name = "CosmeticPortGroupIdentifier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PortIdentifierTags = 0x0;
            static constexpr std::uintptr_t PartTypeTags = 0x20;
            static constexpr std::uintptr_t PartTypeIndex = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PortIdentifierTags", 0x0, "StructProperty"},
            {"PartTypeTags", 0x20, "StructProperty"},
            {"PartTypeIndex", 0x40, "IntProperty"},
        }};
    };

    struct CosmeticPortIdentifier
    {
        static constexpr std::string_view Name = "CosmeticPortIdentifier";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PortIdentifierTag = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PortIdentifierTag", 0x0, "StructProperty"},
        }};
    };

    struct CosmeticPortInstancedData
    {
        static constexpr std::string_view Name = "CosmeticPortInstancedData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t InstancedData = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InstancedData", 0x0, "ArrayProperty"},
        }};
    };

    struct CosmeticPortQuery
    {
        static constexpr std::string_view Name = "CosmeticPortQuery";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PortQuery = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PortQuery", 0x0, "StructProperty"},
        }};
    };

}
