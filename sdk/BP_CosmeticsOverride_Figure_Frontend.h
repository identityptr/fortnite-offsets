/**
 * decamp dumper generated SDK
 * Package: /FigureJamInLobby/Blueprint/BP_CosmeticsOverride_Figure_Frontend
 */
#pragma once
#include "Basic.h"

// /FigureJamInLobby/Blueprint/BP_CosmeticsOverride_Figure_Frontend.BP_CosmeticsOverride_Figure_Frontend_C
// Kind: BlueprintGeneratedClass; super: SparksCosmeticOverrides
class UBP_CosmeticsOverride_Figure_Frontend_C
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bPreloadInstrumentAssetsOnStartup; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    std::uint8_t PawnType[0x20]; // 0x00C8 (Size: 0x20, Type: SoftClassProperty)
    void* InstrumenItemDefOverrides; // 0x00E8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0002[0x20]; // 0x00F0
    void* IADInstrumentPlaceholderOverrides; // 0x0110 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UBP_CosmeticsOverride_Figure_Frontend_C, bPreloadInstrumentAssetsOnStartup) == 192, "Offset mismatch for UBP_CosmeticsOverride_Figure_Frontend_C::bPreloadInstrumentAssetsOnStartup");
static_assert(offsetof(UBP_CosmeticsOverride_Figure_Frontend_C, PawnType) == 200, "Offset mismatch for UBP_CosmeticsOverride_Figure_Frontend_C::PawnType");
static_assert(offsetof(UBP_CosmeticsOverride_Figure_Frontend_C, InstrumenItemDefOverrides) == 232, "Offset mismatch for UBP_CosmeticsOverride_Figure_Frontend_C::InstrumenItemDefOverrides");
static_assert(offsetof(UBP_CosmeticsOverride_Figure_Frontend_C, IADInstrumentPlaceholderOverrides) == 272, "Offset mismatch for UBP_CosmeticsOverride_Figure_Frontend_C::IADInstrumentPlaceholderOverrides");
