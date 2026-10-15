/**
 * decamp dumper generated SDK
 * Package: /Verse/_Verse/VNI/Verse
 */
#pragma once
#include "Basic.h"

// /Verse/_Verse/VNI/Verse.Verse_message
// Kind: VerseClass; super: Object
class UVerse_message
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t verse_0x589418B4_Key[0x10]; // 0x0028 (Size: 0x10, Type: VerseStringProperty)
    std::uint8_t verse_0xEDB05B46_DefaultText[0x10]; // 0x0038 (Size: 0x10, Type: VerseStringProperty)
    TMap<void*, void*> verse_0x85420AD2_Substitutions; // 0x0048 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UVerse_message, verse_0x589418B4_Key) == 40, "Offset mismatch for UVerse_message::verse_0x589418B4_Key");
static_assert(offsetof(UVerse_message, verse_0xEDB05B46_DefaultText) == 56, "Offset mismatch for UVerse_message::verse_0xEDB05B46_DefaultText");
static_assert(offsetof(UVerse_message, verse_0x85420AD2_Substitutions) == 72, "Offset mismatch for UVerse_message::verse_0x85420AD2_Substitutions");

// /Verse/_Verse/VNI/Verse.Verse_result
// Kind: VerseClass; super: Interface
class UVerse_result
{
public:
    std::uint8_t Opaque[1];
};


// /Verse/_Verse/VNI/Verse.Verse_showable
// Kind: VerseClass; super: Interface
class UVerse_showable
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t verse_0x3AC8C9A7_Show; // 0x0028 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UVerse_showable, verse_0x3AC8C9A7_Show) == 40, "Offset mismatch for UVerse_showable::verse_0x3AC8C9A7_Show");

// /Verse/_Verse/VNI/Verse.Verse_signalable
// Kind: VerseClass; super: Interface
class UVerse_signalable
{
public:
    std::uint8_t Opaque[1];
};


// /Verse/_Verse/VNI/Verse.Verse_subscribable
// Kind: VerseClass; super: Interface
class UVerse_subscribable
{
public:
    std::uint8_t Opaque[1];
};


// /Verse/_Verse/VNI/Verse.Verse_subscribable_event_intrnl
// Kind: VerseClass; super: None
class UVerse_subscribable_event_intrnl
{
public:
    std::uint8_t Opaque[1];
};


// /Verse/_Verse/VNI/Verse.Verse_success_result
// Kind: VerseClass; super: Object
class UVerse_success_result
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t verse_0x6F604CC0_Success[0x1]; // 0x0028 (Size: 0x1, Type: VerseDynamicProperty)
};

static_assert(offsetof(UVerse_success_result, verse_0x6F604CC0_Success) == 40, "Offset mismatch for UVerse_success_result::verse_0x6F604CC0_Success");
