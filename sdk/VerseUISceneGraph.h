/**
 * decamp dumper generated SDK
 * Package: /Script/VerseUISceneGraph
 */
#pragma once
#include "Basic.h"

// /Script/VerseUISceneGraph.VerseUIViewportWidgetRoot
// Kind: ScriptStruct; super: none
struct FVerseUIViewportWidgetRoot
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseUISceneGraph.UMGImageWidgetImplementation
// Kind: Class; super: UMGWidgetComponentImplementation
class UUMGImageWidgetImplementation
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString WidgetName; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UUMGImageWidgetImplementation, WidgetName) == 48, "Offset mismatch for UUMGImageWidgetImplementation::WidgetName");

// /Script/VerseUISceneGraph.UMGTextWidgetImplementation
// Kind: Class; super: UMGWidgetComponentImplementation
class UUMGTextWidgetImplementation
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString WidgetName; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UUMGTextWidgetImplementation, WidgetName) == 48, "Offset mismatch for UUMGTextWidgetImplementation::WidgetName");

// /Script/VerseUISceneGraph.UMGWidgetComponentImplementation
// Kind: Class; super: WidgetComponentImplementation
class UUMGWidgetComponentImplementation
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString WidgetName; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UUMGWidgetComponentImplementation, WidgetName) == 48, "Offset mismatch for UUMGWidgetComponentImplementation::WidgetName");

// /Script/VerseUISceneGraph.VerseUISceneGraphPlayerComponent
// Kind: Class; super: ActorComponent
class UVerseUISceneGraphPlayerComponent
{
public:
    std::uint8_t Pad_0000[0xC0]; // 0x0000
    std::uint8_t ViewportRoot[0x18]; // 0x00C0 (Size: 0x18, Type: StructProperty)
    std::uint8_t PlatformViewportRoot[0x1]; // 0x00D8 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UVerseUISceneGraphPlayerComponent, ViewportRoot) == 192, "Offset mismatch for UVerseUISceneGraphPlayerComponent::ViewportRoot");
static_assert(offsetof(UVerseUISceneGraphPlayerComponent, PlatformViewportRoot) == 216, "Offset mismatch for UVerseUISceneGraphPlayerComponent::PlatformViewportRoot");

// /Script/VerseUISceneGraph.VerseUISceneGraphWorldPreview
// Kind: Class; super: Object
class UVerseUISceneGraphWorldPreview
{
public:
    std::uint8_t Opaque[1];
};


// /Script/VerseUISceneGraph.WidgetActorProxyActor
// Kind: Class; super: Actor
class UWidgetActorProxyActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* WidgetComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t RawSize[0x10]; // 0x0280 (Size: 0x10, Type: StructProperty)
    std::uint8_t RawScale[0x1]; // 0x0290 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UWidgetActorProxyActor, WidgetComponent) == 632, "Offset mismatch for UWidgetActorProxyActor::WidgetComponent");
static_assert(offsetof(UWidgetActorProxyActor, RawSize) == 640, "Offset mismatch for UWidgetActorProxyActor::RawSize");
static_assert(offsetof(UWidgetActorProxyActor, RawScale) == 656, "Offset mismatch for UWidgetActorProxyActor::RawScale");

// /Script/VerseUISceneGraph.WidgetComponentImplementation
// Kind: Class; super: Object
class UWidgetComponentImplementation
{
public:
    std::uint8_t Pad_0000[0x30]; // 0x0000
    FString WidgetName; // 0x0030 (Size: 0x10, Type: StrProperty)
};

static_assert(offsetof(UWidgetComponentImplementation, WidgetName) == 48, "Offset mismatch for UWidgetComponentImplementation::WidgetName");
