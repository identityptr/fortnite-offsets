/**
 * decamp dumper generated SDK
 * Package: /Script/Paper2D
 */
#pragma once
#include "Basic.h"

// /Script/Paper2D.IntMargin
// Kind: ScriptStruct; super: none
struct FIntMargin
{
public:
    std::int32_t Left; // 0x0000 (Size: 0x4, Type: IntProperty)
    std::int32_t Top; // 0x0004 (Size: 0x4, Type: IntProperty)
    std::int32_t Right; // 0x0008 (Size: 0x4, Type: IntProperty)
    std::int32_t Bottom; // 0x000C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FIntMargin, Left) == 0, "Offset mismatch for FIntMargin::Left");
static_assert(offsetof(FIntMargin, Top) == 4, "Offset mismatch for FIntMargin::Top");
static_assert(offsetof(FIntMargin, Right) == 8, "Offset mismatch for FIntMargin::Right");
static_assert(offsetof(FIntMargin, Bottom) == 12, "Offset mismatch for FIntMargin::Bottom");

// /Script/Paper2D.PaperFlipbookKeyFrame
// Kind: ScriptStruct; super: none
struct FPaperFlipbookKeyFrame
{
public:
    void* Sprite; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t FrameRun; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPaperFlipbookKeyFrame, Sprite) == 0, "Offset mismatch for FPaperFlipbookKeyFrame::Sprite");
static_assert(offsetof(FPaperFlipbookKeyFrame, FrameRun) == 8, "Offset mismatch for FPaperFlipbookKeyFrame::FrameRun");

// /Script/Paper2D.PaperSpriteAtlasSlot
// Kind: ScriptStruct; super: none
struct FPaperSpriteAtlasSlot
{
public:
    std::uint8_t SpriteRef[0x20]; // 0x0000 (Size: 0x20, Type: SoftObjectProperty)
    std::int32_t AtlasIndex; // 0x0020 (Size: 0x4, Type: IntProperty)
    std::int32_t X; // 0x0024 (Size: 0x4, Type: IntProperty)
    std::int32_t Y; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t Width; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t Height; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPaperSpriteAtlasSlot, SpriteRef) == 0, "Offset mismatch for FPaperSpriteAtlasSlot::SpriteRef");
static_assert(offsetof(FPaperSpriteAtlasSlot, AtlasIndex) == 32, "Offset mismatch for FPaperSpriteAtlasSlot::AtlasIndex");
static_assert(offsetof(FPaperSpriteAtlasSlot, X) == 36, "Offset mismatch for FPaperSpriteAtlasSlot::X");
static_assert(offsetof(FPaperSpriteAtlasSlot, Y) == 40, "Offset mismatch for FPaperSpriteAtlasSlot::Y");
static_assert(offsetof(FPaperSpriteAtlasSlot, Width) == 44, "Offset mismatch for FPaperSpriteAtlasSlot::Width");
static_assert(offsetof(FPaperSpriteAtlasSlot, Height) == 48, "Offset mismatch for FPaperSpriteAtlasSlot::Height");

// /Script/Paper2D.PaperSpriteSocket
// Kind: ScriptStruct; super: none
struct FPaperSpriteSocket
{
public:
    std::uint8_t LocalTransform[0x60]; // 0x0000 (Size: 0x60, Type: StructProperty)
    FName SocketName; // 0x0060 (Size: 0x8, Type: NameProperty)
};

static_assert(offsetof(FPaperSpriteSocket, LocalTransform) == 0, "Offset mismatch for FPaperSpriteSocket::LocalTransform");
static_assert(offsetof(FPaperSpriteSocket, SocketName) == 96, "Offset mismatch for FPaperSpriteSocket::SocketName");

