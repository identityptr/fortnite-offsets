#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::Paper2D
{
    struct IntMargin
    {
        static constexpr std::string_view Name = "IntMargin";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Left = 0x0;
            static constexpr std::uintptr_t Top = 0x4;
            static constexpr std::uintptr_t Right = 0x8;
            static constexpr std::uintptr_t Bottom = 0xC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Left", 0x0, "IntProperty"},
            {"Top", 0x4, "IntProperty"},
            {"Right", 0x8, "IntProperty"},
            {"Bottom", 0xC, "IntProperty"},
        }};
    };

    struct MaterialExpressionSpriteTextureSampler
    {
        static constexpr std::string_view Name = "MaterialExpressionSpriteTextureSampler";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MaterialExpressionTextureSampleParameter2D";
        struct Offsets
        {
            static constexpr std::uintptr_t bSampleAdditionalTextures = 0x220;
            static constexpr std::uintptr_t AdditionalSlotIndex = 0x224;
            static constexpr std::uintptr_t SlotDisplayName = 0x228;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bSampleAdditionalTextures", 0x220, "BoolProperty"},
            {"AdditionalSlotIndex", 0x224, "IntProperty"},
            {"SlotDisplayName", 0x228, "TextProperty"},
        }};
    };

    struct PaperCharacter
    {
        static constexpr std::string_view Name = "PaperCharacter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Character";
        struct Offsets
        {
            static constexpr std::uintptr_t Sprite = 0x640;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Sprite", 0x640, "ObjectProperty"},
        }};
    };

    struct PaperFlipbook
    {
        static constexpr std::string_view Name = "PaperFlipbook";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t framesPerSecond = 0x28;
            static constexpr std::uintptr_t Keyframes = 0x30;
            static constexpr std::uintptr_t DefaultMaterial = 0x40;
            static constexpr std::uintptr_t CollisionSource = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"framesPerSecond", 0x28, "FloatProperty"},
            {"Keyframes", 0x30, "ArrayProperty"},
            {"DefaultMaterial", 0x40, "ObjectProperty"},
            {"CollisionSource", 0x48, "ByteProperty"},
        }};

        inline static constexpr std::array<std::string_view, 7> FunctionNames{{
            "GetKeyFrameIndexAtTime",
            "GetNumFrames",
            "GetNumKeyFrames",
            "GetSpriteAtFrame",
            "GetSpriteAtTime",
            "GetTotalDuration",
            "IsValidKeyFrameIndex",
        }};
    };

    struct PaperFlipbookActor
    {
        static constexpr std::string_view Name = "PaperFlipbookActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t RenderComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RenderComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct PaperFlipbookComponent
    {
        static constexpr std::string_view Name = "PaperFlipbookComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceFlipbook = 0x5C0;
            static constexpr std::uintptr_t Material = 0x5C8;
            static constexpr std::uintptr_t PlayRate = 0x5D0;
            static constexpr std::uintptr_t bLooping = 0x5D4;
            static constexpr std::uintptr_t bPlaying = 0x5D4;
            static constexpr std::uintptr_t bReversePlayback = 0x5D4;
            static constexpr std::uintptr_t AccumulatedTime = 0x5D8;
            static constexpr std::uintptr_t CachedFrameIndex = 0x5DC;
            static constexpr std::uintptr_t SpriteColor = 0x5E0;
            static constexpr std::uintptr_t CachedBodySetup = 0x5F0;
            static constexpr std::uintptr_t OnFinishedPlaying = 0x5F8;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"SourceFlipbook", 0x5C0, "ObjectProperty"},
            {"Material", 0x5C8, "ObjectProperty"},
            {"PlayRate", 0x5D0, "FloatProperty"},
            {"bLooping", 0x5D4, "BoolProperty"},
            {"bPlaying", 0x5D4, "BoolProperty"},
            {"bReversePlayback", 0x5D4, "BoolProperty"},
            {"AccumulatedTime", 0x5D8, "FloatProperty"},
            {"CachedFrameIndex", 0x5DC, "IntProperty"},
            {"SpriteColor", 0x5E0, "StructProperty"},
            {"CachedBodySetup", 0x5F0, "ObjectProperty"},
            {"OnFinishedPlaying", 0x5F8, "MulticastInlineDelegateProperty"},
        }};

        inline static constexpr std::array<std::string_view, 24> FunctionNames{{
            "GetFlipbook",
            "GetFlipbookFramerate",
            "GetFlipbookLength",
            "GetFlipbookLengthInFrames",
            "GetPlayRate",
            "GetPlaybackPosition",
            "GetPlaybackPositionInFrames",
            "GetSpriteColor",
            "IsLooping",
            "IsPlaying",
            "IsReversing",
            "OnRep_SourceFlipbook",
            "Play",
            "PlayFromStart",
            "Reverse",
            "ReverseFromEnd",
            "SetFlipbook",
            "SetLooping",
            "SetNewTime",
            "SetPlayRate",
            "SetPlaybackPosition",
            "SetPlaybackPositionInFrames",
            "SetSpriteColor",
            "Stop",
        }};
    };

    struct PaperFlipbookKeyFrame
    {
        static constexpr std::string_view Name = "PaperFlipbookKeyFrame";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Sprite = 0x0;
            static constexpr std::uintptr_t FrameRun = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Sprite", 0x0, "ObjectProperty"},
            {"FrameRun", 0x8, "IntProperty"},
        }};
    };

    struct PaperGroupedSpriteActor
    {
        static constexpr std::string_view Name = "PaperGroupedSpriteActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t RenderComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RenderComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct PaperGroupedSpriteComponent
    {
        static constexpr std::string_view Name = "PaperGroupedSpriteComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t InstanceMaterials = 0x5C0;
            static constexpr std::uintptr_t PerInstanceSpriteData = 0x5D0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"InstanceMaterials", 0x5C0, "ArrayProperty"},
            {"PerInstanceSpriteData", 0x5D0, "ArrayProperty"},
        }};

        inline static constexpr std::array<std::string_view, 8> FunctionNames{{
            "AddInstance",
            "ClearInstances",
            "GetInstanceCount",
            "GetInstanceTransform",
            "RemoveInstance",
            "SortInstancesAlongAxis",
            "UpdateInstanceColor",
            "UpdateInstanceTransform",
        }};
    };

    struct PaperRuntimeSettings
    {
        static constexpr std::string_view Name = "PaperRuntimeSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnableSpriteAtlasGroups = 0x28;
            static constexpr std::uintptr_t bEnableTerrainSplineEditing = 0x29;
            static constexpr std::uintptr_t bResizeSpriteDataToMatchTextures = 0x2A;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bEnableSpriteAtlasGroups", 0x28, "BoolProperty"},
            {"bEnableTerrainSplineEditing", 0x29, "BoolProperty"},
            {"bResizeSpriteDataToMatchTextures", 0x2A, "BoolProperty"},
        }};
    };

    struct PaperSprite
    {
        static constexpr std::string_view Name = "PaperSprite";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t AdditionalSourceTextures = 0x38;
            static constexpr std::uintptr_t BakedSourceUV = 0x48;
            static constexpr std::uintptr_t BakedSourceDimension = 0x58;
            static constexpr std::uintptr_t BakedSourceTexture = 0x68;
            static constexpr std::uintptr_t DefaultMaterial = 0x70;
            static constexpr std::uintptr_t AlternateMaterial = 0x78;
            static constexpr std::uintptr_t Sockets = 0x80;
            static constexpr std::uintptr_t SpriteCollisionDomain = 0x90;
            static constexpr std::uintptr_t PixelsPerUnrealUnit = 0x94;
            static constexpr std::uintptr_t BodySetup = 0x98;
            static constexpr std::uintptr_t AlternateMaterialSplitIndex = 0xA0;
            static constexpr std::uintptr_t BakedRenderData = 0xA8;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"AdditionalSourceTextures", 0x38, "ArrayProperty"},
            {"BakedSourceUV", 0x48, "StructProperty"},
            {"BakedSourceDimension", 0x58, "StructProperty"},
            {"BakedSourceTexture", 0x68, "ObjectProperty"},
            {"DefaultMaterial", 0x70, "ObjectProperty"},
            {"AlternateMaterial", 0x78, "ObjectProperty"},
            {"Sockets", 0x80, "ArrayProperty"},
            {"SpriteCollisionDomain", 0x90, "ByteProperty"},
            {"PixelsPerUnrealUnit", 0x94, "FloatProperty"},
            {"BodySetup", 0x98, "ObjectProperty"},
            {"AlternateMaterialSplitIndex", 0xA0, "IntProperty"},
            {"BakedRenderData", 0xA8, "ArrayProperty"},
        }};
    };

    struct PaperSpriteActor
    {
        static constexpr std::string_view Name = "PaperSpriteActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t RenderComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RenderComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct PaperSpriteAtlas
    {
        static constexpr std::string_view Name = "PaperSpriteAtlas";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct PaperSpriteAtlasSlot
    {
        static constexpr std::string_view Name = "PaperSpriteAtlasSlot";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t SpriteRef = 0x0;
            static constexpr std::uintptr_t AtlasIndex = 0x20;
            static constexpr std::uintptr_t X = 0x24;
            static constexpr std::uintptr_t Y = 0x28;
            static constexpr std::uintptr_t Width = 0x2C;
            static constexpr std::uintptr_t Height = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SpriteRef", 0x0, "SoftObjectProperty"},
            {"AtlasIndex", 0x20, "IntProperty"},
            {"X", 0x24, "IntProperty"},
            {"Y", 0x28, "IntProperty"},
            {"Width", 0x2C, "IntProperty"},
            {"Height", 0x30, "IntProperty"},
        }};
    };

    struct PaperSpriteBlueprintLibrary
    {
        static constexpr std::string_view Name = "PaperSpriteBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "MakeBrushFromSprite",
        }};
    };

    struct PaperSpriteComponent
    {
        static constexpr std::string_view Name = "PaperSpriteComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceSprite = 0x5C0;
            static constexpr std::uintptr_t MaterialOverride = 0x5C8;
            static constexpr std::uintptr_t SpriteColor = 0x5D0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SourceSprite", 0x5C0, "ObjectProperty"},
            {"MaterialOverride", 0x5C8, "ObjectProperty"},
            {"SpriteColor", 0x5D0, "StructProperty"},
        }};

        inline static constexpr std::array<std::string_view, 3> FunctionNames{{
            "GetSprite",
            "SetSprite",
            "SetSpriteColor",
        }};
    };

    struct PaperSpriteSocket
    {
        static constexpr std::string_view Name = "PaperSpriteSocket";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t LocalTransform = 0x0;
            static constexpr std::uintptr_t SocketName = 0x60;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LocalTransform", 0x0, "StructProperty"},
            {"SocketName", 0x60, "NameProperty"},
        }};
    };

    struct PaperTerrainActor
    {
        static constexpr std::string_view Name = "PaperTerrainActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t DummyRoot = 0x278;
            static constexpr std::uintptr_t SplineComponent = 0x280;
            static constexpr std::uintptr_t RenderComponent = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"DummyRoot", 0x278, "ObjectProperty"},
            {"SplineComponent", 0x280, "ObjectProperty"},
            {"RenderComponent", 0x288, "ObjectProperty"},
        }};
    };

    struct PaperTerrainComponent
    {
        static constexpr std::string_view Name = "PaperTerrainComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TerrainMaterial = 0x560;
            static constexpr std::uintptr_t bClosedSpline = 0x568;
            static constexpr std::uintptr_t bFilledSpline = 0x569;
            static constexpr std::uintptr_t AssociatedSpline = 0x570;
            static constexpr std::uintptr_t RandomSeed = 0x578;
            static constexpr std::uintptr_t SegmentOverlapAmount = 0x57C;
            static constexpr std::uintptr_t TerrainColor = 0x580;
            static constexpr std::uintptr_t ReparamStepsPerSegment = 0x590;
            static constexpr std::uintptr_t SpriteCollisionDomain = 0x594;
            static constexpr std::uintptr_t CollisionThickness = 0x598;
            static constexpr std::uintptr_t CachedBodySetup = 0x5A0;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"TerrainMaterial", 0x560, "ObjectProperty"},
            {"bClosedSpline", 0x568, "BoolProperty"},
            {"bFilledSpline", 0x569, "BoolProperty"},
            {"AssociatedSpline", 0x570, "ObjectProperty"},
            {"RandomSeed", 0x578, "IntProperty"},
            {"SegmentOverlapAmount", 0x57C, "FloatProperty"},
            {"TerrainColor", 0x580, "StructProperty"},
            {"ReparamStepsPerSegment", 0x590, "IntProperty"},
            {"SpriteCollisionDomain", 0x594, "ByteProperty"},
            {"CollisionThickness", 0x598, "FloatProperty"},
            {"CachedBodySetup", 0x5A0, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetTerrainColor",
        }};
    };

    struct PaperTerrainMaterial
    {
        static constexpr std::string_view Name = "PaperTerrainMaterial";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t Rules = 0x28;
            static constexpr std::uintptr_t InteriorFill = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Rules", 0x28, "ArrayProperty"},
            {"InteriorFill", 0x38, "ObjectProperty"},
        }};
    };

    struct PaperTerrainMaterialRule
    {
        static constexpr std::string_view Name = "PaperTerrainMaterialRule";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t StartCap = 0x0;
            static constexpr std::uintptr_t Body = 0x8;
            static constexpr std::uintptr_t EndCap = 0x18;
            static constexpr std::uintptr_t MinimumAngle = 0x20;
            static constexpr std::uintptr_t MaximumAngle = 0x24;
            static constexpr std::uintptr_t bEnableCollision = 0x28;
            static constexpr std::uintptr_t CollisionOffset = 0x2C;
            static constexpr std::uintptr_t DrawOrder = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"StartCap", 0x0, "ObjectProperty"},
            {"Body", 0x8, "ArrayProperty"},
            {"EndCap", 0x18, "ObjectProperty"},
            {"MinimumAngle", 0x20, "FloatProperty"},
            {"MaximumAngle", 0x24, "FloatProperty"},
            {"bEnableCollision", 0x28, "BoolProperty"},
            {"CollisionOffset", 0x2C, "FloatProperty"},
            {"DrawOrder", 0x30, "IntProperty"},
        }};
    };

    struct PaperTerrainSplineComponent
    {
        static constexpr std::string_view Name = "PaperTerrainSplineComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SplineComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Spline = 0x560;
            static constexpr std::uintptr_t SplineCurves = 0x578;
            static constexpr std::uintptr_t ReparamStepsPerSegment = 0x5E0;
            static constexpr std::uintptr_t duration = 0x5E4;
            static constexpr std::uintptr_t bStationaryEndpoints = 0x5E8;
            static constexpr std::uintptr_t bSplineHasBeenEdited = 0x5E9;
            static constexpr std::uintptr_t bModifiedByConstructionScript = 0x5EA;
            static constexpr std::uintptr_t bInputSplinePointsToConstructionScript = 0x5EB;
            static constexpr std::uintptr_t bDrawDebug = 0x5EC;
            static constexpr std::uintptr_t bClosedLoop = 0x5ED;
            static constexpr std::uintptr_t bLoopPositionOverride = 0x5EE;
            static constexpr std::uintptr_t LoopPosition = 0x5F0;
            static constexpr std::uintptr_t LineMaterial = 0x5F8;
            static constexpr std::uintptr_t PointMaterial = 0x618;
            static constexpr std::uintptr_t LineMaterialLifetimePtr = 0x638;
            static constexpr std::uintptr_t PointMaterialLifetimePtr = 0x640;
            static constexpr std::uintptr_t DefaultUpVector = 0x650;
            static constexpr std::uintptr_t LastAuthority = 0x6B0;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"Spline", 0x560, "StructProperty"},
            {"SplineCurves", 0x578, "StructProperty"},
            {"ReparamStepsPerSegment", 0x5E0, "IntProperty"},
            {"duration", 0x5E4, "FloatProperty"},
            {"bStationaryEndpoints", 0x5E8, "BoolProperty"},
            {"bSplineHasBeenEdited", 0x5E9, "BoolProperty"},
            {"bModifiedByConstructionScript", 0x5EA, "BoolProperty"},
            {"bInputSplinePointsToConstructionScript", 0x5EB, "BoolProperty"},
            {"bDrawDebug", 0x5EC, "BoolProperty"},
            {"bClosedLoop", 0x5ED, "BoolProperty"},
            {"bLoopPositionOverride", 0x5EE, "BoolProperty"},
            {"LoopPosition", 0x5F0, "FloatProperty"},
            {"LineMaterial", 0x5F8, "SoftObjectProperty"},
            {"PointMaterial", 0x618, "SoftObjectProperty"},
            {"LineMaterialLifetimePtr", 0x638, "ObjectProperty"},
            {"PointMaterialLifetimePtr", 0x640, "ObjectProperty"},
            {"DefaultUpVector", 0x650, "StructProperty"},
            {"LastAuthority", 0x6B0, "EnumProperty"},
        }};
    };

    struct PaperTileInfo
    {
        static constexpr std::string_view Name = "PaperTileInfo";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TileSet = 0x0;
            static constexpr std::uintptr_t PackedTileIndex = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TileSet", 0x0, "ObjectProperty"},
            {"PackedTileIndex", 0x8, "IntProperty"},
        }};
    };

    struct PaperTileLayer
    {
        static constexpr std::string_view Name = "PaperTileLayer";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LayerName = 0x28;
            static constexpr std::uintptr_t LayerWidth = 0x38;
            static constexpr std::uintptr_t LayerHeight = 0x3C;
            static constexpr std::uintptr_t bHiddenInGame = 0x40;
            static constexpr std::uintptr_t bLayerCollides = 0x40;
            static constexpr std::uintptr_t bOverrideCollisionOffset = 0x40;
            static constexpr std::uintptr_t bOverrideCollisionThickness = 0x40;
            static constexpr std::uintptr_t CollisionThicknessOverride = 0x44;
            static constexpr std::uintptr_t CollisionOffsetOverride = 0x48;
            static constexpr std::uintptr_t LayerColor = 0x4C;
            static constexpr std::uintptr_t AllocatedWidth = 0x5C;
            static constexpr std::uintptr_t AllocatedHeight = 0x60;
            static constexpr std::uintptr_t AllocatedCells = 0x68;
            static constexpr std::uintptr_t TileSet = 0x78;
            static constexpr std::uintptr_t AllocatedGrid = 0x80;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"LayerName", 0x28, "TextProperty"},
            {"LayerWidth", 0x38, "IntProperty"},
            {"LayerHeight", 0x3C, "IntProperty"},
            {"bHiddenInGame", 0x40, "BoolProperty"},
            {"bLayerCollides", 0x40, "BoolProperty"},
            {"bOverrideCollisionOffset", 0x40, "BoolProperty"},
            {"bOverrideCollisionThickness", 0x40, "BoolProperty"},
            {"CollisionThicknessOverride", 0x44, "FloatProperty"},
            {"CollisionOffsetOverride", 0x48, "FloatProperty"},
            {"LayerColor", 0x4C, "StructProperty"},
            {"AllocatedWidth", 0x5C, "IntProperty"},
            {"AllocatedHeight", 0x60, "IntProperty"},
            {"AllocatedCells", 0x68, "ArrayProperty"},
            {"TileSet", 0x78, "ObjectProperty"},
            {"AllocatedGrid", 0x80, "ArrayProperty"},
        }};
    };

    struct PaperTileMap
    {
        static constexpr std::string_view Name = "PaperTileMap";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MapWidth = 0x28;
            static constexpr std::uintptr_t MapHeight = 0x2C;
            static constexpr std::uintptr_t TileWidth = 0x30;
            static constexpr std::uintptr_t TileHeight = 0x34;
            static constexpr std::uintptr_t PixelsPerUnrealUnit = 0x38;
            static constexpr std::uintptr_t SeparationPerTileX = 0x3C;
            static constexpr std::uintptr_t SeparationPerTileY = 0x40;
            static constexpr std::uintptr_t SeparationPerLayer = 0x44;
            static constexpr std::uintptr_t SelectedTileSet = 0x48;
            static constexpr std::uintptr_t Material = 0x68;
            static constexpr std::uintptr_t TileLayers = 0x70;
            static constexpr std::uintptr_t CollisionThickness = 0x80;
            static constexpr std::uintptr_t SpriteCollisionDomain = 0x84;
            static constexpr std::uintptr_t ProjectionMode = 0x85;
            static constexpr std::uintptr_t HexSideLength = 0x88;
            static constexpr std::uintptr_t BodySetup = 0x90;
            static constexpr std::uintptr_t LayerNameIndex = 0x98;
        };

        inline static constexpr std::array<PropertyInfo, 17> Properties{{
            {"MapWidth", 0x28, "IntProperty"},
            {"MapHeight", 0x2C, "IntProperty"},
            {"TileWidth", 0x30, "IntProperty"},
            {"TileHeight", 0x34, "IntProperty"},
            {"PixelsPerUnrealUnit", 0x38, "FloatProperty"},
            {"SeparationPerTileX", 0x3C, "FloatProperty"},
            {"SeparationPerTileY", 0x40, "FloatProperty"},
            {"SeparationPerLayer", 0x44, "FloatProperty"},
            {"SelectedTileSet", 0x48, "SoftObjectProperty"},
            {"Material", 0x68, "ObjectProperty"},
            {"TileLayers", 0x70, "ArrayProperty"},
            {"CollisionThickness", 0x80, "FloatProperty"},
            {"SpriteCollisionDomain", 0x84, "ByteProperty"},
            {"ProjectionMode", 0x85, "ByteProperty"},
            {"HexSideLength", 0x88, "IntProperty"},
            {"BodySetup", 0x90, "ObjectProperty"},
            {"LayerNameIndex", 0x98, "IntProperty"},
        }};
    };

    struct PaperTileMapActor
    {
        static constexpr std::string_view Name = "PaperTileMapActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t RenderComponent = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RenderComponent", 0x278, "ObjectProperty"},
        }};
    };

    struct PaperTileMapComponent
    {
        static constexpr std::string_view Name = "PaperTileMapComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MeshComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MapWidth = 0x5C0;
            static constexpr std::uintptr_t MapHeight = 0x5C4;
            static constexpr std::uintptr_t TileWidth = 0x5C8;
            static constexpr std::uintptr_t TileHeight = 0x5CC;
            static constexpr std::uintptr_t DefaultLayerTileSet = 0x5D0;
            static constexpr std::uintptr_t Material = 0x5D8;
            static constexpr std::uintptr_t TileLayers = 0x5E0;
            static constexpr std::uintptr_t TileMapColor = 0x5F0;
            static constexpr std::uintptr_t UseSingleLayerIndex = 0x600;
            static constexpr std::uintptr_t bUseSingleLayer = 0x604;
            static constexpr std::uintptr_t TileMap = 0x608;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"MapWidth", 0x5C0, "IntProperty"},
            {"MapHeight", 0x5C4, "IntProperty"},
            {"TileWidth", 0x5C8, "IntProperty"},
            {"TileHeight", 0x5CC, "IntProperty"},
            {"DefaultLayerTileSet", 0x5D0, "ObjectProperty"},
            {"Material", 0x5D8, "ObjectProperty"},
            {"TileLayers", 0x5E0, "ArrayProperty"},
            {"TileMapColor", 0x5F0, "StructProperty"},
            {"UseSingleLayerIndex", 0x600, "IntProperty"},
            {"bUseSingleLayer", 0x604, "BoolProperty"},
            {"TileMap", 0x608, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 19> FunctionNames{{
            "AddNewLayer",
            "CreateNewTileMap",
            "GetLayerColor",
            "GetMapSize",
            "GetTile",
            "GetTileCenterPosition",
            "GetTileCornerPosition",
            "GetTileMapColor",
            "GetTilePolygon",
            "MakeTileMapEditable",
            "OwnsTileMap",
            "RebuildCollision",
            "ResizeMap",
            "SetDefaultCollisionThickness",
            "SetLayerCollision",
            "SetLayerColor",
            "SetTile",
            "SetTileMap",
            "SetTileMapColor",
        }};
    };

    struct PaperTileMetadata
    {
        static constexpr std::string_view Name = "PaperTileMetadata";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t UserDataName = 0x0;
            static constexpr std::uintptr_t CollisionData = 0x8;
            static constexpr std::uintptr_t TerrainMembership = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"UserDataName", 0x0, "NameProperty"},
            {"CollisionData", 0x8, "StructProperty"},
            {"TerrainMembership", 0x38, "ByteProperty"},
        }};
    };

    struct PaperTileSet
    {
        static constexpr std::string_view Name = "PaperTileSet";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t TileSize = 0x28;
            static constexpr std::uintptr_t TileSheet = 0x30;
            static constexpr std::uintptr_t AdditionalSourceTextures = 0x38;
            static constexpr std::uintptr_t BorderMargin = 0x48;
            static constexpr std::uintptr_t PerTileSpacing = 0x58;
            static constexpr std::uintptr_t DrawingOffset = 0x60;
            static constexpr std::uintptr_t WidthInTiles = 0x68;
            static constexpr std::uintptr_t HeightInTiles = 0x6C;
            static constexpr std::uintptr_t AllocatedWidth = 0x70;
            static constexpr std::uintptr_t AllocatedHeight = 0x74;
            static constexpr std::uintptr_t PerTileData = 0x78;
            static constexpr std::uintptr_t Terrains = 0x88;
            static constexpr std::uintptr_t TileWidth = 0x98;
            static constexpr std::uintptr_t TileHeight = 0x9C;
            static constexpr std::uintptr_t Margin = 0xA0;
            static constexpr std::uintptr_t Spacing = 0xA4;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"TileSize", 0x28, "StructProperty"},
            {"TileSheet", 0x30, "ObjectProperty"},
            {"AdditionalSourceTextures", 0x38, "ArrayProperty"},
            {"BorderMargin", 0x48, "StructProperty"},
            {"PerTileSpacing", 0x58, "StructProperty"},
            {"DrawingOffset", 0x60, "StructProperty"},
            {"WidthInTiles", 0x68, "IntProperty"},
            {"HeightInTiles", 0x6C, "IntProperty"},
            {"AllocatedWidth", 0x70, "IntProperty"},
            {"AllocatedHeight", 0x74, "IntProperty"},
            {"PerTileData", 0x78, "ArrayProperty"},
            {"Terrains", 0x88, "ArrayProperty"},
            {"TileWidth", 0x98, "IntProperty"},
            {"TileHeight", 0x9C, "IntProperty"},
            {"Margin", 0xA0, "IntProperty"},
            {"Spacing", 0xA4, "IntProperty"},
        }};
    };

    struct PaperTileSetTerrain
    {
        static constexpr std::string_view Name = "PaperTileSetTerrain";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t TerrainName = 0x0;
            static constexpr std::uintptr_t CenterTileIndex = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TerrainName", 0x0, "StrProperty"},
            {"CenterTileIndex", 0x10, "IntProperty"},
        }};
    };

    struct SpriteAssetInitParameters
    {
        static constexpr std::string_view Name = "SpriteAssetInitParameters";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SpriteDrawCallRecord
    {
        static constexpr std::string_view Name = "SpriteDrawCallRecord";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Destination = 0x0;
            static constexpr std::uintptr_t BaseTexture = 0x18;
            static constexpr std::uintptr_t Color = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Destination", 0x0, "StructProperty"},
            {"BaseTexture", 0x18, "ObjectProperty"},
            {"Color", 0x50, "StructProperty"},
        }};
    };

    struct SpriteGeometryCollection
    {
        static constexpr std::string_view Name = "SpriteGeometryCollection";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Shapes = 0x0;
            static constexpr std::uintptr_t GeometryType = 0x10;
            static constexpr std::uintptr_t PixelsPerSubdivisionX = 0x14;
            static constexpr std::uintptr_t PixelsPerSubdivisionY = 0x18;
            static constexpr std::uintptr_t bAvoidVertexMerging = 0x1C;
            static constexpr std::uintptr_t AlphaThreshold = 0x20;
            static constexpr std::uintptr_t DetailAmount = 0x24;
            static constexpr std::uintptr_t SimplifyEpsilon = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"Shapes", 0x0, "ArrayProperty"},
            {"GeometryType", 0x10, "ByteProperty"},
            {"PixelsPerSubdivisionX", 0x14, "IntProperty"},
            {"PixelsPerSubdivisionY", 0x18, "IntProperty"},
            {"bAvoidVertexMerging", 0x1C, "BoolProperty"},
            {"AlphaThreshold", 0x20, "FloatProperty"},
            {"DetailAmount", 0x24, "FloatProperty"},
            {"SimplifyEpsilon", 0x28, "FloatProperty"},
        }};
    };

    struct SpriteGeometryShape
    {
        static constexpr std::string_view Name = "SpriteGeometryShape";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t ShapeType = 0x0;
            static constexpr std::uintptr_t Vertices = 0x8;
            static constexpr std::uintptr_t BoxSize = 0x18;
            static constexpr std::uintptr_t BoxPosition = 0x28;
            static constexpr std::uintptr_t Rotation = 0x38;
            static constexpr std::uintptr_t bNegativeWinding = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ShapeType", 0x0, "EnumProperty"},
            {"Vertices", 0x8, "ArrayProperty"},
            {"BoxSize", 0x18, "StructProperty"},
            {"BoxPosition", 0x28, "StructProperty"},
            {"Rotation", 0x38, "FloatProperty"},
            {"bNegativeWinding", 0x3C, "BoolProperty"},
        }};
    };

    struct SpriteInstanceData
    {
        static constexpr std::string_view Name = "SpriteInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Transform = 0x0;
            static constexpr std::uintptr_t SourceSprite = 0x80;
            static constexpr std::uintptr_t VertexColor = 0x88;
            static constexpr std::uintptr_t MaterialIndex = 0x8C;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"Transform", 0x0, "StructProperty"},
            {"SourceSprite", 0x80, "ObjectProperty"},
            {"VertexColor", 0x88, "StructProperty"},
            {"MaterialIndex", 0x8C, "IntProperty"},
        }};
    };

    struct TileMapBlueprintLibrary
    {
        static constexpr std::string_view Name = "TileMapBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};

        inline static constexpr std::array<std::string_view, 4> FunctionNames{{
            "BreakTile",
            "GetTileTransform",
            "GetTileUserData",
            "MakeTile",
        }};
    };

}
