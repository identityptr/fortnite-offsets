/**
 * decamp dumper generated SDK
 * Package: /Script/VersePredicts
 */
#pragma once
#include "Basic.h"

// /Script/VersePredicts.VersePredictsClientConnection
// Kind: Class; super: Actor
class UVersePredictsClientConnection
{
public:
    std::uint8_t Pad_0000[0x27C]; // 0x0000
    std::int32_t RawNodeID; // 0x027C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UVersePredictsClientConnection, RawNodeID) == 636, "Offset mismatch for UVersePredictsClientConnection::RawNodeID");
