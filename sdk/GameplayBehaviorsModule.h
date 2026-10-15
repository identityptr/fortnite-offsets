/**
 * decamp dumper generated SDK
 * Package: /Script/GameplayBehaviorsModule
 */
#pragma once
#include "Basic.h"

// /Script/GameplayBehaviorsModule.AgentGameplayBehaviors
// Kind: ScriptStruct; super: none
struct FAgentGameplayBehaviors
{
public:
    TArray<void*> Behaviors; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FAgentGameplayBehaviors, Behaviors) == 0, "Offset mismatch for FAgentGameplayBehaviors::Behaviors");

// /Script/GameplayBehaviorsModule.MontagePlaybackData
// Kind: ScriptStruct; super: none
struct FMontagePlaybackData
{
public:
    void* avatar; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    void* AnimMontage; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    void* AbilityComponent; // 0x0010 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(FMontagePlaybackData, avatar) == 0, "Offset mismatch for FMontagePlaybackData::avatar");
static_assert(offsetof(FMontagePlaybackData, AnimMontage) == 8, "Offset mismatch for FMontagePlaybackData::AnimMontage");
static_assert(offsetof(FMontagePlaybackData, AbilityComponent) == 16, "Offset mismatch for FMontagePlaybackData::AbilityComponent");

// /Script/GameplayBehaviorsModule.ValueOrBBKey_GameplayTagContainer
// Kind: ScriptStruct; super: ValueOrBlackboardKeyBase
struct FValueOrBBKey_GameplayTagContainer
{
public:
    std::uint8_t Pad_0000[0x10]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0010 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FValueOrBBKey_GameplayTagContainer, DefaultValue) == 16, "Offset mismatch for FValueOrBBKey_GameplayTagContainer::DefaultValue");

// /Script/GameplayBehaviorsModule.BTDecorator_GameplayTagQuery
// Kind: Class; super: BTDecorator
class UBTDecorator_GameplayTagQuery
{
public:
    std::uint8_t Pad_0000[0x68]; // 0x0000
    std::uint8_t ActorForGameplayTagQuery[0x28]; // 0x0068 (Size: 0x28, Type: StructProperty)
    std::uint8_t GameplayTagQuery[0x48]; // 0x0090 (Size: 0x48, Type: StructProperty)
    TArray<void*> QueryTags; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UBTDecorator_GameplayTagQuery, ActorForGameplayTagQuery) == 104, "Offset mismatch for UBTDecorator_GameplayTagQuery::ActorForGameplayTagQuery");
static_assert(offsetof(UBTDecorator_GameplayTagQuery, GameplayTagQuery) == 144, "Offset mismatch for UBTDecorator_GameplayTagQuery::GameplayTagQuery");
static_assert(offsetof(UBTDecorator_GameplayTagQuery, QueryTags) == 216, "Offset mismatch for UBTDecorator_GameplayTagQuery::QueryTags");

