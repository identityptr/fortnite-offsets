/**
 * decamp dumper generated SDK
 * Package: /DiscoveryBrowser/Rows/WBP_Row_Poly_HorizontalScrollWrapper
 */
#pragma once
#include "Basic.h"

// /DiscoveryBrowser/Rows/WBP_Row_Poly_HorizontalScrollWrapper.WBP_Row_Poly_HorizontalScrollWrapper_C
// Kind: WidgetBlueprintGeneratedClass; super: WBP_Row_Poly_Base_C
class UWBP_Row_Poly_HorizontalScrollWrapper_C
{
public:
    std::uint8_t Pad_0000[0x360]; // 0x0000
    std::uint8_t UberGraphFrame[0x8]; // 0x0360 (Size: 0x8, Type: StructProperty)
    void* WBP_Row_HorizontalScrollingList; // 0x0368 (Size: 0x8, Type: ObjectProperty)
    void* FortDiscoverProviderViewModel; // 0x0370 (Size: 0x8, Type: ObjectProperty)
    void* FortNestedButtonGroupSelectionVM; // 0x0378 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UWBP_Row_Poly_HorizontalScrollWrapper_C, UberGraphFrame) == 864, "Offset mismatch for UWBP_Row_Poly_HorizontalScrollWrapper_C::UberGraphFrame");
static_assert(offsetof(UWBP_Row_Poly_HorizontalScrollWrapper_C, WBP_Row_HorizontalScrollingList) == 872, "Offset mismatch for UWBP_Row_Poly_HorizontalScrollWrapper_C::WBP_Row_HorizontalScrollingList");
static_assert(offsetof(UWBP_Row_Poly_HorizontalScrollWrapper_C, FortDiscoverProviderViewModel) == 880, "Offset mismatch for UWBP_Row_Poly_HorizontalScrollWrapper_C::FortDiscoverProviderViewModel");
static_assert(offsetof(UWBP_Row_Poly_HorizontalScrollWrapper_C, FortNestedButtonGroupSelectionVM) == 888, "Offset mismatch for UWBP_Row_Poly_HorizontalScrollWrapper_C::FortNestedButtonGroupSelectionVM");
