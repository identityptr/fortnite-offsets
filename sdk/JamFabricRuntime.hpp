#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::JamFabricRuntime
{
    struct JamFabricPatchWrapper
    {
        static constexpr std::string_view Name = "JamFabricPatchWrapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FabricMetaSoundPatchWrapper";
        struct Offsets
        {
            static constexpr std::uintptr_t EnabledStateInputName = 0xE8;
            static constexpr std::uintptr_t MetaSoundPatch = 0xF0;
            static constexpr std::uintptr_t UserOptionsToNodeInputs = 0x110;
            static constexpr std::uintptr_t PerPlatformInputBools = 0x120;
            static constexpr std::uintptr_t PerPlatformInputInts = 0x130;
            static constexpr std::uintptr_t PerPlatformInputFloats = 0x140;
            static constexpr std::uintptr_t DirectInputs = 0x150;
            static constexpr std::uintptr_t SimpleSignalOutputBinding = 0x160;
            static constexpr std::uintptr_t OnSimpleSignalBindingUpdate = 0x1B0;
            static constexpr std::uintptr_t VisibleInputParamName = 0x1C0;
            static constexpr std::uintptr_t AudibleInputParamName = 0x1C4;
            static constexpr std::uintptr_t bCanConsumeVisibleFlag = 0x1C8;
            static constexpr std::uintptr_t bCanConsumeAudibleFlag = 0x1C9;
            static constexpr std::uintptr_t bIsVisible = 0x1CA;
            static constexpr std::uintptr_t bIsAudible = 0x1CB;
            static constexpr std::uintptr_t OnMaxAttenuationChanged = 0x1F0;
            static constexpr std::uintptr_t OnMetaSoundOutputIntChangedBatch = 0x200;
            static constexpr std::uintptr_t OnMetaSoundOutputFloatChangedBatch = 0x210;
            static constexpr std::uintptr_t CurrentManager = 0x220;
            static constexpr std::uintptr_t TickSubsystem = 0x228;
            static constexpr std::uintptr_t CurrentNode = 0x230;
            static constexpr std::uintptr_t PositionalProxyActor = 0x2E0;
            static constexpr std::uintptr_t CurrentAudioComponent = 0x308;
            static constexpr std::uintptr_t NewAudioComponent = 0x310;
            static constexpr std::uintptr_t CombinerMetaSoundType = 0x328;
            static constexpr std::uintptr_t AnalyzerMetaSoundType = 0x32C;
            static constexpr std::uintptr_t MetaSoundRuntimeInputInfos = 0x330;
            static constexpr std::uintptr_t ConnectedInputWrappers = 0x340;
            static constexpr std::uintptr_t PendingInputWrappers = 0x350;
            static constexpr std::uintptr_t PendingOutputWrappers = 0x360;
            static constexpr std::uintptr_t ConnectionBuilder = 0x370;
            static constexpr std::uintptr_t CombinersInUse = 0x440;
            static constexpr std::uintptr_t ConnectedOutputWrappers = 0x450;
            static constexpr std::uintptr_t PatchWrapperQuality = 0x460;
            static constexpr std::uintptr_t MaxAttenuation = 0x461;
            static constexpr std::uintptr_t LoadedMetaSoundPatch = 0x478;
        };

        inline static constexpr std::array<PropertyInfo, 36> Properties{{
            {"EnabledStateInputName", 0xE8, "NameProperty"},
            {"MetaSoundPatch", 0xF0, "SoftObjectProperty"},
            {"UserOptionsToNodeInputs", 0x110, "MapProperty"},
            {"PerPlatformInputBools", 0x120, "ArrayProperty"},
            {"PerPlatformInputInts", 0x130, "ArrayProperty"},
            {"PerPlatformInputFloats", 0x140, "ArrayProperty"},
            {"DirectInputs", 0x150, "ArrayProperty"},
            {"SimpleSignalOutputBinding", 0x160, "StructProperty"},
            {"OnSimpleSignalBindingUpdate", 0x1B0, "MulticastInlineDelegateProperty"},
            {"VisibleInputParamName", 0x1C0, "NameProperty"},
            {"AudibleInputParamName", 0x1C4, "NameProperty"},
            {"bCanConsumeVisibleFlag", 0x1C8, "BoolProperty"},
            {"bCanConsumeAudibleFlag", 0x1C9, "BoolProperty"},
            {"bIsVisible", 0x1CA, "BoolProperty"},
            {"bIsAudible", 0x1CB, "BoolProperty"},
            {"OnMaxAttenuationChanged", 0x1F0, "MulticastInlineDelegateProperty"},
            {"OnMetaSoundOutputIntChangedBatch", 0x200, "MulticastInlineDelegateProperty"},
            {"OnMetaSoundOutputFloatChangedBatch", 0x210, "MulticastInlineDelegateProperty"},
            {"CurrentManager", 0x220, "ObjectProperty"},
            {"TickSubsystem", 0x228, "WeakObjectProperty"},
            {"CurrentNode", 0x230, "StructProperty"},
            {"PositionalProxyActor", 0x2E0, "WeakObjectProperty"},
            {"CurrentAudioComponent", 0x308, "WeakObjectProperty"},
            {"NewAudioComponent", 0x310, "WeakObjectProperty"},
            {"CombinerMetaSoundType", 0x328, "NameProperty"},
            {"AnalyzerMetaSoundType", 0x32C, "NameProperty"},
            {"MetaSoundRuntimeInputInfos", 0x330, "ArrayProperty"},
            {"ConnectedInputWrappers", 0x340, "ArrayProperty"},
            {"PendingInputWrappers", 0x350, "ArrayProperty"},
            {"PendingOutputWrappers", 0x360, "ArrayProperty"},
            {"ConnectionBuilder", 0x370, "StructProperty"},
            {"CombinersInUse", 0x440, "ArrayProperty"},
            {"ConnectedOutputWrappers", 0x450, "ArrayProperty"},
            {"PatchWrapperQuality", 0x460, "EnumProperty"},
            {"MaxAttenuation", 0x461, "EnumProperty"},
            {"LoadedMetaSoundPatch", 0x478, "ObjectProperty"},
        }};
    };

    struct JamSessionComponent_JamFabricBridge
    {
        static constexpr std::string_view Name = "JamSessionComponent_JamFabricBridge";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DeviceCableManagerClass = 0xC8;
            static constexpr std::uintptr_t FabricPatchWrapperClass = 0xD0;
            static constexpr std::uintptr_t FabricMusicEventTag = 0xD8;
            static constexpr std::uintptr_t FabricControlsJamTag = 0xDC;
            static constexpr std::uintptr_t FabricPatchWrapperInstance = 0xE0;
            static constexpr std::uintptr_t SyncType = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DeviceCableManagerClass", 0xC8, "ClassProperty"},
            {"FabricPatchWrapperClass", 0xD0, "ClassProperty"},
            {"FabricMusicEventTag", 0xD8, "StructProperty"},
            {"FabricControlsJamTag", 0xDC, "StructProperty"},
            {"FabricPatchWrapperInstance", 0xE0, "ObjectProperty"},
            {"SyncType", 0xE8, "EnumProperty"},
        }};
    };

}
