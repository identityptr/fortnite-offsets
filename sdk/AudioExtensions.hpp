#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::AudioExtensions
{
    struct AudioEndpointSettingsBase
    {
        static constexpr std::string_view Name = "AudioEndpointSettingsBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioParameter
    {
        static constexpr std::string_view Name = "AudioParameter";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ParamName = 0x0;
            static constexpr std::uintptr_t FloatParam = 0x4;
            static constexpr std::uintptr_t BoolParam = 0x8;
            static constexpr std::uintptr_t IntParam = 0xC;
            static constexpr std::uintptr_t ObjectParam = 0x10;
            static constexpr std::uintptr_t StringParam = 0x18;
            static constexpr std::uintptr_t ArrayFloatParam = 0x28;
            static constexpr std::uintptr_t ArrayBoolParam = 0x38;
            static constexpr std::uintptr_t ArrayIntParam = 0x48;
            static constexpr std::uintptr_t ArrayObjectParam = 0x58;
            static constexpr std::uintptr_t ArrayStringParam = 0x68;
            static constexpr std::uintptr_t ParamType = 0x78;
            static constexpr std::uintptr_t TypeName = 0x7C;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"ParamName", 0x0, "NameProperty"},
            {"FloatParam", 0x4, "FloatProperty"},
            {"BoolParam", 0x8, "BoolProperty"},
            {"IntParam", 0xC, "IntProperty"},
            {"ObjectParam", 0x10, "ObjectProperty"},
            {"StringParam", 0x18, "StrProperty"},
            {"ArrayFloatParam", 0x28, "ArrayProperty"},
            {"ArrayBoolParam", 0x38, "ArrayProperty"},
            {"ArrayIntParam", 0x48, "ArrayProperty"},
            {"ArrayObjectParam", 0x58, "ArrayProperty"},
            {"ArrayStringParam", 0x68, "ArrayProperty"},
            {"ParamType", 0x78, "EnumProperty"},
            {"TypeName", 0x7C, "NameProperty"},
        }};
    };

    struct AudioParameterControllerInterface
    {
        static constexpr std::string_view Name = "AudioParameterControllerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 13> FunctionNames{{
            "ResetParameters",
            "SetBoolArrayParameter",
            "SetBoolParameter",
            "SetFloatArrayParameter",
            "SetFloatParameter",
            "SetIntArrayParameter",
            "SetIntParameter",
            "SetObjectArrayParameter",
            "SetObjectParameter",
            "SetParameters_Blueprint",
            "SetStringArrayParameter",
            "SetStringParameter",
            "SetTriggerParameter",
        }};
    };

    struct AudioPropertiesSheetAssetBase
    {
        static constexpr std::string_view Name = "AudioPropertiesSheetAssetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AudioPropertiesSheetAssetUserInterface
    {
        static constexpr std::string_view Name = "AudioPropertiesSheetAssetUserInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DummyEndpointSettings
    {
        static constexpr std::string_view Name = "DummyEndpointSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AudioEndpointSettingsBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct OcclusionPluginSourceSettingsBase
    {
        static constexpr std::string_view Name = "OcclusionPluginSourceSettingsBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ReverbPluginSourceSettingsBase
    {
        static constexpr std::string_view Name = "ReverbPluginSourceSettingsBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SoundGeneratorOutput
    {
        static constexpr std::string_view Name = "SoundGeneratorOutput";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Name", 0x0, "NameProperty"},
        }};
    };

    struct SoundModulatorBase
    {
        static constexpr std::string_view Name = "SoundModulatorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SoundWaveCloudStreamingPlatformProjectSettings
    {
        static constexpr std::string_view Name = "SoundWaveCloudStreamingPlatformProjectSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EnablementSetting = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EnablementSetting", 0x0, "EnumProperty"},
        }};
    };

    struct SoundWaveCloudStreamingPlatformSettings
    {
        static constexpr std::string_view Name = "SoundWaveCloudStreamingPlatformSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t EnablementSetting = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EnablementSetting", 0x0, "EnumProperty"},
        }};
    };

    struct SoundWaveCuePoint
    {
        static constexpr std::string_view Name = "SoundWaveCuePoint";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CuePointID = 0x0;
            static constexpr std::uintptr_t Label = 0x8;
            static constexpr std::uintptr_t FramePosition = 0x18;
            static constexpr std::uintptr_t FrameLength = 0x20;
            static constexpr std::uintptr_t bIsLoopRegion = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CuePointID", 0x0, "IntProperty"},
            {"Label", 0x8, "StrProperty"},
            {"FramePosition", 0x18, "Int64Property"},
            {"FrameLength", 0x20, "Int64Property"},
            {"bIsLoopRegion", 0x28, "BoolProperty"},
        }};
    };

    struct SoundfieldEffectBase
    {
        static constexpr std::string_view Name = "SoundfieldEffectBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Settings = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Settings", 0x28, "ObjectProperty"},
        }};
    };

    struct SoundfieldEffectSettingsBase
    {
        static constexpr std::string_view Name = "SoundfieldEffectSettingsBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SoundfieldEncodingSettingsBase
    {
        static constexpr std::string_view Name = "SoundfieldEncodingSettingsBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SoundfieldEndpointSettingsBase
    {
        static constexpr std::string_view Name = "SoundfieldEndpointSettingsBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SourceDataOverridePluginSourceSettingsBase
    {
        static constexpr std::string_view Name = "SourceDataOverridePluginSourceSettingsBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SpatializationPluginSourceSettingsBase
    {
        static constexpr std::string_view Name = "SpatializationPluginSourceSettingsBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WaveformTransformationBase
    {
        static constexpr std::string_view Name = "WaveformTransformationBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct WaveformTransformationChain
    {
        static constexpr std::string_view Name = "WaveformTransformationChain";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Transformations = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Transformations", 0x28, "ArrayProperty"},
        }};
    };

}
