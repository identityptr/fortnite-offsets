#pragma once
#include "Types.hpp"
#include <array>
#include <cstdint>
#include <string_view>

namespace FN::SDK::NavigationSystem
{
    struct AbstractNavData
    {
        static constexpr std::string_view Name = "AbstractNavData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavigationData";
        struct Offsets
        {
            static constexpr std::uintptr_t RenderingComp = 0x280;
            static constexpr std::uintptr_t NavDataConfig = 0x288;
            static constexpr std::uintptr_t bAutoDestroyWhenNoNavigation = 0x2F8;
            static constexpr std::uintptr_t bCanBeMainNavData = 0x2F8;
            static constexpr std::uintptr_t bCanSpawnOnRebuild = 0x2F8;
            static constexpr std::uintptr_t bEnableDrawing = 0x2F8;
            static constexpr std::uintptr_t bForceRebuildOnLoad = 0x2F8;
            static constexpr std::uintptr_t bRebuildAtRuntime = 0x2F8;
            static constexpr std::uintptr_t RuntimeGeneration = 0x2FC;
            static constexpr std::uintptr_t ObservedPathsTickInterval = 0x304;
            static constexpr std::uintptr_t DataVersion = 0x308;
            static constexpr std::uintptr_t SupportedAreas = 0x3E0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"RenderingComp", 0x280, "ObjectProperty"},
            {"NavDataConfig", 0x288, "StructProperty"},
            {"bAutoDestroyWhenNoNavigation", 0x2F8, "BoolProperty"},
            {"bCanBeMainNavData", 0x2F8, "BoolProperty"},
            {"bCanSpawnOnRebuild", 0x2F8, "BoolProperty"},
            {"bEnableDrawing", 0x2F8, "BoolProperty"},
            {"bForceRebuildOnLoad", 0x2F8, "BoolProperty"},
            {"bRebuildAtRuntime", 0x2F8, "BoolProperty"},
            {"RuntimeGeneration", 0x2FC, "EnumProperty"},
            {"ObservedPathsTickInterval", 0x304, "FloatProperty"},
            {"DataVersion", 0x308, "UInt32Property"},
            {"SupportedAreas", 0x3E0, "ArrayProperty"},
        }};
    };

    struct BaseGeneratedNavLinksProxy
    {
        static constexpr std::string_view Name = "BaseGeneratedNavLinksProxy";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t LinkProxyId = 0x30;
            static constexpr std::uintptr_t Owner = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"LinkProxyId", 0x30, "StructProperty"},
            {"Owner", 0x38, "ObjectProperty"},
        }};
    };

    struct CrowdManagerBase
    {
        static constexpr std::string_view Name = "CrowdManagerBase";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NavArea
    {
        static constexpr std::string_view Name = "NavArea";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavAreaBase";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultCost = 0x30;
            static constexpr std::uintptr_t FixedAreaEnteringCost = 0x34;
            static constexpr std::uintptr_t DrawColor = 0x38;
            static constexpr std::uintptr_t SupportedAgents = 0x3C;
            static constexpr std::uintptr_t bSupportsAgent0 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent1 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent2 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent3 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent4 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent5 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent6 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent7 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent10 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent11 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent12 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent13 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent14 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent15 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent8 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent9 = 0x41;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"DefaultCost", 0x30, "FloatProperty"},
            {"FixedAreaEnteringCost", 0x34, "FloatProperty"},
            {"DrawColor", 0x38, "StructProperty"},
            {"SupportedAgents", 0x3C, "StructProperty"},
            {"bSupportsAgent0", 0x40, "BoolProperty"},
            {"bSupportsAgent1", 0x40, "BoolProperty"},
            {"bSupportsAgent2", 0x40, "BoolProperty"},
            {"bSupportsAgent3", 0x40, "BoolProperty"},
            {"bSupportsAgent4", 0x40, "BoolProperty"},
            {"bSupportsAgent5", 0x40, "BoolProperty"},
            {"bSupportsAgent6", 0x40, "BoolProperty"},
            {"bSupportsAgent7", 0x40, "BoolProperty"},
            {"bSupportsAgent10", 0x41, "BoolProperty"},
            {"bSupportsAgent11", 0x41, "BoolProperty"},
            {"bSupportsAgent12", 0x41, "BoolProperty"},
            {"bSupportsAgent13", 0x41, "BoolProperty"},
            {"bSupportsAgent14", 0x41, "BoolProperty"},
            {"bSupportsAgent15", 0x41, "BoolProperty"},
            {"bSupportsAgent8", 0x41, "BoolProperty"},
            {"bSupportsAgent9", 0x41, "BoolProperty"},
        }};
    };

    struct NavAreaMeta
    {
        static constexpr std::string_view Name = "NavAreaMeta";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultCost = 0x30;
            static constexpr std::uintptr_t FixedAreaEnteringCost = 0x34;
            static constexpr std::uintptr_t DrawColor = 0x38;
            static constexpr std::uintptr_t SupportedAgents = 0x3C;
            static constexpr std::uintptr_t bSupportsAgent0 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent1 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent2 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent3 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent4 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent5 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent6 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent7 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent10 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent11 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent12 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent13 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent14 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent15 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent8 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent9 = 0x41;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"DefaultCost", 0x30, "FloatProperty"},
            {"FixedAreaEnteringCost", 0x34, "FloatProperty"},
            {"DrawColor", 0x38, "StructProperty"},
            {"SupportedAgents", 0x3C, "StructProperty"},
            {"bSupportsAgent0", 0x40, "BoolProperty"},
            {"bSupportsAgent1", 0x40, "BoolProperty"},
            {"bSupportsAgent2", 0x40, "BoolProperty"},
            {"bSupportsAgent3", 0x40, "BoolProperty"},
            {"bSupportsAgent4", 0x40, "BoolProperty"},
            {"bSupportsAgent5", 0x40, "BoolProperty"},
            {"bSupportsAgent6", 0x40, "BoolProperty"},
            {"bSupportsAgent7", 0x40, "BoolProperty"},
            {"bSupportsAgent10", 0x41, "BoolProperty"},
            {"bSupportsAgent11", 0x41, "BoolProperty"},
            {"bSupportsAgent12", 0x41, "BoolProperty"},
            {"bSupportsAgent13", 0x41, "BoolProperty"},
            {"bSupportsAgent14", 0x41, "BoolProperty"},
            {"bSupportsAgent15", 0x41, "BoolProperty"},
            {"bSupportsAgent8", 0x41, "BoolProperty"},
            {"bSupportsAgent9", 0x41, "BoolProperty"},
        }};
    };

    struct NavAreaMeta_SwitchByAgent
    {
        static constexpr std::string_view Name = "NavAreaMeta_SwitchByAgent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavAreaMeta";
        struct Offsets
        {
            static constexpr std::uintptr_t Agent0Area = 0x48;
            static constexpr std::uintptr_t Agent1Area = 0x50;
            static constexpr std::uintptr_t Agent2Area = 0x58;
            static constexpr std::uintptr_t Agent3Area = 0x60;
            static constexpr std::uintptr_t Agent4Area = 0x68;
            static constexpr std::uintptr_t Agent5Area = 0x70;
            static constexpr std::uintptr_t Agent6Area = 0x78;
            static constexpr std::uintptr_t Agent7Area = 0x80;
            static constexpr std::uintptr_t Agent8Area = 0x88;
            static constexpr std::uintptr_t Agent9Area = 0x90;
            static constexpr std::uintptr_t Agent10Area = 0x98;
            static constexpr std::uintptr_t Agent11Area = 0xA0;
            static constexpr std::uintptr_t Agent12Area = 0xA8;
            static constexpr std::uintptr_t Agent13Area = 0xB0;
            static constexpr std::uintptr_t Agent14Area = 0xB8;
            static constexpr std::uintptr_t Agent15Area = 0xC0;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"Agent0Area", 0x48, "ClassProperty"},
            {"Agent1Area", 0x50, "ClassProperty"},
            {"Agent2Area", 0x58, "ClassProperty"},
            {"Agent3Area", 0x60, "ClassProperty"},
            {"Agent4Area", 0x68, "ClassProperty"},
            {"Agent5Area", 0x70, "ClassProperty"},
            {"Agent6Area", 0x78, "ClassProperty"},
            {"Agent7Area", 0x80, "ClassProperty"},
            {"Agent8Area", 0x88, "ClassProperty"},
            {"Agent9Area", 0x90, "ClassProperty"},
            {"Agent10Area", 0x98, "ClassProperty"},
            {"Agent11Area", 0xA0, "ClassProperty"},
            {"Agent12Area", 0xA8, "ClassProperty"},
            {"Agent13Area", 0xB0, "ClassProperty"},
            {"Agent14Area", 0xB8, "ClassProperty"},
            {"Agent15Area", 0xC0, "ClassProperty"},
        }};
    };

    struct NavArea_Default
    {
        static constexpr std::string_view Name = "NavArea_Default";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultCost = 0x30;
            static constexpr std::uintptr_t FixedAreaEnteringCost = 0x34;
            static constexpr std::uintptr_t DrawColor = 0x38;
            static constexpr std::uintptr_t SupportedAgents = 0x3C;
            static constexpr std::uintptr_t bSupportsAgent0 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent1 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent2 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent3 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent4 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent5 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent6 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent7 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent10 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent11 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent12 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent13 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent14 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent15 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent8 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent9 = 0x41;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"DefaultCost", 0x30, "FloatProperty"},
            {"FixedAreaEnteringCost", 0x34, "FloatProperty"},
            {"DrawColor", 0x38, "StructProperty"},
            {"SupportedAgents", 0x3C, "StructProperty"},
            {"bSupportsAgent0", 0x40, "BoolProperty"},
            {"bSupportsAgent1", 0x40, "BoolProperty"},
            {"bSupportsAgent2", 0x40, "BoolProperty"},
            {"bSupportsAgent3", 0x40, "BoolProperty"},
            {"bSupportsAgent4", 0x40, "BoolProperty"},
            {"bSupportsAgent5", 0x40, "BoolProperty"},
            {"bSupportsAgent6", 0x40, "BoolProperty"},
            {"bSupportsAgent7", 0x40, "BoolProperty"},
            {"bSupportsAgent10", 0x41, "BoolProperty"},
            {"bSupportsAgent11", 0x41, "BoolProperty"},
            {"bSupportsAgent12", 0x41, "BoolProperty"},
            {"bSupportsAgent13", 0x41, "BoolProperty"},
            {"bSupportsAgent14", 0x41, "BoolProperty"},
            {"bSupportsAgent15", 0x41, "BoolProperty"},
            {"bSupportsAgent8", 0x41, "BoolProperty"},
            {"bSupportsAgent9", 0x41, "BoolProperty"},
        }};
    };

    struct NavArea_LowHeight
    {
        static constexpr std::string_view Name = "NavArea_LowHeight";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultCost = 0x30;
            static constexpr std::uintptr_t FixedAreaEnteringCost = 0x34;
            static constexpr std::uintptr_t DrawColor = 0x38;
            static constexpr std::uintptr_t SupportedAgents = 0x3C;
            static constexpr std::uintptr_t bSupportsAgent0 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent1 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent2 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent3 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent4 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent5 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent6 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent7 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent10 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent11 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent12 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent13 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent14 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent15 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent8 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent9 = 0x41;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"DefaultCost", 0x30, "FloatProperty"},
            {"FixedAreaEnteringCost", 0x34, "FloatProperty"},
            {"DrawColor", 0x38, "StructProperty"},
            {"SupportedAgents", 0x3C, "StructProperty"},
            {"bSupportsAgent0", 0x40, "BoolProperty"},
            {"bSupportsAgent1", 0x40, "BoolProperty"},
            {"bSupportsAgent2", 0x40, "BoolProperty"},
            {"bSupportsAgent3", 0x40, "BoolProperty"},
            {"bSupportsAgent4", 0x40, "BoolProperty"},
            {"bSupportsAgent5", 0x40, "BoolProperty"},
            {"bSupportsAgent6", 0x40, "BoolProperty"},
            {"bSupportsAgent7", 0x40, "BoolProperty"},
            {"bSupportsAgent10", 0x41, "BoolProperty"},
            {"bSupportsAgent11", 0x41, "BoolProperty"},
            {"bSupportsAgent12", 0x41, "BoolProperty"},
            {"bSupportsAgent13", 0x41, "BoolProperty"},
            {"bSupportsAgent14", 0x41, "BoolProperty"},
            {"bSupportsAgent15", 0x41, "BoolProperty"},
            {"bSupportsAgent8", 0x41, "BoolProperty"},
            {"bSupportsAgent9", 0x41, "BoolProperty"},
        }};
    };

    struct NavArea_Null
    {
        static constexpr std::string_view Name = "NavArea_Null";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultCost = 0x30;
            static constexpr std::uintptr_t FixedAreaEnteringCost = 0x34;
            static constexpr std::uintptr_t DrawColor = 0x38;
            static constexpr std::uintptr_t SupportedAgents = 0x3C;
            static constexpr std::uintptr_t bSupportsAgent0 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent1 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent2 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent3 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent4 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent5 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent6 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent7 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent10 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent11 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent12 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent13 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent14 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent15 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent8 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent9 = 0x41;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"DefaultCost", 0x30, "FloatProperty"},
            {"FixedAreaEnteringCost", 0x34, "FloatProperty"},
            {"DrawColor", 0x38, "StructProperty"},
            {"SupportedAgents", 0x3C, "StructProperty"},
            {"bSupportsAgent0", 0x40, "BoolProperty"},
            {"bSupportsAgent1", 0x40, "BoolProperty"},
            {"bSupportsAgent2", 0x40, "BoolProperty"},
            {"bSupportsAgent3", 0x40, "BoolProperty"},
            {"bSupportsAgent4", 0x40, "BoolProperty"},
            {"bSupportsAgent5", 0x40, "BoolProperty"},
            {"bSupportsAgent6", 0x40, "BoolProperty"},
            {"bSupportsAgent7", 0x40, "BoolProperty"},
            {"bSupportsAgent10", 0x41, "BoolProperty"},
            {"bSupportsAgent11", 0x41, "BoolProperty"},
            {"bSupportsAgent12", 0x41, "BoolProperty"},
            {"bSupportsAgent13", 0x41, "BoolProperty"},
            {"bSupportsAgent14", 0x41, "BoolProperty"},
            {"bSupportsAgent15", 0x41, "BoolProperty"},
            {"bSupportsAgent8", 0x41, "BoolProperty"},
            {"bSupportsAgent9", 0x41, "BoolProperty"},
        }};
    };

    struct NavArea_Obstacle
    {
        static constexpr std::string_view Name = "NavArea_Obstacle";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavArea";
        struct Offsets
        {
            static constexpr std::uintptr_t DefaultCost = 0x30;
            static constexpr std::uintptr_t FixedAreaEnteringCost = 0x34;
            static constexpr std::uintptr_t DrawColor = 0x38;
            static constexpr std::uintptr_t SupportedAgents = 0x3C;
            static constexpr std::uintptr_t bSupportsAgent0 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent1 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent2 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent3 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent4 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent5 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent6 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent7 = 0x40;
            static constexpr std::uintptr_t bSupportsAgent10 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent11 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent12 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent13 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent14 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent15 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent8 = 0x41;
            static constexpr std::uintptr_t bSupportsAgent9 = 0x41;
        };

        inline static constexpr std::array<PropertyInfo, 20> Properties{{
            {"DefaultCost", 0x30, "FloatProperty"},
            {"FixedAreaEnteringCost", 0x34, "FloatProperty"},
            {"DrawColor", 0x38, "StructProperty"},
            {"SupportedAgents", 0x3C, "StructProperty"},
            {"bSupportsAgent0", 0x40, "BoolProperty"},
            {"bSupportsAgent1", 0x40, "BoolProperty"},
            {"bSupportsAgent2", 0x40, "BoolProperty"},
            {"bSupportsAgent3", 0x40, "BoolProperty"},
            {"bSupportsAgent4", 0x40, "BoolProperty"},
            {"bSupportsAgent5", 0x40, "BoolProperty"},
            {"bSupportsAgent6", 0x40, "BoolProperty"},
            {"bSupportsAgent7", 0x40, "BoolProperty"},
            {"bSupportsAgent10", 0x41, "BoolProperty"},
            {"bSupportsAgent11", 0x41, "BoolProperty"},
            {"bSupportsAgent12", 0x41, "BoolProperty"},
            {"bSupportsAgent13", 0x41, "BoolProperty"},
            {"bSupportsAgent14", 0x41, "BoolProperty"},
            {"bSupportsAgent15", 0x41, "BoolProperty"},
            {"bSupportsAgent8", 0x41, "BoolProperty"},
            {"bSupportsAgent9", 0x41, "BoolProperty"},
        }};
    };

    struct NavCollision
    {
        static constexpr std::string_view Name = "NavCollision";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavCollisionBase";
        struct Offsets
        {
            static constexpr std::uintptr_t CylinderCollision = 0xB8;
            static constexpr std::uintptr_t BoxCollision = 0xC8;
            static constexpr std::uintptr_t AreaClass = 0xD8;
            static constexpr std::uintptr_t bCreateOnClient = 0xE0;
            static constexpr std::uintptr_t bGatherConvexGeometry = 0xE0;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"CylinderCollision", 0xB8, "ArrayProperty"},
            {"BoxCollision", 0xC8, "ArrayProperty"},
            {"AreaClass", 0xD8, "ClassProperty"},
            {"bCreateOnClient", 0xE0, "BoolProperty"},
            {"bGatherConvexGeometry", 0xE0, "BoolProperty"},
        }};
    };

    struct NavCollisionBox
    {
        static constexpr std::string_view Name = "NavCollisionBox";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Offset = 0x0;
            static constexpr std::uintptr_t Extent = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Offset", 0x0, "StructProperty"},
            {"Extent", 0x18, "StructProperty"},
        }};
    };

    struct NavCollisionCylinder
    {
        static constexpr std::string_view Name = "NavCollisionCylinder";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Offset = 0x0;
            static constexpr std::uintptr_t Radius = 0x18;
            static constexpr std::uintptr_t Height = 0x1C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Offset", 0x0, "StructProperty"},
            {"Radius", 0x18, "FloatProperty"},
            {"Height", 0x1C, "FloatProperty"},
        }};
    };

    struct NavGraphEdge
    {
        static constexpr std::string_view Name = "NavGraphEdge";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NavGraphNode
    {
        static constexpr std::string_view Name = "NavGraphNode";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t Owner = 0x0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Owner", 0x0, "ObjectProperty"},
        }};
    };

    struct NavLinkComponent
    {
        static constexpr std::string_view Name = "NavLinkComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Links = 0x568;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"Links", 0x568, "ArrayProperty"},
        }};
    };

    struct NavLinkCustomComponent
    {
        static constexpr std::string_view Name = "NavLinkCustomComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavRelevantComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t NavLinkUserId = 0x118;
            static constexpr std::uintptr_t CustomLinkId = 0x120;
            static constexpr std::uintptr_t AuxiliaryCustomLinkId = 0x128;
            static constexpr std::uintptr_t EnabledAreaClass = 0x130;
            static constexpr std::uintptr_t DisabledAreaClass = 0x138;
            static constexpr std::uintptr_t SupportedAgents = 0x140;
            static constexpr std::uintptr_t LinkRelativeStart = 0x148;
            static constexpr std::uintptr_t LinkRelativeEnd = 0x160;
            static constexpr std::uintptr_t LinkDirection = 0x178;
            static constexpr std::uintptr_t bCreateBoxObstacle = 0x17C;
            static constexpr std::uintptr_t bLinkEnabled = 0x17C;
            static constexpr std::uintptr_t bNotifyWhenDisabled = 0x17C;
            static constexpr std::uintptr_t bNotifyWhenEnabled = 0x17C;
            static constexpr std::uintptr_t ObstacleOffset = 0x180;
            static constexpr std::uintptr_t ObstacleExtent = 0x198;
            static constexpr std::uintptr_t ObstacleAreaClass = 0x1B0;
            static constexpr std::uintptr_t BroadcastRadius = 0x1B8;
            static constexpr std::uintptr_t BroadcastInterval = 0x1BC;
            static constexpr std::uintptr_t BroadcastChannel = 0x1C0;
        };

        inline static constexpr std::array<PropertyInfo, 19> Properties{{
            {"NavLinkUserId", 0x118, "UInt32Property"},
            {"CustomLinkId", 0x120, "StructProperty"},
            {"AuxiliaryCustomLinkId", 0x128, "StructProperty"},
            {"EnabledAreaClass", 0x130, "ClassProperty"},
            {"DisabledAreaClass", 0x138, "ClassProperty"},
            {"SupportedAgents", 0x140, "StructProperty"},
            {"LinkRelativeStart", 0x148, "StructProperty"},
            {"LinkRelativeEnd", 0x160, "StructProperty"},
            {"LinkDirection", 0x178, "ByteProperty"},
            {"bCreateBoxObstacle", 0x17C, "BoolProperty"},
            {"bLinkEnabled", 0x17C, "BoolProperty"},
            {"bNotifyWhenDisabled", 0x17C, "BoolProperty"},
            {"bNotifyWhenEnabled", 0x17C, "BoolProperty"},
            {"ObstacleOffset", 0x180, "StructProperty"},
            {"ObstacleExtent", 0x198, "StructProperty"},
            {"ObstacleAreaClass", 0x1B0, "ClassProperty"},
            {"BroadcastRadius", 0x1B8, "FloatProperty"},
            {"BroadcastInterval", 0x1BC, "FloatProperty"},
            {"BroadcastChannel", 0x1C0, "ByteProperty"},
        }};
    };

    struct NavLinkCustomInstanceData
    {
        static constexpr std::string_view Name = "NavLinkCustomInstanceData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "ActorComponentInstanceData";
        struct Offsets
        {
            static constexpr std::uintptr_t CustomLinkId = 0x68;
            static constexpr std::uintptr_t AuxiliaryCustomLinkId = 0x70;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"CustomLinkId", 0x68, "StructProperty"},
            {"AuxiliaryCustomLinkId", 0x70, "StructProperty"},
        }};
    };

    struct NavLinkCustomInterface
    {
        static constexpr std::string_view Name = "NavLinkCustomInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NavLinkGenerationJumpConfig
    {
        static constexpr std::string_view Name = "NavLinkGenerationJumpConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
            static constexpr std::uintptr_t Name = 0x4;
            static constexpr std::uintptr_t JumpLength = 0x8;
            static constexpr std::uintptr_t JumpDistanceFromEdge = 0xC;
            static constexpr std::uintptr_t JumpMaxDepth = 0x10;
            static constexpr std::uintptr_t JumpHeight = 0x14;
            static constexpr std::uintptr_t JumpEndsHeightTolerance = 0x18;
            static constexpr std::uintptr_t SamplingSeparationFactor = 0x1C;
            static constexpr std::uintptr_t FilterDistanceThreshold = 0x20;
            static constexpr std::uintptr_t LinkBuilderFlags = 0x24;
            static constexpr std::uintptr_t DownDirectionAreaClass = 0x28;
            static constexpr std::uintptr_t UpDirectionAreaClass = 0x30;
            static constexpr std::uintptr_t LinkProxyClass = 0x38;
            static constexpr std::uintptr_t LinkProxyId = 0x40;
            static constexpr std::uintptr_t LinkProxy = 0x48;
            static constexpr std::uintptr_t bLinkProxyRegistered = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
            {"Name", 0x4, "NameProperty"},
            {"JumpLength", 0x8, "FloatProperty"},
            {"JumpDistanceFromEdge", 0xC, "FloatProperty"},
            {"JumpMaxDepth", 0x10, "FloatProperty"},
            {"JumpHeight", 0x14, "FloatProperty"},
            {"JumpEndsHeightTolerance", 0x18, "FloatProperty"},
            {"SamplingSeparationFactor", 0x1C, "FloatProperty"},
            {"FilterDistanceThreshold", 0x20, "FloatProperty"},
            {"LinkBuilderFlags", 0x24, "UInt16Property"},
            {"DownDirectionAreaClass", 0x28, "ClassProperty"},
            {"UpDirectionAreaClass", 0x30, "ClassProperty"},
            {"LinkProxyClass", 0x38, "ClassProperty"},
            {"LinkProxyId", 0x40, "StructProperty"},
            {"LinkProxy", 0x48, "ObjectProperty"},
            {"bLinkProxyRegistered", 0x50, "BoolProperty"},
        }};
    };

    struct NavLinkGenerationJumpDownConfig
    {
        static constexpr std::string_view Name = "NavLinkGenerationJumpDownConfig";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
            static constexpr std::uintptr_t JumpLength = 0x4;
            static constexpr std::uintptr_t JumpDistanceFromEdge = 0x8;
            static constexpr std::uintptr_t JumpMaxDepth = 0xC;
            static constexpr std::uintptr_t JumpHeight = 0x10;
            static constexpr std::uintptr_t JumpEndsHeightTolerance = 0x14;
            static constexpr std::uintptr_t SamplingSeparationFactor = 0x18;
            static constexpr std::uintptr_t FilterDistanceThreshold = 0x1C;
            static constexpr std::uintptr_t LinkBuilderFlags = 0x20;
            static constexpr std::uintptr_t DownDirectionAreaClass = 0x28;
            static constexpr std::uintptr_t UpDirectionAreaClass = 0x30;
            static constexpr std::uintptr_t LinkProxyClass = 0x38;
            static constexpr std::uintptr_t LinkProxyId = 0x40;
            static constexpr std::uintptr_t LinkProxy = 0x48;
            static constexpr std::uintptr_t bLinkProxyRegistered = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 15> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
            {"JumpLength", 0x4, "FloatProperty"},
            {"JumpDistanceFromEdge", 0x8, "FloatProperty"},
            {"JumpMaxDepth", 0xC, "FloatProperty"},
            {"JumpHeight", 0x10, "FloatProperty"},
            {"JumpEndsHeightTolerance", 0x14, "FloatProperty"},
            {"SamplingSeparationFactor", 0x18, "FloatProperty"},
            {"FilterDistanceThreshold", 0x1C, "FloatProperty"},
            {"LinkBuilderFlags", 0x20, "UInt16Property"},
            {"DownDirectionAreaClass", 0x28, "ClassProperty"},
            {"UpDirectionAreaClass", 0x30, "ClassProperty"},
            {"LinkProxyClass", 0x38, "ClassProperty"},
            {"LinkProxyId", 0x40, "StructProperty"},
            {"LinkProxy", 0x48, "ObjectProperty"},
            {"bLinkProxyRegistered", 0x50, "BoolProperty"},
        }};
    };

    struct NavLinkHostInterface
    {
        static constexpr std::string_view Name = "NavLinkHostInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NavLinkRenderingComponent
    {
        static constexpr std::string_view Name = "NavLinkRenderingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "PrimitiveComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MinDrawDistance = 0x278;
            static constexpr std::uintptr_t LDMaxDrawDistance = 0x27C;
            static constexpr std::uintptr_t CachedMaxDrawDistance = 0x280;
            static constexpr std::uintptr_t DepthPriorityGroup = 0x284;
            static constexpr std::uintptr_t ViewOwnerDepthPriorityGroup = 0x285;
            static constexpr std::uintptr_t IndirectLightingCacheQuality = 0x286;
            static constexpr std::uintptr_t LightmapType = 0x287;
            static constexpr std::uintptr_t HLODBatchingPolicy = 0x288;
            static constexpr std::uintptr_t ShadowCacheInvalidationBehavior = 0x289;
            static constexpr std::uintptr_t bAlwaysCreatePhysicsState = 0x28A;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x28A;
            static constexpr std::uintptr_t bGenerateOverlapEvents = 0x28A;
            static constexpr std::uintptr_t bIsActorTextureStreamingBuiltData = 0x28A;
            static constexpr std::uintptr_t bIsValidTextureStreamingBuiltData = 0x28A;
            static constexpr std::uintptr_t bMultiBodyOverlap = 0x28A;
            static constexpr std::uintptr_t bNeverDistanceCull = 0x28A;
            static constexpr std::uintptr_t bAllowCullDistanceVolume = 0x28B;
            static constexpr std::uintptr_t bReturnMaterialOnMove = 0x28B;
            static constexpr std::uintptr_t bTraceComplexOnMove = 0x28B;
            static constexpr std::uintptr_t bUseViewOwnerDepthPriorityGroup = 0x28B;
            static constexpr std::uintptr_t bVisibleInRayTracing = 0x28B;
            static constexpr std::uintptr_t bVisibleInRealTimeSkyCaptures = 0x28B;
            static constexpr std::uintptr_t bVisibleInReflectionCaptures = 0x28B;
            static constexpr std::uintptr_t bVisibleInReflections = 0x28B;
            static constexpr std::uintptr_t bHoldout = 0x28C;
            static constexpr std::uintptr_t bOnlyOwnerSee = 0x28C;
            static constexpr std::uintptr_t bOwnerNoSee = 0x28C;
            static constexpr std::uintptr_t bReceivesDecals = 0x28C;
            static constexpr std::uintptr_t bRenderInDepthPass = 0x28C;
            static constexpr std::uintptr_t bRenderInMainPass = 0x28C;
            static constexpr std::uintptr_t bTreatAsBackgroundForOcclusion = 0x28C;
            static constexpr std::uintptr_t bUseAsOccluder = 0x28C;
            static constexpr std::uintptr_t CastShadow = 0x28D;
            static constexpr std::uintptr_t bAffectDynamicIndirectLighting = 0x28D;
            static constexpr std::uintptr_t bEmissiveLightSource = 0x28D;
            static constexpr std::uintptr_t bForceMipStreaming = 0x28D;
            static constexpr std::uintptr_t bHasPerInstanceHitProxies = 0x28D;
            static constexpr std::uintptr_t bSelectable = 0x28D;
            static constexpr std::uintptr_t bWantsEditorEffects = 0x28D;
            static constexpr std::uintptr_t bWantsSelectionOutline = 0x28D;
            static constexpr std::uintptr_t bAffectDistanceFieldLighting = 0x28E;
            static constexpr std::uintptr_t bAffectIndirectLightingWhileHidden = 0x28E;
            static constexpr std::uintptr_t bCastContactShadow = 0x28E;
            static constexpr std::uintptr_t bCastDynamicShadow = 0x28E;
            static constexpr std::uintptr_t bCastFarShadow = 0x28E;
            static constexpr std::uintptr_t bCastStaticShadow = 0x28E;
            static constexpr std::uintptr_t bCastVolumetricTranslucentShadow = 0x28E;
            static constexpr std::uintptr_t bSelfShadowOnly = 0x28E;
            static constexpr std::uintptr_t bCastCinematicShadow = 0x28F;
            static constexpr std::uintptr_t bCastHiddenShadow = 0x28F;
            static constexpr std::uintptr_t bCastInsetShadow = 0x28F;
            static constexpr std::uintptr_t bCastShadowAsTwoSided = 0x28F;
            static constexpr std::uintptr_t bExcludeFromLightAttachmentGroup = 0x28F;
            static constexpr std::uintptr_t bLightAsIfStatic = 0x28F;
            static constexpr std::uintptr_t bLightAttachmentsAsGroup = 0x28F;
            static constexpr std::uintptr_t bReceiveMobileCSMShadows = 0x28F;
            static constexpr std::uintptr_t AlwaysLoadOnClient = 0x290;
            static constexpr std::uintptr_t bApplyImpulseOnDamage = 0x290;
            static constexpr std::uintptr_t bFillCollisionUnderneathForNavmesh = 0x290;
            static constexpr std::uintptr_t bIgnoreRadialForce = 0x290;
            static constexpr std::uintptr_t bIgnoreRadialImpulse = 0x290;
            static constexpr std::uintptr_t bRasterizeAsFilledConvexVolume = 0x290;
            static constexpr std::uintptr_t bReplicatePhysicsToAutonomousProxy = 0x290;
            static constexpr std::uintptr_t bSingleSampleShadowFromStationaryLights = 0x290;
            static constexpr std::uintptr_t AlwaysLoadOnServer = 0x291;
            static constexpr std::uintptr_t bHiddenInSceneCapture = 0x291;
            static constexpr std::uintptr_t bIsBeingMovedByEditor = 0x291;
            static constexpr std::uintptr_t bLumenHeightfield = 0x291;
            static constexpr std::uintptr_t bRayTracingFarField = 0x291;
            static constexpr std::uintptr_t bRenderCustomDepth = 0x291;
            static constexpr std::uintptr_t bUseEditorCompositing = 0x291;
            static constexpr std::uintptr_t bVisibleInSceneCaptureOnly = 0x291;
            static constexpr std::uintptr_t FirstPersonPrimitiveType = 0x292;
            static constexpr std::uintptr_t bHasNoStreamableTextures = 0x293;
            static constexpr std::uintptr_t bStaticWhenNotMoveable = 0x293;
            static constexpr std::uintptr_t bHasCustomNavigableGeometry = 0x294;
            static constexpr std::uintptr_t CanCharacterStepUpOn = 0x296;
            static constexpr std::uintptr_t LightingChannels = 0x297;
            static constexpr std::uintptr_t RayTracingGroupCullingPriority = 0x298;
            static constexpr std::uintptr_t CustomDepthStencilWriteMask = 0x299;
            static constexpr std::uintptr_t ExcludeFromHLODLevels = 0x29A;
            static constexpr std::uintptr_t RayTracingGroupId = 0x29C;
            static constexpr std::uintptr_t VisibilityId = 0x2A0;
            static constexpr std::uintptr_t CustomDepthStencilValue = 0x2A4;
            static constexpr std::uintptr_t CustomPrimitiveData = 0x2A8;
            static constexpr std::uintptr_t CustomPrimitiveDataInternal = 0x2B8;
            static constexpr std::uintptr_t TranslucencySortPriority = 0x2E0;
            static constexpr std::uintptr_t TranslucencySortDistanceOffset = 0x2E4;
            static constexpr std::uintptr_t RuntimeVirtualTextures = 0x2E8;
            static constexpr std::uintptr_t VirtualTextureLodBias = 0x2F8;
            static constexpr std::uintptr_t VirtualTextureCullMips = 0x2F9;
            static constexpr std::uintptr_t VirtualTextureMinCoverage = 0x2FA;
            static constexpr std::uintptr_t VirtualTextureRenderPassType = 0x2FB;
            static constexpr std::uintptr_t BoundsScale = 0x348;
            static constexpr std::uintptr_t MoveIgnoreActors = 0x350;
            static constexpr std::uintptr_t MoveIgnoreComponents = 0x360;
            static constexpr std::uintptr_t BodyInstance = 0x380;
            static constexpr std::uintptr_t OnComponentHit = 0x528;
            static constexpr std::uintptr_t OnComponentBeginOverlap = 0x529;
            static constexpr std::uintptr_t OnComponentEndOverlap = 0x52A;
            static constexpr std::uintptr_t OnComponentWake = 0x52B;
            static constexpr std::uintptr_t OnComponentSleep = 0x52C;
            static constexpr std::uintptr_t OnComponentPhysicsStateChanged = 0x52E;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x52F;
            static constexpr std::uintptr_t OnEndCursorOver = 0x530;
            static constexpr std::uintptr_t OnClicked = 0x531;
            static constexpr std::uintptr_t OnReleased = 0x532;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x533;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x534;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x535;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x536;
            static constexpr std::uintptr_t OnTouchBegan = 0x537;
            static constexpr std::uintptr_t OnTouchEnded = 0x538;
            static constexpr std::uintptr_t OnTouchEntered = 0x539;
            static constexpr std::uintptr_t OnTouchExited = 0x53A;
            static constexpr std::uintptr_t LODParentPrimitive = 0x550;
        };

        inline static constexpr std::array<PropertyInfo, 116> Properties{{
            {"MinDrawDistance", 0x278, "FloatProperty"},
            {"LDMaxDrawDistance", 0x27C, "FloatProperty"},
            {"CachedMaxDrawDistance", 0x280, "FloatProperty"},
            {"DepthPriorityGroup", 0x284, "ByteProperty"},
            {"ViewOwnerDepthPriorityGroup", 0x285, "ByteProperty"},
            {"IndirectLightingCacheQuality", 0x286, "ByteProperty"},
            {"LightmapType", 0x287, "EnumProperty"},
            {"HLODBatchingPolicy", 0x288, "EnumProperty"},
            {"ShadowCacheInvalidationBehavior", 0x289, "EnumProperty"},
            {"bAlwaysCreatePhysicsState", 0x28A, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x28A, "BoolProperty"},
            {"bGenerateOverlapEvents", 0x28A, "BoolProperty"},
            {"bIsActorTextureStreamingBuiltData", 0x28A, "BoolProperty"},
            {"bIsValidTextureStreamingBuiltData", 0x28A, "BoolProperty"},
            {"bMultiBodyOverlap", 0x28A, "BoolProperty"},
            {"bNeverDistanceCull", 0x28A, "BoolProperty"},
            {"bAllowCullDistanceVolume", 0x28B, "BoolProperty"},
            {"bReturnMaterialOnMove", 0x28B, "BoolProperty"},
            {"bTraceComplexOnMove", 0x28B, "BoolProperty"},
            {"bUseViewOwnerDepthPriorityGroup", 0x28B, "BoolProperty"},
            {"bVisibleInRayTracing", 0x28B, "BoolProperty"},
            {"bVisibleInRealTimeSkyCaptures", 0x28B, "BoolProperty"},
            {"bVisibleInReflectionCaptures", 0x28B, "BoolProperty"},
            {"bVisibleInReflections", 0x28B, "BoolProperty"},
            {"bHoldout", 0x28C, "BoolProperty"},
            {"bOnlyOwnerSee", 0x28C, "BoolProperty"},
            {"bOwnerNoSee", 0x28C, "BoolProperty"},
            {"bReceivesDecals", 0x28C, "BoolProperty"},
            {"bRenderInDepthPass", 0x28C, "BoolProperty"},
            {"bRenderInMainPass", 0x28C, "BoolProperty"},
            {"bTreatAsBackgroundForOcclusion", 0x28C, "BoolProperty"},
            {"bUseAsOccluder", 0x28C, "BoolProperty"},
            {"CastShadow", 0x28D, "BoolProperty"},
            {"bAffectDynamicIndirectLighting", 0x28D, "BoolProperty"},
            {"bEmissiveLightSource", 0x28D, "BoolProperty"},
            {"bForceMipStreaming", 0x28D, "BoolProperty"},
            {"bHasPerInstanceHitProxies", 0x28D, "BoolProperty"},
            {"bSelectable", 0x28D, "BoolProperty"},
            {"bWantsEditorEffects", 0x28D, "BoolProperty"},
            {"bWantsSelectionOutline", 0x28D, "BoolProperty"},
            {"bAffectDistanceFieldLighting", 0x28E, "BoolProperty"},
            {"bAffectIndirectLightingWhileHidden", 0x28E, "BoolProperty"},
            {"bCastContactShadow", 0x28E, "BoolProperty"},
            {"bCastDynamicShadow", 0x28E, "BoolProperty"},
            {"bCastFarShadow", 0x28E, "BoolProperty"},
            {"bCastStaticShadow", 0x28E, "BoolProperty"},
            {"bCastVolumetricTranslucentShadow", 0x28E, "BoolProperty"},
            {"bSelfShadowOnly", 0x28E, "BoolProperty"},
            {"bCastCinematicShadow", 0x28F, "BoolProperty"},
            {"bCastHiddenShadow", 0x28F, "BoolProperty"},
            {"bCastInsetShadow", 0x28F, "BoolProperty"},
            {"bCastShadowAsTwoSided", 0x28F, "BoolProperty"},
            {"bExcludeFromLightAttachmentGroup", 0x28F, "BoolProperty"},
            {"bLightAsIfStatic", 0x28F, "BoolProperty"},
            {"bLightAttachmentsAsGroup", 0x28F, "BoolProperty"},
            {"bReceiveMobileCSMShadows", 0x28F, "BoolProperty"},
            {"AlwaysLoadOnClient", 0x290, "BoolProperty"},
            {"bApplyImpulseOnDamage", 0x290, "BoolProperty"},
            {"bFillCollisionUnderneathForNavmesh", 0x290, "BoolProperty"},
            {"bIgnoreRadialForce", 0x290, "BoolProperty"},
            {"bIgnoreRadialImpulse", 0x290, "BoolProperty"},
            {"bRasterizeAsFilledConvexVolume", 0x290, "BoolProperty"},
            {"bReplicatePhysicsToAutonomousProxy", 0x290, "BoolProperty"},
            {"bSingleSampleShadowFromStationaryLights", 0x290, "BoolProperty"},
            {"AlwaysLoadOnServer", 0x291, "BoolProperty"},
            {"bHiddenInSceneCapture", 0x291, "BoolProperty"},
            {"bIsBeingMovedByEditor", 0x291, "BoolProperty"},
            {"bLumenHeightfield", 0x291, "BoolProperty"},
            {"bRayTracingFarField", 0x291, "BoolProperty"},
            {"bRenderCustomDepth", 0x291, "BoolProperty"},
            {"bUseEditorCompositing", 0x291, "BoolProperty"},
            {"bVisibleInSceneCaptureOnly", 0x291, "BoolProperty"},
            {"FirstPersonPrimitiveType", 0x292, "EnumProperty"},
            {"bHasNoStreamableTextures", 0x293, "BoolProperty"},
            {"bStaticWhenNotMoveable", 0x293, "BoolProperty"},
            {"bHasCustomNavigableGeometry", 0x294, "ByteProperty"},
            {"CanCharacterStepUpOn", 0x296, "ByteProperty"},
            {"LightingChannels", 0x297, "StructProperty"},
            {"RayTracingGroupCullingPriority", 0x298, "EnumProperty"},
            {"CustomDepthStencilWriteMask", 0x299, "EnumProperty"},
            {"ExcludeFromHLODLevels", 0x29A, "ByteProperty"},
            {"RayTracingGroupId", 0x29C, "IntProperty"},
            {"VisibilityId", 0x2A0, "IntProperty"},
            {"CustomDepthStencilValue", 0x2A4, "IntProperty"},
            {"CustomPrimitiveData", 0x2A8, "StructProperty"},
            {"CustomPrimitiveDataInternal", 0x2B8, "StructProperty"},
            {"TranslucencySortPriority", 0x2E0, "IntProperty"},
            {"TranslucencySortDistanceOffset", 0x2E4, "FloatProperty"},
            {"RuntimeVirtualTextures", 0x2E8, "ArrayProperty"},
            {"VirtualTextureLodBias", 0x2F8, "Int8Property"},
            {"VirtualTextureCullMips", 0x2F9, "Int8Property"},
            {"VirtualTextureMinCoverage", 0x2FA, "Int8Property"},
            {"VirtualTextureRenderPassType", 0x2FB, "EnumProperty"},
            {"BoundsScale", 0x348, "FloatProperty"},
            {"MoveIgnoreActors", 0x350, "ArrayProperty"},
            {"MoveIgnoreComponents", 0x360, "ArrayProperty"},
            {"BodyInstance", 0x380, "StructProperty"},
            {"OnComponentHit", 0x528, "MulticastSparseDelegateProperty"},
            {"OnComponentBeginOverlap", 0x529, "MulticastSparseDelegateProperty"},
            {"OnComponentEndOverlap", 0x52A, "MulticastSparseDelegateProperty"},
            {"OnComponentWake", 0x52B, "MulticastSparseDelegateProperty"},
            {"OnComponentSleep", 0x52C, "MulticastSparseDelegateProperty"},
            {"OnComponentPhysicsStateChanged", 0x52E, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x52F, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x530, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x531, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x532, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x533, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x534, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x535, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x536, "MulticastSparseDelegateProperty"},
            {"OnTouchBegan", 0x537, "MulticastSparseDelegateProperty"},
            {"OnTouchEnded", 0x538, "MulticastSparseDelegateProperty"},
            {"OnTouchEntered", 0x539, "MulticastSparseDelegateProperty"},
            {"OnTouchExited", 0x53A, "MulticastSparseDelegateProperty"},
            {"LODParentPrimitive", 0x550, "ObjectProperty"},
        }};
    };

    struct NavLinkTrivial
    {
        static constexpr std::string_view Name = "NavLinkTrivial";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavLinkDefinition";
        struct Offsets
        {
            static constexpr std::uintptr_t Links = 0x28;
            static constexpr std::uintptr_t SegmentLinks = 0x38;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"Links", 0x28, "ArrayProperty"},
            {"SegmentLinks", 0x38, "ArrayProperty"},
        }};
    };

    struct NavMeshBoundsVolume
    {
        static constexpr std::string_view Name = "NavMeshBoundsVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Volume";
        struct Offsets
        {
            static constexpr std::uintptr_t SupportedAgents = 0x2B0;
            static constexpr std::uintptr_t bAllowPhysicsOverlap = 0x2B4;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"SupportedAgents", 0x2B0, "StructProperty"},
            {"bAllowPhysicsOverlap", 0x2B4, "BoolProperty"},
        }};
    };

    struct NavMeshRenderingComponent
    {
        static constexpr std::string_view Name = "NavMeshRenderingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DebugDrawComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MinDrawDistance = 0x278;
            static constexpr std::uintptr_t LDMaxDrawDistance = 0x27C;
            static constexpr std::uintptr_t CachedMaxDrawDistance = 0x280;
            static constexpr std::uintptr_t DepthPriorityGroup = 0x284;
            static constexpr std::uintptr_t ViewOwnerDepthPriorityGroup = 0x285;
            static constexpr std::uintptr_t IndirectLightingCacheQuality = 0x286;
            static constexpr std::uintptr_t LightmapType = 0x287;
            static constexpr std::uintptr_t HLODBatchingPolicy = 0x288;
            static constexpr std::uintptr_t ShadowCacheInvalidationBehavior = 0x289;
            static constexpr std::uintptr_t bAlwaysCreatePhysicsState = 0x28A;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x28A;
            static constexpr std::uintptr_t bGenerateOverlapEvents = 0x28A;
            static constexpr std::uintptr_t bIsActorTextureStreamingBuiltData = 0x28A;
            static constexpr std::uintptr_t bIsValidTextureStreamingBuiltData = 0x28A;
            static constexpr std::uintptr_t bMultiBodyOverlap = 0x28A;
            static constexpr std::uintptr_t bNeverDistanceCull = 0x28A;
            static constexpr std::uintptr_t bAllowCullDistanceVolume = 0x28B;
            static constexpr std::uintptr_t bReturnMaterialOnMove = 0x28B;
            static constexpr std::uintptr_t bTraceComplexOnMove = 0x28B;
            static constexpr std::uintptr_t bUseViewOwnerDepthPriorityGroup = 0x28B;
            static constexpr std::uintptr_t bVisibleInRayTracing = 0x28B;
            static constexpr std::uintptr_t bVisibleInRealTimeSkyCaptures = 0x28B;
            static constexpr std::uintptr_t bVisibleInReflectionCaptures = 0x28B;
            static constexpr std::uintptr_t bVisibleInReflections = 0x28B;
            static constexpr std::uintptr_t bHoldout = 0x28C;
            static constexpr std::uintptr_t bOnlyOwnerSee = 0x28C;
            static constexpr std::uintptr_t bOwnerNoSee = 0x28C;
            static constexpr std::uintptr_t bReceivesDecals = 0x28C;
            static constexpr std::uintptr_t bRenderInDepthPass = 0x28C;
            static constexpr std::uintptr_t bRenderInMainPass = 0x28C;
            static constexpr std::uintptr_t bTreatAsBackgroundForOcclusion = 0x28C;
            static constexpr std::uintptr_t bUseAsOccluder = 0x28C;
            static constexpr std::uintptr_t CastShadow = 0x28D;
            static constexpr std::uintptr_t bAffectDynamicIndirectLighting = 0x28D;
            static constexpr std::uintptr_t bEmissiveLightSource = 0x28D;
            static constexpr std::uintptr_t bForceMipStreaming = 0x28D;
            static constexpr std::uintptr_t bHasPerInstanceHitProxies = 0x28D;
            static constexpr std::uintptr_t bSelectable = 0x28D;
            static constexpr std::uintptr_t bWantsEditorEffects = 0x28D;
            static constexpr std::uintptr_t bWantsSelectionOutline = 0x28D;
            static constexpr std::uintptr_t bAffectDistanceFieldLighting = 0x28E;
            static constexpr std::uintptr_t bAffectIndirectLightingWhileHidden = 0x28E;
            static constexpr std::uintptr_t bCastContactShadow = 0x28E;
            static constexpr std::uintptr_t bCastDynamicShadow = 0x28E;
            static constexpr std::uintptr_t bCastFarShadow = 0x28E;
            static constexpr std::uintptr_t bCastStaticShadow = 0x28E;
            static constexpr std::uintptr_t bCastVolumetricTranslucentShadow = 0x28E;
            static constexpr std::uintptr_t bSelfShadowOnly = 0x28E;
            static constexpr std::uintptr_t bCastCinematicShadow = 0x28F;
            static constexpr std::uintptr_t bCastHiddenShadow = 0x28F;
            static constexpr std::uintptr_t bCastInsetShadow = 0x28F;
            static constexpr std::uintptr_t bCastShadowAsTwoSided = 0x28F;
            static constexpr std::uintptr_t bExcludeFromLightAttachmentGroup = 0x28F;
            static constexpr std::uintptr_t bLightAsIfStatic = 0x28F;
            static constexpr std::uintptr_t bLightAttachmentsAsGroup = 0x28F;
            static constexpr std::uintptr_t bReceiveMobileCSMShadows = 0x28F;
            static constexpr std::uintptr_t AlwaysLoadOnClient = 0x290;
            static constexpr std::uintptr_t bApplyImpulseOnDamage = 0x290;
            static constexpr std::uintptr_t bFillCollisionUnderneathForNavmesh = 0x290;
            static constexpr std::uintptr_t bIgnoreRadialForce = 0x290;
            static constexpr std::uintptr_t bIgnoreRadialImpulse = 0x290;
            static constexpr std::uintptr_t bRasterizeAsFilledConvexVolume = 0x290;
            static constexpr std::uintptr_t bReplicatePhysicsToAutonomousProxy = 0x290;
            static constexpr std::uintptr_t bSingleSampleShadowFromStationaryLights = 0x290;
            static constexpr std::uintptr_t AlwaysLoadOnServer = 0x291;
            static constexpr std::uintptr_t bHiddenInSceneCapture = 0x291;
            static constexpr std::uintptr_t bIsBeingMovedByEditor = 0x291;
            static constexpr std::uintptr_t bLumenHeightfield = 0x291;
            static constexpr std::uintptr_t bRayTracingFarField = 0x291;
            static constexpr std::uintptr_t bRenderCustomDepth = 0x291;
            static constexpr std::uintptr_t bUseEditorCompositing = 0x291;
            static constexpr std::uintptr_t bVisibleInSceneCaptureOnly = 0x291;
            static constexpr std::uintptr_t FirstPersonPrimitiveType = 0x292;
            static constexpr std::uintptr_t bHasNoStreamableTextures = 0x293;
            static constexpr std::uintptr_t bStaticWhenNotMoveable = 0x293;
            static constexpr std::uintptr_t bHasCustomNavigableGeometry = 0x294;
            static constexpr std::uintptr_t CanCharacterStepUpOn = 0x296;
            static constexpr std::uintptr_t LightingChannels = 0x297;
            static constexpr std::uintptr_t RayTracingGroupCullingPriority = 0x298;
            static constexpr std::uintptr_t CustomDepthStencilWriteMask = 0x299;
            static constexpr std::uintptr_t ExcludeFromHLODLevels = 0x29A;
            static constexpr std::uintptr_t RayTracingGroupId = 0x29C;
            static constexpr std::uintptr_t VisibilityId = 0x2A0;
            static constexpr std::uintptr_t CustomDepthStencilValue = 0x2A4;
            static constexpr std::uintptr_t CustomPrimitiveData = 0x2A8;
            static constexpr std::uintptr_t CustomPrimitiveDataInternal = 0x2B8;
            static constexpr std::uintptr_t TranslucencySortPriority = 0x2E0;
            static constexpr std::uintptr_t TranslucencySortDistanceOffset = 0x2E4;
            static constexpr std::uintptr_t RuntimeVirtualTextures = 0x2E8;
            static constexpr std::uintptr_t VirtualTextureLodBias = 0x2F8;
            static constexpr std::uintptr_t VirtualTextureCullMips = 0x2F9;
            static constexpr std::uintptr_t VirtualTextureMinCoverage = 0x2FA;
            static constexpr std::uintptr_t VirtualTextureRenderPassType = 0x2FB;
            static constexpr std::uintptr_t BoundsScale = 0x348;
            static constexpr std::uintptr_t MoveIgnoreActors = 0x350;
            static constexpr std::uintptr_t MoveIgnoreComponents = 0x360;
            static constexpr std::uintptr_t BodyInstance = 0x380;
            static constexpr std::uintptr_t OnComponentHit = 0x528;
            static constexpr std::uintptr_t OnComponentBeginOverlap = 0x529;
            static constexpr std::uintptr_t OnComponentEndOverlap = 0x52A;
            static constexpr std::uintptr_t OnComponentWake = 0x52B;
            static constexpr std::uintptr_t OnComponentSleep = 0x52C;
            static constexpr std::uintptr_t OnComponentPhysicsStateChanged = 0x52E;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x52F;
            static constexpr std::uintptr_t OnEndCursorOver = 0x530;
            static constexpr std::uintptr_t OnClicked = 0x531;
            static constexpr std::uintptr_t OnReleased = 0x532;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x533;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x534;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x535;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x536;
            static constexpr std::uintptr_t OnTouchBegan = 0x537;
            static constexpr std::uintptr_t OnTouchEnded = 0x538;
            static constexpr std::uintptr_t OnTouchEntered = 0x539;
            static constexpr std::uintptr_t OnTouchExited = 0x53A;
            static constexpr std::uintptr_t LODParentPrimitive = 0x550;
        };

        inline static constexpr std::array<PropertyInfo, 116> Properties{{
            {"MinDrawDistance", 0x278, "FloatProperty"},
            {"LDMaxDrawDistance", 0x27C, "FloatProperty"},
            {"CachedMaxDrawDistance", 0x280, "FloatProperty"},
            {"DepthPriorityGroup", 0x284, "ByteProperty"},
            {"ViewOwnerDepthPriorityGroup", 0x285, "ByteProperty"},
            {"IndirectLightingCacheQuality", 0x286, "ByteProperty"},
            {"LightmapType", 0x287, "EnumProperty"},
            {"HLODBatchingPolicy", 0x288, "EnumProperty"},
            {"ShadowCacheInvalidationBehavior", 0x289, "EnumProperty"},
            {"bAlwaysCreatePhysicsState", 0x28A, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x28A, "BoolProperty"},
            {"bGenerateOverlapEvents", 0x28A, "BoolProperty"},
            {"bIsActorTextureStreamingBuiltData", 0x28A, "BoolProperty"},
            {"bIsValidTextureStreamingBuiltData", 0x28A, "BoolProperty"},
            {"bMultiBodyOverlap", 0x28A, "BoolProperty"},
            {"bNeverDistanceCull", 0x28A, "BoolProperty"},
            {"bAllowCullDistanceVolume", 0x28B, "BoolProperty"},
            {"bReturnMaterialOnMove", 0x28B, "BoolProperty"},
            {"bTraceComplexOnMove", 0x28B, "BoolProperty"},
            {"bUseViewOwnerDepthPriorityGroup", 0x28B, "BoolProperty"},
            {"bVisibleInRayTracing", 0x28B, "BoolProperty"},
            {"bVisibleInRealTimeSkyCaptures", 0x28B, "BoolProperty"},
            {"bVisibleInReflectionCaptures", 0x28B, "BoolProperty"},
            {"bVisibleInReflections", 0x28B, "BoolProperty"},
            {"bHoldout", 0x28C, "BoolProperty"},
            {"bOnlyOwnerSee", 0x28C, "BoolProperty"},
            {"bOwnerNoSee", 0x28C, "BoolProperty"},
            {"bReceivesDecals", 0x28C, "BoolProperty"},
            {"bRenderInDepthPass", 0x28C, "BoolProperty"},
            {"bRenderInMainPass", 0x28C, "BoolProperty"},
            {"bTreatAsBackgroundForOcclusion", 0x28C, "BoolProperty"},
            {"bUseAsOccluder", 0x28C, "BoolProperty"},
            {"CastShadow", 0x28D, "BoolProperty"},
            {"bAffectDynamicIndirectLighting", 0x28D, "BoolProperty"},
            {"bEmissiveLightSource", 0x28D, "BoolProperty"},
            {"bForceMipStreaming", 0x28D, "BoolProperty"},
            {"bHasPerInstanceHitProxies", 0x28D, "BoolProperty"},
            {"bSelectable", 0x28D, "BoolProperty"},
            {"bWantsEditorEffects", 0x28D, "BoolProperty"},
            {"bWantsSelectionOutline", 0x28D, "BoolProperty"},
            {"bAffectDistanceFieldLighting", 0x28E, "BoolProperty"},
            {"bAffectIndirectLightingWhileHidden", 0x28E, "BoolProperty"},
            {"bCastContactShadow", 0x28E, "BoolProperty"},
            {"bCastDynamicShadow", 0x28E, "BoolProperty"},
            {"bCastFarShadow", 0x28E, "BoolProperty"},
            {"bCastStaticShadow", 0x28E, "BoolProperty"},
            {"bCastVolumetricTranslucentShadow", 0x28E, "BoolProperty"},
            {"bSelfShadowOnly", 0x28E, "BoolProperty"},
            {"bCastCinematicShadow", 0x28F, "BoolProperty"},
            {"bCastHiddenShadow", 0x28F, "BoolProperty"},
            {"bCastInsetShadow", 0x28F, "BoolProperty"},
            {"bCastShadowAsTwoSided", 0x28F, "BoolProperty"},
            {"bExcludeFromLightAttachmentGroup", 0x28F, "BoolProperty"},
            {"bLightAsIfStatic", 0x28F, "BoolProperty"},
            {"bLightAttachmentsAsGroup", 0x28F, "BoolProperty"},
            {"bReceiveMobileCSMShadows", 0x28F, "BoolProperty"},
            {"AlwaysLoadOnClient", 0x290, "BoolProperty"},
            {"bApplyImpulseOnDamage", 0x290, "BoolProperty"},
            {"bFillCollisionUnderneathForNavmesh", 0x290, "BoolProperty"},
            {"bIgnoreRadialForce", 0x290, "BoolProperty"},
            {"bIgnoreRadialImpulse", 0x290, "BoolProperty"},
            {"bRasterizeAsFilledConvexVolume", 0x290, "BoolProperty"},
            {"bReplicatePhysicsToAutonomousProxy", 0x290, "BoolProperty"},
            {"bSingleSampleShadowFromStationaryLights", 0x290, "BoolProperty"},
            {"AlwaysLoadOnServer", 0x291, "BoolProperty"},
            {"bHiddenInSceneCapture", 0x291, "BoolProperty"},
            {"bIsBeingMovedByEditor", 0x291, "BoolProperty"},
            {"bLumenHeightfield", 0x291, "BoolProperty"},
            {"bRayTracingFarField", 0x291, "BoolProperty"},
            {"bRenderCustomDepth", 0x291, "BoolProperty"},
            {"bUseEditorCompositing", 0x291, "BoolProperty"},
            {"bVisibleInSceneCaptureOnly", 0x291, "BoolProperty"},
            {"FirstPersonPrimitiveType", 0x292, "EnumProperty"},
            {"bHasNoStreamableTextures", 0x293, "BoolProperty"},
            {"bStaticWhenNotMoveable", 0x293, "BoolProperty"},
            {"bHasCustomNavigableGeometry", 0x294, "ByteProperty"},
            {"CanCharacterStepUpOn", 0x296, "ByteProperty"},
            {"LightingChannels", 0x297, "StructProperty"},
            {"RayTracingGroupCullingPriority", 0x298, "EnumProperty"},
            {"CustomDepthStencilWriteMask", 0x299, "EnumProperty"},
            {"ExcludeFromHLODLevels", 0x29A, "ByteProperty"},
            {"RayTracingGroupId", 0x29C, "IntProperty"},
            {"VisibilityId", 0x2A0, "IntProperty"},
            {"CustomDepthStencilValue", 0x2A4, "IntProperty"},
            {"CustomPrimitiveData", 0x2A8, "StructProperty"},
            {"CustomPrimitiveDataInternal", 0x2B8, "StructProperty"},
            {"TranslucencySortPriority", 0x2E0, "IntProperty"},
            {"TranslucencySortDistanceOffset", 0x2E4, "FloatProperty"},
            {"RuntimeVirtualTextures", 0x2E8, "ArrayProperty"},
            {"VirtualTextureLodBias", 0x2F8, "Int8Property"},
            {"VirtualTextureCullMips", 0x2F9, "Int8Property"},
            {"VirtualTextureMinCoverage", 0x2FA, "Int8Property"},
            {"VirtualTextureRenderPassType", 0x2FB, "EnumProperty"},
            {"BoundsScale", 0x348, "FloatProperty"},
            {"MoveIgnoreActors", 0x350, "ArrayProperty"},
            {"MoveIgnoreComponents", 0x360, "ArrayProperty"},
            {"BodyInstance", 0x380, "StructProperty"},
            {"OnComponentHit", 0x528, "MulticastSparseDelegateProperty"},
            {"OnComponentBeginOverlap", 0x529, "MulticastSparseDelegateProperty"},
            {"OnComponentEndOverlap", 0x52A, "MulticastSparseDelegateProperty"},
            {"OnComponentWake", 0x52B, "MulticastSparseDelegateProperty"},
            {"OnComponentSleep", 0x52C, "MulticastSparseDelegateProperty"},
            {"OnComponentPhysicsStateChanged", 0x52E, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x52F, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x530, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x531, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x532, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x533, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x534, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x535, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x536, "MulticastSparseDelegateProperty"},
            {"OnTouchBegan", 0x537, "MulticastSparseDelegateProperty"},
            {"OnTouchEnded", 0x538, "MulticastSparseDelegateProperty"},
            {"OnTouchEntered", 0x539, "MulticastSparseDelegateProperty"},
            {"OnTouchExited", 0x53A, "MulticastSparseDelegateProperty"},
            {"LODParentPrimitive", 0x550, "ObjectProperty"},
        }};
    };

    struct NavMeshResolutionParam
    {
        static constexpr std::string_view Name = "NavMeshResolutionParam";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t CellSize = 0x0;
            static constexpr std::uintptr_t CellHeight = 0x4;
            static constexpr std::uintptr_t AgentMaxStepHeight = 0x8;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"CellSize", 0x0, "FloatProperty"},
            {"CellHeight", 0x4, "FloatProperty"},
            {"AgentMaxStepHeight", 0x8, "FloatProperty"},
        }};
    };

    struct NavModifierComponent
    {
        static constexpr std::string_view Name = "NavModifierComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavRelevantComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t AreaClass = 0x110;
            static constexpr std::uintptr_t AreaClassToReplace = 0x118;
            static constexpr std::uintptr_t FailsafeExtent = 0x120;
            static constexpr std::uintptr_t NavMeshResolution = 0x138;
            static constexpr std::uintptr_t bIncludeAgentHeight = 0x139;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"AreaClass", 0x110, "ClassProperty"},
            {"AreaClassToReplace", 0x118, "ClassProperty"},
            {"FailsafeExtent", 0x120, "StructProperty"},
            {"NavMeshResolution", 0x138, "EnumProperty"},
            {"bIncludeAgentHeight", 0x139, "BoolProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "SetAreaClass",
            "SetAreaClassToReplace",
        }};
    };

    struct NavModifierVolume
    {
        static constexpr std::string_view Name = "NavModifierVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Volume";
        struct Offsets
        {
            static constexpr std::uintptr_t AreaClass = 0x2B8;
            static constexpr std::uintptr_t AreaClassToReplace = 0x2C0;
            static constexpr std::uintptr_t bMaskFillCollisionUnderneathForNavmesh = 0x2C8;
            static constexpr std::uintptr_t NavMeshResolution = 0x2C9;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"AreaClass", 0x2B8, "ClassProperty"},
            {"AreaClassToReplace", 0x2C0, "ClassProperty"},
            {"bMaskFillCollisionUnderneathForNavmesh", 0x2C8, "BoolProperty"},
            {"NavMeshResolution", 0x2C9, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 2> FunctionNames{{
            "SetAreaClass",
            "SetAreaClassToReplace",
        }};
    };

    struct NavNodeInterface
    {
        static constexpr std::string_view Name = "NavNodeInterface";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NavRelevantComponent
    {
        static constexpr std::string_view Name = "NavRelevantComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bAttachToOwnersRoot = 0x100;
            static constexpr std::uintptr_t CachedNavParent = 0x108;
        };

        inline static constexpr std::array<PropertyInfo, 2> Properties{{
            {"bAttachToOwnersRoot", 0x100, "BoolProperty"},
            {"CachedNavParent", 0x108, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "SetNavigationRelevancy",
        }};
    };

    struct NavSystemConfigOverride
    {
        static constexpr std::string_view Name = "NavSystemConfigOverride";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t NavigationSystemConfig = 0x278;
            static constexpr std::uintptr_t OverridePolicy = 0x280;
            static constexpr std::uintptr_t bLoadOnClient = 0x281;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"NavigationSystemConfig", 0x278, "ObjectProperty"},
            {"OverridePolicy", 0x280, "EnumProperty"},
            {"bLoadOnClient", 0x281, "BoolProperty"},
        }};
    };

    struct NavTestRenderingComponent
    {
        static constexpr std::string_view Name = "NavTestRenderingComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "DebugDrawComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t MinDrawDistance = 0x278;
            static constexpr std::uintptr_t LDMaxDrawDistance = 0x27C;
            static constexpr std::uintptr_t CachedMaxDrawDistance = 0x280;
            static constexpr std::uintptr_t DepthPriorityGroup = 0x284;
            static constexpr std::uintptr_t ViewOwnerDepthPriorityGroup = 0x285;
            static constexpr std::uintptr_t IndirectLightingCacheQuality = 0x286;
            static constexpr std::uintptr_t LightmapType = 0x287;
            static constexpr std::uintptr_t HLODBatchingPolicy = 0x288;
            static constexpr std::uintptr_t ShadowCacheInvalidationBehavior = 0x289;
            static constexpr std::uintptr_t bAlwaysCreatePhysicsState = 0x28A;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x28A;
            static constexpr std::uintptr_t bGenerateOverlapEvents = 0x28A;
            static constexpr std::uintptr_t bIsActorTextureStreamingBuiltData = 0x28A;
            static constexpr std::uintptr_t bIsValidTextureStreamingBuiltData = 0x28A;
            static constexpr std::uintptr_t bMultiBodyOverlap = 0x28A;
            static constexpr std::uintptr_t bNeverDistanceCull = 0x28A;
            static constexpr std::uintptr_t bAllowCullDistanceVolume = 0x28B;
            static constexpr std::uintptr_t bReturnMaterialOnMove = 0x28B;
            static constexpr std::uintptr_t bTraceComplexOnMove = 0x28B;
            static constexpr std::uintptr_t bUseViewOwnerDepthPriorityGroup = 0x28B;
            static constexpr std::uintptr_t bVisibleInRayTracing = 0x28B;
            static constexpr std::uintptr_t bVisibleInRealTimeSkyCaptures = 0x28B;
            static constexpr std::uintptr_t bVisibleInReflectionCaptures = 0x28B;
            static constexpr std::uintptr_t bVisibleInReflections = 0x28B;
            static constexpr std::uintptr_t bHoldout = 0x28C;
            static constexpr std::uintptr_t bOnlyOwnerSee = 0x28C;
            static constexpr std::uintptr_t bOwnerNoSee = 0x28C;
            static constexpr std::uintptr_t bReceivesDecals = 0x28C;
            static constexpr std::uintptr_t bRenderInDepthPass = 0x28C;
            static constexpr std::uintptr_t bRenderInMainPass = 0x28C;
            static constexpr std::uintptr_t bTreatAsBackgroundForOcclusion = 0x28C;
            static constexpr std::uintptr_t bUseAsOccluder = 0x28C;
            static constexpr std::uintptr_t CastShadow = 0x28D;
            static constexpr std::uintptr_t bAffectDynamicIndirectLighting = 0x28D;
            static constexpr std::uintptr_t bEmissiveLightSource = 0x28D;
            static constexpr std::uintptr_t bForceMipStreaming = 0x28D;
            static constexpr std::uintptr_t bHasPerInstanceHitProxies = 0x28D;
            static constexpr std::uintptr_t bSelectable = 0x28D;
            static constexpr std::uintptr_t bWantsEditorEffects = 0x28D;
            static constexpr std::uintptr_t bWantsSelectionOutline = 0x28D;
            static constexpr std::uintptr_t bAffectDistanceFieldLighting = 0x28E;
            static constexpr std::uintptr_t bAffectIndirectLightingWhileHidden = 0x28E;
            static constexpr std::uintptr_t bCastContactShadow = 0x28E;
            static constexpr std::uintptr_t bCastDynamicShadow = 0x28E;
            static constexpr std::uintptr_t bCastFarShadow = 0x28E;
            static constexpr std::uintptr_t bCastStaticShadow = 0x28E;
            static constexpr std::uintptr_t bCastVolumetricTranslucentShadow = 0x28E;
            static constexpr std::uintptr_t bSelfShadowOnly = 0x28E;
            static constexpr std::uintptr_t bCastCinematicShadow = 0x28F;
            static constexpr std::uintptr_t bCastHiddenShadow = 0x28F;
            static constexpr std::uintptr_t bCastInsetShadow = 0x28F;
            static constexpr std::uintptr_t bCastShadowAsTwoSided = 0x28F;
            static constexpr std::uintptr_t bExcludeFromLightAttachmentGroup = 0x28F;
            static constexpr std::uintptr_t bLightAsIfStatic = 0x28F;
            static constexpr std::uintptr_t bLightAttachmentsAsGroup = 0x28F;
            static constexpr std::uintptr_t bReceiveMobileCSMShadows = 0x28F;
            static constexpr std::uintptr_t AlwaysLoadOnClient = 0x290;
            static constexpr std::uintptr_t bApplyImpulseOnDamage = 0x290;
            static constexpr std::uintptr_t bFillCollisionUnderneathForNavmesh = 0x290;
            static constexpr std::uintptr_t bIgnoreRadialForce = 0x290;
            static constexpr std::uintptr_t bIgnoreRadialImpulse = 0x290;
            static constexpr std::uintptr_t bRasterizeAsFilledConvexVolume = 0x290;
            static constexpr std::uintptr_t bReplicatePhysicsToAutonomousProxy = 0x290;
            static constexpr std::uintptr_t bSingleSampleShadowFromStationaryLights = 0x290;
            static constexpr std::uintptr_t AlwaysLoadOnServer = 0x291;
            static constexpr std::uintptr_t bHiddenInSceneCapture = 0x291;
            static constexpr std::uintptr_t bIsBeingMovedByEditor = 0x291;
            static constexpr std::uintptr_t bLumenHeightfield = 0x291;
            static constexpr std::uintptr_t bRayTracingFarField = 0x291;
            static constexpr std::uintptr_t bRenderCustomDepth = 0x291;
            static constexpr std::uintptr_t bUseEditorCompositing = 0x291;
            static constexpr std::uintptr_t bVisibleInSceneCaptureOnly = 0x291;
            static constexpr std::uintptr_t FirstPersonPrimitiveType = 0x292;
            static constexpr std::uintptr_t bHasNoStreamableTextures = 0x293;
            static constexpr std::uintptr_t bStaticWhenNotMoveable = 0x293;
            static constexpr std::uintptr_t bHasCustomNavigableGeometry = 0x294;
            static constexpr std::uintptr_t CanCharacterStepUpOn = 0x296;
            static constexpr std::uintptr_t LightingChannels = 0x297;
            static constexpr std::uintptr_t RayTracingGroupCullingPriority = 0x298;
            static constexpr std::uintptr_t CustomDepthStencilWriteMask = 0x299;
            static constexpr std::uintptr_t ExcludeFromHLODLevels = 0x29A;
            static constexpr std::uintptr_t RayTracingGroupId = 0x29C;
            static constexpr std::uintptr_t VisibilityId = 0x2A0;
            static constexpr std::uintptr_t CustomDepthStencilValue = 0x2A4;
            static constexpr std::uintptr_t CustomPrimitiveData = 0x2A8;
            static constexpr std::uintptr_t CustomPrimitiveDataInternal = 0x2B8;
            static constexpr std::uintptr_t TranslucencySortPriority = 0x2E0;
            static constexpr std::uintptr_t TranslucencySortDistanceOffset = 0x2E4;
            static constexpr std::uintptr_t RuntimeVirtualTextures = 0x2E8;
            static constexpr std::uintptr_t VirtualTextureLodBias = 0x2F8;
            static constexpr std::uintptr_t VirtualTextureCullMips = 0x2F9;
            static constexpr std::uintptr_t VirtualTextureMinCoverage = 0x2FA;
            static constexpr std::uintptr_t VirtualTextureRenderPassType = 0x2FB;
            static constexpr std::uintptr_t BoundsScale = 0x348;
            static constexpr std::uintptr_t MoveIgnoreActors = 0x350;
            static constexpr std::uintptr_t MoveIgnoreComponents = 0x360;
            static constexpr std::uintptr_t BodyInstance = 0x380;
            static constexpr std::uintptr_t OnComponentHit = 0x528;
            static constexpr std::uintptr_t OnComponentBeginOverlap = 0x529;
            static constexpr std::uintptr_t OnComponentEndOverlap = 0x52A;
            static constexpr std::uintptr_t OnComponentWake = 0x52B;
            static constexpr std::uintptr_t OnComponentSleep = 0x52C;
            static constexpr std::uintptr_t OnComponentPhysicsStateChanged = 0x52E;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x52F;
            static constexpr std::uintptr_t OnEndCursorOver = 0x530;
            static constexpr std::uintptr_t OnClicked = 0x531;
            static constexpr std::uintptr_t OnReleased = 0x532;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x533;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x534;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x535;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x536;
            static constexpr std::uintptr_t OnTouchBegan = 0x537;
            static constexpr std::uintptr_t OnTouchEnded = 0x538;
            static constexpr std::uintptr_t OnTouchEntered = 0x539;
            static constexpr std::uintptr_t OnTouchExited = 0x53A;
            static constexpr std::uintptr_t LODParentPrimitive = 0x550;
        };

        inline static constexpr std::array<PropertyInfo, 116> Properties{{
            {"MinDrawDistance", 0x278, "FloatProperty"},
            {"LDMaxDrawDistance", 0x27C, "FloatProperty"},
            {"CachedMaxDrawDistance", 0x280, "FloatProperty"},
            {"DepthPriorityGroup", 0x284, "ByteProperty"},
            {"ViewOwnerDepthPriorityGroup", 0x285, "ByteProperty"},
            {"IndirectLightingCacheQuality", 0x286, "ByteProperty"},
            {"LightmapType", 0x287, "EnumProperty"},
            {"HLODBatchingPolicy", 0x288, "EnumProperty"},
            {"ShadowCacheInvalidationBehavior", 0x289, "EnumProperty"},
            {"bAlwaysCreatePhysicsState", 0x28A, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x28A, "BoolProperty"},
            {"bGenerateOverlapEvents", 0x28A, "BoolProperty"},
            {"bIsActorTextureStreamingBuiltData", 0x28A, "BoolProperty"},
            {"bIsValidTextureStreamingBuiltData", 0x28A, "BoolProperty"},
            {"bMultiBodyOverlap", 0x28A, "BoolProperty"},
            {"bNeverDistanceCull", 0x28A, "BoolProperty"},
            {"bAllowCullDistanceVolume", 0x28B, "BoolProperty"},
            {"bReturnMaterialOnMove", 0x28B, "BoolProperty"},
            {"bTraceComplexOnMove", 0x28B, "BoolProperty"},
            {"bUseViewOwnerDepthPriorityGroup", 0x28B, "BoolProperty"},
            {"bVisibleInRayTracing", 0x28B, "BoolProperty"},
            {"bVisibleInRealTimeSkyCaptures", 0x28B, "BoolProperty"},
            {"bVisibleInReflectionCaptures", 0x28B, "BoolProperty"},
            {"bVisibleInReflections", 0x28B, "BoolProperty"},
            {"bHoldout", 0x28C, "BoolProperty"},
            {"bOnlyOwnerSee", 0x28C, "BoolProperty"},
            {"bOwnerNoSee", 0x28C, "BoolProperty"},
            {"bReceivesDecals", 0x28C, "BoolProperty"},
            {"bRenderInDepthPass", 0x28C, "BoolProperty"},
            {"bRenderInMainPass", 0x28C, "BoolProperty"},
            {"bTreatAsBackgroundForOcclusion", 0x28C, "BoolProperty"},
            {"bUseAsOccluder", 0x28C, "BoolProperty"},
            {"CastShadow", 0x28D, "BoolProperty"},
            {"bAffectDynamicIndirectLighting", 0x28D, "BoolProperty"},
            {"bEmissiveLightSource", 0x28D, "BoolProperty"},
            {"bForceMipStreaming", 0x28D, "BoolProperty"},
            {"bHasPerInstanceHitProxies", 0x28D, "BoolProperty"},
            {"bSelectable", 0x28D, "BoolProperty"},
            {"bWantsEditorEffects", 0x28D, "BoolProperty"},
            {"bWantsSelectionOutline", 0x28D, "BoolProperty"},
            {"bAffectDistanceFieldLighting", 0x28E, "BoolProperty"},
            {"bAffectIndirectLightingWhileHidden", 0x28E, "BoolProperty"},
            {"bCastContactShadow", 0x28E, "BoolProperty"},
            {"bCastDynamicShadow", 0x28E, "BoolProperty"},
            {"bCastFarShadow", 0x28E, "BoolProperty"},
            {"bCastStaticShadow", 0x28E, "BoolProperty"},
            {"bCastVolumetricTranslucentShadow", 0x28E, "BoolProperty"},
            {"bSelfShadowOnly", 0x28E, "BoolProperty"},
            {"bCastCinematicShadow", 0x28F, "BoolProperty"},
            {"bCastHiddenShadow", 0x28F, "BoolProperty"},
            {"bCastInsetShadow", 0x28F, "BoolProperty"},
            {"bCastShadowAsTwoSided", 0x28F, "BoolProperty"},
            {"bExcludeFromLightAttachmentGroup", 0x28F, "BoolProperty"},
            {"bLightAsIfStatic", 0x28F, "BoolProperty"},
            {"bLightAttachmentsAsGroup", 0x28F, "BoolProperty"},
            {"bReceiveMobileCSMShadows", 0x28F, "BoolProperty"},
            {"AlwaysLoadOnClient", 0x290, "BoolProperty"},
            {"bApplyImpulseOnDamage", 0x290, "BoolProperty"},
            {"bFillCollisionUnderneathForNavmesh", 0x290, "BoolProperty"},
            {"bIgnoreRadialForce", 0x290, "BoolProperty"},
            {"bIgnoreRadialImpulse", 0x290, "BoolProperty"},
            {"bRasterizeAsFilledConvexVolume", 0x290, "BoolProperty"},
            {"bReplicatePhysicsToAutonomousProxy", 0x290, "BoolProperty"},
            {"bSingleSampleShadowFromStationaryLights", 0x290, "BoolProperty"},
            {"AlwaysLoadOnServer", 0x291, "BoolProperty"},
            {"bHiddenInSceneCapture", 0x291, "BoolProperty"},
            {"bIsBeingMovedByEditor", 0x291, "BoolProperty"},
            {"bLumenHeightfield", 0x291, "BoolProperty"},
            {"bRayTracingFarField", 0x291, "BoolProperty"},
            {"bRenderCustomDepth", 0x291, "BoolProperty"},
            {"bUseEditorCompositing", 0x291, "BoolProperty"},
            {"bVisibleInSceneCaptureOnly", 0x291, "BoolProperty"},
            {"FirstPersonPrimitiveType", 0x292, "EnumProperty"},
            {"bHasNoStreamableTextures", 0x293, "BoolProperty"},
            {"bStaticWhenNotMoveable", 0x293, "BoolProperty"},
            {"bHasCustomNavigableGeometry", 0x294, "ByteProperty"},
            {"CanCharacterStepUpOn", 0x296, "ByteProperty"},
            {"LightingChannels", 0x297, "StructProperty"},
            {"RayTracingGroupCullingPriority", 0x298, "EnumProperty"},
            {"CustomDepthStencilWriteMask", 0x299, "EnumProperty"},
            {"ExcludeFromHLODLevels", 0x29A, "ByteProperty"},
            {"RayTracingGroupId", 0x29C, "IntProperty"},
            {"VisibilityId", 0x2A0, "IntProperty"},
            {"CustomDepthStencilValue", 0x2A4, "IntProperty"},
            {"CustomPrimitiveData", 0x2A8, "StructProperty"},
            {"CustomPrimitiveDataInternal", 0x2B8, "StructProperty"},
            {"TranslucencySortPriority", 0x2E0, "IntProperty"},
            {"TranslucencySortDistanceOffset", 0x2E4, "FloatProperty"},
            {"RuntimeVirtualTextures", 0x2E8, "ArrayProperty"},
            {"VirtualTextureLodBias", 0x2F8, "Int8Property"},
            {"VirtualTextureCullMips", 0x2F9, "Int8Property"},
            {"VirtualTextureMinCoverage", 0x2FA, "Int8Property"},
            {"VirtualTextureRenderPassType", 0x2FB, "EnumProperty"},
            {"BoundsScale", 0x348, "FloatProperty"},
            {"MoveIgnoreActors", 0x350, "ArrayProperty"},
            {"MoveIgnoreComponents", 0x360, "ArrayProperty"},
            {"BodyInstance", 0x380, "StructProperty"},
            {"OnComponentHit", 0x528, "MulticastSparseDelegateProperty"},
            {"OnComponentBeginOverlap", 0x529, "MulticastSparseDelegateProperty"},
            {"OnComponentEndOverlap", 0x52A, "MulticastSparseDelegateProperty"},
            {"OnComponentWake", 0x52B, "MulticastSparseDelegateProperty"},
            {"OnComponentSleep", 0x52C, "MulticastSparseDelegateProperty"},
            {"OnComponentPhysicsStateChanged", 0x52E, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x52F, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x530, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x531, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x532, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x533, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x534, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x535, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x536, "MulticastSparseDelegateProperty"},
            {"OnTouchBegan", 0x537, "MulticastSparseDelegateProperty"},
            {"OnTouchEnded", 0x538, "MulticastSparseDelegateProperty"},
            {"OnTouchEntered", 0x539, "MulticastSparseDelegateProperty"},
            {"OnTouchExited", 0x53A, "MulticastSparseDelegateProperty"},
            {"LODParentPrimitive", 0x550, "ObjectProperty"},
        }};
    };

    struct NavigationBakingVolume
    {
        static constexpr std::string_view Name = "NavigationBakingVolume";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Volume";
        struct Offsets
        {
            static constexpr std::uintptr_t SupportedAgents = 0x2B0;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"SupportedAgents", 0x2B0, "StructProperty"},
        }};
    };

    struct NavigationData
    {
        static constexpr std::string_view Name = "NavigationData";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t RenderingComp = 0x280;
            static constexpr std::uintptr_t NavDataConfig = 0x288;
            static constexpr std::uintptr_t bAutoDestroyWhenNoNavigation = 0x2F8;
            static constexpr std::uintptr_t bCanBeMainNavData = 0x2F8;
            static constexpr std::uintptr_t bCanSpawnOnRebuild = 0x2F8;
            static constexpr std::uintptr_t bEnableDrawing = 0x2F8;
            static constexpr std::uintptr_t bForceRebuildOnLoad = 0x2F8;
            static constexpr std::uintptr_t bRebuildAtRuntime = 0x2F8;
            static constexpr std::uintptr_t RuntimeGeneration = 0x2FC;
            static constexpr std::uintptr_t ObservedPathsTickInterval = 0x304;
            static constexpr std::uintptr_t DataVersion = 0x308;
            static constexpr std::uintptr_t SupportedAreas = 0x3E0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"RenderingComp", 0x280, "ObjectProperty"},
            {"NavDataConfig", 0x288, "StructProperty"},
            {"bAutoDestroyWhenNoNavigation", 0x2F8, "BoolProperty"},
            {"bCanBeMainNavData", 0x2F8, "BoolProperty"},
            {"bCanSpawnOnRebuild", 0x2F8, "BoolProperty"},
            {"bEnableDrawing", 0x2F8, "BoolProperty"},
            {"bForceRebuildOnLoad", 0x2F8, "BoolProperty"},
            {"bRebuildAtRuntime", 0x2F8, "BoolProperty"},
            {"RuntimeGeneration", 0x2FC, "EnumProperty"},
            {"ObservedPathsTickInterval", 0x304, "FloatProperty"},
            {"DataVersion", 0x308, "UInt32Property"},
            {"SupportedAreas", 0x3E0, "ArrayProperty"},
        }};
    };

    struct NavigationFilterArea
    {
        static constexpr std::string_view Name = "NavigationFilterArea";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AreaClass = 0x0;
            static constexpr std::uintptr_t TravelCostOverride = 0x8;
            static constexpr std::uintptr_t EnteringCostOverride = 0xC;
            static constexpr std::uintptr_t bIsExcluded = 0x10;
            static constexpr std::uintptr_t bOverrideEnteringCost = 0x10;
            static constexpr std::uintptr_t bOverrideTravelCost = 0x10;
        };

        inline static constexpr std::array<PropertyInfo, 6> Properties{{
            {"AreaClass", 0x0, "ClassProperty"},
            {"TravelCostOverride", 0x8, "FloatProperty"},
            {"EnteringCostOverride", 0xC, "FloatProperty"},
            {"bIsExcluded", 0x10, "BoolProperty"},
            {"bOverrideEnteringCost", 0x10, "BoolProperty"},
            {"bOverrideTravelCost", 0x10, "BoolProperty"},
        }};
    };

    struct NavigationFilterFlags
    {
        static constexpr std::string_view Name = "NavigationFilterFlags";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bNavFlag0 = 0x0;
            static constexpr std::uintptr_t bNavFlag1 = 0x0;
            static constexpr std::uintptr_t bNavFlag2 = 0x0;
            static constexpr std::uintptr_t bNavFlag3 = 0x0;
            static constexpr std::uintptr_t bNavFlag4 = 0x0;
            static constexpr std::uintptr_t bNavFlag5 = 0x0;
            static constexpr std::uintptr_t bNavFlag6 = 0x0;
            static constexpr std::uintptr_t bNavFlag7 = 0x0;
            static constexpr std::uintptr_t bNavFlag10 = 0x1;
            static constexpr std::uintptr_t bNavFlag11 = 0x1;
            static constexpr std::uintptr_t bNavFlag12 = 0x1;
            static constexpr std::uintptr_t bNavFlag13 = 0x1;
            static constexpr std::uintptr_t bNavFlag14 = 0x1;
            static constexpr std::uintptr_t bNavFlag15 = 0x1;
            static constexpr std::uintptr_t bNavFlag8 = 0x1;
            static constexpr std::uintptr_t bNavFlag9 = 0x1;
        };

        inline static constexpr std::array<PropertyInfo, 16> Properties{{
            {"bNavFlag0", 0x0, "BoolProperty"},
            {"bNavFlag1", 0x0, "BoolProperty"},
            {"bNavFlag2", 0x0, "BoolProperty"},
            {"bNavFlag3", 0x0, "BoolProperty"},
            {"bNavFlag4", 0x0, "BoolProperty"},
            {"bNavFlag5", 0x0, "BoolProperty"},
            {"bNavFlag6", 0x0, "BoolProperty"},
            {"bNavFlag7", 0x0, "BoolProperty"},
            {"bNavFlag10", 0x1, "BoolProperty"},
            {"bNavFlag11", 0x1, "BoolProperty"},
            {"bNavFlag12", 0x1, "BoolProperty"},
            {"bNavFlag13", 0x1, "BoolProperty"},
            {"bNavFlag14", 0x1, "BoolProperty"},
            {"bNavFlag15", 0x1, "BoolProperty"},
            {"bNavFlag8", 0x1, "BoolProperty"},
            {"bNavFlag9", 0x1, "BoolProperty"},
        }};
    };

    struct NavigationGraph
    {
        static constexpr std::string_view Name = "NavigationGraph";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavigationData";
        struct Offsets
        {
            static constexpr std::uintptr_t RenderingComp = 0x280;
            static constexpr std::uintptr_t NavDataConfig = 0x288;
            static constexpr std::uintptr_t bAutoDestroyWhenNoNavigation = 0x2F8;
            static constexpr std::uintptr_t bCanBeMainNavData = 0x2F8;
            static constexpr std::uintptr_t bCanSpawnOnRebuild = 0x2F8;
            static constexpr std::uintptr_t bEnableDrawing = 0x2F8;
            static constexpr std::uintptr_t bForceRebuildOnLoad = 0x2F8;
            static constexpr std::uintptr_t bRebuildAtRuntime = 0x2F8;
            static constexpr std::uintptr_t RuntimeGeneration = 0x2FC;
            static constexpr std::uintptr_t ObservedPathsTickInterval = 0x304;
            static constexpr std::uintptr_t DataVersion = 0x308;
            static constexpr std::uintptr_t SupportedAreas = 0x3E0;
        };

        inline static constexpr std::array<PropertyInfo, 12> Properties{{
            {"RenderingComp", 0x280, "ObjectProperty"},
            {"NavDataConfig", 0x288, "StructProperty"},
            {"bAutoDestroyWhenNoNavigation", 0x2F8, "BoolProperty"},
            {"bCanBeMainNavData", 0x2F8, "BoolProperty"},
            {"bCanSpawnOnRebuild", 0x2F8, "BoolProperty"},
            {"bEnableDrawing", 0x2F8, "BoolProperty"},
            {"bForceRebuildOnLoad", 0x2F8, "BoolProperty"},
            {"bRebuildAtRuntime", 0x2F8, "BoolProperty"},
            {"RuntimeGeneration", 0x2FC, "EnumProperty"},
            {"ObservedPathsTickInterval", 0x304, "FloatProperty"},
            {"DataVersion", 0x308, "UInt32Property"},
            {"SupportedAreas", 0x3E0, "ArrayProperty"},
        }};
    };

    struct NavigationGraphNode
    {
        static constexpr std::string_view Name = "NavigationGraphNode";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t PrimaryActorTick = 0x28;
            static constexpr std::uintptr_t bAlwaysRelevant = 0x58;
            static constexpr std::uintptr_t bCallPreReplication = 0x58;
            static constexpr std::uintptr_t bCallPreReplicationForReplay = 0x58;
            static constexpr std::uintptr_t bHidden = 0x58;
            static constexpr std::uintptr_t bNetTemporary = 0x58;
            static constexpr std::uintptr_t bOnlyRelevantToOwner = 0x58;
            static constexpr std::uintptr_t bReplicateMovement = 0x58;
            static constexpr std::uintptr_t bExchangedRoles = 0x59;
            static constexpr std::uintptr_t bForceNetAddressable = 0x59;
            static constexpr std::uintptr_t bNetLoadOnClient = 0x59;
            static constexpr std::uintptr_t bNetUseOwnerRelevancy = 0x59;
            static constexpr std::uintptr_t bRelevantForLevelBounds = 0x59;
            static constexpr std::uintptr_t bRelevantForNetworkReplays = 0x59;
            static constexpr std::uintptr_t bReplayRewindable = 0x59;
            static constexpr std::uintptr_t bTearOff = 0x59;
            static constexpr std::uintptr_t bAllowTickBeforeBeginPlay = 0x5A;
            static constexpr std::uintptr_t bAutoDestroyWhenFinished = 0x5A;
            static constexpr std::uintptr_t bBlockInput = 0x5A;
            static constexpr std::uintptr_t bCanBeDamaged = 0x5A;
            static constexpr std::uintptr_t bCollideWhenPlacing = 0x5A;
            static constexpr std::uintptr_t bFindCameraComponentWhenViewTarget = 0x5A;
            static constexpr std::uintptr_t bGenerateOverlapEventsDuringLevelStreaming = 0x5A;
            static constexpr std::uintptr_t bIgnoresOriginShifting = 0x5A;
            static constexpr std::uintptr_t bAllowReceiveTickEventOnDedicatedServer = 0x5B;
            static constexpr std::uintptr_t bCanBeInCluster = 0x5B;
            static constexpr std::uintptr_t bEnableAutoLODGeneration = 0x5B;
            static constexpr std::uintptr_t bIsEditorOnlyActor = 0x5B;
            static constexpr std::uintptr_t bReplicateUsingRegisteredSubObjectList = 0x5B;
            static constexpr std::uintptr_t bReplicates = 0x5B;
            static constexpr std::uintptr_t bActorEnableCollision = 0x5D;
            static constexpr std::uintptr_t bActorIsBeingDestroyed = 0x5D;
            static constexpr std::uintptr_t bAsyncPhysicsTickEnabled = 0x5D;
            static constexpr std::uintptr_t UpdateOverlapsMethodDuringLevelStreaming = 0x5E;
            static constexpr std::uintptr_t DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5F;
            static constexpr std::uintptr_t RemoteRole = 0x60;
            static constexpr std::uintptr_t InitialLifeSpan = 0x64;
            static constexpr std::uintptr_t CustomTimeDilation = 0x68;
            static constexpr std::uintptr_t RayTracingGroupId = 0x6C;
            static constexpr std::uintptr_t AttachmentReplication = 0x70;
            static constexpr std::uintptr_t ReplicatedMovement = 0xD0;
            static constexpr std::uintptr_t Owner = 0x158;
            static constexpr std::uintptr_t NetDriverName = 0x160;
            static constexpr std::uintptr_t Role = 0x164;
            static constexpr std::uintptr_t NetDormancy = 0x165;
            static constexpr std::uintptr_t SpawnCollisionHandlingMethod = 0x166;
            static constexpr std::uintptr_t AutoReceiveInput = 0x167;
            static constexpr std::uintptr_t InputPriority = 0x168;
            static constexpr std::uintptr_t InputComponent = 0x170;
            static constexpr std::uintptr_t NetTag = 0x178;
            static constexpr std::uintptr_t NetCullDistanceSquared = 0x17C;
            static constexpr std::uintptr_t NetUpdateFrequency = 0x180;
            static constexpr std::uintptr_t MinNetUpdateFrequency = 0x184;
            static constexpr std::uintptr_t NetPriority = 0x188;
            static constexpr std::uintptr_t PhysicsReplicationMode = 0x18C;
            static constexpr std::uintptr_t Instigator = 0x198;
            static constexpr std::uintptr_t Children = 0x1A0;
            static constexpr std::uintptr_t RootComponent = 0x1B0;
            static constexpr std::uintptr_t HLODLayer = 0x1C8;
            static constexpr std::uintptr_t Layers = 0x1D0;
            static constexpr std::uintptr_t ParentComponent = 0x1E0;
            static constexpr std::uintptr_t Tags = 0x1F8;
            static constexpr std::uintptr_t OnTakeAnyDamage = 0x208;
            static constexpr std::uintptr_t OnTakePointDamage = 0x209;
            static constexpr std::uintptr_t OnTakeRadialDamage = 0x20A;
            static constexpr std::uintptr_t OnActorBeginOverlap = 0x20B;
            static constexpr std::uintptr_t OnActorEndOverlap = 0x20C;
            static constexpr std::uintptr_t OnBeginCursorOver = 0x20D;
            static constexpr std::uintptr_t OnEndCursorOver = 0x20E;
            static constexpr std::uintptr_t OnClicked = 0x20F;
            static constexpr std::uintptr_t OnReleased = 0x210;
            static constexpr std::uintptr_t OnInputTouchBegin = 0x211;
            static constexpr std::uintptr_t OnInputTouchEnd = 0x212;
            static constexpr std::uintptr_t OnInputTouchEnter = 0x213;
            static constexpr std::uintptr_t OnInputTouchLeave = 0x214;
            static constexpr std::uintptr_t OnActorHit = 0x215;
            static constexpr std::uintptr_t OnDestroyed = 0x216;
            static constexpr std::uintptr_t OnEndPlay = 0x217;
            static constexpr std::uintptr_t InstanceComponents = 0x258;
            static constexpr std::uintptr_t BlueprintCreatedComponents = 0x268;
        };

        inline static constexpr std::array<PropertyInfo, 80> Properties{{
            {"PrimaryActorTick", 0x28, "StructProperty"},
            {"bAlwaysRelevant", 0x58, "BoolProperty"},
            {"bCallPreReplication", 0x58, "BoolProperty"},
            {"bCallPreReplicationForReplay", 0x58, "BoolProperty"},
            {"bHidden", 0x58, "BoolProperty"},
            {"bNetTemporary", 0x58, "BoolProperty"},
            {"bOnlyRelevantToOwner", 0x58, "BoolProperty"},
            {"bReplicateMovement", 0x58, "BoolProperty"},
            {"bExchangedRoles", 0x59, "BoolProperty"},
            {"bForceNetAddressable", 0x59, "BoolProperty"},
            {"bNetLoadOnClient", 0x59, "BoolProperty"},
            {"bNetUseOwnerRelevancy", 0x59, "BoolProperty"},
            {"bRelevantForLevelBounds", 0x59, "BoolProperty"},
            {"bRelevantForNetworkReplays", 0x59, "BoolProperty"},
            {"bReplayRewindable", 0x59, "BoolProperty"},
            {"bTearOff", 0x59, "BoolProperty"},
            {"bAllowTickBeforeBeginPlay", 0x5A, "BoolProperty"},
            {"bAutoDestroyWhenFinished", 0x5A, "BoolProperty"},
            {"bBlockInput", 0x5A, "BoolProperty"},
            {"bCanBeDamaged", 0x5A, "BoolProperty"},
            {"bCollideWhenPlacing", 0x5A, "BoolProperty"},
            {"bFindCameraComponentWhenViewTarget", 0x5A, "BoolProperty"},
            {"bGenerateOverlapEventsDuringLevelStreaming", 0x5A, "BoolProperty"},
            {"bIgnoresOriginShifting", 0x5A, "BoolProperty"},
            {"bAllowReceiveTickEventOnDedicatedServer", 0x5B, "BoolProperty"},
            {"bCanBeInCluster", 0x5B, "BoolProperty"},
            {"bEnableAutoLODGeneration", 0x5B, "BoolProperty"},
            {"bIsEditorOnlyActor", 0x5B, "BoolProperty"},
            {"bReplicateUsingRegisteredSubObjectList", 0x5B, "BoolProperty"},
            {"bReplicates", 0x5B, "BoolProperty"},
            {"bActorEnableCollision", 0x5D, "BoolProperty"},
            {"bActorIsBeingDestroyed", 0x5D, "BoolProperty"},
            {"bAsyncPhysicsTickEnabled", 0x5D, "BoolProperty"},
            {"UpdateOverlapsMethodDuringLevelStreaming", 0x5E, "EnumProperty"},
            {"DefaultUpdateOverlapsMethodDuringLevelStreaming", 0x5F, "EnumProperty"},
            {"RemoteRole", 0x60, "ByteProperty"},
            {"InitialLifeSpan", 0x64, "FloatProperty"},
            {"CustomTimeDilation", 0x68, "FloatProperty"},
            {"RayTracingGroupId", 0x6C, "IntProperty"},
            {"AttachmentReplication", 0x70, "StructProperty"},
            {"ReplicatedMovement", 0xD0, "StructProperty"},
            {"Owner", 0x158, "ObjectProperty"},
            {"NetDriverName", 0x160, "NameProperty"},
            {"Role", 0x164, "ByteProperty"},
            {"NetDormancy", 0x165, "ByteProperty"},
            {"SpawnCollisionHandlingMethod", 0x166, "EnumProperty"},
            {"AutoReceiveInput", 0x167, "ByteProperty"},
            {"InputPriority", 0x168, "IntProperty"},
            {"InputComponent", 0x170, "ObjectProperty"},
            {"NetTag", 0x178, "IntProperty"},
            {"NetCullDistanceSquared", 0x17C, "FloatProperty"},
            {"NetUpdateFrequency", 0x180, "FloatProperty"},
            {"MinNetUpdateFrequency", 0x184, "FloatProperty"},
            {"NetPriority", 0x188, "FloatProperty"},
            {"PhysicsReplicationMode", 0x18C, "EnumProperty"},
            {"Instigator", 0x198, "ObjectProperty"},
            {"Children", 0x1A0, "ArrayProperty"},
            {"RootComponent", 0x1B0, "ObjectProperty"},
            {"HLODLayer", 0x1C8, "ObjectProperty"},
            {"Layers", 0x1D0, "ArrayProperty"},
            {"ParentComponent", 0x1E0, "WeakObjectProperty"},
            {"Tags", 0x1F8, "ArrayProperty"},
            {"OnTakeAnyDamage", 0x208, "MulticastSparseDelegateProperty"},
            {"OnTakePointDamage", 0x209, "MulticastSparseDelegateProperty"},
            {"OnTakeRadialDamage", 0x20A, "MulticastSparseDelegateProperty"},
            {"OnActorBeginOverlap", 0x20B, "MulticastSparseDelegateProperty"},
            {"OnActorEndOverlap", 0x20C, "MulticastSparseDelegateProperty"},
            {"OnBeginCursorOver", 0x20D, "MulticastSparseDelegateProperty"},
            {"OnEndCursorOver", 0x20E, "MulticastSparseDelegateProperty"},
            {"OnClicked", 0x20F, "MulticastSparseDelegateProperty"},
            {"OnReleased", 0x210, "MulticastSparseDelegateProperty"},
            {"OnInputTouchBegin", 0x211, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnd", 0x212, "MulticastSparseDelegateProperty"},
            {"OnInputTouchEnter", 0x213, "MulticastSparseDelegateProperty"},
            {"OnInputTouchLeave", 0x214, "MulticastSparseDelegateProperty"},
            {"OnActorHit", 0x215, "MulticastSparseDelegateProperty"},
            {"OnDestroyed", 0x216, "MulticastSparseDelegateProperty"},
            {"OnEndPlay", 0x217, "MulticastSparseDelegateProperty"},
            {"InstanceComponents", 0x258, "ArrayProperty"},
            {"BlueprintCreatedComponents", 0x268, "ArrayProperty"},
        }};
    };

    struct NavigationGraphNodeComponent
    {
        static constexpr std::string_view Name = "NavigationGraphNodeComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "SceneComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t Node = 0x240;
            static constexpr std::uintptr_t NextNodeComponent = 0x258;
            static constexpr std::uintptr_t PrevNodeComponent = 0x260;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Node", 0x240, "StructProperty"},
            {"NextNodeComponent", 0x258, "ObjectProperty"},
            {"PrevNodeComponent", 0x260, "ObjectProperty"},
        }};
    };

    struct NavigationInvokerComponent
    {
        static constexpr std::string_view Name = "NavigationInvokerComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "ActorComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t TileGenerationRadius = 0xC0;
            static constexpr std::uintptr_t TileRemovalRadius = 0xC4;
            static constexpr std::uintptr_t SupportedAgents = 0xC8;
            static constexpr std::uintptr_t Priority = 0xCC;
        };

        inline static constexpr std::array<PropertyInfo, 4> Properties{{
            {"TileGenerationRadius", 0xC0, "FloatProperty"},
            {"TileRemovalRadius", 0xC4, "FloatProperty"},
            {"SupportedAgents", 0xC8, "StructProperty"},
            {"Priority", 0xCC, "EnumProperty"},
        }};
    };

    struct NavigationObjectRepository
    {
        static constexpr std::string_view Name = "NavigationObjectRepository";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "WorldSubsystem";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NavigationPath
    {
        static constexpr std::string_view Name = "NavigationPath";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t PathUpdatedNotifier = 0x28;
            static constexpr std::uintptr_t PathPoints = 0x38;
            static constexpr std::uintptr_t RecalculateOnInvalidation = 0x48;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"PathUpdatedNotifier", 0x28, "MulticastInlineDelegateProperty"},
            {"PathPoints", 0x38, "ArrayProperty"},
            {"RecalculateOnInvalidation", 0x48, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 9> FunctionNames{{
            "EnableDebugDrawing",
            "EnableRecalculationOnInvalidation",
            "GetDebugString",
            "GetLengthFromPosition",
            "GetPathCost",
            "GetPathLength",
            "IsPartial",
            "IsStringPulled",
            "IsValid",
        }};
    };

    struct NavigationPathGenerator
    {
        static constexpr std::string_view Name = "NavigationPathGenerator";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Interface";
        struct Offsets
        {
        };

        inline static constexpr std::array<PropertyInfo, 0> Properties{{
        }};
    };

    struct NavigationQueryFilter
    {
        static constexpr std::string_view Name = "NavigationQueryFilter";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Object";
        struct Offsets
        {
            static constexpr std::uintptr_t Areas = 0x28;
            static constexpr std::uintptr_t IncludeFlags = 0x38;
            static constexpr std::uintptr_t ExcludeFlags = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Areas", 0x28, "ArrayProperty"},
            {"IncludeFlags", 0x38, "StructProperty"},
            {"ExcludeFlags", 0x3C, "StructProperty"},
        }};
    };

    struct NavigationSystemModuleConfig
    {
        static constexpr std::string_view Name = "NavigationSystemModuleConfig";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavigationSystemConfig";
        struct Offsets
        {
            static constexpr std::uintptr_t bAutoSpawnMissingNavData = 0x50;
            static constexpr std::uintptr_t bCreateOnClient = 0x50;
            static constexpr std::uintptr_t bDirtyNavDataPackageOnNavigationGenerationFinished = 0x50;
            static constexpr std::uintptr_t bSpawnNavDataInNavBoundsLevel = 0x50;
            static constexpr std::uintptr_t bStrictlyStatic = 0x50;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bAutoSpawnMissingNavData", 0x50, "BoolProperty"},
            {"bCreateOnClient", 0x50, "BoolProperty"},
            {"bDirtyNavDataPackageOnNavigationGenerationFinished", 0x50, "BoolProperty"},
            {"bSpawnNavDataInNavBoundsLevel", 0x50, "BoolProperty"},
            {"bStrictlyStatic", 0x50, "BoolProperty"},
        }};
    };

    struct NavigationSystemV1
    {
        static constexpr std::string_view Name = "NavigationSystemV1";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavigationSystemBase";
        struct Offsets
        {
            static constexpr std::uintptr_t MainNavData = 0x28;
            static constexpr std::uintptr_t AbstractNavData = 0x30;
            static constexpr std::uintptr_t DefaultAgentName = 0x38;
            static constexpr std::uintptr_t CrowdManagerClass = 0x40;
            static constexpr std::uintptr_t bAllowClientSideNavigation = 0x60;
            static constexpr std::uintptr_t bAutoCreateNavigationData = 0x60;
            static constexpr std::uintptr_t bDirtyNavDataPackageOnNavigationGenerationFinished = 0x60;
            static constexpr std::uintptr_t bInitialBuildingLocked = 0x60;
            static constexpr std::uintptr_t bShouldDiscardSubLevelNavData = 0x60;
            static constexpr std::uintptr_t bSpawnNavDataInNavBoundsLevel = 0x60;
            static constexpr std::uintptr_t bSupportRebuilding = 0x60;
            static constexpr std::uintptr_t bTickWhilePaused = 0x60;
            static constexpr std::uintptr_t bSkipAgentHeightCheckWhenPickingNavData = 0x61;
            static constexpr std::uintptr_t GeometryExportTriangleCountWarningThreshold = 0x64;
            static constexpr std::uintptr_t bGenerateNavigationOnlyAroundNavigationInvokers = 0x68;
            static constexpr std::uintptr_t bPreserveTilesOutsideInvokerRadius = 0x68;
            static constexpr std::uintptr_t ActiveTilesUpdateInterval = 0x6C;
            static constexpr std::uintptr_t InvokersMaximumDistanceFromSeed = 0x70;
            static constexpr std::uintptr_t DataGatheringMode = 0x78;
            static constexpr std::uintptr_t DirtyAreaWarningSizeThreshold = 0x7C;
            static constexpr std::uintptr_t DirtyAreaSummaryMinGameDurationMinutes = 0x80;
            static constexpr std::uintptr_t DirtyAreaTileDirtyMarksPerMinuteWarningThreshold = 0x84;
            static constexpr std::uintptr_t GatheringNavModifiersWarningLimitTime = 0x88;
            static constexpr std::uintptr_t SupportedAgents = 0x90;
            static constexpr std::uintptr_t SupportedAgentsMask = 0xA0;
            static constexpr std::uintptr_t BuildBounds = 0xA8;
            static constexpr std::uintptr_t NavDataSet = 0xE0;
            static constexpr std::uintptr_t NavDataRegistrationQueue = 0xF0;
            static constexpr std::uintptr_t OnNavDataRegisteredEvent = 0x110;
            static constexpr std::uintptr_t OnNavigationGenerationFinishedDelegate = 0x120;
            static constexpr std::uintptr_t OperationMode = 0x1A0;
            static constexpr std::uintptr_t Repository = 0x288;
        };

        inline static constexpr std::array<PropertyInfo, 32> Properties{{
            {"MainNavData", 0x28, "ObjectProperty"},
            {"AbstractNavData", 0x30, "ObjectProperty"},
            {"DefaultAgentName", 0x38, "NameProperty"},
            {"CrowdManagerClass", 0x40, "SoftClassProperty"},
            {"bAllowClientSideNavigation", 0x60, "BoolProperty"},
            {"bAutoCreateNavigationData", 0x60, "BoolProperty"},
            {"bDirtyNavDataPackageOnNavigationGenerationFinished", 0x60, "BoolProperty"},
            {"bInitialBuildingLocked", 0x60, "BoolProperty"},
            {"bShouldDiscardSubLevelNavData", 0x60, "BoolProperty"},
            {"bSpawnNavDataInNavBoundsLevel", 0x60, "BoolProperty"},
            {"bSupportRebuilding", 0x60, "BoolProperty"},
            {"bTickWhilePaused", 0x60, "BoolProperty"},
            {"bSkipAgentHeightCheckWhenPickingNavData", 0x61, "BoolProperty"},
            {"GeometryExportTriangleCountWarningThreshold", 0x64, "IntProperty"},
            {"bGenerateNavigationOnlyAroundNavigationInvokers", 0x68, "BoolProperty"},
            {"bPreserveTilesOutsideInvokerRadius", 0x68, "BoolProperty"},
            {"ActiveTilesUpdateInterval", 0x6C, "FloatProperty"},
            {"InvokersMaximumDistanceFromSeed", 0x70, "DoubleProperty"},
            {"DataGatheringMode", 0x78, "EnumProperty"},
            {"DirtyAreaWarningSizeThreshold", 0x7C, "FloatProperty"},
            {"DirtyAreaSummaryMinGameDurationMinutes", 0x80, "FloatProperty"},
            {"DirtyAreaTileDirtyMarksPerMinuteWarningThreshold", 0x84, "IntProperty"},
            {"GatheringNavModifiersWarningLimitTime", 0x88, "FloatProperty"},
            {"SupportedAgents", 0x90, "ArrayProperty"},
            {"SupportedAgentsMask", 0xA0, "StructProperty"},
            {"BuildBounds", 0xA8, "StructProperty"},
            {"NavDataSet", 0xE0, "ArrayProperty"},
            {"NavDataRegistrationQueue", 0xF0, "ArrayProperty"},
            {"OnNavDataRegisteredEvent", 0x110, "MulticastInlineDelegateProperty"},
            {"OnNavigationGenerationFinishedDelegate", 0x120, "MulticastInlineDelegateProperty"},
            {"OperationMode", 0x1A0, "EnumProperty"},
            {"Repository", 0x288, "ObjectProperty"},
        }};

        inline static constexpr std::array<std::string_view, 20> FunctionNames{{
            "FindPathToActorSynchronously",
            "FindPathToLocationSynchronously",
            "GetNavigationSystem",
            "GetPathCost",
            "GetPathLength",
            "GetSupportedAgentNames",
            "IsNavigationBeingBuilt",
            "IsNavigationBeingBuiltOrLocked",
            "K2_GetRandomLocationInNavigableRadius",
            "K2_GetRandomPointInNavigableRadius",
            "K2_GetRandomReachablePointInRadius",
            "K2_ProjectPointToNavigation",
            "K2_ReplaceAreaInOctreeData",
            "NavigationRaycast",
            "OnNavigationBoundsUpdated",
            "RegisterNavigationInvoker",
            "ResetMaxSimultaneousTileGenerationJobsCount",
            "SetGeometryGatheringMode",
            "SetMaxSimultaneousTileGenerationJobsCount",
            "UnregisterNavigationInvoker",
        }};
    };

    struct NavigationTestingActor
    {
        static constexpr std::string_view Name = "NavigationTestingActor";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "Actor";
        struct Offsets
        {
            static constexpr std::uintptr_t CapsuleComponent = 0x288;
            static constexpr std::uintptr_t InvokerComponent = 0x290;
            static constexpr std::uintptr_t bActAsNavigationInvoker = 0x298;
            static constexpr std::uintptr_t NavAgentProps = 0x2A0;
            static constexpr std::uintptr_t QueryingExtent = 0x2D0;
            static constexpr std::uintptr_t MyNavData = 0x2E8;
            static constexpr std::uintptr_t ProjectedLocation = 0x2F0;
            static constexpr std::uintptr_t bProjectedLocationValid = 0x308;
            static constexpr std::uintptr_t bSearchStart = 0x308;
            static constexpr std::uintptr_t CostLimitFactor = 0x30C;
            static constexpr std::uintptr_t MinimumCostLimit = 0x310;
            static constexpr std::uintptr_t bBacktracking = 0x314;
            static constexpr std::uintptr_t bDrawDistanceToWall = 0x314;
            static constexpr std::uintptr_t bDrawIfNavDataIsReadyInRadius = 0x314;
            static constexpr std::uintptr_t bDrawIfNavDataIsReadyToQueryTargetActor = 0x314;
            static constexpr std::uintptr_t bDrawRaycastToQueryTargetActor = 0x314;
            static constexpr std::uintptr_t bGatherDetailedInfo = 0x314;
            static constexpr std::uintptr_t bRequireNavigableEndLocation = 0x314;
            static constexpr std::uintptr_t bUseHierarchicalPathfinding = 0x314;
            static constexpr std::uintptr_t QueryTargetActor = 0x318;
            static constexpr std::uintptr_t bShouldBeVisibleInGame = 0x320;
            static constexpr std::uintptr_t bShowBestPath = 0x320;
            static constexpr std::uintptr_t bShowDiffWithPreviousStep = 0x320;
            static constexpr std::uintptr_t bShowNodePool = 0x320;
            static constexpr std::uintptr_t RadiusUsedToValidateNavData = 0x324;
            static constexpr std::uintptr_t CostDisplayMode = 0x328;
            static constexpr std::uintptr_t TextCanvasOffset = 0x330;
            static constexpr std::uintptr_t bPathExist = 0x340;
            static constexpr std::uintptr_t bPathIsPartial = 0x340;
            static constexpr std::uintptr_t bPathSearchOutOfNodes = 0x340;
            static constexpr std::uintptr_t PathfindingTime = 0x344;
            static constexpr std::uintptr_t PathCost = 0x348;
            static constexpr std::uintptr_t PathfindingSteps = 0x350;
            static constexpr std::uintptr_t OtherActor = 0x358;
            static constexpr std::uintptr_t FilterClass = 0x360;
            static constexpr std::uintptr_t ShowStepIndex = 0x368;
            static constexpr std::uintptr_t OffsetFromCornersDistance = 0x36C;
        };

        inline static constexpr std::array<PropertyInfo, 37> Properties{{
            {"CapsuleComponent", 0x288, "ObjectProperty"},
            {"InvokerComponent", 0x290, "ObjectProperty"},
            {"bActAsNavigationInvoker", 0x298, "BoolProperty"},
            {"NavAgentProps", 0x2A0, "StructProperty"},
            {"QueryingExtent", 0x2D0, "StructProperty"},
            {"MyNavData", 0x2E8, "ObjectProperty"},
            {"ProjectedLocation", 0x2F0, "StructProperty"},
            {"bProjectedLocationValid", 0x308, "BoolProperty"},
            {"bSearchStart", 0x308, "BoolProperty"},
            {"CostLimitFactor", 0x30C, "FloatProperty"},
            {"MinimumCostLimit", 0x310, "FloatProperty"},
            {"bBacktracking", 0x314, "BoolProperty"},
            {"bDrawDistanceToWall", 0x314, "BoolProperty"},
            {"bDrawIfNavDataIsReadyInRadius", 0x314, "BoolProperty"},
            {"bDrawIfNavDataIsReadyToQueryTargetActor", 0x314, "BoolProperty"},
            {"bDrawRaycastToQueryTargetActor", 0x314, "BoolProperty"},
            {"bGatherDetailedInfo", 0x314, "BoolProperty"},
            {"bRequireNavigableEndLocation", 0x314, "BoolProperty"},
            {"bUseHierarchicalPathfinding", 0x314, "BoolProperty"},
            {"QueryTargetActor", 0x318, "ObjectProperty"},
            {"bShouldBeVisibleInGame", 0x320, "BoolProperty"},
            {"bShowBestPath", 0x320, "BoolProperty"},
            {"bShowDiffWithPreviousStep", 0x320, "BoolProperty"},
            {"bShowNodePool", 0x320, "BoolProperty"},
            {"RadiusUsedToValidateNavData", 0x324, "FloatProperty"},
            {"CostDisplayMode", 0x328, "ByteProperty"},
            {"TextCanvasOffset", 0x330, "StructProperty"},
            {"bPathExist", 0x340, "BoolProperty"},
            {"bPathIsPartial", 0x340, "BoolProperty"},
            {"bPathSearchOutOfNodes", 0x340, "BoolProperty"},
            {"PathfindingTime", 0x344, "FloatProperty"},
            {"PathCost", 0x348, "DoubleProperty"},
            {"PathfindingSteps", 0x350, "IntProperty"},
            {"OtherActor", 0x358, "ObjectProperty"},
            {"FilterClass", 0x360, "ClassProperty"},
            {"ShowStepIndex", 0x368, "IntProperty"},
            {"OffsetFromCornersDistance", 0x36C, "FloatProperty"},
        }};
    };

    struct RecastFilter_UseDefaultArea
    {
        static constexpr std::string_view Name = "RecastFilter_UseDefaultArea";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavigationQueryFilter";
        struct Offsets
        {
            static constexpr std::uintptr_t Areas = 0x28;
            static constexpr std::uintptr_t IncludeFlags = 0x38;
            static constexpr std::uintptr_t ExcludeFlags = 0x3C;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"Areas", 0x28, "ArrayProperty"},
            {"IncludeFlags", 0x38, "StructProperty"},
            {"ExcludeFlags", 0x3C, "StructProperty"},
        }};
    };

    struct RecastNavMesh
    {
        static constexpr std::string_view Name = "RecastNavMesh";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavigationData";
        struct Offsets
        {
            static constexpr std::uintptr_t bDrawFilledPolys = 0x438;
            static constexpr std::uintptr_t bDrawNavMeshEdges = 0x438;
            static constexpr std::uintptr_t bDrawPathCollidingGeometry = 0x438;
            static constexpr std::uintptr_t bDrawPolyEdges = 0x438;
            static constexpr std::uintptr_t bDrawTileBounds = 0x438;
            static constexpr std::uintptr_t bDrawTileLabels = 0x438;
            static constexpr std::uintptr_t bDrawTileResolutions = 0x438;
            static constexpr std::uintptr_t bDrawTriangleEdges = 0x438;
            static constexpr std::uintptr_t bDrawDefaultPolygonCost = 0x439;
            static constexpr std::uintptr_t bDrawLabelsOnPathNodes = 0x439;
            static constexpr std::uintptr_t bDrawNavLinks = 0x439;
            static constexpr std::uintptr_t bDrawPolygonAreaIDs = 0x439;
            static constexpr std::uintptr_t bDrawPolygonFlags = 0x439;
            static constexpr std::uintptr_t bDrawPolygonLabels = 0x439;
            static constexpr std::uintptr_t bDrawTileBuildTimes = 0x439;
            static constexpr std::uintptr_t bDrawTileBuildTimesHeatMap = 0x439;
            static constexpr std::uintptr_t bDistinctlyDrawTilesBeingBuilt = 0x43A;
            static constexpr std::uintptr_t bDrawClusters = 0x43A;
            static constexpr std::uintptr_t bDrawFailedNavLinks = 0x43A;
            static constexpr std::uintptr_t bDrawMarkedForbiddenPolys = 0x43A;
            static constexpr std::uintptr_t bDrawOctree = 0x43A;
            static constexpr std::uintptr_t bDrawOctreeDetails = 0x43A;
            static constexpr std::uintptr_t bDrawOnScreenInformation = 0x43A;
            static constexpr std::uintptr_t bDrawTileStateGrid = 0x43A;
            static constexpr std::uintptr_t DrawOffset = 0x43C;
            static constexpr std::uintptr_t TileGenerationDebug = 0x440;
            static constexpr std::uintptr_t bFixedTilePoolSize = 0x474;
            static constexpr std::uintptr_t TilePoolSize = 0x478;
            static constexpr std::uintptr_t TileSizeUU = 0x47C;
            static constexpr std::uintptr_t AverageLayersPerTile = 0x480;
            static constexpr std::uintptr_t bEnableProgressiveBuild = 0x484;
            static constexpr std::uintptr_t bMinimizeLinkPoolSize = 0x484;
            static constexpr std::uintptr_t MaxCoverageTilesPerTick = 0x488;
            static constexpr std::uintptr_t MaxCoverageInitialScanTilesPerTick = 0x48C;
            static constexpr std::uintptr_t CoveragePendingBacklogLimit = 0x490;
            static constexpr std::uintptr_t CoveragePoolMaxUsageFraction = 0x494;
            static constexpr std::uintptr_t CellSize = 0x498;
            static constexpr std::uintptr_t CellHeight = 0x49C;
            static constexpr std::uintptr_t AgentMaxStepHeight = 0x4A0;
            static constexpr std::uintptr_t NavMeshResolutionParams = 0x4A4;
            static constexpr std::uintptr_t AgentRadius = 0x4C8;
            static constexpr std::uintptr_t AgentHeight = 0x4CC;
            static constexpr std::uintptr_t AgentMaxSlope = 0x4D0;
            static constexpr std::uintptr_t MinRegionArea = 0x4D4;
            static constexpr std::uintptr_t MergeRegionSize = 0x4D8;
            static constexpr std::uintptr_t MaxVerticalMergeError = 0x4DC;
            static constexpr std::uintptr_t MaxSimplificationError = 0x4E0;
            static constexpr std::uintptr_t SimplificationElevationRatio = 0x4E4;
            static constexpr std::uintptr_t MaxSimultaneousTileGenerationJobsCount = 0x4E8;
            static constexpr std::uintptr_t TileNumberHardLimit = 0x4EC;
            static constexpr std::uintptr_t ExpectedMaxLayersPerTile = 0x4F0;
            static constexpr std::uintptr_t PolyRefTileBits = 0x4F4;
            static constexpr std::uintptr_t PolyRefNavPolyBits = 0x4F8;
            static constexpr std::uintptr_t PolyRefSaltBits = 0x4FC;
            static constexpr std::uintptr_t NavMeshOriginOffset = 0x500;
            static constexpr std::uintptr_t DefaultDrawDistance = 0x518;
            static constexpr std::uintptr_t DefaultMaxSearchNodes = 0x51C;
            static constexpr std::uintptr_t DefaultMaxHierarchicalSearchNodes = 0x520;
            static constexpr std::uintptr_t LedgeSlopeFilterMode = 0x524;
            static constexpr std::uintptr_t RegionPartitioning = 0x525;
            static constexpr std::uintptr_t LayerPartitioning = 0x526;
            static constexpr std::uintptr_t RegionChunkSplits = 0x528;
            static constexpr std::uintptr_t LayerChunkSplits = 0x52C;
            static constexpr std::uintptr_t bFilterLowSpanFromTileCache = 0x530;
            static constexpr std::uintptr_t bFilterLowSpanSequences = 0x530;
            static constexpr std::uintptr_t bGenerateNavLinks = 0x530;
            static constexpr std::uintptr_t bIsWorldPartitioned = 0x530;
            static constexpr std::uintptr_t bMarkLowHeightAreas = 0x530;
            static constexpr std::uintptr_t bPerformVoxelFiltering = 0x530;
            static constexpr std::uintptr_t bSortNavigationAreasByCost = 0x530;
            static constexpr std::uintptr_t bUseExtraTopCellWhenMarkingAreas = 0x530;
            static constexpr std::uintptr_t bAllowNavLinkAsPathEnd = 0x531;
            static constexpr std::uintptr_t bDoFullyAsyncNavDataGathering = 0x531;
            static constexpr std::uintptr_t bStoreEmptyTileLayers = 0x531;
            static constexpr std::uintptr_t bUseBetterOffsetsFromCorners = 0x531;
            static constexpr std::uintptr_t bUseVirtualFilters = 0x531;
            static constexpr std::uintptr_t bUseVirtualGeometryFilteringAndDirtying = 0x531;
            static constexpr std::uintptr_t TimeSliceFilterLedgeSpansMaxYProcess = 0x534;
            static constexpr std::uintptr_t TimeSliceLongDurationDebug = 0x538;
            static constexpr std::uintptr_t InvokerTilePriorityBumpDistanceThresholdInTileUnits = 0x540;
            static constexpr std::uintptr_t InvokerTilePriorityBumpIncrease = 0x544;
            static constexpr std::uintptr_t NavLinkJumpConfigs = 0x548;
            static constexpr std::uintptr_t bUseVoxelCache = 0x55C;
            static constexpr std::uintptr_t TileSetUpdateInterval = 0x560;
            static constexpr std::uintptr_t HeuristicScale = 0x564;
            static constexpr std::uintptr_t VerticalDeviationFromGroundCompensation = 0x568;
        };

        inline static constexpr std::array<PropertyInfo, 86> Properties{{
            {"bDrawFilledPolys", 0x438, "BoolProperty"},
            {"bDrawNavMeshEdges", 0x438, "BoolProperty"},
            {"bDrawPathCollidingGeometry", 0x438, "BoolProperty"},
            {"bDrawPolyEdges", 0x438, "BoolProperty"},
            {"bDrawTileBounds", 0x438, "BoolProperty"},
            {"bDrawTileLabels", 0x438, "BoolProperty"},
            {"bDrawTileResolutions", 0x438, "BoolProperty"},
            {"bDrawTriangleEdges", 0x438, "BoolProperty"},
            {"bDrawDefaultPolygonCost", 0x439, "BoolProperty"},
            {"bDrawLabelsOnPathNodes", 0x439, "BoolProperty"},
            {"bDrawNavLinks", 0x439, "BoolProperty"},
            {"bDrawPolygonAreaIDs", 0x439, "BoolProperty"},
            {"bDrawPolygonFlags", 0x439, "BoolProperty"},
            {"bDrawPolygonLabels", 0x439, "BoolProperty"},
            {"bDrawTileBuildTimes", 0x439, "BoolProperty"},
            {"bDrawTileBuildTimesHeatMap", 0x439, "BoolProperty"},
            {"bDistinctlyDrawTilesBeingBuilt", 0x43A, "BoolProperty"},
            {"bDrawClusters", 0x43A, "BoolProperty"},
            {"bDrawFailedNavLinks", 0x43A, "BoolProperty"},
            {"bDrawMarkedForbiddenPolys", 0x43A, "BoolProperty"},
            {"bDrawOctree", 0x43A, "BoolProperty"},
            {"bDrawOctreeDetails", 0x43A, "BoolProperty"},
            {"bDrawOnScreenInformation", 0x43A, "BoolProperty"},
            {"bDrawTileStateGrid", 0x43A, "BoolProperty"},
            {"DrawOffset", 0x43C, "FloatProperty"},
            {"TileGenerationDebug", 0x440, "StructProperty"},
            {"bFixedTilePoolSize", 0x474, "BoolProperty"},
            {"TilePoolSize", 0x478, "IntProperty"},
            {"TileSizeUU", 0x47C, "FloatProperty"},
            {"AverageLayersPerTile", 0x480, "FloatProperty"},
            {"bEnableProgressiveBuild", 0x484, "BoolProperty"},
            {"bMinimizeLinkPoolSize", 0x484, "BoolProperty"},
            {"MaxCoverageTilesPerTick", 0x488, "IntProperty"},
            {"MaxCoverageInitialScanTilesPerTick", 0x48C, "IntProperty"},
            {"CoveragePendingBacklogLimit", 0x490, "IntProperty"},
            {"CoveragePoolMaxUsageFraction", 0x494, "FloatProperty"},
            {"CellSize", 0x498, "FloatProperty"},
            {"CellHeight", 0x49C, "FloatProperty"},
            {"AgentMaxStepHeight", 0x4A0, "FloatProperty"},
            {"NavMeshResolutionParams", 0x4A4, "StructProperty"},
            {"AgentRadius", 0x4C8, "FloatProperty"},
            {"AgentHeight", 0x4CC, "FloatProperty"},
            {"AgentMaxSlope", 0x4D0, "FloatProperty"},
            {"MinRegionArea", 0x4D4, "FloatProperty"},
            {"MergeRegionSize", 0x4D8, "FloatProperty"},
            {"MaxVerticalMergeError", 0x4DC, "IntProperty"},
            {"MaxSimplificationError", 0x4E0, "FloatProperty"},
            {"SimplificationElevationRatio", 0x4E4, "FloatProperty"},
            {"MaxSimultaneousTileGenerationJobsCount", 0x4E8, "IntProperty"},
            {"TileNumberHardLimit", 0x4EC, "IntProperty"},
            {"ExpectedMaxLayersPerTile", 0x4F0, "IntProperty"},
            {"PolyRefTileBits", 0x4F4, "IntProperty"},
            {"PolyRefNavPolyBits", 0x4F8, "IntProperty"},
            {"PolyRefSaltBits", 0x4FC, "IntProperty"},
            {"NavMeshOriginOffset", 0x500, "StructProperty"},
            {"DefaultDrawDistance", 0x518, "FloatProperty"},
            {"DefaultMaxSearchNodes", 0x51C, "FloatProperty"},
            {"DefaultMaxHierarchicalSearchNodes", 0x520, "FloatProperty"},
            {"LedgeSlopeFilterMode", 0x524, "EnumProperty"},
            {"RegionPartitioning", 0x525, "ByteProperty"},
            {"LayerPartitioning", 0x526, "ByteProperty"},
            {"RegionChunkSplits", 0x528, "IntProperty"},
            {"LayerChunkSplits", 0x52C, "IntProperty"},
            {"bFilterLowSpanFromTileCache", 0x530, "BoolProperty"},
            {"bFilterLowSpanSequences", 0x530, "BoolProperty"},
            {"bGenerateNavLinks", 0x530, "BoolProperty"},
            {"bIsWorldPartitioned", 0x530, "BoolProperty"},
            {"bMarkLowHeightAreas", 0x530, "BoolProperty"},
            {"bPerformVoxelFiltering", 0x530, "BoolProperty"},
            {"bSortNavigationAreasByCost", 0x530, "BoolProperty"},
            {"bUseExtraTopCellWhenMarkingAreas", 0x530, "BoolProperty"},
            {"bAllowNavLinkAsPathEnd", 0x531, "BoolProperty"},
            {"bDoFullyAsyncNavDataGathering", 0x531, "BoolProperty"},
            {"bStoreEmptyTileLayers", 0x531, "BoolProperty"},
            {"bUseBetterOffsetsFromCorners", 0x531, "BoolProperty"},
            {"bUseVirtualFilters", 0x531, "BoolProperty"},
            {"bUseVirtualGeometryFilteringAndDirtying", 0x531, "BoolProperty"},
            {"TimeSliceFilterLedgeSpansMaxYProcess", 0x534, "IntProperty"},
            {"TimeSliceLongDurationDebug", 0x538, "DoubleProperty"},
            {"InvokerTilePriorityBumpDistanceThresholdInTileUnits", 0x540, "UInt32Property"},
            {"InvokerTilePriorityBumpIncrease", 0x544, "ByteProperty"},
            {"NavLinkJumpConfigs", 0x548, "ArrayProperty"},
            {"bUseVoxelCache", 0x55C, "BoolProperty"},
            {"TileSetUpdateInterval", 0x560, "FloatProperty"},
            {"HeuristicScale", 0x564, "FloatProperty"},
            {"VerticalDeviationFromGroundCompensation", 0x568, "FloatProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "K2_ReplaceAreaInTileBounds",
        }};
    };

    struct RecastNavMeshDataChunk
    {
        static constexpr std::string_view Name = "RecastNavMeshDataChunk";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavigationDataChunk";
        struct Offsets
        {
            static constexpr std::uintptr_t NavigationDataName = 0x28;
        };

        inline static constexpr std::array<PropertyInfo, 1> Properties{{
            {"NavigationDataName", 0x28, "NameProperty"},
        }};
    };

    struct RecastNavMeshTileGenerationDebug
    {
        static constexpr std::string_view Name = "RecastNavMeshTileGenerationDebug";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t bEnabled = 0x0;
            static constexpr std::uintptr_t TileCoordinate = 0x4;
            static constexpr std::uintptr_t MaxTileCoordinate = 0x10;
            static constexpr std::uintptr_t bCollisionGeometry = 0x1C;
            static constexpr std::uintptr_t bDynamicAreas = 0x1C;
            static constexpr std::uintptr_t bGenerateDebugTileOnly = 0x1C;
            static constexpr std::uintptr_t HeightFieldRenderMode = 0x20;
            static constexpr std::uintptr_t bCompactHeightfield = 0x24;
            static constexpr std::uintptr_t bCompactHeightfieldEroded = 0x24;
            static constexpr std::uintptr_t bHeightFieldLayers = 0x24;
            static constexpr std::uintptr_t bHeightfieldBounds = 0x24;
            static constexpr std::uintptr_t bHeightfieldFromModifierAreas = 0x24;
            static constexpr std::uintptr_t bHeightfieldFromRasterization = 0x24;
            static constexpr std::uintptr_t bHeightfieldPostHeightFiltering = 0x24;
            static constexpr std::uintptr_t bHeightfieldPostInclusionBoundsFiltering = 0x24;
            static constexpr std::uintptr_t bCompactHeightfieldDistances = 0x25;
            static constexpr std::uintptr_t bCompactHeightfieldRegions = 0x25;
            static constexpr std::uintptr_t bSkipContourSimplification = 0x25;
            static constexpr std::uintptr_t bTileCacheContours = 0x25;
            static constexpr std::uintptr_t bTileCacheDetailMesh = 0x25;
            static constexpr std::uintptr_t bTileCacheLayerAreas = 0x25;
            static constexpr std::uintptr_t bTileCacheLayerRegions = 0x25;
            static constexpr std::uintptr_t bTileCachePolyMesh = 0x25;
            static constexpr std::uintptr_t bUseMaxTileCoordinate = 0x26;
            static constexpr std::uintptr_t LinkGenerationDebugFlags = 0x28;
            static constexpr std::uintptr_t LinkGenerationSelectedEdge = 0x2C;
            static constexpr std::uintptr_t LinkGenerationSelectedConfig = 0x30;
        };

        inline static constexpr std::array<PropertyInfo, 27> Properties{{
            {"bEnabled", 0x0, "BoolProperty"},
            {"TileCoordinate", 0x4, "StructProperty"},
            {"MaxTileCoordinate", 0x10, "StructProperty"},
            {"bCollisionGeometry", 0x1C, "BoolProperty"},
            {"bDynamicAreas", 0x1C, "BoolProperty"},
            {"bGenerateDebugTileOnly", 0x1C, "BoolProperty"},
            {"HeightFieldRenderMode", 0x20, "EnumProperty"},
            {"bCompactHeightfield", 0x24, "BoolProperty"},
            {"bCompactHeightfieldEroded", 0x24, "BoolProperty"},
            {"bHeightFieldLayers", 0x24, "BoolProperty"},
            {"bHeightfieldBounds", 0x24, "BoolProperty"},
            {"bHeightfieldFromModifierAreas", 0x24, "BoolProperty"},
            {"bHeightfieldFromRasterization", 0x24, "BoolProperty"},
            {"bHeightfieldPostHeightFiltering", 0x24, "BoolProperty"},
            {"bHeightfieldPostInclusionBoundsFiltering", 0x24, "BoolProperty"},
            {"bCompactHeightfieldDistances", 0x25, "BoolProperty"},
            {"bCompactHeightfieldRegions", 0x25, "BoolProperty"},
            {"bSkipContourSimplification", 0x25, "BoolProperty"},
            {"bTileCacheContours", 0x25, "BoolProperty"},
            {"bTileCacheDetailMesh", 0x25, "BoolProperty"},
            {"bTileCacheLayerAreas", 0x25, "BoolProperty"},
            {"bTileCacheLayerRegions", 0x25, "BoolProperty"},
            {"bTileCachePolyMesh", 0x25, "BoolProperty"},
            {"bUseMaxTileCoordinate", 0x26, "BoolProperty"},
            {"LinkGenerationDebugFlags", 0x28, "UInt16Property"},
            {"LinkGenerationSelectedEdge", 0x2C, "IntProperty"},
            {"LinkGenerationSelectedConfig", 0x30, "IntProperty"},
        }};
    };

    struct SplineNavModifierComponent
    {
        static constexpr std::string_view Name = "SplineNavModifierComponent";
        static constexpr std::string_view Kind = "Class";
        static constexpr std::string_view Super = "NavModifierComponent";
        struct Offsets
        {
            static constexpr std::uintptr_t bUpdateNavDataOnSplineChange = 0x1C0;
            static constexpr std::uintptr_t AttachedSpline = 0x1C8;
            static constexpr std::uintptr_t StrokeWidth = 0x1F0;
            static constexpr std::uintptr_t StrokeHeight = 0x1F8;
            static constexpr std::uintptr_t SubdivisionLOD = 0x200;
        };

        inline static constexpr std::array<PropertyInfo, 5> Properties{{
            {"bUpdateNavDataOnSplineChange", 0x1C0, "BoolProperty"},
            {"AttachedSpline", 0x1C8, "StructProperty"},
            {"StrokeWidth", 0x1F0, "DoubleProperty"},
            {"StrokeHeight", 0x1F8, "DoubleProperty"},
            {"SubdivisionLOD", 0x200, "EnumProperty"},
        }};

        inline static constexpr std::array<std::string_view, 1> FunctionNames{{
            "UpdateNavigationWithComponentData",
        }};
    };

    struct SupportedAreaData
    {
        static constexpr std::string_view Name = "SupportedAreaData";
        static constexpr std::string_view Kind = "ScriptStruct";
        static constexpr std::string_view Super = "";
        struct Offsets
        {
            static constexpr std::uintptr_t AreaClassName = 0x0;
            static constexpr std::uintptr_t AreaID = 0x10;
            static constexpr std::uintptr_t AreaClass = 0x18;
        };

        inline static constexpr std::array<PropertyInfo, 3> Properties{{
            {"AreaClassName", 0x0, "StrProperty"},
            {"AreaID", 0x10, "IntProperty"},
            {"AreaClass", 0x18, "ClassProperty"},
        }};
    };

}
