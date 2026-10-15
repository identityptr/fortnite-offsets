/**
 * decamp dumper generated SDK
 * Package: /Script/ExperienceSettings
 */
#pragma once
#include "Basic.h"

// /Script/ExperienceSettings.FortUserOptionComponent_Cosmetic
// Kind: Class; super: FortUserOptionContainerComponent
class UFortUserOptionComponent_Cosmetic
{
public:
    std::uint8_t Pad_0000[0xE0]; // 0x0000
    std::uint8_t UserOptionData[0x60]; // 0x00E0 (Size: 0x60, Type: StructProperty)
    TArray<void*> BehaviorSetNodes; // 0x0140 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UFortUserOptionComponent_Cosmetic, UserOptionData) == 224, "Offset mismatch for UFortUserOptionComponent_Cosmetic::UserOptionData");
static_assert(offsetof(UFortUserOptionComponent_Cosmetic, BehaviorSetNodes) == 320, "Offset mismatch for UFortUserOptionComponent_Cosmetic::BehaviorSetNodes");

// /Script/ExperienceSettings.FortUserOptionComponent_Music
// Kind: Class; super: FortUserOptionContainerComponent
class UFortUserOptionComponent_Music
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    FString JamEnabledPropertyName; // 0x0150 (Size: 0x10, Type: StrProperty)
    std::uint8_t bJamEnabled; // 0x0160 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortUserOptionComponent_Music, JamEnabledPropertyName) == 336, "Offset mismatch for UFortUserOptionComponent_Music::JamEnabledPropertyName");
static_assert(offsetof(UFortUserOptionComponent_Music, bJamEnabled) == 352, "Offset mismatch for UFortUserOptionComponent_Music::bJamEnabled");

// /Script/ExperienceSettings.FortUserOptionComponent_VoiceChat
// Kind: Class; super: FortUserOptionContainerComponent
class UFortUserOptionComponent_VoiceChat
{
public:
    std::uint8_t Pad_0000[0x150]; // 0x0000
    std::uint8_t AttenuationShape; // 0x0150 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0151
    float FullVolumeConeAngle; // 0x0154 (Size: 0x4, Type: FloatProperty)
    float FalloffConeAngle; // 0x0158 (Size: 0x4, Type: FloatProperty)
    float FullVolumeSphereDistance; // 0x015C (Size: 0x4, Type: FloatProperty)
    float FalloffSphereDistance; // 0x0160 (Size: 0x4, Type: FloatProperty)
    std::uint8_t AttenuationFunction; // 0x0164 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bVoiceSpatialized; // 0x0165 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bOccludeSpeakers; // 0x0166 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x1]; // 0x0167
    float OcclusionVolumeMultiplier; // 0x0168 (Size: 0x4, Type: FloatProperty)
    float OcclusionLowPassFilterFrequency; // 0x016C (Size: 0x4, Type: FloatProperty)
    float OcclusionInterpolationTime; // 0x0170 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bFocusedListening; // 0x0174 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x3]; // 0x0175
    float FocusFullVolumeAngle; // 0x0178 (Size: 0x4, Type: FloatProperty)
    float FocusFalloffAngle; // 0x017C (Size: 0x4, Type: FloatProperty)
    float MinimumUnfocusedMultiplier; // 0x0180 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SpatialVoiceVersion[0x4]; // 0x0184 (Size: 0x4, Type: StructProperty)
    FString ProximityChatPropertyName; // 0x0188 (Size: 0x10, Type: StrProperty)
    void* DataRegistrySettingsComponent; // 0x0198 (Size: 0x8, Type: ClassProperty)
    std::uint8_t bProximityChatEnabled; // 0x01A0 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UFortUserOptionComponent_VoiceChat, AttenuationShape) == 336, "Offset mismatch for UFortUserOptionComponent_VoiceChat::AttenuationShape");
static_assert(offsetof(UFortUserOptionComponent_VoiceChat, FullVolumeConeAngle) == 340, "Offset mismatch for UFortUserOptionComponent_VoiceChat::FullVolumeConeAngle");
static_assert(offsetof(UFortUserOptionComponent_VoiceChat, FalloffConeAngle) == 344, "Offset mismatch for UFortUserOptionComponent_VoiceChat::FalloffConeAngle");
static_assert(offsetof(UFortUserOptionComponent_VoiceChat, FullVolumeSphereDistance) == 348, "Offset mismatch for UFortUserOptionComponent_VoiceChat::FullVolumeSphereDistance");
static_assert(offsetof(UFortUserOptionComponent_VoiceChat, FalloffSphereDistance) == 352, "Offset mismatch for UFortUserOptionComponent_VoiceChat::FalloffSphereDistance");
static_assert(offsetof(UFortUserOptionComponent_VoiceChat, AttenuationFunction) == 356, "Offset mismatch for UFortUserOptionComponent_VoiceChat::AttenuationFunction");
static_assert(offsetof(UFortUserOptionComponent_VoiceChat, bVoiceSpatialized) == 357, "Offset mismatch for UFortUserOptionComponent_VoiceChat::bVoiceSpatialized");
static_assert(offsetof(UFortUserOptionComponent_VoiceChat, bOccludeSpeakers) == 358, "Offset mismatch for UFortUserOptionComponent_VoiceChat::bOccludeSpeakers");
static_assert(offsetof(UFortUserOptionComponent_VoiceChat, OcclusionVolumeMultiplier) == 360, "Offset mismatch for UFortUserOptionComponent_VoiceChat::OcclusionVolumeMultiplier");
static_assert(offsetof(UFortUserOptionComponent_VoiceChat, OcclusionLowPassFilterFrequency) == 364, "Offset mismatch for UFortUserOptionComponent_VoiceChat::OcclusionLowPassFilterFrequency");
static_assert(offsetof(UFortUserOptionComponent_VoiceChat, OcclusionInterpolationTime) == 368, "Offset mismatch for UFortUserOptionComponent_VoiceChat::OcclusionInterpolationTime");
static_assert(offsetof(UFortUserOptionComponent_VoiceChat, bFocusedListening) == 372, "Offset mismatch for UFortUserOptionComponent_VoiceChat::bFocusedListening");
static_assert(offsetof(UFortUserOptionComponent_VoiceChat, FocusFullVolumeAngle) == 376, "Offset mismatch for UFortUserOptionComponent_VoiceChat::FocusFullVolumeAngle");
static_assert(offsetof(UFortUserOptionComponent_VoiceChat, FocusFalloffAngle) == 380, "Offset mismatch for UFortUserOptionComponent_VoiceChat::FocusFalloffAngle");
static_assert(offsetof(UFortUserOptionComponent_VoiceChat, MinimumUnfocusedMultiplier) == 384, "Offset mismatch for UFortUserOptionComponent_VoiceChat::MinimumUnfocusedMultiplier");
static_assert(offsetof(UFortUserOptionComponent_VoiceChat, SpatialVoiceVersion) == 388, "Offset mismatch for UFortUserOptionComponent_VoiceChat::SpatialVoiceVersion");
static_assert(offsetof(UFortUserOptionComponent_VoiceChat, ProximityChatPropertyName) == 392, "Offset mismatch for UFortUserOptionComponent_VoiceChat::ProximityChatPropertyName");
static_assert(offsetof(UFortUserOptionComponent_VoiceChat, DataRegistrySettingsComponent) == 408, "Offset mismatch for UFortUserOptionComponent_VoiceChat::DataRegistrySettingsComponent");
static_assert(offsetof(UFortUserOptionComponent_VoiceChat, bProximityChatEnabled) == 416, "Offset mismatch for UFortUserOptionComponent_VoiceChat::bProximityChatEnabled");

// /Script/ExperienceSettings.Newton_UserOptionFilterComponent
// Kind: Class; super: FortUserOptionFilterComponent
class UNewton_UserOptionFilterComponent
{
public:
    std::uint8_t Pad_0000[0x100]; // 0x0000
    TArray<void*> CategoriesToHide; // 0x0100 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UNewton_UserOptionFilterComponent, CategoriesToHide) == 256, "Offset mismatch for UNewton_UserOptionFilterComponent::CategoriesToHide");
