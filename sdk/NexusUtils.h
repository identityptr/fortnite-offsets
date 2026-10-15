/**
 * decamp dumper generated SDK
 * Package: /Script/NexusUtils
 */
#pragma once
#include "Basic.h"

// /Script/NexusUtils.ExecConsoleCommandOnClientActor
// Kind: Class; super: Actor
class UExecConsoleCommandOnClientActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FString ConsoleCommand; // 0x0270 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UExecConsoleCommandOnClientActor, ConsoleCommand) == 624, "Offset mismatch for UExecConsoleCommandOnClientActor::ConsoleCommand");

// /Script/NexusUtils.ScreenshotActor
// Kind: Class; super: Actor
class UScreenshotActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    FString ScreenshotName; // 0x0270 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UScreenshotActor, ScreenshotName) == 624, "Offset mismatch for UScreenshotActor::ScreenshotName");
