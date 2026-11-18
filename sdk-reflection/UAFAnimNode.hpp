#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::UAFAnimNode
{
    struct UAFAnimNodeDescAsset
    {
        static constexpr std::string_view Name = "UAFAnimNodeDescAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UAFAnimTree
    {
        static constexpr std::string_view Name = "UAFAnimTree";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UAFSharedVariables";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeDesc = 0x5A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NodeDesc", 0x5A0, "StructProperty"},
        }};
    };

    struct UAFSpawnModifierNotifyHandler
    {
        static constexpr std::string_view Name = "UAFSpawnModifierNotifyHandler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UAFNotifyHandler";
        struct Offsets
        {
            static constexpr std::uintptr_t NotifyClass = 0x5A0;
            static constexpr std::uintptr_t FilterMode = 0x5C0;
            static constexpr std::uintptr_t DebounceTime = 0x5C4;
            static constexpr std::uintptr_t StateSwitchBehavior = 0x5C8;
            static constexpr std::uintptr_t bShouldPredictNotify = 0x5C9;
            static constexpr std::uintptr_t bImmediateNotify = 0x5CA;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"NotifyClass", 0x5A0, "SoftClassProperty"},
            {"FilterMode", 0x5C0, "EnumProperty"},
            {"DebounceTime", 0x5C4, "FloatProperty"},
            {"StateSwitchBehavior", 0x5C8, "EnumProperty"},
            {"bShouldPredictNotify", 0x5C9, "BoolProperty"},
            {"bImmediateNotify", 0x5CA, "BoolProperty"},
        }};
    };

    struct UAFSpawnModifierNotifyState
    {
        static constexpr std::string_view Name = "UAFSpawnModifierNotifyState";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UAFAnimNotifyState";
        struct Offsets
        {
            static constexpr std::uintptr_t SiteTag = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SiteTag", 0x38, "StructProperty"},
        }};
    };

    struct UAFSynchronizationData
    {
        static constexpr std::string_view Name = "UAFSynchronizationData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimMetaData";
        struct Offsets
        {
            static constexpr std::uintptr_t PhaseTracks = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PhaseTracks", 0x28, "ArrayProperty"},
        }};
    };

    struct UAFSynchronizationSettings
    {
        static constexpr std::string_view Name = "UAFSynchronizationSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t PhaseTypeDescriptions = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PhaseTypeDescriptions", 0x28, "ArrayProperty"},
        }};
    };

}
