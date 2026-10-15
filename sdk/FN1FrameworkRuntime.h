/**
 * decamp dumper generated SDK
 * Package: /FN1Framework/_Verse/VNI/FN1FrameworkRuntime
 */
#pragma once
#include "Basic.h"

// /FN1Framework/_Verse/VNI/FN1FrameworkRuntime.AgentUtils
// Kind: VerseClass; super: Object
class UAgentUtils
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Framework/_Verse/VNI/FN1FrameworkRuntime.AnalyticsHelper
// Kind: VerseClass; super: Object
class UAnalyticsHelper
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Framework/_Verse/VNI/FN1FrameworkRuntime.Analytics_analytics_attributes_base
// Kind: VerseClass; super: Object
class UAnalytics_analytics_attributes_base
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Framework/_Verse/VNI/FN1FrameworkRuntime.Analytics_analytics_attributes_request
// Kind: VerseClass; super: Object
class UAnalytics_analytics_attributes_request
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* verse_0x4FA49749_OnRequestAttributesInternal; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAnalytics_analytics_attributes_request, verse_0x4FA49749_OnRequestAttributesInternal) == 40, "Offset mismatch for UAnalytics_analytics_attributes_request::verse_0x4FA49749_OnRequestAttributesInternal");

// /FN1Framework/_Verse/VNI/FN1FrameworkRuntime.Analytics_analytics_framework_event_base
// Kind: VerseClass; super: Object
class UAnalytics_analytics_framework_event_base
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Framework/_Verse/VNI/FN1FrameworkRuntime.Analytics_tags_analytics_event_base
// Kind: VerseClass; super: Analytics_analytics_framework_event_base
class UAnalytics_tags_analytics_event_base
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Framework/_Verse/VNI/FN1FrameworkRuntime.CVarUtils
// Kind: VerseClass; super: Object
class UCVarUtils
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Framework/_Verse/VNI/FN1FrameworkRuntime.Competitive
// Kind: VerseClass; super: Object
class UCompetitive
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Framework/_Verse/VNI/FN1FrameworkRuntime.Competitive_competitive_manager
// Kind: VerseClass; super: Object
class UCompetitive_competitive_manager
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Framework/_Verse/VNI/FN1FrameworkRuntime.Matchmaking
// Kind: VerseClass; super: Object
class UMatchmaking
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Framework/_Verse/VNI/FN1FrameworkRuntime.Persistence
// Kind: VerseClass; super: Object
class UPersistence
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Framework/_Verse/VNI/FN1FrameworkRuntime.Persistence_persistence_interface
// Kind: VerseClass; super: Interface
class UPersistence_persistence_interface
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Framework/_Verse/VNI/FN1FrameworkRuntime.Spectating
// Kind: VerseClass; super: Object
class USpectating
{
public:
    std::uint8_t Opaque[1];
};


// /FN1Framework/_Verse/VNI/FN1FrameworkRuntime.Spectating_spectator_manager
// Kind: VerseClass; super: Object
class USpectating_spectator_manager
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* verse_0x57A7338C_LiveSpectatorAddedEvent; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    void* verse_0x1A870E97_LiveSpectatorRemovedEvent; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpectating_spectator_manager, verse_0x57A7338C_LiveSpectatorAddedEvent) == 48, "Offset mismatch for USpectating_spectator_manager::verse_0x57A7338C_LiveSpectatorAddedEvent");
static_assert(offsetof(USpectating_spectator_manager, verse_0x1A870E97_LiveSpectatorRemovedEvent) == 56, "Offset mismatch for USpectating_spectator_manager::verse_0x1A870E97_LiveSpectatorRemovedEvent");
