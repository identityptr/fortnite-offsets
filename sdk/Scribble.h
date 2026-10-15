/**
 * decamp dumper generated SDK
 * Package: /Script/Scribble
 */
#pragma once
#include "Basic.h"

// /Script/Scribble.LineStripScribbleNode
// Kind: ScriptStruct; super: ScribbleNode
struct FLineStripScribbleNode
{
public:
    std::uint8_t Pad_0000[0x80]; // 0x0000
    TArray<void*> LineStrips; // 0x0080 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(FLineStripScribbleNode, LineStrips) == 128, "Offset mismatch for FLineStripScribbleNode::LineStrips");

// /Script/Scribble.ScribbleGraph
// Kind: ScriptStruct; super: none
struct FScribbleGraph
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Scribble.ScribbleLineStrip
// Kind: ScriptStruct; super: none
struct FScribbleLineStrip
{
public:
    TArray<void*> Vertices; // 0x0000 (Size: 0x10, Type: ArrayProperty)
    float Thickness; // 0x0010 (Size: 0x4, Type: FloatProperty)
    std::uint8_t Color[0x1]; // 0x0014 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FScribbleLineStrip, Vertices) == 0, "Offset mismatch for FScribbleLineStrip::Vertices");
static_assert(offsetof(FScribbleLineStrip, Thickness) == 16, "Offset mismatch for FScribbleLineStrip::Thickness");
static_assert(offsetof(FScribbleLineStrip, Color) == 20, "Offset mismatch for FScribbleLineStrip::Color");

// /Script/Scribble.ScribbleNode
// Kind: ScriptStruct; super: none
struct FScribbleNode
{
public:
    std::uint8_t Pad_0000[0x8]; // 0x0000
    std::uint8_t Type; // 0x0008 (Size: 0x1, Type: ByteProperty)
    std::uint8_t Pad_0001[0x3]; // 0x0009
    std::uint8_t Guid[0x10]; // 0x000C (Size: 0x10, Type: StructProperty)
    std::uint8_t Anchor[0x4]; // 0x001C (Size: 0x4, Type: NameProperty)
    std::uint8_t Position[0x8]; // 0x0020 (Size: 0x8, Type: StructProperty)
    std::uint8_t RelativePosition[0x8]; // 0x0028 (Size: 0x8, Type: StructProperty)
    std::uint8_t Size[0x1]; // 0x0030 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(FScribbleNode, Type) == 8, "Offset mismatch for FScribbleNode::Type");
static_assert(offsetof(FScribbleNode, Guid) == 12, "Offset mismatch for FScribbleNode::Guid");
static_assert(offsetof(FScribbleNode, Anchor) == 28, "Offset mismatch for FScribbleNode::Anchor");
static_assert(offsetof(FScribbleNode, Position) == 32, "Offset mismatch for FScribbleNode::Position");
static_assert(offsetof(FScribbleNode, RelativePosition) == 40, "Offset mismatch for FScribbleNode::RelativePosition");
static_assert(offsetof(FScribbleNode, Size) == 48, "Offset mismatch for FScribbleNode::Size");

// /Script/Scribble.ScribbleEditorSettings
// Kind: Class; super: DeveloperSettings
class UScribbleEditorSettings
{
public:
    std::uint8_t Opaque[1];
};
