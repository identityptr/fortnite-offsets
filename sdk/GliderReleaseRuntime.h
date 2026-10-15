/**
 * decamp dumper generated SDK
 * Package: /Script/GliderReleaseRuntime
 */
#pragma once
#include "Basic.h"

// /Script/GliderReleaseRuntime.FortEvent_GliderReleaseAltitudeMeterVisibilityChanged
// Kind: ScriptStruct; super: none
struct FFortEvent_GliderReleaseAltitudeMeterVisibilityChanged
{
public:
    std::uint8_t bShouldShow; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortEvent_GliderReleaseAltitudeMeterVisibilityChanged, bShouldShow) == 0, "Offset mismatch for FFortEvent_GliderReleaseAltitudeMeterVisibilityChanged::bShouldShow");

// /Script/GliderReleaseRuntime.FortEvent_GliderReleaseGliderDeployAltitudeChanged
// Kind: ScriptStruct; super: none
struct FFortEvent_GliderReleaseGliderDeployAltitudeChanged
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GliderReleaseRuntime.FortEvent_GliderReleaseGliderPromptVisibilityChanged
// Kind: ScriptStruct; super: none
struct FFortEvent_GliderReleaseGliderPromptVisibilityChanged
{
public:
    std::uint8_t bShouldShow; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortEvent_GliderReleaseGliderPromptVisibilityChanged, bShouldShow) == 0, "Offset mismatch for FFortEvent_GliderReleaseGliderPromptVisibilityChanged::bShouldShow");

// /Script/GliderReleaseRuntime.FortEvent_GliderReleaseMovementModeExtensionActivationChanged
// Kind: ScriptStruct; super: none
struct FFortEvent_GliderReleaseMovementModeExtensionActivationChanged
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GliderReleaseRuntime.FortEvent_GliderReleasePlayerDistanceToGroundChanged
// Kind: ScriptStruct; super: none
struct FFortEvent_GliderReleasePlayerDistanceToGroundChanged
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GliderReleaseRuntime.FortEvent_GliderReleasePrimaryActionBlockedChanged
// Kind: ScriptStruct; super: none
struct FFortEvent_GliderReleasePrimaryActionBlockedChanged
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GliderReleaseRuntime.FortEvent_GliderReleaseShouldShowDangerWarningChanged
// Kind: ScriptStruct; super: none
struct FFortEvent_GliderReleaseShouldShowDangerWarningChanged
{
public:
    std::uint8_t bShouldShow; // 0x0000 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FFortEvent_GliderReleaseShouldShowDangerWarningChanged, bShouldShow) == 0, "Offset mismatch for FFortEvent_GliderReleaseShouldShowDangerWarningChanged::bShouldShow");

// /Script/GliderReleaseRuntime.FortEvent_GliderReleaseSkydivingStateChanged
// Kind: ScriptStruct; super: none
struct FFortEvent_GliderReleaseSkydivingStateChanged
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GliderReleaseRuntime.FortControllerComponent_GliderRelease
// Kind: Class; super: FortControllerComponent
class UFortControllerComponent_GliderRelease
{
public:
    std::uint8_t Pad_0000[0xC8]; // 0x0000
    std::uint8_t DangerDistanceToGroundThreshold[0x28]; // 0x00C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t DangerVelocityThreshold[0x28]; // 0x00F0 (Size: 0x28, Type: StructProperty)
    std::uint8_t SkydivingMovementModeTag[0x4]; // 0x0118 (Size: 0x4, Type: StructProperty)
    std::uint8_t ParachutingMovementModeTag[0x4]; // 0x011C (Size: 0x4, Type: StructProperty)
    std::uint8_t GroundRushMovementModeExtensionTag[0x8]; // 0x0120 (Size: 0x8, Type: StructProperty)
    void* PlaylistReadyAction; // 0x0128 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UFortControllerComponent_GliderRelease, DangerDistanceToGroundThreshold) == 200, "Offset mismatch for UFortControllerComponent_GliderRelease::DangerDistanceToGroundThreshold");
static_assert(offsetof(UFortControllerComponent_GliderRelease, DangerVelocityThreshold) == 240, "Offset mismatch for UFortControllerComponent_GliderRelease::DangerVelocityThreshold");
static_assert(offsetof(UFortControllerComponent_GliderRelease, SkydivingMovementModeTag) == 280, "Offset mismatch for UFortControllerComponent_GliderRelease::SkydivingMovementModeTag");
static_assert(offsetof(UFortControllerComponent_GliderRelease, ParachutingMovementModeTag) == 284, "Offset mismatch for UFortControllerComponent_GliderRelease::ParachutingMovementModeTag");
static_assert(offsetof(UFortControllerComponent_GliderRelease, GroundRushMovementModeExtensionTag) == 288, "Offset mismatch for UFortControllerComponent_GliderRelease::GroundRushMovementModeExtensionTag");
static_assert(offsetof(UFortControllerComponent_GliderRelease, PlaylistReadyAction) == 296, "Offset mismatch for UFortControllerComponent_GliderRelease::PlaylistReadyAction");

// /Script/GliderReleaseRuntime.GliderReleaseFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UGliderReleaseFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};
