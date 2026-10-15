/**
 * decamp dumper generated SDK
 * Package: /Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_Character_Launch
 */
#pragma once
#include "Basic.h"

// /Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_Character_Launch.GE_Generic_Character_Launch_C
// Kind: BlueprintGeneratedClass; super: GameplayEffect
class UGE_Generic_Character_Launch_C
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DurationPolicy; // 0x0030 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0031
    std::uint8_t DurationMagnitude[0x1D8]; // 0x0038 (Size: 0x1D8, Type: StructProperty)
    std::uint8_t MaxDurationMagnitude[0x1D8]; // 0x0210 (Size: 0x1D8, Type: StructProperty)
    std::uint8_t Period[0x28]; // 0x03E8 (Size: 0x28, Type: StructProperty)
    std::uint8_t bExecutePeriodicEffectOnApplication; // 0x0410 (Size: 0x1, Type: BoolProperty)
    std::uint8_t PeriodicInhibitionPolicy; // 0x0411 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0002[0x6]; // 0x0412
    TArray<void*> Modifiers; // 0x0418 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Executions; // 0x0428 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t ChanceToApplyToTarget[0x28]; // 0x0438 (Size: 0x28, Type: StructProperty)
    TArray<void*> ApplicationRequirements; // 0x0460 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> ConditionalGameplayEffects; // 0x0470 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> OverflowEffects; // 0x0480 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bDenyOverflowApplication; // 0x0490 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClearStackOnOverflow; // 0x0491 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0003[0x6]; // 0x0492
    TArray<void*> PrematureExpirationEffectClasses; // 0x0498 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> RoutineExpirationEffectClasses; // 0x04A8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t bRequireModifierSuccessToTriggerCues; // 0x04B8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSuppressStackingCues; // 0x04B9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0004[0x6]; // 0x04BA
    TArray<void*> GameplayCues; // 0x04C0 (Size: 0x10, Type: ArrayProperty)
    void* UIData; // 0x04D0 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t InheritableGameplayEffectTags[0x60]; // 0x04D8 (Size: 0x60, Type: StructProperty)
    std::uint8_t InheritableOwnedTagsContainer[0x60]; // 0x0538 (Size: 0x60, Type: StructProperty)
    std::uint8_t InheritableBlockedAbilityTagsContainer[0x60]; // 0x0598 (Size: 0x60, Type: StructProperty)
    std::uint8_t OngoingTagRequirements[0x88]; // 0x05F8 (Size: 0x88, Type: StructProperty)
    std::uint8_t ApplicationTagRequirements[0x88]; // 0x0680 (Size: 0x88, Type: StructProperty)
    std::uint8_t RemovalTagRequirements[0x88]; // 0x0708 (Size: 0x88, Type: StructProperty)
    std::uint8_t RemoveGameplayEffectsWithTags[0x60]; // 0x0790 (Size: 0x60, Type: StructProperty)
    std::uint8_t GrantedApplicationImmunityTags[0x88]; // 0x07F0 (Size: 0x88, Type: StructProperty)
    std::uint8_t GrantedApplicationImmunityQuery[0x1A0]; // 0x0878 (Size: 0x1A0, Type: StructProperty)
    std::uint8_t RemoveGameplayEffectQuery[0x199]; // 0x0A18 (Size: 0x199, Type: StructProperty)
    std::uint8_t StackingType; // 0x0BB1 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0005[0x2]; // 0x0BB2
    std::int32_t StackLimitCount; // 0x0BB4 (Size: 0x4, Type: IntProperty)
    std::uint8_t StackDurationRefreshPolicy; // 0x0BB8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StackPeriodResetPolicy; // 0x0BB9 (Size: 0x1, Type: EnumProperty)
    std::uint8_t StackExpirationPolicy; // 0x0BBA (Size: 0x1, Type: EnumProperty)
    std::uint8_t bFactorInStackCount; // 0x0BBB (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0006[0x4]; // 0x0BBC
    TArray<void*> GrantedAbilities; // 0x0BC0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t Pad_0007[0x60]; // 0x0BD0
    TArray<void*> GEComponents; // 0x0C30 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGE_Generic_Character_Launch_C, DurationPolicy) == 48, "Offset mismatch for UGE_Generic_Character_Launch_C::DurationPolicy");
