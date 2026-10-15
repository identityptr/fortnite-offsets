/**
 * decamp dumper generated SDK
 * Package: /Script/Component
 */
#pragma once
#include "Basic.h"

// /Script/Component.VerseRepMovementNetSerializerConfig
// Kind: ScriptStruct; super: NetSerializerConfig
struct FVerseRepMovementNetSerializerConfig
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Component.CollisionElementBuilder
// Kind: Class; super: Interface
class UCollisionElementBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Component.CollisionQueryActorConvertor
// Kind: Class; super: Interface
class UCollisionQueryActorConvertor
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Component.DecalProxyActor
// Kind: Class; super: Actor
class UDecalProxyActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* DecalComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDecalProxyActor, DecalComponent) == 632, "Offset mismatch for UDecalProxyActor::DecalComponent");

// /Script/Component.DirectionalLightProxyActor
// Kind: Class; super: LightProxyActor
class UDirectionalLightProxyActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* LightComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UDirectionalLightProxyActor, LightComponent) == 632, "Offset mismatch for UDirectionalLightProxyActor::LightComponent");

// /Script/Component.ForwardsSelectionToTypedElement
// Kind: Class; super: Interface
class UForwardsSelectionToTypedElement
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Component.LightProxyActor
// Kind: Class; super: Actor
class ULightProxyActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* LightComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(ULightProxyActor, LightComponent) == 632, "Offset mismatch for ULightProxyActor::LightComponent");

// /Script/Component.MeshEntityComponentBaseImpl
// Kind: Class; super: Object
class UMeshEntityComponentBaseImpl
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Component.MeshEntityComponentImpl
// Kind: Class; super: MeshEntityComponentBaseImpl
class UMeshEntityComponentImpl
{
public:
    std::uint8_t Pad_0000[0x280]; // 0x0000
    TArray<void*> OverrideMaterials; // 0x0280 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMeshEntityComponentImpl, OverrideMaterials) == 640, "Offset mismatch for UMeshEntityComponentImpl::OverrideMaterials");

// /Script/Component.MeshEntityComponentImpl_Mass
// Kind: Class; super: MeshEntityComponentBaseImpl
class UMeshEntityComponentImpl_Mass
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Component.MeshEntityComponentImpl_Static
// Kind: Class; super: MeshEntityComponentImpl
class UMeshEntityComponentImpl_Static
{
public:
    std::uint8_t Pad_0000[0x470]; // 0x0000
    TArray<void*> LODData; // 0x0470 (Size: 0x10, Type: ArrayProperty)
};

static_assert(offsetof(UMeshEntityComponentImpl_Static, LODData) == 1136, "Offset mismatch for UMeshEntityComponentImpl_Static::LODData");

// /Script/Component.MeshPartCollisionElementBuilder
// Kind: Class; super: Object
class UMeshPartCollisionElementBuilder
{
public:
    std::uint8_t Opaque[1];
};


// /Script/Component.ParticleSystemProxyActor
// Kind: Class; super: Actor
class UParticleSystemProxyActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* NiagaraComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UParticleSystemProxyActor, NiagaraComponent) == 632, "Offset mismatch for UParticleSystemProxyActor::NiagaraComponent");

// /Script/Component.PhysicsEntityComponent_Implementation
// Kind: Class; super: Object
class UPhysicsEntityComponent_Implementation
{
public:
    std::uint8_t Pad_0000[0x28]; // 0x0000
    std::uint8_t BodyInstance[0x1]; // 0x0028 (Size: 0x1, Type: StructProperty)
};

static_assert(offsetof(UPhysicsEntityComponent_Implementation, BodyInstance) == 40, "Offset mismatch for UPhysicsEntityComponent_Implementation::BodyInstance");

// /Script/Component.PointLightProxyActor
// Kind: Class; super: LightProxyActor
class UPointLightProxyActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* LightComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UPointLightProxyActor, LightComponent) == 632, "Offset mismatch for UPointLightProxyActor::LightComponent");

// /Script/Component.RectLightProxyActor
// Kind: Class; super: LightProxyActor
class URectLightProxyActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* LightComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(URectLightProxyActor, LightComponent) == 632, "Offset mismatch for URectLightProxyActor::LightComponent");

// /Script/Component.SoundProxyActor
// Kind: Class; super: Actor
class USoundProxyActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* AudioComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USoundProxyActor, AudioComponent) == 632, "Offset mismatch for USoundProxyActor::AudioComponent");

// /Script/Component.SphereLightProxyActor
// Kind: Class; super: LightProxyActor
class USphereLightProxyActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* LightComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USphereLightProxyActor, LightComponent) == 632, "Offset mismatch for USphereLightProxyActor::LightComponent");

// /Script/Component.SpotLightProxyActor
// Kind: Class; super: LightProxyActor
class USpotLightProxyActor
{
public:
    std::uint8_t Pad_0000[0x278]; // 0x0000
    void* LightComponent; // 0x0278 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(USpotLightProxyActor, LightComponent) == 632, "Offset mismatch for USpotLightProxyActor::LightComponent");

// /Script/Component.TextDisplayProxyActor
// Kind: Class; super: Actor
class UTextDisplayProxyActor
{
public:
    std::uint8_t Pad_0000[0x288]; // 0x0000
    void* TextRenderComponent; // 0x0288 (Size: 0x8, Type: ObjectProperty)
    std::uint8_t Pad_0001[0x30]; // 0x0290
    void* TextMaterialInstanceDynamic; // 0x02C0 (Size: 0x8, Type: ObjectProperty)
    void* Font; // 0x02C8 (Size: 0x8, Type: ObjectProperty)
};

static_assert(offsetof(UTextDisplayProxyActor, TextRenderComponent) == 648, "Offset mismatch for UTextDisplayProxyActor::TextRenderComponent");
static_assert(offsetof(UTextDisplayProxyActor, TextMaterialInstanceDynamic) == 704, "Offset mismatch for UTextDisplayProxyActor::TextMaterialInstanceDynamic");
static_assert(offsetof(UTextDisplayProxyActor, Font) == 712, "Offset mismatch for UTextDisplayProxyActor::Font");
