#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::DataflowEngine
{
    struct Dataflow
    {
        static constexpr std::string_view Name = "Dataflow";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EdGraph";
        struct Offsets
        {
            static constexpr std::uintptr_t bActive = 0xA8;
            static constexpr std::uintptr_t Targets = 0xB0;
            static constexpr std::uintptr_t Material = 0xC0;
            static constexpr std::uintptr_t Type = 0xC8;
            static constexpr std::uintptr_t Variables = 0xD0;
            static constexpr std::uintptr_t ReferenceAsset = 0xE0;
            static constexpr std::uintptr_t DataflowSubGraphs = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bActive", 0xA8, "BoolProperty"},
            {"Targets", 0xB0, "ArrayProperty"},
            {"Material", 0xC0, "ObjectProperty"},
            {"Type", 0xC8, "EnumProperty"},
            {"Variables", 0xD0, "StructProperty"},
            {"ReferenceAsset", 0xE0, "ObjectProperty"},
            {"DataflowSubGraphs", 0xE8, "ArrayProperty"},
        }};
    };

    struct DataflowAttachment
    {
        static constexpr std::string_view Name = "DataflowAttachment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t Instance = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Instance", 0x50, "StructProperty"},
        }};
    };

    struct DataflowBaseContent
    {
        static constexpr std::string_view Name = "DataflowBaseContent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataflowContextObject";
        struct Offsets
        {
            static constexpr std::uintptr_t DataflowTerminal = 0xA0;
            static constexpr std::uintptr_t TerminalAsset = 0xB0;
            static constexpr std::uintptr_t bIsConstructionDirty = 0xC0;
            static constexpr std::uintptr_t bIsSimulationDirty = 0xC1;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DataflowTerminal", 0xA0, "StrProperty"},
            {"TerminalAsset", 0xB0, "ObjectProperty"},
            {"bIsConstructionDirty", 0xC0, "BoolProperty"},
            {"bIsSimulationDirty", 0xC1, "BoolProperty"},
        }};
    };

    struct DataflowBlueprintLibrary
    {
        static constexpr std::string_view Name = "DataflowBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 12> FunctionNames{{
            "EvaluateDataflow",
            "EvaluateTerminalNodeByName",
            "GetDataflowVariableList",
            "OverrideDataflowVariableBool",
            "OverrideDataflowVariableBoolArray",
            "OverrideDataflowVariableFloat",
            "OverrideDataflowVariableFloatArray",
            "OverrideDataflowVariableInt",
            "OverrideDataflowVariableIntArray",
            "OverrideDataflowVariableObject",
            "OverrideDataflowVariableObjectArray",
            "RegenerateAssetFromDataflow",
        }};
    };

    struct DataflowCallSubGraphNode
    {
        static constexpr std::string_view Name = "DataflowCallSubGraphNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t SubGraphGuid = 0xF8;
            static constexpr std::uintptr_t SubGraphName = 0x108;
            static constexpr std::uintptr_t DynamicInputs = 0x110;
            static constexpr std::uintptr_t InputsPropertyBag = 0x150;
            static constexpr std::uintptr_t DynamicOutputs = 0x160;
            static constexpr std::uintptr_t OutputsPropertyBag = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SubGraphGuid", 0xF8, "StructProperty"},
            {"SubGraphName", 0x108, "NameProperty"},
            {"DynamicInputs", 0x110, "StructProperty"},
            {"InputsPropertyBag", 0x150, "StructProperty"},
            {"DynamicOutputs", 0x160, "StructProperty"},
            {"OutputsPropertyBag", 0x1A0, "StructProperty"},
        }};
    };

    struct DataflowColorRamp
    {
        static constexpr std::string_view Name = "DataflowColorRamp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowContentOwner
    {
        static constexpr std::string_view Name = "DataflowContentOwner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowContextObject
    {
        static constexpr std::string_view Name = "DataflowContextObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SelectedNode = 0x38;
            static constexpr std::uintptr_t DataflowGraph = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SelectedNode", 0x38, "ObjectProperty"},
            {"DataflowGraph", 0x68, "ObjectProperty"},
        }};
    };

    struct DataflowDebugDrawComponent
    {
        static constexpr std::string_view Name = "DataflowDebugDrawComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DebugDrawComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MinDrawDistance = 0x278;
            static constexpr std::uintptr_t LDMaxDrawDistance = 0x27C;
            static constexpr std::uintptr_t CachedMaxDrawDistance = 0x280;
            static constexpr std::uintptr_t DepthPriorityGroup = 0x284;
            static constexpr std::uintptr_t ViewOwnerDepthPriorityGroup = 0x285;
            static constexpr std::uintptr_t IndirectLightingCacheQuality = 0x286;
            static constexpr std::uintptr_t LightmapType = 0x287;
            static constexpr std::uintptr_t HLODBatchingPolicy = 0x288;
            static constexpr std::uintptr_t ShadowCacheInvalidationBehavior = 0x289;
            static constexpr std::uintptr_t bAlwaysCreatePhysicsState = 0x28A;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x28A;
            static constexpr std::uintptr_t bGenerateOverlapEvents = 0x28A;
            static constexpr std::uintptr_t bIsActorTextureStreamingBuiltData = 0x28A;
            static constexpr std::uintptr_t bIsValidTextureStreamingBuiltData = 0x28A;
            static constexpr std::uintptr_t bMultiBodyOverlap = 0x28A;
            static constexpr std::uintptr_t bNeverDistanceCull = 0x28A;
            static constexpr std::uintptr_t bAllowCullDistanceVolume = 0x28B;
            static constexpr std::uintptr_t bReturnMaterialOnMove = 0x28B;
            static constexpr std::uintptr_t bTraceComplexOnMove = 0x28B;
            static constexpr std::uintptr_t bUseViewOwnerDepthPriorityGroup = 0x28B;
            static constexpr std::uintptr_t bVisibleInRayTracing = 0x28B;
            static constexpr std::uintptr_t bVisibleInRealTimeSkyCaptures = 0x28B;
            static constexpr std::uintptr_t bVisibleInReflectionCaptures = 0x28B;
            static constexpr std::uintptr_t bVisibleInReflections = 0x28B;
            static constexpr std::uintptr_t bHoldout = 0x28C;
            static constexpr std::uintptr_t bOnlyOwnerSee = 0x28C;
            static constexpr std::uintptr_t bOwnerNoSee = 0x28C;
            static constexpr std::uintptr_t bReceivesDecals = 0x28C;
            static constexpr std::uintptr_t bRenderInDepthPass = 0x28C;
            static constexpr std::uintptr_t bRenderInMainPass = 0x28C;
            static constexpr std::uintptr_t bTreatAsBackgroundForOcclusion = 0x28C;
            static constexpr std::uintptr_t bUseAsOccluder = 0x28C;
            static constexpr std::uintptr_t CastShadow = 0x28D;
            static constexpr std::uintptr_t bAffectDynamicIndirectLighting = 0x28D;
            static constexpr std::uintptr_t bEmissiveLightSource = 0x28D;
            static constexpr std::uintptr_t bForceMipStreaming = 0x28D;
            static constexpr std::uintptr_t bHasPerInstanceHitProxies = 0x28D;
            static constexpr std::uintptr_t bSelectable = 0x28D;
            static constexpr std::uintptr_t bWantsEditorEffects = 0x28D;
            static constexpr std::uintptr_t bWantsSelectionOutline = 0x28D;
            static constexpr std::uintptr_t bAffectDistanceFieldLighting = 0x28E;
            static constexpr std::uintptr_t bAffectIndirectLightingWhileHidden = 0x28E;
            static constexpr std::uintptr_t bCastContactShadow = 0x28E;
            static constexpr std::uintptr_t bCastDynamicShadow = 0x28E;
            static constexpr std::uintptr_t bCastFarShadow = 0x28E;
            static constexpr std::uintptr_t bCastStaticShadow = 0x28E;
            static constexpr std::uintptr_t bCastVolumetricTranslucentShadow = 0x28E;
            static constexpr std::uintptr_t bSelfShadowOnly = 0x28E;
            static constexpr std::uintptr_t bCastCinematicShadow = 0x28F;
            static constexpr std::uintptr_t bCastHiddenShadow = 0x28F;
            static constexpr std::uintptr_t bCastInsetShadow = 0x28F;
            static constexpr std::uintptr_t bCastShadowAsTwoSided = 0x28F;
            static constexpr std::uintptr_t bExcludeFromLightAttachmentGroup = 0x28F;
            static constexpr std::uintptr_t bLightAsIfStatic = 0x28F;
            static constexpr std::uintptr_t bLightAttachmentsAsGroup = 0x28F;
            static constexpr std::uintptr_t bReceiveMobileCSMShadows = 0x28F;
            static constexpr std::uintptr_t AlwaysLoadOnClient = 0x290;
            static constexpr std::uintptr_t bApplyImpulseOnDamage = 0x290;
            static constexpr std::uintptr_t bFillCollisionUnderneathForNavmesh = 0x290;
            static constexpr std::uintptr_t bIgnoreRadialForce = 0x290;
            static constexpr std::uintptr_t bIgnoreRadialImpulse = 0x290;
            static constexpr std::uintptr_t bRasterizeAsFilledConvexVolume = 0x290;
            static constexpr std::uintptr_t bReplicatePhysicsToAutonomousProxy = 0x290;
            static constexpr std::uintptr_t bSingleSampleShadowFromStationaryLights = 0x290;
            static constexpr std::uintptr_t AlwaysLoadOnServer = 0x291;
            static constexpr std::uintptr_t bHiddenInSceneCapture = 0x291;
            static constexpr std::uintptr_t bIsBeingMovedByEditor = 0x291;
            static constexpr std::uintptr_t bLumenHeightfield = 0x291;
            static constexpr std::uintptr_t bRayTracingFarField = 0x291;
            static constexpr std::uintptr_t bRenderCustomDepth = 0x291;
            static constexpr std::uintptr_t bUseEditorCompositing = 0x291;
            static constexpr std::uintptr_t bVisibleInSceneCaptureOnly = 0x291;
            static constexpr std::uintptr_t FirstPersonPrimitiveType = 0x292;
            static constexpr std::uintptr_t bHasNoStreamableTextures = 0x293;
            static constexpr std::uintptr_t bStaticWhenNotMoveable = 0x293;
            static constexpr std::uintptr_t bHasCustomNavigableGeometry = 0x294;
            static constexpr std::uintptr_t CanCharacterStepUpOn = 0x296;
            static constexpr std::uintptr_t LightingChannels = 0x297;
            static constexpr std::uintptr_t RayTracingGroupCullingPriority = 0x298;
            static constexpr std::uintptr_t CustomDepthStencilWriteMask = 0x299;
            static constexpr std::uintptr_t ExcludeFromHLODLevels = 0x29A;
            static constexpr std::uintptr_t RayTracingGroupId = 0x29C;
            static constexpr std::uintptr_t VisibilityId = 0x2A0;
            static constexpr std::uintptr_t CustomDepthStencilValue = 0x2A4;
            static constexpr std::uintptr_t CustomPrimitiveData = 0x2A8;
            static constexpr std::uintptr_t CustomPrimitiveDataInternal = 0x2B8;
            static constexpr std::uintptr_t TranslucencySortPriority = 0x2E0;
            static constexpr std::uintptr_t TranslucencySortDistanceOffset = 0x2E4;
            static constexpr std::uintptr_t RuntimeVirtualTextures = 0x2E8;
            static constexpr std::uintptr_t VirtualTextureLodBias = 0x2F8;
            static constexpr std::uintptr_t VirtualTextureCullMips = 0x2F9;
            static constexpr std::uintptr_t VirtualTextureMinCoverage = 0x2FA;
            static constexpr std::uintptr_t VirtualTextureRenderPassType = 0x2FB;
            static constexpr std::uintptr_t BoundsScale = 0x348;
            static constexpr std::uintptr_t MoveIgnoreActors = 0x350;
            static constexpr std::uintptr_t MoveIgnoreComponents = 0x360;
            static constexpr std::uintptr_t BodyInstance = 0x380;
            static constexpr std::uintptr_t OnComponentHit = 0x528;
            static constexpr std::uintptr_t OnComponentBeginOverlap = 0x529;
            static constexpr std::uintptr_t OnComponentEndOverlap = 0x52A;
            static constexpr std::uintptr_t OnComponentWake = 0x52B;
            static constexpr std::uintptr_t OnComponentSleep = 0x52C;
            static constexpr std::uintptr_t OnComponentPhysicsStateChanged = 0x52E;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x52F;
            static constexpr std::uintptr_t OnEndCursorOver = 0x530;
            static constexpr std::uintptr_t OnClicked = 0x531;
            static constexpr std::uintptr_t OnReleased = 0x532;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x533;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x534;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x535;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x536;
            static constexpr std::uintptr_t OnTouchBegan = 0x537;
            static constexpr std::uintptr_t OnTouchEnded = 0x538;
            static constexpr std::uintptr_t OnTouchEntered = 0x539;
            static constexpr std::uintptr_t OnTouchExited = 0x53A;
            static constexpr std::uintptr_t LODParentPrimitive = 0x550;
        };

        inline static constexpr std::array<PropertyInfo, 116> Properties{{
            {"MinDrawDistance", 0x278, "FloatProperty"},
            {"LDMaxDrawDistance", 0x27C, "FloatProperty"},
            {"CachedMaxDrawDistance", 0x280, "FloatProperty"},
            {"DepthPriorityGroup", 0x284, "ByteProperty"},
            {"ViewOwnerDepthPriorityGroup", 0x285, "ByteProperty"},
            {"IndirectLightingCacheQuality", 0x286, "ByteProperty"},
            {"LightmapType", 0x287, "EnumProperty"},
            {"HLODBatchingPolicy", 0x288, "EnumProperty"},
            {"ShadowCacheInvalidationBehavior", 0x289, "EnumProperty"},
            {"bAlwaysCreatePhysicsState", 0x28A, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x28A, "BoolProperty"},
            {"bGenerateOverlapEvents", 0x28A, "BoolProperty"},
            {"bIsActorTextureStreamingBuiltData", 0x28A, "BoolProperty"},
            {"bIsValidTextureStreamingBuiltData", 0x28A, "BoolProperty"},
            {"bMultiBodyOverlap", 0x28A, "BoolProperty"},
            {"bNeverDistanceCull", 0x28A, "BoolProperty"},
            {"bAllowCullDistanceVolume", 0x28B, "BoolProperty"},
            {"bReturnMaterialOnMove", 0x28B, "BoolProperty"},
            {"bTraceComplexOnMove", 0x28B, "BoolProperty"},
            {"bUseViewOwnerDepthPriorityGroup", 0x28B, "BoolProperty"},
            {"bVisibleInRayTracing", 0x28B, "BoolProperty"},
            {"bVisibleInRealTimeSkyCaptures", 0x28B, "BoolProperty"},
            {"bVisibleInReflectionCaptures", 0x28B, "BoolProperty"},
            {"bVisibleInReflections", 0x28B, "BoolProperty"},
            {"bHoldout", 0x28C, "BoolProperty"},
            {"bOnlyOwnerSee", 0x28C, "BoolProperty"},
            {"bOwnerNoSee", 0x28C, "BoolProperty"},
            {"bReceivesDecals", 0x28C, "BoolProperty"},
            {"bRenderInDepthPass", 0x28C, "BoolProperty"},
            {"bRenderInMainPass", 0x28C, "BoolProperty"},
            {"bTreatAsBackgroundForOcclusion", 0x28C, "BoolProperty"},
            {"bUseAsOccluder", 0x28C, "BoolProperty"},
            {"CastShadow", 0x28D, "BoolProperty"},
            {"bAffectDynamicIndirectLighting", 0x28D, "BoolProperty"},
            {"bEmissiveLightSource", 0x28D, "BoolProperty"},
            {"bForceMipStreaming", 0x28D, "BoolProperty"},
            {"bHasPerInstanceHitProxies", 0x28D, "BoolProperty"},
            {"bSelectable", 0x28D, "BoolProperty"},
            {"bWantsEditorEffects", 0x28D, "BoolProperty"},
            {"bWantsSelectionOutline", 0x28D, "BoolProperty"},
            {"bAffectDistanceFieldLighting", 0x28E, "BoolProperty"},
            {"bAffectIndirectLightingWhileHidden", 0x28E, "BoolProperty"},
            {"bCastContactShadow", 0x28E, "BoolProperty"},
            {"bCastDynamicShadow", 0x28E, "BoolProperty"},
            {"bCastFarShadow", 0x28E, "BoolProperty"},
            {"bCastStaticShadow", 0x28E, "BoolProperty"},
            {"bCastVolumetricTranslucentShadow", 0x28E, "BoolProperty"},
            {"bSelfShadowOnly", 0x28E, "BoolProperty"},
            {"bCastCinematicShadow", 0x28F, "BoolProperty"},
            {"bCastHiddenShadow", 0x28F, "BoolProperty"},
            {"bCastInsetShadow", 0x28F, "BoolProperty"},
            {"bCastShadowAsTwoSided", 0x28F, "BoolProperty"},
            {"bExcludeFromLightAttachmentGroup", 0x28F, "BoolProperty"},
            {"bLightAsIfStatic", 0x28F, "BoolProperty"},
            {"bLightAttachmentsAsGroup", 0x28F, "BoolProperty"},
            {"bReceiveMobileCSMShadows", 0x28F, "BoolProperty"},
            {"AlwaysLoadOnClient", 0x290, "BoolProperty"},
            {"bApplyImpulseOnDamage", 0x290, "BoolProperty"},
            {"bFillCollisionUnderneathForNavmesh", 0x290, "BoolProperty"},
            {"bIgnoreRadialForce", 0x290, "BoolProperty"},
            {"bIgnoreRadialImpulse", 0x290, "BoolProperty"},
            {"bRasterizeAsFilledConvexVolume", 0x290, "BoolProperty"},
            {"bReplicatePhysicsToAutonomousProxy", 0x290, "BoolProperty"},
            {"bSingleSampleShadowFromStationaryLights", 0x290, "BoolProperty"},
            {"AlwaysLoadOnServer", 0x291, "BoolProperty"},
            {"bHiddenInSceneCapture", 0x291, "BoolProperty"},
            {"bIsBeingMovedByEditor", 0x291, "BoolProperty"},
            {"bLumenHeightfield", 0x291, "BoolProperty"},
            {"bRayTracingFarField", 0x291, "BoolProperty"},
            {"bRenderCustomDepth", 0x291, "BoolProperty"},
            {"bUseEditorCompositing", 0x291, "BoolProperty"},
            {"bVisibleInSceneCaptureOnly", 0x291, "BoolProperty"},
            {"FirstPersonPrimitiveType", 0x292, "EnumProperty"},
            {"bHasNoStreamableTextures", 0x293, "BoolProperty"},
            {"bStaticWhenNotMoveable", 0x293, "BoolProperty"},
            {"bHasCustomNavigableGeometry", 0x294, "ByteProperty"},
            {"CanCharacterStepUpOn", 0x296, "ByteProperty"},
            {"LightingChannels", 0x297, "StructProperty"},
            {"RayTracingGroupCullingPriority", 0x298, "EnumProperty"},
            {"CustomDepthStencilWriteMask", 0x299, "EnumProperty"},
            {"ExcludeFromHLODLevels", 0x29A, "ByteProperty"},
            {"RayTracingGroupId", 0x29C, "IntProperty"},
            {"VisibilityId", 0x2A0, "IntProperty"},
            {"CustomDepthStencilValue", 0x2A4, "IntProperty"},
            {"CustomPrimitiveData", 0x2A8, "StructProperty"},
            {"CustomPrimitiveDataInternal", 0x2B8, "StructProperty"},
            {"TranslucencySortPriority", 0x2E0, "IntProperty"},
            {"TranslucencySortDistanceOffset", 0x2E4, "FloatProperty"},
            {"RuntimeVirtualTextures", 0x2E8, "ArrayProperty"},
            {"VirtualTextureLodBias", 0x2F8, "Int8Property"},
            {"VirtualTextureCullMips", 0x2F9, "Int8Property"},
            {"VirtualTextureMinCoverage", 0x2FA, "Int8Property"},
            {"VirtualTextureRenderPassType", 0x2FB, "EnumProperty"},
            {"BoundsScale", 0x348, "FloatProperty"},
            {"MoveIgnoreActors", 0x350, "ArrayProperty"},
            {"MoveIgnoreComponents", 0x360, "ArrayProperty"},
            {"BodyInstance", 0x380, "StructProperty"},
            {"OnComponentHit", 0x528, "MulticastSparseDelegateProperty"},
            {"OnComponentBeginOverlap", 0x529, "MulticastSparseDelegateProperty"},
            {"OnComponentEndOverlap", 0x52A, "MulticastSparseDelegateProperty"},
            {"OnComponentWake", 0x52B, "MulticastSparseDelegateProperty"},
            {"OnComponentSleep", 0x52C, "MulticastSparseDelegateProperty"},
            {"OnComponentPhysicsStateChanged", 0x52E, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x52F, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x530, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x531, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x532, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x533, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x534, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x535, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x536, "MulticastSparseDelegateProperty"},
            {"OnTouchBegan", 0x537, "MulticastSparseDelegateProperty"},
            {"OnTouchEnded", 0x538, "MulticastSparseDelegateProperty"},
            {"OnTouchEntered", 0x539, "MulticastSparseDelegateProperty"},
            {"OnTouchExited", 0x53A, "MulticastSparseDelegateProperty"},
            {"LODParentPrimitive", 0x550, "ObjectProperty"},
        }};
    };

    struct DataflowDynamicConnections
    {
        static constexpr std::string_view Name = "DataflowDynamicConnections";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicProperties = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DynamicProperties", 0x0, "ArrayProperty"},
        }};
    };

    struct DataflowEdNode
    {
        static constexpr std::string_view Name = "DataflowEdNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EdGraphNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bRenderInAssetEditor = 0xB9;
            static constexpr std::uintptr_t bRenderWireframeInAssetEditor = 0xBA;
            static constexpr std::uintptr_t bCanEnableRenderWireframe = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bRenderInAssetEditor", 0xB9, "BoolProperty"},
            {"bRenderWireframeInAssetEditor", 0xBA, "BoolProperty"},
            {"bCanEnableRenderWireframe", 0xBB, "BoolProperty"},
        }};
    };

    struct DataflowGetAssetPathNode
    {
        static constexpr std::string_view Name = "DataflowGetAssetPathNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Asset = 0xE8;
            static constexpr std::uintptr_t Path = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Asset", 0xE8, "StructProperty"},
            {"Path", 0xF0, "StrProperty"},
        }};
    };

    struct DataflowGetTextureAssetFromPathNode
    {
        static constexpr std::string_view Name = "DataflowGetTextureAssetFromPathNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t TexturePath = 0xE8;
            static constexpr std::uintptr_t TextureAsset = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TexturePath", 0xE8, "StrProperty"},
            {"TextureAsset", 0xF8, "ObjectProperty"},
        }};
    };

    struct DataflowGetTextureAssetNode
    {
        static constexpr std::string_view Name = "DataflowGetTextureAssetNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t TextureAsset = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TextureAsset", 0xE8, "ObjectProperty"},
        }};
    };

    struct DataflowImageToTextureNode
    {
        static constexpr std::string_view Name = "DataflowImageToTextureNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Image = 0xE8;
            static constexpr std::uintptr_t TextureName = 0x110;
            static constexpr std::uintptr_t TransientTexture = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Image", 0xE8, "StructProperty"},
            {"TextureName", 0x110, "NameProperty"},
            {"TransientTexture", 0x118, "ObjectProperty"},
        }};
    };

    struct DataflowInstance
    {
        static constexpr std::string_view Name = "DataflowInstance";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataflowAsset = 0x0;
            static constexpr std::uintptr_t DataflowTerminal = 0x8;
            static constexpr std::uintptr_t VariableOverrides = 0x10;
            static constexpr std::uintptr_t PerNodePropertyOverrides = 0x38;
            static constexpr std::uintptr_t Owner = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DataflowAsset", 0x0, "ObjectProperty"},
            {"DataflowTerminal", 0x8, "NameProperty"},
            {"VariableOverrides", 0x10, "StructProperty"},
            {"PerNodePropertyOverrides", 0x38, "MapProperty"},
            {"Owner", 0x48, "ObjectProperty"},
        }};
    };

    struct DataflowInstanceInterface
    {
        static constexpr std::string_view Name = "DataflowInstanceInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowInstanceOwner
    {
        static constexpr std::string_view Name = "DataflowInstanceOwner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Instance = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Instance", 0x30, "StructProperty"},
        }};
    };

    struct DataflowLinearColorRamp
    {
        static constexpr std::string_view Name = "DataflowLinearColorRamp";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RichCurves = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RichCurves", 0x20, "StructProperty"},
        }};
    };

    struct DataflowMesh
    {
        static constexpr std::string_view Name = "DataflowMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Materials = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Materials", 0x30, "ArrayProperty"},
        }};
    };

    struct DataflowNodeDebugDrawSettings
    {
        static constexpr std::string_view Name = "DataflowNodeDebugDrawSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t RenderType = 0x0;
            static constexpr std::uintptr_t bTranslucent = 0x1;
            static constexpr std::uintptr_t Color = 0x4;
            static constexpr std::uintptr_t LineWidthMultiplier = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RenderType", 0x0, "EnumProperty"},
            {"bTranslucent", 0x1, "BoolProperty"},
            {"Color", 0x4, "StructProperty"},
            {"LineWidthMultiplier", 0x14, "FloatProperty"},
        }};
    };

    struct DataflowNodeSphereCoveringDebugDrawSettings
    {
        static constexpr std::string_view Name = "DataflowNodeSphereCoveringDebugDrawSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bDisplaySphereCovering = 0x0;
            static constexpr std::uintptr_t RenderType = 0x1;
            static constexpr std::uintptr_t bTranslucent = 0x2;
            static constexpr std::uintptr_t LineWidthMultiplier = 0x4;
            static constexpr std::uintptr_t ColorMethod = 0x8;
            static constexpr std::uintptr_t Color = 0xC;
            static constexpr std::uintptr_t ColorRandomSeed = 0x1C;
            static constexpr std::uintptr_t ColorA = 0x20;
            static constexpr std::uintptr_t ColorB = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bDisplaySphereCovering", 0x0, "BoolProperty"},
            {"RenderType", 0x1, "EnumProperty"},
            {"bTranslucent", 0x2, "BoolProperty"},
            {"LineWidthMultiplier", 0x4, "FloatProperty"},
            {"ColorMethod", 0x8, "EnumProperty"},
            {"Color", 0xC, "StructProperty"},
            {"ColorRandomSeed", 0x1C, "IntProperty"},
            {"ColorA", 0x20, "StructProperty"},
            {"ColorB", 0x30, "StructProperty"},
        }};
    };

    struct DataflowPathReplaceNode
    {
        static constexpr std::string_view Name = "DataflowPathReplaceNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Path = 0xE8;
            static constexpr std::uintptr_t PathRules = 0xF8;
            static constexpr std::uintptr_t NameRules = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Path", 0xE8, "StrProperty"},
            {"PathRules", 0xF8, "ArrayProperty"},
            {"NameRules", 0x108, "ArrayProperty"},
        }};
    };

    struct DataflowPathReplaceRule
    {
        static constexpr std::string_view Name = "DataflowPathReplaceRule";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Method = 0x0;
            static constexpr std::uintptr_t From = 0x8;
            static constexpr std::uintptr_t To = 0x18;
            static constexpr std::uintptr_t bIgnoreCase = 0x28;
            static constexpr std::uintptr_t bInsertIfNoFound = 0x29;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Method", 0x0, "EnumProperty"},
            {"From", 0x8, "StrProperty"},
            {"To", 0x18, "StrProperty"},
            {"bIgnoreCase", 0x28, "BoolProperty"},
            {"bInsertIfNoFound", 0x29, "BoolProperty"},
        }};
    };

    struct DataflowPreviewCacheParams
    {
        static constexpr std::string_view Name = "DataflowPreviewCacheParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FrameRate = 0x0;
            static constexpr std::uintptr_t SubframeRate = 0x4;
            static constexpr std::uintptr_t bCanEditSubframeRate = 0x8;
            static constexpr std::uintptr_t TimeRange = 0xC;
            static constexpr std::uintptr_t bEnableRestartSimulation = 0x14;
            static constexpr std::uintptr_t bRestartSimulation = 0x15;
            static constexpr std::uintptr_t RestartTimeRange = 0x18;
            static constexpr std::uintptr_t bEnableStopCacheOnNonFinite = 0x20;
            static constexpr std::uintptr_t bStopCacheOnNonFinite = 0x21;
            static constexpr std::uintptr_t bEnableAsyncCaching = 0x22;
            static constexpr std::uintptr_t bAsyncCaching = 0x23;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"FrameRate", 0x0, "IntProperty"},
            {"SubframeRate", 0x4, "IntProperty"},
            {"bCanEditSubframeRate", 0x8, "BoolProperty"},
            {"TimeRange", 0xC, "StructProperty"},
            {"bEnableRestartSimulation", 0x14, "BoolProperty"},
            {"bRestartSimulation", 0x15, "BoolProperty"},
            {"RestartTimeRange", 0x18, "StructProperty"},
            {"bEnableStopCacheOnNonFinite", 0x20, "BoolProperty"},
            {"bStopCacheOnNonFinite", 0x21, "BoolProperty"},
            {"bEnableAsyncCaching", 0x22, "BoolProperty"},
            {"bAsyncCaching", 0x23, "BoolProperty"},
        }};
    };

    struct DataflowProxyElement
    {
        static constexpr std::string_view Name = "DataflowProxyElement";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowBaseElement";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowSkeletalContent
    {
        static constexpr std::string_view Name = "DataflowSkeletalContent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataflowBaseContent";
        struct Offsets
        {
            static constexpr std::uintptr_t SkeletalMesh = 0xD0;
            static constexpr std::uintptr_t bListCompatibleAnimationsOnly = 0xD8;
            static constexpr std::uintptr_t AnimationAsset = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SkeletalMesh", 0xD0, "ObjectProperty"},
            {"bListCompatibleAnimationsOnly", 0xD8, "BoolProperty"},
            {"AnimationAsset", 0xE0, "ObjectProperty"},
        }};
    };

    struct DataflowSkeletalMeshAttachment
    {
        static constexpr std::string_view Name = "DataflowSkeletalMeshAttachment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataflowAttachment";
        struct Offsets
        {
            static constexpr std::uintptr_t Instance = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Instance", 0x50, "StructProperty"},
        }};
    };

    struct DataflowSkeleton
    {
        static constexpr std::string_view Name = "DataflowSkeleton";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct DataflowSubGraph
    {
        static constexpr std::string_view Name = "DataflowSubGraph";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EdGraph";
        struct Offsets
        {
            static constexpr std::uintptr_t SubGraphGuid = 0x60;
            static constexpr std::uintptr_t bIsForEach = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SubGraphGuid", 0x60, "StructProperty"},
            {"bIsForEach", 0x70, "BoolProperty"},
        }};
    };

    struct DataflowSubGraphGetCurrentIndexNode
    {
        static constexpr std::string_view Name = "DataflowSubGraphGetCurrentIndexNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Index = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Index", 0xE8, "IntProperty"},
        }};
    };

    struct DataflowSubGraphInputNode
    {
        static constexpr std::string_view Name = "DataflowSubGraphInputNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicConnections = 0xF0;
            static constexpr std::uintptr_t PropertyBag = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DynamicConnections", 0xF0, "StructProperty"},
            {"PropertyBag", 0x130, "StructProperty"},
        }};
    };

    struct DataflowSubGraphOutputNode
    {
        static constexpr std::string_view Name = "DataflowSubGraphOutputNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicConnections = 0xF0;
            static constexpr std::uintptr_t PropertyBag = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DynamicConnections", 0xF0, "StructProperty"},
            {"PropertyBag", 0x130, "StructProperty"},
        }};
    };

    struct DataflowTexture2DTerminalNode
    {
        static constexpr std::string_view Name = "DataflowTexture2DTerminalNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowTerminalNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Image = 0xE8;
            static constexpr std::uintptr_t AssetPath = 0x110;
            static constexpr std::uintptr_t TextureAsset = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Image", 0xE8, "StructProperty"},
            {"AssetPath", 0x110, "StrProperty"},
            {"TextureAsset", 0x120, "ObjectProperty"},
        }};
    };

    struct DataflowTextureTerminalNode
    {
        static constexpr std::string_view Name = "DataflowTextureTerminalNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowTerminalNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Image = 0xE8;
            static constexpr std::uintptr_t TextureAsset = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Image", 0xE8, "StructProperty"},
            {"TextureAsset", 0x110, "ObjectProperty"},
        }};
    };

    struct DataflowTextureToImageNode
    {
        static constexpr std::string_view Name = "DataflowTextureToImageNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t TextureAsset = 0xE8;
            static constexpr std::uintptr_t Image = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TextureAsset", 0xE8, "ObjectProperty"},
            {"Image", 0xF0, "StructProperty"},
        }};
    };

    struct DataflowVariable
    {
        static constexpr std::string_view Name = "DataflowVariable";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t VariableName = 0x0;
            static constexpr std::uintptr_t Type = 0x4;
            static constexpr std::uintptr_t ContainerType = 0x5;
            static constexpr std::uintptr_t Value = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"VariableName", 0x0, "NameProperty"},
            {"Type", 0x4, "EnumProperty"},
            {"ContainerType", 0x5, "EnumProperty"},
            {"Value", 0x8, "StrProperty"},
        }};
    };

    struct DataflowVariableOverrides
    {
        static constexpr std::string_view Name = "DataflowVariableOverrides";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Variables = 0x0;
            static constexpr std::uintptr_t OverriddenVariableGuids = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Variables", 0x0, "StructProperty"},
            {"OverriddenVariableGuids", 0x10, "ArrayProperty"},
        }};
    };

    struct GetDataflowVariableNode
    {
        static constexpr std::string_view Name = "GetDataflowVariableNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Value = 0xE8;
            static constexpr std::uintptr_t VariablePropertyBag = 0xF0;
            static constexpr std::uintptr_t VariableName = 0x100;
            static constexpr std::uintptr_t Category = 0x108;
            static constexpr std::uintptr_t Description = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Value", 0xE8, "StructProperty"},
            {"VariablePropertyBag", 0xF0, "StructProperty"},
            {"VariableName", 0x100, "NameProperty"},
            {"Category", 0x108, "StrProperty"},
            {"Description", 0x118, "StrProperty"},
        }};
    };

    struct MergeSkeletonsDataflowNode
    {
        static constexpr std::string_view Name = "MergeSkeletonsDataflowNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "DataflowNode";
        struct Offsets
        {
            static constexpr std::uintptr_t Skeletons = 0xE8;
            static constexpr std::uintptr_t SharedRootPosition = 0xF8;
            static constexpr std::uintptr_t bPreserveBoneNames = 0x110;
            static constexpr std::uintptr_t MergedSkeleton = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Skeletons", 0xE8, "ArrayProperty"},
            {"SharedRootPosition", 0xF8, "StructProperty"},
            {"bPreserveBoneNames", 0x110, "BoolProperty"},
            {"MergedSkeleton", 0x118, "StructProperty"},
        }};
    };

    struct StringValuePair
    {
        static constexpr std::string_view Name = "StringValuePair";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Key = 0x0;
            static constexpr std::uintptr_t Value = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Key", 0x0, "StrProperty"},
            {"Value", 0x10, "StrProperty"},
        }};
    };

}
