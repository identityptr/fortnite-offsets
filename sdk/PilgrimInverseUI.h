/**
 * decamp dumper generated SDK
 * Package: /Script/PilgrimInverseUI
 */
#pragma once
#include "Basic.h"

// /Script/PilgrimInverseUI.PilgrimInverse_TiltOverdriveConfig
// Kind: ScriptStruct; super: none
struct FPilgrimInverse_TiltOverdriveConfig
{
public:
    std::int32_t NumberOfSamples; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t SampleIntervalInMS; // 0x0004 (Size: 0x4, Type: IntProperty)
    float Cooldown; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float TriggerTiltY; // 0x000C (Size: 0x4, Type: FloatProperty)
    std::uint8_t TriggerTiltTreshhold[0x18]; // 0x0010 (Size: 0x18, Type: StructProperty)
    std::uint8_t TriggerAccelTreshhold[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FPilgrimInverse_TiltOverdriveConfig, NumberOfSamples) == 0, "Offset mismatch for FPilgrimInverse_TiltOverdriveConfig::NumberOfSamples");
static_assert(offsetof(FPilgrimInverse_TiltOverdriveConfig, SampleIntervalInMS) == 4, "Offset mismatch for FPilgrimInverse_TiltOverdriveConfig::SampleIntervalInMS");
static_assert(offsetof(FPilgrimInverse_TiltOverdriveConfig, Cooldown) == 8, "Offset mismatch for FPilgrimInverse_TiltOverdriveConfig::Cooldown");
static_assert(offsetof(FPilgrimInverse_TiltOverdriveConfig, TriggerTiltY) == 12, "Offset mismatch for FPilgrimInverse_TiltOverdriveConfig::TriggerTiltY");
static_assert(offsetof(FPilgrimInverse_TiltOverdriveConfig, TriggerTiltTreshhold) == 16, "Offset mismatch for FPilgrimInverse_TiltOverdriveConfig::TriggerTiltTreshhold");
static_assert(offsetof(FPilgrimInverse_TiltOverdriveConfig, TriggerAccelTreshhold) == 40, "Offset mismatch for FPilgrimInverse_TiltOverdriveConfig::TriggerAccelTreshhold");

// /Script/PilgrimInverseUI.PIBacchusHUDDirectorComponent
// Kind: Class; super: DynamicBacchusHUDDirectorComponent
class UPIBacchusHUDDirectorComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate OnPlayerPawnRevived; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnPlayerPawnRespawned; // 0x00D0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UPIBacchusHUDDirectorComponent, OnPlayerPawnRevived) == 192, "Offset mismatch for UPIBacchusHUDDirectorComponent::OnPlayerPawnRevived");
static_assert(offsetof(UPIBacchusHUDDirectorComponent, OnPlayerPawnRespawned) == 208, "Offset mismatch for UPIBacchusHUDDirectorComponent::OnPlayerPawnRespawned");

// /Script/PilgrimInverseUI.PlayspaceComponent_PilgrimInverseUIManager
// Kind: Class; super: PlayspaceComponent
class UPlayspaceComponent_PilgrimInverseUIManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    void* LayoutDefinitions_Portrait; // 0x00C0 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> LayoutDefinitions_Portrait_Presets; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0001[0x70]; // 0x00D8
    std::uint8_t TiltOverdriveConfig[0x1]; // 0x0148 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPlayspaceComponent_PilgrimInverseUIManager, LayoutDefinitions_Portrait) == 192, "Offset mismatch for UPlayspaceComponent_PilgrimInverseUIManager::LayoutDefinitions_Portrait");
static_assert(offsetof(UPlayspaceComponent_PilgrimInverseUIManager, LayoutDefinitions_Portrait_Presets) == 200, "Offset mismatch for UPlayspaceComponent_PilgrimInverseUIManager::LayoutDefinitions_Portrait_Presets");
static_assert(offsetof(UPlayspaceComponent_PilgrimInverseUIManager, TiltOverdriveConfig) == 328, "Offset mismatch for UPlayspaceComponent_PilgrimInverseUIManager::TiltOverdriveConfig");
