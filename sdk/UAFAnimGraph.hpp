#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::UAFAnimGraph
{
    struct AnimNextAnimGraphSettings
    {
        static constexpr std::string_view Name = "AnimNextAnimGraphSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct AnimNextSkeletalMeshComponentLibrary
    {
        static constexpr std::string_view Name = "AnimNextSkeletalMeshComponentLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct InjectionCallbackProxy
    {
        static constexpr std::string_view Name = "InjectionCallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "CancellableAsyncAction";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCompleted = 0x30;
            static constexpr std::uintptr_t OnBlendOut = 0x40;
            static constexpr std::uintptr_t OnInterrupted = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnCompleted", 0x30, "MulticastInlineDelegateProperty"},
            {"OnBlendOut", 0x40, "MulticastInlineDelegateProperty"},
            {"OnInterrupted", 0x50, "MulticastInlineDelegateProperty"},
        }};
    };

    struct PlayAnimCallbackProxy
    {
        static constexpr std::string_view Name = "PlayAnimCallbackProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t OnCompleted = 0x28;
            static constexpr std::uintptr_t OnBlendOut = 0x38;
            static constexpr std::uintptr_t OnInterrupted = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"OnCompleted", 0x28, "MulticastInlineDelegateProperty"},
            {"OnBlendOut", 0x38, "MulticastInlineDelegateProperty"},
            {"OnInterrupted", 0x48, "MulticastInlineDelegateProperty"},
        }};
    };

    struct PostProcessAnimationUserAssetData
    {
        static constexpr std::string_view Name = "PostProcessAnimationUserAssetData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "AssetUserData";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimationAsset = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"AnimationAsset", 0x28, "ObjectProperty"},
        }};
    };

    struct UAFAnimGraph
    {
        static constexpr std::string_view Name = "UAFAnimGraph";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "UAFSharedVariables";
        struct Offsets
        {
            static constexpr std::uintptr_t ExecuteDefinition = 0x5A0;
            static constexpr std::uintptr_t EntryPoints = 0x5C8;
            static constexpr std::uintptr_t GraphReferencedObjects = 0x608;
            static constexpr std::uintptr_t GraphReferencedSoftObjects = 0x618;
            static constexpr std::uintptr_t DefaultEntryPoint = 0x628;
            static constexpr std::uintptr_t DefaultState = 0x630;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"ExecuteDefinition", 0x5A0, "StructProperty"},
            {"EntryPoints", 0x5C8, "ArrayProperty"},
            {"GraphReferencedObjects", 0x608, "ArrayProperty"},
            {"GraphReferencedSoftObjects", 0x618, "ArrayProperty"},
            {"DefaultEntryPoint", 0x628, "NameProperty"},
            {"DefaultState", 0x630, "StructProperty"},
        }};
    };

    struct UAFInjectionLibrary
    {
        static constexpr std::string_view Name = "UAFInjectionLibrary";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "BlueprintFunctionLibrary";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
