#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VehicleCosmeticsRuntime
{
    struct FortVehicleCOParamsVariant
    {
        static constexpr std::string_view Name = "FortVehicleCOParamsVariant";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticVariantBackedByArray";
        struct Offsets
        {
            static constexpr std::uintptr_t RawCOParamsAssetOptions = 0x80;
            static constexpr std::uintptr_t COParamNameSuffix = 0x90;
            static constexpr std::uintptr_t ParamNamesAppendSuffixMap = 0xA0;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"RawCOParamsAssetOptions", 0x80, "ArrayProperty"},
            {"COParamNameSuffix", 0x90, "StrProperty"},
            {"ParamNamesAppendSuffixMap", 0xA0, "MapProperty"},
        }};
    };

    struct FortVehicleCosmeticsItemDefinition
    {
        static constexpr std::string_view Name = "FortVehicleCosmeticsItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaCosmeticItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleCosmeticsItemDef = 0x3F8;
            static constexpr std::uintptr_t VehicleCosmeticsItemDefForTiers = 0x418;
            static constexpr std::uintptr_t ItemTypeTag = 0x428;
            static constexpr std::uintptr_t PreviewConfig = 0x430;
            static constexpr std::uintptr_t RestrictionDefinitions = 0x450;
            static constexpr std::uintptr_t ItemPreviewVehicleBody = 0x460;
            static constexpr std::uintptr_t ItemPreviewBodyVariantOverrides = 0x480;
            static constexpr std::uintptr_t bShouldSimulateSteering = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"VehicleCosmeticsItemDef", 0x3F8, "SoftObjectProperty"},
            {"VehicleCosmeticsItemDefForTiers", 0x418, "ArrayProperty"},
            {"ItemTypeTag", 0x428, "StructProperty"},
            {"PreviewConfig", 0x430, "SoftObjectProperty"},
            {"RestrictionDefinitions", 0x450, "ArrayProperty"},
            {"ItemPreviewVehicleBody", 0x460, "SoftObjectProperty"},
            {"ItemPreviewBodyVariantOverrides", 0x480, "ArrayProperty"},
            {"bShouldSimulateSteering", 0x490, "BoolProperty"},
        }};
    };

    struct FortVehicleCosmeticsItemDefinition_Body
    {
        static constexpr std::string_view Name = "FortVehicleCosmeticsItemDefinition_Body";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleCosmeticsItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleCosmeticsItemDef = 0x3F8;
            static constexpr std::uintptr_t VehicleCosmeticsItemDefForTiers = 0x418;
            static constexpr std::uintptr_t ItemTypeTag = 0x428;
            static constexpr std::uintptr_t PreviewConfig = 0x430;
            static constexpr std::uintptr_t RestrictionDefinitions = 0x450;
            static constexpr std::uintptr_t ItemPreviewVehicleBody = 0x460;
            static constexpr std::uintptr_t ItemPreviewBodyVariantOverrides = 0x480;
            static constexpr std::uintptr_t bShouldSimulateSteering = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"VehicleCosmeticsItemDef", 0x3F8, "SoftObjectProperty"},
            {"VehicleCosmeticsItemDefForTiers", 0x418, "ArrayProperty"},
            {"ItemTypeTag", 0x428, "StructProperty"},
            {"PreviewConfig", 0x430, "SoftObjectProperty"},
            {"RestrictionDefinitions", 0x450, "ArrayProperty"},
            {"ItemPreviewVehicleBody", 0x460, "SoftObjectProperty"},
            {"ItemPreviewBodyVariantOverrides", 0x480, "ArrayProperty"},
            {"bShouldSimulateSteering", 0x490, "BoolProperty"},
        }};
    };

    struct FortVehicleCosmeticsItemDefinition_Booster
    {
        static constexpr std::string_view Name = "FortVehicleCosmeticsItemDefinition_Booster";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleCosmeticsItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleCosmeticsItemDef = 0x3F8;
            static constexpr std::uintptr_t VehicleCosmeticsItemDefForTiers = 0x418;
            static constexpr std::uintptr_t ItemTypeTag = 0x428;
            static constexpr std::uintptr_t PreviewConfig = 0x430;
            static constexpr std::uintptr_t RestrictionDefinitions = 0x450;
            static constexpr std::uintptr_t ItemPreviewVehicleBody = 0x460;
            static constexpr std::uintptr_t ItemPreviewBodyVariantOverrides = 0x480;
            static constexpr std::uintptr_t bShouldSimulateSteering = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"VehicleCosmeticsItemDef", 0x3F8, "SoftObjectProperty"},
            {"VehicleCosmeticsItemDefForTiers", 0x418, "ArrayProperty"},
            {"ItemTypeTag", 0x428, "StructProperty"},
            {"PreviewConfig", 0x430, "SoftObjectProperty"},
            {"RestrictionDefinitions", 0x450, "ArrayProperty"},
            {"ItemPreviewVehicleBody", 0x460, "SoftObjectProperty"},
            {"ItemPreviewBodyVariantOverrides", 0x480, "ArrayProperty"},
            {"bShouldSimulateSteering", 0x490, "BoolProperty"},
        }};
    };

    struct FortVehicleCosmeticsItemDefinition_DriftTrail
    {
        static constexpr std::string_view Name = "FortVehicleCosmeticsItemDefinition_DriftTrail";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleCosmeticsItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleCosmeticsItemDef = 0x3F8;
            static constexpr std::uintptr_t VehicleCosmeticsItemDefForTiers = 0x418;
            static constexpr std::uintptr_t ItemTypeTag = 0x428;
            static constexpr std::uintptr_t PreviewConfig = 0x430;
            static constexpr std::uintptr_t RestrictionDefinitions = 0x450;
            static constexpr std::uintptr_t ItemPreviewVehicleBody = 0x460;
            static constexpr std::uintptr_t ItemPreviewBodyVariantOverrides = 0x480;
            static constexpr std::uintptr_t bShouldSimulateSteering = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"VehicleCosmeticsItemDef", 0x3F8, "SoftObjectProperty"},
            {"VehicleCosmeticsItemDefForTiers", 0x418, "ArrayProperty"},
            {"ItemTypeTag", 0x428, "StructProperty"},
            {"PreviewConfig", 0x430, "SoftObjectProperty"},
            {"RestrictionDefinitions", 0x450, "ArrayProperty"},
            {"ItemPreviewVehicleBody", 0x460, "SoftObjectProperty"},
            {"ItemPreviewBodyVariantOverrides", 0x480, "ArrayProperty"},
            {"bShouldSimulateSteering", 0x490, "BoolProperty"},
        }};
    };

    struct FortVehicleCosmeticsItemDefinition_EngineAudio
    {
        static constexpr std::string_view Name = "FortVehicleCosmeticsItemDefinition_EngineAudio";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleCosmeticsItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleCosmeticsItemDef = 0x3F8;
            static constexpr std::uintptr_t VehicleCosmeticsItemDefForTiers = 0x418;
            static constexpr std::uintptr_t ItemTypeTag = 0x428;
            static constexpr std::uintptr_t PreviewConfig = 0x430;
            static constexpr std::uintptr_t RestrictionDefinitions = 0x450;
            static constexpr std::uintptr_t ItemPreviewVehicleBody = 0x460;
            static constexpr std::uintptr_t ItemPreviewBodyVariantOverrides = 0x480;
            static constexpr std::uintptr_t bShouldSimulateSteering = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"VehicleCosmeticsItemDef", 0x3F8, "SoftObjectProperty"},
            {"VehicleCosmeticsItemDefForTiers", 0x418, "ArrayProperty"},
            {"ItemTypeTag", 0x428, "StructProperty"},
            {"PreviewConfig", 0x430, "SoftObjectProperty"},
            {"RestrictionDefinitions", 0x450, "ArrayProperty"},
            {"ItemPreviewVehicleBody", 0x460, "SoftObjectProperty"},
            {"ItemPreviewBodyVariantOverrides", 0x480, "ArrayProperty"},
            {"bShouldSimulateSteering", 0x490, "BoolProperty"},
        }};
    };

    struct FortVehicleCosmeticsItemDefinition_Macaron
    {
        static constexpr std::string_view Name = "FortVehicleCosmeticsItemDefinition_Macaron";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleCosmeticsItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleCosmeticsItemDef = 0x3F8;
            static constexpr std::uintptr_t VehicleCosmeticsItemDefForTiers = 0x418;
            static constexpr std::uintptr_t ItemTypeTag = 0x428;
            static constexpr std::uintptr_t PreviewConfig = 0x430;
            static constexpr std::uintptr_t RestrictionDefinitions = 0x450;
            static constexpr std::uintptr_t ItemPreviewVehicleBody = 0x460;
            static constexpr std::uintptr_t ItemPreviewBodyVariantOverrides = 0x480;
            static constexpr std::uintptr_t bShouldSimulateSteering = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"VehicleCosmeticsItemDef", 0x3F8, "SoftObjectProperty"},
            {"VehicleCosmeticsItemDefForTiers", 0x418, "ArrayProperty"},
            {"ItemTypeTag", 0x428, "StructProperty"},
            {"PreviewConfig", 0x430, "SoftObjectProperty"},
            {"RestrictionDefinitions", 0x450, "ArrayProperty"},
            {"ItemPreviewVehicleBody", 0x460, "SoftObjectProperty"},
            {"ItemPreviewBodyVariantOverrides", 0x480, "ArrayProperty"},
            {"bShouldSimulateSteering", 0x490, "BoolProperty"},
        }};
    };

    struct FortVehicleCosmeticsItemDefinition_Skin
    {
        static constexpr std::string_view Name = "FortVehicleCosmeticsItemDefinition_Skin";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleCosmeticsItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleCosmeticsItemDef = 0x3F8;
            static constexpr std::uintptr_t VehicleCosmeticsItemDefForTiers = 0x418;
            static constexpr std::uintptr_t ItemTypeTag = 0x428;
            static constexpr std::uintptr_t PreviewConfig = 0x430;
            static constexpr std::uintptr_t RestrictionDefinitions = 0x450;
            static constexpr std::uintptr_t ItemPreviewVehicleBody = 0x460;
            static constexpr std::uintptr_t ItemPreviewBodyVariantOverrides = 0x480;
            static constexpr std::uintptr_t bShouldSimulateSteering = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"VehicleCosmeticsItemDef", 0x3F8, "SoftObjectProperty"},
            {"VehicleCosmeticsItemDefForTiers", 0x418, "ArrayProperty"},
            {"ItemTypeTag", 0x428, "StructProperty"},
            {"PreviewConfig", 0x430, "SoftObjectProperty"},
            {"RestrictionDefinitions", 0x450, "ArrayProperty"},
            {"ItemPreviewVehicleBody", 0x460, "SoftObjectProperty"},
            {"ItemPreviewBodyVariantOverrides", 0x480, "ArrayProperty"},
            {"bShouldSimulateSteering", 0x490, "BoolProperty"},
        }};
    };

    struct FortVehicleCosmeticsItemDefinition_Wheel
    {
        static constexpr std::string_view Name = "FortVehicleCosmeticsItemDefinition_Wheel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleCosmeticsItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleCosmeticsItemDef = 0x3F8;
            static constexpr std::uintptr_t VehicleCosmeticsItemDefForTiers = 0x418;
            static constexpr std::uintptr_t ItemTypeTag = 0x428;
            static constexpr std::uintptr_t PreviewConfig = 0x430;
            static constexpr std::uintptr_t RestrictionDefinitions = 0x450;
            static constexpr std::uintptr_t ItemPreviewVehicleBody = 0x460;
            static constexpr std::uintptr_t ItemPreviewBodyVariantOverrides = 0x480;
            static constexpr std::uintptr_t bShouldSimulateSteering = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"VehicleCosmeticsItemDef", 0x3F8, "SoftObjectProperty"},
            {"VehicleCosmeticsItemDefForTiers", 0x418, "ArrayProperty"},
            {"ItemTypeTag", 0x428, "StructProperty"},
            {"PreviewConfig", 0x430, "SoftObjectProperty"},
            {"RestrictionDefinitions", 0x450, "ArrayProperty"},
            {"ItemPreviewVehicleBody", 0x460, "SoftObjectProperty"},
            {"ItemPreviewBodyVariantOverrides", 0x480, "ArrayProperty"},
            {"bShouldSimulateSteering", 0x490, "BoolProperty"},
        }};
    };

    struct FortVehicleCosmeticsItemDefinition_Zest
    {
        static constexpr std::string_view Name = "FortVehicleCosmeticsItemDefinition_Zest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVehicleCosmeticsItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleCosmeticsItemDef = 0x3F8;
            static constexpr std::uintptr_t VehicleCosmeticsItemDefForTiers = 0x418;
            static constexpr std::uintptr_t ItemTypeTag = 0x428;
            static constexpr std::uintptr_t PreviewConfig = 0x430;
            static constexpr std::uintptr_t RestrictionDefinitions = 0x450;
            static constexpr std::uintptr_t ItemPreviewVehicleBody = 0x460;
            static constexpr std::uintptr_t ItemPreviewBodyVariantOverrides = 0x480;
            static constexpr std::uintptr_t bShouldSimulateSteering = 0x490;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"VehicleCosmeticsItemDef", 0x3F8, "SoftObjectProperty"},
            {"VehicleCosmeticsItemDefForTiers", 0x418, "ArrayProperty"},
            {"ItemTypeTag", 0x428, "StructProperty"},
            {"PreviewConfig", 0x430, "SoftObjectProperty"},
            {"RestrictionDefinitions", 0x450, "ArrayProperty"},
            {"ItemPreviewVehicleBody", 0x460, "SoftObjectProperty"},
            {"ItemPreviewBodyVariantOverrides", 0x480, "ArrayProperty"},
            {"bShouldSimulateSteering", 0x490, "BoolProperty"},
        }};
    };

    struct FortVehicleCosmeticsVariantTokenType
    {
        static constexpr std::string_view Name = "FortVehicleCosmeticsVariantTokenType";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortVariantTokenType";
        struct Offsets
        {
            static constexpr std::uintptr_t ProfileType = 0x128;
            static constexpr std::uintptr_t bAutoEquipVariant = 0x129;
            static constexpr std::uintptr_t VariantEquipRules = 0x12A;
            static constexpr std::uintptr_t bMarkItemUnseen = 0x12B;
            static constexpr std::uintptr_t bCreateGiftbox = 0x12C;
            static constexpr std::uintptr_t bGrantBaseItem = 0x12D;
            static constexpr std::uintptr_t bUseDisplayNameInGiftbox = 0x12E;
            static constexpr std::uintptr_t bPersistAfterApplication = 0x12F;
            static constexpr std::uintptr_t cosmetic_item = 0x130;
            static constexpr std::uintptr_t VariantChannelTag = 0x138;
            static constexpr std::uintptr_t VariantNameTag = 0x13C;
            static constexpr std::uintptr_t AdditionalVariantsToGrant = 0x140;
            static constexpr std::uintptr_t VariantPreviewOverrides = 0x150;
        };

        inline static constexpr std::array<PropertyInfo, 13> Properties{{
            {"ProfileType", 0x128, "EnumProperty"},
            {"bAutoEquipVariant", 0x129, "BoolProperty"},
            {"VariantEquipRules", 0x12A, "EnumProperty"},
            {"bMarkItemUnseen", 0x12B, "BoolProperty"},
            {"bCreateGiftbox", 0x12C, "BoolProperty"},
            {"bGrantBaseItem", 0x12D, "BoolProperty"},
            {"bUseDisplayNameInGiftbox", 0x12E, "BoolProperty"},
            {"bPersistAfterApplication", 0x12F, "BoolProperty"},
            {"cosmetic_item", 0x130, "ObjectProperty"},
            {"VariantChannelTag", 0x138, "StructProperty"},
            {"VariantNameTag", 0x13C, "StructProperty"},
            {"AdditionalVariantsToGrant", 0x140, "ArrayProperty"},
            {"VariantPreviewOverrides", 0x150, "ArrayProperty"},
        }};
    };

    struct PlayerCustomizableObjectCacheComponent
    {
        static constexpr std::string_view Name = "PlayerCustomizableObjectCacheComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedInstanceMap = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CachedInstanceMap", 0xC0, "MapProperty"},
        }};
    };

    struct VehicleCOParamsDataAsset
    {
        static constexpr std::string_view Name = "VehicleCOParamsDataAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t COParams = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"COParams", 0x28, "StructProperty"},
        }};
    };

    struct VehicleCosmeticsAIControllerInterface
    {
        static constexpr std::string_view Name = "VehicleCosmeticsAIControllerInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VehicleCosmeticsActor
    {
        static constexpr std::string_view Name = "VehicleCosmeticsActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SpawnLogic = 0x278;
            static constexpr std::uintptr_t CosmeticDependencies = 0x280;
            static constexpr std::uintptr_t VehicleCosmeticsInterface = 0x290;
            static constexpr std::uintptr_t VehicleCosmeticComponent = 0x2A0;
            static constexpr std::uintptr_t SocketAttachedTo = 0x2A8;
            static constexpr std::uintptr_t BoosterPortsNum = 0x2AC;
            static constexpr std::uintptr_t BoostAGBClass = 0x2B0;
            static constexpr std::uintptr_t BoostAGBComponent = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SpawnLogic", 0x278, "ObjectProperty"},
            {"CosmeticDependencies", 0x280, "ArrayProperty"},
            {"VehicleCosmeticsInterface", 0x290, "InterfaceProperty"},
            {"VehicleCosmeticComponent", 0x2A0, "ObjectProperty"},
            {"SocketAttachedTo", 0x2A8, "NameProperty"},
            {"BoosterPortsNum", 0x2AC, "IntProperty"},
            {"BoostAGBClass", 0x2B0, "ClassProperty"},
            {"BoostAGBComponent", 0x2B8, "ObjectProperty"},
        }};
    };

    struct VehicleCosmeticsActorSpawnLogic
    {
        static constexpr std::string_view Name = "VehicleCosmeticsActorSpawnLogic";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t bSpawnOnBodySkeletal = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bSpawnOnBodySkeletal", 0x28, "BoolProperty"},
        }};
    };

    struct VehicleCosmeticsActorSpawnLogic_AttachTo
    {
        static constexpr std::string_view Name = "VehicleCosmeticsActorSpawnLogic_AttachTo";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleCosmeticsActorSpawnLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachSocket = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttachSocket", 0x30, "NameProperty"},
        }};
    };

    struct VehicleCosmeticsActorSpawnLogic_AttachToEach
    {
        static constexpr std::string_view Name = "VehicleCosmeticsActorSpawnLogic_AttachToEach";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleCosmeticsActorSpawnLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachSockets = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttachSockets", 0x30, "ArrayProperty"},
        }};
    };

    struct VehicleCosmeticsActorSpawnLogic_Booster
    {
        static constexpr std::string_view Name = "VehicleCosmeticsActorSpawnLogic_Booster";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleCosmeticsActorSpawnLogic";
        struct Offsets
        {
            static constexpr std::uintptr_t bSpawnOnBodySkeletal = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"bSpawnOnBodySkeletal", 0x28, "BoolProperty"},
        }};
    };

    struct VehicleCosmeticsActorSpawnLogic_Thruster
    {
        static constexpr std::string_view Name = "VehicleCosmeticsActorSpawnLogic_Thruster";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleCosmeticsActorSpawnLogic_AttachTo";
        struct Offsets
        {
            static constexpr std::uintptr_t AttachSocket = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AttachSocket", 0x30, "NameProperty"},
        }};
    };

    struct VehicleCosmeticsAmbientExhaustFXComponent
    {
        static constexpr std::string_view Name = "VehicleCosmeticsAmbientExhaustFXComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AmbientExhaustSystem = 0xC0;
            static constexpr std::uintptr_t AmbientExhaustAttachSocketName = 0xE0;
            static constexpr std::uintptr_t AmbientExhaustAttachRotationOffset = 0xE8;
            static constexpr std::uintptr_t ExhaustNiagaraComponent = 0x100;
            static constexpr std::uintptr_t SpeedNormalizationKmh = 0x10C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AmbientExhaustSystem", 0xC0, "SoftObjectProperty"},
            {"AmbientExhaustAttachSocketName", 0xE0, "NameProperty"},
            {"AmbientExhaustAttachRotationOffset", 0xE8, "StructProperty"},
            {"ExhaustNiagaraComponent", 0x100, "ObjectProperty"},
            {"SpeedNormalizationKmh", 0x10C, "FloatProperty"},
        }};
    };

    struct VehicleCosmeticsAmbientExhaustFXComponent_Persistent
    {
        static constexpr std::string_view Name = "VehicleCosmeticsAmbientExhaustFXComponent_Persistent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleCosmeticsAmbientExhaustFXComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AmbientExhaustSystem = 0xC0;
            static constexpr std::uintptr_t AmbientExhaustAttachSocketName = 0xE0;
            static constexpr std::uintptr_t AmbientExhaustAttachRotationOffset = 0xE8;
            static constexpr std::uintptr_t ExhaustNiagaraComponent = 0x100;
            static constexpr std::uintptr_t SpeedNormalizationKmh = 0x10C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AmbientExhaustSystem", 0xC0, "SoftObjectProperty"},
            {"AmbientExhaustAttachSocketName", 0xE0, "NameProperty"},
            {"AmbientExhaustAttachRotationOffset", 0xE8, "StructProperty"},
            {"ExhaustNiagaraComponent", 0x100, "ObjectProperty"},
            {"SpeedNormalizationKmh", 0x10C, "FloatProperty"},
        }};
    };

    struct VehicleCosmeticsAmbientExhaustFXComponent_SpawnOnActivation
    {
        static constexpr std::string_view Name = "VehicleCosmeticsAmbientExhaustFXComponent_SpawnOnActivation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleCosmeticsAmbientExhaustFXComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AmbientExhaustSystem = 0xC0;
            static constexpr std::uintptr_t AmbientExhaustAttachSocketName = 0xE0;
            static constexpr std::uintptr_t AmbientExhaustAttachRotationOffset = 0xE8;
            static constexpr std::uintptr_t ExhaustNiagaraComponent = 0x100;
            static constexpr std::uintptr_t SpeedNormalizationKmh = 0x10C;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AmbientExhaustSystem", 0xC0, "SoftObjectProperty"},
            {"AmbientExhaustAttachSocketName", 0xE0, "NameProperty"},
            {"AmbientExhaustAttachRotationOffset", 0xE8, "StructProperty"},
            {"ExhaustNiagaraComponent", 0x100, "ObjectProperty"},
            {"SpeedNormalizationKmh", 0x10C, "FloatProperty"},
        }};
    };

    struct VehicleCosmeticsAnimInstance
    {
        static constexpr std::string_view Name = "VehicleCosmeticsAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleBouncyChassisAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t ForwardSpeedPercent = 0x7C0;
            static constexpr std::uintptr_t bIsTouchingGround = 0x7C4;
            static constexpr std::uintptr_t DistanceToGround = 0x7C8;
            static constexpr std::uintptr_t VehicleVelocity = 0x7D0;
            static constexpr std::uintptr_t bDriftBoostActive = 0x7E8;
            static constexpr std::uintptr_t bUnderthrustActive = 0x7E9;
            static constexpr std::uintptr_t bDriftActive = 0x7EA;
            static constexpr std::uintptr_t bKickflipActive = 0x7EB;
            static constexpr std::uintptr_t bJumpActive = 0x7EC;
            static constexpr std::uintptr_t bTurboActive = 0x7ED;
            static constexpr std::uintptr_t bStartlineBoostActive = 0x7EE;
            static constexpr std::uintptr_t bDraftingActive = 0x7EF;
            static constexpr std::uintptr_t bWorldBonusSpeedApplied = 0x7F0;
            static constexpr std::uintptr_t bHasTireMod = 0x7F1;
            static constexpr std::uintptr_t bIsBoosting = 0x7F2;
            static constexpr std::uintptr_t bIsSupersonic = 0x7F3;
            static constexpr std::uintptr_t bIsPreview = 0x7F4;
            static constexpr std::uintptr_t bIsWheelCambered = 0x7F5;
            static constexpr std::uintptr_t bShouldWheelSpinForPreview = 0x7F6;
            static constexpr std::uintptr_t bShouldBodyRumbleForPreview = 0x7F7;
            static constexpr std::uintptr_t bShouldSimulateSteeringForPreview = 0x7F8;
            static constexpr std::uintptr_t bShouldSimulateDecelerationForPreview = 0x7F9;
            static constexpr std::uintptr_t FakeWheelSteeringAngle = 0x7FC;
            static constexpr std::uintptr_t FakeWheelSpinAngle = 0x800;
            static constexpr std::uintptr_t bUsesAbsoluteWheelSpin = 0x804;
            static constexpr std::uintptr_t PreviewSettings = 0x808;
            static constexpr std::uintptr_t PreviewWheelSpin = 0x850;
            static constexpr std::uintptr_t PreviewSteeringRotationAngle = 0x854;
            static constexpr std::uintptr_t PreviewVehicleVelocity = 0x858;
            static constexpr std::uintptr_t bCanEnterTransition_IdleToBoostStart = 0x870;
            static constexpr std::uintptr_t bCanEnterTransition_BoostStartToBoostLoop = 0x871;
            static constexpr std::uintptr_t bCanEnterTransition_BoostLoopToBoostEnd = 0x872;
            static constexpr std::uintptr_t bCanEnterTransition_BoostEndToIdle = 0x873;
            static constexpr std::uintptr_t BoostStartToBoostLoopRelevancyData = 0x874;
            static constexpr std::uintptr_t BoostEndToIdleRelevancyData = 0x888;
            static constexpr std::uintptr_t BoostStartToBoostLoopRemainingTimeThreshold = 0x89C;
            static constexpr std::uintptr_t BoostEndToIdleRemainingTimeThreshold = 0x8A0;
            static constexpr std::uintptr_t bCanEnterTransition_IdleToSupersonicStart = 0x8A4;
            static constexpr std::uintptr_t bCanEnterTransition_SupersonicStartToSupersonicLoop = 0x8A5;
            static constexpr std::uintptr_t bCanEnterTransition_SupersonicLoopToSupersonicEnd = 0x8A6;
            static constexpr std::uintptr_t bCanEnterTransition_SupersonicEndToIdle = 0x8A7;
            static constexpr std::uintptr_t SupersonicStartToSupersonicLoopRelevancyData = 0x8A8;
            static constexpr std::uintptr_t SupersonicEndToIdleRelevancyData = 0x8BC;
            static constexpr std::uintptr_t SupersonicStartToSupersonicLoopRemainingTimeThreshold = 0x8D0;
            static constexpr std::uintptr_t SupersonicEndToIdleRemainingTimeThreshold = 0x8D4;
            static constexpr std::uintptr_t CachedCosmeticsComponent = 0x8D8;
        };

        inline static constexpr std::array<PropertyInfo, 46> Properties{{
            {"ForwardSpeedPercent", 0x7C0, "FloatProperty"},
            {"bIsTouchingGround", 0x7C4, "BoolProperty"},
            {"DistanceToGround", 0x7C8, "FloatProperty"},
            {"VehicleVelocity", 0x7D0, "StructProperty"},
            {"bDriftBoostActive", 0x7E8, "BoolProperty"},
            {"bUnderthrustActive", 0x7E9, "BoolProperty"},
            {"bDriftActive", 0x7EA, "BoolProperty"},
            {"bKickflipActive", 0x7EB, "BoolProperty"},
            {"bJumpActive", 0x7EC, "BoolProperty"},
            {"bTurboActive", 0x7ED, "BoolProperty"},
            {"bStartlineBoostActive", 0x7EE, "BoolProperty"},
            {"bDraftingActive", 0x7EF, "BoolProperty"},
            {"bWorldBonusSpeedApplied", 0x7F0, "BoolProperty"},
            {"bHasTireMod", 0x7F1, "BoolProperty"},
            {"bIsBoosting", 0x7F2, "BoolProperty"},
            {"bIsSupersonic", 0x7F3, "BoolProperty"},
            {"bIsPreview", 0x7F4, "BoolProperty"},
            {"bIsWheelCambered", 0x7F5, "BoolProperty"},
            {"bShouldWheelSpinForPreview", 0x7F6, "BoolProperty"},
            {"bShouldBodyRumbleForPreview", 0x7F7, "BoolProperty"},
            {"bShouldSimulateSteeringForPreview", 0x7F8, "BoolProperty"},
            {"bShouldSimulateDecelerationForPreview", 0x7F9, "BoolProperty"},
            {"FakeWheelSteeringAngle", 0x7FC, "FloatProperty"},
            {"FakeWheelSpinAngle", 0x800, "FloatProperty"},
            {"bUsesAbsoluteWheelSpin", 0x804, "BoolProperty"},
            {"PreviewSettings", 0x808, "StructProperty"},
            {"PreviewWheelSpin", 0x850, "FloatProperty"},
            {"PreviewSteeringRotationAngle", 0x854, "FloatProperty"},
            {"PreviewVehicleVelocity", 0x858, "StructProperty"},
            {"bCanEnterTransition_IdleToBoostStart", 0x870, "BoolProperty"},
            {"bCanEnterTransition_BoostStartToBoostLoop", 0x871, "BoolProperty"},
            {"bCanEnterTransition_BoostLoopToBoostEnd", 0x872, "BoolProperty"},
            {"bCanEnterTransition_BoostEndToIdle", 0x873, "BoolProperty"},
            {"BoostStartToBoostLoopRelevancyData", 0x874, "StructProperty"},
            {"BoostEndToIdleRelevancyData", 0x888, "StructProperty"},
            {"BoostStartToBoostLoopRemainingTimeThreshold", 0x89C, "FloatProperty"},
            {"BoostEndToIdleRemainingTimeThreshold", 0x8A0, "FloatProperty"},
            {"bCanEnterTransition_IdleToSupersonicStart", 0x8A4, "BoolProperty"},
            {"bCanEnterTransition_SupersonicStartToSupersonicLoop", 0x8A5, "BoolProperty"},
            {"bCanEnterTransition_SupersonicLoopToSupersonicEnd", 0x8A6, "BoolProperty"},
            {"bCanEnterTransition_SupersonicEndToIdle", 0x8A7, "BoolProperty"},
            {"SupersonicStartToSupersonicLoopRelevancyData", 0x8A8, "StructProperty"},
            {"SupersonicEndToIdleRelevancyData", 0x8BC, "StructProperty"},
            {"SupersonicStartToSupersonicLoopRemainingTimeThreshold", 0x8D0, "FloatProperty"},
            {"SupersonicEndToIdleRemainingTimeThreshold", 0x8D4, "FloatProperty"},
            {"CachedCosmeticsComponent", 0x8D8, "ObjectProperty"},
        }};
    };

    struct VehicleCosmeticsAssembledMeshUserComponent
    {
        static constexpr std::string_view Name = "VehicleCosmeticsAssembledMeshUserComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssembledMeshUserComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TempCustomizableObjectInstance = 0x190;
            static constexpr std::uintptr_t OwningCosmeticLoadoutData = 0x1A8;
            static constexpr std::uintptr_t DefaultLoadoutInfos = 0x230;
            static constexpr std::uintptr_t CamberWheelRules = 0x240;
            static constexpr std::uintptr_t GroundTracingRules = 0x250;
            static constexpr std::uintptr_t bVehicleCosmeticsEnabled = 0x261;
            static constexpr std::uintptr_t SpawnedCosmeticActors_Body = 0x268;
            static constexpr std::uintptr_t SpawnedCosmeticActors_Macaron = 0x288;
            static constexpr std::uintptr_t SpawnedCosmeticActors_Zest = 0x2A8;
            static constexpr std::uintptr_t SpawnedCosmeticActors_Booster = 0x2C8;
            static constexpr std::uintptr_t SpawnedCosmeticActors_DriftTrail = 0x2E8;
            static constexpr std::uintptr_t SpawnedCosmeticActors_Skin = 0x308;
            static constexpr std::uintptr_t HasBeenCustomizedMap = 0x318;
            static constexpr std::uintptr_t MeshPartDataMap = 0x328;
            static constexpr std::uintptr_t TirePopReplacementInfos = 0xBB8;
            static constexpr std::uintptr_t LoadoutSlotTagQuery = 0xBC8;
            static constexpr std::uintptr_t DownloadingOverlayMaterial = 0xDD0;
            static constexpr std::uintptr_t OnCosmeticActorSpawned = 0xDD8;
            static constexpr std::uintptr_t CustomizationEnabled = 0xDE8;
            static constexpr std::uintptr_t CosmeticsLoadoutFXLoopTime = 0xE10;
            static constexpr std::uintptr_t OnEngineAudioUpdated = 0xE58;
            static constexpr std::uintptr_t OnVehicleCosmeticsFailed = 0xE68;
            static constexpr std::uintptr_t VehicleCosmeticsStartFXDelegate = 0xEA8;
            static constexpr std::uintptr_t VehicleCosmeticsFinishFXDelegate = 0xEB8;
        };

        inline static constexpr std::array<PropertyInfo, 24> Properties{{
            {"TempCustomizableObjectInstance", 0x190, "ObjectProperty"},
            {"OwningCosmeticLoadoutData", 0x1A8, "StructProperty"},
            {"DefaultLoadoutInfos", 0x230, "ArrayProperty"},
            {"CamberWheelRules", 0x240, "StructProperty"},
            {"GroundTracingRules", 0x250, "StructProperty"},
            {"bVehicleCosmeticsEnabled", 0x261, "BoolProperty"},
            {"SpawnedCosmeticActors_Body", 0x268, "ArrayProperty"},
            {"SpawnedCosmeticActors_Macaron", 0x288, "ArrayProperty"},
            {"SpawnedCosmeticActors_Zest", 0x2A8, "ArrayProperty"},
            {"SpawnedCosmeticActors_Booster", 0x2C8, "ArrayProperty"},
            {"SpawnedCosmeticActors_DriftTrail", 0x2E8, "ArrayProperty"},
            {"SpawnedCosmeticActors_Skin", 0x308, "ArrayProperty"},
            {"HasBeenCustomizedMap", 0x318, "MapProperty"},
            {"MeshPartDataMap", 0x328, "MapProperty"},
            {"TirePopReplacementInfos", 0xBB8, "ArrayProperty"},
            {"LoadoutSlotTagQuery", 0xBC8, "StructProperty"},
            {"DownloadingOverlayMaterial", 0xDD0, "ObjectProperty"},
            {"OnCosmeticActorSpawned", 0xDD8, "MulticastInlineDelegateProperty"},
            {"CustomizationEnabled", 0xDE8, "StructProperty"},
            {"CosmeticsLoadoutFXLoopTime", 0xE10, "StructProperty"},
            {"OnEngineAudioUpdated", 0xE58, "MulticastInlineDelegateProperty"},
            {"OnVehicleCosmeticsFailed", 0xE68, "MulticastInlineDelegateProperty"},
            {"VehicleCosmeticsStartFXDelegate", 0xEA8, "MulticastInlineDelegateProperty"},
            {"VehicleCosmeticsFinishFXDelegate", 0xEB8, "MulticastInlineDelegateProperty"},
        }};
    };

    struct VehicleCosmeticsBlueprintLibrary
    {
        static constexpr std::string_view Name = "VehicleCosmeticsBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VehicleCosmeticsCheatManager
    {
        static constexpr std::string_view Name = "VehicleCosmeticsCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VehicleCosmeticsColorMappingData
    {
        static constexpr std::string_view Name = "VehicleCosmeticsColorMappingData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorMappingDataArray = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ColorMappingDataArray", 0x28, "ArrayProperty"},
        }};
    };

    struct VehicleCosmeticsEditorPreviewSettings
    {
        static constexpr std::string_view Name = "VehicleCosmeticsEditorPreviewSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewSlotInfos = 0x28;
            static constexpr std::uintptr_t FortItemVehiclePreviewClass = 0x38;
            static constexpr std::uintptr_t FortVehicleCosmeticsLevelPreviewClass = 0x58;
            static constexpr std::uintptr_t VehicleCosmeticsPreviewClass = 0x78;
            static constexpr std::uintptr_t PaintTable = 0x98;
            static constexpr std::uintptr_t BodySchemaTag = 0xB8;
            static constexpr std::uintptr_t TierVariantPropertyTag = 0xBC;
            static constexpr std::uintptr_t WheelSchemaTag = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PreviewSlotInfos", 0x28, "ArrayProperty"},
            {"FortItemVehiclePreviewClass", 0x38, "SoftClassProperty"},
            {"FortVehicleCosmeticsLevelPreviewClass", 0x58, "SoftClassProperty"},
            {"VehicleCosmeticsPreviewClass", 0x78, "SoftClassProperty"},
            {"PaintTable", 0x98, "SoftObjectProperty"},
            {"BodySchemaTag", 0xB8, "StructProperty"},
            {"TierVariantPropertyTag", 0xBC, "StructProperty"},
            {"WheelSchemaTag", 0xC0, "StructProperty"},
        }};
    };

    struct VehicleCosmeticsInstanceCacheSubsystem
    {
        static constexpr std::string_view Name = "VehicleCosmeticsInstanceCacheSubsystem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
            static constexpr std::uintptr_t CachedInstances = 0x38;
            static constexpr std::uintptr_t InFlightBuilds = 0x48;
            static constexpr std::uintptr_t CachedCustomizableObject = 0x68;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CachedInstances", 0x38, "MapProperty"},
            {"InFlightBuilds", 0x48, "SetProperty"},
            {"CachedCustomizableObject", 0x68, "ObjectProperty"},
        }};
    };

    struct VehicleCosmeticsInterface
    {
        static constexpr std::string_view Name = "VehicleCosmeticsInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct VehicleCosmeticsItemDefinition
    {
        static constexpr std::string_view Name = "VehicleCosmeticsItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssembledMeshSchema";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticAttachments = 0x188;
            static constexpr std::uintptr_t PaintedDataTableParameterName = 0x198;
            static constexpr std::uintptr_t AdditionalVariantInfos = 0x1A0;
            static constexpr std::uintptr_t CosmeticAttachmentQueryInfos = 0x1B0;
            static constexpr std::uintptr_t AnimInfos = 0x1C0;
            static constexpr std::uintptr_t CheatNames = 0x1D0;
            static constexpr std::uintptr_t AdditionalParametersInfos = 0x1E0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CosmeticAttachments", 0x188, "ArrayProperty"},
            {"PaintedDataTableParameterName", 0x198, "NameProperty"},
            {"AdditionalVariantInfos", 0x1A0, "MapProperty"},
            {"CosmeticAttachmentQueryInfos", 0x1B0, "ArrayProperty"},
            {"AnimInfos", 0x1C0, "ArrayProperty"},
            {"CheatNames", 0x1D0, "ArrayProperty"},
            {"AdditionalParametersInfos", 0x1E0, "ArrayProperty"},
        }};
    };

    struct VehicleCosmeticsItemDefinition_Body
    {
        static constexpr std::string_view Name = "VehicleCosmeticsItemDefinition_Body";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleCosmeticsItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t BodyGroup = 0x1F8;
            static constexpr std::uintptr_t CustomizableObjectGroup = 0x200;
            static constexpr std::uintptr_t SkeletalMeshInfo = 0x208;
            static constexpr std::uintptr_t SkinMaterialParameterName = 0x230;
            static constexpr std::uintptr_t NormalTextureInfo = 0x238;
            static constexpr std::uintptr_t SkinDataTableParameterName = 0x260;
            static constexpr std::uintptr_t BodyColorParameterName = 0x264;
            static constexpr std::uintptr_t SkinColorParameterName = 0x268;
            static constexpr std::uintptr_t GlowColorParameterName = 0x26C;
            static constexpr std::uintptr_t AdditionalColorMappingData = 0x270;
            static constexpr std::uintptr_t PhysicsQueryInfos = 0x290;
            static constexpr std::uintptr_t WheelAttachSkeletonReference = 0x2A0;
            static constexpr std::uintptr_t WheelAttachInfos = 0x2C0;
            static constexpr std::uintptr_t MacaronAttachInfos = 0x2D0;
            static constexpr std::uintptr_t BoosterAttachSkeletonReference = 0x2E0;
            static constexpr std::uintptr_t BoosterAttachInfos = 0x300;
            static constexpr std::uintptr_t ThrusterAttachInfo = 0x310;
            static constexpr std::uintptr_t HeadlightEffectInfo = 0x3D0;
            static constexpr std::uintptr_t ExhaustEffectInfo = 0x3E8;
            static constexpr std::uintptr_t DefaultWheelItemDef = 0x3F0;
            static constexpr std::uintptr_t DefaultSkinRowName = 0x410;
            static constexpr std::uintptr_t DefaultSkinItemDef = 0x418;
            static constexpr std::uintptr_t DefaultSkinMaterial = 0x438;
            static constexpr std::uintptr_t AudioData = 0x458;
            static constexpr std::uintptr_t AnimSetOverride = 0x478;
            static constexpr std::uintptr_t BodyTypeTagQuery = 0x498;
            static constexpr std::uintptr_t TagsToAdd = 0x4E0;
            static constexpr std::uintptr_t TagsToRemove = 0x500;
            static constexpr std::uintptr_t WindowQueryInfos = 0x520;
            static constexpr std::uintptr_t BodyAttachmentQueryInfos = 0x530;
            static constexpr std::uintptr_t ReactiveQueryInfos = 0x540;
        };

        inline static constexpr std::array<PropertyInfo, 31> Properties{{
            {"BodyGroup", 0x1F8, "StructProperty"},
            {"CustomizableObjectGroup", 0x200, "StructProperty"},
            {"SkeletalMeshInfo", 0x208, "StructProperty"},
            {"SkinMaterialParameterName", 0x230, "NameProperty"},
            {"NormalTextureInfo", 0x238, "StructProperty"},
            {"SkinDataTableParameterName", 0x260, "NameProperty"},
            {"BodyColorParameterName", 0x264, "NameProperty"},
            {"SkinColorParameterName", 0x268, "NameProperty"},
            {"GlowColorParameterName", 0x26C, "NameProperty"},
            {"AdditionalColorMappingData", 0x270, "SoftObjectProperty"},
            {"PhysicsQueryInfos", 0x290, "ArrayProperty"},
            {"WheelAttachSkeletonReference", 0x2A0, "SoftObjectProperty"},
            {"WheelAttachInfos", 0x2C0, "ArrayProperty"},
            {"MacaronAttachInfos", 0x2D0, "ArrayProperty"},
            {"BoosterAttachSkeletonReference", 0x2E0, "SoftObjectProperty"},
            {"BoosterAttachInfos", 0x300, "ArrayProperty"},
            {"ThrusterAttachInfo", 0x310, "StructProperty"},
            {"HeadlightEffectInfo", 0x3D0, "StructProperty"},
            {"ExhaustEffectInfo", 0x3E8, "StructProperty"},
            {"DefaultWheelItemDef", 0x3F0, "SoftObjectProperty"},
            {"DefaultSkinRowName", 0x410, "NameProperty"},
            {"DefaultSkinItemDef", 0x418, "SoftObjectProperty"},
            {"DefaultSkinMaterial", 0x438, "SoftObjectProperty"},
            {"AudioData", 0x458, "SoftObjectProperty"},
            {"AnimSetOverride", 0x478, "SoftObjectProperty"},
            {"BodyTypeTagQuery", 0x498, "StructProperty"},
            {"TagsToAdd", 0x4E0, "StructProperty"},
            {"TagsToRemove", 0x500, "StructProperty"},
            {"WindowQueryInfos", 0x520, "ArrayProperty"},
            {"BodyAttachmentQueryInfos", 0x530, "ArrayProperty"},
            {"ReactiveQueryInfos", 0x540, "ArrayProperty"},
        }};
    };

    struct VehicleCosmeticsItemDefinition_Booster
    {
        static constexpr std::string_view Name = "VehicleCosmeticsItemDefinition_Booster";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleCosmeticsItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticAttachments = 0x188;
            static constexpr std::uintptr_t PaintedDataTableParameterName = 0x198;
            static constexpr std::uintptr_t AdditionalVariantInfos = 0x1A0;
            static constexpr std::uintptr_t CosmeticAttachmentQueryInfos = 0x1B0;
            static constexpr std::uintptr_t AnimInfos = 0x1C0;
            static constexpr std::uintptr_t CheatNames = 0x1D0;
            static constexpr std::uintptr_t AdditionalParametersInfos = 0x1E0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CosmeticAttachments", 0x188, "ArrayProperty"},
            {"PaintedDataTableParameterName", 0x198, "NameProperty"},
            {"AdditionalVariantInfos", 0x1A0, "MapProperty"},
            {"CosmeticAttachmentQueryInfos", 0x1B0, "ArrayProperty"},
            {"AnimInfos", 0x1C0, "ArrayProperty"},
            {"CheatNames", 0x1D0, "ArrayProperty"},
            {"AdditionalParametersInfos", 0x1E0, "ArrayProperty"},
        }};
    };

    struct VehicleCosmeticsItemDefinition_DriftTrail
    {
        static constexpr std::string_view Name = "VehicleCosmeticsItemDefinition_DriftTrail";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleCosmeticsItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t CosmeticAttachments = 0x188;
            static constexpr std::uintptr_t PaintedDataTableParameterName = 0x198;
            static constexpr std::uintptr_t AdditionalVariantInfos = 0x1A0;
            static constexpr std::uintptr_t CosmeticAttachmentQueryInfos = 0x1B0;
            static constexpr std::uintptr_t AnimInfos = 0x1C0;
            static constexpr std::uintptr_t CheatNames = 0x1D0;
            static constexpr std::uintptr_t AdditionalParametersInfos = 0x1E0;
        };

        inline static constexpr std::array<PropertyInfo, 7> Properties{{
            {"CosmeticAttachments", 0x188, "ArrayProperty"},
            {"PaintedDataTableParameterName", 0x198, "NameProperty"},
            {"AdditionalVariantInfos", 0x1A0, "MapProperty"},
            {"CosmeticAttachmentQueryInfos", 0x1B0, "ArrayProperty"},
            {"AnimInfos", 0x1C0, "ArrayProperty"},
            {"CheatNames", 0x1D0, "ArrayProperty"},
            {"AdditionalParametersInfos", 0x1E0, "ArrayProperty"},
        }};
    };

    struct VehicleCosmeticsItemDefinition_EngineAudio
    {
        static constexpr std::string_view Name = "VehicleCosmeticsItemDefinition_EngineAudio";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleCosmeticsItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t DataChooserTable = 0x1F0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DataChooserTable", 0x1F0, "SoftObjectProperty"},
        }};
    };

    struct VehicleCosmeticsItemDefinition_Macaron
    {
        static constexpr std::string_view Name = "VehicleCosmeticsItemDefinition_Macaron";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleCosmeticsItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectGroup = 0x1F0;
            static constexpr std::uintptr_t SkeletalMeshInfo = 0x1F8;
            static constexpr std::uintptr_t MaterialInfos = 0x220;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ObjectGroup", 0x1F0, "StructProperty"},
            {"SkeletalMeshInfo", 0x1F8, "StructProperty"},
            {"MaterialInfos", 0x220, "ArrayProperty"},
        }};
    };

    struct VehicleCosmeticsItemDefinition_Skin
    {
        static constexpr std::string_view Name = "VehicleCosmeticsItemDefinition_Skin";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleCosmeticsItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t bLockBodyColor = 0x1F0;
            static constexpr std::uintptr_t bLockGlowColor = 0x1F1;
            static constexpr std::uintptr_t LockedBodyColor = 0x1F4;
            static constexpr std::uintptr_t LockedSkinColor = 0x204;
            static constexpr std::uintptr_t LockedGlowColor = 0x214;
            static constexpr std::uintptr_t SkinRowName = 0x224;
            static constexpr std::uintptr_t SkinMaterial = 0x228;
            static constexpr std::uintptr_t PaintedEnumParameterName = 0x248;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"bLockBodyColor", 0x1F0, "BoolProperty"},
            {"bLockGlowColor", 0x1F1, "BoolProperty"},
            {"LockedBodyColor", 0x1F4, "StructProperty"},
            {"LockedSkinColor", 0x204, "StructProperty"},
            {"LockedGlowColor", 0x214, "StructProperty"},
            {"SkinRowName", 0x224, "NameProperty"},
            {"SkinMaterial", 0x228, "SoftObjectProperty"},
            {"PaintedEnumParameterName", 0x248, "NameProperty"},
        }};
    };

    struct VehicleCosmeticsItemDefinition_Wheel
    {
        static constexpr std::string_view Name = "VehicleCosmeticsItemDefinition_Wheel";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleCosmeticsItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t WheelGroup = 0x1F8;
            static constexpr std::uintptr_t CustomizableObjectGroup = 0x200;
            static constexpr std::uintptr_t AdditionalBodyCosmeticAttachments = 0x208;
            static constexpr std::uintptr_t WheelSkeletalMeshInfo = 0x218;
            static constexpr std::uintptr_t RearWheelSkeletalMeshInfo = 0x240;
            static constexpr std::uintptr_t AdditionalWheelGroups = 0x268;
            static constexpr std::uintptr_t WheelTirePoppedInfo = 0x278;
            static constexpr std::uintptr_t WheelSetupInfos = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"WheelGroup", 0x1F8, "StructProperty"},
            {"CustomizableObjectGroup", 0x200, "StructProperty"},
            {"AdditionalBodyCosmeticAttachments", 0x208, "ArrayProperty"},
            {"WheelSkeletalMeshInfo", 0x218, "StructProperty"},
            {"RearWheelSkeletalMeshInfo", 0x240, "StructProperty"},
            {"AdditionalWheelGroups", 0x268, "ArrayProperty"},
            {"WheelTirePoppedInfo", 0x278, "StructProperty"},
            {"WheelSetupInfos", 0x288, "ArrayProperty"},
        }};
    };

    struct VehicleCosmeticsItemDefinition_Zest
    {
        static constexpr std::string_view Name = "VehicleCosmeticsItemDefinition_Zest";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleCosmeticsItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t ObjectGroup = 0x1F0;
            static constexpr std::uintptr_t bIsOnePart = 0x1F8;
            static constexpr std::uintptr_t BaseSkeletalMeshInfo = 0x200;
            static constexpr std::uintptr_t BaseMaterialInfos = 0x228;
            static constexpr std::uintptr_t TopSkeletalMeshInfo = 0x238;
            static constexpr std::uintptr_t TopMaterialInfos = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ObjectGroup", 0x1F0, "StructProperty"},
            {"bIsOnePart", 0x1F8, "BoolProperty"},
            {"BaseSkeletalMeshInfo", 0x200, "StructProperty"},
            {"BaseMaterialInfos", 0x228, "ArrayProperty"},
            {"TopSkeletalMeshInfo", 0x238, "StructProperty"},
            {"TopMaterialInfos", 0x260, "ArrayProperty"},
        }};
    };

    struct VehicleCosmeticsMacaronAnimInstance
    {
        static constexpr std::string_view Name = "VehicleCosmeticsMacaronAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleCosmeticsAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t ForwardSpeedPercent = 0x7C0;
            static constexpr std::uintptr_t bIsTouchingGround = 0x7C4;
            static constexpr std::uintptr_t DistanceToGround = 0x7C8;
            static constexpr std::uintptr_t VehicleVelocity = 0x7D0;
            static constexpr std::uintptr_t bDriftBoostActive = 0x7E8;
            static constexpr std::uintptr_t bUnderthrustActive = 0x7E9;
            static constexpr std::uintptr_t bDriftActive = 0x7EA;
            static constexpr std::uintptr_t bKickflipActive = 0x7EB;
            static constexpr std::uintptr_t bJumpActive = 0x7EC;
            static constexpr std::uintptr_t bTurboActive = 0x7ED;
            static constexpr std::uintptr_t bStartlineBoostActive = 0x7EE;
            static constexpr std::uintptr_t bDraftingActive = 0x7EF;
            static constexpr std::uintptr_t bWorldBonusSpeedApplied = 0x7F0;
            static constexpr std::uintptr_t bHasTireMod = 0x7F1;
            static constexpr std::uintptr_t bIsBoosting = 0x7F2;
            static constexpr std::uintptr_t bIsSupersonic = 0x7F3;
            static constexpr std::uintptr_t bIsPreview = 0x7F4;
            static constexpr std::uintptr_t bIsWheelCambered = 0x7F5;
            static constexpr std::uintptr_t bShouldWheelSpinForPreview = 0x7F6;
            static constexpr std::uintptr_t bShouldBodyRumbleForPreview = 0x7F7;
            static constexpr std::uintptr_t bShouldSimulateSteeringForPreview = 0x7F8;
            static constexpr std::uintptr_t bShouldSimulateDecelerationForPreview = 0x7F9;
            static constexpr std::uintptr_t FakeWheelSteeringAngle = 0x7FC;
            static constexpr std::uintptr_t FakeWheelSpinAngle = 0x800;
            static constexpr std::uintptr_t bUsesAbsoluteWheelSpin = 0x804;
            static constexpr std::uintptr_t PreviewSettings = 0x808;
            static constexpr std::uintptr_t PreviewWheelSpin = 0x850;
            static constexpr std::uintptr_t PreviewSteeringRotationAngle = 0x854;
            static constexpr std::uintptr_t PreviewVehicleVelocity = 0x858;
            static constexpr std::uintptr_t bCanEnterTransition_IdleToBoostStart = 0x870;
            static constexpr std::uintptr_t bCanEnterTransition_BoostStartToBoostLoop = 0x871;
            static constexpr std::uintptr_t bCanEnterTransition_BoostLoopToBoostEnd = 0x872;
            static constexpr std::uintptr_t bCanEnterTransition_BoostEndToIdle = 0x873;
            static constexpr std::uintptr_t BoostStartToBoostLoopRelevancyData = 0x874;
            static constexpr std::uintptr_t BoostEndToIdleRelevancyData = 0x888;
            static constexpr std::uintptr_t BoostStartToBoostLoopRemainingTimeThreshold = 0x89C;
            static constexpr std::uintptr_t BoostEndToIdleRemainingTimeThreshold = 0x8A0;
            static constexpr std::uintptr_t bCanEnterTransition_IdleToSupersonicStart = 0x8A4;
            static constexpr std::uintptr_t bCanEnterTransition_SupersonicStartToSupersonicLoop = 0x8A5;
            static constexpr std::uintptr_t bCanEnterTransition_SupersonicLoopToSupersonicEnd = 0x8A6;
            static constexpr std::uintptr_t bCanEnterTransition_SupersonicEndToIdle = 0x8A7;
            static constexpr std::uintptr_t SupersonicStartToSupersonicLoopRelevancyData = 0x8A8;
            static constexpr std::uintptr_t SupersonicEndToIdleRelevancyData = 0x8BC;
            static constexpr std::uintptr_t SupersonicStartToSupersonicLoopRemainingTimeThreshold = 0x8D0;
            static constexpr std::uintptr_t SupersonicEndToIdleRemainingTimeThreshold = 0x8D4;
            static constexpr std::uintptr_t CachedCosmeticsComponent = 0x8D8;
        };

        inline static constexpr std::array<PropertyInfo, 46> Properties{{
            {"ForwardSpeedPercent", 0x7C0, "FloatProperty"},
            {"bIsTouchingGround", 0x7C4, "BoolProperty"},
            {"DistanceToGround", 0x7C8, "FloatProperty"},
            {"VehicleVelocity", 0x7D0, "StructProperty"},
            {"bDriftBoostActive", 0x7E8, "BoolProperty"},
            {"bUnderthrustActive", 0x7E9, "BoolProperty"},
            {"bDriftActive", 0x7EA, "BoolProperty"},
            {"bKickflipActive", 0x7EB, "BoolProperty"},
            {"bJumpActive", 0x7EC, "BoolProperty"},
            {"bTurboActive", 0x7ED, "BoolProperty"},
            {"bStartlineBoostActive", 0x7EE, "BoolProperty"},
            {"bDraftingActive", 0x7EF, "BoolProperty"},
            {"bWorldBonusSpeedApplied", 0x7F0, "BoolProperty"},
            {"bHasTireMod", 0x7F1, "BoolProperty"},
            {"bIsBoosting", 0x7F2, "BoolProperty"},
            {"bIsSupersonic", 0x7F3, "BoolProperty"},
            {"bIsPreview", 0x7F4, "BoolProperty"},
            {"bIsWheelCambered", 0x7F5, "BoolProperty"},
            {"bShouldWheelSpinForPreview", 0x7F6, "BoolProperty"},
            {"bShouldBodyRumbleForPreview", 0x7F7, "BoolProperty"},
            {"bShouldSimulateSteeringForPreview", 0x7F8, "BoolProperty"},
            {"bShouldSimulateDecelerationForPreview", 0x7F9, "BoolProperty"},
            {"FakeWheelSteeringAngle", 0x7FC, "FloatProperty"},
            {"FakeWheelSpinAngle", 0x800, "FloatProperty"},
            {"bUsesAbsoluteWheelSpin", 0x804, "BoolProperty"},
            {"PreviewSettings", 0x808, "StructProperty"},
            {"PreviewWheelSpin", 0x850, "FloatProperty"},
            {"PreviewSteeringRotationAngle", 0x854, "FloatProperty"},
            {"PreviewVehicleVelocity", 0x858, "StructProperty"},
            {"bCanEnterTransition_IdleToBoostStart", 0x870, "BoolProperty"},
            {"bCanEnterTransition_BoostStartToBoostLoop", 0x871, "BoolProperty"},
            {"bCanEnterTransition_BoostLoopToBoostEnd", 0x872, "BoolProperty"},
            {"bCanEnterTransition_BoostEndToIdle", 0x873, "BoolProperty"},
            {"BoostStartToBoostLoopRelevancyData", 0x874, "StructProperty"},
            {"BoostEndToIdleRelevancyData", 0x888, "StructProperty"},
            {"BoostStartToBoostLoopRemainingTimeThreshold", 0x89C, "FloatProperty"},
            {"BoostEndToIdleRemainingTimeThreshold", 0x8A0, "FloatProperty"},
            {"bCanEnterTransition_IdleToSupersonicStart", 0x8A4, "BoolProperty"},
            {"bCanEnterTransition_SupersonicStartToSupersonicLoop", 0x8A5, "BoolProperty"},
            {"bCanEnterTransition_SupersonicLoopToSupersonicEnd", 0x8A6, "BoolProperty"},
            {"bCanEnterTransition_SupersonicEndToIdle", 0x8A7, "BoolProperty"},
            {"SupersonicStartToSupersonicLoopRelevancyData", 0x8A8, "StructProperty"},
            {"SupersonicEndToIdleRelevancyData", 0x8BC, "StructProperty"},
            {"SupersonicStartToSupersonicLoopRemainingTimeThreshold", 0x8D0, "FloatProperty"},
            {"SupersonicEndToIdleRemainingTimeThreshold", 0x8D4, "FloatProperty"},
            {"CachedCosmeticsComponent", 0x8D8, "ObjectProperty"},
        }};
    };

    struct VehicleCosmeticsPreWarmPlayerStateComponent
    {
        static constexpr std::string_view Name = "VehicleCosmeticsPreWarmPlayerStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t VehicleCosmeticLoadoutData = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"VehicleCosmeticLoadoutData", 0xC0, "StructProperty"},
        }};
    };

    struct VehicleCosmeticsPreviewConfigs
    {
        static constexpr std::string_view Name = "VehicleCosmeticsPreviewConfigs";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimaryDataAsset";
        struct Offsets
        {
            static constexpr std::uintptr_t VehiclePreviewActorClass = 0x28;
            static constexpr std::uintptr_t VehiclePreviewActorOverrides = 0x48;
            static constexpr std::uintptr_t DefaultBoostPreviewActorClass = 0x58;
            static constexpr std::uintptr_t DefaultTrailPreviewActorClass = 0x78;
            static constexpr std::uintptr_t VehiclePreviewPrefabAssetClass = 0x98;
            static constexpr std::uintptr_t VehiclePreviewDefaultPreviewBody = 0xB8;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"VehiclePreviewActorClass", 0x28, "SoftClassProperty"},
            {"VehiclePreviewActorOverrides", 0x48, "ArrayProperty"},
            {"DefaultBoostPreviewActorClass", 0x58, "SoftClassProperty"},
            {"DefaultTrailPreviewActorClass", 0x78, "SoftClassProperty"},
            {"VehiclePreviewPrefabAssetClass", 0x98, "SoftClassProperty"},
            {"VehiclePreviewDefaultPreviewBody", 0xB8, "MapProperty"},
        }};
    };

    struct VehicleCosmeticsWheelAnimInstance
    {
        static constexpr std::string_view Name = "VehicleCosmeticsWheelAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleCosmeticsAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t SpinnerSpin = 0x8F0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SpinnerSpin", 0x8F0, "StructProperty"},
        }};
    };

    struct VehicleCosmeticsZestAnimInstance
    {
        static constexpr std::string_view Name = "VehicleCosmeticsZestAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "VehicleCosmeticsAnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t ForwardSpeedPercent = 0x7C0;
            static constexpr std::uintptr_t bIsTouchingGround = 0x7C4;
            static constexpr std::uintptr_t DistanceToGround = 0x7C8;
            static constexpr std::uintptr_t VehicleVelocity = 0x7D0;
            static constexpr std::uintptr_t bDriftBoostActive = 0x7E8;
            static constexpr std::uintptr_t bUnderthrustActive = 0x7E9;
            static constexpr std::uintptr_t bDriftActive = 0x7EA;
            static constexpr std::uintptr_t bKickflipActive = 0x7EB;
            static constexpr std::uintptr_t bJumpActive = 0x7EC;
            static constexpr std::uintptr_t bTurboActive = 0x7ED;
            static constexpr std::uintptr_t bStartlineBoostActive = 0x7EE;
            static constexpr std::uintptr_t bDraftingActive = 0x7EF;
            static constexpr std::uintptr_t bWorldBonusSpeedApplied = 0x7F0;
            static constexpr std::uintptr_t bHasTireMod = 0x7F1;
            static constexpr std::uintptr_t bIsBoosting = 0x7F2;
            static constexpr std::uintptr_t bIsSupersonic = 0x7F3;
            static constexpr std::uintptr_t bIsPreview = 0x7F4;
            static constexpr std::uintptr_t bIsWheelCambered = 0x7F5;
            static constexpr std::uintptr_t bShouldWheelSpinForPreview = 0x7F6;
            static constexpr std::uintptr_t bShouldBodyRumbleForPreview = 0x7F7;
            static constexpr std::uintptr_t bShouldSimulateSteeringForPreview = 0x7F8;
            static constexpr std::uintptr_t bShouldSimulateDecelerationForPreview = 0x7F9;
            static constexpr std::uintptr_t FakeWheelSteeringAngle = 0x7FC;
            static constexpr std::uintptr_t FakeWheelSpinAngle = 0x800;
            static constexpr std::uintptr_t bUsesAbsoluteWheelSpin = 0x804;
            static constexpr std::uintptr_t PreviewSettings = 0x808;
            static constexpr std::uintptr_t PreviewWheelSpin = 0x850;
            static constexpr std::uintptr_t PreviewSteeringRotationAngle = 0x854;
            static constexpr std::uintptr_t PreviewVehicleVelocity = 0x858;
            static constexpr std::uintptr_t bCanEnterTransition_IdleToBoostStart = 0x870;
            static constexpr std::uintptr_t bCanEnterTransition_BoostStartToBoostLoop = 0x871;
            static constexpr std::uintptr_t bCanEnterTransition_BoostLoopToBoostEnd = 0x872;
            static constexpr std::uintptr_t bCanEnterTransition_BoostEndToIdle = 0x873;
            static constexpr std::uintptr_t BoostStartToBoostLoopRelevancyData = 0x874;
            static constexpr std::uintptr_t BoostEndToIdleRelevancyData = 0x888;
            static constexpr std::uintptr_t BoostStartToBoostLoopRemainingTimeThreshold = 0x89C;
            static constexpr std::uintptr_t BoostEndToIdleRemainingTimeThreshold = 0x8A0;
            static constexpr std::uintptr_t bCanEnterTransition_IdleToSupersonicStart = 0x8A4;
            static constexpr std::uintptr_t bCanEnterTransition_SupersonicStartToSupersonicLoop = 0x8A5;
            static constexpr std::uintptr_t bCanEnterTransition_SupersonicLoopToSupersonicEnd = 0x8A6;
            static constexpr std::uintptr_t bCanEnterTransition_SupersonicEndToIdle = 0x8A7;
            static constexpr std::uintptr_t SupersonicStartToSupersonicLoopRelevancyData = 0x8A8;
            static constexpr std::uintptr_t SupersonicEndToIdleRelevancyData = 0x8BC;
            static constexpr std::uintptr_t SupersonicStartToSupersonicLoopRemainingTimeThreshold = 0x8D0;
            static constexpr std::uintptr_t SupersonicEndToIdleRemainingTimeThreshold = 0x8D4;
            static constexpr std::uintptr_t CachedCosmeticsComponent = 0x8D8;
        };

        inline static constexpr std::array<PropertyInfo, 46> Properties{{
            {"ForwardSpeedPercent", 0x7C0, "FloatProperty"},
            {"bIsTouchingGround", 0x7C4, "BoolProperty"},
            {"DistanceToGround", 0x7C8, "FloatProperty"},
            {"VehicleVelocity", 0x7D0, "StructProperty"},
            {"bDriftBoostActive", 0x7E8, "BoolProperty"},
            {"bUnderthrustActive", 0x7E9, "BoolProperty"},
            {"bDriftActive", 0x7EA, "BoolProperty"},
            {"bKickflipActive", 0x7EB, "BoolProperty"},
            {"bJumpActive", 0x7EC, "BoolProperty"},
            {"bTurboActive", 0x7ED, "BoolProperty"},
            {"bStartlineBoostActive", 0x7EE, "BoolProperty"},
            {"bDraftingActive", 0x7EF, "BoolProperty"},
            {"bWorldBonusSpeedApplied", 0x7F0, "BoolProperty"},
            {"bHasTireMod", 0x7F1, "BoolProperty"},
            {"bIsBoosting", 0x7F2, "BoolProperty"},
            {"bIsSupersonic", 0x7F3, "BoolProperty"},
            {"bIsPreview", 0x7F4, "BoolProperty"},
            {"bIsWheelCambered", 0x7F5, "BoolProperty"},
            {"bShouldWheelSpinForPreview", 0x7F6, "BoolProperty"},
            {"bShouldBodyRumbleForPreview", 0x7F7, "BoolProperty"},
            {"bShouldSimulateSteeringForPreview", 0x7F8, "BoolProperty"},
            {"bShouldSimulateDecelerationForPreview", 0x7F9, "BoolProperty"},
            {"FakeWheelSteeringAngle", 0x7FC, "FloatProperty"},
            {"FakeWheelSpinAngle", 0x800, "FloatProperty"},
            {"bUsesAbsoluteWheelSpin", 0x804, "BoolProperty"},
            {"PreviewSettings", 0x808, "StructProperty"},
            {"PreviewWheelSpin", 0x850, "FloatProperty"},
            {"PreviewSteeringRotationAngle", 0x854, "FloatProperty"},
            {"PreviewVehicleVelocity", 0x858, "StructProperty"},
            {"bCanEnterTransition_IdleToBoostStart", 0x870, "BoolProperty"},
            {"bCanEnterTransition_BoostStartToBoostLoop", 0x871, "BoolProperty"},
            {"bCanEnterTransition_BoostLoopToBoostEnd", 0x872, "BoolProperty"},
            {"bCanEnterTransition_BoostEndToIdle", 0x873, "BoolProperty"},
            {"BoostStartToBoostLoopRelevancyData", 0x874, "StructProperty"},
            {"BoostEndToIdleRelevancyData", 0x888, "StructProperty"},
            {"BoostStartToBoostLoopRemainingTimeThreshold", 0x89C, "FloatProperty"},
            {"BoostEndToIdleRemainingTimeThreshold", 0x8A0, "FloatProperty"},
            {"bCanEnterTransition_IdleToSupersonicStart", 0x8A4, "BoolProperty"},
            {"bCanEnterTransition_SupersonicStartToSupersonicLoop", 0x8A5, "BoolProperty"},
            {"bCanEnterTransition_SupersonicLoopToSupersonicEnd", 0x8A6, "BoolProperty"},
            {"bCanEnterTransition_SupersonicEndToIdle", 0x8A7, "BoolProperty"},
            {"SupersonicStartToSupersonicLoopRelevancyData", 0x8A8, "StructProperty"},
            {"SupersonicEndToIdleRelevancyData", 0x8BC, "StructProperty"},
            {"SupersonicStartToSupersonicLoopRemainingTimeThreshold", 0x8D0, "FloatProperty"},
            {"SupersonicEndToIdleRemainingTimeThreshold", 0x8D4, "FloatProperty"},
            {"CachedCosmeticsComponent", 0x8D8, "ObjectProperty"},
        }};
    };

}
