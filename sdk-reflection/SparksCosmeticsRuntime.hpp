#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SparksCosmeticsRuntime
{
    struct SparksCosmeticsCheatManager
    {
        static constexpr std::string_view Name = "SparksCosmeticsCheatManager";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ChildCheatManager";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct SparksInstrumentPreviewActor
    {
        static constexpr std::string_view Name = "SparksInstrumentPreviewActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemPreviewActor";
        struct Offsets
        {
            static constexpr std::uintptr_t ItemDef = 0x4B8;
            static constexpr std::uintptr_t WeaponActor = 0x4D8;
            static constexpr std::uintptr_t OnSettingsChangedDelegate = 0x4E0;
            static constexpr std::uintptr_t ActiveSetup = 0x4F0;
            static constexpr std::uintptr_t ActiveWeaponDefinition = 0x598;
            static constexpr std::uintptr_t LoadedWeaponDefinition = 0x5B8;
            static constexpr std::uintptr_t PendingAuxiliaryMesh = 0x5C0;
            static constexpr std::uintptr_t SeamlessLoadout = 0x5D8;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"ItemDef", 0x4B8, "SoftObjectProperty"},
            {"WeaponActor", 0x4D8, "ObjectProperty"},
            {"OnSettingsChangedDelegate", 0x4E0, "DelegateProperty"},
            {"ActiveSetup", 0x4F0, "StructProperty"},
            {"ActiveWeaponDefinition", 0x598, "SoftObjectProperty"},
            {"LoadedWeaponDefinition", 0x5B8, "ObjectProperty"},
            {"PendingAuxiliaryMesh", 0x5C0, "ObjectProperty"},
            {"SeamlessLoadout", 0x5D8, "StructProperty"},
        }};
    };

    struct SparksItemPreviewOffPawnActor
    {
        static constexpr std::string_view Name = "SparksItemPreviewOffPawnActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ItemPreviewOffPawnActor";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewActorComponent = 0x4C0;
            static constexpr std::uintptr_t ChildPreviewActor = 0x4C8;
            static constexpr std::uintptr_t PreviewStaticMeshComponent = 0x4D0;
            static constexpr std::uintptr_t PreviewSkelMeshComponent = 0x4D8;
            static constexpr std::uintptr_t DefaultPreviewActorClass = 0x4E0;
            static constexpr std::uintptr_t bAllowPivotLocationOffsetOnPreviewChildActor = 0x4E8;
            static constexpr std::uintptr_t LoadedItemPreviewAssets = 0x4F0;
            static constexpr std::uintptr_t GliderSpawnComponent = 0x500;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PreviewActorComponent", 0x4C0, "ObjectProperty"},
            {"ChildPreviewActor", 0x4C8, "ObjectProperty"},
            {"PreviewStaticMeshComponent", 0x4D0, "ObjectProperty"},
            {"PreviewSkelMeshComponent", 0x4D8, "ObjectProperty"},
            {"DefaultPreviewActorClass", 0x4E0, "ClassProperty"},
            {"bAllowPivotLocationOffsetOnPreviewChildActor", 0x4E8, "BoolProperty"},
            {"LoadedItemPreviewAssets", 0x4F0, "ArrayProperty"},
            {"GliderSpawnComponent", 0x500, "ObjectProperty"},
        }};
    };

    struct SparksItemPreviewOnPawnActor
    {
        static constexpr std::string_view Name = "SparksItemPreviewOnPawnActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ItemPreviewOnPawnActor";
        struct Offsets
        {
            static constexpr std::uintptr_t ZoomedInBodyCameraComponent = 0x5F0;
            static constexpr std::uintptr_t ZoomedOutTallBodyCameraComponent = 0x5F8;
            static constexpr std::uintptr_t ZoomedInTallBodyCameraComponent = 0x600;
            static constexpr std::uintptr_t ZoomedOutBackpackCameraComponent = 0x608;
            static constexpr std::uintptr_t ZoomedInBackpackCameraComponent = 0x610;
            static constexpr std::uintptr_t ZoomedOutSkydiveCameraComponent = 0x618;
            static constexpr std::uintptr_t ZoomedInSkydiveCameraComponent = 0x620;
            static constexpr std::uintptr_t ZoomedOutEmoteCameraComponent = 0x628;
            static constexpr std::uintptr_t ZoomedInEmoteCameraComponent = 0x630;
            static constexpr std::uintptr_t ZoomedOutEmoteHighCameraComponent = 0x638;
            static constexpr std::uintptr_t ZoomedInEmoteHighCameraComponent = 0x640;
            static constexpr std::uintptr_t ZoomedOutEmoticonCameraComponent = 0x648;
            static constexpr std::uintptr_t ZoomedInEmoticonCameraComponent = 0x650;
            static constexpr std::uintptr_t ZoomedOutPickaxeCameraComponent = 0x658;
            static constexpr std::uintptr_t ZoomedInPickaxeCameraComponent = 0x660;
            static constexpr std::uintptr_t ZoomedOutDualPickaxeCameraComponent = 0x668;
            static constexpr std::uintptr_t ZoomedInDualPickaxeCameraComponent = 0x670;
            static constexpr std::uintptr_t ZoomedOutDoubleWristPickaxeCameraComponent = 0x678;
            static constexpr std::uintptr_t ZoomedInDoubleWristPickaxeCameraComponent = 0x680;
            static constexpr std::uintptr_t ZoomedOutPersonalGliderCameraComponent = 0x688;
            static constexpr std::uintptr_t ZoomedInPersonalGliderCameraComponent = 0x690;
            static constexpr std::uintptr_t ZoomedOutCharacterCustomizerCameraComponent = 0x698;
            static constexpr std::uintptr_t ZoomedInCharacterCustomizerCameraComponent = 0x6A0;
            static constexpr std::uintptr_t ZoomedOutShoesCameraComponent = 0x6A8;
            static constexpr std::uintptr_t ZoomedInShoesCameraComponent = 0x6B0;
            static constexpr std::uintptr_t PrimaryPreviewPawnComponent = 0x6B8;
            static constexpr std::uintptr_t SecondaryPreviewPawnComponent = 0x6C0;
            static constexpr std::uintptr_t AdditionalPreviewPawnComponents = 0x6C8;
            static constexpr std::uintptr_t EquippedWeapon = 0x6D8;
            static constexpr std::uintptr_t EquippedParachute = 0x6E0;
            static constexpr std::uintptr_t ItemWrapModifier = 0x6E8;
            static constexpr std::uintptr_t ContrailGlideVerticalVelocity = 0x6F0;
            static constexpr std::uintptr_t ContrailDiveVerticalVelocity = 0x6F4;
            static constexpr std::uintptr_t bForceEmotePlayDelay = 0x6F8;
            static constexpr std::uintptr_t EmotePlayDelay = 0x6FC;
            static constexpr std::uintptr_t EmoteFXDuration = 0x700;
            static constexpr std::uintptr_t MinimumWeaponFireDelay = 0x704;
            static constexpr std::uintptr_t LastWeaponFireTimeStamp = 0x708;
            static constexpr std::uintptr_t PickaxeImpactFXPreviewLocation = 0x710;
            static constexpr std::uintptr_t PickaxeHitTags = 0x728;
            static constexpr std::uintptr_t SeamlessPreviewProductTags = 0x748;
            static constexpr std::uintptr_t EmojiPreviewComponent = 0x830;
        };

        inline static constexpr std::array<PropertyInfo, 42> Properties{{
            {"ZoomedInBodyCameraComponent", 0x5F0, "ObjectProperty"},
            {"ZoomedOutTallBodyCameraComponent", 0x5F8, "ObjectProperty"},
            {"ZoomedInTallBodyCameraComponent", 0x600, "ObjectProperty"},
            {"ZoomedOutBackpackCameraComponent", 0x608, "ObjectProperty"},
            {"ZoomedInBackpackCameraComponent", 0x610, "ObjectProperty"},
            {"ZoomedOutSkydiveCameraComponent", 0x618, "ObjectProperty"},
            {"ZoomedInSkydiveCameraComponent", 0x620, "ObjectProperty"},
            {"ZoomedOutEmoteCameraComponent", 0x628, "ObjectProperty"},
            {"ZoomedInEmoteCameraComponent", 0x630, "ObjectProperty"},
            {"ZoomedOutEmoteHighCameraComponent", 0x638, "ObjectProperty"},
            {"ZoomedInEmoteHighCameraComponent", 0x640, "ObjectProperty"},
            {"ZoomedOutEmoticonCameraComponent", 0x648, "ObjectProperty"},
            {"ZoomedInEmoticonCameraComponent", 0x650, "ObjectProperty"},
            {"ZoomedOutPickaxeCameraComponent", 0x658, "ObjectProperty"},
            {"ZoomedInPickaxeCameraComponent", 0x660, "ObjectProperty"},
            {"ZoomedOutDualPickaxeCameraComponent", 0x668, "ObjectProperty"},
            {"ZoomedInDualPickaxeCameraComponent", 0x670, "ObjectProperty"},
            {"ZoomedOutDoubleWristPickaxeCameraComponent", 0x678, "ObjectProperty"},
            {"ZoomedInDoubleWristPickaxeCameraComponent", 0x680, "ObjectProperty"},
            {"ZoomedOutPersonalGliderCameraComponent", 0x688, "ObjectProperty"},
            {"ZoomedInPersonalGliderCameraComponent", 0x690, "ObjectProperty"},
            {"ZoomedOutCharacterCustomizerCameraComponent", 0x698, "ObjectProperty"},
            {"ZoomedInCharacterCustomizerCameraComponent", 0x6A0, "ObjectProperty"},
            {"ZoomedOutShoesCameraComponent", 0x6A8, "ObjectProperty"},
            {"ZoomedInShoesCameraComponent", 0x6B0, "ObjectProperty"},
            {"PrimaryPreviewPawnComponent", 0x6B8, "ObjectProperty"},
            {"SecondaryPreviewPawnComponent", 0x6C0, "ObjectProperty"},
            {"AdditionalPreviewPawnComponents", 0x6C8, "ArrayProperty"},
            {"EquippedWeapon", 0x6D8, "ObjectProperty"},
            {"EquippedParachute", 0x6E0, "ObjectProperty"},
            {"ItemWrapModifier", 0x6E8, "ObjectProperty"},
            {"ContrailGlideVerticalVelocity", 0x6F0, "FloatProperty"},
            {"ContrailDiveVerticalVelocity", 0x6F4, "FloatProperty"},
            {"bForceEmotePlayDelay", 0x6F8, "BoolProperty"},
            {"EmotePlayDelay", 0x6FC, "FloatProperty"},
            {"EmoteFXDuration", 0x700, "FloatProperty"},
            {"MinimumWeaponFireDelay", 0x704, "FloatProperty"},
            {"LastWeaponFireTimeStamp", 0x708, "FloatProperty"},
            {"PickaxeImpactFXPreviewLocation", 0x710, "StructProperty"},
            {"PickaxeHitTags", 0x728, "StructProperty"},
            {"SeamlessPreviewProductTags", 0x748, "StructProperty"},
            {"EmojiPreviewComponent", 0x830, "ObjectProperty"},
        }};
    };

    struct SparksPlayerStateComponent
    {
        static constexpr std::string_view Name = "SparksPlayerStateComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PlayerStateComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SparksInstrumentChoice = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SparksInstrumentChoice", 0xC0, "EnumProperty"},
        }};
    };

    struct SparksSongPreviewActor
    {
        static constexpr std::string_view Name = "SparksSongPreviewActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t SongShortName = 0x290;
            static constexpr std::uintptr_t SongItemDefinition = 0x298;
            static constexpr std::uintptr_t BoundsScale = 0x2A8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"SongShortName", 0x290, "NameProperty"},
            {"SongItemDefinition", 0x298, "InterfaceProperty"},
            {"BoundsScale", 0x2A8, "FloatProperty"},
        }};
    };

}
