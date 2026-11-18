#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::ItemPreview
{
    struct AthenaWrapPreviewActor
    {
        static constexpr std::string_view Name = "AthenaWrapPreviewActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ItemPreviewMultiAngleActor";
        struct Offsets
        {
            static constexpr std::uintptr_t ZoomedInWeaponCameraComponent = 0x5F0;
            static constexpr std::uintptr_t ZoomedOutVehicleCameraComponent = 0x5F8;
            static constexpr std::uintptr_t ZoomedInVehicleCameraComponent = 0x600;
            static constexpr std::uintptr_t ZoomedOutCampaignVehicleCameraComponent = 0x608;
            static constexpr std::uintptr_t ZoomedInCampaignVehicleCameraComponent = 0x610;
            static constexpr std::uintptr_t ZoomedOutLargeWeaponCameraComponent = 0x618;
            static constexpr std::uintptr_t ZoomedInLargeWeaponCameraComponent = 0x620;
            static constexpr std::uintptr_t PreviewSpawnPointComponent = 0x648;
            static constexpr std::uintptr_t ItemWrapDef = 0x650;
            static constexpr std::uintptr_t DefaultCameraFrameTargetBounds = 0x680;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"ZoomedInWeaponCameraComponent", 0x5F0, "ObjectProperty"},
            {"ZoomedOutVehicleCameraComponent", 0x5F8, "ObjectProperty"},
            {"ZoomedInVehicleCameraComponent", 0x600, "ObjectProperty"},
            {"ZoomedOutCampaignVehicleCameraComponent", 0x608, "ObjectProperty"},
            {"ZoomedInCampaignVehicleCameraComponent", 0x610, "ObjectProperty"},
            {"ZoomedOutLargeWeaponCameraComponent", 0x618, "ObjectProperty"},
            {"ZoomedInLargeWeaponCameraComponent", 0x620, "ObjectProperty"},
            {"PreviewSpawnPointComponent", 0x648, "ObjectProperty"},
            {"ItemWrapDef", 0x650, "ObjectProperty"},
            {"DefaultCameraFrameTargetBounds", 0x680, "StructProperty"},
        }};
    };

    struct ItemPreviewBackground
    {
        static constexpr std::string_view Name = "ItemPreviewBackground";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CommonUserWidget";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewSceneChangerTag = 0x330;
            static constexpr std::uintptr_t CachedVaultWorld = 0x338;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"PreviewSceneChangerTag", 0x330, "StructProperty"},
            {"CachedVaultWorld", 0x338, "ObjectProperty"},
        }};
    };

    struct ItemPreviewBackgroundController
    {
        static constexpr std::string_view Name = "ItemPreviewBackgroundController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LegacyHost = 0x30;
            static constexpr std::uintptr_t RigHost = 0x40;
            static constexpr std::uintptr_t OwningWorld = 0x50;
            static constexpr std::uintptr_t CachedBackgroundData = 0x58;
            static constexpr std::uintptr_t CachedSubstance = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"LegacyHost", 0x30, "InterfaceProperty"},
            {"RigHost", 0x40, "InterfaceProperty"},
            {"OwningWorld", 0x50, "ObjectProperty"},
            {"CachedBackgroundData", 0x58, "StructProperty"},
            {"CachedSubstance", 0xB0, "ObjectProperty"},
        }};
    };

    struct ItemPreviewBackgroundDirector
    {
        static constexpr std::string_view Name = "ItemPreviewBackgroundDirector";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ItemPreviewBackgroundHost
    {
        static constexpr std::string_view Name = "ItemPreviewBackgroundHost";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct ItemPreviewBackgroundRig
    {
        static constexpr std::string_view Name = "ItemPreviewBackgroundRig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ItemPreviewRig";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultRigValues = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultRigValues", 0x278, "StructProperty"},
        }};
    };

    struct ItemPreviewCameraComponent
    {
        static constexpr std::string_view Name = "ItemPreviewCameraComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewContext = 0xC0;
            static constexpr std::uintptr_t CameraTransition = 0x100;
            static constexpr std::uintptr_t ItemRotationRestores = 0x2B0;
            static constexpr std::uintptr_t RotationLimitZoomCurve = 0x2F8;
            static constexpr std::uintptr_t IdleCameraMotion = 0x300;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"PreviewContext", 0xC0, "StructProperty"},
            {"CameraTransition", 0x100, "StructProperty"},
            {"ItemRotationRestores", 0x2B0, "ArrayProperty"},
            {"RotationLimitZoomCurve", 0x2F8, "ObjectProperty"},
            {"IdleCameraMotion", 0x300, "ObjectProperty"},
        }};
    };

    struct ItemPreviewCameraTargetPedestal
    {
        static constexpr std::string_view Name = "ItemPreviewCameraTargetPedestal";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewRigComponent = 0x278;
            static constexpr std::uintptr_t CameraTargetTag = 0x280;
            static constexpr std::uintptr_t PedestalBaseComponent = 0x288;
            static constexpr std::uintptr_t PreviewLoadoutModifier = 0x290;
            static constexpr std::uintptr_t CurrentPrimaryItem = 0x298;
            static constexpr std::uintptr_t ItemPreviewActor = 0x2A0;
            static constexpr std::uintptr_t PinnedDisplayCosmeticLoadoutCopy = 0x2A8;
            static constexpr std::uintptr_t PendingDisplaySettings = 0x398;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"PreviewRigComponent", 0x278, "ObjectProperty"},
            {"CameraTargetTag", 0x280, "StructProperty"},
            {"PedestalBaseComponent", 0x288, "ObjectProperty"},
            {"PreviewLoadoutModifier", 0x290, "ObjectProperty"},
            {"CurrentPrimaryItem", 0x298, "ObjectProperty"},
            {"ItemPreviewActor", 0x2A0, "ObjectProperty"},
            {"PinnedDisplayCosmeticLoadoutCopy", 0x2A8, "StructProperty"},
            {"PendingDisplaySettings", 0x398, "StructProperty"},
        }};
    };

    struct ItemPreviewIdleCameraMotion
    {
        static constexpr std::string_view Name = "ItemPreviewIdleCameraMotion";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t MotionData = 0x28;
            static constexpr std::uintptr_t PendingMotionData = 0x70;
            static constexpr std::uintptr_t Sequence = 0xB8;
            static constexpr std::uintptr_t PendingSequence = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"MotionData", 0x28, "StructProperty"},
            {"PendingMotionData", 0x70, "StructProperty"},
            {"Sequence", 0xB8, "ObjectProperty"},
            {"PendingSequence", 0xC0, "ObjectProperty"},
        }};
    };

    struct ItemPreviewLightingRig
    {
        static constexpr std::string_view Name = "ItemPreviewLightingRig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ItemPreviewRig";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultRigValues = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultRigValues", 0x278, "StructProperty"},
        }};
    };

    struct ItemPreviewMaterialParamComponent
    {
        static constexpr std::string_view Name = "ItemPreviewMaterialParamComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveAnimations = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ActiveAnimations", 0xC0, "ArrayProperty"},
        }};
    };

    struct ItemPreviewModifierComponent
    {
        static constexpr std::string_view Name = "ItemPreviewModifierComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryComponentTick = 0x38;
            static constexpr std::uintptr_t ComponentTags = 0x68;
            static constexpr std::uintptr_t AssetUserData = 0x78;
            static constexpr std::uintptr_t UCSSerializationIndex = 0x90;
            static constexpr std::uintptr_t bNetAddressable = 0x98;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x98;
            static constexpr std::uintptr_t bReplicates = 0x98;
            static constexpr std::uintptr_t bAutoActivate = 0x9A;
            static constexpr std::uintptr_t bCanEverAffectNavigation = 0x9A;
            static constexpr std::uintptr_t bEditableWhenInherited = 0x9A;
            static constexpr std::uintptr_t bIsActive = 0x9A;
            static constexpr std::uintptr_t bIsEditorOnly = 0x9B;
            static constexpr std::uintptr_t CreationMethod = 0xB9;
            static constexpr std::uintptr_t OnComponentActivated = 0xBA;
            static constexpr std::uintptr_t OnComponentDeactivated = 0xBB;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"PrimaryComponentTick", 0x38, "StructProperty"},
            {"ComponentTags", 0x68, "ArrayProperty"},
            {"AssetUserData", 0x78, "ArrayProperty"},
            {"UCSSerializationIndex", 0x90, "IntProperty"},
            {"bNetAddressable", 0x98, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x98, "BoolProperty"},
            {"bReplicates", 0x98, "BoolProperty"},
            {"bAutoActivate", 0x9A, "BoolProperty"},
            {"bCanEverAffectNavigation", 0x9A, "BoolProperty"},
            {"bEditableWhenInherited", 0x9A, "BoolProperty"},
            {"bIsActive", 0x9A, "BoolProperty"},
            {"bIsEditorOnly", 0x9B, "BoolProperty"},
            {"CreationMethod", 0xB9, "EnumProperty"},
            {"OnComponentActivated", 0xBA, "MulticastSparseDelegateProperty"},
            {"OnComponentDeactivated", 0xBB, "MulticastSparseDelegateProperty"},
        }};
    };

    struct ItemPreviewModifierComponent_Hero
    {
        static constexpr std::string_view Name = "ItemPreviewModifierComponent_Hero";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ItemPreviewModifierComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bCleanupMismatchedVariantChannels = 0xC0;
            static constexpr std::uintptr_t bPopulateDependentVariants = 0xC1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bCleanupMismatchedVariantChannels", 0xC0, "BoolProperty"},
            {"bPopulateDependentVariants", 0xC1, "BoolProperty"},
        }};
    };

    struct ItemPreviewMultiAngleActor
    {
        static constexpr std::string_view Name = "ItemPreviewMultiAngleActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemPreviewActor";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraRotationRootComponent = 0x4B0;
            static constexpr std::uintptr_t PrimaryCameraComponent = 0x4B8;
            static constexpr std::uintptr_t ContextualCameraZoomOut = 0x4C0;
            static constexpr std::uintptr_t ContextualCameraZoomIn = 0x4C8;
            static constexpr std::uintptr_t AutotestFloorMaterial = 0x4D0;
            static constexpr std::uintptr_t bRotateCameraInsteadOfPreviewItem = 0x4D8;
            static constexpr std::uintptr_t AngleTransitionDuration = 0x4DC;
            static constexpr std::uintptr_t AngleTransitionCurve = 0x4E0;
            static constexpr std::uintptr_t ActiveCameraAngle = 0x4E8;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"CameraRotationRootComponent", 0x4B0, "ObjectProperty"},
            {"PrimaryCameraComponent", 0x4B8, "ObjectProperty"},
            {"ContextualCameraZoomOut", 0x4C0, "ObjectProperty"},
            {"ContextualCameraZoomIn", 0x4C8, "ObjectProperty"},
            {"AutotestFloorMaterial", 0x4D0, "ObjectProperty"},
            {"bRotateCameraInsteadOfPreviewItem", 0x4D8, "BoolProperty"},
            {"AngleTransitionDuration", 0x4DC, "FloatProperty"},
            {"AngleTransitionCurve", 0x4E0, "ObjectProperty"},
            {"ActiveCameraAngle", 0x4E8, "ObjectProperty"},
        }};
    };

    struct ItemPreviewOffPawnActor
    {
        static constexpr std::string_view Name = "ItemPreviewOffPawnActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ItemPreviewSingleAngleActor";
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

    struct ItemPreviewOnPawnActor
    {
        static constexpr std::string_view Name = "ItemPreviewOnPawnActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ItemPreviewMultiAngleActor";
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

    struct ItemPreviewRig
    {
        static constexpr std::string_view Name = "ItemPreviewRig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultRigValues = 0x278;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"DefaultRigValues", 0x278, "StructProperty"},
        }};
    };

    struct ItemPreviewRigComponent
    {
        static constexpr std::string_view Name = "ItemPreviewRigComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t RigSlots = 0x240;
            static constexpr std::uintptr_t CachedPreviewContext = 0x260;
            static constexpr std::uintptr_t BackgroundController = 0x298;
            static constexpr std::uintptr_t Director = 0x2A0;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"RigSlots", 0x240, "ArrayProperty"},
            {"CachedPreviewContext", 0x260, "StructProperty"},
            {"BackgroundController", 0x298, "ObjectProperty"},
            {"Director", 0x2A0, "ObjectProperty"},
        }};
    };

    struct ItemPreviewRotator
    {
        static constexpr std::string_view Name = "ItemPreviewRotator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ItemPreviewSceneChanger";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraTransitionLerpDuration = 0x438;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"CameraTransitionLerpDuration", 0x438, "FloatProperty"},
        }};
    };

    struct ItemPreviewScene
    {
        static constexpr std::string_view Name = "ItemPreviewScene";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t AdditionalPedestalComponents = 0x278;
            static constexpr std::uintptr_t AdditionalPedestals = 0x288;
            static constexpr std::uintptr_t FocusCameraTargetComponent = 0x298;
            static constexpr std::uintptr_t FocusCameraTargetPedestal = 0x2A0;
            static constexpr std::uintptr_t BackgroundCameraTargetPedestals = 0x2A8;
            static constexpr std::uintptr_t PreviewCameraComponent = 0x2B8;
            static constexpr std::uintptr_t PreviewRigComponent = 0x2C0;
            static constexpr std::uintptr_t PreviewMaterialParamComponent = 0x2C8;
            static constexpr std::uintptr_t ItemViewSettings = 0x2D0;
            static constexpr std::uintptr_t PedestalsLoading = 0x320;
        };

        inline static constexpr std::array<PropertyInfo, 10> Properties{{
            {"AdditionalPedestalComponents", 0x278, "ArrayProperty"},
            {"AdditionalPedestals", 0x288, "ArrayProperty"},
            {"FocusCameraTargetComponent", 0x298, "ObjectProperty"},
            {"FocusCameraTargetPedestal", 0x2A0, "ObjectProperty"},
            {"BackgroundCameraTargetPedestals", 0x2A8, "ArrayProperty"},
            {"PreviewCameraComponent", 0x2B8, "ObjectProperty"},
            {"PreviewRigComponent", 0x2C0, "ObjectProperty"},
            {"PreviewMaterialParamComponent", 0x2C8, "ObjectProperty"},
            {"ItemViewSettings", 0x2D0, "StructProperty"},
            {"PedestalsLoading", 0x320, "ArrayProperty"},
        }};
    };

    struct ItemPreviewSceneChanger
    {
        static constexpr std::string_view Name = "ItemPreviewSceneChanger";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t TransitionCameraComponent = 0x288;
            static constexpr std::uintptr_t PrimarySceneComponent = 0x290;
            static constexpr std::uintptr_t SecondarySceneComponent = 0x298;
            static constexpr std::uintptr_t ActiveSceneChangerTag = 0x2A0;
            static constexpr std::uintptr_t SceneChangerTags = 0x2A8;
            static constexpr std::uintptr_t bHasEtherealBackground = 0x2C8;
            static constexpr std::uintptr_t SceneChangeRootComponent = 0x2D0;
            static constexpr std::uintptr_t PrimaryScene = 0x2D8;
            static constexpr std::uintptr_t SecondaryScene = 0x2E0;
            static constexpr std::uintptr_t PreviewWorld = 0x2E8;
            static constexpr std::uintptr_t SceneTransitioningTo = 0x2F0;
            static constexpr std::uintptr_t ActiveScene = 0x2F8;
            static constexpr std::uintptr_t LoadingScene = 0x328;
            static constexpr std::uintptr_t ZoomLevel = 0x360;
            static constexpr std::uintptr_t PedestalRotationOffset = 0x368;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"TransitionCameraComponent", 0x288, "ObjectProperty"},
            {"PrimarySceneComponent", 0x290, "ObjectProperty"},
            {"SecondarySceneComponent", 0x298, "ObjectProperty"},
            {"ActiveSceneChangerTag", 0x2A0, "StructProperty"},
            {"SceneChangerTags", 0x2A8, "StructProperty"},
            {"bHasEtherealBackground", 0x2C8, "BoolProperty"},
            {"SceneChangeRootComponent", 0x2D0, "ObjectProperty"},
            {"PrimaryScene", 0x2D8, "ObjectProperty"},
            {"SecondaryScene", 0x2E0, "ObjectProperty"},
            {"PreviewWorld", 0x2E8, "ObjectProperty"},
            {"SceneTransitioningTo", 0x2F0, "ObjectProperty"},
            {"ActiveScene", 0x2F8, "ObjectProperty"},
            {"LoadingScene", 0x328, "ObjectProperty"},
            {"ZoomLevel", 0x360, "FloatProperty"},
            {"PedestalRotationOffset", 0x368, "StructProperty"},
        }};
    };

    struct ItemPreviewSingleAngleActor
    {
        static constexpr std::string_view Name = "ItemPreviewSingleAngleActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortItemPreviewActor";
        struct Offsets
        {
            static constexpr std::uintptr_t ZoomedOutCameraComponent = 0x4B0;
            static constexpr std::uintptr_t ZoomedInCameraComponent = 0x4B8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ZoomedOutCameraComponent", 0x4B0, "ObjectProperty"},
            {"ZoomedInCameraComponent", 0x4B8, "ObjectProperty"},
        }};
    };

    struct ItemPreviewSwapper
    {
        static constexpr std::string_view Name = "ItemPreviewSwapper";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ItemPreviewSceneChanger";
        struct Offsets
        {
            static constexpr std::uintptr_t CameraTransitionCurve = 0x438;
            static constexpr std::uintptr_t CameraTransitionLerpDuration = 0x440;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CameraTransitionCurve", 0x438, "ObjectProperty"},
            {"CameraTransitionLerpDuration", 0x440, "FloatProperty"},
        }};
    };

    struct ItemPreviewWorld
    {
        static constexpr std::string_view Name = "ItemPreviewWorld";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewSceneChangerTags = 0x280;
            static constexpr std::uintptr_t BackgroundMaterial = 0x2A0;
            static constexpr std::uintptr_t BackgroundMaterialDynamic = 0x2A8;
            static constexpr std::uintptr_t FloorMaterial = 0x2B0;
            static constexpr std::uintptr_t FloorMaterialDynamic = 0x2B8;
            static constexpr std::uintptr_t SceneBackgroundComponent = 0x2C0;
            static constexpr std::uintptr_t SceneBackground = 0x2C8;
            static constexpr std::uintptr_t SceneChangerComponent = 0x2D0;
            static constexpr std::uintptr_t PreviewRigComponent = 0x2D8;
            static constexpr std::uintptr_t PreviewSceneChanger = 0x2E0;
            static constexpr std::uintptr_t bHasFloor = 0x2E9;
        };

        inline static constexpr std::array<PropertyInfo, 11> Properties{{
            {"PreviewSceneChangerTags", 0x280, "StructProperty"},
            {"BackgroundMaterial", 0x2A0, "ObjectProperty"},
            {"BackgroundMaterialDynamic", 0x2A8, "ObjectProperty"},
            {"FloorMaterial", 0x2B0, "ObjectProperty"},
            {"FloorMaterialDynamic", 0x2B8, "ObjectProperty"},
            {"SceneBackgroundComponent", 0x2C0, "ObjectProperty"},
            {"SceneBackground", 0x2C8, "ObjectProperty"},
            {"SceneChangerComponent", 0x2D0, "ObjectProperty"},
            {"PreviewRigComponent", 0x2D8, "ObjectProperty"},
            {"PreviewSceneChanger", 0x2E0, "ObjectProperty"},
            {"bHasFloor", 0x2E9, "BoolProperty"},
        }};
    };

    struct PreviewSceneStateTransitionsListener
    {
        static constexpr std::string_view Name = "PreviewSceneStateTransitionsListener";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct StateTransitionControlLibrary
    {
        static constexpr std::string_view Name = "StateTransitionControlLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
