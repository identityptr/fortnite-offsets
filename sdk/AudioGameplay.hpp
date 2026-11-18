#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AudioGameplay
{
    struct AudioAssetUserData
    {
        static constexpr std::string_view Name = "AudioAssetUserData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t MetadataTags = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MetadataTags", 0x28, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "GetAllTags",
            "GetFilteredTags",
            "HasTag",
        }};
    };

    struct AudioComponentGroup
    {
        static constexpr std::string_view Name = "AudioComponentGroup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnStopped = 0x248;
            static constexpr std::uintptr_t OnKilled = 0x258;
            static constexpr std::uintptr_t OnVirtualized = 0x268;
            static constexpr std::uintptr_t OnUnvirtualized = 0x278;
            static constexpr std::uintptr_t Components = 0x288;
            static constexpr std::uintptr_t ParamsToSet = 0x298;
            static constexpr std::uintptr_t PersistentParams = 0x2A8;
            static constexpr std::uintptr_t Extensions = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"OnStopped", 0x248, "MulticastInlineDelegateProperty"},
            {"OnKilled", 0x258, "MulticastInlineDelegateProperty"},
            {"OnVirtualized", 0x268, "MulticastInlineDelegateProperty"},
            {"OnUnvirtualized", 0x278, "MulticastInlineDelegateProperty"},
            {"Components", 0x288, "ArrayProperty"},
            {"ParamsToSet", 0x298, "ArrayProperty"},
            {"PersistentParams", 0x2A8, "ArrayProperty"},
            {"Extensions", 0x2B8, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 23> FunctionNames{{
            "AddExtension",
            "AddExternalComponent",
            "BroadcastEvent",
            "BroadcastKill",
            "BroadcastStopAll",
            "DisableVirtualization",
            "EnableVirtualization",
            "GetBoolParamValue",
            "GetFloatParamValue",
            "GetStringParamValue",
            "IsPlayingAny",
            "IsVirtualized",
            "RemoveExtension",
            "RemoveExternalComponent",
            "SetLowPassFilter",
            "SetPitchMultiplier",
            "SetVolumeMultiplier",
            "StaticGetOrCreateComponentGroup",
            "StopSound",
            "SubscribeToBool",
            "SubscribeToEvent",
            "SubscribeToStringParam",
            "UnsubscribeObject",
        }};
    };

    struct AudioComponentGroupExtension
    {
        static constexpr std::string_view Name = "AudioComponentGroupExtension";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioGameplayComponent
    {
        static constexpr std::string_view Name = "AudioGameplayComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
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

    struct AudioGameplayCondition
    {
        static constexpr std::string_view Name = "AudioGameplayCondition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "ConditionMet",
            "ConditionMet_Position",
        }};
    };

    struct AudioGameplayRequirements
    {
        static constexpr std::string_view Name = "AudioGameplayRequirements";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Preset = 0x0;
            static constexpr std::uintptr_t Custom = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Preset", 0x0, "ObjectProperty"},
            {"Custom", 0x8, "StructProperty"},
        }};
    };

    struct AudioGameplayTagCacheSubsystem
    {
        static constexpr std::string_view Name = "AudioGameplayTagCacheSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioGameplayVolumeInteraction
    {
        static constexpr std::string_view Name = "AudioGameplayVolumeInteraction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "OnListenerEnter",
            "OnListenerExit",
        }};
    };

    struct AudioParameterComponent
    {
        static constexpr std::string_view Name = "AudioParameterComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioGameplayComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveComponents = 0xD8;
            static constexpr std::uintptr_t Parameters = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActiveComponents", 0xD8, "ArrayProperty"},
            {"Parameters", 0xE8, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetParameters",
        }};
    };

    struct AudioRequirementPreset
    {
        static constexpr std::string_view Name = "AudioRequirementPreset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Query = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Query", 0x28, "StructProperty"},
        }};
    };

    struct SoundHandleSubsystem
    {
        static constexpr std::string_view Name = "SoundHandleSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioEngineSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
