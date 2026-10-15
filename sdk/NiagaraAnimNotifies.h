/**
 * decamp dumper generated SDK
 * Package: /Script/NiagaraAnimNotifies
 */
#pragma once
#include "Basic.h"

// /Script/NiagaraAnimNotifies.CurveParameterPair
// Kind: ScriptStruct; super: none
struct FCurveParameterPair
{
public:
    std::uint8_t AnimCurveName[0x4]; // 0x0000 (Size: 0x4, Type: NameProperty)
    FName UserVariableName; // 0x0004 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FCurveParameterPair, AnimCurveName) == 0, "Offset mismatch for FCurveParameterPair::AnimCurveName");
static_assert(offsetof(FCurveParameterPair, UserVariableName) == 4, "Offset mismatch for FCurveParameterPair::UserVariableName");

// /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
// Kind: Class; super: AnimNotifyState
class UAnimNotifyState_TimedNiagaraEffect
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    void* Template; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    FName SocketName; // 0x0038 (Size: 0x8, Type: NameProperty)
    std::uint8_t LocationOffset[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationOffset[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t Scale[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t bApplyRateScaleAsTimeDilation; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDestroyAtEnd; // 0x0089 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, Template) == 48, "Offset mismatch for UAnimNotifyState_TimedNiagaraEffect::Template");
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, SocketName) == 56, "Offset mismatch for UAnimNotifyState_TimedNiagaraEffect::SocketName");
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, LocationOffset) == 64, "Offset mismatch for UAnimNotifyState_TimedNiagaraEffect::LocationOffset");
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, RotationOffset) == 88, "Offset mismatch for UAnimNotifyState_TimedNiagaraEffect::RotationOffset");
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, Scale) == 112, "Offset mismatch for UAnimNotifyState_TimedNiagaraEffect::Scale");
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, bApplyRateScaleAsTimeDilation) == 136, "Offset mismatch for UAnimNotifyState_TimedNiagaraEffect::bApplyRateScaleAsTimeDilation");
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, bDestroyAtEnd) == 137, "Offset mismatch for UAnimNotifyState_TimedNiagaraEffect::bDestroyAtEnd");

// /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
// Kind: Class; super: AnimNotifyState_TimedNiagaraEffect
class UAnimNotifyState_TimedNiagaraEffectAdvanced
{
public:
    std::uint8_t Pad_0000[0x90]; // 0x0000
    std::uint8_t NotifyProgressType; // 0x0090 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bApplyRateScaleToProgress; // 0x0091 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0092
    std::uint8_t NotifyProgressUserParameter[0x4]; // 0x0094 (Size: 0x4, Type: NameProperty)
    TArray<void*> AnimCurves; // 0x0098 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffectAdvanced, NotifyProgressType) == 144, "Offset mismatch for UAnimNotifyState_TimedNiagaraEffectAdvanced::NotifyProgressType");
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffectAdvanced, bApplyRateScaleToProgress) == 145, "Offset mismatch for UAnimNotifyState_TimedNiagaraEffectAdvanced::bApplyRateScaleToProgress");
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffectAdvanced, NotifyProgressUserParameter) == 148, "Offset mismatch for UAnimNotifyState_TimedNiagaraEffectAdvanced::NotifyProgressUserParameter");
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffectAdvanced, AnimCurves) == 152, "Offset mismatch for UAnimNotifyState_TimedNiagaraEffectAdvanced::AnimCurves");

// /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
// Kind: Class; super: AnimNotify
class UAnimNotify_PlayNiagaraEffect
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    void* Template; // 0x0038 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t LocationOffset[0x18]; // 0x0040 (Size: 0x18, Type: StructProperty)
    std::uint8_t RotationOffset[0x18]; // 0x0058 (Size: 0x18, Type: StructProperty)
    std::uint8_t Scale[0x18]; // 0x0070 (Size: 0x18, Type: StructProperty)
    std::uint8_t bAbsoluteScale; // 0x0088 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x37]; // 0x0089
    std::uint8_t Attached; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0002[0x3]; // 0x00C1
    FName SocketName; // 0x00C4 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, Template) == 56, "Offset mismatch for UAnimNotify_PlayNiagaraEffect::Template");
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, LocationOffset) == 64, "Offset mismatch for UAnimNotify_PlayNiagaraEffect::LocationOffset");
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, RotationOffset) == 88, "Offset mismatch for UAnimNotify_PlayNiagaraEffect::RotationOffset");
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, Scale) == 112, "Offset mismatch for UAnimNotify_PlayNiagaraEffect::Scale");
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, bAbsoluteScale) == 136, "Offset mismatch for UAnimNotify_PlayNiagaraEffect::bAbsoluteScale");
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, Attached) == 192, "Offset mismatch for UAnimNotify_PlayNiagaraEffect::Attached");
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, SocketName) == 196, "Offset mismatch for UAnimNotify_PlayNiagaraEffect::SocketName");
