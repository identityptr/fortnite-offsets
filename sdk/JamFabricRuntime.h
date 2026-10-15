/**
 * decamp dumper generated SDK
 * Package: /Script/JamFabricRuntime
 */
#pragma once
#include "Basic.h"

// /Script/JamFabricRuntime.JamFabricPatchWrapper
// Kind: Class; super: FabricMetaSoundPatchWrapper
class UJamFabricPatchWrapper
{
public:
    std::uint8_t Pad_0000[0xE8]; // 0x0000
    FName EnabledStateInputName; // 0x00E8 (Size: 0x8, Type: NameProperty)
    std::uint8_t MetaSoundPatch[0x20]; // 0x00F0 (Size: 0x20, Type: SoftObjectProperty)
    TMap<void*, void*> UserOptionsToNodeInputs; // 0x0110 (Size: 0x10, Type: MapProperty)
    TArray<void*> PerPlatformInputBools; // 0x0120 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PerPlatformInputInts; // 0x0130 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PerPlatformInputFloats; // 0x0140 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> DirectInputs; // 0x0150 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SimpleSignalOutputBinding[0x50]; // 0x0160 (Size: 0x50, Type: StructProperty)
    FMulticastInlineDelegate OnSimpleSignalBindingUpdate; // 0x01B0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t VisibleInputParamName[0x4]; // 0x01C0 (Size: 0x4, Type: NameProperty)
    std::uint8_t AudibleInputParamName[0x4]; // 0x01C4 (Size: 0x4, Type: NameProperty)
    std::uint8_t bCanConsumeVisibleFlag; // 0x01C8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bCanConsumeAudibleFlag; // 0x01C9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsVisible; // 0x01CA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bIsAudible; // 0x01CB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x24]; // 0x01CC
    FMulticastInlineDelegate OnMaxAttenuationChanged; // 0x01F0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMetaSoundOutputIntChangedBatch; // 0x0200 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMetaSoundOutputFloatChangedBatch; // 0x0210 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* CurrentManager; // 0x0220 (Size: 0x8, Type: ObjectProperty)
    TWeakObjectPtr<void> TickSubsystem; // 0x0228 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t CurrentNode[0xB0]; // 0x0230 (Size: 0xB0, Type: StructProperty)
    TWeakObjectPtr<void> PositionalProxyActor; // 0x02E0 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0002[0x20]; // 0x02E8
    TWeakObjectPtr<void> CurrentAudioComponent; // 0x0308 (Size: 0x8, Type: WeakObjectProperty)
    TWeakObjectPtr<void> NewAudioComponent; // 0x0310 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0003[0x10]; // 0x0318
    std::uint8_t CombinerMetaSoundType[0x4]; // 0x0328 (Size: 0x4, Type: NameProperty)
    std::uint8_t AnalyzerMetaSoundType[0x4]; // 0x032C (Size: 0x4, Type: NameProperty)
    TArray<void*> MetaSoundRuntimeInputInfos; // 0x0330 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ConnectedInputWrappers; // 0x0340 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendingInputWrappers; // 0x0350 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PendingOutputWrappers; // 0x0360 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ConnectionBuilder[0xD0]; // 0x0370 (Size: 0xD0, Type: StructProperty)
    TArray<void*> CombinersInUse; // 0x0440 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ConnectedOutputWrappers; // 0x0450 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t PatchWrapperQuality; // 0x0460 (Size: 0x1, Type: EnumProperty)
    std::uint8_t MaxAttenuation; // 0x0461 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0004[0x16]; // 0x0462
    void* LoadedMetaSoundPatch; // 0x0478 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJamFabricPatchWrapper, EnabledStateInputName) == 232, "Offset mismatch for UJamFabricPatchWrapper::EnabledStateInputName");
static_assert(offsetof(UJamFabricPatchWrapper, MetaSoundPatch) == 240, "Offset mismatch for UJamFabricPatchWrapper::MetaSoundPatch");
static_assert(offsetof(UJamFabricPatchWrapper, UserOptionsToNodeInputs) == 272, "Offset mismatch for UJamFabricPatchWrapper::UserOptionsToNodeInputs");
static_assert(offsetof(UJamFabricPatchWrapper, PerPlatformInputBools) == 288, "Offset mismatch for UJamFabricPatchWrapper::PerPlatformInputBools");
static_assert(offsetof(UJamFabricPatchWrapper, PerPlatformInputInts) == 304, "Offset mismatch for UJamFabricPatchWrapper::PerPlatformInputInts");
static_assert(offsetof(UJamFabricPatchWrapper, PerPlatformInputFloats) == 320, "Offset mismatch for UJamFabricPatchWrapper::PerPlatformInputFloats");
static_assert(offsetof(UJamFabricPatchWrapper, DirectInputs) == 336, "Offset mismatch for UJamFabricPatchWrapper::DirectInputs");
static_assert(offsetof(UJamFabricPatchWrapper, SimpleSignalOutputBinding) == 352, "Offset mismatch for UJamFabricPatchWrapper::SimpleSignalOutputBinding");
static_assert(offsetof(UJamFabricPatchWrapper, OnSimpleSignalBindingUpdate) == 432, "Offset mismatch for UJamFabricPatchWrapper::OnSimpleSignalBindingUpdate");
static_assert(offsetof(UJamFabricPatchWrapper, VisibleInputParamName) == 448, "Offset mismatch for UJamFabricPatchWrapper::VisibleInputParamName");
static_assert(offsetof(UJamFabricPatchWrapper, AudibleInputParamName) == 452, "Offset mismatch for UJamFabricPatchWrapper::AudibleInputParamName");
static_assert(offsetof(UJamFabricPatchWrapper, bCanConsumeVisibleFlag) == 456, "Offset mismatch for UJamFabricPatchWrapper::bCanConsumeVisibleFlag");
static_assert(offsetof(UJamFabricPatchWrapper, bCanConsumeAudibleFlag) == 457, "Offset mismatch for UJamFabricPatchWrapper::bCanConsumeAudibleFlag");
static_assert(offsetof(UJamFabricPatchWrapper, bIsVisible) == 458, "Offset mismatch for UJamFabricPatchWrapper::bIsVisible");
static_assert(offsetof(UJamFabricPatchWrapper, bIsAudible) == 459, "Offset mismatch for UJamFabricPatchWrapper::bIsAudible");
static_assert(offsetof(UJamFabricPatchWrapper, OnMaxAttenuationChanged) == 496, "Offset mismatch for UJamFabricPatchWrapper::OnMaxAttenuationChanged");
static_assert(offsetof(UJamFabricPatchWrapper, OnMetaSoundOutputIntChangedBatch) == 512, "Offset mismatch for UJamFabricPatchWrapper::OnMetaSoundOutputIntChangedBatch");
static_assert(offsetof(UJamFabricPatchWrapper, OnMetaSoundOutputFloatChangedBatch) == 528, "Offset mismatch for UJamFabricPatchWrapper::OnMetaSoundOutputFloatChangedBatch");
static_assert(offsetof(UJamFabricPatchWrapper, CurrentManager) == 544, "Offset mismatch for UJamFabricPatchWrapper::CurrentManager");
static_assert(offsetof(UJamFabricPatchWrapper, TickSubsystem) == 552, "Offset mismatch for UJamFabricPatchWrapper::TickSubsystem");
static_assert(offsetof(UJamFabricPatchWrapper, CurrentNode) == 560, "Offset mismatch for UJamFabricPatchWrapper::CurrentNode");
static_assert(offsetof(UJamFabricPatchWrapper, PositionalProxyActor) == 736, "Offset mismatch for UJamFabricPatchWrapper::PositionalProxyActor");
static_assert(offsetof(UJamFabricPatchWrapper, CurrentAudioComponent) == 776, "Offset mismatch for UJamFabricPatchWrapper::CurrentAudioComponent");
static_assert(offsetof(UJamFabricPatchWrapper, NewAudioComponent) == 784, "Offset mismatch for UJamFabricPatchWrapper::NewAudioComponent");
static_assert(offsetof(UJamFabricPatchWrapper, CombinerMetaSoundType) == 808, "Offset mismatch for UJamFabricPatchWrapper::CombinerMetaSoundType");
static_assert(offsetof(UJamFabricPatchWrapper, AnalyzerMetaSoundType) == 812, "Offset mismatch for UJamFabricPatchWrapper::AnalyzerMetaSoundType");
static_assert(offsetof(UJamFabricPatchWrapper, MetaSoundRuntimeInputInfos) == 816, "Offset mismatch for UJamFabricPatchWrapper::MetaSoundRuntimeInputInfos");
static_assert(offsetof(UJamFabricPatchWrapper, ConnectedInputWrappers) == 832, "Offset mismatch for UJamFabricPatchWrapper::ConnectedInputWrappers");
static_assert(offsetof(UJamFabricPatchWrapper, PendingInputWrappers) == 848, "Offset mismatch for UJamFabricPatchWrapper::PendingInputWrappers");
static_assert(offsetof(UJamFabricPatchWrapper, PendingOutputWrappers) == 864, "Offset mismatch for UJamFabricPatchWrapper::PendingOutputWrappers");
static_assert(offsetof(UJamFabricPatchWrapper, ConnectionBuilder) == 880, "Offset mismatch for UJamFabricPatchWrapper::ConnectionBuilder");
static_assert(offsetof(UJamFabricPatchWrapper, CombinersInUse) == 1088, "Offset mismatch for UJamFabricPatchWrapper::CombinersInUse");
static_assert(offsetof(UJamFabricPatchWrapper, ConnectedOutputWrappers) == 1104, "Offset mismatch for UJamFabricPatchWrapper::ConnectedOutputWrappers");
static_assert(offsetof(UJamFabricPatchWrapper, PatchWrapperQuality) == 1120, "Offset mismatch for UJamFabricPatchWrapper::PatchWrapperQuality");
static_assert(offsetof(UJamFabricPatchWrapper, MaxAttenuation) == 1121, "Offset mismatch for UJamFabricPatchWrapper::MaxAttenuation");
static_assert(offsetof(UJamFabricPatchWrapper, LoadedMetaSoundPatch) == 1144, "Offset mismatch for UJamFabricPatchWrapper::LoadedMetaSoundPatch");

// /Script/JamFabricRuntime.JamSessionComponent_JamFabricBridge
// Kind: Class; super: ActorComponent
class UJamSessionComponent_JamFabricBridge
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    void* DeviceCableManagerClass; // 0x00C8 (Size: 0x8, Type: ClassProperty)
    void* FabricPatchWrapperClass; // 0x00D0 (Size: 0x8, Type: ClassProperty)
    std::uint8_t FabricMusicEventTag[0x4]; // 0x00D8 (Size: 0x4, Type: StructProperty)
    std::uint8_t FabricControlsJamTag[0x4]; // 0x00DC (Size: 0x4, Type: StructProperty)
    void* FabricPatchWrapperInstance; // 0x00E0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SyncType; // 0x00E8 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UJamSessionComponent_JamFabricBridge, DeviceCableManagerClass) == 200, "Offset mismatch for UJamSessionComponent_JamFabricBridge::DeviceCableManagerClass");
static_assert(offsetof(UJamSessionComponent_JamFabricBridge, FabricPatchWrapperClass) == 208, "Offset mismatch for UJamSessionComponent_JamFabricBridge::FabricPatchWrapperClass");
static_assert(offsetof(UJamSessionComponent_JamFabricBridge, FabricMusicEventTag) == 216, "Offset mismatch for UJamSessionComponent_JamFabricBridge::FabricMusicEventTag");
static_assert(offsetof(UJamSessionComponent_JamFabricBridge, FabricControlsJamTag) == 220, "Offset mismatch for UJamSessionComponent_JamFabricBridge::FabricControlsJamTag");
static_assert(offsetof(UJamSessionComponent_JamFabricBridge, FabricPatchWrapperInstance) == 224, "Offset mismatch for UJamSessionComponent_JamFabricBridge::FabricPatchWrapperInstance");
static_assert(offsetof(UJamSessionComponent_JamFabricBridge, SyncType) == 232, "Offset mismatch for UJamSessionComponent_JamFabricBridge::SyncType");
