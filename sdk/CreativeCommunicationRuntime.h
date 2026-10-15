/**
 * decamp dumper generated SDK
 * Package: /Script/CreativeCommunicationRuntime
 */
#pragma once
#include "Basic.h"

// /Script/CreativeCommunicationRuntime.CreativeBubbleChatSettings
// Kind: ScriptStruct; super: none
struct FCreativeBubbleChatSettings
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float MaximumRange; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float MinLifetime; // 0x0008 (Size: 0x4, Type: FloatProperty)
    float MaxLifetime; // 0x000C (Size: 0x4, Type: FloatProperty)
    float ClampToScreenMaxDistance; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bOcculdeBubble; // 0x0014 (Size: 0x1, Type: BoolProperty)
    std::uint8_t BubbleChatStyle; // 0x0015 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0016
    TSoftClassPtr<void> CustomBubbleChatWidgetClass; // 0x0018 (Size: 0x28, Type: SoftClassProperty)
};

static_assert(offsetof(FCreativeBubbleChatSettings, bEnabled) == 0, "Offset mismatch for FCreativeBubbleChatSettings::bEnabled");
static_assert(offsetof(FCreativeBubbleChatSettings, MaximumRange) == 4, "Offset mismatch for FCreativeBubbleChatSettings::MaximumRange");
static_assert(offsetof(FCreativeBubbleChatSettings, MinLifetime) == 8, "Offset mismatch for FCreativeBubbleChatSettings::MinLifetime");
static_assert(offsetof(FCreativeBubbleChatSettings, MaxLifetime) == 12, "Offset mismatch for FCreativeBubbleChatSettings::MaxLifetime");
static_assert(offsetof(FCreativeBubbleChatSettings, ClampToScreenMaxDistance) == 16, "Offset mismatch for FCreativeBubbleChatSettings::ClampToScreenMaxDistance");
static_assert(offsetof(FCreativeBubbleChatSettings, bOcculdeBubble) == 20, "Offset mismatch for FCreativeBubbleChatSettings::bOcculdeBubble");
static_assert(offsetof(FCreativeBubbleChatSettings, BubbleChatStyle) == 21, "Offset mismatch for FCreativeBubbleChatSettings::BubbleChatStyle");
static_assert(offsetof(FCreativeBubbleChatSettings, CustomBubbleChatWidgetClass) == 24, "Offset mismatch for FCreativeBubbleChatSettings::CustomBubbleChatWidgetClass");

// /Script/CreativeCommunicationRuntime.CreativeCommunicationOverrideBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UCreativeCommunicationOverrideBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CreativeCommunicationRuntime.CreativeGameStateComponent_CommunicationOverride
// Kind: Class; super: FortGameStateComponent_CommunicationOverride
class UCreativeGameStateComponent_CommunicationOverride
{
public:
    std::uint8_t Pad_0000[0x1A0]; // 0x0000
    FMulticastInlineDelegate OnCreativeBubbleChatSettingsUpdated; // 0x01A0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* CachedMinigame; // 0x01B0 (Size: 0x8, Type: ObjectProperty)
    void* SproutStyleBubbleChatWidgetScene; // 0x01B8 (Size: 0x8, Type: ObjectProperty)
    void* ProximityChatDebugWidgetScene; // 0x01C0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CreativeBubbleChatSettings[0x38]; // 0x01C8 (Size: 0x38, Type: StructProperty)
    std::uint8_t BubbleChatEnabled[0x28]; // 0x0200 (Size: 0x28, Type: StructProperty)
    std::uint8_t BubbleChatMaximumRange[0x28]; // 0x0228 (Size: 0x28, Type: StructProperty)
    std::uint8_t BubbleChatMinLifetime[0x28]; // 0x0250 (Size: 0x28, Type: StructProperty)
    std::uint8_t BubbleChatMaxLifetime[0x28]; // 0x0278 (Size: 0x28, Type: StructProperty)
    std::uint8_t BubbleChatOcculdeBubble[0x28]; // 0x02A0 (Size: 0x28, Type: StructProperty)
    std::uint8_t BubbleChatClampToScreenMaxDistance[0x28]; // 0x02C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t BubbleChatStyle[0x1]; // 0x02F0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCreativeGameStateComponent_CommunicationOverride, OnCreativeBubbleChatSettingsUpdated) == 416, "Offset mismatch for UCreativeGameStateComponent_CommunicationOverride::OnCreativeBubbleChatSettingsUpdated");
static_assert(offsetof(UCreativeGameStateComponent_CommunicationOverride, CachedMinigame) == 432, "Offset mismatch for UCreativeGameStateComponent_CommunicationOverride::CachedMinigame");
static_assert(offsetof(UCreativeGameStateComponent_CommunicationOverride, SproutStyleBubbleChatWidgetScene) == 440, "Offset mismatch for UCreativeGameStateComponent_CommunicationOverride::SproutStyleBubbleChatWidgetScene");
static_assert(offsetof(UCreativeGameStateComponent_CommunicationOverride, ProximityChatDebugWidgetScene) == 448, "Offset mismatch for UCreativeGameStateComponent_CommunicationOverride::ProximityChatDebugWidgetScene");
static_assert(offsetof(UCreativeGameStateComponent_CommunicationOverride, CreativeBubbleChatSettings) == 456, "Offset mismatch for UCreativeGameStateComponent_CommunicationOverride::CreativeBubbleChatSettings");
static_assert(offsetof(UCreativeGameStateComponent_CommunicationOverride, BubbleChatEnabled) == 512, "Offset mismatch for UCreativeGameStateComponent_CommunicationOverride::BubbleChatEnabled");
static_assert(offsetof(UCreativeGameStateComponent_CommunicationOverride, BubbleChatMaximumRange) == 552, "Offset mismatch for UCreativeGameStateComponent_CommunicationOverride::BubbleChatMaximumRange");
static_assert(offsetof(UCreativeGameStateComponent_CommunicationOverride, BubbleChatMinLifetime) == 592, "Offset mismatch for UCreativeGameStateComponent_CommunicationOverride::BubbleChatMinLifetime");
static_assert(offsetof(UCreativeGameStateComponent_CommunicationOverride, BubbleChatMaxLifetime) == 632, "Offset mismatch for UCreativeGameStateComponent_CommunicationOverride::BubbleChatMaxLifetime");
static_assert(offsetof(UCreativeGameStateComponent_CommunicationOverride, BubbleChatOcculdeBubble) == 672, "Offset mismatch for UCreativeGameStateComponent_CommunicationOverride::BubbleChatOcculdeBubble");
static_assert(offsetof(UCreativeGameStateComponent_CommunicationOverride, BubbleChatClampToScreenMaxDistance) == 712, "Offset mismatch for UCreativeGameStateComponent_CommunicationOverride::BubbleChatClampToScreenMaxDistance");
static_assert(offsetof(UCreativeGameStateComponent_CommunicationOverride, BubbleChatStyle) == 752, "Offset mismatch for UCreativeGameStateComponent_CommunicationOverride::BubbleChatStyle");
