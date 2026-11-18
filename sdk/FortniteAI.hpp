#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::FortniteAI
{
    struct AIGoalComponent
    {
        static constexpr std::string_view Name = "AIGoalComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFrameworkComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnNewGoalActorDelegate = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnNewGoalActorDelegate", 0x100, "MulticastInlineDelegateProperty"},
        }};
    };

    struct AIHotSpot
    {
        static constexpr std::string_view Name = "AIHotSpot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t UserSlots = 0x280;
            static constexpr std::uintptr_t SlotGenerator = 0x290;
            static constexpr std::uintptr_t Slots = 0x298;
            static constexpr std::uintptr_t FocusActor = 0x2A8;
            static constexpr std::uintptr_t FilterClass = 0x2B0;
            static constexpr std::uintptr_t CustomNavmeshSearchExtent = 0x2B8;
            static constexpr std::uintptr_t bAllowClaimingMultipleSlots = 0x2D0;
            static constexpr std::uintptr_t bAllowSlotlessAssignment = 0x2D0;
            static constexpr std::uintptr_t bCustomNavmeshSearchExtent = 0x2D0;
            static constexpr std::uintptr_t bIsEnabled = 0x2D0;
            static constexpr std::uintptr_t bProjectSlotsOnNavmesh = 0x2D0;
            static constexpr std::uintptr_t bStartEnabled = 0x2D0;
            static constexpr std::uintptr_t bTrackOverlappingSlots = 0x2D0;
            static constexpr std::uintptr_t NoSlotAssignees = 0x2D8;
            static constexpr std::uintptr_t RenderingComponent = 0x350;
            static constexpr std::uintptr_t SpriteComponent = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"UserSlots", 0x280, "ArrayProperty"},
            {"SlotGenerator", 0x290, "ObjectProperty"},
            {"Slots", 0x298, "ArrayProperty"},
            {"FocusActor", 0x2A8, "ObjectProperty"},
            {"FilterClass", 0x2B0, "ClassProperty"},
            {"CustomNavmeshSearchExtent", 0x2B8, "StructProperty"},
            {"bAllowClaimingMultipleSlots", 0x2D0, "BoolProperty"},
            {"bAllowSlotlessAssignment", 0x2D0, "BoolProperty"},
            {"bCustomNavmeshSearchExtent", 0x2D0, "BoolProperty"},
            {"bIsEnabled", 0x2D0, "BoolProperty"},
            {"bProjectSlotsOnNavmesh", 0x2D0, "BoolProperty"},
            {"bStartEnabled", 0x2D0, "BoolProperty"},
            {"bTrackOverlappingSlots", 0x2D0, "BoolProperty"},
            {"NoSlotAssignees", 0x2D8, "ArrayProperty"},
            {"RenderingComponent", 0x350, "ObjectProperty"},
            {"SpriteComponent", 0x358, "ObjectProperty"},
        }};
    };

    struct AIHotSpotConfig
    {
        static constexpr std::string_view Name = "AIHotSpotConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Slots = 0x28;
            static constexpr std::uintptr_t bDetectUnreachableSlots = 0x38;
            static constexpr std::uintptr_t SlotGenerator = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Slots", 0x28, "ArrayProperty"},
            {"bDetectUnreachableSlots", 0x38, "BoolProperty"},
            {"SlotGenerator", 0x40, "ObjectProperty"},
        }};
    };

    struct AIHotSpotManagerProxy
    {
        static constexpr std::string_view Name = "AIHotSpotManagerProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIHotSpotManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AIHotSpotRenderingComponent
    {
        static constexpr std::string_view Name = "AIHotSpotRenderingComponent";
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

    struct AIHotSpotSlot
    {
        static constexpr std::string_view Name = "AIHotSpotSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalTransform = 0x30;
            static constexpr std::uintptr_t Height = 0x90;
            static constexpr std::uintptr_t Radius = 0x94;
            static constexpr std::uintptr_t DistanceToFocusActor = 0x98;
            static constexpr std::uintptr_t UserId = 0x9C;
            static constexpr std::uintptr_t bHasCachedAgentData = 0xA0;
            static constexpr std::uintptr_t bHasDistanceToFocusActor = 0xA0;
            static constexpr std::uintptr_t bHasOverlappingSlots = 0xA0;
            static constexpr std::uintptr_t bIsBlockingOthers = 0xA0;
            static constexpr std::uintptr_t bIsEnabled = 0xA0;
            static constexpr std::uintptr_t bStartEnabled = 0xA0;
            static constexpr std::uintptr_t Owner = 0xA8;
            static constexpr std::uintptr_t SlotIndex = 0xB0;
            static constexpr std::uintptr_t SlotState = 0xB4;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"LocalTransform", 0x30, "StructProperty"},
            {"Height", 0x90, "FloatProperty"},
            {"Radius", 0x94, "FloatProperty"},
            {"DistanceToFocusActor", 0x98, "FloatProperty"},
            {"UserId", 0x9C, "IntProperty"},
            {"bHasCachedAgentData", 0xA0, "BoolProperty"},
            {"bHasDistanceToFocusActor", 0xA0, "BoolProperty"},
            {"bHasOverlappingSlots", 0xA0, "BoolProperty"},
            {"bIsBlockingOthers", 0xA0, "BoolProperty"},
            {"bIsEnabled", 0xA0, "BoolProperty"},
            {"bStartEnabled", 0xA0, "BoolProperty"},
            {"Owner", 0xA8, "ObjectProperty"},
            {"SlotIndex", 0xB0, "IntProperty"},
            {"SlotState", 0xB4, "EnumProperty"},
        }};
    };

    struct AIHotSpotSlotGenerator
    {
        static constexpr std::string_view Name = "AIHotSpotSlotGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AIHotSpotSlotGenerator_OnBoundingBox
    {
        static constexpr std::string_view Name = "AIHotSpotSlotGenerator_OnBoundingBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIHotSpotSlotGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotClass = 0x28;
            static constexpr std::uintptr_t MaxExtent = 0x30;
            static constexpr std::uintptr_t ExpandBy = 0x48;
            static constexpr std::uintptr_t OffsetFromEdge = 0x4C;
            static constexpr std::uintptr_t Spacing = 0x50;
            static constexpr std::uintptr_t bLimitMaxExtent = 0x54;
            static constexpr std::uintptr_t bMustHitFocusActor = 0x54;
            static constexpr std::uintptr_t SlotDirectionCalculation = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SlotClass", 0x28, "ClassProperty"},
            {"MaxExtent", 0x30, "StructProperty"},
            {"ExpandBy", 0x48, "FloatProperty"},
            {"OffsetFromEdge", 0x4C, "FloatProperty"},
            {"Spacing", 0x50, "FloatProperty"},
            {"bLimitMaxExtent", 0x54, "BoolProperty"},
            {"bMustHitFocusActor", 0x54, "BoolProperty"},
            {"SlotDirectionCalculation", 0x58, "EnumProperty"},
        }};
    };

    struct AILootInfoRowEntryOptionalConditionSchema
    {
        static constexpr std::string_view Name = "AILootInfoRowEntryOptionalConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct AISenseScalableConfig
    {
        static constexpr std::string_view Name = "AISenseScalableConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AISenseScalableConfig_Hearing
    {
        static constexpr std::string_view Name = "AISenseScalableConfig_Hearing";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISenseScalableConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t HearingRange = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HearingRange", 0x28, "StructProperty"},
        }};
    };

    struct AISenseScalableConfig_Sight
    {
        static constexpr std::string_view Name = "AISenseScalableConfig_Sight";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISenseScalableConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t SightRadius = 0x28;
            static constexpr std::uintptr_t LoseSightRadius = 0x50;
            static constexpr std::uintptr_t PeripheralVisionAngleDegrees = 0x78;
            static constexpr std::uintptr_t PointOfViewBackwardOffset = 0xA0;
            static constexpr std::uintptr_t NearClippingRadius = 0xC8;
            static constexpr std::uintptr_t bUsePerfectSightVolumes = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SightRadius", 0x28, "StructProperty"},
            {"LoseSightRadius", 0x50, "StructProperty"},
            {"PeripheralVisionAngleDegrees", 0x78, "StructProperty"},
            {"PointOfViewBackwardOffset", 0xA0, "StructProperty"},
            {"NearClippingRadius", 0xC8, "StructProperty"},
            {"bUsePerfectSightVolumes", 0xF0, "StructProperty"},
        }};
    };

    struct AISpawnerDataRuntimeComponentInterface
    {
        static constexpr std::string_view Name = "AISpawnerDataRuntimeComponentInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AITask_ExecuteAbility
    {
        static constexpr std::string_view Name = "AITask_ExecuteAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AITask";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerController = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OwnerController", 0x60, "ObjectProperty"},
        }};
    };

    struct AthenaAIBlueprintLibrary
    {
        static constexpr std::string_view Name = "AthenaAIBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AthenaAIBotDebugMiniMapIndicator
    {
        static constexpr std::string_view Name = "AthenaAIBotDebugMiniMapIndicator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMiniMapIndicator";
        struct Offsets
        {
            static constexpr std::uintptr_t BotDebugInfoList = 0x170;
            static constexpr std::uintptr_t DebugMinimapIconBrush = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BotDebugInfoList", 0x170, "ArrayProperty"},
            {"DebugMinimapIconBrush", 0x180, "StructProperty"},
        }};
    };

    struct AthenaAIBotPOIDebugMiniMapIndicator
    {
        static constexpr std::string_view Name = "AthenaAIBotPOIDebugMiniMapIndicator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMiniMapIndicator";
        struct Offsets
        {
            static constexpr std::uintptr_t BotPOIDebugInfoList = 0x170;
            static constexpr std::uintptr_t BotPOIExcludedZonesDebugInfoList = 0x180;
            static constexpr std::uintptr_t ClusteredLootLocationsDebug = 0x190;
            static constexpr std::uintptr_t ClusteredLootNamesDebug = 0x1A0;
            static constexpr std::uintptr_t ClusteredLootDrawDebugLevel = 0x1B0;
            static constexpr std::uintptr_t DynamicPOIDrawDebugLevel = 0x1B4;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"BotPOIDebugInfoList", 0x170, "ArrayProperty"},
            {"BotPOIExcludedZonesDebugInfoList", 0x180, "ArrayProperty"},
            {"ClusteredLootLocationsDebug", 0x190, "ArrayProperty"},
            {"ClusteredLootNamesDebug", 0x1A0, "ArrayProperty"},
            {"ClusteredLootDrawDebugLevel", 0x1B0, "IntProperty"},
            {"DynamicPOIDrawDebugLevel", 0x1B4, "IntProperty"},
        }};
    };

    struct AthenaAIBudgetManager
    {
        static constexpr std::string_view Name = "AthenaAIBudgetManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t StaticallyRegisteredPawns = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StaticallyRegisteredPawns", 0x68, "MapProperty"},
        }};
    };

    struct AthenaAIController
    {
        static constexpr std::string_view Name = "AthenaAIController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIController";
        struct Offsets
        {
            static constexpr std::uintptr_t GoalActorDistancesNotifies = 0x5B8;
            static constexpr std::uintptr_t PrimaryMeleeAttackAbilityInstance = 0x610;
            static constexpr std::uintptr_t PrimaryRangedAttackAbilityInstance = 0x618;
            static constexpr std::uintptr_t NavWalkingSearchExtentScale = 0x620;
            static constexpr std::uintptr_t CheapFlyingNavPointHorizontalGridRatio = 0x638;
            static constexpr std::uintptr_t CheapFlyingNavNavPointVerticalGridRatio = 0x63C;
            static constexpr std::uintptr_t CheapFlyingNavSmashableAbilityTag = 0x640;
            static constexpr std::uintptr_t bAllowBacktrackPathfinding = 0x660;
            static constexpr std::uintptr_t bAutoAttackOnMovedHit = 0x660;
            static constexpr std::uintptr_t bAutoGenerateHotspotOnPlayerBuildings = 0x660;
            static constexpr std::uintptr_t bAutomaticallyChooseClosestTargetAsGoal = 0x660;
            static constexpr std::uintptr_t bEnableCheapFlyingNavigation = 0x660;
            static constexpr std::uintptr_t bIsGoalRequiredForBehavior = 0x660;
            static constexpr std::uintptr_t bRegisterToAthenaAIDropper = 0x661;
            static constexpr std::uintptr_t SecondaryGoalActor = 0x668;
            static constexpr std::uintptr_t AttackCheckInterval = 0x670;
            static constexpr std::uintptr_t MeleeAttackCheckDistance = 0x674;
            static constexpr std::uintptr_t RangedAttackCheckDistance = 0x678;
            static constexpr std::uintptr_t BacktrackingZThreshold = 0x67C;
            static constexpr std::uintptr_t bAllowBacktracking = 0x680;
            static constexpr std::uintptr_t bAllowPawnRVOWeightOverrides = 0x681;
            static constexpr std::uintptr_t AthenaPFC = 0x690;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"GoalActorDistancesNotifies", 0x5B8, "ArrayProperty"},
            {"PrimaryMeleeAttackAbilityInstance", 0x610, "ObjectProperty"},
            {"PrimaryRangedAttackAbilityInstance", 0x618, "ObjectProperty"},
            {"NavWalkingSearchExtentScale", 0x620, "StructProperty"},
            {"CheapFlyingNavPointHorizontalGridRatio", 0x638, "FloatProperty"},
            {"CheapFlyingNavNavPointVerticalGridRatio", 0x63C, "FloatProperty"},
            {"CheapFlyingNavSmashableAbilityTag", 0x640, "StructProperty"},
            {"bAllowBacktrackPathfinding", 0x660, "BoolProperty"},
            {"bAutoAttackOnMovedHit", 0x660, "BoolProperty"},
            {"bAutoGenerateHotspotOnPlayerBuildings", 0x660, "BoolProperty"},
            {"bAutomaticallyChooseClosestTargetAsGoal", 0x660, "BoolProperty"},
            {"bEnableCheapFlyingNavigation", 0x660, "BoolProperty"},
            {"bIsGoalRequiredForBehavior", 0x660, "BoolProperty"},
            {"bRegisterToAthenaAIDropper", 0x661, "BoolProperty"},
            {"SecondaryGoalActor", 0x668, "ObjectProperty"},
            {"AttackCheckInterval", 0x670, "FloatProperty"},
            {"MeleeAttackCheckDistance", 0x674, "FloatProperty"},
            {"RangedAttackCheckDistance", 0x678, "FloatProperty"},
            {"BacktrackingZThreshold", 0x67C, "FloatProperty"},
            {"bAllowBacktracking", 0x680, "BoolProperty"},
            {"bAllowPawnRVOWeightOverrides", 0x681, "BoolProperty"},
            {"AthenaPFC", 0x690, "ObjectProperty"},
        }};
    };

    struct AthenaAIDirector
    {
        static constexpr std::string_view Name = "AthenaAIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIDirector";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxAliveCurve = 0x288;
            static constexpr std::uintptr_t MinAliveCurve = 0x298;
            static constexpr std::uintptr_t IntensityInfo = 0x2A8;
            static constexpr std::uintptr_t AIDirectorPIDController = 0x2D8;
            static constexpr std::uintptr_t PIDControllerSettings = 0x340;
            static constexpr std::uintptr_t UtilityContributionData = 0x370;
            static constexpr std::uintptr_t UnreachableLocationPathCost = 0x770;
            static constexpr std::uintptr_t PlayerPerformanceEstimateSettings = 0x778;
            static constexpr std::uintptr_t bUsePrototypeEnemies = 0x7B8;
            static constexpr std::uintptr_t bForceByPassNavMeshForAISpawning = 0x7BC;
            static constexpr std::uintptr_t DebugEncounterDirections = 0x7C0;
            static constexpr std::uintptr_t DespawnAIType = 0x7D0;
            static constexpr std::uintptr_t DespawnDistance = 0x7D4;
            static constexpr std::uintptr_t DespawnInterval = 0x7D8;
            static constexpr std::uintptr_t DebugSpawnAIGroupTags = 0x7E0;
            static constexpr std::uintptr_t DebugEncounterTags = 0x800;
            static constexpr std::uintptr_t BurstSpawnThreatVisualsEndDelay = 0x820;
            static constexpr std::uintptr_t EncounterSpawnGroupCapSettings = 0x828;
            static constexpr std::uintptr_t EncounterSpawnPointsSettings = 0x838;
            static constexpr std::uintptr_t EncounterPawnDifficultyLevelModifiers = 0x848;
            static constexpr std::uintptr_t SpawnGroupUpgrades = 0x858;
            static constexpr std::uintptr_t GuaranteedUpgradeGroupUtilityBonus = 0x868;
            static constexpr std::uintptr_t DiscreteEncounterUtilityDesireMappings = 0x86C;
            static constexpr std::uintptr_t InitialDynamicUtilities = 0x87C;
            static constexpr std::uintptr_t SpawnLocationPlacementQueries = 0x880;
            static constexpr std::uintptr_t SpawnLocationActorSearchQueries = 0x920;
            static constexpr std::uintptr_t DataTrackingSettings = 0x9C0;
            static constexpr std::uintptr_t BaseLootDropData = 0x9C8;
            static constexpr std::uintptr_t LootDropModifiers = 0x9D8;
            static constexpr std::uintptr_t LootDropDenialQuery = 0x9E8;
            static constexpr std::uintptr_t bDebugEncounterQueries = 0xA30;
            static constexpr std::uintptr_t PlayerControllersForBVTree = 0xA48;
            static constexpr std::uintptr_t PlayerPawnsForBVTree = 0xA58;
            static constexpr std::uintptr_t AIControllersForBVTree = 0xA98;
            static constexpr std::uintptr_t AIPawnsForBVTree = 0xAA8;
            static constexpr std::uintptr_t AIPlayerBotControllersForBVTree = 0xAE8;
            static constexpr std::uintptr_t AIPlayerBotPawnsForBVTree = 0xAF8;
            static constexpr std::uintptr_t AINonPlayerBotControllersForBVTree = 0xB38;
            static constexpr std::uintptr_t AINonPlayerBotPawnsForBVTree = 0xB48;
            static constexpr std::uintptr_t NonPlayerBotPawns = 0xB88;
            static constexpr std::uintptr_t PlayerBotPawns = 0xB98;
            static constexpr std::uintptr_t PlayerPawns = 0xBA8;
            static constexpr std::uintptr_t FortAIPawns = 0xBB8;
            static constexpr std::uintptr_t bUseLODSettings = 0xC48;
            static constexpr std::uintptr_t CachedLODSettingsManager = 0xCB8;
            static constexpr std::uintptr_t bAsyncProcessUpdateAliveAIs = 0xCC8;
            static constexpr std::uintptr_t bAllowProcessPlayerTargeting = 0xCC9;
            static constexpr std::uintptr_t MaxNumLODAIProcessPerFrame = 0xCCC;
            static constexpr std::uintptr_t DefaultEncounterPawnCaps = 0xCD0;
            static constexpr std::uintptr_t IntensityGraph = 0xCF0;
            static constexpr std::uintptr_t UtilitiesGraph = 0xCF8;
            static constexpr std::uintptr_t PIDValuesGraph = 0xD00;
            static constexpr std::uintptr_t PIDContributionsGraph = 0xD08;
            static constexpr std::uintptr_t bAIDisabled = 0xD10;
            static constexpr std::uintptr_t bNightActive = 0xD10;
            static constexpr std::uintptr_t bRegisteredForDayPhaseChange = 0xD10;
            static constexpr std::uintptr_t bUseSpawnCap = 0xD10;
            static constexpr std::uintptr_t NightCount = 0xD14;
            static constexpr std::uintptr_t NightEncounterFailureBreatherTime = 0xD18;
            static constexpr std::uintptr_t EncounterPawnSpawnInterval = 0xD1C;
            static constexpr std::uintptr_t DefaultNightEncounter = 0xD20;
            static constexpr std::uintptr_t DummyDebugEncounter = 0xD28;
            static constexpr std::uintptr_t BaseEncounterClass = 0xD30;
            static constexpr std::uintptr_t MaxActiveAlive = 0xD38;
            static constexpr std::uintptr_t NumActiveAlive = 0xD3C;
            static constexpr std::uintptr_t NumPendingCapRelevantAI = 0xD40;
            static constexpr std::uintptr_t PendingSpawns = 0xD58;
            static constexpr std::uintptr_t MaxAISpawnedPerFrame = 0xD68;
            static constexpr std::uintptr_t MaxAIDespawnedPerFrame = 0xD6C;
            static constexpr std::uintptr_t DespawnAllAIMaxAIDespawnedPerFrame = 0xD70;
            static constexpr std::uintptr_t NumWorldSubdivides = 0xDA8;
            static constexpr std::uintptr_t MinAISpawnDistanceFromPlayers = 0xDAC;
            static constexpr std::uintptr_t AmbientThreatPreferredPlacementActorTags = 0xDB0;
            static constexpr std::uintptr_t AmbientThreatRequiredPlacementActorTags = 0xDD0;
            static constexpr std::uintptr_t ActiveEncounters = 0xDF0;
            static constexpr std::uintptr_t InactiveEncounters = 0xE00;
            static constexpr std::uintptr_t PendingStoppedEncounters = 0xE10;
            static constexpr std::uintptr_t ActiveDefaultEncounter = 0xE20;
            static constexpr std::uintptr_t ActiveDummyDebugEncounter = 0xE28;
            static constexpr std::uintptr_t EncounterSequences = 0xE30;
            static constexpr std::uintptr_t EQSRenderingComp = 0xE40;
            static constexpr std::uintptr_t DebugGraphUpdateFrequency = 0xE48;
            static constexpr std::uintptr_t MaxNormalLODDistanceToPlayer = 0xE4C;
            static constexpr std::uintptr_t AIRelevantDistanceToPlayer = 0xE50;
            static constexpr std::uintptr_t EncounterRelevantDistanceToPlayer = 0xE54;
            static constexpr std::uintptr_t EncounterRelevantDistanceToDefender = 0xE58;
            static constexpr std::uintptr_t PatrolWards = 0xE60;
            static constexpr std::uintptr_t OnSpawnedWithRequestID = 0xE78;
            static constexpr std::uintptr_t MaxTotalActiveAliveAI = 0xE98;
            static constexpr std::uintptr_t MaxEncounterActiveAliveAI = 0xE9C;
            static constexpr std::uintptr_t MaxSPUsed = 0xEA0;
            static constexpr std::uintptr_t DebugEncounterTopUtilityPercentages = 0xEA8;
            static constexpr std::uintptr_t DebugEncounterSpawnPointsCurves = 0xEB8;
            static constexpr std::uintptr_t bDebugAllowEncounterModifierTags = 0xEC8;
            static constexpr std::uintptr_t SimulatedNumberOfPlayersForAIEncounters = 0xECC;
            static constexpr std::uintptr_t MaxNumberOfEncounterGroups = 0xF08;
            static constexpr std::uintptr_t RegisteredAISpawners = 0xF10;
        };

        inline static constexpr std::array<PropertyInfo, 97> Properties{{
            {"MaxAliveCurve", 0x288, "StructProperty"},
            {"MinAliveCurve", 0x298, "StructProperty"},
            {"IntensityInfo", 0x2A8, "StructProperty"},
            {"AIDirectorPIDController", 0x2D8, "StructProperty"},
            {"PIDControllerSettings", 0x340, "StructProperty"},
            {"UtilityContributionData", 0x370, "StructProperty"},
            {"UnreachableLocationPathCost", 0x770, "FloatProperty"},
            {"PlayerPerformanceEstimateSettings", 0x778, "StructProperty"},
            {"bUsePrototypeEnemies", 0x7B8, "BoolProperty"},
            {"bForceByPassNavMeshForAISpawning", 0x7BC, "BoolProperty"},
            {"DebugEncounterDirections", 0x7C0, "ArrayProperty"},
            {"DespawnAIType", 0x7D0, "EnumProperty"},
            {"DespawnDistance", 0x7D4, "FloatProperty"},
            {"DespawnInterval", 0x7D8, "FloatProperty"},
            {"DebugSpawnAIGroupTags", 0x7E0, "StructProperty"},
            {"DebugEncounterTags", 0x800, "StructProperty"},
            {"BurstSpawnThreatVisualsEndDelay", 0x820, "FloatProperty"},
            {"EncounterSpawnGroupCapSettings", 0x828, "ArrayProperty"},
            {"EncounterSpawnPointsSettings", 0x838, "ArrayProperty"},
            {"EncounterPawnDifficultyLevelModifiers", 0x848, "ArrayProperty"},
            {"SpawnGroupUpgrades", 0x858, "ArrayProperty"},
            {"GuaranteedUpgradeGroupUtilityBonus", 0x868, "FloatProperty"},
            {"DiscreteEncounterUtilityDesireMappings", 0x86C, "FloatProperty"},
            {"InitialDynamicUtilities", 0x87C, "ByteProperty"},
            {"SpawnLocationPlacementQueries", 0x880, "StructProperty"},
            {"SpawnLocationActorSearchQueries", 0x920, "StructProperty"},
            {"DataTrackingSettings", 0x9C0, "ObjectProperty"},
            {"BaseLootDropData", 0x9C8, "ArrayProperty"},
            {"LootDropModifiers", 0x9D8, "ArrayProperty"},
            {"LootDropDenialQuery", 0x9E8, "StructProperty"},
            {"bDebugEncounterQueries", 0xA30, "BoolProperty"},
            {"PlayerControllersForBVTree", 0xA48, "ArrayProperty"},
            {"PlayerPawnsForBVTree", 0xA58, "ArrayProperty"},
            {"AIControllersForBVTree", 0xA98, "ArrayProperty"},
            {"AIPawnsForBVTree", 0xAA8, "ArrayProperty"},
            {"AIPlayerBotControllersForBVTree", 0xAE8, "ArrayProperty"},
            {"AIPlayerBotPawnsForBVTree", 0xAF8, "ArrayProperty"},
            {"AINonPlayerBotControllersForBVTree", 0xB38, "ArrayProperty"},
            {"AINonPlayerBotPawnsForBVTree", 0xB48, "ArrayProperty"},
            {"NonPlayerBotPawns", 0xB88, "ArrayProperty"},
            {"PlayerBotPawns", 0xB98, "ArrayProperty"},
            {"PlayerPawns", 0xBA8, "ArrayProperty"},
            {"FortAIPawns", 0xBB8, "ArrayProperty"},
            {"bUseLODSettings", 0xC48, "BoolProperty"},
            {"CachedLODSettingsManager", 0xCB8, "InterfaceProperty"},
            {"bAsyncProcessUpdateAliveAIs", 0xCC8, "BoolProperty"},
            {"bAllowProcessPlayerTargeting", 0xCC9, "BoolProperty"},
            {"MaxNumLODAIProcessPerFrame", 0xCCC, "IntProperty"},
            {"DefaultEncounterPawnCaps", 0xCD0, "StructProperty"},
            {"IntensityGraph", 0xCF0, "ObjectProperty"},
            {"UtilitiesGraph", 0xCF8, "ObjectProperty"},
            {"PIDValuesGraph", 0xD00, "ObjectProperty"},
            {"PIDContributionsGraph", 0xD08, "ObjectProperty"},
            {"bAIDisabled", 0xD10, "BoolProperty"},
            {"bNightActive", 0xD10, "BoolProperty"},
            {"bRegisteredForDayPhaseChange", 0xD10, "BoolProperty"},
            {"bUseSpawnCap", 0xD10, "BoolProperty"},
            {"NightCount", 0xD14, "IntProperty"},
            {"NightEncounterFailureBreatherTime", 0xD18, "FloatProperty"},
            {"EncounterPawnSpawnInterval", 0xD1C, "FloatProperty"},
            {"DefaultNightEncounter", 0xD20, "ClassProperty"},
            {"DummyDebugEncounter", 0xD28, "ClassProperty"},
            {"BaseEncounterClass", 0xD30, "ClassProperty"},
            {"MaxActiveAlive", 0xD38, "IntProperty"},
            {"NumActiveAlive", 0xD3C, "IntProperty"},
            {"NumPendingCapRelevantAI", 0xD40, "IntProperty"},
            {"PendingSpawns", 0xD58, "ArrayProperty"},
            {"MaxAISpawnedPerFrame", 0xD68, "IntProperty"},
            {"MaxAIDespawnedPerFrame", 0xD6C, "IntProperty"},
            {"DespawnAllAIMaxAIDespawnedPerFrame", 0xD70, "IntProperty"},
            {"NumWorldSubdivides", 0xDA8, "IntProperty"},
            {"MinAISpawnDistanceFromPlayers", 0xDAC, "FloatProperty"},
            {"AmbientThreatPreferredPlacementActorTags", 0xDB0, "StructProperty"},
            {"AmbientThreatRequiredPlacementActorTags", 0xDD0, "StructProperty"},
            {"ActiveEncounters", 0xDF0, "ArrayProperty"},
            {"InactiveEncounters", 0xE00, "ArrayProperty"},
            {"PendingStoppedEncounters", 0xE10, "ArrayProperty"},
            {"ActiveDefaultEncounter", 0xE20, "ObjectProperty"},
            {"ActiveDummyDebugEncounter", 0xE28, "ObjectProperty"},
            {"EncounterSequences", 0xE30, "ArrayProperty"},
            {"EQSRenderingComp", 0xE40, "ObjectProperty"},
            {"DebugGraphUpdateFrequency", 0xE48, "IntProperty"},
            {"MaxNormalLODDistanceToPlayer", 0xE4C, "FloatProperty"},
            {"AIRelevantDistanceToPlayer", 0xE50, "FloatProperty"},
            {"EncounterRelevantDistanceToPlayer", 0xE54, "FloatProperty"},
            {"EncounterRelevantDistanceToDefender", 0xE58, "FloatProperty"},
            {"PatrolWards", 0xE60, "ArrayProperty"},
            {"OnSpawnedWithRequestID", 0xE78, "MulticastInlineDelegateProperty"},
            {"MaxTotalActiveAliveAI", 0xE98, "IntProperty"},
            {"MaxEncounterActiveAliveAI", 0xE9C, "IntProperty"},
            {"MaxSPUsed", 0xEA0, "IntProperty"},
            {"DebugEncounterTopUtilityPercentages", 0xEA8, "ArrayProperty"},
            {"DebugEncounterSpawnPointsCurves", 0xEB8, "ArrayProperty"},
            {"bDebugAllowEncounterModifierTags", 0xEC8, "BoolProperty"},
            {"SimulatedNumberOfPlayersForAIEncounters", 0xECC, "IntProperty"},
            {"MaxNumberOfEncounterGroups", 0xF08, "IntProperty"},
            {"RegisteredAISpawners", 0xF10, "ArrayProperty"},
        }};
    };

    struct AthenaAIDropper
    {
        static constexpr std::string_view Name = "AthenaAIDropper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t InactiveAgents = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InactiveAgents", 0x28, "ArrayProperty"},
        }};
    };

    struct AthenaAIPerceptionComponent
    {
        static constexpr std::string_view Name = "AthenaAIPerceptionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIPerceptionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedAIRuntimeParametersComponent = 0x1A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedAIRuntimeParametersComponent", 0x1A0, "WeakObjectProperty"},
        }};
    };

    struct AthenaAIPerceptionManager
    {
        static constexpr std::string_view Name = "AthenaAIPerceptionManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t AISystem = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AISystem", 0x30, "ObjectProperty"},
        }};
    };

    struct AthenaAIPerceptionStimuliSourceComponent
    {
        static constexpr std::string_view Name = "AthenaAIPerceptionStimuliSourceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIPerceptionStimuliSourceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsConsideredAsThreateningObjectForBots = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsConsideredAsThreateningObjectForBots", 0xD8, "BoolProperty"},
        }};
    };

    struct AthenaAIPopulationTracker
    {
        static constexpr std::string_view Name = "AthenaAIPopulationTracker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnAIPawnDied = 0x38;
            static constexpr std::uintptr_t OnAIPawnDestroyed = 0x48;
            static constexpr std::uintptr_t OnAIPawnSpawned = 0x58;
            static constexpr std::uintptr_t OnClientAIPawnSpawned = 0x68;
            static constexpr std::uintptr_t AIList = 0x98;
            static constexpr std::uintptr_t CachedGameMode = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnAIPawnDied", 0x38, "MulticastInlineDelegateProperty"},
            {"OnAIPawnDestroyed", 0x48, "MulticastInlineDelegateProperty"},
            {"OnAIPawnSpawned", 0x58, "MulticastInlineDelegateProperty"},
            {"OnClientAIPawnSpawned", 0x68, "MulticastInlineDelegateProperty"},
            {"AIList", 0x98, "ArrayProperty"},
            {"CachedGameMode", 0xA8, "ObjectProperty"},
        }};
    };

    struct AthenaAISense_Hearing
    {
        static constexpr std::string_view Name = "AthenaAISense_Hearing";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISense_Hearing";
        struct Offsets
        {
            static constexpr std::uintptr_t NoiseEvents = 0x78;
            static constexpr std::uintptr_t SpeedOfSoundSq = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NoiseEvents", 0x78, "ArrayProperty"},
            {"SpeedOfSoundSq", 0x88, "FloatProperty"},
        }};
    };

    struct AthenaAIService
    {
        static constexpr std::string_view Name = "AthenaAIService";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedGameMode = 0x28;
            static constexpr std::uintptr_t CachedGameState = 0x30;
            static constexpr std::uintptr_t AIServiceManager = 0x68;
            static constexpr std::uintptr_t Modifiers = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CachedGameMode", 0x28, "ObjectProperty"},
            {"CachedGameState", 0x30, "ObjectProperty"},
            {"AIServiceManager", 0x68, "ObjectProperty"},
            {"Modifiers", 0x70, "ArrayProperty"},
        }};
    };

    struct AthenaAIServiceBarks
    {
        static constexpr std::string_view Name = "AthenaAIServiceBarks";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaAIService";
        struct Offsets
        {
            static constexpr std::uintptr_t BarkCooldowns = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BarkCooldowns", 0x98, "MapProperty"},
        }};
    };

    struct AthenaAIServiceConvoy
    {
        static constexpr std::string_view Name = "AthenaAIServiceConvoy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaAIService";
        struct Offsets
        {
            static constexpr std::uintptr_t ConvoyLeaderTags = 0x98;
            static constexpr std::uintptr_t InConvoyTags = 0xB8;
            static constexpr std::uintptr_t NextConvoyID = 0xD8;
            static constexpr std::uintptr_t ConvoyList = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ConvoyLeaderTags", 0x98, "StructProperty"},
            {"InConvoyTags", 0xB8, "StructProperty"},
            {"NextConvoyID", 0xD8, "IntProperty"},
            {"ConvoyList", 0xE0, "ArrayProperty"},
        }};
    };

    struct AthenaAIServiceCover
    {
        static constexpr std::string_view Name = "AthenaAIServiceCover";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaAIService";
        struct Offsets
        {
            static constexpr std::uintptr_t CoverPositionFilterClass = 0x98;
            static constexpr std::uintptr_t TimeSlicedExecutor = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CoverPositionFilterClass", 0x98, "ClassProperty"},
            {"TimeSlicedExecutor", 0xE8, "ObjectProperty"},
        }};
    };

    struct AthenaAIServiceCreativePlayerBots
    {
        static constexpr std::string_view Name = "AthenaAIServiceCreativePlayerBots";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaAIServicePlayerBots";
        struct Offsets
        {
            static constexpr std::uintptr_t OnMinigameBotsReady = 0x12C0;
            static constexpr std::uintptr_t CachedMinigame = 0x12D0;
            static constexpr std::uintptr_t bRemoveBotsOnGameover = 0x12DA;
            static constexpr std::uintptr_t HiringHistory = 0x12E0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnMinigameBotsReady", 0x12C0, "MulticastInlineDelegateProperty"},
            {"CachedMinigame", 0x12D0, "WeakObjectProperty"},
            {"bRemoveBotsOnGameover", 0x12DA, "BoolProperty"},
            {"HiringHistory", 0x12E0, "MapProperty"},
        }};
    };

    struct AthenaAIServiceGroup
    {
        static constexpr std::string_view Name = "AthenaAIServiceGroup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaAIService";
        struct Offsets
        {
            static constexpr std::uintptr_t GroupLeaderTags = 0x98;
            static constexpr std::uintptr_t InGroupTags = 0xB8;
            static constexpr std::uintptr_t NotInGroupTags = 0xD8;
            static constexpr std::uintptr_t GroupIndexCount = 0xF8;
            static constexpr std::uintptr_t GroupList = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"GroupLeaderTags", 0x98, "StructProperty"},
            {"InGroupTags", 0xB8, "StructProperty"},
            {"NotInGroupTags", 0xD8, "StructProperty"},
            {"GroupIndexCount", 0xF8, "IntProperty"},
            {"GroupList", 0x100, "ArrayProperty"},
        }};
    };

    struct AthenaAIServiceLOF
    {
        static constexpr std::string_view Name = "AthenaAIServiceLOF";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaAIService";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeSlicedExecutor = 0x98;
            static constexpr std::uintptr_t DistanceToQuerierAcceptance = 0xA0;
            static constexpr std::uintptr_t DistanceToTargetAcceptance = 0xA4;
            static constexpr std::uintptr_t bEnableDistanceToQuerierTest = 0xA8;
            static constexpr std::uintptr_t bEnableDistanceToTargetTest = 0xA9;
            static constexpr std::uintptr_t bActorsBlockLOFByDefault = 0xAA;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TimeSlicedExecutor", 0x98, "ObjectProperty"},
            {"DistanceToQuerierAcceptance", 0xA0, "FloatProperty"},
            {"DistanceToTargetAcceptance", 0xA4, "FloatProperty"},
            {"bEnableDistanceToQuerierTest", 0xA8, "BoolProperty"},
            {"bEnableDistanceToTargetTest", 0xA9, "BoolProperty"},
            {"bActorsBlockLOFByDefault", 0xAA, "BoolProperty"},
        }};
    };

    struct AthenaAIServiceLocationSynchronizer
    {
        static constexpr std::string_view Name = "AthenaAIServiceLocationSynchronizer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaAIService";
        struct Offsets
        {
            static constexpr std::uintptr_t OctreeOrigin = 0xC0;
            static constexpr std::uintptr_t OctreeRadius = 0xD8;
            static constexpr std::uintptr_t DestroyReservationTime = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OctreeOrigin", 0xC0, "StructProperty"},
            {"OctreeRadius", 0xD8, "StructProperty"},
            {"DestroyReservationTime", 0x100, "StructProperty"},
        }};
    };

    struct AthenaAIServiceLoot
    {
        static constexpr std::string_view Name = "AthenaAIServiceLoot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaAIService";
        struct Offsets
        {
            static constexpr std::uintptr_t LootOctreeCenter = 0x98;
            static constexpr std::uintptr_t LootOctreeRadius = 0xB0;
            static constexpr std::uintptr_t SupplyDropStatusUpdateRate = 0xD8;
            static constexpr std::uintptr_t RemoveInvalidChestFromOctreeProbability = 0x100;
            static constexpr std::uintptr_t MovingLootTrackingEnabled = 0x128;
            static constexpr std::uintptr_t MovingLootUpdateRate = 0x150;
            static constexpr std::uintptr_t MovingLootOctreeUpdateDistanceThreshold = 0x178;
            static constexpr std::uintptr_t HarvestableActorClassList = 0x1A0;
            static constexpr std::uintptr_t LootClusteringEnabled = 0x1B0;
            static constexpr std::uintptr_t LootClusteringNeighborDistanceMax = 0x1D8;
            static constexpr std::uintptr_t LootClusteringNeighborhoodCountMin = 0x200;
            static constexpr std::uintptr_t LootClusteringItemWeightDataRegistry = 0x228;
            static constexpr std::uintptr_t LootClusteringDefaultWeight = 0x230;
            static constexpr std::uintptr_t LootClusteringExpandByBoxX = 0x258;
            static constexpr std::uintptr_t LootClusteringExpandByBoxY = 0x280;
            static constexpr std::uintptr_t LootClusteringExpandByBoxZ = 0x2A8;
            static constexpr std::uintptr_t MovingLoots = 0x468;
            static constexpr std::uintptr_t CachedSupplyDrops = 0x488;
            static constexpr std::uintptr_t CachedWorldItem = 0x498;
            static constexpr std::uintptr_t BotBuildingContainerExcludeListDataTable = 0x4A0;
            static constexpr std::uintptr_t LootClusterCalculationGamePhase = 0x4A8;
            static constexpr std::uintptr_t CachedLootClusteringItemWeightTable = 0x4C8;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"LootOctreeCenter", 0x98, "StructProperty"},
            {"LootOctreeRadius", 0xB0, "StructProperty"},
            {"SupplyDropStatusUpdateRate", 0xD8, "StructProperty"},
            {"RemoveInvalidChestFromOctreeProbability", 0x100, "StructProperty"},
            {"MovingLootTrackingEnabled", 0x128, "StructProperty"},
            {"MovingLootUpdateRate", 0x150, "StructProperty"},
            {"MovingLootOctreeUpdateDistanceThreshold", 0x178, "StructProperty"},
            {"HarvestableActorClassList", 0x1A0, "ArrayProperty"},
            {"LootClusteringEnabled", 0x1B0, "StructProperty"},
            {"LootClusteringNeighborDistanceMax", 0x1D8, "StructProperty"},
            {"LootClusteringNeighborhoodCountMin", 0x200, "StructProperty"},
            {"LootClusteringItemWeightDataRegistry", 0x228, "ObjectProperty"},
            {"LootClusteringDefaultWeight", 0x230, "StructProperty"},
            {"LootClusteringExpandByBoxX", 0x258, "StructProperty"},
            {"LootClusteringExpandByBoxY", 0x280, "StructProperty"},
            {"LootClusteringExpandByBoxZ", 0x2A8, "StructProperty"},
            {"MovingLoots", 0x468, "MapProperty"},
            {"CachedSupplyDrops", 0x488, "ArrayProperty"},
            {"CachedWorldItem", 0x498, "ObjectProperty"},
            {"BotBuildingContainerExcludeListDataTable", 0x4A0, "ObjectProperty"},
            {"LootClusterCalculationGamePhase", 0x4A8, "EnumProperty"},
            {"CachedLootClusteringItemWeightTable", 0x4C8, "ArrayProperty"},
        }};
    };

    struct AthenaAIServiceManager
    {
        static constexpr std::string_view Name = "AthenaAIServiceManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t AIServices = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AIServices", 0x68, "ArrayProperty"},
        }};
    };

    struct AthenaAIServicePlayerBots
    {
        static constexpr std::string_view Name = "AthenaAIServicePlayerBots";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaAIService";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultAISpawnerDataComponentList = 0xA0;
            static constexpr std::uintptr_t DefaultAISpawnComponent = 0xA8;
            static constexpr std::uintptr_t DeadBots = 0xB0;
            static constexpr std::uintptr_t ZiplineOctreeCenter = 0xC0;
            static constexpr std::uintptr_t ZiplineOctreeRadius = 0xD8;
            static constexpr std::uintptr_t UseZiplines = 0x100;
            static constexpr std::uintptr_t DebugMinimapData = 0x220;
            static constexpr std::uintptr_t MarkPlayerBotsAggressiveStencilName = 0x3B0;
            static constexpr std::uintptr_t MarkPlayerBotsDefensiveStencilName = 0x3B4;
            static constexpr std::uintptr_t bBotHostileToHumanPlayersOnly = 0x3B8;
            static constexpr std::uintptr_t ConstructionBuildingInfo = 0x3C0;
            static constexpr std::uintptr_t BotItemDataTable = 0x450;
            static constexpr std::uintptr_t BotItemDataRegistry = 0x458;
            static constexpr std::uintptr_t AugmentsRegistryName = 0x460;
            static constexpr std::uintptr_t VisibilitySettingsRegistry = 0x468;
            static constexpr std::uintptr_t PerceivedActorTagsToAdd = 0x470;
            static constexpr std::uintptr_t MaxAnonymousBotCount = 0x490;
            static constexpr std::uintptr_t BotNameLibraryData = 0x4B8;
            static constexpr std::uintptr_t CosmeticVariationCount = 0x4D8;
            static constexpr std::uintptr_t TriggerEndGameBehaviorMinTime = 0x500;
            static constexpr std::uintptr_t TriggerEndGameBehaviorMaxTime = 0x528;
            static constexpr std::uintptr_t ShowSeasonLevelProbability = 0x550;
            static constexpr std::uintptr_t SpectateOthersOnDeath = 0x578;
            static constexpr std::uintptr_t BackfillEnabled = 0x5A0;
            static constexpr std::uintptr_t UsePlayerCosmeticForBackfill = 0x5C8;
            static constexpr std::uintptr_t UsePlayerInventoryForBackfill = 0x5F0;
            static constexpr std::uintptr_t OnlyUseBackfillDuringSafezones = 0x618;
            static constexpr std::uintptr_t BackfillSpawnerData = 0x640;
            static constexpr std::uintptr_t GameParticipantAIBotControllers = 0x660;
            static constexpr std::uintptr_t CachedBotItemData = 0x670;
            static constexpr std::uintptr_t CachedSupportedAugments = 0x680;
            static constexpr std::uintptr_t CachedAIAimingManager = 0x6A0;
            static constexpr std::uintptr_t LastTeamPlayerStart = 0x7D8;
            static constexpr std::uintptr_t CacheSafeZoneLocationsMap = 0x7E8;
            static constexpr std::uintptr_t bCleanupBotsRegardlessOfRemainingSquadMembers = 0x7F8;
            static constexpr std::uintptr_t DeadBotCleanupMinDelay = 0x7FC;
            static constexpr std::uintptr_t LocationsInSafeZoneFreeIndices = 0x810;
            static constexpr std::uintptr_t OnPlayerBotSpawningFlowDoneDelegate = 0x820;
            static constexpr std::uintptr_t CurrentFillingTeam = 0x8B0;
            static constexpr std::uintptr_t BotsUniqueIDUseValidAccountID = 0x8D0;
            static constexpr std::uintptr_t CurrentBotControllerUID = 0x8F8;
            static constexpr std::uintptr_t BeaconList = 0x900;
            static constexpr std::uintptr_t bCanStartSpawningFlowOnPlaylistDataReady = 0x959;
            static constexpr std::uintptr_t bDoMapSampling = 0x959;
            static constexpr std::uintptr_t bDoSpawnBotFlow = 0x959;
            static constexpr std::uintptr_t bHasToWaitForGamePhaseToStartSpawning = 0x959;
            static constexpr std::uintptr_t bWaitForExperienceToBeLoaded = 0x959;
            static constexpr std::uintptr_t bWaitForNavmeshToBeLoaded = 0x959;
            static constexpr std::uintptr_t GamePhaseToStartSpawning = 0x95A;
            static constexpr std::uintptr_t DefaultBotAISpawnerData = 0x960;
            static constexpr std::uintptr_t EQSMapSampling = 0x978;
            static constexpr std::uintptr_t CanReviveDownedSquad = 0x9D8;
            static constexpr std::uintptr_t CachedAIPopulationTracker = 0xA00;
            static constexpr std::uintptr_t PlayerBots = 0xA08;
            static constexpr std::uintptr_t NonAthenaParticipantBots = 0xA18;
            static constexpr std::uintptr_t MMRSpawnTable = 0xA68;
            static constexpr std::uintptr_t MMRSpawnTableOverrides = 0xA88;
            static constexpr std::uintptr_t CachedMMRSpawningInfo = 0xA98;
            static constexpr std::uintptr_t OverridePOISpreadingSquadCount = 0xAF0;
            static constexpr std::uintptr_t KillVolumeOverlapCheckHalfExtent = 0xB48;
            static constexpr std::uintptr_t DynamicBotPOIEnabled = 0xB60;
            static constexpr std::uintptr_t BotPOIEQS = 0xB88;
            static constexpr std::uintptr_t BotPOIMinimumWeightForSquadMembers = 0xBA8;
            static constexpr std::uintptr_t BotPOINextPOIDurationSecondByWeight = 0xBD0;
            static constexpr std::uintptr_t BotPOINextPOIMinDuration = 0xBF8;
            static constexpr std::uintptr_t BotPOINextPOIMaxDuration = 0xC20;
            static constexpr std::uintptr_t BotPOIExcludedZonesDataRegistry = 0xC48;
            static constexpr std::uintptr_t DynamicPOIPointProviderTags = 0xC50;
            static constexpr std::uintptr_t BotPOIJumpMainPOICountMax = 0xC70;
            static constexpr std::uintptr_t BotPOISquadJumpOnMainPOICountMax = 0xC98;
            static constexpr std::uintptr_t DenyJumpBusBotPOIByProximityEnabled = 0xCC0;
            static constexpr std::uintptr_t DenyJumpBusBotPOIDistance = 0xCE8;
            static constexpr std::uintptr_t SquadJumpOnSameMainPOICountMax = 0xD10;
            static constexpr std::uintptr_t FailToReachBotPOICountMax = 0xD38;
            static constexpr std::uintptr_t BotPOIScoringWeightFactor = 0xD60;
            static constexpr std::uintptr_t BotPOIScoringDistanceFactor = 0xD88;
            static constexpr std::uintptr_t BotPOIScoringOccupancyFactor = 0xDB0;
            static constexpr std::uintptr_t BotPOIScoringVisitedFactor = 0xDD8;
            static constexpr std::uintptr_t ChanceToUseNextSafeZone = 0xE00;
            static constexpr std::uintptr_t ParticipantClusteringEnabled = 0xE28;
            static constexpr std::uintptr_t ParticipantAliveToStartClusteringPercentage = 0xE50;
            static constexpr std::uintptr_t ParticipantClusteringTick = 0xE78;
            static constexpr std::uintptr_t ParticipantClusteringNeighborDistanceMax = 0xEA0;
            static constexpr std::uintptr_t ParticipantClusteringNeighborhoodCountMin = 0xEC8;
            static constexpr std::uintptr_t ParticipantClusterSizeXMin = 0xEF0;
            static constexpr std::uintptr_t ParticipantClusterSizeYMin = 0xF18;
            static constexpr std::uintptr_t ParticipantClusterSizeZMin = 0xF40;
            static constexpr std::uintptr_t ParticipantClusterWeightByPlayer = 0xF68;
            static constexpr std::uintptr_t ParticipantClusterWeightByBot = 0xF90;
            static constexpr std::uintptr_t BotPOISeekFightScoringWeightFactor = 0xFB8;
            static constexpr std::uintptr_t BotPOISeekFightScoringDistanceFactor = 0xFE0;
            static constexpr std::uintptr_t BotPOISeekFightScoringOccupancyFactor = 0x1008;
            static constexpr std::uintptr_t TrackedTargetClusteringEnabled = 0x1030;
            static constexpr std::uintptr_t TrackedTargetClusteringTick = 0x1058;
            static constexpr std::uintptr_t TrackedTargetClusterSize = 0x1080;
            static constexpr std::uintptr_t TrackedTargetClusterWeight = 0x10A8;
            static constexpr std::uintptr_t DisablePlayerBotHearingDuringWarmupPhase = 0x10D0;
            static constexpr std::uintptr_t BotPOIIdCount = 0x10F8;
            static constexpr std::uintptr_t BotPOISquadJumpedOnMainPOICount = 0x10FC;
            static constexpr std::uintptr_t StartupPOIPendingEQSRequestIDList = 0x1100;
            static constexpr std::uintptr_t BotPOIList = 0x1110;
            static constexpr std::uintptr_t CachedMainJumpBotPOIList = 0x1120;
            static constexpr std::uintptr_t CachedSecondaryJumpBotPOIList = 0x1130;
            static constexpr std::uintptr_t CachedBotPOIExcludedZonesList = 0x1140;
            static constexpr std::uintptr_t bIsBotPOIJumpListSplit = 0x1150;
            static constexpr std::uintptr_t bIsExcludedZoneGenerated = 0x1151;
            static constexpr std::uintptr_t BotPOIDebugDebugActor = 0x1158;
            static constexpr std::uintptr_t bCheatBotPOIDebugMiniMapEnabled = 0x1160;
            static constexpr std::uintptr_t BotDebugDebugActor = 0x1168;
            static constexpr std::uintptr_t bCheatBotDebugMiniMapEnabled = 0x1170;
            static constexpr std::uintptr_t CachedBRLogic = 0x1178;
            static constexpr std::uintptr_t WeaponDataRegistry = 0x11C0;
            static constexpr std::uintptr_t WeaponSettings = 0x11C8;
            static constexpr std::uintptr_t WeaponModRegistry = 0x11D8;
            static constexpr std::uintptr_t WeaponModSettings = 0x11E0;
            static constexpr std::uintptr_t AimingRegistry = 0x11F0;
            static constexpr std::uintptr_t AimSettings = 0x11F8;
            static constexpr std::uintptr_t TimeSlicedExecutor = 0x1208;
            static constexpr std::uintptr_t BotSquadInfos = 0x1210;
            static constexpr std::uintptr_t MovementItemRegistry = 0x1220;
            static constexpr std::uintptr_t MovementItemData = 0x1228;
            static constexpr std::uintptr_t ModifierDataArray = 0x1238;
            static constexpr std::uintptr_t FillBotResourceRegistry = 0x12A0;
            static constexpr std::uintptr_t FillResourceSettings = 0x12A8;
            static constexpr std::uintptr_t bHasInitializedMatchState = 0x12B8;
        };

        inline static constexpr std::array<PropertyInfo, 125> Properties{{
            {"DefaultAISpawnerDataComponentList", 0xA0, "ObjectProperty"},
            {"DefaultAISpawnComponent", 0xA8, "ObjectProperty"},
            {"DeadBots", 0xB0, "ArrayProperty"},
            {"ZiplineOctreeCenter", 0xC0, "StructProperty"},
            {"ZiplineOctreeRadius", 0xD8, "StructProperty"},
            {"UseZiplines", 0x100, "StructProperty"},
            {"DebugMinimapData", 0x220, "StructProperty"},
            {"MarkPlayerBotsAggressiveStencilName", 0x3B0, "NameProperty"},
            {"MarkPlayerBotsDefensiveStencilName", 0x3B4, "NameProperty"},
            {"bBotHostileToHumanPlayersOnly", 0x3B8, "BoolProperty"},
            {"ConstructionBuildingInfo", 0x3C0, "StructProperty"},
            {"BotItemDataTable", 0x450, "ObjectProperty"},
            {"BotItemDataRegistry", 0x458, "ObjectProperty"},
            {"AugmentsRegistryName", 0x460, "NameProperty"},
            {"VisibilitySettingsRegistry", 0x468, "ObjectProperty"},
            {"PerceivedActorTagsToAdd", 0x470, "StructProperty"},
            {"MaxAnonymousBotCount", 0x490, "StructProperty"},
            {"BotNameLibraryData", 0x4B8, "SoftObjectProperty"},
            {"CosmeticVariationCount", 0x4D8, "StructProperty"},
            {"TriggerEndGameBehaviorMinTime", 0x500, "StructProperty"},
            {"TriggerEndGameBehaviorMaxTime", 0x528, "StructProperty"},
            {"ShowSeasonLevelProbability", 0x550, "StructProperty"},
            {"SpectateOthersOnDeath", 0x578, "StructProperty"},
            {"BackfillEnabled", 0x5A0, "StructProperty"},
            {"UsePlayerCosmeticForBackfill", 0x5C8, "StructProperty"},
            {"UsePlayerInventoryForBackfill", 0x5F0, "StructProperty"},
            {"OnlyUseBackfillDuringSafezones", 0x618, "StructProperty"},
            {"BackfillSpawnerData", 0x640, "SoftClassProperty"},
            {"GameParticipantAIBotControllers", 0x660, "ArrayProperty"},
            {"CachedBotItemData", 0x670, "ArrayProperty"},
            {"CachedSupportedAugments", 0x680, "ArrayProperty"},
            {"CachedAIAimingManager", 0x6A0, "InterfaceProperty"},
            {"LastTeamPlayerStart", 0x7D8, "ObjectProperty"},
            {"CacheSafeZoneLocationsMap", 0x7E8, "MapProperty"},
            {"bCleanupBotsRegardlessOfRemainingSquadMembers", 0x7F8, "BoolProperty"},
            {"DeadBotCleanupMinDelay", 0x7FC, "FloatProperty"},
            {"LocationsInSafeZoneFreeIndices", 0x810, "ArrayProperty"},
            {"OnPlayerBotSpawningFlowDoneDelegate", 0x820, "MulticastInlineDelegateProperty"},
            {"CurrentFillingTeam", 0x8B0, "ObjectProperty"},
            {"BotsUniqueIDUseValidAccountID", 0x8D0, "StructProperty"},
            {"CurrentBotControllerUID", 0x8F8, "IntProperty"},
            {"BeaconList", 0x900, "ArrayProperty"},
            {"bCanStartSpawningFlowOnPlaylistDataReady", 0x959, "BoolProperty"},
            {"bDoMapSampling", 0x959, "BoolProperty"},
            {"bDoSpawnBotFlow", 0x959, "BoolProperty"},
            {"bHasToWaitForGamePhaseToStartSpawning", 0x959, "BoolProperty"},
            {"bWaitForExperienceToBeLoaded", 0x959, "BoolProperty"},
            {"bWaitForNavmeshToBeLoaded", 0x959, "BoolProperty"},
            {"GamePhaseToStartSpawning", 0x95A, "EnumProperty"},
            {"DefaultBotAISpawnerData", 0x960, "ClassProperty"},
            {"EQSMapSampling", 0x978, "SoftObjectProperty"},
            {"CanReviveDownedSquad", 0x9D8, "StructProperty"},
            {"CachedAIPopulationTracker", 0xA00, "ObjectProperty"},
            {"PlayerBots", 0xA08, "ArrayProperty"},
            {"NonAthenaParticipantBots", 0xA18, "ArrayProperty"},
            {"MMRSpawnTable", 0xA68, "SoftObjectProperty"},
            {"MMRSpawnTableOverrides", 0xA88, "ArrayProperty"},
            {"CachedMMRSpawningInfo", 0xA98, "StructProperty"},
            {"OverridePOISpreadingSquadCount", 0xAF0, "StructProperty"},
            {"KillVolumeOverlapCheckHalfExtent", 0xB48, "StructProperty"},
            {"DynamicBotPOIEnabled", 0xB60, "StructProperty"},
            {"BotPOIEQS", 0xB88, "SoftObjectProperty"},
            {"BotPOIMinimumWeightForSquadMembers", 0xBA8, "StructProperty"},
            {"BotPOINextPOIDurationSecondByWeight", 0xBD0, "StructProperty"},
            {"BotPOINextPOIMinDuration", 0xBF8, "StructProperty"},
            {"BotPOINextPOIMaxDuration", 0xC20, "StructProperty"},
            {"BotPOIExcludedZonesDataRegistry", 0xC48, "ObjectProperty"},
            {"DynamicPOIPointProviderTags", 0xC50, "StructProperty"},
            {"BotPOIJumpMainPOICountMax", 0xC70, "StructProperty"},
            {"BotPOISquadJumpOnMainPOICountMax", 0xC98, "StructProperty"},
            {"DenyJumpBusBotPOIByProximityEnabled", 0xCC0, "StructProperty"},
            {"DenyJumpBusBotPOIDistance", 0xCE8, "StructProperty"},
            {"SquadJumpOnSameMainPOICountMax", 0xD10, "StructProperty"},
            {"FailToReachBotPOICountMax", 0xD38, "StructProperty"},
            {"BotPOIScoringWeightFactor", 0xD60, "StructProperty"},
            {"BotPOIScoringDistanceFactor", 0xD88, "StructProperty"},
            {"BotPOIScoringOccupancyFactor", 0xDB0, "StructProperty"},
            {"BotPOIScoringVisitedFactor", 0xDD8, "StructProperty"},
            {"ChanceToUseNextSafeZone", 0xE00, "StructProperty"},
            {"ParticipantClusteringEnabled", 0xE28, "StructProperty"},
            {"ParticipantAliveToStartClusteringPercentage", 0xE50, "StructProperty"},
            {"ParticipantClusteringTick", 0xE78, "StructProperty"},
            {"ParticipantClusteringNeighborDistanceMax", 0xEA0, "StructProperty"},
            {"ParticipantClusteringNeighborhoodCountMin", 0xEC8, "StructProperty"},
            {"ParticipantClusterSizeXMin", 0xEF0, "StructProperty"},
            {"ParticipantClusterSizeYMin", 0xF18, "StructProperty"},
            {"ParticipantClusterSizeZMin", 0xF40, "StructProperty"},
            {"ParticipantClusterWeightByPlayer", 0xF68, "StructProperty"},
            {"ParticipantClusterWeightByBot", 0xF90, "StructProperty"},
            {"BotPOISeekFightScoringWeightFactor", 0xFB8, "StructProperty"},
            {"BotPOISeekFightScoringDistanceFactor", 0xFE0, "StructProperty"},
            {"BotPOISeekFightScoringOccupancyFactor", 0x1008, "StructProperty"},
            {"TrackedTargetClusteringEnabled", 0x1030, "StructProperty"},
            {"TrackedTargetClusteringTick", 0x1058, "StructProperty"},
            {"TrackedTargetClusterSize", 0x1080, "StructProperty"},
            {"TrackedTargetClusterWeight", 0x10A8, "StructProperty"},
            {"DisablePlayerBotHearingDuringWarmupPhase", 0x10D0, "StructProperty"},
            {"BotPOIIdCount", 0x10F8, "IntProperty"},
            {"BotPOISquadJumpedOnMainPOICount", 0x10FC, "IntProperty"},
            {"StartupPOIPendingEQSRequestIDList", 0x1100, "ArrayProperty"},
            {"BotPOIList", 0x1110, "ArrayProperty"},
            {"CachedMainJumpBotPOIList", 0x1120, "ArrayProperty"},
            {"CachedSecondaryJumpBotPOIList", 0x1130, "ArrayProperty"},
            {"CachedBotPOIExcludedZonesList", 0x1140, "ArrayProperty"},
            {"bIsBotPOIJumpListSplit", 0x1150, "BoolProperty"},
            {"bIsExcludedZoneGenerated", 0x1151, "BoolProperty"},
            {"BotPOIDebugDebugActor", 0x1158, "ObjectProperty"},
            {"bCheatBotPOIDebugMiniMapEnabled", 0x1160, "BoolProperty"},
            {"BotDebugDebugActor", 0x1168, "ObjectProperty"},
            {"bCheatBotDebugMiniMapEnabled", 0x1170, "BoolProperty"},
            {"CachedBRLogic", 0x1178, "ObjectProperty"},
            {"WeaponDataRegistry", 0x11C0, "ObjectProperty"},
            {"WeaponSettings", 0x11C8, "ArrayProperty"},
            {"WeaponModRegistry", 0x11D8, "ObjectProperty"},
            {"WeaponModSettings", 0x11E0, "ArrayProperty"},
            {"AimingRegistry", 0x11F0, "ObjectProperty"},
            {"AimSettings", 0x11F8, "ArrayProperty"},
            {"TimeSlicedExecutor", 0x1208, "ObjectProperty"},
            {"BotSquadInfos", 0x1210, "ArrayProperty"},
            {"MovementItemRegistry", 0x1220, "ObjectProperty"},
            {"MovementItemData", 0x1228, "ArrayProperty"},
            {"ModifierDataArray", 0x1238, "ArrayProperty"},
            {"FillBotResourceRegistry", 0x12A0, "ObjectProperty"},
            {"FillResourceSettings", 0x12A8, "ArrayProperty"},
            {"bHasInitializedMatchState", 0x12B8, "BoolProperty"},
        }};
    };

    struct AthenaAIServiceVehicle
    {
        static constexpr std::string_view Name = "AthenaAIServiceVehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaAIService";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeToRefreshTree = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TimeToRefreshTree", 0xE0, "FloatProperty"},
        }};
    };

    struct AthenaAIServiceZoneManager
    {
        static constexpr std::string_view Name = "AthenaAIServiceZoneManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaAIService";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackedZones = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TrackedZones", 0x98, "ArrayProperty"},
        }};
    };

    struct AthenaAISettings
    {
        static constexpr std::string_view Name = "AthenaAISettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowAIDirector = 0x28;
            static constexpr std::uintptr_t bAllowAIGoalManager = 0x28;
            static constexpr std::uintptr_t bForceRVOUse = 0x28;
            static constexpr std::uintptr_t MaxPlayerSpeedScaleFootstepSounds = 0x2C;
            static constexpr std::uintptr_t MinFootstepHearingRange = 0x30;
            static constexpr std::uintptr_t MaxFootstepHearingRange = 0x34;
            static constexpr std::uintptr_t bGenerateExtendedFootstepNoise = 0x38;
            static constexpr std::uintptr_t ExtendedFootstepNoiseMultiplier = 0x3C;
            static constexpr std::uintptr_t DamagedHearingRange = 0x40;
            static constexpr std::uintptr_t CrouchHearingModifier = 0x44;
            static constexpr std::uintptr_t MaxNPCHearingRange = 0x48;
            static constexpr std::uintptr_t MaxPerceptualStimuliAge = 0x4C;
            static constexpr std::uintptr_t DeAggroRange = 0x50;
            static constexpr std::uintptr_t ReducedDeAggroRange = 0x54;
            static constexpr std::uintptr_t DurationReduceAggroLimits = 0x58;
            static constexpr std::uintptr_t NavigationSystemConfig = 0x60;
            static constexpr std::uintptr_t StaticNavigationSystemConfig = 0x68;
            static constexpr std::uintptr_t AIDIrectorLOD = 0x70;
            static constexpr std::uintptr_t AIServices = 0x90;
            static constexpr std::uintptr_t GameParticipantAIBotControllers = 0xA0;
            static constexpr std::uintptr_t bEnablePerception = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 21> Properties{{
            {"bAllowAIDirector", 0x28, "BoolProperty"},
            {"bAllowAIGoalManager", 0x28, "BoolProperty"},
            {"bForceRVOUse", 0x28, "BoolProperty"},
            {"MaxPlayerSpeedScaleFootstepSounds", 0x2C, "FloatProperty"},
            {"MinFootstepHearingRange", 0x30, "FloatProperty"},
            {"MaxFootstepHearingRange", 0x34, "FloatProperty"},
            {"bGenerateExtendedFootstepNoise", 0x38, "BoolProperty"},
            {"ExtendedFootstepNoiseMultiplier", 0x3C, "FloatProperty"},
            {"DamagedHearingRange", 0x40, "FloatProperty"},
            {"CrouchHearingModifier", 0x44, "FloatProperty"},
            {"MaxNPCHearingRange", 0x48, "FloatProperty"},
            {"MaxPerceptualStimuliAge", 0x4C, "FloatProperty"},
            {"DeAggroRange", 0x50, "FloatProperty"},
            {"ReducedDeAggroRange", 0x54, "FloatProperty"},
            {"DurationReduceAggroLimits", 0x58, "FloatProperty"},
            {"NavigationSystemConfig", 0x60, "ClassProperty"},
            {"StaticNavigationSystemConfig", 0x68, "ClassProperty"},
            {"AIDIrectorLOD", 0x70, "SoftObjectProperty"},
            {"AIServices", 0x90, "ArrayProperty"},
            {"GameParticipantAIBotControllers", 0xA0, "ArrayProperty"},
            {"bEnablePerception", 0xB0, "BoolProperty"},
        }};
    };

    struct AthenaAISettingsAIDIrectorLOD
    {
        static constexpr std::string_view Name = "AthenaAISettingsAIDIrectorLOD";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerLODViewConeConfigs = 0x28;
            static constexpr std::uintptr_t PlayerLODViewConeHysteresisConfig = 0x38;
            static constexpr std::uintptr_t CouldBeVisibleViewConeAngleDegrees = 0x88;
            static constexpr std::uintptr_t CouldBeVisibleMaxDistance = 0xB0;
            static constexpr std::uintptr_t LODSortHysteresisDistance = 0xD8;
            static constexpr std::uintptr_t FortAIDirectorLODConfigs = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"PlayerLODViewConeConfigs", 0x28, "ArrayProperty"},
            {"PlayerLODViewConeHysteresisConfig", 0x38, "StructProperty"},
            {"CouldBeVisibleViewConeAngleDegrees", 0x88, "StructProperty"},
            {"CouldBeVisibleMaxDistance", 0xB0, "StructProperty"},
            {"LODSortHysteresisDistance", 0xD8, "StructProperty"},
            {"FortAIDirectorLODConfigs", 0x100, "ArrayProperty"},
        }};
    };

    struct AthenaAISpawner
    {
        static constexpr std::string_view Name = "AthenaAISpawner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t OnPawnPreFinishSpawningEvent = 0x38;
            static constexpr std::uintptr_t OnPawnSpawnedEvent = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnPawnPreFinishSpawningEvent", 0x38, "MulticastInlineDelegateProperty"},
            {"OnPawnSpawnedEvent", 0x48, "MulticastInlineDelegateProperty"},
        }};
    };

    struct AthenaAISystem
    {
        static constexpr std::string_view Name = "AthenaAISystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAISystem";
        struct Offsets
        {
            static constexpr std::uintptr_t PerceptionManager = 0x198;
            static constexpr std::uintptr_t AIDropper = 0x1A0;
            static constexpr std::uintptr_t AIPopulationTracker = 0x1A8;
            static constexpr std::uintptr_t AIVehicleAvoidanceManager = 0x1B0;
            static constexpr std::uintptr_t AIControllers = 0x1B8;
            static constexpr std::uintptr_t PathFollowingComponents = 0x1C8;
            static constexpr std::uintptr_t RegisteredAISpawners = 0x1D8;
            static constexpr std::uintptr_t bNavigationReady = 0x1E8;
            static constexpr std::uintptr_t bUnlimitedAIHealth = 0x1E8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"PerceptionManager", 0x198, "ObjectProperty"},
            {"AIDropper", 0x1A0, "ObjectProperty"},
            {"AIPopulationTracker", 0x1A8, "ObjectProperty"},
            {"AIVehicleAvoidanceManager", 0x1B0, "ObjectProperty"},
            {"AIControllers", 0x1B8, "ArrayProperty"},
            {"PathFollowingComponents", 0x1C8, "ArrayProperty"},
            {"RegisteredAISpawners", 0x1D8, "ArrayProperty"},
            {"bNavigationReady", 0x1E8, "BoolProperty"},
            {"bUnlimitedAIHealth", 0x1E8, "BoolProperty"},
        }};
    };

    struct AthenaAIVehicleAvoidanceManager
    {
        static constexpr std::string_view Name = "AthenaAIVehicleAvoidanceManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t TimeToRefreshTree = 0x84;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TimeToRefreshTree", 0x84, "FloatProperty"},
        }};
    };

    struct AthenaAvoidanceManager
    {
        static constexpr std::string_view Name = "AthenaAvoidanceManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AvoidanceManager";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultTimeToLive = 0x30;
            static constexpr std::uintptr_t LockTimeAfterAvoid = 0x34;
            static constexpr std::uintptr_t LockTimeAfterClean = 0x38;
            static constexpr std::uintptr_t DeltaTimeToPredict = 0x3C;
            static constexpr std::uintptr_t ArtificialRadiusExpansion = 0x40;
            static constexpr std::uintptr_t TestHeightDifference = 0x44;
            static constexpr std::uintptr_t HeightCheckMargin = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"DefaultTimeToLive", 0x30, "FloatProperty"},
            {"LockTimeAfterAvoid", 0x34, "FloatProperty"},
            {"LockTimeAfterClean", 0x38, "FloatProperty"},
            {"DeltaTimeToPredict", 0x3C, "FloatProperty"},
            {"ArtificialRadiusExpansion", 0x40, "FloatProperty"},
            {"TestHeightDifference", 0x44, "FloatProperty"},
            {"HeightCheckMargin", 0x48, "FloatProperty"},
        }};
    };

    struct AthenaBehaviorTreeComponent
    {
        static constexpr std::string_view Name = "AthenaBehaviorTreeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortBehaviorTreeComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeInstances = 0x138;
            static constexpr std::uintptr_t DefaultBehaviorTreeAsset = 0x210;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NodeInstances", 0x138, "ArrayProperty"},
            {"DefaultBehaviorTreeAsset", 0x210, "ObjectProperty"},
        }};
    };

    struct AthenaCreativeRift
    {
        static constexpr std::string_view Name = "AthenaCreativeRift";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingRift";
        struct Offsets
        {
            static constexpr std::uintptr_t DespawnSphereComponent = 0xAD0;
            static constexpr std::uintptr_t ParentTrap = 0xAD8;
            static constexpr std::uintptr_t OverrideEncounterSettings = 0xAE0;
            static constexpr std::uintptr_t CachedAIMinigameComponent = 0xBC8;
            static constexpr std::uintptr_t OnBuildingRiftLoadedSettings = 0xBD0;
            static constexpr std::uintptr_t bHasLoadedSettings = 0xBE0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"DespawnSphereComponent", 0xAD0, "ObjectProperty"},
            {"ParentTrap", 0xAD8, "ObjectProperty"},
            {"OverrideEncounterSettings", 0xAE0, "StructProperty"},
            {"CachedAIMinigameComponent", 0xBC8, "ObjectProperty"},
            {"OnBuildingRiftLoadedSettings", 0xBD0, "MulticastInlineDelegateProperty"},
            {"bHasLoadedSettings", 0xBE0, "BoolProperty"},
        }};
    };

    struct AthenaGeneratedClamberNavLinksProxy
    {
        static constexpr std::string_view Name = "AthenaGeneratedClamberNavLinksProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortClamberLinkGlobalProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t LinkProxyId = 0x30;
            static constexpr std::uintptr_t Owner = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LinkProxyId", 0x30, "StructProperty"},
            {"Owner", 0x38, "ObjectProperty"},
        }};
    };

    struct AthenaGeneratedJumpDownNavLinksProxy
    {
        static constexpr std::string_view Name = "AthenaGeneratedJumpDownNavLinksProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGeneratedJumpVerticalNavLinksProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t LinkProxyId = 0x30;
            static constexpr std::uintptr_t Owner = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LinkProxyId", 0x30, "StructProperty"},
            {"Owner", 0x38, "ObjectProperty"},
        }};
    };

    struct AthenaGeneratedJumpUpNavLinksProxy
    {
        static constexpr std::string_view Name = "AthenaGeneratedJumpUpNavLinksProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGeneratedJumpVerticalNavLinksProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t LinkProxyId = 0x30;
            static constexpr std::uintptr_t Owner = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LinkProxyId", 0x30, "StructProperty"},
            {"Owner", 0x38, "ObjectProperty"},
        }};
    };

    struct AthenaNavInvokerBox
    {
        static constexpr std::string_view Name = "AthenaNavInvokerBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t GenerationRange = 0x278;
            static constexpr std::uintptr_t InvokerComp = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GenerationRange", 0x278, "FloatProperty"},
            {"InvokerComp", 0x280, "ObjectProperty"},
        }};
    };

    struct AthenaNavMesh
    {
        static constexpr std::string_view Name = "AthenaNavMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavMesh";
        struct Offsets
        {
            static constexpr std::uintptr_t HotSpotPathfindingMaxSearchNodes = 0x638;
            static constexpr std::uintptr_t ShallowWaterTraceStartOffsetZ = 0x63C;
            static constexpr std::uintptr_t ShallowWaterTraceEndOffsetZ = 0x640;
            static constexpr std::uintptr_t MaximumTilesToProcessForWaterPerFrame = 0x644;
            static constexpr std::uintptr_t bSuspendNavmeshWhenNoAIUsersAlive = 0x648;
            static constexpr std::uintptr_t SerializedDirtyAreas = 0x650;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"HotSpotPathfindingMaxSearchNodes", 0x638, "IntProperty"},
            {"ShallowWaterTraceStartOffsetZ", 0x63C, "FloatProperty"},
            {"ShallowWaterTraceEndOffsetZ", 0x640, "FloatProperty"},
            {"MaximumTilesToProcessForWaterPerFrame", 0x644, "IntProperty"},
            {"bSuspendNavmeshWhenNoAIUsersAlive", 0x648, "BoolProperty"},
            {"SerializedDirtyAreas", 0x650, "ArrayProperty"},
        }};
    };

    struct AthenaNavMeshRenderingComponent
    {
        static constexpr std::string_view Name = "AthenaNavMeshRenderingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavMeshRenderingComponent";
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

    struct AthenaNavMesh_BCLargeAndTall
    {
        static constexpr std::string_view Name = "AthenaNavMesh_BCLargeAndTall";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaNavMesh";
        struct Offsets
        {
            static constexpr std::uintptr_t HotSpotPathfindingMaxSearchNodes = 0x638;
            static constexpr std::uintptr_t ShallowWaterTraceStartOffsetZ = 0x63C;
            static constexpr std::uintptr_t ShallowWaterTraceEndOffsetZ = 0x640;
            static constexpr std::uintptr_t MaximumTilesToProcessForWaterPerFrame = 0x644;
            static constexpr std::uintptr_t bSuspendNavmeshWhenNoAIUsersAlive = 0x648;
            static constexpr std::uintptr_t SerializedDirtyAreas = 0x650;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"HotSpotPathfindingMaxSearchNodes", 0x638, "IntProperty"},
            {"ShallowWaterTraceStartOffsetZ", 0x63C, "FloatProperty"},
            {"ShallowWaterTraceEndOffsetZ", 0x640, "FloatProperty"},
            {"MaximumTilesToProcessForWaterPerFrame", 0x644, "IntProperty"},
            {"bSuspendNavmeshWhenNoAIUsersAlive", 0x648, "BoolProperty"},
            {"SerializedDirtyAreas", 0x650, "ArrayProperty"},
        }};
    };

    struct AthenaNavMesh_BCMedium
    {
        static constexpr std::string_view Name = "AthenaNavMesh_BCMedium";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaNavMesh";
        struct Offsets
        {
            static constexpr std::uintptr_t HotSpotPathfindingMaxSearchNodes = 0x638;
            static constexpr std::uintptr_t ShallowWaterTraceStartOffsetZ = 0x63C;
            static constexpr std::uintptr_t ShallowWaterTraceEndOffsetZ = 0x640;
            static constexpr std::uintptr_t MaximumTilesToProcessForWaterPerFrame = 0x644;
            static constexpr std::uintptr_t bSuspendNavmeshWhenNoAIUsersAlive = 0x648;
            static constexpr std::uintptr_t SerializedDirtyAreas = 0x650;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"HotSpotPathfindingMaxSearchNodes", 0x638, "IntProperty"},
            {"ShallowWaterTraceStartOffsetZ", 0x63C, "FloatProperty"},
            {"ShallowWaterTraceEndOffsetZ", 0x640, "FloatProperty"},
            {"MaximumTilesToProcessForWaterPerFrame", 0x644, "IntProperty"},
            {"bSuspendNavmeshWhenNoAIUsersAlive", 0x648, "BoolProperty"},
            {"SerializedDirtyAreas", 0x650, "ArrayProperty"},
        }};
    };

    struct AthenaNavMesh_Big
    {
        static constexpr std::string_view Name = "AthenaNavMesh_Big";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaNavMesh";
        struct Offsets
        {
            static constexpr std::uintptr_t MaximumDistanceToWaterForShallow = 0x6F8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MaximumDistanceToWaterForShallow", 0x6F8, "FloatProperty"},
        }};
    };

    struct AthenaNavMesh_HMedium
    {
        static constexpr std::string_view Name = "AthenaNavMesh_HMedium";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaNavMesh";
        struct Offsets
        {
            static constexpr std::uintptr_t HotSpotPathfindingMaxSearchNodes = 0x638;
            static constexpr std::uintptr_t ShallowWaterTraceStartOffsetZ = 0x63C;
            static constexpr std::uintptr_t ShallowWaterTraceEndOffsetZ = 0x640;
            static constexpr std::uintptr_t MaximumTilesToProcessForWaterPerFrame = 0x644;
            static constexpr std::uintptr_t bSuspendNavmeshWhenNoAIUsersAlive = 0x648;
            static constexpr std::uintptr_t SerializedDirtyAreas = 0x650;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"HotSpotPathfindingMaxSearchNodes", 0x638, "IntProperty"},
            {"ShallowWaterTraceStartOffsetZ", 0x63C, "FloatProperty"},
            {"ShallowWaterTraceEndOffsetZ", 0x640, "FloatProperty"},
            {"MaximumTilesToProcessForWaterPerFrame", 0x644, "IntProperty"},
            {"bSuspendNavmeshWhenNoAIUsersAlive", 0x648, "BoolProperty"},
            {"SerializedDirtyAreas", 0x650, "ArrayProperty"},
        }};
    };

    struct AthenaNavMesh_Large
    {
        static constexpr std::string_view Name = "AthenaNavMesh_Large";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaNavMesh";
        struct Offsets
        {
            static constexpr std::uintptr_t HotSpotPathfindingMaxSearchNodes = 0x638;
            static constexpr std::uintptr_t ShallowWaterTraceStartOffsetZ = 0x63C;
            static constexpr std::uintptr_t ShallowWaterTraceEndOffsetZ = 0x640;
            static constexpr std::uintptr_t MaximumTilesToProcessForWaterPerFrame = 0x644;
            static constexpr std::uintptr_t bSuspendNavmeshWhenNoAIUsersAlive = 0x648;
            static constexpr std::uintptr_t SerializedDirtyAreas = 0x650;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"HotSpotPathfindingMaxSearchNodes", 0x638, "IntProperty"},
            {"ShallowWaterTraceStartOffsetZ", 0x63C, "FloatProperty"},
            {"ShallowWaterTraceEndOffsetZ", 0x640, "FloatProperty"},
            {"MaximumTilesToProcessForWaterPerFrame", 0x644, "IntProperty"},
            {"bSuspendNavmeshWhenNoAIUsersAlive", 0x648, "BoolProperty"},
            {"SerializedDirtyAreas", 0x650, "ArrayProperty"},
        }};
    };

    struct AthenaNavMesh_Medium
    {
        static constexpr std::string_view Name = "AthenaNavMesh_Medium";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaNavMesh";
        struct Offsets
        {
            static constexpr std::uintptr_t HotSpotPathfindingMaxSearchNodes = 0x638;
            static constexpr std::uintptr_t ShallowWaterTraceStartOffsetZ = 0x63C;
            static constexpr std::uintptr_t ShallowWaterTraceEndOffsetZ = 0x640;
            static constexpr std::uintptr_t MaximumTilesToProcessForWaterPerFrame = 0x644;
            static constexpr std::uintptr_t bSuspendNavmeshWhenNoAIUsersAlive = 0x648;
            static constexpr std::uintptr_t SerializedDirtyAreas = 0x650;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"HotSpotPathfindingMaxSearchNodes", 0x638, "IntProperty"},
            {"ShallowWaterTraceStartOffsetZ", 0x63C, "FloatProperty"},
            {"ShallowWaterTraceEndOffsetZ", 0x640, "FloatProperty"},
            {"MaximumTilesToProcessForWaterPerFrame", 0x644, "IntProperty"},
            {"bSuspendNavmeshWhenNoAIUsersAlive", 0x648, "BoolProperty"},
            {"SerializedDirtyAreas", 0x650, "ArrayProperty"},
        }};
    };

    struct AthenaNavOctTreeInclusionBounds
    {
        static constexpr std::string_view Name = "AthenaNavOctTreeInclusionBounds";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Volume";
        struct Offsets
        {
            static constexpr std::uintptr_t BrushType = 0x278;
            static constexpr std::uintptr_t BrushColor = 0x27C;
            static constexpr std::uintptr_t PolyFlags = 0x280;
            static constexpr std::uintptr_t bColored = 0x284;
            static constexpr std::uintptr_t bNotForClientOrServer = 0x284;
            static constexpr std::uintptr_t bPlaceableFromClassBrowser = 0x284;
            static constexpr std::uintptr_t bSolidWhenSelected = 0x284;
            static constexpr std::uintptr_t Brush = 0x288;
            static constexpr std::uintptr_t BrushComponent = 0x290;
            static constexpr std::uintptr_t bInManipulation = 0x298;
            static constexpr std::uintptr_t SavedSelections = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"BrushType", 0x278, "ByteProperty"},
            {"BrushColor", 0x27C, "StructProperty"},
            {"PolyFlags", 0x280, "IntProperty"},
            {"bColored", 0x284, "BoolProperty"},
            {"bNotForClientOrServer", 0x284, "BoolProperty"},
            {"bPlaceableFromClassBrowser", 0x284, "BoolProperty"},
            {"bSolidWhenSelected", 0x284, "BoolProperty"},
            {"Brush", 0x288, "ObjectProperty"},
            {"BrushComponent", 0x290, "ObjectProperty"},
            {"bInManipulation", 0x298, "BoolProperty"},
            {"SavedSelections", 0x2A0, "ArrayProperty"},
        }};
    };

    struct AthenaNavPresenceDetectorComponent
    {
        static constexpr std::string_view Name = "AthenaNavPresenceDetectorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bHasValidNavMesh = 0xC0;
            static constexpr std::uintptr_t SelectionMode = 0xC4;
            static constexpr std::uintptr_t NavMeshNameToUse = 0xC8;
            static constexpr std::uintptr_t NavAgentProperties = 0xD0;
            static constexpr std::uintptr_t QueryExtentOverride = 0x100;
            static constexpr std::uintptr_t bDisableUponNavMeshPresence = 0x118;
            static constexpr std::uintptr_t bInitializeOnRegister = 0x118;
            static constexpr std::uintptr_t bOverrideQueryExtent = 0x118;
            static constexpr std::uintptr_t NavDatasInfo = 0x120;
            static constexpr std::uintptr_t NavMeshPresenceDetected = 0x130;
            static constexpr std::uintptr_t NavMeshPresenceUndetected = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"bHasValidNavMesh", 0xC0, "BoolProperty"},
            {"SelectionMode", 0xC4, "EnumProperty"},
            {"NavMeshNameToUse", 0xC8, "NameProperty"},
            {"NavAgentProperties", 0xD0, "StructProperty"},
            {"QueryExtentOverride", 0x100, "StructProperty"},
            {"bDisableUponNavMeshPresence", 0x118, "BoolProperty"},
            {"bInitializeOnRegister", 0x118, "BoolProperty"},
            {"bOverrideQueryExtent", 0x118, "BoolProperty"},
            {"NavDatasInfo", 0x120, "ArrayProperty"},
            {"NavMeshPresenceDetected", 0x130, "MulticastInlineDelegateProperty"},
            {"NavMeshPresenceUndetected", 0x140, "MulticastInlineDelegateProperty"},
        }};
    };

    struct AthenaNavRelevantActorInterface
    {
        static constexpr std::string_view Name = "AthenaNavRelevantActorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AthenaNavSystem
    {
        static constexpr std::string_view Name = "AthenaNavSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavSystem";
        struct Offsets
        {
            static constexpr std::uintptr_t NavDataSetVariants = 0x15D0;
            static constexpr std::uintptr_t bMarkBuildingFoundationDirty = 0x15E0;
            static constexpr std::uintptr_t bSupportRuntimeNavmeshDisabling = 0x15E0;
            static constexpr std::uintptr_t bUseNavDataSetVariants = 0x15E0;
            static constexpr std::uintptr_t NavGenerationObserverCheckInterval = 0x15E4;
            static constexpr std::uintptr_t bAllowStaticNavigationInvokerBoxes = 0x1608;
            static constexpr std::uintptr_t BoxInvokers = 0x1610;
            static constexpr std::uintptr_t NavOctTreeInclusionBounds = 0x16F0;
            static constexpr std::uintptr_t NavMeshSupportOverride = 0x170C;
            static constexpr std::uintptr_t ExperienceSupportedAgents = 0x1710;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"NavDataSetVariants", 0x15D0, "ArrayProperty"},
            {"bMarkBuildingFoundationDirty", 0x15E0, "BoolProperty"},
            {"bSupportRuntimeNavmeshDisabling", 0x15E0, "BoolProperty"},
            {"bUseNavDataSetVariants", 0x15E0, "BoolProperty"},
            {"NavGenerationObserverCheckInterval", 0x15E4, "FloatProperty"},
            {"bAllowStaticNavigationInvokerBoxes", 0x1608, "BoolProperty"},
            {"BoxInvokers", 0x1610, "ArrayProperty"},
            {"NavOctTreeInclusionBounds", 0x16F0, "ArrayProperty"},
            {"NavMeshSupportOverride", 0x170C, "EnumProperty"},
            {"ExperienceSupportedAgents", 0x1710, "ArrayProperty"},
        }};
    };

    struct AthenaNavSystemConfig
    {
        static constexpr std::string_view Name = "AthenaNavSystemConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavSystemConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t NavDataSetVariants = 0x60;
            static constexpr std::uintptr_t bAllowStaticNavigationInvokerBoxes = 0x70;
            static constexpr std::uintptr_t bDiscardNavDataFromSublevels = 0x70;
            static constexpr std::uintptr_t bLazyOctree = 0x70;
            static constexpr std::uintptr_t bPrioritizeNavigationAroundSpawners = 0x70;
            static constexpr std::uintptr_t bResetDirtyAreasOnInitialBuildingRelease = 0x70;
            static constexpr std::uintptr_t bUseNavDataSetVariants = 0x70;
            static constexpr std::uintptr_t bUseNavOctTreeInclusionBounds = 0x70;
            static constexpr std::uintptr_t bUseNavigationInvokers = 0x70;
            static constexpr std::uintptr_t bConfigureDirtyAreaWarningSizeThreshold = 0x71;
            static constexpr std::uintptr_t bNavOctreeUnlockedByDefaultWhenNotPreloadingNavData = 0x71;
            static constexpr std::uintptr_t bShouldDiscardMainLevelNavDataAndBound = 0x71;
            static constexpr std::uintptr_t bSupportRuntimeNavmeshDisabling = 0x71;
            static constexpr std::uintptr_t bUseDirtyAreaFilterFunction = 0x71;
            static constexpr std::uintptr_t InvokersMaximumDistanceFromSeed = 0x78;
            static constexpr std::uintptr_t DirtyAreaWarningSizeThreshold = 0x80;
            static constexpr std::uintptr_t OverriddenSupportedAgentsByReleaseVersion = 0x88;
            static constexpr std::uintptr_t bSuspendNavmeshWhenNoPossibleUsers = 0x98;
            static constexpr std::uintptr_t bConfigureNavigationFromWorldSettings = 0x99;
            static constexpr std::uintptr_t bRemoveNavmeshWhenNotUsedInExperience = 0x9A;
            static constexpr std::uintptr_t AllowedNavBoundsUniqueActorTags = 0xA0;
            static constexpr std::uintptr_t EnableAutoNavConfigForAgent = 0xB0;
            static constexpr std::uintptr_t AgentsSupportingAutoNavMeshDetection = 0xB4;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"NavDataSetVariants", 0x60, "ArrayProperty"},
            {"bAllowStaticNavigationInvokerBoxes", 0x70, "BoolProperty"},
            {"bDiscardNavDataFromSublevels", 0x70, "BoolProperty"},
            {"bLazyOctree", 0x70, "BoolProperty"},
            {"bPrioritizeNavigationAroundSpawners", 0x70, "BoolProperty"},
            {"bResetDirtyAreasOnInitialBuildingRelease", 0x70, "BoolProperty"},
            {"bUseNavDataSetVariants", 0x70, "BoolProperty"},
            {"bUseNavOctTreeInclusionBounds", 0x70, "BoolProperty"},
            {"bUseNavigationInvokers", 0x70, "BoolProperty"},
            {"bConfigureDirtyAreaWarningSizeThreshold", 0x71, "BoolProperty"},
            {"bNavOctreeUnlockedByDefaultWhenNotPreloadingNavData", 0x71, "BoolProperty"},
            {"bShouldDiscardMainLevelNavDataAndBound", 0x71, "BoolProperty"},
            {"bSupportRuntimeNavmeshDisabling", 0x71, "BoolProperty"},
            {"bUseDirtyAreaFilterFunction", 0x71, "BoolProperty"},
            {"InvokersMaximumDistanceFromSeed", 0x78, "DoubleProperty"},
            {"DirtyAreaWarningSizeThreshold", 0x80, "FloatProperty"},
            {"OverriddenSupportedAgentsByReleaseVersion", 0x88, "ArrayProperty"},
            {"bSuspendNavmeshWhenNoPossibleUsers", 0x98, "BoolProperty"},
            {"bConfigureNavigationFromWorldSettings", 0x99, "BoolProperty"},
            {"bRemoveNavmeshWhenNotUsedInExperience", 0x9A, "BoolProperty"},
            {"AllowedNavBoundsUniqueActorTags", 0xA0, "ArrayProperty"},
            {"EnableAutoNavConfigForAgent", 0xB0, "StructProperty"},
            {"AgentsSupportingAutoNavMeshDetection", 0xB4, "StructProperty"},
        }};
    };

    struct AthenaNavSystemConfigOverride
    {
        static constexpr std::string_view Name = "AthenaNavSystemConfigOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavSystemConfigOverride";
        struct Offsets
        {
            static constexpr std::uintptr_t NavigationSystemConfig = 0x278;
            static constexpr std::uintptr_t OverridePolicy = 0x280;
            static constexpr std::uintptr_t bLoadOnClient = 0x281;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NavigationSystemConfig", 0x278, "ObjectProperty"},
            {"OverridePolicy", 0x280, "EnumProperty"},
            {"bLoadOnClient", 0x281, "BoolProperty"},
        }};
    };

    struct AthenaPathFollowingComponent
    {
        static constexpr std::string_view Name = "AthenaPathFollowingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPathFollowingComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t FocusDirectionMethod = 0x4B8;
            static constexpr std::uintptr_t OffsetPathFromCornersDistance = 0x4BC;
            static constexpr std::uintptr_t AthenaAIController = 0x4D8;
            static constexpr std::uintptr_t MoveFocusZOffset = 0x508;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FocusDirectionMethod", 0x4B8, "EnumProperty"},
            {"OffsetPathFromCornersDistance", 0x4BC, "FloatProperty"},
            {"AthenaAIController", 0x4D8, "ObjectProperty"},
            {"MoveFocusZOffset", 0x508, "FloatProperty"},
        }};
    };

    struct AthenaPhysicsAIPerceptionStimuliSourceComponent
    {
        static constexpr std::string_view Name = "AthenaPhysicsAIPerceptionStimuliSourceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaAIPerceptionStimuliSourceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsConsideredAsThreateningObjectForBots = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bIsConsideredAsThreateningObjectForBots", 0xD8, "BoolProperty"},
        }};
    };

    struct AthenaTrapAIPerceptionStimuliSourceComponent
    {
        static constexpr std::string_view Name = "AthenaTrapAIPerceptionStimuliSourceComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIPerceptionStimuliSourceComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TrapDiscoverabilityMap = 0xD8;
            static constexpr std::uintptr_t bEnablePerceptionSystemOnTrap = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TrapDiscoverabilityMap", 0xD8, "MapProperty"},
            {"bEnablePerceptionSystemOnTrap", 0xE8, "BoolProperty"},
        }};
    };

    struct BCMediumNavHeightMapData
    {
        static constexpr std::string_view Name = "BCMediumNavHeightMapData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavHeightMapData";
        struct Offsets
        {
            static constexpr std::uintptr_t OriginOffset = 0x438;
            static constexpr std::uintptr_t bDoFullyAsyncNavDataGathering = 0x450;
            static constexpr std::uintptr_t bFixedTilePoolSize = 0x450;
            static constexpr std::uintptr_t bIsWorldPartitioned = 0x450;
            static constexpr std::uintptr_t TilePoolSize = 0x454;
            static constexpr std::uintptr_t TileSizeUU = 0x458;
            static constexpr std::uintptr_t NavMeshResolutionParams = 0x45C;
            static constexpr std::uintptr_t AgentRadius = 0x480;
            static constexpr std::uintptr_t AgentHeight = 0x484;
            static constexpr std::uintptr_t DrawOffset = 0x488;
            static constexpr std::uintptr_t bDrawCells = 0x48C;
            static constexpr std::uintptr_t bDrawTileBounds = 0x48C;
            static constexpr std::uintptr_t bDrawTileEdges = 0x48C;
            static constexpr std::uintptr_t bDrawTileLabels = 0x48C;
            static constexpr std::uintptr_t DefaultMaxSearchNodes = 0x490;
            static constexpr std::uintptr_t HeuristicScale = 0x494;
            static constexpr std::uintptr_t TimeSliceLongDurationDebug = 0x498;
            static constexpr std::uintptr_t bUseExtraTopCellWhenMarkingAreas = 0x4A4;
            static constexpr std::uintptr_t bUseVirtualGeometryFilteringAndDirtying = 0x4A4;
            static constexpr std::uintptr_t InvokerTilePriorityBumpDistanceThresholdInTileUnits = 0x4A8;
            static constexpr std::uintptr_t InvokerTilePriorityBumpIncrease = 0x4AC;
            static constexpr std::uintptr_t MaxSimultaneousTileGenerationJobsCount = 0x4B0;
            static constexpr std::uintptr_t TileGenerationDebug = 0x4B4;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"OriginOffset", 0x438, "StructProperty"},
            {"bDoFullyAsyncNavDataGathering", 0x450, "BoolProperty"},
            {"bFixedTilePoolSize", 0x450, "BoolProperty"},
            {"bIsWorldPartitioned", 0x450, "BoolProperty"},
            {"TilePoolSize", 0x454, "IntProperty"},
            {"TileSizeUU", 0x458, "FloatProperty"},
            {"NavMeshResolutionParams", 0x45C, "StructProperty"},
            {"AgentRadius", 0x480, "FloatProperty"},
            {"AgentHeight", 0x484, "FloatProperty"},
            {"DrawOffset", 0x488, "FloatProperty"},
            {"bDrawCells", 0x48C, "BoolProperty"},
            {"bDrawTileBounds", 0x48C, "BoolProperty"},
            {"bDrawTileEdges", 0x48C, "BoolProperty"},
            {"bDrawTileLabels", 0x48C, "BoolProperty"},
            {"DefaultMaxSearchNodes", 0x490, "UInt32Property"},
            {"HeuristicScale", 0x494, "FloatProperty"},
            {"TimeSliceLongDurationDebug", 0x498, "DoubleProperty"},
            {"bUseExtraTopCellWhenMarkingAreas", 0x4A4, "BoolProperty"},
            {"bUseVirtualGeometryFilteringAndDirtying", 0x4A4, "BoolProperty"},
            {"InvokerTilePriorityBumpDistanceThresholdInTileUnits", 0x4A8, "UInt32Property"},
            {"InvokerTilePriorityBumpIncrease", 0x4AC, "ByteProperty"},
            {"MaxSimultaneousTileGenerationJobsCount", 0x4B0, "IntProperty"},
            {"TileGenerationDebug", 0x4B4, "StructProperty"},
        }};
    };

    struct BCMultiNavFlying
    {
        static constexpr std::string_view Name = "BCMultiNavFlying";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MultiNavigationNavmesh";
        struct Offsets
        {
            static constexpr std::uintptr_t SubNavmeshAgentNames = 0x438;
            static constexpr std::uintptr_t TileSizeUU = 0x448;
            static constexpr std::uintptr_t TileMap = 0x450;
            static constexpr std::uintptr_t TransitionSampleStep = 0x460;
            static constexpr std::uintptr_t bRequireLineOfSight = 0x464;
            static constexpr std::uintptr_t MaxPairZGap = 0x468;
            static constexpr std::uintptr_t MinTransitionSpacingUU = 0x46C;
            static constexpr std::uintptr_t SubMeshCostScales = 0x470;
            static constexpr std::uintptr_t SurfaceStandToleranceUU = 0x480;
            static constexpr std::uintptr_t bDrawTransitions = 0x484;
            static constexpr std::uintptr_t bDrawSubNavmeshes = 0x485;
            static constexpr std::uintptr_t SubNavmeshes = 0x498;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"SubNavmeshAgentNames", 0x438, "ArrayProperty"},
            {"TileSizeUU", 0x448, "FloatProperty"},
            {"TileMap", 0x450, "MapProperty"},
            {"TransitionSampleStep", 0x460, "FloatProperty"},
            {"bRequireLineOfSight", 0x464, "BoolProperty"},
            {"MaxPairZGap", 0x468, "FloatProperty"},
            {"MinTransitionSpacingUU", 0x46C, "FloatProperty"},
            {"SubMeshCostScales", 0x470, "MapProperty"},
            {"SurfaceStandToleranceUU", 0x480, "FloatProperty"},
            {"bDrawTransitions", 0x484, "BoolProperty"},
            {"bDrawSubNavmeshes", 0x485, "BoolProperty"},
            {"SubNavmeshes", 0x498, "ArrayProperty"},
        }};
    };

    struct BehaviorInjectionAIService
    {
        static constexpr std::string_view Name = "BehaviorInjectionAIService";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaAIService";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemBehaviorsRegistry = 0x98;
            static constexpr std::uintptr_t VehicleBehaviorsRegistry = 0xA0;
            static constexpr std::uintptr_t PawnTagsBehaviorsRegistry = 0xA8;
            static constexpr std::uintptr_t InjectionSupportingBehaviors = 0xB0;
            static constexpr std::uintptr_t RuntimeInjectionSupportingBehaviors = 0xC0;
            static constexpr std::uintptr_t InjectionBlackboard = 0xD0;
            static constexpr std::uintptr_t BehaviorToRuntimeBehavior = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ItemBehaviorsRegistry", 0x98, "ObjectProperty"},
            {"VehicleBehaviorsRegistry", 0xA0, "ObjectProperty"},
            {"PawnTagsBehaviorsRegistry", 0xA8, "ObjectProperty"},
            {"InjectionSupportingBehaviors", 0xB0, "ArrayProperty"},
            {"RuntimeInjectionSupportingBehaviors", 0xC0, "ArrayProperty"},
            {"InjectionBlackboard", 0xD0, "ObjectProperty"},
            {"BehaviorToRuntimeBehavior", 0xD8, "MapProperty"},
        }};
    };

    struct BlackboardKeyAccessValidator
    {
        static constexpr std::string_view Name = "BlackboardKeyAccessValidator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct BuildingActorHotSpotConfig
    {
        static constexpr std::string_view Name = "BuildingActorHotSpotConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DirectionSetup = 0x28;
            static constexpr std::uintptr_t DefaultSetup = 0x118;
            static constexpr std::uintptr_t ExtraTypeConfig = 0x140;
            static constexpr std::uintptr_t bHasDirectionalSetup = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DirectionSetup", 0x28, "StructProperty"},
            {"DefaultSetup", 0x118, "StructProperty"},
            {"ExtraTypeConfig", 0x140, "ObjectProperty"},
            {"bHasDirectionalSetup", 0x148, "BoolProperty"},
        }};
    };

    struct BuildingActorHotSpotRenderingComponent
    {
        static constexpr std::string_view Name = "BuildingActorHotSpotRenderingComponent";
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

    struct CacheSafeZoneLocation
    {
        static constexpr std::string_view Name = "CacheSafeZoneLocation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct CombatTokenInjectionAIService
    {
        static constexpr std::string_view Name = "CombatTokenInjectionAIService";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaAIService";
        struct Offsets
        {
            static constexpr std::uintptr_t InjectableCombatTokenRegistry = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InjectableCombatTokenRegistry", 0x98, "ObjectProperty"},
        }};
    };

    struct DespawnExpiredPawnComponent
    {
        static constexpr std::string_view Name = "DespawnExpiredPawnComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
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

    struct EdgeNavLinks
    {
        static constexpr std::string_view Name = "EdgeNavLinks";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavLinkProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t DistanceBetweenLinks = 0x2C8;
            static constexpr std::uintptr_t Start = 0x2D0;
            static constexpr std::uintptr_t End = 0x2E8;
            static constexpr std::uintptr_t SnapRadius = 0x300;
            static constexpr std::uintptr_t SnapHeight = 0x304;
            static constexpr std::uintptr_t LinkProjectionHeight = 0x308;
            static constexpr std::uintptr_t RightLinkForwardOffset = 0x30C;
            static constexpr std::uintptr_t CollisionChannel = 0x310;
            static constexpr std::uintptr_t bManualAdjustment = 0x314;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"DistanceBetweenLinks", 0x2C8, "FloatProperty"},
            {"Start", 0x2D0, "StructProperty"},
            {"End", 0x2E8, "StructProperty"},
            {"SnapRadius", 0x300, "FloatProperty"},
            {"SnapHeight", 0x304, "FloatProperty"},
            {"LinkProjectionHeight", 0x308, "FloatProperty"},
            {"RightLinkForwardOffset", 0x30C, "FloatProperty"},
            {"CollisionChannel", 0x310, "ByteProperty"},
            {"bManualAdjustment", 0x314, "BoolProperty"},
        }};
    };

    struct EdgeNavLinksRenderingComponent
    {
        static constexpr std::string_view Name = "EdgeNavLinksRenderingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavLinkRenderingComponent";
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

    struct EnvQueryTest_MultiNavPathfindingBatch
    {
        static constexpr std::string_view Name = "EnvQueryTest_MultiNavPathfindingBatch";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryTest_PathfindingBatch";
        struct Offsets
        {
            static constexpr std::uintptr_t bStraightLineAcrossHeightmap = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bStraightLineAcrossHeightmap", 0x2C0, "BoolProperty"},
        }};
    };

    struct FortAIAimingInterface
    {
        static constexpr std::string_view Name = "FortAIAimingInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAIAimingManagerInterface
    {
        static constexpr std::string_view Name = "FortAIAimingManagerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAIAssetLoader
    {
        static constexpr std::string_view Name = "FortAIAssetLoader";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PendingRequests = 0x28;
            static constexpr std::uintptr_t AssetsLoaded = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PendingRequests", 0x28, "ArrayProperty"},
            {"AssetsLoaded", 0x38, "ArrayProperty"},
        }};
    };

    struct FortAIAssignment
    {
        static constexpr std::string_view Name = "FortAIAssignment";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AssignmentIdentifier = 0x28;
            static constexpr std::uintptr_t AssignmentSettings = 0x58;
            static constexpr std::uintptr_t GoalProvider = 0x60;
            static constexpr std::uintptr_t GoalComponentsOnAssignment = 0x68;
            static constexpr std::uintptr_t Goals = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AssignmentIdentifier", 0x28, "StructProperty"},
            {"AssignmentSettings", 0x58, "ObjectProperty"},
            {"GoalProvider", 0x60, "ObjectProperty"},
            {"GoalComponentsOnAssignment", 0x68, "ArrayProperty"},
            {"Goals", 0x88, "ArrayProperty"},
        }};
    };

    struct FortAIAssignmentSettings
    {
        static constexpr std::string_view Name = "FortAIAssignmentSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t GoalSelectionQueryInfos = 0x28;
            static constexpr std::uintptr_t bGoalLocationsAlwaysKnown = 0x38;
            static constexpr std::uintptr_t bIsEnemyAssignment = 0x39;
            static constexpr std::uintptr_t RequiredTags = 0x40;
            static constexpr std::uintptr_t ProhibitedTags = 0x60;
            static constexpr std::uintptr_t MaxAIAllowedForAssignment = 0x80;
            static constexpr std::uintptr_t MaxAIAllowedPerGoal = 0x84;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"GoalSelectionQueryInfos", 0x28, "ArrayProperty"},
            {"bGoalLocationsAlwaysKnown", 0x38, "BoolProperty"},
            {"bIsEnemyAssignment", 0x39, "BoolProperty"},
            {"RequiredTags", 0x40, "StructProperty"},
            {"ProhibitedTags", 0x60, "StructProperty"},
            {"MaxAIAllowedForAssignment", 0x80, "FloatProperty"},
            {"MaxAIAllowedPerGoal", 0x84, "FloatProperty"},
        }};
    };

    struct FortAIBotDebugActor
    {
        static constexpr std::string_view Name = "FortAIBotDebugActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t BotDebugMiniMapIndicator = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BotDebugMiniMapIndicator", 0x278, "ObjectProperty"},
        }};
    };

    struct FortAIBotModifierBase
    {
        static constexpr std::string_view Name = "FortAIBotModifierBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIModifier";
        struct Offsets
        {
            static constexpr std::uintptr_t BotController = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BotController", 0x30, "ObjectProperty"},
        }};
    };

    struct FortAIBotPOIDebugActor
    {
        static constexpr std::string_view Name = "FortAIBotPOIDebugActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t BotPOIDebugMiniMapIndicator = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BotPOIDebugMiniMapIndicator", 0x278, "ObjectProperty"},
        }};
    };

    struct FortAIBotSmartObjectUserComponent
    {
        static constexpr std::string_view Name = "FortAIBotSmartObjectUserComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAISmartObjectUserComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseRunningEvaluationTickInterval = 0x1A0;
            static constexpr std::uintptr_t RunningEvaluationTickIntervalVariation = 0x1A4;
            static constexpr std::uintptr_t AnimConfigTable = 0x1A8;
            static constexpr std::uintptr_t MaximumSoftAbortTime = 0x1B0;
            static constexpr std::uintptr_t bHandleHolstering = 0x1D8;
            static constexpr std::uintptr_t AllowedTagsForWeaponUsageWhileUsingSO = 0x1E0;
            static constexpr std::uintptr_t bLoadingAnimConfigAssets = 0x200;
            static constexpr std::uintptr_t RunningQueryInternalData = 0x218;
            static constexpr std::uintptr_t ResultsPerEvaluationTag = 0x2D0;
            static constexpr std::uintptr_t SmartObjectsBannedList = 0x2E0;
            static constexpr std::uintptr_t GlobalDelayToDisableSmartObjectUsage = 0x2F0;
            static constexpr std::uintptr_t SmartObjectsMostRecentlyUsed = 0x2F8;
            static constexpr std::uintptr_t SmartObjectActivities = 0x308;
            static constexpr std::uintptr_t ActivitiesIDCount = 0x318;
            static constexpr std::uintptr_t ActiveCommandSOUsageData = 0x31C;
            static constexpr std::uintptr_t RunningSmartObjectComponent = 0x32C;
            static constexpr std::uintptr_t CachedLODSettingsManager = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"BaseRunningEvaluationTickInterval", 0x1A0, "FloatProperty"},
            {"RunningEvaluationTickIntervalVariation", 0x1A4, "FloatProperty"},
            {"AnimConfigTable", 0x1A8, "ObjectProperty"},
            {"MaximumSoftAbortTime", 0x1B0, "StructProperty"},
            {"bHandleHolstering", 0x1D8, "BoolProperty"},
            {"AllowedTagsForWeaponUsageWhileUsingSO", 0x1E0, "StructProperty"},
            {"bLoadingAnimConfigAssets", 0x200, "BoolProperty"},
            {"RunningQueryInternalData", 0x218, "StructProperty"},
            {"ResultsPerEvaluationTag", 0x2D0, "MapProperty"},
            {"SmartObjectsBannedList", 0x2E0, "ArrayProperty"},
            {"GlobalDelayToDisableSmartObjectUsage", 0x2F0, "FloatProperty"},
            {"SmartObjectsMostRecentlyUsed", 0x2F8, "ArrayProperty"},
            {"SmartObjectActivities", 0x308, "ArrayProperty"},
            {"ActivitiesIDCount", 0x318, "IntProperty"},
            {"ActiveCommandSOUsageData", 0x31C, "StructProperty"},
            {"RunningSmartObjectComponent", 0x32C, "WeakObjectProperty"},
            {"CachedLODSettingsManager", 0x338, "InterfaceProperty"},
        }};
    };

    struct FortAICloudVortex
    {
        static constexpr std::string_view Name = "FortAICloudVortex";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SplineMeshesBody = 0x278;
            static constexpr std::uintptr_t VortexBase = 0x288;
            static constexpr std::uintptr_t VortexRing = 0x290;
            static constexpr std::uintptr_t SplinePointsA = 0x298;
            static constexpr std::uintptr_t SplinePointsB = 0x2A8;
            static constexpr std::uintptr_t SplineTangentsA = 0x2B8;
            static constexpr std::uintptr_t SplineTangentsB = 0x2C8;
            static constexpr std::uintptr_t TimeRandomArray = 0x2D8;
            static constexpr std::uintptr_t TwistOverTime = 0x2E8;
            static constexpr std::uintptr_t NumberOfSplinePoints = 0x2EC;
            static constexpr std::uintptr_t bEnableVortexBaseParticleSystem = 0x2F0;
            static constexpr std::uintptr_t bEnableVortexRingParticleSystem = 0x2F1;
            static constexpr std::uintptr_t BasePSOffset = 0x2F8;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"SplineMeshesBody", 0x278, "ArrayProperty"},
            {"VortexBase", 0x288, "ObjectProperty"},
            {"VortexRing", 0x290, "ObjectProperty"},
            {"SplinePointsA", 0x298, "ArrayProperty"},
            {"SplinePointsB", 0x2A8, "ArrayProperty"},
            {"SplineTangentsA", 0x2B8, "ArrayProperty"},
            {"SplineTangentsB", 0x2C8, "ArrayProperty"},
            {"TimeRandomArray", 0x2D8, "ArrayProperty"},
            {"TwistOverTime", 0x2E8, "FloatProperty"},
            {"NumberOfSplinePoints", 0x2EC, "IntProperty"},
            {"bEnableVortexBaseParticleSystem", 0x2F0, "BoolProperty"},
            {"bEnableVortexRingParticleSystem", 0x2F1, "BoolProperty"},
            {"BasePSOffset", 0x2F8, "StructProperty"},
        }};
    };

    struct FortAICombatTokenConsumerComponent
    {
        static constexpr std::string_view Name = "FortAICombatTokenConsumerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TokenHoldMinDuration = 0xC8;
            static constexpr std::uintptr_t TokenHoldMaxDuration = 0xCC;
            static constexpr std::uintptr_t CurrentTokens = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TokenHoldMinDuration", 0xC8, "FloatProperty"},
            {"TokenHoldMaxDuration", 0xCC, "FloatProperty"},
            {"CurrentTokens", 0xD0, "ArrayProperty"},
        }};
    };

    struct FortAICombatTokenProviderComponent
    {
        static constexpr std::string_view Name = "FortAICombatTokenProviderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TokenTypes = 0xC0;
            static constexpr std::uintptr_t PositioningDatas = 0xD0;
            static constexpr std::uintptr_t bRunningTokenAssignment = 0xE0;
            static constexpr std::uintptr_t TokenRuntimeDatas = 0xF8;
            static constexpr std::uintptr_t PositioningRuntimeDatas = 0x108;
            static constexpr std::uintptr_t AssignTokensHandle = 0x118;
            static constexpr std::uintptr_t AssignTokensUpdateFrequency = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"TokenTypes", 0xC0, "ArrayProperty"},
            {"PositioningDatas", 0xD0, "ArrayProperty"},
            {"bRunningTokenAssignment", 0xE0, "BoolProperty"},
            {"TokenRuntimeDatas", 0xF8, "ArrayProperty"},
            {"PositioningRuntimeDatas", 0x108, "ArrayProperty"},
            {"AssignTokensHandle", 0x118, "StructProperty"},
            {"AssignTokensUpdateFrequency", 0x128, "StructProperty"},
        }};
    };

    struct FortAIComponent_Animation
    {
        static constexpr std::string_view Name = "FortAIComponent_Animation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ProxyTable = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ProxyTable", 0xC0, "ObjectProperty"},
        }};
    };

    struct FortAIComponent_Telemetry
    {
        static constexpr std::string_view Name = "FortAIComponent_Telemetry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PossessedPawn = 0xC0;
            static constexpr std::uintptr_t CachedAIController = 0xC8;
            static constexpr std::uintptr_t DeathInstigator = 0xD0;
            static constexpr std::uintptr_t GrabbedPickups = 0xD8;
            static constexpr std::uintptr_t DroppedPickups = 0xE8;
            static constexpr std::uintptr_t AnalyticRuntimeParameters = 0xF8;
            static constexpr std::uintptr_t TelemetryData = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PossessedPawn", 0xC0, "ObjectProperty"},
            {"CachedAIController", 0xC8, "ObjectProperty"},
            {"DeathInstigator", 0xD0, "ObjectProperty"},
            {"GrabbedPickups", 0xD8, "ArrayProperty"},
            {"DroppedPickups", 0xE8, "ArrayProperty"},
            {"AnalyticRuntimeParameters", 0xF8, "ObjectProperty"},
            {"TelemetryData", 0x100, "ArrayProperty"},
        }};
    };

    struct FortAIComponent_Voice
    {
        static constexpr std::string_view Name = "FortAIComponent_Voice";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t VoiceSoundBank = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VoiceSoundBank", 0xC0, "ObjectProperty"},
        }};
    };

    struct FortAIController
    {
        static constexpr std::string_view Name = "FortAIController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIController";
        struct Offsets
        {
            static constexpr std::uintptr_t bAlwaysNotifyBumpWall = 0x3C0;
            static constexpr std::uintptr_t bInstantRotation = 0x3C0;
            static constexpr std::uintptr_t bTurnTransitionsEnabled = 0x3C0;
            static constexpr std::uintptr_t bUsingNavMesh = 0x3C0;
            static constexpr std::uintptr_t bAllowHotspotAbilityLooping = 0x3C1;
            static constexpr std::uintptr_t bIgnoreAllActorsThatAreNotPawnsOrBuildings = 0x3C1;
            static constexpr std::uintptr_t FortPathFollowingComp = 0x3E0;
            static constexpr std::uintptr_t CurrentHotSpot = 0x3E8;
            static constexpr std::uintptr_t CachedAIRuntimeParametersComponent = 0x400;
            static constexpr std::uintptr_t GoalInfoUpdateRate = 0x410;
            static constexpr std::uintptr_t GoalVisibilityPersistanceTime = 0x414;
            static constexpr std::uintptr_t MyFortPawn = 0x4F0;
            static constexpr std::uintptr_t MyFortAIPawn = 0x4F8;
            static constexpr std::uintptr_t OnTeamSetDelegate = 0x500;
            static constexpr std::uintptr_t OnControllerComponentAttachedEvent = 0x510;
            static constexpr std::uintptr_t AIGoalComponent = 0x538;
            static constexpr std::uintptr_t PawnSleepComponent = 0x540;
            static constexpr std::uintptr_t OnPawnKilledEvent = 0x548;
            static constexpr std::uintptr_t OnPawnDownedEvent = 0x558;
            static constexpr std::uintptr_t BTAssetToRunOnPawnAISpawned = 0x588;
            static constexpr std::uintptr_t DescriptorTag = 0x590;
            static constexpr std::uintptr_t CachedAffiliationManager = 0x598;
            static constexpr std::uintptr_t PawnAIJumpComponentPtr = 0x5B0;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"bAlwaysNotifyBumpWall", 0x3C0, "BoolProperty"},
            {"bInstantRotation", 0x3C0, "BoolProperty"},
            {"bTurnTransitionsEnabled", 0x3C0, "BoolProperty"},
            {"bUsingNavMesh", 0x3C0, "BoolProperty"},
            {"bAllowHotspotAbilityLooping", 0x3C1, "BoolProperty"},
            {"bIgnoreAllActorsThatAreNotPawnsOrBuildings", 0x3C1, "BoolProperty"},
            {"FortPathFollowingComp", 0x3E0, "ObjectProperty"},
            {"CurrentHotSpot", 0x3E8, "StructProperty"},
            {"CachedAIRuntimeParametersComponent", 0x400, "ObjectProperty"},
            {"GoalInfoUpdateRate", 0x410, "FloatProperty"},
            {"GoalVisibilityPersistanceTime", 0x414, "FloatProperty"},
            {"MyFortPawn", 0x4F0, "ObjectProperty"},
            {"MyFortAIPawn", 0x4F8, "ObjectProperty"},
            {"OnTeamSetDelegate", 0x500, "MulticastInlineDelegateProperty"},
            {"OnControllerComponentAttachedEvent", 0x510, "MulticastInlineDelegateProperty"},
            {"AIGoalComponent", 0x538, "ObjectProperty"},
            {"PawnSleepComponent", 0x540, "ObjectProperty"},
            {"OnPawnKilledEvent", 0x548, "MulticastInlineDelegateProperty"},
            {"OnPawnDownedEvent", 0x558, "MulticastInlineDelegateProperty"},
            {"BTAssetToRunOnPawnAISpawned", 0x588, "ObjectProperty"},
            {"DescriptorTag", 0x590, "StructProperty"},
            {"CachedAffiliationManager", 0x598, "ObjectProperty"},
            {"PawnAIJumpComponentPtr", 0x5B0, "ObjectProperty"},
        }};
    };

    struct FortAIControllerPerksComponent
    {
        static constexpr std::string_view Name = "FortAIControllerPerksComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnAssignedPerksChangedEvent = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnAssignedPerksChangedEvent", 0xE0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortAICoverPositionProviderComponent
    {
        static constexpr std::string_view Name = "FortAICoverPositionProviderComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SupportedNavAgents = 0xC0;
            static constexpr std::uintptr_t IgnoreVisibilityCollisionTagQuery = 0xC8;
            static constexpr std::uintptr_t TileProcessingStartDelay = 0x110;
            static constexpr std::uintptr_t CoverPositionUpdateCooldown = 0x118;
            static constexpr std::uintptr_t CoverPositionUpdateTileDelay = 0x120;
            static constexpr std::uintptr_t CoverPositionsUpdatedDelegate = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SupportedNavAgents", 0xC0, "StructProperty"},
            {"IgnoreVisibilityCollisionTagQuery", 0xC8, "StructProperty"},
            {"TileProcessingStartDelay", 0x110, "DoubleProperty"},
            {"CoverPositionUpdateCooldown", 0x118, "DoubleProperty"},
            {"CoverPositionUpdateTileDelay", 0x120, "DoubleProperty"},
            {"CoverPositionsUpdatedDelegate", 0x128, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortAICustomTargetingComponent
    {
        static constexpr std::string_view Name = "FortAICustomTargetingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Configurations = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Configurations", 0xC0, "ArrayProperty"},
        }};
    };

    struct FortAIDataProvider_AIDirector
    {
        static constexpr std::string_view Name = "FortAIDataProvider_AIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t AIRelevantDistanceToPlayer = 0x28;
            static constexpr std::uintptr_t EncounterRelevantDistanceToPlayer = 0x2C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AIRelevantDistanceToPlayer", 0x28, "FloatProperty"},
            {"EncounterRelevantDistanceToPlayer", 0x2C, "FloatProperty"},
        }};
    };

    struct FortAIDataProvider_Ability
    {
        static constexpr std::string_view Name = "FortAIDataProvider_Ability";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t AbilityTag = 0x28;
            static constexpr std::uintptr_t AbilityBehaviorDistanceTag = 0x48;
            static constexpr std::uintptr_t BehaviorDistance = 0x68;
            static constexpr std::uintptr_t BehaviorDistanceAsRoundedInt = 0x6C;
            static constexpr std::uintptr_t BehaviorDistanceAsTruncatedInt = 0x70;
            static constexpr std::uintptr_t BehaviorDistanceAsBool = 0x74;
            static constexpr std::uintptr_t MaxTargetSelectionRange = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"AbilityTag", 0x28, "StructProperty"},
            {"AbilityBehaviorDistanceTag", 0x48, "StructProperty"},
            {"BehaviorDistance", 0x68, "FloatProperty"},
            {"BehaviorDistanceAsRoundedInt", 0x6C, "IntProperty"},
            {"BehaviorDistanceAsTruncatedInt", 0x70, "IntProperty"},
            {"BehaviorDistanceAsBool", 0x74, "BoolProperty"},
            {"MaxTargetSelectionRange", 0x78, "FloatProperty"},
        }};
    };

    struct FortAIDataProvider_FloatCurveOverGameDifficulty
    {
        static constexpr std::string_view Name = "FortAIDataProvider_FloatCurveOverGameDifficulty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ScalableFloat = 0x28;
            static constexpr std::uintptr_t FloatValue = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ScalableFloat", 0x28, "StructProperty"},
            {"FloatValue", 0x50, "FloatProperty"},
        }};
    };

    struct FortAIDataProvider_GoalProviderAbility
    {
        static constexpr std::string_view Name = "FortAIDataProvider_GoalProviderAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIDataProvider_Ability";
        struct Offsets
        {
            static constexpr std::uintptr_t AbilityTag = 0x28;
            static constexpr std::uintptr_t AbilityBehaviorDistanceTag = 0x48;
            static constexpr std::uintptr_t BehaviorDistance = 0x68;
            static constexpr std::uintptr_t BehaviorDistanceAsRoundedInt = 0x6C;
            static constexpr std::uintptr_t BehaviorDistanceAsTruncatedInt = 0x70;
            static constexpr std::uintptr_t BehaviorDistanceAsBool = 0x74;
            static constexpr std::uintptr_t MaxTargetSelectionRange = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"AbilityTag", 0x28, "StructProperty"},
            {"AbilityBehaviorDistanceTag", 0x48, "StructProperty"},
            {"BehaviorDistance", 0x68, "FloatProperty"},
            {"BehaviorDistanceAsRoundedInt", 0x6C, "IntProperty"},
            {"BehaviorDistanceAsTruncatedInt", 0x70, "IntProperty"},
            {"BehaviorDistanceAsBool", 0x74, "BoolProperty"},
            {"MaxTargetSelectionRange", 0x78, "FloatProperty"},
        }};
    };

    struct FortAIDataProvider_LeashComponent
    {
        static constexpr std::string_view Name = "FortAIDataProvider_LeashComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t LeashRadius = 0x28;
            static constexpr std::uintptr_t TimeOutsideOfLeashMultiplier = 0x2C;
            static constexpr std::uintptr_t LeashRadiusOffset = 0x30;
            static constexpr std::uintptr_t TimeOutsideOfLeashToMultiplier = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"LeashRadius", 0x28, "FloatProperty"},
            {"TimeOutsideOfLeashMultiplier", 0x2C, "FloatProperty"},
            {"LeashRadiusOffset", 0x30, "StructProperty"},
            {"TimeOutsideOfLeashToMultiplier", 0x58, "StructProperty"},
        }};
    };

    struct FortAIDataProvider_Pawn
    {
        static constexpr std::string_view Name = "FortAIDataProvider_Pawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t SightRadius = 0x28;
            static constexpr std::uintptr_t HearingRadius = 0x2C;
            static constexpr std::uintptr_t ViewLocationOffsetFromGround = 0x30;
            static constexpr std::uintptr_t MaxStepHeight = 0x34;
            static constexpr std::uintptr_t TetheredBoxCenterLocation = 0x38;
            static constexpr std::uintptr_t TetheredBoxWidth = 0x50;
            static constexpr std::uintptr_t TetheredBoxHeight = 0x54;
            static constexpr std::uintptr_t TetheredBoxEQSGridSize = 0x58;
            static constexpr std::uintptr_t TetheredBoxEQSSpaceBetween = 0x5C;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SightRadius", 0x28, "FloatProperty"},
            {"HearingRadius", 0x2C, "FloatProperty"},
            {"ViewLocationOffsetFromGround", 0x30, "FloatProperty"},
            {"MaxStepHeight", 0x34, "FloatProperty"},
            {"TetheredBoxCenterLocation", 0x38, "StructProperty"},
            {"TetheredBoxWidth", 0x50, "FloatProperty"},
            {"TetheredBoxHeight", 0x54, "FloatProperty"},
            {"TetheredBoxEQSGridSize", 0x58, "FloatProperty"},
            {"TetheredBoxEQSSpaceBetween", 0x5C, "FloatProperty"},
        }};
    };

    struct FortAIDataProvider_ScalableFloat
    {
        static constexpr std::string_view Name = "FortAIDataProvider_ScalableFloat";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIDataProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t ScalableFloat = 0x28;
            static constexpr std::uintptr_t FloatValue = 0x50;
            static constexpr std::uintptr_t IntValue = 0x54;
            static constexpr std::uintptr_t BoolValue = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ScalableFloat", 0x28, "StructProperty"},
            {"FloatValue", 0x50, "FloatProperty"},
            {"IntValue", 0x54, "IntProperty"},
            {"BoolValue", 0x58, "BoolProperty"},
        }};
    };

    struct FortAIDefendDebugDrawComponent
    {
        static constexpr std::string_view Name = "FortAIDefendDebugDrawComponent";
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

    struct FortAIDefendSpotsBuilder
    {
        static constexpr std::string_view Name = "FortAIDefendSpotsBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TickFunction = 0x28;
            static constexpr std::uintptr_t ActiveBuilds = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TickFunction", 0x28, "StructProperty"},
            {"ActiveBuilds", 0x58, "ArrayProperty"},
        }};
    };

    struct FortAIDefendSpotsBuilder_ActiveBuild
    {
        static constexpr std::string_view Name = "FortAIDefendSpotsBuilder_ActiveBuild";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BlockingLineTraceCollections = 0x48;
            static constexpr std::uintptr_t ShootSpotLineTraceCollections = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BlockingLineTraceCollections", 0x48, "ArrayProperty"},
            {"ShootSpotLineTraceCollections", 0x60, "ArrayProperty"},
        }};
    };

    struct FortAIDefendSpotsBuilder_BlockingLineTraceCollection
    {
        static constexpr std::string_view Name = "FortAIDefendSpotsBuilder_BlockingLineTraceCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAIDefendSpotsBuilder_ShootSpotLineTraceCollection
    {
        static constexpr std::string_view Name = "FortAIDefendSpotsBuilder_ShootSpotLineTraceCollection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAIDefendVolume
    {
        static constexpr std::string_view Name = "FortAIDefendVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Volume";
        struct Offsets
        {
            static constexpr std::uintptr_t MapDefendSpots = 0x2C8;
            static constexpr std::uintptr_t EnableRuntimeGeneration = 0x2D8;
            static constexpr std::uintptr_t BuilderData = 0x300;
            static constexpr std::uintptr_t DefendSpotBuilder_Provider = 0x518;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MapDefendSpots", 0x2C8, "MapProperty"},
            {"EnableRuntimeGeneration", 0x2D8, "StructProperty"},
            {"BuilderData", 0x300, "StructProperty"},
            {"DefendSpotBuilder_Provider", 0x518, "ObjectProperty"},
        }};
    };

    struct FortAIDefendWorldSubsystem
    {
        static constexpr std::string_view Name = "FortAIDefendWorldSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t DefendSpotsBuilder = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefendSpotsBuilder", 0x38, "ObjectProperty"},
        }};
    };

    struct FortAIDirector
    {
        static constexpr std::string_view Name = "FortAIDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxAliveCurve = 0x288;
            static constexpr std::uintptr_t MinAliveCurve = 0x298;
            static constexpr std::uintptr_t IntensityInfo = 0x2A8;
            static constexpr std::uintptr_t AIDirectorPIDController = 0x2D8;
            static constexpr std::uintptr_t PIDControllerSettings = 0x340;
            static constexpr std::uintptr_t UtilityContributionData = 0x370;
            static constexpr std::uintptr_t UnreachableLocationPathCost = 0x770;
            static constexpr std::uintptr_t PlayerPerformanceEstimateSettings = 0x778;
            static constexpr std::uintptr_t bUsePrototypeEnemies = 0x7B8;
            static constexpr std::uintptr_t bForceByPassNavMeshForAISpawning = 0x7BC;
            static constexpr std::uintptr_t DebugEncounterDirections = 0x7C0;
            static constexpr std::uintptr_t DespawnAIType = 0x7D0;
            static constexpr std::uintptr_t DespawnDistance = 0x7D4;
            static constexpr std::uintptr_t DespawnInterval = 0x7D8;
            static constexpr std::uintptr_t DebugSpawnAIGroupTags = 0x7E0;
            static constexpr std::uintptr_t DebugEncounterTags = 0x800;
            static constexpr std::uintptr_t BurstSpawnThreatVisualsEndDelay = 0x820;
            static constexpr std::uintptr_t EncounterSpawnGroupCapSettings = 0x828;
            static constexpr std::uintptr_t EncounterSpawnPointsSettings = 0x838;
            static constexpr std::uintptr_t EncounterPawnDifficultyLevelModifiers = 0x848;
            static constexpr std::uintptr_t SpawnGroupUpgrades = 0x858;
            static constexpr std::uintptr_t GuaranteedUpgradeGroupUtilityBonus = 0x868;
            static constexpr std::uintptr_t DiscreteEncounterUtilityDesireMappings = 0x86C;
            static constexpr std::uintptr_t InitialDynamicUtilities = 0x87C;
            static constexpr std::uintptr_t SpawnLocationPlacementQueries = 0x880;
            static constexpr std::uintptr_t SpawnLocationActorSearchQueries = 0x920;
            static constexpr std::uintptr_t DataTrackingSettings = 0x9C0;
            static constexpr std::uintptr_t BaseLootDropData = 0x9C8;
            static constexpr std::uintptr_t LootDropModifiers = 0x9D8;
            static constexpr std::uintptr_t LootDropDenialQuery = 0x9E8;
            static constexpr std::uintptr_t bDebugEncounterQueries = 0xA30;
            static constexpr std::uintptr_t PlayerControllersForBVTree = 0xA48;
            static constexpr std::uintptr_t PlayerPawnsForBVTree = 0xA58;
            static constexpr std::uintptr_t AIControllersForBVTree = 0xA98;
            static constexpr std::uintptr_t AIPawnsForBVTree = 0xAA8;
            static constexpr std::uintptr_t AIPlayerBotControllersForBVTree = 0xAE8;
            static constexpr std::uintptr_t AIPlayerBotPawnsForBVTree = 0xAF8;
            static constexpr std::uintptr_t AINonPlayerBotControllersForBVTree = 0xB38;
            static constexpr std::uintptr_t AINonPlayerBotPawnsForBVTree = 0xB48;
            static constexpr std::uintptr_t NonPlayerBotPawns = 0xB88;
            static constexpr std::uintptr_t PlayerBotPawns = 0xB98;
            static constexpr std::uintptr_t PlayerPawns = 0xBA8;
            static constexpr std::uintptr_t FortAIPawns = 0xBB8;
            static constexpr std::uintptr_t bUseLODSettings = 0xC48;
            static constexpr std::uintptr_t CachedLODSettingsManager = 0xCB8;
            static constexpr std::uintptr_t bAsyncProcessUpdateAliveAIs = 0xCC8;
            static constexpr std::uintptr_t bAllowProcessPlayerTargeting = 0xCC9;
            static constexpr std::uintptr_t MaxNumLODAIProcessPerFrame = 0xCCC;
            static constexpr std::uintptr_t DefaultEncounterPawnCaps = 0xCD0;
            static constexpr std::uintptr_t IntensityGraph = 0xCF0;
            static constexpr std::uintptr_t UtilitiesGraph = 0xCF8;
            static constexpr std::uintptr_t PIDValuesGraph = 0xD00;
            static constexpr std::uintptr_t PIDContributionsGraph = 0xD08;
            static constexpr std::uintptr_t bAIDisabled = 0xD10;
            static constexpr std::uintptr_t bNightActive = 0xD10;
            static constexpr std::uintptr_t bRegisteredForDayPhaseChange = 0xD10;
            static constexpr std::uintptr_t bUseSpawnCap = 0xD10;
            static constexpr std::uintptr_t NightCount = 0xD14;
            static constexpr std::uintptr_t NightEncounterFailureBreatherTime = 0xD18;
            static constexpr std::uintptr_t EncounterPawnSpawnInterval = 0xD1C;
            static constexpr std::uintptr_t DefaultNightEncounter = 0xD20;
            static constexpr std::uintptr_t DummyDebugEncounter = 0xD28;
            static constexpr std::uintptr_t BaseEncounterClass = 0xD30;
            static constexpr std::uintptr_t MaxActiveAlive = 0xD38;
            static constexpr std::uintptr_t NumActiveAlive = 0xD3C;
            static constexpr std::uintptr_t NumPendingCapRelevantAI = 0xD40;
            static constexpr std::uintptr_t PendingSpawns = 0xD58;
            static constexpr std::uintptr_t MaxAISpawnedPerFrame = 0xD68;
            static constexpr std::uintptr_t MaxAIDespawnedPerFrame = 0xD6C;
            static constexpr std::uintptr_t DespawnAllAIMaxAIDespawnedPerFrame = 0xD70;
            static constexpr std::uintptr_t NumWorldSubdivides = 0xDA8;
            static constexpr std::uintptr_t MinAISpawnDistanceFromPlayers = 0xDAC;
            static constexpr std::uintptr_t AmbientThreatPreferredPlacementActorTags = 0xDB0;
            static constexpr std::uintptr_t AmbientThreatRequiredPlacementActorTags = 0xDD0;
            static constexpr std::uintptr_t ActiveEncounters = 0xDF0;
            static constexpr std::uintptr_t InactiveEncounters = 0xE00;
            static constexpr std::uintptr_t PendingStoppedEncounters = 0xE10;
            static constexpr std::uintptr_t ActiveDefaultEncounter = 0xE20;
            static constexpr std::uintptr_t ActiveDummyDebugEncounter = 0xE28;
            static constexpr std::uintptr_t EncounterSequences = 0xE30;
            static constexpr std::uintptr_t EQSRenderingComp = 0xE40;
            static constexpr std::uintptr_t DebugGraphUpdateFrequency = 0xE48;
            static constexpr std::uintptr_t MaxNormalLODDistanceToPlayer = 0xE4C;
            static constexpr std::uintptr_t AIRelevantDistanceToPlayer = 0xE50;
            static constexpr std::uintptr_t EncounterRelevantDistanceToPlayer = 0xE54;
            static constexpr std::uintptr_t EncounterRelevantDistanceToDefender = 0xE58;
            static constexpr std::uintptr_t PatrolWards = 0xE60;
            static constexpr std::uintptr_t OnSpawnedWithRequestID = 0xE78;
            static constexpr std::uintptr_t MaxTotalActiveAliveAI = 0xE98;
            static constexpr std::uintptr_t MaxEncounterActiveAliveAI = 0xE9C;
            static constexpr std::uintptr_t MaxSPUsed = 0xEA0;
            static constexpr std::uintptr_t DebugEncounterTopUtilityPercentages = 0xEA8;
            static constexpr std::uintptr_t DebugEncounterSpawnPointsCurves = 0xEB8;
            static constexpr std::uintptr_t bDebugAllowEncounterModifierTags = 0xEC8;
            static constexpr std::uintptr_t SimulatedNumberOfPlayersForAIEncounters = 0xECC;
            static constexpr std::uintptr_t MaxNumberOfEncounterGroups = 0xF08;
            static constexpr std::uintptr_t RegisteredAISpawners = 0xF10;
        };

        inline static constexpr std::array<PropertyInfo, 97> Properties{{
            {"MaxAliveCurve", 0x288, "StructProperty"},
            {"MinAliveCurve", 0x298, "StructProperty"},
            {"IntensityInfo", 0x2A8, "StructProperty"},
            {"AIDirectorPIDController", 0x2D8, "StructProperty"},
            {"PIDControllerSettings", 0x340, "StructProperty"},
            {"UtilityContributionData", 0x370, "StructProperty"},
            {"UnreachableLocationPathCost", 0x770, "FloatProperty"},
            {"PlayerPerformanceEstimateSettings", 0x778, "StructProperty"},
            {"bUsePrototypeEnemies", 0x7B8, "BoolProperty"},
            {"bForceByPassNavMeshForAISpawning", 0x7BC, "BoolProperty"},
            {"DebugEncounterDirections", 0x7C0, "ArrayProperty"},
            {"DespawnAIType", 0x7D0, "EnumProperty"},
            {"DespawnDistance", 0x7D4, "FloatProperty"},
            {"DespawnInterval", 0x7D8, "FloatProperty"},
            {"DebugSpawnAIGroupTags", 0x7E0, "StructProperty"},
            {"DebugEncounterTags", 0x800, "StructProperty"},
            {"BurstSpawnThreatVisualsEndDelay", 0x820, "FloatProperty"},
            {"EncounterSpawnGroupCapSettings", 0x828, "ArrayProperty"},
            {"EncounterSpawnPointsSettings", 0x838, "ArrayProperty"},
            {"EncounterPawnDifficultyLevelModifiers", 0x848, "ArrayProperty"},
            {"SpawnGroupUpgrades", 0x858, "ArrayProperty"},
            {"GuaranteedUpgradeGroupUtilityBonus", 0x868, "FloatProperty"},
            {"DiscreteEncounterUtilityDesireMappings", 0x86C, "FloatProperty"},
            {"InitialDynamicUtilities", 0x87C, "ByteProperty"},
            {"SpawnLocationPlacementQueries", 0x880, "StructProperty"},
            {"SpawnLocationActorSearchQueries", 0x920, "StructProperty"},
            {"DataTrackingSettings", 0x9C0, "ObjectProperty"},
            {"BaseLootDropData", 0x9C8, "ArrayProperty"},
            {"LootDropModifiers", 0x9D8, "ArrayProperty"},
            {"LootDropDenialQuery", 0x9E8, "StructProperty"},
            {"bDebugEncounterQueries", 0xA30, "BoolProperty"},
            {"PlayerControllersForBVTree", 0xA48, "ArrayProperty"},
            {"PlayerPawnsForBVTree", 0xA58, "ArrayProperty"},
            {"AIControllersForBVTree", 0xA98, "ArrayProperty"},
            {"AIPawnsForBVTree", 0xAA8, "ArrayProperty"},
            {"AIPlayerBotControllersForBVTree", 0xAE8, "ArrayProperty"},
            {"AIPlayerBotPawnsForBVTree", 0xAF8, "ArrayProperty"},
            {"AINonPlayerBotControllersForBVTree", 0xB38, "ArrayProperty"},
            {"AINonPlayerBotPawnsForBVTree", 0xB48, "ArrayProperty"},
            {"NonPlayerBotPawns", 0xB88, "ArrayProperty"},
            {"PlayerBotPawns", 0xB98, "ArrayProperty"},
            {"PlayerPawns", 0xBA8, "ArrayProperty"},
            {"FortAIPawns", 0xBB8, "ArrayProperty"},
            {"bUseLODSettings", 0xC48, "BoolProperty"},
            {"CachedLODSettingsManager", 0xCB8, "InterfaceProperty"},
            {"bAsyncProcessUpdateAliveAIs", 0xCC8, "BoolProperty"},
            {"bAllowProcessPlayerTargeting", 0xCC9, "BoolProperty"},
            {"MaxNumLODAIProcessPerFrame", 0xCCC, "IntProperty"},
            {"DefaultEncounterPawnCaps", 0xCD0, "StructProperty"},
            {"IntensityGraph", 0xCF0, "ObjectProperty"},
            {"UtilitiesGraph", 0xCF8, "ObjectProperty"},
            {"PIDValuesGraph", 0xD00, "ObjectProperty"},
            {"PIDContributionsGraph", 0xD08, "ObjectProperty"},
            {"bAIDisabled", 0xD10, "BoolProperty"},
            {"bNightActive", 0xD10, "BoolProperty"},
            {"bRegisteredForDayPhaseChange", 0xD10, "BoolProperty"},
            {"bUseSpawnCap", 0xD10, "BoolProperty"},
            {"NightCount", 0xD14, "IntProperty"},
            {"NightEncounterFailureBreatherTime", 0xD18, "FloatProperty"},
            {"EncounterPawnSpawnInterval", 0xD1C, "FloatProperty"},
            {"DefaultNightEncounter", 0xD20, "ClassProperty"},
            {"DummyDebugEncounter", 0xD28, "ClassProperty"},
            {"BaseEncounterClass", 0xD30, "ClassProperty"},
            {"MaxActiveAlive", 0xD38, "IntProperty"},
            {"NumActiveAlive", 0xD3C, "IntProperty"},
            {"NumPendingCapRelevantAI", 0xD40, "IntProperty"},
            {"PendingSpawns", 0xD58, "ArrayProperty"},
            {"MaxAISpawnedPerFrame", 0xD68, "IntProperty"},
            {"MaxAIDespawnedPerFrame", 0xD6C, "IntProperty"},
            {"DespawnAllAIMaxAIDespawnedPerFrame", 0xD70, "IntProperty"},
            {"NumWorldSubdivides", 0xDA8, "IntProperty"},
            {"MinAISpawnDistanceFromPlayers", 0xDAC, "FloatProperty"},
            {"AmbientThreatPreferredPlacementActorTags", 0xDB0, "StructProperty"},
            {"AmbientThreatRequiredPlacementActorTags", 0xDD0, "StructProperty"},
            {"ActiveEncounters", 0xDF0, "ArrayProperty"},
            {"InactiveEncounters", 0xE00, "ArrayProperty"},
            {"PendingStoppedEncounters", 0xE10, "ArrayProperty"},
            {"ActiveDefaultEncounter", 0xE20, "ObjectProperty"},
            {"ActiveDummyDebugEncounter", 0xE28, "ObjectProperty"},
            {"EncounterSequences", 0xE30, "ArrayProperty"},
            {"EQSRenderingComp", 0xE40, "ObjectProperty"},
            {"DebugGraphUpdateFrequency", 0xE48, "IntProperty"},
            {"MaxNormalLODDistanceToPlayer", 0xE4C, "FloatProperty"},
            {"AIRelevantDistanceToPlayer", 0xE50, "FloatProperty"},
            {"EncounterRelevantDistanceToPlayer", 0xE54, "FloatProperty"},
            {"EncounterRelevantDistanceToDefender", 0xE58, "FloatProperty"},
            {"PatrolWards", 0xE60, "ArrayProperty"},
            {"OnSpawnedWithRequestID", 0xE78, "MulticastInlineDelegateProperty"},
            {"MaxTotalActiveAliveAI", 0xE98, "IntProperty"},
            {"MaxEncounterActiveAliveAI", 0xE9C, "IntProperty"},
            {"MaxSPUsed", 0xEA0, "IntProperty"},
            {"DebugEncounterTopUtilityPercentages", 0xEA8, "ArrayProperty"},
            {"DebugEncounterSpawnPointsCurves", 0xEB8, "ArrayProperty"},
            {"bDebugAllowEncounterModifierTags", 0xEC8, "BoolProperty"},
            {"SimulatedNumberOfPlayersForAIEncounters", 0xECC, "IntProperty"},
            {"MaxNumberOfEncounterGroups", 0xF08, "IntProperty"},
            {"RegisteredAISpawners", 0xF10, "ArrayProperty"},
        }};
    };

    struct FortAIDirectorDataManager
    {
        static constexpr std::string_view Name = "FortAIDirectorDataManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerObject = 0x278;
            static constexpr std::uintptr_t EventsToTrack = 0x280;
            static constexpr std::uintptr_t FactorsToTrack = 0x290;
            static constexpr std::uintptr_t FactorsBeingTracked = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OwnerObject", 0x278, "ObjectProperty"},
            {"EventsToTrack", 0x280, "ArrayProperty"},
            {"FactorsToTrack", 0x290, "ArrayProperty"},
            {"FactorsBeingTracked", 0x2C0, "ArrayProperty"},
        }};
    };

    struct FortAIDirectorDataTrackingSettings
    {
        static constexpr std::string_view Name = "FortAIDirectorDataTrackingSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerDataManager = 0x28;
            static constexpr std::uintptr_t EncounterDataManager = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayerDataManager", 0x28, "ClassProperty"},
            {"EncounterDataManager", 0x30, "ClassProperty"},
        }};
    };

    struct FortAIDirectorEventManager
    {
        static constexpr std::string_view Name = "FortAIDirectorEventManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryActorTick = 0x28;
            static constexpr std::uintptr_t bAlwaysRelevant = 0x58;
            static constexpr std::uintptr_t bCallPreReplication = 0x58;
            static constexpr std::uintptr_t bCallPreReplicationForReplay = 0x58;
            static constexpr std::uintptr_t bHidden = 0x58;
            static constexpr std::uintptr_t bNetTemporary = 0x58;
            static constexpr std::uintptr_t bOnlyRelevantToOwner = 0x58;
            static constexpr std::uintptr_t bReplicateMovement = 0x58;
            static constexpr std::uintptr_t bExchangedRoles = 0x59;
            static constexpr std::uintptr_t bForceNetAddressable = 0x59;
            static constexpr std::uintptr_t bNetLoadOnClient = 0x59;
            static constexpr std::uintptr_t bNetUseOwnerRelevancy = 0x59;
            static constexpr std::uintptr_t bRelevantForLevelBounds = 0x59;
            static constexpr std::uintptr_t bRelevantForNetworkReplays = 0x59;
            static constexpr std::uintptr_t bReplayRewindable = 0x59;
            static constexpr std::uintptr_t bTearOff = 0x59;
            static constexpr std::uintptr_t bAllowTickBeforeBeginPlay = 0x5A;
            static constexpr std::uintptr_t bAutoDestroyWhenFinished = 0x5A;
            static constexpr std::uintptr_t bBlockInput = 0x5A;
            static constexpr std::uintptr_t bCanBeDamaged = 0x5A;
            static constexpr std::uintptr_t bCollideWhenPlacing = 0x5A;
            static constexpr std::uintptr_t bFindCameraComponentWhenViewTarget = 0x5A;
            static constexpr std::uintptr_t bGenerateOverlapEventsDuringLevelStreaming = 0x5A;
            static constexpr std::uintptr_t bIgnoresOriginShifting = 0x5A;
            static constexpr std::uintptr_t bAllowReceiveTickEventOnDedicatedServer = 0x5B;
            static constexpr std::uintptr_t bCanBeInCluster = 0x5B;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x5B;
            static constexpr std::uintptr_t bIsEditorOnlyActor = 0x5B;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x5B;
            static constexpr std::uintptr_t bReplicates = 0x5B;
            static constexpr std::uintptr_t bActorEnableCollision = 0x5D;
            static constexpr std::uintptr_t bActorIsBeingDestroyed = 0x5D;
            static constexpr std::uintptr_t bAsyncPhysicsTickEnabled = 0x5D;
            static constexpr std::uintptr_t UpdateOverlapsMethodDuringLevelStreaming = 0x5E;
            static constexpr std::uintptr_t DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5F;
            static constexpr std::uintptr_t RemoteRole = 0x60;
            static constexpr std::uintptr_t InitialLifeSpan = 0x64;
            static constexpr std::uintptr_t CustomTimeDilation = 0x68;
            static constexpr std::uintptr_t RayTracingGroupId = 0x6C;
            static constexpr std::uintptr_t AttachmentReplication = 0x70;
            static constexpr std::uintptr_t ReplicatedMovement = 0xD0;
            static constexpr std::uintptr_t Owner = 0x158;
            static constexpr std::uintptr_t NetDriverName = 0x160;
            static constexpr std::uintptr_t Role = 0x164;
            static constexpr std::uintptr_t NetDormancy = 0x165;
            static constexpr std::uintptr_t SpawnCollisionHandlingMethod = 0x166;
            static constexpr std::uintptr_t AutoReceiveInput = 0x167;
            static constexpr std::uintptr_t InputPriority = 0x168;
            static constexpr std::uintptr_t InputComponent = 0x170;
            static constexpr std::uintptr_t NetTag = 0x178;
            static constexpr std::uintptr_t NetCullDistanceSquared = 0x17C;
            static constexpr std::uintptr_t NetUpdateFrequency = 0x180;
            static constexpr std::uintptr_t MinNetUpdateFrequency = 0x184;
            static constexpr std::uintptr_t NetPriority = 0x188;
            static constexpr std::uintptr_t PhysicsReplicationMode = 0x18C;
            static constexpr std::uintptr_t Instigator = 0x198;
            static constexpr std::uintptr_t Children = 0x1A0;
            static constexpr std::uintptr_t RootComponent = 0x1B0;
            static constexpr std::uintptr_t HLODLayer = 0x1C8;
            static constexpr std::uintptr_t Layers = 0x1D0;
            static constexpr std::uintptr_t ParentComponent = 0x1E0;
            static constexpr std::uintptr_t Tags = 0x1F8;
            static constexpr std::uintptr_t OnTakeAnyDamage = 0x208;
            static constexpr std::uintptr_t OnTakePointDamage = 0x209;
            static constexpr std::uintptr_t OnTakeRadialDamage = 0x20A;
            static constexpr std::uintptr_t OnActorBeginOverlap = 0x20B;
            static constexpr std::uintptr_t OnActorEndOverlap = 0x20C;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x20D;
            static constexpr std::uintptr_t OnEndCursorOver = 0x20E;
            static constexpr std::uintptr_t OnClicked = 0x20F;
            static constexpr std::uintptr_t OnReleased = 0x210;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x211;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x212;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x213;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x214;
            static constexpr std::uintptr_t OnActorHit = 0x215;
            static constexpr std::uintptr_t OnDestroyed = 0x216;
            static constexpr std::uintptr_t OnEndPlay = 0x217;
            static constexpr std::uintptr_t InstanceComponents = 0x258;
            static constexpr std::uintptr_t BlueprintCreatedComponents = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 80> Properties{{
            {"PrimaryActorTick", 0x28, "StructProperty"},
            {"bAlwaysRelevant", 0x58, "BoolProperty"},
            {"bCallPreReplication", 0x58, "BoolProperty"},
            {"bCallPreReplicationForReplay", 0x58, "BoolProperty"},
            {"bHidden", 0x58, "BoolProperty"},
            {"bNetTemporary", 0x58, "BoolProperty"},
            {"bOnlyRelevantToOwner", 0x58, "BoolProperty"},
            {"bReplicateMovement", 0x58, "BoolProperty"},
            {"bExchangedRoles", 0x59, "BoolProperty"},
            {"bForceNetAddressable", 0x59, "BoolProperty"},
            {"bNetLoadOnClient", 0x59, "BoolProperty"},
            {"bNetUseOwnerRelevancy", 0x59, "BoolProperty"},
            {"bRelevantForLevelBounds", 0x59, "BoolProperty"},
            {"bRelevantForNetworkReplays", 0x59, "BoolProperty"},
            {"bReplayRewindable", 0x59, "BoolProperty"},
            {"bTearOff", 0x59, "BoolProperty"},
            {"bAllowTickBeforeBeginPlay", 0x5A, "BoolProperty"},
            {"bAutoDestroyWhenFinished", 0x5A, "BoolProperty"},
            {"bBlockInput", 0x5A, "BoolProperty"},
            {"bCanBeDamaged", 0x5A, "BoolProperty"},
            {"bCollideWhenPlacing", 0x5A, "BoolProperty"},
            {"bFindCameraComponentWhenViewTarget", 0x5A, "BoolProperty"},
            {"bGenerateOverlapEventsDuringLevelStreaming", 0x5A, "BoolProperty"},
            {"bIgnoresOriginShifting", 0x5A, "BoolProperty"},
            {"bAllowReceiveTickEventOnDedicatedServer", 0x5B, "BoolProperty"},
            {"bCanBeInCluster", 0x5B, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x5B, "BoolProperty"},
            {"bIsEditorOnlyActor", 0x5B, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x5B, "BoolProperty"},
            {"bReplicates", 0x5B, "BoolProperty"},
            {"bActorEnableCollision", 0x5D, "BoolProperty"},
            {"bActorIsBeingDestroyed", 0x5D, "BoolProperty"},
            {"bAsyncPhysicsTickEnabled", 0x5D, "BoolProperty"},
            {"UpdateOverlapsMethodDuringLevelStreaming", 0x5E, "EnumProperty"},
            {"DefaultUpdateOverlapsMethodDuringLevelStreaming", 0x5F, "EnumProperty"},
            {"RemoteRole", 0x60, "ByteProperty"},
            {"InitialLifeSpan", 0x64, "FloatProperty"},
            {"CustomTimeDilation", 0x68, "FloatProperty"},
            {"RayTracingGroupId", 0x6C, "IntProperty"},
            {"AttachmentReplication", 0x70, "StructProperty"},
            {"ReplicatedMovement", 0xD0, "StructProperty"},
            {"Owner", 0x158, "ObjectProperty"},
            {"NetDriverName", 0x160, "NameProperty"},
            {"Role", 0x164, "ByteProperty"},
            {"NetDormancy", 0x165, "ByteProperty"},
            {"SpawnCollisionHandlingMethod", 0x166, "EnumProperty"},
            {"AutoReceiveInput", 0x167, "ByteProperty"},
            {"InputPriority", 0x168, "IntProperty"},
            {"InputComponent", 0x170, "ObjectProperty"},
            {"NetTag", 0x178, "IntProperty"},
            {"NetCullDistanceSquared", 0x17C, "FloatProperty"},
            {"NetUpdateFrequency", 0x180, "FloatProperty"},
            {"MinNetUpdateFrequency", 0x184, "FloatProperty"},
            {"NetPriority", 0x188, "FloatProperty"},
            {"PhysicsReplicationMode", 0x18C, "EnumProperty"},
            {"Instigator", 0x198, "ObjectProperty"},
            {"Children", 0x1A0, "ArrayProperty"},
            {"RootComponent", 0x1B0, "ObjectProperty"},
            {"HLODLayer", 0x1C8, "ObjectProperty"},
            {"Layers", 0x1D0, "ArrayProperty"},
            {"ParentComponent", 0x1E0, "WeakObjectProperty"},
            {"Tags", 0x1F8, "ArrayProperty"},
            {"OnTakeAnyDamage", 0x208, "MulticastSparseDelegateProperty"},
            {"OnTakePointDamage", 0x209, "MulticastSparseDelegateProperty"},
            {"OnTakeRadialDamage", 0x20A, "MulticastSparseDelegateProperty"},
            {"OnActorBeginOverlap", 0x20B, "MulticastSparseDelegateProperty"},
            {"OnActorEndOverlap", 0x20C, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x20D, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x20E, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x20F, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x210, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x211, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x212, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x213, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x214, "MulticastSparseDelegateProperty"},
            {"OnActorHit", 0x215, "MulticastSparseDelegateProperty"},
            {"OnDestroyed", 0x216, "MulticastSparseDelegateProperty"},
            {"OnEndPlay", 0x217, "MulticastSparseDelegateProperty"},
            {"InstanceComponents", 0x258, "ArrayProperty"},
            {"BlueprintCreatedComponents", 0x268, "ArrayProperty"},
        }};
    };

    struct FortAIDirectorLODAIConfig
    {
        static constexpr std::string_view Name = "FortAIDirectorLODAIConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SingleAIUnitCost = 0x28;
            static constexpr std::uintptr_t Priority = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SingleAIUnitCost", 0x28, "StructProperty"},
            {"Priority", 0x50, "StructProperty"},
        }};
    };

    struct FortAIEncounterGoalSelectionTable
    {
        static constexpr std::string_view Name = "FortAIEncounterGoalSelectionTable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t EncounterGoalSelectionCriteria = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EncounterGoalSelectionCriteria", 0x28, "ArrayProperty"},
        }};
    };

    struct FortAIEncounterInfo
    {
        static constexpr std::string_view Name = "FortAIEncounterInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnGroupProgressionInfo = 0x38;
            static constexpr std::uintptr_t SpawnPointsPercentageCurveSequence = 0x40;
            static constexpr std::uintptr_t IntensityCurveSequence = 0x50;
            static constexpr std::uintptr_t BurstSpawnPointsPercentage = 0x60;
            static constexpr std::uintptr_t SpawnPointsMultiplier = 0x64;
            static constexpr std::uintptr_t bUseBreathers = 0x68;
            static constexpr std::uintptr_t LowPlayerPerformanceBreatherTimeSecondsCurve = 0x70;
            static constexpr std::uintptr_t NormalPlayerPerformanceBreatherTimeSecondsCurve = 0x80;
            static constexpr std::uintptr_t HighPlayerPerformanceBreatherTimeSecondsCurve = 0x90;
            static constexpr std::uintptr_t EncounterTimeSeconds = 0xA0;
            static constexpr std::uintptr_t LockedUtilityValues = 0xA8;
            static constexpr std::uintptr_t NumFreeUtilities = 0xB8;
            static constexpr std::uintptr_t UtilityAdjustmentPeriodSeconds = 0xBC;
            static constexpr std::uintptr_t MinSpawnDistance = 0xC0;
            static constexpr std::uintptr_t MaxSpawnDistance = 0xC4;
            static constexpr std::uintptr_t NumDirections = 0xC8;
            static constexpr std::uintptr_t bChangeDirectionsOnRest = 0xCC;
            static constexpr std::uintptr_t SpawnPointsPercentageLimit = 0xD0;
            static constexpr std::uintptr_t PawnNumberLimit = 0xD4;
            static constexpr std::uintptr_t PawnNumberCaps = 0xD8;
            static constexpr std::uintptr_t SpawningIntervalSeconds = 0xF0;
            static constexpr std::uintptr_t PreSpawnRequeryTime = 0xF4;
            static constexpr std::uintptr_t EncounterSettingsFixed = 0xF8;
            static constexpr std::uintptr_t OnEncounterSpawnDirectionsChosen = 0x110;
            static constexpr std::uintptr_t NextRiftReplacementTime = 0x120;
            static constexpr std::uintptr_t NextSpawningTime = 0x124;
            static constexpr std::uintptr_t EncounterSpawnGroupCapsProfile = 0x128;
            static constexpr std::uintptr_t AdditionalSpawnGroupCapsCategories = 0x158;
            static constexpr std::uintptr_t EncounterSpawnPointsProfile = 0x168;
            static constexpr std::uintptr_t AvailableUpgrades = 0x1A8;
            static constexpr std::uintptr_t PawnDifficultyLevelModifiers = 0x1B8;
            static constexpr std::uintptr_t BaseLootDropRows = 0x1C8;
            static constexpr std::uintptr_t LootDropModifierRows = 0x1D8;
            static constexpr std::uintptr_t bRequiresReinitializationFromProfile = 0x1E8;
            static constexpr std::uintptr_t DesiredHostilityCurve = 0x1F0;
            static constexpr std::uintptr_t IntensitySequenceProgression = 0x200;
            static constexpr std::uintptr_t AliveMultiplier = 0x278;
            static constexpr std::uintptr_t SpawnLimitType = 0x27C;
            static constexpr std::uintptr_t SpawnLimit = 0x280;
            static constexpr std::uintptr_t PawnNumberLimitProgress = 0x284;
            static constexpr std::uintptr_t SpawnPointsLimitProgress = 0x288;
            static constexpr std::uintptr_t bSpawnLimitReached = 0x28C;
            static constexpr std::uintptr_t bHasSpawnedAllBurstSpawnAI = 0x28D;
            static constexpr std::uintptr_t bOverrideAliveCounts = 0x28E;
            static constexpr std::uintptr_t MinAliveOverride = 0x290;
            static constexpr std::uintptr_t MaxAliveOverride = 0x294;
            static constexpr std::uintptr_t HostilityThreshold = 0x298;
            static constexpr std::uintptr_t PeakTimeSeconds = 0x29C;
            static constexpr std::uintptr_t BreatherTimeSeconds = 0x2A0;
            static constexpr std::uintptr_t MaxRampTimeSeconds = 0x2A4;
            static constexpr std::uintptr_t MinTimeBetweenBreathesSeconds = 0x2A8;
            static constexpr std::uintptr_t MaxFadeTimeSeconds = 0x2AC;
            static constexpr std::uintptr_t FadeEndIntensity = 0x2B0;
            static constexpr std::uintptr_t FadeEndRemainingSpawnPointsPercentage = 0x2B4;
            static constexpr std::uintptr_t CompletionPercentageToDisableBreathers = 0x2B8;
            static constexpr std::uintptr_t OnEncounterAllEnemiesKilled = 0x2C0;
            static constexpr std::uintptr_t OnEncounterEnemySpawned = 0x2D0;
            static constexpr std::uintptr_t OnEncounterEnemySpawnFailed = 0x2E0;
            static constexpr std::uintptr_t OnEncounterAllBurstEnemiesSpawned = 0x2F0;
            static constexpr std::uintptr_t OnEncounterCompleted = 0x300;
            static constexpr std::uintptr_t OnEncounterPawnDied = 0x310;
            static constexpr std::uintptr_t OnEncounterSpawnedFinalEnemy = 0x320;
            static constexpr std::uintptr_t OnEncounterRiftSpawned = 0x330;
            static constexpr std::uintptr_t OnBuildingRiftBlockedShouldDie = 0x340;
            static constexpr std::uintptr_t bDisplayThreatVisuals = 0x353;
            static constexpr std::uintptr_t BaseDesiredUtilities = 0x354;
            static constexpr std::uintptr_t UtilitiesRequiredTags = 0x398;
            static constexpr std::uintptr_t InjectedTagForUtilityCheck = 0x598;
            static constexpr std::uintptr_t MaxLargeSpawnGroupDiscountInterval = 0x5BC;
            static constexpr std::uintptr_t MaxSelectionToSpawningDelay = 0x5C0;
            static constexpr std::uintptr_t CurrentDesiredUtilities = 0x5D8;
            static constexpr std::uintptr_t UtilityRecentSelectionPenalties = 0x5E8;
            static constexpr std::uintptr_t UtilityEffectivenessMeasurements = 0x628;
            static constexpr std::uintptr_t UtilityEffectivenessMultiplierCurve = 0x668;
            static constexpr std::uintptr_t UtilityEffectivenessInfluenceCap = 0x678;
            static constexpr std::uintptr_t CurrentTopUtilityPercentages = 0x680;
            static constexpr std::uintptr_t UsedTopUtilities = 0x690;
            static constexpr std::uintptr_t CurrentlySelectedFreeUtilities = 0x6A0;
            static constexpr std::uintptr_t NumUtilitiesConsidered = 0x6B0;
            static constexpr std::uintptr_t ReactivityPercentage = 0x6B4;
            static constexpr std::uintptr_t bAdjustUtilitiesDuringRest = 0x6B8;
            static constexpr std::uintptr_t bDespawnAIsDuringRest = 0x6B9;
            static constexpr std::uintptr_t LastPlayerCombatFactorUpdateTime = 0x6BC;
            static constexpr std::uintptr_t LastUtilityAdjustTime = 0x6C0;
            static constexpr std::uintptr_t LastSpawnPointAdjustmentTime = 0x6C4;
            static constexpr std::uintptr_t LastLargeGroupSpawnTime = 0x6C8;
            static constexpr std::uintptr_t EnemySpawnData = 0x6D0;
            static constexpr std::uintptr_t EncounterPIDController = 0x6E0;
            static constexpr std::uintptr_t CurrentSpawnPointsCap = 0x748;
            static constexpr std::uintptr_t CurrentSpawnPointsUsed = 0x74C;
            static constexpr std::uintptr_t FailSafeMinSpawnPoints = 0x758;
            static constexpr std::uintptr_t ActiveSpawnGroups = 0x760;
            static constexpr std::uintptr_t EncounterEngagementDistance = 0x770;
            static constexpr std::uintptr_t MinRelevantBuildingDamagedDistance = 0x774;
            static constexpr std::uintptr_t MaxRelevantBuildingDamagedDistance = 0x778;
            static constexpr std::uintptr_t CurrentGroupSpawnPoint = 0x790;
            static constexpr std::uintptr_t EncounterState = 0x798;
            static constexpr std::uintptr_t PacingState = 0x799;
            static constexpr std::uintptr_t LastPacingStateTransitionTime = 0x79C;
            static constexpr std::uintptr_t WaveProgressEstimate = 0x7A0;
            static constexpr std::uintptr_t DesiredDifficultyLevel = 0x7BC;
            static constexpr std::uintptr_t DifficultyLevelOverride = 0x7C0;
            static constexpr std::uintptr_t MyAIDirector = 0x7C8;
            static constexpr std::uintptr_t DataManagers = 0x7D0;
            static constexpr std::uintptr_t TargetObjective = 0x7E0;
            static constexpr std::uintptr_t bOnlyActiveAtNight = 0x7E8;
            static constexpr std::uintptr_t NumRiftsToUse = 0x7EC;
            static constexpr std::uintptr_t MinRiftsToUse = 0x7F0;
            static constexpr std::uintptr_t NumRiftsUsed = 0x7F4;
            static constexpr std::uintptr_t EncounterSettings = 0x7F8;
            static constexpr std::uintptr_t EncounterStartTime = 0x8E0;
            static constexpr std::uintptr_t HostilityCurveStartTime = 0x8E4;
            static constexpr std::uintptr_t DefaultEnvironmentQueryInfo = 0x8E8;
            static constexpr std::uintptr_t FallbackEnvironmentQueryInfo = 0x910;
            static constexpr std::uintptr_t OverrideEnvironmentQueryInfo = 0x938;
            static constexpr std::uintptr_t CurrentEnvironmentQueryInfo = 0x960;
            static constexpr std::uintptr_t bNukeWavesAtDaybreak = 0x988;
            static constexpr std::uintptr_t bNukeWavesAtEncounterEnd = 0x989;
            static constexpr std::uintptr_t bNukeWavesAtEncounterDeactivation = 0x98A;
            static constexpr std::uintptr_t ActiveEnemyCap = 0x98C;
            static constexpr std::uintptr_t CurrentHostilityLevel = 0x998;
            static constexpr std::uintptr_t OnEncounterRampStarted = 0x9A0;
            static constexpr std::uintptr_t OnEncounterPeakStarted = 0x9B0;
            static constexpr std::uintptr_t OnEncounterFadeStarted = 0x9C0;
            static constexpr std::uintptr_t OnEncounterRestStarted = 0x9D0;
            static constexpr std::uintptr_t OnEncounterCombatParticipation = 0x9E0;
            static constexpr std::uintptr_t OnEncounterOptionsChanged = 0x9F0;
            static constexpr std::uintptr_t RiftClassTemplate = 0xA00;
            static constexpr std::uintptr_t ExternalAISpawners = 0xA30;
            static constexpr std::uintptr_t EncounterQueryData = 0xA40;
            static constexpr std::uintptr_t RiftManager = 0xA60;
            static constexpr std::uintptr_t AssociatedMissionName = 0xA68;
            static constexpr std::uintptr_t AssociatedMissionType = 0xA78;
            static constexpr std::uintptr_t bCanBeActive = 0xA7C;
            static constexpr std::uintptr_t EncounterAssignments = 0xA80;
            static constexpr std::uintptr_t DefaultEncounterAssignmentSettings = 0xA90;
            static constexpr std::uintptr_t MaxActiveAlive = 0xAC8;
            static constexpr std::uintptr_t MaxSpawnPointsUsed = 0xACC;
            static constexpr std::uintptr_t OverrideSpawnPointsCurve = 0xAD0;
            static constexpr std::uintptr_t bSendFullAnalyticsReport = 0xC60;
            static constexpr std::uintptr_t bUseAILifespans = 0xC61;
            static constexpr std::uintptr_t bTrackCombatParticipation = 0xC62;
            static constexpr std::uintptr_t ModifierTags = 0xC68;
            static constexpr std::uintptr_t TimedModifierTags = 0xC88;
            static constexpr std::uintptr_t GameContextTags = 0xC98;
            static constexpr std::uintptr_t AILevelMutator = 0xCB8;
            static constexpr std::uintptr_t EncounterModifierTagsMutators = 0xCC0;
        };

        inline static constexpr std::array<PropertyInfo, 147> Properties{{
            {"SpawnGroupProgressionInfo", 0x38, "ObjectProperty"},
            {"SpawnPointsPercentageCurveSequence", 0x40, "StructProperty"},
            {"IntensityCurveSequence", 0x50, "StructProperty"},
            {"BurstSpawnPointsPercentage", 0x60, "FloatProperty"},
            {"SpawnPointsMultiplier", 0x64, "FloatProperty"},
            {"bUseBreathers", 0x68, "BoolProperty"},
            {"LowPlayerPerformanceBreatherTimeSecondsCurve", 0x70, "StructProperty"},
            {"NormalPlayerPerformanceBreatherTimeSecondsCurve", 0x80, "StructProperty"},
            {"HighPlayerPerformanceBreatherTimeSecondsCurve", 0x90, "StructProperty"},
            {"EncounterTimeSeconds", 0xA0, "FloatProperty"},
            {"LockedUtilityValues", 0xA8, "ArrayProperty"},
            {"NumFreeUtilities", 0xB8, "IntProperty"},
            {"UtilityAdjustmentPeriodSeconds", 0xBC, "FloatProperty"},
            {"MinSpawnDistance", 0xC0, "FloatProperty"},
            {"MaxSpawnDistance", 0xC4, "FloatProperty"},
            {"NumDirections", 0xC8, "IntProperty"},
            {"bChangeDirectionsOnRest", 0xCC, "BoolProperty"},
            {"SpawnPointsPercentageLimit", 0xD0, "FloatProperty"},
            {"PawnNumberLimit", 0xD4, "IntProperty"},
            {"PawnNumberCaps", 0xD8, "StructProperty"},
            {"SpawningIntervalSeconds", 0xF0, "FloatProperty"},
            {"PreSpawnRequeryTime", 0xF4, "FloatProperty"},
            {"EncounterSettingsFixed", 0xF8, "StructProperty"},
            {"OnEncounterSpawnDirectionsChosen", 0x110, "MulticastInlineDelegateProperty"},
            {"NextRiftReplacementTime", 0x120, "FloatProperty"},
            {"NextSpawningTime", 0x124, "FloatProperty"},
            {"EncounterSpawnGroupCapsProfile", 0x128, "StructProperty"},
            {"AdditionalSpawnGroupCapsCategories", 0x158, "ArrayProperty"},
            {"EncounterSpawnPointsProfile", 0x168, "StructProperty"},
            {"AvailableUpgrades", 0x1A8, "ArrayProperty"},
            {"PawnDifficultyLevelModifiers", 0x1B8, "ArrayProperty"},
            {"BaseLootDropRows", 0x1C8, "ArrayProperty"},
            {"LootDropModifierRows", 0x1D8, "ArrayProperty"},
            {"bRequiresReinitializationFromProfile", 0x1E8, "BoolProperty"},
            {"DesiredHostilityCurve", 0x1F0, "StructProperty"},
            {"IntensitySequenceProgression", 0x200, "ObjectProperty"},
            {"AliveMultiplier", 0x278, "FloatProperty"},
            {"SpawnLimitType", 0x27C, "ByteProperty"},
            {"SpawnLimit", 0x280, "IntProperty"},
            {"PawnNumberLimitProgress", 0x284, "IntProperty"},
            {"SpawnPointsLimitProgress", 0x288, "IntProperty"},
            {"bSpawnLimitReached", 0x28C, "BoolProperty"},
            {"bHasSpawnedAllBurstSpawnAI", 0x28D, "BoolProperty"},
            {"bOverrideAliveCounts", 0x28E, "BoolProperty"},
            {"MinAliveOverride", 0x290, "IntProperty"},
            {"MaxAliveOverride", 0x294, "IntProperty"},
            {"HostilityThreshold", 0x298, "FloatProperty"},
            {"PeakTimeSeconds", 0x29C, "FloatProperty"},
            {"BreatherTimeSeconds", 0x2A0, "FloatProperty"},
            {"MaxRampTimeSeconds", 0x2A4, "FloatProperty"},
            {"MinTimeBetweenBreathesSeconds", 0x2A8, "FloatProperty"},
            {"MaxFadeTimeSeconds", 0x2AC, "FloatProperty"},
            {"FadeEndIntensity", 0x2B0, "FloatProperty"},
            {"FadeEndRemainingSpawnPointsPercentage", 0x2B4, "FloatProperty"},
            {"CompletionPercentageToDisableBreathers", 0x2B8, "FloatProperty"},
            {"OnEncounterAllEnemiesKilled", 0x2C0, "MulticastInlineDelegateProperty"},
            {"OnEncounterEnemySpawned", 0x2D0, "MulticastInlineDelegateProperty"},
            {"OnEncounterEnemySpawnFailed", 0x2E0, "MulticastInlineDelegateProperty"},
            {"OnEncounterAllBurstEnemiesSpawned", 0x2F0, "MulticastInlineDelegateProperty"},
            {"OnEncounterCompleted", 0x300, "MulticastInlineDelegateProperty"},
            {"OnEncounterPawnDied", 0x310, "MulticastInlineDelegateProperty"},
            {"OnEncounterSpawnedFinalEnemy", 0x320, "MulticastInlineDelegateProperty"},
            {"OnEncounterRiftSpawned", 0x330, "MulticastInlineDelegateProperty"},
            {"OnBuildingRiftBlockedShouldDie", 0x340, "MulticastInlineDelegateProperty"},
            {"bDisplayThreatVisuals", 0x353, "BoolProperty"},
            {"BaseDesiredUtilities", 0x354, "FloatProperty"},
            {"UtilitiesRequiredTags", 0x398, "StructProperty"},
            {"InjectedTagForUtilityCheck", 0x598, "StructProperty"},
            {"MaxLargeSpawnGroupDiscountInterval", 0x5BC, "FloatProperty"},
            {"MaxSelectionToSpawningDelay", 0x5C0, "FloatProperty"},
            {"CurrentDesiredUtilities", 0x5D8, "ArrayProperty"},
            {"UtilityRecentSelectionPenalties", 0x5E8, "FloatProperty"},
            {"UtilityEffectivenessMeasurements", 0x628, "FloatProperty"},
            {"UtilityEffectivenessMultiplierCurve", 0x668, "StructProperty"},
            {"UtilityEffectivenessInfluenceCap", 0x678, "FloatProperty"},
            {"CurrentTopUtilityPercentages", 0x680, "ArrayProperty"},
            {"UsedTopUtilities", 0x690, "ArrayProperty"},
            {"CurrentlySelectedFreeUtilities", 0x6A0, "ArrayProperty"},
            {"NumUtilitiesConsidered", 0x6B0, "IntProperty"},
            {"ReactivityPercentage", 0x6B4, "FloatProperty"},
            {"bAdjustUtilitiesDuringRest", 0x6B8, "BoolProperty"},
            {"bDespawnAIsDuringRest", 0x6B9, "BoolProperty"},
            {"LastPlayerCombatFactorUpdateTime", 0x6BC, "FloatProperty"},
            {"LastUtilityAdjustTime", 0x6C0, "FloatProperty"},
            {"LastSpawnPointAdjustmentTime", 0x6C4, "FloatProperty"},
            {"LastLargeGroupSpawnTime", 0x6C8, "FloatProperty"},
            {"EnemySpawnData", 0x6D0, "ArrayProperty"},
            {"EncounterPIDController", 0x6E0, "StructProperty"},
            {"CurrentSpawnPointsCap", 0x748, "IntProperty"},
            {"CurrentSpawnPointsUsed", 0x74C, "IntProperty"},
            {"FailSafeMinSpawnPoints", 0x758, "IntProperty"},
            {"ActiveSpawnGroups", 0x760, "ArrayProperty"},
            {"EncounterEngagementDistance", 0x770, "FloatProperty"},
            {"MinRelevantBuildingDamagedDistance", 0x774, "FloatProperty"},
            {"MaxRelevantBuildingDamagedDistance", 0x778, "FloatProperty"},
            {"CurrentGroupSpawnPoint", 0x790, "ObjectProperty"},
            {"EncounterState", 0x798, "ByteProperty"},
            {"PacingState", 0x799, "ByteProperty"},
            {"LastPacingStateTransitionTime", 0x79C, "FloatProperty"},
            {"WaveProgressEstimate", 0x7A0, "StructProperty"},
            {"DesiredDifficultyLevel", 0x7BC, "FloatProperty"},
            {"DifficultyLevelOverride", 0x7C0, "FloatProperty"},
            {"MyAIDirector", 0x7C8, "ObjectProperty"},
            {"DataManagers", 0x7D0, "ArrayProperty"},
            {"TargetObjective", 0x7E0, "ObjectProperty"},
            {"bOnlyActiveAtNight", 0x7E8, "BoolProperty"},
            {"NumRiftsToUse", 0x7EC, "IntProperty"},
            {"MinRiftsToUse", 0x7F0, "IntProperty"},
            {"NumRiftsUsed", 0x7F4, "IntProperty"},
            {"EncounterSettings", 0x7F8, "StructProperty"},
            {"EncounterStartTime", 0x8E0, "FloatProperty"},
            {"HostilityCurveStartTime", 0x8E4, "FloatProperty"},
            {"DefaultEnvironmentQueryInfo", 0x8E8, "StructProperty"},
            {"FallbackEnvironmentQueryInfo", 0x910, "StructProperty"},
            {"OverrideEnvironmentQueryInfo", 0x938, "StructProperty"},
            {"CurrentEnvironmentQueryInfo", 0x960, "StructProperty"},
            {"bNukeWavesAtDaybreak", 0x988, "BoolProperty"},
            {"bNukeWavesAtEncounterEnd", 0x989, "BoolProperty"},
            {"bNukeWavesAtEncounterDeactivation", 0x98A, "BoolProperty"},
            {"ActiveEnemyCap", 0x98C, "IntProperty"},
            {"CurrentHostilityLevel", 0x998, "FloatProperty"},
            {"OnEncounterRampStarted", 0x9A0, "MulticastInlineDelegateProperty"},
            {"OnEncounterPeakStarted", 0x9B0, "MulticastInlineDelegateProperty"},
            {"OnEncounterFadeStarted", 0x9C0, "MulticastInlineDelegateProperty"},
            {"OnEncounterRestStarted", 0x9D0, "MulticastInlineDelegateProperty"},
            {"OnEncounterCombatParticipation", 0x9E0, "MulticastInlineDelegateProperty"},
            {"OnEncounterOptionsChanged", 0x9F0, "MulticastInlineDelegateProperty"},
            {"RiftClassTemplate", 0xA00, "ClassProperty"},
            {"ExternalAISpawners", 0xA30, "MapProperty"},
            {"EncounterQueryData", 0xA40, "StructProperty"},
            {"RiftManager", 0xA60, "ObjectProperty"},
            {"AssociatedMissionName", 0xA68, "StrProperty"},
            {"AssociatedMissionType", 0xA78, "ByteProperty"},
            {"bCanBeActive", 0xA7C, "BoolProperty"},
            {"EncounterAssignments", 0xA80, "ArrayProperty"},
            {"DefaultEncounterAssignmentSettings", 0xA90, "ObjectProperty"},
            {"MaxActiveAlive", 0xAC8, "IntProperty"},
            {"MaxSpawnPointsUsed", 0xACC, "IntProperty"},
            {"OverrideSpawnPointsCurve", 0xAD0, "ObjectProperty"},
            {"bSendFullAnalyticsReport", 0xC60, "BoolProperty"},
            {"bUseAILifespans", 0xC61, "BoolProperty"},
            {"bTrackCombatParticipation", 0xC62, "BoolProperty"},
            {"ModifierTags", 0xC68, "StructProperty"},
            {"TimedModifierTags", 0xC88, "ArrayProperty"},
            {"GameContextTags", 0xC98, "StructProperty"},
            {"AILevelMutator", 0xCB8, "ObjectProperty"},
            {"EncounterModifierTagsMutators", 0xCC0, "ArrayProperty"},
        }};
    };

    struct FortAIEncounterInfoOwnerInterface
    {
        static constexpr std::string_view Name = "FortAIEncounterInfoOwnerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAIEncounterRiftManager
    {
        static constexpr std::string_view Name = "FortAIEncounterRiftManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MyEncounter = 0x38;
            static constexpr std::uintptr_t AIDirector = 0x40;
            static constexpr std::uintptr_t CurrentSpawnArea = 0x48;
            static constexpr std::uintptr_t FutureSpawnArea = 0xA0;
            static constexpr std::uintptr_t UpdateIntervalTimeSeconds = 0xF8;
            static constexpr std::uintptr_t NumRiftsToUse = 0xFC;
            static constexpr std::uintptr_t MinRiftsToUse = 0x100;
            static constexpr std::uintptr_t EncounterSettings = 0x108;
            static constexpr std::uintptr_t ExtraSpawnLocationPercentage = 0x1F0;
            static constexpr std::uintptr_t CurrentEnvironmentQueryInfo = 0x1F8;
            static constexpr std::uintptr_t FallbackEnvironmentQueryInfo = 0x220;
            static constexpr std::uintptr_t EncounterQueryDirectionTracker = 0x248;
            static constexpr std::uintptr_t RiftClassTemplate = 0x290;
            static constexpr std::uintptr_t LastObjectiveBatchPathCostUpdateTime = 0x298;
            static constexpr std::uintptr_t LastPlayerBatchPathCostUpdateTime = 0x29C;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"MyEncounter", 0x38, "ObjectProperty"},
            {"AIDirector", 0x40, "ObjectProperty"},
            {"CurrentSpawnArea", 0x48, "StructProperty"},
            {"FutureSpawnArea", 0xA0, "StructProperty"},
            {"UpdateIntervalTimeSeconds", 0xF8, "FloatProperty"},
            {"NumRiftsToUse", 0xFC, "IntProperty"},
            {"MinRiftsToUse", 0x100, "IntProperty"},
            {"EncounterSettings", 0x108, "StructProperty"},
            {"ExtraSpawnLocationPercentage", 0x1F0, "FloatProperty"},
            {"CurrentEnvironmentQueryInfo", 0x1F8, "StructProperty"},
            {"FallbackEnvironmentQueryInfo", 0x220, "StructProperty"},
            {"EncounterQueryDirectionTracker", 0x248, "StructProperty"},
            {"RiftClassTemplate", 0x290, "ClassProperty"},
            {"LastObjectiveBatchPathCostUpdateTime", 0x298, "FloatProperty"},
            {"LastPlayerBatchPathCostUpdateTime", 0x29C, "FloatProperty"},
        }};
    };

    struct FortAIEncounterSequence
    {
        static constexpr std::string_view Name = "FortAIEncounterSequence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GeneratedEncounterSequence = 0x28;
            static constexpr std::uintptr_t CurrentEncounterIndexInSequence = 0x58;
            static constexpr std::uintptr_t CurrentEncounter = 0x60;
            static constexpr std::uintptr_t AssociatedAIDirector = 0x68;
            static constexpr std::uintptr_t AssociatedMission = 0x70;
            static constexpr std::uintptr_t TargetActors = 0x78;
            static constexpr std::uintptr_t AssignmentSettings = 0x88;
            static constexpr std::uintptr_t OverrideEnvironmentQueryInfo = 0x90;
            static constexpr std::uintptr_t OptionalQueryActor = 0xB8;
            static constexpr std::uintptr_t InjectedTags = 0xC0;
            static constexpr std::uintptr_t EncounterSettings = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"GeneratedEncounterSequence", 0x28, "StructProperty"},
            {"CurrentEncounterIndexInSequence", 0x58, "IntProperty"},
            {"CurrentEncounter", 0x60, "ObjectProperty"},
            {"AssociatedAIDirector", 0x68, "ObjectProperty"},
            {"AssociatedMission", 0x70, "ObjectProperty"},
            {"TargetActors", 0x78, "ArrayProperty"},
            {"AssignmentSettings", 0x88, "ObjectProperty"},
            {"OverrideEnvironmentQueryInfo", 0x90, "StructProperty"},
            {"OptionalQueryActor", 0xB8, "ObjectProperty"},
            {"InjectedTags", 0xC0, "StructProperty"},
            {"EncounterSettings", 0xE0, "StructProperty"},
        }};
    };

    struct FortAIEncounterTargetInterface
    {
        static constexpr std::string_view Name = "FortAIEncounterTargetInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAIEnvironmentalDangerSourceInterface
    {
        static constexpr std::string_view Name = "FortAIEnvironmentalDangerSourceInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAIFunctionLibrary
    {
        static constexpr std::string_view Name = "FortAIFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAIGoalComponent
    {
        static constexpr std::string_view Name = "FortAIGoalComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIGoalComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AssignmentUpdatePeriods = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AssignmentUpdatePeriods", 0x130, "MapProperty"},
        }};
    };

    struct FortAIGoalComponent_Manual
    {
        static constexpr std::string_view Name = "FortAIGoalComponent_Manual";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIGoalComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AssignmentUpdatePeriods = 0x130;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AssignmentUpdatePeriods", 0x130, "MapProperty"},
        }};
    };

    struct FortAIGoalManager
    {
        static constexpr std::string_view Name = "FortAIGoalManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t WorldAssignments = 0x280;
            static constexpr std::uintptr_t WorldEnemyAssignments = 0x290;
            static constexpr std::uintptr_t DefaultAttackPlayersAssignment = 0x2A0;
            static constexpr std::uintptr_t CombinedQueries = 0x2C8;
            static constexpr std::uintptr_t DefaultEncounterAssignmentSettings = 0x2E8;
            static constexpr std::uintptr_t DefaultEnemyAssignmentSettings = 0x2F0;
            static constexpr std::uintptr_t PawnGoalSelectionTable = 0x2F8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"WorldAssignments", 0x280, "ArrayProperty"},
            {"WorldEnemyAssignments", 0x290, "ArrayProperty"},
            {"DefaultAttackPlayersAssignment", 0x2A0, "ObjectProperty"},
            {"CombinedQueries", 0x2C8, "ArrayProperty"},
            {"DefaultEncounterAssignmentSettings", 0x2E8, "ObjectProperty"},
            {"DefaultEnemyAssignmentSettings", 0x2F0, "ObjectProperty"},
            {"PawnGoalSelectionTable", 0x2F8, "ArrayProperty"},
        }};
    };

    struct FortAIGoalProvider
    {
        static constexpr std::string_view Name = "FortAIGoalProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t World = 0x30;
            static constexpr std::uintptr_t AssignmentOwner = 0x38;
            static constexpr std::uintptr_t EncounterInfo = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"World", 0x30, "ObjectProperty"},
            {"AssignmentOwner", 0x38, "ObjectProperty"},
            {"EncounterInfo", 0x40, "ObjectProperty"},
        }};
    };

    struct FortAIGoalProvider_EnvQuery
    {
        static constexpr std::string_view Name = "FortAIGoalProvider_EnvQuery";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIGoalProvider";
        struct Offsets
        {
            static constexpr std::uintptr_t GoalQuery = 0x50;
            static constexpr std::uintptr_t AutomaticUpdatePeriodInSeconds = 0x58;
            static constexpr std::uintptr_t SpecificAssignmentContext = 0x60;
            static constexpr std::uintptr_t AIPawnContext = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"GoalQuery", 0x50, "ObjectProperty"},
            {"AutomaticUpdatePeriodInSeconds", 0x58, "FloatProperty"},
            {"SpecificAssignmentContext", 0x60, "StructProperty"},
            {"AIPawnContext", 0x90, "SoftClassProperty"},
        }};
    };

    struct FortAIHotSpot
    {
        static constexpr std::string_view Name = "FortAIHotSpot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIHotSpot";
        struct Offsets
        {
            static constexpr std::uintptr_t UserSlots = 0x280;
            static constexpr std::uintptr_t SlotGenerator = 0x290;
            static constexpr std::uintptr_t Slots = 0x298;
            static constexpr std::uintptr_t FocusActor = 0x2A8;
            static constexpr std::uintptr_t FilterClass = 0x2B0;
            static constexpr std::uintptr_t CustomNavmeshSearchExtent = 0x2B8;
            static constexpr std::uintptr_t bAllowClaimingMultipleSlots = 0x2D0;
            static constexpr std::uintptr_t bAllowSlotlessAssignment = 0x2D0;
            static constexpr std::uintptr_t bCustomNavmeshSearchExtent = 0x2D0;
            static constexpr std::uintptr_t bIsEnabled = 0x2D0;
            static constexpr std::uintptr_t bProjectSlotsOnNavmesh = 0x2D0;
            static constexpr std::uintptr_t bStartEnabled = 0x2D0;
            static constexpr std::uintptr_t bTrackOverlappingSlots = 0x2D0;
            static constexpr std::uintptr_t NoSlotAssignees = 0x2D8;
            static constexpr std::uintptr_t RenderingComponent = 0x350;
            static constexpr std::uintptr_t SpriteComponent = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"UserSlots", 0x280, "ArrayProperty"},
            {"SlotGenerator", 0x290, "ObjectProperty"},
            {"Slots", 0x298, "ArrayProperty"},
            {"FocusActor", 0x2A8, "ObjectProperty"},
            {"FilterClass", 0x2B0, "ClassProperty"},
            {"CustomNavmeshSearchExtent", 0x2B8, "StructProperty"},
            {"bAllowClaimingMultipleSlots", 0x2D0, "BoolProperty"},
            {"bAllowSlotlessAssignment", 0x2D0, "BoolProperty"},
            {"bCustomNavmeshSearchExtent", 0x2D0, "BoolProperty"},
            {"bIsEnabled", 0x2D0, "BoolProperty"},
            {"bProjectSlotsOnNavmesh", 0x2D0, "BoolProperty"},
            {"bStartEnabled", 0x2D0, "BoolProperty"},
            {"bTrackOverlappingSlots", 0x2D0, "BoolProperty"},
            {"NoSlotAssignees", 0x2D8, "ArrayProperty"},
            {"RenderingComponent", 0x350, "ObjectProperty"},
            {"SpriteComponent", 0x358, "ObjectProperty"},
        }};
    };

    struct FortAIHotSpotManager
    {
        static constexpr std::string_view Name = "FortAIHotSpotManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIHotSpotManagerProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t FallbackHotspotConfig = 0x40;
            static constexpr std::uintptr_t AutoAcquireSlots = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FallbackHotspotConfig", 0x40, "SoftObjectProperty"},
            {"AutoAcquireSlots", 0x90, "ArrayProperty"},
        }};
    };

    struct FortAIHotSpotSlot
    {
        static constexpr std::string_view Name = "FortAIHotSpotSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIHotSpotSlot";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotType = 0x120;
            static constexpr std::uintptr_t bCanDuplicateOnProjection = 0x124;
            static constexpr std::uintptr_t bCanProjectUp = 0x124;
            static constexpr std::uintptr_t bHasProjectedLocation = 0x124;
            static constexpr std::uintptr_t bIsAutoGenerated = 0x124;
            static constexpr std::uintptr_t bProjectedOnLowArea = 0x124;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SlotType", 0x120, "EnumProperty"},
            {"bCanDuplicateOnProjection", 0x124, "BoolProperty"},
            {"bCanProjectUp", 0x124, "BoolProperty"},
            {"bHasProjectedLocation", 0x124, "BoolProperty"},
            {"bIsAutoGenerated", 0x124, "BoolProperty"},
            {"bProjectedOnLowArea", 0x124, "BoolProperty"},
        }};
    };

    struct FortAIHotSpotSlotGenerator_FromConfig
    {
        static constexpr std::string_view Name = "FortAIHotSpotSlotGenerator_FromConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIHotSpotSlotGenerator";
        struct Offsets
        {
            static constexpr std::uintptr_t BuildingConfig = 0x28;
            static constexpr std::uintptr_t Offset = 0x30;
            static constexpr std::uintptr_t bMirrorX = 0x48;
            static constexpr std::uintptr_t bMirrorY = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BuildingConfig", 0x28, "ObjectProperty"},
            {"Offset", 0x30, "StructProperty"},
            {"bMirrorX", 0x48, "BoolProperty"},
            {"bMirrorY", 0x48, "BoolProperty"},
        }};
    };

    struct FortAIHotSpotSlotGenerator_OnBoundingBox
    {
        static constexpr std::string_view Name = "FortAIHotSpotSlotGenerator_OnBoundingBox";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIHotSpotSlotGenerator_OnBoundingBox";
        struct Offsets
        {
            static constexpr std::uintptr_t DistanceForRangedSlots = 0x98;
            static constexpr std::uintptr_t DistanceForHugeSlots = 0x9C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DistanceForRangedSlots", 0x98, "FloatProperty"},
            {"DistanceForHugeSlots", 0x9C, "FloatProperty"},
        }};
    };

    struct FortAIHotSpotSlotGenerator_RampTrace
    {
        static constexpr std::string_view Name = "FortAIHotSpotSlotGenerator_RampTrace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIHotSpotSlotGenerator";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAIHotSpot_Building
    {
        static constexpr std::string_view Name = "FortAIHotSpot_Building";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIHotSpot";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtraTypeConfig = 0x3A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExtraTypeConfig", 0x3A0, "ObjectProperty"},
        }};
    };

    struct FortAIHotSpot_FakeBuilding
    {
        static constexpr std::string_view Name = "FortAIHotSpot_FakeBuilding";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIHotSpot";
        struct Offsets
        {
            static constexpr std::uintptr_t UserSlots = 0x280;
            static constexpr std::uintptr_t SlotGenerator = 0x290;
            static constexpr std::uintptr_t Slots = 0x298;
            static constexpr std::uintptr_t FocusActor = 0x2A8;
            static constexpr std::uintptr_t FilterClass = 0x2B0;
            static constexpr std::uintptr_t CustomNavmeshSearchExtent = 0x2B8;
            static constexpr std::uintptr_t bAllowClaimingMultipleSlots = 0x2D0;
            static constexpr std::uintptr_t bAllowSlotlessAssignment = 0x2D0;
            static constexpr std::uintptr_t bCustomNavmeshSearchExtent = 0x2D0;
            static constexpr std::uintptr_t bIsEnabled = 0x2D0;
            static constexpr std::uintptr_t bProjectSlotsOnNavmesh = 0x2D0;
            static constexpr std::uintptr_t bStartEnabled = 0x2D0;
            static constexpr std::uintptr_t bTrackOverlappingSlots = 0x2D0;
            static constexpr std::uintptr_t NoSlotAssignees = 0x2D8;
            static constexpr std::uintptr_t RenderingComponent = 0x350;
            static constexpr std::uintptr_t SpriteComponent = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"UserSlots", 0x280, "ArrayProperty"},
            {"SlotGenerator", 0x290, "ObjectProperty"},
            {"Slots", 0x298, "ArrayProperty"},
            {"FocusActor", 0x2A8, "ObjectProperty"},
            {"FilterClass", 0x2B0, "ClassProperty"},
            {"CustomNavmeshSearchExtent", 0x2B8, "StructProperty"},
            {"bAllowClaimingMultipleSlots", 0x2D0, "BoolProperty"},
            {"bAllowSlotlessAssignment", 0x2D0, "BoolProperty"},
            {"bCustomNavmeshSearchExtent", 0x2D0, "BoolProperty"},
            {"bIsEnabled", 0x2D0, "BoolProperty"},
            {"bProjectSlotsOnNavmesh", 0x2D0, "BoolProperty"},
            {"bStartEnabled", 0x2D0, "BoolProperty"},
            {"bTrackOverlappingSlots", 0x2D0, "BoolProperty"},
            {"NoSlotAssignees", 0x2D8, "ArrayProperty"},
            {"RenderingComponent", 0x350, "ObjectProperty"},
            {"SpriteComponent", 0x358, "ObjectProperty"},
        }};
    };

    struct FortAIHotSpot_Shooting
    {
        static constexpr std::string_view Name = "FortAIHotSpot_Shooting";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIHotSpot";
        struct Offsets
        {
            static constexpr std::uintptr_t UserSlots = 0x280;
            static constexpr std::uintptr_t SlotGenerator = 0x290;
            static constexpr std::uintptr_t Slots = 0x298;
            static constexpr std::uintptr_t FocusActor = 0x2A8;
            static constexpr std::uintptr_t FilterClass = 0x2B0;
            static constexpr std::uintptr_t CustomNavmeshSearchExtent = 0x2B8;
            static constexpr std::uintptr_t bAllowClaimingMultipleSlots = 0x2D0;
            static constexpr std::uintptr_t bAllowSlotlessAssignment = 0x2D0;
            static constexpr std::uintptr_t bCustomNavmeshSearchExtent = 0x2D0;
            static constexpr std::uintptr_t bIsEnabled = 0x2D0;
            static constexpr std::uintptr_t bProjectSlotsOnNavmesh = 0x2D0;
            static constexpr std::uintptr_t bStartEnabled = 0x2D0;
            static constexpr std::uintptr_t bTrackOverlappingSlots = 0x2D0;
            static constexpr std::uintptr_t NoSlotAssignees = 0x2D8;
            static constexpr std::uintptr_t RenderingComponent = 0x350;
            static constexpr std::uintptr_t SpriteComponent = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"UserSlots", 0x280, "ArrayProperty"},
            {"SlotGenerator", 0x290, "ObjectProperty"},
            {"Slots", 0x298, "ArrayProperty"},
            {"FocusActor", 0x2A8, "ObjectProperty"},
            {"FilterClass", 0x2B0, "ClassProperty"},
            {"CustomNavmeshSearchExtent", 0x2B8, "StructProperty"},
            {"bAllowClaimingMultipleSlots", 0x2D0, "BoolProperty"},
            {"bAllowSlotlessAssignment", 0x2D0, "BoolProperty"},
            {"bCustomNavmeshSearchExtent", 0x2D0, "BoolProperty"},
            {"bIsEnabled", 0x2D0, "BoolProperty"},
            {"bProjectSlotsOnNavmesh", 0x2D0, "BoolProperty"},
            {"bStartEnabled", 0x2D0, "BoolProperty"},
            {"bTrackOverlappingSlots", 0x2D0, "BoolProperty"},
            {"NoSlotAssignees", 0x2D8, "ArrayProperty"},
            {"RenderingComponent", 0x350, "ObjectProperty"},
            {"SpriteComponent", 0x358, "ObjectProperty"},
        }};
    };

    struct FortAIInjectedActionStateTreeSchema
    {
        static constexpr std::string_view Name = "FortAIInjectedActionStateTreeSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIInjectedStateTreeSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t InjectedItemClass = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InjectedItemClass", 0x48, "ClassProperty"},
        }};
    };

    struct FortAIInjectedBehaviorComponent
    {
        static constexpr std::string_view Name = "FortAIInjectedBehaviorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InjectorsRuntimeData = 0xC8;
            static constexpr std::uintptr_t InstanceInjectedBehaviors = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InjectorsRuntimeData", 0xC8, "MapProperty"},
            {"InstanceInjectedBehaviors", 0xD8, "ArrayProperty"},
        }};
    };

    struct FortAIInjectedDecisionStateTreeSchema
    {
        static constexpr std::string_view Name = "FortAIInjectedDecisionStateTreeSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIInjectedStateTreeSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t InjectedItemClass = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InjectedItemClass", 0x48, "ClassProperty"},
        }};
    };

    struct FortAIInjectedStateTreeSchema
    {
        static constexpr std::string_view Name = "FortAIInjectedStateTreeSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIStateTreeSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t InjectedItemClass = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"InjectedItemClass", 0x48, "ClassProperty"},
        }};
    };

    struct FortAIManagerMinigameComponent
    {
        static constexpr std::string_view Name = "FortAIManagerMinigameComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnableAITypeTags = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpawnableAITypeTags", 0xE8, "ArrayProperty"},
        }};
    };

    struct FortAIModifier
    {
        static constexpr std::string_view Name = "FortAIModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Owner", 0x28, "ObjectProperty"},
        }};
    };

    struct FortAIModifierComponent
    {
        static constexpr std::string_view Name = "FortAIModifierComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Modifiers = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Modifiers", 0xC8, "ArrayProperty"},
        }};
    };

    struct FortAIMovementModifierBase
    {
        static constexpr std::string_view Name = "FortAIMovementModifierBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIBotModifierBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BotController = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BotController", 0x30, "ObjectProperty"},
        }};
    };

    struct FortAINavInvokerComponent
    {
        static constexpr std::string_view Name = "FortAINavInvokerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavigationInvokerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bDestroyComponentIfUGCNavMeshOnDemandIsDisabled = 0xD0;
            static constexpr std::uintptr_t bEnableAutomaticNavMeshAssignation = 0xD0;
            static constexpr std::uintptr_t bSkipAgentHeightCheckWhenPickingNavData = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bDestroyComponentIfUGCNavMeshOnDemandIsDisabled", 0xD0, "BoolProperty"},
            {"bEnableAutomaticNavMeshAssignation", 0xD0, "BoolProperty"},
            {"bSkipAgentHeightCheckWhenPickingNavData", 0xD0, "BoolProperty"},
        }};
    };

    struct FortAINearbyActorsPerceptionComponent
    {
        static constexpr std::string_view Name = "FortAINearbyActorsPerceptionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNearbyActorsPerceptionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedLODSettingsManager = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedLODSettingsManager", 0x118, "InterfaceProperty"},
        }};
    };

    struct FortAIObjectiveInterface
    {
        static constexpr std::string_view Name = "FortAIObjectiveInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAIPawnCustomizationDefinition
    {
        static constexpr std::string_view Name = "FortAIPawnCustomizationDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SkeletalMesh = 0x30;
            static constexpr std::uintptr_t AssembledMeshSchema = 0x50;
            static constexpr std::uintptr_t CharacterBlueprint = 0x70;
            static constexpr std::uintptr_t AnimPreset = 0x90;
            static constexpr std::uintptr_t IKRetargeter = 0xB0;
            static constexpr std::uintptr_t OverrideMaterials = 0xD0;
            static constexpr std::uintptr_t AnimationBP = 0xE0;
            static constexpr std::uintptr_t CharacterParts = 0x100;
            static constexpr std::uintptr_t MarkerIconOverride = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"SkeletalMesh", 0x30, "SoftObjectProperty"},
            {"AssembledMeshSchema", 0x50, "SoftObjectProperty"},
            {"CharacterBlueprint", 0x70, "SoftClassProperty"},
            {"AnimPreset", 0x90, "SoftClassProperty"},
            {"IKRetargeter", 0xB0, "SoftObjectProperty"},
            {"OverrideMaterials", 0xD0, "ArrayProperty"},
            {"AnimationBP", 0xE0, "SoftClassProperty"},
            {"CharacterParts", 0x100, "ArrayProperty"},
            {"MarkerIconOverride", 0x110, "SoftObjectProperty"},
        }};
    };

    struct FortAIPawnSmartObjectUserComponent
    {
        static constexpr std::string_view Name = "FortAIPawnSmartObjectUserComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAISmartObjectUserComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseRunningEvaluationTickInterval = 0x1A0;
            static constexpr std::uintptr_t RunningEvaluationTickIntervalVariation = 0x1A4;
            static constexpr std::uintptr_t AnimConfigTable = 0x1A8;
            static constexpr std::uintptr_t MaximumSoftAbortTime = 0x1B0;
            static constexpr std::uintptr_t bHandleHolstering = 0x1D8;
            static constexpr std::uintptr_t AllowedTagsForWeaponUsageWhileUsingSO = 0x1E0;
            static constexpr std::uintptr_t bLoadingAnimConfigAssets = 0x200;
            static constexpr std::uintptr_t RunningQueryInternalData = 0x218;
            static constexpr std::uintptr_t ResultsPerEvaluationTag = 0x2D0;
            static constexpr std::uintptr_t SmartObjectsBannedList = 0x2E0;
            static constexpr std::uintptr_t GlobalDelayToDisableSmartObjectUsage = 0x2F0;
            static constexpr std::uintptr_t SmartObjectsMostRecentlyUsed = 0x2F8;
            static constexpr std::uintptr_t SmartObjectActivities = 0x308;
            static constexpr std::uintptr_t ActivitiesIDCount = 0x318;
            static constexpr std::uintptr_t ActiveCommandSOUsageData = 0x31C;
            static constexpr std::uintptr_t RunningSmartObjectComponent = 0x32C;
            static constexpr std::uintptr_t CachedLODSettingsManager = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"BaseRunningEvaluationTickInterval", 0x1A0, "FloatProperty"},
            {"RunningEvaluationTickIntervalVariation", 0x1A4, "FloatProperty"},
            {"AnimConfigTable", 0x1A8, "ObjectProperty"},
            {"MaximumSoftAbortTime", 0x1B0, "StructProperty"},
            {"bHandleHolstering", 0x1D8, "BoolProperty"},
            {"AllowedTagsForWeaponUsageWhileUsingSO", 0x1E0, "StructProperty"},
            {"bLoadingAnimConfigAssets", 0x200, "BoolProperty"},
            {"RunningQueryInternalData", 0x218, "StructProperty"},
            {"ResultsPerEvaluationTag", 0x2D0, "MapProperty"},
            {"SmartObjectsBannedList", 0x2E0, "ArrayProperty"},
            {"GlobalDelayToDisableSmartObjectUsage", 0x2F0, "FloatProperty"},
            {"SmartObjectsMostRecentlyUsed", 0x2F8, "ArrayProperty"},
            {"SmartObjectActivities", 0x308, "ArrayProperty"},
            {"ActivitiesIDCount", 0x318, "IntProperty"},
            {"ActiveCommandSOUsageData", 0x31C, "StructProperty"},
            {"RunningSmartObjectComponent", 0x32C, "WeakObjectProperty"},
            {"CachedLODSettingsManager", 0x338, "InterfaceProperty"},
        }};
    };

    struct FortAIPawnVariant
    {
        static constexpr std::string_view Name = "FortAIPawnVariant";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PawnClasses = 0x28;
            static constexpr std::uintptr_t PawnVariantDefinitions = 0x38;
            static constexpr std::uintptr_t MinPlayersToSpawnVariant = 0x48;
            static constexpr std::uintptr_t SpawnPointValueHandle = 0x50;
            static constexpr std::uintptr_t CachedSpawnPointValue = 0x60;
            static constexpr std::uintptr_t EncounterExpectedLifespan = 0x64;
            static constexpr std::uintptr_t VersionNum = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"PawnClasses", 0x28, "ArrayProperty"},
            {"PawnVariantDefinitions", 0x38, "ArrayProperty"},
            {"MinPlayersToSpawnVariant", 0x48, "IntProperty"},
            {"SpawnPointValueHandle", 0x50, "StructProperty"},
            {"CachedSpawnPointValue", 0x60, "IntProperty"},
            {"EncounterExpectedLifespan", 0x64, "FloatProperty"},
            {"VersionNum", 0x68, "IntProperty"},
        }};
    };

    struct FortAIPerceptionComponent
    {
        static constexpr std::string_view Name = "FortAIPerceptionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIPerceptionComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LosingSightRadiusBump = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"LosingSightRadiusBump", 0x190, "FloatProperty"},
        }};
    };

    struct FortAIPerceptionSystem
    {
        static constexpr std::string_view Name = "FortAIPerceptionSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIPerceptionSystem";
        struct Offsets
        {
            static constexpr std::uintptr_t Senses = 0x48;
            static constexpr std::uintptr_t PerceptionAgingRate = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Senses", 0x48, "ArrayProperty"},
            {"PerceptionAgingRate", 0x58, "FloatProperty"},
        }};
    };

    struct FortAIPerfectSightVolume
    {
        static constexpr std::string_view Name = "FortAIPerfectSightVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Volume";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerPawnsInZone = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PlayerPawnsInZone", 0x2B0, "ArrayProperty"},
        }};
    };

    struct FortAIPerkBase
    {
        static constexpr std::string_view Name = "FortAIPerkBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CooldownDuration = 0x28;
            static constexpr std::uintptr_t CooldownDurationRandomDeviation = 0x50;
            static constexpr std::uintptr_t ActivationCountBeforeCooldown = 0x78;
            static constexpr std::uintptr_t ActivationDuration = 0xA0;
            static constexpr std::uintptr_t ActivationDurationRandomDeviation = 0xC8;
            static constexpr std::uintptr_t OddsToActivate = 0xF0;
            static constexpr std::uintptr_t FailedActivationCooldownDuration = 0x118;
            static constexpr std::uintptr_t FailedActivationCooldownDurationRandomDeviation = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CooldownDuration", 0x28, "StructProperty"},
            {"CooldownDurationRandomDeviation", 0x50, "StructProperty"},
            {"ActivationCountBeforeCooldown", 0x78, "StructProperty"},
            {"ActivationDuration", 0xA0, "StructProperty"},
            {"ActivationDurationRandomDeviation", 0xC8, "StructProperty"},
            {"OddsToActivate", 0xF0, "StructProperty"},
            {"FailedActivationCooldownDuration", 0x118, "StructProperty"},
            {"FailedActivationCooldownDurationRandomDeviation", 0x140, "StructProperty"},
        }};
    };

    struct FortAIQuestsModifierBase
    {
        static constexpr std::string_view Name = "FortAIQuestsModifierBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIBotModifierBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TransientQuestsComp = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TransientQuestsComp", 0x38, "ObjectProperty"},
        }};
    };

    struct FortAIRootAssignmentProviderInterface
    {
        static constexpr std::string_view Name = "FortAIRootAssignmentProviderInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAISafeZoneModifierBase
    {
        static constexpr std::string_view Name = "FortAISafeZoneModifierBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIBotModifierBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BRLogicComp = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BRLogicComp", 0x38, "ObjectProperty"},
        }};
    };

    struct FortAISenseConfig_Hearing
    {
        static constexpr std::string_view Name = "FortAISenseConfig_Hearing";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISenseConfig_Hearing";
        struct Offsets
        {
            static constexpr std::uintptr_t bIgnoreNeutralFootsteps = 0x60;
            static constexpr std::uintptr_t bListenExtendedFootsteps = 0x61;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIgnoreNeutralFootsteps", 0x60, "BoolProperty"},
            {"bListenExtendedFootsteps", 0x61, "BoolProperty"},
        }};
    };

    struct FortAISenseConfig_Sight
    {
        static constexpr std::string_view Name = "FortAISenseConfig_Sight";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISenseConfig_Sight";
        struct Offsets
        {
            static constexpr std::uintptr_t bUsePerfectSightVolumes = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bUsePerfectSightVolumes", 0x70, "BoolProperty"},
        }};
    };

    struct FortAISense_Sight
    {
        static constexpr std::string_view Name = "FortAISense_Sight";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISense_Sight";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxTracesPerTick = 0xD0;
            static constexpr std::uintptr_t MaxAsyncTracesPerTick = 0xD4;
            static constexpr std::uintptr_t MinQueriesPerTimeSliceCheck = 0xD8;
            static constexpr std::uintptr_t MaxTimeSlicePerTick = 0xE0;
            static constexpr std::uintptr_t HighImportanceQueryDistanceThreshold = 0xE8;
            static constexpr std::uintptr_t MaxQueryImportance = 0xF0;
            static constexpr std::uintptr_t SightLimitQueryImportance = 0xF4;
            static constexpr std::uintptr_t PendingQueriesBudgetReductionRatio = 0xF8;
            static constexpr std::uintptr_t bUseAsynchronousTraceForDefaultSightQueries = 0xFC;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"MaxTracesPerTick", 0xD0, "IntProperty"},
            {"MaxAsyncTracesPerTick", 0xD4, "IntProperty"},
            {"MinQueriesPerTimeSliceCheck", 0xD8, "IntProperty"},
            {"MaxTimeSlicePerTick", 0xE0, "DoubleProperty"},
            {"HighImportanceQueryDistanceThreshold", 0xE8, "FloatProperty"},
            {"MaxQueryImportance", 0xF0, "FloatProperty"},
            {"SightLimitQueryImportance", 0xF4, "FloatProperty"},
            {"PendingQueriesBudgetReductionRatio", 0xF8, "FloatProperty"},
            {"bUseAsynchronousTraceForDefaultSightQueries", 0xFC, "BoolProperty"},
        }};
    };

    struct FortAIServiceDefendSpots
    {
        static constexpr std::string_view Name = "FortAIServiceDefendSpots";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaAIService";
        struct Offsets
        {
            static constexpr std::uintptr_t OctreeOrigin = 0x98;
            static constexpr std::uintptr_t OctreeRadius = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OctreeOrigin", 0x98, "StructProperty"},
            {"OctreeRadius", 0xB0, "StructProperty"},
        }};
    };

    struct FortAIServiceModifier
    {
        static constexpr std::string_view Name = "FortAIServiceModifier";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAIServiceModifierPlayerBots
    {
        static constexpr std::string_view Name = "FortAIServiceModifierPlayerBots";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIServiceModifier";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAISmartObjectAnimWorldConditionSchema
    {
        static constexpr std::string_view Name = "FortAISmartObjectAnimWorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct FortAISmartObjectUserComponent
    {
        static constexpr std::string_view Name = "FortAISmartObjectUserComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortSmartObjectUserComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BaseRunningEvaluationTickInterval = 0x1A0;
            static constexpr std::uintptr_t RunningEvaluationTickIntervalVariation = 0x1A4;
            static constexpr std::uintptr_t AnimConfigTable = 0x1A8;
            static constexpr std::uintptr_t MaximumSoftAbortTime = 0x1B0;
            static constexpr std::uintptr_t bHandleHolstering = 0x1D8;
            static constexpr std::uintptr_t AllowedTagsForWeaponUsageWhileUsingSO = 0x1E0;
            static constexpr std::uintptr_t bLoadingAnimConfigAssets = 0x200;
            static constexpr std::uintptr_t RunningQueryInternalData = 0x218;
            static constexpr std::uintptr_t ResultsPerEvaluationTag = 0x2D0;
            static constexpr std::uintptr_t SmartObjectsBannedList = 0x2E0;
            static constexpr std::uintptr_t GlobalDelayToDisableSmartObjectUsage = 0x2F0;
            static constexpr std::uintptr_t SmartObjectsMostRecentlyUsed = 0x2F8;
            static constexpr std::uintptr_t SmartObjectActivities = 0x308;
            static constexpr std::uintptr_t ActivitiesIDCount = 0x318;
            static constexpr std::uintptr_t ActiveCommandSOUsageData = 0x31C;
            static constexpr std::uintptr_t RunningSmartObjectComponent = 0x32C;
            static constexpr std::uintptr_t CachedLODSettingsManager = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"BaseRunningEvaluationTickInterval", 0x1A0, "FloatProperty"},
            {"RunningEvaluationTickIntervalVariation", 0x1A4, "FloatProperty"},
            {"AnimConfigTable", 0x1A8, "ObjectProperty"},
            {"MaximumSoftAbortTime", 0x1B0, "StructProperty"},
            {"bHandleHolstering", 0x1D8, "BoolProperty"},
            {"AllowedTagsForWeaponUsageWhileUsingSO", 0x1E0, "StructProperty"},
            {"bLoadingAnimConfigAssets", 0x200, "BoolProperty"},
            {"RunningQueryInternalData", 0x218, "StructProperty"},
            {"ResultsPerEvaluationTag", 0x2D0, "MapProperty"},
            {"SmartObjectsBannedList", 0x2E0, "ArrayProperty"},
            {"GlobalDelayToDisableSmartObjectUsage", 0x2F0, "FloatProperty"},
            {"SmartObjectsMostRecentlyUsed", 0x2F8, "ArrayProperty"},
            {"SmartObjectActivities", 0x308, "ArrayProperty"},
            {"ActivitiesIDCount", 0x318, "IntProperty"},
            {"ActiveCommandSOUsageData", 0x31C, "StructProperty"},
            {"RunningSmartObjectComponent", 0x32C, "WeakObjectProperty"},
            {"CachedLODSettingsManager", 0x338, "InterfaceProperty"},
        }};
    };

    struct FortAISpawnGroup
    {
        static constexpr std::string_view Name = "FortAISpawnGroup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t EnemyUtilities = 0x28;
            static constexpr std::uintptr_t EnemiesToSpawn = 0x68;
            static constexpr std::uintptr_t bIsPrototype = 0x78;
            static constexpr std::uintptr_t bIsValidForEnemySpawners = 0x79;
            static constexpr std::uintptr_t bIsLargeSpawnGroup = 0x7A;
            static constexpr std::uintptr_t MaxDiscountRatio = 0x7C;
            static constexpr std::uintptr_t bUseWeightSystem = 0x80;
            static constexpr std::uintptr_t Weight = 0x88;
            static constexpr std::uintptr_t MinNumber = 0xB0;
            static constexpr std::uintptr_t MaxNumber = 0xD8;
            static constexpr std::uintptr_t MaxGroupCategoryPopulationDensityCurve = 0x100;
            static constexpr std::uintptr_t EncounterTypeData = 0x110;
            static constexpr std::uintptr_t SpawnGroupGameplayTags = 0x120;
            static constexpr std::uintptr_t RequiredTagQuery = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"EnemyUtilities", 0x28, "FloatProperty"},
            {"EnemiesToSpawn", 0x68, "ArrayProperty"},
            {"bIsPrototype", 0x78, "BoolProperty"},
            {"bIsValidForEnemySpawners", 0x79, "BoolProperty"},
            {"bIsLargeSpawnGroup", 0x7A, "BoolProperty"},
            {"MaxDiscountRatio", 0x7C, "FloatProperty"},
            {"bUseWeightSystem", 0x80, "BoolProperty"},
            {"Weight", 0x88, "StructProperty"},
            {"MinNumber", 0xB0, "StructProperty"},
            {"MaxNumber", 0xD8, "StructProperty"},
            {"MaxGroupCategoryPopulationDensityCurve", 0x100, "StructProperty"},
            {"EncounterTypeData", 0x110, "ArrayProperty"},
            {"SpawnGroupGameplayTags", 0x120, "StructProperty"},
            {"RequiredTagQuery", 0x140, "StructProperty"},
        }};
    };

    struct FortAISpawnGroupCapsCategorySet
    {
        static constexpr std::string_view Name = "FortAISpawnGroupCapsCategorySet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnGroupCapsCategories = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpawnGroupCapsCategories", 0x28, "ArrayProperty"},
        }};
    };

    struct FortAISpawnGroupProgressionInfo
    {
        static constexpr std::string_view Name = "FortAISpawnGroupProgressionInfo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnGroups = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpawnGroups", 0x28, "ArrayProperty"},
        }};
    };

    struct FortAISpawnGroupUpgrade
    {
        static constexpr std::string_view Name = "FortAISpawnGroupUpgrade";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t UpgradeTags = 0x28;
            static constexpr std::uintptr_t GroupRequiredTagQuery = 0x48;
            static constexpr std::uintptr_t BasePawnUpgrades = 0x90;
            static constexpr std::uintptr_t AdditionalModifiersLootTierGroup = 0xA0;
            static constexpr std::uintptr_t bInvalidForEnemySpawners = 0xA4;
            static constexpr std::uintptr_t SpawnGroupDiscountPercentage = 0xA8;
            static constexpr std::uintptr_t UIData = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"UpgradeTags", 0x28, "StructProperty"},
            {"GroupRequiredTagQuery", 0x48, "StructProperty"},
            {"BasePawnUpgrades", 0x90, "ArrayProperty"},
            {"AdditionalModifiersLootTierGroup", 0xA0, "NameProperty"},
            {"bInvalidForEnemySpawners", 0xA4, "BoolProperty"},
            {"SpawnGroupDiscountPercentage", 0xA8, "FloatProperty"},
            {"UIData", 0xB0, "StructProperty"},
        }};
    };

    struct FortAISpawnGroupUpgradeProbabilities
    {
        static constexpr std::string_view Name = "FortAISpawnGroupUpgradeProbabilities";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bIsGuaranteedUpgrade = 0x28;
            static constexpr std::uintptr_t UpgradeProbabilities = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bIsGuaranteedUpgrade", 0x28, "BoolProperty"},
            {"UpgradeProbabilities", 0x30, "ArrayProperty"},
        }};
    };

    struct FortAISpawnerActorBase
    {
        static constexpr std::string_view Name = "FortAISpawnerActorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryActorTick = 0x28;
            static constexpr std::uintptr_t bAlwaysRelevant = 0x58;
            static constexpr std::uintptr_t bCallPreReplication = 0x58;
            static constexpr std::uintptr_t bCallPreReplicationForReplay = 0x58;
            static constexpr std::uintptr_t bHidden = 0x58;
            static constexpr std::uintptr_t bNetTemporary = 0x58;
            static constexpr std::uintptr_t bOnlyRelevantToOwner = 0x58;
            static constexpr std::uintptr_t bReplicateMovement = 0x58;
            static constexpr std::uintptr_t bExchangedRoles = 0x59;
            static constexpr std::uintptr_t bForceNetAddressable = 0x59;
            static constexpr std::uintptr_t bNetLoadOnClient = 0x59;
            static constexpr std::uintptr_t bNetUseOwnerRelevancy = 0x59;
            static constexpr std::uintptr_t bRelevantForLevelBounds = 0x59;
            static constexpr std::uintptr_t bRelevantForNetworkReplays = 0x59;
            static constexpr std::uintptr_t bReplayRewindable = 0x59;
            static constexpr std::uintptr_t bTearOff = 0x59;
            static constexpr std::uintptr_t bAllowTickBeforeBeginPlay = 0x5A;
            static constexpr std::uintptr_t bAutoDestroyWhenFinished = 0x5A;
            static constexpr std::uintptr_t bBlockInput = 0x5A;
            static constexpr std::uintptr_t bCanBeDamaged = 0x5A;
            static constexpr std::uintptr_t bCollideWhenPlacing = 0x5A;
            static constexpr std::uintptr_t bFindCameraComponentWhenViewTarget = 0x5A;
            static constexpr std::uintptr_t bGenerateOverlapEventsDuringLevelStreaming = 0x5A;
            static constexpr std::uintptr_t bIgnoresOriginShifting = 0x5A;
            static constexpr std::uintptr_t bAllowReceiveTickEventOnDedicatedServer = 0x5B;
            static constexpr std::uintptr_t bCanBeInCluster = 0x5B;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x5B;
            static constexpr std::uintptr_t bIsEditorOnlyActor = 0x5B;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x5B;
            static constexpr std::uintptr_t bReplicates = 0x5B;
            static constexpr std::uintptr_t bActorEnableCollision = 0x5D;
            static constexpr std::uintptr_t bActorIsBeingDestroyed = 0x5D;
            static constexpr std::uintptr_t bAsyncPhysicsTickEnabled = 0x5D;
            static constexpr std::uintptr_t UpdateOverlapsMethodDuringLevelStreaming = 0x5E;
            static constexpr std::uintptr_t DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5F;
            static constexpr std::uintptr_t RemoteRole = 0x60;
            static constexpr std::uintptr_t InitialLifeSpan = 0x64;
            static constexpr std::uintptr_t CustomTimeDilation = 0x68;
            static constexpr std::uintptr_t RayTracingGroupId = 0x6C;
            static constexpr std::uintptr_t AttachmentReplication = 0x70;
            static constexpr std::uintptr_t ReplicatedMovement = 0xD0;
            static constexpr std::uintptr_t Owner = 0x158;
            static constexpr std::uintptr_t NetDriverName = 0x160;
            static constexpr std::uintptr_t Role = 0x164;
            static constexpr std::uintptr_t NetDormancy = 0x165;
            static constexpr std::uintptr_t SpawnCollisionHandlingMethod = 0x166;
            static constexpr std::uintptr_t AutoReceiveInput = 0x167;
            static constexpr std::uintptr_t InputPriority = 0x168;
            static constexpr std::uintptr_t InputComponent = 0x170;
            static constexpr std::uintptr_t NetTag = 0x178;
            static constexpr std::uintptr_t NetCullDistanceSquared = 0x17C;
            static constexpr std::uintptr_t NetUpdateFrequency = 0x180;
            static constexpr std::uintptr_t MinNetUpdateFrequency = 0x184;
            static constexpr std::uintptr_t NetPriority = 0x188;
            static constexpr std::uintptr_t PhysicsReplicationMode = 0x18C;
            static constexpr std::uintptr_t Instigator = 0x198;
            static constexpr std::uintptr_t Children = 0x1A0;
            static constexpr std::uintptr_t RootComponent = 0x1B0;
            static constexpr std::uintptr_t HLODLayer = 0x1C8;
            static constexpr std::uintptr_t Layers = 0x1D0;
            static constexpr std::uintptr_t ParentComponent = 0x1E0;
            static constexpr std::uintptr_t Tags = 0x1F8;
            static constexpr std::uintptr_t OnTakeAnyDamage = 0x208;
            static constexpr std::uintptr_t OnTakePointDamage = 0x209;
            static constexpr std::uintptr_t OnTakeRadialDamage = 0x20A;
            static constexpr std::uintptr_t OnActorBeginOverlap = 0x20B;
            static constexpr std::uintptr_t OnActorEndOverlap = 0x20C;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x20D;
            static constexpr std::uintptr_t OnEndCursorOver = 0x20E;
            static constexpr std::uintptr_t OnClicked = 0x20F;
            static constexpr std::uintptr_t OnReleased = 0x210;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x211;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x212;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x213;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x214;
            static constexpr std::uintptr_t OnActorHit = 0x215;
            static constexpr std::uintptr_t OnDestroyed = 0x216;
            static constexpr std::uintptr_t OnEndPlay = 0x217;
            static constexpr std::uintptr_t InstanceComponents = 0x258;
            static constexpr std::uintptr_t BlueprintCreatedComponents = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 80> Properties{{
            {"PrimaryActorTick", 0x28, "StructProperty"},
            {"bAlwaysRelevant", 0x58, "BoolProperty"},
            {"bCallPreReplication", 0x58, "BoolProperty"},
            {"bCallPreReplicationForReplay", 0x58, "BoolProperty"},
            {"bHidden", 0x58, "BoolProperty"},
            {"bNetTemporary", 0x58, "BoolProperty"},
            {"bOnlyRelevantToOwner", 0x58, "BoolProperty"},
            {"bReplicateMovement", 0x58, "BoolProperty"},
            {"bExchangedRoles", 0x59, "BoolProperty"},
            {"bForceNetAddressable", 0x59, "BoolProperty"},
            {"bNetLoadOnClient", 0x59, "BoolProperty"},
            {"bNetUseOwnerRelevancy", 0x59, "BoolProperty"},
            {"bRelevantForLevelBounds", 0x59, "BoolProperty"},
            {"bRelevantForNetworkReplays", 0x59, "BoolProperty"},
            {"bReplayRewindable", 0x59, "BoolProperty"},
            {"bTearOff", 0x59, "BoolProperty"},
            {"bAllowTickBeforeBeginPlay", 0x5A, "BoolProperty"},
            {"bAutoDestroyWhenFinished", 0x5A, "BoolProperty"},
            {"bBlockInput", 0x5A, "BoolProperty"},
            {"bCanBeDamaged", 0x5A, "BoolProperty"},
            {"bCollideWhenPlacing", 0x5A, "BoolProperty"},
            {"bFindCameraComponentWhenViewTarget", 0x5A, "BoolProperty"},
            {"bGenerateOverlapEventsDuringLevelStreaming", 0x5A, "BoolProperty"},
            {"bIgnoresOriginShifting", 0x5A, "BoolProperty"},
            {"bAllowReceiveTickEventOnDedicatedServer", 0x5B, "BoolProperty"},
            {"bCanBeInCluster", 0x5B, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x5B, "BoolProperty"},
            {"bIsEditorOnlyActor", 0x5B, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x5B, "BoolProperty"},
            {"bReplicates", 0x5B, "BoolProperty"},
            {"bActorEnableCollision", 0x5D, "BoolProperty"},
            {"bActorIsBeingDestroyed", 0x5D, "BoolProperty"},
            {"bAsyncPhysicsTickEnabled", 0x5D, "BoolProperty"},
            {"UpdateOverlapsMethodDuringLevelStreaming", 0x5E, "EnumProperty"},
            {"DefaultUpdateOverlapsMethodDuringLevelStreaming", 0x5F, "EnumProperty"},
            {"RemoteRole", 0x60, "ByteProperty"},
            {"InitialLifeSpan", 0x64, "FloatProperty"},
            {"CustomTimeDilation", 0x68, "FloatProperty"},
            {"RayTracingGroupId", 0x6C, "IntProperty"},
            {"AttachmentReplication", 0x70, "StructProperty"},
            {"ReplicatedMovement", 0xD0, "StructProperty"},
            {"Owner", 0x158, "ObjectProperty"},
            {"NetDriverName", 0x160, "NameProperty"},
            {"Role", 0x164, "ByteProperty"},
            {"NetDormancy", 0x165, "ByteProperty"},
            {"SpawnCollisionHandlingMethod", 0x166, "EnumProperty"},
            {"AutoReceiveInput", 0x167, "ByteProperty"},
            {"InputPriority", 0x168, "IntProperty"},
            {"InputComponent", 0x170, "ObjectProperty"},
            {"NetTag", 0x178, "IntProperty"},
            {"NetCullDistanceSquared", 0x17C, "FloatProperty"},
            {"NetUpdateFrequency", 0x180, "FloatProperty"},
            {"MinNetUpdateFrequency", 0x184, "FloatProperty"},
            {"NetPriority", 0x188, "FloatProperty"},
            {"PhysicsReplicationMode", 0x18C, "EnumProperty"},
            {"Instigator", 0x198, "ObjectProperty"},
            {"Children", 0x1A0, "ArrayProperty"},
            {"RootComponent", 0x1B0, "ObjectProperty"},
            {"HLODLayer", 0x1C8, "ObjectProperty"},
            {"Layers", 0x1D0, "ArrayProperty"},
            {"ParentComponent", 0x1E0, "WeakObjectProperty"},
            {"Tags", 0x1F8, "ArrayProperty"},
            {"OnTakeAnyDamage", 0x208, "MulticastSparseDelegateProperty"},
            {"OnTakePointDamage", 0x209, "MulticastSparseDelegateProperty"},
            {"OnTakeRadialDamage", 0x20A, "MulticastSparseDelegateProperty"},
            {"OnActorBeginOverlap", 0x20B, "MulticastSparseDelegateProperty"},
            {"OnActorEndOverlap", 0x20C, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x20D, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x20E, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x20F, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x210, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x211, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x212, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x213, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x214, "MulticastSparseDelegateProperty"},
            {"OnActorHit", 0x215, "MulticastSparseDelegateProperty"},
            {"OnDestroyed", 0x216, "MulticastSparseDelegateProperty"},
            {"OnEndPlay", 0x217, "MulticastSparseDelegateProperty"},
            {"InstanceComponents", 0x258, "ArrayProperty"},
            {"BlueprintCreatedComponents", 0x268, "ArrayProperty"},
        }};
    };

    struct FortAISpawnerInterface
    {
        static constexpr std::string_view Name = "FortAISpawnerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAISpawnerUtilityComponent
    {
        static constexpr std::string_view Name = "FortAISpawnerUtilityComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AIPawnSpawnTypeTag = 0xC0;
            static constexpr std::uintptr_t EnvironmentQuery = 0xC8;
            static constexpr std::uintptr_t QueryParams = 0xD0;
            static constexpr std::uintptr_t QueryRadius = 0xE0;
            static constexpr std::uintptr_t QueryMinDistance = 0xE4;
            static constexpr std::uintptr_t OnEnvironmentQueryFinishedDelegate = 0xE8;
            static constexpr std::uintptr_t OnUnownedPawnDiedDelegate = 0xF8;
            static constexpr std::uintptr_t FreeSpawnSlots = 0x118;
            static constexpr std::uintptr_t CachedFortSpatialGameplay = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"AIPawnSpawnTypeTag", 0xC0, "StructProperty"},
            {"EnvironmentQuery", 0xC8, "ObjectProperty"},
            {"QueryParams", 0xD0, "ArrayProperty"},
            {"QueryRadius", 0xE0, "FloatProperty"},
            {"QueryMinDistance", 0xE4, "FloatProperty"},
            {"OnEnvironmentQueryFinishedDelegate", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnUnownedPawnDiedDelegate", 0xF8, "MulticastInlineDelegateProperty"},
            {"FreeSpawnSlots", 0x118, "ArrayProperty"},
            {"CachedFortSpatialGameplay", 0x140, "InterfaceProperty"},
        }};
    };

    struct FortAIStateTreeSchema
    {
        static constexpr std::string_view Name = "FortAIStateTreeSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StateTreeSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ControllerClass = 0x28;
            static constexpr std::uintptr_t PawnClass = 0x30;
            static constexpr std::uintptr_t ContextDataDescs = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ControllerClass", 0x28, "ClassProperty"},
            {"PawnClass", 0x30, "ClassProperty"},
            {"ContextDataDescs", 0x38, "ArrayProperty"},
        }};
    };

    struct FortAISystem
    {
        static constexpr std::string_view Name = "FortAISystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AISystem";
        struct Offsets
        {
            static constexpr std::uintptr_t TwoPointSolvers = 0x138;
            static constexpr std::uintptr_t InfluenceMap = 0x148;
            static constexpr std::uintptr_t BotManager = 0x150;
            static constexpr std::uintptr_t ActiveRiftBlockers = 0x168;
            static constexpr std::uintptr_t AISpawner = 0x188;
            static constexpr std::uintptr_t AIServiceManager = 0x190;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"TwoPointSolvers", 0x138, "ArrayProperty"},
            {"InfluenceMap", 0x148, "ObjectProperty"},
            {"BotManager", 0x150, "ObjectProperty"},
            {"ActiveRiftBlockers", 0x168, "ArrayProperty"},
            {"AISpawner", 0x188, "ObjectProperty"},
            {"AIServiceManager", 0x190, "ObjectProperty"},
        }};
    };

    struct FortAITask_AdjustToSlot
    {
        static constexpr std::string_view Name = "FortAITask_AdjustToSlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AITask";
        struct Offsets
        {
            static constexpr std::uintptr_t SlotLocation = 0x68;
            static constexpr std::uintptr_t SlotDirection = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SlotLocation", 0x68, "StructProperty"},
            {"SlotDirection", 0x80, "StructProperty"},
        }};
    };

    struct FortAITask_ExecuteAbility
    {
        static constexpr std::string_view Name = "FortAITask_ExecuteAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AITask_ExecuteAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerController = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OwnerController", 0x60, "ObjectProperty"},
        }};
    };

    struct FortAITask_FuzzyQueue
    {
        static constexpr std::string_view Name = "FortAITask_FuzzyQueue";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AITask_MoveTo";
        struct Offsets
        {
            static constexpr std::uintptr_t OnRequestFailed = 0x80;
            static constexpr std::uintptr_t OnMoveFinished = 0x90;
            static constexpr std::uintptr_t MoveRequest = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnRequestFailed", 0x80, "MulticastInlineDelegateProperty"},
            {"OnMoveFinished", 0x90, "MulticastInlineDelegateProperty"},
            {"MoveRequest", 0xA0, "StructProperty"},
        }};
    };

    struct FortAITask_Move
    {
        static constexpr std::string_view Name = "FortAITask_Move";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AITask_MoveTo";
        struct Offsets
        {
            static constexpr std::uintptr_t MoveConfig = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"MoveConfig", 0x140, "StructProperty"},
        }};
    };

    struct FortAITask_MoveTo
    {
        static constexpr std::string_view Name = "FortAITask_MoveTo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AITask_MoveTo";
        struct Offsets
        {
            static constexpr std::uintptr_t OnRequestFailed = 0x80;
            static constexpr std::uintptr_t OnMoveFinished = 0x90;
            static constexpr std::uintptr_t MoveRequest = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnRequestFailed", 0x80, "MulticastInlineDelegateProperty"},
            {"OnMoveFinished", 0x90, "MulticastInlineDelegateProperty"},
            {"MoveRequest", 0xA0, "StructProperty"},
        }};
    };

    struct FortAITask_NavmeshWait
    {
        static constexpr std::string_view Name = "FortAITask_NavmeshWait";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AITask";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerController = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OwnerController", 0x60, "ObjectProperty"},
        }};
    };

    struct FortAITask_RotateToFace
    {
        static constexpr std::string_view Name = "FortAITask_RotateToFace";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AITask";
        struct Offsets
        {
            static constexpr std::uintptr_t FocusTarget = 0x68;
            static constexpr std::uintptr_t FocalPoint = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FocusTarget", 0x68, "ObjectProperty"},
            {"FocalPoint", 0x70, "StructProperty"},
        }};
    };

    struct FortAITask_StepAside
    {
        static constexpr std::string_view Name = "FortAITask_StepAside";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAITask_Move";
        struct Offsets
        {
            static constexpr std::uintptr_t GoalActor = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GoalActor", 0x1A8, "ObjectProperty"},
        }};
    };

    struct FortAITetheringBoxBoundsInterface
    {
        static constexpr std::string_view Name = "FortAITetheringBoxBoundsInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAIWeaponModifierBase
    {
        static constexpr std::string_view Name = "FortAIWeaponModifierBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIBotModifierBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BotController = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BotController", 0x30, "ObjectProperty"},
        }};
    };

    struct FortActorFocusComponent
    {
        static constexpr std::string_view Name = "FortActorFocusComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TurningStrategy = 0xC0;
            static constexpr std::uintptr_t RotationAxis = 0xD0;
            static constexpr std::uintptr_t TargetActor = 0xD8;
            static constexpr std::uintptr_t TargetLocation = 0xF8;
            static constexpr std::uintptr_t bIsPaused = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"TurningStrategy", 0xC0, "StructProperty"},
            {"RotationAxis", 0xD0, "IntProperty"},
            {"TargetActor", 0xD8, "SoftObjectProperty"},
            {"TargetLocation", 0xF8, "StructProperty"},
            {"bIsPaused", 0x110, "BoolProperty"},
        }};
    };

    struct FortAnimNotify_Bark
    {
        static constexpr std::string_view Name = "FortAnimNotify_Bark";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimNotify";
        struct Offsets
        {
            static constexpr std::uintptr_t BarkTag = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BarkTag", 0x38, "StructProperty"},
        }};
    };

    struct FortAsyncAction_IsInitialNavSystemBuildLockCompleted
    {
        static constexpr std::string_view Name = "FortAsyncAction_IsInitialNavSystemBuildLockCompleted";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnInitialNavSystemBuildLockCompleted = 0x30;
            static constexpr std::uintptr_t World = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnInitialNavSystemBuildLockCompleted", 0x30, "MulticastInlineDelegateProperty"},
            {"World", 0x40, "ObjectProperty"},
        }};
    };

    struct FortAsyncAction_MakeTieredWaveEncounterSettings
    {
        static constexpr std::string_view Name = "FortAsyncAction_MakeTieredWaveEncounterSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnComplete = 0x30;
            static constexpr std::uintptr_t WaveData = 0x40;
            static constexpr std::uintptr_t EncounterSettings = 0x1B8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnComplete", 0x30, "MulticastInlineDelegateProperty"},
            {"WaveData", 0x40, "StructProperty"},
            {"EncounterSettings", 0x1B8, "StructProperty"},
        }};
    };

    struct FortAsyncAction_WaitForNavmeshNotDirty
    {
        static constexpr std::string_view Name = "FortAsyncAction_WaitForNavmeshNotDirty";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintAsyncActionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OnReady = 0x30;
            static constexpr std::uintptr_t Configuration = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OnReady", 0x30, "MulticastInlineDelegateProperty"},
            {"Configuration", 0x40, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotAimingDigestedSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotAimingDigestedSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotDigestedSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultFocusSetting = 0x38;
            static constexpr std::uintptr_t FocusSettings = 0xA0;
            static constexpr std::uintptr_t LookAtSettings = 0xB0;
            static constexpr std::uintptr_t bAllowScanAroundWhileSwimming = 0x100;
            static constexpr std::uintptr_t TrackingReactionTime = 0x104;
            static constexpr std::uintptr_t InAirTrackingReactionTimeMultiplier = 0x108;
            static constexpr std::uintptr_t TrackingInterpTime = 0x10C;
            static constexpr std::uintptr_t TrackingInterpTimeMultForGroundVehicles = 0x110;
            static constexpr std::uintptr_t TrackingInterpTimeMultForFlyingVehicles = 0x114;
            static constexpr std::uintptr_t MaxTrackingPredictionError = 0x118;
            static constexpr std::uintptr_t MaxTrackingOffsetErrorMultiplier = 0x11C;
            static constexpr std::uintptr_t AdjustedTrackingOffsetErrorMultiplierAgainstAIs = 0x120;
            static constexpr std::uintptr_t TrackingErrorUpdateInterval = 0x124;
            static constexpr std::uintptr_t TrackingInAirVelocityThreshold = 0x128;
            static constexpr std::uintptr_t TrackingInAirHeightDeltaThreshold = 0x12C;
            static constexpr std::uintptr_t TargetAcquisitionRate = 0x130;
            static constexpr std::uintptr_t TimeToHitMultiplier = 0x134;
            static constexpr std::uintptr_t MaxTimeToHitAddedCausedByTargetSpeed = 0x138;
            static constexpr std::uintptr_t MaxTimeToHitAddedCausedByTargetInAir = 0x13C;
            static constexpr std::uintptr_t TimeToHitDelayMultiplierWhenTargetInAir = 0x140;
            static constexpr std::uintptr_t TimeToHitDelayMultiplierCurveBasedOnSpeed = 0x148;
            static constexpr std::uintptr_t bAimingCircleEnabled = 0x170;
            static constexpr std::uintptr_t bTargetIdleDetectionEnabled = 0x171;
            static constexpr std::uintptr_t bTargetIdleUseAgainstNPC = 0x172;
            static constexpr std::uintptr_t TargetIdleLookBackTime = 0x174;
            static constexpr std::uintptr_t TargetIdleUnsuspectingCosAngle = 0x178;
            static constexpr std::uintptr_t TargetIdleUnsuspectingDistance = 0x17C;
            static constexpr std::uintptr_t TargetIdleUnsuspectingDamageDuration = 0x180;
            static constexpr std::uintptr_t TargetIdleUnsuspectingTimeMultiplier = 0x184;
            static constexpr std::uintptr_t TargetIdleVerticalSpeedThreshold = 0x188;
            static constexpr std::uintptr_t TargetIdleLateralSpeedThreshold = 0x18C;
            static constexpr std::uintptr_t TargetIdleFrontalSpeedThreshold = 0x190;
            static constexpr std::uintptr_t TargetIdleRevivedGracePeriodDuration = 0x194;
            static constexpr std::uintptr_t MaxDistanceEvaluationErrorRatio = 0x198;
            static constexpr std::uintptr_t TargetingUpdateInterval = 0x19C;
            static constexpr std::uintptr_t TargetingUpdateIntervalMaxDeviation = 0x1A0;
            static constexpr std::uintptr_t ReachLeashLimitToleranceDistance = 0x1A4;
            static constexpr std::uintptr_t bShootFloorTrapOnlyWhenHigherThanTrap = 0x1A8;
            static constexpr std::uintptr_t TargetingRotationSpeedLimit = 0x1AC;
            static constexpr std::uintptr_t TargetingRotationSnapThreshold = 0x1B0;
            static constexpr std::uintptr_t BaseClampingDistance = 0x1B4;
            static constexpr std::uintptr_t bForceViewLocationAsTargetingSource = 0x1B8;
            static constexpr std::uintptr_t NoWeaponAccuracy = 0x1C0;
            static constexpr std::uintptr_t WeaponAccuracies = 0x530;
            static constexpr std::uintptr_t DigestedTargetBasedAccuracies = 0x540;
            static constexpr std::uintptr_t TrackingOffsetModifiers = 0x550;
            static constexpr std::uintptr_t DefaultAimingCircleSettings = 0x670;
            static constexpr std::uintptr_t CachedWeaponUsedToCalculateAccuracy = 0x7F8;
            static constexpr std::uintptr_t WeaponAimOffsets = 0x808;
            static constexpr std::uintptr_t OddsOfIncreasedLethality = 0x818;
            static constexpr std::uintptr_t AccuracyRatioAgainstBotsInPlayerProximity = 0x81C;
            static constexpr std::uintptr_t TargetWeakspotChance = 0x820;
            static constexpr std::uintptr_t TargetWeakspotTime = 0x824;
            static constexpr std::uintptr_t TargetWeakspotDeviation = 0x828;
            static constexpr std::uintptr_t TargetWeakspotCooldown = 0x82C;
        };

        inline static constexpr std::array<PropertyInfo, 55> Properties{{
            {"DefaultFocusSetting", 0x38, "StructProperty"},
            {"FocusSettings", 0xA0, "ArrayProperty"},
            {"LookAtSettings", 0xB0, "StructProperty"},
            {"bAllowScanAroundWhileSwimming", 0x100, "BoolProperty"},
            {"TrackingReactionTime", 0x104, "FloatProperty"},
            {"InAirTrackingReactionTimeMultiplier", 0x108, "FloatProperty"},
            {"TrackingInterpTime", 0x10C, "FloatProperty"},
            {"TrackingInterpTimeMultForGroundVehicles", 0x110, "FloatProperty"},
            {"TrackingInterpTimeMultForFlyingVehicles", 0x114, "FloatProperty"},
            {"MaxTrackingPredictionError", 0x118, "FloatProperty"},
            {"MaxTrackingOffsetErrorMultiplier", 0x11C, "FloatProperty"},
            {"AdjustedTrackingOffsetErrorMultiplierAgainstAIs", 0x120, "FloatProperty"},
            {"TrackingErrorUpdateInterval", 0x124, "FloatProperty"},
            {"TrackingInAirVelocityThreshold", 0x128, "FloatProperty"},
            {"TrackingInAirHeightDeltaThreshold", 0x12C, "FloatProperty"},
            {"TargetAcquisitionRate", 0x130, "FloatProperty"},
            {"TimeToHitMultiplier", 0x134, "FloatProperty"},
            {"MaxTimeToHitAddedCausedByTargetSpeed", 0x138, "FloatProperty"},
            {"MaxTimeToHitAddedCausedByTargetInAir", 0x13C, "FloatProperty"},
            {"TimeToHitDelayMultiplierWhenTargetInAir", 0x140, "FloatProperty"},
            {"TimeToHitDelayMultiplierCurveBasedOnSpeed", 0x148, "StructProperty"},
            {"bAimingCircleEnabled", 0x170, "BoolProperty"},
            {"bTargetIdleDetectionEnabled", 0x171, "BoolProperty"},
            {"bTargetIdleUseAgainstNPC", 0x172, "BoolProperty"},
            {"TargetIdleLookBackTime", 0x174, "FloatProperty"},
            {"TargetIdleUnsuspectingCosAngle", 0x178, "FloatProperty"},
            {"TargetIdleUnsuspectingDistance", 0x17C, "FloatProperty"},
            {"TargetIdleUnsuspectingDamageDuration", 0x180, "FloatProperty"},
            {"TargetIdleUnsuspectingTimeMultiplier", 0x184, "FloatProperty"},
            {"TargetIdleVerticalSpeedThreshold", 0x188, "FloatProperty"},
            {"TargetIdleLateralSpeedThreshold", 0x18C, "FloatProperty"},
            {"TargetIdleFrontalSpeedThreshold", 0x190, "FloatProperty"},
            {"TargetIdleRevivedGracePeriodDuration", 0x194, "FloatProperty"},
            {"MaxDistanceEvaluationErrorRatio", 0x198, "FloatProperty"},
            {"TargetingUpdateInterval", 0x19C, "FloatProperty"},
            {"TargetingUpdateIntervalMaxDeviation", 0x1A0, "FloatProperty"},
            {"ReachLeashLimitToleranceDistance", 0x1A4, "FloatProperty"},
            {"bShootFloorTrapOnlyWhenHigherThanTrap", 0x1A8, "BoolProperty"},
            {"TargetingRotationSpeedLimit", 0x1AC, "FloatProperty"},
            {"TargetingRotationSnapThreshold", 0x1B0, "FloatProperty"},
            {"BaseClampingDistance", 0x1B4, "FloatProperty"},
            {"bForceViewLocationAsTargetingSource", 0x1B8, "BoolProperty"},
            {"NoWeaponAccuracy", 0x1C0, "StructProperty"},
            {"WeaponAccuracies", 0x530, "ArrayProperty"},
            {"DigestedTargetBasedAccuracies", 0x540, "ArrayProperty"},
            {"TrackingOffsetModifiers", 0x550, "StructProperty"},
            {"DefaultAimingCircleSettings", 0x670, "StructProperty"},
            {"CachedWeaponUsedToCalculateAccuracy", 0x7F8, "WeakObjectProperty"},
            {"WeaponAimOffsets", 0x808, "ArrayProperty"},
            {"OddsOfIncreasedLethality", 0x818, "FloatProperty"},
            {"AccuracyRatioAgainstBotsInPlayerProximity", 0x81C, "FloatProperty"},
            {"TargetWeakspotChance", 0x820, "FloatProperty"},
            {"TargetWeakspotTime", 0x824, "FloatProperty"},
            {"TargetWeakspotDeviation", 0x828, "FloatProperty"},
            {"TargetWeakspotCooldown", 0x82C, "FloatProperty"},
        }};
    };

    struct FortAthenaAIBotAimingSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotAimingSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultFocusSetting = 0x30;
            static constexpr std::uintptr_t FocusSettings = 0x170;
            static constexpr std::uintptr_t LookAtSettings = 0x180;
            static constexpr std::uintptr_t AllowScanAroundWhileSwimming = 0x4A0;
            static constexpr std::uintptr_t TrackingReactionTime = 0x4C8;
            static constexpr std::uintptr_t InAirTrackingReactionTimeMultiplier = 0x4F0;
            static constexpr std::uintptr_t TrackingInterpTime = 0x518;
            static constexpr std::uintptr_t TrackingInterpTimeMultForGroundVehicles = 0x540;
            static constexpr std::uintptr_t TrackingInterpTimeMultForFlyingVehicles = 0x568;
            static constexpr std::uintptr_t MaxTrackingPredictionError = 0x590;
            static constexpr std::uintptr_t MaxTrackingOffsetErrorMultiplier = 0x5B8;
            static constexpr std::uintptr_t AdjustedTrackingOffsetErrorMultiplierAgainstAIs = 0x5E0;
            static constexpr std::uintptr_t TrackingErrorUpdateInterval = 0x608;
            static constexpr std::uintptr_t TrackingInAirVelocityThreshold = 0x630;
            static constexpr std::uintptr_t TrackingInAirHeightDeltaThreshold = 0x658;
            static constexpr std::uintptr_t TargetAcquisitionRate = 0x680;
            static constexpr std::uintptr_t TimeToHitMultiplier = 0x6A8;
            static constexpr std::uintptr_t MaxTimeToHitAddedCausedByTargetSpeed = 0x6D0;
            static constexpr std::uintptr_t MaxTimeToHitAddedCausedByTargetInAir = 0x6F8;
            static constexpr std::uintptr_t TimeToHitDelayMultiplierWhenTargetInAir = 0x720;
            static constexpr std::uintptr_t TimeToHitDelayMultiplierCurveBasedOnSpeed = 0x748;
            static constexpr std::uintptr_t AimingCircleEnabled = 0x770;
            static constexpr std::uintptr_t TargetIdleDetectionEnabled = 0x798;
            static constexpr std::uintptr_t TargetIdleUseAgainstNPC = 0x7C0;
            static constexpr std::uintptr_t TargetIdleLookBackTime = 0x7E8;
            static constexpr std::uintptr_t TargetIdleUnsuspectingAngle = 0x810;
            static constexpr std::uintptr_t TargetIdleUnsuspectingDistance = 0x838;
            static constexpr std::uintptr_t TargetIdleUnsuspectingDamageDuration = 0x860;
            static constexpr std::uintptr_t TargetIdleUnsuspectingTimeMultiplier = 0x888;
            static constexpr std::uintptr_t TargetIdleVerticalSpeedThreshold = 0x8B0;
            static constexpr std::uintptr_t TargetIdleLateralSpeedThreshold = 0x8D8;
            static constexpr std::uintptr_t TargetIdleFrontalSpeedThreshold = 0x900;
            static constexpr std::uintptr_t TargetIdleRevivedGracePeriodDuration = 0x928;
            static constexpr std::uintptr_t MaxDistanceEvaluationErrorRatio = 0x950;
            static constexpr std::uintptr_t TargetingUpdateInterval = 0x978;
            static constexpr std::uintptr_t TargetingUpdateIntervalMaxDeviation = 0x9A0;
            static constexpr std::uintptr_t ReachLeashLimitToleranceDistance = 0x9C8;
            static constexpr std::uintptr_t ShootFloorTrapOnlyWhenHigherThanTrap = 0x9F0;
            static constexpr std::uintptr_t TargetingRotationSpeedLimit = 0xA18;
            static constexpr std::uintptr_t TargetingRotationSnapThreshold = 0xA40;
            static constexpr std::uintptr_t BaseClampingDistance = 0xA68;
            static constexpr std::uintptr_t ForceViewLocationAsTargetingSource = 0xA90;
            static constexpr std::uintptr_t NoWeaponAccuracy = 0xAB8;
            static constexpr std::uintptr_t WeaponAccuracies = 0x1570;
            static constexpr std::uintptr_t TargetBasedAccuracies = 0x1580;
            static constexpr std::uintptr_t bDigestTrackingOffsetModifiersWithAvgMatchMMR = 0x1590;
            static constexpr std::uintptr_t TrackingOffsetModifiers = 0x1598;
            static constexpr std::uintptr_t DefaultAimingCircleSettings = 0x15A8;
            static constexpr std::uintptr_t AimOffsetSettings = 0x1B08;
            static constexpr std::uintptr_t OddsOfIncreasedLethality = 0x1B18;
            static constexpr std::uintptr_t AccuracyRatioAgainstBotsInPlayerProximity = 0x1B40;
            static constexpr std::uintptr_t TargetWeakspotChance = 0x1B68;
            static constexpr std::uintptr_t TargetWeakspotTime = 0x1B90;
            static constexpr std::uintptr_t TargetWeakspotDeviation = 0x1BB8;
            static constexpr std::uintptr_t TargetWeakspotCooldown = 0x1BE0;
        };

        inline static constexpr std::array<PropertyInfo, 55> Properties{{
            {"DefaultFocusSetting", 0x30, "StructProperty"},
            {"FocusSettings", 0x170, "ArrayProperty"},
            {"LookAtSettings", 0x180, "StructProperty"},
            {"AllowScanAroundWhileSwimming", 0x4A0, "StructProperty"},
            {"TrackingReactionTime", 0x4C8, "StructProperty"},
            {"InAirTrackingReactionTimeMultiplier", 0x4F0, "StructProperty"},
            {"TrackingInterpTime", 0x518, "StructProperty"},
            {"TrackingInterpTimeMultForGroundVehicles", 0x540, "StructProperty"},
            {"TrackingInterpTimeMultForFlyingVehicles", 0x568, "StructProperty"},
            {"MaxTrackingPredictionError", 0x590, "StructProperty"},
            {"MaxTrackingOffsetErrorMultiplier", 0x5B8, "StructProperty"},
            {"AdjustedTrackingOffsetErrorMultiplierAgainstAIs", 0x5E0, "StructProperty"},
            {"TrackingErrorUpdateInterval", 0x608, "StructProperty"},
            {"TrackingInAirVelocityThreshold", 0x630, "StructProperty"},
            {"TrackingInAirHeightDeltaThreshold", 0x658, "StructProperty"},
            {"TargetAcquisitionRate", 0x680, "StructProperty"},
            {"TimeToHitMultiplier", 0x6A8, "StructProperty"},
            {"MaxTimeToHitAddedCausedByTargetSpeed", 0x6D0, "StructProperty"},
            {"MaxTimeToHitAddedCausedByTargetInAir", 0x6F8, "StructProperty"},
            {"TimeToHitDelayMultiplierWhenTargetInAir", 0x720, "StructProperty"},
            {"TimeToHitDelayMultiplierCurveBasedOnSpeed", 0x748, "StructProperty"},
            {"AimingCircleEnabled", 0x770, "StructProperty"},
            {"TargetIdleDetectionEnabled", 0x798, "StructProperty"},
            {"TargetIdleUseAgainstNPC", 0x7C0, "StructProperty"},
            {"TargetIdleLookBackTime", 0x7E8, "StructProperty"},
            {"TargetIdleUnsuspectingAngle", 0x810, "StructProperty"},
            {"TargetIdleUnsuspectingDistance", 0x838, "StructProperty"},
            {"TargetIdleUnsuspectingDamageDuration", 0x860, "StructProperty"},
            {"TargetIdleUnsuspectingTimeMultiplier", 0x888, "StructProperty"},
            {"TargetIdleVerticalSpeedThreshold", 0x8B0, "StructProperty"},
            {"TargetIdleLateralSpeedThreshold", 0x8D8, "StructProperty"},
            {"TargetIdleFrontalSpeedThreshold", 0x900, "StructProperty"},
            {"TargetIdleRevivedGracePeriodDuration", 0x928, "StructProperty"},
            {"MaxDistanceEvaluationErrorRatio", 0x950, "StructProperty"},
            {"TargetingUpdateInterval", 0x978, "StructProperty"},
            {"TargetingUpdateIntervalMaxDeviation", 0x9A0, "StructProperty"},
            {"ReachLeashLimitToleranceDistance", 0x9C8, "StructProperty"},
            {"ShootFloorTrapOnlyWhenHigherThanTrap", 0x9F0, "StructProperty"},
            {"TargetingRotationSpeedLimit", 0xA18, "StructProperty"},
            {"TargetingRotationSnapThreshold", 0xA40, "StructProperty"},
            {"BaseClampingDistance", 0xA68, "StructProperty"},
            {"ForceViewLocationAsTargetingSource", 0xA90, "StructProperty"},
            {"NoWeaponAccuracy", 0xAB8, "StructProperty"},
            {"WeaponAccuracies", 0x1570, "ArrayProperty"},
            {"TargetBasedAccuracies", 0x1580, "ArrayProperty"},
            {"bDigestTrackingOffsetModifiersWithAvgMatchMMR", 0x1590, "BoolProperty"},
            {"TrackingOffsetModifiers", 0x1598, "ArrayProperty"},
            {"DefaultAimingCircleSettings", 0x15A8, "StructProperty"},
            {"AimOffsetSettings", 0x1B08, "ArrayProperty"},
            {"OddsOfIncreasedLethality", 0x1B18, "StructProperty"},
            {"AccuracyRatioAgainstBotsInPlayerProximity", 0x1B40, "StructProperty"},
            {"TargetWeakspotChance", 0x1B68, "StructProperty"},
            {"TargetWeakspotTime", 0x1B90, "StructProperty"},
            {"TargetWeakspotDeviation", 0x1BB8, "StructProperty"},
            {"TargetWeakspotCooldown", 0x1BE0, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotAlertLevelConfig
    {
        static constexpr std::string_view Name = "FortAthenaAIBotAlertLevelConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AlertLevels = 0x28;
            static constexpr std::uintptr_t ScalableSenseConfig = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AlertLevels", 0x28, "IntProperty"},
            {"ScalableSenseConfig", 0x30, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotAttackingDigestedSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotAttackingDigestedSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotDigestedSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t MeleeWeaponCategorySkills = 0x48;
            static constexpr std::uintptr_t MaxDistanceToThrowMeleeAttackSq = 0x58;
            static constexpr std::uintptr_t ExcludeReachingTargetInMeleeTime = 0x5C;
            static constexpr std::uintptr_t ExcludeReachingTargetMoveDistanceSquared = 0x60;
            static constexpr std::uintptr_t ContinousMeleeAttackTagQuery = 0x68;
            static constexpr std::uintptr_t MaxDistanceToConsiderAsAnAlternateTargetSq = 0xB0;
            static constexpr std::uintptr_t bEnableAlternateTargetRequiredTags = 0xB4;
            static constexpr std::uintptr_t AlternateTargetRequiredTags = 0xB8;
            static constexpr std::uintptr_t bEnableWTFBehavior = 0xD8;
            static constexpr std::uintptr_t MinCooldownDelayBetweenMeleeAttackAttempts = 0xDC;
            static constexpr std::uintptr_t MaxCooldownDelayBetweenMeleeAttackAttempts = 0xE0;
            static constexpr std::uintptr_t MaxHeightDifferenceExtentMultiplierToAttemptMeleeAttack = 0xE4;
            static constexpr std::uintptr_t ThrowableGameplayTags = 0xE8;
            static constexpr std::uintptr_t CombatMeleeTagQuery = 0x108;
            static constexpr std::uintptr_t MinThrowableCount = 0x150;
            static constexpr std::uintptr_t MaxThrowableCount = 0x154;
            static constexpr std::uintptr_t ThrowableCooldownMin = 0x158;
            static constexpr std::uintptr_t ThrowableCooldownMax = 0x15C;
            static constexpr std::uintptr_t bKeepThrowableEquippedDuringCooldown = 0x160;
            static constexpr std::uintptr_t bCheckThrowableCanBeActivatedForSelection = 0x161;
            static constexpr std::uintptr_t ThrowableMinimumRangeSquared = 0x164;
            static constexpr std::uintptr_t ThrowableMaxRangeSquared = 0x168;
            static constexpr std::uintptr_t bThrowableHasMaxRange = 0x16C;
            static constexpr std::uintptr_t bThrowableEvaluatorActive = 0x16D;
            static constexpr std::uintptr_t bThrowablePreventedOnFlyingTargets = 0x16E;
            static constexpr std::uintptr_t RetreatMinHealthRange = 0x170;
            static constexpr std::uintptr_t RetreatMaxHealthRange = 0x174;
            static constexpr std::uintptr_t RetreatProbability = 0x178;
            static constexpr std::uintptr_t RetreatRangeMinSquared = 0x17C;
            static constexpr std::uintptr_t RetreatRangeMaxSquared = 0x180;
            static constexpr std::uintptr_t RetreatMaxDuration = 0x184;
            static constexpr std::uintptr_t RetreatPositionBoxExtent = 0x188;
            static constexpr std::uintptr_t CautiousInvestigationEnabled = 0x1A0;
            static constexpr std::uintptr_t TimeSinceLastStimToBeCautious = 0x1A4;
            static constexpr std::uintptr_t CautiousInvestigationTimeMax = 0x1A8;
            static constexpr std::uintptr_t bRecomputeAndValidateMeshBoundsWhenAttackingMeleeTarget = 0x1AC;
        };

        inline static constexpr std::array<PropertyInfo, 36> Properties{{
            {"MeleeWeaponCategorySkills", 0x48, "ArrayProperty"},
            {"MaxDistanceToThrowMeleeAttackSq", 0x58, "FloatProperty"},
            {"ExcludeReachingTargetInMeleeTime", 0x5C, "FloatProperty"},
            {"ExcludeReachingTargetMoveDistanceSquared", 0x60, "FloatProperty"},
            {"ContinousMeleeAttackTagQuery", 0x68, "StructProperty"},
            {"MaxDistanceToConsiderAsAnAlternateTargetSq", 0xB0, "FloatProperty"},
            {"bEnableAlternateTargetRequiredTags", 0xB4, "BoolProperty"},
            {"AlternateTargetRequiredTags", 0xB8, "StructProperty"},
            {"bEnableWTFBehavior", 0xD8, "BoolProperty"},
            {"MinCooldownDelayBetweenMeleeAttackAttempts", 0xDC, "FloatProperty"},
            {"MaxCooldownDelayBetweenMeleeAttackAttempts", 0xE0, "FloatProperty"},
            {"MaxHeightDifferenceExtentMultiplierToAttemptMeleeAttack", 0xE4, "FloatProperty"},
            {"ThrowableGameplayTags", 0xE8, "StructProperty"},
            {"CombatMeleeTagQuery", 0x108, "StructProperty"},
            {"MinThrowableCount", 0x150, "IntProperty"},
            {"MaxThrowableCount", 0x154, "IntProperty"},
            {"ThrowableCooldownMin", 0x158, "FloatProperty"},
            {"ThrowableCooldownMax", 0x15C, "FloatProperty"},
            {"bKeepThrowableEquippedDuringCooldown", 0x160, "BoolProperty"},
            {"bCheckThrowableCanBeActivatedForSelection", 0x161, "BoolProperty"},
            {"ThrowableMinimumRangeSquared", 0x164, "FloatProperty"},
            {"ThrowableMaxRangeSquared", 0x168, "FloatProperty"},
            {"bThrowableHasMaxRange", 0x16C, "BoolProperty"},
            {"bThrowableEvaluatorActive", 0x16D, "BoolProperty"},
            {"bThrowablePreventedOnFlyingTargets", 0x16E, "BoolProperty"},
            {"RetreatMinHealthRange", 0x170, "FloatProperty"},
            {"RetreatMaxHealthRange", 0x174, "FloatProperty"},
            {"RetreatProbability", 0x178, "FloatProperty"},
            {"RetreatRangeMinSquared", 0x17C, "FloatProperty"},
            {"RetreatRangeMaxSquared", 0x180, "FloatProperty"},
            {"RetreatMaxDuration", 0x184, "FloatProperty"},
            {"RetreatPositionBoxExtent", 0x188, "StructProperty"},
            {"CautiousInvestigationEnabled", 0x1A0, "BoolProperty"},
            {"TimeSinceLastStimToBeCautious", 0x1A4, "FloatProperty"},
            {"CautiousInvestigationTimeMax", 0x1A8, "FloatProperty"},
            {"bRecomputeAndValidateMeshBoundsWhenAttackingMeleeTarget", 0x1AC, "BoolProperty"},
        }};
    };

    struct FortAthenaAIBotAttackingSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotAttackingSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t MeleeWeaponSkills = 0x30;
            static constexpr std::uintptr_t MaxDistanceToThrowMeleeAttack = 0x40;
            static constexpr std::uintptr_t ContinousMeleeAttackTagQuery = 0x68;
            static constexpr std::uintptr_t EnableWTFBehavior = 0xB0;
            static constexpr std::uintptr_t MinCooldownDelayBetweenMeleeAttackAttempts = 0xD8;
            static constexpr std::uintptr_t MaxCooldownDelayBetweenMeleeAttackAttempts = 0x100;
            static constexpr std::uintptr_t MaxHeightDifferenceExtentMultiplierToAttemptMeleeAttack = 0x128;
            static constexpr std::uintptr_t CombatMeleeTagQuery = 0x150;
            static constexpr std::uintptr_t ExcludeReachingTargetInMeleeTime = 0x198;
            static constexpr std::uintptr_t ExcludeReachingTargetMoveDistance = 0x1C0;
            static constexpr std::uintptr_t RecomputeAndValidateMeshBoundsWhenAttackingMeleeTarget = 0x1E8;
            static constexpr std::uintptr_t MaxDistanceToConsiderAsAnAlternateTarget = 0x210;
            static constexpr std::uintptr_t EnableAlternateTargetRequiredTags = 0x238;
            static constexpr std::uintptr_t AlternateTargetRequiredTags = 0x260;
            static constexpr std::uintptr_t ThrowableGameplayTags = 0x280;
            static constexpr std::uintptr_t MinThrowableCount = 0x2A0;
            static constexpr std::uintptr_t MaxThrowableCount = 0x2C8;
            static constexpr std::uintptr_t ThrowableCooldownMin = 0x2F0;
            static constexpr std::uintptr_t ThrowableCooldownMax = 0x318;
            static constexpr std::uintptr_t KeepThrowableEquippedDuringCooldown = 0x340;
            static constexpr std::uintptr_t CheckThrowableCanBeActivatedForSelection = 0x368;
            static constexpr std::uintptr_t ThrowableMinimumRange = 0x390;
            static constexpr std::uintptr_t ThrowableMaxRange = 0x3B8;
            static constexpr std::uintptr_t ThrowableHasMaxRange = 0x3E0;
            static constexpr std::uintptr_t ThrowableEvaluatorActive = 0x408;
            static constexpr std::uintptr_t ThrowablePreventedOnFlyingTargets = 0x430;
            static constexpr std::uintptr_t RetreatMinHealthRange = 0x458;
            static constexpr std::uintptr_t RetreatMaxHealthRange = 0x480;
            static constexpr std::uintptr_t RetreatProbability = 0x4A8;
            static constexpr std::uintptr_t RetreatRangeMin = 0x4D0;
            static constexpr std::uintptr_t RetreatRangeMax = 0x4F8;
            static constexpr std::uintptr_t RetreatMaxDuration = 0x520;
            static constexpr std::uintptr_t RetreatPositionBoxExtent = 0x548;
            static constexpr std::uintptr_t CautiousInvestigationEnabled = 0x560;
            static constexpr std::uintptr_t TimeSinceLastStimToBeCautious = 0x588;
            static constexpr std::uintptr_t CautiousInvestigationTimeMax = 0x5B0;
        };

        inline static constexpr std::array<PropertyInfo, 36> Properties{{
            {"MeleeWeaponSkills", 0x30, "ArrayProperty"},
            {"MaxDistanceToThrowMeleeAttack", 0x40, "StructProperty"},
            {"ContinousMeleeAttackTagQuery", 0x68, "StructProperty"},
            {"EnableWTFBehavior", 0xB0, "StructProperty"},
            {"MinCooldownDelayBetweenMeleeAttackAttempts", 0xD8, "StructProperty"},
            {"MaxCooldownDelayBetweenMeleeAttackAttempts", 0x100, "StructProperty"},
            {"MaxHeightDifferenceExtentMultiplierToAttemptMeleeAttack", 0x128, "StructProperty"},
            {"CombatMeleeTagQuery", 0x150, "StructProperty"},
            {"ExcludeReachingTargetInMeleeTime", 0x198, "StructProperty"},
            {"ExcludeReachingTargetMoveDistance", 0x1C0, "StructProperty"},
            {"RecomputeAndValidateMeshBoundsWhenAttackingMeleeTarget", 0x1E8, "StructProperty"},
            {"MaxDistanceToConsiderAsAnAlternateTarget", 0x210, "StructProperty"},
            {"EnableAlternateTargetRequiredTags", 0x238, "StructProperty"},
            {"AlternateTargetRequiredTags", 0x260, "StructProperty"},
            {"ThrowableGameplayTags", 0x280, "StructProperty"},
            {"MinThrowableCount", 0x2A0, "StructProperty"},
            {"MaxThrowableCount", 0x2C8, "StructProperty"},
            {"ThrowableCooldownMin", 0x2F0, "StructProperty"},
            {"ThrowableCooldownMax", 0x318, "StructProperty"},
            {"KeepThrowableEquippedDuringCooldown", 0x340, "StructProperty"},
            {"CheckThrowableCanBeActivatedForSelection", 0x368, "StructProperty"},
            {"ThrowableMinimumRange", 0x390, "StructProperty"},
            {"ThrowableMaxRange", 0x3B8, "StructProperty"},
            {"ThrowableHasMaxRange", 0x3E0, "StructProperty"},
            {"ThrowableEvaluatorActive", 0x408, "StructProperty"},
            {"ThrowablePreventedOnFlyingTargets", 0x430, "StructProperty"},
            {"RetreatMinHealthRange", 0x458, "StructProperty"},
            {"RetreatMaxHealthRange", 0x480, "StructProperty"},
            {"RetreatProbability", 0x4A8, "StructProperty"},
            {"RetreatRangeMin", 0x4D0, "StructProperty"},
            {"RetreatRangeMax", 0x4F8, "StructProperty"},
            {"RetreatMaxDuration", 0x520, "StructProperty"},
            {"RetreatPositionBoxExtent", 0x548, "StructProperty"},
            {"CautiousInvestigationEnabled", 0x560, "StructProperty"},
            {"TimeSinceLastStimToBeCautious", 0x588, "StructProperty"},
            {"CautiousInvestigationTimeMax", 0x5B0, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotBuildingComponent
    {
        static constexpr std::string_view Name = "FortAthenaAIBotBuildingComponent";
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

    struct FortAthenaAIBotBuildingDigestedSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotBuildingDigestedSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotDigestedSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t BunkerReactionTime = 0x38;
            static constexpr std::uintptr_t BunkerReactionTimeDeviation = 0x3C;
            static constexpr std::uintptr_t DefensiveBuildingDelayBetweenBuilds = 0x40;
            static constexpr std::uintptr_t DefensiveBuildingDelayDeviationBetweenBuilds = 0x44;
            static constexpr std::uintptr_t DelayBetweenBuildPieces = 0x48;
            static constexpr std::uintptr_t ForceEquipBuildToolDuration = 0x4C;
            static constexpr std::uintptr_t StealWallTurboBuildDetectionTime = 0x50;
            static constexpr std::uintptr_t StealWallAfterNumberOfTurboBuiltWall = 0x54;
            static constexpr std::uintptr_t StealWallEfficiency = 0x58;
            static constexpr std::uintptr_t StealWallBuildingTemplateWeights = 0x5C;
            static constexpr std::uintptr_t WeightedBuildingLists = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"BunkerReactionTime", 0x38, "FloatProperty"},
            {"BunkerReactionTimeDeviation", 0x3C, "FloatProperty"},
            {"DefensiveBuildingDelayBetweenBuilds", 0x40, "FloatProperty"},
            {"DefensiveBuildingDelayDeviationBetweenBuilds", 0x44, "FloatProperty"},
            {"DelayBetweenBuildPieces", 0x48, "FloatProperty"},
            {"ForceEquipBuildToolDuration", 0x4C, "FloatProperty"},
            {"StealWallTurboBuildDetectionTime", 0x50, "FloatProperty"},
            {"StealWallAfterNumberOfTurboBuiltWall", 0x54, "IntProperty"},
            {"StealWallEfficiency", 0x58, "FloatProperty"},
            {"StealWallBuildingTemplateWeights", 0x5C, "FloatProperty"},
            {"WeightedBuildingLists", 0x70, "ArrayProperty"},
        }};
    };

    struct FortAthenaAIBotBuildingSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotBuildingSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t BunkerReactionTime = 0x30;
            static constexpr std::uintptr_t BunkerReactionTimeDeviation = 0x58;
            static constexpr std::uintptr_t DefensiveBuildingDelayBetweenBuilds = 0x80;
            static constexpr std::uintptr_t DefensiveBuildingDelayDeviationBetweenBuilds = 0xA8;
            static constexpr std::uintptr_t DelayBetweenBuildPieces = 0xD0;
            static constexpr std::uintptr_t ForceEquipBuildToolDuration = 0xF8;
            static constexpr std::uintptr_t WeightedBuildingLists = 0x120;
            static constexpr std::uintptr_t StealWallTurboBuildDetectionTime = 0x130;
            static constexpr std::uintptr_t StealWallAfterNumberOfTurboBuiltWall = 0x158;
            static constexpr std::uintptr_t StealWallEfficiency = 0x180;
            static constexpr std::uintptr_t StealWallBuildingTemplateWeights = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"BunkerReactionTime", 0x30, "StructProperty"},
            {"BunkerReactionTimeDeviation", 0x58, "StructProperty"},
            {"DefensiveBuildingDelayBetweenBuilds", 0x80, "StructProperty"},
            {"DefensiveBuildingDelayDeviationBetweenBuilds", 0xA8, "StructProperty"},
            {"DelayBetweenBuildPieces", 0xD0, "StructProperty"},
            {"ForceEquipBuildToolDuration", 0xF8, "StructProperty"},
            {"WeightedBuildingLists", 0x120, "ArrayProperty"},
            {"StealWallTurboBuildDetectionTime", 0x130, "StructProperty"},
            {"StealWallAfterNumberOfTurboBuiltWall", 0x158, "StructProperty"},
            {"StealWallEfficiency", 0x180, "StructProperty"},
            {"StealWallBuildingTemplateWeights", 0x1A8, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotCharacterCustomization
    {
        static constexpr std::string_view Name = "FortAthenaAIBotCharacterCustomization";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomizationLoadout = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CustomizationLoadout", 0x28, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotController
    {
        static constexpr std::string_view Name = "FortAthenaAIBotController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AIController";
        struct Offsets
        {
            static constexpr std::uintptr_t OnTeamSetDelegate = 0x3F8;
            static constexpr std::uintptr_t PreviousVehicle = 0x408;
            static constexpr std::uintptr_t OnPickupCreated = 0x410;
            static constexpr std::uintptr_t AppliedInGameModifierAbilitySetHandles = 0x430;
            static constexpr std::uintptr_t GadgetTrackedAttributeItemInstanceIds = 0x440;
            static constexpr std::uintptr_t TargetHandler = 0x460;
            static constexpr std::uintptr_t bAllowForgettingTargetsInBetweenUpdates = 0x500;
            static constexpr std::uintptr_t bCanOpenIndestructibleDoorObstacle = 0x500;
            static constexpr std::uintptr_t bEnableBotPerception = 0x500;
            static constexpr std::uintptr_t bUpdateSensesWithSkillSet = 0x500;
            static constexpr std::uintptr_t bUseWorldLootLevelForLootDrops = 0x500;
            static constexpr std::uintptr_t bCanTriggerKillVerbs = 0x501;
            static constexpr std::uintptr_t ReachLocationValidationMode = 0x524;
            static constexpr std::uintptr_t BehaviorTree = 0x528;
            static constexpr std::uintptr_t SlotItems = 0x530;
            static constexpr std::uintptr_t MaxInventorySlots = 0x540;
            static constexpr std::uintptr_t PrimaryInventorySlotsData = 0x548;
            static constexpr std::uintptr_t SecondaryInventorySlotsData = 0x558;
            static constexpr std::uintptr_t LootItemsToDropOnDeath = 0x568;
            static constexpr std::uintptr_t LootItemsToDropOnDBNO = 0x578;
            static constexpr std::uintptr_t ForcedBestWeapon = 0x588;
            static constexpr std::uintptr_t CacheInventoryDigestedSkillSet = 0x608;
            static constexpr std::uintptr_t CacheHealingDigestedSkillSet = 0x610;
            static constexpr std::uintptr_t PlayerBotPawn = 0x620;
            static constexpr std::uintptr_t CachedAIServicePlayerBots = 0x628;
            static constexpr std::uintptr_t CachedGameMode = 0x630;
            static constexpr std::uintptr_t CachedAIRuntimeParametersComponent = 0x638;
            static constexpr std::uintptr_t CachedLeashRuntimeParameters = 0x640;
            static constexpr std::uintptr_t CachedAffiliationRuntimeParameters = 0x648;
            static constexpr std::uintptr_t CachedInventoryRuntimeParameters = 0x650;
            static constexpr std::uintptr_t CachedPatrollingComponent = 0x658;
            static constexpr std::uintptr_t CachedAIPerksComponent = 0x660;
            static constexpr std::uintptr_t CachedTokenConsumerComponent = 0x668;
            static constexpr std::uintptr_t ModifierComponent = 0x670;
            static constexpr std::uintptr_t SafeZoneComponent = 0x678;
            static constexpr std::uintptr_t SkillLevelComponent = 0x680;
            static constexpr std::uintptr_t AISprintComponent = 0x688;
            static constexpr std::uintptr_t CachedAIAimingInterface = 0x690;
            static constexpr std::uintptr_t MyHero = 0x6A0;
            static constexpr std::uintptr_t DelayedStimulus = 0x6A8;
            static constexpr std::uintptr_t ObjectsThreatList = 0x6E8;
            static constexpr std::uintptr_t TrapsThreatList = 0x6F8;
            static constexpr std::uintptr_t CurrentAlertLevel = 0x708;
            static constexpr std::uintptr_t DefaultAlertLevelInfo = 0x720;
            static constexpr std::uintptr_t OnAlertLevelChangedEventDelegate = 0x730;
            static constexpr std::uintptr_t OnStealthMeterChangedEventDelegate = 0x740;
            static constexpr std::uintptr_t OnAgentDBNOStatusChangedEventDelegate = 0x758;
            static constexpr std::uintptr_t OnAgentDiedEventDelegate = 0x768;
            static constexpr std::uintptr_t OnAgentGameOver = 0x778;
            static constexpr std::uintptr_t OnAgentRevived = 0x788;
            static constexpr std::uintptr_t OnPlayerPawnKilledByBot = 0x7E0;
            static constexpr std::uintptr_t OnAIPawnKilledByBot = 0x7F0;
            static constexpr std::uintptr_t OnCurrentTargetChangedDelegate = 0x800;
            static constexpr std::uintptr_t Inventory = 0x840;
            static constexpr std::uintptr_t InventorySwitcherComponent = 0x850;
            static constexpr std::uintptr_t LeashComponent = 0x858;
            static constexpr std::uintptr_t Skill = 0x860;
            static constexpr std::uintptr_t bAllowUnsupportedItemsInDefaultInventory = 0x864;
            static constexpr std::uintptr_t bMultiplyEffectivenessOfWeaponWithSurfaceDamageToFindBestWeapon = 0x864;
            static constexpr std::uintptr_t BotSkillSetClasses = 0x868;
            static constexpr std::uintptr_t StartupInventory = 0x898;
            static constexpr std::uintptr_t CosmeticLoadout = 0x8A0;
            static constexpr std::uintptr_t CustomCharacterPartOverridesBC = 0x8C8;
            static constexpr std::uintptr_t NameSettingsBC = 0x8D8;
            static constexpr std::uintptr_t SpectateOnDeathMinTime = 0x8E0;
            static constexpr std::uintptr_t SpectateOnDeathMaxTime = 0x908;
            static constexpr std::uintptr_t CachePerceptionDigestedSkillSet = 0x930;
            static constexpr std::uintptr_t CacheHarvestDigestedSkillSet = 0x938;
            static constexpr std::uintptr_t CacheMovementSkillSet = 0x940;
            static constexpr std::uintptr_t CacheLootingSkillSet = 0x948;
            static constexpr std::uintptr_t CacheAttackingSkillSet = 0x950;
            static constexpr std::uintptr_t CachePlayStyleSkillSet = 0x958;
            static constexpr std::uintptr_t CacheUnstuckSkillSet = 0x960;
            static constexpr std::uintptr_t CacheRangeAttackSkillSet = 0x968;
            static constexpr std::uintptr_t CacheVehicleSkillSet = 0x970;
            static constexpr std::uintptr_t InteractContextInfo = 0x998;
            static constexpr std::uintptr_t CacheAimingDigestedSkillSet = 0xA20;
            static constexpr std::uintptr_t bCanBeDestroyedOnDeath = 0xA2C;
            static constexpr std::uintptr_t LastDeathLocation = 0xA38;
            static constexpr std::uintptr_t LastDeathRotation = 0xA50;
            static constexpr std::uintptr_t CachedWorldItem = 0xA70;
            static constexpr std::uintptr_t CacheWeaponUsedToCalculateType = 0xA80;
            static constexpr std::uintptr_t bCachedIsUsingArcedProjectileWeapon = 0xA88;
            static constexpr std::uintptr_t CachedProjectileGravityScale = 0xA8C;
            static constexpr std::uintptr_t CachedWeaponUsedToCalculateProjectileData = 0xA90;
            static constexpr std::uintptr_t StatManager = 0xA98;
            static constexpr std::uintptr_t ActiveWeakSpots = 0xAA0;
            static constexpr std::uintptr_t CacheBotPawnClass = 0xAC0;
            static constexpr std::uintptr_t CurrentLootActor = 0xAD0;
            static constexpr std::uintptr_t MarkerComponent = 0xAD8;
            static constexpr std::uintptr_t BotPlayerName = 0xAE0;
            static constexpr std::uintptr_t BotIDSuffix = 0xAF0;
            static constexpr std::uintptr_t BotPlayerNameWithSkillRating = 0xB00;
            static constexpr std::uintptr_t PolicyDataSpawner = 0xB38;
            static constexpr std::uintptr_t PerceivedSounds = 0xB40;
            static constexpr std::uintptr_t FortControllerComponent_Telemetry = 0xC58;
            static constexpr std::uintptr_t bForceUsingBuildingTool = 0xC60;
            static constexpr std::uintptr_t bForceHolsterWeapon = 0xC61;
            static constexpr std::uintptr_t PendingEquipWeapon = 0xC68;
            static constexpr std::uintptr_t PlayerToSpectateOnDeath = 0xCE0;
            static constexpr std::uintptr_t OnPlayerPawnAISpawnedDelegate = 0xCE8;
            static constexpr std::uintptr_t OnPawnAISpawnedDelegate = 0xCF8;
            static constexpr std::uintptr_t OnPawnDownedEvent = 0xD08;
            static constexpr std::uintptr_t FortAISenseConfig_SightRuntime = 0xE58;
            static constexpr std::uintptr_t AISenseConfig_HearingRuntime = 0xE60;
            static constexpr std::uintptr_t BotOwner = 0xE78;
            static constexpr std::uintptr_t BotControllerUID = 0xE80;
            static constexpr std::uintptr_t ReviveTarget = 0xE88;
            static constexpr std::uintptr_t BotData = 0xF20;
            static constexpr std::uintptr_t DebugMinimapData = 0xF30;
            static constexpr std::uintptr_t RevivePlayerPawnToken = 0x10C0;
            static constexpr std::uintptr_t LeashActorToFollow = 0x10E8;
            static constexpr std::uintptr_t LeashActorToFollowLocalOffset = 0x10F0;
            static constexpr std::uintptr_t CachedAffiliationManager = 0x1108;
            static constexpr std::uintptr_t CachedAffiliationComponent = 0x1110;
            static constexpr std::uintptr_t bIsAffectedByMutatorHealthAndShieldModifiers = 0x1118;
            static constexpr std::uintptr_t bHasChangedPawnCullDistanceToAggroMode = 0x1120;
            static constexpr std::uintptr_t RespawnRuntimeParameters = 0x1128;
            static constexpr std::uintptr_t CurrentBlockingObstacle = 0x1130;
            static constexpr std::uintptr_t CurrentTargetVehicle = 0x1138;
            static constexpr std::uintptr_t NoSmashActors = 0x1150;
            static constexpr std::uintptr_t FinisherPawn = 0x1170;
            static constexpr std::uintptr_t bPostponeGiveWeaponCheat = 0x1250;
            static constexpr std::uintptr_t bPostponeGiveMaterialsCheat = 0x1251;
            static constexpr std::uintptr_t StartSpectatingTime = 0x1254;
            static constexpr std::uintptr_t MovementDirOverride = 0x1298;
            static constexpr std::uintptr_t bHasIncreasedLethalityAgainstBots = 0x12B0;
            static constexpr std::uintptr_t bIsInProximityOfPlayer = 0x12B1;
            static constexpr std::uintptr_t CachedNearbyActorsPerceptionComponent = 0x12B4;
            static constexpr std::uintptr_t RequestedEmoteAsset = 0x13E0;
            static constexpr std::uintptr_t BTAssetToRunOnPawnAISpawned = 0x1418;
            static constexpr std::uintptr_t DescriptorTag = 0x1420;
            static constexpr std::uintptr_t PawnAIJumpComponentPtr = 0x14C8;
            static constexpr std::uintptr_t PlayerAbilitySetBR = 0x1518;
        };

        inline static constexpr std::array<PropertyInfo, 134> Properties{{
            {"OnTeamSetDelegate", 0x3F8, "MulticastInlineDelegateProperty"},
            {"PreviousVehicle", 0x408, "ObjectProperty"},
            {"OnPickupCreated", 0x410, "MulticastInlineDelegateProperty"},
            {"AppliedInGameModifierAbilitySetHandles", 0x430, "MapProperty"},
            {"GadgetTrackedAttributeItemInstanceIds", 0x440, "SetProperty"},
            {"TargetHandler", 0x460, "StructProperty"},
            {"bAllowForgettingTargetsInBetweenUpdates", 0x500, "BoolProperty"},
            {"bCanOpenIndestructibleDoorObstacle", 0x500, "BoolProperty"},
            {"bEnableBotPerception", 0x500, "BoolProperty"},
            {"bUpdateSensesWithSkillSet", 0x500, "BoolProperty"},
            {"bUseWorldLootLevelForLootDrops", 0x500, "BoolProperty"},
            {"bCanTriggerKillVerbs", 0x501, "BoolProperty"},
            {"ReachLocationValidationMode", 0x524, "EnumProperty"},
            {"BehaviorTree", 0x528, "ObjectProperty"},
            {"SlotItems", 0x530, "ArrayProperty"},
            {"MaxInventorySlots", 0x540, "IntProperty"},
            {"PrimaryInventorySlotsData", 0x548, "ArrayProperty"},
            {"SecondaryInventorySlotsData", 0x558, "ArrayProperty"},
            {"LootItemsToDropOnDeath", 0x568, "ArrayProperty"},
            {"LootItemsToDropOnDBNO", 0x578, "ArrayProperty"},
            {"ForcedBestWeapon", 0x588, "ObjectProperty"},
            {"CacheInventoryDigestedSkillSet", 0x608, "ObjectProperty"},
            {"CacheHealingDigestedSkillSet", 0x610, "ObjectProperty"},
            {"PlayerBotPawn", 0x620, "ObjectProperty"},
            {"CachedAIServicePlayerBots", 0x628, "ObjectProperty"},
            {"CachedGameMode", 0x630, "ObjectProperty"},
            {"CachedAIRuntimeParametersComponent", 0x638, "ObjectProperty"},
            {"CachedLeashRuntimeParameters", 0x640, "ObjectProperty"},
            {"CachedAffiliationRuntimeParameters", 0x648, "ObjectProperty"},
            {"CachedInventoryRuntimeParameters", 0x650, "ObjectProperty"},
            {"CachedPatrollingComponent", 0x658, "ObjectProperty"},
            {"CachedAIPerksComponent", 0x660, "ObjectProperty"},
            {"CachedTokenConsumerComponent", 0x668, "ObjectProperty"},
            {"ModifierComponent", 0x670, "ObjectProperty"},
            {"SafeZoneComponent", 0x678, "ObjectProperty"},
            {"SkillLevelComponent", 0x680, "ObjectProperty"},
            {"AISprintComponent", 0x688, "ObjectProperty"},
            {"CachedAIAimingInterface", 0x690, "InterfaceProperty"},
            {"MyHero", 0x6A0, "ObjectProperty"},
            {"DelayedStimulus", 0x6A8, "ArrayProperty"},
            {"ObjectsThreatList", 0x6E8, "ArrayProperty"},
            {"TrapsThreatList", 0x6F8, "ArrayProperty"},
            {"CurrentAlertLevel", 0x708, "EnumProperty"},
            {"DefaultAlertLevelInfo", 0x720, "StructProperty"},
            {"OnAlertLevelChangedEventDelegate", 0x730, "MulticastInlineDelegateProperty"},
            {"OnStealthMeterChangedEventDelegate", 0x740, "MulticastInlineDelegateProperty"},
            {"OnAgentDBNOStatusChangedEventDelegate", 0x758, "MulticastInlineDelegateProperty"},
            {"OnAgentDiedEventDelegate", 0x768, "MulticastInlineDelegateProperty"},
            {"OnAgentGameOver", 0x778, "MulticastInlineDelegateProperty"},
            {"OnAgentRevived", 0x788, "MulticastInlineDelegateProperty"},
            {"OnPlayerPawnKilledByBot", 0x7E0, "MulticastInlineDelegateProperty"},
            {"OnAIPawnKilledByBot", 0x7F0, "MulticastInlineDelegateProperty"},
            {"OnCurrentTargetChangedDelegate", 0x800, "MulticastInlineDelegateProperty"},
            {"Inventory", 0x840, "InterfaceProperty"},
            {"InventorySwitcherComponent", 0x850, "ObjectProperty"},
            {"LeashComponent", 0x858, "ObjectProperty"},
            {"Skill", 0x860, "FloatProperty"},
            {"bAllowUnsupportedItemsInDefaultInventory", 0x864, "BoolProperty"},
            {"bMultiplyEffectivenessOfWeaponWithSurfaceDamageToFindBestWeapon", 0x864, "BoolProperty"},
            {"BotSkillSetClasses", 0x868, "ArrayProperty"},
            {"StartupInventory", 0x898, "ObjectProperty"},
            {"CosmeticLoadout", 0x8A0, "StructProperty"},
            {"CustomCharacterPartOverridesBC", 0x8C8, "ArrayProperty"},
            {"NameSettingsBC", 0x8D8, "ObjectProperty"},
            {"SpectateOnDeathMinTime", 0x8E0, "StructProperty"},
            {"SpectateOnDeathMaxTime", 0x908, "StructProperty"},
            {"CachePerceptionDigestedSkillSet", 0x930, "ObjectProperty"},
            {"CacheHarvestDigestedSkillSet", 0x938, "ObjectProperty"},
            {"CacheMovementSkillSet", 0x940, "ObjectProperty"},
            {"CacheLootingSkillSet", 0x948, "ObjectProperty"},
            {"CacheAttackingSkillSet", 0x950, "ObjectProperty"},
            {"CachePlayStyleSkillSet", 0x958, "ObjectProperty"},
            {"CacheUnstuckSkillSet", 0x960, "ObjectProperty"},
            {"CacheRangeAttackSkillSet", 0x968, "ObjectProperty"},
            {"CacheVehicleSkillSet", 0x970, "ObjectProperty"},
            {"InteractContextInfo", 0x998, "ObjectProperty"},
            {"CacheAimingDigestedSkillSet", 0xA20, "ObjectProperty"},
            {"bCanBeDestroyedOnDeath", 0xA2C, "BoolProperty"},
            {"LastDeathLocation", 0xA38, "StructProperty"},
            {"LastDeathRotation", 0xA50, "StructProperty"},
            {"CachedWorldItem", 0xA70, "ObjectProperty"},
            {"CacheWeaponUsedToCalculateType", 0xA80, "ObjectProperty"},
            {"bCachedIsUsingArcedProjectileWeapon", 0xA88, "BoolProperty"},
            {"CachedProjectileGravityScale", 0xA8C, "FloatProperty"},
            {"CachedWeaponUsedToCalculateProjectileData", 0xA90, "ObjectProperty"},
            {"StatManager", 0xA98, "ObjectProperty"},
            {"ActiveWeakSpots", 0xAA0, "ArrayProperty"},
            {"CacheBotPawnClass", 0xAC0, "ClassProperty"},
            {"CurrentLootActor", 0xAD0, "ObjectProperty"},
            {"MarkerComponent", 0xAD8, "ObjectProperty"},
            {"BotPlayerName", 0xAE0, "StrProperty"},
            {"BotIDSuffix", 0xAF0, "StrProperty"},
            {"BotPlayerNameWithSkillRating", 0xB00, "StrProperty"},
            {"PolicyDataSpawner", 0xB38, "ObjectProperty"},
            {"PerceivedSounds", 0xB40, "StructProperty"},
            {"FortControllerComponent_Telemetry", 0xC58, "ObjectProperty"},
            {"bForceUsingBuildingTool", 0xC60, "BoolProperty"},
            {"bForceHolsterWeapon", 0xC61, "BoolProperty"},
            {"PendingEquipWeapon", 0xC68, "ObjectProperty"},
            {"PlayerToSpectateOnDeath", 0xCE0, "ObjectProperty"},
            {"OnPlayerPawnAISpawnedDelegate", 0xCE8, "MulticastInlineDelegateProperty"},
            {"OnPawnAISpawnedDelegate", 0xCF8, "MulticastInlineDelegateProperty"},
            {"OnPawnDownedEvent", 0xD08, "MulticastInlineDelegateProperty"},
            {"FortAISenseConfig_SightRuntime", 0xE58, "ObjectProperty"},
            {"AISenseConfig_HearingRuntime", 0xE60, "ObjectProperty"},
            {"BotOwner", 0xE78, "ObjectProperty"},
            {"BotControllerUID", 0xE80, "IntProperty"},
            {"ReviveTarget", 0xE88, "ObjectProperty"},
            {"BotData", 0xF20, "ObjectProperty"},
            {"DebugMinimapData", 0xF30, "StructProperty"},
            {"RevivePlayerPawnToken", 0x10C0, "ObjectProperty"},
            {"LeashActorToFollow", 0x10E8, "ObjectProperty"},
            {"LeashActorToFollowLocalOffset", 0x10F0, "StructProperty"},
            {"CachedAffiliationManager", 0x1108, "ObjectProperty"},
            {"CachedAffiliationComponent", 0x1110, "ObjectProperty"},
            {"bIsAffectedByMutatorHealthAndShieldModifiers", 0x1118, "BoolProperty"},
            {"bHasChangedPawnCullDistanceToAggroMode", 0x1120, "BoolProperty"},
            {"RespawnRuntimeParameters", 0x1128, "ObjectProperty"},
            {"CurrentBlockingObstacle", 0x1130, "WeakObjectProperty"},
            {"CurrentTargetVehicle", 0x1138, "WeakObjectProperty"},
            {"NoSmashActors", 0x1150, "ArrayProperty"},
            {"FinisherPawn", 0x1170, "ObjectProperty"},
            {"bPostponeGiveWeaponCheat", 0x1250, "BoolProperty"},
            {"bPostponeGiveMaterialsCheat", 0x1251, "BoolProperty"},
            {"StartSpectatingTime", 0x1254, "FloatProperty"},
            {"MovementDirOverride", 0x1298, "StructProperty"},
            {"bHasIncreasedLethalityAgainstBots", 0x12B0, "BoolProperty"},
            {"bIsInProximityOfPlayer", 0x12B1, "BoolProperty"},
            {"CachedNearbyActorsPerceptionComponent", 0x12B4, "WeakObjectProperty"},
            {"RequestedEmoteAsset", 0x13E0, "ObjectProperty"},
            {"BTAssetToRunOnPawnAISpawned", 0x1418, "ObjectProperty"},
            {"DescriptorTag", 0x1420, "StructProperty"},
            {"PawnAIJumpComponentPtr", 0x14C8, "ObjectProperty"},
            {"PlayerAbilitySetBR", 0x1518, "SoftObjectProperty"},
        }};
    };

    struct FortAthenaAIBotCosmeticData
    {
        static constexpr std::string_view Name = "FortAthenaAIBotCosmeticData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticLibraries = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CosmeticLibraries", 0x28, "ArrayProperty"},
        }};
    };

    struct FortAthenaAIBotCosmeticLibraryData
    {
        static constexpr std::string_view Name = "FortAthenaAIBotCosmeticLibraryData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ExcludedCosmeticsRegistryType = 0x28;
            static constexpr std::uintptr_t PredefineSetsDataTable = 0x30;
            static constexpr std::uintptr_t CharactersDataTable = 0x50;
            static constexpr std::uintptr_t GlidersDataTable = 0x70;
            static constexpr std::uintptr_t SkyDiveContrailsDataTable = 0x90;
            static constexpr std::uintptr_t BackpacksDataTable = 0xB0;
            static constexpr std::uintptr_t PickaxesDataTable = 0xD0;
            static constexpr std::uintptr_t ShoesDataTable = 0xF0;
            static constexpr std::uintptr_t FallbackCharactersDataTable = 0x110;
            static constexpr std::uintptr_t EmotesDataTable = 0x130;
            static constexpr std::uintptr_t AurasDataTable = 0x150;
            static constexpr std::uintptr_t JamsDataTable = 0x170;
            static constexpr std::uintptr_t BannerIconDataTable = 0x190;
            static constexpr std::uintptr_t BannerColorDataTable = 0x1B0;
            static constexpr std::uintptr_t OddsToUseSameSetCosmeticItems = 0x1D0;
            static constexpr std::uintptr_t OddsToUseRandomItemWhenNoneFromSetAvailable = 0x1F8;
            static constexpr std::uintptr_t OddsToUseShoes = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"ExcludedCosmeticsRegistryType", 0x28, "StructProperty"},
            {"PredefineSetsDataTable", 0x30, "SoftObjectProperty"},
            {"CharactersDataTable", 0x50, "SoftObjectProperty"},
            {"GlidersDataTable", 0x70, "SoftObjectProperty"},
            {"SkyDiveContrailsDataTable", 0x90, "SoftObjectProperty"},
            {"BackpacksDataTable", 0xB0, "SoftObjectProperty"},
            {"PickaxesDataTable", 0xD0, "SoftObjectProperty"},
            {"ShoesDataTable", 0xF0, "SoftObjectProperty"},
            {"FallbackCharactersDataTable", 0x110, "SoftObjectProperty"},
            {"EmotesDataTable", 0x130, "SoftObjectProperty"},
            {"AurasDataTable", 0x150, "SoftObjectProperty"},
            {"JamsDataTable", 0x170, "SoftObjectProperty"},
            {"BannerIconDataTable", 0x190, "SoftObjectProperty"},
            {"BannerColorDataTable", 0x1B0, "SoftObjectProperty"},
            {"OddsToUseSameSetCosmeticItems", 0x1D0, "StructProperty"},
            {"OddsToUseRandomItemWhenNoneFromSetAvailable", 0x1F8, "StructProperty"},
            {"OddsToUseShoes", 0x220, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotCustomizationData
    {
        static constexpr std::string_view Name = "FortAthenaAIBotCustomizationData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t PawnClass = 0x28;
            static constexpr std::uintptr_t bHasCustomSquadId = 0x30;
            static constexpr std::uintptr_t bRequiresUniqueNetId = 0x30;
            static constexpr std::uintptr_t CustomSquadId = 0x31;
            static constexpr std::uintptr_t bCanRespawnOnDeath = 0x32;
            static constexpr std::uintptr_t bOverrideBehaviorTree = 0x32;
            static constexpr std::uintptr_t bOverrideCanRespawnOnDeath = 0x32;
            static constexpr std::uintptr_t bOverrideCharacterCustomization = 0x32;
            static constexpr std::uintptr_t bOverrideDBNOPlayStyle = 0x32;
            static constexpr std::uintptr_t bOverrideSkillLevel = 0x32;
            static constexpr std::uintptr_t bOverrideSkillSets = 0x32;
            static constexpr std::uintptr_t bUseMatchMMRToOverrideSkillLevel = 0x32;
            static constexpr std::uintptr_t bOverrideBotIDAnalyticsSuffix = 0x33;
            static constexpr std::uintptr_t bOverrideBotNameSettings = 0x33;
            static constexpr std::uintptr_t bOverrideConstructionBuildingInfo = 0x33;
            static constexpr std::uintptr_t bOverrideStartupInventory = 0x33;
            static constexpr std::uintptr_t OverrideSkillLevelMMRTable = 0x38;
            static constexpr std::uintptr_t BehaviorTree = 0x58;
            static constexpr std::uintptr_t OverrideCosmeticMode = 0x60;
            static constexpr std::uintptr_t CharacterCustomization = 0x68;
            static constexpr std::uintptr_t CosmeticCustomizationLibrary = 0x70;
            static constexpr std::uintptr_t DBNOPlayStyle = 0x90;
            static constexpr std::uintptr_t SkillLevel = 0x94;
            static constexpr std::uintptr_t SkillSetOverrideClasses = 0xA0;
            static constexpr std::uintptr_t StartupInventory = 0xB0;
            static constexpr std::uintptr_t BotNameSettings = 0xB8;
            static constexpr std::uintptr_t BotAnalyticsSuffix = 0xC0;
            static constexpr std::uintptr_t SpawnTracePadding = 0xD0;
            static constexpr std::uintptr_t OverrideConstructionBuildingInfo = 0xD8;
            static constexpr std::uintptr_t AILODSettingsContainer = 0x168;
            static constexpr std::uintptr_t AILODSettingsContainerLoaded = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 31> Properties{{
            {"PawnClass", 0x28, "ClassProperty"},
            {"bHasCustomSquadId", 0x30, "BoolProperty"},
            {"bRequiresUniqueNetId", 0x30, "BoolProperty"},
            {"CustomSquadId", 0x31, "ByteProperty"},
            {"bCanRespawnOnDeath", 0x32, "BoolProperty"},
            {"bOverrideBehaviorTree", 0x32, "BoolProperty"},
            {"bOverrideCanRespawnOnDeath", 0x32, "BoolProperty"},
            {"bOverrideCharacterCustomization", 0x32, "BoolProperty"},
            {"bOverrideDBNOPlayStyle", 0x32, "BoolProperty"},
            {"bOverrideSkillLevel", 0x32, "BoolProperty"},
            {"bOverrideSkillSets", 0x32, "BoolProperty"},
            {"bUseMatchMMRToOverrideSkillLevel", 0x32, "BoolProperty"},
            {"bOverrideBotIDAnalyticsSuffix", 0x33, "BoolProperty"},
            {"bOverrideBotNameSettings", 0x33, "BoolProperty"},
            {"bOverrideConstructionBuildingInfo", 0x33, "BoolProperty"},
            {"bOverrideStartupInventory", 0x33, "BoolProperty"},
            {"OverrideSkillLevelMMRTable", 0x38, "SoftObjectProperty"},
            {"BehaviorTree", 0x58, "ObjectProperty"},
            {"OverrideCosmeticMode", 0x60, "EnumProperty"},
            {"CharacterCustomization", 0x68, "ObjectProperty"},
            {"CosmeticCustomizationLibrary", 0x70, "SoftObjectProperty"},
            {"DBNOPlayStyle", 0x90, "EnumProperty"},
            {"SkillLevel", 0x94, "FloatProperty"},
            {"SkillSetOverrideClasses", 0xA0, "ArrayProperty"},
            {"StartupInventory", 0xB0, "ObjectProperty"},
            {"BotNameSettings", 0xB8, "ObjectProperty"},
            {"BotAnalyticsSuffix", 0xC0, "StrProperty"},
            {"SpawnTracePadding", 0xD0, "FloatProperty"},
            {"OverrideConstructionBuildingInfo", 0xD8, "StructProperty"},
            {"AILODSettingsContainer", 0x168, "ClassProperty"},
            {"AILODSettingsContainerLoaded", 0x170, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotDBNODigestedSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotDBNODigestedSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotDigestedSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxDBNOCrawlingResponseTime = 0x38;
            static constexpr std::uintptr_t MaxDBNOCrawlingResponseTimeDeviation = 0x3C;
            static constexpr std::uintptr_t AllyEvaluationTime = 0x40;
            static constexpr std::uintptr_t AllyEvaluationTimeDeviation = 0x44;
            static constexpr std::uintptr_t AllyEvaluationMaxDistance = 0x48;
            static constexpr std::uintptr_t OddsToLookForCover = 0x4C;
            static constexpr std::uintptr_t CoverEvaluationTime = 0x50;
            static constexpr std::uintptr_t CoverEvaluationTimeDeviation = 0x54;
            static constexpr std::uintptr_t RollDelay = 0x58;
            static constexpr std::uintptr_t RollDelayDeviation = 0x5C;
            static constexpr std::uintptr_t DodgeRollMinAngleWithPath = 0x60;
            static constexpr std::uintptr_t DodgeRollMaxAngleWithPath = 0x64;
            static constexpr std::uintptr_t SprintMinReplenishingEnergy = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"MaxDBNOCrawlingResponseTime", 0x38, "FloatProperty"},
            {"MaxDBNOCrawlingResponseTimeDeviation", 0x3C, "FloatProperty"},
            {"AllyEvaluationTime", 0x40, "FloatProperty"},
            {"AllyEvaluationTimeDeviation", 0x44, "FloatProperty"},
            {"AllyEvaluationMaxDistance", 0x48, "FloatProperty"},
            {"OddsToLookForCover", 0x4C, "FloatProperty"},
            {"CoverEvaluationTime", 0x50, "FloatProperty"},
            {"CoverEvaluationTimeDeviation", 0x54, "FloatProperty"},
            {"RollDelay", 0x58, "FloatProperty"},
            {"RollDelayDeviation", 0x5C, "FloatProperty"},
            {"DodgeRollMinAngleWithPath", 0x60, "FloatProperty"},
            {"DodgeRollMaxAngleWithPath", 0x64, "FloatProperty"},
            {"SprintMinReplenishingEnergy", 0x68, "FloatProperty"},
        }};
    };

    struct FortAthenaAIBotDBNOSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotDBNOSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxDBNOCrawlingResponseTime = 0x30;
            static constexpr std::uintptr_t MaxDBNOCrawlingResponseTimeDeviation = 0x58;
            static constexpr std::uintptr_t AllyEvaluationTime = 0x80;
            static constexpr std::uintptr_t AllyEvaluationTimeDeviation = 0xA8;
            static constexpr std::uintptr_t AllyEvaluationMaxDistance = 0xD0;
            static constexpr std::uintptr_t OddsToLookForCover = 0xF8;
            static constexpr std::uintptr_t CoverEvaluationTime = 0x120;
            static constexpr std::uintptr_t CoverEvaluationTimeDeviation = 0x148;
            static constexpr std::uintptr_t RollDelay = 0x170;
            static constexpr std::uintptr_t RollDelayDeviation = 0x198;
            static constexpr std::uintptr_t DodgeRollMinAngleWithPath = 0x1C0;
            static constexpr std::uintptr_t DodgeRollMaxAngleWithPath = 0x1E8;
            static constexpr std::uintptr_t SprintMinReplenishingEnergy = 0x210;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"MaxDBNOCrawlingResponseTime", 0x30, "StructProperty"},
            {"MaxDBNOCrawlingResponseTimeDeviation", 0x58, "StructProperty"},
            {"AllyEvaluationTime", 0x80, "StructProperty"},
            {"AllyEvaluationTimeDeviation", 0xA8, "StructProperty"},
            {"AllyEvaluationMaxDistance", 0xD0, "StructProperty"},
            {"OddsToLookForCover", 0xF8, "StructProperty"},
            {"CoverEvaluationTime", 0x120, "StructProperty"},
            {"CoverEvaluationTimeDeviation", 0x148, "StructProperty"},
            {"RollDelay", 0x170, "StructProperty"},
            {"RollDelayDeviation", 0x198, "StructProperty"},
            {"DodgeRollMinAngleWithPath", 0x1C0, "StructProperty"},
            {"DodgeRollMaxAngleWithPath", 0x1E8, "StructProperty"},
            {"SprintMinReplenishingEnergy", 0x210, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotDigestedSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotDigestedSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtractedLevel = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExtractedLevel", 0x28, "IntProperty"},
        }};
    };

    struct FortAthenaAIBotEmoteDigestedSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEmoteDigestedSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotDigestedSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t InfiniteEmoteMinDuration = 0x38;
            static constexpr std::uintptr_t InfiniteEmoteMaxDuration = 0x3C;
            static constexpr std::uintptr_t EmotesMaxCount = 0x40;
            static constexpr std::uintptr_t DanceOnKillMaxDistanceFromKillSqr = 0x44;
            static constexpr std::uintptr_t DanceOnKillMaxTimeFromKill = 0x48;
            static constexpr std::uintptr_t DanceOnKillMinTimeFromLastTry = 0x4C;
            static constexpr std::uintptr_t DanceOnKillChanceToDanceOnBots = 0x50;
            static constexpr std::uintptr_t DanceOnKillChanceToDanceOnPlayers = 0x54;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"InfiniteEmoteMinDuration", 0x38, "FloatProperty"},
            {"InfiniteEmoteMaxDuration", 0x3C, "FloatProperty"},
            {"EmotesMaxCount", 0x40, "IntProperty"},
            {"DanceOnKillMaxDistanceFromKillSqr", 0x44, "FloatProperty"},
            {"DanceOnKillMaxTimeFromKill", 0x48, "FloatProperty"},
            {"DanceOnKillMinTimeFromLastTry", 0x4C, "FloatProperty"},
            {"DanceOnKillChanceToDanceOnBots", 0x50, "FloatProperty"},
            {"DanceOnKillChanceToDanceOnPlayers", 0x54, "FloatProperty"},
        }};
    };

    struct FortAthenaAIBotEmoteSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEmoteSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t InfiniteEmoteMinDuration = 0x30;
            static constexpr std::uintptr_t InfiniteEmoteMaxDuration = 0x58;
            static constexpr std::uintptr_t DanceOnKillMaxDistanceFromKill = 0x80;
            static constexpr std::uintptr_t DanceOnKillMaxTimeFromKill = 0xA8;
            static constexpr std::uintptr_t DanceOnKillMinTimeFromLastTry = 0xD0;
            static constexpr std::uintptr_t DanceOnKillChanceToDanceOnBots = 0xF8;
            static constexpr std::uintptr_t DanceOnKillChanceToDanceOnPlayers = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"InfiniteEmoteMinDuration", 0x30, "StructProperty"},
            {"InfiniteEmoteMaxDuration", 0x58, "StructProperty"},
            {"DanceOnKillMaxDistanceFromKill", 0x80, "StructProperty"},
            {"DanceOnKillMaxTimeFromKill", 0xA8, "StructProperty"},
            {"DanceOnKillMinTimeFromLastTry", 0xD0, "StructProperty"},
            {"DanceOnKillChanceToDanceOnBots", 0xF8, "StructProperty"},
            {"DanceOnKillChanceToDanceOnPlayers", 0x120, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedBotController = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedBotController", 0xA0, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_ImproviseLoot
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_ImproviseLoot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Loot";
        struct Offsets
        {
            static constexpr std::uintptr_t EvalChance = 0x340;
            static constexpr std::uintptr_t LootCheckBoxExtent = 0x368;
            static constexpr std::uintptr_t TargetTagQuery = 0x390;
            static constexpr std::uintptr_t InventoryItemTagQuery = 0x3D8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EvalChance", 0x340, "StructProperty"},
            {"LootCheckBoxExtent", 0x368, "StructProperty"},
            {"TargetTagQuery", 0x390, "StructProperty"},
            {"InventoryItemTagQuery", 0x3D8, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Loot
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Loot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedAIServiceLoot = 0x1B0;
            static constexpr std::uintptr_t LootingSkillSet = 0x1B8;
            static constexpr std::uintptr_t CachedSafeZoneComponent = 0x1C0;
            static constexpr std::uintptr_t CachedBRLogicComp = 0x1C8;
            static constexpr std::uintptr_t LootDestinationKeyName = 0x1E0;
            static constexpr std::uintptr_t LootObjectKeyName = 0x1E4;
            static constexpr std::uintptr_t LootTypeKeyName = 0x1E8;
            static constexpr std::uintptr_t LeashExecutionStatusKeyName = 0x1EC;
            static constexpr std::uintptr_t LootFilterTagQuery = 0x1F0;
            static constexpr std::uintptr_t bCheckGlobalLootReservation = 0x238;
            static constexpr std::uintptr_t CurrentLootOctreeElementId = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"CachedAIServiceLoot", 0x1B0, "ObjectProperty"},
            {"LootingSkillSet", 0x1B8, "ObjectProperty"},
            {"CachedSafeZoneComponent", 0x1C0, "ObjectProperty"},
            {"CachedBRLogicComp", 0x1C8, "WeakObjectProperty"},
            {"LootDestinationKeyName", 0x1E0, "NameProperty"},
            {"LootObjectKeyName", 0x1E4, "NameProperty"},
            {"LootTypeKeyName", 0x1E8, "NameProperty"},
            {"LeashExecutionStatusKeyName", 0x1EC, "NameProperty"},
            {"LootFilterTagQuery", 0x1F0, "StructProperty"},
            {"bCheckGlobalLootReservation", 0x238, "BoolProperty"},
            {"CurrentLootOctreeElementId", 0x338, "UInt32Property"},
        }};
    };

    struct FortAthenaAIBotEvaluator_Movement
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvaluator_Movement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIEvaluator_Movement";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedBotController = 0x198;
            static constexpr std::uintptr_t CachedAIServicePlayerBots = 0x1A0;
            static constexpr std::uintptr_t CachedMovementDigestedSkillSet = 0x1A8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CachedBotController", 0x198, "ObjectProperty"},
            {"CachedAIServicePlayerBots", 0x1A0, "ObjectProperty"},
            {"CachedMovementDigestedSkillSet", 0x1A8, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotEvasiveManeuversDigestedSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvasiveManeuversDigestedSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotDigestedSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultEvasiveManeuverSkillSettings = 0x40;
            static constexpr std::uintptr_t EvasiveManeuverSkillSettingsSpecializations = 0x98;
            static constexpr std::uintptr_t JetpackStrafeDelay = 0xA8;
            static constexpr std::uintptr_t JetpackStrafeRandomDeviationDelay = 0xAC;
            static constexpr std::uintptr_t JetpackStrafeOverlayWeight = 0xB0;
            static constexpr std::uintptr_t JetpackStrafeDistanceMax = 0xB4;
            static constexpr std::uintptr_t JetpackStrafeDistanceMin = 0xB8;
            static constexpr std::uintptr_t JetpackStrafeActivationTime = 0xBC;
            static constexpr std::uintptr_t JetpackStrafeActivationTimeRandomDeviation = 0xC0;
            static constexpr std::uintptr_t JetpackStrafeTime = 0xC4;
            static constexpr std::uintptr_t JetpackStrafeTimeRandomDeviation = 0xC8;
            static constexpr std::uintptr_t DodgeMaxDistanceSquared = 0xCC;
            static constexpr std::uintptr_t CrouchMaxDistanceSquared = 0xD0;
            static constexpr std::uintptr_t CrouchMinDistanceSquared = 0xD4;
            static constexpr std::uintptr_t JumpMaxDistanceSquared = 0xD8;
            static constexpr std::uintptr_t JetpackStrafeMaxDistanceSquared = 0xDC;
            static constexpr std::uintptr_t AvoidProjectilesReactionDistanceSqr = 0xE0;
            static constexpr std::uintptr_t AvoidProjectilesReactionTimeMin = 0xE4;
            static constexpr std::uintptr_t AvoidProjectilesReactionTimeMax = 0xE8;
            static constexpr std::uintptr_t AvoidProjectilesEvasiveDistanceMin = 0xEC;
            static constexpr std::uintptr_t AvoidProjectilesEvasiveDistanceMax = 0xF0;
            static constexpr std::uintptr_t AvoidPhysicsObjectsReactionDistanceMin = 0xF4;
            static constexpr std::uintptr_t AvoidPhysicsObjectsReactionDistanceMax = 0xF8;
            static constexpr std::uintptr_t AvoidPhysicsObjectsSpeedMin = 0xFC;
            static constexpr std::uintptr_t AvoidPhysicsObjectsSpeedMax = 0x100;
            static constexpr std::uintptr_t CanUseEvasiveManeuversTagQuery = 0x108;
            static constexpr std::uintptr_t bCanCrouchInUrgentMovement = 0x150;
            static constexpr std::uintptr_t bCanDodgeInUrgentMovement = 0x151;
            static constexpr std::uintptr_t bCanJumpInUrgentMovement = 0x152;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"DefaultEvasiveManeuverSkillSettings", 0x40, "StructProperty"},
            {"EvasiveManeuverSkillSettingsSpecializations", 0x98, "ArrayProperty"},
            {"JetpackStrafeDelay", 0xA8, "FloatProperty"},
            {"JetpackStrafeRandomDeviationDelay", 0xAC, "FloatProperty"},
            {"JetpackStrafeOverlayWeight", 0xB0, "FloatProperty"},
            {"JetpackStrafeDistanceMax", 0xB4, "FloatProperty"},
            {"JetpackStrafeDistanceMin", 0xB8, "FloatProperty"},
            {"JetpackStrafeActivationTime", 0xBC, "FloatProperty"},
            {"JetpackStrafeActivationTimeRandomDeviation", 0xC0, "FloatProperty"},
            {"JetpackStrafeTime", 0xC4, "FloatProperty"},
            {"JetpackStrafeTimeRandomDeviation", 0xC8, "FloatProperty"},
            {"DodgeMaxDistanceSquared", 0xCC, "FloatProperty"},
            {"CrouchMaxDistanceSquared", 0xD0, "FloatProperty"},
            {"CrouchMinDistanceSquared", 0xD4, "FloatProperty"},
            {"JumpMaxDistanceSquared", 0xD8, "FloatProperty"},
            {"JetpackStrafeMaxDistanceSquared", 0xDC, "FloatProperty"},
            {"AvoidProjectilesReactionDistanceSqr", 0xE0, "FloatProperty"},
            {"AvoidProjectilesReactionTimeMin", 0xE4, "FloatProperty"},
            {"AvoidProjectilesReactionTimeMax", 0xE8, "FloatProperty"},
            {"AvoidProjectilesEvasiveDistanceMin", 0xEC, "FloatProperty"},
            {"AvoidProjectilesEvasiveDistanceMax", 0xF0, "FloatProperty"},
            {"AvoidPhysicsObjectsReactionDistanceMin", 0xF4, "FloatProperty"},
            {"AvoidPhysicsObjectsReactionDistanceMax", 0xF8, "FloatProperty"},
            {"AvoidPhysicsObjectsSpeedMin", 0xFC, "FloatProperty"},
            {"AvoidPhysicsObjectsSpeedMax", 0x100, "FloatProperty"},
            {"CanUseEvasiveManeuversTagQuery", 0x108, "StructProperty"},
            {"bCanCrouchInUrgentMovement", 0x150, "BoolProperty"},
            {"bCanDodgeInUrgentMovement", 0x151, "BoolProperty"},
            {"bCanJumpInUrgentMovement", 0x152, "BoolProperty"},
        }};
    };

    struct FortAthenaAIBotEvasiveManeuversSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotEvasiveManeuversSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultEvasiveManeuverSkillSettings = 0x30;
            static constexpr std::uintptr_t EvasiveManeuverSkillSettingsSpecializations = 0x288;
            static constexpr std::uintptr_t JetpackStrafeOverlayWeight = 0x298;
            static constexpr std::uintptr_t JetpackStrafeDelay = 0x2C0;
            static constexpr std::uintptr_t JetpackStrafeRandomDeviationDelay = 0x2E8;
            static constexpr std::uintptr_t JetpackStrafeDistanceMax = 0x310;
            static constexpr std::uintptr_t JetpackStrafeDistanceMin = 0x338;
            static constexpr std::uintptr_t JetpackStrafeActivationTime = 0x360;
            static constexpr std::uintptr_t JetpackStrafeActivationTimeRandomDeviation = 0x388;
            static constexpr std::uintptr_t JetpackStrafeTime = 0x3B0;
            static constexpr std::uintptr_t JetpackStrafeTimeRandomDeviation = 0x3D8;
            static constexpr std::uintptr_t DodgeMaxDistance = 0x400;
            static constexpr std::uintptr_t CanDodgeInUrgentMovement = 0x428;
            static constexpr std::uintptr_t CrouchMaxDistance = 0x450;
            static constexpr std::uintptr_t CrouchMinDistance = 0x478;
            static constexpr std::uintptr_t CanCrouchInUrgentMovement = 0x4A0;
            static constexpr std::uintptr_t JumpMaxDistance = 0x4C8;
            static constexpr std::uintptr_t CanJumpInUrgentMovement = 0x4F0;
            static constexpr std::uintptr_t JetpackStrafeMaxDistance = 0x518;
            static constexpr std::uintptr_t AvoidProjectilesReactionDistanceMax = 0x540;
            static constexpr std::uintptr_t AvoidProjectilesReactionTimeMin = 0x568;
            static constexpr std::uintptr_t AvoidProjectilesReactionTimeMax = 0x590;
            static constexpr std::uintptr_t AvoidProjectilesEvasiveDistanceMin = 0x5B8;
            static constexpr std::uintptr_t AvoidProjectilesEvasiveDistanceMax = 0x5E0;
            static constexpr std::uintptr_t AvoidPhysicsObjectsReactionDistanceMin = 0x608;
            static constexpr std::uintptr_t AvoidPhysicsObjectsReactionDistanceMax = 0x630;
            static constexpr std::uintptr_t AvoidPhysicsObjectsSpeedMin = 0x658;
            static constexpr std::uintptr_t AvoidPhysicsObjectsSpeedMax = 0x680;
            static constexpr std::uintptr_t CanUseEvasiveManeuversTagQuery = 0x6A8;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"DefaultEvasiveManeuverSkillSettings", 0x30, "StructProperty"},
            {"EvasiveManeuverSkillSettingsSpecializations", 0x288, "ArrayProperty"},
            {"JetpackStrafeOverlayWeight", 0x298, "StructProperty"},
            {"JetpackStrafeDelay", 0x2C0, "StructProperty"},
            {"JetpackStrafeRandomDeviationDelay", 0x2E8, "StructProperty"},
            {"JetpackStrafeDistanceMax", 0x310, "StructProperty"},
            {"JetpackStrafeDistanceMin", 0x338, "StructProperty"},
            {"JetpackStrafeActivationTime", 0x360, "StructProperty"},
            {"JetpackStrafeActivationTimeRandomDeviation", 0x388, "StructProperty"},
            {"JetpackStrafeTime", 0x3B0, "StructProperty"},
            {"JetpackStrafeTimeRandomDeviation", 0x3D8, "StructProperty"},
            {"DodgeMaxDistance", 0x400, "StructProperty"},
            {"CanDodgeInUrgentMovement", 0x428, "StructProperty"},
            {"CrouchMaxDistance", 0x450, "StructProperty"},
            {"CrouchMinDistance", 0x478, "StructProperty"},
            {"CanCrouchInUrgentMovement", 0x4A0, "StructProperty"},
            {"JumpMaxDistance", 0x4C8, "StructProperty"},
            {"CanJumpInUrgentMovement", 0x4F0, "StructProperty"},
            {"JetpackStrafeMaxDistance", 0x518, "StructProperty"},
            {"AvoidProjectilesReactionDistanceMax", 0x540, "StructProperty"},
            {"AvoidProjectilesReactionTimeMin", 0x568, "StructProperty"},
            {"AvoidProjectilesReactionTimeMax", 0x590, "StructProperty"},
            {"AvoidProjectilesEvasiveDistanceMin", 0x5B8, "StructProperty"},
            {"AvoidProjectilesEvasiveDistanceMax", 0x5E0, "StructProperty"},
            {"AvoidPhysicsObjectsReactionDistanceMin", 0x608, "StructProperty"},
            {"AvoidPhysicsObjectsReactionDistanceMax", 0x630, "StructProperty"},
            {"AvoidPhysicsObjectsSpeedMin", 0x658, "StructProperty"},
            {"AvoidPhysicsObjectsSpeedMax", 0x680, "StructProperty"},
            {"CanUseEvasiveManeuversTagQuery", 0x6A8, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotHarvestDigestedSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotHarvestDigestedSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotDigestedSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t DelayBetweenHarvest = 0x38;
            static constexpr std::uintptr_t DeviationTimeBetweenHarvest = 0x3C;
            static constexpr std::uintptr_t HarvestingMaxDistanceSquared = 0x40;
            static constexpr std::uintptr_t WeakSpotHitProbability = 0x44;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DelayBetweenHarvest", 0x38, "FloatProperty"},
            {"DeviationTimeBetweenHarvest", 0x3C, "FloatProperty"},
            {"HarvestingMaxDistanceSquared", 0x40, "FloatProperty"},
            {"WeakSpotHitProbability", 0x44, "FloatProperty"},
        }};
    };

    struct FortAthenaAIBotHarvestSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotHarvestSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t DelayBetweenHarvest = 0x30;
            static constexpr std::uintptr_t DeviationTimeBetweenHarvest = 0x58;
            static constexpr std::uintptr_t HarvestingMaxDistance = 0x80;
            static constexpr std::uintptr_t WeakSpotHitProbability = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DelayBetweenHarvest", 0x30, "StructProperty"},
            {"DeviationTimeBetweenHarvest", 0x58, "StructProperty"},
            {"HarvestingMaxDistance", 0x80, "StructProperty"},
            {"WeakSpotHitProbability", 0xA8, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotHealingDigestedSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotHealingDigestedSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotDigestedSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t HealthItemsList = 0x38;
            static constexpr std::uintptr_t HealthItemsSpecializations = 0x48;
            static constexpr std::uintptr_t ShieldItemsList = 0x58;
            static constexpr std::uintptr_t ShieldItemsSpecializations = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"HealthItemsList", 0x38, "StructProperty"},
            {"HealthItemsSpecializations", 0x48, "ArrayProperty"},
            {"ShieldItemsList", 0x58, "StructProperty"},
            {"ShieldItemsSpecializations", 0x68, "ArrayProperty"},
        }};
    };

    struct FortAthenaAIBotHealingSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotHealingSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t HealthItemsList = 0x30;
            static constexpr std::uintptr_t HealthItemsSpecializations = 0x40;
            static constexpr std::uintptr_t ShieldItemsList = 0x50;
            static constexpr std::uintptr_t ShieldItemsSpecializations = 0x60;
            static constexpr std::uintptr_t MobileConsumableTagQuery = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"HealthItemsList", 0x30, "StructProperty"},
            {"HealthItemsSpecializations", 0x40, "ArrayProperty"},
            {"ShieldItemsList", 0x50, "StructProperty"},
            {"ShieldItemsSpecializations", 0x60, "ArrayProperty"},
            {"MobileConsumableTagQuery", 0x70, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotInventoryDigestedSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotInventoryDigestedSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotDigestedSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultWeaponSelectionDistance = 0x38;
            static constexpr std::uintptr_t DefaultWeaponSelectionDistanceDeviation = 0x3C;
            static constexpr std::uintptr_t bHasInfiniteResources = 0x40;
            static constexpr std::uintptr_t bHasInfiniteAmmoForAllWeapons = 0x41;
            static constexpr std::uintptr_t bHasInfiniteDurabilityForAllWeapons = 0x42;
            static constexpr std::uintptr_t InventorySlotPreferences = 0x48;
            static constexpr std::uintptr_t EquipWeaponInfo = 0x58;
            static constexpr std::uintptr_t TargetEffectivenessInfo = 0x68;
            static constexpr std::uintptr_t bShouldPrioritizeRangedWeaponWithoutTarget = 0x78;
            static constexpr std::uintptr_t InfiniteAmmoCheats = 0x80;
            static constexpr std::uintptr_t MaterialItems = 0xA0;
            static constexpr std::uintptr_t GiveMaterialsToBotFrequency = 0xB0;
            static constexpr std::uintptr_t CheckLoadedAmmoForInfiniteAmmoCheats = 0xB8;
            static constexpr std::uintptr_t NoWeaponGiveWeaponAfterTime = 0xD8;
            static constexpr std::uintptr_t NoWeaponNoPlayerConeDistance = 0xDC;
            static constexpr std::uintptr_t NoWeaponNoPlayerConeFOV = 0xE0;
            static constexpr std::uintptr_t NoWeaponLootTierGroup = 0xE4;
            static constexpr std::uintptr_t IgnoredAsWeaponTags = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"DefaultWeaponSelectionDistance", 0x38, "FloatProperty"},
            {"DefaultWeaponSelectionDistanceDeviation", 0x3C, "FloatProperty"},
            {"bHasInfiniteResources", 0x40, "BoolProperty"},
            {"bHasInfiniteAmmoForAllWeapons", 0x41, "BoolProperty"},
            {"bHasInfiniteDurabilityForAllWeapons", 0x42, "BoolProperty"},
            {"InventorySlotPreferences", 0x48, "ArrayProperty"},
            {"EquipWeaponInfo", 0x58, "ArrayProperty"},
            {"TargetEffectivenessInfo", 0x68, "ArrayProperty"},
            {"bShouldPrioritizeRangedWeaponWithoutTarget", 0x78, "BoolProperty"},
            {"InfiniteAmmoCheats", 0x80, "StructProperty"},
            {"MaterialItems", 0xA0, "ArrayProperty"},
            {"GiveMaterialsToBotFrequency", 0xB0, "FloatProperty"},
            {"CheckLoadedAmmoForInfiniteAmmoCheats", 0xB8, "StructProperty"},
            {"NoWeaponGiveWeaponAfterTime", 0xD8, "FloatProperty"},
            {"NoWeaponNoPlayerConeDistance", 0xDC, "FloatProperty"},
            {"NoWeaponNoPlayerConeFOV", 0xE0, "FloatProperty"},
            {"NoWeaponLootTierGroup", 0xE4, "NameProperty"},
            {"IgnoredAsWeaponTags", 0xE8, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotInventoryItems
    {
        static constexpr std::string_view Name = "FortAthenaAIBotInventoryItems";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Items", 0x28, "ArrayProperty"},
        }};
    };

    struct FortAthenaAIBotInventorySkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotInventorySkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultWeaponSelectionDistance = 0x30;
            static constexpr std::uintptr_t DefaultWeaponSelectionDistanceDeviation = 0x58;
            static constexpr std::uintptr_t HasInfiniteResources = 0x80;
            static constexpr std::uintptr_t InventorySlotPreferences = 0xA8;
            static constexpr std::uintptr_t InventorySlotPreference = 0xB8;
            static constexpr std::uintptr_t EquipWeaponInfo = 0x178;
            static constexpr std::uintptr_t WeaponTargetEffectivenessRegistry = 0x188;
            static constexpr std::uintptr_t ShouldPrioritizeRangedWeaponWithoutTarget = 0x190;
            static constexpr std::uintptr_t HasInfiniteAmmoForAllWeapons = 0x1B8;
            static constexpr std::uintptr_t HasInfiniteDurabilityForAllWeapons = 0x1E0;
            static constexpr std::uintptr_t AmmoCheats = 0x208;
            static constexpr std::uintptr_t MaterialItems = 0x218;
            static constexpr std::uintptr_t GiveMaterialsToBotFrequency = 0x228;
            static constexpr std::uintptr_t NoWeaponGiveWeaponAfterTime = 0x250;
            static constexpr std::uintptr_t NoWeaponNoPlayerConeDistance = 0x278;
            static constexpr std::uintptr_t NoWeaponNoPlayerConeFOV = 0x2A0;
            static constexpr std::uintptr_t NoWeaponLootTierGroup = 0x2C8;
            static constexpr std::uintptr_t IgnoredAsWeaponTags = 0x2D0;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"DefaultWeaponSelectionDistance", 0x30, "StructProperty"},
            {"DefaultWeaponSelectionDistanceDeviation", 0x58, "StructProperty"},
            {"HasInfiniteResources", 0x80, "StructProperty"},
            {"InventorySlotPreferences", 0xA8, "ArrayProperty"},
            {"InventorySlotPreference", 0xB8, "StructProperty"},
            {"EquipWeaponInfo", 0x178, "ArrayProperty"},
            {"WeaponTargetEffectivenessRegistry", 0x188, "ObjectProperty"},
            {"ShouldPrioritizeRangedWeaponWithoutTarget", 0x190, "StructProperty"},
            {"HasInfiniteAmmoForAllWeapons", 0x1B8, "StructProperty"},
            {"HasInfiniteDurabilityForAllWeapons", 0x1E0, "StructProperty"},
            {"AmmoCheats", 0x208, "ArrayProperty"},
            {"MaterialItems", 0x218, "ArrayProperty"},
            {"GiveMaterialsToBotFrequency", 0x228, "StructProperty"},
            {"NoWeaponGiveWeaponAfterTime", 0x250, "StructProperty"},
            {"NoWeaponNoPlayerConeDistance", 0x278, "StructProperty"},
            {"NoWeaponNoPlayerConeFOV", 0x2A0, "StructProperty"},
            {"NoWeaponLootTierGroup", 0x2C8, "NameProperty"},
            {"IgnoredAsWeaponTags", 0x2D0, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotLootingDigestedSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotLootingDigestedSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotDigestedSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t ThresholdDistanceToSwitchLootItem = 0x38;
            static constexpr std::uintptr_t ThresholdDistanceSquaredToRescanForBetterLoot = 0x3C;
            static constexpr std::uintptr_t ThresholdTimeToRescanForBetterLoot = 0x40;
            static constexpr std::uintptr_t OctreeBoxHalfExtent = 0x48;
            static constexpr std::uintptr_t LootStateEvaluationRadiusSq = 0x60;
            static constexpr std::uintptr_t bShouldHastyFillInventory = 0x64;
            static constexpr std::uintptr_t MinLootDurationPerPOI = 0x68;
            static constexpr std::uintptr_t MaxLootDurationPerPOI = 0x6C;
            static constexpr std::uintptr_t LootPickupInteractionTime = 0x70;
            static constexpr std::uintptr_t LootPickupInteractionDeviationTime = 0x74;
            static constexpr std::uintptr_t Distance2DScore = 0x78;
            static constexpr std::uintptr_t HeightScore = 0x7C;
            static constexpr std::uintptr_t ThreatMaxScore = 0x80;
            static constexpr std::uintptr_t ThreatProximityScoreTable = 0x88;
            static constexpr std::uintptr_t HealthItemScore = 0xB0;
            static constexpr std::uintptr_t PrioritizeWeaponScore = 0xB4;
            static constexpr std::uintptr_t PoiSelectionDistanceScore = 0xB8;
            static constexpr std::uintptr_t PoiSelectionBotPresenceScore = 0xBC;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"ThresholdDistanceToSwitchLootItem", 0x38, "FloatProperty"},
            {"ThresholdDistanceSquaredToRescanForBetterLoot", 0x3C, "FloatProperty"},
            {"ThresholdTimeToRescanForBetterLoot", 0x40, "FloatProperty"},
            {"OctreeBoxHalfExtent", 0x48, "StructProperty"},
            {"LootStateEvaluationRadiusSq", 0x60, "FloatProperty"},
            {"bShouldHastyFillInventory", 0x64, "BoolProperty"},
            {"MinLootDurationPerPOI", 0x68, "FloatProperty"},
            {"MaxLootDurationPerPOI", 0x6C, "FloatProperty"},
            {"LootPickupInteractionTime", 0x70, "FloatProperty"},
            {"LootPickupInteractionDeviationTime", 0x74, "FloatProperty"},
            {"Distance2DScore", 0x78, "FloatProperty"},
            {"HeightScore", 0x7C, "FloatProperty"},
            {"ThreatMaxScore", 0x80, "FloatProperty"},
            {"ThreatProximityScoreTable", 0x88, "StructProperty"},
            {"HealthItemScore", 0xB0, "FloatProperty"},
            {"PrioritizeWeaponScore", 0xB4, "FloatProperty"},
            {"PoiSelectionDistanceScore", 0xB8, "FloatProperty"},
            {"PoiSelectionBotPresenceScore", 0xBC, "FloatProperty"},
        }};
    };

    struct FortAthenaAIBotLootingSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotLootingSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t ThresholdDistanceToSwitchLootItem = 0x30;
            static constexpr std::uintptr_t ThresholdDistanceToRescanForBetterLoot = 0x58;
            static constexpr std::uintptr_t ThresholdTimeToRescanForBetterLoot = 0x80;
            static constexpr std::uintptr_t OctreeBoxExtent = 0xA8;
            static constexpr std::uintptr_t LootStateEvaluationRadius = 0xC0;
            static constexpr std::uintptr_t ShouldHastilyFillInventory = 0xE8;
            static constexpr std::uintptr_t MinLootDurationPerPOI = 0x110;
            static constexpr std::uintptr_t MaxLootDurationPerPOI = 0x138;
            static constexpr std::uintptr_t LootPickupInteractionTime = 0x160;
            static constexpr std::uintptr_t LootPickupInteractionDeviationTime = 0x188;
            static constexpr std::uintptr_t Distance2DScore = 0x1B0;
            static constexpr std::uintptr_t HeightScore = 0x1D8;
            static constexpr std::uintptr_t ThreatMaxScore = 0x200;
            static constexpr std::uintptr_t ThreatProximityScoreTable = 0x228;
            static constexpr std::uintptr_t PrioritizeWeaponScore = 0x250;
            static constexpr std::uintptr_t HealthItemScore = 0x278;
            static constexpr std::uintptr_t PoiSelectionDistanceScore = 0x2A0;
            static constexpr std::uintptr_t PoiSelectionBotPresenceScore = 0x2C8;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"ThresholdDistanceToSwitchLootItem", 0x30, "StructProperty"},
            {"ThresholdDistanceToRescanForBetterLoot", 0x58, "StructProperty"},
            {"ThresholdTimeToRescanForBetterLoot", 0x80, "StructProperty"},
            {"OctreeBoxExtent", 0xA8, "StructProperty"},
            {"LootStateEvaluationRadius", 0xC0, "StructProperty"},
            {"ShouldHastilyFillInventory", 0xE8, "StructProperty"},
            {"MinLootDurationPerPOI", 0x110, "StructProperty"},
            {"MaxLootDurationPerPOI", 0x138, "StructProperty"},
            {"LootPickupInteractionTime", 0x160, "StructProperty"},
            {"LootPickupInteractionDeviationTime", 0x188, "StructProperty"},
            {"Distance2DScore", 0x1B0, "StructProperty"},
            {"HeightScore", 0x1D8, "StructProperty"},
            {"ThreatMaxScore", 0x200, "StructProperty"},
            {"ThreatProximityScoreTable", 0x228, "StructProperty"},
            {"PrioritizeWeaponScore", 0x250, "StructProperty"},
            {"HealthItemScore", 0x278, "StructProperty"},
            {"PoiSelectionDistanceScore", 0x2A0, "StructProperty"},
            {"PoiSelectionBotPresenceScore", 0x2C8, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotMovementDigestedSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotMovementDigestedSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotDigestedSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t SlowDownDistanceSquared = 0x38;
            static constexpr std::uintptr_t TraversalSpeedEstimation = 0x3C;
            static constexpr std::uintptr_t TraversalSpeedEstimationWithThreat = 0x40;
            static constexpr std::uintptr_t bOffPathDetectionEnabled = 0x44;
            static constexpr std::uintptr_t OffPathDistanceThresholdSquared = 0x48;
            static constexpr std::uintptr_t GliderNoiseMinDistance = 0x4C;
            static constexpr std::uintptr_t GliderNoiseMaxDistance = 0x50;
            static constexpr std::uintptr_t GliderNoiseMinDelay = 0x54;
            static constexpr std::uintptr_t GliderNoiseMaxDelay = 0x58;
            static constexpr std::uintptr_t GliderNoiseDistanceTreshold = 0x5C;
            static constexpr std::uintptr_t GliderStopRotationDistance = 0x60;
            static constexpr std::uintptr_t GliderLandingDistance = 0x64;
            static constexpr std::uintptr_t GliderRotationLerpDuration = 0x68;
            static constexpr std::uintptr_t GliderBehaviorEnableFlag = 0x6C;
            static constexpr std::uintptr_t GliderBehaviorMinInterval = 0x70;
            static constexpr std::uintptr_t GliderBehaviorMaxInterval = 0x74;
            static constexpr std::uintptr_t GliderBehaviorMinRadius = 0x78;
            static constexpr std::uintptr_t GliderBehaviorMaxRadius = 0x7C;
            static constexpr std::uintptr_t GliderBehaviorSurveyProbability = 0x80;
            static constexpr std::uintptr_t GliderMovementTypeEnableFlag = 0x84;
            static constexpr std::uintptr_t GliderLinearProbability = 0x88;
            static constexpr std::uintptr_t GliderSpiralMinRadius = 0x8C;
            static constexpr std::uintptr_t GliderSpiralMaxRadius = 0x90;
            static constexpr std::uintptr_t GliderSpiralMinAngle = 0x94;
            static constexpr std::uintptr_t GliderSpiralMaxAngle = 0x98;
            static constexpr std::uintptr_t GliderSpiralMinInterval = 0x9C;
            static constexpr std::uintptr_t GliderSpiralMaxInterval = 0xA0;
            static constexpr std::uintptr_t GliderSpiralProbability = 0xA4;
            static constexpr std::uintptr_t GliderSerpentineMinAngle = 0xA8;
            static constexpr std::uintptr_t GliderSerpentineMaxAngle = 0xAC;
            static constexpr std::uintptr_t GliderSerpentineMinRadius = 0xB0;
            static constexpr std::uintptr_t GliderSerpentineMaxRadius = 0xB4;
            static constexpr std::uintptr_t GliderSerpentineMinInterval = 0xB8;
            static constexpr std::uintptr_t GliderSerpentineMaxInterval = 0xBC;
            static constexpr std::uintptr_t GliderSerpentineMinPeriod = 0xC0;
            static constexpr std::uintptr_t GliderSerpentineMaxPeriod = 0xC4;
            static constexpr std::uintptr_t GliderSerpentineProbability = 0xC8;
            static constexpr std::uintptr_t bEnableGlideEvasiveManeuvers = 0xCC;
            static constexpr std::uintptr_t GliderSwerveAlpha = 0xD0;
            static constexpr std::uintptr_t GliderBackAndForthMinInterval = 0xD4;
            static constexpr std::uintptr_t GliderBackAndForthMaxInterval = 0xD8;
            static constexpr std::uintptr_t GliderBackAndForthMinPeriod = 0xDC;
            static constexpr std::uintptr_t GliderBackAndForthMaxPeriod = 0xE0;
            static constexpr std::uintptr_t GliderEvasionThreatOverlapRadiusSq = 0xE4;
            static constexpr std::uintptr_t GliderEvasionThreatMinDistanceSq = 0xE8;
            static constexpr std::uintptr_t GliderEvasionThreatMaxDistanceSq = 0xEC;
            static constexpr std::uintptr_t GliderEvasionAlignmentDotTolerance = 0xF0;
            static constexpr std::uintptr_t JumpOffMinAngle = 0xF4;
            static constexpr std::uintptr_t JumpOffMaxAngle = 0xF8;
            static constexpr std::uintptr_t JumpOffTimeOffsetMin = 0xFC;
            static constexpr std::uintptr_t JumpOffTimeOffsetMax = 0x100;
            static constexpr std::uintptr_t SkydivingPitchDistanceCurve = 0x104;
            static constexpr std::uintptr_t MinPatrolDistance = 0x10C;
            static constexpr std::uintptr_t MaxPatrolDistance = 0x110;
            static constexpr std::uintptr_t MaxPatrolDistanceRandomDeviation = 0x114;
            static constexpr std::uintptr_t WobbleProbability = 0x118;
            static constexpr std::uintptr_t MaxDelayBetweenWobblingMovement = 0x11C;
            static constexpr std::uintptr_t MaxDelayBetweenWobblingMovementRandomDeviation = 0x120;
            static constexpr std::uintptr_t bAllowSwimWobble = 0x124;
            static constexpr std::uintptr_t MaxWobblingDuration = 0x128;
            static constexpr std::uintptr_t MaxWobblingDurationRandomDeviation = 0x12C;
            static constexpr std::uintptr_t MaxWobblingIntensity = 0x130;
            static constexpr std::uintptr_t WobblingIntensityDeviation = 0x134;
            static constexpr std::uintptr_t MaxWobblingFrequency = 0x138;
            static constexpr std::uintptr_t WobblingFrequencyDeviation = 0x13C;
            static constexpr std::uintptr_t WobblingStickToPathCorridorStrength = 0x140;
            static constexpr std::uintptr_t MaxAfterLaunchedPauseTime = 0x144;
            static constexpr std::uintptr_t MaxAfterLaunchedFromVortexPauseTime = 0x148;
            static constexpr std::uintptr_t AfterLaunchedPauseTimeDeviation = 0x14C;
            static constexpr std::uintptr_t bSteerMovementWhenLaunched = 0x150;
            static constexpr std::uintptr_t SteerMovementWhenLaunchedDirectionUpdateTime = 0x154;
            static constexpr std::uintptr_t MaxReactionTimeToDangerZone = 0x158;
            static constexpr std::uintptr_t MaxReactionTimeToDangerZoneDeviation = 0x15C;
            static constexpr std::uintptr_t PathOffsetDistanceFromCorners = 0x160;
            static constexpr std::uintptr_t bLimitBlockingObstacleAngle = 0x164;
            static constexpr std::uintptr_t bShouldAutoJumpOverBlockingObstacles = 0x165;
            static constexpr std::uintptr_t bShouldAutoJumpOverBlockingObstaclesWhenSwimming = 0x166;
            static constexpr std::uintptr_t bShouldTargetBuildingActorWhenBlocked = 0x167;
            static constexpr std::uintptr_t bShouldTargetPlayerBuiltBuildingActorWhenBlocked = 0x168;
            static constexpr std::uintptr_t bShouldTargetVehicleActorWhenBlocked = 0x169;
            static constexpr std::uintptr_t bEnableSwimSprintJump = 0x16A;
            static constexpr std::uintptr_t SwimSprintJumpDelay = 0x16C;
            static constexpr std::uintptr_t SwimSprintJumpDelayDeviation = 0x170;
            static constexpr std::uintptr_t SwimUnblockJumpHeightThreshold = 0x174;
            static constexpr std::uintptr_t bSwimSprintJumpNav2D = 0x178;
            static constexpr std::uintptr_t TacticalSprintEvaluationMinTime = 0x17C;
            static constexpr std::uintptr_t TacticalSprintEvaluationMaxTime = 0x180;
            static constexpr std::uintptr_t TacticalSprintMinTriggerChance = 0x184;
            static constexpr std::uintptr_t TacticalSprintMaxTriggerChance = 0x188;
            static constexpr std::uintptr_t TacticalSprintMinTriggerChanceInUrgentMovement = 0x18C;
            static constexpr std::uintptr_t TacticalSprintMaxTriggerChanceInUrgentMovement = 0x190;
            static constexpr std::uintptr_t TacticalSprintMaxSlopeAngle = 0x194;
            static constexpr std::uintptr_t TacticalSprintMinPathTargetDistance = 0x198;
            static constexpr std::uintptr_t TacticalSprintMaxPathAlignmentAngle = 0x19C;
            static constexpr std::uintptr_t TacticalSprintMaxPathConeAngle = 0x1A0;
            static constexpr std::uintptr_t TacticalSprintPathConeRearOffset = 0x1A4;
            static constexpr std::uintptr_t TacticalSprintUsageEnabled = 0x1A8;
            static constexpr std::uintptr_t TacticalSprintJumpTriggerChance = 0x1AC;
            static constexpr std::uintptr_t TacticalSprintJumpDelay = 0x1B0;
            static constexpr std::uintptr_t TacticalSprintJumpDelayDeviation = 0x1B4;
            static constexpr std::uintptr_t TacticalSprintJumpDelayInitialRatio = 0x1B8;
            static constexpr std::uintptr_t SlidingBoxExtent = 0x1C0;
            static constexpr std::uintptr_t SlidingEnabled = 0x1D8;
            static constexpr std::uintptr_t SlidingEvaluationMinTime = 0x1E8;
            static constexpr std::uintptr_t SlidingEvaluationMaxTime = 0x1EC;
            static constexpr std::uintptr_t SlidingTriggerChanceStyleMalus = 0x1F0;
            static constexpr std::uintptr_t SlidingTriggerChanceStyleMalusRandomDeviation = 0x1F4;
            static constexpr std::uintptr_t SlidingTriggerChanceFlat = 0x1F8;
            static constexpr std::uintptr_t SlidingTriggerChanceLittleSlope = 0x1FC;
            static constexpr std::uintptr_t SlidingTriggerChanceSteepSlope = 0x200;
            static constexpr std::uintptr_t SlidingDuringUrgentMovementTriggerChanceFlat = 0x204;
            static constexpr std::uintptr_t SlidingDuringUrgentMovementTriggerChanceLittleSlope = 0x208;
            static constexpr std::uintptr_t SlidingDuringUrgentMovementTriggerChanceSteepSlope = 0x20C;
            static constexpr std::uintptr_t MinSlidingDuration = 0x210;
            static constexpr std::uintptr_t SlidingCooldownMinTime = 0x214;
            static constexpr std::uintptr_t SlidingCooldownMaxTime = 0x218;
            static constexpr std::uintptr_t SlidingStopMinDelay = 0x21C;
            static constexpr std::uintptr_t SlidingStopMaxDelay = 0x220;
            static constexpr std::uintptr_t SlidingMaxPathConeAngle = 0x224;
            static constexpr std::uintptr_t SlidingMinPathTargetDistance = 0x228;
            static constexpr std::uintptr_t SlidingAllowResumeFocusOnTargetTriggerChance = 0x22C;
            static constexpr std::uintptr_t bRollLandingEnabled = 0x230;
            static constexpr std::uintptr_t MoveToRangeAttackMinOffset = 0x234;
            static constexpr std::uintptr_t MoveToRangeAttackMaxOffset = 0x238;
            static constexpr std::uintptr_t LKPMinOffset = 0x23C;
            static constexpr std::uintptr_t LKPMaxOffset = 0x240;
            static constexpr std::uintptr_t bInvestigateAllowSearch = 0x244;
            static constexpr std::uintptr_t InvestigateWaitMinTime = 0x248;
            static constexpr std::uintptr_t InvestigateWaitMaxTime = 0x24C;
            static constexpr std::uintptr_t InvestigateSearchMinDistance = 0x250;
            static constexpr std::uintptr_t InvestigateSearchMaxDistance = 0x254;
            static constexpr std::uintptr_t SandTunnelJumpMinTime = 0x258;
            static constexpr std::uintptr_t SandTunnelJumpMaxTime = 0x25C;
            static constexpr std::uintptr_t SandTunnelBurrowedAndHiddenChance = 0x260;
            static constexpr std::uintptr_t SandTunnelBurrowedAndHiddenMinTime = 0x264;
            static constexpr std::uintptr_t SandTunnelBurrowedAndHiddenMaxTime = 0x268;
            static constexpr std::uintptr_t ZiplineOctreeBoxExtent = 0x270;
            static constexpr std::uintptr_t ThresholdDistanceToRescanForZiplines = 0x288;
            static constexpr std::uintptr_t CooldownBetweenZiplineUsages = 0x28C;
            static constexpr std::uintptr_t DistanceToAddToZiplineStartPosition = 0x290;
            static constexpr std::uintptr_t RadiusFromZiplineEnterPointToLookAtExit = 0x294;
            static constexpr std::uintptr_t ZiplineUsageEnabled = 0x298;
            static constexpr std::uintptr_t bCanOpenDoors = 0x299;
            static constexpr std::uintptr_t DefaultKnockbackSettings = 0x2A0;
            static constexpr std::uintptr_t KnockbackSettingsSpecializations = 0x2F0;
            static constexpr std::uintptr_t DigestedFreeFallTransitionSettings = 0x300;
        };

        inline static constexpr std::array<PropertyInfo, 146> Properties{{
            {"SlowDownDistanceSquared", 0x38, "FloatProperty"},
            {"TraversalSpeedEstimation", 0x3C, "FloatProperty"},
            {"TraversalSpeedEstimationWithThreat", 0x40, "FloatProperty"},
            {"bOffPathDetectionEnabled", 0x44, "BoolProperty"},
            {"OffPathDistanceThresholdSquared", 0x48, "FloatProperty"},
            {"GliderNoiseMinDistance", 0x4C, "FloatProperty"},
            {"GliderNoiseMaxDistance", 0x50, "FloatProperty"},
            {"GliderNoiseMinDelay", 0x54, "FloatProperty"},
            {"GliderNoiseMaxDelay", 0x58, "FloatProperty"},
            {"GliderNoiseDistanceTreshold", 0x5C, "FloatProperty"},
            {"GliderStopRotationDistance", 0x60, "FloatProperty"},
            {"GliderLandingDistance", 0x64, "FloatProperty"},
            {"GliderRotationLerpDuration", 0x68, "FloatProperty"},
            {"GliderBehaviorEnableFlag", 0x6C, "BoolProperty"},
            {"GliderBehaviorMinInterval", 0x70, "FloatProperty"},
            {"GliderBehaviorMaxInterval", 0x74, "FloatProperty"},
            {"GliderBehaviorMinRadius", 0x78, "FloatProperty"},
            {"GliderBehaviorMaxRadius", 0x7C, "FloatProperty"},
            {"GliderBehaviorSurveyProbability", 0x80, "FloatProperty"},
            {"GliderMovementTypeEnableFlag", 0x84, "BoolProperty"},
            {"GliderLinearProbability", 0x88, "FloatProperty"},
            {"GliderSpiralMinRadius", 0x8C, "FloatProperty"},
            {"GliderSpiralMaxRadius", 0x90, "FloatProperty"},
            {"GliderSpiralMinAngle", 0x94, "FloatProperty"},
            {"GliderSpiralMaxAngle", 0x98, "FloatProperty"},
            {"GliderSpiralMinInterval", 0x9C, "FloatProperty"},
            {"GliderSpiralMaxInterval", 0xA0, "FloatProperty"},
            {"GliderSpiralProbability", 0xA4, "FloatProperty"},
            {"GliderSerpentineMinAngle", 0xA8, "FloatProperty"},
            {"GliderSerpentineMaxAngle", 0xAC, "FloatProperty"},
            {"GliderSerpentineMinRadius", 0xB0, "FloatProperty"},
            {"GliderSerpentineMaxRadius", 0xB4, "FloatProperty"},
            {"GliderSerpentineMinInterval", 0xB8, "FloatProperty"},
            {"GliderSerpentineMaxInterval", 0xBC, "FloatProperty"},
            {"GliderSerpentineMinPeriod", 0xC0, "FloatProperty"},
            {"GliderSerpentineMaxPeriod", 0xC4, "FloatProperty"},
            {"GliderSerpentineProbability", 0xC8, "FloatProperty"},
            {"bEnableGlideEvasiveManeuvers", 0xCC, "BoolProperty"},
            {"GliderSwerveAlpha", 0xD0, "FloatProperty"},
            {"GliderBackAndForthMinInterval", 0xD4, "FloatProperty"},
            {"GliderBackAndForthMaxInterval", 0xD8, "FloatProperty"},
            {"GliderBackAndForthMinPeriod", 0xDC, "FloatProperty"},
            {"GliderBackAndForthMaxPeriod", 0xE0, "FloatProperty"},
            {"GliderEvasionThreatOverlapRadiusSq", 0xE4, "FloatProperty"},
            {"GliderEvasionThreatMinDistanceSq", 0xE8, "FloatProperty"},
            {"GliderEvasionThreatMaxDistanceSq", 0xEC, "FloatProperty"},
            {"GliderEvasionAlignmentDotTolerance", 0xF0, "FloatProperty"},
            {"JumpOffMinAngle", 0xF4, "FloatProperty"},
            {"JumpOffMaxAngle", 0xF8, "FloatProperty"},
            {"JumpOffTimeOffsetMin", 0xFC, "FloatProperty"},
            {"JumpOffTimeOffsetMax", 0x100, "FloatProperty"},
            {"SkydivingPitchDistanceCurve", 0x104, "WeakObjectProperty"},
            {"MinPatrolDistance", 0x10C, "FloatProperty"},
            {"MaxPatrolDistance", 0x110, "FloatProperty"},
            {"MaxPatrolDistanceRandomDeviation", 0x114, "FloatProperty"},
            {"WobbleProbability", 0x118, "FloatProperty"},
            {"MaxDelayBetweenWobblingMovement", 0x11C, "FloatProperty"},
            {"MaxDelayBetweenWobblingMovementRandomDeviation", 0x120, "FloatProperty"},
            {"bAllowSwimWobble", 0x124, "BoolProperty"},
            {"MaxWobblingDuration", 0x128, "FloatProperty"},
            {"MaxWobblingDurationRandomDeviation", 0x12C, "FloatProperty"},
            {"MaxWobblingIntensity", 0x130, "FloatProperty"},
            {"WobblingIntensityDeviation", 0x134, "FloatProperty"},
            {"MaxWobblingFrequency", 0x138, "FloatProperty"},
            {"WobblingFrequencyDeviation", 0x13C, "FloatProperty"},
            {"WobblingStickToPathCorridorStrength", 0x140, "FloatProperty"},
            {"MaxAfterLaunchedPauseTime", 0x144, "FloatProperty"},
            {"MaxAfterLaunchedFromVortexPauseTime", 0x148, "FloatProperty"},
            {"AfterLaunchedPauseTimeDeviation", 0x14C, "FloatProperty"},
            {"bSteerMovementWhenLaunched", 0x150, "BoolProperty"},
            {"SteerMovementWhenLaunchedDirectionUpdateTime", 0x154, "FloatProperty"},
            {"MaxReactionTimeToDangerZone", 0x158, "FloatProperty"},
            {"MaxReactionTimeToDangerZoneDeviation", 0x15C, "FloatProperty"},
            {"PathOffsetDistanceFromCorners", 0x160, "FloatProperty"},
            {"bLimitBlockingObstacleAngle", 0x164, "BoolProperty"},
            {"bShouldAutoJumpOverBlockingObstacles", 0x165, "BoolProperty"},
            {"bShouldAutoJumpOverBlockingObstaclesWhenSwimming", 0x166, "BoolProperty"},
            {"bShouldTargetBuildingActorWhenBlocked", 0x167, "BoolProperty"},
            {"bShouldTargetPlayerBuiltBuildingActorWhenBlocked", 0x168, "BoolProperty"},
            {"bShouldTargetVehicleActorWhenBlocked", 0x169, "BoolProperty"},
            {"bEnableSwimSprintJump", 0x16A, "BoolProperty"},
            {"SwimSprintJumpDelay", 0x16C, "FloatProperty"},
            {"SwimSprintJumpDelayDeviation", 0x170, "FloatProperty"},
            {"SwimUnblockJumpHeightThreshold", 0x174, "FloatProperty"},
            {"bSwimSprintJumpNav2D", 0x178, "BoolProperty"},
            {"TacticalSprintEvaluationMinTime", 0x17C, "FloatProperty"},
            {"TacticalSprintEvaluationMaxTime", 0x180, "FloatProperty"},
            {"TacticalSprintMinTriggerChance", 0x184, "FloatProperty"},
            {"TacticalSprintMaxTriggerChance", 0x188, "FloatProperty"},
            {"TacticalSprintMinTriggerChanceInUrgentMovement", 0x18C, "FloatProperty"},
            {"TacticalSprintMaxTriggerChanceInUrgentMovement", 0x190, "FloatProperty"},
            {"TacticalSprintMaxSlopeAngle", 0x194, "FloatProperty"},
            {"TacticalSprintMinPathTargetDistance", 0x198, "FloatProperty"},
            {"TacticalSprintMaxPathAlignmentAngle", 0x19C, "FloatProperty"},
            {"TacticalSprintMaxPathConeAngle", 0x1A0, "FloatProperty"},
            {"TacticalSprintPathConeRearOffset", 0x1A4, "FloatProperty"},
            {"TacticalSprintUsageEnabled", 0x1A8, "BoolProperty"},
            {"TacticalSprintJumpTriggerChance", 0x1AC, "FloatProperty"},
            {"TacticalSprintJumpDelay", 0x1B0, "FloatProperty"},
            {"TacticalSprintJumpDelayDeviation", 0x1B4, "FloatProperty"},
            {"TacticalSprintJumpDelayInitialRatio", 0x1B8, "FloatProperty"},
            {"SlidingBoxExtent", 0x1C0, "StructProperty"},
            {"SlidingEnabled", 0x1D8, "FloatProperty"},
            {"SlidingEvaluationMinTime", 0x1E8, "FloatProperty"},
            {"SlidingEvaluationMaxTime", 0x1EC, "FloatProperty"},
            {"SlidingTriggerChanceStyleMalus", 0x1F0, "FloatProperty"},
            {"SlidingTriggerChanceStyleMalusRandomDeviation", 0x1F4, "FloatProperty"},
            {"SlidingTriggerChanceFlat", 0x1F8, "FloatProperty"},
            {"SlidingTriggerChanceLittleSlope", 0x1FC, "FloatProperty"},
            {"SlidingTriggerChanceSteepSlope", 0x200, "FloatProperty"},
            {"SlidingDuringUrgentMovementTriggerChanceFlat", 0x204, "FloatProperty"},
            {"SlidingDuringUrgentMovementTriggerChanceLittleSlope", 0x208, "FloatProperty"},
            {"SlidingDuringUrgentMovementTriggerChanceSteepSlope", 0x20C, "FloatProperty"},
            {"MinSlidingDuration", 0x210, "FloatProperty"},
            {"SlidingCooldownMinTime", 0x214, "FloatProperty"},
            {"SlidingCooldownMaxTime", 0x218, "FloatProperty"},
            {"SlidingStopMinDelay", 0x21C, "FloatProperty"},
            {"SlidingStopMaxDelay", 0x220, "FloatProperty"},
            {"SlidingMaxPathConeAngle", 0x224, "FloatProperty"},
            {"SlidingMinPathTargetDistance", 0x228, "FloatProperty"},
            {"SlidingAllowResumeFocusOnTargetTriggerChance", 0x22C, "FloatProperty"},
            {"bRollLandingEnabled", 0x230, "BoolProperty"},
            {"MoveToRangeAttackMinOffset", 0x234, "FloatProperty"},
            {"MoveToRangeAttackMaxOffset", 0x238, "FloatProperty"},
            {"LKPMinOffset", 0x23C, "FloatProperty"},
            {"LKPMaxOffset", 0x240, "FloatProperty"},
            {"bInvestigateAllowSearch", 0x244, "BoolProperty"},
            {"InvestigateWaitMinTime", 0x248, "FloatProperty"},
            {"InvestigateWaitMaxTime", 0x24C, "FloatProperty"},
            {"InvestigateSearchMinDistance", 0x250, "FloatProperty"},
            {"InvestigateSearchMaxDistance", 0x254, "FloatProperty"},
            {"SandTunnelJumpMinTime", 0x258, "FloatProperty"},
            {"SandTunnelJumpMaxTime", 0x25C, "FloatProperty"},
            {"SandTunnelBurrowedAndHiddenChance", 0x260, "FloatProperty"},
            {"SandTunnelBurrowedAndHiddenMinTime", 0x264, "FloatProperty"},
            {"SandTunnelBurrowedAndHiddenMaxTime", 0x268, "FloatProperty"},
            {"ZiplineOctreeBoxExtent", 0x270, "StructProperty"},
            {"ThresholdDistanceToRescanForZiplines", 0x288, "FloatProperty"},
            {"CooldownBetweenZiplineUsages", 0x28C, "FloatProperty"},
            {"DistanceToAddToZiplineStartPosition", 0x290, "FloatProperty"},
            {"RadiusFromZiplineEnterPointToLookAtExit", 0x294, "FloatProperty"},
            {"ZiplineUsageEnabled", 0x298, "BoolProperty"},
            {"bCanOpenDoors", 0x299, "BoolProperty"},
            {"DefaultKnockbackSettings", 0x2A0, "StructProperty"},
            {"KnockbackSettingsSpecializations", 0x2F0, "ArrayProperty"},
            {"DigestedFreeFallTransitionSettings", 0x300, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotMovementSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotMovementSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t SlowDownDistance = 0x30;
            static constexpr std::uintptr_t TraversalSpeedEstimation = 0x58;
            static constexpr std::uintptr_t TraversalSpeedEstimationWithThreat = 0x80;
            static constexpr std::uintptr_t OffPathDetectionEnabled = 0xA8;
            static constexpr std::uintptr_t OffPathDistanceThreshold = 0xD0;
            static constexpr std::uintptr_t GliderNoiseMinDistance = 0xF8;
            static constexpr std::uintptr_t GliderNoiseMaxDistance = 0x120;
            static constexpr std::uintptr_t GliderNoiseMinDelay = 0x148;
            static constexpr std::uintptr_t GliderNoiseMaxDelay = 0x170;
            static constexpr std::uintptr_t GliderNoiseDistanceTreshold = 0x198;
            static constexpr std::uintptr_t GliderStopRotationDistance = 0x1C0;
            static constexpr std::uintptr_t GliderLandingDistance = 0x1E8;
            static constexpr std::uintptr_t GliderRotationLerpDuration = 0x210;
            static constexpr std::uintptr_t GliderBehaviorEnableFlag = 0x238;
            static constexpr std::uintptr_t GliderBehaviorMinInterval = 0x260;
            static constexpr std::uintptr_t GliderBehaviorMaxInterval = 0x288;
            static constexpr std::uintptr_t GliderBehaviorMinRadius = 0x2B0;
            static constexpr std::uintptr_t GliderBehaviorMaxRadius = 0x2D8;
            static constexpr std::uintptr_t GliderBehaviorSurveyProbability = 0x300;
            static constexpr std::uintptr_t GliderMovementTypeEnableFlag = 0x328;
            static constexpr std::uintptr_t GliderLinearProbability = 0x350;
            static constexpr std::uintptr_t GliderSpiralMinRadius = 0x378;
            static constexpr std::uintptr_t GliderSpiralMaxRadius = 0x3A0;
            static constexpr std::uintptr_t GliderSpiralMinAngle = 0x3C8;
            static constexpr std::uintptr_t GliderSpiralMaxAngle = 0x3F0;
            static constexpr std::uintptr_t GliderSpiralMinInterval = 0x418;
            static constexpr std::uintptr_t GliderSpiralMaxInterval = 0x440;
            static constexpr std::uintptr_t GliderSpiralProbability = 0x468;
            static constexpr std::uintptr_t GliderSerpentineMinAngle = 0x490;
            static constexpr std::uintptr_t GliderSerpentineMaxAngle = 0x4B8;
            static constexpr std::uintptr_t GliderSerpentineMinRadius = 0x4E0;
            static constexpr std::uintptr_t GliderSerpentineMaxRadius = 0x508;
            static constexpr std::uintptr_t GliderSerpentineMinInterval = 0x530;
            static constexpr std::uintptr_t GliderSerpentineMaxInterval = 0x558;
            static constexpr std::uintptr_t GliderSerpentineMinPeriod = 0x580;
            static constexpr std::uintptr_t GliderSerpentineMaxPeriod = 0x5A8;
            static constexpr std::uintptr_t GliderSerpentineProbability = 0x5D0;
            static constexpr std::uintptr_t EnableGlideEvasiveManeuvers = 0x5F8;
            static constexpr std::uintptr_t GliderSwerveAlpha = 0x620;
            static constexpr std::uintptr_t GliderBackAndForthMinInterval = 0x648;
            static constexpr std::uintptr_t GliderBackAndForthMaxInterval = 0x670;
            static constexpr std::uintptr_t GliderBackAndForthMinPeriod = 0x698;
            static constexpr std::uintptr_t GliderBackAndForthMaxPeriod = 0x6C0;
            static constexpr std::uintptr_t GliderEvasionThreatOverlapRadius = 0x6E8;
            static constexpr std::uintptr_t GliderEvasionThreatMinDistance = 0x710;
            static constexpr std::uintptr_t GliderEvasionThreatMaxDistance = 0x738;
            static constexpr std::uintptr_t GliderEvasionAlignmentDotTolerance = 0x760;
            static constexpr std::uintptr_t JumpOffMinAngle = 0x788;
            static constexpr std::uintptr_t JumpOffMaxAngle = 0x7B0;
            static constexpr std::uintptr_t JumpOffTimeOffsetMin = 0x7D8;
            static constexpr std::uintptr_t JumpOffTimeOffsetMax = 0x800;
            static constexpr std::uintptr_t SkydivingPitchDistanceCurve = 0x828;
            static constexpr std::uintptr_t MinPatrolDistance = 0x830;
            static constexpr std::uintptr_t MaxPatrolDistance = 0x858;
            static constexpr std::uintptr_t MaxPatrolDistanceRandomDeviation = 0x880;
            static constexpr std::uintptr_t MoveToRangeAttackMinOffset = 0x8A8;
            static constexpr std::uintptr_t MoveToRangeAttackMaxOffset = 0x8D0;
            static constexpr std::uintptr_t LKPMinOffset = 0x8F8;
            static constexpr std::uintptr_t LKPMaxOffset = 0x920;
            static constexpr std::uintptr_t bInvestigateAllowSearch = 0x948;
            static constexpr std::uintptr_t InvestigateWaitMinTime = 0x970;
            static constexpr std::uintptr_t InvestigateWaitMaxTime = 0x998;
            static constexpr std::uintptr_t InvestigateSearchMinDistance = 0x9C0;
            static constexpr std::uintptr_t InvestigateSearchMaxDistance = 0x9E8;
            static constexpr std::uintptr_t SandTunnelJumpMinTime = 0xA10;
            static constexpr std::uintptr_t SandTunnelJumpMaxTime = 0xA38;
            static constexpr std::uintptr_t SandTunnelBurrowedAndHiddenChance = 0xA60;
            static constexpr std::uintptr_t SandTunnelBurrowedAndHiddenMinTime = 0xA88;
            static constexpr std::uintptr_t SandTunnelBurrowedAndHiddenMaxTime = 0xAB0;
            static constexpr std::uintptr_t WobblingProbability = 0xAD8;
            static constexpr std::uintptr_t MaxDelayBetweenWobblingMovement = 0xB00;
            static constexpr std::uintptr_t MaxDelayBetweenWobblingMovementRandomDeviation = 0xB28;
            static constexpr std::uintptr_t MaxWobblingDuration = 0xB50;
            static constexpr std::uintptr_t MaxWobblingDurationRandomDeviation = 0xB78;
            static constexpr std::uintptr_t MaxWobblingIntensity = 0xBA0;
            static constexpr std::uintptr_t WobblingIntensityDeviation = 0xBC8;
            static constexpr std::uintptr_t MaxWobblingFrequency = 0xBF0;
            static constexpr std::uintptr_t WobblingFrequencyDeviation = 0xC18;
            static constexpr std::uintptr_t WobblingStickToPathCorridorStrength = 0xC40;
            static constexpr std::uintptr_t PathOffsetDistanceFromCorners = 0xC68;
            static constexpr std::uintptr_t LimitBlockingObstacleAngle = 0xC90;
            static constexpr std::uintptr_t AutoJumpOverBlockingObstacles = 0xCB8;
            static constexpr std::uintptr_t AutoJumpOverBlockingObstaclesWhenSwimming = 0xCE0;
            static constexpr std::uintptr_t TargetBuildingActorWhenBlocked = 0xD08;
            static constexpr std::uintptr_t TargetPlayerBuiltBuildingActorWhenBlocked = 0xD30;
            static constexpr std::uintptr_t TargetVehicleActorWhenBlocked = 0xD58;
            static constexpr std::uintptr_t MaxAfterLaunchedPauseTime = 0xD80;
            static constexpr std::uintptr_t MaxAfterLaunchedFromVortexPauseTime = 0xDA8;
            static constexpr std::uintptr_t AfterLaunchedPauseTimeDeviation = 0xDD0;
            static constexpr std::uintptr_t SteerMovementWhenLaunched = 0xDF8;
            static constexpr std::uintptr_t SteerMovementWhenLaunchedDirectionUpdateTime = 0xE20;
            static constexpr std::uintptr_t MaxReactionTimeToDangerZone = 0xE48;
            static constexpr std::uintptr_t MaxReactionTimeToDangerZoneDeviation = 0xE70;
            static constexpr std::uintptr_t AllowSwimWobble = 0xE98;
            static constexpr std::uintptr_t EnableSwimSprintJump = 0xEC0;
            static constexpr std::uintptr_t SwimSprintJumpDelay = 0xEE8;
            static constexpr std::uintptr_t SwimSprintJumpDelayDeviation = 0xF10;
            static constexpr std::uintptr_t SwimUnblockJumpHeightThreshold = 0xF38;
            static constexpr std::uintptr_t SwimSprintJumpNav2D = 0xF60;
            static constexpr std::uintptr_t TacticalSprintEvaluationMinTime = 0xF88;
            static constexpr std::uintptr_t TacticalSprintEvaluationMaxTime = 0xFB0;
            static constexpr std::uintptr_t TacticalSprintMinTriggerChance = 0xFD8;
            static constexpr std::uintptr_t TacticalSprintMaxTriggerChance = 0x1000;
            static constexpr std::uintptr_t TacticalSprintMinTriggerChanceInUrgentMovement = 0x1028;
            static constexpr std::uintptr_t TacticalSprintMaxTriggerChanceInUrgentMovement = 0x1050;
            static constexpr std::uintptr_t TacticalSprintMaxSlopeAngle = 0x1078;
            static constexpr std::uintptr_t TacticalSprintMinPathTargetDistance = 0x10A0;
            static constexpr std::uintptr_t TacticalSprintMaxPathAlignmentAngle = 0x10C8;
            static constexpr std::uintptr_t TacticalSprintMaxPathConeAngle = 0x10F0;
            static constexpr std::uintptr_t TacticalSprintPathConeRearOffset = 0x1118;
            static constexpr std::uintptr_t TacticalSprintUsageEnabled = 0x1140;
            static constexpr std::uintptr_t TacticalSprintJumpTriggerChance = 0x1168;
            static constexpr std::uintptr_t TacticalSprintJumpDelay = 0x1190;
            static constexpr std::uintptr_t TacticalSprintJumpDelayDeviation = 0x11B8;
            static constexpr std::uintptr_t TacticalSprintJumpDelayInitialRatio = 0x11E0;
            static constexpr std::uintptr_t SlidingBoxExtent = 0x1208;
            static constexpr std::uintptr_t SlidingEnabled = 0x1220;
            static constexpr std::uintptr_t SlidingEvaluationMinTime = 0x12C0;
            static constexpr std::uintptr_t SlidingEvaluationMaxTime = 0x12E8;
            static constexpr std::uintptr_t SlidingTriggerChanceStyleMalus = 0x1310;
            static constexpr std::uintptr_t SlidingTriggerChanceStyleMalusRandomDeviation = 0x1338;
            static constexpr std::uintptr_t SlidingTriggerChanceFlat = 0x1360;
            static constexpr std::uintptr_t SlidingTriggerChanceLittleSlope = 0x1388;
            static constexpr std::uintptr_t SlidingTriggerChanceSteepSlope = 0x13B0;
            static constexpr std::uintptr_t SlidingDuringUrgentMovementTriggerChanceFlat = 0x13D8;
            static constexpr std::uintptr_t SlidingDuringUrgentMovementTriggerChanceLittleSlope = 0x1400;
            static constexpr std::uintptr_t SlidingDuringUrgentMovementTriggerChanceSteepSlope = 0x1428;
            static constexpr std::uintptr_t MinSlidingDuration = 0x1450;
            static constexpr std::uintptr_t SlidingCooldownMinTime = 0x1478;
            static constexpr std::uintptr_t SlidingCooldownMaxTime = 0x14A0;
            static constexpr std::uintptr_t SlidingStopMinDelay = 0x14C8;
            static constexpr std::uintptr_t SlidingStopMaxDelay = 0x14F0;
            static constexpr std::uintptr_t SlidingMaxPathConeAngle = 0x1518;
            static constexpr std::uintptr_t SlidingMinPathTargetDistance = 0x1540;
            static constexpr std::uintptr_t SlidingAllowResumeFocusOnTargetTriggerChance = 0x1568;
            static constexpr std::uintptr_t RollLandingEnabled = 0x1590;
            static constexpr std::uintptr_t ZiplineOctreeBoxExtent = 0x15B8;
            static constexpr std::uintptr_t ThresholdDistanceToRescanForZiplines = 0x15D0;
            static constexpr std::uintptr_t CooldownBetweenZiplineUsages = 0x15F8;
            static constexpr std::uintptr_t DistanceToAddToZiplineStartPosition = 0x1620;
            static constexpr std::uintptr_t RadiusFromZiplineEnterPointToLookAtExit = 0x1648;
            static constexpr std::uintptr_t ZiplineUsageEnabled = 0x1670;
            static constexpr std::uintptr_t CanOpenDoors = 0x1698;
            static constexpr std::uintptr_t KnockbackSettings = 0x16C0;
            static constexpr std::uintptr_t FreeFallTransitionSettings = 0x16D0;
        };

        inline static constexpr std::array<PropertyInfo, 145> Properties{{
            {"SlowDownDistance", 0x30, "StructProperty"},
            {"TraversalSpeedEstimation", 0x58, "StructProperty"},
            {"TraversalSpeedEstimationWithThreat", 0x80, "StructProperty"},
            {"OffPathDetectionEnabled", 0xA8, "StructProperty"},
            {"OffPathDistanceThreshold", 0xD0, "StructProperty"},
            {"GliderNoiseMinDistance", 0xF8, "StructProperty"},
            {"GliderNoiseMaxDistance", 0x120, "StructProperty"},
            {"GliderNoiseMinDelay", 0x148, "StructProperty"},
            {"GliderNoiseMaxDelay", 0x170, "StructProperty"},
            {"GliderNoiseDistanceTreshold", 0x198, "StructProperty"},
            {"GliderStopRotationDistance", 0x1C0, "StructProperty"},
            {"GliderLandingDistance", 0x1E8, "StructProperty"},
            {"GliderRotationLerpDuration", 0x210, "StructProperty"},
            {"GliderBehaviorEnableFlag", 0x238, "StructProperty"},
            {"GliderBehaviorMinInterval", 0x260, "StructProperty"},
            {"GliderBehaviorMaxInterval", 0x288, "StructProperty"},
            {"GliderBehaviorMinRadius", 0x2B0, "StructProperty"},
            {"GliderBehaviorMaxRadius", 0x2D8, "StructProperty"},
            {"GliderBehaviorSurveyProbability", 0x300, "StructProperty"},
            {"GliderMovementTypeEnableFlag", 0x328, "StructProperty"},
            {"GliderLinearProbability", 0x350, "StructProperty"},
            {"GliderSpiralMinRadius", 0x378, "StructProperty"},
            {"GliderSpiralMaxRadius", 0x3A0, "StructProperty"},
            {"GliderSpiralMinAngle", 0x3C8, "StructProperty"},
            {"GliderSpiralMaxAngle", 0x3F0, "StructProperty"},
            {"GliderSpiralMinInterval", 0x418, "StructProperty"},
            {"GliderSpiralMaxInterval", 0x440, "StructProperty"},
            {"GliderSpiralProbability", 0x468, "StructProperty"},
            {"GliderSerpentineMinAngle", 0x490, "StructProperty"},
            {"GliderSerpentineMaxAngle", 0x4B8, "StructProperty"},
            {"GliderSerpentineMinRadius", 0x4E0, "StructProperty"},
            {"GliderSerpentineMaxRadius", 0x508, "StructProperty"},
            {"GliderSerpentineMinInterval", 0x530, "StructProperty"},
            {"GliderSerpentineMaxInterval", 0x558, "StructProperty"},
            {"GliderSerpentineMinPeriod", 0x580, "StructProperty"},
            {"GliderSerpentineMaxPeriod", 0x5A8, "StructProperty"},
            {"GliderSerpentineProbability", 0x5D0, "StructProperty"},
            {"EnableGlideEvasiveManeuvers", 0x5F8, "StructProperty"},
            {"GliderSwerveAlpha", 0x620, "StructProperty"},
            {"GliderBackAndForthMinInterval", 0x648, "StructProperty"},
            {"GliderBackAndForthMaxInterval", 0x670, "StructProperty"},
            {"GliderBackAndForthMinPeriod", 0x698, "StructProperty"},
            {"GliderBackAndForthMaxPeriod", 0x6C0, "StructProperty"},
            {"GliderEvasionThreatOverlapRadius", 0x6E8, "StructProperty"},
            {"GliderEvasionThreatMinDistance", 0x710, "StructProperty"},
            {"GliderEvasionThreatMaxDistance", 0x738, "StructProperty"},
            {"GliderEvasionAlignmentDotTolerance", 0x760, "StructProperty"},
            {"JumpOffMinAngle", 0x788, "StructProperty"},
            {"JumpOffMaxAngle", 0x7B0, "StructProperty"},
            {"JumpOffTimeOffsetMin", 0x7D8, "StructProperty"},
            {"JumpOffTimeOffsetMax", 0x800, "StructProperty"},
            {"SkydivingPitchDistanceCurve", 0x828, "ObjectProperty"},
            {"MinPatrolDistance", 0x830, "StructProperty"},
            {"MaxPatrolDistance", 0x858, "StructProperty"},
            {"MaxPatrolDistanceRandomDeviation", 0x880, "StructProperty"},
            {"MoveToRangeAttackMinOffset", 0x8A8, "StructProperty"},
            {"MoveToRangeAttackMaxOffset", 0x8D0, "StructProperty"},
            {"LKPMinOffset", 0x8F8, "StructProperty"},
            {"LKPMaxOffset", 0x920, "StructProperty"},
            {"bInvestigateAllowSearch", 0x948, "StructProperty"},
            {"InvestigateWaitMinTime", 0x970, "StructProperty"},
            {"InvestigateWaitMaxTime", 0x998, "StructProperty"},
            {"InvestigateSearchMinDistance", 0x9C0, "StructProperty"},
            {"InvestigateSearchMaxDistance", 0x9E8, "StructProperty"},
            {"SandTunnelJumpMinTime", 0xA10, "StructProperty"},
            {"SandTunnelJumpMaxTime", 0xA38, "StructProperty"},
            {"SandTunnelBurrowedAndHiddenChance", 0xA60, "StructProperty"},
            {"SandTunnelBurrowedAndHiddenMinTime", 0xA88, "StructProperty"},
            {"SandTunnelBurrowedAndHiddenMaxTime", 0xAB0, "StructProperty"},
            {"WobblingProbability", 0xAD8, "StructProperty"},
            {"MaxDelayBetweenWobblingMovement", 0xB00, "StructProperty"},
            {"MaxDelayBetweenWobblingMovementRandomDeviation", 0xB28, "StructProperty"},
            {"MaxWobblingDuration", 0xB50, "StructProperty"},
            {"MaxWobblingDurationRandomDeviation", 0xB78, "StructProperty"},
            {"MaxWobblingIntensity", 0xBA0, "StructProperty"},
            {"WobblingIntensityDeviation", 0xBC8, "StructProperty"},
            {"MaxWobblingFrequency", 0xBF0, "StructProperty"},
            {"WobblingFrequencyDeviation", 0xC18, "StructProperty"},
            {"WobblingStickToPathCorridorStrength", 0xC40, "StructProperty"},
            {"PathOffsetDistanceFromCorners", 0xC68, "StructProperty"},
            {"LimitBlockingObstacleAngle", 0xC90, "StructProperty"},
            {"AutoJumpOverBlockingObstacles", 0xCB8, "StructProperty"},
            {"AutoJumpOverBlockingObstaclesWhenSwimming", 0xCE0, "StructProperty"},
            {"TargetBuildingActorWhenBlocked", 0xD08, "StructProperty"},
            {"TargetPlayerBuiltBuildingActorWhenBlocked", 0xD30, "StructProperty"},
            {"TargetVehicleActorWhenBlocked", 0xD58, "StructProperty"},
            {"MaxAfterLaunchedPauseTime", 0xD80, "StructProperty"},
            {"MaxAfterLaunchedFromVortexPauseTime", 0xDA8, "StructProperty"},
            {"AfterLaunchedPauseTimeDeviation", 0xDD0, "StructProperty"},
            {"SteerMovementWhenLaunched", 0xDF8, "StructProperty"},
            {"SteerMovementWhenLaunchedDirectionUpdateTime", 0xE20, "StructProperty"},
            {"MaxReactionTimeToDangerZone", 0xE48, "StructProperty"},
            {"MaxReactionTimeToDangerZoneDeviation", 0xE70, "StructProperty"},
            {"AllowSwimWobble", 0xE98, "StructProperty"},
            {"EnableSwimSprintJump", 0xEC0, "StructProperty"},
            {"SwimSprintJumpDelay", 0xEE8, "StructProperty"},
            {"SwimSprintJumpDelayDeviation", 0xF10, "StructProperty"},
            {"SwimUnblockJumpHeightThreshold", 0xF38, "StructProperty"},
            {"SwimSprintJumpNav2D", 0xF60, "StructProperty"},
            {"TacticalSprintEvaluationMinTime", 0xF88, "StructProperty"},
            {"TacticalSprintEvaluationMaxTime", 0xFB0, "StructProperty"},
            {"TacticalSprintMinTriggerChance", 0xFD8, "StructProperty"},
            {"TacticalSprintMaxTriggerChance", 0x1000, "StructProperty"},
            {"TacticalSprintMinTriggerChanceInUrgentMovement", 0x1028, "StructProperty"},
            {"TacticalSprintMaxTriggerChanceInUrgentMovement", 0x1050, "StructProperty"},
            {"TacticalSprintMaxSlopeAngle", 0x1078, "StructProperty"},
            {"TacticalSprintMinPathTargetDistance", 0x10A0, "StructProperty"},
            {"TacticalSprintMaxPathAlignmentAngle", 0x10C8, "StructProperty"},
            {"TacticalSprintMaxPathConeAngle", 0x10F0, "StructProperty"},
            {"TacticalSprintPathConeRearOffset", 0x1118, "StructProperty"},
            {"TacticalSprintUsageEnabled", 0x1140, "StructProperty"},
            {"TacticalSprintJumpTriggerChance", 0x1168, "StructProperty"},
            {"TacticalSprintJumpDelay", 0x1190, "StructProperty"},
            {"TacticalSprintJumpDelayDeviation", 0x11B8, "StructProperty"},
            {"TacticalSprintJumpDelayInitialRatio", 0x11E0, "StructProperty"},
            {"SlidingBoxExtent", 0x1208, "StructProperty"},
            {"SlidingEnabled", 0x1220, "StructProperty"},
            {"SlidingEvaluationMinTime", 0x12C0, "StructProperty"},
            {"SlidingEvaluationMaxTime", 0x12E8, "StructProperty"},
            {"SlidingTriggerChanceStyleMalus", 0x1310, "StructProperty"},
            {"SlidingTriggerChanceStyleMalusRandomDeviation", 0x1338, "StructProperty"},
            {"SlidingTriggerChanceFlat", 0x1360, "StructProperty"},
            {"SlidingTriggerChanceLittleSlope", 0x1388, "StructProperty"},
            {"SlidingTriggerChanceSteepSlope", 0x13B0, "StructProperty"},
            {"SlidingDuringUrgentMovementTriggerChanceFlat", 0x13D8, "StructProperty"},
            {"SlidingDuringUrgentMovementTriggerChanceLittleSlope", 0x1400, "StructProperty"},
            {"SlidingDuringUrgentMovementTriggerChanceSteepSlope", 0x1428, "StructProperty"},
            {"MinSlidingDuration", 0x1450, "StructProperty"},
            {"SlidingCooldownMinTime", 0x1478, "StructProperty"},
            {"SlidingCooldownMaxTime", 0x14A0, "StructProperty"},
            {"SlidingStopMinDelay", 0x14C8, "StructProperty"},
            {"SlidingStopMaxDelay", 0x14F0, "StructProperty"},
            {"SlidingMaxPathConeAngle", 0x1518, "StructProperty"},
            {"SlidingMinPathTargetDistance", 0x1540, "StructProperty"},
            {"SlidingAllowResumeFocusOnTargetTriggerChance", 0x1568, "StructProperty"},
            {"RollLandingEnabled", 0x1590, "StructProperty"},
            {"ZiplineOctreeBoxExtent", 0x15B8, "StructProperty"},
            {"ThresholdDistanceToRescanForZiplines", 0x15D0, "StructProperty"},
            {"CooldownBetweenZiplineUsages", 0x15F8, "StructProperty"},
            {"DistanceToAddToZiplineStartPosition", 0x1620, "StructProperty"},
            {"RadiusFromZiplineEnterPointToLookAtExit", 0x1648, "StructProperty"},
            {"ZiplineUsageEnabled", 0x1670, "StructProperty"},
            {"CanOpenDoors", 0x1698, "StructProperty"},
            {"KnockbackSettings", 0x16C0, "ArrayProperty"},
            {"FreeFallTransitionSettings", 0x16D0, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotNameDataAsset
    {
        static constexpr std::string_view Name = "FortAthenaAIBotNameDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultNameDataTable = 0x28;
            static constexpr std::uintptr_t RegionData = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultNameDataTable", 0x28, "SoftObjectProperty"},
            {"RegionData", 0x48, "ArrayProperty"},
        }};
    };

    struct FortAthenaAIBotNameLibraryData
    {
        static constexpr std::string_view Name = "FortAthenaAIBotNameLibraryData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t NameBucketPercentage = 0x28;
            static constexpr std::uintptr_t MaxBucketIncrement = 0x50;
            static constexpr std::uintptr_t BotNameDataAssetIndexToUse = 0x78;
            static constexpr std::uintptr_t BotNameDataAssets = 0xA0;
            static constexpr std::uintptr_t UseTestNameTable = 0xB0;
            static constexpr std::uintptr_t TestNameDataTable = 0xD8;
            static constexpr std::uintptr_t CurrentDataTable = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"NameBucketPercentage", 0x28, "StructProperty"},
            {"MaxBucketIncrement", 0x50, "StructProperty"},
            {"BotNameDataAssetIndexToUse", 0x78, "StructProperty"},
            {"BotNameDataAssets", 0xA0, "ArrayProperty"},
            {"UseTestNameTable", 0xB0, "StructProperty"},
            {"TestNameDataTable", 0xD8, "SoftObjectProperty"},
            {"CurrentDataTable", 0x108, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotPathFollowingComponent
    {
        static constexpr std::string_view Name = "FortAthenaAIBotPathFollowingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPathFollowingComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BotController = 0x3B8;
            static constexpr std::uintptr_t HitBuilding = 0x3C0;
            static constexpr std::uintptr_t CachedUnstuckSkillSet = 0x3C8;
            static constexpr std::uintptr_t CachedMovementSkillSet = 0x3D0;
            static constexpr std::uintptr_t CachedVehicleSkillSet = 0x3D8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"BotController", 0x3B8, "ObjectProperty"},
            {"HitBuilding", 0x3C0, "WeakObjectProperty"},
            {"CachedUnstuckSkillSet", 0x3C8, "ObjectProperty"},
            {"CachedMovementSkillSet", 0x3D0, "ObjectProperty"},
            {"CachedVehicleSkillSet", 0x3D8, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIBotPerceptionDigestedSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotPerceptionDigestedSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotDigestedSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t SightReactionTime = 0x38;
            static constexpr std::uintptr_t SightRandomDeviation = 0x3C;
            static constexpr std::uintptr_t SightReactionSpecializations = 0x68;
            static constexpr std::uintptr_t LoseSightTime = 0x78;
            static constexpr std::uintptr_t LoseSightRandomDeviation = 0x7C;
            static constexpr std::uintptr_t DecayToLKPALevelTime = 0x80;
            static constexpr std::uintptr_t DecayToLKPALevelTimeRandomDeviation = 0x84;
            static constexpr std::uintptr_t SightSuspicionTime = 0x88;
            static constexpr std::uintptr_t SightSuspicionRandomDeviation = 0x8C;
            static constexpr std::uintptr_t EnemyMarkedReactionTime = 0x90;
            static constexpr std::uintptr_t EnemyMarkedReactionRandomDeviation = 0x94;
            static constexpr std::uintptr_t ChancesToHelpOnMarkedEnemy = 0x98;
            static constexpr std::uintptr_t DamageReactionTime = 0x9C;
            static constexpr std::uintptr_t DamageRandomDeviation = 0xA0;
            static constexpr std::uintptr_t HearingReactionTime = 0xA4;
            static constexpr std::uintptr_t HearingRandomDeviation = 0xA8;
            static constexpr std::uintptr_t MaxHearingLocationError = 0xAC;
            static constexpr std::uintptr_t ObstacleDistanceOverrideTargetingSq = 0xB0;
            static constexpr std::uintptr_t ObstacleForgetDistanceSq = 0xB4;
            static constexpr std::uintptr_t ObstacleMinimumBlockingTime = 0xB8;
            static constexpr std::uintptr_t DefaultTargetHeuristicSettings = 0xC0;
            static constexpr std::uintptr_t TargetHeuristicsSettingsSpecializations = 0x260;
            static constexpr std::uintptr_t SoundSettings = 0x270;
            static constexpr std::uintptr_t AlertedAccumulatedLoudnessLimit = 0x2DC;
            static constexpr std::uintptr_t AlertedAccumulatedDamageLimit = 0x2E0;
            static constexpr std::uintptr_t LKPAccumulatedLoudnessLimit = 0x2E4;
            static constexpr std::uintptr_t bAllowFirstHeardStimToBeLKP = 0x2E8;
            static constexpr std::uintptr_t EnemyMarkingDelay = 0x2EC;
            static constexpr std::uintptr_t EnemyMarkingDelayRandomDeviation = 0x2F0;
            static constexpr std::uintptr_t AdditionalMarkedEnemyLKPForgetTime = 0x2F4;
            static constexpr std::uintptr_t AdditionalMarkedEnemyLKPForgetDistance = 0x2F8;
            static constexpr std::uintptr_t AlertLevelInfos = 0x300;
            static constexpr std::uintptr_t ProjectileThreatForgetTime = 0x340;
            static constexpr std::uintptr_t TrapPerceptionSettings = 0x344;
            static constexpr std::uintptr_t bStealthMeterEnable = 0x358;
            static constexpr std::uintptr_t StealthMeterThreshold = 0x35C;
            static constexpr std::uintptr_t StealthMeterIncreaseSpeed = 0x360;
            static constexpr std::uintptr_t StealthMeterDecreaseSpeed = 0x388;
            static constexpr std::uintptr_t bStealthMeterAllowSharedTarget = 0x38C;
            static constexpr std::uintptr_t bStealthMeterForceLKPWhenDamagedAndThreatened = 0x38D;
            static constexpr std::uintptr_t bShouldUpdateProximityToPlayers = 0x38E;
            static constexpr std::uintptr_t PlayerProximityUpdateInterval = 0x390;
            static constexpr std::uintptr_t PlayerInProximityDistance = 0x394;
        };

        inline static constexpr std::array<PropertyInfo, 43> Properties{{
            {"SightReactionTime", 0x38, "FloatProperty"},
            {"SightRandomDeviation", 0x3C, "FloatProperty"},
            {"SightReactionSpecializations", 0x68, "ArrayProperty"},
            {"LoseSightTime", 0x78, "FloatProperty"},
            {"LoseSightRandomDeviation", 0x7C, "FloatProperty"},
            {"DecayToLKPALevelTime", 0x80, "FloatProperty"},
            {"DecayToLKPALevelTimeRandomDeviation", 0x84, "FloatProperty"},
            {"SightSuspicionTime", 0x88, "FloatProperty"},
            {"SightSuspicionRandomDeviation", 0x8C, "FloatProperty"},
            {"EnemyMarkedReactionTime", 0x90, "FloatProperty"},
            {"EnemyMarkedReactionRandomDeviation", 0x94, "FloatProperty"},
            {"ChancesToHelpOnMarkedEnemy", 0x98, "FloatProperty"},
            {"DamageReactionTime", 0x9C, "FloatProperty"},
            {"DamageRandomDeviation", 0xA0, "FloatProperty"},
            {"HearingReactionTime", 0xA4, "FloatProperty"},
            {"HearingRandomDeviation", 0xA8, "FloatProperty"},
            {"MaxHearingLocationError", 0xAC, "FloatProperty"},
            {"ObstacleDistanceOverrideTargetingSq", 0xB0, "FloatProperty"},
            {"ObstacleForgetDistanceSq", 0xB4, "FloatProperty"},
            {"ObstacleMinimumBlockingTime", 0xB8, "FloatProperty"},
            {"DefaultTargetHeuristicSettings", 0xC0, "StructProperty"},
            {"TargetHeuristicsSettingsSpecializations", 0x260, "ArrayProperty"},
            {"SoundSettings", 0x270, "StructProperty"},
            {"AlertedAccumulatedLoudnessLimit", 0x2DC, "FloatProperty"},
            {"AlertedAccumulatedDamageLimit", 0x2E0, "FloatProperty"},
            {"LKPAccumulatedLoudnessLimit", 0x2E4, "FloatProperty"},
            {"bAllowFirstHeardStimToBeLKP", 0x2E8, "BoolProperty"},
            {"EnemyMarkingDelay", 0x2EC, "FloatProperty"},
            {"EnemyMarkingDelayRandomDeviation", 0x2F0, "FloatProperty"},
            {"AdditionalMarkedEnemyLKPForgetTime", 0x2F4, "FloatProperty"},
            {"AdditionalMarkedEnemyLKPForgetDistance", 0x2F8, "FloatProperty"},
            {"AlertLevelInfos", 0x300, "StructProperty"},
            {"ProjectileThreatForgetTime", 0x340, "FloatProperty"},
            {"TrapPerceptionSettings", 0x344, "StructProperty"},
            {"bStealthMeterEnable", 0x358, "BoolProperty"},
            {"StealthMeterThreshold", 0x35C, "FloatProperty"},
            {"StealthMeterIncreaseSpeed", 0x360, "StructProperty"},
            {"StealthMeterDecreaseSpeed", 0x388, "FloatProperty"},
            {"bStealthMeterAllowSharedTarget", 0x38C, "BoolProperty"},
            {"bStealthMeterForceLKPWhenDamagedAndThreatened", 0x38D, "BoolProperty"},
            {"bShouldUpdateProximityToPlayers", 0x38E, "BoolProperty"},
            {"PlayerProximityUpdateInterval", 0x390, "FloatProperty"},
            {"PlayerInProximityDistance", 0x394, "FloatProperty"},
        }};
    };

    struct FortAthenaAIBotPerceptionSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotPerceptionSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t SightReactionTime = 0x30;
            static constexpr std::uintptr_t SightRandomDeviation = 0x58;
            static constexpr std::uintptr_t SightRandomAddition = 0x80;
            static constexpr std::uintptr_t SightReactionSpecializations = 0xA8;
            static constexpr std::uintptr_t LoseSightTime = 0xB8;
            static constexpr std::uintptr_t LoseSightRandomDeviation = 0xE0;
            static constexpr std::uintptr_t DecayToLKPALevelTime = 0x108;
            static constexpr std::uintptr_t DecayToLKPALevelTimeRandomDeviation = 0x130;
            static constexpr std::uintptr_t SightSuspicionTime = 0x158;
            static constexpr std::uintptr_t SightSuspicionRandomDeviation = 0x180;
            static constexpr std::uintptr_t EnemyMarkedReactionTime = 0x1A8;
            static constexpr std::uintptr_t EnemyMarkedReactionRandomDeviation = 0x1D0;
            static constexpr std::uintptr_t ChancesToHelpOnMarkedEnemy = 0x1F8;
            static constexpr std::uintptr_t DamageReactionTime = 0x220;
            static constexpr std::uintptr_t DamageRandomDeviation = 0x248;
            static constexpr std::uintptr_t HearingReactionTime = 0x270;
            static constexpr std::uintptr_t HearingRandomDeviation = 0x298;
            static constexpr std::uintptr_t MaxHearingLocationError = 0x2C0;
            static constexpr std::uintptr_t DefaultTargetHeuristicSettings = 0x2E8;
            static constexpr std::uintptr_t TargetHeuristicSettingsSpecializations = 0x668;
            static constexpr std::uintptr_t ObstacleDistanceOverrideTargeting = 0x678;
            static constexpr std::uintptr_t ObstacleForgetDistance = 0x6A0;
            static constexpr std::uintptr_t ObstacleMinimumBlockingTime = 0x6C8;
            static constexpr std::uintptr_t SoundSettings = 0x6F0;
            static constexpr std::uintptr_t AlertedAccumulatedLoudnessLimit = 0xB28;
            static constexpr std::uintptr_t AlertedAccumulatedDamageLimit = 0xB50;
            static constexpr std::uintptr_t LKPAccumulatedLoudnessLimit = 0xB78;
            static constexpr std::uintptr_t bAllowFirstHeardStimToBeLKP = 0xBA0;
            static constexpr std::uintptr_t EnemyMarkingDelay = 0xBC8;
            static constexpr std::uintptr_t EnemyMarkingDelayRandomDeviation = 0xBF0;
            static constexpr std::uintptr_t AdditionalMarkedEnemyLKPForgetTime = 0xC18;
            static constexpr std::uintptr_t AdditionalMarkedEnemyLKPForgetDistance = 0xC40;
            static constexpr std::uintptr_t AlertLevelConfigs = 0xC68;
            static constexpr std::uintptr_t ProjectileThreatForgetTime = 0xC78;
            static constexpr std::uintptr_t TrapDetectionDistanceMax = 0xCA0;
            static constexpr std::uintptr_t TrapDetectionDistanceMaxDeviation = 0xCC8;
            static constexpr std::uintptr_t TrapDetectionChanceWhenPerpendicular = 0xCF0;
            static constexpr std::uintptr_t TrapDetectionChanceWhenParallel = 0xD18;
            static constexpr std::uintptr_t TrapDetectionEvaluationAngleThreshold = 0xD40;
            static constexpr std::uintptr_t TrapDetectionAutomaticIfWithinCreationTime = 0xD68;
            static constexpr std::uintptr_t StealthMeterEnable = 0xD90;
            static constexpr std::uintptr_t StealthMeterThreshold = 0xDB8;
            static constexpr std::uintptr_t StealthMeterIncreaseSpeed = 0xDE0;
            static constexpr std::uintptr_t StealthMeterDecreaseSpeed = 0xE08;
            static constexpr std::uintptr_t StealthMeterAllowSharedTarget = 0xE30;
            static constexpr std::uintptr_t bStealthMeterForceLKPWhenDamagedAndThreatened = 0xE58;
            static constexpr std::uintptr_t ShouldUpdateProximityToPlayers = 0xE80;
            static constexpr std::uintptr_t PlayerProximityUpdateInterval = 0xEA8;
            static constexpr std::uintptr_t PlayerInProximityDistance = 0xED0;
        };

        inline static constexpr std::array<PropertyInfo, 49> Properties{{
            {"SightReactionTime", 0x30, "StructProperty"},
            {"SightRandomDeviation", 0x58, "StructProperty"},
            {"SightRandomAddition", 0x80, "StructProperty"},
            {"SightReactionSpecializations", 0xA8, "ArrayProperty"},
            {"LoseSightTime", 0xB8, "StructProperty"},
            {"LoseSightRandomDeviation", 0xE0, "StructProperty"},
            {"DecayToLKPALevelTime", 0x108, "StructProperty"},
            {"DecayToLKPALevelTimeRandomDeviation", 0x130, "StructProperty"},
            {"SightSuspicionTime", 0x158, "StructProperty"},
            {"SightSuspicionRandomDeviation", 0x180, "StructProperty"},
            {"EnemyMarkedReactionTime", 0x1A8, "StructProperty"},
            {"EnemyMarkedReactionRandomDeviation", 0x1D0, "StructProperty"},
            {"ChancesToHelpOnMarkedEnemy", 0x1F8, "StructProperty"},
            {"DamageReactionTime", 0x220, "StructProperty"},
            {"DamageRandomDeviation", 0x248, "StructProperty"},
            {"HearingReactionTime", 0x270, "StructProperty"},
            {"HearingRandomDeviation", 0x298, "StructProperty"},
            {"MaxHearingLocationError", 0x2C0, "StructProperty"},
            {"DefaultTargetHeuristicSettings", 0x2E8, "StructProperty"},
            {"TargetHeuristicSettingsSpecializations", 0x668, "ArrayProperty"},
            {"ObstacleDistanceOverrideTargeting", 0x678, "StructProperty"},
            {"ObstacleForgetDistance", 0x6A0, "StructProperty"},
            {"ObstacleMinimumBlockingTime", 0x6C8, "StructProperty"},
            {"SoundSettings", 0x6F0, "StructProperty"},
            {"AlertedAccumulatedLoudnessLimit", 0xB28, "StructProperty"},
            {"AlertedAccumulatedDamageLimit", 0xB50, "StructProperty"},
            {"LKPAccumulatedLoudnessLimit", 0xB78, "StructProperty"},
            {"bAllowFirstHeardStimToBeLKP", 0xBA0, "StructProperty"},
            {"EnemyMarkingDelay", 0xBC8, "StructProperty"},
            {"EnemyMarkingDelayRandomDeviation", 0xBF0, "StructProperty"},
            {"AdditionalMarkedEnemyLKPForgetTime", 0xC18, "StructProperty"},
            {"AdditionalMarkedEnemyLKPForgetDistance", 0xC40, "StructProperty"},
            {"AlertLevelConfigs", 0xC68, "ArrayProperty"},
            {"ProjectileThreatForgetTime", 0xC78, "StructProperty"},
            {"TrapDetectionDistanceMax", 0xCA0, "StructProperty"},
            {"TrapDetectionDistanceMaxDeviation", 0xCC8, "StructProperty"},
            {"TrapDetectionChanceWhenPerpendicular", 0xCF0, "StructProperty"},
            {"TrapDetectionChanceWhenParallel", 0xD18, "StructProperty"},
            {"TrapDetectionEvaluationAngleThreshold", 0xD40, "StructProperty"},
            {"TrapDetectionAutomaticIfWithinCreationTime", 0xD68, "StructProperty"},
            {"StealthMeterEnable", 0xD90, "StructProperty"},
            {"StealthMeterThreshold", 0xDB8, "StructProperty"},
            {"StealthMeterIncreaseSpeed", 0xDE0, "StructProperty"},
            {"StealthMeterDecreaseSpeed", 0xE08, "StructProperty"},
            {"StealthMeterAllowSharedTarget", 0xE30, "StructProperty"},
            {"bStealthMeterForceLKPWhenDamagedAndThreatened", 0xE58, "StructProperty"},
            {"ShouldUpdateProximityToPlayers", 0xE80, "StructProperty"},
            {"PlayerProximityUpdateInterval", 0xEA8, "StructProperty"},
            {"PlayerInProximityDistance", 0xED0, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotPlayStyleDigestedSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotPlayStyleDigestedSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotDigestedSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t AggressiveTowardsThreatWeight = 0x38;
            static constexpr std::uintptr_t DefensiveTowardsThreatWeight = 0x60;
            static constexpr std::uintptr_t DBNOPlayStyle = 0x88;
            static constexpr std::uintptr_t HumanPassiveDBNOTimeLimit = 0x8C;
            static constexpr std::uintptr_t ChangeToAggressiveData = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AggressiveTowardsThreatWeight", 0x38, "StructProperty"},
            {"DefensiveTowardsThreatWeight", 0x60, "StructProperty"},
            {"DBNOPlayStyle", 0x88, "EnumProperty"},
            {"HumanPassiveDBNOTimeLimit", 0x8C, "FloatProperty"},
            {"ChangeToAggressiveData", 0x90, "ArrayProperty"},
        }};
    };

    struct FortAthenaAIBotPlayStyleSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotPlayStyleSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t AggressiveTowardsThreatWeight = 0x30;
            static constexpr std::uintptr_t DefensiveTowardsThreatWeight = 0x58;
            static constexpr std::uintptr_t PassiveDBNOPlayStyle = 0x80;
            static constexpr std::uintptr_t ThirstyDBNOPlayStyle = 0xA8;
            static constexpr std::uintptr_t PassiveOnHumansDBNOPlayStyle = 0xD0;
            static constexpr std::uintptr_t HumanPassiveDBNOTimeLimit = 0xF8;
            static constexpr std::uintptr_t ChangeToAggressiveData = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"AggressiveTowardsThreatWeight", 0x30, "StructProperty"},
            {"DefensiveTowardsThreatWeight", 0x58, "StructProperty"},
            {"PassiveDBNOPlayStyle", 0x80, "StructProperty"},
            {"ThirstyDBNOPlayStyle", 0xA8, "StructProperty"},
            {"PassiveOnHumansDBNOPlayStyle", 0xD0, "StructProperty"},
            {"HumanPassiveDBNOTimeLimit", 0xF8, "StructProperty"},
            {"ChangeToAggressiveData", 0x120, "ArrayProperty"},
        }};
    };

    struct FortAthenaAIBotPropagateAwarenessDigestedSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotPropagateAwarenessDigestedSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotDigestedSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t PropagationMaxDistanceSQ = 0x38;
            static constexpr std::uintptr_t CosineFOV = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PropagationMaxDistanceSQ", 0x38, "FloatProperty"},
            {"CosineFOV", 0x3C, "FloatProperty"},
        }};
    };

    struct FortAthenaAIBotPropagateAwarenessSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotPropagateAwarenessSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t PropagationMaxDistance = 0x30;
            static constexpr std::uintptr_t FOV = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PropagationMaxDistance", 0x30, "StructProperty"},
            {"FOV", 0x58, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotRangeAttackDigestedSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotRangeAttackDigestedSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotDigestedSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedWeaponUsedToCalculateSkillSet = 0x38;
            static constexpr std::uintptr_t RangedWeaponCategorySkills = 0x48;
            static constexpr std::uintptr_t ChangeWeaponDelay = 0x58;
            static constexpr std::uintptr_t ChangeWeaponDelayDeviation = 0x5C;
            static constexpr std::uintptr_t SwapInsteadOfReloadOdds = 0x60;
            static constexpr std::uintptr_t SwapInsteadOfReloadRangeMax = 0x64;
            static constexpr std::uintptr_t SwapInsteadOfReloadIgnoredWeaponTags = 0x68;
            static constexpr std::uintptr_t InterruptReloadToShootOdds = 0x88;
            static constexpr std::uintptr_t ReloadPartiallyEmptyWeaponsOdds = 0x8C;
            static constexpr std::uintptr_t UseCoverOdds = 0x90;
            static constexpr std::uintptr_t CoverDistanceMin = 0x94;
            static constexpr std::uintptr_t CoverDistanceMaxCurve = 0x98;
            static constexpr std::uintptr_t CoverDistanceToTargetMin = 0xC0;
            static constexpr std::uintptr_t MinimumDistanceToTargetWhileMovingToCover = 0xC4;
            static constexpr std::uintptr_t CoverSearchCooldown = 0xC8;
            static constexpr std::uintptr_t MaximumPathDetourFactor = 0xCC;
            static constexpr std::uintptr_t PostCoverCooldownMin = 0xD0;
            static constexpr std::uintptr_t PostCoverCooldownMax = 0xD4;
            static constexpr std::uintptr_t MoveToRangeRecomputeDistance = 0xD8;
            static constexpr std::uintptr_t bCanFindShootingPositionAround = 0xDC;
            static constexpr std::uintptr_t PositioningMaxSearchRadius = 0xE0;
            static constexpr std::uintptr_t PositioningQueryCooldown = 0xE4;
            static constexpr std::uintptr_t PositioningQueryCooldownDeviation = 0xE8;
            static constexpr std::uintptr_t PositioningQueryInterruptCooldown = 0xEC;
            static constexpr std::uintptr_t PositioningQueryInterruptCooldownDeviation = 0xF0;
            static constexpr std::uintptr_t CoverPeekCountMin = 0xF4;
            static constexpr std::uintptr_t CoverPeekCountMax = 0xF8;
            static constexpr std::uintptr_t ShotDelayAfterTargetRevived = 0xFC;
            static constexpr std::uintptr_t DefaultTargetInAirFiringPatterns = 0x100;
            static constexpr std::uintptr_t bStepBackEnabled = 0x110;
            static constexpr std::uintptr_t StepBackCooldown = 0x114;
            static constexpr std::uintptr_t StepBackPercentageChance = 0x118;
            static constexpr std::uintptr_t StepBackDistanceBetweenAIPawnAndTargetMin = 0x11C;
            static constexpr std::uintptr_t StepBackDistanceBetweenAIPawnAndTargetMax = 0x120;
            static constexpr std::uintptr_t StepBackDistanceBetweenCoverAndTargetMin = 0x124;
            static constexpr std::uintptr_t StepBackDistanceBetweenCoverAndTargetMax = 0x128;
            static constexpr std::uintptr_t StepBackDistanceBetweenAIPawnAndCoverMin = 0x12C;
            static constexpr std::uintptr_t StepBackDistanceBetweenAIPawnAndCoverMax = 0x130;
            static constexpr std::uintptr_t bFlankingEnabled = 0x134;
            static constexpr std::uintptr_t FlankingCooldown = 0x138;
            static constexpr std::uintptr_t FlankingPercentageChance = 0x13C;
            static constexpr std::uintptr_t FlankingInnerRadius = 0x140;
            static constexpr std::uintptr_t FlankingOuterRadius = 0x144;
            static constexpr std::uintptr_t FlankingLayersCount = 0x148;
            static constexpr std::uintptr_t FlankingPointsPerLayerCount = 0x14C;
            static constexpr std::uintptr_t FlankingMaxAngleRad = 0x150;
            static constexpr std::uintptr_t FlankingScorePawnDetectionRadius = 0x154;
            static constexpr std::uintptr_t LoFForceCrouchVehicleSeatZOffset = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 48> Properties{{
            {"CachedWeaponUsedToCalculateSkillSet", 0x38, "WeakObjectProperty"},
            {"RangedWeaponCategorySkills", 0x48, "ArrayProperty"},
            {"ChangeWeaponDelay", 0x58, "FloatProperty"},
            {"ChangeWeaponDelayDeviation", 0x5C, "FloatProperty"},
            {"SwapInsteadOfReloadOdds", 0x60, "FloatProperty"},
            {"SwapInsteadOfReloadRangeMax", 0x64, "FloatProperty"},
            {"SwapInsteadOfReloadIgnoredWeaponTags", 0x68, "StructProperty"},
            {"InterruptReloadToShootOdds", 0x88, "FloatProperty"},
            {"ReloadPartiallyEmptyWeaponsOdds", 0x8C, "FloatProperty"},
            {"UseCoverOdds", 0x90, "FloatProperty"},
            {"CoverDistanceMin", 0x94, "FloatProperty"},
            {"CoverDistanceMaxCurve", 0x98, "StructProperty"},
            {"CoverDistanceToTargetMin", 0xC0, "FloatProperty"},
            {"MinimumDistanceToTargetWhileMovingToCover", 0xC4, "FloatProperty"},
            {"CoverSearchCooldown", 0xC8, "FloatProperty"},
            {"MaximumPathDetourFactor", 0xCC, "FloatProperty"},
            {"PostCoverCooldownMin", 0xD0, "FloatProperty"},
            {"PostCoverCooldownMax", 0xD4, "FloatProperty"},
            {"MoveToRangeRecomputeDistance", 0xD8, "FloatProperty"},
            {"bCanFindShootingPositionAround", 0xDC, "BoolProperty"},
            {"PositioningMaxSearchRadius", 0xE0, "FloatProperty"},
            {"PositioningQueryCooldown", 0xE4, "FloatProperty"},
            {"PositioningQueryCooldownDeviation", 0xE8, "FloatProperty"},
            {"PositioningQueryInterruptCooldown", 0xEC, "FloatProperty"},
            {"PositioningQueryInterruptCooldownDeviation", 0xF0, "FloatProperty"},
            {"CoverPeekCountMin", 0xF4, "IntProperty"},
            {"CoverPeekCountMax", 0xF8, "IntProperty"},
            {"ShotDelayAfterTargetRevived", 0xFC, "FloatProperty"},
            {"DefaultTargetInAirFiringPatterns", 0x100, "ArrayProperty"},
            {"bStepBackEnabled", 0x110, "BoolProperty"},
            {"StepBackCooldown", 0x114, "FloatProperty"},
            {"StepBackPercentageChance", 0x118, "FloatProperty"},
            {"StepBackDistanceBetweenAIPawnAndTargetMin", 0x11C, "FloatProperty"},
            {"StepBackDistanceBetweenAIPawnAndTargetMax", 0x120, "FloatProperty"},
            {"StepBackDistanceBetweenCoverAndTargetMin", 0x124, "FloatProperty"},
            {"StepBackDistanceBetweenCoverAndTargetMax", 0x128, "FloatProperty"},
            {"StepBackDistanceBetweenAIPawnAndCoverMin", 0x12C, "FloatProperty"},
            {"StepBackDistanceBetweenAIPawnAndCoverMax", 0x130, "FloatProperty"},
            {"bFlankingEnabled", 0x134, "BoolProperty"},
            {"FlankingCooldown", 0x138, "FloatProperty"},
            {"FlankingPercentageChance", 0x13C, "FloatProperty"},
            {"FlankingInnerRadius", 0x140, "FloatProperty"},
            {"FlankingOuterRadius", 0x144, "FloatProperty"},
            {"FlankingLayersCount", 0x148, "IntProperty"},
            {"FlankingPointsPerLayerCount", 0x14C, "IntProperty"},
            {"FlankingMaxAngleRad", 0x150, "FloatProperty"},
            {"FlankingScorePawnDetectionRadius", 0x154, "FloatProperty"},
            {"LoFForceCrouchVehicleSeatZOffset", 0x158, "FloatProperty"},
        }};
    };

    struct FortAthenaAIBotRangeAttackSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotRangeAttackSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t RangedWeaponSkills = 0x30;
            static constexpr std::uintptr_t ChangeWeaponDelay = 0x40;
            static constexpr std::uintptr_t ChangeWeaponDelayDeviation = 0x68;
            static constexpr std::uintptr_t SwapInsteadOfReloadOdds = 0x90;
            static constexpr std::uintptr_t SwapInsteadOfReloadRangeMax = 0xB8;
            static constexpr std::uintptr_t SwapInsteadOfReloadIgnoredWeaponTags = 0xE0;
            static constexpr std::uintptr_t InterruptReloadToShootOdds = 0x100;
            static constexpr std::uintptr_t ReloadPartiallyEmptyWeaponsOdds = 0x128;
            static constexpr std::uintptr_t UseCoverOdds = 0x150;
            static constexpr std::uintptr_t CoverDistanceMin = 0x178;
            static constexpr std::uintptr_t CoverDistanceMaxCurve = 0x1A0;
            static constexpr std::uintptr_t CoverDistanceToTargetMin = 0x1C8;
            static constexpr std::uintptr_t MinimumDistanceToTargetWhileMovingToCover = 0x1F0;
            static constexpr std::uintptr_t CoverSearchCooldown = 0x218;
            static constexpr std::uintptr_t MaximumPathDetourFactor = 0x240;
            static constexpr std::uintptr_t PostCoverCooldownMin = 0x268;
            static constexpr std::uintptr_t PostCoverCooldownMax = 0x290;
            static constexpr std::uintptr_t MoveToRangeRecomputeDistance = 0x2B8;
            static constexpr std::uintptr_t CanFindShootingPositionAround = 0x2E0;
            static constexpr std::uintptr_t PositioningMaxSearchRadius = 0x308;
            static constexpr std::uintptr_t PositioningQueryCooldown = 0x330;
            static constexpr std::uintptr_t PositioningQueryCooldownDeviation = 0x358;
            static constexpr std::uintptr_t PositioningQueryInterruptCooldown = 0x380;
            static constexpr std::uintptr_t PositioningQueryInterruptCooldownDeviation = 0x3A8;
            static constexpr std::uintptr_t CoverPeekCountMin = 0x3D0;
            static constexpr std::uintptr_t CoverPeekCountMax = 0x3F8;
            static constexpr std::uintptr_t ShotDelayAfterTargetRevived = 0x420;
            static constexpr std::uintptr_t DefaultTargetInAirFiringPatterns = 0x448;
            static constexpr std::uintptr_t StepBackEnabled = 0x458;
            static constexpr std::uintptr_t StepBackCooldown = 0x480;
            static constexpr std::uintptr_t StepBackPercentageChance = 0x4A8;
            static constexpr std::uintptr_t StepBackDistanceBetweenAIPawnAndTargetMin = 0x4D0;
            static constexpr std::uintptr_t StepBackDistanceBetweenAIPawnAndTargetMax = 0x4F8;
            static constexpr std::uintptr_t StepBackDistanceBetweenCoverAndTargetMin = 0x520;
            static constexpr std::uintptr_t StepBackDistanceBetweenCoverAndTargetMax = 0x548;
            static constexpr std::uintptr_t StepBackDistanceBetweenAIPawnAndCoverMin = 0x570;
            static constexpr std::uintptr_t StepBackDistanceBetweenAIPawnAndCoverMax = 0x598;
            static constexpr std::uintptr_t FlankingEnabled = 0x5C0;
            static constexpr std::uintptr_t FlankingCooldown = 0x5E8;
            static constexpr std::uintptr_t FlankingPercentageChance = 0x610;
            static constexpr std::uintptr_t FlankingInnerRadius = 0x638;
            static constexpr std::uintptr_t FlankingOuterRadius = 0x660;
            static constexpr std::uintptr_t FlankingLayersCount = 0x688;
            static constexpr std::uintptr_t FlankingPointsPerLayerCount = 0x6B0;
            static constexpr std::uintptr_t FlankingMaxAngle = 0x6D8;
            static constexpr std::uintptr_t FlankingScorePawnDetectionRadius = 0x700;
            static constexpr std::uintptr_t LoFForceCrouchVehicleSeatZOffset = 0x728;
        };

        inline static constexpr std::array<PropertyInfo, 47> Properties{{
            {"RangedWeaponSkills", 0x30, "ArrayProperty"},
            {"ChangeWeaponDelay", 0x40, "StructProperty"},
            {"ChangeWeaponDelayDeviation", 0x68, "StructProperty"},
            {"SwapInsteadOfReloadOdds", 0x90, "StructProperty"},
            {"SwapInsteadOfReloadRangeMax", 0xB8, "StructProperty"},
            {"SwapInsteadOfReloadIgnoredWeaponTags", 0xE0, "StructProperty"},
            {"InterruptReloadToShootOdds", 0x100, "StructProperty"},
            {"ReloadPartiallyEmptyWeaponsOdds", 0x128, "StructProperty"},
            {"UseCoverOdds", 0x150, "StructProperty"},
            {"CoverDistanceMin", 0x178, "StructProperty"},
            {"CoverDistanceMaxCurve", 0x1A0, "StructProperty"},
            {"CoverDistanceToTargetMin", 0x1C8, "StructProperty"},
            {"MinimumDistanceToTargetWhileMovingToCover", 0x1F0, "StructProperty"},
            {"CoverSearchCooldown", 0x218, "StructProperty"},
            {"MaximumPathDetourFactor", 0x240, "StructProperty"},
            {"PostCoverCooldownMin", 0x268, "StructProperty"},
            {"PostCoverCooldownMax", 0x290, "StructProperty"},
            {"MoveToRangeRecomputeDistance", 0x2B8, "StructProperty"},
            {"CanFindShootingPositionAround", 0x2E0, "StructProperty"},
            {"PositioningMaxSearchRadius", 0x308, "StructProperty"},
            {"PositioningQueryCooldown", 0x330, "StructProperty"},
            {"PositioningQueryCooldownDeviation", 0x358, "StructProperty"},
            {"PositioningQueryInterruptCooldown", 0x380, "StructProperty"},
            {"PositioningQueryInterruptCooldownDeviation", 0x3A8, "StructProperty"},
            {"CoverPeekCountMin", 0x3D0, "StructProperty"},
            {"CoverPeekCountMax", 0x3F8, "StructProperty"},
            {"ShotDelayAfterTargetRevived", 0x420, "StructProperty"},
            {"DefaultTargetInAirFiringPatterns", 0x448, "ArrayProperty"},
            {"StepBackEnabled", 0x458, "StructProperty"},
            {"StepBackCooldown", 0x480, "StructProperty"},
            {"StepBackPercentageChance", 0x4A8, "StructProperty"},
            {"StepBackDistanceBetweenAIPawnAndTargetMin", 0x4D0, "StructProperty"},
            {"StepBackDistanceBetweenAIPawnAndTargetMax", 0x4F8, "StructProperty"},
            {"StepBackDistanceBetweenCoverAndTargetMin", 0x520, "StructProperty"},
            {"StepBackDistanceBetweenCoverAndTargetMax", 0x548, "StructProperty"},
            {"StepBackDistanceBetweenAIPawnAndCoverMin", 0x570, "StructProperty"},
            {"StepBackDistanceBetweenAIPawnAndCoverMax", 0x598, "StructProperty"},
            {"FlankingEnabled", 0x5C0, "StructProperty"},
            {"FlankingCooldown", 0x5E8, "StructProperty"},
            {"FlankingPercentageChance", 0x610, "StructProperty"},
            {"FlankingInnerRadius", 0x638, "StructProperty"},
            {"FlankingOuterRadius", 0x660, "StructProperty"},
            {"FlankingLayersCount", 0x688, "StructProperty"},
            {"FlankingPointsPerLayerCount", 0x6B0, "StructProperty"},
            {"FlankingMaxAngle", 0x6D8, "StructProperty"},
            {"FlankingScorePawnDetectionRadius", 0x700, "StructProperty"},
            {"LoFForceCrouchVehicleSeatZOffset", 0x728, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotReactToVerbDigestedSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotReactToVerbDigestedSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotDigestedSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t OverriddenReactionDistance = 0x38;
            static constexpr std::uintptr_t OverriddenHighPriorityReactionDistance = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OverriddenReactionDistance", 0x38, "FloatProperty"},
            {"OverriddenHighPriorityReactionDistance", 0x3C, "FloatProperty"},
        }};
    };

    struct FortAthenaAIBotReactToVerbSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotReactToVerbSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t OverriddenReactionDistance = 0x30;
            static constexpr std::uintptr_t OverriddenHighPriorityReactionDistance = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OverriddenReactionDistance", 0x30, "StructProperty"},
            {"OverriddenHighPriorityReactionDistance", 0x58, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotReviveDigestedSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotReviveDigestedSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotDigestedSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t AllyEvaluationTime = 0x38;
            static constexpr std::uintptr_t AllyEvaluationTimeDeviation = 0x3C;
            static constexpr std::uintptr_t CooldownOnCancel = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AllyEvaluationTime", 0x38, "FloatProperty"},
            {"AllyEvaluationTimeDeviation", 0x3C, "FloatProperty"},
            {"CooldownOnCancel", 0x40, "FloatProperty"},
        }};
    };

    struct FortAthenaAIBotReviveSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotReviveSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t AllyEvaluationTime = 0x30;
            static constexpr std::uintptr_t AllyEvaluationTimeDeviation = 0x58;
            static constexpr std::uintptr_t CooldownOnCancel = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AllyEvaluationTime", 0x30, "StructProperty"},
            {"AllyEvaluationTimeDeviation", 0x58, "StructProperty"},
            {"CooldownOnCancel", 0x80, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAIBotSpawnerData
    {
        static constexpr std::string_view Name = "FortAthenaAIBotSpawnerData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerData";
        struct Offsets
        {
            static constexpr std::uintptr_t SkillSetComponent = 0x160;
            static constexpr std::uintptr_t ConstructionComponent = 0x168;
            static constexpr std::uintptr_t VehicleComponent = 0x170;
            static constexpr std::uintptr_t CoverComponent = 0x178;
            static constexpr std::uintptr_t PerksComponent = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SkillSetComponent", 0x160, "ClassProperty"},
            {"ConstructionComponent", 0x168, "ClassProperty"},
            {"VehicleComponent", 0x170, "ClassProperty"},
            {"CoverComponent", 0x178, "ClassProperty"},
            {"PerksComponent", 0x180, "ClassProperty"},
        }};
    };

    struct FortAthenaAIBotUnstuckDigestedSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotUnstuckDigestedSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotDigestedSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t bCanUndermineWhenStuck = 0x38;
            static constexpr std::uintptr_t bCanTeleportWhenStuck = 0x39;
            static constexpr std::uintptr_t bAvoidsTeleportLocationsUnderTheLandscape = 0x3A;
            static constexpr std::uintptr_t bCanTeleportWhenStuckWithPlayerAround = 0x3B;
            static constexpr std::uintptr_t MaxDistanceSqToPlayerToTeleport = 0x3C;
            static constexpr std::uintptr_t MinDistanceSqFromPlayerToTeleport = 0x40;
            static constexpr std::uintptr_t PlayerToPhoebeAngleVisibilityConeToTeleport = 0x44;
            static constexpr std::uintptr_t TimeBetweenPartialPathToConsiderPathStuck = 0x48;
            static constexpr std::uintptr_t ConsecutivePartialPathCountToConsiderPathStuck = 0x4C;
            static constexpr std::uintptr_t DistanceSqBetweenBlockedPathToConsiderPathStuck = 0x50;
            static constexpr std::uintptr_t DistanceBetweenSampleToConsiderPathStuckInWater = 0x54;
            static constexpr std::uintptr_t TimeBetweenSampleToConsiderPathStuckInWater = 0x58;
            static constexpr std::uintptr_t DistanceBetweenSampleToConsiderPathStuckOnGround = 0x5C;
            static constexpr std::uintptr_t TimeBetweenSampleToConsiderPathStuckOnGround = 0x60;
            static constexpr std::uintptr_t ConsecutiveBlockedPathCountToConsiderPathStuck = 0x64;
            static constexpr std::uintptr_t MaxSafeZoneIndexToAllowTeleport = 0x68;
            static constexpr std::uintptr_t TimeToBreakBlockingDoor = 0x6C;
            static constexpr std::uintptr_t TimeToCloseBlockingDoor = 0x70;
            static constexpr std::uintptr_t RiverbedObstacleCollisionNormalThreshold = 0x74;
            static constexpr std::uintptr_t bCanUseSteeringWhenStuck = 0x78;
            static constexpr std::uintptr_t bCanUseSteeringWhenStuckOnIsolatedIsland = 0x79;
            static constexpr std::uintptr_t MaxSteeringDirectionAttempts = 0x7C;
            static constexpr std::uintptr_t SteeringAttemptDuration = 0x80;
            static constexpr std::uintptr_t EvaluateIsolatedIslandSteeringTime = 0x84;
            static constexpr std::uintptr_t bCanSlideWhenBlocked = 0x88;
            static constexpr std::uintptr_t SlidingDurationSeconds = 0x8C;
            static constexpr std::uintptr_t SlidingStartIntensity = 0x90;
            static constexpr std::uintptr_t SlidingIntensityPerSeconds = 0x94;
            static constexpr std::uintptr_t SlidingMaxIntensity = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"bCanUndermineWhenStuck", 0x38, "BoolProperty"},
            {"bCanTeleportWhenStuck", 0x39, "BoolProperty"},
            {"bAvoidsTeleportLocationsUnderTheLandscape", 0x3A, "BoolProperty"},
            {"bCanTeleportWhenStuckWithPlayerAround", 0x3B, "BoolProperty"},
            {"MaxDistanceSqToPlayerToTeleport", 0x3C, "FloatProperty"},
            {"MinDistanceSqFromPlayerToTeleport", 0x40, "FloatProperty"},
            {"PlayerToPhoebeAngleVisibilityConeToTeleport", 0x44, "FloatProperty"},
            {"TimeBetweenPartialPathToConsiderPathStuck", 0x48, "FloatProperty"},
            {"ConsecutivePartialPathCountToConsiderPathStuck", 0x4C, "IntProperty"},
            {"DistanceSqBetweenBlockedPathToConsiderPathStuck", 0x50, "FloatProperty"},
            {"DistanceBetweenSampleToConsiderPathStuckInWater", 0x54, "FloatProperty"},
            {"TimeBetweenSampleToConsiderPathStuckInWater", 0x58, "FloatProperty"},
            {"DistanceBetweenSampleToConsiderPathStuckOnGround", 0x5C, "FloatProperty"},
            {"TimeBetweenSampleToConsiderPathStuckOnGround", 0x60, "FloatProperty"},
            {"ConsecutiveBlockedPathCountToConsiderPathStuck", 0x64, "IntProperty"},
            {"MaxSafeZoneIndexToAllowTeleport", 0x68, "IntProperty"},
            {"TimeToBreakBlockingDoor", 0x6C, "FloatProperty"},
            {"TimeToCloseBlockingDoor", 0x70, "FloatProperty"},
            {"RiverbedObstacleCollisionNormalThreshold", 0x74, "FloatProperty"},
            {"bCanUseSteeringWhenStuck", 0x78, "BoolProperty"},
            {"bCanUseSteeringWhenStuckOnIsolatedIsland", 0x79, "BoolProperty"},
            {"MaxSteeringDirectionAttempts", 0x7C, "IntProperty"},
            {"SteeringAttemptDuration", 0x80, "FloatProperty"},
            {"EvaluateIsolatedIslandSteeringTime", 0x84, "FloatProperty"},
            {"bCanSlideWhenBlocked", 0x88, "BoolProperty"},
            {"SlidingDurationSeconds", 0x8C, "FloatProperty"},
            {"SlidingStartIntensity", 0x90, "FloatProperty"},
            {"SlidingIntensityPerSeconds", 0x94, "FloatProperty"},
            {"SlidingMaxIntensity", 0x98, "FloatProperty"},
        }};
    };

    struct FortAthenaAIBotUnstuckSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotUnstuckSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t CanUndermineWhenStuck = 0x30;
            static constexpr std::uintptr_t CanTeleportWhenStuck = 0x58;
            static constexpr std::uintptr_t AvoidsTeleportLocationsUnderTheLandscape = 0x80;
            static constexpr std::uintptr_t CanTeleportWhenStuckWithPlayerAround = 0xA8;
            static constexpr std::uintptr_t MaxDistanceToPlayerToTeleport = 0xD0;
            static constexpr std::uintptr_t MinDistanceFromPlayerToTeleport = 0xF8;
            static constexpr std::uintptr_t PlayerToPhoebeAngleVisibilityConeToTeleport = 0x120;
            static constexpr std::uintptr_t MaxSafeZoneIndexToAllowTeleport = 0x148;
            static constexpr std::uintptr_t TimeToCloseBlockingDoor = 0x170;
            static constexpr std::uintptr_t TimeToBreakBlockingDoor = 0x198;
            static constexpr std::uintptr_t RiverbedObstacleCollisionNormalThreshold = 0x1C0;
            static constexpr std::uintptr_t CanUserSteerToUnstuck = 0x1E8;
            static constexpr std::uintptr_t CanUseSteeringWhenStuckOnIsolatedIsland = 0x210;
            static constexpr std::uintptr_t MaxSteeringDirectionAttempts = 0x238;
            static constexpr std::uintptr_t SteeringAttemptDuration = 0x260;
            static constexpr std::uintptr_t EvaluateIsolatedIslandSteeringTime = 0x288;
            static constexpr std::uintptr_t TimeBetweenPartialPathToConsiderPathStuck = 0x2B0;
            static constexpr std::uintptr_t ConsecutivePartialPathCountToConsiderPathStuck = 0x2D8;
            static constexpr std::uintptr_t DistanceBetweenSampleToConsiderPathStuckInWater = 0x300;
            static constexpr std::uintptr_t TimeBetweenSampleToConsiderPathStuckInWater = 0x328;
            static constexpr std::uintptr_t DistanceBetweenSampleToConsiderPathStuckOnGround = 0x350;
            static constexpr std::uintptr_t TimeBetweenSampleToConsiderPathStuckOnGround = 0x378;
            static constexpr std::uintptr_t DistanceBetweenBlockedPathToConsiderPathStuck = 0x3A0;
            static constexpr std::uintptr_t ConsecutiveBlockedPathCountToConsiderPathStuck = 0x3C8;
            static constexpr std::uintptr_t bCanSlideWhenBlocked = 0x3F0;
            static constexpr std::uintptr_t SlidingDurationSeconds = 0x418;
            static constexpr std::uintptr_t SlidingStartIntensity = 0x440;
            static constexpr std::uintptr_t SlidingIntensityPerSeconds = 0x468;
            static constexpr std::uintptr_t SlidingMaxIntensity = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"CanUndermineWhenStuck", 0x30, "StructProperty"},
            {"CanTeleportWhenStuck", 0x58, "StructProperty"},
            {"AvoidsTeleportLocationsUnderTheLandscape", 0x80, "StructProperty"},
            {"CanTeleportWhenStuckWithPlayerAround", 0xA8, "StructProperty"},
            {"MaxDistanceToPlayerToTeleport", 0xD0, "StructProperty"},
            {"MinDistanceFromPlayerToTeleport", 0xF8, "StructProperty"},
            {"PlayerToPhoebeAngleVisibilityConeToTeleport", 0x120, "StructProperty"},
            {"MaxSafeZoneIndexToAllowTeleport", 0x148, "StructProperty"},
            {"TimeToCloseBlockingDoor", 0x170, "StructProperty"},
            {"TimeToBreakBlockingDoor", 0x198, "StructProperty"},
            {"RiverbedObstacleCollisionNormalThreshold", 0x1C0, "StructProperty"},
            {"CanUserSteerToUnstuck", 0x1E8, "StructProperty"},
            {"CanUseSteeringWhenStuckOnIsolatedIsland", 0x210, "StructProperty"},
            {"MaxSteeringDirectionAttempts", 0x238, "StructProperty"},
            {"SteeringAttemptDuration", 0x260, "StructProperty"},
            {"EvaluateIsolatedIslandSteeringTime", 0x288, "StructProperty"},
            {"TimeBetweenPartialPathToConsiderPathStuck", 0x2B0, "StructProperty"},
            {"ConsecutivePartialPathCountToConsiderPathStuck", 0x2D8, "StructProperty"},
            {"DistanceBetweenSampleToConsiderPathStuckInWater", 0x300, "StructProperty"},
            {"TimeBetweenSampleToConsiderPathStuckInWater", 0x328, "StructProperty"},
            {"DistanceBetweenSampleToConsiderPathStuckOnGround", 0x350, "StructProperty"},
            {"TimeBetweenSampleToConsiderPathStuckOnGround", 0x378, "StructProperty"},
            {"DistanceBetweenBlockedPathToConsiderPathStuck", 0x3A0, "StructProperty"},
            {"ConsecutiveBlockedPathCountToConsiderPathStuck", 0x3C8, "StructProperty"},
            {"bCanSlideWhenBlocked", 0x3F0, "StructProperty"},
            {"SlidingDurationSeconds", 0x418, "StructProperty"},
            {"SlidingStartIntensity", 0x440, "StructProperty"},
            {"SlidingIntensityPerSeconds", 0x468, "StructProperty"},
            {"SlidingMaxIntensity", 0x490, "StructProperty"},
        }};
    };

    struct FortAthenaAIBotVehicleDigestedSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotVehicleDigestedSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotDigestedSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t NoMatchingVehicleDriving = 0x38;
            static constexpr std::uintptr_t VehicleDrivingArray = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NoMatchingVehicleDriving", 0x38, "StructProperty"},
            {"VehicleDrivingArray", 0xF0, "ArrayProperty"},
        }};
    };

    struct FortAthenaAIBotVehicleSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotVehicleSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t NoMatchingVehicleDriving = 0x30;
            static constexpr std::uintptr_t VehicleDrivingArray = 0x360;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NoMatchingVehicleDriving", 0x30, "StructProperty"},
            {"VehicleDrivingArray", 0x360, "ArrayProperty"},
        }};
    };

    struct FortAthenaAIBotWarmupDigestedSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotWarmupDigestedSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotDigestedSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t WarmupPlayEmoteBehaviorWeight = 0x38;
            static constexpr std::uintptr_t WarmupLootAndShootBehaviorWeight = 0x3C;
            static constexpr std::uintptr_t WarmupIdleBehaviorWeight = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"WarmupPlayEmoteBehaviorWeight", 0x38, "FloatProperty"},
            {"WarmupLootAndShootBehaviorWeight", 0x3C, "FloatProperty"},
            {"WarmupIdleBehaviorWeight", 0x40, "FloatProperty"},
        }};
    };

    struct FortAthenaAIBotWarmupSkillSet
    {
        static constexpr std::string_view Name = "FortAthenaAIBotWarmupSkillSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotSkillSet";
        struct Offsets
        {
            static constexpr std::uintptr_t WarmupPlayEmoteBehaviorWeight = 0x30;
            static constexpr std::uintptr_t WarmupLootAndShootBehaviorWeight = 0x58;
            static constexpr std::uintptr_t WarmupIdleBehaviorWeight = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"WarmupPlayEmoteBehaviorWeight", 0x30, "StructProperty"},
            {"WarmupLootAndShootBehaviorWeight", 0x58, "StructProperty"},
            {"WarmupIdleBehaviorWeight", 0x80, "StructProperty"},
        }};
    };

    struct FortAthenaAIBot_EQSQueryContext_CurrentTarget
    {
        static constexpr std::string_view Name = "FortAthenaAIBot_EQSQueryContext_CurrentTarget";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAIControllerInterface
    {
        static constexpr std::string_view Name = "FortAthenaAIControllerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAICoverComponent
    {
        static constexpr std::string_view Name = "FortAthenaAICoverComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CoverPositionFilterClass = 0xC0;
            static constexpr std::uintptr_t CoverBoxExtent = 0xC8;
            static constexpr std::uintptr_t CoverOffset = 0xE0;
            static constexpr std::uintptr_t CachedController = 0xE8;
            static constexpr std::uintptr_t LastBuildingActorUsedForCover = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CoverPositionFilterClass", 0xC0, "ClassProperty"},
            {"CoverBoxExtent", 0xC8, "StructProperty"},
            {"CoverOffset", 0xE0, "FloatProperty"},
            {"CachedController", 0xE8, "ObjectProperty"},
            {"LastBuildingActorUsedForCover", 0xF0, "WeakObjectProperty"},
        }};
    };

    struct FortAthenaAIEvaluator
    {
        static constexpr std::string_view Name = "FortAthenaAIEvaluator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedOwnerComp = 0x28;
            static constexpr std::uintptr_t CachedAIController = 0x30;
            static constexpr std::uintptr_t OverrideNavigationFilterClass = 0x38;
            static constexpr std::uintptr_t ExecutionStatusName = 0x58;
            static constexpr std::uintptr_t CachedLODSettingsInterface = 0x68;
            static constexpr std::uintptr_t KeyAccessValidator = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CachedOwnerComp", 0x28, "ObjectProperty"},
            {"CachedAIController", 0x30, "ObjectProperty"},
            {"OverrideNavigationFilterClass", 0x38, "ClassProperty"},
            {"ExecutionStatusName", 0x58, "NameProperty"},
            {"CachedLODSettingsInterface", 0x68, "InterfaceProperty"},
            {"KeyAccessValidator", 0x78, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIEvaluatorComponent
    {
        static constexpr std::string_view Name = "FortAthenaAIEvaluatorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AIEvaluators = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AIEvaluators", 0xC0, "ArrayProperty"},
        }};
    };

    struct FortAthenaAIEvaluator_Movement
    {
        static constexpr std::string_view Name = "FortAthenaAIEvaluator_Movement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIEvaluator";
        struct Offsets
        {
            static constexpr std::uintptr_t MovementStateKeyName = 0xA0;
            static constexpr std::uintptr_t MovementDestinationKeyName = 0xA4;
            static constexpr std::uintptr_t LastPartialPathTimeKeyName = 0xA8;
            static constexpr std::uintptr_t LastPartialPathCountKeyName = 0xAC;
            static constexpr std::uintptr_t LastBlockedPathCountKeyName = 0xB0;
            static constexpr std::uintptr_t UnstuckInWaterExecutionStatusName = 0xB4;
            static constexpr std::uintptr_t UnstuckLastBlockedByActorKeyName = 0xB8;
            static constexpr std::uintptr_t UnstuckExecutionStatusKeyName = 0xBC;
            static constexpr std::uintptr_t TeleportExecutionStatusKeyName = 0xC0;
            static constexpr std::uintptr_t UndermineExecutionStatusKeyName = 0xC4;
            static constexpr std::uintptr_t UndermineTargetKeyName = 0xC8;
            static constexpr std::uintptr_t UndermineLocationImpactName = 0xCC;
            static constexpr std::uintptr_t UnstuckSteerExecutionStatusKeyName = 0xD0;
            static constexpr std::uintptr_t UnstuckSteerDirectionKeyName = 0xD4;
            static constexpr std::uintptr_t UnstuckSkillSet = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"MovementStateKeyName", 0xA0, "NameProperty"},
            {"MovementDestinationKeyName", 0xA4, "NameProperty"},
            {"LastPartialPathTimeKeyName", 0xA8, "NameProperty"},
            {"LastPartialPathCountKeyName", 0xAC, "NameProperty"},
            {"LastBlockedPathCountKeyName", 0xB0, "NameProperty"},
            {"UnstuckInWaterExecutionStatusName", 0xB4, "NameProperty"},
            {"UnstuckLastBlockedByActorKeyName", 0xB8, "NameProperty"},
            {"UnstuckExecutionStatusKeyName", 0xBC, "NameProperty"},
            {"TeleportExecutionStatusKeyName", 0xC0, "NameProperty"},
            {"UndermineExecutionStatusKeyName", 0xC4, "NameProperty"},
            {"UndermineTargetKeyName", 0xC8, "NameProperty"},
            {"UndermineLocationImpactName", 0xCC, "NameProperty"},
            {"UnstuckSteerExecutionStatusKeyName", 0xD0, "NameProperty"},
            {"UnstuckSteerDirectionKeyName", 0xD4, "NameProperty"},
            {"UnstuckSkillSet", 0xD8, "ObjectProperty"},
        }};
    };

    struct FortAthenaAILODComponent
    {
        static constexpr std::string_view Name = "FortAthenaAILODComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentFortAILODLevel = 0xC0;
            static constexpr std::uintptr_t bCouldBeVisibleToPlayers = 0xC3;
            static constexpr std::uintptr_t CachedFortPawn = 0xC8;
            static constexpr std::uintptr_t AILODSettingsContainer = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CurrentFortAILODLevel", 0xC0, "EnumProperty"},
            {"bCouldBeVisibleToPlayers", 0xC3, "BoolProperty"},
            {"CachedFortPawn", 0xC8, "ObjectProperty"},
            {"AILODSettingsContainer", 0xD0, "ObjectProperty"},
        }};
    };

    struct FortAthenaAILODSettings
    {
        static constexpr std::string_view Name = "FortAthenaAILODSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAILODSettingsContainer
    {
        static constexpr std::string_view Name = "FortAthenaAILODSettingsContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassToSettings = 0x28;
            static constexpr std::uintptr_t LODSettings_AIEvaluators = 0x38;
            static constexpr std::uintptr_t LODSettings_CharacterMovement = 0x48;
            static constexpr std::uintptr_t LODSettings_FortWeaponRanged = 0x58;
            static constexpr std::uintptr_t LODSettings_GenericTickingObject = 0x68;
            static constexpr std::uintptr_t FortAIDirectorLODConfig = 0x78;
            static constexpr std::uintptr_t FortAIDirectorObjectLODConfig = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"ClassToSettings", 0x28, "MapProperty"},
            {"LODSettings_AIEvaluators", 0x38, "ArrayProperty"},
            {"LODSettings_CharacterMovement", 0x48, "ArrayProperty"},
            {"LODSettings_FortWeaponRanged", 0x58, "ArrayProperty"},
            {"LODSettings_GenericTickingObject", 0x68, "ArrayProperty"},
            {"FortAIDirectorLODConfig", 0x78, "ClassProperty"},
            {"FortAIDirectorObjectLODConfig", 0x80, "ObjectProperty"},
        }};
    };

    struct FortAthenaAILODSettings_AIEvaluator
    {
        static constexpr std::string_view Name = "FortAthenaAILODSettings_AIEvaluator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SystemClasses = 0x30;
            static constexpr std::uintptr_t BelowLowerLODSettings = 0x40;
            static constexpr std::uintptr_t LowerLODSettings = 0xA8;
            static constexpr std::uintptr_t AboveLowerLODSettings = 0x110;
            static constexpr std::uintptr_t BelowNormalLODSettings = 0x178;
            static constexpr std::uintptr_t NormalLODSettings = 0x1E0;
            static constexpr std::uintptr_t AboveNormalLODSettings = 0x248;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SystemClasses", 0x30, "ArrayProperty"},
            {"BelowLowerLODSettings", 0x40, "StructProperty"},
            {"LowerLODSettings", 0xA8, "StructProperty"},
            {"AboveLowerLODSettings", 0x110, "StructProperty"},
            {"BelowNormalLODSettings", 0x178, "StructProperty"},
            {"NormalLODSettings", 0x1E0, "StructProperty"},
            {"AboveNormalLODSettings", 0x248, "StructProperty"},
        }};
    };

    struct FortAthenaAILODSettings_CharacterMovement
    {
        static constexpr std::string_view Name = "FortAthenaAILODSettings_CharacterMovement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SystemClasses = 0x30;
            static constexpr std::uintptr_t BelowLowerLODSettings = 0x40;
            static constexpr std::uintptr_t LowerLODSettings = 0x1C8;
            static constexpr std::uintptr_t AboveLowerLODSettings = 0x350;
            static constexpr std::uintptr_t BelowNormalLODSettings = 0x4D8;
            static constexpr std::uintptr_t NormalLODSettings = 0x660;
            static constexpr std::uintptr_t AboveNormalLODSettings = 0x7E8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SystemClasses", 0x30, "ArrayProperty"},
            {"BelowLowerLODSettings", 0x40, "StructProperty"},
            {"LowerLODSettings", 0x1C8, "StructProperty"},
            {"AboveLowerLODSettings", 0x350, "StructProperty"},
            {"BelowNormalLODSettings", 0x4D8, "StructProperty"},
            {"NormalLODSettings", 0x660, "StructProperty"},
            {"AboveNormalLODSettings", 0x7E8, "StructProperty"},
        }};
    };

    struct FortAthenaAILODSettings_FortWeaponRanged
    {
        static constexpr std::string_view Name = "FortAthenaAILODSettings_FortWeaponRanged";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SystemClasses = 0x30;
            static constexpr std::uintptr_t BelowLowerLODSettings = 0x40;
            static constexpr std::uintptr_t LowerLODSettings = 0xA8;
            static constexpr std::uintptr_t AboveLowerLODSettings = 0x110;
            static constexpr std::uintptr_t BelowNormalLODSettings = 0x178;
            static constexpr std::uintptr_t NormalLODSettings = 0x1E0;
            static constexpr std::uintptr_t AboveNormalLODSettings = 0x248;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SystemClasses", 0x30, "ArrayProperty"},
            {"BelowLowerLODSettings", 0x40, "StructProperty"},
            {"LowerLODSettings", 0xA8, "StructProperty"},
            {"AboveLowerLODSettings", 0x110, "StructProperty"},
            {"BelowNormalLODSettings", 0x178, "StructProperty"},
            {"NormalLODSettings", 0x1E0, "StructProperty"},
            {"AboveNormalLODSettings", 0x248, "StructProperty"},
        }};
    };

    struct FortAthenaAILODSettings_GenericTickingObject
    {
        static constexpr std::string_view Name = "FortAthenaAILODSettings_GenericTickingObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SystemClasses = 0x30;
            static constexpr std::uintptr_t BelowLowerLODSettings = 0x40;
            static constexpr std::uintptr_t LowerLODSettings = 0x78;
            static constexpr std::uintptr_t AboveLowerLODSettings = 0xB0;
            static constexpr std::uintptr_t BelowNormalLODSettings = 0xE8;
            static constexpr std::uintptr_t NormalLODSettings = 0x120;
            static constexpr std::uintptr_t AboveNormalLODSettings = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"SystemClasses", 0x30, "ArrayProperty"},
            {"BelowLowerLODSettings", 0x40, "StructProperty"},
            {"LowerLODSettings", 0x78, "StructProperty"},
            {"AboveLowerLODSettings", 0xB0, "StructProperty"},
            {"BelowNormalLODSettings", 0xE8, "StructProperty"},
            {"NormalLODSettings", 0x120, "StructProperty"},
            {"AboveNormalLODSettings", 0x158, "StructProperty"},
        }};
    };

    struct FortAthenaAILeashVolume
    {
        static constexpr std::string_view Name = "FortAthenaAILeashVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Volume";
        struct Offsets
        {
            static constexpr std::uintptr_t ProjectExtent = 0x2B0;
            static constexpr std::uintptr_t IsInsideTolerance = 0x2C8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProjectExtent", 0x2B0, "StructProperty"},
            {"IsInsideTolerance", 0x2C8, "FloatProperty"},
        }};
    };

    struct FortAthenaAIObjectTracker
    {
        static constexpr std::string_view Name = "FortAthenaAIObjectTracker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAIPerk_Ambush
    {
        static constexpr std::string_view Name = "FortAthenaAIPerk_Ambush";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIPerkBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CooldownDuration = 0x28;
            static constexpr std::uintptr_t CooldownDurationRandomDeviation = 0x50;
            static constexpr std::uintptr_t ActivationCountBeforeCooldown = 0x78;
            static constexpr std::uintptr_t ActivationDuration = 0xA0;
            static constexpr std::uintptr_t ActivationDurationRandomDeviation = 0xC8;
            static constexpr std::uintptr_t OddsToActivate = 0xF0;
            static constexpr std::uintptr_t FailedActivationCooldownDuration = 0x118;
            static constexpr std::uintptr_t FailedActivationCooldownDurationRandomDeviation = 0x140;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"CooldownDuration", 0x28, "StructProperty"},
            {"CooldownDurationRandomDeviation", 0x50, "StructProperty"},
            {"ActivationCountBeforeCooldown", 0x78, "StructProperty"},
            {"ActivationDuration", 0xA0, "StructProperty"},
            {"ActivationDurationRandomDeviation", 0xC8, "StructProperty"},
            {"OddsToActivate", 0xF0, "StructProperty"},
            {"FailedActivationCooldownDuration", 0x118, "StructProperty"},
            {"FailedActivationCooldownDurationRandomDeviation", 0x140, "StructProperty"},
        }};
    };

    struct FortAthenaAIPerk_Bunker
    {
        static constexpr std::string_view Name = "FortAthenaAIPerk_Bunker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIPerkBase";
        struct Offsets
        {
            static constexpr std::uintptr_t OddsToBeUsedAgainstUnknownThreat = 0x168;
            static constexpr std::uintptr_t OddsToUseRoofBuilding = 0x190;
            static constexpr std::uintptr_t OddsToBuildForwardRamp = 0x1B8;
            static constexpr std::uintptr_t InitialBuildDelay = 0x1E0;
            static constexpr std::uintptr_t SamePieceBuildDelay = 0x208;
            static constexpr std::uintptr_t SamePieceBuildDelayRandomDeviation = 0x230;
            static constexpr std::uintptr_t DifferentPieceBuildDelay = 0x258;
            static constexpr std::uintptr_t DifferentPieceBuildDelayRandomDeviation = 0x280;
            static constexpr std::uintptr_t OddsToSelectRandomMaterial = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"OddsToBeUsedAgainstUnknownThreat", 0x168, "StructProperty"},
            {"OddsToUseRoofBuilding", 0x190, "StructProperty"},
            {"OddsToBuildForwardRamp", 0x1B8, "StructProperty"},
            {"InitialBuildDelay", 0x1E0, "StructProperty"},
            {"SamePieceBuildDelay", 0x208, "StructProperty"},
            {"SamePieceBuildDelayRandomDeviation", 0x230, "StructProperty"},
            {"DifferentPieceBuildDelay", 0x258, "StructProperty"},
            {"DifferentPieceBuildDelayRandomDeviation", 0x280, "StructProperty"},
            {"OddsToSelectRandomMaterial", 0x2A8, "StructProperty"},
        }};
    };

    struct FortAthenaAIPerk_EvasiveManeuvers
    {
        static constexpr std::string_view Name = "FortAthenaAIPerk_EvasiveManeuvers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIPerkBase";
        struct Offsets
        {
            static constexpr std::uintptr_t EvasiveManeuverSkillSettings = 0x168;
            static constexpr std::uintptr_t DistanceMin = 0x3C0;
            static constexpr std::uintptr_t DistanceMax = 0x3E8;
            static constexpr std::uintptr_t WeaponTagQuery = 0x410;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"EvasiveManeuverSkillSettings", 0x168, "StructProperty"},
            {"DistanceMin", 0x3C0, "StructProperty"},
            {"DistanceMax", 0x3E8, "StructProperty"},
            {"WeaponTagQuery", 0x410, "StructProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParameters
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtractedLevel = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExtractedLevel", 0x28, "IntProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParametersComponent
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParametersComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RegisteredParametersProviders = 0xC0;
            static constexpr std::uintptr_t ExtractedRuntimeParameters = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"RegisteredParametersProviders", 0xC0, "MapProperty"},
            {"ExtractedRuntimeParameters", 0xD0, "MapProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParametersProvider
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParametersProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAIRuntimeParameters_AIAnalytic
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_AIAnalytic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters_Analytic";
        struct Offsets
        {
            static constexpr std::uintptr_t AnalyticUniqueID = 0x50;
            static constexpr std::uintptr_t AIType = 0x60;
            static constexpr std::uintptr_t bShouldRecordDeathInstigator = 0x70;
            static constexpr std::uintptr_t bShouldRecordDroppedPickups = 0x70;
            static constexpr std::uintptr_t bShouldRecordGrabbedPickups = 0x70;
            static constexpr std::uintptr_t bShouldRecordRegularDowns = 0x70;
            static constexpr std::uintptr_t bShouldRecordTetheredDowns = 0x70;
            static constexpr std::uintptr_t bShouldSendSpawnEvents = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"AnalyticUniqueID", 0x50, "StrProperty"},
            {"AIType", 0x60, "StrProperty"},
            {"bShouldRecordDeathInstigator", 0x70, "BoolProperty"},
            {"bShouldRecordDroppedPickups", 0x70, "BoolProperty"},
            {"bShouldRecordGrabbedPickups", 0x70, "BoolProperty"},
            {"bShouldRecordRegularDowns", 0x70, "BoolProperty"},
            {"bShouldRecordTetheredDowns", 0x70, "BoolProperty"},
            {"bShouldSendSpawnEvents", 0x70, "BoolProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParameters_AIBotConvert
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_AIBotConvert";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters_AIConvert";
        struct Offsets
        {
            static constexpr std::uintptr_t bFollowerCanUseDBNO = 0x120;
            static constexpr std::uintptr_t bFollowingBehaviorEnabled = 0x120;
            static constexpr std::uintptr_t bFollowingBehaviorMovementStyleEnabled = 0x120;
            static constexpr std::uintptr_t bMimicBehaviorEnabled = 0x120;
            static constexpr std::uintptr_t bShouldLeashFollowConverter = 0x120;
            static constexpr std::uintptr_t bShouldScanAroundWhenWaiting = 0x120;
            static constexpr std::uintptr_t bShouldTeleportTestPathValidity = 0x120;
            static constexpr std::uintptr_t bShouldTeleportTowardsConverter = 0x120;
            static constexpr std::uintptr_t bCanDanceWithConverter = 0x121;
            static constexpr std::uintptr_t bCanHolsterWeaponWhileConverted = 0x121;
            static constexpr std::uintptr_t bCanTurnAgainstConverter = 0x121;
            static constexpr std::uintptr_t bTargetPawnConverterDamaged = 0x121;
            static constexpr std::uintptr_t bTurnAgainstConverterUsesConverterAsLeash = 0x121;
            static constexpr std::uintptr_t TurnAgainstConverterInnerLeashRadius = 0x124;
            static constexpr std::uintptr_t TurnAgainstConverterOuterLeashRadius = 0x128;
            static constexpr std::uintptr_t SkillLevelOverride = 0x12C;
            static constexpr std::uintptr_t PreConversionSkillLevel = 0x130;
            static constexpr std::uintptr_t InnerLeashRadius = 0x134;
            static constexpr std::uintptr_t OuterLeashRadius = 0x138;
            static constexpr std::uintptr_t PreConversionLeashParams = 0x140;
            static constexpr std::uintptr_t LeashFollowActorUpdateRate = 0x148;
            static constexpr std::uintptr_t LeashFollowActorLocalOffset = 0x150;
            static constexpr std::uintptr_t FollowingBehaviorRadiusSqr = 0x168;
            static constexpr std::uintptr_t FollowingBehaviorRadius = 0x16C;
            static constexpr std::uintptr_t FollowingBehaviorInnerRadius = 0x170;
            static constexpr std::uintptr_t FollowingBehaviorWalkRadiusSqr = 0x174;
            static constexpr std::uintptr_t FollowingBehaviorWalkRadius = 0x178;
            static constexpr std::uintptr_t FollowingBehaviorRunRadiusSqr = 0x17C;
            static constexpr std::uintptr_t FollowingBehaviorRunRadius = 0x180;
            static constexpr std::uintptr_t FollowingBehaviorUrgenceRadiusSqr = 0x184;
            static constexpr std::uintptr_t FollowingBehaviorUrgenceRadius = 0x188;
            static constexpr std::uintptr_t FollowingBehaviorBlockedSightAngleRad = 0x18C;
            static constexpr std::uintptr_t FollowingBehaviorBlockedSightExitAngleRad = 0x190;
            static constexpr std::uintptr_t FollowingBehaviorBlockedSightExitDistMin = 0x194;
            static constexpr std::uintptr_t MimicBehaviorRadiusSqr = 0x198;
            static constexpr std::uintptr_t MimicBehaviorRadius = 0x19C;
            static constexpr std::uintptr_t TeleportTowardsConverterDistanceSq = 0x1A0;
            static constexpr std::uintptr_t TeleportTowardsConverterInCombatDistanceSq = 0x1A4;
            static constexpr std::uintptr_t TeleportTowardsConverterHeightThreshold = 0x1A8;
            static constexpr std::uintptr_t TeleportTowardsConverterWhenNotVisibleDistanceSq = 0x1AC;
            static constexpr std::uintptr_t TeleportTowardsConverterInCombatWhenNotVisibleDistanceSq = 0x1B0;
            static constexpr std::uintptr_t MinDistanceFromConverterWhenTeleported = 0x1B4;
            static constexpr std::uintptr_t MaxDistanceFromConverterWhenTeleported = 0x1B8;
            static constexpr std::uintptr_t ConvertedSkillSetClasses = 0x1C0;
            static constexpr std::uintptr_t PreConversionSkillSetClasses = 0x1D0;
            static constexpr std::uintptr_t TurnAgainstConverterSetToFactions = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 46> Properties{{
            {"bFollowerCanUseDBNO", 0x120, "BoolProperty"},
            {"bFollowingBehaviorEnabled", 0x120, "BoolProperty"},
            {"bFollowingBehaviorMovementStyleEnabled", 0x120, "BoolProperty"},
            {"bMimicBehaviorEnabled", 0x120, "BoolProperty"},
            {"bShouldLeashFollowConverter", 0x120, "BoolProperty"},
            {"bShouldScanAroundWhenWaiting", 0x120, "BoolProperty"},
            {"bShouldTeleportTestPathValidity", 0x120, "BoolProperty"},
            {"bShouldTeleportTowardsConverter", 0x120, "BoolProperty"},
            {"bCanDanceWithConverter", 0x121, "BoolProperty"},
            {"bCanHolsterWeaponWhileConverted", 0x121, "BoolProperty"},
            {"bCanTurnAgainstConverter", 0x121, "BoolProperty"},
            {"bTargetPawnConverterDamaged", 0x121, "BoolProperty"},
            {"bTurnAgainstConverterUsesConverterAsLeash", 0x121, "BoolProperty"},
            {"TurnAgainstConverterInnerLeashRadius", 0x124, "FloatProperty"},
            {"TurnAgainstConverterOuterLeashRadius", 0x128, "FloatProperty"},
            {"SkillLevelOverride", 0x12C, "FloatProperty"},
            {"PreConversionSkillLevel", 0x130, "FloatProperty"},
            {"InnerLeashRadius", 0x134, "FloatProperty"},
            {"OuterLeashRadius", 0x138, "FloatProperty"},
            {"PreConversionLeashParams", 0x140, "ObjectProperty"},
            {"LeashFollowActorUpdateRate", 0x148, "FloatProperty"},
            {"LeashFollowActorLocalOffset", 0x150, "StructProperty"},
            {"FollowingBehaviorRadiusSqr", 0x168, "FloatProperty"},
            {"FollowingBehaviorRadius", 0x16C, "FloatProperty"},
            {"FollowingBehaviorInnerRadius", 0x170, "FloatProperty"},
            {"FollowingBehaviorWalkRadiusSqr", 0x174, "FloatProperty"},
            {"FollowingBehaviorWalkRadius", 0x178, "FloatProperty"},
            {"FollowingBehaviorRunRadiusSqr", 0x17C, "FloatProperty"},
            {"FollowingBehaviorRunRadius", 0x180, "FloatProperty"},
            {"FollowingBehaviorUrgenceRadiusSqr", 0x184, "FloatProperty"},
            {"FollowingBehaviorUrgenceRadius", 0x188, "FloatProperty"},
            {"FollowingBehaviorBlockedSightAngleRad", 0x18C, "FloatProperty"},
            {"FollowingBehaviorBlockedSightExitAngleRad", 0x190, "FloatProperty"},
            {"FollowingBehaviorBlockedSightExitDistMin", 0x194, "FloatProperty"},
            {"MimicBehaviorRadiusSqr", 0x198, "FloatProperty"},
            {"MimicBehaviorRadius", 0x19C, "FloatProperty"},
            {"TeleportTowardsConverterDistanceSq", 0x1A0, "FloatProperty"},
            {"TeleportTowardsConverterInCombatDistanceSq", 0x1A4, "FloatProperty"},
            {"TeleportTowardsConverterHeightThreshold", 0x1A8, "FloatProperty"},
            {"TeleportTowardsConverterWhenNotVisibleDistanceSq", 0x1AC, "FloatProperty"},
            {"TeleportTowardsConverterInCombatWhenNotVisibleDistanceSq", 0x1B0, "FloatProperty"},
            {"MinDistanceFromConverterWhenTeleported", 0x1B4, "FloatProperty"},
            {"MaxDistanceFromConverterWhenTeleported", 0x1B8, "FloatProperty"},
            {"ConvertedSkillSetClasses", 0x1C0, "ArrayProperty"},
            {"PreConversionSkillSetClasses", 0x1D0, "ArrayProperty"},
            {"TurnAgainstConverterSetToFactions", 0x1F0, "StructProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParameters_AIBotDisguise
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_AIBotDisguise";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters";
        struct Offsets
        {
            static constexpr std::uintptr_t bShouldApplyDisguise = 0x30;
            static constexpr std::uintptr_t bRevealDisguiseOnDamage = 0x31;
            static constexpr std::uintptr_t bRevealOnDamageExcludeAIPawnDamage = 0x32;
            static constexpr std::uintptr_t bRevealDisguiseOnPlayerProximity = 0x33;
            static constexpr std::uintptr_t RevealPlayerProximityDistanceSqr = 0x34;
            static constexpr std::uintptr_t RevealPlayerProximityMinDuration = 0x38;
            static constexpr std::uintptr_t RevealPlayerProximityMaxDuration = 0x3C;
            static constexpr std::uintptr_t NameSettingsAfterReveal = 0x40;
            static constexpr std::uintptr_t DisguisedFactionsBeforeReveal = 0x48;
            static constexpr std::uintptr_t DisguisedFactionsAfterReveal = 0x68;
            static constexpr std::uintptr_t DisguiseGameplayEffectBeforeReveal = 0x88;
            static constexpr std::uintptr_t DisguiseGameplayEffectAfterReveal = 0x98;
            static constexpr std::uintptr_t DisguiseInventory = 0xA8;
            static constexpr std::uintptr_t DisguiseLootInfo = 0xB8;
            static constexpr std::uintptr_t DisguiseConversationComponentOverride = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"bShouldApplyDisguise", 0x30, "BoolProperty"},
            {"bRevealDisguiseOnDamage", 0x31, "BoolProperty"},
            {"bRevealOnDamageExcludeAIPawnDamage", 0x32, "BoolProperty"},
            {"bRevealDisguiseOnPlayerProximity", 0x33, "BoolProperty"},
            {"RevealPlayerProximityDistanceSqr", 0x34, "FloatProperty"},
            {"RevealPlayerProximityMinDuration", 0x38, "FloatProperty"},
            {"RevealPlayerProximityMaxDuration", 0x3C, "FloatProperty"},
            {"NameSettingsAfterReveal", 0x40, "ObjectProperty"},
            {"DisguisedFactionsBeforeReveal", 0x48, "StructProperty"},
            {"DisguisedFactionsAfterReveal", 0x68, "StructProperty"},
            {"DisguiseGameplayEffectBeforeReveal", 0x88, "ArrayProperty"},
            {"DisguiseGameplayEffectAfterReveal", 0x98, "ArrayProperty"},
            {"DisguiseInventory", 0xA8, "ArrayProperty"},
            {"DisguiseLootInfo", 0xB8, "StructProperty"},
            {"DisguiseConversationComponentOverride", 0xC8, "ClassProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParameters_AIBotInventory
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_AIBotInventory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters_Inventory";
        struct Offsets
        {
            static constexpr std::uintptr_t bGrantPickAxe = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bGrantPickAxe", 0x60, "BoolProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParameters_AIBotLoopSettings
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_AIBotLoopSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters";
        struct Offsets
        {
            static constexpr std::uintptr_t bDisableSpecialActorComponentUntilRespawn = 0x30;
            static constexpr std::uintptr_t bRemoveInvulnerabilityOutsideSafeZone = 0x30;
            static constexpr std::uintptr_t bRespawnAtOriginalSpawnLocation = 0x30;
            static constexpr std::uintptr_t bRespawnOustideTheLoop = 0x30;
            static constexpr std::uintptr_t bSpawnOutsideTheLoop = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bDisableSpecialActorComponentUntilRespawn", 0x30, "BoolProperty"},
            {"bRemoveInvulnerabilityOutsideSafeZone", 0x30, "BoolProperty"},
            {"bRespawnAtOriginalSpawnLocation", 0x30, "BoolProperty"},
            {"bRespawnOustideTheLoop", 0x30, "BoolProperty"},
            {"bSpawnOutsideTheLoop", 0x30, "BoolProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParameters_AIBotRespawn
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_AIBotRespawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters";
        struct Offsets
        {
            static constexpr std::uintptr_t bCanRespawnOnDeath = 0x30;
            static constexpr std::uintptr_t bRespawnOnDeathLocation = 0x30;
            static constexpr std::uintptr_t RespawnTime = 0x34;
            static constexpr std::uintptr_t RespawnLocationOverride = 0x38;
            static constexpr std::uintptr_t AISpawnerDataComponentList = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bCanRespawnOnDeath", 0x30, "BoolProperty"},
            {"bRespawnOnDeathLocation", 0x30, "BoolProperty"},
            {"RespawnTime", 0x34, "FloatProperty"},
            {"RespawnLocationOverride", 0x38, "StructProperty"},
            {"AISpawnerDataComponentList", 0x50, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParameters_AIConvert
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_AIConvert";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters";
        struct Offsets
        {
            static constexpr std::uintptr_t bCanBeConverted = 0x30;
            static constexpr std::uintptr_t OddsOfBeingConvertibleFromDBNO = 0x34;
            static constexpr std::uintptr_t ConvertTimeDBNO = 0x38;
            static constexpr std::uintptr_t bForceKillWhenUnconverted = 0x3C;
            static constexpr std::uintptr_t bForceKillWhenConverterDies = 0x3D;
            static constexpr std::uintptr_t bGiveOwnershipToSquadmateWhenConverterDies = 0x3E;
            static constexpr std::uintptr_t bCopyConverterSpecificRelations = 0x3F;
            static constexpr std::uintptr_t bRemoveFromAllFactions = 0x40;
            static constexpr std::uintptr_t bAddConverterFactions = 0x41;
            static constexpr std::uintptr_t ReleaseDistanceSq = 0x44;
            static constexpr std::uintptr_t CheckReleaseConditionsTimeInterval = 0x48;
            static constexpr std::uintptr_t AddToFactions = 0x50;
            static constexpr std::uintptr_t RemoveFromFactions = 0x70;
            static constexpr std::uintptr_t PreConversionTeamIndex = 0x90;
            static constexpr std::uintptr_t PreConversionFactions = 0x98;
            static constexpr std::uintptr_t AbilitySetsForConverted = 0xB8;
            static constexpr std::uintptr_t TeleportSettings = 0xC8;
            static constexpr std::uintptr_t bEnableDBNO = 0x100;
            static constexpr std::uintptr_t DBNOInteractionType = 0x101;
            static constexpr std::uintptr_t DBNOInteractionDuration = 0x104;
            static constexpr std::uintptr_t PickupTagConvertInfos = 0x108;
            static constexpr std::uintptr_t ConvertIdentifierTag = 0x118;
            static constexpr std::uintptr_t PlayerCommandsAllowed = 0x11C;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"bCanBeConverted", 0x30, "BoolProperty"},
            {"OddsOfBeingConvertibleFromDBNO", 0x34, "FloatProperty"},
            {"ConvertTimeDBNO", 0x38, "FloatProperty"},
            {"bForceKillWhenUnconverted", 0x3C, "BoolProperty"},
            {"bForceKillWhenConverterDies", 0x3D, "BoolProperty"},
            {"bGiveOwnershipToSquadmateWhenConverterDies", 0x3E, "BoolProperty"},
            {"bCopyConverterSpecificRelations", 0x3F, "BoolProperty"},
            {"bRemoveFromAllFactions", 0x40, "BoolProperty"},
            {"bAddConverterFactions", 0x41, "BoolProperty"},
            {"ReleaseDistanceSq", 0x44, "FloatProperty"},
            {"CheckReleaseConditionsTimeInterval", 0x48, "FloatProperty"},
            {"AddToFactions", 0x50, "StructProperty"},
            {"RemoveFromFactions", 0x70, "StructProperty"},
            {"PreConversionTeamIndex", 0x90, "ByteProperty"},
            {"PreConversionFactions", 0x98, "StructProperty"},
            {"AbilitySetsForConverted", 0xB8, "ArrayProperty"},
            {"TeleportSettings", 0xC8, "StructProperty"},
            {"bEnableDBNO", 0x100, "BoolProperty"},
            {"DBNOInteractionType", 0x101, "ByteProperty"},
            {"DBNOInteractionDuration", 0x104, "FloatProperty"},
            {"PickupTagConvertInfos", 0x108, "ArrayProperty"},
            {"ConvertIdentifierTag", 0x118, "StructProperty"},
            {"PlayerCommandsAllowed", 0x11C, "UInt32Property"},
        }};
    };

    struct FortAthenaAIRuntimeParameters_AffiliationBase
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_AffiliationBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters";
        struct Offsets
        {
            static constexpr std::uintptr_t bAwarenessPropagationIsBasedOnAlertLevel = 0x34;
            static constexpr std::uintptr_t bFullTeamAwarenessPropagation = 0x34;
            static constexpr std::uintptr_t bTurnHostileOnDamageIfNeutral = 0x34;
            static constexpr std::uintptr_t TurnHostileWhenBlockedTime = 0x38;
            static constexpr std::uintptr_t bPropagateHostilityOnDamaged = 0x3C;
            static constexpr std::uintptr_t bTurnHostileWhenPlayerEntersSameVehicle = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bAwarenessPropagationIsBasedOnAlertLevel", 0x34, "BoolProperty"},
            {"bFullTeamAwarenessPropagation", 0x34, "BoolProperty"},
            {"bTurnHostileOnDamageIfNeutral", 0x34, "BoolProperty"},
            {"TurnHostileWhenBlockedTime", 0x38, "FloatProperty"},
            {"bPropagateHostilityOnDamaged", 0x3C, "BoolProperty"},
            {"bTurnHostileWhenPlayerEntersSameVehicle", 0x3C, "BoolProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParameters_Analytic
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_Analytic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters";
        struct Offsets
        {
            static constexpr std::uintptr_t OnDeathGameplayTags = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnDeathGameplayTags", 0x30, "StructProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParameters_Behavior
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_Behavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtractedLevel = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ExtractedLevel", 0x28, "IntProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParameters_BehaviorTreeControl
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_BehaviorTreeControl";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters";
        struct Offsets
        {
            static constexpr std::uintptr_t BehaviorTreeControls = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BehaviorTreeControls", 0x48, "UInt32Property"},
        }};
    };

    struct FortAthenaAIRuntimeParameters_Collection
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_Collection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters";
        struct Offsets
        {
            static constexpr std::uintptr_t bForceAddToCollectionOnDamage = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bForceAddToCollectionOnDamage", 0x30, "BoolProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParameters_Conversation
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_Conversation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters";
        struct Offsets
        {
            static constexpr std::uintptr_t bCanConverseWhenConverted = 0x30;
            static constexpr std::uintptr_t bEnterBTTaskConversationIfPlayerAround = 0x30;
            static constexpr std::uintptr_t bFocusOnConversationParticipant = 0x30;
            static constexpr std::uintptr_t EnterBTTaskConversationIfPlayerAroundDistSqr = 0x34;
            static constexpr std::uintptr_t WaitTimeWhileNotInConversationState = 0x38;
            static constexpr std::uintptr_t SecondsToDenyActorToWaitForConversation = 0x3C;
            static constexpr std::uintptr_t GreetingEmotes = 0x40;
            static constexpr std::uintptr_t GreetingEmoteMaxDuration = 0x50;
            static constexpr std::uintptr_t CharacterData = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bCanConverseWhenConverted", 0x30, "BoolProperty"},
            {"bEnterBTTaskConversationIfPlayerAround", 0x30, "BoolProperty"},
            {"bFocusOnConversationParticipant", 0x30, "BoolProperty"},
            {"EnterBTTaskConversationIfPlayerAroundDistSqr", 0x34, "FloatProperty"},
            {"WaitTimeWhileNotInConversationState", 0x38, "FloatProperty"},
            {"SecondsToDenyActorToWaitForConversation", 0x3C, "FloatProperty"},
            {"GreetingEmotes", 0x40, "ArrayProperty"},
            {"GreetingEmoteMaxDuration", 0x50, "FloatProperty"},
            {"CharacterData", 0x58, "ObjectProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParameters_DBNOBehavior
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_DBNOBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters";
        struct Offsets
        {
            static constexpr std::uintptr_t bDieWhenAllAlliesAreDBNO = 0x30;
            static constexpr std::uintptr_t bIsAllowedToMoveInDBNO = 0x30;
            static constexpr std::uintptr_t AliveAlliesMaxRangeSqr = 0x34;
            static constexpr std::uintptr_t SecondsBeforeAutomaticReviveFromDBNOWhenOutOfCombat = 0x38;
            static constexpr std::uintptr_t bIsAllowedToGiveUpWhenRespawnEnabled = 0x3C;
            static constexpr std::uintptr_t GiveUpMinTimer = 0x40;
            static constexpr std::uintptr_t GiveUpMaxTimer = 0x44;
            static constexpr std::uintptr_t GiveUpThreatenedAllyMaxDistanceSqr = 0x48;
            static constexpr std::uintptr_t GiveUpThreatenedAllyRandomChance = 0x4C;
            static constexpr std::uintptr_t GiveUpUnawareAllyMaxDistanceSqr = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"bDieWhenAllAlliesAreDBNO", 0x30, "BoolProperty"},
            {"bIsAllowedToMoveInDBNO", 0x30, "BoolProperty"},
            {"AliveAlliesMaxRangeSqr", 0x34, "FloatProperty"},
            {"SecondsBeforeAutomaticReviveFromDBNOWhenOutOfCombat", 0x38, "FloatProperty"},
            {"bIsAllowedToGiveUpWhenRespawnEnabled", 0x3C, "BoolProperty"},
            {"GiveUpMinTimer", 0x40, "FloatProperty"},
            {"GiveUpMaxTimer", 0x44, "FloatProperty"},
            {"GiveUpThreatenedAllyMaxDistanceSqr", 0x48, "FloatProperty"},
            {"GiveUpThreatenedAllyRandomChance", 0x4C, "FloatProperty"},
            {"GiveUpUnawareAllyMaxDistanceSqr", 0x50, "FloatProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParameters_Hearing
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_Hearing";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideHearingRange = 0x30;
            static constexpr std::uintptr_t OverrideHearingRangeConditionTag = 0x38;
            static constexpr std::uintptr_t HearingRadius = 0x58;
            static constexpr std::uintptr_t bRestrictOverrideToUnaware = 0x5C;
            static constexpr std::uintptr_t bListenExtendedFootsteps = 0x5D;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bOverrideHearingRange", 0x30, "BoolProperty"},
            {"OverrideHearingRangeConditionTag", 0x38, "StructProperty"},
            {"HearingRadius", 0x58, "FloatProperty"},
            {"bRestrictOverrideToUnaware", 0x5C, "BoolProperty"},
            {"bListenExtendedFootsteps", 0x5D, "BoolProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParameters_Inventory
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_Inventory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters";
        struct Offsets
        {
            static constexpr std::uintptr_t bAddStartingItemsToInventory = 0x30;
            static constexpr std::uintptr_t bCanEverDropItems = 0x30;
            static constexpr std::uintptr_t bDefaultInventoryIgnoresRestrictions = 0x30;
            static constexpr std::uintptr_t bIgnoreItemSupportRestrictions = 0x30;
            static constexpr std::uintptr_t bInventoryAlwaysIgnoresRestrictions = 0x30;
            static constexpr std::uintptr_t bRemoveAllItemsOnInitialization = 0x30;
            static constexpr std::uintptr_t bShouldDropCurrencyOnDeath = 0x30;
            static constexpr std::uintptr_t bSkipInventoryInitialization = 0x30;
            static constexpr std::uintptr_t CurrencyPayoutRowName = 0x34;
            static constexpr std::uintptr_t bDeathTagsCanBlockLootDrop = 0x38;
            static constexpr std::uintptr_t LootInfo = 0x40;
            static constexpr std::uintptr_t InitialItemList = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"bAddStartingItemsToInventory", 0x30, "BoolProperty"},
            {"bCanEverDropItems", 0x30, "BoolProperty"},
            {"bDefaultInventoryIgnoresRestrictions", 0x30, "BoolProperty"},
            {"bIgnoreItemSupportRestrictions", 0x30, "BoolProperty"},
            {"bInventoryAlwaysIgnoresRestrictions", 0x30, "BoolProperty"},
            {"bRemoveAllItemsOnInitialization", 0x30, "BoolProperty"},
            {"bShouldDropCurrencyOnDeath", 0x30, "BoolProperty"},
            {"bSkipInventoryInitialization", 0x30, "BoolProperty"},
            {"CurrencyPayoutRowName", 0x34, "NameProperty"},
            {"bDeathTagsCanBlockLootDrop", 0x38, "BoolProperty"},
            {"LootInfo", 0x40, "StructProperty"},
            {"InitialItemList", 0x50, "ArrayProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParameters_Leash
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_Leash";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters";
        struct Offsets
        {
            static constexpr std::uintptr_t LeashLocation = 0x30;
            static constexpr std::uintptr_t LeashInnerRadius = 0x48;
            static constexpr std::uintptr_t LeashOuterRadius = 0x4C;
            static constexpr std::uintptr_t LeashTeleportRadius = 0x50;
            static constexpr std::uintptr_t bCheckForReachabilityOnRandomLocationGeneration = 0x54;
            static constexpr std::uintptr_t bUseRadialLeash = 0x55;
            static constexpr std::uintptr_t LeashReturnLocationMode = 0x56;
            static constexpr std::uintptr_t DefaultLeashInfo = 0x58;
            static constexpr std::uintptr_t AlertLevelLeashOverride = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"LeashLocation", 0x30, "StructProperty"},
            {"LeashInnerRadius", 0x48, "FloatProperty"},
            {"LeashOuterRadius", 0x4C, "FloatProperty"},
            {"LeashTeleportRadius", 0x50, "FloatProperty"},
            {"bCheckForReachabilityOnRandomLocationGeneration", 0x54, "BoolProperty"},
            {"bUseRadialLeash", 0x55, "BoolProperty"},
            {"LeashReturnLocationMode", 0x56, "EnumProperty"},
            {"DefaultLeashInfo", 0x58, "StructProperty"},
            {"AlertLevelLeashOverride", 0x60, "MapProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParameters_Marker
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_Marker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters";
        struct Offsets
        {
            static constexpr std::uintptr_t bSupportsMarkerWithFaction = 0x30;
            static constexpr std::uintptr_t MarkerPropagationMaxDistanceSQ = 0x34;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bSupportsMarkerWithFaction", 0x30, "BoolProperty"},
            {"MarkerPropagationMaxDistanceSQ", 0x34, "FloatProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParameters_NPCBehavior
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_NPCBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters";
        struct Offsets
        {
            static constexpr std::uintptr_t bSupportsHolsteredWeapon = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bSupportsHolsteredWeapon", 0x30, "BoolProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParameters_PatrolBehavior
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_PatrolBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters";
        struct Offsets
        {
            static constexpr std::uintptr_t PatrolEmote = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PatrolEmote", 0x30, "SoftObjectProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParameters_ReviveBehavior
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_ReviveBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowReviveAnyPlayer = 0x30;
            static constexpr std::uintptr_t bAllowReviveConverter = 0x30;
            static constexpr std::uintptr_t bAllowReviveConverterSquadmates = 0x30;
            static constexpr std::uintptr_t bAllowReviveSameFactionNPCs = 0x30;
            static constexpr std::uintptr_t bAllowReviveSquadmates = 0x30;
            static constexpr std::uintptr_t bReviveEnabled = 0x30;
            static constexpr std::uintptr_t bUseReviveToken = 0x30;
            static constexpr std::uintptr_t MaxDistanceToRevive = 0x34;
            static constexpr std::uintptr_t MaxDistanceToReviveHumanPlayer = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"bAllowReviveAnyPlayer", 0x30, "BoolProperty"},
            {"bAllowReviveConverter", 0x30, "BoolProperty"},
            {"bAllowReviveConverterSquadmates", 0x30, "BoolProperty"},
            {"bAllowReviveSameFactionNPCs", 0x30, "BoolProperty"},
            {"bAllowReviveSquadmates", 0x30, "BoolProperty"},
            {"bReviveEnabled", 0x30, "BoolProperty"},
            {"bUseReviveToken", 0x30, "BoolProperty"},
            {"MaxDistanceToRevive", 0x34, "FloatProperty"},
            {"MaxDistanceToReviveHumanPlayer", 0x38, "FloatProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParameters_Sight
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_Sight";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideVisibilityRange = 0x30;
            static constexpr std::uintptr_t OverrideVisibilityRangeConditionTag = 0x38;
            static constexpr std::uintptr_t SightRadius = 0x58;
            static constexpr std::uintptr_t LoseSightRadius = 0x5C;
            static constexpr std::uintptr_t bRestrictOverrideToUnaware = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bOverrideVisibilityRange", 0x30, "BoolProperty"},
            {"OverrideVisibilityRangeConditionTag", 0x38, "StructProperty"},
            {"SightRadius", 0x58, "FloatProperty"},
            {"LoseSightRadius", 0x5C, "FloatProperty"},
            {"bRestrictOverrideToUnaware", 0x60, "BoolProperty"},
        }};
    };

    struct FortAthenaAIRuntimeParameters_SmartObjectBase
    {
        static constexpr std::string_view Name = "FortAthenaAIRuntimeParameters_SmartObjectBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIRuntimeParameters";
        struct Offsets
        {
            static constexpr std::uintptr_t bChooseClosestSmartObject = 0x30;
            static constexpr std::uintptr_t bEnabled = 0x30;
            static constexpr std::uintptr_t UnreachableBanDuration = 0x34;
            static constexpr std::uintptr_t SelectedSmartObjectExpirationDelay = 0x38;
            static constexpr std::uintptr_t GlobalSmartObjectCooldownOnFinished = 0x3C;
            static constexpr std::uintptr_t GlobalSmartObjectCooldownOnInterrupted = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bChooseClosestSmartObject", 0x30, "BoolProperty"},
            {"bEnabled", 0x30, "BoolProperty"},
            {"UnreachableBanDuration", 0x34, "FloatProperty"},
            {"SelectedSmartObjectExpirationDelay", 0x38, "FloatProperty"},
            {"GlobalSmartObjectCooldownOnFinished", 0x3C, "FloatProperty"},
            {"GlobalSmartObjectCooldownOnInterrupted", 0x40, "FloatProperty"},
        }};
    };

    struct FortAthenaAISmartObjectActivity
    {
        static constexpr std::string_view Name = "FortAthenaAISmartObjectActivity";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Enabled = 0x28;
            static constexpr std::uintptr_t SmartObjectActivityCondition = 0x50;
            static constexpr std::uintptr_t SmartObjectActivityConfig = 0x98;
            static constexpr std::uintptr_t Preconditions = 0x1F8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Enabled", 0x28, "StructProperty"},
            {"SmartObjectActivityCondition", 0x50, "StructProperty"},
            {"SmartObjectActivityConfig", 0x98, "StructProperty"},
            {"Preconditions", 0x1F8, "StructProperty"},
        }};
    };

    struct FortAthenaAISmartObjectActivityWorldConditionSchema
    {
        static constexpr std::string_view Name = "FortAthenaAISmartObjectActivityWorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct FortAthenaAISpawnerData
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaSpawnerDataBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ClassComponentList = 0x70;
            static constexpr std::uintptr_t InventoryComponent = 0x80;
            static constexpr std::uintptr_t SpawnParamsComponent = 0x88;
            static constexpr std::uintptr_t BehaviorComponent = 0x90;
            static constexpr std::uintptr_t AffiliationComponent = 0x98;
            static constexpr std::uintptr_t LODComponent = 0xA0;
            static constexpr std::uintptr_t DebugComponent = 0xA8;
            static constexpr std::uintptr_t AnalyticComponent = 0xB0;
            static constexpr std::uintptr_t GameplayComponent = 0xB8;
            static constexpr std::uintptr_t ConversationComponent = 0xC0;
            static constexpr std::uintptr_t VoiceComponent = 0xC8;
            static constexpr std::uintptr_t CosmeticComponent = 0xD0;
            static constexpr std::uintptr_t ChanceEncounterComponent = 0xD8;
            static constexpr std::uintptr_t OptimizationComponent = 0xE0;
            static constexpr std::uintptr_t GameplayAbilityComponent = 0xE8;
            static constexpr std::uintptr_t PerceptionComponent = 0xF0;
            static constexpr std::uintptr_t AlertLevelComponent = 0xF8;
            static constexpr std::uintptr_t SmartObjectComponent = 0x100;
            static constexpr std::uintptr_t GroupComponent = 0x108;
            static constexpr std::uintptr_t ScriptComponent = 0x110;
            static constexpr std::uintptr_t TokenComponent = 0x118;
            static constexpr std::uintptr_t AnimationComponent = 0x120;
            static constexpr std::uintptr_t GameModeComponent = 0x128;
            static constexpr std::uintptr_t ModifierComponent = 0x130;
            static constexpr std::uintptr_t SpawnIntervalOverride = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 25> Properties{{
            {"ClassComponentList", 0x70, "ArrayProperty"},
            {"InventoryComponent", 0x80, "ClassProperty"},
            {"SpawnParamsComponent", 0x88, "ClassProperty"},
            {"BehaviorComponent", 0x90, "ClassProperty"},
            {"AffiliationComponent", 0x98, "ClassProperty"},
            {"LODComponent", 0xA0, "ClassProperty"},
            {"DebugComponent", 0xA8, "ClassProperty"},
            {"AnalyticComponent", 0xB0, "ClassProperty"},
            {"GameplayComponent", 0xB8, "ClassProperty"},
            {"ConversationComponent", 0xC0, "ClassProperty"},
            {"VoiceComponent", 0xC8, "ClassProperty"},
            {"CosmeticComponent", 0xD0, "ClassProperty"},
            {"ChanceEncounterComponent", 0xD8, "ClassProperty"},
            {"OptimizationComponent", 0xE0, "ClassProperty"},
            {"GameplayAbilityComponent", 0xE8, "ClassProperty"},
            {"PerceptionComponent", 0xF0, "ClassProperty"},
            {"AlertLevelComponent", 0xF8, "ClassProperty"},
            {"SmartObjectComponent", 0x100, "ClassProperty"},
            {"GroupComponent", 0x108, "ClassProperty"},
            {"ScriptComponent", 0x110, "ClassProperty"},
            {"TokenComponent", 0x118, "ClassProperty"},
            {"AnimationComponent", 0x120, "ClassProperty"},
            {"GameModeComponent", 0x128, "ClassProperty"},
            {"ModifierComponent", 0x130, "ClassProperty"},
            {"SpawnIntervalOverride", 0x138, "StructProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAISpawnerDataComponentList
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponentList";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentsList = 0x70;
            static constexpr std::uintptr_t DescriptorTag = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ComponentsList", 0x70, "ArrayProperty"},
            {"DescriptorTag", 0x80, "StructProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AIAnalytic
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AIAnalytic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_AnalyticBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AIType = 0x60;
            static constexpr std::uintptr_t ShouldSendSpawnEvents = 0x70;
            static constexpr std::uintptr_t ShouldRecordGrabbedPickups = 0x98;
            static constexpr std::uintptr_t ShouldRecordDroppedPickups = 0xC0;
            static constexpr std::uintptr_t ShouldRecordDeathInstigator = 0xE8;
            static constexpr std::uintptr_t ShouldRecordRegularDowns = 0x110;
            static constexpr std::uintptr_t ShouldRecordTetheredDowns = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"AIType", 0x60, "StrProperty"},
            {"ShouldSendSpawnEvents", 0x70, "StructProperty"},
            {"ShouldRecordGrabbedPickups", 0x98, "StructProperty"},
            {"ShouldRecordDroppedPickups", 0xC0, "StructProperty"},
            {"ShouldRecordDeathInstigator", 0xE8, "StructProperty"},
            {"ShouldRecordRegularDowns", 0x110, "StructProperty"},
            {"ShouldRecordTetheredDowns", 0x138, "StructProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AIBotAffiliation
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AIBotAffiliation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_AffiliationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bForceAddToCollectionOnDamage = 0x1A8;
            static constexpr std::uintptr_t AssignTeamAndSquad = 0x1B0;
            static constexpr std::uintptr_t SupportsMarkerWithFaction = 0x1D8;
            static constexpr std::uintptr_t MarkerPropagationMaxDistance = 0x200;
            static constexpr std::uintptr_t DisguiseProbability = 0x228;
            static constexpr std::uintptr_t RevealDisguiseOnDamage = 0x250;
            static constexpr std::uintptr_t RevealOnDamageExcludeAIPawnDamage = 0x278;
            static constexpr std::uintptr_t RevealDisguiseOnPlayerProximity = 0x2A0;
            static constexpr std::uintptr_t RevealPlayerProximityDistance = 0x2C8;
            static constexpr std::uintptr_t RevealPlayerProximityMinDuration = 0x2F0;
            static constexpr std::uintptr_t RevealPlayerProximityMaxDuration = 0x318;
            static constexpr std::uintptr_t NameSettingsAfterReveal = 0x340;
            static constexpr std::uintptr_t DisguisedFactionsBeforeReveal = 0x348;
            static constexpr std::uintptr_t DisguisedFactionsAfterReveal = 0x368;
            static constexpr std::uintptr_t DisguiseGameplayEffectBeforeReveal = 0x388;
            static constexpr std::uintptr_t DisguiseGameplayEffectAfterReveal = 0x398;
            static constexpr std::uintptr_t DisguiseInventory = 0x3A8;
            static constexpr std::uintptr_t DisguiseLootInfo = 0x3B8;
            static constexpr std::uintptr_t DisguiseConversationComponent = 0x3C8;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"bForceAddToCollectionOnDamage", 0x1A8, "BoolProperty"},
            {"AssignTeamAndSquad", 0x1B0, "StructProperty"},
            {"SupportsMarkerWithFaction", 0x1D8, "StructProperty"},
            {"MarkerPropagationMaxDistance", 0x200, "StructProperty"},
            {"DisguiseProbability", 0x228, "StructProperty"},
            {"RevealDisguiseOnDamage", 0x250, "StructProperty"},
            {"RevealOnDamageExcludeAIPawnDamage", 0x278, "StructProperty"},
            {"RevealDisguiseOnPlayerProximity", 0x2A0, "StructProperty"},
            {"RevealPlayerProximityDistance", 0x2C8, "StructProperty"},
            {"RevealPlayerProximityMinDuration", 0x2F0, "StructProperty"},
            {"RevealPlayerProximityMaxDuration", 0x318, "StructProperty"},
            {"NameSettingsAfterReveal", 0x340, "ObjectProperty"},
            {"DisguisedFactionsBeforeReveal", 0x348, "StructProperty"},
            {"DisguisedFactionsAfterReveal", 0x368, "StructProperty"},
            {"DisguiseGameplayEffectBeforeReveal", 0x388, "ArrayProperty"},
            {"DisguiseGameplayEffectAfterReveal", 0x398, "ArrayProperty"},
            {"DisguiseInventory", 0x3A8, "ArrayProperty"},
            {"DisguiseLootInfo", 0x3B8, "StructProperty"},
            {"DisguiseConversationComponent", 0x3C8, "ClassProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AIBotAnalytic
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AIBotAnalytic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_AnalyticBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseDescriptorTagSuffix = 0x60;
            static constexpr std::uintptr_t BotIDSuffix = 0x68;
            static constexpr std::uintptr_t IdleDetectionBucketsCutoffs = 0x78;
            static constexpr std::uintptr_t DamageDistanceBuckets = 0x88;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bUseDescriptorTagSuffix", 0x60, "BoolProperty"},
            {"BotIDSuffix", 0x68, "StrProperty"},
            {"IdleDetectionBucketsCutoffs", 0x78, "ArrayProperty"},
            {"DamageDistanceBuckets", 0x88, "ArrayProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AIBotBehavior
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AIBotBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_Behavior";
        struct Offsets
        {
            static constexpr std::uintptr_t BehaviorTreeControls = 0x38;
            static constexpr std::uintptr_t bCanUseFallbackPatrolAround = 0x3C;
            static constexpr std::uintptr_t RevivingEnabled = 0x40;
            static constexpr std::uintptr_t bAllowReviveSameFactionNPCs = 0x68;
            static constexpr std::uintptr_t bAllowReviveSquadmates = 0x68;
            static constexpr std::uintptr_t AllowReviveAnyPlayer = 0x70;
            static constexpr std::uintptr_t AllowReviveConverter = 0x98;
            static constexpr std::uintptr_t AllowReviveConverterSquadmates = 0xC0;
            static constexpr std::uintptr_t bUseReviveToken = 0xE8;
            static constexpr std::uintptr_t MaxDistanceToRevive = 0xF0;
            static constexpr std::uintptr_t MaxDistanceToReviveHumanPlayer = 0x118;
            static constexpr std::uintptr_t DieWhenAllAlliesAreDBNO = 0x140;
            static constexpr std::uintptr_t bIsAllowedToMoveInDBNO = 0x168;
            static constexpr std::uintptr_t AliveAlliesMaxRange = 0x170;
            static constexpr std::uintptr_t SecondsBeforeAutomaticReviveFromDBNOWhenOutOfCombat = 0x198;
            static constexpr std::uintptr_t IsAllowedToGiveUpWhenRespawnEnabled = 0x1C0;
            static constexpr std::uintptr_t GiveUpMinTimer = 0x1E8;
            static constexpr std::uintptr_t GiveUpMaxTimer = 0x210;
            static constexpr std::uintptr_t GiveUpThreatenedAllyMaxDistance = 0x238;
            static constexpr std::uintptr_t GiveUpThreatenedAllyRandomChance = 0x260;
            static constexpr std::uintptr_t GiveUpUnawareAllyMaxDistance = 0x288;
            static constexpr std::uintptr_t SupportsHolsteredWeapon = 0x2B0;
            static constexpr std::uintptr_t SurfaceTypeCheckEnabled = 0x2D8;
            static constexpr std::uintptr_t bShouldResetAggressivePlayStyleOnUnaware = 0x300;
            static constexpr std::uintptr_t TimeToKeepTrackOfDamagingActorsForAggressivePlayStyle = 0x328;
            static constexpr std::uintptr_t TimeToIgnoreDamagingActorsWhenBeingControlled = 0x350;
            static constexpr std::uintptr_t PauseBehaviorOnSpawnDuration = 0x378;
            static constexpr std::uintptr_t bShouldBeInvulnerableDuringPause = 0x3A0;
            static constexpr std::uintptr_t EscalateBehaviorSettings = 0x3C8;
            static constexpr std::uintptr_t PatrolBehaviorSettings = 0x468;
            static constexpr std::uintptr_t AircraftPhaseBehaviorSettings = 0x4B0;
        };

        inline static constexpr std::array<PropertyInfo, 31> Properties{{
            {"BehaviorTreeControls", 0x38, "UInt32Property"},
            {"bCanUseFallbackPatrolAround", 0x3C, "BoolProperty"},
            {"RevivingEnabled", 0x40, "StructProperty"},
            {"bAllowReviveSameFactionNPCs", 0x68, "BoolProperty"},
            {"bAllowReviveSquadmates", 0x68, "BoolProperty"},
            {"AllowReviveAnyPlayer", 0x70, "StructProperty"},
            {"AllowReviveConverter", 0x98, "StructProperty"},
            {"AllowReviveConverterSquadmates", 0xC0, "StructProperty"},
            {"bUseReviveToken", 0xE8, "BoolProperty"},
            {"MaxDistanceToRevive", 0xF0, "StructProperty"},
            {"MaxDistanceToReviveHumanPlayer", 0x118, "StructProperty"},
            {"DieWhenAllAlliesAreDBNO", 0x140, "StructProperty"},
            {"bIsAllowedToMoveInDBNO", 0x168, "BoolProperty"},
            {"AliveAlliesMaxRange", 0x170, "StructProperty"},
            {"SecondsBeforeAutomaticReviveFromDBNOWhenOutOfCombat", 0x198, "StructProperty"},
            {"IsAllowedToGiveUpWhenRespawnEnabled", 0x1C0, "StructProperty"},
            {"GiveUpMinTimer", 0x1E8, "StructProperty"},
            {"GiveUpMaxTimer", 0x210, "StructProperty"},
            {"GiveUpThreatenedAllyMaxDistance", 0x238, "StructProperty"},
            {"GiveUpThreatenedAllyRandomChance", 0x260, "StructProperty"},
            {"GiveUpUnawareAllyMaxDistance", 0x288, "StructProperty"},
            {"SupportsHolsteredWeapon", 0x2B0, "StructProperty"},
            {"SurfaceTypeCheckEnabled", 0x2D8, "StructProperty"},
            {"bShouldResetAggressivePlayStyleOnUnaware", 0x300, "StructProperty"},
            {"TimeToKeepTrackOfDamagingActorsForAggressivePlayStyle", 0x328, "StructProperty"},
            {"TimeToIgnoreDamagingActorsWhenBeingControlled", 0x350, "StructProperty"},
            {"PauseBehaviorOnSpawnDuration", 0x378, "StructProperty"},
            {"bShouldBeInvulnerableDuringPause", 0x3A0, "StructProperty"},
            {"EscalateBehaviorSettings", 0x3C8, "StructProperty"},
            {"PatrolBehaviorSettings", 0x468, "StructProperty"},
            {"AircraftPhaseBehaviorSettings", 0x4B0, "StructProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AIBotChanceEncounter
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AIBotChanceEncounter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_ChanceEncounterBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PassiveHealerEnable = 0x30;
            static constexpr std::uintptr_t PassiveHealerComponentClass = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PassiveHealerEnable", 0x30, "StructProperty"},
            {"PassiveHealerComponentClass", 0x58, "ClassProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AIBotConstruction
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AIBotConstruction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_ConstructionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ConstructionBuildingInfoList = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ConstructionBuildingInfoList", 0x30, "StructProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AIBotConversation
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AIBotConversation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_ConversationBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ConversationComponentClass = 0x30;
            static constexpr std::uintptr_t ConversationEntryTag = 0x38;
            static constexpr std::uintptr_t InteractorParticipantTag = 0x3C;
            static constexpr std::uintptr_t SelfParticipantTag = 0x40;
            static constexpr std::uintptr_t EnterBTTaskConversationIfPlayerAround = 0x48;
            static constexpr std::uintptr_t EnterBTTaskConversationIfPlayerAroundDist = 0x70;
            static constexpr std::uintptr_t WaitTimeWhileNotInConversationState = 0x98;
            static constexpr std::uintptr_t SecondsToDenyActorToWaitForConversation = 0xC0;
            static constexpr std::uintptr_t GreetingEmotes = 0xE8;
            static constexpr std::uintptr_t GreetingEmoteMaxDuration = 0xF8;
            static constexpr std::uintptr_t CharacterData = 0x120;
            static constexpr std::uintptr_t ConversationInteractionCollisionProfile = 0x128;
            static constexpr std::uintptr_t ConversationInteractionCustomCollisions = 0x12C;
            static constexpr std::uintptr_t ConversationInteractionBoxExtent = 0x170;
            static constexpr std::uintptr_t ConversationInteractionBoxOffset = 0x188;
            static constexpr std::uintptr_t SpawnOutOfTheLoop = 0x1A0;
            static constexpr std::uintptr_t RespawnOutsideTheLoop = 0x1C8;
            static constexpr std::uintptr_t RespawnAtOriginalSpawnLocation = 0x1F0;
            static constexpr std::uintptr_t RemoveInvulnerabilityOutsideSafeZone = 0x218;
            static constexpr std::uintptr_t NPCLoopStateComponentClass = 0x240;
            static constexpr std::uintptr_t UseSpecialActorComponent = 0x248;
            static constexpr std::uintptr_t SpecialActorComponentClass = 0x270;
            static constexpr std::uintptr_t BlockSpecialActorUntilOutsideTheLoop = 0x278;
            static constexpr std::uintptr_t MakeNPCFriendlyDuringConversation = 0x2A0;
            static constexpr std::uintptr_t DelayBeforeResettingAffiliationAfterConversationEnds = 0x2C8;
            static constexpr std::uintptr_t bCanConverseWhenConverted = 0x2F0;
            static constexpr std::uintptr_t bFocusOnConversationParticipant = 0x2F1;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"ConversationComponentClass", 0x30, "ClassProperty"},
            {"ConversationEntryTag", 0x38, "StructProperty"},
            {"InteractorParticipantTag", 0x3C, "StructProperty"},
            {"SelfParticipantTag", 0x40, "StructProperty"},
            {"EnterBTTaskConversationIfPlayerAround", 0x48, "StructProperty"},
            {"EnterBTTaskConversationIfPlayerAroundDist", 0x70, "StructProperty"},
            {"WaitTimeWhileNotInConversationState", 0x98, "StructProperty"},
            {"SecondsToDenyActorToWaitForConversation", 0xC0, "StructProperty"},
            {"GreetingEmotes", 0xE8, "ArrayProperty"},
            {"GreetingEmoteMaxDuration", 0xF8, "StructProperty"},
            {"CharacterData", 0x120, "ObjectProperty"},
            {"ConversationInteractionCollisionProfile", 0x128, "NameProperty"},
            {"ConversationInteractionCustomCollisions", 0x12C, "StructProperty"},
            {"ConversationInteractionBoxExtent", 0x170, "StructProperty"},
            {"ConversationInteractionBoxOffset", 0x188, "StructProperty"},
            {"SpawnOutOfTheLoop", 0x1A0, "StructProperty"},
            {"RespawnOutsideTheLoop", 0x1C8, "StructProperty"},
            {"RespawnAtOriginalSpawnLocation", 0x1F0, "StructProperty"},
            {"RemoveInvulnerabilityOutsideSafeZone", 0x218, "StructProperty"},
            {"NPCLoopStateComponentClass", 0x240, "ClassProperty"},
            {"UseSpecialActorComponent", 0x248, "StructProperty"},
            {"SpecialActorComponentClass", 0x270, "ClassProperty"},
            {"BlockSpecialActorUntilOutsideTheLoop", 0x278, "StructProperty"},
            {"MakeNPCFriendlyDuringConversation", 0x2A0, "StructProperty"},
            {"DelayBeforeResettingAffiliationAfterConversationEnds", 0x2C8, "StructProperty"},
            {"bCanConverseWhenConverted", 0x2F0, "BoolProperty"},
            {"bFocusOnConversationParticipant", 0x2F1, "BoolProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AIBotCosmeticBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AIBotCosmeticBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_CosmeticBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticOverrideList = 0x30;
            static constexpr std::uintptr_t CustomizationDefinition = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CosmeticOverrideList", 0x30, "ArrayProperty"},
            {"CustomizationDefinition", 0x40, "ObjectProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AIBotDebug
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AIBotDebug";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_DebugBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DebugMinimapData = 0x30;
            static constexpr std::uintptr_t EditorConsoleCommands = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DebugMinimapData", 0x30, "StructProperty"},
            {"EditorConsoleCommands", 0x1C0, "ArrayProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AIBotGameplay
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AIBotGameplay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_GameplayBase";
        struct Offsets
        {
            static constexpr std::uintptr_t NameSettings = 0x360;
            static constexpr std::uintptr_t bRequiresUniqueNetId = 0x368;
            static constexpr std::uintptr_t bForceAthenaGameParticipantInPlayspace = 0x370;
            static constexpr std::uintptr_t HACK_AssignNameDuringRegisterParameters = 0x398;
            static constexpr std::uintptr_t CanRespawnOnDeath = 0x3C0;
            static constexpr std::uintptr_t RespawnOnDeathLocation = 0x3E8;
            static constexpr std::uintptr_t RespawnTime = 0x410;
            static constexpr std::uintptr_t CacheSpawnerDataComponentList = 0x438;
            static constexpr std::uintptr_t PawnCullDistanceAfterPlayerAggroMode = 0x460;
            static constexpr std::uintptr_t ReachLocationValidationMode = 0x464;
            static constexpr std::uintptr_t UseRadialLeash = 0x468;
            static constexpr std::uintptr_t LeashLocation = 0x490;
            static constexpr std::uintptr_t LeashInnerRadius = 0x4A8;
            static constexpr std::uintptr_t LeashOuterRadius = 0x4D0;
            static constexpr std::uintptr_t LeashTeleportRadius = 0x4F8;
            static constexpr std::uintptr_t bCheckForReachabilityOnRandomLocationGeneration = 0x520;
            static constexpr std::uintptr_t LeashReturnLocationMode = 0x521;
            static constexpr std::uintptr_t AlertLevelLeashOverride = 0x528;
            static constexpr std::uintptr_t PropagateLeashToGroupMembers = 0x538;
            static constexpr std::uintptr_t EnableSelfTrackingOfIsInsideLeash = 0x560;
            static constexpr std::uintptr_t PatrolPathTagsConversionTable = 0x588;
            static constexpr std::uintptr_t bCanInvestigateWithMeleeWeapon = 0x598;
            static constexpr std::uintptr_t bApplyMutatorsHealthAndShieldModifiers = 0x599;
            static constexpr std::uintptr_t bSupportsTethering = 0x59A;
            static constexpr std::uintptr_t bEnableRenderCustomDepth = 0x59B;
            static constexpr std::uintptr_t bShowMarkerIcon = 0x59C;
            static constexpr std::uintptr_t bDisableGiveWeaponCheat = 0x59D;
            static constexpr std::uintptr_t bDisableGiveMaterialsCheat = 0x59E;
            static constexpr std::uintptr_t InnerLeashRadius = 0x5A0;
            static constexpr std::uintptr_t OuterLeashRadius = 0x5C8;
            static constexpr std::uintptr_t ShouldLeashFollowConverter = 0x5F0;
            static constexpr std::uintptr_t LeashFollowActorUpdateRate = 0x618;
            static constexpr std::uintptr_t LeashFollowActorLocalOffset = 0x640;
            static constexpr std::uintptr_t SkillLevelOverride = 0x658;
            static constexpr std::uintptr_t ShouldScanAroundWhenWaiting = 0x680;
            static constexpr std::uintptr_t ShouldTeleportTowardsConverter = 0x6A8;
            static constexpr std::uintptr_t ShouldTeleportTestPathValidity = 0x6D0;
            static constexpr std::uintptr_t FollowingBehaviorEnabled = 0x6F8;
            static constexpr std::uintptr_t FollowingBehaviorMovementStyleEnabled = 0x720;
            static constexpr std::uintptr_t FollowerCanUseDBNO = 0x748;
            static constexpr std::uintptr_t FollowingBehaviorRadius = 0x770;
            static constexpr std::uintptr_t FollowingBehaviorInnerRadius = 0x798;
            static constexpr std::uintptr_t FollowingBehaviorWalkRadius = 0x7C0;
            static constexpr std::uintptr_t FollowingBehaviorRunRadius = 0x7E8;
            static constexpr std::uintptr_t FollowingBehaviorUrgenceRadius = 0x810;
            static constexpr std::uintptr_t FollowingBehaviorBlockedSightAngle = 0x838;
            static constexpr std::uintptr_t FollowingBehaviorBlockedSightExitAngle = 0x860;
            static constexpr std::uintptr_t FollowingBehaviorBlockedSightExitDistMin = 0x888;
            static constexpr std::uintptr_t MimicBehaviorEnabled = 0x8B0;
            static constexpr std::uintptr_t MimicBehaviorRadius = 0x8D8;
            static constexpr std::uintptr_t CanDanceWithConverter = 0x900;
            static constexpr std::uintptr_t TeleportTowardsConverterDistance = 0x928;
            static constexpr std::uintptr_t TeleportTowardsConverterInCombatDistance = 0x950;
            static constexpr std::uintptr_t TeleportTowardsConverterHeightThreshold = 0x978;
            static constexpr std::uintptr_t TeleportTowardsConverterWhenNotVisibleDistance = 0x9A0;
            static constexpr std::uintptr_t TeleportTowardsConverterInCombatWhenNotVisibleDistance = 0x9C8;
            static constexpr std::uintptr_t MinDistanceFromConverterWhenTeleported = 0x9F0;
            static constexpr std::uintptr_t MaxDistanceFromConverterWhenTeleported = 0xA18;
            static constexpr std::uintptr_t ConvertedSkillSetClasses = 0xA40;
            static constexpr std::uintptr_t PingCommandComponentClass = 0xA50;
            static constexpr std::uintptr_t TargetPawnConverterDamaged = 0xA58;
            static constexpr std::uintptr_t CanHolsterWeaponWhileConverted = 0xA80;
            static constexpr std::uintptr_t CanTurnAgainstConverter = 0xAA8;
            static constexpr std::uintptr_t TurnAgainstConverterUsesConverterAsLeash = 0xAD0;
            static constexpr std::uintptr_t TurnAgainstConverterInnerLeashRadius = 0xAF8;
            static constexpr std::uintptr_t TurnAgainstConverterOuterLeashRadius = 0xB20;
            static constexpr std::uintptr_t TurnAgainstConverterSetToFactions = 0xB48;
        };

        inline static constexpr std::array<PropertyInfo, 67> Properties{{
            {"NameSettings", 0x360, "ObjectProperty"},
            {"bRequiresUniqueNetId", 0x368, "BoolProperty"},
            {"bForceAthenaGameParticipantInPlayspace", 0x370, "StructProperty"},
            {"HACK_AssignNameDuringRegisterParameters", 0x398, "StructProperty"},
            {"CanRespawnOnDeath", 0x3C0, "StructProperty"},
            {"RespawnOnDeathLocation", 0x3E8, "StructProperty"},
            {"RespawnTime", 0x410, "StructProperty"},
            {"CacheSpawnerDataComponentList", 0x438, "StructProperty"},
            {"PawnCullDistanceAfterPlayerAggroMode", 0x460, "FloatProperty"},
            {"ReachLocationValidationMode", 0x464, "EnumProperty"},
            {"UseRadialLeash", 0x468, "StructProperty"},
            {"LeashLocation", 0x490, "StructProperty"},
            {"LeashInnerRadius", 0x4A8, "StructProperty"},
            {"LeashOuterRadius", 0x4D0, "StructProperty"},
            {"LeashTeleportRadius", 0x4F8, "StructProperty"},
            {"bCheckForReachabilityOnRandomLocationGeneration", 0x520, "BoolProperty"},
            {"LeashReturnLocationMode", 0x521, "EnumProperty"},
            {"AlertLevelLeashOverride", 0x528, "MapProperty"},
            {"PropagateLeashToGroupMembers", 0x538, "StructProperty"},
            {"EnableSelfTrackingOfIsInsideLeash", 0x560, "StructProperty"},
            {"PatrolPathTagsConversionTable", 0x588, "StructProperty"},
            {"bCanInvestigateWithMeleeWeapon", 0x598, "BoolProperty"},
            {"bApplyMutatorsHealthAndShieldModifiers", 0x599, "BoolProperty"},
            {"bSupportsTethering", 0x59A, "BoolProperty"},
            {"bEnableRenderCustomDepth", 0x59B, "BoolProperty"},
            {"bShowMarkerIcon", 0x59C, "BoolProperty"},
            {"bDisableGiveWeaponCheat", 0x59D, "BoolProperty"},
            {"bDisableGiveMaterialsCheat", 0x59E, "BoolProperty"},
            {"InnerLeashRadius", 0x5A0, "StructProperty"},
            {"OuterLeashRadius", 0x5C8, "StructProperty"},
            {"ShouldLeashFollowConverter", 0x5F0, "StructProperty"},
            {"LeashFollowActorUpdateRate", 0x618, "StructProperty"},
            {"LeashFollowActorLocalOffset", 0x640, "StructProperty"},
            {"SkillLevelOverride", 0x658, "StructProperty"},
            {"ShouldScanAroundWhenWaiting", 0x680, "StructProperty"},
            {"ShouldTeleportTowardsConverter", 0x6A8, "StructProperty"},
            {"ShouldTeleportTestPathValidity", 0x6D0, "StructProperty"},
            {"FollowingBehaviorEnabled", 0x6F8, "StructProperty"},
            {"FollowingBehaviorMovementStyleEnabled", 0x720, "StructProperty"},
            {"FollowerCanUseDBNO", 0x748, "StructProperty"},
            {"FollowingBehaviorRadius", 0x770, "StructProperty"},
            {"FollowingBehaviorInnerRadius", 0x798, "StructProperty"},
            {"FollowingBehaviorWalkRadius", 0x7C0, "StructProperty"},
            {"FollowingBehaviorRunRadius", 0x7E8, "StructProperty"},
            {"FollowingBehaviorUrgenceRadius", 0x810, "StructProperty"},
            {"FollowingBehaviorBlockedSightAngle", 0x838, "StructProperty"},
            {"FollowingBehaviorBlockedSightExitAngle", 0x860, "StructProperty"},
            {"FollowingBehaviorBlockedSightExitDistMin", 0x888, "StructProperty"},
            {"MimicBehaviorEnabled", 0x8B0, "StructProperty"},
            {"MimicBehaviorRadius", 0x8D8, "StructProperty"},
            {"CanDanceWithConverter", 0x900, "StructProperty"},
            {"TeleportTowardsConverterDistance", 0x928, "StructProperty"},
            {"TeleportTowardsConverterInCombatDistance", 0x950, "StructProperty"},
            {"TeleportTowardsConverterHeightThreshold", 0x978, "StructProperty"},
            {"TeleportTowardsConverterWhenNotVisibleDistance", 0x9A0, "StructProperty"},
            {"TeleportTowardsConverterInCombatWhenNotVisibleDistance", 0x9C8, "StructProperty"},
            {"MinDistanceFromConverterWhenTeleported", 0x9F0, "StructProperty"},
            {"MaxDistanceFromConverterWhenTeleported", 0xA18, "StructProperty"},
            {"ConvertedSkillSetClasses", 0xA40, "ArrayProperty"},
            {"PingCommandComponentClass", 0xA50, "ClassProperty"},
            {"TargetPawnConverterDamaged", 0xA58, "StructProperty"},
            {"CanHolsterWeaponWhileConverted", 0xA80, "StructProperty"},
            {"CanTurnAgainstConverter", 0xAA8, "StructProperty"},
            {"TurnAgainstConverterUsesConverterAsLeash", 0xAD0, "StructProperty"},
            {"TurnAgainstConverterInnerLeashRadius", 0xAF8, "StructProperty"},
            {"TurnAgainstConverterOuterLeashRadius", 0xB20, "StructProperty"},
            {"TurnAgainstConverterSetToFactions", 0xB48, "StructProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_GameplayAbilityBase";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialGameplayEffect = 0x30;
            static constexpr std::uintptr_t InitialGameplayAbilitiesSet = 0x40;
            static constexpr std::uintptr_t LooseTagsToApplyToPawn = 0x50;
            static constexpr std::uintptr_t ReplicatedTagsToApplyToPawn = 0x70;
            static constexpr std::uintptr_t bApplySpawnerDescriptorTagToPawnAsLooseTag = 0x90;
            static constexpr std::uintptr_t bApplySpawnerDescriptorTagToPawnAsReplicatedTag = 0x91;
            static constexpr std::uintptr_t AbilityToPlayOnSpawnTags = 0x98;
            static constexpr std::uintptr_t FNameTags = 0xB8;
            static constexpr std::uintptr_t GameplayTagsToApplyByPercentage = 0xC8;
            static constexpr std::uintptr_t PlayerAbilitySetBR = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"InitialGameplayEffect", 0x30, "ArrayProperty"},
            {"InitialGameplayAbilitiesSet", 0x40, "ArrayProperty"},
            {"LooseTagsToApplyToPawn", 0x50, "StructProperty"},
            {"ReplicatedTagsToApplyToPawn", 0x70, "StructProperty"},
            {"bApplySpawnerDescriptorTagToPawnAsLooseTag", 0x90, "BoolProperty"},
            {"bApplySpawnerDescriptorTagToPawnAsReplicatedTag", 0x91, "BoolProperty"},
            {"AbilityToPlayOnSpawnTags", 0x98, "StructProperty"},
            {"FNameTags", 0xB8, "ArrayProperty"},
            {"GameplayTagsToApplyByPercentage", 0xC8, "ArrayProperty"},
            {"PlayerAbilitySetBR", 0xD8, "SoftObjectProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AIBotInventory
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AIBotInventory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_InventoryBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bItemsToGiveInEditorWhenCustomizationIsEnabled = 0x158;
            static constexpr std::uintptr_t EditorOnlyItems = 0x160;
            static constexpr std::uintptr_t bGrantPickAxe = 0x170;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bItemsToGiveInEditorWhenCustomizationIsEnabled", 0x158, "BoolProperty"},
            {"EditorOnlyItems", 0x160, "ArrayProperty"},
            {"bGrantPickAxe", 0x170, "BoolProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AIBotPerception
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AIBotPerception";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_PerceptionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideVisibilityRange = 0x30;
            static constexpr std::uintptr_t OverrideVisibilityRangeConditionTag = 0x38;
            static constexpr std::uintptr_t SightRadius = 0x58;
            static constexpr std::uintptr_t LoseSightRadius = 0x5C;
            static constexpr std::uintptr_t bRestrictSightOverrideToUnaware = 0x60;
            static constexpr std::uintptr_t bOverrideHearingRange = 0x61;
            static constexpr std::uintptr_t OverrideHearingRangeConditionTag = 0x68;
            static constexpr std::uintptr_t HearingRadius = 0x88;
            static constexpr std::uintptr_t bRestrictHearingOverrideToUnaware = 0x8C;
            static constexpr std::uintptr_t bListenExtendedFootsteps = 0x8D;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"bOverrideVisibilityRange", 0x30, "BoolProperty"},
            {"OverrideVisibilityRangeConditionTag", 0x38, "StructProperty"},
            {"SightRadius", 0x58, "FloatProperty"},
            {"LoseSightRadius", 0x5C, "FloatProperty"},
            {"bRestrictSightOverrideToUnaware", 0x60, "BoolProperty"},
            {"bOverrideHearingRange", 0x61, "BoolProperty"},
            {"OverrideHearingRangeConditionTag", 0x68, "StructProperty"},
            {"HearingRadius", 0x88, "FloatProperty"},
            {"bRestrictHearingOverrideToUnaware", 0x8C, "BoolProperty"},
            {"bListenExtendedFootsteps", 0x8D, "BoolProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AIBotSkillset
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AIBotSkillset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_SkillsetBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AimingSkillSet = 0x30;
            static constexpr std::uintptr_t AttackingSkillSet = 0x38;
            static constexpr std::uintptr_t BuildingSkillSet = 0x40;
            static constexpr std::uintptr_t DBNOSkillSet = 0x48;
            static constexpr std::uintptr_t EmoteSkillSet = 0x50;
            static constexpr std::uintptr_t EvasiveManeuversSkillSet = 0x58;
            static constexpr std::uintptr_t HarvestSkillSet = 0x60;
            static constexpr std::uintptr_t HealingSkillSet = 0x68;
            static constexpr std::uintptr_t InventorySkillSet = 0x70;
            static constexpr std::uintptr_t LootingSkillSet = 0x78;
            static constexpr std::uintptr_t MovementSkillSet = 0x80;
            static constexpr std::uintptr_t PerceptionSkillSet = 0x88;
            static constexpr std::uintptr_t PlayStyleSkillSet = 0x90;
            static constexpr std::uintptr_t PropagateAwarenessSkillSet = 0x98;
            static constexpr std::uintptr_t RangeAttackSkillSet = 0xA0;
            static constexpr std::uintptr_t ReviveSkillSet = 0xA8;
            static constexpr std::uintptr_t UnstuckSkillSet = 0xB0;
            static constexpr std::uintptr_t VehicleSkillSet = 0xB8;
            static constexpr std::uintptr_t ReactToVerbSkillSet = 0xC0;
            static constexpr std::uintptr_t bUseMatchMMRToOverrideSkillLevel = 0xC8;
            static constexpr std::uintptr_t OverrideSkillLevelMMRTable = 0xD0;
            static constexpr std::uintptr_t SkillLevelComponentClass = 0xF0;
            static constexpr std::uintptr_t Skill = 0xF8;
            static constexpr std::uintptr_t SkillOverride = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"AimingSkillSet", 0x30, "ClassProperty"},
            {"AttackingSkillSet", 0x38, "ClassProperty"},
            {"BuildingSkillSet", 0x40, "ClassProperty"},
            {"DBNOSkillSet", 0x48, "ClassProperty"},
            {"EmoteSkillSet", 0x50, "ClassProperty"},
            {"EvasiveManeuversSkillSet", 0x58, "ClassProperty"},
            {"HarvestSkillSet", 0x60, "ClassProperty"},
            {"HealingSkillSet", 0x68, "ClassProperty"},
            {"InventorySkillSet", 0x70, "ClassProperty"},
            {"LootingSkillSet", 0x78, "ClassProperty"},
            {"MovementSkillSet", 0x80, "ClassProperty"},
            {"PerceptionSkillSet", 0x88, "ClassProperty"},
            {"PlayStyleSkillSet", 0x90, "ClassProperty"},
            {"PropagateAwarenessSkillSet", 0x98, "ClassProperty"},
            {"RangeAttackSkillSet", 0xA0, "ClassProperty"},
            {"ReviveSkillSet", 0xA8, "ClassProperty"},
            {"UnstuckSkillSet", 0xB0, "ClassProperty"},
            {"VehicleSkillSet", 0xB8, "ClassProperty"},
            {"ReactToVerbSkillSet", 0xC0, "ClassProperty"},
            {"bUseMatchMMRToOverrideSkillLevel", 0xC8, "BoolProperty"},
            {"OverrideSkillLevelMMRTable", 0xD0, "SoftObjectProperty"},
            {"SkillLevelComponentClass", 0xF0, "ClassProperty"},
            {"Skill", 0xF8, "StructProperty"},
            {"SkillOverride", 0x120, "FloatProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AIGameplay
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AIGameplay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_GameplayBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MoveSoundStimulusBroadcastInterval = 0x360;
            static constexpr std::uintptr_t MaxMoveSoundRange = 0x364;
            static constexpr std::uintptr_t bGenerateSoundInAllMovementModes = 0x368;
            static constexpr std::uintptr_t DefaultLifespanAfterDeath = 0x370;
            static constexpr std::uintptr_t OverrideName = 0x398;
            static constexpr std::uintptr_t IsAlwaysGameplayRelevantOverride = 0x3A8;
            static constexpr std::uintptr_t PickupTagConvertInfos = 0x3B0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MoveSoundStimulusBroadcastInterval", 0x360, "FloatProperty"},
            {"MaxMoveSoundRange", 0x364, "FloatProperty"},
            {"bGenerateSoundInAllMovementModes", 0x368, "BoolProperty"},
            {"DefaultLifespanAfterDeath", 0x370, "StructProperty"},
            {"OverrideName", 0x398, "TextProperty"},
            {"IsAlwaysGameplayRelevantOverride", 0x3A8, "EnumProperty"},
            {"PickupTagConvertInfos", 0x3B0, "ArrayProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AIPawnCosmeticBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AIPawnCosmeticBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_CosmeticBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_AIPawnCosmeticBase";
        struct Offsets
        {
            static constexpr std::uintptr_t FallbackTag = 0x30;
            static constexpr std::uintptr_t CustomizationDefinition = 0x38;
            static constexpr std::uintptr_t bCanUnloadCustomization = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"FallbackTag", 0x30, "StructProperty"},
            {"CustomizationDefinition", 0x38, "ObjectProperty"},
            {"bCanUnloadCustomization", 0x40, "BoolProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AIPawnOptim
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AIPawnOptim";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_OptimBase";
        struct Offsets
        {
            static constexpr std::uintptr_t bRegisterToAIDropper = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bRegisterToAIDropper", 0x30, "BoolProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AffiliationBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AffiliationBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t FactionTags = 0x30;
            static constexpr std::uintptr_t TurnHostileOnDamageIfNeutral = 0x50;
            static constexpr std::uintptr_t TurnHostileWhenBlockedTime = 0x78;
            static constexpr std::uintptr_t TurnHostileWhenPlayerEntersSameVehicle = 0xA0;
            static constexpr std::uintptr_t PropagateHostilityOnDamaged = 0xC8;
            static constexpr std::uintptr_t FactionSharedBBConfigurations = 0xF0;
            static constexpr std::uintptr_t bFullTeamAwarenessPropagation = 0x100;
            static constexpr std::uintptr_t bAwarenessPropagationIsBasedOnAlertLevel = 0x128;
            static constexpr std::uintptr_t FullTeamAwarenessMaxDistance = 0x150;
            static constexpr std::uintptr_t bAddGameParticipantFactionAutomatically = 0x178;
            static constexpr std::uintptr_t OverrideTeamIndex = 0x17C;
            static constexpr std::uintptr_t CanBeDamagedByTeammate = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"FactionTags", 0x30, "StructProperty"},
            {"TurnHostileOnDamageIfNeutral", 0x50, "StructProperty"},
            {"TurnHostileWhenBlockedTime", 0x78, "StructProperty"},
            {"TurnHostileWhenPlayerEntersSameVehicle", 0xA0, "StructProperty"},
            {"PropagateHostilityOnDamaged", 0xC8, "StructProperty"},
            {"FactionSharedBBConfigurations", 0xF0, "ArrayProperty"},
            {"bFullTeamAwarenessPropagation", 0x100, "StructProperty"},
            {"bAwarenessPropagationIsBasedOnAlertLevel", 0x128, "StructProperty"},
            {"FullTeamAwarenessMaxDistance", 0x150, "StructProperty"},
            {"bAddGameParticipantFactionAutomatically", 0x178, "BoolProperty"},
            {"OverrideTeamIndex", 0x17C, "IntProperty"},
            {"CanBeDamagedByTeammate", 0x180, "StructProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AlertLevel
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AlertLevel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Threshold_Suspicious = 0x30;
            static constexpr std::uintptr_t Threshold_Threatened = 0x34;
            static constexpr std::uintptr_t EffectsMap = 0x38;
            static constexpr std::uintptr_t DecayEffect = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Threshold_Suspicious", 0x30, "FloatProperty"},
            {"Threshold_Threatened", 0x34, "FloatProperty"},
            {"EffectsMap", 0x38, "MapProperty"},
            {"DecayEffect", 0x48, "ClassProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AnalyticBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AnalyticBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnDeathGameplayTags = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"OnDeathGameplayTags", 0x30, "StructProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AnimationBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AnimationBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ProxyTable = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ProxyTable", 0x30, "ObjectProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_AssembledMesh
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_AssembledMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_AIBotCosmeticBase";
        struct Offsets
        {
            static constexpr std::uintptr_t AssembledMeshSchema = 0x48;
            static constexpr std::uintptr_t RandomAssembledMeshSchemas = 0x68;
            static constexpr std::uintptr_t PreviewMesh = 0x78;
            static constexpr std::uintptr_t NameSettings = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AssembledMeshSchema", 0x48, "SoftObjectProperty"},
            {"RandomAssembledMeshSchemas", 0x68, "ArrayProperty"},
            {"PreviewMesh", 0x78, "SoftObjectProperty"},
            {"NameSettings", 0x98, "ObjectProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_Behavior
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_Behavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_BehaviorBase";
        struct Offsets
        {
            static constexpr std::uintptr_t BehaviorTree = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BehaviorTree", 0x30, "ObjectProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_BehaviorBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_BehaviorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAISpawnerDataComponent_ChanceEncounterBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_ChanceEncounterBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAISpawnerDataComponent_ConstructionBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_ConstructionBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAISpawnerDataComponent_ConversationBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_ConversationBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAISpawnerDataComponent_CosmeticBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_CosmeticBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAISpawnerDataComponent_CosmeticLibrary
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_CosmeticLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_AIBotCosmeticBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticLibraries = 0x48;
            static constexpr std::uintptr_t DefaultCosmeticLibraryWeight = 0x58;
            static constexpr std::uintptr_t PredefinedCosmeticSetTag = 0x80;
            static constexpr std::uintptr_t EmotesMaxCount = 0x88;
            static constexpr std::uintptr_t bUseFixedSeed = 0xB0;
            static constexpr std::uintptr_t FixedSeed = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CosmeticLibraries", 0x48, "ArrayProperty"},
            {"DefaultCosmeticLibraryWeight", 0x58, "StructProperty"},
            {"PredefinedCosmeticSetTag", 0x80, "StructProperty"},
            {"EmotesMaxCount", 0x88, "StructProperty"},
            {"bUseFixedSeed", 0xB0, "StructProperty"},
            {"FixedSeed", 0xD8, "StructProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_CosmeticLoadout
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_CosmeticLoadout";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_AIBotCosmeticBase";
        struct Offsets
        {
            static constexpr std::uintptr_t WeightedLoadouts = 0x48;
            static constexpr std::uintptr_t CustomCharacterParts = 0x58;
            static constexpr std::uintptr_t bCanShowDefaultSkin = 0x68;
            static constexpr std::uintptr_t FallbackTag = 0x6C;
            static constexpr std::uintptr_t AnimBPOverride = 0x70;
            static constexpr std::uintptr_t AnimBPOverridePriority = 0x78;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"WeightedLoadouts", 0x48, "ArrayProperty"},
            {"CustomCharacterParts", 0x58, "ArrayProperty"},
            {"bCanShowDefaultSkin", 0x68, "BoolProperty"},
            {"FallbackTag", 0x6C, "StructProperty"},
            {"AnimBPOverride", 0x70, "ClassProperty"},
            {"AnimBPOverridePriority", 0x78, "IntProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_CoverBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_CoverBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CoverPositionFilterClass = 0x30;
            static constexpr std::uintptr_t CoverBoxExtent = 0x38;
            static constexpr std::uintptr_t CoverOffset = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CoverPositionFilterClass", 0x30, "ClassProperty"},
            {"CoverBoxExtent", 0x38, "StructProperty"},
            {"CoverOffset", 0x50, "FloatProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_DebugBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_DebugBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAISpawnerDataComponent_GameModeBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_GameModeBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAISpawnerDataComponent_GameplayAbilityBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_GameplayAbilityBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialGameplayEffect = 0x30;
            static constexpr std::uintptr_t InitialGameplayAbilitiesSet = 0x40;
            static constexpr std::uintptr_t LooseTagsToApplyToPawn = 0x50;
            static constexpr std::uintptr_t ReplicatedTagsToApplyToPawn = 0x70;
            static constexpr std::uintptr_t bApplySpawnerDescriptorTagToPawnAsLooseTag = 0x90;
            static constexpr std::uintptr_t bApplySpawnerDescriptorTagToPawnAsReplicatedTag = 0x91;
            static constexpr std::uintptr_t AbilityToPlayOnSpawnTags = 0x98;
            static constexpr std::uintptr_t FNameTags = 0xB8;
            static constexpr std::uintptr_t GameplayTagsToApplyByPercentage = 0xC8;
            static constexpr std::uintptr_t PlayerAbilitySetBR = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"InitialGameplayEffect", 0x30, "ArrayProperty"},
            {"InitialGameplayAbilitiesSet", 0x40, "ArrayProperty"},
            {"LooseTagsToApplyToPawn", 0x50, "StructProperty"},
            {"ReplicatedTagsToApplyToPawn", 0x70, "StructProperty"},
            {"bApplySpawnerDescriptorTagToPawnAsLooseTag", 0x90, "BoolProperty"},
            {"bApplySpawnerDescriptorTagToPawnAsReplicatedTag", 0x91, "BoolProperty"},
            {"AbilityToPlayOnSpawnTags", 0x98, "StructProperty"},
            {"FNameTags", 0xB8, "ArrayProperty"},
            {"GameplayTagsToApplyByPercentage", 0xC8, "ArrayProperty"},
            {"PlayerAbilitySetBR", 0xD8, "SoftObjectProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_GameplayBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_GameplayBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideGlobalSpeedMultiplier = 0x30;
            static constexpr std::uintptr_t GlobalSpeedMultiplier = 0x38;
            static constexpr std::uintptr_t CanBeConverted = 0x60;
            static constexpr std::uintptr_t CanBeConvertedFromDBNO = 0x88;
            static constexpr std::uintptr_t ConvertTimeDBNO = 0xB0;
            static constexpr std::uintptr_t ForceKillWhenUnconverted = 0xD8;
            static constexpr std::uintptr_t ForceKillWhenConverterDies = 0x100;
            static constexpr std::uintptr_t GiveOwnershipToSquadmateWhenConverterDies = 0x128;
            static constexpr std::uintptr_t CopyConverterSpecificRelations = 0x150;
            static constexpr std::uintptr_t RemoveFromAllFactions = 0x178;
            static constexpr std::uintptr_t AddConverterFactions = 0x1A0;
            static constexpr std::uintptr_t ReleaseDistance = 0x1C8;
            static constexpr std::uintptr_t CheckReleaseConditionsTimeInterval = 0x1F0;
            static constexpr std::uintptr_t AddToFactions = 0x218;
            static constexpr std::uintptr_t RemoveFromFactions = 0x238;
            static constexpr std::uintptr_t PawnCullDistance = 0x258;
            static constexpr std::uintptr_t AbilitySetsForConverted = 0x280;
            static constexpr std::uintptr_t TeleportSettings = 0x290;
            static constexpr std::uintptr_t bApplyTaggedNavFilters = 0x2C8;
            static constexpr std::uintptr_t NavFilterData = 0x2D0;
            static constexpr std::uintptr_t bEnableDBNO = 0x2F0;
            static constexpr std::uintptr_t DBNOInteractionType = 0x2F1;
            static constexpr std::uintptr_t DBNOInteractionDuration = 0x2F4;
            static constexpr std::uintptr_t bOnlyLeaderInteraction = 0x2F8;
            static constexpr std::uintptr_t ConvertIdentifierTag = 0x2FC;
            static constexpr std::uintptr_t PlayerCommandsAllowed = 0x300;
            static constexpr std::uintptr_t bCanSleep = 0x304;
            static constexpr std::uintptr_t SleepForTheseGoalActors = 0x308;
            static constexpr std::uintptr_t AssociatedPatrolPath = 0x358;
        };

        inline static constexpr std::array<PropertyInfo, 29> Properties{{
            {"bOverrideGlobalSpeedMultiplier", 0x30, "BoolProperty"},
            {"GlobalSpeedMultiplier", 0x38, "StructProperty"},
            {"CanBeConverted", 0x60, "StructProperty"},
            {"CanBeConvertedFromDBNO", 0x88, "StructProperty"},
            {"ConvertTimeDBNO", 0xB0, "StructProperty"},
            {"ForceKillWhenUnconverted", 0xD8, "StructProperty"},
            {"ForceKillWhenConverterDies", 0x100, "StructProperty"},
            {"GiveOwnershipToSquadmateWhenConverterDies", 0x128, "StructProperty"},
            {"CopyConverterSpecificRelations", 0x150, "StructProperty"},
            {"RemoveFromAllFactions", 0x178, "StructProperty"},
            {"AddConverterFactions", 0x1A0, "StructProperty"},
            {"ReleaseDistance", 0x1C8, "StructProperty"},
            {"CheckReleaseConditionsTimeInterval", 0x1F0, "StructProperty"},
            {"AddToFactions", 0x218, "StructProperty"},
            {"RemoveFromFactions", 0x238, "StructProperty"},
            {"PawnCullDistance", 0x258, "StructProperty"},
            {"AbilitySetsForConverted", 0x280, "ArrayProperty"},
            {"TeleportSettings", 0x290, "StructProperty"},
            {"bApplyTaggedNavFilters", 0x2C8, "BoolProperty"},
            {"NavFilterData", 0x2D0, "StructProperty"},
            {"bEnableDBNO", 0x2F0, "BoolProperty"},
            {"DBNOInteractionType", 0x2F1, "ByteProperty"},
            {"DBNOInteractionDuration", 0x2F4, "FloatProperty"},
            {"bOnlyLeaderInteraction", 0x2F8, "BoolProperty"},
            {"ConvertIdentifierTag", 0x2FC, "StructProperty"},
            {"PlayerCommandsAllowed", 0x300, "UInt32Property"},
            {"bCanSleep", 0x304, "BoolProperty"},
            {"SleepForTheseGoalActors", 0x308, "StructProperty"},
            {"AssociatedPatrolPath", 0x358, "ObjectProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_GroupBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_GroupBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EnableGroupComponent = 0x30;
            static constexpr std::uintptr_t CanBeGroupLeader = 0x58;
            static constexpr std::uintptr_t CanFollowGroupLeader = 0x80;
            static constexpr std::uintptr_t GroupLeaderPriority = 0xA8;
            static constexpr std::uintptr_t EnableFormationComponent = 0xD0;
            static constexpr std::uintptr_t FormationSlots = 0xF8;
            static constexpr std::uintptr_t MaxDistanceFromSlotToSprint = 0x108;
            static constexpr std::uintptr_t MinDistanceFromSlotToStopSprint = 0x130;
            static constexpr std::uintptr_t MaxDistanceFromSlotToStopFollowing = 0x158;
            static constexpr std::uintptr_t MaxDistanceForLeaderToWait = 0x180;
            static constexpr std::uintptr_t DistanceToStartMoving = 0x1A8;
            static constexpr std::uintptr_t EnableConvoyComponent = 0x1D0;
            static constexpr std::uintptr_t CanBeConvoyLeader = 0x1F8;
            static constexpr std::uintptr_t ConvoyLeaderPriority = 0x220;
            static constexpr std::uintptr_t ConvoyFormationSlots = 0x248;
            static constexpr std::uintptr_t ConvoyFormationSlotRelativeToLeaderPath = 0x258;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"EnableGroupComponent", 0x30, "StructProperty"},
            {"CanBeGroupLeader", 0x58, "StructProperty"},
            {"CanFollowGroupLeader", 0x80, "StructProperty"},
            {"GroupLeaderPriority", 0xA8, "StructProperty"},
            {"EnableFormationComponent", 0xD0, "StructProperty"},
            {"FormationSlots", 0xF8, "ArrayProperty"},
            {"MaxDistanceFromSlotToSprint", 0x108, "StructProperty"},
            {"MinDistanceFromSlotToStopSprint", 0x130, "StructProperty"},
            {"MaxDistanceFromSlotToStopFollowing", 0x158, "StructProperty"},
            {"MaxDistanceForLeaderToWait", 0x180, "StructProperty"},
            {"DistanceToStartMoving", 0x1A8, "StructProperty"},
            {"EnableConvoyComponent", 0x1D0, "StructProperty"},
            {"CanBeConvoyLeader", 0x1F8, "StructProperty"},
            {"ConvoyLeaderPriority", 0x220, "StructProperty"},
            {"ConvoyFormationSlots", 0x248, "ArrayProperty"},
            {"ConvoyFormationSlotRelativeToLeaderPath", 0x258, "StructProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_InventoryBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_InventoryBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Items = 0x30;
            static constexpr std::uintptr_t LootInfo = 0x40;
            static constexpr std::uintptr_t ShouldDropCurrencyOnDeath = 0x60;
            static constexpr std::uintptr_t DefaultInventoryIgnoresRestrictions = 0x88;
            static constexpr std::uintptr_t InventoryAlwaysIgnoresRestrictions = 0xB0;
            static constexpr std::uintptr_t IgnoreItemSupportRestrictions = 0xD8;
            static constexpr std::uintptr_t CanEverDropItems = 0x100;
            static constexpr std::uintptr_t CurrencyPayoutRowName = 0x128;
            static constexpr std::uintptr_t bDeathTagsCanBlockLootDrop = 0x12C;
            static constexpr std::uintptr_t bAddStartingItemsToInventory = 0x12D;
            static constexpr std::uintptr_t bRemoveAllItemsOnInitialization = 0x12E;
            static constexpr std::uintptr_t bUseDefenderInventoryManagement = 0x12F;
            static constexpr std::uintptr_t bApplyAutoModToItems = 0x130;
            static constexpr std::uintptr_t LoadoutInfo = 0x138;
            static constexpr std::uintptr_t LoadoutTable = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"Items", 0x30, "ArrayProperty"},
            {"LootInfo", 0x40, "StructProperty"},
            {"ShouldDropCurrencyOnDeath", 0x60, "StructProperty"},
            {"DefaultInventoryIgnoresRestrictions", 0x88, "StructProperty"},
            {"InventoryAlwaysIgnoresRestrictions", 0xB0, "StructProperty"},
            {"IgnoreItemSupportRestrictions", 0xD8, "StructProperty"},
            {"CanEverDropItems", 0x100, "StructProperty"},
            {"CurrencyPayoutRowName", 0x128, "NameProperty"},
            {"bDeathTagsCanBlockLootDrop", 0x12C, "BoolProperty"},
            {"bAddStartingItemsToInventory", 0x12D, "BoolProperty"},
            {"bRemoveAllItemsOnInitialization", 0x12E, "BoolProperty"},
            {"bUseDefenderInventoryManagement", 0x12F, "BoolProperty"},
            {"bApplyAutoModToItems", 0x130, "BoolProperty"},
            {"LoadoutInfo", 0x138, "StructProperty"},
            {"LoadoutTable", 0x150, "ObjectProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_LOD
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_LOD";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_LODBase";
        struct Offsets
        {
            static constexpr std::uintptr_t LODSettings = 0x30;
            static constexpr std::uintptr_t ClientLODSettings = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LODSettings", 0x30, "ClassProperty"},
            {"ClientLODSettings", 0x38, "StructProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_LODBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_LODBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAISpawnerDataComponent_ModifierBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_ModifierBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAISpawnerDataComponent_OptimBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_OptimBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAISpawnerDataComponent_PerceptionBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_PerceptionBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bOverrideVisibilityRange = 0x30;
            static constexpr std::uintptr_t OverrideVisibilityRangeConditionTag = 0x38;
            static constexpr std::uintptr_t SightRadius = 0x58;
            static constexpr std::uintptr_t LoseSightRadius = 0x5C;
            static constexpr std::uintptr_t bRestrictSightOverrideToUnaware = 0x60;
            static constexpr std::uintptr_t bOverrideHearingRange = 0x61;
            static constexpr std::uintptr_t OverrideHearingRangeConditionTag = 0x68;
            static constexpr std::uintptr_t HearingRadius = 0x88;
            static constexpr std::uintptr_t bRestrictHearingOverrideToUnaware = 0x8C;
            static constexpr std::uintptr_t bListenExtendedFootsteps = 0x8D;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"bOverrideVisibilityRange", 0x30, "BoolProperty"},
            {"OverrideVisibilityRangeConditionTag", 0x38, "StructProperty"},
            {"SightRadius", 0x58, "FloatProperty"},
            {"LoseSightRadius", 0x5C, "FloatProperty"},
            {"bRestrictSightOverrideToUnaware", 0x60, "BoolProperty"},
            {"bOverrideHearingRange", 0x61, "BoolProperty"},
            {"OverrideHearingRangeConditionTag", 0x68, "StructProperty"},
            {"HearingRadius", 0x88, "FloatProperty"},
            {"bRestrictHearingOverrideToUnaware", 0x8C, "BoolProperty"},
            {"bListenExtendedFootsteps", 0x8D, "BoolProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_PerksBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_PerksBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PerksContainers = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PerksContainers", 0x30, "ArrayProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_PlayerBotSkillset
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_PlayerBotSkillset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_AIBotSkillset";
        struct Offsets
        {
            static constexpr std::uintptr_t WarmUpSkillSet = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"WarmUpSkillSet", 0x128, "ClassProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_RandomInventory
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_RandomInventory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_AIBotInventory";
        struct Offsets
        {
            static constexpr std::uintptr_t Loadouts = 0x178;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Loadouts", 0x178, "ArrayProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_ScriptBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_ScriptBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAISpawnerDataComponent_SkillsetBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_SkillsetBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAISpawnerDataComponent_SmartObjectAIPawn
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_SmartObjectAIPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_SmartObjectBaseClass";
        struct Offsets
        {
            static constexpr std::uintptr_t SmartObjectUserComponentClass = 0x30;
            static constexpr std::uintptr_t SmartObjectActivitiesCombined = 0x38;
            static constexpr std::uintptr_t SmartObjectActivitiesToAdd = 0x48;
            static constexpr std::uintptr_t SmartObjectActivitiesToRemove = 0x58;
            static constexpr std::uintptr_t AnimConfigTable = 0x68;
            static constexpr std::uintptr_t Enabled = 0x70;
            static constexpr std::uintptr_t ChooseClosestSmartObject = 0x98;
            static constexpr std::uintptr_t UnreachableBanDuration = 0xC0;
            static constexpr std::uintptr_t SelectedSmartObjectExpirationDelay = 0xE8;
            static constexpr std::uintptr_t GlobalSmartObjectCooldownOnFinished = 0x110;
            static constexpr std::uintptr_t GlobalSmartObjectCooldownOnInterrupted = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"SmartObjectUserComponentClass", 0x30, "ClassProperty"},
            {"SmartObjectActivitiesCombined", 0x38, "ArrayProperty"},
            {"SmartObjectActivitiesToAdd", 0x48, "ArrayProperty"},
            {"SmartObjectActivitiesToRemove", 0x58, "ArrayProperty"},
            {"AnimConfigTable", 0x68, "ObjectProperty"},
            {"Enabled", 0x70, "StructProperty"},
            {"ChooseClosestSmartObject", 0x98, "StructProperty"},
            {"UnreachableBanDuration", 0xC0, "StructProperty"},
            {"SelectedSmartObjectExpirationDelay", 0xE8, "StructProperty"},
            {"GlobalSmartObjectCooldownOnFinished", 0x110, "StructProperty"},
            {"GlobalSmartObjectCooldownOnInterrupted", 0x138, "StructProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_SmartObjectBaseClass
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_SmartObjectBaseClass";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SmartObjectUserComponentClass = 0x30;
            static constexpr std::uintptr_t SmartObjectActivitiesCombined = 0x38;
            static constexpr std::uintptr_t SmartObjectActivitiesToAdd = 0x48;
            static constexpr std::uintptr_t SmartObjectActivitiesToRemove = 0x58;
            static constexpr std::uintptr_t AnimConfigTable = 0x68;
            static constexpr std::uintptr_t Enabled = 0x70;
            static constexpr std::uintptr_t ChooseClosestSmartObject = 0x98;
            static constexpr std::uintptr_t UnreachableBanDuration = 0xC0;
            static constexpr std::uintptr_t SelectedSmartObjectExpirationDelay = 0xE8;
            static constexpr std::uintptr_t GlobalSmartObjectCooldownOnFinished = 0x110;
            static constexpr std::uintptr_t GlobalSmartObjectCooldownOnInterrupted = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"SmartObjectUserComponentClass", 0x30, "ClassProperty"},
            {"SmartObjectActivitiesCombined", 0x38, "ArrayProperty"},
            {"SmartObjectActivitiesToAdd", 0x48, "ArrayProperty"},
            {"SmartObjectActivitiesToRemove", 0x58, "ArrayProperty"},
            {"AnimConfigTable", 0x68, "ObjectProperty"},
            {"Enabled", 0x70, "StructProperty"},
            {"ChooseClosestSmartObject", 0x98, "StructProperty"},
            {"UnreachableBanDuration", 0xC0, "StructProperty"},
            {"SelectedSmartObjectExpirationDelay", 0xE8, "StructProperty"},
            {"GlobalSmartObjectCooldownOnFinished", 0x110, "StructProperty"},
            {"GlobalSmartObjectCooldownOnInterrupted", 0x138, "StructProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_SmartObjectBot
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_SmartObjectBot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_SmartObjectBaseClass";
        struct Offsets
        {
            static constexpr std::uintptr_t SmartObjectUserComponentClass = 0x30;
            static constexpr std::uintptr_t SmartObjectActivitiesCombined = 0x38;
            static constexpr std::uintptr_t SmartObjectActivitiesToAdd = 0x48;
            static constexpr std::uintptr_t SmartObjectActivitiesToRemove = 0x58;
            static constexpr std::uintptr_t AnimConfigTable = 0x68;
            static constexpr std::uintptr_t Enabled = 0x70;
            static constexpr std::uintptr_t ChooseClosestSmartObject = 0x98;
            static constexpr std::uintptr_t UnreachableBanDuration = 0xC0;
            static constexpr std::uintptr_t SelectedSmartObjectExpirationDelay = 0xE8;
            static constexpr std::uintptr_t GlobalSmartObjectCooldownOnFinished = 0x110;
            static constexpr std::uintptr_t GlobalSmartObjectCooldownOnInterrupted = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"SmartObjectUserComponentClass", 0x30, "ClassProperty"},
            {"SmartObjectActivitiesCombined", 0x38, "ArrayProperty"},
            {"SmartObjectActivitiesToAdd", 0x48, "ArrayProperty"},
            {"SmartObjectActivitiesToRemove", 0x58, "ArrayProperty"},
            {"AnimConfigTable", 0x68, "ObjectProperty"},
            {"Enabled", 0x70, "StructProperty"},
            {"ChooseClosestSmartObject", 0x98, "StructProperty"},
            {"UnreachableBanDuration", 0xC0, "StructProperty"},
            {"SelectedSmartObjectExpirationDelay", 0xE8, "StructProperty"},
            {"GlobalSmartObjectCooldownOnFinished", 0x110, "StructProperty"},
            {"GlobalSmartObjectCooldownOnInterrupted", 0x138, "StructProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_SpawnParams
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_SpawnParams";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_SpawnParamsBase";
        struct Offsets
        {
            static constexpr std::uintptr_t PawnClass = 0xA0;
            static constexpr std::uintptr_t AIControllerClass = 0xA8;
            static constexpr std::uintptr_t PawnStatHandle = 0xB0;
            static constexpr std::uintptr_t SpawnerDataSpawnedAsChildren = 0xC0;
            static constexpr std::uintptr_t GroundTraceCollisionProfile = 0xD0;
            static constexpr std::uintptr_t InAirSpawnTraceStartHeight = 0xD4;
            static constexpr std::uintptr_t InAirSpawnTraceEndHeight = 0xD8;
            static constexpr std::uintptr_t InAirSpawnTraceSphereRadius = 0xDC;
            static constexpr std::uintptr_t SpawnTracePadding = 0xE0;
            static constexpr std::uintptr_t bAddPOILocationTagsOnSpawn = 0xE4;
            static constexpr std::uintptr_t bCheckForOverlaps = 0xE4;
            static constexpr std::uintptr_t bSetPlayerPawnAttributesWithThisStatHandle = 0xE4;
            static constexpr std::uintptr_t bSetSkyDivingFromBus = 0xE4;
            static constexpr std::uintptr_t bSpawnInAir = 0xE4;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"PawnClass", 0xA0, "ClassProperty"},
            {"AIControllerClass", 0xA8, "ClassProperty"},
            {"PawnStatHandle", 0xB0, "StructProperty"},
            {"SpawnerDataSpawnedAsChildren", 0xC0, "ArrayProperty"},
            {"GroundTraceCollisionProfile", 0xD0, "StructProperty"},
            {"InAirSpawnTraceStartHeight", 0xD4, "FloatProperty"},
            {"InAirSpawnTraceEndHeight", 0xD8, "FloatProperty"},
            {"InAirSpawnTraceSphereRadius", 0xDC, "FloatProperty"},
            {"SpawnTracePadding", 0xE0, "FloatProperty"},
            {"bAddPOILocationTagsOnSpawn", 0xE4, "BoolProperty"},
            {"bCheckForOverlaps", 0xE4, "BoolProperty"},
            {"bSetPlayerPawnAttributesWithThisStatHandle", 0xE4, "BoolProperty"},
            {"bSetSkyDivingFromBus", 0xE4, "BoolProperty"},
            {"bSpawnInAir", 0xE4, "BoolProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_SpawnParamsBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_SpawnParamsBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnTransform = 0x30;
            static constexpr std::uintptr_t SpawnCollisionHandlingOverride = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpawnTransform", 0x30, "StructProperty"},
            {"SpawnCollisionHandlingOverride", 0x90, "EnumProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_SpawnParamsMover
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_SpawnParamsMover";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_SpawnParams";
        struct Offsets
        {
            static constexpr std::uintptr_t PawnClassWithMover = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PawnClassWithMover", 0xF0, "ClassProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_TokenBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_TokenBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EnableTokenProviderComponent = 0x30;
            static constexpr std::uintptr_t TokenMaxCount = 0x58;
            static constexpr std::uintptr_t EnableTokenConsumerComponent = 0x80;
            static constexpr std::uintptr_t TokenHoldMinDuration = 0xA8;
            static constexpr std::uintptr_t TokenHoldMaxDuration = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"EnableTokenProviderComponent", 0x30, "StructProperty"},
            {"TokenMaxCount", 0x58, "StructProperty"},
            {"EnableTokenConsumerComponent", 0x80, "StructProperty"},
            {"TokenHoldMinDuration", 0xA8, "StructProperty"},
            {"TokenHoldMaxDuration", 0xD0, "StructProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_Vehicle
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_Vehicle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_VehicleBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleToSpawnAndEnter = 0x30;
            static constexpr std::uintptr_t bSetInfiniteFuel = 0x38;
            static constexpr std::uintptr_t VehicleSkillSets = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"VehicleToSpawnAndEnter", 0x30, "ClassProperty"},
            {"bSetInfiniteFuel", 0x38, "BoolProperty"},
            {"VehicleSkillSets", 0x40, "ArrayProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_VehicleBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_VehicleBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAISpawnerDataComponent_Voice
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_Voice";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent_VoiceBase";
        struct Offsets
        {
            static constexpr std::uintptr_t VoiceComponentClass = 0x48;
            static constexpr std::uintptr_t SoundBank = 0x50;
            static constexpr std::uintptr_t MaleSoundBankOverride = 0x58;
            static constexpr std::uintptr_t FemaleSoundBankOverride = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"VoiceComponentClass", 0x48, "ClassProperty"},
            {"SoundBank", 0x50, "ObjectProperty"},
            {"MaleSoundBankOverride", 0x58, "ObjectProperty"},
            {"FemaleSoundBankOverride", 0x60, "ObjectProperty"},
        }};
    };

    struct FortAthenaAISpawnerDataComponent_VoiceBase
    {
        static constexpr std::string_view Name = "FortAthenaAISpawnerDataComponent_VoiceBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAISpawnerDataComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Barks = 0x30;
            static constexpr std::uintptr_t CooldownSettings = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Barks", 0x30, "ArrayProperty"},
            {"CooldownSettings", 0x40, "StructProperty"},
        }};
    };

    struct FortAthenaAITargetingBoundsProviderInterface
    {
        static constexpr std::string_view Name = "FortAthenaAITargetingBoundsProviderInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAITelemetryData
    {
        static constexpr std::string_view Name = "FortAthenaAITelemetryData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAITelemetryFunctionLibrary
    {
        static constexpr std::string_view Name = "FortAthenaAITelemetryFunctionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaAlertStateComponent
    {
        static constexpr std::string_view Name = "FortAthenaAlertStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t StealthMeterTarget = 0xC0;
            static constexpr std::uintptr_t StealthMeterTargetTime = 0xC4;
            static constexpr std::uintptr_t StealthMeterPercentage = 0xC8;
            static constexpr std::uintptr_t StealthMeterUsePercentage = 0xCC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"StealthMeterTarget", 0xC0, "FloatProperty"},
            {"StealthMeterTargetTime", 0xC4, "FloatProperty"},
            {"StealthMeterPercentage", 0xC8, "FloatProperty"},
            {"StealthMeterUsePercentage", 0xCC, "BoolProperty"},
        }};
    };

    struct FortAthenaBTTask_DynamicBlueprint
    {
        static constexpr std::string_view Name = "FortAthenaBTTask_DynamicBlueprint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t DynamicBlueprintStatusKeyName = 0x70;
            static constexpr std::uintptr_t DynamicBlueprintActorKeyName = 0x74;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DynamicBlueprintStatusKeyName", 0x70, "NameProperty"},
            {"DynamicBlueprintActorKeyName", 0x74, "NameProperty"},
        }};
    };

    struct FortAthenaBeaconComponent
    {
        static constexpr std::string_view Name = "FortAthenaBeaconComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxAttractedBots = 0xC0;
            static constexpr std::uintptr_t AttractionRadius = 0xC4;
            static constexpr std::uintptr_t RegisteredActors = 0xC8;
            static constexpr std::uintptr_t OnConsumeEvent = 0xD8;
            static constexpr std::uintptr_t bIsConsumed = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"MaxAttractedBots", 0xC0, "IntProperty"},
            {"AttractionRadius", 0xC4, "FloatProperty"},
            {"RegisteredActors", 0xC8, "ArrayProperty"},
            {"OnConsumeEvent", 0xD8, "MulticastInlineDelegateProperty"},
            {"bIsConsumed", 0xE8, "BoolProperty"},
        }};
    };

    struct FortAthenaLeashComponent
    {
        static constexpr std::string_view Name = "FortAthenaLeashComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InitialLeashRadius = 0xC8;
            static constexpr std::uintptr_t InitialLeashHeight = 0xF0;
            static constexpr std::uintptr_t AutoAssignLeashVolume = 0x118;
            static constexpr std::uintptr_t NavigationProjectExtent = 0x140;
            static constexpr std::uintptr_t bEnableSelfTrackingOfIsInsideLeash = 0x158;
            static constexpr std::uintptr_t bPropagateLeashToGroupMembers = 0x159;
            static constexpr std::uintptr_t RuntimeInfo = 0x190;
            static constexpr std::uintptr_t CachedGroupComponent = 0x1D0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"InitialLeashRadius", 0xC8, "StructProperty"},
            {"InitialLeashHeight", 0xF0, "StructProperty"},
            {"AutoAssignLeashVolume", 0x118, "StructProperty"},
            {"NavigationProjectExtent", 0x140, "StructProperty"},
            {"bEnableSelfTrackingOfIsInsideLeash", 0x158, "BoolProperty"},
            {"bPropagateLeashToGroupMembers", 0x159, "BoolProperty"},
            {"RuntimeInfo", 0x190, "StructProperty"},
            {"CachedGroupComponent", 0x1D0, "ObjectProperty"},
        }};
    };

    struct FortAthenaLocalGameplayBehavior
    {
        static constexpr std::string_view Name = "FortAthenaLocalGameplayBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t bNeedToAwakeDuringExecution = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bNeedToAwakeDuringExecution", 0x290, "BoolProperty"},
        }};
    };

    struct FortAthenaNPCEditorLibrary
    {
        static constexpr std::string_view Name = "FortAthenaNPCEditorLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaNPCLoopStateComponent
    {
        static constexpr std::string_view Name = "FortAthenaNPCLoopStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bSpawnOutsideTheLoop = 0xC0;
            static constexpr std::uintptr_t RuntimeLoopSettings = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bSpawnOutsideTheLoop", 0xC0, "BoolProperty"},
            {"RuntimeLoopSettings", 0xC8, "ObjectProperty"},
        }};
    };

    struct FortAthenaNPCSpawnerData
    {
        static constexpr std::string_view Name = "FortAthenaNPCSpawnerData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotSpawnerData";
        struct Offsets
        {
            static constexpr std::uintptr_t SkillSetComponent = 0x160;
            static constexpr std::uintptr_t ConstructionComponent = 0x168;
            static constexpr std::uintptr_t VehicleComponent = 0x170;
            static constexpr std::uintptr_t CoverComponent = 0x178;
            static constexpr std::uintptr_t PerksComponent = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SkillSetComponent", 0x160, "ClassProperty"},
            {"ConstructionComponent", 0x168, "ClassProperty"},
            {"VehicleComponent", 0x170, "ClassProperty"},
            {"CoverComponent", 0x178, "ClassProperty"},
            {"PerksComponent", 0x180, "ClassProperty"},
        }};
    };

    struct FortAthenaNavArea_ShallowWater
    {
        static constexpr std::string_view Name = "FortAthenaNavArea_ShallowWater";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortAthenaNavArea_Water
    {
        static constexpr std::string_view Name = "FortAthenaNavArea_Water";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortAthenaNpcGalileoComponent
    {
        static constexpr std::string_view Name = "FortAthenaNpcGalileoComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedBotController = 0xC0;
            static constexpr std::uintptr_t PossessedPawn = 0xC8;
            static constexpr std::uintptr_t PatrolPath = 0xD0;
            static constexpr std::uintptr_t CommunicationGroup = 0xE0;
            static constexpr std::uintptr_t OnPatrollingStart = 0xF0;
            static constexpr std::uintptr_t OnPatrollingStop = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CachedBotController", 0xC0, "ObjectProperty"},
            {"PossessedPawn", 0xC8, "ObjectProperty"},
            {"PatrolPath", 0xD0, "ArrayProperty"},
            {"CommunicationGroup", 0xE0, "ArrayProperty"},
            {"OnPatrollingStart", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnPatrollingStop", 0x100, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortAthenaNpcPatrollingComponent
    {
        static constexpr std::string_view Name = "FortAthenaNpcPatrollingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedAIController = 0xC8;
            static constexpr std::uintptr_t PatrolPath = 0xD0;
            static constexpr std::uintptr_t OnPathAssigned = 0xD8;
            static constexpr std::uintptr_t OnStartPatrollingEvent = 0xE8;
            static constexpr std::uintptr_t OnStopPatrollingEvent = 0xF8;
            static constexpr std::uintptr_t OnPatrolPointReachedEvent = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"CachedAIController", 0xC8, "ObjectProperty"},
            {"PatrolPath", 0xD0, "WeakObjectProperty"},
            {"OnPathAssigned", 0xD8, "MulticastInlineDelegateProperty"},
            {"OnStartPatrollingEvent", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnStopPatrollingEvent", 0xF8, "MulticastInlineDelegateProperty"},
            {"OnPatrolPointReachedEvent", 0x108, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortAthenaPatrolPath
    {
        static constexpr std::string_view Name = "FortAthenaPatrolPath";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0x290;
            static constexpr std::uintptr_t PatrolPoints = 0x298;
            static constexpr std::uintptr_t bUseRandomStartupPatrolPoint = 0x2A8;
            static constexpr std::uintptr_t bUseRandomStartupDirection = 0x2A9;
            static constexpr std::uintptr_t GameplayTags = 0x2B0;
            static constexpr std::uintptr_t RadialLeashLocationActorOverride = 0x2D0;
            static constexpr std::uintptr_t RadialLeashInnerRadiusOverride = 0x2D8;
            static constexpr std::uintptr_t RadialLeashOuterRadiusOverride = 0x2DC;
            static constexpr std::uintptr_t PathLeashArray = 0x2E0;
            static constexpr std::uintptr_t bUsePathLeashWhenPatrollingIsDisabled = 0x2F0;
            static constexpr std::uintptr_t WaterLevelIndexMax = 0x2F8;
            static constexpr std::uintptr_t WaterLevelIndexMin = 0x320;
            static constexpr std::uintptr_t OnNextPatrolPointFailedToReach = 0x348;
            static constexpr std::uintptr_t OnPatrolPointFailedToReach = 0x358;
            static constexpr std::uintptr_t OnPatrolPointReached = 0x368;
            static constexpr std::uintptr_t OnPatrolPathStarted = 0x378;
            static constexpr std::uintptr_t OnPatrolPathStopped = 0x388;
            static constexpr std::uintptr_t OnPatrolPathActivationStatusChanged = 0x398;
            static constexpr std::uintptr_t MaxConcurrentUsage = 0x3A8;
            static constexpr std::uintptr_t CurrentConcurrentUsage = 0x3D0;
            static constexpr std::uintptr_t MaxLifetimeUsage = 0x3D8;
            static constexpr std::uintptr_t DebugLinkWidthSelected = 0x400;
            static constexpr std::uintptr_t DebugLinkWidthNotSelected = 0x404;
            static constexpr std::uintptr_t DebugNotSelectedColor = 0x408;
            static constexpr std::uintptr_t bIsPatrolPathEnabled = 0x418;
            static constexpr std::uintptr_t bSyncWithPointProvider = 0x418;
        };

        inline static constexpr std::array<PropertyInfo, 26> Properties{{
            {"Mode", 0x290, "EnumProperty"},
            {"PatrolPoints", 0x298, "ArrayProperty"},
            {"bUseRandomStartupPatrolPoint", 0x2A8, "BoolProperty"},
            {"bUseRandomStartupDirection", 0x2A9, "BoolProperty"},
            {"GameplayTags", 0x2B0, "StructProperty"},
            {"RadialLeashLocationActorOverride", 0x2D0, "ObjectProperty"},
            {"RadialLeashInnerRadiusOverride", 0x2D8, "FloatProperty"},
            {"RadialLeashOuterRadiusOverride", 0x2DC, "FloatProperty"},
            {"PathLeashArray", 0x2E0, "ArrayProperty"},
            {"bUsePathLeashWhenPatrollingIsDisabled", 0x2F0, "BoolProperty"},
            {"WaterLevelIndexMax", 0x2F8, "StructProperty"},
            {"WaterLevelIndexMin", 0x320, "StructProperty"},
            {"OnNextPatrolPointFailedToReach", 0x348, "MulticastInlineDelegateProperty"},
            {"OnPatrolPointFailedToReach", 0x358, "MulticastInlineDelegateProperty"},
            {"OnPatrolPointReached", 0x368, "MulticastInlineDelegateProperty"},
            {"OnPatrolPathStarted", 0x378, "MulticastInlineDelegateProperty"},
            {"OnPatrolPathStopped", 0x388, "MulticastInlineDelegateProperty"},
            {"OnPatrolPathActivationStatusChanged", 0x398, "MulticastInlineDelegateProperty"},
            {"MaxConcurrentUsage", 0x3A8, "StructProperty"},
            {"CurrentConcurrentUsage", 0x3D0, "IntProperty"},
            {"MaxLifetimeUsage", 0x3D8, "StructProperty"},
            {"DebugLinkWidthSelected", 0x400, "FloatProperty"},
            {"DebugLinkWidthNotSelected", 0x404, "FloatProperty"},
            {"DebugNotSelectedColor", 0x408, "StructProperty"},
            {"bIsPatrolPathEnabled", 0x418, "BoolProperty"},
            {"bSyncWithPointProvider", 0x418, "BoolProperty"},
        }};
    };

    struct FortAthenaPatrolPoint
    {
        static constexpr std::string_view Name = "FortAthenaPatrolPoint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalGameplayBehavior = 0x278;
            static constexpr std::uintptr_t PauseDurationAtPatrolPoint = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LocalGameplayBehavior", 0x278, "ObjectProperty"},
            {"PauseDurationAtPatrolPoint", 0x280, "FloatProperty"},
        }};
    };

    struct FortAthenaPawnComponent_AIJump
    {
        static constexpr std::string_view Name = "FortAthenaPawnComponent_AIJump";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent_AIJump";
        struct Offsets
        {
            static constexpr std::uintptr_t UpAction = 0x11A;
            static constexpr std::uintptr_t DownAction = 0x11B;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UpAction", 0x11A, "EnumProperty"},
            {"DownAction", 0x11B, "EnumProperty"},
        }};
    };

    struct FortAthenaPlayerBotSpawnerData
    {
        static constexpr std::string_view Name = "FortAthenaPlayerBotSpawnerData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaAIBotSpawnerData";
        struct Offsets
        {
            static constexpr std::uintptr_t SkillSetComponent = 0x160;
            static constexpr std::uintptr_t ConstructionComponent = 0x168;
            static constexpr std::uintptr_t VehicleComponent = 0x170;
            static constexpr std::uintptr_t CoverComponent = 0x178;
            static constexpr std::uintptr_t PerksComponent = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"SkillSetComponent", 0x160, "ClassProperty"},
            {"ConstructionComponent", 0x168, "ClassProperty"},
            {"VehicleComponent", 0x170, "ClassProperty"},
            {"CoverComponent", 0x178, "ClassProperty"},
            {"PerksComponent", 0x180, "ClassProperty"},
        }};
    };

    struct FortAthenaTrackableAIObjectComponent
    {
        static constexpr std::string_view Name = "FortAthenaTrackableAIObjectComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTags = 0xD0;
            static constexpr std::uintptr_t CustomRegistrationClass = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GameplayTags", 0xD0, "StructProperty"},
            {"CustomRegistrationClass", 0xF8, "ClassProperty"},
        }};
    };

    struct FortAthenaTrackableAIObjectInterface
    {
        static constexpr std::string_view Name = "FortAthenaTrackableAIObjectInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortAthenaTrackableAIObjectVehicleComponent
    {
        static constexpr std::string_view Name = "FortAthenaTrackableAIObjectVehicleComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaTrackableAIObjectComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayTags = 0xD0;
            static constexpr std::uintptr_t CustomRegistrationClass = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GameplayTags", 0xD0, "StructProperty"},
            {"CustomRegistrationClass", 0xF8, "ClassProperty"},
        }};
    };

    struct FortBTDecorator_QueryGameplayAbility
    {
        static constexpr std::string_view Name = "FortBTDecorator_QueryGameplayAbility";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTDecorator";
        struct Offsets
        {
            static constexpr std::uintptr_t GameplayAbilityTagContainer = 0x68;
            static constexpr std::uintptr_t TargetValue = 0x98;
            static constexpr std::uintptr_t ActiveAbilityTagsToSkipTestingValue = 0xB8;
            static constexpr std::uintptr_t bUseTarget = 0xE8;
            static constexpr std::uintptr_t GameplayAbilityTag = 0xF0;
            static constexpr std::uintptr_t GameplayAbilityTagBlackboardKey = 0x110;
            static constexpr std::uintptr_t Target = 0x138;
            static constexpr std::uintptr_t ActiveAbilityTagsToSkipTesting = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"GameplayAbilityTagContainer", 0x68, "StructProperty"},
            {"TargetValue", 0x98, "StructProperty"},
            {"ActiveAbilityTagsToSkipTestingValue", 0xB8, "StructProperty"},
            {"bUseTarget", 0xE8, "BoolProperty"},
            {"GameplayAbilityTag", 0xF0, "StructProperty"},
            {"GameplayAbilityTagBlackboardKey", 0x110, "StructProperty"},
            {"Target", 0x138, "StructProperty"},
            {"ActiveAbilityTagsToSkipTesting", 0x160, "StructProperty"},
        }};
    };

    struct FortBTTask_TriggerVOEvent
    {
        static constexpr std::string_view Name = "FortBTTask_TriggerVOEvent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTTaskNode";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseFeedbackBank = 0x70;
            static constexpr std::uintptr_t CustomEventName = 0x78;
            static constexpr std::uintptr_t SelectedEvent = 0x88;
            static constexpr std::uintptr_t FeedbackBank = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bUseFeedbackBank", 0x70, "BoolProperty"},
            {"CustomEventName", 0x78, "StrProperty"},
            {"SelectedEvent", 0x88, "StrProperty"},
            {"FeedbackBank", 0x98, "ObjectProperty"},
        }};
    };

    struct FortBehaviorTreeComponent
    {
        static constexpr std::string_view Name = "FortBehaviorTreeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BehaviorTreeComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NodeInstances = 0x138;
            static constexpr std::uintptr_t DefaultBehaviorTreeAsset = 0x210;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NodeInstances", 0x138, "ArrayProperty"},
            {"DefaultBehaviorTreeAsset", 0x210, "ObjectProperty"},
        }};
    };

    struct FortBlackboardComponent
    {
        static constexpr std::string_view Name = "FortBlackboardComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlackboardComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BrainComp = 0xC0;
            static constexpr std::uintptr_t DefaultBlackboardAsset = 0xC8;
            static constexpr std::uintptr_t BlackboardAsset = 0xD0;
            static constexpr std::uintptr_t KeyInstances = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BrainComp", 0xC0, "ObjectProperty"},
            {"DefaultBlackboardAsset", 0xC8, "ObjectProperty"},
            {"BlackboardAsset", 0xD0, "ObjectProperty"},
            {"KeyInstances", 0xF8, "ArrayProperty"},
        }};
    };

    struct FortBotController
    {
        static constexpr std::string_view Name = "FortBotController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAIController";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentMissionLogic = 0x5B8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentMissionLogic", 0x5B8, "ObjectProperty"},
        }};
    };

    struct FortBotMissionLogic
    {
        static constexpr std::string_view Name = "FortBotMissionLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Mission = 0x28;
            static constexpr std::uintptr_t Goals = 0x30;
            static constexpr std::uintptr_t Builders = 0x40;
            static constexpr std::uintptr_t CurrentBehaviorAsset = 0x50;
            static constexpr std::uintptr_t AssignedAI = 0x58;
            static constexpr std::uintptr_t GoalHasLocator = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Mission", 0x28, "ObjectProperty"},
            {"Goals", 0x30, "ArrayProperty"},
            {"Builders", 0x40, "ArrayProperty"},
            {"CurrentBehaviorAsset", 0x50, "ObjectProperty"},
            {"AssignedAI", 0x58, "ArrayProperty"},
            {"GoalHasLocator", 0x68, "ArrayProperty"},
        }};
    };

    struct FortBotMissionManager
    {
        static constexpr std::string_view Name = "FortBotMissionManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BotPawnClass = 0x28;
            static constexpr std::uintptr_t BotPawns = 0x48;
            static constexpr std::uintptr_t ActiveMissionsLogicData = 0x58;
            static constexpr std::uintptr_t PrimaryMissionLogicData = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BotPawnClass", 0x28, "SoftClassProperty"},
            {"BotPawns", 0x48, "ArrayProperty"},
            {"ActiveMissionsLogicData", 0x58, "ArrayProperty"},
            {"PrimaryMissionLogicData", 0x68, "ObjectProperty"},
        }};
    };

    struct FortBotNameSettings
    {
        static constexpr std::string_view Name = "FortBotNameSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NamingMode = 0x28;
            static constexpr std::uintptr_t OverrideName = 0x30;
            static constexpr std::uintptr_t bAddPlayerIDSuffix = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NamingMode", 0x28, "ByteProperty"},
            {"OverrideName", 0x30, "TextProperty"},
            {"bAddPlayerIDSuffix", 0x40, "BoolProperty"},
        }};
    };

    struct FortBotStructureBuilder
    {
        static constexpr std::string_view Name = "FortBotStructureBuilder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t BuildingInstructions = 0x278;
            static constexpr std::uintptr_t BuiltActors = 0x280;
            static constexpr std::uintptr_t CachedGoal = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"BuildingInstructions", 0x278, "ObjectProperty"},
            {"BuiltActors", 0x280, "ArrayProperty"},
            {"CachedGoal", 0x290, "ObjectProperty"},
        }};
    };

    struct FortClamberLinkGlobalProxy
    {
        static constexpr std::string_view Name = "FortClamberLinkGlobalProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCustomNavLinkGlobalProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t LinkProxyId = 0x30;
            static constexpr std::uintptr_t Owner = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LinkProxyId", 0x30, "StructProperty"},
            {"Owner", 0x38, "ObjectProperty"},
        }};
    };

    struct FortCollisionResponseSwapperComponent
    {
        static constexpr std::string_view Name = "FortCollisionResponseSwapperComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CollisionPrimitiveComponent = 0xC0;
            static constexpr std::uintptr_t OverlapPrimitiveComponent = 0xC8;
            static constexpr std::uintptr_t PawnsListenedTo = 0x118;
            static constexpr std::uintptr_t VisibilityModifiedTime = 0x138;
            static constexpr std::uintptr_t NewCollisionResponse = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CollisionPrimitiveComponent", 0xC0, "ObjectProperty"},
            {"OverlapPrimitiveComponent", 0xC8, "ObjectProperty"},
            {"PawnsListenedTo", 0x118, "ArrayProperty"},
            {"VisibilityModifiedTime", 0x138, "StructProperty"},
            {"NewCollisionResponse", 0x160, "ByteProperty"},
        }};
    };

    struct FortControllerComponent_AIEscalate
    {
        static constexpr std::string_view Name = "FortControllerComponent_AIEscalate";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EscalateReasonStims = 0xC8;
            static constexpr std::uintptr_t EscalateReasonConditions = 0xD8;
            static constexpr std::uintptr_t AlertGameplayCue = 0x1C4;
            static constexpr std::uintptr_t AIEscalateTargets = 0x1C8;
            static constexpr std::uintptr_t PrimaryEscalateTargetPawn = 0x1D8;
            static constexpr std::uintptr_t EscalateGaugeStartedDelegate = 0x1E0;
            static constexpr std::uintptr_t EscalateGaugeFinishedDelegate = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"EscalateReasonStims", 0xC8, "ArrayProperty"},
            {"EscalateReasonConditions", 0xD8, "ArrayProperty"},
            {"AlertGameplayCue", 0x1C4, "StructProperty"},
            {"AIEscalateTargets", 0x1C8, "ArrayProperty"},
            {"PrimaryEscalateTargetPawn", 0x1D8, "WeakObjectProperty"},
            {"EscalateGaugeStartedDelegate", 0x1E0, "MulticastInlineDelegateProperty"},
            {"EscalateGaugeFinishedDelegate", 0x1F0, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortControllerComponent_AIJoinAircraftPhase
    {
        static constexpr std::string_view Name = "FortControllerComponent_AIJoinAircraftPhase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct FortControllerComponent_AIQuests
    {
        static constexpr std::string_view Name = "FortControllerComponent_AIQuests";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ChanceToSeekBotBountyTargets = 0xC8;
            static constexpr std::uintptr_t MinNumWeaponsToGoForBounty = 0xF0;
            static constexpr std::uintptr_t bDoesSeekBotBountyTargets = 0x118;
            static constexpr std::uintptr_t CachedMinNumWeaponsForBounty = 0x11C;
            static constexpr std::uintptr_t CachedModifierComponent = 0x120;
            static constexpr std::uintptr_t CachedTransientQuestsComponent = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ChanceToSeekBotBountyTargets", 0xC8, "StructProperty"},
            {"MinNumWeaponsToGoForBounty", 0xF0, "StructProperty"},
            {"bDoesSeekBotBountyTargets", 0x118, "BoolProperty"},
            {"CachedMinNumWeaponsForBounty", 0x11C, "IntProperty"},
            {"CachedModifierComponent", 0x120, "ObjectProperty"},
            {"CachedTransientQuestsComponent", 0x128, "ObjectProperty"},
        }};
    };

    struct FortControllerComponent_AIRandomTargeter
    {
        static constexpr std::string_view Name = "FortControllerComponent_AIRandomTargeter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TargetUpdatedDelegate = 0xC8;
            static constexpr std::uintptr_t ChangeTargetTimeMin = 0xD8;
            static constexpr std::uintptr_t ChangeTargetTimeMax = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"TargetUpdatedDelegate", 0xC8, "MulticastInlineDelegateProperty"},
            {"ChangeTargetTimeMin", 0xD8, "StructProperty"},
            {"ChangeTargetTimeMax", 0x100, "StructProperty"},
        }};
    };

    struct FortControllerComponent_AISafeZone
    {
        static constexpr std::string_view Name = "FortControllerComponent_AISafeZone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedBotController = 0xC8;
            static constexpr std::uintptr_t CachedModifierComponent = 0xD0;
            static constexpr std::uintptr_t CachedBRLogicComp = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CachedBotController", 0xC8, "ObjectProperty"},
            {"CachedModifierComponent", 0xD0, "ObjectProperty"},
            {"CachedBRLogicComp", 0xD8, "ObjectProperty"},
        }};
    };

    struct FortControllerComponent_AISkillLevel
    {
        static constexpr std::string_view Name = "FortControllerComponent_AISkillLevel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t UseTargetBasedSkillLevel = 0xC8;
            static constexpr std::uintptr_t SkillSwitchingCooldown = 0xF0;
            static constexpr std::uintptr_t FallbackSkillRating = 0x118;
            static constexpr std::uintptr_t SkillRatingMappingTable = 0x140;
            static constexpr std::uintptr_t bSkillRatingInitialized = 0x148;
            static constexpr std::uintptr_t DefaultSkillRating = 0x14C;
            static constexpr std::uintptr_t CurrentSkillRating = 0x150;
            static constexpr std::uintptr_t CanSwitchSkillRatingTime = 0x154;
            static constexpr std::uintptr_t bHasThreatUpdateToCompute = 0x158;
            static constexpr std::uintptr_t CachedAIController = 0x160;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"UseTargetBasedSkillLevel", 0xC8, "StructProperty"},
            {"SkillSwitchingCooldown", 0xF0, "StructProperty"},
            {"FallbackSkillRating", 0x118, "StructProperty"},
            {"SkillRatingMappingTable", 0x140, "ObjectProperty"},
            {"bSkillRatingInitialized", 0x148, "BoolProperty"},
            {"DefaultSkillRating", 0x14C, "IntProperty"},
            {"CurrentSkillRating", 0x150, "IntProperty"},
            {"CanSwitchSkillRatingTime", 0x154, "FloatProperty"},
            {"bHasThreatUpdateToCompute", 0x158, "BoolProperty"},
            {"CachedAIController", 0x160, "ObjectProperty"},
        }};
    };

    struct FortControllerComponent_AISkydive
    {
        static constexpr std::string_view Name = "FortControllerComponent_AISkydive";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ReportGroundAltitudeAfterParachuteIsForcedOpen = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ReportGroundAltitudeAfterParachuteIsForcedOpen", 0xC8, "StructProperty"},
        }};
    };

    struct FortControllerComponent_AISprint
    {
        static constexpr std::string_view Name = "FortControllerComponent_AISprint";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct FortControllerComponent_AIWarmupPhase
    {
        static constexpr std::string_view Name = "FortControllerComponent_AIWarmupPhase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
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

    struct FortControllerComponent_ActorAttentionTracking
    {
        static constexpr std::string_view Name = "FortControllerComponent_ActorAttentionTracking";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AimedAtRanges = 0xC8;
            static constexpr std::uintptr_t AttentionTrackingList = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"AimedAtRanges", 0xC8, "ArrayProperty"},
            {"AttentionTrackingList", 0xD8, "ArrayProperty"},
        }};
    };

    struct FortControllerComponent_PathHover
    {
        static constexpr std::string_view Name = "FortControllerComponent_PathHover";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t DesiredHoverHeight = 0xC8;
            static constexpr std::uintptr_t GroundClearance = 0xCC;
            static constexpr std::uintptr_t CeilingClearance = 0xD0;
            static constexpr std::uintptr_t NavAreaHoverHeights = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"DesiredHoverHeight", 0xC8, "FloatProperty"},
            {"GroundClearance", 0xCC, "FloatProperty"},
            {"CeilingClearance", 0xD0, "FloatProperty"},
            {"NavAreaHoverHeights", 0xD8, "MapProperty"},
        }};
    };

    struct FortCreativeCreatureManagerComponent
    {
        static constexpr std::string_view Name = "FortCreativeCreatureManagerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMinigameComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CreatureManagerInfos = 0xC0;
            static constexpr std::uintptr_t EnabledCreatureManagerInfos = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CreatureManagerInfos", 0xC0, "ArrayProperty"},
            {"EnabledCreatureManagerInfos", 0xD0, "MapProperty"},
        }};
    };

    struct FortCreativeCreatureManagerInfoComponent
    {
        static constexpr std::string_view Name = "FortCreativeCreatureManagerInfoComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMinigameLogicComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CreatureBlueprintClass = 0x1A0;
            static constexpr std::uintptr_t MaxHealth = 0x1C0;
            static constexpr std::uintptr_t HearingAggroRange = 0x1C4;
            static constexpr std::uintptr_t ScorePoints = 0x1C8;
            static constexpr std::uintptr_t DamageCaused = 0x1CC;
            static constexpr std::uintptr_t EnvironmentalDamageOverride = 0x1D0;
            static constexpr std::uintptr_t MovementSpeedMultiplier = 0x1D4;
            static constexpr std::uintptr_t bImmuneToWeaponKnockback = 0x1D8;
            static constexpr std::uintptr_t CreatureManagerComponent = 0x1E0;
            static constexpr std::uintptr_t DamageOverrideEffect = 0x1E8;
            static constexpr std::uintptr_t EnvironmentalDamageOverrideEffect = 0x1F0;
            static constexpr std::uintptr_t MovementSpeedOverrideEffect = 0x1F8;
            static constexpr std::uintptr_t WeaponKnockbackImmunityEffect = 0x200;
            static constexpr std::uintptr_t MaxHealthOverrideEffect = 0x208;
            static constexpr std::uintptr_t ScoreDistribution = 0x210;
            static constexpr std::uintptr_t AffectedTargetsType = 0x211;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"CreatureBlueprintClass", 0x1A0, "SoftClassProperty"},
            {"MaxHealth", 0x1C0, "IntProperty"},
            {"HearingAggroRange", 0x1C4, "FloatProperty"},
            {"ScorePoints", 0x1C8, "IntProperty"},
            {"DamageCaused", 0x1CC, "FloatProperty"},
            {"EnvironmentalDamageOverride", 0x1D0, "FloatProperty"},
            {"MovementSpeedMultiplier", 0x1D4, "FloatProperty"},
            {"bImmuneToWeaponKnockback", 0x1D8, "BoolProperty"},
            {"CreatureManagerComponent", 0x1E0, "ObjectProperty"},
            {"DamageOverrideEffect", 0x1E8, "ClassProperty"},
            {"EnvironmentalDamageOverrideEffect", 0x1F0, "ClassProperty"},
            {"MovementSpeedOverrideEffect", 0x1F8, "ClassProperty"},
            {"WeaponKnockbackImmunityEffect", 0x200, "ClassProperty"},
            {"MaxHealthOverrideEffect", 0x208, "ClassProperty"},
            {"ScoreDistribution", 0x210, "EnumProperty"},
            {"AffectedTargetsType", 0x211, "EnumProperty"},
        }};
    };

    struct FortCreativePatrolPath
    {
        static constexpr std::string_view Name = "FortCreativePatrolPath";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaPatrolPath";
        struct Offsets
        {
            static constexpr std::uintptr_t CreativePatrolPoints = 0x458;
            static constexpr std::uintptr_t PatrolPathGroup = 0x468;
            static constexpr std::uintptr_t CreativePathRenderer = 0x470;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CreativePatrolPoints", 0x458, "ArrayProperty"},
            {"PatrolPathGroup", 0x468, "EnumProperty"},
            {"CreativePathRenderer", 0x470, "ObjectProperty"},
        }};
    };

    struct FortCrowdManager
    {
        static constexpr std::string_view Name = "FortCrowdManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CrowdManager";
        struct Offsets
        {
            static constexpr std::uintptr_t MyNavData = 0x28;
            static constexpr std::uintptr_t AvoidanceConfig = 0x30;
            static constexpr std::uintptr_t SamplingPatterns = 0x40;
            static constexpr std::uintptr_t MaxAgents = 0x50;
            static constexpr std::uintptr_t MaxAgentRadius = 0x54;
            static constexpr std::uintptr_t MaxAvoidedAgents = 0x58;
            static constexpr std::uintptr_t MaxAvoidedWalls = 0x5C;
            static constexpr std::uintptr_t NavmeshCheckInterval = 0x60;
            static constexpr std::uintptr_t PathOptimizationInterval = 0x64;
            static constexpr std::uintptr_t SeparationDirClamp = 0x68;
            static constexpr std::uintptr_t PathOffsetRadiusMultiplier = 0x6C;
            static constexpr std::uintptr_t bResolveCollisions = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"MyNavData", 0x28, "ObjectProperty"},
            {"AvoidanceConfig", 0x30, "ArrayProperty"},
            {"SamplingPatterns", 0x40, "ArrayProperty"},
            {"MaxAgents", 0x50, "IntProperty"},
            {"MaxAgentRadius", 0x54, "FloatProperty"},
            {"MaxAvoidedAgents", 0x58, "IntProperty"},
            {"MaxAvoidedWalls", 0x5C, "IntProperty"},
            {"NavmeshCheckInterval", 0x60, "FloatProperty"},
            {"PathOptimizationInterval", 0x64, "FloatProperty"},
            {"SeparationDirClamp", 0x68, "FloatProperty"},
            {"PathOffsetRadiusMultiplier", 0x6C, "FloatProperty"},
            {"bResolveCollisions", 0x70, "BoolProperty"},
        }};
    };

    struct FortCustomNavLinkGlobalProxy
    {
        static constexpr std::string_view Name = "FortCustomNavLinkGlobalProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseGeneratedNavLinksProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t LinkProxyId = 0x30;
            static constexpr std::uintptr_t Owner = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LinkProxyId", 0x30, "StructProperty"},
            {"Owner", 0x38, "ObjectProperty"},
        }};
    };

    struct FortCustomNavLinkProcessor
    {
        static constexpr std::string_view Name = "FortCustomNavLinkProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortCustomNavLinkUserInterface
    {
        static constexpr std::string_view Name = "FortCustomNavLinkUserInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDebugMinimapDataActorInterface
    {
        static constexpr std::string_view Name = "FortDebugMinimapDataActorInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortDoorLinkComponent
    {
        static constexpr std::string_view Name = "FortDoorLinkComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavLinkCustomComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NavLinkUserId = 0x118;
            static constexpr std::uintptr_t CustomLinkId = 0x120;
            static constexpr std::uintptr_t AuxiliaryCustomLinkId = 0x128;
            static constexpr std::uintptr_t EnabledAreaClass = 0x130;
            static constexpr std::uintptr_t DisabledAreaClass = 0x138;
            static constexpr std::uintptr_t SupportedAgents = 0x140;
            static constexpr std::uintptr_t LinkRelativeStart = 0x148;
            static constexpr std::uintptr_t LinkRelativeEnd = 0x160;
            static constexpr std::uintptr_t LinkDirection = 0x178;
            static constexpr std::uintptr_t bCreateBoxObstacle = 0x17C;
            static constexpr std::uintptr_t bLinkEnabled = 0x17C;
            static constexpr std::uintptr_t bNotifyWhenDisabled = 0x17C;
            static constexpr std::uintptr_t bNotifyWhenEnabled = 0x17C;
            static constexpr std::uintptr_t ObstacleOffset = 0x180;
            static constexpr std::uintptr_t ObstacleExtent = 0x198;
            static constexpr std::uintptr_t ObstacleAreaClass = 0x1B0;
            static constexpr std::uintptr_t BroadcastRadius = 0x1B8;
            static constexpr std::uintptr_t BroadcastInterval = 0x1BC;
            static constexpr std::uintptr_t BroadcastChannel = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"NavLinkUserId", 0x118, "UInt32Property"},
            {"CustomLinkId", 0x120, "StructProperty"},
            {"AuxiliaryCustomLinkId", 0x128, "StructProperty"},
            {"EnabledAreaClass", 0x130, "ClassProperty"},
            {"DisabledAreaClass", 0x138, "ClassProperty"},
            {"SupportedAgents", 0x140, "StructProperty"},
            {"LinkRelativeStart", 0x148, "StructProperty"},
            {"LinkRelativeEnd", 0x160, "StructProperty"},
            {"LinkDirection", 0x178, "ByteProperty"},
            {"bCreateBoxObstacle", 0x17C, "BoolProperty"},
            {"bLinkEnabled", 0x17C, "BoolProperty"},
            {"bNotifyWhenDisabled", 0x17C, "BoolProperty"},
            {"bNotifyWhenEnabled", 0x17C, "BoolProperty"},
            {"ObstacleOffset", 0x180, "StructProperty"},
            {"ObstacleExtent", 0x198, "StructProperty"},
            {"ObstacleAreaClass", 0x1B0, "ClassProperty"},
            {"BroadcastRadius", 0x1B8, "FloatProperty"},
            {"BroadcastInterval", 0x1BC, "FloatProperty"},
            {"BroadcastChannel", 0x1C0, "ByteProperty"},
        }};
    };

    struct FortDoorLinkOpenerInterface
    {
        static constexpr std::string_view Name = "FortDoorLinkOpenerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortEnemySpawn
    {
        static constexpr std::string_view Name = "FortEnemySpawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingActor";
        struct Offsets
        {
            static constexpr std::uintptr_t ClusterRadius = 0x6B8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ClusterRadius", 0x6B8, "FloatProperty"},
        }};
    };

    struct FortEnvQueryManager
    {
        static constexpr std::string_view Name = "FortEnvQueryManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryManager";
        struct Offsets
        {
            static constexpr std::uintptr_t EnvManagerConfigPerGamePhase = 0xD8;
            static constexpr std::uintptr_t EnvManagerConfigSTW = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"EnvManagerConfigPerGamePhase", 0xD8, "ArrayProperty"},
            {"EnvManagerConfigSTW", 0xE8, "StructProperty"},
        }};
    };

    struct FortForcedLODZone
    {
        static constexpr std::string_view Name = "FortForcedLODZone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t ForcedLODLevel = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ForcedLODLevel", 0x278, "EnumProperty"},
        }};
    };

    struct FortGameFeatureAction_AddAIModifiers
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_AddAIModifiers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameInstanceGameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t Modifiers = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Modifiers", 0x38, "ArrayProperty"},
        }};
    };

    struct FortGameFeatureAction_AddAIServiceModifiers
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_AddAIServiceModifiers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameInstanceGameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t ModifiersData = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ModifiersData", 0x38, "ArrayProperty"},
        }};
    };

    struct FortGameFeatureAction_AddCustomNavLinkProcessor
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_AddCustomNavLinkProcessor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomNavLinkProcessor = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CustomNavLinkProcessor", 0x28, "ClassProperty"},
        }};
    };

    struct FortGameFeatureAction_AthenaAISpawner_RegisterSpawningBudgetCategory
    {
        static constexpr std::string_view Name = "FortGameFeatureAction_AthenaAISpawner_RegisterSpawningBudgetCategory";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameInstanceGameFeatureAction";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawningBudgetCategory = 0x38;
            static constexpr std::uintptr_t MaxSpawningCountPerFrame = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpawningBudgetCategory", 0x38, "StructProperty"},
            {"MaxSpawningCountPerFrame", 0x3C, "IntProperty"},
        }};
    };

    struct FortGameplayAbility_Leap
    {
        static constexpr std::string_view Name = "FortGameplayAbility_Leap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t FindLandingSpotEQSQuery = 0xB40;
            static constexpr std::uintptr_t bLeadingLeap = 0xB48;
            static constexpr std::uintptr_t bApplyInaccuracy = 0xB49;
            static constexpr std::uintptr_t DesiredFlightTime = 0xB50;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FindLandingSpotEQSQuery", 0xB40, "ObjectProperty"},
            {"bLeadingLeap", 0xB48, "BoolProperty"},
            {"bApplyInaccuracy", 0xB49, "BoolProperty"},
            {"DesiredFlightTime", 0xB50, "StructProperty"},
        }};
    };

    struct FortGameplayAbility_TeleportToActor
    {
        static constexpr std::string_view Name = "FortGameplayAbility_TeleportToActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortGameplayAbility";
        struct Offsets
        {
            static constexpr std::uintptr_t bCheckPlayerLOSWhenTeleporting = 0xB44;
            static constexpr std::uintptr_t MaxDistanceToConsiderLOS = 0xB48;
            static constexpr std::uintptr_t PlayerFOV = 0xB4C;
            static constexpr std::uintptr_t TeleportDelay = 0xB50;
            static constexpr std::uintptr_t TeleportRetries = 0xB54;
            static constexpr std::uintptr_t RetryDelay = 0xB58;
            static constexpr std::uintptr_t FindTeleportSpotEQSQuery = 0xB70;
            static constexpr std::uintptr_t bDrawDebug = 0xB78;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bCheckPlayerLOSWhenTeleporting", 0xB44, "BoolProperty"},
            {"MaxDistanceToConsiderLOS", 0xB48, "FloatProperty"},
            {"PlayerFOV", 0xB4C, "FloatProperty"},
            {"TeleportDelay", 0xB50, "FloatProperty"},
            {"TeleportRetries", 0xB54, "IntProperty"},
            {"RetryDelay", 0xB58, "FloatProperty"},
            {"FindTeleportSpotEQSQuery", 0xB70, "ObjectProperty"},
            {"bDrawDebug", 0xB78, "BoolProperty"},
        }};
    };

    struct FortGameplayInteractionSmartObjectBehaviorDefinition
    {
        static constexpr std::string_view Name = "FortGameplayInteractionSmartObjectBehaviorDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameplayInteractionSmartObjectBehaviorDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTreeReference = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"StateTreeReference", 0x28, "StructProperty"},
        }};
    };

    struct FortGeneratedJumpVerticalNavLinksProxy
    {
        static constexpr std::string_view Name = "FortGeneratedJumpVerticalNavLinksProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BaseGeneratedNavLinksProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t LinkProxyId = 0x30;
            static constexpr std::uintptr_t Owner = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LinkProxyId", 0x30, "StructProperty"},
            {"Owner", 0x38, "ObjectProperty"},
        }};
    };

    struct FortHurdleLinkGlobalProxy
    {
        static constexpr std::string_view Name = "FortHurdleLinkGlobalProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCustomNavLinkGlobalProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t LinkProxyId = 0x30;
            static constexpr std::uintptr_t Owner = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LinkProxyId", 0x30, "StructProperty"},
            {"Owner", 0x38, "ObjectProperty"},
        }};
    };

    struct FortInescapableZoneTracker
    {
        static constexpr std::string_view Name = "FortInescapableZoneTracker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t NavGraph = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NavGraph", 0x28, "ObjectProperty"},
        }};
    };

    struct FortInfluenceMap
    {
        static constexpr std::string_view Name = "FortInfluenceMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphData = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GraphData", 0x60, "ObjectProperty"},
        }};
    };

    struct FortInjectedBehavior
    {
        static constexpr std::string_view Name = "FortInjectedBehavior";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DecisionInterface = 0x30;
            static constexpr std::uintptr_t AIEvaluator = 0x38;
            static constexpr std::uintptr_t AIService = 0x40;
            static constexpr std::uintptr_t Interval = 0x48;
            static constexpr std::uintptr_t RandomDeviation = 0x4C;
            static constexpr std::uintptr_t ActionInterface = 0x50;
            static constexpr std::uintptr_t Priority = 0x58;
            static constexpr std::uintptr_t Weight = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"DecisionInterface", 0x30, "ObjectProperty"},
            {"AIEvaluator", 0x38, "ClassProperty"},
            {"AIService", 0x40, "ClassProperty"},
            {"Interval", 0x48, "FloatProperty"},
            {"RandomDeviation", 0x4C, "FloatProperty"},
            {"ActionInterface", 0x50, "ObjectProperty"},
            {"Priority", 0x58, "UInt32Property"},
            {"Weight", 0x60, "StructProperty"},
        }};
    };

    struct FortInjectedBehaviorActionInterface
    {
        static constexpr std::string_view Name = "FortInjectedBehaviorActionInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortInjectedBehaviorDecisionInterface
    {
        static constexpr std::string_view Name = "FortInjectedBehaviorDecisionInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortInjectedBehaviorTreeAction
    {
        static constexpr std::string_view Name = "FortInjectedBehaviorTreeAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t BehaviorTree = 0x30;
            static constexpr std::uintptr_t BlackboardParameter = 0x38;
            static constexpr std::uintptr_t InjectionItemKeyName = 0x60;
            static constexpr std::uintptr_t InjectionContext = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"BehaviorTree", 0x30, "ObjectProperty"},
            {"BlackboardParameter", 0x38, "StructProperty"},
            {"InjectionItemKeyName", 0x60, "NameProperty"},
            {"InjectionContext", 0x68, "StructProperty"},
        }};
    };

    struct FortInjectedStateTreeAction
    {
        static constexpr std::string_view Name = "FortInjectedStateTreeAction";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTree = 0x30;
            static constexpr std::uintptr_t Interval = 0x58;
            static constexpr std::uintptr_t IntervalRandomDeviation = 0x5C;
            static constexpr std::uintptr_t InstanceData = 0x60;
            static constexpr std::uintptr_t Controller = 0x70;
            static constexpr std::uintptr_t Pawn = 0x78;
            static constexpr std::uintptr_t InjectionContext = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"StateTree", 0x30, "StructProperty"},
            {"Interval", 0x58, "FloatProperty"},
            {"IntervalRandomDeviation", 0x5C, "FloatProperty"},
            {"InstanceData", 0x60, "StructProperty"},
            {"Controller", 0x70, "ObjectProperty"},
            {"Pawn", 0x78, "ObjectProperty"},
            {"InjectionContext", 0x80, "StructProperty"},
        }};
    };

    struct FortInjectedStateTreeDecision
    {
        static constexpr std::string_view Name = "FortInjectedStateTreeDecision";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t StateTree = 0x40;
            static constexpr std::uintptr_t Interval = 0x68;
            static constexpr std::uintptr_t RandomVariation = 0x90;
            static constexpr std::uintptr_t Context = 0xB8;
            static constexpr std::uintptr_t AIController = 0xD0;
            static constexpr std::uintptr_t InstanceData = 0xD8;
            static constexpr std::uintptr_t StateTreeContextData = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"StateTree", 0x40, "StructProperty"},
            {"Interval", 0x68, "StructProperty"},
            {"RandomVariation", 0x90, "StructProperty"},
            {"Context", 0xB8, "StructProperty"},
            {"AIController", 0xD0, "ObjectProperty"},
            {"InstanceData", 0xD8, "StructProperty"},
            {"StateTreeContextData", 0xE8, "StructProperty"},
        }};
    };

    struct FortIntensityCurveSequence
    {
        static constexpr std::string_view Name = "FortIntensityCurveSequence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t IntensityCurves = 0x28;
            static constexpr std::uintptr_t SequenceType = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"IntensityCurves", 0x28, "ArrayProperty"},
            {"SequenceType", 0x38, "ByteProperty"},
        }};
    };

    struct FortIntensityCurveSequenceProgression
    {
        static constexpr std::string_view Name = "FortIntensityCurveSequenceProgression";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t IntensityCurveSequences = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"IntensityCurveSequences", 0x28, "ArrayProperty"},
        }};
    };

    struct FortJumpDownLink
    {
        static constexpr std::string_view Name = "FortJumpDownLink";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavLinkProxy";
        struct Offsets
        {
            static constexpr std::uintptr_t PointLinks = 0x288;
            static constexpr std::uintptr_t SegmentLinks = 0x298;
            static constexpr std::uintptr_t SmartLinkComp = 0x2A8;
            static constexpr std::uintptr_t bSmartLinkIsRelevant = 0x2B0;
            static constexpr std::uintptr_t OnSmartLinkReached = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PointLinks", 0x288, "ArrayProperty"},
            {"SegmentLinks", 0x298, "ArrayProperty"},
            {"SmartLinkComp", 0x2A8, "ObjectProperty"},
            {"bSmartLinkIsRelevant", 0x2B0, "BoolProperty"},
            {"OnSmartLinkReached", 0x2B8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct FortMetaNavArea
    {
        static constexpr std::string_view Name = "FortMetaNavArea";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavAreaMeta";
        struct Offsets
        {
            static constexpr std::uintptr_t AgentData = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AgentData", 0x48, "ArrayProperty"},
        }};
    };

    struct FortMetaNavArea_Obstacles
    {
        static constexpr std::string_view Name = "FortMetaNavArea_Obstacles";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavAreaMeta";
        struct Offsets
        {
            static constexpr std::uintptr_t HealthThreshold = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HealthThreshold", 0x48, "IntProperty"},
        }};
    };

    struct FortMetaNavArea_Wall
    {
        static constexpr std::string_view Name = "FortMetaNavArea_Wall";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortMetaNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t AgentData = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AgentData", 0x48, "ArrayProperty"},
        }};
    };

    struct FortMovementPredictionLibrary
    {
        static constexpr std::string_view Name = "FortMovementPredictionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortNPCVerbReactionWorldConditionSchema
    {
        static constexpr std::string_view Name = "FortNPCVerbReactionWorldConditionSchema";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldConditionSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t ContextDataDescs = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ContextDataDescs", 0x28, "ArrayProperty"},
        }};
    };

    struct FortNavAgentCostData
    {
        static constexpr std::string_view Name = "FortNavAgentCostData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t NavAgentName = 0x28;
            static constexpr std::uintptr_t NavAreaStrengthBuckets = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"NavAgentName", 0x28, "NameProperty"},
            {"NavAreaStrengthBuckets", 0x30, "ArrayProperty"},
        }};
    };

    struct FortNavArea
    {
        static constexpr std::string_view Name = "FortNavArea";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavAreaAutomatic
    {
        static constexpr std::string_view Name = "FortNavAreaAutomatic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t NavCostCurveHandle = 0x50;
            static constexpr std::uintptr_t NavAreaStrength = 0x60;
            static constexpr std::uintptr_t AutomaticNavCost = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NavCostCurveHandle", 0x50, "StructProperty"},
            {"NavAreaStrength", 0x60, "IntProperty"},
            {"AutomaticNavCost", 0x64, "FloatProperty"},
        }};
    };

    struct FortNavArea_Archway
    {
        static constexpr std::string_view Name = "FortNavArea_Archway";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_BigMovingPawn
    {
        static constexpr std::string_view Name = "FortNavArea_BigMovingPawn";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_CheapObstacle
    {
        static constexpr std::string_view Name = "FortNavArea_CheapObstacle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_Clamber
    {
        static constexpr std::string_view Name = "FortNavArea_Clamber";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_ClosedDoors
    {
        static constexpr std::string_view Name = "FortNavArea_ClosedDoors";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_Danger
    {
        static constexpr std::string_view Name = "FortNavArea_Danger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_DefaultSmashable
    {
        static constexpr std::string_view Name = "FortNavArea_DefaultSmashable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_DefenderNull
    {
        static constexpr std::string_view Name = "FortNavArea_DefenderNull";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_GeneratedJumpDown
    {
        static constexpr std::string_view Name = "FortNavArea_GeneratedJumpDown";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_GeneratedJumpUp
    {
        static constexpr std::string_view Name = "FortNavArea_GeneratedJumpUp";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_Hurdle
    {
        static constexpr std::string_view Name = "FortNavArea_Hurdle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_HuskNull
    {
        static constexpr std::string_view Name = "FortNavArea_HuskNull";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_LowJump
    {
        static constexpr std::string_view Name = "FortNavArea_LowJump";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_LowSmashable
    {
        static constexpr std::string_view Name = "FortNavArea_LowSmashable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea_DefaultSmashable";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_MetaReplacement
    {
        static constexpr std::string_view Name = "FortNavArea_MetaReplacement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_Obstacle
    {
        static constexpr std::string_view Name = "FortNavArea_Obstacle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_ObstacleReplacement
    {
        static constexpr std::string_view Name = "FortNavArea_ObstacleReplacement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_PlayerBuiltSmashable
    {
        static constexpr std::string_view Name = "FortNavArea_PlayerBuiltSmashable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea_DefaultSmashable";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_PortalOrSmash
    {
        static constexpr std::string_view Name = "FortNavArea_PortalOrSmash";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_Prop
    {
        static constexpr std::string_view Name = "FortNavArea_Prop";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_SmashableJump
    {
        static constexpr std::string_view Name = "FortNavArea_SmashableJump";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t Strength = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Strength", 0x50, "IntProperty"},
        }};
    };

    struct FortNavArea_Stairs
    {
        static constexpr std::string_view Name = "FortNavArea_Stairs";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_StarlightCheapObstacle
    {
        static constexpr std::string_view Name = "FortNavArea_StarlightCheapObstacle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea_CheapObstacle";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_StarlightObstacle
    {
        static constexpr std::string_view Name = "FortNavArea_StarlightObstacle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea_Obstacle";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_StoneWall
    {
        static constexpr std::string_view Name = "FortNavArea_StoneWall";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_TakerOnly
    {
        static constexpr std::string_view Name = "FortNavArea_TakerOnly";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_TempWallReplacement
    {
        static constexpr std::string_view Name = "FortNavArea_TempWallReplacement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavAreaAutomatic";
        struct Offsets
        {
            static constexpr std::uintptr_t NavCostCurveHandle = 0x50;
            static constexpr std::uintptr_t NavAreaStrength = 0x60;
            static constexpr std::uintptr_t AutomaticNavCost = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NavCostCurveHandle", 0x50, "StructProperty"},
            {"NavAreaStrength", 0x60, "IntProperty"},
            {"AutomaticNavCost", 0x64, "FloatProperty"},
        }};
    };

    struct FortNavArea_TraceSmashable
    {
        static constexpr std::string_view Name = "FortNavArea_TraceSmashable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea_DefaultSmashable";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_TrainTracks
    {
        static constexpr std::string_view Name = "FortNavArea_TrainTracks";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_Unwalkable
    {
        static constexpr std::string_view Name = "FortNavArea_Unwalkable";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_WalkOverWall
    {
        static constexpr std::string_view Name = "FortNavArea_WalkOverWall";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_WallCorner
    {
        static constexpr std::string_view Name = "FortNavArea_WallCorner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_WallCornerReplacement
    {
        static constexpr std::string_view Name = "FortNavArea_WallCornerReplacement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_WoodenWall
    {
        static constexpr std::string_view Name = "FortNavArea_WoodenWall";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavArea_Zipline
    {
        static constexpr std::string_view Name = "FortNavArea_Zipline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t bObstacle = 0x48;
            static constexpr std::uintptr_t bSmashable = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bObstacle", 0x48, "BoolProperty"},
            {"bSmashable", 0x48, "BoolProperty"},
        }};
    };

    struct FortNavGraphGoal
    {
        static constexpr std::string_view Name = "FortNavGraphGoal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t GraphRadius = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"GraphRadius", 0x280, "FloatProperty"},
        }};
    };

    struct FortNavHeightMapData
    {
        static constexpr std::string_view Name = "FortNavHeightMapData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavigationHeightMapData";
        struct Offsets
        {
            static constexpr std::uintptr_t OriginOffset = 0x438;
            static constexpr std::uintptr_t bDoFullyAsyncNavDataGathering = 0x450;
            static constexpr std::uintptr_t bFixedTilePoolSize = 0x450;
            static constexpr std::uintptr_t bIsWorldPartitioned = 0x450;
            static constexpr std::uintptr_t TilePoolSize = 0x454;
            static constexpr std::uintptr_t TileSizeUU = 0x458;
            static constexpr std::uintptr_t NavMeshResolutionParams = 0x45C;
            static constexpr std::uintptr_t AgentRadius = 0x480;
            static constexpr std::uintptr_t AgentHeight = 0x484;
            static constexpr std::uintptr_t DrawOffset = 0x488;
            static constexpr std::uintptr_t bDrawCells = 0x48C;
            static constexpr std::uintptr_t bDrawTileBounds = 0x48C;
            static constexpr std::uintptr_t bDrawTileEdges = 0x48C;
            static constexpr std::uintptr_t bDrawTileLabels = 0x48C;
            static constexpr std::uintptr_t DefaultMaxSearchNodes = 0x490;
            static constexpr std::uintptr_t HeuristicScale = 0x494;
            static constexpr std::uintptr_t TimeSliceLongDurationDebug = 0x498;
            static constexpr std::uintptr_t bUseExtraTopCellWhenMarkingAreas = 0x4A4;
            static constexpr std::uintptr_t bUseVirtualGeometryFilteringAndDirtying = 0x4A4;
            static constexpr std::uintptr_t InvokerTilePriorityBumpDistanceThresholdInTileUnits = 0x4A8;
            static constexpr std::uintptr_t InvokerTilePriorityBumpIncrease = 0x4AC;
            static constexpr std::uintptr_t MaxSimultaneousTileGenerationJobsCount = 0x4B0;
            static constexpr std::uintptr_t TileGenerationDebug = 0x4B4;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"OriginOffset", 0x438, "StructProperty"},
            {"bDoFullyAsyncNavDataGathering", 0x450, "BoolProperty"},
            {"bFixedTilePoolSize", 0x450, "BoolProperty"},
            {"bIsWorldPartitioned", 0x450, "BoolProperty"},
            {"TilePoolSize", 0x454, "IntProperty"},
            {"TileSizeUU", 0x458, "FloatProperty"},
            {"NavMeshResolutionParams", 0x45C, "StructProperty"},
            {"AgentRadius", 0x480, "FloatProperty"},
            {"AgentHeight", 0x484, "FloatProperty"},
            {"DrawOffset", 0x488, "FloatProperty"},
            {"bDrawCells", 0x48C, "BoolProperty"},
            {"bDrawTileBounds", 0x48C, "BoolProperty"},
            {"bDrawTileEdges", 0x48C, "BoolProperty"},
            {"bDrawTileLabels", 0x48C, "BoolProperty"},
            {"DefaultMaxSearchNodes", 0x490, "UInt32Property"},
            {"HeuristicScale", 0x494, "FloatProperty"},
            {"TimeSliceLongDurationDebug", 0x498, "DoubleProperty"},
            {"bUseExtraTopCellWhenMarkingAreas", 0x4A4, "BoolProperty"},
            {"bUseVirtualGeometryFilteringAndDirtying", 0x4A4, "BoolProperty"},
            {"InvokerTilePriorityBumpDistanceThresholdInTileUnits", 0x4A8, "UInt32Property"},
            {"InvokerTilePriorityBumpIncrease", 0x4AC, "ByteProperty"},
            {"MaxSimultaneousTileGenerationJobsCount", 0x4B0, "IntProperty"},
            {"TileGenerationDebug", 0x4B4, "StructProperty"},
        }};
    };

    struct FortNavLinkBlockerComponent
    {
        static constexpr std::string_view Name = "FortNavLinkBlockerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BoxComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t BoxExtent = 0x580;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"BoxExtent", 0x580, "StructProperty"},
        }};
    };

    struct FortNavLinkContainer
    {
        static constexpr std::string_view Name = "FortNavLinkContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryActorTick = 0x28;
            static constexpr std::uintptr_t bAlwaysRelevant = 0x58;
            static constexpr std::uintptr_t bCallPreReplication = 0x58;
            static constexpr std::uintptr_t bCallPreReplicationForReplay = 0x58;
            static constexpr std::uintptr_t bHidden = 0x58;
            static constexpr std::uintptr_t bNetTemporary = 0x58;
            static constexpr std::uintptr_t bOnlyRelevantToOwner = 0x58;
            static constexpr std::uintptr_t bReplicateMovement = 0x58;
            static constexpr std::uintptr_t bExchangedRoles = 0x59;
            static constexpr std::uintptr_t bForceNetAddressable = 0x59;
            static constexpr std::uintptr_t bNetLoadOnClient = 0x59;
            static constexpr std::uintptr_t bNetUseOwnerRelevancy = 0x59;
            static constexpr std::uintptr_t bRelevantForLevelBounds = 0x59;
            static constexpr std::uintptr_t bRelevantForNetworkReplays = 0x59;
            static constexpr std::uintptr_t bReplayRewindable = 0x59;
            static constexpr std::uintptr_t bTearOff = 0x59;
            static constexpr std::uintptr_t bAllowTickBeforeBeginPlay = 0x5A;
            static constexpr std::uintptr_t bAutoDestroyWhenFinished = 0x5A;
            static constexpr std::uintptr_t bBlockInput = 0x5A;
            static constexpr std::uintptr_t bCanBeDamaged = 0x5A;
            static constexpr std::uintptr_t bCollideWhenPlacing = 0x5A;
            static constexpr std::uintptr_t bFindCameraComponentWhenViewTarget = 0x5A;
            static constexpr std::uintptr_t bGenerateOverlapEventsDuringLevelStreaming = 0x5A;
            static constexpr std::uintptr_t bIgnoresOriginShifting = 0x5A;
            static constexpr std::uintptr_t bAllowReceiveTickEventOnDedicatedServer = 0x5B;
            static constexpr std::uintptr_t bCanBeInCluster = 0x5B;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x5B;
            static constexpr std::uintptr_t bIsEditorOnlyActor = 0x5B;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x5B;
            static constexpr std::uintptr_t bReplicates = 0x5B;
            static constexpr std::uintptr_t bActorEnableCollision = 0x5D;
            static constexpr std::uintptr_t bActorIsBeingDestroyed = 0x5D;
            static constexpr std::uintptr_t bAsyncPhysicsTickEnabled = 0x5D;
            static constexpr std::uintptr_t UpdateOverlapsMethodDuringLevelStreaming = 0x5E;
            static constexpr std::uintptr_t DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5F;
            static constexpr std::uintptr_t RemoteRole = 0x60;
            static constexpr std::uintptr_t InitialLifeSpan = 0x64;
            static constexpr std::uintptr_t CustomTimeDilation = 0x68;
            static constexpr std::uintptr_t RayTracingGroupId = 0x6C;
            static constexpr std::uintptr_t AttachmentReplication = 0x70;
            static constexpr std::uintptr_t ReplicatedMovement = 0xD0;
            static constexpr std::uintptr_t Owner = 0x158;
            static constexpr std::uintptr_t NetDriverName = 0x160;
            static constexpr std::uintptr_t Role = 0x164;
            static constexpr std::uintptr_t NetDormancy = 0x165;
            static constexpr std::uintptr_t SpawnCollisionHandlingMethod = 0x166;
            static constexpr std::uintptr_t AutoReceiveInput = 0x167;
            static constexpr std::uintptr_t InputPriority = 0x168;
            static constexpr std::uintptr_t InputComponent = 0x170;
            static constexpr std::uintptr_t NetTag = 0x178;
            static constexpr std::uintptr_t NetCullDistanceSquared = 0x17C;
            static constexpr std::uintptr_t NetUpdateFrequency = 0x180;
            static constexpr std::uintptr_t MinNetUpdateFrequency = 0x184;
            static constexpr std::uintptr_t NetPriority = 0x188;
            static constexpr std::uintptr_t PhysicsReplicationMode = 0x18C;
            static constexpr std::uintptr_t Instigator = 0x198;
            static constexpr std::uintptr_t Children = 0x1A0;
            static constexpr std::uintptr_t RootComponent = 0x1B0;
            static constexpr std::uintptr_t HLODLayer = 0x1C8;
            static constexpr std::uintptr_t Layers = 0x1D0;
            static constexpr std::uintptr_t ParentComponent = 0x1E0;
            static constexpr std::uintptr_t Tags = 0x1F8;
            static constexpr std::uintptr_t OnTakeAnyDamage = 0x208;
            static constexpr std::uintptr_t OnTakePointDamage = 0x209;
            static constexpr std::uintptr_t OnTakeRadialDamage = 0x20A;
            static constexpr std::uintptr_t OnActorBeginOverlap = 0x20B;
            static constexpr std::uintptr_t OnActorEndOverlap = 0x20C;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x20D;
            static constexpr std::uintptr_t OnEndCursorOver = 0x20E;
            static constexpr std::uintptr_t OnClicked = 0x20F;
            static constexpr std::uintptr_t OnReleased = 0x210;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x211;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x212;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x213;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x214;
            static constexpr std::uintptr_t OnActorHit = 0x215;
            static constexpr std::uintptr_t OnDestroyed = 0x216;
            static constexpr std::uintptr_t OnEndPlay = 0x217;
            static constexpr std::uintptr_t InstanceComponents = 0x258;
            static constexpr std::uintptr_t BlueprintCreatedComponents = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 80> Properties{{
            {"PrimaryActorTick", 0x28, "StructProperty"},
            {"bAlwaysRelevant", 0x58, "BoolProperty"},
            {"bCallPreReplication", 0x58, "BoolProperty"},
            {"bCallPreReplicationForReplay", 0x58, "BoolProperty"},
            {"bHidden", 0x58, "BoolProperty"},
            {"bNetTemporary", 0x58, "BoolProperty"},
            {"bOnlyRelevantToOwner", 0x58, "BoolProperty"},
            {"bReplicateMovement", 0x58, "BoolProperty"},
            {"bExchangedRoles", 0x59, "BoolProperty"},
            {"bForceNetAddressable", 0x59, "BoolProperty"},
            {"bNetLoadOnClient", 0x59, "BoolProperty"},
            {"bNetUseOwnerRelevancy", 0x59, "BoolProperty"},
            {"bRelevantForLevelBounds", 0x59, "BoolProperty"},
            {"bRelevantForNetworkReplays", 0x59, "BoolProperty"},
            {"bReplayRewindable", 0x59, "BoolProperty"},
            {"bTearOff", 0x59, "BoolProperty"},
            {"bAllowTickBeforeBeginPlay", 0x5A, "BoolProperty"},
            {"bAutoDestroyWhenFinished", 0x5A, "BoolProperty"},
            {"bBlockInput", 0x5A, "BoolProperty"},
            {"bCanBeDamaged", 0x5A, "BoolProperty"},
            {"bCollideWhenPlacing", 0x5A, "BoolProperty"},
            {"bFindCameraComponentWhenViewTarget", 0x5A, "BoolProperty"},
            {"bGenerateOverlapEventsDuringLevelStreaming", 0x5A, "BoolProperty"},
            {"bIgnoresOriginShifting", 0x5A, "BoolProperty"},
            {"bAllowReceiveTickEventOnDedicatedServer", 0x5B, "BoolProperty"},
            {"bCanBeInCluster", 0x5B, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x5B, "BoolProperty"},
            {"bIsEditorOnlyActor", 0x5B, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x5B, "BoolProperty"},
            {"bReplicates", 0x5B, "BoolProperty"},
            {"bActorEnableCollision", 0x5D, "BoolProperty"},
            {"bActorIsBeingDestroyed", 0x5D, "BoolProperty"},
            {"bAsyncPhysicsTickEnabled", 0x5D, "BoolProperty"},
            {"UpdateOverlapsMethodDuringLevelStreaming", 0x5E, "EnumProperty"},
            {"DefaultUpdateOverlapsMethodDuringLevelStreaming", 0x5F, "EnumProperty"},
            {"RemoteRole", 0x60, "ByteProperty"},
            {"InitialLifeSpan", 0x64, "FloatProperty"},
            {"CustomTimeDilation", 0x68, "FloatProperty"},
            {"RayTracingGroupId", 0x6C, "IntProperty"},
            {"AttachmentReplication", 0x70, "StructProperty"},
            {"ReplicatedMovement", 0xD0, "StructProperty"},
            {"Owner", 0x158, "ObjectProperty"},
            {"NetDriverName", 0x160, "NameProperty"},
            {"Role", 0x164, "ByteProperty"},
            {"NetDormancy", 0x165, "ByteProperty"},
            {"SpawnCollisionHandlingMethod", 0x166, "EnumProperty"},
            {"AutoReceiveInput", 0x167, "ByteProperty"},
            {"InputPriority", 0x168, "IntProperty"},
            {"InputComponent", 0x170, "ObjectProperty"},
            {"NetTag", 0x178, "IntProperty"},
            {"NetCullDistanceSquared", 0x17C, "FloatProperty"},
            {"NetUpdateFrequency", 0x180, "FloatProperty"},
            {"MinNetUpdateFrequency", 0x184, "FloatProperty"},
            {"NetPriority", 0x188, "FloatProperty"},
            {"PhysicsReplicationMode", 0x18C, "EnumProperty"},
            {"Instigator", 0x198, "ObjectProperty"},
            {"Children", 0x1A0, "ArrayProperty"},
            {"RootComponent", 0x1B0, "ObjectProperty"},
            {"HLODLayer", 0x1C8, "ObjectProperty"},
            {"Layers", 0x1D0, "ArrayProperty"},
            {"ParentComponent", 0x1E0, "WeakObjectProperty"},
            {"Tags", 0x1F8, "ArrayProperty"},
            {"OnTakeAnyDamage", 0x208, "MulticastSparseDelegateProperty"},
            {"OnTakePointDamage", 0x209, "MulticastSparseDelegateProperty"},
            {"OnTakeRadialDamage", 0x20A, "MulticastSparseDelegateProperty"},
            {"OnActorBeginOverlap", 0x20B, "MulticastSparseDelegateProperty"},
            {"OnActorEndOverlap", 0x20C, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x20D, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x20E, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x20F, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x210, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x211, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x212, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x213, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x214, "MulticastSparseDelegateProperty"},
            {"OnActorHit", 0x215, "MulticastSparseDelegateProperty"},
            {"OnDestroyed", 0x216, "MulticastSparseDelegateProperty"},
            {"OnEndPlay", 0x217, "MulticastSparseDelegateProperty"},
            {"InstanceComponents", 0x258, "ArrayProperty"},
            {"BlueprintCreatedComponents", 0x268, "ArrayProperty"},
        }};
    };

    struct FortNavLinkDefinition
    {
        static constexpr std::string_view Name = "FortNavLinkDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavLinkDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t Pattern = 0x50;
            static constexpr std::uintptr_t AdditionalPatterns = 0x58;
            static constexpr std::uintptr_t StairsRailing = 0x68;
            static constexpr std::uintptr_t FloorRailing = 0x78;
            static constexpr std::uintptr_t PatternType = 0x79;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"Pattern", 0x50, "StructProperty"},
            {"AdditionalPatterns", 0x58, "ArrayProperty"},
            {"StairsRailing", 0x68, "ArrayProperty"},
            {"FloorRailing", 0x78, "EnumProperty"},
            {"PatternType", 0x79, "ByteProperty"},
        }};
    };

    struct FortNavMesh
    {
        static constexpr std::string_view Name = "FortNavMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "RecastNavMesh";
        struct Offsets
        {
            static constexpr std::uintptr_t HotspotManager = 0x630;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"HotspotManager", 0x630, "ObjectProperty"},
        }};
    };

    struct FortNavModifierComponent
    {
        static constexpr std::string_view Name = "FortNavModifierComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavModifierComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LowSpeedSquareThreshold = 0x1C0;
            static constexpr std::uintptr_t LowSpeedSquareDistanceThreshold = 0x1C4;
            static constexpr std::uintptr_t LowSpeedRotationThreshold = 0x1C8;
            static constexpr std::uintptr_t LowSpeedScaleThreshold = 0x1CC;
            static constexpr std::uintptr_t bAutomaticNavBoundComputation = 0x1D0;
            static constexpr std::uintptr_t bForceFailSafeExtent = 0x1D0;
            static constexpr std::uintptr_t ExtrapolationMultiplierForFailsafeExtent = 0x1D4;
            static constexpr std::uintptr_t DisableForNavmeshClasses = 0x1D8;
            static constexpr std::uintptr_t PrimCompAffectingNavMesh = 0x1E8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"LowSpeedSquareThreshold", 0x1C0, "FloatProperty"},
            {"LowSpeedSquareDistanceThreshold", 0x1C4, "FloatProperty"},
            {"LowSpeedRotationThreshold", 0x1C8, "FloatProperty"},
            {"LowSpeedScaleThreshold", 0x1CC, "FloatProperty"},
            {"bAutomaticNavBoundComputation", 0x1D0, "BoolProperty"},
            {"bForceFailSafeExtent", 0x1D0, "BoolProperty"},
            {"ExtrapolationMultiplierForFailsafeExtent", 0x1D4, "FloatProperty"},
            {"DisableForNavmeshClasses", 0x1D8, "ArrayProperty"},
            {"PrimCompAffectingNavMesh", 0x1E8, "ObjectProperty"},
        }};
    };

    struct FortNavModifierVolume
    {
        static constexpr std::string_view Name = "FortNavModifierVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavModifierVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t EnableOnlyForNavmeshClasses = 0x2D0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EnableOnlyForNavmeshClasses", 0x2D0, "ArrayProperty"},
        }};
    };

    struct FortNavObstacleComponent
    {
        static constexpr std::string_view Name = "FortNavObstacleComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavRelevantComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ObstacleAreaClass = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ObstacleAreaClass", 0x110, "ClassProperty"},
        }};
    };

    struct FortNavPathRendererComponent
    {
        static constexpr std::string_view Name = "FortNavPathRendererComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PathVFX = 0xC0;
            static constexpr std::uintptr_t PathVFXOffset = 0xC8;
            static constexpr std::uintptr_t PathColors = 0xE0;
            static constexpr std::uintptr_t PathVFXComponent = 0xF0;
            static constexpr std::uintptr_t PathRendererList = 0xF8;
            static constexpr std::uintptr_t AllPathsPoints = 0x108;
            static constexpr std::uintptr_t NavPathPoints = 0x118;
            static constexpr std::uintptr_t NavPathPointsStatus = 0x128;
            static constexpr std::uintptr_t PathMode = 0x138;
            static constexpr std::uintptr_t CurrentPathColorIndex = 0x13C;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"PathVFX", 0xC0, "ObjectProperty"},
            {"PathVFXOffset", 0xC8, "StructProperty"},
            {"PathColors", 0xE0, "ArrayProperty"},
            {"PathVFXComponent", 0xF0, "ObjectProperty"},
            {"PathRendererList", 0xF8, "ArrayProperty"},
            {"AllPathsPoints", 0x108, "ArrayProperty"},
            {"NavPathPoints", 0x118, "ArrayProperty"},
            {"NavPathPointsStatus", 0x128, "ArrayProperty"},
            {"PathMode", 0x138, "EnumProperty"},
            {"CurrentPathColorIndex", 0x13C, "IntProperty"},
        }};
    };

    struct FortNavPathRendererInfoInterface
    {
        static constexpr std::string_view Name = "FortNavPathRendererInfoInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortNavSystem
    {
        static constexpr std::string_view Name = "FortNavSystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavigationSystemV1";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultSmashableArea = 0x13D0;
            static constexpr std::uintptr_t JumpDownArea = 0x13F0;
            static constexpr std::uintptr_t JumpDownSmashableArea = 0x1410;
            static constexpr std::uintptr_t JumpDownSmashableArea2 = 0x1430;
            static constexpr std::uintptr_t JumpDownSmashableArea3 = 0x1450;
            static constexpr std::uintptr_t LinkGlobalProxies = 0x1470;
            static constexpr std::uintptr_t NamedNavmeshes = 0x1480;
            static constexpr std::uintptr_t NavLinkBlockers = 0x1490;
            static constexpr std::uintptr_t PathEstimators = 0x14B0;
            static constexpr std::uintptr_t InescapableZones = 0x14C0;
            static constexpr std::uintptr_t bAllowAutoRebuild = 0x14D0;
            static constexpr std::uintptr_t bGenerateWallClimbLinks = 0x14D0;
            static constexpr std::uintptr_t bRebuildOnInitialUnlock = 0x14D0;
            static constexpr std::uintptr_t bUseJumpLinkActors = 0x14D0;
            static constexpr std::uintptr_t bUseStaticMeshLinks = 0x14D0;
            static constexpr std::uintptr_t bUseStaticWorldLinksDown = 0x14D0;
            static constexpr std::uintptr_t bUseStaticWorldLinksUp = 0x14D0;
            static constexpr std::uintptr_t bUsesStreamedInNavLevel = 0x14D0;
            static constexpr std::uintptr_t bGenerateClamberLinks = 0x14D1;
            static constexpr std::uintptr_t bGenerateHurdleLinks = 0x14D1;
            static constexpr std::uintptr_t UndermineHorizontalTileLimit = 0x14D4;
            static constexpr std::uintptr_t UndermineVerticalTileLimit = 0x14D8;
            static constexpr std::uintptr_t DirtyAreasUpdateFreqInactive = 0x14DC;
            static constexpr std::uintptr_t NavGraphData = 0x1578;
            static constexpr std::uintptr_t CompositePathGoals = 0x1580;
            static constexpr std::uintptr_t AtlasCells = 0x1590;
            static constexpr std::uintptr_t MetaNavCachedAreas = 0x15B8;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"DefaultSmashableArea", 0x13D0, "SoftClassProperty"},
            {"JumpDownArea", 0x13F0, "SoftClassProperty"},
            {"JumpDownSmashableArea", 0x1410, "SoftClassProperty"},
            {"JumpDownSmashableArea2", 0x1430, "SoftClassProperty"},
            {"JumpDownSmashableArea3", 0x1450, "SoftClassProperty"},
            {"LinkGlobalProxies", 0x1470, "ArrayProperty"},
            {"NamedNavmeshes", 0x1480, "ArrayProperty"},
            {"NavLinkBlockers", 0x1490, "ArrayProperty"},
            {"PathEstimators", 0x14B0, "ArrayProperty"},
            {"InescapableZones", 0x14C0, "ArrayProperty"},
            {"bAllowAutoRebuild", 0x14D0, "BoolProperty"},
            {"bGenerateWallClimbLinks", 0x14D0, "BoolProperty"},
            {"bRebuildOnInitialUnlock", 0x14D0, "BoolProperty"},
            {"bUseJumpLinkActors", 0x14D0, "BoolProperty"},
            {"bUseStaticMeshLinks", 0x14D0, "BoolProperty"},
            {"bUseStaticWorldLinksDown", 0x14D0, "BoolProperty"},
            {"bUseStaticWorldLinksUp", 0x14D0, "BoolProperty"},
            {"bUsesStreamedInNavLevel", 0x14D0, "BoolProperty"},
            {"bGenerateClamberLinks", 0x14D1, "BoolProperty"},
            {"bGenerateHurdleLinks", 0x14D1, "BoolProperty"},
            {"UndermineHorizontalTileLimit", 0x14D4, "IntProperty"},
            {"UndermineVerticalTileLimit", 0x14D8, "IntProperty"},
            {"DirtyAreasUpdateFreqInactive", 0x14DC, "FloatProperty"},
            {"NavGraphData", 0x1578, "ObjectProperty"},
            {"CompositePathGoals", 0x1580, "ArrayProperty"},
            {"AtlasCells", 0x1590, "ArrayProperty"},
            {"MetaNavCachedAreas", 0x15B8, "ArrayProperty"},
        }};
    };

    struct FortNavSystemConfig
    {
        static constexpr std::string_view Name = "FortNavSystemConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavigationSystemModuleConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t bAllowAutoRebuild = 0x58;
            static constexpr std::uintptr_t bRebuildOnInitialUnlock = 0x58;
            static constexpr std::uintptr_t bUsesStreamedInNavLevel = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bAllowAutoRebuild", 0x58, "BoolProperty"},
            {"bRebuildOnInitialUnlock", 0x58, "BoolProperty"},
            {"bUsesStreamedInNavLevel", 0x58, "BoolProperty"},
        }};
    };

    struct FortNavigationFilter
    {
        static constexpr std::string_view Name = "FortNavigationFilter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavigationQueryFilter";
        struct Offsets
        {
            static constexpr std::uintptr_t Areas = 0x28;
            static constexpr std::uintptr_t IncludeFlags = 0x38;
            static constexpr std::uintptr_t ExcludeFlags = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Areas", 0x28, "ArrayProperty"},
            {"IncludeFlags", 0x38, "StructProperty"},
            {"ExcludeFlags", 0x3C, "StructProperty"},
        }};
    };

    struct FortNavigationFilter_Hunting
    {
        static constexpr std::string_view Name = "FortNavigationFilter_Hunting";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavigationMetaFilter";
        struct Offsets
        {
            static constexpr std::uintptr_t Areas = 0x28;
            static constexpr std::uintptr_t IncludeFlags = 0x38;
            static constexpr std::uintptr_t ExcludeFlags = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Areas", 0x28, "ArrayProperty"},
            {"IncludeFlags", 0x38, "StructProperty"},
            {"ExcludeFlags", 0x3C, "StructProperty"},
        }};
    };

    struct FortNavigationFilter_IgnoreSmashingCost
    {
        static constexpr std::string_view Name = "FortNavigationFilter_IgnoreSmashingCost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavigationFilter";
        struct Offsets
        {
            static constexpr std::uintptr_t Areas = 0x28;
            static constexpr std::uintptr_t IncludeFlags = 0x38;
            static constexpr std::uintptr_t ExcludeFlags = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Areas", 0x28, "ArrayProperty"},
            {"IncludeFlags", 0x38, "StructProperty"},
            {"ExcludeFlags", 0x3C, "StructProperty"},
        }};
    };

    struct FortNavigationFilter_Leash
    {
        static constexpr std::string_view Name = "FortNavigationFilter_Leash";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavigationFilter";
        struct Offsets
        {
            static constexpr std::uintptr_t Areas = 0x28;
            static constexpr std::uintptr_t IncludeFlags = 0x38;
            static constexpr std::uintptr_t ExcludeFlags = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Areas", 0x28, "ArrayProperty"},
            {"IncludeFlags", 0x38, "StructProperty"},
            {"ExcludeFlags", 0x3C, "StructProperty"},
        }};
    };

    struct FortNavigationFilter_NoSmashing
    {
        static constexpr std::string_view Name = "FortNavigationFilter_NoSmashing";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavigationFilter";
        struct Offsets
        {
            static constexpr std::uintptr_t Areas = 0x28;
            static constexpr std::uintptr_t IncludeFlags = 0x38;
            static constexpr std::uintptr_t ExcludeFlags = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Areas", 0x28, "ArrayProperty"},
            {"IncludeFlags", 0x38, "StructProperty"},
            {"ExcludeFlags", 0x3C, "StructProperty"},
        }};
    };

    struct FortNavigationFilter_NoSmashingIncludeLow
    {
        static constexpr std::string_view Name = "FortNavigationFilter_NoSmashingIncludeLow";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavigationQueryFilter";
        struct Offsets
        {
            static constexpr std::uintptr_t Areas = 0x28;
            static constexpr std::uintptr_t IncludeFlags = 0x38;
            static constexpr std::uintptr_t ExcludeFlags = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Areas", 0x28, "ArrayProperty"},
            {"IncludeFlags", 0x38, "StructProperty"},
            {"ExcludeFlags", 0x3C, "StructProperty"},
        }};
    };

    struct FortNavigationFilter_TetherZone
    {
        static constexpr std::string_view Name = "FortNavigationFilter_TetherZone";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavigationFilter";
        struct Offsets
        {
            static constexpr std::uintptr_t Areas = 0x28;
            static constexpr std::uintptr_t IncludeFlags = 0x38;
            static constexpr std::uintptr_t ExcludeFlags = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Areas", 0x28, "ArrayProperty"},
            {"IncludeFlags", 0x38, "StructProperty"},
            {"ExcludeFlags", 0x3C, "StructProperty"},
        }};
    };

    struct FortNavigationGraph
    {
        static constexpr std::string_view Name = "FortNavigationGraph";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavigationData";
        struct Offsets
        {
            static constexpr std::uintptr_t RenderingComp = 0x280;
            static constexpr std::uintptr_t NavDataConfig = 0x288;
            static constexpr std::uintptr_t bAutoDestroyWhenNoNavigation = 0x2F8;
            static constexpr std::uintptr_t bCanBeMainNavData = 0x2F8;
            static constexpr std::uintptr_t bCanSpawnOnRebuild = 0x2F8;
            static constexpr std::uintptr_t bEnableDrawing = 0x2F8;
            static constexpr std::uintptr_t bForceRebuildOnLoad = 0x2F8;
            static constexpr std::uintptr_t bRebuildAtRuntime = 0x2F8;
            static constexpr std::uintptr_t RuntimeGeneration = 0x2FC;
            static constexpr std::uintptr_t ObservedPathsTickInterval = 0x304;
            static constexpr std::uintptr_t DataVersion = 0x308;
            static constexpr std::uintptr_t SupportedAreas = 0x3E0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"RenderingComp", 0x280, "ObjectProperty"},
            {"NavDataConfig", 0x288, "StructProperty"},
            {"bAutoDestroyWhenNoNavigation", 0x2F8, "BoolProperty"},
            {"bCanBeMainNavData", 0x2F8, "BoolProperty"},
            {"bCanSpawnOnRebuild", 0x2F8, "BoolProperty"},
            {"bEnableDrawing", 0x2F8, "BoolProperty"},
            {"bForceRebuildOnLoad", 0x2F8, "BoolProperty"},
            {"bRebuildAtRuntime", 0x2F8, "BoolProperty"},
            {"RuntimeGeneration", 0x2FC, "EnumProperty"},
            {"ObservedPathsTickInterval", 0x304, "FloatProperty"},
            {"DataVersion", 0x308, "UInt32Property"},
            {"SupportedAreas", 0x3E0, "ArrayProperty"},
        }};
    };

    struct FortNavigationMetaFilter
    {
        static constexpr std::string_view Name = "FortNavigationMetaFilter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavigationQueryFilter";
        struct Offsets
        {
            static constexpr std::uintptr_t Areas = 0x28;
            static constexpr std::uintptr_t IncludeFlags = 0x38;
            static constexpr std::uintptr_t ExcludeFlags = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Areas", 0x28, "ArrayProperty"},
            {"IncludeFlags", 0x38, "StructProperty"},
            {"ExcludeFlags", 0x3C, "StructProperty"},
        }};
    };

    struct FortNavigationRequirementProvider
    {
        static constexpr std::string_view Name = "FortNavigationRequirementProvider";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortPathCostEstimator
    {
        static constexpr std::string_view Name = "FortPathCostEstimator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t GoalActorWeak = 0x28;
            static constexpr std::uintptr_t NavGraph = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"GoalActorWeak", 0x28, "WeakObjectProperty"},
            {"NavGraph", 0x30, "ObjectProperty"},
        }};
    };

    struct FortPathFollowingComponent
    {
        static constexpr std::string_view Name = "FortPathFollowingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPathFollowingComponentBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MyAI = 0x3B8;
            static constexpr std::uintptr_t OnAIMoveBlockedEvent = 0x3E0;
            static constexpr std::uintptr_t MovementBlockFrustrationCooldownSpeed = 0x3F0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"MyAI", 0x3B8, "ObjectProperty"},
            {"OnAIMoveBlockedEvent", 0x3E0, "MulticastInlineDelegateProperty"},
            {"MovementBlockFrustrationCooldownSpeed", 0x3F0, "FloatProperty"},
        }};
    };

    struct FortPathFollowingComponentBase
    {
        static constexpr std::string_view Name = "FortPathFollowingComponentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CrowdFollowingComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AIController = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AIController", 0x380, "ObjectProperty"},
        }};
    };

    struct FortPatrolWardInterface
    {
        static constexpr std::string_view Name = "FortPatrolWardInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortPawnComponent_AIBotPingCommand
    {
        static constexpr std::string_view Name = "FortPawnComponent_AIBotPingCommand";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent_PingCommand";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedOwnerController = 0x1E0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedOwnerController", 0x1E0, "ObjectProperty"},
        }};
    };

    struct FortPawnComponent_AIConvoy
    {
        static constexpr std::string_view Name = "FortPawnComponent_AIConvoy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bCanBeConvoyLeader = 0xC8;
            static constexpr std::uintptr_t LeaderPriority = 0xCC;
            static constexpr std::uintptr_t ConvoyID = 0xD0;
            static constexpr std::uintptr_t CachedAIServiceConvoy = 0xD8;
            static constexpr std::uintptr_t CachedAIGroup = 0xE0;
            static constexpr std::uintptr_t Formation = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"bCanBeConvoyLeader", 0xC8, "BoolProperty"},
            {"LeaderPriority", 0xCC, "IntProperty"},
            {"ConvoyID", 0xD0, "IntProperty"},
            {"CachedAIServiceConvoy", 0xD8, "ObjectProperty"},
            {"CachedAIGroup", 0xE0, "ObjectProperty"},
            {"Formation", 0xE8, "StructProperty"},
        }};
    };

    struct FortPawnComponent_AICustomEffects
    {
        static constexpr std::string_view Name = "FortPawnComponent_AICustomEffects";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomEffects = 0xC0;
            static constexpr std::uintptr_t TrackedFXComponent = 0xD0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CustomEffects", 0xC0, "ArrayProperty"},
            {"TrackedFXComponent", 0xD0, "ArrayProperty"},
        }};
    };

    struct FortPawnComponent_AIEnergy
    {
        static constexpr std::string_view Name = "FortPawnComponent_AIEnergy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxEnergy = 0xC8;
            static constexpr std::uintptr_t CurrentEnergy = 0xF0;
            static constexpr std::uintptr_t CurrentMaxEnergy = 0xF4;
            static constexpr std::uintptr_t EnergyOverTimeArray = 0xF8;
            static constexpr std::uintptr_t OnEnergyDepleted = 0x108;
            static constexpr std::uintptr_t OnEnergyNoLongerDepleted = 0x118;
            static constexpr std::uintptr_t EnergyThresholdEventArray = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"MaxEnergy", 0xC8, "StructProperty"},
            {"CurrentEnergy", 0xF0, "FloatProperty"},
            {"CurrentMaxEnergy", 0xF4, "FloatProperty"},
            {"EnergyOverTimeArray", 0xF8, "ArrayProperty"},
            {"OnEnergyDepleted", 0x108, "MulticastInlineDelegateProperty"},
            {"OnEnergyNoLongerDepleted", 0x118, "MulticastInlineDelegateProperty"},
            {"EnergyThresholdEventArray", 0x128, "ArrayProperty"},
        }};
    };

    struct FortPawnComponent_AIFormation
    {
        static constexpr std::string_view Name = "FortPawnComponent_AIFormation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Slots = 0xC8;
            static constexpr std::uintptr_t MaxDistanceFromSlotToSprint = 0xD8;
            static constexpr std::uintptr_t MinDistanceFromSlotToStopSprint = 0xDC;
            static constexpr std::uintptr_t MaxDistanceFromSlotToStopFollowing = 0xE0;
            static constexpr std::uintptr_t MaxDistanceForLeaderToWait = 0xE4;
            static constexpr std::uintptr_t DistanceToStartMoving = 0xE8;
            static constexpr std::uintptr_t RuntimeSlots = 0xF0;
            static constexpr std::uintptr_t MaxDistanceFromSlotToSprintSqr = 0x100;
            static constexpr std::uintptr_t MinDistanceFromSlotToStopSprintTransient = 0x104;
            static constexpr std::uintptr_t MaxDistanceFromSlotToStopFollowingTransient = 0x108;
            static constexpr std::uintptr_t MaxDistanceForLeaderToWaitSqr = 0x10C;
            static constexpr std::uintptr_t DistanceToStartMovingSqr = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"Slots", 0xC8, "ArrayProperty"},
            {"MaxDistanceFromSlotToSprint", 0xD8, "FloatProperty"},
            {"MinDistanceFromSlotToStopSprint", 0xDC, "FloatProperty"},
            {"MaxDistanceFromSlotToStopFollowing", 0xE0, "FloatProperty"},
            {"MaxDistanceForLeaderToWait", 0xE4, "FloatProperty"},
            {"DistanceToStartMoving", 0xE8, "FloatProperty"},
            {"RuntimeSlots", 0xF0, "ArrayProperty"},
            {"MaxDistanceFromSlotToSprintSqr", 0x100, "FloatProperty"},
            {"MinDistanceFromSlotToStopSprintTransient", 0x104, "FloatProperty"},
            {"MaxDistanceFromSlotToStopFollowingTransient", 0x108, "FloatProperty"},
            {"MaxDistanceForLeaderToWaitSqr", 0x10C, "FloatProperty"},
            {"DistanceToStartMovingSqr", 0x110, "FloatProperty"},
        }};
    };

    struct FortPawnComponent_AIGroup
    {
        static constexpr std::string_view Name = "FortPawnComponent_AIGroup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bCanBeGroupLeader = 0xC8;
            static constexpr std::uintptr_t bCanFollowGroupLeader = 0xC9;
            static constexpr std::uintptr_t LeaderPriority = 0xCC;
            static constexpr std::uintptr_t GroupID = 0xD0;
            static constexpr std::uintptr_t CachedAIServiceGroup = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bCanBeGroupLeader", 0xC8, "BoolProperty"},
            {"bCanFollowGroupLeader", 0xC9, "BoolProperty"},
            {"LeaderPriority", 0xCC, "IntProperty"},
            {"GroupID", 0xD0, "IntProperty"},
            {"CachedAIServiceGroup", 0xD8, "ObjectProperty"},
        }};
    };

    struct FortPawnComponent_AIInventoryManagement
    {
        static constexpr std::string_view Name = "FortPawnComponent_AIInventoryManagement";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CanEquipItemTags = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CanEquipItemTags", 0xC8, "StructProperty"},
        }};
    };

    struct FortPawnComponent_AIJump
    {
        static constexpr std::string_view Name = "FortPawnComponent_AIJump";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t UpAction = 0x11A;
            static constexpr std::uintptr_t DownAction = 0x11B;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"UpAction", 0x11A, "EnumProperty"},
            {"DownAction", 0x11B, "EnumProperty"},
        }};
    };

    struct FortPawnComponent_AIPatrol
    {
        static constexpr std::string_view Name = "FortPawnComponent_AIPatrol";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PatrolStateTag = 0xC8;
            static constexpr std::uintptr_t CurrentTraversalEmote = 0xE8;
            static constexpr std::uintptr_t bIsPatrolling = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PatrolStateTag", 0xC8, "StructProperty"},
            {"CurrentTraversalEmote", 0xE8, "ObjectProperty"},
            {"bIsPatrolling", 0xF0, "BoolProperty"},
        }};
    };

    struct FortPawnComponent_AlertLevel
    {
        static constexpr std::string_view Name = "FortPawnComponent_AlertLevel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnAlertLevelDynamicChangeEvent = 0xC8;
            static constexpr std::uintptr_t CurrentAlertLevel = 0x108;
            static constexpr std::uintptr_t LastKnownPosition = 0x110;
            static constexpr std::uintptr_t LastKnownPositionType = 0x128;
            static constexpr std::uintptr_t LastKnownPositionTime = 0x12C;
            static constexpr std::uintptr_t CachedAIGoalComponent = 0x130;
            static constexpr std::uintptr_t CachedAIPerceptionComponent = 0x138;
            static constexpr std::uintptr_t AlertnessThreshold_Suspicious = 0x140;
            static constexpr std::uintptr_t AlertnessThreshold_Threatened = 0x144;
            static constexpr std::uintptr_t StimulusEffects = 0x148;
            static constexpr std::uintptr_t StimulusHandles = 0x158;
            static constexpr std::uintptr_t DecayEffect = 0x168;
            static constexpr std::uintptr_t DecayHandle = 0x170;
            static constexpr std::uintptr_t CachedAbilitySystemComponent = 0x184;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"OnAlertLevelDynamicChangeEvent", 0xC8, "MulticastInlineDelegateProperty"},
            {"CurrentAlertLevel", 0x108, "EnumProperty"},
            {"LastKnownPosition", 0x110, "StructProperty"},
            {"LastKnownPositionType", 0x128, "EnumProperty"},
            {"LastKnownPositionTime", 0x12C, "FloatProperty"},
            {"CachedAIGoalComponent", 0x130, "WeakObjectProperty"},
            {"CachedAIPerceptionComponent", 0x138, "WeakObjectProperty"},
            {"AlertnessThreshold_Suspicious", 0x140, "FloatProperty"},
            {"AlertnessThreshold_Threatened", 0x144, "FloatProperty"},
            {"StimulusEffects", 0x148, "MapProperty"},
            {"StimulusHandles", 0x158, "MapProperty"},
            {"DecayEffect", 0x168, "ClassProperty"},
            {"DecayHandle", 0x170, "StructProperty"},
            {"CachedAbilitySystemComponent", 0x184, "WeakObjectProperty"},
        }};
    };

    struct FortPawnComponent_BarkComponent
    {
        static constexpr std::string_view Name = "FortPawnComponent_BarkComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SoftChooserTable = 0xD0;
            static constexpr std::uintptr_t ChooserTable = 0xF0;
            static constexpr std::uintptr_t CurrentBarkPriority = 0xF8;
            static constexpr std::uintptr_t CurrentBarkEndTimestamp = 0xFC;
            static constexpr std::uintptr_t bUsePrioritizationService = 0x120;
            static constexpr std::uintptr_t CooldownSettings = 0x124;
            static constexpr std::uintptr_t ActiveRequestID = 0x128;
            static constexpr std::uintptr_t ActiveBarkTag = 0x12C;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SoftChooserTable", 0xD0, "SoftObjectProperty"},
            {"ChooserTable", 0xF0, "ObjectProperty"},
            {"CurrentBarkPriority", 0xF8, "FloatProperty"},
            {"CurrentBarkEndTimestamp", 0xFC, "FloatProperty"},
            {"bUsePrioritizationService", 0x120, "BoolProperty"},
            {"CooldownSettings", 0x124, "StructProperty"},
            {"ActiveRequestID", 0x128, "StructProperty"},
            {"ActiveBarkTag", 0x12C, "StructProperty"},
        }};
    };

    struct FortPawnComponent_LookAt
    {
        static constexpr std::string_view Name = "FortPawnComponent_LookAt";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentTarget = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CurrentTarget", 0xC8, "WeakObjectProperty"},
        }};
    };

    struct FortPawnComponent_PingCommand
    {
        static constexpr std::string_view Name = "FortPawnComponent_PingCommand";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PingInfo = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PingInfo", 0xC8, "StructProperty"},
        }};
    };

    struct FortPawnComponent_Sleep
    {
        static constexpr std::string_view Name = "FortPawnComponent_Sleep";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnBeginSleepEffects = 0xC8;
            static constexpr std::uintptr_t OnEndSleepEffects = 0xD8;
            static constexpr std::uintptr_t bCanSleep = 0x118;
            static constexpr std::uintptr_t bIsSleeping = 0x118;
            static constexpr std::uintptr_t bShouldStartSleeping = 0x118;
            static constexpr std::uintptr_t SleepForTheseGoalActorsQuery = 0x120;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OnBeginSleepEffects", 0xC8, "MulticastInlineDelegateProperty"},
            {"OnEndSleepEffects", 0xD8, "MulticastInlineDelegateProperty"},
            {"bCanSleep", 0x118, "BoolProperty"},
            {"bIsSleeping", 0x118, "BoolProperty"},
            {"bShouldStartSleeping", 0x118, "BoolProperty"},
            {"SleepForTheseGoalActorsQuery", 0x120, "StructProperty"},
        }};
    };

    struct FortPawnComponent_StepAside
    {
        static constexpr std::string_view Name = "FortPawnComponent_StepAside";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
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

    struct FortPhysicsObjectNavRelevancyInterface
    {
        static constexpr std::string_view Name = "FortPhysicsObjectNavRelevancyInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortPhysicsObjectNavigationComponent
    {
        static constexpr std::string_view Name = "FortPhysicsObjectNavigationComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavModifierComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PhysicsObjectComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PhysicsObjectComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct FortPlacedPawnMarker
    {
        static constexpr std::string_view Name = "FortPlacedPawnMarker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavigationObjectBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CapsuleComponent = 0x280;
            static constexpr std::uintptr_t GoodSprite = 0x288;
            static constexpr std::uintptr_t BadSprite = 0x290;
            static constexpr std::uintptr_t bIsPIEPlayerStart = 0x298;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CapsuleComponent", 0x280, "ObjectProperty"},
            {"GoodSprite", 0x288, "ObjectProperty"},
            {"BadSprite", 0x290, "ObjectProperty"},
            {"bIsPIEPlayerStart", 0x298, "BoolProperty"},
        }};
    };

    struct FortPlayerStateComponent_ClientAITracker
    {
        static constexpr std::string_view Name = "FortPlayerStateComponent_ClientAITracker";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableReplication = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bEnableReplication", 0xC8, "BoolProperty"},
        }};
    };

    struct FortPredictedMovementTeleportComponent
    {
        static constexpr std::string_view Name = "FortPredictedMovementTeleportComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortTeleportComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bUsePrediction = 0x140;
            static constexpr std::uintptr_t PredictionSettings = 0x144;
            static constexpr std::uintptr_t bDrawDebug = 0x160;
            static constexpr std::uintptr_t DebugDrawLifetime = 0x164;
            static constexpr std::uintptr_t DebugStringLifetime = 0x168;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bUsePrediction", 0x140, "BoolProperty"},
            {"PredictionSettings", 0x144, "StructProperty"},
            {"bDrawDebug", 0x160, "BoolProperty"},
            {"DebugDrawLifetime", 0x164, "FloatProperty"},
            {"DebugStringLifetime", 0x168, "FloatProperty"},
        }};
    };

    struct FortQueryContext_WorldLocationParam
    {
        static constexpr std::string_view Name = "FortQueryContext_WorldLocationParam";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryContext";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryItemType_DefendSpot
    {
        static constexpr std::string_view Name = "FortQueryItemType_DefendSpot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryItemType_VectorBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryItemType_Goal
    {
        static constexpr std::string_view Name = "FortQueryItemType_Goal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "EnvQueryItemType_ActorBase";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortQueryTwoPointSolver
    {
        static constexpr std::string_view Name = "FortQueryTwoPointSolver";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t QueryPointA = 0x28;
            static constexpr std::uintptr_t QueryPointB = 0x30;
            static constexpr std::uintptr_t QueryParamsA = 0x38;
            static constexpr std::uintptr_t QueryParamsB = 0x48;
            static constexpr std::uintptr_t OnFinished = 0x58;
            static constexpr std::uintptr_t OnFailed = 0x68;
            static constexpr std::uintptr_t RotationMode = 0x78;
            static constexpr std::uintptr_t MinRotationOffset = 0x80;
            static constexpr std::uintptr_t MaxRotationOffset = 0x98;
            static constexpr std::uintptr_t bUseNegativeAngleOffsets = 0xB0;
            static constexpr std::uintptr_t bUsePositiveAngleOffsets = 0xB0;
            static constexpr std::uintptr_t AISys = 0x130;
            static constexpr std::uintptr_t CachedQuerier = 0x138;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"QueryPointA", 0x28, "ObjectProperty"},
            {"QueryPointB", 0x30, "ObjectProperty"},
            {"QueryParamsA", 0x38, "ArrayProperty"},
            {"QueryParamsB", 0x48, "ArrayProperty"},
            {"OnFinished", 0x58, "MulticastInlineDelegateProperty"},
            {"OnFailed", 0x68, "MulticastInlineDelegateProperty"},
            {"RotationMode", 0x78, "EnumProperty"},
            {"MinRotationOffset", 0x80, "StructProperty"},
            {"MaxRotationOffset", 0x98, "StructProperty"},
            {"bUseNegativeAngleOffsets", 0xB0, "BoolProperty"},
            {"bUsePositiveAngleOffsets", 0xB0, "BoolProperty"},
            {"AISys", 0x130, "ObjectProperty"},
            {"CachedQuerier", 0x138, "ObjectProperty"},
        }};
    };

    struct FortRiftBlockerComponent
    {
        static constexpr std::string_view Name = "FortRiftBlockerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BoxComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bStartActive = 0x5A0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bStartActive", 0x5A0, "BoolProperty"},
        }};
    };

    struct FortSmartObjectActorNPCInterface
    {
        static constexpr std::string_view Name = "FortSmartObjectActorNPCInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct FortSpawnPointsPercentageCurveSequence
    {
        static constexpr std::string_view Name = "FortSpawnPointsPercentageCurveSequence";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnPointsPercentageCurves = 0x28;
            static constexpr std::uintptr_t SequenceType = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpawnPointsPercentageCurves", 0x28, "ArrayProperty"},
            {"SequenceType", 0x38, "ByteProperty"},
        }};
    };

    struct FortStaticMeshLinkComponent
    {
        static constexpr std::string_view Name = "FortStaticMeshLinkComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavRelevantComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bAttachToOwnersRoot = 0x100;
            static constexpr std::uintptr_t CachedNavParent = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bAttachToOwnersRoot", 0x100, "BoolProperty"},
            {"CachedNavParent", 0x108, "ObjectProperty"},
        }};
    };

    struct FortTeleportComponent
    {
        static constexpr std::string_view Name = "FortTeleportComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CheckTeleportConditionsTimeInterval = 0xC8;
            static constexpr std::uintptr_t TeleportAbilityTag = 0xF0;
            static constexpr std::uintptr_t Conditions = 0xF8;
            static constexpr std::uintptr_t TriggerGaugePercentage = 0x108;
            static constexpr std::uintptr_t GaugeExpirationSeconds = 0x10C;
            static constexpr std::uintptr_t GaugeDecaySeconds = 0x110;
            static constexpr std::uintptr_t TrackedTargets = 0x118;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CheckTeleportConditionsTimeInterval", 0xC8, "StructProperty"},
            {"TeleportAbilityTag", 0xF0, "StructProperty"},
            {"Conditions", 0xF8, "ArrayProperty"},
            {"TriggerGaugePercentage", 0x108, "FloatProperty"},
            {"GaugeExpirationSeconds", 0x10C, "FloatProperty"},
            {"GaugeDecaySeconds", 0x110, "FloatProperty"},
            {"TrackedTargets", 0x118, "ArrayProperty"},
        }};
    };

    struct FortThreatVisualsManager
    {
        static constexpr std::string_view Name = "FortThreatVisualsManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t CloudBlueprint = 0x280;
            static constexpr std::uintptr_t CloudRadius = 0x288;
            static constexpr std::uintptr_t ThreatBoxVolumeTopPadding = 0x28C;
            static constexpr std::uintptr_t ThreatBoxVolumeBottomPadding = 0x290;
            static constexpr std::uintptr_t bUseLocalPlayersOnlyForCloudMinimumHeight = 0x294;
            static constexpr std::uintptr_t bHideClouds = 0x295;
            static constexpr std::uintptr_t CloudMinimumHeightAbovePlayers = 0x298;
            static constexpr std::uintptr_t CloudMinimumHeightAboveGround = 0x29C;
            static constexpr std::uintptr_t CloudMinimumAltitude = 0x2A0;
            static constexpr std::uintptr_t CloudMaxVerticalDelta = 0x2A4;
            static constexpr std::uintptr_t CloudMinSpeed = 0x2A8;
            static constexpr std::uintptr_t CloudMaxSpeed = 0x2AC;
            static constexpr std::uintptr_t StormWindCloudRadius = 0x2B0;
            static constexpr std::uintptr_t StormWindGoalRadius = 0x2B4;
            static constexpr std::uintptr_t StormWindFalloffRadius = 0x2B8;
            static constexpr std::uintptr_t StormWindInactiveMagnitude = 0x2BC;
            static constexpr std::uintptr_t StormWindActiveMagnitude = 0x2C0;
            static constexpr std::uintptr_t StormWindDesiredDeltaBlendTime = 0x2C4;
            static constexpr std::uintptr_t StormWindDirectionAdditionalAngle = 0x2C8;
            static constexpr std::uintptr_t ThreatLocations = 0x2D0;
            static constexpr std::uintptr_t StormWindArray = 0x328;
            static constexpr std::uintptr_t GoalActorLocations = 0x380;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"CloudBlueprint", 0x280, "ClassProperty"},
            {"CloudRadius", 0x288, "FloatProperty"},
            {"ThreatBoxVolumeTopPadding", 0x28C, "FloatProperty"},
            {"ThreatBoxVolumeBottomPadding", 0x290, "FloatProperty"},
            {"bUseLocalPlayersOnlyForCloudMinimumHeight", 0x294, "BoolProperty"},
            {"bHideClouds", 0x295, "BoolProperty"},
            {"CloudMinimumHeightAbovePlayers", 0x298, "FloatProperty"},
            {"CloudMinimumHeightAboveGround", 0x29C, "FloatProperty"},
            {"CloudMinimumAltitude", 0x2A0, "FloatProperty"},
            {"CloudMaxVerticalDelta", 0x2A4, "FloatProperty"},
            {"CloudMinSpeed", 0x2A8, "FloatProperty"},
            {"CloudMaxSpeed", 0x2AC, "FloatProperty"},
            {"StormWindCloudRadius", 0x2B0, "FloatProperty"},
            {"StormWindGoalRadius", 0x2B4, "FloatProperty"},
            {"StormWindFalloffRadius", 0x2B8, "FloatProperty"},
            {"StormWindInactiveMagnitude", 0x2BC, "FloatProperty"},
            {"StormWindActiveMagnitude", 0x2C0, "FloatProperty"},
            {"StormWindDesiredDeltaBlendTime", 0x2C4, "FloatProperty"},
            {"StormWindDirectionAdditionalAngle", 0x2C8, "FloatProperty"},
            {"ThreatLocations", 0x2D0, "StructProperty"},
            {"StormWindArray", 0x328, "StructProperty"},
            {"GoalActorLocations", 0x380, "ArrayProperty"},
        }};
    };

    struct FortZiplineLinkComponent
    {
        static constexpr std::string_view Name = "FortZiplineLinkComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavLinkCustomComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t LinkOffsetFromSplineStart = 0x208;
            static constexpr std::uintptr_t LinkOffsetFromSplineEnd = 0x220;
            static constexpr std::uintptr_t bOverrideSnapRadius = 0x238;
            static constexpr std::uintptr_t SnapRadiusOverride = 0x23C;
            static constexpr std::uintptr_t bOverrideSnapHeight = 0x240;
            static constexpr std::uintptr_t SnapHeightOverride = 0x244;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"LinkOffsetFromSplineStart", 0x208, "StructProperty"},
            {"LinkOffsetFromSplineEnd", 0x220, "StructProperty"},
            {"bOverrideSnapRadius", 0x238, "BoolProperty"},
            {"SnapRadiusOverride", 0x23C, "FloatProperty"},
            {"bOverrideSnapHeight", 0x240, "BoolProperty"},
            {"SnapHeightOverride", 0x244, "FloatProperty"},
        }};
    };

    struct IrwinAIController
    {
        static constexpr std::string_view Name = "IrwinAIController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaAIController";
        struct Offsets
        {
            static constexpr std::uintptr_t GoalActorDistancesNotifies = 0x5B8;
            static constexpr std::uintptr_t PrimaryMeleeAttackAbilityInstance = 0x610;
            static constexpr std::uintptr_t PrimaryRangedAttackAbilityInstance = 0x618;
            static constexpr std::uintptr_t NavWalkingSearchExtentScale = 0x620;
            static constexpr std::uintptr_t CheapFlyingNavPointHorizontalGridRatio = 0x638;
            static constexpr std::uintptr_t CheapFlyingNavNavPointVerticalGridRatio = 0x63C;
            static constexpr std::uintptr_t CheapFlyingNavSmashableAbilityTag = 0x640;
            static constexpr std::uintptr_t bAllowBacktrackPathfinding = 0x660;
            static constexpr std::uintptr_t bAutoAttackOnMovedHit = 0x660;
            static constexpr std::uintptr_t bAutoGenerateHotspotOnPlayerBuildings = 0x660;
            static constexpr std::uintptr_t bAutomaticallyChooseClosestTargetAsGoal = 0x660;
            static constexpr std::uintptr_t bEnableCheapFlyingNavigation = 0x660;
            static constexpr std::uintptr_t bIsGoalRequiredForBehavior = 0x660;
            static constexpr std::uintptr_t bRegisterToAthenaAIDropper = 0x661;
            static constexpr std::uintptr_t SecondaryGoalActor = 0x668;
            static constexpr std::uintptr_t AttackCheckInterval = 0x670;
            static constexpr std::uintptr_t MeleeAttackCheckDistance = 0x674;
            static constexpr std::uintptr_t RangedAttackCheckDistance = 0x678;
            static constexpr std::uintptr_t BacktrackingZThreshold = 0x67C;
            static constexpr std::uintptr_t bAllowBacktracking = 0x680;
            static constexpr std::uintptr_t bAllowPawnRVOWeightOverrides = 0x681;
            static constexpr std::uintptr_t AthenaPFC = 0x690;
        };

        inline static constexpr std::array<PropertyInfo, 22> Properties{{
            {"GoalActorDistancesNotifies", 0x5B8, "ArrayProperty"},
            {"PrimaryMeleeAttackAbilityInstance", 0x610, "ObjectProperty"},
            {"PrimaryRangedAttackAbilityInstance", 0x618, "ObjectProperty"},
            {"NavWalkingSearchExtentScale", 0x620, "StructProperty"},
            {"CheapFlyingNavPointHorizontalGridRatio", 0x638, "FloatProperty"},
            {"CheapFlyingNavNavPointVerticalGridRatio", 0x63C, "FloatProperty"},
            {"CheapFlyingNavSmashableAbilityTag", 0x640, "StructProperty"},
            {"bAllowBacktrackPathfinding", 0x660, "BoolProperty"},
            {"bAutoAttackOnMovedHit", 0x660, "BoolProperty"},
            {"bAutoGenerateHotspotOnPlayerBuildings", 0x660, "BoolProperty"},
            {"bAutomaticallyChooseClosestTargetAsGoal", 0x660, "BoolProperty"},
            {"bEnableCheapFlyingNavigation", 0x660, "BoolProperty"},
            {"bIsGoalRequiredForBehavior", 0x660, "BoolProperty"},
            {"bRegisterToAthenaAIDropper", 0x661, "BoolProperty"},
            {"SecondaryGoalActor", 0x668, "ObjectProperty"},
            {"AttackCheckInterval", 0x670, "FloatProperty"},
            {"MeleeAttackCheckDistance", 0x674, "FloatProperty"},
            {"RangedAttackCheckDistance", 0x678, "FloatProperty"},
            {"BacktrackingZThreshold", 0x67C, "FloatProperty"},
            {"bAllowBacktracking", 0x680, "BoolProperty"},
            {"bAllowPawnRVOWeightOverrides", 0x681, "BoolProperty"},
            {"AthenaPFC", 0x690, "ObjectProperty"},
        }};
    };

    struct JLargeNavMesh
    {
        static constexpr std::string_view Name = "JLargeNavMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaNavMesh";
        struct Offsets
        {
            static constexpr std::uintptr_t HotSpotPathfindingMaxSearchNodes = 0x638;
            static constexpr std::uintptr_t ShallowWaterTraceStartOffsetZ = 0x63C;
            static constexpr std::uintptr_t ShallowWaterTraceEndOffsetZ = 0x640;
            static constexpr std::uintptr_t MaximumTilesToProcessForWaterPerFrame = 0x644;
            static constexpr std::uintptr_t bSuspendNavmeshWhenNoAIUsersAlive = 0x648;
            static constexpr std::uintptr_t SerializedDirtyAreas = 0x650;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"HotSpotPathfindingMaxSearchNodes", 0x638, "IntProperty"},
            {"ShallowWaterTraceStartOffsetZ", 0x63C, "FloatProperty"},
            {"ShallowWaterTraceEndOffsetZ", 0x640, "FloatProperty"},
            {"MaximumTilesToProcessForWaterPerFrame", 0x644, "IntProperty"},
            {"bSuspendNavmeshWhenNoAIUsersAlive", 0x648, "BoolProperty"},
            {"SerializedDirtyAreas", 0x650, "ArrayProperty"},
        }};
    };

    struct JMediumLargeNavMesh
    {
        static constexpr std::string_view Name = "JMediumLargeNavMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaNavMesh";
        struct Offsets
        {
            static constexpr std::uintptr_t HotSpotPathfindingMaxSearchNodes = 0x638;
            static constexpr std::uintptr_t ShallowWaterTraceStartOffsetZ = 0x63C;
            static constexpr std::uintptr_t ShallowWaterTraceEndOffsetZ = 0x640;
            static constexpr std::uintptr_t MaximumTilesToProcessForWaterPerFrame = 0x644;
            static constexpr std::uintptr_t bSuspendNavmeshWhenNoAIUsersAlive = 0x648;
            static constexpr std::uintptr_t SerializedDirtyAreas = 0x650;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"HotSpotPathfindingMaxSearchNodes", 0x638, "IntProperty"},
            {"ShallowWaterTraceStartOffsetZ", 0x63C, "FloatProperty"},
            {"ShallowWaterTraceEndOffsetZ", 0x640, "FloatProperty"},
            {"MaximumTilesToProcessForWaterPerFrame", 0x644, "IntProperty"},
            {"bSuspendNavmeshWhenNoAIUsersAlive", 0x648, "BoolProperty"},
            {"SerializedDirtyAreas", 0x650, "ArrayProperty"},
        }};
    };

    struct JMediumNavHeightMapData
    {
        static constexpr std::string_view Name = "JMediumNavHeightMapData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortNavHeightMapData";
        struct Offsets
        {
            static constexpr std::uintptr_t OriginOffset = 0x438;
            static constexpr std::uintptr_t bDoFullyAsyncNavDataGathering = 0x450;
            static constexpr std::uintptr_t bFixedTilePoolSize = 0x450;
            static constexpr std::uintptr_t bIsWorldPartitioned = 0x450;
            static constexpr std::uintptr_t TilePoolSize = 0x454;
            static constexpr std::uintptr_t TileSizeUU = 0x458;
            static constexpr std::uintptr_t NavMeshResolutionParams = 0x45C;
            static constexpr std::uintptr_t AgentRadius = 0x480;
            static constexpr std::uintptr_t AgentHeight = 0x484;
            static constexpr std::uintptr_t DrawOffset = 0x488;
            static constexpr std::uintptr_t bDrawCells = 0x48C;
            static constexpr std::uintptr_t bDrawTileBounds = 0x48C;
            static constexpr std::uintptr_t bDrawTileEdges = 0x48C;
            static constexpr std::uintptr_t bDrawTileLabels = 0x48C;
            static constexpr std::uintptr_t DefaultMaxSearchNodes = 0x490;
            static constexpr std::uintptr_t HeuristicScale = 0x494;
            static constexpr std::uintptr_t TimeSliceLongDurationDebug = 0x498;
            static constexpr std::uintptr_t bUseExtraTopCellWhenMarkingAreas = 0x4A4;
            static constexpr std::uintptr_t bUseVirtualGeometryFilteringAndDirtying = 0x4A4;
            static constexpr std::uintptr_t InvokerTilePriorityBumpDistanceThresholdInTileUnits = 0x4A8;
            static constexpr std::uintptr_t InvokerTilePriorityBumpIncrease = 0x4AC;
            static constexpr std::uintptr_t MaxSimultaneousTileGenerationJobsCount = 0x4B0;
            static constexpr std::uintptr_t TileGenerationDebug = 0x4B4;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"OriginOffset", 0x438, "StructProperty"},
            {"bDoFullyAsyncNavDataGathering", 0x450, "BoolProperty"},
            {"bFixedTilePoolSize", 0x450, "BoolProperty"},
            {"bIsWorldPartitioned", 0x450, "BoolProperty"},
            {"TilePoolSize", 0x454, "IntProperty"},
            {"TileSizeUU", 0x458, "FloatProperty"},
            {"NavMeshResolutionParams", 0x45C, "StructProperty"},
            {"AgentRadius", 0x480, "FloatProperty"},
            {"AgentHeight", 0x484, "FloatProperty"},
            {"DrawOffset", 0x488, "FloatProperty"},
            {"bDrawCells", 0x48C, "BoolProperty"},
            {"bDrawTileBounds", 0x48C, "BoolProperty"},
            {"bDrawTileEdges", 0x48C, "BoolProperty"},
            {"bDrawTileLabels", 0x48C, "BoolProperty"},
            {"DefaultMaxSearchNodes", 0x490, "UInt32Property"},
            {"HeuristicScale", 0x494, "FloatProperty"},
            {"TimeSliceLongDurationDebug", 0x498, "DoubleProperty"},
            {"bUseExtraTopCellWhenMarkingAreas", 0x4A4, "BoolProperty"},
            {"bUseVirtualGeometryFilteringAndDirtying", 0x4A4, "BoolProperty"},
            {"InvokerTilePriorityBumpDistanceThresholdInTileUnits", 0x4A8, "UInt32Property"},
            {"InvokerTilePriorityBumpIncrease", 0x4AC, "ByteProperty"},
            {"MaxSimultaneousTileGenerationJobsCount", 0x4B0, "IntProperty"},
            {"TileGenerationDebug", 0x4B4, "StructProperty"},
        }};
    };

    struct JMediumNavMesh
    {
        static constexpr std::string_view Name = "JMediumNavMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaNavMesh";
        struct Offsets
        {
            static constexpr std::uintptr_t HotSpotPathfindingMaxSearchNodes = 0x638;
            static constexpr std::uintptr_t ShallowWaterTraceStartOffsetZ = 0x63C;
            static constexpr std::uintptr_t ShallowWaterTraceEndOffsetZ = 0x640;
            static constexpr std::uintptr_t MaximumTilesToProcessForWaterPerFrame = 0x644;
            static constexpr std::uintptr_t bSuspendNavmeshWhenNoAIUsersAlive = 0x648;
            static constexpr std::uintptr_t SerializedDirtyAreas = 0x650;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"HotSpotPathfindingMaxSearchNodes", 0x638, "IntProperty"},
            {"ShallowWaterTraceStartOffsetZ", 0x63C, "FloatProperty"},
            {"ShallowWaterTraceEndOffsetZ", 0x640, "FloatProperty"},
            {"MaximumTilesToProcessForWaterPerFrame", 0x644, "IntProperty"},
            {"bSuspendNavmeshWhenNoAIUsersAlive", 0x648, "BoolProperty"},
            {"SerializedDirtyAreas", 0x650, "ArrayProperty"},
        }};
    };

    struct JSmallNavMesh
    {
        static constexpr std::string_view Name = "JSmallNavMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaNavMesh";
        struct Offsets
        {
            static constexpr std::uintptr_t HotSpotPathfindingMaxSearchNodes = 0x638;
            static constexpr std::uintptr_t ShallowWaterTraceStartOffsetZ = 0x63C;
            static constexpr std::uintptr_t ShallowWaterTraceEndOffsetZ = 0x640;
            static constexpr std::uintptr_t MaximumTilesToProcessForWaterPerFrame = 0x644;
            static constexpr std::uintptr_t bSuspendNavmeshWhenNoAIUsersAlive = 0x648;
            static constexpr std::uintptr_t SerializedDirtyAreas = 0x650;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"HotSpotPathfindingMaxSearchNodes", 0x638, "IntProperty"},
            {"ShallowWaterTraceStartOffsetZ", 0x63C, "FloatProperty"},
            {"ShallowWaterTraceEndOffsetZ", 0x640, "FloatProperty"},
            {"MaximumTilesToProcessForWaterPerFrame", 0x644, "IntProperty"},
            {"bSuspendNavmeshWhenNoAIUsersAlive", 0x648, "BoolProperty"},
            {"SerializedDirtyAreas", 0x650, "ArrayProperty"},
        }};
    };

    struct JSmallNavMesh_Sprout
    {
        static constexpr std::string_view Name = "JSmallNavMesh_Sprout";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "JSmallNavMesh";
        struct Offsets
        {
            static constexpr std::uintptr_t HotSpotPathfindingMaxSearchNodes = 0x638;
            static constexpr std::uintptr_t ShallowWaterTraceStartOffsetZ = 0x63C;
            static constexpr std::uintptr_t ShallowWaterTraceEndOffsetZ = 0x640;
            static constexpr std::uintptr_t MaximumTilesToProcessForWaterPerFrame = 0x644;
            static constexpr std::uintptr_t bSuspendNavmeshWhenNoAIUsersAlive = 0x648;
            static constexpr std::uintptr_t SerializedDirtyAreas = 0x650;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"HotSpotPathfindingMaxSearchNodes", 0x638, "IntProperty"},
            {"ShallowWaterTraceStartOffsetZ", 0x63C, "FloatProperty"},
            {"ShallowWaterTraceEndOffsetZ", 0x640, "FloatProperty"},
            {"MaximumTilesToProcessForWaterPerFrame", 0x644, "IntProperty"},
            {"bSuspendNavmeshWhenNoAIUsersAlive", 0x648, "BoolProperty"},
            {"SerializedDirtyAreas", 0x650, "ArrayProperty"},
        }};
    };

    struct LevelTestingActorBase
    {
        static constexpr std::string_view Name = "LevelTestingActorBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryActorTick = 0x28;
            static constexpr std::uintptr_t bAlwaysRelevant = 0x58;
            static constexpr std::uintptr_t bCallPreReplication = 0x58;
            static constexpr std::uintptr_t bCallPreReplicationForReplay = 0x58;
            static constexpr std::uintptr_t bHidden = 0x58;
            static constexpr std::uintptr_t bNetTemporary = 0x58;
            static constexpr std::uintptr_t bOnlyRelevantToOwner = 0x58;
            static constexpr std::uintptr_t bReplicateMovement = 0x58;
            static constexpr std::uintptr_t bExchangedRoles = 0x59;
            static constexpr std::uintptr_t bForceNetAddressable = 0x59;
            static constexpr std::uintptr_t bNetLoadOnClient = 0x59;
            static constexpr std::uintptr_t bNetUseOwnerRelevancy = 0x59;
            static constexpr std::uintptr_t bRelevantForLevelBounds = 0x59;
            static constexpr std::uintptr_t bRelevantForNetworkReplays = 0x59;
            static constexpr std::uintptr_t bReplayRewindable = 0x59;
            static constexpr std::uintptr_t bTearOff = 0x59;
            static constexpr std::uintptr_t bAllowTickBeforeBeginPlay = 0x5A;
            static constexpr std::uintptr_t bAutoDestroyWhenFinished = 0x5A;
            static constexpr std::uintptr_t bBlockInput = 0x5A;
            static constexpr std::uintptr_t bCanBeDamaged = 0x5A;
            static constexpr std::uintptr_t bCollideWhenPlacing = 0x5A;
            static constexpr std::uintptr_t bFindCameraComponentWhenViewTarget = 0x5A;
            static constexpr std::uintptr_t bGenerateOverlapEventsDuringLevelStreaming = 0x5A;
            static constexpr std::uintptr_t bIgnoresOriginShifting = 0x5A;
            static constexpr std::uintptr_t bAllowReceiveTickEventOnDedicatedServer = 0x5B;
            static constexpr std::uintptr_t bCanBeInCluster = 0x5B;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x5B;
            static constexpr std::uintptr_t bIsEditorOnlyActor = 0x5B;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x5B;
            static constexpr std::uintptr_t bReplicates = 0x5B;
            static constexpr std::uintptr_t bActorEnableCollision = 0x5D;
            static constexpr std::uintptr_t bActorIsBeingDestroyed = 0x5D;
            static constexpr std::uintptr_t bAsyncPhysicsTickEnabled = 0x5D;
            static constexpr std::uintptr_t UpdateOverlapsMethodDuringLevelStreaming = 0x5E;
            static constexpr std::uintptr_t DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5F;
            static constexpr std::uintptr_t RemoteRole = 0x60;
            static constexpr std::uintptr_t InitialLifeSpan = 0x64;
            static constexpr std::uintptr_t CustomTimeDilation = 0x68;
            static constexpr std::uintptr_t RayTracingGroupId = 0x6C;
            static constexpr std::uintptr_t AttachmentReplication = 0x70;
            static constexpr std::uintptr_t ReplicatedMovement = 0xD0;
            static constexpr std::uintptr_t Owner = 0x158;
            static constexpr std::uintptr_t NetDriverName = 0x160;
            static constexpr std::uintptr_t Role = 0x164;
            static constexpr std::uintptr_t NetDormancy = 0x165;
            static constexpr std::uintptr_t SpawnCollisionHandlingMethod = 0x166;
            static constexpr std::uintptr_t AutoReceiveInput = 0x167;
            static constexpr std::uintptr_t InputPriority = 0x168;
            static constexpr std::uintptr_t InputComponent = 0x170;
            static constexpr std::uintptr_t NetTag = 0x178;
            static constexpr std::uintptr_t NetCullDistanceSquared = 0x17C;
            static constexpr std::uintptr_t NetUpdateFrequency = 0x180;
            static constexpr std::uintptr_t MinNetUpdateFrequency = 0x184;
            static constexpr std::uintptr_t NetPriority = 0x188;
            static constexpr std::uintptr_t PhysicsReplicationMode = 0x18C;
            static constexpr std::uintptr_t Instigator = 0x198;
            static constexpr std::uintptr_t Children = 0x1A0;
            static constexpr std::uintptr_t RootComponent = 0x1B0;
            static constexpr std::uintptr_t HLODLayer = 0x1C8;
            static constexpr std::uintptr_t Layers = 0x1D0;
            static constexpr std::uintptr_t ParentComponent = 0x1E0;
            static constexpr std::uintptr_t Tags = 0x1F8;
            static constexpr std::uintptr_t OnTakeAnyDamage = 0x208;
            static constexpr std::uintptr_t OnTakePointDamage = 0x209;
            static constexpr std::uintptr_t OnTakeRadialDamage = 0x20A;
            static constexpr std::uintptr_t OnActorBeginOverlap = 0x20B;
            static constexpr std::uintptr_t OnActorEndOverlap = 0x20C;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x20D;
            static constexpr std::uintptr_t OnEndCursorOver = 0x20E;
            static constexpr std::uintptr_t OnClicked = 0x20F;
            static constexpr std::uintptr_t OnReleased = 0x210;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x211;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x212;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x213;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x214;
            static constexpr std::uintptr_t OnActorHit = 0x215;
            static constexpr std::uintptr_t OnDestroyed = 0x216;
            static constexpr std::uintptr_t OnEndPlay = 0x217;
            static constexpr std::uintptr_t InstanceComponents = 0x258;
            static constexpr std::uintptr_t BlueprintCreatedComponents = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 80> Properties{{
            {"PrimaryActorTick", 0x28, "StructProperty"},
            {"bAlwaysRelevant", 0x58, "BoolProperty"},
            {"bCallPreReplication", 0x58, "BoolProperty"},
            {"bCallPreReplicationForReplay", 0x58, "BoolProperty"},
            {"bHidden", 0x58, "BoolProperty"},
            {"bNetTemporary", 0x58, "BoolProperty"},
            {"bOnlyRelevantToOwner", 0x58, "BoolProperty"},
            {"bReplicateMovement", 0x58, "BoolProperty"},
            {"bExchangedRoles", 0x59, "BoolProperty"},
            {"bForceNetAddressable", 0x59, "BoolProperty"},
            {"bNetLoadOnClient", 0x59, "BoolProperty"},
            {"bNetUseOwnerRelevancy", 0x59, "BoolProperty"},
            {"bRelevantForLevelBounds", 0x59, "BoolProperty"},
            {"bRelevantForNetworkReplays", 0x59, "BoolProperty"},
            {"bReplayRewindable", 0x59, "BoolProperty"},
            {"bTearOff", 0x59, "BoolProperty"},
            {"bAllowTickBeforeBeginPlay", 0x5A, "BoolProperty"},
            {"bAutoDestroyWhenFinished", 0x5A, "BoolProperty"},
            {"bBlockInput", 0x5A, "BoolProperty"},
            {"bCanBeDamaged", 0x5A, "BoolProperty"},
            {"bCollideWhenPlacing", 0x5A, "BoolProperty"},
            {"bFindCameraComponentWhenViewTarget", 0x5A, "BoolProperty"},
            {"bGenerateOverlapEventsDuringLevelStreaming", 0x5A, "BoolProperty"},
            {"bIgnoresOriginShifting", 0x5A, "BoolProperty"},
            {"bAllowReceiveTickEventOnDedicatedServer", 0x5B, "BoolProperty"},
            {"bCanBeInCluster", 0x5B, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x5B, "BoolProperty"},
            {"bIsEditorOnlyActor", 0x5B, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x5B, "BoolProperty"},
            {"bReplicates", 0x5B, "BoolProperty"},
            {"bActorEnableCollision", 0x5D, "BoolProperty"},
            {"bActorIsBeingDestroyed", 0x5D, "BoolProperty"},
            {"bAsyncPhysicsTickEnabled", 0x5D, "BoolProperty"},
            {"UpdateOverlapsMethodDuringLevelStreaming", 0x5E, "EnumProperty"},
            {"DefaultUpdateOverlapsMethodDuringLevelStreaming", 0x5F, "EnumProperty"},
            {"RemoteRole", 0x60, "ByteProperty"},
            {"InitialLifeSpan", 0x64, "FloatProperty"},
            {"CustomTimeDilation", 0x68, "FloatProperty"},
            {"RayTracingGroupId", 0x6C, "IntProperty"},
            {"AttachmentReplication", 0x70, "StructProperty"},
            {"ReplicatedMovement", 0xD0, "StructProperty"},
            {"Owner", 0x158, "ObjectProperty"},
            {"NetDriverName", 0x160, "NameProperty"},
            {"Role", 0x164, "ByteProperty"},
            {"NetDormancy", 0x165, "ByteProperty"},
            {"SpawnCollisionHandlingMethod", 0x166, "EnumProperty"},
            {"AutoReceiveInput", 0x167, "ByteProperty"},
            {"InputPriority", 0x168, "IntProperty"},
            {"InputComponent", 0x170, "ObjectProperty"},
            {"NetTag", 0x178, "IntProperty"},
            {"NetCullDistanceSquared", 0x17C, "FloatProperty"},
            {"NetUpdateFrequency", 0x180, "FloatProperty"},
            {"MinNetUpdateFrequency", 0x184, "FloatProperty"},
            {"NetPriority", 0x188, "FloatProperty"},
            {"PhysicsReplicationMode", 0x18C, "EnumProperty"},
            {"Instigator", 0x198, "ObjectProperty"},
            {"Children", 0x1A0, "ArrayProperty"},
            {"RootComponent", 0x1B0, "ObjectProperty"},
            {"HLODLayer", 0x1C8, "ObjectProperty"},
            {"Layers", 0x1D0, "ArrayProperty"},
            {"ParentComponent", 0x1E0, "WeakObjectProperty"},
            {"Tags", 0x1F8, "ArrayProperty"},
            {"OnTakeAnyDamage", 0x208, "MulticastSparseDelegateProperty"},
            {"OnTakePointDamage", 0x209, "MulticastSparseDelegateProperty"},
            {"OnTakeRadialDamage", 0x20A, "MulticastSparseDelegateProperty"},
            {"OnActorBeginOverlap", 0x20B, "MulticastSparseDelegateProperty"},
            {"OnActorEndOverlap", 0x20C, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x20D, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x20E, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x20F, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x210, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x211, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x212, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x213, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x214, "MulticastSparseDelegateProperty"},
            {"OnActorHit", 0x215, "MulticastSparseDelegateProperty"},
            {"OnDestroyed", 0x216, "MulticastSparseDelegateProperty"},
            {"OnEndPlay", 0x217, "MulticastSparseDelegateProperty"},
            {"InstanceComponents", 0x258, "ArrayProperty"},
            {"BlueprintCreatedComponents", 0x268, "ArrayProperty"},
        }};
    };

    struct MultiNavigationDensityVolume
    {
        static constexpr std::string_view Name = "MultiNavigationDensityVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Volume";
        struct Offsets
        {
            static constexpr std::uintptr_t TransitionSpacingUU = 0x2B0;
            static constexpr std::uintptr_t bBlockTransitions = 0x2B4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TransitionSpacingUU", 0x2B0, "FloatProperty"},
            {"bBlockTransitions", 0x2B4, "BoolProperty"},
        }};
    };

    struct MultiNavigationNavmesh
    {
        static constexpr std::string_view Name = "MultiNavigationNavmesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavigationData";
        struct Offsets
        {
            static constexpr std::uintptr_t SubNavmeshAgentNames = 0x438;
            static constexpr std::uintptr_t TileSizeUU = 0x448;
            static constexpr std::uintptr_t TileMap = 0x450;
            static constexpr std::uintptr_t TransitionSampleStep = 0x460;
            static constexpr std::uintptr_t bRequireLineOfSight = 0x464;
            static constexpr std::uintptr_t MaxPairZGap = 0x468;
            static constexpr std::uintptr_t MinTransitionSpacingUU = 0x46C;
            static constexpr std::uintptr_t SubMeshCostScales = 0x470;
            static constexpr std::uintptr_t SurfaceStandToleranceUU = 0x480;
            static constexpr std::uintptr_t bDrawTransitions = 0x484;
            static constexpr std::uintptr_t bDrawSubNavmeshes = 0x485;
            static constexpr std::uintptr_t SubNavmeshes = 0x498;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"SubNavmeshAgentNames", 0x438, "ArrayProperty"},
            {"TileSizeUU", 0x448, "FloatProperty"},
            {"TileMap", 0x450, "MapProperty"},
            {"TransitionSampleStep", 0x460, "FloatProperty"},
            {"bRequireLineOfSight", 0x464, "BoolProperty"},
            {"MaxPairZGap", 0x468, "FloatProperty"},
            {"MinTransitionSpacingUU", 0x46C, "FloatProperty"},
            {"SubMeshCostScales", 0x470, "MapProperty"},
            {"SurfaceStandToleranceUU", 0x480, "FloatProperty"},
            {"bDrawTransitions", 0x484, "BoolProperty"},
            {"bDrawSubNavmeshes", 0x485, "BoolProperty"},
            {"SubNavmeshes", 0x498, "ArrayProperty"},
        }};
    };

    struct MultiNavigationNavmeshRenderingComponent
    {
        static constexpr std::string_view Name = "MultiNavigationNavmeshRenderingComponent";
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

    struct MultiNavigationQueryFilter
    {
        static constexpr std::string_view Name = "MultiNavigationQueryFilter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavigationQueryFilter";
        struct Offsets
        {
            static constexpr std::uintptr_t SubMeshCostScaleOverrides = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SubMeshCostScaleOverrides", 0x48, "ArrayProperty"},
        }};
    };

    struct NavGraphDebugActor
    {
        static constexpr std::string_view Name = "NavGraphDebugActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryActorTick = 0x28;
            static constexpr std::uintptr_t bAlwaysRelevant = 0x58;
            static constexpr std::uintptr_t bCallPreReplication = 0x58;
            static constexpr std::uintptr_t bCallPreReplicationForReplay = 0x58;
            static constexpr std::uintptr_t bHidden = 0x58;
            static constexpr std::uintptr_t bNetTemporary = 0x58;
            static constexpr std::uintptr_t bOnlyRelevantToOwner = 0x58;
            static constexpr std::uintptr_t bReplicateMovement = 0x58;
            static constexpr std::uintptr_t bExchangedRoles = 0x59;
            static constexpr std::uintptr_t bForceNetAddressable = 0x59;
            static constexpr std::uintptr_t bNetLoadOnClient = 0x59;
            static constexpr std::uintptr_t bNetUseOwnerRelevancy = 0x59;
            static constexpr std::uintptr_t bRelevantForLevelBounds = 0x59;
            static constexpr std::uintptr_t bRelevantForNetworkReplays = 0x59;
            static constexpr std::uintptr_t bReplayRewindable = 0x59;
            static constexpr std::uintptr_t bTearOff = 0x59;
            static constexpr std::uintptr_t bAllowTickBeforeBeginPlay = 0x5A;
            static constexpr std::uintptr_t bAutoDestroyWhenFinished = 0x5A;
            static constexpr std::uintptr_t bBlockInput = 0x5A;
            static constexpr std::uintptr_t bCanBeDamaged = 0x5A;
            static constexpr std::uintptr_t bCollideWhenPlacing = 0x5A;
            static constexpr std::uintptr_t bFindCameraComponentWhenViewTarget = 0x5A;
            static constexpr std::uintptr_t bGenerateOverlapEventsDuringLevelStreaming = 0x5A;
            static constexpr std::uintptr_t bIgnoresOriginShifting = 0x5A;
            static constexpr std::uintptr_t bAllowReceiveTickEventOnDedicatedServer = 0x5B;
            static constexpr std::uintptr_t bCanBeInCluster = 0x5B;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x5B;
            static constexpr std::uintptr_t bIsEditorOnlyActor = 0x5B;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x5B;
            static constexpr std::uintptr_t bReplicates = 0x5B;
            static constexpr std::uintptr_t bActorEnableCollision = 0x5D;
            static constexpr std::uintptr_t bActorIsBeingDestroyed = 0x5D;
            static constexpr std::uintptr_t bAsyncPhysicsTickEnabled = 0x5D;
            static constexpr std::uintptr_t UpdateOverlapsMethodDuringLevelStreaming = 0x5E;
            static constexpr std::uintptr_t DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5F;
            static constexpr std::uintptr_t RemoteRole = 0x60;
            static constexpr std::uintptr_t InitialLifeSpan = 0x64;
            static constexpr std::uintptr_t CustomTimeDilation = 0x68;
            static constexpr std::uintptr_t RayTracingGroupId = 0x6C;
            static constexpr std::uintptr_t AttachmentReplication = 0x70;
            static constexpr std::uintptr_t ReplicatedMovement = 0xD0;
            static constexpr std::uintptr_t Owner = 0x158;
            static constexpr std::uintptr_t NetDriverName = 0x160;
            static constexpr std::uintptr_t Role = 0x164;
            static constexpr std::uintptr_t NetDormancy = 0x165;
            static constexpr std::uintptr_t SpawnCollisionHandlingMethod = 0x166;
            static constexpr std::uintptr_t AutoReceiveInput = 0x167;
            static constexpr std::uintptr_t InputPriority = 0x168;
            static constexpr std::uintptr_t InputComponent = 0x170;
            static constexpr std::uintptr_t NetTag = 0x178;
            static constexpr std::uintptr_t NetCullDistanceSquared = 0x17C;
            static constexpr std::uintptr_t NetUpdateFrequency = 0x180;
            static constexpr std::uintptr_t MinNetUpdateFrequency = 0x184;
            static constexpr std::uintptr_t NetPriority = 0x188;
            static constexpr std::uintptr_t PhysicsReplicationMode = 0x18C;
            static constexpr std::uintptr_t Instigator = 0x198;
            static constexpr std::uintptr_t Children = 0x1A0;
            static constexpr std::uintptr_t RootComponent = 0x1B0;
            static constexpr std::uintptr_t HLODLayer = 0x1C8;
            static constexpr std::uintptr_t Layers = 0x1D0;
            static constexpr std::uintptr_t ParentComponent = 0x1E0;
            static constexpr std::uintptr_t Tags = 0x1F8;
            static constexpr std::uintptr_t OnTakeAnyDamage = 0x208;
            static constexpr std::uintptr_t OnTakePointDamage = 0x209;
            static constexpr std::uintptr_t OnTakeRadialDamage = 0x20A;
            static constexpr std::uintptr_t OnActorBeginOverlap = 0x20B;
            static constexpr std::uintptr_t OnActorEndOverlap = 0x20C;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x20D;
            static constexpr std::uintptr_t OnEndCursorOver = 0x20E;
            static constexpr std::uintptr_t OnClicked = 0x20F;
            static constexpr std::uintptr_t OnReleased = 0x210;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x211;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x212;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x213;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x214;
            static constexpr std::uintptr_t OnActorHit = 0x215;
            static constexpr std::uintptr_t OnDestroyed = 0x216;
            static constexpr std::uintptr_t OnEndPlay = 0x217;
            static constexpr std::uintptr_t InstanceComponents = 0x258;
            static constexpr std::uintptr_t BlueprintCreatedComponents = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 80> Properties{{
            {"PrimaryActorTick", 0x28, "StructProperty"},
            {"bAlwaysRelevant", 0x58, "BoolProperty"},
            {"bCallPreReplication", 0x58, "BoolProperty"},
            {"bCallPreReplicationForReplay", 0x58, "BoolProperty"},
            {"bHidden", 0x58, "BoolProperty"},
            {"bNetTemporary", 0x58, "BoolProperty"},
            {"bOnlyRelevantToOwner", 0x58, "BoolProperty"},
            {"bReplicateMovement", 0x58, "BoolProperty"},
            {"bExchangedRoles", 0x59, "BoolProperty"},
            {"bForceNetAddressable", 0x59, "BoolProperty"},
            {"bNetLoadOnClient", 0x59, "BoolProperty"},
            {"bNetUseOwnerRelevancy", 0x59, "BoolProperty"},
            {"bRelevantForLevelBounds", 0x59, "BoolProperty"},
            {"bRelevantForNetworkReplays", 0x59, "BoolProperty"},
            {"bReplayRewindable", 0x59, "BoolProperty"},
            {"bTearOff", 0x59, "BoolProperty"},
            {"bAllowTickBeforeBeginPlay", 0x5A, "BoolProperty"},
            {"bAutoDestroyWhenFinished", 0x5A, "BoolProperty"},
            {"bBlockInput", 0x5A, "BoolProperty"},
            {"bCanBeDamaged", 0x5A, "BoolProperty"},
            {"bCollideWhenPlacing", 0x5A, "BoolProperty"},
            {"bFindCameraComponentWhenViewTarget", 0x5A, "BoolProperty"},
            {"bGenerateOverlapEventsDuringLevelStreaming", 0x5A, "BoolProperty"},
            {"bIgnoresOriginShifting", 0x5A, "BoolProperty"},
            {"bAllowReceiveTickEventOnDedicatedServer", 0x5B, "BoolProperty"},
            {"bCanBeInCluster", 0x5B, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x5B, "BoolProperty"},
            {"bIsEditorOnlyActor", 0x5B, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x5B, "BoolProperty"},
            {"bReplicates", 0x5B, "BoolProperty"},
            {"bActorEnableCollision", 0x5D, "BoolProperty"},
            {"bActorIsBeingDestroyed", 0x5D, "BoolProperty"},
            {"bAsyncPhysicsTickEnabled", 0x5D, "BoolProperty"},
            {"UpdateOverlapsMethodDuringLevelStreaming", 0x5E, "EnumProperty"},
            {"DefaultUpdateOverlapsMethodDuringLevelStreaming", 0x5F, "EnumProperty"},
            {"RemoteRole", 0x60, "ByteProperty"},
            {"InitialLifeSpan", 0x64, "FloatProperty"},
            {"CustomTimeDilation", 0x68, "FloatProperty"},
            {"RayTracingGroupId", 0x6C, "IntProperty"},
            {"AttachmentReplication", 0x70, "StructProperty"},
            {"ReplicatedMovement", 0xD0, "StructProperty"},
            {"Owner", 0x158, "ObjectProperty"},
            {"NetDriverName", 0x160, "NameProperty"},
            {"Role", 0x164, "ByteProperty"},
            {"NetDormancy", 0x165, "ByteProperty"},
            {"SpawnCollisionHandlingMethod", 0x166, "EnumProperty"},
            {"AutoReceiveInput", 0x167, "ByteProperty"},
            {"InputPriority", 0x168, "IntProperty"},
            {"InputComponent", 0x170, "ObjectProperty"},
            {"NetTag", 0x178, "IntProperty"},
            {"NetCullDistanceSquared", 0x17C, "FloatProperty"},
            {"NetUpdateFrequency", 0x180, "FloatProperty"},
            {"MinNetUpdateFrequency", 0x184, "FloatProperty"},
            {"NetPriority", 0x188, "FloatProperty"},
            {"PhysicsReplicationMode", 0x18C, "EnumProperty"},
            {"Instigator", 0x198, "ObjectProperty"},
            {"Children", 0x1A0, "ArrayProperty"},
            {"RootComponent", 0x1B0, "ObjectProperty"},
            {"HLODLayer", 0x1C8, "ObjectProperty"},
            {"Layers", 0x1D0, "ArrayProperty"},
            {"ParentComponent", 0x1E0, "WeakObjectProperty"},
            {"Tags", 0x1F8, "ArrayProperty"},
            {"OnTakeAnyDamage", 0x208, "MulticastSparseDelegateProperty"},
            {"OnTakePointDamage", 0x209, "MulticastSparseDelegateProperty"},
            {"OnTakeRadialDamage", 0x20A, "MulticastSparseDelegateProperty"},
            {"OnActorBeginOverlap", 0x20B, "MulticastSparseDelegateProperty"},
            {"OnActorEndOverlap", 0x20C, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x20D, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x20E, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x20F, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x210, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x211, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x212, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x213, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x214, "MulticastSparseDelegateProperty"},
            {"OnActorHit", 0x215, "MulticastSparseDelegateProperty"},
            {"OnDestroyed", 0x216, "MulticastSparseDelegateProperty"},
            {"OnEndPlay", 0x217, "MulticastSparseDelegateProperty"},
            {"InstanceComponents", 0x258, "ArrayProperty"},
            {"BlueprintCreatedComponents", 0x268, "ArrayProperty"},
        }};
    };

    struct NavigationHeightMapData
    {
        static constexpr std::string_view Name = "NavigationHeightMapData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavigationData";
        struct Offsets
        {
            static constexpr std::uintptr_t OriginOffset = 0x438;
            static constexpr std::uintptr_t bDoFullyAsyncNavDataGathering = 0x450;
            static constexpr std::uintptr_t bFixedTilePoolSize = 0x450;
            static constexpr std::uintptr_t bIsWorldPartitioned = 0x450;
            static constexpr std::uintptr_t TilePoolSize = 0x454;
            static constexpr std::uintptr_t TileSizeUU = 0x458;
            static constexpr std::uintptr_t NavMeshResolutionParams = 0x45C;
            static constexpr std::uintptr_t AgentRadius = 0x480;
            static constexpr std::uintptr_t AgentHeight = 0x484;
            static constexpr std::uintptr_t DrawOffset = 0x488;
            static constexpr std::uintptr_t bDrawCells = 0x48C;
            static constexpr std::uintptr_t bDrawTileBounds = 0x48C;
            static constexpr std::uintptr_t bDrawTileEdges = 0x48C;
            static constexpr std::uintptr_t bDrawTileLabels = 0x48C;
            static constexpr std::uintptr_t DefaultMaxSearchNodes = 0x490;
            static constexpr std::uintptr_t HeuristicScale = 0x494;
            static constexpr std::uintptr_t TimeSliceLongDurationDebug = 0x498;
            static constexpr std::uintptr_t bUseExtraTopCellWhenMarkingAreas = 0x4A4;
            static constexpr std::uintptr_t bUseVirtualGeometryFilteringAndDirtying = 0x4A4;
            static constexpr std::uintptr_t InvokerTilePriorityBumpDistanceThresholdInTileUnits = 0x4A8;
            static constexpr std::uintptr_t InvokerTilePriorityBumpIncrease = 0x4AC;
            static constexpr std::uintptr_t MaxSimultaneousTileGenerationJobsCount = 0x4B0;
            static constexpr std::uintptr_t TileGenerationDebug = 0x4B4;
        };

        inline static constexpr std::array<PropertyInfo, 23> Properties{{
            {"OriginOffset", 0x438, "StructProperty"},
            {"bDoFullyAsyncNavDataGathering", 0x450, "BoolProperty"},
            {"bFixedTilePoolSize", 0x450, "BoolProperty"},
            {"bIsWorldPartitioned", 0x450, "BoolProperty"},
            {"TilePoolSize", 0x454, "IntProperty"},
            {"TileSizeUU", 0x458, "FloatProperty"},
            {"NavMeshResolutionParams", 0x45C, "StructProperty"},
            {"AgentRadius", 0x480, "FloatProperty"},
            {"AgentHeight", 0x484, "FloatProperty"},
            {"DrawOffset", 0x488, "FloatProperty"},
            {"bDrawCells", 0x48C, "BoolProperty"},
            {"bDrawTileBounds", 0x48C, "BoolProperty"},
            {"bDrawTileEdges", 0x48C, "BoolProperty"},
            {"bDrawTileLabels", 0x48C, "BoolProperty"},
            {"DefaultMaxSearchNodes", 0x490, "UInt32Property"},
            {"HeuristicScale", 0x494, "FloatProperty"},
            {"TimeSliceLongDurationDebug", 0x498, "DoubleProperty"},
            {"bUseExtraTopCellWhenMarkingAreas", 0x4A4, "BoolProperty"},
            {"bUseVirtualGeometryFilteringAndDirtying", 0x4A4, "BoolProperty"},
            {"InvokerTilePriorityBumpDistanceThresholdInTileUnits", 0x4A8, "UInt32Property"},
            {"InvokerTilePriorityBumpIncrease", 0x4AC, "ByteProperty"},
            {"MaxSimultaneousTileGenerationJobsCount", 0x4B0, "IntProperty"},
            {"TileGenerationDebug", 0x4B4, "StructProperty"},
        }};
    };

    struct NavigationHeightMapRenderingComponent
    {
        static constexpr std::string_view Name = "NavigationHeightMapRenderingComponent";
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

    struct NavigationSeedComponent
    {
        static constexpr std::string_view Name = "NavigationSeedComponent";
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

    struct PatrolPathRenderingComponent
    {
        static constexpr std::string_view Name = "PatrolPathRenderingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
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

    struct PatrolPointRenderingComponent
    {
        static constexpr std::string_view Name = "PatrolPointRenderingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
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

    struct ThreatCloud
    {
        static constexpr std::string_view Name = "ThreatCloud";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t LightningSourceAreas = 0x278;
            static constexpr std::uintptr_t MiniMapIconBrush = 0x290;
            static constexpr std::uintptr_t MiniMapIconPercent = 0x340;
            static constexpr std::uintptr_t MiniMapFarOffIconBrush = 0x350;
            static constexpr std::uintptr_t ActiveTint = 0x400;
            static constexpr std::uintptr_t InActiveTint = 0x410;
            static constexpr std::uintptr_t ActiveTransitionTime = 0x420;
            static constexpr std::uintptr_t DeathTimerDuration = 0x424;
            static constexpr std::uintptr_t CloudMiniMapTickInterval = 0x428;
            static constexpr std::uintptr_t MiniMapFarOffIconDegreesOfArc = 0x448;
            static constexpr std::uintptr_t ThreatBoxVolume = 0x458;
            static constexpr std::uintptr_t GroundLevelUnderCloud = 0x490;
            static constexpr std::uintptr_t GoalActorLocations = 0x498;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"LightningSourceAreas", 0x278, "ArrayProperty"},
            {"MiniMapIconBrush", 0x290, "StructProperty"},
            {"MiniMapIconPercent", 0x340, "FloatProperty"},
            {"MiniMapFarOffIconBrush", 0x350, "StructProperty"},
            {"ActiveTint", 0x400, "StructProperty"},
            {"InActiveTint", 0x410, "StructProperty"},
            {"ActiveTransitionTime", 0x420, "FloatProperty"},
            {"DeathTimerDuration", 0x424, "FloatProperty"},
            {"CloudMiniMapTickInterval", 0x428, "FloatProperty"},
            {"MiniMapFarOffIconDegreesOfArc", 0x448, "FloatProperty"},
            {"ThreatBoxVolume", 0x458, "StructProperty"},
            {"GroundLevelUnderCloud", 0x490, "FloatProperty"},
            {"GoalActorLocations", 0x498, "ArrayProperty"},
        }};
    };

    struct TimeSlicedExecutor
    {
        static constexpr std::string_view Name = "TimeSlicedExecutor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TokenHintPosition
    {
        static constexpr std::string_view Name = "TokenHintPosition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SnapOnSurfaceComp = 0x278;
            static constexpr std::uintptr_t TrackableAIComp = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SnapOnSurfaceComp", 0x278, "ObjectProperty"},
            {"TrackableAIComp", 0x280, "ObjectProperty"},
        }};
    };

    struct TrainTrackerSubsystem
    {
        static constexpr std::string_view Name = "TrainTrackerSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct UEFNNavMeshBoundsVolume
    {
        static constexpr std::string_view Name = "UEFNNavMeshBoundsVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavMeshBoundsVolume";
        struct Offsets
        {
            static constexpr std::uintptr_t SupportedAgents = 0x2B0;
            static constexpr std::uintptr_t bAllowPhysicsOverlap = 0x2B4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SupportedAgents", 0x2B0, "StructProperty"},
            {"bAllowPhysicsOverlap", 0x2B4, "BoolProperty"},
        }};
    };

    struct UEFNNavMesh_Medium
    {
        static constexpr std::string_view Name = "UEFNNavMesh_Medium";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaNavMesh_Medium";
        struct Offsets
        {
            static constexpr std::uintptr_t HotSpotPathfindingMaxSearchNodes = 0x638;
            static constexpr std::uintptr_t ShallowWaterTraceStartOffsetZ = 0x63C;
            static constexpr std::uintptr_t ShallowWaterTraceEndOffsetZ = 0x640;
            static constexpr std::uintptr_t MaximumTilesToProcessForWaterPerFrame = 0x644;
            static constexpr std::uintptr_t bSuspendNavmeshWhenNoAIUsersAlive = 0x648;
            static constexpr std::uintptr_t SerializedDirtyAreas = 0x650;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"HotSpotPathfindingMaxSearchNodes", 0x638, "IntProperty"},
            {"ShallowWaterTraceStartOffsetZ", 0x63C, "FloatProperty"},
            {"ShallowWaterTraceEndOffsetZ", 0x640, "FloatProperty"},
            {"MaximumTilesToProcessForWaterPerFrame", 0x644, "IntProperty"},
            {"bSuspendNavmeshWhenNoAIUsersAlive", 0x648, "BoolProperty"},
            {"SerializedDirtyAreas", 0x650, "ArrayProperty"},
        }};
    };

    struct UEFNNavSystemConfigOverride
    {
        static constexpr std::string_view Name = "UEFNNavSystemConfigOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaNavSystemConfigOverride";
        struct Offsets
        {
            static constexpr std::uintptr_t NavigationSystemConfig = 0x278;
            static constexpr std::uintptr_t OverridePolicy = 0x280;
            static constexpr std::uintptr_t bLoadOnClient = 0x281;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NavigationSystemConfig", 0x278, "ObjectProperty"},
            {"OverridePolicy", 0x280, "EnumProperty"},
            {"bLoadOnClient", 0x281, "BoolProperty"},
        }};
    };

}
