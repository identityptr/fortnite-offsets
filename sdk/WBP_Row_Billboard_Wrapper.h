/**
 * decamp dumper generated SDK
 * Package: /DiscoveryBrowser/Rows/WBP_Row_Billboard_Wrapper
 */
#pragma once
#include "Basic.h"

// /DiscoveryBrowser/Rows/WBP_Row_Billboard_Wrapper.WBP_Row_Billboard_Wrapper_C
// Kind: WidgetBlueprintGeneratedClass; super: WBP_Row_Poly_Base_C
class UWBP_Row_Billboard_Wrapper_C
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0360 (Size: 0x8, Type: StructProperty)
    void* WBP_Row_Header; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* GP_Root; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* FortDiscoverProviderViewModel; // 0x0378 (Size: 0x8, Type: ObjectProperty)
    void* WBP_DiscoverTileBillboard; // 0x0380 (Size: 0x8, Type: ObjectProperty)
    void* WBP_DiscoverIPTileBillboard; // 0x0388 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t TilePadding[0x1]; // 0x0390 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWBP_Row_Billboard_Wrapper_C, UberGraphFrame) == 864, "Offset mismatch for UWBP_Row_Billboard_Wrapper_C::UberGraphFrame");
static_assert(offsetof(UWBP_Row_Billboard_Wrapper_C, WBP_Row_Header) == 872, "Offset mismatch for UWBP_Row_Billboard_Wrapper_C::WBP_Row_Header");
static_assert(offsetof(UWBP_Row_Billboard_Wrapper_C, GP_Root) == 880, "Offset mismatch for UWBP_Row_Billboard_Wrapper_C::GP_Root");
static_assert(offsetof(UWBP_Row_Billboard_Wrapper_C, FortDiscoverProviderViewModel) == 888, "Offset mismatch for UWBP_Row_Billboard_Wrapper_C::FortDiscoverProviderViewModel");
static_assert(offsetof(UWBP_Row_Billboard_Wrapper_C, WBP_DiscoverTileBillboard) == 896, "Offset mismatch for UWBP_Row_Billboard_Wrapper_C::WBP_DiscoverTileBillboard");
static_assert(offsetof(UWBP_Row_Billboard_Wrapper_C, WBP_DiscoverIPTileBillboard) == 904, "Offset mismatch for UWBP_Row_Billboard_Wrapper_C::WBP_DiscoverIPTileBillboard");
static_assert(offsetof(UWBP_Row_Billboard_Wrapper_C, TilePadding) == 912, "Offset mismatch for UWBP_Row_Billboard_Wrapper_C::TilePadding");
