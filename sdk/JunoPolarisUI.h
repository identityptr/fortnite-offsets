/**
 * decamp dumper generated SDK
 * Package: /Script/JunoPolarisUI
 */
#pragma once
#include "Basic.h"

// /Script/JunoPolarisUI.JunoPolarisUIChannelContentReadyEvent
// Kind: ScriptStruct; super: none
struct FJunoPolarisUIChannelContentReadyEvent
{
public:
    std::uint8_t ChannelTags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    FString ChannelName; // 0x0020 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FJunoPolarisUIChannelContentReadyEvent, ChannelTags) == 0, "Offset mismatch for FJunoPolarisUIChannelContentReadyEvent::ChannelTags");
static_assert(offsetof(FJunoPolarisUIChannelContentReadyEvent, ChannelName) == 32, "Offset mismatch for FJunoPolarisUIChannelContentReadyEvent::ChannelName");

// /Script/JunoPolarisUI.JunoMotdActionViewModel
// Kind: Class; super: MVVMViewModelBase
class UJunoMotdActionViewModel
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPolarisUI.JunoMotdListViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoMotdListViewModel
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TArray<void*> Motds; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoMotdListViewModel, Motds) == 128, "Offset mismatch for UJunoMotdListViewModel::Motds");

// /Script/JunoPolarisUI.JunoMotdViewModel
// Kind: Class; super: FortPerUserViewModel
class UJunoMotdViewModel
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    TWeakObjectPtr<void> OwningChannel; // 0x0078 (Size: 0x8, Type: WeakObjectProperty)
    std::uint8_t Pad_0001[0xB8]; // 0x0080
    TArray<void*> Actions; // 0x0138 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UJunoMotdViewModel, OwningChannel) == 120, "Offset mismatch for UJunoMotdViewModel::OwningChannel");
static_assert(offsetof(UJunoMotdViewModel, Actions) == 312, "Offset mismatch for UJunoMotdViewModel::Actions");

// /Script/JunoPolarisUI.JunoPolarisChannel
// Kind: Class; super: PrmChannel
class UJunoPolarisChannel
{
public:
    std::uint8_t Opaque[1];
};


// /Script/JunoPolarisUI.JunoPolarisChannel_Motd
// Kind: Class; super: JunoPolarisChannel
class UJunoPolarisChannel_Motd
{
public:
    std::uint8_t Pad_0000[0x128]; // 0x0000
    FString RequestPath; // 0x0128 (Size: 0x10, Type: StrProperty)
    FString GovernancePath; // 0x0138 (Size: 0x10, Type: StrProperty)
    FString GovernanceName; // 0x0148 (Size: 0x10, Type: StrProperty)
    void* Motds; // 0x0158 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoPolarisChannel_Motd, RequestPath) == 296, "Offset mismatch for UJunoPolarisChannel_Motd::RequestPath");
static_assert(offsetof(UJunoPolarisChannel_Motd, GovernancePath) == 312, "Offset mismatch for UJunoPolarisChannel_Motd::GovernancePath");
static_assert(offsetof(UJunoPolarisChannel_Motd, GovernanceName) == 328, "Offset mismatch for UJunoPolarisChannel_Motd::GovernanceName");
static_assert(offsetof(UJunoPolarisChannel_Motd, Motds) == 344, "Offset mismatch for UJunoPolarisChannel_Motd::Motds");

// /Script/JunoPolarisUI.JunoPolarisPlayerSubsystem
// Kind: Class; super: FortLocalPlayerSubsystem
class UJunoPolarisPlayerSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* ChannelMotd; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    void* ChannelChangeLog; // 0x0040 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UJunoPolarisPlayerSubsystem, ChannelMotd) == 56, "Offset mismatch for UJunoPolarisPlayerSubsystem::ChannelMotd");
static_assert(offsetof(UJunoPolarisPlayerSubsystem, ChannelChangeLog) == 64, "Offset mismatch for UJunoPolarisPlayerSubsystem::ChannelChangeLog");
