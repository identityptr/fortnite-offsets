#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksCoreCosmeticsRuntime
{
    struct FortAnimNotifyState_SpawnSparksProp
    {
        static constexpr std::string_view Name = "FortAnimNotifyState_SpawnSparksProp";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAnimNotifyState_SpawnProp";
        struct Offsets
        {
            static constexpr std::uintptr_t InstrumentType = 0x200;
            static constexpr std::uintptr_t ShouldUseLeftHandMesh = 0x201;
            static constexpr std::uintptr_t ShouldUseAuxiliaryMesh = 0x202;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"InstrumentType", 0x200, "EnumProperty"},
            {"ShouldUseLeftHandMesh", 0x201, "BoolProperty"},
            {"ShouldUseAuxiliaryMesh", 0x202, "BoolProperty"},
        }};
    };

    struct FortAthenaBTService_PlaySparksAura
    {
        static constexpr std::string_view Name = "FortAthenaBTService_PlaySparksAura";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BTService";
        struct Offsets
        {
            static constexpr std::uintptr_t SparksAuraPrimaryAssetId = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SparksAuraPrimaryAssetId", 0x70, "StructProperty"},
        }};
    };

    struct FortAthenaMutator_JamEmote
    {
        static constexpr std::string_view Name = "FortAthenaMutator_JamEmote";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortAthenaMutator";
        struct Offsets
        {
            static constexpr std::uintptr_t bMutatesGameMode = 0x2B8;
            static constexpr std::uintptr_t bMutatesGameState = 0x2B8;
            static constexpr std::uintptr_t CachedGameMode = 0x2C0;
            static constexpr std::uintptr_t CachedGameState = 0x2C8;
            static constexpr std::uintptr_t InitializedPlayerControllers = 0x2D0;
            static constexpr std::uintptr_t OverridePriority = 0x2E4;
            static constexpr std::uintptr_t bOnlyRunOnGameThread = 0x2E5;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"bMutatesGameMode", 0x2B8, "BoolProperty"},
            {"bMutatesGameState", 0x2B8, "BoolProperty"},
            {"CachedGameMode", 0x2C0, "ObjectProperty"},
            {"CachedGameState", 0x2C8, "ObjectProperty"},
            {"InitializedPlayerControllers", 0x2D0, "SetProperty"},
            {"OverridePriority", 0x2E4, "EnumProperty"},
            {"bOnlyRunOnGameThread", 0x2E5, "BoolProperty"},
        }};
    };

    struct FortPawnComponent_SparksAuraRelay
    {
        static constexpr std::string_view Name = "FortPawnComponent_SparksAuraRelay";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortPawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bAuraEnabled = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bAuraEnabled", 0xC8, "BoolProperty"},
        }};
    };

    struct SongPartExecutionExtender
    {
        static constexpr std::string_view Name = "SongPartExecutionExtender";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SparksAccountItemDefinition
    {
        static constexpr std::string_view Name = "SparksAccountItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaCosmeticItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t SubType = 0x3F8;
            static constexpr std::uintptr_t Slot = 0x3FC;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SubType", 0x3F8, "EnumProperty"},
            {"Slot", 0x3FC, "StructProperty"},
        }};
    };

    struct SparksAnimNotifyDataRegistry
    {
        static constexpr std::string_view Name = "SparksAnimNotifyDataRegistry";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RegisteredData = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"RegisteredData", 0xC0, "ArrayProperty"},
        }};
    };

    struct SparksAuraComponent
    {
        static constexpr std::string_view Name = "SparksAuraComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OnAuraItemChanged = 0xC0;
            static constexpr std::uintptr_t ActiveAura = 0xD8;
            static constexpr std::uintptr_t DefaultAuraItemDefID = 0xE0;
            static constexpr std::uintptr_t AuraItemDef = 0xE8;
            static constexpr std::uintptr_t AuraItemDefOverride = 0xF0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"OnAuraItemChanged", 0xC0, "MulticastInlineDelegateProperty"},
            {"ActiveAura", 0xD8, "ObjectProperty"},
            {"DefaultAuraItemDefID", 0xE0, "StructProperty"},
            {"AuraItemDef", 0xE8, "ObjectProperty"},
            {"AuraItemDefOverride", 0xF0, "ObjectProperty"},
        }};
    };

    struct SparksAuraItemDefinition
    {
        static constexpr std::string_view Name = "SparksAuraItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksAccountItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t StartSystem = 0x400;
            static constexpr std::uintptr_t StartSystemAttachPoint = 0x420;
            static constexpr std::uintptr_t SustainSystem = 0x428;
            static constexpr std::uintptr_t SustainSystemAttachPoint = 0x448;
            static constexpr std::uintptr_t StopSystem = 0x450;
            static constexpr std::uintptr_t StopSystemAttachPoint = 0x470;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"StartSystem", 0x400, "SoftObjectProperty"},
            {"StartSystemAttachPoint", 0x420, "NameProperty"},
            {"SustainSystem", 0x428, "SoftObjectProperty"},
            {"SustainSystemAttachPoint", 0x448, "NameProperty"},
            {"StopSystem", 0x450, "SoftObjectProperty"},
            {"StopSystemAttachPoint", 0x470, "NameProperty"},
        }};
    };

    struct SparksBassItemDefinition
    {
        static constexpr std::string_view Name = "SparksBassItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksInstrumentItemDefBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0x400;
            static constexpr std::uintptr_t LeftHandMesh = 0x420;
            static constexpr std::uintptr_t AuxiliaryMesh = 0x440;
            static constexpr std::uintptr_t Material = 0x460;
            static constexpr std::uintptr_t LeftHandMaterial = 0x480;
            static constexpr std::uintptr_t AuxiliaryMaterial = 0x4A0;
            static constexpr std::uintptr_t AuxiliaryMaterial2 = 0x4C0;
            static constexpr std::uintptr_t MainFXSystem = 0x4E0;
            static constexpr std::uintptr_t LHFXSystem = 0x500;
            static constexpr std::uintptr_t AuxFXSystem = 0x520;
            static constexpr std::uintptr_t MainFXSocket = 0x540;
            static constexpr std::uintptr_t LHFXSocket = 0x544;
            static constexpr std::uintptr_t AuxFXSocket = 0x548;
            static constexpr std::uintptr_t PhysicsOverrideAsset = 0x550;
            static constexpr std::uintptr_t LeftHandPhysicsOverrideAsset = 0x570;
            static constexpr std::uintptr_t AuxiliaryPhysicsOverrideAsset = 0x590;
            static constexpr std::uintptr_t CameraFramingBounds = 0x5B0;
            static constexpr std::uintptr_t BoneSetsToHide = 0x5D0;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"Mesh", 0x400, "SoftObjectProperty"},
            {"LeftHandMesh", 0x420, "SoftObjectProperty"},
            {"AuxiliaryMesh", 0x440, "SoftObjectProperty"},
            {"Material", 0x460, "SoftObjectProperty"},
            {"LeftHandMaterial", 0x480, "SoftObjectProperty"},
            {"AuxiliaryMaterial", 0x4A0, "SoftObjectProperty"},
            {"AuxiliaryMaterial2", 0x4C0, "SoftObjectProperty"},
            {"MainFXSystem", 0x4E0, "SoftObjectProperty"},
            {"LHFXSystem", 0x500, "SoftObjectProperty"},
            {"AuxFXSystem", 0x520, "SoftObjectProperty"},
            {"MainFXSocket", 0x540, "NameProperty"},
            {"LHFXSocket", 0x544, "NameProperty"},
            {"AuxFXSocket", 0x548, "NameProperty"},
            {"PhysicsOverrideAsset", 0x550, "SoftObjectProperty"},
            {"LeftHandPhysicsOverrideAsset", 0x570, "SoftObjectProperty"},
            {"AuxiliaryPhysicsOverrideAsset", 0x590, "SoftObjectProperty"},
            {"CameraFramingBounds", 0x5B0, "StructProperty"},
            {"BoneSetsToHide", 0x5D0, "StructProperty"},
        }};
    };

    struct SparksBassSpotlightDefinition
    {
        static constexpr std::string_view Name = "SparksBassSpotlightDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSpotlightAnimDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t SpotlightSequence = 0x400;
            static constexpr std::uintptr_t InstrumentType = 0x420;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpotlightSequence", 0x400, "SoftObjectProperty"},
            {"InstrumentType", 0x420, "EnumProperty"},
        }};
    };

    struct SparksControllerComponent_JamTrackLoadout
    {
        static constexpr std::string_view Name = "SparksControllerComponent_JamTrackLoadout";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t EquippedJamSongs = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"EquippedJamSongs", 0xC0, "ArrayProperty"},
        }};
    };

    struct SparksCosmeticCatalog
    {
        static constexpr std::string_view Name = "SparksCosmeticCatalog";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bDefsAreInitialized = 0xC0;
            static constexpr std::uintptr_t ItemDefinitionMap = 0xC8;
            static constexpr std::uintptr_t AssetIDMap = 0xD8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"bDefsAreInitialized", 0xC0, "BoolProperty"},
            {"ItemDefinitionMap", 0xC8, "MapProperty"},
            {"AssetIDMap", 0xD8, "MapProperty"},
        }};
    };

    struct SparksCosmeticComponent
    {
        static constexpr std::string_view Name = "SparksCosmeticComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PawnComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticItemChanged = 0xC8;
            static constexpr std::uintptr_t CosmeticChoiceChanged = 0xF0;
            static constexpr std::uintptr_t OnLoadoutFilled = 0x100;
            static constexpr std::uintptr_t bIsLoadoutFilled = 0x110;
            static constexpr std::uintptr_t CurrentLoadout = 0x118;
            static constexpr std::uintptr_t DefaultInstrumentDefIDs = 0x1B8;
            static constexpr std::uintptr_t InstrumentDefs = 0x1C8;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CosmeticItemChanged", 0xC8, "MulticastInlineDelegateProperty"},
            {"CosmeticChoiceChanged", 0xF0, "MulticastInlineDelegateProperty"},
            {"OnLoadoutFilled", 0x100, "MulticastInlineDelegateProperty"},
            {"bIsLoadoutFilled", 0x110, "BoolProperty"},
            {"CurrentLoadout", 0x118, "StructProperty"},
            {"DefaultInstrumentDefIDs", 0x1B8, "MapProperty"},
            {"InstrumentDefs", 0x1C8, "MapProperty"},
        }};
    };

    struct SparksCosmeticOverrides
    {
        static constexpr std::string_view Name = "SparksCosmeticOverrides";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "GameStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bPreloadInstrumentAssetsOnStartup = 0xC0;
            static constexpr std::uintptr_t PawnType = 0xC8;
            static constexpr std::uintptr_t InstrumenItemDefOverrides = 0xE8;
            static constexpr std::uintptr_t IADInstrumentPlaceholderOverrides = 0x110;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"bPreloadInstrumentAssetsOnStartup", 0xC0, "BoolProperty"},
            {"PawnType", 0xC8, "SoftClassProperty"},
            {"InstrumenItemDefOverrides", 0xE8, "ObjectProperty"},
            {"IADInstrumentPlaceholderOverrides", 0x110, "ObjectProperty"},
        }};
    };

    struct SparksCosmeticsSettings
    {
        static constexpr std::string_view Name = "SparksCosmeticsSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t SparksCosmeticPreviewActorClass = 0x28;
            static constexpr std::uintptr_t SparksPreviewCameraActorClass = 0x48;
            static constexpr std::uintptr_t SparksAuraPreviewActorClass = 0x68;
            static constexpr std::uintptr_t SparksAuraDisplayActorClass = 0x88;
            static constexpr std::uintptr_t SparksSongPreviewActorClass = 0xA8;
            static constexpr std::uintptr_t SparksSongPrefabActorClass = 0xC8;
            static constexpr std::uintptr_t SparksLoadoutSchema = 0xE8;
            static constexpr std::uintptr_t GuitarCameraFramingBounds = 0xF0;
            static constexpr std::uintptr_t BassCameraFramingBounds = 0x110;
            static constexpr std::uintptr_t DrumCameraFramingBounds = 0x130;
            static constexpr std::uintptr_t MicCameraFramingBounds = 0x150;
            static constexpr std::uintptr_t InstrumentPreviewSetups = 0x170;
            static constexpr std::uintptr_t LUT_VolumeTexture = 0x180;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"SparksCosmeticPreviewActorClass", 0x28, "SoftClassProperty"},
            {"SparksPreviewCameraActorClass", 0x48, "SoftClassProperty"},
            {"SparksAuraPreviewActorClass", 0x68, "SoftClassProperty"},
            {"SparksAuraDisplayActorClass", 0x88, "SoftClassProperty"},
            {"SparksSongPreviewActorClass", 0xA8, "SoftClassProperty"},
            {"SparksSongPrefabActorClass", 0xC8, "SoftClassProperty"},
            {"SparksLoadoutSchema", 0xE8, "ObjectProperty"},
            {"GuitarCameraFramingBounds", 0xF0, "StructProperty"},
            {"BassCameraFramingBounds", 0x110, "StructProperty"},
            {"DrumCameraFramingBounds", 0x130, "StructProperty"},
            {"MicCameraFramingBounds", 0x150, "StructProperty"},
            {"InstrumentPreviewSetups", 0x170, "MapProperty"},
            {"LUT_VolumeTexture", 0x180, "ObjectProperty"},
        }};
    };

    struct SparksCosmetics_BPFL
    {
        static constexpr std::string_view Name = "SparksCosmetics_BPFL";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SparksDrumItemDefinition
    {
        static constexpr std::string_view Name = "SparksDrumItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksInstrumentItemDefBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0x400;
            static constexpr std::uintptr_t LeftHandMesh = 0x420;
            static constexpr std::uintptr_t AuxiliaryMesh = 0x440;
            static constexpr std::uintptr_t Material = 0x460;
            static constexpr std::uintptr_t LeftHandMaterial = 0x480;
            static constexpr std::uintptr_t AuxiliaryMaterial = 0x4A0;
            static constexpr std::uintptr_t AuxiliaryMaterial2 = 0x4C0;
            static constexpr std::uintptr_t MainFXSystem = 0x4E0;
            static constexpr std::uintptr_t LHFXSystem = 0x500;
            static constexpr std::uintptr_t AuxFXSystem = 0x520;
            static constexpr std::uintptr_t MainFXSocket = 0x540;
            static constexpr std::uintptr_t LHFXSocket = 0x544;
            static constexpr std::uintptr_t AuxFXSocket = 0x548;
            static constexpr std::uintptr_t PhysicsOverrideAsset = 0x550;
            static constexpr std::uintptr_t LeftHandPhysicsOverrideAsset = 0x570;
            static constexpr std::uintptr_t AuxiliaryPhysicsOverrideAsset = 0x590;
            static constexpr std::uintptr_t CameraFramingBounds = 0x5B0;
            static constexpr std::uintptr_t BoneSetsToHide = 0x5D0;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"Mesh", 0x400, "SoftObjectProperty"},
            {"LeftHandMesh", 0x420, "SoftObjectProperty"},
            {"AuxiliaryMesh", 0x440, "SoftObjectProperty"},
            {"Material", 0x460, "SoftObjectProperty"},
            {"LeftHandMaterial", 0x480, "SoftObjectProperty"},
            {"AuxiliaryMaterial", 0x4A0, "SoftObjectProperty"},
            {"AuxiliaryMaterial2", 0x4C0, "SoftObjectProperty"},
            {"MainFXSystem", 0x4E0, "SoftObjectProperty"},
            {"LHFXSystem", 0x500, "SoftObjectProperty"},
            {"AuxFXSystem", 0x520, "SoftObjectProperty"},
            {"MainFXSocket", 0x540, "NameProperty"},
            {"LHFXSocket", 0x544, "NameProperty"},
            {"AuxFXSocket", 0x548, "NameProperty"},
            {"PhysicsOverrideAsset", 0x550, "SoftObjectProperty"},
            {"LeftHandPhysicsOverrideAsset", 0x570, "SoftObjectProperty"},
            {"AuxiliaryPhysicsOverrideAsset", 0x590, "SoftObjectProperty"},
            {"CameraFramingBounds", 0x5B0, "StructProperty"},
            {"BoneSetsToHide", 0x5D0, "StructProperty"},
        }};
    };

    struct SparksDrumSpotlightDefinition
    {
        static constexpr std::string_view Name = "SparksDrumSpotlightDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSpotlightAnimDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t SpotlightSequence = 0x400;
            static constexpr std::uintptr_t InstrumentType = 0x420;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpotlightSequence", 0x400, "SoftObjectProperty"},
            {"InstrumentType", 0x420, "EnumProperty"},
        }};
    };

    struct SparksGuitarItemDefinition
    {
        static constexpr std::string_view Name = "SparksGuitarItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksInstrumentItemDefBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0x400;
            static constexpr std::uintptr_t LeftHandMesh = 0x420;
            static constexpr std::uintptr_t AuxiliaryMesh = 0x440;
            static constexpr std::uintptr_t Material = 0x460;
            static constexpr std::uintptr_t LeftHandMaterial = 0x480;
            static constexpr std::uintptr_t AuxiliaryMaterial = 0x4A0;
            static constexpr std::uintptr_t AuxiliaryMaterial2 = 0x4C0;
            static constexpr std::uintptr_t MainFXSystem = 0x4E0;
            static constexpr std::uintptr_t LHFXSystem = 0x500;
            static constexpr std::uintptr_t AuxFXSystem = 0x520;
            static constexpr std::uintptr_t MainFXSocket = 0x540;
            static constexpr std::uintptr_t LHFXSocket = 0x544;
            static constexpr std::uintptr_t AuxFXSocket = 0x548;
            static constexpr std::uintptr_t PhysicsOverrideAsset = 0x550;
            static constexpr std::uintptr_t LeftHandPhysicsOverrideAsset = 0x570;
            static constexpr std::uintptr_t AuxiliaryPhysicsOverrideAsset = 0x590;
            static constexpr std::uintptr_t CameraFramingBounds = 0x5B0;
            static constexpr std::uintptr_t BoneSetsToHide = 0x5D0;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"Mesh", 0x400, "SoftObjectProperty"},
            {"LeftHandMesh", 0x420, "SoftObjectProperty"},
            {"AuxiliaryMesh", 0x440, "SoftObjectProperty"},
            {"Material", 0x460, "SoftObjectProperty"},
            {"LeftHandMaterial", 0x480, "SoftObjectProperty"},
            {"AuxiliaryMaterial", 0x4A0, "SoftObjectProperty"},
            {"AuxiliaryMaterial2", 0x4C0, "SoftObjectProperty"},
            {"MainFXSystem", 0x4E0, "SoftObjectProperty"},
            {"LHFXSystem", 0x500, "SoftObjectProperty"},
            {"AuxFXSystem", 0x520, "SoftObjectProperty"},
            {"MainFXSocket", 0x540, "NameProperty"},
            {"LHFXSocket", 0x544, "NameProperty"},
            {"AuxFXSocket", 0x548, "NameProperty"},
            {"PhysicsOverrideAsset", 0x550, "SoftObjectProperty"},
            {"LeftHandPhysicsOverrideAsset", 0x570, "SoftObjectProperty"},
            {"AuxiliaryPhysicsOverrideAsset", 0x590, "SoftObjectProperty"},
            {"CameraFramingBounds", 0x5B0, "StructProperty"},
            {"BoneSetsToHide", 0x5D0, "StructProperty"},
        }};
    };

    struct SparksGuitarSpotlightDefinition
    {
        static constexpr std::string_view Name = "SparksGuitarSpotlightDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSpotlightAnimDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t SpotlightSequence = 0x400;
            static constexpr std::uintptr_t InstrumentType = 0x420;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpotlightSequence", 0x400, "SoftObjectProperty"},
            {"InstrumentType", 0x420, "EnumProperty"},
        }};
    };

    struct SparksInstrumentComponentBase
    {
        static constexpr std::string_view Name = "SparksInstrumentComponentBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnedCosmeticVFX = 0xC8;
            static constexpr std::uintptr_t PreviewInstrumentDef = 0xF0;
            static constexpr std::uintptr_t PreviewVariantChannels = 0xF8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SpawnedCosmeticVFX", 0xC8, "ArrayProperty"},
            {"PreviewInstrumentDef", 0xF0, "ObjectProperty"},
            {"PreviewVariantChannels", 0xF8, "ArrayProperty"},
        }};
    };

    struct SparksInstrumentItemDefBase
    {
        static constexpr std::string_view Name = "SparksInstrumentItemDefBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksAccountItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0x400;
            static constexpr std::uintptr_t LeftHandMesh = 0x420;
            static constexpr std::uintptr_t AuxiliaryMesh = 0x440;
            static constexpr std::uintptr_t Material = 0x460;
            static constexpr std::uintptr_t LeftHandMaterial = 0x480;
            static constexpr std::uintptr_t AuxiliaryMaterial = 0x4A0;
            static constexpr std::uintptr_t AuxiliaryMaterial2 = 0x4C0;
            static constexpr std::uintptr_t MainFXSystem = 0x4E0;
            static constexpr std::uintptr_t LHFXSystem = 0x500;
            static constexpr std::uintptr_t AuxFXSystem = 0x520;
            static constexpr std::uintptr_t MainFXSocket = 0x540;
            static constexpr std::uintptr_t LHFXSocket = 0x544;
            static constexpr std::uintptr_t AuxFXSocket = 0x548;
            static constexpr std::uintptr_t PhysicsOverrideAsset = 0x550;
            static constexpr std::uintptr_t LeftHandPhysicsOverrideAsset = 0x570;
            static constexpr std::uintptr_t AuxiliaryPhysicsOverrideAsset = 0x590;
            static constexpr std::uintptr_t CameraFramingBounds = 0x5B0;
            static constexpr std::uintptr_t BoneSetsToHide = 0x5D0;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"Mesh", 0x400, "SoftObjectProperty"},
            {"LeftHandMesh", 0x420, "SoftObjectProperty"},
            {"AuxiliaryMesh", 0x440, "SoftObjectProperty"},
            {"Material", 0x460, "SoftObjectProperty"},
            {"LeftHandMaterial", 0x480, "SoftObjectProperty"},
            {"AuxiliaryMaterial", 0x4A0, "SoftObjectProperty"},
            {"AuxiliaryMaterial2", 0x4C0, "SoftObjectProperty"},
            {"MainFXSystem", 0x4E0, "SoftObjectProperty"},
            {"LHFXSystem", 0x500, "SoftObjectProperty"},
            {"AuxFXSystem", 0x520, "SoftObjectProperty"},
            {"MainFXSocket", 0x540, "NameProperty"},
            {"LHFXSocket", 0x544, "NameProperty"},
            {"AuxFXSocket", 0x548, "NameProperty"},
            {"PhysicsOverrideAsset", 0x550, "SoftObjectProperty"},
            {"LeftHandPhysicsOverrideAsset", 0x570, "SoftObjectProperty"},
            {"AuxiliaryPhysicsOverrideAsset", 0x590, "SoftObjectProperty"},
            {"CameraFramingBounds", 0x5B0, "StructProperty"},
            {"BoneSetsToHide", 0x5D0, "StructProperty"},
        }};
    };

    struct SparksJamEmoteItemDefinition
    {
        static constexpr std::string_view Name = "SparksJamEmoteItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaDanceItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t SongItemDef = 0x630;
            static constexpr std::uintptr_t LoopType = 0x638;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SongItemDef", 0x630, "ObjectProperty"},
            {"LoopType", 0x638, "EnumProperty"},
        }};
    };

    struct SparksKeyboardItemDefinition
    {
        static constexpr std::string_view Name = "SparksKeyboardItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksInstrumentItemDefBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0x400;
            static constexpr std::uintptr_t LeftHandMesh = 0x420;
            static constexpr std::uintptr_t AuxiliaryMesh = 0x440;
            static constexpr std::uintptr_t Material = 0x460;
            static constexpr std::uintptr_t LeftHandMaterial = 0x480;
            static constexpr std::uintptr_t AuxiliaryMaterial = 0x4A0;
            static constexpr std::uintptr_t AuxiliaryMaterial2 = 0x4C0;
            static constexpr std::uintptr_t MainFXSystem = 0x4E0;
            static constexpr std::uintptr_t LHFXSystem = 0x500;
            static constexpr std::uintptr_t AuxFXSystem = 0x520;
            static constexpr std::uintptr_t MainFXSocket = 0x540;
            static constexpr std::uintptr_t LHFXSocket = 0x544;
            static constexpr std::uintptr_t AuxFXSocket = 0x548;
            static constexpr std::uintptr_t PhysicsOverrideAsset = 0x550;
            static constexpr std::uintptr_t LeftHandPhysicsOverrideAsset = 0x570;
            static constexpr std::uintptr_t AuxiliaryPhysicsOverrideAsset = 0x590;
            static constexpr std::uintptr_t CameraFramingBounds = 0x5B0;
            static constexpr std::uintptr_t BoneSetsToHide = 0x5D0;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"Mesh", 0x400, "SoftObjectProperty"},
            {"LeftHandMesh", 0x420, "SoftObjectProperty"},
            {"AuxiliaryMesh", 0x440, "SoftObjectProperty"},
            {"Material", 0x460, "SoftObjectProperty"},
            {"LeftHandMaterial", 0x480, "SoftObjectProperty"},
            {"AuxiliaryMaterial", 0x4A0, "SoftObjectProperty"},
            {"AuxiliaryMaterial2", 0x4C0, "SoftObjectProperty"},
            {"MainFXSystem", 0x4E0, "SoftObjectProperty"},
            {"LHFXSystem", 0x500, "SoftObjectProperty"},
            {"AuxFXSystem", 0x520, "SoftObjectProperty"},
            {"MainFXSocket", 0x540, "NameProperty"},
            {"LHFXSocket", 0x544, "NameProperty"},
            {"AuxFXSocket", 0x548, "NameProperty"},
            {"PhysicsOverrideAsset", 0x550, "SoftObjectProperty"},
            {"LeftHandPhysicsOverrideAsset", 0x570, "SoftObjectProperty"},
            {"AuxiliaryPhysicsOverrideAsset", 0x590, "SoftObjectProperty"},
            {"CameraFramingBounds", 0x5B0, "StructProperty"},
            {"BoneSetsToHide", 0x5D0, "StructProperty"},
        }};
    };

    struct SparksKeyboardSpotlightDefinition
    {
        static constexpr std::string_view Name = "SparksKeyboardSpotlightDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSpotlightAnimDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t SpotlightSequence = 0x400;
            static constexpr std::uintptr_t InstrumentType = 0x420;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpotlightSequence", 0x400, "SoftObjectProperty"},
            {"InstrumentType", 0x420, "EnumProperty"},
        }};
    };

    struct SparksMicItemDefinition
    {
        static constexpr std::string_view Name = "SparksMicItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksInstrumentItemDefBase";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0x400;
            static constexpr std::uintptr_t LeftHandMesh = 0x420;
            static constexpr std::uintptr_t AuxiliaryMesh = 0x440;
            static constexpr std::uintptr_t Material = 0x460;
            static constexpr std::uintptr_t LeftHandMaterial = 0x480;
            static constexpr std::uintptr_t AuxiliaryMaterial = 0x4A0;
            static constexpr std::uintptr_t AuxiliaryMaterial2 = 0x4C0;
            static constexpr std::uintptr_t MainFXSystem = 0x4E0;
            static constexpr std::uintptr_t LHFXSystem = 0x500;
            static constexpr std::uintptr_t AuxFXSystem = 0x520;
            static constexpr std::uintptr_t MainFXSocket = 0x540;
            static constexpr std::uintptr_t LHFXSocket = 0x544;
            static constexpr std::uintptr_t AuxFXSocket = 0x548;
            static constexpr std::uintptr_t PhysicsOverrideAsset = 0x550;
            static constexpr std::uintptr_t LeftHandPhysicsOverrideAsset = 0x570;
            static constexpr std::uintptr_t AuxiliaryPhysicsOverrideAsset = 0x590;
            static constexpr std::uintptr_t CameraFramingBounds = 0x5B0;
            static constexpr std::uintptr_t BoneSetsToHide = 0x5D0;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"Mesh", 0x400, "SoftObjectProperty"},
            {"LeftHandMesh", 0x420, "SoftObjectProperty"},
            {"AuxiliaryMesh", 0x440, "SoftObjectProperty"},
            {"Material", 0x460, "SoftObjectProperty"},
            {"LeftHandMaterial", 0x480, "SoftObjectProperty"},
            {"AuxiliaryMaterial", 0x4A0, "SoftObjectProperty"},
            {"AuxiliaryMaterial2", 0x4C0, "SoftObjectProperty"},
            {"MainFXSystem", 0x4E0, "SoftObjectProperty"},
            {"LHFXSystem", 0x500, "SoftObjectProperty"},
            {"AuxFXSystem", 0x520, "SoftObjectProperty"},
            {"MainFXSocket", 0x540, "NameProperty"},
            {"LHFXSocket", 0x544, "NameProperty"},
            {"AuxFXSocket", 0x548, "NameProperty"},
            {"PhysicsOverrideAsset", 0x550, "SoftObjectProperty"},
            {"LeftHandPhysicsOverrideAsset", 0x570, "SoftObjectProperty"},
            {"AuxiliaryPhysicsOverrideAsset", 0x590, "SoftObjectProperty"},
            {"CameraFramingBounds", 0x5B0, "StructProperty"},
            {"BoneSetsToHide", 0x5D0, "StructProperty"},
        }};
    };

    struct SparksMicSpotlightDefinition
    {
        static constexpr std::string_view Name = "SparksMicSpotlightDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksSpotlightAnimDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t SpotlightSequence = 0x400;
            static constexpr std::uintptr_t InstrumentType = 0x420;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpotlightSequence", 0x400, "SoftObjectProperty"},
            {"InstrumentType", 0x420, "EnumProperty"},
        }};
    };

    struct SparksPickableSongPart
    {
        static constexpr std::string_view Name = "SparksPickableSongPart";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t LoopType = 0x38;
            static constexpr std::uintptr_t BackingMontageDef = 0x40;
            static constexpr std::uintptr_t SongItemDef = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"LoopType", 0x38, "EnumProperty"},
            {"BackingMontageDef", 0x40, "ObjectProperty"},
            {"SongItemDef", 0x48, "ObjectProperty"},
        }};
    };

    struct SparksPickableSongPartHelpers
    {
        static constexpr std::string_view Name = "SparksPickableSongPartHelpers";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SparksSongItemDefinition
    {
        static constexpr std::string_view Name = "SparksSongItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksAccountItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t SongPart_Vox = 0x408;
            static constexpr std::uintptr_t SongPart_Lead = 0x410;
            static constexpr std::uintptr_t SongPart_Bass = 0x418;
            static constexpr std::uintptr_t SongPart_Drum = 0x420;
            static constexpr std::uintptr_t SongPart_All = 0x428;
            static constexpr std::uintptr_t CatalogData = 0x430;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"SongPart_Vox", 0x408, "ObjectProperty"},
            {"SongPart_Lead", 0x410, "ObjectProperty"},
            {"SongPart_Bass", 0x418, "ObjectProperty"},
            {"SongPart_Drum", 0x420, "ObjectProperty"},
            {"SongPart_All", 0x428, "ObjectProperty"},
            {"CatalogData", 0x430, "WeakObjectProperty"},
        }};
    };

    struct SparksSongPartPlayerComponent
    {
        static constexpr std::string_view Name = "SparksSongPartPlayerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Extenders = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Extenders", 0xC0, "ArrayProperty"},
        }};
    };

    struct SparksSongPartPlayerOverrideComponent
    {
        static constexpr std::string_view Name = "SparksSongPartPlayerOverrideComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t OverrideOverlayWidget = 0xE0;
            static constexpr std::uintptr_t NewOverrideOverlayWidget = 0x100;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"OverrideOverlayWidget", 0xE0, "SoftClassProperty"},
            {"NewOverrideOverlayWidget", 0x100, "SoftClassProperty"},
        }};
    };

    struct SparksSpotlightAnimDefinition
    {
        static constexpr std::string_view Name = "SparksSpotlightAnimDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SparksAccountItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t SpotlightSequence = 0x400;
            static constexpr std::uintptr_t InstrumentType = 0x420;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SpotlightSequence", 0x400, "SoftObjectProperty"},
            {"InstrumentType", 0x420, "EnumProperty"},
        }};
    };

}
