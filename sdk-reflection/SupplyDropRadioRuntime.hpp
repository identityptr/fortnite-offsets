#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::SupplyDropRadioRuntime
{
    struct BuildingGameplayActorSupplyDropRadio
    {
        static constexpr std::string_view Name = "BuildingGameplayActorSupplyDropRadio";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BuildingGameplayActor";
        struct Offsets
        {
            static constexpr std::uintptr_t MinimumMovingSpeedThresholdSq = 0x940;
            static constexpr std::uintptr_t BalloonClosedGroundedFallSpeed = 0x944;
            static constexpr std::uintptr_t bAutoOpen = 0x948;
            static constexpr std::uintptr_t ForceOpenActorTags = 0x950;
            static constexpr std::uintptr_t IgnoreMovingCollisionWithActorTagQuery = 0x970;
            static constexpr std::uintptr_t InterpRateToBalloonOpenedFallSpeed = 0x9B8;
            static constexpr std::uintptr_t DistanceFromOriginalSpawnLocForBalloonOpen = 0x9BC;
            static constexpr std::uintptr_t BalloonState = 0x9C0;
            static constexpr std::uintptr_t WaterHitResult = 0x9C8;
            static constexpr std::uintptr_t bMoving = 0xAC0;
            static constexpr std::uintptr_t FallSpeed = 0xAC4;
            static constexpr std::uintptr_t BalloonOpenedFallSpeed = 0xAC8;
            static constexpr std::uintptr_t GravityMultiplier = 0xACC;
            static constexpr std::uintptr_t ServerLocation = 0xAD0;
            static constexpr std::uintptr_t ClientLocationCorrectionMaxDistSqWhenBalloonDisabled = 0xAE8;
            static constexpr std::uintptr_t ClientLocationCorrectionMaxDistSqWhenBalloonEnabled = 0xAEC;
            static constexpr std::uintptr_t Velocity = 0xAF0;
            static constexpr std::uintptr_t PreviousFrameVelocity = 0xB08;
            static constexpr std::uintptr_t OriginalServerSpawnLocation = 0xB20;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"MinimumMovingSpeedThresholdSq", 0x940, "FloatProperty"},
            {"BalloonClosedGroundedFallSpeed", 0x944, "FloatProperty"},
            {"bAutoOpen", 0x948, "BoolProperty"},
            {"ForceOpenActorTags", 0x950, "StructProperty"},
            {"IgnoreMovingCollisionWithActorTagQuery", 0x970, "StructProperty"},
            {"InterpRateToBalloonOpenedFallSpeed", 0x9B8, "FloatProperty"},
            {"DistanceFromOriginalSpawnLocForBalloonOpen", 0x9BC, "FloatProperty"},
            {"BalloonState", 0x9C0, "EnumProperty"},
            {"WaterHitResult", 0x9C8, "StructProperty"},
            {"bMoving", 0xAC0, "BoolProperty"},
            {"FallSpeed", 0xAC4, "FloatProperty"},
            {"BalloonOpenedFallSpeed", 0xAC8, "FloatProperty"},
            {"GravityMultiplier", 0xACC, "FloatProperty"},
            {"ServerLocation", 0xAD0, "StructProperty"},
            {"ClientLocationCorrectionMaxDistSqWhenBalloonDisabled", 0xAE8, "FloatProperty"},
            {"ClientLocationCorrectionMaxDistSqWhenBalloonEnabled", 0xAEC, "FloatProperty"},
            {"Velocity", 0xAF0, "StructProperty"},
            {"PreviousFrameVelocity", 0xB08, "StructProperty"},
            {"OriginalServerSpawnLocation", 0xB20, "StructProperty"},
        }};
    };

    struct FortSupplyDropRadioAttachActorComponent
    {
        static constexpr std::string_view Name = "FortSupplyDropRadioAttachActorComponent";
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

    struct FortSupplyDropRadioBlueprintLibrary
    {
        static constexpr std::string_view Name = "FortSupplyDropRadioBlueprintLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
