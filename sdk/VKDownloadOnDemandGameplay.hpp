#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::VKDownloadOnDemandGameplay
{
    struct DownloadOnDemandComponent
    {
        static constexpr std::string_view Name = "DownloadOnDemandComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ControllerComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Plot = 0x228;
            static constexpr std::uintptr_t UserOwnedProjects = 0x230;
            static constexpr std::uintptr_t ShelvedContents = 0x240;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Plot", 0x228, "ObjectProperty"},
            {"UserOwnedProjects", 0x230, "ArrayProperty"},
            {"ShelvedContents", 0x240, "ArrayProperty"},
        }};
    };

    struct DownloadOnDemandPlot
    {
        static constexpr std::string_view Name = "DownloadOnDemandPlot";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ActiveProjects = 0xA0;
            static constexpr std::uintptr_t PendingProjects = 0xB0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"ActiveProjects", 0xA0, "ArrayProperty"},
            {"PendingProjects", 0xB0, "ArrayProperty"},
        }};
    };

    struct DownloadOnDemandProject
    {
        static constexpr std::string_view Name = "DownloadOnDemandProject";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Descriptor = 0xB8;
            static constexpr std::uintptr_t Contents = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Descriptor", 0xB8, "ObjectProperty"},
            {"Contents", 0xC0, "MapProperty"},
        }};
    };

    struct DownloadOnDemandProjectContent
    {
        static constexpr std::string_view Name = "DownloadOnDemandProjectContent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t ContentItemDefinitions = 0x70;
            static constexpr std::uintptr_t ContentSoftObjectPaths = 0x80;
            static constexpr std::uintptr_t LoadFailedContentObjectPaths = 0x90;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"ContentItemDefinitions", 0x70, "ArrayProperty"},
            {"ContentSoftObjectPaths", 0x80, "ArrayProperty"},
            {"LoadFailedContentObjectPaths", 0x90, "ArrayProperty"},
        }};
    };

    struct DownloadOnDemandProjectDescriptor
    {
        static constexpr std::string_view Name = "DownloadOnDemandProjectDescriptor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Image = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Image", 0x70, "ObjectProperty"},
        }};
    };

    struct DownloadOnDemandProjectImage
    {
        static constexpr std::string_view Name = "DownloadOnDemandProjectImage";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PreviewTexture = 0x58;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"PreviewTexture", 0x58, "ObjectProperty"},
        }};
    };

}
