/**
 * decamp dumper generated SDK
 * Package: /Script/FNE_Galileo_VerseRuntime
 */
#pragma once
#include "Basic.h"

// /Script/FNE_Galileo_VerseRuntime.AkitaForcePowerFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAkitaForcePowerFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FNE_Galileo_VerseRuntime.AkitaLightsaberFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UAkitaLightsaberFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/FNE_Galileo_VerseRuntime.LightsaberBladeConfigComponent
// Kind: Class; super: ActorComponent
class ULightsaberBladeConfigComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    FMulticastInlineDelegate MaterialParamsChanged; // 0x00C0 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    std::uint8_t MaterialParams[0x1]; // 0x00D0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(ULightsaberBladeConfigComponent, MaterialParamsChanged) == 192, "Offset mismatch for ULightsaberBladeConfigComponent::MaterialParamsChanged");
static_assert(offsetof(ULightsaberBladeConfigComponent, MaterialParams) == 208, "Offset mismatch for ULightsaberBladeConfigComponent::MaterialParams");
