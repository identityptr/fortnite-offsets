#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::CosmeticShoesRuntime
{
    struct CosmeticItemStep_ShoesCharacterPartSetup
    {
        static constexpr std::string_view Name = "CosmeticItemStep_ShoesCharacterPartSetup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStep";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowgraphKey = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FlowgraphKey", 0x58, "StructProperty"},
        }};
    };

    struct CosmeticItemStep_ShoesPostCharacterPartSetup
    {
        static constexpr std::string_view Name = "CosmeticItemStep_ShoesPostCharacterPartSetup";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStep";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowgraphKey = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FlowgraphKey", 0x58, "StructProperty"},
        }};
    };

    struct CosmeticItemStep_ShoesPostCustomizableObject
    {
        static constexpr std::string_view Name = "CosmeticItemStep_ShoesPostCustomizableObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStep";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowgraphKey = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FlowgraphKey", 0x58, "StructProperty"},
        }};
    };

    struct CosmeticItemStep_ShoesRunCustomizableObject
    {
        static constexpr std::string_view Name = "CosmeticItemStep_ShoesRunCustomizableObject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "FortCosmeticStep";
        struct Offsets
        {
            static constexpr std::uintptr_t FlowgraphKey = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"FlowgraphKey", 0x58, "StructProperty"},
        }};
    };

    struct CosmeticShoesAnimInstance
    {
        static constexpr std::string_view Name = "CosmeticShoesAnimInstance";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AnimInstance";
        struct Offsets
        {
            static constexpr std::uintptr_t CurrentSkeleton = 0x28;
            static constexpr std::uintptr_t RootMotionMode = 0x30;
            static constexpr std::uintptr_t bPropagateNotifiesToLinkedInstances = 0x31;
            static constexpr std::uintptr_t bReceiveNotifiesFromLinkedInstances = 0x31;
            static constexpr std::uintptr_t bUseMainInstanceMontageEvaluationData = 0x31;
            static constexpr std::uintptr_t bUseMultiThreadedAnimationUpdate = 0x31;
            static constexpr std::uintptr_t bUsingCopyPoseFromMesh = 0x31;
            static constexpr std::uintptr_t bQueueMontageEvents = 0x32;
            static constexpr std::uintptr_t OnMontageBlendingOut = 0x38;
            static constexpr std::uintptr_t OnMontageBlendedIn = 0x48;
            static constexpr std::uintptr_t OnMontageStarted = 0x58;
            static constexpr std::uintptr_t OnMontageEnded = 0x68;
            static constexpr std::uintptr_t OnAllMontageInstancesEnded = 0x78;
            static constexpr std::uintptr_t OnMontageSectionChanged = 0x88;
            static constexpr std::uintptr_t SlotGroupInertializationRequestDataMap = 0xB8;
            static constexpr std::uintptr_t NotifyQueue = 0x110;
            static constexpr std::uintptr_t ActiveAnimNotifyState = 0x148;
            static constexpr std::uintptr_t ActiveAnimNotifyEventReference = 0x158;
        };

        inline static constexpr std::array<PropertyInfo, 18> Properties{{
            {"CurrentSkeleton", 0x28, "ObjectProperty"},
            {"RootMotionMode", 0x30, "ByteProperty"},
            {"bPropagateNotifiesToLinkedInstances", 0x31, "BoolProperty"},
            {"bReceiveNotifiesFromLinkedInstances", 0x31, "BoolProperty"},
            {"bUseMainInstanceMontageEvaluationData", 0x31, "BoolProperty"},
            {"bUseMultiThreadedAnimationUpdate", 0x31, "BoolProperty"},
            {"bUsingCopyPoseFromMesh", 0x31, "BoolProperty"},
            {"bQueueMontageEvents", 0x32, "BoolProperty"},
            {"OnMontageBlendingOut", 0x38, "MulticastInlineDelegateProperty"},
            {"OnMontageBlendedIn", 0x48, "MulticastInlineDelegateProperty"},
            {"OnMontageStarted", 0x58, "MulticastInlineDelegateProperty"},
            {"OnMontageEnded", 0x68, "MulticastInlineDelegateProperty"},
            {"OnAllMontageInstancesEnded", 0x78, "MulticastInlineDelegateProperty"},
            {"OnMontageSectionChanged", 0x88, "MulticastInlineDelegateProperty"},
            {"SlotGroupInertializationRequestDataMap", 0xB8, "MapProperty"},
            {"NotifyQueue", 0x110, "StructProperty"},
            {"ActiveAnimNotifyState", 0x148, "ArrayProperty"},
            {"ActiveAnimNotifyEventReference", 0x158, "ArrayProperty"},
        }};
    };

    struct CosmeticShoesItem
    {
        static constexpr std::string_view Name = "CosmeticShoesItem";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaCosmeticAccountItem";
        struct Offsets
        {
            static constexpr std::uintptr_t VariantChannels = 0x108;
            static constexpr std::uintptr_t ActiveVariantOverrides = 0x118;
            static constexpr std::uintptr_t Variants = 0x128;
            static constexpr std::uintptr_t Hero = 0x148;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"VariantChannels", 0x108, "ArrayProperty"},
            {"ActiveVariantOverrides", 0x118, "ArrayProperty"},
            {"Variants", 0x128, "ArrayProperty"},
            {"Hero", 0x148, "ObjectProperty"},
        }};
    };

    struct CosmeticShoesItemDefinition
    {
        static constexpr std::string_view Name = "CosmeticShoesItemDefinition";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AthenaCharacterPartItemDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t LeftShoesPosition = 0x408;
            static constexpr std::uintptr_t RightShoesPosition = 0x420;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LeftShoesPosition", 0x408, "StructProperty"},
            {"RightShoesPosition", 0x420, "StructProperty"},
        }};
    };

    struct CosmeticShoesPreviewPrefabAsset
    {
        static constexpr std::string_view Name = "CosmeticShoesPreviewPrefabAsset";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t Mesh = 0x2A0;
            static constexpr std::uintptr_t IdleVFX = 0x2A8;
            static constexpr std::uintptr_t CustomizableComponent = 0x2B0;
            static constexpr std::uintptr_t ShoesItemDefinition = 0x2B8;
            static constexpr std::uintptr_t CylinderHalfHeight = 0x2C0;
            static constexpr std::uintptr_t CylinderRadius = 0x2C4;
            static constexpr std::uintptr_t PartModifiers = 0x2F8;
            static constexpr std::uintptr_t AppliedCharacterParts = 0x308;
            static constexpr std::uintptr_t DesiredCosmeticParts = 0x318;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"Mesh", 0x2A0, "ObjectProperty"},
            {"IdleVFX", 0x2A8, "WeakObjectProperty"},
            {"CustomizableComponent", 0x2B0, "ObjectProperty"},
            {"ShoesItemDefinition", 0x2B8, "WeakObjectProperty"},
            {"CylinderHalfHeight", 0x2C0, "FloatProperty"},
            {"CylinderRadius", 0x2C4, "FloatProperty"},
            {"PartModifiers", 0x2F8, "ArrayProperty"},
            {"AppliedCharacterParts", 0x308, "ArrayProperty"},
            {"DesiredCosmeticParts", 0x318, "ArrayProperty"},
        }};
    };

}
