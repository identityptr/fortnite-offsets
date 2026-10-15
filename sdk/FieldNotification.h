/**
 * decamp dumper generated SDK
 * Package: /Script/FieldNotification
 */
#pragma once
#include "Basic.h"

// /Script/FieldNotification.FieldNotificationId
// Kind: ScriptStruct; super: none
struct FFieldNotificationId
{
public:
    FName FieldName; // 0x0000 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FFieldNotificationId, FieldName) == 0, "Offset mismatch for FFieldNotificationId::FieldName");

// /Script/FieldNotification.NotifyFieldValueChanged
// Kind: Class; super: Interface
class UNotifyFieldValueChanged
{
public:
    std::uint8_t Opaque[1];
};
