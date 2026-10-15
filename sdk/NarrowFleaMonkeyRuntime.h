/**
 * decamp dumper generated SDK
 * Package: /Script/NarrowFleaMonkeyRuntime
 */
#pragma once
#include "Basic.h"

// /Script/NarrowFleaMonkeyRuntime.NarrowFleaMonkeySpriteVariant
// Kind: ScriptStruct; super: none
struct FNarrowFleaMonkeySpriteVariant
{
public:
    std::uint8_t VariantRarityTag[0x8]; // 0x0000 (Size: 0x8, Type: StructProperty)
    void* BodyMaterial; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* TailMaterial; // 0x0010 (Size: 0x8, Type: ObjectProperty)
    float VfxHue; // 0x0018 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FNarrowFleaMonkeySpriteVariant, VariantRarityTag) == 0, "Offset mismatch for FNarrowFleaMonkeySpriteVariant::VariantRarityTag");
static_assert(offsetof(FNarrowFleaMonkeySpriteVariant, BodyMaterial) == 8, "Offset mismatch for FNarrowFleaMonkeySpriteVariant::BodyMaterial");
static_assert(offsetof(FNarrowFleaMonkeySpriteVariant, TailMaterial) == 16, "Offset mismatch for FNarrowFleaMonkeySpriteVariant::TailMaterial");
static_assert(offsetof(FNarrowFleaMonkeySpriteVariant, VfxHue) == 24, "Offset mismatch for FNarrowFleaMonkeySpriteVariant::VfxHue");

// /Script/NarrowFleaMonkeyRuntime.FortMovementMode_NarrowFleaMonkey
// Kind: Class; super: FortMovementMode_BaseExtLogic
class UFortMovementMode_NarrowFleaMonkey
{
public:
    std::uint8_t Pad_0000[0x1B8]; // 0x0000
    std::uint8_t LateralMaxPoweredSpeed[0x28]; // 0x01B8 (Size: 0x28, Type: StructProperty)
    std::uint8_t LateralAcceleration[0x28]; // 0x01E0 (Size: 0x28, Type: StructProperty)
    std::uint8_t LateralDeceleration[0x28]; // 0x0208 (Size: 0x28, Type: StructProperty)
    std::uint8_t Gravity[0x28]; // 0x0230 (Size: 0x28, Type: StructProperty)
    void* ZCurve; // 0x0258 (Size: 0x8, Type: ObjectProperty)
    void* ClassMonkey; // 0x0260 (Size: 0x8, Type: ClassProperty)
    void* MonkeyAnimLayer; // 0x0268 (Size: 0x8, Type: ClassProperty)
    std::uint8_t AfterUseCooldownDuration[0x28]; // 0x0270 (Size: 0x28, Type: StructProperty)
    std::uint8_t AfterUseCoolDownToggle[0x28]; // 0x0298 (Size: 0x28, Type: StructProperty)
    std::uint8_t AfterUseCooldownTag[0x8]; // 0x02C0 (Size: 0x8, Type: StructProperty)
    std::uint8_t AirReactivationTimePenalty[0x28]; // 0x02C8 (Size: 0x28, Type: StructProperty)
    std::uint8_t FallDamageImmunityTag[0x8]; // 0x02F0 (Size: 0x8, Type: StructProperty)
    void* MonkeyFallDamageImmunityGameplayEffect; // 0x02F8 (Size: 0x8, Type: ClassProperty)
    std::uint8_t MonkeyVerticalOffset[0x28]; // 0x0300 (Size: 0x28, Type: StructProperty)
    void* HideSpriteGameplayEffect; // 0x0328 (Size: 0x8, Type: ClassProperty)
    std::uint8_t SpriteHideCueTag[0x4]; // 0x0330 (Size: 0x4, Type: StructProperty)
    std::uint8_t SpriteShowCueTag[0x1]; // 0x0334 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UFortMovementMode_NarrowFleaMonkey, LateralMaxPoweredSpeed) == 440, "Offset mismatch for UFortMovementMode_NarrowFleaMonkey::LateralMaxPoweredSpeed");
static_assert(offsetof(UFortMovementMode_NarrowFleaMonkey, LateralAcceleration) == 480, "Offset mismatch for UFortMovementMode_NarrowFleaMonkey::LateralAcceleration");
static_assert(offsetof(UFortMovementMode_NarrowFleaMonkey, LateralDeceleration) == 520, "Offset mismatch for UFortMovementMode_NarrowFleaMonkey::LateralDeceleration");
static_assert(offsetof(UFortMovementMode_NarrowFleaMonkey, Gravity) == 560, "Offset mismatch for UFortMovementMode_NarrowFleaMonkey::Gravity");
static_assert(offsetof(UFortMovementMode_NarrowFleaMonkey, ZCurve) == 600, "Offset mismatch for UFortMovementMode_NarrowFleaMonkey::ZCurve");
static_assert(offsetof(UFortMovementMode_NarrowFleaMonkey, ClassMonkey) == 608, "Offset mismatch for UFortMovementMode_NarrowFleaMonkey::ClassMonkey");
static_assert(offsetof(UFortMovementMode_NarrowFleaMonkey, MonkeyAnimLayer) == 616, "Offset mismatch for UFortMovementMode_NarrowFleaMonkey::MonkeyAnimLayer");
static_assert(offsetof(UFortMovementMode_NarrowFleaMonkey, AfterUseCooldownDuration) == 624, "Offset mismatch for UFortMovementMode_NarrowFleaMonkey::AfterUseCooldownDuration");
static_assert(offsetof(UFortMovementMode_NarrowFleaMonkey, AfterUseCoolDownToggle) == 664, "Offset mismatch for UFortMovementMode_NarrowFleaMonkey::AfterUseCoolDownToggle");
static_assert(offsetof(UFortMovementMode_NarrowFleaMonkey, AfterUseCooldownTag) == 704, "Offset mismatch for UFortMovementMode_NarrowFleaMonkey::AfterUseCooldownTag");
static_assert(offsetof(UFortMovementMode_NarrowFleaMonkey, AirReactivationTimePenalty) == 712, "Offset mismatch for UFortMovementMode_NarrowFleaMonkey::AirReactivationTimePenalty");
static_assert(offsetof(UFortMovementMode_NarrowFleaMonkey, FallDamageImmunityTag) == 752, "Offset mismatch for UFortMovementMode_NarrowFleaMonkey::FallDamageImmunityTag");
static_assert(offsetof(UFortMovementMode_NarrowFleaMonkey, MonkeyFallDamageImmunityGameplayEffect) == 760, "Offset mismatch for UFortMovementMode_NarrowFleaMonkey::MonkeyFallDamageImmunityGameplayEffect");
static_assert(offsetof(UFortMovementMode_NarrowFleaMonkey, MonkeyVerticalOffset) == 768, "Offset mismatch for UFortMovementMode_NarrowFleaMonkey::MonkeyVerticalOffset");
static_assert(offsetof(UFortMovementMode_NarrowFleaMonkey, HideSpriteGameplayEffect) == 808, "Offset mismatch for UFortMovementMode_NarrowFleaMonkey::HideSpriteGameplayEffect");
static_assert(offsetof(UFortMovementMode_NarrowFleaMonkey, SpriteHideCueTag) == 816, "Offset mismatch for UFortMovementMode_NarrowFleaMonkey::SpriteHideCueTag");
static_assert(offsetof(UFortMovementMode_NarrowFleaMonkey, SpriteShowCueTag) == 820, "Offset mismatch for UFortMovementMode_NarrowFleaMonkey::SpriteShowCueTag");

// /Script/NarrowFleaMonkeyRuntime.FortMovementMode_NarrowFleaMonkeyRuntimeData
// Kind: Class; super: FortMovementMode_BaseExtRuntimeData
class UFortMovementMode_NarrowFleaMonkeyRuntimeData
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t LogicID[0x4]; // 0x0028 (Size: 0x4, Type: StructProperty)
    std::uint8_t RuntimeID; // 0x002C (Size: 0x1, Type: ByteProperty)
    std::uint8_t bForceManualActivation; // 0x002D (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualEnd; // 0x002E (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualActivationNetworked; // 0x002F (Size: 0x1, Type: BoolProperty)
    std::uint8_t bForceManualEndNetworked; // 0x0030 (Size: 0x1, Type: BoolProperty)
    std::uint8_t EndReasonFlags; // 0x0031 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UFortMovementMode_NarrowFleaMonkeyRuntimeData, LogicID) == 40, "Offset mismatch for UFortMovementMode_NarrowFleaMonkeyRuntimeData::LogicID");
static_assert(offsetof(UFortMovementMode_NarrowFleaMonkeyRuntimeData, RuntimeID) == 44, "Offset mismatch for UFortMovementMode_NarrowFleaMonkeyRuntimeData::RuntimeID");
static_assert(offsetof(UFortMovementMode_NarrowFleaMonkeyRuntimeData, bForceManualActivation) == 45, "Offset mismatch for UFortMovementMode_NarrowFleaMonkeyRuntimeData::bForceManualActivation");
static_assert(offsetof(UFortMovementMode_NarrowFleaMonkeyRuntimeData, bForceManualEnd) == 46, "Offset mismatch for UFortMovementMode_NarrowFleaMonkeyRuntimeData::bForceManualEnd");
static_assert(offsetof(UFortMovementMode_NarrowFleaMonkeyRuntimeData, bForceManualActivationNetworked) == 47, "Offset mismatch for UFortMovementMode_NarrowFleaMonkeyRuntimeData::bForceManualActivationNetworked");
static_assert(offsetof(UFortMovementMode_NarrowFleaMonkeyRuntimeData, bForceManualEndNetworked) == 48, "Offset mismatch for UFortMovementMode_NarrowFleaMonkeyRuntimeData::bForceManualEndNetworked");
static_assert(offsetof(UFortMovementMode_NarrowFleaMonkeyRuntimeData, EndReasonFlags) == 49, "Offset mismatch for UFortMovementMode_NarrowFleaMonkeyRuntimeData::EndReasonFlags");

// /Script/NarrowFleaMonkeyRuntime.NarrowFleaMonkeyAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UNarrowFleaMonkeyAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    std::uint8_t LocalVelocityTail2D[0x10]; // 0x1170 (Size: 0x10, Type: StructProperty)
    std::uint8_t LocalVelocity2D[0x10]; // 0x1180 (Size: 0x10, Type: StructProperty)
    std::uint8_t LocalVelocity2D_X10[0x10]; // 0x1190 (Size: 0x10, Type: StructProperty)
    std::uint8_t bSlowSpeed; // 0x11A0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bExiting; // 0x11A1 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1E]; // 0x11A2
    void* OwningCharacter; // 0x11C0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UNarrowFleaMonkeyAnimInstance, LocalVelocityTail2D) == 4464, "Offset mismatch for UNarrowFleaMonkeyAnimInstance::LocalVelocityTail2D");
static_assert(offsetof(UNarrowFleaMonkeyAnimInstance, LocalVelocity2D) == 4480, "Offset mismatch for UNarrowFleaMonkeyAnimInstance::LocalVelocity2D");
static_assert(offsetof(UNarrowFleaMonkeyAnimInstance, LocalVelocity2D_X10) == 4496, "Offset mismatch for UNarrowFleaMonkeyAnimInstance::LocalVelocity2D_X10");
static_assert(offsetof(UNarrowFleaMonkeyAnimInstance, bSlowSpeed) == 4512, "Offset mismatch for UNarrowFleaMonkeyAnimInstance::bSlowSpeed");
static_assert(offsetof(UNarrowFleaMonkeyAnimInstance, bExiting) == 4513, "Offset mismatch for UNarrowFleaMonkeyAnimInstance::bExiting");
static_assert(offsetof(UNarrowFleaMonkeyAnimInstance, OwningCharacter) == 4544, "Offset mismatch for UNarrowFleaMonkeyAnimInstance::OwningCharacter");

// /Script/NarrowFleaMonkeyRuntime.NarrowFleaMonkeyLayerAnimInstance
// Kind: Class; super: FortPlayerAnimInstanceProxy
class UNarrowFleaMonkeyLayerAnimInstance
{
public:
    std::uint8_t Pad_0000[0x1170]; // 0x0000
    float HoverYawDelta; // 0x1170 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x1174
    double LeanY; // 0x1178 (Size: 0x8, Type: DoubleProperty)
    double LeanX; // 0x1180 (Size: 0x8, Type: DoubleProperty)
    std::uint8_t bIsStartBlend; // 0x1188 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UNarrowFleaMonkeyLayerAnimInstance, HoverYawDelta) == 4464, "Offset mismatch for UNarrowFleaMonkeyLayerAnimInstance::HoverYawDelta");
static_assert(offsetof(UNarrowFleaMonkeyLayerAnimInstance, LeanY) == 4472, "Offset mismatch for UNarrowFleaMonkeyLayerAnimInstance::LeanY");
static_assert(offsetof(UNarrowFleaMonkeyLayerAnimInstance, LeanX) == 4480, "Offset mismatch for UNarrowFleaMonkeyLayerAnimInstance::LeanX");
static_assert(offsetof(UNarrowFleaMonkeyLayerAnimInstance, bIsStartBlend) == 4488, "Offset mismatch for UNarrowFleaMonkeyLayerAnimInstance::bIsStartBlend");

// /Script/NarrowFleaMonkeyRuntime.NarrowFleaMonkeyProp
// Kind: Class; super: Actor
class UNarrowFleaMonkeyProp
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    std::uint8_t ExitDuration[0x28]; // 0x0270 (Size: 0x28, Type: StructProperty)
    TArray<void*> SpriteVariants; // 0x0298 (Size: 0x10, Type: ArrayProperty)
    std::int32_t BodyMaterialSlotIndex; // 0x02A8 (Size: 0x4, Type: IntProperty)
    std::int32_t TailMaterialSlotIndex; // 0x02AC (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UNarrowFleaMonkeyProp, ExitDuration) == 624, "Offset mismatch for UNarrowFleaMonkeyProp::ExitDuration");
static_assert(offsetof(UNarrowFleaMonkeyProp, SpriteVariants) == 664, "Offset mismatch for UNarrowFleaMonkeyProp::SpriteVariants");
static_assert(offsetof(UNarrowFleaMonkeyProp, BodyMaterialSlotIndex) == 680, "Offset mismatch for UNarrowFleaMonkeyProp::BodyMaterialSlotIndex");
static_assert(offsetof(UNarrowFleaMonkeyProp, TailMaterialSlotIndex) == 684, "Offset mismatch for UNarrowFleaMonkeyProp::TailMaterialSlotIndex");