static_assert(offsetof(UGE_Generic_Character_Launch_C, DurationMagnitude) == 56, "Offset mismatch for UGE_Generic_Character_Launch_C::DurationMagnitude");
static_assert(offsetof(UGE_Generic_Character_Launch_C, MaxDurationMagnitude) == 528, "Offset mismatch for UGE_Generic_Character_Launch_C::MaxDurationMagnitude");
static_assert(offsetof(UGE_Generic_Character_Launch_C, Period) == 1000, "Offset mismatch for UGE_Generic_Character_Launch_C::Period");
static_assert(offsetof(UGE_Generic_Character_Launch_C, bExecutePeriodicEffectOnApplication) == 1040, "Offset mismatch for UGE_Generic_Character_Launch_C::bExecutePeriodicEffectOnApplication");
static_assert(offsetof(UGE_Generic_Character_Launch_C, PeriodicInhibitionPolicy) == 1041, "Offset mismatch for UGE_Generic_Character_Launch_C::PeriodicInhibitionPolicy");
static_assert(offsetof(UGE_Generic_Character_Launch_C, Modifiers) == 1048, "Offset mismatch for UGE_Generic_Character_Launch_C::Modifiers");
static_assert(offsetof(UGE_Generic_Character_Launch_C, Executions) == 1064, "Offset mismatch for UGE_Generic_Character_Launch_C::Executions");
static_assert(offsetof(UGE_Generic_Character_Launch_C, ChanceToApplyToTarget) == 1080, "Offset mismatch for UGE_Generic_Character_Launch_C::ChanceToApplyToTarget");
static_assert(offsetof(UGE_Generic_Character_Launch_C, ApplicationRequirements) == 1120, "Offset mismatch for UGE_Generic_Character_Launch_C::ApplicationRequirements");
static_assert(offsetof(UGE_Generic_Character_Launch_C, ConditionalGameplayEffects) == 1136, "Offset mismatch for UGE_Generic_Character_Launch_C::ConditionalGameplayEffects");
static_assert(offsetof(UGE_Generic_Character_Launch_C, OverflowEffects) == 1152, "Offset mismatch for UGE_Generic_Character_Launch_C::OverflowEffects");
static_assert(offsetof(UGE_Generic_Character_Launch_C, bDenyOverflowApplication) == 1168, "Offset mismatch for UGE_Generic_Character_Launch_C::bDenyOverflowApplication");
static_assert(offsetof(UGE_Generic_Character_Launch_C, bClearStackOnOverflow) == 1169, "Offset mismatch for UGE_Generic_Character_Launch_C::bClearStackOnOverflow");
static_assert(offsetof(UGE_Generic_Character_Launch_C, PrematureExpirationEffectClasses) == 1176, "Offset mismatch for UGE_Generic_Character_Launch_C::PrematureExpirationEffectClasses");
static_assert(offsetof(UGE_Generic_Character_Launch_C, RoutineExpirationEffectClasses) == 1192, "Offset mismatch for UGE_Generic_Character_Launch_C::RoutineExpirationEffectClasses");
static_assert(offsetof(UGE_Generic_Character_Launch_C, bRequireModifierSuccessToTriggerCues) == 1208, "Offset mismatch for UGE_Generic_Character_Launch_C::bRequireModifierSuccessToTriggerCues");
static_assert(offsetof(UGE_Generic_Character_Launch_C, bSuppressStackingCues) == 1209, "Offset mismatch for UGE_Generic_Character_Launch_C::bSuppressStackingCues");
static_assert(offsetof(UGE_Generic_Character_Launch_C, GameplayCues) == 1216, "Offset mismatch for UGE_Generic_Character_Launch_C::GameplayCues");
static_assert(offsetof(UGE_Generic_Character_Launch_C, UIData) == 1232, "Offset mismatch for UGE_Generic_Character_Launch_C::UIData");
static_assert(offsetof(UGE_Generic_Character_Launch_C, InheritableGameplayEffectTags) == 1240, "Offset mismatch for UGE_Generic_Character_Launch_C::InheritableGameplayEffectTags");
static_assert(offsetof(UGE_Generic_Character_Launch_C, InheritableOwnedTagsContainer) == 1336, "Offset mismatch for UGE_Generic_Character_Launch_C::InheritableOwnedTagsContainer");
static_assert(offsetof(UGE_Generic_Character_Launch_C, InheritableBlockedAbilityTagsContainer) == 1432, "Offset mismatch for UGE_Generic_Character_Launch_C::InheritableBlockedAbilityTagsContainer");
static_assert(offsetof(UGE_Generic_Character_Launch_C, OngoingTagRequirements) == 1528, "Offset mismatch for UGE_Generic_Character_Launch_C::OngoingTagRequirements");
static_assert(offsetof(UGE_Generic_Character_Launch_C, ApplicationTagRequirements) == 1664, "Offset mismatch for UGE_Generic_Character_Launch_C::ApplicationTagRequirements");
static_assert(offsetof(UGE_Generic_Character_Launch_C, RemovalTagRequirements) == 1800, "Offset mismatch for UGE_Generic_Character_Launch_C::RemovalTagRequirements");
static_assert(offsetof(UGE_Generic_Character_Launch_C, RemoveGameplayEffectsWithTags) == 1936, "Offset mismatch for UGE_Generic_Character_Launch_C::RemoveGameplayEffectsWithTags");
static_assert(offsetof(UGE_Generic_Character_Launch_C, GrantedApplicationImmunityTags) == 2032, "Offset mismatch for UGE_Generic_Character_Launch_C::GrantedApplicationImmunityTags");
static_assert(offsetof(UGE_Generic_Character_Launch_C, GrantedApplicationImmunityQuery) == 2168, "Offset mismatch for UGE_Generic_Character_Launch_C::GrantedApplicationImmunityQuery");
static_assert(offsetof(UGE_Generic_Character_Launch_C, RemoveGameplayEffectQuery) == 2584, "Offset mismatch for UGE_Generic_Character_Launch_C::RemoveGameplayEffectQuery");
static_assert(offsetof(UGE_Generic_Character_Launch_C, StackingType) == 2993, "Offset mismatch for UGE_Generic_Character_Launch_C::StackingType");
static_assert(offsetof(UGE_Generic_Character_Launch_C, StackLimitCount) == 2996, "Offset mismatch for UGE_Generic_Character_Launch_C::StackLimitCount");
static_assert(offsetof(UGE_Generic_Character_Launch_C, StackDurationRefreshPolicy) == 3000, "Offset mismatch for UGE_Generic_Character_Launch_C::StackDurationRefreshPolicy");
static_assert(offsetof(UGE_Generic_Character_Launch_C, StackPeriodResetPolicy) == 3001, "Offset mismatch for UGE_Generic_Character_Launch_C::StackPeriodResetPolicy");
static_assert(offsetof(UGE_Generic_Character_Launch_C, StackExpirationPolicy) == 3002, "Offset mismatch for UGE_Generic_Character_Launch_C::StackExpirationPolicy");
static_assert(offsetof(UGE_Generic_Character_Launch_C, bFactorInStackCount) == 3003, "Offset mismatch for UGE_Generic_Character_Launch_C::bFactorInStackCount");
static_assert(offsetof(UGE_Generic_Character_Launch_C, GrantedAbilities) == 3008, "Offset mismatch for UGE_Generic_Character_Launch_C::GrantedAbilities");
static_assert(offsetof(UGE_Generic_Character_Launch_C, GEComponents) == 3120, "Offset mismatch for UGE_Generic_Character_Launch_C::GEComponents");
