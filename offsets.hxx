#pragma once
#include <cstdint>

namespace FN { struct GWorld; }

namespace FN::O
{
    namespace Engine
    {
        inline std::uintptr_t UWorld = 0x1AC816F8;
        inline std::uintptr_t GEngine = 0x1AC83068;
        inline std::uintptr_t GameViewport = 0xB70;
        inline std::uintptr_t GNames = 0x1AB35980;
        inline std::uintptr_t FNamePool = 0x1AB35980;
        inline std::uintptr_t GObjects = 0x1AC133D8;
        inline std::uintptr_t GObjectCount = 0x1AC133F0;
    }

    namespace Functions
    {
        inline std::uintptr_t GetBoneMatrix = 0x42135C;
        inline std::uintptr_t FNameToString = 0x4F692;
        inline std::uintptr_t StaticFindObject = 0x825BF4;
        inline std::uintptr_t ProcessEvent = 0xA9D7C;
    }

    namespace UObject
    {
        inline std::uintptr_t VTable = 0x0;
        inline std::uintptr_t ObjectFlags = 0x14;
        inline std::uintptr_t InternalIndex = 0x10;
        inline std::uintptr_t ClassPrivate = 0x18;
        inline std::uintptr_t NamePrivate = 0x8;
        inline std::uintptr_t OuterPrivate = 0x20;
    }

    namespace World
    {
        inline std::uintptr_t Levels = 0x1E0;
        inline std::uintptr_t OwningGameInstance = 0x240;
        inline std::uintptr_t PersistentLevel = 0x38;
        inline std::uintptr_t GameState = 0x1C8;
        inline std::uintptr_t Seconds = 0x188;
        inline std::uintptr_t NetDriver = 0x40;
        inline std::uintptr_t AuthorityGameMode = 0x1C0;
        inline std::uintptr_t NetworkManager = 0x60;
        inline std::uintptr_t PhysicsCollisionHandler = 0x68;
        inline std::uintptr_t NavigationSystem = 0x1B8;
        inline std::uintptr_t StreamingLevels = 0xA0;
        inline std::uintptr_t ParameterCollectionInstances = 0x248;
    }

    namespace Level
    {
        inline std::uintptr_t Actors = 0x208;
        inline std::uintptr_t OwningWorld = 0x98;
        inline std::uintptr_t Model = 0xA0;
        inline std::uintptr_t LevelScriptActor = 0xC8;
        inline std::uintptr_t WorldSettings = 0x2C0;
    }

    namespace GameInstance
    {
        inline std::uintptr_t LocalPlayers = 0x38;
    }

    namespace GameStateBase
    {
        inline std::uintptr_t PlayerArray = 0x288;
        inline std::uintptr_t ReplicatedWorldTimeSecondsDouble = 0x2A0;
    }

    namespace LocalPlayer
    {
        inline std::uintptr_t PlayerController = 0x30;
        inline std::uintptr_t ViewportClient = 0x78;
    }

    namespace PlayerController
    {
        inline std::uintptr_t PlayerCameraManager = 0x328;
        inline std::uintptr_t AcknowledgedPawn = 0x318;
        inline std::uintptr_t RotationInput = 0x4B0;
        inline std::uintptr_t NetConnection = 0x4A8;
        inline std::uintptr_t HUD = 0x320;
        inline std::uintptr_t Player = 0x310;
        inline std::uintptr_t InputYawScale = 0x4C8;
        inline std::uintptr_t InputPitchScale = 0x4CC;
        inline std::uintptr_t InputRollScale = 0x4D0;
        inline std::uintptr_t SpectatorPawn = 0x640;
    }

    namespace FortPlayerController
    {
        inline std::uintptr_t TargetedFortPawn = 0x16D0;
        inline std::uintptr_t InteractionComponent = 0x27D0;
        inline std::uintptr_t LocationUnderReticle = 0x21B0;
    }

    namespace PlayerState
    {
        inline std::uintptr_t PawnPrivate = 0x2E8;
        inline std::uintptr_t PlayerName = 0x308;
        inline std::uintptr_t PlayerNamePrivate = 0x308;
        inline std::uintptr_t bIsABot = 0x27A;
    }

    namespace Pawn
    {
        inline std::uintptr_t PlayerState = 0x290;
        inline std::uintptr_t Controller = 0x2A0;
        inline std::uintptr_t BaseEyeHeight = 0x27C;
        inline std::uintptr_t RemoteViewPitch = 0x284;
        inline std::uintptr_t AutoPossessPlayer = 0x280;
        inline std::uintptr_t AutoPossessAI = 0x281;
        inline std::uintptr_t AIControllerClass = 0x288;
        inline std::uintptr_t LastHitBy = 0x298;
        inline std::uintptr_t bUseControllerRotationYaw = 0x278;
    }

    namespace Actor
    {
        inline std::uintptr_t RootComponent = 0x1B0;
        inline std::uintptr_t CustomTimeDilation = 0x68;
        inline std::uintptr_t Owner = 0x158;
        inline std::uintptr_t Instigator = 0x198;
        inline std::uintptr_t ParentComponent = 0x1D8;
        inline std::uintptr_t AttachmentReplication = 0x70;
        inline std::uintptr_t Role = 0x164;
        inline std::uintptr_t RemoteRole = 0x60;
        inline std::uintptr_t InitialLifeSpan = 0x64;
        inline std::uintptr_t bHidden = 0x58;
        inline std::uintptr_t bReplicates = 0x5B; // bit mask 0x08
        inline std::uintptr_t bActorEnableCollision = 0x5D; // bit mask 0x01
        inline std::uintptr_t NetDormancy = 0x165;
    }

