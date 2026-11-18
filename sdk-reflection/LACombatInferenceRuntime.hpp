#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LACombatInferenceRuntime
{
    struct FortAthenaAIEvaluator_LearningAgentCombat
    {
        static constexpr std::string_view Name = "FortAthenaAIEvaluator_LearningAgentCombat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIEvaluator_BlueprintBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CombatLearningAgentManagerClass = 0x6F0;
            static constexpr std::uintptr_t CombatTargetKeyName = 0x6F8;
            static constexpr std::uintptr_t CombatTargetMinDistance = 0x700;
            static constexpr std::uintptr_t CombatTargetDistanceCheckGracePeriod = 0x728;
            static constexpr std::uintptr_t CombatTargetMinHealth = 0x750;
            static constexpr std::uintptr_t CombatTargetIdleDetectionTime = 0x778;
            static constexpr std::uintptr_t CombatTargetIdleDetectionVelocityThreshold = 0x7A0;
            static constexpr std::uintptr_t SelfIdleDetectionTime = 0x7C8;
            static constexpr std::uintptr_t SelfIdleDetectionVelocityThreshold = 0x7F0;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"CombatLearningAgentManagerClass", 0x6F0, "ClassProperty"},
            {"CombatTargetKeyName", 0x6F8, "NameProperty"},
            {"CombatTargetMinDistance", 0x700, "StructProperty"},
            {"CombatTargetDistanceCheckGracePeriod", 0x728, "StructProperty"},
            {"CombatTargetMinHealth", 0x750, "StructProperty"},
            {"CombatTargetIdleDetectionTime", 0x778, "StructProperty"},
            {"CombatTargetIdleDetectionVelocityThreshold", 0x7A0, "StructProperty"},
            {"SelfIdleDetectionTime", 0x7C8, "StructProperty"},
            {"SelfIdleDetectionVelocityThreshold", 0x7F0, "StructProperty"},
        }};
    };

    struct LACInteractorContinuousThin
    {
        static constexpr std::string_view Name = "LACInteractorContinuousThin";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LearningAgentsInteractor";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetLocationNorm = 0x458;
            static constexpr std::uintptr_t TargetVelocityNorm = 0x490;
            static constexpr std::uintptr_t TargetDistanceFromPawnNorm = 0x4C8;
            static constexpr std::uintptr_t TargetPitchAimOffsetFromPawnNorm = 0x4D4;
            static constexpr std::uintptr_t TargetYawSinOffsetFromPawnNorm = 0x4E0;
            static constexpr std::uintptr_t TargetYawCosOffsetFromPawnNorm = 0x4EC;
            static constexpr std::uintptr_t bAddSelfPersonalityObservation = 0x4F8;
            static constexpr std::uintptr_t SelfPersonalityNum = 0x4FC;
            static constexpr std::uintptr_t PersonalityWeightingsDataTable = 0x500;
            static constexpr std::uintptr_t bUseActionQueue = 0x510;
            static constexpr std::uintptr_t ActionQueueClass = 0x518;
            static constexpr std::uintptr_t ActionChunkSize = 0x520;
            static constexpr std::uintptr_t PitchAngularVelocityActNorm = 0x528;
            static constexpr std::uintptr_t YawAngularVelocityActNorm = 0x550;
            static constexpr std::uintptr_t FireSigmoidThreshold = 0x578;
            static constexpr std::uintptr_t JumpSigmoidThreshold = 0x5A0;
            static constexpr std::uintptr_t CrouchSigmoidThreshold = 0x5C8;
            static constexpr std::uintptr_t TacticalSprintSigmoidThreshold = 0x5F0;
            static constexpr std::uintptr_t SlideSigmoidThreshold = 0x618;
            static constexpr std::uintptr_t SlideFromCrouchSigmoidThreshold = 0x640;
            static constexpr std::uintptr_t AimDownSightSigmoidThreshold = 0x668;
            static constexpr std::uintptr_t ModelName = 0x690;
            static constexpr std::uintptr_t MajorVersion = 0x6A0;
            static constexpr std::uintptr_t MinorVersion = 0x6A4;
            static constexpr std::uintptr_t ModifierClass = 0x6A8;
            static constexpr std::uintptr_t bUseRayCastLOS = 0x6B0;
            static constexpr std::uintptr_t LOSFOVHalf = 0x6B4;
            static constexpr std::uintptr_t LOSCollisionChannel = 0x6B8;
            static constexpr std::uintptr_t MovementDeadzone = 0x6BC;
            static constexpr std::uintptr_t AgentContexts = 0x6C8;
            static constexpr std::uintptr_t PersonalityBuckets = 0x6D8;
        };

        inline static constexpr std::array<PropertyInfo, 31> Properties{{
            {"TargetLocationNorm", 0x458, "StructProperty"},
            {"TargetVelocityNorm", 0x490, "StructProperty"},
            {"TargetDistanceFromPawnNorm", 0x4C8, "StructProperty"},
            {"TargetPitchAimOffsetFromPawnNorm", 0x4D4, "StructProperty"},
            {"TargetYawSinOffsetFromPawnNorm", 0x4E0, "StructProperty"},
            {"TargetYawCosOffsetFromPawnNorm", 0x4EC, "StructProperty"},
            {"bAddSelfPersonalityObservation", 0x4F8, "BoolProperty"},
            {"SelfPersonalityNum", 0x4FC, "IntProperty"},
            {"PersonalityWeightingsDataTable", 0x500, "ArrayProperty"},
            {"bUseActionQueue", 0x510, "BoolProperty"},
            {"ActionQueueClass", 0x518, "ClassProperty"},
            {"ActionChunkSize", 0x520, "IntProperty"},
            {"PitchAngularVelocityActNorm", 0x528, "StructProperty"},
            {"YawAngularVelocityActNorm", 0x550, "StructProperty"},
            {"FireSigmoidThreshold", 0x578, "StructProperty"},
            {"JumpSigmoidThreshold", 0x5A0, "StructProperty"},
            {"CrouchSigmoidThreshold", 0x5C8, "StructProperty"},
            {"TacticalSprintSigmoidThreshold", 0x5F0, "StructProperty"},
            {"SlideSigmoidThreshold", 0x618, "StructProperty"},
            {"SlideFromCrouchSigmoidThreshold", 0x640, "StructProperty"},
            {"AimDownSightSigmoidThreshold", 0x668, "StructProperty"},
            {"ModelName", 0x690, "StrProperty"},
            {"MajorVersion", 0x6A0, "IntProperty"},
            {"MinorVersion", 0x6A4, "IntProperty"},
            {"ModifierClass", 0x6A8, "ClassProperty"},
            {"bUseRayCastLOS", 0x6B0, "BoolProperty"},
            {"LOSFOVHalf", 0x6B4, "FloatProperty"},
            {"LOSCollisionChannel", 0x6B8, "ByteProperty"},
            {"MovementDeadzone", 0x6BC, "FloatProperty"},
            {"AgentContexts", 0x6C8, "MapProperty"},
            {"PersonalityBuckets", 0x6D8, "ArrayProperty"},
        }};
    };

    struct LACThinAgentContext
    {
        static constexpr std::string_view Name = "LACThinAgentContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Controller = 0x2C;
            static constexpr std::uintptr_t InteractorModifier = 0x38;
            static constexpr std::uintptr_t MoveData = 0x40;
            static constexpr std::uintptr_t RotationData = 0x48;
            static constexpr std::uintptr_t JumpData = 0x50;
            static constexpr std::uintptr_t TacticalSprintData = 0x58;
            static constexpr std::uintptr_t AimDownSightData = 0x60;
            static constexpr std::uintptr_t FirePrimaryData = 0x68;
            static constexpr std::uintptr_t CrouchData = 0x70;
            static constexpr std::uintptr_t UncrouchData = 0x78;
            static constexpr std::uintptr_t SlideData = 0x80;
            static constexpr std::uintptr_t ActionQueueComponent = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Controller", 0x2C, "WeakObjectProperty"},
            {"InteractorModifier", 0x38, "ObjectProperty"},
            {"MoveData", 0x40, "ObjectProperty"},
            {"RotationData", 0x48, "ObjectProperty"},
            {"JumpData", 0x50, "ObjectProperty"},
            {"TacticalSprintData", 0x58, "ObjectProperty"},
            {"AimDownSightData", 0x60, "ObjectProperty"},
            {"FirePrimaryData", 0x68, "ObjectProperty"},
            {"CrouchData", 0x70, "ObjectProperty"},
            {"UncrouchData", 0x78, "ObjectProperty"},
            {"SlideData", 0x80, "ObjectProperty"},
            {"ActionQueueComponent", 0x8C, "WeakObjectProperty"},
        }};
    };

    struct LACombatActionGuardComponent
    {
        static constexpr std::string_view Name = "LACombatActionGuardComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct LACombatActionQueueComponent
    {
        static constexpr std::string_view Name = "LACombatActionQueueComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t FireSigmoidThreshold = 0xC0;
            static constexpr std::uintptr_t JumpSigmoidThreshold = 0xE8;
            static constexpr std::uintptr_t CrouchSigmoidThreshold = 0x110;
            static constexpr std::uintptr_t TacticalSprintSigmoidThreshold = 0x138;
            static constexpr std::uintptr_t SlideSigmoidThreshold = 0x160;
            static constexpr std::uintptr_t SlideFromCrouchSigmoidThreshold = 0x188;
            static constexpr std::uintptr_t AimDownSightSigmoidThreshold = 0x1B0;
            static constexpr std::uintptr_t MovementDeadzone = 0x1D8;
            static constexpr std::uintptr_t AgentId = 0x1DC;
            static constexpr std::uintptr_t ModelName = 0x1E0;
            static constexpr std::uintptr_t ActionTickInterval = 0x1F0;
            static constexpr std::uintptr_t EnsemblingMode = 0x1F4;
            static constexpr std::uintptr_t bEnsembleBinaryActions = 0x1F5;
            static constexpr std::uintptr_t bEnsembleRotation = 0x1F6;
            static constexpr std::uintptr_t MaxOverlappingChunks = 0x1F8;
            static constexpr std::uintptr_t ExhaustionPolicy = 0x1FC;
            static constexpr std::uintptr_t MoveData = 0x248;
            static constexpr std::uintptr_t RotationData = 0x250;
            static constexpr std::uintptr_t JumpData = 0x258;
            static constexpr std::uintptr_t TacticalSprintData = 0x260;
            static constexpr std::uintptr_t AimDownSightData = 0x268;
            static constexpr std::uintptr_t FirePrimaryData = 0x270;
            static constexpr std::uintptr_t CrouchData = 0x278;
            static constexpr std::uintptr_t UncrouchData = 0x280;
            static constexpr std::uintptr_t SlideData = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"FireSigmoidThreshold", 0xC0, "StructProperty"},
            {"JumpSigmoidThreshold", 0xE8, "StructProperty"},
            {"CrouchSigmoidThreshold", 0x110, "StructProperty"},
            {"TacticalSprintSigmoidThreshold", 0x138, "StructProperty"},
            {"SlideSigmoidThreshold", 0x160, "StructProperty"},
            {"SlideFromCrouchSigmoidThreshold", 0x188, "StructProperty"},
            {"AimDownSightSigmoidThreshold", 0x1B0, "StructProperty"},
            {"MovementDeadzone", 0x1D8, "FloatProperty"},
            {"AgentId", 0x1DC, "IntProperty"},
            {"ModelName", 0x1E0, "StrProperty"},
            {"ActionTickInterval", 0x1F0, "FloatProperty"},
            {"EnsemblingMode", 0x1F4, "EnumProperty"},
            {"bEnsembleBinaryActions", 0x1F5, "BoolProperty"},
            {"bEnsembleRotation", 0x1F6, "BoolProperty"},
            {"MaxOverlappingChunks", 0x1F8, "IntProperty"},
            {"ExhaustionPolicy", 0x1FC, "EnumProperty"},
            {"MoveData", 0x248, "ObjectProperty"},
            {"RotationData", 0x250, "ObjectProperty"},
            {"JumpData", 0x258, "ObjectProperty"},
            {"TacticalSprintData", 0x260, "ObjectProperty"},
            {"AimDownSightData", 0x268, "ObjectProperty"},
            {"FirePrimaryData", 0x270, "ObjectProperty"},
            {"CrouchData", 0x278, "ObjectProperty"},
            {"UncrouchData", 0x280, "ObjectProperty"},
            {"SlideData", 0x288, "ObjectProperty"},
        }};
    };

    struct LACombatAgentContext
    {
        static constexpr std::string_view Name = "LACombatAgentContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Controller = 0x30;
            static constexpr std::uintptr_t InteractorModifier = 0x38;
            static constexpr std::uintptr_t MoveData = 0x40;
            static constexpr std::uintptr_t RotationData = 0x48;
            static constexpr std::uintptr_t JumpData = 0x50;
            static constexpr std::uintptr_t SlideData = 0x58;
            static constexpr std::uintptr_t CrouchData = 0x60;
            static constexpr std::uintptr_t TacticalSprintData = 0x68;
            static constexpr std::uintptr_t AimDownSightData = 0x70;
            static constexpr std::uintptr_t FirePrimaryData = 0x78;
            static constexpr std::uintptr_t CachedTargets = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"Controller", 0x30, "ObjectProperty"},
            {"InteractorModifier", 0x38, "ObjectProperty"},
            {"MoveData", 0x40, "ObjectProperty"},
            {"RotationData", 0x48, "ObjectProperty"},
            {"JumpData", 0x50, "ObjectProperty"},
            {"SlideData", 0x58, "ObjectProperty"},
            {"CrouchData", 0x60, "ObjectProperty"},
            {"TacticalSprintData", 0x68, "ObjectProperty"},
            {"AimDownSightData", 0x70, "ObjectProperty"},
            {"FirePrimaryData", 0x78, "ObjectProperty"},
            {"CachedTargets", 0x80, "ArrayProperty"},
        }};
    };

    struct LACombatElementDataHelpers
    {
        static constexpr std::string_view Name = "LACombatElementDataHelpers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LACombatInferenceInteractor
    {
        static constexpr std::string_view Name = "LACombatInferenceInteractor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LearningAgentsInteractor";
        struct Offsets
        {
            static constexpr std::uintptr_t ModelName = 0x480;
            static constexpr std::uintptr_t MajorVersion = 0x490;
            static constexpr std::uintptr_t MinorVersion = 0x494;
            static constexpr std::uintptr_t ActionOptions = 0x498;
            static constexpr std::uintptr_t ObservationOptions = 0x578;
            static constexpr std::uintptr_t PersonalityWeightingsDataTable = 0x620;
            static constexpr std::uintptr_t ObservationScales = 0x630;
            static constexpr std::uintptr_t ActionScales = 0x6F8;
            static constexpr std::uintptr_t SigmoidThresholds = 0x760;
            static constexpr std::uintptr_t ActionGuards = 0x780;
            static constexpr std::uintptr_t SpeedMultiplierInference = 0xA48;
            static constexpr std::uintptr_t LethalityReducer = 0xA50;
            static constexpr std::uintptr_t ActionStickiness = 0xB78;
            static constexpr std::uintptr_t TargetCachingSeconds = 0xC58;
            static constexpr std::uintptr_t BotCameraOffset = 0xC80;
            static constexpr std::uintptr_t DataTableBoolOverrides = 0xC98;
            static constexpr std::uintptr_t AgentContexts = 0xFA0;
            static constexpr std::uintptr_t PersonalityBuckets = 0xFB0;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"ModelName", 0x480, "StrProperty"},
            {"MajorVersion", 0x490, "IntProperty"},
            {"MinorVersion", 0x494, "IntProperty"},
            {"ActionOptions", 0x498, "StructProperty"},
            {"ObservationOptions", 0x578, "StructProperty"},
            {"PersonalityWeightingsDataTable", 0x620, "ArrayProperty"},
            {"ObservationScales", 0x630, "StructProperty"},
            {"ActionScales", 0x6F8, "StructProperty"},
            {"SigmoidThresholds", 0x760, "StructProperty"},
            {"ActionGuards", 0x780, "StructProperty"},
            {"SpeedMultiplierInference", 0xA48, "FloatProperty"},
            {"LethalityReducer", 0xA50, "StructProperty"},
            {"ActionStickiness", 0xB78, "StructProperty"},
            {"TargetCachingSeconds", 0xC58, "StructProperty"},
            {"BotCameraOffset", 0xC80, "StructProperty"},
            {"DataTableBoolOverrides", 0xC98, "StructProperty"},
            {"AgentContexts", 0xFA0, "MapProperty"},
            {"PersonalityBuckets", 0xFB0, "ArrayProperty"},
        }};
    };

    struct LACombatInferenceInteractorAgentContext
    {
        static constexpr std::string_view Name = "LACombatInferenceInteractorAgentContext";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Controller = 0x30;
            static constexpr std::uintptr_t PlayerPawn = 0x38;
            static constexpr std::uintptr_t MoveData = 0x40;
            static constexpr std::uintptr_t RotationData = 0x48;
            static constexpr std::uintptr_t JumpData = 0x50;
            static constexpr std::uintptr_t TacticalSprintData = 0x58;
            static constexpr std::uintptr_t AimDownSightData = 0x60;
            static constexpr std::uintptr_t FirePrimaryData = 0x68;
            static constexpr std::uintptr_t CachedTargets = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Controller", 0x30, "ObjectProperty"},
            {"PlayerPawn", 0x38, "ObjectProperty"},
            {"MoveData", 0x40, "ObjectProperty"},
            {"RotationData", 0x48, "ObjectProperty"},
            {"JumpData", 0x50, "ObjectProperty"},
            {"TacticalSprintData", 0x58, "ObjectProperty"},
            {"AimDownSightData", 0x60, "ObjectProperty"},
            {"FirePrimaryData", 0x68, "ObjectProperty"},
            {"CachedTargets", 0x90, "ArrayProperty"},
        }};
    };

    struct LACombatInteractor
    {
        static constexpr std::string_view Name = "LACombatInteractor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LearningAgentsInteractor";
        struct Offsets
        {
            static constexpr std::uintptr_t ObservationsDataElement = 0x458;
            static constexpr std::uintptr_t ActionsDataElement = 0x468;
            static constexpr std::uintptr_t bRecording = 0x478;
            static constexpr std::uintptr_t ModifierClass = 0x480;
            static constexpr std::uintptr_t ModelName = 0x488;
            static constexpr std::uintptr_t MajorVersion = 0x498;
            static constexpr std::uintptr_t MinorVersion = 0x49C;
            static constexpr std::uintptr_t ObservationsSettings = 0x4A0;
            static constexpr std::uintptr_t PersonalityWeightingsDataTable = 0x528;
            static constexpr std::uintptr_t StyleWeightingsDataTable = 0x538;
            static constexpr std::uintptr_t SpeedMultiplierInference = 0x548;
            static constexpr std::uintptr_t TargetCachingSeconds = 0x550;
            static constexpr std::uintptr_t AgentContexts = 0x580;
            static constexpr std::uintptr_t PersonalityBuckets = 0x590;
            static constexpr std::uintptr_t StyleBuckets = 0x5A0;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"ObservationsDataElement", 0x458, "StructProperty"},
            {"ActionsDataElement", 0x468, "StructProperty"},
            {"bRecording", 0x478, "BoolProperty"},
            {"ModifierClass", 0x480, "ClassProperty"},
            {"ModelName", 0x488, "StrProperty"},
            {"MajorVersion", 0x498, "IntProperty"},
            {"MinorVersion", 0x49C, "IntProperty"},
            {"ObservationsSettings", 0x4A0, "StructProperty"},
            {"PersonalityWeightingsDataTable", 0x528, "ArrayProperty"},
            {"StyleWeightingsDataTable", 0x538, "ArrayProperty"},
            {"SpeedMultiplierInference", 0x548, "FloatProperty"},
            {"TargetCachingSeconds", 0x550, "StructProperty"},
            {"AgentContexts", 0x580, "MapProperty"},
            {"PersonalityBuckets", 0x590, "ArrayProperty"},
            {"StyleBuckets", 0x5A0, "ArrayProperty"},
        }};
    };

    struct LACombatInteractorModifier
    {
        static constexpr std::string_view Name = "LACombatInteractorModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ActionGuards = 0xC0;
            static constexpr std::uintptr_t DefaultLethalityProfile = 0x620;
            static constexpr std::uintptr_t WeaponCategories = 0x840;
            static constexpr std::uintptr_t SmootherConfig = 0x850;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ActionGuards", 0xC0, "StructProperty"},
            {"DefaultLethalityProfile", 0x620, "StructProperty"},
            {"WeaponCategories", 0x840, "ArrayProperty"},
            {"SmootherConfig", 0x850, "StructProperty"},
        }};
    };

    struct LACombatInteractorModifierV2
    {
        static constexpr std::string_view Name = "LACombatInteractorModifierV2";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LACombatInteractorModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t ActionGuards = 0xC0;
            static constexpr std::uintptr_t DefaultLethalityProfile = 0x620;
            static constexpr std::uintptr_t WeaponCategories = 0x840;
            static constexpr std::uintptr_t SmootherConfig = 0x850;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ActionGuards", 0xC0, "StructProperty"},
            {"DefaultLethalityProfile", 0x620, "StructProperty"},
            {"WeaponCategories", 0x840, "ArrayProperty"},
            {"SmootherConfig", 0x850, "StructProperty"},
        }};
    };

    struct LACombatSemanticMap3D
    {
        static constexpr std::string_view Name = "LACombatSemanticMap3D";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CellSize = 0xD0;
            static constexpr std::uintptr_t GridOffset = 0xE8;
            static constexpr std::uintptr_t MapSize = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CellSize", 0xD0, "StructProperty"},
            {"GridOffset", 0xE8, "StructProperty"},
            {"MapSize", 0x100, "StructProperty"},
        }};
    };

}