// /Script/Paper2D.PaperTerrainMaterialRule
// Kind: ScriptStruct; super: none
struct FPaperTerrainMaterialRule
{
public:
    void* StartCap; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Body; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    void* EndCap; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    float MinimumAngle; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float MaximumAngle; // 0x0024 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bEnableCollision; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0029
    float CollisionOffset; // 0x002C (Size: 0x4, Type: FloatProperty)
    std::int32_t DrawOrder; // 0x0030 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPaperTerrainMaterialRule, StartCap) == 0, "Offset mismatch for FPaperTerrainMaterialRule::StartCap");
static_assert(offsetof(FPaperTerrainMaterialRule, Body) == 8, "Offset mismatch for FPaperTerrainMaterialRule::Body");
static_assert(offsetof(FPaperTerrainMaterialRule, EndCap) == 24, "Offset mismatch for FPaperTerrainMaterialRule::EndCap");
static_assert(offsetof(FPaperTerrainMaterialRule, MinimumAngle) == 32, "Offset mismatch for FPaperTerrainMaterialRule::MinimumAngle");
static_assert(offsetof(FPaperTerrainMaterialRule, MaximumAngle) == 36, "Offset mismatch for FPaperTerrainMaterialRule::MaximumAngle");
static_assert(offsetof(FPaperTerrainMaterialRule, bEnableCollision) == 40, "Offset mismatch for FPaperTerrainMaterialRule::bEnableCollision");
static_assert(offsetof(FPaperTerrainMaterialRule, CollisionOffset) == 44, "Offset mismatch for FPaperTerrainMaterialRule::CollisionOffset");
static_assert(offsetof(FPaperTerrainMaterialRule, DrawOrder) == 48, "Offset mismatch for FPaperTerrainMaterialRule::DrawOrder");

// /Script/Paper2D.PaperTileInfo
// Kind: ScriptStruct; super: none
struct FPaperTileInfo
{
public:
    void* TileSet; // 0x0000 (Size: 0x8, Type: ObjectProperty)
    std::int32_t PackedTileIndex; // 0x0008 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPaperTileInfo, TileSet) == 0, "Offset mismatch for FPaperTileInfo::TileSet");
static_assert(offsetof(FPaperTileInfo, PackedTileIndex) == 8, "Offset mismatch for FPaperTileInfo::PackedTileIndex");

// /Script/Paper2D.PaperTileMetadata
// Kind: ScriptStruct; super: none
struct FPaperTileMetadata
{
public:
    FName UserDataName; // 0x0000 (Size: 0x8, Type: NameProperty)
    std::uint8_t CollisionData[0x30]; // 0x0008 (Size: 0x30, Type: StructProperty)
    std::uint8_t TerrainMembership; // 0x0038 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(FPaperTileMetadata, UserDataName) == 0, "Offset mismatch for FPaperTileMetadata::UserDataName");
static_assert(offsetof(FPaperTileMetadata, CollisionData) == 8, "Offset mismatch for FPaperTileMetadata::CollisionData");
static_assert(offsetof(FPaperTileMetadata, TerrainMembership) == 56, "Offset mismatch for FPaperTileMetadata::TerrainMembership");

// /Script/Paper2D.PaperTileSetTerrain
// Kind: ScriptStruct; super: none
struct FPaperTileSetTerrain
{
public:
    FString TerrainName; // 0x0000 (Size: 0x10, Type: StrProperty)
    std::int32_t CenterTileIndex; // 0x0010 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FPaperTileSetTerrain, TerrainName) == 0, "Offset mismatch for FPaperTileSetTerrain::TerrainName");
static_assert(offsetof(FPaperTileSetTerrain, CenterTileIndex) == 16, "Offset mismatch for FPaperTileSetTerrain::CenterTileIndex");

// /Script/Paper2D.SpriteAssetInitParameters
// Kind: ScriptStruct; super: none
struct FSpriteAssetInitParameters
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Paper2D.SpriteDrawCallRecord
// Kind: ScriptStruct; super: none
struct FSpriteDrawCallRecord
{
public:
    std::uint8_t Destination[0x18]; // 0x0000 (Size: 0x18, Type: StructProperty)
    void* BaseTexture; // 0x0018 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0000[0x30]; // 0x0020
    std::uint8_t Color[0x1]; // 0x0050 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FSpriteDrawCallRecord, Destination) == 0, "Offset mismatch for FSpriteDrawCallRecord::Destination");
static_assert(offsetof(FSpriteDrawCallRecord, BaseTexture) == 24, "Offset mismatch for FSpriteDrawCallRecord::BaseTexture");
static_assert(offsetof(FSpriteDrawCallRecord, Color) == 80, "Offset mismatch for FSpriteDrawCallRecord::Color");

// /Script/Paper2D.SpriteGeometryCollection
// Kind: ScriptStruct; super: none
struct FSpriteGeometryCollection
{
public:
    TArray<void*> Shapes; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t GeometryType; // 0x0010 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0000[0x3]; // 0x0011
    std::int32_t PixelsPerSubdivisionX; // 0x0014 (Size: 0x4, Type: IntProperty)
    std::int32_t PixelsPerSubdivisionY; // 0x0018 (Size: 0x4, Type: IntProperty)
    std::uint8_t bAvoidVertexMerging; // 0x001C (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x001D
    float AlphaThreshold; // 0x0020 (Size: 0x4, Type: FloatProperty)
    float DetailAmount; // 0x0024 (Size: 0x4, Type: FloatProperty)
    float SimplifyEpsilon; // 0x0028 (Size: 0x4, Type: FloatProperty)
};

static_assert(offsetof(FSpriteGeometryCollection, Shapes) == 0, "Offset mismatch for FSpriteGeometryCollection::Shapes");
static_assert(offsetof(FSpriteGeometryCollection, GeometryType) == 16, "Offset mismatch for FSpriteGeometryCollection::GeometryType");
static_assert(offsetof(FSpriteGeometryCollection, PixelsPerSubdivisionX) == 20, "Offset mismatch for FSpriteGeometryCollection::PixelsPerSubdivisionX");
static_assert(offsetof(FSpriteGeometryCollection, PixelsPerSubdivisionY) == 24, "Offset mismatch for FSpriteGeometryCollection::PixelsPerSubdivisionY");
static_assert(offsetof(FSpriteGeometryCollection, bAvoidVertexMerging) == 28, "Offset mismatch for FSpriteGeometryCollection::bAvoidVertexMerging");
static_assert(offsetof(FSpriteGeometryCollection, AlphaThreshold) == 32, "Offset mismatch for FSpriteGeometryCollection::AlphaThreshold");
static_assert(offsetof(FSpriteGeometryCollection, DetailAmount) == 36, "Offset mismatch for FSpriteGeometryCollection::DetailAmount");
static_assert(offsetof(FSpriteGeometryCollection, SimplifyEpsilon) == 40, "Offset mismatch for FSpriteGeometryCollection::SimplifyEpsilon");

// /Script/Paper2D.SpriteGeometryShape
// Kind: ScriptStruct; super: none
struct FSpriteGeometryShape
{
public:
    std::uint8_t ShapeType; // 0x0000 (Size: 0x1, Type: EnumProperty)
    std::uint8_t Pad_0000[0x7]; // 0x0001
    TArray<void*> Vertices; // 0x0008 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t BoxSize[0x10]; // 0x0018 (Size: 0x10, Type: StructProperty)
    std::uint8_t BoxPosition[0x10]; // 0x0028 (Size: 0x10, Type: StructProperty)
    float Rotation; // 0x0038 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bNegativeWinding; // 0x003C (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(FSpriteGeometryShape, ShapeType) == 0, "Offset mismatch for FSpriteGeometryShape::ShapeType");
static_assert(offsetof(FSpriteGeometryShape, Vertices) == 8, "Offset mismatch for FSpriteGeometryShape::Vertices");
static_assert(offsetof(FSpriteGeometryShape, BoxSize) == 24, "Offset mismatch for FSpriteGeometryShape::BoxSize");
static_assert(offsetof(FSpriteGeometryShape, BoxPosition) == 40, "Offset mismatch for FSpriteGeometryShape::BoxPosition");
static_assert(offsetof(FSpriteGeometryShape, Rotation) == 56, "Offset mismatch for FSpriteGeometryShape::Rotation");
static_assert(offsetof(FSpriteGeometryShape, bNegativeWinding) == 60, "Offset mismatch for FSpriteGeometryShape::bNegativeWinding");

// /Script/Paper2D.SpriteInstanceData
// Kind: ScriptStruct; super: none
struct FSpriteInstanceData
{
public:
    std::uint8_t Transform[0x80]; // 0x0000 (Size: 0x80, Type: StructProperty)
    void* SourceSprite; // 0x0080 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t VertexColor[0x4]; // 0x0088 (Size: 0x4, Type: StructProperty)
    std::int32_t MaterialIndex; // 0x008C (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(FSpriteInstanceData, Transform) == 0, "Offset mismatch for FSpriteInstanceData::Transform");
static_assert(offsetof(FSpriteInstanceData, SourceSprite) == 128, "Offset mismatch for FSpriteInstanceData::SourceSprite");
static_assert(offsetof(FSpriteInstanceData, VertexColor) == 136, "Offset mismatch for FSpriteInstanceData::VertexColor");
static_assert(offsetof(FSpriteInstanceData, MaterialIndex) == 140, "Offset mismatch for FSpriteInstanceData::MaterialIndex");

// /Script/Paper2D.MaterialExpressionSpriteTextureSampler
// Kind: Class; super: MaterialExpressionTextureSampleParameter2D
class UMaterialExpressionSpriteTextureSampler
{
public:
    std::uint8_t Pad_0000[0x220]; // 0x0000
    std::uint8_t bSampleAdditionalTextures; // 0x0220 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0221
    std::int32_t AdditionalSlotIndex; // 0x0224 (Size: 0x4, Type: IntProperty)
    FText SlotDisplayName; // 0x0228 (Size: 0x18, Type: TextProperty)
};

static_assert(offsetof(UMaterialExpressionSpriteTextureSampler, bSampleAdditionalTextures) == 544, "Offset mismatch for UMaterialExpressionSpriteTextureSampler::bSampleAdditionalTextures");
static_assert(offsetof(UMaterialExpressionSpriteTextureSampler, AdditionalSlotIndex) == 548, "Offset mismatch for UMaterialExpressionSpriteTextureSampler::AdditionalSlotIndex");
static_assert(offsetof(UMaterialExpressionSpriteTextureSampler, SlotDisplayName) == 552, "Offset mismatch for UMaterialExpressionSpriteTextureSampler::SlotDisplayName");

// /Script/Paper2D.PaperCharacter
// Kind: Class; super: Character
class UPaperCharacter
{
public:
    std::uint8_t Pad_0000[0x630]; // 0x0000
    void* Sprite; // 0x0630 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPaperCharacter, Sprite) == 1584, "Offset mismatch for UPaperCharacter::Sprite");

// /Script/Paper2D.PaperFlipbook
// Kind: Class; super: Object
class UPaperFlipbook
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    float framesPerSecond; // 0x0028 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0001[0x4]; // 0x002C
    TArray<void*> Keyframes; // 0x0030 (Size: 0x10, Type: ArrayProperty)
    void* DefaultMaterial; // 0x0040 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t CollisionSource; // 0x0048 (Size: 0x1, Type: ByteProperty)
};

static_assert(offsetof(UPaperFlipbook, framesPerSecond) == 40, "Offset mismatch for UPaperFlipbook::framesPerSecond");
static_assert(offsetof(UPaperFlipbook, Keyframes) == 48, "Offset mismatch for UPaperFlipbook::Keyframes");
static_assert(offsetof(UPaperFlipbook, DefaultMaterial) == 64, "Offset mismatch for UPaperFlipbook::DefaultMaterial");
static_assert(offsetof(UPaperFlipbook, CollisionSource) == 72, "Offset mismatch for UPaperFlipbook::CollisionSource");

// /Script/Paper2D.PaperFlipbookActor
// Kind: Class; super: Actor
class UPaperFlipbookActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* RenderComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPaperFlipbookActor, RenderComponent) == 624, "Offset mismatch for UPaperFlipbookActor::RenderComponent");

// /Script/Paper2D.PaperFlipbookComponent
// Kind: Class; super: MeshComponent
class UPaperFlipbookComponent
{
public:
    std::uint8_t Pad_0000[0x5D0]; // 0x0000
    void* SourceFlipbook; // 0x05D0 (Size: 0x8, Type: ObjectProperty)
    void* Material; // 0x05D8 (Size: 0x8, Type: ObjectProperty)
    float PlayRate; // 0x05E0 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bLooping; // 0x05E4 (Size: 0x1, Type: BoolProperty)
    // 0x05E4 BoolProperty bPlaying (shared storage)
    // 0x05E4 BoolProperty bReversePlayback (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x05E5
    float AccumulatedTime; // 0x05E8 (Size: 0x4, Type: FloatProperty)
    std::int32_t CachedFrameIndex; // 0x05EC (Size: 0x4, Type: IntProperty)
    std::uint8_t SpriteColor[0x10]; // 0x05F0 (Size: 0x10, Type: StructProperty)
    void* CachedBodySetup; // 0x0600 (Size: 0x8, Type: ObjectProperty)
    FMulticastInlineDelegate OnFinishedPlaying; // 0x0608 (Size: 0x10, Type: MulticastInlineDelegateProperty)
};

static_assert(offsetof(UPaperFlipbookComponent, SourceFlipbook) == 1488, "Offset mismatch for UPaperFlipbookComponent::SourceFlipbook");
static_assert(offsetof(UPaperFlipbookComponent, Material) == 1496, "Offset mismatch for UPaperFlipbookComponent::Material");
static_assert(offsetof(UPaperFlipbookComponent, PlayRate) == 1504, "Offset mismatch for UPaperFlipbookComponent::PlayRate");
static_assert(offsetof(UPaperFlipbookComponent, bLooping) == 1508, "Offset mismatch for UPaperFlipbookComponent::bLooping");
static_assert(offsetof(UPaperFlipbookComponent, AccumulatedTime) == 1512, "Offset mismatch for UPaperFlipbookComponent::AccumulatedTime");
static_assert(offsetof(UPaperFlipbookComponent, CachedFrameIndex) == 1516, "Offset mismatch for UPaperFlipbookComponent::CachedFrameIndex");
static_assert(offsetof(UPaperFlipbookComponent, SpriteColor) == 1520, "Offset mismatch for UPaperFlipbookComponent::SpriteColor");
static_assert(offsetof(UPaperFlipbookComponent, CachedBodySetup) == 1536, "Offset mismatch for UPaperFlipbookComponent::CachedBodySetup");
static_assert(offsetof(UPaperFlipbookComponent, OnFinishedPlaying) == 1544, "Offset mismatch for UPaperFlipbookComponent::OnFinishedPlaying");

// /Script/Paper2D.PaperGroupedSpriteActor
// Kind: Class; super: Actor
class UPaperGroupedSpriteActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* RenderComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPaperGroupedSpriteActor, RenderComponent) == 624, "Offset mismatch for UPaperGroupedSpriteActor::RenderComponent");

// /Script/Paper2D.PaperGroupedSpriteComponent
// Kind: Class; super: MeshComponent
class UPaperGroupedSpriteComponent
{
public:
    std::uint8_t Pad_0000[0x5D0]; // 0x0000
    TArray<void*> InstanceMaterials; // 0x05D0 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> PerInstanceSpriteData; // 0x05E0 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPaperGroupedSpriteComponent, InstanceMaterials) == 1488, "Offset mismatch for UPaperGroupedSpriteComponent::InstanceMaterials");
static_assert(offsetof(UPaperGroupedSpriteComponent, PerInstanceSpriteData) == 1504, "Offset mismatch for UPaperGroupedSpriteComponent::PerInstanceSpriteData");

// /Script/Paper2D.PaperRuntimeSettings
// Kind: Class; super: Object
class UPaperRuntimeSettings
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t bEnableSpriteAtlasGroups; // 0x0028 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bEnableTerrainSplineEditing; // 0x0029 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bResizeSpriteDataToMatchTextures; // 0x002A (Size: 0x1, Type: BoolProperty)
};

static_assert(offsetof(UPaperRuntimeSettings, bEnableSpriteAtlasGroups) == 40, "Offset mismatch for UPaperRuntimeSettings::bEnableSpriteAtlasGroups");
static_assert(offsetof(UPaperRuntimeSettings, bEnableTerrainSplineEditing) == 41, "Offset mismatch for UPaperRuntimeSettings::bEnableTerrainSplineEditing");
static_assert(offsetof(UPaperRuntimeSettings, bResizeSpriteDataToMatchTextures) == 42, "Offset mismatch for UPaperRuntimeSettings::bResizeSpriteDataToMatchTextures");

// /Script/Paper2D.PaperSprite
// Kind: Class; super: Object
class UPaperSprite
{
public:
    std::uint8_t Pad_0000[0x38]; // 0x0000
    TArray<void*> AdditionalSourceTextures; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t BakedSourceUV[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t BakedSourceDimension[0x10]; // 0x0058 (Size: 0x10, Type: StructProperty)
    void* BakedSourceTexture; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    void* DefaultMaterial; // 0x0070 (Size: 0x8, Type: ObjectProperty)
    void* AlternateMaterial; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> Sockets; // 0x0080 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t SpriteCollisionDomain; // 0x0090 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0091
    float PixelsPerUnrealUnit; // 0x0094 (Size: 0x4, Type: FloatProperty)
    void* BodySetup; // 0x0098 (Size: 0x8, Type: ObjectProperty)
    std::int32_t AlternateMaterialSplitIndex; // 0x00A0 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x00A4
    TArray<void*> BakedRenderData; // 0x00A8 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPaperSprite, AdditionalSourceTextures) == 56, "Offset mismatch for UPaperSprite::AdditionalSourceTextures");
static_assert(offsetof(UPaperSprite, BakedSourceUV) == 72, "Offset mismatch for UPaperSprite::BakedSourceUV");
static_assert(offsetof(UPaperSprite, BakedSourceDimension) == 88, "Offset mismatch for UPaperSprite::BakedSourceDimension");
static_assert(offsetof(UPaperSprite, BakedSourceTexture) == 104, "Offset mismatch for UPaperSprite::BakedSourceTexture");
static_assert(offsetof(UPaperSprite, DefaultMaterial) == 112, "Offset mismatch for UPaperSprite::DefaultMaterial");
static_assert(offsetof(UPaperSprite, AlternateMaterial) == 120, "Offset mismatch for UPaperSprite::AlternateMaterial");
static_assert(offsetof(UPaperSprite, Sockets) == 128, "Offset mismatch for UPaperSprite::Sockets");
static_assert(offsetof(UPaperSprite, SpriteCollisionDomain) == 144, "Offset mismatch for UPaperSprite::SpriteCollisionDomain");
static_assert(offsetof(UPaperSprite, PixelsPerUnrealUnit) == 148, "Offset mismatch for UPaperSprite::PixelsPerUnrealUnit");
static_assert(offsetof(UPaperSprite, BodySetup) == 152, "Offset mismatch for UPaperSprite::BodySetup");
static_assert(offsetof(UPaperSprite, AlternateMaterialSplitIndex) == 160, "Offset mismatch for UPaperSprite::AlternateMaterialSplitIndex");
static_assert(offsetof(UPaperSprite, BakedRenderData) == 168, "Offset mismatch for UPaperSprite::BakedRenderData");

// /Script/Paper2D.PaperSpriteActor
// Kind: Class; super: Actor
class UPaperSpriteActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* RenderComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPaperSpriteActor, RenderComponent) == 624, "Offset mismatch for UPaperSpriteActor::RenderComponent");

// /Script/Paper2D.PaperSpriteAtlas
// Kind: Class; super: Object
class UPaperSpriteAtlas
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Paper2D.PaperSpriteBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UPaperSpriteBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Paper2D.PaperSpriteComponent
// Kind: Class; super: MeshComponent
class UPaperSpriteComponent
{
public:
    std::uint8_t Pad_0000[0x5D0]; // 0x0000
    void* SourceSprite; // 0x05D0 (Size: 0x8, Type: ObjectProperty)
    void* MaterialOverride; // 0x05D8 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t SpriteColor[0x1]; // 0x05E0 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPaperSpriteComponent, SourceSprite) == 1488, "Offset mismatch for UPaperSpriteComponent::SourceSprite");
static_assert(offsetof(UPaperSpriteComponent, MaterialOverride) == 1496, "Offset mismatch for UPaperSpriteComponent::MaterialOverride");
static_assert(offsetof(UPaperSpriteComponent, SpriteColor) == 1504, "Offset mismatch for UPaperSpriteComponent::SpriteColor");

// /Script/Paper2D.PaperTerrainActor
// Kind: Class; super: Actor
class UPaperTerrainActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* DummyRoot; // 0x0270 (Size: 0x8, Type: ObjectProperty)
    void* SplineComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    void* RenderComponent; // 0x0280 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPaperTerrainActor, DummyRoot) == 624, "Offset mismatch for UPaperTerrainActor::DummyRoot");
static_assert(offsetof(UPaperTerrainActor, SplineComponent) == 632, "Offset mismatch for UPaperTerrainActor::SplineComponent");
static_assert(offsetof(UPaperTerrainActor, RenderComponent) == 640, "Offset mismatch for UPaperTerrainActor::RenderComponent");

// /Script/Paper2D.PaperTerrainComponent
// Kind: Class; super: PrimitiveComponent
class UPaperTerrainComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    void* TerrainMaterial; // 0x0570 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t bClosedSpline; // 0x0578 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bFilledSpline; // 0x0579 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x6]; // 0x057A
    void* AssociatedSpline; // 0x0580 (Size: 0x8, Type: ObjectProperty)
    std::int32_t RandomSeed; // 0x0588 (Size: 0x4, Type: IntProperty)
    float SegmentOverlapAmount; // 0x058C (Size: 0x4, Type: FloatProperty)
    std::uint8_t TerrainColor[0x10]; // 0x0590 (Size: 0x10, Type: StructProperty)
    std::int32_t ReparamStepsPerSegment; // 0x05A0 (Size: 0x4, Type: IntProperty)
    std::uint8_t SpriteCollisionDomain; // 0x05A4 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0002[0x3]; // 0x05A5
    float CollisionThickness; // 0x05A8 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0003[0x4]; // 0x05AC
    void* CachedBodySetup; // 0x05B0 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPaperTerrainComponent, TerrainMaterial) == 1392, "Offset mismatch for UPaperTerrainComponent::TerrainMaterial");
static_assert(offsetof(UPaperTerrainComponent, bClosedSpline) == 1400, "Offset mismatch for UPaperTerrainComponent::bClosedSpline");
static_assert(offsetof(UPaperTerrainComponent, bFilledSpline) == 1401, "Offset mismatch for UPaperTerrainComponent::bFilledSpline");
static_assert(offsetof(UPaperTerrainComponent, AssociatedSpline) == 1408, "Offset mismatch for UPaperTerrainComponent::AssociatedSpline");
static_assert(offsetof(UPaperTerrainComponent, RandomSeed) == 1416, "Offset mismatch for UPaperTerrainComponent::RandomSeed");
static_assert(offsetof(UPaperTerrainComponent, SegmentOverlapAmount) == 1420, "Offset mismatch for UPaperTerrainComponent::SegmentOverlapAmount");
static_assert(offsetof(UPaperTerrainComponent, TerrainColor) == 1424, "Offset mismatch for UPaperTerrainComponent::TerrainColor");
static_assert(offsetof(UPaperTerrainComponent, ReparamStepsPerSegment) == 1440, "Offset mismatch for UPaperTerrainComponent::ReparamStepsPerSegment");
static_assert(offsetof(UPaperTerrainComponent, SpriteCollisionDomain) == 1444, "Offset mismatch for UPaperTerrainComponent::SpriteCollisionDomain");
static_assert(offsetof(UPaperTerrainComponent, CollisionThickness) == 1448, "Offset mismatch for UPaperTerrainComponent::CollisionThickness");
static_assert(offsetof(UPaperTerrainComponent, CachedBodySetup) == 1456, "Offset mismatch for UPaperTerrainComponent::CachedBodySetup");

// /Script/Paper2D.PaperTerrainMaterial
// Kind: Class; super: DataAsset
class UPaperTerrainMaterial
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    TArray<void*> Rules; // 0x0028 (Size: 0x10, Type: ArrayProperty)
    void* InteriorFill; // 0x0038 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPaperTerrainMaterial, Rules) == 40, "Offset mismatch for UPaperTerrainMaterial::Rules");
static_assert(offsetof(UPaperTerrainMaterial, InteriorFill) == 56, "Offset mismatch for UPaperTerrainMaterial::InteriorFill");

// /Script/Paper2D.PaperTerrainSplineComponent
// Kind: Class; super: SplineComponent
class UPaperTerrainSplineComponent
{
public:
    std::uint8_t Pad_0000[0x570]; // 0x0000
    std::uint8_t Spline[0x18]; // 0x0570 (Size: 0x18, Type: StructProperty)
    std::uint8_t SplineCurves[0x68]; // 0x0588 (Size: 0x68, Type: StructProperty)
    std::int32_t ReparamStepsPerSegment; // 0x05F0 (Size: 0x4, Type: IntProperty)
    float duration; // 0x05F4 (Size: 0x4, Type: FloatProperty)
    std::uint8_t bStationaryEndpoints; // 0x05F8 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bSplineHasBeenEdited; // 0x05F9 (Size: 0x1, Type: BoolProperty)
    std::uint8_t bModifiedByConstructionScript; // 0x05FA (Size: 0x1, Type: BoolProperty)
    std::uint8_t bInputSplinePointsToConstructionScript; // 0x05FB (Size: 0x1, Type: BoolProperty)
    std::uint8_t bDrawDebug; // 0x05FC (Size: 0x1, Type: BoolProperty)
    std::uint8_t bClosedLoop; // 0x05FD (Size: 0x1, Type: BoolProperty)
    std::uint8_t bLoopPositionOverride; // 0x05FE (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x1]; // 0x05FF
    float LoopPosition; // 0x0600 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0604
    std::uint8_t LineMaterial[0x20]; // 0x0608 (Size: 0x20, Type: SoftObjectProperty)
    std::uint8_t PointMaterial[0x20]; // 0x0628 (Size: 0x20, Type: SoftObjectProperty)
    void* LineMaterialLifetimePtr; // 0x0648 (Size: 0x8, Type: ObjectProperty)
    void* PointMaterialLifetimePtr; // 0x0650 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0003[0x8]; // 0x0658
    std::uint8_t DefaultUpVector[0x60]; // 0x0660 (Size: 0x60, Type: StructProperty)
    std::uint8_t LastAuthority; // 0x06C0 (Size: 0x1, Type: EnumProperty)
};

static_assert(offsetof(UPaperTerrainSplineComponent, Spline) == 1392, "Offset mismatch for UPaperTerrainSplineComponent::Spline");
static_assert(offsetof(UPaperTerrainSplineComponent, SplineCurves) == 1416, "Offset mismatch for UPaperTerrainSplineComponent::SplineCurves");
static_assert(offsetof(UPaperTerrainSplineComponent, ReparamStepsPerSegment) == 1520, "Offset mismatch for UPaperTerrainSplineComponent::ReparamStepsPerSegment");
static_assert(offsetof(UPaperTerrainSplineComponent, duration) == 1524, "Offset mismatch for UPaperTerrainSplineComponent::duration");
static_assert(offsetof(UPaperTerrainSplineComponent, bStationaryEndpoints) == 1528, "Offset mismatch for UPaperTerrainSplineComponent::bStationaryEndpoints");
static_assert(offsetof(UPaperTerrainSplineComponent, bSplineHasBeenEdited) == 1529, "Offset mismatch for UPaperTerrainSplineComponent::bSplineHasBeenEdited");
static_assert(offsetof(UPaperTerrainSplineComponent, bModifiedByConstructionScript) == 1530, "Offset mismatch for UPaperTerrainSplineComponent::bModifiedByConstructionScript");
static_assert(offsetof(UPaperTerrainSplineComponent, bInputSplinePointsToConstructionScript) == 1531, "Offset mismatch for UPaperTerrainSplineComponent::bInputSplinePointsToConstructionScript");
static_assert(offsetof(UPaperTerrainSplineComponent, bDrawDebug) == 1532, "Offset mismatch for UPaperTerrainSplineComponent::bDrawDebug");
static_assert(offsetof(UPaperTerrainSplineComponent, bClosedLoop) == 1533, "Offset mismatch for UPaperTerrainSplineComponent::bClosedLoop");
static_assert(offsetof(UPaperTerrainSplineComponent, bLoopPositionOverride) == 1534, "Offset mismatch for UPaperTerrainSplineComponent::bLoopPositionOverride");
static_assert(offsetof(UPaperTerrainSplineComponent, LoopPosition) == 1536, "Offset mismatch for UPaperTerrainSplineComponent::LoopPosition");
static_assert(offsetof(UPaperTerrainSplineComponent, LineMaterial) == 1544, "Offset mismatch for UPaperTerrainSplineComponent::LineMaterial");
static_assert(offsetof(UPaperTerrainSplineComponent, PointMaterial) == 1576, "Offset mismatch for UPaperTerrainSplineComponent::PointMaterial");
static_assert(offsetof(UPaperTerrainSplineComponent, LineMaterialLifetimePtr) == 1608, "Offset mismatch for UPaperTerrainSplineComponent::LineMaterialLifetimePtr");
static_assert(offsetof(UPaperTerrainSplineComponent, PointMaterialLifetimePtr) == 1616, "Offset mismatch for UPaperTerrainSplineComponent::PointMaterialLifetimePtr");
static_assert(offsetof(UPaperTerrainSplineComponent, DefaultUpVector) == 1632, "Offset mismatch for UPaperTerrainSplineComponent::DefaultUpVector");
static_assert(offsetof(UPaperTerrainSplineComponent, LastAuthority) == 1728, "Offset mismatch for UPaperTerrainSplineComponent::LastAuthority");

// /Script/Paper2D.PaperTileLayer
// Kind: Class; super: Object
class UPaperTileLayer
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t LayerName[0x10]; // 0x0028 (Size: 0x10, Type: TextProperty)
    std::int32_t LayerWidth; // 0x0038 (Size: 0x4, Type: IntProperty)
    std::int32_t LayerHeight; // 0x003C (Size: 0x4, Type: IntProperty)
    std::uint8_t bHiddenInGame; // 0x0040 (Size: 0x1, Type: BoolProperty)
    // 0x0040 BoolProperty bLayerCollides (shared storage)
    // 0x0040 BoolProperty bOverrideCollisionOffset (shared storage)
    // 0x0040 BoolProperty bOverrideCollisionThickness (shared storage)
    std::uint8_t Pad_0001[0x3]; // 0x0041
    float CollisionThicknessOverride; // 0x0044 (Size: 0x4, Type: FloatProperty)
    float CollisionOffsetOverride; // 0x0048 (Size: 0x4, Type: FloatProperty)
    std::uint8_t LayerColor[0x10]; // 0x004C (Size: 0x10, Type: StructProperty)
    std::int32_t AllocatedWidth; // 0x005C (Size: 0x4, Type: IntProperty)
    std::int32_t AllocatedHeight; // 0x0060 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x0064
    TArray<void*> AllocatedCells; // 0x0068 (Size: 0x10, Type: ArrayProperty)
    void* TileSet; // 0x0078 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AllocatedGrid; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UPaperTileLayer, LayerName) == 40, "Offset mismatch for UPaperTileLayer::LayerName");
static_assert(offsetof(UPaperTileLayer, LayerWidth) == 56, "Offset mismatch for UPaperTileLayer::LayerWidth");
static_assert(offsetof(UPaperTileLayer, LayerHeight) == 60, "Offset mismatch for UPaperTileLayer::LayerHeight");
static_assert(offsetof(UPaperTileLayer, bHiddenInGame) == 64, "Offset mismatch for UPaperTileLayer::bHiddenInGame");
static_assert(offsetof(UPaperTileLayer, CollisionThicknessOverride) == 68, "Offset mismatch for UPaperTileLayer::CollisionThicknessOverride");
static_assert(offsetof(UPaperTileLayer, CollisionOffsetOverride) == 72, "Offset mismatch for UPaperTileLayer::CollisionOffsetOverride");
static_assert(offsetof(UPaperTileLayer, LayerColor) == 76, "Offset mismatch for UPaperTileLayer::LayerColor");
static_assert(offsetof(UPaperTileLayer, AllocatedWidth) == 92, "Offset mismatch for UPaperTileLayer::AllocatedWidth");
static_assert(offsetof(UPaperTileLayer, AllocatedHeight) == 96, "Offset mismatch for UPaperTileLayer::AllocatedHeight");
static_assert(offsetof(UPaperTileLayer, AllocatedCells) == 104, "Offset mismatch for UPaperTileLayer::AllocatedCells");
static_assert(offsetof(UPaperTileLayer, TileSet) == 120, "Offset mismatch for UPaperTileLayer::TileSet");
static_assert(offsetof(UPaperTileLayer, AllocatedGrid) == 128, "Offset mismatch for UPaperTileLayer::AllocatedGrid");

// /Script/Paper2D.PaperTileMap
// Kind: Class; super: Object
class UPaperTileMap
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::int32_t MapWidth; // 0x0028 (Size: 0x4, Type: IntProperty)
    std::int32_t MapHeight; // 0x002C (Size: 0x4, Type: IntProperty)
    std::int32_t TileWidth; // 0x0030 (Size: 0x4, Type: IntProperty)
    std::int32_t TileHeight; // 0x0034 (Size: 0x4, Type: IntProperty)
    float PixelsPerUnrealUnit; // 0x0038 (Size: 0x4, Type: FloatProperty)
    float SeparationPerTileX; // 0x003C (Size: 0x4, Type: FloatProperty)
    float SeparationPerTileY; // 0x0040 (Size: 0x4, Type: FloatProperty)
    float SeparationPerLayer; // 0x0044 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SelectedTileSet[0x20]; // 0x0048 (Size: 0x20, Type: SoftObjectProperty)
    void* Material; // 0x0068 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> TileLayers; // 0x0070 (Size: 0x10, Type: ArrayProperty)
    float CollisionThickness; // 0x0080 (Size: 0x4, Type: FloatProperty)
    std::uint8_t SpriteCollisionDomain; // 0x0084 (Size: 0x1, Type: ByteProperty)
    std::uint8_t ProjectionMode; // 0x0085 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x2]; // 0x0086
    std::int32_t HexSideLength; // 0x0088 (Size: 0x4, Type: IntProperty)
    std::uint8_t Pad_0002[0x4]; // 0x008C
    void* BodySetup; // 0x0090 (Size: 0x8, Type: ObjectProperty)
    std::int32_t LayerNameIndex; // 0x0098 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPaperTileMap, MapWidth) == 40, "Offset mismatch for UPaperTileMap::MapWidth");
static_assert(offsetof(UPaperTileMap, MapHeight) == 44, "Offset mismatch for UPaperTileMap::MapHeight");
static_assert(offsetof(UPaperTileMap, TileWidth) == 48, "Offset mismatch for UPaperTileMap::TileWidth");
static_assert(offsetof(UPaperTileMap, TileHeight) == 52, "Offset mismatch for UPaperTileMap::TileHeight");
static_assert(offsetof(UPaperTileMap, PixelsPerUnrealUnit) == 56, "Offset mismatch for UPaperTileMap::PixelsPerUnrealUnit");
static_assert(offsetof(UPaperTileMap, SeparationPerTileX) == 60, "Offset mismatch for UPaperTileMap::SeparationPerTileX");
static_assert(offsetof(UPaperTileMap, SeparationPerTileY) == 64, "Offset mismatch for UPaperTileMap::SeparationPerTileY");
static_assert(offsetof(UPaperTileMap, SeparationPerLayer) == 68, "Offset mismatch for UPaperTileMap::SeparationPerLayer");
static_assert(offsetof(UPaperTileMap, SelectedTileSet) == 72, "Offset mismatch for UPaperTileMap::SelectedTileSet");
static_assert(offsetof(UPaperTileMap, Material) == 104, "Offset mismatch for UPaperTileMap::Material");
static_assert(offsetof(UPaperTileMap, TileLayers) == 112, "Offset mismatch for UPaperTileMap::TileLayers");
static_assert(offsetof(UPaperTileMap, CollisionThickness) == 128, "Offset mismatch for UPaperTileMap::CollisionThickness");
static_assert(offsetof(UPaperTileMap, SpriteCollisionDomain) == 132, "Offset mismatch for UPaperTileMap::SpriteCollisionDomain");
static_assert(offsetof(UPaperTileMap, ProjectionMode) == 133, "Offset mismatch for UPaperTileMap::ProjectionMode");
static_assert(offsetof(UPaperTileMap, HexSideLength) == 136, "Offset mismatch for UPaperTileMap::HexSideLength");
static_assert(offsetof(UPaperTileMap, BodySetup) == 144, "Offset mismatch for UPaperTileMap::BodySetup");
static_assert(offsetof(UPaperTileMap, LayerNameIndex) == 152, "Offset mismatch for UPaperTileMap::LayerNameIndex");

// /Script/Paper2D.PaperTileMapActor
// Kind: Class; super: Actor
class UPaperTileMapActor
{
public:
    std::uint8_t Pad_0000[0x270]; // 0x0000
    void* RenderComponent; // 0x0270 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPaperTileMapActor, RenderComponent) == 624, "Offset mismatch for UPaperTileMapActor::RenderComponent");

// /Script/Paper2D.PaperTileMapComponent
// Kind: Class; super: MeshComponent
class UPaperTileMapComponent
{
public:
    std::uint8_t Pad_0000[0x5D0]; // 0x0000
    std::int32_t MapWidth; // 0x05D0 (Size: 0x4, Type: IntProperty)
    std::int32_t MapHeight; // 0x05D4 (Size: 0x4, Type: IntProperty)
    std::int32_t TileWidth; // 0x05D8 (Size: 0x4, Type: IntProperty)
    std::int32_t TileHeight; // 0x05DC (Size: 0x4, Type: IntProperty)
    void* DefaultLayerTileSet; // 0x05E0 (Size: 0x8, Type: ObjectProperty)
    void* Material; // 0x05E8 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> TileLayers; // 0x05F0 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t TileMapColor[0x10]; // 0x0600 (Size: 0x10, Type: StructProperty)
    std::int32_t UseSingleLayerIndex; // 0x0610 (Size: 0x4, Type: IntProperty)
    std::uint8_t bUseSingleLayer; // 0x0614 (Size: 0x1, Type: BoolProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0615
    void* TileMap; // 0x0618 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPaperTileMapComponent, MapWidth) == 1488, "Offset mismatch for UPaperTileMapComponent::MapWidth");
static_assert(offsetof(UPaperTileMapComponent, MapHeight) == 1492, "Offset mismatch for UPaperTileMapComponent::MapHeight");
static_assert(offsetof(UPaperTileMapComponent, TileWidth) == 1496, "Offset mismatch for UPaperTileMapComponent::TileWidth");
static_assert(offsetof(UPaperTileMapComponent, TileHeight) == 1500, "Offset mismatch for UPaperTileMapComponent::TileHeight");
static_assert(offsetof(UPaperTileMapComponent, DefaultLayerTileSet) == 1504, "Offset mismatch for UPaperTileMapComponent::DefaultLayerTileSet");
static_assert(offsetof(UPaperTileMapComponent, Material) == 1512, "Offset mismatch for UPaperTileMapComponent::Material");
static_assert(offsetof(UPaperTileMapComponent, TileLayers) == 1520, "Offset mismatch for UPaperTileMapComponent::TileLayers");
static_assert(offsetof(UPaperTileMapComponent, TileMapColor) == 1536, "Offset mismatch for UPaperTileMapComponent::TileMapColor");
static_assert(offsetof(UPaperTileMapComponent, UseSingleLayerIndex) == 1552, "Offset mismatch for UPaperTileMapComponent::UseSingleLayerIndex");
static_assert(offsetof(UPaperTileMapComponent, bUseSingleLayer) == 1556, "Offset mismatch for UPaperTileMapComponent::bUseSingleLayer");
static_assert(offsetof(UPaperTileMapComponent, TileMap) == 1560, "Offset mismatch for UPaperTileMapComponent::TileMap");

// /Script/Paper2D.PaperTileSet
// Kind: Class; super: Object
class UPaperTileSet
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t TileSize[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    void* TileSheet; // 0x0030 (Size: 0x8, Type: ObjectProperty)
    TArray<void*> AdditionalSourceTextures; // 0x0038 (Size: 0x10, Type: ArrayProperty)
    std::uint8_t BorderMargin[0x10]; // 0x0048 (Size: 0x10, Type: StructProperty)
    std::uint8_t PerTileSpacing[0x8]; // 0x0058 (Size: 0x8, Type: StructProperty)
    std::uint8_t DrawingOffset[0x8]; // 0x0060 (Size: 0x8, Type: StructProperty)
    std::int32_t WidthInTiles; // 0x0068 (Size: 0x4, Type: IntProperty)
    std::int32_t HeightInTiles; // 0x006C (Size: 0x4, Type: IntProperty)
    std::int32_t AllocatedWidth; // 0x0070 (Size: 0x4, Type: IntProperty)
    std::int32_t AllocatedHeight; // 0x0074 (Size: 0x4, Type: IntProperty)
    TArray<void*> PerTileData; // 0x0078 (Size: 0x10, Type: ArrayProperty)
    TArray<void*> Terrains; // 0x0088 (Size: 0x10, Type: ArrayProperty)
    std::int32_t TileWidth; // 0x0098 (Size: 0x4, Type: IntProperty)
    std::int32_t TileHeight; // 0x009C (Size: 0x4, Type: IntProperty)
    std::int32_t Margin; // 0x00A0 (Size: 0x4, Type: IntProperty)
    std::int32_t Spacing; // 0x00A4 (Size: 0x4, Type: IntProperty)
};

static_assert(offsetof(UPaperTileSet, TileSize) == 40, "Offset mismatch for UPaperTileSet::TileSize");
static_assert(offsetof(UPaperTileSet, TileSheet) == 48, "Offset mismatch for UPaperTileSet::TileSheet");
static_assert(offsetof(UPaperTileSet, AdditionalSourceTextures) == 56, "Offset mismatch for UPaperTileSet::AdditionalSourceTextures");
static_assert(offsetof(UPaperTileSet, BorderMargin) == 72, "Offset mismatch for UPaperTileSet::BorderMargin");
static_assert(offsetof(UPaperTileSet, PerTileSpacing) == 88, "Offset mismatch for UPaperTileSet::PerTileSpacing");
static_assert(offsetof(UPaperTileSet, DrawingOffset) == 96, "Offset mismatch for UPaperTileSet::DrawingOffset");
static_assert(offsetof(UPaperTileSet, WidthInTiles) == 104, "Offset mismatch for UPaperTileSet::WidthInTiles");
static_assert(offsetof(UPaperTileSet, HeightInTiles) == 108, "Offset mismatch for UPaperTileSet::HeightInTiles");
static_assert(offsetof(UPaperTileSet, AllocatedWidth) == 112, "Offset mismatch for UPaperTileSet::AllocatedWidth");
static_assert(offsetof(UPaperTileSet, AllocatedHeight) == 116, "Offset mismatch for UPaperTileSet::AllocatedHeight");
static_assert(offsetof(UPaperTileSet, PerTileData) == 120, "Offset mismatch for UPaperTileSet::PerTileData");
static_assert(offsetof(UPaperTileSet, Terrains) == 136, "Offset mismatch for UPaperTileSet::Terrains");
static_assert(offsetof(UPaperTileSet, TileWidth) == 152, "Offset mismatch for UPaperTileSet::TileWidth");
static_assert(offsetof(UPaperTileSet, TileHeight) == 156, "Offset mismatch for UPaperTileSet::TileHeight");
static_assert(offsetof(UPaperTileSet, Margin) == 160, "Offset mismatch for UPaperTileSet::Margin");
static_assert(offsetof(UPaperTileSet, Spacing) == 164, "Offset mismatch for UPaperTileSet::Spacing");

// /Script/Paper2D.TileMapBlueprintLibrary
// Kind: Class; super: BlueprintFunctionLibrary
class UTileMapBlueprintLibrary
{
public:
    std::uint8_t Opaque[1];
};
