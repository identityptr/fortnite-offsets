/**
 * decamp dumper generated SDK
 * Package: /Script/MaskAnimShared
 */
#pragma once
#include "Basic.h"

// /Script/MaskAnimShared.MaskBaseCCPAnimInstance
// Kind: Class; super: CustomCharacterPartAnimInstance
class UMaskBaseCCPAnimInstance
{
public:
    std::uint8_t Pad_0000[0x630]; // 0x0000
    void* AttachDataTable; // 0x0630 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LocalOffsetT[0x18]; // 0x0638 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocalOffsetR[0x18]; // 0x0650 (Size: 0x18, Type: StructProperty)
    std::uint8_t LocalOffsetS[0x18]; // 0x0668 (Size: 0x18, Type: StructProperty)
    std::uint8_t bSpineSocket; // 0x0680 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UMaskBaseCCPAnimInstance, AttachDataTable) == 1584, "Offset mismatch for UMaskBaseCCPAnimInstance::AttachDataTable");
static_assert(offsetof(UMaskBaseCCPAnimInstance, LocalOffsetT) == 1592, "Offset mismatch for UMaskBaseCCPAnimInstance::LocalOffsetT");
static_assert(offsetof(UMaskBaseCCPAnimInstance, LocalOffsetR) == 1616, "Offset mismatch for UMaskBaseCCPAnimInstance::LocalOffsetR");
static_assert(offsetof(UMaskBaseCCPAnimInstance, LocalOffsetS) == 1640, "Offset mismatch for UMaskBaseCCPAnimInstance::LocalOffsetS");
static_assert(offsetof(UMaskBaseCCPAnimInstance, bSpineSocket) == 1664, "Offset mismatch for UMaskBaseCCPAnimInstance::bSpineSocket");
