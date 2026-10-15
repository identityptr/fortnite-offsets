/**
 * decamp dumper generated SDK
 * Package: /Script/VerseInterface
 */
#pragma once
#include "Basic.h"

// /Script/VerseInterface.SolarisDebugMessage
// Kind: ScriptStruct; super: none
struct FSolarisDebugMessage
{
public:
    std::uint8_t ClientID; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    std::uint8_t Command; // 0x0004 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0005
    TArray<void*> MessageBodyUTF8; // 0x0008 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FSolarisDebugMessage, ClientID) == 0, "Offset mismatch for FSolarisDebugMessage::ClientID");
static_assert(offsetof(FSolarisDebugMessage, Command) == 4, "Offset mismatch for FSolarisDebugMessage::Command");
static_assert(offsetof(FSolarisDebugMessage, MessageBodyUTF8) == 8, "Offset mismatch for FSolarisDebugMessage::MessageBodyUTF8");
