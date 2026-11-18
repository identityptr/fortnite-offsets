#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AudioWorldization
{
    struct AudioSphereTraceResult
    {
        static constexpr std::string_view Name = "AudioSphereTraceResult";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bBlocking = 0x0;
            static constexpr std::uintptr_t Distance = 0x4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bBlocking", 0x0, "BoolProperty"},
            {"Distance", 0x4, "FloatProperty"},
        }};
    };

    struct AudioWorldizationData
    {
        static constexpr std::string_view Name = "AudioWorldizationData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x28, "StructProperty"},
        }};
    };

    struct AudioWorldizationDefaultSettings
    {
        static constexpr std::string_view Name = "AudioWorldizationDefaultSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t GlobalSettings = 0x30;
            static constexpr std::uintptr_t DefaultSettings = 0x70;
            static constexpr std::uintptr_t ModulationParameters = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"GlobalSettings", 0x30, "StructProperty"},
            {"DefaultSettings", 0x70, "StructProperty"},
            {"ModulationParameters", 0xF0, "ArrayProperty"},
        }};
    };

    struct AudioWorldizationGlobalSettings
    {
        static constexpr std::string_view Name = "AudioWorldizationGlobalSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EffectCrossfadeTime = 0x0;
            static constexpr std::uintptr_t IgnoreTraceActorTag = 0x4;
            static constexpr std::uintptr_t EnclosureBus = 0x8;
            static constexpr std::uintptr_t WallDistanceBus = 0x10;
            static constexpr std::uintptr_t ListenerAzimuthBus = 0x18;
            static constexpr std::uintptr_t Quadrants = 0x20;
            static constexpr std::uintptr_t VolumeModulationForOldAGVSetup = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"EffectCrossfadeTime", 0x0, "FloatProperty"},
            {"IgnoreTraceActorTag", 0x4, "NameProperty"},
            {"EnclosureBus", 0x8, "ObjectProperty"},
            {"WallDistanceBus", 0x10, "ObjectProperty"},
            {"ListenerAzimuthBus", 0x18, "ObjectProperty"},
            {"Quadrants", 0x20, "ArrayProperty"},
            {"VolumeModulationForOldAGVSetup", 0x30, "ArrayProperty"},
        }};
    };

    struct AudioWorldizationQuadrantSettings
    {
        static constexpr std::string_view Name = "AudioWorldizationQuadrantSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t WallDistanceBus = 0x0;
            static constexpr std::uintptr_t EnclosureBus = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"WallDistanceBus", 0x0, "ObjectProperty"},
            {"EnclosureBus", 0x8, "ObjectProperty"},
        }};
    };

    struct AudioWorldizationReflectionProbe
    {
        static constexpr std::string_view Name = "AudioWorldizationReflectionProbe";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SubmixSends = 0x280;
            static constexpr std::uintptr_t SubmixEffects = 0x288;
            static constexpr std::uintptr_t AGVComponent = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SubmixSends", 0x280, "ObjectProperty"},
            {"SubmixEffects", 0x288, "ObjectProperty"},
            {"AGVComponent", 0x290, "ObjectProperty"},
        }};
    };

    struct AudioWorldizationSend
    {
        static constexpr std::string_view Name = "AudioWorldizationSend";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Submix = 0x0;
            static constexpr std::uintptr_t VolumeModulators = 0x20;
            static constexpr std::uintptr_t EffectChain = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Submix", 0x0, "SoftObjectProperty"},
            {"VolumeModulators", 0x20, "SetProperty"},
            {"EffectChain", 0x30, "ArrayProperty"},
        }};
    };

    struct AudioWorldizationSendsVolumeComponent
    {
        static constexpr std::string_view Name = "AudioWorldizationSendsVolumeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioGameplayVolumeComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Identifier = 0xD0;
            static constexpr std::uintptr_t Sends = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Identifier", 0xD0, "NameProperty"},
            {"Sends", 0xD8, "ArrayProperty"},
        }};
    };

    struct AudioWorldizationSettings
    {
        static constexpr std::string_view Name = "AudioWorldizationSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Identifier = 0x0;
            static constexpr std::uintptr_t Sends = 0x8;
            static constexpr std::uintptr_t EnclosureSmoothSpeed = 0x18;
            static constexpr std::uintptr_t WallDistanceSmoothSpeed = 0x1C;
            static constexpr std::uintptr_t TraceRadius = 0x20;
            static constexpr std::uintptr_t CrossfadeTime = 0x24;
            static constexpr std::uintptr_t TracePoints = 0x28;
            static constexpr std::uintptr_t TracesPerFrame = 0x2C;
            static constexpr std::uintptr_t SideQuadrantDegrees = 0x30;
            static constexpr std::uintptr_t UpQuadrantDegrees = 0x34;
            static constexpr std::uintptr_t TraceOrigin = 0x38;
            static constexpr std::uintptr_t TraceChannel = 0x50;
            static constexpr std::uintptr_t ResponseChannels = 0x58;
            static constexpr std::uintptr_t TracePolicy = 0x68;
            static constexpr std::uintptr_t TraceDirectionPolicy = 0x70;
            static constexpr std::uintptr_t bCollectActorAssetTags = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"Identifier", 0x0, "NameProperty"},
            {"Sends", 0x8, "ArrayProperty"},
            {"EnclosureSmoothSpeed", 0x18, "FloatProperty"},
            {"WallDistanceSmoothSpeed", 0x1C, "FloatProperty"},
            {"TraceRadius", 0x20, "FloatProperty"},
            {"CrossfadeTime", 0x24, "FloatProperty"},
            {"TracePoints", 0x28, "IntProperty"},
            {"TracesPerFrame", 0x2C, "IntProperty"},
            {"SideQuadrantDegrees", 0x30, "FloatProperty"},
            {"UpQuadrantDegrees", 0x34, "FloatProperty"},
            {"TraceOrigin", 0x38, "StructProperty"},
            {"TraceChannel", 0x50, "ByteProperty"},
            {"ResponseChannels", 0x58, "ArrayProperty"},
            {"TracePolicy", 0x68, "ClassProperty"},
            {"TraceDirectionPolicy", 0x70, "ClassProperty"},
            {"bCollectActorAssetTags", 0x78, "BoolProperty"},
        }};
    };

    struct AudioWorldizationSubsystem
    {
        static constexpr std::string_view Name = "AudioWorldizationSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "TickableWorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnWorldizationEnabled = 0x48;
            static constexpr std::uintptr_t EnclosureBus = 0x58;
            static constexpr std::uintptr_t WallDistanceBus = 0x60;
            static constexpr std::uintptr_t ListenerAzimuthBus = 0x68;
            static constexpr std::uintptr_t CurrentSettings = 0x78;
            static constexpr std::uintptr_t VolumeActor = 0xF8;
            static constexpr std::uintptr_t TracePolicy = 0x100;
            static constexpr std::uintptr_t TraceDirectionPolicy = 0x108;
            static constexpr std::uintptr_t SettingsStack = 0x340;
            static constexpr std::uintptr_t QuadrantEnclosureBuses = 0x350;
            static constexpr std::uintptr_t QuadrantWallDistanceBuses = 0x360;
            static constexpr std::uintptr_t CachedTraceOrigin = 0x370;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"OnWorldizationEnabled", 0x48, "MulticastInlineDelegateProperty"},
            {"EnclosureBus", 0x58, "ObjectProperty"},
            {"WallDistanceBus", 0x60, "ObjectProperty"},
            {"ListenerAzimuthBus", 0x68, "ObjectProperty"},
            {"CurrentSettings", 0x78, "StructProperty"},
            {"VolumeActor", 0xF8, "ObjectProperty"},
            {"TracePolicy", 0x100, "ObjectProperty"},
            {"TraceDirectionPolicy", 0x108, "ObjectProperty"},
            {"SettingsStack", 0x340, "ArrayProperty"},
            {"QuadrantEnclosureBuses", 0x350, "ArrayProperty"},
            {"QuadrantWallDistanceBuses", 0x360, "ArrayProperty"},
            {"CachedTraceOrigin", 0x370, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 11> FunctionNames{{
            "GetActorTagCounts",
            "GetActorTags",
            "GetEnclosureFactor",
            "GetWallDistanceRatio",
            "IsAGVDisabled",
            "OverrideEffectSends",
            "RemoveEffectSendOverride",
            "RemoveWorldizationSettings",
            "SetDefaultSettings",
            "SetEnabled",
            "SetWorldizationSettings",
        }};
    };

    struct AudioWorldizationTraceDirectionPolicyBase
    {
        static constexpr std::string_view Name = "AudioWorldizationTraceDirectionPolicyBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioWorldizationTraceDirectionPolicyDefault
    {
        static constexpr std::string_view Name = "AudioWorldizationTraceDirectionPolicyDefault";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioWorldizationTraceDirectionPolicyBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioWorldizationTracePolicyBase
    {
        static constexpr std::string_view Name = "AudioWorldizationTracePolicyBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioWorldizationTracePolicyDefault
    {
        static constexpr std::string_view Name = "AudioWorldizationTracePolicyDefault";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioWorldizationTracePolicyBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioWorldizationVolumeComponent
    {
        static constexpr std::string_view Name = "AudioWorldizationVolumeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioGameplayVolumeComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0xD0, "ObjectProperty"},
        }};
    };

    struct AudioWorldizationVolumeProxy
    {
        static constexpr std::string_view Name = "AudioWorldizationVolumeProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AGVPrimitiveComponentProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t EnclosureTarget = 0x60;
            static constexpr std::uintptr_t Requirement = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EnclosureTarget", 0x60, "FloatProperty"},
            {"Requirement", 0x64, "EnumProperty"},
        }};
    };

    struct GameFeatureAction_SetAudioWorldizationEffectSends
    {
        static constexpr std::string_view Name = "GameFeatureAction_SetAudioWorldizationEffectSends";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t Identifier = 0x28;
            static constexpr std::uintptr_t Sends = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Identifier", 0x28, "NameProperty"},
            {"Sends", 0x30, "ArrayProperty"},
        }};
    };

    struct GameFeatureAction_SetAudioWorldizationSettings
    {
        static constexpr std::string_view Name = "GameFeatureAction_SetAudioWorldizationSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x28, "StructProperty"},
        }};
    };

}
