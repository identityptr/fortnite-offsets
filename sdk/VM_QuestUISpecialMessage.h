/**
 * decamp dumper generated SDK
 * Package: /QuestUI/QuestScreen/V3/VM_QuestUISpecialMessage
 */
#pragma once
#include "Basic.h"

// /QuestUI/QuestScreen/V3/VM_QuestUISpecialMessage.VM_QuestUISpecialMessage_C
// Kind: BlueprintGeneratedClass; super: MVVMViewModelBase
class UVM_QuestUISpecialMessage_C
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t Message[0x10]; // 0x0068 (Size: 0x10, Type: TextProperty)
    std::uint8_t MessageType; // 0x0078 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UVM_QuestUISpecialMessage_C, Message) == 104, "Offset mismatch for UVM_QuestUISpecialMessage_C::Message");
static_assert(offsetof(UVM_QuestUISpecialMessage_C, MessageType) == 120, "Offset mismatch for UVM_QuestUISpecialMessage_C::MessageType");
