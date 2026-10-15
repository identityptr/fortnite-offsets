/**
 * decamp dumper generated SDK
 * Package: /FortniteCoreUI/UI/Login/UpdateRequired/UpdateRequiredMP
 */
#pragma once
#include "Basic.h"

// /FortniteCoreUI/UI/Login/UpdateRequired/UpdateRequiredMP.UpdateRequiredMP_C
// Kind: WidgetBlueprintGeneratedClass; super: FortUpdateRequiredWidget
class UUpdateRequiredMP_C
{
public:
    std::uint8_t Pad_0000[0x4D0]; // 0x0000
    std::uint8_t UberGraphFrame[0x18]; // 0x04D0 (Size: 0x18, Type: StructProperty)
    void* PlatformGameInstance; // 0x04E8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UUpdateRequiredMP_C, UberGraphFrame) == 1232, "Offset mismatch for UUpdateRequiredMP_C::UberGraphFrame");
static_assert(offsetof(UUpdateRequiredMP_C, PlatformGameInstance) == 1256, "Offset mismatch for UUpdateRequiredMP_C::PlatformGameInstance");
