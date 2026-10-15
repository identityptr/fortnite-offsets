/**
 * decamp dumper generated SDK
 * Package: /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit
 */
#pragma once
#include "Basic.h"

// /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C
// Kind: BlueprintGeneratedClass; super: FortGameplayAbility
class UGAB_GenericApplyFullBodyHit_C
{
public:
    std::uint8_t None[0xB20]; // 0x0000 (Size: 0xB20, Type: UnknownProperty)
    std::uint8_t UberGraphFrame[0x8]; // 0x0B20 (Size: 0x8, Type: StructProperty)
    std::uint8_t HitReactGameplayEventData[0xC0]; // 0x0B28 (Size: 0xC0, Type: StructProperty)
    std::uint8_t HitImpulse[0x18]; // 0x0BE8 (Size: 0x18, Type: StructProperty)
    std::uint8_t ActiveImpactImmunity[0x14]; // 0x0C00 (Size: 0x14, Type: StructProperty)
    std::uint8_t ActiveFullBodyHit[0x14]; // 0x0C14 (Size: 0x14, Type: StructProperty)
    std::uint8_t FullBodyHitReact_InterrupBehavior_Handle[0x14]; // 0x0C28 (Size: 0x14, Type: StructProperty)
    std::uint8_t Event_Triggered_FullBodyHit[0x8]; // 0x0C3C (Size: 0x8, Type: StructProperty)
    std::uint8_t FullBodyHitMontageSection[0x4]; // 0x0C44 (Size: 0x4, Type: NameProperty)
    void* FullBodyHitMontage; // 0x0C48 (Size: 0x8, Type: ObjectProperty)
    void* ProxyAssetFullBodyHit; // 0x0C50 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t EndAbilityOnBlendOut; // 0x0C58 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0C59
    double Duration_NoAnim; // 0x0C60 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t DebugFullBodyHitReact; // 0x0C68 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0C69
    std::uint8_t OnHitPawnPropagateControl_HF[0x28]; // 0x0C70 (Size: 0x28, Type: StructProperty)
    void* GE_FullBodyHitActiveEffect; // 0x0C98 (Size: 0x8, Type: ClassProperty)
    std::uint8_t Pad_0002[0x8]; // 0x0CA0
    void* GE_ImpactImmunity; // 0x0CA8 (Size: 0x8, Type: ClassProperty)
    void* GE_FullBodyHitReact_InterrupBehavior; // 0x0CB0 (Size: 0x8, Type: ClassProperty)
    TArray<void*> HitPawnsWeHavePropagatedControlTo; // 0x0CB8 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t IsUsingProxyTables; // 0x0CC8 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, None) == 0, "Offset mismatch for UGAB_GenericApplyFullBodyHit_C::None");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, UberGraphFrame) == 2848, "Offset mismatch for UGAB_GenericApplyFullBodyHit_C::UberGraphFrame");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, HitReactGameplayEventData) == 2856, "Offset mismatch for UGAB_GenericApplyFullBodyHit_C::HitReactGameplayEventData");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, HitImpulse) == 3048, "Offset mismatch for UGAB_GenericApplyFullBodyHit_C::HitImpulse");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, ActiveImpactImmunity) == 3072, "Offset mismatch for UGAB_GenericApplyFullBodyHit_C::ActiveImpactImmunity");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, ActiveFullBodyHit) == 3092, "Offset mismatch for UGAB_GenericApplyFullBodyHit_C::ActiveFullBodyHit");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, FullBodyHitReact_InterrupBehavior_Handle) == 3112, "Offset mismatch for UGAB_GenericApplyFullBodyHit_C::FullBodyHitReact_InterrupBehavior_Handle");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, Event_Triggered_FullBodyHit) == 3132, "Offset mismatch for UGAB_GenericApplyFullBodyHit_C::Event_Triggered_FullBodyHit");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, FullBodyHitMontageSection) == 3140, "Offset mismatch for UGAB_GenericApplyFullBodyHit_C::FullBodyHitMontageSection");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, FullBodyHitMontage) == 3144, "Offset mismatch for UGAB_GenericApplyFullBodyHit_C::FullBodyHitMontage");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, ProxyAssetFullBodyHit) == 3152, "Offset mismatch for UGAB_GenericApplyFullBodyHit_C::ProxyAssetFullBodyHit");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, EndAbilityOnBlendOut) == 3160, "Offset mismatch for UGAB_GenericApplyFullBodyHit_C::EndAbilityOnBlendOut");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, Duration_NoAnim) == 3168, "Offset mismatch for UGAB_GenericApplyFullBodyHit_C::Duration_NoAnim");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, DebugFullBodyHitReact) == 3176, "Offset mismatch for UGAB_GenericApplyFullBodyHit_C::DebugFullBodyHitReact");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, OnHitPawnPropagateControl_HF) == 3184, "Offset mismatch for UGAB_GenericApplyFullBodyHit_C::OnHitPawnPropagateControl_HF");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, GE_FullBodyHitActiveEffect) == 3224, "Offset mismatch for UGAB_GenericApplyFullBodyHit_C::GE_FullBodyHitActiveEffect");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, GE_ImpactImmunity) == 3240, "Offset mismatch for UGAB_GenericApplyFullBodyHit_C::GE_ImpactImmunity");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, GE_FullBodyHitReact_InterrupBehavior) == 3248, "Offset mismatch for UGAB_GenericApplyFullBodyHit_C::GE_FullBodyHitReact_InterrupBehavior");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, HitPawnsWeHavePropagatedControlTo) == 3256, "Offset mismatch for UGAB_GenericApplyFullBodyHit_C::HitPawnsWeHavePropagatedControlTo");
static_assert(offsetof(UGAB_GenericApplyFullBodyHit_C, IsUsingProxyTables) == 3272, "Offset mismatch for UGAB_GenericApplyFullBodyHit_C::IsUsingProxyTables");
