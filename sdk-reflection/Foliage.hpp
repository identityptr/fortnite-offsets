#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Foliage
{
    struct FoliageDensityFalloff
    {
        static constexpr std::string_view Name = "FoliageDensityFalloff";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseFalloffCurve = 0x0;
            static constexpr std::uintptr_t FalloffCurve = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bUseFalloffCurve", 0x0, "BoolProperty"},
            {"FalloffCurve", 0x8, "StructProperty"},
        }};
    };

    struct FoliageInstancedStaticMeshComponent
    {
        static constexpr std::string_view Name = "FoliageInstancedStaticMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HierarchicalInstancedStaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnInstanceTakePointDamage = 0xBA0;
            static constexpr std::uintptr_t OnInstanceTakeRadialDamage = 0xBB0;
            static constexpr std::uintptr_t bEnableDiscardOnLoad = 0xBC0;
            static constexpr std::uintptr_t GenerationGuid = 0xBC4;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"OnInstanceTakePointDamage", 0xBA0, "MulticastInlineDelegateProperty"},
            {"OnInstanceTakeRadialDamage", 0xBB0, "MulticastInlineDelegateProperty"},
            {"bEnableDiscardOnLoad", 0xBC0, "BoolProperty"},
            {"GenerationGuid", 0xBC4, "StructProperty"},
        }};
    };

    struct FoliageStatistics
    {
        static constexpr std::string_view Name = "FoliageStatistics";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "FoliageOverlappingBoxCount",
            "FoliageOverlappingBoxTransforms",
            "FoliageOverlappingSphereCount",
        }};
    };

    struct FoliageType
    {
        static constexpr std::string_view Name = "FoliageType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t UpdateGuid = 0x28;
            static constexpr std::uintptr_t Density = 0x38;
            static constexpr std::uintptr_t DensityAdjustmentFactor = 0x3C;
            static constexpr std::uintptr_t Radius = 0x40;
            static constexpr std::uintptr_t bSingleInstanceModeOverrideRadius = 0x44;
            static constexpr std::uintptr_t SingleInstanceModeRadius = 0x48;
            static constexpr std::uintptr_t Scaling = 0x4C;
            static constexpr std::uintptr_t ScaleX = 0x50;
            static constexpr std::uintptr_t ScaleY = 0x58;
            static constexpr std::uintptr_t ScaleZ = 0x60;
            static constexpr std::uintptr_t VertexColorMaskByChannel = 0x68;
            static constexpr std::uintptr_t VertexColorMask = 0x98;
            static constexpr std::uintptr_t VertexColorMaskThreshold = 0x9C;
            static constexpr std::uintptr_t VertexColorMaskInvert = 0xA0;
            static constexpr std::uintptr_t ZOffset = 0xA4;
            static constexpr std::uintptr_t AlignToNormal = 0xAC;
            static constexpr std::uintptr_t AverageNormal = 0xAC;
            static constexpr std::uintptr_t AverageNormalSingleComponent = 0xAC;
            static constexpr std::uintptr_t AlignMaxAngle = 0xB0;
            static constexpr std::uintptr_t RandomYaw = 0xB4;
            static constexpr std::uintptr_t RandomPitchAngle = 0xB8;
            static constexpr std::uintptr_t GroundSlopeAngle = 0xBC;
            static constexpr std::uintptr_t Height = 0xC4;
            static constexpr std::uintptr_t LandscapeLayers = 0xD0;
            static constexpr std::uintptr_t MinimumLayerWeight = 0xE0;
            static constexpr std::uintptr_t ExclusionLandscapeLayers = 0xE8;
            static constexpr std::uintptr_t MinimumExclusionLayerWeight = 0xF8;
            static constexpr std::uintptr_t LandscapeLayer = 0xFC;
            static constexpr std::uintptr_t CollisionWithWorld = 0x100;
            static constexpr std::uintptr_t CollisionScale = 0x108;
            static constexpr std::uintptr_t AverageNormalSampleCount = 0x120;
            static constexpr std::uintptr_t MeshBounds = 0x128;
            static constexpr std::uintptr_t LowBoundOriginRadius = 0x160;
            static constexpr std::uintptr_t Mobility = 0x178;
            static constexpr std::uintptr_t CullDistance = 0x17C;
            static constexpr std::uintptr_t CastShadow = 0x184;
            static constexpr std::uintptr_t bAffectDistanceFieldLighting = 0x184;
            static constexpr std::uintptr_t bAffectDynamicIndirectLighting = 0x184;
            static constexpr std::uintptr_t bCastDynamicShadow = 0x184;
            static constexpr std::uintptr_t bCastStaticShadow = 0x184;
            static constexpr std::uintptr_t bEnableStaticLighting = 0x184;
            static constexpr std::uintptr_t bCastContactShadow = 0x188;
            static constexpr std::uintptr_t bCastShadowAsTwoSided = 0x18C;
            static constexpr std::uintptr_t bOverrideLightMapRes = 0x18C;
            static constexpr std::uintptr_t bReceivesDecals = 0x18C;
            static constexpr std::uintptr_t ShadowCacheInvalidationBehavior = 0x190;
            static constexpr std::uintptr_t OverriddenLightMapRes = 0x194;
            static constexpr std::uintptr_t LightmapType = 0x198;
            static constexpr std::uintptr_t bUseAsOccluder = 0x19C;
            static constexpr std::uintptr_t bEvaluateWorldPositionOffset = 0x1A0;
            static constexpr std::uintptr_t bVisibleInRayTracing = 0x1A0;
            static constexpr std::uintptr_t bVisibleInReflections = 0x1A0;
            static constexpr std::uintptr_t WorldPositionOffsetDisableDistance = 0x1A4;
            static constexpr std::uintptr_t NanitePixelProgrammableDistance = 0x1A8;
            static constexpr std::uintptr_t BodyInstance = 0x1B0;
            static constexpr std::uintptr_t CustomNavigableGeometry = 0x358;
            static constexpr std::uintptr_t LightingChannels = 0x359;
            static constexpr std::uintptr_t bRenderCustomDepth = 0x35C;
            static constexpr std::uintptr_t CustomDepthStencilWriteMask = 0x360;
            static constexpr std::uintptr_t CustomDepthStencilValue = 0x364;
            static constexpr std::uintptr_t TranslucencySortPriority = 0x368;
            static constexpr std::uintptr_t CollisionRadius = 0x36C;
            static constexpr std::uintptr_t ShadeRadius = 0x370;
            static constexpr std::uintptr_t NumSteps = 0x374;
            static constexpr std::uintptr_t InitialSeedDensity = 0x378;
            static constexpr std::uintptr_t AverageSpreadDistance = 0x37C;
            static constexpr std::uintptr_t SpreadVariance = 0x380;
            static constexpr std::uintptr_t SeedsPerStep = 0x384;
            static constexpr std::uintptr_t DistributionSeed = 0x388;
            static constexpr std::uintptr_t MaxInitialSeedOffset = 0x38C;
            static constexpr std::uintptr_t bCanGrowInShade = 0x390;
            static constexpr std::uintptr_t bSpawnsInShade = 0x391;
            static constexpr std::uintptr_t MaxInitialAge = 0x394;
            static constexpr std::uintptr_t MaxAge = 0x398;
            static constexpr std::uintptr_t OverlapPriority = 0x39C;
            static constexpr std::uintptr_t ProceduralScale = 0x3A0;
            static constexpr std::uintptr_t ScaleCurve = 0x3A8;
            static constexpr std::uintptr_t DensityFalloff = 0x3F0;
            static constexpr std::uintptr_t ChangeCount = 0x440;
            static constexpr std::uintptr_t ReapplyAlignToNormal = 0x444;
            static constexpr std::uintptr_t ReapplyDensity = 0x444;
            static constexpr std::uintptr_t ReapplyRadius = 0x444;
            static constexpr std::uintptr_t ReapplyRandomYaw = 0x444;
            static constexpr std::uintptr_t ReapplyScaleX = 0x444;
            static constexpr std::uintptr_t ReapplyScaleY = 0x444;
            static constexpr std::uintptr_t ReapplyScaleZ = 0x444;
            static constexpr std::uintptr_t ReapplyScaling = 0x444;
            static constexpr std::uintptr_t ReapplyCollisionWithWorld = 0x445;
            static constexpr std::uintptr_t ReapplyGroundSlope = 0x445;
            static constexpr std::uintptr_t ReapplyHeight = 0x445;
            static constexpr std::uintptr_t ReapplyLandscapeLayers = 0x445;
            static constexpr std::uintptr_t ReapplyRandomPitchAngle = 0x445;
            static constexpr std::uintptr_t ReapplyVertexColorMask = 0x445;
            static constexpr std::uintptr_t ReapplyZOffset = 0x445;
            static constexpr std::uintptr_t bEnableDensityScaling = 0x445;
            static constexpr std::uintptr_t bEnableCullDistanceScaling = 0x446;
            static constexpr std::uintptr_t bEnableDiscardOnLoad = 0x446;
            static constexpr std::uintptr_t RuntimeVirtualTextures = 0x448;
            static constexpr std::uintptr_t VirtualTextureCullMips = 0x458;
            static constexpr std::uintptr_t VirtualTextureRenderPassType = 0x45C;
        };

        inline static constexpr std::array<PropertyInfo, 100> Properties{{
            {"UpdateGuid", 0x28, "StructProperty"},
            {"Density", 0x38, "FloatProperty"},
            {"DensityAdjustmentFactor", 0x3C, "FloatProperty"},
            {"Radius", 0x40, "FloatProperty"},
            {"bSingleInstanceModeOverrideRadius", 0x44, "BoolProperty"},
            {"SingleInstanceModeRadius", 0x48, "FloatProperty"},
            {"Scaling", 0x4C, "EnumProperty"},
            {"ScaleX", 0x50, "StructProperty"},
            {"ScaleY", 0x58, "StructProperty"},
            {"ScaleZ", 0x60, "StructProperty"},
            {"VertexColorMaskByChannel", 0x68, "StructProperty"},
            {"VertexColorMask", 0x98, "ByteProperty"},
            {"VertexColorMaskThreshold", 0x9C, "FloatProperty"},
            {"VertexColorMaskInvert", 0xA0, "BoolProperty"},
            {"ZOffset", 0xA4, "StructProperty"},
            {"AlignToNormal", 0xAC, "BoolProperty"},
            {"AverageNormal", 0xAC, "BoolProperty"},
            {"AverageNormalSingleComponent", 0xAC, "BoolProperty"},
            {"AlignMaxAngle", 0xB0, "FloatProperty"},
            {"RandomYaw", 0xB4, "BoolProperty"},
            {"RandomPitchAngle", 0xB8, "FloatProperty"},
            {"GroundSlopeAngle", 0xBC, "StructProperty"},
            {"Height", 0xC4, "StructProperty"},
            {"LandscapeLayers", 0xD0, "ArrayProperty"},
            {"MinimumLayerWeight", 0xE0, "FloatProperty"},
            {"ExclusionLandscapeLayers", 0xE8, "ArrayProperty"},
            {"MinimumExclusionLayerWeight", 0xF8, "FloatProperty"},
            {"LandscapeLayer", 0xFC, "NameProperty"},
            {"CollisionWithWorld", 0x100, "BoolProperty"},
            {"CollisionScale", 0x108, "StructProperty"},
            {"AverageNormalSampleCount", 0x120, "IntProperty"},
            {"MeshBounds", 0x128, "StructProperty"},
            {"LowBoundOriginRadius", 0x160, "StructProperty"},
            {"Mobility", 0x178, "ByteProperty"},
            {"CullDistance", 0x17C, "StructProperty"},
            {"CastShadow", 0x184, "BoolProperty"},
            {"bAffectDistanceFieldLighting", 0x184, "BoolProperty"},
            {"bAffectDynamicIndirectLighting", 0x184, "BoolProperty"},
            {"bCastDynamicShadow", 0x184, "BoolProperty"},
            {"bCastStaticShadow", 0x184, "BoolProperty"},
            {"bEnableStaticLighting", 0x184, "BoolProperty"},
            {"bCastContactShadow", 0x188, "BoolProperty"},
            {"bCastShadowAsTwoSided", 0x18C, "BoolProperty"},
            {"bOverrideLightMapRes", 0x18C, "BoolProperty"},
            {"bReceivesDecals", 0x18C, "BoolProperty"},
            {"ShadowCacheInvalidationBehavior", 0x190, "EnumProperty"},
            {"OverriddenLightMapRes", 0x194, "IntProperty"},
            {"LightmapType", 0x198, "EnumProperty"},
            {"bUseAsOccluder", 0x19C, "BoolProperty"},
            {"bEvaluateWorldPositionOffset", 0x1A0, "BoolProperty"},
            {"bVisibleInRayTracing", 0x1A0, "BoolProperty"},
            {"bVisibleInReflections", 0x1A0, "BoolProperty"},
            {"WorldPositionOffsetDisableDistance", 0x1A4, "IntProperty"},
            {"NanitePixelProgrammableDistance", 0x1A8, "FloatProperty"},
            {"BodyInstance", 0x1B0, "StructProperty"},
            {"CustomNavigableGeometry", 0x358, "ByteProperty"},
            {"LightingChannels", 0x359, "StructProperty"},
            {"bRenderCustomDepth", 0x35C, "BoolProperty"},
            {"CustomDepthStencilWriteMask", 0x360, "EnumProperty"},
            {"CustomDepthStencilValue", 0x364, "IntProperty"},
            {"TranslucencySortPriority", 0x368, "IntProperty"},
            {"CollisionRadius", 0x36C, "FloatProperty"},
            {"ShadeRadius", 0x370, "FloatProperty"},
            {"NumSteps", 0x374, "IntProperty"},
            {"InitialSeedDensity", 0x378, "FloatProperty"},
            {"AverageSpreadDistance", 0x37C, "FloatProperty"},
            {"SpreadVariance", 0x380, "FloatProperty"},
            {"SeedsPerStep", 0x384, "IntProperty"},
            {"DistributionSeed", 0x388, "IntProperty"},
            {"MaxInitialSeedOffset", 0x38C, "FloatProperty"},
            {"bCanGrowInShade", 0x390, "BoolProperty"},
            {"bSpawnsInShade", 0x391, "BoolProperty"},
            {"MaxInitialAge", 0x394, "FloatProperty"},
            {"MaxAge", 0x398, "FloatProperty"},
            {"OverlapPriority", 0x39C, "FloatProperty"},
            {"ProceduralScale", 0x3A0, "StructProperty"},
            {"ScaleCurve", 0x3A8, "StructProperty"},
            {"DensityFalloff", 0x3F0, "StructProperty"},
            {"ChangeCount", 0x440, "IntProperty"},
            {"ReapplyAlignToNormal", 0x444, "BoolProperty"},
            {"ReapplyDensity", 0x444, "BoolProperty"},
            {"ReapplyRadius", 0x444, "BoolProperty"},
            {"ReapplyRandomYaw", 0x444, "BoolProperty"},
            {"ReapplyScaleX", 0x444, "BoolProperty"},
            {"ReapplyScaleY", 0x444, "BoolProperty"},
            {"ReapplyScaleZ", 0x444, "BoolProperty"},
            {"ReapplyScaling", 0x444, "BoolProperty"},
            {"ReapplyCollisionWithWorld", 0x445, "BoolProperty"},
            {"ReapplyGroundSlope", 0x445, "BoolProperty"},
            {"ReapplyHeight", 0x445, "BoolProperty"},
            {"ReapplyLandscapeLayers", 0x445, "BoolProperty"},
            {"ReapplyRandomPitchAngle", 0x445, "BoolProperty"},
            {"ReapplyVertexColorMask", 0x445, "BoolProperty"},
            {"ReapplyZOffset", 0x445, "BoolProperty"},
            {"bEnableDensityScaling", 0x445, "BoolProperty"},
            {"bEnableCullDistanceScaling", 0x446, "BoolProperty"},
            {"bEnableDiscardOnLoad", 0x446, "BoolProperty"},
            {"RuntimeVirtualTextures", 0x448, "ArrayProperty"},
            {"VirtualTextureCullMips", 0x458, "IntProperty"},
            {"VirtualTextureRenderPassType", 0x45C, "EnumProperty"},
        }};
    };

    struct FoliageTypeObject
    {
        static constexpr std::string_view Name = "FoliageTypeObject";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t FoliageTypeObject = 0x0;
            static constexpr std::uintptr_t TypeInstance = 0x8;
            static constexpr std::uintptr_t bIsAsset = 0x10;
            static constexpr std::uintptr_t Type = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FoliageTypeObject", 0x0, "ObjectProperty"},
            {"TypeInstance", 0x8, "ObjectProperty"},
            {"bIsAsset", 0x10, "BoolProperty"},
            {"Type", 0x18, "ClassProperty"},
        }};
    };

    struct FoliageType_Actor
    {
        static constexpr std::string_view Name = "FoliageType_Actor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FoliageType";
        struct Offsets
        {
            static constexpr std::uintptr_t ActorClass = 0x460;
            static constexpr std::uintptr_t bShouldAttachToBaseComponent = 0x468;
            static constexpr std::uintptr_t bStaticMeshOnly = 0x469;
            static constexpr std::uintptr_t StaticMeshOnlyComponentClass = 0x470;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ActorClass", 0x460, "ClassProperty"},
            {"bShouldAttachToBaseComponent", 0x468, "BoolProperty"},
            {"bStaticMeshOnly", 0x469, "BoolProperty"},
            {"StaticMeshOnlyComponentClass", 0x470, "ClassProperty"},
        }};
    };

    struct FoliageType_InstancedStaticMesh
    {
        static constexpr std::string_view Name = "FoliageType_InstancedStaticMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FoliageType";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0x460;
            static constexpr std::uintptr_t OverrideMaterials = 0x468;
            static constexpr std::uintptr_t NaniteOverrideMaterials = 0x478;
            static constexpr std::uintptr_t ComponentClass = 0x488;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Mesh", 0x460, "ObjectProperty"},
            {"OverrideMaterials", 0x468, "ArrayProperty"},
            {"NaniteOverrideMaterials", 0x478, "ArrayProperty"},
            {"ComponentClass", 0x488, "ClassProperty"},
        }};
    };

    struct FoliageVertexColorChannelMask
    {
        static constexpr std::string_view Name = "FoliageVertexColorChannelMask";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UseMask = 0x0;
            static constexpr std::uintptr_t MaskThreshold = 0x4;
            static constexpr std::uintptr_t InvertMask = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"UseMask", 0x0, "BoolProperty"},
            {"MaskThreshold", 0x4, "FloatProperty"},
            {"InvertMask", 0x8, "BoolProperty"},
        }};
    };

    struct GrassInstancedStaticMeshComponent
    {
        static constexpr std::string_view Name = "GrassInstancedStaticMeshComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "HierarchicalInstancedStaticMeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bUseTranslatedInstanceSpace = 0xA60;
            static constexpr std::uintptr_t TranslatedInstanceSpaceOrigin = 0xA68;
            static constexpr std::uintptr_t SortedInstances = 0xA80;
            static constexpr std::uintptr_t NumBuiltInstances = 0xA90;
            static constexpr std::uintptr_t BuiltInstanceBounds = 0xA98;
            static constexpr std::uintptr_t UnbuiltInstanceBounds = 0xAD0;
            static constexpr std::uintptr_t UnbuiltInstanceBoundsList = 0xB08;
            static constexpr std::uintptr_t bEnableDensityScaling = 0xB18;
            static constexpr std::uintptr_t OcclusionLayerNumNodes = 0xB20;
            static constexpr std::uintptr_t CacheMeshExtendedBounds = 0xB28;
            static constexpr std::uintptr_t InstanceCountToRender = 0xB60;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"bUseTranslatedInstanceSpace", 0xA60, "BoolProperty"},
            {"TranslatedInstanceSpaceOrigin", 0xA68, "StructProperty"},
            {"SortedInstances", 0xA80, "ArrayProperty"},
            {"NumBuiltInstances", 0xA90, "IntProperty"},
            {"BuiltInstanceBounds", 0xA98, "StructProperty"},
            {"UnbuiltInstanceBounds", 0xAD0, "StructProperty"},
            {"UnbuiltInstanceBoundsList", 0xB08, "ArrayProperty"},
            {"bEnableDensityScaling", 0xB18, "BoolProperty"},
            {"OcclusionLayerNumNodes", 0xB20, "IntProperty"},
            {"CacheMeshExtendedBounds", 0xB28, "StructProperty"},
            {"InstanceCountToRender", 0xB60, "IntProperty"},
        }};
    };

    struct InstancedFoliageActor
    {
        static constexpr std::string_view Name = "InstancedFoliageActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ISMPartitionActor";
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

    struct InteractiveFoliageActor
    {
        static constexpr std::string_view Name = "InteractiveFoliageActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "StaticMeshActor";
        struct Offsets
        {
            static constexpr std::uintptr_t CapsuleComponent = 0x288;
            static constexpr std::uintptr_t TouchingActorEntryPosition = 0x290;
            static constexpr std::uintptr_t FoliageVelocity = 0x2A8;
            static constexpr std::uintptr_t FoliageForce = 0x2C0;
            static constexpr std::uintptr_t FoliagePosition = 0x2D8;
            static constexpr std::uintptr_t FoliageDamageImpulseScale = 0x2F0;
            static constexpr std::uintptr_t FoliageTouchImpulseScale = 0x2F4;
            static constexpr std::uintptr_t FoliageStiffness = 0x2F8;
            static constexpr std::uintptr_t FoliageStiffnessQuadratic = 0x2FC;
            static constexpr std::uintptr_t FoliageDamping = 0x300;
            static constexpr std::uintptr_t MaxDamageImpulse = 0x304;
            static constexpr std::uintptr_t MaxTouchImpulse = 0x308;
            static constexpr std::uintptr_t MaxForce = 0x30C;
            static constexpr std::uintptr_t Mass = 0x310;
        };

        inline static constexpr std::array<PropertyInfo, 14> Properties{{
            {"CapsuleComponent", 0x288, "ObjectProperty"},
            {"TouchingActorEntryPosition", 0x290, "StructProperty"},
            {"FoliageVelocity", 0x2A8, "StructProperty"},
            {"FoliageForce", 0x2C0, "StructProperty"},
            {"FoliagePosition", 0x2D8, "StructProperty"},
            {"FoliageDamageImpulseScale", 0x2F0, "FloatProperty"},
            {"FoliageTouchImpulseScale", 0x2F4, "FloatProperty"},
            {"FoliageStiffness", 0x2F8, "FloatProperty"},
            {"FoliageStiffnessQuadratic", 0x2FC, "FloatProperty"},
            {"FoliageDamping", 0x300, "FloatProperty"},
            {"MaxDamageImpulse", 0x304, "FloatProperty"},
            {"MaxTouchImpulse", 0x308, "FloatProperty"},
            {"MaxForce", 0x30C, "FloatProperty"},
            {"Mass", 0x310, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "CapsuleTouched",
        }};
    };

    struct InteractiveFoliageComponent
    {
        static constexpr std::string_view Name = "InteractiveFoliageComponent";
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

    struct ProceduralFoliageBlockingVolume
    {
        static constexpr std::string_view Name = "ProceduralFoliageBlockingVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Volume";
        struct Offsets
        {
            static constexpr std::uintptr_t ProceduralFoliageVolume = 0x2B0;
            static constexpr std::uintptr_t DensityFalloff = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ProceduralFoliageVolume", 0x2B0, "ObjectProperty"},
            {"DensityFalloff", 0x2B8, "StructProperty"},
        }};
    };

    struct ProceduralFoliageComponent
    {
        static constexpr std::string_view Name = "ProceduralFoliageComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t FoliageSpawner = 0xC0;
            static constexpr std::uintptr_t TileOverlap = 0xC8;
            static constexpr std::uintptr_t SpawningVolume = 0xD0;
            static constexpr std::uintptr_t ProceduralGuid = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"FoliageSpawner", 0xC0, "ObjectProperty"},
            {"TileOverlap", 0xC8, "FloatProperty"},
            {"SpawningVolume", 0xD0, "ObjectProperty"},
            {"ProceduralGuid", 0xD8, "StructProperty"},
        }};
    };

    struct ProceduralFoliageInstance
    {
        static constexpr std::string_view Name = "ProceduralFoliageInstance";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Rotation = 0x0;
            static constexpr std::uintptr_t Location = 0x20;
            static constexpr std::uintptr_t Age = 0x38;
            static constexpr std::uintptr_t Normal = 0x40;
            static constexpr std::uintptr_t Scale = 0x58;
            static constexpr std::uintptr_t Type = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"Rotation", 0x0, "StructProperty"},
            {"Location", 0x20, "StructProperty"},
            {"Age", 0x38, "FloatProperty"},
            {"Normal", 0x40, "StructProperty"},
            {"Scale", 0x58, "FloatProperty"},
            {"Type", 0x60, "ObjectProperty"},
        }};
    };

    struct ProceduralFoliageSpawner
    {
        static constexpr std::string_view Name = "ProceduralFoliageSpawner";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t RandomSeed = 0x28;
            static constexpr std::uintptr_t TileSize = 0x2C;
            static constexpr std::uintptr_t NumUniqueTiles = 0x30;
            static constexpr std::uintptr_t MinimumQuadTreeSize = 0x34;
            static constexpr std::uintptr_t FoliageTypes = 0x40;
            static constexpr std::uintptr_t bUseOverrideFoliageTerrainMaterials = 0x50;
            static constexpr std::uintptr_t OverrideFoliageTerrainMaterials = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"RandomSeed", 0x28, "IntProperty"},
            {"TileSize", 0x2C, "FloatProperty"},
            {"NumUniqueTiles", 0x30, "IntProperty"},
            {"MinimumQuadTreeSize", 0x34, "FloatProperty"},
            {"FoliageTypes", 0x40, "ArrayProperty"},
            {"bUseOverrideFoliageTerrainMaterials", 0x50, "BoolProperty"},
            {"OverrideFoliageTerrainMaterials", 0x58, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "Simulate",
        }};
    };

    struct ProceduralFoliageTile
    {
        static constexpr std::string_view Name = "ProceduralFoliageTile";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t FoliageSpawner = 0x28;
            static constexpr std::uintptr_t InstancesArray = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"FoliageSpawner", 0x28, "ObjectProperty"},
            {"InstancesArray", 0x50, "ArrayProperty"},
        }};
    };

    struct ProceduralFoliageVolume
    {
        static constexpr std::string_view Name = "ProceduralFoliageVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Volume";
        struct Offsets
        {
            static constexpr std::uintptr_t ProceduralComponent = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ProceduralComponent", 0x2B8, "ObjectProperty"},
        }};
    };

}
