/**
 * decamp dumper generated SDK
 * Package: /Script/LearningAgents
 */
#pragma once
#include "Basic.h"

// /Script/LearningAgents.Conv1dObservationParams
// Kind: ScriptStruct; super: none
struct FConv1dObservationParams
{
public:
    std::int32_t InputLength; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t InChannels; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t OutChannels; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t KernelSize; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t Padding; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t PaddingMode; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t ActivationFunction; // 0x0015 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FConv1dObservationParams, InputLength) == 0, "Offset mismatch for FConv1dObservationParams::InputLength");
static_assert(offsetof(FConv1dObservationParams, InChannels) == 4, "Offset mismatch for FConv1dObservationParams::InChannels");
static_assert(offsetof(FConv1dObservationParams, OutChannels) == 8, "Offset mismatch for FConv1dObservationParams::OutChannels");
static_assert(offsetof(FConv1dObservationParams, KernelSize) == 12, "Offset mismatch for FConv1dObservationParams::KernelSize");
static_assert(offsetof(FConv1dObservationParams, Padding) == 16, "Offset mismatch for FConv1dObservationParams::Padding");
static_assert(offsetof(FConv1dObservationParams, PaddingMode) == 20, "Offset mismatch for FConv1dObservationParams::PaddingMode");
static_assert(offsetof(FConv1dObservationParams, ActivationFunction) == 21, "Offset mismatch for FConv1dObservationParams::ActivationFunction");

// /Script/LearningAgents.Conv2dObservationParams
// Kind: ScriptStruct; super: none
struct FConv2dObservationParams
{
public:
    std::int32_t InputHeight; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t InputWidth; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t InChannels; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t OutChannels; // 0x000C (Size: 0x4, Type: IntProperty)
    std::int32_t KernelSize; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::int32_t Stride; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t Padding; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t ActivationFunction; // 0x001C (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FConv2dObservationParams, InputHeight) == 0, "Offset mismatch for FConv2dObservationParams::InputHeight");
static_assert(offsetof(FConv2dObservationParams, InputWidth) == 4, "Offset mismatch for FConv2dObservationParams::InputWidth");
static_assert(offsetof(FConv2dObservationParams, InChannels) == 8, "Offset mismatch for FConv2dObservationParams::InChannels");
static_assert(offsetof(FConv2dObservationParams, OutChannels) == 12, "Offset mismatch for FConv2dObservationParams::OutChannels");
static_assert(offsetof(FConv2dObservationParams, KernelSize) == 16, "Offset mismatch for FConv2dObservationParams::KernelSize");
static_assert(offsetof(FConv2dObservationParams, Stride) == 20, "Offset mismatch for FConv2dObservationParams::Stride");
static_assert(offsetof(FConv2dObservationParams, Padding) == 24, "Offset mismatch for FConv2dObservationParams::Padding");
static_assert(offsetof(FConv2dObservationParams, ActivationFunction) == 28, "Offset mismatch for FConv2dObservationParams::ActivationFunction");

// /Script/LearningAgents.DepthMapConfig
// Kind: ScriptStruct; super: none
struct FDepthMapConfig
{
public:
    float HorizontalFOV; // 0x0000 (Size: 0x4, Type: FloatProperty)
    float AspectRatio; // 0x0004 (Size: 0x4, Type: FloatProperty)
    std::int32_t Width; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t Height; // 0x000C (Size: 0x4, Type: IntProperty)
    float MaxDistance; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0000[0x4]; // 0x0014
    std::uint8_t FrustumOffset[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t bInvertEncoding; // 0x0030 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FDepthMapConfig, HorizontalFOV) == 0, "Offset mismatch for FDepthMapConfig::HorizontalFOV");
static_assert(offsetof(FDepthMapConfig, AspectRatio) == 4, "Offset mismatch for FDepthMapConfig::AspectRatio");
static_assert(offsetof(FDepthMapConfig, Width) == 8, "Offset mismatch for FDepthMapConfig::Width");
static_assert(offsetof(FDepthMapConfig, Height) == 12, "Offset mismatch for FDepthMapConfig::Height");
static_assert(offsetof(FDepthMapConfig, MaxDistance) == 16, "Offset mismatch for FDepthMapConfig::MaxDistance");
static_assert(offsetof(FDepthMapConfig, FrustumOffset) == 24, "Offset mismatch for FDepthMapConfig::FrustumOffset");
static_assert(offsetof(FDepthMapConfig, bInvertEncoding) == 48, "Offset mismatch for FDepthMapConfig::bInvertEncoding");

// /Script/LearningAgents.LearningAgentsActionModifierElement
// Kind: ScriptStruct; super: none
struct FLearningAgentsActionModifierElement
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LearningAgents.LearningAgentsActionNormalizationSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsActionNormalizationSettings
{
public:
    std::uint8_t NormalizationOption; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> Scales; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Offsets; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLearningAgentsActionNormalizationSettings, NormalizationOption) == 0, "Offset mismatch for FLearningAgentsActionNormalizationSettings::NormalizationOption");
static_assert(offsetof(FLearningAgentsActionNormalizationSettings, Scales) == 8, "Offset mismatch for FLearningAgentsActionNormalizationSettings::Scales");
static_assert(offsetof(FLearningAgentsActionNormalizationSettings, Offsets) == 24, "Offset mismatch for FLearningAgentsActionNormalizationSettings::Offsets");

// /Script/LearningAgents.LearningAgentsActionObjectElement
// Kind: ScriptStruct; super: none
struct FLearningAgentsActionObjectElement
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LearningAgents.LearningAgentsActionSchemaElement
// Kind: ScriptStruct; super: none
struct FLearningAgentsActionSchemaElement
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LearningAgents.LearningAgentsCriticSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsCriticSettings
{
public:
    std::int32_t HiddenLayerNum; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t HiddenLayerSize; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t ActivationFunction; // 0x0008 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(FLearningAgentsCriticSettings, HiddenLayerNum) == 0, "Offset mismatch for FLearningAgentsCriticSettings::HiddenLayerNum");
static_assert(offsetof(FLearningAgentsCriticSettings, HiddenLayerSize) == 4, "Offset mismatch for FLearningAgentsCriticSettings::HiddenLayerSize");
static_assert(offsetof(FLearningAgentsCriticSettings, ActivationFunction) == 8, "Offset mismatch for FLearningAgentsCriticSettings::ActivationFunction");

// /Script/LearningAgents.LearningAgentsFloatActionNormalizationSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsFloatActionNormalizationSettings
{
public:
    std::uint8_t NormalizationOption; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Scale; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Offset; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLearningAgentsFloatActionNormalizationSettings, NormalizationOption) == 0, "Offset mismatch for FLearningAgentsFloatActionNormalizationSettings::NormalizationOption");
static_assert(offsetof(FLearningAgentsFloatActionNormalizationSettings, Scale) == 4, "Offset mismatch for FLearningAgentsFloatActionNormalizationSettings::Scale");
static_assert(offsetof(FLearningAgentsFloatActionNormalizationSettings, Offset) == 8, "Offset mismatch for FLearningAgentsFloatActionNormalizationSettings::Offset");

// /Script/LearningAgents.LearningAgentsFloatObservationNormalizationSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsFloatObservationNormalizationSettings
{
public:
    std::uint8_t NormalizationOption; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0001
    float Scale; // 0x0004 (Size: 0x4, Type: FloatProperty)
    float Offset; // 0x0008 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLearningAgentsFloatObservationNormalizationSettings, NormalizationOption) == 0, "Offset mismatch for FLearningAgentsFloatObservationNormalizationSettings::NormalizationOption");
static_assert(offsetof(FLearningAgentsFloatObservationNormalizationSettings, Scale) == 4, "Offset mismatch for FLearningAgentsFloatObservationNormalizationSettings::Scale");
static_assert(offsetof(FLearningAgentsFloatObservationNormalizationSettings, Offset) == 8, "Offset mismatch for FLearningAgentsFloatObservationNormalizationSettings::Offset");

// /Script/LearningAgents.LearningAgentsFlowMatchingSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsFlowMatchingSettings
{
public:
    std::int32_t ActionChunkSize; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t HiddenLayerNum; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t HiddenLayerSize; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::uint8_t ActivationFunction; // 0x000C (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x000D
    std::int32_t ODEStepsNum; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FLearningAgentsFlowMatchingSettings, ActionChunkSize) == 0, "Offset mismatch for FLearningAgentsFlowMatchingSettings::ActionChunkSize");
static_assert(offsetof(FLearningAgentsFlowMatchingSettings, HiddenLayerNum) == 4, "Offset mismatch for FLearningAgentsFlowMatchingSettings::HiddenLayerNum");
static_assert(offsetof(FLearningAgentsFlowMatchingSettings, HiddenLayerSize) == 8, "Offset mismatch for FLearningAgentsFlowMatchingSettings::HiddenLayerSize");
static_assert(offsetof(FLearningAgentsFlowMatchingSettings, ActivationFunction) == 12, "Offset mismatch for FLearningAgentsFlowMatchingSettings::ActivationFunction");
static_assert(offsetof(FLearningAgentsFlowMatchingSettings, ODEStepsNum) == 16, "Offset mismatch for FLearningAgentsFlowMatchingSettings::ODEStepsNum");

// /Script/LearningAgents.LearningAgentsObservationNormalizationSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsObservationNormalizationSettings
{
public:
    std::uint8_t NormalizationOption; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> Scales; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Offsets; // 0x0018 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLearningAgentsObservationNormalizationSettings, NormalizationOption) == 0, "Offset mismatch for FLearningAgentsObservationNormalizationSettings::NormalizationOption");
static_assert(offsetof(FLearningAgentsObservationNormalizationSettings, Scales) == 8, "Offset mismatch for FLearningAgentsObservationNormalizationSettings::Scales");
static_assert(offsetof(FLearningAgentsObservationNormalizationSettings, Offsets) == 24, "Offset mismatch for FLearningAgentsObservationNormalizationSettings::Offsets");

// /Script/LearningAgents.LearningAgentsObservationObjectElement
// Kind: ScriptStruct; super: none
struct FLearningAgentsObservationObjectElement
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LearningAgents.LearningAgentsObservationSchemaElement
// Kind: ScriptStruct; super: none
struct FLearningAgentsObservationSchemaElement
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LearningAgents.LearningAgentsObservationVisualLoggerSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsObservationVisualLoggerSettings
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* Listener; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::int32_t AgentId; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    std::uint8_t DebugLocation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Location[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t Color[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    float ArrowLength; // 0x0058 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLearningAgentsObservationVisualLoggerSettings, bEnabled) == 0, "Offset mismatch for FLearningAgentsObservationVisualLoggerSettings::bEnabled");
static_assert(offsetof(FLearningAgentsObservationVisualLoggerSettings, Listener) == 8, "Offset mismatch for FLearningAgentsObservationVisualLoggerSettings::Listener");
static_assert(offsetof(FLearningAgentsObservationVisualLoggerSettings, AgentId) == 16, "Offset mismatch for FLearningAgentsObservationVisualLoggerSettings::AgentId");
static_assert(offsetof(FLearningAgentsObservationVisualLoggerSettings, DebugLocation) == 24, "Offset mismatch for FLearningAgentsObservationVisualLoggerSettings::DebugLocation");
static_assert(offsetof(FLearningAgentsObservationVisualLoggerSettings, Location) == 48, "Offset mismatch for FLearningAgentsObservationVisualLoggerSettings::Location");
static_assert(offsetof(FLearningAgentsObservationVisualLoggerSettings, Color) == 72, "Offset mismatch for FLearningAgentsObservationVisualLoggerSettings::Color");
static_assert(offsetof(FLearningAgentsObservationVisualLoggerSettings, ArrowLength) == 88, "Offset mismatch for FLearningAgentsObservationVisualLoggerSettings::ArrowLength");

// /Script/LearningAgents.LearningAgentsPolicySettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsPolicySettings
{
public:
    std::int32_t HiddenLayerNum; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t HiddenLayerSize; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::uint8_t MemoryCell; // 0x0008 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0009
    std::int32_t MemoryStateSize; // 0x000C (Size: 0x4, Type: IntProperty)
    float InitialEncodedActionScale; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t ActivationFunction; // 0x0014 (Size: 0x1, Type: EnumProperty)
    std::uint8_t bUseParallelEvaluation; // 0x0015 (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FLearningAgentsPolicySettings, HiddenLayerNum) == 0, "Offset mismatch for FLearningAgentsPolicySettings::HiddenLayerNum");
static_assert(offsetof(FLearningAgentsPolicySettings, HiddenLayerSize) == 4, "Offset mismatch for FLearningAgentsPolicySettings::HiddenLayerSize");
static_assert(offsetof(FLearningAgentsPolicySettings, MemoryCell) == 8, "Offset mismatch for FLearningAgentsPolicySettings::MemoryCell");
static_assert(offsetof(FLearningAgentsPolicySettings, MemoryStateSize) == 12, "Offset mismatch for FLearningAgentsPolicySettings::MemoryStateSize");
static_assert(offsetof(FLearningAgentsPolicySettings, InitialEncodedActionScale) == 16, "Offset mismatch for FLearningAgentsPolicySettings::InitialEncodedActionScale");
static_assert(offsetof(FLearningAgentsPolicySettings, ActivationFunction) == 20, "Offset mismatch for FLearningAgentsPolicySettings::ActivationFunction");
static_assert(offsetof(FLearningAgentsPolicySettings, bUseParallelEvaluation) == 21, "Offset mismatch for FLearningAgentsPolicySettings::bUseParallelEvaluation");

// /Script/LearningAgents.LearningAgentsVectorActionNormalizationSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsVectorActionNormalizationSettings
{
public:
    std::uint8_t NormalizationOption; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t Scales[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Offsets[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLearningAgentsVectorActionNormalizationSettings, NormalizationOption) == 0, "Offset mismatch for FLearningAgentsVectorActionNormalizationSettings::NormalizationOption");
static_assert(offsetof(FLearningAgentsVectorActionNormalizationSettings, Scales) == 8, "Offset mismatch for FLearningAgentsVectorActionNormalizationSettings::Scales");
static_assert(offsetof(FLearningAgentsVectorActionNormalizationSettings, Offsets) == 32, "Offset mismatch for FLearningAgentsVectorActionNormalizationSettings::Offsets");

// /Script/LearningAgents.LearningAgentsVectorObservationNormalizationSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsVectorObservationNormalizationSettings
{
public:
    std::uint8_t NormalizationOption; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    std::uint8_t Scales[0x18]; // 0x0008 (Size: 0x18, Type: StructProperty)
    std::uint8_t Offsets[0x1]; // 0x0020 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FLearningAgentsVectorObservationNormalizationSettings, NormalizationOption) == 0, "Offset mismatch for FLearningAgentsVectorObservationNormalizationSettings::NormalizationOption");
static_assert(offsetof(FLearningAgentsVectorObservationNormalizationSettings, Scales) == 8, "Offset mismatch for FLearningAgentsVectorObservationNormalizationSettings::Scales");
static_assert(offsetof(FLearningAgentsVectorObservationNormalizationSettings, Offsets) == 32, "Offset mismatch for FLearningAgentsVectorObservationNormalizationSettings::Offsets");

// /Script/LearningAgents.LearningAgentsVisualLoggerSettings
// Kind: ScriptStruct; super: none
struct FLearningAgentsVisualLoggerSettings
{
public:
    std::uint8_t bEnabled; // 0x0000 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    void* Listener; // 0x0008 (Size: 0x8, Type: ObjectProperty)
    std::int32_t AgentId; // 0x0010 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x0014
    std::uint8_t DebugLocation[0x18]; // 0x0018 (Size: 0x18, Type: StructProperty)
    std::uint8_t Location[0x18]; // 0x0030 (Size: 0x18, Type: StructProperty)
    std::uint8_t Color[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    float ArrowLength; // 0x0058 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FLearningAgentsVisualLoggerSettings, bEnabled) == 0, "Offset mismatch for FLearningAgentsVisualLoggerSettings::bEnabled");
static_assert(offsetof(FLearningAgentsVisualLoggerSettings, Listener) == 8, "Offset mismatch for FLearningAgentsVisualLoggerSettings::Listener");
static_assert(offsetof(FLearningAgentsVisualLoggerSettings, AgentId) == 16, "Offset mismatch for FLearningAgentsVisualLoggerSettings::AgentId");
static_assert(offsetof(FLearningAgentsVisualLoggerSettings, DebugLocation) == 24, "Offset mismatch for FLearningAgentsVisualLoggerSettings::DebugLocation");
static_assert(offsetof(FLearningAgentsVisualLoggerSettings, Location) == 48, "Offset mismatch for FLearningAgentsVisualLoggerSettings::Location");
static_assert(offsetof(FLearningAgentsVisualLoggerSettings, Color) == 72, "Offset mismatch for FLearningAgentsVisualLoggerSettings::Color");
static_assert(offsetof(FLearningAgentsVisualLoggerSettings, ArrowLength) == 88, "Offset mismatch for FLearningAgentsVisualLoggerSettings::ArrowLength");

// /Script/LearningAgents.LearningAgentsActionModifier
// Kind: Class; super: Object
class ULearningAgentsActionModifier
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LearningAgents.LearningAgentsActionObject
// Kind: Class; super: Object
class ULearningAgentsActionObject
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LearningAgents.LearningAgentsActionSchema
// Kind: Class; super: Object
class ULearningAgentsActionSchema
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LearningAgents.LearningAgentsActions
// Kind: Class; super: BlueprintFunctionLibrary
class ULearningAgentsActions
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LearningAgents.LearningAgentsController
// Kind: Class; super: LearningAgentsManagerListener
class ULearningAgentsController
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Interactor; // 0x0048 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULearningAgentsController, Interactor) == 72, "Offset mismatch for ULearningAgentsController::Interactor");

// /Script/LearningAgents.LearningAgentsCritic
// Kind: Class; super: LearningAgentsManagerListener
class ULearningAgentsCritic
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Interactor; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* Policy; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* CriticNetwork; // 0x0058 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULearningAgentsCritic, Interactor) == 72, "Offset mismatch for ULearningAgentsCritic::Interactor");
static_assert(offsetof(ULearningAgentsCritic, Policy) == 80, "Offset mismatch for ULearningAgentsCritic::Policy");
static_assert(offsetof(ULearningAgentsCritic, CriticNetwork) == 88, "Offset mismatch for ULearningAgentsCritic::CriticNetwork");

// /Script/LearningAgents.LearningAgentsDepthMapComponent
// Kind: Class; super: ActorComponent
class ULearningAgentsDepthMapComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t bDrawDepthFrustum; // 0x00C0 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x00C1
    std::uint8_t DepthMapConfig[0x38]; // 0x00C8 (Size: 0x38, Type: StructProperty)
    std::int32_t DepthRaysBatchSize; // 0x0100 (Size: 0x4, Type: IntProperty)
    std::uint8_t CollisionChannel; // 0x0104 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(ULearningAgentsDepthMapComponent, bDrawDepthFrustum) == 192, "Offset mismatch for ULearningAgentsDepthMapComponent::bDrawDepthFrustum");
static_assert(offsetof(ULearningAgentsDepthMapComponent, DepthMapConfig) == 200, "Offset mismatch for ULearningAgentsDepthMapComponent::DepthMapConfig");
static_assert(offsetof(ULearningAgentsDepthMapComponent, DepthRaysBatchSize) == 256, "Offset mismatch for ULearningAgentsDepthMapComponent::DepthRaysBatchSize");
static_assert(offsetof(ULearningAgentsDepthMapComponent, CollisionChannel) == 260, "Offset mismatch for ULearningAgentsDepthMapComponent::CollisionChannel");

// /Script/LearningAgents.LearningAgentsFlowMatching
// Kind: Class; super: LearningAgentsManagerListener
class ULearningAgentsFlowMatching
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Interactor; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* EncoderNetwork; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* DenoiserNetwork; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* DecoderNetwork; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULearningAgentsFlowMatching, Interactor) == 72, "Offset mismatch for ULearningAgentsFlowMatching::Interactor");
static_assert(offsetof(ULearningAgentsFlowMatching, EncoderNetwork) == 80, "Offset mismatch for ULearningAgentsFlowMatching::EncoderNetwork");
static_assert(offsetof(ULearningAgentsFlowMatching, DenoiserNetwork) == 88, "Offset mismatch for ULearningAgentsFlowMatching::DenoiserNetwork");
static_assert(offsetof(ULearningAgentsFlowMatching, DecoderNetwork) == 96, "Offset mismatch for ULearningAgentsFlowMatching::DecoderNetwork");

// /Script/LearningAgents.LearningAgentsInteractor
// Kind: Class; super: LearningAgentsManagerListener
class ULearningAgentsInteractor
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* ObservationSchema; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ObservationSchemaElement[0x8]; // 0x0050 (Size: 0x8, Type: StructProperty)
    void* ActionSchema; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t ActionSchemaElement[0x8]; // 0x0060 (Size: 0x8, Type: StructProperty)
    void* ObservationObject; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ObservationObjectElements; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    void* ActionModifier; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ActionModifierElements; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    void* ActionObject; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> ActionObjectElements; // 0x00A0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULearningAgentsInteractor, ObservationSchema) == 72, "Offset mismatch for ULearningAgentsInteractor::ObservationSchema");
static_assert(offsetof(ULearningAgentsInteractor, ObservationSchemaElement) == 80, "Offset mismatch for ULearningAgentsInteractor::ObservationSchemaElement");
static_assert(offsetof(ULearningAgentsInteractor, ActionSchema) == 88, "Offset mismatch for ULearningAgentsInteractor::ActionSchema");
static_assert(offsetof(ULearningAgentsInteractor, ActionSchemaElement) == 96, "Offset mismatch for ULearningAgentsInteractor::ActionSchemaElement");
static_assert(offsetof(ULearningAgentsInteractor, ObservationObject) == 104, "Offset mismatch for ULearningAgentsInteractor::ObservationObject");
static_assert(offsetof(ULearningAgentsInteractor, ObservationObjectElements) == 112, "Offset mismatch for ULearningAgentsInteractor::ObservationObjectElements");
static_assert(offsetof(ULearningAgentsInteractor, ActionModifier) == 128, "Offset mismatch for ULearningAgentsInteractor::ActionModifier");
static_assert(offsetof(ULearningAgentsInteractor, ActionModifierElements) == 136, "Offset mismatch for ULearningAgentsInteractor::ActionModifierElements");
static_assert(offsetof(ULearningAgentsInteractor, ActionObject) == 152, "Offset mismatch for ULearningAgentsInteractor::ActionObject");
static_assert(offsetof(ULearningAgentsInteractor, ActionObjectElements) == 160, "Offset mismatch for ULearningAgentsInteractor::ActionObjectElements");

// /Script/LearningAgents.LearningAgentsManager
// Kind: Class; super: ActorComponent
class ULearningAgentsManager
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::int32_t MaxAgentNum; // 0x00C0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0001[0x4]; // 0x00C4
    TArray<void*> Agents; // 0x00C8 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Listeners; // 0x00D8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(ULearningAgentsManager, MaxAgentNum) == 192, "Offset mismatch for ULearningAgentsManager::MaxAgentNum");
static_assert(offsetof(ULearningAgentsManager, Agents) == 200, "Offset mismatch for ULearningAgentsManager::Agents");
static_assert(offsetof(ULearningAgentsManager, Listeners) == 216, "Offset mismatch for ULearningAgentsManager::Listeners");

// /Script/LearningAgents.LearningAgentsManagerListener
// Kind: Class; super: Object
class ULearningAgentsManagerListener
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bIsSetup; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x7]; // 0x0029
    void* Manager; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TMap<void*, void*> VisualLoggerObjects; // 0x0038 (Size: 0x10, Type: MapProperty)
};

static_assert(offsetof(ULearningAgentsManagerListener, bIsSetup) == 40, "Offset mismatch for ULearningAgentsManagerListener::bIsSetup");
static_assert(offsetof(ULearningAgentsManagerListener, Manager) == 48, "Offset mismatch for ULearningAgentsManagerListener::Manager");
static_assert(offsetof(ULearningAgentsManagerListener, VisualLoggerObjects) == 56, "Offset mismatch for ULearningAgentsManagerListener::VisualLoggerObjects");

// /Script/LearningAgents.LearningAgentsNeuralNetwork
// Kind: Class; super: DataAsset
class ULearningAgentsNeuralNetwork
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    void* NeuralNetworkData; // 0x0028 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULearningAgentsNeuralNetwork, NeuralNetworkData) == 40, "Offset mismatch for ULearningAgentsNeuralNetwork::NeuralNetworkData");

// /Script/LearningAgents.LearningAgentsObservationObject
// Kind: Class; super: Object
class ULearningAgentsObservationObject
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LearningAgents.LearningAgentsObservationSchema
// Kind: Class; super: Object
class ULearningAgentsObservationSchema
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LearningAgents.LearningAgentsObservations
// Kind: Class; super: BlueprintFunctionLibrary
class ULearningAgentsObservations
{
public:
    std::uint8_t Opaque[1];
};


// /Script/LearningAgents.LearningAgentsPolicy
// Kind: Class; super: LearningAgentsManagerListener
class ULearningAgentsPolicy
{
public:
    std::uint8_t Pad_0000[0x48]; // 0x0000
    void* Interactor; // 0x0048 (Size: 0x8, Type: ObjectProperty)
    void* EncoderNetwork; // 0x0050 (Size: 0x8, Type: ObjectProperty)
    void* PolicyNetwork; // 0x0058 (Size: 0x8, Type: ObjectProperty)
    void* DecoderNetwork; // 0x0060 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULearningAgentsPolicy, Interactor) == 72, "Offset mismatch for ULearningAgentsPolicy::Interactor");
static_assert(offsetof(ULearningAgentsPolicy, EncoderNetwork) == 80, "Offset mismatch for ULearningAgentsPolicy::EncoderNetwork");
static_assert(offsetof(ULearningAgentsPolicy, PolicyNetwork) == 88, "Offset mismatch for ULearningAgentsPolicy::PolicyNetwork");
static_assert(offsetof(ULearningAgentsPolicy, DecoderNetwork) == 96, "Offset mismatch for ULearningAgentsPolicy::DecoderNetwork");

// /Script/LearningAgents.LearningAgentsVisualLoggerObject
// Kind: Class; super: Object
class ULearningAgentsVisualLoggerObject
{
public:
    std::uint8_t Opaque[1];
};