// /Script/GameplayBehaviorsModule.BTTask_SetKeyValueGameplayTag
// Kind: Class; super: BTTask_BlackboardBase
class UBTTask_SetKeyValueGameplayTag
{
public:
    std::uint8_t Pad_0000[0x98]; // 0x0000
    std::uint8_t Value[0x1]; // 0x0098 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBTTask_SetKeyValueGameplayTag, Value) == 152, "Offset mismatch for UBTTask_SetKeyValueGameplayTag::Value");

// /Script/GameplayBehaviorsModule.BTTask_StopGameplayBehavior
// Kind: Class; super: BTTaskNode
class UBTTask_StopGameplayBehavior
{
public:
    std::uint8_t Pad_0000[0x70]; // 0x0000
    void* BehaviorToStop; // 0x0070 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UBTTask_StopGameplayBehavior, BehaviorToStop) == 112, "Offset mismatch for UBTTask_StopGameplayBehavior::BehaviorToStop");

// /Script/GameplayBehaviorsModule.BlackboardKeyType_GameplayTag
// Kind: Class; super: BlackboardKeyType
class UBlackboardKeyType_GameplayTag
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t DefaultValue[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UBlackboardKeyType_GameplayTag, DefaultValue) == 48, "Offset mismatch for UBlackboardKeyType_GameplayTag::DefaultValue");

// /Script/GameplayBehaviorsModule.GameplayBehavior
// Kind: Class; super: Object
class UGameplayBehavior
{
public:
    std::uint8_t Pad_0000[0x3C]; // 0x0000
    std::uint8_t ActionTag[0x1C]; // 0x003C (Size: 0x1C, Type: StructProperty)
    TArray<void*> RelevantActors; // 0x0058 (Size: 0x10, Type: ArrayProperty)
    void* TransientSmartObjectOwner; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* TransientAvatar; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ActiveTasks; // 0x0078 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameplayBehavior, ActionTag) == 60, "Offset mismatch for UGameplayBehavior::ActionTag");
static_assert(offsetof(UGameplayBehavior, RelevantActors) == 88, "Offset mismatch for UGameplayBehavior::RelevantActors");
static_assert(offsetof(UGameplayBehavior, TransientSmartObjectOwner) == 104, "Offset mismatch for UGameplayBehavior::TransientSmartObjectOwner");
static_assert(offsetof(UGameplayBehavior, TransientAvatar) == 112, "Offset mismatch for UGameplayBehavior::TransientAvatar");
static_assert(offsetof(UGameplayBehavior, ActiveTasks) == 120, "Offset mismatch for UGameplayBehavior::ActiveTasks");

// /Script/GameplayBehaviorsModule.GameplayBehaviorConfig
// Kind: Class; super: Object
class UGameplayBehaviorConfig
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* BehaviorClass; // 0x0028 (Size: 0x8, Type: ClassProperty)
};

static_assert(offsetof(UGameplayBehaviorConfig, BehaviorClass) == 40, "Offset mismatch for UGameplayBehaviorConfig::BehaviorClass");

// /Script/GameplayBehaviorsModule.GameplayBehaviorConfig_Animation
// Kind: Class; super: GameplayBehaviorConfig
class UGameplayBehaviorConfig_Animation
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t AnimMontage[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    float PlayRate; // 0x0050 (Size: 0x4, Type: FloatProperty)
    std::uint8_t StartSectionName[0x4]; // 0x0054 (Size: 0x4, Type: NameProperty)
    std::uint8_t bLoop; // 0x0058 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGameplayBehaviorConfig_Animation, AnimMontage) == 48, "Offset mismatch for UGameplayBehaviorConfig_Animation::AnimMontage");
static_assert(offsetof(UGameplayBehaviorConfig_Animation, PlayRate) == 80, "Offset mismatch for UGameplayBehaviorConfig_Animation::PlayRate");
static_assert(offsetof(UGameplayBehaviorConfig_Animation, StartSectionName) == 84, "Offset mismatch for UGameplayBehaviorConfig_Animation::StartSectionName");
static_assert(offsetof(UGameplayBehaviorConfig_Animation, bLoop) == 88, "Offset mismatch for UGameplayBehaviorConfig_Animation::bLoop");

// /Script/GameplayBehaviorsModule.GameplayBehaviorConfig_BehaviorTree
// Kind: Class; super: GameplayBehaviorConfig
class UGameplayBehaviorConfig_BehaviorTree
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    std::uint8_t BehaviorTree[0x20]; // 0x0030 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t bRevertToPreviousBTOnFinish; // 0x0050 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGameplayBehaviorConfig_BehaviorTree, BehaviorTree) == 48, "Offset mismatch for UGameplayBehaviorConfig_BehaviorTree::BehaviorTree");
static_assert(offsetof(UGameplayBehaviorConfig_BehaviorTree, bRevertToPreviousBTOnFinish) == 80, "Offset mismatch for UGameplayBehaviorConfig_BehaviorTree::bRevertToPreviousBTOnFinish");

// /Script/GameplayBehaviorsModule.GameplayBehaviorSubsystem
// Kind: Class; super: WorldSubsystem
class UGameplayBehaviorSubsystem
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TMap<void*, void*> AgentGameplayBehaviors; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UGameplayBehaviorSubsystem, AgentGameplayBehaviors) == 56, "Offset mismatch for UGameplayBehaviorSubsystem::AgentGameplayBehaviors");

// /Script/GameplayBehaviorsModule.GameplayBehavior_AnimationBased
// Kind: Class; super: GameplayBehavior
class UGameplayBehavior_AnimationBased
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    TArray<void*> ActivePlayback; // 0x0088 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UGameplayBehavior_AnimationBased, ActivePlayback) == 136, "Offset mismatch for UGameplayBehavior_AnimationBased::ActivePlayback");

// /Script/GameplayBehaviorsModule.GameplayBehavior_BehaviorTree
// Kind: Class; super: GameplayBehavior
class UGameplayBehavior_BehaviorTree
{
public:
    std::uint8_t Pad_0000[0x88]; // 0x0000
    void* PreviousBT; // 0x0088 (Size: 0x8, Type: ObjectProperty)
    void* AIController; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bSingleRun; // 0x0098 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UGameplayBehavior_BehaviorTree, PreviousBT) == 136, "Offset mismatch for UGameplayBehavior_BehaviorTree::PreviousBT");
static_assert(offsetof(UGameplayBehavior_BehaviorTree, AIController) == 144, "Offset mismatch for UGameplayBehavior_BehaviorTree::AIController");
static_assert(offsetof(UGameplayBehavior_BehaviorTree, bSingleRun) == 152, "Offset mismatch for UGameplayBehavior_BehaviorTree::bSingleRun");

// /Script/GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UGameplayBehaviorsBlueprintFunctionLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/GameplayBehaviorsModule.ValueOrBBKey_GameplayTagBlueprintUtility
// Kind: Class; super: BlueprintFunctionLibrary
class UValueOrBBKey_GameplayTagBlueprintUtility
{
public:
    std::uint8_t Opaque[1];
};
