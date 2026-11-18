#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::LiveLinkMovieScene
{
    struct MovieSceneLiveLinkSection
    {
        static constexpr std::string_view Name = "MovieSceneLiveLinkSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneSection";
        struct Offsets
        {
            static constexpr std::uintptr_t SubjectPreset = 0x140;
            static constexpr std::uintptr_t ChannelMask = 0x178;
            static constexpr std::uintptr_t Subsections = 0x188;
            static constexpr std::uintptr_t SubjectName = 0x1A8;
            static constexpr std::uintptr_t TemplateToPush = 0x1B0;
            static constexpr std::uintptr_t RefSkeleton = 0x200;
            static constexpr std::uintptr_t CurveNames = 0x220;
            static constexpr std::uintptr_t PropertyFloatChannels = 0x230;
        };

        inline static constexpr std::array<PropertyInfo, 8> Properties{{
            {"SubjectPreset", 0x140, "StructProperty"},
            {"ChannelMask", 0x178, "ArrayProperty"},
            {"Subsections", 0x188, "ArrayProperty"},
            {"SubjectName", 0x1A8, "NameProperty"},
            {"TemplateToPush", 0x1B0, "StructProperty"},
            {"RefSkeleton", 0x200, "StructProperty"},
            {"CurveNames", 0x220, "ArrayProperty"},
            {"PropertyFloatChannels", 0x230, "ArrayProperty"},
        }};
    };

    struct MovieSceneLiveLinkSubSection
    {
        static constexpr std::string_view Name = "MovieSceneLiveLinkSubSection";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t SubSectionData = 0x28;
            static constexpr std::uintptr_t SubjectRole = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SubSectionData", 0x28, "StructProperty"},
            {"SubjectRole", 0x38, "ClassProperty"},
        }};
    };

    struct MovieSceneLiveLinkSubSectionAnimation
    {
        static constexpr std::string_view Name = "MovieSceneLiveLinkSubSectionAnimation";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneLiveLinkSubSection";
        struct Offsets
        {
            static constexpr std::uintptr_t SubSectionData = 0x28;
            static constexpr std::uintptr_t SubjectRole = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SubSectionData", 0x28, "StructProperty"},
            {"SubjectRole", 0x38, "ClassProperty"},
        }};
    };

    struct MovieSceneLiveLinkSubSectionBasicRole
    {
        static constexpr std::string_view Name = "MovieSceneLiveLinkSubSectionBasicRole";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneLiveLinkSubSection";
        struct Offsets
        {
            static constexpr std::uintptr_t SubSectionData = 0x28;
            static constexpr std::uintptr_t SubjectRole = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SubSectionData", 0x28, "StructProperty"},
            {"SubjectRole", 0x38, "ClassProperty"},
        }};
    };

    struct MovieSceneLiveLinkSubSectionProperties
    {
        static constexpr std::string_view Name = "MovieSceneLiveLinkSubSectionProperties";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieSceneLiveLinkSubSection";
        struct Offsets
        {
            static constexpr std::uintptr_t SubSectionData = 0x28;
            static constexpr std::uintptr_t SubjectRole = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SubSectionData", 0x28, "StructProperty"},
            {"SubjectRole", 0x38, "ClassProperty"},
        }};
    };

    struct MovieSceneLiveLinkTrack
    {
        static constexpr std::string_view Name = "MovieSceneLiveLinkTrack";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "MovieScenePropertyTrack";
        struct Offsets
        {
            static constexpr std::uintptr_t TrackRole = 0x128;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"TrackRole", 0x128, "ClassProperty"},
        }};
    };

}
