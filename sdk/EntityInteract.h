/**
 * decamp dumper generated SDK
 * Package: /EntityInteract/_Verse/VNI/EntityInteract
 */
#pragma once
#include "Basic.h"

// /EntityInteract/_Verse/VNI/EntityInteract._Root
// Kind: VerseClass; super: Object
class URoot
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* verse_0x3BA27C8E_DefaultCanInteractMessage; // 0x0028 (Size: 0x8, Type: ObjectProperty)
    void* verse_0x7070DA31_DefaultCannotInteractMessage; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URoot, verse_0x3BA27C8E_DefaultCanInteractMessage) == 40, "Offset mismatch for URoot::verse_0x3BA27C8E_DefaultCanInteractMessage");
static_assert(offsetof(URoot, verse_0x7070DA31_DefaultCannotInteractMessage) == 48, "Offset mismatch for URoot::verse_0x7070DA31_DefaultCannotInteractMessage");

// /EntityInteract/_Verse/VNI/EntityInteract.basic_interactable_component
// Kind: VerseClass; super: interactable_component
class Ubasic_interactable_component
{
public:
    std::uint8_t Pad_0000[0xB0]; // 0x0000
    void* verse_0x0C1446DB_CanInteractMessage; // 0x00B0 (Size: 0x8, Type: ObjectProperty)
    void* verse_0xF30D41A1_CannotInteractMessage; // 0x00B8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> verse_0x93496834_InteractingAgents; // 0x00C0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t verse_0xDDF1E1FA_Cooldown[0x8]; // 0x00D0 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t verse_0x51377816_CooldownPerAgent[0x8]; // 0x00D8 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t verse_0xE2D98CE9_SuccessLimit[0x8]; // 0x00E0 (Size: 0x8, Type: OptionalProperty)
    std::uint8_t verse_0x42B59064_InteractableDuration[0x1]; // 0x00E8 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(Ubasic_interactable_component, verse_0x0C1446DB_CanInteractMessage) == 176, "Offset mismatch for Ubasic_interactable_component::verse_0x0C1446DB_CanInteractMessage");
static_assert(offsetof(Ubasic_interactable_component, verse_0xF30D41A1_CannotInteractMessage) == 184, "Offset mismatch for Ubasic_interactable_component::verse_0xF30D41A1_CannotInteractMessage");
static_assert(offsetof(Ubasic_interactable_component, verse_0x93496834_InteractingAgents) == 192, "Offset mismatch for Ubasic_interactable_component::verse_0x93496834_InteractingAgents");
static_assert(offsetof(Ubasic_interactable_component, verse_0xDDF1E1FA_Cooldown) == 208, "Offset mismatch for Ubasic_interactable_component::verse_0xDDF1E1FA_Cooldown");
static_assert(offsetof(Ubasic_interactable_component, verse_0x51377816_CooldownPerAgent) == 216, "Offset mismatch for Ubasic_interactable_component::verse_0x51377816_CooldownPerAgent");
static_assert(offsetof(Ubasic_interactable_component, verse_0xE2D98CE9_SuccessLimit) == 224, "Offset mismatch for Ubasic_interactable_component::verse_0xE2D98CE9_SuccessLimit");
static_assert(offsetof(Ubasic_interactable_component, verse_0x42B59064_InteractableDuration) == 232, "Offset mismatch for Ubasic_interactable_component::verse_0x42B59064_InteractableDuration");

// /EntityInteract/_Verse/VNI/EntityInteract.interactable_component
// Kind: VerseClass; super: Component
class Uinteractable_component
{
public:
    std::uint8_t Pad_0000[0x78]; // 0x0000
    std::uint8_t verse_0x5CDFC2A5_Enabled; // 0x0078 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1F]; // 0x0079
    void* verse_0xA642C612_StartedEvent; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* verse_0x6DA99702_SucceededEvent; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
    void* verse_0x8F1E8925_CanceledEvent; // 0x00A8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(Uinteractable_component, verse_0x5CDFC2A5_Enabled) == 120, "Offset mismatch for Uinteractable_component::verse_0x5CDFC2A5_Enabled");
static_assert(offsetof(Uinteractable_component, verse_0xA642C612_StartedEvent) == 152, "Offset mismatch for Uinteractable_component::verse_0xA642C612_StartedEvent");
static_assert(offsetof(Uinteractable_component, verse_0x6DA99702_SucceededEvent) == 160, "Offset mismatch for Uinteractable_component::verse_0x6DA99702_SucceededEvent");
static_assert(offsetof(Uinteractable_component, verse_0x8F1E8925_CanceledEvent) == 168, "Offset mismatch for Uinteractable_component::verse_0x8F1E8925_CanceledEvent");

// /EntityInteract/_Verse/VNI/EntityInteract.interactable_cooldown
// Kind: VerseClass; super: Object
class Uinteractable_cooldown
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    double verse_0xFC2FBF02_Duration; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    void* verse_0xFFE3E337_ExpiredEvent; // 0x0030 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(Uinteractable_cooldown, verse_0xFC2FBF02_Duration) == 40, "Offset mismatch for Uinteractable_cooldown::verse_0xFC2FBF02_Duration");
static_assert(offsetof(Uinteractable_cooldown, verse_0xFFE3E337_ExpiredEvent) == 48, "Offset mismatch for Uinteractable_cooldown::verse_0xFFE3E337_ExpiredEvent");

// /EntityInteract/_Verse/VNI/EntityInteract.interactable_cooldown_per_agent
// Kind: VerseClass; super: Object
class Uinteractable_cooldown_per_agent
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    double verse_0xFC2FBF02_Duration; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    void* verse_0xFFE3E337_ExpiredEvent; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> verse_0x2FDEEFD7_RemainingDuration; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(Uinteractable_cooldown_per_agent, verse_0xFC2FBF02_Duration) == 40, "Offset mismatch for Uinteractable_cooldown_per_agent::verse_0xFC2FBF02_Duration");
static_assert(offsetof(Uinteractable_cooldown_per_agent, verse_0xFFE3E337_ExpiredEvent) == 48, "Offset mismatch for Uinteractable_cooldown_per_agent::verse_0xFFE3E337_ExpiredEvent");
static_assert(offsetof(Uinteractable_cooldown_per_agent, verse_0x2FDEEFD7_RemainingDuration) == 56, "Offset mismatch for Uinteractable_cooldown_per_agent::verse_0x2FDEEFD7_RemainingDuration");

// /EntityInteract/_Verse/VNI/EntityInteract.interactable_duration
// Kind: VerseClass; super: Object
class Uinteractable_duration
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    double verse_0x66B0FCB8_InteractDuration; // 0x0028 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t verse_0x392BFCF9_MaxSimultaneousInteractors[0x1]; // 0x0030 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(Uinteractable_duration, verse_0x66B0FCB8_InteractDuration) == 40, "Offset mismatch for Uinteractable_duration::verse_0x66B0FCB8_InteractDuration");
static_assert(offsetof(Uinteractable_duration, verse_0x392BFCF9_MaxSimultaneousInteractors) == 48, "Offset mismatch for Uinteractable_duration::verse_0x392BFCF9_MaxSimultaneousInteractors");

// /EntityInteract/_Verse/VNI/EntityInteract.interactable_success_limit
// Kind: VerseClass; super: Object
class Uinteractable_success_limit
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int64_t verse_0xA45870F3_SuccessfulInteractionCount; // 0x0028 (Size: 0x8, Type: Int64Property)
    std::uint8_t verse_0xD4531C14_MaxSuccessfulInteractions[0x1]; // 0x0030 (Size: 0x1, Type: OptionalProperty)
};

static_assert(offsetof(Uinteractable_success_limit, verse_0xA45870F3_SuccessfulInteractionCount) == 40, "Offset mismatch for Uinteractable_success_limit::verse_0xA45870F3_SuccessfulInteractionCount");
static_assert(offsetof(Uinteractable_success_limit, verse_0xD4531C14_MaxSuccessfulInteractions) == 48, "Offset mismatch for Uinteractable_success_limit::verse_0xD4531C14_MaxSuccessfulInteractions");
