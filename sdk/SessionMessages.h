/**
 * decamp dumper generated SDK
 * Package: /Script/SessionMessages
 */
#pragma once
#include "Basic.h"

// /Script/SessionMessages.SessionServiceLog
// Kind: ScriptStruct; super: none
struct FSessionServiceLog
{
public:
    FName Category; // 0x0000 (Size: 0x8, Type: NameProperty)
    FString Data; // 0x0008 (Size: 0x10, Type: StrProperty)
    std::uint8_t InstanceID[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    double TimeSeconds; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t Verbosity; // 0x0030 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FSessionServiceLog, Category) == 0, "Offset mismatch for FSessionServiceLog::Category");
static_assert(offsetof(FSessionServiceLog, Data) == 8, "Offset mismatch for FSessionServiceLog::Data");
static_assert(offsetof(FSessionServiceLog, InstanceID) == 24, "Offset mismatch for FSessionServiceLog::InstanceID");
static_assert(offsetof(FSessionServiceLog, TimeSeconds) == 40, "Offset mismatch for FSessionServiceLog::TimeSeconds");
static_assert(offsetof(FSessionServiceLog, Verbosity) == 48, "Offset mismatch for FSessionServiceLog::Verbosity");

// /Script/SessionMessages.SessionServiceLogSubscribe
// Kind: ScriptStruct; super: none
struct FSessionServiceLogSubscribe
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SessionMessages.SessionServiceLogUnsubscribe
// Kind: ScriptStruct; super: none
struct FSessionServiceLogUnsubscribe
{
public:
    std::uint8_t Opaque[1];
};


// /Script/SessionMessages.SessionServicePing
// Kind: ScriptStruct; super: none
struct FSessionServicePing
{
public:
    FString UserName; // 0x0000 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(FSessionServicePing, UserName) == 0, "Offset mismatch for FSessionServicePing::UserName");

// /Script/SessionMessages.SessionServicePong
// Kind: ScriptStruct; super: none
struct FSessionServicePong
{
public:
    std::uint8_t Authorized; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    FString BuildDate; // 0x0008 (Size: 0x10, Type: StrProperty)
    FString DeviceName; // 0x0018 (Size: 0x10, Type: StrProperty)
    std::uint8_t InstanceID[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    FString InstanceName; // 0x0038 (Size: 0x10, Type: StrProperty)
    FString PlatformName; // 0x0048 (Size: 0x10, Type: StrProperty)
    std::uint8_t SessionID[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    FString SessionName; // 0x0068 (Size: 0x10, Type: StrProperty)
    FString SessionOwner; // 0x0078 (Size: 0x10, Type: StrProperty)
    std::uint8_t Standalone; // 0x0088 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSessionServicePong, Authorized) == 0, "Offset mismatch for FSessionServicePong::Authorized");
static_assert(offsetof(FSessionServicePong, BuildDate) == 8, "Offset mismatch for FSessionServicePong::BuildDate");
static_assert(offsetof(FSessionServicePong, DeviceName) == 24, "Offset mismatch for FSessionServicePong::DeviceName");
static_assert(offsetof(FSessionServicePong, InstanceID) == 40, "Offset mismatch for FSessionServicePong::InstanceID");
static_assert(offsetof(FSessionServicePong, InstanceName) == 56, "Offset mismatch for FSessionServicePong::InstanceName");
static_assert(offsetof(FSessionServicePong, PlatformName) == 72, "Offset mismatch for FSessionServicePong::PlatformName");
static_assert(offsetof(FSessionServicePong, SessionID) == 88, "Offset mismatch for FSessionServicePong::SessionID");
static_assert(offsetof(FSessionServicePong, SessionName) == 104, "Offset mismatch for FSessionServicePong::SessionName");
static_assert(offsetof(FSessionServicePong, SessionOwner) == 120, "Offset mismatch for FSessionServicePong::SessionOwner");
static_assert(offsetof(FSessionServicePong, Standalone) == 136, "Offset mismatch for FSessionServicePong::Standalone");
