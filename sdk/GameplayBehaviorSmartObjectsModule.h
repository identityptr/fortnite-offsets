/**
 * decamp dumper generated SDK
 * Package: /Script/GameplayBehaviorSmartObjectsModule
 */
#pragma once
#include "Basic.h"

// /Script/GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject
// Kind: Class; super: AITask
class UAITask_UseGameplayBehaviorSmartObject
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    FMulticastInlineDelegate OnSucceeded; // 0x0068 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnFailed; // 0x0078 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    FMulticastInlineDelegate OnMoveToFailed; // 0x0088 (Size: 0x10, Type: MulticastInlineDelegateProperty)
    void* MoveToTask; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    void* GameplayBehavior; // 0x00A0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UAITask_UseGameplayBehaviorSmartObject, OnSucceeded) == 104, "Offset mismatch for UAITask_UseGameplayBehaviorSmartObject::OnSucceeded");
static_assert(offsetof(UAITask_UseGameplayBehaviorSmartObject, OnFailed) == 120, "Offset mismatch for UAITask_UseGameplayBehaviorSmartObject::OnFailed");
static_assert(offsetof(UAITask_UseGameplayBehaviorSmartObject, OnMoveToFailed) == 136, "Offset mismatch for UAITask_UseGameplayBehaviorSmartObject::OnMoveToFailed");
static_assert(offsetof(UAITask_UseGameplayBehaviorSmartObject, MoveToTask) == 152, "Offset mismatch for UAITask_UseGameplayBehaviorSmartObject::MoveToTask");
static_assert(offsetof(UAITask_UseGameplayBehaviorSmartObject, GameplayBehavior) == 160, "Offset mismatch for UAITask_UseGameplayBehaviorSmartObject::GameplayBehavior");

// /Script/GameplayBehaviorSmartObjectsModule.BTTask_FindAndUseGameplayBehaviorSmartObject
// Kind: Class; super: BTTaskNode
class UBTTask_FindAndUseGameplayBehaviorSmartObject
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    std::uint8_t ActivityRequirements[0x48]; // 0x0070 (Size: 0x48, Type: StructProperty)
    std::uint8_t ClaimPriority; // 0x00B8 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00B9
    std::uint8_t EQSRequest[0x48]; // 0x00C0 (Size: 0x48, Type: StructProperty)
    float Radius; // 0x0108 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UBTTask_FindAndUseGameplayBehaviorSmartObject, ActivityRequirements) == 112, "Offset mismatch for UBTTask_FindAndUseGameplayBehaviorSmartObject::ActivityRequirements");
static_assert(offsetof(UBTTask_FindAndUseGameplayBehaviorSmartObject, ClaimPriority) == 184, "Offset mismatch for UBTTask_FindAndUseGameplayBehaviorSmartObject::ClaimPriority");
static_assert(offsetof(UBTTask_FindAndUseGameplayBehaviorSmartObject, EQSRequest) == 192, "Offset mismatch for UBTTask_FindAndUseGameplayBehaviorSmartObject::EQSRequest");
static_assert(offsetof(UBTTask_FindAndUseGameplayBehaviorSmartObject, Radius) == 264, "Offset mismatch for UBTTask_FindAndUseGameplayBehaviorSmartObject::Radius");

// /Script/GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectBehaviorDefinition
// Kind: Class; super: SmartObjectBehaviorDefinition
class UGameplayBehaviorSmartObjectBehaviorDefinition
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* GameplayBehaviorConfig; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UGameplayBehaviorSmartObjectBehaviorDefinition, GameplayBehaviorConfig) == 40, "Offset mismatch for UGameplayBehaviorSmartObjectBehaviorDefinition::GameplayBehaviorConfig");

// /Script/GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectsBlueprintFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};
