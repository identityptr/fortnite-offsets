/**
 * decamp dumper generated SDK
 * Package: /Script/GameplayStreaming
 */
#pragma once
#include "Basic.h"

// /Script/GameplayStreaming.BaseGameplayStreamingHandler
// Kind: Class; super: Object
class UBaseGameplayStreamingHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayStreaming.GFNGameplayStreamingHandler
// Kind: Class; super: BaseGameplayStreamingHandler
class UGFNGameplayStreamingHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayStreaming.GameplayStreamingClassLoader
// Kind: Class; super: Object
class UGameplayStreamingClassLoader
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t GameplayStreamingServiceClassName[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UGameplayStreamingClassLoader, GameplayStreamingServiceClassName) == 40, "Offset mismatch for UGameplayStreamingClassLoader::GameplayStreamingServiceClassName");

// /Script/GameplayStreaming.GameplayStreamingService
// Kind: Class; super: Object
class UGameplayStreamingService
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* ActiveHandler; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameplayStreamingService, ActiveHandler) == 40, "Offset mismatch for UGameplayStreamingService::ActiveHandler");

// /Script/GameplayStreaming.JioCloudGameplayStreamingHandler
// Kind: Class; super: BaseGameplayStreamingHandler
class UJioCloudGameplayStreamingHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayStreaming.LunaGameplayStreamingHandler
// Kind: Class; super: BaseGameplayStreamingHandler
class ULunaGameplayStreamingHandler
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayStreaming.SalmonGameplayStreamingHandler
// Kind: Class; super: BaseGameplayStreamingHandler
class USalmonGameplayStreamingHandler
{
public:
    std::uint8_t Opaque[1];
};
