#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LiveLinkComponents
{
    struct LiveLinkCharacterController
    {
        static constexpr std::string_view Name = "LiveLinkCharacterController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkTransformController";
        struct Offsets
        {
            static constexpr std::uintptr_t TransformData = 0x60;
            static constexpr std::uintptr_t OffsetTransform = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TransformData", 0x60, "StructProperty"},
            {"OffsetTransform", 0x70, "StructProperty"},
        }};
    };

    struct LiveLinkComponentController
    {
        static constexpr std::string_view Name = "LiveLinkComponentController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t SubjectRepresentation = 0xC0;
            static constexpr std::uintptr_t ControllerMap = 0xD0;
            static constexpr std::uintptr_t bUpdateInEditor = 0xE0;
            static constexpr std::uintptr_t OnLiveLinkUpdated = 0xE8;
            static constexpr std::uintptr_t OnControllerMapUpdatedDelegate = 0xF8;
            static constexpr std::uintptr_t bDisableEvaluateLiveLinkWhenSpawnable = 0x108;
            static constexpr std::uintptr_t bEvaluateLiveLink = 0x109;
            static constexpr std::uintptr_t bUpdateInPreviewEditor = 0x10A;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SubjectRepresentation", 0xC0, "StructProperty"},
            {"ControllerMap", 0xD0, "MapProperty"},
            {"bUpdateInEditor", 0xE0, "BoolProperty"},
            {"OnLiveLinkUpdated", 0xE8, "MulticastInlineDelegateProperty"},
            {"OnControllerMapUpdatedDelegate", 0xF8, "MulticastInlineDelegateProperty"},
            {"bDisableEvaluateLiveLinkWhenSpawnable", 0x108, "BoolProperty"},
            {"bEvaluateLiveLink", 0x109, "BoolProperty"},
            {"bUpdateInPreviewEditor", 0x10A, "BoolProperty"},
        }};
    };

    struct LiveLinkComponentSettings
    {
        static constexpr std::string_view Name = "LiveLinkComponentSettings";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultControllerForRole = 0x28;
            static constexpr std::uintptr_t bUpdateSubjectsImmediatelyInPIE = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"DefaultControllerForRole", 0x28, "MapProperty"},
            {"bUpdateSubjectsImmediatelyInPIE", 0x38, "BoolProperty"},
        }};
    };

    struct LiveLinkControllerBase
    {
        static constexpr std::string_view Name = "LiveLinkControllerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentPicker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ComponentPicker", 0x28, "StructProperty"},
        }};
    };

    struct LiveLinkLightController
    {
        static constexpr std::string_view Name = "LiveLinkLightController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkControllerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t ComponentPicker = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"ComponentPicker", 0x28, "StructProperty"},
        }};
    };

    struct LiveLinkTransformController
    {
        static constexpr std::string_view Name = "LiveLinkTransformController";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "LiveLinkControllerBase";
        struct Offsets
        {
            static constexpr std::uintptr_t TransformData = 0x60;
            static constexpr std::uintptr_t OffsetTransform = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"TransformData", 0x60, "StructProperty"},
            {"OffsetTransform", 0x70, "StructProperty"},
        }};
    };

}
