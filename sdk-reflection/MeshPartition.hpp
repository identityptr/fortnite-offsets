#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::MeshPartition
{
    struct ChannelDesc
    {
        static constexpr std::string_view Name = "ChannelDesc";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Name", 0x0, "NameProperty"},
        }};
    };

    struct ChannelMap
    {
        static constexpr std::string_view Name = "ChannelMap";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelDescs = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ChannelDescs", 0x0, "ArrayProperty"},
        }};
    };

    struct ChannelName
    {
        static constexpr std::string_view Name = "ChannelName";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "NameWrapper";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Name", 0x0, "NameProperty"},
        }};
    };

    struct CommonBuildVariant
    {
        static constexpr std::string_view Name = "CommonBuildVariant";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t MaxSectionComplexity = 0x0;
            static constexpr std::uintptr_t bBuildChannelResources = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MaxSectionComplexity", 0x0, "DoubleProperty"},
            {"bBuildChannelResources", 0x8, "BoolProperty"},
        }};
    };

    struct CompiledSection
    {
        static constexpr std::string_view Name = "CompiledSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t MeshComponents = 0x278;
            static constexpr std::uintptr_t CollisionComponents = 0x288;
            static constexpr std::uintptr_t VirtualTextureFallbackMeshComponents = 0x298;
            static constexpr std::uintptr_t FarFieldMeshComponent = 0x2A8;
            static constexpr std::uintptr_t Parent = 0x2B0;
            static constexpr std::uintptr_t MaterialInstance = 0x2D0;
            static constexpr std::uintptr_t ChannelTexture = 0x2D8;
            static constexpr std::uintptr_t BuildInfo = 0x2E0;
            static constexpr std::uintptr_t ChannelTexcoordDesc = 0x3B0;
            static constexpr std::uintptr_t ChannelTexcoordROIMax = 0x3B8;
            static constexpr std::uintptr_t ChannelTable = 0x3C0;
            static constexpr std::uintptr_t MaterialCacheTileCount = 0x3D0;
            static constexpr std::uintptr_t MaterialCacheTextures = 0x3D8;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"MeshComponents", 0x278, "ArrayProperty"},
            {"CollisionComponents", 0x288, "ArrayProperty"},
            {"VirtualTextureFallbackMeshComponents", 0x298, "ArrayProperty"},
            {"FarFieldMeshComponent", 0x2A8, "ObjectProperty"},
            {"Parent", 0x2B0, "SoftObjectProperty"},
            {"MaterialInstance", 0x2D0, "ObjectProperty"},
            {"ChannelTexture", 0x2D8, "ObjectProperty"},
            {"BuildInfo", 0x2E0, "StructProperty"},
            {"ChannelTexcoordDesc", 0x3B0, "StructProperty"},
            {"ChannelTexcoordROIMax", 0x3B8, "StructProperty"},
            {"ChannelTable", 0x3C0, "ArrayProperty"},
            {"MaterialCacheTileCount", 0x3D0, "StructProperty"},
            {"MaterialCacheTextures", 0x3D8, "ArrayProperty"},
        }};
    };

    struct CompiledSectionBuildInfo
    {
        static constexpr std::string_view Name = "CompiledSectionBuildInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BuildKey = 0x0;
            static constexpr std::uintptr_t BuildVariantName = 0x10;
            static constexpr std::uintptr_t MegaMeshDefinitionPath = 0x14;
            static constexpr std::uintptr_t BaseModifierPaths = 0x20;
            static constexpr std::uintptr_t ModifiersHash = 0x30;
            static constexpr std::uintptr_t PackageDependencies = 0x40;
            static constexpr std::uintptr_t PackageHash = 0x50;
            static constexpr std::uintptr_t ModifierSetHash = 0x60;
            static constexpr std::uintptr_t ClassDependencies = 0x70;
            static constexpr std::uintptr_t ClassHash = 0x80;
            static constexpr std::uintptr_t BuildVariantHash = 0x90;
            static constexpr std::uintptr_t MegaMeshPath = 0xA0;
            static constexpr std::uintptr_t SectionDescriptorHash = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"BuildKey", 0x0, "StructProperty"},
            {"BuildVariantName", 0x10, "NameProperty"},
            {"MegaMeshDefinitionPath", 0x14, "StructProperty"},
            {"BaseModifierPaths", 0x20, "ArrayProperty"},
            {"ModifiersHash", 0x30, "StructProperty"},
            {"PackageDependencies", 0x40, "ArrayProperty"},
            {"PackageHash", 0x50, "StructProperty"},
            {"ModifierSetHash", 0x60, "StructProperty"},
            {"ClassDependencies", 0x70, "ArrayProperty"},
            {"ClassHash", 0x80, "StructProperty"},
            {"BuildVariantHash", 0x90, "StructProperty"},
            {"MegaMeshPath", 0xA0, "StructProperty"},
            {"SectionDescriptorHash", 0xB8, "StructProperty"},
        }};
    };

    struct CompiledSectionBuildVariant
    {
        static constexpr std::string_view Name = "CompiledSectionBuildVariant";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "CommonBuildVariant";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x10;
            static constexpr std::uintptr_t bSplitSectionsToMatchWorldPartitionRuntimeGrid = 0x14;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Name", 0x10, "NameProperty"},
            {"bSplitSectionsToMatchWorldPartitionRuntimeGrid", 0x14, "BoolProperty"},
        }};
    };

    struct GridSettings
    {
        static constexpr std::string_view Name = "GridSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CellSize = 0x0;
            static constexpr std::uintptr_t bIs2D = 0x4;
            static constexpr std::uintptr_t WorldOriginOffset = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CellSize", 0x0, "UInt32Property"},
            {"bIs2D", 0x4, "BoolProperty"},
            {"WorldOriginOffset", 0x8, "StructProperty"},
        }};
    };

    struct MeshPartition
    {
        static constexpr std::string_view Name = "MeshPartition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t MegaMeshComponent = 0x278;
            static constexpr std::uintptr_t MegaMeshDefinition = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"MegaMeshComponent", 0x278, "ObjectProperty"},
            {"MegaMeshDefinition", 0x280, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "GetMeshPartitionDefinition",
        }};
    };

    struct MeshPartitionCollisionComponent
    {
        static constexpr std::string_view Name = "MeshPartitionCollisionComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PhysicsOnlyMaterials = 0x568;
            static constexpr std::uintptr_t MeshBodySetup = 0x578;
            static constexpr std::uintptr_t LocalBounds = 0x580;
            static constexpr std::uintptr_t bShouldSkipDirtyNavOnAddOrRemove = 0x5B8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"PhysicsOnlyMaterials", 0x568, "ArrayProperty"},
            {"MeshBodySetup", 0x578, "ObjectProperty"},
            {"LocalBounds", 0x580, "StructProperty"},
            {"bShouldSkipDirtyNavOnAddOrRemove", 0x5B8, "BoolProperty"},
        }};
    };

    struct MeshPartitionCollisionData
    {
        static constexpr std::string_view Name = "MeshPartitionCollisionData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t PhysicalMaterials = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PhysicalMaterials", 0x50, "ArrayProperty"},
        }};
    };

    struct MeshPartitionComponent
    {
        static constexpr std::string_view Name = "MeshPartitionComponent";
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

    struct MeshPartitionDataLayerContainer
    {
        static constexpr std::string_view Name = "MeshPartitionDataLayerContainer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PerDefinitionBuildVariantDataLayers = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PerDefinitionBuildVariantDataLayers", 0x278, "MapProperty"},
        }};
    };

    struct MeshPartitionDefinition
    {
        static constexpr std::string_view Name = "MeshPartitionDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Material = 0x48;
            static constexpr std::uintptr_t ModifierTypePriorities = 0x50;
            static constexpr std::uintptr_t CompiledSectionBuildVariants = 0x60;
            static constexpr std::uintptr_t PerPlatformRuntimeSettings = 0x70;
            static constexpr std::uintptr_t ChannelMap = 0x88;
            static constexpr std::uintptr_t ChannelTexelSize = 0x98;
            static constexpr std::uintptr_t MaterialCacheTexelSize = 0x9C;
            static constexpr std::uintptr_t ChannelUVLayoutMethod = 0xA0;
            static constexpr std::uintptr_t ChannelVEUVSamplesPerSquareMeter = 0xA4;
            static constexpr std::uintptr_t ChannelVEUVVoxelCount = 0xA8;
            static constexpr std::uintptr_t ChannelPlaneProjectionNormalSource = 0xB4;
            static constexpr std::uintptr_t ChannelPlaneProjectionFixedNormal = 0xB8;
            static constexpr std::uintptr_t PhysicalMaterialChannels = 0xD0;
            static constexpr std::uintptr_t DefaultPhysicalMaterial = 0xE0;
            static constexpr std::uintptr_t PreviewSectionBuildVariant = 0xE8;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"Material", 0x48, "ObjectProperty"},
            {"ModifierTypePriorities", 0x50, "ArrayProperty"},
            {"CompiledSectionBuildVariants", 0x60, "ArrayProperty"},
            {"PerPlatformRuntimeSettings", 0x70, "StructProperty"},
            {"ChannelMap", 0x88, "StructProperty"},
            {"ChannelTexelSize", 0x98, "FloatProperty"},
            {"MaterialCacheTexelSize", 0x9C, "FloatProperty"},
            {"ChannelUVLayoutMethod", 0xA0, "EnumProperty"},
            {"ChannelVEUVSamplesPerSquareMeter", 0xA4, "FloatProperty"},
            {"ChannelVEUVVoxelCount", 0xA8, "StructProperty"},
            {"ChannelPlaneProjectionNormalSource", 0xB4, "EnumProperty"},
            {"ChannelPlaneProjectionFixedNormal", 0xB8, "StructProperty"},
            {"PhysicalMaterialChannels", 0xD0, "ArrayProperty"},
            {"DefaultPhysicalMaterial", 0xE0, "ObjectProperty"},
            {"PreviewSectionBuildVariant", 0xE8, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "GetChannelNames",
            "GetModifierTypePriorities",
        }};
    };

    struct MeshPartitionStaticMeshComponent
    {
        static constexpr std::string_view Name = "MeshPartitionStaticMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ForcedLodModel = 0x5C8;
            static constexpr std::uintptr_t MinLOD = 0x5CC;
            static constexpr std::uintptr_t SubDivisionStepSize = 0x5D0;
            static constexpr std::uintptr_t WireframeColorOverride = 0x5D4;
            static constexpr std::uintptr_t StaticMesh = 0x5D8;
            static constexpr std::uintptr_t WorldPositionOffsetDisableDistance = 0x5E0;
            static constexpr std::uintptr_t bDisallowNanite = 0x5E4;
            static constexpr std::uintptr_t bEvaluateWorldPositionOffset = 0x5E4;
            static constexpr std::uintptr_t bEvaluateWorldPositionOffsetInRayTracing = 0x5E4;
            static constexpr std::uintptr_t bForceDisableNanite = 0x5E4;
            static constexpr std::uintptr_t bForceNaniteForMasked = 0x5E4;
            static constexpr std::uintptr_t bWorldPositionOffsetWritesVelocity = 0x5E4;
            static constexpr std::uintptr_t bForceNavigationObstacle = 0x5E5;
            static constexpr std::uintptr_t bOverrideMinLOD = 0x5E5;
            static constexpr std::uintptr_t bOverrideNavAreaClass = 0x5E5;
            static constexpr std::uintptr_t bOverrideNavigationExport = 0x5E5;
            static constexpr std::uintptr_t bOverrideWireframeColor = 0x5E5;
            static constexpr std::uintptr_t NavAreaClass = 0x5E8;
            static constexpr std::uintptr_t bCastDistanceFieldIndirectShadow = 0x5F0;
            static constexpr std::uintptr_t bDisallowMeshPaintPerInstance = 0x5F0;
            static constexpr std::uintptr_t bIgnoreInstanceForTextureStreaming = 0x5F0;
            static constexpr std::uintptr_t bOverrideDistanceFieldSelfShadowBias = 0x5F0;
            static constexpr std::uintptr_t bOverrideLightMapRes = 0x5F0;
            static constexpr std::uintptr_t bSortTriangles = 0x5F0;
            static constexpr std::uintptr_t bUseDefaultCollision = 0x5F0;
            static constexpr std::uintptr_t bUseSubDivisions = 0x5F0;
            static constexpr std::uintptr_t bEnableTextureColorMeshPainting = 0x5F1;
            static constexpr std::uintptr_t bEnableVertexColorMeshPainting = 0x5F1;
            static constexpr std::uintptr_t bOverrideMeshPaintTextureCoordinateIndex = 0x5F1;
            static constexpr std::uintptr_t bOverrideMeshPaintTextureResolution = 0x5F1;
            static constexpr std::uintptr_t bReverseCulling = 0x5F1;
            static constexpr std::uintptr_t bWritesToMaterialCache = 0x5F1;
            static constexpr std::uintptr_t OverriddenMeshPaintTextureCoordinateIndex = 0x5F4;
            static constexpr std::uintptr_t OverriddenMeshPaintTextureResolution = 0x5F8;
            static constexpr std::uintptr_t OverriddenLightMapRes = 0x5FC;
            static constexpr std::uintptr_t MeshPaintTextureCooked = 0x600;
            static constexpr std::uintptr_t MeshPaintTextureOverride = 0x608;
            static constexpr std::uintptr_t MaterialCacheTileCount = 0x610;
            static constexpr std::uintptr_t MaterialCacheUVRegion = 0x618;
            static constexpr std::uintptr_t MaterialCacheUVCoordinateIndex = 0x62C;
            static constexpr std::uintptr_t MaterialCacheTextures = 0x630;
            static constexpr std::uintptr_t DistanceFieldIndirectShadowMinVisibility = 0x640;
            static constexpr std::uintptr_t DistanceFieldSelfShadowBias = 0x644;
            static constexpr std::uintptr_t StreamingDistanceMultiplier = 0x648;
            static constexpr std::uintptr_t NanitePixelProgrammableDistance = 0x64C;
            static constexpr std::uintptr_t LodData = 0x650;
            static constexpr std::uintptr_t StreamingTextureData = 0x660;
            static constexpr std::uintptr_t LightmassSettings = 0x670;
        };

        inline static constexpr std::array<PropertyInfo, 48> Properties{{
            {"ForcedLodModel", 0x5C8, "IntProperty"},
            {"MinLOD", 0x5CC, "IntProperty"},
            {"SubDivisionStepSize", 0x5D0, "IntProperty"},
            {"WireframeColorOverride", 0x5D4, "StructProperty"},
            {"StaticMesh", 0x5D8, "ObjectProperty"},
            {"WorldPositionOffsetDisableDistance", 0x5E0, "IntProperty"},
            {"bDisallowNanite", 0x5E4, "BoolProperty"},
            {"bEvaluateWorldPositionOffset", 0x5E4, "BoolProperty"},
            {"bEvaluateWorldPositionOffsetInRayTracing", 0x5E4, "BoolProperty"},
            {"bForceDisableNanite", 0x5E4, "BoolProperty"},
            {"bForceNaniteForMasked", 0x5E4, "BoolProperty"},
            {"bWorldPositionOffsetWritesVelocity", 0x5E4, "BoolProperty"},
            {"bForceNavigationObstacle", 0x5E5, "BoolProperty"},
            {"bOverrideMinLOD", 0x5E5, "BoolProperty"},
            {"bOverrideNavAreaClass", 0x5E5, "BoolProperty"},
            {"bOverrideNavigationExport", 0x5E5, "BoolProperty"},
            {"bOverrideWireframeColor", 0x5E5, "BoolProperty"},
            {"NavAreaClass", 0x5E8, "ClassProperty"},
            {"bCastDistanceFieldIndirectShadow", 0x5F0, "BoolProperty"},
            {"bDisallowMeshPaintPerInstance", 0x5F0, "BoolProperty"},
            {"bIgnoreInstanceForTextureStreaming", 0x5F0, "BoolProperty"},
            {"bOverrideDistanceFieldSelfShadowBias", 0x5F0, "BoolProperty"},
            {"bOverrideLightMapRes", 0x5F0, "BoolProperty"},
            {"bSortTriangles", 0x5F0, "BoolProperty"},
            {"bUseDefaultCollision", 0x5F0, "BoolProperty"},
            {"bUseSubDivisions", 0x5F0, "BoolProperty"},
            {"bEnableTextureColorMeshPainting", 0x5F1, "BoolProperty"},
            {"bEnableVertexColorMeshPainting", 0x5F1, "BoolProperty"},
            {"bOverrideMeshPaintTextureCoordinateIndex", 0x5F1, "BoolProperty"},
            {"bOverrideMeshPaintTextureResolution", 0x5F1, "BoolProperty"},
            {"bReverseCulling", 0x5F1, "BoolProperty"},
            {"bWritesToMaterialCache", 0x5F1, "BoolProperty"},
            {"OverriddenMeshPaintTextureCoordinateIndex", 0x5F4, "IntProperty"},
            {"OverriddenMeshPaintTextureResolution", 0x5F8, "IntProperty"},
            {"OverriddenLightMapRes", 0x5FC, "IntProperty"},
            {"MeshPaintTextureCooked", 0x600, "ObjectProperty"},
            {"MeshPaintTextureOverride", 0x608, "ObjectProperty"},
            {"MaterialCacheTileCount", 0x610, "StructProperty"},
            {"MaterialCacheUVRegion", 0x618, "StructProperty"},
            {"MaterialCacheUVCoordinateIndex", 0x62C, "IntProperty"},
            {"MaterialCacheTextures", 0x630, "ArrayProperty"},
            {"DistanceFieldIndirectShadowMinVisibility", 0x640, "FloatProperty"},
            {"DistanceFieldSelfShadowBias", 0x644, "FloatProperty"},
            {"StreamingDistanceMultiplier", 0x648, "FloatProperty"},
            {"NanitePixelProgrammableDistance", 0x64C, "FloatProperty"},
            {"LodData", 0x650, "ArrayProperty"},
            {"StreamingTextureData", 0x660, "ArrayProperty"},
            {"LightmassSettings", 0x670, "StructProperty"},
        }};
    };

    struct ModifierBlueprintInterface
    {
        static constexpr std::string_view Name = "ModifierBlueprintInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "BP_BindToNearestMeshPartition",
            "BP_SetAffectedMegaMesh",
        }};
    };

    struct NameWrapper
    {
        static constexpr std::string_view Name = "NameWrapper";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Name = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Name", 0x0, "NameProperty"},
        }};
    };

    struct PerBuildVariantDataLayers
    {
        static constexpr std::string_view Name = "PerBuildVariantDataLayers";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Layers = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Layers", 0x0, "MapProperty"},
        }};
    };

    struct PerPlatformRuntimeSettings
    {
        static constexpr std::string_view Name = "PerPlatformRuntimeSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Default = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Default", 0x0, "StructProperty"},
        }};
    };

    struct PhysicalMaterialChannel
    {
        static constexpr std::string_view Name = "PhysicalMaterialChannel";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelName = 0x0;
            static constexpr std::uintptr_t Material = 0x8;
            static constexpr std::uintptr_t MinimumCollisionRelevanceWeight = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ChannelName", 0x0, "StructProperty"},
            {"Material", 0x8, "ObjectProperty"},
            {"MinimumCollisionRelevanceWeight", 0x10, "FloatProperty"},
        }};
    };

    struct ProjectModifierFalloffSettings
    {
        static constexpr std::string_view Name = "ProjectModifierFalloffSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Mode = 0x0;
            static constexpr std::uintptr_t Distance = 0x4;
            static constexpr std::uintptr_t CornerRadius = 0x8;
            static constexpr std::uintptr_t FalloffCurve = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Mode", 0x0, "EnumProperty"},
            {"Distance", 0x4, "FloatProperty"},
            {"CornerRadius", 0x8, "FloatProperty"},
            {"FalloffCurve", 0x10, "ObjectProperty"},
        }};
    };

    struct ProjectModifierWeightEntry
    {
        static constexpr std::string_view Name = "ProjectModifierWeightEntry";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ChannelName = 0x0;
            static constexpr std::uintptr_t SourceMode = 0x4;
            static constexpr std::uintptr_t VertexColorIndex = 0x8;
            static constexpr std::uintptr_t SourceWeightChannelName = 0xC;
            static constexpr std::uintptr_t BlendMode = 0x10;
            static constexpr std::uintptr_t FalloffOverrides = 0x18;
            static constexpr std::uintptr_t bApplyHeightMinMaxBlend = 0x40;
            static constexpr std::uintptr_t HeightMinMaxBlendDistance = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ChannelName", 0x0, "StructProperty"},
            {"SourceMode", 0x4, "EnumProperty"},
            {"VertexColorIndex", 0x8, "IntProperty"},
            {"SourceWeightChannelName", 0xC, "NameProperty"},
            {"BlendMode", 0x10, "EnumProperty"},
            {"FalloffOverrides", 0x18, "OptionalProperty"},
            {"bApplyHeightMinMaxBlend", 0x40, "BoolProperty"},
            {"HeightMinMaxBlendDistance", 0x48, "DoubleProperty"},
        }};
    };

    struct RuntimeSettings
    {
        static constexpr std::string_view Name = "RuntimeSettings";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t BuildVariantNames = 0x0;
            static constexpr std::uintptr_t BuildVariantName = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"BuildVariantNames", 0x0, "ArrayProperty"},
            {"BuildVariantName", 0x10, "NameProperty"},
        }};
    };

    struct Settings
    {
        static constexpr std::string_view Name = "Settings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultDefinition = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultDefinition", 0x30, "SoftObjectProperty"},
        }};
    };

    struct SplineModifierBlueprintInterface
    {
        static constexpr std::string_view Name = "SplineModifierBlueprintInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "BP_SetSplineComponent",
        }};
    };

    struct Transformer
    {
        static constexpr std::string_view Name = "Transformer";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct TransformerPipeline
    {
        static constexpr std::string_view Name = "TransformerPipeline";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Transformers = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Transformers", 0x28, "ArrayProperty"},
        }};
    };

}
