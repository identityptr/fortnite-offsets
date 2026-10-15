/**
 * decamp dumper generated SDK
 * Package: /Script/VerseWorldPartition
 */
#pragma once
#include "Basic.h"

// /Script/VerseWorldPartition.VerseWorldPartitionHelperBase
// Kind: Class; super: Object
class UVerseWorldPartitionHelperBase
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> StreamingSubscriptionObjs; // 0x0028 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UVerseWorldPartitionHelperBase, StreamingSubscriptionObjs) == 40, "Offset mismatch for UVerseWorldPartitionHelperBase::StreamingSubscriptionObjs");