    namespace Character
    {
        inline std::uintptr_t Mesh = 0x2F0;
        inline std::uintptr_t CharacterMovement = 0x2F8;
        inline std::uintptr_t CapsuleComponent = 0x300;
        inline std::uintptr_t AnimRootMotionTranslationScale = 0x428;
    }



    namespace SceneComponent
    {
        inline std::uintptr_t RelativeLocation = 0x140;
        inline std::uintptr_t ComponentVelocity = 0x188;
        inline std::uintptr_t ComponentToWorld = 0x1E0;
        inline std::uintptr_t bComponentToWorldUpdated = 0x1A0;
        inline std::uintptr_t Parent = 0xD0;
        inline std::uintptr_t AttachParent = 0xD0;
        inline std::uintptr_t AttachSocketName = 0xD8;
        inline std::uintptr_t AttachChildren = 0xE0;
        inline std::uintptr_t ClientAttachedChildren = 0xF0;
        inline std::uintptr_t RelativeRotation = 0x158;
        inline std::uintptr_t RelativeScale3D = 0x170;
        inline std::uintptr_t Mobility = 0x1A3;
        inline std::uintptr_t bVisible = 0x1A0;
        inline std::uintptr_t bHiddenInGame = 0x1A1;
        inline std::uintptr_t bAbsoluteLocation = 0x1A0;
    }

    namespace SkeletalMeshComponent
    {
        inline std::uintptr_t BoneArray = 0x660;
        inline std::uintptr_t BoneCache = 0x670;
        inline std::uintptr_t CachedComponentSpaceTransforms = 0xA10;
        inline std::uintptr_t GlobalAnimRateScale = 0xA30;
    }

    namespace FortPlayerState
    {
        inline std::uintptr_t HabaneroComponent = 0x918;
        inline std::uintptr_t Platform = 0x400;
    }

    namespace FortPlayerStateAthena
    {
        inline std::uintptr_t TeamIndex = 0xF69;
        inline std::uintptr_t KillScore = 0xF80;
        inline std::uintptr_t SeasonLevelUIDisplay = 0xF84;
    }

    namespace FortPlayerStateComponent_Habanero
    {
        inline std::uintptr_t RankedProgress = 0xD8;
    }

    namespace FortPawn
    {
        inline std::uintptr_t bIsDying = 0x728; // bit mask 0x20
        inline std::uintptr_t bIsDBNO = 0x881; // bit mask 0x80
        inline std::uintptr_t CurrentWeapon = 0x9D0;
        inline std::uintptr_t CurrentWeaponList = 0xA08;
        inline std::uintptr_t HealthSet = 0x13A8;
    }


    namespace PlayerCameraManager
    {
        inline std::uintptr_t CameraLocation = 0x15A0;
        inline std::uintptr_t CameraRotation = 0x15B8;
        inline std::uintptr_t CameraFOV = 0x15D0;
        inline std::uintptr_t PendingViewTarget = 0xC30;
        inline std::uintptr_t LastFrameCameraCachePrivate = 0x1EB0;
        inline std::uintptr_t DefaultFOV = 0x284;
        inline std::uintptr_t DefaultAspectRatio = 0x294;
        inline std::uintptr_t ViewTarget = 0x300;
        inline std::uintptr_t CameraCachePrivate = 0x1590;
        inline std::uintptr_t bDefaultConstrainAspectRatio = 0x28A8;
    }

    namespace FortWeapon
    {
        inline std::uintptr_t WeaponData = 0x5F8;
        inline std::uintptr_t AmmoCount = 0x10E8;
        inline std::uintptr_t bIsReloadingWeapon = 0x361;
        inline std::uintptr_t LastFireTime = 0xFF4;
        inline std::uintptr_t bIsChargingWeapon = 0x360;
    }

    namespace FortControllerComponent_Interaction
    {
        inline std::uintptr_t StartInteractTime = 0x280;
    }


    namespace FortItemDefinition
    {
        inline std::uintptr_t ItemName = 0x38;
        inline std::uintptr_t ItemType = 0x98;
        inline std::uintptr_t PrimaryAssetIdItemTypeOverride = 0x99;
    }

    namespace BuildingContainer
    {
        inline std::uintptr_t bAlreadySearched = 0xCE2;
        inline std::uintptr_t SearchedFlags = 0xCE2; // shared bitfield byte
        inline std::uintptr_t SpawnSourceOverride = 0xB78;
        inline std::uintptr_t SearchText = 0xD38;
        inline std::uintptr_t ChosenRandomUpgrade = 0xBC4;
    }

    namespace FortPickup
    {
        inline std::uintptr_t PrimaryPickupItemEntry = 0x368;
        inline std::uintptr_t SimulatingTooLongLength = 0x290;
        inline std::uintptr_t bPickedUp = 0x28C;
        inline std::uintptr_t PickupFlags = 0x28C; // shared bitfield byte
        inline std::uintptr_t PickupExtendedFlags = 0x28D; // shared bitfield byte
    }

    namespace FortWeaponItemDefinition
    {
        inline std::uintptr_t DisplayTier = 0x296;
    }

    namespace Controller
    {
        inline std::uintptr_t ControlRotation = 0x2E8;
    }

    namespace FString
    {
        inline std::uintptr_t FData = 0x0; // rahhhh
        inline std::uintptr_t FLength = 0x8;
    }
}
