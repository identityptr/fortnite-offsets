#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::TakeTrackRecorders
{
    struct MovieScene3DAttachTrackRecorder
    {
        static constexpr std::string_view Name = "MovieScene3DAttachTrackRecorder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTrackRecorder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieScene3DTransformTrackRecorder
    {
        static constexpr std::string_view Name = "MovieScene3DTransformTrackRecorder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTrackRecorder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneActorReferenceTrackRecorder
    {
        static constexpr std::string_view Name = "MovieSceneActorReferenceTrackRecorder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTrackRecorder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneAnimationTrackRecorder
    {
        static constexpr std::string_view Name = "MovieSceneAnimationTrackRecorder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTrackRecorder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneAnimationTrackRecorderEditorSettings
    {
        static constexpr std::string_view Name = "MovieSceneAnimationTrackRecorderEditorSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTrackRecorderSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimationTrackName = 0x28;
            static constexpr std::uintptr_t AnimationAssetName = 0x38;
            static constexpr std::uintptr_t AnimationSubDirectory = 0x48;
            static constexpr std::uintptr_t InterpMode = 0x58;
            static constexpr std::uintptr_t TangentMode = 0x59;
            static constexpr std::uintptr_t bRemoveRootAnimation = 0x5A;
            static constexpr std::uintptr_t bSetRetargetSourceAsset = 0x5B;
            static constexpr std::uintptr_t TimecodeBoneMethod = 0x5C;
            static constexpr std::uintptr_t bHandleSkeletonChanges = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"AnimationTrackName", 0x28, "TextProperty"},
            {"AnimationAssetName", 0x38, "StrProperty"},
            {"AnimationSubDirectory", 0x48, "StrProperty"},
            {"InterpMode", 0x58, "ByteProperty"},
            {"TangentMode", 0x59, "ByteProperty"},
            {"bRemoveRootAnimation", 0x5A, "BoolProperty"},
            {"bSetRetargetSourceAsset", 0x5B, "BoolProperty"},
            {"TimecodeBoneMethod", 0x5C, "StructProperty"},
            {"bHandleSkeletonChanges", 0x64, "BoolProperty"},
        }};
    };

    struct MovieSceneAnimationTrackRecorderSettings
    {
        static constexpr std::string_view Name = "MovieSceneAnimationTrackRecorderSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneAnimationTrackRecorderEditorSettings";
        struct Offsets
        {
            static constexpr std::uintptr_t AnimationTrackName = 0x28;
            static constexpr std::uintptr_t AnimationAssetName = 0x38;
            static constexpr std::uintptr_t AnimationSubDirectory = 0x48;
            static constexpr std::uintptr_t InterpMode = 0x58;
            static constexpr std::uintptr_t TangentMode = 0x59;
            static constexpr std::uintptr_t bRemoveRootAnimation = 0x5A;
            static constexpr std::uintptr_t bSetRetargetSourceAsset = 0x5B;
            static constexpr std::uintptr_t TimecodeBoneMethod = 0x5C;
            static constexpr std::uintptr_t bHandleSkeletonChanges = 0x64;
        };

        inline static constexpr std::array<PropertyInfo, 9> Properties{{
            {"AnimationTrackName", 0x28, "TextProperty"},
            {"AnimationAssetName", 0x38, "StrProperty"},
            {"AnimationSubDirectory", 0x48, "StrProperty"},
            {"InterpMode", 0x58, "ByteProperty"},
            {"TangentMode", 0x59, "ByteProperty"},
            {"bRemoveRootAnimation", 0x5A, "BoolProperty"},
            {"bSetRetargetSourceAsset", 0x5B, "BoolProperty"},
            {"TimecodeBoneMethod", 0x5C, "StructProperty"},
            {"bHandleSkeletonChanges", 0x64, "BoolProperty"},
        }};
    };

    struct MovieSceneCVarTrackRecorder
    {
        static constexpr std::string_view Name = "MovieSceneCVarTrackRecorder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTrackRecorder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieScenePropertyTrackRecorder
    {
        static constexpr std::string_view Name = "MovieScenePropertyTrackRecorder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTrackRecorder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneSpawnTrackRecorder
    {
        static constexpr std::string_view Name = "MovieSceneSpawnTrackRecorder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTrackRecorder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneTrackRecorder
    {
        static constexpr std::string_view Name = "MovieSceneTrackRecorder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneTrackRecorderSettings
    {
        static constexpr std::string_view Name = "MovieSceneTrackRecorderSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct MovieSceneVisibilityTrackRecorder
    {
        static constexpr std::string_view Name = "MovieSceneVisibilityTrackRecorder";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneTrackRecorder";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

}
