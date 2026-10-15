/**
 * decamp dumper generated SDK
 * Package: /EntityFramework/_Verse/VNI/Execution
 */
#pragma once
#include "Basic.h"

// /EntityFramework/_Verse/VNI/Execution.execution_event
// Kind: VerseClass; super: Object
class Uexecution_event
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* verse_0x4630999D_InternalEvent; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(Uexecution_event, verse_0x4630999D_InternalEvent) == 72, "Offset mismatch for Uexecution_event::verse_0x4630999D_InternalEvent");

// /EntityFramework/_Verse/VNI/Execution.execution_listenable
// Kind: VerseClass; super: Object
class Uexecution_listenable
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* verse_0x4630999D_InternalEvent; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(Uexecution_listenable, verse_0x4630999D_InternalEvent) == 72, "Offset mismatch for Uexecution_listenable::verse_0x4630999D_InternalEvent");

// /EntityFramework/_Verse/VNI/Execution.execution_subscription
// Kind: VerseClass; super: Object
class Uexecution_subscription
{
public:
    std::uint8_t Opaque[1];
};
