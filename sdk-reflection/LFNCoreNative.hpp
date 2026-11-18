#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LFNCoreNative
{
    struct LFNAmbientLifeActor
    {
        static constexpr std::string_view Name = "LFNAmbientLifeActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultTags = 0x280;
            static constexpr std::uintptr_t UroShiftBucket = 0x2A0;
            static constexpr std::uintptr_t MaxEvalRateForInterpolation = 0x2A4;
            static constexpr std::uintptr_t LODToFrameSkipMap = 0x2A8;
            static constexpr std::uintptr_t SkelMeshComp = 0x2B8;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"DefaultTags", 0x280, "StructProperty"},
            {"UroShiftBucket", 0x2A0, "EnumProperty"},
            {"MaxEvalRateForInterpolation", 0x2A4, "IntProperty"},
            {"LODToFrameSkipMap", 0x2A8, "MapProperty"},
            {"SkelMeshComp", 0x2B8, "ObjectProperty"},
        }};
    };

    struct LFNBaseFEActor
    {
        static constexpr std::string_view Name = "LFNBaseFEActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t LFNColor = 0x278;
            static constexpr std::uintptr_t bAutoAssignNavProperties = 0x280;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LFNColor", 0x278, "ObjectProperty"},
            {"bAutoAssignNavProperties", 0x280, "BoolProperty"},
        }};
    };

    struct LFNColorComponent
    {
        static constexpr std::string_view Name = "LFNColorComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t ColorLUTAtlas = 0xC0;
            static constexpr std::uintptr_t ColorLUTTexture = 0xC8;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ColorLUTAtlas", 0xC0, "ObjectProperty"},
            {"ColorLUTTexture", 0xC8, "ObjectProperty"},
        }};
    };

    struct LFNColorIDSwapComponent
    {
        static constexpr std::string_view Name = "LFNColorIDSwapComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SourceId = 0xC0;
            static constexpr std::uintptr_t DestinationID = 0xC4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SourceId", 0xC0, "IntProperty"},
            {"DestinationID", 0xC4, "IntProperty"},
        }};
    };

    struct LFNCustomInstanceDataLibrary
    {
        static constexpr std::string_view Name = "LFNCustomInstanceDataLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct LFNEditorDataComponent
    {
        static constexpr std::string_view Name = "LFNEditorDataComponent";
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

}
