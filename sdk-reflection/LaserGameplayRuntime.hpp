#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LaserGameplayRuntime
{
    struct BuildingGameplayActorLaserGrid
    {
        static constexpr std::string_view Name = "BuildingGameplayActorLaserGrid";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t OnLaserGridTriggered = 0x940;
            static constexpr std::uintptr_t OnLaserGridOutletDestroyed = 0x950;
            static constexpr std::uintptr_t LaserGridPatterns = 0x960;
            static constexpr std::uintptr_t LaserPatternChangeWarningTime = 0x970;
            static constexpr std::uintptr_t LaserOutletToBuildingAttachmentMap = 0x978;
            static constexpr std::uintptr_t IgnoreActorTags = 0x988;
            static constexpr std::uintptr_t LaserCapsuleComponentClass = 0x9A8;
            static constexpr std::uintptr_t LaserCapsuleCollisionRotationOffset = 0x9B0;
            static constexpr std::uintptr_t LaserCustomDataIndexForRandomizedVisuals = 0x9C8;
            static constexpr std::uintptr_t LaserGridConnections = 0x9D0;
            static constexpr std::uintptr_t LocalLaserGridConnections = 0xA28;
            static constexpr std::uintptr_t LaserConnectionOffset = 0xA40;
            static constexpr std::uintptr_t LaserOutletConnectionOffset = 0xAA0;
            static constexpr std::uintptr_t SoundOutletTransitionOn = 0xAB8;
            static constexpr std::uintptr_t SoundLaserTransitionPrimaryOutlet = 0xAC0;
            static constexpr std::uintptr_t SoundLaserTransitionSecondaryOutlet = 0xAC8;
            static constexpr std::uintptr_t SoundLaserTransition = 0xAD0;
            static constexpr std::uintptr_t OutletMaterialCustomDataIndex_EmissiveEnabled = 0xAD8;
            static constexpr std::uintptr_t OutletMaterialCustomDataIndex_DisableEmissivePulse = 0xADC;
            static constexpr std::uintptr_t OutletMaterialCustomDataIndex_AnimTimestamp = 0xAE0;
            static constexpr std::uintptr_t OutletMaterialCustomDataIndex_AnimTimestampDuration = 0xAE4;
            static constexpr std::uintptr_t MaterialCosineWavePeriod = 0xAE8;
            static constexpr std::uintptr_t OutletMaterialTransitionOffTimestampOffset = 0xAF0;
            static constexpr std::uintptr_t LaserMaterialCustomDataIndex_PulseEnabled = 0xB00;
            static constexpr std::uintptr_t LaserMaterialCustomDataIndex_RandomFlickeringSpeed = 0xB04;
            static constexpr std::uintptr_t LaserMaterialCustomDataIndex_AnimTimestamp = 0xB08;
            static constexpr std::uintptr_t LaserMaterialCustomDataIndex_PulseTimeOffset = 0xB0C;
            static constexpr std::uintptr_t LaserMaterialRandomFlickeringSpeed = 0xB10;
            static constexpr std::uintptr_t LaserGridOutlets = 0xB20;
            static constexpr std::uintptr_t HISMComponentOutlet = 0xB80;
            static constexpr std::uintptr_t HISMComponentLaser = 0xB88;
            static constexpr std::uintptr_t bEnabled = 0xB90;
            static constexpr std::uintptr_t LaserGridPatternIndex = 0xB94;
            static constexpr std::uintptr_t LaserPatternTimerHandle = 0xB98;
        };

        inline static constexpr std::array<PropertyInfo, 34> Properties{{
            {"OnLaserGridTriggered", 0x940, "MulticastInlineDelegateProperty"},
            {"OnLaserGridOutletDestroyed", 0x950, "MulticastInlineDelegateProperty"},
            {"LaserGridPatterns", 0x960, "ArrayProperty"},
            {"LaserPatternChangeWarningTime", 0x970, "FloatProperty"},
            {"LaserOutletToBuildingAttachmentMap", 0x978, "MapProperty"},
            {"IgnoreActorTags", 0x988, "StructProperty"},
            {"LaserCapsuleComponentClass", 0x9A8, "ClassProperty"},
            {"LaserCapsuleCollisionRotationOffset", 0x9B0, "StructProperty"},
            {"LaserCustomDataIndexForRandomizedVisuals", 0x9C8, "IntProperty"},
            {"LaserGridConnections", 0x9D0, "StructProperty"},
            {"LocalLaserGridConnections", 0xA28, "ArrayProperty"},
            {"LaserConnectionOffset", 0xA40, "StructProperty"},
            {"LaserOutletConnectionOffset", 0xAA0, "StructProperty"},
            {"SoundOutletTransitionOn", 0xAB8, "ObjectProperty"},
            {"SoundLaserTransitionPrimaryOutlet", 0xAC0, "ObjectProperty"},
            {"SoundLaserTransitionSecondaryOutlet", 0xAC8, "ObjectProperty"},
            {"SoundLaserTransition", 0xAD0, "ObjectProperty"},
            {"OutletMaterialCustomDataIndex_EmissiveEnabled", 0xAD8, "IntProperty"},
            {"OutletMaterialCustomDataIndex_DisableEmissivePulse", 0xADC, "IntProperty"},
            {"OutletMaterialCustomDataIndex_AnimTimestamp", 0xAE0, "IntProperty"},
            {"OutletMaterialCustomDataIndex_AnimTimestampDuration", 0xAE4, "IntProperty"},
            {"MaterialCosineWavePeriod", 0xAE8, "FloatProperty"},
            {"OutletMaterialTransitionOffTimestampOffset", 0xAF0, "StructProperty"},
            {"LaserMaterialCustomDataIndex_PulseEnabled", 0xB00, "IntProperty"},
            {"LaserMaterialCustomDataIndex_RandomFlickeringSpeed", 0xB04, "IntProperty"},
            {"LaserMaterialCustomDataIndex_AnimTimestamp", 0xB08, "IntProperty"},
            {"LaserMaterialCustomDataIndex_PulseTimeOffset", 0xB0C, "IntProperty"},
            {"LaserMaterialRandomFlickeringSpeed", 0xB10, "StructProperty"},
            {"LaserGridOutlets", 0xB20, "StructProperty"},
            {"HISMComponentOutlet", 0xB80, "ObjectProperty"},
            {"HISMComponentLaser", 0xB88, "ObjectProperty"},
            {"bEnabled", 0xB90, "BoolProperty"},
            {"LaserGridPatternIndex", 0xB94, "IntProperty"},
            {"LaserPatternTimerHandle", 0xB98, "StructProperty"},
        }};
    };

    struct LaserCapsuleComponent
    {
        static constexpr std::string_view Name = "LaserCapsuleComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CapsuleComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t CollisionWhenEnabled = 0x5A0;
            static constexpr std::uintptr_t CollisionWhenDisabled = 0x5A1;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CollisionWhenEnabled", 0x5A0, "ByteProperty"},
            {"CollisionWhenDisabled", 0x5A1, "ByteProperty"},
        }};
    };

    struct LaserGridEditorComponent
    {
        static constexpr std::string_view Name = "LaserGridEditorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t VisualizeLaserGridPatternIndex = 0xC0;
            static constexpr std::uintptr_t bVisualizeOutletIndex = 0xC4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"VisualizeLaserGridPatternIndex", 0xC0, "IntProperty"},
            {"bVisualizeOutletIndex", 0xC4, "BoolProperty"},
        }};
    };

}
