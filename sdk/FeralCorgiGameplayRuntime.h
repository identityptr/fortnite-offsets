/**
 * decamp dumper generated SDK
 * Package: /FeralCorgiGameplay/_Verse/VNI/FeralCorgiGameplayRuntime
 */
#pragma once
#include "Basic.h"

// /FeralCorgiGameplay/_Verse/VNI/FeralCorgiGameplayRuntime.AnalyticsBridge
// Kind: VerseClass; super: Object
class UAnalyticsBridge
{
public:
    std::uint8_t Opaque[1];
};


// /FeralCorgiGameplay/_Verse/VNI/FeralCorgiGameplayRuntime.BackfillControlBridge
// Kind: VerseClass; super: Object
class UBackfillControlBridge
{
public:
    std::uint8_t Opaque[1];
};


// /FeralCorgiGameplay/_Verse/VNI/FeralCorgiGameplayRuntime.CommonBridge
// Kind: VerseClass; super: Object
class UCommonBridge
{
public:
    std::uint8_t Opaque[1];
};


// /FeralCorgiGameplay/_Verse/VNI/FeralCorgiGameplayRuntime.FeralCorgiRespawnLogic
// Kind: VerseClass; super: Object
class UFeralCorgiRespawnLogic
{
public:
    std::uint8_t Opaque[1];
};


// /FeralCorgiGameplay/_Verse/VNI/FeralCorgiGameplayRuntime.FeralEliminationInfoBridge
// Kind: VerseClass; super: Object
class UFeralEliminationInfoBridge
{
public:
    std::uint8_t Opaque[1];
};


// /FeralCorgiGameplay/_Verse/VNI/FeralCorgiGameplayRuntime.FeralLoggingBridge
// Kind: VerseClass; super: Object
class UFeralLoggingBridge
{
public:
    std::uint8_t Opaque[1];
};


// /FeralCorgiGameplay/_Verse/VNI/FeralCorgiGameplayRuntime.FeralMatchmakingBridge
// Kind: VerseClass; super: Object
class UFeralMatchmakingBridge
{
public:
    std::uint8_t Opaque[1];
};


// /FeralCorgiGameplay/_Verse/VNI/FeralCorgiGameplayRuntime.PlayerLoadingStatusBridge
// Kind: VerseClass; super: Object
class UPlayerLoadingStatusBridge
{
public:
    std::uint8_t Opaque[1];
};


// /FeralCorgiGameplay/_Verse/VNI/FeralCorgiGameplayRuntime.ReservationHoldingBridge
// Kind: VerseClass; super: Object
class UReservationHoldingBridge
{
public:
    std::uint8_t Opaque[1];
};


// /FeralCorgiGameplay/_Verse/VNI/FeralCorgiGameplayRuntime.SessionAttributesBridge
// Kind: VerseClass; super: Object
class USessionAttributesBridge
{
public:
    std::uint8_t Opaque[1];
};


// /FeralCorgiGameplay/_Verse/VNI/FeralCorgiGameplayRuntime.analytics_event_base
// Kind: VerseClass; super: Object
class Uanalytics_event_base
{
public:
    std::uint8_t Opaque[1];
};


// /FeralCorgiGameplay/_Verse/VNI/FeralCorgiGameplayRuntime.apparatus_bridge
// Kind: VerseClass; super: Object
class Uapparatus_bridge
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* verse_0x3E638B32_NativeStateChangedEventInternal; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* verse_0x13B45C98_NativeStateChangedWithAgentEventInternal; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(Uapparatus_bridge, verse_0x3E638B32_NativeStateChangedEventInternal) == 40, "Offset mismatch for Uapparatus_bridge::verse_0x3E638B32_NativeStateChangedEventInternal");
static_assert(offsetof(Uapparatus_bridge, verse_0x13B45C98_NativeStateChangedWithAgentEventInternal) == 48, "Offset mismatch for Uapparatus_bridge::verse_0x13B45C98_NativeStateChangedWithAgentEventInternal");

// /FeralCorgiGameplay/_Verse/VNI/FeralCorgiGameplayRuntime.cheat_bridge
// Kind: VerseClass; super: CheatBridge
class Ucheat_bridge
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* verse_0xD7B48D57_NativeCheatEventInternal; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(Ucheat_bridge, verse_0xD7B48D57_NativeCheatEventInternal) == 40, "Offset mismatch for Ucheat_bridge::verse_0xD7B48D57_NativeCheatEventInternal");

// /FeralCorgiGameplay/_Verse/VNI/FeralCorgiGameplayRuntime.feral_analytics_attributes_base
// Kind: VerseClass; super: Object
class Uferal_analytics_attributes_base
{
public:
    std::uint8_t Opaque[1];
};


// /FeralCorgiGameplay/_Verse/VNI/FeralCorgiGameplayRuntime.feral_analytics_attributes_request
// Kind: VerseClass; super: Object
class Uferal_analytics_attributes_request
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* verse_0x4FA49749_OnRequestAttributesInternal; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(Uferal_analytics_attributes_request, verse_0x4FA49749_OnRequestAttributesInternal) == 40, "Offset mismatch for Uferal_analytics_attributes_request::verse_0x4FA49749_OnRequestAttributesInternal");

// /FeralCorgiGameplay/_Verse/VNI/FeralCorgiGameplayRuntime.feral_analytics_event_base
// Kind: VerseClass; super: analytics_event_base
class Uferal_analytics_event_base
{
public:
    std::uint8_t Opaque[1];
};


// /FeralCorgiGameplay/_Verse/VNI/FeralCorgiGameplayRuntime.game_state_component_bridge
// Kind: VerseClass; super: FeralCorgiGameStateComponentBridge
class Ugame_state_component_bridge
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* verse_0xFF5714F8_OnReceivedEventInternal; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(Ugame_state_component_bridge, verse_0xFF5714F8_OnReceivedEventInternal) == 40, "Offset mismatch for Ugame_state_component_bridge::verse_0xFF5714F8_OnReceivedEventInternal");

// /FeralCorgiGameplay/_Verse/VNI/FeralCorgiGameplayRuntime.player_display_info_manager
// Kind: VerseClass; super: Object
class Uplayer_display_info_manager
{
public:
    std::uint8_t Opaque[1];
};
