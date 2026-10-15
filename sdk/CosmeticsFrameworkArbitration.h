/**
 * decamp dumper generated SDK
 * Package: /Script/CosmeticsFrameworkArbitration
 */
#pragma once
#include "Basic.h"

// /Script/CosmeticsFrameworkArbitration.CosmeticApplicatorDummyStruct
// Kind: ScriptStruct; super: none
struct FCosmeticApplicatorDummyStruct
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkArbitration.CosmeticApplicatorFallbackParams
// Kind: ScriptStruct; super: none
struct FCosmeticApplicatorFallbackParams
{
public:
    std::uint8_t FlowgraphKey[0x10]; // 0x0000 (Size: 0x10, Type: StructProperty)
    float TimerValue; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bApplyOnAuthority; // 0x0014 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FCosmeticApplicatorFallbackParams, FlowgraphKey) == 0, "Offset mismatch for FCosmeticApplicatorFallbackParams::FlowgraphKey");
static_assert(offsetof(FCosmeticApplicatorFallbackParams, TimerValue) == 16, "Offset mismatch for FCosmeticApplicatorFallbackParams::TimerValue");
static_assert(offsetof(FCosmeticApplicatorFallbackParams, bApplyOnAuthority) == 20, "Offset mismatch for FCosmeticApplicatorFallbackParams::bApplyOnAuthority");

// /Script/CosmeticsFrameworkArbitration.CosmeticApplicatorQueuedPassInfo
// Kind: ScriptStruct; super: none
struct FCosmeticApplicatorQueuedPassInfo
{
public:
    std::uint8_t CosmeticSpec[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCosmeticApplicatorQueuedPassInfo, CosmeticSpec) == 0, "Offset mismatch for FCosmeticApplicatorQueuedPassInfo::CosmeticSpec");

// /Script/CosmeticsFrameworkArbitration.CosmeticPortData
// Kind: ScriptStruct; super: none
struct FCosmeticPortData
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkArbitration.CosmeticPortGroupIdentifier
// Kind: ScriptStruct; super: none
struct FCosmeticPortGroupIdentifier
{
public:
    std::uint8_t PortIdentifierTags[0x20]; // 0x0000 (Size: 0x20, Type: StructProperty)
    std::uint8_t PartTypeTags[0x20]; // 0x0020 (Size: 0x20, Type: StructProperty)
    std::int32_t PartTypeIndex; // 0x0040 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FCosmeticPortGroupIdentifier, PortIdentifierTags) == 0, "Offset mismatch for FCosmeticPortGroupIdentifier::PortIdentifierTags");
static_assert(offsetof(FCosmeticPortGroupIdentifier, PartTypeTags) == 32, "Offset mismatch for FCosmeticPortGroupIdentifier::PartTypeTags");
static_assert(offsetof(FCosmeticPortGroupIdentifier, PartTypeIndex) == 64, "Offset mismatch for FCosmeticPortGroupIdentifier::PartTypeIndex");

// /Script/CosmeticsFrameworkArbitration.CosmeticPortIdentifier
// Kind: ScriptStruct; super: none
struct FCosmeticPortIdentifier
{
public:
    std::uint8_t PortIdentifierTag[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCosmeticPortIdentifier, PortIdentifierTag) == 0, "Offset mismatch for FCosmeticPortIdentifier::PortIdentifierTag");

// /Script/CosmeticsFrameworkArbitration.CosmeticPortInstancedData
// Kind: ScriptStruct; super: none
struct FCosmeticPortInstancedData
{
public:
    TArray<void*> InstancedData; // 0x0000 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FCosmeticPortInstancedData, InstancedData) == 0, "Offset mismatch for FCosmeticPortInstancedData::InstancedData");

// /Script/CosmeticsFrameworkArbitration.CosmeticPortQuery
// Kind: ScriptStruct; super: none
struct FCosmeticPortQuery
{
public:
    std::uint8_t PortQuery[0x1]; // 0x0000 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FCosmeticPortQuery, PortQuery) == 0, "Offset mismatch for FCosmeticPortQuery::PortQuery");

// /Script/CosmeticsFrameworkArbitration.CosmeticApplicatorComponent
// Kind: Class; super: ActorComponent
class UCosmeticApplicatorComponent
{
public:
    std::uint8_t Pad_0000[0x120]; // 0x0000
    std::uint8_t FlowgraphKey[0x10]; // 0x0120 (Size: 0x10, Type: StructProperty)
    std::uint8_t bUseScheduleManager; // 0x0130 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0131
    std::uint8_t FallbackParams[0x30]; // 0x0138 (Size: 0x30, Type: StructProperty)
    std::uint8_t FlowData[0x10]; // 0x0168 (Size: 0x10, Type: StructProperty)
    std::uint8_t QueuedPassInfo[0x1]; // 0x0178 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UCosmeticApplicatorComponent, FlowgraphKey) == 288, "Offset mismatch for UCosmeticApplicatorComponent::FlowgraphKey");
static_assert(offsetof(UCosmeticApplicatorComponent, bUseScheduleManager) == 304, "Offset mismatch for UCosmeticApplicatorComponent::bUseScheduleManager");
static_assert(offsetof(UCosmeticApplicatorComponent, FallbackParams) == 312, "Offset mismatch for UCosmeticApplicatorComponent::FallbackParams");
static_assert(offsetof(UCosmeticApplicatorComponent, FlowData) == 360, "Offset mismatch for UCosmeticApplicatorComponent::FlowData");
static_assert(offsetof(UCosmeticApplicatorComponent, QueuedPassInfo) == 376, "Offset mismatch for UCosmeticApplicatorComponent::QueuedPassInfo");

// /Script/CosmeticsFrameworkArbitration.CosmeticApplicatorFallbackTimerBase
// Kind: Class; super: Object
class UCosmeticApplicatorFallbackTimerBase
{
public:
    std::uint8_t Opaque[1];
};


// /Script/CosmeticsFrameworkArbitration.CosmeticApplicatorFallbackTimerSimple
// Kind: Class; super: CosmeticApplicatorFallbackTimerBase
class UCosmeticApplicatorFallbackTimerSimple
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float TimerValue; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(UCosmeticApplicatorFallbackTimerSimple, TimerValue) == 40, "Offset mismatch for UCosmeticApplicatorFallbackTimerSimple::TimerValue");

// /Script/CosmeticsFrameworkArbitration.CosmeticPortComponent
// Kind: Class; super: ActorComponent
class UCosmeticPortComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    TMap<void*, void*> DesiredPorts; // 0x00C0 (Size: 0x10, Type: MapProperty)
    TMap<void*, void*> AppliedPorts; // 0x00D0 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(UCosmeticPortComponent, DesiredPorts) == 192, "Offset mismatch for UCosmeticPortComponent::DesiredPorts");
static_assert(offsetof(UCosmeticPortComponent, AppliedPorts) == 208, "Offset mismatch for UCosmeticPortComponent::AppliedPorts");
