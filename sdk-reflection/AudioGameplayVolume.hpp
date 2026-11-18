#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AudioGameplayVolume
{
    struct AGVConditionProxy
    {
        static constexpr std::string_view Name = "AGVConditionProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioGameplayVolumeProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectPtr = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ObjectPtr", 0x48, "ObjectProperty"},
        }};
    };

    struct AGVPrimitiveComponentProxy
    {
        static constexpr std::string_view Name = "AGVPrimitiveComponentProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioGameplayVolumeProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t Primitives = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Primitives", 0x48, "ArrayProperty"},
        }};
    };

    struct AttenuationVolumeComponent
    {
        static constexpr std::string_view Name = "AttenuationVolumeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioGameplayVolumeMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t ExteriorVolume = 0xD0;
            static constexpr std::uintptr_t ExteriorTime = 0xD4;
            static constexpr std::uintptr_t InteriorVolume = 0xD8;
            static constexpr std::uintptr_t InteriorTime = 0xDC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ExteriorVolume", 0xD0, "FloatProperty"},
            {"ExteriorTime", 0xD4, "FloatProperty"},
            {"InteriorVolume", 0xD8, "FloatProperty"},
            {"InteriorTime", 0xDC, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "SetExteriorVolume",
            "SetInteriorVolume",
        }};
    };

    struct AudioGameplayVolume
    {
        static constexpr std::string_view Name = "AudioGameplayVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Volume";
        struct Offsets
        {
            static constexpr std::uintptr_t AGVComponent = 0x2B0;
            static constexpr std::uintptr_t bEnabled = 0x2B8;
            static constexpr std::uintptr_t OnListenerEnterEvent = 0x2C0;
            static constexpr std::uintptr_t OnListenerExitEvent = 0x2D0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AGVComponent", 0x2B0, "ObjectProperty"},
            {"bEnabled", 0x2B8, "BoolProperty"},
            {"OnListenerEnterEvent", 0x2C0, "MulticastInlineDelegateProperty"},
            {"OnListenerExitEvent", 0x2D0, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "OnListenerEnter",
            "OnListenerExit",
            "OnRep_bEnabled",
            "SetEnabled",
        }};
    };

    struct AudioGameplayVolumeComponent
    {
        static constexpr std::string_view Name = "AudioGameplayVolumeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioGameplayComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnProxyEnter = 0xC8;
            static constexpr std::uintptr_t OnProxyExit = 0xD8;
            static constexpr std::uintptr_t Proxy = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnProxyEnter", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnProxyExit", 0xD8, "MulticastInlineDelegateProperty"},
            {"Proxy", 0xE8, "ObjectProperty"},
        }};
    };

    struct AudioGameplayVolumeComponentBase
    {
        static constexpr std::string_view Name = "AudioGameplayVolumeComponentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioGameplayComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct AudioGameplayVolumeMutator
    {
        static constexpr std::string_view Name = "AudioGameplayVolumeMutator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioGameplayComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Priority = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Priority", 0xC8, "IntProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetPriority",
        }};
    };

    struct AudioGameplayVolumeProxy
    {
        static constexpr std::string_view Name = "AudioGameplayVolumeProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioGameplayVolumeSubsystem
    {
        static constexpr std::string_view Name = "AudioGameplayVolumeSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioEngineSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t TransientProxyList = 0x38;
            static constexpr std::uintptr_t AGVComponents = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TransientProxyList", 0x38, "ArrayProperty"},
            {"AGVComponents", 0x48, "MapProperty"},
        }};
    };

    struct FilterVolumeComponent
    {
        static constexpr std::string_view Name = "FilterVolumeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioGameplayVolumeMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t ExteriorLPF = 0xD0;
            static constexpr std::uintptr_t ExteriorLPFTime = 0xD4;
            static constexpr std::uintptr_t InteriorLPF = 0xD8;
            static constexpr std::uintptr_t InteriorLPFTime = 0xDC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ExteriorLPF", 0xD0, "FloatProperty"},
            {"ExteriorLPFTime", 0xD4, "FloatProperty"},
            {"InteriorLPF", 0xD8, "FloatProperty"},
            {"InteriorLPFTime", 0xDC, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "SetExteriorLPF",
            "SetInteriorLPF",
        }};
    };

    struct ReverbVolumeComponent
    {
        static constexpr std::string_view Name = "ReverbVolumeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioGameplayVolumeMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t ReverbSettings = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReverbSettings", 0xD0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetReverbSettings",
        }};
    };

    struct SubmixOverrideVolumeComponent
    {
        static constexpr std::string_view Name = "SubmixOverrideVolumeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioGameplayVolumeMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t SubmixOverrideSettings = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SubmixOverrideSettings", 0xD0, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSubmixOverrideSettings",
        }};
    };

    struct SubmixSendVolumeComponent
    {
        static constexpr std::string_view Name = "SubmixSendVolumeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioGameplayVolumeMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t SubmixSendSettings = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SubmixSendSettings", 0xD0, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetSubmixSendSettings",
        }};
    };

}
