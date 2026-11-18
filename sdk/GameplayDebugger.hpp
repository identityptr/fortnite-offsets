#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::GameplayDebugger
{
    struct GameplayDebuggerCategoryConfig
    {
        static constexpr std::string_view Name = "GameplayDebuggerCategoryConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryName = 0x0;
            static constexpr std::uintptr_t SlotIdx = 0x10;
            static constexpr std::uintptr_t ActiveInGame = 0x14;
            static constexpr std::uintptr_t ActiveInSimulate = 0x15;
            static constexpr std::uintptr_t Hidden = 0x16;
            static constexpr std::uintptr_t bOverrideSlotIdx = 0x18;
            static constexpr std::uintptr_t InputHandlers = 0x20;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CategoryName", 0x0, "StrProperty"},
            {"SlotIdx", 0x10, "IntProperty"},
            {"ActiveInGame", 0x14, "EnumProperty"},
            {"ActiveInSimulate", 0x15, "EnumProperty"},
            {"Hidden", 0x16, "EnumProperty"},
            {"bOverrideSlotIdx", 0x18, "BoolProperty"},
            {"InputHandlers", 0x20, "ArrayProperty"},
        }};
    };

    struct GameplayDebuggerCategoryData
    {
        static constexpr std::string_view Name = "GameplayDebuggerCategoryData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryName = 0x0;
            static constexpr std::uintptr_t TextLines = 0x8;
            static constexpr std::uintptr_t Shapes = 0x18;
            static constexpr std::uintptr_t DataPacks = 0x28;
            static constexpr std::uintptr_t bIsEnabled = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CategoryName", 0x0, "NameProperty"},
            {"TextLines", 0x8, "ArrayProperty"},
            {"Shapes", 0x18, "ArrayProperty"},
            {"DataPacks", 0x28, "ArrayProperty"},
            {"bIsEnabled", 0x38, "BoolProperty"},
        }};
    };

    struct GameplayDebuggerCategoryReplicator
    {
        static constexpr std::string_view Name = "GameplayDebuggerCategoryReplicator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t OwnerPC = 0x278;
            static constexpr std::uintptr_t bIsEnabled = 0x280;
            static constexpr std::uintptr_t ReplicatedData = 0x288;
            static constexpr std::uintptr_t DebugActor = 0x2A0;
            static constexpr std::uintptr_t VisLogSync = 0x2B0;
            static constexpr std::uintptr_t RenderingComp = 0x2C0;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"OwnerPC", 0x278, "ObjectProperty"},
            {"bIsEnabled", 0x280, "BoolProperty"},
            {"ReplicatedData", 0x288, "StructProperty"},
            {"DebugActor", 0x2A0, "StructProperty"},
            {"VisLogSync", 0x2B0, "StructProperty"},
            {"RenderingComp", 0x2C0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 11> FunctionNames{{
            "ClientDataPackPacket",
            "OnRep_ReplicatedData",
            "ServerResetViewPoint",
            "ServerSendCategoryInputEvent",
            "ServerSendCategoryNameInputEvent",
            "ServerSendExtensionInputEvent",
            "ServerSetCategoryEnabled",
            "ServerSetCategoryNameEnabled",
            "ServerSetDebugActor",
            "ServerSetEnabled",
            "ServerSetViewPoint",
        }};
    };

    struct GameplayDebuggerConfig
    {
        static constexpr std::string_view Name = "GameplayDebuggerConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ActivationKey = 0x28;
            static constexpr std::uintptr_t CategoryRowNextKey = 0x40;
            static constexpr std::uintptr_t CategoryRowPrevKey = 0x58;
            static constexpr std::uintptr_t CategorySlot0 = 0x70;
            static constexpr std::uintptr_t CategorySlot1 = 0x88;
            static constexpr std::uintptr_t CategorySlot2 = 0xA0;
            static constexpr std::uintptr_t CategorySlot3 = 0xB8;
            static constexpr std::uintptr_t CategorySlot4 = 0xD0;
            static constexpr std::uintptr_t CategorySlot5 = 0xE8;
            static constexpr std::uintptr_t CategorySlot6 = 0x100;
            static constexpr std::uintptr_t CategorySlot7 = 0x118;
            static constexpr std::uintptr_t CategorySlot8 = 0x130;
            static constexpr std::uintptr_t CategorySlot9 = 0x148;
            static constexpr std::uintptr_t DebugCanvasPaddingLeft = 0x160;
            static constexpr std::uintptr_t DebugCanvasPaddingRight = 0x164;
            static constexpr std::uintptr_t DebugCanvasPaddingTop = 0x168;
            static constexpr std::uintptr_t DebugCanvasPaddingBottom = 0x16C;
            static constexpr std::uintptr_t bDebugCanvasEnableTextShadow = 0x170;
            static constexpr std::uintptr_t Categories = 0x178;
            static constexpr std::uintptr_t Extensions = 0x188;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"ActivationKey", 0x28, "StructProperty"},
            {"CategoryRowNextKey", 0x40, "StructProperty"},
            {"CategoryRowPrevKey", 0x58, "StructProperty"},
            {"CategorySlot0", 0x70, "StructProperty"},
            {"CategorySlot1", 0x88, "StructProperty"},
            {"CategorySlot2", 0xA0, "StructProperty"},
            {"CategorySlot3", 0xB8, "StructProperty"},
            {"CategorySlot4", 0xD0, "StructProperty"},
            {"CategorySlot5", 0xE8, "StructProperty"},
            {"CategorySlot6", 0x100, "StructProperty"},
            {"CategorySlot7", 0x118, "StructProperty"},
            {"CategorySlot8", 0x130, "StructProperty"},
            {"CategorySlot9", 0x148, "StructProperty"},
            {"DebugCanvasPaddingLeft", 0x160, "FloatProperty"},
            {"DebugCanvasPaddingRight", 0x164, "FloatProperty"},
            {"DebugCanvasPaddingTop", 0x168, "FloatProperty"},
            {"DebugCanvasPaddingBottom", 0x16C, "FloatProperty"},
            {"bDebugCanvasEnableTextShadow", 0x170, "BoolProperty"},
            {"Categories", 0x178, "ArrayProperty"},
            {"Extensions", 0x188, "ArrayProperty"},
        }};
    };

    struct GameplayDebuggerDataPackHeader
    {
        static constexpr std::string_view Name = "GameplayDebuggerDataPackHeader";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DataVersion = 0x0;
            static constexpr std::uintptr_t SyncCounter = 0x2;
            static constexpr std::uintptr_t DataSize = 0x4;
            static constexpr std::uintptr_t DataOffset = 0x8;
            static constexpr std::uintptr_t bIsCompressed = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DataVersion", 0x0, "Int16Property"},
            {"SyncCounter", 0x2, "Int16Property"},
            {"DataSize", 0x4, "IntProperty"},
            {"DataOffset", 0x8, "IntProperty"},
            {"bIsCompressed", 0xC, "BoolProperty"},
        }};
    };

    struct GameplayDebuggerDataPackRPCParams
    {
        static constexpr std::string_view Name = "GameplayDebuggerDataPackRPCParams";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CategoryName = 0x0;
            static constexpr std::uintptr_t DataPackIdx = 0x4;
            static constexpr std::uintptr_t Header = 0x8;
            static constexpr std::uintptr_t Data = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CategoryName", 0x0, "NameProperty"},
            {"DataPackIdx", 0x4, "IntProperty"},
            {"Header", 0x8, "StructProperty"},
            {"Data", 0x18, "ArrayProperty"},
        }};
    };

    struct GameplayDebuggerDebugActor
    {
        static constexpr std::string_view Name = "GameplayDebuggerDebugActor";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Actor = 0x0;
            static constexpr std::uintptr_t ActorName = 0x8;
            static constexpr std::uintptr_t SyncCounter = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Actor", 0x0, "WeakObjectProperty"},
            {"ActorName", 0x8, "NameProperty"},
            {"SyncCounter", 0xC, "Int16Property"},
        }};
    };

    struct GameplayDebuggerExtensionConfig
    {
        static constexpr std::string_view Name = "GameplayDebuggerExtensionConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ExtensionName = 0x0;
            static constexpr std::uintptr_t UseExtension = 0x10;
            static constexpr std::uintptr_t InputHandlers = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ExtensionName", 0x0, "StrProperty"},
            {"UseExtension", 0x10, "EnumProperty"},
            {"InputHandlers", 0x18, "ArrayProperty"},
        }};
    };

    struct GameplayDebuggerInputConfig
    {
        static constexpr std::string_view Name = "GameplayDebuggerInputConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ConfigName = 0x0;
            static constexpr std::uintptr_t Key = 0x10;
            static constexpr std::uintptr_t bModAlt = 0x28;
            static constexpr std::uintptr_t bModCmd = 0x28;
            static constexpr std::uintptr_t bModCtrl = 0x28;
            static constexpr std::uintptr_t bModShift = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ConfigName", 0x0, "StrProperty"},
            {"Key", 0x10, "StructProperty"},
            {"bModAlt", 0x28, "BoolProperty"},
            {"bModCmd", 0x28, "BoolProperty"},
            {"bModCtrl", 0x28, "BoolProperty"},
            {"bModShift", 0x28, "BoolProperty"},
        }};
    };

    struct GameplayDebuggerLocalController
    {
        static constexpr std::string_view Name = "GameplayDebuggerLocalController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedReplicator = 0x28;
            static constexpr std::uintptr_t CachedPlayerManager = 0x30;
            static constexpr std::uintptr_t DebugActorCandidate = 0x38;
            static constexpr std::uintptr_t HUDFont = 0x40;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"CachedReplicator", 0x28, "ObjectProperty"},
            {"CachedPlayerManager", 0x30, "ObjectProperty"},
            {"DebugActorCandidate", 0x38, "ObjectProperty"},
            {"HUDFont", 0x40, "ObjectProperty"},
        }};
    };

    struct GameplayDebuggerNetPack
    {
        static constexpr std::string_view Name = "GameplayDebuggerNetPack";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x0;
            static constexpr std::uintptr_t SavedData = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Owner", 0x0, "ObjectProperty"},
            {"SavedData", 0x8, "ArrayProperty"},
        }};
    };

    struct GameplayDebuggerPlayerData
    {
        static constexpr std::string_view Name = "GameplayDebuggerPlayerData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Controller = 0x0;
            static constexpr std::uintptr_t InputComponent = 0x8;
            static constexpr std::uintptr_t Replicator = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Controller", 0x0, "ObjectProperty"},
            {"InputComponent", 0x8, "ObjectProperty"},
            {"Replicator", 0x10, "ObjectProperty"},
        }};
    };

    struct GameplayDebuggerPlayerManager
    {
        static constexpr std::string_view Name = "GameplayDebuggerPlayerManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PlayerData = 0x280;
            static constexpr std::uintptr_t PendingRegistrations = 0x290;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PlayerData", 0x280, "ArrayProperty"},
            {"PendingRegistrations", 0x290, "ArrayProperty"},
        }};
    };

    struct GameplayDebuggerRenderingComponent
    {
        static constexpr std::string_view Name = "GameplayDebuggerRenderingComponent";
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

    struct GameplayDebuggerRuntimeSettings
    {
        static constexpr std::string_view Name = "GameplayDebuggerRuntimeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t EnabledCategories = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EnabledCategories", 0x28, "SetProperty"},
        }};
    };

    struct GameplayDebuggerShape
    {
        static constexpr std::string_view Name = "GameplayDebuggerShape";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ShapeData = 0x0;
            static constexpr std::uintptr_t Description = 0x10;
            static constexpr std::uintptr_t Color = 0x20;
            static constexpr std::uintptr_t Type = 0x24;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"ShapeData", 0x0, "ArrayProperty"},
            {"Description", 0x10, "StrProperty"},
            {"Color", 0x20, "StructProperty"},
            {"Type", 0x24, "EnumProperty"},
        }};
    };

    struct GameplayDebuggerUserSettings
    {
        static constexpr std::string_view Name = "GameplayDebuggerUserSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DeveloperSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableGameplayDebuggerInEditor = 0x30;
            static constexpr std::uintptr_t MaxViewDistance = 0x34;
            static constexpr std::uintptr_t MaxViewAngle = 0x38;
            static constexpr std::uintptr_t EnabledCategories = 0x40;
            static constexpr std::uintptr_t FontSize = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bEnableGameplayDebuggerInEditor", 0x30, "BoolProperty"},
            {"MaxViewDistance", 0x34, "FloatProperty"},
            {"MaxViewAngle", 0x38, "FloatProperty"},
            {"EnabledCategories", 0x40, "SetProperty"},
            {"FontSize", 0x50, "IntProperty"},
        }};
    };

    struct GameplayDebuggerVisLogSync
    {
        static constexpr std::string_view Name = "GameplayDebuggerVisLogSync";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t DeviceIDs = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DeviceIDs", 0x0, "StrProperty"},
        }};
    };

}
